// libs/graphics/runetek7/renderer/renderpasses/CausticsPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class CausticsPass {
    public:
        // virtual methods in vtable order
        virtual ~CausticsPass();
        virtual BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&,
                          DrawableQueue const&);
        virtual void Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                            DrawableQueue&);
        virtual void RenderDebug(EffectManager&, DrawableQueue&);
        virtual CausticsPass* GetOcclusionRTName();
        CausticsPass(render::RenderTargetsManager*, ThreadPool*);
        static float /* 4 bytes */ m_cameraHeight; // = 10000.0f
        static float /* 4 bytes */ m_cameraOffset; // = 7500.0f
        static /* 1 bytes */ m_showCausticsMap;

        // data members, from how the methods use this: 796 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        OcclusionManager field_16; // offset 16
        char _unknown_729[47];
        undefined2 field_776; // offset 776
        undefined1 field_778; // offset 778
        char _unknown_779[1];
        undefined4 field_780; // offset 780
        undefined8 field_784; // offset 784
        undefined4 field_792; // offset 792
    };

    // 0x1007bbf40, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // CausticsPass::~CausticsPass()
    void CausticsPass::~CausticsPass() {
        ~CausticsPass(this);
        operator_delete(this);
    }

    // 0x1007bbf60, 64 bytes, inline, placed by class name and debug map
    // CausticsPass::GetOcclusionRTName()
    CausticsPass* CausticsPass::GetOcclusionRTName() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x10097eaa0, 16 bytes, complete-object constructor, inline, placed by class name
    // CausticsPass::CausticsPass(render::RenderTargetsManager*, ThreadPool*): jumps straight to the base-object constructor

    // 0x10097ef10, 16 bytes, complete-object destructor, inline, placed by class name
    // CausticsPass::~CausticsPass(): jumps straight to the base-object destructor

    // 0x10098df50, 48 bytes, base-object constructor, inline, placed by class name
    // CausticsPass::CausticsPass(render::RenderTargetsManager*, ThreadPool*)
    void CausticsPass::CausticsPass(RenderTargetsManager* param_1, ThreadPool* param_2) {
        new (this) SceneRenderPass(7, param_1, param_2);
        field_0 = &PTR__CausticsPass_100f14780;
    }

    // 0x1009912a0, 16 bytes, base-object destructor, inline, placed by class name
    // CausticsPass::~CausticsPass()
    void CausticsPass::~CausticsPass() {
        ~SceneRenderPass();
    }

} // namespace jag::graphics
