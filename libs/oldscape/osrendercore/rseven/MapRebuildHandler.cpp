// libs/oldscape/osrendercore/rseven/MapRebuildHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.osrendercore

#include "MapRebuildHandler.h"
#include "libs/core/utils/Hash.h"
#include "libs/game/runetek5/config/iftype/cutscenes/Cutscene2D.h"
#include "libs/oldscape/osrendercore/OSRenderCore.h"

namespace jag::oldscape {
    // 0x1001c3dd0, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_RSeven::GetEffectManager()
    void OSRenderCore_RenderThread_RSeven::GetEffectManager() {
        RT7Core* this_00;

        this_00 =
            (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)&field_8);
        this_00->GetEffectManager();
    }

    // 0x1001c3df0, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_RSeven::GetPostProcessConfig()
    long OSRenderCore_LogicThread_RSeven::GetPostProcessConfig() {
        return *(long*)((long)&field_0 + *(long*)(field_0 + -24)) + 19677832;
    }

    // 0x1001c3e10, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_RSeven::GetSSAOParams()
    long OSRenderCore_LogicThread_RSeven::GetSSAOParams() {
        return *(long*)((long)&field_0 + *(long*)(field_0 + -24)) + 19678456;
    }

    // 0x1001c3e30, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_RSeven::GetSunlightOptions()
    long OSRenderCore_LogicThread_RSeven::GetSunlightOptions() {
        return *(long*)((long)&field_0 + *(long*)(field_0 + -24)) + 19678676;
    }

    // 0x1001c3e50, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_RSeven::GetVolumetricScatteringParams()
    void OSRenderCore_LogicThread_RSeven::GetVolumetricScatteringParams() {
        type* in_RSI;

        ((*(long*)((long)&field_0 + *(long*)(field_0 + -24)) + 19678576), in_RSI)->SSOBeginPtr();
    }

    // 0x1001c3e70, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_RSeven::GetVolumetricScatteringParamsMutable()
    void OSRenderCore_LogicThread_RSeven::GetVolumetricScatteringParamsMutable() {
        ((*(long*)((long)&field_0 + *(long*)(field_0 + -24)) + 19678576))->GetMutable();
    }

    // 0x1001c3ea0, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_RSeven::GetLightScatteringParams()
    void OSRenderCore_LogicThread_RSeven::GetLightScatteringParams() {
        type* in_RSI;

        ((*(long*)((long)&field_0 + *(long*)(field_0 + -24)) + 19678504), in_RSI)->SSOBeginPtr();
    }

    // 0x1001c3ec0, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_RSeven::GetLightScatteringParamsMutable()
    void OSRenderCore_LogicThread_RSeven::GetLightScatteringParamsMutable() {
        ((*(long*)((long)&field_0 + *(long*)(field_0 + -24)) + 19678504))->GetMutable();
    }

    // 0x1001c3ef0, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_RSeven::GetEffectTransitionMilliseconds()
    long OSRenderCore_LogicThread_RSeven::GetEffectTransitionMilliseconds() {
        return *(long*)((long)&field_0 + *(long*)(field_0 + -24)) + 19678672;
    }

    // 0x1001c4490, 128 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_RSeven::UpdateGamma(float)
    void OSRenderCore_RenderThread_RSeven::UpdateGamma(float param_1) {
        RT7Core* pRVar1;
        TextureManager* pTVar2;
        TextureAtlasManager* this_00;

        if ((float)tdp.GetBrightpassThreshold() != param_1) {
            tdp.SetWidth(param_1);
            pRVar1 =
                (RT7Core*)
                    std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                        (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)&field_8);
            pTVar2 = (TextureManager*)pRVar1->GetTextureManager();
            this_00 = (TextureAtlasManager*)pTVar2->GetTextureAtlasManager();
            this_00->RebuildAtlases(true);
            pRVar1 =
                (RT7Core*)
                    std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                        (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)&field_8);
            pTVar2 = (TextureManager*)pRVar1->GetTextureManager();
            pTVar2->ClearCache();
        }
    }

} // namespace jag::oldscape

