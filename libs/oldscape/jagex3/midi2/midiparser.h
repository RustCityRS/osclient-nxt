// libs/oldscape/jagex3/midi2/midiparser.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::midi2 {
    class MidiParser {
    public:
        MidiParser();
        MidiParser(Array<unsigned char>& arg1, ErrorCapture& errorCapture);
        void SetMidi(Array<unsigned char>& arg1, ErrorCapture& errorCapture);
        void SetMidiPos(int arg1);
        void GetMidiPos();
        void DropMidi();
        uint8_t GotMidi();
        void NumTracks();
        void SetTrack(int arg1);
        void UnsetTrack(int arg1);
        void FinishTrack();
        bool TrackFinished();
        void Reset();
        void ProcessDeltaTime(int arg1);
        uint32_t GetEvent(int arg1);
        uint64_t GetEvent2(int arg1);
        unsigned int GetEvent3(int arg1, int arg2);
        long TimeFromTick(int arg1);
        uint32_t NextTrackToPlay();
        unsigned long AllTracksFinished();
        void Restart(long long arg1);
        void Resize(int arg1, int arg2, int arg3, int arg4);
        void InsertEvent(int arg1, int arg2, Array<signed char>& arg3, ErrorCapture& errorCapture);
        void ChangeDeltaTime(int arg1, int arg2, int arg3);
        ~MidiParser();
        MidiParser(MidiParser&& midiParser);
        MidiParser* operator=(MidiParser&& midiParser);
        static int32_t m_msgLen[32]; // initialised in its definition

    private:
        uint8_t _unknown_0[24];
        unsigned long field_24;
        unsigned int field_32;
        uint8_t _unknown_36[28];
        int field_64;
        uint8_t _unknown_68[100];
        long field_168;
        int field_176;
        uint8_t _unknown_180[4];
    };

    // 0x1002db990
    MidiParser::~MidiParser() {
        field_144.~Array();
        field_120.~Array();
        field_96.~Array();
        field_72.~Array();
        field_40.~Array();
    }

    // 0x1002ea110
    MidiParser* MidiParser::operator=(MidiParser&& midiParser) {
        *this = midiParser;
        field_32 = midiParser.field_32;
        field_40 = midiParser.field_40;
        field_64 = midiParser.field_64;
        field_72 = midiParser.field_72;
        field_96 = midiParser.field_96;
        field_120 = midiParser.field_120;
        field_144 = midiParser.field_144;
        field_168 = midiParser.field_168;
        field_176 = midiParser.field_176;
        return this;
    }

    // 0x1002ea1a0
    MidiParser::MidiParser(MidiParser&& midiParser)
        : PacketJ(midiParser), field_32(midiParser.field_32), field_40(&midiParser.field_40),
          field_64(midiParser.field_64), field_72(&midiParser.field_72), field_96(&midiParser.field_96),
          field_120(&midiParser.field_120), field_144(&midiParser.field_144), field_176(midiParser.field_176),
          field_168(midiParser.field_168) {}

} // namespace jag::oldscape::midi2

namespace jag {
    // 0x1002d05a0
    void PacketT<Array<unsigned char>>::SetDataRaw(const Array<unsigned char>& arg1) {
        unsigned long arg1_00 = arg1.end();
        Reserve(this, arg1_00);
        auto pvVar1 = data();
        auto pvVar2 = arg1.data();
        size_t sVar3 = arg1.end();
        _memcpy(pvVar1, pvVar2, sVar3);
    }

} // namespace jag
