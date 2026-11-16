// libs/oldscape/osrendercore/Renderable.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.osrendercore

#include "Renderable.h"
#include "libs/game/runetek5/config/iftype/components/Model.h"
#include "libs/oldscape/osrendercore/rseven/MapRebuildHandler.h"

namespace jag::oldscape::rseven {
    // 0x100f373b0
    int32_t MapRebuildHandler_LogicThread::m_blendTerrain[4] = {1, 0, 0, 0};

    // 0x1001c56f0
    void CalculatePointNormal(std::array<int, 3ul>& arg1, int arg2, int arg3, int arg4, const dash3d::world& world) {
        int iVar1 = world.GetGroundHeight(arg2, arg3 + 1, arg4);
        int iVar2 = world.GetGroundHeight(arg2, arg3 - 1, arg4);
        iVar1 = iVar1 - iVar2;
        iVar2 = world.GetGroundHeight(arg2, arg3, arg4 + 1);
        int iVar3 = world.GetGroundHeight(arg2, arg3, arg4 - 1);
        iVar2 = iVar2 - iVar3;
        double dVar6 = (double)sqrt<int>(iVar1 * iVar1 + iVar2 * iVar2 + 65536);
        iVar3 = (int)dVar6;
        int* piVar4 = &arg1[0];
        *piVar4 = (iVar1 * 256) / iVar3;
        uint32_t* puVar5 = &arg1[1];
        *puVar5 = (int)(65536 / (long)iVar3);
        piVar4 = &arg1[2];
        *piVar4 = (iVar2 * 256) / iVar3;
    }

