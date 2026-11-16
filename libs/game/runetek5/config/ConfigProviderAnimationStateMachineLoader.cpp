// libs/game/runetek5/config/ConfigProviderAnimationStateMachineLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ConfigProviderAnimationStateMachineLoader.h"

namespace jag::game {
    // 0x10056a910
    unsigned long ConfigProviderAnimationStateMachineLoader::Service() {
        ConfigProvider* pCVar1;
        uint8_t uVar3;
        unsigned int uVar5;
        int iVar6;
        uint64_t extraout_var;
        DownloadWaitHandler* pDVar7;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        int* piVar8;
        int* piVar9;
        uint64_t extraout_var_00;
        PacketT<Array<unsigned char> _>* arg1_00;
        shared_ptr<graphics::AnimationStateMachineProvider>* this_04;
        ReturnValue local_80;
        ReturnValue local_68;
        unsigned int local_50;
        DownloadWaitHandler* local_48;
        unsigned int local_34;

        ConfigProviderAnimationStateMachineLoader* local_40 = this;
        if (field_96 == nullptr) {
            uVar3 = (**(void (**)(...)) & ((Js5Index*)field_16->_vptr)->m_indexVersion)((Js5Index**)field_16,
                                                                                        (Js5ArchiveSettings*)&field_96);
            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3) == DataStatus::NOTLOADED) {
                return 0;
            }
            local_80[0]._0_4_ = field_96->GetAnimationLength();
            local_80[0]._0_4_ = local_80[0]._0_4_ + 1;
            local_68 = std::make_unique<DownloadWaitHandler, unsigned int>(local_80);
            field_88 = local_68;
            pDVar7 = (DownloadWaitHandler*)*field_88;
            this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_96->GetMaterial();
            uVar5 = this_01->end();
            field_48.resize((unsigned long)uVar5);
            piVar8 = (int*)this_01->data();
            piVar9 = (int*)this_01->end();
            for (; piVar8 != piVar9; piVar8 = piVar8 + 1) {
                pDVar7->SetExists(*piVar8);
            }
            iVar6 = this_01->end();
            *(int*)&local_40->field_40 = iVar6;
            pCVar1 = local_40->field_8;
            piVar8 = &pCVar1->field_744;
            *piVar8 = *piVar8 + iVar6;
            piVar8 = &pCVar1->field_752;
            *piVar8 = *piVar8 - 1;
        }
        ConfigProviderAnimationStateMachineLoader* pCVar2 = local_40;
        bool cVar4 = local_40->field_16->EnsureArchiveLoadedIfAvailableOnDisk();
        if (!cVar4) {
            return cVar4;
        }
        unsigned int local_4c = (unsigned int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)cVar4);
        pDVar7 = (DownloadWaitHandler*)*pCVar2->field_88;
        auto this_02 = pCVar2->field_96->GetMaterial();
        auto puVar10 = this_02->data();
        auto local_70 = this_02->end();
        vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>>* local_58 =
            (vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>>*)&local_40->field_48;
        uint64_t uVar13 = (uint64_t)((unsigned long)local_58 >> 8);
        if (puVar10 == local_70) {
            local_34 = (unsigned int)(((uint64_t)uVar13 << 8) | (uint8_t)1);
        } else {
            local_34 = (unsigned int)(((uint64_t)uVar13 << 8) | (uint8_t)1);
            local_48 = pDVar7;
            do {
                uVar5 = *puVar10;
                cVar4 = pDVar7->CanCheck(uVar5);
                if (!cVar4) {
                    cVar4 = pDVar7->IsComplete(uVar5);
                    local_34 = local_34 & 255;
                    if (!cVar4) {
                        local_34 = 0;
                    }
                } else {
                    local_68 = shared_ptr();
                    if ((uint8_t*)local_40->field_16->GetFile(local_68, *(Js5Archive::JS5_ANIMSTATEMACHINES), uVar5, 0,
                                                              (Priority*)Priority::HIGHEST, true, false,
                                                              false) == DataStatus::NOTLOADED) {
                    LAB_10056ab3e:
                        local_48->Request(uVar5);
                        local_34 = 0;
                    } else {
                        if (((TextureAtlasReference*)local_68.operator->())->GetTextureAtlas() < 2)
                            goto LAB_10056ab3e;
                        arg1_00 = (PacketT<Array<unsigned char> _>*)*local_68;
                        local_80 = graphics::AnimationStateSystemDescriptor::FromPacket(*arg1_00);
                        local_50 = uVar5;
                        this_04 = (shared_ptr<graphics::AnimationStateMachineProvider>*)(*local_58)[local_50];
                        *this_04 = local_80;
                        local_40->field_16->DeleteCacheGroup(
                            ((CoordMapSquare*)Js5Archive::JS5_ANIMSTATEMACHINES)->GetX(), uVar5);
                        local_40->IncrementLoaded();
                        local_48->Completed(uVar5);
                    }
                }
                puVar10 = puVar10 + 1;
            } while (puVar10 != local_70);
        }
        if ((local_34 & 1) == 0) {
            return 0;
        }
        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "ConfigProviderAnimationStateMachineLoader.cpp",
                  83, "ConfigProvider: Loaded all animation state machine packets!");
        local_40->field_8->SetDownloadedAnimationStateMachines(*local_58);
        return (unsigned long)local_4c;
    }

} // namespace jag::game
