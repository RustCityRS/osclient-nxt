// libs/graphics/runetek7/renderer/renderpasses/GeometryPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class GeometryPass {
    public:
        // virtual methods in vtable order
        virtual ~GeometryPass();
        virtual char BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                               EffectManager& effectManager, const SceneViewData& sceneViewData,
                               const DrawableQueue& drawableQueue);
        virtual void EndPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                             EffectManager& effectManager, const DrawableQueue& drawableQueue);
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
                            const SceneViewData& sceneViewData, DrawableQueue& drawableQueue);
        virtual void RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue);
        virtual void RegisterTweakVarsOcclusion(tweak::Container& container);
        virtual GeometryPass* GetOcclusionRTName();
        void SetGBufferRT(const shared_ptr<render::RenderTargets>& renderTargets);
        GeometryPass(render::RenderTargetsManager* renderTargetsManager, ThreadPool* threadPool);
        static bool m_showGBuffer;
        static bool m_showGBufferDepth;

    private:
        EnumOptionToggle field_8;
        uint8_t _unknown_12[4];
        OcclusionManager field_16;
        uint8_t _unknown_729[47];
        bool field_776;
        bool field_777;
        uint8_t field_778;
        uint8_t _unknown_779[1];
        uint32_t field_780;
        RenderTargetsManager* field_784;
        unsigned int field_792;
        uint8_t _unknown_796[4];
        shared_ptr field_800;
    };

    // 0x1001d01b0
    void GeometryPass::SetGBufferRT(const shared_ptr<render::RenderTargets>& renderTargets) {
        *field_800 = renderTargets;
    }

    // 0x1007bc010
    GeometryPass* GeometryPass::GetOcclusionRTName() {

        new (this) eastl::string("GeometryOcclusion");
        return this;
    }

    // 0x1007bf4f0
    unsigned long GeometryPass::Render(
        RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
        DrawableQueue&)::$_1::operator()(Drawable* drawable,
                                         const std::unique_ptr<DrawableElement, DrawableElementDeleter>&
                                             drawableElement) const {
        unsigned int uVar2;
        uint64_t local_28;

        uint64_t uVar1 = field_0;
        long lVar3 = **drawable;
        uint64_t local_20 = field_8;
        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)local_20 >> 8)) << 8) | (uint8_t)1);
        if ((*(uint8_t*)(lVar3 + 96) & 4) == 0) {
            local_28 = uVar1;
            uVar2 = const ::{
                lambda(math::OBB const&, SceneViewData const&) #1
            }
            ::operator()((_lambda_jag__math__OBB_const__jag__graphics__SceneViewData_const___1_*)&local_28,
                         (OBB*)(lVar3 + 16), field_16);
            uVar4 = (unsigned long)uVar2;
        }
        return uVar4 & 4294967295;
    }

    // 0x1007bf550
    void GeometryPass::Render(
        RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
        DrawableQueue&)::$_1::operator()(Drawable*,
                                         std::unique_ptr<DrawableElement, DrawableElementDeleter> const&) const ::{
        lambda(math::OBB const&, SceneViewData const&) #1
    }
    ::operator()(const math::OBB & obb, const SceneViewData & sceneViewData) const {
        ((OcclusionManager*)(*(long*)this + 16))
            ->OBBVisible(obb, sceneViewData, (SceneViewData*)**(uint64_t**)(this + 8), 1.0);
    }

} // namespace jag::graphics
