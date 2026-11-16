// libs/oldscape/jagex3/sound/filter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::sound {
    class Filter {
    public:
        float Radius(int arg1, int arg2, float arg3);
        long RGain(int arg1, int arg2, int arg3);
        float Frequency(float arg1);
        void Frequency(int arg1, int arg2, float arg3);
        long RPitch(int arg1, int arg2, int arg3);
        void RCoeff(int arg1, int arg2);
        int* RCoeffInt(int arg1, int arg2);
        int CalculateCoeffs(int arg1, float arg2);
        void Load(PacketJ<Array<unsigned char>>& packetJ, Envelope& envelope);
        void LoadUncompressed(PacketJ<Array<unsigned char>>& packetJ);
        void SaveUncompressed(PacketJ<Array<unsigned char>>& packetJ);
        Filter();
        static float MAX_GAIN;   // = 100.0f
        static float MAX_PITCH;  // = 8.0f
        static int32_t MIN_FREQ; // = 1107480595
        static uint8_t m_coeff[64];
        static std::array<int, 16ul> m_coeffInt;
        static int32_t m_reduceCoeff;
        static int64_t m_reduceCoeffInt;

    private:
        bool field_0;
        uint8_t _unknown_1[147];
    };

    // 0x1002ac6d0
    Filter::Filter() : field_0(true) {}

} // namespace jag::oldscape::sound
