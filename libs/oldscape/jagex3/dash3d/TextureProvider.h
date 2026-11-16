// libs/oldscape/jagex3/dash3d/TextureProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class TextureProvider {
    public:
        TextureProvider();
    };

    // 0x100303910
    TextureProvider::TextureProvider() {
        field_0 = PTR_vtable_100ee89a8 + 16;
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x1003039a0
    shared_ptr_if_not_array<oldscape::dash3d::Texture>::type
    make_shared<oldscape::dash3d::Texture, oldscape::PacketJ<Array<unsigned char>>&, ErrorCapture&>(
        oldscape::PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        Texture* local_38[2];

        auto arg1 = aligned_alloc(224, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::Texture>::type result;
        } else {
            local_38[0] =
                placement_new<oldscape::dash3d::Texture, oldscape::PacketJ<Array<unsigned char>>&, ErrorCapture&>(
                    (void*)((long)arg1 + 32), packetJ, errorCapture);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::Texture>, int, oldscape::dash3d::Texture*&>(
                    arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1003062b0
    shared_ptr_if_not_array<graphics::GeometryBatch>::type make_shared<graphics::GeometryBatch>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        GeometryBatch* local_28[2];

        auto arg1 = aligned_alloc(2240, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::GeometryBatch>::type result;
        } else {
            local_28[0] = placement_new<graphics::GeometryBatch>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::GeometryBatch>, int, graphics::GeometryBatch*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
