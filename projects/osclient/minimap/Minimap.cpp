// projects/osclient/minimap/Minimap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "Minimap.h"

namespace jag::oldscape::minimap {
    // 0x10005fe50: Minimap::SetLevel(int) has the same machine code as widgets::Widget::SetBorderColour(unsigned int)

    // 0x100069240
    Minimap::Minimap() : field_0(0), field_4(0), field_8(1), m_level(-1) {
        long lVar1;

        ___bzero(&field_16, 25616);
        long lVar3 = 0;
        Minimap* pMVar2 = this;
        do {
            lVar1 = 0;
            do {
                *(uint64_t*)(&pMVar2->field_32 + lVar1) = 0;
                *(uint32_t*)(&pMVar2->field_40 + lVar1) = 4294967295;
                new ((&pMVar2->field_48 + lVar1)) shared_ptr();
                lVar1 = lVar1 + 32;
            } while (lVar1 != 6400);
            lVar3 = lVar3 + 1;
            pMVar2 = (Minimap*)&pMVar2->field_6400;
        } while (lVar3 != 4);
        new (&field_25632) eastl::vector_map<int, graphics::Pix32>();
        new (&field_25672) graphics::Pix32();
        m_zoom = 4;
        new (&field_25728) graphics::NXTPix2D(1, 1);
        m_toggle = 0;
        m_zoomable = true;
        m_iconZoomLimit = 3;
        new (&field_25800) std::array<shared_ptr<graphics::Pix32>, 7ul>();
        new (&field_26024) shared_ptr();
        new (&field_26040) shared_ptr();
        field_26056 = nullptr;
        new (&field_26064) shared_ptr();
        new (&field_26080) shared_ptr();
        new (&field_26096) Array<graphics::Pix32>();
        new (&field_26120) Array<graphics::Pix32>();
    }

    // 0x100069550
    Minimap::~Minimap() {
        Destroy();
        field_26120.~Array();
        field_26096.~Array();
        field_26080.~shared_ptr();
        field_26064.~shared_ptr();
        field_26040.~shared_ptr();
        field_26024.~shared_ptr();
        field_25800.~array();
        field_25728.~NXTPix2D();
        field_32.~array();
    }

    // 0x100069680
    void Minimap::Destroy() {

        field_25632.clear();
        field_26096.clear();
        field_26120.clear();
        field_26040.reset();
        field_26064.reset();
        field_26080.reset();
        field_26024.reset();
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_30;
        field_25800.fill(local_30);
        field_26056 = nullptr;
    }

    // 0x100069750
    char Minimap::TryLoadResources(shared_ptr<Array<graphics::Pix8>> pix8s, graphics::NXTPixToolkit* nxtPixToolkit,
                                   defaults::GraphicsDefaults graphicsDefaults, jagex3::Js5* js5) {
        ReturnValue local_48;

        field_26040 = *pix8s;
        field_26056 = nxtPixToolkit;
        bool bVar1 = field_26064 == nullptr;
        char cVar3 = !bVar1;
        if (!cVar3) {
            local_48 = graphics::pixloader::Makepix32(*js5, graphicsDefaults.field_4, 0);
            field_26064 = local_48;
        }
        bVar1 = field_26080 == nullptr;
        if (bVar1) {
            local_48 = graphics::pixloader::Makepix32(*js5, graphicsDefaults.field_8, 0);
            field_26080 = local_48;
        } else {
            cVar3 = cVar3 + '\x01';
        }
        if (!(field_26096.empty())) {
            cVar3 = cVar3 + '\x01';
        } else {
            local_48 = graphics::pixloader::Makepix32Array(*js5, graphicsDefaults.field_28, 0);
            field_26096 = local_48;
        }
        if (!(field_26120.empty())) {
            cVar3 = cVar3 + '\x01';
        } else {
            local_48 = graphics::pixloader::Makepix32Array(*js5, graphicsDefaults.field_36, 0);
            field_26120 = local_48;
        }
        return cVar3;
    }

    // 0x1000698e0
    void Minimap::SetDotStyles(shared_ptr<jstring::PixfontGeneric> pixfontGeneric) {
        long lVar1;

        unsigned long arg1 = 0;
        SetDotStyle(0, 1168916, 1159950, 0);
        SetDotStyle(1, 3017694, 660628, 0);
        SetDotStyle(2, 10948840, 5178457, 0);
        SetDotStyle(3, 15443721, 12224013, 0);
        SetDotStyle(4, 16777215, 14606046, 0);
        SetDotStyle(5, 16711680, 12386304, 0);
        SetDotStyle(6, 16773632, 13221632, 0);
        do {
            lVar1 = field_25912[arg1];
            *(uint16_t*)(lVar1 + 12) = 1;
            arg1 = arg1 + 1;
        } while (arg1 != 7);
        field_26024 = *pixfontGeneric;
    }

    // 0x1000699f0
    void Minimap::SetDotStyle(MiniDotCategory miniDotCategory, unsigned int arg2, unsigned int arg3, int arg4) {
        unsigned int* puVar3;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        Pix32* pPVar4;
        unsigned int uVar5;
        ReturnValue local_50;
        unsigned int local_40;
        unsigned int local_3c;

        if ((miniDotCategory < 7) && (-1 < arg4)) {
            puVar3 = &field_25912[(unsigned long)miniDotCategory];
            uVar5 = *puVar3;
            local_40 = puVar3[1];
            local_3c = puVar3[2];
            midiPlayerMainThread =
                (shared_ptr<midi2::MidiPlayerMainThread>*)field_25800[(unsigned long)miniDotCategory];
            if ((!*midiPlayerMainThread != nullptr) ||
                (((uVar5 != arg2 || (local_40 != arg3)) || (local_3c != (unsigned int)arg4)))) {
                midiPlayerMainThread->reset();
                pPVar4 = &field_26120[2];
                local_50 = pPVar4->CopyUntrim();
                *midiPlayerMainThread = local_50;
                pPVar4 = (Pix32*)(*midiPlayerMainThread).operator->();
                pPVar4->Multiply(arg2);
                local_50 = shared_ptr(midiPlayerMainThread);
                pPVar4 = (Pix32*)local_50.operator->();
                uVar5 = (unsigned int)arg4;
                pPVar4->ScaleImageBounds((unsigned int)arg4);
                if (0 < (int)uVar5) {
                    uVar5 = (unsigned int)arg4;
                    do {
                        pPVar4 = (Pix32*)local_50.operator->();
                        pPVar4->AddOutline(arg3);
                        uVar5 = uVar5 - 1;
                    } while (uVar5 != 0);
                }
                *puVar3 = arg2;
                puVar3[1] = arg3;
                puVar3[2] = (unsigned int)arg4;
            }
        }
    }

    // 0x100069bc0
    void Minimap::Redraw() {
        m_level = -1;
    }

    // 0x100069bd0
    void Minimap::ResizeBuffer(int arg1) {
        m_zoom = arg1;
        int arg1_00 = GetMinimapBufferSize();
        field_25672.Create(arg1_00, arg1_00);
        NXTPix2D local_60(field_25672, arg1_00, arg1_00);
        field_25728 = local_60;
    }

