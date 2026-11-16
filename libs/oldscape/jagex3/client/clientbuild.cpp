// libs/oldscape/jagex3/client/clientbuild.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "clientbuild.h"

namespace jag::oldscape {
    // 0x100d423c0, 16 bytes, __const
    ClientBuild::WSHAPE0 = {1, 2, 4, 8};

    // 0x100d423d0, 16 bytes, __const
    ClientBuild::WSHAPE1 = {16, 32, 64, 128};

    // 0x100d423e0, 16 bytes, __const
    ClientBuild::DECORXOF = {1, 0, -1, 0};

    // 0x100d423f0, 16 bytes, __const
    ClientBuild::DECORZOF = {0, -1, 0, 1};

    // 0x100d42400, 16 bytes, __const
    ClientBuild::DECORXOF2 = {1, -1, -1, 1};

    // 0x100d42410, 16 bytes, __const
    ClientBuild::DECORZOF2 = {-1, -1, 1, 1};

    // 0x100f36f50, 8 bytes, __data
    ClientBuild::m_applyBlobShadows = 1;

    // 0x100f37da8, 4 bytes, __data
    ClientBuild::minusedlevel = 99;

    // 0x100f37dac, 4 bytes, __data
    ClientBuild::m_hueOff = 1000;

    // 0x100f37db0, 4 bytes, __data
    ClientBuild::m_ligOff = 1000;

    // 0x10392ab00, 24 bytes, __common; set at startup by ___cxx_global_var_init.9
    Array<int, eastl::allocator> ClientBuild::m_groundh = Array<int, eastl::allocator>(44100);

    // 0x10392ab18, 24 bytes, __common; set at startup by ___cxx_global_var_init.10
    Array<signed char, eastl::allocator> ClientBuild::m_mapl = Array<signed char, eastl::allocator>(43264);

    // 0x10392ab30, 24 bytes, __common; set at startup by ___cxx_global_var_init.11
    Array<jag::math::Vector4T<float>, eastl::allocator> ClientBuild::m_skyboxColour =
        Array<jag::math::Vector4T<float>, eastl::allocator>(44100);

    // 0x10392ab48, 24 bytes, __common; set at startup by ___cxx_global_var_init.12
    Array<int, eastl::allocator> ClientBuild::m_fogStartDistance = Array<int, eastl::allocator>(44100);

    // 0x10392ab60, 24 bytes, __common; set at startup by ___cxx_global_var_init.13
    Array<int, eastl::allocator> ClientBuild::m_fogIntensity = Array<int, eastl::allocator>(44100);

    // 0x10392ab78, 24 bytes, __common; set at startup by ___cxx_global_var_init.14
    Array<short, eastl::allocator> ClientBuild::m_floort1 = Array<short, eastl::allocator>();

    // 0x10392ab90, 24 bytes, __common; set at startup by ___cxx_global_var_init.15
    Array<short, eastl::allocator> ClientBuild::m_floort2 = Array<short, eastl::allocator>();

    // 0x10392aba8, 24 bytes, __common; set at startup by ___cxx_global_var_init.16
    Array<signed char, eastl::allocator> ClientBuild::m_floors = Array<signed char, eastl::allocator>();

    // 0x10392abc0, 24 bytes, __common; set at startup by ___cxx_global_var_init.17
    Array<signed char, eastl::allocator> ClientBuild::m_floorr = Array<signed char, eastl::allocator>();

    // 0x10392abd8, 24 bytes, __common; set at startup by ___cxx_global_var_init.18
    Array<signed char, eastl::allocator> ClientBuild::m_shadow = Array<signed char, eastl::allocator>();

    // 0x10392abf0, 44100 bytes, __common; zero-initialised
    ClientBuild::m_lightmap;

    // 0x103935834, 416 bytes, __common; zero-initialised
    ClientBuild::m_huetot;

    // 0x1039359d4, 416 bytes, __common; zero-initialised
    ClientBuild::m_sattot;

    // 0x103935b74, 416 bytes, __common; zero-initialised
    ClientBuild::m_ligtot;

    // 0x103935d14, 416 bytes, __common; zero-initialised
    ClientBuild::m_comtot;

    // 0x103935eb4, 420 bytes, __common; zero-initialised
    ClientBuild::m_tot;

    // 0x103936058, 24 bytes, __common; set at startup by ___cxx_global_var_init.19
    Array<int, eastl::allocator> ClientBuild::m_mapo = Array<int, eastl::allocator>();

    // 0x10033e9b0, 272 bytes, placed by class name and debug map
    // ClientBuild::Init()
    void ClientBuild::Init() {
        minusedlevel = 99;
        m_floort1.set_max_size(43264, 1);
        m_floort2.set_max_size(43264, 1);
        m_floors.set_max_size(43264, 1);
        m_floorr.set_max_size(43264, 1);
        m_mapo.set_max_size(44100, 1);
        m_shadow.set_max_size(44100, 1);
        m_groundh.set_max_size(44100, 1);
        m_mapl.set_max_size(43264, 1);
        m_skyboxColour.set_max_size(44100, 1);
        m_fogStartDistance.set_max_size(44100, 1);
        m_fogIntensity.set_max_size(44100, 1);
    }

    // 0x10033ec00, 80 bytes, placed by class name and debug map
    // ClientBuild::Quit()
    void ClientBuild::Quit() {
        m_floort1.clear();
        m_floort2.clear();
        m_floors.clear();
        m_floorr.clear();
        m_mapo.clear();
        m_shadow.clear();
    }

    // 0x10033ecf0, 256 bytes, placed by class name and debug map
    // ClientBuild::SetToSea(int, int, int, int)
    void ClientBuild::SetToSea(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        int iVar2;
        uint uVar3;

        if (0 < param_4) {
            iVar1 = param_4 + param_2;
            do {
                uVar3 = param_1;
                if (0 < param_3) {
                    do {
                        if (((uVar3 < 104) && (-1 < param_2)) && (param_2 < 104)) {
                            iVar2 = 0;
                            Write3DArray<short>((Array*)&m_floort2, 0, uVar3, param_2,
                                                configdecoder::FloType::m_defaultWater);
                            do {
                                Write3DArray<int>((Array*)&m_groundh, iVar2, uVar3, param_2, 0);
                                Write3DArray<signed char>(&m_mapl, iVar2, uVar3, param_2);
                                iVar2 = iVar2 + 1;
                            } while (iVar2 != 4);
                        }
                        uVar3 = uVar3 + 1;
                    } while ((int)uVar3 < param_3 + param_1);
                }
                param_2 = param_2 + 1;
            } while (param_2 < iVar1);
        }
    }

    // 0x10033eec0, 464 bytes, placed by class name
    // ClientBuild::FadeAdjacent(int, int, int, int)
    void ClientBuild::FadeAdjacent(int param_1, int param_2, int param_3, int param_4) {
        uint uVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        int iVar6;
        uint uVar7;
        int iVar8;
        bool bVar9;

        if (-1 < param_4) {
            iVar2 = param_4 + param_2;
            uVar5 = param_3 + param_1;
            if (param_3 + param_1 < param_1) {
                uVar5 = param_1;
            }
            iVar3 = iVar2;
            if (iVar2 < param_2) {
                iVar3 = param_2;
            }
            iVar8 = param_2;
            do {
                if (-1 < param_3) {
                    iVar6 = 0;
                    uVar1 = param_1 - 1;
                    do {
                        uVar7 = uVar1 + 1;
                        if (((uVar7 < 104) && (-1 < iVar8)) && (iVar8 < 104)) {
                            Write3DArray<signed char>(&m_shadow, 0, uVar7, iVar8, 127);
                            if ((iVar6 == 0) && (0 < (int)uVar7)) {
                                iVar4 = Read3DArray<int>((Array*)&m_groundh, 0, uVar1, iVar8);
                                Write3DArray<int>((Array*)&m_groundh, 0, uVar7, iVar8, iVar4);
                            }
                            if ((param_3 == iVar6) && ((int)uVar7 < 103)) {
                                iVar4 = Read3DArray<int>((Array*)&m_groundh, 0, uVar1 + 2, iVar8);
                                Write3DArray<int>((Array*)&m_groundh, 0, uVar7, iVar8, iVar4);
                            }
                            if (iVar8 == param_2 && 0 < iVar8) {
                                iVar4 = Read3DArray<int>((Array*)&m_groundh, 0, uVar7, iVar8 + -1);
                                Write3DArray<int>((Array*)&m_groundh, 0, uVar7, iVar8, iVar4);
                            }
                            if (iVar8 == iVar2 && iVar8 < 103) {
                                iVar4 = Read3DArray<int>((Array*)&m_groundh, 0, uVar7, iVar8 + 1);
                                Write3DArray<int>((Array*)&m_groundh, 0, uVar7, iVar8, iVar4);
                            }
                        }
                        iVar6 = iVar6 + 1;
                        uVar1 = uVar7;
                    } while (uVar5 != uVar7);
                }
                bVar9 = iVar8 != iVar3;
                iVar8 = iVar8 + 1;
            } while (bVar9);
        }
    }

