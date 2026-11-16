// libs/graphics/runetek7/animation/Animation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "Animation.h"

namespace jag::graphics {
    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    Animation::GetFrames() const;

    // 0x100023af0: the linker folded this into hal::Haptics::GetEnabled() const, which has identical code
    Animation::IsConstructed() const;

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    Animation::GetRT5Frames() const;

    // 0x1000b7910: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectName() const, which has identical code
    Animation::GetFrameDelays() const;

    // 0x1000b7a80: the linker folded this into oldscape::minimenu::MinimenuEntry::GetObjCount() const, which has identical code
    Animation::GetAnimationLength() const;

    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    Animation::GetFrameStartTimes() const;

    // 0x10018b530: the linker folded this into oldscape::jagex3::Js5::GetGroupIdLimit() const, which has identical code
    Animation::GetRT5FrameCount() const;

    // 0x1001fb280: the linker folded this into http::CRMData::GetActionInfo() const, which has identical code
    Animation::GetAnimKeyFrameSet() const;

    // 0x1003cf2c0: the linker folded this into game::MapElementType::GetTextRGBA() const, which has identical code
    Animation::GetMaximumUsedBoneID() const;

    // 0x1009863f0, 368 bytes, base-object constructor, placed by class name and debug map
    // Animation::Animation(Array<shared_ptr<AnimationFrameRT5>, eastl::allocator> const&, Array<unsigned int, eastl::allocator>&, Array<LabelData, BucketAllocatorEASTL> const&, shared_ptr<AnimKeyFrameSet>)
    void Animation::Animation(Array* param_1, Array* param_2, Array* param_3, shared_ptr param_4) {
        shared_ptr* in_R8;
        shared_ptr<oldscape::dash3d::Decor> asStackY_f8[128];
        shared_ptr in_stack_ffffffffffffff88;

        new (this) MakeSharedPool<Animation, 512>();
        field_0 = '\0';
        new (&field_8) Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>();
        new (&field_32) Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>();
        new (&field_56) Array<unsigned int, eastl::allocator>();
        new (&field_80) Array<unsigned int, eastl::allocator>();
        field_104 = -1;
        m_animatesTransparency = 0;
        m_animatedColourType = '\x02';
        m_animatesBillboards = 0;
        new (field_112, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_128 = -1;
        new (&field_136) eastl::vector<std::future<void>, eastl::allocator>();
        new (&field_168) Array<AnimKeyFrameSample, eastl::allocator>();
        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(asStackY_f8 + 128, in_R8);
        ConstructAnimation(this, param_1, param_2, param_3, in_stack_ffffffffffffff88);
        ((asStackY_f8 + 128))->~shared_ptr();
    }

    // 0x1009865e0, 144 bytes, placed by class name and debug map
    // Animation::ConstructAnimation(Array<shared_ptr<AnimationFrameRT5>, eastl::allocator> const&, Array<unsigned int, eastl::allocator> const&, Array<LabelData, BucketAllocatorEASTL> const&, shared_ptr<AnimKeyFrameSet>)
    void Animation::ConstructAnimation(Array* param_1, Array* param_2, Array* param_3, shared_ptr param_4) {
        shared_ptr* in_R8;

        if (field_0 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_constructed",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/Animation.cpp",
                      42, (char*)0);
        }
        if (operator!=(in_R8, (_func_decltype_nullptr*)0)) {
            StoreRT5Frames(this, param_1, param_2);
            ConstructFromAnimKeyFrameSet(this, in_R8);
        } else {
            ConstructFromRT5Frames(this, param_1, param_2, param_3);
        }
    }

    // 0x100986690, 16 bytes, complete-object constructor, placed by class name and debug map
    // Animation::Animation(Array<shared_ptr<AnimationFrameRT5>, eastl::allocator> const&, Array<unsigned int, eastl::allocator>&, Array<LabelData, BucketAllocatorEASTL> const&, shared_ptr<AnimKeyFrameSet>): jumps straight to the base-object constructor

