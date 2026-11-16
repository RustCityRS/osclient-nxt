// libs/graphics/runetek7/effects/debug/DebugEmissiveEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "DebugEmissiveEffect.h"

namespace jag::graphics {
    // 0x100f44a48
    float DebugEmissiveEffect::m_maskMultiplier = 1.0f;

    // 0x103bc0750
    uint8_t DebugEmissiveEffect::m_emissiveScale[16];

    // 0x100022b10: DebugEmissiveEffect::~DebugEmissiveEffect() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10092d320
    void DebugEmissiveEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                                 render::RenderContext& renderContext, Shader& shader) const {
        auto this_00 = shader.GetProgram();
        auto pHVar1 = graphics::operator*(201);
        this_00->SetShaderConstFloat1(pHVar1, m_emissiveScale);
        pHVar1 = (HashedString*)graphics::operator*(202);
        this_00->SetShaderConstFloat1(pHVar1, m_maskMultiplier);
    }

} // namespace jag::graphics
