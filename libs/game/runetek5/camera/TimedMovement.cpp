// libs/game/runetek5/camera/TimedMovement.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

// 0x1006233b0
void fmod(float arg1, float arg2) {
    _fmodf(arg1, 1086918619);
}

// 0x100623460
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}

// 0x100623ab0
void sin(float arg1) {
    _sinf();
}

// 0x100623ac0
void cos(float arg1) {
    _cosf();
}

namespace jag {
    // 0x100623c30
    game::Entity*
    placement_new<game::Entity, graphics::GraphNode*&, shared_ptr<game::World> const&, game::EntityType, int>(
        void* arg1, graphics::GraphNode*& arg2, const shared_ptr<game::World>& world, game::EntityType&& entityType,
        int&& arg5) {
        new (arg1) game::Entity(arg2, world, (int)(char)*entityType, arg5);
        return arg1;
    }

    // 0x100623c60
    ref_counter_shared<game::Entity>*
    placement_new<ref_counter_shared<game::Entity>, int, game::Entity*&>(void* arg1, int&& arg2, game::Entity*& arg3) {
        new (arg1) ref_counter_shared<game::Entity>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100623de0
    game::camera::OldShake* placement_new<game::camera::OldShake, game::camera::ShakeMode&, float, float, float, float>(
        void* arg1, game::camera::ShakeMode& shakeMode, float&& arg3, float&& arg4, float&& arg5, float&& arg6) {
        new (arg1) game::camera::OldShake(shakeMode, arg3, arg4, arg5, arg6);
        return arg1;
    }

    // 0x100623e10
    ref_counter_shared<game::camera::OldShake>*
    placement_new<ref_counter_shared<game::camera::OldShake>, int, game::camera::OldShake*&>(
        void* arg1, int&& arg2, game::camera::OldShake*& arg3) {
        new (arg1) ref_counter_shared<game::camera::OldShake>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::game {
    class TimedMovement {
    public:
        bool TimedMovementUpdateWorldSpace(unsigned long long arg1, unsigned int arg2,
                                           const math::Vector3T<double>& vector31, math::Vector3T<double>& vector32,
                                           const math::Vector3T<double>& vector33);
    };

    // 0x100622fb0
    bool TimedMovement::TimedMovementUpdateWorldSpace(unsigned long long arg1, unsigned int arg2,
                                                      const math::Vector3T<double>& vector31,
                                                      math::Vector3T<double>& vector32,
                                                      const math::Vector3T<double>& vector33) {
        double dVar2;
        Vector3T<double> local_48;

        if (arg1 < (unsigned long)arg2) {
            dVar2 = (double)pow<double, int>((double)(int)(arg2 - (int)arg1) / (double)(unsigned long)arg2, (int)arg1);
            math::Lerp<math::Vector3T<double>, double>(local_48, vector31, 1.0 - dVar2);
            vector33 = &local_48;
        }
        vector32 = vector33;
        return (unsigned long)arg2 <= arg1;
    }

} // namespace jag::game
