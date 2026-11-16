// libs/graphics/runetek7/animation/asm/LayeredAnimationStateMachine.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class LayeredAnimationStateMachine {
    public:
        class LayerBlendInfo;
        // virtual methods in vtable order
        virtual ~LayeredAnimationStateMachine();
        virtual void GetBoneTransforms(
            WrapArray<math::Matrix43T<float>>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            math::Matrix44T<float> const&) const;
        virtual void ApplyBoneTransforms(
            math::Vector3T<float>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            math::Matrix44T<float> const&) const;
        virtual void GetLabelData(
            WrapArray<float>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            AnimationLabelType) const;
        virtual void UpdateFromCurrentTime(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&);
        virtual GetAnimatesTransparency() const;
        virtual GetAnimatedColourType() const;
        virtual void Update(unsigned int);
        virtual void DebugOutputToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const;
        void SetupBlendTreeAnimationSampler();
        void SetupBasicAnimationSampler();
        LayeredAnimationStateMachine(eastl::vector<AnimationStateMachine, eastl::allocator>&&,
                                     eastl::vector<LayerBlendInfo, eastl::allocator>&&,
                                     shared_ptr<AnimationResourceManager> const&);

        // data members, from how the methods use this: 6516880 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        long* field_112;                     // offset 112
        BlendTreeAnimationSampler field_120; // offset 120
        char _unknown_209[311];
        WalkMergeAnimationSampler field_520; // offset 520
    };

    class LayeredAnimationStateMachine::LayerBlendInfo {
    public:
        class LayerWalkMergeData;
        bool IsTransitioningOut() const;
        bool IsTransitioningIn() const;
        ~LayerBlendInfo();
        LayerBlendInfo(LayerBlendInfo&&);
        LayerBlendInfo(LayeredAnimationStateMachineBlendType, float*, unsigned long long, unsigned long long,
                       shared_ptr<LayerWalkMergeData> const&);

        // data members, from how the methods use this: 84 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[4];
        undefined8 field_8; // offset 8
        long field_16;      // offset 16
        long field_24;      // offset 24
        char _unknown_32[24];
        long field_56;       // offset 56
        long field_64;       // offset 64
        undefined1 field_72; // offset 72
        char _unknown_73[3];
        undefined8 field_76; // offset 76
    };

    class LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData {
    public:
        // virtual methods in vtable order
        virtual ~LayerWalkMergeData();
        virtual GetTransformMask() const;
        virtual GetJointWeights() const;
        LayerWalkMergeData(Array<bool, eastl::allocator>&&, Array<float, eastl::allocator>&&);

        // data members, from how the methods use this: 40 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[32];
    };

    // 0x10095e640, 48 bytes, inline, placed by class name and debug map
    // LayeredAnimationStateMachine::LayerBlendInfo::IsTransitioningOut() const
    bool LayeredAnimationStateMachine::LayerBlendInfo::IsTransitioningOut() {
        long lVar1;
        long lVar2;
        Layout* this_00;

        lVar1 = field_24;
        lVar2 = field_64;
        this_00 = (Layout*)Instance();
        return eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                   Layout::HeapBeginPtr(this_00) < (ulong)(lVar1 + lVar2);
    }

    // 0x10095e670, 48 bytes, inline, placed by class name and debug map
    // LayeredAnimationStateMachine::LayerBlendInfo::IsTransitioningIn() const
    bool LayeredAnimationStateMachine::LayerBlendInfo::IsTransitioningIn() {
        long lVar1;
        long lVar2;
        Layout* this_00;

        lVar1 = field_16;
        lVar2 = field_56;
        this_00 = (Layout*)Instance();
        return eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                   Layout::HeapBeginPtr(this_00) < (ulong)(lVar1 + lVar2);
    }

    // 0x100960b30, 16 bytes, complete-object destructor, inline, placed by class name
    // LayeredAnimationStateMachine::~LayeredAnimationStateMachine(): jumps straight to the base-object destructor

    // 0x100960b40, 32 bytes, deleting destructor, inline, placed by class name
    // LayeredAnimationStateMachine::~LayeredAnimationStateMachine()
    void LayeredAnimationStateMachine::~LayeredAnimationStateMachine() {
        ~LayeredAnimationStateMachine(this);
        operator_delete(this);
    }

    // 0x100961350, 16 bytes, complete-object destructor, inline, placed by class name
    // LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData::~LayerWalkMergeData(): jumps straight to the base-object destructor

    // 0x100961360, 32 bytes, deleting destructor, inline, placed by class name
    // LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData::~LayerWalkMergeData()
    void LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData::~LayerWalkMergeData() {
        ~LayerWalkMergeData(this);
        operator_delete(this);
    }

    // 0x100963a00, 112 bytes, base-object destructor, inline, placed by class name
    // LayeredAnimationStateMachine::~LayeredAnimationStateMachine()
    void LayeredAnimationStateMachine::~LayeredAnimationStateMachine() {
        field_0 = &PTR__LayeredAnimationStateMachine_100f1b438;
        field_520->~WalkMergeAnimationSampler();
        (&field_368)->~SampledPoseAnimationSampler();
        (&field_216)->~RT5AnimationSampler();
        field_120->~BlendTreeAnimationSampler();
        (&field_88)->~shared_ptr();
        (&field_56)->~vector();
        (&field_24)->~vector();
        ~AnimationStateSystem();
    }

    // 0x1009668a0, 16 bytes, complete-object destructor, inline, placed by class name
    // LayeredAnimationStateMachine::LayerBlendInfo::~LayerBlendInfo(): jumps straight to the base-object destructor

    // 0x1009668b0, 48 bytes, base-object destructor, inline, placed by class name
    // LayeredAnimationStateMachine::LayerBlendInfo::~LayerBlendInfo()
    void LayeredAnimationStateMachine::LayerBlendInfo::~LayerBlendInfo() {
        (&field_48)->~unique_ptr();
        (&field_32)->~shared_ptr();
    }

    // 0x1009745f0, 16 bytes, inline, placed by class name
    // auto LayeredAnimationStateMachine::UpdateFromCurrentTime(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_10::operator()<AnimationStateMachine>(AnimationStateMachine&) const
    /* auto 
   LayeredAnimationStateMachine::UpdateFromCurrentTime(Array<LabelData,
   eastl::allocator> const&, math::Matrix44T<float>
   const&)::$_10::TEMPNAMEPLACEHOLDERVALUE(AnimationStateMachine&) const */

    void LayeredAnimationStateMachine::UpdateFromCurrentTime(
        Array<LabelData, eastl::allocator> const&,
        math::Matrix44T<float> const&)::$_10::operator()(AnimationStateMachine* param_1) {
        ResourcesLoaded();
    }

    // 0x1009751c0, 16 bytes, complete-object constructor, inline, placed by class name
    // LayeredAnimationStateMachine::LayerBlendInfo::LayerBlendInfo(LayeredAnimationStateMachine::LayerBlendInfo&&): jumps straight to the base-object constructor

    // 0x1009751d0, 80 bytes, base-object constructor, inline, placed by class name
    // LayeredAnimationStateMachine::LayerBlendInfo::LayerBlendInfo(LayeredAnimationStateMachine::LayerBlendInfo&&)
    void LayeredAnimationStateMachine::LayerBlendInfo::LayerBlendInfo(LayerBlendInfo* param_1) {
        undefined8 uVar1;
        long lVar2;
        long lVar3;
        undefined4 uVar4;
        undefined4 uVar5;

        uVar4 = param_1->field_0;
        uVar5 = *(undefined4*)&param_1->field_4;
        uVar1 = param_1->field_8;
        lVar2 = param_1->field_24;
        field_16 = param_1->field_16;
        field_24 = lVar2;
        field_0 = uVar4;
        *(undefined4*)&field_4 = uVar5;
        field_8 = uVar1;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_32, (shared_ptr*)&param_1->field_32);
        new (&field_48, (unique_ptr*)&param_1->field_48)
            std::unique_ptr<SimpleTwoNodeBlendTreeNode<float>,
                            std::default_delete<SimpleTwoNodeBlendTreeNode<float>>>();
        lVar2 = param_1->field_56;
        lVar3 = param_1->field_64;
        uVar1 = param_1->field_76;
        *(undefined8*)((long)&field_64 + 4) = *(undefined8*)((long)&param_1->field_64 + 4);
        field_76 = uVar1;
        field_56 = lVar2;
        field_64 = lVar3;
    }

    // 0x1009753d0, 16 bytes, complete-object constructor, inline, placed by class name
    // LayeredAnimationStateMachine::LayerBlendInfo::LayerBlendInfo(LayeredAnimationStateMachineBlendType, float*, unsigned long long, unsigned long long, shared_ptr<LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData> const&): jumps straight to the base-object constructor

    // 0x100975570, 80 bytes, base-object constructor, inline, placed by class name
    // LayeredAnimationStateMachine::LayerBlendInfo::LayerBlendInfo(LayeredAnimationStateMachineBlendType, float*, unsigned long long, unsigned long long, shared_ptr<LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData> const&)
    void LayeredAnimationStateMachine::LayerBlendInfo::LayerBlendInfo(undefined4 param_2, undefined8 param_3,
                                                                      long param_4, long param_5, shared_ptr* param_6) {
        field_0 = param_2;
        field_8 = param_3;
        field_16 = param_4;
        field_24 = param_5;
        new (&field_32, param_6) shared_ptr<oldscape::dash3d::Decor>();
        std::unique_ptr<SimpleTwoNodeBlendTreeNode<float>, std::default_delete<SimpleTwoNodeBlendTreeNode<float>>>::
            unique_ptr<true, void>((unique_ptr<SimpleTwoNodeBlendTreeNode<float>,
                                               std::default_delete<SimpleTwoNodeBlendTreeNode<float>>>*)&field_48);
        field_56 = 0;
        field_64 = 0;
        field_72 = 0;
        field_76 = 4294967295;
    }

    // 0x100975650, 16 bytes, complete-object constructor, inline, placed by class name
    // LayeredAnimationStateMachine::LayeredAnimationStateMachine(eastl::vector<AnimationStateMachine, eastl::allocator>&&, eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>&&, shared_ptr<AnimationResourceManager> const&): jumps straight to the base-object constructor

    // 0x100975660, 496 bytes, base-object constructor, inline, placed by class name
    // LayeredAnimationStateMachine::LayeredAnimationStateMachine(eastl::vector<AnimationStateMachine, eastl::allocator>&&, eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>&&, shared_ptr<AnimationResourceManager> const&)
    void LayeredAnimationStateMachine::LayeredAnimationStateMachine(vector* param_1, vector* param_2,
                                                                    shared_ptr* param_3) {
        undefined1* this_00;
        uint* puVar1;
        uint* puVar2;
        unique_ptr local_88[8];
        LayeredAnimationStateMachine* local_80;
        undefined1* local_78;
        undefined1* local_70;
        undefined1* local_68;
        undefined1* local_60;
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        undefined4 local_3c;
        undefined4 local_38;
        float local_34;

        new (this) AnimationStateSystem();
        field_0 = &PTR__LayeredAnimationStateMachine_100f1b438;
        new (&field_24, param_1) eastl::vector<AnimationStateMachine, eastl::allocator>();
        this_00 = &field_56;
        new (this_00) eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>(param_2);
        local_80 = this;
        local_78 = &field_24;
        local_70 = this_00;
        new (&field_88, param_3) shared_ptr<oldscape::dash3d::Decor>();
        new (&field_104) math::Vector2T<int>();
        field_112 = (long*)0;
        local_60 = field_120;
        local_68 = &field_88;
        new (local_60) BlendTreeAnimationSampler();
        local_58 = &field_216;
        new (local_58) RT5AnimationSampler();
        local_50 = &field_368;
        new (local_50) SampledPoseAnimationSampler();
        local_48 = field_520;
        new (local_48) WalkMergeAnimationSampler();
        field_520[752] = 0;
        puVar1 = (uint*)this_00->HeapBeginPtr();
        puVar2 = (uint*)this_00->end();
        if (puVar1 != puVar2) {
            do {
                if (*puVar1 < 2) {
                    local_34 = 0.0;
                    local_3c = 1065353216;
                    local_38 = 0;
                    std::make_unique<SimpleTwoNodeBlendTreeNode<float>, float, float, float*&,
                                     TwoNodeBlendTreeNodeBlendType>((float*)local_88, &local_34, (float**)&local_3c,
                                                                    (TwoNodeBlendTreeNodeBlendType*)(puVar1 + 2));
                LAB_10097577b:
                    std::unique_ptr<SimpleTwoNodeBlendTreeNode<float>,
                                    std::default_delete<SimpleTwoNodeBlendTreeNode<float>>>::
                    operator=((unique_ptr<SimpleTwoNodeBlendTreeNode<float>,
                                          std::default_delete<SimpleTwoNodeBlendTreeNode<float>>>*)(puVar1 + 12),
                              local_88);
                    local_88->~unique_ptr();
                } else if (*puVar1 == 2) {
                    local_34 = 0.0;
                    local_3c = 1065353216;
                    local_38 = 1;
                    std::make_unique<SimpleTwoNodeBlendTreeNode<float>, float, float, float*&,
                                     TwoNodeBlendTreeNodeBlendType>((float*)local_88, &local_34, (float**)&local_3c,
                                                                    (TwoNodeBlendTreeNodeBlendType*)(puVar1 + 2));
                    goto LAB_10097577b;
                }
                puVar1 = puVar1 + 22;
            } while (puVar1 != puVar2);
        }
    }

    // 0x100975e30, 64 bytes, base-object destructor, inline, placed by class name
    // LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData::~LayerWalkMergeData()
    void LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData::~LayerWalkMergeData() {
        field_0 = PTR_vtable_100ee88b0 + 16;
        (&field_32)->~Array();
        (&field_8)->~Array();
        ~AutoSingleton();
    }

} // namespace jag::graphics
