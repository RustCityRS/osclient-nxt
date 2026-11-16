// libs/oldscape/jagex3/midi2/miditask/DelayFadeTask.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::midi2 {
    class DelayFadeTask {
    public:
        // virtual methods in vtable order
        virtual ~DelayFadeTask();
        virtual Execute();
        DelayFadeTask(shared_ptr<MidiTask> const&, int);

        // data members, from how the methods use this: 104 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[80];
        undefined1 field_88; // offset 88
        undefined1 field_89; // offset 89
        char _unknown_90[2];
        int field_92; // offset 92
        int field_96; // offset 96
        char _unknown_100[4];
    };

    // 0x1002a7560: the linker folded this into LoadSongTask::~LoadSongTask(), which has identical code
    DelayFadeTask::~DelayFadeTask();

    // 0x1002a7570: the linker folded this into LoadSongTask::~LoadSongTask(), which has identical code
    DelayFadeTask::~DelayFadeTask();

    // 0x1002a85c0: the linker folded this into LoadSongTask::~LoadSongTask(), which has identical code
    DelayFadeTask::~DelayFadeTask();

    // 0x1002d95f0, 80 bytes, base-object constructor, placed by class name
    // DelayFadeTask::DelayFadeTask(shared_ptr<MidiTask> const&, int)
    void DelayFadeTask::DelayFadeTask(shared_ptr* param_1, int param_2) {
        new (this) MidiTask(param_1);
        field_0 = &PTR__StartSongTask_100efa348;
        field_92 = 0;
        field_96 = param_2;
        (&field_56, "DelayFadeTask")->assign();
    }

    // 0x1002d9640, 16 bytes, complete-object constructor, placed by class name
    // DelayFadeTask::DelayFadeTask(shared_ptr<MidiTask> const&, int): jumps straight to the base-object constructor

    // 0x1002d9650, 32 bytes, placed by class name
    // DelayFadeTask::Execute()
    undefined4 DelayFadeTask::Execute() {
        int iVar1;

        iVar1 = field_92;
        if (iVar1 < field_96) {
            field_92 = iVar1 + 1;
        }
        return CONCAT31((int3)((uint)iVar1 >> 8), field_96 <= iVar1);
    }

} // namespace jag::oldscape::midi2
