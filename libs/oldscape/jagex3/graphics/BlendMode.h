// libs/oldscape/jagex3/graphics/BlendMode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib {
    class TempSetUsingRSeven {
    public:
        TempSetUsingRSeven(bool);
        ~TempSetUsingRSeven();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100102490, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TempSetUsingRSeven::TempSetUsingRSeven(bool): jumps straight to the base-object constructor

    // 0x1001025f0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // TempSetUsingRSeven::~TempSetUsingRSeven(): jumps straight to the base-object destructor

} // namespace jag::oldscape::rs2lib

namespace jag::graphics {
    class BlendMode {
    public:
        BlendMode(unsigned int, char const*);
        void GetByID(unsigned int);
        static BlendMode const* /* 8 bytes */ REPLACE;     // = &enumArray
        static BlendMode const* /* 8 bytes */ NORMAL;      // = &enumArray[1] /* BlendMode(1, "normal") */
        static BlendMode const* /* 8 bytes */ MULTIPLY;    // = &enumArray[2] /* BlendMode(2, "multiply") */
        static BlendMode const* /* 8 bytes */ SUBTRACTIVE; // = &enumArray[3] /* BlendMode(3, "subtractive") */
        static BlendMode const* /* 8 bytes */ ADDITIVE;    // = &enumArray[4] /* BlendMode(4, "additive") */
        static BlendMode const*                            /* 8 bytes */
            MULTIPLYADDITIVE;                              // = &enumArray[5] /* BlendMode(5, "multiplyadditive") */
        static BlendMode /* 96 bytes */ enumArray[6];      // initialised in its definition
    };

} // namespace jag::graphics
