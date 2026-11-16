// libs/ui/components/Check.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class Check {
    public:
        // virtual methods in vtable order
        virtual ~Check();
        virtual GetType() const;
        virtual void SetEnabled(bool);
        virtual void MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool);
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual bool NotifyInteracted();
        virtual ulong HasInteractionInProgress() const;
        virtual GetValueRepresentation();
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        virtual bool HasRecentValueChange() const;
        virtual void NotifyRecentValueChangeHandled();
        virtual byte GetPreviousValue() const;
        virtual GetCurrentValue() const;
        Check();
        UpdateState(bool, bool, bool);
        void DrawCheckBox(graphics::RT7Core*, int, int);
        void DrawLabel(ComponentDependencies const&, int, int);
        void SetChecked(bool);
        void GetCheckBoxVisualSize() const;
        void IsChecked() const;
        static /* 3 bytes */ m_enableHold;

        // data members, from how the methods use this: 6516240 bytes
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
        undefined** field_392; // offset 392
        char _unknown_400[112];
        int field_512;        // offset 512
        undefined1 field_516; // offset 516
        char _unknown_517[3];
        undefined4 field_520;    // offset 520
        ButtonElement field_524; // offset 524
        char _unknown_556[6515684];
    };

    // 0x10068d340, 48 bytes, inline, placed by class name and debug map
    // Check::SetChecked(bool)
    void Check::SetChecked(bool param_1) {
        (field_524, param_1, true)->SetToggled();
        field_520 = 0;
    }

    // 0x10068d460, 32 bytes, inline, placed by class name and debug map
    // Check::GetCheckBoxVisualSize() const
    void Check::GetCheckBoxVisualSize() {
        if (field_516 == '\0') {
            GetMinMapX();
            return;
        }
    }

    // 0x1006ad240, 16 bytes, complete-object destructor, inline, placed by class name
    // Check::~Check(): jumps straight to the base-object destructor

    // 0x1006ad250, 32 bytes, deleting destructor, inline, placed by class name
    // Check::~Check()
    void Check::~Check() {
        ~Check(this);
        operator_delete(this);
    }

    // 0x1006ad270, 16 bytes, inline, placed by class name
    // Check::HasRecentValueChange() const
    bool Check::HasRecentValueChange() {
        return field_520 == 2;
    }

    // 0x1006ad280, 16 bytes, inline, placed by class name
    // Check::NotifyRecentValueChangeHandled()
    void Check::NotifyRecentValueChangeHandled() {
        field_520 = 3;
    }

    // 0x1006ad290, 16 bytes, inline, placed by class name
    // Check::GetPreviousValue() const
    byte Check::GetPreviousValue() {
        return IsChecked(this) ^ 1;
    }

    // 0x1006ad2a0, 16 bytes, inline, placed by class name
    // Check::GetCurrentValue() const
    undefined1 Check::GetCurrentValue() {
        return IsChecked(this);
    }

    // 0x1006b2b50, 96 bytes, base-object destructor, inline, placed by class name
    // Check::~Check()
    void Check::~Check() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__Check_100f0e810;
        field_392 = &PTR__Check_100f0e940;
        (&field_464)->~Sprite();
        (&field_400)->~TextData();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)&field_392, in_RSI, extraout_RDX);
        ~Component();
    }

    // 0x1006b2bb0, 32 bytes, inline, placed by class name
    // Check::IsChecked() const
    void Check::IsChecked() {
        field_524->IsToggled();
    }

} // namespace jag::ui
