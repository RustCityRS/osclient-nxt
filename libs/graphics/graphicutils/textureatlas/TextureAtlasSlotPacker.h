// libs/graphics/graphicutils/textureatlas/TextureAtlasSlotPacker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphicutils {
    class TextureAtlasSlotPacker {
    public:
        class SlotUsageBitmap;
        GetAtlasQuality() const;
        GetAtlasSlotCount() const;
        GetAtlasUsage() const;
        GetTotalSlots() const;
        UseCompressedTextures() const;
        GetAtlasPixelResolution() const;
        float GetSlotUVSize() const;
        int GetMaxAtlasSlotCount() const;
        long GetSlot(unsigned int, unsigned int) const;
        GetTextureResolution() const;
        void ClearTextureSlots();
        GetTexturePixelRegion(unsigned int, unsigned int) const;
        GetTextureUVCoordinates(unsigned int, unsigned int) const;
        ~TextureAtlasSlotPacker();
        GetMipLimit() const;
        TextureAtlasSlotPacker(TextureAtlasQuality const&, TextureAtlasUsage const*, bool);
        void AddAtlasSlotData(bool, unsigned int, unsigned int, TextureAtlasSlot2D const&);
        void GetAtlasSlot(unsigned int, unsigned int, bool);
        int GetTextureSlotSize(unsigned int) const;
        AllocSlot2D(unsigned int);
        AllocSlot2D(unsigned int, unsigned int);
        void FreeSlot2D(TextureAtlasSlot2D const&);
        void ClearLastCheckedValues();
        void FlushProvisionalSlots(
            fixedfunction::function<void(TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0> const&);
        void GetAtlasSlot(unsigned int, unsigned int, bool) const;
        GetGutteringSlotCount() const;

        // data members, from how the methods use this: 152 bytes
        ushort field_0; // offset 0
        ushort field_2; // offset 2
        ushort field_4; // offset 4
        char _unknown_6[2];
        undefined8 field_8;          // offset 8
        undefined8 field_16;         // offset 16
        undefined8 field_24;         // offset 24
        undefined4 field_32;         // offset 32
        int field_36;                // offset 36
        int field_40;                // offset 40
        uint field_44;               // offset 44
        TextureAtlasUsage* field_48; // offset 48
        bool field_56;               // offset 56
        char _unknown_57[79];
        uint field_136; // offset 136
        uint field_140; // offset 140
        uint field_144; // offset 144
        char _unknown_148[4];
    };

    class TextureAtlasSlotPacker::SlotUsageBitmap {
    public:
        void Clear();
        SlotUsageBitmap(unsigned int);
        ulong TestRegion(unsigned int, unsigned int, unsigned int) const;
        SlotUsageBitmap* GetSlotMasks(unsigned int, unsigned int);
        ulong TestRow(unsigned int, unsigned int, unsigned int, unsigned long long, unsigned long long) const;
        void SetBits(unsigned int, unsigned int, unsigned int, bool);
        ~SlotUsageBitmap();
        void MarkBitsUsed(unsigned int, unsigned int, unsigned int);
        void MarkBitsUnused(unsigned int, unsigned int, unsigned int);
        static /* 12 bytes */ StorageTypeBitCount; // = { 64, 16711935, 0 }

        // data members, from how the methods use this: 24 bytes
        uint field_0;  // offset 0
        uint field_4;  // offset 4
        ulong field_8; // offset 8
        int field_16;  // offset 16
        char _unknown_20[4];
    };

    // 0x10085d5f0, 48 bytes, inline, placed by class name and debug map
    // TextureAtlasSlotPacker::GetSlotUVSize() const
    float TextureAtlasSlotPacker::GetSlotUVSize() {
        uint uVar1;
        uint uVar2;

        uVar1._0_2_ = field_0;
        uVar1._2_2_ = field_2;
        uVar2 = GetNormalEmissiveMapID();
        return (float)uVar1 / (float)uVar2;
    }

    // 0x10085ddd0, 48 bytes, inline, placed by class name and debug map
    // TextureAtlasSlotPacker::GetMaxAtlasSlotCount() const
    int TextureAtlasSlotPacker::GetMaxAtlasSlotCount() {
        MapArea* this_00;
        long lVar1;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        return field_36 - (int)*(char*)(lVar1 + 164);
    }

    // 0x1008ad9a0, 64 bytes, inline, placed by class name
    // TextureAtlasSlotPacker::GetSlot(unsigned int, unsigned int) const
    long TextureAtlasSlotPacker::GetSlot(uint param_1, uint param_2) {
        long lVar1;
        long lVar2;
        long lVar3;

        lVar1 = GetAtlasSlot(this, param_1, param_2, true);
        lVar2 = (&field_64)->end();
        lVar3 = 0;
        if (lVar1 != lVar2) {
            lVar3 = lVar1;
        }
        return lVar3;
    }

    // 0x1008af3d0, 48 bytes, inline, placed by class name
    // TextureAtlasSlotPacker::GetTextureResolution() const
    undefined1[16] TextureAtlasSlotPacker::GetTextureResolution() {
        uint uVar1;
        uint uVar2;
        undefined1 auVar3[16];

        uVar1 = field_44;
        uVar2 = math::IntegerExponentPow<int>(2, field_32);
        auVar3._8_8_ = (ulong)uVar1 % (ulong)uVar2;
        auVar3._0_8_ = (ulong)uVar1 / (ulong)uVar2;
        return auVar3;
    }

    // 0x1008af400, 48 bytes, inline, placed by class name
    // TextureAtlasSlotPacker::ClearTextureSlots()
    void TextureAtlasSlotPacker::ClearTextureSlots() {
        (&field_64, 0)->set_capacity();
        (&field_96)->Clear();
    }

    // 0x1008ccca0, 144 bytes, inline, placed by class name
    // TextureAtlasSlotPacker::GetTexturePixelRegion(unsigned int, unsigned int) const
    TextureAtlasSlotPacker* TextureAtlasSlotPacker::GetTexturePixelRegion(uint param_1, uint param_2) {
        long lVar1;
        long lVar2;
        uint in_ECX;
        undefined4 in_register_00000034;
        TextureAtlasSlotPacker* this_00;

        this_00 = (TextureAtlasSlotPacker*)CONCAT44(in_register_00000034, param_1);
        lVar1 = GetAtlasSlot(this_00, param_2, in_ECX, true);
        lVar2 = (&this_00->field_64)->end();
        if (lVar1 == lVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("textureSlotIt != m_textureSlots.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.h",
                      177, (char*)0);
        }
        new (this) oldscape::dash3d::GridRect(param_2 * *(int*)this_00, in_ECX * *(int*)this_00,
                                              (uint) * (ushort*)(lVar1 + 4), (uint) * (ushort*)(lVar1 + 4));
        return this;
    }

    // 0x1008ccd40, 304 bytes, inline, placed by class name
    // TextureAtlasSlotPacker::GetTextureUVCoordinates(unsigned int, unsigned int) const
    undefined1[16] TextureAtlasSlotPacker::GetTextureUVCoordinates(uint param_1, uint param_2) {
        uint uVar1;
        vector* pvVar2;
        uint* puVar3;
        undefined1 auVar5[16];
        undefined1 local_48[16];
        ImVec4 local_38[16];
        float local_28;
        float local_24;
        float local_20;
        float local_1c;

        GetTexturePixelRegion((TextureAtlasSlotPacker*)local_48, (uint)this, param_1);
        pvVar2 = local_48->SSOBeginPtr((type*)(TextureAtlasSlotPacker*)this);
        local_1c = (float)*(uint*)pvVar2;
        uVar1 = GetNormalEmissiveMapID();
        local_1c = local_1c / (float)uVar1;
        puVar3 = (uint*)local_48->y();
        local_24 = (float)*puVar3;
        uVar1 = GetNormalEmissiveMapID();
        local_24 = local_24 / (float)uVar1;
        puVar3 = (uint*)local_48->second();
        local_20 = (float)*puVar3;
        uVar1 = GetNormalEmissiveMapID();
        local_20 = local_20 / (float)uVar1 + local_1c;
        puVar3 = (uint*)local_48->qw();
        local_28 = (float)*puVar3;
        uVar1 = GetNormalEmissiveMapID();
        ImVec4::ImVec4(local_38, local_1c, local_24, local_20, local_28 / (float)uVar1 + local_24);
        auVar5[0] = local_38[0];
        auVar5[1] = local_38[1];
        auVar5[2] = local_38[2];
        auVar5[3] = local_38[3];
        auVar5[4] = local_38[4];
        auVar5[5] = local_38[5];
        auVar5[6] = local_38[6];
        auVar5[7] = local_38[7];
        auVar5[8] = local_38[8];
        auVar5[9] = local_38[9];
        auVar5[10] = local_38[10];
        auVar5[11] = local_38[11];
        auVar5[12] = local_38[12];
        auVar5[13] = local_38[13];
        auVar5[14] = local_38[14];
        auVar5[15] = local_38[15];
        return auVar5;
    }

    // 0x1008cd2a0, 80 bytes, inline, placed by class name
    // TextureAtlasSlotPacker::SlotUsageBitmap::Clear()
    void TextureAtlasSlotPacker::SlotUsageBitmap::Clear() {
        ulonglong* puVar1;
        ulonglong* puVar2;
        ulonglong local_20;

        puVar1 = (ulonglong*)(&field_8)->HeapBeginPtr();
        puVar2 = (ulonglong*)(&field_8)->end();
        local_20 = 18446744073709551615;
        std::fill<unsigned long long*, unsigned long long>(puVar1, puVar2, &local_20);
    }

    // 0x1008d08d0, 16 bytes, complete-object destructor, inline, placed by class name
    // TextureAtlasSlotPacker::~TextureAtlasSlotPacker(): jumps straight to the base-object destructor

    // 0x1008d08e0, 48 bytes, base-object destructor, inline, placed by class name
    // TextureAtlasSlotPacker::~TextureAtlasSlotPacker()
    void TextureAtlasSlotPacker::~TextureAtlasSlotPacker() {
        (&field_96)->~SlotUsageBitmap();
        (&field_64)->~vector();
    }

    // 0x100922ca0, 32 bytes, inline, placed by class name
    // TextureAtlasSlotPacker::GetMipLimit() const
    undefined4 TextureAtlasSlotPacker::GetMipLimit() {
        byte bVar1;

        bVar1 = IsReadyAnim();
        return *(undefined4*)((long)&field_16 + (ulong)bVar1 * 4);
    }

    // 0x100bbce40, 16 bytes, complete-object destructor, inline, placed by class name
    // TextureAtlasSlotPacker::SlotUsageBitmap::~SlotUsageBitmap(): jumps straight to the base-object destructor

    // 0x100bbd0c0, 32 bytes, inline, placed by class name
    // TextureAtlasSlotPacker::GetTextureSlotSize(unsigned int) const
    int TextureAtlasSlotPacker::GetTextureSlotSize(uint param_1) {
        uint uVar1;
        int iVar2;

        uVar1 = *(uint*)this;
        iVar2 = GetGutteringSlotCount(this);
        return param_1 / uVar1 + iVar2 * 2;
    }

    // 0x100bbd0e0, 16 bytes, inline, placed by class name
    // TextureAtlasSlotPacker::SlotUsageBitmap::MarkBitsUsed(unsigned int, unsigned int, unsigned int)
    void TextureAtlasSlotPacker::SlotUsageBitmap::MarkBitsUsed(uint param_1, uint param_2, uint param_3) {
        SetBits(this, param_1, param_2, param_3, false);
    }

    // 0x100bbd150, 32 bytes, inline, placed by class name
    // TextureAtlasSlotPacker::SlotUsageBitmap::MarkBitsUnused(unsigned int, unsigned int, unsigned int)
    void TextureAtlasSlotPacker::SlotUsageBitmap::MarkBitsUnused(uint param_1, uint param_2, uint param_3) {
        SetBits(this, param_1, param_2, param_3, true);
    }

    // 0x100bbd520, 32 bytes, inline, placed by class name
    // TextureAtlasSlotPacker::ClearLastCheckedValues()
    void TextureAtlasSlotPacker::ClearLastCheckedValues() {
        field_136 = 0;
        field_140 = 0;
        field_144 = 0;
    }

    // 0x100bbee30, 16 bytes, base-object destructor, inline, placed by class name
    // TextureAtlasSlotPacker::SlotUsageBitmap::~SlotUsageBitmap()
    void TextureAtlasSlotPacker::SlotUsageBitmap::~SlotUsageBitmap() {
        (&field_8)->~vector();
    }

    // 0x100bbee40, 32 bytes, inline, placed by class name
    // TextureAtlasSlotPacker::GetGutteringSlotCount() const
    undefined4 TextureAtlasSlotPacker::GetGutteringSlotCount() {
        byte bVar1;

        bVar1 = IsReadyAnim();
        return *(undefined4*)((long)&field_8 + (ulong)bVar1 * 4);
    }

    // 0x100bc0900, 112 bytes, inline, placed by class name
    // TextureAtlasSlotPacker::FlushProvisionalSlots(fixedfunction::function<void (TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0> const&)::$_1::operator()(TextureAtlasSlot const&) const
    /* TextureAtlasSlotPacker::FlushProvisionalSlots(fixedfunction::function<void
   (TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>
   const&)::$_1::TEMPNAMEPLACEHOLDERVALUE(TextureAtlasSlot const&) const */

    ulong TextureAtlasSlotPacker::FlushProvisionalSlots(
        fixedfunction::function<void(TextureAtlasSlot_const&), 64ul, 16ul,
                                (fixedfunction::Methods)0> const&)::$_1::operator()(TextureAtlasSlot* param_1) {
        TextureAtlasSlotPacker* this_00;
        uint uVar1;
        undefined8 unaff_RBX;
        bool bVar2;
        bool bVar3;

        bVar2 = param_1->field_0 == -1;
        bVar3 = param_1->field_6 == '\0';
        if (!bVar3 && !bVar2) {
            this_00 = *(TextureAtlasSlotPacker**)this;
            uVar1 = GetTextureSlotSize(this_00, (uint)(ushort)param_1->field_4);
            (&this_00->field_96, (uint)param_1->field_8, (uint)param_1->field_10, uVar1)->MarkBitsUnused();
            fixedfunction::function<void(TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>::operator()(
                *(function<void(TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>**)(this + 8), param_1);
        }
        return (CONCAT71((int7)((ulong)unaff_RBX >> 8), bVar3 || bVar2) ^ 1) & 4294967295;
    }

} // namespace jag::graphicutils

namespace jag::graphics {
    // 0x10085de40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TextureAtlasSlot2DGroup::TextureAtlasSlot2DGroup(): jumps straight to the base-object constructor

    // 0x10085de50, 16 bytes, inline, placed by debug map only (low confidence)
    // TextureAtlasSlot2DGroup::operator[](int)
    void TextureAtlasSlot2DGroup::operator[](int param_1) {
        std::array<graphicutils::TextureAtlasSlot2D, 3ul>::operator[](
            (array<graphicutils::TextureAtlasSlot2D, 3ul>*)this, (long)param_1);
    }

    // 0x10085ec40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MaterialInfo::MaterialInfo(int, std::array<int, 3ul> const&, std::array<unsigned int, 3ul> const&): jumps straight to the base-object constructor

} // namespace jag::graphics

namespace jag::fixedfunction {
    // 0x10085de70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*, WrapArray<graphics::MaterialInfo const> const&)::$_5, void>(graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*, WrapArray<graphics::MaterialInfo const> const&)::$_5&&): jumps straight to the base-object constructor

    // 0x10085e1c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction
