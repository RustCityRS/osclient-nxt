// libs/ui/components/Button.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class Button {
    public:
        // virtual methods in vtable order
        virtual ~Button();
        virtual uint64_t GetType() const;
        virtual void SetEnabled(bool arg1);
        virtual void MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                               bool arg5, bool arg6, bool arg7);
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void MainDrawClipped(const ComponentDependencies& componentDependencies);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual void DrawModelSprite(graphics::RT7Core* arg1, int arg2, int arg3, unsigned char arg4);
        virtual bool NotifyInteracted();
        virtual unsigned long HasInteractionInProgress() const;
        virtual void SetMargin(Component::MarginType marginType, Margin margin);
        virtual Margin GetMargin(Component::MarginType marginType) const;
        virtual bool SupportsMargin(Component::MarginType optionClient) const;
        virtual int GetLinkObjType() const;
        virtual void SetLinkObjType(int arg1);
        virtual unsigned long long GetLinkObjCount() const;
        virtual void SetLinkObjCount(unsigned long long arg1);
        virtual uint8_t* GetValueRepresentation();
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        virtual uint8_t GetPreviousValue() const;
        virtual uint8_t GetCurrentValue() const;
        virtual void NotifyRecentValueChangeHandled();
        virtual bool HasRecentValueChange() const;
        virtual uint64_t GetLinkObjText(eastl::fixed_string<char, 256>* str) const;
        void GenerateModelSprite(graphics::RT7Core* arg1);
        Button();
        uint64_t UpdateState(bool arg1, bool arg2, bool arg3);
        void DrawBaseSprite(graphics::RT7Core* rt7Core, int arg2, int arg3, unsigned char arg4);
        void DrawLabel(const ComponentDependencies& componentDependencies, int arg2, int arg3, unsigned char arg4);
        void SetCanToggle(bool arg1);
        void IsToggled() const;

    private:
        unsigned short field_8;
        unsigned short field_10;
        unsigned short field_12;
        unsigned short field_14;
        uint8_t _unknown_16[32];
        unsigned char field_48;
        uint8_t _unknown_49[1];
        uint8_t field_50;
        uint8_t field_51;
        uint8_t field_52;
        uint8_t field_53;
        char field_54;
        uint8_t _unknown_55[1];
        int field_56;
        int field_60;
        int field_64;
        int field_68;
        int field_72;
        int field_76;
        int field_80;
        int field_84;
        unsigned int field_88;
        int field_92;
        uint32_t field_96;
        uint8_t field_100;
        uint8_t _unknown_101[1];
        short field_102;
        uint8_t _unknown_104[160];
        VisibleShadowCastingLightInfo field_264;
        ComponentSwipeConfig field_288;
        uint8_t _unknown_293[59];
        uint8_t field_352;
        uint8_t _unknown_353[3];
        uint32_t field_356;
        uint8_t _unknown_360[32];
        uint8_t** m_pValueRepresentation;
        ButtonElement field_400;
        uint8_t _unknown_432[112];
        bool field_544;
        bool field_545;
        Margin field_546;
        uint8_t _unknown_550[2];
        uint32_t field_552;
        int m_linkObjType;
        unsigned long long m_linkObjCount;
        uint8_t _unknown_568[6515704];
    };

    // 0x1006897a0
    int Button::GetLinkObjType() const {
        return m_linkObjType;
    }

    // 0x1006ace80
    void Button::SetMargin(Component::MarginType marginType, Margin margin) {
        if (marginType == 0) {
            field_546[0] = margin.field_0;
            field_546[1] = margin.field_1;
            field_546[2] = margin.field_2;
            field_546[3] = margin.field_3;
            return;
        }
    }

    // 0x1006acea0
    Margin Button::GetMargin(Component::MarginType marginType) const {
        Margin local_c;

        if (marginType == 0) {
            local_c.field_0 = field_546[0];
            local_c.field_1 = field_546[1];
            local_c.field_2 = field_546[2];
            local_c.field_3 = field_546[3];
        } else {
            local_c = Margin();
        }
        return local_c;
    }

    // 0x1006aced0
    void Button::SetLinkObjType(int arg1) {
        m_linkObjType = arg1;
    }

    // 0x1006acee0
    unsigned long long Button::GetLinkObjCount() const {
        return m_linkObjCount;
    }

    // 0x1006acef0
    void Button::SetLinkObjCount(unsigned long long arg1) {
        m_linkObjCount = arg1;
    }

    // 0x1006acf00
    uint8_t* Button::GetValueRepresentation() {
        return m_valueRepresentation;
    }

    // 0x1006acf10
    uint8_t Button::GetPreviousValue() const {
        return IsToggled() ^ 1;
    }

    // 0x1006acf20
    uint8_t Button::GetCurrentValue() const {
        return IsToggled();
    }

    // 0x1006acf30
    void Button::NotifyRecentValueChangeHandled() {
        field_552 = 3;
    }

    // 0x1006acf40
    bool Button::HasRecentValueChange() const {
        return field_552 == 2;
    }

    // 0x1006acf50
    uint64_t Button::GetLinkObjText(eastl::fixed_string<char, 256>* str) const {
        *str = "";
        return 0;
    }

    // 0x1006b29f0
    Button::~Button() {
        m_pValueRepresentation = &PTR__Button_100f0e518;
        field_496.~Sprite();
        field_432.~TextData();
        (&m_pValueRepresentation)->destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x1006b2a50
    void Button::IsToggled() const {
        field_400->IsToggled();
    }

} // namespace jag::ui

namespace jag::tweak {
    // 0x100a52a40
    Button::~Button() {}

    // 0x100a54ee0
    Button::Button(const char* str) : Control(0, 0, 2, str), field_211(false), field_212(-1), field_216(-1) {}

    // 0x100a5ace0
    Button::Button(const char* str, int arg2)
        : Control(0, 0, 2, str), field_211(false), field_212(arg2), field_216(-1) {}

} // namespace jag::tweak
