// projects/osclient/camera/tweens/ArcMovementTween.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class ArcMovementTween {
    public:
        // virtual methods in vtable order
        virtual ~ArcMovementTween();
        virtual int GetValueX() const;
        virtual int GetValueZ() const;
        virtual int GetValueHeight() const;
        ArcMovementTween(int, int, int, int, int, int, int, int, int, CinemaCameraTween::Easing);

        // data members, from how the methods use this: 80 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        undefined8 field_16; // offset 16
        char _unknown_24[4];
        undefined4 field_28; // offset 28
        undefined4 field_32; // offset 32
        char _unknown_36[4];
        double field_40; // offset 40
        double field_48; // offset 48
        double field_56; // offset 56
        double field_64; // offset 64
        double field_72; // offset 72
    };

} // namespace jag::oldscape
