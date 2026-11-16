// libs/oldscape/jagex3/sound/filter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::sound {
    class Filter {
    public:
        float Radius(int, int, float);
        long RGain(int, int, int);
        float Frequency(float);
        void Frequency(int, int, float);
        long RPitch(int, int, int);
        RCoeff(int, int);
        long RCoeffInt(int, int);
        int CalculateCoeffs(int, float);
        void Load(PacketJ<Array<unsigned char, eastl::allocator>>&, Envelope&);
        void LoadUncompressed(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void SaveUncompressed(PacketJ<Array<unsigned char, eastl::allocator>>&);
        Filter();
        static float /* 4 bytes */ MAX_GAIN;  // = 100.0f
        static float /* 4 bytes */ MAX_PITCH; // = 8.0f
        static /* 4 bytes */ MIN_FREQ;        // = 1107480595
        static /* 64 bytes */ m_coeff;
        static /* 64 bytes */ m_coeffInt;
        static /* 4 bytes */ m_reduceCoeff;
        static /* 8 bytes */ m_reduceCoeffInt;

        // data members, from how the methods use this: 148 bytes
        bool field_0; // offset 0
        char _unknown_1[147];
    };

    // 0x1002ac6b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Filter::Filter(): jumps straight to the base-object constructor

    // 0x1002ac6d0, 16 bytes, base-object constructor, inline, placed by class name and debug map
    // Filter::Filter()
    void Filter::Filter() {
        field_0 = true;
    }

} // namespace jag::oldscape::sound
