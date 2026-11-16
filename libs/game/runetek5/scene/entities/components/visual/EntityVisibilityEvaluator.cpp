// libs/game/runetek5/scene/entities/components/visual/EntityVisibilityEvaluator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "libs/game/runetek5/scene/Entity.h"

namespace jag {
    // 0x100d42c38, 48 bytes, __const
    EntityVisibilityEvaluator::VISIBILITY_SAMPLING_INTERVAL_MS = {1007192201, -998653952, 1046562734, 1061494456,
                                                                  1034952901, 1063843267, 0,          1065353216,
                                                                  -1,         -1,         1065353216, 1056964608};

    // 0x100f383b8, 4 bytes, __data
    EntityVisibilityEvaluator::m_visibilityEnabled = 1;

    // 0x100f383bc, 4 bytes, __data
    EntityVisibilityEvaluator::m_visibilityRatioPixels = 1043542835;

    // 0x100f383c0, 4 bytes, __data
    EntityVisibilityEvaluator::m_visibilityRatioQueries = 1051931443;

    // 0x100f383c4, 4 bytes, __data
    float EntityVisibilityEvaluator::m_visibilitySpeedDown = 5.0f;

    // 0x100f383c8, 4 bytes, __data
    float EntityVisibilityEvaluator::m_visibilitySpeedUp = 2.0f;

    // 0x1003daa30, 816 bytes, placed by class name and debug map
    // EntityVisibilityEvaluator::Update(bool, PathingEntity const&, float, graphics::RT7Core&, math::Rect<int> const&)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* EntityVisibilityEvaluator::Update(bool, PathingEntity const&, float,
   graphics::RT7Core&, math::Rect<int> const&) */

    void EntityVisibilityEvaluator::Update(bool param_1, PathingEntity* param_2, float param_3, RT7Core* param_4,
                                           Rect* param_5) {
        bool bVar1;
        uint uVar2;
        int iVar3;
        AnimatedModel* this_00;
        shared_ptr* this_01;
        Model* pMVar4;
        shared_ptr* this_02;
        GeometryQuery* this_03;
        QueryPass* this_04;
        Capsule2D* this_05;
        int* piVar5;
        vector* pvVar6;
        float* pfVar7;
        undefined8 uVar8;
        EntityVisibilityEvaluator* pEVar9;
        undefined7 in_register_00000031;
        _func_decltype_nullptr* p_Var10;
        Vector2T* pVVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        Rect<unsigned int> local_90[16];
        Point<float> local_80[8];
        Point<float> local_78[8];
        undefined8 local_70[2];
        undefined8 local_60;
        shared_ptr local_58;
        uint local_44;
        EntityVisibilityEvaluator* local_40;
        float local_34;

        p_Var10 = (_func_decltype_nullptr*)CONCAT71(in_register_00000031, param_1);
        local_40 = this;
        this_00 = (AnimatedModel*)param_2->GetLightProbe();
        this_01 = (shared_ptr*)this_00->GetCurrentModel();
        bVar1 = shared_ptr::operator_cast_to_bool(this_01);
        if (bVar1) {
            if (param_1) {
                pMVar4 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
                this_02 = (shared_ptr*)pMVar4->GetGeometryQuery();
                bVar1 = shared_ptr::operator_cast_to_bool(this_02);
                if (bVar1) {
                    fVar12 = *(float*)local_40;
                    *(float*)local_40 = fVar12 - param_3;
                    pEVar9 = local_40;
                    if (fVar12 - param_3 <= 0.0) {
                        this_03 = (GeometryQuery*)shared_ptr<graphics::GeometryQuery>::operator->(
                            (shared_ptr<graphics::GeometryQuery>*)this_02);
                        local_44 = this_03->GetResult();
                        this_04 = (QueryPass*)param_4->GetQueryPass();
                        uVar2 = this_04->GetOcclusionTargetWidth();
                        local_34 = (float)uVar2;
                        uVar2 = this_04->GetOcclusionTargetHeight();
                        math::Point<float>::Point(local_80, local_34, (float)uVar2);
                        new (&local_58) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var10);
                        this_05 = (Capsule2D*)param_2->GetFogOverrides();
                        this_05->GetBoundingBox((Rect*)&local_58);
                        math::Rect<unsigned int>::Rect(local_90, param_5);
                        local_70->Intersection(&local_58, local_90);
                        math::Rect<unsigned int>::operator=((Rect<unsigned int>*)&local_58, (Rect*)local_70);
                        iVar3 = param_5->GetPos();
                        local_34 = (float)iVar3;
                        iVar3 = param_5->GetLevel();
                        new (&local_60) math::Point<float>(local_34, (float)iVar3);
                        local_70[0] = math::operator/((Vector2T*)local_80, (Vector2T*)&local_60);
                        piVar5 = (int*)local_58.second();
                        local_34 = (float)*piVar5;
                        piVar5 = (int*)local_58.qw();
                        math::Point<float>::Point(local_78, local_34, (float)*piVar5);
                        pVVar11 = (Vector2T*)local_70;
                        local_60 = math::operator*((Vector2T*)local_78, pVVar11);
                        local_34 = m_visibilityRatioPixels;
                        pvVar6 = local_60.SSOBeginPtr(pVVar11);
                        local_34 = local_34 * *(float*)pvVar6;
                        pfVar7 = (float*)local_60.y();
                        if (local_34 * *pfVar7 == 0.0) {
                            fVar12 = 1.0;
                        } else {
                            fVar12 = (float)eastl::min<float>(1.0, (float)local_44 / (local_34 * *pfVar7));
                        }
                        pEVar9 = local_40;
                        ((local_40 + 8))->Push(fVar12);
                        *(float*)pEVar9 = *(float*)pEVar9 + 0.008333334;
                    }
                    fVar13 = (float)((pEVar9 + 8))->GetMean();
                    fVar12 = *(float*)(pEVar9 + 4);
                    fVar14 = (fVar13 - fVar12) * param_3;
                    if (fVar12 <= fVar13) {
                        fVar12 = (float)eastl::min<float>(fVar13, fVar14 * _m_visibilitySpeedUp + fVar12);
                    } else {
                        fVar12 = (float)eastl::max_alt(fVar13, fVar14 * m_visibilitySpeedDown + fVar12);
                    }
                    *(float*)(pEVar9 + 4) = fVar12;
                    return;
                }
                pMVar4 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
                uVar8 = param_4->GetGeometryQueryManager();
                graphics::GeometryQueryManager::Create(&local_58, uVar8, 1, 1);
                pMVar4->SetGeometryQuery(&local_58);
            } else {
                *(float*)(local_40 + 4) = 1.0;
                pMVar4 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
                new (&local_58) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                pMVar4->SetGeometryQuery(&local_58);
            }
            local_58.~shared_ptr();
        }
    }

} // namespace jag
