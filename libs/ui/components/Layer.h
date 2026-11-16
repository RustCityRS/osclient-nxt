// libs/ui/components/Layer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class Layer {
    public:
        // virtual methods in vtable order
        virtual ~Layer();
        virtual GetType() const;
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual void SetMargin(Component::MarginType, Margin);
        virtual Margin GetMargin(Component::MarginType) const;
        virtual SupportsMargin(Component::MarginType) const;
        virtual void OnResizeAnimation();
        static /* 4 bytes */ m_showNoClickThroughLayers; // = 0

        // data members, from how the methods use this: 584 bytes
        undefined** field_0; // offset 0, vtable pointer
        ushort field_8;      // offset 8
        ushort field_10;     // offset 10
        char _unknown_12[76];
        int field_88; // offset 88
        int field_92; // offset 92
        char _unknown_96[336];
        uint field_432; // offset 432
        uint field_436; // offset 436
        char _unknown_440[128];
        byte field_568; // offset 568
        byte field_569; // offset 569
        byte field_570; // offset 570
        byte field_571; // offset 571
        char _unknown_572[4];
        long* field_576; // offset 576
    };

    // 0x1006ad980, 16 bytes, inline, placed by class name and debug map
    // Layer::GetType() const
    undefined8 Layer::GetType() {
        return 19;
    }

    // 0x1006ad990, 32 bytes, inline, placed by class name and debug map
    // Layer::SetMargin(Component::MarginType, Margin)
    void Layer::SetMargin(int param_2, undefined4 param_3) {
        if (param_2 == 0) {
            field_568 = (char)param_3;
            field_569 = (char)((uint)param_3 >> 8);
            field_570 = (char)((uint)param_3 >> 16);
            field_571 = (char)((uint)param_3 >> 24);
            return;
        }
    }

    // 0x1006ad9b0, 48 bytes, inline, placed by class name and debug map
    // Layer::GetMargin(Component::MarginType) const
    Margin Layer::GetMargin(int param_2) {
        Margin local_c;

        if (param_2 == 0) {
            local_c.field_0 = field_568;
            local_c.field_1 = field_569;
            local_c.field_2 = field_570;
            local_c.field_3 = field_571;
        } else {
            new (&local_c) Margin();
        }
        return local_c;
    }

} // namespace jag::ui
