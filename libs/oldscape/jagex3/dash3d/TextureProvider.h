// libs/oldscape/jagex3/dash3d/TextureProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class TextureProvider {
    public:
        TextureProvider();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100303910, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // TextureProvider::TextureProvider()
    void TextureProvider::TextureProvider() {
        field_0 = PTR_vtable_100ee89a8 + 16;
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x1003039a0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::Texture>::type make_shared<oldscape::dash3d::Texture, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, ErrorCapture&>(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, ErrorCapture&)
    jag* jag::make_shared<oldscape::dash3d::Texture, oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&,
                          ErrorCapture&>(PacketJ* param_1, ErrorCapture* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        Texture* local_38[2];

        pvVar1 = (void*)aligned_alloc(224, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<oldscape::dash3d::Texture, oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&,
                              ErrorCapture&>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::Texture>, int, oldscape::dash3d::Texture*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1003062b0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::GeometryBatch>::type make_shared<graphics::GeometryBatch>()
    jag* make_shared<graphics::GeometryBatch>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        GeometryBatch* local_28[2];

        pvVar1 = (void*)aligned_alloc(2240, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_28[0] = placement_new<graphics::GeometryBatch>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<graphics::GeometryBatch>, int, graphics::GeometryBatch*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
