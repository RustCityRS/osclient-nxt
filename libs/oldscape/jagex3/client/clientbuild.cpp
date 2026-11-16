// libs/oldscape/jagex3/client/clientbuild.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "clientbuild.h"

namespace jag::oldscape {
    // 0x100d423c0
    int32_t ClientBuild::WSHAPE0[4] = {1, 2, 4, 8};

    // 0x100d423d0
    int32_t ClientBuild::WSHAPE1[4] = {16, 32, 64, 128};

    // 0x100d423e0
    int32_t ClientBuild::DECORXOF[4] = {1, 0, -1, 0};

    // 0x100d423f0
    int32_t ClientBuild::DECORZOF[4] = {0, -1, 0, 1};

    // 0x100d42400
    int32_t ClientBuild::DECORXOF2[4] = {1, -1, -1, 1};

    // 0x100d42410
    int32_t ClientBuild::DECORZOF2[4] = {-1, -1, 1, 1};

    // 0x100f36f50
    int64_t ClientBuild::m_applyBlobShadows = 1;

    // 0x100f37da8
    int32_t ClientBuild::minusedlevel = 99;

    // 0x100f37dac
    int32_t ClientBuild::m_hueOff = 1000;

    // 0x100f37db0
    int32_t ClientBuild::m_ligOff = 1000;

    // 0x10392ab00, set at startup by ___cxx_global_var_init.9
    Array<int> ClientBuild::m_groundh = Array<int>(44100);

    // 0x10392ab18, set at startup by ___cxx_global_var_init.10
    Array<signed char> ClientBuild::m_mapl = Array<signed char>(43264);

    // 0x10392ab30, set at startup by ___cxx_global_var_init.11
    Array<jag::math::Vector4T<float>> ClientBuild::m_skyboxColour = Array<jag::math::Vector4T<float>>(44100);

    // 0x10392ab48, set at startup by ___cxx_global_var_init.12
    Array<int> ClientBuild::m_fogStartDistance = Array<int>(44100);

    // 0x10392ab60, set at startup by ___cxx_global_var_init.13
    Array<int> ClientBuild::m_fogIntensity = Array<int>(44100);

    // 0x10392ab78, set at startup by ___cxx_global_var_init.14
    Array<short> ClientBuild::m_floort1 = Array<short>();

    // 0x10392ab90, set at startup by ___cxx_global_var_init.15
    Array<short> ClientBuild::m_floort2 = Array<short>();

    // 0x10392aba8, set at startup by ___cxx_global_var_init.16
    Array<signed char> ClientBuild::m_floors = Array<signed char>();

    // 0x10392abc0, set at startup by ___cxx_global_var_init.17
    Array<signed char> ClientBuild::m_floorr = Array<signed char>();

    // 0x10392abd8, set at startup by ___cxx_global_var_init.18
    Array<signed char> ClientBuild::m_shadow = Array<signed char>();

    // 0x10392abf0
    uint8_t ClientBuild::m_lightmap[44100];

    // 0x103935834
    std::array<int, 104ul> ClientBuild::m_huetot;

    // 0x1039359d4
    std::array<int, 104ul> ClientBuild::m_sattot;

    // 0x103935b74
    std::array<int, 104ul> ClientBuild::m_ligtot;

    // 0x103935d14
    std::array<int, 104ul> ClientBuild::m_comtot;

    // 0x103935eb4
    std::array<int, 104ul> ClientBuild::m_tot;

    // 0x103936058, set at startup by ___cxx_global_var_init.19
    Array<int> ClientBuild::m_mapo = Array<int>();

    // 0x10033e9b0
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

    // 0x10033ec00
    void ClientBuild::Quit() {
        m_floort1.clear();
        m_floort2.clear();
        m_floors.clear();
        m_floorr.clear();
        m_mapo.clear();
        m_shadow.clear();
    }

    // 0x10033ecf0
    void ClientBuild::SetToSea(int arg1, int arg2, int arg3, int arg4) {
        int iVar1;
        int arg2_00;
        unsigned int arg3_00;

        if (0 < arg4) {
            iVar1 = arg4 + arg2;
            do {
                arg3_00 = arg1;
                if (0 < arg3) {
                    do {
                        if (((arg3_00 < 104) && (-1 < arg2)) && (arg2 < 104)) {
                            arg2_00 = 0;
                            Write3DArray<short>((Array<short>*)&m_floort2, 0, arg3_00, arg2,
                                                configdecoder::FloType::m_defaultWater);
                            do {
                                Write3DArray<int>((Array<int>*)&m_groundh, arg2_00, arg3_00, arg2, 0);
                                Write3DArray<signed char>((Array<signed char>*)&m_mapl, arg2_00, arg3_00, arg2, '\0');
                                arg2_00 = arg2_00 + 1;
                            } while (arg2_00 != 4);
                        }
                        arg3_00 = arg3_00 + 1;
                    } while ((int)arg3_00 < arg3 + arg1);
                }
                arg2 = arg2 + 1;
            } while (arg2 < iVar1);
        }
    }

    // 0x10033eec0
    void ClientBuild::FadeAdjacent(int arg1, int arg2, int arg3, int arg4) {
        unsigned int arg3_00;
        int iVar1;
        int iVar2;
        int iVar3;
        unsigned int uVar4;
        int iVar5;
        unsigned int arg3_01;
        int arg4_00;
        bool bVar6;

        if (-1 < arg4) {
            iVar1 = arg4 + arg2;
            uVar4 = arg3 + arg1;
            if (arg3 + arg1 < arg1) {
                uVar4 = arg1;
            }
            iVar2 = iVar1;
            if (iVar1 < arg2) {
                iVar2 = arg2;
            }
            arg4_00 = arg2;
            do {
                if (-1 < arg3) {
                    iVar5 = 0;
                    arg3_00 = arg1 - 1;
                    do {
                        arg3_01 = arg3_00 + 1;
                        if (((arg3_01 < 104) && (-1 < arg4_00)) && (arg4_00 < 104)) {
                            Write3DArray<signed char>((Array<signed char>*)&m_shadow, 0, arg3_01, arg4_00, '\x7f');
                            if ((iVar5 == 0) && (0 < (int)arg3_01)) {
                                iVar3 = Read3DArray<int>((Array<int>*)&m_groundh, 0, arg3_00, arg4_00);
                                Write3DArray<int>((Array<int>*)&m_groundh, 0, arg3_01, arg4_00, iVar3);
                            }
                            if ((arg3 == iVar5) && ((int)arg3_01 < 103)) {
                                iVar3 = Read3DArray<int>((Array<int>*)&m_groundh, 0, arg3_00 + 2, arg4_00);
                                Write3DArray<int>((Array<int>*)&m_groundh, 0, arg3_01, arg4_00, iVar3);
                            }
                            if (arg4_00 == arg2 && 0 < arg4_00) {
                                iVar3 = Read3DArray<int>((Array<int>*)&m_groundh, 0, arg3_01, arg4_00 - 1);
                                Write3DArray<int>((Array<int>*)&m_groundh, 0, arg3_01, arg4_00, iVar3);
                            }
                            if (arg4_00 == iVar1 && arg4_00 < 103) {
                                iVar3 = Read3DArray<int>((Array<int>*)&m_groundh, 0, arg3_01, arg4_00 + 1);
                                Write3DArray<int>((Array<int>*)&m_groundh, 0, arg3_01, arg4_00, iVar3);
                            }
                        }
                        iVar5 = iVar5 + 1;
                        arg3_00 = arg3_01;
                    } while (uVar4 != arg3_01);
                }
                bVar6 = arg4_00 != iVar2;
                arg4_00 = arg4_00 + 1;
            } while (bVar6);
        }
    }

    // 0x10033f090
    void ClientBuild::LoadGround(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3, int arg4, int arg5,
                                 eastl::fixed_vector<movement::CollisionMap, 4ul>& collisionMaps) {
        long lVar1;
        Array<int>* array;
        int iVar2;
        long lVar3;
        int iVar4;
        int arg3_00;
        long lVar5;

        unsigned long local_38 = 0;
        do {
            lVar3 = 0;
            do {
                lVar5 = 0;
                do {
                    if (((int)(arg2 + lVar3) - 1U < 102) && ((unsigned int)(arg3 - 1 + (int)lVar5) < 102)) {
                        lVar1 = collisionMaps[local_38];
                        array = (Array<int>*)(*((lVar1 + 16)))[arg2 + lVar3];
                        lVar1 = (*array)[arg3 + lVar5];
                        *(uint8_t*)(lVar1 + 3) = *(uint8_t*)(lVar1 + 3) & 254;
                    }
                    lVar5 = lVar5 + 1;
                } while (lVar5 != 64);
                lVar3 = lVar3 + 1;
            } while (lVar3 != 64);
            local_38 = local_38 + 1;
        } while (local_38 != 4);
        unsigned int uVar6 = 0;
        do {
            iVar2 = 0;
            do {
                iVar4 = 64;
                arg3_00 = arg3;
                do {
                    LoadGroundSquare((ClientBuild*)packetJ, (PacketJ<Array<unsigned char> _>*)(unsigned long)uVar6,
                                     iVar2 + arg2, arg3_00, iVar2 + arg2 + arg4, arg5 + arg3_00, 0, (int)packetJ);
                    arg3_00 = arg3_00 + 1;
                    iVar4 = iVar4 - 1;
                } while (iVar4 != 0);
                iVar2 = iVar2 + 1;
            } while (iVar2 != 64);
            uVar6 = uVar6 + 1;
        } while (uVar6 != 4);
    }

    // 0x10033f230
    void ClientBuild::LoadGroundSquare(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3, int arg4, int arg5,
                                       int arg6, int arg7) {
        uint8_t bVar1;
        short arg5_00;
        unsigned short uVar2;
        int iVar3;
        unsigned int uVar4;

        unsigned int arg2_00 = (unsigned int)packetJ;
        if ((((3 < arg2_00) || (arg2 < 0)) || (103 < arg2)) || ((arg3 < 0 || (103 < arg3)))) {
            while (true) {
                uVar2 = g2();
                if (uVar2 == 0) {
                    return;
                }
                if (uVar2 == 1)
                    break;
                if (uVar2 < 50) {
                    g2();
                }
            }
            g1();
            return;
        }
        Array<signed char>* arg1 = (Array<signed char>*)&m_mapl;
        unsigned int uVar6 = 0;
        PacketJ<Array<unsigned char> _>* pPVar5 = packetJ;
    LAB_10033f329:
        Write3DArray<signed char>(arg1, (int)pPVar5, arg2, arg3, (schar)uVar6);
        do {
            uVar2 = g2();
            if (uVar2 == 1) {
                bVar1 = g1();
                uVar6 = (unsigned int)bVar1;
                if (bVar1 == 1) {
                    uVar6 = 0;
                }
                if (arg2_00 == 0) {
                    iVar3 = uVar6 * -8;
                    arg2_00 = 0;
                } else {
                    iVar3 = Read3DArray<int>((Array<int>*)&m_groundh, arg2_00 - 1, arg2, arg3);
                    iVar3 = iVar3 + uVar6 * -8;
                }
            LAB_10033f453:
                Write3DArray<int>((Array<int>*)&m_groundh, arg2_00, arg2, arg3, iVar3);
                return;
            }
            if (uVar2 == 0) {
                if (arg2_00 == 0) {
                    iVar3 = PerlinNoise(arg4 + 932731, arg5 + 556238);
                    iVar3 = iVar3 * -8;
                    arg2_00 = 0;
                } else {
                    iVar3 = Read3DArray<int>((Array<int>*)&m_groundh, arg2_00 - 1, arg2, arg3);
                    iVar3 = iVar3 - 240;
                }
                goto LAB_10033f453;
            }
            uVar6 = (unsigned int)uVar2;
            if (uVar2 < 50) {
                arg5_00 = g2s();
                Write3DArray<short>((Array<short>*)&m_floort2, arg2_00, arg2, arg3, arg5_00);
                uVar4 = uVar6 + 1;
                if (-1 < (int)(uVar6 - 2)) {
                    uVar4 = uVar6 - 2;
                }
                Write3DArray<signed char>((Array<signed char>*)&m_floors, arg2_00, arg2, arg3, (schar)(uVar4 >> 2));
                uVar6 = (arg6 + uVar6) - 2 & 3;
                arg1 = (Array<signed char>*)&m_floorr;
                goto LAB_10033f320;
            }
            if (uVar2 < 82)
                break;
            Write3DArray<short>((Array<short>*)&m_floort1, arg2_00, arg2, arg3, uVar2 - 81);
        } while (true);
        uVar6 = (unsigned int)(char)((char)uVar2 - 49);
        arg1 = (Array<signed char>*)&m_mapl;
    LAB_10033f320:
        pPVar5 = (PacketJ<Array<unsigned char> _>*)((unsigned long)packetJ & 4294967295);
        goto LAB_10033f329;
    }

    // 0x10033f470
    void ClientBuild::LoadGroundRegion(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3, int arg4, int arg5,
                                       int arg6, int arg7, int arg8, int arg9, int arg10,
                                       eastl::fixed_vector<movement::CollisionMap, 4ul>& collisionMaps) {
        int iVar1;
        int iVar2;
        long lVar3;
        Array<int>* this_00;
        unsigned int arg1;
        unsigned int uVar5;
        unsigned int uVar6;
        PacketJ<Array<unsigned char> _>* packetJ_00;
        int arg4_00;
        unsigned int arg2_00;
        int arg5_00;
        long lVar7;
        uint32_t in_stack_0000002c;
        int arg6_00;

        long lVar4 = 0;
        do {
            lVar7 = 0;
            do {
                if (((int)(lVar4 + arg2) - 1U < 102) && ((unsigned int)(arg3 - 1 + (int)lVar7) < 102)) {
                    lVar3 = (*(
                        (vector<movement::CollisionMap,
                                eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true>>*)(((uint64_t)in_stack_0000002c
                                                                                             << 32) |
                                                                                            (uint32_t)arg10)))[(
                        long)(int)packetJ];
                    this_00 = (Array<int>*)(*((lVar3 + 16)))[lVar4 + arg2];
                    lVar3 = (*this_00)[arg3 + lVar7];
                    *(uint8_t*)(lVar3 + 3) = *(uint8_t*)(lVar3 + 3) & 254;
                }
                lVar7 = lVar7 + 1;
            } while (lVar7 != 8);
            lVar4 = lVar4 + 1;
        } while (lVar4 != 8);
        int local_34 = 0;
        do {
            uVar5 = 0;
            do {
                arg1 = uVar5 & 7;
                uVar6 = 0;
                do {
                    if (((int)uVar6 < arg6 || (arg5 + 8 <= (int)uVar5 || ((int)uVar5 < arg5 || local_34 != arg4))) ||
                        (arg6 + 8 <= (int)uVar6)) {
                        arg6_00 = 0;
                        packetJ_00 = nullptr;
                        iVar1 = -1;
                        iVar2 = -1;
                        arg4_00 = 0;
                        arg5_00 = 0;
                    } else {
                        arg2_00 = uVar6 & 7;
                        iVar1 = util::RegionRotate::DX(arg1, arg2_00, arg7);
                        iVar1 = iVar1 + arg2;
                        iVar2 = util::RegionRotate::DZ(arg1, arg2_00, arg7);
                        iVar2 = arg3 + iVar2;
                        arg5_00 = arg2_00 + arg9 + arg3;
                        packetJ_00 = (PacketJ<Array<unsigned char> _>*)((unsigned long)packetJ & 4294967295);
                        arg4_00 = arg8 + arg2 + arg1;
                        arg6_00 = arg7;
                    }
                    LoadGroundSquare(*packetJ_00, iVar1, iVar2, arg4_00, arg5_00, arg6_00, (int)this);
                    uVar6 = uVar6 + 1;
                } while (uVar6 != 64);
                uVar5 = uVar5 + 1;
            } while (uVar5 != 64);
            local_34 = local_34 + 1;
        } while (local_34 != 4);
    }

    // 0x10033f6a0
    void ClientBuild::AutoGroundRegion(int arg1, int arg2, int arg3) {
        int iVar2;

        int iVar1 = 0;
        do {
            iVar2 = 0;
            do {
                Write3DArray<int>((Array<int>*)&m_groundh, arg1, iVar1 + arg2, arg3 + iVar2, 0);
                iVar2 = iVar2 + 1;
            } while (iVar2 != 8);
            iVar1 = iVar1 + 1;
        } while (iVar1 != 8);
        if (0 < arg2) {
            iVar1 = 1;
            do {
                iVar2 = Read3DArray<int>((Array<int>*)&m_groundh, arg1, arg2 - 1, arg3 + iVar1);
                Write3DArray<int>((Array<int>*)&m_groundh, arg1, arg2, arg3 + iVar1, iVar2);
                iVar1 = iVar1 + 1;
            } while (iVar1 != 8);
        }
        if (0 < arg3) {
            iVar1 = 1;
            do {
                iVar2 = Read3DArray<int>((Array<int>*)&m_groundh, arg1, arg2 + iVar1, arg3 - 1);
                Write3DArray<int>((Array<int>*)&m_groundh, arg1, arg2 + iVar1, arg3, iVar2);
                iVar1 = iVar1 + 1;
            } while (iVar1 != 8);
        }
        if (0 < arg2) {
            iVar1 = arg2 - 1;
            iVar2 = Read3DArray<int>((Array<int>*)&m_groundh, arg1, iVar1, arg3);
            if (iVar2 != 0) {
                iVar2 = arg3;
                goto LAB_10033f854;
            }
        }
        if ((arg3 < 1) || (iVar1 = Read3DArray<int>((Array<int>*)&m_groundh, arg1, arg2, arg3 - 1), iVar1 == 0)) {
            if (arg2 < 1) {
                return;
            }
            if (arg3 < 1) {
                return;
            }
            iVar1 = arg2 - 1;
            iVar2 = Read3DArray<int>((Array<int>*)&m_groundh, arg1, iVar1, arg3 - 1);
            if (iVar2 == 0) {
                return;
            }
        } else {
            iVar1 = arg2;
        }
        iVar2 = arg3 - 1;
    LAB_10033f854:
        iVar1 = Read3DArray<int>((Array<int>*)&m_groundh, arg1, iVar1, iVar2);
        Write3DArray<int>((Array<int>*)&m_groundh, arg1, arg2, arg3, iVar1);
    }

