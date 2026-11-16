// libs/graphics/runetek7/postprocess/EquirectangularRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class EquirectangularRenderer {
    public:
        // virtual methods in vtable order
        virtual ~EquirectangularRenderer();
        virtual void OnWindowResize(const math::Rect<unsigned int>& rect);
        bool GetEnabled();
        void GetRenderTargets();
        uint8_t GetCubeMapFaceEnabled(int arg1);
        EquirectangularRenderer(RT7Core* rt7Core);
        void DestroyRenderingResources();
        uint64_t CreateRenderingResources();
        void CalculateCubeMapRes();
        void SetEnabled(bool arg1, EffectManager& effectManager);
        void RegisterTweakVars(tweak::Container& container, EffectManager& effectManager);

    private:
        uint8_t field_8;
        uint8_t _unknown_9[3];
        uint32_t field_12;
        RT7Core* field_16;
        uint8_t _unknown_24[16];
        shared_ptr field_40;
        bool m_enabled;
        uint8_t _unknown_57[3];
        int field_60;
        uint8_t _unknown_64[4];
        uint16_t field_68;
        uint8_t _unknown_70[10];
    };

    // 0x100462960
    void EquirectangularRenderer::GetRenderTargets() {
        **field_40;
    }

    // 0x1004629b0
    uint8_t EquirectangularRenderer::GetCubeMapFaceEnabled(int arg1) {
        uint8_t* puVar1 = &field_64[(long)arg1];
        return *puVar1;
    }

} // namespace jag::graphics
