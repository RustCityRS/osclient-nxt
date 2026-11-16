// libs/graphics/runetek7/gui/debug/sections/DebugOverlayShaderProfiler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "libs/graphics/runetek7/gui/debug/DebugOverlay.h"

namespace jag {
    // 0x100022b10: DebugOverlayShaderProfiler::~DebugOverlayShaderProfiler() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: DebugOverlayShaderProfiler::~DebugOverlayShaderProfiler() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10002d860: DebugOverlayShaderProfiler::Update(unsigned long long) has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x1008a9010
    DebugOverlayShaderProfiler::DebugOverlayShaderProfiler(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlaySection(debugOverlay, 7, arg2) {}

    // 0x1008a9050
    void DebugOverlayShaderProfiler::Draw(unsigned long long arg1, int arg2, int arg3) {
        fixed_string<char, 512> local_260;
        ShaderManager* this_01 = ((RT7Core*)field_8->end())->GetShaderManager();
        unsigned int uVar1 = this_01->GetStickTime();
        unsigned int uVar2 = this_01->CacheSize();
        auto pSVar4 = this_01->Instance();
        unsigned long uVar5 = pSVar4->GetShaderCount();
        pSVar4 = (ShaderManager<render::PixelShader>*)pSVar4->Instance();
        unsigned int uVar3 = pSVar4->GetShaderCount();
        local_260.sprintf("Shader Total: (%u Unique, %u Cached) (%u vs, %u ps)", (unsigned long)uVar1,
                          (unsigned long)uVar2, uVar5 & 4294967295, (unsigned long)uVar3);
        DrawTextString((int)&local_260, arg2, arg3, 16711935, 255);
    }

    // 0x1008a91a0
    void DebugOverlayShaderProfiler::RegisterTweakyVars(tweak::Container& container) {
        container.AddCheckBox("Display Shader Info", field_120);
    }

} // namespace jag
