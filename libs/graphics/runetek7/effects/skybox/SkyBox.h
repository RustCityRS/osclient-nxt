// libs/graphics/runetek7/effects/skybox/SkyBox.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class SkyBox : public DebugPrimitiveRendererBasic // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~SkyBox();
        virtual void GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                            const SceneViewData& sceneViewData, const EffectManager& effectManager);
        virtual void GetTransformedTriangle(unsigned int arg1, math::Vector4T<float> (&arg2)[3]);
        void GetMaterial() const;
        void SetClearColour(const math::Vector4T<float>& vector4);
        void HasModel() const;
        int GetPendingSkyID() const;
        bool IsReady() const;
        unsigned long long GetPendingSkyTransitionTime() const;
        shared_ptr GetCubeMap() const;
        unsigned long HasSkyTexture() const;
        bool HasVisibleSkyTexture() const;
        void SetExposure(float arg1);
        shared_ptr GetRenderTargets();
        SkyBox();
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void MainLogic();
        void SetupRenderOrderForSkyModel(Array<eastl::pair<unsigned char, int>>& pairs, Model& model);
        void Clear();
        float GetTransitionProgress(unsigned long long arg1, bool arg2) const;
        void SetCubeMap(const shared_ptr<render::TextureCube>& textureCube, unsigned long long arg2,
                        unsigned long long arg3);
        void SetModel(const shared_ptr<Model>& model, unsigned long long arg2, unsigned long long arg3);
        void SetPendingSkyID(int arg1, unsigned long long arg2);
        uint8_t[16] GetDesiredClearColour(const math::Vector4T<float>& vector4) const;
        void GatherDrawableElementsImpl(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                        const SceneViewData& sceneViewData, const EffectManager& effectManager,
                                        bool arg5);
        void GatherForwardDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                           const SceneViewData& sceneViewData, const EffectManager& effectManager);
        void GatherSkyModel(RT7Core& rt7Core, const SceneViewData& sceneViewData, const EffectManager& effectManager,
                            shared_ptr<Model>& model, bool arg5);
        void UpdateSkyBatchForwardPassEffect(RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                             const EffectManager& effectManager,
                                             GeometryBatchInstance* geometryBatchInstance);
        void UpdateSkyBillboardBatchForwardPassEffect(RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                                      const EffectManager& effectManager,
                                                      BillboardBatchInstance* billboardBatchInstance);
        void UpdateForwardPassEffect(DrawableSortKey& drawableSortKey, RenderPassEffect& renderPassEffect,
                                     RT7Core& rt7Core, const EffectManager& effectManager, bool arg5, bool arg6);
        void UpdateRenderTargets(RT7Core& rt7Core, unsigned int arg2, unsigned int arg3);
        uint8_t* GetClearColour() const;
        static bool m_ShowSkyBox; // = 1
        static bool m_UseModels;  // = 1

    private:
        unsigned int field_8;
        uint8_t _unknown_12[4];
        unsigned long field_16;
        unsigned long long field_24;
        unsigned long long field_32;
        uint8_t _unknown_40[536];
        shared_ptr m_cubeMap;
        shared_ptr field_592;
        shared_ptr field_608;
        shared_ptr field_624;
        uint8_t _unknown_640[48];
        shared_ptr m_renderTargets;
        int m_pendingSkyID;
        uint8_t _unknown_708[4];
        unsigned long long m_pendingSkyTransitionTime;
        float m_exposure;
        uint8_t _unknown_724[20];
    };

    class SkyBoxEntry {
    public:
        ~SkyBoxEntry();
        SkyBoxEntry(int arg1, const shared_ptr<SkyBox>& skyBox);
        SkyBoxEntry* operator=(SkyBoxEntry&& skyBoxEntry);
        SkyBoxEntry(SkyBoxEntry&& skyBoxEntry);

    private:
        int field_0;
        uint8_t _unknown_4[20];
        unsigned long long field_24;
    };

    // 0x1001c24a0
    void SkyBox::SetClearColour(const math::Vector4T<float>& vector4) {
        field_736 = vector4;
    }

    // 0x1003dd3a0
    void SkyBox::HasModel() const {
        *field_608 != nullptr;
    }

    // 0x10043f900
    bool SkyBox::IsReady() const {
        bool cVar1;

        if ((((GetPendingSkyID() == -1) && (cVar1 = m_cubeMap->operator_cast_to_bool(), !cVar1)) &&
             (cVar1 = field_592->operator_cast_to_bool(), !cVar1)) &&
            (cVar1 = field_608->operator_cast_to_bool(), !cVar1)) {
            cVar1 = field_624->operator_cast_to_bool();
            if (!cVar1) {
                return 1;
            }
        }
        return HasSkyTexture();
    }

    // 0x100441a40
    unsigned long long SkyBox::GetPendingSkyTransitionTime() const {
        return m_pendingSkyTransitionTime;
    }

    // 0x100441e50
    shared_ptr SkyBox::GetCubeMap() const {
        return &m_refractionParams;
    }

    // 0x10044c720
    unsigned long SkyBox::HasSkyTexture() const {
        unsigned int uVar2;
        Model* pMVar3;
        uint64_t unaff_R14;

        bool cVar1 = m_cubeMap->operator_cast_to_bool();
        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (!cVar1) {
            cVar1 = field_592->operator_cast_to_bool();
            if (!cVar1) {
                cVar1 = field_608->operator_cast_to_bool();
                if (cVar1) {
                    pMVar3 = (Model*)(*field_608).operator->();
                    cVar1 = pMVar3->IsReadyToRender();
                    if (cVar1)
                        goto LAB_10044c7a2;
                }
                cVar1 = field_624->operator_cast_to_bool();
                if (!cVar1) {
                    uVar4 = 0;
                } else {
                    pMVar3 = (Model*)(*field_624).operator->();
                    uVar2 = pMVar3->IsReadyToRender();
                    uVar4 = (unsigned long)uVar2;
                }
            }
        }
    LAB_10044c7a2:
        return uVar4 & 4294967295;
    }

    // 0x100465490
    bool SkyBox::HasVisibleSkyTexture() const {
        if (m_ShowSkyBox == '\0') {
            return 0;
        }
        return HasSkyTexture();
    }

    // 0x100479810
    void SkyBox::SetExposure(float arg1) {
        m_exposure = arg1;
    }

    // 0x10091cf00
    uint8_t* SkyBox::GetClearColour() const {
        return &field_736;
    }

    // 0x100927e80
    uint32_t SkyBox::SetupRenderOrderForSkyModel(Array<eastl::pair<unsigned char, int>>&, Model&)::$_4::operator()(
        const eastl::pair<unsigned char, int>& arg1, const eastl::pair<unsigned char, int>& arg2) const {
        return *(int*)(this + 4) < *(int*)(arg1 + 4);
    }

} // namespace jag::graphics

