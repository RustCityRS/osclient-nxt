// projects/osclient/clientproj.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "clientproj.h"

namespace jag::oldscape {
    // 0x100113f40, 384 bytes, placed by class name and debug map
    // ClientProj::SetTarget(int, int, int, int)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* ClientProj::SetTarget(int, int, int, int) */

    void ClientProj::SetTarget(int param_1, int param_2, int param_3, int param_4) {
        ulong uVar1;
        double dVar2;
        double dVar3;
        double dVar4;

        field_44 = param_1;
        field_48 = param_2;
        field_52 = param_3;
        if (field_80 == '\0') {
            dVar2 = (double)(param_1 - field_28);
            dVar3 = (double)(param_2 - field_32);
            dVar4 = 1.0 / SQRT(dVar3 * dVar3 + dVar2 * dVar2);
            field_88 = dVar2 * (double)field_68 * dVar4 + (double)field_28;
            field_96 = dVar3 * (double)field_68 * dVar4 + (double)field_32;
            field_104 = (double)field_36;
        }
        dVar4 = (double)((field_60 - param_4) + 1);
        dVar2 = ((double)param_1 - field_88) * (1.0 / dVar4);
        field_128 = dVar2;
        dVar3 = ((double)param_2 - field_96) * (1.0 / dVar4);
        field_136 = dVar3;
        dVar2 = SQRT(dVar3 * dVar3 + dVar2 * dVar2);
        field_144 = dVar2;
        if (field_80 == '\0') {
            uVar1 = (ulong)DAT_100d99950;
            dVar3 = (double)_tan(SUB84((double)field_64 * 0.02454369, 0));
            field_152 = dVar3 * (double)((ulong)dVar2 ^ uVar1);
        }
        dVar2 = (double)param_3 - (field_152 * dVar4 + field_104);
        field_160 = (dVar2 + dVar2) / (dVar4 * dVar4);
    }

