// libs/math/conversion/Conversion.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math::conversion {
    // 0x10061f1c0
    int RadiansToJagexAngle(double arg1) {
        double dVar1 = (double)_fmod(arg1, 4618760256179214148);
        return (int)((double)(~-(unsigned long)(dVar1 < 0.0) & (unsigned long)dVar1 |
                              (unsigned long)(dVar1 + 6.283185307) & -(unsigned long)(dVar1 < 0.0)) *
                     2607.5945876921437);
    }

    // 0x100620d30
    int RadiansToOldJagexAngle(float arg1) {
        return RadiansToJagexAngle(arg1) >> 3;
    }

    // 0x100623370
    int RadiansToJagexAngle(float arg1) {
        float in_XMM1_Da;

        float fVar1 = (float)fmod(arg1, in_XMM1_Da);
        return (int)((float)(~-(unsigned int)(fVar1 < 0.0) & (unsigned int)fVar1 |
                             (unsigned int)(fVar1 + 6.2831855f) & -(unsigned int)(fVar1 < 0.0)) *
                     2607.5945);
    }

    // 0x10097d820
    void OldJagexAngleToRadians(int arg1) {
        JagexAngleToRadians(arg1 << 3);
    }

} // namespace jag::math::conversion

namespace jag::game {
    // 0x1002afd50
    int Conversion::RadiansToOldJagexAngle(float arg1) {
        return RadiansToJagexAngle(arg1) >> 3;
    }

} // namespace jag::game

namespace jag {
    // 0x10061f330
    shared_ptr_if_not_array<game::Entity>::type
    make_shared<game::Entity, graphics::GraphNode*&, shared_ptr<game::World> const&, game::EntityType, int>(
        graphics::GraphNode*& arg1, const shared_ptr<game::World>& world, game::EntityType&& entityType, int&& arg4) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        Entity* local_40[2];

        auto arg1_00 = aligned_alloc(224, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<game::Entity>::type result;
        } else {
            local_40[0] =
                placement_new<game::Entity, graphics::GraphNode*&, shared_ptr<game::World> const&, game::EntityType,
                              int>((void*)((long)arg1_00 + 32), arg1, world, entityType, arg4);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::Entity>, int, game::Entity*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag
