// libs/ui/utils/SpriteData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class SpriteData {
    public:
        void GetSpriteHash() const;
        Option<float>* GetSpriteAtlasReference() const;
        void SetSpriteRGB(unsigned int arg1);
        unsigned int GetSpriteShadowRGB() const;
        unsigned int GetSpriteID() const;
        unsigned short GetSpriteRGB() const;
        ~SpriteData();
        void GetUsePlayerModelRecolours();
        uint8_t GetSpriteOutline() const;
        void SetSpriteAtlasReference(long long arg1,
                                     const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference);
        void DrawSpriteSlice(graphics::RT7Core& rt7Core, int arg2, int arg3, int arg4, int arg5, unsigned int arg6,
                             const math::Rect<float>& rect, const render::Texture* texture, float arg9) const;
        void DecodeSpriteData(PacketT<Array<unsigned char>>& arg1, int arg2);
        uint8_t* LoadSpriteAtlasReference(graphics::SpriteAtlasManager& spriteAtlasManager, bool arg2);
        void SetSpriteTiling(bool arg1);
        void SetSpriteUseAlpha(bool arg1);
        void SetSpriteVFlip(bool arg1);
        void SetSpriteHFlip(bool arg1);
        void SetSpriteUseClickMask(bool arg1);
        void LoadStyleSheetSpriteData(StyleEntryID styleEntryID, const StyleSheet& styleSheet);
        void GetSpriteUseAlpha() const;
        uint8_t* GetSpriteMapping(graphics::SpriteAtlasManager& spriteAtlasManager, bool arg2);
        void ObjSpriteCacheKeyDetails(long long arg1, int& arg2, bool& arg3, bool& arg4, unsigned int& arg5,
                                      unsigned int& arg6);
        int SetObjSpriteFromHashKey(long long arg1);
        void SetUsePlayerModelRecolours(bool arg1);
        void SetObjSpriteIsHighRes(bool arg1);
        void SetSpriteOutline(unsigned char arg1);
        void SetSpriteShadowRGB(unsigned int arg1);
        uint8_t GetSpriteDrawMode(unsigned int arg1, unsigned int arg2) const;
        void ConvertToContentBounds(int& arg1, int& arg2, int& arg3, int& arg4) const;
        void DrawSpriteSliceDebug(graphics::GUIManager& guiManager, int arg2, int arg3, int arg4, int arg5,
                                  unsigned int arg6) const;
        SpriteData();
        uint8_t GetSpriteAlpha() const;
        uint32_t GetVisualMargin() const;
        bool IsSpriteValid() const;
        unsigned int GetSpriteRGBA() const;
        void SetSpriteID(int arg1);
        void SetSpriteAlpha(unsigned char arg1);
        void Reset();
        void GetObjSpriteIsHighRes() const;
        void GetSpriteVFlip() const;
        void GetSpriteHFlip() const;
        unsigned short GetSpriteRotate() const;
        void GetSpriteTiling() const;
        SpriteData(SpriteData&& spriteData);
        static bool m_enableSpriteSliceDebug;

    private:
        unsigned int m_spriteID;
        unsigned int m_spriteShadowRGB;
        unsigned short m_spriteRotate;
        uint8_t m_spriteOutline;
        uint8_t _unknown_11[1];
        unsigned int m_spriteRGB;
        uint8_t m_spriteAlpha;
        uint8_t field_17;
        uint8_t field_18;
        uint8_t field_19;
        uint8_t field_20;
        uint8_t _unknown_21[3];
        unsigned long m_spriteAtlasReference;
        shared_ptr field_32;
    };

    // 0x100539460
    void SpriteData::GetUsePlayerModelRecolours() {
        field_21.test(5);
    }

    // 0x100539480
    uint8_t SpriteData::GetSpriteOutline() const {
        return m_spriteOutline;
    }

    // 0x100539490
    void SpriteData::SetSpriteAtlasReference(long long arg1,
                                             const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference) {
        m_spriteAtlasReference = arg1;
        *field_32 = spriteAtlasReference;
    }

    // 0x100678b90
    void SpriteData::SetSpriteTiling(bool arg1) {
        field_21 = eastl::bitset<7ul, unsigned char>::set(0, arg1);
    }

    // 0x100678bb0
    void SpriteData::SetSpriteUseAlpha(bool arg1) {
        field_21 = eastl::bitset<7ul, unsigned char>::set(3, arg1);
        m_spriteAtlasReference = 18446744073709551615;
    }

    // 0x100678be0
    void SpriteData::SetSpriteVFlip(bool arg1) {
        field_21 = eastl::bitset<7ul, unsigned char>::set(1, arg1);
    }

    // 0x100678c00
    void SpriteData::SetSpriteHFlip(bool arg1) {
        field_21 = eastl::bitset<7ul, unsigned char>::set(2, arg1);
    }

    // 0x100678c20
    void SpriteData::SetSpriteUseClickMask(bool arg1) {
        field_21 = eastl::bitset<7ul, unsigned char>::set(4, arg1);
    }

    // 0x100678d80
    void SpriteData::GetSpriteUseAlpha() const {
        field_21.test(3);
    }

    // 0x100678f10
    void SpriteData::SetUsePlayerModelRecolours(bool arg1) {
        field_21 = eastl::bitset<7ul, unsigned char>::set(5, arg1);
    }

    // 0x100678f30
    void SpriteData::SetObjSpriteIsHighRes(bool arg1) {
        field_21 = eastl::bitset<7ul, unsigned char>::set(6, arg1);
    }

    // 0x100678f50
    void SpriteData::SetSpriteOutline(unsigned char arg1) {
        m_spriteOutline = arg1;
        m_spriteAtlasReference = 18446744073709551615;
    }

    // 0x100678f70
    void SpriteData::SetSpriteShadowRGB(unsigned int arg1) {
        m_spriteShadowRGB = arg1;
        m_spriteAtlasReference = 18446744073709551615;
    }

    // 0x100689a90
    uint32_t SpriteData::GetVisualMargin() const {
        uint32_t uVar1;

        uVar1._0_1_ = field_17;
        uVar1._1_1_ = field_18;
        uVar1._2_1_ = field_19;
        uVar1._3_1_ = field_20;
        return uVar1;
    }

    // 0x10068f8f0
    bool SpriteData::IsSpriteValid() const {
        return 0 < (int)m_spriteID;
    }

    // 0x10068ffb0
    unsigned int SpriteData::GetSpriteRGBA() const {
        return (unsigned int)m_spriteAlpha | m_spriteRGB << 8;
    }

    // 0x10069f050
    void SpriteData::SetSpriteID(int arg1) {
        m_spriteID = arg1;
        m_spriteAtlasReference = 18446744073709551615;
    }

    // 0x10069f0d0
    void SpriteData::SetSpriteAlpha(unsigned char arg1) {
        field_12[4] = arg1;
    }

    // 0x1006a5840
    void SpriteData::Reset() {
        m_spriteID = 4294967295;
        m_spriteAtlasReference = 18446744073709551615;
        field_32->reset();
    }

    // 0x1006ab700
    void SpriteData::GetObjSpriteIsHighRes() const {
        field_21.test(6);
    }

    // 0x1006ac8f0
    void SpriteData::GetSpriteVFlip() const {
        field_21.test(1);
    }

    // 0x1006ac910
    void SpriteData::GetSpriteHFlip() const {
        field_21.test(2);
    }

    // 0x1006ac930
    unsigned short SpriteData::GetSpriteRotate() const {
        return m_transformCount;
    }

    // 0x1006ac9f0
    void SpriteData::GetSpriteTiling() const {
        field_21.test(0);
    }

    // 0x1006af700
    SpriteData::SpriteData()
        : m_spriteID(4294967295), m_spriteShadowRGB(0), m_spriteRotate(0), m_spriteOutline(0), m_spriteRGB(16777215),
          m_spriteAlpha(255), m_spriteAtlasReference(18446744073709551615) {}

    // 0x1006d6ad0
    SpriteData::SpriteData(SpriteData&& spriteData) {
        unsigned int uVar7 = spriteData.m_spriteID;
        unsigned int uVar8 = spriteData.m_spriteShadowRGB;
        unsigned short uVar9 = spriteData.m_spriteRotate;
        uint8_t bVar10 = spriteData.m_spriteOutline;
        uint8_t uVar11 = spriteData.field_11;
        unsigned int uVar12 = spriteData.m_spriteRGB;
        uint8_t bVar2 = spriteData.field_17;
        uint8_t bVar3 = spriteData.field_18;
        uint8_t bVar4 = spriteData.field_19;
        uint8_t bVar5 = spriteData.field_20;
        uint32_t uVar6 = *(uint32_t*)&spriteData.field_21;
        unsigned long uVar1 = spriteData.m_spriteAtlasReference;
        field_16 = spriteData.m_spriteAlpha;
        field_17 = bVar2;
        field_18 = bVar3;
        field_19 = bVar4;
        field_20 = bVar5;
        field_21 = uVar6;
        field_24 = uVar1;
        field_0 = uVar7;
        field_4 = uVar8;
        field_8 = uVar9;
        field_10 = bVar10;
        field_11 = uVar11;
        field_12 = uVar12;
        field_32->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(spriteData.field_32);
    }

} // namespace jag::ui
