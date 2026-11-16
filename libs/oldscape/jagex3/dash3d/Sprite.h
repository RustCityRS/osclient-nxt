// libs/oldscape/jagex3/dash3d/Sprite.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::dash3d {
    class Sprite {
    public:
        ~Sprite();
        Sprite();

    private:
        uint8_t _unknown_0[16];
        GridRect field_16;
        uint8_t _unknown_36[44];
        uint64_t field_80;
        uint32_t field_88;
        EntityHighlight field_92;
    };

    // 0x10019c120: Sprite::~Sprite() has the same machine code as eastl::rbtree_node<shared_ptr<Js5WorkerRequestMessage>>::~rbtree_node()

    // 0x10019c130: Sprite::~Sprite() has the same machine code as eastl::rbtree_node<shared_ptr<Js5WorkerRequestMessage>>::~rbtree_node()

    // 0x100333c20
    Sprite::Sprite() {
        new (field_16) GridRect();
        new ((field_16 + 16)) shared_ptr();
        field_80 = 0;
        field_88 = 0;
        new (field_92) EntityHighlight();
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100309590
    shared_ptr_if_not_array<oldscape::dash3d::Sprite>::type make_shared<oldscape::dash3d::Sprite>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        Sprite* local_28[2];

        auto arg1 = aligned_alloc(136, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::Sprite>::type result;
        } else {
            local_28[0] = placement_new<oldscape::dash3d::Sprite>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::Sprite>, int, oldscape::dash3d::Sprite*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
