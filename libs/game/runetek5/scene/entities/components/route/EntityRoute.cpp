// libs/game/runetek5/scene/entities/components/route/EntityRoute.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "EntityRoute.h"
#include "libs/game/runetek5/scene/Entity.h"

namespace jag {
    // 0x1001c2200: the linker folded this into oldscape::MutationTracked<graphics::SimpleScatteringParams>::IsDirty() const, which has identical code
    bool EntityRoute::HasWalkSmoothing();

    // 0x1003e8000, 80 bytes, base-object constructor, placed by class name
    // EntityRoute::EntityRoute(bool)
    void EntityRoute::EntityRoute(bool param_1) {
        field_0 = &PTR__OptionStore_100efe7d8;
        new (&field_8, 20)
            eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>();
        m_hasWalkSmoothing = param_1;
        m_stalledTickCount = 0;
        std::function<void()>::function((function<void()>*)&field_80);
    }

    // 0x1003e8070, 304 bytes, placed by class name
    // EntityRoute::RemoveFirstWaypoint()
    void EntityRoute::RemoveFirstWaypoint() {
        undefined8 uVar2;
        Layout* this_00;
        CoordFine* this_01;
        undefined8 uVar3;
        ring_buffer_iterator local_f0[16];
        undefined1 local_e0[16];
        undefined8 local_d0;
        undefined8 local_c8;
        LogStream local_c0;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar2 = logger::default_logger();
        new (&local_c0) logger::LogStream((LogStream*)&LOGGER_ROUTE);
        this_00 = (Layout*)eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>,
                                              eastl::allocator>::
        operator[](
            (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)&field_8,
            0);
        this_01 = (CoordFine*)eastl::string::Layout::SSOBeginPtr(this_00, (type*)0);
        uVar3 = this_01->ToString();
        logger::Logger::Log(uVar2, 0, &local_c0, 5,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                            "entities/components/route/EntityRoute.cpp",
                            19, "Waypoint removed: %s", uVar3);
        local_c0.~LogStream();
        eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, BucketAllocatorEASTL>,
                           BucketAllocatorEASTL>::end();
        new (&local_d0) eastl::ring_buffer_iterator<EntityWaypoint, EntityWaypoint*, EntityWaypoint&,
                                                    eastl::vector<EntityWaypoint, eastl::allocator>>(local_f0);
        eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::erase(
            local_e0, &field_8, local_d0, local_c8);
        if ((&field_80)->operator_cast_to_bool()) {
            std::function<void()>::operator()((function<void()>*)&field_80);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003e8410, 80 bytes, placed by class name
    // EntityRoute::SkipToEnd()
    void EntityRoute::SkipToEnd() {
        EntityWaypoint* pEVar2;
        EntityWaypoint* pEVar3;
        undefined1* this_00;

        this_00 = &field_8;
        if (this_00->GetAuthWrapper() != 0) {
            pEVar2 = (EntityWaypoint*)
                eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                        this_00,
                    0);
            pEVar3 =
                (EntityWaypoint*)eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>,
                                                    eastl::allocator>::back();
            eastl::swap<EntityWaypoint>(pEVar2, pEVar3);
            this_00->resize(1);
        }
    }

    // 0x1003e8630, 256 bytes, placed by class name
    // EntityRoute::UpdateEntitySize(int, int)
    void EntityRoute::UpdateEntitySize(int param_1, int param_2) {
        bool bVar1;
        NXTPixToolkit* this_00;
        vector* pvVar3;
        float* pfVar4;
        undefined8* puVar5;
        EntityWaypoint* this_01;
        type* ptVar6;
        type* ptVar7;
        undefined1* this_02;
        type* ptVar8;
        EntityWaypoint local_60;
        undefined1 local_48[20];
        float local_34;

        this_02 = &field_8;
        if (this_02->GetAuthWrapper() != 0) {
            local_34 = (float)((param_2 - param_1) * 128) * 0.5;
            ptVar6 = (type*)0;
            ptVar8 = (type*)&DAT_00000001;
            do {
                ptVar7 = ptVar6;
                this_00 = (NXTPixToolkit*)eastl::ring_buffer<
                    EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                        this_02,
                    (ulong)ptVar6);
                pvVar3 = this_00->SSOBeginPtr(ptVar7);
                local_48._0_8_ = *(undefined8*)pvVar3;
                local_48._8_8_ = *(undefined8*)(pvVar3 + 8);
                pvVar3 = ((local_48 + 4))->SSOBeginPtr(ptVar7);
                *(float*)pvVar3 = *(float*)pvVar3 + local_34;
                pfVar4 = (float*)((local_48 + 4))->second();
                *pfVar4 = *pfVar4 + local_34;
                puVar5 = (undefined8*)this_00->GetScreen();
                new (&local_60) EntityWaypoint(local_48, (MoveSpeed*)*puVar5);
                this_01 = (EntityWaypoint*)eastl::ring_buffer<
                    EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                        this_02,
                    (ulong)ptVar6);
                EntityWaypoint::operator=(this_01, &local_60);
                ptVar6 = (type*)this_02->GetAuthWrapper();
                bVar1 = ptVar8 < ptVar6;
                ptVar6 = ptVar8;
                ptVar8 = (type*)(ulong)((int)ptVar8 + 1);
            } while (bVar1);
        }
    }

    // 0x1003e8730: the linker folded this into EntityWaypoint::operator=(EntityWaypoint&&), which has identical code
    EntityWaypoint::operator=(EntityWaypoint const&);

    // 0x1003e8760, 160 bytes, placed by class name
    // EntityRoute::IsWaypointTooFar(math::Vector3T<float> const&, int, EntityWaypoint const&) const
    ulong EntityRoute::IsWaypointTooFar(Vector3T* param_1, int param_2, EntityWaypoint* param_3) {
        int iVar1;
        Vector3T* pVVar2;
        float* pfVar3;
        uint uVar4;
        CoordMapSquare* in_RCX;
        undefined4 in_register_00000034;
        undefined8 unaff_R14;
        ulong uVar5;
        undefined8 local_38[2];

        iVar1 = in_RCX->GetX();
        uVar5 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (iVar1 == (int)param_3) {
            pVVar2 = (Vector3T*)in_RCX->y();
            local_38[0] = math::operator-(pVVar2, (Vector3T*)CONCAT44(in_register_00000034, param_2));
            pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_38, 0);
            uVar4 = -(int)*pfVar3;
            if ((int)uVar4 < 0) {
                uVar4 = (int)*pfVar3;
            }
            if (uVar4 < 257) {
                pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_38, 2);
                uVar4 = -(int)*pfVar3;
                if ((int)uVar4 < 0) {
                    uVar4 = (int)*pfVar3;
                }
                if (uVar4 < 257) {
                    uVar5 = 0;
                }
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x1003e8800, 96 bytes, placed by class name
    // EntityRoute::PushWaypoint(EntityWaypoint&&)
    void EntityRoute::PushWaypoint(EntityWaypoint* param_1) {
        char cVar1;
        undefined8 uVar2;

        cVar1 = (&field_8)->full();
        if (cVar1 != '\0') {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/entities/components/route/EntityRoute.cpp",
                                68, "Entity route is too long! Has the entity got stuck?");
        }
        (&field_8, param_1)->push_back();
    }

    // 0x1003e8920, 688 bytes, placed by class name
    // EntityRoute::RenderDebug(game::CoordFine const&, game::HeightMap const&, game::LinkMap const&, unsigned int)
    void EntityRoute::RenderDebug(CoordFine* param_1, HeightMap* param_2, LinkMap* param_3, uint param_4) {
        bool bVar1;
        int iVar2;
        Vector2T<int>* this_00;
        undefined8* puVar3;
        vector* pvVar4;
        long* plVar5;
        type* ptVar6;
        undefined4 uVar7;
        undefined4 uVar8;
        type local_c8[16];
        ColourHSL local_b8;
        ColourHSL local_a8;
        ring_buffer_iterator<EntityWaypoint, EntityWaypoint*, EntityWaypoint&,
                             eastl::vector<EntityWaypoint, BucketAllocatorEASTL>>
            local_98[16];
        LinkMap* local_88;
        HeightMap* local_80;
        undefined8 local_78;
        float local_70;
        undefined1 local_68[8];
        undefined8 local_60;
        undefined4 local_58;
        undefined8 local_50;
        undefined4 local_48;
        undefined8 local_40;
        undefined4 local_38;

        new (local_68) oldscape::sidebars::SideBarData(param_4, 1);
        local_70 = param_1->field_12;
        local_78._0_4_ = param_1->field_4;
        local_78._4_4_ = param_1->field_8;
        local_88 = param_3;
        local_80 = param_2;
        iVar2 = game::Entity::GetFloorHeightAtCoord(param_1, param_2, param_3, 1, 0);
        local_78 = CONCAT44((float)iVar2, (undefined4)local_78);
        eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, BucketAllocatorEASTL>,
                           BucketAllocatorEASTL>::end();
        ptVar6 = local_c8;
        eastl::ring_buffer<ui::SwipeDelta, eastl::vector<ui::SwipeDelta, eastl::allocator>, eastl::allocator>::end();
        bVar1 = eastl::operator!=(local_98, ptVar6);
        if (bVar1) {
            do {
                this_00 = (Vector2T<int>*)local_98->end();
                puVar3 = (undefined8*)this_00->y();
                local_40 = *puVar3;
                local_38 = *(undefined4*)(puVar3 + 1);
                pvVar4 = this_00->SSOBeginPtr(ptVar6);
                iVar2 = game::Entity::GetFloorHeightAtCoord(pvVar4, local_80, local_88, 1, 0);
                local_40 = CONCAT44((float)iVar2, (undefined4)local_40);
                plVar5 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar5 != (long*)0) {
                    uVar7 = 0;
                    new (&local_b8) math::ColourHSL(-32.0, 0.0, -32.0);
                    local_60 = math::operator+((Vector3T*)&local_40, (Vector3T*)&local_b8);
                    uVar8 = 0;
                    local_58 = uVar7;
                    new (&local_a8) math::ColourHSL(32.0, 0.0, 32.0);
                    local_50 = math::operator+((Vector3T*)&local_40, (Vector3T*)&local_a8);
                    local_48 = uVar8;
                    (**(code**)(*plVar5 + 24))(plVar5, &local_60, &local_50, local_68);
                }
                plVar5 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar5 != (long*)0) {
                    uVar7 = 0;
                    new (&local_b8) math::ColourHSL(32.0, 0.0, -32.0);
                    local_60 = math::operator+((Vector3T*)&local_40, (Vector3T*)&local_b8);
                    uVar8 = 0;
                    local_58 = uVar7;
                    new (&local_a8) math::ColourHSL(-32.0, 0.0, 32.0);
                    local_50 = math::operator+((Vector3T*)&local_40, (Vector3T*)&local_a8);
                    local_48 = uVar8;
                    (**(code**)(*plVar5 + 24))(plVar5, &local_60, &local_50, local_68);
                }
                plVar5 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar5 != (long*)0) {
                    (**(code**)(*plVar5 + 24))(plVar5, (Vector4T<float>*)&local_78, (Vector3T*)&local_40, local_68);
                }
                local_78.SetXYZ((Vector3T*)&local_40);
                eastl::ring_buffer_iterator<EntityWaypoint, EntityWaypoint*, EntityWaypoint&,
                                            eastl::vector<EntityWaypoint, BucketAllocatorEASTL>>::operator++(local_98);
                ptVar6 = local_c8;
                bVar1 = eastl::operator!=(local_98, ptVar6);
            } while (bVar1);
        }
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    EntityRoute::~EntityRoute();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    EntityRoute::~EntityRoute();

} // namespace jag
