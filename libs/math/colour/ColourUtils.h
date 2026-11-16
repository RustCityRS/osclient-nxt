// libs/math/colour/ColourUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    class RunetekColour {
    public:
        uint PackHSL(unsigned int, unsigned int, unsigned int);
        void InitHSLToRGBTable();
        void DestroyHSLToRGBTable();
        void DestroyHSVToRGBTable();
        HSLToRGB(unsigned short);
        HSVToRGB(unsigned int);
        void InitHSVToRGBTable();
        short RGBToHSL(unsigned int);
        ushort HSLAdjustAmbient(unsigned short, unsigned short);
        uint HSLAdjustTint(unsigned short, signed char, signed char, signed char, unsigned char);
        uint GammaCorrectOSRS(unsigned int, double);
        static /* 8 bytes */ m_HSLToRGB;
        static /* 8 bytes */ m_HSVToRGB;
    };

    // 0x1001be200, 32 bytes, inline, placed by debug map only (low confidence)
    // RunetekColour::PackHSL(unsigned int, unsigned int, unsigned int)
    uint RunetekColour::PackHSL(uint param_1, uint param_2, uint param_3) {
        return (param_2 << 7 | param_1 << 10 | param_3) & 65535;
    }

    // 0x1001be230, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> operator*<float>(double, Vector3T<float> const&)
    /* Vector3T<float> TEMPNAMEPLACEHOLDERVALUE(double, Vector3T<float>
   const&) */

    undefined8 operator*(double param_1, Vector3T* param_2) {
        undefined8 uVar1;
        ColourHSL local_18;

        new (&local_18) ColourHSL(*(float*)param_2 * (float)param_1, *(float*)(param_2 + 4) * (float)param_1,
                                  (float)param_1 * *(float*)(param_2 + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

} // namespace jag::math
