// libs/graphics/runetek7/animation/RT7AnimationSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "RT7AnimationSampler.h"

namespace jag::graphics {
    // 0x1006797b0: the linker folded this into ui::SwipeState::SetIsDrifting(bool), which has identical code
    RT7AnimationSampler::SetUseAsyncOptimisedPath(bool);

    // 0x1009505a0, 112 bytes, base-object constructor, placed by class name
    // RT7AnimationSampler::RT7AnimationSampler()
    void RT7AnimationSampler::RT7AnimationSampler() {
        new (this) AnimationSampler();
        field_0 = &PTR__RT7AnimationSampler_100f1b070;
        new (&field_32) VertexTransformData();
        new (&field_80) AnimationInfo();
        m_useAsyncOptimisedPath = false;
    }

    // 0x100950610, 16 bytes, complete-object constructor, placed by class name
    // RT7AnimationSampler::RT7AnimationSampler(): jumps straight to the base-object constructor

    // 0x100950620, 48 bytes, placed by class name
    // RT7AnimationSampler::Update(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void RT7AnimationSampler::Update(Array* param_1, Matrix44T* param_2) {
        if (m_useAsyncOptimisedPath != false) {
            UpdateAsyncOptimised(this, param_1, param_2, (AnimationInfo*)&field_80);
        }
        field_24 = 1;
    }

    // 0x100950650, 832 bytes, placed by class name
    // RT7AnimationSampler::UpdateAsyncOptimised(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&, AnimationInfo const&)
    void RT7AnimationSampler::UpdateAsyncOptimised(Array* param_1, Matrix44T* param_2, AnimationInfo* param_3) {
        undefined1* this_00;
        undefined* puVar1;
        bool bVar2;
        char cVar3;
        ulong uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar7;
        Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>* pAVar8;
        shared_ptr* psVar9;
        uint* puVar10;
        AnimationManager* this_01;
        Layout* pLVar11;
        AnimationFrameRT7* pAVar12;
        AnimationFrameRT7* pAVar13;
        vector* pvVar14;
        long lVar15;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_02;
        ulong uVar16;
        uint uVar17;
        undefined1* this_03;
        optional<game::option::EnumOptionToggle> local_68[12];
        float local_5c;
        shared_ptr local_58;
        shared_ptr local_48;
        uint local_34;

        this_00 = param_3->field_32;
        bVar2 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        if (bVar2) {
            this_03 = &field_32;
            uVar4 = param_1->end();
            this_03->Resize(false, uVar4);
            uVar5 = AnimationManager::GetTimeElapsedSinceNS(param_3->field_0);
            local_34 = 0;
            eastl::optional<game::option::EnumOptionToggle>::optional(local_68);
            uVar6 = shared_ptr<Animation>::operator*((shared_ptr<Animation>*)this_00);
            RT5AnimationSampler::GetFramesBeforeAndAfter(&local_34, local_68, &local_5c, uVar6, uVar5,
                                                         *(undefined4*)((long)&param_3->field_10 + 6),
                                                         param_3->field_20, param_3->field_25);
            pcVar7 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                          eastl::allocator, 0>*)
                         shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
            pAVar8 = (Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(pcVar7);
            psVar9 = (shared_ptr*)Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>::operator[](pAVar8,
                                                                                                     (ulong)local_34);
            new (&local_48) shared_ptr<oldscape::dash3d::Decor>(psVar9);
            new (&local_58) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar9);
            bVar2 = local_68->IsActive();
            if (bVar2) {
                pcVar7 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                              eastl::allocator, 0>*)
                             shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
                pAVar8 = (Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar7);
                puVar10 = (uint*)eastl::optional<unsigned int>::value();
                psVar9 = (shared_ptr*)Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>::operator[](
                    pAVar8, (ulong)*puVar10);
                shared_ptr<AnimationFrameRT7>::operator=((shared_ptr<AnimationFrameRT7>*)&local_58, psVar9);
            }
            if ((param_3->field_0 == -1) ||
                ((bVar2 = shared_ptr::operator_cast_to_bool(&local_48),
                  !bVar2 && (bVar2 = shared_ptr::operator_cast_to_bool(&local_58), !bVar2)))) {
                pvVar14 = this_03->SSOBeginPtr(psVar9);
                lVar15 = pvVar14->HeapBeginPtr();
                puVar1 = PTR_IDENTITY_100ee6720;
                if (lVar15 != 0) {
                    uVar17 = 1;
                    uVar4 = 0;
                    do {
                        pvVar14 = this_03->SSOBeginPtr(psVar9);
                        this_02 = (ParticleVertexDataProxy<math::Vector3T<float>>*)
                            WrapArray<math::Matrix43T<float>>::operator[]((WrapArray<math::Matrix43T<float>>*)pvVar14,
                                                                          uVar4);
                        psVar9 = (shared_ptr*)puVar1;
                        ParticleVertexDataProxy<math::Vector3T<float>>::operator=(this_02,
                                                                                  (ParticleVertexDataProxy*)puVar1);
                        uVar4 = (ulong)uVar17;
                        pvVar14 = this_03->SSOBeginPtr(psVar9);
                        uVar16 = pvVar14->HeapBeginPtr();
                        uVar17 = uVar17 + 1;
                    } while (uVar4 < uVar16);
                }
            } else {
                bVar2 = shared_ptr::operator_cast_to_bool(&local_58);
                if (bVar2) {
                    psVar9 = &local_48;
                    bVar2 = shared_ptr::operator_cast_to_bool(psVar9);
                    if (bVar2) {
                        this_01 = (AnimationManager*)psVar9->Instance();
                        cVar3 = this_01->GetTweenBones();
                        if (cVar3 == '\0') {
                            shared_ptr<AnimationFrameRT7>::operator->((shared_ptr<AnimationFrameRT7>*)&local_48);
                            pLVar11 = (Layout*)eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
                            uVar4 = eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar11);
                            this_03->Resize(false, uVar4);
                            pAVar12 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator->(
                                (shared_ptr<AnimationFrameRT7>*)&local_48);
                            pAVar12->GetVertexTransformDataBoneMatrices(this_03);
                        } else {
                            shared_ptr<AnimationFrameRT7>::operator->((shared_ptr<AnimationFrameRT7>*)&local_48);
                            pLVar11 = (Layout*)eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
                            uVar4 = eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar11);
                            this_03->Resize(false, uVar4);
                            pAVar12 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator->(
                                (shared_ptr<AnimationFrameRT7>*)&local_48);
                            pAVar13 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator*(
                                (shared_ptr<AnimationFrameRT7>*)&local_58);
                            pAVar12->GetInterpolatedVertexTransformData(this_03, pAVar13, local_5c);
                        }
                    } else {
                        shared_ptr<AnimationFrameRT7>::operator->((shared_ptr<AnimationFrameRT7>*)&local_58);
                        pLVar11 = (Layout*)eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
                        uVar4 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(pLVar11);
                        this_03->Resize(false, uVar4);
                        pAVar12 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator->(
                            (shared_ptr<AnimationFrameRT7>*)&local_58);
                        pAVar12->GetVertexTransformDataBoneMatrices(this_03);
                    }
                } else {
                    shared_ptr<AnimationFrameRT7>::operator->((shared_ptr<AnimationFrameRT7>*)&local_48);
                    pLVar11 = (Layout*)eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
                    uVar4 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(pLVar11);
                    this_03->Resize(false, uVar4);
                    pAVar12 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator->(
                        (shared_ptr<AnimationFrameRT7>*)&local_48);
                    pAVar12->GetVertexTransformDataBoneMatrices(this_03);
                }
            }
            local_58.~shared_ptr();
            local_48.~shared_ptr();
            return;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("animInfo.m_animation != nullptr",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/animation/"
                  "RT7AnimationSampler.cpp",
                  40, (char*)0);
    }

    // 0x100950990, 16 bytes, placed by class name
    // RT7AnimationSampler::UpdateImmediate(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&, AnimationInfo const&)
    void RT7AnimationSampler::UpdateImmediate(Array* param_1, Matrix44T* param_2, AnimationInfo* param_3) {}

    // 0x100950c10, 32 bytes, placed by class name
    // RT7AnimationSampler::GetRT5BoneTransforms(WrapArray<math::Matrix43T<float> >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void RT7AnimationSampler::GetRT5BoneTransforms(WrapArray* param_1, vector_map* param_2, vector_map* param_3,
                                                   Matrix44T* param_4) {
        if (m_useAsyncOptimisedPath == false) {
            GetRT5BoneTransformsImmediate(this, param_1, param_2, param_3, param_4);
            return;
        }
        GetRT5BoneTransformsAsyncOptimised(this, param_1, param_2, param_3, param_4);
    }

    // 0x100950c30, 144 bytes, placed by class name
    // RT7AnimationSampler::GetRT5BoneTransformsAsyncOptimised(WrapArray<math::Matrix43T<float> >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void RT7AnimationSampler::GetRT5BoneTransformsAsyncOptimised(WrapArray* param_1, vector_map* param_2,
                                                                 vector_map* param_3, Matrix44T* param_4) {
        ushort uVar1;
        ushort uVar2;
        ushort* puVar3;
        ushort* puVar4;
        vector* this_00;
        ParticleVertexDataProxy* pPVar5;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_01;

        pPVar5 = (ParticleVertexDataProxy*)param_1;
        puVar3 = (ushort*)param_2->HeapBeginPtr();
        puVar4 = (ushort*)param_2->end();
        if (puVar3 != puVar4) {
            do {
                uVar1 = *puVar3;
                uVar2 = puVar3[1];
                this_00 = (&field_32, (type*)pPVar5)->SSOBeginPtr();
                pPVar5 = (ParticleVertexDataProxy*)WrapArray<math::Matrix43T<float>>::operator[](
                    (WrapArray<math::Matrix43T<float>>*)this_00, (ulong)uVar1);
                this_01 =
                    (ParticleVertexDataProxy<math::Vector3T<float>>*)WrapArray<math::Matrix43T<float>>::operator[](
                        (WrapArray<math::Matrix43T<float>>*)param_1, (ulong)uVar2);
                ParticleVertexDataProxy<math::Vector3T<float>>::operator=(this_01, pPVar5);
                puVar3 = puVar3 + 2;
            } while (puVar3 != puVar4);
        }
    }

    // 0x100950cc0, 640 bytes, placed by class name
    // RT7AnimationSampler::GetRT5BoneTransformsImmediate(WrapArray<math::Matrix43T<float> >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void RT7AnimationSampler::GetRT5BoneTransformsImmediate(WrapArray* param_1, vector_map* param_2,
                                                            vector_map* param_3, Matrix44T* param_4) {
        undefined1* this_00;
        undefined* puVar1;
        vector_map* this_01;
        bool bVar2;
        char cVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar6;
        Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>* pAVar7;
        shared_ptr* psVar8;
        uint* puVar9;
        AnimationManager* this_02;
        AnimationFrameRT7* pAVar10;
        AnimationFrameRT7* pAVar11;
        long lVar12;
        long lVar13;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_03;
        optional<game::option::EnumOptionToggle> local_70[12];
        float local_64;
        shared_ptr local_60;
        shared_ptr local_50;
        uint local_3c;
        vector_map* local_38;

        this_00 = field_112;
        local_38 = param_2;
        bVar2 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        if (!bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_animInfo.m_animation != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/RT7AnimationSampler.cpp",
                      118, (char*)0);
        }
        uVar4 = AnimationManager::GetTimeElapsedSinceNS(field_80);
        local_3c = 0;
        eastl::optional<game::option::EnumOptionToggle>::optional(local_70);
        uVar5 = shared_ptr<Animation>::operator*((shared_ptr<Animation>*)this_00);
        RT5AnimationSampler::GetFramesBeforeAndAfter(&local_3c, local_70, &local_64, uVar5, uVar4, field_96, field_100,
                                                     field_105);
        pcVar6 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)
                     shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
        pAVar7 = (Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(pcVar6);
        psVar8 =
            (shared_ptr*)Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>::operator[](pAVar7, (ulong)local_3c);
        new (&local_60) shared_ptr<oldscape::dash3d::Decor>(psVar8);
        new (&local_50) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar8);
        bVar2 = local_70->IsActive();
        if (bVar2) {
            pcVar6 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                          eastl::allocator, 0>*)
                         shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
            pAVar7 = (Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(pcVar6);
            puVar9 = (uint*)eastl::optional<unsigned int>::value();
            psVar8 =
                (shared_ptr*)Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>::operator[](pAVar7, (ulong)*puVar9);
            shared_ptr<AnimationFrameRT7>::operator=((shared_ptr<AnimationFrameRT7>*)&local_50, psVar8);
        }
        if ((field_80 == 18446744073709551615) ||
            ((bVar2 = shared_ptr::operator_cast_to_bool(&local_60),
              !bVar2 && (bVar2 = shared_ptr::operator_cast_to_bool(&local_50), !bVar2)))) {
            this_01 = local_38;
            lVar12 = local_38->HeapBeginPtr();
            lVar13 = this_01->end();
            puVar1 = PTR_IDENTITY_100ee6720;
            for (; lVar12 != lVar13; lVar12 = lVar12 + 4) {
                this_03 =
                    (ParticleVertexDataProxy<math::Vector3T<float>>*)WrapArray<math::Matrix43T<float>>::operator[](
                        (WrapArray<math::Matrix43T<float>>*)param_1, (ulong) * (ushort*)(lVar12 + 2));
                ParticleVertexDataProxy<math::Vector3T<float>>::operator=(this_03, (ParticleVertexDataProxy*)puVar1);
            }
        } else {
            bVar2 = shared_ptr::operator_cast_to_bool(&local_50);
            if (bVar2) {
                psVar8 = &local_60;
                bVar2 = shared_ptr::operator_cast_to_bool(psVar8);
                if (bVar2) {
                    this_02 = (AnimationManager*)psVar8->Instance();
                    cVar3 = this_02->GetTweenBones();
                    if (cVar3 == '\0') {
                        pAVar10 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator->(
                            (shared_ptr<AnimationFrameRT7>*)&local_60);
                        pAVar10->GetBoneMatrices(param_1, local_38);
                    } else {
                        pAVar10 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator->(
                            (shared_ptr<AnimationFrameRT7>*)&local_60);
                        pAVar11 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator*(
                            (shared_ptr<AnimationFrameRT7>*)&local_50);
                        pAVar10->GetInterpolatedBoneMatrices(param_1, pAVar11, local_64, local_38);
                    }
                } else {
                    pAVar10 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator->(
                        (shared_ptr<AnimationFrameRT7>*)&local_50);
                    pAVar10->GetBoneMatrices(param_1, local_38);
                }
            } else {
                pAVar10 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator->(
                    (shared_ptr<AnimationFrameRT7>*)&local_60);
                pAVar10->GetBoneMatrices(param_1, local_38);
            }
        }
        local_50.~shared_ptr();
        local_60.~shared_ptr();
    }

    // 0x100950f40, 1568 bytes, placed by class name
    // RT7AnimationSampler::GetLabelData(WrapArray<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, AnimationLabelType) const
    void RT7AnimationSampler::GetLabelData(Layout* param_1, vector_map* param_2, int param_4) {
        undefined1* this_00;
        Layout* this_01;
        vector_map* this_02;
        int iVar1;
        bool bVar2;
        char cVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar6;
        Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>* pAVar7;
        shared_ptr* psVar8;
        uint* puVar9;
        AnimationFrameRT7* pAVar10;
        Layout* pLVar11;
        WrapArray* pWVar12;
        AnimationManager* this_03;
        WorldmapAreaMetadata* pWVar13;
        compressed_pair<eastl::ListNodeBase, eastl::fixed_node_allocator<40ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*
            pcVar14;
        LoginManager* pLVar15;
        ulong uVar16;
        void* pvVar17;
        void* pvVar18;
        ushort* puVar19;
        ushort* puVar20;
        ulong uVar21;
        long lVar22;
        byte* pbVar23;
        long lVar24;
        float* pfVar25;
        ulong uVar26;
        ulong uVar27;
        Array* this_04;
        uint uVar28;
        ulong uVar29;
        optional<game::option::EnumOptionToggle> local_b8[8];
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_b0[16];
        Layout* local_a0;
        float local_98;
        float local_94;
        ulong local_90;
        Array<float, eastl::allocator>* local_88;
        Layout* local_80;
        Layout* local_78;
        shared_ptr local_70;
        uint local_5c;
        shared_ptr local_58;
        vector_map* local_48;
        Layout* local_40;
        ulong local_38;

        this_00 = field_112;
        local_48 = param_2;
        local_40 = param_1;
        bVar2 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        if (!bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_animInfo.m_animation != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/RT7AnimationSampler.cpp",
                      198, (char*)0);
        }
        local_38 = CONCAT44(local_38._4_4_, param_4);
        this_04 = (Array*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
        if (param_4 == 0) {
            this_04 = (Array*)PTR_IDENTITY_DELTA_100ee69f8;
        }
        local_88 = (Array<float, eastl::allocator>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORMS;
        if (param_4 == 0) {
            local_88 = (Array<float, eastl::allocator>*)PTR_IDENTITY_LABELDELTAS_100ee6a00;
        }
        uVar4 = AnimationManager::GetTimeElapsedSinceNS(field_80);
        local_5c = 0;
        eastl::optional<game::option::EnumOptionToggle>::optional(local_b8);
        uVar5 = shared_ptr<Animation>::operator*((shared_ptr<Animation>*)this_00);
        RT5AnimationSampler::GetFramesBeforeAndAfter(&local_5c, local_b8, &local_98, uVar5, uVar4, field_96, field_100,
                                                     field_105);
        pcVar6 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)
                     shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
        pAVar7 = (Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(pcVar6);
        psVar8 =
            (shared_ptr*)Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>::operator[](pAVar7, (ulong)local_5c);
        new (&local_70) shared_ptr<oldscape::dash3d::Decor>(psVar8);
        new (&local_58) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar8);
        bVar2 = local_b8->IsActive();
        if (bVar2) {
            pcVar6 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                          eastl::allocator, 0>*)
                         shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
            pAVar7 = (Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(pcVar6);
            puVar9 = (uint*)eastl::optional<unsigned int>::value();
            psVar8 =
                (shared_ptr*)Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>::operator[](pAVar7, (ulong)*puVar9);
            shared_ptr<AnimationFrameRT7>::operator=((shared_ptr<AnimationFrameRT7>*)&local_58, psVar8);
        }
        bVar2 = shared_ptr::operator_cast_to_bool(&local_70);
        if ((bVar2) || (bVar2 = shared_ptr::operator_cast_to_bool(&local_58), pLVar11 = local_40, bVar2)) {
            bVar2 = shared_ptr::operator_cast_to_bool(&local_58);
            if (bVar2) {
                bVar2 = shared_ptr::operator_cast_to_bool(&local_70);
                iVar1 = (int)(float)local_38;
                if (bVar2) {
                    if ((float)local_38 == 0.0) {
                        pAVar10 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator->(
                            (shared_ptr<AnimationFrameRT7>*)&local_70);
                        pLVar11 = (Layout*)pAVar10->second();
                    } else {
                        pAVar10 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator->(
                            (shared_ptr<AnimationFrameRT7>*)&local_70);
                        pLVar11 = (Layout*)AnimationFrameRT7::GetBillboardLabelTransforms(pAVar10);
                    }
                    this_03 = (AnimationManager*)pAVar10->Instance();
                    cVar3 = this_03->GetTweenLabels();
                    if (cVar3 == '\0') {
                        WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                            WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_b0, pLVar11);
                        AnimationSampler::ConcatenateArrays(local_40, local_b0, local_48, this_04);
                    } else {
                        if (iVar1 == 0) {
                            pLVar15 = (LoginManager*)shared_ptr<AnimationFrameRT7>::operator->(
                                (shared_ptr<AnimationFrameRT7>*)&local_70);
                            local_80 = (Layout*)pLVar15->GetDevCredentialsOutputDirectory();
                            pcVar14 = (compressed_pair<
                                       eastl::ListNodeBase,
                                       eastl::fixed_node_allocator<40ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)
                                          shared_ptr<AnimationFrameRT7>::operator->(
                                              (shared_ptr<AnimationFrameRT7>*)&local_58);
                            local_a0 = (Layout*)eastl::compressed_pair<
                                eastl::ListNodeBase, eastl::fixed_node_allocator<40ul, 1ul, 8ul, 0ul, true,
                                                                                 eastl::allocator>>::second(pcVar14);
                            pLVar15 = (LoginManager*)shared_ptr<AnimationFrameRT7>::operator->(
                                (shared_ptr<AnimationFrameRT7>*)&local_58);
                            local_78 = (Layout*)pLVar15->GetDevCredentialsOutputDirectory();
                        } else {
                            pWVar13 = (WorldmapAreaMetadata*)shared_ptr<AnimationFrameRT7>::operator->(
                                (shared_ptr<AnimationFrameRT7>*)&local_70);
                            local_80 = (Layout*)pWVar13->GetOrigin();
                            pAVar10 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator->(
                                (shared_ptr<AnimationFrameRT7>*)&local_58);
                            local_a0 = (Layout*)AnimationFrameRT7::GetBillboardLabelTransforms(pAVar10);
                            pWVar13 = (WorldmapAreaMetadata*)shared_ptr<AnimationFrameRT7>::operator->(
                                (shared_ptr<AnimationFrameRT7>*)&local_58);
                            local_78 = (Layout*)pWVar13->GetOrigin();
                        }
                        uVar16 = this_04->end();
                        pvVar17 = (void*)WrapArray<float>::operator[]((WrapArray<float>*)local_40, 0);
                        pvVar18 = (void*)Array<float, eastl::allocator>::operator[](
                            (Array<float, eastl::allocator>*)this_04, 0);
                        uVar26 = uVar16 * 4 & 4294967295;
                        _memcpy(pvVar17, pvVar18, uVar26);
                        this_02 = local_48;
                        local_90 = uVar16;
                        puVar19 = (ushort*)local_48->HeapBeginPtr();
                        uVar16 = local_90;
                        puVar20 = (ushort*)this_02->end();
                        if (puVar19 != puVar20) {
                            uVar27 = uVar16;
                            do {
                                uVar28 = (uint)puVar19[1] * (int)uVar27;
                                uVar29 = (ulong)uVar28;
                                if (uVar28 == 0) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("newLabelSlot != 0",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/animation/RT7AnimationSampler.cpp",
                                              269,
                                              "AnimationState: Label data requested with a label slot of 0 - this is "
                                              "reserved!");
                                }
                                uVar28 = (uint)*puVar19 * (int)uVar27;
                                uVar27 = (ulong)uVar28;
                                local_38 = (ulong)*puVar19;
                                uVar21 = eastl::basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                    Layout::HeapBeginPtr(pLVar11);
                                if (uVar27 < uVar21) {
                                    lVar22 = pLVar11->end();
                                } else {
                                    lVar22 = local_88->data();
                                }
                                uVar21 = eastl::basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                    Layout::HeapBeginPtr(pLVar11);
                                this_01 = local_a0;
                                if ((((uVar27 < uVar21) ||
                                      (uVar21 =
                                           eastl::basic_string<char, eastl::fixed_vector_allocator<
                                                                         1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                               Layout::HeapBeginPtr(local_a0),
                                       uVar27 < uVar21)) &&
                                     ((uVar21 =
                                           eastl::basic_string<char, eastl::fixed_vector_allocator<
                                                                         1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                               Layout::HeapBeginPtr(local_80),
                                       uVar21 <= local_38 || (pbVar23 = (byte*)WrapArray<unsigned char>::operator[](
                                                                  (WrapArray<unsigned char>*)local_80, local_38),
                                                              (*pbVar23 & 2) == 0)))) &&
                                    ((uVar21 =
                                          eastl::basic_string<char, eastl::fixed_vector_allocator<
                                                                        1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                              Layout::HeapBeginPtr(local_78),
                                      uVar21 <= local_38 || (pbVar23 = (byte*)WrapArray<unsigned char>::operator[](
                                                                 (WrapArray<unsigned char>*)local_78, local_38),
                                                             (*pbVar23 & 1) == 0)))) {
                                    uVar21 = eastl::basic_string<
                                        char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                                    if (uVar27 < uVar21) {
                                        lVar24 = this_01->end();
                                    } else {
                                        lVar24 = local_88->data();
                                    }
                                    if ((int)local_90 != 0) {
                                        uVar27 = uVar16 & 4294967295;
                                        do {
                                            local_38 =
                                                CONCAT44(local_38._4_4_, *(undefined4*)(lVar22 + (ulong)uVar28 * 4));
                                            local_48 = (vector_map*)CONCAT44(
                                                local_48._4_4_, *(undefined4*)(lVar24 + (ulong)uVar28 * 4));
                                            local_94 = local_98;
                                            pfVar25 = (float*)WrapArray<float>::operator[]((WrapArray<float>*)local_40,
                                                                                           uVar29);
                                            *pfVar25 = (local_48._0_4_ - (float)local_38) * local_94 + (float)local_38;
                                            uVar29 = (ulong)((int)uVar29 + 1);
                                            uVar28 = uVar28 + 1;
                                            uVar27 = uVar27 - 1;
                                        } while (uVar27 != 0);
                                    }
                                } else {
                                    pvVar17 = (void*)WrapArray<float>::operator[]((WrapArray<float>*)local_40, uVar29);
                                    _memcpy(pvVar17, (void*)(lVar22 + uVar27 * 4), uVar26);
                                }
                                puVar19 = puVar19 + 2;
                                uVar27 = local_90;
                            } while (puVar19 != puVar20);
                        }
                    }
                } else {
                    if ((float)local_38 == 0.0) {
                        pcVar14 =
                            (compressed_pair<eastl::ListNodeBase,
                                             eastl::fixed_node_allocator<40ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)
                                shared_ptr<AnimationFrameRT7>::operator->((shared_ptr<AnimationFrameRT7>*)&local_58);
                        pWVar12 = (WrapArray*)eastl::compressed_pair<
                            eastl::ListNodeBase,
                            eastl::fixed_node_allocator<40ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::second(pcVar14);
                    } else {
                        pAVar10 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator->(
                            (shared_ptr<AnimationFrameRT7>*)&local_58);
                        pWVar12 = (WrapArray*)AnimationFrameRT7::GetBillboardLabelTransforms(pAVar10);
                    }
                    WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                        WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_b0, pWVar12);
                    AnimationSampler::ConcatenateArrays(local_40, local_b0, local_48, this_04);
                }
            } else {
                if ((float)local_38 == 0.0) {
                    pcVar14 =
                        (compressed_pair<eastl::ListNodeBase,
                                         eastl::fixed_node_allocator<40ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)
                            shared_ptr<AnimationFrameRT7>::operator->((shared_ptr<AnimationFrameRT7>*)&local_70);
                    pWVar12 = (WrapArray*)eastl::compressed_pair<
                        eastl::ListNodeBase,
                        eastl::fixed_node_allocator<40ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::second(pcVar14);
                } else {
                    pAVar10 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator->(
                        (shared_ptr<AnimationFrameRT7>*)&local_70);
                    pWVar12 = (WrapArray*)AnimationFrameRT7::GetBillboardLabelTransforms(pAVar10);
                }
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                    WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_b0, pWVar12);
                AnimationSampler::ConcatenateArrays(local_40, local_b0, local_48, this_04);
            }
        } else {
            uVar16 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_40);
            pvVar17 = (void*)WrapArray<float>::operator[]((WrapArray<float>*)pLVar11, 0);
            pvVar18 = (void*)Array<float, eastl::allocator>::operator[](local_88, 0);
            _memcpy(pvVar17, pvVar18, (uVar16 & 1073741823) << 2);
        }
        local_58.~shared_ptr();
        local_70.~shared_ptr();
    }

} // namespace jag::graphics
