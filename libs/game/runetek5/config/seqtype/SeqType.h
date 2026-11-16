// libs/game/runetek5/config/seqtype/SeqType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class SeqType {
    public:
        // virtual methods in vtable order
        virtual ~SeqType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        uint GetDuplicateBehaviour() const;
        uint GetPriority() const;
        uint GetReplaceHeldLeft() const;
        uint GetReplaceHeldRight() const;
        void GetSeqSounds() const;
        Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>*
        GetAnimation(AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&, unsigned int,
                     shared_ptr<graphics::Model> const&);
        bool IsKeyFramed();
        ulong CheckFramesets();
        void CleanCache();
        int GetRandomRateForSound(unsigned int) const;
        bool IsBlockingMovement(int);
        SeqType(BaseTemplateConfigTypeList<SeqType>*, int);
        uint GetLoops() const;
        uint GetMaxLoops() const;
        GetSeqGroup() const;
        bool HasSounds() const;
        void GetSounds() const;
        GetVolume(int) const;
        GetTertiaryVolumeFactor() const;
        uint GetPreanimMove() const;
        uint GetPostanimMove() const;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullSeqType;

        // data members, from how the methods use this: 1824 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[4];
        shared_ptr field_40; // offset 40
        ulonglong field_56;  // offset 56
        char _unknown_64[1568];
        shared_ptr m_seqGroup; // offset 1632
        char _unknown_1648[72];
        uint field_1720;           // offset 1720
        uint m_loops;              // offset 1724
        uint m_priority;           // offset 1728
        uint m_replaceHeldLeft;    // offset 1732
        uint m_replaceHeldRight;   // offset 1736
        uint m_maxLoops;           // offset 1740
        uint field_1744;           // offset 1744
        uint field_1748;           // offset 1748
        uint m_preanimMove;        // offset 1752
        uint m_postanimMove;       // offset 1756
        uint m_duplicateBehaviour; // offset 1760
        char _unknown_1764[4];
        shared_ptr field_1768; // offset 1768
        char _unknown_1784[40];
    };

    class SeqTypeSounds {
    public:
        SeqTypeSounds();
        ~SeqTypeSounds();

        // data members, from how the methods use this: 104 bytes
        char _unknown_0[96];
        undefined4 field_96; // offset 96
        char _unknown_100[4];
    };

    // 0x1003f69f0, 16 bytes, inline, placed by class name and debug map
    // SeqType::GetDuplicateBehaviour() const
    uint SeqType::GetDuplicateBehaviour() {
        return m_duplicateBehaviour;
    }

    // 0x1003f6a80, 16 bytes, inline, placed by class name and debug map
    // SeqType::GetPriority() const
    uint SeqType::GetPriority() {
        return m_priority;
    }

    // 0x100496da0, 16 bytes, inline, placed by class name
    // SeqType::GetReplaceHeldLeft() const
    uint SeqType::GetReplaceHeldLeft() {
        return m_replaceHeldLeft;
    }

    // 0x100496ee0, 16 bytes, inline, placed by class name
    // SeqType::GetReplaceHeldRight() const
    uint SeqType::GetReplaceHeldRight() {
        return m_replaceHeldRight;
    }

    // 0x1004de440, 112 bytes, inline, placed by class name
    // SeqType::GetSeqSounds() const
    void SeqType::GetSeqSounds() {
        undefined1* this_00;
        shared_ptr local_28;

        this_00 = field_1768;
        if (!this_00->operator_cast_to_bool()) {
            make_shared<SeqTypeSounds>((jag*)&local_28);
            shared_ptr<SeqTypeSounds>::operator=((shared_ptr<SeqTypeSounds>*)this_00, &local_28);
            local_28.~shared_ptr();
        }
        shared_ptr<SeqTypeSounds>::operator*((shared_ptr<SeqTypeSounds>*)this_00);
    }

    // 0x1004df330, 16 bytes, inline, placed by class name
    // SeqType::IsKeyFramed()
    bool SeqType::IsKeyFramed() {
        return field_1720 != 4294967295;
    }

    // 0x1004df9d0, 16 bytes, complete-object destructor, inline, placed by class name
    // SeqType::GetAnimation(AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0::~$_0(): jumps straight to the base-object destructor

    // 0x1004e1c80, 16 bytes, base-object destructor, inline, placed by class name
    // SeqType::GetAnimation(AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0::~$_0()
    /* ~$_0() */

    void SeqType::GetAnimation(AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&, unsigned int,
                               shared_ptr<graphics::Model> const&)::$_0::~__0() {
        ((this + 16))->~shared_ptr();
    }

    // 0x1004e77a0, 16 bytes, complete-object constructor, inline, placed by class name
    // SeqType::GetAnimation(AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0::$_0($_0&&): jumps straight to the base-object constructor

    // 0x1004e77b0, 64 bytes, base-object constructor, inline, placed by class name
    // SeqType::GetAnimation(AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0::$_0($_0&&)
    /* $_0($_0&&) */

    void SeqType::GetAnimation(AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&, unsigned int,
                               shared_ptr<graphics::Model> const&)::$_0::__0(__0* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)(this + 16), (shared_ptr*)(param_1 + 16));
        *(undefined4*)(this + 40) = *(undefined4*)(param_1 + 40);
        *(undefined8*)(this + 32) = *(undefined8*)(param_1 + 32);
    }

    // 0x1004e78c0, 624 bytes, inline, placed by class name
    // SeqType::GetAnimation(AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0::operator()() const
    /* SeqType::GetAnimation(AssetBuilder&,
   BuildRequest<graphics::Animation, BuildAnimationMain>&, unsigned int,
   shared_ptr<graphics::Model> const&)::$_0::TEMPNAMEPLACEHOLDERVALUE() const */

    void SeqType::GetAnimation(AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&, unsigned int,
                               shared_ptr<graphics::Model> const&)::$_0::operator()() {
        shared_ptr<graphics::AnimKeyFrameSet>* this_00;
        undefined4 uVar1;
        __0* p_Var2;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar3;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* pvVar4;
        ulong uVar5;
        ulong uVar6;
        Array<graphics::AnimCurveSegmentCacheData, BucketAllocatorEASTL>* this_01;
        vector<eastl::vector<graphics::AnimCurve, eastl::allocator>, eastl::allocator>* this_02;
        vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>* this_03;
        Array* pAVar7;
        WrapArray<graphics::AnimCurveSegmentCacheData>* this_04;
        RT7Core* this_05;
        MakeSharedPool<graphics::AnimationFrameRT5, 20480>* this_06;
        shared_ptr* psVar8;
        shared_ptr<graphics::AnimationFrameRT5>* this_07;
        undefined4* puVar9;
        float* in_R9;
        shared_ptr local_a0;
        Array<Array<graphics::AnimCurveSegmentCacheData, BucketAllocatorEASTL>, BucketAllocatorEASTL> local_90[24];
        WrapArray<unsigned char const> local_78[16];
        Array<WrapArray<graphics::AnimCurveSegmentCacheData>, BucketAllocatorEASTL> local_68[24];
        Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>* local_50;
        __0* local_48;
        float local_3c;
        Array<unsigned int, eastl::allocator>* local_38;

        local_38 = *(Array<unsigned int, eastl::allocator>**)(this + 32);
        this_00 = (shared_ptr<graphics::AnimKeyFrameSet>*)(this + 16);
        local_48 = this;
        pcVar3 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)shared_ptr<graphics::AnimKeyFrameSet>::operator->(this_00);
        pvVar4 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                         eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(pcVar3);
        uVar5 =
            eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(pvVar4);
        Array<Array<graphics::AnimCurveSegmentCacheData, BucketAllocatorEASTL>, BucketAllocatorEASTL>::Array(local_90,
                                                                                                             uVar5);
        pcVar3 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)shared_ptr<graphics::AnimKeyFrameSet>::operator->(this_00);
        pvVar4 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                         eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(pcVar3);
        uVar5 =
            eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(pvVar4);
        Array<WrapArray<graphics::AnimCurveSegmentCacheData>, BucketAllocatorEASTL>::Array(local_68, uVar5);
        uVar5 = 0;
        while (true) {
            pcVar3 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                     eastl::allocator, 0>*)shared_ptr<graphics::AnimKeyFrameSet>::operator->(this_00);
            pvVar4 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                             eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(pcVar3);
            uVar6 = eastl::vector<
                Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(pvVar4);
            if (uVar6 <= uVar5)
                break;
            this_01 = (Array<graphics::AnimCurveSegmentCacheData, BucketAllocatorEASTL>*)
                Array<Array<graphics::AnimCurveSegmentCacheData, BucketAllocatorEASTL>,
                      BucketAllocatorEASTL>::operator[](local_90, uVar5);
            pcVar3 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                     eastl::allocator, 0>*)shared_ptr<graphics::AnimKeyFrameSet>::operator->(this_00);
            this_02 = (vector<eastl::vector<graphics::AnimCurve, eastl::allocator>, eastl::allocator>*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(pcVar3);
            this_03 = (vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>*)
                eastl::vector<eastl::vector<graphics::AnimCurve, eastl::allocator>, eastl::allocator>::operator[](
                    this_02, uVar5);
            uVar6 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(this_03);
            this_01->set_max_size(uVar6, 0);
            pAVar7 = (Array*)Array<Array<graphics::AnimCurveSegmentCacheData, BucketAllocatorEASTL>,
                                   BucketAllocatorEASTL>::operator[](local_90, uVar5);
            WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_78, pAVar7);
            this_04 = (WrapArray<graphics::AnimCurveSegmentCacheData>*)
                Array<WrapArray<graphics::AnimCurveSegmentCacheData>, BucketAllocatorEASTL>::operator[](local_68,
                                                                                                        uVar5);
            WrapArray<graphics::AnimCurveSegmentCacheData>::operator=(this_04, local_78);
            uVar5 = uVar5 + 1;
        }
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_78, (Array*)local_68);
        p_Var2 = local_48;
        uVar5 = *(ulong*)local_48;
        if (uVar5 < *(ulong*)(local_48 + 8)) {
            local_50 = (Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>*)(local_38 + 1816);
            local_38 = local_38 + 1696;
            do {
                this_05 = (RT7Core*)shared_ptr<graphics::AnimKeyFrameSet>::operator->(this_00);
                this_06 = (MakeSharedPool<graphics::AnimationFrameRT5, 20480>*)this_05->GetMSAASampleCount();
                psVar8 = (shared_ptr*)this_00->end();
                local_3c = (float)uVar5;
                MakeSharedPool<graphics::AnimationFrameRT5,
                               20480>::MakeShared<shared_ptr<graphics::AnimBase> const&, graphics::AnimKeyFrameSet&,
                                                  WrapArray<WrapArray<graphics::AnimCurveSegmentCacheData>>&, float>(
                    &local_a0, this_06, psVar8, (AnimKeyFrameSet*)local_78, (WrapArray*)&local_3c, in_R9);
                this_07 = (shared_ptr<graphics::AnimationFrameRT5>*)
                    Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>::operator[](local_50, uVar5);
                shared_ptr<graphics::AnimationFrameRT5>::operator=(this_07, &local_a0);
                local_a0.~shared_ptr();
                uVar1 = *(undefined4*)(p_Var2 + 40);
                puVar9 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](local_38, uVar5);
                *puVar9 = uVar1;
                uVar5 = uVar5 + 1;
            } while (uVar5 < *(ulong*)(p_Var2 + 8));
        }
        local_68->~Array();
        local_90->~Array();
    }

    // 0x1004ebab0, 16 bytes, complete-object constructor, inline, placed by class name
    // SeqType::SeqType(BaseTemplateConfigTypeList<SeqType>*, int): jumps straight to the base-object constructor

    // 0x1004ebac0, 384 bytes, base-object constructor, inline, placed by class name
    // SeqType::SeqType(BaseTemplateConfigTypeList<SeqType>*, int)
    void SeqType::SeqType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<SeqType>(param_1, param_2);
        new (this) MakeSharedPool<SeqType, 96>();
        field_0 = &PTR__SeqType_100f02488;
        new (&field_56, 16, "SeqType") AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>();
        new (m_seqGroup, (_func_decltype_nullptr*)16) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_1648) Array<unsigned int, eastl::allocator>();
        new (&field_1672) Array<unsigned int, eastl::allocator>();
        new (&field_1696) Array<unsigned int, eastl::allocator>();
        field_1720 = 4294967295;
        m_loops = 4294967295;
        m_priority = 5;
        m_replaceHeldLeft = 4294967295;
        m_replaceHeldRight = 4294967295;
        m_maxLoops = 99;
        field_1744 = 0;
        field_1748 = 0;
        m_preanimMove = 4;
        m_postanimMove = 3;
        m_duplicateBehaviour = 2;
        new (field_1768, (_func_decltype_nullptr*)16) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_1784) eastl::vector<std::future<void>, eastl::allocator>();
        new (&field_1816) Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>();
    }

    // 0x100658050, 16 bytes, inline, placed by class name
    // SeqType::GetLoops() const
    uint SeqType::GetLoops() {
        return m_loops;
    }

    // 0x100658060, 16 bytes, inline, placed by class name
    // SeqType::GetMaxLoops() const
    uint SeqType::GetMaxLoops() {
        return m_maxLoops;
    }

    // 0x1006584d0, 16 bytes, inline, placed by class name
    // SeqType::GetSeqGroup() const
    undefined1* SeqType::GetSeqGroup() {
        return m_seqGroup;
    }

    // 0x100658560, 32 bytes, inline, placed by class name
    // SeqType::HasSounds() const
    bool SeqType::HasSounds() {
        long lVar1;

        lVar1 = field_1768->end();
        return lVar1 != 0;
    }

    // 0x100658580, 64 bytes, inline, placed by class name
    // SeqType::GetSounds() const
    void SeqType::GetSounds() {
        if (HasSounds(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("HasSounds()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "seqtype/SeqType.h",
                      90, (char*)0);
        }
        GetSeqSounds(this);
    }

    // 0x100658640, 80 bytes, inline, placed by class name
    // SeqType::GetVolume(int) const
    undefined1 SeqType::GetVolume(int param_1) {
        int iVar1;
        long lVar2;
        undefined1* puVar3;
        undefined1 uVar4;

        lVar2 = shared_ptr<SeqTypeSounds>::operator->((shared_ptr<SeqTypeSounds>*)field_1768);
        iVar1 = ((lVar2 + 24))->end();
        uVar4 = 255;
        if (param_1 < iVar1) {
            lVar2 = shared_ptr<SeqTypeSounds>::operator->((shared_ptr<SeqTypeSounds>*)field_1768);
            puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)(lVar2 + 24), (long)param_1);
            uVar4 = *puVar3;
        }
        return uVar4;
    }

    // 0x1006586e0, 80 bytes, inline, placed by class name
    // SeqType::GetTertiaryVolumeFactor() const
    undefined4 SeqType::GetTertiaryVolumeFactor() {
        long lVar2;

        if (HasSounds(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("HasSounds()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "seqtype/SeqType.h",
                      96, (char*)0);
        }
        lVar2 = shared_ptr<SeqTypeSounds>::operator->((shared_ptr<SeqTypeSounds>*)field_1768);
        return *(undefined4*)(lVar2 + 96);
    }

    // 0x100668b70, 16 bytes, inline, placed by class name
    // SeqType::GetPreanimMove() const
    uint SeqType::GetPreanimMove() {
        return m_preanimMove;
    }

    // 0x100668b80, 16 bytes, inline, placed by class name
    // SeqType::GetPostanimMove() const
    uint SeqType::GetPostanimMove() {
        return m_postanimMove;
    }

} // namespace jag::game
