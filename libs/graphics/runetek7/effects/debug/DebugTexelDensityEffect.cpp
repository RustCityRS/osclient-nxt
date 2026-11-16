// libs/graphics/runetek7/effects/debug/DebugTexelDensityEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "DebugTexelDensityEffect.h"

namespace jag::graphics {
    // 0x100f44a58, 4 bytes, __data
    float DebugTexelDensityEffect::m_resolutionPerTile = 256.0f;

    // 0x100f44a5c, 4 bytes, __data
    float DebugTexelDensityEffect::m_targetMultiplier = 4.0f;

    // 0x100f44a60, 4 bytes, __data
    float DebugTexelDensityEffect::m_densityRadius = 0.25f;

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugTexelDensityEffect::~DebugTexelDensityEffect();

    // 0x100153080: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    DebugTexelDensityEffect::~DebugTexelDensityEffect();

    // 0x100153090: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    DebugTexelDensityEffect::~DebugTexelDensityEffect();

    // 0x10092d450, 128 bytes, placed by class name and debug map
    // DebugTexelDensityEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void DebugTexelDensityEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        ShaderProgram* this_00;
        HashedString* pHVar1;
        float fVar2;
        ImVec4 local_28[16];

        this_00 = (ShaderProgram*)param_3->GetProgram();
        fVar2 = 1.0 / (128.0 / m_resolutionPerTile);
        ImVec4::ImVec4(local_28, m_targetMultiplier * fVar2, fVar2,
                       1.0 / ((128.0 / m_resolutionPerTile) * m_targetMultiplier), m_densityRadius);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)200);
        this_00->SetShaderConstVector4(pHVar1, local_28);
    }

} // namespace jag::graphics
