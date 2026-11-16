// projects/osclient/minimap/Minimap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "Minimap.h"

namespace jag::oldscape::minimap {
    // 0x10005fe50: the linker folded this into widgets::Widget::SetBorderColour(unsigned int), which has identical code
    Minimap::SetLevel(int);

    // 0x100069240, 656 bytes, base-object constructor, placed by class name
    // Minimap::Minimap()
    void Minimap::Minimap() {
        long lVar1;
        _func_decltype_nullptr* p_Var2;
        Minimap* pMVar3;
        long lVar4;

        field_0 = 0;
        field_8 = 1;
        m_level = -1;
        ___bzero(&field_16);
        lVar4 = 0;
        pMVar3 = this;
        do {
            lVar1 = 0;
            do {
                *(undefined8*)(&pMVar3->field_32 + lVar1) = 0;
                *(undefined4*)(&pMVar3->field_40 + lVar1) = 4294967295;
                new ((&pMVar3->field_48 + lVar1), (_func_decltype_nullptr*)0)
                    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
                lVar1 = lVar1 + 32;
            } while (lVar1 != 6400);
            lVar4 = lVar4 + 1;
            pMVar3 = (Minimap*)&pMVar3->field_6400;
        } while (lVar4 != 4);
        new (&field_25632) eastl::vector_map<int, graphics::Pix32, eastl::less<int>, eastl::allocator,
                                             eastl::vector<eastl::pair<int, graphics::Pix32>, eastl::allocator>>();
        new (&field_25672) graphics::Pix32();
        m_zoom = 4;
        p_Var2 = (_func_decltype_nullptr*)&DAT_00000001;
        new (&field_25728, 1, 1) graphics::NXTPix2D();
        m_toggle = 0;
        m_zoomable = true;
        m_iconZoomLimit = 3;
        std::array<shared_ptr<graphics::Pix32>, 7ul>::array();
        new (&field_26024, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_26040, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_26056 = (undefined8**)0;
        new (&field_26064, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_26080, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_26096) Array<graphics::Pix32, eastl::allocator>();
        new (&field_26120) Array<graphics::Pix32, eastl::allocator>();
    }

    // 0x100069540, 16 bytes, complete-object constructor, placed by class name
    // Minimap::Minimap(): jumps straight to the base-object constructor

    // 0x100069550, 304 bytes, base-object destructor, placed by class name
    // Minimap::~Minimap()
    void Minimap::~Minimap() {
        Destroy(this);
        (&field_26120)->~Array();
        (&field_26096)->~Array();
        (&field_26080)->~shared_ptr();
        (&field_26064)->~shared_ptr();
        (&field_26040)->~shared_ptr();
        (&field_26024)->~shared_ptr();
        (&field_25800)->~array();
        (&field_25728)->~NXTPix2D();
        (&field_25672)->~BlendedGround();
        (&field_25632)->~vector_map();
        (&field_32)->~array();
    }

    // 0x100069680, 192 bytes, placed by class name
    // Minimap::Destroy()
    void Minimap::Destroy() {
        shared_ptr local_30;

        (&field_25632)->clear();
        (&field_26096)->clear();
        (&field_26120)->clear();
        shared_ptr<Array<graphics::Pix8, eastl::allocator>>::reset();
        shared_ptr<graphics::Pix32>::reset();
        shared_ptr<graphics::Pix32>::reset();
        shared_ptr<jstring::PixfontGeneric>::reset();
        new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&field_25800, &local_30)->fill();
        local_30.~shared_ptr();
        field_26056 = (undefined8**)0;
    }

    // 0x100069740, 16 bytes, complete-object destructor, placed by class name
    // Minimap::~Minimap(): jumps straight to the base-object destructor

