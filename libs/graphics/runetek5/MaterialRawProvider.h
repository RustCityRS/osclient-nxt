// libs/graphics/runetek5/MaterialRawProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.systemheap

namespace jag::graphics {
    class MaterialRawProvider {
    public:
        // virtual methods in vtable order
        virtual ~MaterialRawProvider();
        MaterialRawProvider();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    MaterialRawProvider::~MaterialRawProvider();

    // 0x1001d90f0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // MaterialRawProvider::MaterialRawProvider()
    void MaterialRawProvider::MaterialRawProvider() {
        field_0 = PTR_vtable_100ee8810 + 16;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    MaterialRawProvider::~MaterialRawProvider();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    MaterialRawProvider::~MaterialRawProvider();

} // namespace jag::graphics

namespace jag::oldscape::rseven {
    // 0x1001d9160, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // OSRenderCore_MaterialRawProvider::~OSRenderCore_MaterialRawProvider()
    void OSRenderCore_MaterialRawProvider::~OSRenderCore_MaterialRawProvider() {
        field_0 = &PTR__OSRenderCore_MaterialRawProvider_100ef6b08;
        (&field_32)->~vector();
        ~AutoSingleton();
    }

    // 0x1001d9190, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // OSRenderCore_TextureDataProvider::OSRenderCore_TextureDataProvider()
    void OSRenderCore_TextureDataProvider::OSRenderCore_TextureDataProvider() {
        allocator local_20[8];

        new (this) jag::graphics::TextureDataProvider();
        field_0 = &PTR__OSRenderCore_TextureDataProvider_100ef6b48;
        eastl::allocator::allocator(local_20, "EASTL hash_map");
        new (field_16, local_20) eastl::hash_map<int, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>,
                                                 eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
    }

} // namespace jag::oldscape::rseven
