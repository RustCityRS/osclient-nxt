// libs/hal/render/utils/OGL/GLUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class GLMinMagFilter {
    public:
        GLMinMagFilter(unsigned int arg1, unsigned int arg2, unsigned int arg3);
        GLMinMagFilter(unsigned int waterNormalParamsEncoding, unsigned int waterNormalParamGroup, unsigned int arg3);
        GLMinMagFilter(Filter filter);
        void DisableMipMapping(unsigned int arg1);

    private:
        uint8_t field_0[12];
        uint8_t _unknown_12[4];
    };

} // namespace jag::render
