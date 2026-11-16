// libs/oldscape/clientlib/input/keyboard/KeyConsumptionMap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::input {
    class KeyConsumptionMap {
    public:
        uint32_t UseKey(int arg1);
        uint32_t ConsumeKey(int arg1);
        uint32_t UseChar(char16_t arg1);
        uint32_t ConsumeChar(char16_t arg1);
        uint32_t GetKey(int arg1);
        uint32_t GetChar(char16_t arg1);
        void SetKey(int arg1, InputKeyConsumptionMode inputKeyConsumptionMode);
        void SetChar(char16_t arg1, InputKeyConsumptionMode inputKeyConsumptionMode);
        KeyConsumptionMap();

        uint8_t _unknown_0[440];
    };

    // 0x100018680
    uint32_t KeyConsumptionMap::UseKey(int arg1) {
        if (107 < (unsigned int)arg1) {
            LogAssert("keyCode >= 0 && keyCode < KeyCode::KEYCODES_LENGTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "keyboard/KeyConsumptionMap.h",
                      91, nullptr);
        }
        unsigned int* puVar1 = (unsigned int*)(*this)[(long)arg1];
        return (*puVar1 & 4294967294) == 2;
    }

    // 0x1000186f0
    uint32_t KeyConsumptionMap::ConsumeKey(int arg1) {
        if (107 < (unsigned int)arg1) {
            LogAssert("keyCode >= 0 && keyCode < KeyCode::KEYCODES_LENGTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "keyboard/KeyConsumptionMap.h",
                      72, nullptr);
        }
        unsigned int* puVar1 = (unsigned int*)(*this)[(long)arg1];
        return (*puVar1 & 4294967293) == 1;
    }

    // 0x100018890
    uint32_t KeyConsumptionMap::UseChar(char16_t arg1) {
        unsigned int* puVar1;
        uint64_t in_register_00000032;

        if ((unsigned int)(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1) < 192) {
            puVar1 = &field_432[(unsigned long)(unsigned short)arg1];
            return (*puVar1 & 4294967294) == 2;
        }
        return 0;
    }

    // 0x1000188c0
    uint32_t KeyConsumptionMap::ConsumeChar(char16_t arg1) {
        unsigned int* puVar1;
        uint64_t in_register_00000032;

        if ((unsigned int)(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1) < 192) {
            puVar1 = &field_432[(unsigned long)(unsigned short)arg1];
            return (*puVar1 & 4294967293) == 1;
        }
        return 0;
    }

    // 0x100159ba0
    uint32_t KeyConsumptionMap::GetKey(int arg1) {
        if (107 < (unsigned int)arg1) {
            LogAssert("keyCode >= 0 && keyCode < KeyCode::KEYCODES_LENGTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "keyboard/KeyConsumptionMap.h",
                      59, nullptr);
        }
        uint32_t* puVar1 = (uint32_t*)(*this)[(long)arg1];
        return *puVar1;
    }

    // 0x100159bf0
    uint32_t KeyConsumptionMap::GetChar(char16_t arg1) {
        uint64_t in_register_00000032;

        if (191 < (unsigned int)(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1)) {
            LogAssert("keyChar >= 0 && keyChar < MAX_CHAR",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "keyboard/KeyConsumptionMap.h",
                      65, nullptr);
        }
        uint32_t* puVar1 = &field_432[(unsigned long)(unsigned short)arg1];
        return *puVar1;
    }

    // 0x1001955c0
    void KeyConsumptionMap::SetKey(int arg1, InputKeyConsumptionMode inputKeyConsumptionMode) {
        if (107 < (unsigned int)arg1) {
            LogAssert("keyCode >= 0 && keyCode < KeyCode::KEYCODES_LENGTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "keyboard/KeyConsumptionMap.h",
                      47, nullptr);
        }
        InputKeyConsumptionMode* pIVar1 = (InputKeyConsumptionMode*)(*this)[(long)arg1];
        *pIVar1 = inputKeyConsumptionMode;
    }

    // 0x100195610
    void KeyConsumptionMap::SetChar(char16_t arg1, InputKeyConsumptionMode inputKeyConsumptionMode) {
        uint64_t in_register_00000032;

        if (191 < (unsigned int)(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1)) {
            LogAssert("keyChar >= 0 && keyChar < MAX_CHAR",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "keyboard/KeyConsumptionMap.h",
                      53, nullptr);
        }
        InputKeyConsumptionMode* pIVar1 = &field_432[(unsigned long)(unsigned short)arg1];
        *pIVar1 = inputKeyConsumptionMode;
    }

    // 0x10021e9f0
    KeyConsumptionMap::KeyConsumptionMap() {
        int arg1_00 = 0;
        do {
            SetKey(arg1_00, 3);
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 108);
        char16_t arg1 = L'\0';
        do {
            SetChar(arg1, 3);
            arg1 = arg1 + L'\x01';
        } while (arg1 != L'À');
    }

} // namespace jag::oldscape::input
