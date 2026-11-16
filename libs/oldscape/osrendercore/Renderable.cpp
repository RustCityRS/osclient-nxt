// libs/oldscape/osrendercore/Renderable.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.osrendercore

#include "Renderable.h"
#include "libs/game/runetek5/config/iftype/components/Model.h"
#include "libs/oldscape/osrendercore/rseven/MapRebuildHandler.h"

namespace jag {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Renderable::Storage::Storage();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    Renderable::Storage::Storage();

    // 0x10014e180: the linker folded this into math::Vector2T<float>::y() const, which has identical code
    Renderable::GetTriangle();

    // 0x10014e180: the linker folded this into math::Vector2T<float>::y() const, which has identical code
    Renderable::GetUISceneSettings();

    // 0x10014e180: the linker folded this into math::Vector2T<float>::y() const, which has identical code
    Renderable::GetModel();

    // 0x1001c48f0, 912 bytes, placed by debug map only (low confidence)
    // ModelRenderable::Render(TriangleVertexData*, unsigned int, RenderState&, eastl::fixed_hash_map<int, Model, 32768ul, 32769ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, unsigned int) const
    RenderableOutput* ModelRenderable::Render(TriangleVertexData* param_1, uint param_2, RenderState* param_3,
                                              fixed_hash_map* param_4, uint param_5) {
        ushort uVar1;
        bool bVar4;
        char cVar5;
        int iVar6;
        uint uVar7;
        long lVar8;
        undefined4* puVar9;
        undefined4 in_register_00000014;
        hashtable_iterator_base* extraout_RDX;
        Model* this_00;
        undefined4 in_register_0000008c;
        ulong uVar10;
        Model* this_01;
        uint uVar11;
        uint in_stack_00000008;
        hashtable_iterator_base local_b8[16];
        eastl local_a8[16];
        undefined1 local_98[64];
        ulong local_58;
        TriangleVertexData* local_48;

        local_48 = (TriangleVertexData*)CONCAT44(in_register_00000014, param_2);
        new (local_98) RenderableOutput(2, 0);
        eastl::hashtable<int, eastl::pair<int const, Model>,
                         eastl::fixed_hashtable_allocator<32770ul, 432ul, 32768ul, 8ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<int const, Model>>, eastl::equal_to<int>, eastl::hash<int>,
                         eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                         true>::find((int*)local_a8);
        local_98._56_8_ =
            (hashtable<int, eastl::pair<int const, Model>,
                       eastl::fixed_hashtable_allocator<32770ul, 432ul, 32768ul, 8ul, 0ul, true, eastl::allocator>,
                       eastl::use_first<eastl::pair<int const, Model>>, eastl::equal_to<int>, eastl::hash<int>,
                       eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                       true>*)CONCAT44(in_register_0000008c, param_5);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar4 = eastl::operator!=(local_a8, local_b8, extraout_RDX);
        if (bVar4) {
            lVar8 = local_a8->HeapBeginPtr();
            this_01 = (Model*)(lVar8 + 8);
            iVar6 = this_01->GetNumVerts();
            uVar7 = (uint)param_3;
            if (in_stack_00000008 < iVar6 + uVar7) {
                if ((uVar7 == 0) && (in_stack_00000008 != 0)) {
                    uVar7 = this_01->GetNumVerts();
                    /* WARNING: Subroutine does not return */
                    LogAssert("!isEmptyChunk || maxOffset == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                              "osrendercore/Renderable.cpp",
                              20, "Renderable may overflow vertex buffer. Model verts: u%, Max: u%", (ulong)uVar7,
                              (ulong)in_stack_00000008);
                }
            LAB_1001c49d0:
                new (this) RenderableOutput(1, 0);
                return (RenderableOutput*)this;
            }
            local_58 = (ulong) * (uint*)(param_1 + 36);
            this_01->TransformVertices(*(int*)(param_4 + 32), *(int*)(param_1 + 20), *(int*)(param_1 + 24),
                                       *(int*)(param_1 + 28), *(int*)(param_1 + 32), *(uint*)(param_1 + 36),
                                       *(int*)(param_1 + 40), *(int*)(param_1 + 44), *(int*)(param_1 + 48),
                                       *(int*)(param_1 + 52), *(int*)(param_1 + 56));
            if (param_1[61] == (TriangleVertexData)0) {
                if (param_1[60] == (TriangleVertexData)0) {
                    Model::SortTriangles<false>((int)this_01, *(int*)(param_1 + 12), *(int*)(param_1 + 16), 0);
                } else {
                    bVar4 = Model::SortTriangles<true>((int)this_01, *(int*)(param_1 + 12), *(int*)(param_1 + 16),
                                                       *(int*)param_4);
                    if (bVar4) {
                        eastl::fixed_vector<long long, 1000ul, true, eastl::allocator>::push_back(
                            (longlong*)(param_4 + 19680800));
                    }
                }
            } else {
                this_01->DummySortTriangles();
            }
            iVar6 = this_01->RenderTriangles(uVar7, local_48);
            this_00 = this_01;
            local_98._4_4_ = iVar6;
            puVar9 = (undefined4*)this_01->GetTintMode();
            local_98._48_4_ = *puVar9;
            if (iVar6 != 0) {
                uVar11 = iVar6 + uVar7;
                uVar1 = *(ushort*)(param_1 + 64);
                if (uVar1 != 0) {
                    local_98[0] = '\x04' - (param_1[61] == (TriangleVertexData)0);
                    iVar6 = this_00->GetNumOutlineVerts();
                    if (in_stack_00000008 < iVar6 + uVar11) {
                        if (uVar7 == 0) {
                            uVar7 = this_01->GetNumVerts();
                            uVar11 = this_01->GetNumOutlineVerts();
                            /* WARNING: Subroutine does not return */
                            LogAssert("!isEmptyChunk",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "osrendercore/Renderable.cpp",
                                      63,
                                      "Renderable outline may overflow vertex buffer. Model verts: %u, Outline verts: "
                                      "%u, Max: %u",
                                      (ulong)uVar7, (ulong)uVar11, (ulong)in_stack_00000008);
                        }
                        goto LAB_1001c49d0;
                    }
                    local_98._8_4_ = this_01->RenderOutline(uVar11, local_48, *(int*)(param_4 + 32), uVar1,
                                                            *(ushort*)(param_1 + 62));
                    uVar11 = local_98._8_4_ + uVar11;
                }
                if (param_1[66] != (TriangleVertexData)0) {
                    local_98[0] = '\x04' - (param_1[61] == (TriangleVertexData)0);
                    if (in_stack_00000008 < uVar11 + 6) {
                        if (uVar7 == 0) {
                            uVar7 = this_01->GetNumVerts();
                            if (*(short*)(param_1 + 64) == 0) {
                                uVar10 = 0;
                            } else {
                                uVar11 = this_01->GetNumOutlineVerts();
                                uVar10 = (ulong)uVar11;
                            }
                            /* WARNING: Subroutine does not return */
                            LogAssert("!isEmptyChunk",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "osrendercore/Renderable.cpp",
                                      79,
                                      "Renderable tint may overflow vertex buffer. Model verts: u%, Outline verts: %u, "
                                      "Tint verts: 6, Max: u%",
                                      (ulong)uVar7, uVar10, (ulong)in_stack_00000008);
                        }
                        goto LAB_1001c49d0;
                    }
                    this_01->Render2DAABB(uVar11, local_48, *(int*)(param_4 + 32), (uchar)param_1[66],
                                          *(ushort*)(param_1 + 62));
                    local_98._12_4_ = 6;
                }
            }
            cVar5 = this_01->IsTemporary();
            this = (ModelRenderable*)(RenderableOutput*)this;
            if (cVar5 != '\0') {
                local_98._56_8_->erase(param_1);
            }
        }
        new (this) RenderableOutput(local_98);
        return (RenderableOutput*)this;
    }