    // 0x100069750, 400 bytes, placed by class name
    // Minimap::TryLoadResources(shared_ptr<Array<graphics::Pix8, eastl::allocator> >, graphics::NXTPixToolkit*, defaults::GraphicsDefaults, jagex3::Js5*)
    char Minimap::TryLoadResources(long param_2, shared_ptr* param_2_00, undefined8 param_3, Js5* param_4,
                                   undefined8 param_5, undefined8 param_6, undefined8 param_1, int param_8,
                                   undefined8 param_9, undefined8 param_10, undefined8 param_11) {
        bool bVar1;
        char cVar2;
        char cVar3;
        pixloader local_48;

        shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator=(
            (shared_ptr<Array<graphics::Pix8, eastl::allocator>>*)(param_2 + 26040), param_2_00);
        *(undefined8*)(param_2 + 26056) = param_3;
        bVar1 = operator==((shared_ptr*)(param_2 + 26064), (_func_decltype_nullptr*)0);
        cVar3 = !bVar1;
        if (!(bool)cVar3) {
            local_48.Makepix32(param_4, param_1._4_4_, 0);
            shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)(param_2 + 26064),
                                                   (shared_ptr*)&local_48);
            local_48.~shared_ptr();
        }
        bVar1 = operator==((shared_ptr*)(param_2 + 26080), (_func_decltype_nullptr*)0);
        if (bVar1) {
            local_48.Makepix32(param_4, param_8, 0);
            shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)(param_2 + 26080),
                                                   (shared_ptr*)&local_48);
            local_48.~shared_ptr();
        } else {
            cVar3 = cVar3 + '\x01';
        }
        cVar2 = ((param_2 + 26096))->empty();
        if (cVar2 == '\0') {
            cVar3 = cVar3 + '\x01';
        } else {
            local_48.Makepix32Array(param_4, param_10._4_4_, 0);
            Array<graphics::Pix32, eastl::allocator>::operator=(
                (Array<graphics::Pix32, eastl::allocator>*)(param_2 + 26096), (Array*)&local_48);
            local_48.~Array();
        }
        cVar2 = ((param_2 + 26120))->empty();
        if (cVar2 == '\0') {
            cVar3 = cVar3 + '\x01';
        } else {
            local_48.Makepix32Array(param_4, param_11._4_4_, 0);
            Array<graphics::Pix32, eastl::allocator>::operator=(
                (Array<graphics::Pix32, eastl::allocator>*)(param_2 + 26120), (Array*)&local_48);
            local_48.~Array();
        }
        return cVar3;
    }

    // 0x1000698e0, 272 bytes, placed by class name
    // Minimap::SetDotStyles(shared_ptr<jstring::PixfontGeneric>)
    void Minimap::SetDotStyles(shared_ptr param_1) {
        long lVar1;
        ulong uVar2;
        shared_ptr* in_RSI;

        uVar2 = 0;
        SetDotStyle(this, 0, 1168916, 1159950, 0);
        SetDotStyle(this, 1, 3017694, 660628, 0);
        SetDotStyle(this, 2, 10948840, 5178457, 0);
        SetDotStyle(this, 3, 15443721, 12224013, 0);
        SetDotStyle(this, 4, 16777215, 14606046, 0);
        SetDotStyle(this, 5, 16711680, 12386304, 0);
        SetDotStyle(this, 6, 16773632, 13221632, 0);
        do {
            lVar1 = std::array<MiniDotStyle, 7ul>::operator[]((array<MiniDotStyle, 7ul>*)&field_25912, uVar2);
            *(undefined2*)(lVar1 + 12) = 1;
            uVar2 = uVar2 + 1;
        } while (uVar2 != 7);
        shared_ptr<jstring::PixfontGeneric>::operator=((shared_ptr<jstring::PixfontGeneric>*)&field_26024, in_RSI);
    }

    // 0x1000699f0, 368 bytes, placed by class name
    // Minimap::SetDotStyle(MiniDotCategory, unsigned int, unsigned int, int)
    void Minimap::SetDotStyle(uint param_2, uint param_3, uint param_4, uint param_5) {
        uint* puVar3;
        shared_ptr* this_00;
        Pix32* pPVar4;
        uint uVar5;
        shared_ptr<RSevenDebugPresetProvider> local_50[16];
        uint local_40;
        uint local_3c;

        if ((param_2 < 7) && (-1 < (int)param_5)) {
            puVar3 = (uint*)std::array<MiniDotStyle, 7ul>::operator[]((array<MiniDotStyle, 7ul>*)&field_25912,
                                                                      (ulong)param_2);
            uVar5 = *puVar3;
            local_40 = puVar3[1];
            local_3c = puVar3[2];
            this_00 = (shared_ptr*)std::array<shared_ptr<graphics::Pix32>, 7ul>::operator[](
                (array<shared_ptr<graphics::Pix32>, 7ul>*)&field_25800, (ulong)param_2);
            if ((!operator!=(this_00, (_func_decltype_nullptr*)0)) ||
                (((uVar5 != param_3 || (local_40 != param_4)) || (local_3c != param_5)))) {
                shared_ptr<graphics::Pix32>::reset();
                Array<graphics::Pix32, eastl::allocator>::operator[](
                    (Array<graphics::Pix32, eastl::allocator>*)&field_26120, 2);
                local_50->CopyUntrim();
                shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)this_00, (shared_ptr*)local_50);
                local_50->~shared_ptr();
                pPVar4 = (Pix32*)shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)this_00);
                pPVar4->Multiply(param_3);
                new (local_50) shared_ptr<dash3d::Decor>(this_00);
                pPVar4 = (Pix32*)shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)local_50);
                uVar5 = param_5;
                pPVar4->ScaleImageBounds(param_5);
                if (0 < (int)uVar5) {
                    uVar5 = param_5;
                    do {
                        pPVar4 =
                            (Pix32*)shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)local_50);
                        pPVar4->AddOutline(param_4);
                        uVar5 = uVar5 - 1;
                    } while (uVar5 != 0);
                }
                *puVar3 = param_3;
                puVar3[1] = param_4;
                puVar3[2] = param_5;
                local_50->~shared_ptr();
            }
        }
    }

    // 0x100069bc0, 16 bytes, placed by class name
    // Minimap::Redraw()
    void Minimap::Redraw() {
        m_level = -1;
    }

    // 0x100069bd0, 144 bytes, placed by class name
    // Minimap::ResizeBuffer(int)
    void Minimap::ResizeBuffer(int param_1) {
        int iVar1;
        NXTPix2D local_60;

        m_zoom = param_1;
        iVar1 = GetMinimapBufferSize(this);
        (&field_25672, iVar1, iVar1)->Create();
        new (&local_60) graphics::NXTPix2D((SharedArray*)&field_25672, iVar1, iVar1);
        graphics::NXTPix2D::operator=((NXTPix2D*)&field_25728, &local_60);
        local_60.~NXTPix2D();
    }

    // 0x100069c90, 672 bytes, placed by class name
    // Minimap::BuildBuffer(int, dash3d::world*)
    void Minimap::BuildBuffer(int param_1, world* param_2) {
        int iVar1;
        undefined1* this_00;
        int iVar2;
        int iVar3;
        ulong uVar4;
        undefined4* puVar5;
        int iVar6;
        int iVar7;
        ulong uVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;

        this_00 = &field_25672;
        uVar4 = this_00->HeapBeginPtr();
        if (uVar4 != 0) {
            uVar8 = 0;
            do {
                puVar5 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00, uVar8);
                *puVar5 = 4278190080;
                uVar8 = uVar8 + 1;
            } while (uVar4 != uVar8);
        }
        iVar2 = m_zoom;
        iVar3 = GetMinimapBufferSize(this);
        iVar1 = param_1 + 1;
        iVar6 = 1;
        do {
            iVar9 = (103 - iVar6) * iVar3 * iVar2 + iVar3 * 48 + iVar2 + 48;
            iVar11 = 1;
            do {
                uVar4 = ClientBuild::Read3DArray<signed char>((Array*)&ClientBuild::m_mapl, param_1, iVar11, iVar6);
                if ((uVar4 & 24) == 0) {
                    param_2->Render2DGround(this_00, iVar9, iVar3, iVar2, param_1, iVar11, iVar6);
                }
                if ((param_1 < 3) &&
                    (uVar4 = ClientBuild::Read3DArray<signed char>((Array*)&ClientBuild::m_mapl, iVar1, iVar11, iVar6),
                     (uVar4 & 8) != 0)) {
                    param_2->Render2DGround(this_00, iVar9, iVar3, iVar2, iVar1, iVar11, iVar6);
                }
                iVar9 = iVar9 + iVar2;
                iVar11 = iVar11 + 1;
            } while (iVar11 != 103);
            iVar6 = iVar6 + 1;
        } while (iVar6 != 103);
        iVar6 = -2565928;
        if (3 < m_zoom) {
            iVar6 = -1;
        }
        iVar9 = -2621440;
        if (3 < m_zoom) {
            iVar9 = -65536;
        }
        iVar11 = (iVar3 * 102 | 1U) * iVar2 + iVar3 * 48 + 48;
        iVar10 = 1;
        do {
            iVar12 = 1;
            iVar7 = iVar11;
            do {
                uVar4 = ClientBuild::Read3DArray<signed char>((Array*)&ClientBuild::m_mapl, param_1, iVar12, iVar10);
                if ((uVar4 & 24) == 0) {
                    DrawDetail(this, iVar2, iVar7, param_1, iVar12, iVar10, iVar6, iVar9, param_2);
                }
                if ((param_1 < 3) &&
                    (uVar4 = ClientBuild::Read3DArray<signed char>((Array*)&ClientBuild::m_mapl, iVar1, iVar12, iVar10),
                     (uVar4 & 8) != 0)) {
                    DrawDetail(this, iVar2, iVar7, iVar1, iVar12, iVar10, iVar6, iVar9, param_2);
                }
                iVar12 = iVar12 + 1;
                iVar7 = iVar7 + iVar2;
            } while (iVar12 != 103);
            iVar10 = iVar10 + 1;
            iVar11 = iVar11 - iVar3 * iVar2;
        } while (iVar10 != 103);
    }

    // 0x100069f30, 2048 bytes, placed by class name
    // Minimap::DrawDetail(int, int, int, int, int, int, int, dash3d::world*)
    void Minimap::DrawDetail(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7,
                             world* param_8) {
        undefined1* this_00;
        char cVar1;
        uint uVar2;
        int iVar3;
        uint uVar4;
        long lVar5;
        shared_ptr* psVar6;
        Array<graphics::Pix8, eastl::allocator>* pAVar7;
        Pix8* pPVar8;
        int* piVar9;
        long lVar10;
        undefined4* puVar11;
        int iVar12;
        int iVar13;
        ulong uVar14;
        undefined4 uVar15;
        ulong uVar16;
        shared_ptr<dash3d::Decor> local_88[20];
        ulong local_70;
        uint local_64;
        ulong local_60;
        Minimap* local_58;
        SharedArray<unsigned int>* local_48;
        float local_40;
        int local_3c;
        ulong local_38;

        local_58 = this;
        local_3c = GetMinimapBufferSize(this);
        local_40 = (float)param_1 * 0.25;
        local_38 = (ulong)(uint)param_1;
        lVar5 = param_8->WallType(param_3, param_4, param_5);
        local_70 = (ulong)(uint)param_4;
        if (lVar5 != 0) {
            uVar2 = param_8->TypeCode2(param_3, param_4, param_5, lVar5);
            cVar1 = dash3d::MousePickingHelper::IsActiveEntityTypecode(lVar5);
            if (cVar1 != '\0') {
                param_6 = param_7;
            }
            iVar3 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar5);
            psVar6 = (shared_ptr*)configdecoder::LocType::List(iVar3);
            shared_ptr<dash3d::Decor>::shared_ptr(local_88, psVar6);
            lVar5 = shared_ptr<configdecoder::LocType>::operator*((shared_ptr<configdecoder::LocType>*)local_88);
            if (*(int*)(lVar5 + 436) == -1) {
                local_64 = uVar2 >> 6 & 3;
                local_48 = (SharedArray<unsigned int>*)&local_58->field_25672;
                iVar3 = (int)local_38;
                uVar4 = iVar3 - 1;
                local_60 = (ulong)uVar4;
                if ((uVar2 & 29) == 0) {
                    if (local_64 == 0) {
                        if (0 < iVar3) {
                            lVar5 = (long)local_3c;
                            uVar16 = (ulong)param_2;
                            uVar14 = local_38 & 4294967295;
                            do {
                                piVar9 = (int*)SharedArray<unsigned int>::operator[](local_48, uVar16);
                                *piVar9 = param_6;
                                uVar16 = uVar16 + lVar5;
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                    } else if (local_64 == 1) {
                        if (0 < iVar3) {
                            uVar16 = (ulong)param_2;
                            uVar14 = local_38 & 4294967295;
                            do {
                                piVar9 = (int*)SharedArray<unsigned int>::operator[](local_48, uVar16);
                                *piVar9 = param_6;
                                uVar16 = uVar16 + 1;
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                    } else if (local_64 == 2) {
                        if (0 < iVar3) {
                            lVar5 = (long)local_3c;
                            uVar16 = (ulong)(int)(uVar4 + param_2);
                            uVar14 = local_38 & 4294967295;
                            do {
                                piVar9 = (int*)SharedArray<unsigned int>::operator[](local_48, uVar16);
                                *piVar9 = param_6;
                                uVar16 = uVar16 + lVar5;
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                    } else if (0 < iVar3) {
                        uVar16 = (ulong)(int)(local_3c * uVar4 + param_2);
                        uVar14 = local_38 & 4294967295;
                        do {
                            piVar9 = (int*)SharedArray<unsigned int>::operator[](local_48, uVar16);
                            *piVar9 = param_6;
                            uVar16 = uVar16 + 1;
                            uVar14 = uVar14 - 1;
                        } while (uVar14 != 0);
                    }
                }
                if ((uVar2 & 31) == 2) {
                    if (local_64 == 0) {
                        if (0 < (int)local_38) {
                            uVar16 = (ulong)param_2;
                            uVar14 = local_38 & 4294967295;
                            do {
                                piVar9 = (int*)SharedArray<unsigned int>::operator[](local_48, uVar16);
                                *piVar9 = param_6;
                                uVar16 = uVar16 + 1;
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                    } else if (local_64 == 3) {
                        if (0 < (int)local_38) {
                            lVar5 = (long)local_3c;
                            uVar16 = (ulong)param_2;
                            uVar14 = local_38 & 4294967295;
                            do {
                                piVar9 = (int*)SharedArray<unsigned int>::operator[](local_48, uVar16);
                                *piVar9 = param_6;
                                uVar16 = uVar16 + lVar5;
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                    } else if (local_64 == 1) {
                        if (0 < (int)local_38) {
                            lVar5 = (long)local_3c;
                            uVar16 = (ulong)((int)local_60 + param_2);
                            uVar14 = local_38 & 4294967295;
                            do {
                                piVar9 = (int*)SharedArray<unsigned int>::operator[](local_48, uVar16);
                                *piVar9 = param_6;
                                uVar16 = uVar16 + lVar5;
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                    } else if (0 < (int)local_38) {
                        uVar16 = (ulong)((int)local_60 * local_3c + param_2);
                        uVar14 = local_38 & 4294967295;
                        do {
                            piVar9 = (int*)SharedArray<unsigned int>::operator[](local_48, uVar16);
                            *piVar9 = param_6;
                            uVar16 = uVar16 + 1;
                            uVar14 = uVar14 - 1;
                        } while (uVar14 != 0);
                    }
                } else if ((uVar2 & 31) == 3) {
                    if (local_64 == 2) {
                        piVar9 = (int*)SharedArray<unsigned int>::operator[](
                            local_48, (long)(local_3c * (int)local_60 + (int)local_60 + param_2));
                    } else if (local_64 == 1) {
                        piVar9 = (int*)SharedArray<unsigned int>::operator[](local_48, (long)((int)local_60 + param_2));
                    } else if (local_64 == 0) {
                        piVar9 = (int*)SharedArray<unsigned int>::operator[](local_48, (long)param_2);
                    } else {
                        piVar9 = (int*)SharedArray<unsigned int>::operator[](
                            local_48, (long)(local_3c * (int)local_60 + param_2));
                    }
                    *piVar9 = param_6;
                }
            } else {
                pAVar7 = (Array<graphics::Pix8, eastl::allocator>*)
                    shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator*(
                        (shared_ptr<Array<graphics::Pix8, eastl::allocator>>*)&local_58->field_26040);
                pPVar8 = (Pix8*)Array<graphics::Pix8, eastl::allocator>::operator[](pAVar7, (long)*(int*)(lVar5 + 436));
                iVar3 = (int)((float)pPVar8->field_48 * local_40);
                if ((0 < iVar3) && (iVar12 = (int)((float)(int)pPVar8->field_52 * local_40), 0 < iVar12)) {
                    iVar13 = (int)local_38;
                    (&local_58->field_25728, pPVar8,
                     (*(int*)(lVar5 + 184) * iVar13 - iVar3) / 2 + (int)local_70 * iVar13 + 48,
                     (103 - (*(int*)(lVar5 + 188) + param_5)) * iVar13 + (*(int*)(lVar5 + 188) * iVar13 - iVar12) / 2 +
                         48,
                     iVar3, iVar12)
                        ->ScalePlotSprite();
                }
            }
            local_88->~shared_ptr();
            param_4 = (int)local_70;
        }
        iVar12 = param_5;
        iVar3 = param_3;
        lVar5 = param_8->SceneType(param_3, param_4, param_5);
        if (lVar5 != 0) {
            uVar2 = param_8->TypeCode2(iVar3, param_4, iVar12, lVar5);
            iVar3 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar5);
            psVar6 = (shared_ptr*)configdecoder::LocType::List(iVar3);
            shared_ptr<dash3d::Decor>::shared_ptr(local_88, psVar6);
            lVar10 = local_88->end();
            if (*(int*)(lVar10 + 436) == -1) {
                if ((uVar2 & 31) == 9) {
                    cVar1 = dash3d::MousePickingHelper::IsActiveEntityTypecode(lVar5);
                    uVar15 = 4293848814;
                    if (cVar1 != '\0') {
                        uVar15 = 4293787648;
                    }
                    this_00 = &local_58->field_25672;
                    if ((uVar2 & 64) == 0) {
                        if (0 < (int)local_38) {
                            uVar16 = local_38 & 4294967295;
                            iVar3 = param_2 + ((int)local_38 + -1) * local_3c;
                            iVar12 = 1 - local_3c;
                            do {
                                puVar11 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)this_00, (long)iVar3);
                                *puVar11 = uVar15;
                                iVar3 = iVar3 + iVar12;
                                uVar16 = uVar16 - 1;
                            } while (uVar16 != 0);
                        }
                    } else if (0 < (int)local_38) {
                        uVar16 = local_38 & 4294967295;
                        local_3c = local_3c + 1;
                        do {
                            puVar11 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)this_00, (long)param_2);
                            *puVar11 = uVar15;
                            param_2 = param_2 + local_3c;
                            uVar16 = uVar16 - 1;
                        } while (uVar16 != 0);
                    }
                }
            } else {
                pAVar7 = (Array<graphics::Pix8, eastl::allocator>*)
                    shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator*(
                        (shared_ptr<Array<graphics::Pix8, eastl::allocator>>*)&local_58->field_26040);
                pPVar8 =
                    (Pix8*)Array<graphics::Pix8, eastl::allocator>::operator[](pAVar7, (long)*(int*)(lVar10 + 436));
                iVar3 = (int)((float)pPVar8->field_48 * local_40);
                if ((0 < iVar3) && (iVar12 = (int)((float)(int)pPVar8->field_52 * local_40), 0 < iVar12)) {
                    iVar13 = (int)local_38;
                    (&local_58->field_25728, pPVar8,
                     (*(int*)(lVar10 + 184) * iVar13 - iVar3) / 2 + (int)local_70 * iVar13 + 48,
                     (103 - (*(int*)(lVar10 + 188) + param_5)) * iVar13 +
                         (*(int*)(lVar10 + 188) * iVar13 - iVar12) / 2 + 48,
                     iVar3, iVar12)
                        ->ScalePlotSprite();
                }
            }
            local_88->~shared_ptr();
            param_4 = (int)local_70;
            iVar12 = param_5;
            iVar3 = param_3;
        }
        lVar5 = param_8->GdType(iVar3, param_4, iVar12);
        if (lVar5 != 0) {
            iVar3 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(lVar5);
            psVar6 = (shared_ptr*)configdecoder::LocType::List(iVar3);
            shared_ptr<dash3d::Decor>::shared_ptr(local_88, psVar6);
            lVar5 = local_88->end();
            if (*(int*)(lVar5 + 436) != -1) {
                pAVar7 = (Array<graphics::Pix8, eastl::allocator>*)
                    shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator*(
                        (shared_ptr<Array<graphics::Pix8, eastl::allocator>>*)&local_58->field_26040);
                pPVar8 = (Pix8*)Array<graphics::Pix8, eastl::allocator>::operator[](pAVar7, (long)*(int*)(lVar5 + 436));
                iVar3 = (int)((float)pPVar8->field_48 * local_40);
                if ((0 < iVar3) && (iVar12 = (int)(local_40 * (float)(int)pPVar8->field_52), 0 < iVar12)) {
                    iVar13 = (int)local_38;
                    (&local_58->field_25728, pPVar8,
                     (int)local_70 * iVar13 + (*(int*)(lVar5 + 184) * iVar13 - iVar3) / 2 + 48,
                     (104 - (param_5 + *(int*)(lVar5 + 188))) * iVar13 + (*(int*)(lVar5 + 188) * iVar13 - iVar12) / 2 +
                         48,
                     iVar3 + iVar13, iVar12 + iVar13)
                        ->ScalePlotSprite();
                }
            }
            local_88->~shared_ptr();
        }
    }

    // 0x10006a730, 240 bytes, placed by class name
    // Minimap::AddMelIcon(int, int, int, int)
    void Minimap::AddMelIcon(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        int iVar2;
        MapElementType* this_00;
        array<MinimapElement, 200ul>* this_01;
        int* piVar3;
        shared_ptr<RSevenDebugPresetProvider> local_50[16];
        int* local_40;

        if (-1 < param_4) {
            iVar1 = ClientBuild::VisLevel(param_1, param_2, param_3);
            local_40 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&field_16, (long)iVar1);
            iVar2 = *local_40;
            if ((long)iVar2 < 200) {
                this_00 = (MapElementType*)configdecoder::MapElementType::List(param_4);
                if (this_00->field_69 != '\0') {
                    this_01 =
                        (array<MinimapElement, 200ul>*)std::array<std::array<MinimapElement, 200ul>, 4ul>::operator[](
                            (array<std::array<MinimapElement, 200ul>, 4ul>*)&field_32, (long)iVar1);
                    local_50->GetSprite(SUB81(this_00, 0));
                    piVar3 = (int*)std::array<MinimapElement, 200ul>::operator[](this_01, (long)iVar2);
                    shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)(piVar3 + 4),
                                                           (shared_ptr*)local_50);
                    local_50->~shared_ptr();
                    iVar2 = this_00->GetID();
                    piVar3[2] = iVar2;
                    *piVar3 = param_2;
                    piVar3[1] = param_3;
                    *local_40 = *local_40 + 1;
                }
            }
        }
    }

    // 0x10006a850, 256 bytes, placed by class name
    // Minimap::DeleteIcons(configdecoder::LocType*, int, int, int)
    void Minimap::DeleteIcons(LocType* param_1, int param_2, int param_3, int param_4) {
        uint uVar1;
        int iVar2;
        int iVar3;
        uint* puVar4;
        MapElementType* this_00;
        array<MinimapElement, 200ul>* this_01;
        MinimapElement* this_02;
        MinimapElement* pMVar5;
        ulong uVar6;

        puVar4 = (uint*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&field_16, (long)param_2);
        if (-1 < (int)param_1->field_432) {
            uVar1 = *puVar4;
            if ((0 < (int)uVar1) && (this_00 = (MapElementType*)configdecoder::MapElementType::List(param_1->field_432),
                                     this_00->field_69 != '\0')) {
                this_01 = (array<MinimapElement, 200ul>*)std::array<std::array<MinimapElement, 200ul>, 4ul>::operator[](
                    (array<std::array<MinimapElement, 200ul>, 4ul>*)&field_32, (long)param_2);
                uVar6 = 0;
                do {
                    this_02 = (MinimapElement*)std::array<MinimapElement, 200ul>::operator[](this_01, uVar6);
                    if (((*(int*)&this_02->field_0 == param_3) && (*(int*)((long)&this_02->field_0 + 4) == param_4)) &&
                        (iVar2 = this_02->field_8, iVar3 = this_00->GetID(), iVar2 == iVar3)) {
                        pMVar5 =
                            (MinimapElement*)std::array<MinimapElement, 200ul>::operator[](this_01, (ulong)(uVar1 - 1));
                        MinimapElement::operator=(this_02, pMVar5);
                        *puVar4 = *puVar4 - 1;
                        return;
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar1 != uVar6);
            }
        }
    }

    // 0x10006a980, 128 bytes, placed by class name
    // Minimap::SetZoom(dash3d::world*, int, int)
    void Minimap::SetZoom(world* param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;

        iVar1 = m_zoom;
        iVar2 = eastl::max<int>(param_2, 2);
        m_zoom = iVar2;
        iVar2 = eastl::min<jag::graphics::GraphicsQuality>(iVar2, 8);
        m_zoom = iVar2;
        if (iVar1 != iVar2) {
            ResizeBuffer(this, iVar2);
            (&field_25632)->clear();
            BuildBuffer(this, param_3, param_1);
        }
    }

    // 0x10006aa00, 144 bytes, placed by class name
    // RotatePointOnMinimap(int, int, int, int&, int&)
    void RotatePointOnMinimap(int param_1, int param_2, int param_3, int* param_4, int* param_5) {
        int iVar1;
        int iVar2;
        array<int, 2048ul>* this;
        array<int, 2048ul>* this_00;
        int* piVar3;

        this = (array<int, 2048ul>*)dash3d::Pix3D::GetSinTable();
        this_00 = (array<int, 2048ul>*)dash3d::Pix3D::GetCosTable();
        piVar3 = (int*)std::array<int, 2048ul>::operator[](this, (long)param_3);
        iVar1 = *piVar3;
        piVar3 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)param_3);
        iVar2 = *piVar3;
        *param_4 = iVar2 * param_1 + iVar1 * param_2 >> 16;
        *param_5 = iVar2 * param_2 - iVar1 * param_1 >> 16;
    }

    // 0x10006aaa0, 160 bytes, placed by class name
    // GetDotPosition(int&, int&, int&, int, int, int, int, int)
    void GetDotPosition(int* param_1, int* param_2, int* param_3, int param_4, int param_5, int param_6, int param_7,
                        int param_8) {
        undefined8 in_RAX;
        undefined8 local_38;

        *param_3 = *param_2 * *param_2 + *param_1 * *param_1;
        local_38 = in_RAX;
        RotatePointOnMinimap(*param_1, *param_2, param_4 & 2047, (int*)&local_38, (int*)((long)&local_38 + 4));
        *param_1 = (param_5 / 2 - param_7 / 2) + (int)local_38;
        *param_2 = (param_6 / 2 - param_8 / 2) - local_38._4_4_;
    }

    // 0x10006ab40, 3840 bytes, placed by class name
    // Minimap::Draw(shared_ptr<rs2lib::IfType> const&, int, int, int, int, int, int, int)
    ulong Minimap::Draw(shared_ptr* param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                        int param_7, int param_8) {
        undefined1* puVar1;
        shared_ptr<ClientPlayer>* this_00;
        InterfaceGraphicMask* pIVar2;
        char cVar3;
        bool bVar4;
        byte bVar5;
        undefined4 uVar6;
        float fVar7;
        int iVar8;
        int iVar9;
        Pix2D* pPVar10;
        IfType* this_01;
        shared_ptr* this_02;
        undefined7 extraout_var;
        undefined8 uVar11;
        undefined7 uVar20;
        long lVar12;
        world* this_03;
        Pix32* this_04;
        int* piVar13;
        Pix32* pPVar14;
        list* plVar15;
        shared_ptr<ClientObj>* this_05;
        ClientNpc* this_06;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar16;
        ClientPlayer* this_07;
        ClientPlayer* pCVar17;
        FriendSystem* this_08;
        DisplayName* pDVar18;
        basic_string* pbVar19;
        ulong uVar21;
        uint uVar22;
        Client* pCVar23;
        int iVar24;
        ulong uVar25;
        ulong uVar26;
        Minimap* this_09;
        uint uVar27;
        undefined8 in_stack_fffffffffffffe68;
        undefined8 in_stack_fffffffffffffe70;
        undefined4 uVar28;
        undefined8 in_stack_fffffffffffffe78;
        undefined4 uVar29;
        eastl::string local_168[32];
        eastl::string local_148[32];
        eastl::string local_128[32];
        shared_ptr local_108[2];
        int local_e4;
        int local_e0;
        int local_dc;
        Pix2D* local_d8;
        int local_cc;
        array<int, 4ul>* local_c8;
        CoordGrid local_c0;
        shared_ptr<ClientPlayer>* local_b0;
        array<MinimapElement, 200ul>* local_a8;
        ulong local_a0;
        uint local_98;
        uint local_94;
        ulong local_90;
        ulong local_88;
        int local_7c;
        float local_78;
        float local_74;
        InterfaceGraphicMask* local_70;
        int local_64;
        unique_ptr<FriendSystem, std::default_delete<FriendSystem>>* local_60;
        Minimap* local_58;
        undefined8 local_50;
        bool local_45;
        uint local_44;
        Client* local_40;
        undefined1 local_31;

        uVar28 = (undefined4)((ulong)in_stack_fffffffffffffe70 >> 32);
        uVar6 = (undefined4)((ulong)in_stack_fffffffffffffe68 >> 32);
        uVar29 = (undefined4)((ulong)in_stack_fffffffffffffe78 >> 32);
        local_e0 = param_5;
        local_dc = param_4;
        local_40 = (Client*)Client::Instance();
        pPVar10 = (Pix2D*)(*(code*)**field_26056)();
        local_45 = false;
        this_01 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        this_02 = (shared_ptr*)this_01->GetMask(false, &local_45);
        local_31 = operator==(this_02, (_func_decltype_nullptr*)0);
        uVar20 = extraout_var;
        if (!(bool)local_31) {
            local_70 = (InterfaceGraphicMask*)shared_ptr<rs2lib::InterfaceGraphicMask>::operator*(
                (shared_ptr<rs2lib::InterfaceGraphicMask>*)this_02);
            pPVar10->SetClipping(param_2, param_3, local_70->field_0 + param_2, local_70->field_4 + param_3);
            if ((m_toggle == 2) || (m_toggle == 5)) {
                uVar11 = pPVar10->FillScanLine(param_2, param_3, 4278190080, (Array*)&local_70->field_32,
                                               (Array*)&local_70->field_8);
            } else {
                local_50 = (shared_ptr<rs2lib::social::DisplayName>*)(CONCAT44(local_50._4_4_, local_40->field_53112) &
                                                                      18446744069414586367);
                local_64 = m_zoom;
                local_60._0_4_ = 128.0 / (float)local_64;
                local_64 = local_64 - (local_64 >> 31);
                local_b0 = (shared_ptr<ClientPlayer>*)local_40->field_52016;
                lVar12 = shared_ptr<ClientPlayer>::operator->(local_b0);
                local_74 = 1.0 / local_60._0_4_;
                uVar22 = (uint)((float)*(int*)(lVar12 + 24) * local_74);
                lVar12 = shared_ptr<ClientPlayer>::operator->(local_b0);
                pIVar2 = local_70;
                local_44 = (uint)((float)*(int*)(lVar12 + 28) * local_74);
                pPVar14 = (Pix32*)CONCAT44(uVar6, uVar22 + 48);
                local_d8 = pPVar10;
                local_a0 = (ulong)uVar22;
                local_90 = (ulong)(uint)param_3;
                local_88 = (ulong)(uint)param_2;
                (**(code**)(pPVar10->field_0 + 256))(
                    pPVar10, &field_25672, param_2, param_3, local_70->field_0, local_70->field_4, pPVar14,
                    CONCAT44(uVar28, (m_zoom * 104 - local_44) + 48), CONCAT44(uVar29, (uint)local_50), 256,
                    &local_70->field_32, &local_70->field_8);
                this_00 = local_b0;
                uVar25 = (long)pIVar2->field_0 / (long)m_zoom;
                uVar27 = (int)(((uint)(uVar25 >> 31) & 1) + (int)uVar25) >> 1;
                lVar12 = shared_ptr<ClientPlayer>::operator->(local_b0);
                iVar24 = *(int*)(lVar12 + 24) >> 7;
                lVar12 = shared_ptr<ClientPlayer>::operator->(this_00);
                iVar8 = *(int*)(lVar12 + 28);
                uVar22 = ~uVar27;
                uVar6 = eastl::max<int>(0, iVar24 + uVar22);
                local_60 =
                    (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)CONCAT44(local_60._4_4_, uVar6);
                local_94 = eastl::max<int>(0, uVar22 + (iVar8 >> 7));
                fVar7 = (float)eastl::min<jag::graphics::GraphicsQuality>(104, uVar27 + iVar24 + 1);
                uVar6 = eastl::min<jag::graphics::GraphicsQuality>(104);
                local_50 = (shared_ptr<rs2lib::social::DisplayName>*)CONCAT44(local_50._4_4_, uVar6);
                local_78 = fVar7;
                if ((int)local_60._0_4_ < (int)fVar7) {
                    puVar1 = &local_40->field_19184;
                    fVar7 = local_60._0_4_;
                    do {
                        uVar22 = local_94;
                        if ((int)local_94 < (int)(uint)local_50) {
                            do {
                                this_03 =
                                    (world*)
                                        std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                                            (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)puVar1);
                                this_04 = (Pix32*)this_03->GetHighlightOnTile(m_level, (int)fVar7, uVar22);
                                if ((this_04 != (Pix32*)0) && (cVar3 = this_04->HasTileHighlight(), cVar3 != '\0')) {
                                    DrawTile(this, (int)local_88, (int)local_90, m_zoom * (int)fVar7 - (int)local_a0,
                                             m_zoom * uVar22 - local_44, local_40->field_53112,
                                             (EntityHighlight*)this_04, local_70);
                                    pPVar14 = this_04;
                                }
                                uVar22 = uVar22 + 1;
                            } while ((uint)local_50 != uVar22);
                        }
                        fVar7 = (float)((int)fVar7 + 1);
                    } while (fVar7 != local_78);
                }
                local_64 = local_64 >> 1;
                local_58 = this;
                if (m_iconZoomLimit <= m_zoom) {
                    iVar8 = m_level;
                    local_a8 =
                        (array<MinimapElement, 200ul>*)std::array<std::array<MinimapElement, 200ul>, 4ul>::operator[](
                            (array<std::array<MinimapElement, 200ul>, 4ul>*)&field_32, (long)iVar8);
                    local_c8 = (array<int, 4ul>*)&field_16;
                    piVar13 = (int*)std::array<int, 4ul>::operator[](local_c8, (long)iVar8);
                    if (0 < *piVar13) {
                        local_98 = local_64 - (int)local_a0;
                        local_e4 = local_64 - local_44;
                        uVar25 = 0;
                        do {
                            uVar6 = (undefined4)((ulong)pPVar14 >> 32);
                            piVar13 = (int*)std::array<MinimapElement, 200ul>::operator[](local_a8, uVar25);
                            local_c0.field_0 = *piVar13 * m_zoom + local_98;
                            local_7c = m_zoom * piVar13[1] + local_e4;
                            local_cc = 0;
                            pvVar16 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(piVar13 + 4);
                            pPVar14 =
                                (Pix32*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar16);
                            if (pPVar14 == (Pix32*)0) {
                                bVar4 = (bool)configdecoder::MapElementType::List(piVar13[2]);
                                local_108->GetSprite(bVar4);
                                shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)pvVar16,
                                                                       local_108);
                                local_108->~shared_ptr();
                                pPVar14 =
                                    (Pix32*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar16);
                                if (pPVar14 == (Pix32*)0)
                                    goto LAB_10006aef0;
                            LAB_10006aff0:
                                pIVar2 = local_70;
                                GetDotPosition((int*)&local_c0, &local_7c, &local_cc, local_40->field_53112,
                                               local_70->field_0, local_70->field_4, pPVar14->field_40,
                                               pPVar14->field_44);
                                this = local_58;
                                DrawDot(local_58, (int)local_88, (int)local_90, local_c0.field_0, local_7c, local_cc,
                                        pPVar14, pIVar2);
                            } else {
                                if (pPVar14 != (Pix32*)0)
                                    goto LAB_10006aff0;
                            LAB_10006aef0:
                                uVar11 = logger::default_logger();
                                pPVar14 = (Pix32*)CONCAT44(uVar6, piVar13[2]);
                                logger::Logger::Log(uVar11, 0, 5,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/minimap/Minimap.cpp",
                                                    596, "Sprite not available yet for meltype %d", pPVar14);
                                this = local_58;
                            }
                            uVar25 = uVar25 + 1;
                            piVar13 = (int*)std::array<int, 4ul>::operator[](local_c8, (long)m_level);
                        } while ((long)uVar25 < (long)*piVar13);
                    }
                }
                local_c8 = (array<int, 4ul>*)&field_25912;
                local_98 = local_64 - (int)local_a0;
                local_64 = local_64 - local_44;
                pCVar23 = local_40;
                if ((int)local_60._0_4_ < (int)local_78) {
                    do {
                        uVar22 = local_94;
                        if ((int)local_94 < (int)(uint)local_50) {
                            do {
                                new (&local_c0) rs2lib::CoordGrid(pCVar23->m_playerLevel, (int)local_60._0_4_, uVar22);
                                plVar15 = (list*)pCVar23->GetObjectsOnTile(&local_c0);
                                new (local_108) eastl::list<shared_ptr<ClientObj>, eastl::allocator>(plVar15);
                                cVar3 = local_108->empty();
                                if (cVar3 == '\0') {
                                    lVar12 = std::array<MiniDotStyle, 7ul>::operator[](
                                        (array<MiniDotStyle, 7ul>*)local_c8, 5);
                                    uVar6 = (undefined4)((ulong)pPVar14 >> 32);
                                    if (*(char*)(lVar12 + 12) != '\0') {
                                        uVar27 = (uint)local_60._0_4_;
                                        iVar8 = m_zoom;
                                        local_a8 = (array<MinimapElement, 200ul>*)CONCAT44(local_a8._4_4_,
                                                                                           pCVar23->field_53112);
                                        this_05 = (shared_ptr<ClientObj>*)
                                            eastl::list<shared_ptr<ClientObj>, eastl::allocator>::front();
                                        lVar12 = shared_ptr<ClientObj>::operator->(this_05);
                                        local_c0.List(*(int*)(lVar12 + 24));
                                        lVar12 = shared_ptr<configdecoder::ObjType>::operator->(
                                            (shared_ptr<configdecoder::ObjType>*)&local_c0);
                                        eastl::string::basic_string(local_168, (basic_string*)(lVar12 + 8));
                                        pPVar14 = (Pix32*)CONCAT44(uVar6, 5);
                                        DrawDotWithString(local_58, local_88, local_90, iVar8 * uVar27 + local_98,
                                                          iVar8 * uVar22 + local_64, (ulong)local_a8 & 4294967295,
                                                          pPVar14, local_168, local_70);
                                        eastl::string::~basic_string(local_168);
                                        local_c0.~shared_ptr();
                                        pCVar23 = local_40;
                                        this = local_58;
                                    }
                                }
                                local_108->~list();
                                uVar22 = uVar22 + 1;
                            } while ((uint)local_50 != uVar22);
                        }
                        fVar7 = (float)((int)local_60._0_4_ + 1);
                        local_60 = (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)CONCAT44(
                            local_60._4_4_, fVar7);
                    } while (fVar7 != local_78);
                }
                iVar8 = pCVar23->GetLastNpcNum();
                if (0 < iVar8) {
                    iVar24 = 0;
                    do {
                        pCVar23 = local_40;
                        iVar9 = local_40->GetLastNpcId(iVar24);
                        this_06 = (ClientNpc*)pCVar23->GetClientNpc(iVar9);
                        if ((this_06 != (ClientNpc*)0) && (cVar3 = this_06->Ready(), cVar3 != '\0')) {
                            new (local_108) shared_ptr<dash3d::Decor>((shared_ptr*)&this_06->field_1024);
                            bVar4 = operator!=(local_108, (_func_decltype_nullptr*)0);
                            if (bVar4) {
                                lVar12 = shared_ptr<configdecoder::NpcType>::operator->(
                                    (shared_ptr<configdecoder::NpcType>*)local_108);
                                cVar3 = ((lVar12 + 488))->empty();
                                if (cVar3 == '\0') {
                                    shared_ptr<configdecoder::NpcType>::operator->(
                                        (shared_ptr<configdecoder::NpcType>*)local_108);
                                    local_c0.GetMultiNpc();
                                    shared_ptr<configdecoder::NpcType>::operator=(
                                        (shared_ptr<configdecoder::NpcType>*)local_108, (shared_ptr*)&local_c0);
                                    local_c0.~shared_ptr();
                                }
                            }
                            bVar4 = operator!=(local_108, (_func_decltype_nullptr*)0);
                            if (((bVar4) && (lVar12 = shared_ptr<configdecoder::NpcType>::operator->(
                                                 (shared_ptr<configdecoder::NpcType>*)local_108),
                                             *(char*)(lVar12 + 456) != '\0')) &&
                                (lVar12 = shared_ptr<configdecoder::NpcType>::operator->(
                                     (shared_ptr<configdecoder::NpcType>*)local_108),
                                 *(char*)(lVar12 + 520) != '\0')) {
                                lVar12 =
                                    std::array<MiniDotStyle, 7ul>::operator[]((array<MiniDotStyle, 7ul>*)local_c8, 6);
                                uVar6 = (undefined4)((ulong)pPVar14 >> 32);
                                if (*(char*)(lVar12 + 12) != '\0') {
                                    local_60 = (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)CONCAT44(
                                        local_60._4_4_, this_06->field_24);
                                    iVar9 = this_06->field_28;
                                    local_50 = (shared_ptr<rs2lib::social::DisplayName>*)CONCAT44(
                                        local_50._4_4_, local_40->field_53112);
                                    local_148->GetDisplayName();
                                    pPVar14 = (Pix32*)CONCAT44(uVar6, 6);
                                    DrawDotWithString(local_58, local_88, local_90,
                                                      (int)((float)(int)local_60._0_4_ * local_74) - (int)local_a0,
                                                      (int)((float)iVar9 * local_74) - local_44,
                                                      (ulong)local_50 & 4294967295, pPVar14, local_148, local_70);
                                    eastl::string::~basic_string(local_148);
                                }
                            }
                            local_108->~shared_ptr();
                        }
                        iVar24 = iVar24 + 1;
                    } while (iVar8 != iVar24);
                }
                uVar25 = (ulong)ReceivePlayerPositions::m_lastNum;
                puVar1 = &local_40->field_19216;
                this_09 = local_58;
                if (0 < (int)ReceivePlayerPositions::m_lastNum) {
                    local_60 = (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&local_40->field_52768;
                    uVar26 = 0;
                    do {
                        pvVar16 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                            std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                                (array<shared_ptr<ClientPlayer>, 2048ul>*)puVar1,
                                (long)(int)(&ReceivePlayerPositions::m_lastID)[uVar26]);
                        this_07 =
                            (ClientPlayer*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar16);
                        if (((this_07 != (ClientPlayer*)0) && (cVar3 = this_07->Ready(), cVar3 != '\0')) &&
                            ((this_07->field_1200 == '\0' &&
                              (pCVar17 = (ClientPlayer*)local_b0->end(), this_07 != pCVar17)))) {
                            this_08 = (FriendSystem*)
                                          std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                                              local_60);
                            local_50 = (shared_ptr<rs2lib::social::DisplayName>*)&this_07->field_992;
                            pDVar18 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator*(local_50);
                            this_09 = local_58;
                            cVar3 = this_08->IsIgnored(pDVar18);
                            if ((cVar3 == '\0') || (this_09->field_8 != '\0')) {
                                local_a8 =
                                    (array<MinimapElement, 200ul>*)CONCAT44(local_a8._4_4_, (float)this_07->field_24);
                                local_78 = (float)this_07->field_28;
                                cVar3 = this_07->IsOnlineFriend();
                                uVar21 = 0;
                                if (cVar3 == '\0') {
                                    lVar12 = shared_ptr<ClientPlayer>::operator->(local_b0);
                                    if ((*(int*)(lVar12 + 1196) != 0) && (this_07->field_1196 != 0)) {
                                        lVar12 = shared_ptr<ClientPlayer>::operator->(local_b0);
                                        uVar21 = 1;
                                        if (*(int*)(lVar12 + 1196) == this_07->field_1196)
                                            goto LAB_10006b51e;
                                    }
                                    cVar3 = this_07->IsFriendChat();
                                    uVar21 = 2;
                                    if (cVar3 == '\0') {
                                        bVar5 = this_07->IsGroup();
                                        uVar21 = (ulong)(4 - bVar5);
                                    }
                                }
                            LAB_10006b51e:
                                local_94 = (uint)uVar21;
                                lVar12 = std::array<MiniDotStyle, 7ul>::operator[]((array<MiniDotStyle, 7ul>*)local_c8,
                                                                                   uVar21);
                                uVar6 = (undefined4)((ulong)pPVar14 >> 32);
                                if (*(char*)(lVar12 + 12) != '\0') {
                                    iVar8 = (int)(local_a8._0_4_ * local_74) - (int)local_a0;
                                    iVar24 = (int)(local_78 * local_74) - local_44;
                                    local_a8 =
                                        (array<MinimapElement, 200ul>*)CONCAT44(local_a8._4_4_, local_40->field_53112);
                                    pDVar18 =
                                        (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(local_50);
                                    pbVar19 = (basic_string*)pDVar18->GetDisplayName();
                                    eastl::string::basic_string(local_128, pbVar19);
                                    pPVar14 = (Pix32*)CONCAT44(uVar6, local_94);
                                    DrawDotWithString(local_58, local_88, local_90, iVar8, iVar24,
                                                      (ulong)local_a8 & 4294967295, pPVar14, local_128, local_70);
                                    eastl::string::~basic_string(local_128);
                                    this_09 = local_58;
                                }
                            }
                        }
                        uVar26 = uVar26 + 1;
                    } while (uVar25 != uVar26);
                }
                pPVar10 = local_d8;
                if ((param_6 != 0) && (local_40->field_8488 % 20 < 10)) {
                    if ((param_6 == 1) && (((-1 < param_8 && (param_8 < 65536)) &&
                                            (lVar12 = local_40->GetClientNpc(param_8), lVar12 != 0)))) {
                        iVar24 = (int)((float)*(int*)(lVar12 + 24) * local_74) - (int)local_a0;
                        iVar8 = (int)((float)*(int*)(lVar12 + 28) * local_74) - local_44;
                        uVar22 = local_40->field_53112;
                        pPVar14 = (Pix32*)Array<graphics::Pix32, eastl::allocator>::operator[](
                            (Array<graphics::Pix32, eastl::allocator>*)&local_58->field_26096, 1);
                        this_09 = local_58;
                        pPVar10 = local_d8;
                        DrawArrow(local_58, (int)local_88, (int)local_90, iVar24, iVar8, uVar22, pPVar14, local_70);
                    }
                    if (param_6 == 2) {
                        iVar8 = (local_dc - local_40->field_53220) * this_09->m_zoom - (int)local_a0;
                        iVar24 = (local_e0 - local_40->field_53224) * this_09->m_zoom - local_44;
                        local_50 =
                            (shared_ptr<rs2lib::social::DisplayName>*)CONCAT44(local_50._4_4_, local_40->field_53112);
                        pPVar14 = (Pix32*)Array<graphics::Pix32, eastl::allocator>::operator[](
                            (Array<graphics::Pix32, eastl::allocator>*)&this_09->field_26096, 1);
                        pPVar10 = local_d8;
                        DrawArrow(this_09, (int)local_88, (int)local_90, iVar8 + 2, iVar24 + 2, (uint)local_50, pPVar14,
                                  local_70);
                    }
                    if (((param_6 == 10) && (-1 < param_7)) && (param_7 < 2048)) {
                        pvVar16 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                            std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                                (array<shared_ptr<ClientPlayer>, 2048ul>*)puVar1, (long)param_7);
                        lVar12 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar16);
                        if (lVar12 != 0) {
                            iVar24 = (int)((float)*(int*)(lVar12 + 24) * local_74) - (int)local_a0;
                            iVar8 = (int)((float)*(int*)(lVar12 + 28) * local_74) - local_44;
                            uVar22 = local_40->field_53112;
                            pPVar14 = (Pix32*)Array<graphics::Pix32, eastl::allocator>::operator[](
                                (Array<graphics::Pix32, eastl::allocator>*)&this_09->field_26096, 1);
                            DrawArrow(this_09, (int)local_88, (int)local_90, iVar24, iVar8, uVar22, pPVar14, local_70);
                        }
                    }
                }
                pIVar2 = local_70;
                if (*(int*)&this_09->field_0 != 0) {
                    local_108[0]._0_4_ = local_98 + *(int*)&this_09->field_0 * this_09->m_zoom;
                    local_c0.field_0 = local_64 + this_09->m_zoom * *(int*)((long)&this_09->field_0 + 4);
                    local_7c = 0;
                    local_50 =
                        (shared_ptr<rs2lib::social::DisplayName>*)CONCAT44(local_50._4_4_, local_40->field_53112);
                    iVar8 = local_70->field_0;
                    iVar24 = local_70->field_4;
                    puVar1 = &this_09->field_26096;
                    lVar12 = Array<graphics::Pix32, eastl::allocator>::operator[](
                        (Array<graphics::Pix32, eastl::allocator>*)puVar1, 0);
                    iVar9 = *(int*)(lVar12 + 40);
                    lVar12 = Array<graphics::Pix32, eastl::allocator>::operator[](
                        (Array<graphics::Pix32, eastl::allocator>*)puVar1, 0);
                    GetDotPosition((int*)local_108, (int*)&local_c0, &local_7c, (uint)local_50, iVar8, iVar24, iVar9,
                                   *(int*)(lVar12 + 44));
                    iVar8 = local_7c;
                    uVar22 = local_c0.field_0;
                    uVar6 = local_108[0]._0_4_;
                    pPVar14 = (Pix32*)Array<graphics::Pix32, eastl::allocator>::operator[](
                        (Array<graphics::Pix32, eastl::allocator>*)puVar1, 0);
                    pPVar10 = local_d8;
                    DrawDot(local_58, (int)local_88, (int)local_90, uVar6, uVar22, iVar8, pPVar14, pIVar2);
                }
                lVar12 = shared_ptr<ClientPlayer>::operator->(local_b0);
                uVar20 = (undefined7)((ulong)lVar12 >> 8);
                if (*(char*)(lVar12 + 1200) != '\0')
                    goto LAB_10006b93a;
                uVar11 =
                    (**(code**)(pPVar10->field_0 + 32))(pPVar10, (int)local_88 + local_70->field_0 / 2 + -1,
                                                        (int)local_90 + local_70->field_4 / 2 + -1, 3, 3, 16777215);
            }
            uVar20 = (undefined7)((ulong)uVar11 >> 8);
        }
    LAB_10006b93a:
        return CONCAT71(uVar20, local_31) ^ 1;
    }

    // 0x10006ba80, 416 bytes, placed by class name
    // Minimap::DrawTile(int, int, int, int, int, dash3d::EntityHighlight const&, rs2lib::InterfaceGraphicMask const&)
    void Minimap::DrawTile(int param_1, int param_2, int param_3, int param_4, int param_5, EntityHighlight* param_6,
                           InterfaceGraphicMask* param_7) {
        undefined1* this_00;
        byte bVar1;
        byte bVar2;
        ushort uVar3;
        long lVar4;
        long lVar5;
        Pix32* this_01;
        long* plVar6;
        int iVar7;
        int iVar8;
        Pix32 local_78;
        uint local_34;

        uVar3 = param_6->GetEntityID();
        bVar1 = param_6->HasTileFill();
        bVar2 = param_6->HasTileHighlight();
        local_34 = (uint)bVar2 << 25 | (uint)bVar1 << 24 | (uint)uVar3;
        this_00 = &field_25632;
        lVar4 = this_00->find((int*)&local_34);
        lVar5 = this_00->end();
        if (lVar4 == lVar5) {
            CreateTileHighlightSprite((minimap*)&local_78, m_zoom, param_6);
            this_01 = (Pix32*)eastl::vector_map<int, graphics::Pix32, eastl::less<int>, eastl::allocator,
                                                eastl::vector<eastl::pair<int, graphics::Pix32>, eastl::allocator>>::
            operator[]((vector_map<int, graphics::Pix32, eastl::less<int>, eastl::allocator,
                                   eastl::vector<eastl::pair<int, graphics::Pix32>, eastl::allocator>>*)this_00,
                       (int*)&local_34);
            graphics::Pix32::operator=(this_01, &local_78);
            local_78.~BlendedGround();
            lVar4 = eastl::vector_map<int, graphics::Pix32, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, graphics::Pix32>, eastl::allocator>>::
            operator[]((vector_map<int, graphics::Pix32, eastl::less<int>, eastl::allocator,
                                   eastl::vector<eastl::pair<int, graphics::Pix32>, eastl::allocator>>*)this_00,
                       (int*)&local_34);
        } else {
            lVar4 = lVar4 + 8;
        }
        if ((uint)(param_4 * param_4 + param_3 * param_3) < 6401) {
            RotatePointOnMinimap(param_3, param_4, param_5 & 2047U, (int*)&local_78, (int*)&local_78.field_48);
            iVar8 = ((uint)(param_7->field_0 - (param_7->field_0 >> 31)) >> 1) + param_1;
            iVar7 = ((uint)(param_7->field_4 - (param_7->field_4 >> 31)) >> 1) + param_2;
            plVar6 = (long*)(*(code*)**field_26056)();
            (**(code**)(*plVar6 + 280))(plVar6, lVar4, 0, *(int*)(lVar4 + 44) << 4,
                                        (iVar8 + (int)local_78.field_0) * 16, (iVar7 - local_78._48_4_) * 16,
                                        (param_5 & 2047U) << 5 ^ 65535, 4096);
        }
    }

    // 0x10006bc20, 192 bytes, placed by class name
    // Minimap::DrawDot(int, int, int, int, int, graphics::Pix32*, rs2lib::InterfaceGraphicMask const&)
    void Minimap::DrawDot(int param_1, int param_2, int param_3, int param_4, int param_5, Pix32* param_6,
                          InterfaceGraphicMask* param_7) {
        long* plVar1;

        if ((param_6 != (Pix32*)0) && (param_5 < 6401)) {
            plVar1 = (long*)(*(code*)**field_26056)();
            if (param_5 < 2501) {
                (**(code**)(*plVar1 + 176))(plVar1, param_6, param_3 + param_1, param_4 + param_2);
            } else {
                (**(code**)(*plVar1 + 248))(plVar1, param_6, param_3, param_4, param_1, param_2, param_7->field_0,
                                            param_7->field_4, &param_7->field_32, &param_7->field_8);
            }
        }
    }

    // 0x10006bcf0, 320 bytes, placed by class name
    // Minimap::DrawDotWithString(int, int, int, int, int, MiniDotCategory, eastl::string, rs2lib::InterfaceGraphicMask const&)
    void Minimap::DrawDotWithString(int param_1, int param_2, int param_3, int param_4, int param_5, uint param_7,
                                    basic_string* param_8, InterfaceGraphicMask* param_9) {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        int iVar4;
        shared_ptr<graphics::Pix32>* this_00;
        long lVar5;
        Pix32* pPVar6;
        undefined4* puVar7;
        undefined4 uVar8;
        eastl::string local_68[32];
        int local_48;
        int local_44;
        int local_40;
        int local_3c;

        local_3c = 0;
        iVar1 = param_9->field_0;
        local_48 = param_9->field_4;
        local_44 = param_3;
        local_40 = param_4;
        this_00 = (shared_ptr<graphics::Pix32>*)std::array<shared_ptr<graphics::Pix32>, 7ul>::operator[](
            (array<shared_ptr<graphics::Pix32>, 7ul>*)&field_25800, (ulong)param_7);
        lVar5 = shared_ptr<graphics::Pix32>::operator->(this_00);
        iVar2 = *(int*)(lVar5 + 40);
        lVar5 = shared_ptr<graphics::Pix32>::operator->(this_00);
        GetDotPosition(&local_44, &local_40, &local_3c, param_5, iVar1, local_48, iVar2, *(int*)(lVar5 + 44));
        iVar4 = local_3c;
        iVar2 = local_40;
        iVar1 = local_44;
        pPVar6 = (Pix32*)this_00->end();
        DrawDot(this, param_1, param_2, iVar1, iVar2, iVar4, pPVar6, param_9);
        uVar8 = (undefined4)((ulong)pPVar6 >> 32);
        puVar7 = (undefined4*)std::array<MiniDotStyle, 7ul>::operator[]((array<MiniDotStyle, 7ul>*)&field_25912,
                                                                        (ulong)param_7);
        if (*(char*)((long)puVar7 + 13) != '\0') {
            uVar3 = *puVar7;
            eastl::string::basic_string(local_68, param_8);
            DrawString(this, param_1, param_2, iVar1, iVar2 + -2, iVar4, CONCAT44(uVar8, uVar3), local_68, param_9);
            eastl::string::~basic_string(local_68);
        }
    }

    // 0x10006bea0, 448 bytes, placed by class name
    // Minimap::DrawArrow(int, int, int, int, int, graphics::Pix32*, rs2lib::InterfaceGraphicMask const&)
    void Minimap::DrawArrow(int param_1, int param_2, int param_3, int param_4, int param_5, Pix32* param_6,
                            InterfaceGraphicMask* param_7) {
        int iVar1;
        array<int, 2048ul>* paVar2;
        int* piVar3;
        long* plVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        double dVar7;
        double in_XMM1_Qa;
        double dVar8;
        int local_3c;
        int local_38;
        int local_34;

        local_34 = param_4 * param_4 + param_3 * param_3;
        local_3c = param_3;
        local_38 = param_4;
        if ((param_3 * param_3 + param_4 * param_4) - 4226U < 85774) {
            paVar2 = (array<int, 2048ul>*)dash3d::Pix3D::GetSinTable();
            piVar3 = (int*)std::array<int, 2048ul>::operator[](paVar2, (ulong)(param_5 & 2047));
            iVar1 = *piVar3;
            paVar2 = (array<int, 2048ul>*)dash3d::Pix3D::GetCosTable();
            piVar3 = (int*)std::array<int, 2048ul>::operator[](paVar2, (ulong)(param_5 & 2047));
            uVar6 =
                atan2<int, int>(*piVar3 * param_3 + iVar1 * param_4 >> 16, *piVar3 * param_4 - iVar1 * param_3 >> 16);
            iVar1 = param_7->field_0;
            dVar7 = (double)___sincos_stret();
            dVar8 = (double)(iVar1 / 2 + -25);
            plVar4 = (long*)(*(code*)**field_26056)();
            uVar5 = shared_ptr<graphics::Pix32>::operator*((shared_ptr<graphics::Pix32>*)&field_26080);
            (**(code**)(*plVar4 + 264))(
                uVar6, plVar4, uVar5, param_7->field_0 / 2 + param_1 + (int)(dVar7 * dVar8) + -10,
                param_7->field_4 / 2 + (param_2 - (int)(in_XMM1_Qa * dVar8)) + -20, 20, 20, 15, 15, 256);
        } else {
            GetDotPosition(&local_3c, &local_38, &local_34, param_5, param_7->field_0, param_7->field_4,
                           param_6->field_40, param_6->field_44);
            DrawDot(this, param_1, param_2, local_3c, local_38, local_34, param_6, param_7);
        }
    }

    // 0x10006c060, 304 bytes, placed by class name
    // Minimap::CompassDraw(shared_ptr<rs2lib::IfType> const&, int, int, int, int)
    void Minimap::CompassDraw(shared_ptr* param_1, int param_2, int param_3, int param_4, int param_5) {
        undefined4 uVar1;
        undefined4 uVar2;
        Pix2D* this_00;
        IfType* this_01;
        shared_ptr* this_02;
        undefined8 uVar4;
        undefined4* puVar5;
        long lVar6;
        long lVar7;
        undefined4 in_register_0000008c;
        bool local_31;

        this_00 = (Pix2D*)(*(code*)**field_26056)();
        local_31 = false;
        this_01 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        this_02 = (shared_ptr*)this_01->GetMask(false, &local_31);
        if (!operator==(this_02, (_func_decltype_nullptr*)0)) {
            if (m_toggle < 3) {
                uVar4 = shared_ptr<graphics::Pix32>::operator*((shared_ptr<graphics::Pix32>*)&field_26064);
                puVar5 = (undefined4*)shared_ptr<rs2lib::InterfaceGraphicMask>::operator->(
                    (shared_ptr<rs2lib::InterfaceGraphicMask>*)this_02);
                uVar1 = *puVar5;
                lVar6 = shared_ptr<rs2lib::InterfaceGraphicMask>::operator->(
                    (shared_ptr<rs2lib::InterfaceGraphicMask>*)this_02);
                uVar2 = *(undefined4*)(lVar6 + 4);
                lVar6 = shared_ptr<rs2lib::InterfaceGraphicMask>::operator->(
                    (shared_ptr<rs2lib::InterfaceGraphicMask>*)this_02);
                lVar7 = shared_ptr<rs2lib::InterfaceGraphicMask>::operator->(
                    (shared_ptr<rs2lib::InterfaceGraphicMask>*)this_02);
                (**(code**)(this_00->field_0 + 256))(this_00, uVar4, param_2, param_3, uVar1, uVar2, 25, 25,
                                                     CONCAT44(in_register_0000008c, param_5), 256, lVar6 + 32,
                                                     lVar7 + 8);
            } else {
                lVar6 = shared_ptr<rs2lib::InterfaceGraphicMask>::operator->(
                    (shared_ptr<rs2lib::InterfaceGraphicMask>*)this_02);
                lVar7 = shared_ptr<rs2lib::InterfaceGraphicMask>::operator->(
                    (shared_ptr<rs2lib::InterfaceGraphicMask>*)this_02);
                this_00->FillScanLine(param_2, param_3, 4278190080, (Array*)(lVar6 + 32), (Array*)(lVar7 + 8));
            }
        }
    }

    // 0x10006c1f0, 544 bytes, placed by class name
    // CreateTileHighlightSprite(int, dash3d::EntityHighlight const&)
    Pix32* CreateTileHighlightSprite(int param_1, EntityHighlight* param_2) {
        char cVar1;
        byte bVar2;
        ushort uVar3;
        uint uVar4;
        uint* puVar5;
        uint uVar6;
        uint uVar7;
        EntityHighlight* pEVar8;
        ulong uVar9;
        ulong uVar10;
        long lVar11;
        undefined1* puVar12;
        EntityHighlight* pEVar13;
        uint uVar14;
        SharedArray<unsigned int> local_78[24];
        ulong local_58;
        EntityHighlight* local_50;
        undefined1* local_48;
        EntityHighlight* local_40;
        EntityHighlight* local_38;

        pEVar13 = (EntityHighlight*)(ulong)(uint)param_1;
        SharedArray<unsigned int>::SharedArray(local_78, (ulong)(uint)(param_1 * param_1));
        cVar1 = param_2->HasTileOutline();
        uVar14 = 255;
        if (cVar1 == '\0') {
            bVar2 = param_2->GetTileTintAlpha();
            uVar14 = (uint)bVar2;
        }
        cVar1 = param_2->HasTileFill();
        uVar6 = 0;
        if (cVar1 != '\0') {
            bVar2 = param_2->GetTileTintAlpha();
            uVar6 = (uint)bVar2;
        }
        uVar7 = uVar6 + uVar14 >> 1;
        if (param_1 < 5) {
            uVar6 = uVar7;
        }
        local_50 = param_2;
        uVar3 = param_2->GetEntityID();
        uVar4 = jag::math::RunetekColour::HSLToRGB(uVar3);
        if (param_1 < 5) {
            uVar14 = uVar7;
        }
        local_48 = (undefined1*)CONCAT44(local_48._4_4_, param_1 + -1);
        uVar14 = uVar14 << 24 | uVar4;
        local_38 = pEVar13;
        if (0 < param_1) {
            pEVar8 = (EntityHighlight*)0;
            local_40 = pEVar13;
            do {
                puVar5 = (uint*)SharedArray<unsigned int>::operator[](local_78, (ulong)pEVar8);
                *puVar5 = uVar14;
                puVar5 = (uint*)SharedArray<unsigned int>::operator[](local_78,
                                                                      (long)(param_1 * (param_1 + -1) + (int)pEVar8));
                *puVar5 = uVar14;
                pEVar8 = (EntityHighlight*)((long)&pEVar8->field_0 + 1);
            } while (local_40 != pEVar8);
        }
        if (2 < (int)local_38) {
            uVar9 = (ulong)(int)local_38;
            local_40 = (EntityHighlight*)(long)(int)local_48;
            lVar11 = ((ulong)local_48 & 4294967295) - 1;
            local_58 = uVar9;
            do {
                puVar5 = (uint*)SharedArray<unsigned int>::operator[](local_78, uVar9);
                *puVar5 = uVar14;
                puVar5 =
                    (uint*)SharedArray<unsigned int>::operator[](local_78, (ulong)((long)&local_40->field_0 + uVar9));
                *puVar5 = uVar14;
                uVar9 = uVar9 + local_58;
                lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
        }
        cVar1 = local_50->HasTileFill();
        if ((cVar1 != '\0') && (2 < (int)local_38)) {
            uVar9 = (ulong)(int)local_38;
            local_50 = (EntityHighlight*)((ulong)local_48 & 4294967295);
            local_48 = &local_50[-1].field_15;
            local_40 = (EntityHighlight*)&DAT_00000001;
            local_58 = uVar9;
            do {
                uVar10 = local_58 + 1;
                puVar12 = local_48;
                local_58 = uVar10;
                do {
                    puVar5 = (uint*)SharedArray<unsigned int>::operator[](local_78, uVar10);
                    *puVar5 = uVar4 & 16777215 | uVar6 << 24;
                    uVar10 = uVar10 + uVar9;
                    puVar12 = puVar12 + -1;
                } while (puVar12 != (undefined1*)0);
                local_40 = (EntityHighlight*)((long)&local_40->field_0 + 1);
            } while (local_40 != local_50);
        }
        new (this) graphics::Pix32(local_78, (int)local_38, (int)local_38);
        local_78->~SharedArray();
        return (Pix32*)this;
    }

    // 0x10006c540, 176 bytes, placed by class name
    // Minimap::DrawString(int, int, int, int, int, unsigned int, eastl::string, rs2lib::InterfaceGraphicMask const&)
    void Minimap::DrawString(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                             basic_string* param_8, long param_9) {
        PixfontGeneric* this_00;
        Pix2D* pPVar2;

        if ((eastl::basic_string<
                 char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() == '\0') &&
            (param_5 < 6401)) {
            eastl::string::make_lower();
            this_00 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                (shared_ptr<jstring::PixfontGeneric>*)&field_26024);
            pPVar2 = (Pix2D*)(*(code*)**field_26056)();
            this_00->CentreStringScanline(param_8, param_3, param_4, param_6, 0, pPVar2, param_1, param_2,
                                          *(int*)(param_9 + 4), (Array*)(param_9 + 32), (Array*)(param_9 + 8));
        }
    }

    // 0x10006c600, 1200 bytes, placed by class name
    // Minimap::GlMinimap(shared_ptr<rs2lib::IfType> const&, int, int, bool)
    void Minimap::GlMinimap(shared_ptr* param_1, int param_2, int param_3, bool param_4) {
        undefined1* puVar1;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_00;
        shared_ptr* this_01;
        char cVar2;
        char cVar3;
        byte bVar4;
        int iVar5;
        Client* this_02;
        world* pwVar6;
        IfType* this_03;
        CoordMapSquare* pCVar7;
        InterfaceGraphicMask* this_04;
        int* piVar8;
        long lVar9;
        array<int, 2048ul>* this_05;
        ServerConnection* pSVar10;
        undefined8 uVar11;
        ShuffledPacket3* this_06;
        ShuffledPacket4* pSVar12;
        ulong uVar13;
        undefined3 in_register_00000081;
        int iVar14;
        int iVar15;
        float fVar16;
        undefined1 local_d0[8];
        SuperPacket local_c8;
        SuperShuffledPacketFactory local_90;
        shared_ptr* local_80;
        unique_ptr<ServerConnection, std::default_delete<ServerConnection>>* local_78;
        Minimap* local_70;
        shared_ptr<ClientPlayer>* local_68;
        undefined4 local_5c;
        int local_58;
        float local_54;
        int local_50;
        int local_4c;
        array<int, 2048ul>* local_48;
        shared_ptr* local_40;
        bool local_32;
        char local_31;

        local_5c = CONCAT31(in_register_00000081, param_4);
        if ((m_toggle != 3) && (m_toggle != 0)) {
            return;
        }
        this_02 = (Client*)Client::Instance();
        if (((this_02->field_8504 & 4294967294U) == 2) && (cVar2 = this_02->field_52344->IsOpen(), cVar2 == '\0')) {
            local_32 = false;
            local_80 = param_1;
            local_70 = this;
            this_03 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            local_40 = (shared_ptr*)this_03->GetMask(true, &local_32);
            cVar2 = operator==(local_40, (_func_decltype_nullptr*)0);
            if ((bool)cVar2) {
                return;
            }
            pCVar7 = (CoordMapSquare*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (ulong)&this_02->field_8560);
            iVar15 = pCVar7->GetX();
            pCVar7 = (CoordMapSquare*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (ulong)&this_02->field_8576);
            iVar5 = pCVar7->GetX();
            this_04 = (InterfaceGraphicMask*)shared_ptr<rs2lib::InterfaceGraphicMask>::operator->(
                (shared_ptr<rs2lib::InterfaceGraphicMask>*)local_40);
            cVar3 = this_04->pointInside(iVar15 - param_2, iVar5 - param_3);
            this_01 = local_40;
            if (cVar3 != '\0') {
                local_31 = cVar2;
                piVar8 = (int*)shared_ptr<rs2lib::InterfaceGraphicMask>::operator->(
                    (shared_ptr<rs2lib::InterfaceGraphicMask>*)local_40);
                iVar14 = (iVar15 - param_2) - *piVar8 / 2;
                lVar9 = shared_ptr<rs2lib::InterfaceGraphicMask>::operator->(
                    (shared_ptr<rs2lib::InterfaceGraphicMask>*)this_01);
                local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, (iVar5 - param_3) - *(int*)(lVar9 + 4) / 2);
                uVar13 = (ulong)(this_02->field_53112 & 2047);
                this_05 = (array<int, 2048ul>*)dash3d::Pix3D::GetSinTable();
                local_48 = (array<int, 2048ul>*)dash3d::Pix3D::GetCosTable();
                piVar8 = (int*)std::array<int, 2048ul>::operator[](this_05, uVar13);
                iVar15 = *piVar8;
                piVar8 = (int*)std::array<int, 2048ul>::operator[](local_48, uVar13);
                iVar5 = *piVar8;
                local_48 = (array<int, 2048ul>*)CONCAT44(local_48._4_4_, iVar14);
                local_54 = 4.0 / (float)local_70->m_zoom;
                fVar16 = (float)(iVar5 * iVar14 + iVar15 * (int)local_40 >> 11) * local_54;
                puVar1 = this_02->field_52016;
                local_50 = iVar15;
                lVar9 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)puVar1);
                iVar15 = *(int*)(lVar9 + 24);
                local_68 = (shared_ptr<ClientPlayer>*)puVar1;
                lVar9 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)puVar1);
                local_58 = *(int*)(lVar9 + 28);
                local_78 = (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&this_02->field_19120;
                pSVar10 =
                    (ServerConnection*)
                        std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(local_78);
                uVar11 = pSVar10->GetOutgoingEncryption();
                local_d0->MakeClientMessage(41, uVar11);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_d0 + 8), 18);
                new (&local_90) SuperShuffledPacketFactory((SuperPacket*)(local_d0 + 8));
                this_06 = (ShuffledPacket3*)local_90.p2_alt2();
                local_4c = (int)fVar16 + iVar15 >> 7;
                ShuffledPacket3::p2<int>(this_06, this_02->field_53220 + local_4c);
                iVar5 =
                    local_58 - (int)(local_54 * (float)(iVar5 * (int)local_40 - local_50 * (int)local_48 >> 11)) >> 7;
                pSVar12 = (ShuffledPacket4*)local_90.p2_alt2();
                ShuffledPacket4::p2<int>(pSVar12, this_02->field_53224 + iVar5);
                puVar1 = &this_02->field_8496;
                pSVar12 = (ShuffledPacket4*)local_90.HeapBeginPtr();
                cVar2 = puVar1->KeyHeld(107);
                iVar15 = 0;
                this_00 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_d0 + 8);
                if (cVar2 != '\0') {
                    bVar4 = puVar1->KeyHeld(81);
                    iVar15 = bVar4 + 1;
                }
                ShuffledPacket4::p1<int>(pSVar12, iVar15);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                    this_00, (ulong)local_48 & 4294967295);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                    this_00, (ulong)local_40 & 4294967295);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(this_00, this_02->field_53112);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(this_00, 57);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(this_00, 0);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(this_00, 0);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(this_00, 89);
                lVar9 = shared_ptr<ClientPlayer>::operator->(local_68);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(this_00, *(int*)(lVar9 + 24));
                lVar9 = shared_ptr<ClientPlayer>::operator->(local_68);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(this_00, *(int*)(lVar9 + 28));
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(this_00, 63);
                pSVar10 =
                    (ServerConnection*)
                        std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(local_78);
                pSVar10->SendClientMessage(local_d0);
                this_02->SetPlayerDestination(local_4c, iVar5);
                puVar1->SetCurrentAction();
                local_d0->~ClientMessage();
                cVar2 = local_31;
            }
            this = local_70;
            param_1 = local_80;
            if (cVar2 != '\0') {
                return;
            }
        }
        if ((char)local_5c == '\0') {
            new (local_d0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            this_02->SetInterfaceInteraction(local_d0);
            local_d0->~shared_ptr();
        } else {
            this_02->SetInterfaceInteraction(param_1);
            if (m_zoomable != false) {
                iVar15 = this_02->field_53140;
                if ((iVar15 == 0) && (iVar15 = *(int*)&this_02->field_53148, iVar15 == 0)) {
                    iVar15 = 0;
                } else {
                    iVar15 = (iVar15 >> 31) * -2 + -1;
                }
                pwVar6 = (world*)(&this_02->field_19184)->get();
                SetZoom(this, pwVar6, iVar15 + m_zoom, this_02->m_playerLevel);
            }
        }
    }

    // 0x10006cb70, 64 bytes, placed by class name
    // Minimap::GetDotStyle(MiniDotCategory)
    undefined1[16] Minimap::GetDotStyle(uint param_2) {
        undefined1(*pauVar1)[16];

        if (param_2 < 7) {
            pauVar1 = (undefined1(*)[16])std::array<MiniDotStyle, 7ul>::operator[](
                (array<MiniDotStyle, 7ul>*)&field_25912, (ulong)param_2);
            return *pauVar1;
        }
        return ZEXT816(2) << 64;
    }

    // 0x10006cbb0, 48 bytes, placed by class name
    // Minimap::SetDotVisible(MiniDotCategory, bool)
    void Minimap::SetDotVisible(uint param_2, undefined1 param_3) {
        long lVar1;

        if (param_2 < 7) {
            lVar1 = std::array<MiniDotStyle, 7ul>::operator[]((array<MiniDotStyle, 7ul>*)&field_25912, (ulong)param_2);
            *(undefined1*)(lVar1 + 12) = param_3;
        }
    }

    // 0x10006cbe0, 48 bytes, placed by class name
    // Minimap::GetDotVisible(MiniDotCategory)
    bool Minimap::GetDotVisible(uint param_2) {
        long lVar1;

        if (param_2 < 7) {
            lVar1 = std::array<MiniDotStyle, 7ul>::operator[]((array<MiniDotStyle, 7ul>*)&field_25912, (ulong)param_2);
            return *(char*)(lVar1 + 12) != '\0';
        }
        return false;
    }

    // 0x10006cc10, 48 bytes, placed by class name
    // Minimap::SetDrawDisplayname(MiniDotCategory, bool)
    void Minimap::SetDrawDisplayname(uint param_2, undefined1 param_3) {
        long lVar1;

        if (param_2 < 7) {
            lVar1 = std::array<MiniDotStyle, 7ul>::operator[]((array<MiniDotStyle, 7ul>*)&field_25912, (ulong)param_2);
            *(undefined1*)(lVar1 + 13) = param_3;
        }
    }

    // 0x10006cc40, 48 bytes, placed by class name
    // Minimap::GetDrawDisplayname(MiniDotCategory)
    bool Minimap::GetDrawDisplayname(uint param_2) {
        long lVar1;

        if (param_2 < 7) {
            lVar1 = std::array<MiniDotStyle, 7ul>::operator[]((array<MiniDotStyle, 7ul>*)&field_25912, (ulong)param_2);
            return *(char*)(lVar1 + 13) != '\0';
        }
        return false;
    }

    // 0x1000e5d50: the linker folded this into rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    Minimap::GetLevel();

} // namespace jag::oldscape::minimap
