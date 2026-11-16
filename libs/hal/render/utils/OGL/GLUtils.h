// libs/hal/render/utils/OGL/GLUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class GLMinMagFilter {
    public:
        GLMinMagFilter(unsigned int, unsigned int, unsigned int);
        GLMinMagFilter(Filter);
        void DisableMipMapping(unsigned int);

        // data members, from how the methods use this: 16 bytes
        undefined1 field_0[12]; // offset 0
        char _unknown_12[4];
    };

} // namespace jag::render
