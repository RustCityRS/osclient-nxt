// libs/game/runetek5/scene/entities/components/route/EntitySmoothRoute.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "EntitySmoothRoute.h"

namespace jag {
    // 0x1003e8c50, 48 bytes, placed by class name and debug map
    // EntitySmoothRoute::AddWaypointAtFinePos(game::CoordFine const&, MoveSpeed const*)
    void EntitySmoothRoute::AddWaypointAtFinePos(CoordFine* param_1, MoveSpeed* param_2) {
        EntityWaypoint local_30;

        new (&local_30) EntityWaypoint(param_1, param_2);
        PushWaypoint(&local_30);
    }

    // 0x1003e8c80, 128 bytes, placed by class name and debug map
    // EntitySmoothRoute::RemoveFirstWaypoint()
    void EntitySmoothRoute::RemoveFirstWaypoint() {
        EntityWaypoint* pEVar1;
        long lVar2;

        pEVar1 = (EntityWaypoint*)eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>,
                                                     eastl::allocator>::
        operator[](
            (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)&field_8,
            0);
        EntityWaypoint::operator=((EntityWaypoint*)field_168, pEVar1);
        RemoveFirstWaypoint();
        lVar2 = (&field_8)->GetAuthWrapper();
        *(undefined4*)((long)&field_160 + 4) = *(undefined4*)(&DAT_100d42c60 + (ulong)(lVar2 == 1) * 4);
        *(undefined4*)&field_160 = 0;
        (&field_192, (Vector3T*)PTR_ZERO_100ee66e8)->SetXYZ();
    }

    // 0x1003e8d00, 128 bytes, placed by class name and debug map
    // EntitySmoothRoute::ClearRoute()
    void EntitySmoothRoute::ClearRoute() {
        EntityWaypoint local_30;

        ClearRoute();
        new (&local_30) EntityWaypoint();
        EntityWaypoint::operator=((EntityWaypoint*)field_168, &local_30);
        local_30.m_level = 0;
        (&field_128, (float*)&local_30, 0, 0)->SetValue();
        field_160 = 4575657221408423936;
        (&field_192, (Vector3T*)PTR_ZERO_100ee66e8)->SetXYZ();
    }

