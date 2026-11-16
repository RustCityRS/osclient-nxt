// libs/graphics/runetek7/materials/textures/TextureData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class TextureData {
    public:
        TextureData();
        ~TextureData();

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[8];
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
    };

    // 0x100861f40, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TextureData::TextureData(): jumps straight to the base-object constructor

    // 0x100862050, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // TextureData::~TextureData(): jumps straight to the base-object destructor

    // 0x10086adc0, 32 bytes, base-object constructor, inline, placed by class name
    // TextureData::TextureData()
    void TextureData::TextureData() {
        std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::unique_ptr<true, void>(
            (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)this);
        field_8 = 0;
        field_16 = 0;
    }

    // 0x10086ade0, 16 bytes, base-object destructor, inline, placed by class name
    // TextureData::~TextureData()
    void TextureData::~TextureData() {
        ~unique_ptr();
    }

} // namespace jag::graphics

namespace jag {
    // 0x100861f50, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::TextureData>::type make_shared<graphics::TextureData>()
    jag* make_shared<graphics::TextureData>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        TextureData* local_28[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<graphics::TextureData>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<graphics::TextureData>, int, graphics::TextureData*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
