// libs/oldscape/jagex3/midi2/miditask/ClearRequestTask.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "ClearRequestTask.h"

namespace jag::oldscape::midi2 {
    // 0x1002d9100, 112 bytes, base-object constructor, placed by class name and debug map
    // ClearRequestTask::ClearRequestTask(shared_ptr<MidiTask> const&, eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&, eastl::vector<shared_ptr<MidiRequest>, eastl::allocator> const&)
    void ClearRequestTask::ClearRequestTask(shared_ptr* param_1, fixed_vector* param_2, vector* param_3) {
        new (this) MidiTask(param_1);
        field_0 = &PTR__ClearRequestTask_100efa2e8;
        field_96 = param_2;
        new (&field_104, param_3) eastl::vector<shared_ptr<MidiRequest>, eastl::allocator>();
        (&field_56, "ClearRequestTask")->assign();
    }

    // 0x1002d9180, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClearRequestTask::ClearRequestTask(shared_ptr<MidiTask> const&, eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&, eastl::vector<shared_ptr<MidiRequest>, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x1002d9190, 384 bytes, placed by class name and debug map
    // ClearRequestTask::Execute()
    undefined8 ClearRequestTask::Execute() {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        shared_ptr* this_01;
        shared_ptr* psVar3;
        Client* this_02;
        shared_ptr* psVar4;
        shared_ptr* psVar5;
        long lVar6;
        long* plVar7;
        undefined8* puVar8;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_03;

        this_00 = &field_104;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            this_01 = (shared_ptr*)this_00->HeapBeginPtr();
            psVar3 = (shared_ptr*)this_00->end();
            for (; this_01 != psVar3; this_01 = this_01 + 1) {
                psVar4 = (shared_ptr*)field_96->HeapBeginPtr();
                psVar5 = (shared_ptr*)field_96->end();
                psVar4 = std::find<shared_ptr<MidiRequest>*, shared_ptr<MidiRequest>>(psVar4, psVar5, this_01);
                bVar2 = operator==(this_01, (_func_decltype_nullptr*)0);
                this_03 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_96;
                if (bVar2) {
                LAB_1002d91ff:
                    this_03->erase(psVar4);
                } else {
                    psVar5 = (shared_ptr*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_03);
                    if (psVar4 != psVar5) {
                        lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                        lVar6 = shared_ptr<MidiPlayerMainThread>::operator->(
                            (shared_ptr<MidiPlayerMainThread>*)(lVar6 + 32));
                        if (0 < *(int*)(lVar6 + 8)) {
                            lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                            lVar6 = shared_ptr<MidiPlayerMainThread>::operator->(
                                (shared_ptr<MidiPlayerMainThread>*)(lVar6 + 32));
                            *(int*)(lVar6 + 8) = *(int*)(lVar6 + 8) + -1;
                        }
                        lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                        lVar6 = shared_ptr<MidiPlayerMainThread>::operator->(
                            (shared_ptr<MidiPlayerMainThread>*)(lVar6 + 32));
                        if (*(int*)(lVar6 + 8) == 0) {
                            lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                            plVar7 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                                (shared_ptr<MidiPlayerMainThread>*)(lVar6 + 32));
                            (**(code**)(*plVar7 + 24))(plVar7);
                            lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                            plVar7 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                                (shared_ptr<MidiPlayerMainThread>*)(lVar6 + 32));
                            (**(code**)(*plVar7 + 64))(plVar7);
                            lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                            puVar8 = (undefined8*)shared_ptr<MidiPlayerMainThread>::operator->(
                                (shared_ptr<MidiPlayerMainThread>*)(lVar6 + 32));
                            (**(code**)*puVar8)(puVar8, 0);
                        }
                        this_02 = (Client*)Client::Instance();
                        lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                        this_02->OnMidiEnd(*(int*)(lVar6 + 8));
                        this_03 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_96;
                        goto LAB_1002d91ff;
                    }
                }
            }
        }
        return 1;
    }

} // namespace jag::oldscape::midi2
