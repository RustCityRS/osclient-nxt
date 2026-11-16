// libs/oldscape/jagex3/graphics/animation/CubicAccelerationInterpolator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::graphics::animation {
    class CubicAccelerationInterpolator {
    public:
        // virtual methods in vtable order
        virtual float GetInterpolation(float arg1);
    };

    // 0x100123230
    float CubicAccelerationInterpolator::GetInterpolation(float arg1) {
        return arg1 * arg1 * arg1;
    }

} // namespace jag::oldscape::graphics::animation
