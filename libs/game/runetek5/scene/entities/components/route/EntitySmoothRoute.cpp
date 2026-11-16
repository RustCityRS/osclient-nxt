// libs/game/runetek5/scene/entities/components/route/EntitySmoothRoute.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "EntitySmoothRoute.h"

namespace jag {
    // 0x1003e8c50
    void EntitySmoothRoute::AddWaypointAtFinePos(const game::CoordFine& coordFine, const MoveSpeed* moveSpeed) {

        EntityWaypoint local_30(coordFine, moveSpeed);
        PushWaypoint(local_30);
    }

    // 0x1003e8c80
    void EntitySmoothRoute::RemoveFirstWaypoint() {
        EntityWaypoint* entityWaypoint;

        entityWaypoint = (EntityWaypoint*)(*field_8)[0];
        *field_168 = *entityWaypoint;
        RemoveFirstWaypoint();
        long lVar1 = field_8->GetAuthWrapper();
        *(uint32_t*)((long)&field_160 + 4) =
            *(uint32_t*)(&reinterpret_cast<const uint64_t*>(&VISIBILITY_SAMPLING_INTERVAL_MS)[5] +
                         (unsigned long)(lVar1 == 1) * 4);
        *(uint32_t*)&field_160 = 0;
        field_192.SetXYZ(*PTR_ZERO_100ee66e8);
    }

    // 0x1003e8d00
    void EntitySmoothRoute::ClearRoute() {

        ClearRoute();
        EntityWaypoint local_30;
        *field_168 = local_30;
        local_30.m_level = 0;
        field_128.SetValue(local_30, 0, 0);
        field_160 = 4575657221408423936;
        field_192.SetXYZ(*PTR_ZERO_100ee66e8);
    }

    // 0x1003e8da0
    void EntitySmoothRoute::SkipToEnd() {
        EntityWaypoint* entityWaypoint1;
        EntityWaypoint* entityWaypoint2;
        EntityWaypoint local_38;

        uint8_t* this_00 = field_8;
        if (this_00->GetAuthWrapper() != 0) {
            *(uint32_t*)&field_160 = 0;
            entityWaypoint1 = (EntityWaypoint*)(*this_00)[0];
            entityWaypoint2 = (EntityWaypoint*)this_00->back();
            eastl::swap<EntityWaypoint>(*entityWaypoint1, *entityWaypoint2);
            this_00->resize(1);
            local_38 = EntityWaypoint();
            *field_168 = local_38;
            field_192.SetXYZ(*PTR_ZERO_100ee66e8);
        }
    }

