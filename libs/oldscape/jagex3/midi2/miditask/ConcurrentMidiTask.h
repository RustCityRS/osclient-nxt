// libs/oldscape/jagex3/midi2/miditask/ConcurrentMidiTask.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::midi2 {
    class ConcurrentMidiTask {
    public:
        // virtual methods in vtable order
        virtual ~ConcurrentMidiTask();
        virtual Execute();
        ConcurrentMidiTask(shared_ptr<MidiTask> const&, eastl::vector<shared_ptr<MidiTask>, eastl::allocator>);

        // data members, from how the methods use this: 104 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[80];
        undefined1 field_88; // offset 88
        undefined1 field_89; // offset 89
        char _unknown_90[14];
    };

    // 0x1002d9a20, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ConcurrentMidiTask::~ConcurrentMidiTask(): jumps straight to the base-object destructor

    // 0x1002d9a30, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // ConcurrentMidiTask::~ConcurrentMidiTask()
    void ConcurrentMidiTask::~ConcurrentMidiTask() {
        ~ConcurrentMidiTask(this);
        operator_delete(this);
    }

    // 0x1002dc580, 48 bytes, base-object destructor, inline, placed by class name
    // ConcurrentMidiTask::~ConcurrentMidiTask()
    void ConcurrentMidiTask::~ConcurrentMidiTask() {
        field_0 = &PTR__ConcurrentMidiTask_100efa318;
        (&field_96)->~vector();
        ~MidiTask();
    }

} // namespace jag::oldscape::midi2
