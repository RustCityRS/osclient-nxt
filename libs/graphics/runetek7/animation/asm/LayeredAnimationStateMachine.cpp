// libs/graphics/runetek7/animation/asm/LayeredAnimationStateMachine.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "LayeredAnimationStateMachine.h"

namespace jag::graphics {
    // 0x100009d50: LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData::GetTransformMask() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x10002d850: LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData::GetJointWeights() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x10095db20
    float CalculateTransitionBlendAmount(unsigned long long arg1, unsigned long long arg2) {
        arg1->Instance();
        auto pAVar1 = AnimationManager::GetTimeElapsedSinceNS(arg1);
        float local_24 = (float)pAVar1 / (float)arg2;
        auto pfVar2 = std::clamp<float>(local_24, 0.0, 1.0);
        return *pfVar2;
    }

    // 0x10095dbd0
    LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData::LayerWalkMergeData(Array<bool>&& arg1,
                                                                                         Array<float>&& arg2)
        : WalkMergeDataProvider(), field_8(arg1), field_32(arg2) {}

    // 0x10095dc30
    void LayeredAnimationStateMachine::UpdateFromCurrentTime(const Array<LabelData>& labelDatas,
                                                             const math::Matrix44T<float>& matrix44) {
        bool bVar1;
        bool bVar2;
        int iVar5;
        unsigned long arg1;
        uint8_t auVar7[16];

        uint8_t* this_00 = &field_24;
        auto pAVar6 = this_00->HeapBeginPtr();
        auVar7 = this_00->end();
        bool bVar3 = std::all_of<AnimationStateMachine*,
                                 (Array<LabelData> const&)->UpdateFromCurrentTime(math::Matrix44T<float> const&)::__10>(
            pAVar6, auVar7._0_8_, auVar7._8_8_);
        if (bVar3) {
            iVar5 = this_00->size();
            arg1 = (unsigned long)iVar5;
            bVar3 = true;
            do {
                if ((long)arg1 < 1)
                    break;
                arg1 = arg1 - 1;
                pAVar6 = (AnimationStateMachine*)(*this_00)[arg1];
                if (pAVar6->GetCurrentState()->HasAnimation() == '\0') {
                LAB_10095dc90:
                    bVar1 = true;
                    bVar2 = bVar3;
                } else {
                    pAVar6->UpdateAnimationTypeForCurrentState();
                    iVar5 = pAVar6->GetAnimationType();
                    bVar1 = false;
                    bVar2 = false;
                    if (iVar5 == 2)
                        goto LAB_10095dc90;
                }
                bVar3 = bVar2;
            } while (bVar1);
            field_112 = nullptr;
            if (bVar3) {
                SetupBlendTreeAnimationSampler();
            } else {
                SetupBasicAnimationSampler();
            }
            if (field_112 == nullptr) {
                LogAssert("m_animationSampler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/LayeredAnimationStateMachine.cpp",
                          76, nullptr);
            }
            (**(void (**)(...))(*field_112 + 16))(field_112, labelDatas, matrix44);
            field_520[752] = 1;
        }
    }

