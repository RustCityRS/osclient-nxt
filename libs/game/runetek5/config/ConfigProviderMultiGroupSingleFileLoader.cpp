// libs/game/runetek5/config/ConfigProviderMultiGroupSingleFileLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ConfigProviderMultiGroupSingleFileLoader.h"

namespace jag::game {
    // 0x100561190, 64 bytes, base-object constructor, placed by class name
    // ConfigProviderMultiGroupSingleFileLoader::ConfigProviderMultiGroupSingleFileLoader(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*, Array<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>*)
    void ConfigProviderMultiGroupSingleFileLoader::ConfigProviderMultiGroupSingleFileLoader(
        ConfigProvider* param_1, Js5ResourceProvider* param_2, Js5ArchiveSettings* param_3, Array* param_4) {
        new (this) ConfigProviderBatchInterface(param_1, param_2, param_3);
        field_0 = &PTR__ConfigProviderMultiGroupSingleFileLoader_100f04488;
        field_48 = param_4;
        field_56 = (char*)0;
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_64);
    }

    // 0x100561240, 16 bytes, complete-object constructor, placed by class name
    // ConfigProviderMultiGroupSingleFileLoader::ConfigProviderMultiGroupSingleFileLoader(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*, Array<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x100561250, 160 bytes, base-object constructor, placed by class name
    // ConfigProviderMultiGroupSingleFileLoader::ConfigProviderMultiGroupSingleFileLoader(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*)
    void ConfigProviderMultiGroupSingleFileLoader::ConfigProviderMultiGroupSingleFileLoader(
        ConfigProvider* param_1, Js5ResourceProvider* param_2, Js5ArchiveSettings* param_3) {
        char* pcVar1;

        new (this) ConfigProviderBatchInterface(param_1, param_2, param_3);
        field_0 = &PTR__ConfigProviderMultiGroupSingleFileLoader_100f04488;
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
                      "ConfigProviderMultiGroupSingleFileLoader.cpp",
                      22, (char*)0);
        }
    }

    // 0x100561300, 16 bytes, complete-object constructor, placed by class name
    // ConfigProviderMultiGroupSingleFileLoader::ConfigProviderMultiGroupSingleFileLoader(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*): jumps straight to the base-object constructor

    // 0x100561310, 976 bytes, placed by class name
    // ConfigProviderMultiGroupSingleFileLoader::Service()
    ulong ConfigProviderMultiGroupSingleFileLoader::Service() {
        uint uVar1;
        Array<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>* this_00;
        ConfigProvider* pCVar2;
        char* pcVar3;
        Js5ResourceProvider* this_01;
        char cVar4;
        bool bVar5;
        int iVar6;
        uint uVar7;
        undefined4 uVar8;
        undefined* puVar9;
        DownloadWaitHandler* pDVar10;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar11;
        int* piVar12;
        int* piVar13;
        ulong uVar14;
        uint* puVar15;
        uint* puVar16;
        undefined7 uVar20;
        TextureAtlasReference* this_02;
        PacketT<Array<unsigned char, eastl::allocator>>* this_03;
        PacketT* pPVar17;
        undefined8 uVar18;
        undefined8 uVar19;
        _func_decltype_nullptr* p_Var21;
        undefined8 in_stack_ffffffffffffff88;
        undefined4 uVar22;
        shared_ptr local_58;
        int local_48;
        uint local_44;
        DownloadWaitHandler* local_40;
        uint local_34;

        if (field_32 == (AnimationParameters*)0) {
            puVar9 = (undefined*)(*(code*)field_16->field_0[4])(field_16, &field_32, field_24);
            if (puVar9 == DataStatus::NOTLOADED) {
                return 0;
            }
            this_00 = (Array<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)field_48;
            if (this_00 != (Array<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)0) {
                iVar6 = field_32->GetAnimationLength();
                this_00->set_max_size((ulong)(iVar6 + 1), 0);
            }
            local_48 = field_32->GetAnimationLength();
            local_48 = local_48 + 1;
            std::make_unique<DownloadWaitHandler, unsigned int>((uint*)&local_58);
            std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_64,
                (unique_ptr*)&local_58);
            local_58.~unique_ptr();
            pDVar10 = (DownloadWaitHandler*)
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_64);
            pAVar11 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)field_32->GetMaterial();
            piVar12 = (int*)pAVar11->data();
            piVar13 = (int*)pAVar11->end();
            if (piVar12 == piVar13) {
                iVar6 = 0;
            } else {
                iVar6 = 0;
                do {
                    pDVar10->SetExists(*piVar12);
                    iVar6 = iVar6 + 1;
                    piVar12 = piVar12 + 1;
                } while (piVar12 != piVar13);
            }
            field_40 = iVar6;
            pCVar2 = field_8;
            piVar12 = &pCVar2->field_744;
            *piVar12 = *piVar12 + iVar6;
            piVar12 = &pCVar2->field_752;
            *piVar12 = *piVar12 + -1;
        }
        pDVar10 = (DownloadWaitHandler*)
            std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_64);
        uVar14 = (*(code*)field_16->field_0[8])(field_16, field_24);
        if ((char)uVar14 == '\0') {
            return uVar14;
        }
        local_44 = (uint)uVar14;
        pAVar11 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)field_32->GetMaterial();
        puVar15 = (uint*)pAVar11->data();
        puVar16 = (uint*)pAVar11->end();
        uVar22 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 32);
        uVar20 = (undefined7)((ulong)puVar16 >> 8);
        if (puVar15 == puVar16) {
            local_34 = (uint)CONCAT71(uVar20, 1);
        } else {
            local_34 = (uint)CONCAT71(uVar20, 1);
            local_40 = pDVar10;
            do {
                uVar1 = *puVar15;
                p_Var21 = (_func_decltype_nullptr*)(ulong)uVar1;
                cVar4 = pDVar10->CanCheck(uVar1);
                uVar22 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 32);
                if (cVar4 == '\0') {
                    cVar4 = pDVar10->IsComplete(uVar1);
                    local_34 = local_34 & 255;
                    if (cVar4 == '\0') {
                        local_34 = 0;
                    }
                } else {
                    new (&local_58) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var21);
                    in_stack_ffffffffffffff88 = CONCAT44(uVar22, 1);
                    puVar9 = (undefined*)(field_16, &local_58, field_24, uVar1, 0, (Priority*)Priority::HIGHEST, true,
                                          false, false)
                                 ->GetFile();
                    if (puVar9 == DataStatus::NOTLOADED) {
                    LAB_10056152e:
                        local_40->Request(uVar1);
                        local_34 = 0;
                    } else {
                        this_02 = (TextureAtlasReference*)
                                      shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                          (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_58);
                        uVar14 = this_02->GetTextureAtlas();
                        if (uVar14 < 2)
                            goto LAB_10056152e;
                        if ((((local_34 & 1) != 0) || (field_56 == (char*)0)) || (*field_56 == '\0')) {
                            if ((Array<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)field_48 ==
                                (Array<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)0) {
                                if (puVar9 == DataStatus::READY) {
                                    pcVar3 = field_56;
                                    iVar6 = field_32->GetAnimationLength();
                                    in_stack_ffffffffffffff88 = 0;
                                    eastl::function<void(
                                        unsigned int, unsigned int, unsigned int, unsigned int,
                                        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
                                        Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>,
                                              eastl::allocator> const*)>::
                                    operator()((function<void(
                                                    unsigned int, unsigned int, unsigned int, unsigned int,
                                                    shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
                                                    Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>,
                                                          eastl::allocator> const*)>*)(pcVar3 + 8),
                                               iVar6 + 1, uVar1, 1, 0, &local_58, (Array*)0);
                                }
                            } else {
                                this_03 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                    Array<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::
                                    operator[](
                                        (Array<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)
                                            field_48,
                                        (ulong)uVar1);
                                cVar4 = this_03->IsValid();
                                if (cVar4 != '\0') {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("!entry.IsValid()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/config/ConfigProviderMultiGroupSingleFileLoader.cpp",
                                              91, (char*)0);
                                }
                                pPVar17 =
                                    (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                        (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_58);
                                PacketT<Array<unsigned char, eastl::allocator>>::operator=(this_03, pPVar17);
                            }
                            local_40->Completed(uVar1);
                            IncrementLoaded();
                            this_01 = field_16;
                            uVar7 = field_24->GetX();
                            this_01->DeleteCacheGroup(uVar7, uVar1);
                        }
                    }
                    local_58.~shared_ptr();
                    pDVar10 = local_40;
                }
                uVar22 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 32);
                puVar15 = puVar15 + 1;
            } while (puVar15 != puVar16);
        }
        if ((local_34 & 1) == 0) {
            return 0;
        }
        if ((field_56 != (char*)0) && (bVar5 = ((field_56 + 40))->operator_cast_to_bool(), bVar5)) {
            eastl::function<bool()>::operator()((function<bool()>*)(field_56 + 40));
        }
        uVar18 = logger::default_logger();
        uVar8 = field_24->GetX();
        uVar19 = field_24->GetSpritesArchive();
        logger::Logger::Log(uVar18, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/ConfigProviderMultiGroupSingleFileLoader.cpp",
                            120, "ConfigProvider: Loaded all data for archive: %u (%s)", CONCAT44(uVar22, uVar8),
                            uVar19);
        return (ulong)local_44;
    }

} // namespace jag::game
