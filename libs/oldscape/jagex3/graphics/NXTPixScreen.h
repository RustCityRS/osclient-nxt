// libs/oldscape/jagex3/graphics/NXTPixScreen.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::graphics {
    class NXTPixScreen {
    public:
        // virtual methods in vtable order
        virtual void Resize(int arg1, int arg2);
        virtual void Render(int arg1, int arg2);
        virtual void Render(int arg1, int arg2, int arg3, int arg4);
        virtual NXTRenderCanvas* GetCurrentRenderCanvas();
        virtual int GetWidth() const;
        virtual int GetHeight() const;
        uint32_t GetUIHeight() const;
        int GetUIWidth() const;
        float GetZoomValue() const;
        float GetClampedZoomValue() const;
        int GetViewportX();
        NXTPixScreen(int arg1, int arg2, int arg3, int arg4);
        void SetViewportPosition(int arg1, int arg2);
        void SetClientWindowSize(int arg1, int arg2);
        void SetMinSize(int arg1, int arg2);
        void SetSafeArea(const jag::math::Rect<int>& rect);
        void ZoomUI(float arg1);
        void CalculateUIRect();
        void UICoordFromViewportCoord(int arg1, int arg2, int& arg3, int& arg4) const;
        void UICoordFromWindowCoord(int arg1, int arg2, CoordType<UICoordSpecializer>& coordType1,
                                    CoordType<UICoordSpecializer>& coordType2) const;
        void CalculateCanvasCoords(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2,
                                   int& arg3, int& arg4) const;
        void SetSkyboxColour(jag::math::Vector4T<float> vector4);
        void SetFogParams(float arg1, float arg2);
        void SetScaledUIQuality(ScaledUIQuality scaledUIQuality);
        void UpdateCurrentRenderCanvas(dash3d::NXTRenderCanvas* nxtRenderCanvas);
        ~NXTPixScreen();

    private:
        uint8_t _unknown_8[24];
        int m_width;
        int m_height;
        bool field_40;
        bool field_41;
        bool field_42;
        uint8_t _unknown_43[5];
        uint8_t** field_48;
        ObjType* field_56;
        NXTRenderCanvas* m_pCurrentRenderCanvas;
        int m_viewportX;
        int field_76;
        int m_clientWindowSize;
        int field_84;
        float m_clampedZoomValue;
        int m_uIWidth;
        uint32_t m_uIHeight;
        uint8_t _unknown_100[16];
        float m_zoomValue;
        ScaledUIQuality m_scaledUIQuality;
        uint8_t _unknown_124[20];
        float m_fogParams;
        float field_148;
        int m_minSize;
        int field_156;
        uint8_t _unknown_160[4];
    };

    // 0x1000e31a0
    int NXTPixScreen::GetUIWidth() const {
        return m_minMapX;
    }

    // 0x1000e39e0
    float NXTPixScreen::GetZoomValue() const {
        return m_attenuationFalloff;
    }

    // 0x1000fa820
    float NXTPixScreen::GetClampedZoomValue() const {
        return m_soundSpatialSizeMax;
    }

    // 0x1000fa830
    int NXTPixScreen::GetWidth() const {
        return m_status;
    }

    // 0x1000fa840
    int NXTPixScreen::GetHeight() const {
        return *(uint32_t*)(this + 36);
    }

    // 0x10012dc00
    int NXTPixScreen::GetViewportX() {
        return m_wrapMode;
    }

    // 0x100327660
    NXTPixScreen::~NXTPixScreen() {}

} // namespace jag::oldscape::graphics

namespace jag::game {
    // 0x1000e31a0: BaseConfigTypeList::GetMaxEntryIndex() const has the same machine code as oldscape::graphics::NXTPixScreen::GetUIWidth() const

} // namespace jag::game

namespace jag::render {
    // 0x1000fa830: VertexElementDesc::hash() const has the same machine code as oldscape::graphics::NXTPixScreen::GetWidth() const

} // namespace jag::render
