// libs/oldscape/jagex3/midi2/miditask/FadeInTask.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "FadeInTask.h"

namespace jag::oldscape::midi2 {
    // 0x1002d9670
    FadeInTask::FadeInTask(const shared_ptr<MidiTask>& midiTask, const shared_ptr<MidiRequest>& midiRequest, int arg3)
        : MidiTask(midiTask), field_96(midiRequest), field_112(arg3) {
        (&field_56)->assign("FadeInTask");
    }

    // 0x1002d96f0
    unsigned long FadeInTask::Execute() {
        int iVar1;
        long lVar4;
        long* plVar5;
        uint64_t* puVar6;
        uint64_t unaff_R15;
        float fVar8;

        uint8_t* objType = &field_96;
        bool bVar2 = *objType == nullptr;
        unsigned long uVar7 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
        if (!bVar2) {
            lVar4 = (*objType).operator->();
            bVar2 = (*((lVar4 + 32))) == nullptr;
            if (!bVar2) {
                lVar4 = (*objType).operator->();
                *(uint8_t*)(lVar4 + 27) = 1;
                lVar4 = (*objType).operator->();
                fVar8 = *(float*)(lVar4 + 20);
                lVar4 = (*objType).operator->();
                if (fVar8 < (float)*(int*)(lVar4 + 16)) {
                    lVar4 = (*objType).operator->();
                    plVar5 = (long*)(*((lVar4 + 32))).operator->();
                    if ((**(void (**)(...))(*plVar5 + 32))(plVar5) != '\0') {
                        fVar8 = 0.0;
                        if (field_112 != 0) {
                            lVar4 = (*objType).operator->();
                            fVar8 = (float)*(int*)(lVar4 + 16) / (float)field_112;
                        }
                        if (fVar8 == 0.0) {
                            lVar4 = (*objType).operator->();
                            fVar8 = (float)*(int*)(lVar4 + 16);
                        }
                        lVar4 = (*objType).operator->();
                        *(float*)(lVar4 + 20) = fVar8 + *(float*)(lVar4 + 20);
                        lVar4 = (*objType).operator->();
                        fVar8 = *(float*)(lVar4 + 20);
                        lVar4 = (*objType).operator->();
                        if ((float)*(int*)(lVar4 + 16) < fVar8) {
                            lVar4 = (*objType).operator->();
                            iVar1 = *(int*)(lVar4 + 16);
                            lVar4 = (*objType).operator->();
                            *(float*)(lVar4 + 20) = (float)iVar1;
                        }
                        lVar4 = (*objType).operator->();
                        puVar6 = (uint64_t*)(*((lVar4 + 32))).operator->();
                        lVar4 = (*objType).operator->();
                        (**(void (**)(...))*puVar6)(puVar6, (int)*(float*)(lVar4 + 20));
                        uVar7 = 0;
                        goto LAB_1002d9872;
                    }
                }
                lVar4 = (*objType).operator->();
                *(uint8_t*)(lVar4 + 27) = 0;
            }
        }
    LAB_1002d9872:
        return uVar7 & 4294967295;
    }

} // namespace jag::oldscape::midi2
