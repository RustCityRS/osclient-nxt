// libs/hal/audio/workers/VorbisWorker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.audio

namespace jag::hal::audio::decoders::vorbis {
    // 0x100b92aa0
    void vorbis_deinit(stb_vorbis* stb_vorbis) {
        long lVar1;
        long* plVar2;
        unsigned long uVar3;
        void* arg2;
        long lVar4;
        long lVar5;
        long lVar6;

        if ((*(long*)(stb_vorbis + 448) != 0) && (0 < *(int*)(stb_vorbis + 312))) {
            lVar1 = 0;
            do {
                lVar6 = *(long*)(stb_vorbis + 448);
                lVar4 = lVar1 * 32;
                if (*(long*)(lVar6 + 16 + lVar4) != 0) {
                    plVar2 = (long*)(lVar6 + lVar4 + 16);
                    if (0 < *(int*)(*(long*)(stb_vorbis + 160) + 4 +
                                    (unsigned long)*(uint8_t*)(lVar6 + 13 + lVar4) * 2120)) {
                        lVar5 = 0;
                        do {
                            setup_free(stb_vorbis, *(void**)(*plVar2 + lVar5 * 8));
                            lVar5 = lVar5 + 1;
                        } while (lVar5 < *(int*)(*(long*)(stb_vorbis + 160) + 4 +
                                                 (unsigned long)*(uint8_t*)(lVar6 + lVar4 + 13) * 2120));
                    }
                    setup_free(stb_vorbis, (void*)*plVar2);
                }
                setup_free(stb_vorbis, *(void**)(lVar6 + 24 + lVar4));
                lVar1 = lVar1 + 1;
            } while (lVar1 < *(int*)(stb_vorbis + 312));
        }
        if (*(long*)(stb_vorbis + 160) != 0) {
            if (0 < *(int*)(stb_vorbis + 152)) {
                lVar1 = 8;
                lVar6 = 0;
                do {
                    lVar4 = *(long*)(stb_vorbis + 160);
                    setup_free(stb_vorbis, *(void**)(lVar4 + lVar1));
                    setup_free(stb_vorbis, *(void**)(lVar4 + 24 + lVar1));
                    setup_free(stb_vorbis, *(void**)(lVar4 + 32 + lVar1));
                    setup_free(stb_vorbis, *(void**)(lVar4 + 2088 + lVar1));
                    lVar4 = *(long*)(lVar4 + 2096 + lVar1);
                    arg2 = (void*)(lVar4 - 4);
                    if (lVar4 == 0) {
                        arg2 = nullptr;
                    }
                    setup_free(stb_vorbis, arg2);
                    lVar6 = lVar6 + 1;
                    lVar1 = lVar1 + 2120;
                } while (lVar6 < *(int*)(stb_vorbis + 152));
            }
            setup_free(stb_vorbis, *(void**)(stb_vorbis + 160));
        }
        setup_free(stb_vorbis, *(void**)(stb_vorbis + 304));
        setup_free(stb_vorbis, *(void**)(stb_vorbis + 448));
        if (*(long*)(stb_vorbis + 464) != 0) {
            if (0 < *(int*)(stb_vorbis + 456)) {
                lVar6 = 8;
                lVar1 = 0;
                do {
                    setup_free(stb_vorbis, *(void**)(*(long*)(stb_vorbis + 464) + lVar6));
                    lVar1 = lVar1 + 1;
                    lVar6 = lVar6 + 48;
                } while (lVar1 < *(int*)(stb_vorbis + 456));
            }
            setup_free(stb_vorbis, *(void**)(stb_vorbis + 464));
        }
        if (0 < *(int*)(stb_vorbis + 4)) {
            uVar3 = 0;
            do {
                setup_free(stb_vorbis, *(void**)(stb_vorbis + uVar3 * 8 + 864));
                setup_free(stb_vorbis, *(void**)(stb_vorbis + uVar3 * 8 + 1120));
                setup_free(stb_vorbis, *(void**)(stb_vorbis + uVar3 * 8 + 1256));
                if (14 < uVar3)
                    break;
                uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)*(int*)(stb_vorbis + 4));
        }
        lVar1 = 182;
        do {
            setup_free(stb_vorbis, *(void**)(stb_vorbis + lVar1 * 8 - 64));
            setup_free(stb_vorbis, *(void**)(stb_vorbis + lVar1 * 8 - 48));
            setup_free(stb_vorbis, *(void**)(stb_vorbis + lVar1 * 8 - 32));
            setup_free(stb_vorbis, *(void**)(stb_vorbis + lVar1 * 8 - 16));
            setup_free(stb_vorbis, *(void**)(stb_vorbis + lVar1 * 8));
            lVar1 = lVar1 + 1;
        } while (lVar1 == 183);
        if (*(int*)(stb_vorbis + 36) != 0) {
            _fclose(*(FILE**)(stb_vorbis + 24));
        }
    }

    // 0x100b92d90
    void setup_free(stb_vorbis* stb_vorbis, void* arg2) {
        if (*(long*)(stb_vorbis + 104) == 0) {
            _free(arg2);
            return;
        }
    }

    // 0x100b92df0
    void error(stb_vorbis* stb_vorbis, STBVorbisError stbVorbisError) {
        *(STBVorbisError*)(stb_vorbis + 132) = stbVorbisError;
    }

    // 0x100b92e00
    int vorbis_search_for_page_pushdata(stb_vorbis* stb_vorbis, unsigned char* arg2, int arg3) {
        uint8_t bVar1;
        uint64_t uVar2;
        uint32_t uVar4;
        unsigned int arg1;
        long lVar5;
        int iVar6;
        int iVar7;
        unsigned int uVar8;
        long lVar9;
        unsigned char* puVar10;
        unsigned long uVar11;
        unsigned char* puVar12;
        int iVar13;

        unsigned int uVar3 = *(unsigned int*)(stb_vorbis + 1784);
        if (0 < (int)uVar3) {
            lVar9 = 0;
            do {
                *(uint32_t*)(stb_vorbis + lVar9 + 1800) = 0;
                lVar9 = lVar9 + 20;
            } while ((unsigned long)uVar3 * 20 != lVar9);
        }
        if ((int)uVar3 < 4) {
            if (arg3 < 4) {
                return 0;
            }
            iVar6 = arg3 - 3;
            puVar10 = arg2 + 27;
            lVar9 = 0;
            puVar12 = arg2;
            do {
                if ((arg2[lVar9] == 'O') && (*(int*)(arg2 + lVar9) == ogg_page_header._0_4_)) {
                    arg3 = (int)lVar9;
                    if ((iVar6 <= arg3 + 26) ||
                        (bVar1 = arg2[lVar9 + 26], iVar6 <= (int)((unsigned int)bVar1 + arg3 + 27)))
                        break;
                    iVar13 = bVar1 + 27;
                    if (bVar1 != 0) {
                        uVar11 = 0;
                        do {
                            iVar13 = iVar13 + (unsigned int)puVar10[uVar11];
                            uVar11 = uVar11 + 1;
                        } while ((unsigned int)bVar1 != uVar11);
                    }
                    uVar3 = 0;
                    lVar5 = -22;
                    do {
                        uVar3 = crc32_update(uVar3, puVar12[lVar5 + 22]);
                        lVar5 = lVar5 + 1;
                    } while (lVar5 != 0);
                    iVar7 = 4;
                    do {
                        uVar3 = crc32_update(uVar3, '\0');
                        iVar7 = iVar7 - 1;
                    } while (iVar7 != 0);
                    lVar5 = (long)*(int*)(stb_vorbis + 1784);
                    iVar7 = *(int*)(stb_vorbis + 1784) + 1;
                    *(int*)(stb_vorbis + 1784) = iVar7;
                    *(int*)(stb_vorbis + lVar5 * 20 + 1792) = iVar13 - 26;
                    *(unsigned int*)(stb_vorbis + lVar5 * 20 + 1796) = uVar3;
                    *(uint32_t*)(stb_vorbis + lVar5 * 20 + 1788) = *(uint32_t*)(arg2 + lVar9 + 22);
                    if (arg2[(arg3 + 26 + (unsigned int)arg2[lVar9 + 26])] == 255) {
                        uVar4 = 4294967295;
                    } else {
                        uVar4 = *(uint32_t*)(arg2 + lVar9 + 6);
                    }
                    *(uint32_t*)(stb_vorbis + lVar5 * 20 + 1804) = uVar4;
                    *(int*)(stb_vorbis + lVar5 * 20 + 1800) = arg3 + 26;
                    arg3 = iVar6;
                    if (iVar7 == 4)
                        break;
                }
                lVar9 = lVar9 + 1;
                puVar10 = puVar10 + 1;
                puVar12 = puVar12 + 1;
                arg3 = iVar6;
            } while (lVar9 < iVar6);
        }
        iVar6 = 0;
        while (true) {
            while (true) {
                iVar13 = *(int*)(stb_vorbis + 1784);
                if (iVar13 <= iVar6) {
                    return arg3;
                }
                lVar9 = (long)iVar6;
                iVar7 = *(int*)(stb_vorbis + lVar9 * 20 + 1800);
                uVar3 = *(unsigned int*)(stb_vorbis + lVar9 * 20 + 1792);
                arg1 = *(unsigned int*)(stb_vorbis + lVar9 * 20 + 1796);
                uVar8 = arg3 - iVar7;
                if ((int)uVar3 <= arg3 - iVar7) {
                    uVar8 = uVar3;
                }
                if (0 < (int)uVar8) {
                    uVar11 = 0;
                    do {
                        arg1 = crc32_update(arg1, arg2[uVar11 + (long)iVar7]);
                        uVar11 = uVar11 + 1;
                    } while (uVar8 != uVar11);
                }
                *(unsigned int*)(stb_vorbis + lVar9 * 20 + 1792) = uVar3 - uVar8;
                *(unsigned int*)(stb_vorbis + lVar9 * 20 + 1796) = arg1;
                if (uVar3 - uVar8 == 0)
                    break;
                iVar6 = iVar6 + 1;
            }
            if (arg1 == *(unsigned int*)(stb_vorbis + lVar9 * 20 + 1788))
                break;
            lVar5 = (long)iVar13 - 1;
            *(int*)(stb_vorbis + 1784) = (int)lVar5;
            *(uint32_t*)(stb_vorbis + lVar9 * 20 + 1804) = *(uint32_t*)(stb_vorbis + lVar5 * 20 + 1804);
            uVar2 = *(uint64_t*)(stb_vorbis + lVar5 * 20 + 1788 + 8);
            *(uint64_t*)(stb_vorbis + lVar9 * 20 + 1788) = *(uint64_t*)(stb_vorbis + lVar5 * 20 + 1788);
            *(uint64_t*)(stb_vorbis + lVar9 * 20 + 1796) = uVar2;
        }
        *(uint32_t*)(stb_vorbis + 1784) = 4294967295;
        *(uint32_t*)(stb_vorbis + 1248) = 0;
        *(uint32_t*)(stb_vorbis + 1744) = 4294967295;
        iVar6 = *(int*)(stb_vorbis + lVar9 * 20 + 1804);
        *(int*)(stb_vorbis + 1384) = iVar6;
        *(unsigned int*)(stb_vorbis + 1388) = (unsigned int)(iVar6 != -1);
        return uVar8 + iVar7;
    }

    // 0x100b93120
    void is_whole_packet_present(stb_vorbis* stb_vorbis, int arg2) {
        uint8_t bVar1;
        int* piVar2;
        bool bVar3;
        bool bVar4;
        unsigned int uVar5;
        int* piVar7;
        stb_vorbis* psVar8;
        STBVorbisError SVar10;
        unsigned int uVar11;
        unsigned long uVar12;

        unsigned long uVar6 = (unsigned long)*(int*)(stb_vorbis + 1744);
        int* piVar9 = *(int**)(stb_vorbis + 40);
        if (uVar6 == 18446744073709551615) {
            bVar4 = true;
            uVar12 = 4294967295;
        LAB_100b931d0:
            do {
                if ((int)uVar12 != -1) {
                    return 1;
                }
                piVar2 = *(int**)(stb_vorbis + 56);
                uVar12 = 4294967295;
                SVar10 = 1;
                piVar7 = piVar9;
                if ((int*)((long)piVar9 + 26U) < piVar2) {
                    if ((*piVar9 != ogg_page_header._0_4_) || ((char)piVar9[1] != '\0')) {
                        SVar10 = 21;
                        goto LAB_100b93208;
                    }
                    if (!bVar4) {
                        if ((*(uint8_t*)((long)piVar9 + 5) & 1) != 0)
                            goto LAB_100b9324b;
                        SVar10 = 21;
                        bVar4 = false;
                        goto LAB_100b93208;
                    }
                    if ((*(int*)(stb_vorbis + 1248) != 0) && ((*(uint8_t*)((long)piVar9 + 5) & 1) != 0)) {
                        SVar10 = 21;
                        bVar4 = true;
                        goto LAB_100b93208;
                    }
                LAB_100b9324b:
                    bVar1 = *(uint8_t*)((long)piVar9 + 26);
                    piVar7 = (int*)((long)piVar9 + (unsigned long)bVar1 + 27);
                    if (piVar2 < piVar7) {
                    LAB_100b932b7:
                        goto LAB_100b93208;
                    }
                    if (bVar1 == 0) {
                        uVar12 = 0;
                    } else {
                        uVar12 = 0;
                        do {
                            uVar6 = (unsigned long)*(uint8_t*)((long)piVar9 + uVar12 + 27);
                            piVar7 = (int*)((long)piVar7 + uVar6);
                            if (uVar6 != 255)
                                goto LAB_100b93292;
                            uVar12 = uVar12 + 1;
                        } while (bVar1 != uVar12);
                        uVar12 = (unsigned long)(unsigned int)bVar1;
                    }
                LAB_100b93292:
                    uVar11 = (unsigned int)uVar12;
                    if ((arg2 != 0) && ((int)uVar11 < (int)(bVar1 - 1))) {
                        SVar10 = 21;
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
                    error(stb_vorbis, SVar10);
                    bVar3 = false;
                }
                piVar9 = piVar7;
            } while (bVar3);
        } else {
            uVar11 = *(unsigned int*)(stb_vorbis + 1480);
            if (*(int*)(stb_vorbis + 1744) < (int)uVar11) {
                psVar8 = stb_vorbis + uVar6 + 1484;
                do {
                    piVar9 = (int*)((long)piVar9 + (unsigned long)(uint8_t)*psVar8);
                    if ((unsigned long)(uint8_t)*psVar8 != 255)
                        goto LAB_100b9317c;
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (unsigned long)uVar5;
                    psVar8 = psVar8 + 1;
                } while (uVar11 != uVar5);
                uVar6 = (unsigned long)uVar11;
            }
        LAB_100b9317c:
            if ((arg2 == 0) || (SVar10 = 21, (int)(uVar11 - 1) <= (int)(unsigned int)uVar6)) {
                uVar12 = 4294967295;
                if ((unsigned int)uVar6 != uVar11) {
                    uVar12 = uVar6 & 4294967295;
                }
                bVar4 = false;
                SVar10 = 1;
                if (piVar9 <= *(int**)(stb_vorbis + 56))
                    goto LAB_100b931d0;
            }
            error(stb_vorbis, SVar10);
        }
        return 0;
    }

    // 0x100b932e0
    void vorbis_decode_packet(stb_vorbis* stb_vorbis, int* arg2, int* arg3, int* arg4) {
        uint64_t uVar2;
        int* in_stack_ffffffffffffffc0;
        int local_34;
        int local_30;
        int local_2c;

        if (vorbis_decode_initial(stb_vorbis, arg3, &local_34, arg4, &local_2c, &local_30) == 0) {
            uVar2 = 0;
        } else {
            uVar2 = vorbis_decode_packet_rest(stb_vorbis, arg2, (Mode*)(stb_vorbis + (long)local_30 * 6 + 476), *arg3,
                                              *arg4, local_2c, (int)arg3, in_stack_ffffffffffffffc0);
        }
        return uVar2;
    }

    // 0x100b93360
    void get8_packet(stb_vorbis* stb_vorbis) {
        get8_packet_raw(stb_vorbis);
        *(uint32_t*)(stb_vorbis + 1760) = 0;
    }

    // 0x100b93380
    int vorbis_finish_frame(stb_vorbis* stb_vorbis, int arg2, int arg3, int arg4) {
        unsigned int uVar2;
        long lVar3;
        long lVar4;
        unsigned int uVar5;
        long lVar6;
        unsigned long uVar8;
        unsigned long uVar9;
        int iVar10;

        unsigned int uVar1 = *(unsigned int*)(stb_vorbis + 1248);
        unsigned long uVar7 = (unsigned long)uVar1;
        if (uVar7 != 0) {
            lVar4 = get_window(stb_vorbis, uVar1);
            uVar2 = *(unsigned int*)(stb_vorbis + 4);
            if (0 < (int)uVar2) {
                uVar9 = 0;
                do {
                    if (0 < (int)uVar1) {
                        lVar3 = *(long*)(stb_vorbis + uVar9 * 8 + 1120);
                        lVar6 = *(long*)(stb_vorbis + uVar9 * 8 + 864) + (long)arg3 * 4;
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
        *(int*)(stb_vorbis + 1248) = arg2 - arg4;
        uVar1 = *(unsigned int*)(stb_vorbis + 4);
        if (0 < (int)uVar1) {
            uVar9 = 0;
            do {
                if (arg4 < arg2) {
                    lVar4 = *(long*)(stb_vorbis + uVar9 * 8 + 1120);
                    lVar3 = *(long*)(stb_vorbis + uVar9 * 8 + 864);
                    uVar8 = 0;
                    do {
                        *(uint32_t*)(lVar4 + uVar8 * 4) = *(uint32_t*)(lVar3 + (long)arg4 * 4 + uVar8 * 4);
                        uVar8 = uVar8 + 1;
                    } while ((unsigned int)(arg2 - arg4) != uVar8);
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 != uVar1);
        }
        if (uVar7 == 0) {
            iVar10 = 0;
        } else {
            if (arg2 < arg4) {
                arg4 = arg2;
            }
            iVar10 = arg4 - arg3;
            *(int*)(stb_vorbis + 1780) = *(int*)(stb_vorbis + 1780) + iVar10;
        }
        return iVar10;
    }

    // 0x100b934e0
    void vorbis_init(stb_vorbis* stb_vorbis, stb_vorbis_alloc* stb_vorbis_alloc) {
        uint64_t uVar1;
        unsigned int uVar2;

        ___bzero(stb_vorbis, 1880);
        if (stb_vorbis_alloc != nullptr) {
            uVar1 = *(uint64_t*)(stb_vorbis_alloc + 8);
            *(uint64_t*)(stb_vorbis + 104) = *(uint64_t*)stb_vorbis_alloc;
            *(uint64_t*)(stb_vorbis + 112) = uVar1;
            uVar2 = *(int*)(stb_vorbis + 112) + 3U & 4294967292;
            *(unsigned int*)(stb_vorbis + 112) = uVar2;
            *(unsigned int*)(stb_vorbis + 124) = uVar2;
        }
        *(uint64_t*)(stb_vorbis + 128) = 0;
        *(uint64_t*)(stb_vorbis + 40) = 0;
        *(uint64_t*)(stb_vorbis + 160) = 0;
        *(uint32_t*)(stb_vorbis + 1784) = 4294967295;
        *(uint32_t*)(stb_vorbis + 36) = 0;
        *(uint64_t*)(stb_vorbis + 24) = 0;
    }

    // 0x100b93550
    void start_decoder(stb_vorbis* stb_vorbis) {
        Codebook* pCVar1;
        bool bVar2;
        char cVar3;
        uint8_t bVar4;
        uint8_t bVar5;
        char cVar7;
        uint8_t uVar8;
        unsigned short uVar10;
        short sVar11;
        uint16_t uVar12;
        unsigned int uVar14;
        int iVar15;
        unsigned int uVar16;
        uint32_t uVar17;
        unsigned long uVar18;
        void* pvVar19;
        unsigned int* puVar20;
        uint32_t* puVar21;
        unsigned int* puVar22;
        unsigned int uVar24;
        long lVar25;
        float* pfVar26;
        long lVar27;
        unsigned long uVar28;
        stb_vorbis* psVar29;
        STBVorbisError SVar30;
        long lVar31;
        int iVar32;
        unsigned int* puVar33;
        unsigned short* arg1;
        int iVar34;
        uint8_t* pbVar35;
        uint8_t* pbVar36;
        uint8_t local_488[4];
        uint8_t local_484[4];
        uint8_t* local_480;
        unsigned char local_476[6];
        unsigned int* local_470;
        uint64_t local_468;
        uint8_t* local_460;
        uint8_t* local_458;
        uint64_t local_450;
        unsigned int* local_448;
        unsigned int* local_440;
        long local_438;
        unsigned int* local_430;
        unsigned short local_428;
        uint8_t abStack_426[1006];

        int iVar13 = start_page(stb_vorbis);
        uint64_t uVar23 = 0;
        if (iVar13 == 0)
            goto LAB_100b935f5;
        stb_vorbis sVar9 = stb_vorbis[1739];
        if ((((((uint8_t)sVar9 & 2) == 0) || (((uint8_t)sVar9 & 4) != 0)) || (((uint8_t)sVar9 & 1) != 0)) ||
            (((*(int*)(stb_vorbis + 1480) != 1 || (stb_vorbis[1484] != (stb_vorbis)30)) ||
              (cVar3 = get8(stb_vorbis), cVar3 != '\x01')))) {
        LAB_100b935e8:
            SVar30 = 34;
        } else {
            iVar13 = getn(stb_vorbis, local_476, 6);
            if (iVar13 != 0) {
                iVar13 = vorbis_validate(local_476);
                if ((iVar13 != 0) && (iVar13 = get32(stb_vorbis), iVar13 == 0)) {
                    bVar4 = get8(stb_vorbis);
                    *(unsigned int*)(stb_vorbis + 4) = (unsigned int)bVar4;
                    if (bVar4 != 0) {
                        if (16 < bVar4) {
                            SVar30 = 5;
                            goto LAB_100b935f0;
                        }
                        iVar13 = get32(stb_vorbis);
                        *(int*)stb_vorbis = iVar13;
                        if (iVar13 != 0) {
                            get32(stb_vorbis);
                            get32(stb_vorbis);
                            get32(stb_vorbis);
                            bVar5 = get8(stb_vorbis);
                            uVar24 = bVar5 & 15;
                            bVar4 = bVar5 >> 4;
                            *(int*)(stb_vorbis + 144) = 1 << (int8_t)uVar24;
                            *(int*)(stb_vorbis + 148) = 1 << bVar4;
                            if (((uVar24 - 6 < 8) && (-1 < (char)(bVar5 + 160))) &&
                                (uVar24 < bVar4 || uVar24 == bVar4)) {
                                uVar18 = get8(stb_vorbis);
                                if ((uVar18 & 1) == 0)
                                    goto LAB_100b935e8;
                                iVar13 = start_page(stb_vorbis);
                                if ((iVar13 == 0) || (iVar13 = start_packet(stb_vorbis), iVar13 == 0))
                                    goto LAB_100b935f5;
                                do {
                                    iVar13 = next_segment(stb_vorbis);
                                    skip(stb_vorbis, iVar13);
                                    stb_vorbis[1740] = (stb_vorbis)0;
                                } while (iVar13 != 0);
                                iVar13 = start_packet(stb_vorbis);
                                if (iVar13 == 0)
                                    goto LAB_100b935f5;
                                if ((stb_vorbis[68] != (stb_vorbis)0) &&
                                    (iVar13 = is_whole_packet_present(stb_vorbis, 1), iVar13 == 0)) {
                                    if (*(int*)(stb_vorbis + 132) == 21) {
                                        *(uint32_t*)(stb_vorbis + 132) = 20;
                                    }
                                    goto LAB_100b935f5;
                                }
                                crc32_init();
                                iVar13 = get8_packet(stb_vorbis);
                                if (iVar13 == 5) {
                                    lVar25 = 0;
                                    do {
                                        local_476[lVar25] = get8_packet(stb_vorbis);
                                        lVar25 = lVar25 + 1;
                                    } while (lVar25 != 6);
                                    iVar13 = vorbis_validate(local_476);
                                    if (iVar13 == 0) {
                                    LAB_100b951c6:
                                        SVar30 = 20;
                                    } else {
                                        iVar13 = get_bits(stb_vorbis, 8);
                                        *(int*)(stb_vorbis + 152) = iVar13 + 1;
                                        lVar25 = setup_malloc(stb_vorbis, (iVar13 + 1) * 2120);
                                        *(long*)(stb_vorbis + 160) = lVar25;
                                        if (lVar25 != 0) {
                                            ___bzero(lVar25, (long)*(int*)(stb_vorbis + 152) * 2120);
                                            if (0 < *(int*)(stb_vorbis + 152)) {
                                                local_458 = nullptr;
                                                do {
                                                    local_430 = *(unsigned int**)(stb_vorbis + 160);
                                                    cVar3 = get_bits(stb_vorbis, 8);
                                                    if (((cVar3 == 'B') &&
                                                         (cVar3 = get_bits(stb_vorbis, 8), cVar3 == 'C')) &&
                                                        (cVar3 = get_bits(stb_vorbis, 8), puVar20 = local_430,
                                                         pbVar35 = local_458, cVar3 == 'V')) {
                                                        lVar25 = (long)local_458 * 2120;
                                                        pCVar1 = (Codebook*)(local_430 + (long)local_458 * 530);
                                                        uVar24 = get_bits(stb_vorbis, 8);
                                                        iVar13 = get_bits(stb_vorbis, 8);
                                                        *(unsigned int*)pCVar1 = uVar24 & 255 | iVar13 << 8;
                                                        local_468 = pCVar1;
                                                        uVar24 = get_bits(stb_vorbis, 8);
                                                        uVar14 = get_bits(stb_vorbis, 8);
                                                        iVar13 = get_bits(stb_vorbis, 8);
                                                        puVar20[pbVar35 * 530 + 1] =
                                                            uVar24 & 255 | (uVar14 & 255) << 8 | iVar13 << 16;
                                                        local_438 = lVar25;
                                                        iVar13 = get_bits(stb_vorbis, 1);
                                                        bVar4 = 0;
                                                        if (iVar13 == 0) {
                                                            bVar4 = get_bits(stb_vorbis, 1);
                                                        }
                                                        local_448 = (unsigned int*)((long)local_430 + local_438 + 4);
                                                        *(uint8_t*)((long)local_430 + local_438 + 27) = bVar4;
                                                        if (bVar4 == 0) {
                                                            local_440 =
                                                                (unsigned int*)setup_malloc(stb_vorbis, *local_448);
                                                            *(unsigned int**)((long)local_430 + local_438 + 8) =
                                                                local_440;
                                                        } else {
                                                            local_440 = (unsigned int*)setup_temp_malloc(stb_vorbis,
                                                                                                         *local_448);
                                                        }
                                                        if (local_440 == nullptr)
                                                            goto LAB_100b93ec8;
                                                        local_460 = (uint8_t*)((long)local_430 + local_438 + 27);
                                                        if (iVar13 != 0) {
                                                            iVar15 = get_bits(stb_vorbis, 5);
                                                            iVar15 = iVar15 + 1;
                                                            local_450 = local_450 & 18446744069414584320;
                                                            iVar13 = 0;
                                                            do {
                                                                iVar32 = *local_448 - iVar13;
                                                                if (iVar32 == 0 || (int)*local_448 < iVar13)
                                                                    goto LAB_100b93a86;
                                                                iVar32 = ilog(iVar32);
                                                                iVar32 = get_bits(stb_vorbis, iVar32);
                                                                iVar34 = iVar32 + iVar13;
                                                                uVar24 = *local_448;
                                                                if ((int)uVar24 < iVar34) {
                                                                    error(stb_vorbis, 20);
                                                                } else {
                                                                    _memset((uint8_t*)((long)iVar13 + (long)local_440),
                                                                            iVar15, (long)iVar32);
                                                                    iVar15 = iVar15 + 1;
                                                                    iVar13 = iVar34;
                                                                }
                                                                iVar32 = 1;
                                                            } while (iVar34 <= (int)uVar24);
                                                            goto LAB_100b93efd;
                                                        }
                                                        if ((int)*local_448 < 1) {
                                                            local_450 = (unsigned long)local_450._4_4_ << 32;
                                                        } else {
                                                            lVar25 = 0;
                                                            local_450 = (unsigned long)local_450._4_4_ << 32;
                                                            do {
                                                                if (*local_460 == 0) {
                                                                    iVar13 = 1;
                                                                } else {
                                                                    iVar13 = get_bits(stb_vorbis, 1);
                                                                }
                                                                if (iVar13 == 0) {
                                                                    *(uint8_t*)((long)local_440 + lVar25) = 255;
                                                                } else {
                                                                    cVar3 = get_bits(stb_vorbis, 5);
                                                                    *(uint8_t*)((long)local_440 + lVar25) = cVar3 + 1;
                                                                    local_450 = (((uint64_t)local_450._4_4_ << 32) |
                                                                                 (uint32_t)((int)local_450 + 1));
                                                                }
                                                                lVar25 = lVar25 + 1;
                                                            } while (lVar25 < (int)*local_448);
                                                        }
                                                    LAB_100b93a86:
                                                        if (*local_460 != 0) {
                                                            uVar24 = *local_448;
                                                            if ((int)uVar24 >> 2 <= (int)local_450) {
                                                                if (*(int*)(stb_vorbis + 16) < (int)uVar24) {
                                                                    *(unsigned int*)(stb_vorbis + 16) = uVar24;
                                                                }
                                                                pvVar19 = (void*)setup_malloc(stb_vorbis, uVar24);
                                                                puVar22 = local_440;
                                                                puVar20 = local_448;
                                                                *(void**)((long)local_430 + local_438 + 8) = pvVar19;
                                                                if (pvVar19 == nullptr)
                                                                    goto LAB_100b93ec8;
                                                                pbVar35 = (uint8_t*)((long)local_430 + local_438 + 8);
                                                                _memcpy(pvVar19, local_440, (long)(int)*local_448);
                                                                setup_temp_free(stb_vorbis, puVar22, *puVar20);
                                                                local_440 = *(unsigned int**)pbVar35;
                                                                *local_460 = 0;
                                                            }
                                                        }
                                                        bVar4 = *local_460;
                                                        if (bVar4 == 0) {
                                                            if ((int)*local_448 < 1) {
                                                                local_450 = (unsigned long)local_450._4_4_ << 32;
                                                            } else {
                                                                uVar18 = 0;
                                                                local_450 = (unsigned long)local_450._4_4_ << 32;
                                                                do {
                                                                    local_450 =
                                                                        (((uint64_t)local_450._4_4_ << 32) |
                                                                         (uint32_t)((int)local_450 +
                                                                                    (unsigned int)((uint8_t)(*(uint8_t*)((long)
                                                                                                                             local_440 +
                                                                                                                         uVar18) -
                                                                                                             11) <
                                                                                                   244)));
                                                                    uVar18 = uVar18 + 1;
                                                                } while (*local_448 != uVar18);
                                                            }
                                                        }
                                                        local_470 = (unsigned int*)((long)local_430 + local_438 + 2112);
                                                        *(int*)((long)local_430 + local_438 + 2112) = (int)local_450;
                                                        if (bVar4 == 0) {
                                                            lVar25 = setup_malloc(stb_vorbis, *local_448 << 2);
                                                            *(long*)((long)local_430 + local_438 + 40) = lVar25;
                                                            if (lVar25 == 0)
                                                                goto LAB_100b93ec8;
                                                            puVar20 = nullptr;
                                                        } else {
                                                            if ((int)local_450 == 0) {
                                                                puVar20 = nullptr;
                                                            LAB_100b93c7d:
                                                                uVar24 = *local_470 * 8 + *local_448;
                                                                bVar2 = true;
                                                                if (*(unsigned int*)(stb_vorbis + 16) < uVar24) {
                                                                    *(unsigned int*)(stb_vorbis + 16) = uVar24;
                                                                }
                                                            } else {
                                                                lVar25 = setup_malloc(stb_vorbis, (int)local_450);
                                                                *(long*)((long)local_430 + local_438 + 8) = lVar25;
                                                                if (lVar25 != 0) {
                                                                    lVar25 =
                                                                        setup_temp_malloc(stb_vorbis, *local_470 << 2);
                                                                    *(long*)((long)local_430 + local_438 + 40) = lVar25;
                                                                    if ((lVar25 != 0) &&
                                                                        (puVar20 = (unsigned int*)setup_temp_malloc(
                                                                             stb_vorbis, *local_470 << 2),
                                                                         puVar20 != nullptr))
                                                                        goto LAB_100b93c7d;
                                                                }
                                                                error(stb_vorbis, 3);
                                                                puVar20 = nullptr;
                                                                bVar2 = false;
                                                            }
                                                            iVar32 = 1;
                                                            if (!bVar2)
                                                                goto LAB_100b93efd;
                                                        }
                                                        iVar13 = compute_codewords(local_468, (unsigned char*)local_440,
                                                                                   *local_448, puVar20);
                                                        if (iVar13 == 0) {
                                                            if (*local_460 != 0) {
                                                                setup_temp_free(stb_vorbis, puVar20, 0);
                                                            }
                                                            goto LAB_100b93eeb;
                                                        }
                                                        if (*local_470 != 0) {
                                                            lVar25 = setup_malloc(stb_vorbis, *local_470 * 4 + 4);
                                                            *(long*)((long)local_430 + local_438 + 2096) = lVar25;
                                                            if (lVar25 != 0) {
                                                                puVar21 = (uint32_t*)setup_malloc(stb_vorbis,
                                                                                                  *local_470 * 4 + 4);
                                                                *(uint32_t**)((long)local_430 + local_438 + 2104) =
                                                                    puVar21;
                                                                if (puVar21 != nullptr) {
                                                                    *(uint32_t**)((long)local_430 + local_438 + 2104) =
                                                                        puVar21 + 1;
                                                                    *puVar21 = 4294967295;
                                                                    compute_sorted_huffman(
                                                                        local_468, (unsigned char*)local_440, puVar20);
                                                                    goto LAB_100b93d86;
                                                                }
                                                            }
                                                        LAB_100b93ec8:
                                                            SVar30 = 3;
                                                            goto LAB_100b93ef3;
                                                        }
                                                    LAB_100b93d86:
                                                        puVar22 = local_470;
                                                        if (*local_460 != 0) {
                                                            setup_temp_free(stb_vorbis, puVar20, *local_470 << 2);
                                                            puVar20 = local_430;
                                                            lVar25 = local_438;
                                                            setup_temp_free(stb_vorbis,
                                                                            *(void**)((long)local_430 + local_438 + 40),
                                                                            *puVar22 << 2);
                                                            setup_temp_free(stb_vorbis, local_440, *local_448);
                                                            pbVar35 = (uint8_t*)((long)puVar20 + lVar25 + 40);
                                                            pbVar35[0] = 0;
                                                            pbVar35[1] = 0;
                                                            pbVar35[2] = 0;
                                                            pbVar35[3] = 0;
                                                            pbVar35[4] = 0;
                                                            pbVar35[5] = 0;
                                                            pbVar35[6] = 0;
                                                            pbVar35[7] = 0;
                                                        }
                                                        compute_accelerated_huffman(local_468);
                                                        bVar4 = get_bits(stb_vorbis, 4);
                                                        puVar20 = local_430;
                                                        lVar25 = local_438;
                                                        *(uint8_t*)((long)local_430 + local_438 + 25) = bVar4;
                                                        if (2 < bVar4)
                                                            goto LAB_100b93eeb;
                                                        if (bVar4 != 0) {
                                                            pbVar35 = (uint8_t*)((long)local_430 + local_438 + 25);
                                                            uVar24 = get_bits(stb_vorbis, 32);
                                                            uVar17 = float32_unpack(uVar24);
                                                            *(uint32_t*)((long)puVar20 + lVar25 + 16) = uVar17;
                                                            uVar24 = get_bits(stb_vorbis, 32);
                                                            uVar17 = float32_unpack(uVar24);
                                                            *(uint32_t*)((long)puVar20 + lVar25 + 20) = uVar17;
                                                            cVar3 = get_bits(stb_vorbis, 4);
                                                            *(uint8_t*)((long)puVar20 + lVar25 + 24) = cVar3 + 1;
                                                            bVar4 = get_bits(stb_vorbis, 1);
                                                            *(uint8_t*)((long)puVar20 + lVar25 + 26) = bVar4;
                                                            local_480 = pbVar35;
                                                            if (*pbVar35 == 1) {
                                                                iVar13 = lookup1_values(*local_448,
                                                                                        *(unsigned int*)local_468);
                                                            } else {
                                                                iVar13 = *(unsigned int*)local_468 * *local_448;
                                                            }
                                                            *(int*)((long)local_430 + local_438 + 28) = iVar13;
                                                            pvVar19 = (void*)setup_temp_malloc(stb_vorbis, iVar13 * 2);
                                                            if (pvVar19 == nullptr) {
                                                            LAB_100b94216:
                                                                error(stb_vorbis, 3);
                                                            LAB_100b94223:
                                                                iVar32 = 1;
                                                            } else {
                                                                local_440 =
                                                                    (unsigned int*)((long)local_430 + local_438 + 28);
                                                                uVar24 = *local_440;
                                                                if (0 < (int)uVar24) {
                                                                    pbVar35 =
                                                                        (uint8_t*)((long)local_430 + local_438 + 24);
                                                                    lVar25 = 0;
                                                                    do {
                                                                        iVar13 = get_bits(stb_vorbis,
                                                                                          (unsigned int)*pbVar35);
                                                                        if (iVar13 == -1) {
                                                                            setup_temp_free(stb_vorbis, pvVar19,
                                                                                            *local_440 * 2);
                                                                            error(stb_vorbis, 20);
                                                                            goto LAB_100b94223;
                                                                        }
                                                                        *(short*)((long)pvVar19 + lVar25 * 2) =
                                                                            (short)iVar13;
                                                                        lVar25 = lVar25 + 1;
                                                                        uVar24 = *local_440;
                                                                    } while (lVar25 < (int)uVar24);
                                                                }
                                                                puVar20 = local_430;
                                                                lVar25 = local_438;
                                                                pfVar26 = (float*)((long)local_430 + local_438 + 16);
                                                                if (*local_480 == 1) {
                                                                    local_450 = (((uint64_t)local_450._1_7_ << 8) |
                                                                                 (uint8_t)(*local_460));
                                                                    if (*local_460 == 0) {
                                                                        uVar24 = *local_448;
                                                                    LAB_100b940d0:
                                                                        local_460 = (uint8_t*)setup_malloc(
                                                                            stb_vorbis,
                                                                            uVar24 * *(unsigned int*)local_468 * 4);
                                                                        *(uint8_t**)((long)local_430 + local_438 + 32) =
                                                                            local_460;
                                                                        if (local_460 == nullptr) {
                                                                            setup_temp_free(stb_vorbis, pvVar19,
                                                                                            *local_440 * 2);
                                                                            error(stb_vorbis, 3);
                                                                            iVar32 = 1;
                                                                        } else {
                                                                            puVar22 = local_470;
                                                                            if ((char)local_450 == '\0') {
                                                                                puVar22 = local_448;
                                                                            }
                                                                            uVar24 = *puVar22;
                                                                            if (0 < (int)uVar24) {
                                                                                local_448 =
                                                                                    (unsigned int*)((long)local_430 +
                                                                                                    local_438 + 2104);
                                                                                uVar14 = *(unsigned int*)local_468;
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
                                                                                        iVar32 = 1;
                                                                                        uVar28 = 0;
                                                                                        do {
                                                                                            *(float*)(local_460 +
                                                                                                      uVar28 * 4 +
                                                                                                      (long)iVar13 *
                                                                                                          4) =
                                                                                                (float)*(
                                                                                                    unsigned short*)((long)
                                                                                                                         pvVar19 +
                                                                                                                     (long)(int)(((long)iVar15 /
                                                                                                                                      (long)
                                                                                                                                          iVar32 &
                                                                                                                                  4294967295U) %
                                                                                                                                 (unsigned long)
                                                                                                                                     uVar16) *
                                                                                                                         2) *
                                                                                                    *(float*)((long)
                                                                                                                  puVar20 +
                                                                                                              lVar25 +
                                                                                                              20) +
                                                                                                *pfVar26;
                                                                                            iVar32 = iVar32 * uVar16;
                                                                                            uVar28 = uVar28 + 1;
                                                                                        } while (uVar14 != uVar28);
                                                                                    }
                                                                                    uVar18 = uVar18 + 1;
                                                                                    iVar13 = iVar13 + uVar14;
                                                                                } while (uVar18 != uVar24);
                                                                            }
                                                                            setup_temp_free(stb_vorbis, pvVar19,
                                                                                            *local_440 * 2);
                                                                            *local_480 = 2;
                                                                            iVar32 = 0;
                                                                        }
                                                                    } else {
                                                                        uVar24 = *local_470;
                                                                        if (uVar24 != 0)
                                                                            goto LAB_100b940d0;
                                                                        iVar32 = 21;
                                                                    }
                                                                    if ((iVar32 != 0) && (iVar32 != 21))
                                                                        goto LAB_100b94228;
                                                                } else {
                                                                    lVar27 = setup_malloc(stb_vorbis, uVar24 << 2);
                                                                    *(long*)((long)local_430 + local_438 + 32) = lVar27;
                                                                    uVar24 = *local_440;
                                                                    if (lVar27 == 0) {
                                                                        setup_temp_free(stb_vorbis, pvVar19,
                                                                                        uVar24 * 2);
                                                                        goto LAB_100b94216;
                                                                    }
                                                                    if (0 < (int)uVar24) {
                                                                        lVar27 =
                                                                            *(long*)((long)local_430 + local_438 + 32);
                                                                        uVar18 = 0;
                                                                        do {
                                                                            *(float*)(lVar27 + uVar18 * 4) =
                                                                                (float)*(
                                                                                    unsigned short*)((long)pvVar19 +
                                                                                                     uVar18 * 2) *
                                                                                    *(float*)((long)puVar20 + lVar25 +
                                                                                              20) +
                                                                                *pfVar26;
                                                                            uVar18 = uVar18 + 1;
                                                                        } while (uVar24 != uVar18);
                                                                    }
                                                                    setup_temp_free(stb_vorbis, pvVar19, uVar24 * 2);
                                                                }
                                                                iVar32 = 0;
                                                                if ((*local_480 == 2) &&
                                                                    (pbVar35 =
                                                                         (uint8_t*)((long)local_430 + local_438 + 26),
                                                                     *pbVar35 != 0)) {
                                                                    uVar24 = *local_440;
                                                                    if (1 < (int)uVar24) {
                                                                        puVar21 = *(uint32_t**)((long)local_430 +
                                                                                                local_438 + 32);
                                                                        uVar17 = *puVar21;
                                                                        uVar18 = 1;
                                                                        do {
                                                                            puVar21[uVar18] = uVar17;
                                                                            uVar18 = uVar18 + 1;
                                                                        } while (uVar24 != uVar18);
                                                                    }
                                                                    *pbVar35 = 0;
                                                                }
                                                            }
                                                        LAB_100b94228:
                                                            if (iVar32 != 0)
                                                                goto LAB_100b93efd;
                                                        }
                                                        iVar32 = 0;
                                                    } else {
                                                    LAB_100b93eeb:
                                                        SVar30 = 20;
                                                    LAB_100b93ef3:
                                                        error(stb_vorbis, SVar30);
                                                        iVar32 = 1;
                                                    }
                                                LAB_100b93efd:
                                                    if (iVar32 != 0)
                                                        goto LAB_100b94f0c;
                                                    local_458 = local_458 + 1;
                                                } while ((long)local_458 < (long)*(int*)(stb_vorbis + 152));
                                            }
                                            iVar13 = get_bits(stb_vorbis, 6);
                                            for (uVar24 = iVar13 + 1U & 255; uVar24 != 0; uVar24 = uVar24 - 1) {
                                                iVar13 = get_bits(stb_vorbis, 16);
                                                if (iVar13 != 0)
                                                    goto LAB_100b951c6;
                                            }
                                            iVar13 = get_bits(stb_vorbis, 6);
                                            *(int*)(stb_vorbis + 168) = iVar13 + 1;
                                            lVar25 = setup_malloc(stb_vorbis, (iVar13 + 1) * 1596);
                                            *(long*)(stb_vorbis + 304) = lVar25;
                                            if (lVar25 != 0) {
                                                if (0 < *(int*)(stb_vorbis + 168)) {
                                                    local_450 = 0;
                                                    local_468 = (Codebook*)((unsigned long)local_468._4_4_ << 32);
                                                LAB_100b9437d:
                                                    uVar10 = get_bits(stb_vorbis, 16);
                                                    *(unsigned short*)(stb_vorbis + local_450 * 2 + 172) = uVar10;
                                                    if (uVar10 < 2) {
                                                        if (uVar10 == 0) {
                                                            uVar18 = local_450 & 4294967295;
                                                            lVar25 = *(long*)(stb_vorbis + 304);
                                                            uVar8 = get_bits(stb_vorbis, 8);
                                                            lVar27 = uVar18 * 1596;
                                                            *(uint8_t*)(lVar25 + lVar27) = uVar8;
                                                            uVar12 = get_bits(stb_vorbis, 16);
                                                            *(uint16_t*)(lVar25 + 2 + lVar27) = uVar12;
                                                            uVar12 = get_bits(stb_vorbis, 16);
                                                            *(uint16_t*)(lVar25 + 4 + lVar27) = uVar12;
                                                            uVar8 = get_bits(stb_vorbis, 6);
                                                            *(uint8_t*)(lVar25 + 6 + lVar27) = uVar8;
                                                            uVar8 = get_bits(stb_vorbis, 8);
                                                            *(uint8_t*)(lVar25 + 7 + lVar27) = uVar8;
                                                            cVar3 = get_bits(stb_vorbis, 4);
                                                            *(char*)(lVar25 + 8 + lVar27) = cVar3 + '\x01';
                                                            if ((char)(cVar3 + '\x01') != '\0') {
                                                                lVar31 = local_450 * 1596;
                                                                uVar18 = 0;
                                                                do {
                                                                    uVar8 = get_bits(stb_vorbis, 8);
                                                                    *(uint8_t*)(lVar25 + lVar31 + 9 + uVar18) = uVar8;
                                                                    uVar18 = uVar18 + 1;
                                                                } while (uVar18 < *(uint8_t*)(lVar25 + lVar27 + 8));
                                                            }
                                                            SVar30 = 4;
                                                            goto LAB_100b951d8;
                                                        }
                                                        pbVar35 = *(uint8_t**)(stb_vorbis + 304);
                                                        bVar4 = get_bits(stb_vorbis, 5);
                                                        local_438 = local_450 * 1596;
                                                        local_458 = pbVar35 + local_438;
                                                        pbVar35[local_438] = bVar4;
                                                        local_460 = pbVar35;
                                                        if (bVar4 == 0) {
                                                            uVar24 = 4294967295;
                                                        } else {
                                                            lVar25 = local_438 + 1;
                                                            uVar24 = 4294967295;
                                                            uVar18 = 0;
                                                            do {
                                                                bVar4 = get_bits(stb_vorbis, 4);
                                                                if ((int)uVar24 < (int)(unsigned int)bVar4) {
                                                                    uVar24 = (unsigned int)bVar4;
                                                                }
                                                                pbVar35[uVar18 + lVar25] = bVar4;
                                                                uVar18 = uVar18 + 1;
                                                            } while (uVar18 < *local_458);
                                                        }
                                                        if (-1 < (int)uVar24) {
                                                            pbVar35 = local_460 + local_438 + 82;
                                                            local_448 = nullptr;
                                                            do {
                                                                cVar3 = get_bits(stb_vorbis, 3);
                                                                puVar20 = local_448;
                                                                pbVar36 = local_458;
                                                                ((uint8_t*)((long)local_448 + 33))[local_458] =
                                                                    cVar3 + 1;
                                                                bVar4 = get_bits(stb_vorbis, 2);
                                                                ((uint8_t*)((long)puVar20 + 49))[pbVar36] = bVar4;
                                                                if (bVar4 != 0) {
                                                                    bVar4 = get_bits(stb_vorbis, 8);
                                                                    ((uint8_t*)((long)local_448 + 65))[local_458] =
                                                                        bVar4;
                                                                    if (*(int*)(stb_vorbis + 152) <=
                                                                        (int)(unsigned int)bVar4) {
                                                                    LAB_100b94550:
                                                                        error(stb_vorbis, 20);
                                                                        bVar2 = false;
                                                                        goto LAB_100b947b8;
                                                                    }
                                                                }
                                                                pbVar36 = (uint8_t*)((long)local_448 + (long)local_458);
                                                                if (pbVar36[49] != 31) {
                                                                    lVar25 = 0;
                                                                    do {
                                                                        sVar11 = get_bits(stb_vorbis, 8);
                                                                        *(short*)(pbVar35 + lVar25 * 2) = sVar11 - 1;
                                                                        if (*(int*)(stb_vorbis + 152) <=
                                                                            (int)(short)(sVar11 - 1))
                                                                            goto LAB_100b94550;
                                                                        lVar25 = lVar25 + 1;
                                                                    } while (lVar25 < 1 << (pbVar36[49] & 31));
                                                                }
                                                                local_448 = (unsigned int*)((long)local_448 + 1);
                                                                pbVar35 = pbVar35 + 16;
                                                            } while (local_448 !=
                                                                     (unsigned int*)(unsigned long)(uVar24 + 1));
                                                        }
                                                        cVar3 = get_bits(stb_vorbis, 2);
                                                        lVar25 = local_438;
                                                        pbVar35 = local_460;
                                                        local_460[local_438 + 1588] = cVar3 + 1;
                                                        bVar4 = get_bits(stb_vorbis, 4);
                                                        pbVar35[lVar25 + 1589] = bVar4;
                                                        (pbVar35 + lVar25 + 338)[0] = 0;
                                                        (pbVar35 + lVar25 + 338)[1] = 0;
                                                        *(short*)(pbVar35 + lVar25 + 340) = (short)(1 << (bVar4 & 31));
                                                        local_430 = (unsigned int*)(pbVar35 + lVar25 + 1592);
                                                        pbVar35 = pbVar35 + lVar25 + 1592;
                                                        pbVar35[0] = 2;
                                                        pbVar35[1] = 0;
                                                        pbVar35[2] = 0;
                                                        pbVar35[3] = 0;
                                                        if (*local_458 != 0) {
                                                            local_448 = (unsigned int*)(local_460 + local_438 + 1589);
                                                            local_440 = nullptr;
                                                            do {
                                                                puVar20 = local_430;
                                                                pbVar35 = local_458;
                                                                if (local_458[((uint8_t*)((long)local_440 +
                                                                                          1))[local_458] +
                                                                              33] != 0) {
                                                                    pbVar36 =
                                                                        local_458 +
                                                                        (unsigned long)((uint8_t*)((long)local_440 +
                                                                                                   1))[local_458] +
                                                                        33;
                                                                    uVar24 = 0;
                                                                    do {
                                                                        uVar12 =
                                                                            get_bits(stb_vorbis,
                                                                                     (unsigned int)(uint8_t)*local_448);
                                                                        uVar14 = *puVar20;
                                                                        *(uint16_t*)(pbVar35 + (long)(int)uVar14 * 2 +
                                                                                     338) = uVar12;
                                                                        *puVar20 = uVar14 + 1;
                                                                        uVar24 = uVar24 + 1;
                                                                    } while (uVar24 < *pbVar36);
                                                                }
                                                                local_440 = (unsigned int*)((long)local_440 + 1);
                                                            } while (local_440 <
                                                                     (unsigned int*)(unsigned long)*pbVar35);
                                                        }
                                                        arg1 = (unsigned short*)(local_460 + local_438 + 338);
                                                        uVar24 = *local_430;
                                                        if (0 < (int)uVar24) {
                                                            uVar18 = 0;
                                                            do {
                                                                *(unsigned short*)(abStack_426 + uVar18 * 4 - 2) =
                                                                    arg1[uVar18];
                                                                *(short*)(abStack_426 + uVar18 * 4) = (short)uVar18;
                                                                uVar18 = uVar18 + 1;
                                                            } while (uVar24 != uVar18);
                                                        }
                                                        _qsort(&local_428, (long)(int)uVar24, 4, (int*)point_compare);
                                                        if (0 < (int)*local_430) {
                                                            lVar25 = 0;
                                                            do {
                                                                local_460[lVar25 + local_438 + 838] =
                                                                    abStack_426[lVar25 * 4];
                                                                lVar25 = lVar25 + 1;
                                                            } while (lVar25 < (int)*local_430);
                                                        }
                                                        uVar24 = *local_430;
                                                        if (2 < (int)uVar24) {
                                                            pbVar35 = local_460 + local_438 + 1093;
                                                            lVar25 = 2;
                                                            do {
                                                                neighbors(arg1, (int)lVar25, (int*)local_488,
                                                                          (int*)local_484);
                                                                pbVar35[-1] = local_488[0];
                                                                *pbVar35 = local_484[0];
                                                                lVar25 = lVar25 + 1;
                                                                uVar24 = *local_430;
                                                                pbVar35 = pbVar35 + 2;
                                                            } while (lVar25 < (int)uVar24);
                                                        }
                                                        uVar14 = (unsigned int)local_468;
                                                        if ((int)(unsigned int)local_468 < (int)uVar24) {
                                                            uVar14 = uVar24;
                                                        }
                                                        local_468 = (Codebook*)(((uint64_t)local_468._4_4_ << 32) |
                                                                                (uint32_t)uVar14);
                                                        bVar2 = true;
                                                    LAB_100b947b8:
                                                        if (bVar2)
                                                            goto code_r0x000100b947c0;
                                                        goto LAB_100b94f0c;
                                                    }
                                                    goto LAB_100b951c6;
                                                }
                                                local_468 = (Codebook*)((unsigned long)local_468._4_4_ << 32);
                                            LAB_100b947f1:
                                                iVar13 = get_bits(stb_vorbis, 6);
                                                *(int*)(stb_vorbis + 312) = iVar13 + 1;
                                                lVar25 = setup_malloc(stb_vorbis, (iVar13 + 1) * 32);
                                                *(long*)(stb_vorbis + 448) = lVar25;
                                                if (lVar25 != 0) {
                                                    ___bzero(lVar25, (long)*(int*)(stb_vorbis + 312) << 5);
                                                    if (0 < *(int*)(stb_vorbis + 312)) {
                                                        local_430 = nullptr;
                                                        do {
                                                            local_440 = *(unsigned int**)(stb_vorbis + 448);
                                                            uVar10 = get_bits(stb_vorbis, 16);
                                                            *(unsigned short*)(stb_vorbis + (long)local_430 * 2 + 316) =
                                                                uVar10;
                                                            if (2 < uVar10)
                                                                goto LAB_100b951c6;
                                                            uVar24 = get_bits(stb_vorbis, 24);
                                                            puVar22 = local_430;
                                                            puVar20 = local_440;
                                                            uVar18 = (long)local_430 * 32;
                                                            local_440[local_430 * 8] = uVar24;
                                                            uVar24 = get_bits(stb_vorbis, 24);
                                                            puVar20[puVar22 * 8 + 1] = uVar24;
                                                            iVar13 = get_bits(stb_vorbis, 24);
                                                            puVar20[puVar22 * 8 + 2] = iVar13 + 1;
                                                            cVar3 = get_bits(stb_vorbis, 6);
                                                            puVar33 = puVar20 + (long)puVar22 * 8 + 3;
                                                            *(uint8_t*)(puVar20 + (long)puVar22 * 8 + 3) = cVar3 + 1;
                                                            bVar4 = get_bits(stb_vorbis, 8);
                                                            *(uint8_t*)((long)puVar20 + uVar18 + 13) = bVar4;
                                                            bVar4 = 0;
                                                            local_450 = uVar18;
                                                            if ((uint8_t)puVar20[puVar22 * 8 + 3] != 0) {
                                                                uVar18 = 0;
                                                                do {
                                                                    cVar3 = get_bits(stb_vorbis, 3);
                                                                    iVar13 = get_bits(stb_vorbis, 1);
                                                                    if (iVar13 == 0) {
                                                                        cVar7 = '\0';
                                                                    } else {
                                                                        cVar7 = get_bits(stb_vorbis, 5);
                                                                    }
                                                                    abStack_426[uVar18 - 2] = cVar3 + cVar7 * '\b';
                                                                    uVar18 = uVar18 + 1;
                                                                    bVar4 = (uint8_t)*puVar33;
                                                                } while (uVar18 < bVar4);
                                                            }
                                                            lVar25 = setup_malloc(stb_vorbis, (unsigned int)bVar4 << 4);
                                                            *(long*)((long)local_440 + local_450 + 24) = lVar25;
                                                            if (lVar25 == 0)
                                                                goto LAB_100b951d0;
                                                            if ((uint8_t)*puVar33 != 0) {
                                                                local_448 =
                                                                    (unsigned int*)((long)local_440 + local_450 + 24);
                                                                lVar25 = 0;
                                                                local_458 = nullptr;
                                                                do {
                                                                    bVar4 =
                                                                        *(uint8_t*)((long)&local_428 + (long)local_458);
                                                                    lVar27 = 0;
                                                                    do {
                                                                        if ((bVar4 >> ((unsigned int)lVar27 & 31) &
                                                                             1) == 0) {
                                                                            *(uint16_t*)(*(long*)local_448 + lVar25 +
                                                                                         lVar27 * 2) = 65535;
                                                                        } else {
                                                                            sVar11 = get_bits(stb_vorbis, 8);
                                                                            *(short*)(*(long*)local_448 + lVar25 +
                                                                                      lVar27 * 2) = sVar11;
                                                                            if (*(int*)(stb_vorbis + 152) <=
                                                                                (int)sVar11)
                                                                                goto LAB_100b951c6;
                                                                        }
                                                                        lVar27 = lVar27 + 1;
                                                                    } while (lVar27 != 8);
                                                                    local_458 = local_458 + 1;
                                                                    lVar25 = lVar25 + 16;
                                                                } while (local_458 <
                                                                         (uint8_t*)(unsigned long)(uint8_t)*puVar33);
                                                            }
                                                            puVar20 = local_440;
                                                            uVar18 = local_450;
                                                            local_458 = (uint8_t*)((long)local_440 + local_450 + 13);
                                                            lVar25 = setup_malloc(
                                                                stb_vorbis, *(int*)(*(long*)(stb_vorbis + 160) + 4 +
                                                                                    (unsigned long)*local_458 * 2120)
                                                                                << 3);
                                                            pbVar35 = local_458;
                                                            *(long*)((long)puVar20 + uVar18 + 16) = lVar25;
                                                            if (lVar25 == 0)
                                                                goto LAB_100b951d0;
                                                            ___bzero(lVar25,
                                                                     (long)*(int*)(*(long*)(stb_vorbis + 160) + 4 +
                                                                                   (unsigned long)*local_458 * 2120)
                                                                         << 3);
                                                            lVar25 = *(long*)(stb_vorbis + 160);
                                                            uVar18 = (unsigned long)*pbVar35;
                                                            if (0 < *(int*)(lVar25 + 4 + uVar18 * 2120)) {
                                                                pbVar35 = (uint8_t*)((long)local_440 + local_450 + 16);
                                                                lVar27 = 0;
                                                                do {
                                                                    iVar13 = *(int*)(lVar25 + uVar18 * 2120);
                                                                    uVar23 = setup_malloc(stb_vorbis, iVar13);
                                                                    *(uint64_t*)(*(long*)pbVar35 + lVar27 * 8) = uVar23;
                                                                    local_448 =
                                                                        *(unsigned int**)(*(long*)pbVar35 + lVar27 * 8);
                                                                    if (local_448 == nullptr) {
                                                                        error(stb_vorbis, 3);
                                                                    } else if (0 < iVar13) {
                                                                        lVar31 = (long)iVar13 + 1;
                                                                        lVar25 = lVar27;
                                                                        do {
                                                                            *(char*)(*(long*)(*(long*)pbVar35 +
                                                                                              lVar27 * 8) -
                                                                                     2 + lVar31) =
                                                                                (char)((int)lVar25 %
                                                                                       (int)(unsigned int)(uint8_t)*puVar33);
                                                                            lVar25 =
                                                                                (long)(int)lVar25 /
                                                                                (long)(int)(unsigned int)(uint8_t)*puVar33;
                                                                            lVar31 = lVar31 - 1;
                                                                        } while (1 < lVar31);
                                                                    }
                                                                    if (local_448 == nullptr)
                                                                        goto LAB_100b94f0c;
                                                                    lVar27 = lVar27 + 1;
                                                                    lVar25 = *(long*)(stb_vorbis + 160);
                                                                    uVar18 = (unsigned long)*local_458;
                                                                } while (lVar27 < *(int*)(lVar25 + 4 + uVar18 * 2120));
                                                            }
                                                            local_430 = (unsigned int*)((long)local_430 + 1);
                                                        } while ((long)local_430 < (long)*(int*)(stb_vorbis + 312));
                                                    }
                                                    iVar13 = get_bits(stb_vorbis, 6);
                                                    *(int*)(stb_vorbis + 456) = iVar13 + 1;
                                                    lVar25 = setup_malloc(stb_vorbis, (iVar13 + 1) * 48);
                                                    *(long*)(stb_vorbis + 464) = lVar25;
                                                    if (lVar25 != 0) {
                                                        ___bzero(lVar25, (long)*(int*)(stb_vorbis + 456) * 48);
                                                        if (0 < *(int*)(stb_vorbis + 456)) {
                                                            lVar25 = 0;
                                                            do {
                                                                local_458 = *(uint8_t**)(stb_vorbis + 464);
                                                                iVar13 = get_bits(stb_vorbis, 16);
                                                                local_448 =
                                                                    (unsigned int*)(((uint64_t)local_448._4_4_ << 32) |
                                                                                    (uint32_t)20);
                                                                if (iVar13 == 0) {
                                                                    uVar18 = lVar25 * 48;
                                                                    lVar27 = setup_malloc(stb_vorbis,
                                                                                          *(int*)(stb_vorbis + 4) * 3);
                                                                    *(long*)(local_458 + uVar18 + 8) = lVar27;
                                                                    local_450 = uVar18;
                                                                    if (lVar27 == 0) {
                                                                        local_448 =
                                                                            (unsigned int*)(((uint64_t)local_448._4_4_
                                                                                             << 32) |
                                                                                            (uint32_t)3);
                                                                        goto LAB_100b94c49;
                                                                    }
                                                                    iVar13 = get_bits(stb_vorbis, 1);
                                                                    if (iVar13 == 0) {
                                                                        bVar4 = 1;
                                                                    } else {
                                                                        cVar3 = get_bits(stb_vorbis, 4);
                                                                        bVar4 = cVar3 + 1;
                                                                    }
                                                                    local_430 = (unsigned int*)(local_458 + local_450);
                                                                    local_440 =
                                                                        (unsigned int*)(local_458 + local_450 + 8);
                                                                    local_458[local_450 + 16] = bVar4;
                                                                    iVar13 = get_bits(stb_vorbis, 1);
                                                                    if (iVar13 == 0) {
                                                                        *(unsigned short*)local_430 = 0;
                                                                    } else {
                                                                        sVar11 = get_bits(stb_vorbis, 8);
                                                                        *(unsigned short*)local_430 = sVar11 + 1U;
                                                                        if ((unsigned short)(sVar11 + 1U) != 0) {
                                                                            lVar27 = 0;
                                                                            uVar18 = 0;
                                                                            do {
                                                                                iVar13 =
                                                                                    ilog(*(int*)(stb_vorbis + 4) - 1);
                                                                                uVar8 = get_bits(stb_vorbis, iVar13);
                                                                                puVar20 = local_440;
                                                                                *(uint8_t*)(*(long*)local_440 +
                                                                                            lVar27) = uVar8;
                                                                                iVar13 =
                                                                                    ilog(*(int*)(stb_vorbis + 4) - 1);
                                                                                bVar5 = get_bits(stb_vorbis, iVar13);
                                                                                lVar31 = *(long*)puVar20;
                                                                                *(uint8_t*)(lVar31 + 1 + lVar27) =
                                                                                    bVar5;
                                                                                bVar4 = *(uint8_t*)(lVar31 + lVar27);
                                                                                if (((*(int*)(stb_vorbis + 4) <=
                                                                                      (int)(unsigned int)bVar4) ||
                                                                                     (*(int*)(stb_vorbis + 4) <=
                                                                                      (int)(unsigned int)bVar5)) ||
                                                                                    (bVar4 == bVar5))
                                                                                    goto LAB_100b94c49;
                                                                                uVar18 = uVar18 + 1;
                                                                                lVar27 = lVar27 + 3;
                                                                            } while (uVar18 <
                                                                                     (unsigned short)*local_430);
                                                                        }
                                                                    }
                                                                    iVar13 = get_bits(stb_vorbis, 2);
                                                                    if (iVar13 != 0)
                                                                        goto LAB_100b94c49;
                                                                    local_430 =
                                                                        (unsigned int*)(local_458 + local_450 + 16);
                                                                    uVar24 = *(unsigned int*)(stb_vorbis + 4);
                                                                    if ((uint8_t)*local_430 < 2) {
                                                                        if (0 < (int)uVar24) {
                                                                            lVar27 = *(long*)local_440;
                                                                            lVar31 = 0;
                                                                            do {
                                                                                *(uint8_t*)(lVar27 + 2 + lVar31) = 0;
                                                                                lVar31 = lVar31 + 3;
                                                                            } while ((unsigned long)uVar24 * 3 !=
                                                                                     lVar31);
                                                                        }
                                                                    } else if (0 < (int)uVar24) {
                                                                        lVar31 = 2;
                                                                        lVar27 = 0;
                                                                        do {
                                                                            bVar4 = get_bits(stb_vorbis, 4);
                                                                            *(uint8_t*)(*(long*)local_440 + lVar31) =
                                                                                bVar4;
                                                                            if ((uint8_t)*local_430 <= bVar4)
                                                                                goto LAB_100b94c49;
                                                                            lVar27 = lVar27 + 1;
                                                                            lVar31 = lVar31 + 3;
                                                                        } while (lVar27 < *(int*)(stb_vorbis + 4));
                                                                    }
                                                                    uVar18 = local_450;
                                                                    pbVar35 = local_458;
                                                                    bVar2 = true;
                                                                    if ((uint8_t)*local_430 != 0) {
                                                                        lVar27 = local_450 + 17;
                                                                        uVar28 = 0;
                                                                        do {
                                                                            get_bits(stb_vorbis, 8);
                                                                            bVar4 = get_bits(stb_vorbis, 8);
                                                                            pbVar35[uVar28 + lVar27] = bVar4;
                                                                            bVar4 = get_bits(stb_vorbis, 8);
                                                                            pbVar35[uVar28 + uVar18 + 32] = bVar4;
                                                                            if ((*(int*)(stb_vorbis + 168) <=
                                                                                 (int)(unsigned int)
                                                                                     pbVar35[uVar28 + lVar27]) ||
                                                                                (*(int*)(stb_vorbis + 312) <=
                                                                                 (int)(unsigned int)bVar4))
                                                                                goto LAB_100b94c49;
                                                                            uVar28 = uVar28 + 1;
                                                                        } while (uVar28 < (uint8_t)*local_430);
                                                                    }
                                                                } else {
                                                                LAB_100b94c49:
                                                                    error(stb_vorbis, (STBVorbisError)local_448);
                                                                    bVar2 = false;
                                                                }
                                                                if (!bVar2)
                                                                    goto LAB_100b94f0c;
                                                                lVar25 = lVar25 + 1;
                                                            } while (lVar25 < *(int*)(stb_vorbis + 456));
                                                        }
                                                        uVar24 = get_bits(stb_vorbis, 6);
                                                        *(unsigned int*)(stb_vorbis + 472) = uVar24 + 1;
                                                        if (uVar24 < 2147483647) {
                                                            psVar29 = stb_vorbis + 480;
                                                            lVar25 = 0;
                                                            do {
                                                                sVar9 = (stb_vorbis)get_bits(stb_vorbis, 1);
                                                                psVar29[-4] = sVar9;
                                                                sVar11 = get_bits(stb_vorbis, 16);
                                                                *(short*)(psVar29 - 2) = sVar11;
                                                                sVar11 = get_bits(stb_vorbis, 16);
                                                                *(short*)psVar29 = sVar11;
                                                                sVar9 = (stb_vorbis)get_bits(stb_vorbis, 8);
                                                                psVar29[-3] = sVar9;
                                                                if (((*(short*)(psVar29 - 2) != 0) ||
                                                                     (*(short*)psVar29 != 0)) ||
                                                                    (*(int*)(stb_vorbis + 456) <=
                                                                     (int)(unsigned int)(uint8_t)sVar9))
                                                                    goto LAB_100b951c6;
                                                                lVar25 = lVar25 + 1;
                                                                psVar29 = psVar29 + 6;
                                                            } while (lVar25 < *(int*)(stb_vorbis + 472));
                                                        }
                                                        flush_packet(stb_vorbis);
                                                        *(uint32_t*)(stb_vorbis + 1248) = 0;
                                                        if (0 < *(int*)(stb_vorbis + 4)) {
                                                            local_468 =
                                                                (Codebook*)(((uint64_t)local_468._4_4_ << 32) |
                                                                            (uint32_t)((unsigned int)local_468 * 2));
                                                            lVar25 = 0;
                                                            do {
                                                                uVar23 = setup_malloc(stb_vorbis,
                                                                                      *(int*)(stb_vorbis + 148) << 2);
                                                                *(uint64_t*)(stb_vorbis + lVar25 * 8 + 864) = uVar23;
                                                                uVar23 = setup_malloc(stb_vorbis,
                                                                                      *(int*)(stb_vorbis + 148) * 2);
                                                                *(uint64_t*)(stb_vorbis + lVar25 * 8 + 1120) = uVar23;
                                                                lVar27 =
                                                                    setup_malloc(stb_vorbis, (unsigned int)local_468);
                                                                *(long*)(stb_vorbis + lVar25 * 8 + 1256) = lVar27;
                                                                if (((*(long*)(stb_vorbis + lVar25 * 8 + 864) == 0) ||
                                                                     (*(long*)(stb_vorbis + lVar25 * 8 + 1120) == 0)) ||
                                                                    (lVar27 == 0))
                                                                    goto LAB_100b951d0;
                                                                lVar25 = lVar25 + 1;
                                                            } while (lVar25 < *(int*)(stb_vorbis + 4));
                                                        }
                                                        uVar23 = 0;
                                                        iVar13 =
                                                            init_blocksize(stb_vorbis, 0, *(int*)(stb_vorbis + 144));
                                                        if ((iVar13 == 0) ||
                                                            (iVar13 = init_blocksize(stb_vorbis, 1,
                                                                                     *(int*)(stb_vorbis + 148)),
                                                             iVar13 == 0))
                                                            goto LAB_100b935f5;
                                                        *(uint32_t*)(stb_vorbis + 136) = *(uint32_t*)(stb_vorbis + 144);
                                                        *(int*)(stb_vorbis + 140) = *(int*)(stb_vorbis + 148);
                                                        uVar24 = *(int*)(stb_vorbis + 148) * 2;
                                                        if ((int)*(unsigned int*)(stb_vorbis + 312) < 1) {
                                                            iVar13 = 8;
                                                        } else {
                                                            lVar25 = *(long*)(stb_vorbis + 448);
                                                            lVar27 = 0;
                                                            uVar14 = 0;
                                                            do {
                                                                uVar16 = (unsigned int)(*(int*)(lVar25 + 4 + lVar27) -
                                                                                        *(int*)(lVar25 + lVar27)) /
                                                                         *(unsigned int*)(lVar25 + 8 + lVar27);
                                                                if ((int)uVar14 < (int)uVar16) {
                                                                    uVar14 = uVar16;
                                                                }
                                                                lVar27 = lVar27 + 32;
                                                            } while ((unsigned long)*(unsigned int*)(stb_vorbis + 312) *
                                                                         32 !=
                                                                     lVar27);
                                                            iVar13 = uVar14 * 8 + 8;
                                                        }
                                                        uVar14 = iVar13 * *(int*)(stb_vorbis + 4);
                                                        if ((unsigned int)(iVar13 * *(int*)(stb_vorbis + 4)) < uVar24) {
                                                            uVar14 = uVar24;
                                                        }
                                                        *(unsigned int*)(stb_vorbis + 12) = uVar14;
                                                        stb_vorbis[1741] = (stb_vorbis)1;
                                                        if (*(long*)(stb_vorbis + 104) != 0) {
                                                            if (*(int*)(stb_vorbis + 124) !=
                                                                *(int*)(stb_vorbis + 112)) {
                                                                LogAssert("f->temp_offset == "
                                                                          "f->alloc.alloc_buffer_length_in_bytes",
                                                                          "/Users/bamboo/bamboo-home-01/xml-data/"
                                                                          "build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                                                                          "workers/vorbis_std.code",
                                                                          3839, nullptr);
                                                            }
                                                            if ((unsigned long)*(unsigned int*)(stb_vorbis + 124) <
                                                                (long)*(int*)(stb_vorbis + 120) +
                                                                    (unsigned long)*(unsigned int*)(stb_vorbis + 12) +
                                                                    1880) {
                                                                SVar30 = 3;
                                                                goto LAB_100b935f0;
                                                            }
                                                        }
                                                        uVar17 = _stb_vorbis_get_file_offset(stb_vorbis);
                                                        *(uint32_t*)(stb_vorbis + 72) = uVar17;
                                                        uVar23 = 1;
                                                        goto LAB_100b935f5;
                                                    }
                                                }
                                            }
                                        }
                                    LAB_100b951d0:
                                        SVar30 = 3;
                                    }
                                LAB_100b951d8:
                                    error(stb_vorbis, SVar30);
                                    uVar23 = 0;
                                    goto LAB_100b935f5;
                                }
                            }
                            SVar30 = 20;
                            goto LAB_100b935f0;
                        }
                    }
                }
                goto LAB_100b935e8;
            }
            SVar30 = 10;
        }
    LAB_100b935f0:
        uVar23 = 0;
        error(stb_vorbis, SVar30);
    LAB_100b935f5:
        return uVar23;
    code_r0x000100b947c0:
        local_450 = local_450 + 1;
        if ((long)*(int*)(stb_vorbis + 168) <= (long)local_450)
            goto LAB_100b947f1;
        goto LAB_100b9437d;
    LAB_100b94f0c:
        uVar23 = 0;
        goto LAB_100b935f5;
    }

    // 0x100b95270
    void vorbis_alloc(stb_vorbis* stb_vorbis) {
        setup_malloc(stb_vorbis, 1880);
    }

    // 0x100b95450
    void seek_to_sample_coarse(stb_vorbis* stb_vorbis, unsigned int arg2) {
        int iVar2;
        unsigned long uVar3;
        unsigned int uVar4;
        unsigned long uVar5;
        STBVorbisError stbVorbisError;
        unsigned int uVar6;
        double dVar8;
        double dVar9;
        double local_70;
        double local_68;
        unsigned int local_5c;
        unsigned int local_54;
        unsigned int local_40;
        unsigned int uStack_3c;
        unsigned int local_38;

        unsigned int uVar1 = _stb_vorbis_stream_length_in_samples();
        if (uVar1 == 0) {
            stbVorbisError = 7;
            goto LAB_100b954f2;
        }
        if (uVar1 < arg2) {
            stbVorbisError = 11;
            goto LAB_100b954f2;
        }
        uVar1 = *(int*)(stb_vorbis + 148) - *(int*)(stb_vorbis + 144) >> 2;
        unsigned int uVar7 = arg2 - uVar1;
        if (arg2 < uVar1) {
            uVar7 = 0;
        }
        unsigned int local_48 = *(unsigned int*)(stb_vorbis + 84);
        uint64_t local_50 = *(unsigned long*)(stb_vorbis + 76);
        do {
            if (local_48 != 4294967295) {
                uVar1 = *(unsigned int*)(stb_vorbis + 88);
                local_54 = *(unsigned int*)(stb_vorbis + 92);
                local_5c = *(unsigned int*)(stb_vorbis + 96);
                if (local_5c == 4294967295) {
                    LogAssert("right.last_decoded_sample != ~0U",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                              "vorbis_std.code",
                              4355, nullptr);
                }
                if (uVar7 <= local_48) {
                    _stb_vorbis_seek_start(stb_vorbis);
                    return 1;
                }
                if (uVar1 == local_50._4_4_)
                    goto LAB_100b9553a;
                uVar6 = 0;
                goto LAB_100b95627;
            }
            set_file_offset(stb_vorbis, local_50._4_4_);
            iVar2 = get_seek_page_info(stb_vorbis, (ProbedPage*)&local_50);
        } while (iVar2 != 0);
    LAB_100b954e2:
        _stb_vorbis_seek_start(stb_vorbis);
        goto LAB_100b954ea;
        while (true) {
            if (uVar7 < local_38) {
                local_54 = uStack_3c;
                local_5c = local_38;
                uVar1 = local_40;
            } else {
                local_48 = local_38;
                local_50 = (((uint64_t)uStack_3c << 32) | (uint32_t)local_40);
            }
            uVar6 = uVar6 + 1;
            if (uVar1 == local_50._4_4_)
                break;
        LAB_100b95627:
            uVar4 = uVar1 - local_50._4_4_;
            if (uVar1 < local_50._4_4_ || uVar4 == 0) {
                LogAssert("left.page_end < right.page_start",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                          "vorbis_std.code",
                          4364, nullptr);
            }
            if (uVar4 < 65537) {
                set_file_offset(stb_vorbis, local_50._4_4_);
            } else {
                if (uVar6 < 2) {
                    if (uVar6 == 0) {
                        local_68 = (double)(local_54 - (unsigned int)local_50) / (double)local_5c;
                        dVar8 = (double)(uVar7 - local_48) * local_68 + (double)(local_50 & 4294967295);
                    } else {
                        dVar9 = ((double)uVar7 - (double)local_38) * local_68;
                        dVar8 = dVar9;
                        if (dVar9 <= 8000.0) {
                            dVar8 = 8000.0;
                        }
                        dVar8 = (double)(~-(unsigned long)(0.0 <= dVar9) & (unsigned long)dVar9 |
                                         (unsigned long)dVar8 & -(unsigned long)(0.0 <= dVar9));
                        dVar8 = (double)((-(unsigned long)(-8000.0 < dVar8) & 13893393744205447168 |
                                          ~-(unsigned long)(-8000.0 < dVar8) & (unsigned long)(dVar8 + dVar8)) &
                                             -(unsigned long)(dVar8 < 0.0) |
                                         ~-(unsigned long)(dVar8 < 0.0) & (unsigned long)(dVar8 + dVar8)) +
                                local_70;
                    }
                    dVar9 = (double)local_50._4_4_;
                    if ((double)local_50._4_4_ <= dVar8) {
                        dVar9 = dVar8;
                    }
                    local_70 = (double)(uVar1 - 65536);
                    if (dVar9 <= (double)(uVar1 - 65536)) {
                        local_70 = dVar9;
                    }
                    uVar4 = (unsigned int)(long)local_70;
                } else {
                    uVar4 = (local_50._4_4_ + (uVar4 >> 1)) - 32768;
                }
                set_file_offset(stb_vorbis, uVar4);
                iVar2 = vorbis_find_page(stb_vorbis, nullptr, nullptr);
                if (iVar2 == 0)
                    goto LAB_100b954e2;
            }
            while (true) {
                iVar2 = get_seek_page_info(stb_vorbis, (ProbedPage*)&local_40);
                if (iVar2 == 0)
                    goto LAB_100b954e2;
                if (local_38 != 4294967295)
                    break;
                set_file_offset(stb_vorbis, uStack_3c);
                if (uVar1 <= local_40) {
                    LogAssert("mid.page_start < right.page_start",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                              "vorbis_std.code",
                              4409, nullptr);
                }
            }
            if (local_40 == uVar1)
                break;
        }
    LAB_100b9553a:
        uVar1 = (unsigned int)local_50;
        set_file_offset(stb_vorbis, (unsigned int)local_50);
        iVar2 = start_page(stb_vorbis);
        if (iVar2 != 0) {
            uVar7 = *(unsigned int*)(stb_vorbis + 1768);
            if ((int)uVar7 < 0) {
                LogAssert("end_pos >= 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                          "vorbis_std.code",
                          4430, nullptr);
            }
            do {
                uVar5 = (unsigned long)uVar7;
                while (uVar3 = uVar5, iVar2 = (int)uVar3, 0 < iVar2) {
                    uVar5 = uVar3 - 1;
                    if (stb_vorbis[uVar3 + 1483] != (stb_vorbis)255)
                        goto LAB_100b95850;
                }
                if (((uint8_t)stb_vorbis[1739] & 1) == 0) {
                LAB_100b95850:
                    *(uint32_t*)(stb_vorbis + 1388) = 0;
                    *(uint32_t*)(stb_vorbis + 1748) = 0;
                    *(uint64_t*)(stb_vorbis + 1760) = 0;
                    stb_vorbis[1740] = (stb_vorbis)0;
                    *(uint32_t*)(stb_vorbis + 1248) = 0;
                    *(int*)(stb_vorbis + 1744) = iVar2;
                    if (0 < iVar2) {
                        uVar5 = 0;
                        do {
                            skip(stb_vorbis, (unsigned int)(uint8_t)stb_vorbis[uVar5 + 1484]);
                            uVar5 = uVar5 + 1;
                        } while (uVar3 != uVar5);
                    }
                    vorbis_pump_first_frame(stb_vorbis);
                    return 1;
                }
                iVar2 = go_to_page_before(stb_vorbis, uVar1);
                if (iVar2 == 0)
                    goto LAB_100b954e2;
                uVar1 = _stb_vorbis_get_file_offset(stb_vorbis);
                iVar2 = start_page(stb_vorbis);
                if (iVar2 == 0)
                    goto LAB_100b954e2;
                uVar7 = *(int*)(stb_vorbis + 1480) - 1;
            } while (true);
        }
    LAB_100b954ea:
        stbVorbisError = 37;
    LAB_100b954f2:
        error(stb_vorbis, stbVorbisError);
        return 0;
    }

    // 0x100b958d0
    void peek_decode_initial(stb_vorbis* stb_vorbis, int* arg2, int* arg3, int* arg4, int* arg5, int* arg6) {
        uint64_t uVar2;
        int iVar3;

        int iVar1 = vorbis_decode_initial(stb_vorbis, arg2, arg3, arg4, arg5, arg6);
        if (iVar1 == 0) {
            uVar2 = 0;
        } else {
            iVar1 = ilog(*(int*)(stb_vorbis + 472) - 1);
            iVar3 = iVar1 + (unsigned int)(stb_vorbis[*arg6 * 6 + 476] != (stb_vorbis)0) * 2 + 8;
            iVar1 = iVar1 + (unsigned int)(stb_vorbis[*arg6 * 6 + 476] != (stb_vorbis)0) * 2 + 15;
            if (-1 < iVar3) {
                iVar1 = iVar3;
            }
            iVar1 = iVar1 >> 3;
            stb_vorbis[1740] = (stb_vorbis)((char)stb_vorbis[1740] + (char)iVar1);
            *(int*)(stb_vorbis + 1764) = *(int*)(stb_vorbis + 1764) - iVar1;
            skip(stb_vorbis, -iVar1);
            iVar1 = *(int*)(stb_vorbis + 1744);
            if (iVar1 == -1) {
                iVar1 = *(int*)(stb_vorbis + 1480);
            }
            *(int*)(stb_vorbis + 1744) = iVar1 - 1;
            *(uint32_t*)(stb_vorbis + 1760) = 0;
            uVar2 = 1;
        }
        return uVar2;
    }

    // 0x100b95970
    void vorbis_pump_first_frame(stb_vorbis* stb_vorbis) {
        int local_1c;
        int local_18;
        int local_14;

        if (vorbis_decode_packet(stb_vorbis, &local_1c, &local_14, &local_18) != 0) {
            vorbis_finish_frame(stb_vorbis, local_1c, local_14, local_18);
        }
    }

    // 0x100b959b0
    void maybe_start_packet(stb_vorbis* stb_vorbis) {
        STBVorbisError stbVorbisError;

        if (*(int*)(stb_vorbis + 1744) != -1) {
        LAB_100b959c3:
            return start_packet(stb_vorbis);
        }
        char cVar1 = get8(stb_vorbis);
        if (*(int*)(stb_vorbis + 128) != 0) {
            return 0;
        }
        if ((((cVar1 == 'O') && (cVar1 = get8(stb_vorbis), cVar1 == 'g')) &&
             (cVar1 = get8(stb_vorbis), cVar1 == 'g')) &&
            (cVar1 = get8(stb_vorbis), cVar1 == 'S')) {
            if (start_page_no_capturepattern(stb_vorbis) == 0) {
                return 0;
            }
            if (((uint8_t)stb_vorbis[1739] & 1) == 0)
                goto LAB_100b959c3;
            *(uint32_t*)(stb_vorbis + 1748) = 0;
            stb_vorbis[1740] = (stb_vorbis)0;
            stbVorbisError = 32;
        } else {
            stbVorbisError = 30;
        }
        error(stb_vorbis, stbVorbisError);
        return 0;
    }

    // 0x100b95a60
    void flush_packet(stb_vorbis* stb_vorbis) {
        int iVar1;

        do {
            iVar1 = get8_packet_raw(stb_vorbis);
        } while (iVar1 != -1);
    }

    // 0x100b95c80
    void set_file_offset(stb_vorbis* stb_vorbis, unsigned int arg2) {
        unsigned long uVar2;

        if (stb_vorbis[68] == (stb_vorbis)0) {
            *(uint32_t*)(stb_vorbis + 128) = 0;
            if (*(long*)(stb_vorbis + 40) == 0) {
                if (((int)arg2 < 0) || (CARRY4(*(unsigned int*)(stb_vorbis + 32), arg2))) {
                    *(uint32_t*)(stb_vorbis + 128) = 1;
                    uVar2 = 2147483647;
                } else {
                    uVar2 = (unsigned long)(*(unsigned int*)(stb_vorbis + 32) + arg2);
                }
                if (_fseek(*(FILE**)(stb_vorbis + 24), uVar2, 0) != 0) {
                    *(uint32_t*)(stb_vorbis + 128) = 1;
                    _fseek(*(FILE**)(stb_vorbis + 24), (unsigned long)*(unsigned int*)(stb_vorbis + 32), 2);
                }
            } else if ((unsigned long)arg2 + *(long*)(stb_vorbis + 48) < *(unsigned long*)(stb_vorbis + 56)) {
                *(unsigned long*)(stb_vorbis + 40) = (unsigned long)arg2 + *(long*)(stb_vorbis + 48);
            } else {
                *(unsigned long*)(stb_vorbis + 40) = *(unsigned long*)(stb_vorbis + 56);
                *(uint32_t*)(stb_vorbis + 128) = 1;
            }
        }
    }

    // 0x100b95ec0
    void vorbis_find_page(stb_vorbis* stb_vorbis, unsigned int* arg2, unsigned int* arg3) {
        uint32_t uVar1;
        char cVar2;
        unsigned char uVar3;
        uint8_t arg2_00;
        unsigned int arg2_01;
        unsigned int arg1;
        unsigned int uVar4;
        uint32_t unaff_EBX;
        int iVar5;
        long lVar6;
        int iVar7;
        unsigned int uVar8;
        unsigned char local_58[5];
        uint8_t local_53;
        unsigned int local_42;
        uint8_t local_3e;

        do {
            if (*(int*)(stb_vorbis + 128) == 0) {
                cVar2 = get8(stb_vorbis);
                if (cVar2 == 'O') {
                    arg2_01 = _stb_vorbis_get_file_offset(stb_vorbis);
                    iVar7 = 1;
                    uVar1 = 0;
                    if (arg2_01 - 25 <= *(unsigned int*)(stb_vorbis + 64)) {
                        lVar6 = 1;
                        do {
                            cVar2 = get8(stb_vorbis);
                            if (cVar2 != ogg_page_header[lVar6])
                                goto LAB_100b95f73;
                            lVar6 = lVar6 + 1;
                        } while (lVar6 != 4);
                        lVar6 = 4;
                    LAB_100b95f73:
                        if (*(int*)(stb_vorbis + 128) == 0) {
                            if ((int)lVar6 == 4) {
                                local_58[0] = ogg_page_header[0];
                                local_58[1] = ogg_page_header[1];
                                local_58[2] = ogg_page_header[2];
                                local_58[3] = ogg_page_header[3];
                                lVar6 = 4;
                                do {
                                    uVar3 = get8(stb_vorbis);
                                    local_58[lVar6] = uVar3;
                                    uVar4 = local_42;
                                    lVar6 = lVar6 + 1;
                                } while (lVar6 != 27);
                                iVar7 = 1;
                                uVar1 = 0;
                                if (*(int*)(stb_vorbis + 128) == 0) {
                                    if (local_58[4] == '\0') {
                                        local_42 = 0;
                                        lVar6 = 0;
                                        arg1 = 0;
                                        do {
                                            arg1 = crc32_update(arg1, local_58[lVar6]);
                                            lVar6 = lVar6 + 1;
                                        } while (lVar6 != 27);
                                        uVar8 = (unsigned int)local_3e;
                                        iVar5 = 0;
                                        if (local_3e != 0) {
                                            do {
                                                arg2_00 = get8(stb_vorbis);
                                                arg1 = crc32_update(arg1, arg2_00);
                                                iVar5 = iVar5 + (unsigned int)arg2_00;
                                                uVar8 = uVar8 - 1;
                                            } while (uVar8 != 0);
                                        }
                                        if (iVar5 != 0) {
                                            uVar1 = 0;
                                            if (*(int*)(stb_vorbis + 128) != 0)
                                                goto LAB_100b95fd9;
                                            do {
                                                uVar3 = get8(stb_vorbis);
                                                arg1 = crc32_update(arg1, uVar3);
                                                iVar5 = iVar5 - 1;
                                            } while (iVar5 != 0);
                                        }
                                        iVar7 = 0;
                                        uVar1 = unaff_EBX;
                                        if (arg1 == uVar4) {
                                            if (arg2 != nullptr) {
                                                uVar4 = _stb_vorbis_get_file_offset(stb_vorbis);
                                                *arg2 = uVar4;
                                            }
                                            if (arg3 != nullptr) {
                                                *arg3 = local_53 >> 2 & 1;
                                            }
                                            set_file_offset(stb_vorbis, arg2_01 - 1);
                                            iVar7 = 1;
                                            uVar1 = 1;
                                        }
                                    } else {
                                        iVar7 = 13;
                                        uVar1 = unaff_EBX;
                                    }
                                }
                            LAB_100b95fd9:
                                unaff_EBX = uVar1;
                                if ((iVar7 != 13) && (uVar1 = unaff_EBX, iVar7 != 0))
                                    goto LAB_100b96003;
                            }
                            set_file_offset(stb_vorbis, arg2_01);
                            iVar7 = 0;
                            uVar1 = unaff_EBX;
                        }
                    }
                LAB_100b96003:
                    unaff_EBX = uVar1;
                    if (iVar7 != 0)
                        goto LAB_100b95ef8;
                }
                iVar7 = 0;
            } else {
                unaff_EBX = 0;
                iVar7 = 1;
            }
        LAB_100b95ef8:
            if (iVar7 != 0) {
                return unaff_EBX;
            }
        } while (true);
    }

    // 0x100b96160
    void getn(stb_vorbis* stb_vorbis, unsigned char* arg2, int arg3) {
        void* pvVar1 = *(void**)(stb_vorbis + 40);
        size_t sVar2 = (size_t)arg3;
        if (pvVar1 == nullptr) {
            sVar2 = _fread(arg2, sVar2, 1, *(FILE**)(stb_vorbis + 24));
            if (sVar2 == 1) {
                return 1;
            }
        } else if ((long)pvVar1 + sVar2 <= *(unsigned long*)(stb_vorbis + 56)) {
            _memcpy(arg2, pvVar1, sVar2);
            *(size_t*)(stb_vorbis + 40) = *(long*)(stb_vorbis + 40) + sVar2;
            return 1;
        }
        *(uint32_t*)(stb_vorbis + 128) = 1;
        return 0;
    }

    // 0x100b961d0
    void get32(stb_vorbis* stb_vorbis) {
        uint8_t uVar1 = get8(stb_vorbis);
        uint8_t uVar2 = get8(stb_vorbis);
        uint8_t uVar3 = get8(stb_vorbis);
        uint8_t uVar4 = get8(stb_vorbis);
        return (((uint32_t)uVar4 << 24) |
                (uint32_t)((((uint32_t)uVar3 << 16) | (uint16_t)((((uint16_t)uVar2 << 8) | (uint8_t)uVar1)))));
    }

    // 0x100b96580
    void convert_samples_short(int arg1, short** arg2, int arg3, int arg4, float** arg5, int arg6, int arg7) {
        unsigned long uVar1;

        if (((arg4 < 7) && (arg1 < 3)) && (arg1 != arg4)) {
            if (0 < arg1) {
                uVar1 = 0;
                do {
                    compute_samples(
                        *(int*)(&convert_samples_short(int, short**, int, int, float**, int, int)::channel_selector +
                                uVar1 * 4 + (long)arg1 * 8),
                        arg2[uVar1] + arg3, arg4, arg5, arg6, arg7);
                    uVar1 = uVar1 + 1;
                } while ((unsigned int)arg1 != uVar1);
            }
        } else {
            if (arg1 < arg4) {
                arg4 = arg1;
            }
            if (arg4 < 1) {
                uVar1 = 0;
                if (arg1 < 1) {
                    return;
                }
            } else {
                uVar1 = 0;
                do {
                    copy_samples(arg2[uVar1] + arg3, arg5[uVar1] + arg6, arg7);
                    uVar1 = uVar1 + 1;
                } while ((unsigned int)arg4 != uVar1);
                if (arg1 <= (int)uVar1) {
                    return;
                }
            }
            uVar1 = uVar1 & 4294967295;
            do {
                ___bzero(arg2[uVar1] + arg3, (long)arg7 * 2);
                uVar1 = uVar1 + 1;
            } while ((unsigned int)arg1 != uVar1);
        }
    }

    // 0x100b96760
    void convert_channels_short_interleaved(int arg1, short* arg2, int arg3, float** arg4, int arg5, int arg6) {
        int iVar1;
        unsigned long uVar2;
        unsigned long uVar3;
        float fVar4;

        if (((arg3 < 7) && (arg1 < 3)) && (arg1 != arg3)) {
            if (arg1 != 2) {
                LogAssert("buf_c == 2",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                          "vorbis_std.code",
                          4887, nullptr);
            }
            iVar1 = 2;
            do {
                compute_stereo_samples(arg2, arg3, arg4, arg5, arg6);
                iVar1 = iVar1 - 1;
            } while (iVar1 != 0);
        } else {
            if (arg1 < arg3) {
                arg3 = arg1;
            }
            if (0 < arg6) {
                uVar3 = 0;
                do {
                    if (arg3 < 1) {
                        uVar2 = 0;
                    } else {
                        uVar2 = 0;
                        do {
                            fVar4 = arg4[uVar2][arg5 + uVar3] + 384.0;
                            if ((int)fVar4 < 1136623617) {
                                fVar4 = 383.0;
                            }
                            if (1136689150 < (int)fVar4) {
                                fVar4 = 4.59163e-41;
                            }
                            *arg2 = (uint16_t)fVar4;
                            arg2 = arg2 + 1;
                            uVar2 = uVar2 + 1;
                        } while ((unsigned int)arg3 != uVar2);
                    }
                    if ((int)(unsigned int)uVar2 < arg1) {
                        uVar2 = (unsigned long)(~(unsigned int)uVar2 + arg1);
                        ___bzero(arg2, uVar2 * 2 + 2);
                        arg2 = arg2 + uVar2 + 1;
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 != (unsigned int)arg6);
            }
        }
    }

    // 0x100b97de0
    void VorbisDecoderPacket::PacketT(unsigned long arg1) {
        new (this) PacketT(arg1);
        new (this) MakeSharedPool<PacketT<Array<unsigned char>>, 8>();
    }

    // 0x100b9a410
    unsigned int crc32_update(unsigned int arg1, unsigned char arg2) {
        uint32_t in_register_00000031;

        return arg1 << 8 ^ (&crc_table)[arg1 >> 24 ^ (((uint32_t)in_register_00000031 << 8) | (uint8_t)arg2)];
    }

    // 0x100b9a430
    void vorbis_decode_initial(stb_vorbis* stb_vorbis, int* arg2, int* arg3, int* arg4, int* arg5, int* arg6) {
        stb_vorbis sVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        bool bVar6;

        *(uint64_t*)(stb_vorbis + 1868) = 0;
        if (*(int*)(stb_vorbis + 128) == 0) {
            while (iVar2 = maybe_start_packet(stb_vorbis), iVar2 != 0) {
                iVar2 = get_bits(stb_vorbis, 1);
                if (iVar2 == 0) {
                    if ((*(long*)(stb_vorbis + 104) != 0) && (*(int*)(stb_vorbis + 112) != *(int*)(stb_vorbis + 124))) {
                        LogAssert("f->alloc.alloc_buffer_length_in_bytes == f->temp_offset",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                                  "workers/vorbis_std.code",
                                  2854, nullptr);
                    }
                    iVar2 = ilog(*(int*)(stb_vorbis + 472) - 1);
                    iVar2 = get_bits(stb_vorbis, iVar2);
                    if (iVar2 == -1) {
                        return 0;
                    }
                    if (*(int*)(stb_vorbis + 472) <= iVar2) {
                        return 0;
                    }
                    *arg6 = iVar2;
                    if (stb_vorbis[iVar2 * 6 + 476] == (stb_vorbis)0) {
                        iVar5 = *(int*)(stb_vorbis + 144);
                        bVar6 = false;
                        iVar4 = 0;
                    } else {
                        iVar5 = *(int*)(stb_vorbis + 148);
                        iVar3 = get_bits(stb_vorbis, 1);
                        iVar4 = get_bits(stb_vorbis, 1);
                        bVar6 = iVar3 != 0;
                    }
                    sVar1 = stb_vorbis[iVar2 * 6 + 476];
                    if ((sVar1 == (stb_vorbis)0) || (bVar6)) {
                        *arg2 = 0;
                        iVar2 = iVar5 >> 1;
                    } else {
                        *arg2 = iVar5 - *(int*)(stb_vorbis + 144) >> 2;
                        iVar2 = *(int*)(stb_vorbis + 144) + iVar5 >> 2;
                    }
                    *arg3 = iVar2;
                    if ((sVar1 == (stb_vorbis)0) || (iVar4 != 0)) {
                        *arg4 = iVar5 >> 1;
                    } else {
                        *arg4 = iVar5 * 3 - *(int*)(stb_vorbis + 144) >> 2;
                        iVar5 = iVar5 * 3 + *(int*)(stb_vorbis + 144) >> 2;
                    }
                    *arg5 = iVar5;
                    return 1;
                }
                if (stb_vorbis[68] != (stb_vorbis)0) {
                    error(stb_vorbis, 35);
                    return 0;
                }
                do {
                    iVar2 = get8_packet(stb_vorbis);
                } while (iVar2 != -1);
                if (*(int*)(stb_vorbis + 128) != 0) {
                    return 0;
                }
            }
        }
        return 0;
    }

    // 0x100b9a610
    void vorbis_decode_packet_rest(stb_vorbis* stb_vorbis, int* arg2, Mode* mode, int arg4, int arg5, int arg6,
                                   int arg7, int* arg8) {
        float fVar1;
        uint8_t bVar2;
        Mapping MVar3;
        uint8_t bVar4;
        uint8_t bVar5;
        bool cVar6;
        short sVar7;
        unsigned short uVar8;
        uint16_t* puVar9;
        bool bVar10;
        uint16_t uVar11;
        int iVar12;
        int iVar13;
        unsigned int uVar14;
        uint64_t uVar16;
        short sVar17;
        unsigned int uVar18;
        long lVar19;
        uint8_t* pbVar20;
        unsigned long uVar21;
        int iVar22;
        int iVar23;
        unsigned long uVar26;
        long lVar27;
        long lVar28;
        float* pfVar29;
        unsigned long uVar30;
        unsigned int uVar31;
        long lVar33;
        long lVar34;
        long lVar35;
        float fVar36;
        float fVar37;
        uint32_t in_stack_0000000c;
        unsigned char* in_stack_fffffffffffff588;
        int local_a00;
        unsigned int local_9d0;
        unsigned char local_9b8[256];
        float* local_8b8[16];
        uint32_t local_838;
        int local_438[256];

        int iVar24 = *(int*)(stb_vorbis + (unsigned long)(uint8_t)*mode * 4 + 136);
        long lVar32 = *(long*)(stb_vorbis + 464);
        long lVar25 = (unsigned long)(uint8_t)mode[1] * 48;
        Mapping* mapping = (Mapping*)(lVar32 + lVar25);
        long* plVar15 = (long*)(lVar32 + lVar25 + 8);
        if (0 < *(int*)(stb_vorbis + 4)) {
            lVar19 = 0;
            do {
                bVar2 = *(uint8_t*)(*plVar15 + 2 + lVar19 * 3);
                local_438[lVar19] = 0;
                MVar3 = mapping[bVar2 + 17];
                sVar7 = *(short*)(stb_vorbis + (unsigned long)(uint8_t)MVar3 * 2 + 172);
                if (sVar7 == 0) {
                    error(stb_vorbis, 21);
                } else {
                    lVar27 = *(long*)(stb_vorbis + 304);
                    iVar12 = get_bits(stb_vorbis, 1);
                    if (iVar12 != 0) {
                        lVar33 = (unsigned long)(uint8_t)MVar3 * 1596;
                        pbVar20 = (uint8_t*)(lVar27 + lVar33);
                        iVar12 = *(int*)(&DAT_100d6abcc + (unsigned long)*(uint8_t*)(lVar27 + 1588 + lVar33) * 4);
                        puVar9 = *(uint16_t**)(stb_vorbis + lVar19 * 8 + 1256);
                        iVar13 = ilog(iVar12);
                        uVar11 = get_bits(stb_vorbis, iVar13 - 1);
                        *puVar9 = uVar11;
                        uVar11 = get_bits(stb_vorbis, iVar13 - 1);
                        puVar9[1] = uVar11;
                        if (*(char*)(lVar27 + lVar33) != '\0') {
                            local_a00 = 2;
                            uVar26 = 0;
                            do {
                                uVar30 = (unsigned long)pbVar20[uVar26 + 1];
                                bVar2 = pbVar20[uVar30 + 33];
                                bVar4 = pbVar20[uVar30 + 49];
                                if (bVar4 == 0) {
                                    uVar31 = 0;
                                } else {
                                    lVar35 = *(long*)(stb_vorbis + 160);
                                    lVar28 = (unsigned long)pbVar20[uVar30 + 65] * 2120;
                                    if (*(int*)(stb_vorbis + 1760) < 10) {
                                        prep_huffman(stb_vorbis);
                                    }
                                    uVar31 = (unsigned int)*(
                                        short*)((Codebook*)(lVar35 + lVar28) +
                                                (unsigned long)(*(unsigned int*)(stb_vorbis + 1756) & 1023) * 2 + 48);
                                    if ((int)uVar31 < 0) {
                                        uVar31 = codebook_decode_scalar_raw(stb_vorbis, (Codebook*)(lVar35 + lVar28));
                                        cVar6 = *(char*)(lVar35 + 27 + lVar28);
                                    } else {
                                        bVar5 = *(uint8_t*)(*(long*)(lVar35 + 8 + lVar28) + (long)(int)uVar31);
                                        *(unsigned int*)(stb_vorbis + 1756) =
                                            *(unsigned int*)(stb_vorbis + 1756) >> (bVar5 & 31);
                                        iVar13 = *(int*)(stb_vorbis + 1760) - (unsigned int)bVar5;
                                        if (iVar13 < 0) {
                                            iVar13 = 0;
                                            uVar31 = 4294967295;
                                        }
                                        *(int*)(stb_vorbis + 1760) = iVar13;
                                        cVar6 = *(char*)(lVar35 + 27 + lVar28);
                                    }
                                    if (cVar6) {
                                        uVar31 =
                                            *(unsigned int*)(*(long*)(lVar35 + 2104 + lVar28) + (long)(int)uVar31 * 4);
                                    }
                                }
                                if (bVar2 != 0) {
                                    lVar35 = 0;
                                    do {
                                        uVar14 = uVar31 & ~(-1 << (bVar4 & 31));
                                        uVar31 = (int)uVar31 >> (bVar4 & 31);
                                        if ((long)*(short*)(pbVar20 + (long)(int)uVar14 * 2 + uVar30 * 16 + 82) < 0) {
                                            iVar13 = 0;
                                        } else {
                                            lVar28 = *(long*)(stb_vorbis + 160);
                                            lVar34 =
                                                (long)*(short*)(pbVar20 + (long)(int)uVar14 * 2 + uVar30 * 16 + 82) *
                                                2120;
                                            if (*(int*)(stb_vorbis + 1760) < 10) {
                                                prep_huffman(stb_vorbis);
                                            }
                                            iVar13 = (int)*(
                                                short*)((Codebook*)(lVar28 + lVar34) +
                                                        (unsigned long)(*(unsigned int*)(stb_vorbis + 1756) & 1023) *
                                                            2 +
                                                        48);
                                            if (iVar13 < 0) {
                                                iVar13 = codebook_decode_scalar_raw(stb_vorbis,
                                                                                    (Codebook*)(lVar28 + lVar34));
                                                cVar6 = *(char*)(lVar28 + 27 + lVar34);
                                            } else {
                                                bVar5 = *(uint8_t*)(*(long*)(lVar28 + 8 + lVar34) + (long)iVar13);
                                                *(unsigned int*)(stb_vorbis + 1756) =
                                                    *(unsigned int*)(stb_vorbis + 1756) >> (bVar5 & 31);
                                                iVar22 = *(int*)(stb_vorbis + 1760) - (unsigned int)bVar5;
                                                if (iVar22 < 0) {
                                                    iVar22 = 0;
                                                    iVar13 = -1;
                                                }
                                                *(int*)(stb_vorbis + 1760) = iVar22;
                                                cVar6 = *(char*)(lVar28 + 27 + lVar34);
                                            }
                                            if (cVar6) {
                                                iVar13 = *(int*)(*(long*)(lVar28 + 2104 + lVar34) + (long)iVar13 * 4);
                                            }
                                        }
                                        puVar9[local_a00 + lVar35] = (short)iVar13;
                                        lVar35 = lVar35 + 1;
                                        local_9d0 = (unsigned int)bVar2;
                                    } while (local_9d0 != (unsigned int)lVar35);
                                    local_a00 = local_a00 + (unsigned int)lVar35;
                                }
                                uVar26 = uVar26 + 1;
                            } while (uVar26 < *pbVar20);
                        }
                        if (*(int*)(stb_vorbis + 1760) != -1) {
                            local_838._0_2_ = 257;
                            uVar31 = *(unsigned int*)(lVar27 + 1592 + lVar33);
                            if (2 < (int)uVar31) {
                                lVar27 = lVar27 + lVar33;
                                lVar33 = 0;
                                do {
                                    uVar26 = (unsigned long)*(uint8_t*)(lVar27 + 1092 + lVar33 * 2);
                                    uVar30 = (unsigned long)*(uint8_t*)(lVar27 + 1093 + lVar33 * 2);
                                    iVar13 = predict_point((unsigned int)*(unsigned short*)(lVar27 + 342 + lVar33 * 2),
                                                           (unsigned int)*(unsigned short*)(pbVar20 + uVar26 * 2 + 338),
                                                           (unsigned int)*(unsigned short*)(pbVar20 + uVar30 * 2 + 338),
                                                           (int)(short)puVar9[uVar26], (int)(short)puVar9[uVar30]);
                                    uVar8 = puVar9[lVar33 + 2];
                                    uVar14 = (unsigned int)(short)uVar8;
                                    if (uVar14 == 0) {
                                        *(uint8_t*)((long)local_8b8 + lVar33 + 130) = 0;
                                    LAB_100b9aad8:
                                        sVar17 = (short)iVar13;
                                    LAB_100b9aae8:
                                        puVar9[lVar33 + 2] = sVar17;
                                    } else {
                                        iVar23 = iVar12 - iVar13;
                                        iVar22 = iVar13;
                                        if (iVar23 < iVar13) {
                                            iVar22 = iVar23;
                                        }
                                        *(uint8_t*)((long)local_8b8 + uVar30 + 128) = 1;
                                        *(uint8_t*)((long)local_8b8 + uVar26 + 128) = 1;
                                        *(uint8_t*)((long)local_8b8 + lVar33 + 130) = 1;
                                        if ((int)uVar14 < iVar22 * 2) {
                                            if ((uVar14 & 1) != 0) {
                                                iVar13 = iVar13 - (uVar14 + 1 >> 1);
                                                goto LAB_100b9aad8;
                                            }
                                            sVar17 = (short)(uVar14 >> 1) + (short)iVar13;
                                            goto LAB_100b9aae8;
                                        }
                                        if (iVar23 <= iVar13) {
                                            sVar17 = ~uVar8 + (short)iVar12;
                                            goto LAB_100b9aae8;
                                        }
                                    }
                                    lVar33 = lVar33 + 1;
                                } while ((unsigned long)uVar31 - 2 != lVar33);
                            }
                            if (0 < (int)uVar31) {
                                uVar26 = 0;
                                do {
                                    if (*(char*)((long)local_8b8 + uVar26 + 128) == '\0') {
                                        puVar9[uVar26] = 65535;
                                    }
                                    uVar26 = uVar26 + 1;
                                } while (uVar31 != uVar26);
                            }
                            goto LAB_100b9abfe;
                        }
                    }
                    local_438[lVar19] = 1;
                }
            LAB_100b9abfe:
                if (sVar7 == 0) {
                    uVar16 = 0;
                    goto LAB_100b9b120;
                }
                lVar19 = lVar19 + 1;
            } while (lVar19 < *(int*)(stb_vorbis + 4));
        }
        if ((*(long*)(stb_vorbis + 104) != 0) && (*(int*)(stb_vorbis + 112) != *(int*)(stb_vorbis + 124))) {
            LogAssert("f->alloc.alloc_buffer_length_in_bytes == f->temp_offset",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      3008, nullptr);
        }
        _memcpy(&local_838, local_438, (long)*(int*)(stb_vorbis + 4) << 2);
        uVar8 = *(unsigned short*)mapping;
        if ((unsigned long)uVar8 != 0) {
            lVar19 = *plVar15;
            lVar27 = 0;
            do {
                bVar2 = *(uint8_t*)(lVar19 + lVar27);
                if ((local_438[bVar2] == 0) || (local_438[*(uint8_t*)(lVar19 + 1 + lVar27)] == 0)) {
                    local_438[*(uint8_t*)(lVar19 + 1 + lVar27)] = 0;
                    local_438[bVar2] = 0;
                }
                lVar27 = lVar27 + 3;
            } while ((unsigned long)uVar8 * 3 != lVar27);
        }
        uVar31 = iVar24 >> 1;
        if (*(char*)(lVar32 + 16 + lVar25) != '\0') {
            uVar26 = 0;
            do {
                uVar14 = *(unsigned int*)(stb_vorbis + 4);
                iVar12 = 0;
                if (0 < (int)uVar14) {
                    pbVar20 = (uint8_t*)(*plVar15 + 2);
                    uVar30 = 0;
                    iVar12 = 0;
                    do {
                        if (uVar26 == *pbVar20) {
                            if (local_438[uVar30] == 0) {
                                local_9b8[iVar12] = '\0';
                                pfVar29 = *(float**)(stb_vorbis + uVar30 * 8 + 864);
                            } else {
                                local_9b8[iVar12] = '\x01';
                                pfVar29 = nullptr;
                            }
                            local_8b8[iVar12] = pfVar29;
                            iVar12 = iVar12 + 1;
                        }
                        uVar30 = uVar30 + 1;
                        pbVar20 = pbVar20 + 3;
                    } while (uVar14 != uVar30);
                }
                decode_residue(stb_vorbis, local_8b8, iVar12, uVar31, (unsigned int)(uint8_t)mapping[uVar26 + 32],
                               local_9b8);
                uVar26 = uVar26 + 1;
            } while (uVar26 < *(uint8_t*)(lVar32 + lVar25 + 16));
        }
        if ((*(long*)(stb_vorbis + 104) != 0) && (*(int*)(stb_vorbis + 112) != *(int*)(stb_vorbis + 124))) {
            LogAssert("f->alloc.alloc_buffer_length_in_bytes == f->temp_offset",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      3041, nullptr);
        }
        uVar26 = (unsigned long)*(unsigned short*)mapping;
        if (uVar26 != 0) {
            lVar32 = *plVar15;
            uVar30 = 1;
            if (1 < (int)uVar31) {
                uVar30 = (unsigned long)uVar31;
            }
            do {
                if (1 < iVar24) {
                    lVar19 = (uVar26 - 1) * 3;
                    lVar25 = *(long*)(stb_vorbis + (unsigned long)*(uint8_t*)(lVar32 + lVar19) * 8 + 864);
                    lVar19 = *(long*)(stb_vorbis + (unsigned long)*(uint8_t*)(lVar32 + 1 + lVar19) * 8 + 864);
                    uVar21 = 0;
                    do {
                        fVar37 = *(float*)(lVar25 + uVar21 * 4);
                        fVar1 = *(float*)(lVar19 + uVar21 * 4);
                        fVar36 = fVar37;
                        if (fVar37 <= 0.0) {
                            if (fVar1 <= 0.0) {
                                fVar36 = fVar37 - fVar1;
                            } else {
                                fVar37 = fVar1 + fVar37;
                            }
                        } else if (fVar1 <= 0.0) {
                            fVar36 = fVar1 + fVar37;
                        } else {
                            fVar37 = fVar37 - fVar1;
                        }
                        *(float*)(lVar25 + uVar21 * 4) = fVar36;
                        *(float*)(lVar19 + uVar21 * 4) = fVar37;
                        uVar21 = uVar21 + 1;
                    } while (uVar30 != uVar21);
                }
                bVar10 = 1 < (long)uVar26;
                uVar26 = uVar26 - 1;
            } while (bVar10);
        }
        if (0 < *(int*)(stb_vorbis + 4)) {
            lVar32 = 0;
            do {
                if (*(int*)((long)local_8b8 + lVar32 * 4 + 128) == 0) {
                    do_floor(stb_vorbis, mapping, (int)lVar32, iVar24, *(float**)(stb_vorbis + lVar32 * 8 + 864),
                             *(short**)(stb_vorbis + lVar32 * 8 + 1256), in_stack_fffffffffffff588);
                } else {
                    ___bzero(*(uint64_t*)(stb_vorbis + lVar32 * 8 + 864), (long)(int)uVar31 << 2);
                }
                lVar32 = lVar32 + 1;
            } while (lVar32 < *(int*)(stb_vorbis + 4));
        }
        if (0 < *(int*)(stb_vorbis + 4)) {
            lVar32 = 0;
            do {
                inverse_mdct(*(float**)(stb_vorbis + lVar32 * 8 + 864), iVar24, stb_vorbis,
                             (unsigned int)(uint8_t)*mode);
                lVar32 = lVar32 + 1;
            } while (lVar32 < *(int*)(stb_vorbis + 4));
        }
        flush_packet(stb_vorbis);
        if (stb_vorbis[1741] == (stb_vorbis)0) {
            iVar12 = *(int*)(stb_vorbis + 1776);
            if (iVar12 != 0) {
                if (iVar12 < arg5 - arg4) {
                    arg4 = arg4 + iVar12;
                    *(int*)(((uint64_t)in_stack_0000000c << 32) | (uint32_t)arg7) = arg4;
                    *(uint32_t*)(stb_vorbis + 1776) = 0;
                } else {
                    *(int*)(stb_vorbis + 1776) = iVar12 - (arg5 - arg4);
                    *(int*)(((uint64_t)in_stack_0000000c << 32) | (uint32_t)arg7) = arg5;
                    arg4 = arg5;
                }
            }
        } else {
            *(unsigned int*)(stb_vorbis + 1384) = -uVar31;
            *(int*)(stb_vorbis + 1776) = iVar24 - arg6;
            *(uint32_t*)(stb_vorbis + 1388) = 1;
            stb_vorbis[1741] = (stb_vorbis)0;
        }
        if (*(int*)(stb_vorbis + 1752) == *(int*)(stb_vorbis + 1768)) {
            if ((*(int*)(stb_vorbis + 1388) != 0) && (((uint8_t)stb_vorbis[1739] & 4) != 0)) {
                uVar18 = (arg6 - iVar24) + *(int*)(stb_vorbis + 1772);
                uVar14 = *(unsigned int*)(stb_vorbis + 1384);
                uVar16 = 0;
                if (uVar18 < uVar14 + arg6) {
                    iVar24 = uVar18 - uVar14;
                    if (uVar18 < uVar14) {
                        iVar24 = 0;
                    }
                    *arg2 = iVar24 + arg4;
                    *(int*)(stb_vorbis + 1384) = *(int*)(stb_vorbis + 1384) + iVar24 + arg4;
                    uVar16 = 1;
                }
                if (uVar18 < uVar14 + arg6)
                    goto LAB_100b9b120;
            }
            *(unsigned int*)(stb_vorbis + 1384) = (arg4 - uVar31) + *(int*)(stb_vorbis + 1772);
            *(uint32_t*)(stb_vorbis + 1388) = 1;
        }
        if (*(int*)(stb_vorbis + 1388) != 0) {
            *(int*)(stb_vorbis + 1384) = *(int*)(stb_vorbis + 1384) + (arg5 - arg4);
        }
        if ((*(long*)(stb_vorbis + 104) != 0) && (*(int*)(stb_vorbis + 112) != *(int*)(stb_vorbis + 124))) {
            LogAssert("f->alloc.alloc_buffer_length_in_bytes == f->temp_offset",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      3162, nullptr);
        }
        *arg2 = arg6;
        uVar16 = 1;
    LAB_100b9b120:
        return uVar16;
    }

    // 0x100b9b1b0
    unsigned int get_bits(stb_vorbis* stb_vorbis, int arg2) {
        int iVar1 = *(int*)(stb_vorbis + 1760);
        unsigned int uVar3 = 0;
        if (-1 < iVar1) {
            if (iVar1 < arg2) {
                if (24 < arg2) {
                    iVar1 = get_bits(stb_vorbis, 24);
                    return get_bits(stb_vorbis, arg2 - 24) * 16777216 + iVar1;
                }
                if (iVar1 == 0) {
                    *(uint32_t*)(stb_vorbis + 1756) = 0;
                    iVar1 = *(int*)(stb_vorbis + 1760);
                } else {
                    iVar1 = *(int*)(stb_vorbis + 1760);
                }
                while (iVar1 < arg2) {
                    iVar1 = get8_packet_raw(stb_vorbis);
                    if (iVar1 == -1) {
                        *(uint32_t*)(stb_vorbis + 1760) = 4294967295;
                        return 0;
                    }
                    *(int*)(stb_vorbis + 1756) =
                        *(int*)(stb_vorbis + 1756) + (iVar1 << ((uint8_t)*(int*)(stb_vorbis + 1760) & 31));
                    iVar1 = *(int*)(stb_vorbis + 1760) + 8;
                    *(int*)(stb_vorbis + 1760) = iVar1;
                }
            }
            if (-1 < *(int*)(stb_vorbis + 1760)) {
                uVar3 = ~(-1 << ((uint8_t)arg2 & 31)) & *(unsigned int*)(stb_vorbis + 1756);
                *(unsigned int*)(stb_vorbis + 1756) = *(unsigned int*)(stb_vorbis + 1756) >> ((uint8_t)arg2 & 31);
                *(int*)(stb_vorbis + 1760) = *(int*)(stb_vorbis + 1760) - arg2;
            }
        }
        return uVar3;
    }

    // 0x100b9b2b0
    int ilog(int arg1) {
        int iVar1;

        if (16383 < arg1) {
            if (16777215 < arg1) {
                iVar1 = 0;
                if (arg1 < 536870912) {
                    iVar1 = (char)(&ilog(int)::log2_4)[(arg1 >> 25)] + 25;
                }
                return iVar1;
            }
            if (arg1 < 524288) {
                return (char)(&ilog(int)::log2_4)[(arg1 >> 15)] + 15;
            }
            return (char)(&ilog(int)::log2_4)[(arg1 >> 20)] + 20;
        }
        if (arg1 < 16) {
            return (int)(char)(&ilog(int)::log2_4)[arg1];
        }
        if (arg1 < 512) {
            return (char)(&ilog(int)::log2_4)[(arg1 >> 5)] + 5;
        }
        return (char)(&ilog(int)::log2_4)[(arg1 >> 10)] + 10;
    }

    // 0x100b9b360
    unsigned long get8_packet_raw(stb_vorbis* stb_vorbis) {
        if (stb_vorbis[1740] == (stb_vorbis)0) {
            if (*(int*)(stb_vorbis + 1748) != 0) {
                return 4294967295;
            }
            if (next_segment(stb_vorbis) == 0) {
                return 4294967295;
            }
        }
        if (stb_vorbis[1740] == (stb_vorbis)0) {
            LogAssert("f->bytes_in_seg > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      1158, nullptr);
        }
        stb_vorbis[1740] = (stb_vorbis)((char)stb_vorbis[1740] - 1);
        *(int*)(stb_vorbis + 1764) = *(int*)(stb_vorbis + 1764) + 1;
        uint8_t bVar1 = get8(stb_vorbis);
        return (unsigned long)bVar1;
    }

    // 0x100b9b3e0
    stb_vorbis next_segment(stb_vorbis* stb_vorbis) {
        int iVar2;

        if (*(int*)(stb_vorbis + 1748) != 0) {
            return (stb_vorbis)0;
        }
        if (*(int*)(stb_vorbis + 1744) == -1) {
            *(int*)(stb_vorbis + 1752) = *(int*)(stb_vorbis + 1480) - 1;
            iVar2 = start_page(stb_vorbis);
            if (iVar2 == 0) {
                *(uint32_t*)(stb_vorbis + 1748) = 1;
                return (stb_vorbis)0;
            }
            if (((uint8_t)stb_vorbis[1739] & 1) == 0) {
                error(stb_vorbis, 32);
                return (stb_vorbis)0;
            }
        }
        iVar2 = *(int*)(stb_vorbis + 1744);
        *(int*)(stb_vorbis + 1744) = iVar2 + 1;
        stb_vorbis sVar1 = stb_vorbis[iVar2 + 1484];
        if (sVar1 != (stb_vorbis)255) {
            *(uint32_t*)(stb_vorbis + 1748) = 1;
            *(int*)(stb_vorbis + 1752) = iVar2;
        }
        if (*(int*)(stb_vorbis + 1480) <= iVar2 + 1) {
            *(uint32_t*)(stb_vorbis + 1744) = 4294967295;
        }
        if (stb_vorbis[1740] != (stb_vorbis)0) {
            LogAssert("f->bytes_in_seg == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      1144, nullptr);
        }
        stb_vorbis[1740] = sVar1;
        return sVar1;
    }

    // 0x100b9b4c0
    unsigned int get8(stb_vorbis* stb_vorbis) {
        unsigned int uVar2;

        uint8_t* pbVar1 = *(uint8_t**)(stb_vorbis + 40);
        if (pbVar1 == nullptr) {
            uVar2 = _fgetc(*(FILE**)(stb_vorbis + 24));
            if (uVar2 != 4294967295)
                goto LAB_100b9b4fe;
        } else if (pbVar1 < *(uint8_t**)(stb_vorbis + 56)) {
            *(uint8_t**)(stb_vorbis + 40) = pbVar1 + 1;
            uVar2 = (unsigned int)*pbVar1;
            goto LAB_100b9b4fe;
        }
        *(uint32_t*)(stb_vorbis + 128) = 1;
        uVar2 = 0;
    LAB_100b9b4fe:
        return uVar2 & 255;
    }

    // 0x100b9b510
    void start_page(stb_vorbis* stb_vorbis) {
        uint64_t uVar2;

        if (capture_pattern(stb_vorbis) == 0) {
            error(stb_vorbis, 30);
            uVar2 = 0;
        } else {
            uVar2 = start_page_no_capturepattern(stb_vorbis);
        }
        return uVar2;
    }

    // 0x100b9b540
    bool capture_pattern(stb_vorbis* stb_vorbis) {
        char cVar1 = get8(stb_vorbis);
        bool bVar2 = false;
        if (cVar1 == 'O') {
            cVar1 = get8(stb_vorbis);
            if (cVar1 == 'g') {
                cVar1 = get8(stb_vorbis);
                if (cVar1 == 'g') {
                    cVar1 = get8(stb_vorbis);
                    bVar2 = cVar1 == 'S';
                }
            }
        }
        return bVar2;
    }

    // 0x100b9b590
    void start_page_no_capturepattern(stb_vorbis* stb_vorbis) {
        long lVar1;
        unsigned int uVar2;
        long lVar3;
        uint8_t bVar6;
        int iVar7;
        int iVar8;
        uint32_t uVar9;
        long lVar11;
        unsigned long uVar12;
        STBVorbisError stbVorbisError;

        if (get8(stb_vorbis) == '\0') {
            stb_vorbis[1739] = (stb_vorbis)get8(stb_vorbis);
            iVar7 = get32(stb_vorbis);
            iVar8 = get32(stb_vorbis);
            get32(stb_vorbis);
            uVar9 = get32(stb_vorbis);
            *(uint32_t*)(stb_vorbis + 1476) = uVar9;
            get32(stb_vorbis);
            bVar6 = get8(stb_vorbis);
            *(unsigned int*)(stb_vorbis + 1480) = (unsigned int)bVar6;
            if (getn(stb_vorbis, (unsigned char*)(stb_vorbis + 1484), (unsigned int)bVar6) != 0) {
                *(uint32_t*)(stb_vorbis + 1768) = 4294967294;
                if ((iVar7 != -1) || (iVar8 != -1)) {
                    lVar11 = (long)*(int*)(stb_vorbis + 1480);
                    do {
                        if (lVar11 < 1)
                            goto LAB_100b9b663;
                        lVar1 = lVar11 - 1;
                        lVar3 = lVar11 + 1483;
                        lVar11 = lVar1;
                    } while (stb_vorbis[lVar3] == (stb_vorbis)255);
                    *(int*)(stb_vorbis + 1768) = (int)lVar1;
                    *(int*)(stb_vorbis + 1772) = iVar7;
                }
            LAB_100b9b663:
                if (stb_vorbis[1741] != (stb_vorbis)0) {
                    uVar2 = *(unsigned int*)(stb_vorbis + 1480);
                    if ((int)uVar2 < 1) {
                        iVar8 = 27;
                    } else {
                        uVar12 = 0;
                        iVar8 = 0;
                        do {
                            iVar8 = iVar8 + (unsigned int)(uint8_t)stb_vorbis[uVar12 + 1484];
                            uVar12 = uVar12 + 1;
                        } while (uVar2 != uVar12);
                        iVar8 = iVar8 + 27;
                    }
                    *(int*)(stb_vorbis + 76) = *(int*)(stb_vorbis + 72);
                    *(unsigned int*)(stb_vorbis + 80) = uVar2 + iVar8 + *(int*)(stb_vorbis + 72);
                    *(int*)(stb_vorbis + 84) = iVar7;
                }
                *(uint32_t*)(stb_vorbis + 1744) = 0;
                return 1;
            }
            stbVorbisError = 10;
        } else {
            stbVorbisError = 31;
        }
        error(stb_vorbis, stbVorbisError);
        return 0;
    }

    // 0x100b9b6e0
    void prep_huffman(stb_vorbis* stb_vorbis) {
        int iVar1;
        int iVar2;

        if (*(int*)(stb_vorbis + 1760) < 25) {
            if (*(int*)(stb_vorbis + 1760) == 0) {
                *(uint32_t*)(stb_vorbis + 1756) = 0;
            }
            do {
                if ((*(int*)(stb_vorbis + 1748) != 0) && (stb_vorbis[1740] == (stb_vorbis)0)) {
                    return;
                }
                iVar2 = get8_packet_raw(stb_vorbis);
                if (iVar2 == -1) {
                    return;
                }
                iVar1 = *(int*)(stb_vorbis + 1760);
                *(int*)(stb_vorbis + 1756) = *(int*)(stb_vorbis + 1756) + (iVar2 << ((uint8_t)iVar1 & 31));
                *(int*)(stb_vorbis + 1760) = iVar1 + 8;
            } while (iVar1 < 17);
        }
    }

    // 0x100b9b760
    unsigned long codebook_decode_scalar_raw(stb_vorbis* stb_vorbis, Codebook* codebook) {
        uint8_t bVar1;
        long lVar2;
        unsigned long uVar4;
        unsigned int uVar5;
        int iVar7;

        prep_huffman(stb_vorbis);
        if ((*(long*)(codebook + 2096) == 0) && (*(long*)(codebook + 40) == 0)) {
            LogAssert("c->sorted_codewords || c->codewords",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      1239, nullptr);
        }
        if (*(int*)(codebook + 4) < 9) {
            if (*(long*)(codebook + 40) != 0)
                goto LAB_100b9b88c;
        } else if (*(long*)(codebook + 2096) == 0) {
        LAB_100b9b88c:
            if (codebook[27] != (Codebook)0) {
                LogAssert("!c->sparse",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                          "vorbis_std.code",
                          1273, nullptr);
            }
            if (0 < (int)*(unsigned int*)(codebook + 4)) {
                lVar2 = *(long*)(codebook + 8);
                uVar4 = 0;
                do {
                    bVar1 = *(uint8_t*)(lVar2 + uVar4);
                    if ((bVar1 != 255) && (*(unsigned int*)(*(long*)(codebook + 40) + uVar4 * 4) ==
                                           (~(-1 << (bVar1 & 31)) & *(unsigned int*)(stb_vorbis + 1756)))) {
                        if ((int)(unsigned int)bVar1 <= *(int*)(stb_vorbis + 1760)) {
                            *(unsigned int*)(stb_vorbis + 1756) = *(unsigned int*)(stb_vorbis + 1756) >> (bVar1 & 31);
                            *(unsigned int*)(stb_vorbis + 1760) =
                                *(int*)(stb_vorbis + 1760) - (unsigned int)*(uint8_t*)(lVar2 + uVar4);
                            return uVar4;
                        }
                        goto LAB_100b9b933;
                    }
                    uVar4 = uVar4 + 1;
                } while (*(unsigned int*)(codebook + 4) != uVar4);
            }
            error(stb_vorbis, 21);
        LAB_100b9b933:
            *(uint32_t*)(stb_vorbis + 1760) = 0;
            return 4294967295;
        }
        unsigned int arg1 = *(unsigned int*)(stb_vorbis + 1756);
        unsigned int uVar3 = bit_reverse(arg1);
        int iVar6 = *(int*)(codebook + 2112);
        uVar4 = 0;
        if (1 < iVar6) {
            uVar5 = 0;
            do {
                iVar7 = iVar6 >> 1;
                if (uVar3 < *(unsigned int*)(*(long*)(codebook + 2096) + (long)(int)(iVar7 + uVar5) * 4)) {
                    iVar6 = iVar7;
                } else {
                    iVar6 = iVar6 - iVar7;
                    uVar5 = iVar7 + uVar5;
                }
                uVar4 = (unsigned long)uVar5;
            } while (1 < iVar6);
        }
        if (codebook[27] == (Codebook)0) {
            uVar4 = (unsigned long)*(unsigned int*)(*(long*)(codebook + 2104) + (long)(int)uVar4 * 4);
        }
        bVar1 = *(uint8_t*)(*(long*)(codebook + 8) + (long)(int)uVar4);
        if (*(int*)(stb_vorbis + 1760) < (int)(unsigned int)bVar1) {
            uVar4 = 4294967295;
            *(uint32_t*)(stb_vorbis + 1760) = 0;
        } else {
            *(unsigned int*)(stb_vorbis + 1756) = arg1 >> (bVar1 & 31);
            *(unsigned int*)(stb_vorbis + 1760) = *(int*)(stb_vorbis + 1760) - (unsigned int)bVar1;
        }
        return uVar4;
    }

    // 0x100b9b950
    int predict_point(int arg1, int arg2, int arg3, int arg4, int arg5) {
        int iVar2 = arg5 - arg4;
        int iVar1 = -iVar2;
        if (-iVar2 < 0) {
            iVar1 = iVar2;
        }
        iVar1 = (iVar1 * (arg1 - arg2)) / (arg3 - arg2);
        if (iVar2 < 0) {
            iVar1 = -iVar1;
        }
        return iVar1 + arg4;
    }

    // 0x100b9b980
    void decode_residue(stb_vorbis* stb_vorbis, float** arg2, int arg3, int arg4, int arg5, unsigned char* arg6) {
        uint8_t bVar1;
        bool cVar2;
        unsigned int uVar3;
        float* pfVar4;
        long lVar5;
        bool bVar6;
        float** ppfVar7;
        stb_vorbis* psVar8;
        int iVar10;
        long* plVar12;
        long lVar13;
        uint32_t in_register_0000000c;
        Codebook* pCVar15;
        long lVar17;
        long* plVar18;
        uint64_t uStack_b8;
        int local_ac;
        unsigned int local_60;
        int local_5c;
        long local_58;

        long* local_a0 = (long*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4);
        long* local_68 = *(long**)(stb_vorbis + 448);
        long lVar21 = (long)arg5;
        unsigned int local_b0 = (unsigned int)*(unsigned short*)(stb_vorbis + lVar21 * 2 + 316);
        long lVar22 = lVar21 * 32;
        long local_90 =
            (long)*(int*)(*(long*)(stb_vorbis + 160) + (unsigned long)*(uint8_t*)((long)local_68 + lVar22 + 13) * 2120);
        unsigned long uVar16 =
            (unsigned long)(unsigned int)(*(int*)((long)local_68 + lVar22 + 4) - (int)local_68[lVar21 * 4]) /
            (unsigned long)*(unsigned int*)(local_68 + lVar21 * 4 + 1);
        uStack_b8._4_4_ = *(uint32_t*)(stb_vorbis + 124);
        int iVar14 = (int)uVar16;
        unsigned char* local_50 = arg6;
        if (*(long*)(stb_vorbis + 104) == 0) {
            plVar18 = (long*)((long)&uStack_b8 -
                              (((long)iVar14 * 8 + 8) * (long)*(int*)(stb_vorbis + 4) + 15U & 18446744073709551600));
            plVar12 = plVar18;
        } else {
            plVar12 = (long*)setup_temp_malloc(stb_vorbis, (iVar14 * 8 + 8) * *(int*)(stb_vorbis + 4));
            plVar18 = &uStack_b8;
        }
        unsigned int uVar11 = (unsigned int)arg3;
        Codebook* pCVar19 = (Codebook*)(unsigned long)(unsigned int)arg3;
        int iVar9 = *(int*)(stb_vorbis + 4);
        long* local_88 = plVar12;
        unsigned long local_48 = uVar16;
        plVar18[-1] = 4307139196;
        make_block_array(plVar12, iVar9, iVar14 * 8);
        plVar12 = local_68;
        Codebook* local_78 = pCVar19;
        unsigned char* puVar20 = local_50;
        if (0 < (int)uVar11) {
            pCVar15 = nullptr;
            do {
                if (puVar20[pCVar15] == '\0') {
                    pfVar4 = arg2[pCVar15];
                    plVar18[-1] = 4307139266;
                    ___bzero(pfVar4);
                    puVar20 = local_50;
                    pCVar19 = local_78;
                }
                pCVar15 = pCVar15 + 1;
            } while (pCVar19 != pCVar15);
        }
        uint8_t* local_70 = (uint8_t*)((long)plVar12 + lVar22 + 13);
        long* local_98 = plVar12 + lVar21 * 4;
        if (((short)local_b0 == 2) && ((unsigned int)arg3 != 1)) {
            if ((int)(unsigned int)arg3 < 1) {
                pCVar19 = nullptr;
            } else {
                pCVar15 = nullptr;
                do {
                    if (puVar20[pCVar15] == '\0') {
                        uVar11 = (unsigned int)pCVar15;
                        goto joined_r0x000100b9be34;
                    }
                    pCVar15 = pCVar15 + 1;
                } while (pCVar19 != pCVar15);
            }
            uVar11 = (unsigned int)pCVar19;
        joined_r0x000100b9be34:
            if (uVar11 != (unsigned int)arg3) {
                local_68 = plVar12 + lVar21 * 4 + 2;
                lVar21 = 0;
                uVar16 = local_48;
                do {
                    iVar14 = 0;
                    puVar20 = nullptr;
                    if ((unsigned int)arg3 == 2) {
                        do {
                            psVar8 = stb_vorbis;
                            if ((int)uVar16 <= (int)puVar20)
                                goto LAB_100b9c594;
                            uVar11 = *(int*)(local_70 - 5) * (int)puVar20 + (int)*local_98;
                            local_60 = uVar11 & 1;
                            local_5c = (int)uVar11 >> 1;
                            lVar22 = (long)iVar14;
                            local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)iVar14);
                            local_50 = puVar20;
                            if (lVar21 == 0) {
                                lVar17 = *(long*)(stb_vorbis + 160);
                                lVar13 = (unsigned long)*local_70 * 2120;
                                pCVar19 = (Codebook*)(lVar17 + lVar13);
                                if (*(int*)(stb_vorbis + 1760) < 10) {
                                    local_78 = (Codebook*)(lVar17 + lVar13);
                                    plVar18[-1] = 4307141201;
                                    prep_huffman(psVar8);
                                    pCVar19 = local_78;
                                }
                                iVar9 = (int)*(
                                    short*)(pCVar19 + (unsigned long)(*(unsigned int*)(psVar8 + 1756) & 1023) * 2 + 48);
                                if (iVar9 < 0) {
                                    plVar18[-1] = 4307141309;
                                    iVar9 = codebook_decode_scalar_raw(psVar8, pCVar19);
                                } else {
                                    bVar1 = *(uint8_t*)(*(long*)(lVar17 + 8 + lVar13) + (long)iVar9);
                                    *(unsigned int*)(psVar8 + 1756) = *(unsigned int*)(psVar8 + 1756) >> (bVar1 & 31);
                                    iVar14 = *(int*)(psVar8 + 1760) - (unsigned int)bVar1;
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
                                    *(uint64_t*)(*local_88 + lVar22 * 8) = *(uint64_t*)(*local_68 + (long)iVar9 * 8);
                                    bVar6 = false;
                                    if (iVar9 != -1)
                                        goto LAB_100b9c12c;
                                }
                            } else {
                            LAB_100b9c12c:
                                psVar8 = stb_vorbis;
                                puVar20 = local_50;
                                if (0 < (int)local_90) {
                                    iVar14 = (int)local_50;
                                    lVar17 = 1;
                                    do {
                                        plVar12 = local_a0;
                                        ppfVar7 = arg2;
                                        uVar11 = *(unsigned int*)(local_70 - 5);
                                        lVar13 = (long)*(
                                            short*)((unsigned long)*(uint8_t*)(*(long*)(*local_88 + lVar22 * 8) - 1 +
                                                                               lVar17) *
                                                        16 +
                                                    local_68[1] + lVar21 * 2);
                                        iVar9 = (int)lVar17;
                                        if (lVar13 < 0) {
                                            uVar11 = (iVar9 + iVar14 - 1) * uVar11 + uVar11 + (int)*local_98;
                                            local_60 = uVar11 & 1;
                                            local_5c = (int)uVar11 >> 1;
                                        } else {
                                            lVar5 = *(long*)(psVar8 + 160);
                                            plVar18[-2] = (unsigned long)uVar11;
                                            plVar18[-3] = 4307141022;
                                            iVar10 = codebook_decode_deinterleave_repeat_2(
                                                psVar8, (Codebook*)(lVar13 * 2120 + lVar5), ppfVar7, (int*)&local_60,
                                                &local_5c, (int)plVar12, (int)plVar18[-2]);
                                            if (iVar10 == 0) {
                                                bVar6 = true;
                                                uVar16 = local_48;
                                                puVar20 = (unsigned char*)(unsigned long)(((int)local_50 + iVar9) - 1);
                                                iVar14 = (int)local_58;
                                                goto LAB_100b9c0e5;
                                            }
                                        }
                                        lVar13 = lVar17 + 1;
                                        if (local_90 <= lVar17)
                                            break;
                                        lVar17 = lVar13;
                                    } while (iVar9 + iVar14 < (int)local_48);
                                    puVar20 = (unsigned char*)(unsigned long)(((int)local_50 + (int)lVar13) - 1);
                                    uVar16 = local_48;
                                    iVar14 = (int)local_58;
                                }
                                bVar6 = false;
                                iVar14 = iVar14 + 1;
                            }
                        LAB_100b9c0e5:
                        } while (!bVar6);
                    } else {
                        uVar11 = (unsigned int)arg3;
                        if ((unsigned int)arg3 == 1) {
                            do {
                                psVar8 = stb_vorbis;
                                if ((int)uVar16 <= (int)puVar20) {
                                    bVar6 = false;
                                    break;
                                }
                                local_60 = 0;
                                local_5c = *(int*)(local_70 - 5) * (int)puVar20 + (int)*local_98;
                                lVar22 = (long)iVar14;
                                local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)iVar14);
                                local_50 = puVar20;
                                if (lVar21 == 0) {
                                    lVar17 = *(long*)(stb_vorbis + 160);
                                    lVar13 = (unsigned long)*local_70 * 2120;
                                    pCVar19 = (Codebook*)(lVar17 + lVar13);
                                    if (*(int*)(stb_vorbis + 1760) < 10) {
                                        local_78 = (Codebook*)(lVar17 + lVar13);
                                        plVar18[-1] = 4307141794;
                                        prep_huffman(psVar8);
                                        pCVar19 = local_78;
                                    }
                                    iVar9 = (int)*(short*)(pCVar19 +
                                                           (unsigned long)(*(unsigned int*)(psVar8 + 1756) & 1023) * 2 +
                                                           48);
                                    if (iVar9 < 0) {
                                        plVar18[-1] = 4307141901;
                                        iVar9 = codebook_decode_scalar_raw(psVar8, pCVar19);
                                    } else {
                                        bVar1 = *(uint8_t*)(*(long*)(lVar17 + 8 + lVar13) + (long)iVar9);
                                        *(unsigned int*)(psVar8 + 1756) =
                                            *(unsigned int*)(psVar8 + 1756) >> (bVar1 & 31);
                                        iVar14 = *(int*)(psVar8 + 1760) - (unsigned int)bVar1;
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
                                    uVar11 = (unsigned int)arg3;
                                    iVar14 = (int)local_58;
                                    if (iVar9 == -1) {
                                        bVar6 = true;
                                    } else {
                                        *(uint64_t*)(*local_88 + lVar22 * 8) =
                                            *(uint64_t*)(*local_68 + (long)iVar9 * 8);
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
                                            psVar8 = stb_vorbis;
                                            ppfVar7 = arg2;
                                            uVar3 = *(unsigned int*)(local_70 - 5);
                                            lVar13 = (long)*(
                                                short*)((unsigned long)*(uint8_t*)(*(long*)(*local_88 + lVar22 * 8) -
                                                                                   1 + lVar17) *
                                                            16 +
                                                        local_68[1] + lVar21 * 2);
                                            iVar9 = (int)lVar17;
                                            if (lVar13 < 0) {
                                                local_60 = 0;
                                                local_5c = (iVar9 + iVar14 - 1) * uVar3 + uVar3 + (int)*local_98;
                                            } else {
                                                lVar5 = *(long*)(stb_vorbis + 160);
                                                plVar18[-1] = (unsigned long)uVar3;
                                                plVar18[-2] = (long)local_a0;
                                                plVar18[-3] = 4307141629;
                                                iVar10 = codebook_decode_deinterleave_repeat(
                                                    psVar8, (Codebook*)(lVar13 * 2120 + lVar5), ppfVar7, uVar11,
                                                    (int*)&local_60, &local_5c, (int)plVar18[-2], (int)plVar18[-1]);
                                                if (iVar10 == 0) {
                                                    bVar6 = true;
                                                    uVar16 = local_48;
                                                    puVar20 =
                                                        (unsigned char*)(unsigned long)(((int)local_50 + iVar9) - 1);
                                                    iVar14 = (int)local_58;
                                                    goto LAB_100b9c345;
                                                }
                                            }
                                            lVar13 = lVar17 + 1;
                                            if (local_90 <= lVar17)
                                                break;
                                            lVar17 = lVar13;
                                        } while (iVar9 + iVar14 < (int)local_48);
                                        puVar20 = (unsigned char*)(unsigned long)(((int)local_50 + (int)lVar13) - 1);
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
                                psVar8 = stb_vorbis;
                                if ((int)uVar16 <= (int)puVar20)
                                    goto LAB_100b9c594;
                                iVar9 = *(int*)(local_70 - 5) * (int)puVar20 + (int)*local_98;
                                local_60 = iVar9 % (int)(unsigned int)arg3;
                                local_5c = iVar9 / (int)(unsigned int)arg3;
                                lVar22 = (long)iVar14;
                                local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)iVar14);
                                local_50 = puVar20;
                                if (lVar21 == 0) {
                                    lVar17 = *(long*)(stb_vorbis + 160);
                                    lVar13 = (unsigned long)*local_70 * 2120;
                                    pCVar19 = (Codebook*)(lVar17 + lVar13);
                                    if (*(int*)(stb_vorbis + 1760) < 10) {
                                        local_78 = (Codebook*)(lVar17 + lVar13);
                                        plVar18[-1] = 4307140610;
                                        prep_huffman(psVar8);
                                        pCVar19 = local_78;
                                    }
                                    iVar9 = (int)*(short*)(pCVar19 +
                                                           (unsigned long)(*(unsigned int*)(psVar8 + 1756) & 1023) * 2 +
                                                           48);
                                    if (iVar9 < 0) {
                                        plVar18[-1] = 4307140776;
                                        iVar9 = codebook_decode_scalar_raw(psVar8, pCVar19);
                                        cVar2 = *(char*)(lVar17 + 27 + lVar13);
                                        puVar20 = local_50;
                                        uVar16 = local_48;
                                    } else {
                                        bVar1 = *(uint8_t*)(*(long*)(lVar17 + 8 + lVar13) + (long)iVar9);
                                        *(unsigned int*)(psVar8 + 1756) =
                                            *(unsigned int*)(psVar8 + 1756) >> (bVar1 & 31);
                                        iVar14 = *(int*)(psVar8 + 1760) - (unsigned int)bVar1;
                                        if (iVar14 < 0) {
                                            iVar14 = 0;
                                            iVar9 = -1;
                                        }
                                        *(int*)(psVar8 + 1760) = iVar14;
                                        cVar2 = *(char*)(lVar17 + 27 + lVar13);
                                        puVar20 = local_50;
                                        uVar16 = local_48;
                                    }
                                    if (cVar2) {
                                        iVar9 = *(int*)(*(long*)(lVar17 + 2104 + lVar13) + (long)iVar9 * 4);
                                    }
                                    iVar14 = (int)local_58;
                                    local_50 = puVar20;
                                    local_48 = uVar16;
                                    if (iVar9 == -1) {
                                        bVar6 = true;
                                    } else {
                                        *(uint64_t*)(*local_88 + lVar22 * 8) =
                                            *(uint64_t*)(*local_68 + (long)iVar9 * 8);
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
                                            uVar3 = (unsigned int)arg3;
                                            psVar8 = stb_vorbis;
                                            ppfVar7 = arg2;
                                            uVar11 = *(unsigned int*)(local_70 - 5);
                                            lVar13 = (long)*(
                                                short*)((unsigned long)*(uint8_t*)(*(long*)(*local_88 + lVar22 * 8) -
                                                                                   1 + lVar17) *
                                                            16 +
                                                        local_68[1] + lVar21 * 2);
                                            iVar9 = (int)lVar17;
                                            if (lVar13 < 0) {
                                                iVar10 = (iVar14 + iVar9 - 1) * uVar11 + uVar11 + (int)*local_98;
                                                local_60 = iVar10 % (int)(unsigned int)arg3;
                                                local_5c = iVar10 / (int)(unsigned int)arg3;
                                            } else {
                                                lVar5 = *(long*)(stb_vorbis + 160);
                                                plVar18[-1] = (unsigned long)uVar11;
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
                                        puVar20 = (unsigned char*)(unsigned long)(((int)local_50 + (int)lVar13) - 1);
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
                    local_68 = nullptr;
                    iVar9 = 0;
                    plVar12 = local_88;
                    uVar11 = (unsigned int)arg3;
                    do {
                        if ((local_58 == 0) && (0 < (int)uVar11)) {
                            pCVar15 = nullptr;
                            local_ac = iVar9;
                            do {
                                psVar8 = stb_vorbis;
                                if (puVar20[pCVar15] == '\0') {
                                    lVar21 = *(long*)(stb_vorbis + 160);
                                    lVar22 = (unsigned long)*local_70 * 2120;
                                    if (*(int*)(stb_vorbis + 1760) < 10) {
                                        plVar18[-1] = 4307139539;
                                        prep_huffman(psVar8);
                                        puVar20 = local_50;
                                        pCVar19 = local_78;
                                        iVar9 = local_ac;
                                    }
                                    iVar10 = (int)*(
                                        short*)((Codebook*)(lVar21 + lVar22) +
                                                (unsigned long)(*(unsigned int*)(psVar8 + 1756) & 1023) * 2 + 48);
                                    if (iVar10 < 0) {
                                        plVar18[-1] = 4307139643;
                                        iVar10 = codebook_decode_scalar_raw(psVar8, (Codebook*)(lVar21 + lVar22));
                                        puVar20 = local_50;
                                        pCVar19 = local_78;
                                        iVar9 = local_ac;
                                    } else {
                                        bVar1 = *(uint8_t*)(*(long*)(lVar21 + 8 + lVar22) + (long)iVar10);
                                        *(unsigned int*)(psVar8 + 1756) =
                                            *(unsigned int*)(psVar8 + 1756) >> (bVar1 & 31);
                                        iVar14 = *(int*)(psVar8 + 1760) - (unsigned int)bVar1;
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
                                    *(uint64_t*)(local_88[pCVar15] + (long)local_68 * 8) =
                                        *(uint64_t*)(*local_a0 + (long)iVar10 * 8);
                                    iVar14 = 0;
                                    plVar12 = local_88;
                                    uVar11 = (unsigned int)arg3;
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
                                    pCVar15 = nullptr;
                                    do {
                                        psVar8 = stb_vorbis;
                                        uVar3 = local_b0;
                                        if (puVar20[pCVar15] == '\0') {
                                            lVar22 = (long)*(
                                                short*)((unsigned long)*(
                                                            uint8_t*)(*(long*)(plVar12[pCVar15] + (long)local_68 * 8) +
                                                                      lVar21) *
                                                            16 +
                                                        local_a0[1] + local_58 * 2);
                                            if (-1 < lVar22) {
                                                iVar14 = *(int*)(local_70 - 5);
                                                lVar13 = *local_98;
                                                pfVar4 = arg2[pCVar15];
                                                lVar17 = *(long*)(stb_vorbis + 160);
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
        *(uint32_t*)(stb_vorbis + 124) = uStack_b8._4_4_;
    }

    // 0x100b9c5e0
    void do_floor(stb_vorbis* stb_vorbis, Mapping* mapping, int arg3, int arg4, float* arg5, short* arg6,
                  unsigned char* arg7) {
        float fVar1;
        long lVar2;
        unsigned long uVar3;
        long lVar4;
        int arg3_00;
        int arg5_00;
        unsigned int arg2;
        long lVar5;
        long lVar6;
        unsigned int arg4_00;
        int arg6_00;

        if (*(short*)(stb_vorbis +
                      (unsigned long)(uint8_t)mapping[*(uint8_t*)(*(long*)(mapping + 8) + 2 + (long)arg3 * 3) + 17] *
                          2 +
                      172) == 0) {
            error(stb_vorbis, 21);
        } else {
            arg6_00 = arg4 >> 1;
            lVar4 = *(long*)(stb_vorbis + 304);
            lVar2 =
                (unsigned long)(uint8_t)mapping[*(uint8_t*)(*(long*)(mapping + 8) + 2 + (long)arg3 * 3) + 17] * 1596;
            arg3_00 = (unsigned int)*(uint8_t*)(lVar4 + 1588 + lVar2) * (int)*arg6;
            arg4_00 = 0;
            if (1 < *(int*)(lVar4 + 1592 + lVar2)) {
                lVar6 = 839;
                arg2 = 0;
                do {
                    uVar3 = (unsigned long)*(uint8_t*)(lVar4 + lVar2 + lVar6);
                    if (arg6[uVar3] < 0) {
                        arg4_00 = arg2;
                        arg5_00 = arg3_00;
                    } else {
                        arg5_00 = (unsigned int)*(uint8_t*)(lVar4 + lVar2 + 1588) * (int)arg6[uVar3];
                        arg4_00 = (unsigned int)*(unsigned short*)(lVar4 + lVar2 + 338 + uVar3 * 2);
                        if (arg2 != arg4_00) {
                            draw_line(arg5, arg2, arg3_00, arg4_00, arg5_00, arg6_00);
                        }
                    }
                    arg3_00 = arg5_00;
                    lVar5 = lVar6 - 837;
                    lVar6 = lVar6 + 1;
                    arg2 = arg4_00;
                } while (lVar5 < *(int*)(lVar4 + lVar2 + 1592));
            }
            if ((int)arg4_00 < arg6_00) {
                fVar1 = *(float*)(&inverse_db_table + (long)arg3_00 * 4);
                lVar4 = (long)(int)arg4_00;
                do {
                    arg5[lVar4] = arg5[lVar4] * fVar1;
                    lVar4 = lVar4 + 1;
                } while (arg6_00 != lVar4);
            }
        }
    }

    // 0x100b9c730
    void inverse_mdct(float* arg1, int arg2, stb_vorbis* stb_vorbis, int arg4) {
        uint8_t bVar1;
        unsigned long uVar2;
        float* pfVar3;
        unsigned short* puVar6;
        float* pfVar7;
        unsigned long uVar8;
        float* pfVar9;
        long lVar11;
        long lVar13;
        float fVar19;
        float fVar20;
        float fVar21;
        float fVar22;
        float fVar23;
        float fVar24;
        float fVar25;
        float afStack_b8[2];
        long local_80;
        int local_58;
        int local_54;
        unsigned long local_48;

        unsigned int uVar4 = arg2 >> 1;
        uint32_t local_88 = *(uint32_t*)(stb_vorbis + 124);
        long lVar15 = (long)(int)uVar4;
        unsigned long local_68 = (unsigned long)uVar4;
        if (*(long*)(stb_vorbis + 104) == 0) {
            pfVar3 = (float*)((long)afStack_b8 - (lVar15 * 4 + 15U & 18446744073709551600));
            pfVar9 = pfVar3;
        } else {
            pfVar3 = (float*)setup_temp_malloc(stb_vorbis, uVar4 * 4);
            pfVar9 = afStack_b8;
        }
        float* pfVar18 = *(float**)(stb_vorbis + (long)arg4 * 8 + 1392);
        float* pfVar12 = pfVar3 + lVar15 - 2;
        float* pfVar5 = pfVar18;
        if (1 < (unsigned int)arg2) {
            pfVar7 = arg1;
            do {
                pfVar12[1] = *pfVar5 * *pfVar7 - pfVar5[1] * pfVar7[2];
                *pfVar12 = *pfVar5 * pfVar7[2] + pfVar5[1] * *pfVar7;
                pfVar12 = pfVar12 - 2;
                pfVar5 = pfVar5 + 2;
                pfVar7 = pfVar7 + 4;
            } while (pfVar7 != arg1 + lVar15);
        }
        int iVar10 = (int)(unsigned int)arg2 >> 2;
        if (pfVar3 <= pfVar12) {
            pfVar7 = arg1 + lVar15 - 1;
            do {
                pfVar12[1] = pfVar5[1] * pfVar7[-2] - *pfVar5 * *pfVar7;
                *pfVar12 = -pfVar7[-2] * *pfVar5 - pfVar5[1] * *pfVar7;
                pfVar12 = pfVar12 - 2;
                pfVar7 = pfVar7 - 4;
                pfVar5 = pfVar5 + 2;
            } while (pfVar3 <= pfVar12);
        }
        uVar4 = (unsigned int)arg2;
        unsigned int uVar16 = (int)(unsigned int)arg2 >> 3;
        local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)iVar10);
        long local_90 = (long)iVar10;
        if (15 < (int)(unsigned int)arg2) {
            pfVar5 = pfVar18 + lVar15 - 8;
            lVar11 = 0;
            do {
                fVar20 = *(float*)((long)pfVar3 + lVar11 + local_90 * 4 + 4);
                fVar21 = *(float*)((long)pfVar3 + lVar11 + 4);
                fVar22 = fVar20 - fVar21;
                fVar19 = *(float*)((long)pfVar3 + lVar11 + local_90 * 4) - *(float*)((long)pfVar3 + lVar11);
                *(float*)((long)arg1 + lVar11 + local_90 * 4 + 4) = fVar21 + fVar20;
                *(float*)((long)arg1 + lVar11 + local_90 * 4) =
                    *(float*)((long)pfVar3 + lVar11) + *(float*)((long)pfVar3 + lVar11 + local_90 * 4);
                *(float*)((long)arg1 + lVar11 + 4) = pfVar5[4] * fVar22 - pfVar5[5] * fVar19;
                *(float*)((long)arg1 + lVar11) = fVar22 * pfVar5[5] + fVar19 * pfVar5[4];
                fVar20 = *(float*)((long)pfVar3 + lVar11 + local_90 * 4 + 12);
                fVar21 = *(float*)((long)pfVar3 + lVar11 + 12);
                fVar22 = fVar20 - fVar21;
                fVar19 = *(float*)((long)pfVar3 + lVar11 + local_90 * 4 + 8) - *(float*)((long)pfVar3 + lVar11 + 8);
                *(float*)((long)arg1 + lVar11 + local_90 * 4 + 12) = fVar21 + fVar20;
                *(float*)((long)arg1 + lVar11 + local_90 * 4 + 8) =
                    *(float*)((long)pfVar3 + lVar11 + 8) + *(float*)((long)pfVar3 + lVar11 + local_90 * 4 + 8);
                *(float*)((long)arg1 + lVar11 + 12) = *pfVar5 * fVar22 - pfVar5[1] * fVar19;
                *(float*)((long)arg1 + lVar11 + 8) = fVar22 * pfVar5[1] + fVar19 * *pfVar5;
                pfVar5 = pfVar5 - 8;
                lVar11 = lVar11 + 16;
            } while (pfVar18 <= pfVar5);
        }
        long local_a8 = lVar15;
        float* local_a0 = pfVar3;
        float* local_70 = pfVar18;
        pfVar9[-2] = 1.7061948e-38;
        pfVar9[-1] = 1.4013e-45;
        unsigned long local_60 = ilog(uVar4);
        int iVar14 = (int)uVar4 >> 4;
        uVar4 = (int)local_68 - 1;
        int iVar17 = -uVar16;
        unsigned long local_50 = (unsigned long)uVar16;
        pfVar9[-2] = 1.7062008e-38;
        pfVar9[-1] = 1.4013e-45;
        imdct_step3_iter0_loop(iVar14, arg1, uVar4, iVar17, pfVar18);
        iVar10 = uVar4 - (int)local_48;
        pfVar9[-2] = 1.706204e-38;
        pfVar9[-1] = 1.4013e-45;
        imdct_step3_iter0_loop(iVar14, arg1, iVar10, iVar17, pfVar18);
        iVar17 = (int)(unsigned int)arg2 >> 5;
        iVar14 = -iVar14;
        pfVar9[-2] = 1.7062092e-38;
        pfVar9[-1] = 1.4013e-45;
        imdct_step3_inner_r_loop(iVar17, arg1, uVar4, iVar14, pfVar18, 16);
        pfVar3 = local_70;
        iVar10 = (int)local_50;
        pfVar9[-2] = 1.706214e-38;
        pfVar9[-1] = 1.4013e-45;
        imdct_step3_inner_r_loop(iVar17, arg1, uVar4 - iVar10, iVar14, pfVar3, 16);
        pfVar3 = local_70;
        pfVar9[-2] = 1.706219e-38;
        pfVar9[-1] = 1.4013e-45;
        imdct_step3_inner_r_loop(iVar17, arg1, uVar4 + iVar10 * -2, iVar14, pfVar3, 16);
        iVar10 = (int)local_50;
        int local_84 = iVar17;
        local_68 = (unsigned long)uVar4;
        pfVar9[-2] = 1.7062256e-38;
        pfVar9[-1] = 1.4013e-45;
        imdct_step3_inner_r_loop(iVar17, arg1, uVar4 + iVar10 * -3, iVar14, pfVar3, 16);
        pfVar18 = local_70;
        pfVar3 = arg1;
        iVar10 = 2;
        if (9 < (int)local_60) {
            iVar14 = (int)local_60 - 4 >> 1;
            iVar10 = 3;
            if (3 < iVar14) {
                iVar10 = iVar14;
            }
            local_80 = (((uint64_t)local_80._4_4_ << 32) | (uint32_t)iVar10);
            local_54 = 2;
            do {
                bVar1 = (uint8_t)local_54;
                iVar14 = (int)(unsigned int)arg2 >> (bVar1 + 2 & 31);
                local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)iVar14);
                local_54 = local_54 + 1;
                iVar10 = 2 << (bVar1 & 31);
                iVar17 = (int)(unsigned int)arg2 >> (bVar1 + 4 & 31);
                if (0 < iVar10) {
                    local_58 = -(iVar14 >> 1);
                    uVar8 = local_68 & 4294967295;
                    do {
                        iVar14 = local_58;
                        local_50 = (((uint64_t)local_50._4_4_ << 32) | (uint32_t)iVar10);
                        pfVar9[-2] = 1.7062492e-38;
                        pfVar9[-1] = 1.4013e-45;
                        imdct_step3_inner_r_loop(iVar17, pfVar3, (int)uVar8, iVar14, pfVar18, 8 << (bVar1 & 31));
                        uVar8 = (unsigned long)(unsigned int)((int)uVar8 - (int)local_48);
                        iVar10 = (int)local_50 - 1;
                    } while (iVar10 != 0);
                }
                iVar10 = local_54;
            } while (local_54 != (int)local_80);
        }
        pfVar3 = arg1;
        uVar4 = (int)local_60 - 7;
        local_60 = (unsigned long)uVar4;
        if (iVar10 < (int)uVar4) {
            do {
                bVar1 = (uint8_t)iVar10;
                uVar4 = (int)(unsigned int)arg2 >> (bVar1 + 2 & 31);
                local_50 = (unsigned long)uVar4;
                uVar16 = 8 << (bVar1 & 31);
                local_48 = (unsigned long)uVar16;
                iVar14 = (int)(unsigned int)arg2 >> (bVar1 + 6 & 31);
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
                        *(unsigned long*)(pfVar9 - 4) = local_50;
                        pfVar9[-6] = 1.7062769e-38;
                        pfVar9[-5] = 1.4013e-45;
                        imdct_step3_inner_s_loop(2 << (bVar1 & 31), pfVar3, (int)uVar8, iVar10, pfVar18, (int)uVar2,
                                                 (int)pfVar9[-4]);
                        uVar8 = (unsigned long)((int)uVar8 - 8);
                        pfVar18 = (float*)((long)pfVar18 + local_80);
                        iVar14 = iVar14 - 1;
                    } while (1 < iVar14);
                }
                iVar10 = local_54;
            } while (local_54 != (int)local_60);
        }
        uVar4 = (unsigned int)arg2;
        uVar8 = local_68;
        pfVar18 = local_70;
        pfVar3 = arg1;
        iVar10 = local_84;
        pfVar9[-2] = 1.7062845e-38;
        pfVar9[-1] = 1.4013e-45;
        imdct_step3_inner_s_loop_ld654(iVar10, pfVar3, (int)uVar8, pfVar18, uVar4);
        pfVar18 = local_a0 + local_90 - 4;
        if (local_a0 <= pfVar18) {
            puVar6 = *(unsigned short**)(stb_vorbis + (long)arg4 * 8 + 1456);
            pfVar5 = local_a0 + local_a8 - 1;
            do {
                uVar8 = (unsigned long)*puVar6;
                *pfVar5 = pfVar3[uVar8];
                pfVar5[-1] = pfVar3[uVar8 + 1];
                pfVar18[3] = pfVar3[uVar8 + 2];
                pfVar18[2] = pfVar3[uVar8 + 3];
                uVar8 = (unsigned long)puVar6[1];
                pfVar5[-2] = pfVar3[uVar8];
                pfVar5[-3] = pfVar3[uVar8 + 1];
                pfVar18[1] = pfVar3[uVar8 + 2];
                *pfVar18 = pfVar3[uVar8 + 3];
                pfVar18 = pfVar18 - 4;
                pfVar5 = pfVar5 - 4;
                puVar6 = puVar6 + 2;
            } while (local_a0 <= pfVar18);
        }
        pfVar18 = local_a0 + local_a8 - 4;
        if (local_a0 < pfVar18) {
            lVar15 = *(long*)(stb_vorbis + (long)arg4 * 8 + 1424);
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
                pfVar18 = pfVar18 - 4;
                lVar13 = lVar11 + 16;
                lVar11 = lVar11 + 16;
            } while ((float*)((long)local_a0 + lVar13) < pfVar18);
        }
        if (local_a0 <= local_a0 + local_a8 - 8) {
            lVar13 = (long)(int)((unsigned int)arg2 - 4);
            lVar11 = local_a8 * 4;
            pfVar18 = local_a0 - 1;
            lVar15 = *(long*)(stb_vorbis + (long)arg4 * 8 + 1408) - 4;
            pfVar5 = pfVar3 + 3;
            pfVar12 = local_a0;
            do {
                pfVar12 = pfVar12 - 8;
                fVar20 = *(float*)(lVar15 - 4 + lVar11);
                fVar21 = *(float*)(lVar15 + lVar11) * pfVar18[local_a8 - 1] - fVar20 * pfVar18[local_a8];
                fVar20 = -pfVar18[local_a8 - 1] * fVar20 - pfVar18[local_a8] * *(float*)(lVar15 + lVar11);
                pfVar5[-3] = fVar21;
                pfVar3[local_a8 - 1] = -fVar21;
                pfVar5[local_a8 - 3] = fVar20;
                pfVar3[lVar13 + 3] = fVar20;
                fVar20 = *(float*)(lVar15 - 12 + lVar11);
                fVar21 = *(float*)(lVar15 - 8 + lVar11);
                fVar19 = fVar21 * pfVar18[local_a8 - 3] - fVar20 * pfVar18[local_a8 - 2];
                fVar20 = -pfVar18[local_a8 - 3] * fVar20 - pfVar18[local_a8 - 2] * fVar21;
                pfVar5[-2] = fVar19;
                pfVar3[local_a8 - 2] = -fVar19;
                pfVar5[local_a8 - 2] = fVar20;
                pfVar3[lVar13 + 2] = fVar20;
                fVar20 = *(float*)(lVar15 - 20 + lVar11);
                fVar21 = *(float*)(lVar15 - 16 + lVar11);
                fVar19 = fVar21 * pfVar18[local_a8 - 5] - fVar20 * pfVar18[local_a8 - 4];
                fVar20 = -pfVar18[local_a8 - 5] * fVar20 - pfVar18[local_a8 - 4] * fVar21;
                pfVar5[-1] = fVar19;
                pfVar3[local_a8 - 3] = -fVar19;
                pfVar5[local_a8 - 1] = fVar20;
                pfVar3[lVar13 + 1] = fVar20;
                fVar20 = *(float*)(lVar15 - 28 + lVar11);
                fVar21 = *(float*)(lVar15 - 24 + lVar11);
                fVar19 = fVar21 * pfVar18[local_a8 - 7] - fVar20 * pfVar18[local_a8 - 6];
                fVar20 = -pfVar18[local_a8 - 7] * fVar20 - pfVar18[local_a8 - 6] * fVar21;
                *pfVar5 = fVar19;
                pfVar3[local_a8 - 4] = -fVar19;
                pfVar5[local_a8] = fVar20;
                pfVar3[lVar13] = fVar20;
                pfVar18 = pfVar18 - 8;
                lVar15 = lVar15 - 32;
                pfVar3 = pfVar3 - 4;
                pfVar5 = pfVar5 + 4;
            } while (local_a0 <= pfVar12 + local_a8 - 8);
        }
        *(uint32_t*)(stb_vorbis + 124) = local_88;
    }

    // 0x100b9d030
    int bit_reverse(unsigned int arg1) {
        unsigned int uVar1 = arg1 >> 24 | (arg1 & 16711680) >> 8 | (arg1 & 65280) << 8 | arg1 << 24;
        uVar1 = uVar1 >> 4 & 252645135 | (uVar1 & 252645135) << 4;
        uVar1 = (uVar1 >> 2 & 858993459) + (uVar1 & 858993459) * 4;
        return (uVar1 >> 1 & 1431655765) + (uVar1 & 1431655765) * 2;
    }

    // 0x100b9d080
    void make_block_array(void* arg1, int arg2, int arg3) {
        void* pvVar1;
        unsigned long uVar2;

        if (0 < arg2) {
            pvVar1 = (void*)((long)arg1 + (long)arg2 * 8);
            uVar2 = (unsigned long)(unsigned int)arg2;
            do {
                *(void**)arg1 = pvVar1;
                pvVar1 = (void*)((long)pvVar1 + (long)arg3);
                arg1 = (void*)((long)arg1 + 8);
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
    }

    // 0x100b9d0c0
    void* setup_temp_malloc(stb_vorbis* stb_vorbis, int arg2) {
        unsigned long uVar2 = (long)arg2 + 3U & 18446744073709551612;
        if (*(long*)(stb_vorbis + 104) == 0) {
            return _malloc((long)(int)uVar2);
        }
        long lVar4 = (long)*(int*)(stb_vorbis + 124) - uVar2;
        int iVar3 = (int)lVar4;
        if (iVar3 < *(int*)(stb_vorbis + 120)) {
            return nullptr;
        }
        *(int*)(stb_vorbis + 124) = iVar3;
        return (void*)(*(long*)(stb_vorbis + 104) + lVar4);
    }

    // 0x100b9d100
    void codebook_decode_deinterleave_repeat_2(stb_vorbis* stb_vorbis, Codebook* codebook, float** arg3, int* arg4,
                                               int* arg5, int arg6, int arg7) {
        uint8_t bVar1;
        float* pfVar2;
        float* pfVar3;
        bool bVar4;
        int iVar5;
        long lVar6;
        int iVar7;
        unsigned int uVar8;
        long lVar9;
        unsigned long uVar10;
        long lVar11;
        unsigned int uVar12;
        int iVar13;
        int iVar14;
        int iVar15;
        float fVar16;

        if (codebook[25] == (Codebook)0) {
            error(stb_vorbis, 21);
        } else {
            uVar8 = *(unsigned int*)codebook;
            iVar15 = *arg5;
            iVar14 = *arg4;
            do {
                if (arg7 < 1) {
                    *arg4 = iVar14;
                    *arg5 = iVar15;
                    return 1;
                }
                if (*(int*)(stb_vorbis + 1760) < 10) {
                    prep_huffman(stb_vorbis);
                }
                iVar5 = (int)*(short*)(codebook + (unsigned long)(*(unsigned int*)(stb_vorbis + 1756) & 1023) * 2 + 48);
                if (iVar5 < 0) {
                    iVar5 = codebook_decode_scalar_raw(stb_vorbis, codebook);
                    if (iVar5 < 0)
                        goto LAB_100b9d29c;
                LAB_100b9d1da:
                    uVar12 = arg6 * 2 + iVar15 * -2 + iVar14;
                    if ((int)(uVar8 + iVar15 * 2 + iVar14) <= arg6 * 2) {
                        uVar12 = uVar8;
                    }
                    iVar7 = *(int*)codebook;
                    if (codebook[26] == (Codebook)0) {
                        uVar8 = 0;
                        iVar5 = (int)((long)iVar5 * (long)iVar7);
                        if (iVar14 == 1) {
                            pfVar2 = arg3[1];
                            if (pfVar2 != nullptr) {
                                pfVar2[iVar15] = pfVar2[iVar15] + *(float*)(*(long*)(codebook + 32) + (long)iVar5 * 4);
                            }
                            iVar15 = iVar15 + 1;
                            iVar14 = 0;
                            uVar8 = 1;
                        }
                        if ((int)(uVar8 + 1) < (int)uVar12) {
                            pfVar2 = *arg3;
                            pfVar3 = arg3[1];
                            lVar11 = (long)iVar5 * 4 + *(long*)(codebook + 32);
                            lVar9 = (unsigned long)uVar8 + 1;
                            lVar6 = 0;
                            do {
                                fVar16 = *(float*)(lVar11 + lVar9 * 4);
                                if (pfVar2 != nullptr) {
                                    pfVar2[iVar15 + lVar6] = pfVar2[iVar15 + lVar6] + *(float*)(lVar11 - 4 + lVar9 * 4);
                                }
                                if (pfVar3 != nullptr) {
                                    pfVar3[iVar15 + lVar6] = fVar16 + pfVar3[iVar15 + lVar6];
                                }
                                lVar9 = lVar9 + 2;
                                lVar6 = lVar6 + 1;
                            } while (lVar9 < (int)uVar12);
                            uVar8 = (int)lVar9 - 1;
                            iVar15 = iVar15 + (int)lVar6;
                        }
                        if ((int)uVar8 < (int)uVar12) {
                            pfVar2 = arg3[iVar14];
                            if (pfVar2 != nullptr) {
                                pfVar2[iVar15] = pfVar2[iVar15] +
                                                 *(float*)(*(long*)(codebook + 32) + (long)(int)(uVar8 + iVar5) * 4);
                            }
                            iVar14 = iVar14 + 1;
                        }
                    } else if (0 < (int)uVar12) {
                        lVar6 = *(long*)(codebook + 32);
                        fVar16 = 0.0;
                        uVar10 = 0;
                        do {
                            fVar16 = fVar16 + *(float*)((long)iVar5 * (long)iVar7 * 4 + lVar6 + uVar10 * 4);
                            pfVar2 = arg3[iVar14];
                            if (pfVar2 != nullptr) {
                                pfVar2[iVar15] = pfVar2[iVar15] + fVar16;
                            }
                            iVar13 = iVar14 + 1;
                            iVar14 = iVar13;
                            if (iVar13 == 2) {
                                iVar14 = 0;
                            }
                            iVar15 = iVar15 + (unsigned int)(iVar13 == 2);
                            uVar10 = uVar10 + 1;
                        } while (uVar12 != uVar10);
                    }
                    arg7 = arg7 - uVar12;
                    bVar4 = true;
                    uVar8 = uVar12;
                } else {
                    bVar1 = *(uint8_t*)(*(long*)(codebook + 8) + (long)iVar5);
                    *(unsigned int*)(stb_vorbis + 1756) = *(unsigned int*)(stb_vorbis + 1756) >> (bVar1 & 31);
                    iVar7 = *(int*)(stb_vorbis + 1760) - (unsigned int)bVar1;
                    if (iVar7 < 0) {
                        iVar5 = -1;
                        iVar7 = 0;
                    }
                    *(int*)(stb_vorbis + 1760) = iVar7;
                    if (-1 < iVar5)
                        goto LAB_100b9d1da;
                LAB_100b9d29c:
                    if ((stb_vorbis[1740] != (stb_vorbis)0) || (*(int*)(stb_vorbis + 1748) == 0)) {
                        error(stb_vorbis, 21);
                    }
                    bVar4 = false;
                }
            } while (bVar4);
        }
        return 0;
    }

    // 0x100b9d410
    void codebook_decode_deinterleave_repeat(stb_vorbis* stb_vorbis, Codebook* codebook, float** arg3, int arg4,
                                             int* arg5, int* arg6, int arg7, int arg8) {
        uint8_t bVar1;
        float* pfVar2;
        int iVar3;
        long lVar4;
        uint64_t uVar5;
        unsigned long uVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        float fVar12;
        unsigned long local_50;

        if (codebook[25] == (Codebook)0) {
            error(stb_vorbis, 21);
            uVar5 = 0;
        } else {
            local_50 = (unsigned long)*(unsigned int*)codebook;
            iVar8 = *arg6;
            iVar9 = *arg5;
            for (; 0 < arg8; arg8 = arg8 - iVar7) {
                if (*(int*)(stb_vorbis + 1760) < 10) {
                    prep_huffman(stb_vorbis);
                }
                iVar11 =
                    (int)*(short*)(codebook + (unsigned long)(*(unsigned int*)(stb_vorbis + 1756) & 1023) * 2 + 48);
                if (iVar11 < 0) {
                    iVar11 = codebook_decode_scalar_raw(stb_vorbis, codebook);
                } else {
                    bVar1 = *(uint8_t*)(*(long*)(codebook + 8) + (long)iVar11);
                    *(unsigned int*)(stb_vorbis + 1756) = *(unsigned int*)(stb_vorbis + 1756) >> (bVar1 & 31);
                    iVar3 = *(int*)(stb_vorbis + 1760) - (unsigned int)bVar1;
                    if (iVar3 < 0) {
                        iVar11 = -1;
                        iVar3 = 0;
                    }
                    *(int*)(stb_vorbis + 1760) = iVar3;
                }
                if ((codebook[27] != (Codebook)0) && (*(int*)(codebook + 2112) <= iVar11)) {
                    LogAssert("!c->sparse || z < c->sorted_entries",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                              "vorbis_std.code",
                              1462, nullptr);
                }
                if (iVar11 < 0) {
                    if ((stb_vorbis[1740] != (stb_vorbis)0) || (*(int*)(stb_vorbis + 1748) == 0)) {
                        error(stb_vorbis, 21);
                    }
                    return 0;
                }
                if (arg7 * arg4 < (int)local_50 + iVar8 * arg4 + iVar9) {
                    local_50 = (unsigned long)(unsigned int)((arg7 * arg4 - iVar8 * arg4) + iVar9);
                }
                iVar3 = *(int*)codebook;
                iVar7 = (int)local_50;
                if (codebook[26] == (Codebook)0) {
                    if (0 < iVar7) {
                        lVar4 = (long)(int)((long)iVar11 * (long)iVar3);
                        uVar6 = local_50;
                        do {
                            pfVar2 = arg3[iVar9];
                            if (pfVar2 != nullptr) {
                                pfVar2[iVar8] = pfVar2[iVar8] + *(float*)(*(long*)(codebook + 32) + lVar4 * 4);
                            }
                            iVar11 = iVar9 + 1;
                            iVar9 = iVar11;
                            if (iVar11 == arg4) {
                                iVar9 = 0;
                            }
                            iVar8 = iVar8 + (unsigned int)(iVar11 == arg4);
                            lVar4 = lVar4 + 1;
                            uVar6 = uVar6 - 1;
                        } while (uVar6 != 0);
                    }
                } else if (0 < iVar7) {
                    lVar4 = *(long*)(codebook + 32);
                    fVar12 = 0.0;
                    uVar6 = 0;
                    do {
                        fVar12 = fVar12 + *(float*)((long)iVar11 * (long)iVar3 * 4 + lVar4 + uVar6 * 4);
                        pfVar2 = arg3[iVar9];
                        if (pfVar2 != nullptr) {
                            pfVar2[iVar8] = pfVar2[iVar8] + fVar12;
                        }
                        iVar10 = iVar9 + 1;
                        iVar9 = iVar10;
                        if (iVar10 == arg4) {
                            iVar9 = 0;
                        }
                        iVar8 = iVar8 + (unsigned int)(iVar10 == arg4);
                        uVar6 = uVar6 + 1;
                    } while (local_50 != uVar6);
                }
            }
            *arg5 = iVar9;
            *arg6 = iVar8;
            uVar5 = 1;
        }
        return uVar5;
    }

    // 0x100b9d6e0
    void residue_decode(stb_vorbis* stb_vorbis, Codebook* codebook, float* arg3, int arg4, int arg5, int arg6) {
        int iVar1;
        int iVar3;
        long lVar4;
        float* arg3_00;

        if (arg6 == 0) {
            iVar3 = *(int*)codebook;
            iVar1 = (int)((long)arg5 / (long)iVar3);
            if (0 < iVar1) {
                arg3_00 = arg3 + arg4;
                lVar4 = 0;
                do {
                    if (codebook_decode_step(stb_vorbis, codebook, arg3_00, (int)lVar4 + (arg5 - arg4), iVar1) == 0) {
                        return 0;
                    }
                    lVar4 = lVar4 - 1;
                    arg3_00 = arg3_00 + 1;
                } while (((long)arg5 / (long)iVar3 & 4294967295U) + lVar4 != 0);
            }
        } else if (0 < arg5) {
            iVar3 = 0;
            do {
                iVar1 = codebook_decode(stb_vorbis, codebook, arg3 + arg4, arg5 - iVar3);
                if (iVar1 == 0) {
                    return 0;
                }
                iVar3 = iVar3 + *(int*)codebook;
                arg4 = arg4 + *(int*)codebook;
            } while (iVar3 < arg5);
        }
        return 1;
    }

    // 0x100b9d7c0
    void codebook_decode_step(stb_vorbis* stb_vorbis, Codebook* codebook, float* arg3, int arg4, int arg5) {
        Codebook CVar1;
        unsigned int uVar2;
        long lVar3;
        uint64_t uVar5;
        unsigned long uVar6;
        float fVar7;
        float fVar8;

        int iVar4 = codebook_decode_start(stb_vorbis, codebook);
        if (iVar4 < 0) {
            uVar5 = 0;
        } else {
            uVar2 = *(unsigned int*)codebook;
            if ((int)uVar2 < arg4) {
                arg4 = uVar2;
            }
            uVar5 = 1;
            if (0 < arg4) {
                CVar1 = codebook[26];
                lVar3 = *(long*)(codebook + 32);
                fVar7 = 0.0;
                uVar6 = 0;
                do {
                    fVar8 = *(float*)((long)(int)(uVar2 * iVar4) * 4 + lVar3 + uVar6 * 4) + fVar7;
                    *arg3 = *arg3 + fVar8;
                    if (CVar1 != (Codebook)0) {
                        fVar7 = fVar8;
                    }
                    uVar6 = uVar6 + 1;
                    arg3 = arg3 + arg5;
                } while ((unsigned int)arg4 != uVar6);
            }
        }
        return uVar5;
    }

    // 0x100b9d860
    void codebook_decode(stb_vorbis* stb_vorbis, Codebook* codebook, float* arg3, int arg4) {
        unsigned int uVar1;
        long lVar2;
        uint64_t uVar4;
        unsigned long uVar5;
        float fVar6;

        int iVar3 = codebook_decode_start(stb_vorbis, codebook);
        if (iVar3 < 0) {
            uVar4 = 0;
        } else {
            uVar1 = *(unsigned int*)codebook;
            if ((int)uVar1 < arg4) {
                arg4 = uVar1;
            }
            if (codebook[26] == (Codebook)0) {
                uVar4 = 1;
                if (0 < arg4) {
                    lVar2 = *(long*)(codebook + 32);
                    uVar5 = 0;
                    do {
                        arg3[uVar5] = arg3[uVar5] + *(float*)((long)(int)(iVar3 * uVar1) * 4 + lVar2 + uVar5 * 4);
                        uVar5 = uVar5 + 1;
                    } while ((unsigned int)arg4 != uVar5);
                }
            } else {
                uVar4 = 1;
                if (0 < arg4) {
                    lVar2 = *(long*)(codebook + 32);
                    fVar6 = 0.0;
                    uVar5 = 0;
                    do {
                        fVar6 = fVar6 + *(float*)((long)(int)(iVar3 * uVar1) * 4 + lVar2 + uVar5 * 4);
                        arg3[uVar5] = arg3[uVar5] + fVar6;
                        fVar6 = fVar6 + *(float*)(codebook + 16);
                        uVar5 = uVar5 + 1;
                    } while ((unsigned int)arg4 != uVar5);
                }
            }
        }
        return uVar4;
    }

    // 0x100b9d930
    int codebook_decode_start(stb_vorbis* stb_vorbis, Codebook* codebook) {
        uint8_t bVar1;
        Codebook CVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        bool bVar6;

        if (codebook[25] == (Codebook)0) {
            iVar4 = -1;
        } else {
            if (*(int*)(stb_vorbis + 1760) < 10) {
                prep_huffman(stb_vorbis);
            }
            iVar3 = (int)*(short*)(codebook + (unsigned long)(*(unsigned int*)(stb_vorbis + 1756) & 1023) * 2 + 48);
            if (iVar3 < 0) {
                iVar4 = codebook_decode_scalar_raw(stb_vorbis, codebook);
                CVar2 = codebook[27];
            } else {
                bVar1 = *(uint8_t*)(*(long*)(codebook + 8) + (long)iVar3);
                *(unsigned int*)(stb_vorbis + 1756) = *(unsigned int*)(stb_vorbis + 1756) >> (bVar1 & 31);
                iVar5 = *(int*)(stb_vorbis + 1760) - (unsigned int)bVar1;
                bVar6 = iVar5 < 0;
                if (bVar6) {
                    iVar5 = 0;
                }
                iVar4 = -1;
                if (!bVar6) {
                    iVar4 = iVar3;
                }
                *(int*)(stb_vorbis + 1760) = iVar5;
                CVar2 = codebook[27];
            }
            if ((CVar2 != (Codebook)0) && (*(int*)(codebook + 2112) <= iVar4)) {
                LogAssert("z < c->sorted_entries",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                          "vorbis_std.code",
                          1367, nullptr);
            }
            if (-1 < iVar4) {
                return iVar4;
            }
            if ((stb_vorbis[1740] == (stb_vorbis)0) && (*(int*)(stb_vorbis + 1748) != 0)) {
                return iVar4;
            }
        }
        error(stb_vorbis, 21);
        return iVar4;
    }

    // 0x100b9da30
    void draw_line(float* arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        long lVar2;
        int iVar4;
        int iVar5;
        unsigned int uVar6;

        int iVar7 = arg5 - arg3;
        int iVar8 = arg4 - arg2;
        int iVar10 = -iVar7;
        if (-iVar7 < 0) {
            iVar10 = iVar7;
        }
        int iVar1 = iVar7 / iVar8;
        int iVar9 = -iVar1;
        if (-iVar1 < 0) {
            iVar9 = iVar1;
        }
        if (arg6 < arg4) {
            arg4 = arg6;
        }
        arg1[arg2] = arg1[arg2] * *(float*)(&inverse_db_table + (long)arg3 * 4);
        int iVar3 = arg2 + 1;
        if (iVar3 < arg4) {
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
                arg3 = arg3 + iVar1 + uVar6;
                iVar4 = iVar4 - iVar5;
                arg1[iVar3 + lVar2] = arg1[iVar3 + lVar2] * *(float*)(&inverse_db_table + (long)arg3 * 4);
                lVar2 = lVar2 + 1;
            } while (~arg2 + arg4 != (int)lVar2);
        }
    }

    // 0x100b9db00
    void imdct_step3_iter0_loop(int arg1, float* arg2, int arg3, int arg4, float* arg5) {
        float* pfVar1;
        int iVar3;
        float fVar4;
        float fVar5;

        if ((arg1 & 3U) != 0) {
            LogAssert("(n & 3) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      2127, nullptr);
        }
        if (3 < arg1) {
            pfVar1 = arg2 + arg3;
            iVar3 = (arg1 >> 2) + 1;
            do {
                fVar4 = *pfVar1 - pfVar1[(long)arg4];
                fVar5 = pfVar1[-1] - pfVar1[(long)arg4 - 1];
                *pfVar1 = pfVar1[(long)arg4] + *pfVar1;
                pfVar1[-1] = pfVar1[-1] + pfVar1[(long)arg4 - 1];
                pfVar1[(long)arg4] = *arg5 * fVar4 - arg5[1] * fVar5;
                pfVar1[(long)arg4 - 1] = fVar4 * arg5[1] + fVar5 * *arg5;
                fVar4 = pfVar1[-2] - pfVar1[(long)arg4 - 2];
                fVar5 = pfVar1[-3] - pfVar1[(long)arg4 - 3];
                pfVar1[-2] = pfVar1[(long)arg4 - 2] + pfVar1[-2];
                pfVar1[-3] = pfVar1[-3] + pfVar1[(long)arg4 - 3];
                pfVar1[(long)arg4 - 2] = arg5[8] * fVar4 - arg5[9] * fVar5;
                pfVar1[(long)arg4 - 3] = fVar4 * arg5[9] + fVar5 * arg5[8];
                fVar4 = pfVar1[-4] - pfVar1[(long)arg4 - 4];
                fVar5 = pfVar1[-5] - pfVar1[(long)arg4 - 5];
                pfVar1[-4] = pfVar1[(long)arg4 - 4] + pfVar1[-4];
                pfVar1[-5] = pfVar1[-5] + pfVar1[(long)arg4 - 5];
                pfVar1[(long)arg4 - 4] = arg5[16] * fVar4 - arg5[17] * fVar5;
                pfVar1[(long)arg4 - 5] = fVar4 * arg5[17] + fVar5 * arg5[16];
                fVar4 = pfVar1[-6] - pfVar1[(long)arg4 - 6];
                fVar5 = pfVar1[-7] - pfVar1[(long)arg4 - 7];
                pfVar1[-6] = pfVar1[(long)arg4 - 6] + pfVar1[-6];
                pfVar1[-7] = pfVar1[-7] + pfVar1[(long)arg4 - 7];
                pfVar1[(long)arg4 - 6] = arg5[24] * fVar4 - arg5[25] * fVar5;
                pfVar1[(long)arg4 - 7] = fVar4 * arg5[25] + fVar5 * arg5[24];
                pfVar1 = pfVar1 - 8;
                iVar3 = iVar3 - 1;
                arg5 = arg5 + 32;
            } while (1 < iVar3);
        }
    }

    // 0x100b9dd10
    void imdct_step3_inner_r_loop(int arg1, float* arg2, int arg3, int arg4, float* arg5, int arg6) {
        float* pfVar1;
        int iVar4;
        float fVar5;
        float fVar6;

        if (3 < arg1) {
            pfVar1 = arg2 + arg3;
            iVar4 = (arg1 >> 2) + 1;
            do {
                fVar5 = *pfVar1 - pfVar1[(long)arg4];
                fVar6 = pfVar1[-1] - pfVar1[(long)arg4 - 1];
                *pfVar1 = pfVar1[(long)arg4] + *pfVar1;
                pfVar1[-1] = pfVar1[-1] + pfVar1[(long)arg4 - 1];
                pfVar1[(long)arg4] = *arg5 * fVar5 - arg5[1] * fVar6;
                pfVar1[(long)arg4 - 1] = fVar5 * arg5[1] + fVar6 * *arg5;
                fVar5 = pfVar1[-2] - pfVar1[(long)arg4 - 2];
                fVar6 = pfVar1[-3] - pfVar1[(long)arg4 - 3];
                pfVar1[-2] = pfVar1[(long)arg4 - 2] + pfVar1[-2];
                pfVar1[-3] = pfVar1[-3] + pfVar1[(long)arg4 - 3];
                pfVar1[(long)arg4 - 2] = arg5[(long)arg6] * fVar5 - arg5[(long)arg6 + 1] * fVar6;
                pfVar1[(long)arg4 - 3] = fVar5 * arg5[(long)arg6 + 1] + fVar6 * arg5[(long)arg6];
                fVar5 = pfVar1[-4] - pfVar1[(long)arg4 - 4];
                fVar6 = pfVar1[-5] - pfVar1[(long)arg4 - 5];
                pfVar1[-4] = pfVar1[(long)arg4 - 4] + pfVar1[-4];
                pfVar1[-5] = pfVar1[-5] + pfVar1[(long)arg4 - 5];
                pfVar1[(long)arg4 - 4] = arg5[(long)arg6 * 2] * fVar5 - arg5[(long)arg6 * 2 + 1] * fVar6;
                pfVar1[(long)arg4 - 5] = fVar5 * arg5[(long)arg6 * 2 + 1] + fVar6 * arg5[(long)arg6 * 2];
                fVar5 = pfVar1[-6] - pfVar1[(long)arg4 - 6];
                fVar6 = pfVar1[-7] - pfVar1[(long)arg4 - 7];
                pfVar1[-6] = pfVar1[(long)arg4 - 6] + pfVar1[-6];
                pfVar1[-7] = pfVar1[-7] + pfVar1[(long)arg4 - 7];
                pfVar1[(long)arg4 - 6] = arg5[(long)arg6 * 3] * fVar5 - arg5[(long)arg6 * 3 + 1] * fVar6;
                pfVar1[(long)arg4 - 7] = fVar5 * arg5[(long)arg6 * 3 + 1] + fVar6 * arg5[(long)arg6 * 3];
                pfVar1 = pfVar1 - 8;
                iVar4 = iVar4 - 1;
                arg5 = arg5 + (long)arg6 * 4;
            } while (1 < iVar4);
        }
    }

    // 0x100b9df00
    void imdct_step3_inner_s_loop(int arg1, float* arg2, int arg3, int arg4, float* arg5, int arg6, int arg7) {
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

        if (0 < arg1) {
            fVar1 = *arg5;
            fVar2 = arg5[1];
            fVar3 = arg5[arg6];
            fVar4 = arg5[arg6 + 1];
            fVar5 = arg5[arg6 * 2];
            fVar6 = arg5[arg6 * 2 + 1];
            fVar7 = arg5[arg6 * 3];
            fVar8 = arg5[(arg6 * 3) + 1];
            pfVar10 = arg2 + arg3;
            iVar11 = arg1 + 1;
            do {
                fVar13 = *pfVar10 - pfVar10[(long)arg4];
                fVar12 = pfVar10[-1] - pfVar10[(long)arg4 - 1];
                *pfVar10 = pfVar10[(long)arg4] + *pfVar10;
                pfVar10[-1] = pfVar10[-1] + pfVar10[(long)arg4 - 1];
                pfVar10[(long)arg4] = fVar13 * fVar1 - fVar12 * fVar2;
                pfVar10[(long)arg4 - 1] = fVar13 * fVar2 + fVar12 * fVar1;
                fVar12 = pfVar10[-2] - pfVar10[(long)arg4 - 2];
                fVar13 = pfVar10[-3] - pfVar10[(long)arg4 - 3];
                pfVar10[-2] = pfVar10[(long)arg4 - 2] + pfVar10[-2];
                pfVar10[-3] = pfVar10[-3] + pfVar10[(long)arg4 - 3];
                pfVar10[(long)arg4 - 2] = fVar12 * fVar3 - fVar13 * fVar4;
                pfVar10[(long)arg4 - 3] = fVar12 * fVar4 + fVar13 * fVar3;
                fVar12 = pfVar10[-4] - pfVar10[(long)arg4 - 4];
                fVar13 = pfVar10[-5] - pfVar10[(long)arg4 - 5];
                pfVar10[-4] = pfVar10[(long)arg4 - 4] + pfVar10[-4];
                pfVar10[-5] = pfVar10[-5] + pfVar10[(long)arg4 - 5];
                pfVar10[(long)arg4 - 4] = fVar12 * fVar5 - fVar13 * fVar6;
                pfVar10[(long)arg4 - 5] = fVar12 * fVar6 + fVar13 * fVar5;
                fVar12 = pfVar10[-6] - pfVar10[(long)arg4 - 6];
                fVar13 = pfVar10[-7] - pfVar10[(long)arg4 - 7];
                pfVar10[-6] = pfVar10[(long)arg4 - 6] + pfVar10[-6];
                pfVar10[-7] = pfVar10[-7] + pfVar10[(long)arg4 - 7];
                pfVar10[(long)arg4 - 6] = fVar12 * fVar7 - fVar13 * fVar8;
                pfVar10[(long)arg4 - 7] = fVar12 * fVar8 + fVar13 * fVar7;
                pfVar10 = pfVar10 + -(long)arg7;
                iVar11 = iVar11 - 1;
            } while (1 < iVar11);
        }
    }

    // 0x100b9e100
    void imdct_step3_inner_s_loop_ld654(int arg1, float* arg2, int arg3, float* arg4, int arg5) {
        float fVar1;
        float fVar2;
        float* arg1_00;
        float* pfVar3;
        float fVar4;
        float fVar5;

        if (0 < arg1) {
            fVar1 = arg4[arg5 >> 3];
            arg1_00 = arg2 + arg3;
            pfVar3 = arg1_00 + -(long)(arg1 << 4);
            do {
                fVar4 = *arg1_00;
                fVar5 = arg1_00[-1];
                *arg1_00 = arg1_00[-8] + fVar4;
                arg1_00[-1] = arg1_00[-9] + fVar5;
                arg1_00[-8] = fVar4 - arg1_00[-8];
                arg1_00[-9] = fVar5 - arg1_00[-9];
                fVar4 = arg1_00[-2] - arg1_00[-10];
                fVar5 = arg1_00[-3] - arg1_00[-11];
                arg1_00[-2] = arg1_00[-10] + arg1_00[-2];
                arg1_00[-3] = arg1_00[-11] + arg1_00[-3];
                arg1_00[-10] = (fVar5 + fVar4) * fVar1;
                arg1_00[-11] = (fVar5 - fVar4) * fVar1;
                fVar4 = arg1_00[-12];
                fVar5 = arg1_00[-4];
                fVar2 = arg1_00[-5];
                arg1_00[-4] = fVar5 + fVar4;
                arg1_00[-5] = arg1_00[-13] + fVar2;
                arg1_00[-12] = fVar2 - arg1_00[-13];
                arg1_00[-13] = fVar4 - fVar5;
                fVar4 = arg1_00[-14] - arg1_00[-6];
                fVar5 = arg1_00[-7] - arg1_00[-15];
                arg1_00[-6] = arg1_00[-6] + arg1_00[-14];
                arg1_00[-7] = arg1_00[-15] + arg1_00[-7];
                arg1_00[-14] = (fVar5 + fVar4) * fVar1;
                arg1_00[-15] = (fVar4 - fVar5) * fVar1;
                iter_54(arg1_00);
                iter_54(arg1_00 - 8);
                arg1_00 = arg1_00 - 16;
            } while (pfVar3 < arg1_00);
        }
    }

    // 0x100b9e290
    void iter_54(float* arg1) {
        float fVar3 = *arg1 - arg1[-4];
        float fVar2 = arg1[-4] + *arg1;
        float fVar4 = arg1[-6] + arg1[-2];
        float fVar1 = arg1[-2] - arg1[-6];
        *arg1 = fVar4 + fVar2;
        arg1[-2] = fVar2 - fVar4;
        fVar2 = arg1[-3] - arg1[-7];
        arg1[-4] = fVar2 + fVar3;
        arg1[-6] = fVar3 - fVar2;
        fVar4 = arg1[-1] - arg1[-5];
        fVar3 = arg1[-5] + arg1[-1];
        fVar2 = arg1[-7] + arg1[-3];
        arg1[-1] = fVar3 + fVar2;
        arg1[-3] = fVar3 - fVar2;
        arg1[-5] = fVar4 - fVar1;
        arg1[-7] = fVar4 + fVar1;
    }

    // 0x100b9e340
    void get_window(stb_vorbis* stb_vorbis, int arg2) {
        stb_vorbis* psVar1;

        if (arg2 * 2 == *(int*)(stb_vorbis + 144)) {
            psVar1 = stb_vorbis + 1440;
        } else {
            if (arg2 * 2 != *(int*)(stb_vorbis + 148)) {
                return 0;
            }
            psVar1 = stb_vorbis + 1448;
        }
        return *(uint64_t*)psVar1;
    }

    // 0x100b9e370
    bool vorbis_validate(unsigned char* arg1) {
        return *(short*)(arg1 + 4) == ogg_page_header._8_2_ && *(int*)arg1 == ogg_page_header._4_4_;
    }

    // 0x100b9e3a0
    void start_packet(stb_vorbis* stb_vorbis) {
        while (true) {
            if (*(int*)(stb_vorbis + 1744) != -1) {
                *(uint32_t*)(stb_vorbis + 1748) = 0;
                *(uint64_t*)(stb_vorbis + 1760) = 0;
                stb_vorbis[1740] = (stb_vorbis)0;
                return 1;
            }
            if (start_page(stb_vorbis) == 0)
                break;
            if (((uint8_t)stb_vorbis[1739] & 1) != 0) {
                error(stb_vorbis, 32);
                return 0;
            }
        }
        return 0;
    }

    // 0x100b9e410
    void skip(stb_vorbis* stb_vorbis, int arg2) {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(stb_vorbis + 40) == 0) {
            lVar2 = _ftell(*(FILE**)(stb_vorbis + 24));
            _fseek(*(FILE**)(stb_vorbis + 24), arg2 + lVar2, 0);
        } else {
            uVar1 = *(long*)(stb_vorbis + 40) + (long)arg2;
            *(unsigned long*)(stb_vorbis + 40) = uVar1;
            if (*(unsigned long*)(stb_vorbis + 56) <= uVar1) {
                *(uint32_t*)(stb_vorbis + 128) = 1;
            }
        }
    }

    // 0x100b9e470
    void crc32_init() {
        unsigned int uVar2;
        int iVar3;

        long lVar1 = 0;
        do {
            uVar2 = (int)lVar1 << 24;
            iVar3 = 8;
            do {
                uVar2 = (int)uVar2 >> 31 & 79764919U ^ uVar2 * 2;
                iVar3 = iVar3 - 1;
            } while (iVar3 != 0);
            (&crc_table)[lVar1] = uVar2;
            lVar1 = lVar1 + 1;
        } while (lVar1 != 256);
    }

    // 0x100b9e4c0
    void* setup_malloc(stb_vorbis* stb_vorbis, int arg2) {
        int iVar1;
        int iVar4;

        unsigned int uVar3 = arg2 + 3U & 4294967292;
        *(unsigned int*)(stb_vorbis + 8) = *(int*)(stb_vorbis + 8) + uVar3;
        if (*(long*)(stb_vorbis + 104) == 0) {
            if (uVar3 != 0) {
                return _malloc((long)(int)uVar3);
            }
        } else {
            iVar1 = *(int*)(stb_vorbis + 120);
            iVar4 = uVar3 + iVar1;
            if (iVar4 <= *(int*)(stb_vorbis + 124)) {
                *(int*)(stb_vorbis + 120) = iVar4;
                return (void*)(*(long*)(stb_vorbis + 104) + (long)iVar1);
            }
        }
        return nullptr;
    }

    // 0x100b9e500
    void setup_temp_free(stb_vorbis* stb_vorbis, void* arg2, int arg3) {
        if (*(long*)(stb_vorbis + 104) == 0) {
            _free(arg2);
            return;
        }
        *(unsigned int*)(stb_vorbis + 124) = *(int*)(stb_vorbis + 124) + (arg3 + 3U & 4294967292);
    }

    // 0x100b9e520
    void compute_codewords(Codebook* codebook, unsigned char* arg2, int arg3, unsigned int* arg4) {
        uint8_t bVar1;
        unsigned int arg1;
        bool bVar2;
        unsigned int arg2_00;
        unsigned long uVar3;
        uint8_t bVar4;
        int iVar5;
        int arg4_00;
        int iVar6;
        unsigned long uVar7;
        long lVar8;
        uint32_t uVar9;
        unsigned int local_b8[32];

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
        if (arg3 < 1) {
            uVar7 = 0;
        } else {
            uVar7 = (unsigned long)(unsigned int)arg3;
            uVar3 = 0;
            do {
                if (arg2[uVar3] != 255) {
                    uVar7 = uVar3 & 4294967295;
                    iVar6 = (int)uVar3;
                    goto joined_r0x000100b9e5ea;
                }
                uVar3 = uVar3 + 1;
            } while (uVar7 != uVar3);
        }
        iVar6 = (int)uVar7;
    joined_r0x000100b9e5ea:
        if (iVar6 == arg3) {
            uVar9 = 1;
            if (*(int*)(codebook + 2112) != 0) {
                LogAssert("c->sorted_entries == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                          "vorbis_std.code",
                          682, nullptr);
            }
        } else {
            add_entry(codebook, 0, (int)uVar7, 0, (unsigned int)arg2[uVar7], arg4);
            bVar1 = arg2[uVar7];
            if ((unsigned long)bVar1 != 0) {
                bVar4 = 31;
                uVar3 = 0;
                do {
                    local_b8[uVar3 + 1] = 1 << (bVar4 & 31);
                    uVar3 = uVar3 + 1;
                    bVar4 = bVar4 - 1;
                } while (bVar1 != uVar3);
            }
            iVar6 = (int)uVar7 + 1;
            uVar9 = 1;
            if (iVar6 < arg3) {
                arg4_00 = 1;
                do {
                    bVar1 = arg2[uVar7 + 1];
                    uVar7 = uVar7 + 1;
                    if (bVar1 != 255) {
                        uVar3 = (unsigned long)(unsigned int)bVar1;
                        if (bVar1 != 0) {
                            uVar3 = (unsigned long)(unsigned int)bVar1;
                            do {
                                if (local_b8[uVar3] != 0)
                                    goto LAB_100b9e6c9;
                                bVar2 = 1 < (long)uVar3;
                                uVar3 = uVar3 - 1;
                            } while (bVar2);
                            uVar3 = 0;
                        }
                    LAB_100b9e6c9:
                        iVar5 = (int)uVar3;
                        if (iVar5 == 0) {
                            bVar2 = true;
                        } else {
                            lVar8 = (long)iVar5;
                            arg1 = local_b8[lVar8];
                            local_b8[lVar8] = 0;
                            arg2_00 = bit_reverse(arg1);
                            add_entry(codebook, arg2_00, (int)uVar7, arg4_00, (unsigned int)bVar1, arg4);
                            bVar1 = arg2[uVar7];
                            bVar2 = false;
                            if (iVar5 < (int)(unsigned int)bVar1) {
                                uVar3 = (unsigned long)(unsigned int)bVar1;
                                iVar5 = 32 - (unsigned int)bVar1;
                                do {
                                    if (local_b8[uVar3] != 0) {
                                        LogAssert("available[y] == 0",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/hal/audio/workers/vorbis_std.code",
                                                  710, nullptr);
                                    }
                                    local_b8[uVar3] = (1 << ((uint8_t)iVar5 & 31)) + arg1;
                                    uVar3 = uVar3 - 1;
                                    iVar5 = iVar5 + 1;
                                } while (lVar8 < (long)uVar3);
                                bVar2 = false;
                                arg4_00 = arg4_00 + 1;
                            } else {
                                arg4_00 = arg4_00 + 1;
                            }
                        }
                        if (bVar2) {
                            uVar9 = 0;
                            goto LAB_100b9e83d;
                        }
                    }
                    iVar6 = iVar6 + 1;
                } while (iVar6 != arg3);
                uVar9 = 1;
            }
        }
    LAB_100b9e83d:
        return uVar9;
    }

    // 0x100b9e870
    void compute_sorted_huffman(Codebook* codebook, unsigned char* arg2, unsigned int* arg3) {
        unsigned char arg2_00;
        uint32_t uVar2;
        int iVar3;
        int iVar4;
        unsigned int uVar5;
        long lVar6;
        long lVar7;
        long lVar9;
        int iVar10;
        unsigned long uVar11;

        if (codebook[27] == (Codebook)0) {
            if (*(int*)(codebook + 4) < 1) {
                iVar4 = 0;
            } else {
                lVar9 = 0;
                iVar4 = 0;
                do {
                    iVar3 = include_in_sort(codebook, arg2[lVar9]);
                    if (iVar3 != 0) {
                        uVar2 = bit_reverse(*(unsigned int*)(*(long*)(codebook + 40) + lVar9 * 4));
                        lVar6 = (long)iVar4;
                        iVar4 = iVar4 + 1;
                        *(uint32_t*)(*(long*)(codebook + 2096) + lVar6 * 4) = uVar2;
                    }
                    lVar9 = lVar9 + 1;
                } while (lVar9 < *(int*)(codebook + 4));
            }
            if (iVar4 != *(int*)(codebook + 2112)) {
                LogAssert("k == c->sorted_entries",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                          "vorbis_std.code",
                          777, nullptr);
            }
        } else if (0 < *(int*)(codebook + 2112)) {
            lVar9 = *(long*)(codebook + 40);
            lVar6 = *(long*)(codebook + 2096);
            lVar7 = 0;
            do {
                uVar2 = bit_reverse(*(unsigned int*)(lVar9 + lVar7 * 4));
                *(uint32_t*)(lVar6 + lVar7 * 4) = uVar2;
                lVar7 = lVar7 + 1;
            } while (lVar7 < *(int*)(codebook + 2112));
        }
        _qsort(*(void**)(codebook + 2096), (long)*(int*)(codebook + 2112), 4, (int*)uint32_compare);
        *(uint32_t*)(*(long*)(codebook + 2096) + (long)*(int*)(codebook + 2112) * 4) = 4294967295;
        Codebook* pCVar8 = codebook + 2112;
        if (codebook[27] == (Codebook)0) {
            pCVar8 = codebook + 4;
        }
        unsigned int uVar1 = *(unsigned int*)pCVar8;
        if (0 < (int)uVar1) {
            uVar11 = 0;
            do {
                uVar5 = (unsigned int)uVar11;
                if (codebook[27] != (Codebook)0) {
                    uVar5 = arg3[uVar11];
                }
                arg2_00 = arg2[uVar5];
                iVar4 = include_in_sort(codebook, arg2_00);
                if (iVar4 != 0) {
                    uVar5 = bit_reverse(*(unsigned int*)(*(long*)(codebook + 40) + uVar11 * 4));
                    iVar4 = *(int*)(codebook + 2112);
                    iVar3 = 0;
                    if (1 < iVar4) {
                        iVar3 = 0;
                        do {
                            iVar10 = iVar4 >> 1;
                            if (uVar5 < *(unsigned int*)(*(long*)(codebook + 2096) + (long)(iVar10 + iVar3) * 4)) {
                                iVar4 = iVar10;
                            } else {
                                iVar4 = iVar4 - iVar10;
                                iVar3 = iVar10 + iVar3;
                            }
                        } while (1 < iVar4);
                    }
                    lVar9 = (long)iVar3;
                    if (*(unsigned int*)(*(long*)(codebook + 2096) + lVar9 * 4) != uVar5) {
                        LogAssert("c->sorted_codewords[x] == code",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                                  "workers/vorbis_std.code",
                                  809, nullptr);
                    }
                    if (codebook[27] == (Codebook)0) {
                        *(unsigned int*)(*(long*)(codebook + 2104) + lVar9 * 4) = (unsigned int)uVar11;
                    } else {
                        *(unsigned int*)(*(long*)(codebook + 2104) + lVar9 * 4) = arg3[uVar11];
                        *(unsigned char*)(*(long*)(codebook + 8) + lVar9) = arg2_00;
                    }
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 != uVar1);
        }
    }

    // 0x100b9eac0
    void compute_accelerated_huffman(Codebook* codebook) {
        long lVar2;
        unsigned long uVar5;
        unsigned int uVar6;
        unsigned long uVar7;

        _memset(codebook + 48, 255, 2048);
        Codebook CVar1 = codebook[27];
        Codebook* pCVar4 = codebook + 4;
        if (CVar1 != (Codebook)0) {
            pCVar4 = codebook + 2112;
        }
        unsigned int uVar3 = *(unsigned int*)pCVar4;
        if (0 < (int)uVar3) {
            uVar6 = 32767;
            if ((int)uVar3 < 32767) {
                uVar6 = uVar3;
            }
            lVar2 = *(long*)(codebook + 8);
            uVar7 = (unsigned long)uVar6;
            if ((int)uVar6 < 2) {
                uVar7 = 1;
            }
            uVar5 = 0;
            do {
                if (*(uint8_t*)(lVar2 + uVar5) < 11) {
                    if (CVar1 == (Codebook)0) {
                        uVar3 = *(unsigned int*)(*(long*)(codebook + 40) + uVar5 * 4);
                    } else {
                        uVar3 = bit_reverse(*(unsigned int*)(*(long*)(codebook + 2096) + uVar5 * 4));
                    }
                    for (; uVar3 < 1024; uVar3 = uVar3 + (1 << (*(uint8_t*)(lVar2 + uVar5) & 31))) {
                        *(short*)(codebook + (unsigned long)uVar3 * 2 + 48) = (short)uVar5;
                    }
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 != uVar7);
        }
    }

    // 0x100b9eba0
    void float32_unpack(unsigned int arg1) {
        float arg1_00 = (float)(arg1 & 2097151);
        if ((int)arg1 < 0) {
            arg1_00 = -arg1_00;
        }
        ldexp(arg1_00, (arg1 >> 21 & 1023) - 788);
    }

    // 0x100b9ebe0
    int lookup1_values(int arg1, int arg2) {
        float fVar2 = (float)log((float)arg1);
        fVar2 = (float)exp(fVar2 / (float)arg2);
        fVar2 = (float)::floor(fVar2);
        pow<float, int>((float)(int)fVar2 + 1.0, arg2);
        double dVar3 = (double)_floor();
        int iVar1 = (unsigned int)((int)dVar3 <= arg1) + (int)fVar2;
        fVar2 = (float)iVar1;
        dVar3 = (double)pow<float, int>(fVar2 + 1.0, arg2);
        if (dVar3 <= (double)arg1) {
            LogAssert("pow((float)r + 1, dim) > entries",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      835, nullptr);
        }
        pow<float, int>(fVar2, arg2);
        dVar3 = (double)_floor();
        if (arg1 < (int)dVar3) {
            LogAssert("(int)floor(pow((float)r, dim)) <= entries",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "vorbis_std.code",
                      836, nullptr);
        }
        return iVar1;
    }

    // 0x100b9ece0
    unsigned long point_compare(const void* arg1, const void* arg2) {
        unsigned long uVar1 = 4294967295;
        if (*(unsigned short*)arg2 <= *(unsigned short*)arg1) {
            uVar1 = (unsigned long)(*(unsigned short*)arg2 < *(unsigned short*)arg1);
        }
        return uVar1;
    }

    // 0x100b9ed00
    void neighbors(unsigned short* arg1, int arg2, int* arg3, int* arg4) {
        unsigned short uVar1;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        unsigned int uVar5;

        if (0 < arg2) {
            uVar4 = 4294967295;
            uVar5 = 65536;
            uVar2 = 0;
            do {
                uVar1 = arg1[uVar2];
                uVar3 = (unsigned int)uVar1;
                if (((int)uVar4 < (int)(unsigned int)uVar1) && (uVar1 < arg1[arg2])) {
                    *arg3 = (int)uVar2;
                    uVar4 = uVar3;
                }
                if ((uVar3 < uVar5) && (arg1[arg2] < uVar1)) {
                    *arg4 = (int)uVar2;
                    uVar5 = uVar3;
                }
                uVar2 = uVar2 + 1;
            } while ((unsigned int)arg2 != uVar2);
        }
    }

    // 0x100b9ed60
    void init_blocksize(stb_vorbis* stb_vorbis, int arg2, int arg3) {
        unsigned short* arg2_00;

        unsigned int arg2_01 = arg3 * 2 & 4294967292;
        uint64_t uVar1 = setup_malloc(stb_vorbis, arg2_01);
        unsigned long uVar3 = (unsigned long)(unsigned int)arg2;
        *(uint64_t*)(stb_vorbis + uVar3 * 8 + 1392) = uVar1;
        uVar1 = setup_malloc(stb_vorbis, arg2_01);
        *(uint64_t*)(stb_vorbis + uVar3 * 8 + 1408) = uVar1;
        auto pfVar2 = setup_malloc(stb_vorbis, arg3 & 4294967292);
        *(float**)(stb_vorbis + uVar3 * 8 + 1424) = pfVar2;
        if (((*(float**)(stb_vorbis + uVar3 * 8 + 1392) != nullptr) &&
             (*(float**)(stb_vorbis + uVar3 * 8 + 1408) != nullptr)) &&
            (pfVar2 != nullptr)) {
            compute_twiddle_factors(arg3, *(float**)(stb_vorbis + uVar3 * 8 + 1392),
                                    *(float**)(stb_vorbis + uVar3 * 8 + 1408), pfVar2);
            pfVar2 = (float*)setup_malloc(stb_vorbis, arg2_01);
            *(float**)(stb_vorbis + uVar3 * 8 + 1440) = pfVar2;
            if (pfVar2 != nullptr) {
                compute_window(arg3, pfVar2);
                arg2_00 = (unsigned short*)setup_malloc(stb_vorbis, arg3 >> 2 & 4294967294);
                *(unsigned short**)(stb_vorbis + uVar3 * 8 + 1456) = arg2_00;
                if (arg2_00 != nullptr) {
                    compute_bitreverse(arg3, arg2_00);
                    return 1;
                }
            }
        }
        error(stb_vorbis, 3);
        return 0;
    }

    // 0x100b9ee60
    void add_entry(Codebook* codebook, unsigned int arg2, int arg3, int arg4, int arg5, unsigned int* arg6) {
        if (codebook[27] == (Codebook)0) {
            *(unsigned int*)(*(long*)(codebook + 40) + (long)arg3 * 4) = arg2;
            return;
        }
        *(unsigned int*)(*(long*)(codebook + 40) + (long)arg4 * 4) = arg2;
        *(char*)(*(long*)(codebook + 8) + (long)arg4) = (char)arg5;
        arg6[(long)arg4] = arg3;
    }

    // 0x100b9ee90
    bool include_in_sort(Codebook* codebook, unsigned char arg2) {
        bool bVar1;

        if (codebook[27] == (Codebook)0) {
            bVar1 = false;
            if (arg2 != 255) {
                bVar1 = 10 < arg2;
            }
        } else {
            bVar1 = true;
            if (arg2 == 255) {
                LogAssert("len != NO_CODE",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                          "vorbis_std.code",
                          757, nullptr);
            }
        }
        return bVar1;
    }

    // 0x100b9eee0
    unsigned long uint32_compare(const void* arg1, const void* arg2) {
        unsigned long uVar1 = 4294967295;
        if (*(unsigned int*)arg2 <= *(unsigned int*)arg1) {
            uVar1 = (unsigned long)(*(unsigned int*)arg2 < *(unsigned int*)arg1);
        }
        return uVar1;
    }

    // 0x100b9ef40
    void compute_twiddle_factors(int arg1, float* arg2, float* arg3, float* arg4) {
        int iVar1;
        int iVar2;
        long lVar3;
        double dVar5;
        double dVar6;
        double in_XMM1_Qa;

        if (3 < arg1) {
            iVar2 = 1;
            if (1 < arg1 >> 2) {
                iVar2 = arg1 >> 2;
            }
            lVar3 = 1;
            iVar1 = 0;
            do {
                dVar5 = (double)___sincos_stret((double)iVar1 * 3.141592653589793 * (1.0 / (double)arg1));
                dVar6 = (double)(((uint64_t)((int)((unsigned long)in_XMM1_Qa >> 32)) << 32) |
                                 (uint32_t)((float)in_XMM1_Qa));
                arg2[lVar3 - 1] = (float)in_XMM1_Qa;
                arg2[lVar3] = -(float)dVar5;
                dVar5 = (double)___sincos_stret((double)(int)lVar3 * 1.5707963267948966 * (1.0 / (double)arg1));
                in_XMM1_Qa =
                    (double)(((uint64_t)((int)((unsigned long)dVar6 >> 32)) << 32) | (uint32_t)((float)dVar6 * 0.5));
                arg3[lVar3 - 1] = (float)dVar6 * 0.5;
                arg3[lVar3] = (float)dVar5 * 0.5;
                lVar3 = lVar3 + 2;
                iVar1 = iVar1 + 4;
            } while (iVar2 << 2 != iVar1);
        }
        if (7 < arg1) {
            iVar2 = 1;
            if (1 < arg1 >> 3) {
                iVar2 = arg1 >> 3;
            }
            lVar3 = 0;
            do {
                dVar5 = (double)arg1;
                dVar6 = (double)___sincos_stret(((double)((int)lVar3 + 2) * 3.141592653589793) / (double)arg1);
                *(float*)((long)arg4 + lVar3 * 2) = (float)dVar5;
                *(float*)((long)arg4 + lVar3 * 2 + 4) = -(float)dVar6;
                lVar3 = lVar3 + 4;
            } while (iVar2 << 2 != (int)lVar3);
        }
    }

    // 0x100b9f0c0
    void compute_window(int arg1, float* arg2) {
        unsigned long uVar1;
        unsigned int uVar2;
        unsigned long uVar3;
        float fVar4;
        double dVar5;

        if (1 < arg1) {
            uVar2 = arg1 >> 1;
            uVar3 = 1;
            if (1 < (int)uVar2) {
                uVar3 = (unsigned long)uVar2;
            }
            uVar1 = 0;
            do {
                dVar5 =
                    (double)_sin(((double)(int)uVar1 * 1.5707963267948966 + 0.7853981633974483) / (double)(int)uVar2);
                fVar4 = (float)square((float)dVar5);
                dVar5 = (double)_sin((double)fVar4 * 1.5707963267948966);
                arg2[uVar1] = (float)dVar5;
                uVar1 = uVar1 + 1;
            } while (uVar3 != uVar1);
        }
    }

    // 0x100b9f150
    void compute_bitreverse(int arg1, unsigned short* arg2) {
        unsigned int uVar2;
        unsigned long uVar3;
        unsigned long uVar4;

        char cVar1 = ilog(arg1);
        if (7 < arg1) {
            uVar4 = 1;
            if (1 < arg1 >> 3) {
                uVar4 = (unsigned long)(unsigned int)(arg1 >> 3);
            }
            uVar3 = 0;
            do {
                uVar2 = bit_reverse((unsigned int)uVar3);
                arg2[uVar3] = (unsigned short)((uVar2 >> (36U - cVar1 & 31)) << 2);
                uVar3 = uVar3 + 1;
            } while (uVar4 != uVar3);
        }
    }

    // 0x100b9f1c0
    float square(float arg1) {
        return arg1 * arg1;
    }

    // 0x100b9f1d0
    void get_seek_page_info(stb_vorbis* stb_vorbis, ProbedPage* probedPage) {
        int iVar2;
        unsigned int arg3;
        unsigned long uVar4;
        uint8_t local_148[256];
        unsigned char local_48;
        char local_47;
        char local_46;
        char local_45;
        uint32_t local_42;
        uint8_t local_2e;

        uint32_t uVar1 = _stb_vorbis_get_file_offset();
        *(uint32_t*)probedPage = uVar1;
        getn(stb_vorbis, &local_48, 27);
        uint64_t uVar3 = 0;
        if ((((local_48 == 'O') && (local_47 == 'g')) && (local_46 == 'g')) && (local_45 == 'S')) {
            arg3 = (unsigned int)local_2e;
            getn(stb_vorbis, local_148, arg3);
            if (local_2e == 0) {
                iVar2 = 0;
            } else {
                uVar4 = 0;
                iVar2 = 0;
                do {
                    iVar2 = iVar2 + (unsigned int)local_148[uVar4];
                    uVar4 = uVar4 + 1;
                } while (arg3 != uVar4);
            }
            *(unsigned int*)(probedPage + 4) = *(unsigned int*)probedPage + arg3 + iVar2 + 27;
            *(uint32_t*)(probedPage + 8) = local_42;
            set_file_offset(stb_vorbis, *(unsigned int*)probedPage);
            uVar3 = 1;
        }
        return uVar3;
    }

    // 0x100b9f2b0
    void go_to_page_before(stb_vorbis* stb_vorbis, unsigned int arg2) {
        unsigned int uVar2;
        unsigned int local_2c;

        if ((arg2 < 65536) || (uVar2 = arg2 - 65536, uVar2 < *(unsigned int*)(stb_vorbis + 72))) {
            uVar2 = *(unsigned int*)(stb_vorbis + 72);
        }
        set_file_offset(stb_vorbis, uVar2);
        int iVar1 = vorbis_find_page(stb_vorbis, &local_2c, nullptr);
        if (iVar1 != 0) {
            do {
                if ((arg2 <= local_2c) && (uVar2 = _stb_vorbis_get_file_offset(stb_vorbis), uVar2 < arg2)) {
                    return 1;
                }
                set_file_offset(stb_vorbis, local_2c);
                iVar1 = vorbis_find_page(stb_vorbis, &local_2c, nullptr);
            } while (iVar1 != 0);
        }
        return 0;
    }

    // 0x100b9f360
    void compute_samples(int arg1, short* arg2, int arg3, float** arg4, int arg5, int arg6) {
        float* pfVar1;
        int iVar2;
        unsigned long uVar3;
        long lVar4;
        long lVar5;
        long lVar6;
        int iVar7;
        float fVar8;
        float local_b8[32];

        if (0 < arg6) {
            lVar4 = (long)arg5;
            iVar7 = 32;
            lVar5 = 0;
            do {
                iVar2 = arg6 - (int)lVar5;
                if (iVar7 + (int)lVar5 <= arg6) {
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
                if (0 < arg3) {
                    uVar3 = 0;
                    do {
                        if ((((char)(&channel_position)[uVar3 + (long)arg3 * 6] & arg1) != 0) && (0 < iVar7)) {
                            pfVar1 = arg4[uVar3];
                            lVar6 = 0;
                            do {
                                local_b8[lVar6] = local_b8[lVar6] + pfVar1[lVar4 + lVar6];
                                lVar6 = lVar6 + 1;
                            } while (lVar6 < iVar7);
                        }
                        uVar3 = uVar3 + 1;
                    } while (uVar3 != (unsigned int)arg3);
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
                        arg2[lVar6] = (uint16_t)fVar8;
                        lVar6 = lVar6 + 1;
                    } while (lVar6 < iVar7);
                }
                lVar5 = lVar5 + 32;
                lVar4 = lVar4 + 32;
                arg2 = arg2 + 32;
            } while (lVar5 < arg6);
        }
    }

    // 0x100b9f530
    void copy_samples(short* arg1, float* arg2, int arg3) {
        unsigned long uVar1;
        float fVar2;

        if (0 < arg3) {
            uVar1 = 0;
            do {
                fVar2 = arg2[uVar1] + 384.0;
                if ((int)fVar2 < 1136623617) {
                    fVar2 = 383.0;
                }
                if (1136689150 < (int)fVar2) {
                    fVar2 = 4.59163e-41;
                }
                arg1[uVar1] = (uint16_t)fVar2;
                uVar1 = uVar1 + 1;
            } while ((unsigned int)arg3 != uVar1);
        }
    }

    // 0x100b9f590
    void compute_stereo_samples(short* arg1, int arg2, float** arg3, int arg4, int arg5) {
        float* pfVar1;
        int iVar2;
        uint8_t bVar3;
        long lVar4;
        long lVar5;
        unsigned long uVar6;
        int iVar7;
        int iVar8;
        long lVar9;
        long lVar10;
        float fVar11;
        float local_b8[32];

        if (0 < arg5) {
            lVar10 = (long)arg4;
            iVar8 = 16;
            iVar7 = 0;
            lVar9 = 0;
            do {
                iVar2 = arg5 - (int)lVar9;
                if ((int)lVar9 + iVar8 <= arg5) {
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
                if (0 < arg2) {
                    lVar5 = (long)iVar8;
                    uVar6 = 0;
                    do {
                        bVar3 = (&channel_position)[uVar6 + (long)arg2 * 6] & 6;
                        if (bVar3 == 2) {
                            if (0 < iVar8) {
                                pfVar1 = arg3[uVar6];
                                lVar4 = 0;
                                do {
                                    local_b8[lVar4 * 2] = local_b8[lVar4 * 2] + pfVar1[lVar10 + lVar4];
                                    lVar4 = lVar4 + 1;
                                } while (lVar4 < lVar5);
                            }
                        } else if (bVar3 == 6) {
                            if (0 < iVar8) {
                                pfVar1 = arg3[uVar6];
                                lVar4 = 0;
                                do {
                                    fVar11 = pfVar1[lVar10 + lVar4];
                                    local_b8[lVar4 * 2] = local_b8[lVar4 * 2] + fVar11;
                                    local_b8[lVar4 * 2 + 1] = fVar11 + local_b8[lVar4 * 2 + 1];
                                    lVar4 = lVar4 + 1;
                                } while (lVar4 < lVar5);
                            }
                        } else if ((bVar3 == 4) && (0 < iVar8)) {
                            pfVar1 = arg3[uVar6];
                            lVar4 = 0;
                            do {
                                local_b8[lVar4 * 2 + 1] = local_b8[lVar4 * 2 + 1] + pfVar1[lVar10 + lVar4];
                                lVar4 = lVar4 + 1;
                            } while (lVar4 < lVar5);
                        }
                        uVar6 = uVar6 + 1;
                    } while (uVar6 != (unsigned int)arg2);
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
                        arg1[iVar7 + lVar5] = (uint16_t)fVar11;
                        lVar5 = lVar5 + 1;
                    } while (lVar5 < iVar8 * 2);
                }
                lVar9 = lVar9 + 16;
                lVar10 = lVar10 + 16;
                iVar7 = iVar7 + 32;
            } while (lVar9 < arg5);
        }
    }

} // namespace jag::hal::audio::decoders::vorbis

class VorbisWorker {
public:
    // virtual methods in vtable order
    virtual ~VorbisWorker();
    virtual void OnInterval(float arg1, unsigned long long arg2);
    virtual void OnMessage(jag::PacketT<jag::Array<unsigned char>>& arg1);
    virtual void OnResponse(jag::PacketT<jag::Array<unsigned char>>& arg1);
    void SetWorkerOnResponse(std::function<void(jag::PacketT<jag::Array<unsigned char>>&)> const& callback);
    VorbisWorker();
};

class VorbisWorkerPacket {
public:
    void PacketT(unsigned long arg1);
};

// 0x100b92a50
void VorbisWorkerPacket::PacketT(unsigned long arg1) {
    PacketT(arg1);
}

// 0x100b92a60
undefined4* _stb_vorbis_get_info(undefined4* param_1, undefined4* param_2) {
    param_1[1] = param_2[1];
    *param_1 = *param_2;
    param_1[2] = param_2[2];
    param_1[3] = param_2[4];
    param_1[4] = param_2[3];
    param_1[5] = (int)param_2[37] >> 1;
    return param_1;
}

// 0x100b92db0
undefined4 _stb_vorbis_get_sample_offset(long param_1) {
    if (*(int*)(param_1 + 1388) == 0) {
        return 4294967295;
    }
    return *(uint32_t*)(param_1 + 1384);
}

// 0x100b92dd0
undefined4 _stb_vorbis_get_error(long param_1) {
    uint32_t uVar1 = *(uint32_t*)(param_1 + 132);
    *(uint32_t*)(param_1 + 132) = 0;
    return uVar1;
}

// 0x100b95280
int _stb_vorbis_get_file_offset(long param_1) {
    long lVar2;

    int iVar1 = 0;
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

// 0x100b952c0
undefined4 _stb_vorbis_seek_frame(stb_vorbis* param_1, uint param_2) {
    int iVar1;
    bool bVar2;
    int iVar3;
    unsigned int uVar5;
    uint32_t unaff_R15D;
    int local_44;
    int local_40;
    int local_3c;
    int local_38;
    int local_34;

    if (param_1[68] == (stb_vorbis)0) {
        iVar3 = jag::hal::audio::decoders::vorbis::seek_to_sample_coarse(param_1, param_2);
        if (iVar3 != 0) {
            if (*(int*)(param_1 + 1388) == 0) {
                jag::LogAssert("f->current_loc_valid",
                               "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                               "workers/vorbis_std.code",
                               4509, nullptr);
            }
            if (param_2 < *(unsigned int*)(param_1 + 1384)) {
                jag::LogAssert("f->current_loc <= sample_number",
                               "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                               "workers/vorbis_std.code",
                               4510, nullptr);
            }
            iVar3 = *(int*)(param_1 + 148);
            iVar1 = *(int*)(param_1 + 144);
            do {
                if (param_2 <= *(unsigned int*)(param_1 + 1384)) {
                    if (*(unsigned int*)(param_1 + 1384) != param_2) {
                        jag::LogAssert("f->current_loc == sample_number",
                                       "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                       "audio/workers/vorbis_std.code",
                                       4536, nullptr);
                    }
                    return 1;
                }
                if (jag::hal::audio::decoders::vorbis::peek_decode_initial(param_1, &local_38, &local_44, &local_34,
                                                                           &local_40, &local_3c) == 0) {
                    jag::hal::audio::decoders::vorbis::error(param_1, 37);
                    bVar2 = false;
                    unaff_R15D = 0;
                } else {
                    uVar5 = (local_34 - local_38) + *(int*)(param_1 + 1384);
                    if (param_2 < uVar5) {
                        unaff_R15D = 1;
                        bVar2 = false;
                    } else {
                        if (param_2 < uVar5 + (iVar3 * 3 - iVar1 >> 2)) {
                            jag::hal::audio::decoders::vorbis::vorbis_pump_first_frame(param_1);
                        } else {
                            *(unsigned int*)(param_1 + 1384) = uVar5;
                            *(uint32_t*)(param_1 + 1248) = 0;
                            jag::hal::audio::decoders::vorbis::maybe_start_packet(param_1);
                            jag::hal::audio::decoders::vorbis::flush_packet(param_1);
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

// 0x100b95a90
undefined8 _stb_vorbis_seek(long param_1, uint param_2) {
    unsigned int uVar1;
    uint64_t uVar3;
    uint8_t local_2c[4];

    if (_stb_vorbis_seek_frame() == 0) {
        uVar3 = 0;
    } else {
        uVar1 = *(unsigned int*)(param_1 + 1384);
        uVar3 = 1;
        if (uVar1 != param_2) {
            _stb_vorbis_get_frame_float(param_1, local_2c, 0);
            if (param_2 <= uVar1) {
                jag::LogAssert("sample_number > frame_start",
                               "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                               "workers/vorbis_std.code",
                               4549, nullptr);
            }
            if (*(int*)(param_1 + 1872) < (int)(*(int*)(param_1 + 1868) + (param_2 - uVar1))) {
                jag::LogAssert("f->channel_buffer_start + (int)(sample_number - frame_start) <= f->channel_buffer_end",
                               "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                               "workers/vorbis_std.code",
                               4550, nullptr);
            }
            *(int*)(param_1 + 1868) = *(int*)(param_1 + 1868) + (param_2 - uVar1);
        }
    }
    return uVar3;
}

// 0x100b95b40
undefined8 _stb_vorbis_get_frame_float(stb_vorbis* param_1, uint* param_2, long* param_3) {
    unsigned int uVar1;
    uint64_t uVar3;
    unsigned long uVar4;
    int local_34;
    int local_30;
    int local_2c;

    if (param_1[68] == (stb_vorbis)0) {
        if (jag::hal::audio::decoders::vorbis::vorbis_decode_packet(param_1, &local_2c, &local_30, &local_34) != 0) {
            uVar3 = jag::hal::audio::decoders::vorbis::vorbis_finish_frame(param_1, local_2c, local_30, local_34);
            uVar1 = *(unsigned int*)(param_1 + 4);
            if (0 < (int)uVar1) {
                uVar4 = 0;
                do {
                    *(long*)(param_1 + uVar4 * 8 + 992) = *(long*)(param_1 + uVar4 * 8 + 864) + (long)local_30 * 4;
                    uVar4 = uVar4 + 1;
                } while (uVar1 != uVar4);
            }
            *(int*)(param_1 + 1868) = local_30;
            *(int*)(param_1 + 1872) = local_30 + (int)uVar3;
            if (param_2 != nullptr) {
                *param_2 = uVar1;
            }
            if (param_3 == nullptr) {
                return uVar3;
            }
            *param_3 = (long)(param_1 + 992);
            return uVar3;
        }
        *(uint64_t*)(param_1 + 1868) = 0;
    } else {
        jag::hal::audio::decoders::vorbis::error(param_1, 2);
    }
    return 0;
}

// 0x100b95c20
void _stb_vorbis_seek_start(stb_vorbis* param_1) {
    if (param_1[68] == (stb_vorbis)0) {
        jag::hal::audio::decoders::vorbis::set_file_offset(param_1, *(unsigned int*)(param_1 + 72));
        *(uint32_t*)(param_1 + 1248) = 0;
        param_1[1741] = (stb_vorbis)1;
        *(uint32_t*)(param_1 + 1744) = 4294967295;
        jag::hal::audio::decoders::vorbis::vorbis_pump_first_frame(param_1);
    } else {
        jag::hal::audio::decoders::vorbis::error(param_1, 2);
    }
}

// 0x100b95d20
int _stb_vorbis_stream_length_in_samples(stb_vorbis* param_1) {
    int iVar2;
    int iVar3;
    unsigned int uVar4;
    unsigned char local_3e[6];
    unsigned int local_38;
    unsigned int local_34;

    if (param_1[68] != (stb_vorbis)0) {
        jag::hal::audio::decoders::vorbis::error(param_1, 2);
        return 0;
    }
    if (*(int*)(param_1 + 860) != 0)
        goto LAB_100b95e29;
    unsigned int arg2 = _stb_vorbis_get_file_offset(param_1);
    if ((*(unsigned int*)(param_1 + 64) < 65536) ||
        (uVar4 = *(unsigned int*)(param_1 + 64) - 65536, uVar4 < *(unsigned int*)(param_1 + 72))) {
        uVar4 = *(unsigned int*)(param_1 + 72);
    }
    jag::hal::audio::decoders::vorbis::set_file_offset(param_1, uVar4);
    int iVar1 = jag::hal::audio::decoders::vorbis::vorbis_find_page(param_1, &local_34, &local_38);
    if (iVar1 == 0) {
    LAB_100b95dea:
        *(uint32_t*)(param_1 + 132) = 36;
        *(uint32_t*)(param_1 + 860) = 4294967295;
    } else {
        uVar4 = _stb_vorbis_get_file_offset(param_1);
        if (local_38 == 0) {
            jag::hal::audio::decoders::vorbis::set_file_offset(param_1, local_34);
            iVar1 = jag::hal::audio::decoders::vorbis::vorbis_find_page(param_1, &local_34, &local_38);
            if (iVar1 != 0) {
                do {
                    uVar4 = _stb_vorbis_get_file_offset(param_1);
                    if (local_38 != 0)
                        break;
                    jag::hal::audio::decoders::vorbis::set_file_offset(param_1, local_34);
                    iVar1 = jag::hal::audio::decoders::vorbis::vorbis_find_page(param_1, &local_34, &local_38);
                } while (iVar1 != 0);
            }
        }
        jag::hal::audio::decoders::vorbis::set_file_offset(param_1, uVar4);
        jag::hal::audio::decoders::vorbis::getn(param_1, local_3e, 6);
        iVar1 = jag::hal::audio::decoders::vorbis::get32(param_1);
        iVar2 = jag::hal::audio::decoders::vorbis::get32(param_1);
        if ((iVar1 == -1) && (iVar2 == -1))
            goto LAB_100b95dea;
        iVar3 = -2;
        if (iVar2 == 0) {
            iVar3 = iVar1;
        }
        *(int*)(param_1 + 860) = iVar3;
        *(unsigned int*)(param_1 + 88) = uVar4;
        *(unsigned int*)(param_1 + 92) = local_34;
        *(int*)(param_1 + 96) = iVar3;
    }
    jag::hal::audio::decoders::vorbis::set_file_offset(param_1, arg2);
LAB_100b95e29:
    iVar1 = 0;
    if (*(int*)(param_1 + 860) != -1) {
        iVar1 = *(int*)(param_1 + 860);
    }
    return iVar1;
}

// 0x100b96230
float _stb_vorbis_stream_length_in_seconds(uint* param_1) {
    unsigned int uVar1 = _stb_vorbis_stream_length_in_samples();
    return (float)uVar1 / (float)*param_1;
}

// 0x100b96260
stb_vorbis* _stb_vorbis_open_file_section(FILE* param_1, undefined4 param_2, undefined4* param_3,
                                          stb_vorbis_alloc* param_4, undefined4 param_5) {
    stb_vorbis* stb_vorbis;
    stb_vorbis local_790;
    uint32_t local_70c;

    jag::hal::audio::decoders::vorbis::vorbis_init(&local_790, param_4);
    FILE* local_778 = param_1;
    long lVar2 = _ftell(param_1);
    uint32_t local_770 = (uint32_t)lVar2;
    uint32_t local_76c = param_2;
    uint32_t local_750 = param_5;
    if (jag::hal::audio::decoders::vorbis::start_decoder(&local_790) != 0) {
        stb_vorbis = (stb_vorbis*)jag::hal::audio::decoders::vorbis::vorbis_alloc(&local_790);
        if (stb_vorbis != nullptr) {
            _memcpy(stb_vorbis, &local_790, 1880);
            jag::hal::audio::decoders::vorbis::vorbis_pump_first_frame(stb_vorbis);
            goto LAB_100b9631d;
        }
    }
    if (param_3 != nullptr) {
        *param_3 = local_70c;
    }
    jag::hal::audio::decoders::vorbis::vorbis_deinit(&local_790);
    stb_vorbis = nullptr;
LAB_100b9631d:
    return stb_vorbis;
}

// 0x100b96350
void _stb_vorbis_open_file(FILE* param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4) {
    unsigned long uVar1 = _ftell(param_1);
    _fseek(param_1, 0, 2);
    long lVar2 = _ftell(param_1);
    _fseek(param_1, uVar1 & 4294967295, 0);
    _stb_vorbis_open_file_section(param_1, param_2, param_3, param_4, (int)lVar2 - (int)uVar1);
}

// 0x100b963d0
undefined8 _stb_vorbis_open_filename(char* param_1, undefined4* param_2, undefined8 param_3) {
    uint64_t uVar2;

    auto pFVar1 = _fopen(param_1, "rb");
    if (pFVar1 == nullptr) {
        if (param_2 != nullptr) {
            *param_2 = 6;
        }
        uVar2 = 0;
    } else {
        uVar2 = _stb_vorbis_open_file(pFVar1, 1, param_2, param_3);
    }
    return uVar2;
}

// 0x100b96420
stb_vorbis* _stb_vorbis_open_memory(long param_1, int param_2, undefined4* param_3, stb_vorbis_alloc* param_4) {
    stb_vorbis* stb_vorbis;
    stb_vorbis local_788;
    long local_760;
    long local_758;
    long local_750;
    int local_748;
    uint8_t local_744;
    uint32_t local_704;

    if (param_1 != 0) {
        jag::hal::audio::decoders::vorbis::vorbis_init(&local_788, param_4);
        local_750 = param_1 + param_2;
        local_744 = 0;
        local_760 = param_1;
        local_758 = param_1;
        local_748 = param_2;
        if (jag::hal::audio::decoders::vorbis::start_decoder(&local_788) != 0) {
            stb_vorbis = (stb_vorbis*)jag::hal::audio::decoders::vorbis::vorbis_alloc(&local_788);
            if (stb_vorbis != nullptr) {
                _memcpy(stb_vorbis, &local_788, 1880);
                jag::hal::audio::decoders::vorbis::vorbis_pump_first_frame(stb_vorbis);
                goto LAB_100b964e7;
            }
        }
        if (param_3 != nullptr) {
            *param_3 = local_704;
        }
        jag::hal::audio::decoders::vorbis::vorbis_deinit(&local_788);
    }
    stb_vorbis = nullptr;
LAB_100b964e7:
    return stb_vorbis;
}

// 0x100b96510
int _stb_vorbis_get_frame_short(long param_1, int param_2, short** param_3, int param_4) {
    float** local_38;

    int arg7 = _stb_vorbis_get_frame_float(param_1, 0, &local_38);
    if (param_4 < arg7) {
        arg7 = param_4;
    }
    if (arg7 != 0) {
        jag::hal::audio::decoders::vorbis::convert_samples_short(param_2, param_3, 0, *(int*)(param_1 + 4), local_38, 0,
                                                                 arg7);
    }
    return arg7;
}

// 0x100b966c0
ulong _stb_vorbis_get_frame_short_interleaved(long param_1, int param_2, short* param_3, int param_4) {
    unsigned int uVar1;
    unsigned long uVar2;
    float** local_40;

    short* local_48 = param_3;
    if (param_2 == 1) {
        uVar1 = _stb_vorbis_get_frame_short(param_1, 1, &local_48);
        uVar2 = (unsigned long)uVar1;
    } else {
        uVar2 = 0;
        uVar1 = _stb_vorbis_get_frame_float(param_1, 0, &local_40);
        if (uVar1 != 0) {
            uVar2 = (unsigned long)uVar1;
            if (param_4 < (int)(uVar1 * param_2)) {
                uVar2 = (long)param_4 / (long)param_2 & 4294967295;
            }
            jag::hal::audio::decoders::vorbis::convert_channels_short_interleaved(
                param_2, param_3, *(int*)(param_1 + 4), local_40, 0, (int)uVar2);
        }
    }
    return uVar2;
}

// 0x100b968e0
int _stb_vorbis_get_samples_short_interleaved(long param_1, int param_2, short* param_3, int param_4) {
    int iVar1;
    int iVar2;
    uint8_t local_48[8];

    param_4 = param_4 / param_2;
    float** local_40 = (float**)(param_1 + 864);
    int iVar3 = 0;
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

// 0x100b96990
int _stb_vorbis_get_samples_short(long param_1, int param_2, short** param_3, int param_4) {
    int iVar1;
    int iVar2;
    uint8_t local_48[8];

    int arg3 = 0;
    while (true) {
        if (param_4 <= arg3) {
            return arg3;
        }
        iVar1 = *(int*)(param_1 + 1872) - *(int*)(param_1 + 1868);
        iVar2 = param_4 - arg3;
        if (iVar1 + arg3 < param_4) {
            iVar2 = iVar1;
        }
        if (iVar2 != 0) {
            jag::hal::audio::decoders::vorbis::convert_samples_short(param_2, param_3, arg3, *(int*)(param_1 + 4),
                                                                     (param_1 + 864), *(int*)(param_1 + 1868), iVar2);
        }
        arg3 = arg3 + iVar2;
        *(int*)(param_1 + 1868) = *(int*)(param_1 + 1868) + iVar2;
        if (arg3 == param_4)
            break;
        iVar2 = _stb_vorbis_get_frame_float(param_1, 0, local_48);
        if (iVar2 == 0) {
            return arg3;
        }
    }
    return arg3;
}

// 0x100b96a40
int _stb_vorbis_decode_filename(undefined8 param_1, int* param_2, undefined4* param_3, undefined8* param_4) {
    int iVar1;
    void* pvVar3;
    void* pvVar4;
    unsigned long uVar5;
    int iVar6;
    unsigned long uVar7;
    int iVar8;
    uint8_t local_4c[4];
    unsigned long local_48;
    uint64_t* local_40;
    int local_34;

    auto puVar2 = _stb_vorbis_open_filename(param_1, local_4c, 0);
    if (puVar2 == nullptr) {
        iVar8 = -1;
    } else {
        iVar8 = puVar2[1];
        *param_2 = iVar8;
        uVar5 = (long)iVar8 * 4096;
        if (param_3 != nullptr) {
            *param_3 = *puVar2;
        }
        pvVar3 = _malloc((long)iVar8 * 8192);
        if (pvVar3 == nullptr) {
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
                        uVar7 = (unsigned long)(unsigned int)(iVar6 * 2);
                        pvVar4 = _realloc(pvVar3, (long)(iVar6 * 2) * 2);
                        if (pvVar4 == nullptr) {
                            _free(pvVar3);
                            _stb_vorbis_close(puVar2);
                            pvVar4 = pvVar3;
                        } else if (pvVar4 != nullptr)
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

// 0x100b96ba0
int _stb_vorbis_decode_memory(undefined8 param_1, undefined8 param_2, int* param_3, undefined4* param_4,
                              undefined8* param_5) {
    int iVar1;
    void* pvVar3;
    void* pvVar4;
    int iVar5;
    unsigned long uVar6;
    int iVar7;
    uint8_t local_4c[4];
    unsigned long local_48;
    uint64_t* local_40;
    int local_34;

    auto puVar2 = _stb_vorbis_open_memory(param_1, param_2, local_4c, 0);
    if (puVar2 == nullptr) {
        iVar7 = -1;
    } else {
        iVar7 = puVar2[1];
        *param_3 = iVar7;
        uVar6 = (long)iVar7 * 4096;
        if (param_4 != nullptr) {
            *param_4 = *puVar2;
        }
        pvVar3 = _malloc((long)iVar7 * 8192);
        if (pvVar3 == nullptr) {
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
                        uVar6 = (unsigned long)(unsigned int)(iVar5 * 2);
                        pvVar4 = _realloc(pvVar3, (long)(iVar5 * 2) * 2);
                        if (pvVar4 == nullptr) {
                            _free(pvVar3);
                            _stb_vorbis_close(puVar2);
                            pvVar4 = pvVar3;
                        } else if (pvVar4 != nullptr)
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

// 0x100b96d00
ulong _stb_vorbis_get_samples_float_interleaved(long param_1, uint param_2, undefined4* param_3, int param_4) {
    int iVar2;
    int iVar3;
    long lVar4;
    int iVar5;
    unsigned int uVar7;
    long lVar8;
    uint8_t local_60[8];
    long local_58;
    unsigned long local_50;
    long local_48;
    int local_3c;

    unsigned int local_34 = param_4 / (int)param_2;
    unsigned int uVar1 = *(unsigned int*)(param_1 + 4);
    if ((int)param_2 < (int)*(unsigned int*)(param_1 + 4)) {
        uVar1 = param_2;
    }
    unsigned long uVar6 = 0;
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
                        *param_3 = *(uint32_t*)(*(long*)(param_1 + 864 + uVar6 * 8) + (local_48 + lVar8) * 4);
                        param_3 = param_3 + 1;
                        uVar6 = uVar6 + 1;
                    } while (uVar1 != uVar6);
                    if ((int)uVar6 < (int)uVar7) {
                    LAB_100b96dd8:
                        uVar6 = (unsigned long)(~(unsigned int)uVar6 + uVar7);
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
        uVar6 = (unsigned long)uVar7;
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

// 0x100b96e60
ulong _stb_vorbis_get_samples_float(long param_1, uint param_2, long param_3, uint param_4) {
    unsigned long uVar1;
    long lVar2;
    int iVar3;
    int iVar4;
    long lVar7;
    uint8_t local_70[8];
    unsigned long local_58;
    int local_34;

    unsigned int uVar5 = *(unsigned int*)(param_1 + 4);
    if ((int)param_2 < (int)*(unsigned int*)(param_1 + 4)) {
        uVar5 = param_2;
    }
    unsigned long local_68 = (unsigned long)uVar5;
    unsigned long uVar6 = 0;
    long local_50 = param_1;
    unsigned int local_48 = param_4;
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
            uVar1 = (unsigned long)param_2;
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
        uVar6 = (unsigned long)uVar5;
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

// 0x100b971a0
void VorbisWorker::OnResponse(jag::PacketT<jag::Array<unsigned char>>& arg1) {
    uint32_t uVar2;
    Logger* this_00;

    scoped_lock<std::mutex> local_20(*((this + 102)));
    if (((this + 58))->operator_cast_to_bool() == '\0') {
        this_00 = jag::logger::default_logger();
        uVar2 = arg1.GetTextureAtlas();
        this_00->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/VorbisWorker.h",
            55, "No callback in m_WorkerOnMessage for %u bytes", uVar2);
    } else {
        std::function<void(jag::PacketT<jag::Array<unsigned char>>&)>::operator()(
            (function<void(jag::PacketT<jag::Array<unsigned char>>&)>*)(this + 58), arg1);
    }
}

// 0x100b992a0
void VorbisWorkerPacket::PacketT(unsigned long arg1) {
    new (this) jag::PacketT(arg1);
    new (this) jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char>>, 2048>();
}

// 0x100b9ef00
void ldexp(float arg1, int arg2) {
    _ldexpf();
}

// 0x100b9ef10
void exp(float arg1) {
    _expf();
}

// 0x100b9ef20
void log(float arg1) {
    _logf();
}

namespace jag {
    // 0x100b92a90
    void PacketT<Array<unsigned char>>::pFloatPlatformEndian(float arg1) {
        pTPE<float>(this, arg1);
    }

    // 0x100ba0000
    hal::audio::osx::OSXAudioRenderer* placement_new<hal::audio::osx::OSXAudioRenderer>(void* arg1) {
        new (arg1) hal::audio::osx::OSXAudioRenderer();
        return arg1;
    }

    // 0x100ba0020
    ref_counter_shared<hal::audio::osx::OSXAudioRenderer>*
    placement_new<ref_counter_shared<hal::audio::osx::OSXAudioRenderer>, int, hal::audio::osx::OSXAudioRenderer*&>(
        void* arg1, int&& arg2, hal::audio::osx::OSXAudioRenderer*& arg3) {
        new (arg1) ref_counter_shared<hal::audio::osx::OSXAudioRenderer>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100ba0050
    ref_counter_shared<hal::audio::osx::OSXAudioRenderer>::ref_counter_shared(
        unsigned long arg1, hal::audio::osx::OSXAudioRenderer* osxAudioRenderer)
        : ref_counter_base() {}

    // 0x100ba0340
    hal::audio::AudioBuss* placement_new<hal::audio::AudioBuss, hal::audio::BussType, unsigned int const&, int, float,
                                         unsigned int const&, bool>(void* arg1, hal::audio::BussType&& bussType,
                                                                    const unsigned int& arg3, int&& arg4, float&& arg5,
                                                                    const unsigned int& arg6, bool&& arg7) {
        new (arg1) hal::audio::AudioBuss(bussType, arg3, arg4, arg5, arg6, arg7);
        return arg1;
    }

    // 0x100ba0370
    ref_counter_shared<hal::audio::AudioBuss>*
    placement_new<ref_counter_shared<hal::audio::AudioBuss>, int, hal::audio::AudioBuss*&>(
        void* arg1, int&& arg2, hal::audio::AudioBuss*& arg3) {
        new (arg1) ref_counter_shared<hal::audio::AudioBuss>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100ba03a0
    ref_counter_shared<hal::audio::AudioBuss>::ref_counter_shared(unsigned long arg1, hal::audio::AudioBuss* audioBuss)
        : ref_counter_base() {}

    // 0x100ba03e0
    void ref_counter_shared<hal::audio::AudioBuss>::DeleteData() {
        long lVar1;
        ref_counter_shared<hal::audio::AudioBuss> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<hal::audio::AudioBuss> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 112;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100ba0430
    MixerWorker* placement_new<MixerWorker>(void* arg1) {
        new (arg1) MixerWorker();
        return arg1;
    }

    // 0x100ba0450
    ref_counter_shared<MixerWorker>*
    placement_new<ref_counter_shared<MixerWorker>, int, MixerWorker*&>(void* arg1, int&& arg2, MixerWorker*& arg3) {
        new (arg1) ref_counter_shared<MixerWorker>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100ba0480
    ref_counter_shared<MixerWorker>::ref_counter_shared(unsigned long arg1, MixerWorker* mixerWorker)
        : ref_counter_base() {}

    // 0x100ba0670
    hal::audio::AudioBuss*
    placement_new<hal::audio::AudioBuss, hal::audio::BussType&, unsigned int&, unsigned int&, float&, unsigned int&>(
        void* arg1, hal::audio::BussType& bussType, unsigned int& arg3, unsigned int& arg4, float& arg5,
        unsigned int& arg6) {
        new (arg1) hal::audio::AudioBuss(bussType, arg3, arg4, arg5, arg6, false);
        return arg1;
    }

    // 0x100ba1460
    ref_counter_shared<hal::audio::AudioBuffer>*
    placement_new<ref_counter_shared<hal::audio::AudioBuffer>, int, hal::audio::AudioBuffer*&>(
        void* arg1, int&& arg2, hal::audio::AudioBuffer*& arg3) {
        new (arg1) ref_counter_shared<hal::audio::AudioBuffer>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100ba1490
    ref_counter_shared<hal::audio::AudioBuffer>::ref_counter_shared(unsigned long arg1,
                                                                    hal::audio::AudioBuffer* audioBuffer)
        : ref_counter_base() {}

    // 0x100ba14d0
    void ref_counter_shared<hal::audio::AudioBuffer>::DeleteData() {
        long lVar1;
        ref_counter_shared<hal::audio::AudioBuffer> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<hal::audio::AudioBuffer> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 216;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100ba2170
    hal::audio::AudioBufferHandler*
    placement_new<hal::audio::AudioBufferHandler, unsigned int&, shared_ptr<hal::audio::AudioBuffer>&>(
        void* arg1, unsigned int& arg2, shared_ptr<hal::audio::AudioBuffer>& audioBuffer) {
        new (arg1) hal::audio::AudioBufferHandler(arg2, audioBuffer);
        return arg1;
    }

    // 0x100ba2190
    ref_counter_shared<hal::audio::AudioBufferHandler>*
    placement_new<ref_counter_shared<hal::audio::AudioBufferHandler>, int, hal::audio::AudioBufferHandler*&>(
        void* arg1, int&& arg2, hal::audio::AudioBufferHandler*& arg3) {
        new (arg1) ref_counter_shared<hal::audio::AudioBufferHandler>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100ba21c0
    ref_counter_shared<hal::audio::AudioBufferHandler>::ref_counter_shared(
        unsigned long arg1, hal::audio::AudioBufferHandler* audioBufferHandler)
        : ref_counter_base() {}

    // 0x100ba24f0
    VorbisWorker* placement_new<VorbisWorker>(void* arg1) {
        new (arg1) VorbisWorker();
        return arg1;
    }

    // 0x100ba2510
    ref_counter_shared<VorbisWorker>*
    placement_new<ref_counter_shared<VorbisWorker>, int, VorbisWorker*&>(void* arg1, int&& arg2, VorbisWorker*& arg3) {
        new (arg1) ref_counter_shared<VorbisWorker>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100ba2540
    ref_counter_shared<VorbisWorker>::ref_counter_shared(unsigned long arg1, VorbisWorker* vorbisWorker)
        : ref_counter_base() {}

    // 0x100ba2580
    void ref_counter_shared<VorbisWorker>::DeleteData() {
        long lVar1;
        ref_counter_shared<VorbisWorker> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<VorbisWorker> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 880;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100ba2720
    MakeSharedPoolRefCounter<PacketT<Array<unsigned char>>, MakeSharedPool<PacketT<Array<unsigned char>>, 8>>*
    placement_new<
        MakeSharedPoolRefCounter<PacketT<Array<unsigned char>>, MakeSharedPool<PacketT<Array<unsigned char>>, 8>>,
        MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData*&, PacketT<Array<unsigned char>>*>(
        void* arg1, MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData*& arg2,
        PacketT<Array<unsigned char>>*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<PacketT<Array<unsigned char>>, MakeSharedPool<PacketT<Array<unsigned char>>, 8>>(
                arg2, arg3);
        return arg1;
    }

    // 0x100ba27b0
    MakeSharedPoolRefCounter<PacketT<Array<unsigned char>>, MakeSharedPool<PacketT<Array<unsigned char>>, 8>>::
        MakeSharedPoolRefCounter(void* arg1, PacketT<Array<unsigned char>>* arg2)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b88 + 16;
        *(void**)(this + 16) = arg1;
        *(PacketT<Array<unsigned char> _>**)(this + 24) = arg2;
    }

    // 0x100ba27f0
    void MakeSharedPoolRefCounter<PacketT<Array<unsigned char>>,
                                  MakeSharedPool<PacketT<Array<unsigned char>>, 8>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<PacketT<Array<unsigned char>>, 8>::deallocate(arg1);
    }

    // 0x100ba3450
    MakeSharedPoolRefCounter<PacketT<Array<unsigned char>>, MakeSharedPool<PacketT<Array<unsigned char>>, 2048>>*
    placement_new<
        MakeSharedPoolRefCounter<PacketT<Array<unsigned char>>, MakeSharedPool<PacketT<Array<unsigned char>>, 2048>>,
        MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData*&, PacketT<Array<unsigned char>>*>(
        void* arg1, MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData*& arg2,
        PacketT<Array<unsigned char>>*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<PacketT<Array<unsigned char>>,
                                            MakeSharedPool<PacketT<Array<unsigned char>>, 2048>>(arg2, arg3);
        return arg1;
    }

    // 0x100ba34e0
    MakeSharedPoolRefCounter<PacketT<Array<unsigned char>>, MakeSharedPool<PacketT<Array<unsigned char>>, 2048>>::
        MakeSharedPoolRefCounter(void* arg1, PacketT<Array<unsigned char>>* arg2)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b80 + 16;
        *(void**)(this + 16) = arg1;
        *(PacketT<Array<unsigned char> _>**)(this + 24) = arg2;
    }

    // 0x100ba3520
    void MakeSharedPoolRefCounter<PacketT<Array<unsigned char>>,
                                  MakeSharedPool<PacketT<Array<unsigned char>>, 2048>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::deallocate(arg1);
    }

} // namespace jag
