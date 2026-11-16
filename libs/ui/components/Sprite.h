// libs/ui/components/Sprite.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class Sprite {
    public:
        // virtual methods in vtable order
        virtual ~Sprite();
        virtual uint64_t GetType() const;
        virtual uint64_t GetObjQuantityFontID() const;
        virtual void UpdateObjQuantityText();
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void MainDrawClipped(const ComponentDependencies& componentDependencies);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual int GetLinkObjType() const;
        virtual void SetLinkObjType(int arg1);
        virtual unsigned long long GetLinkObjCount() const;
        virtual void SetLinkObjCount(unsigned long long arg1);
        virtual Sprite* GetObjQuantityText() const;
        virtual uint8_t* GetObjSprite();
        uint32_t GetHTTPImage() const;
        uint8_t* DrawSprite(const ComponentDependencies& componentDependencies, int arg2, int arg3);
        void LoadSpriteAtlasReference(graphics::SpriteAtlasManager& spriteAtlasManager);
        void SetLinkCountChanged(bool arg1);
        static bool m_debugObjSpriteShowLoading;  // = 0
        static bool m_debugObjSpritePrintHashKey; // = 0

    private:
        uint8_t _unknown_8[80];
        int field_88;
        int field_92;
        uint32_t field_96;
        uint8_t field_100;
        uint8_t _unknown_101[163];
        VisibleShadowCastingLightInfo field_264;
        uint8_t _unknown_288[152];
        int m_linkObjType;
        uint8_t _unknown_444[4];
        unsigned long long m_linkObjCount;
        uint8_t _unknown_456[1];
        bool m_linkCountChanged;
        uint8_t _unknown_458[2];
        uint32_t m_hTTPImage;
        uint8_t _unknown_464[26056];
    };

    // 0x1006ab6f0
    int Sprite::GetLinkObjType() const {
        return m_linkObjType;
    }

    // 0x1006ac8c0
    void Sprite::LoadSpriteAtlasReference(graphics::SpriteAtlasManager& spriteAtlasManager) {
        int iVar1 = GetLinkObjType();
        field_392.LoadSpriteAtlasReference(spriteAtlasManager, iVar1 != -1);
    }

    // 0x1006ae270
    void Sprite::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        DrawSprite(componentDependencies, arg2, arg3);
    }

    // 0x1006ae280
    void Sprite::SetLinkObjType(int arg1) {
        if (m_linkObjType != arg1) {
            m_linkObjType = arg1;
            SetLinkCountChanged(true);
        }
    }

    // 0x1006ae2a0
    unsigned long long Sprite::GetLinkObjCount() const {
        return m_linkObjCount;
    }

    // 0x1006ae2b0
    void Sprite::SetLinkObjCount(unsigned long long arg1) {
        if (m_linkObjCount != arg1) {
            m_linkObjCount = arg1;
            SetLinkCountChanged(true);
        }
    }

    // 0x1006ae2d0
    Sprite* Sprite::GetObjQuantityText() const {
        new (this) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        return this;
    }

    // 0x1006b3170
    Sprite::~Sprite() {
        field_464.~unique_ptr();
        field_392.~Sprite();
    }

    // 0x1006b31b0
    void Sprite::SetLinkCountChanged(bool arg1) {
        m_linkCountChanged = arg1;
    }

} // namespace jag::ui

namespace jag {
    // 0x1006ac800
    std::enable_if<!std::is_array<ui::HTTPSpriteData>::value,
                   std::unique_ptr<ui::HTTPSpriteData, BucketDeleter<ui::HTTPSpriteData>>>::type
    bucket_make_unique<ui::HTTPSpriteData, int>(int&& arg1) {
        std::enable_if<!std::is_array<ui::HTTPSpriteData>::value,
                       std::unique_ptr<ui::HTTPSpriteData, BucketDeleter<ui::HTTPSpriteData>>>::type result;
        __good_rval_ref_type* good_rval_ref_type;

        auto hTTPSpriteData = BucketManager::Allocate(72, 0, 16);
        if (hTTPSpriteData == nullptr) {
            LogAssert(
                "ptr != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/make_unique.h",
                37, nullptr);
        }
        new (hTTPSpriteData) ui::HTTPSpriteData(arg1);
        result.unique_ptr<true, void>(hTTPSpriteData, good_rval_ref_type);
        return result;
    }

} // namespace jag
