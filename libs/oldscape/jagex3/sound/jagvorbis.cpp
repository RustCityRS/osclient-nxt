// libs/oldscape/jagex3/sound/jagvorbis.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "jagvorbis.h"

namespace jag::oldscape::sound {
    // 0x1016c1bb0, 32 bytes, __common; set at startup by ___cxx_global_var_init.39
    PacketT<Array<unsigned char, eastl::allocator>> JagVorbis::m_staticUnpacker =
        PacketT<Array<unsigned char, eastl::allocator>>();

    // 0x1016c1c60, 24 bytes, __common; set at startup by ___cxx_global_var_init.33
    Array<CodeBook, eastl::allocator> JagVorbis::m_codebook = Array<CodeBook, eastl::allocator>();

    // 0x1016c1c78, 24 bytes, __common; set at startup by ___cxx_global_var_init.25
    Array<float, eastl::allocator> JagVorbis::m_A0 = Array<float, eastl::allocator>();

    // 0x1016c1c90, 24 bytes, __common; set at startup by ___cxx_global_var_init.26
    Array<float, eastl::allocator> JagVorbis::m_B0 = Array<float, eastl::allocator>();

    // 0x1016c1ca8, 24 bytes, __common; set at startup by ___cxx_global_var_init.27
    Array<float, eastl::allocator> JagVorbis::m_C0 = Array<float, eastl::allocator>();

    // 0x1016c1cc0, 24 bytes, __common; set at startup by ___cxx_global_var_init.28
    Array<float, eastl::allocator> JagVorbis::m_A1 = Array<float, eastl::allocator>();

    // 0x1016c1cd8, 24 bytes, __common; set at startup by ___cxx_global_var_init.29
    Array<float, eastl::allocator> JagVorbis::m_B1 = Array<float, eastl::allocator>();

    // 0x1016c1cf0, 24 bytes, __common; set at startup by ___cxx_global_var_init.30
    Array<float, eastl::allocator> JagVorbis::m_C1 = Array<float, eastl::allocator>();

    // 0x1016c1d08, 24 bytes, __common; set at startup by ___cxx_global_var_init.31
    Array<int, eastl::allocator> JagVorbis::m_bitrev0 = Array<int, eastl::allocator>();

    // 0x1016c1d20, 24 bytes, __common; set at startup by ___cxx_global_var_init.32
    Array<int, eastl::allocator> JagVorbis::m_bitrev1 = Array<int, eastl::allocator>();

    // 0x1016c1d38, 4 bytes, __common; zero-initialised
    JagVorbis::m_blocksize0;

    // 0x1016c1d3c, 4 bytes, __common; zero-initialised
    JagVorbis::m_blocksize1;

    // 0x1016c1d40, 24 bytes, __common; set at startup by ___cxx_global_var_init.34
    Array<Floor, eastl::allocator> JagVorbis::m_floor = Array<Floor, eastl::allocator>();

    // 0x1016c1d58, 24 bytes, __common; set at startup by ___cxx_global_var_init.35
    Array<Residue, eastl::allocator> JagVorbis::m_residue = Array<Residue, eastl::allocator>();

    // 0x1016c1d70, 24 bytes, __common; set at startup by ___cxx_global_var_init.36
    Array<Mapping, eastl::allocator> JagVorbis::m_mapping = Array<Mapping, eastl::allocator>();

    // 0x1016c1d88, 24 bytes, __common; set at startup by ___cxx_global_var_init.37
    Array<bool, eastl::allocator> JagVorbis::m_modeBlockflag = Array<bool, eastl::allocator>();

    // 0x1016c1da0, 24 bytes, __common; set at startup by ___cxx_global_var_init.38
    Array<int, eastl::allocator> JagVorbis::m_modeMapping = Array<int, eastl::allocator>();

    // 0x1016c1db8, 1 bytes, __common; zero-initialised
    JagVorbis::m_gotHeaders;

