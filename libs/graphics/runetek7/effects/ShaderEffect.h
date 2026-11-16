// libs/graphics/runetek7/effects/ShaderEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::graphics {
    class ShaderEffect : public Drawable // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ShaderEffect();
        virtual OnQualityChange(GraphicsQuality);
        virtual void __pure_slot_7() = 0;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        GetQuality() const;
        SetQuality(GraphicsQuality);
        ShaderEffect(RT7Core&);

        // data members, from how the methods use this: 24 bytes, the first 16 are Drawable
        RT7Core* field_16; // offset 16
    };

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    ShaderEffect::GetQuality() const;

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ShaderEffect::~ShaderEffect();

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    ShaderEffect::OnQualityChange(GraphicsQuality);

    // 0x1001be5e0, 32 bytes, inline, placed by class name and debug map
    // ShaderEffect::SetQuality(GraphicsQuality)
    undefined8 ShaderEffect::SetQuality(uint param_2) {
        undefined8 uVar1;

        uVar1 = 1;
        if (field_8 != param_2) {
            field_8 = param_2;
            uVar1 = (*(code*)field_0[13])();
        }
        return uVar1;
    }

    // 0x10092cf20, 48 bytes, base-object constructor, inline, placed by class name
    // ShaderEffect::ShaderEffect(RT7Core&)
    void ShaderEffect::ShaderEffect(RT7Core* param_1) {
        new (this) Effect(param_1);
        field_0 = (undefined**)(PTR_vtable_100ee8730 + 16);
        field_8 = 4294967295;
        field_16 = param_1;
    }

    // 0x100937dc0, 32 bytes, inline, placed by class name
    // ShaderEffect::CreateRenderingResources()
    void ShaderEffect::CreateRenderingResources() {
        undefined4 uVar1;

        uVar1 = GetPos();
        (*(code*)field_0[13])(this, uVar1);
    }

    // 0x100937de0, 32 bytes, inline, placed by class name
    // ShaderEffect::DestroyRenderingResources()
    void ShaderEffect::DestroyRenderingResources() {
        (*(code*)field_0[13])(this, 4294967295);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ShaderEffect::~ShaderEffect();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ShaderEffect::~ShaderEffect();

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x1001be600, 1072 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_RSeven::PaintRSeven(render::RenderContext&)
    void OSRenderCore_RenderThread_RSeven::PaintRSeven(RenderContext* param_1) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        Texture* pTVar3;
        undefined8 uVar4;
        unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>* this_01;
        bool bVar5;
        undefined8* puVar6;
        NXTRenderer* this_02;
        Material* this_03;
        RT7Core* pRVar7;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        RenderTargets* pRVar8;
        vector* pvVar9;
        int* piVar10;
        long lVar11;
        shared_ptr<render::RenderTargets>* this_05;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar12;
        Scene* this_06;
        PostProcessController* this_07;
        PostProcessManager* this_08;
        Texture* pTVar13;
        int iVar14;
        ViewTransforms local_208;
        Matrix44T local_138;
        Viewport local_f8[2];
        undefined1 local_b8[24];
        undefined1 local_a0[32];
        undefined1 local_80[16];
        double local_70;
        RenderContext* local_68;
        unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>* local_60;
        float local_54;
        int local_50;
        int local_4c;
        int local_48;
        int local_44;
        RT7Core* local_40;
        char local_31;

        puVar6 = (undefined8*)param_1->GetCurrentState();
        local_80._8_8_ = *puVar6;
        UpdateGBufferRenderTargets(this);
        this_02 = (NXTRenderer*)dash3d::NXTRenderer::GetInstance();
        this_03 = (Material*)this_02->RenderThread_GetRenderCanvas();
        bVar5 = (bool)this_03->HasHighlighting();
        this_00 = &field_8;
        local_31 = bVar5;
        pRVar7 =
            (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)this_00);
        this_04 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pRVar7->GetForwardLightingRT();
        pRVar8 = (RenderTargets*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
        local_68 = param_1;
        ClearRenderTargetsIfNecessary(this, param_1, pRVar8, bVar5);
        pvVar9 = ((field_32 + *(long*)(field_0 + -24) + -8), (type*)param_1)->SSOBeginPtr();
        iVar14 = *(int*)pvVar9;
        local_50 = iVar14;
        piVar10 = (int*)((field_32 + *(long*)(field_0 + -24) + -8))->y();
        iVar1 = *piVar10;
        local_48 = iVar1;
        piVar10 = (int*)((field_32 + *(long*)(field_0 + -24) + -8))->second();
        iVar2 = *piVar10;
        local_4c = iVar2;
        piVar10 = (int*)((field_32 + *(long*)(field_0 + -24) + -8))->qw();
        local_44 = *piVar10;
        new (local_a0) dash3d::GridRect(iVar14, iVar1, iVar2, local_44);
        lVar11 = ((field_32 + *(long*)(field_0 + -24) + -32))->GetRenderStateNXT();
        new ((local_a0 + 16))
            rs2lib::worldmap::LocationData(*(int*)(lVar11 + 8), *(int*)(lVar11 + 12), *(int*)(lVar11 + 16));
        new (local_80) sidebars::SideBarData(*(int*)(lVar11 + 20), *(int*)(lVar11 + 24));
        dash3d::RSevenModelLitRenderer::CreateViewMatrix(&local_138, local_a0._16_8_, local_a0._24_4_, local_80._0_8_);
        local_60 = (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)this_00;
        pRVar7 = (RT7Core*)this_00->get();
        iVar14 = *(int*)(field_112 + *(long*)(field_0 + -24)) + 1;
        *(int*)(field_112 + *(long*)(field_0 + -24)) = iVar14;
        local_54 = (float)FrameTime::GetFrameDelta();
        new (&local_208) ViewTransforms();
        local_40 = (RT7Core*)(double)field_104;
        piVar10 = (int*)local_a0->second();
        local_70 = (double)*piVar10;
        piVar10 = (int*)local_a0->qw();
        local_f8->CreateProjectionMatrix((double)local_40, local_70 / (double)*piVar10);
        local_208.Set(&local_138, local_f8);
        local_40 = pRVar7;
        this_05 = (shared_ptr<render::RenderTargets>*)pRVar7->GetForwardLightingRT();
        pRVar8 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_05);
        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar8->GetColourTargetTextures();
        puVar6 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar12, 0);
        lVar11 = (*puVar6)->second();
        render::Viewport::Viewport(local_f8, local_50, *(int*)(lVar11 + 4) - (local_48 + local_44), local_4c, local_44,
                                   0.0, 1.0);
        lVar11 = ((field_32 + *(long*)(field_0 + -24) + -32))->GetRenderStateNXT();
        if ((*(char*)(lVar11 + 19677506) == '\0') || (local_31 != '\0')) {
            if (local_31 == '\0') {
                pRVar8 = (RenderTargets*)this_05->end();
                local_68->ClearRenderTargets(pRVar8, PTR_ZERO_100ee6708, 1);
                this_01 = local_60;
                pRVar7 = (RT7Core*)std::unique_ptr<jag::graphics::RT7Core,
                                                   std::default_delete<jag::graphics::RT7Core>>::operator->(local_60);
                pRVar7 = (RT7Core*)pRVar7->GetObjectHighlightPass();
                std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator*(
                    this_01);
                jag::graphics::ObjectHighlightPass::ClearRenderTargets(pRVar7);
            }
        } else {
            this_06 = (Scene*)std::unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>::operator->(
                (unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>*)&field_16);
            pRVar8 = (RenderTargets*)this_05->end();
            this_06->RenderThread_Render(pRVar8, iVar14, &local_208, local_f8);
        }
        pRVar8 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_05);
        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar8->GetColourTargetTextures();
        puVar6 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar12, 0);
        piVar10 = (int*)(*puVar6)->second();
        iVar14 = *piVar10;
        pRVar8 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_05);
        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar8->GetColourTargetTextures();
        puVar6 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar12, 0);
        lVar11 = (*puVar6)->second();
        new (local_b8) render::Viewport(0, 0, iVar14, *(int*)(lVar11 + 4), 0.0, 1.0);
        UpdateHorizonEffects(this);
        pRVar7 = local_40;
        this_07 = (PostProcessController*)local_40->GetPostProcessController();
        this_08 = (PostProcessManager*)pRVar7->GetVertexDataBuffer();
        ((field_32 + *(long*)(field_0 + -24) + -32))->GetRenderStateNXT();
        jag::graphics::PostProcessController::PushConfig((Config*)this_07);
        pRVar8 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_05);
        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar8->GetColourTargetTextures();
        puVar6 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar12, 0);
        pTVar3 = (Texture*)*puVar6;
        pTVar13 = (Texture*)pRVar7->GetForwardDepthTexture();
        uVar4 = local_80._8_8_;
        this_08->RenderEffects(local_68, local_80._8_8_, pTVar3, pTVar13, local_b8, &local_208, local_54, 2, false, 0);
        this_07->PopConfig();
        pRVar7 =
            (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                local_60);
        pRVar7->PerformComposition(uVar4, local_b8);
    }

    // 0x1001bea30, 1120 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_UI::DrawUI(render::RenderContext&)
    void OSRenderCore_RenderThread_UI::DrawUI(RenderContext* param_1) {
        uint uVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        undefined8 this_00;
        RenderContext* this_01;
        char cVar5;
        int iVar6;
        int iVar7;
        undefined4 uVar8;
        int iVar9;
        Texture* pTVar10;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_02;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* pcVar11;
        uint* puVar12;
        long lVar13;
        VertexDeclaration* pVVar14;
        VertexBuffer* pVVar15;
        vector* pvVar16;
        int* piVar17;
        Viewport* pVVar18;
        OutputMergerState* this_03;
        RenderTargets* pRVar19;
        RenderPipelineState* pRVar20;
        compressed_pair_imp<dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_04;
        Layout* this_05;
        long* plVar21;
        vector<eastl::pair<int, int>, eastl::allocator>* this_06;
        ImmediateRenderContext* pIVar22;
        DebugUIManager* this_07;
        ShaderProgram* pSVar23;
        type* this_08;
        DrawCallState* pDVar24;
        Singleton<render::BuiltinStates>* this_09;
        RenderContext* this_10;
        undefined1* puVar25;
        float fVar26;
        float fVar27;
        undefined1 auVar28[16];
        DrawCallState local_b8;
        undefined1 local_88[32];
        undefined1 local_68[32];
        RenderContext* local_48;
        uint local_40;
        uint local_3c;
        ShaderProgram* local_38;

        puVar25 = &field_1578944;
        pTVar10 = (Texture*)puVar25->GetRead();
        cVar5 = pTVar10->IsCreated();
        if (cVar5 != '\0') {
            this_02 =
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)((field_8 +
                                                                                                           16))
                    ->GetRead();
            cVar5 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_02);
            if (cVar5 == '\0') {
                local_88._24_8_ =
                    (RoundRobin<eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul, true, eastl::allocator>,
                                2ul>*)(field_8 + 16);
                new (&local_b8) render::DrawCallState();
                (*(code*)*field_0)(this, &local_40, &local_3c);
                pcVar11 =
                    (compressed_pair_imp<
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                        puVar25->GetRead();
                puVar12 = (uint*)eastl::compressed_pair_imp<
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar11);
                uVar1 = *puVar12;
                local_68._24_8_ = puVar25;
                pcVar11 =
                    (compressed_pair_imp<
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                        puVar25->GetRead();
                lVar13 = eastl::compressed_pair_imp<
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar11);
                uVar2 = *(uint*)(lVar13 + 4);
                iVar6 = 0;
                if (uVar2 < local_3c) {
                    iVar6 = field_1578928;
                }
                if (uVar1 < local_40) {
                    iVar6 = field_1578928;
                }
                if (iVar6 == 1) {
                    pSVar23 = (ShaderProgram*)&field_1577072;
                } else if (iVar6 == 2) {
                    pSVar23 = (ShaderProgram*)&field_1575216;
                } else {
                    pSVar23 = (ShaderProgram*)&field_1573360;
                }
                new (local_88) HashedString("uUITextureSize");
                iVar6 = pSVar23->GetConstIndex(local_88);
                fVar26 = (float)uVar1;
                fVar27 = (float)uVar2;
                local_38 = (ShaderProgram*)CONCAT44(local_38._4_4_, fVar26);
                local_48 = (RenderContext*)CONCAT44(local_48._4_4_, fVar27);
                pSVar23->SetShaderConstFloat2(iVar6, fVar26, fVar27);
                new (local_88) HashedString("uInvUITextureSize");
                iVar6 = pSVar23->GetConstIndex(local_88);
                pSVar23->SetShaderConstFloat2(iVar6, 1.0 / local_38._0_4_, 1.0 / local_48._0_4_);
                this_08 = (type*)&field_1573160;
                pVVar14 = (VertexDeclaration*)pSVar23->second();
                pVVar15 = (VertexBuffer*)(&field_1572984)->GetRead();
                this_08->SetVertexStreamData(pVVar14, pVVar15);
                local_b8.SetInputAssemblerState(this_08);
                local_48 = param_1;
                local_38 = pSVar23;
                iVar7 = param_1->GetBackBufferHeight();
                puVar25 = field_8;
                pvVar16 = puVar25->SSOBeginPtr(this_08);
                iVar6 = *(int*)pvVar16;
                piVar17 = (int*)puVar25->y();
                iVar9 = *piVar17;
                piVar17 = (int*)puVar25->qw();
                iVar3 = *piVar17;
                piVar17 = (int*)puVar25->second();
                iVar4 = *piVar17;
                piVar17 = (int*)puVar25->qw();
                new (local_88) render::Viewport(iVar6, iVar7 - (iVar9 + iVar3), iVar4, *piVar17, 0.0, 1.0);
                this_01 = local_48;
                pVVar18 = (Viewport*)local_b8.GetOutputMergerState();
                render::OutputMergerState::SetViewports(pVVar18, (uint)local_88);
                this_03 = (OutputMergerState*)local_b8.GetOutputMergerState();
                pRVar19 = (RenderTargets*)this_01->GetBackBuffer();
                this_03->SetRenderTargets(pRVar19);
                pDVar24 = &local_b8;
                pRVar20 = (RenderPipelineState*)pDVar24->GetRenderPipelineState();
                lVar13 = pDVar24->Instance();
                pRVar20->SetRasteriserState((RasteriserState*)(lVar13 + 1308));
                pDVar24 = &local_b8;
                this_04 = (compressed_pair_imp<dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                              pDVar24->GetRenderPipelineState();
                auVar28 = pDVar24->Instance();
                eastl::compressed_pair_imp<dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
                    this_04, (EntityHighlight**)(auVar28._0_8_ + 1676), auVar28._8_8_);
                pDVar24 = &local_b8;
                this_05 = (Layout*)pDVar24->GetRenderPipelineState();
                lVar13 = pDVar24->Instance();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::SetHeapSize(this_05, lVar13 + 1080);
                pRVar20 = (RenderPipelineState*)local_b8.GetRenderPipelineState();
                pRVar20->SetShaderProgram(local_38);
                this_09 = (Singleton<render::BuiltinStates>*)local_68._24_8_;
                plVar21 = (long*)local_68._24_8_->GetRead();
                lVar13 = this_09->Instance();
                (**(code**)(*plVar21 + 24))(plVar21, lVar13 + 80, 0);
                pRVar20 = (RenderPipelineState*)local_b8.GetRenderPipelineState();
                pTVar10 = (Texture*)local_68._24_8_->GetRead();
                new (local_68) HashedString("uUITexture");
                this_00 = local_88._24_8_;
                iVar6 = local_38->GetConstIndex(local_68);
                pRVar20->SetPSTextureSamplerPair(0, pTVar10, iVar6, 0, false);
                new (local_68) HashedString("uInvViewportSize");
                pSVar23 = local_38;
                iVar6 = local_38->GetConstIndex(local_68);
                pSVar23->SetShaderConstFloat2(iVar6, 1.0 / (float)local_40, 1.0 / (float)local_3c);
                this_06 = (vector<eastl::pair<int, int>, eastl::allocator>*)this_00->GetRead();
                uVar8 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_06);
                this_01->DrawPrimitives(&local_b8, 4, 0, uVar8);
                pIVar22 = (ImmediateRenderContext*)this_01->GetImmediateContext();
                iVar6 = pIVar22->GetBackBufferWidth();
                pIVar22 = (ImmediateRenderContext*)this_01->GetImmediateContext();
                iVar9 = pIVar22->GetBackBufferHeight();
                new (local_68) render::Viewport(0, 0, iVar6, iVar9, 0.0, 1.0);
                this_10 = this_01;
                this_01->SetViewports(local_68, 1);
                this_07 = (DebugUIManager*)this_10->Instance();
                this_07->Render(this_01, local_68._8_4_, local_68._12_4_);
                local_b8.~DrawCallState();
            }
        }
    }

} // namespace jag::oldscape

namespace jag::math {
    // 0x1001bfa80, 16 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<int>::Set(int, int)
    Vector2T<int>* Vector2T<int>::Set(int param_1, int param_2) {
        *(int*)this = param_1;
        *(int*)(this + 4) = param_2;
        return this;
    }

    // 0x1001bfa90, 16 bytes, inline, placed by debug map only (low confidence)
    // bool operator!=<int>(Vector2T<int> const&, Vector2T<int> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(Vector2T<int> const&,
   Vector2T<int> const&) */

    bool operator!=(Vector2T* param_1, Vector2T* param_2) {
        bool bVar1;

        bVar1 = operator==(param_1, param_2);
        return !bVar1;
    }

} // namespace jag::math
