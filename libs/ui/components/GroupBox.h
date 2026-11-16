// libs/ui/components/GroupBox.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class GroupBox {
    public:
        // virtual methods in vtable order
        virtual ~GroupBox();
        virtual void GetType() const;
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual void SetMargin(Component::MarginType marginType, Margin margin);
        virtual Margin GetMargin(Component::MarginType marginType) const;
        virtual bool SupportsMargin(Component::MarginType optionClient) const;
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        GroupBox();
        void DrawContainer(graphics::RT7Core* rt7Core, int arg2, int arg3, int arg4, int arg5);
        void DrawContents(InterfaceManager* interfaceManager, int arg2, int arg3, int arg4, int arg5, float arg6);
        void DrawLabel(graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                       graphics::FontHelpers* fontHelpers, int arg4, int arg5);
        void SetHeaderLayout(unsigned char arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4,
                             HeaderAlignment headerAlignment);
        void ConvertToInteractableArea(int& arg1, int& arg2, int& arg3, int& arg4, int& arg5, int& arg6) const;
        int GetContentHeaderOffset() const;

    private:
        unsigned short field_8;
        unsigned short field_10;
        uint8_t _unknown_12[76];
        int field_88;
        int field_92;
        uint32_t field_96;
        uint8_t field_100;
        uint8_t _unknown_101[323];
        EnumOptionToggle field_424;
        EnumOptionToggle field_428;
        ShaderVariablePrecision field_432;
        ShaderVariablePrecision field_436;
        uint8_t _unknown_440[128];
        uint8_t field_568;
        uint8_t field_569;
        uint8_t field_570;
        uint8_t field_571;
        HeaderAlignment field_572;
        uint8_t field_576;
        uint8_t field_577;
        uint8_t field_578;
        uint8_t field_579;
        uint8_t _unknown_580[4];
        TextData field_584;
        SpriteData field_648;
        SpriteData field_696;
        uint8_t _unknown_744[6515680];
    };

    // 0x100698390
    int GroupBox::GetContentHeaderOffset() const {
        return (unsigned int)field_571 + (unsigned int)field_569;
    }

    // 0x1006ad770
    void GroupBox::SetMargin(Component::MarginType marginType, Margin margin) {
        if (marginType == 0) {
            field_576 = margin.field_0;
            field_577 = margin.field_1;
            field_578 = margin.field_2;
            field_579 = margin.field_3;
            return;
        }
    }

    // 0x1006ad790
    Margin GroupBox::GetMargin(Component::MarginType marginType) const {
        Margin local_c;

        if (marginType == 0) {
            local_c.field_0 = field_576;
            local_c.field_1 = field_577;
            local_c.field_2 = field_578;
            local_c.field_3 = field_579;
        } else {
            local_c = Margin();
        }
        return local_c;
    }

    // 0x1006b2dc0
    GroupBox::~GroupBox() {
        field_696->~Sprite();
        field_648->~Sprite();
        field_584->~TextData();
    }

} // namespace jag::ui