    // 0x1003e8e40
    void EntitySmoothRoute::AddWaypoint(const game::CoordFine& coordFine1, const game::CoordFine& coordFine2,
                                        const MoveSpeed* moveSpeed) {
        uint8_t* puVar1;
        int iVar4;
        int iVar5;
        long lVar6;
        Vector2T<int>* pVVar7;
        float* pfVar8;
        float in_XMM1_Da;
        uint8_t local_80[40];
        int local_38;
        float local_34;

        Vector2T<int>* this_00 = (Vector2T<int>*)field_168;
        if (this_00->IsValid() == '\0') {
            RegenerateFromNewStartPos(coordFine1);
        } else {
            puVar1 = field_8;
            lVar6 = puVar1->GetAuthWrapper();
            if (lVar6 == 1) {
                local_34 = coordFine2->field_4;
                pVVar7 = (Vector2T<int>*)(*puVar1)[0];
                pfVar8 = (float*)pVVar7->y();
                if (local_34 == *pfVar8) {
                    local_34 = coordFine2->field_12;
                    pVVar7 = (Vector2T<int>*)(*puVar1)[0];
                    lVar6 = pVVar7->y();
                    if (local_34 == *(float*)(lVar6 + 8))
                        goto LAB_1003e8f7d;
                }
                if (1.0 < *(float*)&field_160 || *(float*)&field_160 == 1.0) {
                    LogAssert("m_distAlongCurve < 1.0f",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/components/route/EntitySmoothRoute.cpp",
                              65, "EntitySmoothRoute: End of curve reached but distance not reset");
                }
                new ((local_80 + 16)) EntityWaypoint(coordFine1, moveSpeed);
                *this_00 = (*((local_80 + 16)));
                *(float*)((long)&field_160 + 4) = 1.0 - *(float*)&field_160;
                *(uint32_t*)&field_160 = 0;
                field_192.SetXYZ(*PTR_ZERO_100ee66e8);
            }
        }
    LAB_1003e8f7d:
        puVar1 = field_8;
        lVar6 = puVar1->GetAuthWrapper();
        if (lVar6 != 0) {
            this_00 = (Vector2T<int>*)puVar1->back();
        }
        LoginManager* local_50 = (LoginManager*)puVar1;
        auto vector32 = this_00->y();
        float fVar10 = (float)coordFine2->field_4 - *vector32;
        EnumOptionToggle enumOptionToggle1 = (EnumOptionToggle)fVar10;
        EnumOptionToggle enumOptionToggle1_00 = (EnumOptionToggle)in_XMM1_Da;
        EnumOptionToggle EVar9 = -enumOptionToggle1;
        if ((int)-enumOptionToggle1 < 0) {
            EVar9 = enumOptionToggle1;
        }
        EnumOptionToggle EVar3 = -enumOptionToggle1_00;
        if ((int)-enumOptionToggle1_00 < 0) {
            EVar3 = enumOptionToggle1_00;
        }
        if ((EVar9 < 257) && (EVar3 < 257)) {
            local_38 = (int)*(float*)vector32;
            local_34 = (float)(int)*(float*)(vector32 + 8);
            while ((enumOptionToggle1 != 0 || enumOptionToggle1_00 != 0 ||
                    (lVar6 = local_50->GetAuthWrapper(), lVar6 == 0))) {
                if ((int)enumOptionToggle1 < 1) {
                    if ((int)enumOptionToggle1 < 0) {
                        iVar4 = eastl::min<graphics::GraphicsQuality>(-enumOptionToggle1, 64);
                        iVar4 = local_38 - iVar4;
                        enumOptionToggle1 = eastl::min<graphics::GraphicsQuality>(0, enumOptionToggle1 + 64);
                        goto LAB_1003e90b0;
                    }
                    enumOptionToggle1 = 0;
                    iVar4 = local_38;
                    if (0 < (int)enumOptionToggle1_00)
                        goto LAB_1003e9000;
                LAB_1003e90d5:
                    if ((int)enumOptionToggle1_00 < 0) {
                        iVar5 = eastl::min<graphics::GraphicsQuality>(-enumOptionToggle1_00, 64);
                        fVar10 = (float)((int)local_34 - iVar5);
                        enumOptionToggle1_00 = eastl::min<graphics::GraphicsQuality>(0, enumOptionToggle1_00 + 64);
                    } else {
                        fVar10 = local_34;
                        enumOptionToggle1_00 = 0;
                    }
                } else {
                    iVar4 = eastl::min<graphics::GraphicsQuality>(enumOptionToggle1, 64);
                    iVar4 = local_38 + iVar4;
                    enumOptionToggle1 = eastl::max<int>(0, enumOptionToggle1 - 64);
                LAB_1003e90b0:
                    if ((int)enumOptionToggle1_00 < 1)
                        goto LAB_1003e90d5;
                LAB_1003e9000:
                    iVar5 = eastl::min<graphics::GraphicsQuality>(enumOptionToggle1_00, 64);
                    fVar10 = (float)((int)local_34 + iVar5);
                    enumOptionToggle1_00 = eastl::max<int>(0, enumOptionToggle1_00 - 64);
                }
                local_38 = iVar4;
                local_34 = fVar10;
                new (local_80) game::CoordFine(coordFine2->field_0, (float)iVar4, (float)(int)fVar10);
                new ((local_80 + 16)) EntityWaypoint(*local_80, moveSpeed);
                PushWaypoint(*((local_80 + 16)));
            }
        } else {
            new ((local_80 + 16)) EntityWaypoint(*coordFine2, moveSpeed);
            PushWaypoint(*((local_80 + 16)));
        }
    }

