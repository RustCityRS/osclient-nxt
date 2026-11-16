// libs/graphics/runetek5/BillboardRawLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "BillboardRawLoader.h"

namespace jag::graphics {
    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    BillboardRawLoader::GetBillboardTypes() const;

    // 0x10002e210: the linker folded this into eastl::hashtable_iterator_base<eastl::string, false>::hashtable_iterator_base(eastl::hash_node<eastl::string, false>*, eastl::hash_node<eastl::string, false>**), which has identical code
    BillboardRawLoader::Initialise(Js5ResourceProvider*, Js5ArchiveSettings const*);

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    BillboardRawLoader::GetBillboardCount() const;

    // 0x1001117e0: the linker folded this into oldscape::jagex3::Js5::GetIndexCrc() const, which has identical code
    BillboardRawLoader::GetMaxBillboardID() const;

    // 0x10097b1b0, 544 bytes, placed by class name and debug map
    // BillboardRawLoader::MainLogic()
    ulong BillboardRawLoader::MainLogic() {
        char cVar1;
        uint uVar2;
        undefined* puVar3;
        BillboardRaw* this_00;
        shared_ptr* psVar4;
        ulong uVar5;
        undefined8 unaff_R15;
        BillboardRawLoader* pBVar6;
        shared_ptr local_50;
        Array<BillboardRaw, eastl::allocator>* local_40;
        Js5Index* local_38;

        if (field_0 == (Js5ResourceProvider*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_resourceProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                      "BillboardRawLoader.cpp",
                      11, (char*)0);
        }
        if (field_0 == (Js5ResourceProvider*)0) {
            pBVar6 = (BillboardRawLoader*)0;
        } else {
            local_40 = (Array<BillboardRaw, eastl::allocator>*)&field_24;
            cVar1 = local_40->empty();
            pBVar6 = (BillboardRawLoader*)CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
            if (cVar1 != '\0') {
                pBVar6 = (BillboardRawLoader*)0;
                puVar3 = (undefined*)(field_0, field_8, 0, (Priority*)Priority::HIGH, true)->GroupReady();
                if (puVar3 == DataStatus::READY) {
                    local_38 = (Js5Index*)0;
                    (*(code*)field_0->field_0[4])(field_0, &local_38, field_8);
                    if (local_38 == (Js5Index*)0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("billboardIndex",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek5/BillboardRawLoader.cpp",
                                  26, (char*)0);
                    }
                    field_16 = 0;
                    uVar2 = local_38->GetMaximumFileID(0);
                    field_20 = uVar2;
                    psVar4 = (shared_ptr*)(ulong)(uVar2 + 1);
                    local_40->set_max_size((ulong)psVar4, 0);
                    if (field_20 != 0) {
                        uVar5 = 0;
                        do {
                            new (&local_50) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar4);
                            psVar4 = &local_50;
                            puVar3 = (undefined*)(field_0, &local_50, field_8, 0, (uint)uVar5,
                                                  (Priority*)Priority::HIGH, true, false, false)
                                         ->GetFile();
                            if (puVar3 == DataStatus::NOTLOADED) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("status != DataStatus::NOTLOADED",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek5/BillboardRawLoader.cpp",
                                          34, (char*)0);
                            }
                            if (puVar3 == DataStatus::READY) {
                                this_00 =
                                    (BillboardRaw*)Array<BillboardRaw, eastl::allocator>::operator[](local_40, uVar5);
                                psVar4 =
                                    (shared_ptr*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                        (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_50);
                                this_00->Decode(psVar4);
                                field_16 = field_16 + 1;
                            }
                            local_50.~shared_ptr();
                            uVar5 = uVar5 + 1;
                            pBVar6 = this;
                        } while (uVar5 < field_20);
                    }
                    pBVar6 = (BillboardRawLoader*)CONCAT71((int7)((ulong)pBVar6 >> 8), 1);
                }
            }
        }
        return (ulong)pBVar6 & 4294967295;
    }

    // 0x10097b5b0, 32 bytes, placed by class name and debug map
    // BillboardRawLoader::Destruct()
    void BillboardRawLoader::Destruct() {
        field_16 = 0;
        field_20 = 0;
        (&field_24)->clear();
    }

} // namespace jag::graphics
