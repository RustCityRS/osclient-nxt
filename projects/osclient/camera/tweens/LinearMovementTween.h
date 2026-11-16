// projects/osclient/camera/tweens/LinearMovementTween.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

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
        LinearMovementTween(int, int, int, int, int, int, int, CinemaCameraTween::Easing);

        // data members, from how the methods use this: 56 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        undefined8 field_16; // offset 16
        char _unknown_24[4];
        undefined4 field_28; // offset 28
        undefined4 field_32; // offset 32
        undefined4 field_36; // offset 36
        undefined4 field_40; // offset 40
        undefined4 field_44; // offset 44
        undefined4 field_48; // offset 48
        char _unknown_52[4];
    };

    // 0x100022b10: the linker folded this into option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LinearMovementTween::~LinearMovementTween();

    // 0x10002a770: the linker folded this into void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*), which has identical code
    LinearMovementTween::~LinearMovementTween();

    // 0x10004a690: the linker folded this into option::ScriptOption<bool, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LinearMovementTween::~LinearMovementTween();

    // 0x10005a630, 128 bytes, base-object constructor, placed by class name
    // LinearMovementTween::LinearMovementTween(int, int, int, int, int, int, int, CinemaCameraTween::Easing)
    void LinearMovementTween::LinearMovementTween(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                                                  undefined4 param_4, undefined4 param_5, undefined4 param_6,
                                                  undefined4 param_7, undefined4 param_9) {
        new (this) CinemaCameraMovementTween(param_7, param_9);
        field_0 = &PTR__ScriptOption_100ef2660;
        field_28 = 0;
        field_32 = 0;
        field_36 = 0;
        field_40 = 0;
        field_44 = 0;
        field_48 = 0;
        field_36 = param_1;
        field_40 = param_2;
        field_28 = param_3;
        field_44 = param_4;
        field_48 = param_5;
        field_32 = param_6;
    }

    // 0x10005a6b0, 48 bytes, complete-object constructor, placed by class name
    // LinearMovementTween::LinearMovementTween(int, int, int, int, int, int, int, CinemaCameraTween::Easing)
    void LinearMovementTween::LinearMovementTween() {
        LinearMovementTween();
    }

    // 0x10005a6e0, 64 bytes, placed by class name
    // LinearMovementTween::GetValueX() const
    int LinearMovementTween::GetValueX() {
        double dVar1;

        dVar1 = (double)GetAlpha();
        dVar1 = (double)_round(dVar1 * (double)(int)(field_44 - field_36) + (double)(int)field_36);
        return (int)dVar1;
    }

    // 0x10005a720, 64 bytes, placed by class name
    // LinearMovementTween::GetValueZ() const
    int LinearMovementTween::GetValueZ() {
        double dVar1;

        dVar1 = (double)GetAlpha();
        dVar1 = (double)_round(dVar1 * (double)(int)(field_48 - field_40) + (double)(int)field_40);
        return (int)dVar1;
    }

    // 0x10005a760, 64 bytes, placed by class name
    // LinearMovementTween::GetValueHeight() const
    int LinearMovementTween::GetValueHeight() {
        double dVar1;

        dVar1 = (double)GetAlpha();
        dVar1 = (double)_round(dVar1 * (double)(int)(field_32 - field_28) + (double)(int)field_28);
        return (int)dVar1;
    }

} // namespace jag::oldscape
