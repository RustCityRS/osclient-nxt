// libs/graphics/runetek7/animation/asm/LayeredAnimationStateMachineDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class LayeredAnimationStateMachineDescriptor {
    public:
        // virtual methods in vtable order
        virtual ~LayeredAnimationStateMachineDescriptor();
        virtual LayeredAnimationStateMachineDescriptor*
        CreateStateSystem(VariableList& variableList,
                          const shared_ptr<AnimationResourceManager>& animationResourceManager);
        virtual auto ToString() const;
        LayeredAnimationStateMachineDescriptor(const Json::Value& value);
        LayeredAnimationStateMachineDescriptor(PacketT<Array<unsigned char>>& arg1);

    private:
        uint8_t _unknown_8[8];
    };

    class LayeredAnimationStateMachineLayerDescriptor {
    public:
        void GetAnimationStateMachineDescriptor();
        void GetAnimationStateMachineDescriptor() const;
        uint64_t GetTransitionOutTime() const;
        int GetBlendType() const;
        Js5MemoryCache* GetTransitionInTime() const;
        uint8_t* GetBlendVar() const;
        LayeredAnimationStateMachineLayerDescriptor(const Json::Value& value);
        LayeredAnimationStateMachineLayerDescriptor(PacketT<Array<unsigned char>>& arg1);
        ~LayeredAnimationStateMachineLayerDescriptor();
        LayeredAnimationStateMachineLayerDescriptor(
            LayeredAnimationStateMachineLayerDescriptor&& layeredAnimationStateMachineLayerDescriptor);

    private:
        uint8_t _unknown_0[104];
        int m_blendType;
        uint8_t _unknown_108[36];
        uint64_t m_pTransitionInTime;
        uint64_t m_transitionOutTime;
    };

    // 0x100963a70
    LayeredAnimationStateMachineDescriptor::~LayeredAnimationStateMachineDescriptor() {
        field_8.~vector();
    }

} // namespace jag::graphics
