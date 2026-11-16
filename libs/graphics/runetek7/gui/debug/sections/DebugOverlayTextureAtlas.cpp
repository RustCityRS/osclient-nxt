// libs/graphics/runetek7/gui/debug/sections/DebugOverlayTextureAtlas.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "libs/graphics/runetek7/gui/debug/DebugOverlay.h"

namespace jag {
    // 0x100022b10: DebugOverlayTextureAtlas::~DebugOverlayTextureAtlas() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: DebugOverlayTextureAtlas::~DebugOverlayTextureAtlas() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10002d860: DebugOverlayTextureAtlas::Update(unsigned long long) has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x1008a91c0
    DebugOverlayTextureAtlas::DebugOverlayTextureAtlas(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlaySection(debugOverlay, 28, arg2) {}

    // 0x1008a9200
    void DebugOverlayTextureAtlas::Draw(unsigned long long arg1, int arg2, int arg3) {
        TextureManager* this_01 = ((RT7Core*)field_8->end())->GetTextureManager();
        auto this_02 = this_01->GetTextureAtlasManager();
        new (&local_268[0].field_8) eastl::fixed_string<char, 512>();
        Callstack local_268;
        unsigned int uVar1 = this_02->GetNumLoadingTextures();
        unsigned int uVar2 = this_02->GetPeakLoadingTextures();
        local_268[0].field_8.sprintf("Textures Loading: %u (%u peak)", (unsigned long)uVar1, (unsigned long)uVar2);
        uVar1 = this_02->GetPeakLoadingTextures();
        uVar2 = this_02->GetNumLoadingTexturesHeavyThreshold();
        local_268 =
            math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient((unsigned int)(uVar1 < uVar2), 0, 1);
        int arg5 = local_268.GetX();
        DrawTextString((int)&local_268 + 8, arg2, arg3, arg5, 255);
        local_268[0].field_8.~fixed_string();
    }

    // 0x1008a9370
    void DebugOverlayTextureAtlas::RegisterTweakyVars(tweak::Container& container) {
        container.AddCheckBox("Display Texture Atlas Info", field_120);
    }

} // namespace jag
