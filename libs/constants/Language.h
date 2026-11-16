// libs/constants/Language.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class Language {
    public:
        Language(unsigned int, char const*, char const*, ModeWhere const*, char const*);
        void GetByID(unsigned int);
        GetByCode(char const*);
        static Language const* /* 8 bytes */ EN; // = &enumArray
        static Language const*                   /* 8 bytes */
            DE;                // = &enumArray[1] /* Language(1, "de", "German", (ModeWhere *)ModeWhere::LIVE, "DE") */
        static Language const* /* 8 bytes */
            FR;                // = &enumArray[2] /* Language(2, "fr", "French", (ModeWhere *)ModeWhere::LIVE, "FR") */
        static Language const* /* 8 bytes */
            PT; // = &enumArray[3] /* Language(3, "pt", "Portuguese", (ModeWhere *)ModeWhere::LIVE, "BR") */
        static Language const* /* 8 bytes */
            NL;                // = &enumArray[4] /* Language(4, "nl", "Dutch", (ModeWhere *)ModeWhere::WTWIP, "NL") */
        static Language const* /* 8 bytes */
            ES; // = &enumArray[5] /* Language(5, "es", "Spanish", (ModeWhere *)ModeWhere::WTWIP, "ES") */
        static Language const* /* 8 bytes */
            ES_MX; // = &enumArray[6] /* Language(6, "es-mx", "Spanish (Latin American)", (ModeWhere *)ModeWhere::WTWIP, "MX") */
        static Language /* 280 bytes */ enumArray[7]; // initialised in its definition

        // data members, from how the methods use this: 40 bytes
        EntityHighlight** field_0; // offset 0
        uint field_8;              // offset 8
        char _unknown_12[4];
        char* field_16;      // offset 16
        ModeWhere* field_24; // offset 24
        char* field_32;      // offset 32
    };

    // 0x100610160, 32 bytes, inline, placed by debug map only (low confidence)
    // WrapArray<char const* const> GetEnumValueNames<LanguageID>()
    jag* GetEnumValueNames<LanguageID>() {
        WrapArray<char const* const>::WrapArray<std::array<char const*, 7ul>>((WrapArray<char const* const>*)this,
                                                                              (array*)PTR_VALUE_NAMES_100ee9cb8);
        return this;
    }

    // 0x100611150, 32 bytes, inline, placed by debug map only (low confidence)
    // WrapArray<char const* const> GetEnumValueNames<game::option::EnumParticleQualityLevel>()
    jag* GetEnumValueNames<game::option::EnumParticleQualityLevel>() {
        WrapArray<char const* const>::WrapArray<std::array<char const*, 4ul>>((WrapArray<char const* const>*)this,
                                                                              (array*)PTR_VALUE_NAMES_100ee9d08);
        return this;
    }

    // 0x100611490, 32 bytes, inline, placed by debug map only (low confidence)
    // WrapArray<char const* const> GetEnumValueNames<graphics::SSAOPass::Mode>()
    jag* GetEnumValueNames<graphics::SSAOPass::Mode>() {
        WrapArray<char const* const>::WrapArray<std::array<char const*, 4ul>>((WrapArray<char const* const>*)this,
                                                                              (array*)PTR_VALUE_NAMES_100ee9d28);
        return this;
    }

    // 0x100611600, 32 bytes, inline, placed by debug map only (low confidence)
    // WrapArray<char const* const> GetEnumValueNames<game::option::EnumBloom>()
    jag* GetEnumValueNames<game::option::EnumBloom>() {
        WrapArray<char const* const>::WrapArray<std::array<char const*, 4ul>>((WrapArray<char const* const>*)this,
                                                                              (array*)PTR_VALUE_NAMES_100ee9d10);
        return this;
    }

    // 0x100611730, 32 bytes, inline, placed by debug map only (low confidence)
    // WrapArray<char const* const> GetEnumValueNames<game::option::EnumAntialiasingMode>()
    jag* GetEnumValueNames<game::option::EnumAntialiasingMode>() {
        WrapArray<char const* const>::WrapArray<std::array<char const*, 4ul>>((WrapArray<char const* const>*)this,
                                                                              (array*)PTR_VALUE_NAMES_100ee9cf0);
        return this;
    }

    // 0x100611860, 32 bytes, inline, placed by debug map only (low confidence)
    // WrapArray<char const* const> GetEnumValueNames<game::option::EnumAnisotropicFiltering>()
    jag* GetEnumValueNames<game::option::EnumAnisotropicFiltering>() {
        WrapArray<char const* const>::WrapArray<std::array<char const*, 5ul>>((WrapArray<char const* const>*)this,
                                                                              (array*)PTR_VALUE_NAMES_100ee9d00);
        return this;
    }

    // 0x100b89380, 16 bytes, complete-object constructor, inline, placed by class name
    // Language::Language(unsigned int, char const*, char const*, ModeWhere const*, char const*): jumps straight to the base-object constructor

    // 0x100b895e0, 80 bytes, base-object constructor, inline, placed by class name
    // Language::Language(unsigned int, char const*, char const*, ModeWhere const*, char const*)
    void Language::Language(uint param_1, char* param_2, char* param_3, ModeWhere* param_4, char* param_5) {
        new (this)
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(param_3, param_2);
        field_8 = param_1;
        field_16 = param_2;
        field_24 = param_4;
        field_32 = param_5;
    }

} // namespace jag

