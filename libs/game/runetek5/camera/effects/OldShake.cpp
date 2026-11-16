// libs/game/runetek5/camera/effects/OldShake.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "OldShake.h"

namespace jag::game::camera {
    // 0x100022b10: OldShake::~OldShake() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: OldShake::~OldShake() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10061c310
    OldShake::OldShake(ShakeMode shakeMode, float arg2, float arg3, float arg4, float arg5)
        : ICameraEffect(4294967295, shakeMode), field_16(arg2), field_20(arg3), field_24(arg4), field_28(arg5),
          field_32(0.0) {
        if (shakeMode == 5) {
            LogAssert("shakeMode != ShakeMode::ROTATION_Z",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "effects/OldShake.cpp",
                      17, "OldShake: Old camera shake system doesn\'t support z-axis rotation.");
        }
    }

    // 0x10061c3f0
    void OldShake::Update(float arg1) {
        float fVar1 = arg1 * field_20 + field_24;
        field_24 = fVar1;
        fVar1 = (float)::sin(fVar1);
        field_32 = fVar1 * field_16;
        float fVar2 = (float)math::frand(1.0);
        fVar1 = field_28;
        field_32 = (field_32 - fVar1) + (fVar1 + fVar1 + 1.0) * fVar2;
    }

    // 0x10061c470
    void OldShake::Apply(math::Matrix44T<float>& matrix44) {
        uint32_t* puVar1;
        Matrix33T<float>* matrix33;
        float fVar2;
        uint32_t extraout_XMM1_Da;
        float arg3;
        float fVar3;
        Matrix33T<float> local_c0;
        uint64_t local_98;
        uint64_t local_88;
        uint64_t uStack_80;
        uint64_t local_78;
        uint64_t uStack_70;
        uint64_t local_68;
        uint64_t uStack_60;
        ReturnValue local_58;
        uint64_t uStack_50;
        ReturnValue local_40;
        uint32_t local_38;
        ReturnValue local_30;
        uint32_t local_28;

        switch (field_12) {
        case 0:
            fVar2 = field_32;
            fVar3 = 0.0;
            break;
        case 1:
            fVar3 = field_32;
            fVar2 = 0.0;
            break;
        case 2:
            arg3 = field_32;
            fVar2 = 0.0;
            fVar3 = 0.0;
            goto LAB_10061c502;
        case 3:
            fVar2 = (float)math::conversion::JagexAngleToRadians((int)field_32);
            matrix33 = (Matrix33T<float>*)&local_88;
            math::Matrix33RotationY<float>(fVar2);
            goto LAB_10061c63c;
        case 4:
            local_98 = math::conversion::JagexAngleToRadians((int)field_32);
            local_88 = *(uint64_t*)matrix44;
            uStack_80 = *(uint64_t*)(matrix44 + 8);
            local_78 = *(uint64_t*)(matrix44 + 16);
            uStack_70 = *(uint64_t*)(matrix44 + 24);
            local_68 = *(uint64_t*)(matrix44 + 32);
            uStack_60 = *(uint64_t*)(matrix44 + 40);
            local_58 = *(ReturnValue*)(matrix44 + 48);
            uStack_50 = *(uint64_t*)(matrix44 + 56);
            local_58 = math::Vector4T<float>::SetToIdentity();
            local_30 = (ReturnValue)local_88 * *PTR_LOOK_100ee66e0;
            local_28 = extraout_XMM1_Da;
            local_30 = math::Vector3T<float>::Normalize();
            local_38 = local_28;
            local_40 = local_30;
            puVar1 = (uint32_t*)local_40.y();
            *puVar1 = 0;
            local_40 = math::Vector3T<float>::Normalize();
            fVar2 = math::Vector3Dot<float>(local_40, local_30);
            fVar2 = (float)acos(fVar2);
            fVar3 = fVar2 - (float)local_98;
            fVar2 = (float)(~-(unsigned int)(fVar3 < 0.3926991f) & (unsigned int)(float)local_98 |
                            (unsigned int)(fVar2 - 0.3926991f) & -(unsigned int)(fVar3 < 0.3926991f));
            matrix33 = &local_c0;
            math::Matrix33RotationX<float>(
                (float)(-(unsigned int)(1.1780972f < fVar3) & (unsigned int)(fVar3 - 1.1780972f + fVar2) |
                        ~-(unsigned int)(1.1780972f < fVar3) & (unsigned int)fVar2));
        LAB_10061c63c:
            matrix44 *= matrix33;
            return;
        default:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "effects/OldShake.cpp",
                      108, "Unhandled OldShake mode %d", field_12);
            return;
        }
        arg3 = 0.0;
    LAB_10061c502:
        new (&local_88) ImVec4(fVar2, fVar3, arg3, 0.0);
        (*((matrix44 + 48))) += local_88;
    }

} // namespace jag::game::camera

// 0x10061c460
void sin(float arg1) {
    _sinf();
}
