// libs/graphics/runetek7/effects/debug/DebugTexelDensityEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "DebugTexelDensityEffect.h"

namespace jag::graphics {
    // 0x100f44a58
    float DebugTexelDensityEffect::m_resolutionPerTile = 256.0f;

    // 0x100f44a5c
    float DebugTexelDensityEffect::m_targetMultiplier = 4.0f;

    // 0x100f44a60
    float DebugTexelDensityEffect::m_densityRadius = 0.25f;

    // 0x100022b10: DebugTexelDensityEffect::~DebugTexelDensityEffect() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10092d450
    void DebugTexelDensityEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                                     render::RenderContext& renderContext, Shader& shader) const {
        auto this_00 = shader.GetProgram();
        float arg2 = 1.0 / (128.0 / m_resolutionPerTile);
        ImVec4 local_28(m_targetMultiplier * arg2, arg2, 1.0 / ((128.0 / m_resolutionPerTile) * m_targetMultiplier),
                        m_densityRadius);
        this_00->SetShaderConstVector4((HashedString*)graphics::operator*(200), &local_28);
    }

} // namespace jag::graphics
