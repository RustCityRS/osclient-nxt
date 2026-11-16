// libs/oldscape/jagex3/sound/envelope.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "envelope.h"

namespace jag::oldscape::sound {
    // 0x100295d40
    Envelope::Envelope() : field_0(0), field_4(0), field_8(0), field_12(1) {
        uint8_t* this_00 = &field_40;
        field_16 = 0;
        field_20 = 0;
        field_24 = 0;
        field_28 = 0;
        field_32 = 0;
        field_36 = 0;
        new (this_00) Array<int>(2);
        uint8_t* this_01 = &field_64;
        new (this_01) Array<int>(2);
        field_36 = 2;
        uint32_t* puVar1 = (uint32_t*)(*this_00)[0];
        *puVar1 = 0;
        puVar1 = (uint32_t*)(*this_00)[1];
        *puVar1 = 65535;
        puVar1 = (uint32_t*)(*this_01)[0];
        *puVar1 = 0;
        puVar1 = (uint32_t*)(*this_01)[1];
        *puVar1 = 65535;
    }

    // 0x100295e20
    void Envelope::Load(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1 = packetJ.g1();
        field_8 = (unsigned int)bVar1;
        uint32_t uVar2 = packetJ.g4();
        field_0 = uVar2;
        uVar2 = packetJ.g4();
        field_4 = uVar2;
        LoadPoints(packetJ);
    }

    // 0x100295e60
    void Envelope::LoadPoints(PacketJ<Array<unsigned char>>& packetJ) {
        unsigned short uVar2;
        unsigned int* puVar3;
        unsigned long arg1;

        uint8_t bVar1 = packetJ.g1();
        field_36 = (unsigned int)bVar1;
        field_40.set_max_size((unsigned long)bVar1, 3);
        field_64.set_max_size((long)(int)field_36, 3);
        if (0 < (int)field_36) {
            arg1 = 0;
            do {
                uVar2 = packetJ.g2();
                puVar3 = &field_40[arg1];
                *puVar3 = (unsigned int)uVar2;
                uVar2 = packetJ.g2();
                puVar3 = &field_64[arg1];
                *puVar3 = (unsigned int)uVar2;
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)(int)field_36);
        }
    }

    // 0x100295f20
    void Envelope::LoadUncompressed(PacketJ<Array<unsigned char>>& packetJ) {
        Load(packetJ);
        uint32_t* puVar1 = &field_40[0];
        *puVar1 = 0;
        puVar1 = &field_40[(long)(int)field_36 - 1];
        *puVar1 = 65535;
        field_12 = field_8 != 0;
    }

    // 0x100295f70
    void Envelope::SaveUncompressed(PacketJ<Array<unsigned char>>& packetJ) {
        uint32_t* puVar1;
        unsigned long arg1;

        packetJ.p1<unsigned long>(field_8);
        packetJ.p4<int>(field_0);
        packetJ.p4<int>(field_4);
        packetJ.p1<unsigned long>(field_36);
        if (0 < (int)field_36) {
            arg1 = 0;
            do {
                puVar1 = &field_40[arg1];
                packetJ.p2<unsigned long>((unsigned short)*puVar1);
                puVar1 = &field_64[arg1];
                packetJ.p2<unsigned long>((unsigned short)*puVar1);
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)(int)field_36);
        }
    }

    // 0x100296020
    void Envelope::GenInit() {
        field_16 = 0;
        field_20 = 0;
        field_24 = 0;
        field_28 = 0;
        field_32 = 0;
    }

    // 0x100296040
    int Envelope::GenNext(int arg1) {
        unsigned int uVar1;
        int iVar2;
        int* piVar3;

        if (field_16 <= field_32) {
            uVar1 = field_20;
            field_20 = uVar1 + 1;
            piVar3 = &field_64[(long)(int)uVar1];
            field_28 = *piVar3 << 15;
            if ((int)field_36 <= (int)field_20) {
                field_20 = field_36 - 1;
            }
            piVar3 = &field_40[(long)(int)field_20];
            iVar2 = (int)((double)arg1 * 1.52587890625e-05 * (double)*piVar3);
            field_16 = iVar2;
            if (field_32 < iVar2) {
                piVar3 = &field_64[(long)(int)field_20];
                field_24 = (*piVar3 * 32768 - field_28) / (field_16 - field_32);
            }
        }
        iVar2 = field_28;
        field_28 = field_24 + iVar2;
        field_32 = field_32 + 1;
        return iVar2 >> 15;
    }

} // namespace jag::oldscape::sound
