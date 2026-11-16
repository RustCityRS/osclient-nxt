// libs/oldscape/jagex3/midi2/midiparser.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::midi2 {
    class MidiParser {
    public:
        MidiParser();
        MidiParser(Array<unsigned char, eastl::allocator>&, ErrorCapture&);
        void SetMidi(Array<unsigned char, eastl::allocator>&, ErrorCapture&);
        void SetMidiPos(int);
        void GetMidiPos();
        void DropMidi();
        ulong GotMidi();
        void NumTracks();
        void SetTrack(int);
        void UnsetTrack(int);
        void FinishTrack();
        bool TrackFinished();
        void Reset();
        void ProcessDeltaTime(int);
        GetEvent(int);
        GetEvent2(int);
        uint GetEvent3(int, int);
        long TimeFromTick(int);
        NextTrackToPlay();
        ulong AllTracksFinished();
        void Restart(long long);
        void Resize(int, int, int, int);
        void InsertEvent(int, int, Array<signed char, eastl::allocator>&, ErrorCapture&);
        void ChangeDeltaTime(int, int, int);
        ~MidiParser();
        MidiParser(MidiParser&&);
        MidiParser* operator=(MidiParser&&);
        static /* 128 bytes */ m_msgLen; // initialised in its definition

        // data members, from how the methods use this: 184 bytes
        char _unknown_0[24];
        ulong field_24; // offset 24
        uint field_32;  // offset 32
        char _unknown_36[28];
        int field_64; // offset 64
        char _unknown_68[100];
        long field_168; // offset 168
        int m_midiPos;  // offset 176
        char _unknown_180[4];
    };

    // 0x1002d16e0, 16 bytes, complete-object destructor, inline, placed by class name
    // MidiParser::~MidiParser(): jumps straight to the base-object destructor

    // 0x1002db990, 80 bytes, base-object destructor, inline, placed by class name
    // MidiParser::~MidiParser()
    void MidiParser::~MidiParser() {
        (&field_144)->~Array();
        (&field_120)->~Array();
        (&field_96)->~Array();
        (&field_72)->~Array();
        (&field_40)->~Array();
        ~WindowSavedPosition();
    }

    // 0x1002ea100, 16 bytes, complete-object constructor, inline, placed by class name
    // MidiParser::MidiParser(MidiParser&&): jumps straight to the base-object constructor

    // 0x1002ea110, 144 bytes, inline, placed by class name
    // MidiParser::operator=(MidiParser&&)
    /* MidiParser::TEMPNAMEPLACEHOLDERVALUE(MidiParser&&) */

    MidiParser* MidiParser::operator=(MidiParser* param_1) {
        PacketJ<Array<unsigned char, eastl::allocator>>::operator=(
            (PacketJ<Array<unsigned char, eastl::allocator>>*)this, (PacketJ*)param_1);
        field_32 = param_1->field_32;
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_40, (Array*)&param_1->field_40);
        field_64 = param_1->field_64;
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_72, (Array*)&param_1->field_72);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_96, (Array*)&param_1->field_96);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_120, (Array*)&param_1->field_120);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_144, (Array*)&param_1->field_144);
        field_168 = param_1->field_168;
        m_midiPos = param_1->m_midiPos;
        return this;
    }

    // 0x1002ea1a0, 144 bytes, base-object constructor, inline, placed by class name
    // MidiParser::MidiParser(MidiParser&&)
    void MidiParser::MidiParser(MidiParser* param_1) {
        new (this) PacketJ<Array<unsigned char, eastl::allocator>>(param_1);
        field_32 = param_1->field_32;
        new (&field_40, (Array*)&param_1->field_40) Array<int, eastl::allocator>();
        field_64 = param_1->field_64;
        new (&field_72, (Array*)&param_1->field_72) Array<int, eastl::allocator>();
        new (&field_96, (Array*)&param_1->field_96) Array<int, eastl::allocator>();
        new (&field_120, (Array*)&param_1->field_120) Array<int, eastl::allocator>();
        new (&field_144, (Array*)&param_1->field_144) Array<int, eastl::allocator>();
        m_midiPos = param_1->m_midiPos;
        field_168 = param_1->field_168;
    }

} // namespace jag::oldscape::midi2

namespace jag {
    // 0x1002d05a0, 96 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::SetDataRaw(Array<unsigned char, eastl::allocator> const&)
    void
    PacketT<Array<unsigned char, eastl::allocator>>::SetDataRaw(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                Array* param_1) {
        ulong uVar1;
        void* pvVar2;
        void* pvVar3;
        size_t sVar4;

        uVar1 = param_1->end();
        Reserve(this, uVar1);
        pvVar2 = (void*)data();
        pvVar3 = (void*)param_1->data();
        sVar4 = param_1->end();
        _memcpy(pvVar2, pvVar3, sVar4);
    }

} // namespace jag
