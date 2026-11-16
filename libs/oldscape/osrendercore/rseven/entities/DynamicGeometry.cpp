// libs/oldscape/osrendercore/rseven/entities/DynamicGeometry.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.osrendercore

#include "DynamicGeometry.h"

namespace jag::oldscape::rseven {
    // 0x1001cbfd0, 144 bytes, placed by class name and debug map
    // DynamicGeometry::UpdateModel(RenderState::ModelSubmissionRSeven const&, jag::graphics::RT7Core&)
    void DynamicGeometry::UpdateModel(ModelSubmissionRSeven* param_1, RT7Core* param_2) {
        shared_ptr<jag::graphics::Model>* this_00;
        Model* this_01;

        this_00 = (shared_ptr<jag::graphics::Model>*)param_1->field_16->GetModel();
        this_01 = (Model*)shared_ptr<jag::graphics::Model>::operator->(this_00);
        if (this_01->GetBatchCount() == 0) {
            shared_ptr<jag::graphics::Model>::reset();
            shared_ptr<jag::graphics::Model>::reset();
        } else {
            UpdateModelGeometry(this, param_1, param_2, *(int*)&param_1->field_160);
            UpdateModelTransform((ModelSubmissionRSeven*)this, (ResolvedModel*)param_1);
            UpdateModelAnimationState(this, (ResolvedModel*)param_1->field_16, param_2);
        }
    }

    // 0x1001d09c0, 16 bytes, placed by class name
    // DynamicGeometry::Destruct()
    void DynamicGeometry::Destruct() {
        Clear(this);
    }

    // 0x1001d09d0, 32 bytes, placed by class name
    // DynamicGeometry::Clear()
    void DynamicGeometry::Clear() {
        GraphNode* this_00;

        this_00 = (GraphNode*)GetNode();
        this_00->Destruct();
    }

