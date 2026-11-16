// libs/graphics/runetek5/ParticleRawLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ParticleRawLoader.h"

namespace jag::graphics {
    // 0x10002d850: ParticleRawLoader::GetEmitterTypes() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x100049810: ParticleRawLoader::GetEffectorTypes() const has the same machine code as oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const

    // 0x100061e30: ParticleRawLoader::GetMaxEffectorID() const has the same machine code as render::RenderStats::GetTriangleCount() const

    // 0x10018b300: ParticleRawLoader::GetMaxEmitterID() const has the same machine code as oldscape::jagex3::Js5::GetIndexVersion() const

    // 0x10097d910
    void ParticleRawLoader::Initialise(Js5ResourceProvider* js5ResourceProvider,
                                       const Js5ArchiveSettings* js5ArchiveSettings, unsigned int arg3,
                                       unsigned int arg4) {
        field_0 = js5ResourceProvider;
        field_8 = js5ArchiveSettings;
        field_16 = arg3;
        field_20 = arg4;
    }

    // 0x10097d930
    void ParticleRawLoader::Destruct() {
        *(uint64_t*)&field_24 = 0;
        field_32.set_max_size(0, 0);
        field_56 = 0;
        m_maxEffectorID = 0;
        field_64.set_max_size(0, 0);
    }

    // 0x10097dc20
    bool ParticleRawLoader::MainLogic() {
        bool cVar1;
        int iVar2;
        uint8_t* puVar3;
        ParticleEmitterRaw* this_00;
        long lVar4;
        unsigned long uVar5;
        ParticleEffectorRaw* this_01;
        PacketT<Array<unsigned char> _>* pPVar6;
        unsigned int arg4;
        unsigned long uVar7;
        uint64_t unaff_R15;
        Array<ParticleEmitterRaw>* pAVar8;
        bool bVar9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ParticleRawLoader* local_48;
        Js5Index* local_40;
        Array<ParticleEmitterRaw>* local_38;

        if (field_0 == nullptr) {
            LogAssert("m_resourceProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                      "ParticleRawLoader.cpp",
                      34, nullptr);
        }
        if ((field_0 == nullptr) || (field_8 == nullptr)) {
            bVar9 = false;
        } else {
            local_38 = (Array<ParticleEmitterRaw>*)&field_32;
            cVar1 = local_38->empty();
            uVar7 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
            if (cVar1) {
                puVar3 = (uint8_t*)field_0->GroupReady(*field_8, field_16, (Priority*)Priority::HIGH, true);
                if (puVar3 == DataStatus::READY) {
                    local_40 = nullptr;
                    (**(void (**)(...)) & ((Js5Index*)field_0->_vptr)->m_indexVersion)((Js5Index**)field_0,
                                                                                       (Js5ArchiveSettings*)&local_40);
                    if (local_40 == nullptr) {
                        LogAssert("particleIndex",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek5/ParticleRawLoader.cpp",
                                  49, nullptr);
                    }
                    iVar2 = local_40->GetMaximumFileID(field_16);
                    pAVar8 = local_38;
                    m_maxEmitterID = iVar2;
                    local_48 = this;
                    local_38->set_max_size((unsigned long)(iVar2 + 1), 0);
                    lVar4 = pAVar8->end();
                    if (lVar4 != 0) {
                        uVar7 = 0;
                        do {
                            local_58 = shared_ptr();
                            arg4 = (unsigned int)uVar7;
                            puVar3 = (uint8_t*)local_48->field_0->GetFile(
                                local_58, *local_48->field_8, local_48->field_16, arg4, (Priority*)Priority::HIGH, true,
                                false, false);
                            if (puVar3 == DataStatus::NOTLOADED) {
                                LogAssert("status != DataStatus::NOTLOADED",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek5/ParticleRawLoader.cpp",
                                          58, nullptr);
                            }
                            if (puVar3 == DataStatus::READY) {
                                this_00 = (ParticleEmitterRaw*)(*local_38)[uVar7];
                                pPVar6 = (PacketT<Array<unsigned char> _>*)*local_58;
                                this_00->Decode(arg4, *pPVar6);
                                *(int*)&local_48->field_24 = *(int*)&local_48->field_24 + 1;
                            }
                            uVar7 = (unsigned long)(arg4 + 1);
                            uVar5 = local_38->end();
                            pAVar8 = (Array<ParticleEmitterRaw>*)&Priority::HIGH;
                        } while (uVar7 < uVar5);
                    }
                    uVar7 = (((uint64_t)((int64_t)((unsigned long)pAVar8 >> 8)) << 8) | (uint8_t)1);
                    this = local_48;
                } else {
                    uVar7 = 0;
                }
            }
            local_38 = (Array<ParticleEmitterRaw>*)&field_64;
            cVar1 = local_38->empty();
            if (cVar1) {
                puVar3 = (uint8_t*)field_0->GroupReady(*field_8, field_20, (Priority*)Priority::HIGH, true);
                if (puVar3 == DataStatus::READY) {
                    local_48 = (ParticleRawLoader*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)((int)uVar7));
                    local_40 = nullptr;
                    (**(void (**)(...)) & ((Js5Index*)field_0->_vptr)->m_indexVersion)((Js5Index**)field_0,
                                                                                       (Js5ArchiveSettings*)&local_40);
                    if (local_40 == nullptr) {
                        LogAssert("particleIndex",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek5/ParticleRawLoader.cpp",
                                  79, nullptr);
                    }
                    iVar2 = local_40->GetMaximumFileID(field_20);
                    pAVar8 = local_38;
                    m_maxEffectorID = iVar2;
                    local_38->set_max_size((unsigned long)(iVar2 + 1), 0);
                    lVar4 = pAVar8->end();
                    if (lVar4 != 0) {
                        uVar7 = 0;
                        do {
                            local_58 = shared_ptr();
                            puVar3 = (uint8_t*)field_0->GetFile(local_58, *field_8, field_20, (unsigned int)uVar7,
                                                                (Priority*)Priority::HIGH, true, false, false);
                            if (puVar3 == DataStatus::NOTLOADED) {
                                LogAssert("status != DataStatus::NOTLOADED",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek5/ParticleRawLoader.cpp",
                                          88, nullptr);
                            }
                            if (puVar3 == DataStatus::READY) {
                                this_01 = (ParticleEffectorRaw*)(*local_38)[uVar7];
                                pPVar6 = (PacketT<Array<unsigned char> _>*)*local_58;
                                this_01->Decode(*pPVar6);
                                field_56 = field_56 + 1;
                            }
                            uVar7 = (unsigned long)((unsigned int)uVar7 + 1);
                            uVar5 = local_38->end();
                        } while (uVar7 < uVar5);
                    }
                    uVar7 = (unsigned long)local_48 & 4294967295;
                } else {
                    uVar7 = 0;
                }
            }
            bVar9 = (char)uVar7 != '\0';
        }
        return bVar9;
    }

} // namespace jag::graphics
