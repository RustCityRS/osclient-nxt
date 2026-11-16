// libs/game/runetek5/camera/lookat/LookatOrientation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LookatOrientation.h"

namespace jag::game {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LookatOrientation::~LookatOrientation();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    LookatOrientation::GetFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&);

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    LookatOrientation::~LookatOrientation();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LookatOrientation::~LookatOrientation();

    // 0x10005fe40: the linker folded this into oldscape::widgets::Widget::SetTextColour(unsigned int), which has identical code
    LookatOrientation::SetOrientationYRotation(int);

    // 0x10005fe50: the linker folded this into oldscape::widgets::Widget::SetBorderColour(unsigned int), which has identical code
    LookatOrientation::SetOrientationXRotation(int);

    // 0x100060710: the linker folded this into oldscape::widgets::ScrollBarWidget::GetThumbBounds() const, which has identical code
    AABB LookatOrientation::GetCurrentLookat() const;

    // 0x10014d2f0: the linker folded this into oldscape::ApplicationContext::GetScreenRatio(), which has identical code
    LookatOrientation::GetZRotation() const;

    // 0x10017a5a0: the linker folded this into http::HTTPRequest::GetData() const, which has identical code
    LookatOrientation::GetCurrentOrientation() const;

    // 0x1001c2220: the linker folded this into oldscape::MutationTracked<graphics::VolumetricScatteringParams>::IsDirty() const, which has identical code
    LookatOrientation::Ready() const;

    // 0x1003c00b0: the linker folded this into jag::Camera::SetLeftClip(float), which has identical code
    LookatOrientation::SetOrientationXMovement(float);

    // 0x1003c00c0: the linker folded this into jag::Camera::SetRightClip(float), which has identical code
    LookatOrientation::SetOrientationZMovement(float);

    // 0x10061d000, 64 bytes, placed by class name and debug map
    // LookatOrientation::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, std::function<shared_ptr<Entity> (CameraTrackableType, int)> const&)
    /* LookatOrientation::ProcessServerUpdate(PacketT<Array<unsigned char,
   BucketAllocatorEASTL> >&, std::function<shared_ptr<Entity>
   (CameraTrackableType, int)> const&) */

    void LookatOrientation::ProcessServerUpdate(PacketT* param_1, function* param_2) {
        QuaternionT<float> local_28[16];

        math::QuaternionT<float>::QuaternionT(local_28, param_1, false);
        math::Rect<float>::operator=((Rect<float>*)m_pCurrentOrientation, (Rect*)local_28);
        field_80 = 1;
    }

    // 0x10061d050, 192 bytes, placed by class name and debug map
    // LookatOrientation::SetLookatVector(math::Vector3T<float>)
    void LookatOrientation::SetLookatVector(undefined8 param_1, undefined4 param_2, LookatOrientation* this) {
        Matrix33T<float> local_90[40];
        QuaternionT<float> local_68[16];
        QuaternionT<float> local_58[16];
        undefined8 local_48;
        undefined4 local_40;
        ColourHSL local_38;

        local_48 = param_1;
        local_40 = param_2;
        m_pCurrentOrientation->SetToIdentity();
        math::QuaternionT<float>::QuaternionT(local_68);
        math::Matrix33T<float>::Matrix33T(local_90);
        new (&local_38) math::ColourHSL(0.0, 1.0, 0.0);
        math::Matrix33T<float>::LookAt(local_38._0_8_, local_38.field_8, local_90, &local_48);
        local_90->Transpose();
        local_68->FromRotationMatrix(local_90);
        local_58->Conjugate();
        math::Rect<float>::operator=((Rect<float>*)local_68, (Rect*)local_58);
        (m_pCurrentOrientation, (Vector4T*)local_68)->Set();
        field_80 = 1;
    }

    // 0x10061d110, 432 bytes, placed by class name and debug map
    // LookatOrientation::Service()
    undefined8 LookatOrientation::Service() {
        undefined8 uVar1;
        float fVar2;
        AABB local_70;
        QuaternionT<float> local_58[24];
        undefined8 local_40;
        float local_38;

        if ((m_orientationXRotation != 0) || (m_orientationYRotation != 0)) {
            new (&local_70) math::QuaternionT<float>();
            fVar2 = (float)math::conversion::JagexAngleToRadians(m_orientationXRotation);
            local_70.FromAxisAngle(PTR_RIGHT_100ee66f0, fVar2);
            math::QuaternionT<float>::operator*=((QuaternionT<float>*)m_pCurrentOrientation, (QuaternionT*)&local_70);
            local_38 = *(float*)(PTR_UP_100ee66d0 + 8);
            local_40 = *(undefined8*)PTR_UP_100ee66d0;
            local_58->Conjugate();
            math::Vector3T<float>::operator*=((Vector3T<float>*)&local_40, (QuaternionT*)local_58);
            local_40.Normalize();
            fVar2 = (float)math::conversion::JagexAngleToRadians(m_orientationYRotation);
            local_70.FromAxisAngle((Vector3T*)&local_40, -fVar2);
            math::QuaternionT<float>::operator*=((QuaternionT<float>*)m_pCurrentOrientation, (QuaternionT*)&local_70);
            m_orientationXRotation = 0;
            m_orientationYRotation = 0;
        }
        if ((m_orientationZMovement == 0.0) && (m_orientationXMovement == 0.0)) {
            uVar1 = 0;
        } else {
            new (&local_70) oldscape::dash3d::ModelLit::AABB();
            new (&local_40) math::Vector3T<int>();
            local_38 = m_orientationZMovement;
            math::Vector3T<float>::operator*=((Vector3T<float>*)&local_40, (QuaternionT*)m_pCurrentOrientation);
            math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)local_58, (Vector3T*)&local_40);
            math::Vector3T<double>::operator+=((Vector3T<double>*)&local_70, (Vector3T*)local_58);
            local_40.SetToZero();
            local_40 = CONCAT44(local_40._4_4_, m_orientationXMovement);
            math::Vector3T<float>::operator*=((Vector3T<float>*)&local_40, (QuaternionT*)m_pCurrentOrientation);
            math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)local_58, (Vector3T*)&local_40);
            math::Vector3T<double>::operator+=((Vector3T<double>*)&local_70, (Vector3T*)local_58);
            math::operator+((math*)local_58, (Vector3T*)m_currentLookat, (Vector3T*)&local_70);
            math::Vector3T<double>::operator=((Vector3T<double>*)&field_112, (Vector3T*)local_58);
            ClampBoundary(this, (Vector3T*)&field_112);
            m_orientationXMovement = 0.0;
            m_orientationZMovement = 0.0;
            uVar1 = 1;
        }
        return uVar1;
    }

    // 0x10061d2c0, 160 bytes, placed by class name and debug map
    // LookatOrientation::ClampBoundary(math::Vector3T<double>&) const
    void LookatOrientation::ClampBoundary(Vector3T* param_1) {
        double dVar1;

        dVar1 = field_32;
        if ((dVar1 != -1.0) && (field_112 <= dVar1 && dVar1 != field_112)) {
            *(double*)param_1 = dVar1;
        }
        dVar1 = field_56;
        if ((dVar1 != -1.0) && (dVar1 < field_112)) {
            *(double*)param_1 = dVar1;
        }
        dVar1 = field_40;
        if ((dVar1 != -1.0) && (field_120 <= dVar1 && dVar1 != field_120)) {
            *(double*)(param_1 + 8) = dVar1;
        }
        dVar1 = field_64;
        if ((dVar1 != -1.0) && (dVar1 < field_120)) {
            *(double*)(param_1 + 8) = dVar1;
        }
        dVar1 = field_48;
        if ((dVar1 != -1.0) && (field_128 <= dVar1 && dVar1 != field_128)) {
            *(double*)(param_1 + 16) = dVar1;
        }
        dVar1 = field_72;
        if ((dVar1 != -1.0) && (dVar1 < field_128)) {
            *(double*)(param_1 + 16) = dVar1;
        }
    }

    // 0x10061d360, 240 bytes, placed by class name and debug map
    // LookatOrientation::SetMaxDistanceClamping(math::Vector3T<float> const&, int, int, int, int, int, int)
    void LookatOrientation::SetMaxDistanceClamping(Vector3T* param_1, int param_2, int param_3, int param_4,
                                                   int param_5, int param_6, int param_7) {
        double dVar1;
        double dVar2;

        dVar1 = -1.0;
        dVar2 = -1.0;
        if (param_2 != -1) {
            dVar2 = (double)(*(float*)param_1 - (float)(param_2 << 7));
        }
        field_32 = dVar2;
        dVar2 = -1.0;
        if (param_3 != -1) {
            dVar2 = (double)((float)(param_3 << 7) + *(float*)param_1);
        }
        field_56 = dVar2;
        dVar2 = -1.0;
        if (param_6 != -1) {
            dVar2 = (double)(*(float*)(param_1 + 4) - (float)(param_6 << 7));
        }
        field_40 = dVar2;
        dVar2 = -1.0;
        if (param_7 != -1) {
            dVar2 = (double)((float)(param_7 << 7) + *(float*)(param_1 + 4));
        }
        field_64 = dVar2;
        dVar2 = -1.0;
        if (param_4 != -1) {
            dVar2 = (double)(*(float*)(param_1 + 8) - (float)(param_4 << 7));
        }
        field_48 = dVar2;
        if (param_5 != -1) {
            dVar1 = (double)((float)(param_5 << 7) + *(float*)(param_1 + 8));
        }
        field_72 = dVar1;
    }

    // 0x10061d450, 16 bytes, placed by class name and debug map
    // LookatOrientation::GetLookatData(LookatData&)
    undefined8 LookatOrientation::GetLookatData(LookatData* param_1) {
        return 0;
    }

    // 0x10061d460, 32 bytes, placed by class name and debug map
    // LookatOrientation::GetLookatPosition(math::Vector3T<double>&) const
    void LookatOrientation::GetLookatPosition(Vector3T* param_1) {
        math::Vector3T<double>::operator=((Vector3T<double>*)param_1, (Vector3T*)m_currentLookat);
    }

    // 0x10061d480, 16 bytes, placed by class name and debug map
    // LookatOrientation::SetCurrentLookat(math::Vector3T<double> const&)
    void LookatOrientation::SetCurrentLookat(Vector3T* param_1) {
        math::Vector3T<double>::operator=((Vector3T<double>*)m_currentLookat, param_1);
    }

    // 0x10061d490, 32 bytes, placed by class name and debug map
    // LookatOrientation::GetDestinationLookat(math::Vector3T<double>&) const
    void LookatOrientation::GetDestinationLookat(Vector3T* param_1) {
        math::Vector3T<double>::operator=((Vector3T<double>*)param_1, (Vector3T*)&field_112);
    }

    // 0x10061d4b0, 64 bytes, placed by class name and debug map
    // LookatOrientation::GetLookatFine(CoordFine&) const
    void LookatOrientation::GetLookatFine(CoordFine* param_1) {
        math* this_00;
        CoordFine* pCVar1;
        undefined8 local_20[2];

        param_1->field_0 = 4294967295;
        pCVar1 = param_1;
        this_00 = (math*)(*(code*)field_0[4])();
        local_20[0] = math::Vector3FromVector3T<double>(this_00, (Vector3T*)pCVar1);
        (&param_1->field_4, (Vector3T*)local_20)->SetXYZ();
    }

    // 0x10061d4f0, 176 bytes, placed by class name and debug map
    // LookatOrientation::ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const
    void LookatOrientation::ToString(fixed_string* param_1) {
        char* pcVar1;
        undefined1 local_80[88];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        CoordFine::CoordFine<double>((CoordFine*)local_80, 0, (Vector3T*)&field_112);
        new ((local_80 + 16)) eastl::fixed_string<char, 32, true, eastl::allocator>();
        pcVar1 = CoordFine::ToString<32, true>((CoordFine*)local_80, (fixed_string*)(local_80 + 16));
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, "{ LookatOrientation : %s }", pcVar1);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        /* WARNING: Subroutine does not return */
        ((local_80 + 16))->~fixed_string();
    }

} // namespace jag::game
