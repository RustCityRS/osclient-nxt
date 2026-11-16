// libs/game/runetek5/config/ConfigProviderMultiGroupSingleFileLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ConfigProviderMultiGroupSingleFileLoader.h"

namespace jag::game {
    // 0x100561190
    ConfigProviderMultiGroupSingleFileLoader::ConfigProviderMultiGroupSingleFileLoader(
        ConfigProvider* configProvider, Js5ResourceProvider* js5ResourceProvider,
        Js5ArchiveSettings* js5ArchiveSettings, Array<PacketT<Array<unsigned char>>>* arg4)
        : ConfigProviderBatchInterface(configProvider, js5ResourceProvider, js5ArchiveSettings), field_48(arg4),
          field_56(nullptr) {
        field_64.unique_ptr<true, void>();
    }

    // 0x100561250
    ConfigProviderMultiGroupSingleFileLoader::ConfigProviderMultiGroupSingleFileLoader(
        ConfigProvider* configProvider, Js5ResourceProvider* js5ResourceProvider,
        Js5ArchiveSettings* js5ArchiveSettings)
        : ConfigProviderBatchInterface(configProvider, js5ResourceProvider, js5ArchiveSettings) {
        uint64_t extraout_var;

        field_48 = nullptr;
        field_56 = nullptr;
        field_64.unique_ptr<true, void>();
        uint8_t uVar1 = configProvider->GetDecoder();
        field_56 = (char*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
        if ((char*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) == nullptr) {
            LogAssert("m_decoderInfo",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigProviderMultiGroupSingleFileLoader.cpp",
                      22, nullptr);
        }
    }

    // 0x100561310
    unsigned long ConfigProviderMultiGroupSingleFileLoader::Service() {
        unsigned int arg3;
        Array<PacketT<Array<unsigned char>>>* this_00;
        ConfigProvider* pCVar1;
        char* pcVar2;
        uint8_t uVar3;
        int iVar5;
        uint64_t extraout_var;
        DownloadWaitHandler* pDVar7;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar8;
        int* piVar9;
        int* piVar10;
        uint64_t extraout_var_00;
        uint8_t* puVar13;
        PacketT<Array<unsigned char>>* this_03;
        PacketT<Array<unsigned char> _>* arg1_00;
        uint64_t in_stack_ffffffffffffff88;
        ReturnValue local_58;
        unsigned int local_48;
        DownloadWaitHandler* local_40;
        unsigned int local_34;

        if (field_32 == nullptr) {
            uVar3 = (**(void (**)(...)) & ((Js5Index*)field_16->_vptr)->m_indexVersion)((Js5Index**)field_16,
                                                                                        (Js5ArchiveSettings*)&field_32);
            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3) == DataStatus::NOTLOADED) {
                return 0;
            }
            this_00 = (Array<PacketT<Array<unsigned char>>>*)field_48;
            if (this_00 != nullptr) {
                iVar5 = field_32->GetAnimationLength();
                this_00->set_max_size((unsigned long)(iVar5 + 1), 0);
            }
            iVar5 = field_32->GetAnimationLength();
            local_48 = iVar5 + 1;
            local_58 = std::make_unique<DownloadWaitHandler, unsigned int>(local_48);
            field_64 = local_58;
            pDVar7 = (DownloadWaitHandler*)*field_64;
            pAVar8 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)field_32->GetMaterial();
            piVar9 = (int*)pAVar8->data();
            piVar10 = (int*)pAVar8->end();
            if (piVar9 == piVar10) {
                iVar5 = 0;
            } else {
                iVar5 = 0;
                do {
                    pDVar7->SetExists(*piVar9);
                    iVar5 = iVar5 + 1;
                    piVar9 = piVar9 + 1;
                } while (piVar9 != piVar10);
            }
            field_40 = iVar5;
            pCVar1 = field_8;
            piVar9 = &pCVar1->field_744;
            *piVar9 = *piVar9 + iVar5;
            piVar9 = &pCVar1->field_752;
            *piVar9 = *piVar9 - 1;
        }
        pDVar7 = (DownloadWaitHandler*)*field_64;
        bool cVar4 = field_16->EnsureArchiveLoadedIfAvailableOnDisk();
        if (!cVar4) {
            return cVar4;
        }
        unsigned int local_44 = (unsigned int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)cVar4);
        pAVar8 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)field_32->GetMaterial();
        auto puVar11 = pAVar8->data();
        auto puVar12 = pAVar8->end();
        uint32_t uVar17 = (uint32_t)((unsigned long)in_stack_ffffffffffffff88 >> 32);
        uint64_t uVar16 = (uint64_t)((unsigned long)puVar12 >> 8);
        if (puVar11 == puVar12) {
            local_34 = (unsigned int)(((uint64_t)uVar16 << 8) | (uint8_t)1);
        } else {
            local_34 = (unsigned int)(((uint64_t)uVar16 << 8) | (uint8_t)1);
            local_40 = pDVar7;
            do {
                arg3 = *puVar11;
                cVar4 = pDVar7->CanCheck(arg3);
                uVar17 = (uint32_t)((unsigned long)in_stack_ffffffffffffff88 >> 32);
                if (!cVar4) {
                    cVar4 = pDVar7->IsComplete(arg3);
                    local_34 = local_34 & 255;
                    if (!cVar4) {
                        local_34 = 0;
                    }
                } else {
                    local_58 = shared_ptr();
                    in_stack_ffffffffffffff88 = (((uint64_t)uVar17 << 32) | (uint32_t)1);
                    puVar13 = (uint8_t*)field_16->GetFile(local_58, *field_24, arg3, 0, (Priority*)Priority::HIGHEST,
                                                          true, false, false);
                    if (puVar13 == DataStatus::NOTLOADED) {
                    LAB_10056152e:
                        local_40->Request(arg3);
                        local_34 = 0;
                    } else {
                        if (((TextureAtlasReference*)local_58.operator->())->GetTextureAtlas() < 2)
                            goto LAB_10056152e;
                        if ((((local_34 & 1) != 0) || (field_56 == nullptr)) || (*field_56 == '\0')) {
                            if ((Array<PacketT<Array<unsigned char>>>*)field_48 == nullptr) {
                                if (puVar13 == DataStatus::READY) {
                                    pcVar2 = field_56;
                                    iVar5 = field_32->GetAnimationLength();
                                    in_stack_ffffffffffffff88 = 0;
                                    eastl::function<void(unsigned int, unsigned int, unsigned int, unsigned int,
                                                         shared_ptr<PacketT<Array<unsigned char>>> const&,
                                                         Array<shared_ptr<PacketT<Array<unsigned char>>>> const*)>::
                                    operator()(
                                        (function<void(
                                             unsigned int, unsigned int, unsigned int, unsigned int,
                                             shared_ptr<PacketT<Array<unsigned char>>> const&,
                                             Array<shared_ptr<PacketT<Array<unsigned char>>>> const*)>*)(pcVar2 + 8),
                                        iVar5 + 1, arg3, 1, 0, &local_58, nullptr);
                                }
                            } else {
                                this_03 = (PacketT<Array<unsigned char>>*)(*field_48)[(unsigned long)arg3];
                                cVar4 = this_03->IsValid();
                                if (cVar4) {
                                    LogAssert("!entry.IsValid()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/config/ConfigProviderMultiGroupSingleFileLoader.cpp",
                                              91, nullptr);
                                }
                                arg1_00 = (PacketT<Array<unsigned char> _>*)*local_58;
                                *this_03 = *arg1_00;
                            }
                            local_40->Completed(arg3);
                            IncrementLoaded();
                            field_16->DeleteCacheGroup(field_24->GetX(), arg3);
                        }
                    }
                    pDVar7 = local_40;
                }
                uVar17 = (uint32_t)((unsigned long)in_stack_ffffffffffffff88 >> 32);
                puVar11 = puVar11 + 1;
            } while (puVar11 != puVar12);
        }
        if ((local_34 & 1) == 0) {
            return 0;
        }
        if ((field_56 != nullptr) && (cVar4 = ((field_56 + 40))->operator_cast_to_bool(), cVar4)) {
            eastl::function<bool()>::operator()((function<bool()>*)(field_56 + 40));
        }
        auto this_04 = logger::default_logger();
        uint32_t uVar6 = field_24->GetX();
        uint64_t uVar15 = field_24->GetSpritesArchive();
        this_04->Log(false, 8,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                     "ConfigProviderMultiGroupSingleFileLoader.cpp",
                     120, "ConfigProvider: Loaded all data for archive: %u (%s)",
                     (((uint64_t)uVar17 << 32) | (uint32_t)uVar6), uVar15);
        return (unsigned long)local_44;
    }

} // namespace jag::game