namespace jag::oldscape::rseven {
    // 0x1001c3b70, 96 bytes, placed by debug map only (low confidence)
    // MapRebuildHandler_RenderThread::HandleRebuild(MapRebuildResults&, jag::graphics::RT7Core&)
    void MapRebuildHandler_RenderThread::HandleRebuild(MapRebuildResults* param_1, RT7Core* param_2) {
        long lVar1;
        MapRebuildSquare* pMVar2;
        ulong uVar3;
        ulong uVar4;

        lVar1 = param_1->size();
        if (lVar1 != 0) {
            uVar4 = 0;
            do {
                pMVar2 = (MapRebuildSquare*)eastl::vector<MapRebuildSquare, eastl::allocator>::operator[](
                    (vector<MapRebuildSquare, eastl::allocator>*)param_1, uVar4);
                RebuildSquareTerrain(pMVar2, param_2);
                uVar4 = uVar4 + 1;
                uVar3 = param_1->size();
            } while (uVar4 < uVar3);
        }
    }

    // 0x1001c3da0, 48 bytes, placed by class name and debug map
    // MapRebuildHandler::DeleteRebuildResults(MapRebuildResults*)
    void MapRebuildHandler::DeleteRebuildResults(MapRebuildResults* param_1) {
        if (param_1 != (MapRebuildResults*)0) {
            param_1->~MapRebuildResults();
            operator_delete(param_1);
        }
    }

