// libs/graphics/runetek7/animation/Animation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "Animation.h"

namespace jag::graphics {
    // 0x100009d50: Animation::GetFrames() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100023af0: Animation::IsConstructed() const has the same machine code as hal::Haptics::GetEnabled() const

    // 0x10002d850: Animation::GetRT5Frames() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x1000b7910: Animation::GetFrameDelays() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectName() const

    // 0x1000b7a80: Animation::GetAnimationLength() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetObjCount() const

    // 0x100102fc0: Animation::GetFrameStartTimes() const has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x10018b530: Animation::GetRT5FrameCount() const has the same machine code as oldscape::jagex3::Js5::GetGroupIdLimit() const

    // 0x1001fb280: Animation::GetAnimKeyFrameSet() const has the same machine code as http::CRMData::GetActionInfo() const

    // 0x1003cf2c0: Animation::GetMaximumUsedBoneID() const has the same machine code as game::MapElementType::GetTextRGBA() const

    // 0x1009863f0
    Animation::Animation(const Array<shared_ptr<AnimationFrameRT5>>& animationFrameRT5s, Array<unsigned int>& arg2,
                         const Array<LabelData, BucketAllocatorEASTL>& labelDatas,
                         shared_ptr<AnimKeyFrameSet> animKeyFrameSet)
        : MakeSharedPool<Animation, 512>() {
        m_constructed = '\0';
        uint8_t* local_50 = &field_8;
        new (local_50) Array<shared_ptr<AnimationFrameRT7>>();
        new (&field_32) Array<shared_ptr<AnimationFrameRT5>>();
        uint8_t* local_48 = &field_32;
        new (&field_56) Array<unsigned int>();
        uint8_t* local_40 = &field_56;
        new (&field_80) Array<unsigned int>();
        m_animationLength = -1;
        m_animatesTransparency = 0;
        m_animatedColourType = '\x02';
        m_animatesBillboards = 0;
        uint8_t* local_38 = &field_80;
        new (m_animKeyFrameSet) shared_ptr();
        m_maximumUsedBoneID = -1;
        new (&field_136) eastl::vector<std::future<void>>();
        new (&field_168) Array<AnimKeyFrameSample>();
        shared_ptr<oldscape::dash3d::Decor> local_78(animKeyFrameSet);
        ConstructAnimation(animationFrameRT5s, arg2, labelDatas, &local_78);
    }

    // 0x1009865e0
    void Animation::ConstructAnimation(const Array<shared_ptr<AnimationFrameRT5>>& animationFrameRT5s,
                                       const Array<unsigned int>& arg2,
                                       const Array<LabelData, BucketAllocatorEASTL>& labelDatas,
                                       shared_ptr<AnimKeyFrameSet> animKeyFrameSet) {
        if (m_constructed != '\0') {
            LogAssert("!m_constructed",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/Animation.cpp",
                      42, nullptr);
        }
        if (*animKeyFrameSet != nullptr) {
            StoreRT5Frames(animationFrameRT5s, arg2);
            ConstructFromAnimKeyFrameSet(*animKeyFrameSet);
        } else {
            ConstructFromRT5Frames(animationFrameRT5s, arg2, labelDatas);
        }
    }

    // 0x1009866a0
    Animation::Animation(const shared_ptr<AnimKeyFrameSet>& animKeyFrameSet) : MakeSharedPool<Animation, 512>() {
        m_constructed = '\0';
        new (&field_8) Array<shared_ptr<AnimationFrameRT7>>();
        new (&field_32) Array<shared_ptr<AnimationFrameRT5>>();
        new (&field_56) Array<unsigned int>();
        new (&field_80) Array<unsigned int>();
        m_animationLength = -1;
        m_animatesTransparency = 0;
        m_animatedColourType = '\x02';
        m_animatesBillboards = 0;
        uint8_t* this_00 = m_animKeyFrameSet;
        new (this_00) shared_ptr();
        m_maximumUsedBoneID = -1;
        new (&field_136) eastl::vector<std::future<void>>();
        new (&field_168) Array<AnimKeyFrameSample>();
        *this_00 = animKeyFrameSet;
        bool cVar2 = ((NPCTypeList*)(*this_00).operator->())->IsMembersServer();
        m_animatedColourType = '\x02' - cVar2;
        AnimKeyFrameSet* pAVar1 = (AnimKeyFrameSet*)(*this_00).operator->();
        m_animatesTransparency = pAVar1->GetAnimatesTransparency();
        pAVar1 = (AnimKeyFrameSet*)(*this_00).operator->();
        m_animationLength = pAVar1->GetDuration();
        m_constructed = '\x01';
    }

