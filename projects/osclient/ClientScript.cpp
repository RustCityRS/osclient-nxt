// projects/osclient/ClientScript.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ClientScript.h"

namespace jag::oldscape {
    // 0x100f8adf0, 10496 bytes, __common; set at startup by ___cxx_global_var_init.55
    LRUHashCache<ClientScript, 128ul, 129ul, false, unsigned long long> ClientScript::m_cache =
        LRUHashCache<ClientScript, 128ul, 129ul, false, unsigned long long>(128, "LRUHashCache");

    // 0x100180ed0, 288 bytes, placed by class name and debug map
    // ClientScript::Get(int)
    shared_ptr* ClientScript::Get(int param_1) {
        shared_ptr* psVar2;
        Client* this;
        PacketJ* pPVar4;
        long lVar5;
        shared_ptr local_48;
        ulonglong local_38[2];
        ulonglong local_28;

        local_38[0] = (ulonglong)param_1;
        psVar2 = (shared_ptr*)LRUHashCache<ClientScript, 128ul, 129ul, false, unsigned long long>::Find(
            (ulonglong*)&m_cache);
        if (!operator!=(psVar2, (_func_decltype_nullptr*)0)) {
            new (local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            this = (Client*)Client::Instance();
            psVar2 = (shared_ptr*)GetClientScripts();
            if ((undefined*)psVar2->GetFile((int)local_38, param_1, 0) == DataStatus::READY) {
                pPVar4 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_38);
                DecodeScript((ClientScript*)&local_48, pPVar4);
                lVar5 = shared_ptr<ClientScript>::operator->((shared_ptr<ClientScript>*)&local_48);
                *(ulonglong*)(lVar5 + 32) = (ulonglong)param_1;
                local_28 = (ulonglong)param_1;
                m_cache.Put(&local_48, 1, &local_28);
                local_28 = (ulonglong)param_1;
                psVar2 = (shared_ptr*)LRUHashCache<ClientScript, 128ul, 129ul, false, unsigned long long>::Find(
                    (ulonglong*)&m_cache);
                local_48.~shared_ptr();
            } else {
                psVar2 = (shared_ptr*)&g_nullScript;
            }
            local_38->~shared_ptr();
        }
        return psVar2;
    }

