// libs/oldscape/jagex3/dash3d/NXTWorldRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class DeferredGroundFineHighlight {
    public:
        // virtual methods in vtable order
        virtual void Render(world& world, NXTWorldRenderer* nxtWorldRenderer,
                            ModelLitRenderer<NXTPix3D>* modelLitRenderer, int arg4, int arg5, int arg6, int arg7,
                            int arg8);
        virtual ~DeferredGroundFineHighlight();
        DeferredGroundFineHighlight(int arg1, int arg2, int arg3, GridRect gridRect,
                                    const EntityHighlight& entityHighlight);

    private:
        int field_8;
        int field_12;
        int field_16;
        unsigned long field_20;
        uint8_t _unknown_28[4];
        int field_32;
        uint8_t _unknown_36[4];
        int field_40;
        int field_44;
    };

    class NXTWorldRenderer {
    public:
        // virtual methods in vtable order
        virtual NXTPix3D* GetPix3D();
        virtual uint8_t* GetModelLitRenderer();
        virtual void PrepareRender(int arg1);
        virtual void RenderQuickGround(const world& world, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                       int arg8, int arg9, int arg10, int arg11, int arg12, int arg13, int arg14);
        virtual void RenderGround(const world& world, const Ground& ground, int arg3, int arg4, int arg5, int arg6,
                                  int arg7, int arg8, int arg9);
        void RenderGroundOverlayGrid(const world& world, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                     int arg8, int arg9, int arg10, bool arg11, int arg12, int arg13, int arg14);
        void RenderGroundOverlayFine(const world& world, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                     int arg8, int arg9, int arg10, bool arg11, int arg12, int arg13, int arg14);
        NXTWorldRenderer(NXTPix3D* nxtPix3D);
        void RenderGroundOutlineSegment(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
        void RenderGroundOutline(const world& world, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                 int arg8, int arg9, int arg10, int arg11);
        void RenderSquareEdges(const GroundProjPoints& groundProjPoints, int arg2, int arg3, int arg4);
        void RenderSquareOverGround(const world& world, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                    int arg8, int arg9, int arg10, int arg11, int arg12);

    private:
        NXTPix3D* m_pPix3D;
        uint8_t _unknown_16[8];
    };

    // 0x10034adb0
    void NXTWorldRenderer::RenderGroundOverlayGrid(const world& world, int arg2, int arg3, int arg4, int arg5, int arg6,
                                                   int arg7, int arg8, int arg9, int arg10, bool arg11, int arg12,
                                                   int arg13, int arg14) {
        unsigned int uVar1;
        int iVar2;
        int arg8_00;
        int iVar3;
        unsigned int arg9_00;

        if (0 < arg9) {
            iVar2 = 0;
            do {
                arg9_00 = 15;
                if (!arg11) {
                    uVar1 = (unsigned int)(iVar2 == 0) * 8 + 7;
                    arg9_00 = uVar1 & 4294967293;
                    if (iVar2 == arg9 - 1) {
                        arg9_00 = uVar1;
                    }
                }
                if (0 < arg10) {
                    iVar3 = 0;
                    arg8_00 = arg8 << 7;
                    do {
                        if (!arg11) {
                            uVar1 = arg9_00 & 4294967294;
                            if (iVar3 == 0) {
                                uVar1 = arg9_00;
                            }
                            arg9_00 = uVar1 & 4294967291;
                            if (arg10 + iVar3 == 1) {
                                arg9_00 = uVar1;
                            }
                        }
                        RenderSquareOverGround(world, arg2, arg3, arg4, arg5, arg6, (iVar2 + arg7) * 128, arg8_00,
                                               arg9_00, arg12, arg13, arg14);
                        iVar3 = iVar3 - 1;
                        arg8_00 = arg8_00 + 128;
                    } while (arg10 + iVar3 != 0);
                }
                iVar2 = iVar2 + 1;
            } while (iVar2 != arg9);
        }
    }

    // 0x10034af60
    void DeferredGroundFineHighlight::Render(world& world, NXTWorldRenderer* nxtWorldRenderer,
                                             ModelLitRenderer<NXTPix3D>* modelLitRenderer, int arg4, int arg5, int arg6,
                                             int arg7, int arg8) {
        int arg2 = field_8;
        int arg7_00 = field_12;
        int arg8_00 = field_16;
        int arg9 = *(int*)&field_28;
        int arg10 = field_32;
        bool arg11 = (bool)(*(EntityHighlight**)&field_40)->ShowInsideEdges();
        unsigned short uVar2 = (*(EntityHighlight**)&field_40)->GetTileOutlineWidth();
        unsigned short uVar3 = (*(EntityCombinedID**)&field_40)->GetEntityID();
        uint8_t bVar1 = (*(EntityHighlight**)&field_40)->GetTileTintAlpha();
        nxtWorldRenderer->RenderGroundOverlayFine(world, arg2, arg4, arg5, arg6, arg7, arg7_00, arg8_00, arg9, arg10,
                                                  arg11, (unsigned int)uVar2, (unsigned int)uVar3, (unsigned int)bVar1);
    }

    // 0x10034b030
    void NXTWorldRenderer::RenderGroundOverlayFine(const world& world, int arg2, int arg3, int arg4, int arg5, int arg6,
                                                   int arg7, int arg8, int arg9, int arg10, bool arg11, int arg12,
                                                   int arg13, int arg14) {
        unsigned int uVar1;
        int arg8_00;
        int iVar2;
        unsigned int arg9_00;
        int local_34;

        if (0 < arg9) {
            local_34 = 0;
            do {
                arg9_00 = 15;
                if (!arg11) {
                    uVar1 = (unsigned int)(local_34 == 0) * 8 + 7;
                    arg9_00 = uVar1 & 4294967293;
                    if (local_34 == arg9 - 1) {
                        arg9_00 = uVar1;
                    }
                }
                if (0 < arg10) {
                    iVar2 = 0;
                    arg8_00 = arg8 + arg10 * -64;
                    do {
                        if (!arg11) {
                            uVar1 = (arg9_00 | 5) & 4294967294;
                            if (iVar2 == 0) {
                                uVar1 = arg9_00 | 5;
                            }
                            arg9_00 = uVar1 & 4294967291;
                            if (arg10 + iVar2 == 1) {
                                arg9_00 = uVar1;
                            }
                        }
                        RenderSquareOverGround(world, arg2, arg3, arg4, arg5, arg6, local_34 * 128 + arg7 + arg9 * -64,
                                               arg8_00, arg9_00, arg12, arg13, arg14);
                        arg8_00 = arg8_00 + 128;
                        iVar2 = iVar2 - 1;
                    } while (arg10 + iVar2 != 0);
                }
                local_34 = local_34 + 1;
            } while (local_34 != arg9);
        }
    }

    // 0x100367fc0
    NXTWorldRenderer::NXTWorldRenderer(NXTPix3D* nxtPix3D)
        : WorldRenderer<NXTPix3D>(), field_16(nxtPix3D), m_pPix3D(nxtPix3D) {}

    // 0x100368030
    NXTPix3D* NXTWorldRenderer::GetPix3D() {
        return m_pPix3D;
    }

    // 0x100368040
    uint8_t* NXTWorldRenderer::GetModelLitRenderer() {
        return &field_16;
    }

    // 0x100368050
    void NXTWorldRenderer::PrepareRender(int arg1) {
        field_16.PrepareRender(arg1);
    }

    // 0x100368060
    void NXTWorldRenderer::RenderGroundOutlineSegment(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                                                      int arg7, int arg8) {
        int arg4_00;
        int arg1_00;
        int arg3_00;
        int iVar5;
        int iVar6;
        int iVar11;
        int iVar12;
        int iVar13;
        int arg6_00;
        int in_stack_ffffffffffffffa0;

        int iVar10 = m_pPix3D->field_20;
        int iVar9 = m_pPix3D->field_24;
        int iVar7 = arg1 - iVar10;
        iVar10 = arg2 - iVar10;
        int iVar2 = arg3 - iVar9;
        iVar9 = arg4 - iVar9;
        unsigned int uVar1 = iVar10 - iVar7;
        unsigned int uVar4 = iVar9 - iVar2;
        unsigned int uVar3 = -uVar1;
        if ((int)-uVar1 < 0) {
            uVar3 = uVar1;
        }
        unsigned int uVar8 = -uVar4;
        if ((int)-uVar4 < 0) {
            uVar8 = uVar4;
        }
        if (uVar8 <= uVar3) {
            uVar8 = uVar3;
        }
        if (uVar8 != 0) {
            iVar5 = ((int)(uVar4 * 65536) / (int)uVar8) * arg7;
            iVar12 = iVar5 >> 17;
            iVar6 = iVar5 + 65536 >> 17;
            iVar5 = ((int)(uVar1 * -65536) / (int)uVar8) * arg7;
            iVar13 = iVar5 >> 17;
            iVar11 = iVar5 + 65536 >> 17;
            iVar5 = m_pPix3D->field_16;
            arg4_00 = ((iVar12 + iVar7) * arg5) / iVar5;
            arg6_00 = ((iVar10 - iVar6) * arg6) / iVar5;
            arg1_00 = ((iVar13 + iVar2) * arg5) / iVar5;
            arg3_00 = ((iVar9 - iVar11) * arg6) / iVar5;
            m_pPix3D->GouraudTriangleOpenGL(arg1_00, ((iVar2 - iVar11) * arg5) / iVar5, arg3_00, arg4_00,
                                            ((iVar7 - iVar6) * arg5) / iVar5, arg6_00, arg5, arg5, arg6, arg8, arg8,
                                            arg8, in_stack_ffffffffffffffa0);
            m_pPix3D->GouraudTriangleOpenGL(arg1_00, arg3_00, ((iVar13 + iVar9) * arg6) / iVar5, arg4_00, arg6_00,
                                            ((iVar12 + iVar10) * arg6) / iVar5, arg5, arg6, arg6, arg8, arg8, arg8,
                                            in_stack_ffffffffffffffa0);
        }
    }

    // 0x100368210
    void NXTWorldRenderer::RenderGroundOutline(const world& world, int arg2, int arg3, int arg4, int arg5, int arg6,
                                               int arg7, int arg8, int arg9, int arg10, int arg11) {
        GroundProjPoints local_88;

        if ((arg10 != 0) && (arg9 != 0)) {
            CalculateGroundProjectionPointsGrid(&local_88, (int)world, arg2, arg3, arg4, arg5, arg6, arg7, arg8,
                                                m_pPix3D->field_20, m_pPix3D->field_24);
            if (local_88[0] != (GroundProjPoints)0) {
                RenderSquareEdges(local_88, arg10, arg11, arg9);
            }
        }
    }

    // 0x1003682a0
    void NXTWorldRenderer::RenderSquareEdges(const GroundProjPoints& groundProjPoints, int arg2, int arg3, int arg4) {
        m_pPix3D->field_12 = 0;
        if ((arg4 & 1U) != 0) {
            RenderGroundOutlineSegment(*(int*)(groundProjPoints + 52), *(int*)(groundProjPoints + 60),
                                       *(int*)(groundProjPoints + 56), *(int*)(groundProjPoints + 64),
                                       *(int*)(groundProjPoints + 36), *(int*)(groundProjPoints + 40), arg2, arg3);
        }
        if ((arg4 & 2U) != 0) {
            RenderGroundOutlineSegment(*(int*)(groundProjPoints + 60), *(int*)(groundProjPoints + 68),
                                       *(int*)(groundProjPoints + 64), *(int*)(groundProjPoints + 72),
                                       *(int*)(groundProjPoints + 40), *(int*)(groundProjPoints + 44), arg2, arg3);
        }
        if ((arg4 & 4U) != 0) {
            RenderGroundOutlineSegment(*(int*)(groundProjPoints + 68), *(int*)(groundProjPoints + 76),
                                       *(int*)(groundProjPoints + 72), *(int*)(groundProjPoints + 80),
                                       *(int*)(groundProjPoints + 44), *(int*)(groundProjPoints + 48), arg2, arg3);
        }
        if ((arg4 & 8U) != 0) {
            RenderGroundOutlineSegment(*(int*)(groundProjPoints + 76), *(int*)(groundProjPoints + 52),
                                       *(int*)(groundProjPoints + 80), *(int*)(groundProjPoints + 56),
                                       *(int*)(groundProjPoints + 48), *(int*)(groundProjPoints + 36), arg2, arg3);
        }
    }

    // 0x1003683c0
    void NXTWorldRenderer::RenderQuickGround(const world& world, int arg2, int arg3, int arg4, int arg5, int arg6,
                                             int arg7, int arg8, int arg9, int arg10, int arg11, int arg12, int arg13,
                                             int arg14) {
        NXTPix3D* pNVar1;
        bool cVar2;
        unsigned int uVar3;
        int iVar4;
        int iVar5;
        int arg8_00;
        int iVar6;
        int iVar7;
        long* plVar8;
        unsigned int uVar9;
        int in_stack_ffffffffffffff48;
        char local_a8[4];
        int local_a4;
        int local_a0;
        int local_9c;
        int local_98;
        int local_94;
        int local_90;
        int local_8c;
        int local_88;
        int local_84;
        int local_80;
        int local_7c;
        int local_78;
        int local_74;
        int local_70;
        unsigned int local_6c;
        int local_68;
        int local_64;
        int local_60;
        unsigned int local_5c;
        int local_58;
        int local_54;
        NXTPix3D* local_50;
        NXTPix3D* local_48;
        int local_3c;
        NXTWorldRenderer* local_38;

        if (((WorldRenderer_renderGround != '\0') && (arg14 != 0)) &&
            (local_3c = arg2,
             CalculateGroundProjectionPointsGrid((world*)local_a8, (int)world, arg2, arg3, arg4, arg5, arg6, arg7, arg8,
                                                 m_pPix3D->field_20, m_pPix3D->field_24),
             iVar5 = local_58, iVar7 = local_60, iVar6 = local_64, uVar9 = local_6c, local_a8[0] != '\0')) {
            pNVar1 = m_pPix3D;
            pNVar1->field_12 = arg14;
            local_38 = this;
            if (0 <
                (int)((local_5c - local_6c) * (local_60 - local_58) + (local_68 - local_58) * (local_64 - local_5c))) {
                local_50 = (NXTPix3D*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)local_68);
                pNVar1->field_8 = false;
                local_48 = (NXTPix3D*)(unsigned long)local_5c;
                if ((((local_64 < 0) || ((int)local_5c < 0)) ||
                     (((int)local_6c < 0 ||
                       ((iVar4 = pNVar1->field_28, iVar4 < local_64 || (iVar4 < (int)local_5c)))))) ||
                    (iVar4 < (int)local_6c)) {
                    pNVar1->field_8 = true;
                }
                uVar3 = MousePickingHelper::GetMouseScreenX();
                iVar4 = MousePickingHelper::GetMouseScreenY();
                cVar2 = ((world*)(unsigned long)uVar3)
                            ->InsideTriangle(iVar4, iVar7, iVar5, (int)local_50, iVar6, (int)local_48, uVar9,
                                             in_stack_ffffffffffffff48);
                iVar6 = local_3c;
                if (cVar2) {
                    dash3d::world::m_mouseoverGroundX = arg7;
                    dash3d::world::m_mouseoverGroundZ = arg8;
                    dash3d::world::m_mouseoverGroundY = local_3c;
                }
                if ((dash3d::world::m_click != '\0') &&
                    (uVar9 = local_6c,
                     cVar2 = ((world*)(unsigned long)dash3d::world::m_clickX)
                                 ->InsideTriangle(dash3d::world::m_clickY, local_60, local_58, local_68, local_64,
                                                  local_5c, local_6c, in_stack_ffffffffffffff48),
                     cVar2)) {
                    dash3d::world::m_groundX = arg7;
                    dash3d::world::m_groundZ = arg8;
                    dash3d::world::m_groundY = iVar6;
                }
                if (arg9 == -1) {
                    if (arg12 != 12345678) {
                        local_38->m_pPix3D->GouraudTriangleOpenGL(local_8c, local_88, local_90, local_9c, local_98,
                                                                  local_a0, local_7c, local_78, local_80, arg12, arg13,
                                                                  arg11, uVar9);
                    }
                } else if (dash3d::world::m_lowMem == '\0') {
                    local_38->m_pPix3D->TextureTriangleOpenGL(local_8c, local_88, local_90, local_9c, local_98,
                                                              local_a0, local_7c, local_78, local_80, arg12, arg13,
                                                              arg11, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, arg9);
                } else {
                    plVar8 = (long*)(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)).operator->();
                    iVar5 = (**(void (**)(...))(*plVar8 + 24))(plVar8, arg9);
                    iVar7 = local_58;
                    uVar9 = local_5c;
                    iVar6 = local_68;
                    local_48 = local_38->m_pPix3D;
                    local_54 = local_60;
                    local_50 = (NXTPix3D*)(unsigned long)local_6c;
                    iVar4 = Pix3D::TextureLightColour(iVar5, arg12);
                    arg8_00 = Pix3D::TextureLightColour(iVar5, arg13);
                    iVar5 = Pix3D::TextureLightColour(iVar5, arg11);
                    local_48->GouraudTriangle(local_54, iVar7, iVar6, local_64, uVar9, (int)local_50, iVar4, arg8_00,
                                              iVar5);
                }
            }
            iVar5 = local_58;
            uVar9 = local_5c;
            iVar7 = local_68;
            iVar6 = local_74;
            if (0 <
                (int)((local_6c - local_5c) * (local_70 - local_68) + (local_58 - local_68) * (local_74 - local_6c))) {
                local_50 = (NXTPix3D*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)local_70);
                pNVar1 = local_38->m_pPix3D;
                pNVar1->field_8 = false;
                local_48 = (NXTPix3D*)(unsigned long)local_6c;
                if (((((local_74 < 0) || ((int)local_6c < 0)) || ((int)local_5c < 0)) ||
                     ((iVar4 = pNVar1->field_28, iVar4 < local_74 || (iVar4 < (int)local_6c)))) ||
                    (iVar4 < (int)local_5c)) {
                    pNVar1->field_8 = true;
                }
                uVar3 = MousePickingHelper::GetMouseScreenX();
                iVar4 = MousePickingHelper::GetMouseScreenY();
                cVar2 = ((world*)(unsigned long)uVar3)
                            ->InsideTriangle(iVar4, (int)local_50, iVar7, iVar5, iVar6, (int)local_48, uVar9,
                                             in_stack_ffffffffffffff48);
                iVar6 = local_3c;
                if (cVar2) {
                    dash3d::world::m_mouseoverGroundX = arg7;
                    dash3d::world::m_mouseoverGroundZ = arg8;
                    dash3d::world::m_mouseoverGroundY = local_3c;
                }
                if ((dash3d::world::m_click != '\0') &&
                    (uVar9 = local_5c,
                     cVar2 = ((world*)(unsigned long)dash3d::world::m_clickX)
                                 ->InsideTriangle(dash3d::world::m_clickY, local_70, local_68, local_58, local_74,
                                                  local_6c, local_5c, in_stack_ffffffffffffff48),
                     cVar2)) {
                    dash3d::world::m_groundX = arg7;
                    dash3d::world::m_groundZ = arg8;
                    dash3d::world::m_groundY = iVar6;
                }
                if (arg9 == -1) {
                    if (arg10 != 12345678) {
                        local_38->m_pPix3D->GouraudTriangleOpenGL(local_94, local_90, local_88, local_a4, local_a0,
                                                                  local_98, local_84, local_80, local_78, arg10, arg11,
                                                                  arg13, uVar9);
                    }
                } else if (dash3d::world::m_lowMem == '\0') {
                    local_38->m_pPix3D->TextureTriangleOpenGL(local_94, local_90, local_88, local_a4, local_a0,
                                                              local_98, local_84, local_80, local_78, arg10, arg11,
                                                              arg13, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, arg9);
                } else {
                    plVar8 = (long*)(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)).operator->();
                    iVar6 = (**(void (**)(...))(*plVar8 + 24))(plVar8, arg9);
                    local_50 = local_38->m_pPix3D;
                    local_3c = local_74;
                    local_54 = local_68;
                    local_48 = (NXTPix3D*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)local_6c);
                    local_38 = (NXTWorldRenderer*)(unsigned long)local_5c;
                    iVar7 = Pix3D::TextureLightColour(iVar6, arg10);
                    iVar5 = Pix3D::TextureLightColour(iVar6, arg11);
                    iVar6 = Pix3D::TextureLightColour(iVar6, arg13);
                    local_50->GouraudTriangle(local_70, local_54, local_58, local_3c, (int)local_48, (int)local_38,
                                              iVar7, iVar5, iVar6);
                }
            }
        }
    }

    // 0x1003689b0
    void NXTWorldRenderer::RenderGround(const world& world, const Ground& ground, int arg3, int arg4, int arg5,
                                        int arg6, int arg7, int arg8, int arg9) {
        array<int, 6ul>* this_00;
        unsigned int uVar1;
        NXTPix3D* pNVar2;
        vector<int>* arg1;
        bool cVar3;
        int iVar4;
        unsigned int uVar5;
        int* piVar6;
        unsigned int* puVar7;
        uint32_t* puVar8;
        unsigned long uVar9;
        int iVar10;
        int iVar11;
        vector<int>* pvVar12;
        unsigned long uVar13;
        int iVar14;
        int iVar15;
        array<int, 6ul> aaStack_17c;
        int in_stack_fffffffffffffe88;
        array<int, 6ul> local_160;
        array<int, 6ul> local_148;
        array<int, 6ul> local_130;
        array<int, 6ul> local_118;
        vector<int>* local_100;
        vector<int>* local_f8;
        vector<int>* local_f0;
        unsigned long local_e8;
        unsigned long local_e0;
        unsigned long local_d8;
        unsigned long local_d0;
        vector<int>* local_c8;
        vector<int>* local_c0;
        vector<int>* local_b8;
        vector<int>* local_b0;
        float local_a4;
        float local_a0;
        float local_9c;
        int local_98;
        int local_94;
        unsigned long local_90;
        vector<int>* local_88;
        unsigned long local_80;
        int local_70;
        int local_6c;
        int local_68;
        unsigned long local_60;
        vector<int>* local_58;
        Ground* local_50;
        unsigned long local_48;
        int local_3c;
        unsigned long local_38;

        local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)arg5);
        if (WorldRenderer_renderGround != '\0') {
            local_c0 = (vector<int>*)&ground.field_8;
            local_60 = local_c0->size();
            local_b8 = (vector<int>*)&ground.field_72;
            local_50 = ground;
            if (local_60 != 0) {
                local_58 = (vector<int>*)&ground.field_40;
                uVar9 = 0;
                local_90 = (((uint64_t)local_90._4_4_ << 32) | (uint32_t)arg4);
                do {
                    piVar6 = (int*)(*local_c0)[uVar9];
                    iVar14 = *piVar6 - dash3d::world::m_cx;
                    piVar6 = (int*)(*local_58)[uVar9];
                    iVar10 = *piVar6 - dash3d::world::m_cy;
                    piVar6 = (int*)(*local_b8)[uVar9];
                    iVar4 = (*piVar6 - dash3d::world::m_cz) * arg7 - iVar14 * arg6 >> 16;
                    iVar11 = iVar4 * (int)local_48 + iVar10 * arg4;
                    if (iVar11 < 3276800) {
                        return;
                    }
                    iVar15 = iVar14 * arg7 + (*piVar6 - dash3d::world::m_cz) * arg6 >> 16;
                    iVar14 = iVar10 * (int)local_48 - iVar4 * arg4 >> 16;
                    iVar11 = iVar11 >> 16;
                    local_38 = uVar9;
                    piVar6 = &local_148[uVar9];
                    *piVar6 = iVar15;
                    piVar6 = &local_130[uVar9];
                    *piVar6 = iVar14;
                    piVar6 = &local_118[uVar9];
                    uVar9 = local_38;
                    *piVar6 = iVar11;
                    pNVar2 = m_pPix3D;
                    iVar4 = pNVar2->field_16;
                    iVar10 = pNVar2->field_20;
                    piVar6 = (int*)(*(&aaStack_17c + 4))[local_38];
                    *piVar6 = (iVar15 * iVar4) / iVar11 + iVar10;
                    iVar4 = pNVar2->field_16;
                    arg4 = (int)local_90;
                    iVar10 = pNVar2->field_24;
                    piVar6 = &local_160[uVar9];
                    *piVar6 = (iVar14 * iVar4) / iVar11 + iVar10;
                    uVar9 = uVar9 + 1;
                } while (local_60 != uVar9);
            }
            m_pPix3D->field_12 = 0;
            local_100 = (vector<int>*)&local_50->field_208;
            iVar4 = local_100->size();
            if (iVar4 != 0) {
                local_f8 = (vector<int>*)&local_50->field_240;
                local_f0 = (vector<int>*)&local_50->field_272;
                local_c8 = (vector<int>*)&local_50->field_304;
                local_98 = arg8 << 7;
                local_94 = arg9 << 7;
                local_88 = (vector<int>*)&local_50->field_104;
                local_b0 = (vector<int>*)&local_50->field_136;
                local_50 = (Ground*)&local_50->field_168;
                local_e8 = 1;
                if (1 < (unsigned long)(long)iVar4) {
                    local_e8 = (long)iVar4;
                }
                uVar9 = 0;
                do {
                    piVar6 = (int*)(*local_100)[uVar9];
                    uVar13 = (unsigned long)*piVar6;
                    piVar6 = (int*)(*local_f8)[uVar9];
                    pvVar12 = (vector<int>*)(long)*piVar6;
                    local_90 = uVar9;
                    piVar6 = (int*)(*local_f0)[uVar9];
                    uVar9 = (unsigned long)*piVar6;
                    this_00 = &aaStack_17c + 4;
                    piVar6 = (int*)(*this_00)[uVar13];
                    local_3c = *piVar6;
                    puVar7 = (unsigned int*)(*this_00)[(unsigned long)pvVar12];
                    local_48 = (unsigned long)*puVar7;
                    puVar7 = (unsigned int*)(*this_00)[uVar9];
                    uVar1 = *puVar7;
                    local_38 = uVar13;
                    piVar6 = &local_160[uVar13];
                    iVar4 = *piVar6;
                    local_58 = pvVar12;
                    piVar6 = &local_160[(unsigned long)pvVar12];
                    iVar10 = *piVar6;
                    local_60 = uVar9;
                    piVar6 = &local_160[uVar9];
                    iVar11 = *piVar6;
                    uVar5 = MousePickingHelper::GetMouseScreenX();
                    iVar15 = MousePickingHelper::GetMouseScreenY();
                    iVar14 = local_3c;
                    local_80 = (unsigned long)uVar1;
                    cVar3 = ((world*)(unsigned long)uVar5)
                                ->InsideTriangle(iVar15, iVar4, iVar10, iVar11, local_3c, (int)local_48, uVar1,
                                                 in_stack_fffffffffffffe88);
                    if (cVar3) {
                        dash3d::world::m_mouseoverGroundX = arg8;
                        dash3d::world::m_mouseoverGroundZ = arg9;
                        dash3d::world::m_mouseoverGroundY = arg3;
                    }
                    if ((dash3d::world::m_click != '\0') &&
                        (cVar3 = ((world*)(unsigned long)dash3d::world::m_clickX)
                                     ->InsideTriangle(dash3d::world::m_clickY, iVar4, iVar10, iVar11, iVar14,
                                                      (int)local_48, (int)local_80, in_stack_fffffffffffffe88),
                         cVar3)) {
                        dash3d::world::m_groundX = arg8;
                        dash3d::world::m_groundZ = arg9;
                        dash3d::world::m_groundY = arg3;
                    }
                    uVar9 = local_38;
                    piVar6 = &local_148[local_38];
                    arg1 = local_58;
                    local_3c = *piVar6;
                    puVar8 = &local_148[(unsigned long)local_58];
                    uVar13 = local_60;
                    local_80 = (((uint64_t)local_80._4_4_ << 32) | (uint32_t)(*puVar8));
                    puVar7 = &local_148[local_60];
                    local_48 = (unsigned long)*puVar7;
                    piVar6 = &local_130[uVar9];
                    local_70 = *piVar6;
                    piVar6 = &local_130[(unsigned long)arg1];
                    local_6c = *piVar6;
                    piVar6 = &local_130[uVar13];
                    local_68 = *piVar6;
                    puVar7 = &local_118[uVar9];
                    uVar1 = *puVar7;
                    puVar7 = &local_118[(unsigned long)arg1];
                    local_d8 = (unsigned long)*puVar7;
                    puVar7 = &local_118[uVar13];
                    pvVar12 = local_c8;
                    local_d0 = (unsigned long)*puVar7;
                    cVar3 = local_c8->empty();
                    uVar9 = local_90;
                    if ((!cVar3) && (piVar6 = (int*)(*pvVar12)[local_90], pvVar12 = local_c0, *piVar6 != -1)) {
                        piVar6 = (int*)(*local_c0)[local_38];
                        iVar4 = local_98;
                        local_a4 = (float)(*piVar6 - local_98) * 0.0078125f;
                        local_e0 = (unsigned long)uVar1;
                        piVar6 = (int*)(*pvVar12)[(unsigned long)arg1];
                        local_a0 = (float)(*piVar6 - iVar4) * 0.0078125f;
                        piVar6 = (int*)(*pvVar12)[uVar13];
                        pvVar12 = local_b8;
                        local_9c = (float)(*piVar6 - iVar4) * 0.0078125f;
                        piVar6 = (int*)(*local_b8)[local_38];
                        iVar4 = local_94;
                        local_38 =
                            (((uint64_t)local_38._4_4_ << 32) | (uint32_t)((float)(*piVar6 - local_94) * 0.0078125f));
                        piVar6 = (int*)(*pvVar12)[(unsigned long)arg1];
                        local_58 = (vector<int>*)(((uint64_t)local_58._4_4_ << 32) |
                                                  (uint32_t)((float)(*piVar6 - iVar4) * 0.0078125f));
                        piVar6 = (int*)(*pvVar12)[uVar13];
                        local_60 =
                            (((uint64_t)local_60._4_4_ << 32) | (uint32_t)((float)(*piVar6 - iVar4) * 0.0078125f));
                        pNVar2 = m_pPix3D;
                        piVar6 = (int*)(*local_88)[uVar9];
                        iVar4 = *piVar6;
                        piVar6 = (int*)(*local_b0)[uVar9];
                        iVar10 = *piVar6;
                        piVar6 = (int*)(*local_50)[uVar9];
                        iVar11 = *piVar6;
                        piVar6 = (int*)(*local_c8)[uVar9];
                        pNVar2->TextureTriangleOpenGL(local_70, local_6c, local_68, local_3c, (int)local_80,
                                                      (int)local_48, (int)local_e0, (int)local_d8, (int)local_d0, iVar4,
                                                      iVar10, iVar11, local_a4, local_a0, local_9c, (float)local_38,
                                                      local_58._0_4_, (float)local_60, *piVar6);
                    } else {
                        piVar6 = (int*)(*local_88)[uVar9];
                        if (*piVar6 != 12345678) {
                            pNVar2 = m_pPix3D;
                            puVar7 = (unsigned int*)(*local_88)[uVar9];
                            local_38 = (unsigned long)*puVar7;
                            piVar6 = (int*)(*local_b0)[uVar9];
                            iVar4 = *piVar6;
                            piVar6 = (int*)(*local_50)[uVar9];
                            pNVar2->GouraudTriangleOpenGL(local_70, local_6c, local_68, local_3c, (int)local_80,
                                                          (int)local_48, uVar1, (int)local_d8, (int)local_d0,
                                                          (int)local_38, iVar4, *piVar6, 3575976);
                        }
                    }
                    uVar9 = uVar9 + 1;
                } while (local_e8 != uVar9);
            }
        }
    }

    // 0x100369110
    void NXTWorldRenderer::RenderSquareOverGround(const world& world, int arg2, int arg3, int arg4, int arg5, int arg6,
                                                  int arg7, int arg8, int arg9, int arg10, int arg11, int arg12) {
        int iVar1;
        NXTPix3D* pNVar2;
        int arg13;
        GroundProjPoints local_88;
        int local_84;
        int local_80;
        int local_7c;
        int local_78;
        int local_74;
        int local_70;
        int local_6c;
        int local_68;
        int local_64;
        int local_60;
        int local_5c;
        int local_58;
        int local_54;
        int local_50;
        int local_4c;
        int local_48;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;

        if (WorldRenderer_renderGround != '\0') {
            if (arg12 != 0 || arg10 != 0) {
                pNVar2 = m_pPix3D;
                arg13 = pNVar2->field_16;
                CalculateGroundProjectionPointsFine(&local_88, (int)world, arg2, arg3, arg4, arg5, arg6, arg7, arg8,
                                                    pNVar2->field_20, pNVar2->field_24);
                if (local_88[0] != (GroundProjPoints)0) {
                    if (0 < arg12) {
                        pNVar2 = m_pPix3D;
                        pNVar2->field_12 = arg12;
                        if (0 < (local_3c - local_4c) * (local_40 - local_38) +
                                    (local_48 - local_38) * (local_44 - local_3c)) {
                            pNVar2->field_8 = false;
                            if ((((local_44 < 0) || (local_3c < 0)) || (local_4c < 0)) ||
                                (((iVar1 = pNVar2->field_28, iVar1 < local_44 || (iVar1 < local_3c)) ||
                                  (iVar1 < local_4c)))) {
                                pNVar2->field_8 = true;
                            }
                            m_pPix3D->GouraudTriangleOpenGL(local_6c, local_68, local_70, local_7c, local_78, local_80,
                                                            local_5c, local_58, local_60, arg11, arg11, arg11, arg13);
                        }
                        if (0 < (local_4c - local_3c) * (local_50 - local_48) +
                                    (local_38 - local_48) * (local_54 - local_4c)) {
                            pNVar2 = m_pPix3D;
                            pNVar2->field_8 = false;
                            if (((local_54 < 0) || (local_4c < 0)) ||
                                ((local_3c < 0 ||
                                  (((iVar1 = pNVar2->field_28, iVar1 < local_54 || (iVar1 < local_4c)) ||
                                    (iVar1 < local_3c)))))) {
                                pNVar2->field_8 = true;
                            }
                            m_pPix3D->GouraudTriangleOpenGL(local_74, local_70, local_68, local_84, local_80, local_78,
                                                            local_64, local_60, local_58, arg11, arg11, arg11, arg13);
                        }
                    }
                    if (0 < arg10) {
                        RenderSquareEdges(local_88, arg10, arg11, arg9);
                    }
                }
            }
        }
    }

} // namespace jag::oldscape::dash3d
