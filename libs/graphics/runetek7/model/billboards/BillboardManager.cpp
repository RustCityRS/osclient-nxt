// libs/graphics/runetek7/model/billboards/BillboardManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "BillboardManager.h"

namespace jag::graphics {
    // 0x103bbd500, 4 bytes, __common; zero-initialised
    BillboardManager::m_billboardCount;

    // 0x103bbd504, 4 bytes, __common; zero-initialised
    BillboardManager::m_maxBillboardID;

    // 0x103bbd508, 24 bytes, __common; set at startup by ___cxx_global_var_init.135
    Array<BillboardType, eastl::allocator> BillboardManager::m_billboardTypes =
        Array<BillboardType, eastl::allocator>();

    // 0x100821c50, 16 bytes, placed by class name and debug map
    // BillboardManager::Initialise(Js5ResourceProvider*, Js5ArchiveSettings const*)
    void BillboardManager::Initialise(Js5ResourceProvider* param_1, Js5ArchiveSettings* param_2) {
        new (this)
            eastl::hashtable_iterator_base<eastl::pair<int const, oldscape::graphics::Pix32>, false>(param_1, param_2);
    }

    // 0x100821c60, 16 bytes, placed by class name and debug map
    // BillboardManager::Destroy()
    void BillboardManager::Destroy() {
        Destruct();
    }

    // 0x100821c70, 304 bytes, placed by class name and debug map
    // BillboardManager::MainLogic()
    void BillboardManager::MainLogic() {
        char cVar1;
        undefined8 in_RAX;
        Array<BillboardRaw, eastl::allocator>* this_00;
        Skybox* this_01;
        BillboardType* this_02;
        BillboardRaw* pBVar2;
        undefined8 uVar3;
        ulong uVar4;
        undefined4 uVar5;

        cVar1 = m_billboardTypes.empty();
        if (cVar1 != '\0') {
            cVar1 = MainLogic();
            if (cVar1 != '\0') {
                m_maxBillboardID = GetCompletedGold();
                m_billboardCount = GetMaxLineWidth();
                this_00 = (Array<BillboardRaw, eastl::allocator>*)second();
                m_billboardTypes.set_max_size((ulong)m_maxBillboardID, 0);
                uVar5 = (undefined4)((ulong)in_RAX >> 32);
                if (m_maxBillboardID != 0) {
                    uVar4 = 0;
                    do {
                        this_01 = (Skybox*)Array<BillboardRaw, eastl::allocator>::operator[](this_00, uVar4);
                        cVar1 = this_01->ShowSkybox();
                        if (cVar1 != '\0') {
                            this_02 = (BillboardType*)Array<BillboardType, eastl::allocator>::operator[](
                                (Array<BillboardType, eastl::allocator>*)&m_billboardTypes, uVar4);
                            pBVar2 = (BillboardRaw*)Array<BillboardRaw, eastl::allocator>::operator[](this_00, uVar4);
                            this_02->Initialise((uint)uVar4, pBVar2);
                        }
                        uVar5 = (undefined4)((ulong)in_RAX >> 32);
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < m_maxBillboardID);
                }
                Destruct();
                uVar3 = logger::default_logger();
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/model/billboards/BillboardManager.cpp",
                                    51, "BillboardManager: Loaded %u billboards from pack!",
                                    CONCAT44(uVar5, m_maxBillboardID));
            }
        }
    }

    // 0x1008525a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.135
    void ___cxx_global_var_init_135() {
        new (&BillboardManager::m_billboardTypes) Array<BillboardType, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6778, &BillboardManager::m_billboardTypes, 4294967296);
    }

} // namespace jag::graphics