    // 0x100069c90
    void Minimap::BuildBuffer(int arg1, dash3d::world* world) {
        uint8_t bVar1;
        uint32_t* puVar3;
        int arg2_00;
        unsigned long arg1_00;
        int iVar5;
        int iVar6;
        int arg3_00;

        uint8_t* this_00 = &field_25672;
        unsigned long uVar2 = this_00->HeapBeginPtr();
        if (uVar2 != 0) {
            arg1_00 = 0;
            do {
                puVar3 = (uint32_t*)(*this_00)[arg1_00];
                *puVar3 = 4278190080;
                arg1_00 = arg1_00 + 1;
            } while (uVar2 != arg1_00);
        }
        unsigned int arg4 = m_zoom;
        int arg3 = GetMinimapBufferSize();
        int arg2 = arg1 + 1;
        int iVar4 = 1;
        do {
            iVar5 = (103 - iVar4) * arg3 * arg4 + arg3 * 48 + arg4 + 48;
            iVar6 = 1;
            do {
                bVar1 = ClientBuild::Read3DArray<signed char>((Array<signed char>*)&ClientBuild::m_mapl, arg1, iVar6,
                                                              iVar4);
                if ((bVar1 & 24) == 0) {
                    world->Render2DGround(*this_00, iVar5, arg3, arg4, arg1, iVar6, iVar4);
                }
                if ((arg1 < 3) && (bVar1 = ClientBuild::Read3DArray<signed char>(
                                       (Array<signed char>*)&ClientBuild::m_mapl, arg2, iVar6, iVar4),
                                   (bVar1 & 8) != 0)) {
                    world->Render2DGround(*this_00, iVar5, arg3, arg4, arg2, iVar6, iVar4);
                }
                iVar5 = iVar5 + arg4;
                iVar6 = iVar6 + 1;
            } while (iVar6 != 103);
            iVar4 = iVar4 + 1;
        } while (iVar4 != 103);
        iVar4 = -2565928;
        if (3 < (int)m_zoom) {
            iVar4 = -1;
        }
        iVar5 = -2621440;
        if (3 < (int)m_zoom) {
            iVar5 = -65536;
        }
        iVar6 = (arg3 * 102 | 1U) * arg4 + arg3 * 48 + 48;
        int arg4_00 = 1;
        do {
            arg3_00 = 1;
            arg2_00 = iVar6;
            do {
                bVar1 = ClientBuild::Read3DArray<signed char>((Array<signed char>*)&ClientBuild::m_mapl, arg1, arg3_00,
                                                              arg4_00);
                if ((bVar1 & 24) == 0) {
                    DrawDetail(arg4, arg2_00, arg1, arg3_00, arg4_00, iVar4, iVar5, world);
                }
                if ((arg1 < 3) && (bVar1 = ClientBuild::Read3DArray<signed char>(
                                       (Array<signed char>*)&ClientBuild::m_mapl, arg2, arg3_00, arg4_00),
                                   (bVar1 & 8) != 0)) {
                    DrawDetail(arg4, arg2_00, arg2, arg3_00, arg4_00, iVar4, iVar5, world);
                }
                arg3_00 = arg3_00 + 1;
                arg2_00 = arg2_00 + arg4;
            } while (arg3_00 != 103);
            arg4_00 = arg4_00 + 1;
            iVar6 = iVar6 - arg3 * arg4;
        } while (arg4_00 != 103);
    }

