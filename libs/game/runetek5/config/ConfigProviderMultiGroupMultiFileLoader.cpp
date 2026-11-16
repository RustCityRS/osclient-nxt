// libs/game/runetek5/config/ConfigProviderMultiGroupMultiFileLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ConfigProviderMultiGroupMultiFileLoader.h"

namespace jag::game {
    // 0x10056bee0
    ConfigProviderMultiGroupMultiFileLoader::ConfigProviderMultiGroupMultiFileLoader(
        ConfigProvider* configProvider, Js5ResourceProvider* js5ResourceProvider,
        Js5ArchiveSettings* js5ArchiveSettings, Array<eastl::vector<PacketT<Array<unsigned char>>>>* arg4)
        : ConfigProviderBatchInterface(configProvider, js5ResourceProvider, js5ArchiveSettings), field_48(arg4),
          field_56(nullptr) {
        field_64.unique_ptr<true, void>();
    }

    // 0x10056bf30
    ConfigProviderMultiGroupMultiFileLoader::ConfigProviderMultiGroupMultiFileLoader(
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
                      "ConfigProviderMultiGroupMultiFileLoader.cpp",
                      23, nullptr);
        }
    }

    // 0x10056bfe0
    unsigned long ConfigProviderMultiGroupMultiFileLoader::Service() {
        uint8_t* this_00;
        Array<eastl::vector<PacketT<Array<unsigned char>>>>* this_01;
        ConfigProvider* pCVar1;
        char* pcVar2;
        Js5ResourceProvider* this_02;
        uint8_t uVar3;
        int iVar5;
        unsigned int uVar6;
        uint64_t extraout_var;
        DownloadWaitHandler* pDVar8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar9;
        int* piVar10;
        int* piVar11;
        uint64_t extraout_var_00;
        uint8_t* puVar14;
        vector<PacketT<Array<unsigned char>>>* pvVar15;
        PacketT<Array<unsigned char>>* this_03;
        PacketJ<Array<unsigned char> _>* packetJ;
        unsigned long arg1;
        ConfigProviderMultiGroupMultiFileLoader* pCVar18;
        unsigned long uVar19;
        uint64_t in_stack_ffffffffffffff68;
        ReturnValue local_68;
        unsigned long local_58;
        unsigned int local_50;
        unsigned long local_40;
        unsigned int local_34;

        ConfigProviderMultiGroupMultiFileLoader* local_48 = this;
        if (field_32 == nullptr) {
            uVar3 = (**(void (**)(...)) & ((Js5Index*)field_16->_vptr)->m_indexVersion)((Js5Index**)field_16,
                                                                                        (Js5ArchiveSettings*)&field_32);
            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3) == DataStatus::NOTLOADED) {
                return 0;
            }
            this_01 = (Array<eastl::vector<PacketT<Array<unsigned char>>>>*)field_48;
            if (this_01 != nullptr) {
                iVar5 = field_32->GetAnimationLength();
                this_01->set_max_size((unsigned long)(iVar5 + 1), 0);
            }
            pCVar18 = local_48;
            iVar5 = local_48->field_32->GetAnimationLength();
            local_50 = iVar5 + 1;
            local_68 = std::make_unique<DownloadWaitHandler, unsigned int>(local_50);
            this_00 = &pCVar18->field_64;
            *this_00 = local_68;
            pDVar8 = (DownloadWaitHandler*)**this_00;
            pAVar9 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pCVar18->field_32->GetMaterial();
            piVar10 = (int*)pAVar9->data();
            piVar11 = (int*)pAVar9->end();
            if (piVar10 == piVar11) {
                iVar5 = 0;
            } else {
                iVar5 = 0;
                do {
                    pDVar8->SetExists(*piVar10);
                    iVar5 = iVar5 + 1;
                    piVar10 = piVar10 + 1;
                } while (piVar10 != piVar11);
            }
            *(int*)&local_48->field_40 = iVar5;
            pCVar1 = local_48->field_8;
            piVar10 = &pCVar1->field_744;
            *piVar10 = *piVar10 + iVar5;
            piVar10 = &pCVar1->field_752;
            *piVar10 = *piVar10 - 1;
        }
        pCVar18 = local_48;
        pDVar8 = (DownloadWaitHandler*)*local_48->field_64;
        bool cVar4 = pCVar18->field_16->EnsureArchiveLoadedIfAvailableOnDisk();
        if (!cVar4) {
            return cVar4;
        }
        unsigned int local_4c = (unsigned int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)cVar4);
        pAVar9 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pCVar18->field_32->GetMaterial();
        auto puVar12 = pAVar9->data();
        auto puVar13 = pAVar9->end();
        uint32_t uVar20 = (uint32_t)((unsigned long)in_stack_ffffffffffffff68 >> 32);
        uint64_t uVar17 = (uint64_t)((unsigned long)puVar13 >> 8);
        if (puVar12 == puVar13) {
            local_34 = (unsigned int)(((uint64_t)uVar17 << 8) | (uint8_t)1);
        } else {
            local_34 = (unsigned int)(((uint64_t)uVar17 << 8) | (uint8_t)1);
            do {
                uVar6 = *puVar12;
                uVar19 = (unsigned long)uVar6;
                cVar4 = pDVar8->CanCheck(uVar6);
                if (!cVar4) {
                    cVar4 = pDVar8->IsComplete(uVar6);
                    local_34 = local_34 & 255;
                    if (!cVar4) {
                        local_34 = 0;
                    }
                } else {
                    puVar14 = (uint8_t*)pCVar18->field_16->GroupReady(*pCVar18->field_24, uVar6,
                                                                      (Priority*)Priority::HIGHEST, true);
                    if (puVar14 == DataStatus::READY) {
                        local_40 = uVar19;
                        if ((((local_34 & 1) != 0) || (pCVar18->field_56 == nullptr)) || (*pCVar18->field_56 == '\0')) {
                            pDVar8->Completed(uVar6);
                            pCVar18->IncrementLoaded();
                            uVar6 = pCVar18->field_32->GetMaximumFileID(uVar6);
                            arg1 = (unsigned long)uVar6;
                            if ((Array<eastl::vector<PacketT<Array<unsigned char>>>>*)pCVar18->field_48 != nullptr) {
                                pvVar15 = (vector<PacketT<Array<unsigned char>>>*)(*pCVar18->field_48)[uVar19];
                                pvVar15->resize_uninitialized(arg1);
                            }
                            local_58 = arg1;
                            if (arg1 != 0) {
                                uVar19 = 0;
                                do {
                                    uVar20 = (uint32_t)((unsigned long)in_stack_ffffffffffffff68 >> 32);
                                    local_68 = shared_ptr();
                                    in_stack_ffffffffffffff68 = (((uint64_t)uVar20 << 32) | (uint32_t)1);
                                    puVar14 = (uint8_t*)pCVar18->field_16->GetFile(
                                        local_68, *pCVar18->field_24, (unsigned int)local_40, (unsigned int)uVar19,
                                        (Priority*)Priority::HIGHEST, true, false, false);
                                    if (puVar14 == DataStatus::NOTLOADED) {
                                        LogAssert(
                                            "status != DataStatus::NOTLOADED",
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/config/ConfigProviderMultiGroupMultiFileLoader.cpp",
                                            97, nullptr);
                                    }
                                    if ((Array<eastl::vector<PacketT<Array<unsigned char>>>>*)pCVar18->field_48 ==
                                        nullptr) {
                                        if (puVar14 == DataStatus::READY) {
                                            pcVar2 = local_48->field_56;
                                            iVar5 = pCVar18->field_32->GetAnimationLength();
                                            pCVar18 = local_48;
                                            in_stack_ffffffffffffff68 = 0;
                                            eastl::function<void(
                                                unsigned int, unsigned int, unsigned int, unsigned int,
                                                shared_ptr<PacketT<Array<unsigned char>>> const&,
                                                Array<shared_ptr<PacketT<Array<unsigned char>>>> const*)>::
                                            operator()(
                                                (function<void(unsigned int, unsigned int, unsigned int, unsigned int,
                                                               shared_ptr<PacketT<Array<unsigned char>>> const&,
                                                               Array<shared_ptr<
                                                                   PacketT<Array<unsigned char>>>> const*)>*)(pcVar2 +
                                                                                                              8),
                                                iVar5 + 1, (unsigned int)local_40, (unsigned int)local_58,
                                                (unsigned int)uVar19, &local_68, nullptr);
                                        }
                                    } else {
                                        pvVar15 =
                                            (vector<PacketT<Array<unsigned char>>>*)(*pCVar18->field_48)[local_40];
                                        this_03 = (PacketT<Array<unsigned char>>*)(*pvVar15)[uVar19];
                                        if (puVar14 == DataStatus::MISSING) {
                                            new (this_03) PacketT(0);
                                        } else {
                                            packetJ = (PacketJ<Array<unsigned char> _>*)*local_68;
                                            new (this_03) PacketT(packetJ);
                                        }
                                    }
                                    uVar19 = uVar19 + 1;
                                } while (local_58 != uVar19);
                            }
                            this_02 = pCVar18->field_16;
                            uVar6 = pCVar18->field_24->GetX();
                            this_02->DeleteCacheGroup(uVar6, (unsigned int)local_40);
                        }
                    } else {
                        pDVar8->Request(uVar6);
                        local_34 = 0;
                    }
                }
                uVar20 = (uint32_t)((unsigned long)in_stack_ffffffffffffff68 >> 32);
                puVar12 = puVar12 + 1;
            } while (puVar12 != puVar13);
        }
        if ((local_34 & 1) == 0) {
            return 0;
        }
        if ((pCVar18->field_56 != nullptr) && (cVar4 = ((pCVar18->field_56 + 40))->operator_cast_to_bool(), cVar4)) {
            eastl::function<bool()>::operator()((function<bool()>*)(pCVar18->field_56 + 40));
        }
        auto this_04 = logger::default_logger();
        uint32_t uVar7 = pCVar18->field_24->GetX();
        uint64_t uVar16 = pCVar18->field_24->GetSpritesArchive();
        this_04->Log(false, 8,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                     "ConfigProviderMultiGroupMultiFileLoader.cpp",
                     134, "ConfigProvider: Loaded all data for archive: %u (%s)",
                     (((uint64_t)uVar20 << 32) | (uint32_t)uVar7), uVar16);
        return (unsigned long)local_4c;
    }

} // namespace jag::game
