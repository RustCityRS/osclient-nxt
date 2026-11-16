// libs/graphics/runetek5/ParticleRawLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ParticleRawLoader.h"

namespace jag::graphics {
    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    ParticleRawLoader::GetEmitterTypes() const;

    // 0x100049810: the linker folded this into oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const, which has identical code
    ParticleRawLoader::GetEffectorTypes() const;

    // 0x100061e30: the linker folded this into render::RenderStats::GetTriangleCount() const, which has identical code
    ParticleRawLoader::GetMaxEffectorID() const;

    // 0x10018b300: the linker folded this into oldscape::jagex3::Js5::GetIndexVersion() const, which has identical code
    ParticleRawLoader::GetMaxEmitterID() const;

    // 0x10097d910, 32 bytes, placed by class name and debug map
    // ParticleRawLoader::Initialise(Js5ResourceProvider*, Js5ArchiveSettings const*, unsigned int, unsigned int)
    void ParticleRawLoader::Initialise(Js5ResourceProvider* param_1, Js5ArchiveSettings* param_2, uint param_3,
                                       uint param_4) {
        field_0 = param_1;
        field_8 = param_2;
        field_16 = param_3;
        field_20 = param_4;
    }

    // 0x10097d930, 64 bytes, placed by class name and debug map
    // ParticleRawLoader::Destruct()
    void ParticleRawLoader::Destruct() {
        *(undefined8*)&field_24 = 0;
        (&field_32, 0, 0)->set_max_size();
        field_56 = 0;
        field_60 = 0;
        (&field_64, 0, 0)->set_max_size();
    }

