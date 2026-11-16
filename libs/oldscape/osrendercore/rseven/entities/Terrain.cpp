// libs/oldscape/osrendercore/rseven/entities/Terrain.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.osrendercore

#include "Terrain.h"

namespace jag::oldscape::rseven {
    // 0x1001ccae0
    void Terrain::RenderThread_Build(const MapRebuildSquare& mapRebuildSquare) {
        bool bVar1;
        shared_ptr* this_00;
        long lVar3;
        long lVar4;
        long lVar5;
        unique_ptr<jag::graphics::TerrainPatch>* this_03;
        AABB local_a8;
        unique_ptr<jag::graphics::TerrainPatch, std::default_delete<jag::graphics::TerrainPatch> _> local_80;
        Matrix44T<float>* local_78;
        float* local_70;
        vector<jag::graphics::TerrainPatchVertex>* local_68;
        vector<jag::graphics::TerrainPatchVertexPos>* local_60;
        uint32_t local_3c;
        int local_38;

        Destruct();
        float* local_50 = (float*)&field_196;
        array<std::unique_ptr<jag::graphics::TerrainPatch>, 4ul>* local_48 =
            (array<std::unique_ptr<jag::graphics::TerrainPatch>, 4ul>*)&field_144;
        float local_34 = 0.0;
        do {
            this_00 = &mapRebuildSquare[(long)(int)local_34];
            if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                lVar3 = ((vector<game::WorldMap::MapElementInstance>*)(*this_00).operator->())->size();
                if (lVar3 != 0) {
                    local_a8 = jag::math::AABB();
                    lVar3 = (*this_00).operator->();
                    local_68 = (vector<jag::graphics::TerrainPatchVertex>*)(lVar3 + 12528);
                    local_60 = (vector<jag::graphics::TerrainPatchVertexPos>*)(*this_00).operator->();
                    lVar3 = (*this_00).operator->();
                    local_3c = 128;
                    local_38 = -1;
                    lVar4 = (*this_00).operator->();
                    lVar5 = (*this_00).operator->();
                    local_78 = GetNode()->GetWorldTransformationMatrix();
                    local_70 = local_50;
                    std::make_unique<jag::graphics::TerrainPatch, int&, jag::math::AABB&,
                                     eastl::vector<jag::graphics::TerrainPatchVertex>&,
                                     eastl::vector<jag::graphics::TerrainPatchVertexPos>&, int const&,
                                     dash3d::world::_unnamed_type_1_, int,
                                     shared_ptr<jag::graphics::TextureAtlasReference>&,
                                     eastl::fixed_hash_map<int, jag::graphics::RenderChunk, 256ul, 257ul, true,
                                                           eastl::hash<int>, eastl::equal_to<int>, false>&,
                                     jag::math::Matrix44T<float> const*, float*>(
                        &local_80, (AABB*)&local_34, local_68, local_60, (int*)(lVar3 + 32),
                        (_unnamed_type_1_*)&local_3c, &local_38,
                        (shared_ptr<jag::graphics::TextureAtlasReference>*)(lVar4 + 12592),
                        (fixed_hash_map<int, jag::graphics::RenderChunk, _256ul, _257ul, true, eastl::hash<int>,
                                        eastl::equal_to<int>, false>*)(lVar5 + 64),
                        &local_78, &local_70);
                    this_03 = (unique_ptr<jag::graphics::TerrainPatch>*)(*local_48)[(long)(int)local_34];
                    *this_03 = local_80;
                }
            }
            bVar1 = (int)local_34 < 3;
            local_34 = (float)((int)local_34 + 1);
        } while (bVar1);
    }

    // 0x1001d1930
    Terrain::Terrain(jag::graphics::GraphNode* graphNode, int arg2, int arg3)
        : Entity(graphNode, 6), MakeSharedPool<Terrain, 32>(), field_128(arg2), field_132(arg3), field_136(0),
          field_192(0), field_196(0) {}

    // 0x1001d1a70
    Terrain::~Terrain() {
        field_176->~shared_ptr();
        field_144.~array();
    }

    // 0x1001d1ae0
    void Terrain::GatherDrawableElements(jag::graphics::DrawableQueue& drawableQueue, jag::graphics::RT7Core& rt7Core,
                                         const jag::math::Matrix44T<float>& matrix44,
                                         const jag::graphics::SceneViewData& sceneViewData,
                                         const jag::graphics::EffectManager& effectManager) {
        int iVar1;
        bool cVar2;
        OSRenderCore_RenderThread* pOVar3;
        long lVar4;
        unique_ptr* this_00;
        long* plVar5;
        int iVar6;
        unsigned long arg1;
        fixed_vector<unsigned char, 256ul> local_160;

        if (field_136 == '\0') {
            field_64 = matrix44;
            pOVar3 = OSRenderCore_RenderThread::Instance();
            lVar4 = ((OSRenderCore_RenderThread_Common*)(pOVar3->field_32 + (long)(pOVar3->_vptr[-3].GetUISize - 32)))
                        ->GetRenderStateNXT();
            iVar1 = *(int*)(lVar4 + 28);
            cVar2 = sceneViewData.HasShadowPass();
            iVar6 = 3;
            if (!cVar2) {
                iVar6 = iVar1;
            }
            if (-1 < iVar6) {
                arg1 = 0;
                do {
                    this_00 = &field_144[arg1];
                    cVar2 = std::unique_ptr::operator_cast_to_bool(this_00);
                    if (cVar2) {
                        local_160 = eastl::fixed_vector<unsigned char, 256ul>();
                        ((TerrainPatch*)(*this_00).operator->())
                            ->GatherDrawableElements(drawableQueue, rt7Core, sceneViewData, effectManager, local_160);
                    }
                    arg1 = arg1 + 1;
                } while (iVar6 + 1 != arg1);
            }
            cVar2 = field_176->operator_cast_to_bool();
            if (cVar2) {
                plVar5 = (long*)(*field_176).operator->();
                (**(void (**)(...))(*plVar5 + 16))(plVar5, drawableQueue, rt7Core, sceneViewData, effectManager);
            }
        }
    }

    // 0x1001d1e30
    void Terrain::Destruct() {
        unique_ptr<jag::graphics::TerrainPatch>* this_00 = (unique_ptr<jag::graphics::TerrainPatch>*)
            std::array<std::unique_ptr<jag::graphics::TerrainPatch>, 4ul>::begin();
        unique_ptr<jag::graphics::TerrainPatch>* puVar1 = (unique_ptr<jag::graphics::TerrainPatch>*)
            std::array<std::unique_ptr<jag::graphics::TerrainPatch>, 4ul>::end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_00->reset(nullptr);
        }
        field_192 = 0;
    }

} // namespace jag::oldscape::rseven
