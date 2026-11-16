// libs/oldscape/jagex3/midi2/midinote.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag::oldscape::midi2 {
    class MidiNote {
    public:
        // virtual methods in vtable order
        virtual ~MidiNote();
        void DropData();
        MidiNote(const MidiNote& midiNote);
        MidiNote();

    private:
        uint8_t _unknown_8[16];
        uint64_t field_24;
        uint32_t field_32;
        uint8_t _unknown_36[52];
        uint64_t field_88;
        uint64_t field_96;
        uint64_t field_104;
        uint64_t field_112;
        uint64_t field_120;
        uint8_t _unknown_128[4];
        uint64_t field_132;
        uint64_t field_140;
        uint8_t _unknown_148[20];
        uint64_t field_168;
    };

    // 0x100009e70: MidiNote::DropData() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1002dbaf0
    MidiNote::MidiNote(const MidiNote& midiNote)
        : Linkable<MidiNote>(midiNote), field_32(midiNote.field_32), field_40(&midiNote.field_40),
          field_56(&midiNote.field_56), field_72(&midiNote.field_72) {
        uint64_t uVar1 = midiNote.field_88;
        uint64_t uVar2 = midiNote.field_96;
        uint64_t uVar3 = midiNote.field_104;
        uint64_t uVar4 = midiNote.field_112;
        uint64_t uVar5 = midiNote.field_120;
        uint64_t uVar6 = *(uint64_t*)&midiNote.field_128;
        uint64_t uVar7 = midiNote.field_140;
        field_132 = midiNote.field_132;
        field_140 = uVar7;
        field_120 = uVar5;
        *(uint64_t*)&field_128 = uVar6;
        field_104 = uVar3;
        field_112 = uVar4;
        field_88 = uVar1;
        field_96 = uVar2;
        new (&field_152) shared_ptr(&midiNote.field_152);
        field_168 = midiNote.field_168;
    }

    // 0x1002dbca0
    MidiNote::~MidiNote() {
        field_152.~shared_ptr();
        field_72.~shared_ptr();
        field_56.~shared_ptr();
        field_40.~shared_ptr();
    }

    // 0x1002ea450
    MidiNote::MidiNote() : Linkable<MidiNote>(), field_32(0) {
        new (&field_40) shared_ptr();
        new (&field_56) shared_ptr();
        new (&field_72) shared_ptr();
        field_132 = 0;
        field_140 = 0;
        field_120 = 0;
        *(uint64_t*)&field_128 = 0;
        field_104 = 0;
        field_112 = 0;
        field_88 = 0;
        field_96 = 0;
        new (&field_152) shared_ptr();
        field_168 = 0;
    }

} // namespace jag::oldscape::midi2
