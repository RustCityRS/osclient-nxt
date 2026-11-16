// projects/osclient/minimap/Minimap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::minimap {
    class Minimap {
    public:
        void SetLevel(int);
        Minimap();
        ~Minimap();
        void Destroy();
        char TryLoadResources(shared_ptr<Array<graphics::Pix8, eastl::allocator>>, graphics::NXTPixToolkit*,
                              defaults::GraphicsDefaults, jagex3::Js5*);
        void SetDotStyles(shared_ptr<jstring::PixfontGeneric>);
        void SetDotStyle(MiniDotCategory, unsigned int, unsigned int, int);
        void Redraw();
        void ResizeBuffer(int);
        int GetMinimapBufferSize();
        void BuildBuffer(int, dash3d::world*);
        void DrawDetail(int, int, int, int, int, int, int, dash3d::world*);
        void AddMelIcon(int, int, int, int);
        void DeleteIcons(configdecoder::LocType*, int, int, int);
        void SetZoom(dash3d::world*, int, int);
        ulong Draw(shared_ptr<rs2lib::IfType> const&, int, int, int, int, int, int, int);
        void DrawTile(int, int, int, int, int, dash3d::EntityHighlight const&, rs2lib::InterfaceGraphicMask const&);
        void DrawDot(int, int, int, int, int, graphics::Pix32*, rs2lib::InterfaceGraphicMask const&);
        void DrawDotWithString(int, int, int, int, int, MiniDotCategory, eastl::string,
                               rs2lib::InterfaceGraphicMask const&);
        void DrawArrow(int, int, int, int, int, graphics::Pix32*, rs2lib::InterfaceGraphicMask const&);
        void CompassDraw(shared_ptr<rs2lib::IfType> const&, int, int, int, int);
        void DrawString(int, int, int, int, int, unsigned int, eastl::string, rs2lib::InterfaceGraphicMask const&);
        void GlMinimap(shared_ptr<rs2lib::IfType> const&, int, int, bool);
        GetDotStyle(MiniDotCategory);
        void SetDotVisible(MiniDotCategory, bool);
        bool GetDotVisible(MiniDotCategory);
        void SetDrawDisplayname(MiniDotCategory, bool);
        bool GetDrawDisplayname(MiniDotCategory);
        void SetZoomable(bool);
        GetZoomable();
        int GetZoom();
        void SetIconZoomLimit(int);
        int GetIconZoomLimit();
        GetMapEdgeArrow();
        int GetLevel();
        void ResetIcons();
        GetFlagCoord(int);
        void SetToggle(int);

        // data members, from how the methods use this: 26128 bytes
        undefined8 field_0; // offset 0
        undefined1 field_8; // offset 8
        char _unknown_9[3];
        int m_level;         // offset 12
        undefined1 field_16; // offset 16
        char _unknown_17[25655];
        undefined1 field_25672; // offset 25672
        char _unknown_25673[47];
        int m_zoom; // offset 25720
        char _unknown_25724[60];
        int m_toggle;    // offset 25784
        bool m_zoomable; // offset 25788
        char _unknown_25789[3];
        int m_iconZoomLimit; // offset 25792
        char _unknown_25796[260];
        undefined8** field_26056; // offset 26056
        char _unknown_26064[64];
    };

    // 0x100069c60, 16 bytes, inline, placed by class name
    // Minimap::GetMinimapBufferSize()
    int Minimap::GetMinimapBufferSize() {
        return m_zoom * 104 + 96;
    }

    // 0x1000b77f0, 16 bytes, inline, placed by class name and debug map
    // Minimap::SetZoomable(bool)
    void Minimap::SetZoomable(bool param_1) {
        m_zoomable = param_1;
    }

    // 0x1000b7800, 16 bytes, inline, placed by class name and debug map
    // Minimap::GetZoomable()
    undefined1 Minimap::GetZoomable() {
        return m_zoomable;
    }

    // 0x1000b7860, 16 bytes, inline, placed by class name
    // Minimap::GetZoom()
    int Minimap::GetZoom() {
        return m_zoom;
    }

    // 0x1000b7870, 16 bytes, inline, placed by class name
    // Minimap::SetIconZoomLimit(int)
    void Minimap::SetIconZoomLimit(int param_1) {
        m_iconZoomLimit = param_1;
    }

    // 0x1000b7880, 16 bytes, inline, placed by class name
    // Minimap::GetIconZoomLimit()
    int Minimap::GetIconZoomLimit() {
        return m_iconZoomLimit;
    }

    // 0x1000da740, 16 bytes, inline, placed by class name
    // Minimap::GetMapEdgeArrow()
    undefined1* Minimap::GetMapEdgeArrow() {
        return &field_26080;
    }

    // 0x1000e5f70, 48 bytes, inline, placed by class name
    // Minimap::ResetIcons()
    void Minimap::ResetIcons() {
        int local_c;

        local_c = 0;
        (&field_16, &local_c)->fill();
    }

    // 0x10010cfc0, 48 bytes, inline, placed by class name
    // Minimap::GetFlagCoord(int)
    Minimap* Minimap::GetFlagCoord(int param_1) {
        int in_EDX;
        undefined4 in_register_00000034;

        new (this) rs2lib::CoordGrid(in_EDX, *(int*)CONCAT44(in_register_00000034, param_1),
                                     ((int*)CONCAT44(in_register_00000034, param_1))[1]);
        return this;
    }

    // 0x100112540, 16 bytes, inline, placed by class name
    // Minimap::SetToggle(int)
    void Minimap::SetToggle(int param_1) {
        m_toggle = param_1;
    }

} // namespace jag::oldscape::minimap
