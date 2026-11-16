// libs/ui/components/Layer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class Layer {
    public:
        // virtual methods in vtable order
        virtual ~Layer();
        virtual uint64_t GetType() const;
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual void SetMargin(Component::MarginType marginType, Margin margin);
        virtual Margin GetMargin(Component::MarginType marginType) const;
        virtual bool SupportsMargin(Component::MarginType optionClient) const;
        virtual void OnResizeAnimation();
        static int32_t m_showNoClickThroughLayers; // = 0

    private:
        unsigned short field_8;
        unsigned short field_10;
        uint8_t _unknown_12[76];
        int field_88;
        int field_92;
        uint8_t _unknown_96[336];
        unsigned int field_432;
        unsigned int field_436;
        uint8_t _unknown_440[128];
        uint8_t field_568;
        uint8_t field_569;
        uint8_t field_570;
        uint8_t field_571;
        uint8_t _unknown_572[4];
        long* field_576;
    };

    // 0x1006ad980
    uint64_t Layer::GetType() const {
        return 19;
    }

    // 0x1006ad990
    void Layer::SetMargin(Component::MarginType marginType, Margin margin) {
        if (marginType == 0) {
            field_568 = margin.field_0;
            field_569 = margin.field_1;
            field_570 = margin.field_2;
            field_571 = margin.field_3;
            return;
        }
    }

    // 0x1006ad9b0
    Margin Layer::GetMargin(Component::MarginType marginType) const {
        Margin local_c;

        if (marginType == 0) {
            local_c.field_0 = field_568;
            local_c.field_1 = field_569;
            local_c.field_2 = field_570;
            local_c.field_3 = field_571;
        } else {
            local_c = Margin();
        }
        return local_c;
    }

} // namespace jag::ui
