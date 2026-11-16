// libs/oldscape/jagex3/midi2/miditask/ConcurrentMidiTask.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::midi2 {
    class ConcurrentMidiTask {
    public:
        // virtual methods in vtable order
        virtual ~ConcurrentMidiTask();
        virtual uint64_t Execute();
        ConcurrentMidiTask(const shared_ptr<MidiTask>& midiTask, eastl::vector<shared_ptr<MidiTask>> midiTasks);

    private:
        uint8_t _unknown_8[80];
        eastl::string field_88;
        uint8_t field_89;
        uint8_t _unknown_90[14];
    };

    // 0x1002dc580
    ConcurrentMidiTask::~ConcurrentMidiTask() {
        field_96.~vector();
    }

} // namespace jag::oldscape::midi2
