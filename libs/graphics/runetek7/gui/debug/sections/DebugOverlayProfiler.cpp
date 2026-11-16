// libs/graphics/runetek7/gui/debug/sections/DebugOverlayProfiler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "libs/graphics/runetek7/gui/debug/DebugOverlay.h"

namespace jag {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugOverlayProfiler::~DebugOverlayProfiler();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    DebugOverlayProfiler::~DebugOverlayProfiler();

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    DebugOverlayProfiler::Update(unsigned long long);

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugOverlayProfiler::~DebugOverlayProfiler();

    // 0x1008a8be0, 48 bytes, base-object constructor, placed by class name and debug map
    // DebugOverlayProfiler::DebugOverlayProfiler(DebugOverlay&, bool)
    void DebugOverlayProfiler::DebugOverlayProfiler(DebugOverlay* param_1, bool param_2) {
        undefined7 in_register_00000011;

        new (this) DebugOverlaySection(param_1, 26, CONCAT71(in_register_00000011, param_2) & 4294967295);
        field_0 = &PTR__ScriptOption_100f18220;
    }

    // 0x1008a8c10, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugOverlayProfiler::DebugOverlayProfiler(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1008a8c20, 176 bytes, placed by class name and debug map
    // DebugOverlayProfiler::Draw(unsigned long long, int, int)
    void DebugOverlayProfiler::Draw(ulonglong param_1, int param_2, int param_3) {
        fixed_string<char, 512, true, eastl::allocator> local_258[552];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_258, "Profiler (Disabled)");
        (*(code*)field_0[7])(this, local_258, param_2, param_3, 4278190335, 255, 2);
        /* WARNING: Subroutine does not return */
        local_258->~fixed_string();
    }

} // namespace jag
