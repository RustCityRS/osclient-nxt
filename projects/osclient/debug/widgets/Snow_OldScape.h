// projects/osclient/debug/widgets/Snow_OldScape.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    // 0x1000173f0
    int HiscoresInstanceToID(HiscoresInstance hiscoresInstance) {
        return (1 < (int)hiscoresInstance) + hiscoresInstance;
    }

    // 0x1000176c0
    void HiscoresInstanceToName(eastl::string& str, HiscoresInstance hiscoresInstance) {
        str = &typeToInstance[(unsigned long)hiscoresInstance];
    }

    // 0x100048320
    void GetEnumRange<ClientWindowMode>(ClientWindowMode& clientWindowMode1, ClientWindowMode& clientWindowMode2) {
        clientWindowMode1 = 1;
        clientWindowMode2 = 2;
    }

    // 0x1000488a0
    void GetEnumRange<ScaledUIQuality>(ScaledUIQuality& scaledUIQuality1, ScaledUIQuality& scaledUIQuality2) {
        scaledUIQuality1 = 0;
        scaledUIQuality2 = 2;
    }

    // 0x10004a3b0
    bool IsValidEnumValue<hal::Haptics::ImpactStrength>(std::underlying_type<hal::Haptics::ImpactStrength>::type arg1) {
        return (unsigned int)arg1 < 3;
    }

    // 0x100065c20
    Json::Value JsonSerialize<RSevenDebugConfiguration>(const RSevenDebugConfiguration& rSevenDebugConfiguration) {
        rSevenDebugConfiguration.Serialize();
        return rSevenDebugConfiguration;
    }

    // 0x100065f50
    void JsonDeserialize<RSevenDebugConfiguration>(const Json::Value& value,
                                                   RSevenDebugConfiguration& rSevenDebugConfiguration) {
        RSevenDebugConfiguration local_198;

        if (value.isNull() == '\0') {
            JsonDeserializer<RSevenDebugConfiguration>::Deserialize(value, rSevenDebugConfiguration);
        } else {
            ___bzero(&local_198, 368);
            local_198 = RSevenDebugConfiguration();
            rSevenDebugConfiguration = local_198;
        }
    }

    // 0x100075280
    ConsoleCommandHelp::ConsoleCommandHelp(const char* str1, const char* str2) {

        new (this) eastl::string(str1);
        new (&field_32) eastl::string(str2);
    }

    // 0x100075380
    ConsoleCommandHelp::ConsoleCommandHelp(const ConsoleCommandHelp& consoleCommandHelp)
        : eastl::string(consoleCommandHelp), field_32(consoleCommandHelp.field_32) {}

    // 0x1000753f0
    ConsoleCommandHelp::~ConsoleCommandHelp() {
        ((this + 32))->~basic_string();
    }

    // 0x100076660
    RSevenDebugConfiguration::RSevenDebugConfiguration() : field_0(0) {

        new (&field_8) eastl::map(local_28);
        field_56 = 600;
        field_60 = 0;
        field_64 = 0;
        field_72 = 0;
        field_80 = 0;
        field_88 = 0;
        field_96 = 0;
        field_104 = 0;
        field_112 = 0;
        field_120 = 0;
        field_128 = 0;
        new (&field_72) jag::graphics::SimpleScatteringParams();
        field_136 = 1;
        field_140 = 4453159313468293120;
        field_148 = 4561245703459831808;
        field_156 = 12;
        field_160 = 4568451461360386048;
        field_168 = 4216233945198493696;
        field_176 = 1092616192;
        field_180 = 1;
        field_184 = 1056964608;
        field_188 = 0;
        new (field_192) jag::graphics::SunlightOptions();
        field_192[60] = 0;
        field_256 = 4575657221408423936;
        field_264 = 0;
        field_272 = 4575657222473777152;
        field_280 = 4575657222473777152;
        field_288 = 4561245704525185024;
        field_296 = 4764808406819982541;
        new (field_304) jag::math::ColourHSL(1.0, 0.7, 0.5);
        new (field_320) jag::math::ColourHSL(0.025, 0.025, 0.025);
        *(uint64_t*)(field_320 + 12) = 4575657222473777152;
        field_352 = 21474836480;
    }

    // 0x1000767e0
    RSevenDebugConfiguration::~RSevenDebugConfiguration() {
        field_8.~map();
    }

    // 0x100083ce0
    Json::Value JsonSerialize<bool>(const bool& arg1) {
        arg1.Serialize();
        return arg1;
    }

    // 0x100083d00
    Json::Value JsonSerialize<eastl::map<eastl::string, bool>>(const eastl::map<eastl::string, bool>& arg1) {
        arg1.Serialize();
        return arg1;
    }

    // 0x100083d20
    Json::Value JsonSerialize<int>(const int& arg1) {
        arg1.Serialize();
        return arg1;
    }

    // 0x100083d40
    Json::Value JsonSerialize<DistanceFogParams>(const DistanceFogParams& distanceFogParams) {
        distanceFogParams.Serialize();
        return distanceFogParams;
    }

    // 0x100083d60
    Json::Value JsonSerialize<jag::graphics::SimpleScatteringParams>(
        const jag::graphics::SimpleScatteringParams& simpleScatteringParams) {
        simpleScatteringParams.Serialize();
        return simpleScatteringParams;
    }

    // 0x100083d80
    Json::Value JsonSerialize<jag::graphics::SSAOParams>(const jag::graphics::SSAOParams& ssaoParams) {
        ssaoParams.Serialize();
        return ssaoParams;
    }

    // 0x100083da0
    Json::Value JsonSerialize<jag::graphics::SSAOPass::Mode>(const jag::graphics::SSAOPass::Mode& mode) {
        Mode* in_RSI;

        mode = JsonSerializer<jag::graphics::SSAOPass::Mode>::Serialize(*in_RSI);
        return mode;
    }

    // 0x100083dc0
    Json::Value JsonSerialize<jag::graphics::SunlightOptions>(const jag::graphics::SunlightOptions& sunlightOptions) {
        SunlightOptions* in_RSI;

        sunlightOptions.Serialize(*in_RSI);
        return sunlightOptions;
    }

    // 0x100083de0
    Json::Value JsonSerialize<TonemappingParams>(const TonemappingParams& tonemappingParams) {
        tonemappingParams.Serialize();
        return tonemappingParams;
    }

    // 0x100083e00
    Json::Value JsonSerialize<jag::graphics::VolumetricScatteringParams>(
        const jag::graphics::VolumetricScatteringParams& volumetricScatteringParams) {
        volumetricScatteringParams.Serialize();
        return volumetricScatteringParams;
    }

    // 0x100084080
    Json::Value JsonSerialize<float>(const float& arg1) {
        float* in_RSI;

        arg1.Serialize(*in_RSI);
        return arg1;
    }

    // 0x1000842b0
    Json::Value JsonSerialize<jag::math::Vector3T<float>>(const jag::math::Vector3T<float>& vector3) {
        vector3.Serialize();
        return vector3;
    }

    // 0x100084930
    Json::Value JsonSerialize<jag::graphics::GraphicsQuality>(const jag::graphics::GraphicsQuality& graphicsQuality) {
        graphicsQuality.Serialize();
        return graphicsQuality;
    }

    // 0x100085110
    void JsonDeserialize<bool>(const Json::Value& value, bool& arg2) {
        if (value.isNull() == '\0') {
            JsonDeserializer<bool>::Deserialize(value, arg2);
        } else {
            arg2 = false;
        }
    }

    // 0x100085140
    void JsonDeserialize<eastl::map<eastl::string, bool>>(const Json::Value& value,
                                                          eastl::map<eastl::string, bool>& arg2) {
        map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe>> local_58;

        if (value.isNull() == '\0') {
            JsonDeserializer<eastl::map<eastl::string, bool>>::Deserialize(value, arg2);
        } else {
            local_58 = eastl::map(local_28);
            arg2 = local_58;
        }
    }

    // 0x1000851c0
    void JsonDeserialize<int>(const Json::Value& value, int& arg2) {
        if (value.isNull() == '\0') {
            JsonDeserializer<int>::Deserialize(value, arg2);
        } else {
            arg2 = 0;
        }
    }

    // 0x1000851f0
    void JsonDeserialize<DistanceFogParams>(const Json::Value& value, DistanceFogParams& distanceFogParams) {
        if (value.isNull() == '\0') {
            JsonDeserializer<DistanceFogParams>::Deserialize(value, distanceFogParams);
        } else {
            *(uint32_t*)(distanceFogParams + 8) = 0;
            *(uint64_t*)distanceFogParams = 0;
        }
    }

    // 0x100085230
    void JsonDeserialize<jag::graphics::SimpleScatteringParams>(
        const Json::Value& value, jag::graphics::SimpleScatteringParams& simpleScatteringParams) {
        SimpleScatteringParams local_58;
        uint64_t uStack_20;

        if (value.isNull() == '\0') {
            JsonDeserializer<jag::graphics::SimpleScatteringParams>::Deserialize(value, simpleScatteringParams);
        } else {
            local_58._48_8_ = 0;
            uStack_20 = 0;
            local_58.field_32 = 0;
            local_58.field_40 = 0;
            local_58.field_44 = 0;
            local_58.field_16 = 0;
            local_58.field_24 = 0;
            local_58.field_28 = 0;
            local_58.field_0 = 0.0;
            local_58.field_4 = 0.0;
            local_58.field_8 = 0.0;
            local_58.field_12 = 0;
            local_58 = jag::graphics::SimpleScatteringParams();
            simpleScatteringParams = local_58;
        }
    }

    // 0x100085290
    void JsonDeserialize<jag::graphics::SSAOParams>(const Json::Value& value, jag::graphics::SSAOParams& ssaoParams) {
        uint64_t local_48;
        uint64_t uStack_20;

        if (value.isNull() == '\0') {
            JsonDeserializer<jag::graphics::SSAOParams>::Deserialize(value, ssaoParams);
        } else {
            uStack_20._0_1_ = 0;
            uStack_20._1_3_ = 0;
            uStack_20._4_4_ = 0;
            local_48 = 0;
            new (&local_48) jag::graphics::SSAOParams();
            *(uint64_t*)((long)&ssaoParams.field_28 + 4) = 0;
            ssaoParams.field_40 = (uint8_t)uStack_20;
            *(uint32_t*)&ssaoParams.field_41 = uStack_20._1_3_;
            ssaoParams.field_44 = uStack_20._4_4_;
            *(uint64_t*)&ssaoParams.field_16 = 0;
            *(uint64_t*)((long)&ssaoParams.field_20 + 4) = 0;
            ssaoParams.field_0 = local_48;
            ssaoParams.field_8 = 0;
        }
    }

    // 0x100085300
    void JsonDeserialize<jag::graphics::SSAOPass::Mode>(const Json::Value& value, jag::graphics::SSAOPass::Mode& mode) {
        if (value.isNull() == '\0') {
            JsonDeserializer<jag::graphics::SSAOPass::Mode>::Deserialize(value, mode);
        } else {
            *(uint32_t*)mode = 0;
        }
    }

    // 0x100085330
    void JsonDeserialize<jag::graphics::SunlightOptions>(const Json::Value& value,
                                                         jag::graphics::SunlightOptions& sunlightOptions) {
        SunlightOptions local_58;

        if (value.isNull() == '\0') {
            JsonDeserializer<jag::graphics::SunlightOptions>::Deserialize(value, sunlightOptions);
        } else {
            local_58 = jag::graphics::SunlightOptions();
            sunlightOptions = local_58;
        }
    }

    // 0x100085380
    void JsonDeserialize<TonemappingParams>(const Json::Value& value, TonemappingParams& tonemappingParams) {
        TonemappingParams local_28;

        if (value.isNull() == '\0') {
            JsonDeserializer<TonemappingParams>::Deserialize(value, tonemappingParams);
        } else {
            local_28._0_8_ = 0;
            local_28._8_8_ = 0;
            local_28 = TonemappingParams();
            *(uint64_t*)tonemappingParams = local_28._0_8_;
            *(uint64_t*)((long)&tonemappingParams.field_4 + 4) = local_28._8_8_;
        }
    }

    // 0x1000853d0
    void JsonDeserialize<jag::graphics::VolumetricScatteringParams>(
        const Json::Value& value, jag::graphics::VolumetricScatteringParams& volumetricScatteringParams) {
        uint8_t local_78[72];
        uint64_t uStack_30;

        if (value.isNull() == '\0') {
            JsonDeserializer<jag::graphics::VolumetricScatteringParams>::Deserialize(value, volumetricScatteringParams);
        } else {
            local_78._64_8_ = 0;
            uStack_30 = 0;
            local_78._48_8_ = 0;
            local_78._56_8_ = 0;
            local_78._32_8_ = 0;
            local_78._40_8_ = 0;
            local_78._16_8_ = 0;
            local_78._24_8_ = 0;
            local_78._0_8_ = 0;
            local_78._8_8_ = 0;
            new (local_78) jag::graphics::VolumetricScatteringParams();
            volumetricScatteringParams = *local_78;
        }
    }

    // 0x100085850
    void JsonDeserialize<float>(const Json::Value& value, float& arg2) {
        if (value.isNull() == '\0') {
            JsonDeserializer<float>::Deserialize(value, arg2);
        } else {
            arg2 = 0.0;
        }
    }

    // 0x100085990
    void JsonDeserialize<jag::math::Vector3T<float>>(const Json::Value& value, jag::math::Vector3T<float>& vector3) {
        Vector3T<int> local_28;

        if (value.isNull() == '\0') {
            JsonDeserializer<jag::math::Vector3T<float>>::Deserialize(value, vector3);
        } else {
            local_28 = jag::math::Vector3T();
            vector3.SetXYZ(local_28);
        }
    }

    // 0x100085d40
    void JsonDeserialize<jag::graphics::GraphicsQuality>(const Json::Value& value,
                                                         jag::graphics::GraphicsQuality& graphicsQuality) {
        if (value.isNull() == '\0') {
            JsonDeserializer<jag::graphics::GraphicsQuality>::Deserialize(value, graphicsQuality);
        } else {
            graphicsQuality = 0;
        }
    }

    // 0x100168390
    bool IsValidEnumValue<ClientWindowMode>(std::underlying_type<ClientWindowMode>::type arg1) {
        return (int)arg1 - 1U < 2;
    }

    // 0x1001c0d00
    char const*
    ConvertEncodedResourceFilename<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str1, const char* str2) {
        if (Base64::Instance()->DecodeString<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(
                str1, str2)) {
            str2 = (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::data();
        }
        return str2;
    }

} // namespace jag::oldscape

