// libs/oldscape/jagex3/midi2/miditask/MidiTask.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::midi2 {
    class MidiTask {
    public:
        // virtual methods in vtable order
        virtual ~MidiTask();
        virtual void __pure_slot_2() = 0;
        virtual uint8_t SwitchedSong();
        auto GetCompletionTask();
        bool HasError();
        auto GetErrorMessage();
        MidiTask(const shared_ptr<MidiTask>& midiTask);
        void RaiseError(const eastl::string& str);

    private:
        uint8_t _unknown_8[80];
        uint8_t m_hasError;
        uint8_t field_89;
        uint8_t _unknown_90[6];
    };

    // 0x10011ac80: MidiTask::GetCompletionTask() has the same machine code as LocInfo::GetLocType() const

    // 0x10011cd30: MidiTask::HasError() has the same machine code as configdecoder::NPCTypeCustomisation::UsePlayerModel() const

    // 0x1002ce400
    auto MidiTask::GetErrorMessage() {
        auto result;
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        result.append_sprintf("Error in task : %s, Error message : %s", uVar1, uVar2);
        return result;
    }

    // 0x1002d8db0
    MidiTask::MidiTask(const shared_ptr<MidiTask>& midiTask) : field_8(midiTask) {

        new (&field_24) eastl::string("");
        new (&field_56) eastl::string("");
        m_hasError = 0;
        field_89 = 0;
    }

    // 0x1002d8e60
    MidiTask::~MidiTask() {
        field_8.reset();
        field_56.~basic_string();
        field_24.~basic_string();
        field_8.~shared_ptr();
    }

    // 0x1002d95d0
    void MidiTask::RaiseError(const eastl::string& str) {
        m_hasError = 1;
        field_24 = str;
    }

    // 0x1002d99e0
    uint8_t MidiTask::SwitchedSong() {
        return field_89;
    }

} // namespace jag::oldscape::midi2
