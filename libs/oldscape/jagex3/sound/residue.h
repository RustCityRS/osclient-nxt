// libs/oldscape/jagex3/sound/residue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::sound {
    class Residue {
    public:
        Residue(const Residue& residue);
        void PacketDecode(Array<float>& arg1, int arg2, bool arg3, JagVorbis& jagVorbis,
                          BitUnpacker& bitUnpacker) const;
        ~Residue();
        Residue();
        Residue(Residue&& residue);

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        int field_12;
        int field_16;
        int field_20;
        uint8_t _unknown_24[8];
    };

    // 0x1002a7d90
    Residue::Residue(const Residue& residue) {
        int iVar1 = residue.field_20;
        field_16 = residue.field_16;
        field_20 = iVar1;
        uint32_t uVar2 = residue.field_4;
        uint32_t uVar3 = residue.field_8;
        iVar1 = residue.field_12;
        field_0 = residue.field_0;
        field_4 = uVar2;
        field_8 = uVar3;
        field_12 = iVar1;
        new (&field_24) Array<int>(&residue.field_24);
    }

    // 0x1002a7dc0
    Residue::~Residue() {
        field_24.~Array();
    }

    // 0x1002aa990
    Residue::Residue(Residue&& residue) {
        int iVar1 = residue.field_20;
        field_16 = residue.field_16;
        field_20 = iVar1;
        uint32_t uVar2 = residue.field_4;
        uint32_t uVar3 = residue.field_8;
        iVar1 = residue.field_12;
        field_0 = residue.field_0;
        field_4 = uVar2;
        field_8 = uVar3;
        field_12 = iVar1;
        new (&field_24) Array<int>(&residue.field_24);
    }

} // namespace jag::oldscape::sound

namespace jag::game {
    // 0x1002a7dc0: LocationAudioProperties::~LocationAudioProperties() has the same machine code as oldscape::sound::Residue::~Residue()

} // namespace jag::game
