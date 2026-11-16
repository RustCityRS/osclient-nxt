// libs/graphics/runetek5/MaterialRawProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.systemheap

namespace jag::graphics {
    class MaterialRawProvider {
    public:
        // virtual methods in vtable order
        virtual ~MaterialRawProvider();
        MaterialRawProvider();
    };

    // 0x100009e70: MaterialRawProvider::~MaterialRawProvider() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1001d90f0
    MaterialRawProvider::MaterialRawProvider() {}

} // namespace jag::graphics

namespace jag::oldscape::rseven {
    // 0x1001d9160
    OSRenderCore_MaterialRawProvider::~OSRenderCore_MaterialRawProvider() {
        field_32.~vector();
    }

    // 0x1001d9190
    OSRenderCore_TextureDataProvider::OSRenderCore_TextureDataProvider() : jag::graphics::TextureDataProvider() {

        new (&field_16) eastl::hash_map<int, shared_ptr<PacketT<Array<unsigned char>>>>(local_20);
    }

} // namespace jag::oldscape::rseven
