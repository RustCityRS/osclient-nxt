// libs/graphics/runetek7/effects/ShaderEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::graphics {
    class ShaderEffect : public Drawable // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ShaderEffect();
        virtual uint8_t OnQualityChange(GraphicsQuality arg1);
        virtual void __pure_slot_7() = 0;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        GraphicsQuality GetQuality() const;
        uint8_t SetQuality(GraphicsQuality graphicsQuality);
        ShaderEffect(RT7Core& rt7Core);

    private:
        RT7Core* field_16;
    };

    // 0x100024170: ShaderEffect::GetQuality() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x10002a770: ShaderEffect::~ShaderEffect() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10002d860: ShaderEffect::OnQualityChange(GraphicsQuality) has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x1001be5e0
    uint8_t ShaderEffect::SetQuality(GraphicsQuality graphicsQuality) {
        uint8_t uVar1 = 1;
        if (m_quality != graphicsQuality) {
            m_quality = graphicsQuality;
            uVar1 = OnQualityChange();
        }
        return uVar1;
    }

    // 0x10092cf20
    ShaderEffect::ShaderEffect(RT7Core& rt7Core) : Effect(), m_quality(4294967295), field_16(rt7Core) {}

    // 0x100937dc0
    void ShaderEffect::CreateRenderingResources() {
        unsigned int uVar1 = GetPos();
        OnQualityChange((unsigned long)uVar1);
    }

    // 0x100937de0
    void ShaderEffect::DestroyRenderingResources() {
        OnQualityChange(4294967295);
    }

    // 0x100c92b50: ShaderEffect::~ShaderEffect() has the same machine code as InlineFatalBreak()

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x1001be600
    void OSRenderCore_RenderThread_RSeven::PaintRSeven(render::RenderContext& renderContext) {
        unique_ptr<jag::graphics::RT7Core>* this_01;
        Scene* this_06;
        uint8_t local_b8[24];
        uint8_t local_a0[16];
        Vector2T<int>* local_80;

        auto puVar1 = renderContext.GetCurrentState();
        RenderTargets* local_78 = (RenderTargets*)*puVar1;
        UpdateGBufferRenderTargets();
        auto this_02 = dash3d::NXTRenderer::GetInstance();
        auto this_03 = this_02->RenderThread_GetRenderCanvas();
        bool arg3_00 = (bool)this_03->HasHighlighting();
        uint8_t* this_00 = &field_8;
        char local_31 = arg3_00;
        RT7Core* pRVar2 = (RT7Core*)(*this_00).operator->();
        auto this_04 = pRVar2->GetForwardLightingRT();
        auto pRVar3 = this_04->end();
        ClearRenderTargetsIfNecessary(renderContext, pRVar3, arg3_00);
        int* piVar4 = (int*)((Layout*)(field_32 + *(long*)((long)field_0 - 24) - 8))->SSOBeginPtr();
        int iVar7 = *piVar4;
        int local_50 = iVar7;
        piVar4 = (int*)((Vector2T<int>*)(field_32 + *(long*)((long)field_0 - 24) - 8))->y();
        int arg2 = *piVar4;
        int local_48 = arg2;
        piVar4 = (int*)((compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator,
                                             0>*)(field_32 + *(long*)((long)field_0 - 24) - 8))
                     ->second();
        int arg3 = *piVar4;
        int local_4c = arg3;
        piVar4 = (int*)((QuaternionT<float>*)(field_32 + *(long*)((long)field_0 - 24) - 8))->qw();
        int local_44 = *piVar4;
        new (local_a0) dash3d::GridRect(iVar7, arg2, arg3, local_44);
        long lVar5 =
            ((OSRenderCore_RenderThread_Common*)(field_32 + *(long*)((long)field_0 - 24) - 32))->GetRenderStateNXT();
        LocationData local_90(*(int*)(lVar5 + 8), *(unsigned int*)(lVar5 + 12), *(unsigned int*)(lVar5 + 16));
        new (&local_80) sidebars::SideBarData(*(int*)(lVar5 + 20), *(int*)(lVar5 + 24));
        auto local_138 =
            local_90._0_8_->CreateViewMatrix((Vector3T<int>*)(unsigned long)(unsigned int)local_90.field_8, local_80);
        unique_ptr<jag::graphics::RT7Core>* local_60 = (unique_ptr<jag::graphics::RT7Core>*)this_00;
        pRVar2 = (RT7Core*)this_00->get();
        lVar5 = *(long*)((long)field_0 - 24);
        iVar7 = *(int*)(field_112 + lVar5) + 1;
        *(int*)(field_112 + lVar5) = iVar7;
        float local_54 = (float)FrameTime::GetFrameDelta();
        ViewTransforms local_208;
        RT7Core* local_40 = (RT7Core*)(double)field_104;
        piVar4 = (int*)local_a0->second();
        double local_70 = (double)*piVar4;
        piVar4 = (int*)local_a0->qw();
        local_f8.CreateProjectionMatrix((double)local_40, local_70 / (double)*piVar4);
        local_208.Set(local_138, local_f8);
        local_40 = pRVar2;
        auto this_05 = pRVar2->GetForwardLightingRT();
        pRVar3 = (RenderTargets*)(*this_05).operator->();
        auto pvVar6 = pRVar3->GetColourTargetTextures();
        puVar1 = (uint64_t*)(*pvVar6)[0];
        lVar5 = (*puVar1)->second();
        Viewport local_f8(local_50, *(int*)(lVar5 + 4) - (local_48 + local_44), local_4c, local_44, 0.0, 1.0);
        lVar5 =
            ((OSRenderCore_RenderThread_Common*)(field_32 + *(long*)((long)field_0 - 24) - 32))->GetRenderStateNXT();
        if ((*(char*)(lVar5 + 19677506) == '\0') || (local_31 != '\0')) {
            if (local_31 == '\0') {
                pRVar3 = (RenderTargets*)this_05->end();
                renderContext.ClearRenderTargets(pRVar3, PTR_ZERO_100ee6708, 1);
                this_01 = local_60;
                pRVar2 = (RT7Core*)(*local_60).operator->();
                pRVar2 = (RT7Core*)pRVar2->GetObjectHighlightPass();
                **this_01;
                jag::graphics::ObjectHighlightPass::ClearRenderTargets(*pRVar2);
            }
        } else {
            this_06 = (Scene*)field_16.operator->();
            pRVar3 = (RenderTargets*)this_05->end();
            this_06->RenderThread_Render(pRVar3, iVar7, local_208, local_f8);
        }
        pRVar3 = (RenderTargets*)(*this_05).operator->();
        pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                     pRVar3->GetColourTargetTextures();
        puVar1 = (uint64_t*)(*pvVar6)[0];
        piVar4 = (int*)(*puVar1)->second();
        iVar7 = *piVar4;
        pRVar3 = (RenderTargets*)(*this_05).operator->();
        pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                     pRVar3->GetColourTargetTextures();
        puVar1 = (uint64_t*)(*pvVar6)[0];
        lVar5 = (*puVar1)->second();
        new (local_b8) render::Viewport(0, 0, iVar7, *(int*)(lVar5 + 4), 0.0, 1.0);
        UpdateHorizonEffects();
        pRVar2 = local_40;
        auto this_07 = local_40->GetPostProcessController();
        auto this_08 = pRVar2->GetVertexDataBuffer();
        lVar5 =
            ((OSRenderCore_RenderThread_Common*)(field_32 + *(long*)((long)field_0 - 24) - 32))->GetRenderStateNXT();
        this_07->PushConfig(*((lVar5 + 19677832)));
        pRVar3 = (RenderTargets*)(*this_05).operator->();
        pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                     pRVar3->GetColourTargetTextures();
        puVar1 = (uint64_t*)(*pvVar6)[0];
        Texture* texture1 = (Texture*)*puVar1;
        auto texture2 = pRVar2->GetForwardDepthTexture();
        pRVar3 = local_78;
        this_08->RenderEffects(renderContext, local_78, texture1, texture2, *local_b8, local_208, local_54, 2, false,
                               nullptr);
        this_07->PopConfig();
        pRVar2 = (RT7Core*)(*local_60).operator->();
        pRVar2->PerformComposition(pRVar3, *local_b8);
    }

    // 0x1001bea30
    void OSRenderCore_RenderThread_UI::DrawUI(render::RenderContext& renderContext) {
        unsigned int uVar1;
        unsigned int uVar2;
        int iVar3;
        int arg3;
        uint64_t this_00;
        RenderContext* this_01;
        ScaledUIQuality SVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* pcVar10;
        unsigned int* puVar11;
        long lVar12;
        VertexDeclaration* vertexDeclaration;
        VertexBuffer* vertexBuffer;
        int* piVar13;
        OutputMergerState* pOVar14;
        RenderPipelineState* pRVar15;
        compressed_pair_imp<dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_03;
        Layout* this_04;
        long* plVar16;
        ImmediateRenderContext* pIVar17;
        ShaderProgram* pSVar18;
        DrawCallState* pDVar19;
        Singleton<render::BuiltinStates>* this_07;
        RenderContext* this_08;
        float arg2;
        float arg3_00;
        DrawCallState local_b8;
        uint8_t local_88[32];
        uint8_t local_68[32];
        RenderContext* local_48;
        unsigned int local_40;
        unsigned int local_3c;
        ShaderProgram* local_38;

        uint8_t* puVar20 = &field_1578944;
        auto pTVar9 = puVar20->GetRead();
        if (pTVar9->IsCreated()) {
            if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)((field_8 + 16))->GetRead())
                      ->empty())) {
                local_88._24_8_ =
                    (RoundRobin<eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul>, 2ul>*)(field_8 + 16);
                local_b8 = render::DrawCallState();
                (**(void (**)(...))field_0)(this, &local_40, &local_3c);
                pcVar10 = (compressed_pair_imp<
                           eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                           eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)puVar20->GetRead();
                puVar11 = (unsigned int*)pcVar10->second();
                uVar1 = *puVar11;
                local_68._24_8_ = puVar20;
                pcVar10 = (compressed_pair_imp<
                           eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                           eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)puVar20->GetRead();
                lVar12 = pcVar10->second();
                uVar2 = *(unsigned int*)(lVar12 + 4);
                SVar5 = 0;
                if (uVar2 < local_3c) {
                    SVar5 = m_scaledUIQuality;
                }
                if (uVar1 < local_40) {
                    SVar5 = m_scaledUIQuality;
                }
                if (SVar5 == 1) {
                    pSVar18 = (ShaderProgram*)&field_1577072;
                } else if (SVar5 == 2) {
                    pSVar18 = (ShaderProgram*)&field_1575216;
                } else {
                    pSVar18 = (ShaderProgram*)&field_1573360;
                }
                new (local_88) HashedString("uUITextureSize");
                iVar6 = pSVar18->GetConstIndex(*local_88);
                arg2 = (float)uVar1;
                arg3_00 = (float)uVar2;
                local_38 = (ShaderProgram*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)arg2);
                local_48 = (RenderContext*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)arg3_00);
                pSVar18->SetShaderConstFloat2(iVar6, arg2, arg3_00);
                new (local_88) HashedString("uInvUITextureSize");
                iVar6 = pSVar18->GetConstIndex(*local_88);
                pSVar18->SetShaderConstFloat2(iVar6, 1.0 / local_38._0_4_, 1.0 / local_48._0_4_);
                vertexDeclaration = (VertexDeclaration*)pSVar18->second();
                vertexBuffer = (VertexBuffer*)field_1572984.GetRead();
                field_1573160.SetVertexStreamData(vertexDeclaration, vertexBuffer);
                local_b8.SetInputAssemblerState(&field_1573160);
                local_48 = renderContext;
                local_38 = pSVar18;
                iVar7 = renderContext.GetBackBufferHeight();
                puVar20 = field_8;
                piVar13 = (int*)puVar20->SSOBeginPtr();
                iVar6 = *piVar13;
                piVar13 = (int*)puVar20->y();
                iVar8 = *piVar13;
                piVar13 = (int*)puVar20->qw();
                iVar3 = *piVar13;
                piVar13 = (int*)puVar20->second();
                arg3 = *piVar13;
                piVar13 = (int*)puVar20->qw();
                new (local_88) render::Viewport(iVar6, iVar7 - (iVar8 + iVar3), arg3, *piVar13, 0.0, 1.0);
                this_01 = local_48;
                pOVar14 = local_b8.GetOutputMergerState();
                pOVar14->SetViewports(local_88, 1);
                pOVar14 = local_b8.GetOutputMergerState();
                pOVar14->SetRenderTargets(this_01->GetBackBuffer());
                pDVar19 = &local_b8;
                pRVar15 = (RenderPipelineState*)pDVar19->GetRenderPipelineState();
                lVar12 = pDVar19->Instance();
                pRVar15->SetRasteriserState((lVar12 + 1308));
                pDVar19 = &local_b8;
                this_03 = (compressed_pair_imp<dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                              pDVar19->GetRenderPipelineState();
                lVar12 = pDVar19->Instance();
                eastl::compressed_pair_imp<dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
                    this_03, (PlayerDataComparator<social::FriendChatUser>*)(lVar12 + 1676));
                pDVar19 = &local_b8;
                this_04 = (Layout*)pDVar19->GetRenderPipelineState();
                lVar12 = pDVar19->Instance();
                this_04->SetHeapSize((lVar12 + 1080));
                pRVar15 = (RenderPipelineState*)local_b8.GetRenderPipelineState();
                pRVar15->SetShaderProgram(local_38);
                this_07 = (Singleton<render::BuiltinStates>*)local_68._24_8_;
                plVar16 = (long*)local_68._24_8_->GetRead();
                lVar12 = this_07->Instance();
                (**(void (**)(...))(*plVar16 + 24))(plVar16, lVar12 + 80, 0);
                pRVar15 = (RenderPipelineState*)local_b8.GetRenderPipelineState();
                pTVar9 = (Texture*)local_68._24_8_->GetRead();
                new (local_68) HashedString("uUITexture");
                this_00 = local_88._24_8_;
                iVar6 = local_38->GetConstIndex(*local_68);
                pRVar15->SetPSTextureSamplerPair(0, pTVar9, iVar6, nullptr, false);
                new (local_68) HashedString("uInvViewportSize");
                pSVar18 = local_38;
                iVar6 = local_38->GetConstIndex(*local_68);
                pSVar18->SetShaderConstFloat2(iVar6, 1.0 / (float)local_40, 1.0 / (float)local_3c);
                iVar6 = ((vector<eastl::pair<int, int>>*)this_00->GetRead())->size();
                this_01->DrawPrimitives(local_b8, 4, 0, iVar6);
                pIVar17 = this_01->GetImmediateContext();
                iVar6 = pIVar17->GetBackBufferWidth();
                pIVar17 = this_01->GetImmediateContext();
                iVar8 = pIVar17->GetBackBufferHeight();
                new (local_68) render::Viewport(0, 0, iVar6, iVar8, 0.0, 1.0);
                this_08 = this_01;
                this_01->SetViewports(local_68, 1);
                ((DebugUIManager*)this_08->Instance())->Render(this_01, local_68._8_4_, local_68._12_4_);
            }
        }
    }

} // namespace jag::oldscape

namespace jag::math {
    // 0x1001bfa80
    auto Vector2T<int>::Set(int arg1, int arg2) {
        auto result;
        result = arg1;
        *(int*)&result.field_4 = arg2;
        return result;
    }

    // 0x1001bfa90
    bool operator!= <int>(const Vector2T<int>& vector21, const Vector2T<int>& vector22) {
        bool bVar1 = vector21 == vector22;
        return !bVar1;
    }

} // namespace jag::math
