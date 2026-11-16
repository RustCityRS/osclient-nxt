// libs/oldscape/jagex3/midi2/midinote.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag::oldscape::midi2 {
    class MidiNote {
    public:
        // virtual methods in vtable order
        virtual ~MidiNote();
        DropData();
        MidiNote(MidiNote const&);
        MidiNote();

        // data members, from how the methods use this: 176 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        undefined8 field_24; // offset 24
        undefined4 field_32; // offset 32
        char _unknown_36[52];
        undefined8 field_88;  // offset 88
        undefined8 field_96;  // offset 96
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        undefined8 field_120; // offset 120
        char _unknown_128[4];
        undefined8 field_132; // offset 132
        undefined8 field_140; // offset 140
        char _unknown_148[20];
        undefined8 field_168; // offset 168
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    MidiNote::DropData();

    // 0x1002d64c0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // MidiNote::MidiNote(MidiNote const&): jumps straight to the base-object constructor

    // 0x1002d64d0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // MidiNote::~MidiNote(): jumps straight to the base-object destructor

    // 0x1002dbaf0, 256 bytes, base-object constructor, inline, placed by class name
    // MidiNote::MidiNote(MidiNote const&)
    void MidiNote::MidiNote(MidiNote* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        new (this) Linkable<MidiNote>(param_1);
        field_0 = PTR_vtable_100ee8940 + 16;
        field_32 = param_1->field_32;
        new (&field_40, (shared_ptr*)&param_1->field_40) shared_ptr<dash3d::Decor>();
        new (&field_56, (shared_ptr*)&param_1->field_56) shared_ptr<dash3d::Decor>();
        new (&field_72, (shared_ptr*)&param_1->field_72) shared_ptr<dash3d::Decor>();
        uVar1 = param_1->field_88;
        uVar2 = param_1->field_96;
        uVar3 = param_1->field_104;
        uVar4 = param_1->field_112;
        uVar5 = param_1->field_120;
        uVar6 = *(undefined8*)&param_1->field_128;
        uVar7 = param_1->field_140;
        field_132 = param_1->field_132;
        field_140 = uVar7;
        field_120 = uVar5;
        *(undefined8*)&field_128 = uVar6;
        field_104 = uVar3;
        field_112 = uVar4;
        field_88 = uVar1;
        field_96 = uVar2;
        new (&field_152, (shared_ptr*)&param_1->field_152) shared_ptr<dash3d::Decor>();
        field_168 = param_1->field_168;
    }

    // 0x1002dbc50, 32 bytes, deleting destructor, inline, placed by class name
    // MidiNote::~MidiNote()
    void MidiNote::~MidiNote() {
        ~MidiNote(this);
        operator_delete(this);
    }

    // 0x1002dbca0, 80 bytes, base-object destructor, inline, placed by class name
    // MidiNote::~MidiNote()
    void MidiNote::~MidiNote() {
        field_0 = PTR_vtable_100ee8940 + 16;
        (&field_152)->~shared_ptr();
        (&field_72)->~shared_ptr();
        (&field_56)->~shared_ptr();
        (&field_40)->~shared_ptr();
        ~Linkable();
    }

    // 0x1002ea440, 16 bytes, complete-object constructor, inline, placed by class name
    // MidiNote::MidiNote(): jumps straight to the base-object constructor

    // 0x1002ea450, 208 bytes, base-object constructor, inline, placed by class name
    // MidiNote::MidiNote()
    void MidiNote::MidiNote() {
        _func_decltype_nullptr* in_RSI;

        new (this) Linkable<MidiNote>();
        field_0 = PTR_vtable_100ee8940 + 16;
        field_32 = 0;
        new (&field_40, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_56, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_72, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_132 = 0;
        field_140 = 0;
        field_120 = 0;
        *(undefined8*)&field_128 = 0;
        field_104 = 0;
        field_112 = 0;
        field_88 = 0;
        field_96 = 0;
        new (&field_152, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_168 = 0;
    }

} // namespace jag::oldscape::midi2
