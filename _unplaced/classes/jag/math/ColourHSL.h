// _unplaced/classes/jag/math/ColourHSL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    class ColourHSL {
    public:
        ColourHSL(float, float, float);
        ColourHSL();

        // data members, from how the methods use this: 16 bytes
        float field_0; // offset 0
        float field_4; // offset 4
        float field_8; // offset 8
        char _unknown_12[4];
    };

} // namespace jag::math
