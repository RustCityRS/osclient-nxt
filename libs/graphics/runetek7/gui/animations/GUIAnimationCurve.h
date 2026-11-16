// libs/graphics/runetek7/gui/animations/GUIAnimationCurve.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class GUIAnimationCurve {
    public:
        float Eval(float) const;
        void LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator>>&);
        ~GUIAnimationCurve();

        // data members, from how the methods use this: 16 bytes
        ulong field_0; // offset 0
        ulong field_8; // offset 8
    };

    // 0x100916a50, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // GUIAnimationCurve::~GUIAnimationCurve(): jumps straight to the base-object destructor

    // 0x100916a60, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // GUIAnimationCurve::~GUIAnimationCurve()
    void GUIAnimationCurve::~GUIAnimationCurve() {
        ~vector();
    }

} // namespace jag::graphics
