// libs/graphics/runetek7/animation/RT7AnimationSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "RT7AnimationSampler.h"

namespace jag::graphics {
    // 0x1006797b0: RT7AnimationSampler::SetUseAsyncOptimisedPath(bool) has the same machine code as ui::SwipeState::SetIsDrifting(bool)

    // 0x1009505a0
    RT7AnimationSampler::RT7AnimationSampler() : AnimationSampler(), m_useAsyncOptimisedPath(false) {}

    // 0x100950620
    void RT7AnimationSampler::Update(const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44) {
        if (m_useAsyncOptimisedPath != false) {
            UpdateAsyncOptimised(labelDatas, matrix44, field_80);
        }
        field_24 = 1;
    }

    // 0x100950650
    void RT7AnimationSampler::UpdateAsyncOptimised(const Array<LabelData>& labelDatas,
                                                   const math::Matrix44T<float>& matrix44,
                                                   const AnimationInfo& animationInfo) {
        uint8_t* matrix43;
        bool cVar2;
        unsigned long uVar3;
        Animation* animation;
        float* arg3;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar4;
        Array<shared_ptr<AnimationFrameRT7>>* pAVar5;
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor;
        unsigned int* puVar6;
        shared_ptr<AnimationFrameRT7>* animationFrameRT7;
        compressed_pair<eastl::string*>* pcVar7;
        Layout* pLVar8;
        AnimationFrameRT7* pAVar9;
        AnimationFrameRT7* animationFrameRT7_00;
        long lVar10;
        WrapArray<math::Matrix43T<float>>* this_01;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_02;
        unsigned long uVar11;
        unsigned int uVar12;
        uint8_t* this_04;
        optional<game::option::EnumOptionToggle> aoStack_6c;
        uint8_t in_stack_ffffffffffffff98;
        float local_5c;
        shared_ptr local_58;
        shared_ptr local_48;

        uint8_t* midiPlayerMainThread = &animationInfo.field_32;
        if (*midiPlayerMainThread != nullptr) {
            this_04 = &field_32;
            uVar3 = labelDatas.end();
            this_04->Resize(false, uVar3);
            animation = AnimationManager::GetTimeElapsedSinceNS(animationInfo.field_0);
            new (&aoStack_6c + 4) eastl::optional();
            arg3 = (float*)**midiPlayerMainThread;
            (0).GetFramesBeforeAndAfter(*((&aoStack_6c + 4)), local_5c, *arg3, *animation,
                                        (unsigned long)*(unsigned int*)((long)&animationInfo.field_10 + 6),
                                        animationInfo.field_20, (unsigned int)(uint8_t)animationInfo.field_25,
                                        (bool)in_stack_ffffffffffffff98);
            pcVar4 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*midiPlayerMainThread)
                    .operator->();
            pAVar5 = (Array<shared_ptr<AnimationFrameRT7>>*)pcVar4->second();
            groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)(*pAVar5)[(unsigned long)0];
            local_48 = shared_ptr(groundDecor);
            local_58 = shared_ptr();
            cVar2 = ((&aoStack_6c + 4))->IsActive();
            if (cVar2) {
                pcVar4 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator,
                                              0>*)(*midiPlayerMainThread)
                             .operator->();
                pAVar5 = (Array<shared_ptr<AnimationFrameRT7>>*)pcVar4->second();
                puVar6 = (unsigned int*)((&aoStack_6c + 4))->value();
                animationFrameRT7 = (shared_ptr<AnimationFrameRT7>*)(*pAVar5)[(unsigned long)*puVar6];
                local_58 = *animationFrameRT7;
            }
            if ((animationInfo.field_0 == -1) ||
                ((cVar2 = shared_ptr::operator_cast_to_bool(&local_48),
                  !cVar2 && (cVar2 = shared_ptr::operator_cast_to_bool(&local_58), !cVar2)))) {
                pLVar8 = (Layout*)this_04->SSOBeginPtr();
                lVar10 = pLVar8->HeapBeginPtr();
                matrix43 = PTR_IDENTITY_100ee6720;
                if (lVar10 != 0) {
                    uVar12 = 1;
                    uVar3 = 0;
                    do {
                        this_01 = (WrapArray<math::Matrix43T<float>>*)this_04->SSOBeginPtr();
                        this_02 = (ParticleVertexDataProxy<math::Vector3T<float>>*)(*this_01)[uVar3];
                        *this_02 = *matrix43;
                        uVar3 = (unsigned long)uVar12;
                        pLVar8 = (Layout*)this_04->SSOBeginPtr();
                        uVar11 = pLVar8->HeapBeginPtr();
                        uVar12 = uVar12 + 1;
                    } while (uVar3 < uVar11);
                }
            } else {
                cVar2 = shared_ptr::operator_cast_to_bool(&local_58);
                if (!cVar2) {
                    pcVar7 = (compressed_pair<eastl::string*>*)local_48.operator->();
                    pLVar8 = (Layout*)pcVar7->first();
                    uVar3 = pLVar8->HeapBeginPtr();
                    this_04->Resize(false, uVar3);
                    pAVar9 = (AnimationFrameRT7*)local_48.operator->();
                    pAVar9->GetVertexTransformDataBoneMatrices(*this_04);
                } else {
                    cVar2 = shared_ptr::operator_cast_to_bool(&local_48);
                    if (!cVar2) {
                        pcVar7 = (compressed_pair<eastl::string*>*)local_58.operator->();
                        pLVar8 = (Layout*)pcVar7->first();
                        uVar3 = pLVar8->HeapBeginPtr();
                        this_04->Resize(false, uVar3);
                        pAVar9 = (AnimationFrameRT7*)local_58.operator->();
                        pAVar9->GetVertexTransformDataBoneMatrices(*this_04);
                    } else {
                        cVar2 = ((AnimationManager*)local_48.Instance())->GetTweenBones();
                        if (!cVar2) {
                            pcVar7 = (compressed_pair<eastl::string*>*)local_48.operator->();
                            pLVar8 = (Layout*)pcVar7->first();
                            uVar3 = pLVar8->HeapBeginPtr();
                            this_04->Resize(false, uVar3);
                            pAVar9 = (AnimationFrameRT7*)local_48.operator->();
                            pAVar9->GetVertexTransformDataBoneMatrices(*this_04);
                        } else {
                            pcVar7 = (compressed_pair<eastl::string*>*)local_48.operator->();
                            pLVar8 = (Layout*)pcVar7->first();
                            uVar3 = pLVar8->HeapBeginPtr();
                            this_04->Resize(false, uVar3);
                            pAVar9 = (AnimationFrameRT7*)local_48.operator->();
                            animationFrameRT7_00 = (AnimationFrameRT7*)*local_58;
                            pAVar9->GetInterpolatedVertexTransformData(*this_04, *animationFrameRT7_00, local_5c);
                        }
                    }
                }
            }
            return;
        }
        LogAssert("animInfo.m_animation != nullptr",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/animation/"
                  "RT7AnimationSampler.cpp",
                  40, nullptr);
    }

    // 0x100950990
    void RT7AnimationSampler::UpdateImmediate(const Array<LabelData>& labelDatas,
                                              const math::Matrix44T<float>& matrix44,
                                              const AnimationInfo& animationInfo) {}

    // 0x100950c10
    void RT7AnimationSampler::GetRT5BoneTransforms(WrapArray<math::Matrix43T<float>>& wrapArray,
                                                   const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                   const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                                   const math::Matrix44T<float>& matrix44) const {
        if (m_useAsyncOptimisedPath == false) {
            GetRT5BoneTransformsImmediate(wrapArray, arg2, arg3, matrix44);
            return;
        }
        GetRT5BoneTransformsAsyncOptimised(wrapArray, arg2, arg3, matrix44);
    }

    // 0x100950c30
    void RT7AnimationSampler::GetRT5BoneTransformsAsyncOptimised(
        WrapArray<math::Matrix43T<float>>& wrapArray, const eastl::vector_map<unsigned short, unsigned short>& arg2,
        const eastl::vector_map<unsigned short, unsigned short>& arg3, const math::Matrix44T<float>& matrix44) const {
        unsigned short uVar1;
        unsigned short uVar2;
        WrapArray<math::Matrix43T<float>>* this_00;
        Matrix43T<float>* matrix43;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_01;

        auto puVar3 = arg2.HeapBeginPtr();
        auto puVar4 = arg2.end();
        if (puVar3 != puVar4) {
            do {
                uVar1 = *puVar3;
                uVar2 = puVar3[1];
                this_00 = (WrapArray<math::Matrix43T<float>>*)field_32.SSOBeginPtr();
                matrix43 = (Matrix43T<float>*)(*this_00)[(unsigned long)uVar1];
                this_01 = &wrapArray[(unsigned long)uVar2];
                *this_01 = *matrix43;
                puVar3 = puVar3 + 2;
            } while (puVar3 != puVar4);
        }
    }

    // 0x100950cc0
    void RT7AnimationSampler::GetRT5BoneTransformsImmediate(
        WrapArray<math::Matrix43T<float>>& wrapArray, const eastl::vector_map<unsigned short, unsigned short>& arg2,
        const eastl::vector_map<unsigned short, unsigned short>& arg3, const math::Matrix44T<float>& matrix44) const {
        uint8_t* matrix43;
        Animation* animation;
        unsigned int* puVar5;
        shared_ptr<AnimationFrameRT7>* animationFrameRT7;
        AnimationFrameRT7* pAVar6;
        AnimationFrameRT7* animationFrameRT7_00;
        long lVar7;
        long lVar8;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_02;
        uint8_t in_stack_ffffffffffffff88;
        float local_64;

        uint8_t* midiPlayerMainThread = &field_112;
        if (!*midiPlayerMainThread != nullptr) {
            LogAssert("m_animInfo.m_animation != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/RT7AnimationSampler.cpp",
                      118, nullptr);
        }
        animation = AnimationManager::GetTimeElapsedSinceNS(field_80);
        optional<game::option::EnumOptionToggle> local_70;
        float* arg3_00 = (float*)**midiPlayerMainThread;
        (0).GetFramesBeforeAndAfter(local_70, local_64, *arg3_00, *animation, (unsigned long)field_96, field_100,
                                    (unsigned int)field_105, (bool)in_stack_ffffffffffffff88);
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar3 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*midiPlayerMainThread)
                .operator->();
        auto pAVar4 = pcVar3->second();
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor =
            (shared_ptr<oldscape::dash3d::GroundDecor>*)(*pAVar4)[(unsigned long)0];
        shared_ptr local_60(groundDecor);
        shared_ptr local_50;
        bool cVar2 = local_70.IsActive();
        if (cVar2) {
            pcVar3 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*midiPlayerMainThread)
                    .operator->();
            pAVar4 = (Array<shared_ptr<AnimationFrameRT7>>*)pcVar3->second();
            puVar5 = (unsigned int*)local_70.value();
            animationFrameRT7 = (shared_ptr<AnimationFrameRT7>*)(*pAVar4)[(unsigned long)*puVar5];
            local_50 = *animationFrameRT7;
        }
        if ((field_80 == 18446744073709551615) ||
            ((cVar2 = shared_ptr::operator_cast_to_bool(&local_60),
              !cVar2 && (cVar2 = shared_ptr::operator_cast_to_bool(&local_50), !cVar2)))) {
            lVar7 = arg2.HeapBeginPtr();
            lVar8 = arg2.end();
            matrix43 = PTR_IDENTITY_100ee6720;
            for (; lVar7 != lVar8; lVar7 = lVar7 + 4) {
                this_02 = &wrapArray[(unsigned long)*(unsigned short*)(lVar7 + 2)];
                *this_02 = *matrix43;
            }
        } else {
            cVar2 = shared_ptr::operator_cast_to_bool(&local_50);
            if (!cVar2) {
                pAVar6 = (AnimationFrameRT7*)local_60.operator->();
                pAVar6->GetBoneMatrices(wrapArray, arg2);
            } else {
                cVar2 = shared_ptr::operator_cast_to_bool(&local_60);
                if (!cVar2) {
                    pAVar6 = (AnimationFrameRT7*)local_50.operator->();
                    pAVar6->GetBoneMatrices(wrapArray, arg2);
                } else {
                    cVar2 = ((AnimationManager*)local_60.Instance())->GetTweenBones();
                    if (!cVar2) {
                        pAVar6 = (AnimationFrameRT7*)local_60.operator->();
                        pAVar6->GetBoneMatrices(wrapArray, arg2);
                    } else {
                        pAVar6 = (AnimationFrameRT7*)local_60.operator->();
                        animationFrameRT7_00 = (AnimationFrameRT7*)*local_50;
                        pAVar6->GetInterpolatedBoneMatrices(wrapArray, *animationFrameRT7_00, local_64, arg2);
                    }
                }
            }
        }
    }

    // 0x100950f40
    void RT7AnimationSampler::GetLabelData(WrapArray<float>& wrapArray,
                                           const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                           AnimationLabelType animationLabelType) const {
        Layout* this_00;
        vector_map<unsigned short, unsigned short>* this_01;
        int iVar1;
        Animation* animation;
        unsigned int* puVar7;
        shared_ptr<AnimationFrameRT7>* animationFrameRT7;
        AnimationFrameRT7* pAVar8;
        WrapArray<float>* pWVar9;
        WorldmapAreaMetadata* pWVar10;
        compressed_pair<eastl::ListNodeBase, eastl::fixed_node_allocator<40ul, 1ul, 8ul, 0ul, true>>* pcVar11;
        LoginManager* pLVar12;
        unsigned long uVar13;
        void* pvVar14;
        void* pvVar15;
        unsigned short* puVar16;
        unsigned short* puVar17;
        unsigned long uVar18;
        long lVar19;
        uint8_t* pbVar20;
        long lVar21;
        unsigned long uVar22;
        unsigned long uVar23;
        unsigned int uVar24;
        unsigned long arg1;
        uint8_t in_stack_ffffffffffffff18;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_b0;
        Layout* local_a0;
        float local_98;
        float local_94;
        unsigned long local_90;
        Layout* local_80;
        Layout* local_78;
        unsigned long local_38;

        uint8_t* midiPlayerMainThread = &field_112;
        vector_map<unsigned short, unsigned short>* local_48 = arg2;
        if (!*midiPlayerMainThread != nullptr) {
            LogAssert("m_animInfo.m_animation != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/RT7AnimationSampler.cpp",
                      198, nullptr);
        }
        local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)animationLabelType);
        Array<float>* arg4 = (Array<float>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
        if (animationLabelType == 0) {
            arg4 = (Array<float>*)PTR_IDENTITY_DELTA_100ee69f8;
        }
        Array<float>* local_88 = (Array<float>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORMS;
        if (animationLabelType == 0) {
            local_88 = (Array<float>*)PTR_IDENTITY_LABELDELTAS_100ee6a00;
        }
        animation = AnimationManager::GetTimeElapsedSinceNS(field_80);
        optional<game::option::EnumOptionToggle> local_b8;
        float* pfVar4 = (float*)**midiPlayerMainThread;
        (0).GetFramesBeforeAndAfter(local_b8, local_98, *pfVar4, *animation, (unsigned long)field_96, field_100,
                                    (unsigned int)field_105, (bool)in_stack_ffffffffffffff18);
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar5 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*midiPlayerMainThread)
                .operator->();
        auto pAVar6 = pcVar5->second();
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor =
            (shared_ptr<oldscape::dash3d::GroundDecor>*)(*pAVar6)[(unsigned long)0];
        shared_ptr local_70(groundDecor);
        shared_ptr local_58;
        bool cVar3 = local_b8.IsActive();
        if (cVar3) {
            pcVar5 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*midiPlayerMainThread)
                    .operator->();
            pAVar6 = (Array<shared_ptr<AnimationFrameRT7>>*)pcVar5->second();
            puVar7 = (unsigned int*)local_b8.value();
            animationFrameRT7 = (shared_ptr<AnimationFrameRT7>*)(*pAVar6)[(unsigned long)*puVar7];
            local_58 = *animationFrameRT7;
        }
        cVar3 = shared_ptr::operator_cast_to_bool(&local_70);
        if ((!cVar3) && (cVar3 = shared_ptr::operator_cast_to_bool(&local_58), pWVar9 = wrapArray, !cVar3)) {
            uVar13 = wrapArray.HeapBeginPtr();
            pvVar14 = (void*)(*pWVar9)[0];
            pvVar15 = (void*)(*local_88)[0];
            _memcpy(pvVar14, pvVar15, (uVar13 & 1073741823) << 2);
        } else {
            cVar3 = shared_ptr::operator_cast_to_bool(&local_58);
            if (!cVar3) {
                if ((float)local_38 == 0.0) {
                    pcVar11 =
                        (compressed_pair<eastl::ListNodeBase, eastl::fixed_node_allocator<40ul, 1ul, 8ul, 0ul, true>>*)
                            local_70.operator->();
                    pWVar9 = (WrapArray<float>*)pcVar11->second();
                } else {
                    pAVar8 = (AnimationFrameRT7*)local_70.operator->();
                    pWVar9 = (WrapArray<float>*)pAVar8->GetBillboardLabelTransforms();
                }
                local_b0.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*pWVar9);
                AnimationSampler::ConcatenateArrays(wrapArray, local_b0, *local_48, *arg4);
            } else {
                cVar3 = shared_ptr::operator_cast_to_bool(&local_70);
                iVar1 = (int)(float)local_38;
                if (!cVar3) {
                    if ((float)local_38 == 0.0) {
                        pcVar11 = (compressed_pair<eastl::ListNodeBase,
                                                   eastl::fixed_node_allocator<40ul, 1ul, 8ul, 0ul, true>>*)
                                      local_58.operator->();
                        pWVar9 = (WrapArray<float>*)pcVar11->second();
                    } else {
                        pAVar8 = (AnimationFrameRT7*)local_58.operator->();
                        pWVar9 = (WrapArray<float>*)pAVar8->GetBillboardLabelTransforms();
                    }
                    local_b0.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*pWVar9);
                    AnimationSampler::ConcatenateArrays(wrapArray, local_b0, *local_48, *arg4);
                } else {
                    if ((float)local_38 == 0.0) {
                        pAVar8 = (AnimationFrameRT7*)local_70.operator->();
                        pWVar9 = (WrapArray<float>*)pAVar8->second();
                    } else {
                        pAVar8 = (AnimationFrameRT7*)local_70.operator->();
                        pWVar9 = (WrapArray<float>*)pAVar8->GetBillboardLabelTransforms();
                    }
                    cVar3 = ((AnimationManager*)pAVar8->Instance())->GetTweenLabels();
                    if (!cVar3) {
                        local_b0.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*pWVar9);
                        AnimationSampler::ConcatenateArrays(wrapArray, local_b0, *local_48, *arg4);
                    } else {
                        if (iVar1 == 0) {
                            pLVar12 = (LoginManager*)local_70.operator->();
                            local_80 = (Layout*)pLVar12->GetDevCredentialsOutputDirectory();
                            pcVar11 = (compressed_pair<eastl::ListNodeBase,
                                                       eastl::fixed_node_allocator<40ul, 1ul, 8ul, 0ul, true>>*)
                                          local_58.operator->();
                            local_a0 = (Layout*)pcVar11->second();
                            pLVar12 = (LoginManager*)local_58.operator->();
                            local_78 = (Layout*)pLVar12->GetDevCredentialsOutputDirectory();
                        } else {
                            pWVar10 = (WorldmapAreaMetadata*)local_70.operator->();
                            local_80 = (Layout*)pWVar10->GetOrigin();
                            pAVar8 = (AnimationFrameRT7*)local_58.operator->();
                            local_a0 = (Layout*)pAVar8->GetBillboardLabelTransforms();
                            pWVar10 = (WorldmapAreaMetadata*)local_58.operator->();
                            local_78 = (Layout*)pWVar10->GetOrigin();
                        }
                        uVar13 = arg4->end();
                        pvVar14 = &wrapArray[0];
                        pvVar15 = (void*)(*arg4)[0];
                        uVar22 = uVar13 * 4 & 4294967295;
                        _memcpy(pvVar14, pvVar15, uVar22);
                        this_01 = local_48;
                        local_90 = uVar13;
                        puVar16 = (unsigned short*)local_48->HeapBeginPtr();
                        uVar13 = local_90;
                        puVar17 = (unsigned short*)this_01->end();
                        if (puVar16 != puVar17) {
                            uVar23 = uVar13;
                            do {
                                uVar24 = (unsigned int)puVar16[1] * (int)uVar23;
                                arg1 = (unsigned long)uVar24;
                                if (uVar24 == 0) {
                                    LogAssert("newLabelSlot != 0",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/animation/RT7AnimationSampler.cpp",
                                              269,
                                              "AnimationState: Label data requested with a label slot of 0 - this is "
                                              "reserved!");
                                }
                                uVar24 = (unsigned int)*puVar16 * (int)uVar23;
                                uVar23 = (unsigned long)uVar24;
                                local_38 = (unsigned long)*puVar16;
                                uVar18 = pWVar9->HeapBeginPtr();
                                if (uVar23 < uVar18) {
                                    lVar19 = pWVar9->end();
                                } else {
                                    lVar19 = local_88->data();
                                }
                                uVar18 = pWVar9->HeapBeginPtr();
                                this_00 = local_a0;
                                if ((((uVar23 < uVar18) || (uVar18 = local_a0->HeapBeginPtr(), uVar23 < uVar18)) &&
                                     ((uVar18 = local_80->HeapBeginPtr(),
                                       uVar18 <= local_38 ||
                                           (pbVar20 = (uint8_t*)(*local_80)[local_38], (*pbVar20 & 2) == 0)))) &&
                                    ((uVar18 = local_78->HeapBeginPtr(),
                                      uVar18 <= local_38 ||
                                          (pbVar20 = (uint8_t*)(*local_78)[local_38], (*pbVar20 & 1) == 0)))) {
                                    uVar18 = this_00->HeapBeginPtr();
                                    if (uVar23 < uVar18) {
                                        lVar21 = this_00->end();
                                    } else {
                                        lVar21 = local_88->data();
                                    }
                                    if ((int)local_90 != 0) {
                                        uVar23 = uVar13 & 4294967295;
                                        do {
                                            local_38 = (((uint64_t)local_38._4_4_ << 32) |
                                                        (uint32_t)(*(uint32_t*)(lVar19 + (unsigned long)uVar24 * 4)));
                                            local_48 =
                                                (vector_map<unsigned short,
                                                            unsigned short>*)(((uint64_t)local_48._4_4_ << 32) |
                                                                              (uint32_t)(*(
                                                                                  uint32_t*)(lVar21 +
                                                                                             (unsigned long)uVar24 *
                                                                                                 4)));
                                            local_94 = local_98;
                                            pfVar4 = &wrapArray[arg1];
                                            *pfVar4 = (local_48._0_4_ - (float)local_38) * local_94 + (float)local_38;
                                            arg1 = (unsigned long)((int)arg1 + 1);
                                            uVar24 = uVar24 + 1;
                                            uVar23 = uVar23 - 1;
                                        } while (uVar23 != 0);
                                    }
                                } else {
                                    pvVar14 = &wrapArray[arg1];
                                    _memcpy(pvVar14, (void*)(lVar19 + uVar23 * 4), uVar22);
                                }
                                puVar16 = puVar16 + 2;
                                uVar23 = local_90;
                            } while (puVar16 != puVar17);
                        }
                    }
                }
            }
        }
    }

} // namespace jag::graphics
