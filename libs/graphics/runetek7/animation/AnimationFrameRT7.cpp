// libs/graphics/runetek7/animation/AnimationFrameRT7.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimationFrameRT7.h"

namespace jag::graphics {
    // 0x100009c90: AnimationFrameRT7::GetBoneTransforms() const has the same machine code as eastl::compressed_pair<eastl::string::Layout>::first()

    // 0x100049810: AnimationFrameRT7::GetSkipTweenLabel() const has the same machine code as oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const

    // 0x1000b7a80: AnimationFrameRT7::GetMaximumBoneID() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetObjCount() const

    // 0x100102fc0: AnimationFrameRT7::GetSkipTweenBillboard() const has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x100197a40: AnimationFrameRT7::GetLabelDeltas() const has the same machine code as eastl::compressed_pair<eastl::ListNodeBase>::second()

    // 0x1001a3c10: AnimationFrameRT7::GetSkipTweenBone() const has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x1006e16e0: AnimationFrameRT7::GetBillboardLabelTransforms() const has the same machine code as eastl::tuple_element<1ul, eastl::pair<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny>> >::type const& eastl::get<1ul, eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny>>(eastl::pair<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny>> const&)

    // 0x1009878a0
    AnimationFrameRT7::AnimationFrameRT7() : MakeSharedPool<AnimationFrameRT7, 8192>(), VertexTransformData() {
        new (&field_48) shared_ptr();
        new (&field_64) shared_ptr();
        new (&field_80) shared_ptr();
        m_animatesTransparency = 0;
        m_animatesColour = 0;
        m_animatesBillboards = 0;
        m_maximumBoneID = 4294967295;
        new (&field_112) shared_ptr();
    }

