// projects/osclient/environment/Fog.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class Fog {
    public:
        uint8_t Enabled() const;
        void SetEnabled(bool arg1, unsigned long long arg2);
        uint32_t FogDistance() const;
        uint32_t FogIntensity() const;
        Fog();
        void SetPixToolkit(graphics::NXTPixToolkit* nxtPixToolkit);
        void UpdateFog(unsigned long long arg1);
        void SetFogIntensity(int arg1, unsigned long long arg2);
        void SetFogIntensity(float arg1, unsigned long long arg2);
        void SetFogDistance(int arg1, unsigned long long arg2);
        void SetFogDistance(float arg1, unsigned long long arg2);
        void UpdateFogViaDrawDistance(int arg1, unsigned long long arg2);

    private:
        NXTPixToolkit* m_pPixToolkit;
        bool field_8;
        uint8_t _unknown_9[107];
        unsigned int field_116;
        uint8_t _unknown_120[4];
    };

} // namespace jag::oldscape

namespace jag::math {
    // 0x1000689d0
    double Log2<double>(double arg1) {
        return (double)_log() * 1.4426950408889634;
    }

} // namespace jag::math