    // 0x1001810a0, 784 bytes, placed by class name and debug map
    // ClientScript::DecodeScript(PacketJ<Array<unsigned char, eastl::allocator> >&)
    ClientScript* ClientScript::DecodeScript(PacketJ* param_1) {
        vector<eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
               eastl::allocator>* this_00;
        eastl::string* pbVar1;
        byte bVar2;
        ushort uVar3;
        uint uVar4;
        undefined4 uVar5;
        uint uVar6;
        long lVar7;
        hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>* this_01;
        undefined4* puVar8;
        eastl::string* this_02;
        uint* puVar9;
        ulong uVar10;
        int iVar11;
        ulong uVar12;
        int local_78[8];
        ulong local_58;
        ClientScript* local_50;
        int local_44;
        Array<int, eastl::allocator>* local_40;
        eastl::string* local_38;

        make_shared<ClientScript>((jag*)this);
        local_50 = this;
        local_38 = (eastl::string*)shared_ptr<ClientScript>::operator*((shared_ptr<ClientScript>*)this);
        lVar7 = param_1->GetTextureAtlas();
        param_1->SetPos(lVar7 - 2);
        uVar4 = param_1->g2();
        lVar7 = param_1->GetTextureAtlas();
        local_58 = (lVar7 - ((ulong)uVar4 & 65535)) - 14;
        param_1->SetPos(local_58);
        local_44 = param_1->g4();
        pbVar1 = local_38;
        uVar3 = param_1->g2();
        *(uint*)(pbVar1 + 112) = (uint)uVar3;
        uVar3 = param_1->g2();
        *(uint*)(pbVar1 + 116) = (uint)uVar3;
        uVar3 = param_1->g2();
        *(uint*)(pbVar1 + 120) = (uint)uVar3;
        uVar3 = param_1->g2();
        *(uint*)(pbVar1 + 124) = (uint)uVar3;
        bVar2 = param_1->g1();
        if (bVar2 != 0) {
            this_00 =
                (vector<eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                        eastl::allocator>*)(local_38 + 136);
            eastl::vector<eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                          eastl::allocator>::resize(this_00, (ulong)bVar2);
            local_40 = (Array<int, eastl::allocator>*)0;
            do {
                uVar3 = param_1->g2();
                this_01 =
                    (hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)eastl::vector<
                        eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                        eastl::allocator>::operator[](this_00, (ulong)local_40);
                if (uVar3 != 0) {
                    iVar11 = uVar3 + 1;
                    do {
                        local_78[0] = param_1->g4();
                        uVar5 = param_1->g4();
                        puVar8 = (undefined4*)eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>,
                                                              eastl::allocator, false>::operator[](this_01, local_78);
                        *puVar8 = uVar5;
                        iVar11 = iVar11 + -1;
                    } while (1 < iVar11);
                }
                local_40 = (Array<int, eastl::allocator>*)((long)local_40 + 1);
            } while (local_40 != (Array<int, eastl::allocator>*)(ulong)bVar2);
        }
        param_1->SetPos(0);
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)local_78, SUB81(param_1, 0));
        pbVar1 = local_38;
        eastl::string::operator=(local_38, (basic_string*)local_78);
        local_78->~basic_string();
        uVar12 = (ulong)local_44;
        ((pbVar1 + 40))->set_max_size(uVar12, 3);
        local_40 = (Array<int, eastl::allocator>*)(local_38 + 64);
        local_40->set_max_size(uVar12, 3);
        local_38 = local_38 + 88;
        local_38->set_max_size(uVar12, 3);
        uVar12 = param_1->size();
        if (uVar12 < local_58) {
            uVar12 = 0;
            do {
                uVar4 = param_1->g2();
                uVar3 = (ushort)uVar4;
                if (uVar3 == 3) {
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::string>((PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)local_78,
                                       SUB81(param_1, 0));
                    this_02 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](
                        (Array<eastl::string, eastl::allocator>*)local_38, uVar12);
                    eastl::string::operator=(this_02, (basic_string*)local_78);
                    local_78->~basic_string();
                } else if ((uVar3 < 100) && ((39 < uVar3 || ((824635817984U >> ((ulong)uVar4 & 63) & 1) == 0)))) {
                    uVar5 = param_1->g4();
                    puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](local_40, uVar12);
                    *puVar8 = uVar5;
                } else {
                    uVar6 = param_1->g1();
                    puVar9 = (uint*)Array<int, eastl::allocator>::operator[](local_40, uVar12);
                    *puVar9 = uVar6 & 255;
                }
                puVar9 = (uint*)Array<ScriptOp, eastl::allocator>::operator[](
                    (Array<ScriptOp, eastl::allocator>*)(pbVar1 + 40), uVar12);
                uVar12 = uVar12 + 1;
                *puVar9 = uVar4 & 65535;
                uVar10 = param_1->size();
            } while (uVar10 < local_58);
        }
        return local_50;
    }

    // 0x100181520, 160 bytes, placed by class name and debug map
    // ClientScript::Get(rs2lib::ClientTriggerType::ID, int, int)
    shared_ptr* ClientScript::Get(int param_1, int param_2, int param_3) {
        bool bVar1;
        undefined4 uVar2;
        shared_ptr* psVar3;
        shared_ptr* psVar4;

        uVar2 = ScriptTriggerHelpers::GetScriptHash(param_2, param_1);
        psVar3 = (shared_ptr*)FindTriggeredScript(uVar2, param_1);
        bVar1 = operator!=(psVar3, (shared_ptr*)&g_nullScript);
        if (!bVar1) {
            uVar2 = ScriptTriggerHelpers::GetCategoryScriptHash(param_3, param_1);
            psVar3 = (shared_ptr*)FindTriggeredScript(uVar2, param_1);
            bVar1 = operator!=(psVar3, (shared_ptr*)&g_nullScript);
            if (!bVar1) {
                uVar2 = ScriptTriggerHelpers::GetGlobalScriptHash(param_1);
                psVar4 = (shared_ptr*)FindTriggeredScript(uVar2, param_1);
                bVar1 = operator!=(psVar4, (shared_ptr*)&g_nullScript);
                psVar3 = (shared_ptr*)&g_nullScript;
                if (bVar1) {
                    psVar3 = psVar4;
                }
            }
        }
        return psVar3;
    }

    // 0x1001815d0, 400 bytes, placed by class name
    // ClientScript::FindTriggeredScript(int, rs2lib::ClientTriggerType::ID)
    shared_ptr* ClientScript::FindTriggeredScript(int param_1, undefined4 param_2) {
        ulonglong uVar1;
        int iVar3;
        shared_ptr* psVar4;
        Client* pCVar5;
        Js5* pJVar6;
        _func_decltype_nullptr* p_Var7;
        PacketJ* pPVar9;
        long lVar10;
        ScriptTriggerHelpers local_70[32];
        shared_ptr local_50;
        shared_ptr local_40;
        ulonglong local_30;

        local_30 = (long)param_1 << 16;
        psVar4 = (shared_ptr*)LRUHashCache<ClientScript, 128ul, 129ul, false, unsigned long long>::Find(
            (ulonglong*)&m_cache);
        if (!operator!=(psVar4, (shared_ptr*)&g_nullScript)) {
            ScriptTriggerHelpers::HashToJs5GroupString<eastl::string>(local_70, param_1);
            pCVar5 = (Client*)Client::Instance();
            pJVar6 = (Js5*)pCVar5->GetClientScripts();
            p_Var7 = (_func_decltype_nullptr*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar3 = pJVar6->GetGroupId(p_Var7);
            psVar4 = (shared_ptr*)&g_nullScript;
            if (iVar3 != -1) {
                new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var7);
                pCVar5 = (Client*)Client::Instance();
                pJVar6 = (Js5*)pCVar5->GetClientScripts();
                if ((undefined*)pJVar6->GetFile(&local_50, iVar3) == DataStatus::READY) {
                    pPVar9 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_50);
                    DecodeScript((ClientScript*)&local_40, pPVar9);
                    lVar10 = shared_ptr<ClientScript>::operator->((shared_ptr<ClientScript>*)&local_40);
                    uVar1 = local_30;
                    *(undefined4*)(lVar10 + 128) = param_2;
                    lVar10 = shared_ptr<ClientScript>::operator->((shared_ptr<ClientScript>*)&local_40);
                    *(ulonglong*)(lVar10 + 32) = uVar1;
                    m_cache.Put(&local_40, 1, &local_30);
                    psVar4 = (shared_ptr*)LRUHashCache<ClientScript, 128ul, 129ul, false, unsigned long long>::Find(
                        (ulonglong*)&m_cache);
                    local_40.~shared_ptr();
                } else {
                    psVar4 = (shared_ptr*)&g_nullScript;
                }
                local_50.~shared_ptr();
            }
            local_70->~basic_string();
        }
        return psVar4;
    }

    // 0x1001b65e0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.55
    void ___cxx_global_var_init_55() {
        new (&ClientScript::m_cache)
            LRUHashCache<ClientScript, 128ul, 129ul, false, unsigned long long>(128, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5620, &ClientScript::m_cache, 4294967296);
    }

} // namespace jag::oldscape
