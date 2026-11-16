// libs/graphics/runetek7/materials/textures/TextureData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class TextureData {
    public:
        TextureData();
        ~TextureData();

    private:
        uint8_t _unknown_0[8];
        uint64_t field_8;
        uint64_t field_16;
    };

    // 0x10086adc0
    TextureData::TextureData() {
        ((unique_ptr<unsigned char[]>*)this)->unique_ptr<true, void>();
        field_8 = 0;
        field_16 = 0;
    }

    // 0x10086ade0
    TextureData::~TextureData() {
        ((unique_ptr<unsigned char[]>*)this)->~unique_ptr();
    }

} // namespace jag::graphics

namespace jag {
    // 0x100861f50
    shared_ptr_if_not_array<graphics::TextureData>::type make_shared<graphics::TextureData>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        TextureData* local_28[2];

        auto arg1 = aligned_alloc(56, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::TextureData>::type result;
        } else {
            local_28[0] = placement_new<graphics::TextureData>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::TextureData>, int, graphics::TextureData*&>(arg1, &local_2c,
                                                                                                       local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
