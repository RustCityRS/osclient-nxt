// libs/game/runetek5/scene/entities/components/FacingController.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class FacingController {
    public:
        // virtual methods in vtable order
        virtual void RenderDebug(const game::CoordFine& coordFine, const game::HeightMap& heightMap,
                                 const game::LinkMap& linkMap);
        FacingController();
        void SetBaseTurnSpeed(int arg1);
        void SetFaceEntityID(int arg1, game::EntityType entityType);
        void GetNextRotation(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                             const math::QuaternionT<float>& quaternion, bool arg4);
        void SelectRotation(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                            const math::QuaternionT<float>& quaternion, bool arg4);
        ReturnValue* GetNextRotationInner(const math::Vector3T<float>& vector3,
                                          const math::QuaternionT<float>& quaternion);
        void TrackPosition(const math::Vector3T<float>& vector31, const math::QuaternionT<float>& quaternion,
                           const math::Vector3T<float>& vector32);
        void TrackAngle(const math::QuaternionT<float>& quaternion, float arg2);
        float GetTurnSpeed() const;
        void SetTurnSpeedMultiplier(float arg1);
        bool IsTurning() const;
        bool FacingEntity() const;
        bool IsFinished() const;
        ~FacingController();
        void SetFaceMovement(float arg1);
        bool IsTurningLeft() const;
        void GetFinalRotation() const;
        static int32_t INVALID_RADIAN[4]; // = { -998653952, 1075235812, -1072247836, 995783694 }

    private:
        float field_8;
        float m_turnSpeedMultiplier;
        int field_16;
        int field_20;
        SmoothRotation field_24;
        uint8_t _unknown_112[24];
        char field_136;
        uint8_t _unknown_137[15];
        float m_faceMovement;
        float field_156;
        uint8_t _unknown_160[4];
    };

    // 0x100d42c68
    int32_t FacingController::INVALID_RADIAN[4] = {-998653952, 1075235812, -1072247836, 995783694};

    // 0x1003e76e0
    FacingController::FacingController() : field_8(0.0), m_turnSpeedMultiplier(1.0), field_16(-1), field_20(-1) {
        new (&field_120) shared_ptr();
        field_136 = '\x7f';
        new (&field_140) math::ColourHSL(-999.0, -999.0, -999.0);
        m_faceMovement = -999.0;
        field_156 = -999.0;
    }

    // 0x1003e7780
    void FacingController::SetBaseTurnSpeed(int arg1) {
        field_8 = (float)math::conversion::JagexAngleToRadians(arg1);
    }

    // 0x1003e77a0
    void FacingController::SetFaceEntityID(int arg1, game::EntityType entityType) {
        if ((field_20 != arg1) || (field_136 != (char)entityType)) {
            field_120.reset();
            field_20 = arg1;
            field_136 = (char)entityType;
        }
    }

    // 0x1003e7820
    void FacingController::GetNextRotation(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                                           const math::QuaternionT<float>& quaternion, bool arg4) {
        SelectRotation(vector31, vector32, quaternion, arg4);
        GetNextRotationInner(vector32, quaternion);
    }

    // 0x1003e7860
    void FacingController::SelectRotation(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                                          const math::QuaternionT<float>& quaternion, bool arg4) {
        uint8_t* this_00;
        int iVar2;
        int iVar3;
        float* pfVar4;
        uint32_t* puVar5;
        PathingEntity* pPVar6;

        float local_3c = m_faceMovement;
        m_faceMovement = -999.0;
        if (field_120.expired() != '\0') {
            this_00 = &field_140;
            pfVar4 = (float*)this_00->SSOBeginPtr();
            if ((*pfVar4 != -999.0) && (!arg4)) {
                TrackPosition(vector31, quaternion, *this_00);
                field_16 = 1;
                puVar5 = (uint32_t*)this_00->SSOBeginPtr();
                *puVar5 = 3296313344;
                return;
            }
            if ((field_156 != -999.0) && (!arg4)) {
                TrackAngle(quaternion, field_156);
                field_16 = 3;
                field_156 = -999.0;
                return;
            }
            if (local_3c == -999.0) {
                return;
            }
            TrackAngle(quaternion, local_3c);
            field_16 = 2;
            return;
        }
        auto local_50 = field_120.lock();
        if (field_16 == 0) {
            iVar2 = field_20;
            pPVar6 = (PathingEntity*)local_50.operator->();
            iVar3 = pPVar6->GetSlotID();
            if ((iVar2 == iVar3) || (field_136 == '\x7f'))
                goto LAB_1003e79a3;
        }
        auto this_01 = local_50.operator->();
        auto vector32_00 = this_01->GetTranslation();
        TrackPosition(vector32, quaternion, *vector32_00);
        field_16 = 0;
        pPVar6 = (PathingEntity*)local_50.operator->();
        iVar2 = pPVar6->GetSlotID();
        field_20 = iVar2;
    LAB_1003e79a3:
    }

    // 0x1003e7a00
    ReturnValue* FacingController::GetNextRotationInner(const math::Vector3T<float>& vector3,
                                                        const math::QuaternionT<float>& quaternion) {
        ReturnValue* pRVar2;
        Entity* this_01;
        Vector3T<float>* vector31;
        ReturnValue local_40;

        uint8_t* this_00 = field_24;
        bool cVar1 = this_00->ShowSkybox();
        if ((!cVar1) && (field_16 != 0)) {
            return (ReturnValue*)quaternion;
        }
        if (field_16 == 0) {
            cVar1 = field_120.expired();
            if (!cVar1) {
                local_40 = field_120.lock();
                this_01 = (Entity*)local_40.operator->();
                vector31 = (Vector3T<float>*)this_01->GetTranslation();
                pRVar2 = (ReturnValue*)this_00->RotateWithCheck(*vector31, vector3, quaternion);
                return pRVar2;
            }
        }
        pRVar2 = *this_00 = math::SmoothRotation::Rotate();
        return pRVar2;
    }

    // 0x1003e7b00
    void FacingController::TrackPosition(const math::Vector3T<float>& vector31,
                                         const math::QuaternionT<float>& quaternion,
                                         const math::Vector3T<float>& vector32) {
        float arg3 = (float)GetTurnSpeed();
        field_24->Set(vector31, quaternion, arg3, vector32);
    }

    // 0x1003e7b40
    void FacingController::TrackAngle(const math::QuaternionT<float>& quaternion, float arg2) {
        float arg2_00 = (float)GetTurnSpeed();
        field_24->Set(quaternion, arg2_00, arg2);
    }

    // 0x1003e7b80
    float FacingController::GetTurnSpeed() const {
        return m_turnSpeedMultiplier * field_8;
    }

    // 0x1003e7b90
    void FacingController::RenderDebug(const game::CoordFine& coordFine, const game::HeightMap& heightMap,
                                       const game::LinkMap& linkMap) {
        Matrix33T<float> local_150;
        uint64_t local_118;
        uint64_t local_60;
        uint64_t local_50[2];
        uint8_t local_40[16];

        math::Matrix33Scaling<float>(64.0, 1.0, 64.0);
        uint32_t uVar4 = 0;
        math::Matrix33RotationXY<float>(0.0, 0.0);
        local_150* local_118;
        float local_58 = coordFine.field_12;
        local_60._0_4_ = coordFine.field_4;
        local_60._4_4_ = coordFine.field_8;
        int iVar1 = game::Entity::GetFloorHeightAtCoord(coordFine, heightMap, linkMap, true, 0);
        local_60 = (((uint64_t)((float)iVar1) << 32) | (uint32_t)((uint32_t)local_60));
        auto pQVar2 = field_24->GetVertex2();
        local_40._0_8_ = *pQVar2 * *PTR_LOOK_100ee66e0;
        local_40._8_4_ = uVar4;
        local_50[0] = *128.0 * *local_40;
        local_50[1]._0_4_ = uVar4;
        local_d8[0]._0_8_ = *3.0 * *local_50;
        local_d8[0]._8_4_ = uVar4;
        ColourHSL local_70(1.0, 1.0, -1.0);
        local_118 = local_d8 * local_70;
        float local_110 = 1.0;
        uint64_t local_80 = local_60 + local_118;
        float local_78 = 1.0;
        new (&local_118) math::Matrix44T<float>(local_150, local_80);
        auto plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != nullptr) {
            local_d8 = oldscape::sidebars::SideBarData(-65536, 1);
            (**(void (**)(...))(*plVar3 + 24))(plVar3, &local_60, &local_80, &local_d8);
        }
        plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != nullptr) {
            local_d8 = oldscape::sidebars::SideBarData(-65536, 1);
            (**(void (**)(...))(*plVar3 + 64))(plVar3, &local_118, &local_d8);
        }
        pQVar2 = (QuaternionT<float>*)field_24->y();
        uint64_t local_98 = *pQVar2 * *PTR_LOOK_100ee66e0;
        float local_90 = 1.0;
        local_70._0_8_ = *128.0 * local_98;
        local_70.field_8 = 1.0;
        local_40._0_8_ = *3.0 * local_70;
        uVar4 = 1065353216;
        local_40._8_4_ = 1.0;
        ColourHSL local_128(1.0, 1.0, -1.0);
        local_d8[0]._0_8_ = *local_40 * local_128;
        local_d8[0]._8_4_ = uVar4;
        local_50[0] = local_60 + local_d8;
        local_50[1]._0_4_ = uVar4;
        SideBarData local_d8(local_150, *local_50);
        plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != nullptr) {
            new (local_40) oldscape::sidebars::SideBarData(-16711681, 1);
            (**(void (**)(...))(*plVar3 + 24))(plVar3, &local_60, local_50, (SideBarData*)local_40);
        }
        plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != nullptr) {
            new (local_40) oldscape::sidebars::SideBarData(-16711681, 1);
            (**(void (**)(...))(*plVar3 + 64))(plVar3, &local_d8, (SideBarData*)local_40);
        }
    }

    // 0x1003e9e60
    void FacingController::SetTurnSpeedMultiplier(float arg1) {
        m_verticalFov = arg1;
    }

    // 0x1003ea8d0
    bool FacingController::IsTurning() const {
        return IsFinished() ^ 1;
    }

    // 0x1003ea8e0
    bool FacingController::FacingEntity() const {
        if (field_16 == 0) {
            return field_136 != '\x7f';
        }
        return false;
    }

    // 0x1003eaf60
    bool FacingController::IsFinished() const {
        bool cVar1 = (bool)*field_24;
        uint32_t uVar2 = 1;
        if (cVar1) {
            uVar2 = field_24->IsFinished();
        }
        return uVar2;
    }

    // 0x1003f4190
    void FacingController::SetFaceMovement(float arg1) {
        m_faceMovement = arg1;
    }

    // 0x1003f6c00
    bool FacingController::IsTurningLeft() const {
        uint64_t uVar2;

        if (*field_24 == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = field_24->GetResize();
        }
        return uVar2;
    }

    // 0x1003f6c30
    void FacingController::GetFinalRotation() const {
        field_24->GetVertex2();
    }

    // 0x1003ffe00
    FacingController::~FacingController() {
        field_120.~weak_ptr();
    }

} // namespace jag
