// libs/oldscape/jagex3/sound/residue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::sound {
    class Residue {
    public:
        Residue(Residue const&);
        void PacketDecode(Array<float, eastl::allocator>&, int, bool, JagVorbis&, BitUnpacker&) const;
        ~Residue();
        Residue();
        Residue(Residue&&);

        // data members, from how the methods use this: 32 bytes
        undefined4 field_0; // offset 0
        undefined4 field_4; // offset 4
        undefined4 field_8; // offset 8
        int field_12;       // offset 12
        int field_16;       // offset 16
        int field_20;       // offset 20
        char _unknown_24[8];
    };

    // 0x10029c750, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Residue::Residue(Residue const&): jumps straight to the base-object constructor

    // 0x10029cb60, 16 bytes, complete-object destructor, inline, placed by class name
    // Residue::~Residue(): jumps straight to the base-object destructor

    // 0x1002a7d90, 48 bytes, base-object constructor, inline, placed by class name
    // Residue::Residue(Residue const&)
    void Residue::Residue(Residue* param_1) {
        int iVar1;
        undefined4 uVar2;
        undefined4 uVar3;

        iVar1 = param_1->field_20;
        field_16 = param_1->field_16;
        field_20 = iVar1;
        uVar2 = param_1->field_4;
        uVar3 = param_1->field_8;
        iVar1 = param_1->field_12;
        field_0 = param_1->field_0;
        field_4 = uVar2;
        field_8 = uVar3;
        field_12 = iVar1;
        new (&field_24, (Array*)&param_1->field_24) Array<int, eastl::allocator>();
    }

    // 0x1002a7dc0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Residue::~Residue()
    /* game::LocationAudioProperties::~LocationAudioProperties() */

    void game::LocationAudioProperties::~LocationAudioProperties() {
        (&field_24)->~Array();
    }

    // 0x1002aa980, 16 bytes, complete-object constructor, inline, placed by class name
    // Residue::Residue(Residue&&): jumps straight to the base-object constructor

    // 0x1002aa990, 48 bytes, base-object constructor, inline, placed by class name
    // Residue::Residue(Residue&&)
    void Residue::Residue(Residue* param_1) {
        int iVar1;
        undefined4 uVar2;
        undefined4 uVar3;

        iVar1 = param_1->field_20;
        field_16 = param_1->field_16;
        field_20 = iVar1;
        uVar2 = param_1->field_4;
        uVar3 = param_1->field_8;
        iVar1 = param_1->field_12;
        field_0 = param_1->field_0;
        field_4 = uVar2;
        field_8 = uVar3;
        field_12 = iVar1;
        new (&field_24, (Array*)&param_1->field_24) Array<int, eastl::allocator>();
    }

} // namespace jag::oldscape::sound

namespace jag::game {
    // 0x10029cb60: the linker folded this into oldscape::sound::Residue::~Residue(), which has identical code
    LocationAudioProperties::~LocationAudioProperties();

    // 0x1002a7dc0: the linker folded this into oldscape::sound::Residue::~Residue(), which has identical code
    LocationAudioProperties::~LocationAudioProperties();

} // namespace jag::game
