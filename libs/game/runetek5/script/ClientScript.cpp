// libs/game/runetek5/script/ClientScript.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientScript.h"

namespace jag::game {
    // 0x1039b4ae8, 32 bytes, __common; set at startup by ___cxx_global_var_init.77
    OpObjValue ClientScript::m_nullOpObj = OpObjValue();

    // 0x1003cfcf0, 1232 bytes, placed by class name and debug map
    // ClientScript::Load(PacketT<Array<unsigned char, eastl::allocator> >&, ConfigProvider&)
    undefined* ClientScript::Load(PacketT* param_1, ConfigProvider* param_2) {
        undefined2 uVar1;
        ClientScript* pCVar2;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_00;
        byte bVar3;
        ushort uVar4;
        ushort uVar5;
        uint uVar6;
        undefined4 uVar7;
        long lVar8;
        hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::fixed_hashtable_allocator<18ul, 16ul, 16ul, 4ul, 0ul, true, eastl::allocator>, false>* this_01;
        undefined4* puVar9;
        undefined8 uVar10;
        undefined8 uVar11;
        ulong uVar12;
        VarDomainType* pVVar13;
        shared_ptr* psVar14;
        OpObjValue* pOVar15;
        uint* puVar16;
        undefined2* puVar17;
        long lVar18;
        longlong lVar19;
        undefined* puVar20;
        undefined1* puVar21;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_90[24];
        ulong local_78;
        undefined1* local_70;
        ConfigProvider* local_68;
        ClientScript* local_60;
        Array<unsigned short, eastl::allocator>* local_58;
        undefined* local_50;
        Array<int, eastl::allocator>* local_48;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* local_40;
        uint local_34;

        local_68 = param_2;
        lVar8 = param_1->GetTextureAtlas();
        param_1->SetPos(lVar8 - 2);
        uVar6 = param_1->g2();
        lVar8 = param_1->GetTextureAtlas();
        local_78 = (lVar8 - ((ulong)uVar6 & 65535)) - 18;
        param_1->SetPos(local_78);
        uVar7 = param_1->g4();
        local_58 = (Array<unsigned short, eastl::allocator>*)CONCAT44(local_58._4_4_, uVar7);
        uVar4 = param_1->g2();
        m_localIntCount = (uint)uVar4;
        uVar4 = param_1->g2();
        m_localObjCount = (uint)uVar4;
        uVar4 = param_1->g2();
        m_localLongCount = (uint)uVar4;
        uVar4 = param_1->g2();
        field_3900 = (uint)uVar4;
        uVar4 = param_1->g2();
        field_3904 = (uint)uVar4;
        uVar4 = param_1->g2();
        field_3908 = (uint)uVar4;
        local_60 = this;
        bVar3 = param_1->g1();
        local_40 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1;
        if (bVar3 != 0) {
            puVar21 = &local_60->field_3912;
            local_50 = (undefined*)(ulong)bVar3;
            puVar20 = (undefined*)0;
            puVar21->set_max_size((ulong)local_50, 0);
            do {
                uVar4 = param_1->g2();
                if (uVar4 != 0) {
                    uVar6 = (uint)uVar4;
                    do {
                        local_34 = param_1->g4s();
                        uVar7 = param_1->g4s();
                        this_01 = (hash_map<
                                   int, int, eastl::hash<int>, eastl::equal_to<int>,
                                   eastl::fixed_hashtable_allocator<18ul, 16ul, 16ul, 4ul, 0ul, true, eastl::allocator>,
                                   false>*)Array<eastl::fixed_hash_map<int, int, 16ul, 17ul, true, eastl::hash<int>,
                                                                       eastl::equal_to<int>, false, eastl::allocator>,
                                                 eastl::allocator>::
                        operator[]((Array<eastl::fixed_hash_map<int, int, 16ul, 17ul, true, eastl::hash<int>,
                                                                eastl::equal_to<int>, false, eastl::allocator>,
                                          eastl::allocator>*)puVar21,
                                   (ulong)puVar20);
                        puVar9 = (undefined4*)eastl::hash_map<
                            int, int, eastl::hash<int>, eastl::equal_to<int>,
                            eastl::fixed_hashtable_allocator<18ul, 16ul, 16ul, 4ul, 0ul, true, eastl::allocator>,
                            false>::operator[](this_01, (int*)&local_34);
                        *puVar9 = uVar7;
                        uVar6 = uVar6 - 1;
                        param_1 = (PacketT*)local_40;
                    } while (uVar6 != 0);
                }
                puVar20 = puVar20 + 1;
            } while (puVar20 != local_50);
        }
        param_1->SetPos(0);
        pCVar2 = local_60;
        local_70 = &local_60->field_48;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, (basic_string*)local_70,
            false);
        uVar12 = (ulong)local_58 & 4294967295;
        local_58 = (Array<unsigned short, eastl::allocator>*)&pCVar2->field_80;
        (&pCVar2->field_80, uVar12, 0)->set_max_size();
        local_48 = (Array<int, eastl::allocator>*)&pCVar2->field_104;
        local_48->set_max_size(uVar12, 0);
        local_34 = local_34 & 4294901760;
        puVar21 = &pCVar2->field_128;
        do {
            uVar12 = param_1->size();
            if (local_78 <= uVar12) {
                return DataStatus::READY;
            }
            uVar4 = param_1->g2();
            if (uVar4 < 2137) {
                lVar8 = std::array<ClientScriptOpCode, 2137ul>::operator[]((ulong)uVar4);
                this_00 = local_40;
                if ((short)uVar4 < 526) {
                    if (uVar4 != 101) {
                        if (uVar4 != 498)
                            goto LAB_1003d00d9;
                        goto LAB_1003cffd8;
                    }
                    bVar3 = local_40->g1();
                    lVar18 = BaseVarType::GetByID((uint)bVar3);
                    if (lVar18 == BaseVarType::INTEGER) {
                        lVar8 = std::array<ClientScriptOpCode, 2137ul>::operator[](2019);
                    LAB_1003d00f6:
                        uVar6 = this_00->g4s();
                        goto LAB_1003d0015;
                    }
                    if (lVar18 == BaseVarType::LONG) {
                        lVar8 = std::array<ClientScriptOpCode, 2137ul>::operator[](599);
                        lVar19 = local_40->g8s();
                        pOVar15 = (OpObjValue*)eastl::hash_map<
                            unsigned short, OpObjValue, eastl::hash<unsigned short>, eastl::equal_to<unsigned short>,
                            eastl::fixed_hashtable_allocator<66ul, 48ul, 64ul, 8ul, 0ul, true, eastl::allocator>,
                            false>::operator[]((hash_map<unsigned short, OpObjValue, eastl::hash<unsigned short>,
                                                         eastl::equal_to<unsigned short>,
                                                         eastl::fixed_hashtable_allocator<66ul, 48ul, 64ul, 8ul, 0ul,
                                                                                          true, eastl::allocator>,
                                                         false>*)puVar21,
                                               (ushort*)&local_34);
                        OpObjValue::operator=(pOVar15, lVar19);
                    } else if (lVar18 == BaseVarType::STRING) {
                        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                            eastl::basic_string<char, BucketAllocatorEASTL>>(local_90, SUB81(local_40, 0));
                        pOVar15 = (OpObjValue*)eastl::hash_map<
                            unsigned short, OpObjValue, eastl::hash<unsigned short>, eastl::equal_to<unsigned short>,
                            eastl::fixed_hashtable_allocator<66ul, 48ul, 64ul, 8ul, 0ul, true, eastl::allocator>,
                            false>::operator[]((hash_map<unsigned short, OpObjValue, eastl::hash<unsigned short>,
                                                         eastl::equal_to<unsigned short>,
                                                         eastl::fixed_hashtable_allocator<66ul, 48ul, 64ul, 8ul, 0ul,
                                                                                          true, eastl::allocator>,
                                                         false>*)puVar21,
                                               (ushort*)&local_34);
                        OpObjValue::operator=(pOVar15, local_90);
                        local_90->~basic_string();
                    } else if (lVar18 == BaseVarType::COORDFINE) {
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/script/ClientScript.cpp",
                                        88, "ClientScript: Coordfine not supported!");
                    }
                } else {
                    if (uVar4 == 526) {
                    LAB_1003cffd8:
                        uVar5 = local_40->g2();
                        psVar14 = (shared_ptr*)local_68->GetVarBitType((uint)uVar5);
                        pOVar15 = (OpObjValue*)eastl::hash_map<
                            unsigned short, OpObjValue, eastl::hash<unsigned short>, eastl::equal_to<unsigned short>,
                            eastl::fixed_hashtable_allocator<66ul, 48ul, 64ul, 8ul, 0ul, true, eastl::allocator>,
                            false>::operator[]((hash_map<unsigned short, OpObjValue, eastl::hash<unsigned short>,
                                                         eastl::equal_to<unsigned short>,
                                                         eastl::fixed_hashtable_allocator<66ul, 48ul, 64ul, 8ul, 0ul,
                                                                                          true, eastl::allocator>,
                                                         false>*)puVar21,
                                               (ushort*)&local_34);
                        OpObjValue::operator=(pOVar15, psVar14);
                    } else if ((uVar4 == 1845) || (uVar4 == 1266)) {
                        bVar3 = local_40->g1();
                        pVVar13 = (VarDomainType*)VarDomainType::GetByID((uint)bVar3);
                        uVar5 = this_00->g2();
                        psVar14 = (shared_ptr*)local_68->GetVarType(pVVar13, (uint)uVar5);
                        pOVar15 = (OpObjValue*)eastl::hash_map<
                            unsigned short, OpObjValue, eastl::hash<unsigned short>, eastl::equal_to<unsigned short>,
                            eastl::fixed_hashtable_allocator<66ul, 48ul, 64ul, 8ul, 0ul, true, eastl::allocator>,
                            false>::operator[]((hash_map<unsigned short, OpObjValue, eastl::hash<unsigned short>,
                                                         eastl::equal_to<unsigned short>,
                                                         eastl::fixed_hashtable_allocator<66ul, 48ul, 64ul, 8ul, 0ul,
                                                                                          true, eastl::allocator>,
                                                         false>*)puVar21,
                                               (ushort*)&local_34);
                        OpObjValue::operator=(pOVar15, psVar14);
                    } else {
                    LAB_1003d00d9:
                        if (*(char*)(lVar8 + 10) != '\0')
                            goto LAB_1003d00f6;
                    }
                    bVar3 = this_00->g1();
                    uVar6 = (uint)bVar3;
                LAB_1003d0015:
                    puVar16 = (uint*)Array<int, eastl::allocator>::operator[](local_48, (ulong)(ushort)local_34);
                    *puVar16 = uVar6;
                }
                uVar1 = *(undefined2*)(lVar8 + 8);
                puVar17 =
                    (undefined2*)Array<unsigned short, eastl::allocator>::operator[](local_58, (ulong)(ushort)local_34);
                *puVar17 = uVar1;
                if ((ushort)local_34 == -1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("opCount < std::numeric_limits<decltype(opCount)>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "script/ClientScript.cpp",
                              111, (char*)0);
                }
                local_34 = CONCAT22(local_34._2_2_, (ushort)local_34 + 1);
                param_1 = (PacketT*)local_40;
            } else {
                uVar10 = logger::default_logger();
                uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar10, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/script/ClientScript.cpp",
                                    54, "ClientScript: Unknown op-code: %u, failed to decode script: %s", uVar4,
                                    uVar11);
                local_50 = DataStatus::MISSING;
            }
            if (2136 < uVar4) {
                return local_50;
            }
        } while (true);
    }

    // 0x1003d0480, 16 bytes, placed by class name and debug map
    // ClientScript::ProfilingScriptCalled()
    void ClientScript::ProfilingScriptCalled() {
        field_32 = field_32 + 1;
    }

    // 0x1003d0490, 32 bytes, placed by class name and debug map
    // ClientScript::ProfilingScriptFinished(unsigned long long, unsigned long long)
    void ClientScript::ProfilingScriptFinished(ulonglong param_1, ulonglong param_2) {
        field_16 = field_16 + param_1;
        field_24 = field_24 + param_2;
        field_0 = field_0 + param_1;
        field_8 = field_8 + param_2;
    }

    // 0x1003d04b0, 16 bytes, placed by class name and debug map
    // ClientScript::ProfilingChildScriptFinished(unsigned long long, unsigned long long)
    void ClientScript::ProfilingChildScriptFinished(ulonglong param_1, ulonglong param_2) {
        field_0 = field_0 + param_1;
        field_8 = field_8 + param_2;
    }

    // 0x1003d9e10, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.77
    void ___cxx_global_var_init_77() {
        new (&ClientScript::m_nullOpObj) OpObjValue();
        ___cxa_atexit(PTR__OpObjValue_100ee65d8, &ClientScript::m_nullOpObj, 4294967296);
    }

} // namespace jag::game
