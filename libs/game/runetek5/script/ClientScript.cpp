// libs/game/runetek5/script/ClientScript.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientScript.h"

namespace jag::game {
    // 0x1039b4ae8, set at startup by ___cxx_global_var_init.77
    OpObjValue ClientScript::m_nullOpObj = OpObjValue();

    // 0x1003cfcf0
    uint8_t* ClientScript::Load(PacketT<Array<unsigned char>>& arg1, ConfigProvider& configProvider) {
        uint16_t uVar1;
        PacketReaderMixin<PacketT<Array<unsigned char>>>* this_00;
        unsigned int uVar7;
        hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::fixed_hashtable_allocator<18ul, 16ul, 16ul, 4ul, 0ul, true>>* this_01;
        uint32_t* puVar9;
        Logger* this_02;
        uint64_t uVar10;
        unsigned long uVar11;
        VarDomainType* varDomainType;
        shared_ptr<VarType>* varType;
        OpObjValue* pOVar12;
        shared_ptr<VarBitType>* varBitType;
        unsigned int* puVar13;
        uint16_t* puVar14;
        long lVar15;
        long long arg1_00;
        uint8_t* arg1_02;
        uint8_t* puVar16;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_90;
        Array<unsigned short>* local_58;
        uint8_t* local_50;
        unsigned int local_34;

        long lVar8 = arg1.GetTextureAtlas();
        arg1.SetPos(lVar8 - 2);
        unsigned int uVar5 = arg1.g2();
        lVar8 = arg1.GetTextureAtlas();
        unsigned long local_78 = (lVar8 - ((unsigned long)uVar5 & 65535)) - 18;
        arg1.SetPos(local_78);
        uint32_t uVar6 = arg1.g4();
        local_58 = (Array<unsigned short>*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)uVar6);
        unsigned short uVar4 = arg1.g2();
        m_localIntCount = (unsigned int)uVar4;
        uVar4 = arg1.g2();
        m_localObjCount = (unsigned int)uVar4;
        uVar4 = arg1.g2();
        m_localLongCount = (unsigned int)uVar4;
        uVar4 = arg1.g2();
        field_3900 = (unsigned int)uVar4;
        uVar4 = arg1.g2();
        field_3904 = (unsigned int)uVar4;
        uVar4 = arg1.g2();
        field_3908 = (unsigned int)uVar4;
        ClientScript* local_60 = this;
        uint8_t bVar3 = arg1.g1();
        PacketReaderMixin<PacketT<Array<unsigned char>>>* local_40 =
            (PacketReaderMixin<PacketT<Array<unsigned char>>>*)arg1;
        if (bVar3 != 0) {
            puVar16 = &local_60->field_3912;
            local_50 = (uint8_t*)(unsigned long)bVar3;
            arg1_02 = nullptr;
            puVar16->set_max_size((unsigned long)local_50, 0);
            do {
                uVar4 = arg1.g2();
                if (uVar4 != 0) {
                    uVar5 = (unsigned int)uVar4;
                    do {
                        local_34 = arg1.g4s();
                        uVar6 = arg1.g4s();
                        this_01 = (hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>,
                                            eastl::fixed_hashtable_allocator<18ul, 16ul, 16ul, 4ul, 0ul,
                                                                             true>>*)(*puVar16)[(unsigned long)arg1_02];
                        puVar9 = (uint32_t*)(*this_01)[local_34];
                        *puVar9 = uVar6;
                        uVar5 = uVar5 - 1;
                        arg1 = (PacketT<Array<unsigned char> _>*)local_40;
                    } while (uVar5 != 0);
                }
                arg1_02 = arg1_02 + 1;
            } while (arg1_02 != local_50);
        }
        arg1.SetPos(0);
        ClientScript* pCVar2 = local_60;
        uint8_t* local_70 = &local_60->field_48;
        arg1.gStringCP1252ToUTF8<eastl::string>(local_70, false);
        unsigned long arg1_01 = (unsigned long)local_58 & 4294967295;
        local_58 = (Array<unsigned short>*)&pCVar2->field_80;
        pCVar2->field_80.set_max_size(arg1_01, 0);
        Array<int>* local_48 = (Array<int>*)&pCVar2->field_104;
        local_48->set_max_size(arg1_01, 0);
        local_34 = local_34 & 4294901760;
        puVar16 = &pCVar2->field_128;
        do {
            uVar11 = arg1.size();
            if (local_78 <= uVar11) {
                return DataStatus::READY;
            }
            uVar4 = arg1.g2();
            uVar5 = (unsigned int)uVar4;
            if (uVar5 < 2137) {
                lVar8 = (*((array<ClientScriptOpCode, 2137ul>*)(unsigned long)uVar4))[arg1_01];
                this_00 = local_40;
                if ((short)uVar4 < 526) {
                    if (uVar4 != 101) {
                        if (uVar5 != 498)
                            goto LAB_1003d00d9;
                        goto LAB_1003cffd8;
                    }
                    bVar3 = local_40->g1();
                    lVar15 = BaseVarType::GetByID((unsigned int)bVar3);
                    if (lVar15 == BaseVarType::INTEGER) {
                        lVar8 = (*2019)[arg1_01];
                    LAB_1003d00f6:
                        uVar7 = this_00->g4s();
                        goto LAB_1003d0015;
                    }
                    if (lVar15 == BaseVarType::LONG) {
                        lVar8 = (*599)[arg1_01];
                        arg1_00 = local_40->g8s();
                        pOVar12 = (OpObjValue*)(*puVar16)[local_34];
                        *pOVar12 = arg1_00;
                    } else if (lVar15 == BaseVarType::STRING) {
                        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<
                            eastl::basic_string<char, BucketAllocatorEASTL>>(&local_90, (uint8_t)local_40);
                        pOVar12 = (OpObjValue*)(*puVar16)[local_34];
                        *pOVar12 = &local_90;
                    } else if (lVar15 == BaseVarType::COORDFINE) {
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/script/ClientScript.cpp",
                                        88, "ClientScript: Coordfine not supported!");
                    }
                } else {
                    if (uVar5 == 526) {
                    LAB_1003cffd8:
                        uVar4 = local_40->g2();
                        varBitType = (shared_ptr<VarBitType>*)configProvider.GetVarBitType((unsigned int)uVar4);
                        pOVar12 = (OpObjValue*)(*puVar16)[local_34];
                        *pOVar12 = varBitType;
                    } else if ((uVar5 == 1845) || (uVar5 == 1266)) {
                        bVar3 = local_40->g1();
                        varDomainType = VarDomainType::GetByID((unsigned int)bVar3);
                        uVar4 = this_00->g2();
                        varType = (shared_ptr<VarType>*)configProvider.GetVarType(varDomainType, (unsigned int)uVar4);
                        pOVar12 = (OpObjValue*)(*puVar16)[local_34];
                        *pOVar12 = varType;
                    } else {
                    LAB_1003d00d9:
                        if (*(char*)(lVar8 + 10) != '\0')
                            goto LAB_1003d00f6;
                    }
                    bVar3 = this_00->g1();
                    uVar7 = (unsigned int)bVar3;
                LAB_1003d0015:
                    puVar13 = (unsigned int*)(*local_48)[(unsigned long)(unsigned short)local_34];
                    *puVar13 = uVar7;
                }
                uVar1 = *(uint16_t*)(lVar8 + 8);
                arg1_01 = (unsigned long)(unsigned short)local_34;
                puVar14 = (uint16_t*)(*local_58)[arg1_01];
                *puVar14 = uVar1;
                if ((unsigned short)local_34 == -1) {
                    LogAssert("opCount < std::numeric_limits<decltype(opCount)>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "script/ClientScript.cpp",
                              111, nullptr);
                }
                local_34 = (((uint32_t)local_34._2_2_ << 16) | (uint16_t)((unsigned short)local_34 + 1));
                arg1 = (PacketT<Array<unsigned char> _>*)local_40;
            } else {
                this_02 = logger::default_logger();
                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                arg1_01 = 0;
                this_02->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "script/ClientScript.cpp",
                             54, "ClientScript: Unknown op-code: %u, failed to decode script: %s", uVar5, uVar10);
                return local_50 = DataStatus::MISSING;
            }
            if (2136 < uVar5) {
            }
        } while (true);
    }

    // 0x1003d0480
    void ClientScript::ProfilingScriptCalled() {
        field_32 = field_32 + 1;
    }

    // 0x1003d0490
    void ClientScript::ProfilingScriptFinished(unsigned long long arg1, unsigned long long arg2) {
        field_16 = field_16 + arg1;
        field_24 = field_24 + arg2;
        field_0 = field_0 + arg1;
        field_8 = field_8 + arg2;
    }

    // 0x1003d04b0
    void ClientScript::ProfilingChildScriptFinished(unsigned long long arg1, unsigned long long arg2) {
        field_0 = field_0 + arg1;
        field_8 = field_8 + arg2;
    }

} // namespace jag::game
