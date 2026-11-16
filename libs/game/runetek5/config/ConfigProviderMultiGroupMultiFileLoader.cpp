// libs/game/runetek5/config/ConfigProviderMultiGroupMultiFileLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ConfigProviderMultiGroupMultiFileLoader.h"

namespace jag::game {
    // 0x10056bee0, 64 bytes, base-object constructor, placed by class name
    // ConfigProviderMultiGroupMultiFileLoader::ConfigProviderMultiGroupMultiFileLoader(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*, Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>, eastl::allocator>*)
    void ConfigProviderMultiGroupMultiFileLoader::ConfigProviderMultiGroupMultiFileLoader(ConfigProvider* param_1,
                                                                                          Js5ResourceProvider* param_2,
                                                                                          Js5ArchiveSettings* param_3,
                                                                                          Array* param_4) {
        new (this) ConfigProviderBatchInterface(param_1, param_2, param_3);
        field_0 = &PTR__ConfigProviderMultiGroupMultiFileLoader_100f04858;
        field_48 = param_4;
        field_56 = (char*)0;
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_64);
    }

    // 0x10056bf20, 16 bytes, complete-object constructor, placed by class name
    // ConfigProviderMultiGroupMultiFileLoader::ConfigProviderMultiGroupMultiFileLoader(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*, Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x10056bf30, 160 bytes, base-object constructor, placed by class name
    // ConfigProviderMultiGroupMultiFileLoader::ConfigProviderMultiGroupMultiFileLoader(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*)
    void ConfigProviderMultiGroupMultiFileLoader::ConfigProviderMultiGroupMultiFileLoader(ConfigProvider* param_1,
                                                                                          Js5ResourceProvider* param_2,
                                                                                          Js5ArchiveSettings* param_3) {
        char* pcVar1;

        new (this) ConfigProviderBatchInterface(param_1, param_2, param_3);
        field_0 = &PTR__ConfigProviderMultiGroupMultiFileLoader_100f04858;
        field_48 = (Array*)0;
        field_56 = (char*)0;
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_64);
        pcVar1 = (char*)(*(code*)param_1->field_0[3])(param_1, param_3);
        field_56 = pcVar1;
        if (pcVar1 == (char*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_decoderInfo",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigProviderMultiGroupMultiFileLoader.cpp",
                      23, (char*)0);
        }
    }

    // 0x10056bfd0, 16 bytes, complete-object constructor, placed by class name
    // ConfigProviderMultiGroupMultiFileLoader::ConfigProviderMultiGroupMultiFileLoader(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*): jumps straight to the base-object constructor

    // 0x10056bfe0, 1152 bytes, placed by class name
    // ConfigProviderMultiGroupMultiFileLoader::Service()
    ulong ConfigProviderMultiGroupMultiFileLoader::Service() {
        undefined1* this_00;
        Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>, eastl::allocator>*
            this_01;
        ConfigProvider* pCVar1;
        char* pcVar2;
        Js5ResourceProvider* this_02;
        char cVar3;
        bool bVar4;
        int iVar5;
        uint uVar6;
        undefined4 uVar7;
        undefined* puVar8;
        DownloadWaitHandler* pDVar9;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar10;
        int* piVar11;
        int* piVar12;
        ulong uVar13;
        uint* puVar14;
        uint* puVar15;
        undefined7 uVar20;
        vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>* pvVar16;
        PacketT<Array<unsigned char, eastl::allocator>>* this_03;
        shared_ptr* psVar17;
        undefined8 uVar18;
        undefined8 uVar19;
        shared_ptr* psVar21;
        shared_ptr* psVar22;
        ConfigProviderMultiGroupMultiFileLoader* pCVar23;
        undefined8 in_stack_ffffffffffffff68;
        undefined4 uVar24;
        shared_ptr local_68;
        shared_ptr* local_58;
        int local_50;
        uint local_4c;
        ConfigProviderMultiGroupMultiFileLoader* local_48;
        shared_ptr* local_40;
        uint local_34;

        local_48 = this;
        if (field_32 == (AnimationParameters*)0) {
            puVar8 = (undefined*)(*(code*)field_16->field_0[4])(field_16, &field_32, field_24);
            if (puVar8 == DataStatus::NOTLOADED) {
                return 0;
            }
            this_01 = (Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>,
                             eastl::allocator>*)field_48;
            if (this_01 != (Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>,
                                  eastl::allocator>*)0) {
                iVar5 = field_32->GetAnimationLength();
                this_01->set_max_size((ulong)(iVar5 + 1), 0);
            }
            pCVar23 = local_48;
            local_50 = local_48->field_32->GetAnimationLength();
            local_50 = local_50 + 1;
            std::make_unique<DownloadWaitHandler, unsigned int>((uint*)&local_68);
            this_00 = &pCVar23->field_64;
            std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)this_00,
                (unique_ptr*)&local_68);
            local_68.~unique_ptr();
            pDVar9 = (DownloadWaitHandler*)
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)this_00);
            pAVar10 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)pCVar23->field_32->GetMaterial();
            piVar11 = (int*)pAVar10->data();
            piVar12 = (int*)pAVar10->end();
            if (piVar11 == piVar12) {
                iVar5 = 0;
            } else {
                iVar5 = 0;
                do {
                    pDVar9->SetExists(*piVar11);
                    iVar5 = iVar5 + 1;
                    piVar11 = piVar11 + 1;
                } while (piVar11 != piVar12);
            }
            *(int*)&local_48->field_40 = iVar5;
            pCVar1 = local_48->field_8;
            piVar11 = &pCVar1->field_744;
            *piVar11 = *piVar11 + iVar5;
            piVar11 = &pCVar1->field_752;
            *piVar11 = *piVar11 + -1;
        }
        pCVar23 = local_48;
        pDVar9 = (DownloadWaitHandler*)
            std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&local_48->field_64);
        uVar13 = (*(code*)pCVar23->field_16->field_0[8])(pCVar23->field_16, pCVar23->field_24);
        if ((char)uVar13 == '\0') {
            return uVar13;
        }
        local_4c = (uint)uVar13;
        pAVar10 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)pCVar23->field_32->GetMaterial();
        puVar14 = (uint*)pAVar10->data();
        puVar15 = (uint*)pAVar10->end();
        uVar24 = (undefined4)((ulong)in_stack_ffffffffffffff68 >> 32);
        uVar20 = (undefined7)((ulong)puVar15 >> 8);
        if (puVar14 == puVar15) {
            local_34 = (uint)CONCAT71(uVar20, 1);
        } else {
            local_34 = (uint)CONCAT71(uVar20, 1);
            do {
                uVar6 = *puVar14;
                psVar17 = (shared_ptr*)(ulong)uVar6;
                cVar3 = pDVar9->CanCheck(uVar6);
                if (cVar3 == '\0') {
                    cVar3 = pDVar9->IsComplete(uVar6);
                    local_34 = local_34 & 255;
                    if (cVar3 == '\0') {
                        local_34 = 0;
                    }
                } else {
                    puVar8 =
                        (undefined*)(pCVar23->field_16, pCVar23->field_24, uVar6, (Priority*)Priority::HIGHEST, true)
                            ->GroupReady();
                    if (puVar8 == DataStatus::READY) {
                        local_40 = psVar17;
                        if ((((local_34 & 1) != 0) || (pCVar23->field_56 == (char*)0)) ||
                            (*pCVar23->field_56 == '\0')) {
                            pDVar9->Completed(uVar6);
                            pCVar23->IncrementLoaded();
                            psVar21 = psVar17;
                            uVar6 = (pCVar23->field_32, uVar6)->GetMaximumFileID();
                            psVar22 = (shared_ptr*)(ulong)uVar6;
                            if ((Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>,
                                       eastl::allocator>*)pCVar23->field_48 !=
                                (Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>,
                                       eastl::allocator>*)0) {
                                pvVar16 = (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                    Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>,
                                                        eastl::allocator>,
                                          eastl::allocator>::
                                    operator[]((Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>,
                                                                    eastl::allocator>,
                                                      eastl::allocator>*)pCVar23->field_48,
                                               (ulong)psVar17);
                                psVar21 = psVar22;
                                eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>,
                                              eastl::allocator>::resize_uninitialized(pvVar16, (ulong)psVar22);
                            }
                            local_58 = psVar22;
                            if (psVar22 != (shared_ptr*)0) {
                                uVar13 = 0;
                                do {
                                    uVar24 = (undefined4)((ulong)in_stack_ffffffffffffff68 >> 32);
                                    psVar17 = &local_68;
                                    new (psVar17) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar21);
                                    in_stack_ffffffffffffff68 = CONCAT44(uVar24, 1);
                                    puVar8 =
                                        (undefined*)(pCVar23->field_16, psVar17, pCVar23->field_24, (uint)local_40,
                                                     (uint)uVar13, (Priority*)Priority::HIGHEST, true, false, false)
                                            ->GetFile();
                                    if (puVar8 == DataStatus::NOTLOADED) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert(
                                            "status != DataStatus::NOTLOADED",
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/config/ConfigProviderMultiGroupMultiFileLoader.cpp",
                                            97, (char*)0);
                                    }
                                    if ((Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>,
                                                             eastl::allocator>,
                                               eastl::allocator>*)pCVar23->field_48 ==
                                        (Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>,
                                                             eastl::allocator>,
                                               eastl::allocator>*)0) {
                                        if (puVar8 == DataStatus::READY) {
                                            pcVar2 = local_48->field_56;
                                            iVar5 = pCVar23->field_32->GetAnimationLength();
                                            pCVar23 = local_48;
                                            psVar17 = (shared_ptr*)(ulong)(iVar5 + 1U);
                                            in_stack_ffffffffffffff68 = 0;
                                            eastl::function<void(
                                                unsigned int, unsigned int, unsigned int, unsigned int,
                                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
                                                Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>,
                                                      eastl::allocator> const*)>::
                                            operator()(
                                                (function<void(
                                                     unsigned int, unsigned int, unsigned int, unsigned int,
                                                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
                                                     Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>,
                                                           eastl::allocator> const*)>*)(pcVar2 + 8),
                                                iVar5 + 1U, (uint)local_40, (uint)local_58, (uint)uVar13, &local_68,
                                                (Array*)0);
                                        }
                                    } else {
                                        pvVar16 = (vector<PacketT<Array<unsigned char, eastl::allocator>>,
                                                          eastl::allocator>*)
                                            Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>,
                                                                eastl::allocator>,
                                                  eastl::allocator>::
                                            operator[](
                                                (Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>,
                                                                     eastl::allocator>,
                                                       eastl::allocator>*)pCVar23->field_48,
                                                (ulong)local_40);
                                        this_03 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                            eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>,
                                                          eastl::allocator>::operator[](pvVar16, uVar13);
                                        if (puVar8 == DataStatus::MISSING) {
                                            psVar17 = (shared_ptr*)0;
                                            PacketT<Array<unsigned char, eastl::allocator>>::PacketT(this_03, 0);
                                        } else {
                                            psVar17 = (shared_ptr*)
                                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                                    (shared_ptr<
                                                        PacketT<Array<unsigned char, eastl::allocator>>>*)&local_68);
                                            PacketT<Array<unsigned char, eastl::allocator>>::PacketT(this_03,
                                                                                                     (PacketT*)psVar17);
                                        }
                                    }
                                    local_68.~shared_ptr();
                                    uVar13 = uVar13 + 1;
                                    psVar21 = psVar17;
                                } while (local_58 != (shared_ptr*)uVar13);
                            }
                            this_02 = pCVar23->field_16;
                            uVar6 = pCVar23->field_24->GetX();
                            this_02->DeleteCacheGroup(uVar6, (uint)local_40);
                        }
                    } else {
                        pDVar9->Request(uVar6);
                        local_34 = 0;
                    }
                }
                uVar24 = (undefined4)((ulong)in_stack_ffffffffffffff68 >> 32);
                puVar14 = puVar14 + 1;
            } while (puVar14 != puVar15);
        }
        if ((local_34 & 1) == 0) {
            return 0;
        }
        if ((pCVar23->field_56 != (char*)0) && (bVar4 = ((pCVar23->field_56 + 40))->operator_cast_to_bool(), bVar4)) {
            eastl::function<bool()>::operator()((function<bool()>*)(pCVar23->field_56 + 40));
        }
        uVar18 = logger::default_logger();
        uVar7 = pCVar23->field_24->GetX();
        uVar19 = pCVar23->field_24->GetSpritesArchive();
        logger::Logger::Log(uVar18, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/ConfigProviderMultiGroupMultiFileLoader.cpp",
                            134, "ConfigProvider: Loaded all data for archive: %u (%s)", CONCAT44(uVar24, uVar7),
                            uVar19);
        return (ulong)local_4c;
    }

} // namespace jag::game
