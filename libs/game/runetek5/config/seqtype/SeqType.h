// libs/game/runetek5/config/seqtype/SeqType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class SeqType {
    public:
        // virtual methods in vtable order
        virtual ~SeqType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        unsigned int GetDuplicateBehaviour() const;
        unsigned int GetPriority() const;
        unsigned int GetReplaceHeldLeft() const;
        unsigned int GetReplaceHeldRight() const;
        void GetSeqSounds() const;
        SeqTypeList* GetAnimation(AssetBuilder& assetBuilder,
                                  BuildRequest<graphics::Animation, BuildAnimationMain>& buildRequest,
                                  unsigned int arg3, const shared_ptr<graphics::Model>& model);
        bool IsKeyFramed();
        unsigned long CheckFramesets();
        void CleanCache();
        int GetRandomRateForSound(unsigned int arg1) const;
        bool IsBlockingMovement(int arg1);
        SeqType(BaseTemplateConfigTypeList<SeqType>* baseTemplateConfigTypeList, int arg2);
        unsigned int GetLoops() const;
        unsigned int GetMaxLoops() const;
        shared_ptr GetSeqGroup() const;
        bool HasSounds() const;
        void GetSounds() const;
        uint8_t GetVolume(int arg1) const;
        uint32_t GetTertiaryVolumeFactor() const;
        unsigned int GetPreanimMove() const;
        unsigned int GetPostanimMove() const;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullSeqType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<SeqType>* field_24;
        int field_32;
        uint8_t _unknown_36[4];
        shared_ptr field_40;
        uint8_t _unknown_56[1576];
        shared_ptr m_seqGroup;
        uint8_t _unknown_1648[72];
        unsigned int field_1720;
        unsigned int m_loops;
        unsigned int m_priority;
        unsigned int m_replaceHeldLeft;
        unsigned int m_replaceHeldRight;
        unsigned int m_maxLoops;
        unsigned int field_1744;
        unsigned int field_1748;
        unsigned int m_preanimMove;
        unsigned int m_postanimMove;
        unsigned int m_duplicateBehaviour;
        uint8_t _unknown_1764[4];
        shared_ptr field_1768;
        uint8_t _unknown_1784[40];
    };

    class SeqTypeSounds {
    public:
        SeqTypeSounds();
        ~SeqTypeSounds();

    private:
        uint8_t _unknown_0[96];
        uint32_t field_96;
        uint8_t _unknown_100[4];
    };

    // 0x1003f69f0
    unsigned int SeqType::GetDuplicateBehaviour() const {
        return m_duplicateBehaviour;
    }

    // 0x1003f6a80
    unsigned int SeqType::GetPriority() const {
        return m_priority;
    }

    // 0x100496da0
    unsigned int SeqType::GetReplaceHeldLeft() const {
        return m_replaceHeldLeft;
    }

    // 0x100496ee0
    unsigned int SeqType::GetReplaceHeldRight() const {
        return m_replaceHeldRight;
    }

    // 0x1004de440
    void SeqType::GetSeqSounds() const {
        ReturnValue local_28;

        uint8_t* this_00 = field_1768;
        if (this_00->operator_cast_to_bool() == '\0') {
            make_shared<SeqTypeSounds>(&local_28);
            *this_00 = local_28;
        }
        **this_00;
    }

    // 0x1004df330
    bool SeqType::IsKeyFramed() {
        return field_1720 != 4294967295;
    }

    // 0x1004e1c80
    SeqType::GetAnimation(AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&, unsigned int,
                          shared_ptr<graphics::Model> const&)::$_0::~$_0() {
        ((this + 16))->~shared_ptr();
    }

    // 0x1004e77b0
    SeqType::GetAnimation(AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&, unsigned int,
                          shared_ptr<graphics::Model> const&)::$_0::$_0($_0&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        ((this + 16))->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(*((arg1 + 16)));
        *(uint32_t*)(this + 40) = *(uint32_t*)(arg1 + 40);
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 32);
    }

    // 0x1004e78c0
    void SeqType::GetAnimation(AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&, unsigned int,
                               shared_ptr<graphics::Model> const&)::$_0::operator()() const {
        uint32_t uVar1;
        unsigned long uVar6;
        Array<graphics::AnimCurveSegmentCacheData, BucketAllocatorEASTL>* this_01;
        vector<eastl::vector<graphics::AnimCurve>>* this_02;
        Array<graphics::Joint>* joints;
        WrapArray<graphics::AnimCurveSegmentCacheData>* this_04;
        RT7Core* this_05;
        AnimKeyFrameSet* animKeyFrameSet;
        WrapArray<WrapArray<graphics::AnimCurveSegmentCacheData> _>* wrapArray;
        shared_ptr<graphics::AnimationFrameRT5>* this_06;
        uint32_t* puVar7;
        shared_ptr<graphics::AnimBase> local_a0;
        WrapArray<unsigned char const> local_78;
        Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>* local_50;
        float local_3c;

        Array<unsigned int>* local_38 = *(Array<unsigned int>**)(this + 32);
        shared_ptr<graphics::AnimKeyFrameSet>* this_00 = (shared_ptr<graphics::AnimKeyFrameSet>*)(this + 16);
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar3 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_00).operator->();
        auto pvVar4 = pcVar3->second();
        unsigned long uVar5 = pvVar4->size();
        Array<Array<graphics::AnimCurveSegmentCacheData, BucketAllocatorEASTL>, BucketAllocatorEASTL> local_90(uVar5);
        pcVar3 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_00).operator->();
        pvVar4 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                         eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)pcVar3->second();
        uVar5 = pvVar4->size();
        Array<WrapArray<graphics::AnimCurveSegmentCacheData>, BucketAllocatorEASTL> local_68(uVar5);
        uVar5 = 0;
        while (true) {
            pcVar3 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_00).operator->();
            pvVar4 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                             eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)pcVar3->second();
            uVar6 = pvVar4->size();
            if (uVar6 <= uVar5)
                break;
            this_01 = &local_90[uVar5];
            pcVar3 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_00).operator->();
            this_02 = (vector<eastl::vector<graphics::AnimCurve>>*)pcVar3->second();
            uVar6 = ((vector<oldscape::dash3d::DepthBiasComputer::Node>*)(*this_02)[uVar5])->size();
            this_01->set_max_size(uVar6, 0);
            joints = &local_90[uVar5];
            local_78.WrapArray<Array<unsigned char>>(*joints);
            this_04 = &local_68[uVar5];
            *this_04 = local_78;
            uVar5 = uVar5 + 1;
        }
        local_78.WrapArray<Array<unsigned char>>(local_68);
        uVar5 = *(unsigned long*)this;
        if (uVar5 < *(unsigned long*)(this + 8)) {
            local_50 = (Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>*)(local_38 + 1816);
            local_38 = local_38 + 1696;
            do {
                this_05 = (RT7Core*)(*this_00).operator->();
                animKeyFrameSet = (AnimKeyFrameSet*)this_05->GetMSAASampleCount();
                wrapArray = (WrapArray<WrapArray<graphics::AnimCurveSegmentCacheData> _>*)this_00->end();
                local_3c = (float)uVar5;
                MakeSharedPool<graphics::AnimationFrameRT5,
                               20480>::MakeShared<shared_ptr<graphics::AnimBase> const&, graphics::AnimKeyFrameSet&,
                                                  WrapArray<WrapArray<graphics::AnimCurveSegmentCacheData>>&, float>(
                    &local_a0, animKeyFrameSet, wrapArray, &local_78);
                this_06 = (shared_ptr<graphics::AnimationFrameRT5>*)(*local_50)[uVar5];
                *this_06 = local_a0;
                uVar1 = *(uint32_t*)(this + 40);
                puVar7 = (uint32_t*)(*local_38)[uVar5];
                *puVar7 = uVar1;
                uVar5 = uVar5 + 1;
            } while (uVar5 < *(unsigned long*)(this + 8));
        }
    }

    // 0x1004ebac0
    SeqType::SeqType(BaseTemplateConfigTypeList<SeqType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<SeqType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<SeqType, 96>(), field_56(16, "SeqType"),
          field_1720(4294967295), m_loops(4294967295), m_priority(5), m_replaceHeldLeft(4294967295),
          m_replaceHeldRight(4294967295), m_maxLoops(99), field_1744(0), field_1748(0), m_preanimMove(4),
          m_postanimMove(3), m_duplicateBehaviour(2) {}

    // 0x100658050
    unsigned int SeqType::GetLoops() const {
        return m_loops;
    }

    // 0x100658060
    unsigned int SeqType::GetMaxLoops() const {
        return m_maxLoops;
    }

    // 0x1006584d0
    shared_ptr SeqType::GetSeqGroup() const {
        return m_seqGroup;
    }

    // 0x100658560
    bool SeqType::HasSounds() const {
        return field_1768->end() != 0;
    }

    // 0x100658580
    void SeqType::GetSounds() const {
        if (HasSounds() == '\0') {
            LogAssert("HasSounds()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "seqtype/SeqType.h",
                      90, nullptr);
        }
        GetSeqSounds();
    }

    // 0x100658640
    uint8_t SeqType::GetVolume(int arg1) const {
        uint8_t* puVar3;

        long lVar2 = (*field_1768).operator->();
        int iVar1 = ((lVar2 + 24))->end();
        uint8_t uVar4 = 255;
        if (arg1 < iVar1) {
            lVar2 = (*field_1768).operator->();
            puVar3 = (uint8_t*)(*((lVar2 + 24)))[(long)arg1];
            uVar4 = *puVar3;
        }
        return uVar4;
    }

    // 0x1006586e0
    uint32_t SeqType::GetTertiaryVolumeFactor() const {
        if (HasSounds() == '\0') {
            LogAssert("HasSounds()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "seqtype/SeqType.h",
                      96, nullptr);
        }
        long lVar2 = (*field_1768).operator->();
        return *(uint32_t*)(lVar2 + 96);
    }

    // 0x100668b70
    unsigned int SeqType::GetPreanimMove() const {
        return m_preanimMove;
    }

    // 0x100668b80
    unsigned int SeqType::GetPostanimMove() const {
        return m_postanimMove;
    }

} // namespace jag::game
