// libs/graphics/runetek7/model/billboards/BillboardManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "BillboardManager.h"

namespace jag::graphics {
    // 0x103bbd500
    int32_t BillboardManager::m_billboardCount;

    // 0x103bbd504
    int32_t BillboardManager::m_maxBillboardID;

    // 0x103bbd508, set at startup by ___cxx_global_var_init.135
    Array<BillboardType> BillboardManager::m_billboardTypes = Array<BillboardType>();

    // 0x100821c50
    void BillboardManager::Initialise(Js5ResourceProvider* js5ResourceProvider,
                                      const Js5ArchiveSettings* js5ArchiveSettings) {
        new (this) eastl::hashtable_iterator_base(js5ResourceProvider, js5ArchiveSettings);
    }

    // 0x100821c60
    void BillboardManager::Destroy() {
        Destruct();
    }

    // 0x100821c70
    void BillboardManager::MainLogic() {
        uint64_t in_RAX;
        Array<BillboardRaw>* this_00;
        BillboardType* this_02;
        BillboardRaw* billboardRaw;
        unsigned long arg1;
        uint32_t uVar2;

        if (m_billboardTypes.empty()) {
            if (MainLogic()) {
                m_maxBillboardID = GetCompletedGold();
                m_billboardCount = GetMaxLineWidth();
                this_00 = (Array<BillboardRaw>*)second();
                m_billboardTypes.set_max_size((unsigned long)m_maxBillboardID, 0);
                uVar2 = (uint32_t)((unsigned long)in_RAX >> 32);
                if (m_maxBillboardID != 0) {
                    arg1 = 0;
                    do {
                        if (((Skybox*)(*this_00)[arg1])->ShowSkybox()) {
                            this_02 = &m_billboardTypes[arg1];
                            billboardRaw = (BillboardRaw*)(*this_00)[arg1];
                            this_02->Initialise((unsigned int)arg1, *billboardRaw);
                        }
                        uVar2 = (uint32_t)((unsigned long)in_RAX >> 32);
                        arg1 = arg1 + 1;
                    } while (arg1 < m_maxBillboardID);
                }
                Destruct();
                (logger::default_logger())
                    ->Log(false, 8,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/billboards/BillboardManager.cpp",
                          51, "BillboardManager: Loaded %u billboards from pack!",
                          (((uint64_t)uVar2 << 32) | (uint32_t)m_maxBillboardID));
            }
        }
    }

} // namespace jag::graphics
