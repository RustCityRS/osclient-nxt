// libs/graphics/runetek7/materials/MaterialManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "MaterialManager.h"

namespace jag::graphics {
    // 0x1003c9110: MaterialManager::GetDefaultMaterial() const has the same machine code as game::MapArea::GetTargetBounds() const

    // 0x1008c70e0
    void MaterialManager::Initialise(MaterialRawProvider* materialRawProvider) {
        new (this) eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(
            materialRawProvider);
    }

    // 0x1008c70f0
    void MaterialManager::Destroy() {
        Destruct();
    }

    // 0x1008c7100
    void MaterialManager::Serialise(PacketT<Array<unsigned char>>& arg1) const {}

    // 0x1008c7110
    void MaterialManager::MainLogic() {
        uint32_t uVar3;
        uint64_t in_RAX;
        MaterialRaw* pMVar4;
        Array<MaterialRaw>* this_01;
        Material* this_03;
        unsigned long arg1;

        uint8_t* this_00 = &field_528;
        if (this_00->empty()) {
            if (MainLogic()) {
                pMVar4 = (MaterialRaw*)GetMaterial();
                m_defaultMaterial->Initialise(-1, *pMVar4);
                field_292 = GetLevel();
                uVar3 = GetPos();
                field_288 = uVar3;
                this_01 = (Array<MaterialRaw>*)GetScreen();
                this_00->set_max_size((unsigned long)field_292, 0);
                uVar3 = (uint32_t)((unsigned long)in_RAX >> 32);
                if (field_292 != 0) {
                    arg1 = 0;
                    do {
                        if (((Skybox*)(*this_01)[arg1])->ShowSkybox()) {
                            this_03 = (Material*)(*this_00)[arg1];
                            pMVar4 = (MaterialRaw*)(*this_01)[arg1];
                            this_03->Initialise((int)arg1, *pMVar4);
                        }
                        uVar3 = (uint32_t)((unsigned long)in_RAX >> 32);
                        arg1 = arg1 + 1;
                    } while (arg1 < field_292);
                }
                Destruct();
                (logger::default_logger())
                    ->Log(false, 8,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/MaterialManager.cpp",
                          54, "MaterialManager: Loaded %u materials from pack!",
                          (((uint64_t)uVar3 << 32) | (uint32_t)field_288));
            }
        }
    }

} // namespace jag::graphics
