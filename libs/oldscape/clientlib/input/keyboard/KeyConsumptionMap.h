// libs/oldscape/clientlib/input/keyboard/KeyConsumptionMap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::input {
    class KeyConsumptionMap {
    public:
        UseKey(int);
        ConsumeKey(int);
        UseChar(char16_t);
        ConsumeChar(char16_t);
        GetKey(int);
        GetChar(char16_t);
        void SetKey(int, InputKeyConsumptionMode);
        void SetChar(char16_t, InputKeyConsumptionMode);
        KeyConsumptionMap();

        // data members, from how the methods use this: 440 bytes
        char _unknown_0[440];
    };

    // 0x100018680, 80 bytes, inline, placed by class name and debug map
    // KeyConsumptionMap::UseKey(int)
    undefined4 KeyConsumptionMap::UseKey(int param_1) {
        uint* puVar1;

        if (107 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("keyCode >= 0 && keyCode < KeyCode::KEYCODES_LENGTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "keyboard/KeyConsumptionMap.h",
                      91, (char*)0);
        }
        puVar1 = (uint*)std::array<InputKeyConsumptionMode, 108ul>::operator[](
            (array<InputKeyConsumptionMode, 108ul>*)this, (long)param_1);
        return CONCAT31((int3)((*puVar1 & 4294967294) >> 8), (*puVar1 & 4294967294) == 2);
    }

    // 0x1000186f0, 80 bytes, inline, placed by class name and debug map
    // KeyConsumptionMap::ConsumeKey(int)
    undefined4 KeyConsumptionMap::ConsumeKey(int param_1) {
        uint* puVar1;

        if (107 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("keyCode >= 0 && keyCode < KeyCode::KEYCODES_LENGTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "keyboard/KeyConsumptionMap.h",
                      72, (char*)0);
        }
        puVar1 = (uint*)std::array<InputKeyConsumptionMode, 108ul>::operator[](
            (array<InputKeyConsumptionMode, 108ul>*)this, (long)param_1);
        return CONCAT31((int3)((*puVar1 & 4294967293) >> 8), (*puVar1 & 4294967293) == 1);
    }

    // 0x100018890, 48 bytes, inline, placed by class name and debug map
    // KeyConsumptionMap::UseChar(char16_t)
    undefined4 KeyConsumptionMap::UseChar(wchar16 param_1) {
        uint* puVar1;
        undefined6 in_register_00000032;

        if ((uint)CONCAT62(in_register_00000032, param_1) < 192) {
            puVar1 = (uint*)std::array<InputKeyConsumptionMode, 192ul>::operator[](
                (array<InputKeyConsumptionMode, 192ul>*)&field_432, (ulong)(ushort)param_1);
            return CONCAT31((int3)((*puVar1 & 4294967294) >> 8), (*puVar1 & 4294967294) == 2);
        }
        return 0;
    }

    // 0x1000188c0, 48 bytes, inline, placed by class name and debug map
    // KeyConsumptionMap::ConsumeChar(char16_t)
    undefined4 KeyConsumptionMap::ConsumeChar(wchar16 param_1) {
        uint* puVar1;
        undefined6 in_register_00000032;

        if ((uint)CONCAT62(in_register_00000032, param_1) < 192) {
            puVar1 = (uint*)std::array<InputKeyConsumptionMode, 192ul>::operator[](
                (array<InputKeyConsumptionMode, 192ul>*)&field_432, (ulong)(ushort)param_1);
            return CONCAT31((int3)((*puVar1 & 4294967293) >> 8), (*puVar1 & 4294967293) == 1);
        }
        return 0;
    }

    // 0x100159ba0, 80 bytes, inline, placed by class name
    // KeyConsumptionMap::GetKey(int)
    undefined4 KeyConsumptionMap::GetKey(int param_1) {
        undefined4* puVar1;

        if (107 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("keyCode >= 0 && keyCode < KeyCode::KEYCODES_LENGTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "keyboard/KeyConsumptionMap.h",
                      59, (char*)0);
        }
        puVar1 = (undefined4*)std::array<InputKeyConsumptionMode, 108ul>::operator[](
            (array<InputKeyConsumptionMode, 108ul>*)this, (long)param_1);
        return *puVar1;
    }

    // 0x100159bf0, 80 bytes, inline, placed by class name
    // KeyConsumptionMap::GetChar(char16_t)
    undefined4 KeyConsumptionMap::GetChar(wchar16 param_1) {
        undefined4* puVar1;
        undefined6 in_register_00000032;

        if (191 < (uint)CONCAT62(in_register_00000032, param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("keyChar >= 0 && keyChar < MAX_CHAR",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "keyboard/KeyConsumptionMap.h",
                      65, (char*)0);
        }
        puVar1 = (undefined4*)std::array<InputKeyConsumptionMode, 192ul>::operator[](
            (array<InputKeyConsumptionMode, 192ul>*)&field_432, (ulong)(ushort)param_1);
        return *puVar1;
    }

    // 0x1001955c0, 80 bytes, inline, placed by class name
    // KeyConsumptionMap::SetKey(int, InputKeyConsumptionMode)
    void KeyConsumptionMap::SetKey(uint param_1, undefined4 param_3) {
        undefined4* puVar1;

        if (107 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("keyCode >= 0 && keyCode < KeyCode::KEYCODES_LENGTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "keyboard/KeyConsumptionMap.h",
                      47, (char*)0);
        }
        puVar1 = (undefined4*)std::array<InputKeyConsumptionMode, 108ul>::operator[](
            (array<InputKeyConsumptionMode, 108ul>*)this, (long)(int)param_1);
        *puVar1 = param_3;
    }

    // 0x100195610, 96 bytes, inline, placed by class name
    // KeyConsumptionMap::SetChar(char16_t, InputKeyConsumptionMode)
    void KeyConsumptionMap::SetChar(uint param_2, undefined4 param_3) {
        undefined4* puVar1;

        if (191 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("keyChar >= 0 && keyChar < MAX_CHAR",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "keyboard/KeyConsumptionMap.h",
                      53, (char*)0);
        }
        puVar1 = (undefined4*)std::array<InputKeyConsumptionMode, 192ul>::operator[](
            (array<InputKeyConsumptionMode, 192ul>*)&field_432, (ulong)param_2 & 65535);
        *puVar1 = param_3;
    }

    // 0x10021e9e0, 16 bytes, complete-object constructor, inline, placed by class name
    // KeyConsumptionMap::KeyConsumptionMap(): jumps straight to the base-object constructor

    // 0x10021e9f0, 96 bytes, base-object constructor, inline, placed by class name
    // KeyConsumptionMap::KeyConsumptionMap()
    void KeyConsumptionMap::KeyConsumptionMap() {
        short sVar1;
        int iVar2;

        iVar2 = 0;
        do {
            SetKey(this, iVar2, 3);
            iVar2 = iVar2 + 1;
        } while (iVar2 != 108);
        sVar1 = 0;
        do {
            SetChar(this, sVar1, 3);
            sVar1 = sVar1 + 1;
        } while (sVar1 != 192);
    }

} // namespace jag::oldscape::input
