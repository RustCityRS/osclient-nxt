// libs/oldscape/jagex3/midi2/miditask/FadeOutTask.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "FadeOutTask.h"

namespace jag::oldscape::midi2 {
    // 0x100292060
    FadeOutTask::FadeOutTask(const shared_ptr<MidiTask>& midiTask, const shared_ptr<MidiRequest>& midiRequest, int arg3)
        : MidiTask(midiTask), field_96(midiRequest), field_112(arg3) {
        (&field_56)->assign("FadeOutTask");
    }

    // 0x1002920e0
    unsigned long FadeOutTask::Execute() {
        long lVar3;
        long* plVar4;
        uint64_t* puVar5;
        uint64_t unaff_R15;
        float fVar7;

        uint8_t* objType = &field_96;
        bool bVar1 = *objType == nullptr;
        unsigned long uVar6 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
        if (!bVar1) {
            lVar3 = (*objType).operator->();
            bVar1 = (*((lVar3 + 32))) == nullptr;
            if (!bVar1) {
                lVar3 = (*objType).operator->();
                *(uint8_t*)(lVar3 + 27) = 1;
                lVar3 = (*objType).operator->();
                if (0.0 < *(float*)(lVar3 + 20)) {
                    lVar3 = (*objType).operator->();
                    plVar4 = (long*)(*((lVar3 + 32))).operator->();
                    if ((**(void (**)(...))(*plVar4 + 32))(plVar4) != '\0') {
                        fVar7 = 0.0;
                        if (field_112 != 0) {
                            lVar3 = (*objType).operator->();
                            fVar7 = (float)*(int*)(lVar3 + 16) / (float)field_112;
                        }
                        if (fVar7 == 0.0) {
                            lVar3 = (*objType).operator->();
                            fVar7 = (float)*(int*)(lVar3 + 16);
                        }
                        lVar3 = (*objType).operator->();
                        *(float*)(lVar3 + 20) = *(float*)(lVar3 + 20) - fVar7;
                        lVar3 = (*objType).operator->();
                        if (*(float*)(lVar3 + 20) <= 0.0 && *(float*)(lVar3 + 20) != 0.0) {
                            lVar3 = (*objType).operator->();
                            *(uint32_t*)(lVar3 + 20) = 0;
                        }
                        lVar3 = (*objType).operator->();
                        puVar5 = (uint64_t*)(*((lVar3 + 32))).operator->();
                        lVar3 = (*objType).operator->();
                        (**(void (**)(...))*puVar5)(puVar5, (int)*(float*)(lVar3 + 20));
                        uVar6 = 0;
                        goto LAB_10029221c;
                    }
                }
                lVar3 = (*objType).operator->();
                *(uint8_t*)(lVar3 + 27) = 0;
            }
        }
    LAB_10029221c:
        return uVar6 & 4294967295;
    }

} // namespace jag::oldscape::midi2
