// libs/oldscape/osrendercore/rseven/entities/Terrain.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.osrendercore

#include "Terrain.h"

namespace jag::oldscape::rseven {
    // 0x1001ccae0, 400 bytes, placed by class name and debug map
    // Terrain::RenderThread_Build(MapRebuildSquare const&)
    void Terrain::RenderThread_Build(MapRebuildSquare* param_1) {
        bool bVar1;
        shared_ptr* this_00;
        vector<game::WorldMap::MapElementInstance, eastl::allocator>* this_01;
        long lVar2;
        long lVar3;
        long lVar4;
        GraphNode* this_02;
        unique_ptr<jag::graphics::TerrainPatch, std::default_delete<jag::graphics::TerrainPatch>>* this_03;
        AABB local_a8;
        unique_ptr local_80[8];
        Matrix44T* local_78;
        float* local_70;
        vector* local_68;
        vector* local_60;
        Terrain* local_58;
        float* local_50;
        array<std::unique_ptr<jag::graphics::TerrainPatch, std::default_delete<jag::graphics::TerrainPatch>>, 4ul>*
            local_48;
        undefined4 local_3c;
        int local_38;
        float local_34;

        (*(code*)field_0[12])();
        local_50 = (float*)&field_196;
        local_48 =
            (array<std::unique_ptr<jag::graphics::TerrainPatch, std::default_delete<jag::graphics::TerrainPatch>>,
                   4ul>*)&field_144;
        local_34 = 0.0;
        local_58 = this;
        do {
            this_00 = (shared_ptr*)std::array<shared_ptr<BuildTerrainResultLevel>, 4ul>::operator[](
                (array<shared_ptr<BuildTerrainResultLevel>, 4ul>*)param_1, (long)(int)local_34);
            bVar1 = shared_ptr::operator_cast_to_bool(this_00);
            if (bVar1) {
                this_01 =
                    (vector<game::WorldMap::MapElementInstance, eastl::allocator>*)
                        shared_ptr<BuildTerrainResultLevel>::operator->((shared_ptr<BuildTerrainResultLevel>*)this_00);
                lVar2 = eastl::vector<game::WorldMap::MapElementInstance, eastl::allocator>::size(this_01);
                if (lVar2 != 0) {
                    new (&local_a8) jag::math::AABB();
                    lVar2 =
                        shared_ptr<BuildTerrainResultLevel>::operator->((shared_ptr<BuildTerrainResultLevel>*)this_00);
                    local_68 = (vector*)(lVar2 + 12528);
                    local_60 = (vector*)shared_ptr<BuildTerrainResultLevel>::operator->(
                        (shared_ptr<BuildTerrainResultLevel>*)this_00);
                    lVar2 =
                        shared_ptr<BuildTerrainResultLevel>::operator->((shared_ptr<BuildTerrainResultLevel>*)this_00);
                    local_3c = 128;
                    local_38 = -1;
                    lVar3 =
                        shared_ptr<BuildTerrainResultLevel>::operator->((shared_ptr<BuildTerrainResultLevel>*)this_00);
                    lVar4 =
                        shared_ptr<BuildTerrainResultLevel>::operator->((shared_ptr<BuildTerrainResultLevel>*)this_00);
                    this_02 = (GraphNode*)local_58->GetNode();
                    local_78 = (Matrix44T*)this_02->GetWorldTransformationMatrix();
                    local_70 = local_50;
                    std::make_unique<
                        jag::graphics::TerrainPatch, int&, jag::math::AABB&,
                        eastl::vector<jag::graphics::TerrainPatchVertex, eastl::allocator>&,
                        eastl::vector<jag::graphics::TerrainPatchVertexPos, eastl::allocator>&, int const&,
                        dash3d::world::_unnamed_type_1_, int, shared_ptr<jag::graphics::TextureAtlasReference>&,
                        eastl::fixed_hash_map<int, jag::graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                              eastl::equal_to<int>, false, eastl::allocator>&,
                        jag::math::Matrix44T<float> const*, float*>(
                        (int*)local_80, (AABB*)&local_34, local_68, local_60, (int*)(lVar2 + 32), (_unnamed*)&local_3c,
                        &local_38, (shared_ptr*)(lVar3 + 12592), (fixed_hash_map*)(lVar4 + 64), &local_78, &local_70);
                    this_03 =
                        (unique_ptr<jag::graphics::TerrainPatch, std::default_delete<jag::graphics::TerrainPatch>>*)
                            std::array<std::unique_ptr<jag::graphics::TerrainPatch,
                                                       std::default_delete<jag::graphics::TerrainPatch>>,
                                       4ul>::operator[](local_48, (long)(int)local_34);
                    std::unique_ptr<jag::graphics::TerrainPatch,
                                    std::default_delete<jag::graphics::TerrainPatch>>::operator=(this_03, local_80);
                    local_80->~unique_ptr();
                }
            }
            bVar1 = (int)local_34 < 3;
            local_34 = (float)((int)local_34 + 1);
        } while (bVar1);
    }

