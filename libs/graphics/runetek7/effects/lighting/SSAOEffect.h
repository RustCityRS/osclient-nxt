// libs/graphics/runetek7/effects/lighting/SSAOEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class SSAOEffect {
    public:
        // virtual methods in vtable order
        virtual ~SSAOEffect();
        virtual bool Initialise();
        virtual bool IsSupported() const;
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        void SetSSAORT(const shared_ptr<render::RenderTargets>& renderTargets);
        SSAOEffect(RT7Core& rt7Core);
        uint64_t GetHighestSupporedMode();

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        unsigned int field_24;
        uint8_t _unknown_28[12];
    };

    // 0x1001d0780
    void SSAOEffect::SetSSAORT(const shared_ptr<render::RenderTargets>& renderTargets) {
        field_32 = renderTargets;
    }

    // 0x1009396e0
    SSAOEffect::~SSAOEffect() {
        field_32.~weak_ptr();
        destruct<oldscape::highlight::NpcUID*>();
    }

} // namespace jag::graphics
