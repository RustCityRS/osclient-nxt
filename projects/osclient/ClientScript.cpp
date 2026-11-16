// projects/osclient/ClientScript.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ClientScript.h"

namespace jag::oldscape {
    // 0x100f8adf0, set at startup by ___cxx_global_var_init.55
    LRUHashCache<ClientScript, 128ul, 129ul, false, unsigned long long> ClientScript::m_cache =
        LRUHashCache<ClientScript, 128ul, 129ul, false, unsigned long long>(128, "LRUHashCache");

    // 0x100180ed0
    shared_ptr<ClientScript>* ClientScript::Get(int arg1) {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        Js5* this_00;
        PacketJ<Array<unsigned char> _>* packetJ;
        long lVar3;
        shared_ptr<ClientScript> local_48;
        unsigned long long local_38[2];
        unsigned long long local_28;

        local_38[0] = (unsigned long long)arg1;
        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)m_cache.Find(*local_38);
        if (!*midiPlayerMainThread != nullptr) {
            new (local_38) shared_ptr();
            this_00 = Client::Instance()->GetClientScripts();
            if ((uint8_t*)this_00->GetFile(*local_38, arg1, 0, nullptr) == DataStatus::READY) {
                packetJ = (PacketJ<Array<unsigned char> _>*)**local_38;
                DecodeScript(&local_48, packetJ);
                lVar3 = local_48.operator->();
                *(unsigned long long*)(lVar3 + 32) = (unsigned long long)arg1;
                local_28 = (unsigned long long)arg1;
                m_cache.Put(local_48, 1, local_28);
                local_28 = (unsigned long long)arg1;
                midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)m_cache.Find(local_28);
            } else {
                midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)&g_nullScript;
            }
        }
        return (shared_ptr<ClientScript>*)midiPlayerMainThread;
    }

    // 0x1001810a0
    ClientScript* ClientScript::DecodeScript(PacketJ<Array<unsigned char>>& packetJ) {
        vector<eastl::hash_map<int, int>>* this_00;
        uint32_t uVar5;
        unsigned int uVar6;
        hash_map<int, int>* this_01;
        uint32_t* puVar8;
        eastl::string* this_02;
        unsigned int* puVar9;
        unsigned long uVar10;
        int iVar11;
        int local_78[8];
        Array<int>* local_40;

        make_shared<ClientScript>((ReturnValue*)this);
        eastl::string* local_38 = (eastl::string*)**this;
        long lVar7 = packetJ.GetTextureAtlas();
        packetJ.SetPos(lVar7 - 2);
        unsigned int uVar4 = packetJ.g2();
        lVar7 = packetJ.GetTextureAtlas();
        unsigned long local_58 = (lVar7 - ((unsigned long)uVar4 & 65535)) - 14;
        packetJ.SetPos(local_58);
        int local_44 = packetJ.g4();
        eastl::string* pbVar1 = local_38;
        unsigned short uVar3 = packetJ.g2();
        *(unsigned int*)(pbVar1 + 112) = (unsigned int)uVar3;
        uVar3 = packetJ.g2();
        *(unsigned int*)(pbVar1 + 116) = (unsigned int)uVar3;
        uVar3 = packetJ.g2();
        *(unsigned int*)(pbVar1 + 120) = (unsigned int)uVar3;
        uVar3 = packetJ.g2();
        *(unsigned int*)(pbVar1 + 124) = (unsigned int)uVar3;
        uint8_t bVar2 = packetJ.g1();
        if (bVar2 != 0) {
            this_00 = (vector<eastl::hash_map<int, int>>*)(local_38 + 136);
            this_00->resize((unsigned long)bVar2);
            local_40 = nullptr;
            do {
                uVar3 = packetJ.g2();
                this_01 = (hash_map<int, int>*)(*this_00)[(unsigned long)local_40];
                if (uVar3 != 0) {
                    iVar11 = uVar3 + 1;
                    do {
                        local_78[0] = packetJ.g4();
                        uVar5 = packetJ.g4();
                        puVar8 = (uint32_t*)(*this_01)[*local_78];
                        *puVar8 = uVar5;
                        iVar11 = iVar11 - 1;
                    } while (1 < iVar11);
                }
                local_40 = (Array<int>*)((long)local_40 + 1);
            } while (local_40 != (Array<int>*)(unsigned long)bVar2);
        }
        packetJ.SetPos(0);
        local_78->gStringCP1252ToUTF8<eastl::string>((uint8_t)packetJ);
        pbVar1 = local_38;
        *local_38 = local_78;
        unsigned long uVar12 = (unsigned long)local_44;
        ((pbVar1 + 40))->set_max_size(uVar12, 3);
        local_40 = (Array<int>*)(local_38 + 64);
        local_40->set_max_size(uVar12, 3);
        local_38 = local_38 + 88;
        local_38->set_max_size(uVar12, 3);
        uVar12 = packetJ.size();
        if (uVar12 < local_58) {
            uVar12 = 0;
            do {
                uVar4 = packetJ.g2();
                uVar3 = (unsigned short)uVar4;
                if (uVar3 == 3) {
                    local_78->gStringCP1252ToUTF8<eastl::string>((uint8_t)packetJ);
                    this_02 = (eastl::string*)(*local_38)[uVar12];
                    *this_02 = local_78;
                } else if ((uVar3 < 100) &&
                           ((39 < uVar3 || ((824635817984U >> ((unsigned long)uVar4 & 63) & 1) == 0)))) {
                    uVar5 = packetJ.g4();
                    puVar8 = (uint32_t*)(*local_40)[uVar12];
                    *puVar8 = uVar5;
                } else {
                    uVar6 = packetJ.g1();
                    puVar9 = (unsigned int*)(*local_40)[uVar12];
                    *puVar9 = uVar6 & 255;
                }
                puVar9 = (unsigned int*)(*((pbVar1 + 40)))[uVar12];
                uVar12 = uVar12 + 1;
                *puVar9 = uVar4 & 65535;
                uVar10 = packetJ.size();
            } while (uVar10 < local_58);
        }
        return this;
    }

    // 0x100181520
    shared_ptr<ClientScript>* ClientScript::Get(rs2lib::ClientTriggerType::ID id, int arg2, int arg3) {
        shared_ptr<ClientScript>* clientScript1_00;

        int iVar2 = ScriptTriggerHelpers::GetScriptHash(arg2, id);
        auto clientScript1 = FindTriggeredScript(iVar2, id);
        bool bVar1 = *clientScript1 != g_nullScript;
        if (!bVar1) {
            iVar2 = ScriptTriggerHelpers::GetCategoryScriptHash(arg3, id);
            clientScript1 = (shared_ptr<ClientScript>*)FindTriggeredScript(iVar2, id);
            bVar1 = *clientScript1 != g_nullScript;
            if (!bVar1) {
                iVar2 = ScriptTriggerHelpers::GetGlobalScriptHash(id);
                clientScript1_00 = (shared_ptr<ClientScript>*)FindTriggeredScript(iVar2, id);
                bVar1 = *clientScript1_00 != g_nullScript;
                clientScript1 = (shared_ptr<ClientScript>*)&g_nullScript;
                if (bVar1) {
                    clientScript1 = clientScript1_00;
                }
            }
        }
        return clientScript1;
    }

    // 0x1001815d0
    shared_ptr<ClientScript>* ClientScript::FindTriggeredScript(int arg1, rs2lib::ClientTriggerType::ID id) {
        unsigned long long uVar1;
        int arg2;
        shared_ptr<ClientScript>* clientScript1;
        Client* pCVar3;
        Js5* pJVar4;
        PacketJ<Array<unsigned char> _>* packetJ;
        long lVar6;
        eastl::string local_70;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_50;
        shared_ptr<ClientScript> local_40;

        unsigned long long local_30 = (long)arg1 << 16;
        clientScript1 = (shared_ptr<ClientScript>*)m_cache.Find(local_30);
        if (!*clientScript1 != g_nullScript) {
            ScriptTriggerHelpers::HashToJs5GroupString<eastl::string>((int)&local_70);
            pCVar3 = Client::Instance();
            pJVar4 = pCVar3->GetClientScripts();
            arg2 = pJVar4->GetGroupId((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin());
            clientScript1 = (shared_ptr<ClientScript>*)&g_nullScript;
            if (arg2 != -1) {
                local_50 = shared_ptr();
                pCVar3 = Client::Instance();
                pJVar4 = pCVar3->GetClientScripts();
                if ((uint8_t*)pJVar4->GetFile(local_50, arg2) == DataStatus::READY) {
                    packetJ = (PacketJ<Array<unsigned char> _>*)*local_50;
                    DecodeScript(&local_40, packetJ);
                    lVar6 = local_40.operator->();
                    uVar1 = local_30;
                    *(ID*)(lVar6 + 128) = id;
                    lVar6 = local_40.operator->();
                    *(unsigned long long*)(lVar6 + 32) = uVar1;
                    m_cache.Put(local_40, 1, local_30);
                    clientScript1 = (shared_ptr<ClientScript>*)m_cache.Find(local_30);
                } else {
                    clientScript1 = (shared_ptr<ClientScript>*)&g_nullScript;
                }
            }
        }
        return clientScript1;
    }

} // namespace jag::oldscape
