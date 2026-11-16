// libs/ui/components/PagedLayerHeader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class PagedLayerHeader {
    public:
        class PageHeader;
        // virtual methods in vtable order
        virtual ~PagedLayerHeader();
        virtual GetType() const;
        virtual void MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool);
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual void SetMargin(Component::MarginType, Margin);
        virtual Margin GetMargin(Component::MarginType) const;
        virtual bool SupportsMargin(Component::MarginType) const;
        virtual uint GetLinkedStaticComponentID() const;
        virtual ulong LinkStaticComponent(shared_ptr<Component> const&);
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        PagedLayerHeader();
        bool IsHorizontal() const;
        void UpdateAnimations(float);
        void DrawBackground(graphics::RT7Core*, int, int);
        void DrawPageHeaders(graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, int, int);
        void LinkPagedLayer(shared_ptr<PagedLayer> const&);
        void UpdatePageHeaders(PagedLayer&);
        void DrawPageHeader(graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, PagedLayer&,
                            unsigned char, int, int, int, int, render::Texture const*, math::Rect<float> const&,
                            render::Texture const*, math::Rect<float> const&);

        // data members, from how the methods use this: 668 bytes
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
        Sprite field_392; // offset 392
        char _unknown_500[36];
        TcpConnectionMessageBase field_536; // offset 536
        char _unknown_584[16];
        ushort field_600;     // offset 600
        ushort field_602;     // offset 602
        undefined2 field_604; // offset 604
        ushort field_606;     // offset 606
        ushort field_608;     // offset 608
        bool field_610;       // offset 610
        char _unknown_611[1];
        ushort field_612; // offset 612
        char _unknown_614[42];
        undefined4 field_656; // offset 656
        undefined4 field_660; // offset 660
        char _unknown_664[4];
    };

    class PagedLayerHeader::PageHeader {
    public:
        PageHeader(bool);
        ~PageHeader();
        PageHeader(PageHeader&&);

        // data members, from how the methods use this: 116 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[7];
        SpriteData field_8;     // offset 8
        ButtonElement field_56; // offset 56
        char _unknown_88[28];
    };

    // 0x1006a4300, 48 bytes, inline, placed by class name and debug map
    // PagedLayerHeader::IsHorizontal() const
    bool PagedLayerHeader::IsHorizontal() {
        int iVar1;
        int iVar2;

        iVar1 = GetStreamCountLastMix();
        iVar2 = GetMinMapX();
        return iVar2 < iVar1;
    }

    // 0x1006a5770, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PagedLayerHeader::PageHeader::PageHeader(bool): jumps straight to the base-object constructor

    // 0x1006adf70, 16 bytes, complete-object destructor, inline, placed by class name
    // PagedLayerHeader::~PagedLayerHeader(): jumps straight to the base-object destructor

    // 0x1006adf80, 32 bytes, deleting destructor, inline, placed by class name
    // PagedLayerHeader::~PagedLayerHeader()
    void PagedLayerHeader::~PagedLayerHeader() {
        ~PagedLayerHeader(this);
        operator_delete(this);
    }

    // 0x1006adfa0, 32 bytes, inline, placed by class name
    // PagedLayerHeader::SupportsMargin(Component::MarginType) const
    bool PagedLayerHeader::SupportsMargin(undefined8 param_1, int param_2) {
        return param_2 == 3 || param_2 == 0;
    }

    // 0x1006adfc0, 32 bytes, inline, placed by class name
    // PagedLayerHeader::GetLinkedStaticComponentID() const
    uint PagedLayerHeader::GetLinkedStaticComponentID() {
        uint uVar1;

        uVar1 = 4294967295;
        if (field_612 != 65535) {
            uVar1 = (uint)field_612;
        }
        return uVar1;
    }

    // 0x1006b26e0, 96 bytes, base-object constructor, inline, placed by class name
    // PagedLayerHeader::PageHeader::PageHeader(bool)
    void PagedLayerHeader::PageHeader::PageHeader(bool param_1) {
        undefined7 in_register_00000031;

        field_0 = 1;
        new (field_8) SpriteData();
        new (field_56, (uint)CONCAT71(in_register_00000031) ButtonElement(param_1) | 2, 1);
    }

    // 0x1006b2fd0, 112 bytes, base-object destructor, inline, placed by class name
    // PagedLayerHeader::~PagedLayerHeader()
    void PagedLayerHeader::~PagedLayerHeader() {
        field_0 = &PTR__PagedLayerHeader_100f0f7c8;
        (&field_632)->~vector();
        (&field_616)->~weak_ptr();
        field_536->~TextData();
        ((field_392 + 96))->~Sprite();
        ((field_392 + 48))->~Sprite();
        field_392->~Sprite();
        ~Component();
    }

    // 0x1006d6740, 16 bytes, complete-object destructor, inline, placed by class name
    // PagedLayerHeader::PageHeader::~PageHeader(): jumps straight to the base-object destructor

    // 0x1006d6750, 16 bytes, base-object destructor, inline, placed by class name
    // PagedLayerHeader::PageHeader::~PageHeader()
    void PagedLayerHeader::PageHeader::~PageHeader() {
        field_8->~Sprite();
    }

    // 0x1006d6a70, 16 bytes, complete-object constructor, inline, placed by class name
    // PagedLayerHeader::PageHeader::PageHeader(PagedLayerHeader::PageHeader&&): jumps straight to the base-object constructor

    // 0x1006d6a80, 64 bytes, base-object constructor, inline, placed by class name
    // PagedLayerHeader::PageHeader::PageHeader(PagedLayerHeader::PageHeader&&)
    void PagedLayerHeader::PageHeader::PageHeader(PageHeader* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        field_0 = param_1->field_0;
        new (field_8, (RenderPassEffect*)param_1->field_8) graphics::RenderPassEffect();
        uVar1 = *(undefined8*)param_1->field_56;
        uVar2 = *(undefined8*)(param_1->field_56 + 8);
        uVar3 = *(undefined8*)(param_1->field_56 + 20);
        *(undefined8*)(field_56 + 12) = *(undefined8*)(param_1->field_56 + 12);
        *(undefined8*)(field_56 + 20) = uVar3;
        *(undefined8*)field_56 = uVar1;
        *(undefined8*)(field_56 + 8) = uVar2;
    }

} // namespace jag::ui
