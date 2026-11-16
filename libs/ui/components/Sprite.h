// libs/ui/components/Sprite.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class Sprite {
    public:
        // virtual methods in vtable order
        virtual ~Sprite();
        virtual GetType() const;
        virtual GetObjQuantityFontID() const;
        virtual UpdateObjQuantityText();
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void MainDrawClipped(ComponentDependencies const&);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual int GetLinkObjType() const;
        virtual void SetLinkObjType(int);
        virtual ulonglong GetLinkObjCount() const;
        virtual void SetLinkObjCount(unsigned long long);
        virtual Sprite* GetObjQuantityText() const;
        virtual GetObjSprite();
        GetHTTPImage() const;
        DrawSprite(ComponentDependencies const&, int, int);
        void LoadSpriteAtlasReference(graphics::SpriteAtlasManager&);
        void SetLinkCountChanged(bool);
        static /* 1 bytes */ m_debugObjSpriteShowLoading;  // = 0
        static /* 1 bytes */ m_debugObjSpritePrintHashKey; // = 0

        // data members, from how the methods use this: 26520 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[80];
        int field_88;        // offset 88
        int field_92;        // offset 92
        undefined4 field_96; // offset 96
        byte field_100;      // offset 100
        char _unknown_101[163];
        SpriteData field_264; // offset 264
        char _unknown_304[88];
        SpriteData field_392; // offset 392
        char _unknown_432[8];
        int m_linkObjType; // offset 440
        char _unknown_444[4];
        ulonglong m_linkObjCount; // offset 448
        char _unknown_456[1];
        bool m_linkCountChanged; // offset 457
        char _unknown_458[2];
        undefined4 m_hTTPImage; // offset 460
        char _unknown_464[26056];
    };

    // 0x1006ab6f0, 16 bytes, inline, placed by class name and debug map
    // Sprite::GetLinkObjType() const
    int Sprite::GetLinkObjType() {
        return m_linkObjType;
    }

    // 0x1006ac8c0, 48 bytes, inline, placed by class name and debug map
    // Sprite::LoadSpriteAtlasReference(graphics::SpriteAtlasManager&)
    void Sprite::LoadSpriteAtlasReference(SpriteAtlasManager* param_1) {
        int iVar1;

        iVar1 = GetLinkObjType(this);
        (field_392, param_1, iVar1 != -1)->LoadSpriteAtlasReference();
    }

    // 0x1006ae240, 16 bytes, complete-object destructor, inline, placed by class name
    // Sprite::~Sprite(): jumps straight to the base-object destructor

    // 0x1006ae250, 32 bytes, deleting destructor, inline, placed by class name
    // Sprite::~Sprite()
    void Sprite::~Sprite() {
        ~Sprite(this);
        operator_delete(this);
    }

    // 0x1006ae270, 16 bytes, inline, placed by class name
    // Sprite::MainDraw(ComponentDependencies const&, int, int, float)
    void Sprite::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        DrawSprite(this, param_1, param_2, param_3);
    }

    // 0x1006ae280, 32 bytes, inline, placed by class name
    // Sprite::SetLinkObjType(int)
    void Sprite::SetLinkObjType(int param_1) {
        if (m_linkObjType != param_1) {
            m_linkObjType = param_1;
            SetLinkCountChanged(this, true);
        }
    }

    // 0x1006ae2a0, 16 bytes, inline, placed by class name
    // Sprite::GetLinkObjCount() const
    ulonglong Sprite::GetLinkObjCount() {
        return m_linkObjCount;
    }

    // 0x1006ae2b0, 32 bytes, inline, placed by class name
    // Sprite::SetLinkObjCount(unsigned long long)
    void Sprite::SetLinkObjCount(ulonglong param_1) {
        if (m_linkObjCount != param_1) {
            m_linkObjCount = param_1;
            SetLinkCountChanged(this, true);
        }
    }

    // 0x1006ae2d0, 32 bytes, inline, placed by class name
    // Sprite::GetObjQuantityText() const
    Sprite* Sprite::GetObjQuantityText() {
        new (this) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        return this;
    }

    // 0x1006b3170, 64 bytes, base-object destructor, inline, placed by class name
    // Sprite::~Sprite()
    void Sprite::~Sprite() {
        field_0 = &PTR__Sprite_100f10748;
        (&field_464)->~unique_ptr();
        field_392->~Sprite();
        ~Component();
    }

    // 0x1006b31b0, 16 bytes, inline, placed by class name
    // Sprite::SetLinkCountChanged(bool)
    void Sprite::SetLinkCountChanged(bool param_1) {
        m_linkCountChanged = param_1;
    }

} // namespace jag::ui

namespace jag {
    // 0x1006ac800, 112 bytes, inline, placed by debug map only (low confidence)
    // std::enable_if<!std::is_array<ui::HTTPSpriteData>::value, std::unique_ptr<ui::HTTPSpriteData, BucketDeleter<ui::HTTPSpriteData> > >::type bucket_make_unique<ui::HTTPSpriteData, int>(int&&)
    /* std::enable_if<!std::is_array<ui::HTTPSpriteData>::value,
   std::unique_ptr<ui::HTTPSpriteData, BucketDeleter<ui::HTTPSpriteData> > >::type
   bucket_make_unique<ui::HTTPSpriteData, int>(int&&) */

    jag* bucket_make_unique<ui::HTTPSpriteData, int>(int* param_1) {
        HTTPSpriteData* this_00;

        this_00 = (HTTPSpriteData*)BucketManager::Allocate(72, 0, 16);
        if (this_00 == (HTTPSpriteData*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "ptr != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/make_unique.h",
                37, (char*)0);
        }
        ui::HTTPSpriteData::HTTPSpriteData(this_00, *param_1);
        std::unique_ptr<ui::HTTPSpriteData, BucketDeleter<ui::HTTPSpriteData>>::unique_ptr<true, void>(this, this_00);
        return this;
    }

} // namespace jag
