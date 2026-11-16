// libs/constants/Language.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class Language {
    public:
        Language(unsigned int arg1, const char* str1, const char* str2, const ModeWhere* modeWhere, const char* str3);
        void GetByID(unsigned int arg1);
        uint8_t* GetByCode(const char* str);
        static Language const* EN; // = &enumArray
        static Language const*
            DE; // = &enumArray[1] /* Language(1, "de", "German", (ModeWhere *)ModeWhere::LIVE, "DE") */
        static Language const*
            FR; // = &enumArray[2] /* Language(2, "fr", "French", (ModeWhere *)ModeWhere::LIVE, "FR") */
        static Language const*
            PT; // = &enumArray[3] /* Language(3, "pt", "Portuguese", (ModeWhere *)ModeWhere::LIVE, "BR") */
        static Language const*
            NL; // = &enumArray[4] /* Language(4, "nl", "Dutch", (ModeWhere *)ModeWhere::WTWIP, "NL") */
        static Language const*
            ES; // = &enumArray[5] /* Language(5, "es", "Spanish", (ModeWhere *)ModeWhere::WTWIP, "ES") */
        static Language const*
            ES_MX; // = &enumArray[6] /* Language(6, "es-mx", "Spanish (Latin American)", (ModeWhere *)ModeWhere::WTWIP, "MX") */
        static Language enumArray[7]; // initialised in its definition

    private:
        PlayerDataComparator<oldscape::social::FriendChatUser>* field_0;
        unsigned int field_8;
        uint8_t _unknown_12[4];
        char* field_16;
        ModeWhere* field_24;
        char* field_32;
    };

    // 0x100610160
    WrapArray<char const* const> GetEnumValueNames<LanguageID>() {
        WrapArray<char const* const> result;
        result.WrapArray<std::array<char const*, 7ul>>(*PTR_VALUE_NAMES_100ee9cb8);
        return result;
    }

    // 0x100611150
    WrapArray<char const* const> GetEnumValueNames<game::option::EnumParticleQualityLevel>() {
        WrapArray<char const* const> result;
        result.WrapArray<std::array<char const*, 4ul>>(*PTR_VALUE_NAMES_100ee9d08);
        return result;
    }

    // 0x100611490
    WrapArray<char const* const> GetEnumValueNames<graphics::SSAOPass::Mode>() {
        WrapArray<char const* const> result;
        result.WrapArray<std::array<char const*, 4ul>>(*PTR_VALUE_NAMES_100ee9d28);
        return result;
    }

    // 0x100611600
    WrapArray<char const* const> GetEnumValueNames<game::option::EnumBloom>() {
        WrapArray<char const* const> result;
        result.WrapArray<std::array<char const*, 4ul>>(*PTR_VALUE_NAMES_100ee9d10);
        return result;
    }

    // 0x100611730
    WrapArray<char const* const> GetEnumValueNames<game::option::EnumAntialiasingMode>() {
        WrapArray<char const* const> result;
        result.WrapArray<std::array<char const*, 4ul>>(*PTR_VALUE_NAMES_100ee9cf0);
        return result;
    }

    // 0x100611860
    WrapArray<char const* const> GetEnumValueNames<game::option::EnumAnisotropicFiltering>() {
        WrapArray<char const* const> result;
        result.WrapArray<std::array<char const*, 5ul>>(*PTR_VALUE_NAMES_100ee9d00);
        return result;
    }

    // 0x100b895e0
    Language::Language(unsigned int arg1, const char* str1, const char* str2, const ModeWhere* modeWhere,
                       const char* str3) {
        new (this) eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(str2);
        field_8 = arg1;
        field_16 = str1;
        field_24 = modeWhere;
        field_32 = str3;
    }

} // namespace jag

namespace jag::math {
    // 0x100610270
    LanguageID Clamp<LanguageID>(const LanguageID& languageID1, const LanguageID& languageID2,
                                 const LanguageID& languageID3) {
        auto pLVar1 = std::max<LanguageID>(languageID2, languageID1);
        pLVar1 = std::min<LanguageID>(languageID3, *pLVar1);
        return *pLVar1;
    }