    // 0x10095dea0
    void LayeredAnimationStateMachine::SetupBlendTreeAnimationSampler() {
        uint8_t* this_02;
        bool cVar1;
        uint8_t uVar2;
        unsigned int uVar4;
        uint32_t uVar5;
        uint64_t uVar6;
        AnimationStateMachine* pAVar7;
        AnimState* pAVar8;
        LayerBlendInfo* pLVar9;
        SimpleTwoNodeBlendTreeNode<unsigned long long>* pSVar10;
        BlendTreeNode* pBVar11;
        SimpleTwoNodeBlendTreeNode<float>* this_03;
        Layout* pLVar12;
        long lVar13;
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;
        unsigned long uVar14;
        LayerBlendInfo* this_06;
        Singleton<AnimationManager>* this_07;
        unsigned long arg1;
        float fVar15;
        float fVar16;

        uint8_t* this_00 = &field_24;
        int iVar3 = this_00->size();
        uint8_t* this_01 = &field_56;
        if (iVar3 != 0) {
            arg1 = (long)iVar3 - 1;
            uVar14 = 4294967295;
            do {
                pAVar7 = (AnimationStateMachine*)(*this_00)[arg1];
                pAVar8 = pAVar7->GetCurrentState();
                cVar1 = pAVar8->HasAnimation();
                iVar3 = (int)uVar14;
                if (!cVar1) {
                    if ((int)arg1 == 0) {
                        LogAssert("i != 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/animation/asm/LayeredAnimationStateMachine.cpp",
                                  161, nullptr);
                    }
                    this_07 = (Singleton<AnimationManager>*)this_01;
                    lVar13 = (*this_01)[arg1];
                    if (*(char*)(lVar13 + 72) != '\0') {
                        pLVar12 = (Layout*)this_07->Instance();
                        uVar6 = pLVar12->HeapBeginPtr();
                        lVar13 = (*this_01)[arg1];
                        *(uint64_t*)(lVar13 + 64) = uVar6;
                        goto LAB_10095df1f;
                    }
                    pLVar9 = (LayerBlendInfo*)(*this_01)[arg1];
                    cVar1 = pLVar9->IsTransitioningOut();
                    if (cVar1) {
                        uVar14 = arg1 & 4294967295;
                    }
                } else {
                    if (iVar3 == -1) {
                        pAVar7 = (AnimationStateMachine*)(*this_00)[arg1];
                        pAVar8 = pAVar7->GetCurrentState();
                        pAVar8->GetBlendTree();
                    } else {
                        uVar14 = (unsigned long)iVar3;
                        pLVar9 = (LayerBlendInfo*)(*this_01)[uVar14];
                        this_02 = &pLVar9->field_48;
                        pSVar10 = (SimpleTwoNodeBlendTreeNode<unsigned long long>*)(*this_02).operator->();
                        pAVar7 = (AnimationStateMachine*)(*this_00)[uVar14];
                        pAVar8 = pAVar7->GetCurrentState();
                        pBVar11 = (BlendTreeNode*)pAVar8->GetBlendTree();
                        pSVar10->SetLeftNode(pBVar11);
                        this_03 = (SimpleTwoNodeBlendTreeNode<float>*)(*this_02).operator->();
                        pAVar7 = (AnimationStateMachine*)(*this_00)[arg1];
                        pAVar8 = pAVar7->GetCurrentState();
                        pBVar11 = (BlendTreeNode*)pAVar8->GetBlendTree();
                        this_03->SetLeftNode(pBVar11);
                        fVar15 = 1.0;
                        if ((float*)pLVar9->field_8 != nullptr) {
                            fVar15 = *(float*)pLVar9->field_8;
                        }
                        if (pLVar9->field_72 == '\0') {
                            this_06 = pLVar9;
                            cVar1 = pLVar9->IsTransitioningOut();
                            if (cVar1)
                                goto LAB_10095e01d;
                            pLVar12 = (Layout*)this_06->Instance();
                            lVar13 = pLVar12->HeapBeginPtr();
                            pLVar9->field_56 = lVar13;
                        } else {
                        LAB_10095e01d:
                            cVar1 = pLVar9->IsTransitioningIn();
                            if (!cVar1) {
                                cVar1 = pLVar9->IsTransitioningOut();
                                if ((cVar1) && (*(int*)&pLVar9->field_76 != -1)) {
                                    pAVar7 = (AnimationStateMachine*)(*this_00)[uVar14];
                                    pAVar8 = pAVar7->GetState(*(unsigned int*)&pLVar9->field_76);
                                    lVar13 = pAVar8->GetBlendTree();
                                    if (lVar13 == 0) {
                                        LogAssert(
                                            "m_stateMachines[prev].GetState(prevLayer.m_previousState).GetBlendTree() "
                                            "!= nullptr",
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/animation/asm/LayeredAnimationStateMachine.cpp",
                                            117, nullptr);
                                    }
                                    pSVar10 = (SimpleTwoNodeBlendTreeNode<unsigned long long>*)(*this_02).operator->();
                                    pAVar7 = (AnimationStateMachine*)(*this_00)[uVar14];
                                    pAVar8 = pAVar7->GetState(*(unsigned int*)&pLVar9->field_76);
                                    pBVar11 = (BlendTreeNode*)pAVar8->GetBlendTree();
                                    pSVar10->SetLeftNode(pBVar11);
                                    fVar16 = (float)CalculateTransitionBlendAmount(pLVar9->field_64, pLVar9->field_24);
                                    *(float*)((long)&pLVar9->field_76 + 4) = (1.0 - fVar16) * fVar15;
                                    goto LAB_10095e1c0;
                                }
                            } else {
                                fVar16 = (float)CalculateTransitionBlendAmount(pLVar9->field_56, pLVar9->field_16);
                                fVar15 = fVar16 * fVar15;
                            }
                            *(float*)((long)&pLVar9->field_76 + 4) = fVar15;
                        }
                    LAB_10095e1c0:
                        ((SystemSettings*)(*this_02).operator->())->SetLanguage((float*)((long)&pLVar9->field_76 + 4));
                    }
                    if ((int)arg1 == 0) {
                        if (iVar3 == -1) {
                            pAVar7 = (AnimationStateMachine*)(*this_00)[0];
                            playerDataComparator =
                                (PlayerDataComparator<oldscape::social::FriendChatUser>*)pAVar7->GetBlendTree();
                        } else {
                            lVar13 = (*this_01)[(long)iVar3];
                            playerDataComparator =
                                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((lVar13 + 48))->get();
                        }
                        if (playerDataComparator == nullptr) {
                            LogAssert("blendTreeNode",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/animation/asm/LayeredAnimationStateMachine.cpp",
                                      150, nullptr);
                        }
                        new (&field_104)
                            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(
                                playerDataComparator);
                        field_120->SetRightNode(&field_104);
                        field_112 = (long*)field_120;
                        uVar14 = arg1 & 4294967295;
                    } else {
                    LAB_10095df1f:
                        uVar14 = arg1 & 4294967295;
                    }
                }
                arg1 = arg1 - 1;
            } while ((int)arg1 != -1);
        }
        iVar3 = this_00->size();
        if (iVar3 != 0) {
            uVar14 = 0;
            do {
                pLVar9 = (LayerBlendInfo*)(*this_01)[uVar14];
                cVar1 = pLVar9->IsTransitioningOut();
                if (!cVar1) {
                    uVar5 = ((Option<game::option::EnumBrightness>*)(*this_00)[uVar14])->GetValue();
                    lVar13 = (*this_01)[uVar14];
                    *(uint32_t*)(lVar13 + 76) = uVar5;
                }
                pAVar7 = (AnimationStateMachine*)(*this_00)[uVar14];
                pAVar8 = pAVar7->GetCurrentState();
                uVar2 = pAVar8->HasAnimation();
                lVar13 = (*this_01)[uVar14];
                *(uint8_t*)(lVar13 + 72) = uVar2;
                uVar14 = uVar14 + 1;
                uVar4 = this_00->size();
            } while (uVar14 < uVar4);
        }
    }