    // 0x1002934b0, 720 bytes, placed by class name and debug map
    // JagVorbis::ToWaveMultistep(Array<int, eastl::allocator>&)
    JagVorbis* JagVorbis::ToWaveMultistep(Array* param_1) {
        Array<game::VarValue, eastl::allocator>* this_00;
        float fVar1;
        char cVar2;
        int iVar3;
        uint uVar4;
        int* piVar5;
        float* pfVar6;
        byte* pbVar7;
        uint uVar8;
        uint uVar9;
        Array<game::VarValue, eastl::allocator>* in_RDX;
        int iVar10;
        ulong uVar11;
        Array<float, eastl::allocator> local_48[24];

        cVar2 = in_RDX->empty();
        if ((cVar2 == '\0') &&
            (piVar5 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)in_RDX, 0),
             *piVar5 < 1)) {
        LAB_100293730:
            std::unique_ptr<Wave, std::default_delete<Wave>>::unique_ptr<true, void>((_func_decltype_nullptr*)this);
        } else {
            this_00 = (Array<game::VarValue, eastl::allocator>*)(param_1 + 112);
            cVar2 = this_00->empty();
            if (cVar2 != '\0') {
                *(undefined4*)(param_1 + 24) = 0;
                Array<float, eastl::allocator>::Array(local_48, (long)m_blocksize1);
                local_48->swap(param_1);
                local_48->~Array();
                new (local_48) Array<signed char, eastl::allocator>((long)*(int*)(param_1 + 92));
                local_48->swap(this_00);
                local_48->~Array();
                *(undefined8*)(param_1 + 136) = 0;
            }
            iVar10 = *(int*)(param_1 + 140);
            iVar3 = ((param_1 + 40))->end();
            if (iVar10 < iVar3) {
                do {
                    cVar2 = in_RDX->empty();
                    if ((cVar2 == '\0') && (piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                                                (Array<int, eastl::allocator>*)in_RDX, 0),
                                            *piVar5 < 1))
                        goto LAB_100293730;
                    DecodeAudioPacket((JagVorbis*)local_48, (int)param_1);
                    cVar2 = local_48->empty();
                    if (cVar2 == '\0') {
                        iVar10 = *(int*)(param_1 + 136);
                        uVar4 = local_48->end();
                        uVar8 = *(int*)(param_1 + 92) - iVar10;
                        if ((int)uVar4 <= *(int*)(param_1 + 92) - iVar10) {
                            uVar8 = uVar4;
                        }
                        if (0 < (int)uVar8) {
                            uVar11 = 0;
                            do {
                                pfVar6 = (float*)Array<float, eastl::allocator>::operator[](local_48, uVar11);
                                fVar1 = *pfVar6;
                                pbVar7 = (byte*)Array<signed char, eastl::allocator>::operator[](
                                    (Array<signed char, eastl::allocator>*)this_00, (long)iVar10 + uVar11);
                                uVar9 = (uint)(fVar1 * 128.0 + 128.0);
                                uVar4 = (uint)(byte) ~(byte)((int)uVar9 >> 31);
                                if (uVar9 < 256) {
                                    uVar4 = uVar9;
                                }
                                *pbVar7 = (byte)uVar4 ^ 128;
                                uVar11 = uVar11 + 1;
                            } while (uVar8 != uVar11);
                            iVar10 = (int)uVar11 + iVar10;
                        }
                        cVar2 = in_RDX->empty();
                        if (cVar2 == '\0') {
                            iVar3 = *(int*)(param_1 + 136);
                            piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)in_RDX, 0);
                            *piVar5 = *piVar5 + (iVar3 - iVar10);
                        }
                        *(int*)(param_1 + 136) = iVar10;
                    }
                    *(int*)(param_1 + 140) = *(int*)(param_1 + 140) + 1;
                    local_48->~Array();
                    iVar10 = *(int*)(param_1 + 140);
                    iVar3 = ((param_1 + 40))->end();
                } while (iVar10 < iVar3);
            }
            param_1->clear();
            new (local_48) Array<signed char, eastl::allocator>();
            this_00->swap(local_48);
            std::make_unique<Wave, int&, Array<signed char, eastl::allocator>, int&, int&, bool&>(
                (int*)this, param_1 + 88, (int*)local_48, (int*)(param_1 + 96), (bool*)(param_1 + 100));
            local_48->~Array();
        }
        return this;
    }

    // 0x100295090, 80 bytes, placed by class name
    // JagVorbis::Float32Unpack(int)
    undefined8 JagVorbis::Float32Unpack(int param_1) {
        uint uVar1;
        double dVar3;

        uVar1 = -((uint)this & 2097151);
        if (-1 < (int)(uint)this) {
            uVar1 = (uint)this & 2097151;
        }
        dVar3 = (double)pow<int, int>(((uint)this >> 21 & 1023) - 788, param_1);
        return CONCAT44((int)((ulong)(dVar3 * (double)(int)uVar1) >> 32), (float)(dVar3 * (double)(int)uVar1));
    }

    // 0x10029a0a0, 352 bytes, placed by class name
    // JagVorbis::DecodeJagVorbis(Array<unsigned char, eastl::allocator>&)
    void JagVorbis::DecodeJagVorbis(Array* param_1) {
        byte bVar1;
        undefined4 uVar2;
        uint uVar3;
        uchar* puVar4;
        Array<unsigned char, eastl::allocator>* this_00;
        ulong uVar5;
        Array<unsigned char, eastl::allocator> local_70[24];
        WindowSavedPosition local_58;
        ulong local_38;

        local_58.PacketT(param_1);
        uVar2 = local_58.g4();
        field_88 = uVar2;
        uVar2 = local_58.g4();
        field_92 = uVar2;
        uVar2 = local_58.g4();
        field_96 = uVar2;
        uVar3 = local_58.g4();
        field_100 = uVar3;
        if ((int)uVar3 < 0) {
            field_100 = ~uVar3;
            field_104 = 1;
        }
        uVar3 = local_58.g4();
        (&field_40, (long)(int)uVar3, 3)->set_max_size();
        if (0 < (int)uVar3) {
            uVar5 = 0;
            local_38 = (ulong)uVar3;
            do {
                uVar3 = 0;
                do {
                    bVar1 = local_58.g1();
                    uVar3 = uVar3 + bVar1;
                } while (bVar1 == 255);
                Array<unsigned char, eastl::allocator>::Array(local_70, (ulong)uVar3);
                puVar4 = (uchar*)local_70->data();
                local_58.g1Arr(puVar4, (ulong)uVar3);
                this_00 = (Array<unsigned char, eastl::allocator>*)
                    Array<Array<unsigned char, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<unsigned char, eastl::allocator>, eastl::allocator>*)&field_40, uVar5);
                Array<unsigned char, eastl::allocator>::operator=(this_00, (Array*)local_70);
                local_70->~Array();
                uVar5 = uVar5 + 1;
            } while (uVar5 != local_38);
        }
        local_58.~WindowSavedPosition();
    }

    // 0x10029a270, 1600 bytes, placed by class name
    // JagVorbis::ProcessHeaders(Array<unsigned char, eastl::allocator>&)
    void JagVorbis::ProcessHeaders(Array* param_1) {
        byte bVar1;
        uint* puVar2;
        undefined4* puVar3;
        undefined8 uVar4;
        ulong uVar5;
        int iVar6;
        ulong uVar7;
        undefined4 uVar8;
        uint uVar9;
        Array<int, BucketAllocatorEASTL> local_d0[24];
        Array<int, eastl::allocator> local_b8[24];
        Array<float, eastl::allocator> local_a0[24];
        Array<float, eastl::allocator> local_88[24];
        Array<float, eastl::allocator> local_70[24];
        ulong local_58;
        ulong local_50;
        float local_48;
        uint local_44;
        ulong local_40;
        float local_34;

        uVar7 = 0;
        m_staticUnpacker.SetBitPos(param_1, 0);
        bVar1 = m_staticUnpacker.ReadBits(4);
        m_blocksize0 = 1 << (bVar1 & 31);
        bVar1 = m_staticUnpacker.ReadBits(4);
        m_blocksize1 = 1 << (bVar1 & 31);
        do {
            puVar2 = (uint*)&m_blocksize1;
            if ((int)uVar7 == 0) {
                puVar2 = (uint*)&m_blocksize0;
            }
            uVar9 = *puVar2;
            local_44 = (int)uVar9 >> 2;
            local_40 = (ulong)((int)uVar9 >> 1);
            local_58 = uVar7;
            Array<float, eastl::allocator>::Array(local_88, local_40);
            local_48 = (float)(int)uVar9;
            local_50 = (ulong)uVar9;
            if (3 < (int)uVar9) {
                uVar7 = 1;
                if (1 < (int)local_44) {
                    uVar7 = (ulong)local_44;
                }
                uVar5 = 0;
                iVar6 = 0;
                do {
                    local_34 = (float)iVar6 * 3.1415927;
                    puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[](local_88, uVar5);
                    local_34 = local_34 / local_48;
                    uVar8 = ::cos(local_34);
                    *puVar3 = uVar8;
                    puVar2 = (uint*)Array<float, eastl::allocator>::operator[](local_88, uVar5 + 1);
                    uVar9 = ::sin(local_34);
                    *puVar2 = uVar9 ^ 2147483648;
                    iVar6 = iVar6 + 4;
                    uVar5 = uVar5 + 2;
                } while (uVar7 * 2 != uVar5);
            }
            Array<float, eastl::allocator>::Array(local_a0, local_40);
            if (3 < (int)local_50) {
                local_40 = CONCAT44(local_40._4_4_, (float)((int)local_50 * 2));
                uVar7 = 1;
                if (1 < (int)local_44) {
                    uVar7 = (ulong)local_44;
                }
                uVar5 = 0;
                do {
                    local_34 = (float)(int)(uVar5 + 1) * 3.1415927;
                    puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[](local_a0, uVar5);
                    local_34 = local_34 / (float)local_40;
                    uVar8 = ::cos(local_34);
                    *puVar3 = uVar8;
                    puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[](local_a0, uVar5 + 1);
                    uVar8 = ::sin(local_34);
                    *puVar3 = uVar8;
                    uVar5 = uVar5 + 2;
                } while (uVar7 * 2 != uVar5);
            }
            Array<float, eastl::allocator>::Array(local_70, (long)(int)local_44);
            uVar9 = (int)local_50 >> 3;
            local_40 = (ulong)uVar9;
            if (7 < (int)local_50) {
                uVar7 = 1;
                if (1 < (int)uVar9) {
                    uVar7 = local_40;
                }
                iVar6 = 2;
                uVar5 = 0;
                do {
                    local_34 = (float)iVar6 * 3.1415927;
                    puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[](local_70, uVar5);
                    local_34 = local_34 / local_48;
                    uVar8 = ::cos(local_34);
                    *puVar3 = uVar8;
                    puVar2 = (uint*)Array<float, eastl::allocator>::operator[](local_70, uVar5 + 1);
                    uVar9 = ::sin(local_34);
                    *puVar2 = uVar9 ^ 2147483648;
                    iVar6 = iVar6 + 4;
                    uVar5 = uVar5 + 2;
                } while (uVar7 * 2 != uVar5);
            }
            iVar6 = (int)local_40;
            Array<int, BucketAllocatorEASTL>::Array(local_d0, (long)iVar6);
            iVar6 = core::math::MathTool::BitsRequired(iVar6 + -1);
            if (7 < (int)local_50) {
                uVar7 = local_40 & 4294967295;
                if ((int)local_40 < 2) {
                    uVar7 = 1;
                }
                uVar5 = 0;
                do {
                    uVar8 = core::math::MathTool::BitReverse((int)uVar5, iVar6);
                    puVar3 = (undefined4*)Array<int, BucketAllocatorEASTL>::operator[](local_d0, uVar5);
                    *puVar3 = uVar8;
                    uVar5 = uVar5 + 1;
                } while (uVar7 != uVar5);
            }
            if ((int)local_58 == 0) {
                Array<float, eastl::allocator>::operator=((Array<float, eastl::allocator>*)&m_A0, (Array*)local_88);
                Array<float, eastl::allocator>::operator=((Array<float, eastl::allocator>*)&m_B0, (Array*)local_a0);
                Array<float, eastl::allocator>::operator=((Array<float, eastl::allocator>*)&m_C0, (Array*)local_70);
                Array<int, eastl::allocator>::Array<BucketAllocatorEASTL>(local_b8, (Array*)local_d0);
                Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&m_bitrev0, (Array*)local_b8);
            } else {
                Array<float, eastl::allocator>::operator=((Array<float, eastl::allocator>*)&m_A1, (Array*)local_88);
                Array<float, eastl::allocator>::operator=((Array<float, eastl::allocator>*)&m_B1, (Array*)local_a0);
                Array<float, eastl::allocator>::operator=((Array<float, eastl::allocator>*)&m_C1, (Array*)local_70);
                Array<int, eastl::allocator>::Array<BucketAllocatorEASTL>(local_b8, (Array*)local_d0);
                Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&m_bitrev1, (Array*)local_b8);
            }
            local_b8->~Array();
            local_d0->~Array();
            local_70->~Array();
            local_a0->~Array();
            local_88->~Array();
            uVar7 = (ulong)((int)local_58 + 1);
        } while ((int)local_58 == 0);
        iVar6 = m_staticUnpacker.ReadBits(8);
        m_codebook.set_max_size((long)(iVar6 + 1), 3);
        iVar6 = m_staticUnpacker.ReadBits(6);
        if (-1 < iVar6) {
            iVar6 = iVar6 + 1;
            do {
                m_staticUnpacker.ReadBits(16);
                iVar6 = iVar6 + -1;
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
                uVar4 =
                    Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)&m_modeBlockflag, uVar7);
                *(bool*)uVar4 = iVar6 != 0;
                m_staticUnpacker.ReadBits(16);
                m_staticUnpacker.ReadBits(16);
                uVar8 = m_staticUnpacker.ReadBits(8);
                puVar3 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&m_modeMapping, uVar7);
                *puVar3 = uVar8;
                uVar7 = uVar7 + 1;
            } while (uVar9 != uVar7);
        }
    }

    // 0x10029aea0, 5600 bytes, placed by class name
    // JagVorbis::DecodeAudioPacket(int)
    JagVorbis* JagVorbis::DecodeAudioPacket(int param_1) {
        double dVar1;
        Array<float, eastl::allocator>* pAVar2;
        Array<float, eastl::allocator>* pAVar3;
        byte bVar4;
        char cVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        Array* pAVar9;
        char* pcVar10;
        int* piVar11;
        int* piVar12;
        Residue* pRVar13;
        float* pfVar14;
        undefined4* puVar15;
        uint* puVar16;
        int in_EDX;
        ulong uVar17;
        ulong uVar18;
        ulong uVar19;
        uint uVar20;
        undefined4 in_register_00000034;
        JagVorbis* in_R8;
        long lVar21;
        ulong uVar22;
        long lVar23;
        ulong uVar24;
        bool bVar25;
        bool bVar26;
        float fVar27;
        undefined1 auVar28[16];
        undefined1 local_208[48];
        undefined1 local_1d8[128];
        ulong local_158;
        ulong local_150;
        Array<float, eastl::allocator>* local_148;
        undefined1 local_140[44];
        int local_114;
        int local_110;
        uint local_10c;
        Array<float, eastl::allocator>* local_108;
        ulong local_100;
        ulong local_f8;
        ulong local_f0;
        ulong local_e8;
        Array<float, eastl::allocator>* local_e0;
        uint local_d8;
        uint local_d4;
        uint local_d0;
        uint local_cc;
        ulong local_c8;
        ulong local_c0;
        Array<float, eastl::allocator>* local_b8;
        ulong local_b0;
        ulong local_a0;
        int local_94;
        int local_90;
        uint local_8c;
        int local_88;
        uint local_84;
        ulong local_80;
        ulong local_78;
        float local_6c;
        ulong local_68;
        ulong local_60;
        undefined1 local_58[16];
        Array<float, eastl::allocator>* local_48;
        ulong local_40;
        float local_34;

        new (local_140) PacketT<Array<unsigned char, eastl::allocator>>();
        local_b8 = (Array<float, eastl::allocator>*)CONCAT44(in_register_00000034, param_1);
        pAVar9 = (Array*)Array<Array<unsigned char, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<unsigned char, eastl::allocator>,
                   eastl::allocator>*)((Array<float, eastl::allocator>*)CONCAT44(in_register_00000034, param_1) + 40),
            (long)in_EDX);
        local_140->SetBitPos(pAVar9, 0);
        local_48 = local_b8 + 64;
        local_48->set_max_size((long)m_blocksize1, 3);
        local_140->ReadBit();
        iVar6 = m_modeMapping.end();
        iVar6 = core::math::MathTool::BitsRequired(iVar6 + -1);
        iVar6 = local_140->ReadBits(iVar6);
        pcVar10 = (char*)Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)&m_modeBlockflag,
                                                                   (long)iVar6);
        cVar5 = *pcVar10;
        puVar16 = (uint*)&m_blocksize0;
        local_40 = CONCAT71(local_40._1_7_, cVar5);
        if (cVar5 != '\0') {
            puVar16 = (uint*)&m_blocksize1;
        }
        local_60 = (ulong)*puVar16;
        if (cVar5 == '\0') {
            bVar26 = true;
            bVar25 = true;
        } else {
            iVar7 = local_140->ReadBit();
            iVar8 = local_140->ReadBit();
            bVar25 = iVar7 != 0;
            bVar26 = iVar8 != 0;
        }
        local_94 = (int)local_60;
        local_d4 = local_94 >> 1;
        local_78 = (ulong)local_d4;
        local_88 = 0;
        iVar7 = local_94 >> 2;
        iVar8 = m_blocksize0 >> 2;
        local_d0 = local_d4;
        local_c0 = local_78;
        if (!bVar25) {
            local_88 = iVar7 - iVar8;
            local_c0 = (ulong)(uint)(iVar8 + iVar7);
            local_d0 = m_blocksize0 >> 1;
        }
        local_cc = local_d4;
        if (!bVar26) {
            local_d4 = (local_94 - iVar7) - iVar8;
            local_94 = iVar8 + (local_94 - iVar7);
            local_cc = m_blocksize0 >> 1;
        }
        piVar11 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_modeMapping, (long)iVar6);
        piVar11 = (int*)Array<Mapping, eastl::allocator>::operator[]((Array<Mapping, eastl::allocator>*)&m_mapping,
                                                                     (long)*piVar11);
        local_58._0_8_ = (Array<int, eastl::allocator>*)(piVar11 + 4);
        piVar12 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(piVar11 + 4),
                                                                 (long)piVar11[2]);
        auVar28 = Array<Floor, eastl::allocator>::operator[]((Array<Floor, eastl::allocator>*)&m_floor, (long)*piVar12);
        local_1d8->PacketDecode(auVar28._0_8_, auVar28._8_8_);
        bVar4 = local_1d8->HasResidue();
        if (0 < *piVar11) {
            uVar17 = 0;
            do {
                piVar12 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(piVar11 + 10),
                                                                         uVar17);
                pRVar13 = (Residue*)Array<Residue, eastl::allocator>::operator[](
                    (Array<Residue, eastl::allocator>*)&m_residue, (long)*piVar12);
                new (local_208) Residue(pRVar13);
                local_208->PacketDecode(local_48, (int)local_78, (bool)(bVar4 ^ 1), in_R8, local_140);
                local_208->~LocationAudioProperties();
                uVar17 = uVar17 + 1;
            } while ((long)uVar17 < (long)*piVar11);
        }
        cVar5 = local_1d8->HasResidue();
        if (cVar5 != '\0') {
            Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_58._0_8_, (long)piVar11[2]);
            local_1d8->SynthMul(local_48, (int)local_78);
        }
        cVar5 = local_1d8->HasResidue();
        iVar6 = (int)local_78;
        if (cVar5 == '\0') {
            if (iVar6 < (int)local_60) {
                uVar17 = (ulong)iVar6;
                iVar6 = (int)local_60 - iVar6;
                do {
                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](local_48, uVar17);
                    *puVar15 = 0;
                    uVar17 = uVar17 + 1;
                    iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
            }
        } else {
            if (1 < (int)local_60) {
                uVar17 = 1;
                if (1 < iVar6) {
                    uVar17 = local_78 & 4294967295;
                }
                uVar18 = 0;
                do {
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, uVar18);
                    *pfVar14 = *pfVar14 * 0.5;
                    uVar18 = uVar18 + 1;
                } while (uVar17 != uVar18);
            }
            pAVar2 = local_48;
            uVar20 = (uint)local_78;
            if ((int)uVar20 < (int)local_60) {
                uVar17 = (ulong)(int)uVar20;
                iVar6 = ~uVar20 + (int)local_60;
                do {
                    puVar16 = (uint*)Array<float, eastl::allocator>::operator[](pAVar2, (long)iVar6);
                    local_58 = ZEXT416(*puVar16);
                    puVar16 = (uint*)Array<float, eastl::allocator>::operator[](pAVar2, uVar17);
                    *puVar16 = local_58._0_4_ ^ 2147483648;
                    uVar17 = uVar17 + 1;
                    bVar25 = iVar6 != 0;
                    iVar6 = iVar6 + -1;
                } while (bVar25);
            }
            iVar6 = (int)local_60;
            local_84 = iVar6 >> 2;
            bVar25 = (char)local_40 == '\0';
            local_108 = (Array<float, eastl::allocator>*)&m_A1;
            if (bVar25) {
                local_108 = (Array<float, eastl::allocator>*)&m_A0;
            }
            local_e0 = (Array<float, eastl::allocator>*)&m_B1;
            if (bVar25) {
                local_e0 = (Array<float, eastl::allocator>*)&m_B0;
            }
            local_148 = (Array<float, eastl::allocator>*)&m_C1;
            if (bVar25) {
                local_148 = (Array<float, eastl::allocator>*)&m_C0;
            }
            local_1d8._120_8_ = &m_bitrev1;
            if (bVar25) {
                local_1d8._120_8_ = &m_bitrev0;
            }
            if (3 < iVar6) {
                local_80 = 1;
                if (1 < (int)local_84) {
                    local_80 = (ulong)local_84;
                }
                uVar24 = (long)iVar6 - 3;
                local_80 = local_80 * 2;
                uVar17 = 2;
                uVar18 = 0;
                do {
                    pAVar2 = local_48;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, uVar17 - 2);
                    local_58._0_4_ = *pfVar14;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar2, uVar24 + 2);
                    local_58._0_4_ = (float)local_58._0_4_ - *pfVar14;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar2, uVar17);
                    local_40._0_4_ = *pfVar14;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar2, uVar24);
                    pAVar2 = local_108;
                    local_40 = CONCAT44(local_40._4_4_, (float)local_40 - *pfVar14);
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_108, uVar18);
                    local_34 = *pfVar14;
                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar18 + 1);
                    local_68 = CONCAT44(local_68._4_4_, *puVar15);
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, uVar24 + 2);
                    *pfVar14 = local_34 * (float)local_58._0_4_ - (float)local_68 * (float)local_40;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, uVar24);
                    *pfVar14 = local_34 * (float)local_40 + (float)local_68 * (float)local_58._0_4_;
                    uVar17 = uVar17 + 4;
                    uVar24 = uVar24 - 4;
                    uVar18 = uVar18 + 2;
                } while (local_80 != uVar18);
            }
            local_8c = (int)local_60 >> 3;
            if (7 < (int)local_60) {
                uVar17 = (ulong)((int)local_78 + -4);
                local_c8 = 1;
                if (1 < (int)local_8c) {
                    local_c8 = (ulong)local_8c;
                }
                uVar18 = (long)(int)local_78 + 1;
                local_c8 = local_c8 << 2;
                uVar24 = 0;
                do {
                    pAVar2 = local_48;
                    local_b0 = uVar17;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, uVar18 + 2);
                    local_58._0_4_ = *pfVar14;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar2, uVar18);
                    local_40._0_4_ = *pfVar14;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar2, uVar24 + 3);
                    local_34 = *pfVar14;
                    local_a0 = uVar24 + 1;
                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, local_a0);
                    local_68 = CONCAT44(local_68._4_4_, *puVar15);
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar2, uVar18 + 2);
                    *pfVar14 = local_34 + (float)local_58._0_4_;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar2, uVar18);
                    uVar17 = local_b0;
                    pAVar2 = local_108;
                    *pfVar14 = (float)local_68 + (float)local_40;
                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](local_108, local_b0);
                    local_80 = CONCAT44(local_80._4_4_, *puVar15);
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar2, uVar17 + 1);
                    local_6c = *pfVar14;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, uVar24 + 3);
                    local_58._0_4_ = (float)local_58._0_4_ - local_34;
                    local_40._0_4_ = (float)local_40 - (float)local_68;
                    *pfVar14 = (float)local_80 * (float)local_58._0_4_ - local_6c * (float)local_40;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, local_a0);
                    *pfVar14 = local_6c * (float)local_58._0_4_ + (float)local_80 * (float)local_40;
                    uVar17 = uVar17 - 4;
                    uVar18 = uVar18 + 4;
                    uVar24 = uVar24 + 4;
                } while (local_c8 != uVar24);
            }
            local_90 = (int)local_60 + -1;
            iVar6 = core::math::MathTool::BitsRequired(local_90);
            if (3 < iVar6) {
                local_10c = iVar6 - 3;
                local_158 = (ulong)((int)local_60 - 3);
                local_150 = (ulong)((int)local_60 - 1);
                uVar17 = 0;
                do {
                    bVar4 = (byte)uVar17;
                    iVar6 = (int)local_60 >> (bVar4 + 2 & 31);
                    local_110 = 2 << (bVar4 & 31);
                    local_d8 = (int)local_60 >> (bVar4 + 4 & 31);
                    local_140._32_8_ = uVar17;
                    if (0 < local_110) {
                        local_1d8._88_8_ = SEXT48(8 << (bVar4 & 31));
                        local_1d8._96_8_ = local_1d8._88_8_ << 32;
                        local_e8 = (ulong)(uint)((int)local_158 - iVar6);
                        local_1d8._112_8_ = ZEXT48((uint)(iVar6 * -2));
                        local_f0 = (ulong)(uint)((int)local_150 - iVar6);
                        local_1d8._104_8_ = (ulong)local_d8 << 2;
                        iVar6 = 0;
                        local_100 = local_150;
                        local_f8 = local_158;
                        do {
                            local_114 = iVar6;
                            if (0 < (int)local_d8) {
                                lVar21 = 0;
                                uVar17 = 0;
                                uVar18 = 0;
                                do {
                                    pAVar2 = local_48;
                                    iVar6 = (int)lVar21;
                                    uVar22 = (ulong)((int)local_100 + iVar6);
                                    local_b0 = uVar17;
                                    local_a0 = uVar18;
                                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, uVar22);
                                    uVar17 = (ulong)((int)local_f8 + iVar6);
                                    local_58._0_4_ = *pfVar14;
                                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar2, uVar17);
                                    uVar24 = (ulong)((int)local_f0 + iVar6);
                                    local_40._0_4_ = *pfVar14;
                                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar2, uVar24);
                                    local_34 = *pfVar14;
                                    local_c8 = (ulong)((int)local_e8 + iVar6);
                                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, local_c8);
                                    local_68 = CONCAT44(local_68._4_4_, *puVar15);
                                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar2, uVar22);
                                    *pfVar14 = local_34 + (float)local_58._0_4_;
                                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar2, uVar17);
                                    uVar17 = local_b0;
                                    pAVar2 = local_108;
                                    *pfVar14 = (float)local_68 + (float)local_40;
                                    puVar15 =
                                        (undefined4*)Array<float, eastl::allocator>::operator[](local_108, local_b0);
                                    uVar18 = local_a0;
                                    local_80 = CONCAT44(local_80._4_4_, *puVar15);
                                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](
                                        pAVar2, (long)local_a0 >> 32 | 1);
                                    local_6c = *pfVar14;
                                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, uVar24);
                                    local_58._0_4_ = (float)local_58._0_4_ - local_34;
                                    local_40._0_4_ = (float)local_40 - (float)local_68;
                                    *pfVar14 = (float)local_80 * (float)local_58._0_4_ - local_6c * (float)local_40;
                                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, local_c8);
                                    *pfVar14 = local_6c * (float)local_58._0_4_ + (float)local_80 * (float)local_40;
                                    uVar18 = uVar18 + local_1d8._96_8_;
                                    uVar17 = uVar17 + local_1d8._88_8_;
                                    lVar21 = lVar21 + -4;
                                } while (local_1d8._104_8_ + lVar21 != 0);
                            }
                            iVar6 = local_114 + 1;
                            local_e8 = local_e8 + local_1d8._112_8_;
                            local_f8 = local_f8 + local_1d8._112_8_;
                            local_f0 = local_f0 + local_1d8._112_8_;
                            local_100 = local_100 + local_1d8._112_8_;
                        } while (iVar6 != local_110);
                    }
                    uVar20 = local_140._32_4_ + 1;
                    uVar17 = (ulong)uVar20;
                } while (uVar20 != local_10c);
            }
            pAVar2 = local_48;
            if (23 < (int)local_60) {
                uVar20 = 3;
                if (3 < (int)local_8c) {
                    uVar20 = local_8c;
                }
                uVar17 = (ulong)(uVar20 - 1);
                uVar18 = 1;
                local_58._0_8_ = 15;
                local_68 = uVar17;
                do {
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)local_1d8._120_8_, uVar18);
                    iVar6 = *piVar11;
                    if ((long)uVar18 < (long)iVar6) {
                        uVar17 = local_58._0_8_ - 6;
                        puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar17);
                        uVar22 = (long)iVar6 << 3;
                        uVar24 = uVar22 | 1;
                        local_40._0_4_ = (float)*puVar15;
                        puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar24);
                        local_34 = (float)*puVar15;
                        puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar17);
                        *puVar15 = local_34;
                        puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar24);
                        *puVar15 = (float)local_40;
                        uVar17 = local_58._0_8_ - 4;
                        puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar17);
                        local_34 = (float)*puVar15;
                        uVar20 = (uint)uVar22;
                        puVar15 =
                            (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, (long)(int)(uVar20 | 3));
                        local_40._0_4_ = (float)*puVar15;
                        puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar17);
                        *puVar15 = (float)local_40;
                        puVar15 =
                            (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, (long)(int)(uVar20 | 3));
                        *puVar15 = local_34;
                        uVar17 = local_58._0_8_ - 2;
                        puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar17);
                        local_40._0_4_ = (float)*puVar15;
                        puVar15 =
                            (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, (long)(int)(uVar20 | 5));
                        local_34 = (float)*puVar15;
                        puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar17);
                        *puVar15 = local_34;
                        puVar15 =
                            (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, (long)(int)(uVar20 | 5));
                        *puVar15 = (float)local_40;
                        puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, local_58._0_8_);
                        local_40 = CONCAT44(local_40._4_4_, *puVar15);
                        pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar2, (long)(int)(uVar20 | 7));
                        local_34 = *pfVar14;
                        pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar2, local_58._0_8_);
                        *pfVar14 = local_34;
                        puVar15 =
                            (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, (long)(int)(uVar20 | 7));
                        *puVar15 = (float)local_40;
                        uVar17 = local_68;
                    }
                    uVar18 = uVar18 + 1;
                    local_58._0_8_ = local_58._0_8_ + 8;
                } while (uVar17 != uVar18);
            }
            pAVar2 = local_48;
            if (1 < (int)local_60) {
                uVar17 = 1;
                if (1 < (int)local_78) {
                    uVar17 = local_78 & 4294967295;
                }
                uVar24 = 1;
                uVar18 = 0;
                do {
                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar24);
                    local_58._0_4_ = *puVar15;
                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar18);
                    *puVar15 = local_58._0_4_;
                    uVar18 = uVar18 + 1;
                    uVar24 = uVar24 + 2;
                } while (uVar17 != uVar18);
            }
            pAVar2 = local_48;
            if (7 < (int)local_60) {
                uVar17 = (ulong)local_90;
                local_40 = 1;
                if (1 < (int)local_8c) {
                    local_40 = (ulong)local_8c;
                }
                iVar7 = (int)local_60 + -2;
                iVar6 = iVar7 - local_84;
                local_40 = local_40 << 2;
                uVar18 = 0;
                do {
                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar18);
                    local_58._0_4_ = *puVar15;
                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar17);
                    *puVar15 = local_58._0_4_;
                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar18 + 1);
                    local_58._0_4_ = *puVar15;
                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, (long)iVar7);
                    *puVar15 = local_58._0_4_;
                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar18 + 2);
                    local_58._0_4_ = *puVar15;
                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, (long)(iVar6 + 1));
                    *puVar15 = local_58._0_4_;
                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar18 + 3);
                    local_58._0_4_ = *puVar15;
                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, (long)iVar6);
                    pAVar3 = local_48;
                    *puVar15 = local_58._0_4_;
                    uVar18 = uVar18 + 4;
                    iVar6 = iVar6 + -2;
                    iVar7 = iVar7 + -2;
                    uVar17 = uVar17 - 2;
                } while (local_40 != uVar18);
                if (7 < (int)local_60) {
                    local_80 = (ulong)local_90;
                    local_f8 = (ulong)(int)local_78;
                    local_e8 = 1;
                    if (1 < (int)local_8c) {
                        local_e8 = (ulong)local_8c;
                    }
                    local_f0 = local_f8 + 1;
                    local_e8 = local_e8 * 2;
                    uVar17 = 0;
                    iVar6 = (int)local_60;
                    do {
                        pAVar2 = local_148;
                        iVar6 = iVar6 + -2;
                        pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_148, uVar17);
                        local_6c = *pfVar14;
                        puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar2, uVar17 + 1);
                        local_b0 = CONCAT44(local_b0._4_4_, *puVar15);
                        uVar18 = local_f8 + uVar17;
                        pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar3, uVar18);
                        uVar24 = local_f0 + uVar17;
                        local_a0._0_4_ = *pfVar14;
                        puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar3, uVar24);
                        local_40 = CONCAT44(local_40._4_4_, *puVar15);
                        local_c8 = CONCAT44(local_c8._4_4_, iVar6);
                        pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                        local_58._0_4_ = *pfVar14;
                        pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar3, local_80);
                        local_34 = *pfVar14;
                        pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar3, uVar18);
                        local_100 = CONCAT44(local_100._4_4_, (float)local_a0 - (float)local_58._0_4_);
                        fVar27 = (local_34 + (float)local_40) * local_6c +
                                 ((float)local_a0 - (float)local_58._0_4_) * (float)local_b0;
                        local_58._0_4_ = (float)local_58._0_4_ + (float)local_a0;
                        local_a0 = CONCAT44(local_a0._4_4_, fVar27);
                        *pfVar14 = (fVar27 + (float)local_58._0_4_) * 0.5;
                        local_68._0_4_ = local_34 + (float)local_40;
                        pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar3, (long)iVar6);
                        *pfVar14 = ((float)local_58._0_4_ - (float)local_a0) * 0.5;
                        pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar3, uVar24);
                        fVar27 = (float)local_68 * (float)local_b0 - (float)local_100 * local_6c;
                        local_68 = CONCAT44(local_68._4_4_, fVar27);
                        *pfVar14 = (((float)local_40 - local_34) + fVar27) * 0.5;
                        pfVar14 = (float*)Array<float, eastl::allocator>::operator[](pAVar3, local_80);
                        *pfVar14 = ((local_34 - (float)local_40) + (float)local_68) * 0.5;
                        uVar17 = uVar17 + 2;
                        local_80 = local_80 - 2;
                        iVar6 = (int)local_c8;
                    } while (local_e8 != uVar17);
                }
            }
            if (3 < (int)local_60) {
                local_40 = (ulong)(int)local_78;
                local_80 = 1;
                if (1 < (int)local_84) {
                    local_80 = (ulong)local_84;
                }
                uVar17 = 0;
                do {
                    uVar18 = local_40 + uVar17 * 2;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, uVar18);
                    uVar22 = uVar17 * 2;
                    local_58._0_4_ = *pfVar14;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_e0, uVar22);
                    local_58._0_4_ = (float)local_58._0_4_ * *pfVar14;
                    uVar19 = uVar22 | 1;
                    uVar24 = uVar19 + local_40;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, uVar24);
                    local_34 = *pfVar14;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_e0, uVar19);
                    local_68._0_4_ = *pfVar14;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, uVar17);
                    *pfVar14 = (float)local_68 * local_34 + (float)local_58._0_4_;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, uVar18);
                    local_58._0_4_ = *pfVar14;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_e0, uVar19);
                    local_58._0_4_ = (float)local_58._0_4_ * *pfVar14;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, uVar24);
                    local_34 = *pfVar14;
                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](local_e0, uVar22);
                    local_68 = CONCAT44(local_68._4_4_, *puVar15);
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, ~uVar17 + local_40);
                    uVar24 = local_40;
                    pAVar2 = local_48;
                    uVar18 = local_80;
                    *pfVar14 = (float)local_58._0_4_ - (float)local_68 * local_34;
                    uVar17 = uVar17 + 1;
                } while (uVar17 != local_80);
                if (3 < (int)local_60) {
                    iVar6 = (int)local_60 - local_84;
                    uVar17 = 0;
                    do {
                        puVar16 = (uint*)Array<float, eastl::allocator>::operator[](pAVar2, uVar17);
                        local_58 = ZEXT416(*puVar16);
                        puVar16 =
                            (uint*)Array<float, eastl::allocator>::operator[](pAVar2, (long)(iVar6 + (int)uVar17));
                        pAVar3 = local_48;
                        *puVar16 = local_58._0_4_ ^ 2147483648;
                        uVar17 = uVar17 + 1;
                    } while (uVar18 != uVar17);
                    if (3 < (int)local_60) {
                        uVar22 = (ulong)(int)local_84;
                        uVar17 = 0;
                        do {
                            puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar3, uVar22 + uVar17);
                            local_58._0_4_ = *puVar15;
                            puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar3, uVar17);
                            pAVar2 = local_48;
                            *puVar15 = local_58._0_4_;
                            uVar17 = uVar17 + 1;
                        } while (uVar18 != uVar17);
                        uVar17 = uVar22;
                        if (3 < (int)local_60) {
                            do {
                                puVar16 = (uint*)Array<float, eastl::allocator>::operator[](pAVar2, uVar17 - 1);
                                local_58 = ZEXT416(*puVar16);
                                puVar16 = (uint*)Array<float, eastl::allocator>::operator[](pAVar2, uVar22);
                                pAVar3 = local_48;
                                *puVar16 = local_58._0_4_ ^ 2147483648;
                                uVar22 = uVar22 + 1;
                                uVar18 = uVar18 - 1;
                                uVar17 = uVar17 - 1;
                            } while (uVar18 != 0);
                            if (3 < (int)local_60) {
                                uVar17 = 1;
                                if (1 < (int)local_84) {
                                    uVar17 = (ulong)local_84;
                                }
                                do {
                                    puVar15 =
                                        (undefined4*)Array<float, eastl::allocator>::operator[](pAVar3, (long)local_90);
                                    local_58._0_4_ = *puVar15;
                                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](pAVar3, uVar24);
                                    *puVar15 = local_58._0_4_;
                                    local_90 = local_90 + -1;
                                    uVar24 = uVar24 + 1;
                                    uVar17 = uVar17 - 1;
                                } while (uVar17 != 0);
                            }
                        }
                    }
                }
            }
            if (local_88 < (int)local_c0) {
                local_58._0_8_ = (double)(int)local_d0;
                lVar23 = (long)local_88;
                local_c0 = (ulong)(uint)((int)local_c0 - local_88);
                lVar21 = 0;
                do {
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, lVar23 + lVar21);
                    dVar1 = (double)_sin(SUB84(
                        ((double)(int)lVar21 * 1.5707963705062866 + 0.7853981852531433) / (double)local_58._0_8_, 0));
                    dVar1 = (double)_sin(SUB84((double)(float)dVar1 * (double)(float)dVar1 * 1.5707963705062866, 0));
                    *pfVar14 = (float)dVar1 * *pfVar14;
                    lVar21 = lVar21 + 1;
                } while ((int)local_c0 != (int)lVar21);
            }
            if ((int)local_d4 < local_94) {
                local_58._0_8_ = (double)(int)local_cc;
                lVar23 = (long)(int)local_d4;
                iVar6 = local_94 - local_d4;
                lVar21 = 0;
                do {
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](local_48, lVar23 + lVar21);
                    dVar1 = (double)_sin(
                        SUB84(((double)(int)lVar21 * 1.5707963705062866 + 0.7853981852531433) / (double)local_58._0_8_ +
                                  1.5707963705062866,
                              0));
                    dVar1 = (double)_sin(SUB84((double)(float)dVar1 * (double)(float)dVar1 * 1.5707963705062866, 0));
                    *pfVar14 = (float)dVar1 * *pfVar14;
                    lVar21 = lVar21 + 1;
                } while (iVar6 != (int)lVar21);
            }
        }
        new ((JagVorbis*)this) Array<float, eastl::allocator>();
        if (0 < *(int*)(local_b8 + 24)) {
            ((JagVorbis*)this)->set_max_size((long)(*(int*)(local_b8 + 24) + (int)local_60 >> 2), 3);
            if ((local_b8[32] == (Array<float, eastl::allocator>)0) && (0 < *(int*)(local_b8 + 28))) {
                uVar17 = 0;
                do {
                    puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](
                        local_b8, (long)((*(int*)(local_b8 + 24) >> 1) + (int)uVar17));
                    local_58._0_4_ = *puVar15;
                    pfVar14 = (float*)Array<float, eastl::allocator>::operator[](
                        (Array<float, eastl::allocator>*)(JagVorbis*)this, uVar17);
                    *pfVar14 = (float)local_58._0_4_ + *pfVar14;
                    uVar17 = uVar17 + 1;
                } while ((long)uVar17 < (long)*(int*)(local_b8 + 28));
            }
            cVar5 = local_1d8->HasResidue();
            if (cVar5 != '\0') {
                iVar6 = local_88 - (int)local_78;
                if (local_88 < (int)local_78) {
                    uVar17 = (ulong)local_88;
                    do {
                        iVar7 = ((JagVorbis*)this)->end();
                        puVar15 = (undefined4*)Array<float, eastl::allocator>::operator[](local_48, uVar17);
                        local_58._0_4_ = *puVar15;
                        pfVar14 = (float*)Array<float, eastl::allocator>::operator[](
                            (Array<float, eastl::allocator>*)(JagVorbis*)this, (long)(iVar7 + iVar6));
                        *pfVar14 = (float)local_58._0_4_ + *pfVar14;
                        uVar17 = uVar17 + 1;
                        iVar6 = iVar6 + 1;
                    } while (iVar6 != 0);
                }
            }
        }
        pAVar2 = local_b8;
        local_48->swap(local_b8);
        *(int*)(pAVar2 + 24) = (int)local_60;
        *(int*)(pAVar2 + 28) = local_94 - (int)local_78;
        bVar4 = local_1d8->HasResidue();
        *(byte*)(pAVar2 + 32) = bVar4 ^ 1;
        local_1d8->~FloorDecoder();
        local_140->~VBOMapper();
        return (JagVorbis*)this;
    }

    // 0x10029cb70, 176 bytes, placed by class name
    // JagVorbis::GetHeaders(jagex3::Js5&)
    undefined8 JagVorbis::GetHeaders(Js5* param_1) {
        bool bVar1;
        undefined8 uVar2;
        Layout* this_00;
        vector* pvVar3;
        shared_ptr local_28;

        if (m_gotHeaders == '\0') {
            new (&local_28) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
            ((shared_ptr*)this)->GetFile((int)&local_28, 0, 0);
            bVar1 = operator==(&local_28, (_func_decltype_nullptr*)0);
            if (bVar1) {
                local_28.~shared_ptr();
            } else {
                this_00 = (Layout*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_28);
                pvVar3 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)0);
                ProcessHeaders((Array*)pvVar3);
                m_gotHeaders = '\x01';
                local_28.~shared_ptr();
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

    // 0x10029cc20, 272 bytes, placed by class name
    // JagVorbis::Load(jagex3::Js5&, eastl::string&, eastl::string&)
    Js5* JagVorbis::Load(Js5* param_1, basic_string* param_2, basic_string* param_3) {
        char* pcVar3;
        array* paVar4;
        char* pcVar5;
        Layout* this;
        Array local_48[8];
        shared_ptr local_40;

        if (GetHeaders((JagVorbis*)param_3, (Js5*)param_2) == '\0') {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            param_3->RequestDownload(pcVar3, pcVar5);
            std::unique_ptr<JagVorbis, std::default_delete<JagVorbis>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)param_1);
        } else {
            new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            paVar4 = (array*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            ((shared_ptr*)param_3)->GetFile((char*)&local_40, pcVar3, paVar4);
            if (operator==(&local_40, (_func_decltype_nullptr*)0)) {
                std::unique_ptr<JagVorbis, std::default_delete<JagVorbis>>::unique_ptr<true, void>(
                    (_func_decltype_nullptr*)param_1);
            } else {
                this = (Layout*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
                eastl::string::Layout::SSOBeginPtr(this, (type*)0);
                std::make_unique<JagVorbis, Array<unsigned char, eastl::allocator>&>(local_48);
                new (param_1) std::unique_ptr<JagVorbis, std::default_delete<JagVorbis>>(local_48);
                local_48->~unique_ptr();
            }
            local_40.~shared_ptr();
        }
        return param_1;
    }

    // 0x10029cdc0, 224 bytes, placed by class name
    // JagVorbis::Load(jagex3::Js5&, eastl::string&)
    Js5* JagVorbis::Load(Js5* param_1, basic_string* param_2) {
        char* pcVar3;
        Layout* this;
        Array local_40[8];
        shared_ptr local_38;

        if (GetHeaders((JagVorbis*)param_2, (Js5*)param_2) == '\0') {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            param_2->RequestDownload(pcVar3);
            std::unique_ptr<JagVorbis, std::default_delete<JagVorbis>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)param_1);
        } else {
            new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            param_2->GetFile(&local_38, pcVar3);
            if (operator==(&local_38, (_func_decltype_nullptr*)0)) {
                std::unique_ptr<JagVorbis, std::default_delete<JagVorbis>>::unique_ptr<true, void>(
                    (_func_decltype_nullptr*)param_1);
            } else {
                this = (Layout*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_38);
                eastl::string::Layout::SSOBeginPtr(this, (type*)0);
                std::make_unique<JagVorbis, Array<unsigned char, eastl::allocator>&>(local_40);
                new (param_1) std::unique_ptr<JagVorbis, std::default_delete<JagVorbis>>(local_40);
                local_40->~unique_ptr();
            }
            local_38.~shared_ptr();
        }
        return param_1;
    }

    // 0x10029cef0, 224 bytes, placed by class name
    // JagVorbis::Load(jagex3::Js5&, int, int)
    JagVorbis* JagVorbis::Load(Js5* param_1, int param_2, int param_3) {
        Layout* this_00;
        Array local_48[8];
        shared_ptr local_40;

        if (GetHeaders((JagVorbis*)param_1, param_1) == '\0') {
            ((int)param_1)->RequestDownload(param_2);
            std::unique_ptr<JagVorbis, std::default_delete<JagVorbis>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)this);
        } else {
            new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
            ((shared_ptr*)param_1)->GetFile((int)&local_40, param_2, (array*)(ulong)(uint)param_3);
            if (operator==(&local_40, (_func_decltype_nullptr*)0)) {
                std::unique_ptr<JagVorbis, std::default_delete<JagVorbis>>::unique_ptr<true, void>(
                    (_func_decltype_nullptr*)this);
            } else {
                this_00 = (Layout*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
                eastl::string::Layout::SSOBeginPtr(this_00, (type*)0);
                std::make_unique<JagVorbis, Array<unsigned char, eastl::allocator>&>(local_48);
                new (this) std::unique_ptr<JagVorbis, std::default_delete<JagVorbis>>(local_48);
                local_48->~unique_ptr();
            }
            local_40.~shared_ptr();
        }
        return this;
    }

    // 0x10029cfd0, 208 bytes, placed by class name
    // JagVorbis::Load(jagex3::Js5&, int)
    JagVorbis* JagVorbis::Load(Js5* param_1, int param_2) {
        Layout* this_00;
        Array local_40[8];
        shared_ptr local_38;

        if (GetHeaders((JagVorbis*)param_1, param_1) == '\0') {
            param_1->RequestDownload(param_2);
            std::unique_ptr<JagVorbis, std::default_delete<JagVorbis>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)this);
        } else {
            new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
            param_1->GetFile(&local_38, param_2);
            if (operator==(&local_38, (_func_decltype_nullptr*)0)) {
                std::unique_ptr<JagVorbis, std::default_delete<JagVorbis>>::unique_ptr<true, void>(
                    (_func_decltype_nullptr*)this);
            } else {
                this_00 = (Layout*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_38);
                eastl::string::Layout::SSOBeginPtr(this_00, (type*)0);
                std::make_unique<JagVorbis, Array<unsigned char, eastl::allocator>&>(local_40);
                new (this) std::unique_ptr<JagVorbis, std::default_delete<JagVorbis>>(local_40);
                local_40->~unique_ptr();
            }
            local_38.~shared_ptr();
        }
        return this;
    }

    // 0x10029d110, 192 bytes, base-object constructor, placed by class name
    // JagVorbis::JagVorbis(Array<unsigned char, eastl::allocator>&)
    void JagVorbis::JagVorbis(Array* param_1) {
        new (this) Array<float, eastl::allocator>();
        field_32 = 0;
        field_24 = 0;
        new (&field_40) Array<Array<unsigned char, eastl::allocator>, eastl::allocator>();
        new (&field_64) Array<float, eastl::allocator>();
        field_88 = 0;
        field_92 = 0;
        field_96 = 0;
        field_100 = 0;
        field_104 = 0;
        new (&field_112) Array<signed char, eastl::allocator>();
        field_136 = 0;
        DecodeJagVorbis(this, param_1);
    }

    // 0x10029d1d0, 16 bytes, complete-object constructor, placed by class name
    // JagVorbis::JagVorbis(Array<unsigned char, eastl::allocator>&): jumps straight to the base-object constructor

    // 0x10029d1e0, 496 bytes, placed by class name
    // JagVorbis::ToWave()
    JagVorbis* JagVorbis::ToWave() {
        char cVar2;
        uint uVar3;
        long lVar4;
        float* pfVar5;
        byte* pbVar6;
        uint uVar7;
        uint uVar8;
        Array<float, eastl::allocator>* in_RSI;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ulong uVar9;
        ulong uVar10;
        int iVar11;
        Array<float, BucketAllocatorEASTL> local_98[24];
        undefined1 local_80[24];
        Array<signed char, eastl::allocator> local_68[24];
        Array<float, eastl::allocator>* local_50;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_48;
        float local_38;
        int local_34;

        *(undefined4*)(in_RSI + 24) = 0;
        in_RSI->set_max_size((long)m_blocksize1, 3);
        Array<signed char, eastl::allocator>::Array(local_68, (long)*(int*)(in_RSI + 92));
        this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(in_RSI + 40);
        lVar4 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (lVar4 != 0) {
            uVar10 = 0;
            iVar11 = 0;
            local_50 = in_RSI;
            local_48 = this_00;
            do {
                local_34 = iVar11;
                DecodeAudioPacket((JagVorbis*)local_80, (int)in_RSI);
                Array<float, BucketAllocatorEASTL>::Array<eastl::allocator>(local_98, (Array*)local_80);
                local_80->~Array();
                cVar2 = local_98->empty();
                if (cVar2 == '\0') {
                    uVar3 = local_98->end();
                    uVar7 = *(int*)(in_RSI + 92) - local_34;
                    if ((int)uVar3 <= *(int*)(in_RSI + 92) - local_34) {
                        uVar7 = uVar3;
                    }
                    iVar11 = local_34;
                    if (0 < (int)uVar7) {
                        lVar4 = (long)local_34;
                        uVar9 = 0;
                        do {
                            pfVar5 = (float*)Array<float, BucketAllocatorEASTL>::operator[](local_98, uVar9);
                            local_38 = *pfVar5 * 128.0;
                            pbVar6 = (byte*)Array<signed char, eastl::allocator>::operator[](local_68, lVar4 + uVar9);
                            uVar8 = (uint)(local_38 + 128.0);
                            uVar3 = (uint)(byte) ~(byte)((int)uVar8 >> 31);
                            if (uVar8 < 256) {
                                uVar3 = uVar8;
                            }
                            *pbVar6 = (byte)uVar3 ^ 128;
                            uVar9 = uVar9 + 1;
                        } while (uVar7 != uVar9);
                        in_RSI = local_50;
                        this_00 = local_48;
                        iVar11 = local_34 + (int)uVar9;
                    }
                } else {
                    iVar11 = local_34;
                }
                local_98->~Array();
                uVar10 = uVar10 + 1;
                uVar9 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            } while (uVar10 < uVar9);
        }
        in_RSI->clear();
        std::make_unique<Wave, int&, Array<signed char, eastl::allocator>, int&, int&, bool&>(
            (int*)(JagVorbis*)this, (Array*)(in_RSI + 88), (int*)local_68, (int*)(in_RSI + 96), (bool*)(in_RSI + 100));
        local_68->~Array();
        return (JagVorbis*)this;
    }

    // 0x1002ad850, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.25
    void ___cxx_global_var_init_25() {
        new (&JagVorbis::m_A0) Array<float, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67f0, &JagVorbis::m_A0, 4294967296);
    }

    // 0x1002ad890, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.26
    void ___cxx_global_var_init_26() {
        new (&JagVorbis::m_B0) Array<float, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67f0, &JagVorbis::m_B0, 4294967296);
    }

    // 0x1002ad8d0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.27
    void ___cxx_global_var_init_27() {
        new (&JagVorbis::m_C0) Array<float, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67f0, &JagVorbis::m_C0, 4294967296);
    }

    // 0x1002ad910, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.28
    void ___cxx_global_var_init_28() {
        new (&JagVorbis::m_A1) Array<float, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67f0, &JagVorbis::m_A1, 4294967296);
    }

    // 0x1002ad950, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.29
    void ___cxx_global_var_init_29() {
        new (&JagVorbis::m_B1) Array<float, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67f0, &JagVorbis::m_B1, 4294967296);
    }

    // 0x1002ad990, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.30
    void ___cxx_global_var_init_30() {
        new (&JagVorbis::m_C1) Array<float, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67f0, &JagVorbis::m_C1, 4294967296);
    }

    // 0x1002ad9d0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.31
    void ___cxx_global_var_init_31() {
        new (&JagVorbis::m_bitrev0) Array<int, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6800, &JagVorbis::m_bitrev0, 4294967296);
    }

    // 0x1002ada10, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.32
    void ___cxx_global_var_init_32() {
        new (&JagVorbis::m_bitrev1) Array<int, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6800, &JagVorbis::m_bitrev1, 4294967296);
    }

    // 0x1002ada50, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.33
    void ___cxx_global_var_init_33() {
        new (&JagVorbis::m_codebook) Array<CodeBook, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67a8, &JagVorbis::m_codebook, 4294967296);
    }

    // 0x1002ada90, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.34
    void ___cxx_global_var_init_34() {
        new (&JagVorbis::m_floor) Array<Floor, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6790, &JagVorbis::m_floor, 4294967296);
    }

    // 0x1002adad0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.35
    void ___cxx_global_var_init_35() {
        new (&JagVorbis::m_residue) Array<Residue, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67a0, &JagVorbis::m_residue, 4294967296);
    }

    // 0x1002adb10, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.36
    void ___cxx_global_var_init_36() {
        new (&JagVorbis::m_mapping) Array<Mapping, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6798, &JagVorbis::m_mapping, 4294967296);
    }

    // 0x1002adb50, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.37
    void ___cxx_global_var_init_37() {
        new (&JagVorbis::m_modeBlockflag) Array<bool, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67e0, &JagVorbis::m_modeBlockflag, 4294967296);
    }

    // 0x1002adb90, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.38
    void ___cxx_global_var_init_38() {
        new (&JagVorbis::m_modeMapping) Array<int, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6800, &JagVorbis::m_modeMapping, 4294967296);
    }

    // 0x1002adbd0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.39
    void ___cxx_global_var_init_39() {
        new (&JagVorbis::m_staticUnpacker) PacketT<Array<unsigned char, eastl::allocator>>();
        ___cxa_atexit(PTR__VBOMapper_100ee6b08, &JagVorbis::m_staticUnpacker, 4294967296);
    }

} // namespace jag::oldscape::sound

// 0x10029a8b0, 16 bytes, placed by neighbouring functions
// sin(float)
void sin(float param_1) {
    _sinf();
}
