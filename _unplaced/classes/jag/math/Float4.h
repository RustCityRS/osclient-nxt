// _unplaced/classes/jag/math/Float4.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    class Float4 {
    public:
        Float4();
        Float4(Vector4T<float> const&);

        // data members, from how the methods use this: 20 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[4];
    };

} // namespace jag::math
