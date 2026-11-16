// libs/graphics/runetek7/effects/skybox/SkyBox.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class SkyBox : public DebugPrimitiveRendererBasic // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~SkyBox();
        virtual void GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&);
        virtual GetTransformedTriangle(unsigned int, math::Vector4T<float> (&)[3]);
        GetMaterial() const;
        void SetClearColour(math::Vector4T<float> const&);
        void HasModel() const;
        int GetPendingSkyID() const;
        IsReady() const;
        ulonglong GetPendingSkyTransitionTime() const;
        shared_ptr GetCubeMap() const;
        ulong HasSkyTexture() const;
        HasVisibleSkyTexture() const;
        void SetExposure(float);
        shared_ptr GetRenderTargets();
        SkyBox();
        CreateRenderingResources();
        void DestroyRenderingResources();
        void MainLogic();
        void SetupRenderOrderForSkyModel(Array<eastl::pair<unsigned char, int>, eastl::allocator>&, Model&);
        void Clear();
        float GetTransitionProgress(unsigned long long, bool) const;
        void SetCubeMap(shared_ptr<render::TextureCube> const&, unsigned long long, unsigned long long);
        void SetModel(shared_ptr<Model> const&, unsigned long long, unsigned long long);
        void SetPendingSkyID(int, unsigned long long);
        GetDesiredClearColour(math::Vector4T<float> const&) const;
        void GatherDrawableElementsImpl(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&, bool);
        void GatherForwardDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&);
        void GatherSkyModel(RT7Core&, SceneViewData const&, EffectManager const&, shared_ptr<Model>&, bool);
        void UpdateSkyBatchForwardPassEffect(RenderPassEffect&, RT7Core&, EffectManager const&, GeometryBatchInstance*);
        void UpdateSkyBillboardBatchForwardPassEffect(RenderPassEffect&, RT7Core&, EffectManager const&,
                                                      BillboardBatchInstance*);
        void UpdateForwardPassEffect(DrawableSortKey&, RenderPassEffect&, RT7Core&, EffectManager const&, bool, bool);
        void UpdateRenderTargets(RT7Core&, unsigned int, unsigned int);
        GetClearColour() const;
        static /* 1 bytes */ m_ShowSkyBox; // = 1
        static /* 1 bytes */ m_UseModels;  // = 1

        // data members, from how the methods use this: 744 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        ulong field_16;     // offset 16
        ulonglong field_24; // offset 24
        ulonglong field_32; // offset 32
        char _unknown_40[536];
        shared_ptr m_cubeMap; // offset 576
        shared_ptr field_592; // offset 592
        shared_ptr field_608; // offset 608
        shared_ptr field_624; // offset 624
        char _unknown_640[48];
        shared_ptr m_renderTargets; // offset 688
        int m_pendingSkyID;         // offset 704
        char _unknown_708[4];
        ulonglong m_pendingSkyTransitionTime; // offset 712
        float m_exposure;                     // offset 720
        char _unknown_724[20];
    };

    class SkyBoxEntry {
    public:
        ~SkyBoxEntry();
        SkyBoxEntry(int, shared_ptr<SkyBox> const&);
        SkyBoxEntry* operator=(SkyBoxEntry&&);
        SkyBoxEntry(SkyBoxEntry&&);

        // data members, from how the methods use this: 32 bytes
        int field_0; // offset 0
        char _unknown_4[20];
        ulonglong field_24; // offset 24
    };

    // 0x1001c24a0, 32 bytes, inline, placed by class name and debug map
    // SkyBox::SetClearColour(math::Vector4T<float> const&)
    void SkyBox::SetClearColour(Vector4T* param_1) {
        math::Rect<float>::operator=((Rect<float>*)&field_736, (Rect*)param_1);
    }

    // 0x1003dd3a0, 32 bytes, inline, placed by class name
    // SkyBox::HasModel() const
    void SkyBox::HasModel() {
        operator!=((shared_ptr*)field_608, (_func_decltype_nullptr*)0);
    }

    // 0x10043f900, 112 bytes, inline, placed by class name
    // SkyBox::IsReady() const
    undefined4 SkyBox::IsReady() {
        bool bVar1;
        undefined3 extraout_var;

        if ((((GetPendingSkyID(this) == -1) && (bVar1 = m_cubeMap->operator_cast_to_bool(), !bVar1)) &&
             (bVar1 = field_592->operator_cast_to_bool(), !bVar1)) &&
            (bVar1 = field_608->operator_cast_to_bool(), !bVar1)) {
            bVar1 = field_624->operator_cast_to_bool();
            if (!bVar1) {
                return CONCAT31(extraout_var, 1);
            }
        }
        return HasSkyTexture(this);
    }

    // 0x100441a40, 16 bytes, inline, placed by class name
    // SkyBox::GetPendingSkyTransitionTime() const
    ulonglong SkyBox::GetPendingSkyTransitionTime() {
        return m_pendingSkyTransitionTime;
    }

    // 0x100441e50, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SkyBox::GetCubeMap() const
    /* ModelMaterial::GetRefractionParams() const */

    undefined8* ModelMaterial::GetRefractionParams() {
        return &m_refractionParams;
    }

    // 0x10044c720, 144 bytes, inline, placed by class name
    // SkyBox::HasSkyTexture() const
    ulong SkyBox::HasSkyTexture() {
        bool bVar1;
        uint uVar3;
        Model* pMVar4;
        undefined8 unaff_R14;
        ulong uVar5;

        bVar1 = m_cubeMap->operator_cast_to_bool();
        uVar5 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (!bVar1) {
            bVar1 = field_592->operator_cast_to_bool();
            if (!bVar1) {
                bVar1 = field_608->operator_cast_to_bool();
                if (bVar1) {
                    pMVar4 = (Model*)shared_ptr<Model>::operator->((shared_ptr<Model>*)field_608);
                    if (pMVar4->IsReadyToRender() != '\0')
                        goto LAB_10044c7a2;
                }
                bVar1 = field_624->operator_cast_to_bool();
                if (bVar1) {
                    pMVar4 = (Model*)shared_ptr<Model>::operator->((shared_ptr<Model>*)field_624);
                    uVar3 = pMVar4->IsReadyToRender();
                    uVar5 = (ulong)uVar3;
                } else {
                    uVar5 = 0;
                }
            }
        }
    LAB_10044c7a2:
        return uVar5 & 4294967295;
    }

    // 0x100465490, 32 bytes, inline, placed by class name
    // SkyBox::HasVisibleSkyTexture() const
    undefined8 SkyBox::HasVisibleSkyTexture() {
        if (m_ShowSkyBox == '\0') {
            return 0;
        }
        return HasSkyTexture(this);
    }

    // 0x100479810, 16 bytes, inline, placed by class name
    // SkyBox::SetExposure(float)
    void SkyBox::SetExposure(float param_1) {
        m_exposure = param_1;
    }

    // 0x10091cf00, 16 bytes, inline, placed by class name
    // SkyBox::GetClearColour() const
    undefined1* SkyBox::GetClearColour() {
        return &field_736;
    }

    // 0x10091d1d0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // SkyBoxEntry::SkyBoxEntry(int, shared_ptr<SkyBox> const&): jumps straight to the base-object constructor

    // 0x100927e80, 16 bytes, inline, placed by class name
    // SkyBox::SetupRenderOrderForSkyModel(Array<eastl::pair<unsigned char, int>, eastl::allocator>&, Model&)::$_4::operator()(eastl::pair<unsigned char, int> const&, eastl::pair<unsigned char, int> const&) const
    /* SkyBox::SetupRenderOrderForSkyModel(Array<eastl::pair<unsigned char, int>,
   eastl::allocator>&, Model&)::$_4::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<unsigned
   char, int> const&, eastl::pair<unsigned char, int> const&) const */

    undefined4 SkyBox::SetupRenderOrderForSkyModel(Array<eastl::pair<unsigned char, int>, eastl::allocator>&,
                                                   Model&)::$_4::operator()(pair* param_1, pair* param_2) {
        return CONCAT31((int3)((uint) * (int*)(param_1 + 4) >> 8), *(int*)(param_1 + 4) < *(int*)(param_2 + 4));
    }

} // namespace jag::graphics

namespace jag::oldscape {
    class Skybox {
    public:
        ShowSkybox() const;
        Skybox();
        void SetPixToolkit(graphics::NXTPixToolkit*);
        void DrawSkybox(bool);
        void RenderSkybox(unsigned long long);
        ulong IsNewColour(jag::math::Vector4T<float>, unsigned long long);
        IsEqual(jag::math::Vector4T<float>, jag::math::Vector4T<float>);
        void SetSkyboxColour(float, float, float, unsigned long long);
        void ResetColour();
        static /* 8 bytes */ m_verbose;

        // data members, from how the methods use this: 88 bytes
        bool field_0; // offset 0
        char _unknown_1[7];
        NXTPixToolkit* m_pPixToolkit; // offset 8
        char _unknown_16[72];
    };

    // 0x1000ccf40, 64 bytes, inline, placed by class name
    // Skybox::ResetColour()
    void Skybox::ResetColour() {
        Vector4T<float> local_28[16];

        jag::math::Vector4T<float>::Vector4T(local_28, 0.0);
        (&field_16, (Vector4T*)local_28, 0, 0)->SetValue();
    }

    // 0x1001c2500, 80 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_RSeven::ClearRenderTargetsIfNecessary(render::RenderContext&, render::RenderTargets const*, bool)
    void OSRenderCore_RenderThread_RSeven::ClearRenderTargetsIfNecessary(RenderContext* param_1, RenderTargets* param_2,
                                                                         bool param_3) {
        long lVar1;
        undefined7 in_register_00000009;

        if ((int)CONCAT71(in_register_00000009, param_3) == 0) {
            lVar1 = *(long*)(field_0 + -24);
            if ((*(uint*)(field_112 + lVar1 + 4) < *(uint*)(field_112 + lVar1)) &&
                (lVar1 = ((field_32 + lVar1 + -32))->GetRenderStateNXT(), *(char*)(lVar1 + 19677506) != '\0')) {
                return;
            }
            param_1->ClearRenderTargets(param_2, PTR_ZERO_100ee6708, 1);
        }
    }

