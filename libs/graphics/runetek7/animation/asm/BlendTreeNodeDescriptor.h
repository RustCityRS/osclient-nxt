// libs/graphics/runetek7/animation/asm/BlendTreeNodeDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class BlendTreeNodeDescriptor {
    public:
        // virtual methods in vtable order
        virtual ~BlendTreeNodeDescriptor();
        BlendTreeNodeDescriptor();
        BlendTreeNodeDescriptor(BlendTreeNodeDescriptor const&);
        unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>* FromJSON(Json::Value const&);
        BlendTreeNodeDescriptor* FromPacket(PacketT<Array<unsigned char, eastl::allocator>>&);

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100954ec0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // BlendTreeNodeDescriptor::BlendTreeNodeDescriptor()
    /* BlendTreeNodeDescriptor::BlendTreeNodeDescriptor(BlendTreeNodeDescriptor
   const&) */

    void BlendTreeNodeDescriptor::BlendTreeNodeDescriptor(BlendTreeNodeDescriptor* param_1) {
        field_0 = PTR_vtable_100ee8868 + 16;
    }

} // namespace jag::graphics
