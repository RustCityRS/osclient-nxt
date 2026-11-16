// projects/osclient/debug/widgets/ScrollBarWidget.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::widgets {
    class ScrollBarWidget {
    public:
        // virtual methods in vtable order
        virtual ~ScrollBarWidget();
        virtual void DrawContents(DrawContext& drawContext);
        virtual void LayoutOverride();
        void Value(float arg1);
        void SetThumbRelativeHeight(float arg1);
        uint8_t ThumbIsVisible() const;
        void SetThumbVisible(bool arg1);
        void MoveThumb(int arg1);
        float Value() const;
        GridRect GetThumbBounds() const;
        void RecalculateThumbBounds();
        ScrollBarWidget();

    private:
        uint64_t field_8;
        uint32_t field_16;
        uint8_t field_20;
        uint8_t _unknown_21[7];
        GridRect field_28;
        uint8_t _unknown_48[28];
        bool m_thumbVisible;
        uint8_t _unknown_77[3];
        float field_80;
        float field_84;
        GridRect m_thumbBounds;
    };

    // 0x1000602b0
    uint8_t ScrollBarWidget::ThumbIsVisible() const {
        return m_useTerrainHeight;
    }

    // 0x1000606f0
    float ScrollBarWidget::Value() const {
        return field_80;
    }

    // 0x100060710
    GridRect ScrollBarWidget::GetThumbBounds() const {
        return &field_88;
    }

    // 0x10007eb60
    ScrollBarWidget::ScrollBarWidget() : Widget(), m_thumbVisible(false), field_80(0.0), field_84(0.0) {}

} // namespace jag::oldscape::widgets

namespace jag::graphicutils {
    // 0x100060710: RenderToTextureHelper::GetQuadVBPosUV() const has the same machine code as oldscape::widgets::ScrollBarWidget::GetThumbBounds() const

} // namespace jag::graphicutils

namespace jag::graphics {
    // 0x100060710: ScriptedPointLight::GetPositionJitterOffset() const has the same machine code as oldscape::widgets::ScrollBarWidget::GetThumbBounds() const

} // namespace jag::graphics