    // 0x1001c2650, 368 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_JavaStyle::SetTriangleShaderUniforms(render::ShaderProgram&)
    void OSRenderCore_RenderThread_JavaStyle::SetTriangleShaderUniforms(ShaderProgram* param_1) {
        float fVar1;
        float fVar2;
        int iVar3;
        HashedString local_38;
        float local_28;
        float local_24;

        new (&local_38) HashedString("fogIntensity");
        iVar3 = param_1->GetConstIndex(&local_38);
        param_1->SetShaderConstFloat1(iVar3, *(float*)(field_16 + *(long*)(field_0 + -24) + 64));
        new (&local_38) HashedString("fogStartDistance");
        iVar3 = param_1->GetConstIndex(&local_38);
        param_1->SetShaderConstFloat1(iVar3, *(float*)(field_16 + *(long*)(field_0 + -24) + 68));
        new (&local_38) HashedString("skyboxColour");
        iVar3 = param_1->GetConstIndex(&local_38);
        param_1->SetShaderConstVector4(iVar3, (Vector4T*)(field_16 + *(long*)(field_0 + -24) + 48));
        fVar1 = field_14427072;
        fVar2 = field_14427076;
        local_28 = 1.0 / (fVar2 - fVar1);
        local_24 = (fVar1 + fVar2) * local_28;
        local_28 = fVar2 * -2.0 * fVar1 * local_28;
        new (&local_38) HashedString("depthScale");
        iVar3 = param_1->GetConstIndex(&local_38);
        param_1->SetShaderConstFloat1(iVar3, local_24);
        new (&local_38) HashedString("depthOffset");
        iVar3 = param_1->GetConstIndex(&local_38);
        param_1->SetShaderConstFloat1(iVar3, local_28);
    }

    // 0x1001c2840, 240 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_JavaStyle::SetTriangleShader(render::ShaderProgram&, render::DrawCallState&)
    void OSRenderCore_RenderThread_JavaStyle::SetTriangleShader(ShaderProgram* param_1, DrawCallState* param_2) {
        int iVar1;
        RenderPipelineState* pRVar2;
        HashedString local_50;
        Texture* local_38;

        pRVar2 = (RenderPipelineState*)param_2->GetRenderPipelineState();
        pRVar2->SetShaderProgram(param_1);
        param_2->GetRenderPipelineState();
        render::RenderPipelineState::ClearPSTextureSamplerPairs();
        pRVar2 = (RenderPipelineState*)param_2->GetRenderPipelineState();
        local_38 = (Texture*)&field_2128;
        new (&local_50) HashedString("uTextureAtlas");
        iVar1 = param_1->GetConstIndex(&local_50);
        pRVar2->SetPSTextureSamplerPair(0, local_38, iVar1, 0, false);
        pRVar2 = (RenderPipelineState*)param_2->GetRenderPipelineState();
        new (&local_50) HashedString("uColTab");
        iVar1 = param_1->GetConstIndex(&local_50);
        pRVar2->SetPSTextureSamplerPair(1, (Texture*)&field_1616, iVar1, (SamplerState*)0, false);
    }

} // namespace jag::oldscape

namespace jag::math {
    // 0x1001c2980, 80 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float> operator*<float>(double, Vector2T<float> const&)
    /* Vector2T<float> TEMPNAMEPLACEHOLDERVALUE(double, Vector2T<float>
   const&) */

    undefined8 operator*(double param_1, Vector2T* param_2) {
        undefined8 local_10;

        new (&local_10) Point<float>((float)((double)*(float*)param_2 * param_1),
                                     (float)((double)*(float*)(param_2 + 4) * param_1));
        return local_10;
    }

} // namespace jag::math
