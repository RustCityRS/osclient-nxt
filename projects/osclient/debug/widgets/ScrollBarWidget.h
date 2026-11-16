// projects/osclient/debug/widgets/ScrollBarWidget.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::widgets {
    class ScrollBarWidget {
    public:
        // virtual methods in vtable order
        virtual ~ScrollBarWidget();
        virtual void DrawContents(DrawContext&);
        virtual void LayoutOverride();
        void Value(float);
        void SetThumbRelativeHeight(float);
        ThumbIsVisible() const;
        void SetThumbVisible(bool);
        void MoveThumb(int);
        float Value() const;
        GridRect GetThumbBounds() const;
        void RecalculateThumbBounds();
        ScrollBarWidget();

        // data members, from how the methods use this: 108 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined4 field_16; // offset 16
        undefined1 field_20; // offset 20
        char _unknown_21[7];
        GridRect field_28; // offset 28
        char _unknown_48[28];
        bool m_thumbVisible; // offset 76
        char _unknown_77[3];
        float field_80;         // offset 80
        float field_84;         // offset 84
        GridRect m_thumbBounds; // offset 88
    };

    // 0x1000602b0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ScrollBarWidget::ThumbIsVisible() const
    /* game::StaticPointLight::GetUseTerrainHeight() const */

    undefined1 game::StaticPointLight::GetUseTerrainHeight() {
        return m_useTerrainHeight;
    }

    // 0x1000606f0, 16 bytes, inline, placed by class name
    // ScrollBarWidget::Value() const
    float ScrollBarWidget::Value() {
        return field_80;
    }

    // 0x100060710, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ScrollBarWidget::GetThumbBounds() const
    /* jag::graphics::GeometryBatch::GetBoneIDMap() */

    undefined1* jag::graphics::GeometryBatch::GetBoneIDMap() {
        return &field_88;
    }

    // 0x10007eb40, 16 bytes, complete-object constructor, inline, placed by class name
    // ScrollBarWidget::ScrollBarWidget(): jumps straight to the base-object constructor

    // 0x10007eb60, 64 bytes, base-object constructor, inline, placed by class name
    // ScrollBarWidget::ScrollBarWidget()
    void ScrollBarWidget::ScrollBarWidget() {
        _func_decltype_nullptr* in_RSI;

        new (this) Widget();
        field_0 = &PTR_destruct<highlight::NpcUID*> _100ef28e8;
        m_thumbVisible = false;
        field_80 = 0.0;
        field_84 = 0.0;
        new (m_thumbBounds, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
    }

} // namespace jag::oldscape::widgets

namespace jag::graphicutils {
    // 0x100060710: the linker folded this into oldscape::widgets::ScrollBarWidget::GetThumbBounds() const, which has identical code
    RenderToTextureHelper::GetQuadVBPosUV() const;

} // namespace jag::graphicutils

namespace jag::graphics {
    // 0x100060710: the linker folded this into oldscape::widgets::ScrollBarWidget::GetThumbBounds() const, which has identical code
    ScriptedPointLight::GetPositionJitterOffset() const;

} // namespace jag::graphics