    // 0x1009866a0, 352 bytes, base-object constructor, placed by class name and debug map
    // Animation::Animation(shared_ptr<AnimKeyFrameSet> const&)
    void Animation::Animation(shared_ptr* param_1) {
        undefined1* this_00;
        NPCTypeList* this_01;
        AnimKeyFrameSet* pAVar1;
        char cVar2;

        new (this) MakeSharedPool<Animation, 512>();
        field_0 = '\0';
        new (&field_8) Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>();
        new (&field_32) Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>();
        new (&field_56) Array<unsigned int, eastl::allocator>();
        new (&field_80) Array<unsigned int, eastl::allocator>();
        field_104 = -1;
        m_animatesTransparency = 0;
        m_animatedColourType = '\x02';
        m_animatesBillboards = 0;
        this_00 = field_112;
        new (this_00) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        field_128 = -1;
        new (&field_136) eastl::vector<std::future<void>, eastl::allocator>();
        new (&field_168) Array<AnimKeyFrameSample, eastl::allocator>();
        shared_ptr<AnimKeyFrameSet>::operator=((shared_ptr<AnimKeyFrameSet>*)this_00, param_1);
        this_01 = (NPCTypeList*)shared_ptr<AnimKeyFrameSet>::operator->((shared_ptr<AnimKeyFrameSet>*)this_00);
        cVar2 = this_01->IsMembersServer();
        m_animatedColourType = '\x02' - cVar2;
        pAVar1 = (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->((shared_ptr<AnimKeyFrameSet>*)this_00);
        m_animatesTransparency = pAVar1->GetAnimatesTransparency();
        pAVar1 = (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->((shared_ptr<AnimKeyFrameSet>*)this_00);
        field_104 = pAVar1->GetDuration();
        field_0 = '\x01';
    }

    // 0x1009868a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Animation::Animation(shared_ptr<AnimKeyFrameSet> const&): jumps straight to the base-object constructor

    // 0x1009868b0, 240 bytes, base-object destructor, placed by class name and debug map
    // Animation::~Animation()
    void Animation::~Animation() {
        undefined1* this_00;
        long lVar1;
        long lVar2;

        this_00 = &field_136;
        lVar1 = this_00->HeapBeginPtr();
        lVar2 = this_00->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 8) {
            std::future<void>::wait();
        }
        (&field_168)->~Array();
        this_00->~vector();
        field_112->~shared_ptr();
        (&field_80)->~Array();
        (&field_56)->~Array();
        (&field_32)->~Array();
        (&field_8)->~Array();
    }

    // 0x1009869b0, 16 bytes, complete-object destructor, placed by class name and debug map
    // Animation::~Animation(): jumps straight to the base-object destructor

    // 0x1009869c0, 240 bytes, placed by class name and debug map
    // Animation::StoreRT5Frames(Array<shared_ptr<AnimationFrameRT5>, eastl::allocator> const&, Array<unsigned int, eastl::allocator> const&)
    void Animation::StoreRT5Frames(Array* param_1, Array* param_2) {
        bool bVar1;
        ulong uVar2;
        long lVar3;
        int* piVar4;
        shared_ptr* psVar5;
        shared_ptr<AnimationFrameRT5>* this_00;
        int iVar6;
        ulong uVar7;

        uVar2 = param_1->end();
        iVar6 = 0;
        (&field_32, uVar2, 0)->set_max_size();
        Array<unsigned int, eastl::allocator>::operator=((Array<unsigned int, eastl::allocator>*)&field_56, param_2);
        uVar2 = param_1->end();
        (&field_80, uVar2, 0)->set_max_size();
        lVar3 = param_1->end();
        if (lVar3 != 0) {
            uVar2 = 0;
            uVar7 = 1;
            do {
                piVar4 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)&field_80, uVar2);
                *piVar4 = iVar6;
                piVar4 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)param_2, uVar2);
                iVar6 = iVar6 + *piVar4;
                psVar5 = (shared_ptr*)Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>::operator[](
                    (Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>*)param_1, uVar2);
                this_00 =
                    (shared_ptr<AnimationFrameRT5>*)Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>::operator[](
                        (Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>*)&field_32, uVar2);
                shared_ptr<AnimationFrameRT5>::operator=(this_00, psVar5);
                uVar2 = param_1->end();
                bVar1 = uVar7 < uVar2;
                uVar2 = uVar7;
                uVar7 = (ulong)((int)uVar7 + 1);
            } while (bVar1);
        }
    }

    // 0x100986ab0, 656 bytes, placed by class name and debug map
    // Animation::ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&)
    void Animation::ConstructFromAnimKeyFrameSet(shared_ptr* param_1) {
        undefined1* this_00;
        undefined8 uVar1;
        undefined8 uVar2;
        byte bVar3;
        char cVar4;
        int iVar5;
        AnimKeyFrameSet* pAVar6;
        AutoSingleton<ThreadPoolSingleton>* this_01;
        type* ptVar7;
        Layout* pLVar8;
        vector* pvVar9;
        long lVar10;
        undefined8* puVar11;
        type* ptVar12;
        NPCTypeList* this_02;
        vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>* this_03;
        ulong uVar13;
        float fVar14;
        undefined8 local_a8;
        undefined8 local_a0;
        shared_ptr<oldscape::dash3d::Decor> local_98[16];
        Animation* local_88;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL> local_80[24];
        undefined1 local_68[8];
        __atomic_base* local_60;
        Animation* local_58;
        vector<std::future<void>, eastl::allocator>* local_50;
        uint local_48;
        int local_44;
        shared_ptr local_40;

        new (&local_40) shared_ptr<oldscape::dash3d::Decor>(param_1);
        pAVar6 = (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->((shared_ptr<AnimKeyFrameSet>*)param_1);
        fVar14 = (float)pAVar6->GetEnd();
        local_44 = (int)(fVar14 + 1.0);
        local_48 = 1;
        uVar13 = (ulong)local_44;
        (&field_168, uVar13, 1)->set_max_size();
        this_00 = &field_56;
        this_00->set_max_size(uVar13, 1);
        this_01 = (AutoSingleton<ThreadPoolSingleton>*)this_00->data();
        ptVar7 = (type*)this_00->end();
        std::fill<unsigned int*, unsigned int>((uint*)this_01, (uint*)ptVar7, &local_48);
        pLVar8 = (Layout*)this_01->Instance();
        pvVar9 = eastl::string::Layout::SSOBeginPtr(pLVar8, ptVar7);
        local_80->InitialiseWorkGroups((ulong)pvVar9, uVar13);
        iVar5 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(local_80);
        local_60 = (__atomic_base*)&field_192;
        std::atomic<int>::operator=((atomic<int>*)local_60, iVar5);
        lVar10 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(local_80);
        if (lVar10 != 0) {
            local_50 = (vector<std::future<void>, eastl::allocator>*)&field_136;
            ptVar7 = (type*)0;
            local_58 = this;
            do {
                puVar11 = (undefined8*)
                    eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::operator[](
                        (vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>*)local_80,
                        (ulong)ptVar7);
                uVar1 = *puVar11;
                ptVar12 = ptVar7;
                this_03 = (vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>*)local_80;
                lVar10 = eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::operator[](
                    (vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>*)local_80, (ulong)ptVar7);
                uVar2 = *(undefined8*)(lVar10 + 8);
                pLVar8 = (Layout*)this_03->Instance();
                pvVar9 = eastl::string::Layout::SSOBeginPtr(pLVar8, ptVar12);
                local_a8 = uVar1;
                local_a0 = uVar2;
                shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_98, &local_40);
                this = local_58;
                local_88 = local_58;
                ThreadPool::AddTask<Animation::ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&)::__2>(
                    (ThreadPool*)local_68, (char*)pvVar9, (__2*)&local_a8);
                eastl::vector<std::future<void>, eastl::allocator>::push_back(local_50, (future*)local_68);
                local_68->~future();
                ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&)::$_2::~__2((__2*)&local_a8);
                ptVar7 = ptVar7 + 1;
                ptVar12 = (type*)eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(
                    local_80);
            } while (ptVar7 < ptVar12);
        }
        while (iVar5 = std::__atomic_base::operator_cast_to_int(local_60), iVar5 != 0) {
            this_thread::Sleep(0);
        }
        field_104 = local_44;
        shared_ptr<AnimKeyFrameSet>::operator=((shared_ptr<AnimKeyFrameSet>*)field_112, &local_40);
        pAVar6 = (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->((shared_ptr<AnimKeyFrameSet>*)&local_40);
        bVar3 = pAVar6->GetAnimatesTransparency();
        m_animatesTransparency = bVar3;
        this_02 = (NPCTypeList*)shared_ptr<AnimKeyFrameSet>::operator->((shared_ptr<AnimKeyFrameSet>*)&local_40);
        cVar4 = this_02->IsMembersServer();
        m_animatedColourType = '\x02' - cVar4;
        pAVar6 = (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->((shared_ptr<AnimKeyFrameSet>*)&local_40);
        bVar3 = pAVar6->GetAnimatesBillboards();
        m_animatesBillboards = bVar3;
        field_0 = '\x01';
        local_80->~vector();
        local_40.~shared_ptr();
    }

    // 0x100986d40, 688 bytes, placed by class name and debug map
    // Animation::ConstructFromRT5Frames(Array<shared_ptr<AnimationFrameRT5>, eastl::allocator> const&, Array<unsigned int, eastl::allocator> const&, Array<LabelData, BucketAllocatorEASTL> const&)
    void Animation::ConstructFromRT5Frames(Array* param_1, Array* param_2, Array* param_3) {
        Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>* this_00;
        int iVar1;
        byte bVar3;
        ulong uVar5;
        long lVar6;
        ulong uVar7;
        int* piVar8;
        shared_ptr* this_01;
        shared_ptr* psVar9;
        shared_ptr<AnimationFrameRT5>* this_02;
        shared_ptr<AnimationFrameRT7>* psVar10;
        AnimationFrameRT7* pAVar11;
        WorldmapAreaMetadata* this_03;
        bool* in_R9;
        uint uVar12;
        shared_ptr local_58;
        Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>* local_48;
        int local_3c;
        int local_38;
        Array local_31;

        uVar5 = param_1->end();
        local_48 = (Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>*)&field_8;
        (&field_8, uVar5, 0)->set_max_size();
        uVar5 = param_1->end();
        (&field_32, uVar5, 0)->set_max_size();
        Array<unsigned int, eastl::allocator>::operator=((Array<unsigned int, eastl::allocator>*)&field_56, param_2);
        uVar5 = param_1->end();
        (&field_80, uVar5, 0)->set_max_size();
        local_3c = -1;
        local_38 = 0;
        lVar6 = param_1->end();
        if (lVar6 != 0) {
            uVar12 = 1;
            uVar5 = 0;
            do {
                iVar1 = local_38;
                piVar8 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)&field_80, uVar5);
                *piVar8 = iVar1;
                piVar8 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)param_2, uVar5);
                local_38 = local_38 + *piVar8;
                this_01 = (shared_ptr*)Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>::operator[](
                    (Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>*)param_1, uVar5);
                if (!operator!=(this_01, (_func_decltype_nullptr*)0)) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("animFrame != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/Animation.cpp",
                              145, (char*)0);
                }
                psVar9 = (shared_ptr*)Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>::operator[](
                    (Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>*)param_1, uVar5);
                this_02 =
                    (shared_ptr<AnimationFrameRT5>*)Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>::operator[](
                        (Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>*)&field_32, uVar5);
                shared_ptr<AnimationFrameRT5>::operator=(this_02, psVar9);
                local_31 = (Array)0;
                MakeSharedPool<AnimationFrameRT7, 8192>::MakeShared<shared_ptr<AnimationFrameRT5> const&, unsigned int&,
                                                                    Array<LabelData, BucketAllocatorEASTL> const&,
                                                                    bool>(
                    &local_58, (MakeSharedPool<AnimationFrameRT7, 8192>*)this_01, (shared_ptr*)&local_38,
                    (uint*)param_3, &local_31, in_R9);
                psVar10 =
                    (shared_ptr<AnimationFrameRT7>*)Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>::operator[](
                        local_48, uVar5);
                shared_ptr<AnimationFrameRT7>::operator=(psVar10, &local_58);
                local_58.~shared_ptr();
                this_00 = local_48;
                psVar10 =
                    (shared_ptr<AnimationFrameRT7>*)Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>::operator[](
                        local_48, uVar5);
                pAVar11 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator->(psVar10);
                bVar3 = pAVar11->GetAnimatesTransparency();
                m_animatesTransparency = m_animatesTransparency | bVar3;
                psVar10 =
                    (shared_ptr<AnimationFrameRT7>*)Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>::operator[](
                        this_00, uVar5);
                pAVar11 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator->(psVar10);
                bVar3 = pAVar11->GetAnimatesBillboards();
                m_animatesBillboards = m_animatesBillboards | bVar3;
                psVar10 =
                    (shared_ptr<AnimationFrameRT7>*)Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>::operator[](
                        this_00, uVar5);
                this_03 = (WorldmapAreaMetadata*)shared_ptr<AnimationFrameRT7>::operator->(psVar10);
                local_58._0_4_ = this_03->GetMaxMapZ();
                piVar8 = std::max<int>(&local_3c, (int*)&local_58);
                local_3c = *piVar8;
                psVar10 =
                    (shared_ptr<AnimationFrameRT7>*)Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>::operator[](
                        this_00, uVar5);
                pAVar11 = (AnimationFrameRT7*)shared_ptr<AnimationFrameRT7>::operator->(psVar10);
                if (pAVar11->GetAnimatesColour() != '\0') {
                    m_animatedColourType = '\0';
                }
                uVar5 = (ulong)uVar12;
                uVar7 = param_1->end();
                uVar12 = uVar12 + 1;
            } while (uVar5 < uVar7);
        }
        field_128 = local_3c;
        field_104 = local_38;
        new (&local_58) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<AnimKeyFrameSet>::operator=((shared_ptr<AnimKeyFrameSet>*)field_112, &local_58);
        local_58.~shared_ptr();
        field_0 = '\x01';
    }

} // namespace jag::graphics
