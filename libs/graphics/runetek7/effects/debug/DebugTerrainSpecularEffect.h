// libs/graphics/runetek7/effects/debug/DebugTerrainSpecularEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class DebugTerrainSpecularEffect {
    public:
        // virtual methods in vtable order
        virtual ~DebugTerrainSpecularEffect();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        DebugTerrainSpecularEffect(RT7Core& rt7Core);
        static float m_exponentLimitMin; // = -1.0f
        static float m_exponentOverride; // = -1.0f

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
    };

    // 0x10093dee0
    DebugTerrainSpecularEffect::DebugTerrainSpecularEffect(RT7Core& rt7Core) : ShaderEffect(rt7Core) {}

} // namespace jag::graphics

namespace jag::render {
    // 0x10093efe0
    ResourceDataT<unsigned char>::ResourceDataT(ResourceDataT<unsigned char>&& resourceData) {
        *(uint64_t*)this = *(uint64_t*)resourceData;
        *(uint32_t*)(this + 8) = *(uint32_t*)(resourceData + 8);
        *(uint32_t*)(this + 12) = *(uint32_t*)(resourceData + 12);
        *(ResourceDataT<unsigned char>*)(this + 16) = resourceData[16];
        resourceData[16] = (ResourceDataT<unsigned char>)0;
    }

} // namespace jag::render
