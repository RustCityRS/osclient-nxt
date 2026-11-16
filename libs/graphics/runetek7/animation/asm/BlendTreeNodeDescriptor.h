// libs/graphics/runetek7/animation/asm/BlendTreeNodeDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class BlendTreeNodeDescriptor {
    public:
        // virtual methods in vtable order
        virtual ~BlendTreeNodeDescriptor();
        BlendTreeNodeDescriptor();
        BlendTreeNodeDescriptor(const BlendTreeNodeDescriptor& arg1);
        unique_ptr<BlendTreeNodeDescriptor>* FromJSON(const Json::Value& value);
        auto FromPacket(PacketT<Array<unsigned char>>& arg1);
    };

    // 0x100954ec0
    BlendTreeNodeDescriptor::BlendTreeNodeDescriptor() {}

} // namespace jag::graphics
