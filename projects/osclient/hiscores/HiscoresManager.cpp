// projects/osclient/hiscores/HiscoresManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "HiscoresManager.h"
#include "HiscoresManager.inl"

namespace jag::oldscape {
    // 0x100f8a638, 16 bytes, __common; set at startup by ___cxx_global_var_init.61
    HiscoresEntry HiscoresManager::NULL_ENTRY = HiscoresEntry();

    // 0x100016ec0, 208 bytes, placed by class name and debug map
    // HiscoresManager::UnpackHiscoresPacket(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, ErrorCapture&)
    void HiscoresManager::UnpackHiscoresPacket(PacketJ* param_1, ErrorCapture* param_2) {
        char cVar1;
        eastl::string local_50[32];
        allocator local_30[8];

        cVar1 = param_1->g1();
        if (cVar1 == field_281) {
            ResetPendingRequests(this);
            cVar1 = param_1->g1();
            if (cVar1 == '\x01') {
                OnHiscoresPacketError(this, param_1, param_2);
            } else if (cVar1 == '\0') {
                UnpackHiscoresPacketInner(this, param_1, param_2);
            } else {
                eastl::allocator::allocator(local_30, "EASTL basic_string");
                eastl::string::basic_string(local_50, "Unknown server response", local_30);
                RaiseCriticalError(this, param_2, (basic_string*)local_50);
                eastl::string::~basic_string(local_50);
            }
        }
    }

    // 0x100016f90, 352 bytes, placed by class name and debug map
    // HiscoresManager::UnpackHiscoresPacketInner(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, ErrorCapture&)
    void HiscoresManager::UnpackHiscoresPacketInner(PacketJ* param_1, ErrorCapture* param_2) {
        char cVar1;
        uint uVar2;
        HiscoresManager* pHVar4;
        eastl::string local_50[32];
        allocator local_30[8];

        cVar1 = param_1->g1();
        if (cVar1 == '\x01') {
            Reset(this);
            pHVar4 = (HiscoresManager*)param_1;
            uVar2 = param_1->g1();
            cVar1 = UnpackEntriesFromServerPacket(pHVar4, uVar2 & 255, (hash_map*)this, param_1);
            if ((cVar1 != '\0') && (cVar1 = UnpackOverallEntryFromServerPacket(this, param_1), cVar1 != '\0')) {
                pHVar4 = (HiscoresManager*)param_1;
                uVar2 = param_1->g2();
                cVar1 = UnpackEntriesFromServerPacket(pHVar4, uVar2 & 65535, (hash_map*)&field_56, param_1);
                if (cVar1 != '\0') {
                    if (GetStatus(this) != 0) {
                        return;
                    }
                    eastl::allocator::allocator(local_30, "EASTL basic_string");
                    eastl::string::basic_string(local_50, "No data found", local_30);
                    RaiseError(this, (basic_string*)local_50);
                    goto LAB_1000170c2;
                }
            }
            eastl::allocator::allocator(local_30, "EASTL basic_string");
            eastl::string::basic_string(local_50, "Bad response from server", local_30);
            RaiseCriticalError(this, param_2, (basic_string*)local_50);
        } else {
            eastl::allocator::allocator(local_30, "EASTL basic_string");
            eastl::string::basic_string(local_50, "Version mismatch from server", local_30);
            RaiseCriticalError(this, param_2, (basic_string*)local_50);
        }
    LAB_1000170c2:
        eastl::string::~basic_string(local_50);
    }

    // 0x100017170, 176 bytes, placed by class name
    // HiscoresManager::UnpackEntriesFromServerPacket(int, eastl::hash_map<int, HiscoresEntry, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    undefined8 HiscoresManager::UnpackEntriesFromServerPacket(int param_1, hash_map* param_2, PacketJ* param_3) {
        ushort uVar1;
        uint uVar2;
        ulong uVar3;
        undefined8* puVar4;
        HiscoresEntry local_48;
        uint local_34;

