// projects/osclient/camera/tweens/LinearMovementTween.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class LinearMovementTween {
    public:
        // virtual methods in vtable order
        virtual ~LinearMovementTween();
        virtual int GetValueX() const;
        virtual int GetValueZ() const;
        virtual int GetValueHeight() const;
        LinearMovementTween(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                            CinemaCameraTween::Easing easing);

    private:
        uint8_t _unknown_8[8];
        uint64_t field_16;
        uint8_t _unknown_24[4];
        int field_28;
        int field_32;
        int field_36;
        int field_40;
        int field_44;
        int field_48;
        uint8_t _unknown_52[4];
    };

    // 0x100022b10: LinearMovementTween::~LinearMovementTween() has the same machine code as option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: LinearMovementTween::~LinearMovementTween() has the same machine code as void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*)

    // 0x10005a630
    LinearMovementTween::LinearMovementTween(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                             CinemaCameraTween::Easing easing)
        : CinemaCameraMovementTween(arg7, easing), field_28(0), field_32(0), field_36(0), field_40(0), field_44(0),
          field_48(0), field_36(arg1), field_40(arg2), field_28(arg3), field_44(arg4), field_48(arg5), field_32(arg6) {}

    // 0x10005a6e0
    int LinearMovementTween::GetValueX() const {
        double dVar1 = (double)GetAlpha();
        dVar1 = (double)_round(dVar1 * (double)(field_44 - field_36) + (double)field_36);
        return (int)dVar1;
    }

    // 0x10005a720
    int LinearMovementTween::GetValueZ() const {
        double dVar1 = (double)GetAlpha();
        dVar1 = (double)_round(dVar1 * (double)(field_48 - field_40) + (double)field_40);
        return (int)dVar1;
    }

    // 0x10005a760
    int LinearMovementTween::GetValueHeight() const {
        double dVar1 = (double)GetAlpha();
        dVar1 = (double)_round(dVar1 * (double)(field_32 - field_28) + (double)field_28);
        return (int)dVar1;
    }

} // namespace jag::oldscape
