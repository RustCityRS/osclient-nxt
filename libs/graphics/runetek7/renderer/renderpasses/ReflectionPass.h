// libs/graphics/runetek7/renderer/renderpasses/ReflectionPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ReflectionPass {
    public:
        // virtual methods in vtable order
        virtual ~ReflectionPass();
        virtual void PreparePass(RT7Core&, EffectManager&, SceneViewData const&, DrawableQueue&);
        virtual BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&,
                          DrawableQueue const&);
        virtual void Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                            DrawableQueue&);
        virtual void RenderDebug(EffectManager&, DrawableQueue&);
        virtual void RegisterTweakVarsOcclusion(tweak::Container&);
        virtual void OnOcclusionEnabled();
        virtual ReflectionPass* GetOcclusionRTName();
        ReflectionPass(render::RenderTargetsManager*, ThreadPool*);
        static /* 1 bytes */ m_showReflectionMap;

        // data members, from how the methods use this: 804 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        OcclusionManager field_16; // offset 16
        char _unknown_729[47];
        bool field_776; // offset 776
        bool field_777; // offset 777
        bool field_778; // offset 778
        char _unknown_779[1];
        int field_780;        // offset 780
        undefined8 field_784; // offset 784
        uint field_792;       // offset 792
        undefined1 field_796; // offset 796
        char _unknown_797[7];
    };

    // 0x1007bc0d0, 64 bytes, inline, placed by class name and debug map
    // ReflectionPass::GetOcclusionRTName()
    ReflectionPass* ReflectionPass::GetOcclusionRTName() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("ReflectionOcclusion", local_20);
        return this;
    }

} // namespace jag::graphics