    // 0x1001c4d50, 160 bytes, placed by debug map only (low confidence)
    // TriangleRenderable::Render(TriangleVertexData*, unsigned int, RenderState&, eastl::fixed_hash_map<int, Model, 32768ul, 32769ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, unsigned int) const
    TriangleRenderable* TriangleRenderable::Render(TriangleVertexData* param_1, uint param_2, RenderState* param_3,
                                                   fixed_hash_map* param_4, uint param_5) {
        undefined4* puVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        undefined4 uVar8;
        undefined4 uVar9;
        undefined4 uVar10;
        undefined4 uVar11;
        undefined4 uVar12;
        undefined4* puVar13;
        undefined4 in_register_00000014;
        long lVar14;
        long lVar15;
        uint in_stack_00000008;
        undefined1 local_58[48];
        int local_28;
        int local_24;

        lVar14 = CONCAT44(in_register_00000014, param_2);
        if (in_stack_00000008 < (int)param_3 + 3U) {
            new (this) RenderableOutput(1, 0);
        } else {
            lVar15 = ((ulong)param_3 & 4294967295) * 16;
            puVar13 = (undefined4*)std::array<TriangleVertexData, 3ul>::operator[](
                (array<TriangleVertexData, 3ul>*)param_1, 0);
            uVar2 = puVar13[1];
            uVar3 = puVar13[2];
            uVar4 = puVar13[3];
            uVar5 = puVar13[4];
            uVar6 = puVar13[5];
            uVar7 = puVar13[6];
            uVar8 = puVar13[7];
            uVar9 = puVar13[8];
            uVar10 = puVar13[9];
            uVar11 = puVar13[10];
            uVar12 = puVar13[11];
            puVar1 = (undefined4*)(lVar14 + lVar15);
            *puVar1 = *puVar13;
            puVar1[1] = uVar2;
            puVar1[2] = uVar3;
            puVar1[3] = uVar4;
            puVar1 = (undefined4*)(lVar14 + 16 + lVar15);
            *puVar1 = uVar5;
            puVar1[1] = uVar6;
            puVar1[2] = uVar7;
            puVar1[3] = uVar8;
            puVar1 = (undefined4*)(lVar14 + 32 + lVar15);
            *puVar1 = uVar9;
            puVar1[1] = uVar10;
            puVar1[2] = uVar11;
            puVar1[3] = uVar12;
            new (local_58) RenderableOutput(2, 3);
            local_24 = 0;
            new (&local_24) callstack::Callstack();
            local_28 = local_24;
            new (this) RenderableOutput(local_58);
        }
        return this;
    }

} // namespace jag

