// libs/game/runetek5/camera/lookat/LookatOrientation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LookatOrientation.h"

namespace jag::game {
    // 0x100022b10: LookatOrientation::~LookatOrientation() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100029ea0: LookatOrientation::GetFinishTriggers(eastl::fixed_vector<int, 2ul>&) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002a770: LookatOrientation::~LookatOrientation() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10005fe40: LookatOrientation::SetOrientationYRotation(int) has the same machine code as oldscape::widgets::Widget::SetTextColour(unsigned int)

    // 0x10005fe50: LookatOrientation::SetOrientationXRotation(int) has the same machine code as oldscape::widgets::Widget::SetBorderColour(unsigned int)

    // 0x100060710: LookatOrientation::GetCurrentLookat() const has the same machine code as oldscape::widgets::ScrollBarWidget::GetThumbBounds() const

    // 0x10014d2f0: LookatOrientation::GetZRotation() const has the same machine code as oldscape::ApplicationContext::GetScreenRatio()

    // 0x10017a5a0: LookatOrientation::GetCurrentOrientation() const has the same machine code as http::HTTPRequest::GetData() const

    // 0x1001c2220: LookatOrientation::Ready() const has the same machine code as oldscape::MutationTracked<graphics::VolumetricScatteringParams>::IsDirty() const

    // 0x1003c00b0: LookatOrientation::SetOrientationXMovement(float) has the same machine code as jag::Camera::SetLeftClip(float)

    // 0x1003c00c0: LookatOrientation::SetOrientationZMovement(float) has the same machine code as jag::Camera::SetRightClip(float)

    // 0x10061d000
    void LookatOrientation::ProcessServerUpdate(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
        const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback) {

        QuaternionT<float> local_28(arg1, false);
        *m_pCurrentOrientation = local_28;
        field_80 = 1;
    }

    // 0x10061d050
    void LookatOrientation::SetLookatVector(math::Vector3T<float> vector3) {
        QuaternionT<float> local_58;
        Vector3T<float> local_48;

        m_pCurrentOrientation->SetToIdentity();
        math::QuaternionT<float> local_68;
        Matrix33T<float> local_90;
        ColourHSL local_38(0.0, 1.0, 0.0);
        math::Matrix33T<float>::LookAt(local_90, &local_48);
        local_90.Transpose();
        local_68 = math::QuaternionT<float>::FromRotationMatrix(local_90);
        local_58.Conjugate();
        local_68 = local_58;
        m_pCurrentOrientation->Set(local_68);
        field_80 = 1;
    }

    // 0x10061d110
    uint64_t LookatOrientation::Service() {
        uint64_t uVar1;
        float fVar2;
        AABB local_70;
        QuaternionT<float> local_58;
        ReturnValue local_40;
        float local_38;

        if ((m_orientationXRotation != 0) || (m_orientationYRotation != 0)) {
            local_70 = math::QuaternionT<float>();
            fVar2 = (float)math::conversion::JagexAngleToRadians(m_orientationXRotation);
            local_70.FromAxisAngle(*PTR_RIGHT_100ee66f0, fVar2);
            *m_pCurrentOrientation *= &local_70;
            local_38 = *(float*)(PTR_UP_100ee66d0 + 8);
            local_40 = *(ReturnValue*)PTR_UP_100ee66d0;
            local_58.Conjugate();
            local_40 *= &local_58;
            local_40 = math::Vector3T<float>::Normalize();
            fVar2 = (float)math::conversion::JagexAngleToRadians(m_orientationYRotation);
            local_70.FromAxisAngle(local_40, -fVar2);
            *m_pCurrentOrientation *= &local_70;
            m_orientationXRotation = 0;
            m_orientationYRotation = 0;
        }
        if ((m_orientationZMovement == 0.0) && (m_orientationXMovement == 0.0)) {
            uVar1 = 0;
        } else {
            local_70 = oldscape::dash3d::ModelLit::AABB();
            new (&local_40) math::Vector3T();
            local_38 = m_orientationZMovement;
            local_40 *= m_pCurrentOrientation;
            local_58.Vector3T<float>(local_40);
            local_70 += local_58;
            local_40 = math::Vector3T<float>::SetToZero();
            local_40._0_4_ = m_orientationXMovement;
            local_40 *= m_pCurrentOrientation;
            local_58.Vector3T<float>(local_40);
            local_70 += local_58;
            local_58 + *m_currentLookat;
            field_112 = local_58;
            ClampBoundary(field_112);
            m_orientationXMovement = 0.0;
            m_orientationZMovement = 0.0;
            uVar1 = 1;
        }
        return uVar1;
    }

