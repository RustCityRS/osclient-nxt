// libs/oldscape/osrendercore/rseven/entities/DynamicGeometry.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.osrendercore

#include "DynamicGeometry.h"

namespace jag::oldscape::rseven {
    // 0x1001cbfd0
    void DynamicGeometry::UpdateModel(const RenderState::ModelSubmissionRSeven& modelSubmissionRSeven,
                                      jag::graphics::RT7Core& rt7Core) {
        uint8_t* this_00 = modelSubmissionRSeven.field_16;
        auto this_01 = this_00->GetModel();
        if (((Model*)(*this_01).operator->())->GetBatchCount() == 0) {
            field_40.reset();
            field_24.reset();
        } else {
            UpdateModelGeometry(modelSubmissionRSeven, rt7Core, *(int*)&modelSubmissionRSeven.field_160);
            UpdateModelTransform(modelSubmissionRSeven, *this_00);
            UpdateModelAnimationState(*this_00, rt7Core);
        }
    }

    // 0x1001d09c0
    void DynamicGeometry::Destruct() {
        Clear();
    }

    // 0x1001d09d0
    void DynamicGeometry::Clear() {
        GetNode()->Destruct();
    }

    // 0x1001d0a50
    void DynamicGeometry::UpdateModelGeometry(const RenderState::ModelSubmissionRSeven& modelSubmissionRSeven,
                                              jag::graphics::RT7Core& rt7Core, int arg3) {
        uint8_t bVar3;
        unsigned short uVar4;
        unsigned int uVar5;
        Model* pMVar6;
        shared_ptr<jag::graphics::Model>* this_00;
        GraphNode* pGVar7;
        NXTPixToolkit* this_01;
        AABB* aabb;
        uint8_t* this_02;
        uint32_t local_68[4];
        ReturnValue local_48;

        auto groundDecor = modelSubmissionRSeven.field_16->TryGetUploadableModel();
        shared_ptr local_58(groundDecor);
        bool bVar1 = local_58 != nullptr;
        if (!bVar1) {
            LogAssert("uploadable != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "rseven/entities/DynamicGeometry.cpp",
                      118,
                      "A resolved model made it to the render thread without an uploadable copy for the render thread "
                      "to use.");
        }
        if (shared_ptr::operator_cast_to_bool(&local_58) != '\0') {
            bVar1 = local_58 != field_40;
            if (bVar1) {
                pMVar6 = (Model*)*local_58;
                FinishModel(pMVar6, rt7Core);
                field_40 = local_58;
                this_00 = (shared_ptr<jag::graphics::Model>*)modelSubmissionRSeven.field_16->GetUploadableModel();
                pMVar6 = (Model*)**this_00;
                local_68[0] = 2;
                make_shared<jag::graphics::Model, jag::graphics::Model const&, jag::graphics::ModelCopyType>(
                    &local_48, pMVar6, (ModelCopyType*)local_68);
                pMVar6 = (Model*)local_48.operator->();
                pMVar6->UpdateFade(0);
                field_24 = local_48;
                field_72 = arg3;
                new (local_68) shared_ptr();
                *field_56 = *local_68;
                pGVar7 = GetNode();
                if (pGVar7 != nullptr) {
                    pGVar7 = GetNode();
                    this_01 = (NXTPixToolkit*)field_24.operator->();
                    aabb = (AABB*)this_01->GetScreen();
                    pGVar7->SetAABB(*aabb);
                }
            }
        }
        bVar1 = field_24 != nullptr;
        if (bVar1) {
            pMVar6 = (Model*)*field_24;
            if (*(short*)(modelSubmissionRSeven.field_166 + 8) == 0) {
                pMVar6->SetHighlight(0.0, *PTR_ZERO_100ee6708, 0.0);
                pMVar6->SetHighlightsIgnoreDepth(false);
                SetModelHighlightable(pMVar6, false);
            } else {
                this_02 = modelSubmissionRSeven.field_166;
                field_21 = (uint8_t)((unsigned short)*(short*)(modelSubmissionRSeven.field_166 + 8) >> 10) & 1;
                uVar4 = this_02->GetEntityID();
                uVar5 = jag::math::RunetekColour::HSLToRGB(uVar4);
                uVar4 = this_02->GetModelOutlineWidth();
                jag::math::Colour4FromA8R8G8B8(uVar5 | 4278190080);
                bVar3 = this_02->GetModelTintAlpha();
                pMVar6->SetHighlight((float)uVar4 * 3.0, local_48, (float)bVar3 * 0.003921569f);
                bVar1 = (bool)this_02->AlwaysOnTop();
                pMVar6->SetHighlightsIgnoreDepth(bVar1);
                SetModelHighlightable(pMVar6, true);
            }
        }
    }