    // 0x1009868b0
    Animation::~Animation() {
        uint8_t* this_00 = &field_136;
        auto this_01 = this_00->HeapBeginPtr();
        auto pfVar1 = this_00->end();
        for (; this_01 != pfVar1; this_01 = this_01 + 8) {
            this_01->wait();
        }
        field_168.~Array();
        this_00->~vector();
        m_animKeyFrameSet->~shared_ptr();
        field_80.~Array();
        field_56.~Array();
        field_32.~Array();
        field_8.~Array();
    }

    // 0x1009869c0
    void Animation::StoreRT5Frames(const Array<shared_ptr<AnimationFrameRT5>>& animationFrameRT5s,
                                   const Array<unsigned int>& arg2) {
        bool bVar1;
        int* piVar4;
        shared_ptr<AnimationFrameRT5>* animationFrameRT5;
        shared_ptr<AnimationFrameRT5>* this_00;
        unsigned long uVar6;

        unsigned long uVar2 = animationFrameRT5s.end();
        int iVar5 = 0;
        field_32.set_max_size(uVar2, 0);
        field_56 = arg2;
        uVar2 = animationFrameRT5s.end();
        field_80.set_max_size(uVar2, 0);
        if (animationFrameRT5s.end() != 0) {
            uVar2 = 0;
            uVar6 = 1;
            do {
                piVar4 = &field_80[uVar2];
                *piVar4 = iVar5;
                piVar4 = &arg2[uVar2];
                iVar5 = iVar5 + *piVar4;
                animationFrameRT5 = (shared_ptr<AnimationFrameRT5>*)animationFrameRT5s[uVar2];
                this_00 = &field_32[uVar2];
                *this_00 = *animationFrameRT5;
                uVar2 = animationFrameRT5s.end();
                bVar1 = uVar6 < uVar2;
                uVar2 = uVar6;
                uVar6 = (unsigned long)((int)uVar6 + 1);
            } while (bVar1);
        }
    }

