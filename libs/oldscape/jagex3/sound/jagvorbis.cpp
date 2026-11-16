// libs/oldscape/jagex3/sound/jagvorbis.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "jagvorbis.h"

namespace jag::oldscape::sound {
    // 0x1016c1bb0, set at startup by ___cxx_global_var_init.39
    PacketT<Array<unsigned char>> JagVorbis::m_staticUnpacker = PacketT<Array<unsigned char>>();

    // 0x1016c1c60, set at startup by ___cxx_global_var_init.33
    Array<CodeBook> JagVorbis::m_codebook = Array<CodeBook>();

    // 0x1016c1c78, set at startup by ___cxx_global_var_init.25
    Array<float> JagVorbis::m_A0 = Array<float>();

    // 0x1016c1c90, set at startup by ___cxx_global_var_init.26
    Array<float> JagVorbis::m_B0 = Array<float>();

    // 0x1016c1ca8, set at startup by ___cxx_global_var_init.27
    Array<float> JagVorbis::m_C0 = Array<float>();

    // 0x1016c1cc0, set at startup by ___cxx_global_var_init.28
    Array<float> JagVorbis::m_A1 = Array<float>();

    // 0x1016c1cd8, set at startup by ___cxx_global_var_init.29
    Array<float> JagVorbis::m_B1 = Array<float>();

    // 0x1016c1cf0, set at startup by ___cxx_global_var_init.30
    Array<float> JagVorbis::m_C1 = Array<float>();

    // 0x1016c1d08, set at startup by ___cxx_global_var_init.31
    Array<int> JagVorbis::m_bitrev0 = Array<int>();

    // 0x1016c1d20, set at startup by ___cxx_global_var_init.32
    Array<int> JagVorbis::m_bitrev1 = Array<int>();

    // 0x1016c1d38
    uint JagVorbis::m_blocksize0;

    // 0x1016c1d3c
    uint JagVorbis::m_blocksize1;

    // 0x1016c1d40, set at startup by ___cxx_global_var_init.34
    Array<Floor> JagVorbis::m_floor = Array<Floor>();

    // 0x1016c1d58, set at startup by ___cxx_global_var_init.35
    Array<Residue> JagVorbis::m_residue = Array<Residue>();

    // 0x1016c1d70, set at startup by ___cxx_global_var_init.36
    Array<Mapping> JagVorbis::m_mapping = Array<Mapping>();

    // 0x1016c1d88, set at startup by ___cxx_global_var_init.37
    Array<bool> JagVorbis::m_modeBlockflag = Array<bool>();

    // 0x1016c1da0, set at startup by ___cxx_global_var_init.38
    Array<int> JagVorbis::m_modeMapping = Array<int>();

    // 0x1016c1db8
    bool JagVorbis::m_gotHeaders;

    // 0x1002934b0
    auto JagVorbis::ToWaveMultistep(Array<int>& arg1) {
        auto result;
        float fVar1;
        unsigned int uVar4;
        int* piVar5;
        float* pfVar6;
        uint8_t* pbVar7;
        unsigned int uVar8;
        unsigned int uVar9;
        void* arg1_00;
        unsigned long arg1_01;

        if (!(arg1.empty())) {
            arg1_00 = nullptr;
            piVar5 = &arg1[0];
            if (*piVar5 < 1) {
            LAB_100293730:
                result.unique_ptr<true, void>(arg1_00);
                return result;
            }
        }
        uint8_t* this_00 = &field_112;
        if (this_00->empty()) {
            field_24 = 0;
            local_48 = Array<float>((long)m_blocksize1);
            local_48.swap(*this);
            local_48 = Array<signed char>((long)field_92);
            local_48.swap(*this_00);
            field_136 = 0;
            field_140 = 0;
        }
        int iVar10 = field_140;
        int iVar3 = field_40.end();
        if (iVar10 < iVar3) {
            do {
                if (!(arg1.empty())) {
                    arg1_00 = nullptr;
                    piVar5 = &arg1[0];
                    if (*piVar5 < 1)
                        goto LAB_100293730;
                }
                DecodeAudioPacket(&local_48, (int)this);
                if (!(local_48.empty())) {
                    iVar10 = field_136;
                    uVar4 = local_48.end();
                    uVar8 = field_92 - iVar10;
                    if ((int)uVar4 <= (int)uVar8) {
                        uVar8 = uVar4;
                    }
                    if (0 < (int)uVar8) {
                        arg1_01 = 0;
                        do {
                            pfVar6 = &local_48[arg1_01];
                            fVar1 = *pfVar6;
                            pbVar7 = (uint8_t*)(*this_00)[(long)iVar10 + arg1_01];
                            uVar9 = (unsigned int)(fVar1 * 128.0 + 128.0);
                            uVar4 = (unsigned int)(uint8_t)~(uint8_t)((int)uVar9 >> 31);
                            if (uVar9 < 256) {
                                uVar4 = uVar9;
                            }
                            *pbVar7 = (uint8_t)uVar4 ^ 128;
                            arg1_01 = arg1_01 + 1;
                        } while (uVar8 != arg1_01);
                        iVar10 = (int)arg1_01 + iVar10;
                    }
                    if (!(arg1.empty())) {
                        iVar3 = field_136;
                        piVar5 = &arg1[0];
                        *piVar5 = *piVar5 + (iVar3 - iVar10);
                    }
                    field_136 = iVar10;
                }
                field_140 = field_140 + 1;
                iVar10 = field_140;
                iVar3 = field_40.end();
            } while (iVar10 < iVar3);
        }
        clear();
        Array<float> local_48;
        this_00->swap(local_48);
        result = std::make_unique<Wave, int&, Array<signed char>, int&, int&, bool&>(field_88, local_48, field_96,
                                                                                     field_100, *field_104);
        return result;
    }

    // 0x100295090
    uint64_t JagVorbis::Float32Unpack(int arg1) {
        unsigned int uVar1 = -((unsigned int)this & 2097151);
        if (-1 < (int)(unsigned int)this) {
            uVar1 = (unsigned int)this & 2097151;
        }
        double dVar3 = (double)pow<int, int>(((unsigned int)this >> 21 & 1023) - 788, arg1);
        return (((uint64_t)((int)((unsigned long)(dVar3 * (double)(int)uVar1) >> 32)) << 32) |
                (uint32_t)((float)(dVar3 * (double)(int)uVar1)));
    }