namespace jag::oldscape {
    class Skybox {
    public:
        uint8_t ShowSkybox() const;
        Skybox();
        void SetPixToolkit(graphics::NXTPixToolkit* nxtPixToolkit);
        void DrawSkybox(bool arg1);
        void RenderSkybox(unsigned long long arg1);
        unsigned long IsNewColour(jag::math::Vector4T<float> vector4, unsigned long long arg2);
        bool IsEqual(jag::math::Vector4T<float> vector41, jag::math::Vector4T<float> vector42);
        void SetSkyboxColour(float arg1, float arg2, float arg3, unsigned long long arg4);
        void ResetColour();
        static int64_t m_verbose;

    private:
        bool field_0;
        uint8_t _unknown_1[7];
        NXTPixToolkit* m_pPixToolkit;
        uint8_t _unknown_16[72];
    };

    // 0x1000ccf40
    void Skybox::ResetColour() {

        Vector4T<float> local_28(0.0);
        field_16.SetValue(local_28, 0, 0);
    }

    // 0x1001c2500
    void OSRenderCore_RenderThread_RSeven::ClearRenderTargetsIfNecessary(render::RenderContext& renderContext,
                                                                         const render::RenderTargets* renderTargets,
                                                                         bool arg3) {
        long lVar1;
        uint64_t in_register_00000009;

        if ((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) == 0) {
            lVar1 = *(long*)((long)field_0 - 24);
            if ((*(unsigned int*)(field_112 + lVar1 + 4) < *(unsigned int*)(field_112 + lVar1)) &&
                (lVar1 = ((field_32 + lVar1 - 32))->GetRenderStateNXT(), *(char*)(lVar1 + 19677506) != '\0')) {
                return;
            }
            renderContext.ClearRenderTargets(renderTargets, PTR_ZERO_100ee6708, 1);
        }
    }

