// libs/graphics/runetek7/animation/asm/LayeredAnimationStateMachine.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "LayeredAnimationStateMachine.h"

namespace jag::graphics {
    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData::GetTransformMask() const;

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData::GetJointWeights() const;

    // 0x10095db20, 160 bytes, placed by debug map only (low confidence)
    // CalculateTransitionBlendAmount(unsigned long long, unsigned long long)
    float CalculateTransitionBlendAmount(ulonglong param_1, ulonglong param_2) {
        ulong uVar1;
        float* pfVar2;
        float local_24;
        float local_20;
        float local_1c;

        param_1->Instance();
        uVar1 = AnimationManager::GetTimeElapsedSinceNS(param_1);
        local_24 = (float)uVar1 / (float)param_2;
        local_20 = 0.0;
        local_1c = 1.0;
        pfVar2 = std::clamp<float>(&local_24, &local_20, &local_1c);
        return *pfVar2;
    }

    // 0x10095dbd0, 80 bytes, base-object constructor, placed by class name and debug map
    // LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData::LayerWalkMergeData(Array<bool, eastl::allocator>&&, Array<float, eastl::allocator>&&)
    void LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData::LayerWalkMergeData(Array* param_1,
                                                                                              Array* param_2) {
        new (this) WalkMergeDataProvider();
        field_0 = PTR_vtable_100ee88b0 + 16;
        new (&field_8, param_1) Array<bool, eastl::allocator>();
        new (&field_32, param_2) Array<float, eastl::allocator>();
    }

    // 0x10095dc20, 16 bytes, complete-object constructor, placed by class name and debug map
    // LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData::LayerWalkMergeData(Array<bool, eastl::allocator>&&, Array<float, eastl::allocator>&&): jumps straight to the base-object constructor

    // 0x10095dc30, 304 bytes, placed by class name and debug map
    // LayeredAnimationStateMachine::UpdateFromCurrentTime(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void LayeredAnimationStateMachine::UpdateFromCurrentTime(Array* param_1, Matrix44T* param_2) {
        undefined1* this_00;
        bool bVar1;
        bool bVar2;
        bool bVar3;
        int iVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        AnimationStateMachine* this_01;
        AnimState* this_02;
        ulong uVar8;

