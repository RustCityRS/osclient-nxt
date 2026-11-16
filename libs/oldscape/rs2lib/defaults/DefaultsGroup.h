// libs/oldscape/rs2lib/defaults/DefaultsGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::defaults {
    // 0x10422a948, 8 bytes, __bss; set at startup by ___cxx_global_var_init.8
    DefaultsGroup::GRAPHICS = 3;

    // 0x100059370, 16 bytes, placed by the data it initialises
    // ___cxx_global_var_init.8
    void ___cxx_global_var_init_8() {
        DefaultsGroup::GRAPHICS = 3;
    }

} // namespace jag::oldscape::defaults
