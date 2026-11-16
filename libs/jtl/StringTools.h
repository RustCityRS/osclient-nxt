// libs/jtl/StringTools.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100187200, 64 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::pStringUTF8ToCP1252(char const*, bool)
    void PacketT<Array<unsigned char, eastl::allocator>>::pStringUTF8ToCP1252(
        PacketT<Array<unsigned char, eastl::allocator>>* this, char* param_1, bool param_2) {
        size_t sVar1;

        sVar1 = _strlen(param_1);
        pStringUTF8ToCP1252(this, param_1, sVar1, param_2);
    }

} // namespace jag

namespace jag::stringtools {
    // 0x1002346d0, 80 bytes, inline, placed by __FILE__ string
    // CP1252ToWide(unsigned char)
    undefined2 CP1252ToWide(uchar param_1) {
        undefined2* puVar1;
        undefined8 uVar2;
        undefined2 uVar3;
        undefined7 in_register_00000039;

        if ((int)CONCAT71(in_register_00000039, param_1) == 0) {
            uVar2 = logger::default_logger();
            uVar3 = 0;
            logger::Logger::Log(
                uVar2, 0, 2, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/StringTools.h",
                226, "Non-cp1252 character 0 provided");
        } else {
            puVar1 = (undefined2*)std::array<char16_t, 256ul>::operator[]((ulong)param_1);
            uVar3 = *puVar1;
        }
        return uVar3;
    }

} // namespace jag::stringtools
