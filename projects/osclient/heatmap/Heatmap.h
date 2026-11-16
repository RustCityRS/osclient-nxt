// projects/osclient/heatmap/Heatmap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class Heatmap {
    public:
        void AddDataPoint(int arg1, int arg2);
        void Render(int arg1, int arg2, graphics::Pix32& pix32, float arg4);
        void GetHeatmapSprite(int arg1);
        void PlotHeatmapSprite(const graphics::Pix32& pix321, graphics::Pix32& pix322,
                               const jag::math::Rect<int>& rect);
        void SetupColourForCount();
        void GenerateHeatmapSprite(int arg1);
        ~Heatmap();
        static uint8_t COLOUR_FOR_COUNT[8000];

    private:
        float field_0;
        uint8_t _unknown_4[60];
        MinimenuEntry field_64;
        uint8_t _unknown_180[16284];
        int field_16464;
        uint8_t _unknown_16468[4];
    };

    // 0x10013c580
    Heatmap::~Heatmap() {
        field_8.~hash_map();
    }

} // namespace jag::oldscape
