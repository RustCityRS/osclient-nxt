// libs/ui/components/Button.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class Button {
    public:
        // virtual methods in vtable order
        virtual ~Button();
        virtual GetType() const;
        virtual void SetEnabled(bool);
        virtual void MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool);
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void MainDrawClipped(ComponentDependencies const&);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual DrawModelSprite(graphics::RT7Core*, int, int, unsigned char);
        virtual bool NotifyInteracted();
        virtual ulong HasInteractionInProgress() const;
        virtual void SetMargin(Component::MarginType, Margin);
        virtual Margin GetMargin(Component::MarginType) const;
        virtual SupportsMargin(Component::MarginType) const;
        virtual int GetLinkObjType() const;
        virtual void SetLinkObjType(int);
        virtual ulonglong GetLinkObjCount() const;
        virtual void SetLinkObjCount(unsigned long long);
        virtual GetValueRepresentation();
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        virtual byte GetPreviousValue() const;
        virtual GetCurrentValue() const;
        virtual void NotifyRecentValueChangeHandled();
        virtual bool HasRecentValueChange() const;
        virtual GetLinkObjText(eastl::fixed_string<char, 256, true, eastl::allocator>*) const;
        GenerateModelSprite(graphics::RT7Core*);
        Button();
        UpdateState(bool, bool, bool);
        void DrawBaseSprite(graphics::RT7Core*, int, int, unsigned char);
        void DrawLabel(ComponentDependencies const&, int, int, unsigned char);
        void SetCanToggle(bool);
        void IsToggled() const;

        // data members, from how the methods use this: 6516272 bytes
        undefined** field_0; // offset 0, vtable pointer
        ushort field_8;      // offset 8
        ushort field_10;     // offset 10
        ushort field_12;     // offset 12
        ushort field_14;     // offset 14
        char _unknown_16[32];
        uchar field_48; // offset 48
        char _unknown_49[1];
        char field_50; // offset 50
        char field_51; // offset 51
        char field_52; // offset 52
        char field_53; // offset 53
        char field_54; // offset 54
        char _unknown_55[1];
        int field_56;        // offset 56
        int field_60;        // offset 60
        int field_64;        // offset 64
        int field_68;        // offset 68
        int field_72;        // offset 72
        int field_76;        // offset 76
        int field_80;        // offset 80
        int field_84;        // offset 84
        int field_88;        // offset 88
        int field_92;        // offset 92
        undefined4 field_96; // offset 96
        byte field_100;      // offset 100
        char _unknown_101[1];
        short field_102; // offset 102
        char _unknown_104[160];
        VisibleShadowCastingLightInfo field_264; // offset 264
        ComponentSwipeConfig field_288;          // offset 288
        char _unknown_293[59];
        undefined1 field_352; // offset 352
        char _unknown_353[3];
        undefined4 field_356; // offset 356
        char _unknown_360[32];
        undefined** field_392;   // offset 392
        ButtonElement field_400; // offset 400
        char _unknown_432[112];
        bool field_544;       // offset 544
        bool field_545;       // offset 545
        undefined4 field_546; // offset 546
        char _unknown_550[2];
        undefined4 field_552;     // offset 552
        int m_linkObjType;        // offset 556
        ulonglong m_linkObjCount; // offset 560
        char _unknown_568[6515704];
    };

    // 0x1006897a0, 16 bytes, inline, placed by class name
    // Button::GetLinkObjType() const
    int Button::GetLinkObjType() {
        return m_linkObjType;
    }

    // 0x1006ace50, 16 bytes, complete-object destructor, inline, placed by class name
    // Button::~Button(): jumps straight to the base-object destructor

    // 0x1006ace60, 32 bytes, deleting destructor, inline, placed by class name
    // Button::~Button()
    void Button::~Button() {
        ~Button(this);
        operator_delete(this);
    }

    // 0x1006ace80, 32 bytes, inline, placed by class name
    // Button::SetMargin(Component::MarginType, Margin)
    void Button::SetMargin(int param_2, undefined4 param_3) {
        if (param_2 == 0) {
            field_546 = param_3;
            return;
        }
    }

    // 0x1006acea0, 48 bytes, inline, placed by class name
    // Button::GetMargin(Component::MarginType) const
    Margin Button::GetMargin(int param_2) {
        Margin local_c;

        if (param_2 == 0) {
            local_c = (Margin)field_546;
        } else {
            new (&local_c) Margin();
        }
        return local_c;
    }

    // 0x1006aced0, 16 bytes, inline, placed by class name
    // Button::SetLinkObjType(int)
    void Button::SetLinkObjType(int param_1) {
        m_linkObjType = param_1;
    }

    // 0x1006acee0, 16 bytes, inline, placed by class name
    // Button::GetLinkObjCount() const
    ulonglong Button::GetLinkObjCount() {
        return m_linkObjCount;
    }

    // 0x1006acef0, 16 bytes, inline, placed by class name
    // Button::SetLinkObjCount(unsigned long long)
    void Button::SetLinkObjCount(ulonglong param_1) {
        m_linkObjCount = param_1;
    }

    // 0x1006acf00, 16 bytes, inline, placed by class name
    // Button::GetValueRepresentation()
    /* Carousel::GetValueRepresentation() */

    undefined1* Carousel::GetValueRepresentation() {
        return m_valueRepresentation;
    }

    // 0x1006acf10, 16 bytes, inline, placed by class name
    // Button::GetPreviousValue() const
    byte Button::GetPreviousValue() {
        return IsToggled(this) ^ 1;
    }

    // 0x1006acf20, 16 bytes, inline, placed by class name
    // Button::GetCurrentValue() const
    undefined1 Button::GetCurrentValue() {
        return IsToggled(this);
    }

    // 0x1006acf30, 16 bytes, inline, placed by class name
    // Button::NotifyRecentValueChangeHandled()
    void Button::NotifyRecentValueChangeHandled() {
        field_552 = 3;
    }

    // 0x1006acf40, 16 bytes, inline, placed by class name
    // Button::HasRecentValueChange() const
    bool Button::HasRecentValueChange() {
        return field_552 == 2;
    }

    // 0x1006acf50, 32 bytes, inline, placed by class name
    // Button::GetLinkObjText(eastl::fixed_string<char, 256, true, eastl::allocator>*) const
    undefined8 Button::GetLinkObjText(fixed_string* param_1) {
        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
            (fixed_string<char, 16, true, eastl::allocator>*)param_1, "");
        return 0;
    }

    // 0x1006b29f0, 96 bytes, base-object destructor, inline, placed by class name
    // Button::~Button()
    void Button::~Button() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__Button_100f0e3d0;
        field_392 = &PTR__Button_100f0e518;
        (&field_496)->~Sprite();
        (&field_432)->~TextData();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)&field_392, in_RSI, extraout_RDX);
        ~Component();
    }

    // 0x1006b2a50, 32 bytes, inline, placed by class name
    // Button::IsToggled() const
    void Button::IsToggled() {
        field_400->IsToggled();
    }

} // namespace jag::ui