    // 0x1001d0d10
    void DynamicGeometry::UpdateModelTransform(const RenderState::ModelSubmissionRSeven& modelSubmissionRSeven,
                                               const dash3d::ResolvedModel& resolvedModel) {
        uint8_t* midiPlayerMainThread;
        Model* pMVar3;
        Matrix33T<float> local_b8;

        float local_34 = (float)*(int*)&modelSubmissionRSeven.field_156 * 0.0030679647f;
        jag::math::Matrix33RotationY<float>(local_34);
        float arg2 = (float)*(int*)&modelSubmissionRSeven.field_148;
        ColourHSL local_78((float)*(int*)&modelSubmissionRSeven.field_144, arg2,
                           (float)*(int*)&modelSubmissionRSeven.field_152);
        Matrix44T<float> local_f8(local_b8, local_78);
        local_78 = resolvedModel.GetLocalTransform();
        local_b8* local_78;
        auto pGVar2 = GetNode();
        if (pGVar2 == nullptr) {
            if (field_24 != nullptr) {
                pMVar3 = (Model*)field_24.operator->();
                pMVar3->SetWorldTransform(local_b8);
            }
        } else {
            pGVar2 = GetNode();
            local_78[0]._0_8_ = local_b8.GetPos();
            local_78[0].field_8 = arg2;
            pGVar2->SetTranslation(local_78);
            pGVar2 = GetNode();
            pGVar2->SetYRotation(local_34);
            midiPlayerMainThread = &field_24;
            if (*midiPlayerMainThread != nullptr) {
                pMVar3 = (Model*)(*midiPlayerMainThread).operator->();
                pGVar2 = GetNode();
                pGVar2 = (GraphNode*)pGVar2->GetParent();
                pGVar2->GetWorldTransformationMatrix();
                local_78* local_b8;
                pMVar3->SetWorldTransform(local_78);
                pMVar3 = (Model*)(*midiPlayerMainThread).operator->();
                pMVar3->UpdatePointLightBounds();
            }
        }
    }

    // 0x1001d0eb0
    void DynamicGeometry::UpdateModelAnimationState(const dash3d::ResolvedModel& resolvedModel,
                                                    jag::graphics::RT7Core& rt7Core) {
        uint8_t bVar2;
        unsigned int arg2;
        shared_ptr* psVar3;
        PoseStateRSeven* poseStateRSeven1;
        PoseStateRSeven* poseStateRSeven2;
        Model* pMVar5;
        ReturnValue local_50;
        shared_ptr<RSevenDebugPresetProvider> local_40;

        uint8_t* this_00 = field_56;
        char cVar1 = this_00->operator_cast_to_bool();
        if (!cVar1) {
            psVar3 = (shared_ptr*)resolvedModel.GetAnimationState();
            bVar2 = shared_ptr::operator_cast_to_bool(psVar3);
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
        }
        cVar1 = this_00->operator_cast_to_bool();
        if (!cVar1) {
            if ((bVar2 | 1) != 0)
                goto joined_r0x0001001d0f09;
        } else {
            psVar3 = (shared_ptr*)resolvedModel.GetAnimationState();
            cVar1 = shared_ptr::operator_cast_to_bool(psVar3);
            if (cVar1 != '\x01' || bVar2 != 0)
                goto joined_r0x0001001d0f09;
        }
        poseStateRSeven1 = (PoseStateRSeven*)**this_00;
        auto psVar4 = resolvedModel.GetAnimationState();
        poseStateRSeven2 = (PoseStateRSeven*)**psVar4;
        bVar2 = *poseStateRSeven1 == *poseStateRSeven2;
    joined_r0x0001001d0f09:
        if (bVar2 == 0) {
            psVar4 = (shared_ptr<dash3d::PoseStateRSeven>*)resolvedModel.GetAnimationState();
            *this_00 = *psVar4;
            cVar1 = this_00->operator_cast_to_bool();
            pMVar5 = (Model*)field_24.operator->();
            if (!cVar1) {
                pMVar5->ClearAnimationState();
            } else {
                make_shared<dash3d::PoseStateProviderRSeven, shared_ptr<dash3d::PoseStateRSeven> const&>(
                    &local_50, (shared_ptr<dash3d::PoseStateRSeven>*)this_00);
                local_40.shared_ptr<FileRSevenDebugPresetProvider, void>(local_50);
                pMVar5->SetAnimationStateProvider(local_40);
            }
            pMVar5 = (Model*)field_24.operator->();
            arg2 = OSRenderCore_RenderThread::Instance()->GetFrameCount();
            pMVar5->Update(rt7Core, arg2, 0);
        }
    }

    // 0x1001d1630
    void DynamicGeometry::GatherDrawableElements(jag::graphics::DrawableQueue& drawableQueue,
                                                 jag::graphics::RT7Core& rt7Core,
                                                 const jag::math::Matrix44T<float>& matrix44,
                                                 const jag::graphics::SceneViewData& sceneViewData,
                                                 const jag::graphics::EffectManager& effectManager) {
        CommandLine* this_00;

        auto pOVar5 = OSRenderCore_RenderThread::Instance();
        long lVar6 = ((OSRenderCore_RenderThread_Common*)(pOVar5->field_32 + (long)(pOVar5->_vptr[-3].GetUISize - 32)))
                         ->GetRenderStateNXT();
        int iVar1 = *(int*)(lVar6 + 28);
        if (field_21 != 0) {
            this_00 = (CommandLine*)sceneViewData.GetRenderPass(8);
            if (this_00 == nullptr) {
                return;
            }
            if (this_00->GetPos() != 8) {
                LogAssert("pass->GetRenderPassType() == jag::graphics::RenderPassType::OBJECT_HIGHLIGHT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                          "rseven/entities/DynamicGeometry.cpp",
                          175, nullptr);
            }
        }
        if ((sceneViewData.HasShadowPass() != '\0') || (field_72 <= iVar1)) {
            if (field_24 != nullptr) {
                ((Model*)field_24.operator->())
                    ->GatherDrawableElements(drawableQueue, rt7Core, sceneViewData, effectManager);
            }
        }
    }

} // namespace jag::oldscape::rseven
