// libs/graphics/runetek7/gui/debug/sections/DebugOverlayShaderProfiler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "libs/graphics/runetek7/gui/debug/DebugOverlay.h"

namespace jag {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugOverlayShaderProfiler::~DebugOverlayShaderProfiler();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    DebugOverlayShaderProfiler::~DebugOverlayShaderProfiler();

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    DebugOverlayShaderProfiler::Update(unsigned long long);

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugOverlayShaderProfiler::~DebugOverlayShaderProfiler();

    // 0x1008a9010, 48 bytes, base-object constructor, placed by class name and debug map
    // DebugOverlayShaderProfiler::DebugOverlayShaderProfiler(DebugOverlay&, bool)
    void DebugOverlayShaderProfiler::DebugOverlayShaderProfiler(DebugOverlay* param_1, bool param_2) {
        undefined7 in_register_00000011;

        new (this) DebugOverlaySection(param_1, 7, CONCAT71(in_register_00000011, param_2) & 4294967295);
        field_0 = &PTR__ScriptOption_100f182e0;
    }

    // 0x1008a9040, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugOverlayShaderProfiler::DebugOverlayShaderProfiler(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1008a9050, 304 bytes, placed by class name and debug map
    // DebugOverlayShaderProfiler::Draw(unsigned long long, int, int)
    void DebugOverlayShaderProfiler::Draw(ulonglong param_1, int param_2, int param_3) {
        uint uVar1;
        uint uVar2;
        uint uVar3;
        RT7Core* this_00;
        ShaderManager* this_01;
        ShaderManager<render::PixelShader>* pSVar4;
        ulong uVar5;
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_260);
        this_00 = (RT7Core*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_8);
        this_01 = (ShaderManager*)this_00->GetShaderManager();
        uVar1 = this_01->GetStickTime();
        uVar2 = this_01->CacheSize();
        pSVar4 = (ShaderManager<render::PixelShader>*)this_01->Instance();
        uVar5 = pSVar4->GetShaderCount();
        pSVar4 = (ShaderManager<render::PixelShader>*)pSVar4->Instance();
        uVar3 = pSVar4->GetShaderCount();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_260, "Shader Total: (%u Unique, %u Cached) (%u vs, %u ps)", (ulong)uVar1, (ulong)uVar2,
            uVar5 & 4294967295, (ulong)uVar3);
        (*(code*)field_0[7])(this, local_260, param_2, param_3, 16711935, 255, 2);
        /* WARNING: Subroutine does not return */
        local_260->~fixed_string();
    }

    // 0x1008a91a0, 32 bytes, placed by class name
    // DebugOverlayShaderProfiler::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayShaderProfiler::RegisterTweakyVars(Container* param_1) {
        param_1->AddCheckBox("Display Shader Info", &field_120);
    }

} // namespace jag
