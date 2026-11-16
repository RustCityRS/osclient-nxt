// libs/game/runetek5/scene/entities/components/route/EntityRoute.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "EntityRoute.h"
#include "libs/game/runetek5/scene/Entity.h"

namespace jag {
    // 0x1001c2200: EntityRoute::HasWalkSmoothing() has the same machine code as oldscape::MutationTracked<graphics::SimpleScatteringParams>::IsDirty() const

    // 0x1003e8000
    EntityRoute::EntityRoute(bool arg1) : field_8(20), m_hasWalkSmoothing(arg1), m_stalledTickCount(0) {}

    // 0x1003e8070
    void EntityRoute::RemoveFirstWaypoint() {
        ring_buffer_iterator<EntityWaypoint, EntityWaypoint const*, EntityWaypoint const&,
                             eastl::vector<EntityWaypoint> _>* local_d0[2];

        auto pLVar2 = logger::default_logger();
        LogStream local_c0(LOGGER_ROUTE);
        uint8_t* this_00 = field_8;
        Layout* this_01 = (Layout*)(*this_00)[0];
        uint64_t uVar3 = ((CoordFine*)this_01->SSOBeginPtr())->ToString();
        ((uint8_t)pLVar2)->Log(nullptr, (LogLevel)&local_c0, 5, 14421183, 19, "Waypoint removed: %s", uVar3);
        auto local_f0 = this_00->end();
        new (local_d0) eastl::ring_buffer_iterator(local_f0);
        auto local_e0 = this_00->erase(local_d0[0]);
        if ((&field_80)->operator_cast_to_bool() != '\0') {
            std::function<void()>::operator()((function<void()>*)&field_80);
        }
    }

    // 0x1003e8410
    void EntityRoute::SkipToEnd() {
        EntityWaypoint* entityWaypoint1;
        EntityWaypoint* entityWaypoint2;

        uint8_t* this_00 = field_8;
        if (this_00->GetAuthWrapper() != 0) {
            entityWaypoint1 = (EntityWaypoint*)(*this_00)[0];
            entityWaypoint2 = (EntityWaypoint*)this_00->back();
            eastl::swap<EntityWaypoint>(*entityWaypoint1, *entityWaypoint2);
            this_00->resize(1);
        }
    }

    // 0x1003e8630
    void EntityRoute::UpdateEntitySize(int arg1, int arg2) {
        bool bVar1;
        NXTPixToolkit* this_00;
        uint64_t* puVar3;
        float* pfVar4;
        EntityWaypoint* this_01;
        unsigned long uVar5;
        unsigned long uVar6;
        EntityWaypoint local_60;
        uint8_t local_48[20];
        float local_34;

        uint8_t* this_02 = field_8;
        if (this_02->GetAuthWrapper() != 0) {
            local_34 = (float)((arg2 - arg1) * 128) * 0.5;
            uVar5 = 0;
            uVar6 = 1;
            do {
                this_00 = (NXTPixToolkit*)(*this_02)[uVar5];
                puVar3 = (uint64_t*)this_00->SSOBeginPtr();
                local_48._0_8_ = *puVar3;
                local_48._8_8_ = puVar3[1];
                pfVar4 = (float*)((local_48 + 4))->SSOBeginPtr();
                *pfVar4 = *pfVar4 + local_34;
                pfVar4 = (float*)((local_48 + 4))->second();
                *pfVar4 = *pfVar4 + local_34;
                puVar3 = (uint64_t*)this_00->GetScreen();
                local_60 = EntityWaypoint(*local_48, *puVar3);
                this_01 = (EntityWaypoint*)(*this_02)[uVar5];
                *this_01 = local_60;
                uVar5 = this_02->GetAuthWrapper();
                bVar1 = uVar6 < uVar5;
                uVar5 = uVar6;
                uVar6 = (unsigned long)((int)uVar6 + 1);
            } while (bVar1);
        }
    }

    // 0x1003e8730: EntityWaypoint::operator=(EntityWaypoint const&) has the same machine code as EntityWaypoint::operator=(EntityWaypoint&&)