    // 0x10029a0a0
    void JagVorbis::DecodeJagVorbis(Array<unsigned char>& arg1) {
        uint8_t bVar1;
        Array<unsigned char>* this_00;
        unsigned long arg1_01;
        Array<unsigned char> local_70;
        WindowSavedPosition local_58;
        unsigned long local_38;

        local_58.PacketT(arg1);
        uint32_t uVar2 = local_58.g4();
        field_88 = uVar2;
        field_92 = local_58.g4();
        uVar2 = local_58.g4();
        field_96 = uVar2;
        unsigned int uVar4 = local_58.g4();
        field_100 = uVar4;
        if ((int)uVar4 < 0) {
            field_100 = ~uVar4;
            field_104[0] = 1;
        }
        uVar4 = local_58.g4();
        field_40.set_max_size((long)(int)uVar4, 3);
        if (0 < (int)uVar4) {
            arg1_01 = 0;
            local_38 = (unsigned long)uVar4;
            do {
                uVar4 = 0;
                do {
                    bVar1 = local_58.g1();
                    uVar4 = uVar4 + bVar1;
                } while (bVar1 == 255);
                local_70 = Array<unsigned char>((unsigned long)uVar4);
                local_58.g1Arr((unsigned char*)local_70.data(), (unsigned long)uVar4);
                this_00 = &field_40[arg1_01];
                *this_00 = local_70;
                arg1_01 = arg1_01 + 1;
            } while (arg1_01 != local_38);
        }
    }

