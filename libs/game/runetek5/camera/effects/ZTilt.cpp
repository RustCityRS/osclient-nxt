// libs/game/runetek5/camera/effects/ZTilt.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ZTilt.h"

namespace jag::game::camera {
    // 0x100009e70: ZTilt::Update(float) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100022b10: ZTilt::~ZTilt() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ZTilt::~ZTilt() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10061c8d0
    ZTilt::ZTilt(int arg1, float arg2) : ICameraEffect(1, arg1), field_16(arg2) {}

    // 0x10061c920
    ZTilt::ZTilt(int arg1, PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) : ICameraEffect(1, arg1) {
        ProcessServerUpdate(arg2);
    }

    // 0x10061c980
    void ZTilt::Apply(math::Matrix44T<float>& matrix44) {
        Matrix33T<float> local_40;

        math::Matrix33RotationZ<float>(field_16);
        matrix44 *= &local_40;
    }

    // 0x10061c9c0
    void ZTilt::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1) {
        field_16 = (float)arg1.gFloat();
    }

} // namespace jag::game::camera
