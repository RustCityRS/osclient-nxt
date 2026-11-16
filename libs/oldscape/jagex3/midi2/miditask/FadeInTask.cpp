// libs/oldscape/jagex3/midi2/miditask/FadeInTask.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "FadeInTask.h"

namespace jag::oldscape::midi2 {
    // 0x1002d9670, 112 bytes, base-object constructor, placed by class name and debug map
    // FadeInTask::FadeInTask(shared_ptr<MidiTask> const&, shared_ptr<MidiRequest> const&, int)
    void FadeInTask::FadeInTask(shared_ptr* param_1, shared_ptr* param_2, int param_3) {
        new (this) MidiTask(param_1);
        field_0 = &PTR__FadeInTask_100efa378;
        new (field_96, param_2) shared_ptr<dash3d::Decor>();
        field_112 = param_3;
        (&field_56, "FadeInTask")->assign();
    }

    // 0x1002d96e0, 16 bytes, complete-object constructor, placed by class name and debug map
    // FadeInTask::FadeInTask(shared_ptr<MidiTask> const&, shared_ptr<MidiRequest> const&, int): jumps straight to the base-object constructor

    // 0x1002d96f0, 400 bytes, placed by class name and debug map
    // FadeInTask::Execute()
    ulong FadeInTask::Execute() {
        undefined1* this_00;
        int iVar1;
        bool bVar2;
        long lVar4;
        long* plVar5;
        undefined8* puVar6;
        undefined8 unaff_R15;
        ulong uVar7;
        float fVar8;

        this_00 = field_96;
        bVar2 = operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        uVar7 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
        if (!bVar2) {
            lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
            bVar2 = operator==((shared_ptr*)(lVar4 + 32), (_func_decltype_nullptr*)0);
            if (!bVar2) {
                lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                *(undefined1*)(lVar4 + 27) = 1;
                lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                fVar8 = *(float*)(lVar4 + 20);
                lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                if (fVar8 < (float)*(int*)(lVar4 + 16)) {
                    lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                    plVar5 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                        (shared_ptr<MidiPlayerMainThread>*)(lVar4 + 32));
                    if ((**(code**)(*plVar5 + 32))(plVar5) != '\0') {
                        fVar8 = 0.0;
                        if (field_112 != 0) {
                            lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                            fVar8 = (float)*(int*)(lVar4 + 16) / (float)field_112;
                        }
                        if (fVar8 == 0.0) {
                            lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                            fVar8 = (float)*(int*)(lVar4 + 16);
                        }
                        lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                        *(float*)(lVar4 + 20) = fVar8 + *(float*)(lVar4 + 20);
                        lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                        fVar8 = *(float*)(lVar4 + 20);
                        lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                        if ((float)*(int*)(lVar4 + 16) < fVar8) {
                            lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                            iVar1 = *(int*)(lVar4 + 16);
                            lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                            *(float*)(lVar4 + 20) = (float)iVar1;
                        }
                        lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                        puVar6 = (undefined8*)shared_ptr<MidiPlayerMainThread>::operator->(
                            (shared_ptr<MidiPlayerMainThread>*)(lVar4 + 32));
                        lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                        (**(code**)*puVar6)(puVar6, (int)*(float*)(lVar4 + 20));
                        uVar7 = 0;
                        goto LAB_1002d9872;
                    }
                }
                lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                *(undefined1*)(lVar4 + 27) = 0;
            }
        }
    LAB_1002d9872:
        return uVar7 & 4294967295;
    }

} // namespace jag::oldscape::midi2
