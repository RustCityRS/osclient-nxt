// libs/oldscape/jagex3/dash3d/NXTWorldRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class DeferredGroundFineHighlight {
    public:
        // virtual methods in vtable order
        virtual void Render(world&, NXTWorldRenderer*, ModelLitRenderer<NXTPix3D>*, int, int, int, int, int);
        virtual ~DeferredGroundFineHighlight();
        DeferredGroundFineHighlight(int, int, int, GridRect, EntityHighlight const&);

        // data members, from how the methods use this: 48 bytes
        undefined** field_0;       // offset 0, vtable pointer
        int field_8;               // offset 8
        int field_12;              // offset 12
        int field_16;              // offset 16
        EntityHighlight* field_20; // offset 20
        int field_28;              // offset 28
        int field_32;              // offset 32
        char _unknown_36[4];
        int field_40; // offset 40
        int field_44; // offset 44
    };

    class NXTWorldRenderer {
    public:
        // virtual methods in vtable order
        virtual NXTPix3D* GetPix3D();
        virtual GetModelLitRenderer();
        virtual void PrepareRender(int);
        virtual void RenderQuickGround(world const&, int, int, int, int, int, int, int, int, int, int, int, int, int);
        virtual void RenderGround(world const&, Ground const&, int, int, int, int, int, int, int);
        void RenderGroundOverlayGrid(world const&, int, int, int, int, int, int, int, int, int, bool, int, int, int);
        void RenderGroundOverlayFine(world const&, int, int, int, int, int, int, int, int, int, bool, int, int, int);
        NXTWorldRenderer(NXTPix3D*);
        void RenderGroundOutlineSegment(int, int, int, int, int, int, int, int);
        void RenderGroundOutline(world const&, int, int, int, int, int, int, int, int, int, int);
        void RenderSquareEdges(GroundProjPoints const&, int, int, int);
        void RenderSquareOverGround(world const&, int, int, int, int, int, int, int, int, int, int, int);

        // data members, from how the methods use this: 24 bytes
        undefined** field_0; // offset 0, vtable pointer
        NXTPix3D* m_pPix3D;  // offset 8
        char _unknown_16[8];
    };

    // 0x10034adb0, 320 bytes, placed by class name and debug map
    // NXTWorldRenderer::RenderGroundOverlayGrid(world const&, int, int, int, int, int, int, int, int, int, bool, int, int, int)
    void NXTWorldRenderer::RenderGroundOverlayGrid(world* param_1, int param_2, int param_3, int param_4, int param_5,
                                                   int param_6, int param_7, int param_8, int param_9, int param_10,
                                                   bool param_11, int param_12, int param_13, int param_14) {
        uint uVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        uint uVar5;

        if (0 < param_9) {
            iVar2 = 0;
            do {
                uVar5 = 15;
                if (!param_11) {
                    uVar1 = (uint)(iVar2 == 0) * 8 + 7;
                    uVar5 = uVar1 & 4294967293;
                    if (iVar2 == param_9 + -1) {
                        uVar5 = uVar1;
                    }
                }
                if (0 < param_10) {
                    iVar4 = 0;
                    iVar3 = param_8 << 7;
                    do {
                        if (!param_11) {
                            uVar1 = uVar5 & 4294967294;
                            if (iVar4 == 0) {
                                uVar1 = uVar5;
                            }
                            uVar5 = uVar1 & 4294967291;
                            if (param_10 + iVar4 == 1) {
                                uVar5 = uVar1;
                            }
                        }
                        RenderSquareOverGround(this, param_1, param_2, param_3, param_4, param_5, param_6,
                                               (iVar2 + param_7) * 128, iVar3, uVar5, param_12, param_13, param_14);
                        iVar4 = iVar4 + -1;
                        iVar3 = iVar3 + 128;
                    } while (param_10 + iVar4 != 0);
                }
                iVar2 = iVar2 + 1;
            } while (iVar2 != param_9);
        }
    }

    // 0x10034af60, 208 bytes, placed by neighbouring functions
    // DeferredGroundFineHighlight::Render(world&, NXTWorldRenderer*, ModelLitRenderer<NXTPix3D>*, int, int, int, int, int)
    void DeferredGroundFineHighlight::Render(world* param_1, NXTWorldRenderer* param_2, ModelLitRenderer* param_3,
                                             int param_4, int param_5, int param_6, int param_7, int param_8) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        bool bVar6;
        byte bVar7;
        ushort uVar8;
        ushort uVar9;

        iVar1 = field_8;
        iVar2 = field_12;
        iVar3 = field_16;
        iVar4 = field_28;
        iVar5 = field_32;
        bVar6 = (bool)(*(EntityHighlight**)&field_40)->ShowInsideEdges();
        uVar8 = (*(EntityHighlight**)&field_40)->GetTileOutlineWidth();
        uVar9 = (*(EntityCombinedID**)&field_40)->GetEntityID();
        bVar7 = (*(EntityHighlight**)&field_40)->GetTileTintAlpha();
        param_2->RenderGroundOverlayFine(param_1, iVar1, param_4, param_5, param_6, param_7, iVar2, iVar3, iVar4, iVar5,
                                         bVar6, (uint)uVar8, (uint)uVar9, (uint)bVar7);
    }

    // 0x10034b030, 352 bytes, placed by class name and debug map
    // NXTWorldRenderer::RenderGroundOverlayFine(world const&, int, int, int, int, int, int, int, int, int, bool, int, int, int)
    void NXTWorldRenderer::RenderGroundOverlayFine(world* param_1, int param_2, int param_3, int param_4, int param_5,
                                                   int param_6, int param_7, int param_8, int param_9, int param_10,
                                                   bool param_11, int param_12, int param_13, int param_14) {
        uint uVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        int local_34;

        if (0 < param_9) {
            local_34 = 0;
            do {
                uVar4 = 15;
                if (!param_11) {
                    uVar1 = (uint)(local_34 == 0) * 8 + 7;
                    uVar4 = uVar1 & 4294967293;
                    if (local_34 == param_9 + -1) {
                        uVar4 = uVar1;
                    }
                }
                if (0 < param_10) {
                    iVar3 = 0;
                    iVar2 = param_8 + param_10 * -64;
                    do {
                        if (!param_11) {
                            uVar1 = (uVar4 | 5) & 4294967294;
                            if (iVar3 == 0) {
                                uVar1 = uVar4 | 5;
                            }
                            uVar4 = uVar1 & 4294967291;
                            if (param_10 + iVar3 == 1) {
                                uVar4 = uVar1;
                            }
                        }
                        RenderSquareOverGround(this, param_1, param_2, param_3, param_4, param_5, param_6,
                                               local_34 * 128 + param_7 + param_9 * -64, iVar2, uVar4, param_12,
                                               param_13, param_14);
                        iVar2 = iVar2 + 128;
                        iVar3 = iVar3 + -1;
                    } while (param_10 + iVar3 != 0);
                }
                local_34 = local_34 + 1;
            } while (local_34 != param_9);
        }
    }

    // 0x100367fc0, 64 bytes, base-object constructor, placed by class name
    // NXTWorldRenderer::NXTWorldRenderer(NXTPix3D*)
    void NXTWorldRenderer::NXTWorldRenderer(NXTPix3D* param_1) {
        new (this) WorldRenderer<NXTPix3D>();
        field_0 = &PTR_GetPix3D_100efbfa8;
        new (&field_16, param_1) NXTModelLitRenderer();
        m_pPix3D = param_1;
    }

    // 0x100368020, 16 bytes, complete-object constructor, placed by class name
    // NXTWorldRenderer::NXTWorldRenderer(NXTPix3D*): jumps straight to the base-object constructor

    // 0x100368030, 16 bytes, placed by class name
    // NXTWorldRenderer::GetPix3D()
    NXTPix3D* NXTWorldRenderer::GetPix3D() {
        return m_pPix3D;
    }

    // 0x100368040, 16 bytes, placed by class name
    // NXTWorldRenderer::GetModelLitRenderer()
    undefined1* NXTWorldRenderer::GetModelLitRenderer() {
        return &field_16;
    }

    // 0x100368050, 16 bytes, placed by class name
    // NXTWorldRenderer::PrepareRender(int)
    void NXTWorldRenderer::PrepareRender(int param_1) {
        (&field_16, param_1)->PrepareRender();
    }

    // 0x100368060, 432 bytes, placed by class name
    // NXTWorldRenderer::RenderGroundOutlineSegment(int, int, int, int, int, int, int, int)
    void NXTWorldRenderer::RenderGroundOutlineSegment(int param_1, int param_2, int param_3, int param_4, int param_5,
                                                      int param_6, int param_7, int param_8) {
        uint uVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        uint uVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        uint uVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        int iVar15;
        int iVar16;
        int iVar17;

        iVar13 = m_pPix3D->field_20;
        iVar12 = m_pPix3D->field_24;
        iVar10 = param_1 - iVar13;
        iVar13 = param_2 - iVar13;
        iVar4 = param_3 - iVar12;
        iVar12 = param_4 - iVar12;
        uVar1 = iVar13 - iVar10;
        uVar7 = iVar12 - iVar4;
        uVar6 = -uVar1;
        if ((int)-uVar1 < 0) {
            uVar6 = uVar1;
        }
        uVar11 = -uVar7;
        if ((int)-uVar7 < 0) {
            uVar11 = uVar7;
        }
        if (uVar11 <= uVar6) {
            uVar11 = uVar6;
        }
        if (uVar11 != 0) {
            iVar8 = ((int)(uVar7 * 65536) / (int)uVar11) * param_7;
            iVar15 = iVar8 >> 17;
            iVar9 = iVar8 + 65536 >> 17;
            iVar8 = ((int)(uVar1 * -65536) / (int)uVar11) * param_7;
            iVar16 = iVar8 >> 17;
            iVar14 = iVar8 + 65536 >> 17;
            iVar8 = m_pPix3D->field_16;
            iVar2 = ((iVar15 + iVar10) * param_5) / iVar8;
            iVar17 = ((iVar13 - iVar9) * param_6) / iVar8;
            iVar3 = ((iVar16 + iVar4) * param_5) / iVar8;
            iVar5 = ((iVar12 - iVar14) * param_6) / iVar8;
            NXTPix3D::GouraudTriangleOpenGL((int)m_pPix3D, iVar3, ((iVar4 - iVar14) * param_5) / iVar8, iVar5, iVar2,
                                            ((iVar10 - iVar9) * param_5) / iVar8, iVar17, param_5, param_5, param_6,
                                            param_8, param_8, param_8);
            NXTPix3D::GouraudTriangleOpenGL((int)m_pPix3D, iVar3, iVar5, ((iVar16 + iVar12) * param_6) / iVar8, iVar2,
                                            iVar17, ((iVar15 + iVar13) * param_6) / iVar8, param_5, param_6, param_6,
                                            param_8, param_8, param_8);
        }
    }

    // 0x100368210, 144 bytes, placed by class name
    // NXTWorldRenderer::RenderGroundOutline(world const&, int, int, int, int, int, int, int, int, int, int)
    void NXTWorldRenderer::RenderGroundOutline(world* param_1, int param_2, int param_3, int param_4, int param_5,
                                               int param_6, int param_7, int param_8, int param_9, int param_10,
                                               int param_11) {
        NXTPix3D* pNVar1;
        dash3d local_88;

        if ((param_10 != 0) && (param_9 != 0)) {
            pNVar1 = m_pPix3D;
            CalculateGroundProjectionPointsGrid(&local_88, param_1, param_2, param_3, param_4, param_5, param_6,
                                                param_7, param_8, pNVar1->field_20, pNVar1->field_24, pNVar1->field_16);
            if (local_88.field_0[0] != '\0') {
                RenderSquareEdges(this, (GroundProjPoints*)&local_88, param_10, param_11, param_9);
            }
        }
    }

    // 0x1003682a0, 288 bytes, placed by class name
    // NXTWorldRenderer::RenderSquareEdges(GroundProjPoints const&, int, int, int)
    /* WARNING: Type propagation algorithm not settling */
    /* NXTWorldRenderer::RenderSquareEdges(GroundProjPoints
   const&, int, int, int) */

    void NXTWorldRenderer::RenderSquareEdges(GroundProjPoints* param_1, int param_2, int param_3, int param_4) {
        m_pPix3D->field_12 = 0;
        if ((param_4 & 1U) != 0) {
            RenderGroundOutlineSegment(this, *(int*)(param_1 + 52), *(int*)(param_1 + 60), *(int*)(param_1 + 56),
                                       *(int*)(param_1 + 64), *(int*)(param_1 + 36), *(int*)(param_1 + 40), param_2,
                                       param_3);
        }
        if ((param_4 & 2U) != 0) {
            RenderGroundOutlineSegment(this, *(int*)(param_1 + 60), *(int*)(param_1 + 68), *(int*)(param_1 + 64),
                                       *(int*)(param_1 + 72), *(int*)(param_1 + 40), *(int*)(param_1 + 44), param_2,
                                       param_3);
        }
        if ((param_4 & 4U) != 0) {
            RenderGroundOutlineSegment(this, *(int*)(param_1 + 68), *(int*)(param_1 + 76), *(int*)(param_1 + 72),
                                       *(int*)(param_1 + 80), *(int*)(param_1 + 44), *(int*)(param_1 + 48), param_2,
                                       param_3);
        }
        if ((param_4 & 8U) != 0) {
            RenderGroundOutlineSegment(this, *(int*)(param_1 + 76), *(int*)(param_1 + 52), *(int*)(param_1 + 80),
                                       *(int*)(param_1 + 56), *(int*)(param_1 + 48), *(int*)(param_1 + 36), param_2,
                                       param_3);
        }
    }

    // 0x1003683c0, 1520 bytes, placed by class name
    // NXTWorldRenderer::RenderQuickGround(world const&, int, int, int, int, int, int, int, int, int, int, int, int, int)
    void NXTWorldRenderer::RenderQuickGround(world* param_1, int param_2, int param_3, int param_4, int param_5,
                                             int param_6, int param_7, int param_8, int param_9, int param_10,
                                             int param_11, int param_12, int param_13, int param_14) {
        NXTPix3D* pNVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        long* plVar9;
        dash3d local_a8;
        int local_54;
        NXTPix3D* local_50;
        NXTPix3D* local_48;
        int local_3c;
        NXTWorldRenderer* local_38;

        if ((WorldRenderer_renderGround != '\0') && (param_14 != 0)) {
            pNVar1 = m_pPix3D;
            local_3c = param_2;
            CalculateGroundProjectionPointsGrid(&local_a8, param_1, param_2, param_3, param_4, param_5, param_6,
                                                param_7, param_8, pNVar1->field_20, pNVar1->field_24, pNVar1->field_16);
            iVar5 = local_a8.field_80;
            iVar8 = local_a8.field_72;
            iVar7 = local_a8.field_68;
            iVar6 = local_a8.field_60;
            if (local_a8.field_0[0] != '\0') {
                pNVar1 = m_pPix3D;
                pNVar1->field_12 = param_14;
                local_38 = this;
                if (0 < (local_a8.field_76 - local_a8.field_60) * (local_a8.field_72 - local_a8.field_80) +
                            (local_a8.field_64 - local_a8.field_80) * (local_a8.field_68 - local_a8.field_76)) {
                    local_50 = (NXTPix3D*)CONCAT44(local_50._4_4_, local_a8.field_64);
                    pNVar1->field_8 = false;
                    local_48 = (NXTPix3D*)(ulong)(uint)local_a8.field_76;
                    if (((((local_a8.field_68 < 0) || (local_a8.field_76 < 0)) || (local_a8.field_60 < 0)) ||
                         ((iVar3 = pNVar1->field_28, iVar3 < local_a8.field_68 || (iVar3 < local_a8.field_76)))) ||
                        (iVar3 < local_a8.field_60)) {
                        pNVar1->field_8 = true;
                    }
                    iVar3 = MousePickingHelper::GetMouseScreenX();
                    iVar4 = MousePickingHelper::GetMouseScreenY();
                    cVar2 =
                        world::InsideTriangle(iVar3, iVar4, iVar8, iVar5, (int)local_50, iVar7, (int)local_48, iVar6);
                    iVar6 = local_3c;
                    if (cVar2 != '\0') {
                        world::m_mouseoverGroundX = param_7;
                        world::m_mouseoverGroundZ = param_8;
                        world::m_mouseoverGroundY = local_3c;
                    }
                    if ((world::m_click != '\0') &&
                        (cVar2 = world::InsideTriangle(world::m_clickX, world::m_clickY, local_a8.field_72,
                                                       local_a8.field_80, local_a8.field_64, local_a8.field_68,
                                                       local_a8.field_76, local_a8.field_60),
                         cVar2 != '\0')) {
                        world::m_groundX = param_7;
                        world::m_groundZ = param_8;
                        world::m_groundY = iVar6;
                    }
                    if (param_9 == -1) {
                        if (param_12 != 12345678) {
                            NXTPix3D::GouraudTriangleOpenGL(
                                (int)local_38->m_pPix3D, local_a8.field_28, local_a8.field_32, local_a8.field_24,
                                local_a8.field_12, local_a8.field_16, local_a8.field_8, local_a8.field_44,
                                local_a8.field_48, local_a8.field_40, param_12, param_13, param_11);
                        }
                    } else if (world::m_lowMem == '\0') {
                        (local_38->m_pPix3D, local_a8.field_28, local_a8.field_32, local_a8.field_24, local_a8.field_12,
                         local_a8.field_16, local_a8.field_8, local_a8.field_44, local_a8.field_48, local_a8.field_40,
                         param_12, param_13, param_11, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, param_9)
                            ->TextureTriangleOpenGL();
                    } else {
                        plVar9 = (long*)shared_ptr<TextureProvider>::operator->(
                            (shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
                        iVar5 = (**(code**)(*plVar9 + 24))(plVar9, param_9);
                        iVar8 = local_a8.field_80;
                        iVar7 = local_a8.field_76;
                        iVar6 = local_a8.field_64;
                        local_48 = local_38->m_pPix3D;
                        local_54 = local_a8.field_72;
                        local_50 = (NXTPix3D*)(ulong)(uint)local_a8.field_60;
                        iVar3 = Pix3D::TextureLightColour(iVar5, param_12);
                        iVar4 = Pix3D::TextureLightColour(iVar5, param_13);
                        iVar5 = Pix3D::TextureLightColour(iVar5, param_11);
                        local_48->GouraudTriangle(local_54, iVar8, iVar6, local_a8.field_68, iVar7, (int)local_50,
                                                  iVar3, iVar4, iVar5);
                    }
                }
                iVar5 = local_a8.field_80;
                iVar8 = local_a8.field_76;
                iVar7 = local_a8.field_64;
                iVar6 = local_a8.field_52;
                if (0 < (local_a8.field_60 - local_a8.field_76) * (local_a8.field_56 - local_a8.field_64) +
                            (local_a8.field_80 - local_a8.field_64) * (local_a8.field_52 - local_a8.field_60)) {
                    local_50 = (NXTPix3D*)CONCAT44(local_50._4_4_, local_a8.field_56);
                    pNVar1 = local_38->m_pPix3D;
                    pNVar1->field_8 = false;
                    local_48 = (NXTPix3D*)(ulong)(uint)local_a8.field_60;
                    if ((((local_a8.field_52 < 0) || (local_a8.field_60 < 0)) || (local_a8.field_76 < 0)) ||
                        (((iVar3 = pNVar1->field_28, iVar3 < local_a8.field_52 || (iVar3 < local_a8.field_60)) ||
                          (iVar3 < local_a8.field_76)))) {
                        pNVar1->field_8 = true;
                    }
                    iVar3 = MousePickingHelper::GetMouseScreenX();
                    iVar4 = MousePickingHelper::GetMouseScreenY();
                    cVar2 =
                        world::InsideTriangle(iVar3, iVar4, (int)local_50, iVar7, iVar5, iVar6, (int)local_48, iVar8);
                    iVar6 = local_3c;
                    if (cVar2 != '\0') {
                        world::m_mouseoverGroundX = param_7;
                        world::m_mouseoverGroundZ = param_8;
                        world::m_mouseoverGroundY = local_3c;
                    }
                    if ((world::m_click != '\0') &&
                        (cVar2 = world::InsideTriangle(world::m_clickX, world::m_clickY, local_a8.field_56,
                                                       local_a8.field_64, local_a8.field_80, local_a8.field_52,
                                                       local_a8.field_60, local_a8.field_76),
                         cVar2 != '\0')) {
                        world::m_groundX = param_7;
                        world::m_groundZ = param_8;
                        world::m_groundY = iVar6;
                    }
                    if (param_9 == -1) {
                        if (param_10 != 12345678) {
                            NXTPix3D::GouraudTriangleOpenGL(
                                (int)local_38->m_pPix3D, local_a8.field_20, local_a8.field_24, local_a8.field_32,
                                local_a8.field_4, local_a8.field_8, local_a8.field_16, local_a8.field_36,
                                local_a8.field_40, local_a8.field_48, param_10, param_11, param_13);
                        }
                    } else if (world::m_lowMem == '\0') {
                        (local_38->m_pPix3D, local_a8.field_20, local_a8.field_24, local_a8.field_32, local_a8.field_4,
                         local_a8.field_8, local_a8.field_16, local_a8.field_36, local_a8.field_40, local_a8.field_48,
                         param_10, param_11, param_13, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, param_9)
                            ->TextureTriangleOpenGL();
                    } else {
                        plVar9 = (long*)shared_ptr<TextureProvider>::operator->(
                            (shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
                        iVar6 = (**(code**)(*plVar9 + 24))(plVar9, param_9);
                        local_50 = local_38->m_pPix3D;
                        local_3c = local_a8.field_52;
                        local_54 = local_a8.field_64;
                        local_48 = (NXTPix3D*)CONCAT44(local_48._4_4_, local_a8.field_60);
                        local_38 = (NXTWorldRenderer*)(ulong)(uint)local_a8.field_76;
                        iVar7 = Pix3D::TextureLightColour(iVar6, param_10);
                        iVar8 = Pix3D::TextureLightColour(iVar6, param_11);
                        iVar6 = Pix3D::TextureLightColour(iVar6, param_13);
                        local_50->GouraudTriangle(local_a8.field_56, local_54, local_a8.field_80, local_3c,
                                                  (int)local_48, (int)local_38, iVar7, iVar8, iVar6);
                    }
                }
            }
        }
    }

    // 0x1003689b0, 1872 bytes, placed by class name
    // NXTWorldRenderer::RenderGround(world const&, Ground const&, int, int, int, int, int, int, int)
    void NXTWorldRenderer::RenderGround(world* param_1, Ground* param_2, int param_3, int param_4, int param_5,
                                        int param_6, int param_7, int param_8, int param_9) {
        uint uVar1;
        NXTPix3D* pNVar2;
        vector<int, eastl::allocator>* pvVar3;
        char cVar4;
        int iVar5;
        int iVar6;
        int* piVar7;
        uint* puVar8;
        undefined4* puVar9;
        ulong uVar10;
        int iVar11;
        int iVar12;
        vector<int, eastl::allocator>* pvVar13;
        ulong uVar14;
        int iVar15;
        int iVar16;
        array<int, 6ul> local_178[24];
        array<int, 6ul> local_160[24];
        array<int, 6ul> local_148[24];
        array<int, 6ul> local_130[24];
        array<int, 6ul> local_118[24];
        vector<int, eastl::allocator>* local_100;
        vector<int, eastl::allocator>* local_f8;
        vector<int, eastl::allocator>* local_f0;
        ulong local_e8;
        ulong local_e0;
        ulong local_d8;
        ulong local_d0;
        vector<int, eastl::allocator>* local_c8;
        vector<int, eastl::allocator>* local_c0;
        vector<int, eastl::allocator>* local_b8;
        vector<int, eastl::allocator>* local_b0;
        float local_a4;
        float local_a0;
        float local_9c;
        int local_98;
        int local_94;
        ulong local_90;
        vector<int, eastl::allocator>* local_88;
        ulong local_80;
        int local_70;
        int local_6c;
        int local_68;
        ulong local_60;
        vector<int, eastl::allocator>* local_58;
        Ground* local_50;
        ulong local_48;
        int local_3c;
        ulong local_38;

        local_48 = CONCAT44(local_48._4_4_, param_5);
        if (WorldRenderer_renderGround != '\0') {
            local_c0 = (vector<int, eastl::allocator>*)&param_2->field_8;
            local_60 = local_c0->size();
            local_b8 = (vector<int, eastl::allocator>*)&param_2->field_72;
            local_50 = param_2;
            if (local_60 != 0) {
                local_58 = (vector<int, eastl::allocator>*)&param_2->field_40;
                uVar10 = 0;
                local_90 = CONCAT44(local_90._4_4_, param_4);
                do {
                    piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_c0, uVar10);
                    iVar15 = *piVar7 - world::m_cx;
                    piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_58, uVar10);
                    iVar11 = *piVar7 - world::m_cy;
                    piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_b8, uVar10);
                    iVar5 = (*piVar7 - world::m_cz) * param_7 - iVar15 * param_6 >> 16;
                    iVar12 = iVar5 * (int)local_48 + iVar11 * param_4;
                    if (iVar12 < 3276800) {
                        return;
                    }
                    iVar16 = iVar15 * param_7 + (*piVar7 - world::m_cz) * param_6 >> 16;
                    iVar15 = iVar11 * (int)local_48 - iVar5 * param_4 >> 16;
                    iVar12 = iVar12 >> 16;
                    local_38 = uVar10;
                    piVar7 = (int*)std::array<int, 6ul>::operator[](local_148, uVar10);
                    *piVar7 = iVar16;
                    piVar7 = (int*)std::array<int, 6ul>::operator[](local_130, uVar10);
                    *piVar7 = iVar15;
                    piVar7 = (int*)std::array<int, 6ul>::operator[](local_118, uVar10);
                    uVar10 = local_38;
                    *piVar7 = iVar12;
                    pNVar2 = ((NXTWorldRenderer*)this)->m_pPix3D;
                    iVar5 = pNVar2->field_16;
                    iVar11 = pNVar2->field_20;
                    piVar7 = (int*)std::array<int, 6ul>::operator[](local_178, local_38);
                    *piVar7 = (iVar16 * iVar5) / iVar12 + iVar11;
                    iVar5 = pNVar2->field_16;
                    param_4 = (int)local_90;
                    iVar11 = pNVar2->field_24;
                    piVar7 = (int*)std::array<int, 6ul>::operator[](local_160, uVar10);
                    *piVar7 = (iVar15 * iVar5) / iVar12 + iVar11;
                    uVar10 = uVar10 + 1;
                } while (local_60 != uVar10);
            }
            ((NXTWorldRenderer*)this)->m_pPix3D->field_12 = 0;
            local_100 = (vector<int, eastl::allocator>*)&local_50->field_208;
            iVar5 = local_100->size();
            if (iVar5 != 0) {
                local_f8 = (vector<int, eastl::allocator>*)&local_50->field_240;
                local_f0 = (vector<int, eastl::allocator>*)&local_50->field_272;
                local_c8 = (vector<int, eastl::allocator>*)&local_50->field_304;
                local_98 = param_8 << 7;
                local_94 = param_9 << 7;
                local_88 = (vector<int, eastl::allocator>*)&local_50->field_104;
                local_b0 = (vector<int, eastl::allocator>*)&local_50->field_136;
                local_50 = (Ground*)&local_50->field_168;
                local_e8 = 1;
                if (1 < (ulong)(long)iVar5) {
                    local_e8 = (long)iVar5;
                }
                uVar10 = 0;
                do {
                    piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_100, uVar10);
                    uVar14 = (ulong)*piVar7;
                    piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_f8, uVar10);
                    pvVar13 = (vector<int, eastl::allocator>*)(long)*piVar7;
                    local_90 = uVar10;
                    piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_f0, uVar10);
                    uVar10 = (ulong)*piVar7;
                    piVar7 = (int*)std::array<int, 6ul>::operator[](local_178, uVar14);
                    local_3c = *piVar7;
                    puVar8 = (uint*)std::array<int, 6ul>::operator[](local_178, (ulong)pvVar13);
                    local_48 = (ulong)*puVar8;
                    puVar8 = (uint*)std::array<int, 6ul>::operator[](local_178, uVar10);
                    uVar1 = *puVar8;
                    local_38 = uVar14;
                    piVar7 = (int*)std::array<int, 6ul>::operator[](local_160, uVar14);
                    iVar5 = *piVar7;
                    local_58 = pvVar13;
                    piVar7 = (int*)std::array<int, 6ul>::operator[](local_160, (ulong)pvVar13);
                    iVar11 = *piVar7;
                    local_60 = uVar10;
                    piVar7 = (int*)std::array<int, 6ul>::operator[](local_160, uVar10);
                    iVar12 = *piVar7;
                    iVar16 = MousePickingHelper::GetMouseScreenX();
                    iVar6 = MousePickingHelper::GetMouseScreenY();
                    iVar15 = local_3c;
                    local_80 = (ulong)uVar1;
                    cVar4 = world::InsideTriangle(iVar16, iVar6, iVar5, iVar11, iVar12, local_3c, (int)local_48, uVar1);
                    if (cVar4 != '\0') {
                        world::m_mouseoverGroundX = param_8;
                        world::m_mouseoverGroundZ = param_9;
                        world::m_mouseoverGroundY = param_3;
                    }
                    if ((world::m_click != '\0') &&
                        (cVar4 = world::InsideTriangle(world::m_clickX, world::m_clickY, iVar5, iVar11, iVar12, iVar15,
                                                       (int)local_48, (int)local_80),
                         cVar4 != '\0')) {
                        world::m_groundX = param_8;
                        world::m_groundZ = param_9;
                        world::m_groundY = param_3;
                    }
                    uVar10 = local_38;
                    piVar7 = (int*)std::array<int, 6ul>::operator[](local_148, local_38);
                    pvVar3 = local_58;
                    local_3c = *piVar7;
                    puVar9 = (undefined4*)std::array<int, 6ul>::operator[](local_148, (ulong)local_58);
                    uVar14 = local_60;
                    local_80 = CONCAT44(local_80._4_4_, *puVar9);
                    puVar8 = (uint*)std::array<int, 6ul>::operator[](local_148, local_60);
                    local_48 = (ulong)*puVar8;
                    piVar7 = (int*)std::array<int, 6ul>::operator[](local_130, uVar10);
                    local_70 = *piVar7;
                    piVar7 = (int*)std::array<int, 6ul>::operator[](local_130, (ulong)pvVar3);
                    local_6c = *piVar7;
                    piVar7 = (int*)std::array<int, 6ul>::operator[](local_130, uVar14);
                    local_68 = *piVar7;
                    puVar8 = (uint*)std::array<int, 6ul>::operator[](local_118, uVar10);
                    uVar1 = *puVar8;
                    puVar8 = (uint*)std::array<int, 6ul>::operator[](local_118, (ulong)pvVar3);
                    local_d8 = (ulong)*puVar8;
                    puVar8 = (uint*)std::array<int, 6ul>::operator[](local_118, uVar14);
                    pvVar13 = local_c8;
                    local_d0 = (ulong)*puVar8;
                    cVar4 = local_c8->empty();
                    uVar10 = local_90;
                    if ((cVar4 == '\0') &&
                        (piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar13, local_90),
                         pvVar13 = local_c0, *piVar7 != -1)) {
                        piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_c0, local_38);
                        iVar5 = local_98;
                        local_a4 = (float)(*piVar7 - local_98) * 0.0078125;
                        local_e0 = (ulong)uVar1;
                        piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar13, (ulong)pvVar3);
                        local_a0 = (float)(*piVar7 - iVar5) * 0.0078125;
                        piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar13, uVar14);
                        pvVar13 = local_b8;
                        local_9c = (float)(*piVar7 - iVar5) * 0.0078125;
                        piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_b8, local_38);
                        iVar5 = local_94;
                        local_38 = CONCAT44(local_38._4_4_, (float)(*piVar7 - local_94) * 0.0078125);
                        piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar13, (ulong)pvVar3);
                        local_58 = (vector<int, eastl::allocator>*)CONCAT44(local_58._4_4_,
                                                                            (float)(*piVar7 - iVar5) * 0.0078125);
                        piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar13, uVar14);
                        local_60 = CONCAT44(local_60._4_4_, (float)(*piVar7 - iVar5) * 0.0078125);
                        pNVar2 = ((NXTWorldRenderer*)this)->m_pPix3D;
                        piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_88, uVar10);
                        iVar5 = *piVar7;
                        piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_b0, uVar10);
                        iVar11 = *piVar7;
                        piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                            (vector<int, eastl::allocator>*)local_50, uVar10);
                        iVar12 = *piVar7;
                        piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_c8, uVar10);
                        pNVar2->TextureTriangleOpenGL(local_70, local_6c, local_68, local_3c, (int)local_80,
                                                      (int)local_48, (int)local_e0, (int)local_d8, (int)local_d0, iVar5,
                                                      iVar11, iVar12, local_a4, local_a0, local_9c, (float)local_38,
                                                      local_58._0_4_, (float)local_60, *piVar7);
                    } else {
                        piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_88, uVar10);
                        if (*piVar7 != 12345678) {
                            pNVar2 = ((NXTWorldRenderer*)this)->m_pPix3D;
                            puVar8 = (uint*)eastl::vector<int, eastl::allocator>::operator[](local_88, uVar10);
                            local_38 = (ulong)*puVar8;
                            piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_b0, uVar10);
                            iVar5 = *piVar7;
                            piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)local_50, uVar10);
                            NXTPix3D::GouraudTriangleOpenGL((int)pNVar2, local_70, local_6c, local_68, local_3c,
                                                            (int)local_80, (int)local_48, uVar1, (int)local_d8,
                                                            (int)local_d0, (int)local_38, iVar5, *piVar7);
                        }
                    }
                    uVar10 = uVar10 + 1;
                } while (local_e8 != uVar10);
            }
        }
    }

    // 0x100369110, 480 bytes, placed by class name
    // NXTWorldRenderer::RenderSquareOverGround(world const&, int, int, int, int, int, int, int, int, int, int, int)
    void NXTWorldRenderer::RenderSquareOverGround(world* param_1, int param_2, int param_3, int param_4, int param_5,
                                                  int param_6, int param_7, int param_8, int param_9, int param_10,
                                                  int param_11, int param_12) {
        int iVar1;
        NXTPix3D* pNVar2;
        dash3d local_88;

        if (WorldRenderer_renderGround != '\0') {
            if (param_12 != 0 || param_10 != 0) {
                pNVar2 = m_pPix3D;
                CalculateGroundProjectionPointsFine(&local_88, param_1, param_2, param_3, param_4, param_5, param_6,
                                                    param_7, param_8, pNVar2->field_20, pNVar2->field_24,
                                                    pNVar2->field_16);
                if (local_88.field_0[0] != '\0') {
                    if (0 < param_12) {
                        pNVar2 = m_pPix3D;
                        pNVar2->field_12 = param_12;
                        if (0 < (local_88.field_76 - local_88.field_60) * (local_88.field_72 - local_88.field_80) +
                                    (local_88.field_64 - local_88.field_80) * (local_88.field_68 - local_88.field_76)) {
                            pNVar2->field_8 = false;
                            if ((((local_88.field_68 < 0) || (local_88.field_76 < 0)) || (local_88.field_60 < 0)) ||
                                (((iVar1 = pNVar2->field_28,
                                   iVar1 < local_88.field_68 || (iVar1 < local_88.field_76)) ||
                                  (iVar1 < local_88.field_60)))) {
                                pNVar2->field_8 = true;
                            }
                            NXTPix3D::GouraudTriangleOpenGL((int)m_pPix3D, local_88.field_28, local_88.field_32,
                                                            local_88.field_24, local_88.field_12, local_88.field_16,
                                                            local_88.field_8, local_88.field_44, local_88.field_48,
                                                            local_88.field_40, param_11, param_11, param_11);
                        }
                        if (0 < (local_88.field_60 - local_88.field_76) * (local_88.field_56 - local_88.field_64) +
                                    (local_88.field_80 - local_88.field_64) * (local_88.field_52 - local_88.field_60)) {
                            pNVar2 = m_pPix3D;
                            pNVar2->field_8 = false;
                            if (((local_88.field_52 < 0) || (local_88.field_60 < 0)) ||
                                ((local_88.field_76 < 0 ||
                                  (((iVar1 = pNVar2->field_28,
                                     iVar1 < local_88.field_52 || (iVar1 < local_88.field_60)) ||
                                    (iVar1 < local_88.field_76)))))) {
                                pNVar2->field_8 = true;
                            }
                            NXTPix3D::GouraudTriangleOpenGL((int)m_pPix3D, local_88.field_20, local_88.field_24,
                                                            local_88.field_32, local_88.field_4, local_88.field_8,
                                                            local_88.field_16, local_88.field_36, local_88.field_40,
                                                            local_88.field_48, param_11, param_11, param_11);
                        }
                    }
                    if (0 < param_10) {
                        RenderSquareEdges(this, (GroundProjPoints*)&local_88, param_10, param_11, param_9);
                    }
                }
            }
        }
    }

} // namespace jag::oldscape::dash3d