    // 0x1001d0a50, 704 bytes, placed by class name
    // DynamicGeometry::UpdateModelGeometry(RenderState::ModelSubmissionRSeven const&, jag::graphics::RT7Core&, int)
    void DynamicGeometry::UpdateModelGeometry(ModelSubmissionRSeven* param_1, RT7Core* param_2, int param_3) {
        bool bVar1;
        byte bVar2;
        ushort uVar3;
        uint uVar4;
        shared_ptr* psVar5;
        Model* pMVar6;
        shared_ptr<jag::graphics::Model>* this_00;
        GraphNode* this_01;
        NXTPixToolkit* this_02;
        AABB* pAVar8;
        undefined1* this_03;
        shared_ptr local_68;
        shared_ptr local_58;
        shared_ptr local_48;

        psVar5 = (shared_ptr*)param_1->field_16->TryGetUploadableModel();
        new (&local_58) shared_ptr<dash3d::Decor>(psVar5);
        bVar1 = operator!=(&local_58, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("uploadable != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "rseven/entities/DynamicGeometry.cpp",
                      118,
                      "A resolved model made it to the render thread without an uploadable copy for the render thread "
                      "to use.");
        }
        bVar1 = shared_ptr::operator_cast_to_bool(&local_58);
        if (bVar1) {
            bVar1 = operator!=(&local_58, (shared_ptr*)field_40);
            if (bVar1) {
                pMVar6 =
                    (Model*)shared_ptr<jag::graphics::Model>::operator*((shared_ptr<jag::graphics::Model>*)&local_58);
                FinishModel(pMVar6, param_2);
                shared_ptr<jag::graphics::Model>::operator=((shared_ptr<jag::graphics::Model>*)field_40, &local_58);
                this_00 = (shared_ptr<jag::graphics::Model>*)param_1->field_16->GetUploadableModel();
                pMVar6 = (Model*)shared_ptr<jag::graphics::Model>::operator*(this_00);
                local_68._0_4_ = 2;
                make_shared<jag::graphics::Model, jag::graphics::Model_const&, jag::graphics::ModelCopyType>(
                    (jag*)&local_48, pMVar6, (ModelCopyType*)&local_68);
                pMVar6 =
                    (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)&local_48);
                pMVar6->UpdateFade(0);
                shared_ptr<jag::graphics::Model>::operator=((shared_ptr<jag::graphics::Model>*)field_24, &local_48);
                field_72 = param_3;
                new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                shared_ptr<dash3d::PoseStateRSeven>::operator=((shared_ptr<dash3d::PoseStateRSeven>*)field_56,
                                                               &local_68);
                local_68.~shared_ptr();
                if (GetNode() != 0) {
                    this_01 = (GraphNode*)GetNode();
                    this_02 = (NXTPixToolkit*)shared_ptr<jag::graphics::Model>::operator->(
                        (shared_ptr<jag::graphics::Model>*)field_24);
                    pAVar8 = (AABB*)this_02->GetScreen();
                    this_01->SetAABB(pAVar8);
                }
                local_48.~shared_ptr();
            }
        }
        bVar1 = operator!=((shared_ptr*)field_24, (_func_decltype_nullptr*)0);
        if (bVar1) {
            pMVar6 = (Model*)shared_ptr<jag::graphics::Model>::operator*((shared_ptr<jag::graphics::Model>*)field_24);
            if (*(short*)(param_1->field_166 + 8) == 0) {
                pMVar6->SetHighlight(0.0, PTR_ZERO_100ee6708, 0.0);
                pMVar6->SetHighlightsIgnoreDepth(false);
                SetModelHighlightable(pMVar6, false);
            } else {
                this_03 = param_1->field_166;
                field_21 = (byte)((ushort) * (short*)(param_1->field_166 + 8) >> 10) & 1;
                uVar3 = this_03->GetEntityID();
                uVar4 = jag::math::RunetekColour::HSLToRGB(uVar3);
                uVar3 = this_03->GetModelOutlineWidth();
                local_48._0_8_ = jag::math::Colour4FromA8R8G8B8(uVar4 | 4278190080);
                bVar2 = this_03->GetModelTintAlpha();
                pMVar6->SetHighlight((float)uVar3 * 3.0, (Vector4T*)&local_48, (float)bVar2 * 0.003921569);
                bVar1 = (bool)this_03->AlwaysOnTop();
                pMVar6->SetHighlightsIgnoreDepth(bVar1);
                SetModelHighlightable(pMVar6, true);
            }
        }
        local_58.~shared_ptr();
    }

    // 0x1001d0d10, 416 bytes, placed by class name
    // DynamicGeometry::UpdateModelTransform(RenderState::ModelSubmissionRSeven const&, dash3d::ResolvedModel const&)
    void DynamicGeometry::UpdateModelTransform(ModelSubmissionRSeven* param_1, ResolvedModel* param_2) {
        shared_ptr* this;
        GraphNode* pGVar2;
        Model* pMVar3;
        Matrix44T* pMVar4;
        bool bVar5;
        float fVar6;
        Matrix44T local_f8;
        undefined1 local_b8[64];
        ColourHSL local_78[4];
        float local_34;

        local_34 = (float)*(int*)((long)&param_2[1].field_40 + 4) * 0.0030679647;
        jag::math::Matrix33RotationY<float>((math*)local_b8, local_34);
        fVar6 = (float)*(int*)((long)&param_2[1].m_animationState + 4);
        new ((local_b8 + 64))
            jag::math::ColourHSL((float)*(int*)&param_2[1].m_animationState, fVar6, (float)*(int*)&param_2[1].field_40);
        new (&local_f8) jag::math::Matrix44T<float>(local_b8, (Vector3T*)(local_b8 + 64));
        ((local_b8 + 64))->GetLocalTransform();
        jag::math::operator*((math*)local_b8, (Matrix44T*)(local_b8 + 64), &local_f8);
        if (param_1->GetNode() == 0) {
            bVar5 = operator!=((shared_ptr*)(param_1->field_16 + 8), (_func_decltype_nullptr*)0);
            if (bVar5) {
                pMVar3 = (Model*)shared_ptr<jag::graphics::Model>::operator->(
                    (shared_ptr<jag::graphics::Model>*)(param_1->field_16 + 8));
                pMVar3->SetWorldTransform(local_b8);
            }
        } else {
            pGVar2 = (GraphNode*)param_1->GetNode();
            local_78[0]._0_8_ = local_b8->GetPos();
            local_78[0].field_8 = fVar6;
            pGVar2->SetTranslation((Vector3T*)(local_b8 + 64));
            pGVar2 = (GraphNode*)param_1->GetNode();
            pGVar2->SetYRotation(local_34);
            this = (shared_ptr*)(param_1->field_16 + 8);
            bVar5 = operator!=(this, (_func_decltype_nullptr*)0);
            if (bVar5) {
                pMVar3 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)this);
                pGVar2 = (GraphNode*)param_1->GetNode();
                pGVar2 = (GraphNode*)pGVar2->GetParent();
                pMVar4 = (Matrix44T*)pGVar2->GetWorldTransformationMatrix();
                jag::math::operator*((math*)(local_b8 + 64), (Matrix44T*)local_b8, pMVar4);
                pMVar3->SetWorldTransform((Matrix44T*)(local_b8 + 64));
                pMVar3 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)this);
                pMVar3->UpdatePointLightBounds();
            }
        }
    }

    // 0x1001d0eb0, 384 bytes, placed by class name
    // DynamicGeometry::UpdateModelAnimationState(dash3d::ResolvedModel const&, jag::graphics::RT7Core&)
    void DynamicGeometry::UpdateModelAnimationState(ResolvedModel* param_1, RT7Core* param_2) {
        undefined1* this_00;
        shared_ptr* psVar1;
        Model* pMVar2;
        OSRenderCore_RenderThread* this_01;
        PoseStateRSeven* pPVar3;
        shared_ptr<dash3d::PoseStateRSeven>* this_02;
        PoseStateRSeven* pPVar4;
        bool bVar5;
        bool bVar6;
        uint uVar8;
        shared_ptr local_50;
        shared_ptr local_40;

        this_00 = field_56;
        bVar5 = this_00->operator_cast_to_bool();
        if (bVar5) {
            bVar5 = false;
        } else {
            psVar1 = (shared_ptr*)param_1->GetAnimationState();
            bVar5 = shared_ptr::operator_cast_to_bool(psVar1);
            bVar5 = !bVar5;
        }
        bVar6 = this_00->operator_cast_to_bool();
        if (bVar6) {
            psVar1 = (shared_ptr*)param_1->GetAnimationState();
            bVar6 = shared_ptr::operator_cast_to_bool(psVar1);
            if (bVar6 && !bVar5) {
                pPVar3 = (PoseStateRSeven*)shared_ptr<dash3d::PoseStateRSeven>::operator*(
                    (shared_ptr<dash3d::PoseStateRSeven>*)this_00);
                this_02 = (shared_ptr<dash3d::PoseStateRSeven>*)param_1->GetAnimationState();
                pPVar4 = (PoseStateRSeven*)shared_ptr<dash3d::PoseStateRSeven>::operator*(this_02);
                if (dash3d::operator==(pPVar3, pPVar4) != '\0') {
                    return;
                }
                goto LAB_1001d0f56;
            }
        }
        if (bVar5) {
            return;
        }
    LAB_1001d0f56:
        psVar1 = (shared_ptr*)param_1->GetAnimationState();
        shared_ptr<dash3d::PoseStateRSeven>::operator=((shared_ptr<dash3d::PoseStateRSeven>*)this_00, psVar1);
        bVar5 = this_00->operator_cast_to_bool();
        pMVar2 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)field_24);
        if (bVar5) {
            make_shared<dash3d::PoseStateProviderRSeven, shared_ptr<dash3d::PoseStateRSeven> const&>(
                (jag*)&local_50, (shared_ptr*)this_00);
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)&local_40, &local_50);
            pMVar2->SetAnimationStateProvider(&local_40);
            local_40.~shared_ptr();
            local_50.~shared_ptr();
        } else {
            pMVar2->ClearAnimationState();
        }
        pMVar2 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)field_24);
        this_01 = (OSRenderCore_RenderThread*)OSRenderCore_RenderThread::Instance();
        uVar8 = this_01->GetFrameCount();
        pMVar2->Update(param_2, uVar8, 0);
    }

    // 0x1001d1630, 208 bytes, placed by class name
    // DynamicGeometry::GatherDrawableElements(jag::graphics::DrawableQueue&, jag::graphics::RT7Core&, jag::math::Matrix44T<float> const&, jag::graphics::SceneViewData const&, jag::graphics::EffectManager const&)
    void DynamicGeometry::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, Matrix44T* param_3,
                                                 SceneViewData* param_4, EffectManager* param_5) {
        int iVar1;
        long* plVar5;
        long lVar6;
        CommandLine* this_00;
        Model* this_01;

        plVar5 = (long*)OSRenderCore_RenderThread::Instance();
        lVar6 = (((long)plVar5 + *(long*)(*plVar5 + -24)))->GetRenderStateNXT();
        iVar1 = *(int*)(lVar6 + 28);
        if (field_21 != 0) {
            this_00 = (CommandLine*)param_4->GetRenderPass();
            if (this_00 == (CommandLine*)0) {
                return;
            }
            if (this_00->GetPos() != 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("pass->GetRenderPassType() == jag::graphics::RenderPassType::OBJECT_HIGHLIGHT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                          "rseven/entities/DynamicGeometry.cpp",
                          175, (char*)0);
            }
        }
        if ((param_4->HasShadowPass() != '\0') || (field_72 <= iVar1)) {
            if (operator!=((shared_ptr*)field_24, (_func_decltype_nullptr*)0)) {
                this_01 =
                    (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)field_24);
                this_01->GatherDrawableElements(param_1, param_2, param_4, param_5);
            }
        }
    }

} // namespace jag::oldscape::rseven
