// libs/graphics/runetek7/animation/asm/LayeredAnimationStateMachine.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class LayeredAnimationStateMachine {
    public:
        class LayerBlendInfo;
        // virtual methods in vtable order
        virtual ~LayeredAnimationStateMachine();
        virtual void GetBoneTransforms(WrapArray<math::Matrix43T<float>>& wrapArray,
                                       const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                       const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                       const math::Matrix44T<float>& matrix44) const;
        virtual void ApplyBoneTransforms(math::Vector3T<float>& vector3,
                                         const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                         const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                         const math::Matrix44T<float>& matrix44) const;
        virtual void GetLabelData(WrapArray<float>& wrapArray,
                                  const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                  AnimationLabelType animationLabelType) const;
        virtual void UpdateFromCurrentTime(const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44);
        virtual uint64_t GetAnimatesTransparency() const;
        virtual uint8_t GetAnimatedColourType() const;
        virtual void Update(unsigned int arg1);
        virtual void DebugOutputToString(eastl::fixed_string<char, 512>& str) const;
        void SetupBlendTreeAnimationSampler();
        void SetupBasicAnimationSampler();
        LayeredAnimationStateMachine(eastl::vector<AnimationStateMachine>&& animationStateMachines,
                                     eastl::vector<LayerBlendInfo>&& layerBlendInfos,
                                     const shared_ptr<AnimationResourceManager>& animationResourceManager);

    private:
        uint8_t _unknown_8[104];
        long* field_112;
        BlendTreeAnimationSampler field_120;
        uint8_t _unknown_209[7];
        AnimationInfo field_216;
        uint8_t _unknown_256[264];
        WalkMergeAnimationSampler field_520;
    };

    class LayeredAnimationStateMachine::LayerBlendInfo {
    public:
        class LayerWalkMergeData;
        bool IsTransitioningOut() const;
        bool IsTransitioningIn() const;
        ~LayerBlendInfo();
        LayerBlendInfo(LayerBlendInfo&& layerBlendInfo);
        LayerBlendInfo(LayeredAnimationStateMachineBlendType layeredAnimationStateMachineBlendType, float* arg2,
                       unsigned long long arg3, unsigned long long arg4,
                       const shared_ptr<LayerWalkMergeData>& layerWalkMergeData);

    private:
        uint32_t field_0;
        uint8_t _unknown_4[4];
        uint64_t field_8;
        long field_16;
        long field_24;
        uint8_t _unknown_32[24];
        long field_56;
        long field_64;
        uint8_t field_72;
        uint8_t _unknown_73[3];
        uint64_t field_76;
    };

    class LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData {
    public:
        // virtual methods in vtable order
        virtual ~LayerWalkMergeData();
        virtual void GetTransformMask() const;
        virtual Option<float>* GetJointWeights() const;
        LayerWalkMergeData(Array<bool>&& arg1, Array<float>&& arg2);

    private:
        uint8_t _unknown_8[32];
    };

    // 0x10095e640
    bool LayeredAnimationStateMachine::LayerBlendInfo::IsTransitioningOut() const {
        long lVar1 = field_24;
        long lVar2 = field_64;
        return ((Layout*)Instance())->HeapBeginPtr() < (unsigned long)(lVar1 + lVar2);
    }

    // 0x10095e670
    bool LayeredAnimationStateMachine::LayerBlendInfo::IsTransitioningIn() const {
        long lVar1 = field_16;
        long lVar2 = field_56;
        return ((Layout*)Instance())->HeapBeginPtr() < (unsigned long)(lVar1 + lVar2);
    }

    // 0x100963a00
    LayeredAnimationStateMachine::~LayeredAnimationStateMachine() {
        field_520->~WalkMergeAnimationSampler();
        field_368.~SampledPoseAnimationSampler();
        field_216->~RT5AnimationSampler();
        field_120->~BlendTreeAnimationSampler();
        field_88.~shared_ptr();
        field_56.~vector();
        field_24.~vector();
    }

    // 0x1009668b0
    LayeredAnimationStateMachine::LayerBlendInfo::~LayerBlendInfo() {
        field_48.~unique_ptr();
        field_32.~shared_ptr();
    }

    // 0x1009745f0
    auto LayeredAnimationStateMachine::UpdateFromCurrentTime(
        Array<LabelData> const&,
        math::Matrix44T<float> const&)::$_10::operator()<AnimationStateMachine>(AnimationStateMachine&
                                                                                    animationStateMachine) const {
        return ResourcesLoaded();
    }

    // 0x1009751d0
    LayeredAnimationStateMachine::LayerBlendInfo::LayerBlendInfo(
        LayeredAnimationStateMachine::LayerBlendInfo&& layerBlendInfo) {
        uint32_t uVar4 = layerBlendInfo.field_0;
        uint32_t uVar5 = *(uint32_t*)&layerBlendInfo.field_4;
        uint64_t uVar1 = layerBlendInfo.field_8;
        long lVar2 = layerBlendInfo.field_24;
        field_16 = layerBlendInfo.field_16;
        field_24 = lVar2;
        field_0 = uVar4;
        *(uint32_t*)&field_4 = uVar5;
        field_8 = uVar1;
        field_32.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(layerBlendInfo.field_32);
        new (&field_48) std::unique_ptr<SimpleTwoNodeBlendTreeNode<float>>(layerBlendInfo.field_48);
        lVar2 = layerBlendInfo.field_56;
        long lVar3 = layerBlendInfo.field_64;
        uVar1 = layerBlendInfo.field_76;
        *(uint64_t*)((long)&field_64 + 4) = *(uint64_t*)((long)&layerBlendInfo.field_64 + 4);
        field_76 = uVar1;
        field_56 = lVar2;
        field_64 = lVar3;
    }

    // 0x100975570
    LayeredAnimationStateMachine::LayerBlendInfo::LayerBlendInfo(
        LayeredAnimationStateMachineBlendType layeredAnimationStateMachineBlendType, float* arg2,
        unsigned long long arg3, unsigned long long arg4,
        const shared_ptr<LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData>& layerWalkMergeData)
        : field_0(layeredAnimationStateMachineBlendType), field_8(arg2), field_16(arg3), field_24(arg4),
          field_32(layerWalkMergeData) {
        field_48.unique_ptr<true, void>();
        field_56 = 0;
        field_64 = 0;
        field_72 = 0;
        field_76 = 4294967295;
    }

    // 0x100975660
    LayeredAnimationStateMachine::LayeredAnimationStateMachine(
        eastl::vector<AnimationStateMachine>&& animationStateMachines,
        eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo>&& layerBlendInfos,
        const shared_ptr<AnimationResourceManager>& animationResourceManager)
        : AnimationStateSystem(), field_24(animationStateMachines) {
        ReturnValue local_88;
        float local_3c;
        TwoNodeBlendTreeNodeBlendType local_38;
        float local_34;

        uint8_t* this_00 = &field_56;
        new (this_00) eastl::vector<LayeredAnimationStateMachine::LayerBlendInfo>(layerBlendInfos);
        LayeredAnimationStateMachine* local_80 = this;
        uint8_t* local_78 = &field_24;
        uint8_t* local_70 = this_00;
        new (&field_88) shared_ptr(animationResourceManager);
        new (&field_104) math::Vector2T();
        field_112 = nullptr;
        uint8_t* local_60 = field_120;
        uint8_t* local_68 = &field_88;
        new (local_60) BlendTreeAnimationSampler();
        uint8_t* local_58 = field_216;
        new (local_58) RT5AnimationSampler();
        uint8_t* local_50 = &field_368;
        new (local_50) SampledPoseAnimationSampler();
        uint8_t* local_48 = field_520;
        new (local_48) WalkMergeAnimationSampler();
        field_520[752] = 0;
        auto puVar1 = this_00->HeapBeginPtr();
        auto puVar2 = this_00->end();
        if (puVar1 != puVar2) {
            do {
                if (*puVar1 < 2) {
                    local_34 = 0.0;
                    local_3c = 1.0;
                    local_38 = 0;
                    local_88 =
                        std::make_unique<SimpleTwoNodeBlendTreeNode<float>, float, float, float*&,
                                         TwoNodeBlendTreeNodeBlendType>(local_34, local_3c, *((puVar1 + 2)), local_38);
                LAB_10097577b:
                    (*((puVar1 + 12))) = local_88;
                } else if (*puVar1 == 2) {
                    local_34 = 0.0;
                    local_3c = 1.0;
                    local_38 = 1;
                    local_88 =
                        std::make_unique<SimpleTwoNodeBlendTreeNode<float>, float, float, float*&,
                                         TwoNodeBlendTreeNodeBlendType>(local_34, local_3c, *((puVar1 + 2)), local_38);
                    goto LAB_10097577b;
                }
                puVar1 = puVar1 + 22;
            } while (puVar1 != puVar2);
        }
    }

    // 0x100975e30
    LayeredAnimationStateMachine::LayerBlendInfo::LayerWalkMergeData::~LayerWalkMergeData() {
        field_32.~Array();
        field_8.~Array();
    }

} // namespace jag::graphics