    // 0x10033f880
    void ClientBuild::LoadEnvironmentSettings(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3) {
        int iVar5;
        unsigned int uVar6;
        int iVar8;
        unsigned long uVar9;
        unsigned int uVar10;
        unsigned long in_R8;
        Vector4T<float>* in_R9;
        int iVar11;
        unsigned int arg2_00;
        int arg3_00;
        ImVec4 local_b8;
        ImVec4 local_a8;
        unsigned long local_98;
        unsigned long local_90;
        int local_74;
        float local_5c;
        float local_58;
        float local_54;
        unsigned long local_50;

        unsigned long uVar12 = (unsigned long)packetJ & 4294967295;
        uint8_t bVar1 = g1();
        unsigned int local_38 = (unsigned int)bVar1;
        bVar1 = g1();
        uint8_t bVar2 = g1();
        uint8_t bVar3 = g1();
        uint8_t bVar4 = g1();
        unsigned int local_70 = (unsigned int)bVar4;
        char local_31 = g1();
        float local_68 = (float)(int)local_38;
        unsigned int local_40 = (unsigned int)bVar1;
        float local_64 = (float)local_40;
        unsigned int local_3c = (unsigned int)bVar2;
        float local_60 = (float)local_3c;
        unsigned long uVar7 = 0;
        unsigned int local_6c = (unsigned int)bVar3;
        unsigned long local_88 = uVar12;
        unsigned int local_44 = local_6c;
        do {
            if (local_31 == '\0') {
                bVar1 = g1();
                local_38 = (unsigned int)bVar1;
                bVar1 = g1();
                local_40 = (unsigned int)bVar1;
                bVar1 = g1();
                local_3c = (unsigned int)bVar1;
                bVar1 = g1();
                local_44 = (unsigned int)bVar1;
            }
            iVar5 = gSmart2or4();
            if (((int)uVar7 < 4) || (0 < iVar5)) {
                local_5c = (float)(int)local_38;
                local_58 = (float)(int)local_40;
                local_54 = (float)(int)local_3c;
                iVar11 = 0;
                uVar6 = 1;
                uVar9 = 0;
                local_74 = iVar5;
                do {
                    iVar8 = (int)in_R8;
                    arg2_00 = (int)uVar9 + (int)uVar12;
                    uVar10 = uVar6;
                    local_50 = uVar7;
                    if (((arg2_00 < 104) && (arg3_00 = iVar11 + arg2, -1 < arg3_00)) && (arg3_00 < 104)) {
                        local_98 = uVar9;
                        local_90 = (unsigned long)uVar6;
                        if (local_31 == '\0') {
                            local_a8 = ImVec4(local_5c, local_58, local_54, 1.0);
                            uVar6 = local_44;
                        } else {
                            local_b8 = ImVec4(local_68, local_64, local_60, 1.0);
                            uVar6 = local_6c;
                        }
                        iVar5 = (int)local_50;
                        Write3DArray<jag::math::Vector4T<float>>(
                            (ClientBuild*)&m_skyboxColour, (Array<jag::math::Vector4T<float>>*)(local_50 & 4294967295),
                            arg2_00, arg3_00, iVar8, in_R9);
                        Write3DArray<int>((Array<int>*)&m_fogStartDistance, iVar5, arg2_00, arg3_00, uVar6);
                        in_R8 = (unsigned long)local_70;
                        Write3DArray<int>((Array<int>*)&m_fogIntensity, iVar5, arg2_00, arg3_00, local_70);
                        uVar10 = (unsigned int)local_90;
                        uVar9 = local_98;
                        uVar12 = local_88;
                        iVar5 = local_74;
                    }
                    if (iVar11 < 63) {
                        iVar11 = iVar11 + 1;
                        uVar7 = local_50;
                    } else {
                        iVar11 = 0;
                        iVar8 = (int)uVar9;
                        uVar6 = iVar8 + 1;
                        if (62 < iVar8) {
                            uVar6 = 0;
                        }
                        uVar7 = (unsigned long)((int)local_50 + (unsigned int)(62 < iVar8));
                        uVar9 = (unsigned long)uVar6;
                    }
                    uVar6 = uVar10 + 1;
                } while (((int)uVar7 < 4) || ((int)uVar10 < iVar5));
            }
            iVar5 = (int)uVar7;
            uVar7 = (unsigned long)(iVar5 + 1);
        } while (iVar5 < 3);
    }

