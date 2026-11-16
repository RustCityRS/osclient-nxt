// libs/graphics/runetek7/effects/debug/DebugMaterialHighlightEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "DebugMaterialHighlightEffect.h"

namespace jag::graphics {
    // 0x100f44a4c
    int32_t DebugMaterialHighlightEffect::m_materialHighlightID = -1;

    // 0x100022b10: DebugMaterialHighlightEffect::~DebugMaterialHighlightEffect() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10092d380
    void DebugMaterialHighlightEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                                          render::RenderContext& renderContext, Shader& shader) const {
        shader.GetProgram()->SetShaderConstFloat1((HashedString*)graphics::operator*(204),
                                                  (float)m_materialHighlightID);
    }

    // 0x10092d3c0
    DebugMaterialHighlightEffect* DebugMaterialHighlightEffect::BuildUniforms() {
        char* in_RSI;

        basic_string<decltype(nullptr)>(in_RSI);
        return this;
    }

} // namespace jag::graphics