    // 0x1003e91c0
    void EntitySmoothRoute::RegenerateFromNewStartPos(const game::CoordFine& coordFine) {
        uint8_t* this_00;
        bool bVar2;
        NXTPixToolkit* this_01;
        MoveSpeed* moveSpeed;
        uint8_t auVar3[16];
        ReturnValue local_50;
        ReturnValue local_40;

        EntityWaypoint local_80(coordFine, (MoveSpeed*)MoveSpeed::STATIONARY);
        *field_168 = local_80;
        field_192.SetXYZ(*PTR_ZERO_100ee66e8);
        if (field_168->IsValid() != '\0') {
            local_80 = eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, BucketAllocatorEASTL>,
                                          BucketAllocatorEASTL>(0);
            this_00 = field_8;
            auVar3 = this_00->begin();
            this_00->end();
            eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, BucketAllocatorEASTL>,
                               BucketAllocatorEASTL>::
                assign<eastl::ring_buffer_iterator<EntityWaypoint, EntityWaypoint const*, EntityWaypoint const&,
                                                   eastl::vector<EntityWaypoint>>>(&local_80, auVar3._0_8_,
                                                                                   auVar3._8_8_);
            this_00->clear();
            local_50 = local_80.begin();
            local_40 = local_80.end();
            bVar2 = local_50 != local_40;
            if (bVar2) {
                do {
                    this_01 = (NXTPixToolkit*)local_50.end();
                    moveSpeed = (MoveSpeed*)this_01->SSOBeginPtr();
                    this_01->GetScreen();
                    AddWaypoint(coordFine, moveSpeed);
                    ++local_50;
                    bVar2 = local_50 != local_40;
                } while (bVar2);
            }
        }
    }

    // 0x1003e9470
    auto EntitySmoothRoute::MoveAlongRoute(const game::CoordFine& coordFine, FacingController& facingController,
                                           int arg3) {
        uint8_t* this_00;
        unsigned int arg2;
        ReturnValue moveSpeed;
        EntityWaypoint* entityWaypoint;
        Vector2T<int>* pVVar2;
        Vector3T<float>* vector3;
        float* pfVar3;
        long lVar4;
        unsigned long uVar5;
        NXTPixToolkit* this_01;
        ReturnValue* pRVar6;
        EntityRoute* this_02;
        uint32_t uVar7;
        float fVar8;
        uint64_t local_68;
        float local_60;
        uint64_t local_50;
        float local_48;
        ReturnValue* local_40;
        float local_38;
        float local_34;

        uint32_t arg4 = coordFine.field_4;
        auto result(0, (Vector3T<float>*)MoveSpeed::STATIONARY, facingController, (float)arg4);
        bool cVar1 = field_168->IsValid();
        if (!cVar1) {
            RegenerateFromNewStartPos(coordFine);
        }
        cVar1 = IsCurveValid();
        if (!cVar1) {
            local_50 = (unsigned long)local_50._4_4_ << 32;
            field_128.SetValue(local_50, 0, 0);
        } else {
            arg2 = coordFine.field_0;
            this_00 = field_8;
            this_02 = (EntityRoute*)this_00;
            local_40 = &result;
            local_38 = (float)arg3;
            entityWaypoint = (EntityWaypoint*)(*this_00)[0];
            cVar1 = this_02->IsWaypointTooFar(coordFine.field_4, arg2, *entityWaypoint);
            &result = local_40;
            if (!cVar1) {
                local_34 = coordFine.field_4;
                pVVar2 = (Vector2T<int>*)(*this_00)[0];
                pfVar3 = (float*)pVVar2->y();
                if (local_34 == *pfVar3) {
                    local_34 = coordFine.field_12;
                    pVVar2 = (Vector2T<int>*)(*this_00)[0];
                    lVar4 = pVVar2->y();
                    if (local_34 == *(float*)(lVar4 + 8)) {
                        RemoveFirstWaypoint();
                        return local_40;
                    }
                }
                uVar5 = this_00->GetAuthWrapper();
                this_01 = (NXTPixToolkit*)(*this_00)[(unsigned long)(1 < uVar5)];
                pRVar6 = (ReturnValue*)this_01->GetScreen();
                moveSpeed = *pRVar6;
                local_34 = (float)UpdateSpeed(moveSpeed);
                UpdateEntityTurnSpeed(facingController, local_34, (int)local_38);
                &result = local_40;
                if (local_34 != 0.0) {
                    fVar8 = local_34;
                    local_38 = (float)UpdateCurvePosition(local_34);
                    *(float*)&field_160 = local_38;
                    local_38 = local_38 / *(float*)((long)&field_160 + 4);
                    local_50 = GetLocalTranslationOnCurve(local_38);
                    local_48 = fVar8;
                    uVar7 = CalculateMovementAngle(local_50);
                    *(uint32_t*)(&result + 3) = uVar7;
                    local_68 = LocalTranslationToWorldTranslation(local_50);
                    local_60 = fVar8;
                    result.field_4.SetXYZ(local_68);
                    &result[2] = moveSpeed;
                    result = 1;
                    UpdateRoute(local_38);
                    uVar7 = eastl::max<int>(0, field_68 - 1);
                    field_68 = uVar7;
                }
            } else {
                *(uint32_t*)local_40 = 2;
                pVVar2 = (Vector2T<int>*)this_00->back();
                vector3 = (Vector3T<float>*)pVVar2->y();
                result.field_4.SetXYZ(*vector3);
            }
        }
        return result;
    }

