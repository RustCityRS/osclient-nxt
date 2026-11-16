// libs/oldscape/jagex3/js5/Js5Key.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::jagex3 {
    class Js5Key {
    public:
        unsigned int ReadInt();
        Js5Key(const eastl::string& str);
        uint8_t* GetKey(int arg1);

    private:
        long field_0;
        unsigned long field_8;
        uint8_t _unknown_16[16];
        Error field_32;
        uint8_t _unknown_36[4];
        long field_40;
        File field_48;
        uint8_t _unknown_64[304];
    };

} // namespace jag::oldscape::jagex3
