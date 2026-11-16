// libs/oldscape/jagex3/midi2/miditask/ConcurrentMidiTask.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "ConcurrentMidiTask.h"

namespace jag::oldscape::midi2 {
    // 0x1002d9360
    ConcurrentMidiTask::ConcurrentMidiTask(const shared_ptr<MidiTask>& midiTask,
                                           eastl::vector<shared_ptr<MidiTask>> midiTasks)
        : MidiTask(midiTask), field_96(*midiTasks) {
        (&field_56)->assign("ConcurrentMidiTask");
    }

    // 0x1002d93f0
    uint64_t ConcurrentMidiTask::Execute() {
        bool bVar2;
        unsigned long uVar5;
        shared_ptr<configdecoder::ObjType>* objType;
        shared_ptr<MidiTask>* psVar6;
        long* plVar7;
        MidiTask* pMVar8;
        unsigned long arg1;
        ReturnValue local_50;

        uint8_t* this_00 = &field_96;
        long lVar4 = this_00->size();
        if (lVar4 != 0) {
            arg1 = 0;
            do {
                objType = (shared_ptr<configdecoder::ObjType>*)(*this_00)[arg1];
                bVar2 = *objType == nullptr;
                if (bVar2) {
                LAB_1002d9450:
                    lVar4 = this_00->HeapBeginPtr();
                    this_00->erase((arg1 * 16 + lVar4));
                    arg1 = arg1 - 1;
                } else {
                    psVar6 = (shared_ptr<MidiTask>*)(*this_00)[arg1];
                    plVar7 = (long*)(*psVar6).operator->();
                    if ((**(void (**)(...))(*plVar7 + 16))(plVar7)) {
                        psVar6 = (shared_ptr<MidiTask>*)(*this_00)[arg1];
                        pMVar8 = (MidiTask*)(*psVar6).operator->();
                        if (pMVar8->HasError()) {
                            psVar6 = (shared_ptr<MidiTask>*)(*this_00)[arg1];
                            pMVar8 = (MidiTask*)(*psVar6).operator->();
                            local_50 = pMVar8->GetErrorMessage();
                            RaiseError(local_50);
                            this_00->clear();
                            return 1;
                        }
                        psVar6 = (shared_ptr<MidiTask>*)(*this_00)[arg1];
                        pMVar8 = (MidiTask*)(*psVar6).operator->();
                        local_50 = pMVar8->GetCompletionTask();
                        bVar2 = local_50 != nullptr;
                        if (bVar2) {
                            psVar6 = (shared_ptr<MidiTask>*)(*this_00)[arg1];
                            pMVar8 = (MidiTask*)(*psVar6).operator->();
                            local_50 = pMVar8->GetCompletionTask();
                            this_00->push_back(local_50);
                        }
                        psVar6 = (shared_ptr<MidiTask>*)(*this_00)[arg1];
                        plVar7 = (long*)(*psVar6).operator->();
                        field_89 = (**(void (**)(...))(*plVar7 + 24))(plVar7);
                        goto LAB_1002d9450;
                    }
                }
                arg1 = arg1 + 1;
                uVar5 = this_00->size();
            } while (arg1 < uVar5);
        }
        return this_00->empty();
    }

} // namespace jag::oldscape::midi2