namespace jag::math {
    // 0x100610270, 48 bytes, inline, placed by debug map only (low confidence)
    // LanguageID Clamp<LanguageID>(LanguageID const&, LanguageID const&, LanguageID const&)
    undefined4 Clamp<LanguageID>(LanguageID* param_1, LanguageID* param_2, LanguageID* param_3) {
        LanguageID* pLVar1;
        undefined4* puVar2;

        pLVar1 = std::max<LanguageID>(param_2, param_1);
        puVar2 = (undefined4*)std::min<LanguageID>(param_3, pLVar1);
        return *puVar2;
    }

    // 0x100610740, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Range<unsigned char>::Range(unsigned char, unsigned char): jumps straight to the base-object constructor

    // 0x100610920, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Range<unsigned char>::Range(unsigned char, unsigned char)
    /* Vector2T<unsigned char>::Vector2T(unsigned char, unsigned char) */

    void Vector2T<unsigned char>::Vector2T(uchar param_1, uchar param_2) {
        *this = (Vector2T<unsigned char>)param_1;
        this[1] = (Vector2T<unsigned char>)param_2;
    }

    // 0x1006120a0, 144 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float> operator-<float>(QuaternionT<float> const&)
    /* QuaternionT<float> TEMPNAMEPLACEHOLDERVALUE(QuaternionT<float>
   const&) */

    math* operator-(QuaternionT* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        vector* pvVar4;
        float* pfVar5;

        pvVar4 = param_1->SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar4;
        pfVar5 = (float*)param_1->y();
        fVar2 = *pfVar5;
        pfVar5 = (float*)param_1->second();
        fVar3 = *pfVar5;
        pfVar5 = (float*)param_1->qw();
        new (this) QuaternionT<float>(-fVar1, -fVar2, -fVar3, -*pfVar5);
        return this;
    }

    // 0x100613510, 48 bytes, inline, placed by debug map only (low confidence)
    // game::option::EnumBrightness Clamp<game::option::EnumBrightness>(game::option::EnumBrightness const&, game::option::EnumBrightness const&, game::option::EnumBrightness const&)
    undefined4 Clamp<game::option::EnumBrightness>(EnumBrightness* param_1, EnumBrightness* param_2,
                                                   EnumBrightness* param_3) {
        EnumBrightness* pEVar1;
        undefined4* puVar2;

        pEVar1 = std::max<game::option::EnumBrightness>(param_2, param_1);
        puVar2 = (undefined4*)std::min<game::option::EnumBrightness>(param_3, pEVar1);
        return *puVar2;
    }

