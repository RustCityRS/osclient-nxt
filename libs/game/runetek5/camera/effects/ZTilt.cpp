// libs/game/runetek5/camera/effects/ZTilt.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ZTilt.h"

namespace jag::game::camera {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ZTilt::Update(float);

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ZTilt::~ZTilt();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ZTilt::~ZTilt();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ZTilt::~ZTilt();

    // 0x10061c8d0, 64 bytes, base-object constructor, placed by class name and debug map
    // ZTilt::ZTilt(int, float)
    void ZTilt::ZTilt(int param_1, float param_2) {
        new (this) ICameraEffect(1, param_1);
        field_0 = &PTR__ScriptOption_100f0c1b0;
        field_16 = param_2;
    }

    // 0x10061c910, 16 bytes, complete-object constructor, placed by class name and debug map
    // ZTilt::ZTilt(int, float): jumps straight to the base-object constructor

    // 0x10061c920, 80 bytes, base-object constructor, placed by class name and debug map
    // ZTilt::ZTilt(int, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ZTilt::ZTilt(int param_1, PacketT* param_2) {
        new (this) ICameraEffect(1, param_1);
        field_0 = &PTR__ScriptOption_100f0c1b0;
        ProcessServerUpdate(this, param_2);
    }

    // 0x10061c970, 16 bytes, complete-object constructor, placed by class name and debug map
    // ZTilt::ZTilt(int, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&): jumps straight to the base-object constructor

    // 0x10061c980, 64 bytes, placed by class name and debug map
    // ZTilt::Apply(math::Matrix44T<float>&)
    void ZTilt::Apply(Matrix44T* param_1) {
        undefined1 local_40[40];

        math::Matrix33RotationZ<float>((math*)local_40, field_16);
        math::Matrix44T<float>::operator*=((Matrix44T<float>*)param_1, (Matrix33T*)local_40);
    }

    // 0x10061c9c0, 32 bytes, placed by class name and debug map
    // ZTilt::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ZTilt::ProcessServerUpdate(PacketT* param_1) {
        float fVar1;

        fVar1 = (float)param_1->gFloat();
        field_16 = fVar1;
    }

} // namespace jag::game::camera
