// libs/graphics/runetek5/BillboardRawLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "BillboardRawLoader.h"

namespace jag::graphics {
    // 0x100009d00: BillboardRawLoader::GetBillboardTypes() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x10002e210: BillboardRawLoader::Initialise(Js5ResourceProvider*, Js5ArchiveSettings const*) has the same machine code as eastl::hashtable_iterator_base<eastl::string, false>::hashtable_iterator_base(eastl::hash_node<eastl::string, false>*, eastl::hash_node<eastl::string, false>**)

    // 0x100066b70: BillboardRawLoader::GetBillboardCount() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x1001117e0: BillboardRawLoader::GetMaxBillboardID() const has the same machine code as oldscape::jagex3::Js5::GetIndexCrc() const

    // 0x10097b1b0
    unsigned long BillboardRawLoader::MainLogic() {
        bool cVar1;
        unsigned int uVar2;
        uint8_t* puVar3;
        BillboardRaw* this_00;
        PacketT<Array<unsigned char> _>* arg1;
        unsigned long arg1_00;
        uint64_t unaff_R15;
        BillboardRawLoader* pBVar4;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_50;
        Array<BillboardRaw>* local_40;
        Js5Index* local_38;

        if (field_0 == nullptr) {
            LogAssert("m_resourceProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                      "BillboardRawLoader.cpp",
                      11, nullptr);
        }
        if (field_0 == nullptr) {
            pBVar4 = nullptr;
        } else {
            local_40 = (Array<BillboardRaw>*)&field_24;
            cVar1 = local_40->empty();
            pBVar4 = (BillboardRawLoader*)(((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
            if (cVar1) {
                pBVar4 = nullptr;
                puVar3 = (uint8_t*)field_0->GroupReady(*field_8, 0, (Priority*)Priority::HIGH, true);
                if (puVar3 == DataStatus::READY) {
                    local_38 = nullptr;
                    (**(void (**)(...)) & ((Js5Index*)field_0->_vptr)->m_indexVersion)((Js5Index**)field_0,
                                                                                       (Js5ArchiveSettings*)&local_38);
                    if (local_38 == nullptr) {
                        LogAssert("billboardIndex",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek5/BillboardRawLoader.cpp",
                                  26, nullptr);
                    }
                    m_billboardCount = 0;
                    uVar2 = local_38->GetMaximumFileID(0);
                    m_maxBillboardID = uVar2;
                    local_40->set_max_size((unsigned long)(uVar2 + 1), 0);
                    if (m_maxBillboardID != 0) {
                        arg1_00 = 0;
                        do {
                            local_50 = shared_ptr();
                            puVar3 = (uint8_t*)field_0->GetFile(local_50, *field_8, 0, (unsigned int)arg1_00,
                                                                (Priority*)Priority::HIGH, true, false, false);
                            if (puVar3 == DataStatus::NOTLOADED) {
                                LogAssert("status != DataStatus::NOTLOADED",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek5/BillboardRawLoader.cpp",
                                          34, nullptr);
                            }
                            if (puVar3 == DataStatus::READY) {
                                this_00 = (BillboardRaw*)(*local_40)[arg1_00];
                                arg1 = (PacketT<Array<unsigned char> _>*)*local_50;
                                this_00->Decode(*arg1);
                                m_billboardCount = m_billboardCount + 1;
                            }
                            arg1_00 = arg1_00 + 1;
                            pBVar4 = this;
                        } while (arg1_00 < m_maxBillboardID);
                    }
                    pBVar4 =
                        (BillboardRawLoader*)(((uint64_t)((int64_t)((unsigned long)pBVar4 >> 8)) << 8) | (uint8_t)1);
                }
            }
        }
        return (unsigned long)pBVar4 & 4294967295;
    }

    // 0x10097b5b0
    void BillboardRawLoader::Destruct() {
        m_billboardCount = 0;
        m_maxBillboardID = 0;
        field_24.clear();
    }

} // namespace jag::graphics
