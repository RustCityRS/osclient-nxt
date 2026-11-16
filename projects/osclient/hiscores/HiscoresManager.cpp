// projects/osclient/hiscores/HiscoresManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "HiscoresManager.h"
#include "HiscoresManager.inl"

namespace jag::oldscape {
    // 0x100f8a638, set at startup by ___cxx_global_var_init.61
    HiscoresEntry HiscoresManager::NULL_ENTRY = HiscoresEntry();

    // 0x100016ec0
    void HiscoresManager::UnpackHiscoresPacket(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                               ErrorCapture& errorCapture) {
        char cVar2;
        eastl::string local_50;

        if (packetJ.g1() == field_281) {
            ResetPendingRequests();
            cVar2 = packetJ.g1();
            if (cVar2 == '\x01') {
                OnHiscoresPacketError(packetJ, errorCapture);
            } else if (!cVar2) {
                UnpackHiscoresPacketInner(packetJ, errorCapture);
            } else {
                local_50 = eastl::string("Unknown server response");
                RaiseCriticalError(errorCapture, local_50);
            }
        }
    }

    // 0x100016f90
    void HiscoresManager::UnpackHiscoresPacketInner(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                    ErrorCapture& errorCapture) {
        unsigned int uVar2;
        HiscoresManager* pHVar4;
        eastl::string local_50;

        char cVar1 = packetJ.g1();
        if (cVar1 == '\x01') {
            Reset();
            pHVar4 = (HiscoresManager*)packetJ;
            uVar2 = packetJ.g1();
            cVar1 = UnpackEntriesFromServerPacket(pHVar4, uVar2 & 255, (hash_map<int, HiscoresEntry>*)this, packetJ);
            if ((cVar1) && (cVar1 = UnpackOverallEntryFromServerPacket(packetJ), cVar1)) {
                pHVar4 = (HiscoresManager*)packetJ;
                uVar2 = packetJ.g2();
                cVar1 = UnpackEntriesFromServerPacket(pHVar4, uVar2 & 65535, (hash_map<int, HiscoresEntry>*)&field_56,
                                                      packetJ);
                if (cVar1) {
                    if (GetStatus() != 0) {
                        return;
                    }
                    local_50 = eastl::string("No data found");
                    RaiseError(local_50);
                    goto LAB_1000170c2;
                }
            }
            local_50 = eastl::string("Bad response from server");
            RaiseCriticalError(errorCapture, local_50);
        } else {
            local_50 = eastl::string("Version mismatch from server");
            RaiseCriticalError(errorCapture, local_50);
        }
    LAB_1000170c2:
    }

    // 0x100017170
    uint64_t
    HiscoresManager::UnpackEntriesFromServerPacket(int arg1, eastl::hash_map<int, HiscoresEntry>& arg2,
                                                   PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        unsigned short uVar1;
        unsigned int uVar2;
        unsigned long uVar3;
        uint64_t* puVar4;
        HiscoresEntry local_48;
        unsigned int local_34;

        if ((arg1 < 0) || (uVar3 = packetJ.GetSpace(), uVar3 < (unsigned long)((long)arg1 * 10))) {
            return 0;
        }
        if (arg1 < 1) {
            return 1;
        }
        do {
            local_48 = HiscoresEntry();
            uVar1 = packetJ.g2();
            local_34 = (unsigned int)uVar1;
            local_48.field_0 = packetJ.g4();
            uVar2 = packetJ.g4();
            local_48.field_8 = (unsigned long)uVar2;
            puVar4 = &arg2[local_34];
            *puVar4 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)local_48.field_0);
            puVar4[1] = local_48.field_8;
            arg1 = arg1 - 1;
        } while (arg1 != 0);
        return 1;
    }

    // 0x1000172f0
    void HiscoresManager::RequestFromP2PService(const eastl::string& str, HiscoresInstance hiscoresInstance) {
        uint8_t local_70[64];

        auto pCVar3 = Client::Instance();
        auto pSVar4 = pCVar3->field_19120.operator->();
        auto isaac = pSVar4->GetOutgoingEncryption();
        *local_70 = shared::ClientMessage::MakeClientMessage(42, *isaac);
        int iVar2 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(str, false);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_00 =
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_70 + 8);
        this_00->p1<shared::LoginProt::ID>(iVar2 + 2);
        uint8_t bVar1 = field_281 + 1;
        field_281 = bVar1;
        this_00->p1<shared::LoginProt::ID>((unsigned int)bVar1);
        auto publishingPlatformType = HiscoresInstanceToID(hiscoresInstance);
        this_00->p1<shared::LoginProt::ID>(publishingPlatformType);
        this_00->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(str, false);
        pSVar4 = (ServerConnection*)pCVar3->field_19120.operator->();
        pSVar4->SendClientMessage(*local_70);
        field_280 = 1;
    }

    // 0x100017400
    void HiscoresManager::RequestFromHTTP(const eastl::string& str, HiscoresInstance hiscoresInstance) {
        Client* this_00;
        uint64_t uVar2;
        uint64_t uVar3;
        ReturnValue local_b8;
        eastl::string local_98;

        uint8_t* httpRequest = &field_288;
        if (httpRequest != str) {
            httpRequest->reset(nullptr);
        }
        auto local_78 = std::make_unique<http::HTTPRequest>();
        *httpRequest = &local_78;
        jag::auth::web::AuthWebUtils::ConfigureBasicHeader(*httpRequest, "application/x-www-form-urlencoded",
                                                           "application/json");
        local_78 = eastl::string();
        HiscoresInstanceToName(&local_78, hiscoresInstance);
        eastl::string local_58;
        if (m_dataSource == 1) {
            this_00 = Client::Instance();
            local_98 = eastl::string("secure");
            local_b8 = this_00->GetBaseUrl(local_98, true);
            local_58.append(&local_b8);
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_58.append_sprintf("m=%s/index_lite.ws?player=%s", uVar2, uVar3);
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/hiscores/"
                      "HiscoresManager.cpp",
                      121, "JSON endpoint for hiscores not yet implemented. Request will fail.");
        }
        ((HTTPRequest*)(*httpRequest).operator->())->Get(&local_58);
    }

    // 0x100017700
    void HiscoresManager::ServiceHTTPRequests() {
        uint8_t* httpRequest;
        int iVar3;
        RT7Core* pRVar4;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_02;
        char* str;
        unsigned long arg2;
        void* in_RSI;
        eastl::string local_70;

        if (m_dataSource != 0) {
            httpRequest = &field_288;
            if (httpRequest != in_RSI) {
                if (((HTTPRequest*)(*httpRequest).operator->())->IsRequestComplete() != '\0') {
                    field_240 = 0;
                    iVar3 = ((TerrainPatch*)(*httpRequest).operator->())->GetGridSize();
                    if (iVar3 == 200) {
                        Reset();
                        pRVar4 = (RT7Core*)(*httpRequest).operator->();
                        this_02 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pRVar4->GetMSAASampleCount();
                        str = (char*)this_02->data();
                        pRVar4 = (RT7Core*)(*httpRequest).operator->();
                        arg2 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pRVar4->GetMSAASampleCount())
                                   ->end();
                        local_70 = eastl::string(str, arg2);
                        if (m_dataSource == 1) {
                            UnpackLiteResponse(local_70);
                        } else {
                            (logger::default_logger())
                                ->Log(false, 2,
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                      "osclient/hiscores/HiscoresManager.cpp",
                                      147, "JSON endpoint for hiscores not yet implemented.");
                            local_50 = eastl::string("No response received");
                            RaiseError(local_50);
                        }
                        iVar3 = GetStatus();
                        if (iVar3 == 0) {
                            local_50 = eastl::string("No data found");
                            RaiseError(local_50);
                        }
                    } else {
                        local_70 = eastl::string("An HTTP error has occurred");
                        RaiseError(local_70);
                    }
                    ResetPendingRequests();
                }
            }
        }
    }

    // 0x100017920
    void HiscoresManager::UnpackLiteResponse(const eastl::string& str) {
        uint64_t* puVar3;
        unsigned int uVar4;
        long long local_98;
        int local_90[8];
        hash_map<int, HiscoresEntry>* local_68;
        char* local_60;
        long long local_50;
        HiscoresEntry local_48;
        int local_38;
        int local_34;

        char* pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar2 = (char*)strdup(pcVar2);
        char* local_58 = nullptr;
        auto param0 = _strtok_r(pcVar2, "\n", &local_58);
        int* param2 = &field_112;
        int iVar1 = _sscanf(param0, "%d,%*d,%lld", param2, &local_98);
        if (iVar1 == 2) {
            if (0 < *param2) {
                *param2 = *param2 - 1;
            }
            field_120 = local_98;
            local_60 = pcVar2;
            pcVar2 = _strtok_r(nullptr, "\n", &local_58);
            if (pcVar2 != nullptr) {
                local_68 = (hash_map<int, HiscoresEntry>*)&field_56;
                local_38 = 0;
                local_34 = 0;
                uVar4 = 0;
                do {
                    if (uVar4 < 23) {
                        local_48 = HiscoresEntry();
                        iVar1 = _sscanf(pcVar2, "%d,%*d,%lld", (int*)&local_48, &local_50);
                        if (iVar1 == 2) {
                            if (0 < local_48.field_0) {
                                local_48.field_0 = local_48.field_0 - 1;
                            }
                            local_48.field_8 = local_50;
                            local_90[0] = local_34;
                            local_34 = local_34 + 1;
                            puVar3 = (uint64_t*)(*this)[*local_90];
                            *puVar3 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)local_48.field_0);
                            puVar3[1] = local_48.field_8;
                        } else {
                            new (local_90) eastl::string("Skill rank data in response malformed");
                            RaiseError(*local_90);
                        }
                    } else {
                        local_48 = HiscoresEntry();
                        iVar1 = _sscanf(pcVar2, "%d,%lld", (int*)&local_48, &local_50);
                        if (iVar1 == 2) {
                            if (0 < local_48.field_0) {
                                local_48.field_0 = local_48.field_0 - 1;
                            }
                            local_48.field_8 = local_50;
                            local_90[0] = local_38;
                            local_38 = local_38 + 1;
                            puVar3 = (uint64_t*)(*local_68)[*local_90];
                            *puVar3 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)local_48.field_0);
                            puVar3[1] = local_48.field_8;
                        } else {
                            new (local_90) eastl::string("Game rank data in response malformed");
                            RaiseError(*local_90);
                        }
                    }
                    if (iVar1 != 2)
                        break;
                    uVar4 = uVar4 + 1;
                    pcVar2 = _strtok_r(nullptr, "\n", &local_58);
                } while (pcVar2 != nullptr);
            }
            if (local_60 != nullptr) {
                operator_delete__(local_60);
            }
        } else {
            new (local_90) eastl::string("Overall rank data in response malformed");
            RaiseError(*local_90);
        }
    }

} // namespace jag::oldscape