    // 0x100613850, 48 bytes, inline, placed by debug map only (low confidence)
    // game::option::EnumRemoveRoof Clamp<game::option::EnumRemoveRoof>(game::option::EnumRemoveRoof const&, game::option::EnumRemoveRoof const&, game::option::EnumRemoveRoof const&)
    undefined4 Clamp<game::option::EnumRemoveRoof>(EnumRemoveRoof* param_1, EnumRemoveRoof* param_2,
                                                   EnumRemoveRoof* param_3) {
        EnumRemoveRoof* pEVar1;
        undefined4* puVar2;

        pEVar1 = std::max<game::option::EnumRemoveRoof>(param_2, param_1);
        puVar2 = (undefined4*)std::min<game::option::EnumRemoveRoof>(param_3, pEVar1);
        return *puVar2;
    }

    // 0x100613ea0, 48 bytes, inline, placed by debug map only (low confidence)
    // render::VSyncMode Clamp<render::VSyncMode>(render::VSyncMode const&, render::VSyncMode const&, render::VSyncMode const&)
    undefined4 Clamp<render::VSyncMode>(VSyncMode* param_1, VSyncMode* param_2, VSyncMode* param_3) {
        VSyncMode* pVVar1;
        undefined4* puVar2;

        pVVar1 = std::max<render::VSyncMode>(param_2, param_1);
        puVar2 = (undefined4*)std::min<render::VSyncMode>(param_3, pVVar1);
        return *puVar2;
    }

    // 0x100614720, 48 bytes, inline, placed by debug map only (low confidence)
    // game::option::EnumAutoSetup Clamp<game::option::EnumAutoSetup>(game::option::EnumAutoSetup const&, game::option::EnumAutoSetup const&, game::option::EnumAutoSetup const&)
    undefined4 Clamp<game::option::EnumAutoSetup>(EnumAutoSetup* param_1, EnumAutoSetup* param_2,
                                                  EnumAutoSetup* param_3) {
        EnumAutoSetup* pEVar1;
        undefined4* puVar2;

        pEVar1 = std::max<game::option::EnumAutoSetup>(param_2, param_1);
        puVar2 = (undefined4*)std::min<game::option::EnumAutoSetup>(param_3, pEVar1);
        return *puVar2;
    }

} // namespace jag::math

namespace jag::game::option {
    // 0x100608aa0, 16 bytes, complete-object constructor, inline, placed by class name
    // Language::Language(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x100609160, 16 bytes, complete-object destructor, inline, placed by class name
    // Language::~Language(): jumps straight to the base-object destructor

    // 0x10060fef0, 96 bytes, base-object constructor, inline, placed by class name
    // Language::Language(graphics::RT7Core&, Settings&, char const*)
    void Language::Language(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<LanguageID>(param_1, param_2, param_3, local_30);
        field_0 = PTR_vtable_100ee85c8 + 16;
    }

    // 0x10060ffe0, 32 bytes, deleting destructor, inline, placed by class name
    // Language::~Language()
    void Language::~Language() {
        ~Language(this);
        operator_delete(this);
    }

    // 0x100610030, 16 bytes, inline, placed by class name
    // Language::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, LanguageID)
    void Language::ApplySettingImpl() {
        SaveSetting();
    }

    // 0x100611620, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // AntialiasingMode::~AntialiasingMode()
    /* Option<EnumAntialiasingMode>::~Option() */

    void Option<EnumAntialiasingMode>::~Option() {
        ~Option(this);
    }

} // namespace jag::game::option

// 0x100612080, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x100612090, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x100612130, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}

namespace jag::oldscape {
    class LanguageMessage {
    public:
        ~LanguageMessage();
        LanguageMessage(int, eastl::string const&);

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[16];
    };

} // namespace jag::oldscape