    // 0x100069f30
    void Minimap::DrawDetail(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                             dash3d::world* world) {
        uint8_t* this_00;
        bool cVar1;
        unsigned int uVar2;
        int iVar3;
        unsigned int uVar4;
        shared_ptr<dash3d::GroundDecor>* psVar6;
        Array<graphics::Pix8>* pAVar7;
        Pix8* pPVar8;
        int* piVar9;
        long lVar10;
        uint32_t* puVar11;
        int iVar12;
        int iVar13;
        unsigned long uVar14;
        uint32_t uVar15;
        unsigned long uVar16;
        shared_ptr<dash3d::Decor> local_88;
        unsigned int local_64;
        unsigned long local_60;
        SharedArray<unsigned int>* local_48;

        Minimap* local_58 = this;
        int local_3c = GetMinimapBufferSize();
        float local_40 = (float)arg1 * 0.25;
        unsigned long local_38 = (unsigned long)(unsigned int)arg1;
        long lVar5 = world->WallType(arg3, arg4, arg5);
        unsigned long local_70 = (unsigned long)(unsigned int)arg4;
        if (lVar5 != 0) {
            uVar2 = world->TypeCode2(arg3, arg4, arg5, lVar5);
            cVar1 = dash3d::MousePickingHelper::IsActiveEntityTypecode(lVar5);
            if (cVar1) {
                arg6 = arg7;
            }
            iVar3 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar5);
            psVar6 = (shared_ptr<dash3d::GroundDecor>*)configdecoder::LocType::List(iVar3);
            local_88 = shared_ptr(psVar6);
            lVar5 = *local_88;
            if (*(int*)(lVar5 + 436) == -1) {
                local_64 = uVar2 >> 6 & 3;
                local_48 = (SharedArray<unsigned int>*)&local_58->field_25672;
                iVar3 = (int)local_38;
                uVar4 = iVar3 - 1;
                local_60 = (unsigned long)uVar4;
                if ((uVar2 & 29) == 0) {
                    if (local_64 == 0) {
                        if (0 < iVar3) {
                            lVar5 = (long)local_3c;
                            uVar16 = (unsigned long)arg2;
                            uVar14 = local_38 & 4294967295;
                            do {
                                piVar9 = (int*)(*local_48)[uVar16];
                                *piVar9 = arg6;
                                uVar16 = uVar16 + lVar5;
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                    } else if (local_64 == 1) {
                        if (0 < iVar3) {
                            uVar16 = (unsigned long)arg2;
                            uVar14 = local_38 & 4294967295;
                            do {
                                piVar9 = (int*)(*local_48)[uVar16];
                                *piVar9 = arg6;
                                uVar16 = uVar16 + 1;
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                    } else if (local_64 == 2) {
                        if (0 < iVar3) {
                            lVar5 = (long)local_3c;
                            uVar16 = (unsigned long)(int)(uVar4 + arg2);
                            uVar14 = local_38 & 4294967295;
                            do {
                                piVar9 = (int*)(*local_48)[uVar16];
                                *piVar9 = arg6;
                                uVar16 = uVar16 + lVar5;
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                    } else if (0 < iVar3) {
                        uVar16 = (unsigned long)(int)(local_3c * uVar4 + arg2);
                        uVar14 = local_38 & 4294967295;
                        do {
                            piVar9 = (int*)(*local_48)[uVar16];
                            *piVar9 = arg6;
                            uVar16 = uVar16 + 1;
                            uVar14 = uVar14 - 1;
                        } while (uVar14 != 0);
                    }
                }
                if ((uVar2 & 31) == 2) {
                    if (local_64 == 0) {
                        if (0 < (int)local_38) {
                            uVar16 = (unsigned long)arg2;
                            uVar14 = local_38 & 4294967295;
                            do {
                                piVar9 = (int*)(*local_48)[uVar16];
                                *piVar9 = arg6;
                                uVar16 = uVar16 + 1;
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                    } else if (local_64 == 3) {
                        if (0 < (int)local_38) {
                            lVar5 = (long)local_3c;
                            uVar16 = (unsigned long)arg2;
                            uVar14 = local_38 & 4294967295;
                            do {
                                piVar9 = (int*)(*local_48)[uVar16];
                                *piVar9 = arg6;
                                uVar16 = uVar16 + lVar5;
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                    } else if (local_64 == 1) {
                        if (0 < (int)local_38) {
                            lVar5 = (long)local_3c;
                            uVar16 = (unsigned long)((int)local_60 + arg2);
                            uVar14 = local_38 & 4294967295;
                            do {
                                piVar9 = (int*)(*local_48)[uVar16];
                                *piVar9 = arg6;
                                uVar16 = uVar16 + lVar5;
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                    } else if (0 < (int)local_38) {
                        uVar16 = (unsigned long)((int)local_60 * local_3c + arg2);
                        uVar14 = local_38 & 4294967295;
                        do {
                            piVar9 = (int*)(*local_48)[uVar16];
                            *piVar9 = arg6;
                            uVar16 = uVar16 + 1;
                            uVar14 = uVar14 - 1;
                        } while (uVar14 != 0);
                    }
                } else if ((uVar2 & 31) == 3) {
                    if (local_64 == 2) {
                        piVar9 = (int*)(*local_48)[(long)(local_3c * (int)local_60 + (int)local_60 + arg2)];
                    } else if (local_64 == 1) {
                        piVar9 = (int*)(*local_48)[(long)((int)local_60 + arg2)];
                    } else if (local_64 == 0) {
                        piVar9 = (int*)(*local_48)[(long)arg2];
                    } else {
                        piVar9 = (int*)(*local_48)[(long)(local_3c * (int)local_60 + arg2)];
                    }
                    *piVar9 = arg6;
                }
            } else {
                pAVar7 = (Array<graphics::Pix8>*)*local_58->field_26040;
                pPVar8 = (Pix8*)(*pAVar7)[(long)*(int*)(lVar5 + 436)];
                iVar3 = (int)((float)pPVar8->field_48 * local_40);
                if ((0 < iVar3) && (iVar12 = (int)((float)(int)pPVar8->field_52 * local_40), 0 < iVar12)) {
                    iVar13 = (int)local_38;
                    local_58->field_25728.ScalePlotSprite(
                        *pPVar8, (*(int*)(lVar5 + 184) * iVar13 - iVar3) / 2 + (int)local_70 * iVar13 + 48,
                        (103 - (*(int*)(lVar5 + 188) + arg5)) * iVar13 + (*(int*)(lVar5 + 188) * iVar13 - iVar12) / 2 +
                            48,
                        iVar3, iVar12);
                }
            }
            arg4 = (int)local_70;
        }
        iVar12 = arg5;
        iVar3 = arg3;
        lVar5 = world->SceneType(arg3, arg4, arg5);
        if (lVar5 != 0) {
            uVar2 = world->TypeCode2(iVar3, arg4, iVar12, lVar5);
            iVar3 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar5);
            psVar6 = (shared_ptr<dash3d::GroundDecor>*)configdecoder::LocType::List(iVar3);
            local_88 = shared_ptr(psVar6);
            lVar10 = local_88.end();
            if (*(int*)(lVar10 + 436) == -1) {
                if ((uVar2 & 31) == 9) {
                    cVar1 = dash3d::MousePickingHelper::IsActiveEntityTypecode(lVar5);
                    uVar15 = 4293848814;
                    if (cVar1) {
                        uVar15 = 4293787648;
                    }
                    this_00 = &local_58->field_25672;
                    if ((uVar2 & 64) == 0) {
                        if (0 < (int)local_38) {
                            uVar16 = local_38 & 4294967295;
                            iVar3 = arg2 + ((int)local_38 - 1) * local_3c;
                            iVar12 = 1 - local_3c;
                            do {
                                puVar11 = (uint32_t*)(*this_00)[(long)iVar3];
                                *puVar11 = uVar15;
                                iVar3 = iVar3 + iVar12;
                                uVar16 = uVar16 - 1;
                            } while (uVar16 != 0);
                        }
                    } else if (0 < (int)local_38) {
                        uVar16 = local_38 & 4294967295;
                        local_3c = local_3c + 1;
                        do {
                            puVar11 = (uint32_t*)(*this_00)[(long)arg2];
                            *puVar11 = uVar15;
                            arg2 = arg2 + local_3c;
                            uVar16 = uVar16 - 1;
                        } while (uVar16 != 0);
                    }
                }
            } else {
                pAVar7 = (Array<graphics::Pix8>*)*local_58->field_26040;
                pPVar8 = (Pix8*)(*pAVar7)[(long)*(int*)(lVar10 + 436)];
                iVar3 = (int)((float)pPVar8->field_48 * local_40);
                if ((0 < iVar3) && (iVar12 = (int)((float)(int)pPVar8->field_52 * local_40), 0 < iVar12)) {
                    iVar13 = (int)local_38;
                    local_58->field_25728.ScalePlotSprite(
                        *pPVar8, (*(int*)(lVar10 + 184) * iVar13 - iVar3) / 2 + (int)local_70 * iVar13 + 48,
                        (103 - (*(int*)(lVar10 + 188) + arg5)) * iVar13 +
                            (*(int*)(lVar10 + 188) * iVar13 - iVar12) / 2 + 48,
                        iVar3, iVar12);
                }
            }
            arg4 = (int)local_70;
            iVar12 = arg5;
            iVar3 = arg3;
        }
        lVar5 = world->GdType(iVar3, arg4, iVar12);
        if (lVar5 != 0) {
            iVar3 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar5);
            psVar6 = (shared_ptr<dash3d::GroundDecor>*)configdecoder::LocType::List(iVar3);
            local_88 = shared_ptr(psVar6);
            lVar5 = local_88.end();
            if (*(int*)(lVar5 + 436) != -1) {
                pAVar7 = (Array<graphics::Pix8>*)*local_58->field_26040;
                pPVar8 = (Pix8*)(*pAVar7)[(long)*(int*)(lVar5 + 436)];
                iVar3 = (int)((float)pPVar8->field_48 * local_40);
                if ((0 < iVar3) && (iVar12 = (int)(local_40 * (float)(int)pPVar8->field_52), 0 < iVar12)) {
                    iVar13 = (int)local_38;
                    local_58->field_25728.ScalePlotSprite(
                        *pPVar8, (int)local_70 * iVar13 + (*(int*)(lVar5 + 184) * iVar13 - iVar3) / 2 + 48,
                        (104 - (arg5 + *(int*)(lVar5 + 188))) * iVar13 + (*(int*)(lVar5 + 188) * iVar13 - iVar12) / 2 +
                            48,
                        iVar3 + iVar13, iVar12 + iVar13);
                }
            }
        }
    }

    // 0x10006a730
    void Minimap::AddMelIcon(int arg1, int arg2, int arg3, int arg4) {
        int iVar1;
        int iVar2;
        MapElementType* this_00;
        array<MinimapElement, 200ul>* this_01;
        int* piVar3;
        ReturnValue local_50;
        int* local_40;

        if (-1 < arg4) {
            iVar1 = ClientBuild::VisLevel(arg1, arg2, arg3);
            local_40 = &field_16[(long)iVar1];
            iVar2 = *local_40;
            if ((long)iVar2 < 200) {
                this_00 = configdecoder::MapElementType::List(arg4);
                if (this_00->field_69 != '\0') {
                    this_01 = &field_32[(long)iVar1];
                    local_50.GetSprite(this_00, false);
                    piVar3 = (int*)(*this_01)[(long)iVar2];
                    (*((piVar3 + 4))) = local_50;
                    iVar2 = this_00->GetID();
                    piVar3[2] = iVar2;
                    *piVar3 = arg2;
                    piVar3[1] = arg3;
                    *local_40 = *local_40 + 1;
                }
            }
        }
    }

    // 0x10006a850
    void Minimap::DeleteIcons(configdecoder::LocType* locType, int arg2, int arg3, int arg4) {
        unsigned int uVar1;
        int iVar2;
        int iVar3;
        MapElementType* this_00;
        array<MinimapElement, 200ul>* this_01;
        MinimapElement* this_02;
        MinimapElement* minimapElement;
        unsigned long arg1;

        unsigned int* puVar4 = &field_16[(long)arg2];
        if (-1 < (int)locType->field_432) {
            uVar1 = *puVar4;
            if ((0 < (int)uVar1) &&
                (this_00 = configdecoder::MapElementType::List(locType->field_432), this_00->field_69 != '\0')) {
                this_01 = &field_32[(long)arg2];
                arg1 = 0;
                do {
                    this_02 = (MinimapElement*)(*this_01)[arg1];
                    if (((*(int*)&this_02->field_0 == arg3) && (*(int*)((long)&this_02->field_0 + 4) == arg4)) &&
                        (iVar2 = this_02->field_8, iVar3 = this_00->GetID(), iVar2 == iVar3)) {
                        minimapElement = (MinimapElement*)(*this_01)[(unsigned long)(uVar1 - 1)];
                        *this_02 = *minimapElement;
                        *puVar4 = *puVar4 - 1;
                        return;
                    }
                    arg1 = arg1 + 1;
                } while (uVar1 != arg1);
            }
        }
    }

    // 0x10006a980
    void Minimap::SetZoom(dash3d::world* world, int arg2, int arg3) {
        unsigned int uVar1 = m_zoom;
        auto enumOptionToggle1 = eastl::max<int>(arg2, 2);
        m_zoom = enumOptionToggle1;
        unsigned int arg1 = eastl::min<jag::graphics::GraphicsQuality>(enumOptionToggle1, 8);
        m_zoom = arg1;
        if (uVar1 != arg1) {
            ResizeBuffer(arg1);
            field_25632.clear();
            BuildBuffer(arg3, world);
        }
    }

    // 0x10006aa00
    void RotatePointOnMinimap(int arg1, int arg2, int arg3, int& arg4, int& arg5) {
        auto array = dash3d::Pix3D::GetSinTable();
        auto this_00 = dash3d::Pix3D::GetCosTable();
        int* piVar3 = (int*)(*array)[(long)arg3];
        int iVar1 = *piVar3;
        piVar3 = (int*)(*this_00)[(long)arg3];
        int iVar2 = *piVar3;
        arg4 = iVar2 * arg1 + iVar1 * arg2 >> 16;
        arg5 = iVar2 * arg2 - iVar1 * arg1 >> 16;
    }

    // 0x10006aaa0
    void GetDotPosition(int& arg1, int& arg2, int& arg3, int arg4, int arg5, int arg6, int arg7, int arg8) {
        uint64_t in_RAX;

        arg3 = arg2 * arg2 + arg1 * arg1;
        uint64_t local_38 = in_RAX;
        RotatePointOnMinimap(arg1, arg2, arg4 & 2047, (int*)&local_38, (int*)((long)&local_38 + 4));
        arg1 = (arg5 / 2 - arg7 / 2) + (int)local_38;
        arg2 = (arg6 / 2 - arg8 / 2) - local_38._4_4_;
    }

    // 0x10006ab40
    unsigned long Minimap::Draw(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3, int arg4, int arg5,
                                int arg6, int arg7, int arg8) {
        uint8_t* puVar1;
        shared_ptr<ClientPlayer>* this_00;
        InterfaceGraphicMask* pIVar2;
        bool cVar4;
        bool bVar5;
        uint8_t bVar6;
        float fVar8;
        int iVar9;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t uVar11;
        long lVar12;
        world* this_02;
        Pix32* this_03;
        int* piVar13;
        Logger* this_04;
        Pix32* pPVar14;
        list<shared_ptr<ClientObj>>* clientObjs;
        shared_ptr<ClientObj>* this_06;
        ClientNpc* this_07;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar15;
        ClientPlayer* this_09;
        ClientPlayer* pCVar16;
        FriendSystem* this_10;
        DisplayName* pDVar17;
        eastl::string* str;
        unsigned long arg1;
        unsigned int uVar19;
        Client* pCVar20;
        int iVar21;
        MiniDotCategory MVar22;
        unsigned long uVar23;
        unsigned long uVar24;
        Minimap* this_11;
        int iVar25;
        uint64_t in_stack_fffffffffffffe68;
        uint64_t in_stack_fffffffffffffe70;
        uint64_t in_stack_fffffffffffffe78;
        eastl::string local_168;
        ReturnValue local_148;
        eastl::string local_128;
        ReturnValue local_108;
        int local_e4;
        Pix2D* local_d8;
        int local_cc;
        array<int, 4ul>* local_c8;
        CoordGrid local_c0;
        shared_ptr<ClientPlayer>* local_b0;
        array<MinimapElement, 200ul>* local_a8;
        unsigned long local_a0;
        int local_98;
        MiniDotCategory local_94;
        unsigned long local_90;
        unsigned long local_88;
        int local_7c;
        float local_78;
        float local_74;
        InterfaceGraphicMask* local_70;
        int local_64;
        unique_ptr<FriendSystem>* local_60;
        uint64_t local_50;
        int local_44;

        uint32_t uVar26 = (uint32_t)((unsigned long)in_stack_fffffffffffffe70 >> 32);
        uint32_t uVar7 = (uint32_t)((unsigned long)in_stack_fffffffffffffe68 >> 32);
        uint32_t uVar27 = (uint32_t)((unsigned long)in_stack_fffffffffffffe78 >> 32);
        auto local_40 = Client::Instance();
        uint8_t uVar3 = field_26056->GetPix2D();
        Pix2D* pPVar10 = (Pix2D*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3);
        bool local_45 = false;
        shared_ptr<configdecoder::ObjType>* objType = ((IfType*)ifType.operator->())->GetMask(false, local_45);
        uint8_t local_31 = *objType == nullptr;
        uint64_t uVar18 = extraout_var_00;
        if (!local_31) {
            local_70 = (InterfaceGraphicMask*)**objType;
            pPVar10->SetClipping(arg2, arg3, local_70->field_0 + arg2, local_70->field_4 + arg3);
            if ((m_toggle == 2) || (m_toggle == 5)) {
                uVar11 = pPVar10->FillScanLine(arg2, arg3, 4278190080, local_70->field_32, local_70->field_8);
            } else {
                local_50 = (shared_ptr<rs2lib::social::DisplayName>*)((((uint64_t)local_50._4_4_ << 32) |
                                                                       (uint32_t)local_40->field_53112) &
                                                                      18446744069414586367);
                uVar19 = m_zoom;
                local_60._0_4_ = 128.0 / (float)(int)uVar19;
                local_64 = uVar19 - ((int)uVar19 >> 31);
                local_b0 = (shared_ptr<ClientPlayer>*)&local_40->field_52016;
                lVar12 = (*local_b0).operator->();
                local_74 = 1.0 / local_60._0_4_;
                uVar19 = (unsigned int)((float)*(int*)(lVar12 + 24) * local_74);
                lVar12 = (*local_b0).operator->();
                pIVar2 = local_70;
                local_44 = (int)((float)*(int*)(lVar12 + 28) * local_74);
                pPVar14 = (Pix32*)(((uint64_t)uVar7 << 32) | (uint32_t)(uVar19 + 48));
                local_d8 = pPVar10;
                local_a0 = (unsigned long)uVar19;
                local_90 = (unsigned long)(unsigned int)arg3;
                local_88 = (unsigned long)(unsigned int)arg2;
                (**(void (**)(...))(pPVar10->field_0 + 256))(
                    pPVar10, &field_25672, arg2, arg3, local_70->field_0, local_70->field_4, pPVar14,
                    (((uint64_t)uVar26 << 32) | (uint32_t)((m_zoom * 104 - local_44) + 48)),
                    (((uint64_t)uVar27 << 32) | (uint32_t)((MiniDotCategory)local_50)), 256, &local_70->field_32,
                    &local_70->field_8);
                this_00 = local_b0;
                uVar23 = (long)pIVar2->field_0 / (long)(int)m_zoom;
                uVar19 = (int)(((unsigned int)(uVar23 >> 31) & 1) + (int)uVar23) >> 1;
                lVar12 = (*local_b0).operator->();
                iVar21 = *(int*)(lVar12 + 24) >> 7;
                lVar12 = (*this_00).operator->();
                iVar25 = *(int*)(lVar12 + 28) >> 7;
                uVar7 = eastl::max<int>(0, iVar21 + ~uVar19);
                local_60 = (unique_ptr<FriendSystem>*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar7);
                local_94 = eastl::max<int>(0, ~uVar19 + iVar25);
                fVar8 = (float)eastl::min<jag::graphics::GraphicsQuality>(104, uVar19 + iVar21 + 1);
                uVar7 = eastl::min<jag::graphics::GraphicsQuality>(104, uVar19 + iVar25 + 1);
                local_50 =
                    (shared_ptr<rs2lib::social::DisplayName>*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)uVar7);
                local_78 = fVar8;
                if ((int)local_60._0_4_ < (int)fVar8) {
                    puVar1 = &local_40->field_19184;
                    fVar8 = local_60._0_4_;
                    do {
                        MVar22 = local_94;
                        if ((int)local_94 < (int)(MiniDotCategory)local_50) {
                            do {
                                this_02 = (world*)(*puVar1).operator->();
                                this_03 = (Pix32*)this_02->GetHighlightOnTile(m_level, (int)fVar8, MVar22);
                                if ((this_03 != nullptr) && (cVar4 = this_03->HasTileHighlight(), cVar4)) {
                                    DrawTile((int)local_88, (int)local_90, m_zoom * (int)fVar8 - (int)local_a0,
                                             m_zoom * MVar22 - local_44, local_40->field_53112, *this_03, *local_70);
                                    pPVar14 = this_03;
                                }
                                MVar22 = MVar22 + 1;
                            } while ((MiniDotCategory)local_50 != MVar22);
                        }
                        fVar8 = (float)((int)fVar8 + 1);
                    } while (fVar8 != local_78);
                }
                local_64 = local_64 >> 1;
                if (m_iconZoomLimit <= (int)m_zoom) {
                    iVar21 = m_level;
                    local_a8 = &field_32[(long)iVar21];
                    local_c8 = (array<int, 4ul>*)&field_16;
                    piVar13 = (int*)(*local_c8)[(long)iVar21];
                    if (0 < *piVar13) {
                        local_98 = local_64 - (int)local_a0;
                        local_e4 = local_64 - local_44;
                        uVar23 = 0;
                        do {
                            uVar7 = (uint32_t)((unsigned long)pPVar14 >> 32);
                            piVar13 = (int*)(*local_a8)[uVar23];
                            local_c0.m_level = *piVar13 * m_zoom + local_98;
                            local_7c = m_zoom * piVar13[1] + local_e4;
                            local_cc = 0;
                            pvVar15 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(piVar13 + 4);
                            pPVar14 = (Pix32*)pvVar15->end();
                            if (pPVar14 == nullptr) {
                                local_108.GetSprite(configdecoder::MapElementType::List(piVar13[2]), false);
                                *pvVar15 = local_108;
                                pPVar14 = (Pix32*)pvVar15->end();
                                if (pPVar14 == nullptr)
                                    goto LAB_10006aef0;
                            LAB_10006aff0:
                                pIVar2 = local_70;
                                GetDotPosition((int*)&local_c0, &local_7c, &local_cc, local_40->field_53112,
                                               local_70->field_0, local_70->field_4, pPVar14->field_40,
                                               pPVar14->field_44);
                                this = this;
                                DrawDot(this, (int)local_88, (int)local_90, local_c0.m_level, local_7c, local_cc,
                                        pPVar14, pIVar2);
                            } else {
                                if (pPVar14 != nullptr)
                                    goto LAB_10006aff0;
                            LAB_10006aef0:
                                this_04 = logger::default_logger();
                                pPVar14 = (Pix32*)(((uint64_t)uVar7 << 32) | (uint32_t)piVar13[2]);
                                this_04->Log(false, 5,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                             "projects/osclient/minimap/Minimap.cpp",
                                             596, "Sprite not available yet for meltype %d", pPVar14);
                                this = this;
                            }
                            uVar23 = uVar23 + 1;
                            piVar13 = (int*)(*local_c8)[(long)m_level];
                        } while ((long)uVar23 < (long)*piVar13);
                    }
                }
                local_c8 = (array<int, 4ul>*)&field_25912;
                local_98 = local_64 - (int)local_a0;
                local_64 = local_64 - local_44;
                pCVar20 = local_40;
                if ((int)local_60._0_4_ < (int)local_78) {
                    do {
                        MVar22 = local_94;
                        if ((int)local_94 < (int)(MiniDotCategory)local_50) {
                            do {
                                local_c0 = rs2lib::CoordGrid(pCVar20->field_51984, (int)local_60._0_4_, MVar22);
                                clientObjs = (list<shared_ptr<ClientObj>>*)pCVar20->GetObjectsOnTile(local_c0);
                                local_108 = eastl::list<shared_ptr<ClientObj>>(*clientObjs);
                                cVar4 = local_108.empty();
                                if ((!cVar4) && (lVar12 = (*local_c8)[5], *(char*)(lVar12 + 12) != '\0')) {
                                    iVar21 = (int)local_60._0_4_;
                                    uVar19 = m_zoom;
                                    local_a8 = (array<MinimapElement, 200ul>*)(((uint64_t)local_a8._4_4_ << 32) |
                                                                               (uint32_t)pCVar20->field_53112);
                                    this_06 = (shared_ptr<ClientObj>*)local_108.front();
                                    lVar12 = (*this_06).operator->();
                                    local_c0 = configdecoder::ObjType::List(*(int*)(lVar12 + 24));
                                    lVar12 = local_c0.operator->();
                                    local_168 = eastl::string(*((lVar12 + 8)));
                                    DrawDotWithString(this, (int)local_88, (int)local_90, uVar19 * iVar21 + local_98,
                                                      uVar19 * MVar22 + local_64, (int)local_a8._0_4_, 5, &local_168,
                                                      local_70);
                                    pCVar20 = local_40;
                                    this = this;
                                }
                                MVar22 = MVar22 + 1;
                            } while ((MiniDotCategory)local_50 != MVar22);
                        }
                        fVar8 = (float)((int)local_60._0_4_ + 1);
                        local_60 = (unique_ptr<FriendSystem>*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)fVar8);
                    } while (fVar8 != local_78);
                }
                iVar21 = pCVar20->GetLastNpcNum();
                if (0 < iVar21) {
                    iVar25 = 0;
                    do {
                        pCVar20 = local_40;
                        iVar9 = local_40->GetLastNpcId(iVar25);
                        this_07 = (ClientNpc*)pCVar20->GetClientNpc(iVar9);
                        if ((this_07 != nullptr) && (cVar4 = this_07->Ready(), cVar4)) {
                            local_108 = shared_ptr(&this_07->field_1024);
                            bVar5 = local_108 != nullptr;
                            if (bVar5) {
                                lVar12 = local_108.operator->();
                                cVar4 = ((lVar12 + 488))->empty();
                                if (!cVar4) {
                                    local_c0 = ((NpcType*)local_108.operator->())->GetMultiNpc();
                                    local_108 = local_c0;
                                }
                            }
                            bVar5 = local_108 != nullptr;
                            if ((((bVar5) && (lVar12 = local_108.operator->(), *(char*)(lVar12 + 456) != '\0')) &&
                                 (lVar12 = local_108.operator->(), *(char*)(lVar12 + 520) != '\0')) &&
                                (lVar12 = (*local_c8)[6], *(char*)(lVar12 + 12) != '\0')) {
                                local_60 = (unique_ptr<FriendSystem>*)(((uint64_t)local_60._4_4_ << 32) |
                                                                       (uint32_t)this_07->field_24);
                                iVar9 = this_07->field_28;
                                local_50 = (shared_ptr<rs2lib::social::DisplayName>*)(((uint64_t)local_50._4_4_ << 32) |
                                                                                      (uint32_t)local_40->field_53112);
                                local_148 = this_07->GetDisplayName();
                                DrawDotWithString(this, (int)local_88, (int)local_90,
                                                  (int)((float)(int)local_60._0_4_ * local_74) - (int)local_a0,
                                                  (int)((float)iVar9 * local_74) - local_44, (MiniDotCategory)local_50,
                                                  6, &local_148, local_70);
                            }
                        }
                        iVar25 = iVar25 + 1;
                    } while (iVar21 != iVar25);
                }
                uVar23 = (unsigned long)ReceivePlayerPositions::m_lastNum;
                puVar1 = &local_40->field_19216;
                this_11 = this;
                if (0 < (int)ReceivePlayerPositions::m_lastNum) {
                    local_60 = (unique_ptr<FriendSystem>*)&local_40->field_52768;
                    uVar24 = 0;
                    do {
                        pvVar15 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*puVar1)[(
                            long)(int)(&ReceivePlayerPositions::m_lastID)[uVar24]];
                        this_09 = (ClientPlayer*)pvVar15->end();
                        if (((this_09 != nullptr) && (cVar4 = this_09->Ready(), cVar4)) &&
                            ((this_09->field_1200 == '\0' &&
                              (pCVar16 = (ClientPlayer*)local_b0->end(), this_09 != pCVar16)))) {
                            this_10 = (FriendSystem*)(*local_60).operator->();
                            local_50 = (shared_ptr<rs2lib::social::DisplayName>*)&this_09->field_992;
                            pDVar17 = (DisplayName*)**local_50;
                            this_11 = this;
                            cVar4 = this_10->IsIgnored(*pDVar17);
                            if ((!cVar4) || (this_11->field_8 != '\0')) {
                                local_a8 = (array<MinimapElement, 200ul>*)(((uint64_t)local_a8._4_4_ << 32) |
                                                                           (uint32_t)((float)this_09->field_24));
                                local_78 = (float)this_09->field_28;
                                cVar4 = this_09->IsOnlineFriend();
                                arg1 = 0;
                                if (!cVar4) {
                                    lVar12 = (*local_b0).operator->();
                                    if ((*(int*)(lVar12 + 1196) != 0) && (this_09->field_1196 != 0)) {
                                        lVar12 = (*local_b0).operator->();
                                        arg1 = 1;
                                        if (*(int*)(lVar12 + 1196) == this_09->field_1196)
                                            goto LAB_10006b51e;
                                    }
                                    cVar4 = this_09->IsFriendChat();
                                    arg1 = 2;
                                    if (!cVar4) {
                                        bVar6 = this_09->IsGroup();
                                        arg1 = (unsigned long)(4 - bVar6);
                                    }
                                }
                            LAB_10006b51e:
                                local_94 = (MiniDotCategory)arg1;
                                lVar12 = (*local_c8)[arg1];
                                if (*(char*)(lVar12 + 12) != '\0') {
                                    iVar21 = (int)(local_a8._0_4_ * local_74) - (int)local_a0;
                                    iVar25 = (int)(local_78 * local_74) - local_44;
                                    local_a8 = (array<MinimapElement, 200ul>*)(((uint64_t)local_a8._4_4_ << 32) |
                                                                               (uint32_t)local_40->field_53112);
                                    pDVar17 = (DisplayName*)(*local_50).operator->();
                                    str = pDVar17->GetDisplayName();
                                    local_128 = eastl::string(*str);
                                    DrawDotWithString(this, (int)local_88, (int)local_90, iVar21, iVar25,
                                                      (int)local_a8._0_4_, local_94, &local_128, local_70);
                                    this_11 = this;
                                }
                            }
                        }
                        uVar24 = uVar24 + 1;
                    } while (uVar23 != uVar24);
                }
                pPVar10 = local_d8;
                if ((arg6 != 0) && (local_40->field_8488 % 20 < 10)) {
                    if ((arg6 == 1) &&
                        (((-1 < arg8 && (arg8 < 65536)) && (lVar12 = local_40->GetClientNpc(arg8), lVar12 != 0)))) {
                        iVar25 = (int)((float)*(int*)(lVar12 + 24) * local_74) - (int)local_a0;
                        iVar21 = (int)((float)*(int*)(lVar12 + 28) * local_74) - local_44;
                        uVar19 = local_40->field_53112;
                        pPVar14 = &field_26096[1];
                        this_11 = this;
                        pPVar10 = local_d8;
                        DrawArrow(this, (int)local_88, (int)local_90, iVar25, iVar21, uVar19, pPVar14, local_70);
                    }
                    if (arg6 == 2) {
                        iVar21 = (arg4 - local_40->field_53220) * this_11->m_zoom - (int)local_a0;
                        iVar25 = (arg5 - local_40->field_53224) * this_11->m_zoom - local_44;
                        local_50 = (shared_ptr<rs2lib::social::DisplayName>*)(((uint64_t)local_50._4_4_ << 32) |
                                                                              (uint32_t)local_40->field_53112);
                        pPVar14 = &this_11->field_26096[1];
                        pPVar10 = local_d8;
                        DrawArrow(this_11, (int)local_88, (int)local_90, iVar21 + 2, iVar25 + 2,
                                  (MiniDotCategory)local_50, pPVar14, local_70);
                    }
                    if (((arg6 == 10) && (-1 < arg7)) && (arg7 < 2048)) {
                        pvVar15 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*puVar1)[(long)arg7];
                        lVar12 = pvVar15->end();
                        if (lVar12 != 0) {
                            iVar25 = (int)((float)*(int*)(lVar12 + 24) * local_74) - (int)local_a0;
                            iVar21 = (int)((float)*(int*)(lVar12 + 28) * local_74) - local_44;
                            uVar19 = local_40->field_53112;
                            pPVar14 = &this_11->field_26096[1];
                            DrawArrow(this_11, (int)local_88, (int)local_90, iVar25, iVar21, uVar19, pPVar14, local_70);
                        }
                    }
                }
                pIVar2 = local_70;
                if (this_11->field_0 != 0) {
                    local_108[0]._0_4_ = local_98 + this_11->field_0 * this_11->m_zoom;
                    local_c0.m_level = local_64 + this_11->m_zoom * this_11->field_4;
                    local_7c = 0;
                    local_50 = (shared_ptr<rs2lib::social::DisplayName>*)(((uint64_t)local_50._4_4_ << 32) |
                                                                          (uint32_t)local_40->field_53112);
                    iVar21 = local_70->field_0;
                    iVar25 = local_70->field_4;
                    puVar1 = &this_11->field_26096;
                    lVar12 = (*puVar1)[0];
                    iVar9 = *(int*)(lVar12 + 40);
                    lVar12 = (*puVar1)[0];
                    GetDotPosition(&local_108, (int*)&local_c0, &local_7c, (MiniDotCategory)local_50, iVar21, iVar25,
                                   iVar9, *(int*)(lVar12 + 44));
                    iVar21 = local_7c;
                    uVar19 = local_c0.m_level;
                    uVar7 = local_108[0]._0_4_;
                    pPVar14 = (Pix32*)(*puVar1)[0];
                    pPVar10 = local_d8;
                    DrawDot(this, (int)local_88, (int)local_90, uVar7, uVar19, iVar21, pPVar14, pIVar2);
                }
                lVar12 = (*local_b0).operator->();
                uVar18 = (uint64_t)((unsigned long)lVar12 >> 8);
                if (*(char*)(lVar12 + 1200) != '\0')
                    goto LAB_10006b93a;
                uVar11 = (**(void (**)(...))(pPVar10->field_0 + 32))(pPVar10, (int)local_88 + local_70->field_0 / 2 - 1,
                                                                     (int)local_90 + local_70->field_4 / 2 - 1, 3, 3,
                                                                     16777215);
            }
            uVar18 = (uint64_t)((unsigned long)uVar11 >> 8);
        }
    LAB_10006b93a:
        return local_31 ^ 1;
    }

    // 0x10006ba80
    void Minimap::DrawTile(int arg1, int arg2, int arg3, int arg4, int arg5,
                           const dash3d::EntityHighlight& entityHighlight,
                           const rs2lib::InterfaceGraphicMask& interfaceGraphicMask) {
        uint8_t uVar3;
        Pix32* this_01;
        uint64_t extraout_var;
        int iVar7;
        int iVar8;
        Pix32 local_78;

        unsigned short uVar4 = entityHighlight.GetEntityID();
        uint8_t bVar1 = entityHighlight.HasTileFill();
        uint8_t bVar2 = entityHighlight.HasTileHighlight();
        unsigned int local_34 = (unsigned int)bVar2 << 25 | (unsigned int)bVar1 << 24 | (unsigned int)uVar4;
        int* this_00 = &field_25632;
        long lVar5 = eastl::vector_map<int, graphics::Pix32>::find(*this_00);
        long lVar6 = this_00->end();
        if (lVar5 == lVar6) {
            CreateTileHighlightSprite((int)&local_78, (EntityHighlight*)(unsigned long)m_zoom);
            this_01 = (Pix32*)(*this_00)[local_34];
            *this_01 = local_78;
            lVar5 = (*this_00)[local_34];
        } else {
            lVar5 = lVar5 + 8;
        }
        if ((unsigned int)(arg4 * arg4 + arg3 * arg3) < 6401) {
            RotatePointOnMinimap(arg3, arg4, arg5 & 2047U, (int*)&local_78, (int*)&local_78.field_48);
            iVar8 = ((unsigned int)(interfaceGraphicMask.field_0 - (interfaceGraphicMask.field_0 >> 31)) >> 1) + arg1;
            iVar7 = ((unsigned int)(interfaceGraphicMask.field_4 - (interfaceGraphicMask.field_4 >> 31)) >> 1) + arg2;
            uVar3 = field_26056->GetPix2D();
            (**(void (**)(...))(*(long*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3) + 280))(
                (long*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3), lVar5, 0, *(int*)(lVar5 + 44) << 4,
                (iVar8 + (int)local_78.field_0) * 16, (iVar7 - local_78._48_4_) * 16, (arg5 & 2047U) << 5 ^ 65535,
                4096);
        }
    }

    // 0x10006bc20
    void Minimap::DrawDot(int arg1, int arg2, int arg3, int arg4, int arg5, graphics::Pix32* pix32,
                          const rs2lib::InterfaceGraphicMask& interfaceGraphicMask) {
        uint8_t uVar1;
        uint64_t extraout_var;
        long* plVar2;

        if ((pix32 != nullptr) && (arg5 < 6401)) {
            uVar1 = field_26056->GetPix2D();
            plVar2 = (long*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
            if (arg5 < 2501) {
                (**(void (**)(...))(*plVar2 + 176))(plVar2, pix32, arg3 + arg1, arg4 + arg2);
            } else {
                (**(void (**)(...))(*plVar2 + 248))(plVar2, pix32, arg3, arg4, arg1, arg2, interfaceGraphicMask.field_0,
                                                    interfaceGraphicMask.field_4, &interfaceGraphicMask.field_32,
                                                    &interfaceGraphicMask.field_8);
            }
        }
    }

    // 0x10006bcf0
    void Minimap::DrawDotWithString(int arg1, int arg2, int arg3, int arg4, int arg5, MiniDotCategory miniDotCategory,
                                    eastl::string str, const rs2lib::InterfaceGraphicMask& interfaceGraphicMask) {
        unsigned int arg6;
        eastl::string local_68;

        int local_3c = 0;
        int iVar1 = interfaceGraphicMask.field_0;
        int local_48 = interfaceGraphicMask.field_4;
        int local_44 = arg3;
        int local_40 = arg4;
        shared_ptr<graphics::Pix32>* this_00 = &field_25800[(unsigned long)miniDotCategory];
        long lVar3 = (*this_00).operator->();
        int iVar2 = *(int*)(lVar3 + 40);
        lVar3 = (*this_00).operator->();
        GetDotPosition(&local_44, &local_40, &local_3c, arg5, iVar1, local_48, iVar2, *(int*)(lVar3 + 44));
        int arg5_00 = local_3c;
        iVar2 = local_40;
        iVar1 = local_44;
        auto pix32 = this_00->end();
        DrawDot(arg1, arg2, iVar1, iVar2, arg5_00, pix32, interfaceGraphicMask);
        unsigned int* puVar4 = &field_25912[(unsigned long)miniDotCategory];
        if (*(char*)((long)puVar4 + 13) != '\0') {
            arg6 = *puVar4;
            local_68 = eastl::string(*str);
            DrawString(arg1, arg2, iVar1, iVar2 - 2, arg5_00, arg6, &local_68, interfaceGraphicMask);
        }
    }

    // 0x10006bea0
    void Minimap::DrawArrow(int arg1, int arg2, int arg3, int arg4, int arg5, graphics::Pix32* pix32,
                            const rs2lib::InterfaceGraphicMask& interfaceGraphicMask) {
        int iVar1;
        uint8_t uVar2;
        array<int, _2048ul>* paVar3;
        int* piVar4;
        uint64_t extraout_var;
        uint64_t uVar5;
        uint64_t uVar6;
        double dVar7;
        double in_XMM1_Qa;
        double dVar8;

        int local_34 = arg4 * arg4 + arg3 * arg3;
        int local_3c = arg3;
        int local_38 = arg4;
        if ((arg3 * arg3 + arg4 * arg4) - 4226U < 85774) {
            paVar3 = dash3d::Pix3D::GetSinTable();
            piVar4 = (int*)(*paVar3)[(unsigned long)(arg5 & 2047)];
            iVar1 = *piVar4;
            paVar3 = dash3d::Pix3D::GetCosTable();
            piVar4 = (int*)(*paVar3)[(unsigned long)(arg5 & 2047)];
            uVar6 = atan2<int, int>(*piVar4 * arg3 + iVar1 * arg4 >> 16, *piVar4 * arg4 - iVar1 * arg3 >> 16);
            iVar1 = interfaceGraphicMask.field_0;
            dVar7 = (double)___sincos_stret();
            dVar8 = (double)(iVar1 / 2 - 25);
            uVar2 = field_26056->GetPix2D();
            uVar5 = *field_26080;
            (**(void (**)(...))(*(long*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2) + 264))(
                uVar6, (long*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2), uVar5,
                interfaceGraphicMask.field_0 / 2 + arg1 + (int)(dVar7 * dVar8) - 10,
                interfaceGraphicMask.field_4 / 2 + (arg2 - (int)(in_XMM1_Qa * dVar8)) - 20, 20, 20, 15, 15, 256);
        } else {
            GetDotPosition(&local_3c, &local_38, &local_34, arg5, interfaceGraphicMask.field_0,
                           interfaceGraphicMask.field_4, pix32->field_40, pix32->field_44);
            DrawDot(arg1, arg2, local_3c, local_38, local_34, pix32, interfaceGraphicMask);
        }
    }

    // 0x10006c060
    void Minimap::CompassDraw(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3, int arg4, int arg5) {
        uint32_t uVar1;
        uint32_t uVar2;
        uint64_t extraout_var;
        uint64_t uVar5;
        uint32_t* puVar6;
        long lVar7;
        long lVar8;
        uint32_t in_register_0000008c;

        uint8_t uVar3 = field_26056->GetPix2D();
        Pix2D* this_00 = (Pix2D*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3);
        bool local_31 = false;
        shared_ptr<configdecoder::ObjType>* objType = ((IfType*)ifType.operator->())->GetMask(false, local_31);
        if (!*objType == nullptr) {
            if (m_toggle < 3) {
                uVar5 = *field_26064;
                puVar6 = (uint32_t*)(*objType).operator->();
                uVar1 = *puVar6;
                lVar7 = (*objType).operator->();
                uVar2 = *(uint32_t*)(lVar7 + 4);
                lVar7 = (*objType).operator->();
                lVar8 = (*objType).operator->();
                (**(void (**)(...))(this_00->field_0 + 256))(this_00, uVar5, arg2, arg3, uVar1, uVar2, 25, 25,
                                                             (((uint64_t)in_register_0000008c << 32) | (uint32_t)arg5),
                                                             256, lVar7 + 32, lVar8 + 8);
            } else {
                lVar7 = (*objType).operator->();
                lVar8 = (*objType).operator->();
                this_00->FillScanLine(arg2, arg3, 4278190080, *((lVar7 + 32)), *((lVar8 + 8)));
            }
        }
    }

    // 0x10006c1f0
    Pix32* CreateTileHighlightSprite(int arg1, const dash3d::EntityHighlight& entityHighlight) {
        uint8_t bVar2;
        unsigned int* puVar4;
        EntityHighlight* in_RDX;
        EntityHighlight* arg1_01;
        unsigned long uVar7;
        unsigned long arg1_02;
        uint32_t in_register_0000003c;
        long lVar9;
        uint8_t* puVar10;
        Pix32* local_60;
        unsigned long local_58;
        uint8_t* local_48;
        EntityHighlight* local_40;

        return local_60 = (Pix32*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        EntityHighlight* pEVar11 = (EntityHighlight*)((unsigned long)entityHighlight & 4294967295);
        SharedArray<unsigned int> local_78((unsigned long)(unsigned int)((int)entityHighlight * (int)entityHighlight));
        bool cVar1 = in_RDX->HasTileOutline();
        unsigned int uVar12 = 255;
        if (!cVar1) {
            bVar2 = in_RDX->GetTileTintAlpha();
            uVar12 = (unsigned int)bVar2;
        }
        cVar1 = in_RDX->HasTileFill();
        unsigned int uVar5 = 0;
        if (cVar1) {
            bVar2 = in_RDX->GetTileTintAlpha();
            uVar5 = (unsigned int)bVar2;
        }
        unsigned int uVar6 = uVar5 + uVar12 >> 1;
        if ((int)entityHighlight < 5) {
            uVar5 = uVar6;
        }
        EntityHighlight* local_50 = in_RDX;
        unsigned int uVar3 = jag::math::RunetekColour::HSLToRGB(in_RDX->GetEntityID());
        if ((int)entityHighlight < 5) {
            uVar12 = uVar6;
        }
        local_48 = (uint8_t*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)((int)entityHighlight - 1));
        uVar12 = uVar12 << 24 | uVar3;
        EntityHighlight* local_38 = pEVar11;
        if (0 < (int)entityHighlight) {
            arg1_01 = nullptr;
            local_40 = pEVar11;
            do {
                puVar4 = &local_78[(unsigned long)arg1_01];
                *puVar4 = uVar12;
                puVar4 = &local_78[(long)((int)entityHighlight * ((int)entityHighlight - 1) + (int)arg1_01)];
                *puVar4 = uVar12;
                arg1_01 = (EntityHighlight*)((long)&arg1_01->m_colour + 1);
            } while (local_40 != arg1_01);
        }
        if (2 < (int)local_38) {
            uVar7 = (unsigned long)(int)local_38;
            local_40 = (EntityHighlight*)(long)(int)local_48;
            lVar9 = ((unsigned long)local_48 & 4294967295) - 1;
            local_58 = uVar7;
            do {
                puVar4 = &local_78[uVar7];
                *puVar4 = uVar12;
                puVar4 = &local_78[(unsigned long)((long)&local_40->m_colour + uVar7)];
                *puVar4 = uVar12;
                uVar7 = uVar7 + local_58;
                lVar9 = lVar9 - 1;
            } while (lVar9 != 0);
        }
        cVar1 = local_50->HasTileFill();
        if ((cVar1) && (2 < (int)local_38)) {
            uVar7 = (unsigned long)(int)local_38;
            local_50 = (EntityHighlight*)((unsigned long)local_48 & 4294967295);
            local_48 = &local_50[-1].field_15;
            local_40 = (EntityHighlight*)&DAT_00000001;
            local_58 = uVar7;
            do {
                arg1_02 = local_58 + 1;
                puVar10 = local_48;
                local_58 = arg1_02;
                do {
                    puVar4 = &local_78[arg1_02];
                    *puVar4 = uVar3 & 16777215 | uVar5 << 24;
                    arg1_02 = arg1_02 + uVar7;
                    puVar10 = puVar10 - 1;
                } while (puVar10 != nullptr);
                local_40 = (EntityHighlight*)((long)&local_40->m_colour + 1);
            } while (local_40 != local_50);
        }
        new (local_60) graphics::Pix32(local_78, (int)local_38, (int)local_38);
    }

    // 0x10006c540
    void Minimap::DrawString(int arg1, int arg2, int arg3, int arg4, int arg5, unsigned int arg6, eastl::string str,
                             const rs2lib::InterfaceGraphicMask& interfaceGraphicMask) {
        uint8_t uVar2;
        PixfontGeneric* this_00;
        uint64_t extraout_var;

        if ((str->empty() == '\0') && (arg5 < 6401)) {
            str->make_lower();
            this_00 = (PixfontGeneric*)field_26024.operator->();
            uVar2 = field_26056->GetPix2D();
            this_00->CentreStringScanline(
                *str, arg3, arg4, arg6, 0, *((Pix2D*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2)), arg1, arg2,
                interfaceGraphicMask.field_4, interfaceGraphicMask.field_32, interfaceGraphicMask.field_8);
        }
    }

    // 0x10006c600
    void Minimap::GlMinimap(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3, bool arg4) {
        uint8_t* puVar1;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_00;
        shared_ptr<configdecoder::ObjType>* this_01;
        char cVar2;
        bool cVar3;
        int iVar5;
        world* world;
        CoordMapSquare* pCVar6;
        int* piVar7;
        long lVar8;
        array<int, _2048ul>* this_05;
        ServerConnection* pSVar9;
        Isaac* isaac;
        ShuffledPacket3* this_06;
        ShuffledPacket4* pSVar10;
        unsigned long uVar11;
        uint32_t in_register_00000081;
        int iVar12;
        int iVar13;
        float fVar14;
        uint8_t local_d0[8];
        SuperShuffledPacketFactory local_90;
        shared_ptr<rs2lib::IfType>* local_80;
        unique_ptr<ServerConnection>* local_78;
        shared_ptr<ClientPlayer>* local_68;
        int local_58;
        float local_54;
        int local_50;
        int local_4c;
        array<int, 2048ul>* local_48;
        shared_ptr<configdecoder::ObjType>* local_40;
        bool local_32;
        char local_31;

        uint32_t local_5c = (((uint32_t)in_register_00000081 << 8) | (uint8_t)arg4);
        if ((m_toggle != 3) && (m_toggle != 0)) {
            return;
        }
        auto this_02 = Client::Instance();
        if (((this_02->field_8504 & 4294967294U) == 2) && (cVar2 = this_02->field_52344->IsOpen(), !cVar2)) {
            local_32 = false;
            local_80 = ifType;
            local_40 = ((IfType*)ifType.operator->())->GetMask(true, local_32);
            uVar11 = 0;
            cVar2 = *local_40 == nullptr;
            if (cVar2) {
                return;
            }
            pCVar6 = &this_02->field_8560[uVar11];
            iVar13 = pCVar6->GetX();
            pCVar6 = &this_02->field_8576[uVar11];
            iVar5 = pCVar6->GetX();
            cVar3 = ((InterfaceGraphicMask*)(*local_40).operator->())->pointInside(iVar13 - arg2, iVar5 - arg3);
            this_01 = local_40;
            if (cVar3) {
                local_31 = cVar2;
                piVar7 = (int*)(*local_40).operator->();
                iVar12 = (iVar13 - arg2) - *piVar7 / 2;
                lVar8 = (*this_01).operator->();
                local_40 = (shared_ptr<configdecoder::ObjType>*)(((uint64_t)local_40._4_4_ << 32) |
                                                                 (uint32_t)((iVar5 - arg3) - *(int*)(lVar8 + 4) / 2));
                uVar11 = (unsigned long)(this_02->field_53112 & 2047);
                this_05 = dash3d::Pix3D::GetSinTable();
                local_48 = (array<int, 2048ul>*)dash3d::Pix3D::GetCosTable();
                piVar7 = (int*)(*this_05)[uVar11];
                iVar13 = *piVar7;
                piVar7 = (int*)(*local_48)[uVar11];
                iVar5 = *piVar7;
                local_48 = (array<int, 2048ul>*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)iVar12);
                local_54 = 4.0 / (float)(int)m_zoom;
                fVar14 = (float)((int)(iVar5 * iVar12 + iVar13 * (PublishingPlatformType)local_40) >> 11) * local_54;
                puVar1 = &this_02->field_52016;
                local_50 = iVar13;
                lVar8 = (*puVar1).operator->();
                iVar13 = *(int*)(lVar8 + 24);
                local_68 = (shared_ptr<ClientPlayer>*)puVar1;
                lVar8 = (*puVar1).operator->();
                local_58 = *(int*)(lVar8 + 28);
                local_78 = (unique_ptr<ServerConnection>*)&this_02->field_19120;
                pSVar9 = (ServerConnection*)(*local_78).operator->();
                isaac = pSVar9->GetOutgoingEncryption();
                *local_d0 = shared::ClientMessage::MakeClientMessage(41, *isaac);
                ((local_d0 + 8))->p1<shared::LoginProt::ID>(18);
                local_90 = SuperShuffledPacketFactory(*((local_d0 + 8)));
                this_06 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                local_4c = (int)fVar14 + iVar13 >> 7;
                this_06->p2<int>(this_02->field_53220 + local_4c);
                iVar5 = local_58 - (int)(local_54 * (float)((int)(iVar5 * (PublishingPlatformType)local_40 -
                                                                  local_50 * (PublishingPlatformType)local_48) >>
                                                            11)) >>
                        7;
                pSVar10 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                pSVar10->p2<int>(this_02->field_53224 + iVar5);
                puVar1 = &this_02->field_8496;
                pSVar10 = (ShuffledPacket4*)local_90.HeapBeginPtr();
                cVar2 = puVar1->KeyHeld(107);
                iVar13 = 0;
                this_00 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_d0 + 8);
                if (cVar2) {
                    iVar13 = puVar1->KeyHeld(81) + 1;
                }
                pSVar10->p1<int>(iVar13);
                this_00->p1<shared::LoginProt::ID>((PublishingPlatformType)local_48);
                this_00->p1<shared::LoginProt::ID>((PublishingPlatformType)local_40);
                this_00->p2<int>(this_02->field_53112);
                this_00->p1<shared::LoginProt::ID>(57);
                this_00->p1<shared::LoginProt::ID>(0);
                this_00->p1<shared::LoginProt::ID>(0);
                this_00->p1<shared::LoginProt::ID>(89);
                lVar8 = (*local_68).operator->();
                this_00->p2<int>(*(unsigned int*)(lVar8 + 24));
                lVar8 = (*local_68).operator->();
                this_00->p2<int>(*(unsigned int*)(lVar8 + 28));
                this_00->p1<shared::LoginProt::ID>(63);
                pSVar9 = (ServerConnection*)(*local_78).operator->();
                pSVar9->SendClientMessage(*local_d0);
                this_02->SetPlayerDestination(local_4c, iVar5);
                puVar1->SetCurrentAction(17);
                cVar2 = local_31;
            }
            this = this;
            ifType = local_80;
            if (cVar2) {
                return;
            }
        }
        if ((char)local_5c == '\0') {
            new (local_d0) shared_ptr();
            this_02->SetInterfaceInteraction(*local_d0);
        } else {
            this_02->SetInterfaceInteraction(ifType);
            if (m_zoomable != false) {
                iVar13 = this_02->field_53140;
                if ((iVar13 == 0) && (iVar13 = *(int*)&this_02->field_53148, iVar13 == 0)) {
                    iVar13 = 0;
                } else {
                    iVar13 = (iVar13 >> 31) * -2 - 1;
                }
                world = (world*)this_02->field_19184.get();
                SetZoom(world, iVar13 + m_zoom, this_02->field_51984);
            }
        }
    }

    // 0x10006cb70
    uint8_t[16] Minimap::GetDotStyle(MiniDotCategory miniDotCategory) {
        uint8_t(*pauVar1)[16];

        if (miniDotCategory < 7) {
            pauVar1 = (uint8_t(*)[16])field_25912[(unsigned long)miniDotCategory];
            return *pauVar1;
        }
        return (unsigned __int128)2 << 64;
    }

    // 0x10006cbb0
    void Minimap::SetDotVisible(MiniDotCategory miniDotCategory, bool arg2) {
        long lVar1;

        if (miniDotCategory < 7) {
            lVar1 = field_25912[(unsigned long)miniDotCategory];
            *(bool*)(lVar1 + 12) = arg2;
        }
    }

    // 0x10006cbe0
    bool Minimap::GetDotVisible(MiniDotCategory miniDotCategory) {
        long lVar1;

        if (miniDotCategory < 7) {
            lVar1 = field_25912[(unsigned long)miniDotCategory];
            return *(char*)(lVar1 + 12) != '\0';
        }
        return false;
    }

    // 0x10006cc10
    void Minimap::SetDrawDisplayname(MiniDotCategory miniDotCategory, bool arg2) {
        long lVar1;

        if (miniDotCategory < 7) {
            lVar1 = field_25912[(unsigned long)miniDotCategory];
            *(bool*)(lVar1 + 13) = arg2;
        }
    }

    // 0x10006cc40
    bool Minimap::GetDrawDisplayname(MiniDotCategory miniDotCategory) {
        long lVar1;

        if (miniDotCategory < 7) {
            lVar1 = field_25912[(unsigned long)miniDotCategory];
            return *(char*)(lVar1 + 13) != '\0';
        }
        return false;
    }

    // 0x1000e5d50: Minimap::GetLevel() has the same machine code as rs2lib::CoordZoneSource::GetRotation() const

} // namespace jag::oldscape::minimap
