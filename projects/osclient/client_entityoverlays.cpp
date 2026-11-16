// projects/osclient/client_entityoverlays.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "client.h"

namespace jag::oldscape {
    // 0x1000f8100
    void Client::GlExactMove1(ClientEntity& clientEntity) {
        int local_18;
        int local_14;

        _local_18 = (((uint64_t)(*(int*)&clientEntity.field_408 - field_8488) << 32) | (uint32_t)1);
        auto piVar3 = std::max<int>(local_18, local_14);
        int iVar1 = *piVar3;
        int iVar4 = *(int*)&clientEntity.field_40 * 64;
        int iVar2 = *(int*)((long)&clientEntity.field_24 + 4);
        *(int*)&clientEntity.field_24 =
            ((*(int*)&clientEntity.field_392 * 128 + iVar4) - *(int*)&clientEntity.field_24) / iVar1 +
            *(int*)&clientEntity.field_24;
        *(int*)((long)&clientEntity.field_24 + 4) =
            ((*(int*)&clientEntity.field_400 * 128 + iVar4) - iVar2) / iVar1 + iVar2;
        *(uint32_t*)&clientEntity.field_536 = 0;
        *(uint32_t*)((long)&clientEntity.field_424 + 4) = *(uint32_t*)&clientEntity.field_416;
    }

    // 0x1000f8190
    void Client::GlExactMove2(ClientEntity& clientEntity) {
        int iVar1;
        bool cVar3;
        long lVar4;
        int* piVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        shared_ptr local_30;

        bool bVar9 = true;
        if ((*(int*)((long)&clientEntity.field_408 + 4) != field_8488) && (clientEntity.field_372 != -1)) {
            bVar9 = *(int*)&clientEntity.field_384 != 0;
        }
        if (!bVar9) {
            local_30 = configdecoder::SeqType::List(clientEntity.field_372);
            cVar3 = shared_ptr::operator_cast_to_bool(&local_30);
            bVar9 = true;
            if (cVar3) {
                cVar3 = ((SeqType*)local_30.operator->())->IsKeyFramed();
                if (!cVar3) {
                    iVar1 = *(int*)((long)&clientEntity.field_376 + 4);
                    lVar4 = local_30.operator->();
                    piVar5 = (int*)(*((lVar4 + 120)))[(long)*(int*)&clientEntity.field_376];
                    bVar9 = *piVar5 <= iVar1;
                }
            }
        }
        if (bVar9) {
            iVar7 = *(int*)((long)&clientEntity.field_408 + 4) - *(int*)&clientEntity.field_408;
            iVar8 = field_8488 - *(int*)&clientEntity.field_408;
            iVar6 = *(int*)&clientEntity.field_40 * 64;
            iVar1 = *(int*)((long)&clientEntity.field_400 + 4);
            *(int*)&clientEntity.field_24 = ((*(int*)((long)&clientEntity.field_392 + 4) * 128 + iVar6) * iVar8 +
                                             (*(int*)&clientEntity.field_392 * 128 + iVar6) * (iVar7 - iVar8)) /
                                            iVar7;
            *(int*)((long)&clientEntity.field_24 + 4) =
                ((iVar1 * 128 + iVar6) * iVar8 + (iVar7 - iVar8) * (*(int*)&clientEntity.field_400 * 128 + iVar6)) /
                iVar7;
        }
        *(uint32_t*)&clientEntity.field_536 = 0;
        uint32_t uVar2 = *(uint32_t*)&clientEntity.field_416;
        *(uint32_t*)((long)&clientEntity.field_424 + 4) = uVar2;
        *(uint32_t*)&clientEntity.field_32 = uVar2;
    }

    // 0x1000f82f0
    void Client::GlRouteMove(ClientEntity& clientEntity) {
        unsigned int uVar4;
        long lVar5;
        ReturnValue local_50;

        *(uint32_t*)&clientEntity.field_356 = clientEntity.field_48;
        if (clientEntity.field_440 == 0) {
            *(uint32_t*)&clientEntity.field_536 = 0;
            return;
        }
        if ((clientEntity.field_372 != -1) && (*(int*)&clientEntity.field_384 == 0)) {
            local_50 = configdecoder::SeqType::List(clientEntity.field_372);
            if (((0 < *(int*)((long)&clientEntity.field_536 + 4)) &&
                 (lVar5 = local_50.operator->(), *(int*)(lVar5 + 248) == 0)) ||
                ((*(int*)((long)&clientEntity.field_536 + 4) < 1 &&
                  (lVar5 = local_50.operator->(), *(int*)(lVar5 + 252) == 0)))) {
                *(int*)&clientEntity.field_536 = *(int*)&clientEntity.field_536 + 1;
                return;
            }
        }
        int iVar9 = *(int*)&clientEntity.field_24;
        int local_34 = *(int*)((long)&clientEntity.field_24 + 4);
        unsigned long arg1 = (long)(int)clientEntity.field_440 - 1;
        int* piVar6 = &clientEntity.field_444[arg1];
        int iVar11 = *(int*)&clientEntity.field_40 * 64;
        int iVar10 = *piVar6 * 128 + iVar11;
        piVar6 = &clientEntity.field_484[arg1];
        iVar11 = *piVar6 * 128 + iVar11;
        if (iVar10 - iVar9 == 0 || iVar10 < iVar9) {
            if (iVar10 < iVar9) {
                if (local_34 < iVar11) {
                    *(uint32_t*)((long)&clientEntity.field_424 + 4) = 768;
                } else if (iVar11 < local_34) {
                    *(uint32_t*)((long)&clientEntity.field_424 + 4) = 256;
                } else {
                    *(uint32_t*)((long)&clientEntity.field_424 + 4) = 512;
                }
            } else if (local_34 < iVar11) {
                *(uint32_t*)((long)&clientEntity.field_424 + 4) = 1024;
            } else if (iVar11 < local_34) {
                *(uint32_t*)((long)&clientEntity.field_424 + 4) = 0;
            }
        } else if (local_34 < iVar11) {
            *(uint32_t*)((long)&clientEntity.field_424 + 4) = 1280;
        } else if (iVar11 < local_34) {
            *(uint32_t*)((long)&clientEntity.field_424 + 4) = 1792;
        } else {
            *(uint32_t*)((long)&clientEntity.field_424 + 4) = 1536;
        }
        int local_3c = iVar10;
        int local_38 = iVar9;
        char* pcVar7 = &clientEntity.field_524[arg1];
        int iVar2 = local_3c;
        if ((512 < (iVar10 - iVar9) + 256U) || (512 < (iVar11 - local_34) + 256U)) {
            *(int*)&clientEntity.field_24 = local_3c;
            *(int*)((long)&clientEntity.field_24 + 4) = iVar11;
            clientEntity.field_440 = (int)arg1;
            goto LAB_1000f84d1;
        }
        unsigned int uVar8 = *(int*)((long)&clientEntity.field_424 + 4) - *(int*)&clientEntity.field_32 & 2047;
        iVar9 = (unsigned int)(uVar8 < 1025) * 2048;
        if ((iVar9 + uVar8) - 1792 < 513) {
            iVar9 = clientEntity.field_60;
        } else {
            iVar9 = uVar8 + iVar9;
            if (iVar9 - 2304U < 512) {
                iVar9 = clientEntity.field_72;
            } else if (iVar9 - 1280U < 513) {
                iVar9 = clientEntity.field_68;
            } else {
                iVar9 = clientEntity.field_64;
            }
        }
        if (iVar9 == -1) {
            iVar9 = clientEntity.field_60;
        }
        char cVar1 = *pcVar7;
        *(int*)&clientEntity.field_356 = iVar9;
        if (((clientEntity._vptr->IsLit__4)(clientEntity) == '\0') ||
            (lVar5 = clientEntity[1].field_64.operator->(), *(char*)(lVar5 + 521) != '\0')) {
            iVar9 = clientEntity.field_440;
            uVar8 = 6;
            if (iVar9 < 3) {
                uVar8 = (unsigned int)(*(int*)((long)&clientEntity.field_432 + 4) == 0 ||
                                       (clientEntity.field_328 != -1 ||
                                        *(int*)&clientEntity.field_32 == *(int*)((long)&clientEntity.field_424 + 4))) *
                            2 +
                        2;
            }
            uVar4 = 8;
            if (iVar9 < 4) {
                uVar4 = uVar8;
            }
            iVar10 = *(int*)&clientEntity.field_536;
            if (0 < iVar10)
                goto joined_r0x0001000f8604;
        } else {
            iVar9 = clientEntity.field_440;
            iVar10 = *(int*)&clientEntity.field_536;
            uVar4 = 8;
            if (iVar9 < 3) {
                uVar4 = (unsigned int)(1 < iVar9) * 2 + 4;
            }
            if (0 < iVar10) {
            joined_r0x0001000f8604:
                if (1 < iVar9) {
                    *(int*)&clientEntity.field_536 = iVar10 - 1;
                    uVar4 = 8;
                }
            }
        }
        if (!cVar1) {
            uVar4 = uVar4 >> 1;
        } else if (cVar1 == '\x02') {
            uVar4 = uVar4 * 2;
        }
        if (uVar4 < 8) {
            if (uVar4 < 3) {
                iVar9 = *(int*)&clientEntity.field_356;
                if ((((iVar9 == clientEntity.field_60) && (iVar10 = clientEntity.field_92, iVar10 != -1)) ||
                     ((iVar9 == clientEntity.field_64 && (iVar10 = clientEntity.field_96, iVar10 != -1)))) ||
                    ((iVar9 == clientEntity.field_68 && (iVar10 = clientEntity.field_100, iVar10 != -1))))
                    goto LAB_1000f86f8;
                if (iVar9 == clientEntity.field_72) {
                    iVar10 = clientEntity.field_104;
                    goto LAB_1000f86f3;
                }
            }
        } else {
            iVar9 = *(int*)&clientEntity.field_356;
            if ((((iVar9 == clientEntity.field_60) && (iVar10 = clientEntity.field_76, iVar10 != -1)) ||
                 ((iVar9 == clientEntity.field_64 && (iVar10 = clientEntity.field_80, iVar10 != -1)))) ||
                ((iVar9 == clientEntity.field_68 && (iVar10 = clientEntity.field_84, iVar10 != -1)))) {
            LAB_1000f86f8:
                *(int*)&clientEntity.field_356 = iVar10;
            } else if (iVar9 == clientEntity.field_72) {
                iVar10 = clientEntity.field_88;
            LAB_1000f86f3:
                if (iVar10 != -1)
                    goto LAB_1000f86f8;
            }
        }
        if ((iVar2 != local_38) || (iVar11 != local_34)) {
            if (local_38 < iVar2) {
                iVar9 = *(int*)&clientEntity.field_24 + uVar4;
                if (iVar2 < iVar9) {
                    iVar9 = iVar2;
                }
            LAB_1000f872a:
                *(int*)&clientEntity.field_24 = iVar9;
            } else if (iVar2 < local_38) {
                iVar9 = *(int*)&clientEntity.field_24 - uVar4;
                if (iVar9 < iVar2) {
                    iVar9 = iVar2;
                }
                goto LAB_1000f872a;
            }
            if (local_34 < iVar11) {
                iVar9 = uVar4 + *(int*)((long)&clientEntity.field_24 + 4);
                if (iVar11 < iVar9) {
                    iVar9 = iVar11;
                }
            } else {
                if (local_34 <= iVar11)
                    goto LAB_1000f8750;
                iVar9 = *(int*)((long)&clientEntity.field_24 + 4) - uVar4;
                if (iVar9 < iVar11) {
                    iVar9 = iVar11;
                }
            }
            *(int*)((long)&clientEntity.field_24 + 4) = iVar9;
        }
    LAB_1000f8750:
        if (*(int*)&clientEntity.field_24 != iVar2) {
            return;
        }
        if (*(int*)((long)&clientEntity.field_24 + 4) != iVar11) {
            return;
        }
        clientEntity.field_440 = clientEntity.field_440 - 1;
    LAB_1000f84d1:
        iVar9 = *(int*)((long)&clientEntity.field_536 + 4);
        if (0 < iVar9) {
            *(int*)((long)&clientEntity.field_536 + 4) = iVar9 - 1;
        }
    }

    // 0x1000f87d0
    void Client::GlEntityFace(ClientEntity& clientEntity) {
        int iVar1;
        bool bVar2;
        uint32_t uVar4;
        int iVar5;
        shared_ptr<ClientPlayer>* clientPlayer;
        long lVar6;
        int arg2;
        int iVar7;
        int iVar8;
        unsigned int uVar9;
        uint8_t auVar10[12];
        shared_ptr<ClientNpc> local_50;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;

        if (clientEntity.field_328 != -1) {
            local_40 = shared_ptr();
            iVar8 = clientEntity.field_328;
            if ((long)iVar8 < 65536) {
                field_55272[(long)iVar8];
                static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_50);
                local_40 = local_50;
            } else {
                clientPlayer = &field_19216[(unsigned long)(iVar8 - 65536)];
                local_40 = *clientPlayer;
            }
            bVar2 = local_40 != nullptr;
            if (bVar2) {
                iVar8 = *(int*)&clientEntity.field_24;
                lVar6 = local_40.operator->();
                uVar9 = iVar8 - *(int*)(lVar6 + 24);
                iVar8 = *(int*)((long)&clientEntity.field_24 + 4);
                auVar10 = local_40.operator->();
                iVar8 = iVar8 - *(int*)(auVar10._0_8_ + 28);
                if (uVar9 != 0 || iVar8 != 0) {
                    uVar4 = ((Conversion*)(unsigned long)uVar9)->Atan2InOldJagexAngles(iVar8, auVar10._8_4_);
                    *(uint32_t*)((long)&clientEntity.field_424 + 4) = uVar4;
                }
            } else if (clientEntity.field_332 != '\0') {
                clientEntity.field_328 = 4294967295;
                clientEntity.field_332 = 0;
            }
        }
        if ((clientEntity.field_440 == 0) || (0 < *(int*)&clientEntity.field_536)) {
            if (clientEntity.field_340.IsSet() == '\0') {
                iVar8 = clientEntity.field_336;
            } else {
                BuildCoordFromWorldCoord(&local_40, this, (CoordGrid*)&clientEntity.field_340);
                iVar8 = local_40.GetZ();
                iVar5 = local_40.GetPos();
                uVar9 = (*(int*)&clientEntity.field_24 + iVar8 * -128) - 64;
                iVar5 = *(int*)((long)&clientEntity.field_24 + 4) + iVar5 * -128 - 64;
                iVar8 = -1;
                if (uVar9 != 0 || iVar5 != 0) {
                    iVar8 = ((Conversion*)(unsigned long)uVar9)->Atan2InOldJagexAngles(iVar5, arg2);
                }
            }
            if ((iVar8 != -1) && (*(int*)((long)&clientEntity.field_424 + 4) = iVar8, clientEntity.field_352 != '\0')) {
                *(int*)&clientEntity.field_32 = iVar8;
            }
            clientEntity.ClearPendingFacing();
        }
        iVar8 = *(int*)((long)&clientEntity.field_424 + 4);
        uVar9 = iVar8 - *(int*)&clientEntity.field_32 & 2047;
        if (uVar9 == 0) {
            if (clientEntity.field_332 != '\0') {
                clientEntity.field_328 = 4294967295;
                clientEntity.field_332 = 0;
            }
            *(uint32_t*)&clientEntity.field_432 = 0;
        } else {
            iVar5 = *(int*)&clientEntity.field_432;
            iVar1 = *(int*)((long)&clientEntity.field_432 + 4);
            *(int*)&clientEntity.field_432 = iVar5 + 1;
            iVar7 = -iVar1;
            if (uVar9 < 1025) {
                iVar7 = iVar1;
            }
            bVar2 = 2048 - iVar1 < (int)uVar9;
            iVar7 = iVar7 + *(int*)&clientEntity.field_32;
            if (bVar2 || (int)uVar9 < iVar1) {
                iVar7 = iVar8;
            }
            *(int*)&clientEntity.field_32 = iVar7;
            if (((0 < iVar1) && (*(int*)&clientEntity.field_356 == clientEntity.field_48)) &&
                (24 < iVar5 || !bVar2 && (int)uVar9 >= iVar1)) {
                if (uVar9 < 1025) {
                    iVar8 = clientEntity.field_56;
                } else {
                    iVar8 = clientEntity.field_52;
                }
                if (iVar8 == -1) {
                    iVar8 = clientEntity.field_60;
                }
                *(int*)&clientEntity.field_356 = iVar8;
            }
            *(unsigned int*)&clientEntity.field_32 = *(unsigned int*)&clientEntity.field_32 & 2047;
        }
    }

    // 0x1000f8a80
    void Client::GlEntityAnim(ClientEntity& clientEntity) {
        bool cVar2;
        int iVar3;
        uint32_t uVar4;
        SeqType* pSVar5;
        long lVar6;
        long lVar8;
        int* piVar9;
        int* piVar10;
        int iVar11;

        clientEntity.field_36 = 0;
        if (*(int*)&clientEntity.field_356 != -1) {
            local_40 = configdecoder::SeqType::List(*(int*)&clientEntity.field_356);
            if (local_40 != nullptr) {
                pSVar5 = (SeqType*)local_40.operator->();
                cVar2 = pSVar5->IsKeyFramed();
                if (!cVar2) {
                    lVar6 = local_40.operator->();
                    cVar2 = ((lVar6 + 72))->empty();
                    if (cVar2)
                        goto LAB_1000f8afb;
                    *(int*)&clientEntity.field_364 = *(int*)&clientEntity.field_364 + 1;
                    iVar3 = *(int*)((long)&clientEntity.field_356 + 4);
                    lVar6 = local_40.operator->();
                    piVar10 = (int*)((long)&clientEntity.field_356 + 4);
                    iVar11 = ((lVar6 + 72))->end();
                    if (iVar3 < iVar11) {
                        iVar3 = *(int*)&clientEntity.field_364;
                        lVar6 = local_40.operator->();
                        piVar9 = (int*)(*((lVar6 + 120)))[(long)*piVar10];
                        if (*piVar9 < iVar3) {
                            *(uint32_t*)&clientEntity.field_364 = 1;
                            iVar3 = *(int*)((long)&clientEntity.field_356 + 4) + 1;
                            *(int*)((long)&clientEntity.field_356 + 4) = iVar3;
                            TriggerSeqSound(local_40, iVar3, *(int*)&clientEntity.field_24,
                                            *(int*)((long)&clientEntity.field_24 + 4));
                        }
                    }
                    iVar3 = *piVar10;
                    lVar6 = local_40.operator->();
                    iVar11 = ((lVar6 + 72))->end();
                    if (iVar11 <= iVar3) {
                        lVar6 = local_40.operator->();
                        if (*(int*)(lVar6 + 168) < 1) {
                            *(uint32_t*)&clientEntity.field_364 = 0;
                        LAB_1000f92c2:
                            *piVar10 = 0;
                        } else {
                            lVar6 = local_40.operator->();
                            *piVar10 = *piVar10 - *(int*)(lVar6 + 168);
                            lVar6 = local_40.operator->();
                            if (*(char*)(lVar6 + 244) != '\0') {
                                piVar9 = (int*)((long)&clientEntity.field_364 + 4);
                                *piVar9 = *piVar9 + 1;
                            }
                            iVar3 = *piVar10;
                            if (iVar3 < 0) {
                            LAB_1000f8fea:
                                *(uint64_t*)((long)&clientEntity.field_356 + 4) = 0;
                                piVar10 = (int*)((long)&clientEntity.field_364 + 4);
                                goto LAB_1000f92c2;
                            }
                            lVar6 = local_40.operator->();
                            iVar11 = ((lVar6 + 72))->end();
                            if ((iVar11 <= iVar3) ||
                                ((lVar6 = local_40.operator->(),
                                  *(char*)(lVar6 + 244) != '\0' &&
                                      (iVar3 = *(int*)((long)&clientEntity.field_364 + 4),
                                       lVar6 = local_40.operator->(), *(int*)(lVar6 + 240) <= iVar3))))
                                goto LAB_1000f8fea;
                        }
                        TriggerSeqSound(local_40, *(int*)((long)&clientEntity.field_356 + 4),
                                        *(int*)&clientEntity.field_24, *(int*)((long)&clientEntity.field_24 + 4));
                    }
                } else {
                LAB_1000f8afb:
                    pSVar5 = (SeqType*)local_40.operator->();
                    cVar2 = pSVar5->IsKeyFramed();
                    if (!cVar2)
                        goto LAB_1000f8b58;
                    piVar10 = (int*)((long)&clientEntity.field_356 + 4);
                    *piVar10 = *piVar10 + 1;
                    pSVar5 = (SeqType*)local_40.operator->();
                    iVar3 = pSVar5->GetDuration();
                    piVar10 = (int*)((long)&clientEntity.field_356 + 4);
                    if (*piVar10 < iVar3) {
                        TriggerSeqSoundKeyFramed(local_40, *piVar10, *(int*)&clientEntity.field_24,
                                                 *(int*)((long)&clientEntity.field_24 + 4));
                        goto LAB_1000f8b64;
                    }
                    lVar6 = local_40.operator->();
                    if (*(int*)(lVar6 + 168) < 1) {
                        *(uint32_t*)&clientEntity.field_364 = 0;
                    LAB_1000f928c:
                        *piVar10 = 0;
                    } else {
                        lVar6 = local_40.operator->();
                        *piVar10 = *piVar10 - *(int*)(lVar6 + 168);
                        lVar6 = local_40.operator->();
                        if (*(char*)(lVar6 + 244) != '\0') {
                            piVar9 = (int*)((long)&clientEntity.field_364 + 4);
                            *piVar9 = *piVar9 + 1;
                        }
                        if (((*piVar10 < 0) || (iVar3 <= *piVar10)) ||
                            ((lVar6 = local_40.operator->(),
                              *(char*)(lVar6 + 244) != '\0' &&
                                  (iVar3 = *(int*)((long)&clientEntity.field_364 + 4), lVar6 = local_40.operator->(),
                                   *(int*)(lVar6 + 240) <= iVar3)))) {
                            *(uint64_t*)((long)&clientEntity.field_356 + 4) = 0;
                            piVar10 = (int*)((long)&clientEntity.field_364 + 4);
                            goto LAB_1000f928c;
                        }
                    }
                    TriggerSeqSoundKeyFramed(local_40, *(int*)((long)&clientEntity.field_356 + 4),
                                             *(int*)&clientEntity.field_24, *(int*)((long)&clientEntity.field_24 + 4));
                }
            } else {
            LAB_1000f8b58:
                *(uint32_t*)&clientEntity.field_356 = 4294967295;
            }
        LAB_1000f8b64:
        }
        auto this_00 = clientEntity.GetSpotAnims();
        lVar6 = this_00->HeapBeginPtr();
        long lVar7 = this_00->end();
        if (lVar6 != lVar7) {
            do {
                if ((*(int*)(lVar6 + 4) != -1) && (*(int*)(lVar6 + 16) <= field_8488)) {
                    local_40 = configdecoder::SpotType::List(*(int*)(lVar6 + 4));
                    lVar8 = local_40.operator->();
                    iVar3 = *(int*)(lVar8 + 8);
                    if (iVar3 == -1) {
                        eastl::vector_map<int, SpotAnimClient>::erase(*this_00);
                    } else {
                        uVar4 = eastl::max<int>(*(ShaderVariablePrecision*)(lVar6 + 20), 0);
                        *(uint32_t*)(lVar6 + 20) = uVar4;
                        local_40 = configdecoder::SeqType::List(iVar3);
                        lVar8 = local_40.operator->();
                        cVar2 = ((lVar8 + 72))->empty();
                        if (!cVar2) {
                            pSVar5 = (SeqType*)local_40.operator->();
                            cVar2 = pSVar5->IsKeyFramed();
                            if (cVar2)
                                goto LAB_1000f8c4f;
                            *(int*)(lVar6 + 8) = *(int*)(lVar6 + 8) + 1;
                            iVar3 = *(int*)(lVar6 + 20);
                            lVar8 = local_40.operator->();
                            iVar11 = ((lVar8 + 72))->end();
                            if (iVar3 < iVar11) {
                                iVar3 = *(int*)(lVar6 + 8);
                                lVar8 = local_40.operator->();
                                piVar10 = (int*)(*((lVar8 + 120)))[(long)*(int*)(lVar6 + 20)];
                                if (*piVar10 < iVar3) {
                                    *(uint32_t*)(lVar6 + 8) = 1;
                                    iVar3 = *(int*)(lVar6 + 20) + 1;
                                    *(int*)(lVar6 + 20) = iVar3;
                                    TriggerSeqSound(local_40, iVar3, *(int*)&clientEntity.field_24,
                                                    *(int*)((long)&clientEntity.field_24 + 4));
                                }
                            }
                            iVar3 = *(int*)(lVar6 + 20);
                            lVar8 = local_40.operator->();
                            iVar11 = ((lVar8 + 72))->end();
                            if (iVar11 <= iVar3) {
                                eastl::vector_map<int, SpotAnimClient>::erase(*this_00);
                            }
                        } else {
                        LAB_1000f8c4f:
                            pSVar5 = (SeqType*)local_40.operator->();
                            cVar2 = pSVar5->IsKeyFramed();
                            if (!cVar2) {
                                eastl::vector_map<int, SpotAnimClient>::erase(*this_00);
                            } else {
                                *(int*)(lVar6 + 20) = *(int*)(lVar6 + 20) + 1;
                                pSVar5 = (SeqType*)local_40.operator->();
                                iVar3 = pSVar5->GetDuration();
                                if (*(int*)(lVar6 + 20) < iVar3) {
                                    TriggerSeqSound(local_40, *(int*)(lVar6 + 20), *(int*)&clientEntity.field_24,
                                                    *(int*)((long)&clientEntity.field_24 + 4));
                                } else {
                                    eastl::vector_map<int, SpotAnimClient>::erase(*this_00);
                                }
                            }
                        }
                    }
                }
                lVar6 = lVar6 + 24;
            } while (lVar6 != lVar7);
        }
        if ((clientEntity.field_372 != -1) && (*(int*)&clientEntity.field_384 < 2)) {
            local_40 = configdecoder::SeqType::List(clientEntity.field_372);
            lVar6 = local_40.operator->();
            if ((*(int*)(lVar6 + 248) == 1) &&
                (((0 < *(int*)((long)&clientEntity.field_536 + 4) && (*(int*)&clientEntity.field_408 <= field_8488)) &&
                  (*(int*)((long)&clientEntity.field_408 + 4) < field_8488)))) {
                *(uint32_t*)&clientEntity.field_384 = 1;
                return;
            }
        }
        if ((clientEntity.field_372 == -1) || (*(int*)&clientEntity.field_384 != 0))
            goto LAB_1000f923c;
        auto local_40 = configdecoder::SeqType::List(clientEntity.field_372);
        if (local_40 != nullptr) {
            pSVar5 = (SeqType*)local_40.operator->();
            cVar2 = pSVar5->IsKeyFramed();
            if (!cVar2) {
                lVar6 = local_40.operator->();
                cVar2 = ((lVar6 + 72))->empty();
                if (cVar2)
                    goto LAB_1000f8e49;
                piVar10 = (int*)((long)&clientEntity.field_376 + 4);
                *piVar10 = *piVar10 + 1;
                iVar3 = *(int*)&clientEntity.field_376;
                lVar6 = local_40.operator->();
                iVar11 = ((lVar6 + 72))->end();
                if (iVar3 < iVar11) {
                    iVar3 = *(int*)((long)&clientEntity.field_376 + 4);
                    lVar6 = local_40.operator->();
                    piVar10 = (int*)(*((lVar6 + 120)))[(long)*(int*)&clientEntity.field_376];
                    if (*piVar10 < iVar3) {
                        *(uint32_t*)((long)&clientEntity.field_376 + 4) = 1;
                        iVar3 = *(int*)&clientEntity.field_376 + 1;
                        *(int*)&clientEntity.field_376 = iVar3;
                        TriggerSeqSound(local_40, iVar3, *(int*)&clientEntity.field_24,
                                        *(int*)((long)&clientEntity.field_24 + 4));
                    }
                }
                iVar3 = *(int*)&clientEntity.field_376;
                lVar6 = local_40.operator->();
                iVar11 = ((lVar6 + 72))->end();
                if (iVar11 <= iVar3) {
                    lVar6 = local_40.operator->();
                    *(int*)&clientEntity.field_376 = *(int*)&clientEntity.field_376 - *(int*)(lVar6 + 168);
                    iVar3 = *(int*)((long)&clientEntity.field_384 + 4) + 1;
                    *(int*)((long)&clientEntity.field_384 + 4) = iVar3;
                    lVar6 = local_40.operator->();
                    if ((iVar3 < *(int*)(lVar6 + 240)) && (iVar3 = *(int*)&clientEntity.field_376, -1 < iVar3)) {
                        lVar6 = local_40.operator->();
                        iVar11 = ((lVar6 + 72))->end();
                        if (iVar3 < iVar11) {
                            TriggerSeqSound(local_40, *(int*)&clientEntity.field_376, *(int*)&clientEntity.field_24,
                                            *(int*)((long)&clientEntity.field_24 + 4));
                            goto LAB_1000f926b;
                        }
                    }
                    clientEntity.field_372 = 4294967295;
                }
            LAB_1000f926b:
                lVar6 = local_40.operator->();
                clientEntity.field_36 = *(uint8_t*)(lVar6 + 224);
            } else {
            LAB_1000f8e49:
                pSVar5 = (SeqType*)local_40.operator->();
                cVar2 = pSVar5->IsKeyFramed();
                if (!cVar2)
                    goto LAB_1000f9228;
                *(int*)&clientEntity.field_376 = *(int*)&clientEntity.field_376 + 1;
                pSVar5 = (SeqType*)local_40.operator->();
                iVar3 = pSVar5->GetDuration();
                if (*(int*)&clientEntity.field_376 < iVar3) {
                    TriggerSeqSoundKeyFramed(local_40, *(int*)&clientEntity.field_376, *(int*)&clientEntity.field_24,
                                             *(int*)((long)&clientEntity.field_24 + 4));
                } else {
                    lVar6 = local_40.operator->();
                    *(int*)&clientEntity.field_376 = *(int*)&clientEntity.field_376 - *(int*)(lVar6 + 168);
                    iVar11 = *(int*)((long)&clientEntity.field_384 + 4) + 1;
                    *(int*)((long)&clientEntity.field_384 + 4) = iVar11;
                    lVar6 = local_40.operator->();
                    if (((*(int*)(lVar6 + 240) <= iVar11) || (iVar11 = *(int*)&clientEntity.field_376, iVar11 < 0)) ||
                        (iVar3 <= iVar11))
                        goto LAB_1000f9228;
                    TriggerSeqSoundKeyFramed(local_40, iVar11, *(int*)&clientEntity.field_24,
                                             *(int*)((long)&clientEntity.field_24 + 4));
                }
            }
        } else {
        LAB_1000f9228:
            clientEntity.field_372 = 4294967295;
        }
    LAB_1000f923c:
        if (0 < *(int*)&clientEntity.field_384) {
            *(int*)&clientEntity.field_384 = *(int*)&clientEntity.field_384 - 1;
        }
    }

    // 0x1000f94e0
    void Client::TriggerPlayerAnim(ClientPlayer& clientPlayer, int arg2, int arg3) {
        int iVar1;
        bool bVar2;
        long lVar3;
        ReturnValue local_50;
        ReturnValue local_40;

        if ((arg2 == -1) || (clientPlayer.field_372 != arg2)) {
            bVar2 = true;
            if (clientPlayer.field_372 != -1 && arg2 != -1) {
                local_40 = configdecoder::SeqType::List(arg2);
                lVar3 = local_40.operator->();
                iVar1 = *(int*)(lVar3 + 228);
                local_50 = configdecoder::SeqType::List(clientPlayer.field_372);
                lVar3 = local_50.operator->();
                bVar2 = *(int*)(lVar3 + 228) <= iVar1;
            }
            if (bVar2) {
                clientPlayer.field_372 = arg2;
                *(uint64_t*)&clientPlayer.field_376 = 0;
                clientPlayer.field_384 = arg3;
                *(uint32_t*)&clientPlayer.field_388 = 0;
                *(unsigned int*)((long)&clientPlayer.field_536 + 4) = clientPlayer.field_440;
            }
        } else {
            local_40 = configdecoder::SeqType::List(arg2);
            lVar3 = local_40.operator->();
            iVar1 = *(int*)(lVar3 + 256);
            if (iVar1 != 2) {
                if (iVar1 != 1) {
                    return;
                }
                *(uint64_t*)&clientPlayer.field_376 = 0;
                clientPlayer.field_384 = arg3;
            }
            *(uint32_t*)&clientPlayer.field_388 = 0;
        }
    }

    // 0x1000f9640
    void Client::GameDrawMain(int arg1, int arg2, int arg3, int arg4, int arg5) {
        uint64_t extraout_var;
        int local_60[7];

        SystemTimer::GetTimeNS<std::chrono::steady_clock>();
        field_7294680 = field_7294680 + 1;
        auto plVar7 = OSRenderCore_AudioThread::Instance();
        long lVar8 = ((Layout*)((long)plVar7 + *(long*)(*plVar7 - 24)))->HeapBeginPtr();
        *(uint8_t*)(lVar8 + 19677506) = 1;
        GdmCheckRemoveMapFlag();
        GdmAddSelfPlayerToWorld();
        GdmAddPriorityPlayerToWorld();
        GdmAddNPCs(true);
        GdmAddOtherPlayersToWorld();
        GdmAddNPCs(false);
        GdmAddProjectiles();
        GdmAddMapAnim();
        GdmCalcWindowSize(arg1, arg2, arg3, arg4, true);
        unsigned int uVar1 = field_52736;
        unsigned int uVar2 = field_52740;
        unsigned int uVar3 = field_52744;
        unsigned int uVar4 = field_52748;
        auto this_00 = GetMemoryCache();
        auto this_01 = this_00->GetScreen();
        float local_34 = (float)this_01->GetSoundSpatialSizeMax();
        int local_3c = jag::math::RoundFloatToInt((float)(int)uVar1 * local_34);
        int local_38 = jag::math::RoundFloatToInt((float)(int)uVar2 * local_34);
        int local_40 = jag::math::RoundFloatToInt((float)(int)(uVar1 + uVar3) * local_34);
        int local_44 = jag::math::RoundFloatToInt((float)(int)(uVar4 + uVar2) * local_34);
        local_60[0] = 0;
        auto piVar9 = std::max<int>(local_3c, *local_60);
        local_3c = *piVar9;
        local_60[0] = 0;
        piVar9 = std::max<int>(local_38, *local_60);
        local_38 = *piVar9;
        local_60[0] = this_01->GetStatus();
        piVar9 = std::min<int>(local_40, *local_60);
        local_40 = *piVar9;
        local_60[0] = this_01->GetAliveCount();
        piVar9 = std::min<int>(local_44, *local_60);
        local_44 = *piVar9;
        int arg1_00 = local_40 - local_3c;
        int arg2_00 = local_44 - local_38;
        field_52752 = (field_52724 * arg2_00) / 334;
        plVar7 = (long*)GraphicsApp::Instance();
        if ((((Window*)(**(void (**)(...))(*plVar7 + 96))(plVar7))->IsLiveResizing() == '\0') &&
            ((arg1_00 != field_52756 || (arg2_00 != field_52760)))) {
            RecalcCameraFrustumTileVisibility(arg1_00, arg2_00);
            field_52756 = arg1_00;
            field_52760 = arg2_00;
        }
        auto puVar10 = field_144->GetServerPosition();
        dash3d::WorldRenderer_debugFont = field_1104208.end();
        uint8_t uVar6 = (**(void (**)(...))*puVar10)(puVar10);
        (**(void (**)(...))(*(long*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar6) + 56))(
            (long*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar6));
    }

    // 0x1000fa040
    void Client::GdmCheckRemoveMapFlag() {
        long lVar2 = field_52016.operator->();
        int iVar1 = *(int*)(lVar2 + 24);
        auto piVar3 = field_8152.operator->();
        if (iVar1 >> 7 == *piVar3) {
            lVar2 = field_52016.operator->();
            iVar1 = *(int*)(lVar2 + 28);
            lVar2 = field_8152.operator->();
            if (iVar1 >> 7 == *(int*)(lVar2 + 4)) {
                SetPlayerDestination(0, 0);
            }
        }
    }

    // 0x1000fa0b0
    void Client::GdmAddSelfPlayerToWorld() {
        if (field_52033 != 0) {
            GdmAddPlayerToWorld(field_52016, false);
        }
    }

    // 0x1000fa0d0
    void Client::GdmAddPriorityPlayerToWorld() {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        shared_ptr<ClientPlayer>* clientPlayer;

        if (-1 < (long)(int)m_priorityPlayerId) {
            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)field_19216[(long)(int)m_priorityPlayerId];
            if (*midiPlayerMainThread != nullptr) {
                clientPlayer = &field_19216[(long)(int)m_priorityPlayerId];
                GdmAddPlayerToWorld(*clientPlayer, false);
            }
        }
    }

    // 0x1000fa130
    void Client::GdmAddNPCs(bool arg1) {
        uint8_t* this_00;
        unsigned int uVar1;
        int iVar2;
        int arg3;
        bool cVar4;
        int* piVar5;
        Client* midiPlayerMainThread;
        ClientNpc* pCVar6;
        long lVar7;
        ClientEntity* pCVar8;
        HighlightChannelProperties* highlightChannelProperties;
        unsigned long uVar9;
        uint64_t in_register_00000031;
        Client* this_02;
        unsigned long arg1_00;
        unkbyte10 Var10;
        uint8_t local_b0[24];
        unique_ptr<dash3d::world>* local_98;
        EntityHighlight local_90;
        MapSquareUpdateInfo local_80;
        int local_68;
        int local_64;
        int local_60;
        int local_5c;
        int local_58;
        int local_54;
        long long local_50;
        unsigned int local_44;
        world* local_40;
        int local_38;
        bool local_31;

        if (0 < (int)m_nPCCount) {
            uVar9 = (((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) & 4294967295;
            local_b0._16_8_ = &field_55272;
            this_00 = &field_1103856;
            local_98 = (unique_ptr<dash3d::world>*)&field_19184;
            arg1_00 = 0;
            do {
                piVar5 = (int*)(*this_00)[arg1_00];
                midiPlayerMainThread = (Client*)(*local_b0._16_8_)[(long)*piVar5];
                if (*midiPlayerMainThread != nullptr) {
                    pCVar6 = (ClientNpc*)(*midiPlayerMainThread).operator->();
                    cVar4 = pCVar6->Ready();
                    if (cVar4) {
                        lVar7 = (*midiPlayerMainThread).operator->();
                        lVar7 = (*((lVar7 + 1024))).operator->();
                        if (*(char*)(lVar7 + 472) == (char)uVar9) {
                            lVar7 = (*midiPlayerMainThread).operator->();
                            cVar4 = ((NpcType*)(*((lVar7 + 1024))).operator->())->IsMultiNpcVisible();
                            if (cVar4) {
                                lVar7 = (*midiPlayerMainThread).operator->();
                                uVar1 = *(unsigned int*)(lVar7 + 24);
                                lVar7 = (*midiPlayerMainThread).operator->();
                                this = this;
                                if (((uVar1 < 13312) && (iVar2 = *(int*)(lVar7 + 28), -1 < iVar2)) && (iVar2 < 13312)) {
                                    local_44 = (unsigned int)uVar9;
                                    local_38 = (int)uVar1 >> 7;
                                    local_50 = (((uint64_t)local_50._4_4_ << 32) | (uint32_t)(iVar2 >> 7));
                                    lVar7 = (*midiPlayerMainThread).operator->();
                                    if (*(int*)(lVar7 + 40) == 1) {
                                        lVar7 = (*midiPlayerMainThread).operator->();
                                        if ((*(unsigned int*)(lVar7 + 24) & 127) == 64) {
                                            lVar7 = (*midiPlayerMainThread).operator->();
                                            if ((*(unsigned int*)(lVar7 + 28) & 127) == 64) {
                                                local_40 = (world*)(long)local_38;
                                                lVar7 = (long)(int)local_50;
                                                if (*(int*)(field_7164656 + lVar7 * 4 + (long)local_40 * 416 + 228) ==
                                                    field_7294680) {
                                                    pCVar8 = (ClientEntity*)(*midiPlayerMainThread).operator->();
                                                    pCVar8->SetHiddenBy(
                                                        *((ClientEntityID*)(field_7164656 + lVar7 * 8 +
                                                                            (long)local_40 * 832 + 43492)));
                                                    uVar9 = (unsigned long)local_44;
                                                    goto LAB_1000fa1b0;
                                                }
                                                *(int*)(field_7164656 + lVar7 * 4 + (long)local_40 * 416 + 228) =
                                                    field_7294680;
                                                piVar5 = (int*)(*this_00)[arg1_00];
                                                local_80 = game::LightProbeManager::MapSquareUpdateInfo(false, *piVar5);
                                                *(uint64_t*)(field_7164656 + lVar7 * 8 + (long)local_40 * 832 + 43492) =
                                                    local_80._0_8_;
                                            }
                                        }
                                    }
                                    pCVar8 = (ClientEntity*)(*midiPlayerMainThread).operator->();
                                    pCVar8->SetUnhidden();
                                    local_40 = (world*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)field_51984);
                                    lVar7 = (*midiPlayerMainThread).operator->();
                                    lVar7 = (*((lVar7 + 1024))).operator->();
                                    cVar4 = *(char*)(lVar7 + 520);
                                    piVar5 = (int*)(*this_00)[arg1_00];
                                    local_50 = dash3d::MousePickingHelper::GetPackedTypeCode(
                                        local_38, (int)local_50, (int)local_40, 1, !cVar4, *piVar5);
                                    pCVar6 = (ClientNpc*)(*midiPlayerMainThread).operator->();
                                    highlightChannelProperties = (HighlightChannelProperties*)pCVar6->GetHighlight();
                                    Var10 = HighlightChannelProperties::CreateHighlightData(highlightChannelProperties);
                                    iVar2 = field_8488;
                                    local_90._0_10_ = Var10;
                                    lVar7 = (*midiPlayerMainThread).operator->();
                                    *(int*)(lVar7 + 44) = iVar2;
                                    local_40 = (world*)(*local_98).operator->();
                                    local_68 = field_51984;
                                    lVar7 = (*midiPlayerMainThread).operator->();
                                    local_64 = *(int*)(lVar7 + 24);
                                    lVar7 = (*midiPlayerMainThread).operator->();
                                    local_60 = *(int*)(lVar7 + 28);
                                    lVar7 = (*midiPlayerMainThread).operator->();
                                    iVar2 = *(int*)(lVar7 + 24);
                                    lVar7 = (*midiPlayerMainThread).operator->();
                                    local_38 = *(int*)(lVar7 + 40) * 64 + iVar2 - 64;
                                    lVar7 = (*midiPlayerMainThread).operator->();
                                    iVar2 = *(int*)(lVar7 + 28);
                                    this_02 = midiPlayerMainThread;
                                    lVar7 = (*midiPlayerMainThread).operator->();
                                    local_38 =
                                        GetAvH(this_02, local_38, iVar2 + *(int*)(lVar7 + 40) * 64 - 64, field_51984);
                                    lVar7 = (*midiPlayerMainThread).operator->();
                                    iVar2 = *(int*)(lVar7 + 40);
                                    static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                        (shared_ptr<ClientNpc>*)&local_80);
                                    lVar7 = (*midiPlayerMainThread).operator->();
                                    local_5c = *(int*)(lVar7 + 32);
                                    lVar7 = (*midiPlayerMainThread).operator->();
                                    local_31 = *(bool*)(lVar7 + 36);
                                    pCVar8 = (ClientEntity*)(*midiPlayerMainThread).operator->();
                                    local_58 = pCVar8->GetServerX();
                                    pCVar8 = (ClientEntity*)(*midiPlayerMainThread).operator->();
                                    local_54 = pCVar8->GetServerZ();
                                    lVar7 = (*midiPlayerMainThread).operator->();
                                    arg3 = *(int*)(lVar7 + 40);
                                    lVar7 = (*midiPlayerMainThread).operator->();
                                    new (local_b0) dash3d::GridRect(local_58, local_54, arg3, *(int*)(lVar7 + 40));
                                    local_40->AddDynamic(local_68, local_64, local_60, local_38, iVar2 * 64 - 4,
                                                         local_80, local_5c, local_50, local_31, local_90, *local_b0);
                                    uVar9 = (unsigned long)local_44;
                                    this = this;
                                }
                            }
                        }
                    }
                }
            LAB_1000fa1b0:
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)(int)m_nPCCount);
        }
    }

    // 0x1000fa580
    void Client::GdmAddProjectiles() {
        (&field_7164584)->remove_if<Client::GdmAddProjectiles()::__10>(this);
    }

    // 0x1000fa5a0
    void Client::GdmAddMapAnim() {
        (&field_7164616)->remove_if<Client::GdmAddMapAnim()::__11>(this);
    }

    // 0x1000fa5c0
    void Client::GdmCalcWindowSize(int arg1, int arg2, int arg3, int arg4, bool arg5) {
        uint64_t extraout_var;
        uint32_t in_register_00000014;
        uint32_t in_register_00000034;
        int iVar9;

        uint64_t uVar6 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        uint64_t uVar4 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        uint8_t uVar1 = field_144->GetPix2D();
        Pix2D* this_00 = (Pix2D*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
        if (arg3 < 1) {
            arg3 = 1;
        }
        unsigned int uVar8 = 1;
        if (0 < arg4) {
            uVar8 = arg4;
        }
        if ((int)uVar8 < 334) {
            iVar9 = (int)field_52712;
        } else if ((int)uVar8 < 434) {
            iVar9 = (int)(((int)field_52714 - (int)field_52712) * (uVar8 - 334)) / 100 + (int)field_52712;
        } else {
            iVar9 = (int)field_52714;
        }
        int iVar3 = uVar8 * 512;
        int iVar5 = arg3 * 334;
        int iVar2 = (iVar3 * iVar9) / iVar5;
        int iVar7 = (int)field_52730;
        if (iVar2 < iVar7) {
            iVar2 = (iVar5 * iVar7) / iVar3;
            iVar9 = (int)field_52728;
            if (iVar9 < iVar2) {
                iVar2 = (arg3 - (iVar3 * iVar9) / (iVar7 * 334)) / 2;
                if (arg5) {
                    this_00->ResetClipping();
                    (**(void (**)(...))(this_00->field_0 + 32))(this_00, uVar6, uVar4, iVar2, uVar8, 4278190080);
                    (**(void (**)(...))(this_00->field_0 + 32))(this_00, (arg3 + arg1) - iVar2, uVar4, iVar2, uVar8,
                                                                4278190080);
                }
                arg1 = arg1 + iVar2;
                arg3 = arg3 + iVar2 * -2;
                goto LAB_1000fa7dd;
            }
        } else {
            if (iVar2 <= field_52732)
                goto LAB_1000fa7dd;
            iVar5 = iVar5 * field_52732;
            iVar2 = iVar5 / iVar3;
            iVar9 = (int)field_52720;
            if (iVar2 < iVar9) {
                iVar2 = (int)(uVar8 - iVar5 / (iVar9 << 9)) / 2;
                if (arg5) {
                    this_00->ResetClipping();
                    (**(void (**)(...))(this_00->field_0 + 32))(this_00, uVar6, uVar4, arg3, iVar2, 4278190080);
                    (**(void (**)(...))(this_00->field_0 + 32))(this_00, uVar6, (arg2 + uVar8) - iVar2, arg3, iVar2,
                                                                4278190080);
                }
                arg2 = arg2 + iVar2;
                uVar8 = uVar8 + iVar2 * -2;
                goto LAB_1000fa7dd;
            }
        }
        iVar9 = iVar2;
    LAB_1000fa7dd:
        field_52724 = iVar9;
        field_52736 = arg1;
        field_52740 = arg2;
        field_52744 = arg3;
        field_52748 = uVar8;
    }

    // 0x1000fa870
    int Client::GdmRoofCheck() {
        uint8_t* this_00;
        float fVar1;
        uint8_t bVar3;
        long lVar4;
        int iVar5;
        float* pfVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        unsigned int uVar13;
        int iVar14;
        int local_34;

        if (((GameOptions*)field_8384.operator->())->GetRemoveRoof() == '\0') {
            local_34 = 3;
            if (field_53100 < 310) {
                if (m_cameraMode == 1) {
                    uVar13 = field_7294716;
                    pfVar6 = &field_7294724;
                } else {
                    lVar4 = field_52016.operator->();
                    uVar13 = *(unsigned int*)(lVar4 + 24);
                    lVar4 = field_52016.operator->();
                    pfVar6 = (float*)(lVar4 + 28);
                }
                iVar7 = field_53088;
                if ((((13311 < iVar7) || (iVar7 < 0)) || (iVar10 = field_53096, iVar10 < 0)) || (13311 < iVar10)) {
                    return field_51984;
                }
                iVar5 = field_51984;
                if (13311 < (int)uVar13) {
                    return iVar5;
                }
                if ((int)uVar13 < 0) {
                    return iVar5;
                }
                fVar1 = *pfVar6;
                if ((int)fVar1 < 0) {
                    return iVar5;
                }
                if (13311 < (int)fVar1) {
                    return iVar5;
                }
                iVar11 = (int)fVar1 >> 7;
                iVar14 = (int)uVar13 >> 7;
                iVar7 = iVar7 >> 7;
                iVar10 = iVar10 >> 7;
                bVar3 = ClientBuild::Read3DArray<signed char>((Array<signed char>*)&ClientBuild::m_mapl, iVar5, iVar7,
                                                              iVar10);
                local_34 = 3;
                if ((bVar3 & 4) != 0) {
                    local_34 = field_51984;
                }
                iVar5 = iVar11 - iVar10;
                if (iVar11 - iVar10 == 0 || iVar11 < iVar10) {
                    iVar5 = -(iVar11 - iVar10);
                }
                iVar9 = iVar14 - iVar7;
                if (iVar14 - iVar7 == 0 || iVar14 < iVar7) {
                    iVar9 = -(iVar14 - iVar7);
                }
                if (iVar5 < iVar9) {
                    if (iVar7 != iVar14) {
                        iVar12 = 32768;
                        do {
                            iVar8 = -(unsigned int)(iVar14 < iVar7);
                            if (iVar7 < iVar14) {
                                iVar8 = 1;
                            }
                            iVar7 = iVar8 + iVar7;
                            bVar3 = ClientBuild::Read3DArray<signed char>((Array<signed char>*)&ClientBuild::m_mapl,
                                                                          field_51984, iVar7, iVar10);
                            if ((bVar3 & 4) != 0) {
                                local_34 = field_51984;
                            }
                            iVar12 = iVar12 + (iVar5 << 16) / iVar9;
                            if (65535 < iVar12) {
                                iVar8 = -(unsigned int)(iVar11 < iVar10);
                                if (iVar10 < iVar11) {
                                    iVar8 = 1;
                                }
                                iVar12 = iVar12 - 65536;
                                iVar10 = iVar8 + iVar10;
                                bVar3 = ClientBuild::Read3DArray<signed char>((Array<signed char>*)&ClientBuild::m_mapl,
                                                                              field_51984, iVar7, iVar10);
                                if ((bVar3 & 4) != 0) {
                                    local_34 = field_51984;
                                }
                            }
                        } while (iVar7 != iVar14);
                    }
                } else if ((0 < iVar5) && (iVar10 != iVar11)) {
                    iVar12 = 32768;
                    do {
                        iVar8 = -(unsigned int)(iVar11 < iVar10);
                        if (iVar10 < iVar11) {
                            iVar8 = 1;
                        }
                        iVar10 = iVar8 + iVar10;
                        bVar3 = ClientBuild::Read3DArray<signed char>((Array<signed char>*)&ClientBuild::m_mapl,
                                                                      field_51984, iVar7, iVar10);
                        if ((bVar3 & 4) != 0) {
                            local_34 = field_51984;
                        }
                        iVar12 = iVar12 + (iVar9 << 16) / iVar5;
                        if (65535 < iVar12) {
                            iVar8 = -(unsigned int)(iVar14 < iVar7);
                            if (iVar7 < iVar14) {
                                iVar8 = 1;
                            }
                            iVar12 = iVar12 - 65536;
                            iVar7 = iVar8 + iVar7;
                            bVar3 = ClientBuild::Read3DArray<signed char>((Array<signed char>*)&ClientBuild::m_mapl,
                                                                          field_51984, iVar7, iVar10);
                            if ((bVar3 & 4) != 0) {
                                local_34 = field_51984;
                            }
                        }
                    } while (iVar10 != iVar11);
                }
            }
            this_00 = &field_52016;
            lVar4 = (*this_00).operator->();
            if (((-1 < *(int*)(lVar4 + 24)) && (lVar4 = (*this_00).operator->(), -1 < *(int*)(lVar4 + 28))) &&
                ((lVar4 = (*this_00).operator->(),
                  *(int*)(lVar4 + 24) < 13312 && (lVar4 = (*this_00).operator->(), *(int*)(lVar4 + 28) < 13312)))) {
                iVar7 = field_51984;
                lVar4 = (*this_00).operator->();
                iVar10 = *(int*)(lVar4 + 24);
                lVar4 = (*this_00).operator->();
                bVar3 = ClientBuild::Read3DArray<signed char>((Array<signed char>*)&ClientBuild::m_mapl, iVar7,
                                                              iVar10 >> 7, *(int*)(lVar4 + 28) >> 7);
                if ((bVar3 & 4) == 0) {
                    return local_34;
                }
            }
        }
        return field_51984;
    }

    // 0x1000fac60
    int Client::GdmRoofCheck2() {
        int iVar3;

        auto this_00 = field_8384.operator->();
        if (this_00->GetRemoveRoof() == '\0') {
            iVar3 = GetAvH(this_00, field_53088, field_53096, field_51984);
            if (799 < iVar3 - field_53092) {
                return 3;
            }
            if ((ClientBuild::Read3DArray<signed char>((Array<signed char>*)&ClientBuild::m_mapl, field_51984,
                                                       field_53088 >> 7, field_53096 >> 7) &
                 4) == 0) {
                return 3;
            }
        }
        return field_51984;
    }

    // 0x1000fad10
    void Client::GdmDrawSkybox(int arg1, long long arg2) {
        uint64_t uVar1;
        uint64_t uVar2;
        uint64_t* puVar4;
        float local_48;
        float local_38;
        float fStack_34;

        uint8_t* this_00 = field_7164656;
        bool cVar3 = this_00->ShowSkybox();
        if (!cVar3) {
            return;
        }
        if (field_7164648 == '\0') {
            puVar4 = (uint64_t*)(*((Array<jag::math::Vector4T<float>>*)&ClientBuild::m_skyboxColour))[(long)arg1];
            uVar1 = *puVar4;
            uVar2 = puVar4[1];
            cVar3 = Skybox::IsNewColour(this_00, arg2);
            if ((!cVar3) || (field_7164753 != '\0'))
                goto LAB_1000fadaa;
            local_38 = (float)uVar1;
            fStack_34 = (float)((unsigned long)uVar1 >> 32);
            local_48 = (float)uVar2;
        } else {
            if (field_7164753 != '\0')
                goto LAB_1000fadaa;
            local_38 = 0.0;
            fStack_34 = 0.0;
            local_48 = 0.0;
        }
        this_00->SetSkyboxColour(local_38, fStack_34, local_48, arg2);
    LAB_1000fadaa:
        this_00->RenderSkybox(arg2);
    }

    // 0x1000fadd0
    void Client::GdmDrawFog(int arg1, long long arg2) {
        bool cVar1;
        int iVar2;
        int* piVar3;

        unsigned long long arg2_00 = arg2 / 1000000;
        if (field_7164648 == '\0') {
            if (*(char*)&field_7164880 != '\0')
                goto LAB_1000fae3c;
            piVar3 = (int*)(*((Array<int>*)&ClientBuild::m_fogStartDistance))[(long)arg1];
            iVar2 = *piVar3;
        } else {
            if (*(char*)&field_7164880 != '\0')
                goto LAB_1000fae3c;
            iVar2 = 7;
        }
        field_7164760.SetFogDistance(iVar2, arg2_00);
    LAB_1000fae3c:
        if (*(char*)((long)&field_7164880 + 1) == '\0') {
            iVar2 = ((world*)field_19184.operator->())->GetDrawDistance();
            field_7164760.UpdateFogViaDrawDistance(iVar2, arg2_00);
            cVar1 = m_usingRSeven;
        } else {
            cVar1 = m_usingRSeven;
        }
        if (!cVar1) {
            field_144->SetFogParams(0.0, 0.0);
        } else {
            field_7164760.UpdateFog(arg2_00);
        }
    }

    // 0x1000faeb0
    void Client::GdmEntityOverlays(int arg1, int arg2, int arg3, int arg4, int arg5) {
        uint8_t* arg1_00;
        unsigned long arg1_01;
        bool cVar1;
        uint8_t bVar2;
        uint32_t uVar5;
        unsigned int uVar6;
        int iVar7;
        shared_ptr<ClientPlayer>* psVar8;
        ClientEntity* pCVar9;
        ClientPlayer* pCVar10;
        shared_ptr<ClientNpc>* psVar11;
        ClientNpc* pCVar12;
        uint64_t* puVar13;
        ClientEntityID* pCVar15;
        ClientEntityID* pCVar16;
        uint64_t extraout_var;
        int* piVar17;
        uint32_t* puVar18;
        eastl::string* this_02;
        PixfontGeneric* pPVar19;
        unsigned int* puVar20;
        vector<int>* pvVar21;
        unsigned int uVar22;
        uint32_t in_register_00000014;
        unsigned long uVar24;
        uint32_t in_register_00000034;
        long lVar26;
        int iVar27;
        unsigned long uVar28;
        Client* pCVar29;
        bool bVar30;
        bool bVar31;
        HiddenEntityInfo local_4000;
        HiddenEntityInfo local_3fe8;
        int local_3fd0;
        int local_3fcc;
        int* local_3fc8;
        uint8_t local_3fc0[16];
        array<int, 50ul>* local_3fb0;
        array<int, 50ul>* local_3fa8;
        array<int, 50ul>* local_3fa0;
        int local_3f94;
        array<eastl::vector<int>, 50ul>* local_3f90;
        Array<int>* local_3f88;
        eastl::string* local_3f80;
        PixfontGeneric* local_3f78;
        shared_ptr<jstring::PixfontGeneric>* local_3f70;
        unsigned long local_3f48;
        uint64_t local_3f40;

        uint64_t local_3f60 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        unsigned long local_3f58 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        local_3f48 = (((uint64_t)local_3f48._4_4_ << 32) | (uint32_t)arg5);
        int local_3f38 = arg3;
        int local_3f34 = arg4;
        field_2505256.clear();
        field_1115872 = 0;
        fixed_vector<HiddenEntityInfo, 501ul> local_1fb0;
        fixed_vector<HiddenEntityInfo, 501ul> local_3f28;
        long lVar25 = (long)ReceivePlayerPositions::m_lastNum;
        array<shared_ptr<ClientNpc>, 65536ul>* local_3f50 = (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272;
        local_3fc0._8_8_ = &field_19216;
        int iVar4 = m_nPCCount + ReceivePlayerPositions::m_lastNum;
        Client* local_3f30 = this;
        if (iVar4 != 0 && SCARRY4(m_nPCCount, ReceivePlayerPositions::m_lastNum) == iVar4 < 0) {
            local_3f88 = (Array<int>*)&field_1103856;
            local_3f40 = (PixfontGeneric*)-lVar25;
            lVar26 = 0;
            do {
                local_4000 = ClientEntityID();
                new (local_3fc0) ClientEntityID();
                if (lVar26 < lVar25) {
                    psVar8 = (shared_ptr<ClientPlayer>*)(*local_3fc0._8_8_)[(
                        long)(int)(&ReceivePlayerPositions::m_lastID)[lVar26]];
                    pCVar9 = (ClientEntity*)(*psVar8).operator->();
                    cVar1 = pCVar9->IsHiddenBelowOtherEntity();
                    if (cVar1) {
                        pCVar10 = (ClientPlayer*)(*psVar8).operator->();
                        cVar1 = pCVar10->HasAnyOverlays(local_3f30->field_8488, *(int*)&local_3f30->field_54896);
                        if (cVar1) {
                            local_3fe8 = game::LightProbeManager::MapSquareUpdateInfo(
                                true, (&ReceivePlayerPositions::m_lastID)[lVar26]);
                            local_4000.field_0 = local_3fe8.field_0;
                            local_4000.field_2 = local_3fe8.field_2;
                            local_4000.field_4 = local_3fe8.field_4;
                            psVar8 = (shared_ptr<ClientPlayer>*)(*local_3fc0._8_8_)[(
                                long)(int)(&ReceivePlayerPositions::m_lastID)[lVar26]];
                            pCVar9 = (ClientEntity*)(*psVar8).operator->();
                        LAB_1000fb12e:
                            puVar13 = (uint64_t*)pCVar9->GetHiddenBy();
                            local_3fc0._0_8_ = *puVar13;
                        }
                    }
                } else {
                    arg1_00 = (uint8_t*)((long)&local_3f40->field_0 + lVar26);
                    piVar17 = (int*)(*local_3f88)[(unsigned long)arg1_00];
                    psVar11 = (shared_ptr<ClientNpc>*)(*local_3f50)[(long)*piVar17];
                    pCVar9 = (ClientEntity*)(*psVar11).operator->();
                    cVar1 = pCVar9->IsHiddenBelowOtherEntity();
                    if (cVar1) {
                        pCVar12 = (ClientNpc*)(*psVar11).operator->();
                        cVar1 = pCVar12->HasAnyOverlays(local_3f30->field_8488, *(int*)&local_3f30->field_54892);
                        if (cVar1) {
                            piVar17 = (int*)(*local_3f88)[(unsigned long)arg1_00];
                            local_3fe8 = game::LightProbeManager::MapSquareUpdateInfo(false, *piVar17);
                            local_4000.field_0 = local_3fe8.field_0;
                            local_4000.field_2 = local_3fe8.field_2;
                            local_4000.field_4 = local_3fe8.field_4;
                            piVar17 = (int*)(*local_3f88)[(unsigned long)arg1_00];
                            psVar11 = (shared_ptr<ClientNpc>*)(*local_3f50)[(long)*piVar17];
                            pCVar9 = (ClientEntity*)(*psVar11).operator->();
                            goto LAB_1000fb12e;
                        }
                    }
                }
                cVar1 = local_3fc0->IsValid();
                if (cVar1) {
                    cVar1 = local_3fc0->IsPlayer();
                    if (!cVar1) {
                        local_3fe8 = HiddenEntityInfo(local_4000, *local_3fc0);
                        local_3f28.push_back(local_3fe8);
                    } else {
                        local_3fe8 = HiddenEntityInfo(local_4000, *local_3fc0);
                        local_1fb0.push_back(local_3fe8);
                    }
                }
                lVar26 = lVar26 + 1;
            } while (lVar26 < (int)local_3f30->m_nPCCount + lVar25);
        }
        Client* pCVar23 = local_3f30;
        auto this_00 = local_3f30->field_19184.operator->();
        auto this_01 = this_00->GetLastEntityDrawOrder();
        auto paVar14 = this_01->HeapBeginPtr();
        local_3f88 = (Array<int>*)this_01->end();
        if (paVar14 == (array<int, 50ul>*)local_3f88) {
            local_3fb0 = (array<int, 50ul>*)(((uint64_t)local_3fb0._4_4_ << 32) | (uint32_t)4294967295);
            local_3fa8 = (array<int, 50ul>*)(((uint64_t)local_3fa8._4_4_ << 32) | (uint32_t)4294967295);
        } else {
            local_3fa8 = (array<int, 50ul>*)(((uint64_t)local_3fa8._4_4_ << 32) | (uint32_t)4294967295);
            local_3fb0 = (array<int, 50ul>*)(((uint64_t)local_3fb0._4_4_ << 32) | (uint32_t)4294967295);
            do {
                uVar5 = dash3d::MousePickingHelper::GetEntityTypeFromTypecode(*(long long*)paVar14);
                switch (uVar5) {
                case 0:
                    uVar22 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)paVar14);
                    local_3f40 = (PixfontGeneric*)(*local_3fc0._8_8_)[(long)(int)uVar22];
                    cVar1 = local_3f40->operator_cast_to_bool();
                    if (cVar1) {
                        pCVar9 = (ClientEntity*)(*local_3f40).operator->();
                        cVar1 = pCVar9->IsHiddenBelowOtherEntity();
                        if (!cVar1) {
                            pCVar15 = (ClientEntityID*)local_1fb0.HeapBeginPtr();
                            pCVar16 = (ClientEntityID*)local_1fb0.end();
                            for (; pCVar15 != pCVar16; pCVar15 = (ClientEntityID*)&pCVar15[1].m_slotID) {
                                uVar6 = pCVar15->field_8.GetZ();
                                if (uVar22 == uVar6) {
                                    cVar1 = pCVar15->IsPlayer();
                                    iVar4 = pCVar15->GetZ();
                                    if (!cVar1) {
                                        GdmEntityOverlayNPC((int)local_3f30, iVar4, (int)local_3f60, (int)local_3f58,
                                                            local_3f38, local_3f34);
                                    } else {
                                        GdmEntityOverlayPlayer((int)local_3f30, iVar4, (int)local_3f60, (int)local_3f58,
                                                               local_3f38, local_3f34);
                                    }
                                }
                            }
                        }
                    }
                    pCVar10 = (ClientPlayer*)(*local_3f40).operator->();
                    pCVar23 = local_3f30;
                    cVar1 = pCVar10->HasAnyOverlays(local_3f30->field_8488, *(int*)&local_3f30->field_54896);
                    if (cVar1) {
                        if (uVar22 == pCVar23->m_priorityPlayerId) {
                            local_3fb0 = (array<int, 50ul>*)(((uint64_t)local_3fb0._4_4_ << 32) | (uint32_t)uVar22);
                        } else if (uVar22 == pCVar23->field_51988) {
                            local_3fa8 = (array<int, 50ul>*)(((uint64_t)local_3fa8._4_4_ << 32) | (uint32_t)uVar22);
                        } else {
                            GdmEntityOverlayPlayer((int)pCVar23, uVar22, (int)local_3f60, (int)local_3f58, local_3f38,
                                                   local_3f34);
                        }
                    }
                    break;
                case 1:
                    iVar4 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)paVar14);
                    local_3f40 = (PixfontGeneric*)(*local_3f50)[(long)iVar4];
                    cVar1 = local_3f40->operator_cast_to_bool();
                    if (cVar1) {
                        pCVar9 = (ClientEntity*)(*local_3f40).operator->();
                        cVar1 = pCVar9->IsHiddenBelowOtherEntity();
                        if (!cVar1) {
                            pCVar15 = (ClientEntityID*)local_3f28.HeapBeginPtr();
                            pCVar16 = (ClientEntityID*)local_3f28.end();
                            for (; pCVar15 != pCVar16; pCVar15 = (ClientEntityID*)&pCVar15[1].m_slotID) {
                                iVar7 = pCVar15->field_8.GetZ();
                                if (iVar4 == iVar7) {
                                    cVar1 = pCVar15->IsPlayer();
                                    iVar7 = pCVar15->GetZ();
                                    if (!cVar1) {
                                        GdmEntityOverlayNPC((int)local_3f30, iVar7, (int)local_3f60, (int)local_3f58,
                                                            local_3f38, local_3f34);
                                    } else {
                                        GdmEntityOverlayPlayer((int)local_3f30, iVar7, (int)local_3f60, (int)local_3f58,
                                                               local_3f38, local_3f34);
                                    }
                                }
                            }
                        }
                    }
                    pCVar12 = (ClientNpc*)(*local_3f40).operator->();
                    cVar1 = pCVar12->HasAnyOverlays(local_3f30->field_8488, *(int*)&local_3f30->field_54892);
                    if (cVar1) {
                        GdmEntityOverlayNPC((int)local_3f30, iVar4, (int)local_3f60, (int)local_3f58, local_3f38,
                                            local_3f34);
                    }
                    break;
                case 2:
                    iVar4 = dash3d::MousePickingHelper::GetEntityLevelFromTypecode(*(long long*)paVar14);
                    if (iVar4 == local_3f30->field_51984) {
                        iVar7 = dash3d::MousePickingHelper::GetEntityXFromTypecode(*(long long*)paVar14);
                        iVar27 = dash3d::MousePickingHelper::GetEntityZFromTypecode(*(long long*)paVar14);
                        bVar2 = dash3d::MousePickingHelper::GetLocLayerFromTypecode(*(long long*)paVar14);
                        GdmEntityOverlayLoc(local_3f30, iVar4, iVar7, iVar27, (unsigned int)bVar2, (int)local_3f60,
                                            (int)local_3f58, local_3f38, local_3f34, (int)local_3f48);
                    }
                    break;
                case 4:
                    iVar4 = dash3d::MousePickingHelper::GetEntityXFromTypecode(*(long long*)paVar14);
                    iVar7 = dash3d::MousePickingHelper::GetEntityZFromTypecode(*(long long*)paVar14);
                    iVar27 = dash3d::MousePickingHelper::GetEntityLevelFromTypecode(*(long long*)paVar14);
                    GdmEntityOverlayTile(local_3f30, iVar27, iVar4, iVar7, (int)local_3f60, (int)local_3f58, local_3f38,
                                         local_3f34, (int)local_3f48);
                }
                paVar14 = paVar14 + 8;
                pCVar23 = local_3f30;
            } while (paVar14 != (array<int, 50ul>*)local_3f88);
        }
        iVar4 = (int)local_3fb0;
        if ((int)local_3fa8 != -1) {
            GdmEntityOverlayPlayer((int)pCVar23, (int)local_3fa8, (int)local_3f60, (int)local_3f58, local_3f38,
                                   local_3f34);
        }
        if (iVar4 != -1) {
            GdmEntityOverlayPlayer((int)pCVar23, iVar4, (int)local_3f60, (int)local_3f58, local_3f38, local_3f34);
        }
        uint8_t uVar3 = pCVar23->field_144->GetPix2D();
        Pix2D* local_3f68 = (Pix2D*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3);
        if (0 < pCVar23->field_1115872) {
            local_3fb0 = (array<int, 50ul>*)&pCVar23->field_1115876;
            local_3f88 = (Array<int>*)&pCVar23->field_1116076;
            local_3fa8 = (array<int, 50ul>*)&pCVar23->field_1116476;
            local_3fc0._8_8_ = &pCVar23->field_1116276;
            local_3f70 = (shared_ptr<jstring::PixfontGeneric>*)&pCVar23->field_1104240;
            local_3f90 = (array<eastl::vector<int>, 50ul>*)&pCVar23->field_1117280;
            local_3fa0 = (array<int, 50ul>*)&pCVar23->field_1117076;
            local_3f38 = local_3f38 + (int)local_3f60;
            local_3fd0 = (int)local_3f58 + 5;
            local_3f34 = local_3f34 + (int)local_3f58;
            local_3fcc = (int)local_3f60 + 50;
            uVar24 = 0;
            do {
                piVar17 = (int*)(*local_3fb0)[uVar24];
                iVar4 = *piVar17;
                local_3fc8 = (int*)(*local_3f88)[uVar24];
                iVar7 = *local_3fc8;
                piVar17 = (int*)(*local_3fa8)[uVar24];
                iVar27 = *piVar17;
                puVar18 = (uint32_t*)(*local_3fc0._8_8_)[uVar24];
                local_3f50 =
                    (array<shared_ptr<ClientNpc>, 65536ul>*)(((uint64_t)local_3f50._4_4_ << 32) | (uint32_t)(*puVar18));
                local_3f78 = (PixfontGeneric*)(((uint64_t)local_3f78._4_4_ << 32) | (uint32_t)(iVar4 - iVar27));
                local_3f80 = (eastl::string*)(((uint64_t)local_3f80._4_4_ << 32) | (uint32_t)(iVar27 + iVar4));
                local_3f94 = iVar4;
                local_3f48 = uVar24;
                do {
                    if (uVar24 == 0) {
                        local_3f40 = (PixfontGeneric*)((unsigned long)local_3f40._4_4_ << 32);
                    } else {
                        uVar28 = 0;
                        local_3f40 = (PixfontGeneric*)((unsigned long)local_3f40._4_4_ << 32);
                        do {
                            piVar17 = (int*)(*local_3f88)[uVar28];
                            iVar4 = *piVar17;
                            piVar17 = (int*)(*local_3fc0._8_8_)[uVar28];
                            iVar27 = iVar4 - *piVar17;
                            if ((iVar27 < iVar7 + 2) && (iVar7 - (int)local_3f50 < iVar4 + 2)) {
                                piVar17 = (int*)(*local_3fb0)[uVar28];
                                iVar4 = *piVar17;
                                piVar17 = (int*)(*local_3fa8)[uVar28];
                                if ((int)local_3f78 < *piVar17 + iVar4) {
                                    bVar31 = iVar4 - *piVar17 < (int)local_3f80;
                                    bVar30 = iVar27 < iVar7;
                                    if (bVar31 && bVar30) {
                                        iVar7 = iVar27;
                                    }
                                    uVar22 = (unsigned int)(float)local_3f40 & 255;
                                    if (bVar31 && bVar30) {
                                        uVar22 = 1;
                                    }
                                    local_3f40 =
                                        (PixfontGeneric*)(((uint64_t)local_3f40._4_4_ << 32) | (uint32_t)uVar22);
                                }
                            }
                            uVar28 = uVar28 + 1;
                            uVar24 = local_3f48;
                        } while (local_3f48 != uVar28);
                    }
                    pCVar29 = local_3f30;
                } while (((unsigned long)local_3f40 & 1) != 0);
                local_3f30->field_1120480 = local_3f94;
                *local_3fc8 = iVar7;
                local_3f30->field_1120484 = iVar7;
                this_02 = &pCVar23->field_1118880[uVar24];
                if (pCVar29->field_2505096 != 0) {
                    jstring::PixfontGeneric::CentreString(*((eastl::string*)(*local_3f70).operator->()), (int)this_02,
                                                          pCVar29->field_1120480 + (int)local_3f60,
                                                          pCVar29->field_1120484 + (int)local_3f58, 16776960, nullptr);
                    goto LAB_1000fb7f2;
                }
                piVar17 = &pCVar23->field_1116676[uVar24];
                iVar4 = *piVar17;
                if ((long)iVar4 < 6) {
                    puVar18 = &pCVar23->field_53280[(long)iVar4];
                    local_3f50 = (array<shared_ptr<ClientNpc>, 65536ul>*)(((uint64_t)local_3f50._4_4_ << 32) |
                                                                          (uint32_t)(*puVar18));
                    goto switchD_1000fba5c_default;
                }
                local_3f50 =
                    (array<shared_ptr<ClientNpc>, 65536ul>*)(((uint64_t)local_3f50._4_4_ << 32) | (uint32_t)16776960);
                switch (iVar4) {
                case 6:
                    iVar4 = pCVar29->field_7294676 % 20;
                    bVar31 = SBORROW4(iVar4, 10);
                    bVar30 = iVar4 - 10 < 0;
                    iVar4 = 16776960;
                    iVar7 = 16711680;
                    goto LAB_1000fbaf2;
                case 7:
                    iVar4 = pCVar29->field_7294676 % 20;
                    bVar31 = SBORROW4(iVar4, 10);
                    bVar30 = iVar4 - 10 < 0;
                    iVar4 = 65535;
                    iVar7 = 255;
                    goto LAB_1000fbaf2;
                case 8:
                    iVar4 = pCVar29->field_7294676 % 20;
                    bVar31 = SBORROW4(iVar4, 10);
                    bVar30 = iVar4 - 10 < 0;
                    iVar4 = 8454016;
                    iVar7 = 45056;
                LAB_1000fbaf2:
                    if (bVar31 != bVar30) {
                        iVar4 = iVar7;
                    }
                LAB_1000fbaf5:
                    local_3f50 =
                        (array<shared_ptr<ClientNpc>, 65536ul>*)(((uint64_t)local_3f50._4_4_ << 32) | (uint32_t)iVar4);
                    break;
                case 9:
                    piVar17 = (int*)(*local_3fa0)[local_3f48];
                    iVar4 = *piVar17;
                    if (100 < iVar4) {
                        local_3f50 =
                            (array<shared_ptr<ClientNpc>, 65536ul>*)(((uint64_t)local_3f50._4_4_ << 32) |
                                                                     (uint32_t)((150 - iVar4) * 1280 + 16711680));
                        break;
                    }
                    if (iVar4 < 51) {
                        if (0 < iVar4) {
                            local_3f50 = (array<shared_ptr<ClientNpc>, 65536ul>*)(((uint64_t)local_3f50._4_4_ << 32) |
                                                                                  (uint32_t)((50 - iVar4) * 5 + 65280));
                        }
                        break;
                    }
                    iVar4 = (100 - iVar4) * 327680;
                    iVar7 = 16776960;
                LAB_1000fc388:
                    iVar4 = iVar7 - iVar4;
                    goto LAB_1000fbaf5;
                case 10:
                    piVar17 = (int*)(*local_3fa0)[local_3f48];
                    iVar4 = *piVar17;
                    if (iVar4 < 101) {
                        if (50 < iVar4) {
                            iVar4 = (100 - iVar4) * 327680;
                            iVar7 = 16711935;
                            goto LAB_1000fc388;
                        }
                        if (0 < iVar4) {
                            local_3f50 =
                                (array<shared_ptr<ClientNpc>, 65536ul>*)(((uint64_t)local_3f50._4_4_ << 32) |
                                                                         (uint32_t)((50 - iVar4) * 327675 + 255));
                        }
                    } else {
                        local_3f50 = (array<shared_ptr<ClientNpc>, 65536ul>*)(((uint64_t)local_3f50._4_4_ << 32) |
                                                                              (uint32_t)((150 - iVar4) * 5 + 16711680));
                    }
                    break;
                case 11:
                    piVar17 = (int*)(*local_3fa0)[local_3f48];
                    iVar4 = *piVar17;
                    if (iVar4 < 101) {
                        if (iVar4 < 51) {
                            if (0 < iVar4) {
                                iVar4 = (50 - iVar4) * 327680;
                                iVar7 = 16777215;
                                goto LAB_1000fc388;
                            }
                        } else {
                            local_3f50 =
                                (array<shared_ptr<ClientNpc>, 65536ul>*)(((uint64_t)local_3f50._4_4_ << 32) |
                                                                         (uint32_t)((100 - iVar4) * 327685 + 65280));
                        }
                    } else {
                        local_3f50 =
                            (array<shared_ptr<ClientNpc>, 65536ul>*)(((uint64_t)local_3f50._4_4_ << 32) |
                                                                     (uint32_t)((150 - iVar4) * -327685 + 16777215));
                    }
                    break;
                case 12:
                    pPVar19 = (PixfontGeneric*)(*local_3f90)[local_3f48];
                    lVar25 = pPVar19->size();
                    if (lVar25 == 0) {
                        uVar24 = this_02->size();
                        pPVar19->resize(uVar24);
                        local_3f40 = (PixfontGeneric*)(((uint64_t)local_3f40._4_4_ << 32) | (uint32_t)((float)uVar24));
                        if (uVar24 != 0) {
                            uVar28 = 0;
                            local_3f78 = pPVar19;
                            do {
                                uVar5 = jag::math::RunetekColour::HSLToRGB(
                                    (unsigned short)((int)(((float)uVar28 * 64.0) / (float)local_3f40) << 10) | 960);
                                puVar18 = (uint32_t*)(*local_3f78)[uVar28];
                                *puVar18 = uVar5;
                                uVar28 = uVar28 + 1;
                            } while (uVar24 != uVar28);
                        }
                        pCVar29 = local_3f30;
                    }
                }
            switchD_1000fba5c_default:
                local_3fe8 = Array<eastl::string>(5);
                local_3fc0._0_4_ = pCVar29->field_52744;
                local_4000 = Array<int>(1, local_3fc0);
                pPVar19 = (PixfontGeneric*)(*local_3f70).operator->();
                pPVar19->SplitString(*this_02, local_4000, local_3fe8);
                puVar18 = (uint32_t*)(*local_3f70).operator->();
                local_3f40 = (PixfontGeneric*)(((uint64_t)local_3f40._4_4_ << 32) | (uint32_t)(*puVar18));
                puVar18 = &pCVar23->field_1116876[local_3f48];
                switch (*puVar18) {
                case 0:
                    iVar4 = local_3fe8.end();
                    if (0 < iVar4) {
                        local_3f40 = (PixfontGeneric*)(((uint64_t)local_3f40._4_4_ << 32) |
                                                       (uint32_t)((int)(float)local_3f40 + 1));
                        uVar28 = local_3f58 & 4294967295;
                        uVar24 = 0;
                        do {
                            local_3f78 = (PixfontGeneric*)(*local_3f70).operator->();
                            local_3f80 = &local_3fe8[uVar24];
                            iVar7 = local_3f30->field_1120480 + (int)local_3f60;
                            iVar4 = local_3f30->field_1120484;
                            pvVar21 = (vector<int>*)(*local_3f90)[local_3f48];
                            local_3f78->CentreStringColourPattern(*local_3f80, iVar7, iVar4 + (int)uVar28,
                                                                  (int)local_3f50, 0, *pvVar21, *local_3f68);
                            uVar24 = uVar24 + 1;
                            iVar4 = local_3fe8.end();
                            uVar28 = (unsigned long)(unsigned int)((int)uVar28 + (int)(float)local_3f40);
                        } while ((long)uVar24 < (long)iVar4);
                    }
                    break;
                case 1:
                    iVar4 = local_3fe8.end();
                    if (0 < iVar4) {
                        local_3f40 = (PixfontGeneric*)(((uint64_t)local_3f40._4_4_ << 32) |
                                                       (uint32_t)((int)(float)local_3f40 + 1));
                        uVar28 = local_3f58 & 4294967295;
                        uVar24 = 0;
                        do {
                            local_3f78 = (PixfontGeneric*)(*local_3f70).operator->();
                            local_3f80 = &local_3fe8[uVar24];
                            iVar27 = local_3f30->field_1120480 + (int)local_3f60;
                            iVar4 = local_3f30->field_1120484;
                            iVar7 = local_3f30->field_7294676;
                            pvVar21 = (vector<int>*)(*local_3f90)[local_3f48];
                            local_3f78->CentreStringWave(*local_3f80, iVar27, iVar4 + (int)uVar28, (int)local_3f50, 0,
                                                         iVar7, *pvVar21, *local_3f68);
                            uVar24 = uVar24 + 1;
                            iVar4 = local_3fe8.end();
                            uVar28 = (unsigned long)(unsigned int)((int)uVar28 + (int)(float)local_3f40);
                        } while ((long)uVar24 < (long)iVar4);
                    }
                    break;
                case 2:
                    iVar4 = local_3fe8.end();
                    if (0 < iVar4) {
                        local_3f40 = (PixfontGeneric*)(((uint64_t)local_3f40._4_4_ << 32) |
                                                       (uint32_t)((int)(float)local_3f40 + 1));
                        uVar28 = local_3f58 & 4294967295;
                        uVar24 = 0;
                        do {
                            local_3f78 = (PixfontGeneric*)(*local_3f70).operator->();
                            local_3f80 = &local_3fe8[uVar24];
                            iVar27 = local_3f30->field_1120480 + (int)local_3f60;
                            iVar4 = local_3f30->field_1120484;
                            iVar7 = local_3f30->field_7294676;
                            pvVar21 = (vector<int>*)(*local_3f90)[local_3f48];
                            local_3f78->CentreStringWave2(*local_3f80, iVar27, iVar4 + (int)uVar28, (int)local_3f50, 0,
                                                          iVar7, *pvVar21, *local_3f68);
                            uVar24 = uVar24 + 1;
                            iVar4 = local_3fe8.end();
                            uVar28 = (unsigned long)(unsigned int)((int)uVar28 + (int)(float)local_3f40);
                        } while ((long)uVar24 < (long)iVar4);
                    }
                    break;
                case 3:
                    iVar4 = local_3fe8.end();
                    if (0 < iVar4) {
                        local_3f40 = (PixfontGeneric*)(((uint64_t)local_3f40._4_4_ << 32) |
                                                       (uint32_t)((int)(float)local_3f40 + 1));
                        uVar24 = local_3f58 & 4294967295;
                        uVar28 = 0;
                        do {
                            local_3f78 = (PixfontGeneric*)(*local_3f70).operator->();
                            local_3f80 = &local_3fe8[uVar28];
                            arg1_01 = local_3f48;
                            local_3f94 = local_3f30->field_1120480 + (int)local_3f60;
                            iVar4 = local_3f30->field_1120484;
                            local_3fc8 =
                                (int*)(((uint64_t)local_3fc8._4_4_ << 32) | (uint32_t)local_3f30->field_7294676);
                            piVar17 = (int*)(*local_3fa0)[local_3f48];
                            iVar7 = *piVar17;
                            pvVar21 = (vector<int>*)(*local_3f90)[arg1_01];
                            local_3f78->CentreStringWave3(*local_3f80, local_3f94, iVar4 + (int)uVar24, (int)local_3f50,
                                                          0, (int)local_3fc8, 150 - iVar7, *pvVar21, *local_3f68);
                            uVar28 = uVar28 + 1;
                            iVar4 = local_3fe8.end();
                            uVar24 = (unsigned long)(unsigned int)((int)uVar24 + (int)(float)local_3f40);
                        } while ((long)uVar28 < (long)iVar4);
                    }
                    break;
                case 4:
                    piVar17 = (int*)(*local_3fa0)[local_3f48];
                    iVar4 = *piVar17;
                    pPVar19 = (PixfontGeneric*)(*local_3f70).operator->();
                    iVar7 = pPVar19->StringWid(*this_02);
                    local_3f68->SetSubClipping(local_3f30->field_1120480 + (int)local_3f60 - 50, (int)local_3f58,
                                               local_3f30->field_1120480 + 50 + (int)local_3f60, local_3f34);
                    local_3f40 = (PixfontGeneric*)(*local_3f70).operator->();
                    iVar4 = (int)((unsigned long)((long)((iVar7 + 100) * (150 - iVar4)) * -458129845) >> 32);
                    iVar7 = ((iVar4 >> 4) - (iVar4 >> 31)) + local_3fcc;
                    iVar4 = local_3f30->field_1120480;
                    iVar27 = local_3f30->field_1120484 + (int)local_3f58;
                    pvVar21 = (vector<int>*)(*local_3f90)[local_3f48];
                    local_3f40->DrawStringColourPattern(*this_02, iVar7 + iVar4, iVar27, (int)local_3f50, 0, *pvVar21,
                                                        *local_3f68);
                    local_3f68->SetClipping((int)local_3f60, (int)local_3f58, local_3f38, local_3f34);
                    break;
                case 5:
                    piVar17 = (int*)(*local_3fa0)[local_3f48];
                    iVar4 = *piVar17;
                    iVar7 = -(iVar4 - 25);
                    if (24 < iVar4) {
                        iVar7 = 0;
                    }
                    iVar27 = 125 - iVar4;
                    if (iVar4 < 126) {
                        iVar27 = iVar7;
                    }
                    iVar4 = local_3f30->field_1120484;
                    puVar20 = (unsigned int*)(*local_3f70).operator->();
                    local_3f68->SetSubClipping((int)local_3f60, ~*puVar20 + iVar4 + (int)local_3f58, local_3f38,
                                               local_3f30->field_1120484 + local_3fd0);
                    pPVar19 = (PixfontGeneric*)(*local_3f70).operator->();
                    iVar7 = local_3f30->field_1120480 + (int)local_3f60;
                    iVar27 = iVar27 + (int)local_3f58;
                    iVar4 = local_3f30->field_1120484;
                    pvVar21 = (vector<int>*)(*local_3f90)[local_3f48];
                    pPVar19->CentreStringColourPattern(*this_02, iVar7, iVar27 + iVar4, (int)local_3f50, 0, *pvVar21,
                                                       *local_3f68);
                    local_3f68->SetClipping((int)local_3f60, (int)local_3f58, local_3f38, local_3f34);
                }
                uVar24 = local_3f48;
                pCVar29 = local_3f30;
            LAB_1000fb7f2:
                uVar24 = uVar24 + 1;
            } while ((long)uVar24 < (long)pCVar29->field_1115872);
        }
    }

    // 0x1000fc550
    void Client::GdmCoordArrow(int arg1, int arg2) {
        uint8_t uVar1;
        uint64_t extraout_var;
        uint64_t uVar2;

        if (field_54888 == 2) {
            GetOverlayPos(field_51984, (field_54900 - field_53220) * 128 + field_54912,
                          (field_54904 - field_53224) * 128 + field_54916, field_54908 * 2);
            if (-1 < field_1120480) {
                if (field_8488 % 20 < 10) {
                    uVar1 = field_144->GetPix2D();
                    uVar2 = field_1115760[0];
                    (**(void (**)(...))(*(long*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) + 176))(
                        (long*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1), uVar2, arg1 + field_1120480 - 12,
                        arg2 - 28 + field_1120484);
                }
            }
        }
    }

    // 0x1000fc630
    void Client::GdmOtherOverlays() {
        GdmGetSpecialArea();
    }

    // 0x10010cff0
    void Client::GdmEntityOverlayPlayer(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        uint32_t in_register_0000003c;
        int in_stack_00000008;
        OverlayPos local_80;

        Client* client = (Client*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        shared_ptr<dash3d::GroundDecor>* groundDecor = &client->field_19216[(long)arg2];
        shared_ptr local_48(groundDecor);
        if (shared_ptr::operator_cast_to_bool(&local_48) == '\0') {
            LogAssert("player",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "client_entityoverlays.cpp",
                      28, "Invalid player in GdmEntityOverlayPlayer");
        }
        ClientEntity* pCVar2 = (ClientEntity*)*local_48;
        GetAllOverlayPositions((ReturnValue*)&local_80, client, pCVar2);
        pCVar2 = (ClientEntity*)local_48.operator->();
        auto local_60 = pCVar2->GetScriptedOverlays();
        GdmEntityOverlayScripted(client, &local_60, &local_80, 2, arg3, arg4, arg5, arg6, in_stack_00000008);
        GdmEntityOverlayScripted(client, &local_60, &local_80, 0, arg3, arg4, arg5, arg6, in_stack_00000008);
        pCVar2 = (ClientEntity*)*local_48;
        GdmEntityOverlayHardcodedOverhead(client, pCVar2, &local_80, true, arg2, arg3, arg4, arg5, arg6);
        GdmEntityOverlayScripted(client, &local_60, &local_80, 1, arg3, arg4, arg5, arg6, in_stack_00000008);
        OverlayPos* overlayPos = (OverlayPos*)*local_48;
        GdmEntityOverlayHitsplats((ClientEntity*)client, overlayPos, (int)&local_80, arg3, arg4, arg5);
    }

    // 0x10010d1c0
    OverlayPos Client::GetAllOverlayPositions(ClientEntity& clientEntity) {
        OverlayPos result;
        GetOverlayPos(clientEntity, *(int*)&clientEntity.field_424);
        result = field_1120480;
        *(int*)&result.field_4 = field_1120484;
        GetOverlayPos(clientEntity, *(int*)&clientEntity.field_424 / 2);
        *(int*)(&result + 1) = field_1120480;
        *(int*) && result[1].field_4 = field_1120484;
        GetOverlayPos(clientEntity, -15);
        *(int*)(&result + 2) = field_1120480;
        *(int*) && result[2].field_4 = field_1120484;
        *(uint8_t*)(&result + 3) = 1;
        return result;
    }

    // 0x10010d330
    void Client::GdmEntityOverlayScripted(const eastl::vector<unsigned long, BucketAllocatorEASTL>& arg1,
                                          OverlayPos& overlayPos, rs2lib::IfType::OverlayTypes overlayTypes, int arg4,
                                          int arg5, int arg6, int arg7, int arg8) {
        Array<shared_ptr<rs2lib::IfType>>* this_00;
        shared_ptr<rs2lib::IfType>* this_01;
        long lVar4;

        auto puVar2 = arg1.HeapBeginPtr();
        auto puVar3 = arg1.end();
        if (puVar2 != puVar3) {
            do {
                if (m_entityOverlays->OverlayExistsAtIndex((int)*puVar2) != '\0') {
                    this_00 = (Array<shared_ptr<rs2lib::IfType>>*)m_entityOverlays->GetOverlay((int)*puVar2);
                    if (this_00 != nullptr) {
                        this_01 = (shared_ptr<rs2lib::IfType>*)(*this_00)[0];
                        lVar4 = (*this_01).operator->();
                        if (*(OverlayTypes*)(lVar4 + 112) == overlayTypes) {
                            GdmEntityOverlayScriptedInner(*this_00, *this_01, *puVar2, overlayPos, arg4, arg5, arg6,
                                                          arg7, arg8);
                        }
                    }
                }
                puVar2 = puVar2 + 1;
            } while (puVar2 != puVar3);
        }
    }

    // 0x10010d420
    void Client::GdmEntityOverlayHardcodedOverhead(ClientEntity& clientEntity, OverlayPos& overlayPos, bool arg3,
                                                   int arg4, int arg5, int arg6, int arg7, int arg8) {
        uint32_t uVar1;
        int iVar2;
        Js5* js5;
        OverlayPos* pOVar3;
        bool bVar7;
        uint64_t extraout_var;
        uint32_t* puVar8;
        vector<int>* this_01;
        eastl::string* this_02;
        HeadbarQueue* pHVar9;
        shared_ptr<configdecoder::HeadbarType>* this_03;
        HeadbarType* pHVar10;
        shared_ptr<dash3d::GroundDecor>* psVar11;
        eastl::string* str;
        eastl::string* pbVar12;
        long lVar13;
        uint64_t uVar14;
        int* piVar15;
        unsigned long uVar16;
        uint64_t in_register_00000009;
        int iVar17;
        unsigned int uVar18;
        ClientPlayer* pCVar20;
        unsigned long uVar21;
        Array<graphics::Pix32>* this_08;
        int iVar22;
        unsigned int uVar23;
        unsigned int uVar25;
        ReturnValue local_f0;
        ListIterator<shared_ptr<rs2lib::worldmap::MapElement>, shared_ptr<rs2lib::worldmap::MapElement> const*,
                     shared_ptr<rs2lib::worldmap::MapElement> const&>* local_e8;
        list<shared_ptr<ClientObj>>* local_e0;
        ReturnValue local_c8;
        unsigned long local_a8;
        int local_a0;
        ReturnValue local_98;
        shared_ptr<configdecoder::HeadbarQueue>* local_88;
        shared_ptr local_78;
        ReturnValue local_68;
        unsigned int local_38;

        Client* local_48 = this;
        uint8_t uVar4 = field_144->GetPix2D();
        Pix2D* local_40 = (Pix2D*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar4);
        int local_d0 = arg7 + arg5;
        int local_cc = arg8 + arg6;
        local_40->SetClipping(arg5, arg6, local_d0, local_cc);
        int local_34 = *(int*)overlayPos;
        int* local_50 = (int*)&overlayPos.field_4;
        *(int*)&overlayPos.field_4 = *(int*)&overlayPos.field_4 + 2;
        uint8_t* puVar26 = &clientEntity.field_112;
        OverlayPos* local_60 = overlayPos;
        ClientPlayer* local_58 = (ClientPlayer*)clientEntity;
        bool cVar5 = puVar26->empty();
        Client* pCVar19 = local_48;
        int iVar24 = 2;
        uint32_t local_7c = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        if ((!cVar5) &&
            (((!arg3 ||
               ((*(char*)((long)&local_58->field_144 + 1) == '\0' &&
                 ((iVar17 = *(int*)&local_48->field_53304,
                   iVar17 == 4 || ((*(char*)&local_58->field_144 == '\0' &&
                                    (((iVar17 == 0 || (iVar17 == 3)) ||
                                      ((iVar17 == 1 && (cVar5 = local_58->IsOnlineFriend(), cVar5)))))))))))) &&
              ((-1 < local_34 && (pCVar19->field_1115872 < 50)))))) {
            iVar24 = ((PixfontGeneric*)pCVar19->field_1104240.operator->())->StringWid(*puVar26);
            piVar15 = &pCVar19->field_1116476[(long)pCVar19->field_1115872];
            *piVar15 = iVar24 / 2;
            puVar8 = (uint32_t*)pCVar19->field_1104240.operator->();
            uVar1 = *puVar8;
            puVar8 = &pCVar19->field_1116276[(long)pCVar19->field_1115872];
            *puVar8 = uVar1;
            piVar15 = &pCVar19->field_1115876[(long)pCVar19->field_1115872];
            *piVar15 = local_34;
            iVar24 = *local_50;
            piVar15 = &pCVar19->field_1116076[(long)pCVar19->field_1115872];
            pCVar20 = local_58;
            *piVar15 = iVar24;
            uVar1 = *(uint32_t*)((long)&local_58->field_148 + 4);
            puVar8 = &pCVar19->field_1116676[(long)pCVar19->field_1115872];
            *puVar8 = uVar1;
            uVar1 = pCVar20->field_156;
            puVar8 = &pCVar19->field_1116876[(long)pCVar19->field_1115872];
            *puVar8 = uVar1;
            uVar1 = *(uint32_t*)&pCVar20->field_148;
            puVar8 = &pCVar19->field_1117076[(long)pCVar19->field_1115872];
            *puVar8 = uVar1;
            local_c8 = ChatHelper::CreateColourArray(pCVar20->field_160);
            this_01 = &pCVar19->field_1117280[(long)pCVar19->field_1115872];
            *this_01 = local_c8;
            this_02 = &pCVar19->field_1118880[(long)pCVar19->field_1115872];
            *this_02 = puVar26;
            pCVar19->field_1115872 = pCVar19->field_1115872 + 1;
            iVar24 = -10;
        }
        pCVar20 = local_58;
        GetOverlayPos(pCVar19, (ClientEntity*)local_58, local_58->field_424 + 15);
        *(int*)local_60 = pCVar19->field_1120480;
        *(int*)&local_60->field_4 = iVar24 + pCVar19->field_1120484;
        puVar26 = &pCVar20->field_296;
        cVar5 = puVar26->empty();
        if (!cVar5) {
            local_68 = puVar26->begin();
            local_e0 = (list<shared_ptr<ClientObj>>*)puVar26;
            local_f0 = puVar26->end();
            cVar5 = local_68 != local_f0;
            bVar7 = false;
            pCVar19 = local_48;
            if (cVar5) {
                do {
                    local_88 = (shared_ptr<configdecoder::HeadbarQueue>*)*local_68;
                    pHVar9 = (HeadbarQueue*)(*local_88).operator->();
                    local_c8 = pHVar9->EventCurrent(pCVar19->field_8488);
                    if (local_c8 != nullptr) {
                        this_03 = (shared_ptr<configdecoder::HeadbarType>*)(*local_88).operator->();
                        pHVar10 = (HeadbarType*)(*this_03).operator->();
                        local_78 = pHVar10->GetEmptySprite();
                        pHVar10 = (HeadbarType*)(*this_03).operator->();
                        local_98 = pHVar10->GetFullSprite();
                        bVar7 = local_78 != nullptr;
                        if ((!bVar7) || (bVar7 = local_98 != nullptr, !bVar7)) {
                            lVar13 = (*this_03).operator->();
                            local_38 = *(unsigned int*)(lVar13 + 40);
                            local_a8 = 0;
                        } else {
                            lVar13 = (*this_03).operator->();
                            iVar24 = *(int*)(lVar13 + 44);
                            lVar13 = local_98.operator->();
                            local_a8 = 0;
                            if (iVar24 * 2 < *(int*)(lVar13 + 24)) {
                                lVar13 = (*this_03).operator->();
                                local_a8 = (unsigned long)*(unsigned int*)(lVar13 + 44);
                            }
                            lVar13 = local_98.operator->();
                            local_38 = *(int*)(lVar13 + 24) + (int)local_a8 * -2;
                        }
                        iVar24 = pCVar19->field_8488;
                        piVar15 = (int*)local_c8.operator->();
                        iVar24 = iVar24 - *piVar15;
                        lVar13 = local_c8.operator->();
                        iVar17 = *(int*)(lVar13 + 8);
                        lVar13 = (*this_03).operator->();
                        uVar23 = (int)(iVar17 * local_38) / *(int*)(lVar13 + 40);
                        lVar13 = local_c8.operator->();
                        if (iVar24 < *(int*)(lVar13 + 12)) {
                            lVar13 = (*this_03).operator->();
                            if (*(int*)(lVar13 + 20) == 0) {
                                iVar24 = 0;
                            } else {
                                lVar13 = (*this_03).operator->();
                                iVar17 = *(int*)(lVar13 + 20);
                                lVar13 = (*this_03).operator->();
                                iVar24 = (iVar24 / iVar17) * *(int*)(lVar13 + 20);
                            }
                            lVar13 = local_c8.operator->();
                            iVar17 = *(int*)(lVar13 + 4);
                            lVar13 = (*this_03).operator->();
                            iVar17 = (int)(iVar17 * local_38) / *(int*)(lVar13 + 40);
                            lVar13 = local_c8.operator->();
                            uVar23 = (int)((uVar23 - iVar17) * iVar24) / *(int*)(lVar13 + 12) + iVar17;
                        LAB_10010d98e:
                            uVar25 = 255;
                        } else {
                            lVar13 = local_c8.operator->();
                            iVar17 = *(int*)(lVar13 + 12);
                            lVar13 = (*this_03).operator->();
                            iVar22 = *(int*)(lVar13 + 24);
                            lVar13 = (*this_03).operator->();
                            if (*(int*)(lVar13 + 16) < 0)
                                goto LAB_10010d98e;
                            lVar13 = (*this_03).operator->();
                            iVar2 = *(int*)(lVar13 + 24);
                            lVar13 = (*this_03).operator->();
                            uVar25 = (((iVar17 - iVar24) + iVar22) * 256) / (iVar2 - *(int*)(lVar13 + 16));
                        }
                        lVar13 = local_c8.operator->();
                        uVar18 = uVar23;
                        if ((int)uVar23 < 1) {
                            uVar18 = 1;
                        }
                        if (*(int*)(lVar13 + 8) < 1) {
                            uVar18 = uVar23;
                        }
                        bVar7 = local_78 != nullptr;
                        if (bVar7) {
                            bVar7 = local_98 != nullptr;
                            uVar23 = local_38;
                            if (!bVar7)
                                goto LAB_10010dab0;
                            bVar7 = local_38 == uVar18;
                            iVar24 = (int)local_a8;
                            lVar13 = local_78.operator->();
                            pCVar19 = local_48;
                            iVar22 = (iVar24 << bVar7) + uVar18;
                            local_a0 = *(int*)&local_60->field_4;
                            iVar17 = local_a0 - *(int*)(lVar13 + 28);
                            *(int*)&local_60->field_4 = iVar17;
                            iVar17 = iVar17 + arg6;
                            iVar24 = *(int*)local_60 - (((int)uVar23 >> 1) + iVar24);
                            local_38 = uVar25;
                            if (uVar25 < 255) {
                                uVar14 = *local_78;
                                (**(void (**)(...))(local_40->field_0 + 232))(local_40, uVar14, iVar24, iVar17,
                                                                              local_38);
                                local_40->SetSubClipping(iVar24, iVar17, iVar22 + iVar24, local_a0 + arg6);
                                uVar14 = *local_98;
                                (**(void (**)(...))(local_40->field_0 + 232))(local_40, uVar14, iVar24, iVar17,
                                                                              local_38);
                            } else {
                                uVar14 = *local_78;
                                (**(void (**)(...))(local_40->field_0 + 176))(local_40, uVar14, iVar24, iVar17);
                                local_40->SetSubClipping(iVar24, iVar17, iVar22 + iVar24, local_a0 + arg6);
                                uVar14 = *local_98;
                                (**(void (**)(...))(local_40->field_0 + 176))(local_40, uVar14, iVar24, iVar17);
                            }
                            local_40->SetClipping(arg5, arg6, local_d0, local_cc);
                        } else {
                        LAB_10010dab0:
                            uVar23 = local_38;
                            pCVar19 = local_48;
                            iVar24 = *local_50 - 5;
                            *local_50 = iVar24;
                            if (-1 < local_34) {
                                iVar17 = *(int*)local_60 - ((int)local_38 >> 1);
                                (**(void (**)(...))(local_40->field_0 + 32))(local_40, iVar17, iVar24, uVar18, 5,
                                                                             65280);
                                (**(void (**)(...))(local_40->field_0 + 32))(local_40, iVar17 + uVar18, iVar24,
                                                                             uVar23 - uVar18, 5);
                            }
                        }
                        *local_50 = *local_50 - 2;
                        bVar7 = true;
                    }
                    pHVar9 = (HeadbarQueue*)(*local_88).operator->();
                    cVar5 = pHVar9->ListEmpty();
                    if (!cVar5) {
                        ++local_68;
                    } else {
                        new (&local_e8) eastl::ListIterator(&local_68);
                        eastl::list<shared_ptr<ClientObj>>::erase((ReturnValue*)&local_78, local_e0, local_e8);
                        local_68._4_4_ = local_78._4_4_;
                        local_68._0_4_ = local_78._0_4_;
                    }
                    cVar5 = local_68 != local_f0;
                } while (cVar5);
            }
        } else {
            bVar7 = false;
        }
        pCVar20 = local_58;
        if (!bVar7) {
            *local_50 = *local_50 - 7;
        }
        if ((char)local_7c != '\0') {
            if (*(int*)((long)&local_58->field_40 + 4) == pCVar19->field_8488) {
                cVar5 = ShouldRenderPlayerName(pCVar19, local_58);
                if (cVar5) {
                    GetOverlayPos(pCVar19, (ClientEntity*)pCVar20, pCVar20->field_424 + 15);
                    local_78._0_4_ = 1;
                    psVar11 = &pCVar19->field_19128[local_78];
                    local_c8 = shared_ptr(psVar11);
                    *local_50 = *local_50 - 4;
                    str = (eastl::string*)local_c8.operator->();
                    pbVar12 = ((DisplayName*)local_58->field_992.operator->())->GetDisplayName();
                    jstring::PixfontGeneric::CentreString(*str, (int)pbVar12, *(int*)local_60,
                                                          *(int*)&local_60->field_4, 16777215, nullptr);
                    *local_50 = *local_50 - 18;
                    pCVar20 = local_58;
                }
            }
            if ((char)local_7c != '\0') {
                if (pCVar20->field_1200 != '\0') {
                    return;
                }
                iVar24 = pCVar20->field_1024;
                if ((((long)iVar24 != 18446744073709551615) || (pCVar20->field_1028 != -1)) && (-1 < local_34)) {
                    if (iVar24 != -1) {
                        puVar26 = &local_48->field_1115712;
                        lVar13 = (*puVar26)[(long)iVar24];
                        pCVar19 = local_48;
                        pOVar3 = local_60;
                        *(int*)&local_60->field_4 = *(int*)&local_60->field_4 - *(int*)(lVar13 + 28);
                        uVar14 = (*puVar26)[(long)local_58->field_1024];
                        (**(void (**)(...))(local_40->field_0 + 176))(local_40, uVar14, *(int*)pOVar3 - 12,
                                                                      *(uint32_t*)&pOVar3->field_4);
                        pCVar20 = local_58;
                    }
                    if ((long)pCVar20->field_1028 != 18446744073709551615) {
                        puVar26 = &local_48->field_1115736;
                        lVar13 = (*puVar26)[(long)pCVar20->field_1028];
                        pCVar19 = local_48;
                        pOVar3 = local_60;
                        *(int*)&local_60->field_4 = *(int*)&local_60->field_4 - *(int*)(lVar13 + 28);
                        uVar14 = (*puVar26)[(long)pCVar20->field_1028];
                        (**(void (**)(...))(local_40->field_0 + 176))(local_40, uVar14, *(int*)pOVar3 - 12,
                                                                      *(uint32_t*)&pOVar3->field_4);
                    }
                }
                if (*(int*)&pCVar19->field_54896 != arg4) {
                    return;
                }
                if (pCVar19->field_54888 != 10) {
                    return;
                }
                if (local_34 < 0) {
                    return;
                }
                this_08 = (Array<graphics::Pix32>*)&pCVar19->field_1115760;
                lVar13 = (*this_08)[1];
                *local_50 = *local_50 - *(int*)(lVar13 + 28);
                uVar21 = 1;
                goto LAB_10010e0c3;
            }
        }
        auto this_05 = pCVar20->GetHeadIconGraphics();
        auto this_06 = pCVar20->GetHeadIconIndices();
        cVar5 = this_06->empty();
        if (((!cVar5) && (cVar5 = this_05->empty(), !cVar5)) && (lVar13 = this_06->size(), lVar13 != 0)) {
            local_88 = (shared_ptr<configdecoder::HeadbarQueue>*)&local_48->field_7305840;
            uVar21 = 0;
            do {
                piVar15 = (int*)(*this_06)[uVar21];
                if ((-1 < *piVar15) && (piVar15 = (int*)(*this_05)[uVar21], -1 < *piVar15)) {
                    piVar15 = (int*)(*this_05)[uVar21];
                    iVar24 = *piVar15;
                    piVar15 = (int*)(*this_06)[uVar21];
                    local_68 = (ReturnValue)((long)*piVar15 | (long)iVar24 << 8);
                    psVar11 = (shared_ptr<dash3d::GroundDecor>*)local_88->Find(local_68);
                    local_78 = shared_ptr(psVar11);
                    cVar5 = shared_ptr::operator_cast_to_bool(&local_78);
                    if (!cVar5) {
                        js5 = (Js5*)local_48->m_pSprites;
                        piVar15 = (int*)(*this_05)[uVar21];
                        local_c8 = graphics::pixloader::Makepix32Array(*js5, *piVar15, 0);
                        piVar15 = (int*)(*this_06)[uVar21];
                        iVar24 = *piVar15;
                        uVar16 = local_c8.end();
                        if ((unsigned long)(long)iVar24 < uVar16) {
                            piVar15 = (int*)(*this_06)[uVar21];
                            local_98 = ((Pix32*)local_c8[(long)*piVar15])->CopyUntrim();
                            local_78 = local_98;
                            local_88->Put(local_78, 1, local_68);
                        }
                    }
                    cVar5 = shared_ptr::operator_cast_to_bool(&local_78);
                    if ((cVar5) && (-1 < local_34)) {
                        lVar13 = local_78.operator->();
                        *local_50 = *local_50 - *(int*)(lVar13 + 28);
                        uVar14 = *local_78;
                        iVar24 = *(int*)local_60;
                        lVar13 = local_78.operator->();
                        (**(void (**)(...))(local_40->field_0 + 176))(local_40, uVar14,
                                                                      iVar24 - (*(int*)(lVar13 + 24) >> 1));
                        *local_50 = *local_50 - 2;
                    }
                }
                uVar21 = uVar21 + 1;
                uVar16 = this_06->size();
            } while (uVar21 < uVar16);
        }
        if (local_48->field_54888 != 1) {
            return;
        }
        if (*(int*)&local_48->field_54892 != arg4) {
            return;
        }
        if (local_34 < 0) {
            return;
        }
        *local_50 = *local_50 - 23;
        if (9 < local_48->field_8488 % 20) {
            return;
        }
        this_08 = (Array<graphics::Pix32>*)&local_48->field_1115760;
        uVar21 = 0;
    LAB_10010e0c3:
        uVar14 = (*this_08)[uVar21];
        (**(void (**)(...))(local_40->field_0 + 176))(local_40, uVar14, *(int*)local_60 - 12,
                                                      *(uint32_t*)&local_60->field_4);
    }

    // 0x10010e1e0
    void Client::GdmEntityOverlayHitsplats(ClientEntity& clientEntity, OverlayPos& overlayPos, int arg3, int arg4,
                                           int arg5, int arg6) {
        bool bVar2;
        unsigned int uVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int* piVar7;
        long lVar8;
        HitmarkType* pHVar9;
        PixfontGeneric* pPVar10;
        uint64_t uVar11;
        eastl::string* pbVar12;
        unsigned int uVar13;
        uint32_t in_register_0000000c;
        uint32_t in_register_00000014;
        int iVar14;
        unsigned long arg1;
        unsigned int uVar15;
        int iVar16;
        unsigned int uVar17;
        int iVar18;
        int in_stack_00000008;
        ReturnValue local_240;
        eastl::string local_220;
        array<int, 4ul>* local_200;
        array<int, 4ul>* local_1f8;
        array<int, 4ul>* local_1f0;
        array<int, 4ul>* local_1e8;
        array<int, 4ul>* local_1e0;
        int local_1c4;
        unsigned long local_1c0;
        shared_ptr<jstring::PixfontGeneric>* local_1b8;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_1b0;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_1a0;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_190;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_180;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_170;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_160;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_150;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_140;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_130;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_120;
        int local_110;
        int local_10c;
        int local_108;
        int local_104;
        unsigned long local_100;
        unsigned long local_f0;
        unsigned long local_e8;
        int local_e0;
        int local_dc;
        int local_d8;
        int local_d4;
        int local_d0;
        int local_cc;
        int local_c8;
        int local_c4;
        shared_ptr<RSevenDebugPresetProvider> local_c0;
        ReturnValue local_b0;
        int* local_90;
        int local_84;
        int local_80;
        int local_7c;
        int local_78;
        int local_74;
        unsigned long local_70;
        shared_ptr<RSevenDebugPresetProvider> local_68;
        unsigned long local_58;
        int local_50;
        int local_4c;
        int local_48;
        int local_44;
        unsigned long local_40;
        Pix2D* local_38;

        long local_1d8 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg3);
        uint64_t local_1d0 = (((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4);
        ClientEntity* local_f8 = clientEntity;
        if (overlayPos.HasHitmark(*(int*)&clientEntity[8].field_808)) {
            local_38 = (Pix2D*)(**(void (**)(...)) * *(uint64_t**)&local_f8->field_144)();
            iVar18 = (int)local_1d0;
            local_38->SetClipping(iVar18, arg5, arg6 + iVar18, in_stack_00000008 + arg5);
            local_200 = (array<int, 4ul>*)&overlayPos[9].field_19;
            local_1f8 = (array<int, 4ul>*)&overlayPos[8].field_12;
            local_1f0 = (array<int, 4ul>*)&overlayPos[10].field_10;
            local_1b8 = (shared_ptr<jstring::PixfontGeneric>*)&local_f8[1150].field_208;
            local_1e8 = (array<int, 4ul>*)&overlayPos[9].field_3;
            local_1e0 = (array<int, 4ul>*)&overlayPos[11].field_1;
            local_1c4 = arg5 - 12;
            local_104 = iVar18 + 2;
            arg1 = 0;
            do {
                local_90 = (int*)(*local_200)[arg1];
                iVar18 = *local_90;
                local_100 = arg1;
                piVar7 = (int*)(*local_1f8)[arg1];
                iVar5 = *piVar7;
                local_c0 = shared_ptr();
                if (iVar5 < 0) {
                    iVar5 = 0;
                    if (-1 < iVar18)
                        goto LAB_10010e44c;
                } else if (*(int*)&local_f8[8].field_808 < iVar18) {
                    local_b0 = configdecoder::HitmarkType::List(*piVar7);
                    local_c0 = local_b0;
                    lVar8 = local_c0.operator->();
                    iVar5 = *(int*)(lVar8 + 12);
                    bVar2 = local_c0 != nullptr;
                    if (bVar2) {
                        lVar8 = local_c0.operator->();
                        if (!(((lVar8 + 88))->empty())) {
                            pHVar9 = (HitmarkType*)local_c0.operator->();
                            local_b0 = pHVar9->GetMultiHitmark();
                            local_c0 = local_b0;
                            bVar2 = local_c0 == nullptr;
                            if (bVar2) {
                                *local_90 = -1;
                                goto LAB_10010e2f7;
                            }
                        }
                    }
                LAB_10010e44c:
                    piVar7 = (int*)(*local_1f0)[local_100];
                    iVar4 = *piVar7;
                    local_68 = shared_ptr();
                    if (-1 < iVar4) {
                        local_b0 = configdecoder::HitmarkType::List(iVar4);
                        local_68 = local_b0;
                        bVar2 = local_68 != nullptr;
                        if (bVar2) {
                            lVar8 = local_68.operator->();
                            if (!(((lVar8 + 88))->empty())) {
                                pHVar9 = (HitmarkType*)local_68.operator->();
                                local_b0 = pHVar9->GetMultiHitmark();
                                local_68 = local_b0;
                            }
                        }
                    }
                    if (iVar18 - iVar5 <= *(int*)&local_f8[8].field_808) {
                        bVar2 = local_c0 == nullptr;
                        if (bVar2) {
                            *local_90 = -1;
                        } else {
                            uVar17 = *(unsigned int*)(local_1d8 + 8);
                            if (-1 < (int)uVar17) {
                                uVar13 = *(unsigned int*)(local_1d8 + 12) - 20;
                                if (local_100 != 1) {
                                    uVar13 = *(unsigned int*)(local_1d8 + 12);
                                }
                                uVar3 = uVar17 - 15;
                                uVar15 = uVar13 - 10;
                                if (local_100 != 2) {
                                    uVar3 = uVar17;
                                    uVar15 = uVar13;
                                }
                                uVar17 = uVar15 - 10;
                                if (local_100 != 3) {
                                    uVar17 = uVar15;
                                }
                                local_40 = (unsigned long)uVar17;
                                uVar17 = uVar3 + 15;
                                if (local_100 != 3) {
                                    uVar17 = uVar3;
                                }
                                local_1c0 = (unsigned long)uVar17;
                                local_1a0 = shared_ptr();
                                local_190 = shared_ptr();
                                local_150 = shared_ptr();
                                local_140 = shared_ptr();
                                local_180 = shared_ptr();
                                local_170 = shared_ptr();
                                local_130 = shared_ptr();
                                local_120 = shared_ptr();
                                pHVar9 = (HitmarkType*)local_c0.operator->();
                                local_b0.GetIconSprite(pHVar9);
                                local_1a0 = local_b0;
                                bVar2 = local_1a0 != nullptr;
                                local_dc = 0;
                                local_e8 = 0;
                                if (bVar2) {
                                    lVar8 = local_1a0.operator->();
                                    local_e8 = (unsigned long)*(unsigned int*)(lVar8 + 24);
                                    local_1a0.operator->();
                                    lVar8 = local_1a0.operator->();
                                    local_dc = *(int*)(lVar8 + 32);
                                }
                                pHVar9 = (HitmarkType*)local_c0.operator->();
                                local_b0.GetBackgroundSprite(pHVar9);
                                local_190 = local_b0;
                                bVar2 = local_190 != nullptr;
                                local_d0 = 0;
                                local_50 = 0;
                                if (bVar2) {
                                    lVar8 = local_190.operator->();
                                    local_50 = *(int*)(lVar8 + 24);
                                    local_190.operator->();
                                    lVar8 = local_190.operator->();
                                    local_d0 = *(int*)(lVar8 + 32);
                                }
                                pHVar9 = (HitmarkType*)local_c0.operator->();
                                local_b0.GetBackgroundLeftSprite(pHVar9);
                                local_150 = local_b0;
                                bVar2 = local_150 != nullptr;
                                local_d8 = 0;
                                local_f0 = 0;
                                if (bVar2) {
                                    lVar8 = local_150.operator->();
                                    local_f0 = (unsigned long)*(unsigned int*)(lVar8 + 24);
                                    local_150.operator->();
                                    lVar8 = local_150.operator->();
                                    local_d8 = *(int*)(lVar8 + 32);
                                }
                                pHVar9 = (HitmarkType*)local_c0.operator->();
                                local_b0.GetBackgroundRightSprite(pHVar9);
                                local_140 = local_b0;
                                bVar2 = local_140 != nullptr;
                                local_d4 = 0;
                                iVar18 = 0;
                                if (bVar2) {
                                    lVar8 = local_140.operator->();
                                    iVar18 = *(int*)(lVar8 + 24);
                                    local_140.operator->();
                                    lVar8 = local_140.operator->();
                                    local_d4 = *(int*)(lVar8 + 32);
                                }
                                bVar2 = local_68 != nullptr;
                                local_7c = 0;
                                local_80 = 0;
                                local_78 = 0;
                                local_84 = 0;
                                local_44 = 0;
                                local_70 = 0;
                                local_4c = 0;
                                local_58 = 0;
                                if (bVar2) {
                                    pHVar9 = (HitmarkType*)local_68.operator->();
                                    local_b0.GetIconSprite(pHVar9);
                                    local_180 = local_b0;
                                    bVar2 = local_180 != nullptr;
                                    local_84 = 0;
                                    local_58 = 0;
                                    if (bVar2) {
                                        lVar8 = local_180.operator->();
                                        local_58 = (unsigned long)*(unsigned int*)(lVar8 + 24);
                                        local_180.operator->();
                                        lVar8 = local_180.operator->();
                                        local_84 = *(int*)(lVar8 + 32);
                                    }
                                    pHVar9 = (HitmarkType*)local_68.operator->();
                                    local_b0.GetBackgroundSprite(pHVar9);
                                    local_170 = local_b0;
                                    bVar2 = local_170 != nullptr;
                                    local_78 = 0;
                                    local_4c = 0;
                                    if (bVar2) {
                                        lVar8 = local_170.operator->();
                                        local_4c = *(int*)(lVar8 + 24);
                                        local_170.operator->();
                                        lVar8 = local_170.operator->();
                                        local_78 = *(int*)(lVar8 + 32);
                                    }
                                    pHVar9 = (HitmarkType*)local_68.operator->();
                                    local_b0.GetBackgroundLeftSprite(pHVar9);
                                    local_130 = local_b0;
                                    bVar2 = local_130 != nullptr;
                                    local_80 = 0;
                                    local_70 = 0;
                                    if (bVar2) {
                                        lVar8 = local_130.operator->();
                                        local_70 = (unsigned long)*(unsigned int*)(lVar8 + 24);
                                        local_130.operator->();
                                        lVar8 = local_130.operator->();
                                        local_80 = *(int*)(lVar8 + 32);
                                    }
                                    pHVar9 = (HitmarkType*)local_68.operator->();
                                    local_b0.GetBackgroundRightSprite(pHVar9);
                                    local_120 = local_b0;
                                    bVar2 = local_120 != nullptr;
                                    local_7c = 0;
                                    if (bVar2) {
                                        lVar8 = local_120.operator->();
                                        local_44 = *(int*)(lVar8 + 24);
                                        local_120.operator->();
                                        lVar8 = local_120.operator->();
                                        local_7c = *(int*)(lVar8 + 32);
                                    } else {
                                        local_44 = 0;
                                    }
                                }
                                local_1b0 = shared_ptr();
                                local_160 = shared_ptr();
                                pHVar9 = (HitmarkType*)local_c0.operator->();
                                local_b0 = pHVar9->GetFont();
                                local_1b0 = local_b0;
                                bVar2 = local_1b0 == nullptr;
                                if (bVar2) {
                                    local_1b0 = *local_1b8;
                                }
                                bVar2 = local_68 != nullptr;
                                if (bVar2) {
                                    pHVar9 = (HitmarkType*)local_68.operator->();
                                    local_b0 = pHVar9->GetFont();
                                    local_160 = local_b0;
                                    bVar2 = local_160 == nullptr;
                                    if (bVar2) {
                                        local_160 = *local_1b8;
                                    }
                                } else {
                                    local_160 = *local_1b8;
                                }
                                local_b0 = eastl::string();
                                local_220 = eastl::string();
                                pHVar9 = (HitmarkType*)local_c0.operator->();
                                piVar7 = (int*)(*local_1e8)[local_100];
                                local_240 = pHVar9->GetString(*piVar7);
                                local_b0 = &local_240;
                                pPVar10 = (PixfontGeneric*)local_1b0.operator->();
                                iVar4 = pPVar10->StringWid(local_b0);
                                bVar2 = local_68 != nullptr;
                                iVar16 = 0;
                                iVar5 = 0;
                                if (bVar2) {
                                    pHVar9 = (HitmarkType*)local_68.operator->();
                                    piVar7 = (int*)(*local_1e0)[local_100];
                                    local_240 = pHVar9->GetString(*piVar7);
                                    local_220 = &local_240;
                                    pPVar10 = (PixfontGeneric*)local_160.operator->();
                                    iVar5 = pPVar10->StringWid(local_220);
                                }
                                if (0 < local_50) {
                                    bVar2 = local_150 != nullptr;
                                    if (!bVar2) {
                                        bVar2 = local_140 != nullptr;
                                        iVar16 = 1;
                                        if (!bVar2)
                                            goto LAB_10010eca2;
                                    }
                                    iVar16 = iVar4 / local_50 + 1;
                                }
                            LAB_10010eca2:
                                bVar2 = local_68 != nullptr;
                                local_48 = 0;
                                if (bVar2 && 0 < local_4c) {
                                    bVar2 = local_130 != nullptr;
                                    if (!bVar2) {
                                        bVar2 = local_120 != nullptr;
                                        local_48 = 1;
                                        if (!bVar2)
                                            goto LAB_10010ecf9;
                                    }
                                    local_48 = iVar5 / local_4c + 1;
                                }
                            LAB_10010ecf9:
                                iVar6 = (int)local_e8;
                                local_e8 = local_e8 & 4294967295;
                                if (iVar6 < 0) {
                                    local_e8 = 0;
                                }
                                iVar6 = (int)local_f0;
                                local_f0 = local_f0 & 4294967295;
                                if (iVar6 < 0) {
                                    local_f0 = 0;
                                }
                                iVar14 = (int)local_f0 + (int)local_e8 + 2;
                                iVar6 = iVar4;
                                local_e0 = iVar14;
                                if (0 < local_50) {
                                    iVar6 = iVar16 * local_50;
                                    local_e0 = (iVar6 - iVar4) / 2 + iVar14;
                                }
                                if (iVar18 < 0) {
                                    iVar18 = 0;
                                }
                                bVar2 = local_68 != nullptr;
                                local_10c = iVar6 + iVar14;
                                uVar17 = iVar18 + local_10c;
                                if (bVar2) {
                                    iVar18 = (int)local_58;
                                    if (iVar18 < 0) {
                                        iVar18 = 0;
                                    }
                                    iVar4 = (int)local_70;
                                    if (iVar4 < 0) {
                                        iVar4 = 0;
                                    }
                                    local_108 = iVar4 + iVar18 + uVar17 + 4;
                                    if (local_4c < 1) {
                                        local_74 = local_108;
                                    } else {
                                        local_74 = (local_48 * local_4c - iVar5) / 2 + local_108;
                                        iVar5 = local_48 * local_4c;
                                    }
                                    local_cc = uVar17 + 2;
                                    local_c8 = iVar18 + uVar17 + 4;
                                    local_c4 = iVar5 + local_108;
                                    iVar18 = local_44;
                                    if (local_44 < 0) {
                                        iVar18 = 0;
                                    }
                                    uVar17 = iVar18 + local_c4;
                                } else {
                                    local_cc = 0;
                                    local_c8 = 0;
                                    local_108 = 0;
                                    local_c4 = 0;
                                    local_74 = 0;
                                }
                                local_58 = (unsigned long)uVar17;
                                iVar6 = *local_90 - *(int*)&local_f8[8].field_808;
                                lVar8 = local_c0.operator->();
                                local_70 = (((uint64_t)local_70._4_4_ << 32) | (uint32_t)(*(uint32_t*)(lVar8 + 32)));
                                lVar8 = local_c0.operator->();
                                iVar18 = *(int*)(lVar8 + 32);
                                lVar8 = local_c0.operator->();
                                local_44 = (iVar18 * iVar6) / *(int*)(lVar8 + 12);
                                lVar8 = local_c0.operator->();
                                iVar18 = *(int*)(lVar8 + 36);
                                lVar8 = local_c0.operator->();
                                iVar5 = *(int*)(lVar8 + 36);
                                lVar8 = local_c0.operator->();
                                iVar4 = *(int*)(lVar8 + 12);
                                lVar8 = local_c0.operator->();
                                iVar18 = (iVar5 * iVar6) / iVar4 - iVar18;
                                uVar17 = (int)local_40 + local_1c4;
                                local_40 = (unsigned long)uVar17;
                                iVar5 = iVar18 + uVar17 + 15;
                                local_110 = *(int*)(lVar8 + 84) + iVar5;
                                local_1b0.operator->();
                                local_1b0.operator->();
                                bVar2 = local_68 != nullptr;
                                local_90 = (int*)((unsigned long)local_90 & 18446744069414584320);
                                if (bVar2) {
                                    lVar8 = local_68.operator->();
                                    local_90._0_4_ = *(int*)(lVar8 + 84);
                                    local_160.operator->();
                                    local_160.operator->();
                                    local_90 =
                                        (int*)(((uint64_t)local_90._4_4_ << 32) | (uint32_t)((int)local_90 + iVar5));
                                }
                                lVar8 = local_c0.operator->();
                                if (*(int*)(lVar8 + 40) < 0) {
                                    uVar17 = 255;
                                } else {
                                    lVar8 = local_c0.operator->();
                                    iVar5 = *(int*)(lVar8 + 12);
                                    lVar8 = local_c0.operator->();
                                    uVar17 = (iVar6 * 256) / (iVar5 - *(int*)(lVar8 + 40));
                                }
                                iVar5 = (int)local_e8 + 2;
                                iVar4 = (int)local_1c0 + (int)local_1d0;
                                uVar13 = (int)local_58 >> 1;
                                local_58 = (unsigned long)uVar13;
                                iVar6 = (iVar4 - uVar13) + ((int)local_70 - local_44);
                                local_40 = (unsigned long)(unsigned int)((int)local_40 + iVar18);
                                if (uVar17 < 255) {
                                    bVar2 = local_1a0 != nullptr;
                                    if (bVar2) {
                                        uVar11 = *local_1a0;
                                        (**(void (**)(...))(local_38->field_0 + 232))(
                                            local_38, uVar11, iVar6 - local_dc, local_40, uVar17);
                                    }
                                    bVar2 = local_150 != nullptr;
                                    if (bVar2) {
                                        uVar11 = *local_150;
                                        (**(void (**)(...))(local_38->field_0 + 232))(
                                            local_38, uVar11, (iVar5 + iVar6) - local_d8, local_40, uVar17);
                                    }
                                    bVar2 = local_190 != nullptr;
                                    if ((bVar2) && (0 < iVar16)) {
                                        iVar18 = ((((int)local_1c0 + local_104 + (int)local_70 + (int)local_e8 +
                                                    (int)local_f0) -
                                                   local_d0) -
                                                  (int)local_58) -
                                                 local_44;
                                        do {
                                            uVar11 = *local_190;
                                            (**(void (**)(...))(local_38->field_0 + 232))(local_38, uVar11, iVar18,
                                                                                          local_40, uVar17);
                                            iVar18 = iVar18 + local_50;
                                            iVar16 = iVar16 - 1;
                                        } while (iVar16 != 0);
                                    }
                                    bVar2 = local_140 != nullptr;
                                    if (bVar2) {
                                        uVar11 = *local_140;
                                        (**(void (**)(...))(local_38->field_0 + 232))(
                                            local_38, uVar11, (local_10c + iVar6) - local_d4, local_40, uVar17);
                                    }
                                    pPVar10 = (PixfontGeneric*)local_1b0.operator->();
                                    lVar8 = local_c0.operator->();
                                    pPVar10->DrawStringTrans(local_b0, local_e0 + iVar6, local_110, *(int*)(lVar8 + 8),
                                                             0, uVar17, *local_38);
                                    bVar2 = local_68 != nullptr;
                                    if (bVar2) {
                                        bVar2 = local_180 != nullptr;
                                        if (bVar2) {
                                            uVar11 = *local_180;
                                            (**(void (**)(...))(local_38->field_0 + 232))(
                                                local_38, uVar11, (local_cc + iVar6) - local_84, local_40, uVar17);
                                        }
                                        bVar2 = local_130 != nullptr;
                                        if (bVar2) {
                                            uVar11 = *local_130;
                                            (**(void (**)(...))(local_38->field_0 + 232))(
                                                local_38, uVar11, (local_c8 + iVar6) - local_80, local_40, uVar17);
                                        }
                                        bVar2 = local_170 != nullptr;
                                        if ((bVar2) && (0 < local_48)) {
                                            iVar18 =
                                                (((iVar4 + local_108 + (int)local_70) - local_78) - (int)local_58) -
                                                local_44;
                                            do {
                                                uVar11 = *local_170;
                                                (**(void (**)(...))(local_38->field_0 + 232))(local_38, uVar11, iVar18,
                                                                                              local_40, uVar17);
                                                iVar18 = iVar18 + local_4c;
                                                local_48 = local_48 - 1;
                                            } while (local_48 != 0);
                                        }
                                        bVar2 = local_120 != nullptr;
                                        if (bVar2) {
                                            uVar11 = *local_120;
                                            (**(void (**)(...))(local_38->field_0 + 232))(
                                                local_38, uVar11, (local_c4 + iVar6) - local_7c, local_40, uVar17);
                                        }
                                        pPVar10 = (PixfontGeneric*)local_160.operator->();
                                        lVar8 = local_68.operator->();
                                        pPVar10->DrawStringTrans(local_220, iVar6 + local_74, (int)local_90,
                                                                 *(int*)(lVar8 + 8), 0, uVar17, *local_38);
                                    }
                                } else {
                                    bVar2 = local_1a0 != nullptr;
                                    if (bVar2) {
                                        uVar11 = *local_1a0;
                                        (**(void (**)(...))(local_38->field_0 + 176))(local_38, uVar11,
                                                                                      iVar6 - local_dc, local_40);
                                    }
                                    bVar2 = local_150 != nullptr;
                                    if (bVar2) {
                                        uVar11 = *local_150;
                                        (**(void (**)(...))(local_38->field_0 + 176))(
                                            local_38, uVar11, (iVar5 + iVar6) - local_d8, local_40);
                                    }
                                    bVar2 = local_190 != nullptr;
                                    if ((bVar2) && (0 < iVar16)) {
                                        iVar18 = ((((int)local_1c0 + local_104 + (int)local_70 + (int)local_e8 +
                                                    (int)local_f0) -
                                                   local_d0) -
                                                  (int)local_58) -
                                                 local_44;
                                        do {
                                            uVar11 = *local_190;
                                            (**(void (**)(...))(local_38->field_0 + 176))(local_38, uVar11, iVar18,
                                                                                          local_40);
                                            iVar18 = iVar18 + local_50;
                                            iVar16 = iVar16 - 1;
                                        } while (iVar16 != 0);
                                    }
                                    bVar2 = local_140 != nullptr;
                                    if (bVar2) {
                                        uVar11 = *local_140;
                                        (**(void (**)(...))(local_38->field_0 + 176))(
                                            local_38, uVar11, (local_10c + iVar6) - local_d4, local_40);
                                    }
                                    pbVar12 = (eastl::string*)local_1b0.operator->();
                                    lVar8 = local_c0.operator->();
                                    jstring::PixfontGeneric::DrawString(
                                        *pbVar12, (int)&local_b0, local_e0 + iVar6, local_110,
                                        *(unsigned int*)(lVar8 + 8) | 4278190080, nullptr);
                                    bVar2 = local_68 != nullptr;
                                    if (bVar2) {
                                        bVar2 = local_180 != nullptr;
                                        if (bVar2) {
                                            uVar11 = *local_180;
                                            (**(void (**)(...))(local_38->field_0 + 176))(
                                                local_38, uVar11, (local_cc + iVar6) - local_84, local_40);
                                        }
                                        bVar2 = local_130 != nullptr;
                                        if (bVar2) {
                                            uVar11 = *local_130;
                                            (**(void (**)(...))(local_38->field_0 + 176))(
                                                local_38, uVar11, (local_c8 + iVar6) - local_80, local_40);
                                        }
                                        bVar2 = local_170 != nullptr;
                                        if ((bVar2) && (0 < local_48)) {
                                            iVar18 =
                                                (((iVar4 + local_108 + (int)local_70) - local_78) - (int)local_58) -
                                                local_44;
                                            do {
                                                uVar11 = *local_170;
                                                (**(void (**)(...))(local_38->field_0 + 176))(local_38, uVar11, iVar18,
                                                                                              local_40);
                                                iVar18 = iVar18 + local_4c;
                                                local_48 = local_48 - 1;
                                            } while (local_48 != 0);
                                        }
                                        bVar2 = local_120 != nullptr;
                                        if (bVar2) {
                                            uVar11 = *local_120;
                                            (**(void (**)(...))(local_38->field_0 + 176))(
                                                local_38, uVar11, (local_c4 + iVar6) - local_7c, local_40);
                                        }
                                        pbVar12 = (eastl::string*)local_160.operator->();
                                        lVar8 = local_68.operator->();
                                        jstring::PixfontGeneric::DrawString(
                                            *pbVar12, (int)&local_220, iVar6 + local_74, (int)local_90,
                                            *(unsigned int*)(lVar8 + 8) | 4278190080, nullptr);
                                    }
                                }
                            }
                        }
                    }
                }
            LAB_10010e2f7:
                arg1 = local_100 + 1;
            } while (arg1 != 4);
        }
    }

    // 0x10010f930
    void Client::GdmEntityOverlayNPC(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        ClientEntity* pCVar4;
        OverlayPos* overlayPos;
        uint32_t in_register_0000003c;
        int in_stack_00000008;
        OverlayPos local_a0;
        ReturnValue local_70;
        ReturnValue local_60;

        Client* this_01 = (Client*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        shared_ptr* shared_ptr = &this_01->field_55272[(long)arg2];
        bool cVar1 = shared_ptr::operator_cast_to_bool(shared_ptr);
        if (!cVar1) {
            LogAssert("npc",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "client_entityoverlays.cpp",
                      45, "Invalid NPC in GdmEntityOverlayNPC");
        }
        long lVar3 = (*shared_ptr).operator->();
        shared_ptr<dash3d::Decor> local_80((lVar3 + 1024));
        lVar3 = local_80.operator->();
        cVar1 = ((lVar3 + 488))->empty();
        bool bVar2 = true;
        if (!cVar1) {
            local_70 = ((NpcType*)local_80.operator->())->GetMultiNpc();
            bVar2 = local_70 != nullptr;
        }
        if (bVar2 != false) {
            pCVar4 = (ClientEntity*)**shared_ptr;
            GetAllOverlayPositions((ReturnValue*)&local_a0, this_01, pCVar4);
            pCVar4 = (ClientEntity*)(*shared_ptr).operator->();
            local_60 = pCVar4->GetScriptedOverlays();
            GdmEntityOverlayScripted(this_01, &local_60, &local_a0, 2, arg3, arg4, arg5, arg6, in_stack_00000008);
            GdmEntityOverlayScripted(this_01, &local_60, &local_a0, 0, arg3, arg4, arg5, arg6, in_stack_00000008);
            pCVar4 = (ClientEntity*)**shared_ptr;
            GdmEntityOverlayHardcodedOverhead(this_01, pCVar4, &local_a0, false, arg2, arg3, arg4, arg5, arg6);
            GdmEntityOverlayScripted(this_01, &local_60, &local_a0, 1, arg3, arg4, arg5, arg6, in_stack_00000008);
            overlayPos = (OverlayPos*)**shared_ptr;
            GdmEntityOverlayHitsplats((ClientEntity*)this_01, overlayPos, (int)&local_a0, arg3, arg4, arg5);
        }
    }

    // 0x10010fbd0
    void Client::GdmEntityOverlayTile(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8) {
        rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
               eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true>,
               eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>* this_00;
        OverlayPos local_68;

        local_48._12_4_ = arg5;
        CoordGrid local_48(arg1, arg2, arg3);
        if (m_entityOverlays->AnyOverlaysOnTile(local_48)) {
            this_00 = (rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                              eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true>,
                              eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>*)
                          m_entityOverlays->GetOverlaysForEntityUnchecked(local_48, 4);
            if (!(this_00->empty())) {
                GetAllOverlayPositionsTile((ReturnValue*)&local_68, this, arg1, arg2, arg3);
                GdmEntityOverlayScripted(*this_00, local_68, arg4, local_48._12_4_, arg6, arg7, arg8);
            }
        }
    }

    // 0x10010fc90
    OverlayPos Client::GetAllOverlayPositionsTile(int arg1, int arg2, int arg3) {
        OverlayPos result;
        int arg2_00 = FineCentreCoordFromGridCoord(arg2);
        int arg3_00 = FineCentreCoordFromGridCoord(arg3);
        int iVar1 = ((world*)field_19184.operator->())->GetTableHeightOnTile(arg1, arg2, arg3);
        GetOverlayPos(arg1, arg2_00, arg3_00, iVar1 + 15);
        result = field_1120480;
        *(int*)&result.field_4 = field_1120484;
        GetOverlayPos(arg1, arg2_00, arg3_00, iVar1 / 2);
        *(int*)(&result + 1) = field_1120480;
        *(int*) && result[1].field_4 = field_1120484;
        GetOverlayPos(arg1, arg2_00, arg3_00, 0);
        *(int*)(&result + 2) = field_1120480;
        *(int*) && result[2].field_4 = field_1120484;
        *(uint8_t*)(&result + 3) = 1;
        return result;
    }

    // 0x10010fd90
    void Client::GdmEntityOverlayScripted(const eastl::fixed_map<int, unsigned long, 1ul>& fixed_map,
                                          OverlayPos& overlayPos, int arg3, int arg4, int arg5, int arg6, int arg7) {
        uint8_t* this_00;
        long lVar2;
        Array<shared_ptr<rs2lib::IfType>>* this_01;
        shared_ptr<rs2lib::IfType>* ifType;

        uint64_t local_50 = fixed_map.begin();
        uint64_t local_48 = fixed_map.end();
        bool cVar1 = local_50 != local_48;
        if (cVar1) {
            this_00 = m_entityOverlays;
            do {
                lVar2 = *local_50;
                cVar1 = this_00->OverlayExistsAtIndex(*(int*)(lVar2 + 8));
                if (cVar1) {
                    this_01 = (Array<shared_ptr<rs2lib::IfType>>*)this_00->GetOverlay(*(int*)(lVar2 + 8));
                    if (this_01 != nullptr) {
                        ifType = (shared_ptr<rs2lib::IfType>*)(*this_01)[0];
                        GdmEntityOverlayScriptedInner(*this_01, *ifType, *(unsigned long*)(lVar2 + 8), overlayPos, arg3,
                                                      arg4, arg5, arg6, arg7);
                    }
                }
                ++local_50;
                cVar1 = local_50 != local_48;
            } while (cVar1);
        }
    }

    // 0x10010fe90
    void Client::GdmEntityOverlayLoc(int arg1, int arg2, int arg3, LocLayer locLayer, int arg5, int arg6, int arg7,
                                     int arg8, int arg9) {
        int iVar4;
        world* pwVar5;
        long lVar6;
        ShaderVariablePrecision SVar7;
        ShaderVariablePrecision SVar8;
        ReturnValue local_98;
        uint64_t uStack_87;
        char cStack_80;
        ReturnValue local_70;
        uint8_t uStack_58;
        shared_ptr local_48;

        CoordGrid local_b8(arg1, arg2, arg3);
        bool cVar2 = m_entityOverlays->AnyOverlaysOnTile(local_b8);
        if (!cVar2) {
            return;
        }
        int iVar3 = ((ClientBuild*)(unsigned long)(unsigned int)arg1)->GetLinkBelowLevel(arg2, arg3, arg3);
        auto this_01 = m_entityOverlays->GetOverlaysForEntityUnchecked(local_b8, locLayer & 255);
        cVar2 = this_01->empty();
        int iVar9 = arg3;
        if (cVar2) {
            return;
        }
        fixed_map<int, unsigned long, _1ul>* local_a0 = (fixed_map<int, unsigned long, _1ul>*)this_01;
        int local_34 = iVar3;
        new (&local_98) OverlayPos();
        if ((uint8_t)(uint8_t)locLayer < 4) {
            switch ((uint8_t)locLayer) {
            case 0:
                pwVar5 = (world*)field_19184.operator->();
                local_48 = pwVar5->GetWall(local_34, arg2, iVar9);
                cVar2 = shared_ptr::operator_cast_to_bool(&local_48);
                if (cVar2) {
                    lVar6 = local_48.operator->();
                    cVar2 = ((lVar6 + 24))->operator_cast_to_bool();
                    SVar8 = 0;
                    if (cVar2) {
                        lVar6 = local_48.operator->();
                        lVar6 = (*((lVar6 + 24))).operator->();
                        SVar8 = *(ShaderVariablePrecision*)(lVar6 + 8);
                    }
                    lVar6 = local_48.operator->();
                    cVar2 = ((lVar6 + 40))->operator_cast_to_bool();
                    SVar7 = 0;
                    if (cVar2) {
                        lVar6 = local_48.operator->();
                        lVar6 = (*((lVar6 + 40))).operator->();
                        SVar7 = *(ShaderVariablePrecision*)(lVar6 + 8);
                    }
                    lVar6 = local_48.operator->();
                    iVar9 = *(int*)(lVar6 + 4);
                    lVar6 = local_48.operator->();
                    iVar3 = *(int*)(lVar6 + 8);
                    iVar4 = eastl::max<int>(SVar8, SVar7);
                    GetAllOverlayPositionsLoc(&local_70, this, local_34, iVar9, iVar3, iVar4);
                    uStack_87 = local_70[2]._1_7_;
                    cStack_80 = uStack_58;
                    local_98 = local_70[0];
                }
                break;
            case 1:
                pwVar5 = (world*)field_19184.operator->();
                local_48 = pwVar5->GetDecor(local_34, arg2, iVar9);
                cVar2 = shared_ptr::operator_cast_to_bool(&local_48);
                if (cVar2) {
                    lVar6 = local_48.operator->();
                    cVar2 = ((lVar6 + 32))->operator_cast_to_bool();
                    SVar8 = 0;
                    if (cVar2) {
                        lVar6 = local_48.operator->();
                        lVar6 = (*((lVar6 + 32))).operator->();
                        SVar8 = *(ShaderVariablePrecision*)(lVar6 + 8);
                    }
                    lVar6 = local_48.operator->();
                    cVar2 = ((lVar6 + 48))->operator_cast_to_bool();
                    SVar7 = 0;
                    if (cVar2) {
                        lVar6 = local_48.operator->();
                        lVar6 = (*((lVar6 + 48))).operator->();
                        SVar7 = *(ShaderVariablePrecision*)(lVar6 + 8);
                    }
                    lVar6 = local_48.operator->();
                    iVar9 = *(int*)(lVar6 + 4);
                    lVar6 = local_48.operator->();
                    iVar3 = *(int*)(lVar6 + 8);
                    iVar4 = eastl::max<int>(SVar8, SVar7);
                    GetAllOverlayPositionsLoc(&local_70, this, local_34, iVar9, iVar3, iVar4);
                    uStack_87 = local_70[2]._1_7_;
                    cStack_80 = uStack_58;
                    local_98 = local_70[0];
                }
                break;
            case 2:
                pwVar5 = (world*)field_19184.operator->();
                local_48 = pwVar5->GetScene(local_34, arg2, iVar9);
                cVar2 = shared_ptr::operator_cast_to_bool(&local_48);
                if (cVar2) {
                    lVar6 = local_48.operator->();
                    iVar3 = local_34;
                    cVar2 = ((lVar6 + 32))->operator_cast_to_bool();
                    iVar9 = 0;
                    if (cVar2) {
                        lVar6 = local_48.operator->();
                        lVar6 = (*((lVar6 + 32))).operator->();
                        iVar9 = *(int*)(lVar6 + 8);
                    }
                    lVar6 = local_48.operator->();
                    iVar4 = *(int*)(lVar6 + 8);
                    lVar6 = local_48.operator->();
                    GetAllOverlayPositionsLoc(&local_70, this, iVar3, iVar4, *(int*)(lVar6 + 12), iVar9);
                    uStack_87 = local_70[2]._1_7_;
                    cStack_80 = uStack_58;
                    local_98 = local_70[0];
                }
                goto LAB_100110227;
            case 3:
                pwVar5 = (world*)field_19184.operator->();
                local_48 = pwVar5->GetGroundDecor(local_34, arg2, iVar9);
                cVar2 = shared_ptr::operator_cast_to_bool(&local_48);
                if (cVar2) {
                    lVar6 = local_48.operator->();
                    iVar3 = local_34;
                    cVar2 = ((lVar6 + 16))->operator_cast_to_bool();
                    iVar9 = 0;
                    if (cVar2) {
                        lVar6 = local_48.operator->();
                        lVar6 = (*((lVar6 + 16))).operator->();
                        iVar9 = *(int*)(lVar6 + 8);
                    }
                    lVar6 = local_48.operator->();
                    iVar4 = *(int*)(lVar6 + 4);
                    lVar6 = local_48.operator->();
                    GetAllOverlayPositionsLoc(&local_70, this, iVar3, iVar4, *(int*)(lVar6 + 8), iVar9);
                    uStack_87 = local_70[2]._1_7_;
                    cStack_80 = uStack_58;
                    local_98 = local_70[0];
                }
            }
        } else {
        LAB_100110227:
        }
        if (cStack_80 == '\0') {
            LogAssert("pos.m_valid",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "client_entityoverlays.cpp",
                      146, nullptr);
        }
        GdmEntityOverlayScripted(this, local_a0, (OverlayPos*)&local_98, arg5, arg6, arg7, arg8, arg9);
    }

} // namespace jag::oldscape
