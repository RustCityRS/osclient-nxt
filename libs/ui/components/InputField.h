// libs/ui/components/InputField.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class InputField {
    public:
        // virtual methods in vtable order
        virtual ~InputField();
        virtual GetType() const;
        virtual ShouldBlockInput(int, int) const;
        virtual void SetEnabled(bool);
        virtual void MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool);
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual DrawFocus(ComponentDependencies const&);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual IsKeyReceiver() const;
        virtual void SetMargin(Component::MarginType, Margin);
        virtual Margin GetMargin(Component::MarginType) const;
        virtual SupportsMargin(Component::MarginType) const;
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        virtual InputField* GetAssociatedComponent();
        virtual bool IsAssociatedComponent(shared_ptr<Component> const&) const;
        virtual void LogicFocus(ComponentDependencies const&, bool);
        virtual void CancelFocus();
        virtual HandleKeyInput(int, int, unsigned int);
        virtual ulong NotifyFocusGain();
        InputField(InterfaceManager*);
        shared_ptr* UpdateTextRunSettings(graphics::FontManager*);
        bool IsMultiline() const;
        int ApplyScroll(int);
        void EnsureCaretVisible();
        void UpdateCaretBlink(float);
        void Init(graphics::TextContentVisibility, FilterMode, unsigned long);
        void SetContents(eastl::basic_string<char, BucketAllocatorEASTL> const&);
        GetContents() const;
        void ClearInternal();
        ulong AddContents(char const*, char const*, bool, bool);
        void Clear();
        ShouldIgnoreInput(int, unsigned int) const;
        void CopySelection();
        void PasteFromClipboard();
        void AddCharacter(unsigned int, bool);
        void ValidateQuantityInput();
        HandleQuantityInput(unsigned int);
        void UpdateCachedString() const;
        IsCodepointAllowed(FilterMode, unsigned int);
        IsUnitQuantityCodepoint(unsigned int);
        GetQuantityInput() const;
        GetSoftKeyboardType() const;

        // data members, from how the methods use this: 6516304 bytes
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
        char _unknown_360[48];
        undefined** field_408; // offset 408
        char _unknown_416[48];
        TcpConnectionMessageBase field_464; // offset 464
        char _unknown_512[16];
        uint field_528; // offset 528
        uint field_532; // offset 532
        uint field_536; // offset 536
        char _unknown_540[4];
        ulong field_544; // offset 544
        ulong field_552; // offset 552
        char _unknown_560[28];
        uint field_588; // offset 588
        uint field_592; // offset 592
        uint field_596; // offset 596
        char _unknown_600[168];
        undefined4 field_768; // offset 768
        char _unknown_772[4];
        TextRun field_776; // offset 776
        char _unknown_856[24];
        char field_880; // offset 880
        char _unknown_881[1];
        undefined1 field_882; // offset 882
        char _unknown_883[1];
        undefined2 field_884; // offset 884
        char _unknown_886[2];
        undefined8 field_888; // offset 888
        ulong field_896;      // offset 896
        uint field_904;       // offset 904
        undefined1 field_908; // offset 908
        char _unknown_909[3];
        float field_912;      // offset 912
        int field_916;        // offset 916
        undefined4 field_920; // offset 920
        char _unknown_924[4];
        InterfaceManager* field_928; // offset 928
        char _unknown_936[6515368];
    };

    // 0x100698f40, 32 bytes, inline, placed by class name and debug map
    // InputField::IsMultiline() const
    bool InputField::IsMultiline() {
        byte bVar1;

        bVar1 = field_464->GetTextMaxLines();
        return 1 < bVar1;
    }

    // 0x100699f40, 32 bytes, inline, placed by class name and debug map
    // InputField::GetContents() const
    undefined1* InputField::GetContents() {
        UpdateCachedString(this);
        return &field_856;
    }

    // 0x10069b390, 48 bytes, inline, placed by class name and debug map
    // InputField::IsUnitQuantityCodepoint(unsigned int)
    undefined8 InputField::IsUnitQuantityCodepoint(uint param_1) {
        return CONCAT71(83886080, (21474836485U >> ((ulong)(param_1 - 75) & 63) & 1) != 0 && param_1 - 75 < 35);
    }

    // 0x1006ad7c0, 16 bytes, complete-object destructor, inline, placed by class name
    // InputField::~InputField(): jumps straight to the base-object destructor

    // 0x1006ad7d0, 32 bytes, deleting destructor, inline, placed by class name
    // InputField::~InputField()
    void InputField::~InputField() {
        ~InputField(this);
        operator_delete(this);
    }

    // 0x1006ad7f0, 32 bytes, inline, placed by class name
    // InputField::SetMargin(Component::MarginType, Margin)
    void InputField::SetMargin(int param_2, undefined4 param_3) {
        if (param_2 == 0) {
            field_768 = param_3;
            return;
        }
    }

    // 0x1006ad810, 48 bytes, inline, placed by class name
    // InputField::GetMargin(Component::MarginType) const
    Margin InputField::GetMargin(int param_2) {
        Margin local_c;

        if (param_2 == 0) {
            local_c = (Margin)field_768;
        } else {
            new (&local_c) Margin();
        }
        return local_c;
    }

    // 0x1006ad840, 96 bytes, inline, placed by class name
    // InputField::GetAssociatedComponent()
    InputField* InputField::GetAssociatedComponent() {
        shared_ptr* extraout_RDX;
        enable_shared_from_this<PathingEntity> local_28[16];

        local_28->shared_from_this();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>((shared_ptr*)this, (jag*)local_28,
                                                                                     extraout_RDX);
        local_28->~shared_ptr();
        return this;
    }

    // 0x1006b2e10, 272 bytes, base-object destructor, inline, placed by class name
    // InputField::~InputField()
    void InputField::~InputField() {
        field_0 = &PTR__InputField_100f0ef40;
        field_408 = &PTR__InputField_100f0f098;
        CancelFocus(this);
        (&field_856)->~basic_string();
        field_776->~TextRun();
        (&field_600)->~ScrollBar();
        (&field_560)->~basic_string();
        field_464->~TextData();
        (&field_416)->~Sprite();
        (&field_408)->~AutoSingleton();
        (&field_392)->~enable_shared_from_this();
        ~Component();
    }

} // namespace jag::ui

namespace jag::fixedfunction {
    // 0x10069b2d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int, bool)::$_51&): jumps straight to the base-object constructor

    // 0x10069b2f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction
