// libs/game/runetek5/scene/entities/components/FacingController.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class FacingController {
    public:
        // virtual methods in vtable order
        virtual void RenderDebug(game::CoordFine const&, game::HeightMap const&, game::LinkMap const&);
        FacingController();
        void SetBaseTurnSpeed(int);
        void SetFaceEntityID(int, game::EntityType);
        void GetNextRotation(math::Vector3T<float> const&, math::Vector3T<float> const&,
                             math::QuaternionT<float> const&, bool);
        void SelectRotation(math::Vector3T<float> const&, math::Vector3T<float> const&, math::QuaternionT<float> const&,
                            bool);
        QuaternionT* GetNextRotationInner(math::Vector3T<float> const&, math::QuaternionT<float> const&);
        void TrackPosition(math::Vector3T<float> const&, math::QuaternionT<float> const&, math::Vector3T<float> const&);
        void TrackAngle(math::QuaternionT<float> const&, float);
        float GetTurnSpeed() const;
        SetTurnSpeedMultiplier(float);
        byte IsTurning() const;
        bool FacingEntity() const;
        IsFinished() const;
        ~FacingController();
        void SetFaceMovement(float);
        bool IsTurningLeft() const;
        void GetFinalRotation() const;
        static /* 16 bytes */ INVALID_RADIAN; // = { -998653952, 1075235812, -1072247836, 995783694 }

        // data members, from how the methods use this: 164 bytes
        undefined** field_0;     // offset 0, vtable pointer
        float field_8;           // offset 8
        float field_12;          // offset 12
        int field_16;            // offset 16
        int m_faceEntityID;      // offset 20
        SmoothRotation field_24; // offset 24
        char _unknown_112[24];
        char field_136; // offset 136
        char _unknown_137[15];
        float m_faceMovement; // offset 152
        float field_156;      // offset 156
        char _unknown_160[4];
    };

    // 0x100d42c68, 16 bytes, __const
    FacingController::INVALID_RADIAN = {-998653952, 1075235812, -1072247836, 995783694};

    // 0x1003e76e0, 128 bytes, base-object constructor, placed by class name
    // FacingController::FacingController()
    void FacingController::FacingController() {
        _func_decltype_nullptr* in_RSI;

        field_0 = &PTR_RenderDebug_100efe7c0;
        field_8 = 0.0;
        field_12 = 1.0;
        field_16 = -1;
        m_faceEntityID = -1;
        new (field_24) math::SmoothRotation();
        new (&field_120, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_136 = '\x7f';
        new (&field_140, -999.0, -999.0, -999.0) math::ColourHSL();
        m_faceMovement = -999.0;
        field_156 = -999.0;
    }

    // 0x1003e7770, 16 bytes, complete-object constructor, placed by class name
    // FacingController::FacingController(): jumps straight to the base-object constructor

    // 0x1003e7780, 32 bytes, placed by class name
    // FacingController::SetBaseTurnSpeed(int)
    void FacingController::SetBaseTurnSpeed(int param_1) {
        field_8 = (float)math::conversion::JagexAngleToRadians(param_1);
    }

    // 0x1003e77a0, 64 bytes, placed by class name
    // FacingController::SetFaceEntityID(int, game::EntityType)
    void FacingController::SetFaceEntityID(int param_1, char param_3) {
        if ((m_faceEntityID != param_1) || (field_136 != param_3)) {
            weak_ptr<PathingEntity>::reset();
            m_faceEntityID = param_1;
            field_136 = param_3;
        }
    }

    // 0x1003e7820, 64 bytes, placed by class name
    // FacingController::GetNextRotation(math::Vector3T<float> const&, math::Vector3T<float> const&, math::QuaternionT<float> const&, bool)
    void FacingController::GetNextRotation(Vector3T* param_1, Vector3T* param_2, QuaternionT* param_3, bool param_4) {
        SelectRotation(this, param_1, param_2, param_3, param_4);
        GetNextRotationInner(this, param_2, param_3);
    }

    // 0x1003e7860, 416 bytes, placed by class name
    // FacingController::SelectRotation(math::Vector3T<float> const&, math::Vector3T<float> const&, math::QuaternionT<float> const&, bool)
    void FacingController::SelectRotation(Vector3T* param_1, Vector3T* param_2, QuaternionT* param_3, bool param_4) {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        int iVar3;
        vector* pvVar4;
        Entity* this_01;
        Vector3T* pVVar5;
        PathingEntity* pPVar6;
        shared_ptr<PathingEntity> local_50[20];
        float local_3c;

        local_3c = m_faceMovement;
        m_faceMovement = -999.0;
        pVVar5 = param_1;
        cVar1 = (&field_120)->expired();
        if (cVar1 != '\0') {
            this_00 = &field_140;
            pvVar4 = this_00->SSOBeginPtr(pVVar5);
            if ((*(float*)pvVar4 != -999.0) && (!param_4)) {
                TrackPosition(this, param_1, param_3, (Vector3T*)this_00);
                field_16 = 1;
                pvVar4 = this_00->SSOBeginPtr(param_1);
                *(undefined4*)pvVar4 = 3296313344;
                return;
            }
            if ((field_156 != -999.0) && (!param_4)) {
                TrackAngle(this, param_3, field_156);
                field_16 = 3;
                field_156 = -999.0;
                return;
            }
            if (local_3c == -999.0) {
                return;
            }
            TrackAngle(this, param_3, local_3c);
            field_16 = 2;
            return;
        }
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (field_16 == 0) {
            iVar2 = m_faceEntityID;
            pPVar6 = (PathingEntity*)shared_ptr<PathingEntity>::operator->(local_50);
            iVar3 = pPVar6->GetSlotID();
            if ((iVar2 == iVar3) || (field_136 == '\x7f'))
                goto LAB_1003e79a3;
        }
        this_01 = (Entity*)shared_ptr<PathingEntity>::operator->(local_50);
        pVVar5 = (Vector3T*)this_01->GetTranslation();
        TrackPosition(this, param_2, param_3, pVVar5);
        field_16 = 0;
        pPVar6 = (PathingEntity*)shared_ptr<PathingEntity>::operator->(local_50);
        iVar2 = pPVar6->GetSlotID();
        m_faceEntityID = iVar2;
    LAB_1003e79a3:
        local_50->~shared_ptr();
    }

    // 0x1003e7a00, 192 bytes, placed by class name
    // FacingController::GetNextRotationInner(math::Vector3T<float> const&, math::QuaternionT<float> const&)
    QuaternionT* FacingController::GetNextRotationInner(Vector3T* param_1, QuaternionT* param_2) {
        undefined1* this_00;
        char cVar1;
        QuaternionT* pQVar2;
        Entity* this_01;
        Vector3T* pVVar3;
        shared_ptr<PathingEntity> local_40[16];

        this_00 = field_24;
        cVar1 = this_00->ShowSkybox();
        if ((cVar1 == '\0') && (field_16 != 0)) {
            return param_2;
        }
        if ((field_16 == 0) && (cVar1 = (&field_120)->expired(), cVar1 == '\0')) {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            this_01 = (Entity*)shared_ptr<PathingEntity>::operator->(local_40);
            pVVar3 = (Vector3T*)this_01->GetTranslation();
            local_40->~shared_ptr();
            pQVar2 = (QuaternionT*)this_00->RotateWithCheck(pVVar3, param_1, param_2);
        } else {
            pQVar2 = (QuaternionT*)this_00->Rotate();
        }
        return pQVar2;
    }

    // 0x1003e7b00, 64 bytes, placed by class name
    // FacingController::TrackPosition(math::Vector3T<float> const&, math::QuaternionT<float> const&, math::Vector3T<float> const&)
    void FacingController::TrackPosition(Vector3T* param_1, QuaternionT* param_2, Vector3T* param_3) {
        float fVar1;

        fVar1 = (float)GetTurnSpeed(this);
        (field_24, param_1, param_2, fVar1, param_3)->Set();
    }

    // 0x1003e7b40, 64 bytes, placed by class name
    // FacingController::TrackAngle(math::QuaternionT<float> const&, float)
    void FacingController::TrackAngle(QuaternionT* param_1, float param_2) {
        float fVar1;

        fVar1 = (float)GetTurnSpeed(this);
        (field_24, param_1, fVar1, param_2)->Set();
    }

    // 0x1003e7b80, 16 bytes, inline, placed by class name
    // FacingController::GetTurnSpeed() const
    float FacingController::GetTurnSpeed() {
        return field_12 * field_8;
    }

    // 0x1003e7b90, 832 bytes, placed by class name
    // FacingController::RenderDebug(game::CoordFine const&, game::HeightMap const&, game::LinkMap const&)
    void FacingController::RenderDebug(CoordFine* param_1, HeightMap* param_2, LinkMap* param_3) {
        int iVar1;
        QuaternionT* pQVar2;
        long* plVar3;
        float fVar4;
        Matrix33T local_150[40];
        ColourHSL local_128;
        undefined1 local_118[64];
        undefined1 local_d8[64];
        undefined8 local_98;
        float local_90;
        undefined8 local_80;
        float local_78;
        ColourHSL local_70;
        undefined8 local_60;
        float local_58;
        undefined8 local_50;
        float local_48;
        undefined1 local_40[16];

        math::Matrix33Scaling<float>((math*)local_118, 64.0, 1.0, 64.0);
        fVar4 = 0.0;
        math::Matrix33RotationXY<float>((math*)local_d8, 0.0, 0.0);
        math::operator*(local_150, (Matrix33T*)local_118);
        local_58 = param_1->field_12;
        local_60._0_4_ = param_1->field_4;
        local_60._4_4_ = param_1->field_8;
        iVar1 = game::Entity::GetFloorHeightAtCoord(param_1, param_2, param_3, 1, 0);
        local_60 = CONCAT44((float)iVar1, (undefined4)local_60);
        pQVar2 = (QuaternionT*)field_24->GetVertex2();
        local_40._0_8_ = math::operator*(pQVar2, (Vector3T*)PTR_LOOK_100ee66e0);
        local_40._8_4_ = fVar4;
        local_50 = math::operator*((Vector3T*)local_40, 128.0);
        local_48 = fVar4;
        local_d8._0_8_ = math::operator*((Vector3T*)&local_50, 3.0);
        local_d8._8_4_ = fVar4;
        new (&local_70) math::ColourHSL(1.0, 1.0, -1.0);
        local_118._0_8_ = math::operator*((Vector3T*)local_d8, (Vector3T*)&local_70);
        local_118._8_4_ = 1.0;
        local_80 = math::operator+((Vector3T*)&local_60, (Vector3T*)local_118);
        local_78 = 1.0;
        new (local_118) math::Matrix44T<float>(local_150, (Vector3T*)&local_80);
        plVar3 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != (long*)0) {
            new (local_d8) oldscape::sidebars::SideBarData(-65536, 1);
            (**(code**)(*plVar3 + 24))(plVar3, &local_60, &local_80, (SideBarData*)local_d8);
        }
        plVar3 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != (long*)0) {
            new (local_d8) oldscape::sidebars::SideBarData(-65536, 1);
            (**(code**)(*plVar3 + 64))(plVar3, local_118, (SideBarData*)local_d8);
        }
        pQVar2 = (QuaternionT*)field_24->y();
        local_98 = math::operator*(pQVar2, (Vector3T*)PTR_LOOK_100ee66e0);
        local_90 = 1.0;
        local_70._0_8_ = math::operator*((Vector3T*)&local_98, 128.0);
        local_70.field_8 = 1.0;
        local_40._0_8_ = math::operator*((Vector3T*)&local_70, 3.0);
        fVar4 = 1.0;
        local_40._8_4_ = 1.0;
        new (&local_128) math::ColourHSL(1.0, 1.0, -1.0);
        local_d8._0_8_ = math::operator*((Vector3T*)local_40, (Vector3T*)&local_128);
        local_d8._8_4_ = fVar4;
        local_50 = math::operator+((Vector3T*)&local_60, (Vector3T*)local_d8);
        local_48 = fVar4;
        new (local_d8) math::Matrix44T<float>(local_150, (Vector3T*)&local_50);
        plVar3 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != (long*)0) {
            new (local_40) oldscape::sidebars::SideBarData(-16711681, 1);
            (**(code**)(*plVar3 + 24))(plVar3, &local_60, &local_50, (SideBarData*)local_40);
        }
        plVar3 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != (long*)0) {
            new (local_40) oldscape::sidebars::SideBarData(-16711681, 1);
            (**(code**)(*plVar3 + 64))(plVar3, local_d8, (SideBarData*)local_40);
        }
    }

    // 0x1003e9e60, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // FacingController::SetTurnSpeedMultiplier(float)
    /* Camera::SetVerticalFov(float) */

    void Camera::SetVerticalFov(float param_1) {
        m_verticalFov = param_1;
    }

    // 0x1003ea8d0, 16 bytes, inline, placed by class name
    // FacingController::IsTurning() const
    byte FacingController::IsTurning() {
        return IsFinished(this) ^ 1;
    }

    // 0x1003ea8e0, 32 bytes, inline, placed by class name
    // FacingController::FacingEntity() const
    bool FacingController::FacingEntity() {
        if (field_16 == 0) {
            return field_136 != '\x7f';
        }
        return false;
    }

    // 0x1003eaf60, 48 bytes, inline, placed by class name
    // FacingController::IsFinished() const
    undefined4 FacingController::IsFinished() {
        bool bVar1;
        undefined3 extraout_var;
        undefined4 uVar2;

        bVar1 = field_24->operator_cast_to_bool();
        uVar2 = CONCAT31(extraout_var, 1);
        if (bVar1) {
            uVar2 = field_24->IsFinished();
        }
        return uVar2;
    }

    // 0x1003f08b0, 16 bytes, complete-object destructor, inline, placed by class name
    // FacingController::~FacingController(): jumps straight to the base-object destructor

    // 0x1003f4190, 16 bytes, inline, placed by class name
    // FacingController::SetFaceMovement(float)
    void FacingController::SetFaceMovement(float param_1) {
        m_faceMovement = param_1;
    }

    // 0x1003f6c00, 48 bytes, inline, placed by class name
    // FacingController::IsTurningLeft() const
    bool FacingController::IsTurningLeft() {
        bool bVar1;

        bVar1 = field_24->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = field_24->GetResize();
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1003f6c30, 16 bytes, inline, placed by class name
    // FacingController::GetFinalRotation() const
    void FacingController::GetFinalRotation() {
        field_24->GetVertex2();
    }

    // 0x1003ffe00, 32 bytes, base-object destructor, inline, placed by class name
    // FacingController::~FacingController()
    void FacingController::~FacingController() {
        field_0 = &PTR_RenderDebug_100efe7c0;
        (&field_120)->~weak_ptr();
    }

} // namespace jag