    // 0x10033f090, 416 bytes, placed by class name
    // ClientBuild::LoadGround(PacketJ<Array<unsigned char, eastl::allocator> >&, int, int, int, int, eastl::fixed_vector<movement::CollisionMap, 4ul, true, eastl::allocator>&)
    void ClientBuild::LoadGround(PacketJ* param_1, int param_2, int param_3, int param_4, int param_5,
                                 fixed_vector* param_6) {
        long lVar1;
        Array<int, eastl::allocator>* this;
        int iVar2;
        long lVar3;
        int iVar4;
        int iVar5;
        long lVar6;
        int iVar7;
        ulong local_38;

        local_38 = 0;
        do {
            lVar3 = 0;
            do {
                lVar6 = 0;
                do {
                    if (((int)(param_2 + lVar3) - 1U < 102) && ((uint)(param_3 + -1 + (int)lVar6) < 102)) {
                        lVar1 =
                            eastl::vector<movement::CollisionMap,
                                          eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<movement::CollisionMap,
                                        eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    param_6,
                                local_38);
                        this = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)(lVar1 + 16), param_2 + lVar3);
                        lVar1 = Array<int, eastl::allocator>::operator[](this, param_3 + lVar6);
                        *(byte*)(lVar1 + 3) = *(byte*)(lVar1 + 3) & 254;
                    }
                    lVar6 = lVar6 + 1;
                } while (lVar6 != 64);
                lVar3 = lVar3 + 1;
            } while (lVar3 != 64);
            local_38 = local_38 + 1;
        } while (local_38 != 4);
        iVar7 = 0;
        do {
            iVar2 = 0;
            do {
                iVar4 = 64;
                iVar5 = param_3;
                do {
                    LoadGroundSquare(param_1, iVar7, iVar2 + param_2, iVar5, iVar2 + param_2 + param_4, param_5 + iVar5,
                                     0);
                    iVar5 = iVar5 + 1;
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
                iVar2 = iVar2 + 1;
            } while (iVar2 != 64);
            iVar7 = iVar7 + 1;
        } while (iVar7 != 4);
    }

    // 0x10033f230, 576 bytes, placed by class name
    // ClientBuild::LoadGroundSquare(PacketJ<Array<unsigned char, eastl::allocator> >&, int, int, int, int, int, int)
    void ClientBuild::LoadGroundSquare(PacketJ* param_1, int param_2, int param_3, int param_4, int param_5,
                                       int param_6, int param_7) {
        byte bVar1;
        short sVar2;
        ushort uVar3;
        int iVar4;
        uint uVar5;
        undefined4 in_register_00000034;
        ulong uVar6;
        undefined1* puVar7;
        uint uVar8;

        uVar6 = CONCAT44(in_register_00000034, param_2);
        if ((((3 < (uint)param_2) || (param_3 < 0)) || (103 < param_3)) || ((param_4 < 0 || (103 < param_4)))) {
            while (true) {
                uVar3 = param_1->g2();
                if (uVar3 == 0) {
                    return;
                }
                if (uVar3 == 1)
                    break;
                if (uVar3 < 50) {
                    param_1->g2();
                }
            }
            param_1->g1();
            return;
        }
        puVar7 = &m_mapl;
        uVar8 = 0;
    LAB_10033f329:
        Write3DArray<signed char>(puVar7, uVar6, param_3, param_4, uVar8);
        do {
            uVar3 = param_1->g2();
            if (uVar3 == 1) {
                bVar1 = param_1->g1();
                uVar8 = (uint)bVar1;
                if (bVar1 == 1) {
                    uVar8 = 0;
                }
                if (param_2 == 0) {
                    iVar4 = uVar8 * -8;
                    param_2 = 0;
                } else {
                    iVar4 = Read3DArray<int>((Array*)&m_groundh, param_2 + -1, param_3, param_4);
                    iVar4 = iVar4 + uVar8 * -8;
                }
            LAB_10033f453:
                Write3DArray<int>((Array*)&m_groundh, param_2, param_3, param_4, iVar4);
                return;
            }
            if (uVar3 == 0) {
                if (param_2 == 0) {
                    iVar4 = PerlinNoise(param_5 + 932731, param_6 + 556238);
                    iVar4 = iVar4 * -8;
                    param_2 = 0;
                } else {
                    iVar4 = Read3DArray<int>((Array*)&m_groundh, param_2 + -1, param_3, param_4);
                    iVar4 = iVar4 + -240;
                }
                goto LAB_10033f453;
            }
            uVar8 = (uint)uVar3;
            if (uVar3 < 50) {
                sVar2 = param_1->g2s();
                Write3DArray<short>((Array*)&m_floort2, param_2, param_3, param_4, sVar2);
                uVar5 = uVar8 + 1;
                if (-1 < (int)(uVar8 - 2)) {
                    uVar5 = uVar8 - 2;
                }
                Write3DArray<signed char>(&m_floors, param_2, param_3, param_4, (int)(char)(uVar5 >> 2));
                uVar8 = (param_7 + uVar8) - 2 & 3;
                puVar7 = &m_floorr;
                goto LAB_10033f320;
            }
            if (uVar3 < 82)
                break;
            Write3DArray<short>((Array*)&m_floort1, param_2, param_3, param_4, uVar3 - 81);
        } while (true);
        uVar8 = (uint)(char)((char)uVar3 + -49);
        puVar7 = &m_mapl;
    LAB_10033f320:
        uVar6 = (ulong)(uint)param_2;
        goto LAB_10033f329;
    }

    // 0x10033f470, 560 bytes, placed by class name
    // ClientBuild::LoadGroundRegion(PacketJ<Array<unsigned char, eastl::allocator> >&, int, int, int, int, int, int, int, int, int, eastl::fixed_vector<movement::CollisionMap, 4ul, true, eastl::allocator>&)
    void ClientBuild::LoadGroundRegion(PacketJ* param_1, int param_2, int param_3, int param_4, int param_5,
                                       int param_6, int param_7, int param_8, int param_9, int param_10,
                                       fixed_vector* param_11) {
        int iVar1;
        int iVar2;
        long lVar3;
        Array<int, eastl::allocator>* this;
        uint uVar4;
        long lVar5;
        uint uVar6;
        uint uVar7;
        int iVar8;
        int iVar9;
        uint uVar10;
        int iVar11;
        long lVar12;
        int iVar13;
        int local_34;

        lVar5 = 0;
        do {
            lVar12 = 0;
            do {
                if (((int)(lVar5 + param_3) - 1U < 102) && ((uint)(param_4 + -1 + (int)lVar12) < 102)) {
                    lVar3 = eastl::vector<movement::CollisionMap,
                                          eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<movement::CollisionMap,
                                eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_11,
                        (long)param_2);
                    this = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)(lVar3 + 16), lVar5 + param_3);
                    lVar3 = Array<int, eastl::allocator>::operator[](this, param_4 + lVar12);
                    *(byte*)(lVar3 + 3) = *(byte*)(lVar3 + 3) & 254;
                }
                lVar12 = lVar12 + 1;
            } while (lVar12 != 8);
            lVar5 = lVar5 + 1;
        } while (lVar5 != 8);
        local_34 = 0;
        do {
            uVar6 = 0;
            do {
                uVar4 = uVar6 & 7;
                uVar7 = 0;
                do {
                    if (((int)uVar7 < param_7 ||
                         (param_6 + 8 <= (int)uVar6 || ((int)uVar6 < param_6 || local_34 != param_5))) ||
                        (param_7 + 8 <= (int)uVar7)) {
                        iVar13 = 0;
                        iVar8 = 0;
                        iVar1 = -1;
                        iVar2 = -1;
                        iVar9 = 0;
                        iVar11 = 0;
                    } else {
                        uVar10 = uVar7 & 7;
                        iVar1 = util::RegionRotate::DX(uVar4, uVar10, param_8);
                        iVar1 = iVar1 + param_3;
                        iVar2 = util::RegionRotate::DZ(uVar4, uVar10, param_8);
                        iVar2 = param_4 + iVar2;
                        iVar11 = uVar10 + param_10 + param_4;
                        iVar8 = param_2;
                        iVar9 = param_9 + param_3 + uVar4;
                        iVar13 = param_8;
                    }
                    LoadGroundSquare(param_1, iVar8, iVar1, iVar2, iVar9, iVar11, iVar13);
                    uVar7 = uVar7 + 1;
                } while (uVar7 != 64);
                uVar6 = uVar6 + 1;
            } while (uVar6 != 64);
            local_34 = local_34 + 1;
        } while (local_34 != 4);
    }

    // 0x10033f6a0, 480 bytes, placed by class name
    // ClientBuild::AutoGroundRegion(int, int, int)
    void ClientBuild::AutoGroundRegion(int param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;

        iVar1 = 0;
        do {
            iVar2 = 0;
            do {
                Write3DArray<int>((Array*)&m_groundh, param_1, iVar1 + param_2, param_3 + iVar2, 0);
                iVar2 = iVar2 + 1;
            } while (iVar2 != 8);
            iVar1 = iVar1 + 1;
        } while (iVar1 != 8);
        if (0 < param_2) {
            iVar1 = 1;
            do {
                iVar2 = Read3DArray<int>((Array*)&m_groundh, param_1, param_2 + -1, param_3 + iVar1);
                Write3DArray<int>((Array*)&m_groundh, param_1, param_2, param_3 + iVar1, iVar2);
                iVar1 = iVar1 + 1;
            } while (iVar1 != 8);
        }
        if (0 < param_3) {
            iVar1 = 1;
            do {
                iVar2 = Read3DArray<int>((Array*)&m_groundh, param_1, param_2 + iVar1, param_3 + -1);
                Write3DArray<int>((Array*)&m_groundh, param_1, param_2 + iVar1, param_3, iVar2);
                iVar1 = iVar1 + 1;
            } while (iVar1 != 8);
        }
        if (0 < param_2) {
            iVar1 = param_2 + -1;
            iVar2 = Read3DArray<int>((Array*)&m_groundh, param_1, iVar1, param_3);
            if (iVar2 != 0) {
                iVar2 = param_3;
                goto LAB_10033f854;
            }
        }
        if ((param_3 < 1) ||
            (iVar1 = Read3DArray<int>((Array*)&m_groundh, param_1, param_2, param_3 + -1), iVar1 == 0)) {
            if (param_2 < 1) {
                return;
            }
            if (param_3 < 1) {
                return;
            }
            iVar1 = param_2 + -1;
            iVar2 = Read3DArray<int>((Array*)&m_groundh, param_1, iVar1, param_3 + -1);
            if (iVar2 == 0) {
                return;
            }
        } else {
            iVar1 = param_2;
        }
        iVar2 = param_3 + -1;
    LAB_10033f854:
        iVar1 = Read3DArray<int>((Array*)&m_groundh, param_1, iVar1, iVar2);
        Write3DArray<int>((Array*)&m_groundh, param_1, param_2, param_3, iVar1);
    }

    // 0x10033f880, 704 bytes, placed by class name
    // ClientBuild::LoadEnvironmentSettings(PacketJ<Array<unsigned char, eastl::allocator> >&, int, int)
    void ClientBuild::LoadEnvironmentSettings(PacketJ* param_1, int param_2, int param_3) {
        byte bVar1;
        byte bVar2;
        byte bVar3;
        byte bVar4;
        int iVar5;
        undefined8* puVar6;
        uint uVar7;
        ulong uVar8;
        ulong uVar9;
        uint uVar10;
        int iVar11;
        uint uVar12;
        int iVar13;
        ulong uVar14;
        ClientBuild* pCVar15;
        ClientBuild* local_b8;
        undefined8 local_b0;
        ClientBuild* local_a8;
        undefined8 local_a0;
        ulong local_98;
        ulong local_90;
        ulong local_88;
        int local_74;
        uint local_70;
        uint local_6c;
        float local_68;
        float local_64;
        float local_60;
        float local_5c;
        float local_58;
        float local_54;
        ulong local_50;
        uint local_44;
        uint local_40;
        uint local_3c;
        uint local_38;
        char local_31;

        uVar14 = (ulong)(uint)param_2;
        bVar1 = param_1->g1();
        local_38 = (uint)bVar1;
        bVar1 = param_1->g1();
        bVar2 = param_1->g1();
        bVar3 = param_1->g1();
        bVar4 = param_1->g1();
        local_70 = (uint)bVar4;
        local_31 = param_1->g1();
        local_68 = (float)(int)local_38;
        local_40 = (uint)bVar1;
        local_64 = (float)local_40;
        local_3c = (uint)bVar2;
        local_60 = (float)local_3c;
        uVar8 = 0;
        local_6c = (uint)bVar3;
        local_88 = uVar14;
        local_44 = local_6c;
        do {
            if (local_31 == '\0') {
                bVar1 = param_1->g1();
                local_38 = (uint)bVar1;
                bVar1 = param_1->g1();
                local_40 = (uint)bVar1;
                bVar1 = param_1->g1();
                local_3c = (uint)bVar1;
                bVar1 = param_1->g1();
                local_44 = (uint)bVar1;
            }
            iVar5 = param_1->gSmart2or4();
            if (((int)uVar8 < 4) || (0 < iVar5)) {
                local_5c = (float)(int)local_38;
                local_58 = (float)(int)local_40;
                local_54 = (float)(int)local_3c;
                iVar11 = 0;
                uVar7 = 1;
                uVar9 = 0;
                local_74 = iVar5;
                do {
                    uVar12 = (int)uVar9 + (int)uVar14;
                    uVar10 = uVar7;
                    local_50 = uVar8;
                    if (((uVar12 < 104) && (iVar13 = iVar11 + param_3, -1 < iVar13)) && (iVar13 < 104)) {
                        local_98 = uVar9;
                        local_90 = (ulong)uVar7;
                        if (local_31 == '\0') {
                            new (&local_a8) ImVec4(local_5c, local_58, local_54, 1.0);
                            puVar6 = &local_a0;
                            pCVar15 = local_a8;
                            uVar7 = local_44;
                        } else {
                            new (&local_b8) ImVec4(local_68, local_64, local_60, 1.0);
                            puVar6 = &local_b0;
                            pCVar15 = local_b8;
                            uVar7 = local_6c;
                        }
                        iVar5 = (int)local_50;
                        Write3DArray<jag::math::Vector4T<float>>(pCVar15, *puVar6, &m_skyboxColour,
                                                                 local_50 & 4294967295, uVar12, iVar13);
                        Write3DArray<int>((Array*)&m_fogStartDistance, iVar5, uVar12, iVar13, uVar7);
                        Write3DArray<int>((Array*)&m_fogIntensity, iVar5, uVar12, iVar13, local_70);
                        uVar10 = (uint)local_90;
                        uVar9 = local_98;
                        uVar14 = local_88;
                        iVar5 = local_74;
                    }
                    if (iVar11 < 63) {
                        iVar11 = iVar11 + 1;
                        uVar8 = local_50;
                    } else {
                        iVar11 = 0;
                        iVar13 = (int)uVar9;
                        uVar7 = iVar13 + 1;
                        if (62 < iVar13) {
                            uVar7 = 0;
                        }
                        uVar8 = (ulong)((int)local_50 + (uint)(62 < iVar13));
                        uVar9 = (ulong)uVar7;
                    }
                    uVar7 = uVar10 + 1;
                } while (((int)uVar8 < 4) || ((int)uVar10 < iVar5));
            }
            iVar5 = (int)uVar8;
            uVar8 = (ulong)(iVar5 + 1);
        } while (iVar5 < 3);
    }

    // 0x10033fbc0, 160 bytes, placed by class name
    // ClientBuild::PerlinNoise(int, int)
    int ClientBuild::PerlinNoise(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        int iVar3;

        iVar1 = InterpolatedNoise(param_1 + 45365, param_2 + 91923, 4);
        iVar2 = InterpolatedNoise(param_1 + 10294, param_2 + 37821, 2);
        iVar3 = InterpolatedNoise(param_1, param_2, 1);
        iVar2 = (int)((double)((iVar3 + -128 >> 2) + (iVar2 + -128 >> 1) + iVar1 + -128) * 0.3);
        iVar1 = 25;
        if (iVar2 < 25) {
            iVar1 = iVar2;
        }
        iVar3 = 10;
        if (-26 < iVar2) {
            iVar3 = iVar1 + 35;
        }
        return iVar3;
    }

    // 0x10033fc60, 384 bytes, placed by class name
    // ClientBuild::CheckLocations(PacketJ<Array<unsigned char, eastl::allocator> >&, int, int)
    ulong ClientBuild::CheckLocations(PacketJ* param_1, int param_2, int param_3) {
        byte bVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        ulong uVar5;
        shared_ptr* psVar7;
        LocType* this;
        int iVar8;
        int iVar9;
        bool bVar10;
        shared_ptr<dash3d::Decor> local_60[16];
        ulong local_48;
        ulong local_40;
        int local_34;

        local_40 = 0;
        param_1->SetPos(0);
        iVar8 = -1;
        do {
            uVar5 = param_1->size();
            if (param_1->GetTextureAtlas() <= uVar5) {
                return local_40;
            }
            iVar2 = param_1->gSmartsExtend();
            if (iVar2 != 0) {
                iVar8 = iVar8 + iVar2;
                bVar10 = false;
                local_48 = 0;
                do {
                    while (true) {
                        while (iVar3 = param_1->gSmarts(), bVar10) {
                            if (iVar3 == 0)
                                goto LAB_10033fc90;
                            param_1->g1();
                        }
                        if (iVar3 != 0)
                            break;
                    joined_r0x00010033fdad:
                        if (iVar3 == 0)
                            goto LAB_10033fc90;
                    }
                    uVar4 = ((int)local_48 + iVar3) - 1;
                    local_48 = (ulong)uVar4;
                    local_34 = iVar8;
                    param_1->g1();
                    iVar8 = local_34;
                    iVar9 = (uVar4 >> 6 & 63) + param_2;
                    if ((((102 < iVar9) || (iVar9 < 1)) || (iVar9 = ((uint)local_48 & 63) + param_3, iVar9 < 1)) ||
                        (102 < iVar9))
                        goto joined_r0x00010033fdad;
                    psVar7 = (shared_ptr*)configdecoder::LocType::List(local_34);
                    shared_ptr<dash3d::Decor>::shared_ptr(local_60, psVar7);
                    this = (LocType*)shared_ptr<configdecoder::LocType>::operator->(
                        (shared_ptr<configdecoder::LocType>*)local_60);
                    bVar1 = CheckModelAll();
                    local_40 = (ulong)((int)local_40 + (uint)(bVar1 ^ 1));
                    local_60->~shared_ptr();
                    bVar10 = true;
                } while (iVar3 != 0);
            }
        LAB_10033fc90:
            if (iVar2 == 0) {
                return local_40;
            }
        } while (true);
    }

    // 0x10033fe20, 208 bytes, placed by class name
    // ClientBuild::PrefetchLocations(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void ClientBuild::PrefetchLocations(PacketJ* param_1) {
        ulong uVar1;
        shared_ptr* psVar3;
        LocType* this;
        int iVar4;
        int iVar5;
        int iVar6;
        shared_ptr<RSevenDebugPresetProvider> local_38[16];

        param_1->SetPos(0);
        iVar6 = -1;
        do {
            uVar1 = param_1->size();
            if (param_1->GetTextureAtlas() <= uVar1) {
                return;
            }
            iVar4 = param_1->gSmartsExtend();
            if (iVar4 != 0) {
                iVar6 = iVar6 + iVar4;
                psVar3 = (shared_ptr*)configdecoder::LocType::List(iVar6);
                new (local_38) shared_ptr<dash3d::Decor>(psVar3);
                this = (LocType*)shared_ptr<configdecoder::LocType>::operator->(
                    (shared_ptr<configdecoder::LocType>*)local_38);
                CheckModelAll();
                while (iVar5 = param_1->gSmarts(), iVar5 != 0) {
                    param_1->g1();
                }
                local_38->~shared_ptr();
            }
        } while (iVar4 != 0);
    }

    // 0x10033fef0, 496 bytes, placed by class name
    // ClientBuild::LoadLocations(PacketJ<Array<unsigned char, eastl::allocator> >&, int, int, dash3d::world&, eastl::fixed_vector<movement::CollisionMap, 4ul, true, eastl::allocator>&, int)
    ClientBuild* ClientBuild::LoadLocations(PacketJ* param_1, int param_2, int param_3, world* param_4,
                                            fixed_vector* param_5, int param_6) {
        byte bVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        ulong uVar5;
        CollisionMap* pCVar7;
        shared_ptr* psVar8;
        uint uVar9;
        long lVar10;
        uint local_48;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        undefined1 local_31;

        eastl::vector<LocInfo, BucketAllocatorEASTL>::vector();
        param_1->SetPos(0);
        local_3c = -1;
        do {
            uVar5 = param_1->size();
            if (param_1->GetTextureAtlas() <= uVar5) {
                return this;
            }
            iVar3 = param_1->gSmartsExtend();
            if (iVar3 != 0) {
                local_3c = local_3c + iVar3;
                uVar9 = 0;
                do {
                    iVar4 = param_1->gSmarts();
                    if (iVar4 != 0) {
                        uVar9 = (uVar9 + iVar4) - 1;
                        local_38 = (int)uVar9 >> 12;
                        bVar1 = param_1->g1();
                        local_48 = bVar1 & 3;
                        local_44 = (uVar9 >> 6 & 63) + param_2;
                        local_40 = (uVar9 & 63) + param_3;
                        if ((((local_44 < 103) && (0 < local_44)) && (0 < local_40)) && (local_40 < 103)) {
                            lVar10 = (long)local_38;
                            cVar2 = Read3DArray<signed char>((Array*)&m_mapl, 1, local_44, local_40);
                            uVar5 = lVar10 + ((char)(cVar2 << 6) >> 7);
                            if ((int)uVar5 < 0) {
                                pCVar7 = (CollisionMap*)0;
                            } else {
                                pCVar7 = (CollisionMap*)eastl::vector<
                                    movement::CollisionMap,
                                    eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                operator[](
                                    (vector<movement::CollisionMap, eastl::fixed_vector_allocator<
                                                                        40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                        param_5,
                                    uVar5);
                            }
                            cVar2 = AddLoc(local_38, local_44, local_40, local_3c, local_48, (uint)(bVar1 >> 2),
                                           param_4, pCVar7, param_6);
                            if (cVar2 != '\0') {
                                uVar5 = Read3DArray<signed char>((Array*)&m_mapl, 1, local_44, local_40);
                                if (((uVar5 & 2) != 0) && (0 < local_38)) {
                                    local_38 = local_38 + -1;
                                }
                                local_31 = constants::LocShape::ToLayer((uint)(bVar1 >> 2));
                                psVar8 = (shared_ptr*)configdecoder::LocType::List(local_3c);
                                eastl::vector<LocInfo, BucketAllocatorEASTL>::emplace_back<
                                    int&, int&, int&, int&, LocLayer, shared_ptr<configdecoder::LocType> const&>(
                                    (vector<LocInfo, BucketAllocatorEASTL>*)this, &local_38, &local_44, &local_40,
                                    (int*)&local_48, &local_31, psVar8);
                            }
                        }
                    }
                } while (iVar4 != 0);
            }
        } while (iVar3 != 0);
        return this;
    }

    // 0x1003400e0, 10240 bytes, placed by class name
    // ClientBuild::AddLoc(int, int, int, int, int, int, dash3d::world&, movement::CollisionMap*, int)
    ulong ClientBuild::AddLoc(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                              world* param_7, CollisionMap* param_8, int param_9) {
        uint uVar1;
        uint uVar2;
        undefined1 uVar3;
        char cVar4;
        bool bVar5;
        int iVar6;
        shared_ptr* psVar7;
        long lVar8;
        long lVar9;
        long* plVar10;
        shared_ptr<configdecoder::LocType>* psVar11;
        int* piVar12;
        uint* puVar13;
        shared_ptr* extraout_RDX;
        int iVar14;
        uint uVar15;
        _func_decltype_nullptr* p_Var16;
        int iVar17;
        int iVar18;
        ulong uVar19;
        int iVar20;
        uint uVar21;
        int local_dc;
        int local_d8;
        int local_d4;
        ulong local_d0;
        ulong local_c8;
        longlong local_c0;
        uint local_b8;
        uint local_b4;
        ulong local_b0;
        uint local_a4;
        _func_decltype_nullptr* local_a0;
        shared_ptr local_98;
        uint local_84;
        ulong local_80;
        int local_74;
        shared_ptr local_70;
        shared_ptr<dash3d::Decor> local_60[16];
        shared_ptr local_50;
        uint local_40;
        uint local_3c;
        uint local_38;
        int local_34;

        if (param_1 < minusedlevel) {
            minusedlevel = param_1;
        }
        local_84 = param_6;
        local_74 = param_4;
        local_40 = param_5;
        local_3c = param_3;
        local_38 = param_2;
        local_34 = param_1;
        psVar7 = (shared_ptr*)configdecoder::LocType::List(param_4);
        shared_ptr<dash3d::Decor>::shared_ptr(local_60, psVar7);
        if ((local_40 & 4294967293) == 1) {
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            local_c8 = (ulong) * (uint*)(lVar8 + 188);
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            puVar13 = (uint*)(lVar8 + 184);
        } else {
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            local_c8 = (ulong) * (uint*)(lVar8 + 184);
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            puVar13 = (uint*)(lVar8 + 188);
        }
        uVar15 = local_3c;
        local_80 = (ulong)local_38;
        iVar17 = (int)local_c8;
        iVar20 = iVar17 >> 1;
        iVar18 = iVar17 + 1 >> 1;
        if (104 < (int)(local_38 + iVar17)) {
            iVar18 = 1;
        }
        uVar21 = *puVar13;
        local_d0 = (ulong)uVar21;
        if (104 < (int)(local_38 + iVar17)) {
            iVar20 = 0;
        }
        iVar20 = iVar20 + local_38;
        iVar14 = (int)uVar21 >> 1;
        local_b4 = uVar21 + 1;
        iVar17 = (int)local_b4 >> 1;
        if (104 < (int)(uVar21 + local_3c)) {
            iVar17 = 1;
            iVar14 = 0;
        }
        iVar14 = iVar14 + local_3c;
        iVar6 = Read3DArray<int>((Array*)&m_groundh, local_34, iVar20, iVar14);
        local_b0 = CONCAT44(local_b0._4_4_, iVar6);
        iVar18 = iVar18 + (int)local_80;
        iVar14 = Read3DArray<int>((Array*)&m_groundh, local_34, iVar18, iVar14);
        local_80._0_4_ = iVar14;
        local_d8 = Read3DArray<int>((Array*)&m_groundh, local_34, iVar20, iVar17 + uVar15);
        local_d4 = Read3DArray<int>((Array*)&m_groundh, local_34, iVar18, iVar17 + uVar15);
        iVar20 = local_34;
        uVar1 = local_38;
        uVar21 = local_3c;
        lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
        iVar18 = local_74;
        iVar17 = *(int*)(lVar8 + 200);
        uVar3 = constants::LocShape::ToLayer(local_84);
        p_Var16 = (_func_decltype_nullptr*)(ulong)uVar21;
        local_c0 = dash3d::MousePickingHelper::GetPackedTypeCodeLoc(uVar1, p_Var16, iVar20, iVar17 == 0, iVar18, uVar3);
        uVar15 = local_40 * 64 + local_84;
        lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
        local_80 = CONCAT44(local_80._4_4_, (int)local_80 + (int)local_b0 + local_d8 + local_d4 >> 2);
        iVar17 = (int)local_c8 * 64 + uVar1 * 128;
        iVar18 = (int)local_d0;
        if (*(int*)(lVar8 + 480) == 1) {
            uVar15 = uVar15 + 256;
        }
        local_b0 = (ulong)uVar15;
        if (local_84 == 22) {
            new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            if (*(int*)(lVar8 + 212) == -1) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                cVar4 = ((lVar8 + 488))->empty();
                if (cVar4 == '\0')
                    goto LAB_100340443;
                iVar18 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_50.GetModel(iVar18, 22, local_40, local_34, iVar17, (int)local_80);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_100340443:
                local_a0 = (_func_decltype_nullptr*)CONCAT44(local_a0._4_4_, 22);
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                lVar9 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (jag*)&local_50, &local_74, (int*)&local_a0, (int*)&local_40, &local_34, (int*)&local_38,
                    (int*)&local_3c, (int*)(lVar8 + 212), (bool*)(lVar9 + 560), (_func_decltype_nullptr**)&local_98,
                    &param_9);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            }
            uVar15 = param_7->SetGroundDecor(local_34, local_38, local_3c, (int)local_80, &local_70, local_c0,
                                             (int)local_b0);
            uVar19 = (ulong)uVar15;
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            if ((*(int*)(lVar8 + 192) == 1) && (param_8 != (CollisionMap*)0)) {
                param_8->BlockGroundDecor(local_38, local_3c);
            }
            goto LAB_100342014;
        }
        if ((local_84 & 4294967294) == 10) {
            new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            if (*(int*)(lVar8 + 212) == -1) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                cVar4 = ((lVar8 + 488))->empty();
                if (cVar4 == '\0')
                    goto LAB_1003405d2;
                iVar20 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_50.GetModel(iVar20, 10, local_40, local_34, iVar17, (int)local_80);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_1003405d2:
                local_a0 = (_func_decltype_nullptr*)CONCAT44(local_a0._4_4_, 10);
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                lVar9 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (jag*)&local_50, &local_74, (int*)&local_a0, (int*)&local_40, &local_34, (int*)&local_38,
                    (int*)&local_3c, (int*)(lVar8 + 212), (bool*)(lVar9 + 560), (_func_decltype_nullptr**)&local_98,
                    &param_9);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            }
            bVar5 = operator!=(&local_70, (_func_decltype_nullptr*)0);
            if (bVar5) {
                cVar4 = param_7->AddScenery(local_34, local_38, local_3c, (int)local_80, (int)local_c8, (int)local_d0,
                                            &local_70, (uint)(local_84 == 11) << 8, local_c0, (int)local_b0);
                if ((cVar4 == '\0') || (lVar8 = shared_ptr<configdecoder::LocType>::operator->(
                                            (shared_ptr<configdecoder::LocType>*)local_60),
                                        *(char*)(lVar8 + 445) == '\0'))
                    goto LAB_1003407d6;
                plVar10 =
                    (long*)shared_ptr<dash3d::ModelSource>::operator->((shared_ptr<dash3d::ModelSource>*)&local_70);
                cVar4 = (**(code**)(*plVar10 + 24))(plVar10);
                iVar17 = 15;
                if (cVar4 != '\0') {
                    static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_50, (jag*)&local_70, extraout_RDX);
                    plVar10 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_50);
                    iVar17 = (**(code**)(*plVar10 + 72))(plVar10);
                    iVar20 = iVar17 + 3;
                    if (-1 < iVar17) {
                        iVar20 = iVar17;
                    }
                    iVar17 = 30;
                    if (iVar20 >> 2 < 30) {
                        iVar17 = iVar20 >> 2;
                    }
                    local_50.~shared_ptr();
                }
                uVar19 = CONCAT71((uint7)(uint3)(iVar18 * 64 + uVar21 * 128 >> 8), 1);
                if (-1 < (int)local_c8) {
                    iVar18 = 0;
                    do {
                        if (-1 < (int)local_d0) {
                            uVar19 = 0;
                            do {
                                iVar20 = (int)uVar19;
                                cVar4 = Read3DArray<signed char>((Array*)&m_shadow, local_34, local_38 + iVar18,
                                                                 local_3c + iVar20);
                                if (cVar4 < iVar17) {
                                    Write3DArray<signed char>(&m_shadow, local_34, local_38 + iVar18, local_3c + iVar20,
                                                              (int)(char)iVar17);
                                }
                                uVar19 = (ulong)(iVar20 + 1U);
                            } while (local_b4 != iVar20 + 1U);
                        }
                        bVar5 = iVar18 != (int)local_c8;
                        iVar18 = iVar18 + 1;
                    } while (bVar5);
                    uVar19 = CONCAT71((int7)(uVar19 >> 8), 1);
                }
            } else {
            LAB_1003407d6:
                uVar19 = 0;
            }
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            uVar21 = local_38;
            uVar15 = local_3c;
            if ((*(int*)(lVar8 + 192) != 0) && (param_8 != (CollisionMap*)0)) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                param_8->AddLoc(uVar21, uVar15, (int)local_c8, (int)local_d0, *(bool*)(lVar8 + 196));
            }
            goto LAB_100342014;
        }
        if (11 < (int)local_84) {
            new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            if (*(int*)(lVar8 + 212) == -1) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                cVar4 = ((lVar8 + 488))->empty();
                if (cVar4 == '\0')
                    goto LAB_1003408d5;
                iVar18 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_50.GetModel(iVar18, local_84, local_40, local_34, iVar17, (int)local_80);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_1003408d5:
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                lVar9 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int&, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (jag*)&local_50, &local_74, (int*)&local_84, (int*)&local_40, &local_34, (int*)&local_38,
                    (int*)&local_3c, (int*)(lVar8 + 212), (bool*)(lVar9 + 560), (_func_decltype_nullptr**)&local_98,
                    &param_9);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            }
            uVar15 = param_7->AddScenery(local_34, local_38, local_3c, (int)local_80, 1, 1, &local_70, 0, local_c0,
                                         (int)local_b0);
            uVar19 = (ulong)uVar15;
            if (((local_84 != 13) && (local_84 - 12 < 6)) && (0 < local_34)) {
                uVar15 = Read3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c);
                Write3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c, uVar15 | 2340);
            }
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            uVar21 = local_38;
            uVar15 = local_3c;
            if ((*(int*)(lVar8 + 192) != 0) && (param_8 != (CollisionMap*)0)) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                param_8->AddLoc(uVar21, uVar15, (int)local_c8, (int)local_d0, *(bool*)(lVar8 + 196));
            }
            goto LAB_100342014;
        }
        switch (local_84) {
        case 0:
            new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            if (*(int*)(lVar8 + 212) == -1) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                cVar4 = ((lVar8 + 488))->empty();
                if (cVar4 == '\0')
                    goto LAB_100340f0c;
                iVar18 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_50.GetModel(iVar18, 0, local_40, local_34, iVar17, (int)local_80);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_100340f0c:
                local_a0 = (_func_decltype_nullptr*)((ulong)local_a0 & 18446744069414584320);
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                lVar9 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (jag*)&local_50, &local_74, (int*)&local_a0, (int*)&local_40, &local_34, (int*)&local_38,
                    (int*)&local_3c, (int*)(lVar8 + 212), (bool*)(lVar9 + 560), (_func_decltype_nullptr**)&local_98,
                    &param_9);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            }
            iVar17 = local_34;
            uVar21 = local_38;
            uVar15 = local_3c;
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&WSHAPE0, (long)(int)local_40);
            uVar15 = param_7->SetWall(iVar17, uVar21, uVar15, (int)local_80, &local_70, &local_50, *piVar12, 0,
                                      local_c0, (int)local_b0);
            uVar19 = (ulong)uVar15;
            local_50.~shared_ptr();
            switch (local_40) {
            case 0:
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                if (*(char*)(lVar8 + 445) != '\0') {
                    Write3DArray<signed char>(&m_shadow, local_34, local_38, local_3c, 50);
                    Write3DArray<signed char>(&m_shadow, local_34, local_38, local_3c + 1, 50);
                }
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                if (*(char*)(lVar8 + 209) != '\0') {
                    uVar15 = Read3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c);
                    Write3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c, uVar15 | 585);
                }
                break;
            case 1:
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                if (*(char*)(lVar8 + 445) != '\0') {
                    Write3DArray<signed char>(&m_shadow, local_34, local_38, local_3c + 1, 50);
                    Write3DArray<signed char>(&m_shadow, local_34, local_38 + 1, local_3c + 1, 50);
                }
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                if (*(char*)(lVar8 + 209) != '\0') {
                    uVar15 = Read3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c + 1);
                    Write3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c + 1, uVar15 | 1170);
                }
                break;
            case 2:
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                if (*(char*)(lVar8 + 445) != '\0') {
                    Write3DArray<signed char>(&m_shadow, local_34, local_38 + 1, local_3c, 50);
                    Write3DArray<signed char>(&m_shadow, local_34, local_38 + 1, local_3c + 1, 50);
                }
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                if (*(char*)(lVar8 + 209) != '\0') {
                    uVar15 = Read3DArray<int>((Array*)&m_mapo, local_34, local_38 + 1, local_3c);
                    Write3DArray<int>((Array*)&m_mapo, local_34, local_38 + 1, local_3c, uVar15 | 585);
                }
                break;
            case 3:
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                if (*(char*)(lVar8 + 445) != '\0') {
                    Write3DArray<signed char>(&m_shadow, local_34, local_38, local_3c, 50);
                    Write3DArray<signed char>(&m_shadow, local_34, local_38 + 1, local_3c, 50);
                }
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                if (*(char*)(lVar8 + 209) != '\0') {
                    uVar15 = Read3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c);
                    Write3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c, uVar15 | 1170);
                }
            }
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            uVar2 = local_38;
            uVar1 = local_3c;
            uVar21 = local_40;
            uVar15 = local_84;
            if ((*(int*)(lVar8 + 192) != 0) && (param_8 != (CollisionMap*)0)) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                param_8->AddWall(uVar2, uVar1, uVar15, uVar21, *(bool*)(lVar8 + 196));
            }
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            iVar17 = local_34;
            uVar21 = local_38;
            uVar15 = local_3c;
            if (*(int*)(lVar8 + 216) != 16) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                param_7->MoveDecor(iVar17, uVar21, uVar15, *(int*)(lVar8 + 216));
            }
            goto LAB_100342014;
        case 1:
            new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            if (*(int*)(lVar8 + 212) == -1) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                cVar4 = ((lVar8 + 488))->empty();
                if (cVar4 == '\0')
                    goto LAB_1003410cc;
                iVar18 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_50.GetModel(iVar18, 1, local_40, local_34, iVar17, (int)local_80);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_1003410cc:
                local_a0 = (_func_decltype_nullptr*)CONCAT44(local_a0._4_4_, 1);
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                lVar9 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (jag*)&local_50, &local_74, (int*)&local_a0, (int*)&local_40, &local_34, (int*)&local_38,
                    (int*)&local_3c, (int*)(lVar8 + 212), (bool*)(lVar9 + 560), (_func_decltype_nullptr**)&local_98,
                    &param_9);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            }
            iVar17 = local_34;
            uVar21 = local_38;
            uVar15 = local_3c;
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&WSHAPE1, (long)(int)local_40);
            uVar15 = param_7->SetWall(iVar17, uVar21, uVar15, (int)local_80, &local_70, &local_50, *piVar12, 0,
                                      local_c0, (int)local_b0);
            uVar19 = (ulong)uVar15;
            local_50.~shared_ptr();
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            if (*(char*)(lVar8 + 445) != '\0') {
                switch (local_40) {
                case 0:
                    Write3DArray<signed char>(&m_shadow, local_34, local_38, local_3c + 1, 50);
                    break;
                case 1:
                    Write3DArray<signed char>(&m_shadow, local_34, local_38 + 1, local_3c + 1, 50);
                    break;
                case 2:
                    Write3DArray<signed char>(&m_shadow, local_34, local_38 + 1, local_3c, 50);
                    break;
                case 3:
                    Write3DArray<signed char>(&m_shadow, local_34, local_38, local_3c, 50);
                }
            }
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            uVar2 = local_38;
            uVar1 = local_3c;
            uVar21 = local_40;
            uVar15 = local_84;
            if ((*(int*)(lVar8 + 192) != 0) && (param_8 != (CollisionMap*)0)) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                param_8->AddWall(uVar2, uVar1, uVar15, uVar21, *(bool*)(lVar8 + 196));
            }
            goto LAB_100342014;
        case 2:
            local_a4 = local_40 + 1 & 3;
            new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            if (*(int*)(lVar8 + 212) == -1) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                cVar4 = ((lVar8 + 488))->empty();
                if (cVar4 == '\0')
                    goto LAB_100341726;
                iVar18 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_98.GetModel(iVar18, 2, local_40 + 4, local_34, iVar17, (int)local_80);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_98);
                local_98.~shared_ptr();
                iVar18 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_98.GetModel(iVar18, 2, local_a4, local_34, iVar17, (int)local_80);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_50, &local_98);
                local_98.~shared_ptr();
            } else {
            LAB_100341726:
                local_b8 = 2;
                local_dc = local_40 + 4;
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                lVar9 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_a0 = (_func_decltype_nullptr*)0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (jag*)&local_98, &local_74, (int*)&local_b8, &local_dc, &local_34, (int*)&local_38, (int*)&local_3c,
                    (int*)(lVar8 + 212), (bool*)(lVar9 + 560), &local_a0, &param_9);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_98);
                local_98.~shared_ptr();
                local_b8 = 2;
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                lVar9 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_a0 = (_func_decltype_nullptr*)0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (jag*)&local_98, &local_74, (int*)&local_b8, (int*)&local_a4, &local_34, (int*)&local_38,
                    (int*)&local_3c, (int*)(lVar8 + 212), (bool*)(lVar9 + 560), &local_a0, &param_9);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_50, &local_98);
                local_98.~shared_ptr();
            }
            iVar18 = local_34;
            uVar21 = local_38;
            uVar15 = local_3c;
            piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&WSHAPE0, (long)(int)local_40);
            iVar17 = *piVar12;
            piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&WSHAPE0, (long)(int)local_a4);
            uVar15 = param_7->SetWall(iVar18, uVar21, uVar15, (int)local_80, &local_70, &local_50, iVar17, *piVar12,
                                      local_c0, (int)local_b0);
            uVar19 = (ulong)uVar15;
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            if (*(char*)(lVar8 + 209) != '\0') {
                switch (local_40) {
                case 0:
                    uVar15 = Read3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c);
                    Write3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c, uVar15 | 585);
                    uVar15 = Read3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c + 1);
                    Write3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c + 1, uVar15 | 1170);
                    break;
                case 1:
                    uVar15 = Read3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c + 1);
                    Write3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c + 1, uVar15 | 1170);
                    uVar15 = Read3DArray<int>((Array*)&m_mapo, local_34, local_38 + 1, local_3c);
                    Write3DArray<int>((Array*)&m_mapo, local_34, local_38 + 1, local_3c, uVar15 | 585);
                    break;
                case 2:
                    uVar15 = Read3DArray<int>((Array*)&m_mapo, local_34, local_38 + 1, local_3c);
                    Write3DArray<int>((Array*)&m_mapo, local_34, local_38 + 1, local_3c, uVar15 | 585);
                    uVar15 = Read3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c);
                    Write3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c, uVar15 | 1170);
                    break;
                case 3:
                    uVar15 = Read3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c);
                    Write3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c, uVar15 | 1170);
                    uVar15 = Read3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c);
                    Write3DArray<int>((Array*)&m_mapo, local_34, local_38, local_3c, uVar15 | 585);
                }
            }
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            uVar2 = local_38;
            uVar1 = local_3c;
            uVar21 = local_40;
            uVar15 = local_84;
            if ((*(int*)(lVar8 + 192) != 0) && (param_8 != (CollisionMap*)0)) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                param_8->AddWall(uVar2, uVar1, uVar15, uVar21, *(bool*)(lVar8 + 196));
            }
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            iVar17 = local_34;
            uVar21 = local_38;
            uVar15 = local_3c;
            if (*(int*)(lVar8 + 216) != 16) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                param_7->MoveDecor(iVar17, uVar21, uVar15, *(int*)(lVar8 + 216));
            }
            goto LAB_10034200b;
        case 3:
            new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            if (*(int*)(lVar8 + 212) == -1) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                cVar4 = ((lVar8 + 488))->empty();
                if (cVar4 == '\0')
                    goto LAB_10034122f;
                iVar18 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_50.GetModel(iVar18, 3, local_40, local_34, iVar17, (int)local_80);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_10034122f:
                local_a0 = (_func_decltype_nullptr*)CONCAT44(local_a0._4_4_, 3);
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                lVar9 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (jag*)&local_50, &local_74, (int*)&local_a0, (int*)&local_40, &local_34, (int*)&local_38,
                    (int*)&local_3c, (int*)(lVar8 + 212), (bool*)(lVar9 + 560), (_func_decltype_nullptr**)&local_98,
                    &param_9);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            }
            iVar17 = local_34;
            uVar21 = local_38;
            uVar15 = local_3c;
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&WSHAPE1, (long)(int)local_40);
            uVar15 = param_7->SetWall(iVar17, uVar21, uVar15, (int)local_80, &local_70, &local_50, *piVar12, 0,
                                      local_c0, (int)local_b0);
            uVar19 = (ulong)uVar15;
            local_50.~shared_ptr();
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            if (*(char*)(lVar8 + 445) != '\0') {
                switch (local_40) {
                case 0:
                    Write3DArray<signed char>(&m_shadow, local_34, local_38, local_3c + 1, 50);
                    break;
                case 1:
                    Write3DArray<signed char>(&m_shadow, local_34, local_38 + 1, local_3c + 1, 50);
                    break;
                case 2:
                    Write3DArray<signed char>(&m_shadow, local_34, local_38 + 1, local_3c, 50);
                    break;
                case 3:
                    Write3DArray<signed char>(&m_shadow, local_34, local_38, local_3c, 50);
                }
            }
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            uVar2 = local_38;
            uVar1 = local_3c;
            uVar21 = local_40;
            uVar15 = local_84;
            if ((*(int*)(lVar8 + 192) != 0) && (param_8 != (CollisionMap*)0)) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                param_8->AddWall(uVar2, uVar1, uVar15, uVar21, *(bool*)(lVar8 + 196));
            }
            goto LAB_100342014;
        case 4:
            new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            if (*(int*)(lVar8 + 212) == -1) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                cVar4 = ((lVar8 + 488))->empty();
                if (cVar4 == '\0')
                    goto LAB_100341392;
                iVar18 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_50.GetModel(iVar18, 4, local_40, local_34, iVar17, (int)local_80);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_100341392:
                local_a0 = (_func_decltype_nullptr*)CONCAT44(local_a0._4_4_, 4);
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                lVar9 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (jag*)&local_50, &local_74, (int*)&local_a0, (int*)&local_40, &local_34, (int*)&local_38,
                    (int*)&local_3c, (int*)(lVar8 + 212), (bool*)(lVar9 + 560), (_func_decltype_nullptr**)&local_98,
                    &param_9);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            }
            iVar17 = local_34;
            uVar21 = local_38;
            uVar15 = local_3c;
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&WSHAPE0, (long)(int)local_40);
            uVar15 = param_7->SetDecor(iVar17, uVar21, uVar15, (int)local_80, &local_70, &local_50, *piVar12, 0, 0, 0,
                                       local_c0, (int)local_b0);
            break;
        case 5:
            lVar8 = param_7->WallType(local_34, local_38, local_3c);
            if (lVar8 == 0) {
                iVar18 = 16;
            } else {
                iVar18 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar8);
                psVar11 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar18);
                lVar8 = shared_ptr<configdecoder::LocType>::operator->(psVar11);
                iVar18 = *(int*)(lVar8 + 216);
            }
            new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            if (*(int*)(lVar8 + 212) == -1) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                cVar4 = ((lVar8 + 488))->empty();
                if (cVar4 == '\0')
                    goto LAB_100341a03;
                iVar20 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_50.GetModel(iVar20, 4, local_40, local_34, iVar17, (int)local_80);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_100341a03:
                local_a0 = (_func_decltype_nullptr*)CONCAT44(local_a0._4_4_, 4);
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                lVar9 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (jag*)&local_50, &local_74, (int*)&local_a0, (int*)&local_40, &local_34, (int*)&local_38,
                    (int*)&local_3c, (int*)(lVar8 + 212), (bool*)(lVar9 + 560), (_func_decltype_nullptr**)&local_98,
                    &param_9);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            }
            iVar14 = local_34;
            local_b4 = local_38;
            local_c8 = CONCAT44(local_c8._4_4_, local_3c);
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            uVar19 = (ulong)(int)local_40;
            piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&WSHAPE0, uVar19);
            iVar17 = *piVar12;
            piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&DECORXOF, uVar19);
            iVar20 = *piVar12;
            piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&DECORZOF, uVar19);
            uVar15 = param_7->SetDecor(iVar14, local_b4, (int)local_c8, (int)local_80, &local_70, &local_50, iVar17, 0,
                                       iVar20 * iVar18, iVar18 * *piVar12, local_c0, (int)local_b0);
            break;
        case 6:
            lVar8 = param_7->WallType(local_34, local_38, local_3c);
            if (lVar8 == 0) {
                iVar18 = 8;
            } else {
                iVar18 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar8);
                psVar11 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar18);
                lVar8 = shared_ptr<configdecoder::LocType>::operator->(psVar11);
                iVar18 = *(int*)(lVar8 + 216) / 2;
            }
            new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            if (*(int*)(lVar8 + 212) == -1) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                cVar4 = ((lVar8 + 488))->empty();
                if (cVar4 == '\0')
                    goto LAB_100341bdd;
                iVar20 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_50.GetModel(iVar20, 4, local_40 + 4, local_34, iVar17, (int)local_80);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_100341bdd:
                local_a0 = (_func_decltype_nullptr*)CONCAT44(local_a0._4_4_, 4);
                local_a4 = local_40 + 4;
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                lVar9 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (jag*)&local_50, &local_74, (int*)&local_a0, (int*)&local_a4, &local_34, (int*)&local_38,
                    (int*)&local_3c, (int*)(lVar8 + 212), (bool*)(lVar9 + 560), (_func_decltype_nullptr**)&local_98,
                    &param_9);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            }
            iVar20 = local_34;
            uVar21 = local_3c;
            local_b4 = local_38;
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            uVar15 = local_40;
            uVar19 = (ulong)(int)local_40;
            piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&DECORXOF2, uVar19);
            iVar17 = *piVar12;
            piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&DECORZOF2, uVar19);
            uVar15 = param_7->SetDecor(iVar20, local_b4, uVar21, (int)local_80, &local_70, &local_50, 256, uVar15,
                                       iVar17 * iVar18, iVar18 * *piVar12, local_c0, (int)local_b0);
            break;
        case 7:
            new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            uVar15 = local_40;
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            uVar21 = uVar15 + 2 & 3;
            if (*(int*)(lVar8 + 212) == -1) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                cVar4 = ((lVar8 + 488))->empty();
                if (cVar4 == '\0')
                    goto LAB_1003414a8;
                iVar18 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_50.GetModel(iVar18, 4, uVar21 + 4, local_34, iVar17, (int)local_80);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_1003414a8:
                local_a0 = (_func_decltype_nullptr*)CONCAT44(local_a0._4_4_, 4);
                local_a4 = uVar21 + 4;
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                lVar9 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (jag*)&local_50, &local_74, (int*)&local_a0, (int*)&local_a4, &local_34, (int*)&local_38,
                    (int*)&local_3c, (int*)(lVar8 + 212), (bool*)(lVar9 + 560), (_func_decltype_nullptr**)&local_98,
                    &param_9);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            }
            iVar17 = local_34;
            uVar1 = local_38;
            uVar21 = local_3c;
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            uVar15 = param_7->SetDecor(iVar17, uVar1, uVar21, (int)local_80, &local_70, &local_50, 256, uVar15 + 2 & 3,
                                       0, 0, local_c0, (int)local_b0);
            break;
        case 8:
            lVar8 = param_7->WallType(local_34, local_38, local_3c);
            if (lVar8 == 0) {
                uVar15 = 8;
            } else {
                iVar18 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar8);
                psVar11 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar18);
                lVar8 = shared_ptr<configdecoder::LocType>::operator->(psVar11);
                uVar15 = *(int*)(lVar8 + 216) / 2;
            }
            new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            uVar21 = local_40;
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            uVar21 = uVar21 + 2 & 3;
            local_b4 = uVar15;
            if (*(int*)(lVar8 + 212) == -1) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                cVar4 = ((lVar8 + 488))->empty();
                if (cVar4 == '\0')
                    goto LAB_100341e2a;
                iVar18 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_98.GetModel(iVar18, 4, local_40 + 4, local_34, iVar17, (int)local_80);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_98);
                local_98.~shared_ptr();
                iVar18 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_98.GetModel(iVar18, 4, uVar21 | 4, local_34, iVar17, (int)local_80);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_50, &local_98);
                local_98.~shared_ptr();
            } else {
            LAB_100341e2a:
                local_a4 = 4;
                local_b8 = local_40 + 4;
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                lVar9 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_a0 = (_func_decltype_nullptr*)0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (jag*)&local_98, &local_74, (int*)&local_a4, (int*)&local_b8, &local_34, (int*)&local_38,
                    (int*)&local_3c, (int*)(lVar8 + 212), (bool*)(lVar9 + 560), &local_a0, &param_9);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_98);
                local_98.~shared_ptr();
                local_a4 = 4;
                local_b8 = uVar21 | 4;
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                lVar9 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_a0 = (_func_decltype_nullptr*)0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (jag*)&local_98, &local_74, (int*)&local_a4, (int*)&local_b8, &local_34, (int*)&local_38,
                    (int*)&local_3c, (int*)(lVar8 + 212), (bool*)(lVar9 + 560), &local_a0, &param_9);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_50, &local_98);
                local_98.~shared_ptr();
            }
            iVar17 = local_34;
            uVar1 = local_3c;
            uVar21 = local_40;
            local_c8 = CONCAT44(local_c8._4_4_, local_38);
            uVar19 = (ulong)(int)local_40;
            piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&DECORXOF2, uVar19);
            uVar15 = local_b4;
            iVar18 = *piVar12 * local_b4;
            piVar12 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&DECORZOF2, uVar19);
            uVar15 = param_7->SetDecor(iVar17, (int)local_c8, uVar1, (int)local_80, &local_70, &local_50, 256, uVar21,
                                       iVar18, uVar15 * *piVar12, local_c0, (int)local_b0);
            break;
        case 9:
            new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var16);
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            if (*(int*)(lVar8 + 212) == -1) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                cVar4 = ((lVar8 + 488))->empty();
                if (cVar4 == '\0')
                    goto LAB_1003415be;
                iVar18 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_50.GetModel(iVar18, local_84, local_40, local_34, iVar17, (int)local_80);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_1003415be:
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                lVar9 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int&, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (jag*)&local_50, &local_74, (int*)&local_84, (int*)&local_40, &local_34, (int*)&local_38,
                    (int*)&local_3c, (int*)(lVar8 + 212), (bool*)(lVar9 + 560), (_func_decltype_nullptr**)&local_98,
                    &param_9);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_70, &local_50);
                local_50.~shared_ptr();
            }
            uVar15 = param_7->AddScenery(local_34, local_38, local_3c, (int)local_80, 1, 1, &local_70, 0, local_c0,
                                         (int)local_b0);
            uVar19 = (ulong)uVar15;
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            uVar21 = local_38;
            uVar15 = local_3c;
            if ((*(int*)(lVar8 + 192) != 0) && (param_8 != (CollisionMap*)0)) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                param_8->AddLoc(uVar21, uVar15, (int)local_c8, (int)local_d0, *(bool*)(lVar8 + 196));
            }
            lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
            iVar17 = local_34;
            uVar21 = local_38;
            uVar15 = local_3c;
            if (*(int*)(lVar8 + 216) != 16) {
                lVar8 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_60);
                param_7->MoveDecor(iVar17, uVar21, uVar15, *(int*)(lVar8 + 216));
            }
            goto LAB_100342014;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "client/clientbuild.cpp",
                            1259, "Invalid shape while loading loc");
        }
        uVar19 = (ulong)uVar15;
    LAB_10034200b:
        local_50.~shared_ptr();
    LAB_100342014:
        local_70.~shared_ptr();
        local_60->~shared_ptr();
        return uVar19;
    }

    // 0x100342a30, 784 bytes, placed by class name
    // ClientBuild::LoadLocationsRegion(PacketJ<Array<unsigned char, eastl::allocator> >&, int, int, int, int, int, int, int, dash3d::world&, eastl::fixed_vector<movement::CollisionMap, 4ul, true, eastl::allocator>&, int)
    ClientBuild* ClientBuild::LoadLocationsRegion(PacketJ* param_1, int param_2, int param_3, int param_4, int param_5,
                                                  int param_6, int param_7, int param_8, world* param_9,
                                                  fixed_vector* param_10, int param_11) {
        char cVar1;
        uint uVar2;
        uint uVar3;
        int iVar4;
        shared_ptr* psVar5;
        long lVar6;
        CollisionMap* pCVar7;
        uint uVar9;
        uint uVar10;
        shared_ptr local_90;
        undefined8 local_80;
        uint local_74;
        int local_70;
        int local_6c;
        int local_64;
        int local_5c;
        ulong local_50;
        int local_48;
        int local_44;
        int local_40;
        int local_38;
        undefined1 local_31;

        eastl::vector<LocInfo, BucketAllocatorEASTL>::vector();
        local_70 = param_6 + 8;
        local_6c = param_7 + 8;
        local_40 = -1;
        local_64 = param_5;
        do {
            local_5c = param_1->gSmartsExtend();
            if (local_5c != 0) {
                local_40 = local_40 + local_5c;
                local_50 = 0;
                do {
                    local_80 = param_1->gSmarts();
                    if ((int)local_80 != 0) {
                        uVar2 = param_1->g1();
                        uVar9 = ((int)local_50 + (int)local_80) - 1;
                        local_50 = (ulong)uVar9;
                        if ((int)uVar9 >> 12 == param_5) {
                            uVar3 = uVar9 >> 6 & 63;
                            if ((((param_6 <= (int)uVar3) && ((int)uVar3 < local_70)) &&
                                 (param_7 <= (int)(uVar9 & 63))) &&
                                ((int)(uVar9 & 63) < local_6c)) {
                                psVar5 = (shared_ptr*)configdecoder::LocType::List(local_40);
                                new (&local_90) shared_ptr<dash3d::Decor>(psVar5);
                                lVar6 = shared_ptr<configdecoder::LocType>::operator->(
                                    (shared_ptr<configdecoder::LocType>*)&local_90);
                                iVar4 = *(int*)(lVar6 + 184);
                                lVar6 = shared_ptr<configdecoder::LocType>::operator->(
                                    (shared_ptr<configdecoder::LocType>*)&local_90);
                                uVar3 = uVar2 & 3;
                                uVar9 = uVar9 >> 6 & 7;
                                uVar10 = (uint)local_50 & 7;
                                local_38 =
                                    util::RegionRotate::DX(uVar9, uVar10, param_8, iVar4, *(int*)(lVar6 + 188), uVar3);
                                local_38 = local_38 + param_3;
                                lVar6 = shared_ptr<configdecoder::LocType>::operator->(
                                    (shared_ptr<configdecoder::LocType>*)&local_90);
                                iVar4 = *(int*)(lVar6 + 184);
                                lVar6 = shared_ptr<configdecoder::LocType>::operator->(
                                    (shared_ptr<configdecoder::LocType>*)&local_90);
                                local_48 =
                                    util::RegionRotate::DZ(uVar9, uVar10, param_8, iVar4, *(int*)(lVar6 + 188), uVar3);
                                param_5 = local_64;
                                local_48 = local_48 + param_4;
                                if (((local_38 < 103) && (0 < local_38)) && ((0 < local_48 && (local_48 < 103)))) {
                                    cVar1 = Read3DArray<signed char>((Array*)&m_mapl, 1, local_38, local_48);
                                    iVar4 = ((char)(cVar1 << 6) >> 7) + param_2;
                                    if (iVar4 < 0) {
                                        pCVar7 = (CollisionMap*)0;
                                    } else {
                                        pCVar7 = (CollisionMap*)
                                            eastl::vector<movement::CollisionMap,
                                                          eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true,
                                                                                        eastl::allocator>>::
                                            operator[](
                                                (vector<movement::CollisionMap,
                                                        eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)param_10,
                                                (long)iVar4);
                                    }
                                    uVar2 = (uVar2 & 255) >> 2;
                                    cVar1 = AddLoc(param_2, local_38, local_48, local_40, uVar3 + param_8 & 3, uVar2,
                                                   param_9, pCVar7, param_11);
                                    if (cVar1 != '\0') {
                                        local_44 = param_2;
                                        if (((Read3DArray<signed char>((Array*)&m_mapl, 1, local_38, local_48) & 2) !=
                                             0) &&
                                            (0 < local_44)) {
                                            local_44 = local_44 + -1;
                                        }
                                        local_74 = uVar3 + param_8;
                                        local_31 = constants::LocShape::ToLayer(uVar2);
                                        eastl::vector<LocInfo, BucketAllocatorEASTL>::emplace_back<
                                            int&, int&, int&, int, LocLayer, shared_ptr<configdecoder::LocType>&>(
                                            (vector<LocInfo, BucketAllocatorEASTL>*)(ClientBuild*)this, &local_44,
                                            &local_38, &local_48, (int*)&local_74, &local_31, &local_90);
                                    }
                                }
                                local_90.~shared_ptr();
                            }
                        }
                    }
                } while ((int)local_80 != 0);
            }
        } while (local_5c != 0);
        return (ClientBuild*)this;
    }

    // 0x1003431a0, 6688 bytes, placed by class name
    // ClientBuild::FinishBuild(dash3d::world&, eastl::fixed_vector<movement::CollisionMap, 4ul, true, eastl::allocator>&, bool)
    void ClientBuild::FinishBuild(world* param_1, fixed_vector* param_2, bool param_3) {
        ulong uVar1;
        uint uVar2;
        char cVar3;
        char cVar4;
        char cVar5;
        char cVar6;
        char cVar7;
        ushort uVar8;
        ushort uVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        int iVar15;
        int iVar16;
        uint uVar17;
        int iVar18;
        int iVar19;
        int iVar20;
        int iVar21;
        int iVar22;
        int iVar23;
        int iVar24;
        int iVar25;
        uint uVar26;
        uint uVar27;
        uint uVar28;
        ulong uVar29;
        CollisionMap* this;
        int* piVar30;
        undefined4* puVar31;
        long* plVar32;
        int* piVar33;
        int iVar34;
        long lVar35;
        long lVar36;
        uint uVar37;
        int iVar38;
        int iVar39;
        uint uVar40;
        int iVar41;
        int iVar42;
        long lVar43;
        int iVar44;
        uint uVar45;
        int iVar46;
        int iVar47;
        bool bVar48;
        double dVar49;
        double dVar50;
        undefined4* local_e8;
        int local_bc;
        int local_a0;
        int local_9c;
        uint local_88;
        uint local_80;
        uint local_78;
        int local_64;

        iVar41 = 0;
        do {
            iVar44 = 0;
            do {
                iVar38 = 0;
                do {
                    uVar29 = Read3DArray<signed char>((Array*)&m_mapl, iVar41, iVar44, iVar38);
                    if ((uVar29 & 1) != 0) {
                        cVar3 = Read3DArray<signed char>((Array*)&m_mapl, 1, iVar44, iVar38);
                        iVar10 = ((char)(cVar3 << 6) >> 7) + iVar41;
                        if (-1 < iVar10) {
                            this = (CollisionMap*)eastl::vector<
                                movement::CollisionMap,
                                eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<movement::CollisionMap,
                                        eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    param_2,
                                (long)iVar10);
                            BlockGround(iVar44, iVar38);
                        }
                    }
                    iVar38 = iVar38 + 1;
                } while (iVar38 != 104);
                iVar44 = iVar44 + 1;
            } while (iVar44 != 104);
            iVar41 = iVar41 + 1;
        } while (iVar41 != 4);
        if (m_hueOff == 1000) {
            iVar41 = (&jag::math::g_Rand)->Rand(17);
            m_hueOff = iVar41 + -8;
            iVar41 = (&jag::math::g_Rand)->Rand(33);
            m_ligOff = iVar41 + -16;
        }
        iVar41 = (&jag::math::g_Rand)->Rand(5);
        m_hueOff = m_hueOff + iVar41 + -2;
        iVar41 = -8;
        if (m_hueOff < -8) {
        LAB_1003432bb:
            m_hueOff = iVar41;
        } else {
            iVar41 = 8;
            if (8 < m_hueOff)
                goto LAB_1003432bb;
        }
        iVar41 = (&jag::math::g_Rand)->Rand(5);
        m_ligOff = m_ligOff + iVar41 + -2;
        iVar41 = -16;
        if (-17 < m_ligOff) {
            iVar41 = 16;
            if (m_ligOff < 17)
                goto LAB_1003432fd;
        }
        m_ligOff = iVar41;
    LAB_1003432fd:
        dVar49 = (double)sqrt<int>(5100);
        iVar41 = 0;
        do {
            piVar30 = &DAT_10392ad98;
            lVar36 = 1;
            do {
                lVar35 = lVar36 + 1;
                lVar43 = 0;
                piVar33 = piVar30;
                do {
                    iVar10 = 82;
                    iVar44 = (int)lVar43;
                    iVar38 = (int)lVar36;
                    if (param_3) {
                        iVar10 = Read3DArray<int>((Array*)&m_groundh, iVar41, iVar44 + 2, iVar38);
                        iVar11 = Read3DArray<int>((Array*)&m_groundh, iVar41, iVar44, iVar38);
                        iVar10 = iVar10 - iVar11;
                        iVar11 = Read3DArray<int>((Array*)&m_groundh, iVar41, iVar44 + 1, (int)lVar35);
                        iVar12 = Read3DArray<int>((Array*)&m_groundh, iVar41, iVar44 + 1, iVar38 + -1);
                        iVar11 = iVar11 - iVar12;
                        dVar50 = (double)sqrt<int>(iVar10 * iVar10 + iVar11 * iVar11 + 65536);
                        iVar12 = (int)dVar50;
                        iVar10 = (((iVar11 * 256) / iVar12 + (iVar10 * 256) / iVar12) * -50 +
                                  (int)(65536 / (long)iVar12) * -10) /
                                     ((int)dVar49 * 768 >> 8) +
                                 96;
                    }
                    if ((*PTR_m_applyBlobShadows_100ee6a78 != '\0') || (dash3d::g_usingRSeven == '\0')) {
                        iVar11 = iVar44 + 1;
                        cVar3 = Read3DArray<signed char>((Array*)&m_shadow, iVar41, iVar44, iVar38);
                        cVar4 = Read3DArray<signed char>((Array*)&m_shadow, iVar41, iVar44 + 2, iVar38);
                        cVar5 = Read3DArray<signed char>((Array*)&m_shadow, iVar41, iVar11, iVar38 + -1);
                        cVar6 = Read3DArray<signed char>((Array*)&m_shadow, iVar41, iVar11, (int)lVar35);
                        cVar7 = Read3DArray<signed char>((Array*)&m_shadow, iVar41, iVar11, iVar38);
                        iVar10 =
                            ((iVar10 + (char)-(cVar6 >> 3)) - (int)(char)((cVar5 >> 2) + (cVar4 >> 3) + (cVar3 >> 2))) +
                            (int)(char)-(cVar7 >> 1);
                    }
                    *piVar33 = iVar10;
                    lVar43 = lVar43 + 1;
                    piVar33 = piVar33 + 105;
                } while (lVar43 != 102);
                piVar30 = piVar30 + 1;
                lVar36 = lVar35;
            } while (lVar35 != 103);
            uVar29 = 0;
            do {
                puVar31 = (undefined4*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_huetot, uVar29);
                *puVar31 = 0;
                puVar31 = (undefined4*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_sattot, uVar29);
                *puVar31 = 0;
                puVar31 = (undefined4*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_ligtot, uVar29);
                *puVar31 = 0;
                puVar31 = (undefined4*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_comtot, uVar29);
                *puVar31 = 0;
                puVar31 = (undefined4*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_tot, uVar29);
                *puVar31 = 0;
                uVar29 = uVar29 + 1;
            } while (uVar29 != 104);
            lVar36 = -5;
            local_e8 = &DAT_10392a550;
            do {
                iVar44 = (int)lVar36;
                uVar29 = 0;
                do {
                    if (lVar36 + 5U < 104) {
                        uVar8 = Read3DArray<short>((Array*)&m_floort1, iVar41, (int)(lVar36 + 5U), (int)uVar29);
                        if ((uVar8 & 2047) != 0) {
                            lVar35 = configdecoder::FluType::List((uVar8 & 2047) - 1);
                            iVar38 = *(int*)(lVar35 + 4);
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_huetot, uVar29);
                            *piVar30 = *piVar30 + iVar38;
                            iVar38 = *(int*)(lVar35 + 8);
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_sattot, uVar29);
                            *piVar30 = *piVar30 + iVar38;
                            iVar38 = *(int*)(lVar35 + 12);
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_ligtot, uVar29);
                            *piVar30 = *piVar30 + iVar38;
                            iVar38 = *(int*)(lVar35 + 16);
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_comtot, uVar29);
                            *piVar30 = *piVar30 + iVar38;
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_tot, uVar29);
                            *piVar30 = *piVar30 + 1;
                        }
                    }
                    if (iVar44 - 5U < 104) {
                        uVar8 = Read3DArray<short>((Array*)&m_floort1, iVar41, iVar44 - 5U, (int)uVar29);
                        if ((uVar8 & 2047) != 0) {
                            lVar35 = configdecoder::FluType::List((uVar8 & 2047) - 1);
                            iVar38 = *(int*)(lVar35 + 4);
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_huetot, uVar29);
                            *piVar30 = *piVar30 - iVar38;
                            iVar38 = *(int*)(lVar35 + 8);
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_sattot, uVar29);
                            *piVar30 = *piVar30 - iVar38;
                            iVar38 = *(int*)(lVar35 + 12);
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_ligtot, uVar29);
                            *piVar30 = *piVar30 - iVar38;
                            iVar38 = *(int*)(lVar35 + 16);
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_comtot, uVar29);
                            *piVar30 = *piVar30 - iVar38;
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_tot, uVar29);
                            *piVar30 = *piVar30 + -1;
                        }
                    }
                    uVar29 = uVar29 + 1;
                } while (uVar29 != 104);
                if (iVar44 - 1U < 102) {
                    uVar29 = 0;
                    iVar12 = 0;
                    iVar46 = 0;
                    iVar38 = 0;
                    iVar10 = 0;
                    iVar11 = 0;
                    do {
                        if (uVar29 < 104) {
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_huetot, uVar29);
                            iVar12 = iVar12 + *piVar30;
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_sattot, uVar29);
                            iVar46 = iVar46 + *piVar30;
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_ligtot, uVar29);
                            iVar38 = iVar38 + *piVar30;
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_comtot, uVar29);
                            iVar10 = iVar10 + *piVar30;
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_tot, uVar29);
                            iVar11 = iVar11 + *piVar30;
                        }
                        uVar1 = uVar29 - 10;
                        if ((uint)uVar1 < 104) {
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_huetot, uVar1);
                            iVar12 = iVar12 - *piVar30;
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_sattot, uVar1);
                            iVar46 = iVar46 - *piVar30;
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_ligtot, uVar1);
                            iVar38 = iVar38 - *piVar30;
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_comtot, uVar1);
                            iVar10 = iVar10 - *piVar30;
                            piVar30 = (int*)std::array<int, 104ul>::operator[]((array<int, 104ul>*)&m_tot, uVar1);
                            iVar11 = iVar11 - *piVar30;
                        }
                        iVar22 = (int)uVar29;
                        if (iVar22 - 6U < 102) {
                            iVar42 = iVar22 + -5;
                            if (iVar41 < minusedlevel) {
                                minusedlevel = iVar41;
                            }
                            uVar8 = Read3DArray<short>((Array*)&m_floort1, iVar41, iVar44, iVar42);
                            uVar9 = Read3DArray<short>((Array*)&m_floort2, iVar41, iVar44, iVar42);
                            if (((uVar8 | uVar9) & 2047) != 0) {
                                iVar13 = Read3DArray<int>((Array*)&m_groundh, iVar41, iVar44, iVar42);
                                iVar14 = Read3DArray<int>((Array*)&m_groundh, iVar41, iVar44 + 1, iVar42);
                                iVar15 = Read3DArray<int>((Array*)&m_groundh, iVar41, iVar44 + 1, iVar22 + -4);
                                iVar16 = Read3DArray<int>((Array*)&m_groundh, iVar41, iVar44, iVar22 + -4);
                                iVar22 = local_e8[uVar29 - 106];
                                iVar25 = local_e8[uVar29 - 105];
                                iVar23 = local_e8[uVar29 - 1];
                                iVar24 = local_e8[uVar29];
                                if ((uVar8 & 2047) == 0) {
                                    iVar39 = -1;
                                    local_64 = -1;
                                } else {
                                    iVar39 = (iVar12 << 8) / iVar10;
                                    local_64 = GetTable(iVar39, iVar46 / iVar11, iVar38 / iVar11);
                                    iVar47 = iVar38 / iVar11 + m_ligOff;
                                    if (254 < iVar47) {
                                        iVar47 = 255;
                                    }
                                    if (iVar47 < 0) {
                                        iVar47 = 0;
                                    }
                                    iVar39 = GetTable(iVar39 + m_hueOff & 255, iVar46 / iVar11, iVar47);
                                }
                                if (iVar41 != 0) {
                                    bVar48 = true;
                                    if ((uVar8 & 2047) == 0) {
                                        cVar3 = Read3DArray<signed char>((Array*)&m_floors, iVar41, iVar44, iVar42);
                                        bVar48 = cVar3 == '\0';
                                    }
                                    if ((uVar9 & 2047) != 0) {
                                        lVar35 = configdecoder::FloType::List((uVar9 & 2047) - 1);
                                        if (*(char*)(lVar35 + 8) == '\0') {
                                            bVar48 = false;
                                        }
                                    }
                                    if ((((bVar48) && (iVar13 == iVar14)) && (iVar13 == iVar15)) &&
                                        (iVar13 == iVar16)) {
                                        uVar17 = Read3DArray<int>((Array*)&m_mapo, iVar41, iVar44, iVar42);
                                        Write3DArray<int>((Array*)&m_mapo, iVar41, iVar44, iVar42, uVar17 | 2340);
                                    }
                                }
                                if (iVar39 == -1) {
                                    iVar39 = -16777216;
                                } else {
                                    uVar17 = GetUCol(iVar39, 96);
                                    piVar30 = (int*)std::array<int, 65536ul>::operator[]((ulong)uVar17);
                                    iVar39 = *piVar30;
                                }
                                if ((uVar9 & 2047) == 0) {
                                    iVar22 = GetUCol(local_64, iVar22);
                                    iVar23 = GetUCol(local_64, iVar23);
                                    iVar24 = GetUCol(local_64, iVar24);
                                    iVar25 = GetUCol(local_64, iVar25);
                                    param_1->SetGround(iVar41, iVar44, iVar42, 0, 0, -1, iVar13, iVar14, iVar15, iVar16,
                                                       iVar22, iVar23, iVar24, iVar25, 0, 0, 0, 0, iVar39, -16777216);
                                } else {
                                    cVar3 = Read3DArray<signed char>((Array*)&m_floors, iVar41, iVar44, iVar42);
                                    cVar4 = Read3DArray<signed char>((Array*)&m_floorr, iVar41, iVar44, iVar42);
                                    piVar30 = (int*)configdecoder::FloType::List((uVar9 & 2047) - 1);
                                    iVar47 = piVar30[1];
                                    if (iVar47 < 0) {
                                        if (*piVar30 == 16711935) {
                                            local_bc = -2;
                                            iVar47 = -1;
                                            iVar18 = -2;
                                        } else {
                                            iVar18 = piVar30[4];
                                            iVar34 = piVar30[5];
                                            iVar19 = piVar30[6];
                                            local_bc = GetTable(iVar18, iVar34, iVar19);
                                            iVar19 = iVar19 + m_ligOff;
                                            if (254 < iVar19) {
                                                iVar19 = 255;
                                            }
                                            if (iVar19 < 0) {
                                                iVar19 = 0;
                                            }
                                            iVar18 = GetTable(iVar18 + m_hueOff & 255, iVar34, iVar19);
                                        }
                                    } else {
                                        plVar32 = (long*)shared_ptr<dash3d::TextureProvider>::operator->(
                                            (shared_ptr<dash3d::TextureProvider>*)&dash3d::Pix3D::m_textureProvider);
                                        iVar18 = (**(code**)(*plVar32 + 24))(plVar32, iVar47);
                                        local_bc = -1;
                                    }
                                    iVar34 = -16777216;
                                    if (iVar18 != -2) {
                                        iVar18 = GetOCol(iVar18, 96);
                                        piVar33 = (int*)std::array<int, 65536ul>::operator[]((long)iVar18);
                                        iVar34 = *piVar33;
                                    }
                                    if (piVar30[3] != -1) {
                                        iVar18 = m_ligOff + piVar30[9];
                                        if (254 < iVar18) {
                                            iVar18 = 255;
                                        }
                                        if (iVar18 < 0) {
                                            iVar18 = 0;
                                        }
                                        iVar18 = GetTable(m_hueOff + piVar30[7] & 255, piVar30[8], iVar18);
                                        iVar18 = GetOCol(iVar18, 96);
                                        piVar30 = (int*)std::array<int, 65536ul>::operator[]((long)iVar18);
                                        iVar34 = *piVar30;
                                    }
                                    iVar18 = GetUCol(local_64, iVar22);
                                    iVar19 = GetUCol(local_64, iVar23);
                                    iVar20 = GetUCol(local_64, iVar24);
                                    iVar21 = GetUCol(local_64, iVar25);
                                    iVar22 = GetOCol(local_bc, iVar22);
                                    iVar23 = GetOCol(local_bc, iVar23);
                                    iVar24 = GetOCol(local_bc, iVar24);
                                    iVar25 = GetOCol(local_bc, iVar25);
                                    param_1->SetGround(iVar41, iVar44, iVar42, cVar3 + 1, (int)cVar4, iVar47, iVar13,
                                                       iVar14, iVar15, iVar16, iVar18, iVar19, iVar20, iVar21, iVar22,
                                                       iVar23, iVar24, iVar25, iVar39, iVar34);
                                }
                            }
                        }
                        uVar29 = uVar29 + 1;
                    } while (uVar29 != 114);
                }
                lVar36 = lVar36 + 1;
                local_e8 = local_e8 + 105;
            } while (lVar36 != 109);
            iVar44 = 1;
            do {
                iVar38 = 1;
                do {
                    iVar10 = VisLevel(iVar41, iVar38, iVar44);
                    param_1->SetLayer(iVar41, iVar38, iVar44, iVar10);
                    iVar38 = iVar38 + 1;
                } while (iVar38 != 103);
                iVar44 = iVar44 + 1;
            } while (iVar44 != 103);
            iVar41 = iVar41 + 1;
        } while (iVar41 != 4);
        param_1->ShareLight(-50, -10, -50);
        iVar41 = 0;
        do {
            iVar44 = 0;
            do {
                uVar29 = Read3DArray<signed char>((Array*)&m_mapl, 1, iVar41, iVar44);
                if ((uVar29 & 2) != 0) {
                    param_1->PushDown(iVar41, iVar44);
                }
                iVar44 = iVar44 + 1;
            } while (iVar44 != 104);
            iVar41 = iVar41 + 1;
        } while (iVar41 != 104);
        local_80 = 2;
        local_88 = 4;
        iVar41 = 0;
        local_64 = 1;
        local_78 = 1;
        do {
            uVar40 = local_88 * 8;
            uVar17 = local_80 * 8;
            uVar2 = local_78 * 8;
            if (iVar41 == 0) {
                uVar40 = local_88;
                uVar17 = local_80;
                uVar2 = local_78;
            }
            iVar44 = 0;
            do {
                iVar10 = 0;
                local_9c = 1;
                iVar38 = -1;
                do {
                    iVar11 = -1;
                    local_a0 = 1;
                    uVar37 = 0;
                    do {
                        uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar44, uVar37, iVar10);
                        if ((uVar2 & uVar26) != 0) {
                            iVar12 = local_9c;
                            do {
                                iVar46 = iVar12 + -1;
                                if (iVar46 < 1) {
                                    iVar46 = 0;
                                    break;
                                }
                                uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar44, uVar37, iVar12 + -2);
                                iVar12 = iVar46;
                            } while ((uVar2 & uVar26) != 0);
                            iVar12 = iVar38;
                            do {
                                if (iVar12 == 103) {
                                    iVar12 = 104;
                                    break;
                                }
                                uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar44, uVar37, iVar12 + 2);
                                iVar12 = iVar12 + 1;
                            } while ((uVar2 & uVar26) != 0);
                            iVar22 = iVar44;
                            if (iVar44 != 0) {
                                iVar42 = iVar12;
                                if (iVar12 < iVar46) {
                                    iVar42 = iVar46;
                                }
                                do {
                                    iVar23 = iVar22 + -1;
                                    iVar25 = iVar23;
                                    bVar48 = iVar12 < iVar46;
                                    if (iVar46 <= iVar12) {
                                        uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar23, uVar37, iVar46);
                                        iVar24 = iVar46;
                                        while (iVar25 = iVar22, (uVar2 & uVar26) != 0) {
                                            bVar48 = iVar12 <= iVar24;
                                            iVar25 = iVar23;
                                            if (iVar42 == iVar24)
                                                break;
                                            iVar24 = iVar24 + 1;
                                            uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar23, uVar37, iVar24);
                                        }
                                    }
                                    iVar22 = iVar25;
                                } while ((bVar48) && (0 < iVar22));
                            }
                            iVar42 = iVar12;
                            if (iVar12 < iVar46) {
                                iVar42 = iVar46;
                            }
                            iVar25 = iVar44;
                            do {
                                if (iVar41 <= iVar25)
                                    break;
                                iVar23 = iVar25 + 1;
                                bVar48 = iVar12 < iVar46;
                                if (iVar12 < iVar46) {
                                    iVar25 = iVar23;
                                } else {
                                    uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar23, uVar37, iVar46);
                                    iVar24 = iVar46;
                                    if ((uVar2 & uVar26) == 0) {
                                    } else {
                                        do {
                                            bVar48 = iVar12 <= iVar24;
                                            if (iVar42 == iVar24) {
                                                iVar25 = iVar23;
                                                goto LAB_100344294;
                                            }
                                            uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar23, uVar37, iVar24 + 1);
                                            iVar24 = iVar24 + 1;
                                        } while ((uVar2 & uVar26) != 0);
                                    }
                                }
                            LAB_100344294:
                            } while (bVar48);
                            if (7 < ((iVar12 - iVar46) + 1) * ((iVar25 - iVar22) + 1)) {
                                iVar23 = Read3DArray<int>((Array*)&m_groundh, iVar25, uVar37, iVar46);
                                iVar24 = Read3DArray<int>((Array*)&m_groundh, iVar22, uVar37, iVar46);
                                param_1->SetOcclude(iVar41, 1, uVar37 << 7, uVar37 << 7, iVar46 << 7,
                                                    iVar12 * 128 + 128, iVar23 + -240, iVar24);
                                if (iVar22 <= iVar25) {
                                    do {
                                        iVar23 = iVar46;
                                        if (iVar46 <= iVar12) {
                                            do {
                                                uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar22, uVar37, iVar23);
                                                Write3DArray<int>((Array*)&m_mapo, iVar22, uVar37, iVar23,
                                                                  uVar26 & ~uVar2);
                                                iVar23 = iVar23 + 1;
                                            } while (iVar42 + 1 != iVar23);
                                        }
                                        bVar48 = iVar22 != iVar25;
                                        iVar22 = iVar22 + 1;
                                    } while (bVar48);
                                }
                            }
                        }
                        uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar44, uVar37, iVar10);
                        if ((uVar17 & uVar26) != 0) {
                            iVar12 = local_a0;
                            do {
                                iVar46 = iVar12 + -1;
                                if (iVar46 < 1) {
                                    iVar46 = 0;
                                    break;
                                }
                                uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar44, iVar12 + -2, iVar10);
                                iVar12 = iVar46;
                            } while ((uVar17 & uVar26) != 0);
                            iVar12 = iVar11;
                            do {
                                if (iVar12 == 103) {
                                    iVar12 = 104;
                                    break;
                                }
                                uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar44, iVar12 + 2, iVar10);
                                iVar12 = iVar12 + 1;
                            } while ((uVar17 & uVar26) != 0);
                            iVar22 = iVar44;
                            if (iVar44 != 0) {
                                iVar42 = iVar12;
                                if (iVar12 < iVar46) {
                                    iVar42 = iVar46;
                                }
                                do {
                                    iVar23 = iVar22 + -1;
                                    iVar25 = iVar23;
                                    bVar48 = iVar12 < iVar46;
                                    if (iVar46 <= iVar12) {
                                        uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar23, iVar46, iVar10);
                                        iVar24 = iVar46;
                                        while (iVar25 = iVar22, (uVar17 & uVar26) != 0) {
                                            bVar48 = iVar12 <= iVar24;
                                            iVar25 = iVar23;
                                            if (iVar42 == iVar24)
                                                break;
                                            iVar24 = iVar24 + 1;
                                            uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar23, iVar24, iVar10);
                                        }
                                    }
                                    iVar22 = iVar25;
                                } while ((bVar48) && (0 < iVar22));
                            }
                            iVar42 = iVar12;
                            if (iVar12 < iVar46) {
                                iVar42 = iVar46;
                            }
                            iVar25 = iVar44;
                            do {
                                if (iVar41 <= iVar25)
                                    break;
                                iVar23 = iVar25 + 1;
                                bVar48 = iVar12 < iVar46;
                                if (iVar12 < iVar46) {
                                    iVar25 = iVar23;
                                } else {
                                    uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar23, iVar46, iVar10);
                                    if ((uVar17 & uVar26) == 0) {
                                    } else {
                                        iVar24 = iVar46;
                                        do {
                                            bVar48 = iVar12 <= iVar24;
                                            if (iVar42 == iVar24) {
                                                iVar25 = iVar23;
                                                goto LAB_100344587;
                                            }
                                            iVar24 = iVar24 + 1;
                                            uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar23, iVar24, iVar10);
                                        } while ((uVar17 & uVar26) != 0);
                                    }
                                }
                            LAB_100344587:
                            } while (bVar48);
                            if (7 < ((iVar12 - iVar46) + 1) * ((iVar25 - iVar22) + 1)) {
                                iVar23 = Read3DArray<int>((Array*)&m_groundh, iVar25, iVar46, iVar10);
                                iVar24 = Read3DArray<int>((Array*)&m_groundh, iVar22, iVar46, iVar10);
                                param_1->SetOcclude(iVar41, 2, iVar46 << 7, iVar12 * 128 + 128, iVar10 << 7,
                                                    iVar10 << 7, iVar23 + -240, iVar24);
                                if (iVar22 <= iVar25) {
                                    do {
                                        iVar23 = iVar46;
                                        if (iVar46 <= iVar12) {
                                            do {
                                                uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar22, iVar23, iVar10);
                                                Write3DArray<int>((Array*)&m_mapo, iVar22, iVar23, iVar10,
                                                                  uVar26 & ~uVar17);
                                                iVar23 = iVar23 + 1;
                                            } while (iVar42 + 1 != iVar23);
                                        }
                                        bVar48 = iVar22 != iVar25;
                                        iVar22 = iVar22 + 1;
                                    } while (bVar48);
                                }
                            }
                        }
                        uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar44, uVar37, iVar10);
                        if ((uVar40 & uVar26) != 0) {
                            iVar12 = local_9c;
                            do {
                                iVar46 = iVar12 + -1;
                                if (iVar46 < 1) {
                                    iVar46 = 0;
                                    break;
                                }
                                uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar44, uVar37, iVar12 + -2);
                                iVar12 = iVar46;
                            } while ((uVar40 & uVar26) != 0);
                            iVar12 = iVar38;
                            do {
                                if (iVar12 == 103) {
                                    iVar12 = 104;
                                    break;
                                }
                                uVar26 = Read3DArray<int>((Array*)&m_mapo, iVar44, uVar37, iVar12 + 2);
                                iVar12 = iVar12 + 1;
                            } while ((uVar40 & uVar26) != 0);
                            uVar26 = uVar37;
                            if (uVar37 != 0) {
                                iVar22 = iVar12;
                                if (iVar12 < iVar46) {
                                    iVar22 = iVar46;
                                }
                                do {
                                    uVar45 = uVar26 - 1;
                                    uVar27 = uVar45;
                                    bVar48 = iVar12 < iVar46;
                                    if (iVar46 <= iVar12) {
                                        uVar28 = Read3DArray<int>((Array*)&m_mapo, iVar44, uVar45, iVar46);
                                        iVar42 = iVar46;
                                        while (uVar27 = uVar26, (uVar40 & uVar28) != 0) {
                                            bVar48 = iVar12 <= iVar42;
                                            uVar27 = uVar45;
                                            if (iVar22 == iVar42)
                                                break;
                                            iVar42 = iVar42 + 1;
                                            uVar28 = Read3DArray<int>((Array*)&m_mapo, iVar44, uVar45, iVar42);
                                        }
                                    }
                                    uVar26 = uVar27;
                                } while ((bVar48) && (0 < (int)uVar26));
                            }
                            uVar27 = 104;
                            if (uVar37 < 104) {
                                iVar22 = iVar12;
                                if (iVar12 < iVar46) {
                                    iVar22 = iVar46;
                                }
                                uVar27 = uVar37;
                                do {
                                    uVar45 = uVar27 + 1;
                                    bVar48 = iVar12 < iVar46;
                                    if (iVar46 <= iVar12) {
                                        uVar28 = Read3DArray<int>((Array*)&m_mapo, iVar44, uVar45, iVar46);
                                        iVar42 = iVar46;
                                        while ((uVar40 & uVar28) != 0) {
                                            bVar48 = iVar12 <= iVar42;
                                            if (iVar22 == iVar42)
                                                goto joined_r0x00010034494c;
                                            iVar42 = iVar42 + 1;
                                            uVar28 = Read3DArray<int>((Array*)&m_mapo, iVar44, uVar45, iVar42);
                                        }
                                        uVar45 = uVar27;
                                    }
                                joined_r0x00010034494c:
                                    uVar27 = uVar45;
                                } while ((bVar48) && ((int)uVar27 < 104));
                            }
                            if (3 < (int)(((iVar12 - iVar46) + 1) * ((uVar27 - uVar26) + 1))) {
                                iVar22 = Read3DArray<int>((Array*)&m_groundh, iVar44, uVar26, iVar46);
                                param_1->SetOcclude(iVar41, 4, uVar26 << 7, uVar27 * 128 + 128, iVar46 << 7,
                                                    iVar12 * 128 + 128, iVar22, iVar22);
                                if ((int)uVar26 <= (int)uVar27) {
                                    iVar22 = iVar12;
                                    if (iVar12 < iVar46) {
                                        iVar22 = iVar46;
                                    }
                                    do {
                                        iVar42 = iVar46;
                                        if (iVar46 <= iVar12) {
                                            do {
                                                uVar45 = Read3DArray<int>((Array*)&m_mapo, iVar44, uVar26, iVar42);
                                                Write3DArray<int>((Array*)&m_mapo, iVar44, uVar26, iVar42,
                                                                  uVar45 & ~uVar40);
                                                iVar42 = iVar42 + 1;
                                            } while (iVar22 + 1 != iVar42);
                                        }
                                        bVar48 = uVar26 != uVar27;
                                        uVar26 = uVar26 + 1;
                                    } while (bVar48);
                                }
                            }
                        }
                        uVar37 = uVar37 + 1;
                        local_a0 = local_a0 + 1;
                        iVar11 = iVar11 + 1;
                    } while (uVar37 != 105);
                    iVar10 = iVar10 + 1;
                    local_9c = local_9c + 1;
                    iVar38 = iVar38 + 1;
                } while (iVar10 != 105);
                iVar44 = iVar44 + 1;
            } while (iVar44 != local_64);
            iVar41 = iVar41 + 1;
            local_64 = local_64 + 1;
            local_78 = uVar2;
            local_80 = uVar17;
            local_88 = uVar40;
            if (iVar41 == 4) {
                if (dash3d::g_usingRSeven != '\0') {
                    param_1->Render(dash3d::world::m_worldRenderer, 0, 1, 0, 0, 0, 3, 1);
                    dash3d::RSevenModelLitRenderer::OnFinishRebuild();
                }
                return;
            }
        } while (true);
    }

    // 0x100344c40, 160 bytes, placed by class name
    // ClientBuild::GetTable(int, int, int)
    int ClientBuild::GetTable(int param_1, int param_2, int param_3) {
        uint uVar1;
        uint uVar2;

        if (179 < param_3) {
            param_2 = param_2 / 2;
        }
        if (192 < param_3) {
            param_2 = param_2 / 2;
        }
        if (217 < param_3) {
            param_2 = param_2 / 2;
        }
        if (243 < param_3) {
            param_2 = param_2 / 2;
        }
        uVar1 = param_1 + 3;
        if (-1 < param_1) {
            uVar1 = param_1;
        }
        uVar2 = param_2 + 31;
        if (-1 < param_2) {
            uVar2 = param_2;
        }
        return param_3 / 2 + (uVar1 & 4294967292) * 256 + (uVar2 & 4294967264) * 4;
    }

    // 0x100344d10, 80 bytes, placed by class name
    // ClientBuild::GetUCol(int, int)
    int ClientBuild::GetUCol(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        int iVar3;

        if (param_1 == -1) {
            return 12345678;
        }
        iVar1 = (param_1 & 127U) * param_2;
        iVar2 = iVar1 + 127;
        if (-1 < iVar1) {
            iVar2 = iVar1;
        }
        iVar3 = 126;
        if (iVar2 >> 7 < 126) {
            iVar3 = iVar2 >> 7;
        }
        iVar2 = 2;
        if (255 < iVar1) {
            iVar2 = iVar3;
        }
        return (param_1 & 65408U) + iVar2;
    }

    // 0x100344d60, 112 bytes, placed by class name
    // ClientBuild::GetOCol(int, int)
    int ClientBuild::GetOCol(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        int iVar3;

        if (param_1 == -2) {
            return 12345678;
        }
        if (param_1 == -1) {
            iVar1 = 126;
            if (param_2 < 126) {
                iVar1 = param_2;
            }
            iVar2 = 2;
            if (2 < iVar1) {
                iVar2 = iVar1;
            }
            return iVar2;
        }
        iVar2 = (param_1 & 127U) * param_2;
        iVar1 = iVar2 + 127;
        if (-1 < iVar2) {
            iVar1 = iVar2;
        }
        iVar3 = 126;
        if (iVar1 >> 7 < 126) {
            iVar3 = iVar1 >> 7;
        }
        iVar1 = 2;
        if (255 < iVar2) {
            iVar1 = iVar3;
        }
        return (param_1 & 65408U) + iVar1;
    }

    // 0x100344dd0, 64 bytes, placed by class name
    // ClientBuild::VisLevel(int, int, int)
    int ClientBuild::VisLevel(int param_1, int param_2, int param_3) {
        char cVar1;
        byte bVar2;
        int iVar3;

        cVar1 = IsVisBelow(param_1, param_2, param_3);
        iVar3 = 0;
        if (cVar1 == '\0') {
            bVar2 = IsLinkBelow(param_1, param_2, param_3);
            iVar3 = param_1 - (uint)bVar2;
        }
        return iVar3;
    }

    // 0x100344e10, 32 bytes, placed by class name
    // ClientBuild::IsVisBelow(int, int, int)
    byte ClientBuild::IsVisBelow(int param_1, int param_2, int param_3) {
        byte bVar1;

        bVar1 = Read3DArray<signed char>((Array*)&m_mapl, param_1, param_2, param_3);
        return (bVar1 & 8) >> 3;
    }

    // 0x100344e30, 48 bytes, placed by class name
    // ClientBuild::IsLinkBelow(int, int, int)
    undefined8 ClientBuild::IsLinkBelow(int param_1, int param_2, int param_3) {
        ulong uVar1;

        if (param_1 < 1) {
            return 0;
        }
        uVar1 = Read3DArray<signed char>((Array*)&m_mapl, 1, param_2, param_3);
        return CONCAT71((int7)((uVar1 & 18446744073709551362) >> 8), (byte)(uVar1 & 18446744073709551362) >> 1);
    }

    // 0x100344e60, 32 bytes, placed by class name
    // ClientBuild::GetVisBelowLevel(int, int, int)
    int ClientBuild::GetVisBelowLevel(int param_1, int param_2, int param_3) {
        char cVar1;
        int iVar2;

        cVar1 = IsVisBelow(param_1, param_2, param_3);
        iVar2 = 0;
        if (cVar1 == '\0') {
            iVar2 = param_1;
        }
        return iVar2;
    }

    // 0x100344e80, 32 bytes, placed by class name
    // ClientBuild::GetLinkBelowLevel(int, int, int)
    int ClientBuild::GetLinkBelowLevel(int param_1, int param_2, int param_3) {
        byte bVar1;

        bVar1 = IsLinkBelow(param_1, param_2, param_3);
        return param_1 - (uint)bVar1;
    }

    // 0x100344ea0, 32 bytes, placed by class name
    // ClientBuild::GetGroundHeight(int, int, int)
    void ClientBuild::GetGroundHeight(int param_1, int param_2, int param_3) {
        Read3DArray<int>((Array*)&m_groundh, param_1, param_2, param_3);
    }

    // 0x100344ec0, 1056 bytes, placed by class name
    // ClientBuild::GetGroundHeightAtFinePos(int, int, int)
    int ClientBuild::GetGroundHeightAtFinePos(int param_1, int param_2, int param_3) {
        float fVar2;
        float fVar1;
        float* pfVar4;
        vector* pvVar5;
        int iVar6;
        uint uVar7;
        ColourHSL* this;
        int iVar8;
        uint uVar9;
        float fVar10;
        Vector3T<int> local_88[16];
        Vector3T<int> local_78[16];
        Vector3T<int> local_68[12];
        int local_5c;
        undefined1 local_58[16];
        float local_48;
        float local_44;
        ulong local_40;
        float local_38;
        float local_34;

        iVar6 = -1;
        if ((((param_2 < 13312) && (-1 < param_2)) && (-1 < param_3)) && (param_3 < 13312)) {
            iVar6 = param_2 >> 7;
            iVar8 = param_3 >> 7;
            local_44 = (float)param_2;
            local_38 = (float)GetGroundHeight(param_1, iVar6, iVar8);
            local_48 = (float)GetGroundHeight(param_1, iVar6, iVar8 + 1);
            local_34 = (float)GetGroundHeight(param_1, iVar6 + 1, iVar8 + 1);
            local_5c = GetGroundHeight(param_1, iVar6 + 1, iVar8);
            fVar10 = local_44;
            uVar9 = (uint)local_44 & 4294967168;
            local_40 = (ulong)(uVar9 + 128);
            uVar7 = param_3 & 4294967168;
            iVar6 = uVar7 + 128;
            jag::math::Vector3T<int>::Vector3T(local_88);
            jag::math::Vector3T<int>::Vector3T(local_78);
            jag::math::Vector3T<int>::Vector3T(local_68);
            iVar8 = (int)local_40;
            local_58._12_4_ = param_3;
            if (dash3d::world::InsideTriangle((int)fVar10, param_3, iVar6, uVar7, uVar7, iVar8, iVar8, uVar9) == '\0') {
                new (local_58) jag::math::ColourHSL((float)(int)uVar7, (float)iVar6, (float)iVar6);
                local_88->SetXYZ(local_58);
                new (local_58) jag::math::ColourHSL((float)(int)uVar9, (float)iVar8, (float)(int)uVar9);
                local_78->SetXYZ(local_58);
                fVar10 = local_38;
                fVar1 = local_34;
                fVar2 = local_48;
            } else {
                new (local_58) jag::math::ColourHSL((float)iVar6, (float)(int)uVar7, (float)(int)uVar7);
                local_88->SetXYZ(local_58);
                new (local_58) jag::math::ColourHSL((float)iVar8, (float)iVar8, (float)(int)uVar9);
                local_78->SetXYZ(local_58);
                fVar10 = local_34;
                fVar1 = (float)local_5c;
                fVar2 = local_38;
            }
            this = (ColourHSL*)local_58;
            jag::math::ColourHSL::ColourHSL(this, (float)(int)fVar10, (float)(int)fVar1, (float)(int)fVar2);
            local_68->SetXYZ(this);
            pfVar4 = (float*)local_88->y();
            local_34 = *pfVar4;
            pfVar4 = (float*)local_88->second();
            local_34 = local_34 - *pfVar4;
            pvVar5 = local_78->SSOBeginPtr(this);
            local_38 = *(float*)pvVar5;
            pfVar4 = (float*)local_78->second();
            local_38 = (local_38 - *pfVar4) * local_34;
            pfVar4 = (float*)local_78->second();
            local_40._0_4_ = *pfVar4;
            pfVar4 = (float*)local_78->y();
            local_40._0_4_ = (float)local_40 - *pfVar4;
            pvVar5 = local_88->SSOBeginPtr(this);
            local_34 = *(float*)pvVar5;
            pfVar4 = (float*)local_88->second();
            local_34 = (local_34 - *pfVar4) * (float)local_40 + local_38;
            pfVar4 = (float*)local_88->y();
            local_40._0_4_ = *pfVar4;
            pfVar4 = (float*)local_88->second();
            local_40._0_4_ = (float)local_40 - *pfVar4;
            local_38 = (float)(int)local_44;
            pfVar4 = (float*)local_78->second();
            local_48 = (local_38 - *pfVar4) * (float)local_40;
            pfVar4 = (float*)local_78->second();
            local_40._0_4_ = *pfVar4;
            pfVar4 = (float*)local_78->y();
            local_40._0_4_ = (float)local_40 - *pfVar4;
            local_44 = (float)(int)local_58._12_4_;
            pfVar4 = (float*)local_88->second();
            local_58._12_4_ = 1.0 / local_34;
            local_40 =
                CONCAT44(local_40._4_4_, ((local_44 - *pfVar4) * (float)local_40 + local_48) * (float)local_58._12_4_);
            pfVar4 = (float*)local_88->second();
            local_34 = *pfVar4;
            pvVar5 = local_88->SSOBeginPtr(this);
            local_34 = local_34 - *(float*)pvVar5;
            pfVar4 = (float*)local_78->second();
            local_38 = (local_38 - *pfVar4) * local_34;
            pvVar5 = local_78->SSOBeginPtr(this);
            local_34 = *(float*)pvVar5;
            pfVar4 = (float*)local_78->second();
            local_34 = local_34 - *pfVar4;
            pfVar4 = (float*)local_88->second();
            fVar10 = ((local_44 - *pfVar4) * local_34 + local_38) * (float)local_58._12_4_;
            new (local_58) jag::math::ColourHSL((float)local_40, fVar10, 1.0 - ((float)local_40 + fVar10));
            fVar10 = jag::math::Vector3Dot<float>((Vector3T*)local_58, (Vector3T*)local_68);
            iVar6 = (int)fVar10;
        }
        return iVar6;
    }

    // 0x1003452e0, 16 bytes, placed by class name
    // ClientBuild::GetHeightmapWidth()
    undefined8 ClientBuild::GetHeightmapWidth() {
        return 105;
    }

    // 0x1003452f0, 16 bytes, placed by class name
    // ClientBuild::GetHeightmapHeight()
    undefined8 ClientBuild::GetHeightmapHeight() {
        return 105;
    }

    // 0x100345300, 96 bytes, placed by class name
    // ClientBuild::ResetMapL()
    void ClientBuild::ResetMapL() {
        long lVar1;
        undefined1* puVar2;
        ulong uVar3;
        ulong uVar4;

        lVar1 = m_mapl.end();
        if (lVar1 != 0) {
            uVar4 = 0;
            do {
                puVar2 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)&m_mapl, uVar4);
                *puVar2 = 0;
                uVar4 = uVar4 + 1;
                uVar3 = m_mapl.end();
            } while (uVar4 < uVar3);
        }
    }

    // 0x100345360, 192 bytes, placed by class name
    // ClientBuild::InterpolatedNoise(int, int, int)
    void ClientBuild::InterpolatedNoise(int param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        uint uVar6;

        iVar5 = param_1 / param_3;
        uVar6 = param_1 & param_3 - 1U;
        iVar1 = param_2 / param_3;
        iVar2 = SmoothNoise(iVar5, iVar1);
        iVar3 = SmoothNoise(iVar5 + 1, iVar1);
        iVar4 = SmoothNoise(iVar5, iVar1 + 1);
        iVar1 = SmoothNoise(iVar5 + 1, iVar1 + 1);
        iVar2 = Interpolate(iVar2, iVar3, uVar6, param_3);
        iVar1 = Interpolate(iVar4, iVar1, uVar6, param_3);
        Interpolate(iVar2, iVar1, param_3 - 1U & param_2, param_3);
    }

    // 0x100345420, 288 bytes, placed by class name
    // ClientBuild::SmoothNoise(int, int)
    int ClientBuild::SmoothNoise(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;

        iVar8 = param_1 + -1;
        iVar1 = param_2 + -1;
        iVar2 = Noise(iVar8, iVar1);
        iVar7 = param_1 + 1;
        iVar3 = Noise(iVar7, iVar1);
        iVar6 = param_2 + 1;
        iVar4 = Noise(iVar8, iVar6);
        iVar4 = iVar4 + iVar3 + iVar2;
        iVar3 = Noise(iVar7, iVar6);
        iVar5 = iVar4 + iVar3;
        iVar2 = Noise(iVar8, param_2);
        iVar7 = Noise(iVar7, param_2);
        iVar8 = Noise(param_1, iVar1);
        iVar8 = iVar8 + iVar7 + iVar2;
        iVar7 = Noise(param_1, iVar6);
        iVar1 = iVar8 + iVar7;
        iVar2 = Noise(param_1, param_2);
        iVar6 = iVar3 + iVar4 + 15;
        if (-1 < iVar5) {
            iVar6 = iVar5;
        }
        iVar3 = iVar7 + iVar8 + 7;
        if (-1 < iVar1) {
            iVar3 = iVar1;
        }
        if (iVar2 < 0) {
            iVar2 = iVar2 + 3;
        }
        return (iVar2 >> 2) + (iVar3 >> 3) + (iVar6 >> 4);
    }

    // 0x100345540, 80 bytes, placed by class name
    // ClientBuild::Interpolate(int, int, int, int)
    int ClientBuild::Interpolate(int param_1, int param_2, int param_3, int param_4) {
        int* piVar1;
        int iVar2;

        piVar1 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&dash3d::Pix3D::m_cosTable,
                                                           (long)((param_3 << 10) / param_4));
        iVar2 = 65536 - *piVar1 >> 1;
        return (iVar2 * param_2 >> 16) + ((65536 - iVar2) * param_1 >> 16);
    }

    // 0x1003455b0, 48 bytes, placed by class name
    // ClientBuild::Noise(int, int)
    uint ClientBuild::Noise(int param_1, int param_2) {
        uint uVar1;

        uVar1 = param_2 * 57 + param_1;
        uVar1 = uVar1 * 8192 ^ uVar1;
        return (uVar1 * uVar1 * 15731 + 789221) * uVar1 + 34135309 >> 19 & 255;
    }

    // 0x1003455e0, 128 bytes, placed by class name
    // ClientBuild::ChangeLocAvailable(int, int)
    undefined4 ClientBuild::ChangeLocAvailable(int param_1, int param_2) {
        undefined4 uVar1;
        shared_ptr* psVar2;
        LocType* this;
        int iVar3;
        int iVar4;
        shared_ptr<dash3d::Decor> local_28[16];

        psVar2 = (shared_ptr*)configdecoder::LocType::List(param_1);
        shared_ptr<dash3d::Decor>::shared_ptr(local_28, psVar2);
        this = (LocType*)shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)local_28);
        iVar3 = 4;
        if (3 < param_2 - 5U) {
            iVar3 = param_2;
        }
        iVar4 = 10;
        if (param_2 != 11) {
            iVar4 = iVar3;
        }
        uVar1 = CheckModel(iVar4);
        local_28->~shared_ptr();
        return uVar1;
    }

    // 0x100345660, 7728 bytes, placed by class name
    // ClientBuild::ChangeLocUnchecked(int, int, int, int, int, int, int, int, dash3d::world&, movement::CollisionMap&, int)
    ClientBuild* ClientBuild::ChangeLocUnchecked(int param_1, int param_2, int param_3, int param_4, int param_5,
                                                 int param_6, int param_7, int param_8, world* param_9,
                                                 CollisionMap* param_10, int param_11) {
        uint uVar1;
        char cVar2;
        int iVar4;
        uint uVar5;
        shared_ptr* psVar6;
        long lVar7;
        shared_ptr<configdecoder::LocType>* psVar8;
        int* piVar9;
        uint* puVar10;
        int iVar11;
        _func_decltype_nullptr* p_Var12;
        int iVar13;
        uint uVar14;
        uint uVar15;
        ulong uVar16;
        int iVar17;
        int iVar18;
        shared_ptr<dash3d::Decor> local_100[20];
        int local_ec;
        int local_e8;
        uint local_e4;
        ulong local_d8;
        ulong local_d0;
        longlong local_c8;
        ulong local_c0;
        uint local_b4;
        ulong local_b0;
        uint local_a4;
        _func_decltype_nullptr* local_a0;
        shared_ptr local_98;
        int local_84;
        shared_ptr local_80;
        int local_70;
        shared_ptr local_68;
        int local_54;
        shared_ptr local_50;
        int local_3c;
        uint local_38;
        uint local_34;

        iVar17 = param_8;
        local_84 = param_5;
        local_3c = param_2;
        local_38 = param_4;
        local_34 = param_3;
        psVar6 = (shared_ptr*)configdecoder::LocType::List(param_5);
        new (&local_80) shared_ptr<dash3d::Decor>(psVar6);
        if (iVar17 < 0) {
            lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
            iVar17 = *(int*)(lVar7 + 212);
        }
        local_54 = iVar17;
        if ((param_6 & 4294967293U) == 1) {
            lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
            local_d0 = (ulong) * (uint*)(lVar7 + 188);
            lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
            puVar10 = (uint*)(lVar7 + 184);
        } else {
            lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
            local_d0 = (ulong) * (uint*)(lVar7 + 184);
            lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
            puVar10 = (uint*)(lVar7 + 188);
        }
        uVar15 = local_38;
        local_c0 = (ulong)local_34;
        iVar17 = (int)local_d0;
        iVar13 = iVar17 >> 1;
        iVar18 = iVar17 + 1 >> 1;
        if (104 < (int)(local_34 + iVar17)) {
            iVar18 = 1;
        }
        uVar14 = *puVar10;
        local_d8 = (ulong)uVar14;
        if (104 < (int)(local_34 + iVar17)) {
            iVar13 = 0;
        }
        iVar13 = iVar13 + local_34;
        iVar11 = (int)uVar14 >> 1;
        iVar17 = (int)(uVar14 + 1) >> 1;
        if (104 < (int)(uVar14 + local_38)) {
            iVar17 = 1;
            iVar11 = 0;
        }
        iVar11 = iVar11 + local_38;
        iVar4 = Read3DArray<int>((Array*)&m_groundh, local_3c, iVar13, iVar11);
        local_b0 = CONCAT44(local_b0._4_4_, iVar4);
        iVar18 = iVar18 + (int)local_c0;
        iVar11 = Read3DArray<int>((Array*)&m_groundh, local_3c, iVar18, iVar11);
        local_c0._0_4_ = iVar11;
        iVar13 = Read3DArray<int>((Array*)&m_groundh, local_3c, iVar13, iVar17 + uVar15);
        local_e8 = Read3DArray<int>((Array*)&m_groundh, local_3c, iVar18, iVar17 + uVar15);
        uVar14 = local_34;
        local_70 = iVar13;
        uVar5 = constants::LocShape::ToLayer(param_7);
        uVar1 = local_34;
        uVar15 = local_38;
        lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
        local_e4 = uVar5 & 255;
        p_Var12 = (_func_decltype_nullptr*)(ulong)uVar15;
        local_c8 = dash3d::MousePickingHelper::GetPackedTypeCodeLoc(uVar1, p_Var12, param_1, *(int*)(lVar7 + 200) == 0,
                                                                    local_84);
        uVar15 = param_6 * 64 + param_7;
        lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
        iVar17 = (int)local_c0 + (int)local_b0 + local_70 + local_e8 >> 2;
        local_70 = (int)local_d0 * 64 + uVar14 * 128;
        if (*(int*)(lVar7 + 480) == 1) {
            uVar15 = uVar15 + 256;
        }
        local_b0 = (ulong)uVar15;
        if (param_7 == 22) {
            new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var12);
            if (local_54 == -1) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                cVar2 = ((lVar7 + 488))->empty();
                if (cVar2 == '\0')
                    goto LAB_1003459ba;
                iVar13 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_50.GetModelLit(iVar13, 22, param_6, local_3c, local_70, iVar17);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_1003459ba:
                local_a0 = (_func_decltype_nullptr*)CONCAT44(local_a0._4_4_, 22);
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((jag*)&local_50, &local_84, (int*)&local_a0, &param_6, &local_3c, (int*)&local_34,
                                  (int*)&local_38, &local_54, (bool*)(lVar7 + 560), (_func_decltype_nullptr**)&local_98,
                                  &param_11);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            }
            cVar2 = param_9->SetGroundDecor(param_1, local_34, local_38, iVar17, &local_68, local_c8, (int)local_b0);
            lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
            if (*(int*)(lVar7 + 192) == 1) {
                param_10->BlockGroundDecor(local_34, local_38);
            }
            goto LAB_100347164;
        }
        if ((param_7 & 4294967294U) == 10) {
            new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            if (local_54 == -1) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                cVar2 = ((lVar7 + 488))->empty();
                if (cVar2 == '\0')
                    goto LAB_100345b21;
                iVar13 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_50.GetModelLit(iVar13, 10, param_6, local_3c, local_70, iVar17);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_100345b21:
                local_a0 = (_func_decltype_nullptr*)CONCAT44(local_a0._4_4_, 10);
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((jag*)&local_50, &local_84, (int*)&local_a0, &param_6, &local_3c, (int*)&local_34,
                                  (int*)&local_38, &local_54, (bool*)(lVar7 + 560), (_func_decltype_nullptr**)&local_98,
                                  &param_11);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            }
            if (operator!=(&local_68, (_func_decltype_nullptr*)0)) {
                cVar2 = param_9->AddScenery(param_1, local_34, local_38, iVar17, (int)local_d0, (int)local_d8,
                                            &local_68, (uint)(param_7 == 11) << 8, local_c8, (int)local_b0);
            } else {
                cVar2 = '\0';
            }
            lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
            uVar14 = local_34;
            uVar15 = local_38;
            if (*(int*)(lVar7 + 192) != 0) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                param_10->AddLoc(uVar14, uVar15, (int)local_d0, (int)local_d8, *(bool*)(lVar7 + 196));
            }
            goto LAB_100347164;
        }
        if (11 < param_7) {
            new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            if (local_54 == -1) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                cVar2 = ((lVar7 + 488))->empty();
                if (cVar2 == '\0')
                    goto LAB_100345cff;
                iVar13 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_50.GetModelLit(iVar13, param_7, param_6, local_3c, local_70, iVar17);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_100345cff:
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int&, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((jag*)&local_50, &local_84, &param_7, &param_6, &local_3c, (int*)&local_34,
                                  (int*)&local_38, &local_54, (bool*)(lVar7 + 560), (_func_decltype_nullptr**)&local_98,
                                  &param_11);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            }
            cVar2 =
                param_9->AddScenery(param_1, local_34, local_38, iVar17, 1, 1, &local_68, 0, local_c8, (int)local_b0);
            lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
            uVar14 = local_34;
            uVar15 = local_38;
            if (*(int*)(lVar7 + 192) != 0) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                param_10->AddLoc(uVar14, uVar15, (int)local_d0, (int)local_d8, *(bool*)(lVar7 + 196));
            }
            goto LAB_100347164;
        }
        switch (param_7) {
        case 0:
            new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            if (local_54 == -1) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                cVar2 = ((lVar7 + 488))->empty();
                if (cVar2 == '\0')
                    goto LAB_100346272;
                iVar13 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_50.GetModelLit(iVar13, 0, param_6, local_3c, local_70, iVar17);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_100346272:
                local_a0 = (_func_decltype_nullptr*)((ulong)local_a0 & 18446744069414584320);
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((jag*)&local_50, &local_84, (int*)&local_a0, &param_6, &local_3c, (int*)&local_34,
                                  (int*)&local_38, &local_54, (bool*)(lVar7 + 560), (_func_decltype_nullptr**)&local_98,
                                  &param_11);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            }
            uVar14 = local_34;
            uVar15 = local_38;
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&WSHAPE0, (long)param_6);
            cVar2 = param_9->SetWall(param_1, uVar14, uVar15, iVar17, &local_68, &local_50, *piVar9, 0, local_c8,
                                     (int)local_b0);
            local_50.~shared_ptr();
            lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
            uVar14 = local_34;
            uVar15 = local_38;
            iVar13 = param_7;
            iVar17 = param_6;
            if (*(int*)(lVar7 + 192) != 0) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                param_10->AddWall(uVar14, uVar15, iVar13, iVar17, *(bool*)(lVar7 + 196));
            }
            goto LAB_100347164;
        case 1:
            new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            if (local_54 == -1) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                cVar2 = ((lVar7 + 488))->empty();
                if (cVar2 == '\0')
                    goto LAB_1003463bb;
                iVar13 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_50.GetModelLit(iVar13, 1, param_6, local_3c, local_70, iVar17);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_1003463bb:
                local_a0 = (_func_decltype_nullptr*)CONCAT44(local_a0._4_4_, 1);
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((jag*)&local_50, &local_84, (int*)&local_a0, &param_6, &local_3c, (int*)&local_34,
                                  (int*)&local_38, &local_54, (bool*)(lVar7 + 560), (_func_decltype_nullptr**)&local_98,
                                  &param_11);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            }
            uVar14 = local_34;
            uVar15 = local_38;
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&WSHAPE1, (long)param_6);
            cVar2 = param_9->SetWall(param_1, uVar14, uVar15, iVar17, &local_68, &local_50, *piVar9, 0, local_c8,
                                     (int)local_b0);
            local_50.~shared_ptr();
            lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
            uVar14 = local_34;
            uVar15 = local_38;
            iVar13 = param_7;
            iVar17 = param_6;
            if (*(int*)(lVar7 + 192) != 0) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                param_10->AddWall(uVar14, uVar15, iVar13, iVar17, *(bool*)(lVar7 + 196));
            }
            goto LAB_100347164;
        case 2:
            local_a4 = param_6 + 1U & 3;
            new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            local_c0._0_4_ = iVar17;
            if (local_54 == -1) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                cVar2 = ((lVar7 + 488))->empty();
                if (cVar2 == '\0')
                    goto LAB_100346962;
                iVar13 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_98.GetModelLit(iVar13, 2, param_6 + 4, local_3c, local_70, iVar17);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_98);
                local_98.~shared_ptr();
                iVar13 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_98.GetModelLit(iVar13, 2, local_a4, local_3c, local_70, iVar17);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_50, &local_98);
                local_98.~shared_ptr();
            } else {
            LAB_100346962:
                local_b4 = 2;
                local_ec = param_6 + 4;
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_a0 = (_func_decltype_nullptr*)0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((jag*)&local_98, &local_84, (int*)&local_b4, &local_ec, &local_3c, (int*)&local_34,
                                  (int*)&local_38, &local_54, (bool*)(lVar7 + 560), &local_a0, &param_11);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_98);
                local_98.~shared_ptr();
                local_b4 = 2;
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_a0 = (_func_decltype_nullptr*)0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((jag*)&local_98, &local_84, (int*)&local_b4, (int*)&local_a4, &local_3c,
                                  (int*)&local_34, (int*)&local_38, &local_54, (bool*)(lVar7 + 560), &local_a0,
                                  &param_11);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_50, &local_98);
                local_98.~shared_ptr();
            }
            uVar14 = local_34;
            uVar15 = local_38;
            piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&WSHAPE0, (long)param_6);
            iVar17 = *piVar9;
            piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&WSHAPE0, (long)(int)local_a4);
            cVar2 = param_9->SetWall(param_1, uVar14, uVar15, (int)local_c0, &local_68, &local_50, iVar17, *piVar9,
                                     local_c8, (int)local_b0);
            lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
            uVar14 = local_34;
            uVar15 = local_38;
            iVar13 = param_7;
            iVar17 = param_6;
            if (*(int*)(lVar7 + 192) != 0) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                param_10->AddWall(uVar14, uVar15, iVar13, iVar17, *(bool*)(lVar7 + 196));
            }
            break;
        case 3:
            new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            if (local_54 == -1) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                cVar2 = ((lVar7 + 488))->empty();
                if (cVar2 == '\0')
                    goto LAB_100346504;
                iVar13 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_50.GetModelLit(iVar13, 3, param_6, local_3c, local_70, iVar17);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_100346504:
                local_a0 = (_func_decltype_nullptr*)CONCAT44(local_a0._4_4_, 3);
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((jag*)&local_50, &local_84, (int*)&local_a0, &param_6, &local_3c, (int*)&local_34,
                                  (int*)&local_38, &local_54, (bool*)(lVar7 + 560), (_func_decltype_nullptr**)&local_98,
                                  &param_11);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            }
            uVar14 = local_34;
            uVar15 = local_38;
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&WSHAPE1, (long)param_6);
            cVar2 = param_9->SetWall(param_1, uVar14, uVar15, iVar17, &local_68, &local_50, *piVar9, 0, local_c8,
                                     (int)local_b0);
            local_50.~shared_ptr();
            lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
            uVar14 = local_34;
            uVar15 = local_38;
            iVar13 = param_7;
            iVar17 = param_6;
            if (*(int*)(lVar7 + 192) != 0) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                param_10->AddWall(uVar14, uVar15, iVar13, iVar17, *(bool*)(lVar7 + 196));
            }
            goto LAB_100347164;
        case 4:
            new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            if (local_54 == -1) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                cVar2 = ((lVar7 + 488))->empty();
                if (cVar2 == '\0')
                    goto LAB_10034664d;
                iVar13 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_50.GetModelLit(iVar13, 4, param_6, local_3c, local_70, iVar17);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_10034664d:
                local_a0 = (_func_decltype_nullptr*)CONCAT44(local_a0._4_4_, 4);
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((jag*)&local_50, &local_84, (int*)&local_a0, &param_6, &local_3c, (int*)&local_34,
                                  (int*)&local_38, &local_54, (bool*)(lVar7 + 560), (_func_decltype_nullptr**)&local_98,
                                  &param_11);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            }
            uVar14 = local_34;
            uVar15 = local_38;
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&WSHAPE0, (long)param_6);
            cVar2 = param_9->SetDecor(param_1, uVar14, uVar15, iVar17, &local_68, &local_50, *piVar9, 0, 0, 0, local_c8,
                                      (int)local_b0);
            break;
        case 5:
            lVar7 = param_9->WallType(param_1, local_34, local_38);
            if (lVar7 == 0) {
                iVar13 = 16;
            } else {
                iVar13 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar7);
                psVar8 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar13);
                lVar7 = shared_ptr<configdecoder::LocType>::operator->(psVar8);
                iVar13 = *(int*)(lVar7 + 216);
            }
            new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            if (local_54 == -1) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                cVar2 = ((lVar7 + 488))->empty();
                if (cVar2 == '\0')
                    goto LAB_100346bb7;
                iVar18 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_50.GetModelLit(iVar18, 4, param_6, local_3c, local_70, iVar17);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_100346bb7:
                local_a0 = (_func_decltype_nullptr*)CONCAT44(local_a0._4_4_, 4);
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((jag*)&local_50, &local_84, (int*)&local_a0, &param_6, &local_3c, (int*)&local_34,
                                  (int*)&local_38, &local_54, (bool*)(lVar7 + 560), (_func_decltype_nullptr**)&local_98,
                                  &param_11);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            }
            uVar15 = local_34;
            local_d0 = CONCAT44(local_d0._4_4_, local_38);
            local_c0._0_4_ = iVar17;
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            uVar16 = (ulong)param_6;
            piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&WSHAPE0, uVar16);
            iVar17 = *piVar9;
            piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&DECORXOF, uVar16);
            iVar18 = *piVar9;
            piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&DECORZOF, uVar16);
            cVar2 = param_9->SetDecor(param_1, uVar15, (int)local_d0, (int)local_c0, &local_68, &local_50, iVar17, 0,
                                      iVar18 * iVar13, iVar13 * *piVar9, local_c8, (int)local_b0);
            break;
        case 6:
            lVar7 = param_9->WallType(param_1, local_34, local_38);
            if (lVar7 == 0) {
                iVar13 = 8;
                local_c0._0_4_ = iVar17;
            } else {
                local_c0._0_4_ = iVar17;
                iVar17 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar7);
                psVar8 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar17);
                lVar7 = shared_ptr<configdecoder::LocType>::operator->(psVar8);
                iVar13 = *(int*)(lVar7 + 216) / 2;
            }
            new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            if (local_54 == -1) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                cVar2 = ((lVar7 + 488))->empty();
                if (cVar2 == '\0')
                    goto LAB_100346d77;
                iVar17 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_50.GetModelLit(iVar17, 4, param_6 + 4, local_3c, local_70, (int)local_c0);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_100346d77:
                local_a0 = (_func_decltype_nullptr*)CONCAT44(local_a0._4_4_, 4);
                local_a4 = param_6 + 4;
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((jag*)&local_50, &local_84, (int*)&local_a0, (int*)&local_a4, &local_3c,
                                  (int*)&local_34, (int*)&local_38, &local_54, (bool*)(lVar7 + 560),
                                  (_func_decltype_nullptr**)&local_98, &param_11);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            }
            uVar14 = local_34;
            uVar15 = local_38;
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            iVar18 = param_6;
            uVar16 = (ulong)param_6;
            piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&DECORXOF2, uVar16);
            iVar17 = *piVar9;
            piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&DECORZOF2, uVar16);
            cVar2 = param_9->SetDecor(param_1, uVar14, uVar15, (int)local_c0, &local_68, &local_50, 256, iVar18,
                                      iVar17 * iVar13, iVar13 * *piVar9, local_c8, (int)local_b0);
            break;
        case 7:
            new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            uVar15 = param_6 + 2;
            uVar14 = uVar15 & 3;
            if (local_54 == -1) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                cVar2 = ((lVar7 + 488))->empty();
                if (cVar2 == '\0')
                    goto LAB_100346750;
                iVar13 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_50.GetModelLit(iVar13, 4, uVar14 + 4, local_3c, local_70, iVar17);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_100346750:
                local_a0 = (_func_decltype_nullptr*)CONCAT44(local_a0._4_4_, 4);
                local_a4 = uVar14 + 4;
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((jag*)&local_50, &local_84, (int*)&local_a0, (int*)&local_a4, &local_3c,
                                  (int*)&local_34, (int*)&local_38, &local_54, (bool*)(lVar7 + 560),
                                  (_func_decltype_nullptr**)&local_98, &param_11);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            }
            uVar1 = local_34;
            uVar14 = local_38;
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            cVar2 = param_9->SetDecor(param_1, uVar1, uVar14, iVar17, &local_68, &local_50, 256, uVar15 & 3, 0, 0,
                                      local_c8, (int)local_b0);
            break;
        case 8:
            lVar7 = param_9->WallType(param_1, local_34, local_38);
            if (lVar7 == 0) {
                iVar13 = 8;
            } else {
                iVar13 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar7);
                psVar8 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar13);
                lVar7 = shared_ptr<configdecoder::LocType>::operator->(psVar8);
                iVar13 = *(int*)(lVar7 + 216) / 2;
            }
            new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            local_c0._0_4_ = iVar17;
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            uVar15 = param_6 + 2U & 3;
            if (local_54 == -1) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                cVar2 = ((lVar7 + 488))->empty();
                if (cVar2 == '\0')
                    goto LAB_100346fa8;
                iVar17 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_98.GetModelLit(iVar17, 4, param_6 + 4, local_3c, local_70, (int)local_c0);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_98);
                local_98.~shared_ptr();
                iVar17 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_98.GetModelLit(iVar17, 4, uVar15 | 4, local_3c, local_70, (int)local_c0);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_50, &local_98);
                local_98.~shared_ptr();
            } else {
            LAB_100346fa8:
                local_a4 = 4;
                local_b4 = param_6 + 4;
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_a0 = (_func_decltype_nullptr*)0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((jag*)&local_98, &local_84, (int*)&local_a4, (int*)&local_b4, &local_3c,
                                  (int*)&local_34, (int*)&local_38, &local_54, (bool*)(lVar7 + 560), &local_a0,
                                  &param_11);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_98);
                local_98.~shared_ptr();
                local_a4 = 4;
                local_b4 = uVar15 | 4;
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_a0 = (_func_decltype_nullptr*)0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((jag*)&local_98, &local_84, (int*)&local_a4, (int*)&local_b4, &local_3c,
                                  (int*)&local_34, (int*)&local_38, &local_54, (bool*)(lVar7 + 560), &local_a0,
                                  &param_11);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_50, &local_98);
                local_98.~shared_ptr();
            }
            uVar14 = local_34;
            uVar15 = local_38;
            iVar18 = param_6;
            uVar16 = (ulong)param_6;
            piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&DECORXOF2, uVar16);
            iVar17 = *piVar9;
            piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&DECORZOF2, uVar16);
            cVar2 = param_9->SetDecor(param_1, uVar14, uVar15, (int)local_c0, &local_68, &local_50, 256, iVar18,
                                      iVar17 * iVar13, iVar13 * *piVar9, local_c8, (int)local_b0);
            break;
        case 9:
            new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            if (local_54 == -1) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                cVar2 = ((lVar7 + 488))->empty();
                if (cVar2 == '\0')
                    goto LAB_100346852;
                iVar13 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_50.GetModelLit(iVar13, param_7, param_6, local_3c, local_70, iVar17);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            } else {
            LAB_100346852:
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                local_98._0_8_ = 0;
                make_shared<ClientLocAnim, int&, int&, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((jag*)&local_50, &local_84, &param_7, &param_6, &local_3c, (int*)&local_34,
                                  (int*)&local_38, &local_54, (bool*)(lVar7 + 560), (_func_decltype_nullptr**)&local_98,
                                  &param_11);
                shared_ptr<dash3d::ModelSource>::operator=((shared_ptr<dash3d::ModelSource>*)&local_68, &local_50);
                local_50.~shared_ptr();
            }
            cVar2 =
                param_9->AddScenery(param_1, local_34, local_38, iVar17, 1, 1, &local_68, 0, local_c8, (int)local_b0);
            lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
            uVar14 = local_34;
            uVar15 = local_38;
            if (*(int*)(lVar7 + 192) != 0) {
                lVar7 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_80);
                param_10->AddLoc(uVar14, uVar15, (int)local_d0, (int)local_d8, *(bool*)(lVar7 + 196));
            }
            goto LAB_100347164;
        default:
            cVar2 = '\0';
            goto LAB_10034716d;
        }
        local_50.~shared_ptr();
    LAB_100347164:
        local_68.~shared_ptr();
    LAB_10034716d:
        uVar14 = local_34;
        uVar15 = local_38;
        iVar17 = param_6;
        if (cVar2 == '\0') {
            new ((ClientBuild*)this) LocInfo();
        } else {
            shared_ptr<dash3d::Decor>::shared_ptr(local_100, &local_80);
            new ((ClientBuild*)this)
                LocInfo((undefined1)param_1, uVar14 & 255, uVar15 & 255, iVar17 & 255, local_e4, local_100);
            local_100->~shared_ptr();
        }
        local_80.~shared_ptr();
        return (ClientBuild*)this;
    }

    // 0x100347730, 928 bytes, placed by class name
    // ClientBuild::PerformHillSkew(HillSkewBuildInput const&)
    void ClientBuild::PerformHillSkew(HillSkewBuildInput* param_1) {
        undefined1* this_00;
        int iVar1;
        uint uVar2;
        vector* pvVar3;
        int* piVar4;
        int iVar5;
        type* ptVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        uint uVar12;
        undefined1 auVar13[12];
        undefined1 local_58[12];
        int local_4c;
        int local_48;
        uint local_44;
        uint local_40;
        int local_3c;
        uint local_38;
        int local_34;

        this_00 = &field_4;
        pvVar3 = this_00->SSOBeginPtr(param_1);
        iVar1 = *(int*)pvVar3;
        piVar4 = (int*)this_00->y();
        local_3c = *piVar4;
        piVar4 = (int*)this_00->second();
        iVar5 = field_20 + iVar1;
        if ((-1 < iVar5) && (iVar11 = field_24 + iVar1, iVar11 < 13312)) {
            local_48 = *piVar4;
            iVar9 = field_28 + local_48;
            if ((-1 < iVar9) && (iVar7 = field_32 + local_48, iVar7 < 13312)) {
                local_34 = field_0;
                iVar5 = iVar5 >> 7;
                iVar9 = iVar9 >> 7;
                local_4c = iVar1;
                iVar1 = GetGroundHeight(local_34, iVar5, iVar9);
                if (iVar1 == local_3c) {
                    iVar11 = iVar11 + 127 >> 7;
                    iVar1 = GetGroundHeight(local_34, iVar11, iVar9);
                    if (iVar1 == local_3c) {
                        iVar9 = iVar7 + 127 >> 7;
                        iVar1 = GetGroundHeight(local_34, iVar5, iVar9);
                        if ((iVar1 == local_3c) &&
                            (iVar1 = GetGroundHeight(local_34, iVar11, iVar9), iVar1 == local_3c)) {
                            return;
                        }
                    }
                }
                if (field_16 == 0) {
                    if (0 < field_40) {
                        local_38 = 0;
                        do {
                            ptVar6 = (type*)(ulong)local_38;
                            auVar13 = std::function<jag::math::Vector3T<int>(int)>::operator()(
                                (function<jag::math::Vector3T<int>(int)>*)&field_48, local_38);
                            local_58 = auVar13;
                            pvVar3 = local_58->SSOBeginPtr(ptVar6);
                            uVar2 = *(int*)pvVar3 + local_4c;
                            piVar4 = (int*)local_58->second();
                            uVar12 = uVar2 & 127;
                            local_44 = *piVar4 + local_48 & 127;
                            iVar11 = (int)uVar2 >> 7;
                            iVar9 = *piVar4 + local_48 >> 7;
                            iVar1 = GetGroundHeight(local_34, iVar11, iVar9);
                            local_40 = iVar11 + 1;
                            iVar5 = GetGroundHeight(local_34, local_40, iVar9);
                            iVar11 = GetGroundHeight(local_34, iVar11, iVar9 + 1);
                            iVar9 = GetGroundHeight(local_34, local_40, iVar9 + 1);
                            iVar7 = 128 - local_44;
                            iVar11 = ((int)(uVar12 * iVar9 + (128 - uVar12) * iVar11) >> 7) * local_44;
                            piVar4 = (int*)local_58->y();
                            std::function<void(int, int)>::operator()(
                                (function<void(int, int)>*)&field_96, local_38,
                                (*piVar4 - local_3c) +
                                    (iVar11 + iVar7 * ((int)(iVar1 * (128 - uVar12) + iVar5 * uVar12) >> 7) >> 7));
                            local_38 = local_38 + 1;
                        } while ((int)local_38 < field_40);
                    }
                } else if (0 < field_40) {
                    uVar12 = 0;
                    do {
                        ptVar6 = (type*)(ulong)uVar12;
                        auVar13 = std::function<jag::math::Vector3T<int>(int)>::operator()(
                            (function<jag::math::Vector3T<int>(int)>*)&field_48, uVar12);
                        local_58 = auVar13;
                        piVar4 = (int*)local_58->y();
                        uVar2 = (*piVar4 * -65536) / field_36;
                        if ((int)uVar2 < field_16) {
                            local_44 = uVar2;
                            pvVar3 = local_58->SSOBeginPtr(ptVar6);
                            uVar2 = *(int*)pvVar3 + local_4c;
                            piVar4 = (int*)local_58->second();
                            iVar1 = local_34;
                            local_38 = uVar2 & 127;
                            local_40 = *piVar4 + local_48 & 127;
                            iVar10 = (int)uVar2 >> 7;
                            iVar8 = *piVar4 + local_48 >> 7;
                            iVar5 = GetGroundHeight(local_34, iVar10, iVar8);
                            iVar11 = 128 - local_38;
                            iVar9 = GetGroundHeight(iVar1, iVar10 + 1, iVar8);
                            iVar1 = local_34;
                            iVar9 = iVar9 * local_38;
                            iVar7 = GetGroundHeight(local_34, iVar10, iVar8 + 1);
                            iVar1 = GetGroundHeight(iVar1, iVar10 + 1, iVar8 + 1);
                            iVar8 = 128 - local_40;
                            iVar1 = ((int)(iVar1 * local_38 + iVar7 * iVar11) >> 7) * local_40;
                            piVar4 = (int*)local_58->y();
                            std::function<void(int, int)>::operator()(
                                (function<void(int, int)>*)&field_96, uVar12,
                                (int)((field_16 - local_44) *
                                      ((iVar1 + iVar8 * (iVar9 + iVar5 * iVar11 >> 7) >> 7) - local_3c)) /
                                        field_16 +
                                    *piVar4);
                        }
                        uVar12 = uVar12 + 1;
                    } while ((int)uVar12 < field_40);
                }
            }
        }
    }

    // 0x10038e730, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.9
    void ___cxx_global_var_init_9() {
        new (&ClientBuild::m_groundh) Array<int, eastl::allocator>(44100);
        ___cxa_atexit(PTR__Array_100ee6800, &ClientBuild::m_groundh, 4294967296);
    }

    // 0x10038e770, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.10
    void ___cxx_global_var_init_10() {
        new (&ClientBuild::m_mapl) Array<signed char, eastl::allocator>(43264);
        ___cxa_atexit(PTR__Array_100ee67d8, &ClientBuild::m_mapl, 4294967296);
    }

    // 0x10038e7b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.11
    void ___cxx_global_var_init_11() {
        new (&ClientBuild::m_skyboxColour) Array<jag::math::Vector4T<float>, eastl::allocator>(44100);
        ___cxa_atexit(PTR__Array_100ee6760, &ClientBuild::m_skyboxColour, 4294967296);
    }

    // 0x10038e7f0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.12
    void ___cxx_global_var_init_12() {
        new (&ClientBuild::m_fogStartDistance) Array<int, eastl::allocator>(44100);
        ___cxa_atexit(PTR__Array_100ee6800, &ClientBuild::m_fogStartDistance, 4294967296);
    }

    // 0x10038e830, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.13
    void ___cxx_global_var_init_13() {
        new (&ClientBuild::m_fogIntensity) Array<int, eastl::allocator>(44100);
        ___cxa_atexit(PTR__Array_100ee6800, &ClientBuild::m_fogIntensity, 4294967296);
    }

    // 0x10038e870, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.14
    void ___cxx_global_var_init_14() {
        new (&ClientBuild::m_floort1) Array<short, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6810, &ClientBuild::m_floort1, 4294967296);
    }

    // 0x10038e8b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.15
    void ___cxx_global_var_init_15() {
        new (&ClientBuild::m_floort2) Array<short, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6810, &ClientBuild::m_floort2, 4294967296);
    }

    // 0x10038e8f0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.16
    void ___cxx_global_var_init_16() {
        new (&ClientBuild::m_floors) Array<signed char, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67d8, &ClientBuild::m_floors, 4294967296);
    }

    // 0x10038e930, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.17
    void ___cxx_global_var_init_17() {
        new (&ClientBuild::m_floorr) Array<signed char, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67d8, &ClientBuild::m_floorr, 4294967296);
    }

    // 0x10038e970, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.18
    void ___cxx_global_var_init_18() {
        new (&ClientBuild::m_shadow) Array<signed char, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67d8, &ClientBuild::m_shadow, 4294967296);
    }

    // 0x10038e9b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.19
    void ___cxx_global_var_init_19() {
        new (&ClientBuild::m_mapo) Array<int, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6800, &ClientBuild::m_mapo, 4294967296);
    }

} // namespace jag::oldscape