        if ((param_1 < 0) || (uVar3 = param_3->GetSpace(), uVar3 < (ulong)((long)param_1 * 10))) {
            return 0;
        }
        if (param_1 < 1) {
            return 1;
        }
        do {
            new (&local_48) HiscoresEntry();
            uVar1 = param_3->g2();
            local_34 = (uint)uVar1;
            local_48.field_0 = param_3->g4();
            uVar2 = param_3->g4();
            local_48.field_8 = (ulong)uVar2;
            puVar4 = (undefined8*)
                eastl::hash_map<int, HiscoresEntry, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                false>::operator[]((hash_map<int, HiscoresEntry, eastl::hash<int>, eastl::equal_to<int>,
                                                             eastl::allocator, false>*)param_2,
                                                   (int*)&local_34);
            *puVar4 = CONCAT44(local_48._4_4_, local_48.field_0);
            puVar4[1] = local_48.field_8;
            param_1 = param_1 + -1;
        } while (param_1 != 0);
        return 1;
    }

    // 0x1000172f0, 240 bytes, placed by class name
    // HiscoresManager::RequestFromP2PService(eastl::string const&, HiscoresInstance)
    void HiscoresManager::RequestFromP2PService(basic_string* param_1, undefined4 param_3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_00;
        char cVar1;
        int iVar2;
        undefined4 uVar3;
        long lVar4;
        ServerConnection* pSVar5;
        undefined8 uVar6;
        undefined1 local_70[64];

        lVar4 = Client::Instance();
        pSVar5 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(lVar4 + 19120));
        uVar6 = pSVar5->GetOutgoingEncryption();
        local_70->MakeClientMessage(42, uVar6);
        iVar2 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
            param_1, false);
        this_00 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_70 + 8);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(this_00, iVar2 + 2);
        cVar1 = field_281 + '\x01';
        field_281 = cVar1;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(this_00, cVar1);
        uVar3 = HiscoresInstanceToID(param_3);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(this_00, uVar3);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>(this_00, param_1, false);
        pSVar5 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(lVar4 + 19120));
        pSVar5->SendClientMessage(local_70);
        field_280 = 1;
        local_70->~ClientMessage();
    }

    // 0x100017400, 496 bytes, placed by class name
    // HiscoresManager::RequestFromHTTP(eastl::string const&, HiscoresInstance)
    void HiscoresManager::RequestFromHTTP(_func_decltype_nullptr* param_1, undefined4 param_3) {
        undefined1* this_00;
        basic_string* pbVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        eastl::string local_b8[32];
        eastl::string local_98[32];
        unique_ptr local_78[32];
        eastl::string local_58[32];
        allocator local_38[8];

        this_00 = &field_288;
        if (std::operator!=((unique_ptr*)this_00, param_1)) {
            this_00->reset(0);
        }
        std::make_unique<http::HTTPRequest>();
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator=(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00, local_78);
        local_78->~unique_ptr();
        jag::auth::web::AuthWebUtils::ConfigureBasicHeader((unique_ptr*)this_00, "application/x-www-form-urlencoded",
                                                           "application/json");
        new (local_78) eastl::string();
        HiscoresInstanceToName((eastl::string*)local_78, param_3);
        eastl::string::basic_string(local_58);
        if (m_dataSource == 1) {
            pbVar2 = (basic_string*)Client::Instance();
            eastl::allocator::allocator(local_38, "EASTL basic_string");
            eastl::string::basic_string(local_98, "secure", local_38);
            local_b8->GetBaseUrl(pbVar2, SUB81(local_98, 0));
            local_58->append();
            eastl::string::~basic_string(local_b8);
            eastl::string::~basic_string(local_98);
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::append_sprintf((char*)local_58, "m=%s/index_lite.ws?player=%s", uVar3, uVar4);
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "hiscores/HiscoresManager.cpp",
                                121, "JSON endpoint for hiscores not yet implemented. Request will fail.");
        }
        pbVar2 = (basic_string*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        pbVar2->Get();
        eastl::string::~basic_string(local_58);
        local_78->~basic_string();
    }

    // 0x100017700, 544 bytes, placed by class name
    // HiscoresManager::ServiceHTTPRequests()
    void HiscoresManager::ServiceHTTPRequests() {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        int iVar3;
        HTTPRequest* this_01;
        TerrainPatch* this_02;
        RT7Core* pRVar4;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_03;
        char* pcVar5;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        ulong uVar6;
        undefined8 uVar7;
        _func_decltype_nullptr* in_RSI;
        eastl::string local_70[32];
        allocator local_50[32];
        allocator local_30[8];

        if (m_dataSource != 0) {
            this_00 = &field_288;
            bVar1 = std::operator!=((unique_ptr*)this_00, in_RSI);
            if (bVar1) {
                this_01 = (HTTPRequest*)
                              std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                  (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                cVar2 = this_01->IsRequestComplete();
                if (cVar2 != '\0') {
                    field_240 = 0;
                    this_02 =
                        (TerrainPatch*)
                            std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                    iVar3 = this_02->GetGridSize();
                    if (iVar3 == 200) {
                        Reset(this);
                        pRVar4 =
                            (RT7Core*)
                                std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                        this_03 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                         std::default_delete<LoadingScreenScript::AnimLayer>>,
                                         eastl::allocator>*)pRVar4->GetMSAASampleCount();
                        pcVar5 = (char*)this_03->data();
                        pRVar4 =
                            (RT7Core*)
                                std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                        this_04 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pRVar4->GetMSAASampleCount();
                        uVar6 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
                        eastl::allocator::allocator(local_50, "EASTL basic_string");
                        eastl::string::basic_string(local_70, pcVar5, uVar6, local_50);
                        if (m_dataSource == 1) {
                            UnpackLiteResponse((basic_string*)this);
                        } else {
                            uVar7 = logger::default_logger();
                            logger::Logger::Log(uVar7, 0, 2,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/hiscores/HiscoresManager.cpp",
                                                147, "JSON endpoint for hiscores not yet implemented.");
                            eastl::allocator::allocator(local_30, "EASTL basic_string");
                            new (local_50) eastl::string("No response received", local_30);
                            RaiseError(this, (basic_string*)local_50);
                            local_50->~basic_string();
                        }
                        iVar3 = GetStatus(this);
                        if (iVar3 == 0) {
                            eastl::allocator::allocator(local_30, "EASTL basic_string");
                            new (local_50) eastl::string("No data found", local_30);
                            RaiseError(this, (basic_string*)local_50);
                            local_50->~basic_string();
                        }
                    } else {
                        eastl::allocator::allocator(local_50, "EASTL basic_string");
                        eastl::string::basic_string(local_70, "An HTTP error has occurred", local_50);
                        RaiseError(this, (basic_string*)local_70);
                    }
                    eastl::string::~basic_string(local_70);
                    ResetPendingRequests(this);
                }
            }
        }
    }

    // 0x100017920, 768 bytes, placed by class name
    // HiscoresManager::UnpackLiteResponse(eastl::string const&)
    void HiscoresManager::UnpackLiteResponse(basic_string* param_1) {
        basic_string* param2;
        int iVar1;
        char* pcVar2;
        char* param0;
        undefined8* puVar3;
        uint uVar4;
        longlong local_98;
        int local_90[8];
        allocator local_70[8];
        basic_string* local_68;
        char* local_60;
        char* local_58;
        longlong local_50;
        HiscoresEntry local_48;
        int local_38;
        int local_34;

        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar2 = (char*)strdup(pcVar2);
        local_58 = (char*)0;
        param0 = _strtok_r(pcVar2, "\n", &local_58);
        param2 = param_1 + 112;
        iVar1 = _sscanf(param0, "%d,%*d,%lld", (int*)param2, &local_98);
        if (iVar1 == 2) {
            if (0 < *(int*)param2) {
                *(int*)param2 = *(int*)param2 + -1;
            }
            *(longlong*)(param_1 + 120) = local_98;
            local_60 = pcVar2;
            pcVar2 = _strtok_r((char*)0, "\n", &local_58);
            if (pcVar2 != (char*)0) {
                local_68 = param_1 + 56;
                local_38 = 0;
                local_34 = 0;
                uVar4 = 0;
                do {
                    if (uVar4 < 23) {
                        new (&local_48) HiscoresEntry();
                        iVar1 = _sscanf(pcVar2, "%d,%*d,%lld", (int*)&local_48, &local_50);
                        if (iVar1 == 2) {
                            if (0 < local_48.field_0) {
                                local_48.field_0 = local_48.field_0 + -1;
                            }
                            local_48.field_8 = local_50;
                            local_90[0] = local_34;
                            local_34 = local_34 + 1;
                            puVar3 = (undefined8*)eastl::hash_map<
                                int, HiscoresEntry, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                false>::operator[]((hash_map<int, HiscoresEntry, eastl::hash<int>, eastl::equal_to<int>,
                                                             eastl::allocator, false>*)param_1,
                                                   local_90);
                            *puVar3 = CONCAT44(local_48._4_4_, local_48.field_0);
                            puVar3[1] = local_48.field_8;
                        } else {
                            eastl::allocator::allocator(local_70, "EASTL basic_string");
                            new (local_90) eastl::string("Skill rank data in response malformed", local_70);
                            RaiseError((HiscoresManager*)param_1, (basic_string*)local_90);
                            local_90->~basic_string();
                        }
                    } else {
                        new (&local_48) HiscoresEntry();
                        iVar1 = _sscanf(pcVar2, "%d,%lld", (int*)&local_48, &local_50);
                        if (iVar1 == 2) {
                            if (0 < local_48.field_0) {
                                local_48.field_0 = local_48.field_0 + -1;
                            }
                            local_48.field_8 = local_50;
                            local_90[0] = local_38;
                            local_38 = local_38 + 1;
                            puVar3 = (undefined8*)eastl::hash_map<
                                int, HiscoresEntry, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                false>::operator[]((hash_map<int, HiscoresEntry, eastl::hash<int>, eastl::equal_to<int>,
                                                             eastl::allocator, false>*)local_68,
                                                   local_90);
                            *puVar3 = CONCAT44(local_48._4_4_, local_48.field_0);
                            puVar3[1] = local_48.field_8;
                        } else {
                            eastl::allocator::allocator(local_70, "EASTL basic_string");
                            new (local_90) eastl::string("Game rank data in response malformed", local_70);
                            RaiseError((HiscoresManager*)param_1, (basic_string*)local_90);
                            local_90->~basic_string();
                        }
                    }
                    if (iVar1 != 2)
                        break;
                    uVar4 = uVar4 + 1;
                    pcVar2 = _strtok_r((char*)0, "\n", &local_58);
                } while (pcVar2 != (char*)0);
            }
            if (local_60 != (char*)0) {
                operator_delete__(local_60);
            }
        } else {
            new (&local_48) eastl::allocator("EASTL basic_string");
            new (local_90) eastl::string("Overall rank data in response malformed", (allocator*)&local_48);
            RaiseError((HiscoresManager*)param_1, (basic_string*)local_90);
            local_90->~basic_string();
        }
    }

    // 0x1000596c0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.61
    void ___cxx_global_var_init_61() {
        new (&HiscoresManager::NULL_ENTRY) HiscoresEntry();
    }

} // namespace jag::oldscape