    // 0x1001d1930, 176 bytes, base-object constructor, placed by class name
    // Terrain::Terrain(jag::graphics::GraphNode*, int, int)
    void Terrain::Terrain(GraphNode* param_1, int param_2, int param_3) {
        new (this) Entity(param_1, 6);
        new (this) MakeSharedPool<Terrain, 32>();
        field_0 = &PTR__Terrain_100ef68f8;
        new (&field_32) jag::math::AABB();
        new (&field_64) jag::math::Matrix44T<float>();
        field_128 = param_2;
        field_132 = param_3;
        field_136 = 0;
        new (&field_144)
            std::array<std::unique_ptr<jag::graphics::TerrainPatch, std::default_delete<jag::graphics::TerrainPatch>>,
                       4ul>();
        new (field_176, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_192 = 0;
        field_196 = 0;
    }

    // 0x1001d1a60, 16 bytes, complete-object constructor, placed by class name
    // Terrain::Terrain(jag::graphics::GraphNode*, int, int): jumps straight to the base-object constructor

    // 0x1001d1a70, 64 bytes, base-object destructor, placed by class name
    // Terrain::~Terrain()
    void Terrain::~Terrain() {
        field_0 = &PTR__Terrain_100ef68f8;
        field_176->~shared_ptr();
        (&field_144)->~array();
        ~Entity();
    }

    // 0x1001d1ab0, 16 bytes, complete-object destructor, placed by class name
    // Terrain::~Terrain(): jumps straight to the base-object destructor

    // 0x1001d1ac0, 32 bytes, deleting destructor, placed by class name
    // Terrain::~Terrain()
    void Terrain::~Terrain() {
        ~Terrain(this);
        operator_delete(this);
    }

    // 0x1001d1ae0, 432 bytes, placed by class name
    // Terrain::GatherDrawableElements(jag::graphics::DrawableQueue&, jag::graphics::RT7Core&, jag::math::Matrix44T<float> const&, jag::graphics::SceneViewData const&, jag::graphics::EffectManager const&)
    void Terrain::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, Matrix44T* param_3,
                                         SceneViewData* param_4, EffectManager* param_5) {
        int iVar1;
        char cVar2;
        bool bVar3;
        long* plVar4;
        long lVar5;
        unique_ptr* this_00;
        TerrainPatch* this_01;
        int iVar6;
        ulong uVar7;
        fixed_vector<unsigned char, 256ul, true, eastl::allocator> local_160[296];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_136 == '\0') {
            jag::math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_64, param_3);
            plVar4 = (long*)OSRenderCore_RenderThread::Instance();
            lVar5 = (((long)plVar4 + *(long*)(*plVar4 + -24)))->GetRenderStateNXT();
            iVar1 = *(int*)(lVar5 + 28);
            cVar2 = param_4->HasShadowPass();
            iVar6 = 3;
            if (cVar2 == '\0') {
                iVar6 = iVar1;
            }
            if (-1 < iVar6) {
                uVar7 = 0;
                do {
                    this_00 = (unique_ptr*)std::array<
                        std::unique_ptr<jag::graphics::TerrainPatch, std::default_delete<jag::graphics::TerrainPatch>>,
                        4ul>::operator[]((array<std::unique_ptr<jag::graphics::TerrainPatch,
                                                                std::default_delete<jag::graphics::TerrainPatch>>,
                                                4ul>*)&field_144,
                                         uVar7);
                    bVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
                    if (bVar3) {
                        eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator>::fixed_vector(local_160);
                        this_01 = (TerrainPatch*)std::unique_ptr<jag::graphics::TerrainPatch,
                                                                 std::default_delete<jag::graphics::TerrainPatch>>::
                                  operator->((unique_ptr<jag::graphics::TerrainPatch,
                                                         std::default_delete<jag::graphics::TerrainPatch>>*)this_00);
                        this_01->GatherDrawableElements(param_1, param_2, param_4, param_5, local_160);
                        eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator>::~fixed_vector(local_160);
                    }
                    uVar7 = uVar7 + 1;
                } while (iVar6 + 1 != uVar7);
            }
            bVar3 = field_176->operator_cast_to_bool();
            if (bVar3) {
                plVar4 = (long*)shared_ptr<jag::graphics::WaterPatch>::operator->(
                    (shared_ptr<jag::graphics::WaterPatch>*)field_176);
                (**(code**)(*plVar4 + 16))(plVar4, param_1, param_2, param_4, param_5);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1001d1e30, 96 bytes, placed by class name
    // Terrain::Destruct()
    void Terrain::Destruct() {
        unique_ptr<jag::graphics::TerrainPatch, std::default_delete<jag::graphics::TerrainPatch>>* this_00;
        unique_ptr<jag::graphics::TerrainPatch, std::default_delete<jag::graphics::TerrainPatch>>* puVar1;

        this_00 =
            (unique_ptr<jag::graphics::TerrainPatch, std::default_delete<jag::graphics::TerrainPatch>>*)(&field_144)
                ->begin();
        puVar1 =
            (unique_ptr<jag::graphics::TerrainPatch, std::default_delete<jag::graphics::TerrainPatch>>*)(&field_144)
                ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            std::unique_ptr<jag::graphics::TerrainPatch, std::default_delete<jag::graphics::TerrainPatch>>::reset(
                this_00, (TerrainPatch*)0);
        }
        field_192 = 0;
    }

} // namespace jag::oldscape::rseven
