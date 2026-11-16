// libs/game/runetek5/camera/DeceleratingMovement.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class DeceleratingMovement {
    public:
        void DeceleratingMovementUpdateWorldSpace(float, math::Vector3T<double>&, math::Vector3T<double> const&, int,
                                                  int);
        void DeceleratingLookatUpdateWorldSpace(float, math::Vector3T<double>&, math::Vector3T<double>&,
                                                math::Vector3T<double> const&, int, int);

        // data members, from how the methods use this: 24 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
    };

    // 0x10061f3f0, 368 bytes, placed by class name and debug map
    // DeceleratingMovement::DeceleratingMovementUpdateWorldSpace(float, math::Vector3T<double>&, math::Vector3T<double> const&, int, int)
    void DeceleratingMovement::DeceleratingMovementUpdateWorldSpace(float param_1, Vector3T* param_2, Vector3T* param_3,
                                                                    int param_4, int param_5) {
        undefined8 uVar1;
        double dVar2;
        undefined8* puVar3;
        double* pdVar4;
        uint uVar5;
        double dVar6;

        if (param_4 < 100) {
            uVar5 = 0;
            do {
                pdVar4 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_2, uVar5);
                dVar2 = *pdVar4;
                pdVar4 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)this, uVar5);
                dVar6 = (dVar2 - *pdVar4) * 0.001 * (double)param_4;
                if (dVar2 - *pdVar4 <= 0.0) {
                    pdVar4 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)this, uVar5);
                    *pdVar4 = (dVar6 - (double)(int)param_3) + *pdVar4;
                    pdVar4 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)this, uVar5);
                    dVar2 = *pdVar4;
                    pdVar4 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_2, uVar5);
                    if (dVar2 < *pdVar4)
                        goto LAB_10061f440;
                } else {
                    pdVar4 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)this, uVar5);
                    *pdVar4 = dVar6 + (double)(int)param_3 + *pdVar4;
                    pdVar4 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)this, uVar5);
                    dVar2 = *pdVar4;
                    pdVar4 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_2, uVar5);
                    if (*pdVar4 <= dVar2 && dVar2 != *pdVar4) {
                    LAB_10061f440:
                        puVar3 = (undefined8*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_2, uVar5);
                        uVar1 = *puVar3;
                        puVar3 = (undefined8*)math::Vector3T<double>::operator[]((Vector3T<double>*)this, uVar5);
                        *puVar3 = uVar1;
                    }
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 != 3);
        } else {
            math::Vector3T<double>::operator=((Vector3T<double>*)this, param_2);
        }
    }

    // 0x10061f560, 272 bytes, placed by class name and debug map
    // DeceleratingMovement::DeceleratingLookatUpdateWorldSpace(float, math::Vector3T<double>&, math::Vector3T<double>&, math::Vector3T<double> const&, int, int)
    void DeceleratingMovement::DeceleratingLookatUpdateWorldSpace(float param_1, Vector3T* param_2, Vector3T* param_3,
                                                                  Vector3T* param_4, int param_5, int param_6) {
        float fVar2;
        double dVar3;
        double dVar4;
        undefined1 local_98[96];
        double local_38;

        if (param_6 < 100) {
            if (math::operator==(param_3, param_4)) {
                return;
            }
            fVar2 = (float)math::conversion::OldJagexAngleToRadians(param_5);
            local_38 = (double)fVar2;
            math::operator-((math*)(local_98 + 72), param_3, param_2);
            math::operator-((math*)local_98, param_4, param_2);
            ((local_98 + 72))->Normalize();
            local_98->Normalize();
            math::Vector3Dot<double>((Vector3T*)(local_98 + 72), (Vector3T*)local_98);
            dVar3 = (double)_acos();
            dVar4 = (double)param_6 * 0.001 * dVar3 + local_38;
            if (dVar4 < dVar3) {
                local_38 = dVar4 / dVar3;
                math::operator-((math*)(local_98 + 48), param_4, param_3);
                math::operator*((math*)(local_98 + 24), local_38, (Vector3T*)(local_98 + 48));
                math::Vector3T<double>::operator+=((Vector3T<double>*)param_3, (Vector3T*)(local_98 + 24));
                return;
            }
        }
        math::Vector3T<double>::operator=((Vector3T<double>*)param_3, param_4);
    }

} // namespace jag::game
