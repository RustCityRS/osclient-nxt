// libs/game/runetek5/config/ConfigProviderAnimationStateMachineLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ConfigProviderAnimationStateMachineLoader.h"

namespace jag::game {
    // 0x10056a910, 848 bytes, placed by class name and debug map
    // ConfigProviderAnimationStateMachineLoader::Service()
    ulong ConfigProviderAnimationStateMachineLoader::Service() {
        ConfigProvider* pCVar1;
        Js5ResourceProvider* this_00;
        ConfigProviderAnimationStateMachineLoader* pCVar2;
        char cVar3;
        uint uVar4;
        int iVar5;
        uint uVar6;
        undefined* puVar7;
        DownloadWaitHandler* pDVar8;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        int* piVar9;
        int* piVar10;
        ulong uVar11;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_02;
        uint* puVar12;
        undefined7 uVar15;
        TextureAtlasReference* this_03;
        PacketT* pPVar13;
        shared_ptr<graphics::AnimationStateMachineProvider>* this_04;
        undefined8 uVar14;
        _func_decltype_nullptr* p_Var16;
        shared_ptr local_80;
        uint* local_70;
        shared_ptr local_68;
        vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, shared_ptr<graphics::AnimationStateMachineProvider>>,
                                 eastl::allocator>>* local_58;
        uint local_50;
        uint local_4c;
        DownloadWaitHandler* local_48;
        ConfigProviderAnimationStateMachineLoader* local_40;
        uint local_34;

        local_40 = this;
        if (field_96 == (AnimationParameters*)0) {
            puVar7 = (undefined*)(*(code*)field_16->field_0[4])(field_16, &field_96, Js5Archive::JS5_ANIMSTATEMACHINES);
            if (puVar7 == DataStatus::NOTLOADED) {
                return 0;
            }
            local_80._0_4_ = field_96->GetAnimationLength();
            local_80._0_4_ = local_80._0_4_ + 1;
            std::make_unique<DownloadWaitHandler, unsigned int>((uint*)&local_68);
            std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_88,
                (unique_ptr*)&local_68);
            local_68.~unique_ptr();
            pDVar8 = (DownloadWaitHandler*)
                std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                    (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_88);
            this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_96->GetMaterial();
            uVar4 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
            (&field_48, (ulong)uVar4)->resize();
            piVar9 = (int*)this_01->data();
            piVar10 = (int*)this_01->end();
            for (; piVar9 != piVar10; piVar9 = piVar9 + 1) {
                pDVar8->SetExists(*piVar9);
            }
            iVar5 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
            *(int*)&local_40->field_40 = iVar5;
            pCVar1 = local_40->field_8;
            piVar9 = &pCVar1->field_744;
            *piVar9 = *piVar9 + iVar5;
            piVar9 = &pCVar1->field_752;
            *piVar9 = *piVar9 + -1;
        }
        pCVar2 = local_40;
        uVar11 = (*(code*)local_40->field_16->field_0[8])(local_40->field_16, Js5Archive::JS5_ANIMSTATEMACHINES);
        if ((char)uVar11 == '\0') {
            return uVar11;
        }
        local_4c = (uint)uVar11;
        pDVar8 = (DownloadWaitHandler*)
            std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&pCVar2->field_88);
        this_02 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)pCVar2->field_96->GetMaterial();
        puVar12 = (uint*)this_02->data();
        local_70 = (uint*)this_02->end();
        local_58 =
            (vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>, eastl::less<int>, eastl::allocator,
                        eastl::vector<eastl::pair<int, shared_ptr<graphics::AnimationStateMachineProvider>>,
                                      eastl::allocator>>*)&local_40->field_48;
        uVar15 = (undefined7)((ulong)local_58 >> 8);
        if (puVar12 == local_70) {
            local_34 = (uint)CONCAT71(uVar15, 1);
        } else {
            local_34 = (uint)CONCAT71(uVar15, 1);
            local_48 = pDVar8;
            do {
                uVar4 = *puVar12;
                p_Var16 = (_func_decltype_nullptr*)(ulong)uVar4;
                cVar3 = pDVar8->CanCheck(uVar4);
                if (cVar3 == '\0') {
                    cVar3 = pDVar8->IsComplete(uVar4);
                    local_34 = local_34 & 255;
                    if (cVar3 == '\0') {
                        local_34 = 0;
                    }
                } else {
                    new (&local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var16);
                    puVar7 = (undefined*)(local_40->field_16, &local_68, Js5Archive::JS5_ANIMSTATEMACHINES, uVar4, 0,
                                          (Priority*)Priority::HIGHEST, true, false, false)
                                 ->GetFile();
                    if (puVar7 == DataStatus::NOTLOADED) {
                    LAB_10056ab3e:
                        local_48->Request(uVar4);
                        local_34 = 0;
                    } else {
                        this_03 = (TextureAtlasReference*)
                                      shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                          (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_68);
                        uVar11 = this_03->GetTextureAtlas();
                        if (uVar11 < 2)
                            goto LAB_10056ab3e;
                        pPVar13 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_68);
                        local_80.FromPacket(pPVar13);
                        local_50 = uVar4;
                        this_04 = (shared_ptr<graphics::AnimationStateMachineProvider>*)eastl::vector_map<
                            int, shared_ptr<graphics::AnimationStateMachineProvider>, eastl::less<int>,
                            eastl::allocator,
                            eastl::vector<eastl::pair<int, shared_ptr<graphics::AnimationStateMachineProvider>>,
                                          eastl::allocator>>::operator[](local_58, (int*)&local_50);
                        shared_ptr<graphics::AnimationStateMachineProvider>::operator=(this_04, &local_80);
                        local_80.~shared_ptr();
                        this_00 = local_40->field_16;
                        uVar6 = (Js5Archive::JS5_ANIMSTATEMACHINES)->GetX();
                        this_00->DeleteCacheGroup(uVar6, uVar4);
                        local_40->IncrementLoaded();
                        local_48->Completed(uVar4);
                    }
                    local_68.~shared_ptr();
                }
                puVar12 = puVar12 + 1;
            } while (puVar12 != local_70);
        }
        if ((local_34 & 1) == 0) {
            return 0;
        }
        uVar14 = logger::default_logger();
        logger::Logger::Log(uVar14, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/ConfigProviderAnimationStateMachineLoader.cpp",
                            83, "ConfigProvider: Loaded all animation state machine packets!");
        (local_40->field_8, (vector_map*)local_58)->SetDownloadedAnimationStateMachines();
        return (ulong)local_4c;
    }

} // namespace jag::game
