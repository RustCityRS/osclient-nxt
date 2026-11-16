// libs/graphics/runetek7/renderer/renderpasses/GeometryPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class GeometryPass {
    public:
        // virtual methods in vtable order
        virtual ~GeometryPass();
        virtual BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&,
                          DrawableQueue const&);
        virtual void EndPass(render::DrawCallState&, render::RenderContext&, EffectManager&, DrawableQueue const&);
        virtual void Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                            DrawableQueue&);
        virtual void RenderDebug(EffectManager&, DrawableQueue&);
        virtual void RegisterTweakVarsOcclusion(tweak::Container&);
        virtual GeometryPass* GetOcclusionRTName();
        void SetGBufferRT(shared_ptr<render::RenderTargets> const&);
        GeometryPass(render::RenderTargetsManager*, ThreadPool*);
        static /* 1 bytes */ m_showGBuffer;
        static /* 1 bytes */ m_showGBufferDepth;

        // data members, from how the methods use this: 816 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        OcclusionManager field_16; // offset 16
        char _unknown_729[47];
        bool field_776;       // offset 776
        undefined1 field_777; // offset 777
        undefined1 field_778; // offset 778
        char _unknown_779[1];
        undefined4 field_780; // offset 780
        undefined8 field_784; // offset 784
        uint field_792;       // offset 792
        char _unknown_796[4];
        shared_ptr field_800; // offset 800
    };

    // 0x1001d01b0, 32 bytes, inline, placed by class name and debug map
    // GeometryPass::SetGBufferRT(shared_ptr<render::RenderTargets> const&)
    void GeometryPass::SetGBufferRT(shared_ptr* param_1) {
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_800, param_1);
    }

    // 0x1007bc010, 64 bytes, inline, placed by class name
    // GeometryPass::GetOcclusionRTName()
    GeometryPass* GeometryPass::GetOcclusionRTName() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("GeometryOcclusion", local_20);
        return this;
    }

    // 0x1007bf4f0, 80 bytes, inline, placed by class name
    // GeometryPass::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&)::$_1::operator()(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&) const
    /* GeometryPass::Render(RT7Core&, render::DrawCallState const&,
   EffectManager&, SceneViewData const&,
   DrawableQueue&)::$_1::TEMPNAMEPLACEHOLDERVALUE(Drawable*,
   std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)
   const */

    ulong GeometryPass::Render(RT7Core&, render::DrawCallState_const&, EffectManager&, SceneViewData_const&,
                               DrawableQueue&)::$_1::operator()(Drawable* param_1, unique_ptr* param_2) {
        undefined* puVar1;
        long lVar2;
        _func_TEMPNAMEPLACEHOLDERVALUE_Drawable_ptr_unique_ptr_ptr* p_Var3;
        ulong uVar4;
        undefined* local_28;
        undefined8 local_20;

        puVar1 = param_1->field_0;
        lVar2 = std::unique_ptr<DrawableElement, DrawableElementDeleter>::operator*(
            (unique_ptr<DrawableElement, DrawableElementDeleter>*)param_2);
        local_20 = *(undefined8*)&param_1->field_8;
        uVar4 = CONCAT71((int7)((ulong)local_20 >> 8), 1);
        if ((*(byte*)(lVar2 + 96) & 4) == 0) {
            local_28 = puVar1;
            p_Var3 = const ::{
                lambda(math::OBB_const&, SceneViewData_const&) #1
            }
            ::operator()((_lambda_jag__math__OBB_const__jag__graphics__SceneViewData_const___1_*)&local_28,
                         (OBB*)(lVar2 + 16), (SceneViewData*)param_1[1].field_0);
            uVar4 = (ulong)p_Var3 & 4294967295;
        }
        return uVar4 & 4294967295;
    }

    // 0x1007bf550, 48 bytes, inline, placed by class name
    // GeometryPass::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&)::$_1::operator()(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&) const::{lambda(math::OBB const&, SceneViewData const&)#1}::operator()(math::OBB const&, SceneViewData const&) const
    /* GeometryPass::Render(RT7Core&, render::DrawCallState const&,
   EffectManager&, SceneViewData const&,
   DrawableQueue&)::$_1::TEMPNAMEPLACEHOLDERVALUE(Drawable*,
   std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)
   const::{lambda(math::OBB const&, SceneViewData
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(math::OBB const&, SceneViewData const&)
   const */

    _func_TEMPNAMEPLACEHOLDERVALUE_Drawable_ptr_unique_ptr_ptr* const ::{
        lambda(math::OBB_const&, SceneViewData_const&) #1
    }
    ::operator()(OBB * param_1, SceneViewData * param_2) {
        _func_TEMPNAMEPLACEHOLDERVALUE_Drawable_ptr_unique_ptr_ptr* p_Var1;

        p_Var1 = (_func_TEMPNAMEPLACEHOLDERVALUE_Drawable_ptr_unique_ptr_ptr*)((*(long*)this + 16))
                     ->OBBVisible(param_1, param_2, (SceneViewData*)**(undefined8**)(this + 8), 1.0);
        return p_Var1;
    }

} // namespace jag::graphics