namespace jag::oldscape::widgets {
    class Snow_OldScape {
    public:
        // virtual methods in vtable order
        virtual ~Snow_OldScape();
        virtual void DrawSnowFlakes(int arg1, int arg2, int arg3, int arg4);
        virtual void DrawSnowPiles(int arg1, int arg2, int arg3, int arg4);

    private:
        uint8_t _unknown_8[104];
        DrawContext* field_112;
    };

    // 0x100075850
    Padding::Padding(int arg1, int arg2, int arg3, int arg4)
        : field_0(arg1), field_4(arg2), field_8(arg3), field_12(arg4) {}

    // 0x1000797e0
    Snow_OldScape::~Snow_OldScape() {}

} // namespace jag::oldscape::widgets

namespace jag::auth {
    // 0x1000753f0: OAuth2TokenPair::~OAuth2TokenPair() has the same machine code as oldscape::ConsoleCommandHelp::~ConsoleCommandHelp()

    // 0x1000753f0: FederatedLoginTokenPair::~FederatedLoginTokenPair() has the same machine code as oldscape::ConsoleCommandHelp::~ConsoleCommandHelp()

    // 0x1000753f0: GameSessionTokenCredentials::~GameSessionTokenCredentials() has the same machine code as oldscape::ConsoleCommandHelp::~ConsoleCommandHelp()

} // namespace jag::auth

namespace jag::testframework {
    // 0x1000753f0: TestAssertionResult::~TestAssertionResult() has the same machine code as oldscape::ConsoleCommandHelp::~ConsoleCommandHelp()

} // namespace jag::testframework

namespace jag {
    // 0x1000753f0: SteamApp::~SteamApp() has the same machine code as oldscape::ConsoleCommandHelp::~ConsoleCommandHelp()

} // namespace jag

namespace jag::tweak {
    // 0x100075850: Placement::Placement(int, int, int, int) has the same machine code as oldscape::widgets::Padding::Padding(int, int, int, int)

} // namespace jag::tweak

namespace jag::render {
    // 0x100075850: GLFormat::GLFormat(int, unsigned int, unsigned int, unsigned int) has the same machine code as oldscape::widgets::Padding::Padding(int, int, int, int)

} // namespace jag::render

namespace jag::oldscape::dash3d {
    // 0x100075850: GridRect::GridRect(int, int, int, int) has the same machine code as widgets::Padding::Padding(int, int, int, int)

} // namespace jag::oldscape::dash3d
