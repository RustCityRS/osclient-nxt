// libs/oldscape/jagex3/midi2/midimixer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::midi2 {
    class MidiMixer {
    public:
        // virtual methods in vtable order
        virtual ~MidiMixer();
        virtual auto SubstreamStart();
        virtual auto SubstreamNext();
        virtual uint64_t SelfMixCost();
        virtual void DoMix(Array<int>& arg1, int arg2, int arg3);
        virtual void PretendToMix(int arg1);
        MidiMixer(MidiPlayer& midiPlayer);
        void DoMix2(MidiNote& midiNote, Array<int>& arg2, int arg3, int arg4, int arg5);
        void PretendToMix2(MidiNote& midiNote, int arg2);

    private:
        uint8_t _unknown_8[40];
        uint32_t field_48;
        uint8_t field_52;
        uint8_t _unknown_53[43];
        Mixer field_96;
        uint64_t field_248;
        MidiPlayer* field_256;
        uint64_t field_264;
    };

    // 0x1002dc470
    MidiMixer::~MidiMixer() {
        field_96->~Mixer();
        field_72.~SharedPtrList();
    }

} // namespace jag::oldscape::midi2
