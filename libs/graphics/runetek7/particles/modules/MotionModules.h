// libs/graphics/runetek7/particles/modules/MotionModules.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics::particlemodules {
    // 0x1007e51f0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // Acceleration::~Acceleration(): jumps straight to the base-object destructor

    // 0x1007e5200, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // Acceleration::~Acceleration()
    void Acceleration::~Acceleration() {
        ~Acceleration(this);
        operator_delete(this);
    }

    // 0x1007e5250, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // Noise::~Noise(): jumps straight to the base-object destructor

    // 0x1007e5260, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // Noise::~Noise()
    void Noise::~Noise() {
        ~Noise(this);
        operator_delete(this);
    }

} // namespace jag::graphics::particlemodules
