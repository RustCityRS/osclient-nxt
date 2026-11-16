// libs/hal/audio/workers/VorbisWorker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.audio

namespace jag::hal::audio::decoders::vorbis {
    // 0x100b92aa0, 752 bytes, placed by debug map only (low confidence)
    // vorbis_deinit(stb_vorbis*)
    void vorbis_deinit(stb_vorbis* param_1) {
        long lVar1;
        long* plVar2;
        ulong uVar3;
        void* pvVar4;
        long lVar5;
        long lVar6;

        if ((field_448 != (void*)0) && (0 < field_312)) {
            lVar1 = 0;
            do {
                pvVar4 = field_448;
                lVar5 = lVar1 * 32;
                if (*(long*)((long)pvVar4 + lVar5 + 16) != 0) {
                    plVar2 = (long*)((long)pvVar4 + lVar5 + 16);
                    if (0 < *(int*)((long)field_160 + (ulong) * (byte*)((long)pvVar4 + lVar5 + 13) * 2120 + 4)) {
                        lVar6 = 0;
                        do {
                            setup_free((stb_vorbis*)this, *(void**)(*plVar2 + lVar6 * 8));
                            lVar6 = lVar6 + 1;
                        } while (lVar6 <
                                 *(int*)((long)field_160 + (ulong) * (byte*)((long)pvVar4 + lVar5 + 13) * 2120 + 4));
                    }
                    setup_free((stb_vorbis*)this, (void*)*plVar2);
                }
                setup_free((stb_vorbis*)this, *(void**)((long)pvVar4 + lVar5 + 24));
                lVar1 = lVar1 + 1;
            } while (lVar1 < field_312);
        }
        if (field_160 != (void*)0) {
            if (0 < field_152) {
                lVar1 = 8;
                lVar5 = 0;
                do {
                    pvVar4 = field_160;
                    setup_free((stb_vorbis*)this, *(void**)((long)pvVar4 + lVar1));
                    setup_free((stb_vorbis*)this, *(void**)((long)pvVar4 + lVar1 + 24));
                    setup_free((stb_vorbis*)this, *(void**)((long)pvVar4 + lVar1 + 32));
                    setup_free((stb_vorbis*)this, *(void**)((long)pvVar4 + lVar1 + 2088));
                    lVar6 = *(long*)((long)pvVar4 + lVar1 + 2096);
                    pvVar4 = (void*)(lVar6 + -4);
                    if (lVar6 == 0) {
                        pvVar4 = (void*)0;
                    }
                    setup_free((stb_vorbis*)this, pvVar4);
                    lVar5 = lVar5 + 1;
                    lVar1 = lVar1 + 2120;
                } while (lVar5 < field_152);
            }
            setup_free((stb_vorbis*)this, field_160);
        }
        setup_free((stb_vorbis*)this, field_304);
        setup_free((stb_vorbis*)this, field_448);
        if (field_464 != (void*)0) {
            if (0 < field_456) {
                lVar5 = 8;
                lVar1 = 0;
                do {
                    setup_free((stb_vorbis*)this, *(void**)((long)field_464 + lVar5));
                    lVar1 = lVar1 + 1;
                    lVar5 = lVar5 + 48;
                } while (lVar1 < field_456);
            }
            setup_free((stb_vorbis*)this, field_464);
        }
        if (0 < (int)field_4) {
            uVar3 = 0;
            do {
                setup_free((stb_vorbis*)this, *(void**)(field_68 + uVar3 * 8 + 796));
                setup_free((stb_vorbis*)this, *(void**)(field_1739 + uVar3 * 8 + -619));
                setup_free((stb_vorbis*)this, *(void**)(field_1739 + uVar3 * 8 + -483));
                if (14 < uVar3)
                    break;
                uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)(int)field_4);
        }
        lVar1 = 182;
        do {
            setup_free((stb_vorbis*)this, *(void**)(field_68 + lVar1 * 8 + -132));
            setup_free((stb_vorbis*)this, *(void**)(field_68 + lVar1 * 8 + -116));
            setup_free((stb_vorbis*)this, *(void**)(field_68 + lVar1 * 8 + -100));
            setup_free((stb_vorbis*)this, *(void**)(field_68 + lVar1 * 8 + -84));
            setup_free((stb_vorbis*)this, *(void**)(field_68 + lVar1 * 8 + -68));
            lVar1 = lVar1 + 1;
        } while (lVar1 == 183);
        if (field_36 != 0) {
            _fclose(field_24);
        }
    }

    // 0x100b92d90, 32 bytes, placed by debug map only (low confidence)
    // setup_free(stb_vorbis*, void*)
    void setup_free(stb_vorbis* param_1, void* param_2) {
        if (*(long*)(param_1 + 104) == 0) {
            _free(param_2);
            return;
        }
    }

    // 0x100b92df0, 16 bytes, placed by debug map only (low confidence)
    // error(stb_vorbis*, STBVorbisError)
    void error(long param_1, undefined4 param_2) {
        *(undefined4*)(param_1 + 132) = param_2;
    }

    // 0x100b92e00, 800 bytes, placed by debug map only (low confidence)
    // vorbis_search_for_page_pushdata(stb_vorbis*, unsigned char*, int)
    int vorbis_search_for_page_pushdata(stb_vorbis* param_1, uchar* param_2, int param_3) {
        stb_vorbis sVar1;
        undefined8 uVar2;
        uint uVar3;
        undefined4 uVar4;
        uint uVar5;
        uint uVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        uint uVar10;
        long lVar11;
        long lVar12;
        stb_vorbis* psVar13;
        ulong uVar14;
        stb_vorbis* psVar15;
        int iVar16;

        iVar7 = (int)param_2;
        uVar3 = field_1784;
        if (0 < (int)uVar3) {
            lVar11 = 0;
            do {
                *(undefined4*)(field_1740 + lVar11 + 60) = 0;
                lVar11 = lVar11 + 20;
            } while ((ulong)uVar3 * 20 != lVar11);
        }
        if ((int)uVar3 < 4) {
            if (iVar7 < 4) {
                return 0;
            }
            iVar8 = iVar7 + -3;
            psVar13 = param_1 + 27;
            lVar11 = 0;
            psVar15 = param_1;
            do {
                if ((param_1[lVar11] == (stb_vorbis)79) && (*(int*)(param_1 + lVar11) == ogg_page_header._0_4_)) {
                    iVar7 = (int)lVar11;
                    if ((iVar8 <= iVar7 + 26) ||
                        (sVar1 = param_1[lVar11 + 26], iVar8 <= (int)((uint)(byte)sVar1 + iVar7 + 27)))
                        break;
                    iVar16 = (byte)sVar1 + 27;
                    if ((byte)sVar1 != 0) {
                        uVar14 = 0;
                        do {
                            iVar16 = iVar16 + (uint)(byte)psVar13[uVar14];
                            uVar14 = uVar14 + 1;
                        } while ((uint)(byte)sVar1 != uVar14);
                    }
                    uVar3 = 0;
                    lVar12 = -22;
                    do {
                        uVar3 = crc32_update(uVar3, (uchar)psVar15[lVar12 + 22]);
                        lVar12 = lVar12 + 1;
                    } while (lVar12 != 0);
                    iVar9 = 4;
                    do {
                        uVar3 = crc32_update(uVar3, '\0');
                        iVar9 = iVar9 + -1;
                    } while (iVar9 != 0);
                    lVar12 = (long)(int)field_1784;
                    uVar6 = field_1784 + 1;
                    field_1784 = uVar6;
                    *(int*)(field_1740 + lVar12 * 20 + 52) = iVar16 + -26;
                    *(uint*)(field_1740 + lVar12 * 20 + 56) = uVar3;
                    *(undefined4*)(field_1740 + lVar12 * 20 + 48) = *(undefined4*)(param_1 + lVar11 + 22);
                    if (param_1[(int)(iVar7 + 26 + (uint)(byte)param_1[lVar11 + 26])] == (stb_vorbis)255) {
                        uVar4 = 4294967295;
                    } else {
                        uVar4 = *(undefined4*)(param_1 + lVar11 + 6);
                    }
                    *(undefined4*)(field_1740 + lVar12 * 20 + 64) = uVar4;
                    *(int*)(field_1740 + lVar12 * 20 + 60) = iVar7 + 26;
                    iVar7 = iVar8;
                    if (uVar6 == 4)
                        break;
                }
                lVar11 = lVar11 + 1;
                psVar13 = psVar13 + 1;
                psVar15 = psVar15 + 1;
                iVar7 = iVar8;
            } while (lVar11 < iVar8);
        }
        iVar8 = 0;
        while (true) {
            while (true) {
                uVar3 = field_1784;
                if ((int)uVar3 <= iVar8) {
                    return iVar7;
                }
                lVar11 = (long)iVar8;
                iVar16 = *(int*)(field_1740 + lVar11 * 20 + 60);
                uVar6 = *(uint*)(field_1740 + lVar11 * 20 + 52);
                uVar5 = *(uint*)(field_1740 + lVar11 * 20 + 56);
                uVar10 = iVar7 - iVar16;
                if ((int)uVar6 <= iVar7 - iVar16) {
                    uVar10 = uVar6;
                }
                if (0 < (int)uVar10) {
                    uVar14 = 0;
                    do {
                        uVar5 = crc32_update(uVar5, (uchar)param_1[uVar14 + (long)iVar16]);
                        uVar14 = uVar14 + 1;
                    } while (uVar10 != uVar14);
                }
                *(uint*)(field_1740 + lVar11 * 20 + 52) = uVar6 - uVar10;
                *(uint*)(field_1740 + lVar11 * 20 + 56) = uVar5;
                if (uVar6 - uVar10 == 0)
                    break;
                iVar8 = iVar8 + 1;
            }
            if (uVar5 == *(uint*)(field_1740 + lVar11 * 20 + 48))
                break;
            field_1784 = uVar3 - 1;
            *(undefined4*)(field_1740 + lVar11 * 20 + 64) = *(undefined4*)(field_1740 + (long)(int)uVar3 * 20 + 44);
            uVar2 = *(undefined8*)((long)(field_1740 + (long)(int)uVar3 * 20 + 28) + 8);
            *(undefined8*)(field_1740 + lVar11 * 20 + 48) = *(undefined8*)(field_1740 + (long)(int)uVar3 * 20 + 28);
            *(undefined8*)(field_1740 + lVar11 * 20 + 56) = uVar2;
        }
        field_1784 = 4294967295;
        field_1248 = 0;
        field_1744 = -1;
        uVar3 = *(uint*)(field_1740 + lVar11 * 20 + 64);
        field_1384 = uVar3;
        field_1388 = (uint)(uVar3 != 4294967295);
        return uVar10 + iVar16;
    }

    // 0x100b93120, 448 bytes, placed by debug map only (low confidence)
    // is_whole_packet_present(stb_vorbis*, int)
    undefined8 is_whole_packet_present(stb_vorbis* param_1, int param_2) {
        byte bVar1;
        int* piVar2;
        bool bVar3;
        bool bVar4;
        uint uVar5;
        ulong uVar6;
        int* piVar7;
        stb_vorbis* psVar8;
        int* piVar9;
        undefined8 uVar10;
        uint uVar11;
        ulong uVar12;

        uVar6 = (ulong) * (int*)(param_1 + 1744);
        piVar9 = *(int**)(param_1 + 40);
        if (uVar6 == 18446744073709551615) {
            bVar4 = true;
            uVar12 = 4294967295;
        LAB_100b931d0:
            do {
                if ((int)uVar12 != -1) {
                    return 1;
                }
                piVar2 = *(int**)(param_1 + 56);
                uVar12 = 4294967295;
                uVar10 = 1;
                piVar7 = piVar9;
                if ((int*)((long)piVar9 + 26U) < piVar2) {
                    if ((*piVar9 != ogg_page_header._0_4_) || ((char)piVar9[1] != '\0')) {
                        uVar10 = 21;
                        goto LAB_100b93208;
                    }
                    if (!bVar4) {
                        if ((*(byte*)((long)piVar9 + 5) & 1) != 0)
                            goto LAB_100b9324b;
                        uVar10 = 21;
                        bVar4 = false;
                        goto LAB_100b93208;
                    }
                    if ((*(int*)(param_1 + 1248) != 0) && ((*(byte*)((long)piVar9 + 5) & 1) != 0)) {
                        uVar10 = 21;
                        bVar4 = true;
                        goto LAB_100b93208;
                    }
                LAB_100b9324b:
                    bVar1 = *(byte*)((long)piVar9 + 26);
                    piVar7 = (int*)((long)piVar9 + (ulong)bVar1 + 27);
                    if (piVar2 < piVar7) {
                    LAB_100b932b7:
                        goto LAB_100b93208;
                    }
                    if (bVar1 == 0) {
                        uVar12 = 0;
                    } else {
                        uVar12 = 0;
                        do {
                            uVar6 = (ulong) * (byte*)((long)piVar9 + uVar12 + 27);
                            piVar7 = (int*)((long)piVar7 + uVar6);
                            if (uVar6 != 255)
                                goto LAB_100b93292;
                            uVar12 = uVar12 + 1;
                        } while (bVar1 != uVar12);
                        uVar12 = (ulong)(uint)bVar1;
                    }
                LAB_100b93292:
                    uVar11 = (uint)uVar12;
                    if ((param_2 != 0) && ((int)uVar11 < (int)(bVar1 - 1))) {
                        uVar10 = 21;
                        goto LAB_100b932b7;
                    }
                    uVar12 = uVar12 & 4294967295;
                    if (uVar11 == bVar1) {
                        uVar12 = 4294967295;
                    }
                    if (piVar2 < piVar7)
                        goto LAB_100b932b7;
                    bVar3 = true;
                    bVar4 = false;
                } else {
                LAB_100b93208:
                    error(param_1, uVar10);
                    bVar3 = false;
                }
                piVar9 = piVar7;
            } while (bVar3);
        } else {
            uVar11 = *(uint*)(param_1 + 1480);
            if (*(int*)(param_1 + 1744) < (int)uVar11) {
                psVar8 = param_1 + uVar6 + 1484;
                do {
                    piVar9 = (int*)((long)piVar9 + (ulong)(byte)*psVar8);
                    if ((ulong)(byte)*psVar8 != 255)
                        goto LAB_100b9317c;
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulong)uVar5;
                    psVar8 = psVar8 + 1;
                } while (uVar11 != uVar5);
                uVar6 = (ulong)uVar11;
            }
        LAB_100b9317c:
            if ((param_2 == 0) || (uVar10 = 21, (int)(uVar11 - 1) <= (int)(uint)uVar6)) {
                uVar12 = 4294967295;
                if ((uint)uVar6 != uVar11) {
                    uVar12 = uVar6 & 4294967295;
                }
                bVar4 = false;
                uVar10 = 1;
                if (piVar9 <= *(int**)(param_1 + 56))
                    goto LAB_100b931d0;
            }
            error(param_1, uVar10);
        }
        return 0;
    }

    // 0x100b932e0, 128 bytes, placed by debug map only (low confidence)
    // vorbis_decode_packet(stb_vorbis*, int*, int*, int*)
    undefined8 vorbis_decode_packet(stb_vorbis* param_1, int* param_2, int* param_3, int* param_4) {
        int iVar1;
        undefined8 uVar2;
        int* in_stack_ffffffffffffffb8;
        int in_stack_ffffffffffffffc0;
        int* in_stack_ffffffffffffffc8;
        int local_30;
        int local_2c;

        iVar1 = vorbis_decode_initial(this, (stb_vorbis*)param_2, (int*)((long)register0x00000020 + -52), param_3,
                                      &local_2c, &local_30, in_stack_ffffffffffffffb8);
        if (iVar1 == 0) {
            uVar2 = 0;
        } else {
            uVar2 = vorbis_decode_packet_rest(this, param_1, (int*)(field_68 + (long)local_30 * 6 + 408),
                                              (Mode*)(ulong)(uint)*param_2, *param_3, local_2c, (int)param_2,
                                              in_stack_ffffffffffffffc0, in_stack_ffffffffffffffc8);
        }
        return uVar2;
    }

    // 0x100b93360, 32 bytes, placed by debug map only (low confidence)
    // get8_packet(stb_vorbis*)
    void get8_packet(stb_vorbis* param_1) {
        get8_packet_raw(param_1);
        *(undefined4*)(param_1 + 1760) = 0;
    }

    // 0x100b93380, 352 bytes, placed by debug map only (low confidence)
    // vorbis_finish_frame(stb_vorbis*, int, int, int)
    int vorbis_finish_frame(stb_vorbis* param_1, int param_2, int param_3, int param_4) {
        uint uVar1;
        uint uVar2;
        long lVar3;
        long lVar4;
        uint uVar5;
        long lVar6;
        ulong uVar7;
        ulong uVar8;
        ulong uVar9;
        int iVar10;

        uVar1 = field_1248;
        uVar7 = (ulong)uVar1;
        if (uVar7 != 0) {
            lVar4 = get_window((stb_vorbis*)this, uVar1);
            uVar2 = field_4;
            if (0 < (int)uVar2) {
                uVar9 = 0;
                do {
                    if (0 < (int)uVar1) {
                        lVar3 = *(long*)(field_1739 + uVar9 * 8 + -619);
                        lVar6 = *(long*)(field_68 + uVar9 * 8 + 796) + (long)param_2 * 4;
                        uVar8 = 0;
                        uVar5 = uVar1;
                        do {
                            uVar5 = uVar5 - 1;
                            *(float*)(lVar6 + uVar8 * 4) =
                                *(float*)(lVar4 + (long)(int)uVar5 * 4) * *(float*)(lVar3 + uVar8 * 4) +
                                *(float*)(lVar4 + uVar8 * 4) * *(float*)(lVar6 + uVar8 * 4);
                            uVar8 = uVar8 + 1;
                        } while (uVar7 != uVar8);
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 != uVar2);
            }
        }
        iVar10 = (int)param_1;
        field_1248 = iVar10 - param_3;
        uVar1 = field_4;
        if (0 < (int)uVar1) {
            uVar9 = 0;
            do {
                if (param_3 < iVar10) {
                    lVar4 = *(long*)(field_1739 + uVar9 * 8 + -619);
                    lVar3 = *(long*)(field_68 + uVar9 * 8 + 796);
                    uVar8 = 0;
                    do {
                        *(undefined4*)(lVar4 + uVar8 * 4) = *(undefined4*)(lVar3 + (long)param_3 * 4 + uVar8 * 4);
                        uVar8 = uVar8 + 1;
                    } while ((uint)(iVar10 - param_3) != uVar8);
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 != uVar1);
        }
        if (uVar7 == 0) {
            iVar10 = 0;
        } else {
            if (iVar10 < param_3) {
                param_3 = iVar10;
            }
            iVar10 = param_3 - param_2;
            field_1780 = field_1780 + iVar10;
        }
        return iVar10;
    }

    // 0x100b934e0, 112 bytes, placed by debug map only (low confidence)
    // vorbis_init(stb_vorbis*, stb_vorbis_alloc*)
    void vorbis_init(stb_vorbis* param_1, stb_vorbis_alloc* param_2) {
        undefined8 uVar1;
        uint uVar2;

        ___bzero(this, 1880);
        if (param_1 != (stb_vorbis*)0) {
            uVar1 = *(undefined8*)(param_1 + 8);
            field_104 = *(long*)param_1;
            *(undefined8*)&field_112 = uVar1;
            uVar2 = field_112 + 3 & 4294967292;
            field_112 = uVar2;
            field_124 = uVar2;
        }
        field_128 = 0;
        field_132 = 0;
        field_40 = (byte*)0;
        field_160 = (void*)0;
        field_1784 = 4294967295;
        field_36 = 0;
        field_24 = (FILE*)0;
    }

    // 0x100b93550, 7456 bytes, placed by debug map only (low confidence)
    // start_decoder(stb_vorbis*)
    undefined8 start_decoder(stb_vorbis* param_1) {
        Codebook* pCVar1;
        bool bVar2;
        char cVar3;
        byte bVar4;
        byte bVar5;
        char cVar7;
        undefined1 uVar8;
        stb_vorbis sVar9;
        ushort uVar10;
        short sVar11;
        undefined2 uVar12;
        int iVar13;
        uint uVar14;
        int iVar15;
        uint uVar16;
        undefined4 uVar17;
        ulong uVar18;
        void* pvVar19;
        uint* puVar20;
        undefined4* puVar21;
        uint* puVar22;
        uint uVar23;
        long lVar24;
        float* pfVar25;
        long lVar26;
        ulong uVar27;
        stb_vorbis* psVar28;
        undefined8 uVar29;
        uchar* puVar30;
        long lVar31;
        undefined8 uVar32;
        int iVar33;
        uint* puVar34;
        ushort* puVar35;
        int iVar36;
        byte* pbVar37;
        byte* pbVar38;
        byte local_488[4];
        byte local_484[4];
        byte* local_480;
        uchar local_476[6];
        uint* local_470;
        undefined8 local_468;
        byte* local_460;
        byte* local_458;
        undefined8 local_450;
        uint* local_448;
        uint* local_440;
        long local_438;
        uint* local_430;
        ushort local_428;
        byte abStack_426[1006];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar13 = start_page(param_1);
        uVar32 = 0;
        if (iVar13 == 0)
            goto LAB_100b935f5;
        sVar9 = param_1[1739];
        if ((((((byte)sVar9 & 2) == 0) || (((byte)sVar9 & 4) != 0)) || (((byte)sVar9 & 1) != 0)) ||
            (((*(int*)(param_1 + 1480) != 1 || (param_1[1484] != (stb_vorbis)30)) ||
              (cVar3 = get8(param_1), cVar3 != '\x01')))) {
        LAB_100b935e8:
            uVar29 = 34;
        } else {
            puVar30 = local_476;
            iVar13 = getn(param_1, puVar30, 6);
            if (iVar13 != 0) {
                iVar13 = vorbis_validate((vorbis*)local_476, puVar30);
                if ((iVar13 != 0) && (iVar13 = get32(param_1), iVar13 == 0)) {
                    bVar4 = get8(param_1);
                    *(uint*)(param_1 + 4) = (uint)bVar4;
                    if (bVar4 != 0) {
                        if (16 < bVar4) {
                            uVar29 = 5;
                            goto LAB_100b935f0;
                        }
                        iVar13 = get32(param_1);
                        *(int*)param_1 = iVar13;
                        if (iVar13 != 0) {
                            get32(param_1);
                            get32(param_1);
                            get32(param_1);
                            bVar5 = get8(param_1);
                            uVar23 = bVar5 & 15;
                            bVar4 = bVar5 >> 4;
                            *(int*)(param_1 + 144) = 1 << (sbyte)uVar23;
                            *(int*)(param_1 + 148) = 1 << bVar4;
                            if (((uVar23 - 6 < 8) && (-1 < (char)(bVar5 + 160))) &&
                                (uVar23 < bVar4 || uVar23 == bVar4)) {
                                uVar18 = get8(param_1);
                                if ((uVar18 & 1) == 0)
                                    goto LAB_100b935e8;
                                iVar13 = start_page(param_1);
                                if ((iVar13 == 0) || (iVar13 = start_packet(param_1), iVar13 == 0))
                                    goto LAB_100b935f5;
                                do {
                                    uVar23 = next_segment(param_1);
                                    puVar30 = (uchar*)(ulong)uVar23;
                                    skip(param_1, uVar23);
                                    param_1[1740] = (stb_vorbis)0;
                                } while (uVar23 != 0);
                                iVar13 = start_packet(param_1);
                                if (iVar13 == 0)
                                    goto LAB_100b935f5;
                                if (param_1[68] != (stb_vorbis)0) {
                                    puVar30 = &DAT_00000001;
                                    iVar13 = is_whole_packet_present(param_1, 1);
                                    if (iVar13 == 0) {
                                        if (*(int*)(param_1 + 132) == 21) {
                                            *(undefined4*)(param_1 + 132) = 20;
                                        }
                                        goto LAB_100b935f5;
                                    }
                                }
                                crc32_init();
                                iVar13 = get8_packet(param_1);
                                if (iVar13 == 5) {
                                    lVar24 = 0;
                                    do {
                                        local_476[lVar24] = get8_packet(param_1);
                                        lVar24 = lVar24 + 1;
                                    } while (lVar24 != 6);
                                    iVar13 = vorbis_validate((vorbis*)local_476, puVar30);
                                    if (iVar13 == 0) {
                                    LAB_100b951c6:
                                        uVar32 = 20;
                                    } else {
                                        iVar13 = get_bits(param_1, 8);
                                        *(int*)(param_1 + 152) = iVar13 + 1;
                                        lVar24 = setup_malloc(param_1, (iVar13 + 1) * 2120);
                                        *(long*)(param_1 + 160) = lVar24;
                                        if (lVar24 != 0) {
                                            ___bzero(lVar24, (long)*(int*)(param_1 + 152) * 2120);
                                            if (0 < *(int*)(param_1 + 152)) {
                                                local_458 = (byte*)0;
                                                do {
                                                    local_430 = *(uint**)(param_1 + 160);
                                                    cVar3 = get_bits(param_1, 8);
                                                    if (((cVar3 == 'B') &&
                                                         (cVar3 = get_bits(param_1, 8), cVar3 == 'C')) &&
                                                        (cVar3 = get_bits(param_1, 8), puVar20 = local_430,
                                                         pbVar37 = local_458, cVar3 == 'V')) {
                                                        lVar24 = (long)local_458 * 2120;
                                                        pCVar1 = (Codebook*)(local_430 + (long)local_458 * 530);
                                                        uVar23 = get_bits(param_1, 8);
                                                        iVar13 = get_bits(param_1, 8);
                                                        *(uint*)pCVar1 = uVar23 & 255 | iVar13 << 8;
                                                        local_468 = pCVar1;
                                                        uVar23 = get_bits(param_1, 8);
                                                        uVar14 = get_bits(param_1, 8);
                                                        iVar13 = get_bits(param_1, 8);
                                                        puVar20[(long)pbVar37 * 530 + 1] =
                                                            uVar23 & 255 | (uVar14 & 255) << 8 | iVar13 << 16;
                                                        local_438 = lVar24;
                                                        iVar13 = get_bits(param_1, 1);
                                                        bVar4 = 0;
                                                        if (iVar13 == 0) {
                                                            bVar4 = get_bits(param_1, 1);
                                                        }
                                                        local_448 = (uint*)((long)local_430 + local_438 + 4);
                                                        *(byte*)((long)local_430 + local_438 + 27) = bVar4;
                                                        if (bVar4 == 0) {
                                                            local_440 = (uint*)setup_malloc(param_1, *local_448);
                                                            *(uint**)((long)local_430 + local_438 + 8) = local_440;
                                                        } else {
                                                            local_440 = (uint*)setup_temp_malloc(param_1, *local_448);
                                                        }
                                                        if (local_440 == (uint*)0)
                                                            goto LAB_100b93ec8;
                                                        local_460 = (byte*)((long)local_430 + local_438 + 27);
                                                        if (iVar13 != 0) {
                                                            iVar15 = get_bits(param_1, 5);
                                                            iVar15 = iVar15 + 1;
                                                            local_450 = local_450 & 18446744069414584320;
                                                            iVar13 = 0;
                                                            do {
                                                                iVar33 = *local_448 - iVar13;
                                                                if (iVar33 == 0 || (int)*local_448 < iVar13)
                                                                    goto LAB_100b93a86;
                                                                iVar33 = ilog(iVar33);
                                                                iVar33 = get_bits(param_1, iVar33);
                                                                iVar36 = iVar33 + iVar13;
                                                                uVar23 = *local_448;
                                                                if ((int)uVar23 < iVar36) {
                                                                    error(param_1, 20);
                                                                } else {
                                                                    _memset((byte*)((long)iVar13 + (long)local_440),
                                                                            iVar15, (long)iVar33);
                                                                    iVar15 = iVar15 + 1;
                                                                    iVar13 = iVar36;
                                                                }
                                                                iVar33 = 1;
                                                            } while (iVar36 <= (int)uVar23);
                                                            goto LAB_100b93efd;
                                                        }
                                                        if ((int)*local_448 < 1) {
                                                            local_450 = (ulong)local_450._4_4_ << 32;
                                                        } else {
                                                            lVar24 = 0;
                                                            local_450 = (ulong)local_450._4_4_ << 32;
                                                            do {
                                                                if (*local_460 == 0) {
                                                                    iVar13 = 1;
                                                                } else {
                                                                    iVar13 = get_bits(param_1, 1);
                                                                }
                                                                if (iVar13 == 0) {
                                                                    *(byte*)((long)local_440 + lVar24) = 255;
                                                                } else {
                                                                    cVar3 = get_bits(param_1, 5);
                                                                    *(byte*)((long)local_440 + lVar24) = cVar3 + 1;
                                                                    local_450 =
                                                                        CONCAT44(local_450._4_4_, (int)local_450 + 1);
                                                                }
                                                                lVar24 = lVar24 + 1;
                                                            } while (lVar24 < (int)*local_448);
                                                        }
                                                    LAB_100b93a86:
                                                        if (*local_460 != 0) {
                                                            uVar23 = *local_448;
                                                            if ((int)uVar23 >> 2 <= (int)local_450) {
                                                                if (*(int*)(param_1 + 16) < (int)uVar23) {
                                                                    *(uint*)(param_1 + 16) = uVar23;
                                                                }
                                                                pvVar19 = (void*)setup_malloc(param_1, uVar23);
                                                                puVar22 = local_440;
                                                                puVar20 = local_448;
                                                                *(void**)((long)local_430 + local_438 + 8) = pvVar19;
                                                                if (pvVar19 == (void*)0)
                                                                    goto LAB_100b93ec8;
                                                                pbVar37 = (byte*)((long)local_430 + local_438 + 8);
                                                                _memcpy(pvVar19, local_440, (long)(int)*local_448);
                                                                setup_temp_free(param_1, puVar22, *puVar20);
                                                                local_440 = *(uint**)pbVar37;
                                                                *local_460 = 0;
                                                            }
                                                        }
                                                        bVar4 = *local_460;
                                                        if (bVar4 == 0) {
                                                            if ((int)*local_448 < 1) {
                                                                local_450 = (ulong)local_450._4_4_ << 32;
                                                            } else {
                                                                uVar18 = 0;
                                                                local_450 = (ulong)local_450._4_4_ << 32;
                                                                do {
                                                                    local_450 = CONCAT44(
                                                                        local_450._4_4_,
                                                                        (int)local_450 +
                                                                            (uint)((byte)(*(byte*)((long)local_440 +
                                                                                                   uVar18) -
                                                                                          11) < 244));
                                                                    uVar18 = uVar18 + 1;
                                                                } while (*local_448 != uVar18);
                                                            }
                                                        }
                                                        local_470 = (uint*)((long)local_430 + local_438 + 2112);
                                                        *(int*)((long)local_430 + local_438 + 2112) = (int)local_450;
                                                        if (bVar4 == 0) {
                                                            lVar24 = setup_malloc(param_1, *local_448 << 2);
                                                            *(long*)((long)local_430 + local_438 + 40) = lVar24;
                                                            if (lVar24 == 0)
                                                                goto LAB_100b93ec8;
                                                            puVar20 = (uint*)0;
                                                        } else {
                                                            if ((int)local_450 == 0) {
                                                                puVar20 = (uint*)0;
                                                            LAB_100b93c7d:
                                                                uVar23 = *local_470 * 8 + *local_448;
                                                                bVar2 = true;
                                                                if (*(uint*)(param_1 + 16) < uVar23) {
                                                                    *(uint*)(param_1 + 16) = uVar23;
                                                                }
                                                            } else {
                                                                lVar24 = setup_malloc(param_1, (int)local_450);
                                                                *(long*)((long)local_430 + local_438 + 8) = lVar24;
                                                                if (lVar24 != 0) {
                                                                    lVar24 =
                                                                        setup_temp_malloc(param_1, *local_470 << 2);
                                                                    *(long*)((long)local_430 + local_438 + 40) = lVar24;
                                                                    if ((lVar24 != 0) &&
                                                                        (puVar20 = (uint*)setup_temp_malloc(
                                                                             param_1, *local_470 << 2),
                                                                         puVar20 != (uint*)0))
                                                                        goto LAB_100b93c7d;
                                                                }
                                                                error(param_1, 3);
                                                                puVar20 = (uint*)0;
                                                                bVar2 = false;
                                                            }
                                                            iVar33 = 1;
                                                            if (!bVar2)
                                                                goto LAB_100b93efd;
                                                        }
                                                        iVar13 = compute_codewords(local_468, (uchar*)local_440,
                                                                                   *local_448, puVar20);
                                                        if (iVar13 == 0) {
                                                            if (*local_460 != 0) {
                                                                setup_temp_free(param_1, puVar20, 0);
                                                            }
                                                            goto LAB_100b93eeb;
                                                        }
                                                        if (*local_470 != 0) {
                                                            lVar24 = setup_malloc(param_1, *local_470 * 4 + 4);
                                                            *(long*)((long)local_430 + local_438 + 2096) = lVar24;
                                                            if (lVar24 != 0) {
                                                                puVar21 = (undefined4*)setup_malloc(param_1,
                                                                                                    *local_470 * 4 + 4);
                                                                *(undefined4**)((long)local_430 + local_438 + 2104) =
                                                                    puVar21;
                                                                if (puVar21 != (undefined4*)0) {
                                                                    *(undefined4**)((long)local_430 + local_438 +
                                                                                    2104) = puVar21 + 1;
                                                                    *puVar21 = 4294967295;
                                                                    compute_sorted_huffman(local_468, (uchar*)local_440,
                                                                                           puVar20);
                                                                    goto LAB_100b93d86;
                                                                }
                                                            }
                                                        LAB_100b93ec8:
                                                            uVar32 = 3;
                                                            goto LAB_100b93ef3;
                                                        }
                                                    LAB_100b93d86:
                                                        puVar22 = local_470;
                                                        if (*local_460 != 0) {
                                                            setup_temp_free(param_1, puVar20, *local_470 << 2);
                                                            puVar20 = local_430;
                                                            lVar24 = local_438;
                                                            setup_temp_free(param_1,
                                                                            *(void**)((long)local_430 + local_438 + 40),
                                                                            *puVar22 << 2);
                                                            setup_temp_free(param_1, local_440, *local_448);
                                                            pbVar37 = (byte*)((long)puVar20 + lVar24 + 40);
                                                            pbVar37[0] = 0;
                                                            pbVar37[1] = 0;
                                                            pbVar37[2] = 0;
                                                            pbVar37[3] = 0;
                                                            pbVar37[4] = 0;
                                                            pbVar37[5] = 0;
                                                            pbVar37[6] = 0;
                                                            pbVar37[7] = 0;
                                                        }
                                                        compute_accelerated_huffman(local_468);
                                                        bVar4 = get_bits(param_1, 4);
                                                        puVar20 = local_430;
                                                        lVar24 = local_438;
                                                        *(byte*)((long)local_430 + local_438 + 25) = bVar4;
                                                        if (2 < bVar4)
                                                            goto LAB_100b93eeb;
                                                        if (bVar4 != 0) {
                                                            pbVar37 = (byte*)((long)local_430 + local_438 + 25);
                                                            uVar23 = get_bits(param_1, 32);
                                                            uVar17 = float32_unpack(uVar23);
                                                            *(undefined4*)((long)puVar20 + lVar24 + 16) = uVar17;
                                                            uVar23 = get_bits(param_1, 32);
                                                            uVar17 = float32_unpack(uVar23);
                                                            *(undefined4*)((long)puVar20 + lVar24 + 20) = uVar17;
                                                            cVar3 = get_bits(param_1, 4);
                                                            *(byte*)((long)puVar20 + lVar24 + 24) = cVar3 + 1;
                                                            bVar4 = get_bits(param_1, 1);
                                                            *(byte*)((long)puVar20 + lVar24 + 26) = bVar4;
                                                            local_480 = pbVar37;
                                                            if (*pbVar37 == 1) {
                                                                iVar13 = lookup1_values(*local_448, *(uint*)local_468);
                                                            } else {
                                                                iVar13 = *(uint*)local_468 * *local_448;
                                                            }
                                                            *(int*)((long)local_430 + local_438 + 28) = iVar13;
                                                            pvVar19 = (void*)setup_temp_malloc(param_1, iVar13 * 2);
                                                            if (pvVar19 == (void*)0) {
                                                            LAB_100b94216:
                                                                error(param_1, 3);
                                                            LAB_100b94223:
                                                                iVar33 = 1;
                                                            } else {
                                                                local_440 = (uint*)((long)local_430 + local_438 + 28);
                                                                uVar23 = *local_440;
                                                                if (0 < (int)uVar23) {
                                                                    pbVar37 = (byte*)((long)local_430 + local_438 + 24);
                                                                    lVar24 = 0;
                                                                    do {
                                                                        iVar13 = get_bits(param_1, (uint)*pbVar37);
                                                                        if (iVar13 == -1) {
                                                                            setup_temp_free(param_1, pvVar19,
                                                                                            *local_440 * 2);
                                                                            error(param_1, 20);
                                                                            goto LAB_100b94223;
                                                                        }
                                                                        *(short*)((long)pvVar19 + lVar24 * 2) =
                                                                            (short)iVar13;
                                                                        lVar24 = lVar24 + 1;
                                                                        uVar23 = *local_440;
                                                                    } while (lVar24 < (int)uVar23);
                                                                }
                                                                puVar20 = local_430;
                                                                lVar24 = local_438;
                                                                pfVar25 = (float*)((long)local_430 + local_438 + 16);
                                                                if (*local_480 == 1) {
                                                                    local_450 = CONCAT71(local_450._1_7_, *local_460);
                                                                    if (*local_460 == 0) {
                                                                        uVar23 = *local_448;
                                                                    LAB_100b940d0:
                                                                        local_460 = (byte*)setup_malloc(
                                                                            param_1, uVar23 * *(uint*)local_468 * 4);
                                                                        *(byte**)((long)local_430 + local_438 + 32) =
                                                                            local_460;
                                                                        if (local_460 == (byte*)0) {
                                                                            setup_temp_free(param_1, pvVar19,
                                                                                            *local_440 * 2);
                                                                            error(param_1, 3);
                                                                            iVar33 = 1;
                                                                        } else {
                                                                            puVar22 = local_470;
                                                                            if ((char)local_450 == '\0') {
                                                                                puVar22 = local_448;
                                                                            }
                                                                            uVar23 = *puVar22;
                                                                            if (0 < (int)uVar23) {
                                                                                local_448 = (uint*)((long)local_430 +
                                                                                                    local_438 + 2104);
                                                                                uVar14 = *(uint*)local_468;
                                                                                iVar13 = 0;
                                                                                uVar18 = 0;
                                                                                do {
                                                                                    if ((char)local_450 == '\0') {
                                                                                        iVar15 = (int)uVar18;
                                                                                    } else {
                                                                                        iVar15 =
                                                                                            *(int*)(*(long*)local_448 +
                                                                                                    uVar18 * 4);
                                                                                    }
                                                                                    if (0 < (int)uVar14) {
                                                                                        uVar16 = *local_440;
                                                                                        iVar33 = 1;
                                                                                        uVar27 = 0;
                                                                                        do {
                                                                                            *(float*)(local_460 +
                                                                                                      uVar27 * 4 +
                                                                                                      (long)iVar13 *
                                                                                                          4) =
                                                                                                (float)*(
                                                                                                    ushort*)((long)
                                                                                                                 pvVar19 +
                                                                                                             (long)(int)(((long)iVar15 /
                                                                                                                              (long)
                                                                                                                                  iVar33 &
                                                                                                                          4294967295U) %
                                                                                                                         (ulong)
                                                                                                                             uVar16) *
                                                                                                                 2) *
                                                                                                    *(float*)((long)
                                                                                                                  puVar20 +
                                                                                                              lVar24 +
                                                                                                              20) +
                                                                                                *pfVar25;
                                                                                            iVar33 = iVar33 * uVar16;
                                                                                            uVar27 = uVar27 + 1;
                                                                                        } while (uVar14 != uVar27);
                                                                                    }
                                                                                    uVar18 = uVar18 + 1;
                                                                                    iVar13 = iVar13 + uVar14;
                                                                                } while (uVar18 != uVar23);
                                                                            }
                                                                            setup_temp_free(param_1, pvVar19,
                                                                                            *local_440 * 2);
                                                                            *local_480 = 2;
                                                                            iVar33 = 0;
                                                                        }
                                                                    } else {
                                                                        uVar23 = *local_470;
                                                                        if (uVar23 != 0)
                                                                            goto LAB_100b940d0;
                                                                        iVar33 = 21;
                                                                    }
                                                                    if ((iVar33 != 0) && (iVar33 != 21))
                                                                        goto LAB_100b94228;
                                                                } else {
                                                                    lVar26 = setup_malloc(param_1, uVar23 << 2);
                                                                    *(long*)((long)local_430 + local_438 + 32) = lVar26;
                                                                    uVar23 = *local_440;
                                                                    if (lVar26 == 0) {
                                                                        setup_temp_free(param_1, pvVar19, uVar23 * 2);
                                                                        goto LAB_100b94216;
                                                                    }
                                                                    if (0 < (int)uVar23) {
                                                                        lVar26 =
                                                                            *(long*)((long)local_430 + local_438 + 32);
                                                                        uVar18 = 0;
                                                                        do {
                                                                            *(float*)(lVar26 + uVar18 * 4) =
                                                                                (float)*(ushort*)((long)pvVar19 +
                                                                                                  uVar18 * 2) *
                                                                                    *(float*)((long)puVar20 + lVar24 +
                                                                                              20) +
                                                                                *pfVar25;
                                                                            uVar18 = uVar18 + 1;
                                                                        } while (uVar23 != uVar18);
                                                                    }
                                                                    setup_temp_free(param_1, pvVar19, uVar23 * 2);
                                                                }
                                                                iVar33 = 0;
                                                                if ((*local_480 == 2) &&
                                                                    (pbVar37 =
                                                                         (byte*)((long)local_430 + local_438 + 26),
                                                                     *pbVar37 != 0)) {
                                                                    uVar23 = *local_440;
                                                                    if (1 < (int)uVar23) {
                                                                        puVar21 = *(undefined4**)((long)local_430 +
                                                                                                  local_438 + 32);
                                                                        uVar17 = *puVar21;
                                                                        uVar18 = 1;
                                                                        do {
                                                                            puVar21[uVar18] = uVar17;
                                                                            uVar18 = uVar18 + 1;
                                                                        } while (uVar23 != uVar18);
                                                                    }
                                                                    *pbVar37 = 0;
                                                                }
                                                            }
                                                        LAB_100b94228:
                                                            if (iVar33 != 0)
                                                                goto LAB_100b93efd;
                                                        }
                                                        iVar33 = 0;
                                                    } else {
                                                    LAB_100b93eeb:
                                                        uVar32 = 20;
                                                    LAB_100b93ef3:
                                                        error(param_1, uVar32);
                                                        iVar33 = 1;
                                                    }
                                                LAB_100b93efd:
                                                    if (iVar33 != 0)
                                                        goto LAB_100b94f0c;
                                                    local_458 = local_458 + 1;
                                                } while ((long)local_458 < (long)*(int*)(param_1 + 152));
                                            }
                                            iVar13 = get_bits(param_1, 6);
                                            for (uVar23 = iVar13 + 1U & 255; uVar23 != 0; uVar23 = uVar23 - 1) {
                                                iVar13 = get_bits(param_1, 16);
                                                if (iVar13 != 0)
                                                    goto LAB_100b951c6;
                                            }
                                            iVar13 = get_bits(param_1, 6);
                                            *(int*)(param_1 + 168) = iVar13 + 1;
                                            lVar24 = setup_malloc(param_1, (iVar13 + 1) * 1596);
                                            *(long*)(param_1 + 304) = lVar24;
                                            if (lVar24 != 0) {
                                                if (0 < *(int*)(param_1 + 168)) {
                                                    local_450 = 0;
                                                    local_468 = (Codebook*)((ulong)local_468._4_4_ << 32);
                                                LAB_100b9437d:
                                                    uVar10 = get_bits(param_1, 16);
                                                    *(ushort*)(param_1 + local_450 * 2 + 172) = uVar10;
                                                    if (uVar10 < 2) {
                                                        if (uVar10 == 0) {
                                                            uVar18 = local_450 & 4294967295;
                                                            lVar24 = *(long*)(param_1 + 304);
                                                            uVar8 = get_bits(param_1, 8);
                                                            lVar26 = uVar18 * 1596;
                                                            *(undefined1*)(lVar24 + lVar26) = uVar8;
                                                            uVar12 = get_bits(param_1, 16);
                                                            *(undefined2*)(lVar24 + 2 + lVar26) = uVar12;
                                                            uVar12 = get_bits(param_1, 16);
                                                            *(undefined2*)(lVar24 + 4 + lVar26) = uVar12;
                                                            uVar8 = get_bits(param_1, 6);
                                                            *(undefined1*)(lVar24 + 6 + lVar26) = uVar8;
                                                            uVar8 = get_bits(param_1, 8);
                                                            *(undefined1*)(lVar24 + 7 + lVar26) = uVar8;
                                                            cVar3 = get_bits(param_1, 4);
                                                            *(char*)(lVar24 + 8 + lVar26) = cVar3 + '\x01';
                                                            if ((char)(cVar3 + '\x01') != '\0') {
                                                                lVar31 = local_450 * 1596;
                                                                uVar18 = 0;
                                                                do {
                                                                    uVar8 = get_bits(param_1, 8);
                                                                    *(undefined1*)(lVar24 + lVar31 + 9 + uVar18) =
                                                                        uVar8;
                                                                    uVar18 = uVar18 + 1;
                                                                } while (uVar18 < *(byte*)(lVar24 + lVar26 + 8));
                                                            }
                                                            uVar32 = 4;
                                                            goto LAB_100b951d8;
                                                        }
                                                        pbVar37 = *(byte**)(param_1 + 304);
                                                        bVar4 = get_bits(param_1, 5);
                                                        local_438 = local_450 * 1596;
                                                        local_458 = pbVar37 + local_438;
                                                        pbVar37[local_438] = bVar4;
                                                        local_460 = pbVar37;
                                                        if (bVar4 == 0) {
                                                            uVar23 = 4294967295;
                                                        } else {
                                                            lVar24 = local_438 + 1;
                                                            uVar23 = 4294967295;
                                                            uVar18 = 0;
                                                            do {
                                                                bVar4 = get_bits(param_1, 4);
                                                                if ((int)uVar23 < (int)(uint)bVar4) {
                                                                    uVar23 = (uint)bVar4;
                                                                }
                                                                pbVar37[uVar18 + lVar24] = bVar4;
                                                                uVar18 = uVar18 + 1;
                                                            } while (uVar18 < *local_458);
                                                        }
                                                        if (-1 < (int)uVar23) {
                                                            pbVar37 = local_460 + local_438 + 82;
                                                            local_448 = (uint*)0;
                                                            do {
                                                                cVar3 = get_bits(param_1, 3);
                                                                puVar20 = local_448;
                                                                pbVar38 = local_458;
                                                                ((byte*)((long)local_448 + 33))[(long)local_458] =
                                                                    cVar3 + 1;
                                                                bVar4 = get_bits(param_1, 2);
                                                                ((byte*)((long)puVar20 + 49))[(long)pbVar38] = bVar4;
                                                                if (bVar4 != 0) {
                                                                    bVar4 = get_bits(param_1, 8);
                                                                    ((byte*)((long)local_448 + 65))[(long)local_458] =
                                                                        bVar4;
                                                                    if (*(int*)(param_1 + 152) <= (int)(uint)bVar4) {
                                                                    LAB_100b94550:
                                                                        error(param_1, 20);
                                                                        bVar2 = false;
                                                                        goto LAB_100b947b8;
                                                                    }
                                                                }
                                                                pbVar38 = (byte*)((long)local_448 + (long)local_458);
                                                                if (pbVar38[49] != 31) {
                                                                    lVar24 = 0;
                                                                    do {
                                                                        sVar11 = get_bits(param_1, 8);
                                                                        *(short*)(pbVar37 + lVar24 * 2) = sVar11 + -1;
                                                                        if (*(int*)(param_1 + 152) <=
                                                                            (int)(short)(sVar11 + -1))
                                                                            goto LAB_100b94550;
                                                                        lVar24 = lVar24 + 1;
                                                                    } while (lVar24 < 1 << (pbVar38[49] & 31));
                                                                }
                                                                local_448 = (uint*)((long)local_448 + 1);
                                                                pbVar37 = pbVar37 + 16;
                                                            } while (local_448 != (uint*)(ulong)(uVar23 + 1));
                                                        }
                                                        cVar3 = get_bits(param_1, 2);
                                                        lVar24 = local_438;
                                                        pbVar37 = local_460;
                                                        local_460[local_438 + 1588] = cVar3 + 1;
                                                        bVar4 = get_bits(param_1, 4);
                                                        pbVar37[lVar24 + 1589] = bVar4;
                                                        (pbVar37 + lVar24 + 338)[0] = 0;
                                                        (pbVar37 + lVar24 + 338)[1] = 0;
                                                        *(short*)(pbVar37 + lVar24 + 340) = (short)(1 << (bVar4 & 31));
                                                        local_430 = (uint*)(pbVar37 + lVar24 + 1592);
                                                        pbVar37 = pbVar37 + lVar24 + 1592;
                                                        pbVar37[0] = 2;
                                                        pbVar37[1] = 0;
                                                        pbVar37[2] = 0;
                                                        pbVar37[3] = 0;
                                                        if (*local_458 != 0) {
                                                            local_448 = (uint*)(local_460 + local_438 + 1589);
                                                            local_440 = (uint*)0;
                                                            do {
                                                                puVar20 = local_430;
                                                                pbVar37 = local_458;
                                                                if (local_458[(ulong)((byte*)((long)local_440 +
                                                                                              1))[(long)local_458] +
                                                                              33] != 0) {
                                                                    pbVar38 = local_458 +
                                                                              (ulong)((byte*)((long)local_440 +
                                                                                              1))[(long)local_458] +
                                                                              33;
                                                                    uVar23 = 0;
                                                                    do {
                                                                        uVar12 =
                                                                            get_bits(param_1, (uint)(byte)*local_448);
                                                                        uVar14 = *puVar20;
                                                                        *(undefined2*)(pbVar37 + (long)(int)uVar14 * 2 +
                                                                                       338) = uVar12;
                                                                        *puVar20 = uVar14 + 1;
                                                                        uVar23 = uVar23 + 1;
                                                                    } while (uVar23 < *pbVar38);
                                                                }
                                                                local_440 = (uint*)((long)local_440 + 1);
                                                            } while (local_440 < (uint*)(ulong)*pbVar37);
                                                        }
                                                        puVar35 = (ushort*)(local_460 + local_438 + 338);
                                                        uVar23 = *local_430;
                                                        if (0 < (int)uVar23) {
                                                            uVar18 = 0;
                                                            do {
                                                                *(ushort*)(abStack_426 + uVar18 * 4 + -2) =
                                                                    puVar35[uVar18];
                                                                *(short*)(abStack_426 + uVar18 * 4) = (short)uVar18;
                                                                uVar18 = uVar18 + 1;
                                                            } while (uVar23 != uVar18);
                                                        }
                                                        _qsort(&local_428, (long)(int)uVar23, 4, (int*)point_compare);
                                                        if (0 < (int)*local_430) {
                                                            lVar24 = 0;
                                                            do {
                                                                local_460[lVar24 + local_438 + 838] =
                                                                    abStack_426[lVar24 * 4];
                                                                lVar24 = lVar24 + 1;
                                                            } while (lVar24 < (int)*local_430);
                                                        }
                                                        uVar23 = *local_430;
                                                        if (2 < (int)uVar23) {
                                                            pbVar37 = local_460 + local_438 + 1093;
                                                            lVar24 = 2;
                                                            do {
                                                                neighbors(puVar35, (int)lVar24, (int*)local_488,
                                                                          (int*)local_484);
                                                                pbVar37[-1] = local_488[0];
                                                                *pbVar37 = local_484[0];
                                                                lVar24 = lVar24 + 1;
                                                                uVar23 = *local_430;
                                                                pbVar37 = pbVar37 + 2;
                                                            } while (lVar24 < (int)uVar23);
                                                        }
                                                        uVar14 = (uint)local_468;
                                                        if ((int)(uint)local_468 < (int)uVar23) {
                                                            uVar14 = uVar23;
                                                        }
                                                        local_468 = (Codebook*)CONCAT44(local_468._4_4_, uVar14);
                                                        bVar2 = true;
                                                    LAB_100b947b8:
                                                        if (bVar2)
                                                            goto code_r0x000100b947c0;
                                                        goto LAB_100b94f0c;
                                                    }
                                                    goto LAB_100b951c6;
                                                }
                                                local_468 = (Codebook*)((ulong)local_468._4_4_ << 32);
                                            LAB_100b947f1:
                                                iVar13 = get_bits(param_1, 6);
                                                *(int*)(param_1 + 312) = iVar13 + 1;
                                                lVar24 = setup_malloc(param_1, (iVar13 + 1) * 32);
                                                *(long*)(param_1 + 448) = lVar24;
                                                if (lVar24 != 0) {
                                                    ___bzero(lVar24, (long)*(int*)(param_1 + 312) << 5);
                                                    if (0 < *(int*)(param_1 + 312)) {
                                                        local_430 = (uint*)0;
                                                        do {
                                                            local_440 = *(uint**)(param_1 + 448);
                                                            uVar10 = get_bits(param_1, 16);
                                                            *(ushort*)(param_1 + (long)local_430 * 2 + 316) = uVar10;
                                                            if (2 < uVar10)
                                                                goto LAB_100b951c6;
                                                            uVar23 = get_bits(param_1, 24);
                                                            puVar22 = local_430;
                                                            puVar20 = local_440;
                                                            uVar18 = (long)local_430 * 32;
                                                            local_440[(long)local_430 * 8] = uVar23;
                                                            uVar23 = get_bits(param_1, 24);
                                                            puVar20[(long)puVar22 * 8 + 1] = uVar23;
                                                            iVar13 = get_bits(param_1, 24);
                                                            puVar20[(long)puVar22 * 8 + 2] = iVar13 + 1;
                                                            cVar3 = get_bits(param_1, 6);
                                                            puVar34 = puVar20 + (long)puVar22 * 8 + 3;
                                                            *(byte*)(puVar20 + (long)puVar22 * 8 + 3) = cVar3 + 1;
                                                            bVar4 = get_bits(param_1, 8);
                                                            *(byte*)((long)puVar20 + uVar18 + 13) = bVar4;
                                                            bVar4 = 0;
                                                            local_450 = uVar18;
                                                            if ((byte)puVar20[(long)puVar22 * 8 + 3] != 0) {
                                                                uVar18 = 0;
                                                                do {
                                                                    cVar3 = get_bits(param_1, 3);
                                                                    iVar13 = get_bits(param_1, 1);
                                                                    if (iVar13 == 0) {
                                                                        cVar7 = '\0';
                                                                    } else {
                                                                        cVar7 = get_bits(param_1, 5);
                                                                    }
                                                                    abStack_426[uVar18 - 2] = cVar3 + cVar7 * '\b';
                                                                    uVar18 = uVar18 + 1;
                                                                    bVar4 = (byte)*puVar34;
                                                                } while (uVar18 < bVar4);
                                                            }
                                                            lVar24 = setup_malloc(param_1, (uint)bVar4 << 4);
                                                            *(long*)((long)local_440 + local_450 + 24) = lVar24;
                                                            if (lVar24 == 0)
                                                                goto LAB_100b951d0;
                                                            if ((byte)*puVar34 != 0) {
                                                                local_448 = (uint*)((long)local_440 + local_450 + 24);
                                                                lVar24 = 0;
                                                                local_458 = (byte*)0;
                                                                do {
                                                                    bVar4 =
                                                                        *(byte*)((long)&local_428 + (long)local_458);
                                                                    lVar26 = 0;
                                                                    do {
                                                                        if ((bVar4 >> ((uint)lVar26 & 31) & 1) == 0) {
                                                                            *(undefined2*)(*(long*)local_448 + lVar24 +
                                                                                           lVar26 * 2) = 65535;
                                                                        } else {
                                                                            sVar11 = get_bits(param_1, 8);
                                                                            *(short*)(*(long*)local_448 + lVar24 +
                                                                                      lVar26 * 2) = sVar11;
                                                                            if (*(int*)(param_1 + 152) <= (int)sVar11)
                                                                                goto LAB_100b951c6;
                                                                        }
                                                                        lVar26 = lVar26 + 1;
                                                                    } while (lVar26 != 8);
                                                                    local_458 = local_458 + 1;
                                                                    lVar24 = lVar24 + 16;
                                                                } while (local_458 < (byte*)(ulong)(byte)*puVar34);
                                                            }
                                                            puVar20 = local_440;
                                                            uVar18 = local_450;
                                                            local_458 = (byte*)((long)local_440 + local_450 + 13);
                                                            lVar24 = setup_malloc(param_1,
                                                                                  *(int*)(*(long*)(param_1 + 160) + 4 +
                                                                                          (ulong)*local_458 * 2120)
                                                                                      << 3);
                                                            pbVar37 = local_458;
                                                            *(long*)((long)puVar20 + uVar18 + 16) = lVar24;
                                                            if (lVar24 == 0)
                                                                goto LAB_100b951d0;
                                                            ___bzero(lVar24, (long)*(int*)(*(long*)(param_1 + 160) + 4 +
                                                                                           (ulong)*local_458 * 2120)
                                                                                 << 3);
                                                            lVar24 = *(long*)(param_1 + 160);
                                                            uVar18 = (ulong)*pbVar37;
                                                            if (0 < *(int*)(lVar24 + 4 + uVar18 * 2120)) {
                                                                pbVar37 = (byte*)((long)local_440 + local_450 + 16);
                                                                lVar26 = 0;
                                                                do {
                                                                    iVar13 = *(int*)(lVar24 + uVar18 * 2120);
                                                                    uVar32 = setup_malloc(param_1, iVar13);
                                                                    *(undefined8*)(*(long*)pbVar37 + lVar26 * 8) =
                                                                        uVar32;
                                                                    local_448 = *(uint**)(*(long*)pbVar37 + lVar26 * 8);
                                                                    if (local_448 == (uint*)0) {
                                                                        error(param_1, 3);
                                                                    } else if (0 < iVar13) {
                                                                        lVar31 = (long)iVar13 + 1;
                                                                        lVar24 = lVar26;
                                                                        do {
                                                                            *(char*)(*(long*)(*(long*)pbVar37 +
                                                                                              lVar26 * 8) +
                                                                                     -2 + lVar31) =
                                                                                (char)((int)lVar24 %
                                                                                       (int)(uint)(byte)*puVar34);
                                                                            lVar24 = (long)(int)lVar24 /
                                                                                     (long)(int)(uint)(byte)*puVar34;
                                                                            lVar31 = lVar31 + -1;
                                                                        } while (1 < lVar31);
                                                                    }
                                                                    if (local_448 == (uint*)0)
                                                                        goto LAB_100b94f0c;
                                                                    lVar26 = lVar26 + 1;
                                                                    lVar24 = *(long*)(param_1 + 160);
                                                                    uVar18 = (ulong)*local_458;
                                                                } while (lVar26 < *(int*)(lVar24 + 4 + uVar18 * 2120));
                                                            }
                                                            local_430 = (uint*)((long)local_430 + 1);
                                                        } while ((long)local_430 < (long)*(int*)(param_1 + 312));
                                                    }
                                                    iVar13 = get_bits(param_1, 6);
                                                    *(int*)(param_1 + 456) = iVar13 + 1;
                                                    lVar24 = setup_malloc(param_1, (iVar13 + 1) * 48);
                                                    *(long*)(param_1 + 464) = lVar24;
                                                    if (lVar24 != 0) {
                                                        ___bzero(lVar24, (long)*(int*)(param_1 + 456) * 48);
                                                        if (0 < *(int*)(param_1 + 456)) {
                                                            lVar24 = 0;
                                                            do {
                                                                local_458 = *(byte**)(param_1 + 464);
                                                                iVar13 = get_bits(param_1, 16);
                                                                local_448 = (uint*)CONCAT44(local_448._4_4_, 20);
                                                                if (iVar13 == 0) {
                                                                    uVar18 = lVar24 * 48;
                                                                    lVar26 =
                                                                        setup_malloc(param_1, *(int*)(param_1 + 4) * 3);
                                                                    *(long*)(local_458 + uVar18 + 8) = lVar26;
                                                                    local_450 = uVar18;
                                                                    if (lVar26 == 0) {
                                                                        local_448 = (uint*)CONCAT44(local_448._4_4_, 3);
                                                                        goto LAB_100b94c49;
                                                                    }
                                                                    iVar13 = get_bits(param_1, 1);
                                                                    if (iVar13 == 0) {
                                                                        bVar4 = 1;
                                                                    } else {
                                                                        cVar3 = get_bits(param_1, 4);
                                                                        bVar4 = cVar3 + 1;
                                                                    }
                                                                    local_430 = (uint*)(local_458 + local_450);
                                                                    local_440 = (uint*)(local_458 + local_450 + 8);
                                                                    local_458[local_450 + 16] = bVar4;
                                                                    iVar13 = get_bits(param_1, 1);
                                                                    if (iVar13 == 0) {
                                                                        *(ushort*)local_430 = 0;
                                                                    } else {
                                                                        sVar11 = get_bits(param_1, 8);
                                                                        *(ushort*)local_430 = sVar11 + 1U;
                                                                        if ((ushort)(sVar11 + 1U) != 0) {
                                                                            lVar26 = 0;
                                                                            uVar18 = 0;
                                                                            do {
                                                                                iVar13 =
                                                                                    ilog(*(int*)(param_1 + 4) + -1);
                                                                                uVar8 = get_bits(param_1, iVar13);
                                                                                puVar20 = local_440;
                                                                                *(undefined1*)(*(long*)local_440 +
                                                                                               lVar26) = uVar8;
                                                                                iVar13 =
                                                                                    ilog(*(int*)(param_1 + 4) + -1);
                                                                                bVar5 = get_bits(param_1, iVar13);
                                                                                lVar31 = *(long*)puVar20;
                                                                                *(byte*)(lVar31 + 1 + lVar26) = bVar5;
                                                                                bVar4 = *(byte*)(lVar31 + lVar26);
                                                                                if (((*(int*)(param_1 + 4) <=
                                                                                      (int)(uint)bVar4) ||
                                                                                     (*(int*)(param_1 + 4) <=
                                                                                      (int)(uint)bVar5)) ||
                                                                                    (bVar4 == bVar5))
                                                                                    goto LAB_100b94c49;
                                                                                uVar18 = uVar18 + 1;
                                                                                lVar26 = lVar26 + 3;
                                                                            } while (uVar18 < (ushort)*local_430);
                                                                        }
                                                                    }
                                                                    iVar13 = get_bits(param_1, 2);
                                                                    if (iVar13 != 0)
                                                                        goto LAB_100b94c49;
                                                                    local_430 = (uint*)(local_458 + local_450 + 16);
                                                                    uVar23 = *(uint*)(param_1 + 4);
                                                                    if ((byte)*local_430 < 2) {
                                                                        if (0 < (int)uVar23) {
                                                                            lVar26 = *(long*)local_440;
                                                                            lVar31 = 0;
                                                                            do {
                                                                                *(undefined1*)(lVar26 + 2 + lVar31) = 0;
                                                                                lVar31 = lVar31 + 3;
                                                                            } while ((ulong)uVar23 * 3 != lVar31);
                                                                        }
                                                                    } else if (0 < (int)uVar23) {
                                                                        lVar31 = 2;
                                                                        lVar26 = 0;
                                                                        do {
                                                                            bVar4 = get_bits(param_1, 4);
                                                                            *(byte*)(*(long*)local_440 + lVar31) =
                                                                                bVar4;
                                                                            if ((byte)*local_430 <= bVar4)
                                                                                goto LAB_100b94c49;
                                                                            lVar26 = lVar26 + 1;
                                                                            lVar31 = lVar31 + 3;
                                                                        } while (lVar26 < *(int*)(param_1 + 4));
                                                                    }
                                                                    uVar18 = local_450;
                                                                    pbVar37 = local_458;
                                                                    bVar2 = true;
                                                                    if ((byte)*local_430 != 0) {
                                                                        lVar26 = local_450 + 17;
                                                                        uVar27 = 0;
                                                                        do {
                                                                            get_bits(param_1, 8);
                                                                            bVar4 = get_bits(param_1, 8);
                                                                            pbVar37[uVar27 + lVar26] = bVar4;
                                                                            bVar4 = get_bits(param_1, 8);
                                                                            pbVar37[uVar27 + uVar18 + 32] = bVar4;
                                                                            if ((*(int*)(param_1 + 168) <=
                                                                                 (int)(uint)pbVar37[uVar27 + lVar26]) ||
                                                                                (*(int*)(param_1 + 312) <=
                                                                                 (int)(uint)bVar4))
                                                                                goto LAB_100b94c49;
                                                                            uVar27 = uVar27 + 1;
                                                                        } while (uVar27 < (byte)*local_430);
                                                                    }
                                                                } else {
                                                                LAB_100b94c49:
                                                                    error(param_1, (ulong)local_448 & 4294967295);
                                                                    bVar2 = false;
                                                                }
                                                                if (!bVar2)
                                                                    goto LAB_100b94f0c;
                                                                lVar24 = lVar24 + 1;
                                                            } while (lVar24 < *(int*)(param_1 + 456));
                                                        }
                                                        uVar23 = get_bits(param_1, 6);
                                                        *(uint*)(param_1 + 472) = uVar23 + 1;
                                                        if (uVar23 < 2147483647) {
                                                            psVar28 = param_1 + 480;
                                                            lVar24 = 0;
                                                            do {
                                                                sVar9 = (stb_vorbis)get_bits(param_1, 1);
                                                                psVar28[-4] = sVar9;
                                                                sVar11 = get_bits(param_1, 16);
                                                                *(short*)(psVar28 + -2) = sVar11;
                                                                sVar11 = get_bits(param_1, 16);
                                                                *(short*)psVar28 = sVar11;
                                                                sVar9 = (stb_vorbis)get_bits(param_1, 8);
                                                                psVar28[-3] = sVar9;
                                                                if (((*(short*)(psVar28 + -2) != 0) ||
                                                                     (*(short*)psVar28 != 0)) ||
                                                                    (*(int*)(param_1 + 456) <= (int)(uint)(byte)sVar9))
                                                                    goto LAB_100b951c6;
                                                                lVar24 = lVar24 + 1;
                                                                psVar28 = psVar28 + 6;
                                                            } while (lVar24 < *(int*)(param_1 + 472));
                                                        }
                                                        flush_packet(param_1);
                                                        *(undefined4*)(param_1 + 1248) = 0;
                                                        if (0 < *(int*)(param_1 + 4)) {
                                                            local_468 = (Codebook*)CONCAT44(local_468._4_4_,
                                                                                            (uint)local_468 * 2);
                                                            lVar24 = 0;
                                                            do {
                                                                uVar32 =
                                                                    setup_malloc(param_1, *(int*)(param_1 + 148) << 2);
                                                                *(undefined8*)(param_1 + lVar24 * 8 + 864) = uVar32;
                                                                uVar32 =
                                                                    setup_malloc(param_1, *(int*)(param_1 + 148) * 2);
                                                                *(undefined8*)(param_1 + lVar24 * 8 + 1120) = uVar32;
                                                                lVar26 = setup_malloc(param_1, (uint)local_468);
                                                                *(long*)(param_1 + lVar24 * 8 + 1256) = lVar26;
                                                                if (((*(long*)(param_1 + lVar24 * 8 + 864) == 0) ||
                                                                     (*(long*)(param_1 + lVar24 * 8 + 1120) == 0)) ||
                                                                    (lVar26 == 0))
                                                                    goto LAB_100b951d0;
                                                                lVar24 = lVar24 + 1;
                                                            } while (lVar24 < *(int*)(param_1 + 4));
                                                        }
                                                        uVar32 = 0;
                                                        iVar13 = init_blocksize(param_1, 0, *(int*)(param_1 + 144));
                                                        if ((iVar13 == 0) || (iVar13 = init_blocksize(
                                                                                  param_1, 1, *(int*)(param_1 + 148)),
                                                                              iVar13 == 0))
                                                            goto LAB_100b935f5;
                                                        *(undefined4*)(param_1 + 136) = *(undefined4*)(param_1 + 144);
                                                        *(int*)(param_1 + 140) = *(int*)(param_1 + 148);
                                                        uVar23 = *(int*)(param_1 + 148) * 2;
                                                        if ((int)*(uint*)(param_1 + 312) < 1) {
                                                            iVar13 = 8;
                                                        } else {
                                                            lVar24 = *(long*)(param_1 + 448);
                                                            lVar26 = 0;
                                                            uVar14 = 0;
                                                            do {
                                                                uVar16 = (uint)(*(int*)(lVar24 + 4 + lVar26) -
                                                                                *(int*)(lVar24 + lVar26)) /
                                                                         *(uint*)(lVar24 + 8 + lVar26);
                                                                if ((int)uVar14 < (int)uVar16) {
                                                                    uVar14 = uVar16;
                                                                }
                                                                lVar26 = lVar26 + 32;
                                                            } while ((ulong) * (uint*)(param_1 + 312) * 32 != lVar26);
                                                            iVar13 = uVar14 * 8 + 8;
                                                        }
                                                        uVar14 = iVar13 * *(int*)(param_1 + 4);
                                                        if ((uint)(iVar13 * *(int*)(param_1 + 4)) < uVar23) {
                                                            uVar14 = uVar23;
                                                        }
                                                        *(uint*)(param_1 + 12) = uVar14;
                                                        param_1[1741] = (stb_vorbis)1;
                                                        if (*(long*)(param_1 + 104) != 0) {
                                                            if (*(int*)(param_1 + 124) != *(int*)(param_1 + 112)) {
                                                                /* WARNING: Subroutine does not return */
                                                                LogAssert("f->temp_offset == "
                                                                          "f->alloc.alloc_buffer_length_in_bytes",
                                                                          "/Users/bamboo/bamboo-home-01/xml-data/"
                                                                          "build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                                                                          "workers/vorbis_std.code",
                                                                          3839, (char*)0);
                                                            }
                                                            if ((ulong) * (uint*)(param_1 + 124) <
                                                                (long)*(int*)(param_1 + 120) +
                                                                    (ulong) * (uint*)(param_1 + 12) + 1880) {
                                                                uVar29 = 3;
                                                                goto LAB_100b935f0;
                                                            }
                                                        }
                                                        uVar17 = _stb_vorbis_get_file_offset(param_1);
                                                        *(undefined4*)(param_1 + 72) = uVar17;
                                                        uVar32 = 1;
                                                        goto LAB_100b935f5;
                                                    }
                                                }
                                            }
                                        }
                                    LAB_100b951d0:
                                        uVar32 = 3;
                                    }
                                LAB_100b951d8:
                                    error(param_1, uVar32);
                                    uVar32 = 0;
                                    goto LAB_100b935f5;
                                }
                            }
                            uVar29 = 20;
                            goto LAB_100b935f0;
                        }
                    }
                }
                goto LAB_100b935e8;
            }
            uVar29 = 10;
        }
    LAB_100b935f0:
        uVar32 = 0;
        error(param_1, uVar29);
    LAB_100b935f5:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar32;
    code_r0x000100b947c0:
        local_450 = local_450 + 1;
        if ((long)*(int*)(param_1 + 168) <= (long)local_450)
            goto LAB_100b947f1;
        goto LAB_100b9437d;
    LAB_100b94f0c:
        uVar32 = 0;
        goto LAB_100b935f5;
    }

    // 0x100b95270, 16 bytes, placed by debug map only (low confidence)
    // vorbis_alloc(stb_vorbis*)
    void vorbis_alloc(stb_vorbis* param_1) {
        setup_malloc((stb_vorbis*)this, 1880);
    }

    // 0x100b95450, 1152 bytes, placed by debug map only (low confidence)
    // seek_to_sample_coarse(stb_vorbis*, unsigned int)
    undefined8 seek_to_sample_coarse(stb_vorbis* param_1, uint param_2) {
        uint uVar1;
        int iVar2;
        ulong uVar3;
        uint* puVar4;
        uint uVar5;
        ulong uVar6;
        uint uVar7;
        undefined8 uVar8;
        stb_vorbis* psVar9;
        uint uVar10;
        double dVar11;
        double dVar12;
        double local_70;
        double local_68;
        uint local_5c;
        uint local_54;
        undefined8 local_50;
        uint local_48;
        uint local_40;
        uint uStack_3c;
        uint local_38;

        uVar1 = _stb_vorbis_stream_length_in_samples();
        if (uVar1 == 0) {
            uVar8 = 7;
            goto LAB_100b954f2;
        }
        if (uVar1 < param_2) {
            uVar8 = 11;
            goto LAB_100b954f2;
        }
        uVar1 = *(int*)(param_1 + 148) - *(int*)(param_1 + 144) >> 2;
        puVar4 = (uint*)0;
        uVar10 = param_2 - uVar1;
        if (param_2 < uVar1) {
            uVar10 = 0;
        }
        local_48 = *(uint*)(param_1 + 84);
        local_50 = *(ulong*)(param_1 + 76);
        do {
            if (local_48 != 4294967295) {
                uVar1 = *(uint*)(param_1 + 88);
                local_54 = *(uint*)(param_1 + 92);
                local_5c = *(uint*)(param_1 + 96);
                if (local_5c == 4294967295) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("right.last_decoded_sample != ~0U",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                              "vorbis_std.code",
                              4355, (char*)0);
                }
                if (uVar10 <= local_48) {
                    _stb_vorbis_seek_start(param_1);
                    return 1;
                }
                if (uVar1 == local_50._4_4_)
                    goto LAB_100b9553a;
                uVar7 = 0;
                goto LAB_100b95627;
            }
            set_file_offset(param_1, local_50._4_4_);
            iVar2 = get_seek_page_info(param_1, (ProbedPage*)&local_50);
        } while (iVar2 != 0);
    LAB_100b954e2:
        _stb_vorbis_seek_start(param_1);
        goto LAB_100b954ea;
        while (true) {
            if (uVar10 < local_38) {
                local_54 = uStack_3c;
                local_5c = local_38;
                uVar1 = local_40;
            } else {
                local_48 = local_38;
                local_50 = CONCAT44(uStack_3c, local_40);
            }
            uVar7 = uVar7 + 1;
            if (uVar1 == local_50._4_4_)
                break;
        LAB_100b95627:
            uVar5 = uVar1 - local_50._4_4_;
            if (uVar1 < local_50._4_4_ || uVar5 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("left.page_end < right.page_start",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                          "vorbis_std.code",
                          4364, (char*)0);
            }
            if (uVar5 < 65537) {
                set_file_offset(param_1, local_50._4_4_);
            } else {
                if (uVar7 < 2) {
                    if (uVar7 == 0) {
                        puVar4 = (uint*)(ulong)local_5c;
                        local_68 = (double)(local_54 - (uint)local_50) / (double)(long)puVar4;
                        dVar11 = (double)(uVar10 - local_48) * local_68 + (double)(local_50 & 4294967295);
                    } else {
                        dVar12 = ((double)uVar10 - (double)local_38) * local_68;
                        dVar11 = dVar12;
                        if (dVar12 <= 8000.0) {
                            dVar11 = 8000.0;
                        }
                        dVar11 = (double)(~-(ulong)(0.0 <= dVar12) & (ulong)dVar12 |
                                          (ulong)dVar11 & -(ulong)(0.0 <= dVar12));
                        dVar11 = (double)((-(ulong)(-8000.0 < dVar11) & 13893393744205447168 |
                                           ~-(ulong)(-8000.0 < dVar11) & (ulong)(dVar11 + dVar11)) &
                                              -(ulong)(dVar11 < 0.0) |
                                          ~-(ulong)(dVar11 < 0.0) & (ulong)(dVar11 + dVar11)) +
                                 local_70;
                    }
                    dVar12 = (double)local_50._4_4_;
                    if ((double)local_50._4_4_ <= dVar11) {
                        dVar12 = dVar11;
                    }
                    local_70 = (double)(uVar1 - 65536);
                    if (dVar12 <= (double)(uVar1 - 65536)) {
                        local_70 = dVar12;
                    }
                    uVar5 = (uint)(long)local_70;
                } else {
                    uVar5 = (local_50._4_4_ + (uVar5 >> 1)) - 32768;
                }
                set_file_offset(param_1, uVar5);
                iVar2 = vorbis_find_page((vorbis*)param_1, (stb_vorbis*)0, (uint*)0, puVar4);
                if (iVar2 == 0)
                    goto LAB_100b954e2;
            }
            while (true) {
                iVar2 = get_seek_page_info(param_1, (ProbedPage*)&local_40);
                if (iVar2 == 0)
                    goto LAB_100b954e2;
                puVar4 = (uint*)(ulong)local_38;
                if (local_38 != 4294967295)
                    break;
                set_file_offset(param_1, uStack_3c);
                if (uVar1 <= local_40) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("mid.page_start < right.page_start",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                              "vorbis_std.code",
                              4409, (char*)0);
                }
            }
            if (local_40 == uVar1)
                break;
        }
    LAB_100b9553a:
        uVar1 = (uint)local_50;
        psVar9 = (stb_vorbis*)(local_50 & 4294967295);
        set_file_offset(param_1, (uint)local_50);
        iVar2 = start_page(param_1);
        if (iVar2 != 0) {
            uVar10 = *(uint*)(param_1 + 1768);
            if ((int)uVar10 < 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("end_pos >= 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                          "vorbis_std.code",
                          4430, (char*)0);
            }
            do {
                uVar6 = (ulong)uVar10;
                while (uVar3 = uVar6, iVar2 = (int)uVar3, 0 < iVar2) {
                    uVar6 = uVar3 - 1;
                    if (param_1[uVar3 + 1483] != (stb_vorbis)255)
                        goto LAB_100b95850;
                }
                if (((byte)param_1[1739] & 1) == 0) {
                LAB_100b95850:
                    *(undefined4*)(param_1 + 1388) = 0;
                    *(undefined4*)(param_1 + 1748) = 0;
                    *(undefined8*)(param_1 + 1760) = 0;
                    param_1[1740] = (stb_vorbis)0;
                    *(undefined4*)(param_1 + 1248) = 0;
                    *(int*)(param_1 + 1744) = iVar2;
                    if (0 < iVar2) {
                        uVar6 = 0;
                        do {
                            psVar9 = (stb_vorbis*)(ulong)(byte)param_1[uVar6 + 1484];
                            skip(param_1, (uint)(byte)param_1[uVar6 + 1484]);
                            uVar6 = uVar6 + 1;
                        } while (uVar3 != uVar6);
                    }
                    vorbis_pump_first_frame((vorbis*)param_1, psVar9);
                    return 1;
                }
                psVar9 = (stb_vorbis*)(ulong)uVar1;
                iVar2 = go_to_page_before(param_1, uVar1);
                if (iVar2 == 0)
                    goto LAB_100b954e2;
                uVar1 = _stb_vorbis_get_file_offset(param_1);
                iVar2 = start_page(param_1);
                if (iVar2 == 0)
                    goto LAB_100b954e2;
                uVar10 = *(int*)(param_1 + 1480) - 1;
            } while (true);
        }
    LAB_100b954ea:
        uVar8 = 37;
    LAB_100b954f2:
        error(param_1, uVar8);
        return 0;
    }

    // 0x100b958d0, 160 bytes, placed by debug map only (low confidence)
    // peek_decode_initial(stb_vorbis*, int*, int*, int*, int*, int*)
    undefined8 peek_decode_initial(stb_vorbis* param_1, int* param_2, int* param_3, int* param_4, int* param_5,
                                   int* param_6) {
        int iVar1;
        undefined8 uVar2;
        int iVar3;
        int* unaff_RBX;

        iVar1 = vorbis_decode_initial((vorbis*)param_1, (stb_vorbis*)param_2, param_3, param_4, param_5, param_6,
                                      unaff_RBX);
        if (iVar1 == 0) {
            uVar2 = 0;
        } else {
            iVar1 = ilog(*(int*)(param_1 + 472) + -1);
            iVar3 = iVar1 + (uint)(param_1[(long)*param_6 * 6 + 476] != (stb_vorbis)0) * 2 + 8;
            iVar1 = iVar1 + (uint)(param_1[(long)*param_6 * 6 + 476] != (stb_vorbis)0) * 2 + 15;
            if (-1 < iVar3) {
                iVar1 = iVar3;
            }
            iVar1 = iVar1 >> 3;
            param_1[1740] = (stb_vorbis)((char)param_1[1740] + (char)iVar1);
            *(int*)(param_1 + 1764) = *(int*)(param_1 + 1764) - iVar1;
            skip(param_1, -iVar1);
            iVar1 = *(int*)(param_1 + 1744);
            if (iVar1 == -1) {
                iVar1 = *(int*)(param_1 + 1480);
            }
            *(int*)(param_1 + 1744) = iVar1 + -1;
            *(undefined4*)(param_1 + 1760) = 0;
            uVar2 = 1;
        }
        return uVar2;
    }

    // 0x100b95970, 64 bytes, placed by debug map only (low confidence)
    // vorbis_pump_first_frame(stb_vorbis*)
    void vorbis_pump_first_frame(stb_vorbis* param_1) {
        int extraout_EAX;
        int in_R8D;
        undefined4 in_register_00000084;
        uint local_1c;
        int local_18;
        int local_14;

        vorbis_decode_packet(this, (stb_vorbis*)&local_1c, &local_14, &local_18,
                             (int*)CONCAT44(in_register_00000084, in_R8D));
        if (extraout_EAX != 0) {
            vorbis_finish_frame(this, (stb_vorbis*)(ulong)local_1c, local_14, local_18, in_R8D);
        }
    }

    // 0x100b959b0, 176 bytes, placed by debug map only (low confidence)
    // maybe_start_packet(stb_vorbis*)
    undefined4 maybe_start_packet(stb_vorbis* param_1) {
        char cVar1;
        undefined8 uVar4;

        if (*(int*)(param_1 + 1744) != -1) {
        LAB_100b959c3:
            return start_packet(param_1);
        }
        cVar1 = get8(param_1);
        if (*(int*)(param_1 + 128) != 0) {
            return 0;
        }
        if ((((cVar1 == 'O') && (cVar1 = get8(param_1), cVar1 == 'g')) && (cVar1 = get8(param_1), cVar1 == 'g')) &&
            (cVar1 = get8(param_1), cVar1 == 'S')) {
            if (start_page_no_capturepattern(param_1) == 0) {
                return 0;
            }
            if (((byte)param_1[1739] & 1) == 0)
                goto LAB_100b959c3;
            *(undefined4*)(param_1 + 1748) = 0;
            param_1[1740] = (stb_vorbis)0;
            uVar4 = 32;
        } else {
            uVar4 = 30;
        }
        error(param_1, uVar4);
        return 0;
    }

    // 0x100b95a60, 48 bytes, placed by debug map only (low confidence)
    // flush_packet(stb_vorbis*)
    void flush_packet(stb_vorbis* param_1) {
        int iVar1;

        do {
            iVar1 = get8_packet_raw(param_1);
        } while (iVar1 != -1);
    }

    // 0x100b95c80, 160 bytes, placed by debug map only (low confidence)
    // set_file_offset(stb_vorbis*, unsigned int)
    void set_file_offset(stb_vorbis* param_1, uint param_2) {
        ulong uVar2;

        if (param_1[68] == (stb_vorbis)0) {
            *(undefined4*)(param_1 + 128) = 0;
            if (*(long*)(param_1 + 40) == 0) {
                if (((int)param_2 < 0) || (CARRY4(*(uint*)(param_1 + 32), param_2))) {
                    *(undefined4*)(param_1 + 128) = 1;
                    uVar2 = 2147483647;
                } else {
                    uVar2 = (ulong)(*(uint*)(param_1 + 32) + param_2);
                }
                if (_fseek(*(FILE**)(param_1 + 24), uVar2, 0) != 0) {
                    *(undefined4*)(param_1 + 128) = 1;
                    _fseek(*(FILE**)(param_1 + 24), (ulong) * (uint*)(param_1 + 32), 2);
                }
            } else if ((ulong)param_2 + *(long*)(param_1 + 48) < *(ulong*)(param_1 + 56)) {
                *(ulong*)(param_1 + 40) = (ulong)param_2 + *(long*)(param_1 + 48);
            } else {
                *(ulong*)(param_1 + 40) = *(ulong*)(param_1 + 56);
                *(undefined4*)(param_1 + 128) = 1;
            }
        }
    }

    // 0x100b95ec0, 672 bytes, placed by debug map only (low confidence)
    // vorbis_find_page(stb_vorbis*, unsigned int*, unsigned int*)
    undefined4 vorbis_find_page(stb_vorbis* param_1, uint* param_2, uint* param_3) {
        uint uVar1;
        char cVar2;
        uchar uVar3;
        byte bVar4;
        uint uVar5;
        uint uVar6;
        undefined4 uVar7;
        undefined4 unaff_EBX;
        int iVar8;
        long lVar9;
        int iVar10;
        uint uVar11;
        uchar local_58[5];
        byte local_53;
        uint local_42;
        byte local_3e;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        do {
            if (field_128 == 0) {
                cVar2 = get8((stb_vorbis*)this);
                if (cVar2 == 'O') {
                    uVar5 = _stb_vorbis_get_file_offset(this);
                    iVar10 = 1;
                    uVar7 = 0;
                    if (uVar5 - 25 <= field_64) {
                        lVar9 = 1;
                        do {
                            cVar2 = get8((stb_vorbis*)this);
                            if (cVar2 != ogg_page_header[lVar9])
                                goto LAB_100b95f73;
                            lVar9 = lVar9 + 1;
                        } while (lVar9 != 4);
                        lVar9 = 4;
                    LAB_100b95f73:
                        if (field_128 == 0) {
                            if ((int)lVar9 == 4) {
                                local_58[0] = ogg_page_header[0];
                                local_58[1] = ogg_page_header[1];
                                local_58[2] = ogg_page_header[2];
                                local_58[3] = ogg_page_header[3];
                                lVar9 = 4;
                                do {
                                    uVar3 = get8((stb_vorbis*)this);
                                    local_58[lVar9] = uVar3;
                                    uVar1 = local_42;
                                    lVar9 = lVar9 + 1;
                                } while (lVar9 != 27);
                                iVar10 = 1;
                                uVar7 = 0;
                                if (field_128 == 0) {
                                    if (local_58[4] == '\0') {
                                        local_42 = 0;
                                        lVar9 = 0;
                                        uVar6 = 0;
                                        do {
                                            uVar6 = crc32_update(uVar6, local_58[lVar9]);
                                            lVar9 = lVar9 + 1;
                                        } while (lVar9 != 27);
                                        uVar11 = (uint)local_3e;
                                        iVar8 = 0;
                                        if (local_3e != 0) {
                                            do {
                                                bVar4 = get8((stb_vorbis*)this);
                                                uVar6 = crc32_update(uVar6, bVar4);
                                                iVar8 = iVar8 + (uint)bVar4;
                                                uVar11 = uVar11 - 1;
                                            } while (uVar11 != 0);
                                        }
                                        if (iVar8 != 0) {
                                            uVar7 = 0;
                                            if (field_128 != 0)
                                                goto LAB_100b95fd9;
                                            do {
                                                uVar3 = get8((stb_vorbis*)this);
                                                uVar6 = crc32_update(uVar6, uVar3);
                                                iVar8 = iVar8 + -1;
                                            } while (iVar8 != 0);
                                        }
                                        iVar10 = 0;
                                        uVar7 = unaff_EBX;
                                        if (uVar6 == uVar1) {
                                            if (param_1 != (stb_vorbis*)0) {
                                                uVar7 = _stb_vorbis_get_file_offset(this);
                                                *(undefined4*)param_1 = uVar7;
                                            }
                                            if (param_2 != (uint*)0) {
                                                *param_2 = local_53 >> 2 & 1;
                                            }
                                            set_file_offset((stb_vorbis*)this, uVar5 - 1);
                                            iVar10 = 1;
                                            uVar7 = 1;
                                        }
                                    } else {
                                        iVar10 = 13;
                                        uVar7 = unaff_EBX;
                                    }
                                }
                            LAB_100b95fd9:
                                unaff_EBX = uVar7;
                                if ((iVar10 != 13) && (uVar7 = unaff_EBX, iVar10 != 0))
                                    goto LAB_100b96003;
                            }
                            set_file_offset((stb_vorbis*)this, uVar5);
                            iVar10 = 0;
                            uVar7 = unaff_EBX;
                        }
                    }
                LAB_100b96003:
                    unaff_EBX = uVar7;
                    if (iVar10 != 0)
                        goto LAB_100b95ef8;
                }
                iVar10 = 0;
            } else {
                unaff_EBX = 0;
                iVar10 = 1;
            }
        LAB_100b95ef8:
            if (iVar10 != 0) {
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return unaff_EBX;
            }
        } while (true);
    }

    // 0x100b96160, 112 bytes, placed by debug map only (low confidence)
    // getn(stb_vorbis*, unsigned char*, int)
    undefined8 getn(stb_vorbis* param_1, uchar* param_2, int param_3) {
        void* pvVar1;
        size_t sVar2;

        pvVar1 = *(void**)(param_1 + 40);
        sVar2 = (size_t)param_3;
        if (pvVar1 == (void*)0) {
            sVar2 = _fread(param_2, sVar2, 1, *(FILE**)(param_1 + 24));
            if (sVar2 == 1) {
                return 1;
            }
        } else if ((long)pvVar1 + sVar2 <= *(ulong*)(param_1 + 56)) {
            _memcpy(param_2, pvVar1, sVar2);
            *(size_t*)(param_1 + 40) = *(long*)(param_1 + 40) + sVar2;
            return 1;
        }
        *(undefined4*)(param_1 + 128) = 1;
        return 0;
    }

    // 0x100b961d0, 96 bytes, placed by debug map only (low confidence)
    // get32(stb_vorbis*)
    undefined4 get32(stb_vorbis* param_1) {
        undefined1 uVar1;
        undefined1 uVar2;
        undefined1 uVar3;
        undefined1 uVar4;

        uVar1 = get8(param_1);
        uVar2 = get8(param_1);
        uVar3 = get8(param_1);
        uVar4 = get8(param_1);
        return CONCAT13(uVar4, CONCAT12(uVar3, CONCAT11(uVar2, uVar1)));
    }

    // 0x100b96580, 320 bytes, placed by debug map only (low confidence)
    // convert_samples_short(int, short**, int, int, float**, int, int)
    void convert_samples_short(int param_1, short** param_2, int param_3, int param_4, float** param_5, int param_6,
                               int param_7) {
        ulong uVar1;

        if (((param_4 < 7) && (param_1 < 3)) && (param_1 != param_4)) {
            if (0 < param_1) {
                uVar1 = 0;
                do {
                    compute_samples(
                        *(int*)(&convert_samples_short(int, short**, int, int, float**, int, int)::channel_selector +
                                uVar1 * 4 + (long)param_1 * 8),
                        param_2[uVar1] + param_3, param_4, param_5, param_6, param_7);
                    uVar1 = uVar1 + 1;
                } while ((uint)param_1 != uVar1);
            }
        } else {
            if (param_1 < param_4) {
                param_4 = param_1;
            }
            if (param_4 < 1) {
                uVar1 = 0;
                if (param_1 < 1) {
                    return;
                }
            } else {
                uVar1 = 0;
                do {
                    copy_samples(param_2[uVar1] + param_3, param_5[uVar1] + param_6, param_7);
                    uVar1 = uVar1 + 1;
                } while ((uint)param_4 != uVar1);
                if (param_1 <= (int)uVar1) {
                    return;
                }
            }
            uVar1 = uVar1 & 4294967295;
            do {
                ___bzero(param_2[uVar1] + param_3, (long)param_7 * 2);
                uVar1 = uVar1 + 1;
            } while ((uint)param_1 != uVar1);
        }
    }

    // 0x100b96760, 384 bytes, placed by debug map only (low confidence)
    // convert_channels_short_interleaved(int, short*, int, float**, int, int)
    void convert_channels_short_interleaved(int param_1, short* param_2, int param_3, float** param_4, int param_5,
                                            int param_6) {
        int iVar1;
        ulong uVar2;
        ulong uVar3;
        float fVar4;

        if (((param_3 < 7) && (param_1 < 3)) && (param_1 != param_3)) {
            if (param_1 != 2) {
                /* WARNING: Subroutine does not return */
                LogAssert("buf_c == 2",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                          "vorbis_std.code",
                          4887, (char*)0);
            }
            iVar1 = 2;
            do {
                compute_stereo_samples(param_2, param_3, param_4, param_5, param_6);
                iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
        } else {
            if (param_1 < param_3) {
                param_3 = param_1;
            }
            if (0 < param_6) {
                uVar3 = 0;
                do {
                    if (param_3 < 1) {
                        uVar2 = 0;
                    } else {
                        uVar2 = 0;
                        do {
                            fVar4 = param_4[uVar2][(long)param_5 + uVar3] + 384.0;
                            if ((int)fVar4 < 1136623617) {
                                fVar4 = 383.0;
                            }
                            if (1136689150 < (int)fVar4) {
                                fVar4 = 4.59163e-41;
                            }
                            *param_2 = SUB42(fVar4, 0);
                            param_2 = param_2 + 1;
                            uVar2 = uVar2 + 1;
                        } while ((uint)param_3 != uVar2);
                    }
                    if ((int)(uint)uVar2 < param_1) {
                        uVar2 = (ulong)(~(uint)uVar2 + param_1);
                        ___bzero(param_2, uVar2 * 2 + 2);
                        param_2 = param_2 + uVar2 + 1;
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 != (uint)param_6);
            }
        }
    }

    // 0x100b97de0, 48 bytes, inline, placed by debug map only (low confidence)
    // VorbisDecoderPacket::PacketT(unsigned long)
    void VorbisDecoderPacket::PacketT(ulong param_1) {
        new (this) PacketT<Array<unsigned char, eastl::allocator>>(param_1);
        new (this) MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>();
    }

    // 0x100b9a410, 32 bytes, placed by debug map only (low confidence)
    // crc32_update(unsigned int, unsigned char)
    uint crc32_update(uint param_1, uchar param_2) {
        undefined3 in_register_00000031;

        return param_1 << 8 ^ (&crc_table)[param_1 >> 24 ^ CONCAT31(in_register_00000031, param_2)];
    }

    // 0x100b9a430, 480 bytes, placed by debug map only (low confidence)
    // vorbis_decode_initial(stb_vorbis*, int*, int*, int*, int*, int*)
    undefined8 vorbis_decode_initial(stb_vorbis* param_1, int* param_2, int* param_3, int* param_4, int* param_5,
                                     int* param_6) {
        char cVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        bool bVar6;

        field_1868 = 0;
        if (field_128 == 0) {
            while (iVar2 = maybe_start_packet((stb_vorbis*)this), iVar2 != 0) {
                iVar2 = get_bits((stb_vorbis*)this, 1);
                if (iVar2 == 0) {
                    if ((field_104 != 0) && (field_112 != field_124)) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("f->alloc.alloc_buffer_length_in_bytes == f->temp_offset",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                                  "workers/vorbis_std.code",
                                  2854, (char*)0);
                    }
                    iVar2 = ilog(field_472 + -1);
                    iVar2 = get_bits((stb_vorbis*)this, iVar2);
                    if (iVar2 == -1) {
                        return 0;
                    }
                    if (field_472 <= iVar2) {
                        return 0;
                    }
                    *param_5 = iVar2;
                    if (field_68[(long)iVar2 * 6 + 408] == '\0') {
                        iVar5 = field_144;
                        bVar6 = false;
                        iVar4 = 0;
                    } else {
                        iVar5 = field_148;
                        iVar3 = get_bits((stb_vorbis*)this, 1);
                        iVar4 = get_bits((stb_vorbis*)this, 1);
                        bVar6 = iVar3 != 0;
                    }
                    cVar1 = field_68[(long)iVar2 * 6 + 408];
                    if ((cVar1 == '\0') || (bVar6)) {
                        *(undefined4*)param_1 = 0;
                        iVar2 = iVar5 >> 1;
                    } else {
                        *(int*)param_1 = iVar5 - field_144 >> 2;
                        iVar2 = field_144 + iVar5 >> 2;
                    }
                    *param_2 = iVar2;
                    if ((cVar1 == '\0') || (iVar4 != 0)) {
                        *param_3 = iVar5 >> 1;
                    } else {
                        *param_3 = iVar5 * 3 - field_144 >> 2;
                        iVar5 = iVar5 * 3 + field_144 >> 2;
                    }
                    *param_4 = iVar5;
                    return 1;
                }
                if (field_68[0] != '\0') {
                    error(this, 35);
                    return 0;
                }
                do {
                    iVar2 = get8_packet((stb_vorbis*)this);
                } while (iVar2 != -1);
                if (field_128 != 0) {
                    return 0;
                }
            }
        }
        return 0;
    }

    // 0x100b9a610, 2976 bytes, placed by debug map only (low confidence)
    // vorbis_decode_packet_rest(stb_vorbis*, int*, Mode*, int, int, int, int, int*)
    undefined8 vorbis_decode_packet_rest(stb_vorbis* param_1, int* param_2, Mode* param_3, int param_4, int param_5,
                                         int param_6, int param_7, int* param_8) {
        Mapping* pMVar1;
        float fVar2;
        byte bVar3;
        Mapping MVar4;
        byte bVar5;
        byte bVar6;
        char cVar7;
        short sVar8;
        ushort uVar9;
        void* pvVar10;
        void* pvVar11;
        undefined2* puVar12;
        void* pvVar13;
        bool bVar14;
        undefined2 uVar15;
        int iVar16;
        int iVar17;
        uint uVar18;
        long* plVar19;
        undefined8 uVar20;
        short sVar21;
        int iVar22;
        uint uVar23;
        long lVar24;
        byte* pbVar25;
        ulong uVar26;
        int iVar27;
        int iVar28;
        long lVar29;
        ulong uVar30;
        long lVar31;
        float* pfVar32;
        int iVar33;
        ulong uVar34;
        uint uVar35;
        long lVar36;
        long lVar37;
        float fVar38;
        float fVar39;
        undefined4 in_stack_0000000c;
        uchar* in_stack_fffffffffffff588;
        int local_a00;
        uint local_9d0;
        uchar local_9b8[256];
        float* local_8b8[16];
        undefined4 local_838;
        int local_438[256];
        long local_38;

        iVar22 = (int)param_3;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar28 = *(int*)(field_68 + (ulong)(byte)*param_2 * 4 + 68);
        pvVar10 = field_464;
        lVar29 = (ulong) * (byte*)((long)param_2 + 1) * 48;
        pMVar1 = (Mapping*)((long)pvVar10 + lVar29);
        plVar19 = (long*)((long)pvVar10 + lVar29 + 8);
        if (0 < (int)field_4) {
            lVar24 = 0;
            do {
                bVar3 = *(byte*)(*plVar19 + 2 + lVar24 * 3);
                local_438[lVar24] = 0;
                MVar4 = pMVar1[(ulong)bVar3 + 17];
                sVar8 = *(short*)(field_68 + (ulong)(byte)MVar4 * 2 + 104);
                if (sVar8 == 0) {
                    error(this, 21);
                } else {
                    pvVar11 = field_304;
                    iVar16 = get_bits((stb_vorbis*)this, 1);
                    if (iVar16 != 0) {
                        lVar36 = (ulong)(byte)MVar4 * 1596;
                        pbVar25 = (byte*)((long)pvVar11 + lVar36);
                        iVar16 = *(int*)(&DAT_100d6abcc + (ulong) * (byte*)((long)pvVar11 + lVar36 + 1588) * 4);
                        puVar12 = *(undefined2**)(field_1739 + lVar24 * 8 + -483);
                        iVar17 = ilog(iVar16);
                        uVar15 = get_bits((stb_vorbis*)this, iVar17 + -1);
                        *puVar12 = uVar15;
                        uVar15 = get_bits((stb_vorbis*)this, iVar17 + -1);
                        puVar12[1] = uVar15;
                        if (*(char*)((long)pvVar11 + lVar36) != '\0') {
                            local_a00 = 2;
                            uVar30 = 0;
                            do {
                                uVar34 = (ulong)pbVar25[uVar30 + 1];
                                bVar3 = pbVar25[uVar34 + 33];
                                bVar5 = pbVar25[uVar34 + 49];
                                if (bVar5 == 0) {
                                    uVar35 = 0;
                                } else {
                                    pvVar13 = field_160;
                                    lVar31 = (ulong)pbVar25[uVar34 + 65] * 2120;
                                    if ((int)field_1760 < 10) {
                                        prep_huffman((stb_vorbis*)this);
                                    }
                                    uVar35 = (uint) * (short*)((Codebook*)((long)pvVar13 + lVar31) +
                                                               (ulong)(field_1756 & 1023) * 2 + 48);
                                    if ((int)uVar35 < 0) {
                                        uVar35 = codebook_decode_scalar_raw((stb_vorbis*)this,
                                                                            (Codebook*)((long)pvVar13 + lVar31));
                                        cVar7 = *(char*)((long)pvVar13 + lVar31 + 27);
                                    } else {
                                        bVar6 = *(byte*)(*(long*)((long)pvVar13 + lVar31 + 8) + (long)(int)uVar35);
                                        field_1756 = field_1756 >> (bVar6 & 31);
                                        uVar18 = field_1760 - (uint)bVar6;
                                        if ((int)uVar18 < 0) {
                                            uVar18 = 0;
                                            uVar35 = 4294967295;
                                        }
                                        field_1760 = uVar18;
                                        cVar7 = *(char*)((long)pvVar13 + lVar31 + 27);
                                    }
                                    if (cVar7 != '\0') {
                                        uVar35 =
                                            *(uint*)(*(long*)((long)pvVar13 + lVar31 + 2104) + (long)(int)uVar35 * 4);
                                    }
                                }
                                if (bVar3 != 0) {
                                    lVar31 = 0;
                                    do {
                                        uVar18 = uVar35 & ~(-1 << (bVar5 & 31));
                                        uVar35 = (int)uVar35 >> (bVar5 & 31);
                                        if ((long)*(short*)(pbVar25 + (long)(int)uVar18 * 2 + uVar34 * 16 + 82) < 0) {
                                            iVar17 = 0;
                                        } else {
                                            pvVar13 = field_160;
                                            lVar37 =
                                                (long)*(short*)(pbVar25 + (long)(int)uVar18 * 2 + uVar34 * 16 + 82) *
                                                2120;
                                            if ((int)field_1760 < 10) {
                                                prep_huffman((stb_vorbis*)this);
                                            }
                                            iVar17 = (int)*(short*)((Codebook*)((long)pvVar13 + lVar37) +
                                                                    (ulong)(field_1756 & 1023) * 2 + 48);
                                            if (iVar17 < 0) {
                                                iVar17 = codebook_decode_scalar_raw(
                                                    (stb_vorbis*)this, (Codebook*)((long)pvVar13 + lVar37));
                                                cVar7 = *(char*)((long)pvVar13 + lVar37 + 27);
                                            } else {
                                                bVar6 = *(byte*)(*(long*)((long)pvVar13 + lVar37 + 8) + (long)iVar17);
                                                field_1756 = field_1756 >> (bVar6 & 31);
                                                uVar18 = field_1760 - (uint)bVar6;
                                                if ((int)uVar18 < 0) {
                                                    uVar18 = 0;
                                                    iVar17 = -1;
                                                }
                                                field_1760 = uVar18;
                                                cVar7 = *(char*)((long)pvVar13 + lVar37 + 27);
                                            }
                                            if (cVar7 != '\0') {
                                                iVar17 =
                                                    *(int*)(*(long*)((long)pvVar13 + lVar37 + 2104) + (long)iVar17 * 4);
                                            }
                                        }
                                        puVar12[local_a00 + lVar31] = (short)iVar17;
                                        lVar31 = lVar31 + 1;
                                        local_9d0 = (uint)bVar3;
                                    } while (local_9d0 != (uint)lVar31);
                                    local_a00 = local_a00 + (uint)lVar31;
                                }
                                uVar30 = uVar30 + 1;
                            } while (uVar30 < *pbVar25);
                        }
                        if (field_1760 != 4294967295) {
                            local_838._0_2_ = 257;
                            uVar35 = *(uint*)((long)pvVar11 + lVar36 + 1592);
                            if (2 < (int)uVar35) {
                                lVar31 = 0;
                                do {
                                    uVar30 = (ulong) * (byte*)((long)pvVar11 + lVar31 * 2 + lVar36 + 1092);
                                    uVar34 = (ulong) * (byte*)((long)pvVar11 + lVar31 * 2 + lVar36 + 1093);
                                    iVar17 =
                                        predict_point((uint) * (ushort*)((long)pvVar11 + lVar31 * 2 + lVar36 + 342),
                                                      (uint) * (ushort*)(pbVar25 + uVar30 * 2 + 338),
                                                      (uint) * (ushort*)(pbVar25 + uVar34 * 2 + 338),
                                                      (int)(short)puVar12[uVar30], (int)(short)puVar12[uVar34]);
                                    uVar9 = puVar12[lVar31 + 2];
                                    uVar18 = (uint)(short)uVar9;
                                    if (uVar18 == 0) {
                                        *(undefined1*)((long)local_8b8 + lVar31 + 130) = 0;
                                    LAB_100b9aad8:
                                        sVar21 = (short)iVar17;
                                    LAB_100b9aae8:
                                        puVar12[lVar31 + 2] = sVar21;
                                    } else {
                                        iVar27 = iVar16 - iVar17;
                                        iVar33 = iVar17;
                                        if (iVar27 < iVar17) {
                                            iVar33 = iVar27;
                                        }
                                        *(undefined1*)((long)local_8b8 + uVar34 + 128) = 1;
                                        *(undefined1*)((long)local_8b8 + uVar30 + 128) = 1;
                                        *(undefined1*)((long)local_8b8 + lVar31 + 130) = 1;
                                        if ((int)uVar18 < iVar33 * 2) {
                                            if ((uVar18 & 1) != 0) {
                                                iVar17 = iVar17 - (uVar18 + 1 >> 1);
                                                goto LAB_100b9aad8;
                                            }
                                            sVar21 = (short)(uVar18 >> 1) + (short)iVar17;
                                            goto LAB_100b9aae8;
                                        }
                                        if (iVar27 <= iVar17) {
                                            sVar21 = ~uVar9 + (short)iVar16;
                                            goto LAB_100b9aae8;
                                        }
                                    }
                                    lVar31 = lVar31 + 1;
                                } while ((ulong)uVar35 - 2 != lVar31);
                            }
                            if (0 < (int)uVar35) {
                                uVar30 = 0;
                                do {
                                    if (*(char*)((long)local_8b8 + uVar30 + 128) == '\0') {
                                        puVar12[uVar30] = 65535;
                                    }
                                    uVar30 = uVar30 + 1;
                                } while (uVar35 != uVar30);
                            }
                            goto LAB_100b9abfe;
                        }
                    }
                    local_438[lVar24] = 1;
                }
            LAB_100b9abfe:
                if (sVar8 == 0) {
                    uVar20 = 0;
                    goto LAB_100b9b120;
                }
                lVar24 = lVar24 + 1;
            } while (lVar24 < (int)field_4);
        }
        if ((field_104 != 0) && (field_112 != field_124)) {
            /* WARNING: Subroutine does not return */
            LogAssert("f->alloc.alloc_buffer_length_in_bytes == f->temp_offset",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      3008, (char*)0);
        }
        _memcpy(&local_838, local_438, (long)(int)field_4 << 2);
        uVar9 = *(ushort*)pMVar1;
        if ((ulong)uVar9 != 0) {
            lVar24 = *plVar19;
            lVar36 = 0;
            do {
                bVar3 = *(byte*)(lVar24 + lVar36);
                if ((local_438[bVar3] == 0) || (local_438[*(byte*)(lVar24 + 1 + lVar36)] == 0)) {
                    local_438[*(byte*)(lVar24 + 1 + lVar36)] = 0;
                    local_438[bVar3] = 0;
                }
                lVar36 = lVar36 + 3;
            } while ((ulong)uVar9 * 3 != lVar36);
        }
        uVar35 = iVar28 >> 1;
        if (*(char*)((long)pvVar10 + lVar29 + 16) != '\0') {
            uVar30 = 0;
            do {
                uVar18 = field_4;
                iVar16 = 0;
                if (0 < (int)uVar18) {
                    pbVar25 = (byte*)(*plVar19 + 2);
                    uVar34 = 0;
                    iVar16 = 0;
                    do {
                        if (uVar30 == *pbVar25) {
                            if (local_438[uVar34] == 0) {
                                local_9b8[iVar16] = '\0';
                                pfVar32 = *(float**)(field_68 + uVar34 * 8 + 796);
                            } else {
                                local_9b8[iVar16] = '\x01';
                                pfVar32 = (float*)0;
                            }
                            local_8b8[iVar16] = pfVar32;
                            iVar16 = iVar16 + 1;
                        }
                        uVar34 = uVar34 + 1;
                        pbVar25 = pbVar25 + 3;
                    } while (uVar18 != uVar34);
                }
                decode_residue((stb_vorbis*)this, local_8b8, iVar16, uVar35, (uint)(byte)pMVar1[uVar30 + 32],
                               local_9b8);
                uVar30 = uVar30 + 1;
            } while (uVar30 < *(byte*)((long)pvVar10 + lVar29 + 16));
        }
        if ((field_104 != 0) && (field_112 != field_124)) {
            /* WARNING: Subroutine does not return */
            LogAssert("f->alloc.alloc_buffer_length_in_bytes == f->temp_offset",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      3041, (char*)0);
        }
        uVar30 = (ulong) * (ushort*)pMVar1;
        if (uVar30 != 0) {
            lVar29 = *plVar19;
            uVar34 = 1;
            if (1 < (int)uVar35) {
                uVar34 = (ulong)uVar35;
            }
            do {
                if (1 < iVar28) {
                    lVar36 = (uVar30 - 1) * 3;
                    lVar24 = *(long*)(field_68 + (ulong) * (byte*)(lVar29 + lVar36) * 8 + 796);
                    lVar36 = *(long*)(field_68 + (ulong) * (byte*)(lVar29 + 1 + lVar36) * 8 + 796);
                    uVar26 = 0;
                    do {
                        fVar39 = *(float*)(lVar24 + uVar26 * 4);
                        fVar2 = *(float*)(lVar36 + uVar26 * 4);
                        fVar38 = fVar39;
                        if (fVar39 <= 0.0) {
                            if (fVar2 <= 0.0) {
                                fVar38 = fVar39 - fVar2;
                            } else {
                                fVar39 = fVar2 + fVar39;
                            }
                        } else if (fVar2 <= 0.0) {
                            fVar38 = fVar2 + fVar39;
                        } else {
                            fVar39 = fVar39 - fVar2;
                        }
                        *(float*)(lVar24 + uVar26 * 4) = fVar38;
                        *(float*)(lVar36 + uVar26 * 4) = fVar39;
                        uVar26 = uVar26 + 1;
                    } while (uVar34 != uVar26);
                }
                bVar14 = 1 < (long)uVar30;
                uVar30 = uVar30 - 1;
            } while (bVar14);
        }
        if (0 < (int)field_4) {
            lVar29 = 0;
            do {
                if (*(int*)((long)local_8b8 + lVar29 * 4 + 128) == 0) {
                    do_floor((stb_vorbis*)this, pMVar1, (int)lVar29, iVar28, *(float**)(field_68 + lVar29 * 8 + 796),
                             *(short**)(field_1739 + lVar29 * 8 + -483), in_stack_fffffffffffff588);
                } else {
                    ___bzero(*(undefined8*)(field_68 + lVar29 * 8 + 796), (long)(int)uVar35 << 2);
                }
                lVar29 = lVar29 + 1;
            } while (lVar29 < (int)field_4);
        }
        if (0 < (int)field_4) {
            lVar29 = 0;
            do {
                inverse_mdct(*(float**)(field_68 + lVar29 * 8 + 796), iVar28, (stb_vorbis*)this, (uint)(byte)*param_2);
                lVar29 = lVar29 + 1;
            } while (lVar29 < (int)field_4);
        }
        flush_packet((stb_vorbis*)this);
        if (field_1741 == '\0') {
            iVar16 = field_1776;
            if (iVar16 == 0)
                goto LAB_100b9b031;
            if (iVar16 < param_4 - iVar22) {
                *(int*)CONCAT44(in_stack_0000000c, param_6) = iVar22 + iVar16;
                field_1776 = 0;
                iVar22 = iVar22 + iVar16;
            } else {
                field_1776 = iVar16 - (param_4 - iVar22);
                *(int*)CONCAT44(in_stack_0000000c, param_6) = param_4;
                iVar22 = param_4;
            }
        } else {
            field_1384 = -uVar35;
            field_1776 = iVar28 - param_5;
            field_1388 = 1;
            field_1741 = 0;
        LAB_100b9b031:
        }
        if (field_1752 == field_1768) {
            if ((field_1388 != 0) && ((field_1739[0] & 4) != 0)) {
                uVar23 = (param_5 - iVar28) + field_1772;
                uVar18 = field_1384;
                uVar20 = 0;
                if (uVar23 < uVar18 + param_5) {
                    iVar28 = uVar23 - uVar18;
                    if (uVar23 < uVar18) {
                        iVar28 = 0;
                    }
                    *(int*)param_1 = iVar28 + iVar22;
                    field_1384 = field_1384 + iVar28 + iVar22;
                    uVar20 = 1;
                }
                if (uVar23 < uVar18 + param_5)
                    goto LAB_100b9b120;
            }
            field_1384 = (iVar22 - uVar35) + field_1772;
            field_1388 = 1;
        }
        if (field_1388 != 0) {
            field_1384 = field_1384 + (param_4 - iVar22);
        }
        if ((field_104 != 0) && (field_112 != field_124)) {
            /* WARNING: Subroutine does not return */
            LogAssert("f->alloc.alloc_buffer_length_in_bytes == f->temp_offset",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      3162, (char*)0);
        }
        *(int*)param_1 = param_5;
        uVar20 = 1;
    LAB_100b9b120:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar20;
    }

    // 0x100b9b1b0, 256 bytes, placed by debug map only (low confidence)
    // get_bits(stb_vorbis*, int)
    uint get_bits(stb_vorbis* param_1, int param_2) {
        int iVar1;
        uint uVar3;

        iVar1 = *(int*)(param_1 + 1760);
        uVar3 = 0;
        if (-1 < iVar1) {
            if (iVar1 < param_2) {
                if (24 < param_2) {
                    iVar1 = get_bits(param_1, 24);
                    return get_bits(param_1, param_2 + -24) * 16777216 + iVar1;
                }
                if (iVar1 == 0) {
                    *(undefined4*)(param_1 + 1756) = 0;
                    iVar1 = *(int*)(param_1 + 1760);
                } else {
                    iVar1 = *(int*)(param_1 + 1760);
                }
                while (iVar1 < param_2) {
                    iVar1 = get8_packet_raw(param_1);
                    if (iVar1 == -1) {
                        *(undefined4*)(param_1 + 1760) = 4294967295;
                        return 0;
                    }
                    *(int*)(param_1 + 1756) =
                        *(int*)(param_1 + 1756) + (iVar1 << ((byte) * (int*)(param_1 + 1760) & 31));
                    iVar1 = *(int*)(param_1 + 1760) + 8;
                    *(int*)(param_1 + 1760) = iVar1;
                }
            }
            if (-1 < *(int*)(param_1 + 1760)) {
                uVar3 = ~(-1 << ((byte)param_2 & 31)) & *(uint*)(param_1 + 1756);
                *(uint*)(param_1 + 1756) = *(uint*)(param_1 + 1756) >> ((byte)param_2 & 31);
                *(int*)(param_1 + 1760) = *(int*)(param_1 + 1760) - param_2;
            }
        }
        return uVar3;
    }

    // 0x100b9b2b0, 176 bytes, placed by debug map only (low confidence)
    // ilog(int)
    int ilog(int param_1) {
        int iVar1;

        if (16383 < param_1) {
            if (16777215 < param_1) {
                iVar1 = 0;
                if (param_1 < 536870912) {
                    iVar1 = (char)(&ilog(int)::log2_4)[(uint)(param_1 >> 25)] + 25;
                }
                return iVar1;
            }
            if (param_1 < 524288) {
                return (char)(&ilog(int)::log2_4)[(uint)(param_1 >> 15)] + 15;
            }
            return (char)(&ilog(int)::log2_4)[(uint)(param_1 >> 20)] + 20;
        }
        if (param_1 < 16) {
            return (int)(char)(&ilog(int)::log2_4)[param_1];
        }
        if (param_1 < 512) {
            return (char)(&ilog(int)::log2_4)[(uint)(param_1 >> 5)] + 5;
        }
        return (char)(&ilog(int)::log2_4)[(uint)(param_1 >> 10)] + 10;
    }

    // 0x100b9b360, 128 bytes, placed by debug map only (low confidence)
    // get8_packet_raw(stb_vorbis*)
    ulong get8_packet_raw(stb_vorbis* param_1) {
        byte bVar1;

        if (param_1[1740] == (stb_vorbis)0) {
            if (*(int*)(param_1 + 1748) != 0) {
                return 4294967295;
            }
            if (next_segment(param_1) == 0) {
                return 4294967295;
            }
        }
        if (param_1[1740] == (stb_vorbis)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("f->bytes_in_seg > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      1158, (char*)0);
        }
        param_1[1740] = (stb_vorbis)((char)param_1[1740] + -1);
        *(int*)(param_1 + 1764) = *(int*)(param_1 + 1764) + 1;
        bVar1 = get8(param_1);
        return (ulong)bVar1;
    }

    // 0x100b9b3e0, 224 bytes, placed by debug map only (low confidence)
    // next_segment(stb_vorbis*)
    stb_vorbis next_segment(stb_vorbis* param_1) {
        stb_vorbis sVar1;
        int iVar2;

        if (*(int*)(param_1 + 1748) != 0) {
            return (stb_vorbis)0;
        }
        if (*(int*)(param_1 + 1744) == -1) {
            *(int*)(param_1 + 1752) = *(int*)(param_1 + 1480) + -1;
            iVar2 = start_page(param_1);
            if (iVar2 == 0) {
                *(undefined4*)(param_1 + 1748) = 1;
                return (stb_vorbis)0;
            }
            if (((byte)param_1[1739] & 1) == 0) {
                error(param_1, 32);
                return (stb_vorbis)0;
            }
        }
        iVar2 = *(int*)(param_1 + 1744);
        *(int*)(param_1 + 1744) = iVar2 + 1;
        sVar1 = param_1[(long)iVar2 + 1484];
        if (sVar1 != (stb_vorbis)255) {
            *(undefined4*)(param_1 + 1748) = 1;
            *(int*)(param_1 + 1752) = iVar2;
        }
        if (*(int*)(param_1 + 1480) <= iVar2 + 1) {
            *(undefined4*)(param_1 + 1744) = 4294967295;
        }
        if (param_1[1740] != (stb_vorbis)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("f->bytes_in_seg == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      1144, (char*)0);
        }
        param_1[1740] = sVar1;
        return sVar1;
    }

    // 0x100b9b4c0, 80 bytes, placed by debug map only (low confidence)
    // get8(stb_vorbis*)
    uint get8(stb_vorbis* param_1) {
        byte* pbVar1;
        uint uVar2;

        pbVar1 = *(byte**)(param_1 + 40);
        if (pbVar1 == (byte*)0) {
            uVar2 = _fgetc(*(FILE**)(param_1 + 24));
            if (uVar2 != 4294967295)
                goto LAB_100b9b4fe;
        } else if (pbVar1 < *(byte**)(param_1 + 56)) {
            *(byte**)(param_1 + 40) = pbVar1 + 1;
            uVar2 = (uint)*pbVar1;
            goto LAB_100b9b4fe;
        }
        *(undefined4*)(param_1 + 128) = 1;
        uVar2 = 0;
    LAB_100b9b4fe:
        return uVar2 & 255;
    }

    // 0x100b9b510, 48 bytes, placed by debug map only (low confidence)
    // start_page(stb_vorbis*)
    undefined8 start_page(stb_vorbis* param_1) {
        undefined8 uVar2;

        if (capture_pattern(param_1) == 0) {
            error(param_1, 30);
            uVar2 = 0;
        } else {
            uVar2 = start_page_no_capturepattern(param_1);
        }
        return uVar2;
    }

    // 0x100b9b540, 80 bytes, placed by debug map only (low confidence)
    // capture_pattern(stb_vorbis*)
    bool capture_pattern(stb_vorbis* param_1) {
        char cVar1;
        bool bVar2;

        cVar1 = get8(param_1);
        bVar2 = false;
        if (cVar1 == 'O') {
            cVar1 = get8(param_1);
            if (cVar1 == 'g') {
                cVar1 = get8(param_1);
                if (cVar1 == 'g') {
                    cVar1 = get8(param_1);
                    bVar2 = cVar1 == 'S';
                }
            }
        }
        return bVar2;
    }

    // 0x100b9b590, 336 bytes, placed by debug map only (low confidence)
    // start_page_no_capturepattern(stb_vorbis*)
    undefined8 start_page_no_capturepattern(stb_vorbis* param_1) {
        long lVar1;
        uint uVar2;
        long lVar3;
        byte bVar6;
        int iVar7;
        int iVar8;
        undefined4 uVar9;
        long lVar11;
        ulong uVar12;
        undefined8 uVar13;

        if (get8(param_1) == '\0') {
            param_1[1739] = (stb_vorbis)get8(param_1);
            iVar7 = get32(param_1);
            iVar8 = get32(param_1);
            get32(param_1);
            uVar9 = get32(param_1);
            *(undefined4*)(param_1 + 1476) = uVar9;
            get32(param_1);
            bVar6 = get8(param_1);
            *(uint*)(param_1 + 1480) = (uint)bVar6;
            if (getn(param_1, (uchar*)(param_1 + 1484), (uint)bVar6) != 0) {
                *(undefined4*)(param_1 + 1768) = 4294967294;
                if ((iVar7 != -1) || (iVar8 != -1)) {
                    lVar11 = (long)*(int*)(param_1 + 1480);
                    do {
                        if (lVar11 < 1)
                            goto LAB_100b9b663;
                        lVar1 = lVar11 + -1;
                        lVar3 = lVar11 + 1483;
                        lVar11 = lVar1;
                    } while (param_1[lVar3] == (stb_vorbis)255);
                    *(int*)(param_1 + 1768) = (int)lVar1;
                    *(int*)(param_1 + 1772) = iVar7;
                }
            LAB_100b9b663:
                if (param_1[1741] != (stb_vorbis)0) {
                    uVar2 = *(uint*)(param_1 + 1480);
                    if ((int)uVar2 < 1) {
                        iVar8 = 27;
                    } else {
                        uVar12 = 0;
                        iVar8 = 0;
                        do {
                            iVar8 = iVar8 + (uint)(byte)param_1[uVar12 + 1484];
                            uVar12 = uVar12 + 1;
                        } while (uVar2 != uVar12);
                        iVar8 = iVar8 + 27;
                    }
                    *(int*)(param_1 + 76) = *(int*)(param_1 + 72);
                    *(uint*)(param_1 + 80) = uVar2 + iVar8 + *(int*)(param_1 + 72);
                    *(int*)(param_1 + 84) = iVar7;
                }
                *(undefined4*)(param_1 + 1744) = 0;
                return 1;
            }
            uVar13 = 10;
        } else {
            uVar13 = 31;
        }
        error(param_1, uVar13);
        return 0;
    }

    // 0x100b9b6e0, 128 bytes, placed by debug map only (low confidence)
    // prep_huffman(stb_vorbis*)
    void prep_huffman(stb_vorbis* param_1) {
        int iVar1;
        int iVar2;

        if (*(int*)(param_1 + 1760) < 25) {
            if (*(int*)(param_1 + 1760) == 0) {
                *(undefined4*)(param_1 + 1756) = 0;
            }
            do {
                if ((*(int*)(param_1 + 1748) != 0) && (param_1[1740] == (stb_vorbis)0)) {
                    return;
                }
                iVar2 = get8_packet_raw(param_1);
                if (iVar2 == -1) {
                    return;
                }
                iVar1 = *(int*)(param_1 + 1760);
                *(int*)(param_1 + 1756) = *(int*)(param_1 + 1756) + (iVar2 << ((byte)iVar1 & 31));
                *(int*)(param_1 + 1760) = iVar1 + 8;
            } while (iVar1 < 17);
        }
    }

    // 0x100b9b760, 496 bytes, placed by debug map only (low confidence)
    // codebook_decode_scalar_raw(stb_vorbis*, Codebook*)
    ulong codebook_decode_scalar_raw(stb_vorbis* param_1, Codebook* param_2) {
        byte bVar1;
        uint uVar2;
        long lVar3;
        uint uVar4;
        ulong uVar5;
        uint uVar6;
        int iVar7;
        int iVar8;

        prep_huffman(param_1);
        if ((*(long*)(param_2 + 2096) == 0) && (*(long*)(param_2 + 40) == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("c->sorted_codewords || c->codewords",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      1239, (char*)0);
        }
        if (*(int*)(param_2 + 4) < 9) {
            if (*(long*)(param_2 + 40) != 0)
                goto LAB_100b9b88c;
        } else if (*(long*)(param_2 + 2096) == 0) {
        LAB_100b9b88c:
            if (param_2[27] != (Codebook)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("!c->sparse",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                          "vorbis_std.code",
                          1273, (char*)0);
            }
            if (0 < (int)*(uint*)(param_2 + 4)) {
                lVar3 = *(long*)(param_2 + 8);
                uVar5 = 0;
                do {
                    bVar1 = *(byte*)(lVar3 + uVar5);
                    if ((bVar1 != 255) && (*(uint*)(*(long*)(param_2 + 40) + uVar5 * 4) ==
                                           (~(-1 << (bVar1 & 31)) & *(uint*)(param_1 + 1756)))) {
                        if ((int)(uint)bVar1 <= *(int*)(param_1 + 1760)) {
                            *(uint*)(param_1 + 1756) = *(uint*)(param_1 + 1756) >> (bVar1 & 31);
                            *(uint*)(param_1 + 1760) = *(int*)(param_1 + 1760) - (uint) * (byte*)(lVar3 + uVar5);
                            return uVar5;
                        }
                        goto LAB_100b9b933;
                    }
                    uVar5 = uVar5 + 1;
                } while (*(uint*)(param_2 + 4) != uVar5);
            }
            error(param_1, 21);
        LAB_100b9b933:
            *(undefined4*)(param_1 + 1760) = 0;
            return 4294967295;
        }
        uVar2 = *(uint*)(param_1 + 1756);
        uVar4 = bit_reverse(uVar2);
        iVar7 = *(int*)(param_2 + 2112);
        uVar5 = 0;
        if (1 < iVar7) {
            uVar6 = 0;
            do {
                iVar8 = iVar7 >> 1;
                if (uVar4 < *(uint*)(*(long*)(param_2 + 2096) + (long)(int)(iVar8 + uVar6) * 4)) {
                    iVar7 = iVar8;
                } else {
                    iVar7 = iVar7 - iVar8;
                    uVar6 = iVar8 + uVar6;
                }
                uVar5 = (ulong)uVar6;
            } while (1 < iVar7);
        }
        if (param_2[27] == (Codebook)0) {
            uVar5 = (ulong) * (uint*)(*(long*)(param_2 + 2104) + (long)(int)uVar5 * 4);
        }
        bVar1 = *(byte*)(*(long*)(param_2 + 8) + (long)(int)uVar5);
        if (*(int*)(param_1 + 1760) < (int)(uint)bVar1) {
            uVar5 = 4294967295;
            *(undefined4*)(param_1 + 1760) = 0;
        } else {
            *(uint*)(param_1 + 1756) = uVar2 >> (bVar1 & 31);
            *(uint*)(param_1 + 1760) = *(int*)(param_1 + 1760) - (uint)bVar1;
        }
        return uVar5;
    }

    // 0x100b9b950, 48 bytes, placed by debug map only (low confidence)
    // predict_point(int, int, int, int, int)
    int predict_point(int param_1, int param_2, int param_3, int param_4, int param_5) {
        int iVar1;
        int iVar2;

        iVar2 = param_5 - param_4;
        iVar1 = -iVar2;
        if (-iVar2 < 0) {
            iVar1 = iVar2;
        }
        iVar1 = (iVar1 * (param_1 - param_2)) / (param_3 - param_2);
        if (iVar2 < 0) {
            iVar1 = -iVar1;
        }
        return iVar1 + param_4;
    }

    // 0x100b9b980, 3168 bytes, placed by debug map only (low confidence)
    // decode_residue(stb_vorbis*, float**, int, int, int, unsigned char*)
    /* WARNING: Removing unreachable block (ram,4307142022) */
    /* decode_residue(stb_vorbis*,
   float**, int, int, int, unsigned char*) */

    void decode_residue(stb_vorbis* param_1, float** param_2, int param_3, int param_4, int param_5, uchar* param_6) {
        byte bVar1;
        char cVar2;
        uint uVar3;
        float* pfVar4;
        long lVar5;
        bool bVar6;
        float** ppfVar7;
        stb_vorbis* psVar8;
        int iVar9;
        int iVar10;
        uint uVar11;
        long* plVar12;
        long lVar13;
        undefined4 in_register_0000000c;
        int iVar14;
        Codebook* pCVar15;
        ulong uVar16;
        long lVar17;
        long* plVar18;
        Codebook* pCVar19;
        uchar* puVar20;
        long lVar21;
        long lVar22;
        undefined8 uStack_b8;
        uint local_b0;
        int local_ac;
        long* local_a0;
        long* local_98;
        long local_90;
        long* local_88;
        Codebook* local_78;
        byte* local_70;
        long* local_68;
        uint local_60;
        int local_5c;
        long local_58;
        uchar* local_50;
        ulong local_48;
        long local_38;

        local_a0 = (long*)CONCAT44(in_register_0000000c, param_4);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_68 = *(long**)(param_1 + 448);
        lVar21 = (long)param_5;
        local_b0 = (uint) * (ushort*)(param_1 + lVar21 * 2 + 316);
        lVar22 = lVar21 * 32;
        local_90 = (long)*(int*)(*(long*)(param_1 + 160) + (ulong) * (byte*)((long)local_68 + lVar22 + 13) * 2120);
        uVar16 = (ulong)(uint)(*(int*)((long)local_68 + lVar22 + 4) - (int)local_68[lVar21 * 4]) / (ulong) *
                 (uint*)(local_68 + lVar21 * 4 + 1);
        uStack_b8._4_4_ = *(undefined4*)(param_1 + 124);
        iVar14 = (int)uVar16;
        local_50 = param_6;
        if (*(long*)(param_1 + 104) == 0) {
            plVar18 = (long*)((long)&uStack_b8 -
                              (((long)iVar14 * 8 + 8) * (long)*(int*)(param_1 + 4) + 15U & 18446744073709551600));
            plVar12 = plVar18;
        } else {
            plVar12 = (long*)setup_temp_malloc(param_1, (iVar14 * 8 + 8) * *(int*)(param_1 + 4));
            plVar18 = &uStack_b8;
        }
        uVar11 = (uint)param_3;
        pCVar19 = (Codebook*)(ulong)(uint)param_3;
        iVar9 = *(int*)(param_1 + 4);
        local_88 = plVar12;
        local_48 = uVar16;
        plVar18[-1] = 4307139196;
        make_block_array(plVar12, iVar9, iVar14 * 8);
        plVar12 = local_68;
        local_78 = pCVar19;
        puVar20 = local_50;
        if (0 < (int)uVar11) {
            pCVar15 = (Codebook*)0;
            do {
                if (puVar20[(long)pCVar15] == '\0') {
                    pfVar4 = param_2[(long)pCVar15];
                    plVar18[-1] = 4307139266;
                    ___bzero(pfVar4);
                    puVar20 = local_50;
                    pCVar19 = local_78;
                }
                pCVar15 = pCVar15 + 1;
            } while (pCVar19 != pCVar15);
        }
        local_70 = (byte*)((long)plVar12 + lVar22 + 13);
        local_98 = plVar12 + lVar21 * 4;
        if (((short)local_b0 == 2) && ((uint)param_3 != 1)) {
            if ((int)(uint)param_3 < 1) {
                pCVar19 = (Codebook*)0;
            } else {
                pCVar15 = (Codebook*)0;
                do {
                    if (puVar20[(long)pCVar15] == '\0') {
                        uVar11 = (uint)pCVar15;
                        goto joined_r0x000100b9be34;
                    }
                    pCVar15 = pCVar15 + 1;
                } while (pCVar19 != pCVar15);
            }
            uVar11 = (uint)pCVar19;
        joined_r0x000100b9be34:
            if (uVar11 != (uint)param_3) {
                local_68 = plVar12 + lVar21 * 4 + 2;
                lVar21 = 0;
                uVar16 = local_48;
                do {
                    iVar14 = 0;
                    puVar20 = (uchar*)0;
                    if ((uint)param_3 == 2) {
                        do {
                            psVar8 = param_1;
                            if ((int)uVar16 <= (int)puVar20)
                                goto LAB_100b9c594;
                            uVar11 = *(int*)(local_70 + -5) * (int)puVar20 + (int)*local_98;
                            local_60 = uVar11 & 1;
                            local_5c = (int)uVar11 >> 1;
                            lVar22 = (long)iVar14;
                            local_58 = CONCAT44(local_58._4_4_, iVar14);
                            local_50 = puVar20;
                            if (lVar21 == 0) {
                                lVar17 = *(long*)(param_1 + 160);
                                lVar13 = (ulong)*local_70 * 2120;
                                pCVar19 = (Codebook*)(lVar17 + lVar13);
                                if (*(int*)(param_1 + 1760) < 10) {
                                    local_78 = (Codebook*)(lVar17 + lVar13);
                                    plVar18[-1] = 4307141201;
                                    prep_huffman(psVar8);
                                    pCVar19 = local_78;
                                }
                                iVar9 = (int)*(short*)(pCVar19 + (ulong)(*(uint*)(psVar8 + 1756) & 1023) * 2 + 48);
                                if (iVar9 < 0) {
                                    plVar18[-1] = 4307141309;
                                    iVar9 = codebook_decode_scalar_raw(psVar8, pCVar19);
                                } else {
                                    bVar1 = *(byte*)(*(long*)(lVar17 + 8 + lVar13) + (long)iVar9);
                                    *(uint*)(psVar8 + 1756) = *(uint*)(psVar8 + 1756) >> (bVar1 & 31);
                                    iVar14 = *(int*)(psVar8 + 1760) - (uint)bVar1;
                                    if (iVar14 < 0) {
                                        iVar14 = 0;
                                        iVar9 = -1;
                                    }
                                    *(int*)(psVar8 + 1760) = iVar14;
                                }
                                if (*(char*)(lVar17 + 27 + lVar13) != '\0') {
                                    iVar9 = *(int*)(*(long*)(lVar17 + 2104 + lVar13) + (long)iVar9 * 4);
                                }
                                uVar16 = local_48;
                                puVar20 = local_50;
                                iVar14 = (int)local_58;
                                if (iVar9 == -1) {
                                    bVar6 = true;
                                } else {
                                    *(undefined8*)(*local_88 + lVar22 * 8) =
                                        *(undefined8*)(*local_68 + (long)iVar9 * 8);
                                    bVar6 = false;
                                    if (iVar9 != -1)
                                        goto LAB_100b9c12c;
                                }
                            } else {
                            LAB_100b9c12c:
                                psVar8 = param_1;
                                puVar20 = local_50;
                                if (0 < (int)local_90) {
                                    iVar14 = (int)local_50;
                                    lVar17 = 1;
                                    do {
                                        plVar12 = local_a0;
                                        ppfVar7 = param_2;
                                        uVar11 = *(uint*)(local_70 + -5);
                                        lVar13 = (long)*(
                                            short*)((ulong) * (byte*)(*(long*)(*local_88 + lVar22 * 8) + -1 + lVar17) *
                                                        16 +
                                                    local_68[1] + lVar21 * 2);
                                        iVar9 = (int)lVar17;
                                        if (lVar13 < 0) {
                                            uVar11 = (iVar9 + iVar14 + -1) * uVar11 + uVar11 + (int)*local_98;
                                            local_60 = uVar11 & 1;
                                            local_5c = (int)uVar11 >> 1;
                                        } else {
                                            lVar5 = *(long*)(psVar8 + 160);
                                            plVar18[-2] = (ulong)uVar11;
                                            plVar18[-3] = 4307141022;
                                            iVar10 = codebook_decode_deinterleave_repeat_2(
                                                psVar8, (Codebook*)(lVar13 * 2120 + lVar5), ppfVar7, (int*)&local_60,
                                                &local_5c, (int)plVar12, (int)plVar18[-2]);
                                            if (iVar10 == 0) {
                                                bVar6 = true;
                                                uVar16 = local_48;
                                                puVar20 = (uchar*)(ulong)(((int)local_50 + iVar9) - 1);
                                                iVar14 = (int)local_58;
                                                goto LAB_100b9c0e5;
                                            }
                                        }
                                        lVar13 = lVar17 + 1;
                                        if (local_90 <= lVar17)
                                            break;
                                        lVar17 = lVar13;
                                    } while (iVar9 + iVar14 < (int)local_48);
                                    puVar20 = (uchar*)(ulong)(((int)local_50 + (int)lVar13) - 1);
                                    uVar16 = local_48;
                                    iVar14 = (int)local_58;
                                }
                                bVar6 = false;
                                iVar14 = iVar14 + 1;
                            }
                        LAB_100b9c0e5:
                        } while (!bVar6);
                    } else {
                        uVar11 = (uint)param_3;
                        if ((uint)param_3 == 1) {
                            do {
                                psVar8 = param_1;
                                if ((int)uVar16 <= (int)puVar20) {
                                    bVar6 = false;
                                    break;
                                }
                                local_60 = 0;
                                local_5c = *(int*)(local_70 + -5) * (int)puVar20 + (int)*local_98;
                                lVar22 = (long)iVar14;
                                local_58 = CONCAT44(local_58._4_4_, iVar14);
                                local_50 = puVar20;
                                if (lVar21 == 0) {
                                    lVar17 = *(long*)(param_1 + 160);
                                    lVar13 = (ulong)*local_70 * 2120;
                                    pCVar19 = (Codebook*)(lVar17 + lVar13);
                                    if (*(int*)(param_1 + 1760) < 10) {
                                        local_78 = (Codebook*)(lVar17 + lVar13);
                                        plVar18[-1] = 4307141794;
                                        prep_huffman(psVar8);
                                        pCVar19 = local_78;
                                    }
                                    iVar9 = (int)*(short*)(pCVar19 + (ulong)(*(uint*)(psVar8 + 1756) & 1023) * 2 + 48);
                                    if (iVar9 < 0) {
                                        plVar18[-1] = 4307141901;
                                        iVar9 = codebook_decode_scalar_raw(psVar8, pCVar19);
                                    } else {
                                        bVar1 = *(byte*)(*(long*)(lVar17 + 8 + lVar13) + (long)iVar9);
                                        *(uint*)(psVar8 + 1756) = *(uint*)(psVar8 + 1756) >> (bVar1 & 31);
                                        iVar14 = *(int*)(psVar8 + 1760) - (uint)bVar1;
                                        if (iVar14 < 0) {
                                            iVar14 = 0;
                                            iVar9 = -1;
                                        }
                                        *(int*)(psVar8 + 1760) = iVar14;
                                    }
                                    if (*(char*)(lVar17 + 27 + lVar13) != '\0') {
                                        iVar9 = *(int*)(*(long*)(lVar17 + 2104 + lVar13) + (long)iVar9 * 4);
                                    }
                                    uVar16 = local_48;
                                    puVar20 = local_50;
                                    uVar11 = (uint)param_3;
                                    iVar14 = (int)local_58;
                                    if (iVar9 == -1) {
                                        bVar6 = true;
                                    } else {
                                        *(undefined8*)(*local_88 + lVar22 * 8) =
                                            *(undefined8*)(*local_68 + (long)iVar9 * 8);
                                        bVar6 = false;
                                        if (iVar9 != -1)
                                            goto LAB_100b9c385;
                                    }
                                } else {
                                LAB_100b9c385:
                                    puVar20 = local_50;
                                    if (0 < (int)local_90) {
                                        iVar14 = (int)local_50;
                                        lVar17 = 1;
                                        do {
                                            psVar8 = param_1;
                                            ppfVar7 = param_2;
                                            uVar3 = *(uint*)(local_70 + -5);
                                            lVar13 = (long)*(
                                                short*)((ulong) *
                                                            (byte*)(*(long*)(*local_88 + lVar22 * 8) + -1 + lVar17) *
                                                            16 +
                                                        local_68[1] + lVar21 * 2);
                                            iVar9 = (int)lVar17;
                                            if (lVar13 < 0) {
                                                local_60 = 0;
                                                local_5c = (iVar9 + iVar14 + -1) * uVar3 + uVar3 + (int)*local_98;
                                            } else {
                                                lVar5 = *(long*)(param_1 + 160);
                                                plVar18[-1] = (ulong)uVar3;
                                                plVar18[-2] = (long)local_a0;
                                                plVar18[-3] = 4307141629;
                                                iVar10 = codebook_decode_deinterleave_repeat(
                                                    psVar8, (Codebook*)(lVar13 * 2120 + lVar5), ppfVar7, uVar11,
                                                    (int*)&local_60, &local_5c, (int)plVar18[-2], (int)plVar18[-1]);
                                                if (iVar10 == 0) {
                                                    bVar6 = true;
                                                    uVar16 = local_48;
                                                    puVar20 = (uchar*)(ulong)(((int)local_50 + iVar9) - 1);
                                                    iVar14 = (int)local_58;
                                                    goto LAB_100b9c345;
                                                }
                                            }
                                            lVar13 = lVar17 + 1;
                                            if (local_90 <= lVar17)
                                                break;
                                            lVar17 = lVar13;
                                        } while (iVar9 + iVar14 < (int)local_48);
                                        puVar20 = (uchar*)(ulong)(((int)local_50 + (int)lVar13) - 1);
                                        uVar16 = local_48;
                                        iVar14 = (int)local_58;
                                    }
                                    bVar6 = false;
                                    iVar14 = iVar14 + 1;
                                }
                            LAB_100b9c345:
                            } while (!bVar6);
                        } else {
                            do {
                                psVar8 = param_1;
                                if ((int)uVar16 <= (int)puVar20)
                                    goto LAB_100b9c594;
                                iVar9 = *(int*)(local_70 + -5) * (int)puVar20 + (int)*local_98;
                                local_60 = iVar9 % (int)(uint)param_3;
                                local_5c = iVar9 / (int)(uint)param_3;
                                lVar22 = (long)iVar14;
                                local_58 = CONCAT44(local_58._4_4_, iVar14);
                                local_50 = puVar20;
                                if (lVar21 == 0) {
                                    lVar17 = *(long*)(param_1 + 160);
                                    lVar13 = (ulong)*local_70 * 2120;
                                    pCVar19 = (Codebook*)(lVar17 + lVar13);
                                    if (*(int*)(param_1 + 1760) < 10) {
                                        local_78 = (Codebook*)(lVar17 + lVar13);
                                        plVar18[-1] = 4307140610;
                                        prep_huffman(psVar8);
                                        pCVar19 = local_78;
                                    }
                                    iVar9 = (int)*(short*)(pCVar19 + (ulong)(*(uint*)(psVar8 + 1756) & 1023) * 2 + 48);
                                    if (iVar9 < 0) {
                                        plVar18[-1] = 4307140776;
                                        iVar9 = codebook_decode_scalar_raw(psVar8, pCVar19);
                                        cVar2 = *(char*)(lVar17 + 27 + lVar13);
                                        puVar20 = local_50;
                                        uVar16 = local_48;
                                    } else {
                                        bVar1 = *(byte*)(*(long*)(lVar17 + 8 + lVar13) + (long)iVar9);
                                        *(uint*)(psVar8 + 1756) = *(uint*)(psVar8 + 1756) >> (bVar1 & 31);
                                        iVar14 = *(int*)(psVar8 + 1760) - (uint)bVar1;
                                        if (iVar14 < 0) {
                                            iVar14 = 0;
                                            iVar9 = -1;
                                        }
                                        *(int*)(psVar8 + 1760) = iVar14;
                                        cVar2 = *(char*)(lVar17 + 27 + lVar13);
                                        puVar20 = local_50;
                                        uVar16 = local_48;
                                    }
                                    if (cVar2 != '\0') {
                                        iVar9 = *(int*)(*(long*)(lVar17 + 2104 + lVar13) + (long)iVar9 * 4);
                                    }
                                    iVar14 = (int)local_58;
                                    local_50 = puVar20;
                                    local_48 = uVar16;
                                    if (iVar9 == -1) {
                                        bVar6 = true;
                                    } else {
                                        *(undefined8*)(*local_88 + lVar22 * 8) =
                                            *(undefined8*)(*local_68 + (long)iVar9 * 8);
                                        bVar6 = false;
                                        if (iVar9 != -1)
                                            goto LAB_100b9bee9;
                                    }
                                } else {
                                LAB_100b9bee9:
                                    puVar20 = local_50;
                                    if (0 < (int)local_90) {
                                        iVar14 = (int)local_50;
                                        lVar17 = 1;
                                        do {
                                            uVar3 = (uint)param_3;
                                            psVar8 = param_1;
                                            ppfVar7 = param_2;
                                            uVar11 = *(uint*)(local_70 + -5);
                                            lVar13 = (long)*(
                                                short*)((ulong) *
                                                            (byte*)(*(long*)(*local_88 + lVar22 * 8) + -1 + lVar17) *
                                                            16 +
                                                        local_68[1] + lVar21 * 2);
                                            iVar9 = (int)lVar17;
                                            if (lVar13 < 0) {
                                                iVar10 = (iVar14 + iVar9 + -1) * uVar11 + uVar11 + (int)*local_98;
                                                local_60 = iVar10 % (int)(uint)param_3;
                                                local_5c = iVar10 / (int)(uint)param_3;
                                            } else {
                                                lVar5 = *(long*)(param_1 + 160);
                                                plVar18[-1] = (ulong)uVar11;
                                                plVar18[-2] = (long)local_a0;
                                                plVar18[-3] = 4307140446;
                                                iVar10 = codebook_decode_deinterleave_repeat(
                                                    psVar8, (Codebook*)(lVar13 * 2120 + lVar5), ppfVar7, uVar3,
                                                    (int*)&local_60, &local_5c, (int)plVar18[-2], (int)plVar18[-1]);
                                                if (iVar10 == 0) {
                                                    bVar6 = true;
                                                    uVar16 = local_48;
                                                    goto LAB_100b9c590;
                                                }
                                            }
                                            lVar13 = lVar17 + 1;
                                            if (local_90 <= lVar17)
                                                break;
                                            lVar17 = lVar13;
                                        } while (iVar9 + iVar14 < (int)local_48);
                                        puVar20 = (uchar*)(ulong)(((int)local_50 + (int)lVar13) - 1);
                                        uVar16 = local_48;
                                        iVar14 = (int)local_58;
                                    }
                                    bVar6 = false;
                                    iVar14 = iVar14 + 1;
                                }
                            } while (!bVar6);
                        }
                    }
                LAB_100b9c590:
                    if (bVar6)
                        break;
                LAB_100b9c594:
                    lVar21 = lVar21 + 1;
                } while (lVar21 != 8);
            }
        } else {
            local_a0 = plVar12 + lVar21 * 4 + 2;
            local_58 = 0;
            uVar16 = local_48;
            do {
                iVar14 = 0;
                if (0 < (int)uVar16) {
                    local_68 = (long*)0;
                    iVar9 = 0;
                    plVar12 = local_88;
                    uVar11 = (uint)param_3;
                    do {
                        if ((local_58 == 0) && (0 < (int)uVar11)) {
                            pCVar15 = (Codebook*)0;
                            local_ac = iVar9;
                            do {
                                psVar8 = param_1;
                                if (puVar20[(long)pCVar15] == '\0') {
                                    lVar21 = *(long*)(param_1 + 160);
                                    lVar22 = (ulong)*local_70 * 2120;
                                    if (*(int*)(param_1 + 1760) < 10) {
                                        plVar18[-1] = 4307139539;
                                        prep_huffman(psVar8);
                                        puVar20 = local_50;
                                        pCVar19 = local_78;
                                        iVar9 = local_ac;
                                    }
                                    iVar10 = (int)*(short*)((Codebook*)(lVar21 + lVar22) +
                                                            (ulong)(*(uint*)(psVar8 + 1756) & 1023) * 2 + 48);
                                    if (iVar10 < 0) {
                                        plVar18[-1] = 4307139643;
                                        iVar10 = codebook_decode_scalar_raw(psVar8, (Codebook*)(lVar21 + lVar22));
                                        puVar20 = local_50;
                                        pCVar19 = local_78;
                                        iVar9 = local_ac;
                                    } else {
                                        bVar1 = *(byte*)(*(long*)(lVar21 + 8 + lVar22) + (long)iVar10);
                                        *(uint*)(psVar8 + 1756) = *(uint*)(psVar8 + 1756) >> (bVar1 & 31);
                                        iVar14 = *(int*)(psVar8 + 1760) - (uint)bVar1;
                                        if (iVar14 < 0) {
                                            iVar14 = 0;
                                            iVar10 = -1;
                                        }
                                        *(int*)(psVar8 + 1760) = iVar14;
                                    }
                                    if (*(char*)(lVar21 + 27 + lVar22) != '\0') {
                                        iVar10 = *(int*)(*(long*)(lVar21 + 2104 + lVar22) + (long)iVar10 * 4);
                                    }
                                    uVar16 = local_48;
                                    if (iVar10 == -1) {
                                        iVar14 = 8;
                                        goto LAB_100b9bdf9;
                                    }
                                    *(undefined8*)(local_88[(long)pCVar15] + (long)local_68 * 8) =
                                        *(undefined8*)(*local_a0 + (long)iVar10 * 8);
                                    iVar14 = 0;
                                    plVar12 = local_88;
                                    uVar11 = (uint)param_3;
                                    if (iVar10 == -1)
                                        goto LAB_100b9bdf9;
                                }
                                pCVar15 = pCVar15 + 1;
                            } while (pCVar19 != pCVar15);
                        }
                        if ((0 < (int)local_90) && (iVar9 < (int)uVar16)) {
                            lVar21 = 0;
                            do {
                                if (0 < (int)uVar11) {
                                    pCVar15 = (Codebook*)0;
                                    do {
                                        psVar8 = param_1;
                                        uVar3 = local_b0;
                                        if (puVar20[(long)pCVar15] == '\0') {
                                            lVar22 = (long)*(short*)((ulong) *
                                                                         (byte*)(*(long*)(plVar12[(long)pCVar15] +
                                                                                          (long)local_68 * 8) +
                                                                                 lVar21) *
                                                                         16 +
                                                                     local_a0[1] + local_58 * 2);
                                            if (-1 < lVar22) {
                                                iVar14 = *(int*)(local_70 + -5);
                                                lVar13 = *local_98;
                                                pfVar4 = param_2[(long)pCVar15];
                                                lVar17 = *(long*)(param_1 + 160);
                                                plVar18[-1] = 4307139951;
                                                iVar14 =
                                                    residue_decode(psVar8, (Codebook*)(lVar22 * 2120 + lVar17), pfVar4,
                                                                   iVar14 * iVar9 + (int)lVar13, iVar14, uVar3);
                                                puVar20 = local_50;
                                                pCVar19 = local_78;
                                                if (iVar14 == 0) {
                                                    iVar14 = 1;
                                                    uVar16 = local_48;
                                                    goto LAB_100b9bdf9;
                                                }
                                            }
                                        }
                                        pCVar15 = pCVar15 + 1;
                                    } while (pCVar19 != pCVar15);
                                }
                                lVar21 = lVar21 + 1;
                                iVar9 = iVar9 + 1;
                                uVar16 = local_48;
                            } while ((lVar21 < local_90) && (iVar9 < (int)local_48));
                        }
                        local_68 = (long*)((long)local_68 + 1);
                    } while (iVar9 < (int)uVar16);
                    iVar14 = 0;
                }
            LAB_100b9bdf9:
            } while ((iVar14 == 0) && (local_58 = local_58 + 1, local_58 != 8));
        }
        *(undefined4*)(param_1 + 124) = uStack_b8._4_4_;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            plVar18[-1] = (long)&UNK_100b9c5d3;
            ___stack_chk_fail();
        }
    }

    // 0x100b9c5e0, 336 bytes, placed by debug map only (low confidence)
    // do_floor(stb_vorbis*, Mapping*, int, int, float*, short*, unsigned char*)
    void do_floor(stb_vorbis* param_1, Mapping* param_2, int param_3, int param_4, float* param_5, short* param_6,
                  uchar* param_7) {
        float fVar1;
        long lVar2;
        ulong uVar3;
        long lVar4;
        int iVar5;
        int iVar6;
        uint uVar7;
        long lVar8;
        long lVar9;
        uint uVar10;
        int iVar11;

        if (*(short*)(param_1 +
                      (ulong)(byte)param_2[(ulong) * (byte*)(*(long*)(param_2 + 8) + 2 + (long)param_3 * 3) + 17] * 2 +
                      172) == 0) {
            error(param_1, 21);
        } else {
            iVar11 = param_4 >> 1;
            lVar4 = *(long*)(param_1 + 304);
            lVar2 = (ulong)(byte)param_2[(ulong) * (byte*)(*(long*)(param_2 + 8) + 2 + (long)param_3 * 3) + 17] * 1596;
            iVar5 = (uint) * (byte*)(lVar4 + 1588 + lVar2) * (int)*param_6;
            uVar10 = 0;
            if (1 < *(int*)(lVar4 + 1592 + lVar2)) {
                lVar9 = 839;
                uVar7 = 0;
                do {
                    uVar3 = (ulong) * (byte*)(lVar4 + lVar2 + lVar9);
                    if (param_6[uVar3] < 0) {
                        uVar10 = uVar7;
                        iVar6 = iVar5;
                    } else {
                        iVar6 = (uint) * (byte*)(lVar4 + lVar2 + 1588) * (int)param_6[uVar3];
                        uVar10 = (uint) * (ushort*)(lVar4 + lVar2 + 338 + uVar3 * 2);
                        if (uVar7 != uVar10) {
                            draw_line(param_5, uVar7, iVar5, uVar10, iVar6, iVar11);
                        }
                    }
                    iVar5 = iVar6;
                    lVar8 = lVar9 + -837;
                    lVar9 = lVar9 + 1;
                    uVar7 = uVar10;
                } while (lVar8 < *(int*)(lVar4 + lVar2 + 1592));
            }
            if ((int)uVar10 < iVar11) {
                fVar1 = *(float*)(&inverse_db_table + (long)iVar5 * 4);
                lVar4 = (long)(int)uVar10;
                do {
                    param_5[lVar4] = param_5[lVar4] * fVar1;
                    lVar4 = lVar4 + 1;
                } while (iVar11 != lVar4);
            }
        }
    }

    // 0x100b9c730, 2304 bytes, placed by debug map only (low confidence)
    // inverse_mdct(float*, int, stb_vorbis*, int)
    void inverse_mdct(float* param_1, int param_2, stb_vorbis* param_3, int param_4) {
        byte bVar1;
        ulong uVar2;
        float* pfVar3;
        uint uVar4;
        float* pfVar5;
        ushort* puVar6;
        float* pfVar7;
        ulong uVar8;
        float* pfVar9;
        int iVar10;
        long lVar11;
        float* pfVar12;
        long lVar13;
        int iVar14;
        long lVar15;
        uint uVar16;
        int iVar17;
        float* pfVar18;
        float fVar19;
        float fVar20;
        float fVar21;
        float fVar22;
        float fVar23;
        float fVar24;
        float fVar25;
        float afStack_b8[2];
        long local_a8;
        float* local_a0;
        long local_90;
        undefined4 local_88;
        int local_84;
        long local_80;
        float* local_70;
        ulong local_68;
        ulong local_60;
        int local_58;
        int local_54;
        ulong local_50;
        ulong local_48;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar4 = param_2 >> 1;
        local_88 = *(undefined4*)(param_3 + 124);
        lVar15 = (long)(int)uVar4;
        local_68 = (ulong)uVar4;
        if (*(long*)(param_3 + 104) == 0) {
            pfVar3 = (float*)((long)afStack_b8 - (lVar15 * 4 + 15U & 18446744073709551600));
            pfVar9 = pfVar3;
        } else {
            pfVar3 = (float*)setup_temp_malloc(param_3, uVar4 * 4);
            pfVar9 = afStack_b8;
        }
        pfVar18 = *(float**)(param_3 + (long)param_4 * 8 + 1392);
        pfVar12 = pfVar3 + lVar15 + -2;
        pfVar5 = pfVar18;
        if (1 < (uint)param_2) {
            pfVar7 = param_1;
            do {
                pfVar12[1] = *pfVar5 * *pfVar7 - pfVar5[1] * pfVar7[2];
                *pfVar12 = *pfVar5 * pfVar7[2] + pfVar5[1] * *pfVar7;
                pfVar12 = pfVar12 + -2;
                pfVar5 = pfVar5 + 2;
                pfVar7 = pfVar7 + 4;
            } while (pfVar7 != param_1 + lVar15);
        }
        iVar10 = (int)(uint)param_2 >> 2;
        if (pfVar3 <= pfVar12) {
            pfVar7 = param_1 + lVar15 + -1;
            do {
                pfVar12[1] = pfVar5[1] * pfVar7[-2] - *pfVar5 * *pfVar7;
                *pfVar12 = -pfVar7[-2] * *pfVar5 - pfVar5[1] * *pfVar7;
                pfVar12 = pfVar12 + -2;
                pfVar7 = pfVar7 + -4;
                pfVar5 = pfVar5 + 2;
            } while (pfVar3 <= pfVar12);
        }
        uVar4 = (uint)param_2;
        uVar16 = (int)(uint)param_2 >> 3;
        local_48 = CONCAT44(local_48._4_4_, iVar10);
        local_90 = (long)iVar10;
        if (15 < (int)(uint)param_2) {
            pfVar5 = pfVar18 + lVar15 + -8;
            lVar11 = 0;
            do {
                fVar20 = *(float*)((long)pfVar3 + lVar11 + local_90 * 4 + 4);
                fVar21 = *(float*)((long)pfVar3 + lVar11 + 4);
                fVar22 = fVar20 - fVar21;
                fVar19 = *(float*)((long)pfVar3 + lVar11 + local_90 * 4) - *(float*)((long)pfVar3 + lVar11);
                *(float*)((long)param_1 + lVar11 + local_90 * 4 + 4) = fVar21 + fVar20;
                *(float*)((long)param_1 + lVar11 + local_90 * 4) =
                    *(float*)((long)pfVar3 + lVar11) + *(float*)((long)pfVar3 + lVar11 + local_90 * 4);
                *(float*)((long)param_1 + lVar11 + 4) = pfVar5[4] * fVar22 - pfVar5[5] * fVar19;
                *(float*)((long)param_1 + lVar11) = fVar22 * pfVar5[5] + fVar19 * pfVar5[4];
                fVar20 = *(float*)((long)pfVar3 + lVar11 + local_90 * 4 + 12);
                fVar21 = *(float*)((long)pfVar3 + lVar11 + 12);
                fVar22 = fVar20 - fVar21;
                fVar19 = *(float*)((long)pfVar3 + lVar11 + local_90 * 4 + 8) - *(float*)((long)pfVar3 + lVar11 + 8);
                *(float*)((long)param_1 + lVar11 + local_90 * 4 + 12) = fVar21 + fVar20;
                *(float*)((long)param_1 + lVar11 + local_90 * 4 + 8) =
                    *(float*)((long)pfVar3 + lVar11 + 8) + *(float*)((long)pfVar3 + lVar11 + local_90 * 4 + 8);
                *(float*)((long)param_1 + lVar11 + 12) = *pfVar5 * fVar22 - pfVar5[1] * fVar19;
                *(float*)((long)param_1 + lVar11 + 8) = fVar22 * pfVar5[1] + fVar19 * *pfVar5;
                pfVar5 = pfVar5 + -8;
                lVar11 = lVar11 + 16;
            } while (pfVar18 <= pfVar5);
        }
        local_a8 = lVar15;
        local_a0 = pfVar3;
        local_70 = pfVar18;
        pfVar9[-2] = 1.7061948e-38;
        pfVar9[-1] = 1.4013e-45;
        local_60 = ilog(uVar4);
        iVar14 = (int)uVar4 >> 4;
        uVar4 = (int)local_68 - 1;
        iVar17 = -uVar16;
        local_50 = (ulong)uVar16;
        pfVar9[-2] = 1.7062008e-38;
        pfVar9[-1] = 1.4013e-45;
        imdct_step3_iter0_loop(iVar14, param_1, uVar4, iVar17, pfVar18);
        iVar10 = uVar4 - (int)local_48;
        pfVar9[-2] = 1.706204e-38;
        pfVar9[-1] = 1.4013e-45;
        imdct_step3_iter0_loop(iVar14, param_1, iVar10, iVar17, pfVar18);
        iVar17 = (int)(uint)param_2 >> 5;
        iVar14 = -iVar14;
        pfVar9[-2] = 1.7062092e-38;
        pfVar9[-1] = 1.4013e-45;
        imdct_step3_inner_r_loop(iVar17, param_1, uVar4, iVar14, pfVar18, 16);
        pfVar3 = local_70;
        iVar10 = (int)local_50;
        pfVar9[-2] = 1.706214e-38;
        pfVar9[-1] = 1.4013e-45;
        imdct_step3_inner_r_loop(iVar17, param_1, uVar4 - iVar10, iVar14, pfVar3, 16);
        pfVar3 = local_70;
        pfVar9[-2] = 1.706219e-38;
        pfVar9[-1] = 1.4013e-45;
        imdct_step3_inner_r_loop(iVar17, param_1, uVar4 + iVar10 * -2, iVar14, pfVar3, 16);
        iVar10 = (int)local_50;
        local_84 = iVar17;
        local_68 = (ulong)uVar4;
        pfVar9[-2] = 1.7062256e-38;
        pfVar9[-1] = 1.4013e-45;
        imdct_step3_inner_r_loop(iVar17, param_1, uVar4 + iVar10 * -3, iVar14, pfVar3, 16);
        pfVar18 = local_70;
        pfVar3 = param_1;
        iVar10 = 2;
        if (9 < (int)local_60) {
            iVar14 = (int)local_60 + -4 >> 1;
            iVar10 = 3;
            if (3 < iVar14) {
                iVar10 = iVar14;
            }
            local_80 = CONCAT44(local_80._4_4_, iVar10);
            local_54 = 2;
            do {
                bVar1 = (byte)local_54;
                iVar14 = (int)(uint)param_2 >> (bVar1 + 2 & 31);
                local_48 = CONCAT44(local_48._4_4_, iVar14);
                local_54 = local_54 + 1;
                iVar10 = 2 << (bVar1 & 31);
                iVar17 = (int)(uint)param_2 >> (bVar1 + 4 & 31);
                if (0 < iVar10) {
                    local_58 = -(iVar14 >> 1);
                    uVar8 = local_68 & 4294967295;
                    do {
                        iVar14 = local_58;
                        local_50 = CONCAT44(local_50._4_4_, iVar10);
                        pfVar9[-2] = 1.7062492e-38;
                        pfVar9[-1] = 1.4013e-45;
                        imdct_step3_inner_r_loop(iVar17, pfVar3, (int)uVar8, iVar14, pfVar18, 8 << (bVar1 & 31));
                        uVar8 = (ulong)(uint)((int)uVar8 - (int)local_48);
                        iVar10 = (int)local_50 + -1;
                    } while (iVar10 != 0);
                }
                iVar10 = local_54;
            } while (local_54 != (int)local_80);
        }
        pfVar3 = param_1;
        uVar4 = (int)local_60 - 7;
        local_60 = (ulong)uVar4;
        if (iVar10 < (int)uVar4) {
            do {
                bVar1 = (byte)iVar10;
                uVar4 = (int)(uint)param_2 >> (bVar1 + 2 & 31);
                local_50 = (ulong)uVar4;
                uVar16 = 8 << (bVar1 & 31);
                local_48 = (ulong)uVar16;
                iVar14 = (int)(uint)param_2 >> (bVar1 + 6 & 31);
                local_54 = iVar10 + 1;
                if (0 < iVar14) {
                    local_58 = -((int)uVar4 >> 1);
                    local_80 = (long)(int)(uVar16 * 4) << 2;
                    iVar14 = iVar14 + 1;
                    uVar8 = local_68 & 4294967295;
                    pfVar18 = local_70;
                    do {
                        uVar2 = local_48;
                        iVar10 = local_58;
                        *(ulong*)(pfVar9 + -4) = local_50;
                        pfVar9[-6] = 1.7062769e-38;
                        pfVar9[-5] = 1.4013e-45;
                        imdct_step3_inner_s_loop(2 << (bVar1 & 31), pfVar3, (int)uVar8, iVar10, pfVar18, (int)uVar2,
                                                 (int)pfVar9[-4]);
                        uVar8 = (ulong)((int)uVar8 - 8);
                        pfVar18 = (float*)((long)pfVar18 + local_80);
                        iVar14 = iVar14 + -1;
                    } while (1 < iVar14);
                }
                iVar10 = local_54;
            } while (local_54 != (int)local_60);
        }
        uVar4 = (uint)param_2;
        uVar8 = local_68;
        pfVar18 = local_70;
        pfVar3 = param_1;
        iVar10 = local_84;
        pfVar9[-2] = 1.7062845e-38;
        pfVar9[-1] = 1.4013e-45;
        imdct_step3_inner_s_loop_ld654(iVar10, pfVar3, (int)uVar8, pfVar18, uVar4);
        pfVar18 = local_a0 + local_90 + -4;
        if (local_a0 <= pfVar18) {
            puVar6 = *(ushort**)(param_3 + (long)param_4 * 8 + 1456);
            pfVar5 = local_a0 + local_a8 + -1;
            do {
                uVar8 = (ulong)*puVar6;
                *pfVar5 = pfVar3[uVar8];
                pfVar5[-1] = pfVar3[uVar8 + 1];
                pfVar18[3] = pfVar3[uVar8 + 2];
                pfVar18[2] = pfVar3[uVar8 + 3];
                uVar8 = (ulong)puVar6[1];
                pfVar5[-2] = pfVar3[uVar8];
                pfVar5[-3] = pfVar3[uVar8 + 1];
                pfVar18[1] = pfVar3[uVar8 + 2];
                *pfVar18 = pfVar3[uVar8 + 3];
                pfVar18 = pfVar18 + -4;
                pfVar5 = pfVar5 + -4;
                puVar6 = puVar6 + 2;
            } while (local_a0 <= pfVar18);
        }
        pfVar18 = local_a0 + local_a8 + -4;
        if (local_a0 < pfVar18) {
            lVar15 = *(long*)(param_3 + (long)param_4 * 8 + 1424);
            lVar11 = 0;
            do {
                fVar20 = *(float*)((long)local_a0 + lVar11 + 4);
                fVar19 = *(float*)((long)local_a0 + lVar11) - pfVar18[2];
                fVar22 = pfVar18[3] + fVar20;
                fVar21 = *(float*)(lVar15 + 4 + lVar11);
                fVar24 = *(float*)(lVar15 + lVar11) * fVar22 + fVar21 * fVar19;
                fVar19 = fVar22 * fVar21 - fVar19 * *(float*)(lVar15 + lVar11);
                fVar21 = pfVar18[2] + *(float*)((long)local_a0 + lVar11);
                fVar20 = fVar20 - pfVar18[3];
                *(float*)((long)local_a0 + lVar11) = fVar24 + fVar21;
                *(float*)((long)local_a0 + lVar11 + 4) = fVar19 + fVar20;
                pfVar18[2] = fVar21 - fVar24;
                pfVar18[3] = fVar19 - fVar20;
                fVar20 = *(float*)((long)local_a0 + lVar11 + 8);
                fVar21 = *(float*)((long)local_a0 + lVar11 + 12);
                fVar24 = fVar20 - *pfVar18;
                fVar23 = pfVar18[1] + fVar21;
                fVar19 = *(float*)(lVar15 + 8 + lVar11);
                fVar22 = *(float*)(lVar15 + 12 + lVar11);
                fVar25 = fVar19 * fVar23 + fVar22 * fVar24;
                fVar19 = fVar23 * fVar22 - fVar24 * fVar19;
                fVar20 = *pfVar18 + fVar20;
                fVar21 = fVar21 - pfVar18[1];
                *(float*)((long)local_a0 + lVar11 + 8) = fVar25 + fVar20;
                *(float*)((long)local_a0 + lVar11 + 12) = fVar19 + fVar21;
                *pfVar18 = fVar20 - fVar25;
                pfVar18[1] = fVar19 - fVar21;
                pfVar18 = pfVar18 + -4;
                lVar13 = lVar11 + 16;
                lVar11 = lVar11 + 16;
            } while ((float*)((long)local_a0 + lVar13) < pfVar18);
        }
        if (local_a0 <= local_a0 + local_a8 + -8) {
            lVar13 = (long)(int)((uint)param_2 - 4);
            lVar11 = local_a8 * 4;
            pfVar18 = local_a0 + -1;
            lVar15 = *(long*)(param_3 + (long)param_4 * 8 + 1408) + -4;
            pfVar5 = pfVar3 + 3;
            pfVar12 = local_a0;
            do {
                pfVar12 = pfVar12 + -8;
                fVar20 = *(float*)(lVar15 + -4 + lVar11);
                fVar21 = *(float*)(lVar15 + lVar11) * pfVar18[local_a8 + -1] - fVar20 * pfVar18[local_a8];
                fVar20 = -pfVar18[local_a8 + -1] * fVar20 - pfVar18[local_a8] * *(float*)(lVar15 + lVar11);
                pfVar5[-3] = fVar21;
                pfVar3[local_a8 + -1] = -fVar21;
                pfVar5[local_a8 + -3] = fVar20;
                pfVar3[lVar13 + 3] = fVar20;
                fVar20 = *(float*)(lVar15 + -12 + lVar11);
                fVar21 = *(float*)(lVar15 + -8 + lVar11);
                fVar19 = fVar21 * pfVar18[local_a8 + -3] - fVar20 * pfVar18[local_a8 + -2];
                fVar20 = -pfVar18[local_a8 + -3] * fVar20 - pfVar18[local_a8 + -2] * fVar21;
                pfVar5[-2] = fVar19;
                pfVar3[local_a8 + -2] = -fVar19;
                pfVar5[local_a8 + -2] = fVar20;
                pfVar3[lVar13 + 2] = fVar20;
                fVar20 = *(float*)(lVar15 + -20 + lVar11);
                fVar21 = *(float*)(lVar15 + -16 + lVar11);
                fVar19 = fVar21 * pfVar18[local_a8 + -5] - fVar20 * pfVar18[local_a8 + -4];
                fVar20 = -pfVar18[local_a8 + -5] * fVar20 - pfVar18[local_a8 + -4] * fVar21;
                pfVar5[-1] = fVar19;
                pfVar3[local_a8 + -3] = -fVar19;
                pfVar5[local_a8 + -1] = fVar20;
                pfVar3[lVar13 + 1] = fVar20;
                fVar20 = *(float*)(lVar15 + -28 + lVar11);
                fVar21 = *(float*)(lVar15 + -24 + lVar11);
                fVar19 = fVar21 * pfVar18[local_a8 + -7] - fVar20 * pfVar18[local_a8 + -6];
                fVar20 = -pfVar18[local_a8 + -7] * fVar20 - pfVar18[local_a8 + -6] * fVar21;
                *pfVar5 = fVar19;
                pfVar3[local_a8 + -4] = -fVar19;
                pfVar5[local_a8] = fVar20;
                pfVar3[lVar13] = fVar20;
                pfVar18 = pfVar18 + -8;
                lVar15 = lVar15 + -32;
                pfVar3 = pfVar3 + -4;
                pfVar5 = pfVar5 + 4;
            } while (local_a0 <= pfVar12 + local_a8 + -8);
        }
        *(undefined4*)(param_3 + 124) = local_88;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            *(undefined**)(pfVar9 + -2) = &UNK_100b9d023;
            ___stack_chk_fail();
        }
    }

    // 0x100b9d030, 80 bytes, placed by debug map only (low confidence)
    // bit_reverse(unsigned int)
    int bit_reverse(uint param_1) {
        uint uVar1;

        uVar1 = param_1 >> 24 | (param_1 & 16711680) >> 8 | (param_1 & 65280) << 8 | param_1 << 24;
        uVar1 = uVar1 >> 4 & 252645135 | (uVar1 & 252645135) << 4;
        uVar1 = (uVar1 >> 2 & 858993459) + (uVar1 & 858993459) * 4;
        return (uVar1 >> 1 & 1431655765) + (uVar1 & 1431655765) * 2;
    }

    // 0x100b9d080, 64 bytes, placed by debug map only (low confidence)
    // make_block_array(void*, int, int)
    void make_block_array(void* param_1, int param_2, int param_3) {
        void* pvVar1;
        ulong uVar2;

        if (0 < param_2) {
            pvVar1 = (void*)((long)param_1 + (long)param_2 * 8);
            uVar2 = (ulong)(uint)param_2;
            do {
                *(void**)param_1 = pvVar1;
                pvVar1 = (void*)((long)pvVar1 + (long)param_3);
                param_1 = (void*)((long)param_1 + 8);
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
    }

    // 0x100b9d0c0, 64 bytes, placed by debug map only (low confidence)
    // setup_temp_malloc(stb_vorbis*, int)
    void* setup_temp_malloc(stb_vorbis* param_1, int param_2) {
        ulong uVar2;
        int iVar3;
        long lVar4;

        uVar2 = (long)param_2 + 3U & 18446744073709551612;
        if (*(long*)(param_1 + 104) == 0) {
            return _malloc((long)(int)uVar2);
        }
        lVar4 = (long)*(int*)(param_1 + 124) - uVar2;
        iVar3 = (int)lVar4;
        if (iVar3 < *(int*)(param_1 + 120)) {
            return (void*)0;
        }
        *(int*)(param_1 + 124) = iVar3;
        return (void*)(*(long*)(param_1 + 104) + lVar4);
    }

    // 0x100b9d100, 784 bytes, placed by debug map only (low confidence)
    // codebook_decode_deinterleave_repeat_2(stb_vorbis*, Codebook*, float**, int*, int*, int, int)
    undefined8 codebook_decode_deinterleave_repeat_2(stb_vorbis* param_1, Codebook* param_2, float** param_3,
                                                     int* param_4, int* param_5, int param_6, int param_7) {
        byte bVar1;
        float* pfVar2;
        float* pfVar3;
        bool bVar4;
        int iVar5;
        long lVar6;
        int iVar7;
        uint uVar8;
        long lVar9;
        ulong uVar10;
        long lVar11;
        uint uVar12;
        int iVar13;
        int iVar14;
        int iVar15;
        float fVar16;

        if (param_2[25] == (Codebook)0) {
            error(param_1, 21);
        } else {
            uVar8 = *(uint*)param_2;
            iVar15 = *param_5;
            iVar14 = *param_4;
            do {
                if (param_7 < 1) {
                    *param_4 = iVar14;
                    *param_5 = iVar15;
                    return 1;
                }
                if (*(int*)(param_1 + 1760) < 10) {
                    prep_huffman(param_1);
                }
                iVar5 = (int)*(short*)(param_2 + (ulong)(*(uint*)(param_1 + 1756) & 1023) * 2 + 48);
                if (iVar5 < 0) {
                    iVar5 = codebook_decode_scalar_raw(param_1, param_2);
                    if (iVar5 < 0)
                        goto LAB_100b9d29c;
                LAB_100b9d1da:
                    uVar12 = param_6 * 2 + iVar15 * -2 + iVar14;
                    if ((int)(uVar8 + iVar15 * 2 + iVar14) <= param_6 * 2) {
                        uVar12 = uVar8;
                    }
                    iVar7 = *(int*)param_2;
                    if (param_2[26] == (Codebook)0) {
                        uVar8 = 0;
                        iVar5 = (int)((long)iVar5 * (long)iVar7);
                        if (iVar14 == 1) {
                            pfVar2 = param_3[1];
                            if (pfVar2 != (float*)0) {
                                pfVar2[iVar15] = pfVar2[iVar15] + *(float*)(*(long*)(param_2 + 32) + (long)iVar5 * 4);
                            }
                            iVar15 = iVar15 + 1;
                            iVar14 = 0;
                            uVar8 = 1;
                        }
                        if ((int)(uVar8 + 1) < (int)uVar12) {
                            pfVar2 = *param_3;
                            pfVar3 = param_3[1];
                            lVar11 = (long)iVar5 * 4 + *(long*)(param_2 + 32);
                            lVar9 = (ulong)uVar8 + 1;
                            lVar6 = 0;
                            do {
                                fVar16 = *(float*)(lVar11 + lVar9 * 4);
                                if (pfVar2 != (float*)0) {
                                    pfVar2[iVar15 + lVar6] =
                                        pfVar2[iVar15 + lVar6] + *(float*)(lVar11 + -4 + lVar9 * 4);
                                }
                                if (pfVar3 != (float*)0) {
                                    pfVar3[iVar15 + lVar6] = fVar16 + pfVar3[iVar15 + lVar6];
                                }
                                lVar9 = lVar9 + 2;
                                lVar6 = lVar6 + 1;
                            } while (lVar9 < (int)uVar12);
                            uVar8 = (int)lVar9 - 1;
                            iVar15 = iVar15 + (int)lVar6;
                        }
                        if ((int)uVar8 < (int)uVar12) {
                            pfVar2 = param_3[iVar14];
                            if (pfVar2 != (float*)0) {
                                pfVar2[iVar15] =
                                    pfVar2[iVar15] + *(float*)(*(long*)(param_2 + 32) + (long)(int)(uVar8 + iVar5) * 4);
                            }
                            iVar14 = iVar14 + 1;
                        }
                    } else if (0 < (int)uVar12) {
                        lVar6 = *(long*)(param_2 + 32);
                        fVar16 = 0.0;
                        uVar10 = 0;
                        do {
                            fVar16 = fVar16 + *(float*)((long)iVar5 * (long)iVar7 * 4 + lVar6 + uVar10 * 4);
                            pfVar2 = param_3[iVar14];
                            if (pfVar2 != (float*)0) {
                                pfVar2[iVar15] = pfVar2[iVar15] + fVar16;
                            }
                            iVar13 = iVar14 + 1;
                            iVar14 = iVar13;
                            if (iVar13 == 2) {
                                iVar14 = 0;
                            }
                            iVar15 = iVar15 + (uint)(iVar13 == 2);
                            uVar10 = uVar10 + 1;
                        } while (uVar12 != uVar10);
                    }
                    param_7 = param_7 - uVar12;
                    bVar4 = true;
                    uVar8 = uVar12;
                } else {
                    bVar1 = *(byte*)(*(long*)(param_2 + 8) + (long)iVar5);
                    *(uint*)(param_1 + 1756) = *(uint*)(param_1 + 1756) >> (bVar1 & 31);
                    iVar7 = *(int*)(param_1 + 1760) - (uint)bVar1;
                    if (iVar7 < 0) {
                        iVar5 = -1;
                        iVar7 = 0;
                    }
                    *(int*)(param_1 + 1760) = iVar7;
                    if (-1 < iVar5)
                        goto LAB_100b9d1da;
                LAB_100b9d29c:
                    if ((param_1[1740] != (stb_vorbis)0) || (*(int*)(param_1 + 1748) == 0)) {
                        error(param_1, 21);
                    }
                    bVar4 = false;
                }
            } while (bVar4);
        }
        return 0;
    }

    // 0x100b9d410, 720 bytes, placed by debug map only (low confidence)
    // codebook_decode_deinterleave_repeat(stb_vorbis*, Codebook*, float**, int, int*, int*, int, int)
    undefined8 codebook_decode_deinterleave_repeat(stb_vorbis* param_1, Codebook* param_2, float** param_3, int param_4,
                                                   int* param_5, int* param_6, int param_7, int param_8) {
        byte bVar1;
        float* pfVar2;
        int iVar3;
        long lVar4;
        undefined8 uVar5;
        ulong uVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        float fVar12;
        ulong local_50;

        if (param_2[25] == (Codebook)0) {
            error(param_1, 21);
            uVar5 = 0;
        } else {
            local_50 = (ulong) * (uint*)param_2;
            iVar8 = *param_6;
            iVar9 = *param_5;
            for (; 0 < param_8; param_8 = param_8 - iVar7) {
                if (*(int*)(param_1 + 1760) < 10) {
                    prep_huffman(param_1);
                }
                iVar11 = (int)*(short*)(param_2 + (ulong)(*(uint*)(param_1 + 1756) & 1023) * 2 + 48);
                if (iVar11 < 0) {
                    iVar11 = codebook_decode_scalar_raw(param_1, param_2);
                } else {
                    bVar1 = *(byte*)(*(long*)(param_2 + 8) + (long)iVar11);
                    *(uint*)(param_1 + 1756) = *(uint*)(param_1 + 1756) >> (bVar1 & 31);
                    iVar3 = *(int*)(param_1 + 1760) - (uint)bVar1;
                    if (iVar3 < 0) {
                        iVar11 = -1;
                        iVar3 = 0;
                    }
                    *(int*)(param_1 + 1760) = iVar3;
                }
                if ((param_2[27] != (Codebook)0) && (*(int*)(param_2 + 2112) <= iVar11)) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!c->sparse || z < c->sorted_entries",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                              "vorbis_std.code",
                              1462, (char*)0);
                }
                if (iVar11 < 0) {
                    if ((param_1[1740] != (stb_vorbis)0) || (*(int*)(param_1 + 1748) == 0)) {
                        error(param_1, 21);
                    }
                    return 0;
                }
                if (param_7 * param_4 < (int)local_50 + iVar8 * param_4 + iVar9) {
                    local_50 = (ulong)(uint)((param_7 * param_4 - iVar8 * param_4) + iVar9);
                }
                iVar3 = *(int*)param_2;
                iVar7 = (int)local_50;
                if (param_2[26] == (Codebook)0) {
                    if (0 < iVar7) {
                        lVar4 = (long)(int)((long)iVar11 * (long)iVar3);
                        uVar6 = local_50;
                        do {
                            pfVar2 = param_3[iVar9];
                            if (pfVar2 != (float*)0) {
                                pfVar2[iVar8] = pfVar2[iVar8] + *(float*)(*(long*)(param_2 + 32) + lVar4 * 4);
                            }
                            iVar11 = iVar9 + 1;
                            iVar9 = iVar11;
                            if (iVar11 == param_4) {
                                iVar9 = 0;
                            }
                            iVar8 = iVar8 + (uint)(iVar11 == param_4);
                            lVar4 = lVar4 + 1;
                            uVar6 = uVar6 - 1;
                        } while (uVar6 != 0);
                    }
                } else if (0 < iVar7) {
                    lVar4 = *(long*)(param_2 + 32);
                    fVar12 = 0.0;
                    uVar6 = 0;
                    do {
                        fVar12 = fVar12 + *(float*)((long)iVar11 * (long)iVar3 * 4 + lVar4 + uVar6 * 4);
                        pfVar2 = param_3[iVar9];
                        if (pfVar2 != (float*)0) {
                            pfVar2[iVar8] = pfVar2[iVar8] + fVar12;
                        }
                        iVar10 = iVar9 + 1;
                        iVar9 = iVar10;
                        if (iVar10 == param_4) {
                            iVar9 = 0;
                        }
                        iVar8 = iVar8 + (uint)(iVar10 == param_4);
                        uVar6 = uVar6 + 1;
                    } while (local_50 != uVar6);
                }
            }
            *param_5 = iVar9;
            *param_6 = iVar8;
            uVar5 = 1;
        }
        return uVar5;
    }

    // 0x100b9d6e0, 224 bytes, placed by debug map only (low confidence)
    // residue_decode(stb_vorbis*, Codebook*, float*, int, int, int)
    undefined8 residue_decode(stb_vorbis* param_1, Codebook* param_2, float* param_3, int param_4, int param_5,
                              int param_6) {
        int iVar1;
        int iVar3;
        long lVar4;
        float* pfVar5;

        if (param_6 == 0) {
            iVar3 = *(int*)param_2;
            iVar1 = (int)((long)param_5 / (long)iVar3);
            if (0 < iVar1) {
                pfVar5 = param_3 + param_4;
                lVar4 = 0;
                do {
                    if (codebook_decode_step(param_1, param_2, pfVar5, (int)lVar4 + (param_5 - param_4), iVar1) == 0) {
                        return 0;
                    }
                    lVar4 = lVar4 + -1;
                    pfVar5 = pfVar5 + 1;
                } while (((long)param_5 / (long)iVar3 & 4294967295U) + lVar4 != 0);
            }
        } else if (0 < param_5) {
            iVar3 = 0;
            do {
                iVar1 = codebook_decode(param_1, param_2, param_3 + param_4, param_5 - iVar3);
                if (iVar1 == 0) {
                    return 0;
                }
                iVar3 = iVar3 + *(int*)param_2;
                param_4 = param_4 + *(int*)param_2;
            } while (iVar3 < param_5);
        }
        return 1;
    }

    // 0x100b9d7c0, 160 bytes, placed by debug map only (low confidence)
    // codebook_decode_step(stb_vorbis*, Codebook*, float*, int, int)
    undefined8 codebook_decode_step(stb_vorbis* param_1, Codebook* param_2, float* param_3, int param_4, int param_5) {
        Codebook CVar1;
        uint uVar2;
        long lVar3;
        int iVar4;
        undefined8 uVar5;
        ulong uVar6;
        float fVar7;
        float fVar8;

        iVar4 = codebook_decode_start(param_1, param_2);
        if (iVar4 < 0) {
            uVar5 = 0;
        } else {
            uVar2 = *(uint*)param_2;
            if ((int)uVar2 < param_4) {
                param_4 = uVar2;
            }
            uVar5 = 1;
            if (0 < param_4) {
                CVar1 = param_2[26];
                lVar3 = *(long*)(param_2 + 32);
                fVar7 = 0.0;
                uVar6 = 0;
                do {
                    fVar8 = *(float*)((long)(int)(uVar2 * iVar4) * 4 + lVar3 + uVar6 * 4) + fVar7;
                    *param_3 = *param_3 + fVar8;
                    if (CVar1 != (Codebook)0) {
                        fVar7 = fVar8;
                    }
                    uVar6 = uVar6 + 1;
                    param_3 = param_3 + param_5;
                } while ((uint)param_4 != uVar6);
            }
        }
        return uVar5;
    }

    // 0x100b9d860, 208 bytes, placed by debug map only (low confidence)
    // codebook_decode(stb_vorbis*, Codebook*, float*, int)
    undefined8 codebook_decode(stb_vorbis* param_1, Codebook* param_2, float* param_3, int param_4) {
        uint uVar1;
        long lVar2;
        int iVar3;
        undefined8 uVar4;
        ulong uVar5;
        float fVar6;

        iVar3 = codebook_decode_start(param_1, param_2);
        if (iVar3 < 0) {
            uVar4 = 0;
        } else {
            uVar1 = *(uint*)param_2;
            if ((int)uVar1 < param_4) {
                param_4 = uVar1;
            }
            if (param_2[26] == (Codebook)0) {
                uVar4 = 1;
                if (0 < param_4) {
                    lVar2 = *(long*)(param_2 + 32);
                    uVar5 = 0;
                    do {
                        param_3[uVar5] = param_3[uVar5] + *(float*)((long)(int)(iVar3 * uVar1) * 4 + lVar2 + uVar5 * 4);
                        uVar5 = uVar5 + 1;
                    } while ((uint)param_4 != uVar5);
                }
            } else {
                uVar4 = 1;
                if (0 < param_4) {
                    lVar2 = *(long*)(param_2 + 32);
                    fVar6 = 0.0;
                    uVar5 = 0;
                    do {
                        fVar6 = fVar6 + *(float*)((long)(int)(iVar3 * uVar1) * 4 + lVar2 + uVar5 * 4);
                        param_3[uVar5] = param_3[uVar5] + fVar6;
                        fVar6 = fVar6 + *(float*)(param_2 + 16);
                        uVar5 = uVar5 + 1;
                    } while ((uint)param_4 != uVar5);
                }
            }
        }
        return uVar4;
    }

    // 0x100b9d930, 256 bytes, placed by debug map only (low confidence)
    // codebook_decode_start(stb_vorbis*, Codebook*)
    int codebook_decode_start(stb_vorbis* param_1, Codebook* param_2) {
        byte bVar1;
        Codebook CVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        bool bVar6;

        if (param_2[25] == (Codebook)0) {
            iVar4 = -1;
        } else {
            if (*(int*)(param_1 + 1760) < 10) {
                prep_huffman(param_1);
            }
            iVar3 = (int)*(short*)(param_2 + (ulong)(*(uint*)(param_1 + 1756) & 1023) * 2 + 48);
            if (iVar3 < 0) {
                iVar4 = codebook_decode_scalar_raw(param_1, param_2);
                CVar2 = param_2[27];
            } else {
                bVar1 = *(byte*)(*(long*)(param_2 + 8) + (long)iVar3);
                *(uint*)(param_1 + 1756) = *(uint*)(param_1 + 1756) >> (bVar1 & 31);
                iVar5 = *(int*)(param_1 + 1760) - (uint)bVar1;
                bVar6 = iVar5 < 0;
                if (bVar6) {
                    iVar5 = 0;
                }
                iVar4 = -1;
                if (!bVar6) {
                    iVar4 = iVar3;
                }
                *(int*)(param_1 + 1760) = iVar5;
                CVar2 = param_2[27];
            }
            if ((CVar2 != (Codebook)0) && (*(int*)(param_2 + 2112) <= iVar4)) {
                /* WARNING: Subroutine does not return */
                LogAssert("z < c->sorted_entries",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                          "vorbis_std.code",
                          1367, (char*)0);
            }
            if (-1 < iVar4) {
                return iVar4;
            }
            if ((param_1[1740] == (stb_vorbis)0) && (*(int*)(param_1 + 1748) != 0)) {
                return iVar4;
            }
        }
        error(param_1, 21);
        return iVar4;
    }

    // 0x100b9da30, 208 bytes, placed by debug map only (low confidence)
    // draw_line(float*, int, int, int, int, int)
    void draw_line(float* param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        int iVar1;
        long lVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;

        iVar7 = param_5 - param_3;
        iVar8 = param_4 - param_2;
        iVar10 = -iVar7;
        if (-iVar7 < 0) {
            iVar10 = iVar7;
        }
        iVar1 = iVar7 / iVar8;
        iVar9 = -iVar1;
        if (-iVar1 < 0) {
            iVar9 = iVar1;
        }
        if (param_6 < param_4) {
            param_4 = param_6;
        }
        param_1[param_2] = param_1[param_2] * *(float*)(&inverse_db_table + (long)param_3 * 4);
        iVar3 = param_2 + 1;
        if (iVar3 < param_4) {
            lVar2 = 0;
            iVar4 = 0;
            do {
                iVar4 = iVar4 + (iVar10 - iVar9 * iVar8);
                uVar6 = 0;
                iVar5 = 0;
                if (iVar8 <= iVar4) {
                    uVar6 = iVar7 >> 31 | 1;
                    iVar5 = iVar8;
                }
                param_3 = param_3 + iVar1 + uVar6;
                iVar4 = iVar4 - iVar5;
                param_1[iVar3 + lVar2] = param_1[iVar3 + lVar2] * *(float*)(&inverse_db_table + (long)param_3 * 4);
                lVar2 = lVar2 + 1;
            } while (~param_2 + param_4 != (int)lVar2);
        }
    }

    // 0x100b9db00, 528 bytes, placed by debug map only (low confidence)
    // imdct_step3_iter0_loop(int, float*, int, int, float*)
    void imdct_step3_iter0_loop(int param_1, float* param_2, int param_3, int param_4, float* param_5) {
        float* pfVar1;
        int iVar3;
        float fVar4;
        float fVar5;

        if ((param_1 & 3U) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("(n & 3) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      2127, (char*)0);
        }
        if (3 < param_1) {
            pfVar1 = param_2 + param_3;
            iVar3 = (param_1 >> 2) + 1;
            do {
                fVar4 = *pfVar1 - pfVar1[(long)param_4];
                fVar5 = pfVar1[-1] - pfVar1[(long)param_4 + -1];
                *pfVar1 = pfVar1[(long)param_4] + *pfVar1;
                pfVar1[-1] = pfVar1[-1] + pfVar1[(long)param_4 + -1];
                pfVar1[(long)param_4] = *param_5 * fVar4 - param_5[1] * fVar5;
                pfVar1[(long)param_4 + -1] = fVar4 * param_5[1] + fVar5 * *param_5;
                fVar4 = pfVar1[-2] - pfVar1[(long)param_4 + -2];
                fVar5 = pfVar1[-3] - pfVar1[(long)param_4 + -3];
                pfVar1[-2] = pfVar1[(long)param_4 + -2] + pfVar1[-2];
                pfVar1[-3] = pfVar1[-3] + pfVar1[(long)param_4 + -3];
                pfVar1[(long)param_4 + -2] = param_5[8] * fVar4 - param_5[9] * fVar5;
                pfVar1[(long)param_4 + -3] = fVar4 * param_5[9] + fVar5 * param_5[8];
                fVar4 = pfVar1[-4] - pfVar1[(long)param_4 + -4];
                fVar5 = pfVar1[-5] - pfVar1[(long)param_4 + -5];
                pfVar1[-4] = pfVar1[(long)param_4 + -4] + pfVar1[-4];
                pfVar1[-5] = pfVar1[-5] + pfVar1[(long)param_4 + -5];
                pfVar1[(long)param_4 + -4] = param_5[16] * fVar4 - param_5[17] * fVar5;
                pfVar1[(long)param_4 + -5] = fVar4 * param_5[17] + fVar5 * param_5[16];
                fVar4 = pfVar1[-6] - pfVar1[(long)param_4 + -6];
                fVar5 = pfVar1[-7] - pfVar1[(long)param_4 + -7];
                pfVar1[-6] = pfVar1[(long)param_4 + -6] + pfVar1[-6];
                pfVar1[-7] = pfVar1[-7] + pfVar1[(long)param_4 + -7];
                pfVar1[(long)param_4 + -6] = param_5[24] * fVar4 - param_5[25] * fVar5;
                pfVar1[(long)param_4 + -7] = fVar4 * param_5[25] + fVar5 * param_5[24];
                pfVar1 = pfVar1 + -8;
                iVar3 = iVar3 + -1;
                param_5 = param_5 + 32;
            } while (1 < iVar3);
        }
    }

    // 0x100b9dd10, 496 bytes, placed by debug map only (low confidence)
    // imdct_step3_inner_r_loop(int, float*, int, int, float*, int)
    void imdct_step3_inner_r_loop(int param_1, float* param_2, int param_3, int param_4, float* param_5, int param_6) {
        float* pfVar1;
        int iVar4;
        float fVar5;
        float fVar6;

        if (3 < param_1) {
            pfVar1 = param_2 + param_3;
            iVar4 = (param_1 >> 2) + 1;
            do {
                fVar5 = *pfVar1 - pfVar1[(long)param_4];
                fVar6 = pfVar1[-1] - pfVar1[(long)param_4 + -1];
                *pfVar1 = pfVar1[(long)param_4] + *pfVar1;
                pfVar1[-1] = pfVar1[-1] + pfVar1[(long)param_4 + -1];
                pfVar1[(long)param_4] = *param_5 * fVar5 - param_5[1] * fVar6;
                pfVar1[(long)param_4 + -1] = fVar5 * param_5[1] + fVar6 * *param_5;
                fVar5 = pfVar1[-2] - pfVar1[(long)param_4 + -2];
                fVar6 = pfVar1[-3] - pfVar1[(long)param_4 + -3];
                pfVar1[-2] = pfVar1[(long)param_4 + -2] + pfVar1[-2];
                pfVar1[-3] = pfVar1[-3] + pfVar1[(long)param_4 + -3];
                pfVar1[(long)param_4 + -2] = param_5[(long)param_6] * fVar5 - param_5[(long)param_6 + 1] * fVar6;
                pfVar1[(long)param_4 + -3] = fVar5 * param_5[(long)param_6 + 1] + fVar6 * param_5[(long)param_6];
                fVar5 = pfVar1[-4] - pfVar1[(long)param_4 + -4];
                fVar6 = pfVar1[-5] - pfVar1[(long)param_4 + -5];
                pfVar1[-4] = pfVar1[(long)param_4 + -4] + pfVar1[-4];
                pfVar1[-5] = pfVar1[-5] + pfVar1[(long)param_4 + -5];
                pfVar1[(long)param_4 + -4] =
                    param_5[(long)param_6 * 2] * fVar5 - param_5[(long)param_6 * 2 + 1] * fVar6;
                pfVar1[(long)param_4 + -5] =
                    fVar5 * param_5[(long)param_6 * 2 + 1] + fVar6 * param_5[(long)param_6 * 2];
                fVar5 = pfVar1[-6] - pfVar1[(long)param_4 + -6];
                fVar6 = pfVar1[-7] - pfVar1[(long)param_4 + -7];
                pfVar1[-6] = pfVar1[(long)param_4 + -6] + pfVar1[-6];
                pfVar1[-7] = pfVar1[-7] + pfVar1[(long)param_4 + -7];
                pfVar1[(long)param_4 + -6] =
                    param_5[(long)param_6 * 3] * fVar5 - param_5[(long)param_6 * 3 + 1] * fVar6;
                pfVar1[(long)param_4 + -7] =
                    fVar5 * param_5[(long)param_6 * 3 + 1] + fVar6 * param_5[(long)param_6 * 3];
                pfVar1 = pfVar1 + -8;
                iVar4 = iVar4 + -1;
                param_5 = param_5 + (long)param_6 * 4;
            } while (1 < iVar4);
        }
    }

    // 0x100b9df00, 512 bytes, placed by debug map only (low confidence)
    // imdct_step3_inner_s_loop(int, float*, int, int, float*, int, int)
    void imdct_step3_inner_s_loop(int param_1, float* param_2, int param_3, int param_4, float* param_5, int param_6,
                                  int param_7) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float* pfVar10;
        int iVar11;
        float fVar12;
        float fVar13;

        if (0 < param_1) {
            fVar1 = *param_5;
            fVar2 = param_5[1];
            fVar3 = param_5[param_6];
            fVar4 = param_5[(long)param_6 + 1];
            fVar5 = param_5[param_6 * 2];
            fVar6 = param_5[param_6 * 2 + 1];
            fVar7 = param_5[param_6 * 3];
            fVar8 = param_5[(long)(param_6 * 3) + 1];
            pfVar10 = param_2 + param_3;
            iVar11 = param_1 + 1;
            do {
                fVar13 = *pfVar10 - pfVar10[(long)param_4];
                fVar12 = pfVar10[-1] - pfVar10[(long)param_4 + -1];
                *pfVar10 = pfVar10[(long)param_4] + *pfVar10;
                pfVar10[-1] = pfVar10[-1] + pfVar10[(long)param_4 + -1];
                pfVar10[(long)param_4] = fVar13 * fVar1 - fVar12 * fVar2;
                pfVar10[(long)param_4 + -1] = fVar13 * fVar2 + fVar12 * fVar1;
                fVar12 = pfVar10[-2] - pfVar10[(long)param_4 + -2];
                fVar13 = pfVar10[-3] - pfVar10[(long)param_4 + -3];
                pfVar10[-2] = pfVar10[(long)param_4 + -2] + pfVar10[-2];
                pfVar10[-3] = pfVar10[-3] + pfVar10[(long)param_4 + -3];
                pfVar10[(long)param_4 + -2] = fVar12 * fVar3 - fVar13 * fVar4;
                pfVar10[(long)param_4 + -3] = fVar12 * fVar4 + fVar13 * fVar3;
                fVar12 = pfVar10[-4] - pfVar10[(long)param_4 + -4];
                fVar13 = pfVar10[-5] - pfVar10[(long)param_4 + -5];
                pfVar10[-4] = pfVar10[(long)param_4 + -4] + pfVar10[-4];
                pfVar10[-5] = pfVar10[-5] + pfVar10[(long)param_4 + -5];
                pfVar10[(long)param_4 + -4] = fVar12 * fVar5 - fVar13 * fVar6;
                pfVar10[(long)param_4 + -5] = fVar12 * fVar6 + fVar13 * fVar5;
                fVar12 = pfVar10[-6] - pfVar10[(long)param_4 + -6];
                fVar13 = pfVar10[-7] - pfVar10[(long)param_4 + -7];
                pfVar10[-6] = pfVar10[(long)param_4 + -6] + pfVar10[-6];
                pfVar10[-7] = pfVar10[-7] + pfVar10[(long)param_4 + -7];
                pfVar10[(long)param_4 + -6] = fVar12 * fVar7 - fVar13 * fVar8;
                pfVar10[(long)param_4 + -7] = fVar12 * fVar8 + fVar13 * fVar7;
                pfVar10 = pfVar10 + -(long)param_7;
                iVar11 = iVar11 + -1;
            } while (1 < iVar11);
        }
    }

    // 0x100b9e100, 400 bytes, placed by debug map only (low confidence)
    // imdct_step3_inner_s_loop_ld654(int, float*, int, float*, int)
    void imdct_step3_inner_s_loop_ld654(int param_1, float* param_2, int param_3, float* param_4, int param_5) {
        float fVar1;
        float fVar2;
        float* pfVar3;
        float* pfVar4;
        float fVar5;
        float fVar6;

        if (0 < param_1) {
            fVar1 = param_4[param_5 >> 3];
            pfVar3 = param_2 + param_3;
            pfVar4 = pfVar3 + -(long)(param_1 << 4);
            do {
                fVar5 = *pfVar3;
                fVar6 = pfVar3[-1];
                *pfVar3 = pfVar3[-8] + fVar5;
                pfVar3[-1] = pfVar3[-9] + fVar6;
                pfVar3[-8] = fVar5 - pfVar3[-8];
                pfVar3[-9] = fVar6 - pfVar3[-9];
                fVar5 = pfVar3[-2] - pfVar3[-10];
                fVar6 = pfVar3[-3] - pfVar3[-11];
                pfVar3[-2] = pfVar3[-10] + pfVar3[-2];
                pfVar3[-3] = pfVar3[-11] + pfVar3[-3];
                pfVar3[-10] = (fVar6 + fVar5) * fVar1;
                pfVar3[-11] = (fVar6 - fVar5) * fVar1;
                fVar5 = pfVar3[-12];
                fVar6 = pfVar3[-4];
                fVar2 = pfVar3[-5];
                pfVar3[-4] = fVar6 + fVar5;
                pfVar3[-5] = pfVar3[-13] + fVar2;
                pfVar3[-12] = fVar2 - pfVar3[-13];
                pfVar3[-13] = fVar5 - fVar6;
                fVar5 = pfVar3[-14] - pfVar3[-6];
                fVar6 = pfVar3[-7] - pfVar3[-15];
                pfVar3[-6] = pfVar3[-6] + pfVar3[-14];
                pfVar3[-7] = pfVar3[-15] + pfVar3[-7];
                pfVar3[-14] = (fVar6 + fVar5) * fVar1;
                pfVar3[-15] = (fVar5 - fVar6) * fVar1;
                iter_54(pfVar3);
                iter_54(pfVar3 + -8);
                pfVar3 = pfVar3 + -16;
            } while (pfVar4 < pfVar3);
        }
    }

    // 0x100b9e290, 176 bytes, placed by debug map only (low confidence)
    // iter_54(float*)
    void iter_54(float* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;

        fVar3 = *param_1 - param_1[-4];
        fVar2 = param_1[-4] + *param_1;
        fVar4 = param_1[-6] + param_1[-2];
        fVar1 = param_1[-2] - param_1[-6];
        *param_1 = fVar4 + fVar2;
        param_1[-2] = fVar2 - fVar4;
        fVar2 = param_1[-3] - param_1[-7];
        param_1[-4] = fVar2 + fVar3;
        param_1[-6] = fVar3 - fVar2;
        fVar4 = param_1[-1] - param_1[-5];
        fVar3 = param_1[-5] + param_1[-1];
        fVar2 = param_1[-7] + param_1[-3];
        param_1[-1] = fVar3 + fVar2;
        param_1[-3] = fVar3 - fVar2;
        param_1[-5] = fVar4 - fVar1;
        param_1[-7] = fVar4 + fVar1;
    }

    // 0x100b9e340, 48 bytes, placed by debug map only (low confidence)
    // get_window(stb_vorbis*, int)
    undefined8 get_window(stb_vorbis* param_1, int param_2) {
        stb_vorbis* psVar1;

        if (param_2 * 2 == *(int*)(param_1 + 144)) {
            psVar1 = param_1 + 1440;
        } else {
            if (param_2 * 2 != *(int*)(param_1 + 148)) {
                return 0;
            }
            psVar1 = param_1 + 1448;
        }
        return *(undefined8*)psVar1;
    }

    // 0x100b9e370, 48 bytes, placed by debug map only (low confidence)
    // vorbis_validate(unsigned char*)
    bool vorbis_validate(uchar* param_1) {
        return (short)field_4 == ogg_page_header._8_2_ && field_0 == ogg_page_header._4_4_;
    }

    // 0x100b9e3a0, 112 bytes, placed by debug map only (low confidence)
    // start_packet(stb_vorbis*)
    undefined8 start_packet(stb_vorbis* param_1) {
        while (true) {
            if (*(int*)(param_1 + 1744) != -1) {
                *(undefined4*)(param_1 + 1748) = 0;
                *(undefined8*)(param_1 + 1760) = 0;
                param_1[1740] = (stb_vorbis)0;
                return 1;
            }
            if (start_page(param_1) == 0)
                break;
            if (((byte)param_1[1739] & 1) != 0) {
                error(param_1, 32);
                return 0;
            }
        }
        return 0;
    }

    // 0x100b9e410, 96 bytes, placed by debug map only (low confidence)
    // skip(stb_vorbis*, int)
    void skip(stb_vorbis* param_1, int param_2) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(param_1 + 40) == 0) {
            lVar2 = _ftell(*(FILE**)(param_1 + 24));
            _fseek(*(FILE**)(param_1 + 24), param_2 + lVar2, 0);
        } else {
            uVar1 = *(long*)(param_1 + 40) + (long)param_2;
            *(ulong*)(param_1 + 40) = uVar1;
            if (*(ulong*)(param_1 + 56) <= uVar1) {
                *(undefined4*)(param_1 + 128) = 1;
            }
        }
    }

    // 0x100b9e470, 80 bytes, placed by debug map only (low confidence)
    // crc32_init()
    void crc32_init() {
        long lVar1;
        uint uVar2;
        int iVar3;

        lVar1 = 0;
        do {
            uVar2 = (int)lVar1 << 24;
            iVar3 = 8;
            do {
                uVar2 = (int)uVar2 >> 31 & 79764919U ^ uVar2 * 2;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            (&crc_table)[lVar1] = uVar2;
            lVar1 = lVar1 + 1;
        } while (lVar1 != 256);
    }

    // 0x100b9e4c0, 64 bytes, placed by debug map only (low confidence)
    // setup_malloc(stb_vorbis*, int)
    void* setup_malloc(stb_vorbis* param_1, int param_2) {
        int iVar1;
        uint uVar3;
        int iVar4;

        uVar3 = param_2 + 3U & 4294967292;
        *(uint*)(param_1 + 8) = *(int*)(param_1 + 8) + uVar3;
        if (*(long*)(param_1 + 104) == 0) {
            if (uVar3 != 0) {
                return _malloc((long)(int)uVar3);
            }
        } else {
            iVar1 = *(int*)(param_1 + 120);
            iVar4 = uVar3 + iVar1;
            if (iVar4 <= *(int*)(param_1 + 124)) {
                *(int*)(param_1 + 120) = iVar4;
                return (void*)(*(long*)(param_1 + 104) + (long)iVar1);
            }
        }
        return (void*)0;
    }

    // 0x100b9e500, 32 bytes, placed by debug map only (low confidence)
    // setup_temp_free(stb_vorbis*, void*, int)
    void setup_temp_free(stb_vorbis* param_1, void* param_2, int param_3) {
        if (*(long*)(param_1 + 104) == 0) {
            _free(param_2);
            return;
        }
        *(uint*)(param_1 + 124) = *(int*)(param_1 + 124) + (param_3 + 3U & 4294967292);
    }

    // 0x100b9e520, 848 bytes, placed by debug map only (low confidence)
    // compute_codewords(Codebook*, unsigned char*, int, unsigned int*)
    /* WARNING: Removing unreachable block (ram,4307150794) */
    /* WARNING: Removing unreachable block (ram,4307150834) */
    /* compute_codewords(Codebook*,
   unsigned char*, int, unsigned int*) */

    undefined4 compute_codewords(Codebook* param_1, uchar* param_2, int param_3, uint* param_4) {
        byte bVar1;
        uint uVar2;
        bool bVar3;
        uint uVar4;
        ulong uVar5;
        byte bVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        ulong uVar10;
        long lVar11;
        undefined4 uVar12;
        uint local_b8[32];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_b8[28] = 0;
        local_b8[29] = 0;
        local_b8[30] = 0;
        local_b8[31] = 0;
        local_b8[24] = 0;
        local_b8[25] = 0;
        local_b8[26] = 0;
        local_b8[27] = 0;
        local_b8[20] = 0;
        local_b8[21] = 0;
        local_b8[22] = 0;
        local_b8[23] = 0;
        local_b8[16] = 0;
        local_b8[17] = 0;
        local_b8[18] = 0;
        local_b8[19] = 0;
        local_b8[12] = 0;
        local_b8[13] = 0;
        local_b8[14] = 0;
        local_b8[15] = 0;
        local_b8[8] = 0;
        local_b8[9] = 0;
        local_b8[10] = 0;
        local_b8[11] = 0;
        local_b8[4] = 0;
        local_b8[5] = 0;
        local_b8[6] = 0;
        local_b8[7] = 0;
        local_b8[0] = 0;
        local_b8[1] = 0;
        local_b8[2] = 0;
        local_b8[3] = 0;
        if (param_3 < 1) {
            uVar10 = 0;
        } else {
            uVar10 = (ulong)(uint)param_3;
            uVar5 = 0;
            do {
                if (param_2[uVar5] != 255) {
                    uVar10 = uVar5 & 4294967295;
                    iVar9 = (int)uVar5;
                    goto joined_r0x000100b9e5ea;
                }
                uVar5 = uVar5 + 1;
            } while (uVar10 != uVar5);
        }
        iVar9 = (int)uVar10;
    joined_r0x000100b9e5ea:
        if (iVar9 == param_3) {
            uVar12 = 1;
            if (*(int*)(param_1 + 2112) != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("c->sorted_entries == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                          "vorbis_std.code",
                          682, (char*)0);
            }
        } else {
            add_entry(param_1, 0, (int)uVar10, 0, (uint)param_2[uVar10], param_4);
            bVar1 = param_2[uVar10];
            if ((ulong)bVar1 != 0) {
                bVar6 = 31;
                uVar5 = 0;
                do {
                    local_b8[uVar5 + 1] = 1 << (bVar6 & 31);
                    uVar5 = uVar5 + 1;
                    bVar6 = bVar6 - 1;
                } while (bVar1 != uVar5);
            }
            iVar9 = (int)uVar10 + 1;
            uVar12 = 1;
            if (iVar9 < param_3) {
                iVar8 = 1;
                do {
                    bVar1 = param_2[uVar10 + 1];
                    uVar10 = uVar10 + 1;
                    if (bVar1 != 255) {
                        uVar5 = (ulong)(uint)bVar1;
                        if (bVar1 != 0) {
                            uVar5 = (ulong)(uint)bVar1;
                            do {
                                if (local_b8[uVar5] != 0)
                                    goto LAB_100b9e6c9;
                                bVar3 = 1 < (long)uVar5;
                                uVar5 = uVar5 - 1;
                            } while (bVar3);
                            uVar5 = 0;
                        }
                    LAB_100b9e6c9:
                        iVar7 = (int)uVar5;
                        if (iVar7 == 0) {
                            bVar3 = true;
                        } else {
                            lVar11 = (long)iVar7;
                            uVar2 = local_b8[lVar11];
                            local_b8[lVar11] = 0;
                            uVar4 = bit_reverse(uVar2);
                            add_entry(param_1, uVar4, (int)uVar10, iVar8, (uint)bVar1, param_4);
                            bVar1 = param_2[uVar10];
                            bVar3 = false;
                            if (iVar7 < (int)(uint)bVar1) {
                                uVar5 = (ulong)(uint)bVar1;
                                iVar7 = 32 - (uint)bVar1;
                                do {
                                    if (local_b8[uVar5] != 0) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("available[y] == 0",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/hal/audio/workers/vorbis_std.code",
                                                  710, (char*)0);
                                    }
                                    local_b8[uVar5] = (1 << ((byte)iVar7 & 31)) + uVar2;
                                    uVar5 = uVar5 - 1;
                                    iVar7 = iVar7 + 1;
                                } while (lVar11 < (long)uVar5);
                                bVar3 = false;
                                iVar8 = iVar8 + 1;
                            } else {
                                iVar8 = iVar8 + 1;
                            }
                        }
                        if (bVar3) {
                            uVar12 = 0;
                            goto LAB_100b9e83d;
                        }
                    }
                    iVar9 = iVar9 + 1;
                } while (iVar9 != param_3);
                uVar12 = 1;
            }
        }
    LAB_100b9e83d:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar12;
    }

    // 0x100b9e870, 592 bytes, placed by debug map only (low confidence)
    // compute_sorted_huffman(Codebook*, unsigned char*, unsigned int*)
    void compute_sorted_huffman(Codebook* param_1, uchar* param_2, uint* param_3) {
        uchar uVar1;
        uint uVar2;
        undefined4 uVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        long lVar7;
        long lVar8;
        Codebook* pCVar9;
        long lVar10;
        int iVar11;
        ulong uVar12;

        if (param_1[27] == (Codebook)0) {
            if (*(int*)(param_1 + 4) < 1) {
                iVar5 = 0;
            } else {
                lVar10 = 0;
                iVar5 = 0;
                do {
                    iVar4 = include_in_sort(param_1, param_2[lVar10]);
                    if (iVar4 != 0) {
                        uVar3 = bit_reverse(*(uint*)(*(long*)(param_1 + 40) + lVar10 * 4));
                        lVar7 = (long)iVar5;
                        iVar5 = iVar5 + 1;
                        *(undefined4*)(*(long*)(param_1 + 2096) + lVar7 * 4) = uVar3;
                    }
                    lVar10 = lVar10 + 1;
                } while (lVar10 < *(int*)(param_1 + 4));
            }
            if (iVar5 != *(int*)(param_1 + 2112)) {
                /* WARNING: Subroutine does not return */
                LogAssert("k == c->sorted_entries",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                          "vorbis_std.code",
                          777, (char*)0);
            }
        } else if (0 < *(int*)(param_1 + 2112)) {
            lVar10 = *(long*)(param_1 + 40);
            lVar7 = *(long*)(param_1 + 2096);
            lVar8 = 0;
            do {
                uVar3 = bit_reverse(*(uint*)(lVar10 + lVar8 * 4));
                *(undefined4*)(lVar7 + lVar8 * 4) = uVar3;
                lVar8 = lVar8 + 1;
            } while (lVar8 < *(int*)(param_1 + 2112));
        }
        _qsort(*(void**)(param_1 + 2096), (long)*(int*)(param_1 + 2112), 4, (int*)uint32_compare);
        *(undefined4*)(*(long*)(param_1 + 2096) + (long)*(int*)(param_1 + 2112) * 4) = 4294967295;
        pCVar9 = param_1 + 2112;
        if (param_1[27] == (Codebook)0) {
            pCVar9 = param_1 + 4;
        }
        uVar2 = *(uint*)pCVar9;
        if (0 < (int)uVar2) {
            uVar12 = 0;
            do {
                uVar6 = (uint)uVar12;
                if (param_1[27] != (Codebook)0) {
                    uVar6 = param_3[uVar12];
                }
                uVar1 = param_2[uVar6];
                iVar5 = include_in_sort(param_1, uVar1);
                if (iVar5 != 0) {
                    uVar6 = bit_reverse(*(uint*)(*(long*)(param_1 + 40) + uVar12 * 4));
                    iVar5 = *(int*)(param_1 + 2112);
                    iVar4 = 0;
                    if (1 < iVar5) {
                        iVar4 = 0;
                        do {
                            iVar11 = iVar5 >> 1;
                            if (uVar6 < *(uint*)(*(long*)(param_1 + 2096) + (long)(iVar11 + iVar4) * 4)) {
                                iVar5 = iVar11;
                            } else {
                                iVar5 = iVar5 - iVar11;
                                iVar4 = iVar11 + iVar4;
                            }
                        } while (1 < iVar5);
                    }
                    lVar10 = (long)iVar4;
                    if (*(uint*)(*(long*)(param_1 + 2096) + lVar10 * 4) != uVar6) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("c->sorted_codewords[x] == code",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                                  "workers/vorbis_std.code",
                                  809, (char*)0);
                    }
                    if (param_1[27] == (Codebook)0) {
                        *(uint*)(*(long*)(param_1 + 2104) + lVar10 * 4) = (uint)uVar12;
                    } else {
                        *(uint*)(*(long*)(param_1 + 2104) + lVar10 * 4) = param_3[uVar12];
                        *(uchar*)(*(long*)(param_1 + 8) + lVar10) = uVar1;
                    }
                }
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar2);
        }
    }

    // 0x100b9eac0, 224 bytes, placed by debug map only (low confidence)
    // compute_accelerated_huffman(Codebook*)
    void compute_accelerated_huffman(Codebook* param_1) {
        Codebook CVar1;
        long lVar2;
        uint uVar3;
        Codebook* pCVar4;
        ulong uVar5;
        uint uVar6;
        ulong uVar7;

        _memset(param_1 + 48, 255, 2048);
        CVar1 = param_1[27];
        pCVar4 = param_1 + 4;
        if (CVar1 != (Codebook)0) {
            pCVar4 = param_1 + 2112;
        }
        uVar3 = *(uint*)pCVar4;
        if (0 < (int)uVar3) {
            uVar6 = 32767;
            if ((int)uVar3 < 32767) {
                uVar6 = uVar3;
            }
            lVar2 = *(long*)(param_1 + 8);
            uVar7 = (ulong)uVar6;
            if ((int)uVar6 < 2) {
                uVar7 = 1;
            }
            uVar5 = 0;
            do {
                if (*(byte*)(lVar2 + uVar5) < 11) {
                    if (CVar1 == (Codebook)0) {
                        uVar3 = *(uint*)(*(long*)(param_1 + 40) + uVar5 * 4);
                    } else {
                        uVar3 = bit_reverse(*(uint*)(*(long*)(param_1 + 2096) + uVar5 * 4));
                    }
                    for (; uVar3 < 1024; uVar3 = uVar3 + (1 << (*(byte*)(lVar2 + uVar5) & 31))) {
                        *(short*)(param_1 + (ulong)uVar3 * 2 + 48) = (short)uVar5;
                    }
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 != uVar7);
        }
    }

    // 0x100b9eba0, 64 bytes, placed by debug map only (low confidence)
    // float32_unpack(unsigned int)
    void float32_unpack(uint param_1) {
        float fVar1;

        fVar1 = (float)(param_1 & 2097151);
        if ((int)param_1 < 0) {
            fVar1 = -fVar1;
        }
        ldexp(fVar1, (param_1 >> 21 & 1023) - 788);
    }

    // 0x100b9ebe0, 256 bytes, placed by debug map only (low confidence)
    // lookup1_values(int, int)
    int lookup1_values(int param_1, int param_2) {
        int iVar1;
        float fVar2;
        double dVar3;

        fVar2 = (float)log((float)param_1);
        fVar2 = (float)exp(fVar2 / (float)param_2);
        fVar2 = (float)floor(fVar2);
        pow<float, int>((float)(int)fVar2 + 1.0, param_2);
        dVar3 = (double)_floor();
        iVar1 = (uint)((int)dVar3 <= param_1) + (int)fVar2;
        fVar2 = (float)iVar1;
        dVar3 = (double)pow<float, int>(fVar2 + 1.0, param_2);
        if (dVar3 <= (double)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("pow((float)r + 1, dim) > entries",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      835, (char*)0);
        }
        pow<float, int>(fVar2, param_2);
        dVar3 = (double)_floor();
        if (param_1 < (int)dVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert("(int)floor(pow((float)r, dim)) <= entries",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      836, (char*)0);
        }
        return iVar1;
    }

    // 0x100b9ece0, 32 bytes, placed by debug map only (low confidence)
    // point_compare(void const*, void const*)
    ulong point_compare(void* param_1, void* param_2) {
        ulong uVar1;

        uVar1 = 4294967295;
        if (*(ushort*)param_2 <= *(ushort*)param_1) {
            uVar1 = (ulong)(*(ushort*)param_2 < *(ushort*)param_1);
        }
        return uVar1;
    }

    // 0x100b9ed00, 96 bytes, placed by debug map only (low confidence)
    // neighbors(unsigned short*, int, int*, int*)
    void neighbors(ushort* param_1, int param_2, int* param_3, int* param_4) {
        ushort uVar1;
        ulong uVar2;
        uint uVar3;
        uint uVar4;
        uint uVar5;

        if (0 < param_2) {
            uVar4 = 4294967295;
            uVar5 = 65536;
            uVar2 = 0;
            do {
                uVar1 = param_1[uVar2];
                uVar3 = (uint)uVar1;
                if (((int)uVar4 < (int)(uint)uVar1) && (uVar1 < param_1[param_2])) {
                    *param_3 = (int)uVar2;
                    uVar4 = uVar3;
                }
                if ((uVar3 < uVar5) && (param_1[param_2] < uVar1)) {
                    *param_4 = (int)uVar2;
                    uVar5 = uVar3;
                }
                uVar2 = uVar2 + 1;
            } while ((uint)param_2 != uVar2);
        }
    }

    // 0x100b9ed60, 256 bytes, placed by debug map only (low confidence)
    // init_blocksize(stb_vorbis*, int, int)
    undefined8 init_blocksize(stb_vorbis* param_1, int param_2, int param_3) {
        undefined8 uVar1;
        float* pfVar2;
        ushort* puVar3;
        ulong uVar4;
        uint uVar5;

        uVar5 = param_3 * 2 & 4294967292;
        uVar1 = setup_malloc(param_1, uVar5);
        uVar4 = (ulong)(uint)param_2;
        *(undefined8*)(param_1 + uVar4 * 8 + 1392) = uVar1;
        uVar1 = setup_malloc(param_1, uVar5);
        *(undefined8*)(param_1 + uVar4 * 8 + 1408) = uVar1;
        pfVar2 = (float*)setup_malloc(param_1, param_3 & 4294967292);
        *(float**)(param_1 + uVar4 * 8 + 1424) = pfVar2;
        if (((*(float**)(param_1 + uVar4 * 8 + 1392) != (float*)0) &&
             (*(float**)(param_1 + uVar4 * 8 + 1408) != (float*)0)) &&
            (pfVar2 != (float*)0)) {
            compute_twiddle_factors(param_3, *(float**)(param_1 + uVar4 * 8 + 1392),
                                    *(float**)(param_1 + uVar4 * 8 + 1408), pfVar2);
            pfVar2 = (float*)setup_malloc(param_1, uVar5);
            *(float**)(param_1 + uVar4 * 8 + 1440) = pfVar2;
            if (pfVar2 != (float*)0) {
                compute_window(param_3, pfVar2);
                puVar3 = (ushort*)setup_malloc(param_1, param_3 >> 2 & 4294967294);
                *(ushort**)(param_1 + uVar4 * 8 + 1456) = puVar3;
                if (puVar3 != (ushort*)0) {
                    compute_bitreverse(param_3, puVar3);
                    return 1;
                }
            }
        }
        error(param_1, 3);
        return 0;
    }

    // 0x100b9ee60, 48 bytes, placed by debug map only (low confidence)
    // add_entry(Codebook*, unsigned int, int, int, int, unsigned int*)
    void add_entry(Codebook* param_1, uint param_2, int param_3, int param_4, int param_5, uint* param_6) {
        if (param_1[27] == (Codebook)0) {
            *(uint*)(*(long*)(param_1 + 40) + (long)param_3 * 4) = param_2;
            return;
        }
        *(uint*)(*(long*)(param_1 + 40) + (long)param_4 * 4) = param_2;
        *(char*)(*(long*)(param_1 + 8) + (long)param_4) = (char)param_5;
        param_6[(long)param_4] = param_3;
    }

    // 0x100b9ee90, 80 bytes, placed by debug map only (low confidence)
    // include_in_sort(Codebook*, unsigned char)
    bool include_in_sort(Codebook* param_1, uchar param_2) {
        bool bVar1;

        if (param_1[27] == (Codebook)0) {
            bVar1 = false;
            if (param_2 != 255) {
                bVar1 = 10 < param_2;
            }
        } else {
            bVar1 = true;
            if (param_2 == 255) {
                /* WARNING: Subroutine does not return */
                LogAssert("len != NO_CODE",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                          "vorbis_std.code",
                          757, (char*)0);
            }
        }
        return bVar1;
    }

    // 0x100b9eee0, 32 bytes, placed by debug map only (low confidence)
    // uint32_compare(void const*, void const*)
    ulong uint32_compare(void* param_1, void* param_2) {
        ulong uVar1;

        uVar1 = 4294967295;
        if (*(uint*)param_2 <= *(uint*)param_1) {
            uVar1 = (ulong)(*(uint*)param_2 < *(uint*)param_1);
        }
        return uVar1;
    }

    // 0x100b9ef40, 384 bytes, placed by debug map only (low confidence)
    // compute_twiddle_factors(int, float*, float*, float*)
    void compute_twiddle_factors(int param_1, float* param_2, float* param_3, float* param_4) {
        int iVar1;
        int iVar2;
        long lVar3;
        double dVar5;
        double dVar6;
        double in_XMM1_Qa;

        if (3 < param_1) {
            iVar2 = 1;
            if (1 < param_1 >> 2) {
                iVar2 = param_1 >> 2;
            }
            lVar3 = 1;
            iVar1 = 0;
            do {
                dVar5 = (double)___sincos_stret((double)iVar1 * 3.141592653589793 * (1.0 / (double)param_1));
                dVar6 = (double)CONCAT44((int)((ulong)in_XMM1_Qa >> 32), (float)in_XMM1_Qa);
                param_2[lVar3 + -1] = (float)in_XMM1_Qa;
                param_2[lVar3] = -(float)dVar5;
                dVar5 = (double)___sincos_stret((double)(int)lVar3 * 1.5707963267948966 * (1.0 / (double)param_1));
                in_XMM1_Qa = (double)CONCAT44((int)((ulong)dVar6 >> 32), (float)dVar6 * 0.5);
                param_3[lVar3 + -1] = (float)dVar6 * 0.5;
                param_3[lVar3] = (float)dVar5 * 0.5;
                lVar3 = lVar3 + 2;
                iVar1 = iVar1 + 4;
            } while (iVar2 << 2 != iVar1);
        }
        if (7 < param_1) {
            iVar2 = 1;
            if (1 < param_1 >> 3) {
                iVar2 = param_1 >> 3;
            }
            lVar3 = 0;
            do {
                dVar5 = (double)param_1;
                dVar6 = (double)___sincos_stret(((double)((int)lVar3 + 2) * 3.141592653589793) / (double)param_1);
                *(float*)((long)param_4 + lVar3 * 2) = (float)dVar5;
                *(float*)((long)param_4 + lVar3 * 2 + 4) = -(float)dVar6;
                lVar3 = lVar3 + 4;
            } while (iVar2 << 2 != (int)lVar3);
        }
    }

    // 0x100b9f0c0, 144 bytes, placed by debug map only (low confidence)
    // compute_window(int, float*)
    void compute_window(int param_1, float* param_2) {
        ulong uVar1;
        uint uVar2;
        ulong uVar3;
        float fVar4;
        double dVar5;

        if (1 < param_1) {
            uVar2 = param_1 >> 1;
            uVar3 = 1;
            if (1 < (int)uVar2) {
                uVar3 = (ulong)uVar2;
            }
            uVar1 = 0;
            do {
                dVar5 =
                    (double)_sin(((double)(int)uVar1 * 1.5707963267948966 + 0.7853981633974483) / (double)(int)uVar2);
                fVar4 = (float)square((float)dVar5);
                dVar5 = (double)_sin((double)fVar4 * 1.5707963267948966);
                param_2[uVar1] = (float)dVar5;
                uVar1 = uVar1 + 1;
            } while (uVar3 != uVar1);
        }
    }

    // 0x100b9f150, 112 bytes, placed by debug map only (low confidence)
    // compute_bitreverse(int, unsigned short*)
    void compute_bitreverse(int param_1, ushort* param_2) {
        char cVar1;
        uint uVar2;
        ulong uVar3;
        ulong uVar4;

        cVar1 = ilog(param_1);
        if (7 < param_1) {
            uVar4 = 1;
            if (1 < param_1 >> 3) {
                uVar4 = (ulong)(uint)(param_1 >> 3);
            }
            uVar3 = 0;
            do {
                uVar2 = bit_reverse((uint)uVar3);
                param_2[uVar3] = (ushort)((uVar2 >> (36U - cVar1 & 31)) << 2);
                uVar3 = uVar3 + 1;
            } while (uVar4 != uVar3);
        }
    }

    // 0x100b9f1c0, 16 bytes, placed by debug map only (low confidence)
    // square(float)
    float square(float param_1) {
        return param_1 * param_1;
    }

    // 0x100b9f1d0, 224 bytes, placed by debug map only (low confidence)
    // get_seek_page_info(stb_vorbis*, ProbedPage*)
    undefined8 get_seek_page_info(stb_vorbis* param_1, ProbedPage* param_2) {
        undefined4 uVar1;
        int iVar2;
        undefined8 uVar3;
        uint uVar4;
        ulong uVar5;
        byte local_148[256];
        uchar local_48;
        char local_47;
        char local_46;
        char local_45;
        undefined4 local_42;
        byte local_2e;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar1 = _stb_vorbis_get_file_offset();
        *(undefined4*)param_2 = uVar1;
        getn(param_1, &local_48, 27);
        uVar3 = 0;
        if ((((local_48 == 'O') && (local_47 == 'g')) && (local_46 == 'g')) && (local_45 == 'S')) {
            uVar4 = (uint)local_2e;
            getn(param_1, local_148, uVar4);
            if (local_2e == 0) {
                iVar2 = 0;
            } else {
                uVar5 = 0;
                iVar2 = 0;
                do {
                    iVar2 = iVar2 + (uint)local_148[uVar5];
                    uVar5 = uVar5 + 1;
                } while (uVar4 != uVar5);
            }
            *(uint*)(param_2 + 4) = *(uint*)param_2 + uVar4 + iVar2 + 27;
            *(undefined4*)(param_2 + 8) = local_42;
            set_file_offset(param_1, *(uint*)param_2);
            uVar3 = 1;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar3;
    }

    // 0x100b9f2b0, 176 bytes, placed by debug map only (low confidence)
    // go_to_page_before(stb_vorbis*, unsigned int)
    undefined8 go_to_page_before(stb_vorbis* param_1, uint param_2) {
        int iVar1;
        uint uVar2;
        uint* in_RCX;
        uint local_2c;

        if ((param_2 < 65536) || (uVar2 = param_2 - 65536, uVar2 < *(uint*)(param_1 + 72))) {
            uVar2 = *(uint*)(param_1 + 72);
        }
        set_file_offset(param_1, uVar2);
        iVar1 = vorbis_find_page((vorbis*)param_1, (stb_vorbis*)&local_2c, (uint*)0, in_RCX);
        if (iVar1 != 0) {
            do {
                if ((param_2 <= local_2c) && (uVar2 = _stb_vorbis_get_file_offset(param_1), uVar2 < param_2)) {
                    return 1;
                }
                set_file_offset(param_1, local_2c);
                iVar1 = vorbis_find_page((vorbis*)param_1, (stb_vorbis*)&local_2c, (uint*)0, in_RCX);
            } while (iVar1 != 0);
        }
        return 0;
    }

    // 0x100b9f360, 464 bytes, placed by debug map only (low confidence)
    // compute_samples(int, short*, int, float**, int, int)
    void compute_samples(int param_1, short* param_2, int param_3, float** param_4, int param_5, int param_6) {
        float* pfVar1;
        int iVar2;
        ulong uVar3;
        long lVar4;
        long lVar5;
        long lVar6;
        int iVar7;
        float fVar8;
        float local_b8[32];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (0 < param_6) {
            lVar4 = (long)param_5;
            iVar7 = 32;
            lVar5 = 0;
            do {
                iVar2 = param_6 - (int)lVar5;
                if (iVar7 + (int)lVar5 <= param_6) {
                    iVar2 = iVar7;
                }
                iVar7 = iVar2;
                local_b8[28] = 0.0;
                local_b8[29] = 0.0;
                local_b8[30] = 0.0;
                local_b8[31] = 0.0;
                local_b8[24] = 0.0;
                local_b8[25] = 0.0;
                local_b8[26] = 0.0;
                local_b8[27] = 0.0;
                local_b8[20] = 0.0;
                local_b8[21] = 0.0;
                local_b8[22] = 0.0;
                local_b8[23] = 0.0;
                local_b8[16] = 0.0;
                local_b8[17] = 0.0;
                local_b8[18] = 0.0;
                local_b8[19] = 0.0;
                local_b8[12] = 0.0;
                local_b8[13] = 0.0;
                local_b8[14] = 0.0;
                local_b8[15] = 0.0;
                local_b8[8] = 0.0;
                local_b8[9] = 0.0;
                local_b8[10] = 0.0;
                local_b8[11] = 0.0;
                local_b8[4] = 0.0;
                local_b8[5] = 0.0;
                local_b8[6] = 0.0;
                local_b8[7] = 0.0;
                local_b8[0] = 0.0;
                local_b8[1] = 0.0;
                local_b8[2] = 0.0;
                local_b8[3] = 0.0;
                if (0 < param_3) {
                    uVar3 = 0;
                    do {
                        if ((((char)(&channel_position)[uVar3 + (long)param_3 * 6] & param_1) != 0) && (0 < iVar7)) {
                            pfVar1 = param_4[uVar3];
                            lVar6 = 0;
                            do {
                                local_b8[lVar6] = local_b8[lVar6] + pfVar1[lVar4 + lVar6];
                                lVar6 = lVar6 + 1;
                            } while (lVar6 < iVar7);
                        }
                        uVar3 = uVar3 + 1;
                    } while (uVar3 != (uint)param_3);
                }
                if (0 < iVar7) {
                    lVar6 = 0;
                    do {
                        fVar8 = local_b8[lVar6] + 384.0;
                        if ((int)fVar8 < 1136623617) {
                            fVar8 = 383.0;
                        }
                        if (1136689150 < (int)fVar8) {
                            fVar8 = 4.59163e-41;
                        }
                        param_2[lVar6] = SUB42(fVar8, 0);
                        lVar6 = lVar6 + 1;
                    } while (lVar6 < iVar7);
                }
                lVar5 = lVar5 + 32;
                lVar4 = lVar4 + 32;
                param_2 = param_2 + 32;
            } while (lVar5 < param_6);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b9f530, 96 bytes, placed by debug map only (low confidence)
    // copy_samples(short*, float*, int)
    void copy_samples(short* param_1, float* param_2, int param_3) {
        ulong uVar1;
        float fVar2;

        if (0 < param_3) {
            uVar1 = 0;
            do {
                fVar2 = param_2[uVar1] + 384.0;
                if ((int)fVar2 < 1136623617) {
                    fVar2 = 383.0;
                }
                if (1136689150 < (int)fVar2) {
                    fVar2 = 4.59163e-41;
                }
                param_1[uVar1] = SUB42(fVar2, 0);
                uVar1 = uVar1 + 1;
            } while ((uint)param_3 != uVar1);
        }
    }

    // 0x100b9f590, 672 bytes, placed by debug map only (low confidence)
    // compute_stereo_samples(short*, int, float**, int, int)
    void compute_stereo_samples(short* param_1, int param_2, float** param_3, int param_4, int param_5) {
        float* pfVar1;
        int iVar2;
        byte bVar3;
        long lVar4;
        long lVar5;
        ulong uVar6;
        int iVar7;
        int iVar8;
        long lVar9;
        long lVar10;
        float fVar11;
        float local_b8[32];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (0 < param_5) {
            lVar10 = (long)param_4;
            iVar8 = 16;
            iVar7 = 0;
            lVar9 = 0;
            do {
                iVar2 = param_5 - (int)lVar9;
                if ((int)lVar9 + iVar8 <= param_5) {
                    iVar2 = iVar8;
                }
                iVar8 = iVar2;
                local_b8[28] = 0.0;
                local_b8[29] = 0.0;
                local_b8[30] = 0.0;
                local_b8[31] = 0.0;
                local_b8[24] = 0.0;
                local_b8[25] = 0.0;
                local_b8[26] = 0.0;
                local_b8[27] = 0.0;
                local_b8[20] = 0.0;
                local_b8[21] = 0.0;
                local_b8[22] = 0.0;
                local_b8[23] = 0.0;
                local_b8[16] = 0.0;
                local_b8[17] = 0.0;
                local_b8[18] = 0.0;
                local_b8[19] = 0.0;
                local_b8[12] = 0.0;
                local_b8[13] = 0.0;
                local_b8[14] = 0.0;
                local_b8[15] = 0.0;
                local_b8[8] = 0.0;
                local_b8[9] = 0.0;
                local_b8[10] = 0.0;
                local_b8[11] = 0.0;
                local_b8[4] = 0.0;
                local_b8[5] = 0.0;
                local_b8[6] = 0.0;
                local_b8[7] = 0.0;
                local_b8[0] = 0.0;
                local_b8[1] = 0.0;
                local_b8[2] = 0.0;
                local_b8[3] = 0.0;
                if (0 < param_2) {
                    lVar5 = (long)iVar8;
                    uVar6 = 0;
                    do {
                        bVar3 = (&channel_position)[uVar6 + (long)param_2 * 6] & 6;
                        if (bVar3 == 2) {
                            if (0 < iVar8) {
                                pfVar1 = param_3[uVar6];
                                lVar4 = 0;
                                do {
                                    local_b8[lVar4 * 2] = local_b8[lVar4 * 2] + pfVar1[lVar10 + lVar4];
                                    lVar4 = lVar4 + 1;
                                } while (lVar4 < lVar5);
                            }
                        } else if (bVar3 == 6) {
                            if (0 < iVar8) {
                                pfVar1 = param_3[uVar6];
                                lVar4 = 0;
                                do {
                                    fVar11 = pfVar1[lVar10 + lVar4];
                                    local_b8[lVar4 * 2] = local_b8[lVar4 * 2] + fVar11;
                                    local_b8[lVar4 * 2 + 1] = fVar11 + local_b8[lVar4 * 2 + 1];
                                    lVar4 = lVar4 + 1;
                                } while (lVar4 < lVar5);
                            }
                        } else if ((bVar3 == 4) && (0 < iVar8)) {
                            pfVar1 = param_3[uVar6];
                            lVar4 = 0;
                            do {
                                local_b8[lVar4 * 2 + 1] = local_b8[lVar4 * 2 + 1] + pfVar1[lVar10 + lVar4];
                                lVar4 = lVar4 + 1;
                            } while (lVar4 < lVar5);
                        }
                        uVar6 = uVar6 + 1;
                    } while (uVar6 != (uint)param_2);
                }
                if (0 < iVar8 * 2) {
                    lVar5 = 0;
                    do {
                        fVar11 = local_b8[lVar5] + 384.0;
                        if ((int)fVar11 < 1136623617) {
                            fVar11 = 383.0;
                        }
                        if (1136689150 < (int)fVar11) {
                            fVar11 = 4.59163e-41;
                        }
                        param_1[iVar7 + lVar5] = SUB42(fVar11, 0);
                        lVar5 = lVar5 + 1;
                    } while (lVar5 < iVar8 * 2);
                }
                lVar9 = lVar9 + 16;
                lVar10 = lVar10 + 16;
                iVar7 = iVar7 + 32;
            } while (lVar9 < param_5);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::hal::audio::decoders::vorbis

namespace jag {
    // 0x100b92a90, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::pFloatPlatformEndian(float)
    void PacketT<Array<unsigned char, eastl::allocator>>::pFloatPlatformEndian(
        PacketT<Array<unsigned char, eastl::allocator>>* this, float param_1) {
        pTPE<float>(this, param_1);
    }

    // 0x100ba0000, 32 bytes, inline, placed by debug map only (low confidence)
    // hal::audio::osx::OSXAudioRenderer* placement_new<hal::audio::osx::OSXAudioRenderer>(void*)
    OSXAudioRenderer* placement_new<hal::audio::osx::OSXAudioRenderer>(void* param_1) {
        hal::audio::osx::OSXAudioRenderer::OSXAudioRenderer(param_1);
        return param_1;
    }

    // 0x100ba0020, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<hal::audio::osx::OSXAudioRenderer>* placement_new<ref_counter_shared<hal::audio::osx::OSXAudioRenderer>, int, hal::audio::osx::OSXAudioRenderer*&>(void*, int&&, hal::audio::osx::OSXAudioRenderer*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<hal::audio::osx::OSXAudioRenderer>, int, hal::audio::osx::OSXAudioRenderer*&>(
        void* param_1, int* param_2, OSXAudioRenderer** param_3) {
        ref_counter_shared<hal::audio::osx::OSXAudioRenderer>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100ba0040, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<hal::audio::osx::OSXAudioRenderer>::ref_counter_shared(unsigned long, hal::audio::osx::OSXAudioRenderer*): jumps straight to the base-object constructor

    // 0x100ba0050, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<hal::audio::osx::OSXAudioRenderer>::ref_counter_shared(unsigned long, hal::audio::osx::OSXAudioRenderer*)
    void ref_counter_shared<hal::audio::osx::OSXAudioRenderer>::ref_counter_shared(ulong param_1,
                                                                                   OSXAudioRenderer* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee72e0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(OSXAudioRenderer**)(this + 24) = param_2;
    }

    // 0x100ba0340, 48 bytes, inline, placed by debug map only (low confidence)
    // hal::audio::AudioBuss* placement_new<hal::audio::AudioBuss, hal::audio::BussType, unsigned int const&, int, float, unsigned int const&, bool>(void*, hal::audio::BussType&&, unsigned int const&, int&&, float&&, unsigned int const&, bool&&)
    AudioBuss* jag::placement_new<hal::audio::AudioBuss, hal::audio::BussType, unsigned int const&, int, float,
                                  unsigned int const&, bool>(void* param_1, BussType* param_2, uint* param_3,
                                                             int* param_4, float* param_5, uint* param_6,
                                                             bool* param_7) {
        /* WARNING: Load size is inaccurate */
        hal::audio::AudioBuss::AudioBuss(*(AudioBuss**)param_5, param_1, *(undefined4*)param_2, *param_3, *param_4,
                                         *param_6, *param_7);
        return param_1;
    }

    // 0x100ba0370, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<hal::audio::AudioBuss>* placement_new<ref_counter_shared<hal::audio::AudioBuss>, int, hal::audio::AudioBuss*&>(void*, int&&, hal::audio::AudioBuss*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<hal::audio::AudioBuss>, int, hal::audio::AudioBuss*&>(
        void* param_1, int* param_2, AudioBuss** param_3) {
        ref_counter_shared<hal::audio::AudioBuss>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100ba0390, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<hal::audio::AudioBuss>::ref_counter_shared(unsigned long, hal::audio::AudioBuss*): jumps straight to the base-object constructor

    // 0x100ba03a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<hal::audio::AudioBuss>::ref_counter_shared(unsigned long, hal::audio::AudioBuss*)
    void ref_counter_shared<hal::audio::AudioBuss>::ref_counter_shared(ulong param_1, AudioBuss* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee72e8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(AudioBuss**)(this + 24) = param_2;
    }

    // 0x100ba03e0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<hal::audio::AudioBuss>::DeleteData()
    void ref_counter_shared<hal::audio::AudioBuss>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 112;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100ba0430, 32 bytes, inline, placed by debug map only (low confidence)
    // MixerWorker* placement_new<MixerWorker>(void*)
    MixerWorker* placement_new<MixerWorker>(void* param_1) {
        MixerWorker::MixerWorker(param_1);
        return param_1;
    }

    // 0x100ba0450, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<MixerWorker>* placement_new<ref_counter_shared<MixerWorker>, int, MixerWorker*&>(void*, int&&, MixerWorker*&)
    ref_counter_shared* placement_new<ref_counter_shared<MixerWorker>, int, MixerWorker*&>(void* param_1, int* param_2,
                                                                                           MixerWorker** param_3) {
        ref_counter_shared<MixerWorker>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100ba0470, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<MixerWorker>::ref_counter_shared(unsigned long, MixerWorker*): jumps straight to the base-object constructor

    // 0x100ba0480, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<MixerWorker>::ref_counter_shared(unsigned long, MixerWorker*)
    void ref_counter_shared<MixerWorker>::ref_counter_shared(ulong param_1, MixerWorker* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7180 + 16;
        *(ulong*)(this + 16) = param_1;
        *(MixerWorker**)(this + 24) = param_2;
    }

    // 0x100ba0670, 48 bytes, inline, placed by debug map only (low confidence)
    // hal::audio::AudioBuss* placement_new<hal::audio::AudioBuss, hal::audio::BussType&, unsigned int&, unsigned int&, float&, unsigned int&>(void*, hal::audio::BussType&, unsigned int&, unsigned int&, float&, unsigned int&)
    AudioBuss* jag::placement_new<hal::audio::AudioBuss, hal::audio::BussType&, unsigned int&, unsigned int&, float&,
                                  unsigned int&>(void* param_1, BussType* param_2, uint* param_3, uint* param_4,
                                                 float* param_5, uint* param_6) {
        /* WARNING: Load size is inaccurate */
        hal::audio::AudioBuss::AudioBuss(*(AudioBuss**)param_5, param_1, *(undefined4*)param_2, *param_3, *param_4,
                                         *param_6, 0);
        return param_1;
    }

    // 0x100ba1460, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<hal::audio::AudioBuffer>* placement_new<ref_counter_shared<hal::audio::AudioBuffer>, int, hal::audio::AudioBuffer*&>(void*, int&&, hal::audio::AudioBuffer*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<hal::audio::AudioBuffer>, int, hal::audio::AudioBuffer*&>(
        void* param_1, int* param_2, AudioBuffer** param_3) {
        ref_counter_shared<hal::audio::AudioBuffer>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100ba1480, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<hal::audio::AudioBuffer>::ref_counter_shared(unsigned long, hal::audio::AudioBuffer*): jumps straight to the base-object constructor

    // 0x100ba1490, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<hal::audio::AudioBuffer>::ref_counter_shared(unsigned long, hal::audio::AudioBuffer*)
    void ref_counter_shared<hal::audio::AudioBuffer>::ref_counter_shared(ulong param_1, AudioBuffer* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee72d0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(AudioBuffer**)(this + 24) = param_2;
    }

    // 0x100ba14d0, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<hal::audio::AudioBuffer>::DeleteData()
    void ref_counter_shared<hal::audio::AudioBuffer>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 216;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100ba2170, 32 bytes, inline, placed by debug map only (low confidence)
    // hal::audio::AudioBufferHandler* placement_new<hal::audio::AudioBufferHandler, unsigned int&, shared_ptr<hal::audio::AudioBuffer>&>(void*, unsigned int&, shared_ptr<hal::audio::AudioBuffer>&)
    AudioBufferHandler*
    jag::placement_new<hal::audio::AudioBufferHandler, unsigned int&, shared_ptr<hal::audio::AudioBuffer>&>(
        void* param_1, uint* param_2, shared_ptr* param_3) {
        hal::audio::AudioBufferHandler::AudioBufferHandler(param_1, *param_2, param_3);
        return param_1;
    }

    // 0x100ba2190, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<hal::audio::AudioBufferHandler>* placement_new<ref_counter_shared<hal::audio::AudioBufferHandler>, int, hal::audio::AudioBufferHandler*&>(void*, int&&, hal::audio::AudioBufferHandler*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<hal::audio::AudioBufferHandler>, int, hal::audio::AudioBufferHandler*&>(
        void* param_1, int* param_2, AudioBufferHandler** param_3) {
        ref_counter_shared<hal::audio::AudioBufferHandler>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100ba21b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<hal::audio::AudioBufferHandler>::ref_counter_shared(unsigned long, hal::audio::AudioBufferHandler*): jumps straight to the base-object constructor

    // 0x100ba21c0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<hal::audio::AudioBufferHandler>::ref_counter_shared(unsigned long, hal::audio::AudioBufferHandler*)
    void ref_counter_shared<hal::audio::AudioBufferHandler>::ref_counter_shared(ulong param_1,
                                                                                AudioBufferHandler* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee72d8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(AudioBufferHandler**)(this + 24) = param_2;
    }

    // 0x100ba24f0, 32 bytes, inline, placed by debug map only (low confidence)
    // VorbisWorker* placement_new<VorbisWorker>(void*)
    VorbisWorker* placement_new<VorbisWorker>(void* param_1) {
        VorbisWorker::VorbisWorker(param_1);
        return param_1;
    }

    // 0x100ba2510, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<VorbisWorker>* placement_new<ref_counter_shared<VorbisWorker>, int, VorbisWorker*&>(void*, int&&, VorbisWorker*&)
    ref_counter_shared* placement_new<ref_counter_shared<VorbisWorker>, int, VorbisWorker*&>(void* param_1,
                                                                                             int* param_2,
                                                                                             VorbisWorker** param_3) {
        ref_counter_shared<VorbisWorker>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100ba2530, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<VorbisWorker>::ref_counter_shared(unsigned long, VorbisWorker*): jumps straight to the base-object constructor

    // 0x100ba2540, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<VorbisWorker>::ref_counter_shared(unsigned long, VorbisWorker*)
    void ref_counter_shared<VorbisWorker>::ref_counter_shared(ulong param_1, VorbisWorker* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7188 + 16;
        *(ulong*)(this + 16) = param_1;
        *(VorbisWorker**)(this + 24) = param_2;
    }

    // 0x100ba2580, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<VorbisWorker>::DeleteData()
    void ref_counter_shared<VorbisWorker>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 880;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100ba2720, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8> >* placement_new<MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData*&, PacketT<Array<unsigned char, eastl::allocator> >*>(void*, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData*&, PacketT<Array<unsigned char, eastl::allocator> >*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                                MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>>,
                       MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData*&,
                       PacketT<Array<unsigned char, eastl::allocator>>*>(void* param_1, RefCounterAndData** param_2,
                                                                         PacketT** param_3) {
        MakeSharedPoolRefCounter<
            PacketT<Array<unsigned char, eastl::allocator>>,
            MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>>::MakeSharedPoolRefCounter(param_1,
                                                                                                          *param_2,
                                                                                                          *param_3);
        return param_1;
    }

    // 0x100ba27a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8> >::MakeSharedPoolRefCounter(void*, PacketT<Array<unsigned char, eastl::allocator> >*): jumps straight to the base-object constructor

    // 0x100ba27b0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8> >::MakeSharedPoolRefCounter(void*, PacketT<Array<unsigned char, eastl::allocator> >*)
    void jag::MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                       MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                     MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>>* this,
            void* param_1, PacketT* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b88 + 16;
        *(void**)(this + 16) = param_1;
        *(PacketT**)(this + 24) = param_2;
    }

    // 0x100ba27f0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                       MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>>::
        DeleteSelf(MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                            MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::deallocate(pvVar1);
    }

    // 0x100ba3450, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048> >* placement_new<MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData*&, PacketT<Array<unsigned char, eastl::allocator> >*>(void*, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData*&, PacketT<Array<unsigned char, eastl::allocator> >*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                                MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>>,
                       MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData*&,
                       PacketT<Array<unsigned char, eastl::allocator>>*>(void* param_1, RefCounterAndData** param_2,
                                                                         PacketT** param_3) {
        MakeSharedPoolRefCounter<
            PacketT<Array<unsigned char, eastl::allocator>>,
            MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>>::MakeSharedPoolRefCounter(param_1,
                                                                                                             *param_2,
                                                                                                             *param_3);
        return param_1;
    }

    // 0x100ba34d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048> >::MakeSharedPoolRefCounter(void*, PacketT<Array<unsigned char, eastl::allocator> >*): jumps straight to the base-object constructor

    // 0x100ba34e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048> >::MakeSharedPoolRefCounter(void*, PacketT<Array<unsigned char, eastl::allocator> >*)
    void jag::MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                       MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                     MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>>* this,
            void* param_1, PacketT* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b80 + 16;
        *(void**)(this + 16) = param_1;
        *(PacketT**)(this + 24) = param_2;
    }

    // 0x100ba3520, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator> >, MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                       MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>>::
        DeleteSelf(
            MakeSharedPoolRefCounter<PacketT<Array<unsigned char, eastl::allocator>>,
                                     MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::deallocate(pvVar1);
    }

} // namespace jag

class VorbisWorker {
public:
    // virtual methods in vtable order
    virtual ~VorbisWorker();
    virtual void OnInterval(float, unsigned long long);
    virtual void OnMessage(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&);
    virtual void OnResponse(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&);
    void SetWorkerOnResponse(std::function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)> const&);
    VorbisWorker();
};

class VorbisWorkerPacket {
public:
    void PacketT(unsigned long);
};

// 0x100b92a50, 16 bytes, inline, placed by debug map only (low confidence)
// VorbisWorkerPacket::PacketT(unsigned long)
void VorbisWorkerPacket::PacketT(ulong param_1) {
    PacketT(this, param_1);
}

// 0x100b92a60, 48 bytes, placed by debug map only (low confidence)
// stb_vorbis_get_info
undefined4* _stb_vorbis_get_info(undefined4* param_1, undefined4* param_2) {
    param_1[1] = param_2[1];
    *param_1 = *param_2;
    param_1[2] = param_2[2];
    param_1[3] = param_2[4];
    param_1[4] = param_2[3];
    param_1[5] = (int)param_2[37] >> 1;
    return param_1;
}

// 0x100b92db0, 32 bytes, placed by debug map only (low confidence)
// stb_vorbis_get_sample_offset
undefined4 _stb_vorbis_get_sample_offset(long param_1) {
    if (*(int*)(param_1 + 1388) == 0) {
        return 4294967295;
    }
    return *(undefined4*)(param_1 + 1384);
}

// 0x100b92dd0, 32 bytes, placed by debug map only (low confidence)
// stb_vorbis_get_error
undefined4 _stb_vorbis_get_error(long param_1) {
    undefined4 uVar1;

    uVar1 = *(undefined4*)(param_1 + 132);
    *(undefined4*)(param_1 + 132) = 0;
    return uVar1;
}

// 0x100b95280, 64 bytes, placed by debug map only (low confidence)
// stb_vorbis_get_file_offset
int _stb_vorbis_get_file_offset(long param_1) {
    int iVar1;
    long lVar2;

    iVar1 = 0;
    if (*(char*)(param_1 + 68) == '\0') {
        if (*(long*)(param_1 + 40) == 0) {
            lVar2 = _ftell(*(FILE**)(param_1 + 24));
            iVar1 = (int)lVar2 - *(int*)(param_1 + 32);
        } else {
            iVar1 = (int)*(long*)(param_1 + 40) - *(int*)(param_1 + 48);
        }
    }
    return iVar1;
}

// 0x100b952c0, 400 bytes, placed by debug map only (low confidence)
// stb_vorbis_seek_frame
undefined4 _stb_vorbis_seek_frame(vorbis* param_1, uint param_2) {
    int iVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    undefined4 unaff_R15D;
    int local_44;
    int local_40;
    int local_3c;
    int local_38;
    int local_34;

    if (param_1->field_68[0] == '\0') {
        iVar3 = jag::hal::audio::decoders::vorbis::seek_to_sample_coarse((stb_vorbis*)param_1, param_2);
        if (iVar3 != 0) {
            if (param_1->field_1388 == 0) {
                /* WARNING: Subroutine does not return */
                jag::LogAssert("f->current_loc_valid",
                               "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                               "workers/vorbis_std.code",
                               4509, (char*)0);
            }
            if (param_2 < param_1->field_1384) {
                /* WARNING: Subroutine does not return */
                jag::LogAssert("f->current_loc <= sample_number",
                               "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                               "workers/vorbis_std.code",
                               4510, (char*)0);
            }
            iVar3 = param_1->field_148;
            iVar1 = param_1->field_144;
            do {
                if (param_2 <= param_1->field_1384) {
                    if (param_1->field_1384 != param_2) {
                        /* WARNING: Subroutine does not return */
                        jag::LogAssert("f->current_loc == sample_number",
                                       "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                       "audio/workers/vorbis_std.code",
                                       4536, (char*)0);
                    }
                    return 1;
                }
                iVar4 = jag::hal::audio::decoders::vorbis::peek_decode_initial(
                    (stb_vorbis*)param_1, (int*)(stb_vorbis*)&local_38, &local_44, &local_34, &local_40, &local_3c);
                if (iVar4 == 0) {
                    jag::hal::audio::decoders::vorbis::error(param_1, 37);
                    bVar2 = false;
                    unaff_R15D = 0;
                } else {
                    uVar5 = (local_34 - local_38) + param_1->field_1384;
                    if (param_2 < uVar5) {
                        unaff_R15D = 1;
                        bVar2 = false;
                    } else {
                        if (param_2 < uVar5 + (iVar3 * 3 - iVar1 >> 2)) {
                            param_1->vorbis_pump_first_frame((stb_vorbis*)&local_38);
                        } else {
                            param_1->field_1384 = uVar5;
                            param_1->field_1248 = 0;
                            jag::hal::audio::decoders::vorbis::maybe_start_packet((stb_vorbis*)param_1);
                            jag::hal::audio::decoders::vorbis::flush_packet((stb_vorbis*)param_1);
                        }
                        bVar2 = true;
                    }
                }
            } while (bVar2);
            return unaff_R15D;
        }
    } else {
        jag::hal::audio::decoders::vorbis::error(param_1, 2);
    }
    return 0;
}

// 0x100b95a90, 176 bytes, placed by debug map only (low confidence)
// stb_vorbis_seek
undefined8 _stb_vorbis_seek(long param_1, uint param_2) {
    uint uVar1;
    undefined8 uVar3;
    undefined1 local_2c[4];

    if (_stb_vorbis_seek_frame() == 0) {
        uVar3 = 0;
    } else {
        uVar1 = *(uint*)(param_1 + 1384);
        uVar3 = 1;
        if (uVar1 != param_2) {
            _stb_vorbis_get_frame_float(param_1, local_2c, 0);
            if (param_2 <= uVar1) {
                /* WARNING: Subroutine does not return */
                jag::LogAssert("sample_number > frame_start",
                               "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                               "workers/vorbis_std.code",
                               4549, (char*)0);
            }
            if (*(int*)(param_1 + 1872) < (int)(*(int*)(param_1 + 1868) + (param_2 - uVar1))) {
                /* WARNING: Subroutine does not return */
                jag::LogAssert("f->channel_buffer_start + (int)(sample_number - frame_start) <= f->channel_buffer_end",
                               "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                               "workers/vorbis_std.code",
                               4550, (char*)0);
            }
            *(int*)(param_1 + 1868) = *(int*)(param_1 + 1868) + (param_2 - uVar1);
        }
    }
    return uVar3;
}

// 0x100b95b40, 224 bytes, placed by debug map only (low confidence)
// stb_vorbis_get_frame_float
undefined8 _stb_vorbis_get_frame_float(vorbis* param_1, uint* param_2, long* param_3, undefined8 param_4,
                                       int* param_5) {
    uint uVar1;
    int iVar2;
    undefined8 uVar3;
    ulong uVar4;
    int local_34;
    int local_30;
    uint local_2c;

    if (param_1->field_68[0] == '\0') {
        iVar2 = param_1->vorbis_decode_packet((stb_vorbis*)&local_2c, &local_30, &local_34, param_5);
        if (iVar2 != 0) {
            uVar3 = param_1->vorbis_finish_frame((stb_vorbis*)(ulong)local_2c, local_30, local_34, (int)param_5);
            uVar1 = param_1->field_4;
            if (0 < (int)uVar1) {
                uVar4 = 0;
                do {
                    *(long*)(param_1->field_1739 + uVar4 * 8 + -747) =
                        *(long*)(param_1->field_68 + uVar4 * 8 + 796) + (long)local_30 * 4;
                    uVar4 = uVar4 + 1;
                } while (uVar1 != uVar4);
            }
            *(int*)&param_1->field_1868 = local_30;
            *(int*)((long)&param_1->field_1868 + 4) = local_30 + (int)uVar3;
            if (param_2 != (uint*)0) {
                *param_2 = uVar1;
            }
            if (param_3 == (long*)0) {
                return uVar3;
            }
            *param_3 = (long)&param_1->field_992;
            return uVar3;
        }
        param_1->field_1868 = 0;
    } else {
        jag::hal::audio::decoders::vorbis::error(param_1, 2);
    }
    return 0;
}

// 0x100b95c20, 96 bytes, placed by debug map only (low confidence)
// stb_vorbis_seek_start
void _stb_vorbis_seek_start(vorbis* param_1) {
    stb_vorbis* psVar1;

    if (param_1->field_68[0] == '\0') {
        psVar1 = (stb_vorbis*)(ulong) * (uint*)&param_1->field_72;
        jag::hal::audio::decoders::vorbis::set_file_offset((stb_vorbis*)param_1, *(uint*)&param_1->field_72);
        param_1->field_1248 = 0;
        param_1->field_1741 = 1;
        param_1->field_1744 = -1;
        param_1->vorbis_pump_first_frame(psVar1);
    } else {
        jag::hal::audio::decoders::vorbis::error(param_1, 2);
    }
}

// 0x100b95d20, 416 bytes, placed by debug map only (low confidence)
// stb_vorbis_stream_length_in_samples
int _stb_vorbis_stream_length_in_samples(vorbis* param_1, undefined8 param_2, undefined8 param_3, uint* param_4) {
    uint uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    uchar local_3e[6];
    uint local_38;
    uint local_34;

    if (param_1->field_68[0] != '\0') {
        jag::hal::audio::decoders::vorbis::error(param_1, 2);
        return 0;
    }
    if (*(int*)&param_1->field_860 != 0)
        goto LAB_100b95e29;
    uVar1 = _stb_vorbis_get_file_offset(param_1);
    if ((param_1->field_64 < 65536) || (uVar5 = param_1->field_64 - 65536, uVar5 < *(uint*)&param_1->field_72)) {
        uVar5 = *(uint*)&param_1->field_72;
    }
    jag::hal::audio::decoders::vorbis::set_file_offset((stb_vorbis*)param_1, uVar5);
    iVar2 = param_1->vorbis_find_page((stb_vorbis*)&local_34, &local_38, param_4);
    if (iVar2 == 0) {
    LAB_100b95dea:
        param_1->field_132 = 36;
        *(undefined4*)&param_1->field_860 = 4294967295;
    } else {
        uVar5 = _stb_vorbis_get_file_offset(param_1);
        if (local_38 == 0) {
            jag::hal::audio::decoders::vorbis::set_file_offset((stb_vorbis*)param_1, local_34);
            iVar2 = param_1->vorbis_find_page((stb_vorbis*)&local_34, &local_38, param_4);
            if (iVar2 != 0) {
                do {
                    uVar5 = _stb_vorbis_get_file_offset(param_1);
                    if (local_38 != 0)
                        break;
                    jag::hal::audio::decoders::vorbis::set_file_offset((stb_vorbis*)param_1, local_34);
                    iVar2 = param_1->vorbis_find_page((stb_vorbis*)&local_34, &local_38, param_4);
                } while (iVar2 != 0);
            }
        }
        jag::hal::audio::decoders::vorbis::set_file_offset((stb_vorbis*)param_1, uVar5);
        jag::hal::audio::decoders::vorbis::getn((stb_vorbis*)param_1, local_3e, 6);
        iVar2 = jag::hal::audio::decoders::vorbis::get32((stb_vorbis*)param_1);
        iVar3 = jag::hal::audio::decoders::vorbis::get32((stb_vorbis*)param_1);
        if ((iVar2 == -1) && (iVar3 == -1))
            goto LAB_100b95dea;
        iVar4 = -2;
        if (iVar3 == 0) {
            iVar4 = iVar2;
        }
        *(int*)&param_1->field_860 = iVar4;
        *(uint*)&param_1->field_88 = uVar5;
        *(uint*)&param_1->field_92 = local_34;
        *(int*)&param_1->field_96 = iVar4;
    }
    jag::hal::audio::decoders::vorbis::set_file_offset((stb_vorbis*)param_1, uVar1);
LAB_100b95e29:
    iVar2 = 0;
    if (*(int*)&param_1->field_860 != -1) {
        iVar2 = *(int*)&param_1->field_860;
    }
    return iVar2;
}

// 0x100b96230, 48 bytes, placed by debug map only (low confidence)
// stb_vorbis_stream_length_in_seconds
float _stb_vorbis_stream_length_in_seconds(uint* param_1) {
    uint uVar1;

    uVar1 = _stb_vorbis_stream_length_in_samples();
    return (float)uVar1 / (float)*param_1;
}

// 0x100b96260, 240 bytes, placed by debug map only (low confidence)
// stb_vorbis_open_file_section
vorbis* _stb_vorbis_open_file_section(FILE* param_1, int param_2, stb_vorbis_alloc* param_3, stb_vorbis* param_4,
                                      uint param_5) {
    long lVar2;
    vorbis* this;
    vorbis local_790;
    long local_38;

    local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
    local_790.vorbis_init(param_4, param_3);
    local_790.field_24 = param_1;
    lVar2 = _ftell(param_1);
    local_790.field_32 = (uint)lVar2;
    local_790.field_36 = param_2;
    local_790.field_64 = param_5;
    if (jag::hal::audio::decoders::vorbis::start_decoder((stb_vorbis*)&local_790) != 0) {
        this = (vorbis*)local_790.vorbis_alloc(param_4);
        if (this != (vorbis*)0) {
            _memcpy(this, &local_790, 1880);
            vorbis_pump_first_frame((stb_vorbis*)&local_790);
            goto LAB_100b9631d;
        }
    }
    if (param_3 != (stb_vorbis_alloc*)0) {
        *(undefined4*)param_3 = local_790.field_132;
    }
    local_790.vorbis_deinit(param_4);
    this = (vorbis*)0;
LAB_100b9631d:
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
    return this;
}

// 0x100b96350, 128 bytes, placed by debug map only (low confidence)
// stb_vorbis_open_file
void _stb_vorbis_open_file(FILE* param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4) {
    ulong uVar1;
    long lVar2;

    uVar1 = _ftell(param_1);
    _fseek(param_1, 0, 2);
    lVar2 = _ftell(param_1);
    _fseek(param_1, uVar1 & 4294967295, 0);
    _stb_vorbis_open_file_section(param_1, param_2, param_3, param_4, (int)lVar2 - (int)uVar1);
}

// 0x100b963d0, 80 bytes, placed by debug map only (low confidence)
// stb_vorbis_open_filename
undefined8 _stb_vorbis_open_filename(char* param_1, undefined4* param_2, undefined8 param_3) {
    FILE* pFVar1;
    undefined8 uVar2;

    pFVar1 = _fopen(param_1, "rb");
    if (pFVar1 == (FILE*)0) {
        if (param_2 != (undefined4*)0) {
            *param_2 = 6;
        }
        uVar2 = 0;
    } else {
        uVar2 = _stb_vorbis_open_file(pFVar1, 1, param_2, param_3);
    }
    return uVar2;
}

// 0x100b96420, 240 bytes, placed by debug map only (low confidence)
// stb_vorbis_open_memory
vorbis* _stb_vorbis_open_memory(byte* param_1, uint param_2, stb_vorbis_alloc* param_3, stb_vorbis* param_4) {
    vorbis* this;
    vorbis local_788;
    long local_30;

    local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
    if (param_1 != (byte*)0) {
        local_788.vorbis_init(param_4, param_3);
        local_788.field_56 = param_1 + (int)param_2;
        local_788.field_68[0] = 0;
        local_788.field_40 = param_1;
        local_788.field_48 = (long)param_1;
        local_788.field_64 = param_2;
        if (jag::hal::audio::decoders::vorbis::start_decoder((stb_vorbis*)&local_788) != 0) {
            this = (vorbis*)local_788.vorbis_alloc(param_4);
            if (this != (vorbis*)0) {
                _memcpy(this, &local_788, 1880);
                vorbis_pump_first_frame((stb_vorbis*)&local_788);
                goto LAB_100b964e7;
            }
        }
        if (param_3 != (stb_vorbis_alloc*)0) {
            *(undefined4*)param_3 = local_788.field_132;
        }
        local_788.vorbis_deinit(param_4);
    }
    this = (vorbis*)0;
LAB_100b964e7:
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
    return this;
}

// 0x100b96510, 112 bytes, placed by debug map only (low confidence)
// stb_vorbis_get_frame_short
int _stb_vorbis_get_frame_short(long param_1, int param_2, short** param_3, int param_4) {
    int iVar1;
    float** local_38;

    iVar1 = _stb_vorbis_get_frame_float(param_1, 0, &local_38);
    if (param_4 < iVar1) {
        iVar1 = param_4;
    }
    if (iVar1 != 0) {
        jag::hal::audio::decoders::vorbis::convert_samples_short(param_2, param_3, 0, *(int*)(param_1 + 4), local_38, 0,
                                                                 iVar1);
    }
    return iVar1;
}

// 0x100b966c0, 160 bytes, placed by debug map only (low confidence)
// stb_vorbis_get_frame_short_interleaved
ulong _stb_vorbis_get_frame_short_interleaved(long param_1, int param_2, short* param_3, int param_4) {
    uint uVar1;
    ulong uVar2;
    short* local_48;
    float** local_40;

    local_48 = param_3;
    if (param_2 == 1) {
        uVar1 = _stb_vorbis_get_frame_short(param_1, 1, &local_48);
        uVar2 = (ulong)uVar1;
    } else {
        uVar2 = 0;
        uVar1 = _stb_vorbis_get_frame_float(param_1, 0, &local_40);
        if (uVar1 != 0) {
            uVar2 = (ulong)uVar1;
            if (param_4 < (int)(uVar1 * param_2)) {
                uVar2 = (long)param_4 / (long)param_2 & 4294967295;
            }
            jag::hal::audio::decoders::vorbis::convert_channels_short_interleaved(
                param_2, param_3, *(int*)(param_1 + 4), local_40, 0, (int)uVar2);
        }
    }
    return uVar2;
}

// 0x100b968e0, 176 bytes, placed by debug map only (low confidence)
// stb_vorbis_get_samples_short_interleaved
int _stb_vorbis_get_samples_short_interleaved(long param_1, int param_2, short* param_3, int param_4) {
    int iVar1;
    int iVar2;
    int iVar3;
    undefined1 local_48[8];
    float** local_40;

    param_4 = param_4 / param_2;
    local_40 = (float**)(param_1 + 864);
    iVar3 = 0;
    while (true) {
        if (param_4 - iVar3 == 0 || param_4 < iVar3) {
            return iVar3;
        }
        iVar1 = *(int*)(param_1 + 1872) - *(int*)(param_1 + 1868);
        iVar2 = param_4 - iVar3;
        if (iVar1 + iVar3 < param_4) {
            iVar2 = iVar1;
        }
        if (iVar2 != 0) {
            jag::hal::audio::decoders::vorbis::convert_channels_short_interleaved(
                param_2, param_3, *(int*)(param_1 + 4), local_40, *(int*)(param_1 + 1868), iVar2);
        }
        iVar3 = iVar3 + iVar2;
        *(int*)(param_1 + 1868) = *(int*)(param_1 + 1868) + iVar2;
        if (iVar3 == param_4)
            break;
        param_3 = param_3 + iVar2 * param_2;
        iVar2 = _stb_vorbis_get_frame_float(param_1, 0, local_48);
        if (iVar2 == 0) {
            return iVar3;
        }
    }
    return iVar3;
}

// 0x100b96990, 176 bytes, placed by debug map only (low confidence)
// stb_vorbis_get_samples_short
int _stb_vorbis_get_samples_short(long param_1, int param_2, short** param_3, int param_4) {
    int iVar1;
    int iVar2;
    int iVar3;
    undefined1 local_48[8];

    iVar3 = 0;
    while (true) {
        if (param_4 <= iVar3) {
            return iVar3;
        }
        iVar1 = *(int*)(param_1 + 1872) - *(int*)(param_1 + 1868);
        iVar2 = param_4 - iVar3;
        if (iVar1 + iVar3 < param_4) {
            iVar2 = iVar1;
        }
        if (iVar2 != 0) {
            jag::hal::audio::decoders::vorbis::convert_samples_short(param_2, param_3, iVar3, *(int*)(param_1 + 4),
                                                                     (float**)(param_1 + 864), *(int*)(param_1 + 1868),
                                                                     iVar2);
        }
        iVar3 = iVar3 + iVar2;
        *(int*)(param_1 + 1868) = *(int*)(param_1 + 1868) + iVar2;
        if (iVar3 == param_4)
            break;
        iVar2 = _stb_vorbis_get_frame_float(param_1, 0, local_48);
        if (iVar2 == 0) {
            return iVar3;
        }
    }
    return iVar3;
}

// 0x100b96a40, 352 bytes, placed by debug map only (low confidence)
// stb_vorbis_decode_filename
int _stb_vorbis_decode_filename(undefined8 param_1, int* param_2, undefined4* param_3, undefined8* param_4) {
    int iVar1;
    undefined4* puVar2;
    void* pvVar3;
    void* pvVar4;
    ulong uVar5;
    int iVar6;
    ulong uVar7;
    int iVar8;
    undefined1 local_4c[4];
    ulong local_48;
    undefined8* local_40;
    int local_34;

    puVar2 = (undefined4*)_stb_vorbis_open_filename(param_1, local_4c, 0);
    if (puVar2 == (undefined4*)0) {
        iVar8 = -1;
    } else {
        iVar8 = puVar2[1];
        *param_2 = iVar8;
        uVar5 = (long)iVar8 * 4096;
        if (param_3 != (undefined4*)0) {
            *param_3 = *puVar2;
        }
        pvVar3 = _malloc((long)iVar8 * 8192);
        if (pvVar3 == (void*)0) {
            iVar8 = -2;
        } else {
            iVar8 = 0;
            uVar7 = uVar5 & 4294967295;
            local_34 = 0;
            local_48 = uVar5;
            local_40 = param_4;
            do {
                iVar6 = (int)uVar7;
                iVar1 = _stb_vorbis_get_frame_short_interleaved(puVar2, puVar2[1],
                                                                (void*)((long)pvVar3 + (long)iVar8 * 2), iVar6 - iVar8);
                if (iVar1 == 0) {
                    iVar1 = 2;
                } else {
                    local_34 = local_34 + iVar1;
                    iVar8 = puVar2[1] * iVar1 + iVar8;
                    pvVar4 = pvVar3;
                    if (iVar6 < (int)local_48 + iVar8) {
                        uVar7 = (ulong)(uint)(iVar6 * 2);
                        pvVar4 = _realloc(pvVar3, (long)(iVar6 * 2) * 2);
                        if (pvVar4 == (void*)0) {
                            _free(pvVar3);
                            _stb_vorbis_close(puVar2);
                            pvVar4 = pvVar3;
                        } else if (pvVar4 != (void*)0)
                            goto LAB_100b96ac0;
                        iVar1 = 1;
                        pvVar3 = pvVar4;
                    } else {
                    LAB_100b96ac0:
                        iVar1 = 0;
                        pvVar3 = pvVar4;
                    }
                }
            } while (iVar1 == 0);
            if (iVar1 != 2) {
                return -2;
            }
            *local_40 = pvVar3;
            iVar8 = local_34;
        }
        _stb_vorbis_close(puVar2);
    }
    return iVar8;
}

// 0x100b96ba0, 352 bytes, placed by debug map only (low confidence)
// stb_vorbis_decode_memory
int _stb_vorbis_decode_memory(undefined8 param_1, undefined8 param_2, int* param_3, undefined4* param_4,
                              undefined8* param_5) {
    int iVar1;
    undefined4* puVar2;
    void* pvVar3;
    void* pvVar4;
    int iVar5;
    ulong uVar6;
    int iVar7;
    undefined1 local_4c[4];
    ulong local_48;
    undefined8* local_40;
    int local_34;

    puVar2 = (undefined4*)_stb_vorbis_open_memory(param_1, param_2, local_4c, 0);
    if (puVar2 == (undefined4*)0) {
        iVar7 = -1;
    } else {
        iVar7 = puVar2[1];
        *param_3 = iVar7;
        uVar6 = (long)iVar7 * 4096;
        if (param_4 != (undefined4*)0) {
            *param_4 = *puVar2;
        }
        pvVar3 = _malloc((long)iVar7 * 8192);
        if (pvVar3 == (void*)0) {
            iVar7 = -2;
        } else {
            iVar7 = 0;
            local_34 = 0;
            local_48 = uVar6;
            local_40 = param_5;
            do {
                iVar5 = (int)uVar6;
                iVar1 = _stb_vorbis_get_frame_short_interleaved(puVar2, puVar2[1],
                                                                (void*)((long)pvVar3 + (long)iVar7 * 2), iVar5 - iVar7);
                if (iVar1 == 0) {
                    iVar1 = 2;
                } else {
                    local_34 = local_34 + iVar1;
                    iVar7 = puVar2[1] * iVar1 + iVar7;
                    pvVar4 = pvVar3;
                    if (iVar5 < (int)local_48 + iVar7) {
                        uVar6 = (ulong)(uint)(iVar5 * 2);
                        pvVar4 = _realloc(pvVar3, (long)(iVar5 * 2) * 2);
                        if (pvVar4 == (void*)0) {
                            _free(pvVar3);
                            _stb_vorbis_close(puVar2);
                            pvVar4 = pvVar3;
                        } else if (pvVar4 != (void*)0)
                            goto LAB_100b96c20;
                        iVar1 = 1;
                        pvVar3 = pvVar4;
                    } else {
                    LAB_100b96c20:
                        iVar1 = 0;
                        pvVar3 = pvVar4;
                    }
                }
            } while (iVar1 == 0);
            if (iVar1 != 2) {
                return -2;
            }
            *local_40 = pvVar3;
            iVar7 = local_34;
        }
        _stb_vorbis_close(puVar2);
    }
    return iVar7;
}

// 0x100b96d00, 352 bytes, placed by debug map only (low confidence)
// stb_vorbis_get_samples_float_interleaved
ulong _stb_vorbis_get_samples_float_interleaved(long param_1, uint param_2, undefined4* param_3, int param_4) {
    uint uVar1;
    int iVar2;
    int iVar3;
    long lVar4;
    int iVar5;
    ulong uVar6;
    uint uVar7;
    long lVar8;
    undefined1 local_60[8];
    long local_58;
    ulong local_50;
    long local_48;
    int local_3c;
    uint local_34;

    local_34 = param_4 / (int)param_2;
    uVar1 = *(uint*)(param_1 + 4);
    if ((int)param_2 < (int)*(uint*)(param_1 + 4)) {
        uVar1 = param_2;
    }
    uVar6 = 0;
    do {
        iVar3 = (int)uVar6;
        if (local_34 - iVar3 == 0 || (int)local_34 < iVar3) {
            return uVar6;
        }
        local_48 = (long)*(int*)(param_1 + 1868);
        iVar2 = *(int*)(param_1 + 1872) - *(int*)(param_1 + 1868);
        iVar5 = local_34 - iVar3;
        if (iVar2 + iVar3 < (int)local_34) {
            iVar5 = iVar2;
        }
        local_50 = uVar6;
        if (0 < iVar5) {
            lVar4 = (long)iVar5;
            lVar8 = 0;
            uVar7 = param_2;
            local_58 = lVar4;
            local_3c = iVar5;
            do {
                if ((int)uVar1 < 1) {
                    uVar6 = 0;
                    if (0 < (int)uVar7)
                        goto LAB_100b96dd8;
                } else {
                    uVar6 = 0;
                    do {
                        *param_3 = *(undefined4*)(*(long*)(param_1 + 864 + uVar6 * 8) + (local_48 + lVar8) * 4);
                        param_3 = param_3 + 1;
                        uVar6 = uVar6 + 1;
                    } while (uVar1 != uVar6);
                    if ((int)uVar6 < (int)uVar7) {
                    LAB_100b96dd8:
                        uVar6 = (ulong)(~(uint)uVar6 + uVar7);
                        ___bzero(param_3, uVar6 * 4 + 4);
                        param_3 = param_3 + uVar6 + 1;
                        lVar4 = local_58;
                        uVar7 = param_2;
                        iVar5 = local_3c;
                    }
                }
                lVar8 = lVar8 + 1;
            } while (lVar8 < lVar4);
        }
        uVar7 = (int)local_50 + iVar5;
        uVar6 = (ulong)uVar7;
        *(int*)(param_1 + 1868) = (int)local_48 + iVar5;
        if (uVar7 == local_34) {
            return uVar6;
        }
        iVar3 = _stb_vorbis_get_frame_float(param_1, 0, local_60);
        if (iVar3 == 0) {
            return uVar6;
        }
    } while (true);
}

// 0x100b96e60, 336 bytes, placed by debug map only (low confidence)
// stb_vorbis_get_samples_float
ulong _stb_vorbis_get_samples_float(long param_1, uint param_2, long param_3, uint param_4) {
    ulong uVar1;
    long lVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    ulong uVar6;
    long lVar7;
    undefined1 local_70[8];
    ulong local_68;
    ulong local_58;
    long local_50;
    uint local_48;
    int local_34;

    uVar5 = *(uint*)(param_1 + 4);
    if ((int)param_2 < (int)*(uint*)(param_1 + 4)) {
        uVar5 = param_2;
    }
    local_68 = (ulong)uVar5;
    uVar6 = 0;
    local_50 = param_1;
    local_48 = param_4;
    while (true) {
        lVar2 = local_50;
        uVar1 = local_68;
        iVar4 = (int)uVar6;
        if ((int)param_4 <= iVar4) {
            return uVar6;
        }
        iVar3 = *(int*)(param_1 + 1872) - *(int*)(param_1 + 1868);
        local_34 = param_4 - iVar4;
        if (iVar3 + iVar4 < (int)param_4) {
            local_34 = iVar3;
        }
        local_58 = uVar6;
        if (local_34 != 0) {
            lVar7 = (long)local_34;
            uVar6 = 0;
            if (0 < (int)local_68) {
                do {
                    _memcpy((void*)((long)iVar4 * 4 + *(long*)(param_3 + uVar6 * 8)),
                            (void*)((long)*(int*)(lVar2 + 1868) * 4 + *(long*)(lVar2 + 864 + uVar6 * 8)), lVar7 << 2);
                    uVar6 = uVar6 + 1;
                } while (uVar1 != uVar6);
            }
            uVar1 = (ulong)param_2;
            if ((int)uVar6 < (int)param_2) {
                uVar6 = uVar6 & 4294967295;
                do {
                    ___bzero((long)iVar4 * 4 + *(long*)(param_3 + uVar6 * 8), lVar7 << 2);
                    uVar6 = uVar6 + 1;
                } while (uVar1 != uVar6);
            }
        }
        param_4 = local_48;
        param_1 = local_50;
        uVar5 = (int)local_58 + local_34;
        uVar6 = (ulong)uVar5;
        *(int*)(local_50 + 1868) = *(int*)(local_50 + 1868) + local_34;
        if (uVar5 == local_48)
            break;
        iVar4 = _stb_vorbis_get_frame_float(local_50, 0, local_70);
        if (iVar4 == 0) {
            return uVar6;
        }
    }
    return uVar6;
}

// 0x100b971a0, 160 bytes, inline, placed by class name and debug map
// VorbisWorker::OnResponse(jag::PacketT<jag::Array<unsigned char, eastl::allocator> >&)
void VorbisWorker::OnResponse(PacketT* param_1) {
    undefined4 uVar2;
    undefined8 uVar3;
    scoped_lock<std::mutex> local_20[8];

    std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 816));
    if (((this + 464))->operator_cast_to_bool()) {
        std::function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)>::operator()(
            (function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)>*)(this + 464), param_1);
    } else {
        uVar3 = jag::logger::default_logger();
        uVar2 = param_1->GetTextureAtlas();
        jag::logger::Logger::Log(
            uVar3, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/VorbisWorker.h",
            55, "No callback in m_WorkerOnMessage for %u bytes", uVar2);
    }
    std::scoped_lock<std::mutex>::~scoped_lock(local_20);
}

// 0x100b992a0, 48 bytes, inline, placed by debug map only (low confidence)
// VorbisWorkerPacket::PacketT(unsigned long)
void VorbisWorkerPacket::PacketT(ulong param_1) {
    new (this) jag::PacketT<jag::Array<unsigned char, eastl::allocator>>(param_1);
    new (this) jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 2048>();
}

// 0x100b9ef00, 16 bytes, placed by debug map only (low confidence)
// ldexp(float, int)
void ldexp(float param_1, int param_2) {
    _ldexpf();
}

// 0x100b9ef10, 16 bytes, placed by debug map only (low confidence)
// exp(float)
void exp(float param_1) {
    _expf();
}

// 0x100b9ef20, 16 bytes, placed by debug map only (low confidence)
// log(float)
void log(float param_1) {
    _logf();
}
