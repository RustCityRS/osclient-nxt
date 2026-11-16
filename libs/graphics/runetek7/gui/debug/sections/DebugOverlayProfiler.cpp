// libs/graphics/runetek7/gui/debug/sections/DebugOverlayProfiler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "libs/graphics/runetek7/gui/debug/DebugOverlay.h"

namespace jag {
    // 0x100022b10: DebugOverlayProfiler::~DebugOverlayProfiler() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: DebugOverlayProfiler::~DebugOverlayProfiler() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10002d860: DebugOverlayProfiler::Update(unsigned long long) has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x1008a8be0
    DebugOverlayProfiler::DebugOverlayProfiler(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlaySection(debugOverlay, 26, arg2) {}

    // 0x1008a8c20
    void DebugOverlayProfiler::Draw(unsigned long long arg1, int arg2, int arg3) {
        fixed_string<char, 512> local_258;

        new (&local_258) eastl::fixed_string<char, 512>("Profiler (Disabled)");
        DrawTextString((int)&local_258, arg2, arg3, -16776961, 255);
    }

} // namespace jag
