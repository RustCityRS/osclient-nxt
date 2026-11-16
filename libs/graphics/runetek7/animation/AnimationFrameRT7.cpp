// libs/graphics/runetek7/animation/AnimationFrameRT7.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimationFrameRT7.h"

namespace jag::graphics {
    // 0x100009c90: the linker folded this into eastl::compressed_pair<eastl::string::Layout, eastl::allocator>::first(), which has identical code
    AnimationFrameRT7::GetBoneTransforms() const;

    // 0x100049810: the linker folded this into oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const, which has identical code
    AnimationFrameRT7::GetSkipTweenLabel() const;

    // 0x1000b7a80: the linker folded this into oldscape::minimenu::MinimenuEntry::GetObjCount() const, which has identical code
    AnimationFrameRT7::GetMaximumBoneID() const;

    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    AnimationFrameRT7::GetSkipTweenBillboard() const;

    // 0x100197a40: the linker folded this into eastl::compressed_pair<eastl::ListNodeBase, eastl::allocator>::second(), which has identical code
    AnimationFrameRT7::GetLabelDeltas() const;

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    AnimationFrameRT7::GetSkipTweenBone() const;

    // 0x1006e16e0: the linker folded this into eastl::tuple_element<1ul, eastl::pair<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny> > >::type const& eastl::get<1ul, eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny> >(eastl::pair<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny> > const&), which has identical code
    AnimationFrameRT7::GetBillboardLabelTransforms() const;

