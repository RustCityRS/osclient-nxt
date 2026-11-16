// projects/osclient/minimap/Minimap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::minimap {
    class Minimap {
    public:
        void SetLevel(int arg1);
        Minimap();
        ~Minimap();
        void Destroy();
        char TryLoadResources(shared_ptr<Array<graphics::Pix8>> pix8s, graphics::NXTPixToolkit* nxtPixToolkit,
                              defaults::GraphicsDefaults graphicsDefaults, jagex3::Js5* js5);
        void SetDotStyles(shared_ptr<jstring::PixfontGeneric> pixfontGeneric);
        void SetDotStyle(MiniDotCategory miniDotCategory, unsigned int arg2, unsigned int arg3, int arg4);
        void Redraw();
        void ResizeBuffer(int arg1);
        int GetMinimapBufferSize();
        void BuildBuffer(int arg1, dash3d::world* world);
        void DrawDetail(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, dash3d::world* world);
        void AddMelIcon(int arg1, int arg2, int arg3, int arg4);
        void DeleteIcons(configdecoder::LocType* locType, int arg2, int arg3, int arg4);
        void SetZoom(dash3d::world* world, int arg2, int arg3);
        unsigned long Draw(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3, int arg4, int arg5, int arg6,
                           int arg7, int arg8);
        void DrawTile(int arg1, int arg2, int arg3, int arg4, int arg5, const dash3d::EntityHighlight& entityHighlight,
                      const rs2lib::InterfaceGraphicMask& interfaceGraphicMask);
        void DrawDot(int arg1, int arg2, int arg3, int arg4, int arg5, graphics::Pix32* pix32,
                     const rs2lib::InterfaceGraphicMask& interfaceGraphicMask);
        void DrawDotWithString(int arg1, int arg2, int arg3, int arg4, int arg5, MiniDotCategory miniDotCategory,
                               eastl::string str, const rs2lib::InterfaceGraphicMask& interfaceGraphicMask);
        void DrawArrow(int arg1, int arg2, int arg3, int arg4, int arg5, graphics::Pix32* pix32,
                       const rs2lib::InterfaceGraphicMask& interfaceGraphicMask);
        void CompassDraw(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3, int arg4, int arg5);
        void DrawString(int arg1, int arg2, int arg3, int arg4, int arg5, unsigned int arg6, eastl::string str,
                        const rs2lib::InterfaceGraphicMask& interfaceGraphicMask);
        void GlMinimap(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3, bool arg4);
        uint8_t[16] GetDotStyle(MiniDotCategory miniDotCategory);
        void SetDotVisible(MiniDotCategory miniDotCategory, bool arg2);
        bool GetDotVisible(MiniDotCategory miniDotCategory);
        void SetDrawDisplayname(MiniDotCategory miniDotCategory, bool arg2);
        bool GetDrawDisplayname(MiniDotCategory miniDotCategory);
        void SetZoomable(bool arg1);
        bool GetZoomable();
        unsigned int GetZoom();
        void SetIconZoomLimit(int arg1);
        int GetIconZoomLimit();
        uint8_t* GetMapEdgeArrow();
        int GetLevel();
        void ResetIcons();
        CoordGrid GetFlagCoord(int arg1);
        void SetToggle(int arg1);

    private:
        int field_0;
        int field_4;
        uint8_t field_8;
        uint8_t _unknown_9[3];
        int m_level;
        uint8_t field_16;
        uint8_t _unknown_17[25615];
        int field_25632;
        uint8_t _unknown_25636[36];
        uint8_t field_25672;
        uint8_t _unknown_25673[47];
        unsigned int m_zoom;
        uint8_t _unknown_25724[60];
        int m_toggle;
        bool m_zoomable;
        uint8_t _unknown_25789[3];
        int m_iconZoomLimit;
        uint8_t _unknown_25796[260];
        NXTPixToolkit* field_26056;
        uint8_t _unknown_26064[64];
    };

    // 0x100069c60
    int Minimap::GetMinimapBufferSize() {
        return m_zoom * 104 + 96;
    }

    // 0x1000b77f0
    void Minimap::SetZoomable(bool arg1) {
        m_zoomable = arg1;
    }

    // 0x1000b7800
    bool Minimap::GetZoomable() {
        return m_zoomable;
    }

    // 0x1000b7860
    unsigned int Minimap::GetZoom() {
        return m_zoom;
    }

    // 0x1000b7870
    void Minimap::SetIconZoomLimit(int arg1) {
        m_iconZoomLimit = arg1;
    }

    // 0x1000b7880
    int Minimap::GetIconZoomLimit() {
        return m_iconZoomLimit;
    }

    // 0x1000da740
    uint8_t* Minimap::GetMapEdgeArrow() {
        return &field_26080;
    }

    // 0x1000e5f70
    void Minimap::ResetIcons() {
        field_16.fill(0);
    }

    // 0x10010cfc0
    CoordGrid Minimap::GetFlagCoord(int arg1) {
        int in_EDX;
        uint64_t extraout_RDX;
        uint32_t in_register_00000034;
        CoordGrid CVar1;

        new (this) rs2lib::CoordGrid(in_EDX, *(int*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1),
                                     ((int*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1))[1]);
        CVar1._8_8_ = extraout_RDX;
        CVar1._0_8_ = this;
        return CVar1;
    }

    // 0x100112540
    void Minimap::SetToggle(int arg1) {
        m_toggle = arg1;
    }

} // namespace jag::oldscape::minimap
