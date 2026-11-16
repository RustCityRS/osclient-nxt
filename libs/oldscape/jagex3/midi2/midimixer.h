// libs/oldscape/jagex3/midi2/midimixer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::midi2 {
    class MidiMixer {
    public:
        // virtual methods in vtable order
        virtual ~MidiMixer();
        virtual SubstreamStart();
        virtual SubstreamNext();
        virtual SelfMixCost();
        virtual void DoMix(Array<int, eastl::allocator>&, int, int);
        virtual void PretendToMix(int);
        MidiMixer(MidiPlayer&);
        void DoMix2(MidiNote&, Array<int, eastl::allocator>&, int, int, int);
        void PretendToMix2(MidiNote&, int);

        // data members, from how the methods use this: 272 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[40];
        undefined4 field_48; // offset 48
        undefined1 field_52; // offset 52
        char _unknown_53[43];
        Mixer field_96;        // offset 96
        undefined8 field_248;  // offset 248
        MidiPlayer* field_256; // offset 256
        undefined8 field_264;  // offset 264
    };

    // 0x1002d9940, 16 bytes, complete-object destructor, inline, placed by class name
    // MidiMixer::~MidiMixer(): jumps straight to the base-object destructor

    // 0x1002d9950, 32 bytes, deleting destructor, inline, placed by class name
    // MidiMixer::~MidiMixer()
    void MidiMixer::~MidiMixer() {
        ~MidiMixer(this);
        operator_delete(this);
    }

    // 0x1002dc470, 64 bytes, base-object destructor, inline, placed by class name
    // MidiMixer::~MidiMixer()
    void MidiMixer::~MidiMixer() {
        field_0 = &PTR__MidiMixer_100efa158;
        field_96->~Mixer();
        (&field_72)->~SharedPtrList();
        ~PCMStream();
    }

} // namespace jag::oldscape::midi2