    // 0x1003e8da0, 160 bytes, placed by class name and debug map
    // EntitySmoothRoute::SkipToEnd()
    void EntitySmoothRoute::SkipToEnd() {
        undefined1* this_00;
        EntityWaypoint* pEVar2;
        EntityWaypoint* pEVar3;
        EntityWaypoint local_38;

        this_00 = &field_8;
        if (this_00->GetAuthWrapper() != 0) {
            *(undefined4*)&field_160 = 0;
            pEVar2 = (EntityWaypoint*)
                eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                        this_00,
                    0);
            pEVar3 =
                (EntityWaypoint*)eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>,
                                                    eastl::allocator>::back();
            eastl::swap<EntityWaypoint>(pEVar2, pEVar3);
            this_00->resize(1);
            new (&local_38) EntityWaypoint();
            EntityWaypoint::operator=((EntityWaypoint*)field_168, &local_38);
            (&field_192, (Vector3T*)PTR_ZERO_100ee66e8)->SetXYZ();
        }
    }

    // 0x1003e8e40, 800 bytes, placed by class name and debug map
    // EntitySmoothRoute::AddWaypoint(game::CoordFine const&, game::CoordFine const&, MoveSpeed const*)
    void EntitySmoothRoute::AddWaypoint(CoordFine* param_1, CoordFine* param_2, MoveSpeed* param_3) {
        undefined1* this_00;
        uint uVar2;
        int iVar3;
        int iVar4;
        long lVar5;
        Vector2T<int>* pVVar6;
        float* pfVar7;
        Vector2T<int>* this_01;
        Vector3T* pVVar8;
        uint uVar9;
        uint uVar10;
        uint uVar11;
        float fVar12;
        float in_XMM1_Da;
        undefined1 local_80[40];
        LoginManager* local_50;
        CoordFine* local_40;
        int local_38;
        float local_34;

        this_01 = (Vector2T<int>*)field_168;
        local_40 = param_2;
        if (this_01->IsValid() == '\0') {
            RegenerateFromNewStartPos(this, param_1);
        } else {
            this_00 = &field_8;
            lVar5 = this_00->GetAuthWrapper();
            if (lVar5 == 1) {
                local_34 = local_40->field_4;
                pVVar6 = (Vector2T<int>*)eastl::ring_buffer<
                    EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                        this_00,
                    0);
                pfVar7 = (float*)pVVar6->y();
                if (local_34 == *pfVar7) {
                    local_34 = local_40->field_12;
                    pVVar6 = (Vector2T<int>*)eastl::ring_buffer<
                        EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                    operator[]((ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>,
                                            eastl::allocator>*)this_00,
                               0);
                    lVar5 = pVVar6->y();
                    if (local_34 == *(float*)(lVar5 + 8))
                        goto LAB_1003e8f7d;
                }
                if (1.0 < *(float*)&field_160 || *(float*)&field_160 == 1.0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_distAlongCurve < 1.0f",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/components/route/EntitySmoothRoute.cpp",
                              65, "EntitySmoothRoute: End of curve reached but distance not reset");
                }
                new ((local_80 + 16)) EntityWaypoint(param_1, param_3);
                EntityWaypoint::operator=((EntityWaypoint*)this_01, (EntityWaypoint*)(local_80 + 16));
                *(float*)((long)&field_160 + 4) = 1.0 - *(float*)&field_160;
                *(undefined4*)&field_160 = 0;
                (&field_192, (Vector3T*)PTR_ZERO_100ee66e8)->SetXYZ();
            }
        }
    LAB_1003e8f7d:
        lVar5 = (&field_8)->GetAuthWrapper();
        if (lVar5 != 0) {
            this_01 =
                (Vector2T<int>*)eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>,
                                                   eastl::allocator>::back();
        }
        local_50 = (LoginManager*)&field_8;
        pVVar8 = (Vector3T*)this_01->y();
        fVar12 = (float)math::operator-((Vector3T*)&local_40->field_4, pVVar8);
        uVar10 = (uint)fVar12;
        uVar11 = (uint)in_XMM1_Da;
        uVar9 = -uVar10;
        if ((int)-uVar10 < 0) {
            uVar9 = uVar10;
        }
        uVar2 = -uVar11;
        if ((int)-uVar11 < 0) {
            uVar2 = uVar11;
        }
        if ((uVar9 < 257) && (uVar2 < 257)) {
            local_38 = (int)*(float*)pVVar8;
            local_34 = (float)(int)*(float*)(pVVar8 + 8);
            while ((uVar10 != 0 || uVar11 != 0 || (lVar5 = local_50->GetAuthWrapper(), lVar5 == 0))) {
                if ((int)uVar10 < 1) {
                    if ((int)uVar10 < 0) {
                        iVar3 = eastl::min<graphics::GraphicsQuality>(-uVar10, 64);
                        iVar3 = local_38 - iVar3;
                        uVar10 = eastl::min<graphics::GraphicsQuality>(0, uVar10 + 64);
                        goto LAB_1003e90b0;
                    }
                    uVar10 = 0;
                    iVar3 = local_38;
                    if (0 < (int)uVar11)
                        goto LAB_1003e9000;
                LAB_1003e90d5:
                    if ((int)uVar11 < 0) {
                        iVar4 = eastl::min<graphics::GraphicsQuality>(-uVar11, 64);
                        fVar12 = (float)((int)local_34 - iVar4);
                        uVar11 = eastl::min<graphics::GraphicsQuality>(0, uVar11 + 64);
                    } else {
                        fVar12 = local_34;
                        uVar11 = 0;
                    }
                } else {
                    iVar3 = eastl::min<graphics::GraphicsQuality>(uVar10, 64);
                    iVar3 = local_38 + iVar3;
                    uVar10 = eastl::max<int>(0, uVar10 - 64);
                LAB_1003e90b0:
                    if ((int)uVar11 < 1)
                        goto LAB_1003e90d5;
                LAB_1003e9000:
                    iVar4 = eastl::min<graphics::GraphicsQuality>(uVar11, 64);
                    fVar12 = (float)((int)local_34 + iVar4);
                    uVar11 = eastl::max<int>(0, uVar11 - 64);
                }
                local_38 = iVar3;
                local_34 = fVar12;
                new (local_80) game::CoordFine(local_40->field_0, (float)iVar3, (float)(int)fVar12);
                new ((local_80 + 16)) EntityWaypoint(local_80, param_3);
                ((EntitySmoothRoute*)this)->PushWaypoint((EntityWaypoint*)(local_80 + 16));
            }
        } else {
            new ((local_80 + 16)) EntityWaypoint(local_40, param_3);
            PushWaypoint((EntityWaypoint*)(local_80 + 16));
        }
    }

    // 0x1003e91c0, 352 bytes, placed by class name and debug map
    // EntitySmoothRoute::RegenerateFromNewStartPos(game::CoordFine const&)
    void EntitySmoothRoute::RegenerateFromNewStartPos(CoordFine* param_1) {
        undefined1* this_00;
        bool bVar2;
        NXTPixToolkit* this_01;
        vector* pvVar3;
        undefined8* puVar4;
        type* ptVar5;
        undefined1 auVar6[16];
        undefined1 auVar7[16];
        EntityWaypoint local_80[2];
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL> local_50[16];
        type local_40[16];

        EntityWaypoint::EntityWaypoint(local_80, param_1, (MoveSpeed*)MoveSpeed::STATIONARY);
        EntityWaypoint::operator=((EntityWaypoint*)field_168, local_80);
        (&field_192, (Vector3T*)PTR_ZERO_100ee66e8)->SetXYZ();
        if (field_168->IsValid() != '\0') {
            new (local_80) eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, BucketAllocatorEASTL>,
                                              BucketAllocatorEASTL>(0);
            this_00 = &field_8;
            auVar6 = this_00->begin();
            auVar7 = this_00->end();
            eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, BucketAllocatorEASTL>,
                               BucketAllocatorEASTL>::
                assign<eastl::ring_buffer_iterator<EntityWaypoint, EntityWaypoint_const*, EntityWaypoint_const&,
                                                   eastl::vector<EntityWaypoint, eastl::allocator>>>(
                    local_80, auVar6._0_8_, auVar6._8_8_, auVar7._0_8_, auVar7._8_8_);
            this_00->clear();
            eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, BucketAllocatorEASTL>,
                               BucketAllocatorEASTL>::begin();
            ptVar5 = local_40;
            eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, BucketAllocatorEASTL>,
                               BucketAllocatorEASTL>::end();
            bVar2 = eastl::operator!=(local_50, ptVar5);
            if (bVar2) {
                do {
                    this_01 =
                        (NXTPixToolkit*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                            local_50);
                    pvVar3 = this_01->SSOBeginPtr(ptVar5);
                    puVar4 = (undefined8*)this_01->GetScreen();
                    (*(code*)field_0[2])(this, param_1, pvVar3, *puVar4);
                    eastl::ring_buffer_iterator<EntityWaypoint, EntityWaypoint*, EntityWaypoint&,
                                                eastl::vector<EntityWaypoint, BucketAllocatorEASTL>>::
                    operator++((ring_buffer_iterator<EntityWaypoint, EntityWaypoint*, EntityWaypoint&,
                                                     eastl::vector<EntityWaypoint, BucketAllocatorEASTL>>*)local_50);
                    ptVar5 = local_40;
                    bVar2 = eastl::operator!=(local_50, ptVar5);
                } while (bVar2);
            }
            local_80->~ring_buffer();
        }
    }

    // 0x1003e9470, 592 bytes, placed by class name and debug map
    // EntitySmoothRoute::MoveAlongRoute(game::CoordFine const&, FacingController&, int)
    EntitySmoothRoute* EntitySmoothRoute::MoveAlongRoute(CoordFine* param_1, FacingController* param_2, int param_3) {
        float* this_00;
        uint uVar1;
        MoveSpeed* pMVar2;
        char cVar3;
        float fVar4;
        Vector2T<int>* pVVar5;
        Vector3T* pVVar6;
        float* pfVar7;
        long lVar8;
        ulong uVar9;
        NXTPixToolkit* this_01;
        undefined8* puVar10;
        undefined4 in_register_0000000c;
        EntitySmoothRoute* this_02;
        int in_R8D;
        undefined8 local_68;
        float local_60;
        FacingController* local_58;
        undefined8 local_50;
        float local_48;
        EntitySmoothRoute* local_40;
        float local_38;
        float local_34;

        RouteMovement::RouteMovement(*(RouteMovement**)((long)&param_2->field_0 + 4), param_2->m_turnSpeedMultiplier, 0,
                                     this, 0, MoveSpeed::STATIONARY);
        cVar3 = param_1[8].field_8.IsValid();
        if (cVar3 == '\0') {
            RegenerateFromNewStartPos((EntitySmoothRoute*)param_1, (CoordFine*)param_2);
        }
        cVar3 = IsCurveValid((EntitySmoothRoute*)param_1);
        if (cVar3 == '\0') {
            local_50 = (ulong)local_50._4_4_ << 32;
            param_1[6].field_8.SetValue((float*)&local_50, 0, 0);
        } else {
            pfVar7 = (float*)((long)&param_2->field_0 + 4);
            uVar1 = *(uint*)&param_2->field_0;
            this_00 = &param_1->field_8;
            pVVar6 = (Vector3T*)this_00;
            local_58 = (FacingController*)CONCAT44(in_register_0000000c, param_3);
            local_40 = this;
            local_38 = (float)in_R8D;
            eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
            operator[]((ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                           this_00,
                       0);
            cVar3 = EntityRoute::IsWaypointTooFar(pVVar6, (int)pfVar7, (EntityWaypoint*)(ulong)uVar1);
            this = local_40;
            if (cVar3 == '\0') {
                local_34 = *pfVar7;
                pVVar5 = (Vector2T<int>*)eastl::ring_buffer<
                    EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                        this_00,
                    0);
                pfVar7 = (float*)pVVar5->y();
                if (local_34 == *pfVar7) {
                    local_34 = param_2->m_turnSpeedMultiplier;
                    pVVar5 = (Vector2T<int>*)eastl::ring_buffer<
                        EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                    operator[]((ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>,
                                            eastl::allocator>*)this_00,
                               0);
                    lVar8 = pVVar5->y();
                    if (local_34 == *(float*)(lVar8 + 8)) {
                        (**(code**)(*(long*)param_1 + 24))(param_1);
                        return local_40;
                    }
                }
                uVar9 = this_00->GetAuthWrapper();
                this_01 = (NXTPixToolkit*)eastl::ring_buffer<
                    EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                        this_00,
                    (ulong)(1 < uVar9));
                puVar10 = (undefined8*)this_01->GetScreen();
                pMVar2 = (MoveSpeed*)*puVar10;
                this_02 = (EntitySmoothRoute*)param_1;
                local_34 = (float)UpdateSpeed((EntitySmoothRoute*)param_1, pMVar2);
                UpdateEntityTurnSpeed(this_02, local_58, local_34, (int)local_38);
                this = local_40;
                if (local_34 != 0.0) {
                    fVar4 = local_34;
                    local_38 = (float)UpdateCurvePosition((EntitySmoothRoute*)param_1, local_34);
                    param_1[8].field_0 = (uint)local_38;
                    local_38 = local_38 / param_1[8].field_4;
                    local_50 = GetLocalTranslationOnCurve((EntitySmoothRoute*)param_1, local_38);
                    local_48 = fVar4;
                    field_24 = CalculateMovementAngle((EntitySmoothRoute*)param_1, (Vector3T*)&local_50);
                    local_68 = LocalTranslationToWorldTranslation((EntitySmoothRoute*)param_1, (Vector3T*)&local_50);
                    local_60 = fVar4;
                    (((long)&field_0 + 4), (Vector3T*)&local_68)->SetXYZ();
                    field_16 = pMVar2;
                    *(undefined4*)&field_0 = 1;
                    UpdateRoute((EntitySmoothRoute*)param_1, local_38);
                    fVar4 = (float)eastl::max<int>(0, (int)param_1[3].field_8 + -1);
                    param_1[3].field_8 = fVar4;
                }
            } else {
                *(undefined4*)&local_40->field_0 = 2;
                pVVar5 =
                    (Vector2T<int>*)eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>,
                                                       eastl::allocator>::back();
                pVVar6 = (Vector3T*)pVVar5->y();
                (((long)&field_0 + 4), pVVar6)->SetXYZ();
            }
        }
        return this;
    }

    // 0x1003e96d0, 128 bytes, placed by class name and debug map
    // EntitySmoothRoute::IsCurveValid() const
    undefined4 EntitySmoothRoute::IsCurveValid() {
        undefined1* this_00;
        char cVar1;
        undefined4 uVar2;
        long lVar3;
        EntityWaypoint* pEVar4;

        this_00 = &field_8;
        lVar3 = this_00->GetAuthWrapper();
        if (lVar3 == 0) {
            uVar2 = 0;
        } else {
            cVar1 = field_168->IsValid();
            uVar2 = 0;
            if (cVar1 != '\0') {
                pEVar4 = (EntityWaypoint*)eastl::ring_buffer<
                    EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                        this_00,
                    0);
                cVar1 = pEVar4->IsValid();
                if (cVar1 != '\0') {
                    lVar3 = this_00->GetAuthWrapper();
                    uVar2 = 1;
                    if (lVar3 != 1) {
                        pEVar4 = (EntityWaypoint*)eastl::ring_buffer<
                            EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                        operator[]((ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>,
                                                eastl::allocator>*)this_00,
                                   1);
                        uVar2 = pEVar4->IsValid();
                    }
                }
            }
        }
        return uVar2;
    }

    // 0x1003e9750, 256 bytes, placed by class name and debug map
    // EntitySmoothRoute::UpdateSpeed(MoveSpeed const*)
    undefined8 EntitySmoothRoute::UpdateSpeed(MoveSpeed* param_1) {
        ulonglong uVar1;
        float* pfVar2;
        float fVar3;
        undefined8 uVar4;
        undefined4 uVar5;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        uVar1 = FrameTime::GetCurrentTimeMS();
        uVar4 = (&field_128, uVar1)->GetValue();
        uVar5 = (undefined4)((ulong)uVar4 >> 32);
        local_24 = (float)uVar4 * 0.0078125;
        if ((*(float*)&field_160 == 0.0) || (local_24 == 0.0)) {
            fVar3 = (float)GetCatchUpMultiplier(this, param_1);
            if (((MoveSpeed*)MoveSpeed::WALK == param_1) || ((MoveSpeed*)MoveSpeed::STATIONARY == param_1)) {
                local_30 = fVar3 * 4.0;
                uVar1 = FrameTime::GetCurrentTimeMS();
                pfVar2 = &local_30;
            } else if ((MoveSpeed*)MoveSpeed::RUN == param_1) {
                local_2c = fVar3 * 8.0;
                uVar1 = FrameTime::GetCurrentTimeMS();
                pfVar2 = &local_2c;
            } else {
                uVar5 = 0;
                if ((MoveSpeed*)MoveSpeed::CRAWL != param_1)
                    goto LAB_1003e9836;
                local_28 = fVar3 + fVar3;
                uVar1 = FrameTime::GetCurrentTimeMS();
                pfVar2 = &local_28;
            }
            (&field_128, pfVar2, 200, uVar1)->SetValue();
            uVar5 = 0;
        }
    LAB_1003e9836:
        return CONCAT44(uVar5, local_24);
    }

    // 0x1003e9850, 80 bytes, placed by class name and debug map
    // EntitySmoothRoute::UpdateEntityTurnSpeed(FacingController&, float, int)
    void EntitySmoothRoute::UpdateEntityTurnSpeed(FacingController* param_1, float param_2, int param_3) {
        float fVar1;

        if (param_3 < 2) {
            fVar1 = (float)eastl::max_alt(param_2 * -16.0 + 2.0, 0.8);
        } else {
            fVar1 = 1.0;
        }
        param_1->SetVerticalFov(fVar1);
    }

    // 0x1003e98a0, 80 bytes, placed by class name and debug map
    // EntitySmoothRoute::UpdateCurvePosition(float)
    void EntitySmoothRoute::UpdateCurvePosition(float param_1) {
        float fVar2;

        if (InStraightLine(this) == '\0') {
            fVar2 = 1.0;
        } else {
            fVar2 = 0.5;
        }
        eastl::min<float>(fVar2, param_1 + *(float*)&field_160);
    }

    // 0x1003e98f0, 384 bytes, placed by class name and debug map
    // EntitySmoothRoute::GetLocalTranslationOnCurve(float)
    undefined8 EntitySmoothRoute::GetLocalTranslationOnCurve(float param_1) {
        undefined1* this_00;
        ulong uVar3;
        Vector2T<int>* pVVar4;
        Vector3T* pVVar5;
        Vector3T* pVVar6;
        float* pfVar7;
        Vector3T* extraout_RDX;
        undefined8 uVar8;
        float local_58[2];
        ColourHSL local_50;
        undefined8 local_40;
        float local_34;

        this_00 = &field_8;
        local_34 = param_1;
        if (this_00->GetAuthWrapper() == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_route.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/components/route/EntitySmoothRoute.cpp",
                      245, "EntitySmoothRoute: Trying to find a point on a curve without enough waypoints");
        }
        local_40 = (ulong)local_40._4_4_ << 32;
        local_58[0] = 1.0;
        local_34 = math::Clamp<float>(&local_34, (float*)&local_40, local_58);
        uVar3 = this_00->GetAuthWrapper();
        pVVar4 = (Vector2T<int>*)eastl::
            ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::operator[](
                (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                    this_00,
                (ulong)(1 < uVar3));
        pVVar5 = (Vector3T*)field_168->y();
        pVVar6 = (Vector3T*)pVVar4->y();
        if (InStraightLine(this) == '\0') {
            pVVar4 = (Vector2T<int>*)
                eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                        this_00,
                    0);
            pfVar7 = (float*)pVVar4->y();
            new (&local_40) math::Point<float>(*pfVar7 - *(float*)pVVar5, pfVar7[2] - *(float*)(pVVar5 + 8));
            new (local_58)
                math::Point<float>(*(float*)pVVar6 - *(float*)pVVar5, *(float*)(pVVar6 + 8) - *(float*)(pVVar5 + 8));
            uVar8 = math::QuadraticBezier<float>((Vector2T*)PTR_ZERO_100ee66a8, (Vector2T*)&local_40,
                                                 (Vector2T*)local_58, local_34);
            new (&local_50) math::ColourHSL((float)uVar8, 0.0, (float)((ulong)uVar8 >> 32));
        } else {
            local_40 = math::operator-(pVVar6, pVVar5);
            local_50._0_8_ = math::Lerp<math::Vector3T<float>, float>((math*)PTR_ZERO_100ee66e8, (Vector3T*)&local_40,
                                                                      extraout_RDX, local_34);
        }
        uVar8._0_4_ = local_50.field_0;
        uVar8._4_4_ = local_50.field_4;
        return uVar8;
    }

    // 0x1003e9a70, 192 bytes, placed by class name and debug map
    // EntitySmoothRoute::CalculateMovementAngle(math::Vector3T<float> const&)
    undefined4 EntitySmoothRoute::CalculateMovementAngle(Vector3T* param_1) {
        float* pfVar1;
        Point<float> local_38[8];
        undefined8 local_30;
        float local_24;

        local_30 = math::operator-(param_1, (Vector3T*)&field_192);
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_30, 0);
        local_24 = *pfVar1;
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_30, 2);
        math::Point<float>::Point(local_38, local_24, *pfVar1);
        pfVar1 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)local_38, 0);
        local_24 = *pfVar1;
        pfVar1 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)local_38, 1);
        local_24 = (float)math::conversion::JagAtan2(local_24, *pfVar1);
        (&field_192, param_1)->SetXYZ();
        return local_24;
    }

    // 0x1003e9b60, 112 bytes, placed by class name
    // EntitySmoothRoute::UpdateRoute(float)
    void EntitySmoothRoute::UpdateRoute(float param_1) {
        char cVar1;
        ulong uVar2;

        if (((param_1 < 0.5) || (uVar2 = (&field_8)->GetAuthWrapper(), uVar2 < 2)) ||
            (cVar1 = InStraightLine(this), cVar1 == '\0')) {
            if (param_1 < 1.0) {
                return;
            }
            (*(code*)field_0[3])(this);
            if ((&field_8)->GetAuthWrapper() == 0) {
                return;
            }
        }
        (*(code*)field_0[3])(this);
    }

    // 0x1003e9bd0, 304 bytes, placed by class name
    // EntitySmoothRoute::InStraightLine()
    ulong EntitySmoothRoute::InStraightLine() {
        undefined1* this_00;
        float fVar1;
        float fVar2;
        float fVar3;
        ulong uVar4;
        float* pfVar5;
        Vector2T<int>* pVVar6;
        long lVar7;
        undefined8 unaff_R15;
        ulong uVar8;

        this_00 = &field_8;
        uVar4 = this_00->GetAuthWrapper();
        uVar8 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
        if (1 < uVar4) {
            pfVar5 = (float*)field_168->y();
            fVar1 = *pfVar5;
            uVar8 = 0;
            pVVar6 = (Vector2T<int>*)
                eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                        this_00,
                    0);
            pfVar5 = (float*)pVVar6->y();
            fVar2 = *pfVar5;
            pVVar6 = (Vector2T<int>*)
                eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                        this_00,
                    0);
            pfVar5 = (float*)pVVar6->y();
            fVar3 = *pfVar5;
            pVVar6 = (Vector2T<int>*)
                eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                        this_00,
                    1);
            pfVar5 = (float*)pVVar6->y();
            if (fVar1 - fVar2 == fVar3 - *pfVar5) {
                lVar7 = field_168->y();
                fVar1 = *(float*)(lVar7 + 8);
                pVVar6 = (Vector2T<int>*)eastl::ring_buffer<
                    EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                        this_00,
                    0);
                lVar7 = pVVar6->y();
                fVar2 = *(float*)(lVar7 + 8);
                pVVar6 = (Vector2T<int>*)eastl::ring_buffer<
                    EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                        this_00,
                    0);
                lVar7 = pVVar6->y();
                fVar3 = *(float*)(lVar7 + 8);
                pVVar6 = (Vector2T<int>*)eastl::ring_buffer<
                    EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                        this_00,
                    1);
                lVar7 = pVVar6->y();
                uVar8 = (ulong)(fVar1 - fVar2 == fVar3 - *(float*)(lVar7 + 8));
            }
        }
        return uVar8 & 4294967295;
    }

    // 0x1003e9e00, 96 bytes, placed by class name
    // EntitySmoothRoute::GetCatchUpMultiplier(MoveSpeed const*)
    void EntitySmoothRoute::GetCatchUpMultiplier(MoveSpeed* param_1) {
        int iVar1;
        bool bVar2;
        float fVar3;

        bVar2 = (MoveSpeed*)MoveSpeed::CRAWL == param_1;
        iVar1 = (&field_8)->GetAuthWrapper();
        fVar3 = (float)(int)(iVar1 + (uint)bVar2 + -3) * 0.1 + 1.0;
        if (0 < (int)field_68) {
            fVar3 = fVar3 + fVar3;
        }
        eastl::min<float>(fVar3, 2.0);
    }

    // 0x1003e9e70, 192 bytes, placed by class name
    // EntitySmoothRoute::UpdateEntitySize(int, int)
    void EntitySmoothRoute::UpdateEntitySize(int param_1, int param_2) {
        vector* pvVar2;
        float* pfVar3;
        undefined8* puVar4;
        undefined4 in_register_00000034;
        type* ptVar5;
        undefined1* this_00;
        EntityWaypoint local_50;
        undefined1 local_38[20];
        float local_24;

        ptVar5 = (type*)CONCAT44(in_register_00000034, param_1);
        UpdateEntitySize(param_1, param_2);
        this_00 = field_168;
        if (this_00->IsValid() != '\0') {
            local_24 = (float)((param_2 - param_1) * 128) * 0.5;
            pvVar2 = this_00->SSOBeginPtr(ptVar5);
            local_38._0_8_ = *(undefined8*)pvVar2;
            local_38._8_8_ = *(undefined8*)(pvVar2 + 8);
            pvVar2 = ((local_38 + 4))->SSOBeginPtr(ptVar5);
            *(float*)pvVar2 = *(float*)pvVar2 + local_24;
            pfVar3 = (float*)((local_38 + 4))->second();
            *pfVar3 = local_24 + *pfVar3;
            puVar4 = (undefined8*)this_00->GetScreen();
            new (&local_50) EntityWaypoint(local_38, (MoveSpeed*)*puVar4);
            EntityWaypoint::operator=((EntityWaypoint*)this_00, &local_50);
        }
    }

    // 0x1003e9f30, 1008 bytes, placed by class name
    // EntitySmoothRoute::RenderDebug(game::CoordFine const&, game::HeightMap const&, game::LinkMap const&, unsigned int)
    void EntitySmoothRoute::RenderDebug(CoordFine* param_1, HeightMap* param_2, LinkMap* param_3, uint param_4) {
        bool bVar1;
        int iVar2;
        undefined8* puVar3;
        vector* pvVar4;
        long* plVar5;
        Vector2T<int>* this_00;
        type* ptVar6;
        ColourHSL* pCVar7;
        undefined4 uVar8;
        undefined4 uVar9;
        float fVar10;
        ColourHSL local_c8;
        ColourHSL local_b8;
        ColourHSL local_a8;
        undefined8 local_88;
        undefined4 local_80;
        undefined8 local_78;
        undefined4 local_70;
        undefined8 local_68;
        undefined4 local_60;
        ColourHSL local_58;
        undefined1 local_48[8];
        undefined8 local_40;
        undefined4 local_38;

        ptVar6 = (type*)(ulong)param_4;
        new (local_48) oldscape::sidebars::SideBarData(param_4, 1);
        puVar3 = (undefined8*)field_168->y();
        local_88 = *puVar3;
        local_80 = *(undefined4*)(puVar3 + 1);
        pvVar4 = (field_168, ptVar6)->SSOBeginPtr();
        iVar2 = game::Entity::GetFloorHeightAtCoord(pvVar4, param_2, param_3, 1, 0);
        local_88 = CONCAT44((float)iVar2, (undefined4)local_88);
        plVar5 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar5 != (long*)0) {
            uVar8 = 0;
            new (&local_a8) math::ColourHSL(-32.0, 0.0, -32.0);
            local_68 = math::operator+((Vector3T*)&local_88, (Vector3T*)&local_a8);
            uVar9 = 0;
            local_60 = uVar8;
            new (&local_58) math::ColourHSL(32.0, 0.0, 32.0);
            local_40 = math::operator+((Vector3T*)&local_88, (Vector3T*)&local_58);
            local_38 = uVar9;
            (**(code**)(*plVar5 + 24))(plVar5, &local_68, &local_40, local_48);
        }
        plVar5 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar5 != (long*)0) {
            uVar8 = 0;
            new (&local_a8) math::ColourHSL(32.0, 0.0, -32.0);
            local_68 = math::operator+((Vector3T*)&local_88, (Vector3T*)&local_a8);
            uVar9 = 0;
            local_60 = uVar8;
            new (&local_58) math::ColourHSL(-32.0, 0.0, 32.0);
            local_40 = math::operator+((Vector3T*)&local_88, (Vector3T*)&local_58);
            local_38 = uVar9;
            (**(code**)(*plVar5 + 24))(plVar5, &local_68, &local_40, local_48);
        }
        eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, BucketAllocatorEASTL>,
                           BucketAllocatorEASTL>::end();
        pCVar7 = &local_a8;
        eastl::ring_buffer<ui::SwipeDelta, eastl::vector<ui::SwipeDelta, eastl::allocator>, eastl::allocator>::end();
        bVar1 = eastl::operator!=((ring_buffer_iterator*)&local_68, (ring_buffer_iterator*)pCVar7);
        if (bVar1) {
            do {
                this_00 = (Vector2T<int>*)local_68.end();
                puVar3 = (undefined8*)this_00->y();
                local_40 = *puVar3;
                local_38 = *(undefined4*)(puVar3 + 1);
                pvVar4 = this_00->SSOBeginPtr(pCVar7);
                iVar2 = game::Entity::GetFloorHeightAtCoord(pvVar4, param_2, param_3, 1, 0);
                local_40 = CONCAT44((float)iVar2, (undefined4)local_40);
                plVar5 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar5 != (long*)0) {
                    fVar10 = 0.0;
                    new (&local_c8) math::ColourHSL(-32.0, 0.0, -32.0);
                    local_58._0_8_ = math::operator+((Vector3T*)&local_40, (Vector3T*)&local_c8);
                    uVar8 = 0;
                    local_58.field_8 = fVar10;
                    new (&local_b8) math::ColourHSL(32.0, 0.0, 32.0);
                    local_78 = math::operator+((Vector3T*)&local_40, (Vector3T*)&local_b8);
                    local_70 = uVar8;
                    (**(code**)(*plVar5 + 24))(plVar5, &local_58, &local_78, local_48);
                }
                plVar5 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar5 != (long*)0) {
                    fVar10 = 0.0;
                    new (&local_c8) math::ColourHSL(32.0, 0.0, -32.0);
                    local_58._0_8_ = math::operator+((Vector3T*)&local_40, (Vector3T*)&local_c8);
                    uVar8 = 0;
                    local_58.field_8 = fVar10;
                    new (&local_b8) math::ColourHSL(-32.0, 0.0, 32.0);
                    local_78 = math::operator+((Vector3T*)&local_40, (Vector3T*)&local_b8);
                    local_70 = uVar8;
                    (**(code**)(*plVar5 + 24))(plVar5, &local_58, &local_78, local_48);
                }
                plVar5 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar5 != (long*)0) {
                    (**(code**)(*plVar5 + 24))(plVar5, (Vector4T<float>*)&local_88, (Vector3T*)&local_40, local_48);
                }
                local_88.SetXYZ((Vector3T*)&local_40);
                eastl::ring_buffer_iterator<EntityWaypoint, EntityWaypoint*, EntityWaypoint&,
                                            eastl::vector<EntityWaypoint, BucketAllocatorEASTL>>::
                operator++((ring_buffer_iterator<EntityWaypoint, EntityWaypoint*, EntityWaypoint&,
                                                 eastl::vector<EntityWaypoint, BucketAllocatorEASTL>>*)&local_68);
                pCVar7 = &local_a8;
                bVar1 = eastl::operator!=(
                    (ring_buffer_iterator<EntityWaypoint, EntityWaypoint*, EntityWaypoint&,
                                          eastl::vector<EntityWaypoint, BucketAllocatorEASTL>>*)&local_68,
                    (ring_buffer_iterator*)pCVar7);
            } while (bVar1);
        }
    }

} // namespace jag
