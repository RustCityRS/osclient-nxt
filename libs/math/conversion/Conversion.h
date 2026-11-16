// libs/math/conversion/Conversion.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math::conversion {
    // 0x10061f1c0, 80 bytes, inline, placed by class name and debug map
    // RadiansToJagexAngle(double)
    int RadiansToJagexAngle(double param_1) {
        double dVar1;

        dVar1 = (double)_fmod(param_1, 4618760256179214148);
        return (int)((double)(~-(ulong)(dVar1 < 0.0) & (ulong)dVar1 |
                              (ulong)(dVar1 + 6.283185307) & -(ulong)(dVar1 < 0.0)) *
                     2607.5945876921437);
    }

    // 0x100620d30, 16 bytes, inline, placed by class name
    // RadiansToOldJagexAngle(float)
    int RadiansToOldJagexAngle(float param_1) {
        return RadiansToJagexAngle(this, param_1) >> 3;
    }

    // 0x100623370, 64 bytes, inline, placed by class name
    // RadiansToJagexAngle(float)
    int RadiansToJagexAngle(float param_1) {
        float fVar1;
        float in_XMM1_Da;

        fVar1 = (float)fmod(param_1, in_XMM1_Da);
        return (int)((float)(~-(uint)(fVar1 < 0.0) & (uint)fVar1 | (uint)(fVar1 + 6.2831855) & -(uint)(fVar1 < 0.0)) *
                     2607.5945);
    }

    // 0x10097d820, 16 bytes, inline, placed by class name
    // OldJagexAngleToRadians(int)
    void OldJagexAngleToRadians(int param_1) {
        JagexAngleToRadians(param_1 << 3);
    }

} // namespace jag::math::conversion

namespace jag::game {
    // 0x1002afd50, 16 bytes, inline, placed by class name
    // Conversion::RadiansToOldJagexAngle(float)
    int Conversion::RadiansToOldJagexAngle(float param_1) {
        return RadiansToJagexAngle(this, param_1) >> 3;
    }

} // namespace jag::game

namespace jag {
    // 0x10061f330, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::Entity>::type make_shared<game::Entity, graphics::GraphNode*&, shared_ptr<game::World> const&, game::EntityType, int>(graphics::GraphNode*&, shared_ptr<game::World> const&, game::EntityType&&, int&&)
    jag* jag::make_shared<game::Entity, graphics::GraphNode*&, shared_ptr<game::World> const&, game::EntityType, int>(
        GraphNode** param_1, shared_ptr* param_2, EntityType* param_3, int* param_4) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        Entity* local_40[2];

        pvVar1 = (void*)aligned_alloc(224, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] =
                placement_new<game::Entity, graphics::GraphNode*&, shared_ptr<game::World> const&, game::EntityType,
                              int>((void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<game::Entity>, int, game::Entity*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
