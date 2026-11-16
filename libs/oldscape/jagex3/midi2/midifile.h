// libs/oldscape/jagex3/midi2/midifile.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::midi2 {
    class MidiFile {
    public:
        class PatchNoteSet;
        MidiFile(Array<unsigned char>& arg1);
        auto Load(jagex3::Js5& js5, int arg2, int arg3);
        MidiFile(PacketJ<Array<unsigned char>>& packetJ);
        auto Load(jagex3::Js5& js5, int arg2);
        auto Load(jagex3::Js5& js5, eastl::string& str1, eastl::string& str2);
        auto Load(jagex3::Js5& js5, eastl::string& str);
        ~MidiFile();

        uint8_t _unknown_0[64];
    };

    class MidiFile::PatchNoteSet {
    public:
        PatchNoteSet(int arg1);
        PatchNoteSet();

    private:
        int field_0;
        uint8_t _unknown_4[12];
    };

    // 0x1002e4020
    MidiFile::~MidiFile() {
        field_56.~Array();
    }

    // 0x1002e4440
    MidiFile::PatchNoteSet::PatchNoteSet(int arg1) : field_0(arg1) {}

    // 0x1002e46c0
    MidiFile::PatchNoteSet::PatchNoteSet() : field_0(0) {}

} // namespace jag::oldscape::midi2

namespace jag {
    // 0x1002e4050
    oldscape::midi2::MidiFile*
    placement_new<oldscape::midi2::MidiFile, Array<unsigned char>&>(void* arg1, Array<unsigned char>& arg2) {
        new (arg1) oldscape::midi2::MidiFile(arg2);
        return arg1;
    }

    // 0x1002e4070
    ref_counter_shared<oldscape::midi2::MidiFile>*
    placement_new<ref_counter_shared<oldscape::midi2::MidiFile>, int, oldscape::midi2::MidiFile*&>(
        void* arg1, int&& arg2, oldscape::midi2::MidiFile*& arg3) {
        new (arg1) ref_counter_shared<oldscape::midi2::MidiFile>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e40a0
    ref_counter_shared<oldscape::midi2::MidiFile>::ref_counter_shared(unsigned long arg1,
                                                                      oldscape::midi2::MidiFile* midiFile)
        : ref_counter_base() {}

    // 0x1002e40e0
    void ref_counter_shared<oldscape::midi2::MidiFile>::DeleteData() {
        ref_counter_shared<oldscape::midi2::MidiFile> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((MidiFile*)((long)&(this[3]._vptr)->_dtor + lVar2))->~MidiFile();
                    prVar1 = (ref_counter_shared<oldscape::midi2::MidiFile> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 80;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag
