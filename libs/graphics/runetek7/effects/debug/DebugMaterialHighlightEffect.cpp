// libs/graphics/runetek7/effects/debug/DebugMaterialHighlightEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "DebugMaterialHighlightEffect.h"

namespace jag::graphics {
    // 0x100f44a4c, 4 bytes, __data
    DebugMaterialHighlightEffect::m_materialHighlightID = -1;

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugMaterialHighlightEffect::~DebugMaterialHighlightEffect();

    // 0x100153080: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    DebugMaterialHighlightEffect::~DebugMaterialHighlightEffect();

    // 0x100153090: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    DebugMaterialHighlightEffect::~DebugMaterialHighlightEffect();

    // 0x10092d380, 64 bytes, placed by class name and debug map
    // DebugMaterialHighlightEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void DebugMaterialHighlightEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2,
                                                          Shader* param_3) {
        ShaderProgram* this_00;
        HashedString* pHVar1;

        this_00 = (ShaderProgram*)param_3->GetProgram();
        pHVar1 = (HashedString*)graphics::operator*((graphics*)204);
        this_00->SetShaderConstFloat1(pHVar1, (float)m_materialHighlightID);
    }

    // 0x10092d3c0, 32 bytes, placed by class name and debug map
    // DebugMaterialHighlightEffect::BuildUniforms()
    DebugMaterialHighlightEffect* DebugMaterialHighlightEffect::BuildUniforms() {
        char* in_RSI;

        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this, in_RSI);
        return this;
    }

} // namespace jag::graphics
