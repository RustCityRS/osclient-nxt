// libs/oldscape/jagex3/graphics/animation/CubicAccelerationInterpolator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::graphics::animation {
    class CubicAccelerationInterpolator {
    public:
        // virtual methods in vtable order
        virtual float GetInterpolation(float);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100123230, 32 bytes, inline, placed by class name and debug map
    // CubicAccelerationInterpolator::GetInterpolation(float)
    float CubicAccelerationInterpolator::GetInterpolation(float param_1) {
        return param_1 * param_1 * param_1;
    }

} // namespace jag::oldscape::graphics::animation

namespace jag::oldscape {
    // 0x100123cc0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // WorldSwitcherStructure::WorldSwitcherStructure(): jumps straight to the base-object constructor

} // namespace jag::oldscape
