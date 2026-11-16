// libs/oldscape/osrendercore/rseven/MapRebuildHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.osrendercore

#include "MapRebuildHandler.h"
#include "libs/core/utils/Hash.h"
#include "libs/game/runetek5/config/iftype/cutscenes/Cutscene2D.h"
#include "libs/oldscape/osrendercore/OSRenderCore.h"

namespace jag::oldscape {
    // 0x1001c3dd0
    void OSRenderCore_RenderThread_RSeven::GetEffectManager() {
        ((RT7Core*)field_8.operator->())->GetEffectManager();
    }

    // 0x1001c3df0
    long OSRenderCore_LogicThread_RSeven::GetPostProcessConfig() {
        return *(long*)((long)&field_0 + *(long*)((long)field_0 - 24)) + 19677832;
    }

    // 0x1001c3e10
    long OSRenderCore_LogicThread_RSeven::GetSSAOParams() {
        return *(long*)((long)&field_0 + *(long*)((long)field_0 - 24)) + 19678456;
    }

    // 0x1001c3e30
    long OSRenderCore_LogicThread_RSeven::GetSunlightOptions() {
        return *(long*)((long)&field_0 + *(long*)((long)field_0 - 24)) + 19678676;
    }

    // 0x1001c3e50
    void OSRenderCore_LogicThread_RSeven::GetVolumetricScatteringParams() {
        ((Layout*)(*(long*)((long)&field_0 + *(long*)((long)field_0 - 24)) + 19678576))->SSOBeginPtr();
    }

    // 0x1001c3e70
    VolumetricScatteringParams* OSRenderCore_LogicThread_RSeven::GetVolumetricScatteringParamsMutable() {
        return (VolumetricScatteringParams*)((MutationTracked<
                                                 jag::graphics::
                                                     VolumetricScatteringParams>*)(*(long*)((long)&field_0 +
                                                                                            *(long*)((long)field_0 -
                                                                                                     24)) +
                                                                                   19678576))
            ->GetMutable();
    }

    // 0x1001c3ea0
    void OSRenderCore_LogicThread_RSeven::GetLightScatteringParams() {
        ((Layout*)(*(long*)((long)&field_0 + *(long*)((long)field_0 - 24)) + 19678504))->SSOBeginPtr();
    }

    // 0x1001c3ec0
    SimpleScatteringParams* OSRenderCore_LogicThread_RSeven::GetLightScatteringParamsMutable() {
        return (SimpleScatteringParams*)((MutationTracked<
                                             jag::graphics::SimpleScatteringParams>*)(*(long*)((long)&field_0 +
                                                                                               *(long*)((long)field_0 -
                                                                                                        24)) +
                                                                                      19678504))
            ->GetMutable();
    }

    // 0x1001c3ef0
    long OSRenderCore_LogicThread_RSeven::GetEffectTransitionMilliseconds() {
        return *(long*)((long)&field_0 + *(long*)((long)field_0 - 24)) + 19678672;
    }

    // 0x1001c4490
    void OSRenderCore_RenderThread_RSeven::UpdateGamma(float arg1) {
        RT7Core* pRVar1;
        TextureManager* pTVar2;

        if ((float)tdp.GetBrightpassThreshold() != arg1) {
            tdp.SetWidth(arg1);
            pRVar1 = (RT7Core*)field_8.operator->();
            pTVar2 = pRVar1->GetTextureManager();
            ((TextureAtlasManager*)pTVar2->GetTextureAtlasManager())->RebuildAtlases(true);
            pRVar1 = (RT7Core*)field_8.operator->();
            pTVar2 = pRVar1->GetTextureManager();
            pTVar2->ClearCache();
        }
    }

} // namespace jag::oldscape

namespace jag::oldscape::rseven {
    // 0x1001c3b70
    void MapRebuildHandler_RenderThread::HandleRebuild(MapRebuildResults& mapRebuildResults,
                                                       jag::graphics::RT7Core& rt7Core) {
        MapRebuildSquare* mapRebuildSquare;
        unsigned long uVar2;
        unsigned long arg1;

        if (mapRebuildResults.size() != 0) {
            arg1 = 0;
            do {
                mapRebuildSquare = (MapRebuildSquare*)mapRebuildResults[arg1];
                RebuildSquareTerrain(mapRebuildSquare, rt7Core);
                arg1 = arg1 + 1;
                uVar2 = mapRebuildResults.size();
            } while (arg1 < uVar2);
        }
    }

