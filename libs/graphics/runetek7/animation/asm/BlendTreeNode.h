// libs/graphics/runetek7/animation/asm/BlendTreeNode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class BlendTreeNode {
    public:
        // virtual methods in vtable order
        virtual ~BlendTreeNode();
        void SetDebugDrawPose(bool arg1);
        BlendTreeNode(const BlendTreeNode& blendTreeNode);
        void SetDebugDrawColours(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32);
        BlendTreeNode();
        static int32_t m_blendTreeNodeBlendModes__[16]; // initialised in its definition
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullAnimBase; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::dash3d::Decor> EmptyBindInfo[1]; // initialised in its definition
        static StringEnum m_blendTreeNodeBlendModes; // = StringEnum((StringEnumEntry *)&m_blendTreeNodeBlendModes__, 4)

    private:
        uint8_t m_debugDrawPose;
        uint8_t _unknown_9[7];
        uint64_t field_16;
        uint8_t _unknown_24[4];
        uint64_t field_28;
        uint8_t _unknown_36[4];
    };

    // 0x10096c2d0
    BlendTreeNode::BlendTreeNode(const BlendTreeNode& blendTreeNode) {
        uint64_t uVar4 = *(uint64_t*)&blendTreeNode.field_9;
        uint64_t uVar1 = blendTreeNode.field_16;
        uint64_t uVar2 = *(uint64_t*)((long)&blendTreeNode.field_16 + 4);
        uint64_t uVar3 = blendTreeNode.field_28;
        m_debugDrawPose = blendTreeNode.m_debugDrawPose;
        *(uint64_t*)&field_9 = uVar4;
        field_16 = uVar1;
        *(uint64_t*)((long)&field_16 + 4) = uVar2;
        field_28 = uVar3;
    }

    // 0x10096c570
    AnimationInfo::AnimationInfo(AnimationInfo&& animationInfo) {
        uint64_t uVar1 = animationInfo.field_0;
        uint64_t uVar2 = *(uint64_t*)&animationInfo.field_8;
        uint16_t uVar3 = animationInfo.field_18;
        uint32_t uVar4 = animationInfo.field_20;
        uint8_t uVar5 = animationInfo.field_24;
        uint8_t uVar6 = animationInfo.field_25;
        field_10 = animationInfo.field_10;
        field_18 = uVar3;
        field_20 = uVar4;
        field_24 = uVar5;
        field_25 = uVar6;
        field_0 = uVar1;
        *(uint64_t*)&field_8 = uVar2;
        field_32.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(animationInfo.field_32);
    }

    // 0x10096d800
    LayeredAnimationStateMachineLayerDescriptor::~LayeredAnimationStateMachineLayerDescriptor() {
        field_112.~basic_string();
    }

    // 0x10096dae0
    AnimationResource::AnimationResource(
        const AnimationDescriptor& animationDescriptor,
        std::function<
            void(std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>
            callback)
        : AnimationDescriptor(animationDescriptor), field_240(*callback), field_288(0) {}

    // 0x10096dc50
    AnimationResource::AnimationResource(AnimationResource&& animationResource)
        : AnimationDescriptor(animationResource), field_240(animationResource.field_240),
          field_288(animationResource.field_288) {}

    // 0x10098c520
    void BlendTreeNode::SetDebugDrawColours(const math::Vector3T<float>& vector31,
                                            const math::Vector3T<float>& vector32) {
        field_12.SetXYZ(vector31);
        field_24.SetXYZ(vector32);
    }

    // 0x100992930
    BlendTreeNode::BlendTreeNode() : m_debugDrawPose(0), field_12(0.9, 0.0, 0.9), field_24(1.0, 0.1, 1.0) {}

} // namespace jag::graphics

namespace jag {
    // 0x10096c6b0
    ref_counter_shared<graphics::AnimationStateMachine>::ref_counter_shared(
        unsigned long arg1, graphics::AnimationStateMachine* animationStateMachine)
        : ref_counter_base() {}

    // 0x10096c6f0
    void ref_counter_shared<graphics::AnimationStateMachine>::DeleteData() {
        long lVar1;
        ref_counter_shared<graphics::AnimationStateMachine> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<graphics::AnimationStateMachine> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 792;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10096d830
    graphics::AnimationStateMachineDescriptor*
    placement_new<graphics::AnimationStateMachineDescriptor, PacketT<Array<unsigned char>>&>(
        void* arg1, PacketT<Array<unsigned char>>& arg2) {
        new (arg1) graphics::AnimationStateMachineDescriptor(arg2);
        return arg1;
    }

    // 0x10096d850
    ref_counter_shared<graphics::AnimationStateMachineDescriptor>*
    placement_new<ref_counter_shared<graphics::AnimationStateMachineDescriptor>, int,
                  graphics::AnimationStateMachineDescriptor*&>(void* arg1, int&& arg2,
                                                               graphics::AnimationStateMachineDescriptor*& arg3) {
        new (arg1) ref_counter_shared<graphics::AnimationStateMachineDescriptor>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10096d880
    ref_counter_shared<graphics::AnimationStateMachineDescriptor>::ref_counter_shared(
        unsigned long arg1, graphics::AnimationStateMachineDescriptor* animationStateMachineDescriptor)
        : ref_counter_base() {}

    // 0x10096d8c0
    graphics::LayeredAnimationStateMachineDescriptor*
    placement_new<graphics::LayeredAnimationStateMachineDescriptor, PacketT<Array<unsigned char>>&>(
        void* arg1, PacketT<Array<unsigned char>>& arg2) {
        new (arg1) graphics::LayeredAnimationStateMachineDescriptor(arg2);
        return arg1;
    }

    // 0x10096d8e0
    ref_counter_shared<graphics::LayeredAnimationStateMachineDescriptor>*
    placement_new<ref_counter_shared<graphics::LayeredAnimationStateMachineDescriptor>, int,
                  graphics::LayeredAnimationStateMachineDescriptor*&>(
        void* arg1, int&& arg2, graphics::LayeredAnimationStateMachineDescriptor*& arg3) {
        new (arg1) ref_counter_shared<graphics::LayeredAnimationStateMachineDescriptor>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10096d910
    ref_counter_shared<graphics::LayeredAnimationStateMachineDescriptor>::ref_counter_shared(
        unsigned long arg1, graphics::LayeredAnimationStateMachineDescriptor* layeredAnimationStateMachineDescriptor)
        : ref_counter_base() {}

} // namespace jag
