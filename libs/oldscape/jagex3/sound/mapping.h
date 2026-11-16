// libs/oldscape/jagex3/sound/mapping.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::sound {
    class Mapping {
    public:
        Mapping();
        ~Mapping();
        Mapping(Mapping&& mapping);

    private:
        int field_0;
        int field_4;
        uint32_t field_8;
        uint8_t _unknown_12[36];
    };

    // 0x10029d540
    Mapping::Mapping() : field_0(0), field_4(0), field_8(0) {
        uint32_t uVar2;
        uint32_t* puVar3;
        unsigned long arg1;

        uint8_t* this_01 = &field_16;
        new (this_01) Array<int>();
        uint8_t* this_00 = &field_40;
        new (this_00) Array<int>();
        ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(16);
        int iVar1 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBit();
        if (iVar1 == 0) {
            iVar1 = 1;
        } else {
            iVar1 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(4);
            iVar1 = iVar1 + 1;
        }
        field_0 = iVar1;
        iVar1 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBit();
        if (iVar1 == 0) {
            iVar1 = 0;
        } else {
            iVar1 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(8);
            iVar1 = iVar1 + 1;
        }
        field_4 = iVar1;
        ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(2);
        if (1 < field_0) {
            uVar2 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(4);
            field_8 = uVar2;
        }
        this_01->set_max_size((long)field_0, 5);
        this_00->set_max_size((long)field_0, 5);
        if (0 < field_0) {
            arg1 = 0;
            do {
                ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(8);
                uVar2 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(8);
                puVar3 = (uint32_t*)(*this_01)[arg1];
                *puVar3 = uVar2;
                uVar2 = ((BitUnpacker*)&JagVorbis::m_staticUnpacker)->ReadBits(8);
                puVar3 = (uint32_t*)(*this_00)[arg1];
                *puVar3 = uVar2;
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)field_0);
        }
    }

    // 0x1002aa620
    Mapping::~Mapping() {
        field_40.~Array();
        field_16.~Array();
    }

    // 0x1002aaa50
    Mapping::Mapping(Mapping&& mapping) : field_8(mapping.field_8) {
        int iVar1 = mapping.field_4;
        field_0 = mapping.field_0;
        field_4 = iVar1;
        new (&field_16) Array<int>(&mapping.field_16);
        new (&field_40) Array<int>(&mapping.field_40);
    }

} // namespace jag::oldscape::sound
