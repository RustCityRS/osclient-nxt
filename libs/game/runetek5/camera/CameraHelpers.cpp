// libs/game/runetek5/camera/CameraHelpers.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class CameraHelpers {
    public:
        void JagexAnglesToQuaternion(math::QuaternionT<double>& quaternion, int arg2, int arg3, int arg4);
        void JagMultiply(math::QuaternionT<double>& quaternion1, const math::QuaternionT<double>& quaternion2);
        void QuaternionToJagexAngles(int& arg1, int& arg2, const math::QuaternionT<double>& quaternion);
        void OldJagexAnglesToQuaternion(math::QuaternionT<double>& quaternion, int arg2, int arg3, int arg4);
        void QuaternionToOldJagexAngles(int& arg1, int& arg2, const math::QuaternionT<double>& quaternion);
        auto CreateEntityAtCoordinate(int arg1, int arg2, int arg3, const shared_ptr<World>& world);
        static int64_t MIN_HORIZONTAL_ANGLE;        // = 4600745857866792960
        static int64_t MAX_HORIZONTAL_ANGLE;        // = 4607984497500094464
        static int32_t CANVAS_HORIZONTAL_FOV_SCALE; // = 1069823792
        static float VERTICAL_FOV_DEFAULT;          // = 90.0f
        static float HORIZONTAL_FOV_DEFAULT;        // = 90.0f
        static int32_t MIN_XA;                      // = 128
        static int32_t MAX_XA;                      // = 384

    private:
        int field_0;
    };

    // 0x100d43260
    int64_t CameraHelpers::MIN_HORIZONTAL_ANGLE = 4600745857866792960;

    // 0x100d43268
    int64_t CameraHelpers::MAX_HORIZONTAL_ANGLE = 4607984497500094464;

    // 0x100d43270
    int32_t CameraHelpers::CANVAS_HORIZONTAL_FOV_SCALE = 1069823792;

    // 0x100d43274
    float CameraHelpers::VERTICAL_FOV_DEFAULT = 90.0f;

    // 0x100d43278
    float CameraHelpers::HORIZONTAL_FOV_DEFAULT = 90.0f;

    // 0x100d4327c
    int32_t CameraHelpers::MIN_XA = 128;

    // 0x100d43280
    int32_t CameraHelpers::MAX_XA = 384;

    // 0x10061ef80
    void CameraHelpers::JagexAnglesToQuaternion(math::QuaternionT<double>& quaternion, int arg2, int arg3, int arg4) {
        Vector3T<double> local_88;
        Vector3T<double> local_50;

        float fVar1 = (float)math::conversion::JagexAngleToRadians(arg2);
        double local_28 = (double)fVar1;
        fVar1 = (float)math::conversion::JagexAngleToRadians(arg3);
        double local_38 = (double)fVar1;
        float local_2c = (float)math::conversion::JagexAngleToRadians(arg4);
        quaternion.FromAxisAngle(*PTR_UP_100ee66b0, local_38);
        local_50** PTR_RIGHT_100ee66c8;
        local_50 *= -1.0;
        QuaternionT<double> local_70;
        local_70.FromAxisAngle(local_50, local_28);
        JagMultiply(quaternion, &local_70);
        if (local_2c != 0.0) {
            local_28 = (double)local_2c;
            local_88** PTR_LOOK_100ee66b8;
            local_50 = local_88;
            local_70.FromAxisAngle(local_50, local_28);
            JagMultiply(quaternion, &local_70);
        }
    }

    // 0x10061f090
    void CameraHelpers::JagMultiply(math::QuaternionT<double>& quaternion1,
                                    const math::QuaternionT<double>& quaternion2) {
        auto puVar1 = quaternion1.second();
        *puVar1 = *puVar1 ^ 9223372036854775808;
        quaternion1 *= quaternion2;
        puVar1 = (unsigned long*)quaternion1.second();
        *puVar1 = *puVar1 ^ 9223372036854775808;
    }

    // 0x10061f0e0
    void CameraHelpers::QuaternionToJagexAngles(int& arg1, int& arg2, const math::QuaternionT<double>& quaternion) {
        uint64_t local_30;
        uint64_t local_28;
        uint64_t local_20;

        local_30** PTR_LOOK_100ee66b8;
        double dVar3 = (double)_acos(local_28);
        unsigned long uVar2 = -(unsigned long)(1.570796327 - dVar3 < 0.0);
        int iVar1 = math::conversion::RadiansToJagexAngle(
            (double)(~uVar2 & (unsigned long)(1.570796327 - dVar3) | (unsigned long)(7.853981634 - dVar3) & uVar2));
        field_0 = iVar1 % 16384;
        dVar3 = (double)_atan2(local_30, local_20);
        iVar1 = math::conversion::RadiansToJagexAngle(
            (double)(~-(unsigned long)(dVar3 < 0.0) & (unsigned long)dVar3 |
                     (unsigned long)(dVar3 + 6.283185307) & -(unsigned long)(dVar3 < 0.0)));
        arg1 = iVar1 % 16384;
    }

    // 0x10061f210
    void CameraHelpers::OldJagexAnglesToQuaternion(math::QuaternionT<double>& quaternion, int arg2, int arg3,
                                                   int arg4) {
        JagexAnglesToQuaternion(quaternion, arg2 << 3, arg3 << 3, arg4 << 3);
    }

    // 0x10061f230
    void CameraHelpers::QuaternionToOldJagexAngles(int& arg1, int& arg2, const math::QuaternionT<double>& quaternion) {
        QuaternionToJagexAngles(arg1, arg2, quaternion);
        field_0 = field_0 >> 3;
        arg1 = arg1 >> 3;
    }

    // 0x10061f250
    auto CameraHelpers::CreateEntityAtCoordinate(int arg1, int arg2, int arg3, const shared_ptr<World>& world) {
        auto result;
        int local_50[4];

        local_50[0] = 0;
        auto local_40 = graphics::GraphNode::Create<int>(*local_50);
        local_40->SetTranslationComponents((float)arg1, (float)arg3, (float)arg2);
        new (local_50) math::QuaternionT<float>();
        local_50->FromAxisAngle(*PTR_UP_100ee66d0, 0.0);
        local_40->SetRotation(*local_50);
        uint8_t local_31 = 255;
        int local_38 = 0;
        make_shared<Entity, graphics::GraphNode*&, shared_ptr<World> const&, EntityType, int>(
            &result, &local_40, world, (EntityType*)&local_31, &local_38);
        return result;
    }

} // namespace jag::game
