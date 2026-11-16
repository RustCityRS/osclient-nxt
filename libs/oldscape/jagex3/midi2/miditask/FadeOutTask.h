// libs/oldscape/jagex3/midi2/miditask/FadeOutTask.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::midi2 {
    class FadeOutTask {
    public:
        // virtual methods in vtable order
        virtual ~FadeOutTask();
        virtual unsigned long Execute();
        FadeOutTask(const shared_ptr<MidiTask>& midiTask, const shared_ptr<MidiRequest>& midiRequest, int arg3);

    private:
        uint8_t _unknown_8[80];
        uint8_t field_88;
        uint8_t field_89;
        uint8_t _unknown_90[22];
        int field_112;
        uint8_t _unknown_116[4];
    };

    // 0x1002a8590
    FadeOutTask::~FadeOutTask() {
        field_96.~shared_ptr();
    }

} // namespace jag::oldscape::midi2
