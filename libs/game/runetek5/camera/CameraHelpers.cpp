// libs/game/runetek5/camera/CameraHelpers.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class CameraHelpers {
    public:
        void JagexAnglesToQuaternion(math::QuaternionT<double>&, int, int, int);
        void JagMultiply(math::QuaternionT<double>&, math::QuaternionT<double> const&);
        void QuaternionToJagexAngles(int&, int&, math::QuaternionT<double> const&);
        void OldJagexAnglesToQuaternion(math::QuaternionT<double>&, int, int, int);
        void QuaternionToOldJagexAngles(int&, int&, math::QuaternionT<double> const&);
        CameraHelpers* CreateEntityAtCoordinate(int, int, int, shared_ptr<World> const&);
        static /* 8 bytes */ MIN_HORIZONTAL_ANGLE;         // = 4600745857866792960
        static /* 8 bytes */ MAX_HORIZONTAL_ANGLE;         // = 4607984497500094464
        static /* 4 bytes */ CANVAS_HORIZONTAL_FOV_SCALE;  // = 1069823792
        static float /* 4 bytes */ VERTICAL_FOV_DEFAULT;   // = 90.0f
        static float /* 4 bytes */ HORIZONTAL_FOV_DEFAULT; // = 90.0f
        static /* 4 bytes */ MIN_XA;                       // = 128
        static /* 4 bytes */ MAX_XA;                       // = 384

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100d43260, 8 bytes, __const
    CameraHelpers::MIN_HORIZONTAL_ANGLE = 4600745857866792960;

    // 0x100d43268, 8 bytes, __const
    CameraHelpers::MAX_HORIZONTAL_ANGLE = 4607984497500094464;

    // 0x100d43270, 4 bytes, __const
    CameraHelpers::CANVAS_HORIZONTAL_FOV_SCALE = 1069823792;

    // 0x100d43274, 4 bytes, __const
    float CameraHelpers::VERTICAL_FOV_DEFAULT = 90.0f;

    // 0x100d43278, 4 bytes, __const
    float CameraHelpers::HORIZONTAL_FOV_DEFAULT = 90.0f;

    // 0x100d4327c, 4 bytes, __const
    CameraHelpers::MIN_XA = 128;

    // 0x100d43280, 4 bytes, __const
    CameraHelpers::MAX_XA = 384;

    // 0x10061ef80, 272 bytes, placed by class name and debug map
    // CameraHelpers::JagexAnglesToQuaternion(math::QuaternionT<double>&, int, int, int)
    void CameraHelpers::JagexAnglesToQuaternion(QuaternionT* param_1, int param_2, int param_3, int param_4) {
        QuaternionT<double>* this;
        float fVar1;
        undefined1 local_88[56];
        Vector3T<double> local_50[24];
        double local_38;
        float local_2c;
        double local_28;

        fVar1 = (float)math::conversion::JagexAngleToRadians(param_2);
        local_28 = (double)fVar1;
        fVar1 = (float)math::conversion::JagexAngleToRadians(param_3);
        local_38 = (double)fVar1;
        local_2c = (float)math::conversion::JagexAngleToRadians(param_4);
        param_1->FromAxisAngle(PTR_UP_100ee66b0, local_38);
        math::operator*((math*)local_50, (Vector3T*)PTR_RIGHT_100ee66c8, param_1);
        math::Vector3T<double>::operator*=(local_50, -1.0);
        this = (QuaternionT<double>*)(local_88 + 24);
        math::QuaternionT<double>::QuaternionT(this);
        FromAxisAngle(local_50, local_28);
        JagMultiply(param_1, (QuaternionT*)this);
        if (local_2c != 0.0) {
            local_28 = (double)local_2c;
            math::operator*((math*)local_88, (Vector3T*)PTR_LOOK_100ee66b8, param_1);
            math::Vector3T<double>::operator=(local_50, (Vector3T*)local_88);
            ((local_88 + 24))->FromAxisAngle(local_50, local_28);
            JagMultiply(param_1, (QuaternionT*)(local_88 + 24));
        }
    }

    // 0x10061f090, 80 bytes, placed by class name and debug map
    // CameraHelpers::JagMultiply(math::QuaternionT<double>&, math::QuaternionT<double> const&)
    void CameraHelpers::JagMultiply(QuaternionT* param_1, QuaternionT* param_2) {
        ulong* puVar1;

        puVar1 = (ulong*)param_1->second();
        *puVar1 = *puVar1 ^ 9223372036854775808;
        math::QuaternionT<double>::operator*=((QuaternionT<double>*)param_1, param_2);
        puVar1 = (ulong*)param_1->second();
        *puVar1 = *puVar1 ^ 9223372036854775808;
    }

    // 0x10061f0e0, 224 bytes, placed by class name and debug map
    // CameraHelpers::QuaternionToJagexAngles(int&, int&, math::QuaternionT<double> const&)
    void CameraHelpers::QuaternionToJagexAngles(int* param_1, int* param_2, QuaternionT* param_3) {
        int iVar1;
        ulong uVar2;
        double dVar3;
        undefined1 local_30[16];
        undefined8 local_20;

        math::operator*((math*)local_30, (Vector3T*)PTR_LOOK_100ee66b8, param_3);
        dVar3 = (double)_acos(local_30._8_8_);
        uVar2 = -(ulong)(1.570796327 - dVar3 < 0.0);
        iVar1 = ((double)(~uVar2 & (ulong)(1.570796327 - dVar3) | (ulong)(7.853981634 - dVar3) & uVar2))
                    ->RadiansToJagexAngle();
        *param_1 = iVar1 % 16384;
        dVar3 = (double)_atan2(local_30._0_8_, local_20);
        iVar1 = ((double)(~-(ulong)(dVar3 < 0.0) & (ulong)dVar3 | (ulong)(dVar3 + 6.283185307) & -(ulong)(dVar3 < 0.0)))
                    ->RadiansToJagexAngle();
        *param_2 = iVar1 % 16384;
    }

    // 0x10061f210, 32 bytes, placed by class name
    // CameraHelpers::OldJagexAnglesToQuaternion(math::QuaternionT<double>&, int, int, int)
    void CameraHelpers::OldJagexAnglesToQuaternion(QuaternionT* param_1, int param_2, int param_3, int param_4) {
        JagexAnglesToQuaternion(param_1, param_2 << 3, param_3 << 3, param_4 << 3);
    }

    // 0x10061f230, 32 bytes, placed by class name
    // CameraHelpers::QuaternionToOldJagexAngles(int&, int&, math::QuaternionT<double> const&)
    void CameraHelpers::QuaternionToOldJagexAngles(int* param_1, int* param_2, QuaternionT* param_3) {
        QuaternionToJagexAngles(param_1, param_2, param_3);
        *param_1 = *param_1 >> 3;
        *param_2 = *param_2 >> 3;
    }

    // 0x10061f250, 176 bytes, placed by class name
    // CameraHelpers::CreateEntityAtCoordinate(int, int, int, shared_ptr<World> const&)
    CameraHelpers* CameraHelpers::CreateEntityAtCoordinate(int param_1, int param_2, int param_3, shared_ptr* param_4) {
        int local_50[4];
        GraphNode* local_40;
        int local_38;
        EntityType local_31;

        local_50[0] = 0;
        local_40 = graphics::GraphNode::Create<int>(local_50);
        local_40->SetTranslationComponents((float)param_1, (float)param_3, (float)param_2);
        new (local_50) math::QuaternionT<float>();
        local_50->FromAxisAngle(PTR_UP_100ee66d0, 0.0);
        local_40->SetRotation(local_50);
        local_31 = 255;
        local_38 = 0;
        make_shared<Entity, graphics::GraphNode*&, shared_ptr<World> const&, EntityType, int>(
            (jag*)this, &local_40, param_4, &local_31, &local_38);
        return this;
    }

} // namespace jag::game
