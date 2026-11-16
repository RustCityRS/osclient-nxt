// libs/oldscape/jagex3/sound/wave.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "wave.h"

namespace jag::oldscape::sound {
    // 0x1002a0e20, 80 bytes, base-object constructor, placed by class name and debug map
    // Wave::Wave(int, int)
    void Wave::Wave(int param_1, int param_2) {
        new (this) callstack::Callstack();
        new (&field_8, (long)param_2) Array<signed char, eastl::allocator>();
        field_40 = false;
        field_4 = param_1;
        field_32 = 0;
        field_36 = param_2;
    }

    // 0x1002a0e70, 16 bytes, complete-object constructor, placed by class name and debug map
    // Wave::Wave(int, int): jumps straight to the base-object constructor

    // 0x1002a0e80, 80 bytes, base-object constructor, placed by class name and debug map
    // Wave::Wave(int, Array<signed char, eastl::allocator>&&, int, int)
    void Wave::Wave(int param_1, Array* param_2, int param_3, int param_4) {
        new (this) callstack::Callstack();
        new (&field_8, param_2) Array<signed char, eastl::allocator>();
        field_40 = false;
        field_4 = param_1;
        field_32 = param_3;
        field_36 = param_4;
    }

    // 0x1002a0ed0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Wave::Wave(int, Array<signed char, eastl::allocator>&&, int, int): jumps straight to the base-object constructor

    // 0x1002a0ee0, 96 bytes, base-object constructor, placed by class name and debug map
    // Wave::Wave(int, Array<signed char, eastl::allocator>&&, int, int, bool)
    void Wave::Wave(int param_1, Array* param_2, int param_3, int param_4, bool param_5) {
        new (this) callstack::Callstack();
        new (&field_8, param_2) Array<signed char, eastl::allocator>();
        field_4 = param_1;
        field_32 = param_3;
        field_36 = param_4;
        field_40 = param_5;
    }

    // 0x1002a0f40, 16 bytes, complete-object constructor, placed by class name and debug map
    // Wave::Wave(int, Array<signed char, eastl::allocator>&&, int, int, bool): jumps straight to the base-object constructor

    // 0x1002a0f50, 208 bytes, placed by class name and debug map
    // Wave::Normalise(int)
    void Wave::Normalise(int param_1) {
        char cVar1;
        uint uVar2;
        long lVar3;
        char* pcVar4;
        ulong uVar5;
        undefined1* puVar6;
        int iVar7;
        ulong uVar8;
        int iVar9;
        undefined1* this_00;

        this_00 = &field_8;
        lVar3 = this_00->end();
        if (lVar3 == 0) {
            iVar7 = 1;
        } else {
            uVar8 = 0;
            iVar9 = 1;
            do {
                pcVar4 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)this_00, uVar8);
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
                pcVar4 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)this_00, uVar8);
                cVar1 = *pcVar4;
                puVar6 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)this_00, uVar8);
                *puVar6 = (char)((cVar1 * param_1) / iVar7);
                uVar8 = uVar8 + 1;
                uVar5 = this_00->end();
            } while (uVar8 < uVar5);
        }
    }

    // 0x1002a1020, 128 bytes, placed by class name and debug map
    // Wave::Decimate(Decimator&)
    Wave* Wave::Decimate(Decimator* param_1) {
        int iVar1;
        int iVar2;
        int iVar3;

        param_1->Decimate((Array*)&field_8);
        iVar2 = param_1->TransmitFreq(field_4);
        field_4 = iVar2;
        iVar2 = field_32;
        iVar1 = field_36;
        iVar3 = param_1->TransmitPos(iVar2);
        if (iVar2 == iVar1) {
            field_36 = iVar3;
        } else {
            field_32 = iVar3;
            iVar2 = param_1->TransmitPos(field_36);
            field_36 = iVar2;
            if (field_32 != iVar2) {
                return this;
            }
            iVar3 = field_32 + -1;
        }
        field_32 = iVar3;
        return this;
    }

} // namespace jag::oldscape::sound
