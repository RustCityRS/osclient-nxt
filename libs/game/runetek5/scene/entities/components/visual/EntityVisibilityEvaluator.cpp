// libs/game/runetek5/scene/entities/components/visual/EntityVisibilityEvaluator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "libs/game/runetek5/scene/Entity.h"

namespace jag {
    // 0x100d42c38
    int32_t EntityVisibilityEvaluator::VISIBILITY_SAMPLING_INTERVAL_MS[12] = {
        1007192201, -998653952, 1046562734, 1061494456, 1034952901, 1063843267,
        0,          1065353216, -1,         -1,         1065353216, 1056964608};

    // 0x100f383b8
    int32_t EntityVisibilityEvaluator::m_visibilityEnabled = 1;

    // 0x100f383bc
    int32_t EntityVisibilityEvaluator::m_visibilityRatioPixels = 1043542835;

    // 0x100f383c0
    int32_t EntityVisibilityEvaluator::m_visibilityRatioQueries = 1051931443;

    // 0x100f383c4
    float EntityVisibilityEvaluator::m_visibilitySpeedDown = 5.0f;

    // 0x100f383c8
    float EntityVisibilityEvaluator::m_visibilitySpeedUp = 2.0f;

    // 0x1003daa30
    void EntityVisibilityEvaluator::Update(bool arg1, const PathingEntity& pathingEntity, float arg3,
                                           graphics::RT7Core& rt7Core, const math::Rect<int>& rect) {
        unsigned int uVar2;
        int iVar3;
        Model* pMVar4;
        shared_ptr* this_02;
        QueryPass* this_04;
        int* piVar5;
        float* pfVar6;
        EntityVisibilityEvaluator* pEVar7;
        float fVar8;
        float arg1_00;
        float fVar9;
        Rect<unsigned int> local_90;
        Point<float> local_80;
        Point<float> local_78;
        uint8_t local_70[16];
        uint64_t local_60;
        ReturnValue local_58;
        unsigned int local_44;
        float local_34;

        EntityVisibilityEvaluator* local_40 = this;
        auto this_00 = pathingEntity.GetLightProbe();
        auto this_01 = this_00->GetCurrentModel();
        if (shared_ptr::operator_cast_to_bool(this_01)) {
            if (arg1) {
                pMVar4 = (Model*)(*this_01).operator->();
                this_02 = (shared_ptr*)pMVar4->GetGeometryQuery();
                if (shared_ptr::operator_cast_to_bool(this_02)) {
                    fVar8 = *(float*)local_40;
                    *(float*)local_40 = fVar8 - arg3;
                    pEVar7 = local_40;
                    if (fVar8 - arg3 <= 0.0) {
                        local_44 = ((GeometryQuery*)(*this_02).operator->())->GetResult();
                        this_04 = (QueryPass*)rt7Core.GetQueryPass();
                        uVar2 = this_04->GetOcclusionTargetWidth();
                        local_34 = (float)uVar2;
                        uVar2 = this_04->GetOcclusionTargetHeight();
                        local_80 = math::Point(local_34, (float)uVar2);
                        local_58 = shared_ptr();
                        ((Capsule2D*)pathingEntity.GetFogOverrides())->GetBoundingBox(local_58);
                        local_90 = math::Rect(rect);
                        *local_70 = local_58.Intersection(&local_90);
                        local_58 = *local_70;
                        iVar3 = rect.GetPos();
                        local_34 = (float)iVar3;
                        iVar3 = rect.GetLevel();
                        new (&local_60) math::Point(local_34, (float)iVar3);
                        local_70._0_8_ = local_80 / local_60;
                        piVar5 = (int*)local_58.second();
                        local_34 = (float)*piVar5;
                        piVar5 = (int*)local_58.qw();
                        local_78 = math::Point(local_34, (float)*piVar5);
                        local_60 = local_78 * *local_70;
                        local_34 = m_visibilityRatioPixels;
                        pfVar6 = (float*)local_60.SSOBeginPtr();
                        local_34 = local_34 * *pfVar6;
                        pfVar6 = (float*)local_60.y();
                        if (local_34 * *pfVar6 == 0.0) {
                            fVar8 = 1.0;
                        } else {
                            fVar8 = (float)eastl::min<float>(1.0, (float)local_44 / (local_34 * *pfVar6));
                        }
                        pEVar7 = local_40;
                        ((local_40 + 8))->Push(fVar8);
                        *(float*)pEVar7 = *(float*)pEVar7 + 0.008333334f;
                    }
                    arg1_00 = (float)((pEVar7 + 8))->GetMean();
                    fVar8 = *(float*)(pEVar7 + 4);
                    fVar9 = (arg1_00 - fVar8) * arg3;
                    if (fVar8 <= arg1_00) {
                        fVar8 = (float)eastl::min<float>(arg1_00, fVar9 * m_visibilitySpeedUp + fVar8);
                    } else {
                        fVar8 = (float)eastl::max_alt(arg1_00, fVar9 * m_visibilitySpeedDown + fVar8);
                    }
                    *(float*)(pEVar7 + 4) = fVar8;
                    return;
                }
                pMVar4 = (Model*)(*this_01).operator->();
                local_58 = ((GeometryQueryManager*)rt7Core.GetGeometryQueryManager())->Create(1, true);
                pMVar4->SetGeometryQuery(local_58);
            } else {
                *(float*)(local_40 + 4) = 1.0;
                pMVar4 = (Model*)(*this_01).operator->();
                local_58 = shared_ptr();
                pMVar4->SetGeometryQuery(local_58);
            }
        }
    }

} // namespace jag