    // 0x1009878a0, 112 bytes, base-object constructor, placed by class name and debug map
    // AnimationFrameRT7::AnimationFrameRT7()
    void AnimationFrameRT7::AnimationFrameRT7() {
        _func_decltype_nullptr* in_RSI;

        new (this) MakeSharedPool<AnimationFrameRT7, 8192>();
        new (this) VertexTransformData();
        new (&field_48, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_64, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_80, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_animatesTransparency = 0;
        m_animatesColour = 0;
        m_animatesBillboards = 0;
        field_104 = 4294967295;
        new (&field_112, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100987990, 16 bytes, complete-object constructor, placed by class name and debug map
    // AnimationFrameRT7::AnimationFrameRT7(): jumps straight to the base-object constructor

    // 0x1009879a0, 992 bytes, base-object constructor, placed by class name and debug map
    // AnimationFrameRT7::AnimationFrameRT7(shared_ptr<AnimationFrameRT5> const&, unsigned int, Array<LabelData, eastl::allocator> const&, bool)
    void AnimationFrameRT7::AnimationFrameRT7(shared_ptr* param_1, uint param_2, Array* param_3, bool param_4) {
        char cVar1;
        undefined1 uVar2;
        bool bVar3;
        Skybox* this_00;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_01;
        shared_ptr<AnimBase>* this_02;
        Option<float>* this_03;
        Layout* this_04;
        uint* puVar4;
        uint* puVar5;
        AnimBase* this_05;
        undefined8 uVar6;
        HeapInterface* this_06;
        uchar* puVar7;
        ulong uVar8;
        long lVar9;
        shared_ptr* psVar10;
        long lVar11;
        ulong uVar12;
        long lVar13;
        ulong uVar14;
        uint local_3c;
        uint local_38;
        uint local_34;

        psVar10 = param_1;
        new (this) MakeSharedPool<AnimationFrameRT7, 8192>();
        new (this) VertexTransformData();
        new (&field_48, (_func_decltype_nullptr*)psVar10)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_64, (_func_decltype_nullptr*)psVar10)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_80, (_func_decltype_nullptr*)psVar10)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_animatesTransparency = 0;
        m_animatesColour = 0;
        m_animatesBillboards = 0;
        field_104 = 4294967295;
        new (&field_112, (_func_decltype_nullptr*)psVar10)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_96 = param_2;
        this_00 = (Skybox*)shared_ptr<AnimationFrameRT5>::operator->((shared_ptr<AnimationFrameRT5>*)param_1);
        cVar1 = this_00->ShowSkybox();
        if (cVar1 != '\0') {
            this_01 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)
                          shared_ptr<AnimationFrameRT5>::operator->((shared_ptr<AnimationFrameRT5>*)param_1);
            this_02 = (shared_ptr<AnimBase>*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this_01);
            local_34 = 4294967295;
            local_38 = 4294967295;
            local_3c = 4294967295;
            this_03 =
                (Option<float>*)shared_ptr<AnimationFrameRT5>::operator->((shared_ptr<AnimationFrameRT5>*)param_1);
            this_04 = (Layout*)this_03->GetDefaultValue();
            puVar4 = (uint*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_04);
            puVar5 = (uint*)this_04->end();
            if (puVar4 != puVar5) {
                do {
                    this_05 = (AnimBase*)shared_ptr<AnimBase>::operator->(this_02);
                    uVar2 = this_05->GetTransformType(*puVar4);
                    uVar6 = shared_ptr<AnimBase>::operator*(this_02);
                    CalculateMaxBoneOrLabelIDs(&local_34, &local_38, &local_3c, uVar6, *puVar4, uVar2);
                    if (puVar4[15] != 4294967295) {
                        uVar6 = shared_ptr<AnimBase>::operator*(this_02);
                        CalculateMaxBoneOrLabelIDs(&local_34, &local_38, &local_3c, uVar6, puVar4[15], 0);
                    }
                    puVar4 = puVar4 + 16;
                } while (puVar4 != puVar5);
            }
            if ((int)local_34 < 0) {
                uVar14 = 0;
            } else {
                if (799 < local_34) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("maximumBoneID < AnimationConstants::MAX_BONECOUNT",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationFrameRT7.cpp",
                              50, "AnimationFrameRT7: More than maximum bones found in animation frame: %i");
                }
                uVar14 = (long)(int)local_34 + 1;
            }
            if ((int)local_38 < 0) {
                uVar12 = 0;
            } else {
                if (399 < local_38) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("maximumLabelID < AnimationConstants::MAX_LABELCOUNT",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationFrameRT7.cpp",
                              56, "AnimationFrameRT7: More than maximum labels found in animation frame: %i");
                }
                uVar12 = (ulong)(int)(local_38 * 4 + 4);
            }
            if ((int)local_3c < 0) {
                uVar8 = 0;
            } else {
                if (399 < local_3c) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("maximumBillboardLabelID < AnimationConstants::MAX_BILLBOARDLABELCOUNT",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationFrameRT7.cpp",
                              62, "AnimationFrameRT7: More than maximum billboard labels found in animation frame: %i");
                }
                uVar8 = (ulong)(local_3c * 8 + 8);
            }
            SetMaxSize(uVar14, uVar12, uVar8);
            if (((uVar14 != 0) || (uVar12 != 0)) || (uVar8 != 0)) {
                lVar13 = (long)(int)local_34;
                lVar11 = (long)(int)local_38;
                lVar9 = (long)(int)local_3c;
                this_06 = (HeapInterface*)HeapInterface::Instance();
                uVar12 = lVar13 + 16U & 18446744073709551600;
                uVar14 = lVar11 + 16U & 18446744073709551600;
                puVar7 = (uchar*)this_06->AlignedAlloc((lVar9 + 16U & 18446744073709551600) + uVar14 + uVar12, 16);
                bVar3 = is_aligned<char>((char*)puVar7, 16);
                if (!bVar3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("is_aligned(reinterpret_cast<size_t>(pData))",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationFrameRT7.cpp",
                              79, (char*)0);
                }
                new (&field_48, puVar7, (long)(int)local_34 + 1) WrapArray<unsigned char>();
                puVar7 = puVar7 + uVar12;
                bVar3 = is_aligned<char>((char*)puVar7, 16);
                if (!bVar3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("is_aligned(reinterpret_cast<size_t>(pData))",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationFrameRT7.cpp",
                              83, (char*)0);
                }
                new (&field_64, puVar7, (long)(int)local_38 + 1) WrapArray<unsigned char>();
                bVar3 = is_aligned<char>((char*)(puVar7 + uVar14), 16);
                if (!bVar3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("is_aligned(reinterpret_cast<size_t>(pData))",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationFrameRT7.cpp",
                              87, (char*)0);
                }
                new (&field_80, puVar7 + uVar14, (long)(int)local_3c + 1) WrapArray<unsigned char>();
            }
            PreProcessTransforms(this, param_1, param_3, param_4);
            field_104 = local_34;
            shared_ptr<AnimationFrameRT5>::operator=((shared_ptr<AnimationFrameRT5>*)&field_112, param_1);
        }
    }

    // 0x100987dc0, 160 bytes, placed by class name and debug map
    // AnimationFrameRT7::CalculateMaxBoneOrLabelIDs(int&, int&, int&, AnimBase const&, unsigned int, AnimTransform)
    void AnimationFrameRT7::CalculateMaxBoneOrLabelIDs(int* param_1, int* param_2, int* param_3, AnimBase* param_4,
                                                       uint param_5, byte param_6) {
        Array<game::VarValue, eastl::allocator>* this;
        ushort* puVar2;
        ushort* puVar3;
        int* piVar4;
        uint local_34;

        this = (Array<game::VarValue, eastl::allocator>*)param_4->GetTransformLabels(param_5);
        if (empty() == '\0') {
            puVar2 = (ushort*)data();
            puVar3 = (ushort*)end();
            puVar2 = std::max_element<unsigned short const*>(puVar2, puVar3);
            local_34 = (uint)*puVar2;
            if (((param_6 < 4) || (param_1 = param_2, (param_6 & 253) == 5)) ||
                (param_1 = param_3, (byte)(param_6 - 8) < 3)) {
                piVar4 = std::max<int>(param_1, (int*)&local_34);
                *param_1 = *piVar4;
            }
        }
    }

    // 0x100987ec0, 528 bytes, placed by class name
    // AnimationFrameRT7::PreProcessTransforms(shared_ptr<AnimationFrameRT5> const&, Array<LabelData, eastl::allocator> const&, bool)
    void AnimationFrameRT7::PreProcessTransforms(shared_ptr* param_1, Array* param_2, bool param_3) {
        uint* puVar1;
        uint uVar2;
        undefined8 uVar3;
        char cVar4;
        char cVar5;
        char cVar6;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        shared_ptr<AnimBase>* this_01;
        Option<float>* this_02;
        Layout* this_03;
        uint* puVar7;
        uint* puVar8;
        AnimBase* pAVar9;
        vector* pvVar10;
        undefined8 uVar11;
        undefined7 in_register_00000009;
        type* ptVar12;
        Vector3T<int> local_60[16];
        undefined8 local_50;
        undefined4 local_44;
        NXTPixToolkit* local_40;
        char local_31;

        local_44 = (undefined4)CONCAT71(in_register_00000009, param_3);
        this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
                      shared_ptr<AnimationFrameRT5>::operator->((shared_ptr<AnimationFrameRT5>*)param_1);
        this_01 = (shared_ptr<AnimBase>*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(this_00);
        local_40 = (NXTPixToolkit*)this;
        ClearMemberData(this);
        math::Vector3T<int>::Vector3T(local_60);
        this_02 = (Option<float>*)shared_ptr<AnimationFrameRT5>::operator->((shared_ptr<AnimationFrameRT5>*)param_1);
        this_03 = (Layout*)this_02->GetDefaultValue();
        puVar7 = (uint*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_03);
        puVar8 = (uint*)this_03->end();
        while (true) {
            if (puVar7 == puVar8) {
                return;
            }
            uVar2 = *puVar7;
            pAVar9 = (AnimBase*)shared_ptr<AnimBase>::operator->(this_01);
            cVar5 = pAVar9->GetTransformType(uVar2);
            pAVar9 = (AnimBase*)shared_ptr<AnimBase>::operator->(this_01);
            ptVar12 = (type*)(ulong)uVar2;
            local_50 = pAVar9->GetTransformLabels(uVar2);
            puVar1 = puVar7 + 1;
            pvVar10 = local_40->SSOBeginPtr(ptVar12);
            local_31 = cVar5;
            if ((char)local_44 != '\0')
                break;
            AnimationHelper::ApplyOriginTransform(cVar5, this_01, param_2, pvVar10, uVar2, puVar7[15], puVar1,
                                                  local_60);
            cVar4 = local_31;
            uVar3 = local_50;
            if (local_31 != '\0') {
                ApplyTweenMask((AnimationFrameRT7*)local_40, cVar5, local_50, puVar7);
                cVar6 = AnimationHelper::ApplyBoneTransform(cVar5, uVar3, puVar1, puVar7 + 4, puVar7 + 10, 0, local_60,
                                                            pvVar10);
                if (cVar6 == '\0') {
                    uVar11 = local_40->GetScreen();
                    uVar3 = local_50;
                    cVar6 = AnimationHelper::ApplyColourTransform(cVar5, local_50, puVar1, uVar11, (char)local_44);
                    if (cVar6 == '\0') {
                        local_40->GetDefaultValue();
                        cVar5 = AnimationHelper::ApplyBillboardTransform(cVar5, uVar3, puVar1);
                        if (cVar5 != '\0') {
                            local_40->field_102 = 1;
                        }
                    } else if (cVar4 == '\x05') {
                        local_40->field_100 = 1;
                    } else if (cVar4 == '\a') {
                        local_40->field_101 = 1;
                    }
                }
            }
            puVar7 = puVar7 + 16;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("!usingKeyFrames",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/animation/"
                  "AnimationFrameRT7.cpp",
                  160, (char*)0);
    }

    // 0x1009880d0, 16 bytes, complete-object constructor, placed by class name
    // AnimationFrameRT7::AnimationFrameRT7(shared_ptr<AnimationFrameRT5> const&, unsigned int, Array<LabelData, eastl::allocator> const&, bool): jumps straight to the base-object constructor

    // 0x1009880e0, 96 bytes, base-object destructor, placed by class name
    // AnimationFrameRT7::~AnimationFrameRT7()
    void AnimationFrameRT7::~AnimationFrameRT7() {
        HeapInterface* this_00;
        void* pvVar1;

        this_00 = (HeapInterface*)HeapInterface::Instance();
        pvVar1 = (void*)(&field_48)->end();
        this_00->AlignedFree(pvVar1);
        (&field_112)->~shared_ptr();
        ~VertexTransformData();
    }

    // 0x100988140, 16 bytes, complete-object destructor, placed by class name
    // AnimationFrameRT7::~AnimationFrameRT7(): jumps straight to the base-object destructor

    // 0x100988150, 448 bytes, placed by class name
    // AnimationFrameRT7::ClearMemberData()
    void AnimationFrameRT7::ClearMemberData() {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        vector* this_00;
        Matrix43T<float>* this_01;
        Matrix43T<float>* pMVar4;
        Layout* pLVar5;
        long lVar6;
        WrapArray<float>* pWVar7;
        undefined8* puVar8;
        undefined8* puVar9;
        ulong uVar10;
        uchar* puVar11;
        uchar* puVar12;
        uint uVar13;
        type* in_RSI;
        ulong uVar14;

        this_00 = SSOBeginPtr(in_RSI);
        this_01 = (Matrix43T<float>*)this_00->end();
        pMVar4 = (Matrix43T<float>*)this_00->end();
        for (; this_01 != pMVar4; this_01 = this_01 + 48) {
            this_01->SetToIdentity();
        }
        pLVar5 = (Layout*)GetScreen();
        lVar6 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(pLVar5);
        if (lVar6 != 0) {
            uVar13 = 4;
            uVar14 = 0;
            do {
                pWVar7 = (WrapArray<float>*)GetScreen();
                puVar8 = (undefined8*)WrapArray<float>::operator[](pWVar7, uVar14);
                puVar9 = (undefined8*)Array<float, eastl::allocator>::operator[](
                    (Array<float, eastl::allocator>*)&AnimationManager::IDENTITY_STATE_LABELS, 0);
                uVar1 = puVar9[1];
                *puVar8 = *puVar9;
                puVar8[1] = uVar1;
                uVar14 = (ulong)uVar13;
                pLVar5 = (Layout*)GetScreen();
                uVar10 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(pLVar5);
                uVar13 = uVar13 + 4;
            } while (uVar14 < uVar10);
        }
        pLVar5 = (Layout*)GetDefaultValue();
        lVar6 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(pLVar5);
        if (lVar6 != 0) {
            uVar13 = 8;
            uVar14 = 0;
            do {
                pWVar7 = (WrapArray<float>*)GetDefaultValue();
                puVar8 = (undefined8*)WrapArray<float>::operator[](pWVar7, uVar14);
                puVar9 = (undefined8*)Array<float, eastl::allocator>::operator[](
                    (Array<float, eastl::allocator>*)&AnimationManager::IDENTITY_STATE_BILLBOARD_LABELS, 0);
                uVar1 = puVar9[1];
                uVar2 = puVar9[2];
                uVar3 = puVar9[3];
                *puVar8 = *puVar9;
                puVar8[1] = uVar1;
                puVar8[2] = uVar2;
                puVar8[3] = uVar3;
                uVar14 = (ulong)uVar13;
                pLVar5 = (Layout*)GetDefaultValue();
                uVar10 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(pLVar5);
                uVar13 = uVar13 + 8;
            } while (uVar14 < uVar10);
        }
        puVar11 = (uchar*)(&field_48)->end();
        puVar12 = (uchar*)(&field_48)->end();
        eastl::fill(puVar11, puVar12, 0);
        puVar11 = (uchar*)(&field_64)->end();
        puVar12 = (uchar*)(&field_64)->end();
        eastl::fill(puVar11, puVar12, 0);
        puVar11 = (uchar*)(&field_80)->end();
        puVar12 = (uchar*)(&field_80)->end();
        eastl::fill(puVar11, puVar12, 0);
    }

    // 0x100988440, 272 bytes, placed by class name
    // AnimationFrameRT7::ApplyTweenMask(AnimTransform, Array<unsigned short, eastl::allocator> const&, AnimationFrameRT5Transform const&)
    void AnimationFrameRT7::ApplyTweenMask(
        byte param_2,
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* param_3,
        long param_4) {
        ushort* puVar1;
        ushort* puVar2;
        byte* pbVar3;
        byte bVar4;
        uint uVar5;

        uVar5 = *(uint*)(param_4 + 56) & 3;
        if (uVar5 != 0) {
            bVar4 = (byte)uVar5;
            if ((byte)(param_2 - 1) < 3) {
                puVar1 = (ushort*)param_3->data();
                puVar2 = (ushort*)param_3->end();
                if (puVar1 != puVar2) {
                    do {
                        pbVar3 = (byte*)WrapArray<unsigned char>::operator[]((WrapArray<unsigned char>*)&field_48,
                                                                             (ulong)*puVar1);
                        *pbVar3 = *pbVar3 | bVar4;
                        puVar1 = puVar1 + 1;
                    } while (puVar1 != puVar2);
                }
            } else if ((param_2 & 253) == 5) {
                puVar1 = (ushort*)param_3->data();
                puVar2 = (ushort*)param_3->end();
                if (puVar1 != puVar2) {
                    do {
                        pbVar3 = (byte*)WrapArray<unsigned char>::operator[]((WrapArray<unsigned char>*)&field_64,
                                                                             (ulong)*puVar1);
                        *pbVar3 = *pbVar3 | bVar4;
                        puVar1 = puVar1 + 1;
                    } while (puVar1 != puVar2);
                }
            } else if ((byte)(param_2 - 8) < 3) {
                puVar1 = (ushort*)param_3->data();
                puVar2 = (ushort*)param_3->end();
                if (puVar1 != puVar2) {
                    do {
                        pbVar3 = (byte*)WrapArray<unsigned char>::operator[]((WrapArray<unsigned char>*)&field_80,
                                                                             (ulong)*puVar1);
                        *pbVar3 = *pbVar3 | bVar4;
                        puVar1 = puVar1 + 1;
                    } while (puVar1 != puVar2);
                }
            }
        }
    }

    // 0x100988560, 160 bytes, placed by class name
    // AnimationFrameRT7::GetBoneMatrices(WrapArray<math::Matrix43T<float> >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&) const
    void AnimationFrameRT7::GetBoneMatrices(WrapArray* param_1, vector_map* param_2) {
        ushort uVar1;
        Matrix43T<float>* this_00;
        ushort* puVar2;
        ushort* puVar3;
        ParticleVertexDataProxy* pPVar4;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_01;

        this_00 = (Matrix43T<float>*)WrapArray<math::Matrix43T<float>>::operator[](
            (WrapArray<math::Matrix43T<float>>*)param_1, 0);
        this_00->SetToIdentity();
        puVar2 = (ushort*)param_2->HeapBeginPtr();
        puVar3 = (ushort*)param_2->end();
        for (; puVar2 != puVar3; puVar2 = puVar2 + 2) {
            uVar1 = puVar2[1];
            pPVar4 = (ParticleVertexDataProxy*)GetBoneTransform((uint)*puVar2);
            this_01 = (ParticleVertexDataProxy<math::Vector3T<float>>*)WrapArray<math::Matrix43T<float>>::operator[](
                (WrapArray<math::Matrix43T<float>>*)param_1, (ulong)uVar1);
            ParticleVertexDataProxy<math::Vector3T<float>>::operator=(this_01, pPVar4);
        }
    }

    // 0x100988640, 128 bytes, placed by class name
    // AnimationFrameRT7::GetVertexTransformDataBoneMatrices(VertexTransformData&) const
    void AnimationFrameRT7::GetVertexTransformDataBoneMatrices(VertexTransformData* param_1) {
        vector* pvVar1;
        ParticleVertexDataProxy* pPVar3;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_00;
        type* ptVar4;
        type* ptVar5;

        pvVar1 = SSOBeginPtr(param_1);
        if (pvVar1->HeapBeginPtr() != 0) {
            ptVar5 = (type*)0;
            do {
                ptVar4 = ptVar5;
                pPVar3 = (ParticleVertexDataProxy*)GetBoneTransform((int)ptVar5);
                pvVar1 = param_1->SSOBeginPtr(ptVar4);
                this_00 =
                    (ParticleVertexDataProxy<math::Vector3T<float>>*)WrapArray<math::Matrix43T<float>>::operator[](
                        (WrapArray<math::Matrix43T<float>>*)pvVar1, (ulong)ptVar5);
                ParticleVertexDataProxy<math::Vector3T<float>>::operator=(this_00, pPVar3);
                ptVar5 = (type*)(ulong)((int)ptVar5 + 1);
                pvVar1 = SSOBeginPtr(pPVar3);
                ptVar4 = (type*)pvVar1->HeapBeginPtr();
            } while (ptVar5 < ptVar4);
        }
    }

    // 0x1009886c0, 80 bytes, placed by class name
    // AnimationFrameRT7::GetInterpolatedBoneMatrices(WrapArray<math::Matrix43T<float> >&, AnimationFrameRT7 const&, float, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&) const
    void AnimationFrameRT7::GetInterpolatedBoneMatrices(WrapArray* param_1, AnimationFrameRT7* param_2, float param_3,
                                                        vector_map* param_4) {
        char cVar1;

        cVar1 = param_4->empty();
        if (cVar1 == '\0') {
            GetInterpolatedBoneMatricesRT5(this, param_1, param_2, param_3, param_4);
        }
    }

    // 0x100988710, 832 bytes, placed by class name
    // AnimationFrameRT7::GetInterpolatedBoneMatricesRT5(WrapArray<math::Matrix43T<float> >&, AnimationFrameRT7 const&, float, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&) const
    void AnimationFrameRT7::GetInterpolatedBoneMatricesRT5(WrapArray* param_1, AnimationFrameRT7* param_2,
                                                           float param_3, vector_map* param_4) {
        ushort uVar1;
        ushort uVar2;
        byte bVar3;
        Layout* this_00;
        vector* this_01;
        ulong* puVar4;
        ushort* puVar5;
        byte* pbVar6;
        ParticleVertexDataProxy* this_02;
        Matrix43T<float>* this_03;
        Vector3T<float>* pVVar7;
        undefined8* puVar8;
        long lVar9;
        ParticleVertexDataProxy<math::Vector3T<float>>* pPVar10;
        ulong uVar11;
        byte bVar12;
        ulong local_118[6];
        undefined8 local_e8;
        undefined8 uStack_e0;
        undefined8 local_d8;
        undefined8 uStack_d0;
        ulong local_c8;
        ulong local_b8;
        ulong local_b0;
        ushort* local_a8;
        Layout* local_a0;
        WrapArray<unsigned char>* local_98;
        Layout* local_90;
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        ulong local_40;

        local_90 = (Layout*)eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
        local_40 =
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(local_90);
        this_00 = (Layout*)param_2->GetMaterial();
        this_01 = SSOBeginPtr(param_1);
        local_c8 = this_01->HeapBeginPtr();
        local_98 = (WrapArray<unsigned char>*)&field_48;
        local_118[0] = local_98->HeapBeginPtr();
        puVar4 = std::min<unsigned long>(local_118, &local_c8);
        local_b8 = *puVar4;
        local_a0 = this_00;
        local_118[0] =
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        puVar4 = std::min<unsigned long>(local_118, &local_40);
        local_b0 = *puVar4;
        puVar5 = (ushort*)param_4->HeapBeginPtr();
        local_a8 = (ushort*)param_4->end();
        if (puVar5 != local_a8) {
            do {
                uVar1 = *puVar5;
                uVar11 = (ulong)uVar1;
                uVar2 = puVar5[1];
                if (uVar11 < local_b8) {
                    pbVar6 = (byte*)WrapArray<unsigned char>::operator[](local_98, uVar11);
                    bVar12 = (*pbVar6 & 2) >> 1;
                    if (local_b0 <= uVar11)
                        goto LAB_10098886d;
                LAB_10098888c:
                    pbVar6 = (byte*)WrapArray<unsigned char>::operator[]((WrapArray<unsigned char>*)local_a0, uVar11);
                    bVar3 = *pbVar6 & 1;
                } else {
                    bVar12 = 0;
                    if (uVar11 < local_b0)
                        goto LAB_10098888c;
                LAB_10098886d:
                    bVar3 = 0;
                }
                this_02 = (ParticleVertexDataProxy*)((AnimationFrameRT7*)this)->GetBoneTransform((uint)uVar1);
                if ((bVar12 | bVar3) == 1) {
                    pPVar10 =
                        (ParticleVertexDataProxy<math::Vector3T<float>>*)WrapArray<math::Matrix43T<float>>::operator[](
                            (WrapArray<math::Matrix43T<float>>*)param_1, (ulong)uVar2);
                    ParticleVertexDataProxy<math::Vector3T<float>>::operator=(pPVar10, this_02);
                } else {
                    if (uVar11 < local_40) {
                        this_03 = (Matrix43T<float>*)WrapArray<math::Matrix43T<float>>::operator[](
                            (WrapArray<math::Matrix43T<float>>*)local_90, uVar11);
                    } else {
                        this_03 = (Matrix43T<float>*)Array<math::Matrix43T<float>, eastl::allocator>::operator[](
                            (Array<math::Matrix43T<float>, eastl::allocator>*)&AnimationManager::IDENTITY_STATE_BONES,
                            0);
                    }
                    new (local_118) math::Matrix43T<float>();
                    pVVar7 = (Vector3T<float>*)math::Matrix43T<float>::operator[]((Matrix43T<float>*)this_02, 0);
                    puVar8 = (undefined8*)math::Vector3T<float>::operator[](pVVar7, 0);
                    local_68 = *puVar8;
                    uStack_60 = puVar8[1];
                    pVVar7 = (Vector3T<float>*)math::Matrix43T<float>::operator[]((Matrix43T<float>*)this_02, 0);
                    lVar9 = math::Vector3T<float>::operator[](pVVar7, 0);
                    local_e8 = *(undefined8*)(lVar9 + 16);
                    uStack_e0 = *(undefined8*)(lVar9 + 24);
                    pVVar7 = (Vector3T<float>*)math::Matrix43T<float>::operator[]((Matrix43T<float>*)this_02, 0);
                    lVar9 = math::Vector3T<float>::operator[](pVVar7, 0);
                    local_d8 = *(undefined8*)(lVar9 + 32);
                    uStack_d0 = *(undefined8*)(lVar9 + 40);
                    pVVar7 = (Vector3T<float>*)math::Matrix43T<float>::operator[](this_03, 0);
                    puVar8 = (undefined8*)math::Vector3T<float>::operator[](pVVar7, 0);
                    local_88 = *puVar8;
                    uStack_80 = puVar8[1];
                    pVVar7 = (Vector3T<float>*)math::Matrix43T<float>::operator[](this_03, 0);
                    lVar9 = math::Vector3T<float>::operator[](pVVar7, 0);
                    local_78 = *(undefined8*)(lVar9 + 16);
                    uStack_70 = *(undefined8*)(lVar9 + 24);
                    pVVar7 = (Vector3T<float>*)math::Matrix43T<float>::operator[](this_03, 0);
                    lVar9 = math::Vector3T<float>::operator[](pVVar7, 0);
                    local_88 = CONCAT44((local_88._4_4_ - local_68._4_4_) * param_3 + local_68._4_4_,
                                        ((float)local_88 - (float)local_68) * param_3 + (float)local_68);
                    uStack_80 = CONCAT44((uStack_80._4_4_ - uStack_60._4_4_) * param_3 + uStack_60._4_4_,
                                         ((float)uStack_80 - (float)uStack_60) * param_3 + (float)uStack_60);
                    local_78 = CONCAT44((local_78._4_4_ - local_e8._4_4_) * param_3 + local_e8._4_4_,
                                        ((float)local_78 - (float)local_e8) * param_3 + (float)local_e8);
                    uStack_70 = CONCAT44((uStack_70._4_4_ - uStack_e0._4_4_) * param_3 + uStack_e0._4_4_,
                                         ((float)uStack_70 - (float)uStack_e0) * param_3 + (float)uStack_e0);
                    local_68 = CONCAT44((*(float*)(lVar9 + 36) - local_d8._4_4_) * param_3 + local_d8._4_4_,
                                        (*(float*)(lVar9 + 32) - (float)local_d8) * param_3 + (float)local_d8);
                    uStack_60 = CONCAT44((*(float*)(lVar9 + 44) - uStack_d0._4_4_) * param_3 + uStack_d0._4_4_,
                                         (*(float*)(lVar9 + 40) - (float)uStack_d0) * param_3 + (float)uStack_d0);
                    puVar8 = (undefined8*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_118, 0);
                    *puVar8 = local_88;
                    puVar8[1] = uStack_80;
                    lVar9 = math::Vector3T<float>::operator[]((Vector3T<float>*)local_118, 0);
                    *(undefined8*)(lVar9 + 16) = local_78;
                    *(undefined8*)(lVar9 + 24) = uStack_70;
                    lVar9 = math::Vector3T<float>::operator[]((Vector3T<float>*)local_118, 0);
                    *(undefined8*)(lVar9 + 32) = local_68;
                    *(undefined8*)(lVar9 + 40) = uStack_60;
                    pPVar10 =
                        (ParticleVertexDataProxy<math::Vector3T<float>>*)WrapArray<math::Matrix43T<float>>::operator[](
                            (WrapArray<math::Matrix43T<float>>*)param_1, (ulong)uVar2);
                    ParticleVertexDataProxy<math::Vector3T<float>>::operator=(pPVar10,
                                                                              (ParticleVertexDataProxy*)local_118);
                }
                puVar5 = puVar5 + 2;
            } while (puVar5 != local_a8);
        }
    }

    // 0x100988a50, 16 bytes, placed by class name
    // AnimationFrameRT7::GetInterpolatedVertexTransformData(VertexTransformData&, AnimationFrameRT7 const&, float) const
    void AnimationFrameRT7::GetInterpolatedVertexTransformData(VertexTransformData* param_1, AnimationFrameRT7* param_2,
                                                               float param_3) {
        GetInterpolatedVertexTransformDataRT5(this, param_1, param_2, param_3);
    }

    // 0x100988a60, 816 bytes, placed by class name
    // AnimationFrameRT7::GetInterpolatedVertexTransformDataRT5(VertexTransformData&, AnimationFrameRT7 const&, float) const
    void AnimationFrameRT7::GetInterpolatedVertexTransformDataRT5(VertexTransformData* param_1,
                                                                  AnimationFrameRT7* param_2, float param_3) {
        byte bVar1;
        Layout* this_00;
        vector* pvVar2;
        ulong* puVar3;
        long lVar4;
        type* ptVar5;
        byte* pbVar6;
        Matrix43T<float>* this_01;
        Matrix43T<float>* this_02;
        Vector3T<float>* pVVar7;
        undefined8* puVar8;
        ParticleVertexDataProxy<math::Vector3T<float>>* pPVar9;
        byte bVar10;
        VertexTransformData* pVVar11;
        type* ptVar12;
        Matrix43T<float>* this_03;
        ulong local_108[6];
        undefined8 local_d8;
        undefined8 uStack_d0;
        undefined8 local_c8;
        undefined8 uStack_c0;
        ulong local_b0;
        type* local_a8;
        type* local_a0;
        Layout* local_98;
        WrapArray<unsigned char>* local_90;
        VertexTransformData* local_88;
        Layout* local_80;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        type* local_38;

        pVVar11 = param_1;
        local_80 = (Layout*)eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
        local_38 = (type*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(local_80);
        this_00 = (Layout*)param_2->GetMaterial();
        pvVar2 = SSOBeginPtr(pVVar11);
        local_b0 = pvVar2->HeapBeginPtr();
        local_90 = (WrapArray<unsigned char>*)&field_48;
        local_108[0] = local_90->HeapBeginPtr();
        puVar3 = std::min<unsigned long>(local_108, &local_b0);
        local_a8 = (type*)*puVar3;
        local_98 = this_00;
        local_108[0] =
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        ptVar12 = (type*)&local_38;
        puVar3 = std::min<unsigned long>(local_108, (ulong*)ptVar12);
        local_a0 = (type*)*puVar3;
        pvVar2 = SSOBeginPtr(ptVar12);
        lVar4 = pvVar2->HeapBeginPtr();
        if (lVar4 != 0) {
            ptVar12 = (type*)0;
            local_88 = param_1;
            do {
                if (ptVar12 < local_a8) {
                    pbVar6 = (byte*)WrapArray<unsigned char>::operator[](local_90, (ulong)ptVar12);
                    bVar10 = (*pbVar6 & 2) >> 1;
                    if (local_a0 <= ptVar12)
                        goto LAB_100988bb4;
                LAB_100988bcb:
                    pbVar6 = (byte*)WrapArray<unsigned char>::operator[]((WrapArray<unsigned char>*)local_98,
                                                                         (ulong)ptVar12);
                    bVar1 = *pbVar6 & 1;
                } else {
                    bVar10 = 0;
                    if (ptVar12 < local_a0)
                        goto LAB_100988bcb;
                LAB_100988bb4:
                    bVar1 = 0;
                }
                ptVar5 = ptVar12;
                this_01 = (Matrix43T<float>*)GetBoneTransform((int)ptVar12);
                if ((bVar10 | bVar1) == 1) {
                    pvVar2 = param_1->SSOBeginPtr(ptVar5);
                    pPVar9 =
                        (ParticleVertexDataProxy<math::Vector3T<float>>*)WrapArray<math::Matrix43T<float>>::operator[](
                            (WrapArray<math::Matrix43T<float>>*)pvVar2, (ulong)ptVar12);
                    ParticleVertexDataProxy<math::Vector3T<float>>::operator=(pPVar9,
                                                                              (ParticleVertexDataProxy*)this_01);
                } else {
                    if (ptVar12 < local_38) {
                        this_02 = (Matrix43T<float>*)WrapArray<math::Matrix43T<float>>::operator[](
                            (WrapArray<math::Matrix43T<float>>*)local_80, (ulong)ptVar12);
                    } else {
                        this_02 = (Matrix43T<float>*)Array<math::Matrix43T<float>, eastl::allocator>::operator[](
                            (Array<math::Matrix43T<float>, eastl::allocator>*)&AnimationManager::IDENTITY_STATE_BONES,
                            0);
                    }
                    this_03 = (Matrix43T<float>*)local_108;
                    math::Matrix43T<float>::Matrix43T(this_03);
                    pVVar7 = (Vector3T<float>*)math::Matrix43T<float>::operator[](this_01, 0);
                    puVar8 = (undefined8*)math::Vector3T<float>::operator[](pVVar7, 0);
                    local_58 = *puVar8;
                    uStack_50 = puVar8[1];
                    pVVar7 = (Vector3T<float>*)math::Matrix43T<float>::operator[](this_01, 0);
                    lVar4 = math::Vector3T<float>::operator[](pVVar7, 0);
                    local_d8 = *(undefined8*)(lVar4 + 16);
                    uStack_d0 = *(undefined8*)(lVar4 + 24);
                    pVVar7 = (Vector3T<float>*)math::Matrix43T<float>::operator[](this_01, 0);
                    lVar4 = math::Vector3T<float>::operator[](pVVar7, 0);
                    local_c8 = *(undefined8*)(lVar4 + 32);
                    uStack_c0 = *(undefined8*)(lVar4 + 40);
                    pVVar7 = (Vector3T<float>*)math::Matrix43T<float>::operator[](this_02, 0);
                    puVar8 = (undefined8*)math::Vector3T<float>::operator[](pVVar7, 0);
                    local_78 = *puVar8;
                    uStack_70 = puVar8[1];
                    pVVar7 = (Vector3T<float>*)math::Matrix43T<float>::operator[](this_02, 0);
                    lVar4 = math::Vector3T<float>::operator[](pVVar7, 0);
                    local_68 = *(undefined8*)(lVar4 + 16);
                    uStack_60 = *(undefined8*)(lVar4 + 24);
                    pVVar7 = (Vector3T<float>*)math::Matrix43T<float>::operator[](this_02, 0);
                    lVar4 = math::Vector3T<float>::operator[](pVVar7, 0);
                    local_78 = CONCAT44((local_78._4_4_ - local_58._4_4_) * param_3 + local_58._4_4_,
                                        ((float)local_78 - (float)local_58) * param_3 + (float)local_58);
                    uStack_70 = CONCAT44((uStack_70._4_4_ - uStack_50._4_4_) * param_3 + uStack_50._4_4_,
                                         ((float)uStack_70 - (float)uStack_50) * param_3 + (float)uStack_50);
                    local_68 = CONCAT44((local_68._4_4_ - local_d8._4_4_) * param_3 + local_d8._4_4_,
                                        ((float)local_68 - (float)local_d8) * param_3 + (float)local_d8);
                    uStack_60 = CONCAT44((uStack_60._4_4_ - uStack_d0._4_4_) * param_3 + uStack_d0._4_4_,
                                         ((float)uStack_60 - (float)uStack_d0) * param_3 + (float)uStack_d0);
                    local_58 = CONCAT44((*(float*)(lVar4 + 36) - local_c8._4_4_) * param_3 + local_c8._4_4_,
                                        (*(float*)(lVar4 + 32) - (float)local_c8) * param_3 + (float)local_c8);
                    uStack_50 = CONCAT44((*(float*)(lVar4 + 44) - uStack_c0._4_4_) * param_3 + uStack_c0._4_4_,
                                         (*(float*)(lVar4 + 40) - (float)uStack_c0) * param_3 + (float)uStack_c0);
                    puVar8 = (undefined8*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 0);
                    *puVar8 = local_78;
                    puVar8[1] = uStack_70;
                    lVar4 = math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 0);
                    *(undefined8*)(lVar4 + 16) = local_68;
                    *(undefined8*)(lVar4 + 24) = uStack_60;
                    ptVar5 = (type*)0;
                    lVar4 = math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 0);
                    param_1 = local_88;
                    *(undefined8*)(lVar4 + 32) = local_58;
                    *(undefined8*)(lVar4 + 40) = uStack_50;
                    pvVar2 = local_88->SSOBeginPtr(ptVar5);
                    pPVar9 =
                        (ParticleVertexDataProxy<math::Vector3T<float>>*)WrapArray<math::Matrix43T<float>>::operator[](
                            (WrapArray<math::Matrix43T<float>>*)pvVar2, (ulong)ptVar12);
                    ParticleVertexDataProxy<math::Vector3T<float>>::operator=(pPVar9,
                                                                              (ParticleVertexDataProxy*)this_03);
                    this_01 = this_03;
                }
                ptVar12 = (type*)(ulong)((int)ptVar12 + 1);
                pvVar2 = SSOBeginPtr(this_01);
                ptVar5 = (type*)pvVar2->HeapBeginPtr();
            } while (ptVar12 < ptVar5);
        }
    }

} // namespace jag::graphics
