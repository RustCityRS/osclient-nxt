// libs/ui/components/Rectangle.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class Rectangle {
    public:
        // virtual methods in vtable order
        virtual ~Rectangle();
        virtual uint64_t GetType() const;
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        bool GetRectangleFill() const;

    private:
        uint8_t _unknown_8[80];
        int field_88;
        int field_92;
        uint32_t field_96;
        uint8_t field_100;
        uint8_t _unknown_101[11];
        ComponentOpConfig field_112;
        uint8_t _unknown_256[8];
        VisibleShadowCastingLightInfo field_264;
        uint8_t _unknown_288[104];
        bool m_rectangleFill;
    };

    // 0x1006a9040
    bool Rectangle::GetRectangleFill() const {
        return m_lowPrecision;
    }

} // namespace jag::ui