namespace jag::oldscape::rseven {
    // 0x100f373b0, 16 bytes, __data
    MapRebuildHandler_LogicThread::m_blendTerrain = {1, 0, 0, 0};

    // 0x1001c56f0, 256 bytes, placed by debug map only (low confidence)
    // CalculatePointNormal(std::array<int, 3ul>&, int, int, int, dash3d::world const&)
    /* CalculatePointNormal(std::array<int, 3ul>&, int, int, int,
   dash3d::world const&) */

    void CalculatePointNormal(array* param_1, int param_2, int param_3, int param_4, world* param_5) {
        int iVar1;
        int iVar2;
        int iVar3;
        int* piVar4;
        undefined4* puVar5;
        double dVar6;

        iVar1 = param_5->GetGroundHeight(param_2, param_3 + 1, param_4);
        iVar2 = param_5->GetGroundHeight(param_2, param_3 + -1, param_4);
        iVar1 = iVar1 - iVar2;
        iVar2 = param_5->GetGroundHeight(param_2, param_3, param_4 + 1);
        iVar3 = param_5->GetGroundHeight(param_2, param_3, param_4 + -1);
        iVar2 = iVar2 - iVar3;
        dVar6 = (double)sqrt<int>(iVar1 * iVar1 + iVar2 * iVar2 + 65536);
        iVar3 = (int)dVar6;
        piVar4 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)param_1, 0);
        *piVar4 = (iVar1 * 256) / iVar3;
        puVar5 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)param_1, 1);
        *puVar5 = (int)(65536 / (long)iVar3);
        piVar4 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)param_1, 2);
        *piVar4 = (iVar2 * 256) / iVar3;
    }

    // 0x1001c5860, 320 bytes, placed by debug map only (low confidence)
    // InterpolateNormal(std::array<int, 3ul>&, bool, int, TerrainVertex const&, TerrainVertex const&)
    /* InterpolateNormal(std::array<int, 3ul>&, bool, int,
   TerrainVertex const&, TerrainVertex const&) */

    void InterpolateNormal(array* param_1, bool param_2, int param_3, TerrainVertex* param_4, TerrainVertex* param_5) {
        TerrainVertex* pTVar1;
        int* piVar2;
        int iVar3;
        undefined8* this;
        undefined7 in_register_00000031;
        int iVar4;
        int iVar5;
        int iVar6;
        undefined8* this_00;
        double dVar7;

        pTVar1 = (TerrainVertex*)&param_4->field_8;
        if ((int)CONCAT71(in_register_00000031, param_2) == 0) {
            pTVar1 = param_4;
        }
        if (pTVar1->field_0 == param_3) {
            *(undefined4*)(param_1 + 8) = param_4->field_20;
            *(undefined8*)param_1 = param_4->field_12;
        } else {
            pTVar1 = (TerrainVertex*)&param_5->field_8;
            if (!param_2) {
                pTVar1 = param_5;
            }
            if (pTVar1->field_0 == param_3) {
                *(undefined4*)(param_1 + 8) = param_5->field_20;
                *(undefined8*)param_1 = param_5->field_12;
            } else {
                this = &param_4->field_12;
                piVar2 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)this, 0);
                iVar4 = *piVar2;
                this_00 = &param_5->field_12;
                piVar2 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)this_00, 0);
                iVar4 = iVar4 + *piVar2;
                piVar2 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)this, 1);
                iVar5 = *piVar2;
                piVar2 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)this_00, 1);
                iVar5 = iVar5 + *piVar2;
                piVar2 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)this, 2);
                iVar3 = *piVar2;
                piVar2 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)this_00, 2);
                iVar3 = iVar3 + *piVar2;
                dVar7 = (double)sqrt<int>(iVar3 * iVar3 + iVar5 * iVar5 + iVar4 * iVar4);
                iVar6 = (int)dVar7;
                piVar2 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)param_1, 0);
                *piVar2 = (iVar4 * 256) / iVar6;
                piVar2 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)param_1, 1);
                *piVar2 = (iVar5 * 256) / iVar6;
                piVar2 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)param_1, 2);
                *piVar2 = (iVar3 * 256) / iVar6;
            }
        }
    }

    // 0x1001c59b0, 16 bytes, placed by debug map only (low confidence)
    // MapRebuildHandler_LogicThread::SetBlendTerrain(bool)
    void MapRebuildHandler_LogicThread::SetBlendTerrain(bool param_1) {
        m_blendTerrain = param_1;
    }

    // 0x1001c59c0, 352 bytes, placed by debug map only (low confidence)
    // MapRebuildHandler_LogicThread::RebuildTerrain(dash3d::world const&, rs2lib::CoordGrid const&, MapRebuildResults&)
    void MapRebuildHandler_LogicThread::RebuildTerrain(world* param_1, CoordGrid* param_2, MapRebuildResults* param_3) {
        int iVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        uint uVar6;
        MapRebuildSquare* pMVar7;
        ulong uVar8;
        uint uVar9;
        CoordGrid local_70;
        MapRebuildResults* local_60;
        hash_set* local_58;
        ulong local_48;
        undefined8 local_40;
        uint local_38;
        int local_34;

        iVar2 = param_2->GetX();
        iVar3 = param_2->GetZ();
        iVar4 = param_2->GetPos();
        new (&local_70) rs2lib::CoordGrid(iVar2, iVar3 + 104, iVar4 + 104);
        uVar5 = param_2->GetMapSquareX();
        uVar6 = local_70.GetMapSquareX();
        iVar2 = param_2->GetMapSquareZ();
        local_40 = local_70.GetMapSquareZ();
        param_3->resize((long)(int)(((uVar6 - uVar5) + 1) * (((int)local_40 - iVar2) + 1)));
        if ((int)uVar5 <= (int)uVar6) {
            local_58 = (hash_set*)&param_3->field_48;
            iVar3 = (int)local_40;
            uVar8 = 0;
            local_60 = param_3;
            local_38 = uVar6;
            local_34 = iVar2;
            do {
                local_48 = (ulong)uVar5;
                uVar9 = uVar5;
                if (iVar2 <= (int)local_40) {
                    uVar8 = (ulong)(int)uVar8;
                    do {
                        pMVar7 = (MapRebuildSquare*)eastl::vector<MapRebuildSquare, eastl::allocator>::operator[](
                            (vector<MapRebuildSquare, eastl::allocator>*)local_60, uVar8);
                        uVar8 = uVar8 + 1;
                        uVar6 = param_2->m_x;
                        *(uint*)(pMVar7->field_80 + 0) = param_2->m_level;
                        *(uint*)(pMVar7->field_80 + 4) = uVar6;
                        *(uint*)(pMVar7->field_80 + 8) = param_2->m_z;
                        *(int*)(pMVar7->field_80 + 12) = (int)local_48;
                        *(int*)&pMVar7->field_96 = iVar2;
                        RebuildSquare(param_1, pMVar7, local_58);
                        iVar2 = iVar2 + 1;
                    } while (iVar3 + 1 != iVar2);
                    uVar9 = (uint)local_48;
                    iVar2 = local_34;
                    uVar6 = local_38;
                }
                uVar5 = uVar9 + 1;
            } while (uVar9 != uVar6);
        }
    }

    // 0x1001c5bd0, 1088 bytes, placed by debug map only (low confidence)
    // MapRebuildHandler_LogicThread::RebuildSquare(dash3d::world const&, MapRebuildSquare&, eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&)
    void MapRebuildHandler_LogicThread::RebuildSquare(world* param_1, MapRebuildSquare* param_2, hash_set* param_3) {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        int* piVar4;
        shared_ptr<BuildTerrainResultLevel>* psVar5;
        vector<jag::graphics::TerrainPatchVertex, eastl::allocator>* pvVar6;
        long lVar7;
        undefined8* puVar8;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        Square* pSVar9;
        BuildTerrainResultLevel* pBVar10;
        vector<game::WorldMap::MapElementInstance, eastl::allocator>* this_00;
        ulong uVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        MakeSharedPool<BuildTerrainResultLevel, 64>* this_01;
        world* this_02;
        ulong uVar15;
        RenderChunk local_90;
        undefined4 local_74;
        int local_70;
        int local_6c;
        int local_68;
        int local_64;
        int local_60;
        int local_5c;
        ulong local_50;
        int local_48;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        iVar12 = *(int*)(param_2->field_80 + 12);
        local_3c = param_2->field_80->GetZ();
        local_3c = iVar12 * 64 - local_3c;
        local_38 = local_3c + 64;
        iVar12 = *(int*)&param_2->field_96;
        local_40 = param_2->field_80->GetPos();
        local_40 = iVar12 * 64 - local_40;
        local_34 = local_40 + 64;
        local_48 = local_3c * -128;
        local_50 = (ulong)(uint)(local_40 * -128);
        local_90.field_0._0_4_ = 0;
        piVar4 = std::max<int>(&local_3c, (int*)&local_90);
        local_3c = *piVar4;
        piVar4 = std::min<int>(
            &local_38,
            (int*)&RebuildSquare(
                dash3d::world_const&, MapRebuildSquare&,
                eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&)::BUILD_SIZE);
        local_38 = *piVar4;
        local_90.field_0._0_4_ = 0;
        piVar4 = std::max<int>(&local_40, (int*)&local_90);
        local_40 = *piVar4;
        this_01 = (MakeSharedPool<BuildTerrainResultLevel, 64>*)&RebuildSquare(
            dash3d::world_const&, MapRebuildSquare&,
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&)::BUILD_SIZE;
        piVar4 = std::min<int>(
            &local_34,
            (int*)&RebuildSquare(
                dash3d::world_const&, MapRebuildSquare&,
                eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&)::BUILD_SIZE);
        local_34 = *piVar4;
        uVar15 = 0;
        do {
            MakeSharedPool<BuildTerrainResultLevel, 64>::MakeShared<>((shared_ptr*)&local_90, this_01);
            psVar5 =
                (shared_ptr<BuildTerrainResultLevel>*)std::array<shared_ptr<BuildTerrainResultLevel>, 4ul>::operator[](
                    (array<shared_ptr<BuildTerrainResultLevel>, 4ul>*)param_2, uVar15);
            shared_ptr<BuildTerrainResultLevel>::operator=(psVar5, (shared_ptr*)&local_90);
            local_90.~shared_ptr();
            pvVar6 = (vector<jag::graphics::TerrainPatchVertex, eastl::allocator>*)
                         shared_ptr<BuildTerrainResultLevel>::operator->(psVar5);
            eastl::vector<jag::graphics::TerrainPatchVertex, eastl::allocator>::reserve(pvVar6, 256);
            lVar7 = shared_ptr<BuildTerrainResultLevel>::operator->(psVar5);
            ((lVar7 + 32))->reserve(256);
            lVar7 = shared_ptr<BuildTerrainResultLevel>::operator->(psVar5);
            ((lVar7 + 12560))->reserve(128);
            new (&local_90) jag::graphics::RenderChunk();
            local_90.field_0._0_4_ = 0;
            local_90.field_8._4_4_ = 0;
            local_90.field_16._0_4_ = 63;
            local_90._20_8_ = 270582939648;
            lVar7 = shared_ptr<BuildTerrainResultLevel>::operator->(psVar5);
            local_74 = 0;
            this_01 = (MakeSharedPool<BuildTerrainResultLevel, 64>*)&local_74;
            puVar8 = (undefined8*)eastl::hash_map<
                int, jag::graphics::RenderChunk, eastl::hash<int>, eastl::equal_to<int>,
                eastl::fixed_hashtable_allocator<258ul, 40ul, 256ul, 4ul, 0ul, true, eastl::allocator>, false>::
            operator[]((hash_map<int, jag::graphics::RenderChunk, eastl::hash<int>, eastl::equal_to<int>,
                                 eastl::fixed_hashtable_allocator<258ul, 40ul, 256ul, 4ul, 0ul, true, eastl::allocator>,
                                 false>*)(lVar7 + 64),
                       (int*)this_01);
            *puVar8 = CONCAT44(local_90.field_0._4_4_, (undefined4)local_90.field_0);
            puVar8[1] = CONCAT44(local_90.field_8._4_4_, (undefined4)local_90.field_8);
            *(ulong*)((long)puVar8 + 12) = CONCAT44((undefined4)local_90.field_16, local_90.field_8._4_4_);
            *(undefined8*)((long)puVar8 + 20) = local_90._20_8_;
            uVar15 = uVar15 + 1;
        } while (uVar15 != 4);
        uVar15 = local_50;
        this_02 = param_1;
        iVar12 = local_3c;
        if (local_3c < local_38) {
            do {
                local_44 = iVar12 + 1;
                if (local_40 < local_34) {
                    local_70 = iVar12 * 128 + local_48;
                    local_60 = local_44 * 128 + local_48;
                    iVar13 = local_40;
                    do {
                        local_68 = iVar13 * 128 + (int)uVar15;
                        local_5c = iVar13 + 1;
                        local_64 = local_5c * 128 + (int)uVar15;
                        iVar14 = 0;
                        do {
                            local_6c = iVar14;
                            this = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_02->GetSquare(
                                iVar14, iVar12, iVar13);
                            pSVar9 = (Square*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
                            iVar2 = local_60;
                            iVar1 = local_64;
                            iVar14 = local_68;
                            if (pSVar9 != (Square*)0) {
                                do {
                                    psVar5 = (shared_ptr<BuildTerrainResultLevel>*)
                                        std::array<shared_ptr<BuildTerrainResultLevel>, 4ul>::operator[](
                                            (array<shared_ptr<BuildTerrainResultLevel>, 4ul>*)param_2,
                                            (long)*(int*)&pSVar9->field_348);
                                    pBVar10 = (BuildTerrainResultLevel*)shared_ptr<BuildTerrainResultLevel>::operator*(
                                        psVar5);
                                    CollectGroundData(pSVar9, local_70, param_1, iVar12, iVar13, iVar14, iVar2, iVar1,
                                                      param_3, pBVar10, local_48, (int)local_50);
                                    pSVar9 = (Square*)(&pSVar9->field_376)->end();
                                } while (pSVar9 != (Square*)0);
                            }
                            iVar14 = local_6c + 1;
                            this_02 = param_1;
                        } while (iVar14 != 4);
                        uVar15 = local_50;
                        iVar13 = local_5c;
                    } while (local_5c < local_34);
                }
                iVar12 = local_44;
            } while (local_44 < local_38);
        }
        uVar15 = 0;
        do {
            psVar5 =
                (shared_ptr<BuildTerrainResultLevel>*)std::array<shared_ptr<BuildTerrainResultLevel>, 4ul>::operator[](
                    (array<shared_ptr<BuildTerrainResultLevel>, 4ul>*)param_2, uVar15);
            this_00 = (vector<game::WorldMap::MapElementInstance, eastl::allocator>*)
                          shared_ptr<BuildTerrainResultLevel>::operator->(psVar5);
            uVar11 = eastl::vector<game::WorldMap::MapElementInstance, eastl::allocator>::size(this_00);
            if (uVar11 < 256) {
                pvVar6 = (vector<jag::graphics::TerrainPatchVertex, eastl::allocator>*)
                             shared_ptr<BuildTerrainResultLevel>::operator->(psVar5);
                eastl::vector<jag::graphics::TerrainPatchVertex, eastl::allocator>::shrink_to_fit(pvVar6);
            }
            lVar7 = shared_ptr<BuildTerrainResultLevel>::operator->(psVar5);
            uVar11 = ((lVar7 + 32))->size();
            if (uVar11 < 256) {
                lVar7 = shared_ptr<BuildTerrainResultLevel>::operator->(psVar5);
                ((lVar7 + 32))->shrink_to_fit();
            }
            lVar7 = shared_ptr<BuildTerrainResultLevel>::operator->(psVar5);
            uVar11 = ((lVar7 + 12560))->size();
            if (uVar11 < 128) {
                lVar7 = shared_ptr<BuildTerrainResultLevel>::operator->(psVar5);
                ((lVar7 + 12560))->shrink_to_fit();
            }
            lVar7 = shared_ptr<BuildTerrainResultLevel>::operator->(psVar5);
            uVar3 = ((lVar7 + 12560))->size();
            lVar7 = shared_ptr<BuildTerrainResultLevel>::operator->(psVar5);
            local_90.field_0._0_4_ = 0;
            lVar7 =
                eastl::hash_map<int, jag::graphics::RenderChunk, eastl::hash<int>, eastl::equal_to<int>,
                                eastl::fixed_hashtable_allocator<258ul, 40ul, 256ul, 4ul, 0ul, true, eastl::allocator>,
                                false>::
                operator[](
                    (hash_map<int, jag::graphics::RenderChunk, eastl::hash<int>, eastl::equal_to<int>,
                              eastl::fixed_hashtable_allocator<258ul, 40ul, 256ul, 4ul, 0ul, true, eastl::allocator>,
                              false>*)(lVar7 + 64),
                    (int*)&local_90);
            *(undefined4*)(lVar7 + 8) = uVar3;
            uVar15 = uVar15 + 1;
        } while (uVar15 != 4);
    }

} // namespace jag::oldscape::rseven

