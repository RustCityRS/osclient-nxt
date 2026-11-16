// projects/osclient/clientproj.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "clientproj.h"

namespace jag::oldscape {
    // 0x100113f40
    void ClientProj::SetTarget(int arg1, int arg2, int arg3, int arg4) {
        unsigned long uVar1;
        double dVar2;
        double dVar3;
        double dVar4;

        field_44 = arg1;
        field_48 = arg2;
        field_52 = arg3;
        if (field_80 == '\0') {
            dVar2 = (double)(arg1 - field_28);
            dVar3 = (double)(arg2 - field_32);
            dVar4 = 1.0 / SQRT(dVar3 * dVar3 + dVar2 * dVar2);
            field_88 = dVar2 * (double)field_68 * dVar4 + (double)field_28;
            field_96 = dVar3 * (double)field_68 * dVar4 + (double)field_32;
            field_104 = (double)field_36;
        }
        dVar4 = (double)((field_60 - arg4) + 1);
        dVar2 = ((double)arg1 - field_88) * (1.0 / dVar4);
        field_128 = dVar2;
        dVar3 = ((double)arg2 - field_96) * (1.0 / dVar4);
        field_136 = dVar3;
        dVar2 = SQRT(dVar3 * dVar3 + dVar2 * dVar2);
        field_144 = dVar2;
        if (field_80 == '\0') {
            uVar1 = (unsigned long)DAT_100d99950;
            dVar3 = (double)_tan((uint32_t)((double)field_64 * 0.02454369f));
            field_152 = dVar3 * (double)((unsigned long)dVar2 ^ uVar1);
        }
        dVar2 = (double)arg3 - (field_152 * dVar4 + field_104);
        field_160 = (dVar2 + dVar2) / (dVar4 * dVar4);
    }

    // 0x10011dfd0
    ClientProj::ClientProj(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9,
                           int arg10, int arg11)
        : dash3d::UniqueModelSource(), field_80(0) {
        uint8_t* this_00 = &field_168;
        new (this_00) shared_ptr();
        field_184 = 0;
        field_188 = 0;
        field_120 = arg1;
        field_24 = arg2;
        field_28 = arg3;
        field_32 = arg4;
        field_36 = arg5;
        field_56 = arg6;
        field_60 = arg7;
        field_64 = arg8;
        field_68 = arg9;
        field_76 = arg10;
        field_40 = arg11;
        field_80 = 0;
        auto local_40 = configdecoder::SpotType::List(arg1);
        long lVar1 = local_40.operator->();
        int arg1_00 = *(int*)(lVar1 + 8);
        if (arg1_00 == -1) {
            local_40 = shared_ptr();
            *this_00 = local_40;
        } else {
            local_40 = configdecoder::SeqType::List(arg1_00);
            *this_00 = local_40;
        }
        field_72 = 0;
    }

    // 0x10011e170
    ClientProj::ClientProj(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9,
                           int arg10, int arg11, int arg12) {
        ClientProj(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg11, arg12);
        field_72 = arg10;
    }

    // 0x10011e230
    void ClientProj::Move(int arg1) {
        int iVar3;
        SeqType* pSVar4;
        long lVar5;
        int* piVar6;
        int iVar7;

        double dVar8 = (double)arg1;
        field_80 = 1;
        field_88 = field_128 * dVar8 + field_88;
        field_96 = field_136 * dVar8 + field_96;
        double dVar9 = field_160 * dVar8;
        field_104 = (dVar9 * 0.5 + field_152) * dVar8 + field_104;
        dVar9 = dVar9 + field_152;
        field_152 = dVar9;
        dVar8 = (double)_atan2();
        field_112 = (int)(dVar8 * 325.949) + 1024U & 2047;
        dVar8 = (double)_atan2(dVar9, field_144);
        field_116 = (int)(dVar8 * 325.949) & 2047;
        uint8_t* midiPlayerMainThread = &field_168;
        if (*midiPlayerMainThread != nullptr) {
            pSVar4 = (SeqType*)(*midiPlayerMainThread).operator->();
            if (pSVar4->IsKeyFramed() == '\0') {
                iVar3 = arg1 + field_188;
                field_188 = iVar3;
                lVar5 = (*midiPlayerMainThread).operator->();
                piVar6 = (int*)(*((lVar5 + 120)))[(long)field_184];
                if (*piVar6 < iVar3) {
                    do {
                        lVar5 = (*midiPlayerMainThread).operator->();
                        piVar6 = (int*)(*((lVar5 + 120)))[(long)field_184];
                        field_188 = field_188 - *piVar6;
                        iVar7 = field_184 + 1;
                        field_184 = iVar7;
                        lVar5 = (*midiPlayerMainThread).operator->();
                        iVar3 = ((lVar5 + 72))->end();
                        if (iVar3 <= iVar7) {
                            lVar5 = (*midiPlayerMainThread).operator->();
                            iVar3 = field_184 - *(int*)(lVar5 + 168);
                            field_184 = iVar3;
                            if (-1 < iVar3) {
                                lVar5 = (*midiPlayerMainThread).operator->();
                                iVar7 = ((lVar5 + 72))->end();
                                if (iVar3 < iVar7)
                                    goto LAB_10011e3cc;
                            }
                            field_184 = 0;
                        }
                    LAB_10011e3cc:
                        iVar3 = field_188;
                        lVar5 = (*midiPlayerMainThread).operator->();
                        piVar6 = (int*)(*((lVar5 + 120)))[(long)field_184];
                    } while (*piVar6 < iVar3);
                }
            } else {
                field_184 = field_184 + arg1;
                pSVar4 = (SeqType*)(*midiPlayerMainThread).operator->();
                iVar3 = pSVar4->GetDuration();
                if (iVar3 <= field_184) {
                    lVar5 = (*midiPlayerMainThread).operator->();
                    field_184 = iVar3 - *(int*)(lVar5 + 168);
                }
            }
        }
    }

    // 0x10011e480
    bool ClientProj::IsLit() const {
        return 0;
    }

    // 0x10011e490
    bool ClientProj::IsUnlit() const {
        return 0;
    }

    // 0x10011e4a0
    bool ClientProj::IsClientLocAnim() const {
        return 0;
    }

    // 0x10011e4b0
    ClientProj* ClientProj::GetTempModel(int arg1) {
        long* plVar2;
        uint32_t in_register_00000034;

        long lVar3 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        auto local_40 = configdecoder::SpotType::List(*(int*)(lVar3 + 120));
        auto local_30 = ((SpotType*)local_40.operator->())->GetTempModel2(*(int*)(lVar3 + 184));
        if (local_30 == nullptr) {
            new (this) shared_ptr();
        } else {
            plVar2 = (long*)local_30.operator->();
            (**(void (**)(...))(*plVar2 + 152))(plVar2, *(uint32_t*)(lVar3 + 116));
            shared_ptr<FileRSevenDebugPresetProvider, void>(local_30);
        }
        return this;
    }

} // namespace jag::oldscape