    // 0x10095e310
    void LayeredAnimationStateMachine::SetupBasicAnimationSampler() {
        bool cVar1;
        AnimationStateMachine* pAVar4;
        AnimState* pAVar5;
        unsigned long uVar6;
        long lVar7;
        AnimationParameters* pAVar8;
        unsigned long arg1;
        unsigned long arg1_00;
        uint8_t local_b0[96];
        shared_ptr<oldscape::dash3d::Decor> local_50;

        uint8_t* this_00 = &field_56;
        int* piVar3 = (int*)(*this_00)[0];
        if (*piVar3 != 0) {
            LogAssert("m_layerBlendInfos[0].m_blendType == LayeredAnimationStateMachineBlendType::OVERRIDE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/LayeredAnimationStateMachine.cpp",
                      192, nullptr);
        }
        vector<AnimationStateMachine>* local_40 = (vector<AnimationStateMachine>*)&field_24;
        int iVar2 = local_40->size();
        if (iVar2 == 0) {
            arg1_00 = 18446744073709551615;
            arg1 = 18446744073709551615;
        } else {
            arg1 = (unsigned long)iVar2;
            arg1_00 = 18446744073709551615;
            do {
                arg1 = arg1 - 1;
                piVar3 = (int*)(*this_00)[arg1];
                uVar6 = arg1;
                if (*piVar3 != 1) {
                    piVar3 = (int*)(*this_00)[arg1];
                    uVar6 = arg1_00;
                    if (*piVar3 == 0) {
                        pAVar4 = (AnimationStateMachine*)(*local_40)[arg1];
                        pAVar5 = pAVar4->GetCurrentState();
                        cVar1 = pAVar5->HasAnimation();
                        if (cVar1)
                            goto LAB_10095e3f2;
                    }
                }
                arg1_00 = uVar6;
                iVar2 = iVar2 - 1;
            } while (iVar2 != 0);
            arg1 = 18446744073709551615;
        LAB_10095e3f2:
            this = this;
        }
        vector<AnimationStateMachine>* this_01 = local_40;
        uVar6 = local_40->size();
        if (uVar6 <= arg1) {
            LogAssert("overrideLayerIdx < m_stateMachines.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/LayeredAnimationStateMachine.cpp",
                      212, nullptr);
        }
        uVar6 = this_01->size();
        if (arg1_00 < uVar6) {
            pAVar4 = (AnimationStateMachine*)(*this_01)[arg1_00];
            pAVar5 = pAVar4->GetCurrentState();
            cVar1 = pAVar5->HasAnimation();
            if (cVar1) {
                lVar7 = (*this_00)[arg1_00];
                cVar1 = ((lVar7 + 32))->operator_cast_to_bool();
                if (cVar1) {
                    pAVar4 = (AnimationStateMachine*)(*this_01)[arg1];
                    pAVar5 = pAVar4->GetCurrentState();
                    pAVar8 = (AnimationParameters*)pAVar5->GetSingleAnimation();
                    new ((local_b0 + 48)) AnimationInfo(*pAVar8);
                    pAVar4 = (AnimationStateMachine*)(*this_01)[arg1_00];
                    pAVar5 = pAVar4->GetCurrentState();
                    pAVar8 = (AnimationParameters*)pAVar5->GetSingleAnimation();
                    new (local_b0) AnimationInfo(*pAVar8);
                    lVar7 = (*this_00)[arg1_00];
                    local_50 = shared_ptr((lVar7 + 32));
                    field_520->SetAnimations(*((local_b0 + 48)), *local_b0, &local_50);
                    field_112 = (long*)field_520;
                    goto LAB_10095e56a;
                }
            }
        }
        pAVar4 = (AnimationStateMachine*)(*this_01)[arg1];
        pAVar5 = pAVar4->GetCurrentState();
        pAVar8 = (AnimationParameters*)pAVar5->GetSingleAnimation();
        new ((local_b0 + 48)) AnimationInfo(*pAVar8);
        field_216->SetAnimation(*((local_b0 + 48)));
        field_112 = (long*)field_216;
    LAB_10095e56a:
        ((local_b0 + 48))->~Sprite();
    }

