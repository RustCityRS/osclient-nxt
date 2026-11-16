// libs/graphics/runetek7/effects/debug/DebugEmissiveEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "DebugEmissiveEffect.h"

namespace jag::graphics {
    // 0x100f44a48, 4 bytes, __data
    float DebugEmissiveEffect::m_maskMultiplier = 1.0f;

    // 0x103bc0750, 16 bytes, __common; zero-initialised
    DebugEmissiveEffect::m_emissiveScale;

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugEmissiveEffect::~DebugEmissiveEffect();

    // 0x100153080: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    DebugEmissiveEffect::~DebugEmissiveEffect();

    // 0x100153090: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    DebugEmissiveEffect::~DebugEmissiveEffect();

    // 0x10092d320, 96 bytes, placed by class name and debug map
    // DebugEmissiveEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void DebugEmissiveEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        ShaderProgram* this_00;
        HashedString* pHVar1;

        this_00 = (ShaderProgram*)param_3->GetProgram();
        pHVar1 = (HashedString*)graphics::operator*((graphics*)201);
        this_00->SetShaderConstFloat1(pHVar1, m_emissiveScale);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)202);
        this_00->SetShaderConstFloat1(pHVar1, m_maskMultiplier);
    }

} // namespace jag::graphics
