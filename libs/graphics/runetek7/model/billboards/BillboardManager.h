// libs/graphics/runetek7/model/billboards/BillboardManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class BillboardManager {
    public:
        byte BillboardsReady();
        void Initialise(Js5ResourceProvider*, Js5ArchiveSettings const*);
        void Destroy();
        void MainLogic();
        BillboardManager();
        ~BillboardManager();
        static /* 4 bytes */ m_billboardCount;
        static /* 4 bytes */ m_maxBillboardID;
        static Array<BillboardType, eastl::allocator> /* 24 bytes */
            m_billboardTypes;                         // = Array<BillboardType,eastl::allocator>()

        // data members, from how the methods use this: 25 bytes
        hash_node* field_0;          // offset 0
        Js5ArchiveSettings* field_8; // offset 8
        int field_16;                // offset 16
        uint field_20;               // offset 20
        char _unknown_24[1];
    };

    // 0x100818bb0, 32 bytes, inline, placed by class name and debug map
    // BillboardManager::BillboardsReady()
    byte BillboardManager::BillboardsReady() {
        byte bVar1;

        bVar1 = m_billboardTypes.empty();
        return bVar1 ^ 1;
    }

    // 0x10097ed30, 16 bytes, complete-object constructor, inline, placed by class name
    // BillboardManager::BillboardManager(): jumps straight to the base-object constructor

    // 0x10097ee60, 16 bytes, complete-object destructor, inline, placed by class name
    // BillboardManager::~BillboardManager(): jumps straight to the base-object destructor

    // 0x10098ea20, 16 bytes, base-object constructor, inline, placed by class name
    // BillboardManager::BillboardManager()
    void BillboardManager::BillboardManager() {
        new (this) BillboardRawLoader();
    }

    // 0x100990f90, 16 bytes, base-object destructor, inline, placed by class name
    // BillboardManager::~BillboardManager()
    void BillboardManager::~BillboardManager() {
        ~BillboardRawLoader();
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008196c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SafeSimpleAllocatorEASTL::SafeSimpleAllocatorEASTL(SimpleAllocator*, char const*): jumps straight to the base-object constructor

} // namespace jag

namespace jag::fixedfunction {
    // 0x10081c810, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction
