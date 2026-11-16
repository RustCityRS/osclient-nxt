// libs/graphics/runetek7/effects/stippletransparency/StippleCutoutEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "StippleCutoutEffect.h"

namespace jag::graphics {
    // 0x100022b10: StippleCutoutEffect::~StippleCutoutEffect() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10091e010
    void StippleCutoutEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                                 render::RenderContext& renderContext, Shader& shader) const {
        uint32_t local_38;

        auto this_00 = shader.GetProgram();
        long lVar1 = field_32.SSOBeginPtr();
        uint64_t uStack_30 = *(uint64_t*)(lVar1 + 24);
        float fStack_34 = (float)((unsigned long)*(uint64_t*)(lVar1 + 16) >> 32);
        _local_38 = (((uint64_t)(1.0 / fStack_34) << 32) | (uint32_t)((int)*(uint64_t*)(lVar1 + 16)));
        auto pHVar2 = graphics::operator*(206);
        auto vector4 = field_32.SSOBeginPtr();
        this_00->SetShaderConstVector4(pHVar2, vector4);
        pHVar2 = (HashedString*)graphics::operator*(207);
        this_00->SetShaderConstVector4(pHVar2, &local_38);
    }

    // 0x10091e0a0
    auto StippleCutoutEffect::BuildUniforms() {
        auto result;
        result.basic_string<decltype(nullptr)>(" uniform highp vec4 uStippleCutoutPosDepthVisibility;\n uniform highp "
                                               "vec4 uStippleCutoutStartRangeAndMinAlpha;\n");
        return result;
    }

} // namespace jag::graphics
