// libs/graphics/runetek7/materials/MaterialManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "MaterialManager.h"

namespace jag::graphics {
    // 0x1003c9110: the linker folded this into game::MapArea::GetTargetBounds() const, which has identical code
    Material MaterialManager::GetDefaultMaterial() const;

    // 0x1008c70e0, 16 bytes, placed by class name and debug map
    // MaterialManager::Initialise(MaterialRawProvider*)
    void MaterialManager::Initialise(MaterialRawProvider* param_1) {
        BucketAllocatorEASTL* in_RDX;

        new (this)
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(param_1, in_RDX);
    }

    // 0x1008c70f0, 16 bytes, placed by class name and debug map
    // MaterialManager::Destroy()
    void MaterialManager::Destroy() {
        Destruct();
    }

    // 0x1008c7100, 16 bytes, placed by class name and debug map
    // MaterialManager::Serialise(PacketT<Array<unsigned char, eastl::allocator> >&) const
    void MaterialManager::Serialise(PacketT* param_1) {}

    // 0x1008c7110, 320 bytes, placed by class name and debug map
    // MaterialManager::MainLogic()
    void MaterialManager::MainLogic() {
        undefined1* this_00;
        char cVar1;
        undefined4 uVar3;
        undefined8 in_RAX;
        MaterialRaw* pMVar4;
        Array<MaterialRaw, eastl::allocator>* this_01;
        Skybox* this_02;
        Material* this_03;
        undefined8 uVar5;
        ulong uVar6;

        this_00 = &field_528;
        cVar1 = this_00->empty();
        if (cVar1 != '\0') {
            cVar1 = MainLogic();
            if (cVar1 != '\0') {
                pMVar4 = (MaterialRaw*)GetMaterial();
                (m_defaultMaterial, -1, pMVar4)->Initialise();
                field_292 = GetLevel();
                uVar3 = GetPos();
                field_288 = uVar3;
                this_01 = (Array<MaterialRaw, eastl::allocator>*)GetScreen();
                this_00->set_max_size((ulong)field_292, 0);
                uVar3 = (undefined4)((ulong)in_RAX >> 32);
                if (field_292 != 0) {
                    uVar6 = 0;
                    do {
                        this_02 = (Skybox*)Array<MaterialRaw, eastl::allocator>::operator[](this_01, uVar6);
                        cVar1 = this_02->ShowSkybox();
                        if (cVar1 != '\0') {
                            this_03 = (Material*)Array<Material, eastl::allocator>::operator[](
                                (Array<Material, eastl::allocator>*)this_00, uVar6);
                            pMVar4 = (MaterialRaw*)Array<MaterialRaw, eastl::allocator>::operator[](this_01, uVar6);
                            this_03->Initialise((int)uVar6, pMVar4);
                        }
                        uVar3 = (undefined4)((ulong)in_RAX >> 32);
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < field_292);
                }
                Destruct();
                uVar5 = logger::default_logger();
                logger::Logger::Log(uVar5, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/materials/MaterialManager.cpp",
                                    54, "MaterialManager: Loaded %u materials from pack!", CONCAT44(uVar3, field_288));
            }
        }
    }

} // namespace jag::graphics