    // 0x1001c2650
    void OSRenderCore_RenderThread_JavaStyle::SetTriangleShaderUniforms(render::ShaderProgram& shaderProgram) {
        HashedString local_38("fogIntensity");
        int iVar3 = shaderProgram.GetConstIndex(local_38);
        shaderProgram.SetShaderConstFloat1(iVar3, *(float*)(field_16 + *(long*)((long)field_0 - 24) + 64));
        local_38 = HashedString("fogStartDistance");
        iVar3 = shaderProgram.GetConstIndex(local_38);
        shaderProgram.SetShaderConstFloat1(iVar3, *(float*)(field_16 + *(long*)((long)field_0 - 24) + 68));
        local_38 = HashedString("skyboxColour");
        iVar3 = shaderProgram.GetConstIndex(local_38);
        shaderProgram.SetShaderConstVector4(iVar3, (Vector4T<float>*)(field_16 + *(long*)((long)field_0 - 24) + 48));
        float fVar1 = field_14427072;
        float fVar2 = field_14427076;
        float local_28 = 1.0 / (fVar2 - fVar1);
        float local_24 = (fVar1 + fVar2) * local_28;
        local_28 = fVar2 * -2.0 * fVar1 * local_28;
        local_38 = HashedString("depthScale");
        iVar3 = shaderProgram.GetConstIndex(local_38);
        shaderProgram.SetShaderConstFloat1(iVar3, local_24);
        local_38 = HashedString("depthOffset");
        iVar3 = shaderProgram.GetConstIndex(local_38);
        shaderProgram.SetShaderConstFloat1(iVar3, local_28);
    }

    // 0x1001c2840
    void OSRenderCore_RenderThread_JavaStyle::SetTriangleShader(render::ShaderProgram& shaderProgram,
                                                                render::DrawCallState& drawCallState) {
        auto pRVar2 = drawCallState.GetRenderPipelineState();
        pRVar2->SetShaderProgram(shaderProgram);
        pRVar2 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
        pRVar2->ClearPSTextureSamplerPairs();
        pRVar2 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
        Texture* local_38 = (Texture*)&field_2128;
        HashedString local_50("uTextureAtlas");
        int iVar1 = shaderProgram.GetConstIndex(local_50);
        pRVar2->SetPSTextureSamplerPair(0, local_38, iVar1, nullptr, false);
        pRVar2 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
        local_50 = HashedString("uColTab");
        iVar1 = shaderProgram.GetConstIndex(local_50);
        pRVar2->SetPSTextureSamplerPair(1, &field_1616, iVar1, nullptr, false);
    }

} // namespace jag::oldscape

namespace jag::math {
    // 0x1001c2980
    Vector2T<float> operator* <float>(double arg1, const Vector2T<float>& vector2) {

        return local_10((float)((double)*(float*)vector2 * arg1), (float)((double)*(float*)(vector2 + 4) * arg1));
        return local_10;
    }

} // namespace jag::math
