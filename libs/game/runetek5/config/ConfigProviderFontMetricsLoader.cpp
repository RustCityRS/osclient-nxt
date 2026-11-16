// libs/game/runetek5/config/ConfigProviderFontMetricsLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ConfigProviderFontMetricsLoader.h"

namespace jag::game {
    // 0x10056b6a0, 64 bytes, placed by class name and debug map
    // ConfigProviderFontMetricsLoader::Service()
    undefined8 ConfigProviderFontMetricsLoader::Service() {
        char cVar1;

        cVar1 = EnsureInitialised(this);
        if ((cVar1 == '\0') || (cVar1 = PreloadVectorFontSources(this), cVar1 == '\0')) {
            return 0;
        }
        return ProcessFontMetrics(this);
    }

    // 0x10056b6e0, 512 bytes, placed by class name and debug map
    // ConfigProviderFontMetricsLoader::EnsureInitialised()
    undefined8 ConfigProviderFontMetricsLoader::EnsureInitialised() {
        ConfigProvider* pCVar1;
        uint uVar2;
        int iVar3;
        undefined8 uVar4;
        undefined* puVar5;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        int* piVar6;
        int* piVar7;
        DownloadWaitHandler* pDVar8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_01;
        unique_ptr local_48[8];
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_40;
        int local_34;

        if ((field_32 == (AnimationParameters*)0) || (uVar4 = 1, field_128 == (AnimationParameters*)0)) {
            puVar5 = (undefined*)(*(code*)field_16->field_0[4])(field_16, &field_32, field_24);
            if ((puVar5 == DataStatus::NOTLOADED) || (puVar5 = (undefined*)(*(code*)field_16->field_0[4])(
                                                          field_16, &field_128, Js5Archive::JS5_TRUETYPEFONTS),
                                                      puVar5 == DataStatus::NOTLOADED)) {
                uVar4 = 0;
            } else {
                local_34 = field_32->GetAnimationLength();
                local_34 = local_34 + 1;
                std::make_unique<DownloadWaitHandler, unsigned int>((uint*)local_48);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_88, local_48);
                local_48->~unique_ptr();
                this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_32->GetMaterial();
                uVar2 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                (&field_48, (ulong)uVar2)->reserve();
                piVar6 = (int*)this_00->data();
                local_40 = this_00;
                piVar7 = (int*)this_00->end();
                for (; piVar6 != piVar7; piVar6 = piVar6 + 1) {
                    iVar3 = *piVar6;
                    pDVar8 =
                        (DownloadWaitHandler*)
                            std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator->(
                                (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_88);
                    pDVar8->SetExists(iVar3);
                }
                iVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_40);
                field_40 = iVar3;
                local_34 = field_128->GetAnimationLength();
                local_34 = local_34 + 1;
                std::make_unique<DownloadWaitHandler, unsigned int>((uint*)local_48);
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_96, local_48);
                local_48->~unique_ptr();
                this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)field_128->GetMaterial();
                iVar3 = field_128->GetAnimationLength();
                (&field_104, (ulong)(iVar3 + 1), 0)->set_max_size();
                piVar6 = (int*)this_01->data();
                local_40 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01;
                piVar7 = (int*)this_01->end();
                for (; piVar6 != piVar7; piVar6 = piVar6 + 1) {
                    iVar3 = *piVar6;
                    pDVar8 =
                        (DownloadWaitHandler*)
                            std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator->(
                                (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_96);
                    pDVar8->SetExists(iVar3);
                }
                iVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_40);
                iVar3 = iVar3 + field_40;
                field_40 = iVar3;
                pCVar1 = field_8;
                piVar6 = &pCVar1->field_744;
                *piVar6 = *piVar6 + iVar3;
                piVar6 = &pCVar1->field_752;
                *piVar6 = *piVar6 + -1;
                uVar4 = 1;
            }
        }
        return uVar4;
    }

    // 0x10056b8e0, 464 bytes, placed by class name and debug map
    // ConfigProviderFontMetricsLoader::PreloadVectorFontSources()
    uint ConfigProviderFontMetricsLoader::PreloadVectorFontSources() {
        uint uVar1;
        Js5ResourceProvider* this_00;
        ConfigProviderFontMetricsLoader* pCVar2;
        char cVar3;
        uint uVar4;
        DownloadWaitHandler* this_01;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_02;
        uint* puVar5;
        uint* puVar6;
        undefined* puVar7;
        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>* this_03;
        _func_decltype_nullptr* p_Var8;
        shared_ptr local_60;
        Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator>* local_50;
        uint* local_48;
        ConfigProviderFontMetricsLoader* local_40;
        uint local_34;

        local_40 = this;
        cVar3 = (*(code*)field_16->field_0[8])(field_16, Js5Archive::JS5_TRUETYPEFONTS);
        pCVar2 = local_40;
        if (cVar3 == '\0') {
            local_34 = 0;
        } else {
            this_01 = (DownloadWaitHandler*)
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&local_40->field_96);
            this_02 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)pCVar2->field_128->GetMaterial();
            puVar5 = (uint*)this_02->data();
            puVar6 = (uint*)this_02->end();
            if (puVar5 == puVar6) {
                local_34 = (uint)CONCAT71((int7)((ulong)puVar6 >> 8), 1);
            } else {
                local_50 =
                    (Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)&local_40
                        ->field_104;
                local_34 = (uint)CONCAT71((int7)((ulong)local_50 >> 8), 1);
                local_48 = puVar6;
                do {
                    uVar1 = *puVar5;
                    p_Var8 = (_func_decltype_nullptr*)(ulong)uVar1;
                    cVar3 = this_01->CanCheck(uVar1);
                    if (cVar3 == '\0') {
                        cVar3 = this_01->IsComplete(uVar1);
                        local_34 = local_34 & 255;
                        if (cVar3 == '\0') {
                            local_34 = 0;
                        }
                    } else {
                        new (&local_60) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var8);
                        puVar7 = (undefined*)(local_40->field_16, &local_60, Js5Archive::JS5_TRUETYPEFONTS, uVar1,
                                              (Priority*)Priority::HIGHEST, true, true)
                                     ->GetGroup();
                        if (puVar7 == DataStatus::NOTLOADED) {
                            this_01->Request(uVar1);
                            local_34 = 0;
                        } else {
                            this_03 = (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>,
                                      eastl::allocator>::operator[](local_50, (ulong)uVar1);
                            shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator=(this_03, &local_60);
                            local_40->IncrementLoaded();
                            this_01->Completed(uVar1);
                            this_00 = local_40->field_16;
                            uVar4 = (Js5Archive::JS5_TRUETYPEFONTS)->GetX();
                            puVar6 = local_48;
                            this_00->DeleteCacheGroup(uVar4, uVar1);
                        }
                        local_60.~shared_ptr();
                    }
                    puVar5 = puVar5 + 1;
                } while (puVar5 != puVar6);
            }
            local_34 = local_34 & 4294967041;
        }
        return local_34;
    }

    // 0x10056bab0, 608 bytes, placed by class name and debug map
    // ConfigProviderFontMetricsLoader::ProcessFontMetrics()
    ulong ConfigProviderFontMetricsLoader::ProcessFontMetrics() {
        undefined1* puVar1;
        uint uVar2;
        Js5ResourceProvider* this_00;
        char cVar3;
        int iVar4;
        uint uVar5;
        undefined4 uVar6;
        DownloadWaitHandler* this_01;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_02;
        uint* puVar7;
        uint* puVar8;
        undefined* puVar9;
        TextureAtlasReference* this_03;
        ulong uVar10;
        long lVar11;
        undefined8 uVar12;
        undefined8 uVar13;
        _func_decltype_nullptr* p_Var14;
        undefined8 unaff_R12;
        undefined7 uVar16;
        ulong uVar15;
        undefined1* in_stack_ffffffffffffff88;
        undefined4 uVar17;
        shared_ptr local_50;
        uint local_3c;
        ConfigProviderFontMetricsLoader* local_38;

        cVar3 = (*(code*)field_16->field_0[8])(field_16, field_24);
        if (cVar3 == '\0') {
            uVar10 = 0;
        } else {
            this_01 = (DownloadWaitHandler*)
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_88);
            this_02 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)field_32->GetMaterial();
            puVar7 = (uint*)this_02->data();
            puVar8 = (uint*)this_02->end();
            uVar17 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 32);
            uVar16 = (undefined7)((ulong)unaff_R12 >> 8);
            if (puVar7 == puVar8) {
                uVar15 = CONCAT71(uVar16, 1);
            } else {
                puVar1 = &field_104;
                uVar15 = CONCAT71(uVar16, 1);
                local_38 = this;
                do {
                    uVar2 = *puVar7;
                    p_Var14 = (_func_decltype_nullptr*)(ulong)uVar2;
                    cVar3 = this_01->CanCheck(uVar2);
                    uVar17 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 32);
                    if (cVar3 == '\0') {
                        cVar3 = this_01->IsComplete(uVar2);
                        uVar15 = uVar15 & 255;
                        if (cVar3 == '\0') {
                            uVar15 = 0;
                        }
                    } else {
                        local_3c = (uint)uVar15;
                        new (&local_50) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var14);
                        in_stack_ffffffffffffff88 = (undefined1*)CONCAT44(uVar17, 1);
                        puVar9 = (undefined*)(field_16, &local_50, (Js5ArchiveSettings*)field_24, uVar2, 0,
                                              (Priority*)Priority::HIGHEST, true, false, false)
                                     ->GetFile();
                        if (puVar9 == DataStatus::NOTLOADED) {
                        LAB_10056bbda:
                            this_01->Request(uVar2);
                            uVar15 = 0;
                        } else {
                            this_03 = (TextureAtlasReference*)
                                          shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                              (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_50);
                            uVar10 = this_03->GetTextureAtlas();
                            if (uVar10 < 2)
                                goto LAB_10056bbda;
                            lVar11 = (*(code*)field_8->field_0[3])(field_8, field_24);
                            uVar15 = (ulong)local_3c;
                            if (lVar11 != 0) {
                                iVar4 = local_38->field_32->GetAnimationLength();
                                in_stack_ffffffffffffff88 = puVar1;
                                eastl::function<void(unsigned int, unsigned int, unsigned int, unsigned int,
                                                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
                                                     Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>,
                                                           eastl::allocator> const*)>::
                                operator()(
                                    (function<void(unsigned int, unsigned int, unsigned int, unsigned int,
                                                   shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
                                                   Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>,
                                                         eastl::allocator> const*)>*)(lVar11 + 8),
                                    iVar4 + 1, uVar2, 0, uVar2, &local_50, (Array*)puVar1);
                            }
                            this_00 = local_38->field_16;
                            uVar5 = local_38->field_24->GetX();
                            this_00->DeleteCacheGroup(uVar5, uVar2);
                            local_38->IncrementLoaded();
                            this_01->Completed(uVar2);
                        }
                        local_50.~shared_ptr();
                        this = local_38;
                    }
                    uVar17 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 32);
                    puVar7 = puVar7 + 1;
                } while (puVar7 != puVar8);
            }
            uVar10 = uVar15 & 18446744073709551361;
            if ((uVar15 & 1) != 0) {
                uVar12 = logger::default_logger();
                uVar6 = field_24->GetX();
                uVar13 = field_24->GetSpritesArchive();
                logger::Logger::Log(uVar12, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/config/ConfigProviderFontMetricsLoader.cpp",
                                    161, "Loaded all font metric data for archive %u (%s)", CONCAT44(uVar17, uVar6),
                                    uVar13);
                uVar10 = CONCAT71((int7)(uVar10 >> 8), 1);
            }
        }
        return uVar10 & 4294967295;
    }

} // namespace jag::game
