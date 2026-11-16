// libs/game/runetek5/config/ConfigProviderFontMetricsLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ConfigProviderFontMetricsLoader.h"

namespace jag::game {
    // 0x10056b6a0
    uint64_t ConfigProviderFontMetricsLoader::Service() {
        bool cVar1 = EnsureInitialised();
        if ((!cVar1) || (cVar1 = PreloadVectorFontSources(), !cVar1)) {
            return 0;
        }
        return ProcessFontMetrics();
    }

    // 0x10056b6e0
    uint64_t ConfigProviderFontMetricsLoader::EnsureInitialised() {
        ConfigProvider* pCVar1;
        uint8_t uVar2;
        int iVar3;
        unsigned int uVar4;
        uint64_t uVar5;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        int* piVar6;
        int* piVar7;
        DownloadWaitHandler* pDVar8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        ReturnValue local_48;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_40;
        unsigned int local_34;

        if ((field_32 == nullptr) || (uVar5 = 1, field_128 == nullptr)) {
            uVar2 = (**(void (**)(...)) & ((Js5Index*)field_16->_vptr)->m_indexVersion)((Js5Index**)field_16,
                                                                                        (Js5ArchiveSettings*)&field_32);
            if (((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2) == DataStatus::NOTLOADED) ||
                (uVar2 = (**(void (**)(...)) & ((Js5Index*)field_16->_vptr)->m_indexVersion)(
                     (Js5Index**)field_16, (Js5ArchiveSettings*)&field_128),
                 (uint8_t*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2) == DataStatus::NOTLOADED)) {
                uVar5 = 0;
            } else {
                iVar3 = field_32->GetAnimationLength();
                local_34 = iVar3 + 1;
                local_48 = std::make_unique<DownloadWaitHandler, unsigned int>(local_34);
                field_88 = local_48;
                this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_32->GetMaterial();
                uVar4 = this_00->end();
                field_48.reserve((unsigned long)uVar4);
                piVar6 = (int*)this_00->data();
                local_40 = this_00;
                piVar7 = (int*)this_00->end();
                for (; piVar6 != piVar7; piVar6 = piVar6 + 1) {
                    iVar3 = *piVar6;
                    pDVar8 = (DownloadWaitHandler*)field_88.operator->();
                    pDVar8->SetExists(iVar3);
                }
                iVar3 = local_40->end();
                field_40 = iVar3;
                iVar3 = field_128->GetAnimationLength();
                local_34 = iVar3 + 1;
                local_48 = std::make_unique<DownloadWaitHandler, unsigned int>(local_34);
                field_96 = local_48;
                this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)field_128->GetMaterial();
                iVar3 = field_128->GetAnimationLength();
                field_104.set_max_size((unsigned long)(iVar3 + 1), 0);
                piVar6 = (int*)this_01->data();
                local_40 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01;
                piVar7 = (int*)this_01->end();
                for (; piVar6 != piVar7; piVar6 = piVar6 + 1) {
                    iVar3 = *piVar6;
                    pDVar8 = (DownloadWaitHandler*)field_96.operator->();
                    pDVar8->SetExists(iVar3);
                }
                iVar3 = local_40->end();
                iVar3 = iVar3 + field_40;
                field_40 = iVar3;
                pCVar1 = field_8;
                piVar6 = &pCVar1->field_744;
                *piVar6 = *piVar6 + iVar3;
                piVar6 = &pCVar1->field_752;
                *piVar6 = *piVar6 - 1;
                uVar5 = 1;
            }
        }
        return uVar5;
    }

    // 0x10056b8e0
    unsigned int ConfigProviderFontMetricsLoader::PreloadVectorFontSources() {
        unsigned int arg2;
        Js5ResourceProvider* this_00;
        unsigned int arg1;
        DownloadWaitHandler* this_01;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_02;
        EncodeType* pEVar3;
        EncodeType* pEVar4;
        shared_ptr<PacketT<Array<unsigned char>>>* this_03;
        shared_ptr<PacketT<Array<unsigned char> _> _> local_60;
        Array<shared_ptr<PacketT<Array<unsigned char>>>>* local_50;
        EncodeType* local_48;
        unsigned int local_34;

        ConfigProviderFontMetricsLoader* local_40 = this;
        bool cVar2 = field_16->EnsureArchiveLoadedIfAvailableOnDisk();
        ConfigProviderFontMetricsLoader* pCVar1 = local_40;
        if (!cVar2) {
            local_34 = 0;
        } else {
            this_01 = (DownloadWaitHandler*)*local_40->field_96;
            this_02 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pCVar1->field_128->GetMaterial();
            pEVar3 = (EncodeType*)this_02->data();
            pEVar4 = (EncodeType*)this_02->end();
            if (pEVar3 == pEVar4) {
                local_34 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)pEVar4 >> 8)) << 8) | (uint8_t)1);
            } else {
                local_50 = (Array<shared_ptr<PacketT<Array<unsigned char>>>>*)&local_40->field_104;
                local_34 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)local_50 >> 8)) << 8) | (uint8_t)1);
                local_48 = pEVar4;
                do {
                    arg2 = *(unsigned int*)pEVar3;
                    cVar2 = this_01->CanCheck(arg2);
                    if (!cVar2) {
                        cVar2 = this_01->IsComplete(arg2);
                        local_34 = local_34 & 255;
                        if (!cVar2) {
                            local_34 = 0;
                        }
                    } else {
                        local_60 = shared_ptr();
                        if ((uint8_t*)Js5ResourceProvider::GetGroup(
                                *local_40->field_16, local_60, (unsigned int)Js5Archive::JS5_TRUETYPEFONTS,
                                (Priority*)(unsigned long)arg2, (uint8_t)(Priority::HIGHEST),
                                true) == DataStatus::NOTLOADED) {
                            this_01->Request(arg2);
                            local_34 = 0;
                        } else {
                            this_03 = (shared_ptr<PacketT<Array<unsigned char>>>*)(*local_50)[(unsigned long)arg2];
                            *this_03 = local_60;
                            local_40->IncrementLoaded();
                            this_01->Completed(arg2);
                            this_00 = local_40->field_16;
                            arg1 = (Js5Archive::JS5_TRUETYPEFONTS)->GetX();
                            pEVar4 = local_48;
                            this_00->DeleteCacheGroup(arg1, arg2);
                        }
                    }
                    pEVar3 = pEVar3 + 4;
                } while (pEVar3 != pEVar4);
            }
            local_34 = local_34 & 4294967041;
        }
        return local_34;
    }

    // 0x10056bab0
    unsigned long ConfigProviderFontMetricsLoader::ProcessFontMetrics() {
        uint8_t* arg6;
        unsigned int arg3;
        uint8_t uVar2;
        int iVar3;
        uint32_t uVar4;
        DownloadWaitHandler* this_01;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_02;
        unsigned int* puVar5;
        unsigned int* puVar6;
        unsigned long uVar8;
        uint64_t extraout_var;
        Logger* this_04;
        uint64_t uVar9;
        uint64_t unaff_R12;
        uint64_t uVar11;
        unsigned long uVar10;
        uint8_t* in_stack_ffffffffffffff88;
        uint32_t uVar12;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_50;
        unsigned int local_3c;

        bool cVar1 = field_16->EnsureArchiveLoadedIfAvailableOnDisk();
        if (!cVar1) {
            uVar8 = 0;
        } else {
            this_01 = (DownloadWaitHandler*)*field_88;
            this_02 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)field_32->GetMaterial();
            puVar5 = (unsigned int*)this_02->data();
            puVar6 = (unsigned int*)this_02->end();
            uVar12 = (uint32_t)((unsigned long)in_stack_ffffffffffffff88 >> 32);
            uVar11 = (uint64_t)((unsigned long)unaff_R12 >> 8);
            if (puVar5 == puVar6) {
                uVar10 = (((uint64_t)uVar11 << 8) | (uint8_t)1);
            } else {
                arg6 = &field_104;
                uVar10 = (((uint64_t)uVar11 << 8) | (uint8_t)1);
                do {
                    arg3 = *puVar5;
                    cVar1 = this_01->CanCheck(arg3);
                    uVar12 = (uint32_t)((unsigned long)in_stack_ffffffffffffff88 >> 32);
                    if (!cVar1) {
                        cVar1 = this_01->IsComplete(arg3);
                        uVar10 = uVar10 & 255;
                        if (!cVar1) {
                            uVar10 = 0;
                        }
                    } else {
                        local_3c = (unsigned int)uVar10;
                        local_50 = shared_ptr();
                        in_stack_ffffffffffffff88 = (uint8_t*)(((uint64_t)uVar12 << 32) | (uint32_t)1);
                        if ((uint8_t*)field_16->GetFile(local_50, *field_24, arg3, 0, (Priority*)Priority::HIGHEST,
                                                        true, false, false) == DataStatus::NOTLOADED) {
                        LAB_10056bbda:
                            this_01->Request(arg3);
                            uVar10 = 0;
                        } else {
                            uVar8 = ((TextureAtlasReference*)local_50.operator->())->GetTextureAtlas();
                            if (uVar8 < 2)
                                goto LAB_10056bbda;
                            uVar2 = field_8->GetDecoder();
                            uVar10 = (unsigned long)local_3c;
                            if ((((uint64_t)extraout_var << 8) | (uint8_t)uVar2) != 0) {
                                iVar3 = field_32->GetAnimationLength();
                                in_stack_ffffffffffffff88 = arg6;
                                eastl::function<void(unsigned int, unsigned int, unsigned int, unsigned int,
                                                     shared_ptr<PacketT<Array<unsigned char>>> const&,
                                                     Array<shared_ptr<PacketT<Array<unsigned char>>>> const*)>::
                                operator()(
                                    (function<void(
                                         unsigned int, unsigned int, unsigned int, unsigned int,
                                         shared_ptr<PacketT<Array<unsigned char>>> const&,
                                         Array<shared_ptr<PacketT<Array<unsigned char>>>> const*)>*)((((uint64_t)
                                                                                                           extraout_var
                                                                                                       << 8) |
                                                                                                      (uint8_t)uVar2) +
                                                                                                     8),
                                    iVar3 + 1, arg3, 0, arg3, &local_50,
                                    (Array<shared_ptr<PacketT<Array<unsigned char> _> _>>*)arg6);
                            }
                            field_16->DeleteCacheGroup(field_24->GetX(), arg3);
                            IncrementLoaded();
                            this_01->Completed(arg3);
                        }
                        this = this;
                    }
                    uVar12 = (uint32_t)((unsigned long)in_stack_ffffffffffffff88 >> 32);
                    puVar5 = puVar5 + 1;
                } while (puVar5 != puVar6);
            }
            uVar8 = uVar10 & 18446744073709551361;
            if ((uVar10 & 1) != 0) {
                this_04 = logger::default_logger();
                uVar4 = field_24->GetX();
                uVar9 = field_24->GetSpritesArchive();
                this_04->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "config/ConfigProviderFontMetricsLoader.cpp",
                             161, "Loaded all font metric data for archive %u (%s)",
                             (((uint64_t)uVar12 << 32) | (uint32_t)uVar4), uVar9);
                uVar8 = (((uint64_t)((int64_t)(uVar8 >> 8)) << 8) | (uint8_t)1);
            }
        }
        return uVar8 & 4294967295;
    }

} // namespace jag::game
