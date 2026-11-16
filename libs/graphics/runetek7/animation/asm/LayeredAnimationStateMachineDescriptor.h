// libs/graphics/runetek7/animation/asm/LayeredAnimationStateMachineDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class LayeredAnimationStateMachineDescriptor {
    public:
        // virtual methods in vtable order
        virtual ~LayeredAnimationStateMachineDescriptor();
        virtual CreateStateSystem(VariableList&, shared_ptr<AnimationResourceManager> const&);
        virtual ToString() const;
        LayeredAnimationStateMachineDescriptor(Json::Value const&);
        LayeredAnimationStateMachineDescriptor(PacketT<Array<unsigned char, eastl::allocator>>&);

        // data members, from how the methods use this: 16 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
    };

    class LayeredAnimationStateMachineLayerDescriptor {
    public:
        GetAnimationStateMachineDescriptor();
        GetAnimationStateMachineDescriptor() const;
        GetTransitionOutTime() const;
        int GetBlendType() const;
        GetTransitionInTime() const;
        GetBlendVar() const;
        LayeredAnimationStateMachineLayerDescriptor(Json::Value const&);
        LayeredAnimationStateMachineLayerDescriptor(PacketT<Array<unsigned char, eastl::allocator>>&);
        ~LayeredAnimationStateMachineLayerDescriptor();
        LayeredAnimationStateMachineLayerDescriptor(LayeredAnimationStateMachineLayerDescriptor&&);

        // data members, from how the methods use this: 160 bytes
        char _unknown_0[104];
        int m_blendType; // offset 104
        char _unknown_108[36];
        undefined8 m_pTransitionInTime; // offset 144
        undefined8 m_transitionOutTime; // offset 152
    };

    // 0x100960b80, 16 bytes, complete-object destructor, inline, placed by class name
    // LayeredAnimationStateMachineDescriptor::~LayeredAnimationStateMachineDescriptor(): jumps straight to the base-object destructor

    // 0x100960b90, 32 bytes, deleting destructor, inline, placed by class name
    // LayeredAnimationStateMachineDescriptor::~LayeredAnimationStateMachineDescriptor()
    void LayeredAnimationStateMachineDescriptor::~LayeredAnimationStateMachineDescriptor() {
        ~LayeredAnimationStateMachineDescriptor(this);
        operator_delete(this);
    }

    // 0x100963a70, 48 bytes, base-object destructor, inline, placed by class name
    // LayeredAnimationStateMachineDescriptor::~LayeredAnimationStateMachineDescriptor()
    void LayeredAnimationStateMachineDescriptor::~LayeredAnimationStateMachineDescriptor() {
        field_0 = &PTR__LayeredAnimationStateMachineDescriptor_100f1b3b8;
        (&field_8)->~vector();
        ~AutoSingleton();
    }

} // namespace jag::graphics
