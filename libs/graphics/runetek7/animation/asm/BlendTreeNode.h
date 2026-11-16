// libs/graphics/runetek7/animation/asm/BlendTreeNode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class BlendTreeNode {
    public:
        // virtual methods in vtable order
        virtual ~BlendTreeNode();
        SetDebugDrawPose(bool);
        BlendTreeNode(BlendTreeNode const&);
        void SetDebugDrawColours(math::Vector3T<float> const&, math::Vector3T<float> const&);
        BlendTreeNode();
        static /* 64 bytes */ m_blendTreeNodeBlendModes__;                  // initialised in its definition
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */
            NullAnimBase; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>((_func_decltype_nullptr *)0)
        static shared_ptr<oldscape::dash3d::Decor> /* 24 bytes */ EmptyBindInfo[1]; // initialised in its definition
        static StringEnum                                                           /* 16 bytes */
            m_blendTreeNodeBlendModes; // = StringEnum((StringEnumEntry *)&m_blendTreeNodeBlendModes__, 4)

        // data members, from how the methods use this: 40 bytes
        undefined* field_0;         // offset 0, vtable pointer
        undefined1 m_debugDrawPose; // offset 8
        char _unknown_9[7];
        undefined8 field_16; // offset 16
        char _unknown_24[4];
        undefined8 field_28; // offset 28
        char _unknown_36[4];
    };

    // 0x10096c2d0, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // BlendTreeNode::BlendTreeNode(BlendTreeNode const&)
    void BlendTreeNode::BlendTreeNode(BlendTreeNode* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined7 uVar4;

        field_0 = PTR_vtable_100ee8740 + 16;
        uVar4 = *(undefined7*)&param_1->field_9;
        uVar1 = param_1->field_16;
        uVar2 = *(undefined8*)((long)&param_1->field_16 + 4);
        uVar3 = param_1->field_28;
        m_debugDrawPose = param_1->m_debugDrawPose;
        *(undefined7*)&field_9 = uVar4;
        field_16 = uVar1;
        *(undefined8*)((long)&field_16 + 4) = uVar2;
        field_28 = uVar3;
    }

    // 0x10096c520, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // AnimationInfo::AnimationInfo(AnimationInfo&&): jumps straight to the base-object constructor

    // 0x10096c570, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AnimationInfo::AnimationInfo(AnimationInfo&&)
    void AnimationInfo::AnimationInfo(AnimationInfo* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined2 uVar3;
        undefined4 uVar4;
        undefined1 uVar5;
        undefined1 uVar6;

        uVar1 = param_1->field_0;
        uVar2 = *(undefined8*)&param_1->field_8;
        uVar3 = param_1->field_18;
        uVar4 = param_1->field_20;
        uVar5 = param_1->field_24;
        uVar6 = param_1->field_25;
        field_10 = param_1->field_10;
        field_18 = uVar3;
        field_20 = uVar4;
        field_24 = uVar5;
        field_25 = uVar6;
        field_0 = uVar1;
        *(undefined8*)&field_8 = uVar2;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)field_32, (shared_ptr*)param_1->field_32);
    }

    // 0x10096d7f0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // LayeredAnimationStateMachineLayerDescriptor::~LayeredAnimationStateMachineLayerDescriptor(): jumps straight to the base-object destructor

    // 0x10096d800, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // LayeredAnimationStateMachineLayerDescriptor::~LayeredAnimationStateMachineLayerDescriptor()
    void LayeredAnimationStateMachineLayerDescriptor::~LayeredAnimationStateMachineLayerDescriptor() {
        (&field_112)->~basic_string();
        ~AnimationStateMachineDescriptor();
    }

    // 0x10096d950, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // AnimationResource::AnimationResource(AnimationDescriptor const&, std::function<void (std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>): jumps straight to the base-object constructor

    // 0x10096dae0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AnimationResource::AnimationResource(AnimationDescriptor const&, std::function<void (std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>)
    /* AnimationResource::AnimationResource(AnimationDescriptor const&,
   std::function<void (std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>) */

    void AnimationResource::AnimationResource(AnimationDescriptor* param_1, function* param_3) {
        new (this) AnimationDescriptor(param_1);
        std::function<void(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>::
            function((function<void(
                          std::unique_ptr<AnimationParameters,
                                          MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>*)&field_240,
                     param_3);
        field_288 = 0;
    }

    // 0x10096dc40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // AnimationResource::AnimationResource(AnimationResource&&): jumps straight to the base-object constructor

    // 0x10096dc50, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AnimationResource::AnimationResource(AnimationResource&&)
    void AnimationResource::AnimationResource(AnimationResource* param_1) {
        new (this) AnimationDescriptor(param_1);
        std::function<void(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>::
            function((function<void(
                          std::unique_ptr<AnimationParameters,
                                          MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>*)&field_240,
                     (function*)&param_1->field_240);
        field_288 = param_1->field_288;
    }

    // 0x10098c520, 48 bytes, inline, placed by class name
    // BlendTreeNode::SetDebugDrawColours(math::Vector3T<float> const&, math::Vector3T<float> const&)
    void BlendTreeNode::SetDebugDrawColours(Vector3T* param_1, Vector3T* param_2) {
        (&field_12, param_1)->SetXYZ();
        (&field_24, param_2)->SetXYZ();
    }

    // 0x100992930, 96 bytes, base-object constructor, inline, placed by class name
    // BlendTreeNode::BlendTreeNode()
    void BlendTreeNode::BlendTreeNode() {
        field_0 = PTR_vtable_100ee8740 + 16;
        m_debugDrawPose = 0;
        new (&field_12, 0.9, 0.0, 0.9) math::ColourHSL();
        new (&field_24, 1.0, 0.1, 1.0) math::ColourHSL();
    }

} // namespace jag::graphics

namespace jag {
    // 0x10096c6a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::AnimationStateMachine>::ref_counter_shared(unsigned long, graphics::AnimationStateMachine*): jumps straight to the base-object constructor

    // 0x10096c6b0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::AnimationStateMachine>::ref_counter_shared(unsigned long, graphics::AnimationStateMachine*)
    void ref_counter_shared<graphics::AnimationStateMachine>::ref_counter_shared(ulong param_1,
                                                                                 AnimationStateMachine* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7540 + 16;
        *(ulong*)(this + 16) = param_1;
        *(AnimationStateMachine**)(this + 24) = param_2;
    }

    // 0x10096c6f0, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::AnimationStateMachine>::DeleteData()
    void ref_counter_shared<graphics::AnimationStateMachine>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 792;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10096d830, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::AnimationStateMachineDescriptor* placement_new<graphics::AnimationStateMachineDescriptor, PacketT<Array<unsigned char, eastl::allocator> >&>(void*, PacketT<Array<unsigned char, eastl::allocator> >&)
    AnimationStateMachineDescriptor*
    jag::placement_new<graphics::AnimationStateMachineDescriptor, PacketT<Array<unsigned char, eastl::allocator>>&>(
        void* param_1, PacketT* param_2) {
        graphics::AnimationStateMachineDescriptor::AnimationStateMachineDescriptor(param_1, param_2);
        return param_1;
    }

    // 0x10096d850, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::AnimationStateMachineDescriptor>* placement_new<ref_counter_shared<graphics::AnimationStateMachineDescriptor>, int, graphics::AnimationStateMachineDescriptor*&>(void*, int&&, graphics::AnimationStateMachineDescriptor*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<graphics::AnimationStateMachineDescriptor>, int,
                       graphics::AnimationStateMachineDescriptor*&>(void* param_1, int* param_2,
                                                                    AnimationStateMachineDescriptor** param_3) {
        ref_counter_shared<graphics::AnimationStateMachineDescriptor>::ref_counter_shared(param_1, (long)*param_2,
                                                                                          *param_3);
        return param_1;
    }

    // 0x10096d870, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::AnimationStateMachineDescriptor>::ref_counter_shared(unsigned long, graphics::AnimationStateMachineDescriptor*): jumps straight to the base-object constructor

    // 0x10096d880, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::AnimationStateMachineDescriptor>::ref_counter_shared(unsigned long, graphics::AnimationStateMachineDescriptor*)
    void ref_counter_shared<graphics::AnimationStateMachineDescriptor>::ref_counter_shared(
        ulong param_1, AnimationStateMachineDescriptor* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7568 + 16;
        *(ulong*)(this + 16) = param_1;
        *(AnimationStateMachineDescriptor**)(this + 24) = param_2;
    }

    // 0x10096d8c0, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::LayeredAnimationStateMachineDescriptor* placement_new<graphics::LayeredAnimationStateMachineDescriptor, PacketT<Array<unsigned char, eastl::allocator> >&>(void*, PacketT<Array<unsigned char, eastl::allocator> >&)
    LayeredAnimationStateMachineDescriptor*
    jag::placement_new<graphics::LayeredAnimationStateMachineDescriptor,
                       PacketT<Array<unsigned char, eastl::allocator>>&>(void* param_1, PacketT* param_2) {
        graphics::LayeredAnimationStateMachineDescriptor::LayeredAnimationStateMachineDescriptor(param_1, param_2);
        return param_1;
    }

    // 0x10096d8e0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::LayeredAnimationStateMachineDescriptor>* placement_new<ref_counter_shared<graphics::LayeredAnimationStateMachineDescriptor>, int, graphics::LayeredAnimationStateMachineDescriptor*&>(void*, int&&, graphics::LayeredAnimationStateMachineDescriptor*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<graphics::LayeredAnimationStateMachineDescriptor>, int,
                                           graphics::LayeredAnimationStateMachineDescriptor*&>(
        void* param_1, int* param_2, LayeredAnimationStateMachineDescriptor** param_3) {
        ref_counter_shared<graphics::LayeredAnimationStateMachineDescriptor>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10096d900, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::LayeredAnimationStateMachineDescriptor>::ref_counter_shared(unsigned long, graphics::LayeredAnimationStateMachineDescriptor*): jumps straight to the base-object constructor

    // 0x10096d910, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::LayeredAnimationStateMachineDescriptor>::ref_counter_shared(unsigned long, graphics::LayeredAnimationStateMachineDescriptor*)
    void ref_counter_shared<graphics::LayeredAnimationStateMachineDescriptor>::ref_counter_shared(
        ulong param_1, LayeredAnimationStateMachineDescriptor* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7570 + 16;
        *(ulong*)(this + 16) = param_1;
        *(LayeredAnimationStateMachineDescriptor**)(this + 24) = param_2;
    }

} // namespace jag
