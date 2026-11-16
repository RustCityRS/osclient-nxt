// libs/graphics/runetek7/effects/debug/DebugTerrainSpecularEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "DebugTerrainSpecularEffect.h"

namespace jag::graphics {
    // 0x100f44a50
    float DebugTerrainSpecularEffect::m_exponentLimitMin = -1.0f;

    // 0x100f44a54
    float DebugTerrainSpecularEffect::m_exponentOverride = -1.0f;

    // 0x100022b10: DebugTerrainSpecularEffect::~DebugTerrainSpecularEffect() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10092d3f0
    void DebugTerrainSpecularEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                                        render::RenderContext& renderContext, Shader& shader) const {
        auto this_00 = shader.GetProgram();
        ImVec4 local_28(m_exponentLimitMin, m_exponentOverride, 0.0, 0.0);
        this_00->SetShaderConstVector4((HashedString*)graphics::operator*(203), &local_28);
    }

} // namespace jag::graphics