    // 0x1001c5860
    void InterpolateNormal(std::array<int, 3ul>& arg1, bool arg2, int arg3, const TerrainVertex& terrainVertex1,
                           const TerrainVertex& terrainVertex2) {
        int* piVar2;
        int iVar3;
        uint64_t* uint64_t;
        uint64_t in_register_00000031;
        int iVar4;
        int iVar5;
        int iVar6;
        uint64_t* this_00;
        double dVar7;

        TerrainVertex* pTVar1 = (TerrainVertex*)&terrainVertex1.field_8;
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg2) == 0) {
            pTVar1 = terrainVertex1;
        }
        if (pTVar1->field_0 == arg3) {
            *(uint32_t*)(arg1 + 8) = terrainVertex1.field_20;
            *(uint64_t*)arg1 = terrainVertex1.field_12;
        } else {
            pTVar1 = (TerrainVertex*)&terrainVertex2.field_8;
            if (!arg2) {
                pTVar1 = terrainVertex2;
            }
            if (pTVar1->field_0 == arg3) {
                *(uint32_t*)(arg1 + 8) = terrainVertex2.field_20;
                *(uint64_t*)arg1 = terrainVertex2.field_12;
            } else {
                uint64_t = &terrainVertex1.field_12;
                piVar2 = (int*)(*uint64_t)[0];
                iVar4 = *piVar2;
                this_00 = &terrainVertex2.field_12;
                piVar2 = (int*)(*this_00)[0];
                iVar4 = iVar4 + *piVar2;
                piVar2 = (int*)(*uint64_t)[1];
                iVar5 = *piVar2;
                piVar2 = (int*)(*this_00)[1];
                iVar5 = iVar5 + *piVar2;
                piVar2 = (int*)(*uint64_t)[2];
                iVar3 = *piVar2;
                piVar2 = (int*)(*this_00)[2];
                iVar3 = iVar3 + *piVar2;
                dVar7 = (double)sqrt<int>(iVar3 * iVar3 + iVar5 * iVar5 + iVar4 * iVar4);
                iVar6 = (int)dVar7;
                piVar2 = &arg1[0];
                *piVar2 = (iVar4 * 256) / iVar6;
                piVar2 = &arg1[1];
                *piVar2 = (iVar5 * 256) / iVar6;
                piVar2 = &arg1[2];
                *piVar2 = (iVar3 * 256) / iVar6;
            }
        }
    }

    // 0x1001c59b0
    void MapRebuildHandler_LogicThread::SetBlendTerrain(bool arg1) {
        m_blendTerrain = arg1;
    }

    // 0x1001c59c0
    void MapRebuildHandler_LogicThread::RebuildTerrain(const dash3d::world& world, const rs2lib::CoordGrid& coordGrid,
                                                       MapRebuildResults& mapRebuildResults) {
        MapRebuildSquare* mapRebuildSquare;
        unsigned long arg1;
        unsigned int uVar6;
        MapRebuildResults* local_60;
        hash_set<int>* local_58;
        unsigned long local_48;
        unsigned int local_38;
        int local_34;

        int iVar1 = coordGrid.GetX();
        int iVar2 = coordGrid.GetZ();
        int iVar3 = coordGrid.GetPos();
        CoordGrid local_70(iVar1, iVar2 + 104, iVar3 + 104);
        unsigned int uVar4 = coordGrid.GetMapSquareX();
        unsigned int uVar5 = local_70.GetMapSquareX();
        iVar1 = coordGrid.GetMapSquareZ();
        uint64_t local_40 = local_70.GetMapSquareZ();
        mapRebuildResults.resize((long)(int)(((uVar5 - uVar4) + 1) * (((int)local_40 - iVar1) + 1)));
        if ((int)uVar4 <= (int)uVar5) {
            local_58 = (hash_set<int>*)&mapRebuildResults.field_48;
            iVar2 = (int)local_40;
            arg1 = 0;
            local_60 = mapRebuildResults;
            local_38 = uVar5;
            local_34 = iVar1;
            do {
                local_48 = (unsigned long)uVar4;
                uVar6 = uVar4;
                if (iVar1 <= (int)local_40) {
                    arg1 = (unsigned long)(int)arg1;
                    do {
                        mapRebuildSquare = (MapRebuildSquare*)(*local_60)[arg1];
                        arg1 = arg1 + 1;
                        uVar5 = coordGrid.m_x;
                        *(unsigned int*)(mapRebuildSquare->field_80 + 0) = coordGrid.m_level;
                        *(unsigned int*)(mapRebuildSquare->field_80 + 4) = uVar5;
                        *(unsigned int*)(mapRebuildSquare->field_80 + 8) = coordGrid.m_z;
                        *(int*)(mapRebuildSquare->field_80 + 12) = (int)local_48;
                        *(int*)&mapRebuildSquare->field_96 = iVar1;
                        RebuildSquare(world, mapRebuildSquare, local_58);
                        iVar1 = iVar1 + 1;
                    } while (iVar2 + 1 != iVar1);
                    uVar6 = (unsigned int)local_48;
                    iVar1 = local_34;
                    uVar5 = local_38;
                }
                uVar4 = uVar6 + 1;
            } while (uVar6 != uVar5);
        }
    }

    // 0x1001c5bd0
    void MapRebuildHandler_LogicThread::RebuildSquare(const dash3d::world& world, MapRebuildSquare& mapRebuildSquare,
                                                      eastl::hash_set<int>& hash_set) {
        int arg7;
        int arg6;
        uint32_t uVar2;
        shared_ptr<BuildTerrainResultLevel>* psVar5;
        vector<jag::graphics::TerrainPatchVertex>* pvVar6;
        long lVar7;
        uint64_t* puVar8;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        MapRebuildHandler_LogicThread* this_00;
        hash_set<int>* hash_set_00;
        unsigned long uVar9;
        uint32_t in_stack_ffffffffffffff3c;
        int in_stack_ffffffffffffff48;
        RenderChunk local_90;
        unsigned int local_70;
        int local_6c;
        int local_68;
        int local_64;
        int local_60;
        int local_5c;
        unsigned int local_44;

        int iVar10 = *(int*)(mapRebuildSquare.field_80 + 12);
        int iVar1 = mapRebuildSquare.field_80->GetZ();
        unsigned int local_3c = iVar10 * 64 - iVar1;
        int local_38 = local_3c + 64;
        iVar10 = *(int*)&mapRebuildSquare.field_96;
        int local_40 = mapRebuildSquare.field_80->GetPos();
        local_40 = iVar10 * 64 - local_40;
        int local_34 = local_40 + 64;
        int local_48 = local_3c * -128;
        unsigned long local_50 = (unsigned long)(unsigned int)(local_40 * -128);
        local_90.field_0._0_4_ = 0;
        auto puVar3 = std::max<int>(local_3c, local_90);
        local_3c = *puVar3;
        auto piVar4 = std::min<int>(local_38, *((int*)&RebuildSquare(dash3d::world const&, MapRebuildSquare&,
                                                                     eastl::hash_set<int>&)::BUILD_SIZE));
        local_38 = *piVar4;
        local_90.field_0._0_4_ = 0;
        piVar4 = std::max<int>(local_40, local_90);
        local_40 = *piVar4;
        piVar4 = std::min<int>(local_34, *((int*)&RebuildSquare(dash3d::world const&, MapRebuildSquare&,
                                                                eastl::hash_set<int>&)::BUILD_SIZE));
        local_34 = *piVar4;
        unsigned long uVar11 = 0;
        do {
            MakeSharedPool<BuildTerrainResultLevel, 64>::MakeShared<>();
            psVar5 = &mapRebuildSquare[uVar11];
            *psVar5 = local_90;
            pvVar6 = (vector<jag::graphics::TerrainPatchVertex>*)(*psVar5).operator->();
            pvVar6->reserve(256);
            lVar7 = (*psVar5).operator->();
            ((lVar7 + 32))->reserve(256);
            lVar7 = (*psVar5).operator->();
            ((lVar7 + 12560))->reserve(128);
            local_90 = jag::graphics::RenderChunk();
            local_90.field_0._0_4_ = 0;
            local_90.field_8._4_4_ = 0;
            local_90.field_16._0_4_ = 63;
            local_90._20_8_ = 270582939648;
            lVar7 = (*psVar5).operator->();
            puVar8 = (uint64_t*)(*((lVar7 + 64)))[0];
            *puVar8 = (((uint64_t)local_90.field_0._4_4_ << 32) | (uint32_t)((uint32_t)local_90.field_0));
            puVar8[1] = (((uint64_t)local_90.field_8._4_4_ << 32) | (uint32_t)((uint32_t)local_90.field_8));
            *(unsigned long*)((long)puVar8 + 12) =
                (((uint64_t)((uint32_t)local_90.field_16) << 32) | (uint32_t)local_90.field_8._4_4_);
            *(uint64_t*)((long)puVar8 + 20) = local_90._20_8_;
            uVar11 = uVar11 + 1;
        } while (uVar11 != 4);
        uVar11 = local_50;
        world* this_02 = world;
        unsigned int arg2 = local_3c;
        if ((int)local_3c < local_38) {
            do {
                local_44 = arg2 + 1;
                if (local_40 < local_34) {
                    local_70 = arg2 * 128 + local_48;
                    local_60 = local_44 * 128 + local_48;
                    iVar10 = local_40;
                    do {
                        local_68 = iVar10 * 128 + (int)uVar11;
                        local_5c = iVar10 + 1;
                        local_64 = local_5c * 128 + (int)uVar11;
                        iVar1 = 0;
                        do {
                            local_6c = iVar1;
                            this = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_02->GetSquare(
                                iVar1, arg2, iVar10);
                            this_00 = (MapRebuildHandler_LogicThread*)end();
                            arg6 = local_60;
                            arg7 = local_64;
                            iVar1 = local_68;
                            if (this_00 != nullptr) {
                                do {
                                    psVar5 = (shared_ptr<BuildTerrainResultLevel>*)
                                        mapRebuildSquare[(long)*(int*)((long)&this_00[1].field_40 + 3)];
                                    hash_set_00 = (hash_set<int>*)**psVar5;
                                    CollectGroundData(
                                        this_00, (Square*)(unsigned long)local_70, (int)world,
                                        (world*)(unsigned long)arg2, iVar10, iVar1, arg6, arg7, (int)hash_set,
                                        hash_set_00,
                                        (BuildTerrainResultLevel*)(((uint64_t)in_stack_ffffffffffffff3c << 32) |
                                                                   (uint32_t)local_48),
                                        (int)local_50, in_stack_ffffffffffffff48);
                                    this_00 = (MapRebuildHandler_LogicThread*)((this_00[1].field_64 + 7))->end();
                                } while (this_00 != nullptr);
                            }
                            iVar1 = local_6c + 1;
                            this_02 = world;
                        } while (iVar1 != 4);
                        uVar11 = local_50;
                        iVar10 = local_5c;
                    } while (local_5c < local_34);
                }
                arg2 = local_44;
            } while ((int)local_44 < local_38);
        }
        uVar11 = 0;
        do {
            psVar5 = &mapRebuildSquare[uVar11];
            uVar9 = ((vector<game::WorldMap::MapElementInstance>*)(*psVar5).operator->())->size();
            if (uVar9 < 256) {
                pvVar6 = (vector<jag::graphics::TerrainPatchVertex>*)(*psVar5).operator->();
                pvVar6->shrink_to_fit();
            }
            lVar7 = (*psVar5).operator->();
            uVar9 = ((lVar7 + 32))->size();
            if (uVar9 < 256) {
                lVar7 = (*psVar5).operator->();
                ((lVar7 + 32))->shrink_to_fit();
            }
            lVar7 = (*psVar5).operator->();
            uVar9 = ((lVar7 + 12560))->size();
            if (uVar9 < 128) {
                lVar7 = (*psVar5).operator->();
                ((lVar7 + 12560))->shrink_to_fit();
            }
            lVar7 = (*psVar5).operator->();
            uVar2 = ((lVar7 + 12560))->size();
            lVar7 = (*psVar5).operator->();
            local_90.field_0._0_4_ = 0;
            lVar7 = (*((lVar7 + 64)))[local_90];
            *(uint32_t*)(lVar7 + 8) = uVar2;
            uVar11 = uVar11 + 1;
        } while (uVar11 != 4);
    }

} // namespace jag::oldscape::rseven

