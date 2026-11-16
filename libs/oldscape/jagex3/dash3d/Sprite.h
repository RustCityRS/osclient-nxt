// libs/oldscape/jagex3/dash3d/Sprite.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::dash3d {
    class Sprite {
    public:
        ~Sprite();
        Sprite();

        // data members, from how the methods use this: 108 bytes
        char _unknown_0[16];
        GridRect field_16; // offset 16
        char _unknown_36[44];
        undefined8 field_80;      // offset 80
        undefined4 field_88;      // offset 88
        EntityHighlight field_92; // offset 92
    };

    // 0x10019c120: the linker folded this into eastl::rbtree_node<shared_ptr<Js5WorkerRequestMessage> >::~rbtree_node(), which has identical code
    Sprite::~Sprite();

    // 0x10019c130: the linker folded this into eastl::rbtree_node<shared_ptr<Js5WorkerRequestMessage> >::~rbtree_node(), which has identical code
    Sprite::~Sprite();

    // 0x1003094f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // GridRect::GridRect(): jumps straight to the base-object constructor

    // 0x100333c10, 16 bytes, complete-object constructor, inline, placed by class name
    // Sprite::Sprite(): jumps straight to the base-object constructor

    // 0x100333c20, 64 bytes, base-object constructor, inline, placed by class name
    // Sprite::Sprite()
    void Sprite::Sprite() {
        _func_decltype_nullptr* in_RSI;

        new (field_16) GridRect();
        new ((field_16 + 16), in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_80 = 0;
        field_88 = 0;
        new (field_92) EntityHighlight();
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100309590, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::Sprite>::type make_shared<oldscape::dash3d::Sprite>()
    jag* make_shared<oldscape::dash3d::Sprite>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        Sprite* local_28[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::dash3d::Sprite>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::Sprite>, int, oldscape::dash3d::Sprite*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