    // 0x1001c7850, 688 bytes, placed by __FILE__ string
    // MapRebuildHandler_LogicThread::SumDetailedGroundColours(dash3d::Ground const&, jag::math::Vector3T<int>, jag::math::Vector4T<float>&, int&)
    void MapRebuildHandler_LogicThread::SumDetailedGroundColours(undefined8 param_1_00, undefined8 param_2,
                                                                 Ground* param_1, undefined8 param_4,
                                                                 undefined4 param_5, QuaternionT<float>* param_6,
                                                                 int* param_7) {
        int iVar1;
        int iVar2;
        uint uVar5;
        long lVar6;
        long lVar7;
        undefined4* puVar8;
        int* piVar9;
        ushort* puVar10;
        ulong uVar11;
        ulong uVar12;
        vector<int, eastl::allocator>* this;
        LocationData local_e8;
        undefined8 local_d8;
        undefined8 uStack_d0;
        undefined8 local_c8;
        undefined4 local_c0;
        vector<int, eastl::allocator>* local_b8;
        vector<int, eastl::allocator>* local_b0;
        vector<int, eastl::allocator>* local_a8;
        int* local_a0;
        ulong local_90;
        vector<int, eastl::allocator>* local_88;
        Ground* local_80;
        vector<int, eastl::allocator>* local_70;
        vector<int, eastl::allocator>* local_68;
        vector<int, eastl::allocator>* local_60;
        undefined4 local_58;
        undefined4 local_54;
        undefined4 local_50;
        undefined4 local_48;
        undefined4 local_44;
        undefined4 local_40;
        vector<unsigned int, eastl::allocator>* local_38;

        this = (vector<int, eastl::allocator>*)&param_1->field_208;
        local_c8 = param_4;
        local_c0 = param_5;
        local_a0 = param_7;
        lVar6 = size();
        local_38 = (vector<unsigned int, eastl::allocator>*)&param_1->field_240;
        lVar7 = eastl::vector<unsigned int, eastl::allocator>::size(local_38);
        if (lVar6 != lVar7) {
            /* WARNING: Subroutine does not return */
            LogAssert("ground.m_point1.size() == ground.m_point2.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "rseven/MapRebuildHandler.cpp",
                      488, (char*)0);
        }
        lVar6 = eastl::vector<unsigned int, eastl::allocator>::size(local_38);
        local_88 = (vector<int, eastl::allocator>*)&param_1->field_272;
        lVar7 = local_88->size();
        if (lVar6 != lVar7) {
            /* WARNING: Subroutine does not return */
            LogAssert("ground.m_point2.size() == ground.m_point3.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "rseven/MapRebuildHandler.cpp",
                      489, (char*)0);
        }
        lVar6 = size();
        if (lVar6 != 0) {
            local_70 = (vector<int, eastl::allocator>*)&param_1->field_104;
            local_68 = (vector<int, eastl::allocator>*)&param_1->field_136;
            local_60 = (vector<int, eastl::allocator>*)&param_1->field_168;
            local_b8 = (vector<int, eastl::allocator>*)&param_1->field_8;
            local_b0 = (vector<int, eastl::allocator>*)&param_1->field_40;
            local_a8 = (vector<int, eastl::allocator>*)&param_1->field_72;
            uVar12 = 0;
            local_80 = param_1;
            do {
                if (IsGroundBlendable(param_1, (int)uVar12) != '\0') {
                    puVar8 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](this, uVar12);
                    local_58 = *puVar8;
                    puVar8 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)local_38, uVar12);
                    local_54 = *puVar8;
                    puVar8 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_88, uVar12);
                    local_50 = *puVar8;
                    puVar8 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_70, uVar12);
                    local_48 = *puVar8;
                    puVar8 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_68, uVar12);
                    local_44 = *puVar8;
                    local_90 = uVar12;
                    puVar8 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_60, uVar12);
                    local_40 = *puVar8;
                    uVar12 = 0;
                    do {
                        piVar9 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&local_58, uVar12);
                        uVar11 = (ulong)*piVar9;
                        piVar9 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_b8, uVar11);
                        iVar1 = *piVar9;
                        piVar9 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_b0, uVar11);
                        iVar2 = *piVar9;
                        piVar9 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_a8, uVar11);
                        new (&local_e8) rs2lib::worldmap::LocationData(iVar1, iVar2, *piVar9);
                        if (jag::math::operator==((Vector3T*)&local_c8, (Vector3T*)&local_e8)) {
                            puVar10 = (ushort*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&local_48, uVar12);
                            uVar5 = jag::math::RunetekColour::HSLToRGB(*puVar10);
                            local_d8 = jag::math::Colour4FromA8R8G8B8(uVar5);
                            uStack_d0 = param_2;
                            jag::math::QuaternionT<float>::operator+=(param_6, (QuaternionT*)&local_d8);
                            *local_a0 = *local_a0 + 1;
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 != 3);
                    uVar12 = local_90;
                    param_1 = local_80;
                    this = (vector<int, eastl::allocator>*)(vector<unsigned int, eastl::allocator>*)this;
                }
                uVar12 = uVar12 + 1;
                uVar11 = size();
            } while (uVar12 < uVar11);
        }
    }

    // 0x1001c7c20, 784 bytes, placed by __FILE__ string
    // MapRebuildHandler_LogicThread::HandleRebuild(dash3d::world const&, rs2lib::CoordGrid const&, jagex3::Js5&)
    void MapRebuildHandler_LogicThread::HandleRebuild(world* param_1, CoordGrid* param_2, Js5* param_3) {
        int iVar1;
        uint uVar2;
        bool bVar3;
        MapRebuildResults* this;
        long* plVar4;
        long lVar5;
        ulong uVar6;
        int* piVar7;
        undefined8* puVar8;
        int* piVar9;
        undefined* puVar10;
        undefined8 extraout_RDX;
        undefined8 extraout_RDX_00;
        undefined1* puVar11;
        undefined1 auVar13[16];
        undefined1 auVar14[16];
        hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> local_c8[56];
        allocator local_90[24];
        shared_ptr local_78;
        MapRebuildResults* local_60;
        hash local_58[16];
        undefined8 local_48;
        undefined8 local_40;
        int local_34;

        this = operator_new(160);
        MapRebuildResults::MapRebuildResults(this);
        *(uint*)(field_32 + 8) = param_2->m_z;
        uVar2 = param_2->m_x;
        *(uint*)(field_32 + 0) = param_2->m_level;
        *(uint*)(field_32 + 4) = uVar2;
        plVar4 = (long*)OSRenderCore_AudioThread::Instance();
        lVar5 = (((long)plVar4 + *(long*)(*plVar4 + -24)))->HeapBeginPtr();
        *(MapRebuildResults**)(lVar5 + 17563840) = this;
        RebuildTerrain(param_1, param_2, this);
        local_60 = this;
        uVar6 = (&field_48)->size();
        eastl::allocator::allocator(local_90, "EASTL hash_set");
        eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::hash_set(
            local_c8, uVar6, local_58, (equal_to*)&local_48, local_90);
        local_58 =
            (hash[16])eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                       eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                       eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                       eastl::prime_rehash_policy, false, true, true>::begin();
        auVar13 = (&field_48)->end();
        local_40 = auVar13._8_8_;
        while (true) {
            local_48 = auVar13._0_8_;
            bVar3 = eastl::operator!=((eastl*)local_58, (hashtable_iterator_base*)&local_48, auVar13._8_8_);
            if (!bVar3)
                break;
            piVar7 = (int*)local_58->HeapBeginPtr();
            iVar1 = *piVar7;
            if (iVar1 == -1) {
                new (&local_78) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            } else {
                puVar8 = (undefined8*)shared_ptr<dash3d::TextureProvider>::operator->(
                    (shared_ptr<dash3d::TextureProvider>*)&dash3d::Pix3D::m_textureProvider);
                (**(code**)*puVar8)(&local_78, puVar8, iVar1);
            }
            bVar3 = operator!=(&local_78, (_func_decltype_nullptr*)0);
            if (bVar3) {
                lVar5 = shared_ptr<dash3d::Texture>::operator->((shared_ptr<dash3d::Texture>*)&local_78);
                piVar7 = (int*)((lVar5 + 56))->data();
                piVar9 = (int*)((lVar5 + 56))->end();
                for (; piVar7 != piVar9; piVar7 = piVar7 + 1) {
                    local_34 = *piVar7;
                    eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, false, true>::insert((int*)local_90);
                }
            }
            local_78.~shared_ptr();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>::operator++(
                (hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>*)local_58);
            auVar13._8_8_ = extraout_RDX;
            auVar13._0_8_ = local_48;
        }
        auVar13 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                   eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                   eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                   eastl::prime_rehash_policy, false, true, true>::begin();
        local_58 = (hash[16])auVar13;
        auVar14 = local_c8->end();
        local_40 = auVar14._8_8_;
        puVar11 = &local_60->field_104;
        while (true) {
            local_48 = auVar14._0_8_;
            bVar3 = eastl::operator!=((eastl*)local_58, (hashtable_iterator_base*)&local_48, auVar14._8_8_);
            if (!bVar3) {
                local_c8->~hash_map();
                return;
            }
            piVar7 = (int*)local_58->HeapBeginPtr();
            local_34 = *piVar7;
            new (&local_78) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(
                (_func_decltype_nullptr*)(hashtable_iterator_base*)&local_48);
            puVar10 = (undefined*)param_3->GetFile(&local_78, local_34);
            if (puVar10 != DataStatus::READY)
                break;
            if (puVar10 == DataStatus::READY) {
                eastl::hashtable<
                    int, eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>,
                    eastl::allocator,
                    eastl::use_first<
                        eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>>,
                    eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                    eastl::prime_rehash_policy, false, true,
                    true>::emplace<int&, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>((int*)local_90,
                                                                                                      (shared_ptr*)
                                                                                                          puVar11);
            }
            local_78.~shared_ptr();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>::operator++(
                (hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>*)local_58);
            auVar14._8_8_ = extraout_RDX_00;
            auVar14._0_8_ = local_48;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("e == DataStatus::READY",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/rseven/"
                  "MapRebuildHandler.cpp",
                  561, (char*)0);
    }

} // namespace jag::oldscape::rseven

namespace jag::game {
    // 0x1001c4510: the linker folded this into oldscape::rseven::OSRenderCore_TextureDataProvider::Gamma() const, which has identical code
    float EnvBloomSettings::GetBrightpassThreshold() const;

    // 0x1001c4510: the linker folded this into oldscape::rseven::OSRenderCore_TextureDataProvider::Gamma() const, which has identical code
    float Cutscene2DPlaybackState::GetPauseTimeSec() const;

} // namespace jag::game