    // 0x10095e6d0
    void LayeredAnimationStateMachine::Update(unsigned int arg1) {
        auto plVar1 = field_24.HeapBeginPtr();
        auto plVar2 = field_24.end();
        for (; plVar1 != plVar2; plVar1 = plVar1 + 99) {
            (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1);
        }
    }

    // 0x10095e730
    void LayeredAnimationStateMachine::GetBoneTransforms(WrapArray<math::Matrix43T<float>>& wrapArray,
                                                         const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                         const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                                         const math::Matrix44T<float>& matrix44) const {
        type* arg2_00;
        duration<long long, std::ratio<1l, 1000l>> local_48;

        if (field_520[752] != '\0') {
            if (field_16.valid() != '\0') {
                local_48.duration<int>(0, arg2_00);
                if (field_16.wait_for<long long, std::ratio<1l, 1000l>>(local_48) != 0) {
                    LogAssert("!m_asyncUpdateFuture.valid() || "
                              "m_asyncUpdateFuture.wait_for(std::chrono::milliseconds(0)) == std::future_status::ready",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/asm/LayeredAnimationStateMachine.cpp",
                              245, nullptr);
                }
            }
            (**(void (**)(...))(*field_112 + 24))(field_112, wrapArray, arg2, arg3, matrix44);
        }
    }

