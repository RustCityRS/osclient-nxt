// projects/osclient/camera/tweens/ArcMovementTween.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class ArcMovementTween {
    public:
        // virtual methods in vtable order
        virtual ~ArcMovementTween();
        virtual int GetValueX() const;
        virtual int GetValueZ() const;
        virtual int GetValueHeight() const;
        ArcMovementTween(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9,
                         CinemaCameraTween::Easing easing);

    private:
        uint8_t _unknown_8[8];
        uint64_t field_16;
        uint8_t _unknown_24[4];
        int field_28;
        int field_32;
        uint8_t _unknown_36[4];
        double field_40;
        double field_48;
        double field_56;
        double field_64;
        double field_72;
    };

} // namespace jag::oldscape