namespace jag::tweak {
    // 0x100a514a0, 16 bytes, complete-object destructor, inline, placed by class name
    // Button::~Button(): jumps straight to the base-object destructor

    // 0x100a514b0, 32 bytes, deleting destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Button::~Button()
    /* Label::~Label() */

    void Label::~Label() {
        ~Label(this);
        operator_delete(this);
    }

    // 0x100a52a40, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Button::~Button()
    /* Tickable::~Tickable() */

    void Tickable::~Tickable() {
        ~Control();
    }

    // 0x100a54ed0, 16 bytes, complete-object constructor, inline, placed by class name
    // Button::Button(char const*): jumps straight to the base-object constructor

    // 0x100a54ee0, 64 bytes, base-object constructor, inline, placed by class name
    // Button::Button(char const*)
    void Button::Button(char* param_1) {
        new (this) Control(0, 0, 2, param_1);
        field_0 = &PTR__Label_100f1d900;
        field_211 = false;
        field_212 = -1;
        field_216 = -1;
    }

    // 0x100a5acd0, 16 bytes, complete-object constructor, inline, placed by class name
    // Button::Button(char const*, int): jumps straight to the base-object constructor

    // 0x100a5ace0, 80 bytes, base-object constructor, inline, placed by class name
    // Button::Button(char const*, int)
    void Button::Button(char* param_1, int param_2) {
        new (this) Control(0, 0, 2, param_1);
        field_0 = &PTR__Label_100f1d900;
        field_211 = false;
        field_212 = param_2;
        field_216 = -1;
    }

} // namespace jag::tweak
