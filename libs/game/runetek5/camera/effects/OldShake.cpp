// libs/game/runetek5/camera/effects/OldShake.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "OldShake.h"

namespace jag::game::camera {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    OldShake::~OldShake();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    OldShake::~OldShake();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    OldShake::~OldShake();

    // 0x10061c310, 176 bytes, base-object constructor, placed by class name
    // OldShake::OldShake(ShakeMode, float, float, float, float)
    void OldShake::OldShake(float param_1, float param_2, float param_3, float param_4, OldShake* this, int param_6) {
        new (this) ICameraEffect(4294967295, param_6);
        *(undefined***)this = &PTR__ScriptOption_100f0c130;
        field_16 = param_1;
        field_20 = param_2;
        field_24 = param_3;
        field_28 = param_4;
        field_32 = 0.0;
        if (param_6 == 5) {
            /* WARNING: Subroutine does not return */
            LogAssert("shakeMode != ShakeMode::ROTATION_Z",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "effects/OldShake.cpp",
                      17, "OldShake: Old camera shake system doesn\'t support z-axis rotation.");
        }
    }

    // 0x10061c3e0, 16 bytes, complete-object constructor, placed by class name
    // OldShake::OldShake(ShakeMode, float, float, float, float): jumps straight to the base-object constructor

    // 0x10061c3f0, 112 bytes, placed by class name
    // OldShake::Update(float)
    void OldShake::Update(float param_1) {
        float fVar1;
        float fVar2;

        fVar1 = param_1 * field_20 + field_24;
        field_24 = fVar1;
        fVar1 = (float)::sin(fVar1);
        field_32 = fVar1 * field_16;
        fVar2 = (float)math::frand(1.0);
        fVar1 = field_28;
        field_32 = (field_32 - fVar1) + (fVar1 + fVar1 + 1.0) * fVar2;
    }

    // 0x10061c470, 512 bytes, placed by class name
    // OldShake::Apply(math::Matrix44T<float>&)
    void OldShake::Apply(Matrix44T* param_1) {
        undefined8 uVar1;
        undefined4* puVar2;
        math* this_00;
        float fVar3;
        undefined4 extraout_XMM1_Da;
        float fVar4;
        float fVar5;
        undefined1 local_c0[40];
        undefined8 local_98;
        undefined1 local_88[56];
        undefined8 uStack_50;
        undefined8 local_40;
        undefined4 local_38;
        undefined8 local_30;
        undefined4 local_28;

        switch (field_12) {
        case 0:
            fVar3 = field_32;
            fVar5 = 0.0;
            break;
        case 1:
            fVar5 = field_32;
            fVar3 = 0.0;
            break;
        case 2:
            fVar4 = field_32;
            fVar3 = 0.0;
            fVar5 = 0.0;
            goto LAB_10061c502;
        case 3:
            fVar3 = (float)math::conversion::JagexAngleToRadians((int)field_32);
            this_00 = (math*)local_88;
            math::Matrix33RotationY<float>(this_00, fVar3);
            goto LAB_10061c63c;
        case 4:
            local_98 = math::conversion::JagexAngleToRadians((int)field_32);
            local_88._0_4_ = *(float*)&param_1->field_0;
            local_88._4_4_ = *(float*)&param_1->field_4;
            local_88._8_4_ = *(float*)&param_1->field_8;
            local_88._12_4_ = *(float*)&param_1->field_12;
            local_88._16_8_ = *(undefined8*)&param_1->field_16;
            local_88._24_8_ = *(undefined8*)&param_1->field_24;
            local_88._32_8_ = *(undefined8*)&param_1->field_32;
            local_88._40_8_ = *(undefined8*)&param_1->field_40;
            local_88._48_8_ = *(undefined8*)&param_1->field_48;
            uStack_50 = *(undefined8*)(param_1 + 1);
            ((local_88 + 48))->SetToIdentity();
            local_30 = math::operator*((Matrix44T*)local_88, (Vector3T*)PTR_LOOK_100ee66e0);
            local_28 = extraout_XMM1_Da;
            local_30.Normalize();
            local_38 = local_28;
            local_40 = local_30;
            puVar2 = (undefined4*)local_40.y();
            *puVar2 = 0;
            local_40.Normalize();
            fVar3 = math::Vector3Dot<float>((Vector3T*)&local_40, (Vector3T*)&local_30);
            fVar3 = (float)acos(fVar3);
            fVar5 = fVar3 - (float)local_98;
            fVar3 = (float)(~-(uint)(fVar5 < 0.3926991) & (uint)(float)local_98 |
                            (uint)(fVar3 + -0.3926991) & -(uint)(fVar5 < 0.3926991));
            this_00 = (math*)local_c0;
            math::Matrix33RotationX<float>(this_00,
                                           (float)(-(uint)(1.1780972 < fVar5) & (uint)(fVar5 + -1.1780972 + fVar3) |
                                                   ~-(uint)(1.1780972 < fVar5) & (uint)fVar3));
        LAB_10061c63c:
            math::Matrix44T<float>::operator*=((Matrix44T<float>*)param_1, (Matrix33T*)this_00);
            return;
        default:
            uVar1 = logger::default_logger();
            logger::Logger::Log(uVar1, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "camera/effects/OldShake.cpp",
                                108, "Unhandled OldShake mode %d", field_12);
            return;
        }
        fVar4 = 0.0;
    LAB_10061c502:
        new (local_88) ImVec4(fVar3, fVar5, fVar4, 0.0);
        math::QuaternionT<float>::operator+=((QuaternionT<float>*)&param_1->field_48, (QuaternionT*)local_88);
    }

} // namespace jag::game::camera

// 0x10061c460, 16 bytes, placed by neighbouring functions
// sin(float)
void sin(float param_1) {
    _sinf();
}