    // 0x1003e96d0
    bool EntitySmoothRoute::IsCurveValid() const {
        bool cVar1;
        uint32_t uVar2;
        EntityWaypoint* pEVar4;

        uint8_t* this_00 = field_8;
        long lVar3 = this_00->GetAuthWrapper();
        if (lVar3 == 0) {
            uVar2 = 0;
        } else {
            cVar1 = field_168->IsValid();
            uVar2 = 0;
            if (cVar1) {
                pEVar4 = (EntityWaypoint*)(*this_00)[0];
                cVar1 = pEVar4->IsValid();
                if (cVar1) {
                    lVar3 = this_00->GetAuthWrapper();
                    uVar2 = 1;
                    if (lVar3 != 1) {
                        pEVar4 = (EntityWaypoint*)(*this_00)[1];
                        uVar2 = pEVar4->IsValid();
                    }
                }
            }
        }
        return uVar2;
    }

    // 0x1003e9750
    uint64_t EntitySmoothRoute::UpdateSpeed(const MoveSpeed* moveSpeed) {
        float* arg1;
        float fVar2;
        float local_30;
        float local_2c;
        float local_28;

        unsigned long long uVar1 = FrameTime::GetCurrentTimeMS();
        uint64_t uVar3 = field_128.GetValue(uVar1);
        uint32_t uVar4 = (uint32_t)((unsigned long)uVar3 >> 32);
        float local_24 = (float)uVar3 * 0.0078125f;
        if ((*(float*)&field_160 == 0.0) || (local_24 == 0.0)) {
            fVar2 = (float)GetCatchUpMultiplier(moveSpeed);
            if (((MoveSpeed*)MoveSpeed::WALK == moveSpeed) || ((MoveSpeed*)MoveSpeed::STATIONARY == moveSpeed)) {
                local_30 = fVar2 * 4.0;
                uVar1 = FrameTime::GetCurrentTimeMS();
                arg1 = &local_30;
            } else if ((MoveSpeed*)MoveSpeed::RUN == moveSpeed) {
                local_2c = fVar2 * 8.0;
                uVar1 = FrameTime::GetCurrentTimeMS();
                arg1 = &local_2c;
            } else {
                uVar4 = 0;
                if ((MoveSpeed*)MoveSpeed::CRAWL != moveSpeed)
                    goto LAB_1003e9836;
                local_28 = fVar2 + fVar2;
                uVar1 = FrameTime::GetCurrentTimeMS();
                arg1 = &local_28;
            }
            field_128.SetValue(*arg1, 200, uVar1);
            uVar4 = 0;
        }
    LAB_1003e9836:
        return (((uint64_t)uVar4 << 32) | (uint32_t)local_24);
    }

