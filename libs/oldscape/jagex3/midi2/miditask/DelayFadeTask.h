// libs/oldscape/jagex3/midi2/miditask/DelayFadeTask.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::midi2 {
    class DelayFadeTask {
    public:
        // virtual methods in vtable order
        virtual ~DelayFadeTask();
        virtual uint32_t Execute();
        DelayFadeTask(const shared_ptr<MidiTask>& midiTask, int arg2);

    private:
        uint8_t _unknown_8[80];
        uint8_t field_88;
        uint8_t field_89;
        uint8_t _unknown_90[2];
        int field_92;
        int field_96;
        uint8_t _unknown_100[4];
    };

    // 0x1002a85c0: DelayFadeTask::~DelayFadeTask() has the same machine code as LoadSongTask::~LoadSongTask()

    // 0x1002d95f0
    DelayFadeTask::DelayFadeTask(const shared_ptr<MidiTask>& midiTask, int arg2)
        : MidiTask(midiTask), field_92(0), field_96(arg2) {
        (&field_56)->assign("DelayFadeTask");
    }

    // 0x1002d9650
    uint32_t DelayFadeTask::Execute() {
        int iVar1 = field_92;
        if (iVar1 < field_96) {
            field_92 = iVar1 + 1;
        }
        return field_96 <= iVar1;
    }

} // namespace jag::oldscape::midi2
