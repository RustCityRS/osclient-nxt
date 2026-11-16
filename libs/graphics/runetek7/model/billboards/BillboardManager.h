// libs/graphics/runetek7/model/billboards/BillboardManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class BillboardManager {
    public:
        uint8_t BillboardsReady();
        void Initialise(Js5ResourceProvider* js5ResourceProvider, const Js5ArchiveSettings* js5ArchiveSettings);
        void Destroy();
        void MainLogic();
        BillboardManager();
        ~BillboardManager();
        static int32_t m_billboardCount;
        static int32_t m_maxBillboardID;
        static Array<BillboardType> m_billboardTypes; // = Array<BillboardType>()

    private:
        Js5ResourceProvider* field_0;
        Js5ArchiveSettings* field_8;
        int field_16;
        unsigned int field_20;
        uint8_t _unknown_24[1];
    };

    // 0x100818bb0
    uint8_t BillboardManager::BillboardsReady() {
        return m_billboardTypes.empty() ^ 1;
    }

    // 0x10098ea20
    BillboardManager::BillboardManager() : BillboardRawLoader() {}

    // 0x100990f90
    BillboardManager::~BillboardManager() {}

} // namespace jag::graphics
