// libs/oldscape/jagex3/dash3d/Pix3D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class Pix3D {
    public:
        // virtual methods in vtable order
        virtual ~Pix3D();
        virtual void SetRenderZoom(int, int);
        virtual void SetRenderClipping(int, int, int, int);
        virtual void ResetOrigin();
        virtual void SetOrigin(int, int);
        virtual void CalculateRenderDepth(int);
        Pix3D();
        GetColourTable();
        GetCosTable();
        GetSinTable();
        int RotateXAroundY(int, int, int, int);
        int RotateZAroundY(int, int, int, int);
        int GetRenderDepth() const;
        int InvRotateYAroundX(int, int, int, int);
        int InvRotateZAroundX(int, int, int, int);
        int InvRotateXAroundY(int, int, int, int);
        int InvRotateZAroundY(int, int, int, int);
        GetDivTable2();
        int TextureLightColour(int, int);
        void InitColourTable(double);
        GetDivTable();
        void InitTables();
        void InitColourTable(double, int, int);
        void SetTextures(shared_ptr<TextureProvider>);
        void SetZoom(int);
        int GetZoom();
        int GetXOrigin();
        int GetYOrigin();
        int GetXClip3();
        int GetBoundLeft();
        int GetBoundRight();
        int GetBoundTop();
        uint GetBoundBottom();
        void SetTrans(int);
        int GetTrans();
        void SetHClip(bool);
        void SetLowDetail(bool);
        void SetClipping(int, int, int, int);
        void SetRenderClipping();
        void SetHClip(int, int, int);
        int GetWidth();
        int GetHeight();
        void SetRenderDepth(int);
        int RotateYAroundX(int, int, int, int);
        int RotateZAroundX(int, int, int, int);
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ m_textureProvider;
        static /* 2048 bytes */ m_divTable;
        static /* 8192 bytes */ m_divTable2;
        static /* 8192 bytes */ m_sinTable;
        static /* 8192 bytes */ m_cosTable;
        static /* 262144 bytes */ m_colourTable;

        // data members, from how the methods use this: 120 bytes
        undefined** field_0; // offset 0, vtable pointer
        bool m_hClip;        // offset 8
        char _unknown_9[2];
        bool m_lowDetail;   // offset 11
        int m_trans;        // offset 12
        int m_zoom;         // offset 16
        int m_xOrigin;      // offset 20
        int m_yOrigin;      // offset 24
        int m_xClip3;       // offset 28
        uint field_32;      // offset 32
        int m_boundLeft;    // offset 36
        int m_boundRight;   // offset 40
        int m_boundTop;     // offset 44
        uint m_boundBottom; // offset 48
        char _unknown_52[4];
        undefined1 field_56; // offset 56
        char _unknown_57[31];
        int field_88;      // offset 88
        int field_92;      // offset 92
        int field_96;      // offset 96
        int field_100;     // offset 100
        int m_width;       // offset 104
        int m_height;      // offset 108
        int m_renderDepth; // offset 112
        char _unknown_116[4];
    };

    // 0x10012d520, 96 bytes, base-object constructor, inline, placed by class name and debug map
    // Pix3D::Pix3D()
    void Pix3D::Pix3D() {
        field_0 = &PTR__OptionStore_100efc098;
        m_hClip = false;
        *(undefined2*)&field_9 = 0;
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
        new (&field_56) eastl::vector<int, eastl::allocator>();
        field_100 = 0;
        m_width = 0;
        m_height = 0;
        m_renderDepth = 0;
        field_88 = 0;
        field_92 = 0;
        field_96 = 0;
        field_100 = 0;
    }

    // 0x10012d580, 32 bytes, base-object destructor, inline, placed by class name and debug map
    // Pix3D::~Pix3D()
    void Pix3D::~Pix3D() {
        field_0 = &PTR__OptionStore_100efc098;
        (&field_56)->~vector();
    }

} // namespace jag::oldscape::dash3d

namespace jag::oldscape::movement {
    // 0x10012d5a0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ExactTileDestination::ExactTileDestination(ExactTileDestination const&)
    void ExactTileDestination::ExactTileDestination(ExactTileDestination* param_1) {
        new (this) RouteDestination(param_1);
        field_0 = PTR_vtable_100ee8c68 + 16;
    }

} // namespace jag::oldscape::movement
