// libs/oldscape/jagex3/sound/wave.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "wave.h"

namespace jag::oldscape::sound {
    // 0x1002a0e20
    Wave::Wave(int arg1, int arg2)
        : callstack::Callstack(), field_8((long)arg2), field_40(false), field_4(arg1), field_32(0), field_36(arg2) {}

    // 0x1002a0e80
    Wave::Wave(int arg1, Array<signed char>&& arg2, int arg3, int arg4)
        : callstack::Callstack(), field_8(arg2), field_40(false), field_4(arg1), field_32(arg3), field_36(arg4) {}

    // 0x1002a0ee0
    Wave::Wave(int arg1, Array<signed char>&& arg2, int arg3, int arg4, bool arg5)
        : callstack::Callstack(), field_8(arg2), field_4(arg1), field_32(arg3), field_36(arg4), field_40(arg5) {}

    // 0x1002a0f50
    void Wave::Normalise(int arg1) {
        bool cVar1;
        unsigned int uVar2;
        char* pcVar4;
        unsigned long uVar5;
        uint8_t* puVar6;
        int iVar7;
        unsigned long uVar8;
        int iVar9;

        uint8_t* this_00 = &field_8;
        long lVar3 = this_00->end();
        if (lVar3 == 0) {
            iVar7 = 1;
        } else {
            uVar8 = 0;
            iVar9 = 1;
            do {
                pcVar4 = (char*)(*this_00)[uVar8];
                uVar2 = (int)*pcVar4 >> 31;
                iVar7 = ((int)*pcVar4 ^ uVar2) + uVar2;
                if (iVar7 <= iVar9) {
                    iVar7 = iVar9;
                }
                uVar8 = uVar8 + 1;
                uVar5 = this_00->end();
                iVar9 = iVar7;
            } while (uVar8 < uVar5);
        }
        lVar3 = this_00->end();
        if (lVar3 != 0) {
            uVar8 = 0;
            do {
                pcVar4 = (char*)(*this_00)[uVar8];
                cVar1 = *pcVar4;
                puVar6 = (uint8_t*)(*this_00)[uVar8];
                *puVar6 = (char)((cVar1 * arg1) / iVar7);
                uVar8 = uVar8 + 1;
                uVar5 = this_00->end();
            } while (uVar8 < uVar5);
        }
    }

    // 0x1002a1020
    Wave* Wave::Decimate(Decimator& decimator) {
        decimator.Decimate(field_8);
        int iVar2 = decimator.TransmitFreq(field_4);
        field_4 = iVar2;
        iVar2 = field_32;
        int iVar1 = field_36;
        int iVar3 = decimator.TransmitPos(iVar2);
        if (iVar2 == iVar1) {
            field_36 = iVar3;
        } else {
            field_32 = iVar3;
            iVar2 = decimator.TransmitPos(field_36);
            field_36 = iVar2;
            if (field_32 != iVar2) {
                return this;
            }
            iVar3 = field_32 - 1;
        }
        field_32 = iVar3;
        return this;
    }

} // namespace jag::oldscape::sound