    // 0x10011dfd0, 352 bytes, base-object constructor, placed by class name
    // ClientProj::ClientProj(int, int, int, int, int, int, int, int, int, int, int)
    void ClientProj::ClientProj(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                int param_7, int param_8, int param_9, int param_10, int param_11) {
        undefined1* this_00;
        int iVar1;
        long lVar2;
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var3;
        shared_ptr local_40;

        p_Var3 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1);
        new (this) dash3d::UniqueModelSource();
        field_0 = &PTR__ClientProj_100ef4068;
        field_80 = 0;
        this_00 = field_168;
        new (this_00) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var3);
        field_184 = 0;
        field_188 = 0;
        field_120 = param_1;
        field_24 = param_2;
        field_28 = param_3;
        field_32 = param_4;
        field_36 = param_5;
        field_56 = param_6;
        field_60 = param_7;
        field_64 = param_8;
        field_68 = param_9;
        field_76 = param_10;
        field_40 = param_11;
        field_80 = 0;
        local_40.List(param_1);
        lVar2 = shared_ptr<configdecoder::SpotType>::operator->((shared_ptr<configdecoder::SpotType>*)&local_40);
        iVar1 = *(int*)(lVar2 + 8);
        local_40.~shared_ptr();
        if (iVar1 == -1) {
            new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<configdecoder::SeqType>::operator=((shared_ptr<configdecoder::SeqType>*)this_00, &local_40);
        } else {
            local_40.List(iVar1);
            shared_ptr<configdecoder::SeqType>::operator=((shared_ptr<configdecoder::SeqType>*)this_00, &local_40);
        }
        local_40.~shared_ptr();
        field_72 = 0;
    }

    // 0x10011e130, 64 bytes, complete-object constructor, placed by class name
    // ClientProj::ClientProj(int, int, int, int, int, int, int, int, int, int, int)
    void ClientProj::ClientProj(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                int param_7, int param_8, int param_9, int param_10, int param_11) {
        ClientProj(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10,
                   param_11);
    }

    // 0x10011e170, 96 bytes, base-object constructor, placed by class name
    // ClientProj::ClientProj(int, int, int, int, int, int, int, int, int, int, int, int)
    void ClientProj::ClientProj(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                int param_7, int param_8, int param_9, int param_10, int param_11, int param_12) {
        ClientProj(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_11,
                   param_12);
        field_72 = param_10;
    }

    // 0x10011e1d0, 96 bytes, complete-object constructor, placed by class name
    // ClientProj::ClientProj(int, int, int, int, int, int, int, int, int, int, int, int)
    void ClientProj::ClientProj(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                int param_7, int param_8, int param_9, int param_10, int param_11, int param_12) {
        ClientProj(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_11,
                   param_12);
        field_72 = param_10;
    }

    // 0x10011e230, 592 bytes, placed by class name
    // ClientProj::Move(int)
    void ClientProj::Move(int param_1) {
        undefined1* this_00;
        int iVar3;
        SeqType* pSVar4;
        long lVar5;
        int* piVar6;
        int iVar7;
        double dVar8;
        double dVar9;

        dVar8 = (double)param_1;
        field_80 = 1;
        field_88 = field_128 * dVar8 + field_88;
        field_96 = field_136 * dVar8 + field_96;
        dVar9 = field_160 * dVar8;
        field_104 = (dVar9 * 0.5 + field_152) * dVar8 + field_104;
        dVar9 = dVar9 + field_152;
        field_152 = dVar9;
        dVar8 = (double)_atan2();
        field_112 = (int)(dVar8 * 325.949) + 1024U & 2047;
        dVar8 = (double)_atan2(dVar9, field_144);
        field_116 = (int)(dVar8 * 325.949) & 2047;
        this_00 = field_168;
        if (operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0)) {
            pSVar4 =
                (SeqType*)shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)this_00);
            if (pSVar4->IsKeyFramed() == '\0') {
                iVar3 = param_1 + field_188;
                field_188 = iVar3;
                lVar5 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)this_00);
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(lVar5 + 120),
                                                                        (long)field_184);
                if (*piVar6 < iVar3) {
                    do {
                        lVar5 = shared_ptr<configdecoder::SeqType>::operator->(
                            (shared_ptr<configdecoder::SeqType>*)this_00);
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(lVar5 + 120), (long)field_184);
                        field_188 = field_188 - *piVar6;
                        iVar7 = field_184 + 1;
                        field_184 = iVar7;
                        lVar5 = shared_ptr<configdecoder::SeqType>::operator->(
                            (shared_ptr<configdecoder::SeqType>*)this_00);
                        iVar3 = ((lVar5 + 72))->end();
                        if (iVar3 <= iVar7) {
                            lVar5 = shared_ptr<configdecoder::SeqType>::operator->(
                                (shared_ptr<configdecoder::SeqType>*)this_00);
                            iVar3 = field_184 - *(int*)(lVar5 + 168);
                            field_184 = iVar3;
                            if (-1 < iVar3) {
                                lVar5 = shared_ptr<configdecoder::SeqType>::operator->(
                                    (shared_ptr<configdecoder::SeqType>*)this_00);
                                iVar7 = ((lVar5 + 72))->end();
                                if (iVar3 < iVar7)
                                    goto LAB_10011e3cc;
                            }
                            field_184 = 0;
                        }
                    LAB_10011e3cc:
                        iVar3 = field_188;
                        lVar5 = shared_ptr<configdecoder::SeqType>::operator->(
                            (shared_ptr<configdecoder::SeqType>*)this_00);
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(lVar5 + 120), (long)field_184);
                    } while (*piVar6 < iVar3);
                }
            } else {
                field_184 = field_184 + param_1;
                pSVar4 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(
                    (shared_ptr<configdecoder::SeqType>*)this_00);
                iVar3 = pSVar4->GetDuration();
                if (iVar3 <= field_184) {
                    lVar5 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)this_00);
                    field_184 = iVar3 - *(int*)(lVar5 + 168);
                }
            }
        }
    }

    // 0x10011e480, 16 bytes, placed by class name
    // ClientProj::IsLit() const
    undefined8 ClientProj::IsLit() {
        return 0;
    }

    // 0x10011e490, 16 bytes, placed by class name
    // ClientProj::IsUnlit() const
    undefined8 ClientProj::IsUnlit() {
        return 0;
    }

    // 0x10011e4a0, 16 bytes, placed by class name
    // ClientProj::IsClientLocAnim() const
    undefined8 ClientProj::IsClientLocAnim() {
        return 0;
    }

    // 0x10011e4b0, 192 bytes, placed by class name
    // ClientProj::GetTempModel(int)
    ClientProj* ClientProj::GetTempModel(int param_1) {
        int iVar2;
        long* plVar3;
        undefined4 in_register_00000034;
        shared_ptr<RSevenDebugPresetProvider> local_40[16];
        shared_ptr local_30;

        local_40->List(*(int*)(CONCAT44(in_register_00000034, param_1) + 120));
        iVar2 = shared_ptr<configdecoder::SpotType>::operator->((shared_ptr<configdecoder::SpotType>*)local_40);
        local_30.GetTempModel2(iVar2);
        if (operator==(&local_30, (_func_decltype_nullptr*)0)) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            plVar3 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_30);
            (**(code**)(*plVar3 + 152))(plVar3, *(undefined4*)(CONCAT44(in_register_00000034, param_1) + 116));
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, &local_30);
        }
        local_30.~shared_ptr();
        local_40->~shared_ptr();
        return this;
    }

} // namespace jag::oldscape
