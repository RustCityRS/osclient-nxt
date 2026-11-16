// libs/game/runetek5/scene/entities/components/route/EntityStandardRoute.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "EntityStandardRoute.h"

namespace jag {
    // 0x1003ea320, 64 bytes, placed by class name and debug map
    // EntityStandardRoute::AddWaypoint(game::CoordFine const&, game::CoordFine const&, MoveSpeed const*)
    void EntityStandardRoute::AddWaypoint(CoordFine* param_1, CoordFine* param_2, MoveSpeed* param_3) {
        EntityWaypoint local_30;

        new (&local_30) EntityWaypoint(param_2, param_3);
        PushWaypoint(&local_30);
    }

    // 0x1003ea360, 960 bytes, placed by class name and debug map
    // EntityStandardRoute::MoveAlongRoute(game::CoordFine const&, FacingController&, int)
    EntityStandardRoute* EntityStandardRoute::MoveAlongRoute(CoordFine* param_1, FacingController* param_2,
                                                             int param_3) {
        MoveSpeed* pMVar1;
        char cVar2;
        int iVar3;
        float fVar4;
        NXTPixToolkit* this_00;
        Vector2T<int>* this_01;
        Vector3T* pVVar6;
        undefined8* puVar7;
        float* pfVar8;
        undefined4* puVar9;
        undefined4 in_register_0000000c;
        NXTPixToolkit* pNVar10;
        EntityStandardRoute* this_02;
        EntityStandardRoute* this_03;
        undefined8 local_60;
        float local_58;
        undefined8 local_50;
        float local_48;
        FacingController* local_40;
        EntityStandardRoute* local_38;

        fVar4 = param_2->field_12;
        RouteMovement::RouteMovement(*(RouteMovement**)((long)&param_2->field_0 + 4), fVar4, 0, this, 0,
                                     MoveSpeed::STATIONARY);
        if ((&param_1->field_8)->GetAuthWrapper() == 0) {
            return this;
        }
        pVVar6 = (Vector3T*)((long)&param_2->field_0 + 4);
        local_48 = param_2->field_12;
        local_50 = *(undefined8*)pVVar6;
        local_40 = (FacingController*)CONCAT44(in_register_0000000c, param_3);
        this_00 = (NXTPixToolkit*)param_1->GetFirstWaypoint();
        pNVar10 = this_00;
        local_38 = (EntityStandardRoute*)this_00->y();
        cVar2 = EntityRoute::IsWaypointTooFar((Vector3T*)pNVar10, (int)&local_50,
                                              (EntityWaypoint*)(ulong) * (uint*)&param_2->field_0);
        if (cVar2 != '\0') {
            this_01 =
                (Vector2T<int>*)eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>,
                                                   eastl::allocator>::back();
            pVVar6 = (Vector3T*)this_01->y();
            (((long)&field_0 + 4), pVVar6)->SetXYZ();
            *(undefined4*)&field_0 = 2;
            return this;
        }
        puVar7 = (undefined8*)this_00->GetScreen();
        this_03 = local_38;
        pMVar1 = (MoveSpeed*)*puVar7;
        local_60 = math::operator-((Vector3T*)local_38, (Vector3T*)&local_50);
        local_58 = fVar4;
        iVar3 = CalculateDistanceToMove((EntityStandardRoute*)param_1, local_40, pMVar1);
        pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_60, 0);
        if (*pfVar8 <= 0.0) {
            pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_60, 0);
            if (*pfVar8 <= 0.0 && *pfVar8 != 0.0) {
                local_40._0_4_ = (float)iVar3;
                pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_50, 0);
                *pfVar8 = *pfVar8 - local_40._0_4_;
                puVar9 = (undefined4*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_50, 0);
                local_40 = (FacingController*)CONCAT44(local_40._4_4_, *puVar9);
                pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 0);
                if (local_40._0_4_ < *pfVar8)
                    goto LAB_1003ea52e;
            }
        } else {
            local_40._0_4_ = (float)iVar3;
            pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_50, 0);
            *pfVar8 = local_40._0_4_ + *pfVar8;
            puVar9 = (undefined4*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_50, 0);
            local_40 = (FacingController*)CONCAT44(local_40._4_4_, *puVar9);
            pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 0);
            if (*pfVar8 <= local_40._0_4_ && local_40._0_4_ != *pfVar8) {
            LAB_1003ea52e:
                puVar9 = (undefined4*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 0);
                local_38 = (EntityStandardRoute*)CONCAT44(local_38._4_4_, *puVar9);
                puVar9 = (undefined4*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_50, 0);
                *puVar9 = local_38._0_4_;
            }
        }
        pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_60, 2);
        if (*pfVar8 <= 0.0) {
            pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_60, 2);
            if (0.0 < *pfVar8 || *pfVar8 == 0.0)
                goto LAB_1003ea667;
            local_38._0_4_ = (float)iVar3;
            pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_50, 2);
            *pfVar8 = *pfVar8 - local_38._0_4_;
            puVar9 = (undefined4*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_50, 2);
            local_38 = (EntityStandardRoute*)CONCAT44(local_38._4_4_, *puVar9);
            pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 2);
            if (*pfVar8 <= local_38._0_4_)
                goto LAB_1003ea667;
        } else {
            local_38._0_4_ = (float)iVar3;
            pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_50, 2);
            *pfVar8 = local_38._0_4_ + *pfVar8;
            puVar9 = (undefined4*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_50, 2);
            local_38 = (EntityStandardRoute*)CONCAT44(local_38._4_4_, *puVar9);
            pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 2);
            if (local_38._0_4_ < *pfVar8 || local_38._0_4_ == *pfVar8)
                goto LAB_1003ea667;
        }
        puVar9 = (undefined4*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 2);
        local_38 = (EntityStandardRoute*)CONCAT44(local_38._4_4_, *puVar9);
        puVar9 = (undefined4*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_50, 2);
        *puVar9 = local_38._0_4_;
    LAB_1003ea667:
        pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_50, 0);
        this_02 = this_03;
        local_38._0_4_ = *pfVar8;
        pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 0);
        if (local_38._0_4_ == *pfVar8) {
            pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_50, 2);
            local_38._0_4_ = *pfVar8;
            pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 2);
            this_02 = this_03;
            if (local_38._0_4_ == *pfVar8) {
                this_02 = (EntityStandardRoute*)param_1;
                (**(code**)(*(long*)param_1 + 24))();
            }
        }
        field_24 = CalculateMovementAngle(this_02, pVVar6, (Vector3T*)&local_50);
        (((long)&field_0 + 4), (Vector3T*)&local_50)->SetXYZ();
        field_16 = pMVar1;
        *(undefined4*)&field_0 = 1;
        fVar4 = (float)eastl::max<int>(0, (int)param_1[3].field_8 + -1);
        param_1[3].field_8 = fVar4;
        return this;
    }

    // 0x1003ea740, 256 bytes, placed by class name and debug map
    // EntityStandardRoute::CalculateDistanceToMove(FacingController const&, MoveSpeed const*)
    uint EntityStandardRoute::CalculateDistanceToMove(FacingController* param_1, MoveSpeed* param_2) {
        char cVar1;
        ulong uVar2;
        uint uVar3;
        ulong uVar4;
        uint uVar5;
        float fVar6;

        if (field_64 == false) {
            uVar4 = (&field_8)->GetAuthWrapper();
            uVar3 = 8;
            if (2 < uVar4)
                goto LAB_1003ea7eb;
            uVar5 = 4;
            uVar4 = 1;
        } else {
            cVar1 = param_1->IsTurning();
            uVar5 = 4;
            if (((cVar1 != '\0') && (cVar1 = param_1->FacingEntity(), cVar1 == '\0')) &&
                (fVar6 = (float)param_1->GetTurnSpeed(), fVar6 != 0.0)) {
                uVar5 = 2;
            }
            uVar2 = (&field_8)->GetAuthWrapper();
            uVar4 = 2;
            uVar3 = 8;
            if (3 < uVar2)
                goto LAB_1003ea7eb;
        }
        uVar2 = (&field_8)->GetAuthWrapper();
        uVar3 = 6;
        if (uVar2 <= uVar4) {
            uVar3 = uVar5;
        }
    LAB_1003ea7eb:
        if ((0 < field_68) && (uVar4 = (&field_8)->GetAuthWrapper(), 1 < uVar4)) {
            uVar3 = 8;
        }
        if ((MoveSpeed*)MoveSpeed::CRAWL == param_2) {
            uVar3 = uVar3 >> 1;
        } else {
            uVar3 = uVar3 << ((MoveSpeed*)MoveSpeed::RUN == param_2);
        }
        return uVar3;
    }

    // 0x1003ea840, 144 bytes, placed by class name and debug map
    // EntityStandardRoute::CalculateMovementAngle(math::Vector3T<float> const&, math::Vector3T<float> const&)
    void EntityStandardRoute::CalculateMovementAngle(Vector3T* param_1, Vector3T* param_2) {
        float* pfVar1;
        Point<float> local_28[8];
        undefined8 local_20;
        float local_14;

        local_20 = math::operator-(param_2, param_1);
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_20, 0);
        local_14 = *pfVar1;
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_20, 2);
        math::Point<float>::Point(local_28, local_14, *pfVar1);
        pfVar1 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)local_28, 0);
        local_14 = *pfVar1;
        pfVar1 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)local_28, 1);
        math::conversion::JagAtan2(local_14, *pfVar1);
    }

    // 0x1003ead80: the linker folded this into EntitySmoothRoute::~EntitySmoothRoute(), which has identical code
    EntityStandardRoute::~EntityStandardRoute();

    // 0x1003ead90: the linker folded this into EntitySmoothRoute::~EntitySmoothRoute(), which has identical code
    EntityStandardRoute::~EntityStandardRoute();

    // 0x1003eb000: the linker folded this into EntitySmoothRoute::~EntitySmoothRoute(), which has identical code
    EntityStandardRoute::~EntityStandardRoute();

} // namespace jag