    // 0x10061d2c0
    void LookatOrientation::ClampBoundary(math::Vector3T<double>& vector3) const {
        double dVar1 = field_32;
        if ((dVar1 != -1.0) && (field_112 <= dVar1 && dVar1 != field_112)) {
            *(double*)vector3 = dVar1;
        }
        dVar1 = field_56;
        if ((dVar1 != -1.0) && (dVar1 < field_112)) {
            *(double*)vector3 = dVar1;
        }
        dVar1 = field_40;
        if ((dVar1 != -1.0) && (field_120 <= dVar1 && dVar1 != field_120)) {
            *(double*)(vector3 + 8) = dVar1;
        }
        dVar1 = field_64;
        if ((dVar1 != -1.0) && (dVar1 < field_120)) {
            *(double*)(vector3 + 8) = dVar1;
        }
        dVar1 = field_48;
        if ((dVar1 != -1.0) && (field_128 <= dVar1 && dVar1 != field_128)) {
            *(double*)(vector3 + 16) = dVar1;
        }
        dVar1 = field_72;
        if ((dVar1 != -1.0) && (dVar1 < field_128)) {
            *(double*)(vector3 + 16) = dVar1;
        }
    }

    // 0x10061d360
    void LookatOrientation::SetMaxDistanceClamping(const math::Vector3T<float>& vector3, int arg2, int arg3, int arg4,
                                                   int arg5, int arg6, int arg7) {
        double dVar1 = -1.0;
        double dVar2 = -1.0;
        if (arg2 != -1) {
            dVar2 = (double)(*(float*)vector3 - (float)(arg2 << 7));
        }
        field_32 = dVar2;
        dVar2 = -1.0;
        if (arg3 != -1) {
            dVar2 = (double)((float)(arg3 << 7) + *(float*)vector3);
        }
        field_56 = dVar2;
        dVar2 = -1.0;
        if (arg6 != -1) {
            dVar2 = (double)(*(float*)(vector3 + 4) - (float)(arg6 << 7));
        }
        field_40 = dVar2;
        dVar2 = -1.0;
        if (arg7 != -1) {
            dVar2 = (double)((float)(arg7 << 7) + *(float*)(vector3 + 4));
        }
        field_64 = dVar2;
        dVar2 = -1.0;
        if (arg4 != -1) {
            dVar2 = (double)(*(float*)(vector3 + 8) - (float)(arg4 << 7));
        }
        field_48 = dVar2;
        if (arg5 != -1) {
            dVar1 = (double)((float)(arg5 << 7) + *(float*)(vector3 + 8));
        }
        field_72 = dVar1;
    }

    // 0x10061d450
    uint64_t LookatOrientation::GetLookatData(LookatData& lookatData) {
        return 0;
    }

    // 0x10061d460
    void LookatOrientation::GetLookatPosition(math::Vector3T<double>& vector3) const {
        vector3 = *m_currentLookat;
    }

    // 0x10061d480
    void LookatOrientation::SetCurrentLookat(const math::Vector3T<double>& vector3) {
        *m_currentLookat = vector3;
    }

    // 0x10061d490
    void LookatOrientation::GetDestinationLookat(math::Vector3T<double>& vector3) const {
        vector3 = field_112;
    }

    // 0x10061d4b0
    void LookatOrientation::GetLookatFine(CoordFine& coordFine) const {
        uint64_t extraout_var;
        uint64_t local_20[2];

        coordFine.field_0 = 4294967295;
        uint8_t uVar1 = GetCurrentLookat();
        local_20[0] =
            math::Vector3FromVector3T<double>(*((Vector3T<double>*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1)));
        coordFine.field_4.SetXYZ(*local_20);
    }

    // 0x10061d4f0
    void LookatOrientation::ToString(eastl::fixed_string<char, 512>& str) const {
        uint8_t local_80[88];

        local_80->CoordFine<double>(0, field_112);
        new ((local_80 + 16)) eastl::fixed_string<char, 32>();
        auto pcVar1 = local_80->ToString<32, true>(*((local_80 + 16)));
        str.sprintf("{ LookatOrientation : %s }", pcVar1);
        str.begin();
        ((local_80 + 16))->~fixed_string();
    }

} // namespace jag::game