    // 0x1001c3da0
    void MapRebuildHandler::DeleteRebuildResults(MapRebuildResults* mapRebuildResults) {
        if (mapRebuildResults != nullptr) {
            mapRebuildResults->~MapRebuildResults();
            operator delete(mapRebuildResults);
        }
    }

    // 0x1001c7850
    void MapRebuildHandler_LogicThread::SumDetailedGroundColours(const dash3d::Ground& ground,
                                                                 jag::math::Vector3T<int> vector3,
                                                                 jag::math::Vector4T<float>& vector4, int& arg4) {
        int arg1;
        unsigned int uVar3;
        uint32_t* puVar6;
        int* piVar7;
        unsigned int* puVar8;
        unsigned short* puVar9;
        unsigned long uVar10;
        unsigned long uVar11;
        LocationData local_e8;
        Vector4T<float> local_d8;
        vector<int>* local_b8;
        vector<int>* local_b0;
        vector<int>* local_a8;
        unsigned long local_90;
        vector<unsigned int>* local_78;
        vector<int>* local_70;
        vector<int>* local_68;
        vector<int>* local_60;
        uint32_t local_58;
        uint32_t local_54;
        uint32_t local_50;
        uint32_t local_48;
        uint32_t local_44;
        uint32_t local_40;

        uint32_t local_c0 = (uint32_t)vector3;
        vector<int>* this_00 = (vector<int>*)&field_208;
        int* local_a0 = arg4;
        long lVar4 = this_00->size();
        vector<unsigned int>* local_38 = (vector<unsigned int>*)&field_240;
        long lVar5 = local_38->size();
        if (lVar4 != lVar5) {
            LogAssert("ground.m_point1.size() == ground.m_point2.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "rseven/MapRebuildHandler.cpp",
                      488, nullptr);
        }
        lVar4 = local_38->size();
        vector<int>* local_88 = (vector<int>*)&field_272;
        lVar5 = local_88->size();
        if (lVar4 != lVar5) {
            LogAssert("ground.m_point2.size() == ground.m_point3.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "rseven/MapRebuildHandler.cpp",
                      489, nullptr);
        }
        lVar4 = this_00->size();
        if (lVar4 != 0) {
            local_70 = (vector<int>*)&field_104;
            local_68 = (vector<int>*)&field_136;
            local_60 = (vector<int>*)&field_168;
            local_b8 = (vector<int>*)&field_8;
            local_b0 = (vector<int>*)&field_40;
            local_a8 = (vector<int>*)(field_64 + 8);
            uVar11 = 0;
            local_78 = (vector<unsigned int>*)this_00;
            do {
                if (IsGroundBlendable((Ground*)this, (int)uVar11) != '\0') {
                    puVar6 = (uint32_t*)(*this_00)[uVar11];
                    local_58 = *puVar6;
                    puVar6 = (uint32_t*)(*local_38)[uVar11];
                    local_54 = *puVar6;
                    puVar6 = (uint32_t*)(*local_88)[uVar11];
                    local_50 = *puVar6;
                    puVar6 = (uint32_t*)(*local_70)[uVar11];
                    local_48 = *puVar6;
                    puVar6 = (uint32_t*)(*local_68)[uVar11];
                    local_44 = *puVar6;
                    local_90 = uVar11;
                    puVar6 = (uint32_t*)(*local_60)[uVar11];
                    local_40 = *puVar6;
                    uVar11 = 0;
                    do {
                        piVar7 = &local_58[uVar11];
                        uVar10 = (unsigned long)*piVar7;
                        piVar7 = (int*)(*local_b8)[uVar10];
                        arg1 = *piVar7;
                        puVar8 = (unsigned int*)(*local_b0)[uVar10];
                        uVar3 = *puVar8;
                        puVar8 = (unsigned int*)(*local_a8)[uVar10];
                        local_e8 = rs2lib::worldmap::LocationData(arg1, uVar3, *puVar8);
                        if (ground == local_e8) {
                            puVar9 = &local_48[uVar11];
                            uVar3 = jag::math::RunetekColour::HSLToRGB(*puVar9);
                            jag::math::Colour4FromA8R8G8B8(uVar3);
                            vector4 += local_d8;
                            *local_a0 = *local_a0 + 1;
                        }
                        uVar11 = uVar11 + 1;
                    } while (uVar11 != 3);
                    uVar11 = local_90;
                    this = (MapRebuildHandler_LogicThread*)(Ground*)this;
                    this_00 = (vector<int>*)local_78;
                }
                uVar11 = uVar11 + 1;
                uVar10 = this_00->size();
            } while (uVar11 < uVar10);
        }
    }

