// libs/oldscape/jagex3/midi2/miditask/ClearRequestTask.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::midi2 {
    class ClearRequestTask {
    public:
        // virtual methods in vtable order
        virtual ~ClearRequestTask();
        virtual uint64_t Execute();
        ClearRequestTask(
            const shared_ptr<MidiTask>& midiTask,
            eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>& midiRequests1,
            const eastl::vector<shared_ptr<MidiRequest>>& midiRequests2);

    private:
        uint8_t _unknown_8[80];
        uint8_t field_88;
        uint8_t field_89;
        uint8_t _unknown_90[6];
        fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>* field_96;
        uint8_t _unknown_104[8];
    };

    // 0x1002dc550
    ClearRequestTask::~ClearRequestTask() {
        field_104.~vector();
    }

} // namespace jag::oldscape::midi2
