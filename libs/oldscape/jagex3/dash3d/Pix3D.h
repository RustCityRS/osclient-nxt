// libs/oldscape/jagex3/dash3d/Pix3D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class Pix3D {
    public:
        // virtual methods in vtable order
        virtual ~Pix3D();
        virtual void SetRenderZoom(int arg1, int arg2);
        virtual void SetRenderClipping(int arg1, int arg2, int arg3, int arg4);
        virtual void ResetOrigin();
        virtual void SetOrigin(int arg1, int arg2);
        virtual void CalculateRenderDepth(int arg1);
        Pix3D();
        array<int, _65536ul>* GetColourTable();
        array<int, _2048ul>* GetCosTable();
        array<int, _2048ul>* GetSinTable();
        int RotateXAroundY(int arg1, int arg2, int arg3, int arg4);
        int RotateZAroundY(int arg1, int arg2, int arg3, int arg4);
        int GetRenderDepth() const;
        int InvRotateYAroundX(int arg1, int arg2, int arg3, int arg4);
        int InvRotateZAroundX(int arg1, int arg2, int arg3, int arg4);
        int InvRotateXAroundY(int arg1, int arg2, int arg3, int arg4);
        int InvRotateZAroundY(int arg1, int arg2, int arg3, int arg4);
        void GetDivTable2();
        int TextureLightColour(int arg1, int arg2);
        void InitColourTable(double arg1);
        void GetDivTable();
        void InitTables();
        void InitColourTable(double arg1, int arg2, int arg3);
        void SetTextures(shared_ptr<TextureProvider> textureProvider);
        void SetZoom(int arg1);
        int GetZoom();
        int GetXOrigin();
        int GetYOrigin();
        int GetXClip3();
        int GetBoundLeft();
        int GetBoundRight();
        int GetBoundTop();
        unsigned int GetBoundBottom();
        void SetTrans(int arg1);
        int GetTrans();
        void SetHClip(bool arg1);
        void SetLowDetail(bool arg1);
        void SetClipping(int arg1, int arg2, int arg3, int arg4);
        void SetRenderClipping();
        void SetHClip(int arg1, int arg2, int arg3);
        int GetWidth();
        int GetHeight();
        void SetRenderDepth(int arg1);
        int RotateYAroundX(int arg1, int arg2, int arg3, int arg4);
        int RotateZAroundX(int arg1, int arg2, int arg3, int arg4);
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            m_textureProvider; // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()
        static uint8_t m_divTable[2048];
        static std::array<int, 2048ul> m_divTable2;
        static std::array<int, 2048ul> m_sinTable;
        static std::array<int, 2048ul> m_cosTable;
        static std::array<int, _65536ul> m_colourTable;

    private:
        bool m_hClip;
        uint8_t _unknown_9[2];
        bool m_lowDetail;
        int m_trans;
        int m_zoom;
        int m_xOrigin;
        int m_yOrigin;
        int m_xClip3;
        unsigned int field_32;
        int m_boundLeft;
        int m_boundRight;
        int m_boundTop;
        unsigned int m_boundBottom;
        uint8_t _unknown_52[36];
        int field_88;
        int field_92;
        int field_96;
        int field_100;
        int m_width;
        int m_height;
        int m_renderDepth;
        uint8_t _unknown_116[4];
    };

    // 0x10012d520
    Pix3D::Pix3D() : m_hClip(false) {
        *(uint16_t*)&field_9 = 0;
        m_lowDetail = true;
        m_trans = 0;
        m_zoom = 512;
        m_xOrigin = 0;
        m_yOrigin = 0;
        m_xClip3 = 0;
        field_32 = 0;
        m_boundLeft = 0;
        m_boundRight = 0;
        m_boundTop = 0;
        m_boundBottom = 0;
        new (&field_56) eastl::vector<int>();
        field_100 = 0;
        m_width = 0;
        m_height = 0;
        m_renderDepth = 0;
        field_88 = 0;
        field_92 = 0;
        field_96 = 0;
        field_100 = 0;
    }

    // 0x10012d580
    Pix3D::~Pix3D() {
        field_56.~vector();
    }

} // namespace jag::oldscape::dash3d

namespace jag::oldscape::movement {
    // 0x10012d5a0
    ExactTileDestination::ExactTileDestination(const ExactTileDestination& exactTileDestination)
        : RouteDestination(exactTileDestination) {}

} // namespace jag::oldscape::movement
