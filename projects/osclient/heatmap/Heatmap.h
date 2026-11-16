// projects/osclient/heatmap/Heatmap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class Heatmap {
    public:
        void AddDataPoint(int, int);
        void Render(int, int, graphics::Pix32&, float);
        void GetHeatmapSprite(int);
        void PlotHeatmapSprite(graphics::Pix32 const&, graphics::Pix32&, jag::math::Rect<int> const&);
        void SetupColourForCount();
        void GenerateHeatmapSprite(int);
        ~Heatmap();
        static /* 8000 bytes */ COLOUR_FOR_COUNT;

        // data members, from how the methods use this: 16472 bytes
        float field_0; // offset 0
        char _unknown_4[60];
        MinimenuEntry field_64; // offset 64
        char _unknown_180[16284];
        int field_16464; // offset 16464
        char _unknown_16468[4];
    };

    // 0x10013c570, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Heatmap::~Heatmap(): jumps straight to the base-object destructor

    // 0x10013c580, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // Heatmap::~Heatmap()
    void Heatmap::~Heatmap() {
        (&field_8)->~hash_map();
    }

} // namespace jag::oldscape
