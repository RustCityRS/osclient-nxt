// libs/game/runetek5/scene/entities/components/route/EntityStandardRoute.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "EntityStandardRoute.h"

namespace jag {
    // 0x1003ea320
    void EntityStandardRoute::AddWaypoint(const game::CoordFine& coordFine1, const game::CoordFine& coordFine2,
                                          const MoveSpeed* moveSpeed) {

        EntityWaypoint local_30(coordFine2, moveSpeed);
        PushWaypoint(local_30);
    }

    // 0x1003ea360
    EntityStandardRoute* EntityStandardRoute::MoveAlongRoute(const game::CoordFine& coordFine,
                                                             FacingController& facingController, int arg3) {
        Vector2T<int>* this_01;
        uint32_t* puVar8;
        uint32_t in_register_0000000c;

        float fVar3 = facingController.m_turnSpeedMultiplier;
        new (this) RouteMovement(0, (Vector3T<float>*)MoveSpeed::STATIONARY,
                                 (MoveSpeed*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3),
                                 (float)*(uint64_t*)((long)&facingController._vptr + 4));
        if (coordFine.field_8.GetAuthWrapper() == 0) {
            return this;
        }
        Vector3T<float>* pVVar5 = (Vector3T<float>*)((long)&facingController._vptr + 4);
        float local_48 = facingController.m_turnSpeedMultiplier;
        uint64_t local_50 = *(uint64_t*)pVVar5;
        FacingController* local_40 = (FacingController*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3);
        auto this_00 = coordFine.GetFirstWaypoint();
        NXTPixToolkit* this_02 = this_00;
        auto local_38 = this_00->y();
        if (this_02->IsWaypointTooFar(local_50, *(int*)&facingController._vptr, *this_00) != '\0') {
            this_01 = (Vector2T<int>*)coordFine.field_8.back();
            pVVar5 = (Vector3T<float>*)this_01->y();
            ((Vector4T<float>*)((long)&this->_vptr + 4))->SetXYZ(*pVVar5);
            *(uint32_t*)&this->_vptr = 2;
            return this;
        }
        auto puVar6 = this_00->GetScreen();
        EntityStandardRoute* this_04 = local_38;
        MoveSpeed* moveSpeed = (MoveSpeed*)*puVar6;
        uint64_t local_60 = *local_38 - local_50;
        float local_58 = fVar3;
        int iVar2 = CalculateDistanceToMove((EntityStandardRoute*)coordFine, local_40, moveSpeed);
        float* pfVar7 = &local_60[0];
        if (*pfVar7 <= 0.0) {
            pfVar7 = &local_60[0];
            if (*pfVar7 <= 0.0 && *pfVar7 != 0.0) {
                local_40._0_4_ = (float)iVar2;
                pfVar7 = &local_50[0];
                *pfVar7 = *pfVar7 - local_40._0_4_;
                puVar8 = &local_50[0];
                local_40 = (FacingController*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*puVar8));
                pfVar7 = (float*)(*this_04)[0];
                if (local_40._0_4_ < *pfVar7)
                    goto LAB_1003ea52e;
            }
        } else {
            local_40._0_4_ = (float)iVar2;
            pfVar7 = &local_50[0];
            *pfVar7 = local_40._0_4_ + *pfVar7;
            puVar8 = &local_50[0];
            local_40 = (FacingController*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*puVar8));
            pfVar7 = (float*)(*this_04)[0];
            if (*pfVar7 <= local_40._0_4_ && local_40._0_4_ != *pfVar7) {
            LAB_1003ea52e:
                puVar8 = (uint32_t*)(*this_04)[0];
                local_38 = (EntityStandardRoute*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(*puVar8));
                puVar8 = &local_50[0];
                *puVar8 = local_38._0_4_;
            }
        }
        pfVar7 = &local_60[2];
        if (*pfVar7 <= 0.0) {
            pfVar7 = &local_60[2];
            if (0.0 < *pfVar7 || *pfVar7 == 0.0)
                goto LAB_1003ea667;
            local_38._0_4_ = (float)iVar2;
            pfVar7 = &local_50[2];
            *pfVar7 = *pfVar7 - local_38._0_4_;
            puVar8 = &local_50[2];
            local_38 = (EntityStandardRoute*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(*puVar8));
            pfVar7 = (float*)(*this_04)[2];
            if (*pfVar7 <= local_38._0_4_)
                goto LAB_1003ea667;
        } else {
            local_38._0_4_ = (float)iVar2;
            pfVar7 = &local_50[2];
            *pfVar7 = local_38._0_4_ + *pfVar7;
            puVar8 = &local_50[2];
            local_38 = (EntityStandardRoute*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(*puVar8));
            pfVar7 = (float*)(*this_04)[2];
            if (local_38._0_4_ < *pfVar7 || local_38._0_4_ == *pfVar7)
                goto LAB_1003ea667;
        }
        puVar8 = (uint32_t*)(*this_04)[2];
        local_38 = (EntityStandardRoute*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(*puVar8));
        puVar8 = &local_50[2];
        *puVar8 = local_38._0_4_;
    LAB_1003ea667:
        pfVar7 = &local_50[0];
        EntityStandardRoute* this_03 = this_04;
        local_38._0_4_ = *pfVar7;
        pfVar7 = (float*)(*this_04)[0];
        if (local_38._0_4_ == *pfVar7) {
            pfVar7 = &local_50[2];
            local_38._0_4_ = *pfVar7;
            pfVar7 = (float*)(*this_04)[2];
            this_03 = this_04;
            if (local_38._0_4_ == *pfVar7) {
                this_03 = (EntityStandardRoute*)coordFine;
                (**(void (**)(...))(*(long*)coordFine + 24))();
            }
        }
        uint32_t uVar9 = CalculateMovementAngle(this_03, pVVar5, (Vector3T<float>*)&local_50);
        *(uint32_t*)(field_8 + 16) = uVar9;
        ((Vector4T<float>*)((long)&this->_vptr + 4))->SetXYZ(local_50);
        *(MoveSpeed**)(field_8 + 8) = moveSpeed;
        *(uint32_t*)&this->_vptr = 1;
        fVar3 = (float)eastl::max<int>(0, (int)coordFine[3].field_8 - 1);
        coordFine[3].field_8 = fVar3;
        return this;
    }

    // 0x1003ea740
    unsigned int EntityStandardRoute::CalculateDistanceToMove(const FacingController& facingController,
                                                              const MoveSpeed* moveSpeed) {
        bool cVar1;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long uVar4;
        unsigned int uVar5;
        float fVar6;

        if (field_64 == false) {
            uVar4 = field_8->GetAuthWrapper();
            uVar3 = 8;
            if (2 < uVar4)
                goto LAB_1003ea7eb;
            uVar5 = 4;
            uVar4 = 1;
        } else {
            cVar1 = facingController.IsTurning();
            uVar5 = 4;
            if (((cVar1) && (cVar1 = facingController.FacingEntity(), !cVar1)) &&
                (fVar6 = (float)facingController.GetTurnSpeed(), fVar6 != 0.0)) {
                uVar5 = 2;
            }
            uVar2 = field_8->GetAuthWrapper();
            uVar4 = 2;
            uVar3 = 8;
            if (3 < uVar2)
                goto LAB_1003ea7eb;
        }
        uVar2 = field_8->GetAuthWrapper();
        uVar3 = 6;
        if (uVar2 <= uVar4) {
            uVar3 = uVar5;
        }
    LAB_1003ea7eb:
        if ((0 < (int)field_68) && (uVar4 = field_8->GetAuthWrapper(), 1 < uVar4)) {
            uVar3 = 8;
        }
        if ((MoveSpeed*)MoveSpeed::CRAWL == moveSpeed) {
            uVar3 = uVar3 >> 1;
        } else {
            uVar3 = uVar3 << ((MoveSpeed*)MoveSpeed::RUN == moveSpeed);
        }
        return uVar3;
    }

    // 0x1003ea840
    void EntityStandardRoute::CalculateMovementAngle(const math::Vector3T<float>& vector31,
                                                     const math::Vector3T<float>& vector32) {
        uint64_t local_20 = vector32 - vector31;
        float* pfVar1 = &local_20[0];
        float local_14 = *pfVar1;
        pfVar1 = &local_20[2];
        Point<float> local_28(local_14, *pfVar1);
        pfVar1 = &local_28[0];
        local_14 = *pfVar1;
        pfVar1 = &local_28[1];
        math::conversion::JagAtan2(local_14, *pfVar1);
    }

    // 0x1003eb000: EntityStandardRoute::~EntityStandardRoute() has the same machine code as EntitySmoothRoute::~EntitySmoothRoute()

} // namespace jag