namespace jag::osrsgraphics {
    // 0x1001c4df0, 48 bytes, placed by debug map only (low confidence)
    // GetResourceInline(ShaderResource)
    char* GetResourceInline(uint param_1) {
        if (param_1 < 11) {
            return (&PTR_Quad_fs_data_100ef7218)[(int)param_1];
        }
        return "ResourceNotFound";
    }

    // 0x1001c4e20, 48 bytes, placed by debug map only (low confidence)
    // GetResourcePath(ShaderResource)
    char* GetResourcePath(uint param_1) {
        if (param_1 < 11) {
            return (&PTR_s__Users_bamboo_bamboo_home_01_xml_100ef7270)[(int)param_1];
        }
        return "ResourceNotFound";
    }

} // namespace jag::osrsgraphics

namespace jag::osrsgraphics {
    namespace {
        // 0x1001c5330, 64 bytes, inline, placed by debug map only (low confidence)
        // char const* ConvertEncodedResourceFilename<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > >(std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> >&, char const*)
        /* char const* osrsgraphics::(anonymous
   namespace)::ConvertEncodedResourceFilename<std::basic_string<char, std::char_traits<char>,
   BucketAllocatorSTL<char> > >(std::basic_string<char, std::char_traits<char>,
   BucketAllocatorSTL<char> >&, char const*) */

        char*(anonymous namespace)::ConvertEncodedResourceFilename<
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(basic_string* param_1,
                                                                                       char* param_2) {
            bool bVar1;
            Base64* this;

            this = (Base64*)Base64::Instance();
            bVar1 = Base64::DecodeString<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(
                this, param_1, param_2);
            if (bVar1) {
                param_2 = (char*)param_1->data();
            }
            return param_2;
        }

    } // namespace

} // namespace jag::osrsgraphics
