// libs/oldscape/rs2lib/worldmap/BlendedGround.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class BlendedGround {
    public:
        ~BlendedGround();
        BlendedGround();
        BlendedGround* FromPNG(PacketJ<Array<unsigned char, eastl::allocator>>*);
        uint GetBlendedGroundColour(int, int);
        BlendedGround(SharedArray<unsigned int>&);

        // data members, from how the methods use this: 9 bytes
        ulong field_0; // offset 0
        char _unknown_8[1];
    };

    // 0x1001327d0: the linker folded this into graphics::Pix32::~Pix32(), which has identical code
    BlendedGround::~BlendedGround();

    // 0x1001327e0: the linker folded this into graphics::Pix32::~Pix32(), which has identical code
    BlendedGround::~BlendedGround();

    // 0x10020b380, 16 bytes, base-object constructor, placed by class name and debug map
    // BlendedGround::BlendedGround()
    void BlendedGround::BlendedGround() {
        new (this) SharedArray<unsigned int>();
    }

    // 0x10020b390, 16 bytes, complete-object constructor, placed by class name and debug map
    // BlendedGround::BlendedGround(): jumps straight to the base-object constructor

    // 0x10020b3a0, 128 bytes, placed by class name and debug map
    // BlendedGround::FromPNG(PacketJ<Array<unsigned char, eastl::allocator> >*)
    BlendedGround* BlendedGround::FromPNG(PacketJ* param_1) {
        Pix32Tools local_30[16];
        SharedArray local_20[8];

        if (param_1 == (PacketJ*)0) {
            std::make_unique<BlendedGround>();
        } else {
            local_30->createPix32FromPNGData(param_1);
            shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)local_30);
            std::make_unique<BlendedGround, SharedArray<unsigned int>&>(local_20);
            new (this) std::unique_ptr<BlendedGround, std::default_delete<BlendedGround>>(local_20);
            local_20->~unique_ptr();
            local_30->~shared_ptr();
        }
        return this;
    }

    // 0x10020b4f0, 32 bytes, placed by class name and debug map
    // BlendedGround::GetBlendedGroundColour(int, int)
    uint BlendedGround::GetBlendedGroundColour(int param_1, int param_2) {
        uint* puVar1;

        puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this,
                                                              (long)(param_2 * 64 + param_1));
        return *puVar1 | 4278190080;
    }

    // 0x10020b510, 64 bytes, base-object constructor, placed by class name and debug map
    // BlendedGround::BlendedGround(SharedArray<unsigned int>&)
    void BlendedGround::BlendedGround(SharedArray* param_1) {
        new (this) SharedArray<unsigned int>();
        ref_assign(param_1);
    }

    // 0x10020b570, 16 bytes, complete-object constructor, placed by class name and debug map
    // BlendedGround::BlendedGround(SharedArray<unsigned int>&): jumps straight to the base-object constructor

} // namespace jag::oldscape::rs2lib::worldmap
