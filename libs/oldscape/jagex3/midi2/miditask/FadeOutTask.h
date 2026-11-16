// libs/oldscape/jagex3/midi2/miditask/FadeOutTask.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::midi2 {
    class FadeOutTask {
    public:
        // virtual methods in vtable order
        virtual ~FadeOutTask();
        virtual ulong Execute();
        FadeOutTask(shared_ptr<MidiTask> const&, shared_ptr<MidiRequest> const&, int);

        // data members, from how the methods use this: 120 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[80];
        undefined1 field_88; // offset 88
        undefined1 field_89; // offset 89
        char _unknown_90[6];
        shared_ptr field_96; // offset 96
        int field_112;       // offset 112
        char _unknown_116[4];
    };

    // 0x1002a7530, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // FadeOutTask::~FadeOutTask(): jumps straight to the base-object destructor

    // 0x1002a7540, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // FadeOutTask::~FadeOutTask()
    void FadeOutTask::~FadeOutTask() {
        ~FadeOutTask(this);
        operator_delete(this);
    }

    // 0x1002a8590, 48 bytes, base-object destructor, inline, placed by class name
    // FadeOutTask::~FadeOutTask()
    void FadeOutTask::~FadeOutTask() {
        field_0 = &PTR__FadeOutTask_100ef9400;
        field_96->~shared_ptr();
        ~MidiTask();
    }

} // namespace jag::oldscape::midi2
