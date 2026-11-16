// libs/ui/components/GroupBox.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class GroupBox {
    public:
        // virtual methods in vtable order
        virtual ~GroupBox();
        virtual GetType() const;
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual void SetMargin(Component::MarginType, Margin);
        virtual Margin GetMargin(Component::MarginType) const;
        virtual SupportsMargin(Component::MarginType) const;
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        GroupBox();
        void DrawContainer(graphics::RT7Core*, int, int, int, int);
        void DrawContents(InterfaceManager*, int, int, int, int, float);
        void DrawLabel(graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, int, int);
        void SetHeaderLayout(unsigned char, unsigned char, unsigned char, unsigned char, HeaderAlignment);
        void ConvertToInteractableArea(int&, int&, int&, int&, int&, int&) const;
        int GetContentHeaderOffset() const;

        // data members, from how the methods use this: 6516424 bytes
        undefined** field_0; // offset 0, vtable pointer
        ushort field_8;      // offset 8
        ushort field_10;     // offset 10
        char _unknown_12[76];
        int field_88;        // offset 88
        int field_92;        // offset 92
        undefined4 field_96; // offset 96
        byte field_100;      // offset 100
        char _unknown_101[323];
        int field_424;  // offset 424
        int field_428;  // offset 428
        uint field_432; // offset 432
        uint field_436; // offset 436
        char _unknown_440[128];
        byte m_headerLayout; // offset 568
        byte field_569;      // offset 569
        byte field_570;      // offset 570
        byte field_571;      // offset 571
        uint field_572;      // offset 572
        byte field_576;      // offset 576
        byte field_577;      // offset 577
        byte field_578;      // offset 578
        byte field_579;      // offset 579
        char _unknown_580[4];
        TextData field_584;   // offset 584
        SpriteData field_648; // offset 648
        SpriteData field_696; // offset 696
        char _unknown_744[6515680];
    };

    // 0x100698390, 32 bytes, inline, placed by class name and debug map
    // GroupBox::GetContentHeaderOffset() const
    int GroupBox::GetContentHeaderOffset() {
        return (uint)field_571 + (uint)field_569;
    }

    // 0x1006ad740, 16 bytes, complete-object destructor, inline, placed by class name
    // GroupBox::~GroupBox(): jumps straight to the base-object destructor

    // 0x1006ad750, 32 bytes, deleting destructor, inline, placed by class name
    // GroupBox::~GroupBox()
    void GroupBox::~GroupBox() {
        ~GroupBox(this);
        operator_delete(this);
    }

    // 0x1006ad770, 32 bytes, inline, placed by class name
    // GroupBox::SetMargin(Component::MarginType, Margin)
    void GroupBox::SetMargin(int param_2, undefined4 param_3) {
        if (param_2 == 0) {
            field_576 = (char)param_3;
            field_577 = (char)((uint)param_3 >> 8);
            field_578 = (char)((uint)param_3 >> 16);
            field_579 = (char)((uint)param_3 >> 24);
            return;
        }
    }

    // 0x1006ad790, 48 bytes, inline, placed by class name
    // GroupBox::GetMargin(Component::MarginType) const
    Margin GroupBox::GetMargin(int param_2) {
        Margin local_c;

        if (param_2 == 0) {
            local_c.field_0 = field_576;
            local_c.field_1 = field_577;
            local_c.field_2 = field_578;
            local_c.field_3 = field_579;
        } else {
            new (&local_c) Margin();
        }
        return local_c;
    }

    // 0x1006b2dc0, 80 bytes, base-object destructor, inline, placed by class name
    // GroupBox::~GroupBox()
    void GroupBox::~GroupBox() {
        field_0 = &PTR__GroupBox_100f0ed68;
        field_696->~Sprite();
        field_648->~Sprite();
        field_584->~TextData();
        ~ComponentCollection();
    }

} // namespace jag::ui