    // 0x10033fbc0
    int ClientBuild::PerlinNoise(int arg1, int arg2) {
        int iVar1 = InterpolatedNoise(arg1 + 45365, arg2 + 91923, 4);
        int iVar2 = InterpolatedNoise(arg1 + 10294, arg2 + 37821, 2);
        int iVar3 = InterpolatedNoise(arg1, arg2, 1);
        iVar2 = (int)((double)((iVar3 - 128 >> 2) + (iVar2 - 128 >> 1) + iVar1 - 128) * 0.3);
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

    // 0x10033fc60
    unsigned long ClientBuild::CheckLocations(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3) {
        uint8_t bVar1;
        int iVar2;
        int iVar3;
        unsigned int uVar4;
        unsigned long uVar5;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        int iVar8;
        bool bVar9;
        shared_ptr<dash3d::Decor> local_60;
        unsigned long local_48;
        int local_34;

        return local_40 = 0;
        packetJ.SetPos(0);
        int iVar7 = -1;
        do {
            uVar5 = packetJ.size();
            if (packetJ.GetTextureAtlas() <= uVar5) {
                return local_40;
            }
            iVar2 = packetJ.gSmartsExtend();
            if (iVar2 != 0) {
                iVar7 = iVar7 + iVar2;
                bVar9 = false;
                local_48 = 0;
                do {
                    while (true) {
                        while (iVar3 = packetJ.gSmarts(), bVar9) {
                            if (iVar3 == 0)
                                goto LAB_10033fc90;
                            packetJ.g1();
                        }
                        if (iVar3 != 0)
                            break;
                    joined_r0x00010033fdad:
                        if (iVar3 == 0)
                            goto LAB_10033fc90;
                    }
                    uVar4 = ((int)local_48 + iVar3) - 1;
                    local_48 = (unsigned long)uVar4;
                    local_34 = iVar7;
                    packetJ.g1();
                    iVar7 = local_34;
                    iVar8 = (uVar4 >> 6 & 63) + arg2;
                    if ((((102 < iVar8) || (iVar8 < 1)) || (iVar8 = ((unsigned int)local_48 & 63) + arg3, iVar8 < 1)) ||
                        (102 < iVar8))
                        goto joined_r0x00010033fdad;
                    groundDecor = (shared_ptr<dash3d::GroundDecor>*)configdecoder::LocType::List(local_34);
                    local_60 = shared_ptr(groundDecor);
                    bVar1 = ((LocType*)local_60.operator->())->CheckModelAll();
                    local_40 = (unsigned long)((int)local_40 + (unsigned int)(bVar1 ^ 1));
                    bVar9 = true;
                } while (iVar3 != 0);
            }
        LAB_10033fc90:
            if (iVar2 == 0) {
                return local_40;
            }
        } while (true);
    }

    // 0x10033fe20
    void ClientBuild::PrefetchLocations(PacketJ<Array<unsigned char>>& packetJ) {
        unsigned long uVar1;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        int iVar3;
        int iVar4;
        shared_ptr<RSevenDebugPresetProvider> local_38;

        packetJ.SetPos(0);
        int arg1 = -1;
        do {
            uVar1 = packetJ.size();
            if (packetJ.GetTextureAtlas() <= uVar1) {
                return;
            }
            iVar3 = packetJ.gSmartsExtend();
            if (iVar3 != 0) {
                arg1 = arg1 + iVar3;
                groundDecor = (shared_ptr<dash3d::GroundDecor>*)configdecoder::LocType::List(arg1);
                local_38 = shared_ptr(groundDecor);
                ((LocType*)local_38.operator->())->CheckModelAll();
                while (iVar4 = packetJ.gSmarts(), iVar4 != 0) {
                    packetJ.g1();
                }
            }
        } while (iVar3 != 0);
    }

    // 0x10033fef0
    PacketJ<Array<unsigned char> _>*
    ClientBuild::LoadLocations(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3, dash3d::world& world,
                               eastl::fixed_vector<movement::CollisionMap, 4ul>& collisionMaps, int arg6) {
        uint8_t bVar1;
        schar sVar2;
        int iVar5;
        int iVar6;
        unsigned long uVar7;
        world* world_00;
        unsigned int uVar9;
        uint32_t in_register_00000034;
        uint32_t in_register_0000008c;
        long lVar10;
        uint32_t in_stack_00000008;
        uint32_t in_stack_ffffffffffffff8c;
        LocLayer local_48;
        int local_44;
        int local_40;
        unsigned int local_38;
        shared_ptr<configdecoder::LocType> local_31;

        TextureAtlasReference* textureAtlasReference =
            (TextureAtlasReference*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        new (packetJ) eastl::vector<LocInfo, BucketAllocatorEASTL>();
        textureAtlasReference->SetPos(0);
        int local_3c = -1;
        do {
            uVar7 = textureAtlasReference->size();
            if (textureAtlasReference->GetTextureAtlas() <= uVar7) {
                return packetJ;
            }
            iVar5 = textureAtlasReference->gSmartsExtend();
            if (iVar5 != 0) {
                local_3c = local_3c + iVar5;
                uVar9 = 0;
                do {
                    iVar6 = textureAtlasReference->gSmarts();
                    if (iVar6 != 0) {
                        uVar9 = (uVar9 + iVar6) - 1;
                        local_38 = (int)uVar9 >> 12;
                        bVar1 = textureAtlasReference->g1();
                        local_48 = bVar1 & 3;
                        local_44 = (uVar9 >> 6 & 63) + arg3;
                        local_40 = (uVar9 & 63) + (int)world;
                        if ((((local_44 < 103) && (0 < local_44)) && (0 < local_40)) && (local_40 < 103)) {
                            lVar10 = (long)(int)local_38;
                            sVar2 = Read3DArray<signed char>((Array<signed char>*)&m_mapl, 1, local_44, local_40);
                            uVar7 = lVar10 + ((char)(sVar2 << 6) >> 7);
                            if ((int)uVar7 < 0) {
                                world_00 = nullptr;
                            } else {
                                world_00 = (world*)(*(
                                    (vector<movement::CollisionMap,
                                            eastl::fixed_vector_allocator<
                                                40ul, 4ul, 8ul, 0ul, true>>*)(((uint64_t)in_register_0000008c << 32) |
                                                                              (uint32_t)arg6)))[uVar7];
                            }
                            if (AddLoc((ClientBuild*)(unsigned long)local_38, local_44, local_40, local_3c, local_48,
                                       (unsigned int)(bVar1 >> 2), (int)collisionMaps, world_00,
                                       (CollisionMap*)(((uint64_t)in_stack_ffffffffffffff8c << 32) |
                                                       (uint32_t)in_stack_00000008),
                                       (int)collisionMaps) != '\0') {
                                if (((Read3DArray<signed char>((Array<signed char>*)&m_mapl, 1, local_44, local_40) &
                                      2) != 0) &&
                                    (0 < (int)local_38)) {
                                    local_38 = local_38 - 1;
                                }
                                local_31 = (shared_ptr<configdecoder::LocType>)((LocShape*)(unsigned long)(bVar1 >> 2))
                                               ->ToLayer(1);
                                configdecoder::LocType::List(local_3c);
                                eastl::vector<LocInfo, BucketAllocatorEASTL>::emplace_back<
                                    int&, int&, int&, int&, LocLayer, shared_ptr<configdecoder::LocType> const&>(
                                    packetJ, local_38, local_44, local_40, local_48, local_31);
                            }
                        }
                    }
                } while (iVar6 != 0);
            }
        } while (iVar5 != 0);
        return packetJ;
    }

    // 0x1003400e0
    unsigned long ClientBuild::AddLoc(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, dash3d::world& world,
                                      movement::CollisionMap* collisionMap, int arg9) {
        uint32_t uVar1;
        unsigned int uVar2;
        bool cVar4;
        bool bVar5;
        long lVar9;
        long lVar10;
        long* plVar11;
        shared_ptr<configdecoder::LocType>* psVar12;
        int* piVar13;
        unsigned int* puVar14;
        unsigned long uVar19;
        uint32_t in_stack_0000000c;
        int local_dc;
        unsigned long local_c8;
        unsigned int local_b8;
        unsigned long local_b0;
        unsigned int local_a4;
        unsigned long local_a0;
        uint64_t local_98[2];
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_70;
        shared_ptr<ClientLocAnim> local_50;

        int local_34 = (int)this;
        if (local_34 < minusedlevel) {
            minusedlevel = local_34;
        }
        unsigned int local_84 = arg5;
        int local_74 = arg3;
        unsigned int local_40 = arg4;
        int local_3c = arg2;
        unsigned int local_38 = arg1;
        shared_ptr<dash3d::GroundDecor>* groundDecor =
            (shared_ptr<dash3d::GroundDecor>*)configdecoder::LocType::List(arg3);
        shared_ptr<dash3d::Decor> local_60(groundDecor);
        if ((local_40 & 4294967293) == 1) {
            lVar9 = local_60.operator->();
            local_c8 = (unsigned long)*(unsigned int*)(lVar9 + 188);
            lVar9 = local_60.operator->();
            puVar14 = (unsigned int*)(lVar9 + 184);
        } else {
            lVar9 = local_60.operator->();
            local_c8 = (unsigned long)*(unsigned int*)(lVar9 + 184);
            lVar9 = local_60.operator->();
            puVar14 = (unsigned int*)(lVar9 + 188);
        }
        int iVar8 = local_3c;
        unsigned long local_80 = (unsigned long)local_38;
        int iVar17 = (int)local_c8;
        int iVar20 = iVar17 >> 1;
        int iVar18 = iVar17 + 1 >> 1;
        if (104 < (int)(local_38 + iVar17)) {
            iVar18 = 1;
        }
        unsigned int uVar16 = *puVar14;
        unsigned long local_d0 = (unsigned long)uVar16;
        if (104 < (int)(local_38 + iVar17)) {
            iVar20 = 0;
        }
        iVar20 = iVar20 + local_38;
        int iVar15 = (int)uVar16 >> 1;
        unsigned int local_b4 = uVar16 + 1;
        iVar17 = (int)local_b4 >> 1;
        if (104 < (int)(uVar16 + local_3c)) {
            iVar17 = 1;
            iVar15 = 0;
        }
        iVar15 = iVar15 + local_3c;
        int iVar7 = Read3DArray<int>((Array<int>*)&m_groundh, local_34, iVar20, iVar15);
        local_b0 = (((uint64_t)local_b0._4_4_ << 32) | (uint32_t)iVar7);
        iVar18 = iVar18 + (int)local_80;
        iVar15 = Read3DArray<int>((Array<int>*)&m_groundh, local_34, iVar18, iVar15);
        local_80._0_4_ = iVar15;
        int local_d8 = Read3DArray<int>((Array<int>*)&m_groundh, local_34, iVar20, iVar17 + iVar8);
        iVar15 = local_34;
        int local_d4 = Read3DArray<int>((Array<int>*)&m_groundh, local_34, iVar18, iVar17 + iVar8);
        iVar20 = local_34;
        unsigned int uVar21 = local_38;
        iVar18 = local_3c;
        lVar9 = local_60.operator->();
        iVar8 = local_74;
        iVar17 = *(int*)(lVar9 + 200);
        uint8_t bVar3 = ((LocShape*)(unsigned long)local_84)->ToLayer(iVar15);
        long long local_c0 = dash3d::MousePickingHelper::GetPackedTypeCodeLoc(uVar21, iVar18, iVar20, iVar17 == 0,
                                                                              iVar8, (unsigned int)bVar3);
        uVar16 = local_40 * 64 + local_84;
        lVar9 = local_60.operator->();
        world* this_00 = (world*)(((uint64_t)in_stack_0000000c << 32) | (uint32_t)arg6);
        local_80 =
            (((uint64_t)local_80._4_4_ << 32) | (uint32_t)((int)local_80 + (int)local_b0 + local_d8 + local_d4 >> 2));
        iVar17 = (int)local_c8 * 64 + uVar21 * 128;
        iVar8 = (int)local_d0;
        if (*(int*)(lVar9 + 480) == 1) {
            uVar16 = uVar16 + 256;
        }
        local_b0 = (unsigned long)uVar16;
        if (local_84 == 22) {
            local_70 = shared_ptr();
            lVar9 = local_60.operator->();
            if (*(int*)(lVar9 + 212) == -1) {
                lVar9 = local_60.operator->();
                cVar4 = ((lVar9 + 488))->empty();
                if (!cVar4)
                    goto LAB_100340443;
                iVar8 = local_60.operator->();
                configdecoder::LocType::GetModel((int)&local_50, iVar8, 22, local_40, local_34, iVar17);
                local_70 = local_50;
            } else {
            LAB_100340443:
                local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)22);
                lVar9 = local_60.operator->();
                lVar10 = local_60.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    &local_50, &local_74, (int*)&local_a0, (int*)&local_40, &local_34, (int*)&local_38, &local_3c,
                    (bool*)(lVar9 + 212), (void**)(lVar10 + 560), (int*)local_98);
                local_70 = local_50;
            }
            uVar16 =
                this_00->SetGroundDecor(local_34, local_38, local_3c, (int)local_80, local_70, local_c0, (int)local_b0);
            uVar19 = (unsigned long)uVar16;
            lVar9 = local_60.operator->();
            if ((*(int*)(lVar9 + 192) == 1) && (world != nullptr)) {
                world.BlockGroundDecor(local_38, local_3c);
            }
            goto LAB_100342014;
        }
        if ((local_84 & 4294967294) == 10) {
            local_70 = shared_ptr();
            lVar9 = local_60.operator->();
            if (*(int*)(lVar9 + 212) == -1) {
                lVar9 = local_60.operator->();
                cVar4 = ((lVar9 + 488))->empty();
                if (!cVar4)
                    goto LAB_1003405d2;
                iVar20 = local_60.operator->();
                configdecoder::LocType::GetModel((int)&local_50, iVar20, 10, local_40, local_34, iVar17);
                local_70 = local_50;
            } else {
            LAB_1003405d2:
                local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)10);
                lVar9 = local_60.operator->();
                lVar10 = local_60.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    &local_50, &local_74, (int*)&local_a0, (int*)&local_40, &local_34, (int*)&local_38, &local_3c,
                    (bool*)(lVar9 + 212), (void**)(lVar10 + 560), (int*)local_98);
                local_70 = local_50;
            }
            bVar5 = local_70 != nullptr;
            if (bVar5) {
                cVar4 = this_00->AddScenery(local_34, local_38, local_3c, (int)local_80, (int)local_c8, (int)local_d0,
                                            local_70, (unsigned int)(local_84 == 11) << 8, local_c0, (int)local_b0);
                if ((!cVar4) || (lVar9 = local_60.operator->(), *(char*)(lVar9 + 445) == '\0'))
                    goto LAB_1003407d6;
                plVar11 = (long*)local_70.operator->();
                cVar4 = (**(void (**)(...))(*plVar11 + 24))(plVar11);
                iVar17 = 15;
                if (cVar4) {
                    static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_50);
                    plVar11 = (long*)local_50.operator->();
                    iVar17 = (**(void (**)(...))(*plVar11 + 72))(plVar11);
                    iVar20 = iVar17 + 3;
                    if (-1 < iVar17) {
                        iVar20 = iVar17;
                    }
                    iVar17 = 30;
                    if (iVar20 >> 2 < 30) {
                        iVar17 = iVar20 >> 2;
                    }
                }
                uVar19 = (((uint64_t)((uint64_t)(uint32_t)((unsigned int)(iVar8 * 64 + iVar18 * 128) >> 8)) << 8) |
                          (uint8_t)1);
                if (-1 < (int)local_c8) {
                    iVar8 = 0;
                    do {
                        if (-1 < (int)local_d0) {
                            uVar19 = 0;
                            do {
                                iVar18 = (int)uVar19;
                                if (Read3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38 + iVar8,
                                                             local_3c + iVar18) < iVar17) {
                                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34,
                                                              local_38 + iVar8, local_3c + iVar18, (schar)iVar17);
                                }
                                uVar19 = (unsigned long)(iVar18 + 1U);
                            } while (local_b4 != iVar18 + 1U);
                        }
                        bVar5 = iVar8 != (int)local_c8;
                        iVar8 = iVar8 + 1;
                    } while (bVar5);
                    uVar19 = (((uint64_t)((int64_t)(uVar19 >> 8)) << 8) | (uint8_t)1);
                }
            } else {
            LAB_1003407d6:
                uVar19 = 0;
            }
            lVar9 = local_60.operator->();
            uVar16 = local_38;
            iVar17 = local_3c;
            if ((*(int*)(lVar9 + 192) != 0) && (world != nullptr)) {
                lVar9 = local_60.operator->();
                world.AddLoc(uVar16, iVar17, (int)local_c8, (int)local_d0, *(bool*)(lVar9 + 196));
            }
            goto LAB_100342014;
        }
        if (11 < (int)local_84) {
            local_70 = shared_ptr();
            lVar9 = local_60.operator->();
            if (*(int*)(lVar9 + 212) == -1) {
                lVar9 = local_60.operator->();
                cVar4 = ((lVar9 + 488))->empty();
                if (!cVar4)
                    goto LAB_1003408d5;
                iVar8 = local_60.operator->();
                configdecoder::LocType::GetModel((int)&local_50, iVar8, local_84, local_40, local_34, iVar17);
                local_70 = local_50;
            } else {
            LAB_1003408d5:
                lVar9 = local_60.operator->();
                lVar10 = local_60.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int&, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    &local_50, &local_74, (int*)&local_84, (int*)&local_40, &local_34, (int*)&local_38, &local_3c,
                    (bool*)(lVar9 + 212), (void**)(lVar10 + 560), (int*)local_98);
                local_70 = local_50;
            }
            uVar16 = this_00->AddScenery(local_34, local_38, local_3c, (int)local_80, 1, 1, local_70, 0, local_c0,
                                         (int)local_b0);
            uVar19 = (unsigned long)uVar16;
            if (((local_84 != 13) && (local_84 - 12 < 6)) && (0 < local_34)) {
                uVar16 = Read3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c);
                Write3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c, uVar16 | 2340);
            }
            lVar9 = local_60.operator->();
            uVar16 = local_38;
            iVar17 = local_3c;
            if ((*(int*)(lVar9 + 192) != 0) && (world != nullptr)) {
                lVar9 = local_60.operator->();
                world.AddLoc(uVar16, iVar17, (int)local_c8, (int)local_d0, *(bool*)(lVar9 + 196));
            }
            goto LAB_100342014;
        }
        switch (local_84) {
        case 0:
            local_70 = shared_ptr();
            lVar9 = local_60.operator->();
            if (*(int*)(lVar9 + 212) == -1) {
                lVar9 = local_60.operator->();
                cVar4 = ((lVar9 + 488))->empty();
                if (!cVar4)
                    goto LAB_100340f0c;
                iVar8 = local_60.operator->();
                configdecoder::LocType::GetModel((int)&local_50, iVar8, 0, local_40, local_34, iVar17);
                local_70 = local_50;
            } else {
            LAB_100340f0c:
                local_a0 = local_a0 & 18446744069414584320;
                lVar9 = local_60.operator->();
                lVar10 = local_60.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    &local_50, &local_74, (int*)&local_a0, (int*)&local_40, &local_34, (int*)&local_38, &local_3c,
                    (bool*)(lVar9 + 212), (void**)(lVar10 + 560), (int*)local_98);
                local_70 = local_50;
            }
            iVar8 = local_34;
            uVar16 = local_38;
            iVar17 = local_3c;
            local_50 = shared_ptr();
            piVar13 = (int*)WSHAPE0[(long)(int)local_40];
            uVar16 = ((world*)(((uint64_t)in_stack_0000000c << 32) | (uint32_t)arg6))
                         ->SetWall(iVar8, uVar16, iVar17, (int)local_80, local_70, local_50, *piVar13, 0, local_c0,
                                   (int)local_b0);
            uVar19 = (unsigned long)uVar16;
            switch (local_40) {
            case 0:
                lVar9 = local_60.operator->();
                if (*(char*)(lVar9 + 445) != '\0') {
                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38, local_3c, '2');
                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38, local_3c + 1, '2');
                }
                lVar9 = local_60.operator->();
                if (*(char*)(lVar9 + 209) != '\0') {
                    uVar16 = Read3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c);
                    Write3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c, uVar16 | 585);
                }
                break;
            case 1:
                lVar9 = local_60.operator->();
                if (*(char*)(lVar9 + 445) != '\0') {
                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38, local_3c + 1, '2');
                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38 + 1, local_3c + 1,
                                              '2');
                }
                lVar9 = local_60.operator->();
                if (*(char*)(lVar9 + 209) != '\0') {
                    uVar16 = Read3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c + 1);
                    Write3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c + 1, uVar16 | 1170);
                }
                break;
            case 2:
                lVar9 = local_60.operator->();
                if (*(char*)(lVar9 + 445) != '\0') {
                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38 + 1, local_3c, '2');
                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38 + 1, local_3c + 1,
                                              '2');
                }
                lVar9 = local_60.operator->();
                if (*(char*)(lVar9 + 209) != '\0') {
                    uVar16 = Read3DArray<int>((Array<int>*)&m_mapo, local_34, local_38 + 1, local_3c);
                    Write3DArray<int>((Array<int>*)&m_mapo, local_34, local_38 + 1, local_3c, uVar16 | 585);
                }
                break;
            case 3:
                lVar9 = local_60.operator->();
                if (*(char*)(lVar9 + 445) != '\0') {
                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38, local_3c, '2');
                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38 + 1, local_3c, '2');
                }
                lVar9 = local_60.operator->();
                if (*(char*)(lVar9 + 209) != '\0') {
                    uVar16 = Read3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c);
                    Write3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c, uVar16 | 1170);
                }
            }
            lVar9 = local_60.operator->();
            uVar2 = local_38;
            iVar17 = local_3c;
            uVar21 = local_40;
            uVar16 = local_84;
            if ((*(int*)(lVar9 + 192) != 0) && (world != nullptr)) {
                lVar9 = local_60.operator->();
                world.AddWall(uVar2, iVar17, uVar16, uVar21, *(bool*)(lVar9 + 196));
            }
            lVar9 = local_60.operator->();
            iVar8 = local_34;
            uVar16 = local_38;
            iVar17 = local_3c;
            if (*(int*)(lVar9 + 216) != 16) {
                lVar9 = local_60.operator->();
                ((world*)(((uint64_t)in_stack_0000000c << 32) | (uint32_t)arg6))
                    ->MoveDecor(iVar8, uVar16, iVar17, *(int*)(lVar9 + 216));
            }
            goto LAB_100342014;
        case 1:
            local_70 = shared_ptr();
            lVar9 = local_60.operator->();
            if (*(int*)(lVar9 + 212) == -1) {
                lVar9 = local_60.operator->();
                cVar4 = ((lVar9 + 488))->empty();
                if (!cVar4)
                    goto LAB_1003410cc;
                iVar8 = local_60.operator->();
                configdecoder::LocType::GetModel((int)&local_50, iVar8, 1, local_40, local_34, iVar17);
                local_70 = local_50;
            } else {
            LAB_1003410cc:
                local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)1);
                lVar9 = local_60.operator->();
                lVar10 = local_60.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    &local_50, &local_74, (int*)&local_a0, (int*)&local_40, &local_34, (int*)&local_38, &local_3c,
                    (bool*)(lVar9 + 212), (void**)(lVar10 + 560), (int*)local_98);
                local_70 = local_50;
            }
            iVar8 = local_34;
            uVar16 = local_38;
            iVar17 = local_3c;
            local_50 = shared_ptr();
            piVar13 = (int*)WSHAPE1[(long)(int)local_40];
            uVar16 = this_00->SetWall(iVar8, uVar16, iVar17, (int)local_80, local_70, local_50, *piVar13, 0, local_c0,
                                      (int)local_b0);
            uVar19 = (unsigned long)uVar16;
            lVar9 = local_60.operator->();
            if (*(char*)(lVar9 + 445) != '\0') {
                switch (local_40) {
                case 0:
                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38, local_3c + 1, '2');
                    break;
                case 1:
                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38 + 1, local_3c + 1,
                                              '2');
                    break;
                case 2:
                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38 + 1, local_3c, '2');
                    break;
                case 3:
                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38, local_3c, '2');
                }
            }
            lVar9 = local_60.operator->();
            uVar2 = local_38;
            iVar17 = local_3c;
            uVar21 = local_40;
            uVar16 = local_84;
            if ((*(int*)(lVar9 + 192) != 0) && (world != nullptr)) {
                lVar9 = local_60.operator->();
                world.AddWall(uVar2, iVar17, uVar16, uVar21, *(bool*)(lVar9 + 196));
            }
            goto LAB_100342014;
        case 2:
            local_a4 = local_40 + 1 & 3;
            local_70 = shared_ptr();
            local_50 = shared_ptr();
            lVar9 = local_60.operator->();
            if (*(int*)(lVar9 + 212) == -1) {
                lVar9 = local_60.operator->();
                cVar4 = ((lVar9 + 488))->empty();
                if (!cVar4)
                    goto LAB_100341726;
                iVar8 = local_60.operator->();
                configdecoder::LocType::GetModel((int)local_98, iVar8, 2, local_40 + 4, local_34, iVar17);
                local_70 = *local_98;
                iVar8 = local_60.operator->();
                configdecoder::LocType::GetModel((int)local_98, iVar8, 2, local_a4, local_34, iVar17);
                local_50 = *local_98;
            } else {
            LAB_100341726:
                local_b8 = 2;
                local_dc = local_40 + 4;
                lVar9 = local_60.operator->();
                lVar10 = local_60.operator->();
                local_a0 = 0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (int*)local_98, &local_74, (int*)&local_b8, &local_dc, &local_34, (int*)&local_38, &local_3c,
                    (bool*)(lVar9 + 212), (void**)(lVar10 + 560), (int*)&local_a0);
                local_70 = *local_98;
                local_b8 = 2;
                lVar9 = local_60.operator->();
                lVar10 = local_60.operator->();
                local_a0 = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (int*)local_98, &local_74, (int*)&local_b8, (int*)&local_a4, &local_34, (int*)&local_38, &local_3c,
                    (bool*)(lVar9 + 212), (void**)(lVar10 + 560), (int*)&local_a0);
                local_50 = *local_98;
            }
            iVar18 = local_34;
            uVar16 = local_38;
            iVar8 = local_3c;
            piVar13 = (int*)WSHAPE0[(long)(int)local_40];
            iVar17 = *piVar13;
            piVar13 = (int*)WSHAPE0[(long)(int)local_a4];
            uVar16 = ((world*)(((uint64_t)in_stack_0000000c << 32) | (uint32_t)arg6))
                         ->SetWall(iVar18, uVar16, iVar8, (int)local_80, local_70, local_50, iVar17, *piVar13, local_c0,
                                   (int)local_b0);
            uVar19 = (unsigned long)uVar16;
            lVar9 = local_60.operator->();
            if (*(char*)(lVar9 + 209) != '\0') {
                switch (local_40) {
                case 0:
                    uVar16 = Read3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c);
                    Write3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c, uVar16 | 585);
                    uVar16 = Read3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c + 1);
                    Write3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c + 1, uVar16 | 1170);
                    break;
                case 1:
                    uVar16 = Read3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c + 1);
                    Write3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c + 1, uVar16 | 1170);
                    uVar16 = Read3DArray<int>((Array<int>*)&m_mapo, local_34, local_38 + 1, local_3c);
                    Write3DArray<int>((Array<int>*)&m_mapo, local_34, local_38 + 1, local_3c, uVar16 | 585);
                    break;
                case 2:
                    uVar16 = Read3DArray<int>((Array<int>*)&m_mapo, local_34, local_38 + 1, local_3c);
                    Write3DArray<int>((Array<int>*)&m_mapo, local_34, local_38 + 1, local_3c, uVar16 | 585);
                    uVar16 = Read3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c);
                    Write3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c, uVar16 | 1170);
                    break;
                case 3:
                    uVar16 = Read3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c);
                    Write3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c, uVar16 | 1170);
                    uVar16 = Read3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c);
                    Write3DArray<int>((Array<int>*)&m_mapo, local_34, local_38, local_3c, uVar16 | 585);
                }
            }
            lVar9 = local_60.operator->();
            uVar2 = local_38;
            iVar17 = local_3c;
            uVar21 = local_40;
            uVar16 = local_84;
            if ((*(int*)(lVar9 + 192) != 0) && (world != nullptr)) {
                lVar9 = local_60.operator->();
                world.AddWall(uVar2, iVar17, uVar16, uVar21, *(bool*)(lVar9 + 196));
            }
            lVar9 = local_60.operator->();
            iVar8 = local_34;
            uVar16 = local_38;
            iVar17 = local_3c;
            if (*(int*)(lVar9 + 216) != 16) {
                lVar9 = local_60.operator->();
                ((world*)(((uint64_t)in_stack_0000000c << 32) | (uint32_t)arg6))
                    ->MoveDecor(iVar8, uVar16, iVar17, *(int*)(lVar9 + 216));
            }
            goto LAB_10034200b;
        case 3:
            local_70 = shared_ptr();
            lVar9 = local_60.operator->();
            if (*(int*)(lVar9 + 212) == -1) {
                lVar9 = local_60.operator->();
                cVar4 = ((lVar9 + 488))->empty();
                if (!cVar4)
                    goto LAB_10034122f;
                iVar8 = local_60.operator->();
                configdecoder::LocType::GetModel((int)&local_50, iVar8, 3, local_40, local_34, iVar17);
                local_70 = local_50;
            } else {
            LAB_10034122f:
                local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)3);
                lVar9 = local_60.operator->();
                lVar10 = local_60.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    &local_50, &local_74, (int*)&local_a0, (int*)&local_40, &local_34, (int*)&local_38, &local_3c,
                    (bool*)(lVar9 + 212), (void**)(lVar10 + 560), (int*)local_98);
                local_70 = local_50;
            }
            iVar8 = local_34;
            uVar16 = local_38;
            iVar17 = local_3c;
            local_50 = shared_ptr();
            piVar13 = (int*)WSHAPE1[(long)(int)local_40];
            uVar16 = this_00->SetWall(iVar8, uVar16, iVar17, (int)local_80, local_70, local_50, *piVar13, 0, local_c0,
                                      (int)local_b0);
            uVar19 = (unsigned long)uVar16;
            lVar9 = local_60.operator->();
            if (*(char*)(lVar9 + 445) != '\0') {
                switch (local_40) {
                case 0:
                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38, local_3c + 1, '2');
                    break;
                case 1:
                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38 + 1, local_3c + 1,
                                              '2');
                    break;
                case 2:
                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38 + 1, local_3c, '2');
                    break;
                case 3:
                    Write3DArray<signed char>((Array<signed char>*)&m_shadow, local_34, local_38, local_3c, '2');
                }
            }
            lVar9 = local_60.operator->();
            uVar2 = local_38;
            iVar17 = local_3c;
            uVar21 = local_40;
            uVar16 = local_84;
            if ((*(int*)(lVar9 + 192) != 0) && (world != nullptr)) {
                lVar9 = local_60.operator->();
                world.AddWall(uVar2, iVar17, uVar16, uVar21, *(bool*)(lVar9 + 196));
            }
            goto LAB_100342014;
        case 4:
            local_70 = shared_ptr();
            lVar9 = local_60.operator->();
            if (*(int*)(lVar9 + 212) == -1) {
                lVar9 = local_60.operator->();
                cVar4 = ((lVar9 + 488))->empty();
                if (!cVar4)
                    goto LAB_100341392;
                iVar8 = local_60.operator->();
                configdecoder::LocType::GetModel((int)&local_50, iVar8, 4, local_40, local_34, iVar17);
                local_70 = local_50;
            } else {
            LAB_100341392:
                local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)4);
                lVar9 = local_60.operator->();
                lVar10 = local_60.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    &local_50, &local_74, (int*)&local_a0, (int*)&local_40, &local_34, (int*)&local_38, &local_3c,
                    (bool*)(lVar9 + 212), (void**)(lVar10 + 560), (int*)local_98);
                local_70 = local_50;
            }
            iVar8 = local_34;
            uVar16 = local_38;
            iVar17 = local_3c;
            local_50 = shared_ptr();
            piVar13 = (int*)WSHAPE0[(long)(int)local_40];
            uVar16 = this_00->SetDecor(iVar8, uVar16, iVar17, (int)local_80, local_70, local_50, *piVar13, 0, 0, 0,
                                       local_c0, (int)local_b0);
            break;
        case 5:
            lVar9 = this_00->WallType(local_34, local_38, local_3c);
            if (lVar9 == 0) {
                iVar8 = 16;
            } else {
                iVar8 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar9);
                psVar12 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar8);
                lVar9 = (*psVar12).operator->();
                iVar8 = *(int*)(lVar9 + 216);
            }
            local_70 = shared_ptr();
            lVar9 = local_60.operator->();
            if (*(int*)(lVar9 + 212) == -1) {
                lVar9 = local_60.operator->();
                cVar4 = ((lVar9 + 488))->empty();
                if (!cVar4)
                    goto LAB_100341a03;
                iVar18 = local_60.operator->();
                configdecoder::LocType::GetModel((int)&local_50, iVar18, 4, local_40, local_34, iVar17);
                local_70 = local_50;
            } else {
            LAB_100341a03:
                local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)4);
                lVar9 = local_60.operator->();
                lVar10 = local_60.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    &local_50, &local_74, (int*)&local_a0, (int*)&local_40, &local_34, (int*)&local_38, &local_3c,
                    (bool*)(lVar9 + 212), (void**)(lVar10 + 560), (int*)local_98);
                local_70 = local_50;
            }
            iVar20 = local_34;
            local_b4 = local_38;
            local_c8 = (((uint64_t)local_c8._4_4_ << 32) | (uint32_t)local_3c);
            local_50 = shared_ptr();
            uVar19 = (unsigned long)(int)local_40;
            piVar13 = &WSHAPE0[uVar19];
            iVar17 = *piVar13;
            piVar13 = &DECORXOF[uVar19];
            iVar18 = *piVar13;
            piVar13 = &DECORZOF[uVar19];
            uVar16 = ((world*)(((uint64_t)in_stack_0000000c << 32) | (uint32_t)arg6))
                         ->SetDecor(iVar20, local_b4, (int)local_c8, (int)local_80, local_70, local_50, iVar17, 0,
                                    iVar18 * iVar8, iVar8 * *piVar13, local_c0, (int)local_b0);
            break;
        case 6:
            lVar9 = this_00->WallType(local_34, local_38, local_3c);
            if (lVar9 == 0) {
                iVar8 = 8;
            } else {
                iVar8 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar9);
                psVar12 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar8);
                lVar9 = (*psVar12).operator->();
                iVar8 = *(int*)(lVar9 + 216) / 2;
            }
            local_70 = shared_ptr();
            lVar9 = local_60.operator->();
            if (*(int*)(lVar9 + 212) == -1) {
                lVar9 = local_60.operator->();
                cVar4 = ((lVar9 + 488))->empty();
                if (!cVar4)
                    goto LAB_100341bdd;
                iVar18 = local_60.operator->();
                configdecoder::LocType::GetModel((int)&local_50, iVar18, 4, local_40 + 4, local_34, iVar17);
                local_70 = local_50;
            } else {
            LAB_100341bdd:
                local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)4);
                local_a4 = local_40 + 4;
                lVar9 = local_60.operator->();
                lVar10 = local_60.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    &local_50, &local_74, (int*)&local_a0, (int*)&local_a4, &local_34, (int*)&local_38, &local_3c,
                    (bool*)(lVar9 + 212), (void**)(lVar10 + 560), (int*)local_98);
                local_70 = local_50;
            }
            iVar20 = local_34;
            iVar18 = local_3c;
            local_b4 = local_38;
            local_50 = shared_ptr();
            uVar16 = local_40;
            uVar19 = (unsigned long)(int)local_40;
            piVar13 = &DECORXOF2[uVar19];
            iVar17 = *piVar13;
            piVar13 = &DECORZOF2[uVar19];
            uVar16 = ((world*)(((uint64_t)in_stack_0000000c << 32) | (uint32_t)arg6))
                         ->SetDecor(iVar20, local_b4, iVar18, (int)local_80, local_70, local_50, 256, uVar16,
                                    iVar17 * iVar8, iVar8 * *piVar13, local_c0, (int)local_b0);
            break;
        case 7:
            local_70 = shared_ptr();
            uVar16 = local_40;
            lVar9 = local_60.operator->();
            uVar21 = uVar16 + 2 & 3;
            if (*(int*)(lVar9 + 212) == -1) {
                lVar9 = local_60.operator->();
                cVar4 = ((lVar9 + 488))->empty();
                if (!cVar4)
                    goto LAB_1003414a8;
                iVar8 = local_60.operator->();
                configdecoder::LocType::GetModel((int)&local_50, iVar8, 4, uVar21 + 4, local_34, iVar17);
                local_70 = local_50;
            } else {
            LAB_1003414a8:
                local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)4);
                local_a4 = uVar21 + 4;
                lVar9 = local_60.operator->();
                lVar10 = local_60.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    &local_50, &local_74, (int*)&local_a0, (int*)&local_a4, &local_34, (int*)&local_38, &local_3c,
                    (bool*)(lVar9 + 212), (void**)(lVar10 + 560), (int*)local_98);
                local_70 = local_50;
            }
            iVar8 = local_34;
            uVar21 = local_38;
            iVar17 = local_3c;
            local_50 = shared_ptr();
            uVar16 = ((world*)(((uint64_t)in_stack_0000000c << 32) | (uint32_t)arg6))
                         ->SetDecor(iVar8, uVar21, iVar17, (int)local_80, local_70, local_50, 256, uVar16 + 2 & 3, 0, 0,
                                    local_c0, (int)local_b0);
            break;
        case 8:
            lVar9 = this_00->WallType(local_34, local_38, local_3c);
            if (lVar9 == 0) {
                uVar16 = 8;
            } else {
                iVar8 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar9);
                psVar12 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar8);
                lVar9 = (*psVar12).operator->();
                uVar16 = *(int*)(lVar9 + 216) / 2;
            }
            local_70 = shared_ptr();
            local_50 = shared_ptr();
            uVar21 = local_40;
            lVar9 = local_60.operator->();
            uVar21 = uVar21 + 2 & 3;
            local_b4 = uVar16;
            if (*(int*)(lVar9 + 212) == -1) {
                lVar9 = local_60.operator->();
                cVar4 = ((lVar9 + 488))->empty();
                if (!cVar4)
                    goto LAB_100341e2a;
                iVar8 = local_60.operator->();
                configdecoder::LocType::GetModel((int)local_98, iVar8, 4, local_40 + 4, local_34, iVar17);
                local_70 = *local_98;
                iVar8 = local_60.operator->();
                configdecoder::LocType::GetModel((int)local_98, iVar8, 4, uVar21 | 4, local_34, iVar17);
                local_50 = *local_98;
            } else {
            LAB_100341e2a:
                local_a4 = 4;
                local_b8 = local_40 + 4;
                lVar9 = local_60.operator->();
                lVar10 = local_60.operator->();
                local_a0 = 0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (int*)local_98, &local_74, (int*)&local_a4, (int*)&local_b8, &local_34, (int*)&local_38, &local_3c,
                    (bool*)(lVar9 + 212), (void**)(lVar10 + 560), (int*)&local_a0);
                local_70 = *local_98;
                local_a4 = 4;
                local_b8 = uVar21 | 4;
                lVar9 = local_60.operator->();
                lVar10 = local_60.operator->();
                local_a0 = 0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    (int*)local_98, &local_74, (int*)&local_a4, (int*)&local_b8, &local_34, (int*)&local_38, &local_3c,
                    (bool*)(lVar9 + 212), (void**)(lVar10 + 560), (int*)&local_a0);
                local_50 = *local_98;
            }
            iVar8 = local_34;
            iVar17 = local_3c;
            uVar21 = local_40;
            local_c8 = (((uint64_t)local_c8._4_4_ << 32) | (uint32_t)local_38);
            uVar19 = (unsigned long)(int)local_40;
            piVar13 = &DECORXOF2[uVar19];
            uVar16 = local_b4;
            iVar18 = *piVar13 * local_b4;
            piVar13 = &DECORZOF2[uVar19];
            uVar16 = ((world*)(((uint64_t)in_stack_0000000c << 32) | (uint32_t)arg6))
                         ->SetDecor(iVar8, (int)local_c8, iVar17, (int)local_80, local_70, local_50, 256, uVar21,
                                    iVar18, uVar16 * *piVar13, local_c0, (int)local_b0);
            break;
        case 9:
            local_70 = shared_ptr();
            lVar9 = local_60.operator->();
            if (*(int*)(lVar9 + 212) == -1) {
                lVar9 = local_60.operator->();
                cVar4 = ((lVar9 + 488))->empty();
                if (!cVar4)
                    goto LAB_1003415be;
                iVar8 = local_60.operator->();
                configdecoder::LocType::GetModel((int)&local_50, iVar8, local_84, local_40, local_34, iVar17);
                local_70 = local_50;
                uVar1 = in_stack_0000000c;
            } else {
            LAB_1003415be:
                lVar9 = local_60.operator->();
                lVar10 = local_60.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int&, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
                    &local_50, &local_74, (int*)&local_84, (int*)&local_40, &local_34, (int*)&local_38, &local_3c,
                    (bool*)(lVar9 + 212), (void**)(lVar10 + 560), (int*)local_98);
                uVar1 = in_stack_0000000c;
                local_70 = local_50;
            }
            uVar16 = ((world*)(((uint64_t)uVar1 << 32) | (uint32_t)arg6))
                         ->AddScenery(local_34, local_38, local_3c, (int)local_80, 1, 1, local_70, 0, local_c0,
                                      (int)local_b0);
            uVar19 = (unsigned long)uVar16;
            lVar9 = local_60.operator->();
            uVar16 = local_38;
            iVar17 = local_3c;
            if ((*(int*)(lVar9 + 192) != 0) && (world != nullptr)) {
                lVar9 = local_60.operator->();
                world.AddLoc(uVar16, iVar17, (int)local_c8, (int)local_d0, *(bool*)(lVar9 + 196));
            }
            lVar9 = local_60.operator->();
            iVar8 = local_34;
            uVar16 = local_38;
            iVar17 = local_3c;
            if (*(int*)(lVar9 + 216) != 16) {
                lVar9 = local_60.operator->();
                ((world*)(((uint64_t)in_stack_0000000c << 32) | (uint32_t)arg6))
                    ->MoveDecor(iVar8, uVar16, iVar17, *(int*)(lVar9 + 216));
            }
            goto LAB_100342014;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "client/clientbuild.cpp",
                            1259, "Invalid shape while loading loc");
        }
        uVar19 = (unsigned long)uVar16;
    LAB_10034200b:
    LAB_100342014:
        return uVar19;
    }

    // 0x100342a30
    ClientBuild* ClientBuild::LoadLocationsRegion(PacketJ<Array<unsigned char>>& packetJ, int arg2, int arg3, int arg4,
                                                  int arg5, int arg6, int arg7, int arg8, dash3d::world& world,
                                                  eastl::fixed_vector<movement::CollisionMap, 4ul>& collisionMaps,
                                                  int arg11) {
        schar sVar1;
        unsigned int uVar4;
        unsigned int uVar5;
        int iVar6;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        long lVar7;
        world* world_00;
        unsigned int uVar8;
        unsigned int arg2_00;
        uint32_t in_stack_ffffffffffffff5c;
        int in_stack_ffffffffffffff60;
        shared_ptr<RSevenDebugPresetProvider> local_90;
        uint64_t local_80;
        LocLayer local_74;
        int local_5c;
        unsigned long local_50;
        int local_48;
        unsigned int local_44;
        int local_38;
        shared_ptr<configdecoder::LocType> local_31;

        new (this) eastl::vector<LocInfo, BucketAllocatorEASTL>();
        int local_70 = arg6 + 8;
        int local_6c = arg7 + 8;
        int local_40 = -1;
        int local_64 = arg5;
        do {
            local_5c = packetJ.gSmartsExtend();
            if (local_5c != 0) {
                local_40 = local_40 + local_5c;
                local_50 = 0;
                do {
                    local_80 = packetJ.gSmarts();
                    if ((int)local_80 != 0) {
                        uVar4 = packetJ.g1();
                        uVar8 = ((int)local_50 + (int)local_80) - 1;
                        local_50 = (unsigned long)uVar8;
                        if ((int)uVar8 >> 12 == arg5) {
                            uVar5 = uVar8 >> 6 & 63;
                            if ((((arg6 <= (int)uVar5) && ((int)uVar5 < local_70)) && (arg7 <= (int)(uVar8 & 63))) &&
                                ((int)(uVar8 & 63) < local_6c)) {
                                groundDecor = (shared_ptr<dash3d::GroundDecor>*)configdecoder::LocType::List(local_40);
                                local_90 = shared_ptr(groundDecor);
                                lVar7 = local_90.operator->();
                                iVar6 = *(int*)(lVar7 + 184);
                                lVar7 = local_90.operator->();
                                uVar5 = uVar4 & 3;
                                uVar8 = uVar8 >> 6 & 7;
                                arg2_00 = (unsigned int)local_50 & 7;
                                local_38 =
                                    util::RegionRotate::DX(uVar8, arg2_00, arg8, iVar6, *(int*)(lVar7 + 188), uVar5);
                                local_38 = local_38 + arg3;
                                lVar7 = local_90.operator->();
                                iVar6 = *(int*)(lVar7 + 184);
                                lVar7 = local_90.operator->();
                                local_48 =
                                    util::RegionRotate::DZ(uVar8, arg2_00, arg8, iVar6, *(int*)(lVar7 + 188), uVar5);
                                arg5 = local_64;
                                local_48 = local_48 + arg4;
                                if (((local_38 < 103) && (0 < local_38)) && ((0 < local_48 && (local_48 < 103)))) {
                                    sVar1 =
                                        Read3DArray<signed char>((Array<signed char>*)&m_mapl, 1, local_38, local_48);
                                    iVar6 = (int)((char)(sVar1 << 6) >> 7) + (unsigned int)arg2;
                                    if (iVar6 < 0) {
                                        world_00 = nullptr;
                                    } else {
                                        world_00 = &collisionMaps[(long)iVar6];
                                    }
                                    uVar4 = (uVar4 & 255) >> 2;
                                    if (AddLoc((ClientBuild*)(unsigned long)(unsigned int)arg2, local_38, local_48,
                                               local_40, uVar5 + arg8 & 3, uVar4, (int)world, world_00,
                                               (CollisionMap*)(((uint64_t)in_stack_ffffffffffffff5c << 32) |
                                                               (uint32_t)arg11),
                                               in_stack_ffffffffffffff60) != '\0') {
                                        local_44 = (unsigned int)arg2;
                                        iVar6 = 1;
                                        if (((Read3DArray<signed char>((Array<signed char>*)&m_mapl, 1, local_38,
                                                                       local_48) &
                                              2) != 0) &&
                                            (0 < (int)local_44)) {
                                            local_44 = local_44 - 1;
                                        }
                                        local_74 = uVar5 + arg8;
                                        local_31 = (shared_ptr<configdecoder::LocType>)((LocShape*)(unsigned long)uVar4)
                                                       ->ToLayer(iVar6);
                                        eastl::vector<LocInfo, BucketAllocatorEASTL>::emplace_back<
                                            int&, int&, int&, int, LocLayer, shared_ptr<configdecoder::LocType>&>(
                                            *this, local_44, local_38, local_48, local_74, local_31);
                                    }
                                }
                            }
                        }
                    }
                } while ((int)local_80 != 0);
            }
        } while (local_5c != 0);
        return this;
    }

    // 0x1003431a0
    void ClientBuild::FinishBuild(dash3d::world& world, eastl::fixed_vector<movement::CollisionMap, 4ul>& collisionMaps,
                                  bool arg3) {
        unsigned int uVar1;
        uint8_t bVar2;
        schar sVar3;
        schar sVar4;
        schar sVar5;
        schar sVar6;
        schar sVar7;
        unsigned short uVar8;
        unsigned short uVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        int arg7;
        int arg8;
        int arg9;
        int arg10;
        unsigned int uVar13;
        int iVar14;
        int iVar15;
        int arg13;
        int arg14;
        int iVar16;
        int iVar17;
        int iVar18;
        int iVar19;
        unsigned int uVar20;
        unsigned int uVar21;
        unsigned int uVar22;
        int* piVar23;
        uint32_t* puVar24;
        long* plVar25;
        int* piVar26;
        int iVar27;
        long lVar28;
        long lVar29;
        unsigned int arg3_00;
        int iVar30;
        int iVar31;
        unsigned int uVar32;
        unsigned long uVar33;
        unsigned long uVar34;
        int iVar36;
        long lVar37;
        int iVar38;
        unsigned int uVar39;
        int iVar40;
        int iVar41;
        bool bVar42;
        double dVar44;
        uint32_t* local_e8;
        int local_bc;
        int local_a0;
        int local_9c;
        int local_64;

        int iVar35 = 0;
        do {
            iVar38 = 0;
            do {
                iVar30 = 0;
                do {
                    bVar2 = Read3DArray<signed char>((Array<signed char>*)&m_mapl, iVar35, iVar38, iVar30);
                    if ((bVar2 & 1) != 0) {
                        sVar3 = Read3DArray<signed char>((Array<signed char>*)&m_mapl, 1, iVar38, iVar30);
                        iVar10 = ((char)(sVar3 << 6) >> 7) + iVar35;
                        if (-1 < iVar10) {
                            ((CollisionMap*)collisionMaps[(long)iVar10])->BlockGround(iVar38, iVar30);
                        }
                    }
                    iVar30 = iVar30 + 1;
                } while (iVar30 != 104);
                iVar38 = iVar38 + 1;
            } while (iVar38 != 104);
            iVar35 = iVar35 + 1;
        } while (iVar35 != 4);
        if (m_hueOff == 1000) {
            iVar35 = ((Random*)&jag::math::g_Rand)->Rand(17);
            m_hueOff = iVar35 - 8;
            iVar35 = ((Random*)&jag::math::g_Rand)->Rand(33);
            m_ligOff = iVar35 - 16;
        }
        iVar35 = ((Random*)&jag::math::g_Rand)->Rand(5);
        m_hueOff = m_hueOff + iVar35 - 2;
        iVar35 = -8;
        if (m_hueOff < -8) {
        LAB_1003432bb:
            m_hueOff = iVar35;
        } else {
            iVar35 = 8;
            if (8 < m_hueOff)
                goto LAB_1003432bb;
        }
        iVar35 = ((Random*)&jag::math::g_Rand)->Rand(5);
        m_ligOff = m_ligOff + iVar35 - 2;
        iVar35 = -16;
        if (-17 < m_ligOff) {
            iVar35 = 16;
            if (m_ligOff < 17)
                goto LAB_1003432fd;
        }
        m_ligOff = iVar35;
    LAB_1003432fd:
        double dVar43 = (double)sqrt<int>(5100);
        iVar35 = 0;
        do {
            piVar23 = &reinterpret_cast<const uint64_t*>(&m_lightmap)[53];
            lVar29 = 1;
            do {
                lVar28 = lVar29 + 1;
                lVar37 = 0;
                piVar26 = piVar23;
                do {
                    iVar10 = 82;
                    iVar38 = (int)lVar37;
                    iVar30 = (int)lVar29;
                    if (arg3) {
                        iVar10 = Read3DArray<int>((Array<int>*)&m_groundh, iVar35, iVar38 + 2, iVar30);
                        iVar11 = Read3DArray<int>((Array<int>*)&m_groundh, iVar35, iVar38, iVar30);
                        iVar10 = iVar10 - iVar11;
                        iVar11 = Read3DArray<int>((Array<int>*)&m_groundh, iVar35, iVar38 + 1, (int)lVar28);
                        iVar12 = Read3DArray<int>((Array<int>*)&m_groundh, iVar35, iVar38 + 1, iVar30 - 1);
                        iVar11 = iVar11 - iVar12;
                        dVar44 = (double)sqrt<int>(iVar10 * iVar10 + iVar11 * iVar11 + 65536);
                        iVar12 = (int)dVar44;
                        iVar10 = (((iVar11 * 256) / iVar12 + (iVar10 * 256) / iVar12) * -50 +
                                  (int)(65536 / (long)iVar12) * -10) /
                                     ((int)dVar43 * 768 >> 8) +
                                 96;
                    }
                    if ((*PTR_m_applyBlobShadows_100ee6a78 != '\0') || (dash3d::g_usingRSeven == '\0')) {
                        iVar11 = iVar38 + 1;
                        sVar3 = Read3DArray<signed char>((Array<signed char>*)&m_shadow, iVar35, iVar38, iVar30);
                        sVar4 = Read3DArray<signed char>((Array<signed char>*)&m_shadow, iVar35, iVar38 + 2, iVar30);
                        sVar5 = Read3DArray<signed char>((Array<signed char>*)&m_shadow, iVar35, iVar11, iVar30 - 1);
                        sVar6 = Read3DArray<signed char>((Array<signed char>*)&m_shadow, iVar35, iVar11, (int)lVar28);
                        sVar7 = Read3DArray<signed char>((Array<signed char>*)&m_shadow, iVar35, iVar11, iVar30);
                        iVar10 =
                            ((iVar10 + (char)-(sVar6 >> 3)) - (int)(char)((sVar5 >> 2) + (sVar4 >> 3) + (sVar3 >> 2))) +
                            (int)(char)-(sVar7 >> 1);
                    }
                    *piVar26 = iVar10;
                    lVar37 = lVar37 + 1;
                    piVar26 = piVar26 + 105;
                } while (lVar37 != 102);
                piVar23 = piVar23 + 1;
                lVar29 = lVar28;
            } while (lVar28 != 103);
            uVar33 = 0;
            do {
                puVar24 = &m_huetot[uVar33];
                *puVar24 = 0;
                puVar24 = &m_sattot[uVar33];
                *puVar24 = 0;
                puVar24 = &m_ligtot[uVar33];
                *puVar24 = 0;
                puVar24 = &m_comtot[uVar33];
                *puVar24 = 0;
                puVar24 = &m_tot[uVar33];
                *puVar24 = 0;
                uVar33 = uVar33 + 1;
            } while (uVar33 != 104);
            lVar29 = -5;
            local_e8 = &reinterpret_cast<const uint64_t*>(&m_pvisBackingDirty)[1205450];
            do {
                iVar38 = (int)lVar29;
                uVar33 = 0;
                do {
                    if (lVar29 + 5U < 104) {
                        uVar8 = Read3DArray<short>((Array<short>*)&m_floort1, iVar35, (int)(lVar29 + 5U), (int)uVar33);
                        if ((uVar8 & 2047) != 0) {
                            lVar28 = configdecoder::FluType::List((uVar8 & 2047) - 1);
                            iVar30 = *(int*)(lVar28 + 4);
                            piVar23 = (int*)m_huetot[uVar33];
                            *piVar23 = *piVar23 + iVar30;
                            iVar30 = *(int*)(lVar28 + 8);
                            piVar23 = (int*)m_sattot[uVar33];
                            *piVar23 = *piVar23 + iVar30;
                            iVar30 = *(int*)(lVar28 + 12);
                            piVar23 = (int*)m_ligtot[uVar33];
                            *piVar23 = *piVar23 + iVar30;
                            iVar30 = *(int*)(lVar28 + 16);
                            piVar23 = (int*)m_comtot[uVar33];
                            *piVar23 = *piVar23 + iVar30;
                            piVar23 = &m_tot[uVar33];
                            *piVar23 = *piVar23 + 1;
                        }
                    }
                    if (iVar38 - 5U < 104) {
                        uVar8 = Read3DArray<short>((Array<short>*)&m_floort1, iVar35, iVar38 - 5U, (int)uVar33);
                        if ((uVar8 & 2047) != 0) {
                            lVar28 = configdecoder::FluType::List((uVar8 & 2047) - 1);
                            iVar30 = *(int*)(lVar28 + 4);
                            piVar23 = (int*)m_huetot[uVar33];
                            *piVar23 = *piVar23 - iVar30;
                            iVar30 = *(int*)(lVar28 + 8);
                            piVar23 = (int*)m_sattot[uVar33];
                            *piVar23 = *piVar23 - iVar30;
                            iVar30 = *(int*)(lVar28 + 12);
                            piVar23 = (int*)m_ligtot[uVar33];
                            *piVar23 = *piVar23 - iVar30;
                            iVar30 = *(int*)(lVar28 + 16);
                            piVar23 = (int*)m_comtot[uVar33];
                            *piVar23 = *piVar23 - iVar30;
                            piVar23 = &m_tot[uVar33];
                            *piVar23 = *piVar23 - 1;
                        }
                    }
                    uVar33 = uVar33 + 1;
                } while (uVar33 != 104);
                if (iVar38 - 1U < 102) {
                    uVar33 = 0;
                    iVar12 = 0;
                    iVar40 = 0;
                    iVar30 = 0;
                    iVar10 = 0;
                    iVar11 = 0;
                    do {
                        if (uVar33 < 104) {
                            piVar23 = (int*)m_huetot[uVar33];
                            iVar12 = iVar12 + *piVar23;
                            piVar23 = (int*)m_sattot[uVar33];
                            iVar40 = iVar40 + *piVar23;
                            piVar23 = (int*)m_ligtot[uVar33];
                            iVar30 = iVar30 + *piVar23;
                            piVar23 = (int*)m_comtot[uVar33];
                            iVar10 = iVar10 + *piVar23;
                            piVar23 = &m_tot[uVar33];
                            iVar11 = iVar11 + *piVar23;
                        }
                        uVar34 = uVar33 - 10;
                        if ((unsigned int)uVar34 < 104) {
                            piVar23 = (int*)m_huetot[uVar34];
                            iVar12 = iVar12 - *piVar23;
                            piVar23 = (int*)m_sattot[uVar34];
                            iVar40 = iVar40 - *piVar23;
                            piVar23 = (int*)m_ligtot[uVar34];
                            iVar30 = iVar30 - *piVar23;
                            piVar23 = (int*)m_comtot[uVar34];
                            iVar10 = iVar10 - *piVar23;
                            piVar23 = &m_tot[uVar34];
                            iVar11 = iVar11 - *piVar23;
                        }
                        iVar16 = (int)uVar33;
                        if (iVar16 - 6U < 102) {
                            iVar36 = iVar16 - 5;
                            if (iVar35 < minusedlevel) {
                                minusedlevel = iVar35;
                            }
                            uVar8 = Read3DArray<short>((Array<short>*)&m_floort1, iVar35, iVar38, iVar36);
                            uVar9 = Read3DArray<short>((Array<short>*)&m_floort2, iVar35, iVar38, iVar36);
                            if (((uVar8 | uVar9) & 2047) != 0) {
                                arg7 = Read3DArray<int>((Array<int>*)&m_groundh, iVar35, iVar38, iVar36);
                                arg8 = Read3DArray<int>((Array<int>*)&m_groundh, iVar35, iVar38 + 1, iVar36);
                                arg9 = Read3DArray<int>((Array<int>*)&m_groundh, iVar35, iVar38 + 1, iVar16 - 4);
                                arg10 = Read3DArray<int>((Array<int>*)&m_groundh, iVar35, iVar38, iVar16 - 4);
                                iVar16 = local_e8[uVar33 - 106];
                                iVar19 = local_e8[uVar33 - 105];
                                iVar17 = local_e8[uVar33 - 1];
                                iVar18 = local_e8[uVar33];
                                if ((uVar8 & 2047) == 0) {
                                    iVar31 = -1;
                                    local_64 = -1;
                                } else {
                                    iVar31 = (iVar12 << 8) / iVar10;
                                    local_64 = GetTable(iVar31, iVar40 / iVar11, iVar30 / iVar11);
                                    iVar41 = iVar30 / iVar11 + m_ligOff;
                                    if (254 < iVar41) {
                                        iVar41 = 255;
                                    }
                                    if (iVar41 < 0) {
                                        iVar41 = 0;
                                    }
                                    iVar31 = GetTable(iVar31 + m_hueOff & 255, iVar40 / iVar11, iVar41);
                                }
                                if (iVar35 != 0) {
                                    bVar42 = true;
                                    if ((uVar8 & 2047) == 0) {
                                        sVar3 = Read3DArray<signed char>((Array<signed char>*)&m_floors, iVar35, iVar38,
                                                                         iVar36);
                                        bVar42 = sVar3 == '\0';
                                    }
                                    if ((uVar9 & 2047) != 0) {
                                        piVar23 = configdecoder::FloType::List((uVar9 & 2047) - 1);
                                        if ((char)piVar23[2] == '\0') {
                                            bVar42 = false;
                                        }
                                    }
                                    if ((((bVar42) && (arg7 == arg8)) && (arg7 == arg9)) && (arg7 == arg10)) {
                                        uVar13 = Read3DArray<int>((Array<int>*)&m_mapo, iVar35, iVar38, iVar36);
                                        Write3DArray<int>((Array<int>*)&m_mapo, iVar35, iVar38, iVar36, uVar13 | 2340);
                                    }
                                }
                                if (iVar31 == -1) {
                                    iVar31 = -16777216;
                                } else {
                                    uVar34 = 96;
                                    uVar13 = GetUCol(iVar31, 96);
                                    piVar23 = (int*)(*((array<int, 65536ul>*)(unsigned long)uVar13))[uVar34];
                                    iVar31 = *piVar23;
                                }
                                if ((uVar9 & 2047) == 0) {
                                    iVar16 = GetUCol(local_64, iVar16);
                                    iVar17 = GetUCol(local_64, iVar17);
                                    iVar18 = GetUCol(local_64, iVar18);
                                    iVar19 = GetUCol(local_64, iVar19);
                                    world.SetGround(iVar35, iVar38, iVar36, 0, 0, -1, arg7, arg8, arg9, arg10, iVar16,
                                                    iVar17, iVar18, iVar19, 0, 0, 0, 0, iVar31, -16777216);
                                } else {
                                    sVar3 = Read3DArray<signed char>((Array<signed char>*)&m_floors, iVar35, iVar38,
                                                                     iVar36);
                                    sVar4 = Read3DArray<signed char>((Array<signed char>*)&m_floorr, iVar35, iVar38,
                                                                     iVar36);
                                    piVar23 = configdecoder::FloType::List((uVar9 & 2047) - 1);
                                    iVar41 = piVar23[1];
                                    if (iVar41 < 0) {
                                        if (*piVar23 == 16711935) {
                                            local_bc = -2;
                                            iVar41 = -1;
                                            iVar14 = -2;
                                        } else {
                                            iVar14 = piVar23[4];
                                            iVar27 = piVar23[5];
                                            iVar15 = piVar23[6];
                                            local_bc = GetTable(iVar14, iVar27, iVar15);
                                            iVar15 = iVar15 + m_ligOff;
                                            if (254 < iVar15) {
                                                iVar15 = 255;
                                            }
                                            if (iVar15 < 0) {
                                                iVar15 = 0;
                                            }
                                            iVar14 = GetTable(iVar14 + m_hueOff & 255, iVar27, iVar15);
                                        }
                                    } else {
                                        plVar25 =
                                            (long*)(*((shared_ptr<
                                                        dash3d::TextureProvider>*)&dash3d::Pix3D::m_textureProvider))
                                                .operator->();
                                        iVar14 = (**(void (**)(...))(*plVar25 + 24))(plVar25, iVar41);
                                        local_bc = -1;
                                    }
                                    iVar27 = -16777216;
                                    if (iVar14 != -2) {
                                        uVar34 = 96;
                                        iVar14 = GetOCol(iVar14, 96);
                                        piVar26 = (int*)(*((array<int, 65536ul>*)(long)iVar14))[uVar34];
                                        iVar27 = *piVar26;
                                    }
                                    if (piVar23[3] != -1) {
                                        iVar14 = m_ligOff + piVar23[9];
                                        if (254 < iVar14) {
                                            iVar14 = 255;
                                        }
                                        if (iVar14 < 0) {
                                            iVar14 = 0;
                                        }
                                        iVar14 = GetTable(m_hueOff + piVar23[7] & 255, piVar23[8], iVar14);
                                        uVar34 = 96;
                                        iVar14 = GetOCol(iVar14, 96);
                                        piVar23 = (int*)(*((array<int, 65536ul>*)(long)iVar14))[uVar34];
                                        iVar27 = *piVar23;
                                    }
                                    iVar14 = GetUCol(local_64, iVar16);
                                    iVar15 = GetUCol(local_64, iVar17);
                                    arg13 = GetUCol(local_64, iVar18);
                                    arg14 = GetUCol(local_64, iVar19);
                                    iVar16 = GetOCol(local_bc, iVar16);
                                    iVar17 = GetOCol(local_bc, iVar17);
                                    iVar18 = GetOCol(local_bc, iVar18);
                                    iVar19 = GetOCol(local_bc, iVar19);
                                    world.SetGround(iVar35, iVar38, iVar36, sVar3 + 1, (int)sVar4, iVar41, arg7, arg8,
                                                    arg9, arg10, iVar14, iVar15, arg13, arg14, iVar16, iVar17, iVar18,
                                                    iVar19, iVar31, iVar27);
                                }
                            }
                        }
                        uVar33 = uVar33 + 1;
                    } while (uVar33 != 114);
                }
                lVar29 = lVar29 + 1;
                local_e8 = local_e8 + 105;
            } while (lVar29 != 109);
            iVar38 = 1;
            do {
                iVar30 = 1;
                do {
                    iVar10 = VisLevel(iVar35, iVar30, iVar38);
                    world.SetLayer(iVar35, iVar30, iVar38, iVar10);
                    iVar30 = iVar30 + 1;
                } while (iVar30 != 103);
                iVar38 = iVar38 + 1;
            } while (iVar38 != 103);
            iVar35 = iVar35 + 1;
        } while (iVar35 != 4);
        world.ShareLight(-50, -10, -50);
        iVar35 = 0;
        do {
            iVar38 = 0;
            do {
                bVar2 = Read3DArray<signed char>((Array<signed char>*)&m_mapl, 1, iVar35, iVar38);
                if ((bVar2 & 2) != 0) {
                    world.PushDown(iVar35, iVar38);
                }
                iVar38 = iVar38 + 1;
            } while (iVar38 != 104);
            iVar35 = iVar35 + 1;
        } while (iVar35 != 104);
        unsigned int local_80 = 2;
        unsigned int local_88 = 4;
        iVar35 = 0;
        local_64 = 1;
        unsigned int local_78 = 1;
        do {
            uVar32 = local_88 * 8;
            uVar13 = local_80 * 8;
            uVar1 = local_78 * 8;
            if (iVar35 == 0) {
                uVar32 = local_88;
                uVar13 = local_80;
                uVar1 = local_78;
            }
            iVar38 = 0;
            do {
                iVar10 = 0;
                local_9c = 1;
                iVar30 = -1;
                do {
                    iVar11 = -1;
                    local_a0 = 1;
                    arg3_00 = 0;
                    do {
                        uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar38, arg3_00, iVar10);
                        if ((uVar1 & uVar20) != 0) {
                            iVar12 = local_9c;
                            do {
                                iVar40 = iVar12 - 1;
                                if (iVar40 < 1) {
                                    iVar40 = 0;
                                    break;
                                }
                                uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar38, arg3_00, iVar12 - 2);
                                iVar12 = iVar40;
                            } while ((uVar1 & uVar20) != 0);
                            iVar12 = iVar30;
                            do {
                                if (iVar12 == 103) {
                                    iVar12 = 104;
                                    break;
                                }
                                uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar38, arg3_00, iVar12 + 2);
                                iVar12 = iVar12 + 1;
                            } while ((uVar1 & uVar20) != 0);
                            iVar16 = iVar38;
                            if (iVar38 != 0) {
                                iVar36 = iVar12;
                                if (iVar12 < iVar40) {
                                    iVar36 = iVar40;
                                }
                                do {
                                    iVar17 = iVar16 - 1;
                                    iVar19 = iVar17;
                                    bVar42 = iVar12 < iVar40;
                                    if (iVar40 <= iVar12) {
                                        uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar17, arg3_00, iVar40);
                                        iVar18 = iVar40;
                                        while (iVar19 = iVar16, (uVar1 & uVar20) != 0) {
                                            bVar42 = iVar12 <= iVar18;
                                            iVar19 = iVar17;
                                            if (iVar36 == iVar18)
                                                break;
                                            iVar18 = iVar18 + 1;
                                            uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar17, arg3_00, iVar18);
                                        }
                                    }
                                    iVar16 = iVar19;
                                } while ((bVar42) && (0 < iVar16));
                            }
                            iVar36 = iVar12;
                            if (iVar12 < iVar40) {
                                iVar36 = iVar40;
                            }
                            iVar19 = iVar38;
                            do {
                                if (iVar35 <= iVar19)
                                    break;
                                iVar17 = iVar19 + 1;
                                bVar42 = iVar12 < iVar40;
                                if (iVar12 < iVar40) {
                                    iVar19 = iVar17;
                                } else {
                                    uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar17, arg3_00, iVar40);
                                    iVar18 = iVar40;
                                    if ((uVar1 & uVar20) == 0) {
                                    } else {
                                        do {
                                            bVar42 = iVar12 <= iVar18;
                                            if (iVar36 == iVar18) {
                                                iVar19 = iVar17;
                                                goto LAB_100344294;
                                            }
                                            uVar20 =
                                                Read3DArray<int>((Array<int>*)&m_mapo, iVar17, arg3_00, iVar18 + 1);
                                            iVar18 = iVar18 + 1;
                                        } while ((uVar1 & uVar20) != 0);
                                    }
                                }
                            LAB_100344294:
                            } while (bVar42);
                            if (7 < ((iVar12 - iVar40) + 1) * ((iVar19 - iVar16) + 1)) {
                                iVar17 = Read3DArray<int>((Array<int>*)&m_groundh, iVar19, arg3_00, iVar40);
                                iVar18 = Read3DArray<int>((Array<int>*)&m_groundh, iVar16, arg3_00, iVar40);
                                world.SetOcclude(iVar35, 1, arg3_00 << 7, arg3_00 << 7, iVar40 << 7, iVar12 * 128 + 128,
                                                 iVar17 - 240, iVar18);
                                if (iVar16 <= iVar19) {
                                    do {
                                        iVar17 = iVar40;
                                        if (iVar40 <= iVar12) {
                                            do {
                                                uVar20 =
                                                    Read3DArray<int>((Array<int>*)&m_mapo, iVar16, arg3_00, iVar17);
                                                Write3DArray<int>((Array<int>*)&m_mapo, iVar16, arg3_00, iVar17,
                                                                  uVar20 & ~uVar1);
                                                iVar17 = iVar17 + 1;
                                            } while (iVar36 + 1 != iVar17);
                                        }
                                        bVar42 = iVar16 != iVar19;
                                        iVar16 = iVar16 + 1;
                                    } while (bVar42);
                                }
                            }
                        }
                        uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar38, arg3_00, iVar10);
                        if ((uVar13 & uVar20) != 0) {
                            iVar12 = local_a0;
                            do {
                                iVar40 = iVar12 - 1;
                                if (iVar40 < 1) {
                                    iVar40 = 0;
                                    break;
                                }
                                uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar38, iVar12 - 2, iVar10);
                                iVar12 = iVar40;
                            } while ((uVar13 & uVar20) != 0);
                            iVar12 = iVar11;
                            do {
                                if (iVar12 == 103) {
                                    iVar12 = 104;
                                    break;
                                }
                                uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar38, iVar12 + 2, iVar10);
                                iVar12 = iVar12 + 1;
                            } while ((uVar13 & uVar20) != 0);
                            iVar16 = iVar38;
                            if (iVar38 != 0) {
                                iVar36 = iVar12;
                                if (iVar12 < iVar40) {
                                    iVar36 = iVar40;
                                }
                                do {
                                    iVar17 = iVar16 - 1;
                                    iVar19 = iVar17;
                                    bVar42 = iVar12 < iVar40;
                                    if (iVar40 <= iVar12) {
                                        uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar17, iVar40, iVar10);
                                        iVar18 = iVar40;
                                        while (iVar19 = iVar16, (uVar13 & uVar20) != 0) {
                                            bVar42 = iVar12 <= iVar18;
                                            iVar19 = iVar17;
                                            if (iVar36 == iVar18)
                                                break;
                                            iVar18 = iVar18 + 1;
                                            uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar17, iVar18, iVar10);
                                        }
                                    }
                                    iVar16 = iVar19;
                                } while ((bVar42) && (0 < iVar16));
                            }
                            iVar36 = iVar12;
                            if (iVar12 < iVar40) {
                                iVar36 = iVar40;
                            }
                            iVar19 = iVar38;
                            do {
                                if (iVar35 <= iVar19)
                                    break;
                                iVar17 = iVar19 + 1;
                                bVar42 = iVar12 < iVar40;
                                if (iVar12 < iVar40) {
                                    iVar19 = iVar17;
                                } else {
                                    uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar17, iVar40, iVar10);
                                    if ((uVar13 & uVar20) == 0) {
                                    } else {
                                        iVar18 = iVar40;
                                        do {
                                            bVar42 = iVar12 <= iVar18;
                                            if (iVar36 == iVar18) {
                                                iVar19 = iVar17;
                                                goto LAB_100344587;
                                            }
                                            iVar18 = iVar18 + 1;
                                            uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar17, iVar18, iVar10);
                                        } while ((uVar13 & uVar20) != 0);
                                    }
                                }
                            LAB_100344587:
                            } while (bVar42);
                            if (7 < ((iVar12 - iVar40) + 1) * ((iVar19 - iVar16) + 1)) {
                                iVar17 = Read3DArray<int>((Array<int>*)&m_groundh, iVar19, iVar40, iVar10);
                                iVar18 = Read3DArray<int>((Array<int>*)&m_groundh, iVar16, iVar40, iVar10);
                                world.SetOcclude(iVar35, 2, iVar40 << 7, iVar12 * 128 + 128, iVar10 << 7, iVar10 << 7,
                                                 iVar17 - 240, iVar18);
                                if (iVar16 <= iVar19) {
                                    do {
                                        iVar17 = iVar40;
                                        if (iVar40 <= iVar12) {
                                            do {
                                                uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar16, iVar17, iVar10);
                                                Write3DArray<int>((Array<int>*)&m_mapo, iVar16, iVar17, iVar10,
                                                                  uVar20 & ~uVar13);
                                                iVar17 = iVar17 + 1;
                                            } while (iVar36 + 1 != iVar17);
                                        }
                                        bVar42 = iVar16 != iVar19;
                                        iVar16 = iVar16 + 1;
                                    } while (bVar42);
                                }
                            }
                        }
                        uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar38, arg3_00, iVar10);
                        if ((uVar32 & uVar20) != 0) {
                            iVar12 = local_9c;
                            do {
                                iVar40 = iVar12 - 1;
                                if (iVar40 < 1) {
                                    iVar40 = 0;
                                    break;
                                }
                                uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar38, arg3_00, iVar12 - 2);
                                iVar12 = iVar40;
                            } while ((uVar32 & uVar20) != 0);
                            iVar12 = iVar30;
                            do {
                                if (iVar12 == 103) {
                                    iVar12 = 104;
                                    break;
                                }
                                uVar20 = Read3DArray<int>((Array<int>*)&m_mapo, iVar38, arg3_00, iVar12 + 2);
                                iVar12 = iVar12 + 1;
                            } while ((uVar32 & uVar20) != 0);
                            uVar20 = arg3_00;
                            if (arg3_00 != 0) {
                                iVar16 = iVar12;
                                if (iVar12 < iVar40) {
                                    iVar16 = iVar40;
                                }
                                do {
                                    uVar39 = uVar20 - 1;
                                    uVar21 = uVar39;
                                    bVar42 = iVar12 < iVar40;
                                    if (iVar40 <= iVar12) {
                                        uVar22 = Read3DArray<int>((Array<int>*)&m_mapo, iVar38, uVar39, iVar40);
                                        iVar36 = iVar40;
                                        while (uVar21 = uVar20, (uVar32 & uVar22) != 0) {
                                            bVar42 = iVar12 <= iVar36;
                                            uVar21 = uVar39;
                                            if (iVar16 == iVar36)
                                                break;
                                            iVar36 = iVar36 + 1;
                                            uVar22 = Read3DArray<int>((Array<int>*)&m_mapo, iVar38, uVar39, iVar36);
                                        }
                                    }
                                    uVar20 = uVar21;
                                } while ((bVar42) && (0 < (int)uVar20));
                            }
                            uVar21 = 104;
                            if (arg3_00 < 104) {
                                iVar16 = iVar12;
                                if (iVar12 < iVar40) {
                                    iVar16 = iVar40;
                                }
                                uVar21 = arg3_00;
                                do {
                                    uVar39 = uVar21 + 1;
                                    bVar42 = iVar12 < iVar40;
                                    if (iVar40 <= iVar12) {
                                        uVar22 = Read3DArray<int>((Array<int>*)&m_mapo, iVar38, uVar39, iVar40);
                                        iVar36 = iVar40;
                                        while ((uVar32 & uVar22) != 0) {
                                            bVar42 = iVar12 <= iVar36;
                                            if (iVar16 == iVar36)
                                                goto joined_r0x00010034494c;
                                            iVar36 = iVar36 + 1;
                                            uVar22 = Read3DArray<int>((Array<int>*)&m_mapo, iVar38, uVar39, iVar36);
                                        }
                                        uVar39 = uVar21;
                                    }
                                joined_r0x00010034494c:
                                    uVar21 = uVar39;
                                } while ((bVar42) && ((int)uVar21 < 104));
                            }
                            if (3 < (int)(((iVar12 - iVar40) + 1) * ((uVar21 - uVar20) + 1))) {
                                iVar16 = Read3DArray<int>((Array<int>*)&m_groundh, iVar38, uVar20, iVar40);
                                world.SetOcclude(iVar35, 4, uVar20 << 7, uVar21 * 128 + 128, iVar40 << 7,
                                                 iVar12 * 128 + 128, iVar16, iVar16);
                                if ((int)uVar20 <= (int)uVar21) {
                                    iVar16 = iVar12;
                                    if (iVar12 < iVar40) {
                                        iVar16 = iVar40;
                                    }
                                    do {
                                        iVar36 = iVar40;
                                        if (iVar40 <= iVar12) {
                                            do {
                                                uVar39 = Read3DArray<int>((Array<int>*)&m_mapo, iVar38, uVar20, iVar36);
                                                Write3DArray<int>((Array<int>*)&m_mapo, iVar38, uVar20, iVar36,
                                                                  uVar39 & ~uVar32);
                                                iVar36 = iVar36 + 1;
                                            } while (iVar16 + 1 != iVar36);
                                        }
                                        bVar42 = uVar20 != uVar21;
                                        uVar20 = uVar20 + 1;
                                    } while (bVar42);
                                }
                            }
                        }
                        arg3_00 = arg3_00 + 1;
                        local_a0 = local_a0 + 1;
                        iVar11 = iVar11 + 1;
                    } while (arg3_00 != 105);
                    iVar10 = iVar10 + 1;
                    local_9c = local_9c + 1;
                    iVar30 = iVar30 + 1;
                } while (iVar10 != 105);
                iVar38 = iVar38 + 1;
            } while (iVar38 != local_64);
            iVar35 = iVar35 + 1;
            local_64 = local_64 + 1;
            local_78 = uVar1;
            local_80 = uVar13;
            local_88 = uVar32;
            if (iVar35 == 4) {
                if (dash3d::g_usingRSeven != '\0') {
                    world.Render(dash3d::world::m_worldRenderer, 0, 1, 0, 0, 0, 3, 1);
                    dash3d::RSevenModelLitRenderer::OnFinishRebuild();
                }
                return;
            }
        } while (true);
    }

    // 0x100344c40
    int ClientBuild::GetTable(int arg1, int arg2, int arg3) {
        if (179 < arg3) {
            arg2 = arg2 / 2;
        }
        if (192 < arg3) {
            arg2 = arg2 / 2;
        }
        if (217 < arg3) {
            arg2 = arg2 / 2;
        }
        if (243 < arg3) {
            arg2 = arg2 / 2;
        }
        unsigned int uVar1 = arg1 + 3;
        if (-1 < arg1) {
            uVar1 = arg1;
        }
        unsigned int uVar2 = arg2 + 31;
        if (-1 < arg2) {
            uVar2 = arg2;
        }
        return arg3 / 2 + (uVar1 & 4294967292) * 256 + (uVar2 & 4294967264) * 4;
    }

    // 0x100344d10
    int ClientBuild::GetUCol(int arg1, int arg2) {
        if (arg1 == -1) {
            return 12345678;
        }
        int iVar1 = (arg1 & 127U) * arg2;
        int iVar2 = iVar1 + 127;
        if (-1 < iVar1) {
            iVar2 = iVar1;
        }
        int iVar3 = 126;
        if (iVar2 >> 7 < 126) {
            iVar3 = iVar2 >> 7;
        }
        iVar2 = 2;
        if (255 < iVar1) {
            iVar2 = iVar3;
        }
        return (arg1 & 65408U) + iVar2;
    }

    // 0x100344d60
    int ClientBuild::GetOCol(int arg1, int arg2) {
        int iVar1;
        int iVar2;

        if (arg1 == -2) {
            return 12345678;
        }
        if (arg1 == -1) {
            iVar1 = 126;
            if (arg2 < 126) {
                iVar1 = arg2;
            }
            iVar2 = 2;
            if (2 < iVar1) {
                iVar2 = iVar1;
            }
            return iVar2;
        }
        iVar2 = (arg1 & 127U) * arg2;
        iVar1 = iVar2 + 127;
        if (-1 < iVar2) {
            iVar1 = iVar2;
        }
        int iVar3 = 126;
        if (iVar1 >> 7 < 126) {
            iVar3 = iVar1 >> 7;
        }
        iVar1 = 2;
        if (255 < iVar2) {
            iVar1 = iVar3;
        }
        return (arg1 & 65408U) + iVar1;
    }

    // 0x100344dd0
    int ClientBuild::VisLevel(int arg1, int arg2, int arg3) {
        uint8_t bVar2;

        bool cVar1 = IsVisBelow(arg1, arg2, arg3);
        int iVar3 = 0;
        if (!cVar1) {
            bVar2 = IsLinkBelow(arg1, arg2, arg3);
            iVar3 = arg1 - (unsigned int)bVar2;
        }
        return iVar3;
    }

    // 0x100344e10
    bool ClientBuild::IsVisBelow(int arg1, int arg2, int arg3) {
        uint8_t bVar1 = Read3DArray<signed char>((Array<signed char>*)&m_mapl, arg1, arg2, arg3);
        return (bVar1 & 8) >> 3;
    }

    // 0x100344e30
    void ClientBuild::IsLinkBelow(int arg1, int arg2, int arg3) {
        uint64_t extraout_var;

        if (arg1 < 1) {
            return 0;
        }
        auto sVar1 = Read3DArray<signed char>((Array<signed char>*)&m_mapl, 1, arg2, arg3);
        unsigned long uVar2 = (((uint64_t)extraout_var << 8) | (uint8_t)sVar1) & 18446744073709551362;
        return (uint8_t)uVar2 >> 1;
    }

    // 0x100344e60
    int ClientBuild::GetVisBelowLevel(int arg1, int arg2, int arg3) {
        bool cVar1 = IsVisBelow((int)this, arg1, arg2);
        int iVar2 = 0;
        if (!cVar1) {
            iVar2 = (int)this;
        }
        return iVar2;
    }

    // 0x100344e80
    int ClientBuild::GetLinkBelowLevel(int arg1, int arg2, int arg3) {
        uint8_t bVar1 = IsLinkBelow((int)this, arg1, arg2);
        return (int)this - (unsigned int)bVar1;
    }

    // 0x100344ea0
    void ClientBuild::GetGroundHeight(int arg1, int arg2, int arg3) {
        Read3DArray<int>((Array<int>*)&m_groundh, arg1, arg2, arg3);
    }

    // 0x100344ec0
    int ClientBuild::GetGroundHeightAtFinePos(int arg1, int arg2, int arg3) {
        Vector2T<int>* vector2T;
        float fVar2;
        float fVar1;
        float* pfVar4;
        unsigned int arg3_00;
        int iVar6;
        unsigned int arg7;
        float fVar7;
        Vector3T<int> aVStack_8c;
        int in_stack_ffffffffffffff78;
        Vector3T<int> local_78;
        Vector3T<int> local_68;
        int local_5c;
        uint8_t local_58[16];
        float local_48;
        float local_44;
        unsigned long local_40;
        float local_38;
        float local_34;

        int iVar5 = -1;
        if ((((arg2 < 13312) && (-1 < arg2)) && (-1 < arg3)) && (arg3 < 13312)) {
            iVar5 = arg2 >> 7;
            iVar6 = arg3 >> 7;
            local_44 = (float)arg2;
            local_38 = (float)GetGroundHeight(arg1, iVar5, iVar6);
            local_48 = (float)GetGroundHeight(arg1, iVar5, iVar6 + 1);
            local_34 = (float)GetGroundHeight(arg1, iVar5 + 1, iVar6 + 1);
            local_5c = GetGroundHeight(arg1, iVar5 + 1, iVar6);
            fVar7 = local_44;
            arg7 = (unsigned int)local_44 & 4294967168;
            local_40 = (unsigned long)(arg7 + 128);
            arg3_00 = arg3 & 4294967168;
            iVar5 = arg3_00 + 128;
            new (&aVStack_8c + 4) jag::math::Vector3T();
            local_78 = jag::math::Vector3T();
            local_68 = jag::math::Vector3T();
            iVar6 = (int)local_40;
            local_58._12_4_ = arg3;
            if (((world*)(unsigned long)(unsigned int)fVar7)
                    ->InsideTriangle(arg3, iVar5, arg3_00, arg3_00, iVar6, iVar6, arg7, in_stack_ffffffffffffff78) ==
                '\0') {
                new (local_58) jag::math::ColourHSL((float)(int)arg3_00, (float)iVar5, (float)iVar5);
                ((&aVStack_8c + 4))->SetXYZ(*local_58);
                new (local_58) jag::math::ColourHSL((float)(int)arg7, (float)iVar6, (float)(int)arg7);
                local_78.SetXYZ(*local_58);
                fVar7 = local_38;
                fVar1 = local_34;
                fVar2 = local_48;
            } else {
                new (local_58) jag::math::ColourHSL((float)iVar5, (float)(int)arg3_00, (float)(int)arg3_00);
                ((&aVStack_8c + 4))->SetXYZ(*local_58);
                new (local_58) jag::math::ColourHSL((float)iVar6, (float)iVar6, (float)(int)arg7);
                local_78.SetXYZ(*local_58);
                fVar7 = local_34;
                fVar1 = (float)local_5c;
                fVar2 = local_38;
            }
            new (local_58) jag::math::ColourHSL((float)(int)fVar7, (float)(int)fVar1, (float)(int)fVar2);
            local_68.SetXYZ(*local_58);
            vector2T = (Vector2T<int>*)(&aVStack_8c + 4);
            pfVar4 = (float*)vector2T->y();
            local_34 = *pfVar4;
            pfVar4 = (float*)vector2T->second();
            local_34 = local_34 - *pfVar4;
            pfVar4 = (float*)local_78.SSOBeginPtr();
            local_38 = *pfVar4;
            pfVar4 = (float*)local_78.second();
            local_38 = (local_38 - *pfVar4) * local_34;
            pfVar4 = (float*)local_78.second();
            local_40._0_4_ = *pfVar4;
            pfVar4 = (float*)local_78.y();
            local_40._0_4_ = (float)local_40 - *pfVar4;
            pfVar4 = (float*)vector2T->SSOBeginPtr();
            local_34 = *pfVar4;
            pfVar4 = (float*)vector2T->second();
            local_34 = (local_34 - *pfVar4) * (float)local_40 + local_38;
            pfVar4 = (float*)vector2T->y();
            local_40._0_4_ = *pfVar4;
            pfVar4 = (float*)vector2T->second();
            local_40._0_4_ = (float)local_40 - *pfVar4;
            local_38 = (float)(int)local_44;
            pfVar4 = (float*)local_78.second();
            local_48 = (local_38 - *pfVar4) * (float)local_40;
            pfVar4 = (float*)local_78.second();
            local_40._0_4_ = *pfVar4;
            pfVar4 = (float*)local_78.y();
            local_40._0_4_ = (float)local_40 - *pfVar4;
            local_44 = (float)(int)local_58._12_4_;
            pfVar4 = (float*)vector2T->second();
            local_58._12_4_ = 1.0 / local_34;
            local_40 = (((uint64_t)local_40._4_4_ << 32) |
                        (uint32_t)(((local_44 - *pfVar4) * (float)local_40 + local_48) * (float)local_58._12_4_));
            pfVar4 = (float*)vector2T->second();
            local_34 = *pfVar4;
            pfVar4 = (float*)vector2T->SSOBeginPtr();
            local_34 = local_34 - *pfVar4;
            pfVar4 = (float*)local_78.second();
            local_38 = (local_38 - *pfVar4) * local_34;
            pfVar4 = (float*)local_78.SSOBeginPtr();
            local_34 = *pfVar4;
            pfVar4 = (float*)local_78.second();
            local_34 = local_34 - *pfVar4;
            pfVar4 = (float*)vector2T->second();
            fVar7 = ((local_44 - *pfVar4) * local_34 + local_38) * (float)local_58._12_4_;
            new (local_58) jag::math::ColourHSL((float)local_40, fVar7, 1.0 - ((float)local_40 + fVar7));
            fVar7 = jag::math::Vector3Dot<float>(*local_58, local_68);
            iVar5 = (int)fVar7;
        }
        return iVar5;
    }

    // 0x1003452e0
    void ClientBuild::GetHeightmapWidth() {
        return 105;
    }

    // 0x1003452f0
    void ClientBuild::GetHeightmapHeight() {
        return 105;
    }

    // 0x100345300
    void ClientBuild::ResetMapL() {
        uint8_t* puVar2;
        unsigned long uVar3;
        unsigned long arg1;

        if (m_mapl.end() != 0) {
            arg1 = 0;
            do {
                puVar2 = &m_mapl[arg1];
                *puVar2 = 0;
                arg1 = arg1 + 1;
                uVar3 = m_mapl.end();
            } while (arg1 < uVar3);
        }
    }

    // 0x100345360
    void ClientBuild::InterpolatedNoise(int arg1, int arg2, int arg3) {
        int arg1_01 = arg1 / arg3;
        unsigned int arg3_00 = arg1 & arg3 - 1U;
        int iVar1 = arg2 / arg3;
        int iVar2 = SmoothNoise(arg1_01, iVar1);
        int arg2_00 = SmoothNoise(arg1_01 + 1, iVar1);
        int arg1_00 = SmoothNoise(arg1_01, iVar1 + 1);
        iVar1 = SmoothNoise(arg1_01 + 1, iVar1 + 1);
        iVar2 = Interpolate(iVar2, arg2_00, arg3_00, arg3);
        iVar1 = Interpolate(arg1_00, iVar1, arg3_00, arg3);
        Interpolate(iVar2, iVar1, arg3 - 1U & arg2, arg3);
    }

    // 0x100345420
    int ClientBuild::SmoothNoise(int arg1, int arg2) {
        int iVar8 = arg1 - 1;
        int iVar1 = arg2 - 1;
        int iVar2 = Noise(iVar8, iVar1);
        int iVar7 = arg1 + 1;
        int iVar3 = Noise(iVar7, iVar1);
        int iVar6 = arg2 + 1;
        int iVar4 = Noise(iVar8, iVar6);
        iVar4 = iVar4 + iVar3 + iVar2;
        iVar3 = Noise(iVar7, iVar6);
        int iVar5 = iVar4 + iVar3;
        iVar2 = Noise(iVar8, arg2);
        iVar7 = Noise(iVar7, arg2);
        iVar8 = Noise(arg1, iVar1);
        iVar8 = iVar8 + iVar7 + iVar2;
        iVar7 = Noise(arg1, iVar6);
        iVar1 = iVar8 + iVar7;
        iVar2 = Noise(arg1, arg2);
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

    // 0x100345540
    int ClientBuild::Interpolate(int arg1, int arg2, int arg3, int arg4) {
        int* piVar1 = (int*)(*((array<int, 2048ul>*)&dash3d::Pix3D::m_cosTable))[(long)((arg3 << 10) / arg4)];
        int iVar2 = 65536 - *piVar1 >> 1;
        return (iVar2 * arg2 >> 16) + ((65536 - iVar2) * arg1 >> 16);
    }

    // 0x1003455b0
    unsigned int ClientBuild::Noise(int arg1, int arg2) {
        unsigned int uVar1 = arg2 * 57 + arg1;
        uVar1 = uVar1 * 8192 ^ uVar1;
        return (uVar1 * uVar1 * 15731 + 789221) * uVar1 + 34135309 >> 19 & 255;
    }

    // 0x1003455e0
    void ClientBuild::ChangeLocAvailable(int arg1, int arg2) {
        shared_ptr<dash3d::GroundDecor>* groundDecor =
            (shared_ptr<dash3d::GroundDecor>*)configdecoder::LocType::List(arg1);
        shared_ptr<dash3d::Decor> local_28(groundDecor);
        auto locType = local_28.operator->();
        int iVar2 = 4;
        if (3 < arg2 - 5U) {
            iVar2 = arg2;
        }
        int arg1_00 = 10;
        if (arg2 != 11) {
            arg1_00 = iVar2;
        }
        uint32_t uVar1 = locType->CheckModel(arg1_00);
        return uVar1;
    }

    // 0x100345660
    ClientBuild* ClientBuild::ChangeLocUnchecked(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                                 int arg8, dash3d::world& world, movement::CollisionMap& collisionMap,
                                                 int arg11) {
        char cVar1;
        long lVar6;
        shared_ptr<configdecoder::LocType>* psVar7;
        int* piVar8;
        unsigned int* puVar9;
        unsigned long uVar14;
        shared_ptr<dash3d::Decor> local_100;
        int local_ec;
        unsigned long local_d0;
        unsigned int local_b4;
        unsigned long local_b0;
        unsigned int local_a4;
        unsigned long local_a0;
        uint64_t local_98[2];
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_68;
        shared_ptr<ClientLocAnim> local_50;

        int iVar15 = arg8;
        int local_84 = arg5;
        int local_3c = arg2;
        int local_38 = arg4;
        unsigned int local_34 = arg3;
        shared_ptr<dash3d::GroundDecor>* groundDecor =
            (shared_ptr<dash3d::GroundDecor>*)configdecoder::LocType::List(arg5);
        shared_ptr<dash3d::Decor> local_80(groundDecor);
        if (iVar15 < 0) {
            lVar6 = local_80.operator->();
            iVar15 = *(int*)(lVar6 + 212);
        }
        int local_54 = iVar15;
        if ((arg6 & 4294967293U) == 1) {
            lVar6 = local_80.operator->();
            local_d0 = (unsigned long)*(unsigned int*)(lVar6 + 188);
            lVar6 = local_80.operator->();
            puVar9 = (unsigned int*)(lVar6 + 184);
        } else {
            lVar6 = local_80.operator->();
            local_d0 = (unsigned long)*(unsigned int*)(lVar6 + 184);
            lVar6 = local_80.operator->();
            puVar9 = (unsigned int*)(lVar6 + 188);
        }
        int iVar5 = local_38;
        unsigned long local_c0 = (unsigned long)local_34;
        iVar15 = (int)local_d0;
        int iVar11 = iVar15 >> 1;
        int iVar16 = iVar15 + 1 >> 1;
        if (104 < (int)(local_34 + iVar15)) {
            iVar16 = 1;
        }
        unsigned int uVar13 = *puVar9;
        unsigned long local_d8 = (unsigned long)uVar13;
        if (104 < (int)(local_34 + iVar15)) {
            iVar11 = 0;
        }
        iVar11 = iVar11 + local_34;
        int iVar10 = (int)uVar13 >> 1;
        iVar15 = (int)(uVar13 + 1) >> 1;
        if (104 < (int)(uVar13 + local_38)) {
            iVar15 = 1;
            iVar10 = 0;
        }
        iVar10 = iVar10 + local_38;
        int iVar3 = Read3DArray<int>((Array<int>*)&m_groundh, local_3c, iVar11, iVar10);
        local_b0 = (((uint64_t)local_b0._4_4_ << 32) | (uint32_t)iVar3);
        iVar16 = iVar16 + (int)local_c0;
        iVar10 = Read3DArray<int>((Array<int>*)&m_groundh, local_3c, iVar16, iVar10);
        local_c0._0_4_ = iVar10;
        iVar10 = Read3DArray<int>((Array<int>*)&m_groundh, local_3c, iVar11, iVar15 + iVar5);
        iVar11 = local_3c;
        int local_e8 = Read3DArray<int>((Array<int>*)&m_groundh, local_3c, iVar16, iVar15 + iVar5);
        unsigned int uVar12 = local_34;
        int local_70 = iVar10;
        LocLayer LVar4 = ((LocShape*)(unsigned long)(unsigned int)arg7)->ToLayer(iVar11);
        uVar13 = local_34;
        iVar15 = local_38;
        lVar6 = local_80.operator->();
        LocLayer local_e4 = LVar4 & 255;
        long long local_c8 = dash3d::MousePickingHelper::GetPackedTypeCodeLoc(
            uVar13, iVar15, arg1, *(int*)(lVar6 + 200) == 0, local_84, local_e4);
        uVar13 = arg6 * 64 + arg7;
        lVar6 = local_80.operator->();
        iVar15 = (int)local_c0 + (int)local_b0 + local_70 + local_e8 >> 2;
        local_70 = (int)local_d0 * 64 + uVar12 * 128;
        if (*(int*)(lVar6 + 480) == 1) {
            uVar13 = uVar13 + 256;
        }
        local_b0 = (unsigned long)uVar13;
        if (arg7 == 22) {
            local_68 = shared_ptr();
            if (local_54 == -1) {
                lVar6 = local_80.operator->();
                cVar1 = ((lVar6 + 488))->empty();
                if (!cVar1)
                    goto LAB_1003459ba;
                iVar5 = local_80.operator->();
                configdecoder::LocType::GetModelLit((int)&local_50, iVar5, 22, arg6, local_3c, local_70);
                local_68 = local_50;
            } else {
            LAB_1003459ba:
                local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)22);
                lVar6 = local_80.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>(&local_50, &local_84, (int*)&local_a0, &arg6, &local_3c, (int*)&local_34, &local_38,
                                  (bool*)&local_54, (void**)(lVar6 + 560), (int*)local_98);
                local_68 = local_50;
            }
            cVar1 = world.SetGroundDecor(arg1, local_34, local_38, iVar15, local_68, local_c8, (int)local_b0);
            lVar6 = local_80.operator->();
            if (*(int*)(lVar6 + 192) == 1) {
                collisionMap.BlockGroundDecor(local_34, local_38);
            }
            goto LAB_100347164;
        }
        if ((arg7 & 4294967294U) == 10) {
            local_68 = shared_ptr();
            if (local_54 == -1) {
                lVar6 = local_80.operator->();
                cVar1 = ((lVar6 + 488))->empty();
                if (!cVar1)
                    goto LAB_100345b21;
                iVar5 = local_80.operator->();
                configdecoder::LocType::GetModelLit((int)&local_50, iVar5, 10, arg6, local_3c, local_70);
                local_68 = local_50;
            } else {
            LAB_100345b21:
                local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)10);
                lVar6 = local_80.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>(&local_50, &local_84, (int*)&local_a0, &arg6, &local_3c, (int*)&local_34, &local_38,
                                  (bool*)&local_54, (void**)(lVar6 + 560), (int*)local_98);
                local_68 = local_50;
            }
            if (local_68 != nullptr) {
                cVar1 = world.AddScenery(arg1, local_34, local_38, iVar15, (int)local_d0, (int)local_d8, local_68,
                                         (unsigned int)(arg7 == 11) << 8, local_c8, (int)local_b0);
            } else {
                cVar1 = '\0';
            }
            lVar6 = local_80.operator->();
            uVar13 = local_34;
            iVar15 = local_38;
            if (*(int*)(lVar6 + 192) != 0) {
                lVar6 = local_80.operator->();
                collisionMap.AddLoc(uVar13, iVar15, (int)local_d0, (int)local_d8, *(bool*)(lVar6 + 196));
            }
            goto LAB_100347164;
        }
        if (11 < arg7) {
            local_68 = shared_ptr();
            if (local_54 == -1) {
                lVar6 = local_80.operator->();
                cVar1 = ((lVar6 + 488))->empty();
                if (!cVar1)
                    goto LAB_100345cff;
                iVar5 = local_80.operator->();
                configdecoder::LocType::GetModelLit((int)&local_50, iVar5, arg7, arg6, local_3c, local_70);
                local_68 = local_50;
            } else {
            LAB_100345cff:
                lVar6 = local_80.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int&, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>(&local_50, &local_84, &arg7, &arg6, &local_3c, (int*)&local_34, &local_38,
                                  (bool*)&local_54, (void**)(lVar6 + 560), (int*)local_98);
                local_68 = local_50;
            }
            cVar1 = world.AddScenery(arg1, local_34, local_38, iVar15, 1, 1, local_68, 0, local_c8, (int)local_b0);
            lVar6 = local_80.operator->();
            uVar13 = local_34;
            iVar15 = local_38;
            if (*(int*)(lVar6 + 192) != 0) {
                lVar6 = local_80.operator->();
                collisionMap.AddLoc(uVar13, iVar15, (int)local_d0, (int)local_d8, *(bool*)(lVar6 + 196));
            }
            goto LAB_100347164;
        }
        switch (arg7) {
        case 0:
            local_68 = shared_ptr();
            if (local_54 == -1) {
                lVar6 = local_80.operator->();
                cVar1 = ((lVar6 + 488))->empty();
                if (!cVar1)
                    goto LAB_100346272;
                iVar5 = local_80.operator->();
                configdecoder::LocType::GetModelLit((int)&local_50, iVar5, 0, arg6, local_3c, local_70);
                local_68 = local_50;
            } else {
            LAB_100346272:
                local_a0 = local_a0 & 18446744069414584320;
                lVar6 = local_80.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>(&local_50, &local_84, (int*)&local_a0, &arg6, &local_3c, (int*)&local_34, &local_38,
                                  (bool*)&local_54, (void**)(lVar6 + 560), (int*)local_98);
                local_68 = local_50;
            }
            uVar13 = local_34;
            iVar5 = local_38;
            local_50 = shared_ptr();
            piVar8 = &WSHAPE0[(long)arg6];
            cVar1 = world.SetWall(arg1, uVar13, iVar5, iVar15, local_68, local_50, *piVar8, 0, local_c8, (int)local_b0);
            lVar6 = local_80.operator->();
            uVar13 = local_34;
            iVar11 = local_38;
            iVar5 = arg7;
            iVar15 = arg6;
            if (*(int*)(lVar6 + 192) != 0) {
                lVar6 = local_80.operator->();
                collisionMap.AddWall(uVar13, iVar11, iVar5, iVar15, *(bool*)(lVar6 + 196));
            }
            goto LAB_100347164;
        case 1:
            local_68 = shared_ptr();
            if (local_54 == -1) {
                lVar6 = local_80.operator->();
                cVar1 = ((lVar6 + 488))->empty();
                if (!cVar1)
                    goto LAB_1003463bb;
                iVar5 = local_80.operator->();
                configdecoder::LocType::GetModelLit((int)&local_50, iVar5, 1, arg6, local_3c, local_70);
                local_68 = local_50;
            } else {
            LAB_1003463bb:
                local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)1);
                lVar6 = local_80.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>(&local_50, &local_84, (int*)&local_a0, &arg6, &local_3c, (int*)&local_34, &local_38,
                                  (bool*)&local_54, (void**)(lVar6 + 560), (int*)local_98);
                local_68 = local_50;
            }
            uVar13 = local_34;
            iVar5 = local_38;
            local_50 = shared_ptr();
            piVar8 = &WSHAPE1[(long)arg6];
            cVar1 = world.SetWall(arg1, uVar13, iVar5, iVar15, local_68, local_50, *piVar8, 0, local_c8, (int)local_b0);
            lVar6 = local_80.operator->();
            uVar13 = local_34;
            iVar11 = local_38;
            iVar5 = arg7;
            iVar15 = arg6;
            if (*(int*)(lVar6 + 192) != 0) {
                lVar6 = local_80.operator->();
                collisionMap.AddWall(uVar13, iVar11, iVar5, iVar15, *(bool*)(lVar6 + 196));
            }
            goto LAB_100347164;
        case 2:
            local_a4 = arg6 + 1U & 3;
            local_68 = shared_ptr();
            local_50 = shared_ptr();
            local_c0._0_4_ = iVar15;
            if (local_54 == -1) {
                lVar6 = local_80.operator->();
                cVar1 = ((lVar6 + 488))->empty();
                if (!cVar1)
                    goto LAB_100346962;
                iVar15 = local_80.operator->();
                configdecoder::LocType::GetModelLit((int)local_98, iVar15, 2, arg6 + 4, local_3c, local_70);
                local_68 = *local_98;
                iVar15 = local_80.operator->();
                configdecoder::LocType::GetModelLit((int)local_98, iVar15, 2, local_a4, local_3c, local_70);
                local_50 = *local_98;
            } else {
            LAB_100346962:
                local_b4 = 2;
                local_ec = arg6 + 4;
                lVar6 = local_80.operator->();
                local_a0 = 0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((int*)local_98, &local_84, (int*)&local_b4, &local_ec, &local_3c, (int*)&local_34,
                                  &local_38, (bool*)&local_54, (void**)(lVar6 + 560), (int*)&local_a0);
                local_68 = *local_98;
                local_b4 = 2;
                lVar6 = local_80.operator->();
                local_a0 = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((int*)local_98, &local_84, (int*)&local_b4, (int*)&local_a4, &local_3c,
                                  (int*)&local_34, &local_38, (bool*)&local_54, (void**)(lVar6 + 560), (int*)&local_a0);
                local_50 = *local_98;
            }
            uVar13 = local_34;
            iVar5 = local_38;
            piVar8 = &WSHAPE0[(long)arg6];
            iVar15 = *piVar8;
            piVar8 = &WSHAPE0[(long)(int)local_a4];
            cVar1 = world.SetWall(arg1, uVar13, iVar5, (int)local_c0, local_68, local_50, iVar15, *piVar8, local_c8,
                                  (int)local_b0);
            lVar6 = local_80.operator->();
            uVar13 = local_34;
            iVar11 = local_38;
            iVar5 = arg7;
            iVar15 = arg6;
            if (*(int*)(lVar6 + 192) != 0) {
                lVar6 = local_80.operator->();
                collisionMap.AddWall(uVar13, iVar11, iVar5, iVar15, *(bool*)(lVar6 + 196));
            }
            break;
        case 3:
            local_68 = shared_ptr();
            if (local_54 == -1) {
                lVar6 = local_80.operator->();
                cVar1 = ((lVar6 + 488))->empty();
                if (!cVar1)
                    goto LAB_100346504;
                iVar5 = local_80.operator->();
                configdecoder::LocType::GetModelLit((int)&local_50, iVar5, 3, arg6, local_3c, local_70);
                local_68 = local_50;
            } else {
            LAB_100346504:
                local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)3);
                lVar6 = local_80.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>(&local_50, &local_84, (int*)&local_a0, &arg6, &local_3c, (int*)&local_34, &local_38,
                                  (bool*)&local_54, (void**)(lVar6 + 560), (int*)local_98);
                local_68 = local_50;
            }
            uVar13 = local_34;
            iVar5 = local_38;
            local_50 = shared_ptr();
            piVar8 = &WSHAPE1[(long)arg6];
            cVar1 = world.SetWall(arg1, uVar13, iVar5, iVar15, local_68, local_50, *piVar8, 0, local_c8, (int)local_b0);
            lVar6 = local_80.operator->();
            uVar13 = local_34;
            iVar11 = local_38;
            iVar5 = arg7;
            iVar15 = arg6;
            if (*(int*)(lVar6 + 192) != 0) {
                lVar6 = local_80.operator->();
                collisionMap.AddWall(uVar13, iVar11, iVar5, iVar15, *(bool*)(lVar6 + 196));
            }
            goto LAB_100347164;
        case 4:
            local_68 = shared_ptr();
            if (local_54 == -1) {
                lVar6 = local_80.operator->();
                cVar1 = ((lVar6 + 488))->empty();
                if (!cVar1)
                    goto LAB_10034664d;
                iVar5 = local_80.operator->();
                configdecoder::LocType::GetModelLit((int)&local_50, iVar5, 4, arg6, local_3c, local_70);
                local_68 = local_50;
            } else {
            LAB_10034664d:
                local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)4);
                lVar6 = local_80.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>(&local_50, &local_84, (int*)&local_a0, &arg6, &local_3c, (int*)&local_34, &local_38,
                                  (bool*)&local_54, (void**)(lVar6 + 560), (int*)local_98);
                local_68 = local_50;
            }
            uVar13 = local_34;
            iVar5 = local_38;
            local_50 = shared_ptr();
            piVar8 = &WSHAPE0[(long)arg6];
            cVar1 = world.SetDecor(arg1, uVar13, iVar5, iVar15, local_68, local_50, *piVar8, 0, 0, 0, local_c8,
                                   (int)local_b0);
            break;
        case 5:
            lVar6 = world.WallType(arg1, local_34, local_38);
            if (lVar6 == 0) {
                iVar5 = 16;
            } else {
                iVar5 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar6);
                psVar7 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar5);
                lVar6 = (*psVar7).operator->();
                iVar5 = *(int*)(lVar6 + 216);
            }
            local_68 = shared_ptr();
            if (local_54 == -1) {
                lVar6 = local_80.operator->();
                cVar1 = ((lVar6 + 488))->empty();
                if (!cVar1)
                    goto LAB_100346bb7;
                iVar11 = local_80.operator->();
                configdecoder::LocType::GetModelLit((int)&local_50, iVar11, 4, arg6, local_3c, local_70);
                local_68 = local_50;
            } else {
            LAB_100346bb7:
                local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)4);
                lVar6 = local_80.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>(&local_50, &local_84, (int*)&local_a0, &arg6, &local_3c, (int*)&local_34, &local_38,
                                  (bool*)&local_54, (void**)(lVar6 + 560), (int*)local_98);
                local_68 = local_50;
            }
            uVar13 = local_34;
            local_d0 = (((uint64_t)local_d0._4_4_ << 32) | (uint32_t)local_38);
            local_c0._0_4_ = iVar15;
            local_50 = shared_ptr();
            uVar14 = (unsigned long)arg6;
            piVar8 = &WSHAPE0[uVar14];
            iVar15 = *piVar8;
            piVar8 = &DECORXOF[uVar14];
            iVar11 = *piVar8;
            piVar8 = &DECORZOF[uVar14];
            cVar1 = world.SetDecor(arg1, uVar13, (int)local_d0, (int)local_c0, local_68, local_50, iVar15, 0,
                                   iVar11 * iVar5, iVar5 * *piVar8, local_c8, (int)local_b0);
            break;
        case 6:
            lVar6 = world.WallType(arg1, local_34, local_38);
            if (lVar6 == 0) {
                iVar5 = 8;
                local_c0._0_4_ = iVar15;
            } else {
                local_c0._0_4_ = iVar15;
                iVar15 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar6);
                psVar7 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar15);
                lVar6 = (*psVar7).operator->();
                iVar5 = *(int*)(lVar6 + 216) / 2;
            }
            local_68 = shared_ptr();
            if (local_54 == -1) {
                lVar6 = local_80.operator->();
                cVar1 = ((lVar6 + 488))->empty();
                if (!cVar1)
                    goto LAB_100346d77;
                iVar15 = local_80.operator->();
                configdecoder::LocType::GetModelLit((int)&local_50, iVar15, 4, arg6 + 4, local_3c, local_70);
                local_68 = local_50;
            } else {
            LAB_100346d77:
                local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)4);
                local_a4 = arg6 + 4;
                lVar6 = local_80.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>(&local_50, &local_84, (int*)&local_a0, (int*)&local_a4, &local_3c, (int*)&local_34,
                                  &local_38, (bool*)&local_54, (void**)(lVar6 + 560), (int*)local_98);
                local_68 = local_50;
            }
            uVar13 = local_34;
            iVar16 = local_38;
            local_50 = shared_ptr();
            iVar11 = arg6;
            uVar14 = (unsigned long)arg6;
            piVar8 = &DECORXOF2[uVar14];
            iVar15 = *piVar8;
            piVar8 = &DECORZOF2[uVar14];
            cVar1 = world.SetDecor(arg1, uVar13, iVar16, (int)local_c0, local_68, local_50, 256, iVar11, iVar15 * iVar5,
                                   iVar5 * *piVar8, local_c8, (int)local_b0);
            break;
        case 7:
            local_68 = shared_ptr();
            uVar13 = arg6 + 2;
            uVar12 = uVar13 & 3;
            if (local_54 == -1) {
                lVar6 = local_80.operator->();
                cVar1 = ((lVar6 + 488))->empty();
                if (!cVar1)
                    goto LAB_100346750;
                iVar5 = local_80.operator->();
                configdecoder::LocType::GetModelLit((int)&local_50, iVar5, 4, uVar12 + 4, local_3c, local_70);
                local_68 = local_50;
            } else {
            LAB_100346750:
                local_a0 = (((uint64_t)local_a0._4_4_ << 32) | (uint32_t)4);
                local_a4 = uVar12 + 4;
                lVar6 = local_80.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>(&local_50, &local_84, (int*)&local_a0, (int*)&local_a4, &local_3c, (int*)&local_34,
                                  &local_38, (bool*)&local_54, (void**)(lVar6 + 560), (int*)local_98);
                local_68 = local_50;
            }
            uVar12 = local_34;
            iVar5 = local_38;
            local_50 = shared_ptr();
            cVar1 = world.SetDecor(arg1, uVar12, iVar5, iVar15, local_68, local_50, 256, uVar13 & 3, 0, 0, local_c8,
                                   (int)local_b0);
            break;
        case 8:
            lVar6 = world.WallType(arg1, local_34, local_38);
            if (lVar6 == 0) {
                iVar5 = 8;
            } else {
                iVar5 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar6);
                psVar7 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar5);
                lVar6 = (*psVar7).operator->();
                iVar5 = *(int*)(lVar6 + 216) / 2;
            }
            local_68 = shared_ptr();
            local_c0._0_4_ = iVar15;
            local_50 = shared_ptr();
            uVar13 = arg6 + 2U & 3;
            if (local_54 == -1) {
                lVar6 = local_80.operator->();
                cVar1 = ((lVar6 + 488))->empty();
                if (!cVar1)
                    goto LAB_100346fa8;
                iVar15 = local_80.operator->();
                configdecoder::LocType::GetModelLit((int)local_98, iVar15, 4, arg6 + 4, local_3c, local_70);
                local_68 = *local_98;
                iVar15 = local_80.operator->();
                configdecoder::LocType::GetModelLit((int)local_98, iVar15, 4, uVar13 | 4, local_3c, local_70);
                local_50 = *local_98;
            } else {
            LAB_100346fa8:
                local_a4 = 4;
                local_b4 = arg6 + 4;
                lVar6 = local_80.operator->();
                local_a0 = 0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((int*)local_98, &local_84, (int*)&local_a4, (int*)&local_b4, &local_3c,
                                  (int*)&local_34, &local_38, (bool*)&local_54, (void**)(lVar6 + 560), (int*)&local_a0);
                local_68 = *local_98;
                local_a4 = 4;
                local_b4 = uVar13 | 4;
                lVar6 = local_80.operator->();
                local_a0 = 0;
                make_shared<ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>((int*)local_98, &local_84, (int*)&local_a4, (int*)&local_b4, &local_3c,
                                  (int*)&local_34, &local_38, (bool*)&local_54, (void**)(lVar6 + 560), (int*)&local_a0);
                local_50 = *local_98;
            }
            uVar13 = local_34;
            iVar16 = local_38;
            iVar11 = arg6;
            uVar14 = (unsigned long)arg6;
            piVar8 = &DECORXOF2[uVar14];
            iVar15 = *piVar8;
            piVar8 = &DECORZOF2[uVar14];
            cVar1 = world.SetDecor(arg1, uVar13, iVar16, (int)local_c0, local_68, local_50, 256, iVar11, iVar15 * iVar5,
                                   iVar5 * *piVar8, local_c8, (int)local_b0);
            break;
        case 9:
            local_68 = shared_ptr();
            if (local_54 == -1) {
                lVar6 = local_80.operator->();
                cVar1 = ((lVar6 + 488))->empty();
                if (!cVar1)
                    goto LAB_100346852;
                iVar5 = local_80.operator->();
                configdecoder::LocType::GetModelLit((int)&local_50, iVar5, arg7, arg6, local_3c, local_70);
                local_68 = local_50;
            } else {
            LAB_100346852:
                lVar6 = local_80.operator->();
                local_98[0] = 0;
                make_shared<ClientLocAnim, int&, int&, int&, int&, int&, int&, int const&, bool&, decltype(nullptr),
                            int&>(&local_50, &local_84, &arg7, &arg6, &local_3c, (int*)&local_34, &local_38,
                                  (bool*)&local_54, (void**)(lVar6 + 560), (int*)local_98);
                local_68 = local_50;
            }
            cVar1 = world.AddScenery(arg1, local_34, local_38, iVar15, 1, 1, local_68, 0, local_c8, (int)local_b0);
            lVar6 = local_80.operator->();
            uVar13 = local_34;
            iVar15 = local_38;
            if (*(int*)(lVar6 + 192) != 0) {
                lVar6 = local_80.operator->();
                collisionMap.AddLoc(uVar13, iVar15, (int)local_d0, (int)local_d8, *(bool*)(lVar6 + 196));
            }
            goto LAB_100347164;
        default:
            cVar1 = '\0';
            goto LAB_10034716d;
        }
    LAB_100347164:
    LAB_10034716d:
        uVar13 = local_34;
        iVar5 = local_38;
        iVar15 = arg6;
        if (!cVar1) {
            new (this) LocInfo();
        } else {
            local_100 = shared_ptr(&local_80);
            new (this) LocInfo((unsigned char)arg1, (unsigned char)uVar13, (unsigned char)iVar5, (unsigned char)iVar15,
                               local_e4, &local_100);
        }
        return this;
    }

    // 0x100347730
    void ClientBuild::PerformHillSkew(const HillSkewBuildInput& hillSkewBuildInput) {
        unsigned int uVar2;
        int iVar3;
        int iVar6;
        int iVar7;
        int iVar8;
        int arg2;
        int iVar9;
        unsigned int uVar10;
        uint8_t auVar11[12];
        uint8_t local_58[12];
        int local_4c;
        int local_48;
        unsigned int local_44;
        unsigned int local_40;
        unsigned int local_38;
        int local_34;

        uint8_t* uint8_t = &hillSkewBuildInput.field_4;
        auto piVar4 = uint8_t->SSOBeginPtr();
        int iVar1 = *piVar4;
        piVar4 = (int*)uint8_t->y();
        int local_3c = *piVar4;
        piVar4 = (int*)uint8_t->second();
        int iVar5 = *(int*)&hillSkewBuildInput.field_20 + iVar1;
        if ((-1 < iVar5) && (iVar9 = *(int*)&hillSkewBuildInput.field_24 + iVar1, iVar9 < 13312)) {
            local_48 = *piVar4;
            iVar8 = *(int*)&hillSkewBuildInput.field_28 + local_48;
            if ((-1 < iVar8) && (iVar6 = *(int*)&hillSkewBuildInput.field_32 + local_48, iVar6 < 13312)) {
                local_34 = *(int*)hillSkewBuildInput;
                iVar5 = iVar5 >> 7;
                iVar8 = iVar8 >> 7;
                local_4c = iVar1;
                iVar1 = GetGroundHeight(local_34, iVar5, iVar8);
                if (iVar1 == local_3c) {
                    iVar9 = iVar9 + 127 >> 7;
                    iVar1 = GetGroundHeight(local_34, iVar9, iVar8);
                    if (iVar1 == local_3c) {
                        iVar8 = iVar6 + 127 >> 7;
                        iVar1 = GetGroundHeight(local_34, iVar5, iVar8);
                        if ((iVar1 == local_3c) &&
                            (iVar1 = GetGroundHeight(local_34, iVar9, iVar8), iVar1 == local_3c)) {
                            return;
                        }
                    }
                }
                if (*(int*)&hillSkewBuildInput.field_16 == 0) {
                    if (0 < *(int*)&hillSkewBuildInput.field_40) {
                        local_38 = 0;
                        do {
                            auVar11 = std::function<jag::math::Vector3T<int>(int)>::operator()(
                                (function<jag::math::Vector3T<int>(int)>*)&hillSkewBuildInput.field_48, local_38);
                            local_58 = auVar11;
                            piVar4 = (int*)local_58->SSOBeginPtr();
                            uVar10 = *piVar4 + local_4c;
                            piVar4 = (int*)local_58->second();
                            uVar2 = uVar10 & 127;
                            local_44 = *piVar4 + local_48 & 127;
                            iVar9 = (int)uVar10 >> 7;
                            iVar8 = *piVar4 + local_48 >> 7;
                            iVar1 = GetGroundHeight(local_34, iVar9, iVar8);
                            local_40 = iVar9 + 1;
                            iVar5 = GetGroundHeight(local_34, local_40, iVar8);
                            iVar9 = GetGroundHeight(local_34, iVar9, iVar8 + 1);
                            iVar8 = GetGroundHeight(local_34, local_40, iVar8 + 1);
                            iVar6 = 128 - local_44;
                            iVar9 = ((int)(uVar2 * iVar8 + (128 - uVar2) * iVar9) >> 7) * local_44;
                            piVar4 = (int*)local_58->y();
                            std::function<void(int, int)>::operator()(
                                (function<void(int, int)>*)&hillSkewBuildInput.field_96, local_38,
                                (*piVar4 - local_3c) +
                                    (iVar9 + iVar6 * ((int)(iVar1 * (128 - uVar2) + iVar5 * uVar2) >> 7) >> 7));
                            local_38 = local_38 + 1;
                        } while ((int)local_38 < *(int*)&hillSkewBuildInput.field_40);
                    }
                } else if (0 < *(int*)&hillSkewBuildInput.field_40) {
                    iVar1 = 0;
                    do {
                        auVar11 = std::function<jag::math::Vector3T<int>(int)>::operator()(
                            (function<jag::math::Vector3T<int>(int)>*)&hillSkewBuildInput.field_48, iVar1);
                        local_58 = auVar11;
                        piVar4 = (int*)local_58->y();
                        uVar2 = (*piVar4 * -65536) / *(int*)&hillSkewBuildInput.field_36;
                        if ((int)uVar2 < *(int*)&hillSkewBuildInput.field_16) {
                            local_44 = uVar2;
                            piVar4 = (int*)local_58->SSOBeginPtr();
                            uVar2 = *piVar4 + local_4c;
                            piVar4 = (int*)local_58->second();
                            iVar5 = local_34;
                            local_38 = uVar2 & 127;
                            local_40 = *piVar4 + local_48 & 127;
                            arg2 = (int)uVar2 >> 7;
                            iVar7 = *piVar4 + local_48 >> 7;
                            iVar9 = GetGroundHeight(local_34, arg2, iVar7);
                            iVar8 = 128 - local_38;
                            iVar6 = GetGroundHeight(iVar5, arg2 + 1, iVar7);
                            iVar5 = local_34;
                            iVar6 = iVar6 * local_38;
                            iVar3 = GetGroundHeight(local_34, arg2, iVar7 + 1);
                            iVar5 = GetGroundHeight(iVar5, arg2 + 1, iVar7 + 1);
                            iVar7 = 128 - local_40;
                            iVar5 = ((int)(iVar5 * local_38 + iVar3 * iVar8) >> 7) * local_40;
                            piVar4 = (int*)local_58->y();
                            std::function<void(int, int)>::operator()(
                                (function<void(int, int)>*)&hillSkewBuildInput.field_96, iVar1,
                                (int)((*(int*)&hillSkewBuildInput.field_16 - local_44) *
                                      ((iVar5 + iVar7 * (iVar6 + iVar9 * iVar8 >> 7) >> 7) - local_3c)) /
                                        *(int*)&hillSkewBuildInput.field_16 +
                                    *piVar4);
                        }
                        iVar1 = iVar1 + 1;
                    } while (iVar1 < *(int*)&hillSkewBuildInput.field_40);
                }
            }
        }
    }

} // namespace jag::oldscape
