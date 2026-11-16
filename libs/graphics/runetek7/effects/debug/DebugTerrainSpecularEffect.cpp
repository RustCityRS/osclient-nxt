// libs/graphics/runetek7/effects/debug/DebugTerrainSpecularEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "DebugTerrainSpecularEffect.h"

namespace jag::graphics {
    // 0x100f44a50, 4 bytes, __data
    float DebugTerrainSpecularEffect::m_exponentLimitMin = -1.0f;

    // 0x100f44a54, 4 bytes, __data
    float DebugTerrainSpecularEffect::m_exponentOverride = -1.0f;

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugTerrainSpecularEffect::~DebugTerrainSpecularEffect();

    // 0x100153080: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    DebugTerrainSpecularEffect::~DebugTerrainSpecularEffect();

    // 0x100153090: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    DebugTerrainSpecularEffect::~DebugTerrainSpecularEffect();

    // 0x10092d3f0, 96 bytes, placed by class name and debug map
    // DebugTerrainSpecularEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void DebugTerrainSpecularEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2,
                                                        Shader* param_3) {
        ShaderProgram* this_00;
        HashedString* pHVar1;
        ImVec4 local_28[16];

        this_00 = (ShaderProgram*)param_3->GetProgram();
        ImVec4::ImVec4(local_28, m_exponentLimitMin, m_exponentOverride, 0.0, 0.0);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)203);
        this_00->SetShaderConstVector4(pHVar1, local_28);
    }

} // namespace jag::graphics