    // 0x100610920
    Range<unsigned char>::Range(unsigned char arg1, unsigned char arg2) {
        *this = (Vector2T<unsigned char>)arg1;
        this[1] = (Vector2T<unsigned char>)arg2;
    }

    // 0x1006120a0
    QuaternionT<float> operator- <float>(const QuaternionT<float>& quaternion) {
        Layout* in_RSI;

        auto pfVar4 = in_RSI->SSOBeginPtr();
        float fVar1 = *pfVar4;
        pfVar4 = (float*)in_RSI->y();
        float fVar2 = *pfVar4;
        pfVar4 = (float*)in_RSI->second();
        float fVar3 = *pfVar4;
        pfVar4 = (float*)in_RSI->qw();
        new (quaternion) QuaternionT<float>(-fVar1, -fVar2, -fVar3, -*pfVar4);
        return quaternion;
    }

    // 0x100613510
    game::option::EnumBrightness
    Clamp<game::option::EnumBrightness>(const game::option::EnumBrightness& enumBrightness1,
                                        const game::option::EnumBrightness& enumBrightness2,
                                        const game::option::EnumBrightness& enumBrightness3) {
        auto pEVar1 = std::max<game::option::EnumBrightness>(enumBrightness2, enumBrightness1);
        pEVar1 = std::min<game::option::EnumBrightness>(enumBrightness3, *pEVar1);
        return *pEVar1;
    }

    // 0x100613850
    game::option::EnumRemoveRoof
    Clamp<game::option::EnumRemoveRoof>(const game::option::EnumRemoveRoof& enumRemoveRoof1,
                                        const game::option::EnumRemoveRoof& enumRemoveRoof2,
                                        const game::option::EnumRemoveRoof& enumRemoveRoof3) {
        auto pEVar1 = std::max<game::option::EnumRemoveRoof>(enumRemoveRoof2, enumRemoveRoof1);
        pEVar1 = std::min<game::option::EnumRemoveRoof>(enumRemoveRoof3, *pEVar1);
        return *pEVar1;
    }

    // 0x100613ea0
    render::VSyncMode Clamp<render::VSyncMode>(const render::VSyncMode& vSyncMode1, const render::VSyncMode& vSyncMode2,
                                               const render::VSyncMode& vSyncMode3) {
        auto pVVar1 = std::max<render::VSyncMode>(vSyncMode2, vSyncMode1);
        pVVar1 = std::min<render::VSyncMode>(vSyncMode3, *pVVar1);
        return *pVVar1;
    }

    // 0x100614720
    game::option::EnumAutoSetup Clamp<game::option::EnumAutoSetup>(const game::option::EnumAutoSetup& enumAutoSetup1,
                                                                   const game::option::EnumAutoSetup& enumAutoSetup2,
                                                                   const game::option::EnumAutoSetup& enumAutoSetup3) {
        auto pEVar1 = std::max<game::option::EnumAutoSetup>(enumAutoSetup2, enumAutoSetup1);
        pEVar1 = std::min<game::option::EnumAutoSetup>(enumAutoSetup3, *pEVar1);
        return *pEVar1;
    }

} // namespace jag::math

namespace jag::game::option {
    // 0x10060fef0
    Language::Language(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<LanguageID>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<LanguageID>(rt7Core, settings, str, local_30);
    }

    // 0x100610030
    void Language::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                    LanguageID languageID) {
        SaveSetting();
    }

    // 0x100611620
    AntialiasingMode::~AntialiasingMode() {
        ~Option(this);
    }

} // namespace jag::game::option

// 0x100612080
void sin(float arg1) {
    _sinf();
}

// 0x100612090
void cos(float arg1) {
    _cosf();
}

// 0x100612130
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}

namespace jag::oldscape {
    class LanguageMessage {
    public:
        ~LanguageMessage();
        LanguageMessage(int arg1, const eastl::string& str);

        uint8_t _unknown_0[16];
    };

} // namespace jag::oldscape