    // 0x1003e8760
    unsigned long EntityRoute::IsWaypointTooFar(const math::Vector3T<float>& vector3, int arg2,
                                                const EntityWaypoint& entityWaypoint) const {
        float* pfVar2;
        unsigned int uVar3;
        uint64_t unaff_R14;
        uint64_t local_38[2];

        int iVar1 = entityWaypoint.GetX();
        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (iVar1 == arg2) {
            local_38[0] = (*((Vector3T<float>*)entityWaypoint.y())) - vector3;
            pfVar2 = (float*)(*local_38)[0];
            uVar3 = -(int)*pfVar2;
            if ((int)uVar3 < 0) {
                uVar3 = (int)*pfVar2;
            }
            if (uVar3 < 257) {
                pfVar2 = (float*)(*local_38)[2];
                uVar3 = -(int)*pfVar2;
                if ((int)uVar3 < 0) {
                    uVar3 = (int)*pfVar2;
                }
                if (uVar3 < 257) {
                    uVar4 = 0;
                }
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x1003e8800
    void EntityRoute::PushWaypoint(EntityWaypoint&& entityWaypoint) {
        if (field_8->full() != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/components/route/EntityRoute.cpp",
                      68, "Entity route is too long! Has the entity got stuck?");
        }
        eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint>>::push_back(*field_8);
    }

    // 0x1003e8920
    void EntityRoute::RenderDebug(const game::CoordFine& coordFine, const game::HeightMap& heightMap,
                                  const game::LinkMap& linkMap, unsigned int arg4) {
        Vector2T<int>* this_00;
        uint64_t* puVar3;
        long* plVar4;
        uint32_t uVar5;
        uint32_t uVar6;
        ColourHSL local_b8;
        ColourHSL local_a8;
        uint64_t local_78;
        uint8_t local_68[8];
        uint64_t local_60;
        uint32_t local_58;
        uint64_t local_50;
        uint32_t local_48;
        uint64_t local_40;
        uint32_t local_38;

        new (local_68) oldscape::sidebars::SideBarData(arg4, 1);
        float local_70 = coordFine.field_12;
        local_78._0_4_ = coordFine.field_4;
        local_78._4_4_ = coordFine.field_8;
        int iVar2 = game::Entity::GetFloorHeightAtCoord(coordFine, heightMap, linkMap, true, 0);
        local_78 = (((uint64_t)((float)iVar2) << 32) | (uint32_t)((uint32_t)local_78));
        auto local_98 = field_8->end();
        auto local_c8 = field_8->end();
        bool bVar1 = local_98 != local_c8;
        if (bVar1) {
            do {
                this_00 = (Vector2T<int>*)local_98.end();
                puVar3 = (uint64_t*)this_00->y();
                local_40 = *puVar3;
                local_38 = *(uint32_t*)(puVar3 + 1);
                iVar2 = game::Entity::GetFloorHeightAtCoord(*((CoordFine*)this_00->SSOBeginPtr()), heightMap, linkMap,
                                                            true, 0);
                local_40 = (((uint64_t)((float)iVar2) << 32) | (uint32_t)((uint32_t)local_40));
                plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar4 != nullptr) {
                    uVar5 = 0;
                    local_b8 = math::ColourHSL(-32.0, 0.0, -32.0);
                    local_60 = local_40 + local_b8;
                    uVar6 = 0;
                    local_58 = uVar5;
                    local_a8 = math::ColourHSL(32.0, 0.0, 32.0);
                    local_50 = local_40 + local_a8;
                    local_48 = uVar6;
                    (**(void (**)(...))(*plVar4 + 24))(plVar4, &local_60, &local_50, local_68);
                }
                plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar4 != nullptr) {
                    uVar5 = 0;
                    local_b8 = math::ColourHSL(32.0, 0.0, -32.0);
                    local_60 = local_40 + local_b8;
                    uVar6 = 0;
                    local_58 = uVar5;
                    local_a8 = math::ColourHSL(-32.0, 0.0, 32.0);
                    local_50 = local_40 + local_a8;
                    local_48 = uVar6;
                    (**(void (**)(...))(*plVar4 + 24))(plVar4, &local_60, &local_50, local_68);
                }
                plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar4 != nullptr) {
                    (**(void (**)(...))(*plVar4 + 24))(plVar4, (Vector4T<float>*)&local_78, (Vector3T<float>*)&local_40,
                                                       local_68);
                }
                local_78.SetXYZ(local_40);
                ++local_98;
                bVar1 = local_98 != local_c8;
            } while (bVar1);
        }
    }

    // 0x100c92b50: EntityRoute::~EntityRoute() has the same machine code as InlineFatalBreak()

} // namespace jag