    // 0x10095e800
    void LayeredAnimationStateMachine::ApplyBoneTransforms(
        math::Vector3T<float>& vector3, const eastl::vector_map<unsigned short, unsigned short>& arg2,
        const eastl::vector_map<unsigned short, unsigned short>& arg3, const math::Matrix44T<float>& matrix44) const {
        type* arg2_00;
        duration<long long, std::ratio<1l, 1000l>> local_48;

        if (arg2.size() != 1) {
            LogAssert("boneMap.size() == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/LayeredAnimationStateMachine.cpp",
                      255, nullptr);
        }
        if (field_520[752] != '\0') {
            if (field_16.valid() != '\0') {
                local_48.duration<int>(0, arg2_00);
                if (field_16.wait_for<long long, std::ratio<1l, 1000l>>(local_48) != 0) {
                    LogAssert("!m_asyncUpdateFuture.valid() || "
                              "m_asyncUpdateFuture.wait_for(std::chrono::milliseconds(0)) == std::future_status::ready",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/asm/LayeredAnimationStateMachine.cpp",
                              261, nullptr);
                }
            }
            (**(void (**)(...))(*field_112 + 32))(field_112, vector3, arg2, arg3, matrix44);
        }
    }

    // 0x10095e8f0
    void LayeredAnimationStateMachine::GetLabelData(WrapArray<float>& wrapArray,
                                                    const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                    AnimationLabelType animationLabelType) const {
        if (field_520[752] != '\0') {
            (**(void (**)(...))(*field_112 + 40))();
        }
    }

    // 0x10095e910
    uint64_t LayeredAnimationStateMachine::GetAnimatesTransparency() const {
        long* plVar2;
        uint64_t uVar3;

        if (field_24.size() == 0) {
            uVar3 = 0;
        } else {
            plVar2 = &field_24[0];
            uVar3 = (**(void (**)(...))(*plVar2 + 48))(plVar2);
        }
        return uVar3;
    }

    // 0x10095e9a0
    uint8_t LayeredAnimationStateMachine::GetAnimatedColourType() const {
        uint8_t uVar1;
        long* plVar3;

        if (field_24.size() == 0) {
            uVar1 = 2;
        } else {
            plVar3 = &field_24[0];
            uVar1 = (**(void (**)(...))(*plVar3 + 56))(plVar3);
        }
        return uVar1;
    }

    // 0x10095e9e0
    void LayeredAnimationStateMachine::DebugOutputToString(eastl::fixed_string<char, 512>& str) const {
        long* plVar2;
        unsigned long uVar3;
        unsigned long arg1;

        uint8_t* this_00 = &field_24;
        if (this_00->size() != 0) {
            arg1 = 0;
            do {
                str.append_sprintf("\nState machine layer: %zu", arg1);
                plVar2 = (long*)(*this_00)[arg1];
                (**(void (**)(...))(*plVar2 + 72))(plVar2, str);
                arg1 = arg1 + 1;
                uVar3 = this_00->size();
            } while (arg1 < uVar3);
        }
    }

} // namespace jag::graphics