        this_00 = &field_24;
        uVar6 = this_00->HeapBeginPtr();
        uVar7 = this_00->end();
        bVar3 = std::all_of<AnimationStateMachine*, (Array<LabelData, eastl::allocator> const&)
                                                        ->UpdateFromCurrentTime(math::Matrix44T<float> const&)::__10>(
            uVar6, uVar7);
        if (bVar3) {
            iVar5 = this_00->size();
            uVar8 = (ulong)iVar5;
            bVar3 = true;
            do {
                if ((long)uVar8 < 1)
                    break;
                uVar8 = uVar8 - 1;
                this_01 = (AnimationStateMachine*)eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](
                    (vector<AnimationStateMachine, eastl::allocator>*)this_00, uVar8);
                this_02 = (AnimState*)this_01->GetCurrentState();
                if (this_02->HasAnimation() == '\0') {
                LAB_10095dc90:
                    bVar1 = true;
                    bVar2 = bVar3;
                } else {
                    this_01->UpdateAnimationTypeForCurrentState();
                    iVar5 = this_01->GetAnimationType();
                    bVar1 = false;
                    bVar2 = false;
                    if (iVar5 == 2)
                        goto LAB_10095dc90;
                }
                bVar3 = bVar2;
            } while (bVar1);
            field_112 = (long*)0;
            if (bVar3) {
                SetupBlendTreeAnimationSampler(this);
            } else {
                SetupBasicAnimationSampler(this);
            }
            if (field_112 == (long*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_animationSampler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/LayeredAnimationStateMachine.cpp",
                          76, (char*)0);
            }
            (**(code**)(*field_112 + 16))(field_112, param_1, param_2);
            field_520[752] = 1;
        }
    }

    // 0x10095dea0, 1136 bytes, placed by class name and debug map
    // LayeredAnimationStateMachine::SetupBlendTreeAnimationSampler()
    void LayeredAnimationStateMachine::SetupBlendTreeAnimationSampler() {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        char cVar1;
        undefined1 uVar2;
        int iVar3;
        uint uVar4;
        undefined4 uVar5;
        undefined8 uVar6;
        AnimationStateMachine* pAVar7;
        AnimState* pAVar8;
        LayerBlendInfo* pLVar9;
        SimpleTwoNodeBlendTreeNode<unsigned long long>* pSVar10;
        BlendTreeNode* pBVar11;
        SimpleTwoNodeBlendTreeNode<float>* this_03;
        Layout* pLVar12;
        SystemSettings* this_04;
        long lVar13;
        Option<game::option::EnumBrightness>* this_05;
        ulong uVar14;
        LayerBlendInfo* this_06;
        Singleton<AnimationManager>* this_07;
        ulong uVar15;
        float fVar16;
        float fVar17;
        undefined1 auVar18[16];

        this_00 = &field_24;
        iVar3 = this_00->size();
        this_01 = &field_56;
        if (iVar3 != 0) {
            uVar15 = (long)iVar3 - 1;
            uVar14 = 4294967295;
            do {
                pAVar7 = (AnimationStateMachine*)eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](
                    (vector<AnimationStateMachine, eastl::allocator>*)this_00, uVar15);
                pAVar8 = (AnimState*)pAVar7->GetCurrentState();
                cVar1 = pAVar8->HasAnimation();
                iVar3 = (int)uVar14;
                if (cVar1 == '\0') {
                    if ((int)uVar15 == 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("i != 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/animation/asm/LayeredAnimationStateMachine.cpp",
                                  161, (char*)0);
                    }
                    this_07 = (Singleton<AnimationManager>*)this_01;
                    lVar13 = eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::operator[](
                        (vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>*)this_01, uVar15);
                    if (*(char*)(lVar13 + 72) != '\0') {
                        pLVar12 = (Layout*)this_07->Instance();
                        uVar6 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(pLVar12);
                        lVar13 =
                            eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::operator[](
                                (vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>*)this_01,
                                uVar15);
                        *(undefined8*)(lVar13 + 64) = uVar6;
                        goto LAB_10095df1f;
                    }
                    pLVar9 = (LayerBlendInfo*)
                        eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::operator[](
                            (vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>*)this_01, uVar15);
                    cVar1 = pLVar9->IsTransitioningOut();
                    if (cVar1 != '\0') {
                        uVar14 = uVar15 & 4294967295;
                    }
                } else {
                    if (iVar3 == -1) {
                        pAVar7 =
                            (AnimationStateMachine*)eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](
                                (vector<AnimationStateMachine, eastl::allocator>*)this_00, uVar15);
                        pAVar8 = (AnimState*)pAVar7->GetCurrentState();
                        pAVar8->GetBlendTree();
                    } else {
                        uVar14 = (ulong)iVar3;
                        pLVar9 = (LayerBlendInfo*)
                            eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::operator[](
                                (vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>*)this_01,
                                uVar14);
                        this_02 = &pLVar9->field_48;
                        pSVar10 = (SimpleTwoNodeBlendTreeNode<unsigned long long>*)
                                      std::unique_ptr<SimpleTwoNodeBlendTreeNode<float>,
                                                      std::default_delete<SimpleTwoNodeBlendTreeNode<float>>>::
                                      operator->(
                                          (unique_ptr<SimpleTwoNodeBlendTreeNode<float>,
                                                      std::default_delete<SimpleTwoNodeBlendTreeNode<float>>>*)this_02);
                        pAVar7 =
                            (AnimationStateMachine*)eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](
                                (vector<AnimationStateMachine, eastl::allocator>*)this_00, uVar14);
                        pAVar8 = (AnimState*)pAVar7->GetCurrentState();
                        pBVar11 = (BlendTreeNode*)pAVar8->GetBlendTree();
                        pSVar10->SetLeftNode(pBVar11);
                        this_03 = (SimpleTwoNodeBlendTreeNode<float>*)
                                      std::unique_ptr<SimpleTwoNodeBlendTreeNode<float>,
                                                      std::default_delete<SimpleTwoNodeBlendTreeNode<float>>>::
                                      operator->(
                                          (unique_ptr<SimpleTwoNodeBlendTreeNode<float>,
                                                      std::default_delete<SimpleTwoNodeBlendTreeNode<float>>>*)this_02);
                        pAVar7 =
                            (AnimationStateMachine*)eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](
                                (vector<AnimationStateMachine, eastl::allocator>*)this_00, uVar15);
                        pAVar8 = (AnimState*)pAVar7->GetCurrentState();
                        pBVar11 = (BlendTreeNode*)pAVar8->GetBlendTree();
                        this_03->SetLeftNode(pBVar11);
                        fVar16 = 1.0;
                        if ((float*)pLVar9->field_8 != (float*)0) {
                            fVar16 = *(float*)pLVar9->field_8;
                        }
                        if (pLVar9->field_72 == '\0') {
                            this_06 = pLVar9;
                            cVar1 = pLVar9->IsTransitioningOut();
                            if (cVar1 != '\0')
                                goto LAB_10095e01d;
                            pLVar12 = (Layout*)this_06->Instance();
                            lVar13 = eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar12);
                            pLVar9->field_56 = lVar13;
                        } else {
                        LAB_10095e01d:
                            cVar1 = pLVar9->IsTransitioningIn();
                            if (cVar1 == '\0') {
                                cVar1 = pLVar9->IsTransitioningOut();
                                if ((cVar1 != '\0') && (*(int*)&pLVar9->field_76 != -1)) {
                                    pAVar7 = (AnimationStateMachine*)
                                        eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](
                                            (vector<AnimationStateMachine, eastl::allocator>*)this_00, uVar14);
                                    pAVar8 = (AnimState*)pAVar7->GetState(*(uint*)&pLVar9->field_76);
                                    lVar13 = pAVar8->GetBlendTree();
                                    if (lVar13 == 0) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert(
                                            "m_stateMachines[prev].GetState(prevLayer.m_previousState).GetBlendTree() "
                                            "!= nullptr",
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/animation/asm/LayeredAnimationStateMachine.cpp",
                                            117, (char*)0);
                                    }
                                    pSVar10 =
                                        (SimpleTwoNodeBlendTreeNode<unsigned long long>*)
                                            std::unique_ptr<SimpleTwoNodeBlendTreeNode<float>,
                                                            std::default_delete<SimpleTwoNodeBlendTreeNode<float>>>::
                                            operator->(
                                                (unique_ptr<SimpleTwoNodeBlendTreeNode<float>,
                                                            std::default_delete<SimpleTwoNodeBlendTreeNode<float>>>*)
                                                    this_02);
                                    pAVar7 = (AnimationStateMachine*)
                                        eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](
                                            (vector<AnimationStateMachine, eastl::allocator>*)this_00, uVar14);
                                    pAVar8 = (AnimState*)pAVar7->GetState(*(uint*)&pLVar9->field_76);
                                    pBVar11 = (BlendTreeNode*)pAVar8->GetBlendTree();
                                    pSVar10->SetLeftNode(pBVar11);
                                    fVar17 = (float)CalculateTransitionBlendAmount(pLVar9->field_64, pLVar9->field_24);
                                    *(float*)((long)&pLVar9->field_76 + 4) = (1.0 - fVar17) * fVar16;
                                    goto LAB_10095e1c0;
                                }
                            } else {
                                fVar17 = (float)CalculateTransitionBlendAmount(pLVar9->field_56, pLVar9->field_16);
                                fVar16 = fVar17 * fVar16;
                            }
                            *(float*)((long)&pLVar9->field_76 + 4) = fVar16;
                        }
                    LAB_10095e1c0:
                        this_04 =
                            (SystemSettings*)std::unique_ptr<SimpleTwoNodeBlendTreeNode<float>,
                                                             std::default_delete<SimpleTwoNodeBlendTreeNode<float>>>::
                            operator->((unique_ptr<SimpleTwoNodeBlendTreeNode<float>,
                                                   std::default_delete<SimpleTwoNodeBlendTreeNode<float>>>*)this_02);
                        this_04->SetLanguage((Language*)((long)&pLVar9->field_76 + 4));
                    }
                    if ((int)uVar15 == 0) {
                        if (iVar3 == -1) {
                            pAVar7 = (AnimationStateMachine*)
                                eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](
                                    (vector<AnimationStateMachine, eastl::allocator>*)this_00, 0);
                            auVar18 = pAVar7->GetBlendTree();
                        } else {
                            lVar13 = eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::
                            operator[]((vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>*)this_01,
                                       (long)iVar3);
                            auVar18 = ((lVar13 + 48))->get();
                        }
                        if (auVar18._0_8_ == (EntityHighlight**)0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("blendTreeNode",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/animation/asm/LayeredAnimationStateMachine.cpp",
                                      150, (char*)0);
                        }
                        new (&field_104, auVar18._0_8_, auVar18._8_8_)
                            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>();
                        (field_120, (BlendTreeNode*)&field_104)->SetRightNode();
                        field_112 = (long*)field_120;
                        uVar14 = uVar15 & 4294967295;
                    } else {
                    LAB_10095df1f:
                        uVar14 = uVar15 & 4294967295;
                    }
                }
                uVar15 = uVar15 - 1;
            } while ((int)uVar15 != -1);
        }
        iVar3 = this_00->size();
        if (iVar3 != 0) {
            uVar14 = 0;
            do {
                pLVar9 = (LayerBlendInfo*)
                    eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::operator[](
                        (vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>*)this_01, uVar14);
                cVar1 = pLVar9->IsTransitioningOut();
                if (cVar1 == '\0') {
                    this_05 = (Option<game::option::EnumBrightness>*)
                        eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](
                            (vector<AnimationStateMachine, eastl::allocator>*)this_00, uVar14);
                    uVar5 = this_05->GetValue();
                    lVar13 = eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::operator[](
                        (vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>*)this_01, uVar14);
                    *(undefined4*)(lVar13 + 76) = uVar5;
                }
                pAVar7 = (AnimationStateMachine*)eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](
                    (vector<AnimationStateMachine, eastl::allocator>*)this_00, uVar14);
                pAVar8 = (AnimState*)pAVar7->GetCurrentState();
                uVar2 = pAVar8->HasAnimation();
                lVar13 = eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::operator[](
                    (vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>*)this_01, uVar14);
                *(undefined1*)(lVar13 + 72) = uVar2;
                uVar14 = uVar14 + 1;
                uVar4 = this_00->size();
            } while (uVar14 < uVar4);
        }
    }

    // 0x10095e310, 688 bytes, placed by class name and debug map
    // LayeredAnimationStateMachine::SetupBasicAnimationSampler()
    void LayeredAnimationStateMachine::SetupBasicAnimationSampler() {
        undefined1* this_00;
        vector<AnimationStateMachine, eastl::allocator>* this_01;
        char cVar1;
        int iVar3;
        int* piVar4;
        AnimationStateMachine* pAVar5;
        AnimState* pAVar6;
        ulong uVar7;
        long lVar8;
        AnimationParameters* pAVar9;
        ulong uVar10;
        ulong uVar11;
        shared_ptr in_stack_ffffffffffffff48;
        AnimationInfo local_80;
        shared_ptr<oldscape::dash3d::Decor> local_50[16];
        vector<AnimationStateMachine, eastl::allocator>* local_40;

        this_00 = &field_56;
        piVar4 = (int*)eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::operator[](
            (vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>*)this_00, 0);
        if (*piVar4 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_layerBlendInfos[0].m_blendType == LayeredAnimationStateMachineBlendType::OVERRIDE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/LayeredAnimationStateMachine.cpp",
                      192, (char*)0);
        }
        local_40 = (vector<AnimationStateMachine, eastl::allocator>*)&field_24;
        iVar3 = eastl::vector<AnimationStateMachine, eastl::allocator>::size(local_40);
        if (iVar3 == 0) {
            uVar11 = 18446744073709551615;
            uVar10 = 18446744073709551615;
        } else {
            uVar10 = (ulong)iVar3;
            uVar11 = 18446744073709551615;
            do {
                uVar10 = uVar10 - 1;
                piVar4 =
                    (int*)eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::operator[](
                        (vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>*)this_00, uVar10);
                uVar7 = uVar10;
                if (*piVar4 != 1) {
                    piVar4 =
                        (int*)eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::operator[](
                            (vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>*)this_00, uVar10);
                    uVar7 = uVar11;
                    if (*piVar4 == 0) {
                        pAVar5 =
                            (AnimationStateMachine*)eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](
                                local_40, uVar10);
                        pAVar6 = (AnimState*)pAVar5->GetCurrentState();
                        cVar1 = pAVar6->HasAnimation();
                        if (cVar1 != '\0')
                            goto LAB_10095e3f2;
                    }
                }
                uVar11 = uVar7;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            uVar10 = 18446744073709551615;
        LAB_10095e3f2:
            this = (LayeredAnimationStateMachine*)this;
        }
        this_01 = local_40;
        uVar7 = eastl::vector<AnimationStateMachine, eastl::allocator>::size(local_40);
        if (uVar7 <= uVar10) {
            /* WARNING: Subroutine does not return */
            LogAssert("overrideLayerIdx < m_stateMachines.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/LayeredAnimationStateMachine.cpp",
                      212, (char*)0);
        }
        uVar7 = eastl::vector<AnimationStateMachine, eastl::allocator>::size(this_01);
        if (uVar11 < uVar7) {
            pAVar5 = (AnimationStateMachine*)eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](this_01,
                                                                                                                uVar11);
            pAVar6 = (AnimState*)pAVar5->GetCurrentState();
            cVar1 = pAVar6->HasAnimation();
            if (cVar1 != '\0') {
                lVar8 = eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::operator[](
                    (vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>*)this_00, uVar11);
                if (((lVar8 + 32))->operator_cast_to_bool()) {
                    pAVar5 = (AnimationStateMachine*)eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](
                        this_01, uVar10);
                    pAVar6 = (AnimState*)pAVar5->GetCurrentState();
                    pAVar9 = (AnimationParameters*)pAVar6->GetSingleAnimation();
                    new (&local_80) AnimationInfo(pAVar9);
                    pAVar5 = (AnimationStateMachine*)eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](
                        this_01, uVar11);
                    pAVar6 = (AnimState*)pAVar5->GetCurrentState();
                    pAVar9 = (AnimationParameters*)pAVar6->GetSingleAnimation();
                    new ((local_50 + -96)) AnimationInfo(pAVar9);
                    lVar8 = eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>::operator[](
                        (vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>*)this_00, uVar11);
                    shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_50, (shared_ptr*)(lVar8 + 32));
                    (field_520, &local_80, (AnimationInfo*)(local_50 + -96), in_stack_ffffffffffffff48)
                        ->SetAnimations();
                    local_50->~shared_ptr();
                    field_112 = (long*)field_520;
                    ((local_50 + -96))->~Sprite();
                    goto LAB_10095e56a;
                }
            }
        }
        pAVar5 =
            (AnimationStateMachine*)eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](this_01, uVar10);
        pAVar6 = (AnimState*)pAVar5->GetCurrentState();
        pAVar9 = (AnimationParameters*)pAVar6->GetSingleAnimation();
        new (&local_80) AnimationInfo(pAVar9);
        (&field_216, &local_80)->SetAnimation();
        field_112 = (long*)&field_216;
    LAB_10095e56a:
        local_80.~Sprite();
    }

    // 0x10095e6d0, 96 bytes, placed by class name
    // LayeredAnimationStateMachine::Update(unsigned int)
    void LayeredAnimationStateMachine::Update(uint param_1) {
        long* plVar1;
        long* plVar2;

        plVar1 = (long*)(&field_24)->HeapBeginPtr();
        plVar2 = (long*)(&field_24)->end();
        for (; plVar1 != plVar2; plVar1 = plVar1 + 99) {
            (**(code**)(*plVar1 + 64))(plVar1, param_1);
        }
    }

    // 0x10095e730, 208 bytes, placed by class name
    // LayeredAnimationStateMachine::GetBoneTransforms(WrapArray<math::Matrix43T<float> >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void LayeredAnimationStateMachine::GetBoneTransforms(WrapArray* param_1, vector_map* param_2, vector_map* param_3,
                                                         Matrix44T* param_4) {
        int iVar2;
        duration local_48[8];
        undefined4 local_34;

        if (field_520[752] != '\0') {
            if ((&field_16)->valid() != '\0') {
                local_34 = 0;
                std::chrono::duration<long long, std::ratio<1l, 1000l>>::duration<int>((int*)local_48,
                                                                                       (type*)&local_34);
                iVar2 =
                    std::future<void>::wait_for<long long, std::ratio<1l, 1000l>>((future<void>*)&field_16, local_48);
                if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!m_asyncUpdateFuture.valid() || "
                              "m_asyncUpdateFuture.wait_for(std::chrono::milliseconds(0)) == std::future_status::ready",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/asm/LayeredAnimationStateMachine.cpp",
                              245, (char*)0);
                }
            }
            (**(code**)(*field_112 + 24))(field_112, param_1, param_2, param_3, param_4);
        }
    }

    // 0x10095e800, 240 bytes, placed by class name
    // LayeredAnimationStateMachine::ApplyBoneTransforms(math::Vector3T<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void LayeredAnimationStateMachine::ApplyBoneTransforms(Vector3T* param_1, vector_map* param_2, vector_map* param_3,
                                                           Matrix44T* param_4) {
        int iVar2;
        long lVar3;
        duration local_48[8];
        undefined4 local_34;

        lVar3 = param_2->size();
        if (lVar3 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("boneMap.size() == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/LayeredAnimationStateMachine.cpp",
                      255, (char*)0);
        }
        if (field_520[752] != '\0') {
            if ((&field_16)->valid() != '\0') {
                local_34 = 0;
                std::chrono::duration<long long, std::ratio<1l, 1000l>>::duration<int>((int*)local_48,
                                                                                       (type*)&local_34);
                iVar2 =
                    std::future<void>::wait_for<long long, std::ratio<1l, 1000l>>((future<void>*)&field_16, local_48);
                if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!m_asyncUpdateFuture.valid() || "
                              "m_asyncUpdateFuture.wait_for(std::chrono::milliseconds(0)) == std::future_status::ready",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/asm/LayeredAnimationStateMachine.cpp",
                              261, (char*)0);
                }
            }
            (**(code**)(*field_112 + 32))(field_112, param_1, param_2, param_3, param_4);
        }
    }

    // 0x10095e8f0, 32 bytes, placed by class name
    // LayeredAnimationStateMachine::GetLabelData(WrapArray<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, AnimationLabelType) const
    void LayeredAnimationStateMachine::GetLabelData() {
        if (field_520[752] != '\0') {
            (**(code**)(*field_112 + 40))();
        }
    }

    // 0x10095e910, 64 bytes, placed by class name
    // LayeredAnimationStateMachine::GetAnimatesTransparency() const
    undefined8 LayeredAnimationStateMachine::GetAnimatesTransparency() {
        long lVar1;
        long* plVar2;
        undefined8 uVar3;

        lVar1 = (&field_24)->size();
        if (lVar1 == 0) {
            uVar3 = 0;
        } else {
            plVar2 = (long*)eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](
                (vector<AnimationStateMachine, eastl::allocator>*)&field_24, 0);
            uVar3 = (**(code**)(*plVar2 + 48))(plVar2);
        }
        return uVar3;
    }

    // 0x10095e9a0, 64 bytes, placed by class name
    // LayeredAnimationStateMachine::GetAnimatedColourType() const
    undefined1 LayeredAnimationStateMachine::GetAnimatedColourType() {
        undefined1 uVar1;
        long lVar2;
        long* plVar3;

        lVar2 = (&field_24)->size();
        if (lVar2 == 0) {
            uVar1 = 2;
        } else {
            plVar3 = (long*)eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](
                (vector<AnimationStateMachine, eastl::allocator>*)&field_24, 0);
            uVar1 = (**(code**)(*plVar3 + 56))(plVar3);
        }
        return uVar1;
    }

    // 0x10095e9e0, 128 bytes, placed by class name
    // LayeredAnimationStateMachine::DebugOutputToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const
    void LayeredAnimationStateMachine::DebugOutputToString(fixed_string* param_1) {
        long lVar1;
        long* plVar2;
        ulong uVar3;
        ulong uVar4;
        undefined1* this_00;

        this_00 = &field_24;
        lVar1 = this_00->size();
        if (lVar1 != 0) {
            uVar4 = 0;
            do {
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    append_sprintf((char*)param_1, "\nState machine layer: %zu", uVar4);
                plVar2 = (long*)eastl::vector<AnimationStateMachine, eastl::allocator>::operator[](
                    (vector<AnimationStateMachine, eastl::allocator>*)this_00, uVar4);
                (**(code**)(*plVar2 + 72))(plVar2, param_1);
                uVar4 = uVar4 + 1;
                uVar3 = this_00->size();
            } while (uVar4 < uVar3);
        }
    }

} // namespace jag::graphics
