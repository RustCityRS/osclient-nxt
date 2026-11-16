// libs/ui/components/PagedLayerHeader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class PagedLayerHeader {
    public:
        class PageHeader;
        // virtual methods in vtable order
        virtual ~PagedLayerHeader();
        virtual uint64_t GetType() const;
        virtual void MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                               bool arg5, bool arg6, bool arg7);
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual void SetMargin(Component::MarginType marginType, Margin margin);
        virtual Margin GetMargin(Component::MarginType marginType) const;
        virtual bool SupportsMargin(Component::MarginType marginType) const;
        virtual unsigned int GetLinkedStaticComponentID() const;
        virtual unsigned long LinkStaticComponent(const shared_ptr<Component>& component);
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        PagedLayerHeader();
        bool IsHorizontal() const;
        void UpdateAnimations(float arg1);
        void DrawBackground(graphics::RT7Core* rt7Core, int arg2, int arg3);
        void DrawPageHeaders(graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                             graphics::FontHelpers* fontHelpers, int arg4, int arg5);
        void LinkPagedLayer(const shared_ptr<PagedLayer>& pagedLayer);
        void UpdatePageHeaders(PagedLayer& pagedLayer);
        void DrawPageHeader(graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                            graphics::FontHelpers* fontHelpers, PagedLayer& pagedLayer, unsigned char arg5, int arg6,
                            int arg7, int arg8, int arg9, const render::Texture* texture1,
                            const math::Rect<float>& rect1, const render::Texture* texture2,
                            const math::Rect<float>& rect2);

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
        Sprite field_392;
        uint8_t _unknown_500[36];
        TcpConnectionMessageBase field_536;
        uint8_t _unknown_584[16];
        unsigned short field_600;
        uint16_t field_602;
        unsigned short field_604;
        unsigned short field_606;
        unsigned short field_608;
        bool field_610;
        uint8_t _unknown_611[1];
        unsigned short field_612;
        uint8_t _unknown_614[42];
        Margin field_656;
        Margin field_660;
        uint8_t _unknown_664[4];
    };

    class PagedLayerHeader::PageHeader {
    public:
        PageHeader(bool arg1);
        ~PageHeader();
        PageHeader(PageHeader&& pageHeader);

    private:
        uint8_t field_0;
        uint8_t _unknown_1[7];
        SpriteData field_8;
        ButtonElement field_56;
        uint8_t _unknown_88[28];
    };

    // 0x1006a4300
    bool PagedLayerHeader::IsHorizontal() const {
        int iVar1 = GetStreamCountLastMix();
        return GetMinMapX() < iVar1;
    }

    // 0x1006adfa0
    bool PagedLayerHeader::SupportsMargin(Component::MarginType marginType) const {
        return marginType == 3 || marginType == 0;
    }

    // 0x1006adfc0
    unsigned int PagedLayerHeader::GetLinkedStaticComponentID() const {
        unsigned int uVar1 = 4294967295;
        if (field_612 != 65535) {
            uVar1 = (unsigned int)field_612;
        }
        return uVar1;
    }

    // 0x1006b26e0
    PagedLayerHeader::PageHeader::PageHeader(bool arg1)
        : field_0(1), field_56((Behaviour)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) | 2, 1) {
        uint64_t in_register_00000031;
    }

    // 0x1006b2fd0
    PagedLayerHeader::~PagedLayerHeader() {
        field_632.~vector();
        field_616.~weak_ptr();
        field_536->~TextData();
        ((field_392 + 96))->~Sprite();
        ((field_392 + 48))->~Sprite();
        field_392->~Sprite();
    }

    // 0x1006d6750
    PagedLayerHeader::PageHeader::~PageHeader() {
        field_8->~Sprite();
    }

    // 0x1006d6a80
    PagedLayerHeader::PageHeader::PageHeader(PagedLayerHeader::PageHeader&& pageHeader)
        : field_0(pageHeader.field_0), field_8(pageHeader.field_8) {
        uint64_t uVar1 = *(uint64_t*)pageHeader.field_56;
        uint64_t uVar2 = *(uint64_t*)(pageHeader.field_56 + 8);
        uint64_t uVar3 = *(uint64_t*)(pageHeader.field_56 + 20);
        *(uint64_t*)(field_56 + 12) = *(uint64_t*)(pageHeader.field_56 + 12);
        *(uint64_t*)(field_56 + 20) = uVar3;
        *(uint64_t*)field_56 = uVar1;
        *(uint64_t*)(field_56 + 8) = uVar2;
    }

} // namespace jag::ui
