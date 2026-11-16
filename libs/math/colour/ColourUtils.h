// libs/math/colour/ColourUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    class RunetekColour {
    public:
        unsigned int PackHSL(unsigned int arg1, unsigned int arg2, unsigned int arg3);
        void InitHSLToRGBTable();
        void DestroyHSLToRGBTable();
        void DestroyHSVToRGBTable();
        void HSLToRGB(unsigned short arg1);
        void HSVToRGB(unsigned int arg1);
        void InitHSVToRGBTable();
        short RGBToHSL(unsigned int arg1);
        unsigned int HSLAdjustAmbient(unsigned short arg1, unsigned short arg2);
        unsigned int HSLAdjustTint(unsigned short arg1, signed char arg2, signed char arg3, signed char arg4,
                                   unsigned char arg5);
        unsigned int GammaCorrectOSRS(unsigned int arg1, double arg2);
        static int64_t m_HSLToRGB;
        static int64_t m_HSVToRGB;

        uint8_t _unknown_0[1];
    };

    // 0x1001be200
    unsigned int RunetekColour::PackHSL(unsigned int arg1, unsigned int arg2, unsigned int arg3) {
        return (arg2 << 7 | arg1 << 10 | arg3) & 65535;
    }

    // 0x1001be230
    Vector3T<float> operator* <float>(double arg1, const Vector3T<float>& vector3) {
        uint64_t uVar1;

        ColourHSL local_18(*(float*)vector3 * (float)arg1, *(float*)(vector3 + 4) * (float)arg1,
                           (float)arg1 * *(float*)(vector3 + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

} // namespace jag::math
