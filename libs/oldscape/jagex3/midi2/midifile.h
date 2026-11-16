// libs/oldscape/jagex3/midi2/midifile.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::midi2 {
    class MidiFile {
    public:
        class PatchNoteSet;
        MidiFile(Array<unsigned char, eastl::allocator>&);
        MidiFile* Load(jagex3::Js5&, int, int);
        MidiFile(PacketJ<Array<unsigned char, eastl::allocator>>&);
        MidiFile* Load(jagex3::Js5&, int);
        Js5* Load(jagex3::Js5&, eastl::string&, eastl::string&);
        Js5* Load(jagex3::Js5&, eastl::string&);
        ~MidiFile();

        // data members, from how the methods use this: 64 bytes
        char _unknown_0[64];
    };

    class MidiFile::PatchNoteSet {
    public:
        PatchNoteSet(int);
        PatchNoteSet();

        // data members, from how the methods use this: 16 bytes
        int field_0; // offset 0
        char _unknown_4[12];
    };

    // 0x1002e4010, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // MidiFile::~MidiFile(): jumps straight to the base-object destructor

    // 0x1002e4020, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // MidiFile::~MidiFile()
    void MidiFile::~MidiFile() {
        (&field_56)->~Array();
        ~hash_map();
    }

    // 0x1002e4430, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // MidiFile::PatchNoteSet::PatchNoteSet(int): jumps straight to the base-object constructor

    // 0x1002e4440, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // MidiFile::PatchNoteSet::PatchNoteSet(int)
    void MidiFile::PatchNoteSet::PatchNoteSet(int param_1) {
        field_0 = param_1;
        new (&field_8) std::bitset<128ul>();
    }

    // 0x1002e46b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // MidiFile::PatchNoteSet::PatchNoteSet(): jumps straight to the base-object constructor

    // 0x1002e46c0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // MidiFile::PatchNoteSet::PatchNoteSet()
    void MidiFile::PatchNoteSet::PatchNoteSet() {
        field_0 = 0;
        new (&field_8) std::bitset<128ul>();
    }

} // namespace jag::oldscape::midi2

namespace jag {
    // 0x1002e4050, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::midi2::MidiFile* placement_new<oldscape::midi2::MidiFile, Array<unsigned char, eastl::allocator>&>(void*, Array<unsigned char, eastl::allocator>&)
    MidiFile* placement_new<oldscape::midi2::MidiFile, Array<unsigned char, eastl::allocator>&>(void* param_1,
                                                                                                Array* param_2) {
        oldscape::midi2::MidiFile::MidiFile(param_1, param_2);
        return param_1;
    }

    // 0x1002e4070, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::midi2::MidiFile>* placement_new<ref_counter_shared<oldscape::midi2::MidiFile>, int, oldscape::midi2::MidiFile*&>(void*, int&&, oldscape::midi2::MidiFile*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::midi2::MidiFile>, int, oldscape::midi2::MidiFile*&>(
        void* param_1, int* param_2, MidiFile** param_3) {
        ref_counter_shared<oldscape::midi2::MidiFile>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002e4090, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::midi2::MidiFile>::ref_counter_shared(unsigned long, oldscape::midi2::MidiFile*): jumps straight to the base-object constructor

    // 0x1002e40a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::midi2::MidiFile>::ref_counter_shared(unsigned long, oldscape::midi2::MidiFile*)
    void ref_counter_shared<oldscape::midi2::MidiFile>::ref_counter_shared(ulong param_1, MidiFile* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee76c8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(MidiFile**)(this + 24) = param_2;
    }

    // 0x1002e40e0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::midi2::MidiFile>::DeleteData()
    void ref_counter_shared<oldscape::midi2::MidiFile>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~MidiFile();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 80;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag
