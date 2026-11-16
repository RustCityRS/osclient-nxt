// libs/oldscape/jagex3/midi2/miditask/ClearRequestTask.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::midi2 {
    class ClearRequestTask {
    public:
        // virtual methods in vtable order
        virtual ~ClearRequestTask();
        virtual Execute();
        ClearRequestTask(shared_ptr<MidiTask> const&,
                         eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                         eastl::vector<shared_ptr<MidiRequest>, eastl::allocator> const&);

        // data members, from how the methods use this: 112 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[80];
        undefined1 field_88; // offset 88
        undefined1 field_89; // offset 89
        char _unknown_90[6];
        fixed_vector* field_96; // offset 96
        char _unknown_104[8];
    };

    // 0x1002d99f0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ClearRequestTask::~ClearRequestTask(): jumps straight to the base-object destructor

    // 0x1002d9a00, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // ClearRequestTask::~ClearRequestTask()
    void ClearRequestTask::~ClearRequestTask() {
        ~ClearRequestTask(this);
        operator_delete(this);
    }

    // 0x1002dc550, 48 bytes, base-object destructor, inline, placed by class name
    // ClearRequestTask::~ClearRequestTask()
    void ClearRequestTask::~ClearRequestTask() {
        field_0 = &PTR__ClearRequestTask_100efa2e8;
        (&field_104)->~vector();
        ~MidiTask();
    }

} // namespace jag::oldscape::midi2