    // 0x10097dc20, 1008 bytes, placed by class name and debug map
    // ParticleRawLoader::MainLogic()
    bool ParticleRawLoader::MainLogic() {
        char cVar1;
        int iVar2;
        undefined* puVar3;
        shared_ptr* psVar4;
        ParticleEmitterRaw* this_00;
        PacketT* pPVar5;
        long lVar6;
        ulong uVar7;
        ParticleEffectorRaw* this_01;
        shared_ptr* psVar8;
        shared_ptr* psVar9;
        uint uVar10;
        ulong uVar11;
        undefined8 unaff_R15;
        Array<ParticleEmitterRaw, eastl::allocator>* pAVar12;
        bool bVar13;
        shared_ptr local_58;
        ParticleRawLoader* local_48;
        Js5Index* local_40;
        Array<ParticleEmitterRaw, eastl::allocator>* local_38;

        if (field_0 == (Js5ResourceProvider*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_resourceProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                      "ParticleRawLoader.cpp",
                      34, (char*)0);
        }
        if ((field_0 == (Js5ResourceProvider*)0) || (field_8 == (Js5ArchiveSettings*)0)) {
            bVar13 = false;
        } else {
            local_38 = (Array<ParticleEmitterRaw, eastl::allocator>*)&field_32;
            cVar1 = local_38->empty();
            uVar11 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
            if (cVar1 != '\0') {
                puVar3 = (undefined*)(field_0, field_8, field_16, (Priority*)Priority::HIGH, true)->GroupReady();
                if (puVar3 == DataStatus::READY) {
                    local_40 = (Js5Index*)0;
                    (*(code*)field_0->field_0[4])(field_0, &local_40, field_8);
                    if (local_40 == (Js5Index*)0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("particleIndex",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek5/ParticleRawLoader.cpp",
                                  49, (char*)0);
                    }
                    iVar2 = local_40->GetMaximumFileID(field_16);
                    pAVar12 = local_38;
                    field_28 = iVar2;
                    psVar8 = (shared_ptr*)(ulong)(iVar2 + 1);
                    local_48 = this;
                    local_38->set_max_size((ulong)psVar8, 0);
                    lVar6 = pAVar12->end();
                    if (lVar6 != 0) {
                        psVar9 = (shared_ptr*)0;
                        do {
                            new (&local_58) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar8);
                            uVar10 = (uint)psVar9;
                            psVar8 = &local_58;
                            puVar3 = (undefined*)(local_48->field_0, &local_58, local_48->field_8, local_48->field_16,
                                                  uVar10, (Priority*)Priority::HIGH, true, false, false)
                                         ->GetFile();
                            if (puVar3 == DataStatus::NOTLOADED) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("status != DataStatus::NOTLOADED",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek5/ParticleRawLoader.cpp",
                                          58, (char*)0);
                            }
                            if (puVar3 == DataStatus::READY) {
                                this_00 = (ParticleEmitterRaw*)Array<ParticleEmitterRaw, eastl::allocator>::operator[](
                                    local_38, (ulong)psVar9);
                                pPVar5 =
                                    (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                        (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_58);
                                this_00->Decode(uVar10, pPVar5);
                                *(int*)&local_48->field_24 = *(int*)&local_48->field_24 + 1;
                                psVar8 = psVar9;
                            }
                            local_58.~shared_ptr();
                            psVar9 = (shared_ptr*)(ulong)(uVar10 + 1);
                            psVar4 = (shared_ptr*)local_38->end();
                            pAVar12 = (Array<ParticleEmitterRaw, eastl::allocator>*)&Priority::HIGH;
                        } while (psVar9 < psVar4);
                    }
                    uVar11 = CONCAT71((int7)((ulong)pAVar12 >> 8), 1);
                    this = local_48;
                } else {
                    uVar11 = 0;
                }
            }
            local_38 = (Array<ParticleEmitterRaw, eastl::allocator>*)&field_64;
            cVar1 = local_38->empty();
            if (cVar1 != '\0') {
                puVar3 = (undefined*)(field_0, field_8, field_20, (Priority*)Priority::HIGH, true)->GroupReady();
                if (puVar3 == DataStatus::READY) {
                    local_48 = (ParticleRawLoader*)CONCAT44(local_48._4_4_, (int)uVar11);
                    local_40 = (Js5Index*)0;
                    (*(code*)field_0->field_0[4])(field_0, &local_40, field_8);
                    if (local_40 == (Js5Index*)0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("particleIndex",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek5/ParticleRawLoader.cpp",
                                  79, (char*)0);
                    }
                    iVar2 = local_40->GetMaximumFileID(field_20);
                    pAVar12 = local_38;
                    field_60 = iVar2;
                    psVar8 = (shared_ptr*)(ulong)(iVar2 + 1);
                    local_38->set_max_size((ulong)psVar8, 0);
                    lVar6 = pAVar12->end();
                    if (lVar6 != 0) {
                        uVar11 = 0;
                        do {
                            new (&local_58) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar8);
                            psVar8 = &local_58;
                            puVar3 = (undefined*)(field_0, &local_58, field_8, field_20, (uint)uVar11,
                                                  (Priority*)Priority::HIGH, true, false, false)
                                         ->GetFile();
                            if (puVar3 == DataStatus::NOTLOADED) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("status != DataStatus::NOTLOADED",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek5/ParticleRawLoader.cpp",
                                          88, (char*)0);
                            }
                            if (puVar3 == DataStatus::READY) {
                                this_01 =
                                    (ParticleEffectorRaw*)Array<ParticleEffectorRaw, eastl::allocator>::operator[](
                                        (Array<ParticleEffectorRaw, eastl::allocator>*)local_38, uVar11);
                                psVar8 =
                                    (shared_ptr*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                        (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_58);
                                this_01->Decode(psVar8);
                                field_56 = field_56 + 1;
                            }
                            local_58.~shared_ptr();
                            uVar11 = (ulong)((uint)uVar11 + 1);
                            uVar7 = local_38->end();
                        } while (uVar11 < uVar7);
                    }
                    uVar11 = (ulong)local_48 & 4294967295;
                } else {
                    uVar11 = 0;
                }
            }
            bVar13 = (char)uVar11 != '\0';
        }
        return bVar13;
    }

} // namespace jag::graphics
