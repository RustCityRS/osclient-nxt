// libs/game/runetek5/camera/DeceleratingMovement.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class DeceleratingMovement {
    public:
        void DeceleratingMovementUpdateWorldSpace(float arg1, math::Vector3T<double>& vector31,
                                                  const math::Vector3T<double>& vector32, int arg4, int arg5);
        void DeceleratingLookatUpdateWorldSpace(float arg1, math::Vector3T<double>& vector31,
                                                math::Vector3T<double>& vector32,
                                                const math::Vector3T<double>& vector33, int arg5, int arg6);
    };

    // 0x10061f3f0
    void DeceleratingMovement::DeceleratingMovementUpdateWorldSpace(float arg1, math::Vector3T<double>& vector31,
                                                                    const math::Vector3T<double>& vector32, int arg4,
                                                                    int arg5) {
        uint64_t uVar1;
        double dVar2;
        uint64_t* puVar3;
        double* pdVar4;
        unsigned int arg1_00;
        double dVar5;

        if (arg5 < 100) {
            arg1_00 = 0;
            do {
                pdVar4 = &vector32[arg1_00];
                dVar2 = *pdVar4;
                pdVar4 = &vector31[arg1_00];
                dVar5 = (dVar2 - *pdVar4) * 0.001 * (double)arg5;
                if (dVar2 - *pdVar4 <= 0.0) {
                    pdVar4 = &vector31[arg1_00];
                    *pdVar4 = (dVar5 - (double)arg4) + *pdVar4;
                    pdVar4 = &vector31[arg1_00];
                    dVar2 = *pdVar4;
                    pdVar4 = &vector32[arg1_00];
                    if (dVar2 < *pdVar4)
                        goto LAB_10061f440;
                } else {
                    pdVar4 = &vector31[arg1_00];
                    *pdVar4 = dVar5 + (double)arg4 + *pdVar4;
                    pdVar4 = &vector31[arg1_00];
                    dVar2 = *pdVar4;
                    pdVar4 = &vector32[arg1_00];
                    if (*pdVar4 <= dVar2 && dVar2 != *pdVar4) {
                    LAB_10061f440:
                        puVar3 = &vector32[arg1_00];
                        uVar1 = *puVar3;
                        puVar3 = &vector31[arg1_00];
                        *puVar3 = uVar1;
                    }
                }
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 != 3);
        } else {
            vector31 = vector32;
        }
    }

    // 0x10061f560
    void DeceleratingMovement::DeceleratingLookatUpdateWorldSpace(float arg1, math::Vector3T<double>& vector31,
                                                                  math::Vector3T<double>& vector32,
                                                                  const math::Vector3T<double>& vector33, int arg5,
                                                                  int arg6) {
        float fVar2;
        double dVar3;
        double dVar4;
        ReturnValue local_98;
        Vector3T<double> local_80;
        Vector3T<double> local_68;
        ReturnValue local_50;
        double local_38;

        if (arg6 < 100) {
            if (vector32 == vector33) {
                return;
            }
            fVar2 = (float)math::conversion::OldJagexAngleToRadians(arg5);
            local_38 = (double)fVar2;
            local_50 - vector32;
            local_98 - vector33;
            local_50 = math::Vector3T<double>::Normalize();
            local_98 = math::Vector3T<double>::Normalize();
            math::Vector3Dot<double>(local_50, local_98);
            dVar3 = (double)_acos();
            dVar4 = (double)arg6 * 0.001 * dVar3 + local_38;
            if (dVar4 < dVar3) {
                local_38 = dVar4 / dVar3;
                local_68 - vector33;
                local_80** local_38;
                vector32 += local_80;
                return;
            }
        }
        vector32 = vector33;
    }

} // namespace jag::game
