// libs/graphics/runetek7/gui/debug/sections/DebugOverlayTextureAtlas.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "libs/graphics/runetek7/gui/debug/DebugOverlay.h"

namespace jag {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugOverlayTextureAtlas::~DebugOverlayTextureAtlas();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    DebugOverlayTextureAtlas::~DebugOverlayTextureAtlas();

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    DebugOverlayTextureAtlas::Update(unsigned long long);

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugOverlayTextureAtlas::~DebugOverlayTextureAtlas();

    // 0x1008a91c0, 48 bytes, base-object constructor, placed by class name and debug map
    // DebugOverlayTextureAtlas::DebugOverlayTextureAtlas(DebugOverlay&, bool)
    void DebugOverlayTextureAtlas::DebugOverlayTextureAtlas(DebugOverlay* param_1, bool param_2) {
        undefined7 in_register_00000011;

        new (this) DebugOverlaySection(param_1, 28, CONCAT71(in_register_00000011, param_2) & 4294967295);
        field_0 = &PTR__ScriptOption_100f18338;
    }

    // 0x1008a91f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugOverlayTextureAtlas::DebugOverlayTextureAtlas(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1008a9200, 320 bytes, placed by class name and debug map
    // DebugOverlayTextureAtlas::Draw(unsigned long long, int, int)
    void DebugOverlayTextureAtlas::Draw(ulonglong param_1, int param_2, int param_3) {
        uint uVar1;
        uint uVar2;
        undefined4 uVar3;
        RT7Core* this_00;
        TextureManager* this_01;
        TextureAtlasManager* this_02;
        Callstack local_268[35];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (RT7Core*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_8);
        this_01 = (TextureManager*)this_00->GetTextureManager();
        this_02 = (TextureAtlasManager*)this_01->GetTextureAtlasManager();
        new (&local_268[0].field_8) eastl::fixed_string<char, 512, true, eastl::allocator>();
        callstack::Callstack::Callstack(local_268);
        uVar1 = this_02->GetNumLoadingTextures();
        uVar2 = this_02->GetPeakLoadingTextures();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            &local_268[0].field_8, "Textures Loading: %u (%u peak)", (ulong)uVar1, (ulong)uVar2);
        uVar1 = this_02->GetPeakLoadingTextures();
        uVar2 = this_02->GetNumLoadingTexturesHeavyThreshold();
        local_268->SetRedGreenGradient((uint)(uVar1 < uVar2), 0, 1);
        uVar3 = local_268->GetX();
        (*(code*)field_0[7])(this, &local_268[0].field_8, param_2, param_3, uVar3, 255, 2);
        /* WARNING: Subroutine does not return */
        local_268[0].field_8.~fixed_string();
    }

    // 0x1008a9370, 32 bytes, placed by class name and debug map
    // DebugOverlayTextureAtlas::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayTextureAtlas::RegisterTweakyVars(Container* param_1) {
        param_1->AddCheckBox("Display Texture Atlas Info", &field_120);
    }

} // namespace jag
