// libs/oldscape/jagex3/midi2/miditask/LoadSongTask.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::midi2 {
    class LoadSongTask {
    public:
        // virtual methods in vtable order
        virtual ~LoadSongTask();
        virtual ulong Execute();
        LoadSongTask(shared_ptr<MidiTask> const&,
                     eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&, jagex3::Js5*,
                     jagex3::Js5*, jagex3::Js5*);
        ulong LoadRequest(ErrorCapture&, shared_ptr<MidiRequest> const&);

        // data members, from how the methods use this: 128 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[80];
        undefined1 field_88; // offset 88
        undefined1 field_89; // offset 89
        char _unknown_90[6];
        fixed_vector* field_96; // offset 96
        Js5* field_104;         // offset 104
        Js5* field_112;         // offset 112
        Js5* field_120;         // offset 120
    };

    // 0x1002a7560, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // LoadSongTask::~LoadSongTask(): jumps straight to the base-object destructor

    // 0x1002a7570, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LoadSongTask::~LoadSongTask()
    /* StartSongTask::~StartSongTask() */

    void StartSongTask::~StartSongTask() {
        ~StartSongTask(this);
        operator_delete(this);
    }

    // 0x1002a85c0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LoadSongTask::~LoadSongTask()
    /* StartSongTask::~StartSongTask() */

    void StartSongTask::~StartSongTask() {
        ~MidiTask();
    }

} // namespace jag::oldscape::midi2
