// libs/oldscape/jagex3/midi2/miditask/FadeOutTask.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "FadeOutTask.h"

namespace jag::oldscape::midi2 {
    // 0x100292060, 112 bytes, base-object constructor, placed by class name and debug map
    // FadeOutTask::FadeOutTask(shared_ptr<MidiTask> const&, shared_ptr<MidiRequest> const&, int)
    void FadeOutTask::FadeOutTask(shared_ptr* param_1, shared_ptr* param_2, int param_3) {
        new (this) MidiTask(param_1);
        field_0 = &PTR__FadeOutTask_100ef9400;
        new (field_96, param_2) shared_ptr<dash3d::Decor>();
        field_112 = param_3;
        (&field_56, "FadeOutTask")->assign();
    }

    // 0x1002920d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // FadeOutTask::FadeOutTask(shared_ptr<MidiTask> const&, shared_ptr<MidiRequest> const&, int): jumps straight to the base-object constructor

    // 0x1002920e0, 336 bytes, placed by class name and debug map
    // FadeOutTask::Execute()
    ulong FadeOutTask::Execute() {
        undefined1* this_00;
        bool bVar1;
        long lVar3;
        long* plVar4;
        undefined8* puVar5;
        undefined8 unaff_R15;
        ulong uVar6;
        float fVar7;

        this_00 = field_96;
        bVar1 = operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        uVar6 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
        if (!bVar1) {
            lVar3 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
            bVar1 = operator==((shared_ptr*)(lVar3 + 32), (_func_decltype_nullptr*)0);
            if (!bVar1) {
                lVar3 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                *(undefined1*)(lVar3 + 27) = 1;
                lVar3 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                if (0.0 < *(float*)(lVar3 + 20)) {
                    lVar3 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                    plVar4 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                        (shared_ptr<MidiPlayerMainThread>*)(lVar3 + 32));
                    if ((**(code**)(*plVar4 + 32))(plVar4) != '\0') {
                        fVar7 = 0.0;
                        if (field_112 != 0) {
                            lVar3 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                            fVar7 = (float)*(int*)(lVar3 + 16) / (float)field_112;
                        }
                        if (fVar7 == 0.0) {
                            lVar3 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                            fVar7 = (float)*(int*)(lVar3 + 16);
                        }
                        lVar3 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                        *(float*)(lVar3 + 20) = *(float*)(lVar3 + 20) - fVar7;
                        lVar3 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                        if (*(float*)(lVar3 + 20) <= 0.0 && *(float*)(lVar3 + 20) != 0.0) {
                            lVar3 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                            *(undefined4*)(lVar3 + 20) = 0;
                        }
                        lVar3 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                        puVar5 = (undefined8*)shared_ptr<MidiPlayerMainThread>::operator->(
                            (shared_ptr<MidiPlayerMainThread>*)(lVar3 + 32));
                        lVar3 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                        (**(code**)*puVar5)(puVar5, (int)*(float*)(lVar3 + 20));
                        uVar6 = 0;
                        goto LAB_10029221c;
                    }
                }
                lVar3 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                *(undefined1*)(lVar3 + 27) = 0;
            }
        }
    LAB_10029221c:
        return uVar6 & 4294967295;
    }

} // namespace jag::oldscape::midi2