    // 0x100986ab0
    void Animation::ConstructFromAnimKeyFrameSet(const shared_ptr<AnimKeyFrameSet>& animKeyFrameSet) {
        uint64_t uVar1;
        uint64_t uVar2;
        uint64_t* puVar10;
        char* str;
        vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>* this_03;
        uint64_t local_a8;
        uint64_t local_a0;
        shared_ptr<oldscape::dash3d::Decor> local_98;
        Animation* local_88;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL> local_80[24];
        ReturnValue local_68;
        Animation* local_58;
        vector<std::future<void>>* local_50;

        shared_ptr<oldscape::dash3d::Decor> local_40(animKeyFrameSet);
        auto pAVar6 = animKeyFrameSet.operator->();
        float fVar12 = (float)pAVar6->GetEnd();
        int local_44 = (int)(fVar12 + 1.0);
        unsigned int local_48 = 1;
        unsigned long uVar11 = (unsigned long)local_44;
        field_168.set_max_size(uVar11, 1);
        uint8_t* this_00 = &field_56;
        this_00->set_max_size(uVar11, 1);
        auto this_01 = this_00->data();
        auto arg2 = this_00->end();
        std::fill<unsigned int*, unsigned int>(this_01, arg2, local_48);
        auto pLVar7 = this_01->Instance();
        unsigned long uVar8 = pLVar7->SSOBeginPtr();
        local_80->InitialiseWorkGroups(uVar8, uVar11);
        int iVar5 = local_80->size();
        __atomic_base* local_60 = (__atomic_base*)&field_192;
        *local_60 = iVar5;
        long lVar9 = local_80->size();
        if (lVar9 != 0) {
            local_50 = (vector<std::future<void>>*)&field_136;
            uVar8 = 0;
            local_58 = this;
            do {
                puVar10 = (uint64_t*)(*local_80)[uVar8];
                uVar1 = *puVar10;
                this_03 = (vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>*)local_80;
                lVar9 = (*local_80)[uVar8];
                uVar2 = *(uint64_t*)(lVar9 + 8);
                pLVar7 = (Layout*)this_03->Instance();
                str = (char*)pLVar7->SSOBeginPtr();
                local_a8 = uVar1;
                local_a0 = uVar2;
                local_98 = shared_ptr(&local_40);
                this = local_58;
                local_88 = local_58;
                ThreadPool::AddTask<Animation::ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&)::__2>(
                    &local_68, str, (__2*)&local_a8);
                local_50->push_back(local_68);
                ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&)::$_2::~__2((__2*)&local_a8);
                uVar8 = uVar8 + 1;
                uVar11 = local_80->size();
            } while (uVar8 < uVar11);
        }
        while (iVar5 = std::__atomic_base::operator_cast_to_int(local_60), iVar5 != 0) {
            this_thread::Sleep(0);
        }
        m_animationLength = local_44;
        *m_animKeyFrameSet = local_40;
        pAVar6 = (AnimKeyFrameSet*)local_40.operator->();
        uint8_t bVar3 = pAVar6->GetAnimatesTransparency();
        m_animatesTransparency = bVar3;
        auto this_02 = local_40.operator->();
        bool cVar4 = this_02->IsMembersServer();
        m_animatedColourType = '\x02' - cVar4;
        pAVar6 = (AnimKeyFrameSet*)local_40.operator->();
        bVar3 = pAVar6->GetAnimatesBillboards();
        m_animatesBillboards = bVar3;
        m_constructed = '\x01';
    }

    // 0x100986d40
    void Animation::ConstructFromRT5Frames(const Array<shared_ptr<AnimationFrameRT5>>& animationFrameRT5s,
                                           const Array<unsigned int>& arg2,
                                           const Array<LabelData, BucketAllocatorEASTL>& labelDatas) {
        Array<shared_ptr<AnimationFrameRT7>>* this_00;
        int iVar1;
        uint8_t bVar3;
        unsigned long uVar7;
        int* piVar8;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        shared_ptr<AnimationFrameRT5>* animationFrameRT5;
        shared_ptr<AnimationFrameRT5>* this_01;
        shared_ptr<AnimationFrameRT7>* psVar9;
        AnimationFrameRT7* pAVar10;
        unsigned int uVar11;
        uint32_t local_58[4];
        uint8_t local_31;

        unsigned long uVar5 = animationFrameRT5s.end();
        Array<shared_ptr<AnimationFrameRT7>>* local_48 = (Array<shared_ptr<AnimationFrameRT7>>*)&field_8;
        field_8.set_max_size(uVar5, 0);
        uVar5 = animationFrameRT5s.end();
        field_32.set_max_size(uVar5, 0);
        field_56 = arg2;
        uVar5 = animationFrameRT5s.end();
        field_80.set_max_size(uVar5, 0);
        int local_3c = -1;
        int local_38 = 0;
        if (animationFrameRT5s.end() != 0) {
            uVar11 = 1;
            uVar5 = 0;
            do {
                iVar1 = local_38;
                piVar8 = &field_80[uVar5];
                *piVar8 = iVar1;
                piVar8 = &arg2[uVar5];
                local_38 = local_38 + *piVar8;
                midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)animationFrameRT5s[uVar5];
                if (!*midiPlayerMainThread != nullptr) {
                    LogAssert("animFrame != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/Animation.cpp",
                              145, nullptr);
                }
                animationFrameRT5 = (shared_ptr<AnimationFrameRT5>*)animationFrameRT5s[uVar5];
                this_01 = &field_32[uVar5];
                *this_01 = *animationFrameRT5;
                local_31 = 0;
                MakeSharedPool<AnimationFrameRT7, 8192>::MakeShared<shared_ptr<AnimationFrameRT5> const&, unsigned int&,
                                                                    Array<LabelData, BucketAllocatorEASTL> const&,
                                                                    bool>(
                    (shared_ptr<AnimationFrameRT5>*)local_58, (unsigned int*)midiPlayerMainThread,
                    (Array<LabelData, BucketAllocatorEASTL>*)&local_38, (bool*)labelDatas);
                psVar9 = (shared_ptr<AnimationFrameRT7>*)(*local_48)[uVar5];
                *psVar9 = *local_58;
                this_00 = local_48;
                psVar9 = (shared_ptr<AnimationFrameRT7>*)(*local_48)[uVar5];
                pAVar10 = (AnimationFrameRT7*)(*psVar9).operator->();
                bVar3 = pAVar10->GetAnimatesTransparency();
                m_animatesTransparency = m_animatesTransparency | bVar3;
                psVar9 = (shared_ptr<AnimationFrameRT7>*)(*this_00)[uVar5];
                pAVar10 = (AnimationFrameRT7*)(*psVar9).operator->();
                bVar3 = pAVar10->GetAnimatesBillboards();
                m_animatesBillboards = m_animatesBillboards | bVar3;
                psVar9 = (shared_ptr<AnimationFrameRT7>*)(*this_00)[uVar5];
                local_58[0] = ((WorldmapAreaMetadata*)(*psVar9).operator->())->GetMaxMapZ();
                piVar8 = std::max<int>(local_3c, *local_58);
                local_3c = *piVar8;
                psVar9 = (shared_ptr<AnimationFrameRT7>*)(*this_00)[uVar5];
                pAVar10 = (AnimationFrameRT7*)(*psVar9).operator->();
                if (pAVar10->GetAnimatesColour() != '\0') {
                    m_animatedColourType = '\0';
                }
                uVar5 = (unsigned long)uVar11;
                uVar7 = animationFrameRT5s.end();
                uVar11 = uVar11 + 1;
            } while (uVar5 < uVar7);
        }
        m_maximumUsedBoneID = local_3c;
        m_animationLength = local_38;
        new (local_58) shared_ptr();
        *m_animKeyFrameSet = *local_58;
        m_constructed = '\x01';
    }

} // namespace jag::graphics