namespace jag {
    // 0x100009e70: Renderable::Storage::Storage() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10014e180: Renderable::GetTriangle() has the same machine code as math::Vector2T<float>::y() const

    // 0x10014e180: Renderable::GetUISceneSettings() has the same machine code as math::Vector2T<float>::y() const

    // 0x10014e180: Renderable::GetModel() has the same machine code as math::Vector2T<float>::y() const

    // 0x1001c48f0
    RenderableOutput*
    ModelRenderable::Render(TriangleVertexData* triangleVertexData, unsigned int arg2, RenderState& renderState,
                            eastl::fixed_hash_map<int, Model, 32768ul, 32769ul, true, eastl::hash<int>,
                                                  eastl::equal_to<int>, false>& fixed_hash_map,
                            unsigned int arg5) const {
        unsigned short arg4;
        int iVar5;
        unsigned int uVar6;
        unsigned int uVar7;
        long lVar8;
        uint32_t* puVar9;
        uint32_t in_register_00000014;
        Model* this_00;
        uint32_t in_register_0000008c;
        unsigned long uVar10;
        Model* this_02;
        unsigned int in_stack_00000008;
        uint8_t local_98[64];
        unsigned long local_58;

        hashtable<int, eastl::pair<int const, Model>,
                  eastl::fixed_hashtable_allocator<32770ul, 432ul, 32768ul, 8ul, 0ul, true>,
                  eastl::use_first<eastl::pair<int const, Model>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_01 =
                (hashtable<int, eastl::pair<int const, Model>,
                           eastl::fixed_hashtable_allocator<32770ul, 432ul, 32768ul, 8ul, 0ul, true>,
                           eastl::use_first<eastl::pair<int const, Model>>, eastl::equal_to<int>, eastl::hash<int>,
                           eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                           true, true>*)(((uint64_t)in_register_0000008c << 32) | (uint32_t)arg5);
        TriangleVertexData* local_48 = (TriangleVertexData*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        new (local_98) RenderableOutput(2, 0);
        auto local_a8 = this_01->find(*triangleVertexData);
        local_98._56_8_ = this_01;
        auto local_b8 = this_01->end();
        bool cVar3 = local_a8 != local_b8;
        if (cVar3) {
            lVar8 = local_a8.HeapBeginPtr();
            this_02 = (Model*)(lVar8 + 8);
            iVar5 = this_02->GetNumVerts();
            uVar6 = (unsigned int)renderState;
            if (in_stack_00000008 < iVar5 + uVar6) {
                if ((uVar6 == 0) && (in_stack_00000008 != 0)) {
                    uVar6 = this_02->GetNumVerts();
                    LogAssert("!isEmptyChunk || maxOffset == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                              "osrendercore/Renderable.cpp",
                              20, "Renderable may overflow vertex buffer. Model verts: u%, Max: u%",
                              (unsigned long)uVar6, (unsigned long)in_stack_00000008);
                }
            LAB_1001c49d0:
                new (this) RenderableOutput(1, 0);
                return (RenderableOutput*)this;
            }
            local_58 = (unsigned long)*(unsigned int*)(triangleVertexData + 36);
            this_02->TransformVertices(*(int*)(fixed_hash_map + 32), *(int*)(triangleVertexData + 20),
                                       *(int*)(triangleVertexData + 24), *(int*)(triangleVertexData + 28),
                                       *(int*)(triangleVertexData + 32), *(unsigned int*)(triangleVertexData + 36),
                                       *(int*)(triangleVertexData + 40), *(int*)(triangleVertexData + 44),
                                       *(int*)(triangleVertexData + 48), *(int*)(triangleVertexData + 52),
                                       *(int*)(triangleVertexData + 56));
            if (triangleVertexData[61] == (TriangleVertexData)0) {
                if (triangleVertexData[60] == (TriangleVertexData)0) {
                    Model::SortTriangles<false>((int)this_02, *(int*)(triangleVertexData + 12),
                                                *(int*)(triangleVertexData + 16), 0);
                } else {
                    if (Model::SortTriangles<true>((int)this_02, *(int*)(triangleVertexData + 12),
                                                   *(int*)(triangleVertexData + 16), *(int*)fixed_hash_map)) {
                        ((fixed_hash_map + 19680800))->push_back(*((triangleVertexData + 4)));
                    }
                }
            } else {
                this_02->DummySortTriangles();
            }
            uVar7 = this_02->RenderTriangles(uVar6, local_48);
            this_00 = this_02;
            local_98._4_4_ = uVar7;
            puVar9 = (uint32_t*)this_02->GetTintMode();
            local_98._48_4_ = *puVar9;
            if (uVar7 != 0) {
                uVar7 = uVar7 + uVar6;
                arg4 = *(unsigned short*)(triangleVertexData + 64);
                if (arg4 != 0) {
                    local_98[0] = '\x04' - (triangleVertexData[61] == (TriangleVertexData)0);
                    iVar5 = this_00->GetNumOutlineVerts();
                    if (in_stack_00000008 < iVar5 + uVar7) {
                        if (uVar6 == 0) {
                            uVar6 = this_02->GetNumVerts();
                            uVar7 = this_02->GetNumOutlineVerts();
                            LogAssert("!isEmptyChunk",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "osrendercore/Renderable.cpp",
                                      63,
                                      "Renderable outline may overflow vertex buffer. Model verts: %u, Outline verts: "
                                      "%u, Max: %u",
                                      (unsigned long)uVar6, (unsigned long)uVar7, (unsigned long)in_stack_00000008);
                        }
                        goto LAB_1001c49d0;
                    }
                    local_98._8_4_ = this_02->RenderOutline(uVar7, local_48, *(int*)(fixed_hash_map + 32), arg4,
                                                            *(unsigned short*)(triangleVertexData + 62));
                    uVar7 = local_98._8_4_ + uVar7;
                }
                if (triangleVertexData[66] != (TriangleVertexData)0) {
                    local_98[0] = '\x04' - (triangleVertexData[61] == (TriangleVertexData)0);
                    if (in_stack_00000008 < uVar7 + 6) {
                        if (uVar6 == 0) {
                            uVar6 = this_02->GetNumVerts();
                            if (*(short*)(triangleVertexData + 64) == 0) {
                                uVar10 = 0;
                            } else {
                                uVar7 = this_02->GetNumOutlineVerts();
                                uVar10 = (unsigned long)uVar7;
                            }
                            LogAssert("!isEmptyChunk",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "osrendercore/Renderable.cpp",
                                      79,
                                      "Renderable tint may overflow vertex buffer. Model verts: u%, Outline verts: %u, "
                                      "Tint verts: 6, Max: u%",
                                      (unsigned long)uVar6, uVar10, (unsigned long)in_stack_00000008);
                        }
                        goto LAB_1001c49d0;
                    }
                    this_02->Render2DAABB(uVar7, local_48, *(int*)(fixed_hash_map + 32),
                                          (unsigned char)triangleVertexData[66],
                                          *(unsigned short*)(triangleVertexData + 62));
                    local_98._12_4_ = 6;
                }
            }
            cVar3 = this_02->IsTemporary();
            this = (ModelRenderable*)(RenderableOutput*)this;
            if (cVar3) {
                local_98._56_8_->erase(*triangleVertexData);
            }
        }
        new (this) RenderableOutput(*local_98);
        return (RenderableOutput*)this;
    }

    // 0x1001c4d50
    TriangleRenderable*
    TriangleRenderable::Render(TriangleVertexData* triangleVertexData, unsigned int arg2, RenderState& renderState,
                               eastl::fixed_hash_map<int, Model, 32768ul, 32769ul, true, eastl::hash<int>,
                                                     eastl::equal_to<int>, false>& fixed_hash_map,
                               unsigned int arg5) const {
        uint64_t uVar1;
        uint64_t uVar2;
        uint64_t uVar3;
        uint64_t uVar4;
        uint64_t uVar5;
        uint64_t* puVar6;
        uint32_t in_register_00000014;
        long lVar8;
        unsigned int in_stack_00000008;
        uint8_t local_58[48];
        int local_28;
        int local_24;

        long lVar7 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        if (in_stack_00000008 < (int)renderState + 3U) {
            new (this) RenderableOutput(1, 0);
        } else {
            lVar8 = ((unsigned long)renderState & 4294967295) * 16;
            puVar6 = (uint64_t*)(*triangleVertexData)[0];
            uVar1 = puVar6[1];
            uVar2 = puVar6[2];
            uVar3 = puVar6[3];
            uVar4 = puVar6[4];
            uVar5 = puVar6[5];
            *(uint64_t*)(lVar7 + lVar8) = *puVar6;
            ((uint64_t*)(lVar7 + lVar8))[1] = uVar1;
            puVar6 = (uint64_t*)(lVar7 + 16 + lVar8);
            *puVar6 = uVar2;
            puVar6[1] = uVar3;
            puVar6 = (uint64_t*)(lVar7 + 32 + lVar8);
            *puVar6 = uVar4;
            puVar6[1] = uVar5;
            new (local_58) RenderableOutput(2, 3);
            local_24 = 0;
            new (&local_24) callstack::Callstack();
            local_28 = local_24;
            new (this) RenderableOutput(*local_58);
        }
        return this;
    }

} // namespace jag

namespace jag::osrsgraphics {
    // 0x1001c4df0
    char* GetResourceInline(ShaderResource shaderResource) {
        if (shaderResource < 11) {
            return (&PTR_Quad_fs_data_100ef7218)[shaderResource];
        }
        return "ResourceNotFound";
    }

    // 0x1001c4e20
    char* GetResourcePath(ShaderResource shaderResource) {
        if (shaderResource < 11) {
            return (&PTR_s__Users_bamboo_bamboo_home_01_xml_100ef7270)[shaderResource];
        }
        return "ResourceNotFound";
    }

} // namespace jag::osrsgraphics

namespace jag::osrsgraphics {
    namespace {
        // 0x1001c5330
        char const*
        ConvertEncodedResourceFilename<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str1, const char* str2) {
            if (Base64::Instance()
                    ->DecodeString<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(str1,
                                                                                                              str2)) {
                str2 = (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::data();
            }
            return str2;
        }

    } // namespace

} // namespace jag::osrsgraphics
