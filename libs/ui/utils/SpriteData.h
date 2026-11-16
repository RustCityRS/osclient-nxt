// libs/ui/utils/SpriteData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class SpriteData {
    public:
        GetSpriteHash() const;
        GetSpriteAtlasReference() const;
        SetSpriteRGB(unsigned int);
        uint GetSpriteShadowRGB() const;
        int GetSpriteID() const;
        int GetSpriteRGB() const;
        ~SpriteData();
        void GetUsePlayerModelRecolours();
        byte GetSpriteOutline() const;
        void SetSpriteAtlasReference(long long, shared_ptr<graphics::SpriteAtlasReference> const&);
        void DrawSpriteSlice(graphics::RT7Core&, int, int, int, int, unsigned int, math::Rect<float> const&,
                             render::Texture const*, float) const;
        void DecodeSpriteData(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        LoadSpriteAtlasReference(graphics::SpriteAtlasManager&, bool);
        void SetSpriteTiling(bool);
        void SetSpriteUseAlpha(bool);
        void SetSpriteVFlip(bool);
        void SetSpriteHFlip(bool);
        void SetSpriteUseClickMask(bool);
        void LoadStyleSheetSpriteData(StyleEntryID, StyleSheet const&);
        void GetSpriteUseAlpha() const;
        GetSpriteMapping(graphics::SpriteAtlasManager&, bool);
        void ObjSpriteCacheKeyDetails(long long, int&, bool&, bool&, unsigned int&, unsigned int&);
        int SetObjSpriteFromHashKey(long long);
        void SetUsePlayerModelRecolours(bool);
        void SetObjSpriteIsHighRes(bool);
        void SetSpriteOutline(unsigned char);
        void SetSpriteShadowRGB(unsigned int);
        GetSpriteDrawMode(unsigned int, unsigned int) const;
        void ConvertToContentBounds(int&, int&, int&, int&) const;
        void DrawSpriteSliceDebug(graphics::GUIManager&, int, int, int, int, unsigned int) const;
        SpriteData();
        byte GetSpriteAlpha() const;
        GetVisualMargin() const;
        bool IsSpriteValid() const;
        uint GetSpriteRGBA() const;
        void SetSpriteID(int);
        SetSpriteAlpha(unsigned char);
        void Reset();
        void GetObjSpriteIsHighRes() const;
        void GetSpriteVFlip() const;
        void GetSpriteHFlip() const;
        ushort GetSpriteRotate() const;
        void GetSpriteTiling() const;
        SpriteData(SpriteData&&);
        static /* 1 bytes */ m_enableSpriteSliceDebug;

        // data members, from how the methods use this: 48 bytes
        int m_spriteID;         // offset 0
        uint m_spriteShadowRGB; // offset 4
        ushort m_spriteRotate;  // offset 8
        byte m_spriteOutline;   // offset 10
        char _unknown_11[1];
        int m_spriteRGB;    // offset 12
        byte m_spriteAlpha; // offset 16
        byte field_17;      // offset 17
        byte field_18;      // offset 18
        byte field_19;      // offset 19
        byte field_20;      // offset 20
        char _unknown_21[3];
        ulong m_spriteAtlasReference; // offset 24
        shared_ptr field_32;          // offset 32
    };

    // 0x100539460, 32 bytes, inline, placed by class name and debug map
    // SpriteData::GetUsePlayerModelRecolours()
    void SpriteData::GetUsePlayerModelRecolours() {
        (&field_21, 5)->test();
    }

    // 0x100539480, 16 bytes, inline, placed by class name and debug map
    // SpriteData::GetSpriteOutline() const
    byte SpriteData::GetSpriteOutline() {
        return m_spriteOutline;
    }

    // 0x100539490, 32 bytes, inline, placed by class name and debug map
    // SpriteData::SetSpriteAtlasReference(long long, shared_ptr<graphics::SpriteAtlasReference> const&)
    void SpriteData::SetSpriteAtlasReference(longlong param_1, shared_ptr* param_2) {
        m_spriteAtlasReference = param_1;
        shared_ptr<graphics::SpriteAtlasReference>::operator=((shared_ptr<graphics::SpriteAtlasReference>*)field_32,
                                                              param_2);
    }

    // 0x100678b90, 32 bytes, inline, placed by class name
    // SpriteData::SetSpriteTiling(bool)
    void SpriteData::SetSpriteTiling(bool param_1) {
        (&field_21, 0, param_1)->set();
    }

    // 0x100678bb0, 48 bytes, inline, placed by class name
    // SpriteData::SetSpriteUseAlpha(bool)
    void SpriteData::SetSpriteUseAlpha(bool param_1) {
        (&field_21, 3, param_1)->set();
        m_spriteAtlasReference = 18446744073709551615;
    }

    // 0x100678be0, 32 bytes, inline, placed by class name
    // SpriteData::SetSpriteVFlip(bool)
    void SpriteData::SetSpriteVFlip(bool param_1) {
        (&field_21, 1, param_1)->set();
    }

    // 0x100678c00, 32 bytes, inline, placed by class name
    // SpriteData::SetSpriteHFlip(bool)
    void SpriteData::SetSpriteHFlip(bool param_1) {
        (&field_21, 2, param_1)->set();
    }

    // 0x100678c20, 32 bytes, inline, placed by class name
    // SpriteData::SetSpriteUseClickMask(bool)
    void SpriteData::SetSpriteUseClickMask(bool param_1) {
        (&field_21, 4, param_1)->set();
    }

    // 0x100678d80, 32 bytes, inline, placed by class name
    // SpriteData::GetSpriteUseAlpha() const
    void SpriteData::GetSpriteUseAlpha() {
        (&field_21, 3)->test();
    }

    // 0x100678f10, 32 bytes, inline, placed by class name
    // SpriteData::SetUsePlayerModelRecolours(bool)
    void SpriteData::SetUsePlayerModelRecolours(bool param_1) {
        (&field_21, 5, param_1)->set();
    }

    // 0x100678f30, 32 bytes, inline, placed by class name
    // SpriteData::SetObjSpriteIsHighRes(bool)
    void SpriteData::SetObjSpriteIsHighRes(bool param_1) {
        (&field_21, 6, param_1)->set();
    }

    // 0x100678f50, 32 bytes, inline, placed by class name
    // SpriteData::SetSpriteOutline(unsigned char)
    void SpriteData::SetSpriteOutline(uchar param_1) {
        m_spriteOutline = param_1;
        m_spriteAtlasReference = 18446744073709551615;
    }

    // 0x100678f70, 32 bytes, inline, placed by class name
    // SpriteData::SetSpriteShadowRGB(unsigned int)
    void SpriteData::SetSpriteShadowRGB(uint param_1) {
        m_spriteShadowRGB = param_1;
        m_spriteAtlasReference = 18446744073709551615;
    }

    // 0x100688ec0, 16 bytes, complete-object constructor, inline, placed by class name
    // SpriteData::SpriteData(): jumps straight to the base-object constructor

    // 0x100689a90, 16 bytes, inline, placed by class name
    // SpriteData::GetVisualMargin() const
    undefined4 SpriteData::GetVisualMargin() {
        undefined4 uVar1;

        uVar1._0_1_ = field_17;
        uVar1._1_1_ = field_18;
        uVar1._2_1_ = field_19;
        uVar1._3_1_ = field_20;
        return uVar1;
    }

    // 0x10068f8f0, 16 bytes, inline, placed by class name
    // SpriteData::IsSpriteValid() const
    bool SpriteData::IsSpriteValid() {
        return 0 < m_spriteID;
    }

    // 0x10068ffb0, 32 bytes, inline, placed by class name
    // SpriteData::GetSpriteRGBA() const
    uint SpriteData::GetSpriteRGBA() {
        return (uint)m_spriteAlpha | m_spriteRGB << 8;
    }

    // 0x10069f050, 16 bytes, inline, placed by class name
    // SpriteData::SetSpriteID(int)
    void SpriteData::SetSpriteID(int param_1) {
        m_spriteID = param_1;
        m_spriteAtlasReference = 18446744073709551615;
    }

    // 0x10069f0d0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SpriteData::SetSpriteAlpha(unsigned char)
    /* graphics::ModularParticleEmitter::SetEmitting(bool) */

    void graphics::ModularParticleEmitter::SetEmitting(bool param_1) {
        field_12[4] = param_1;
    }

    // 0x1006a5840, 32 bytes, inline, placed by class name
    // SpriteData::Reset()
    void SpriteData::Reset() {
        m_spriteID = -1;
        m_spriteAtlasReference = 18446744073709551615;
        shared_ptr<graphics::SpriteAtlasReference>::reset();
    }

    // 0x1006ab700, 32 bytes, inline, placed by class name
    // SpriteData::GetObjSpriteIsHighRes() const
    void SpriteData::GetObjSpriteIsHighRes() {
        (&field_21, 6)->test();
    }

    // 0x1006ac8f0, 32 bytes, inline, placed by class name
    // SpriteData::GetSpriteVFlip() const
    void SpriteData::GetSpriteVFlip() {
        (&field_21, 1)->test();
    }

    // 0x1006ac910, 32 bytes, inline, placed by class name
    // SpriteData::GetSpriteHFlip() const
    void SpriteData::GetSpriteHFlip() {
        (&field_21, 2)->test();
    }

    // 0x1006ac930, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SpriteData::GetSpriteRotate() const
    /* graphics::AnimBase::GetTransformCount() const */

    ushort graphics::AnimBase::GetTransformCount() {
        return m_transformCount;
    }

    // 0x1006ac9f0, 32 bytes, inline, placed by class name
    // SpriteData::GetSpriteTiling() const
    void SpriteData::GetSpriteTiling() {
        (&field_21, 0)->test();
    }

    // 0x1006af700, 96 bytes, base-object constructor, inline, placed by class name
    // SpriteData::SpriteData()
    void SpriteData::SpriteData() {
        _func_decltype_nullptr* in_RSI;

        m_spriteID = -1;
        m_spriteShadowRGB = 0;
        m_spriteRotate = 0;
        m_spriteOutline = 0;
        m_spriteRGB = 16777215;
        m_spriteAlpha = 255;
        new (&field_17) Margin();
        new (&field_21) eastl::bitset<4ul, unsigned char>();
        m_spriteAtlasReference = 18446744073709551615;
        new (field_32, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1006d6ac0, 16 bytes, complete-object constructor, inline, placed by class name
    // SpriteData::SpriteData(SpriteData&&): jumps straight to the base-object constructor

    // 0x1006d6ad0, 48 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SpriteData::SpriteData(SpriteData&&)
    /* graphics::RenderPassEffect::RenderPassEffect(graphics::RenderPassEffect&&) */

    void graphics::RenderPassEffect::RenderPassEffect(RenderPassEffect* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = param_1->field_0;
        uVar2 = param_1->field_8;
        uVar3 = param_1->field_24;
        field_16 = param_1->field_16;
        field_24 = uVar3;
        field_0 = uVar1;
        field_8 = uVar2;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)field_32, (shared_ptr*)param_1->field_32);
    }

} // namespace jag::ui

namespace jag::graphics {
    // 0x100539720, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SunlightEffectSaveRestore::SunlightEffectSaveRestore(SunlightDirectLighting&): jumps straight to the base-object constructor

} // namespace jag::graphics
