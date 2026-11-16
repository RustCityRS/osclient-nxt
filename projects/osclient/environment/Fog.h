// projects/osclient/environment/Fog.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class Fog {
    public:
        Enabled() const;
        void SetEnabled(bool, unsigned long long);
        FogDistance() const;
        FogIntensity() const;
        Fog();
        void SetPixToolkit(graphics::NXTPixToolkit*);
        void UpdateFog(unsigned long long);
        void SetFogIntensity(int, unsigned long long);
        void SetFogIntensity(float, unsigned long long);
        void SetFogDistance(int, unsigned long long);
        void SetFogDistance(float, unsigned long long);
        void UpdateFogViaDrawDistance(int, unsigned long long);

        // data members, from how the methods use this: 124 bytes
        NXTPixToolkit* m_pPixToolkit; // offset 0
        bool field_8;                 // offset 8
        char _unknown_9[107];
        uint field_116; // offset 116
        char _unknown_120[4];
    };

} // namespace jag::oldscape

namespace jag::math {
    // 0x1000689d0, 32 bytes, inline, placed by debug map only (low confidence)
    // double Log2<double>(double)
    double Log2<double>(double param_1) {
        return (double)_log() * 1.4426950408889634;
    }

} // namespace jag::math