    // 0x1009879a0
    AnimationFrameRT7::AnimationFrameRT7(const shared_ptr<AnimationFrameRT5>& animationFrameRT5, unsigned int arg2,
                                         const Array<LabelData>& labelDatas, bool arg4)
        : MakeSharedPool<AnimationFrameRT7, 8192>(), VertexTransformData() {
        AnimTransform AVar2;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_01;
        shared_ptr<AnimBase>* this_02;
        Option<float>* this_03;
        Layout* this_04;
        unsigned int* puVar3;
        unsigned int* puVar4;
        AnimBase* pAVar5;
        HeapInterface* this_05;
        Particle* pPVar6;
        unsigned long arg3;
        long lVar7;
        long lVar8;
        unsigned long uVar9;
        long lVar10;
        unsigned long uVar11;
        unsigned int local_3c;
        unsigned int local_38;
        unsigned int local_34;

        new (&field_48) shared_ptr();
        new (&field_64) shared_ptr();
        new (&field_80) shared_ptr();
        m_animatesTransparency = 0;
        m_animatesColour = 0;
        m_animatesBillboards = 0;
        m_maximumBoneID = 4294967295;
        new (&field_112) shared_ptr();
        field_96 = arg2;
        if (((Skybox*)animationFrameRT5.operator->())->ShowSkybox()) {
            this_01 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)
                          animationFrameRT5.operator->();
            this_02 = (shared_ptr<AnimBase>*)this_01->second();
            local_34 = 4294967295;
            local_38 = 4294967295;
            local_3c = 4294967295;
            this_03 = (Option<float>*)animationFrameRT5.operator->();
            this_04 = (Layout*)this_03->GetDefaultValue();
            puVar3 = (unsigned int*)this_04->HeapBeginPtr();
            puVar4 = (unsigned int*)this_04->end();
            if (puVar3 != puVar4) {
                do {
                    pAVar5 = (AnimBase*)(*this_02).operator->();
                    AVar2 = pAVar5->GetTransformType(*puVar3);
                    pAVar5 = (AnimBase*)**this_02;
                    CalculateMaxBoneOrLabelIDs((int*)&local_34, (int*)&local_38, (int*)&local_3c, pAVar5, *puVar3,
                                               AVar2 & 255);
                    if (puVar3[15] != 4294967295) {
                        pAVar5 = (AnimBase*)**this_02;
                        CalculateMaxBoneOrLabelIDs((int*)&local_34, (int*)&local_38, (int*)&local_3c, pAVar5,
                                                   puVar3[15], 0);
                    }
                    puVar3 = puVar3 + 16;
                } while (puVar3 != puVar4);
            }
            if ((int)local_34 < 0) {
                uVar11 = 0;
            } else {
                if (799 < local_34) {
                    LogAssert("maximumBoneID < AnimationConstants::MAX_BONECOUNT",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationFrameRT7.cpp",
                              50, "AnimationFrameRT7: More than maximum bones found in animation frame: %i");
                }
                uVar11 = (long)(int)local_34 + 1;
            }
            if ((int)local_38 < 0) {
                uVar9 = 0;
            } else {
                if (399 < local_38) {
                    LogAssert("maximumLabelID < AnimationConstants::MAX_LABELCOUNT",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationFrameRT7.cpp",
                              56, "AnimationFrameRT7: More than maximum labels found in animation frame: %i");
                }
                uVar9 = (unsigned long)(int)(local_38 * 4 + 4);
            }
            if ((int)local_3c < 0) {
                arg3 = 0;
            } else {
                if (399 < local_3c) {
                    LogAssert("maximumBillboardLabelID < AnimationConstants::MAX_BILLBOARDLABELCOUNT",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationFrameRT7.cpp",
                              62, "AnimationFrameRT7: More than maximum billboard labels found in animation frame: %i");
                }
                arg3 = (unsigned long)(local_3c * 8 + 8);
            }
            SetMaxSize(uVar11, uVar9, arg3);
            if (((uVar11 != 0) || (uVar9 != 0)) || (arg3 != 0)) {
                lVar10 = (long)(int)local_34;
                lVar8 = (long)(int)local_38;
                lVar7 = (long)(int)local_3c;
                this_05 = HeapInterface::Instance();
                uVar9 = lVar10 + 16U & 18446744073709551600;
                uVar11 = lVar8 + 16U & 18446744073709551600;
                pPVar6 = (Particle*)this_05->AlignedAlloc((lVar7 + 16U & 18446744073709551600) + uVar11 + uVar9, 16);
                if (!(is_aligned<char>((unsigned long)pPVar6, 16))) {
                    LogAssert("is_aligned(reinterpret_cast<size_t>(pData))",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationFrameRT7.cpp",
                              79, nullptr);
                }
                new (&field_48) WrapArray(pPVar6, (long)(int)local_34 + 1);
                pPVar6 = (Particle*)(pPVar6->m_rGBA + (uVar9 - 68));
                if (!(is_aligned<char>((unsigned long)pPVar6, 16))) {
                    LogAssert("is_aligned(reinterpret_cast<size_t>(pData))",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationFrameRT7.cpp",
                              83, nullptr);
                }
                new (&field_64) WrapArray(pPVar6, (long)(int)local_38 + 1);
                if (!(is_aligned<char>((unsigned long)(pPVar6->m_rGBA + (uVar11 - 68)), 16))) {
                    LogAssert("is_aligned(reinterpret_cast<size_t>(pData))",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationFrameRT7.cpp",
                              87, nullptr);
                }
                new (&field_80) WrapArray((Particle*)(pPVar6->m_rGBA + (uVar11 - 68)), (long)(int)local_3c + 1);
            }
            PreProcessTransforms(animationFrameRT5, labelDatas, arg4);
            m_maximumBoneID = local_34;
            field_112 = animationFrameRT5;
        }
    }

    // 0x100987dc0
    void AnimationFrameRT7::CalculateMaxBoneOrLabelIDs(int& arg1, int& arg2, int& arg3, const AnimBase& animBase,
                                                       unsigned int arg5, AnimTransform animTransform) {
        unsigned short* puVar2;
        unsigned short* arg2_00;
        int* piVar3;
        unsigned int local_34;

        auto array = animBase.GetTransformLabels(arg5);
        if (array->empty() == '\0') {
            puVar2 = (unsigned short*)array->data();
            arg2_00 = (unsigned short*)array->end();
            puVar2 = std::max_element<unsigned short const*>(puVar2, arg2_00);
            local_34 = (unsigned int)*puVar2;
            if ((((uint8_t)animTransform < 4) || (arg1 = arg2, ((uint8_t)animTransform & 253) == 5)) ||
                (arg1 = arg3, (uint8_t)((uint8_t)animTransform - 8) < 3)) {
                piVar3 = std::max<int>(arg1, local_34);
                arg1 = *piVar3;
            }
        }
    }

    // 0x100987ec0
    void AnimationFrameRT7::PreProcessTransforms(const shared_ptr<AnimationFrameRT5>& animationFrameRT5,
                                                 const Array<LabelData>& labelDatas, bool arg3) {
        uint32_t* arg2;
        unsigned int arg1;
        Array<unsigned short>* pAVar1;
        uint8_t bVar2;
        AnimationFrameRT5Transform* animationFrameRT5Transform;
        AnimBase* pAVar5;
        Array<LabelData>* labelDatas_00;
        WrapArray<float>* pWVar6;
        uint64_t in_register_00000009;
        AnimTransform animTransform;
        Vector3T<float>* in_stack_ffffffffffffff78;
        Array<unsigned short>* local_50;
        uint8_t local_31;

        uint32_t local_44 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        auto this_00 = animationFrameRT5.operator->();
        auto this_01 = this_00->second();
        ClearMemberData();
        Vector3T<int> local_60;
        auto this_02 = animationFrameRT5.operator->();
        auto this_03 = this_02->GetDefaultValue();
        animationFrameRT5Transform = (AnimationFrameRT5Transform*)this_03->HeapBeginPtr();
        auto pAVar4 = this_03->end();
        while (true) {
            if (animationFrameRT5Transform == pAVar4) {
                return;
            }
            arg1 = animationFrameRT5Transform->field_0;
            pAVar5 = (AnimBase*)(*this_01).operator->();
            bVar2 = pAVar5->GetTransformType(arg1);
            pAVar5 = (AnimBase*)(*this_01).operator->();
            local_50 = (Array<unsigned short>*)pAVar5->GetTransformLabels(arg1);
            arg2 = &animationFrameRT5Transform->field_4;
            labelDatas_00 = (Array<LabelData>*)((Layout*)(NXTPixToolkit*)this)->SSOBeginPtr();
            animTransform = (AnimTransform)bVar2;
            local_31 = bVar2;
            if ((char)local_44 != '\0')
                break;
            ((AnimationHelper*)(unsigned long)animTransform)
                ->ApplyOriginTransform((AnimTransform)this_01, labelDatas, *labelDatas_00,
                                       *((WrapArray<math::Matrix43T<float> _>*)(unsigned long)arg1),
                                       *(unsigned int*)((long)&animationFrameRT5Transform->field_56 + 4), (int)arg2,
                                       local_60, *in_stack_ffffffffffffff78);
            bVar2 = local_31;
            pAVar1 = local_50;
            if (local_31 != 0) {
                ApplyTweenMask((AnimationFrameRT7*)(NXTPixToolkit*)this, animTransform, local_50,
                               animationFrameRT5Transform);
                if (!(((AnimationHelper*)(unsigned long)animTransform)
                          ->ApplyBoneTransform((AnimTransform)pAVar1, *arg2, animationFrameRT5Transform->field_16,
                                               animationFrameRT5Transform->field_40, nullptr, (uint8_t)&local_60,
                                               *labelDatas_00, *in_stack_ffffffffffffff78))) {
                    pWVar6 = (WrapArray<float>*)GetScreen();
                    pAVar1 = local_50;
                    if (!(AnimationHelper::ApplyColourTransform(animTransform, *local_50, *arg2, *pWVar6,
                                                                (bool)(char)local_44))) {
                        pWVar6 = (WrapArray<float>*)((Option<float>*)(NXTPixToolkit*)this)->GetDefaultValue();
                        if (AnimationHelper::ApplyBillboardTransform(animTransform, *pAVar1, *arg2, *pWVar6)) {
                            ((NXTPixToolkit*)this)->m_screen[86] = 1;
                        }
                    } else if (bVar2 == 5) {
                        ((NXTPixToolkit*)this)->m_screen[84] = 1;
                    } else if (bVar2 == 7) {
                        ((NXTPixToolkit*)this)->m_screen[85] = 1;
                    }
                }
            }
            animationFrameRT5Transform = (AnimationFrameRT5Transform*)&animationFrameRT5Transform->field_64;
        }
        LogAssert("!usingKeyFrames",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/animation/"
                  "AnimationFrameRT7.cpp",
                  160, nullptr);
    }

    // 0x1009880e0
    AnimationFrameRT7::~AnimationFrameRT7() {
        HeapInterface::Instance()->AlignedFree((void*)field_48.end());
        field_112.~shared_ptr();
    }

    // 0x100988150
    void AnimationFrameRT7::ClearMemberData() {
        uint64_t uVar1;
        uint64_t uVar2;
        uint64_t uVar3;
        WrapArray<float>* pWVar7;
        uint64_t* puVar8;
        uint64_t* puVar9;
        unsigned long uVar10;
        unsigned int uVar13;
        unsigned long uVar14;

        auto this_00 = SSOBeginPtr();
        auto this_01 = this_00->end();
        auto pMVar4 = this_00->end();
        for (; this_01 != pMVar4; this_01 = this_01 + 48) {
            this_01->SetToIdentity();
        }
        auto pLVar5 = GetScreen();
        long lVar6 = pLVar5->HeapBeginPtr();
        if (lVar6 != 0) {
            uVar13 = 4;
            uVar14 = 0;
            do {
                pWVar7 = (WrapArray<float>*)GetScreen();
                puVar8 = (uint64_t*)(*pWVar7)[uVar14];
                puVar9 = (uint64_t*)(*((Array<float>*)&AnimationManager::IDENTITY_STATE_LABELS))[0];
                uVar1 = puVar9[1];
                *puVar8 = *puVar9;
                puVar8[1] = uVar1;
                uVar14 = (unsigned long)uVar13;
                pLVar5 = (Layout*)GetScreen();
                uVar10 = pLVar5->HeapBeginPtr();
                uVar13 = uVar13 + 4;
            } while (uVar14 < uVar10);
        }
        pLVar5 = (Layout*)GetDefaultValue();
        lVar6 = pLVar5->HeapBeginPtr();
        if (lVar6 != 0) {
            uVar13 = 8;
            uVar14 = 0;
            do {
                pWVar7 = (WrapArray<float>*)GetDefaultValue();
                puVar8 = (uint64_t*)(*pWVar7)[uVar14];
                puVar9 = (uint64_t*)(*((Array<float>*)&AnimationManager::IDENTITY_STATE_BILLBOARD_LABELS))[0];
                uVar1 = puVar9[1];
                uVar2 = puVar9[2];
                uVar3 = puVar9[3];
                *puVar8 = *puVar9;
                puVar8[1] = uVar1;
                puVar8[2] = uVar2;
                puVar8[3] = uVar3;
                uVar14 = (unsigned long)uVar13;
                pLVar5 = (Layout*)GetDefaultValue();
                uVar10 = pLVar5->HeapBeginPtr();
                uVar13 = uVar13 + 8;
            } while (uVar14 < uVar10);
        }
        auto puVar11 = field_48.end();
        auto puVar12 = field_48.end();
        eastl::fill(puVar11, puVar12, 0);
        puVar11 = (unsigned char*)field_64.end();
        puVar12 = (unsigned char*)field_64.end();
        eastl::fill(puVar11, puVar12, 0);
        puVar11 = (unsigned char*)field_80.end();
        puVar12 = (unsigned char*)field_80.end();
        eastl::fill(puVar11, puVar12, 0);
    }

    // 0x100988440
    void AnimationFrameRT7::ApplyTweenMask(AnimTransform animTransform, const Array<unsigned short>& arg2,
                                           const AnimationFrameRT5Transform& animationFrameRT5Transform) {
        unsigned short* puVar2;
        unsigned short* puVar3;
        uint8_t* pbVar4;
        uint8_t bVar5;

        unsigned int uVar6 = *(unsigned int*)&animationFrameRT5Transform.field_56 & 3;
        if (uVar6 != 0) {
            bVar5 = (uint8_t)uVar6;
            if ((uint8_t)((uint8_t)animTransform - 1) < 3) {
                puVar2 = (unsigned short*)arg2.data();
                puVar3 = (unsigned short*)arg2.end();
                if (puVar2 != puVar3) {
                    do {
                        pbVar4 = &field_48[(unsigned long)*puVar2];
                        *pbVar4 = *pbVar4 | bVar5;
                        puVar2 = puVar2 + 1;
                    } while (puVar2 != puVar3);
                }
            } else if (((uint8_t)animTransform & 253) == 5) {
                puVar2 = (unsigned short*)arg2.data();
                puVar3 = (unsigned short*)arg2.end();
                if (puVar2 != puVar3) {
                    do {
                        pbVar4 = &field_64[(unsigned long)*puVar2];
                        *pbVar4 = *pbVar4 | bVar5;
                        puVar2 = puVar2 + 1;
                    } while (puVar2 != puVar3);
                }
            } else if ((uint8_t)((uint8_t)animTransform - 8) < 3) {
                puVar2 = (unsigned short*)arg2.data();
                puVar3 = (unsigned short*)arg2.end();
                if (puVar2 != puVar3) {
                    do {
                        pbVar4 = &field_80[(unsigned long)*puVar2];
                        *pbVar4 = *pbVar4 | bVar5;
                        puVar2 = puVar2 + 1;
                    } while (puVar2 != puVar3);
                }
            }
        }
    }

    // 0x100988560
    void AnimationFrameRT7::GetBoneMatrices(WrapArray<math::Matrix43T<float>>& wrapArray,
                                            const eastl::vector_map<unsigned short, unsigned short>& arg2) const {
        unsigned short uVar1;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_00;

        Matrix43T<float>* pMVar2 = &wrapArray[0];
        pMVar2->SetToIdentity();
        auto puVar3 = arg2.HeapBeginPtr();
        auto puVar4 = arg2.end();
        for (; puVar3 != puVar4; puVar3 = puVar3 + 2) {
            uVar1 = puVar3[1];
            pMVar2 = GetBoneTransform((unsigned int)*puVar3);
            this_00 = &wrapArray[(unsigned long)uVar1];
            *this_00 = *pMVar2;
        }
    }

    // 0x100988640
    void AnimationFrameRT7::GetVertexTransformDataBoneMatrices(VertexTransformData& vertexTransformData) const {
        Matrix43T<float>* matrix43;
        WrapArray<math::Matrix43T<float>>* this_00;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_01;
        unsigned long uVar3;
        unsigned long arg1;

        Layout* pLVar1 = (Layout*)SSOBeginPtr();
        if (pLVar1->HeapBeginPtr() != 0) {
            arg1 = 0;
            do {
                matrix43 = GetBoneTransform((int)arg1);
                this_00 = (WrapArray<math::Matrix43T<float>>*)vertexTransformData.SSOBeginPtr();
                this_01 = (ParticleVertexDataProxy<math::Vector3T<float>>*)(*this_00)[arg1];
                *this_01 = *matrix43;
                arg1 = (unsigned long)((int)arg1 + 1);
                pLVar1 = (Layout*)SSOBeginPtr();
                uVar3 = pLVar1->HeapBeginPtr();
            } while (arg1 < uVar3);
        }
    }

    // 0x1009886c0
    void AnimationFrameRT7::GetInterpolatedBoneMatrices(
        WrapArray<math::Matrix43T<float>>& wrapArray, const AnimationFrameRT7& animationFrameRT7, float arg3,
        const eastl::vector_map<unsigned short, unsigned short>& arg4) const {
        if (arg4.empty() == '\0') {
            GetInterpolatedBoneMatricesRT5(wrapArray, animationFrameRT7, arg3, arg4);
        }
    }

    // 0x100988710
    void AnimationFrameRT7::GetInterpolatedBoneMatricesRT5(
        WrapArray<math::Matrix43T<float>>& wrapArray, const AnimationFrameRT7& animationFrameRT7, float arg3,
        const eastl::vector_map<unsigned short, unsigned short>& arg4) const {
        unsigned short uVar1;
        unsigned short uVar2;
        uint8_t bVar3;
        uint8_t* pbVar6;
        Matrix43T<float>* matrix43;
        Matrix43T<float>* this_02;
        Vector3T<float>* pVVar7;
        uint64_t* puVar8;
        long lVar9;
        ParticleVertexDataProxy<math::Vector3T<float>>* pPVar10;
        unsigned long arg1;
        uint8_t bVar11;
        unsigned long local_118[6];
        uint64_t local_e8;
        uint64_t uStack_e0;
        uint64_t local_d8;
        uint64_t uStack_d0;
        uint64_t local_88;
        uint64_t uStack_80;
        uint64_t local_78;
        uint64_t uStack_70;
        uint64_t local_68;
        uint64_t uStack_60;

        auto local_90 = animationFrameRT7.first();
        unsigned long local_40 = local_90->HeapBeginPtr();
        Layout* this_00 = (Layout*)animationFrameRT7.GetMaterial();
        unsigned long local_c8 = ((Layout*)SSOBeginPtr())->HeapBeginPtr();
        WrapArray<unsigned char>* local_98 = (WrapArray<unsigned char>*)&field_48;
        local_118[0] = local_98->HeapBeginPtr();
        auto puVar4 = std::min<unsigned long>(*local_118, local_c8);
        unsigned long local_b8 = *puVar4;
        Layout* local_a0 = this_00;
        local_118[0] = this_00->HeapBeginPtr();
        puVar4 = std::min<unsigned long>(*local_118, local_40);
        unsigned long local_b0 = *puVar4;
        auto puVar5 = arg4.HeapBeginPtr();
        auto local_a8 = arg4.end();
        if (puVar5 != local_a8) {
            do {
                uVar1 = *puVar5;
                arg1 = (unsigned long)uVar1;
                uVar2 = puVar5[1];
                if (arg1 < local_b8) {
                    pbVar6 = (uint8_t*)(*local_98)[arg1];
                    bVar11 = (*pbVar6 & 2) >> 1;
                    if (local_b0 <= arg1)
                        goto LAB_10098886d;
                LAB_10098888c:
                    pbVar6 = (uint8_t*)(*local_a0)[arg1];
                    bVar3 = *pbVar6 & 1;
                } else {
                    bVar11 = 0;
                    if (arg1 < local_b0)
                        goto LAB_10098888c;
                LAB_10098886d:
                    bVar3 = 0;
                }
                matrix43 = GetBoneTransform((unsigned int)uVar1);
                if ((bVar11 | bVar3) == 1) {
                    pPVar10 = &wrapArray[(unsigned long)uVar2];
                    *pPVar10 = *matrix43;
                } else {
                    if (arg1 < local_40) {
                        this_02 = (Matrix43T<float>*)(*local_90)[arg1];
                    } else {
                        this_02 = (Matrix43T<float>*)(*(
                            (Array<math::Matrix43T<float>>*)&AnimationManager::IDENTITY_STATE_BONES))[0];
                    }
                    new (local_118) math::Matrix43T<float>();
                    pVVar7 = (Vector3T<float>*)(*matrix43)[0];
                    puVar8 = (uint64_t*)(*pVVar7)[0];
                    local_68 = *puVar8;
                    uStack_60 = puVar8[1];
                    pVVar7 = (Vector3T<float>*)(*matrix43)[0];
                    lVar9 = (*pVVar7)[0];
                    local_e8 = *(uint64_t*)(lVar9 + 16);
                    uStack_e0 = *(uint64_t*)(lVar9 + 24);
                    pVVar7 = (Vector3T<float>*)(*matrix43)[0];
                    lVar9 = (*pVVar7)[0];
                    local_d8 = *(uint64_t*)(lVar9 + 32);
                    uStack_d0 = *(uint64_t*)(lVar9 + 40);
                    pVVar7 = (Vector3T<float>*)(*this_02)[0];
                    puVar8 = (uint64_t*)(*pVVar7)[0];
                    local_88 = *puVar8;
                    uStack_80 = puVar8[1];
                    pVVar7 = (Vector3T<float>*)(*this_02)[0];
                    lVar9 = (*pVVar7)[0];
                    local_78 = *(uint64_t*)(lVar9 + 16);
                    uStack_70 = *(uint64_t*)(lVar9 + 24);
                    pVVar7 = (Vector3T<float>*)(*this_02)[0];
                    lVar9 = (*pVVar7)[0];
                    local_88 = (((uint64_t)((local_88._4_4_ - local_68._4_4_) * arg3 + local_68._4_4_) << 32) |
                                (uint32_t)(((float)local_88 - (float)local_68) * arg3 + (float)local_68));
                    uStack_80 = (((uint64_t)((uStack_80._4_4_ - uStack_60._4_4_) * arg3 + uStack_60._4_4_) << 32) |
                                 (uint32_t)(((float)uStack_80 - (float)uStack_60) * arg3 + (float)uStack_60));
                    local_78 = (((uint64_t)((local_78._4_4_ - local_e8._4_4_) * arg3 + local_e8._4_4_) << 32) |
                                (uint32_t)(((float)local_78 - (float)local_e8) * arg3 + (float)local_e8));
                    uStack_70 = (((uint64_t)((uStack_70._4_4_ - uStack_e0._4_4_) * arg3 + uStack_e0._4_4_) << 32) |
                                 (uint32_t)(((float)uStack_70 - (float)uStack_e0) * arg3 + (float)uStack_e0));
                    local_68 = (((uint64_t)((*(float*)(lVar9 + 36) - local_d8._4_4_) * arg3 + local_d8._4_4_) << 32) |
                                (uint32_t)((*(float*)(lVar9 + 32) - (float)local_d8) * arg3 + (float)local_d8));
                    uStack_60 =
                        (((uint64_t)((*(float*)(lVar9 + 44) - uStack_d0._4_4_) * arg3 + uStack_d0._4_4_) << 32) |
                         (uint32_t)((*(float*)(lVar9 + 40) - (float)uStack_d0) * arg3 + (float)uStack_d0));
                    puVar8 = (uint64_t*)(*local_118)[0];
                    *puVar8 = local_88;
                    puVar8[1] = uStack_80;
                    lVar9 = (*local_118)[0];
                    *(uint64_t*)(lVar9 + 16) = local_78;
                    *(uint64_t*)(lVar9 + 24) = uStack_70;
                    lVar9 = (*local_118)[0];
                    *(uint64_t*)(lVar9 + 32) = local_68;
                    *(uint64_t*)(lVar9 + 40) = uStack_60;
                    pPVar10 = &wrapArray[(unsigned long)uVar2];
                    *pPVar10 = *local_118;
                }
                puVar5 = puVar5 + 2;
            } while (puVar5 != local_a8);
        }
    }

    // 0x100988a50
    void AnimationFrameRT7::GetInterpolatedVertexTransformData(VertexTransformData& vertexTransformData,
                                                               const AnimationFrameRT7& animationFrameRT7,
                                                               float arg3) const {
        GetInterpolatedVertexTransformDataRT5(vertexTransformData, animationFrameRT7, arg3);
    }

    // 0x100988a60
    void AnimationFrameRT7::GetInterpolatedVertexTransformDataRT5(VertexTransformData& vertexTransformData,
                                                                  const AnimationFrameRT7& animationFrameRT7,
                                                                  float arg3) const {
        uint8_t bVar1;
        unsigned long uVar5;
        uint8_t* pbVar6;
        Matrix43T<float>* matrix43;
        Matrix43T<float>* this_01;
        Vector3T<float>* pVVar7;
        uint64_t* puVar8;
        WrapArray<math::Matrix43T<float>>* pWVar9;
        ParticleVertexDataProxy<math::Vector3T<float>>* pPVar10;
        uint8_t bVar11;
        unsigned long arg1;
        unsigned long local_108[6];
        uint64_t local_d8;
        uint64_t uStack_d0;
        uint64_t local_c8;
        uint64_t uStack_c0;
        VertexTransformData* local_88;
        uint64_t local_78;
        uint64_t uStack_70;
        uint64_t local_68;
        uint64_t uStack_60;
        uint64_t local_58;
        uint64_t uStack_50;

        auto local_80 = animationFrameRT7.first();
        unsigned long local_38 = local_80->HeapBeginPtr();
        auto pLVar2 = animationFrameRT7.GetMaterial();
        unsigned long local_b0 = ((Layout*)SSOBeginPtr())->HeapBeginPtr();
        WrapArray<unsigned char>* local_90 = (WrapArray<unsigned char>*)&field_48;
        local_108[0] = local_90->HeapBeginPtr();
        auto puVar3 = std::min<unsigned long>(*local_108, local_b0);
        unsigned long local_a8 = *puVar3;
        Layout* local_98 = pLVar2;
        local_108[0] = pLVar2->HeapBeginPtr();
        puVar3 = std::min<unsigned long>(*local_108, local_38);
        unsigned long local_a0 = *puVar3;
        pLVar2 = (Layout*)SSOBeginPtr();
        long lVar4 = pLVar2->HeapBeginPtr();
        if (lVar4 != 0) {
            arg1 = 0;
            local_88 = vertexTransformData;
            do {
                if (arg1 < local_a8) {
                    pbVar6 = (uint8_t*)(*local_90)[arg1];
                    bVar11 = (*pbVar6 & 2) >> 1;
                    if (local_a0 <= arg1)
                        goto LAB_100988bb4;
                LAB_100988bcb:
                    pbVar6 = (uint8_t*)(*local_98)[arg1];
                    bVar1 = *pbVar6 & 1;
                } else {
                    bVar11 = 0;
                    if (arg1 < local_a0)
                        goto LAB_100988bcb;
                LAB_100988bb4:
                    bVar1 = 0;
                }
                matrix43 = GetBoneTransform((int)arg1);
                if ((bVar11 | bVar1) == 1) {
                    pWVar9 = (WrapArray<math::Matrix43T<float>>*)vertexTransformData.SSOBeginPtr();
                    pPVar10 = (ParticleVertexDataProxy<math::Vector3T<float>>*)(*pWVar9)[arg1];
                    *pPVar10 = *matrix43;
                } else {
                    if (arg1 < local_38) {
                        this_01 = (Matrix43T<float>*)(*local_80)[arg1];
                    } else {
                        this_01 = (Matrix43T<float>*)(*(
                            (Array<math::Matrix43T<float>>*)&AnimationManager::IDENTITY_STATE_BONES))[0];
                    }
                    new (local_108) math::Matrix43T<float>();
                    pVVar7 = (Vector3T<float>*)(*matrix43)[0];
                    puVar8 = (uint64_t*)(*pVVar7)[0];
                    local_58 = *puVar8;
                    uStack_50 = puVar8[1];
                    pVVar7 = (Vector3T<float>*)(*matrix43)[0];
                    lVar4 = (*pVVar7)[0];
                    local_d8 = *(uint64_t*)(lVar4 + 16);
                    uStack_d0 = *(uint64_t*)(lVar4 + 24);
                    pVVar7 = (Vector3T<float>*)(*matrix43)[0];
                    lVar4 = (*pVVar7)[0];
                    local_c8 = *(uint64_t*)(lVar4 + 32);
                    uStack_c0 = *(uint64_t*)(lVar4 + 40);
                    pVVar7 = (Vector3T<float>*)(*this_01)[0];
                    puVar8 = (uint64_t*)(*pVVar7)[0];
                    local_78 = *puVar8;
                    uStack_70 = puVar8[1];
                    pVVar7 = (Vector3T<float>*)(*this_01)[0];
                    lVar4 = (*pVVar7)[0];
                    local_68 = *(uint64_t*)(lVar4 + 16);
                    uStack_60 = *(uint64_t*)(lVar4 + 24);
                    pVVar7 = (Vector3T<float>*)(*this_01)[0];
                    lVar4 = (*pVVar7)[0];
                    local_78 = (((uint64_t)((local_78._4_4_ - local_58._4_4_) * arg3 + local_58._4_4_) << 32) |
                                (uint32_t)(((float)local_78 - (float)local_58) * arg3 + (float)local_58));
                    uStack_70 = (((uint64_t)((uStack_70._4_4_ - uStack_50._4_4_) * arg3 + uStack_50._4_4_) << 32) |
                                 (uint32_t)(((float)uStack_70 - (float)uStack_50) * arg3 + (float)uStack_50));
                    local_68 = (((uint64_t)((local_68._4_4_ - local_d8._4_4_) * arg3 + local_d8._4_4_) << 32) |
                                (uint32_t)(((float)local_68 - (float)local_d8) * arg3 + (float)local_d8));
                    uStack_60 = (((uint64_t)((uStack_60._4_4_ - uStack_d0._4_4_) * arg3 + uStack_d0._4_4_) << 32) |
                                 (uint32_t)(((float)uStack_60 - (float)uStack_d0) * arg3 + (float)uStack_d0));
                    local_58 = (((uint64_t)((*(float*)(lVar4 + 36) - local_c8._4_4_) * arg3 + local_c8._4_4_) << 32) |
                                (uint32_t)((*(float*)(lVar4 + 32) - (float)local_c8) * arg3 + (float)local_c8));
                    uStack_50 =
                        (((uint64_t)((*(float*)(lVar4 + 44) - uStack_c0._4_4_) * arg3 + uStack_c0._4_4_) << 32) |
                         (uint32_t)((*(float*)(lVar4 + 40) - (float)uStack_c0) * arg3 + (float)uStack_c0));
                    puVar8 = (uint64_t*)(*local_108)[0];
                    *puVar8 = local_78;
                    puVar8[1] = uStack_70;
                    lVar4 = (*local_108)[0];
                    *(uint64_t*)(lVar4 + 16) = local_68;
                    *(uint64_t*)(lVar4 + 24) = uStack_60;
                    lVar4 = (*local_108)[0];
                    vertexTransformData = local_88;
                    *(uint64_t*)(lVar4 + 32) = local_58;
                    *(uint64_t*)(lVar4 + 40) = uStack_50;
                    pWVar9 = (WrapArray<math::Matrix43T<float>>*)local_88->SSOBeginPtr();
                    pPVar10 = (ParticleVertexDataProxy<math::Vector3T<float>>*)(*pWVar9)[arg1];
                    *pPVar10 = *local_108;
                }
                arg1 = (unsigned long)((int)arg1 + 1);
                pLVar2 = (Layout*)SSOBeginPtr();
                uVar5 = pLVar2->HeapBeginPtr();
            } while (arg1 < uVar5);
        }
    }

} // namespace jag::graphics
