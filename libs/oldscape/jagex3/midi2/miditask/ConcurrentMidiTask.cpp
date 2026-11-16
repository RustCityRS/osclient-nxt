// libs/oldscape/jagex3/midi2/miditask/ConcurrentMidiTask.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "ConcurrentMidiTask.h"

namespace jag::oldscape::midi2 {
    // 0x1002d9360, 112 bytes, base-object constructor, placed by class name and debug map
    // ConcurrentMidiTask::ConcurrentMidiTask(shared_ptr<MidiTask> const&, eastl::vector<shared_ptr<MidiTask>, eastl::allocator>)
    void ConcurrentMidiTask::ConcurrentMidiTask(shared_ptr* param_1, vector* param_3) {
        new (this) MidiTask(param_1);
        field_0 = &PTR__ConcurrentMidiTask_100efa318;
        new (&field_96, param_3) eastl::vector<shared_ptr<MidiTask>, eastl::allocator>();
        (&field_56, "ConcurrentMidiTask")->assign();
    }

    // 0x1002d93e0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ConcurrentMidiTask::ConcurrentMidiTask(shared_ptr<MidiTask> const&, eastl::vector<shared_ptr<MidiTask>, eastl::allocator>): jumps straight to the base-object constructor

    // 0x1002d93f0, 480 bytes, placed by class name and debug map
    // ConcurrentMidiTask::Execute()
    undefined4 ConcurrentMidiTask::Execute() {
        undefined1* this_00;
        long lVar1;
        shared_ptr* psVar2;
        shared_ptr<MidiTask>* psVar3;
        MidiTask* this_01;
        ulong uVar4;
        bool bVar6;
        char cVar7;
        undefined4 uVar8;
        long* plVar9;
        ulong uVar10;
        eastl::string local_50[32];

        this_00 = &field_96;
        lVar1 = this_00->size();
        if (lVar1 != 0) {
            uVar10 = 0;
            do {
                psVar2 = (shared_ptr*)eastl::vector<shared_ptr<MidiTask>, eastl::allocator>::operator[](
                    (vector<shared_ptr<MidiTask>, eastl::allocator>*)this_00, uVar10);
                bVar6 = operator==(psVar2, (_func_decltype_nullptr*)0);
                if (bVar6) {
                LAB_1002d9450:
                    lVar1 = this_00->HeapBeginPtr();
                    this_00->erase((shared_ptr*)(uVar10 * 16 + lVar1));
                    uVar10 = uVar10 - 1;
                } else {
                    psVar3 = (shared_ptr<MidiTask>*)eastl::vector<shared_ptr<MidiTask>, eastl::allocator>::operator[](
                        (vector<shared_ptr<MidiTask>, eastl::allocator>*)this_00, uVar10);
                    plVar9 = (long*)shared_ptr<MidiTask>::operator->(psVar3);
                    cVar7 = (**(code**)(*plVar9 + 16))(plVar9);
                    if (cVar7 != '\0') {
                        psVar3 =
                            (shared_ptr<MidiTask>*)eastl::vector<shared_ptr<MidiTask>, eastl::allocator>::operator[](
                                (vector<shared_ptr<MidiTask>, eastl::allocator>*)this_00, uVar10);
                        this_01 = (MidiTask*)shared_ptr<MidiTask>::operator->(psVar3);
                        cVar7 = this_01->HasError();
                        if (cVar7 != '\0') {
                            psVar3 = (shared_ptr<MidiTask>*)
                                eastl::vector<shared_ptr<MidiTask>, eastl::allocator>::operator[](
                                    (vector<shared_ptr<MidiTask>, eastl::allocator>*)this_00, uVar10);
                            shared_ptr<MidiTask>::operator->(psVar3);
                            local_50->GetErrorMessage();
                            RaiseError(local_50);
                            eastl::string::~basic_string(local_50);
                            this_00->clear();
                            return 1;
                        }
                        psVar3 =
                            (shared_ptr<MidiTask>*)eastl::vector<shared_ptr<MidiTask>, eastl::allocator>::operator[](
                                (vector<shared_ptr<MidiTask>, eastl::allocator>*)this_00, uVar10);
                        shared_ptr<MidiTask>::operator->(psVar3);
                        local_50->GetCompletionTask();
                        bVar6 = operator!=((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
                        local_50->~shared_ptr();
                        if (bVar6) {
                            psVar3 = (shared_ptr<MidiTask>*)
                                eastl::vector<shared_ptr<MidiTask>, eastl::allocator>::operator[](
                                    (vector<shared_ptr<MidiTask>, eastl::allocator>*)this_00, uVar10);
                            shared_ptr<MidiTask>::operator->(psVar3);
                            local_50->GetCompletionTask();
                            this_00->push_back(local_50);
                            local_50->~shared_ptr();
                        }
                        psVar3 =
                            (shared_ptr<MidiTask>*)eastl::vector<shared_ptr<MidiTask>, eastl::allocator>::operator[](
                                (vector<shared_ptr<MidiTask>, eastl::allocator>*)this_00, uVar10);
                        plVar9 = (long*)shared_ptr<MidiTask>::operator->(psVar3);
                        field_89 = (**(code**)(*plVar9 + 24))(plVar9);
                        goto LAB_1002d9450;
                    }
                }
                uVar10 = uVar10 + 1;
                uVar4 = this_00->size();
            } while (uVar10 < uVar4);
        }
        uVar8 = this_00->empty();
        return uVar8;
    }

} // namespace jag::oldscape::midi2
