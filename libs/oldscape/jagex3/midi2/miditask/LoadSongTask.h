// libs/oldscape/jagex3/midi2/miditask/LoadSongTask.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::midi2 {
    class LoadSongTask {
    public:
        // virtual methods in vtable order
        virtual ~LoadSongTask();
        virtual unsigned long Execute();
        LoadSongTask(const shared_ptr<MidiTask>& midiTask,
                     eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>& midiRequests,
                     jagex3::Js5* js51, jagex3::Js5* js52, jagex3::Js5* js53);
        unsigned long LoadRequest(ErrorCapture& errorCapture, const shared_ptr<MidiRequest>& midiRequest);

    private:
        uint8_t _unknown_8[80];
        uint8_t field_88;
        uint8_t field_89;
        uint8_t _unknown_90[6];
        fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>* field_96;
        Js5* field_104;
        Js5* field_112;
        Js5* field_120;
    };

    // 0x1002a85c0
    LoadSongTask::~LoadSongTask() {}

} // namespace jag::oldscape::midi2