    // 0x10029a270
    void JagVorbis::ProcessHeaders(Array<unsigned char>& arg1) {
        unsigned int* puVar2;
        uint32_t* puVar3;
        uint64_t uVar4;
        unsigned long uVar5;
        int iVar6;
        uint32_t uVar8;
        unsigned int uVar9;
        Array<int, BucketAllocatorEASTL> local_d0;
        Array<int> local_b8;
        Array<float> local_a0;
        Array<float> local_88;
        Array<float> local_70;
        unsigned long local_58;
        unsigned long local_50;
        float local_48;
        unsigned int local_44;
        unsigned long local_40;
        float local_34;

        unsigned long uVar7 = 0;
        m_staticUnpacker.SetBitPos(arg1, 0);
        uint8_t bVar1 = m_staticUnpacker.ReadBits(4);
        m_blocksize0 = 1 << (bVar1 & 31);
        bVar1 = m_staticUnpacker.ReadBits(4);
        m_blocksize1 = 1 << (bVar1 & 31);
        do {
            puVar2 = (unsigned int*)&m_blocksize1;
            if ((int)uVar7 == 0) {
                puVar2 = (unsigned int*)&m_blocksize0;
            }
            uVar9 = *puVar2;
            local_44 = (int)uVar9 >> 2;
            local_40 = (unsigned long)((int)uVar9 >> 1);
            local_58 = uVar7;
            local_88 = Array<float>(local_40);
            local_48 = (float)(int)uVar9;
            local_50 = (unsigned long)uVar9;
            if (3 < (int)uVar9) {
                uVar7 = 1;
                if (1 < (int)local_44) {
                    uVar7 = (unsigned long)local_44;
                }
                uVar5 = 0;
                iVar6 = 0;
                do {
                    local_34 = (float)iVar6 * 3.1415927f;
                    puVar3 = &local_88[uVar5];
                    local_34 = local_34 / local_48;
                    uVar8 = ::cos(local_34);
                    *puVar3 = uVar8;
                    puVar2 = &local_88[uVar5 + 1];
                    uVar9 = ::sin(local_34);
                    *puVar2 = uVar9 ^ 2147483648;
                    iVar6 = iVar6 + 4;
                    uVar5 = uVar5 + 2;
                } while (uVar7 * 2 != uVar5);
            }
            local_a0 = Array<float>(local_40);
            if (3 < (int)local_50) {
                local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)((float)((int)local_50 * 2)));
                uVar7 = 1;
                if (1 < (int)local_44) {
                    uVar7 = (unsigned long)local_44;
                }
                uVar5 = 0;
                do {
                    local_34 = (float)(int)(uVar5 + 1) * 3.1415927f;
                    puVar3 = &local_a0[uVar5];
                    local_34 = local_34 / (float)local_40;
                    uVar8 = ::cos(local_34);
                    *puVar3 = uVar8;
                    puVar3 = &local_a0[uVar5 + 1];
                    uVar8 = ::sin(local_34);
                    *puVar3 = uVar8;
                    uVar5 = uVar5 + 2;
                } while (uVar7 * 2 != uVar5);
            }
            local_70 = Array<float>((long)(int)local_44);
            uVar9 = (int)local_50 >> 3;
            local_40 = (unsigned long)uVar9;
            if (7 < (int)local_50) {
                uVar7 = 1;
                if (1 < (int)uVar9) {
                    uVar7 = local_40;
                }
                iVar6 = 2;
                uVar5 = 0;
                do {
                    local_34 = (float)iVar6 * 3.1415927f;
                    puVar3 = &local_70[uVar5];
                    local_34 = local_34 / local_48;
                    uVar8 = ::cos(local_34);
                    *puVar3 = uVar8;
                    puVar2 = &local_70[uVar5 + 1];
                    uVar9 = ::sin(local_34);
                    *puVar2 = uVar9 ^ 2147483648;
                    iVar6 = iVar6 + 4;
                    uVar5 = uVar5 + 2;
                } while (uVar7 * 2 != uVar5);
            }
            iVar6 = (int)local_40;
            local_d0 = Array<int, BucketAllocatorEASTL>((long)iVar6);
            iVar6 = core::math::MathTool::BitsRequired(iVar6 - 1);
            if (7 < (int)local_50) {
                uVar7 = local_40 & 4294967295;
                if ((int)local_40 < 2) {
                    uVar7 = 1;
                }
                uVar5 = 0;
                do {
                    uVar8 = core::math::MathTool::BitReverse((int)uVar5, iVar6);
                    puVar3 = &local_d0[uVar5];
                    *puVar3 = uVar8;
                    uVar5 = uVar5 + 1;
                } while (uVar7 != uVar5);
            }
            if ((int)local_58 == 0) {
                m_A0 = local_88;
                m_B0 = local_a0;
                m_C0 = local_70;
                local_b8.Array<BucketAllocatorEASTL>(local_d0);
                m_bitrev0 = local_b8;
            } else {
                m_A1 = local_88;
                m_B1 = local_a0;
                m_C1 = local_70;
                local_b8.Array<BucketAllocatorEASTL>(local_d0);
                m_bitrev1 = local_b8;
            }
            uVar7 = (unsigned long)((int)local_58 + 1);
        } while ((int)local_58 == 0);
        iVar6 = m_staticUnpacker.ReadBits(8);
        m_codebook.set_max_size((long)(iVar6 + 1), 3);
        iVar6 = m_staticUnpacker.ReadBits(6);
        if (-1 < iVar6) {
            iVar6 = iVar6 + 1;
            do {
                m_staticUnpacker.ReadBits(16);
                iVar6 = iVar6 - 1;
            } while (iVar6 != 0);
        }
        iVar6 = m_staticUnpacker.ReadBits(6);
        m_floor.set_max_size((long)(iVar6 + 1), 3);
        iVar6 = m_staticUnpacker.ReadBits(6);
        m_residue.set_max_size((long)(iVar6 + 1), 3);
        iVar6 = m_staticUnpacker.ReadBits(6);
        m_mapping.set_max_size((long)(iVar6 + 1), 3);
        iVar6 = m_staticUnpacker.ReadBits(6);
        uVar9 = iVar6 + 1;
        m_modeBlockflag.set_max_size((long)(int)uVar9, 3);
        m_modeMapping.set_max_size((long)(int)uVar9, 3);
        if (-1 < iVar6) {
            uVar7 = 0;
            do {
                iVar6 = m_staticUnpacker.ReadBit();
                uVar4 = m_modeBlockflag[uVar7];
                *(bool*)uVar4 = iVar6 != 0;
                m_staticUnpacker.ReadBits(16);
                m_staticUnpacker.ReadBits(16);
                uVar8 = m_staticUnpacker.ReadBits(8);
                puVar3 = &m_modeMapping[uVar7];
                *puVar3 = uVar8;
                uVar7 = uVar7 + 1;
            } while (uVar9 != uVar7);
        }
    }

    // 0x10029aea0
    JagVorbis* JagVorbis::DecodeAudioPacket(int arg1) {
        double dVar1;
        Array<float>* pAVar2;
        Array<float>* pAVar3;
        int iVar7;
        int iVar8;
        Residue* residue;
        float* pfVar12;
        uint32_t* puVar13;
        int in_EDX;
        unsigned long uVar15;
        unsigned long uVar16;
        unsigned long arg1_01;
        unsigned int uVar17;
        uint32_t in_register_00000034;
        JagVorbis* in_R8;
        long lVar18;
        unsigned long uVar19;
        long lVar20;
        unsigned long uVar21;
        bool bVar22;
        bool bVar23;
        float fVar24;
        uint8_t auVar25[16];
        uint8_t local_208[48];
        uint8_t local_1d8[128];
        unsigned long local_158;
        unsigned long local_150;
        Array<float>* local_148;
        uint8_t local_140[44];
        int local_114;
        int local_110;
        unsigned int local_10c;
        Array<float>* local_108;
        unsigned long local_100;
        unsigned long local_f8;
        unsigned long local_f0;
        unsigned long local_e8;
        Array<float>* local_e0;
        unsigned int local_d8;
        unsigned long local_c8;
        unsigned long local_b0;
        unsigned long local_a0;
        int local_90;
        unsigned int local_8c;
        unsigned int local_84;
        unsigned long local_80;
        float local_6c;
        unsigned long local_68;
        uint8_t local_58[16];
        unsigned long local_40;
        float local_34;

        new (local_140) PacketT();
        Array<float>* local_b8 = (Array<float>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        Array<unsigned char>* arg1_00 = (Array<unsigned char>*)(*(
            (Array<Array<unsigned char>>*)((Array<float>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) +
                                           40)))[(long)in_EDX];
        local_140->SetBitPos(*arg1_00, 0);
        Array<float>* local_48 = local_b8 + 64;
        local_48->set_max_size((long)m_blocksize1, 3);
        local_140->ReadBit();
        int iVar6 = m_modeMapping.end();
        iVar6 = core::math::MathTool::BitsRequired(iVar6 - 1);
        iVar6 = local_140->ReadBits(iVar6);
        char* pcVar9 = &m_modeBlockflag[(long)iVar6];
        bool cVar5 = *pcVar9;
        unsigned int* puVar14 = (unsigned int*)&m_blocksize0;
        local_40 = (((uint64_t)local_40._1_7_ << 8) | (uint8_t)cVar5);
        if (cVar5) {
            puVar14 = (unsigned int*)&m_blocksize1;
        }
        unsigned long local_60 = (unsigned long)*puVar14;
        if (!cVar5) {
            bVar23 = true;
            bVar22 = true;
        } else {
            iVar7 = local_140->ReadBit();
            iVar8 = local_140->ReadBit();
            bVar22 = iVar7 != 0;
            bVar23 = iVar8 != 0;
        }
        int local_94 = (int)local_60;
        unsigned int local_d4 = local_94 >> 1;
        unsigned long local_78 = (unsigned long)local_d4;
        int local_88 = 0;
        iVar7 = local_94 >> 2;
        iVar8 = m_blocksize0 >> 2;
        unsigned int local_d0 = local_d4;
        unsigned long local_c0 = local_78;
        if (!bVar22) {
            local_88 = iVar7 - iVar8;
            local_c0 = (unsigned long)(unsigned int)(iVar8 + iVar7);
            local_d0 = m_blocksize0 >> 1;
        }
        unsigned int local_cc = local_d4;
        if (!bVar23) {
            local_d4 = (local_94 - iVar7) - iVar8;
            local_94 = iVar8 + (local_94 - iVar7);
            local_cc = m_blocksize0 >> 1;
        }
        int* piVar10 = &m_modeMapping[(long)iVar6];
        piVar10 = &m_mapping[(long)*piVar10];
        local_58._0_8_ = (Array<int>*)(piVar10 + 4);
        int* piVar11 = (int*)(*((piVar10 + 4)))[(long)piVar10[2]];
        auVar25 = m_floor[(long)*piVar11];
        local_1d8->PacketDecode(*auVar25._0_8_, *auVar25._8_8_);
        uint8_t bVar4 = local_1d8->HasResidue();
        if (0 < *piVar10) {
            uVar15 = 0;
            do {
                piVar11 = (int*)(*((piVar10 + 10)))[uVar15];
                residue = &m_residue[(long)*piVar11];
                new (local_208) Residue(*residue);
                local_208->PacketDecode(*local_48, (int)local_78, (bool)(bVar4 ^ 1), *in_R8, *local_140);
                uVar15 = uVar15 + 1;
            } while ((long)uVar15 < (long)*piVar10);
        }
        cVar5 = local_1d8->HasResidue();
        if (cVar5) {
            (*local_58._0_8_)[(long)piVar10[2]];
            local_1d8->SynthMul(*local_48, (int)local_78);
        }
        cVar5 = local_1d8->HasResidue();
        iVar6 = (int)local_78;
        if (!cVar5) {
            if (iVar6 < (int)local_60) {
                uVar15 = (unsigned long)iVar6;
                iVar6 = (int)local_60 - iVar6;
                do {
                    puVar13 = (uint32_t*)(*local_48)[uVar15];
                    *puVar13 = 0;
                    uVar15 = uVar15 + 1;
                    iVar6 = iVar6 - 1;
                } while (iVar6 != 0);
            }
        } else {
            if (1 < (int)local_60) {
                uVar15 = 1;
                if (1 < iVar6) {
                    uVar15 = local_78 & 4294967295;
                }
                uVar16 = 0;
                do {
                    pfVar12 = (float*)(*local_48)[uVar16];
                    *pfVar12 = *pfVar12 * 0.5;
                    uVar16 = uVar16 + 1;
                } while (uVar15 != uVar16);
            }
            pAVar2 = local_48;
            uVar17 = (unsigned int)local_78;
            if ((int)uVar17 < (int)local_60) {
                uVar15 = (unsigned long)(int)uVar17;
                iVar6 = ~uVar17 + (int)local_60;
                do {
                    puVar14 = (unsigned int*)(*pAVar2)[(long)iVar6];
                    local_58 = (unsigned __int128)(*puVar14);
                    puVar14 = (unsigned int*)(*pAVar2)[uVar15];
                    *puVar14 = local_58._0_4_ ^ 2147483648;
                    uVar15 = uVar15 + 1;
                    bVar22 = iVar6 != 0;
                    iVar6 = iVar6 - 1;
                } while (bVar22);
            }
            iVar6 = (int)local_60;
            local_84 = iVar6 >> 2;
            bVar22 = (char)local_40 == '\0';
            local_108 = (Array<float>*)&m_A1;
            if (bVar22) {
                local_108 = (Array<float>*)&m_A0;
            }
            local_e0 = (Array<float>*)&m_B1;
            if (bVar22) {
                local_e0 = (Array<float>*)&m_B0;
            }
            local_148 = (Array<float>*)&m_C1;
            if (bVar22) {
                local_148 = (Array<float>*)&m_C0;
            }
            local_1d8._120_8_ = &m_bitrev1;
            if (bVar22) {
                local_1d8._120_8_ = &m_bitrev0;
            }
            if (3 < iVar6) {
                local_80 = 1;
                if (1 < (int)local_84) {
                    local_80 = (unsigned long)local_84;
                }
                uVar21 = (long)iVar6 - 3;
                local_80 = local_80 * 2;
                uVar15 = 2;
                uVar16 = 0;
                do {
                    pAVar2 = local_48;
                    pfVar12 = (float*)(*local_48)[uVar15 - 2];
                    local_58._0_4_ = *pfVar12;
                    pfVar12 = (float*)(*pAVar2)[uVar21 + 2];
                    local_58._0_4_ = (float)local_58._0_4_ - *pfVar12;
                    pfVar12 = (float*)(*pAVar2)[uVar15];
                    local_40._0_4_ = *pfVar12;
                    pfVar12 = (float*)(*pAVar2)[uVar21];
                    pAVar2 = local_108;
                    local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)((float)local_40 - *pfVar12));
                    pfVar12 = (float*)(*local_108)[uVar16];
                    local_34 = *pfVar12;
                    puVar13 = (uint32_t*)(*pAVar2)[uVar16 + 1];
                    local_68 = (((uint64_t)local_68._4_4_ << 32) | (uint32_t)(*puVar13));
                    pfVar12 = (float*)(*local_48)[uVar21 + 2];
                    *pfVar12 = local_34 * (float)local_58._0_4_ - (float)local_68 * (float)local_40;
                    pfVar12 = (float*)(*local_48)[uVar21];
                    *pfVar12 = local_34 * (float)local_40 + (float)local_68 * (float)local_58._0_4_;
                    uVar15 = uVar15 + 4;
                    uVar21 = uVar21 - 4;
                    uVar16 = uVar16 + 2;
                } while (local_80 != uVar16);
            }
            local_8c = (int)local_60 >> 3;
            if (7 < (int)local_60) {
                uVar15 = (unsigned long)((int)local_78 - 4);
                local_c8 = 1;
                if (1 < (int)local_8c) {
                    local_c8 = (unsigned long)local_8c;
                }
                uVar16 = (long)(int)local_78 + 1;
                local_c8 = local_c8 << 2;
                uVar21 = 0;
                do {
                    pAVar2 = local_48;
                    local_b0 = uVar15;
                    pfVar12 = (float*)(*local_48)[uVar16 + 2];
                    local_58._0_4_ = *pfVar12;
                    pfVar12 = (float*)(*pAVar2)[uVar16];
                    local_40._0_4_ = *pfVar12;
                    pfVar12 = (float*)(*pAVar2)[uVar21 + 3];
                    local_34 = *pfVar12;
                    local_a0 = uVar21 + 1;
                    puVar13 = (uint32_t*)(*pAVar2)[local_a0];
                    local_68 = (((uint64_t)local_68._4_4_ << 32) | (uint32_t)(*puVar13));
                    pfVar12 = (float*)(*pAVar2)[uVar16 + 2];
                    *pfVar12 = local_34 + (float)local_58._0_4_;
                    pfVar12 = (float*)(*pAVar2)[uVar16];
                    uVar15 = local_b0;
                    pAVar2 = local_108;
                    *pfVar12 = (float)local_68 + (float)local_40;
                    puVar13 = (uint32_t*)(*local_108)[local_b0];
                    local_80 = (((uint64_t)local_80._4_4_ << 32) | (uint32_t)(*puVar13));
                    pfVar12 = (float*)(*pAVar2)[uVar15 + 1];
                    local_6c = *pfVar12;
                    pfVar12 = (float*)(*local_48)[uVar21 + 3];
                    local_58._0_4_ = (float)local_58._0_4_ - local_34;
                    local_40._0_4_ = (float)local_40 - (float)local_68;
                    *pfVar12 = (float)local_80 * (float)local_58._0_4_ - local_6c * (float)local_40;
                    pfVar12 = (float*)(*local_48)[local_a0];
                    *pfVar12 = local_6c * (float)local_58._0_4_ + (float)local_80 * (float)local_40;
                    uVar15 = uVar15 - 4;
                    uVar16 = uVar16 + 4;
                    uVar21 = uVar21 + 4;
                } while (local_c8 != uVar21);
            }
            local_90 = (int)local_60 - 1;
            iVar6 = core::math::MathTool::BitsRequired(local_90);
            if (3 < iVar6) {
                local_10c = iVar6 - 3;
                local_158 = (unsigned long)((int)local_60 - 3);
                local_150 = (unsigned long)((int)local_60 - 1);
                uVar15 = 0;
                do {
                    bVar4 = (uint8_t)uVar15;
                    iVar6 = (int)local_60 >> (bVar4 + 2 & 31);
                    local_110 = 2 << (bVar4 & 31);
                    local_d8 = (int)local_60 >> (bVar4 + 4 & 31);
                    local_140._32_8_ = uVar15;
                    if (0 < local_110) {
                        local_1d8._88_8_ = (int64_t)(8 << (bVar4 & 31));
                        local_1d8._96_8_ = local_1d8._88_8_ << 32;
                        local_e8 = (unsigned long)(unsigned int)((int)local_158 - iVar6);
                        local_1d8._112_8_ = (uint64_t)((unsigned int)(iVar6 * -2));
                        local_f0 = (unsigned long)(unsigned int)((int)local_150 - iVar6);
                        local_1d8._104_8_ = (unsigned long)local_d8 << 2;
                        iVar6 = 0;
                        local_100 = local_150;
                        local_f8 = local_158;
                        do {
                            local_114 = iVar6;
                            if (0 < (int)local_d8) {
                                lVar18 = 0;
                                uVar15 = 0;
                                uVar16 = 0;
                                do {
                                    pAVar2 = local_48;
                                    iVar6 = (int)lVar18;
                                    uVar19 = (unsigned long)((int)local_100 + iVar6);
                                    local_b0 = uVar15;
                                    local_a0 = uVar16;
                                    pfVar12 = (float*)(*local_48)[uVar19];
                                    uVar15 = (unsigned long)((int)local_f8 + iVar6);
                                    local_58._0_4_ = *pfVar12;
                                    pfVar12 = (float*)(*pAVar2)[uVar15];
                                    uVar21 = (unsigned long)((int)local_f0 + iVar6);
                                    local_40._0_4_ = *pfVar12;
                                    pfVar12 = (float*)(*pAVar2)[uVar21];
                                    local_34 = *pfVar12;
                                    local_c8 = (unsigned long)((int)local_e8 + iVar6);
                                    puVar13 = (uint32_t*)(*pAVar2)[local_c8];
                                    local_68 = (((uint64_t)local_68._4_4_ << 32) | (uint32_t)(*puVar13));
                                    pfVar12 = (float*)(*pAVar2)[uVar19];
                                    *pfVar12 = local_34 + (float)local_58._0_4_;
                                    pfVar12 = (float*)(*pAVar2)[uVar15];
                                    uVar15 = local_b0;
                                    pAVar2 = local_108;
                                    *pfVar12 = (float)local_68 + (float)local_40;
                                    puVar13 = (uint32_t*)(*local_108)[local_b0];
                                    uVar16 = local_a0;
                                    local_80 = (((uint64_t)local_80._4_4_ << 32) | (uint32_t)(*puVar13));
                                    pfVar12 = (float*)(*pAVar2)[(long)local_a0 >> 32 | 1];
                                    local_6c = *pfVar12;
                                    pfVar12 = (float*)(*local_48)[uVar21];
                                    local_58._0_4_ = (float)local_58._0_4_ - local_34;
                                    local_40._0_4_ = (float)local_40 - (float)local_68;
                                    *pfVar12 = (float)local_80 * (float)local_58._0_4_ - local_6c * (float)local_40;
                                    pfVar12 = (float*)(*local_48)[local_c8];
                                    *pfVar12 = local_6c * (float)local_58._0_4_ + (float)local_80 * (float)local_40;
                                    uVar16 = uVar16 + local_1d8._96_8_;
                                    uVar15 = uVar15 + local_1d8._88_8_;
                                    lVar18 = lVar18 - 4;
                                } while (local_1d8._104_8_ + lVar18 != 0);
                            }
                            iVar6 = local_114 + 1;
                            local_e8 = local_e8 + local_1d8._112_8_;
                            local_f8 = local_f8 + local_1d8._112_8_;
                            local_f0 = local_f0 + local_1d8._112_8_;
                            local_100 = local_100 + local_1d8._112_8_;
                        } while (iVar6 != local_110);
                    }
                    uVar17 = local_140._32_4_ + 1;
                    uVar15 = (unsigned long)uVar17;
                } while (uVar17 != local_10c);
            }
            pAVar2 = local_48;
            if (23 < (int)local_60) {
                uVar17 = 3;
                if (3 < (int)local_8c) {
                    uVar17 = local_8c;
                }
                uVar15 = (unsigned long)(uVar17 - 1);
                uVar16 = 1;
                local_58._0_8_ = 15;
                local_68 = uVar15;
                do {
                    piVar10 = (int*)(*local_1d8._120_8_)[uVar16];
                    iVar6 = *piVar10;
                    if ((long)uVar16 < (long)iVar6) {
                        uVar15 = local_58._0_8_ - 6;
                        puVar13 = (uint32_t*)(*pAVar2)[uVar15];
                        uVar19 = (long)iVar6 << 3;
                        uVar21 = uVar19 | 1;
                        local_40._0_4_ = (float)*puVar13;
                        puVar13 = (uint32_t*)(*pAVar2)[uVar21];
                        local_34 = (float)*puVar13;
                        puVar13 = (uint32_t*)(*pAVar2)[uVar15];
                        *puVar13 = local_34;
                        puVar13 = (uint32_t*)(*pAVar2)[uVar21];
                        *puVar13 = (float)local_40;
                        uVar15 = local_58._0_8_ - 4;
                        puVar13 = (uint32_t*)(*pAVar2)[uVar15];
                        local_34 = (float)*puVar13;
                        uVar17 = (unsigned int)uVar19;
                        puVar13 = (uint32_t*)(*pAVar2)[(long)(int)(uVar17 | 3)];
                        local_40._0_4_ = (float)*puVar13;
                        puVar13 = (uint32_t*)(*pAVar2)[uVar15];
                        *puVar13 = (float)local_40;
                        puVar13 = (uint32_t*)(*pAVar2)[(long)(int)(uVar17 | 3)];
                        *puVar13 = local_34;
                        uVar15 = local_58._0_8_ - 2;
                        puVar13 = (uint32_t*)(*pAVar2)[uVar15];
                        local_40._0_4_ = (float)*puVar13;
                        puVar13 = (uint32_t*)(*pAVar2)[(long)(int)(uVar17 | 5)];
                        local_34 = (float)*puVar13;
                        puVar13 = (uint32_t*)(*pAVar2)[uVar15];
                        *puVar13 = local_34;
                        puVar13 = (uint32_t*)(*pAVar2)[(long)(int)(uVar17 | 5)];
                        *puVar13 = (float)local_40;
                        puVar13 = (uint32_t*)(*pAVar2)[local_58._0_8_];
                        local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*puVar13));
                        pfVar12 = (float*)(*pAVar2)[(long)(int)(uVar17 | 7)];
                        local_34 = *pfVar12;
                        pfVar12 = (float*)(*pAVar2)[local_58._0_8_];
                        *pfVar12 = local_34;
                        puVar13 = (uint32_t*)(*pAVar2)[(long)(int)(uVar17 | 7)];
                        *puVar13 = (float)local_40;
                        uVar15 = local_68;
                    }
                    uVar16 = uVar16 + 1;
                    local_58._0_8_ = local_58._0_8_ + 8;
                } while (uVar15 != uVar16);
            }
            pAVar2 = local_48;
            if (1 < (int)local_60) {
                uVar15 = 1;
                if (1 < (int)local_78) {
                    uVar15 = local_78 & 4294967295;
                }
                uVar21 = 1;
                uVar16 = 0;
                do {
                    puVar13 = (uint32_t*)(*pAVar2)[uVar21];
                    local_58._0_4_ = *puVar13;
                    puVar13 = (uint32_t*)(*pAVar2)[uVar16];
                    *puVar13 = local_58._0_4_;
                    uVar16 = uVar16 + 1;
                    uVar21 = uVar21 + 2;
                } while (uVar15 != uVar16);
            }
            pAVar2 = local_48;
            if (7 < (int)local_60) {
                uVar15 = (unsigned long)local_90;
                local_40 = 1;
                if (1 < (int)local_8c) {
                    local_40 = (unsigned long)local_8c;
                }
                iVar7 = (int)local_60 - 2;
                iVar6 = iVar7 - local_84;
                local_40 = local_40 << 2;
                uVar16 = 0;
                do {
                    puVar13 = (uint32_t*)(*pAVar2)[uVar16];
                    local_58._0_4_ = *puVar13;
                    puVar13 = (uint32_t*)(*pAVar2)[uVar15];
                    *puVar13 = local_58._0_4_;
                    puVar13 = (uint32_t*)(*pAVar2)[uVar16 + 1];
                    local_58._0_4_ = *puVar13;
                    puVar13 = (uint32_t*)(*pAVar2)[(long)iVar7];
                    *puVar13 = local_58._0_4_;
                    puVar13 = (uint32_t*)(*pAVar2)[uVar16 + 2];
                    local_58._0_4_ = *puVar13;
                    puVar13 = (uint32_t*)(*pAVar2)[(long)(iVar6 + 1)];
                    *puVar13 = local_58._0_4_;
                    puVar13 = (uint32_t*)(*pAVar2)[uVar16 + 3];
                    local_58._0_4_ = *puVar13;
                    puVar13 = (uint32_t*)(*pAVar2)[(long)iVar6];
                    pAVar3 = local_48;
                    *puVar13 = local_58._0_4_;
                    uVar16 = uVar16 + 4;
                    iVar6 = iVar6 - 2;
                    iVar7 = iVar7 - 2;
                    uVar15 = uVar15 - 2;
                } while (local_40 != uVar16);
                if (7 < (int)local_60) {
                    local_80 = (unsigned long)local_90;
                    local_f8 = (unsigned long)(int)local_78;
                    local_e8 = 1;
                    if (1 < (int)local_8c) {
                        local_e8 = (unsigned long)local_8c;
                    }
                    local_f0 = local_f8 + 1;
                    local_e8 = local_e8 * 2;
                    uVar15 = 0;
                    iVar6 = (int)local_60;
                    do {
                        pAVar2 = local_148;
                        iVar6 = iVar6 - 2;
                        pfVar12 = (float*)(*local_148)[uVar15];
                        local_6c = *pfVar12;
                        puVar13 = (uint32_t*)(*pAVar2)[uVar15 + 1];
                        local_b0 = (((uint64_t)local_b0._4_4_ << 32) | (uint32_t)(*puVar13));
                        uVar16 = local_f8 + uVar15;
                        pfVar12 = (float*)(*pAVar3)[uVar16];
                        uVar21 = local_f0 + uVar15;
                        local_a0._0_4_ = *pfVar12;
                        puVar13 = (uint32_t*)(*pAVar3)[uVar21];
                        local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*puVar13));
                        local_c8 = (((uint64_t)local_c8._4_4_ << 32) | (uint32_t)iVar6);
                        pfVar12 = (float*)(*pAVar3)[(long)iVar6];
                        local_58._0_4_ = *pfVar12;
                        pfVar12 = (float*)(*pAVar3)[local_80];
                        local_34 = *pfVar12;
                        pfVar12 = (float*)(*pAVar3)[uVar16];
                        local_100 =
                            (((uint64_t)local_100._4_4_ << 32) | (uint32_t)((float)local_a0 - (float)local_58._0_4_));
                        fVar24 = (local_34 + (float)local_40) * local_6c +
                                 ((float)local_a0 - (float)local_58._0_4_) * (float)local_b0;
                        local_58._0_4_ = (float)local_58._0_4_ + (float)local_a0;
                        local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)fVar24);
                        *pfVar12 = (fVar24 + (float)local_58._0_4_) * 0.5;
                        local_68._0_4_ = local_34 + (float)local_40;
                        pfVar12 = (float*)(*pAVar3)[(long)iVar6];
                        *pfVar12 = ((float)local_58._0_4_ - (float)local_a0) * 0.5;
                        pfVar12 = (float*)(*pAVar3)[uVar21];
                        fVar24 = (float)local_68 * (float)local_b0 - (float)local_100 * local_6c;
                        local_68 = (((uint64_t)local_68._4_4_ << 32) | (uint32_t)fVar24);
                        *pfVar12 = (((float)local_40 - local_34) + fVar24) * 0.5;
                        pfVar12 = (float*)(*pAVar3)[local_80];
                        *pfVar12 = ((local_34 - (float)local_40) + (float)local_68) * 0.5;
                        uVar15 = uVar15 + 2;
                        local_80 = local_80 - 2;
                        iVar6 = (int)local_c8;
                    } while (local_e8 != uVar15);
                }
            }
            if (3 < (int)local_60) {
                local_40 = (unsigned long)(int)local_78;
                local_80 = 1;
                if (1 < (int)local_84) {
                    local_80 = (unsigned long)local_84;
                }
                uVar15 = 0;
                do {
                    uVar16 = local_40 + uVar15 * 2;
                    pfVar12 = (float*)(*local_48)[uVar16];
                    uVar19 = uVar15 * 2;
                    local_58._0_4_ = *pfVar12;
                    pfVar12 = (float*)(*local_e0)[uVar19];
                    local_58._0_4_ = (float)local_58._0_4_ * *pfVar12;
                    arg1_01 = uVar19 | 1;
                    uVar21 = arg1_01 + local_40;
                    pfVar12 = (float*)(*local_48)[uVar21];
                    local_34 = *pfVar12;
                    pfVar12 = (float*)(*local_e0)[arg1_01];
                    local_68._0_4_ = *pfVar12;
                    pfVar12 = (float*)(*local_48)[uVar15];
                    *pfVar12 = (float)local_68 * local_34 + (float)local_58._0_4_;
                    pfVar12 = (float*)(*local_48)[uVar16];
                    local_58._0_4_ = *pfVar12;
                    pfVar12 = (float*)(*local_e0)[arg1_01];
                    local_58._0_4_ = (float)local_58._0_4_ * *pfVar12;
                    pfVar12 = (float*)(*local_48)[uVar21];
                    local_34 = *pfVar12;
                    puVar13 = (uint32_t*)(*local_e0)[uVar19];
                    local_68 = (((uint64_t)local_68._4_4_ << 32) | (uint32_t)(*puVar13));
                    pfVar12 = (float*)(*local_48)[~uVar15 + local_40];
                    uVar21 = local_40;
                    pAVar2 = local_48;
                    uVar16 = local_80;
                    *pfVar12 = (float)local_58._0_4_ - (float)local_68 * local_34;
                    uVar15 = uVar15 + 1;
                } while (uVar15 != local_80);
                if (3 < (int)local_60) {
                    iVar6 = (int)local_60 - local_84;
                    uVar15 = 0;
                    do {
                        puVar14 = (unsigned int*)(*pAVar2)[uVar15];
                        local_58 = (unsigned __int128)(*puVar14);
                        puVar14 = (unsigned int*)(*pAVar2)[(long)(iVar6 + (int)uVar15)];
                        pAVar3 = local_48;
                        *puVar14 = local_58._0_4_ ^ 2147483648;
                        uVar15 = uVar15 + 1;
                    } while (uVar16 != uVar15);
                    if (3 < (int)local_60) {
                        uVar19 = (unsigned long)(int)local_84;
                        uVar15 = 0;
                        do {
                            puVar13 = (uint32_t*)(*pAVar3)[uVar19 + uVar15];
                            local_58._0_4_ = *puVar13;
                            puVar13 = (uint32_t*)(*pAVar3)[uVar15];
                            pAVar2 = local_48;
                            *puVar13 = local_58._0_4_;
                            uVar15 = uVar15 + 1;
                        } while (uVar16 != uVar15);
                        uVar15 = uVar19;
                        if (3 < (int)local_60) {
                            do {
                                puVar14 = (unsigned int*)(*pAVar2)[uVar15 - 1];
                                local_58 = (unsigned __int128)(*puVar14);
                                puVar14 = (unsigned int*)(*pAVar2)[uVar19];
                                pAVar3 = local_48;
                                *puVar14 = local_58._0_4_ ^ 2147483648;
                                uVar19 = uVar19 + 1;
                                uVar16 = uVar16 - 1;
                                uVar15 = uVar15 - 1;
                            } while (uVar16 != 0);
                            if (3 < (int)local_60) {
                                uVar15 = 1;
                                if (1 < (int)local_84) {
                                    uVar15 = (unsigned long)local_84;
                                }
                                do {
                                    puVar13 = (uint32_t*)(*pAVar3)[(long)local_90];
                                    local_58._0_4_ = *puVar13;
                                    puVar13 = (uint32_t*)(*pAVar3)[uVar21];
                                    *puVar13 = local_58._0_4_;
                                    local_90 = local_90 - 1;
                                    uVar21 = uVar21 + 1;
                                    uVar15 = uVar15 - 1;
                                } while (uVar15 != 0);
                            }
                        }
                    }
                }
            }
            if (local_88 < (int)local_c0) {
                local_58._0_8_ = (double)(int)local_d0;
                lVar20 = (long)local_88;
                local_c0 = (unsigned long)(unsigned int)((int)local_c0 - local_88);
                lVar18 = 0;
                do {
                    pfVar12 = (float*)(*local_48)[lVar20 + lVar18];
                    dVar1 = (double)_sin(
                        (uint32_t)(((double)(int)lVar18 * 1.5707964f + 0.7853982f) / (double)local_58._0_8_));
                    dVar1 = (double)_sin((uint32_t)((double)(float)dVar1 * (double)(float)dVar1 * 1.5707964f));
                    *pfVar12 = (float)dVar1 * *pfVar12;
                    lVar18 = lVar18 + 1;
                } while ((int)local_c0 != (int)lVar18);
            }
            if ((int)local_d4 < local_94) {
                local_58._0_8_ = (double)(int)local_cc;
                lVar20 = (long)(int)local_d4;
                iVar6 = local_94 - local_d4;
                lVar18 = 0;
                do {
                    pfVar12 = (float*)(*local_48)[lVar20 + lVar18];
                    dVar1 = (double)_sin(
                        (uint32_t)(((double)(int)lVar18 * 1.5707964f + 0.7853982f) / (double)local_58._0_8_ +
                                   1.5707964f));
                    dVar1 = (double)_sin((uint32_t)((double)(float)dVar1 * (double)(float)dVar1 * 1.5707964f));
                    *pfVar12 = (float)dVar1 * *pfVar12;
                    lVar18 = lVar18 + 1;
                } while (iVar6 != (int)lVar18);
            }
        }
        new (this) Array<float>();
        if (0 < *(int*)(local_b8 + 24)) {
            set_max_size((long)(*(int*)(local_b8 + 24) + (int)local_60 >> 2), 3);
            if ((local_b8[32] == (Array<float>)0) && (0 < *(int*)(local_b8 + 28))) {
                uVar15 = 0;
                do {
                    puVar13 = (uint32_t*)(*local_b8)[(long)((*(int*)(local_b8 + 24) >> 1) + (int)uVar15)];
                    local_58._0_4_ = *puVar13;
                    pfVar12 = (float*)(*this)[uVar15];
                    *pfVar12 = (float)local_58._0_4_ + *pfVar12;
                    uVar15 = uVar15 + 1;
                } while ((long)uVar15 < (long)*(int*)(local_b8 + 28));
            }
            cVar5 = local_1d8->HasResidue();
            if (cVar5) {
                iVar6 = local_88 - (int)local_78;
                if (local_88 < (int)local_78) {
                    uVar15 = (unsigned long)local_88;
                    do {
                        iVar7 = end();
                        puVar13 = (uint32_t*)(*local_48)[uVar15];
                        local_58._0_4_ = *puVar13;
                        pfVar12 = (float*)(*this)[(long)(iVar7 + iVar6)];
                        *pfVar12 = (float)local_58._0_4_ + *pfVar12;
                        uVar15 = uVar15 + 1;
                        iVar6 = iVar6 + 1;
                    } while (iVar6 != 0);
                }
            }
        }
        pAVar2 = local_b8;
        local_48->swap(*local_b8);
        *(int*)(pAVar2 + 24) = (int)local_60;
        *(int*)(pAVar2 + 28) = local_94 - (int)local_78;
        bVar4 = local_1d8->HasResidue();
        *(uint8_t*)(pAVar2 + 32) = bVar4 ^ 1;
        return this;
    }

    // 0x10029cb70
    void JagVorbis::GetHeaders(jagex3::Js5& js5) {
        bool bVar1;
        uint64_t uVar2;
        Layout* layout;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_28;

        if (m_gotHeaders == '\0') {
            local_28 = shared_ptr();
            js5.GetFile(local_28, 0, 0, nullptr);
            bVar1 = local_28 == nullptr;
            if (bVar1) {
            } else {
                layout = (Layout*)local_28.operator->();
                ProcessHeaders((Array<unsigned char>*)layout->SSOBeginPtr());
                m_gotHeaders = '\x01';
                if (!bVar1)
                    goto LAB_10029cb84;
            }
            uVar2 = 0;
        } else {
        LAB_10029cb84:
            uVar2 = 1;
        }
        return uVar2;
    }

    // 0x10029cc20
    auto JagVorbis::Load(jagex3::Js5& js5, eastl::string& str1, eastl::string& str2) {
        char* pcVar3;
        char* pcVar4;
        Layout* this_00;
        Array<unsigned char>* arg1;
        void* arg1_00;
        ReturnValue local_48;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;

        if (GetHeaders(js5) == '\0') {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            js5.RequestDownload(pcVar3, pcVar4);
            result.unique_ptr<true, void>(pcVar3);
        } else {
            local_40 = shared_ptr();
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            js5.GetFile(local_40, pcVar3, pcVar4, nullptr);
            arg1_00 = nullptr;
            if (local_40 == nullptr) {
                result.unique_ptr<true, void>(arg1_00);
            } else {
                this_00 = (Layout*)local_40.operator->();
                arg1 = (Array<unsigned char>*)this_00->SSOBeginPtr();
                local_48 = std::make_unique<JagVorbis, Array<unsigned char>&>(*arg1);
                auto result(local_48);
            }
        }
        return result;
    }

    // 0x10029cdc0
    auto JagVorbis::Load(jagex3::Js5& js5, eastl::string& str) {
        char* pcVar3;
        Layout* layout;
        Array<unsigned char>* arg1;
        void* arg1_00;
        ReturnValue local_40;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_38;

        if (GetHeaders(js5) == '\0') {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            js5.RequestDownload(pcVar3);
            result.unique_ptr<true, void>(pcVar3);
        } else {
            local_38 = shared_ptr();
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            js5.GetFile(local_38, pcVar3);
            arg1_00 = nullptr;
            if (local_38 == nullptr) {
                result.unique_ptr<true, void>(arg1_00);
            } else {
                layout = (Layout*)local_38.operator->();
                arg1 = (Array<unsigned char>*)layout->SSOBeginPtr();
                local_40 = std::make_unique<JagVorbis, Array<unsigned char>&>(*arg1);
                auto result(local_40);
            }
        }
        return result;
    }

    // 0x10029cef0
    auto JagVorbis::Load(jagex3::Js5& js5, int arg2, int arg3) {
        Layout* layout;
        Array<unsigned char>* arg1;
        void* pvVar3;
        ReturnValue local_48;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;

        if (GetHeaders(js5) == '\0') {
            pvVar3 = (void*)(unsigned long)(unsigned int)arg2;
            js5.RequestDownload(arg2, arg3);
            result.unique_ptr<true, void>(pvVar3);
        } else {
            local_40 = shared_ptr();
            js5.GetFile(local_40, arg2, arg3, nullptr);
            pvVar3 = nullptr;
            if (local_40 == nullptr) {
                result.unique_ptr<true, void>(pvVar3);
            } else {
                layout = (Layout*)local_40.operator->();
                arg1 = (Array<unsigned char>*)layout->SSOBeginPtr();
                local_48 = std::make_unique<JagVorbis, Array<unsigned char>&>(*arg1);
                auto result(local_48);
            }
        }
        return result;
    }

    // 0x10029cfd0
    auto JagVorbis::Load(jagex3::Js5& js5, int arg2) {
        Layout* layout;
        Array<unsigned char>* arg1;
        void* pvVar3;
        ReturnValue local_40;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_38;

        if (GetHeaders(js5) == '\0') {
            pvVar3 = (void*)(unsigned long)(unsigned int)arg2;
            js5.RequestDownload(arg2);
            result.unique_ptr<true, void>(pvVar3);
        } else {
            local_38 = shared_ptr();
            js5.GetFile(local_38, arg2);
            pvVar3 = nullptr;
            if (local_38 == nullptr) {
                result.unique_ptr<true, void>(pvVar3);
            } else {
                layout = (Layout*)local_38.operator->();
                arg1 = (Array<unsigned char>*)layout->SSOBeginPtr();
                local_40 = std::make_unique<JagVorbis, Array<unsigned char>&>(*arg1);
                auto result(local_40);
            }
        }
        return result;
    }

    // 0x10029d110
    JagVorbis::JagVorbis(Array<unsigned char>& arg1) : Array<float>(), field_32(0) {
        *(uint64_t*)&field_24 = 0;
        new (&field_40) Array<Array<unsigned char>>();
        new (&field_64) Array<float>();
        field_88 = 0;
        field_92 = 0;
        field_96 = 0;
        field_100 = 0;
        field_104[0] = 0;
        new (&field_112) Array<signed char>();
        field_136 = 0;
        field_140 = 0;
        DecodeJagVorbis(arg1);
    }

    // 0x10029d1e0
    JagVorbis* JagVorbis::ToWave() {
        unsigned int uVar3;
        float* pfVar5;
        uint8_t* pbVar6;
        unsigned int uVar7;
        unsigned int uVar8;
        Array<float>* in_RSI;
        unsigned long uVar9;
        unsigned long uVar10;
        int iVar11;
        Array<float, BucketAllocatorEASTL> local_98;
        uint8_t local_80[24];
        Array<float>* local_50;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_48;
        float local_38;
        int local_34;

        *(uint32_t*)(in_RSI + 24) = 0;
        in_RSI->set_max_size((long)m_blocksize1, 3);
        Array<signed char> local_68((long)*(int*)(in_RSI + 92));
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00 =
            (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(in_RSI + 40);
        long lVar4 = this_00->end();
        if (lVar4 != 0) {
            uVar10 = 0;
            iVar11 = 0;
            local_50 = in_RSI;
            local_48 = this_00;
            do {
                local_34 = iVar11;
                DecodeAudioPacket((JagVorbis*)local_80, (int)in_RSI);
                local_98.Array<eastl::allocator>(*local_80);
                if (local_98.empty() == '\0') {
                    uVar3 = local_98.end();
                    uVar7 = *(int*)(in_RSI + 92) - local_34;
                    if ((int)uVar3 <= *(int*)(in_RSI + 92) - local_34) {
                        uVar7 = uVar3;
                    }
                    iVar11 = local_34;
                    if (0 < (int)uVar7) {
                        lVar4 = (long)local_34;
                        uVar9 = 0;
                        do {
                            pfVar5 = &local_98[uVar9];
                            local_38 = *pfVar5 * 128.0;
                            pbVar6 = (uint8_t*)local_68[lVar4 + uVar9];
                            uVar8 = (unsigned int)(local_38 + 128.0);
                            uVar3 = (unsigned int)(uint8_t)~(uint8_t)((int)uVar8 >> 31);
                            if (uVar8 < 256) {
                                uVar3 = uVar8;
                            }
                            *pbVar6 = (uint8_t)uVar3 ^ 128;
                            uVar9 = uVar9 + 1;
                        } while (uVar7 != uVar9);
                        in_RSI = local_50;
                        this_00 = local_48;
                        iVar11 = local_34 + (int)uVar9;
                    }
                } else {
                    iVar11 = local_34;
                }
                uVar10 = uVar10 + 1;
                uVar9 = this_00->end();
            } while (uVar10 < uVar9);
        }
        in_RSI->clear();
        *this = std::make_unique<Wave, int&, Array<signed char>, int&, int&, bool&>(
            *((in_RSI + 88)), local_68, *((in_RSI + 96)), *((in_RSI + 100)), *((in_RSI + 104)));
        return this;
    }

} // namespace jag::oldscape::sound

// 0x10029a8b0
void sin(float arg1) {
    _sinf();
}