    // 0x1003e9850
    void EntitySmoothRoute::UpdateEntityTurnSpeed(FacingController& facingController, float arg2, int arg3) {
        float arg1;

        if (arg3 < 2) {
            arg1 = (float)eastl::max_alt(arg2 * -16.0 + 2.0, 0.8);
        } else {
            arg1 = 1.0;
        }
        facingController.SetVerticalFov(arg1);
    }

    // 0x1003e98a0
    void EntitySmoothRoute::UpdateCurvePosition(float arg1) {
        float arg1_00;

        if (InStraightLine() == '\0') {
            arg1_00 = 1.0;
        } else {
            arg1_00 = 0.5;
        }
        eastl::min<float>(arg1_00, arg1 + *(float*)&field_160);
    }

    // 0x1003e98f0
    uint64_t EntitySmoothRoute::GetLocalTranslationOnCurve(float arg1) {
        float* pfVar5;
        uint64_t uVar6;
        float local_58[2];
        ColourHSL local_50;
        uint64_t local_40;

        uint8_t* this_00 = field_8;
        float local_34 = arg1;
        if (this_00->GetAuthWrapper() == 0) {
            LogAssert("m_route.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/components/route/EntitySmoothRoute.cpp",
                      245, "EntitySmoothRoute: Trying to find a point on a curve without enough waypoints");
        }
        local_40 = (unsigned long)local_40._4_4_ << 32;
        local_58[0] = 1.0;
        local_34 = math::Clamp<float>(local_34, local_40, *local_58);
        unsigned long uVar3 = this_00->GetAuthWrapper();
        Vector2T<int>* pVVar4 = (Vector2T<int>*)(*this_00)[(unsigned long)(1 < uVar3)];
        auto vector32 = field_168->y();
        auto vector31 = pVVar4->y();
        if (InStraightLine() == '\0') {
            pVVar4 = (Vector2T<int>*)(*this_00)[0];
            pfVar5 = (float*)pVVar4->y();
            new (&local_40) math::Point(*pfVar5 - *(float*)vector32, pfVar5[2] - *(float*)(vector32 + 8));
            new (local_58)
                math::Point(*(float*)vector31 - *(float*)vector32, *(float*)(vector31 + 8) - *(float*)(vector32 + 8));
            uVar6 = math::QuadraticBezier<float>(*PTR_ZERO_100ee66a8, local_40, *local_58, local_34);
            local_50 = math::ColourHSL((float)uVar6, 0.0, (float)((unsigned long)uVar6 >> 32));
        } else {
            local_40 = *vector31 - *vector32;
            local_50._0_8_ = math::Lerp<math::Vector3T<float>, float>(*PTR_ZERO_100ee66e8, local_40, local_34);
        }
        uVar6._0_4_ = local_50.field_0;
        uVar6._4_4_ = local_50.field_4;
        return uVar6;
    }

    // 0x1003e9a70
    uint32_t EntitySmoothRoute::CalculateMovementAngle(const math::Vector3T<float>& vector3) {
        uint64_t local_30 = vector3 - field_192;
        float* pfVar1 = &local_30[0];
        return local_24 = *pfVar1;
        pfVar1 = &local_30[2];
        Point<float> local_38(local_24, *pfVar1);
        pfVar1 = &local_38[0];
        local_24 = *pfVar1;
        pfVar1 = &local_38[1];
        local_24 = (float)math::conversion::JagAtan2(local_24, *pfVar1);
        field_192.SetXYZ(vector3);
        return local_24;
    }

    // 0x1003e9b60
    void EntitySmoothRoute::UpdateRoute(float arg1) {
        bool cVar1;
        unsigned long uVar2;

        if (((arg1 < 0.5) || (uVar2 = field_8->GetAuthWrapper(), uVar2 < 2)) || (cVar1 = InStraightLine(), !cVar1)) {
            if (arg1 < 1.0) {
                return;
            }
            RemoveFirstWaypoint();
            if (field_8->GetAuthWrapper() == 0) {
                return;
            }
        }
        RemoveFirstWaypoint();
    }

