// libs/graphics/runetek7/postprocess/EquirectangularRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class EquirectangularRenderer {
    public:
        // virtual methods in vtable order
        virtual ~EquirectangularRenderer();
        virtual void OnWindowResize(math::Rect<unsigned int> const&);
        bool GetEnabled();
        void GetRenderTargets();
        GetCubeMapFaceEnabled(int);
        EquirectangularRenderer(RT7Core*);
        void DestroyRenderingResources();
        CreateRenderingResources();
        void CalculateCubeMapRes();
        void SetEnabled(bool, EffectManager&);
        void RegisterTweakVars(tweak::Container&, EffectManager&);

        // data members, from how the methods use this: 80 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[3];
        undefined4 field_12; // offset 12
        RT7Core* field_16;   // offset 16
        char _unknown_24[16];
        shared_ptr field_40; // offset 40
        bool m_enabled;      // offset 56
        char _unknown_57[3];
        int field_60; // offset 60
        char _unknown_64[4];
        undefined2 field_68; // offset 68
        char _unknown_70[10];
    };

    // 0x100462960, 16 bytes, inline, placed by class name and debug map
    // EquirectangularRenderer::GetRenderTargets()
    void EquirectangularRenderer::GetRenderTargets() {
        shared_ptr<render::RenderTargets>::operator*((shared_ptr<render::RenderTargets>*)field_40);
    }

    // 0x1004629b0, 32 bytes, inline, placed by class name and debug map
    // EquirectangularRenderer::GetCubeMapFaceEnabled(int)
    undefined1 EquirectangularRenderer::GetCubeMapFaceEnabled(int param_1) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<bool, 6ul>::operator[]((array<bool, 6ul>*)&field_64, (long)param_1);
        return *puVar1;
    }

} // namespace jag::graphics
