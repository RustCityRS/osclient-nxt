// libs/oldscape/jagex3/midi2/miditask/ClearRequestTask.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "ClearRequestTask.h"

namespace jag::oldscape::midi2 {
    // 0x1002d9100
    ClearRequestTask::ClearRequestTask(
        const shared_ptr<MidiTask>& midiTask,
        eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>& midiRequests1,
        const eastl::vector<shared_ptr<MidiRequest>>& midiRequests2)
        : MidiTask(midiTask), field_96(midiRequests1), field_104(midiRequests2) {
        (&field_56)->assign("ClearRequestTask");
    }

    // 0x1002d9190
    uint64_t ClearRequestTask::Execute() {
        bool bVar2;
        shared_ptr<MidiRequest>* midiRequest3;
        shared_ptr<MidiRequest>* psVar3;
        Client* this_01;
        shared_ptr<MidiRequest>* psVar4;
        shared_ptr<MidiRequest>* psVar5;
        long lVar6;
        long* plVar7;
        uint64_t* puVar8;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;

        uint8_t* this_00 = &field_104;
        if (this_00->empty() == '\0') {
            midiRequest3 = (shared_ptr<MidiRequest>*)this_00->HeapBeginPtr();
            psVar3 = (shared_ptr<MidiRequest>*)this_00->end();
            for (; midiRequest3 != psVar3; midiRequest3 = midiRequest3 + 16) {
                psVar4 = (shared_ptr<MidiRequest>*)field_96->HeapBeginPtr();
                psVar5 = (shared_ptr<MidiRequest>*)field_96->end();
                psVar4 = std::find<shared_ptr<MidiRequest>*, shared_ptr<MidiRequest>>(psVar4, psVar5, *midiRequest3);
                bVar2 = *midiRequest3 == nullptr;
                this_02 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_96;
                if (bVar2) {
                LAB_1002d91ff:
                    this_02->erase(psVar4);
                } else {
                    psVar5 = (shared_ptr<MidiRequest>*)this_02->end();
                    if (psVar4 != psVar5) {
                        lVar6 = (*midiRequest3).operator->();
                        lVar6 = (*((lVar6 + 32))).operator->();
                        if (0 < *(int*)(lVar6 + 8)) {
                            lVar6 = (*midiRequest3).operator->();
                            lVar6 = (*((lVar6 + 32))).operator->();
                            *(int*)(lVar6 + 8) = *(int*)(lVar6 + 8) - 1;
                        }
                        lVar6 = (*midiRequest3).operator->();
                        lVar6 = (*((lVar6 + 32))).operator->();
                        if (*(int*)(lVar6 + 8) == 0) {
                            lVar6 = (*midiRequest3).operator->();
                            plVar7 = (long*)(*((lVar6 + 32))).operator->();
                            (**(void (**)(...))(*plVar7 + 24))(plVar7);
                            lVar6 = (*midiRequest3).operator->();
                            plVar7 = (long*)(*((lVar6 + 32))).operator->();
                            (**(void (**)(...))(*plVar7 + 64))(plVar7);
                            lVar6 = (*midiRequest3).operator->();
                            puVar8 = (uint64_t*)(*((lVar6 + 32))).operator->();
                            (**(void (**)(...))*puVar8)(puVar8, 0);
                        }
                        this_01 = Client::Instance();
                        lVar6 = (*midiRequest3).operator->();
                        this_01->OnMidiEnd(*(int*)(lVar6 + 8));
                        this_02 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_96;
                        goto LAB_1002d91ff;
                    }
                }
            }
        }
        return 1;
    }

} // namespace jag::oldscape::midi2
