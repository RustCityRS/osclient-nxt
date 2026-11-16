// libs/oldscape/rs2lib/worldmap/WorldmapRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib::worldmap {
    class WorldmapRenderer {
    public:
        bool IsValid() const;
        ~WorldmapRenderer();
        WorldmapRenderer(shared_ptr<Array<graphics::Pix8>>& pix8s,
                         eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>>& arg2, jagex3::Js5* js51,
                         jagex3::Js5* js52);
        void ExtractData(jagex3::Js5& js5, eastl::string str, bool arg3);
        void Reset();
        void RenderMap(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                       graphics::Pix2D& pix2D);
        uint8_t[16] GetRenderBounds(int arg1, int arg2, int arg3, int arg4);
        void GetFloatStride(int arg1, int arg2);
        void RenderMapElements(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                               eastl::hash_set<int>& hash_set1, eastl::hash_set<int>& hash_set2, int arg11, int arg12,
                               bool arg13, graphics::Pix2D& pix2D);
        void RenderOverview(int arg1, int arg2, int arg3, int arg4, eastl::hash_set<int>& hash_set, int arg6, int arg7,
                            graphics::Pix2D& pix2D);
        void CollateMapElements();
        WorldmapRenderer* GetMapElementsAtScreenCoord(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                                                      int arg7, int arg8, int arg9, int arg10);
        uint8_t* GetMapElements();
        static int64_t m_js5Time;
        static int64_t m_wmaTime;
        static int64_t m_prepSquareTime;
        static uint8_t m_comptexTime[16];

    private:
        int field_0;
        float field_4;
        uint8_t m_valid;
        uint8_t field_9;
        uint8_t _unknown_10[182];
        Js5* field_192;
        Js5* field_200;
        uint8_t _unknown_208[56];
        int field_264;
        int field_268;
        int field_272;
        int field_276;
        uint8_t _unknown_280[16];
    };

    // 0x10012bce0
    WorldmapRenderer::~WorldmapRenderer() {
        field_208.~hash_map();
        field_176.~shared_ptr();
        field_120.~hash_map();
        field_96.~Array();
        field_40.~hash_map();
        field_24.~shared_ptr();
        field_16.~unique_ptr();
    }

} // namespace jag::oldscape::rs2lib::worldmap
