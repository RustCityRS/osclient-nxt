// libs/oldscape/jagex3/graphics/BlendMode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class BlendMode {
    public:
        BlendMode(unsigned int arg1, const char* str);
        void GetByID(unsigned int arg1);
        static BlendMode const* REPLACE;          // = &enumArray
        static BlendMode const* NORMAL;           // = &enumArray[1] /* BlendMode(1, "normal") */
        static BlendMode const* MULTIPLY;         // = &enumArray[2] /* BlendMode(2, "multiply") */
        static BlendMode const* SUBTRACTIVE;      // = &enumArray[3] /* BlendMode(3, "subtractive") */
        static BlendMode const* ADDITIVE;         // = &enumArray[4] /* BlendMode(4, "additive") */
        static BlendMode const* MULTIPLYADDITIVE; // = &enumArray[5] /* BlendMode(5, "multiplyadditive") */
        static BlendMode enumArray[6];            // initialised in its definition
    };

} // namespace jag::graphics

namespace jag::oldscape::rs2lib {
    class TempSetUsingRSeven {
    public:
        TempSetUsingRSeven(bool arg1);
        ~TempSetUsingRSeven();

        uint8_t _unknown_0[1];
    };

} // namespace jag::oldscape::rs2lib