    // 0x1003e9bd0
    unsigned long EntitySmoothRoute::InStraightLine() {
        float fVar1;
        float fVar2;
        float fVar3;
        float* pfVar5;
        Vector2T<int>* pVVar6;
        long lVar7;
        uint64_t unaff_R15;

        uint8_t* this_00 = field_8;
        unsigned long uVar4 = this_00->GetAuthWrapper();
        unsigned long uVar8 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
        if (1 < uVar4) {
            pfVar5 = (float*)field_168->y();
            fVar1 = *pfVar5;
            uVar8 = 0;
            pVVar6 = (Vector2T<int>*)(*this_00)[0];
            pfVar5 = (float*)pVVar6->y();
            fVar2 = *pfVar5;
            pVVar6 = (Vector2T<int>*)(*this_00)[0];
            pfVar5 = (float*)pVVar6->y();
            fVar3 = *pfVar5;
            pVVar6 = (Vector2T<int>*)(*this_00)[1];
            pfVar5 = (float*)pVVar6->y();
            if (fVar1 - fVar2 == fVar3 - *pfVar5) {
                lVar7 = field_168->y();
                fVar1 = *(float*)(lVar7 + 8);
                pVVar6 = (Vector2T<int>*)(*this_00)[0];
                lVar7 = pVVar6->y();
                fVar2 = *(float*)(lVar7 + 8);
                pVVar6 = (Vector2T<int>*)(*this_00)[0];
                lVar7 = pVVar6->y();
                fVar3 = *(float*)(lVar7 + 8);
                pVVar6 = (Vector2T<int>*)(*this_00)[1];
                lVar7 = pVVar6->y();
                uVar8 = (unsigned long)(fVar1 - fVar2 == fVar3 - *(float*)(lVar7 + 8));
            }
        }
        return uVar8 & 4294967295;
    }

    // 0x1003e9e00
    void EntitySmoothRoute::GetCatchUpMultiplier(const MoveSpeed* moveSpeed) {
        bool bVar2 = (MoveSpeed*)MoveSpeed::CRAWL == moveSpeed;
        int iVar1 = field_8->GetAuthWrapper();
        float arg1 = (float)(int)(iVar1 + (unsigned int)bVar2 - 3) * 0.1 + 1.0;
        if (0 < (int)field_68) {
            arg1 = arg1 + arg1;
        }
        eastl::min<float>(arg1, 2.0);
    }

    // 0x1003e9e70
    void EntitySmoothRoute::UpdateEntitySize(int arg1, int arg2) {
        uint64_t* puVar1;
        float* pfVar3;
        EntityWaypoint local_50;
        uint8_t local_38[20];
        float local_24;

        UpdateEntitySize(arg1, arg2);
        uint8_t* this_00 = field_168;
        if (this_00->IsValid() != '\0') {
            local_24 = (float)((arg2 - arg1) * 128) * 0.5;
            puVar1 = (uint64_t*)this_00->SSOBeginPtr();
            local_38._0_8_ = *puVar1;
            local_38._8_8_ = puVar1[1];
            pfVar3 = (float*)((local_38 + 4))->SSOBeginPtr();
            *pfVar3 = *pfVar3 + local_24;
            pfVar3 = (float*)((local_38 + 4))->second();
            *pfVar3 = local_24 + *pfVar3;
            puVar1 = (uint64_t*)this_00->GetScreen();
            local_50 = EntityWaypoint(*local_38, *puVar1);
            *this_00 = local_50;
        }
    }

    // 0x1003e9f30
    void EntitySmoothRoute::RenderDebug(const game::CoordFine& coordFine, const game::HeightMap& heightMap,
                                        const game::LinkMap& linkMap, unsigned int arg4) {
        Vector2T<int>* this_00;
        uint32_t uVar6;
        uint32_t uVar7;
        float fVar8;
        ColourHSL local_c8;
        ColourHSL local_b8;
        uint64_t local_78;
        uint32_t local_70;
        ReturnValue local_68;
        uint32_t local_60;
        ColourHSL local_58;
        uint8_t local_48[8];
        uint64_t local_40;
        uint32_t local_38;

        new (local_48) oldscape::sidebars::SideBarData(arg4, 1);
        auto puVar3 = field_168->y();
        uint64_t local_88 = *puVar3;
        uint32_t local_80 = *(uint32_t*)(puVar3 + 1);
        auto pCVar4 = field_168->SSOBeginPtr();
        int iVar2 = game::Entity::GetFloorHeightAtCoord(*pCVar4, heightMap, linkMap, true, 0);
        local_88 = (((uint64_t)((float)iVar2) << 32) | (uint32_t)((uint32_t)local_88));
        auto plVar5 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar5 != nullptr) {
            uVar6 = 0;
            local_a8 = math::ColourHSL(-32.0, 0.0, -32.0);
            local_68 = (ReturnValue)local_88 + local_a8;
            uVar7 = 0;
            local_60 = uVar6;
            local_58 = math::ColourHSL(32.0, 0.0, 32.0);
            local_40 = local_88 + local_58;
            local_38 = uVar7;
            (**(void (**)(...))(*plVar5 + 24))(plVar5, &local_68, &local_40, local_48);
        }
        plVar5 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar5 != nullptr) {
            uVar6 = 0;
            local_a8 = math::ColourHSL(32.0, 0.0, -32.0);
            local_68 = (ReturnValue)local_88 + local_a8;
            uVar7 = 0;
            local_60 = uVar6;
            local_58 = math::ColourHSL(-32.0, 0.0, 32.0);
            local_40 = local_88 + local_58;
            local_38 = uVar7;
            (**(void (**)(...))(*plVar5 + 24))(plVar5, &local_68, &local_40, local_48);
        }
        local_68 = field_8->end();
        ColourHSL local_a8 = field_8->end();
        bool bVar1 = local_68 != local_a8;
        if (bVar1) {
            do {
                this_00 = (Vector2T<int>*)local_68.end();
                puVar3 = (uint64_t*)this_00->y();
                local_40 = *puVar3;
                local_38 = *(uint32_t*)(puVar3 + 1);
                pCVar4 = (CoordFine*)this_00->SSOBeginPtr();
                iVar2 = game::Entity::GetFloorHeightAtCoord(*pCVar4, heightMap, linkMap, true, 0);
                local_40 = (((uint64_t)((float)iVar2) << 32) | (uint32_t)((uint32_t)local_40));
                plVar5 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar5 != nullptr) {
                    fVar8 = 0.0;
                    local_c8 = math::ColourHSL(-32.0, 0.0, -32.0);
                    local_58._0_8_ = local_40 + local_c8;
                    uVar6 = 0;
                    local_58.field_8 = fVar8;
                    local_b8 = math::ColourHSL(32.0, 0.0, 32.0);
                    local_78 = local_40 + local_b8;
                    local_70 = uVar6;
                    (**(void (**)(...))(*plVar5 + 24))(plVar5, &local_58, &local_78, local_48);
                }
                plVar5 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar5 != nullptr) {
                    fVar8 = 0.0;
                    local_c8 = math::ColourHSL(32.0, 0.0, -32.0);
                    local_58._0_8_ = local_40 + local_c8;
                    uVar6 = 0;
                    local_58.field_8 = fVar8;
                    local_b8 = math::ColourHSL(-32.0, 0.0, 32.0);
                    local_78 = local_40 + local_b8;
                    local_70 = uVar6;
                    (**(void (**)(...))(*plVar5 + 24))(plVar5, &local_58, &local_78, local_48);
                }
                plVar5 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar5 != nullptr) {
                    (**(void (**)(...))(*plVar5 + 24))(plVar5, (Vector4T<float>*)&local_88, (Vector3T<float>*)&local_40,
                                                       local_48);
                }
                local_88.SetXYZ(local_40);
                ++local_68;
                bVar1 = local_68 != local_a8;
            } while (bVar1);
        }
    }

} // namespace jag
