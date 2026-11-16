// libs/graphics/graphicutils/textureatlas/TextureAtlasSlotPacker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphicutils {
    class TextureAtlasSlotPacker {
    public:
        class SlotUsageBitmap;
        void GetAtlasQuality() const;
        int GetAtlasSlotCount() const;
        TextureAtlasUsage* GetAtlasUsage() const;
        int GetTotalSlots() const;
        unsigned char UseCompressedTextures() const;
        unsigned int GetAtlasPixelResolution() const;
        float GetSlotUVSize() const;
        int GetMaxAtlasSlotCount() const;
        long GetSlot(unsigned int arg1, unsigned int arg2) const;
        uint8_t[16] GetTextureResolution() const;
        void ClearTextureSlots();
        auto GetTexturePixelRegion(unsigned int arg1, unsigned int arg2) const;
        uint8_t[16] GetTextureUVCoordinates(unsigned int arg1, unsigned int arg2) const;
        ~TextureAtlasSlotPacker();
        uint32_t GetMipLimit() const;
        TextureAtlasSlotPacker(const TextureAtlasQuality& textureAtlasQuality,
                               const TextureAtlasUsage* textureAtlasUsage, bool arg3);
        void AddAtlasSlotData(bool arg1, unsigned int arg2, unsigned int arg3,
                              const TextureAtlasSlot2D& textureAtlasSlot2D);
        void GetAtlasSlot(unsigned int arg1, unsigned int arg2, bool arg3);
        int GetTextureSlotSize(unsigned int arg1) const;
        TextureAtlasSlotPacker* AllocSlot2D(unsigned int arg1);
        auto AllocSlot2D(unsigned int arg1, unsigned int arg2);
        void FreeSlot2D(const TextureAtlasSlot2D& textureAtlasSlot2D);
        void ClearLastCheckedValues();
        void FlushProvisionalSlots(fixedfunction::function<void(TextureAtlasSlot const&), 64ul, 16ul,
                                                           (fixedfunction::Methods)0> const& callback);
        void GetAtlasSlot(unsigned int arg1, unsigned int arg2, bool arg3) const;
        uint32_t GetGutteringSlotCount() const;

    private:
        unsigned int field_0;
        uint8_t _unknown_4[4];
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint32_t field_32;
        int m_atlasSlotCount;
        int m_totalSlots;
        unsigned int m_atlasPixelResolution;
        TextureAtlasUsage* m_pAtlasUsage;
        bool field_56;
        uint8_t _unknown_57[79];
        unsigned int field_136;
        unsigned int field_140;
        unsigned int field_144;
        uint8_t _unknown_148[4];
    };

    class TextureAtlasSlotPacker::SlotUsageBitmap {
    public:
        void Clear();
        SlotUsageBitmap(unsigned int arg1);
        unsigned long TestRegion(unsigned int arg1, unsigned int arg2, unsigned int arg3) const;
        auto GetSlotMasks(unsigned int arg1, unsigned int arg2);
        unsigned long TestRow(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned long long arg4,
                              unsigned long long arg5) const;
        void SetBits(unsigned int arg1, unsigned int arg2, unsigned int arg3, bool arg4);
        ~SlotUsageBitmap();
        void MarkBitsUsed(unsigned int arg1, unsigned int arg2, unsigned int arg3);
        void MarkBitsUnused(unsigned int arg1, unsigned int arg2, unsigned int arg3);
        static int32_t StorageTypeBitCount[3]; // = { 64, 16711935, 0 }

    private:
        unsigned int field_0;
        unsigned int field_4;
        uint8_t _unknown_8[16];
    };

    // 0x10085d5f0
    float TextureAtlasSlotPacker::GetSlotUVSize() const {
        unsigned int uVar1 = field_0;
        unsigned int uVar2 = GetNormalEmissiveMapID();
        return (float)uVar1 / (float)uVar2;
    }

    // 0x10085ddd0
    int TextureAtlasSlotPacker::GetMaxAtlasSlotCount() const {
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        return m_atlasSlotCount - (int)*(char*)(lVar1 + 164);
    }

    // 0x1008ad9a0
    long TextureAtlasSlotPacker::GetSlot(unsigned int arg1, unsigned int arg2) const {
        long lVar1 = GetAtlasSlot(arg1, arg2, true);
        long lVar2 = field_64.end();
        long lVar3 = 0;
        if (lVar1 != lVar2) {
            lVar3 = lVar1;
        }
        return lVar3;
    }

    // 0x1008af3d0
    uint8_t[16] TextureAtlasSlotPacker::GetTextureResolution() const {
        uint8_t auVar3[16];

        unsigned int uVar1 = m_atlasPixelResolution;
        unsigned int uVar2 = math::IntegerExponentPow<int>(2, field_32);
        auVar3._8_8_ = (unsigned long)uVar1 % (unsigned long)uVar2;
        auVar3._0_8_ = (unsigned long)uVar1 / (unsigned long)uVar2;
        return auVar3;
    }

    // 0x1008af400
    void TextureAtlasSlotPacker::ClearTextureSlots() {
        field_64.set_capacity(0);
        field_96.Clear();
    }

    // 0x1008ccca0
    auto TextureAtlasSlotPacker::GetTexturePixelRegion(unsigned int arg1, unsigned int arg2) const {
        long lVar1 = GetAtlasSlot(arg1, arg2, true);
        long lVar2 = field_64.end();
        if (lVar1 == lVar2) {
            LogAssert("textureSlotIt != m_textureSlots.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.h",
                      177, nullptr);
        }
        return auto(arg1 * field_0, arg2 * field_0, (unsigned int)*(unsigned short*)(lVar1 + 4),
                    (unsigned int)*(unsigned short*)(lVar1 + 4));
    }

    // 0x1008ccd40
    uint8_t[16] TextureAtlasSlotPacker::GetTextureUVCoordinates(unsigned int arg1, unsigned int arg2) const {
        uint8_t local_48[16];
        uint8_t local_38[16];

        GetTexturePixelRegion((Margin*)local_48, this, arg1, arg2);
        auto puVar2 = local_48->SSOBeginPtr();
        float local_1c = (float)*puVar2;
        unsigned int uVar1 = GetNormalEmissiveMapID();
        local_1c = local_1c / (float)uVar1;
        puVar2 = (unsigned int*)local_48->y();
        float local_24 = (float)*puVar2;
        uVar1 = GetNormalEmissiveMapID();
        local_24 = local_24 / (float)uVar1;
        puVar2 = (unsigned int*)local_48->second();
        float local_20 = (float)*puVar2;
        uVar1 = GetNormalEmissiveMapID();
        local_20 = local_20 / (float)uVar1 + local_1c;
        puVar2 = (unsigned int*)local_48->qw();
        float local_28 = (float)*puVar2;
        uVar1 = GetNormalEmissiveMapID();
        new (local_38) ImVec4(local_1c, local_24, local_20, local_28 / (float)uVar1 + local_24);
        return local_38;
    }

    // 0x1008cd2a0
    void TextureAtlasSlotPacker::SlotUsageBitmap::Clear() {
        auto arg1 = field_8.HeapBeginPtr();
        auto arg2 = field_8.end();
        std::fill<unsigned long long*, unsigned long long>(arg1, arg2, 18446744073709551615);
    }

    // 0x1008d08e0
    TextureAtlasSlotPacker::~TextureAtlasSlotPacker() {
        field_96.~SlotUsageBitmap();
        field_64.~vector();
    }

    // 0x100922ca0
    uint32_t TextureAtlasSlotPacker::GetMipLimit() const {
        uint8_t bVar1 = IsReadyAnim();
        return *(uint32_t*)((long)&field_16 + (unsigned long)bVar1 * 4);
    }

    // 0x100bbd0c0
    int TextureAtlasSlotPacker::GetTextureSlotSize(unsigned int arg1) const {
        unsigned int uVar1 = field_0;
        int iVar2 = GetGutteringSlotCount();
        return arg1 / uVar1 + iVar2 * 2;
    }

    // 0x100bbd0e0
    void TextureAtlasSlotPacker::SlotUsageBitmap::MarkBitsUsed(unsigned int arg1, unsigned int arg2,
                                                               unsigned int arg3) {
        SetBits(arg1, arg2, arg3, false);
    }

    // 0x100bbd150
    void TextureAtlasSlotPacker::SlotUsageBitmap::MarkBitsUnused(unsigned int arg1, unsigned int arg2,
                                                                 unsigned int arg3) {
        SetBits(arg1, arg2, arg3, true);
    }

    // 0x100bbd520
    void TextureAtlasSlotPacker::ClearLastCheckedValues() {
        field_136 = 0;
        field_140 = 0;
        field_144 = 0;
    }

    // 0x100bbee30
    TextureAtlasSlotPacker::SlotUsageBitmap::~SlotUsageBitmap() {
        field_8.~vector();
    }

    // 0x100bbee40
    uint32_t TextureAtlasSlotPacker::GetGutteringSlotCount() const {
        uint8_t bVar1 = IsReadyAnim();
        return *(uint32_t*)((long)&field_8 + (unsigned long)bVar1 * 4);
    }

    // 0x100bc0900
    unsigned long TextureAtlasSlotPacker::FlushProvisionalSlots(
        fixedfunction::function<void(TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0> const&)::$_1::
    operator()(const TextureAtlasSlot& textureAtlasSlot) const {
        TextureAtlasSlotPacker* this_00;
        unsigned int arg3;
        uint64_t unaff_RBX;

        bool bVar1 = textureAtlasSlot.field_0 == -1;
        bool bVar2 = textureAtlasSlot.field_6 == '\0';
        if (!bVar2 && !bVar1) {
            this_00 = *(TextureAtlasSlotPacker**)this;
            arg3 = GetTextureSlotSize(this_00, (unsigned int)(unsigned short)textureAtlasSlot.field_4);
            this_00->field_96.MarkBitsUnused((unsigned int)textureAtlasSlot.field_8,
                                             (unsigned int)textureAtlasSlot.field_10, arg3);
            fixedfunction::function<void(TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>::operator()(
                *(function<void(TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>**)(this + 8));
        }
        return ((((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)(bVar2 || bVar1)) ^ 1) &
               4294967295;
    }

} // namespace jag::graphicutils

namespace jag::graphics {
    // 0x10085de50
    void TextureAtlasSlot2DGroup::operator[](int arg1) {
        (*this)[(long)arg1];
    }

} // namespace jag::graphics
