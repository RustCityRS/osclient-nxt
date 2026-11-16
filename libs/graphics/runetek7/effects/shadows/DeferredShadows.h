// libs/graphics/runetek7/effects/shadows/DeferredShadows.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class DeferredShadows {
    public:
        // virtual methods in vtable order
        virtual ~DeferredShadows();
        virtual bool Initialise();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        void SetShadowBufferRT(const shared_ptr<render::RenderTargets>& renderTargets);
        DeferredShadows(RT7Core& rt7Core);

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        unsigned int field_24;
        uint8_t _unknown_28[12];
    };

    // 0x100467d40
    void DeferredShadows::SetShadowBufferRT(const shared_ptr<render::RenderTargets>& renderTargets) {
        field_32 = renderTargets;
    }

    // 0x100923380
    DeferredShadows::~DeferredShadows() {
        field_32.~shared_ptr();
        destruct<oldscape::highlight::NpcUID*>();
    }

} // namespace jag::graphics

namespace jag::game {
    // 0x100468a20
    unsigned long
    LightShadowImportanceKeyGenerator::CalculateShadowCastingImportanceKey(const math::Vector3T<float>& vector3,
                                                                           const math::Sphere& sphere, float arg3) {
        uint64_t local_38[2];

        auto vector32 = sphere.SSOBeginPtr();
        local_38[0] = vector3 - *vector32;
        float fVar2 = (float)local_38->Length();
        unsigned int uVar1 = math::RoundFloatToInt(fVar2);
        float local_24 = (float)~uVar1 * field_0;
        fVar2 = (float)sphere.GetOutlineRadiusAdjustment();
        return (long)(arg3 * field_8 + fVar2 * field_4 + local_24) & 4294967295;
    }

} // namespace jag::game
