// libs/game/runetek5/camera/TimedMovement.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

// 0x1006233b0, 32 bytes, placed by debug map only (low confidence)
// fmod(float, float)
void fmod(float param_1, float param_2) {
    _fmodf(param_1, 1086918619);
}

// 0x100623460, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}

// 0x100623ab0, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x100623ac0, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

namespace jag {
    // 0x100623c30, 48 bytes, inline, placed by debug map only (low confidence)
    // game::Entity* placement_new<game::Entity, graphics::GraphNode*&, shared_ptr<game::World> const&, game::EntityType, int>(void*, graphics::GraphNode*&, shared_ptr<game::World> const&, game::EntityType&&, int&&)
    Entity*
    jag::placement_new<game::Entity, graphics::GraphNode*&, shared_ptr<game::World> const&, game::EntityType, int>(
        void* param_1, GraphNode** param_2, shared_ptr* param_3, EntityType* param_4, int* param_5) {
        game::Entity::Entity(param_1, *param_2, param_3, (int)(char)*param_4, *param_5);
        return param_1;
    }

    // 0x100623c60, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::Entity>* placement_new<ref_counter_shared<game::Entity>, int, game::Entity*&>(void*, int&&, game::Entity*&)
    ref_counter_shared* placement_new<ref_counter_shared<game::Entity>, int, game::Entity*&>(void* param_1,
                                                                                             int* param_2,
                                                                                             Entity** param_3) {
        ref_counter_shared<game::Entity>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100623de0, 48 bytes, inline, placed by debug map only (low confidence)
    // game::camera::OldShake* placement_new<game::camera::OldShake, game::camera::ShakeMode&, float, float, float, float>(void*, game::camera::ShakeMode&, float&&, float&&, float&&, float&&)
    OldShake* jag::placement_new<game::camera::OldShake, game::camera::ShakeMode&, float, float, float, float>(
        void* param_1, ShakeMode* param_2, float* param_3, float* param_4, float* param_5, float* param_6) {
        /* WARNING: Load size is inaccurate */
        game::camera::OldShake::OldShake(*(OldShake**)param_3, *param_4, *param_5, *param_6, param_1,
                                         *(undefined4*)param_2);
        return param_1;
    }

    // 0x100623e10, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::camera::OldShake>* placement_new<ref_counter_shared<game::camera::OldShake>, int, game::camera::OldShake*&>(void*, int&&, game::camera::OldShake*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<game::camera::OldShake>, int, game::camera::OldShake*&>(
        void* param_1, int* param_2, OldShake** param_3) {
        ref_counter_shared<game::camera::OldShake>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::game {
    class TimedMovement {
    public:
        bool TimedMovementUpdateWorldSpace(unsigned long long, unsigned int, math::Vector3T<double> const&,
                                           math::Vector3T<double>&, math::Vector3T<double> const&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100622fb0, 144 bytes, placed by class name and debug map
    // TimedMovement::TimedMovementUpdateWorldSpace(unsigned long long, unsigned int, math::Vector3T<double> const&, math::Vector3T<double>&, math::Vector3T<double> const&)
    bool TimedMovement::TimedMovementUpdateWorldSpace(ulonglong param_1, uint param_2, Vector3T* param_3,
                                                      Vector3T* param_4, Vector3T* param_5) {
        undefined4 in_register_00000014;
        TimedMovement* pTVar1;
        double dVar2;
        Vector3T local_48[24];

        pTVar1 = (TimedMovement*)(param_1 & 4294967295);
        if (this < pTVar1) {
            dVar2 = (double)pow<double, int>((double)((int)param_1 - (int)this) / (double)(long)pTVar1, (int)this);
            math::Lerp<math::Vector3T<double>, double>(
                (math*)local_48, (Vector3T*)CONCAT44(in_register_00000014, param_2), param_4, 1.0 - dVar2);
            param_4 = local_48;
        }
        math::Vector3T<double>::operator=((Vector3T<double>*)param_3, param_4);
        return pTVar1 <= this;
    }

} // namespace jag::game
