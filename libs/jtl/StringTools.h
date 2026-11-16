// libs/jtl/StringTools.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100187200
    void PacketT<Array<unsigned char>>::pStringUTF8ToCP1252(const char* str, bool arg2) {
        size_t arg2_00 = _strlen(str);
        pStringUTF8ToCP1252(this, str, arg2_00, arg2);
    }

} // namespace jag

namespace jag::stringtools {
    // 0x1002346d0
    void CP1252ToWide(unsigned char arg1) {
        uint16_t* puVar1;
        Logger* logger;
        uint16_t uVar2;
        unsigned long in_RSI;
        uint64_t in_register_00000039;

        if ((int)(((uint64_t)in_register_00000039 << 8) | (uint8_t)arg1) == 0) {
            logger = logger::default_logger();
            uVar2 = 0;
            logger->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/StringTools.h", 226,
                        "Non-cp1252 character 0 provided");
        } else {
            puVar1 = (uint16_t*)(*((array<char16_t, 256ul>*)(unsigned long)arg1))[in_RSI];
            uVar2 = *puVar1;
        }
        return uVar2;
    }

} // namespace jag::stringtools