    // 0x1001c7c20
    void MapRebuildHandler_LogicThread::HandleRebuild(const dash3d::world& world, const rs2lib::CoordGrid& coordGrid,
                                                      jagex3::Js5& js5) {
        int iVar1;
        bool cVar3;
        int* piVar7;
        uint64_t* puVar8;
        int* piVar9;
        uint8_t* puVar10;
        uint8_t auVar12[16];
        ReturnValue local_90;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_78;
        hash<int> local_58;
        equal_to<int> local_48;
        int local_34;

        MapRebuildResults* mapRebuildResults = (MapRebuildResults*)operator new(160);
        new (mapRebuildResults) MapRebuildResults();
        *(unsigned int*)(mapRebuildResults->field_32 + 8) = coordGrid.m_z;
        unsigned int uVar2 = coordGrid.m_x;
        *(unsigned int*)(mapRebuildResults->field_32 + 0) = coordGrid.m_level;
        *(unsigned int*)(mapRebuildResults->field_32 + 4) = uVar2;
        auto plVar5 = OSRenderCore_AudioThread::Instance();
        long lVar6 = ((Layout*)((long)plVar5 + *(long*)(*plVar5 - 24)))->HeapBeginPtr();
        *(MapRebuildResults**)(lVar6 + 17563840) = mapRebuildResults;
        RebuildTerrain(world, coordGrid, mapRebuildResults);
        uint8_t* puVar11 = &mapRebuildResults->field_48;
        MapRebuildResults* local_60 = mapRebuildResults;
        unsigned long arg1 = puVar11->size();
        hash_set<int> local_c8(arg1, local_58, local_48, local_90);
        &local_58 = (hash<int>[16])puVar11->begin();
        local_48._0_16_ = puVar11->end();
        while (true) {
            cVar3 = local_58 != local_48;
            if (!cVar3)
                break;
            piVar7 = (int*)local_58.HeapBeginPtr();
            iVar1 = *piVar7;
            if (iVar1 == -1) {
                local_78 = shared_ptr();
            } else {
                puVar8 = (uint64_t*)(*((shared_ptr<dash3d::TextureProvider>*)&dash3d::Pix3D::m_textureProvider))
                             .operator->();
                (**(void (**)(...))*puVar8)(&local_78, puVar8, iVar1);
            }
            if (local_78 != nullptr) {
                lVar6 = local_78.operator->();
                piVar7 = (int*)((lVar6 + 56))->data();
                piVar9 = (int*)((lVar6 + 56))->end();
                for (; piVar7 != piVar9; piVar7 = piVar7 + 1) {
                    local_34 = *piVar7;
                    eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, false, true>::insert(local_90);
                }
            }
            ++local_58;
        }
        auVar12 = local_c8.begin();
        &local_58 = (hash<int>[16])auVar12;
        auVar12 = local_c8.end();
        puVar11 = &local_60->field_104;
        local_48._0_16_ = auVar12;
        while (true) {
            cVar3 = local_58 != local_48;
            if (!cVar3) {
                return;
            }
            piVar7 = (int*)local_58.HeapBeginPtr();
            local_34 = *piVar7;
            local_78 = shared_ptr();
            puVar10 = (uint8_t*)js5.GetFile(local_78, local_34);
            if (puVar10 != DataStatus::READY)
                break;
            if (puVar10 == DataStatus::READY) {
                eastl::hashtable<
                    int, eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char>>>>, eastl::allocator,
                    eastl::use_first<eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char>>>>>,
                    eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                    eastl::prime_rehash_policy, false, true, true>::emplace<int&,
                                                                            shared_ptr<PacketJ<Array<unsigned char>>>>(
                    &local_90,
                    (hashtable<int, eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char>>>>, eastl::allocator,
                               eastl::use_first<eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char>>>>>,
                               eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                               eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)puVar11,
                    &local_34, &local_78);
            }
            ++local_58;
        }
        LogAssert("e == DataStatus::READY",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/rseven/"
                  "MapRebuildHandler.cpp",
                  561, nullptr);
    }

} // namespace jag::oldscape::rseven

namespace jag::game {
    // 0x1001c4510: EnvBloomSettings::GetBrightpassThreshold() const has the same machine code as oldscape::rseven::OSRenderCore_TextureDataProvider::Gamma() const

    // 0x1001c4510: Cutscene2DPlaybackState::GetPauseTimeSec() const has the same machine code as oldscape::rseven::OSRenderCore_TextureDataProvider::Gamma() const

} // namespace jag::game
