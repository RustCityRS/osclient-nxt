// libs/graphics/runetek7/lighting/ambientocclusion/SSAOContext.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class SSAOContext {
    public:
        void GetSSAOParams();
        AuthLibWrapper* GetNativeContext();
        SSAOContext();
        ~SSAOContext();
        void Destroy();
        void Init();
        void Render(render::RenderTargets& renderTargets, const render::Texture* texture1,
                    const render::Texture* texture2, const render::Viewport& viewport,
                    const math::Matrix44T<float>& matrix441, const math::Matrix44T<float>& matrix442);

    private:
        uint8_t _unknown_0[48];
        uint64_t m_pNativeContext;
    };

    class SSAOParams {
    public:
        SSAOParams();

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint32_t field_16;
        uint64_t field_20;
        uint64_t field_28;
        uint32_t field_36;
        uint8_t field_40;
        uint8_t _unknown_41[3];
        uint32_t field_44;
        uint8_t _unknown_48[4];
    };

} // namespace jag::graphics
