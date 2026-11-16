// _unplaced/projects/osclient/unity_3.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "libs/bytepacking/ShuffledPacket.h"
#include "libs/hal/system/auth/AuthWeb.h"
#include "libs/ui/components/Component.h"
#include "projects/osclient/ProtShuffleIncludes.h"

namespace jag::oldscape {
    template <
        typename...> // 14 instantiations, e.g. <bool>, <eastl::map<eastl::string, bool, eastl::less<eastl::basic_string<char, , <float>
    class JsonDeserializer {
    public:
        void Deserialize(const Json::Value& value, RSevenDebugConfiguration& rSevenDebugConfiguration);
        void Deserialize(const Json::Value& value, bool& arg2);
        void Deserialize(const Json::Value& value, eastl::map<eastl::string, bool>& arg2);
        void Deserialize(const Json::Value& value, int& arg2);
        void Deserialize(const Json::Value& value, DistanceFogParams& distanceFogParams);
        void Deserialize(const Json::Value& value, float& arg2);
        void Deserialize(const Json::Value& value, jag::graphics::SimpleScatteringParams& simpleScatteringParams);
        void Deserialize(const Json::Value& value, jag::math::Vector3T<float>& vector3);
        void Deserialize(const Json::Value& value, jag::graphics::SSAOParams& ssaoParams);
        void Deserialize(const Json::Value& value, jag::graphics::SSAOPass::Mode& mode);
        void Deserialize(const Json::Value& value, jag::graphics::SunlightOptions& sunlightOptions);
        void Deserialize(const Json::Value& value, jag::graphics::GraphicsQuality& graphicsQuality);
        void Deserialize(const Json::Value& value, TonemappingParams& tonemappingParams);
        void Deserialize(const Json::Value& value,
                         jag::graphics::VolumetricScatteringParams& volumetricScatteringParams);
    };

    template <
        typename...> // 14 instantiations, e.g. <bool>, <eastl::map<eastl::string, bool, eastl::less<eastl::basic_string<char, , <float>
    class JsonSerializer {
    public:
        RSevenDebugConfiguration* Serialize(const RSevenDebugConfiguration& rSevenDebugConfiguration);
        bool* Serialize(const bool& arg1);
        void Serialize(const eastl::map<eastl::string, bool>& arg1);
        int* Serialize(const int& arg1);
        DistanceFogParams* Serialize(const DistanceFogParams& distanceFogParams);
        JsonSerializer<float>* Serialize(const float& arg1);
        SimpleScatteringParams* Serialize(const jag::graphics::SimpleScatteringParams& simpleScatteringParams);
        Vector3T<float>* Serialize(const jag::math::Vector3T<float>& vector3);
        SSAOParams* Serialize(const jag::graphics::SSAOParams& ssaoParams);
        auto Serialize(const jag::graphics::SSAOPass::Mode& mode);
        JsonSerializer<jag::graphics::SunlightOptions>*
        Serialize(const jag::graphics::SunlightOptions& sunlightOptions);
        GraphicsQuality* Serialize(const jag::graphics::GraphicsQuality& graphicsQuality);
        TonemappingParams* Serialize(const TonemappingParams& tonemappingParams);
        VolumetricScatteringParams*
        Serialize(const jag::graphics::VolumetricScatteringParams& volumetricScatteringParams);
    };

    // 0x103c04d60
    uint8_t AllFonts[24];

    // 0x100077660
    void DoCommand_Help(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&)::$_85::operator()(
        const eastl::string& str, const ConsoleCommandHelp& consoleCommandHelp) const {
        *(basic_string<char, eastl::fixed_vector_allocator<1ul, 260ul, 1ul, 0ul, true>>**)this->append(
            (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin());
        (*(basic_string<char, eastl::fixed_vector_allocator<1ul, 260ul, 1ul, 0ul, true>>**)this)->append(", ");
    }

    // 0x10007e680: SuperShuffledPacketFactory::gArrayBuffer_alt2() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::gStringCP1252ToUTF8() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::pStringNoConversion() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::pStringUTF8ToCP1252() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::g1() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::g2() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::g3() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::g4() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::gBit() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::g1_alt1() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::g1_alt2() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::g1_alt3() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::g2_alt1() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::g2_alt2() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::g2_alt3() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::g3_alt1() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::g3_alt2() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::g3_alt3() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::g4_alt1() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::g4_alt2() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: SuperShuffledPacketFactory::g4_alt3() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x1000834d0
    bool FileRSevenDebugPresetProvider::Reload()::$_3::operator()(const Filename& filename1,
                                                                  const Filename& filename2) const {
        long lVar1 = GetLastModified();
        return filename1.GetLastModified() < lVar1;
    }

    // 0x1000839e0
    RSevenDebugConfiguration*
    JsonSerializer<RSevenDebugConfiguration>::Serialize(const RSevenDebugConfiguration& rSevenDebugConfiguration) {
        TonemappingParams local_40;

        new (rSevenDebugConfiguration) Json::Value(0);
        JsonSerialize<bool>(&local_40);
        Value* pVVar1 = &rSevenDebugConfiguration["debugPointLight"];
        *pVVar1 = local_40;
        JsonSerialize<eastl::map<eastl::string, bool>>(&local_40);
        pVVar1 = &rSevenDebugConfiguration["effects"];
        *pVVar1 = local_40;
        JsonSerialize<int>(&local_40);
        pVVar1 = &rSevenDebugConfiguration["sampleLevel"];
        *pVVar1 = local_40;
        JsonSerialize<int>(&local_40);
        pVVar1 = (Value*)rSevenDebugConfiguration["effectTransitionTimeMilliseconds"];
        *pVVar1 = local_40;
        JsonSerialize<DistanceFogParams>(&local_40);
        pVVar1 = &rSevenDebugConfiguration["fogParams"];
        *pVVar1 = local_40;
        JsonSerialize<jag::graphics::SimpleScatteringParams>(&local_40);
        pVVar1 = &rSevenDebugConfiguration["lightScatteringParams"];
        *pVVar1 = local_40;
        JsonSerialize<jag::graphics::SSAOParams>(&local_40);
        pVVar1 = &rSevenDebugConfiguration["ssao"];
        *pVVar1 = local_40;
        JsonSerialize<jag::graphics::SSAOPass::Mode>(&local_40[0].field_0);
        pVVar1 = &rSevenDebugConfiguration["ssaoMode"];
        *pVVar1 = local_40;
        JsonSerialize<bool>(&local_40);
        pVVar1 = &rSevenDebugConfiguration["terrainBlend"];
        *pVVar1 = local_40;
        JsonSerialize<jag::graphics::SunlightOptions>(&local_40);
        pVVar1 = &rSevenDebugConfiguration["sunlightOptions"];
        *pVVar1 = local_40;
        JsonSerialize<TonemappingParams>(&local_40);
        pVVar1 = &rSevenDebugConfiguration["tonemapping"];
        *pVVar1 = local_40;
        JsonSerialize<jag::graphics::VolumetricScatteringParams>(&local_40);
        pVVar1 = &rSevenDebugConfiguration["volumetrics"];
        *pVVar1 = local_40;
        return rSevenDebugConfiguration;
    }

    // 0x100083e20
    bool* JsonSerializer<bool>::Serialize(const bool& arg1) {
        uint64_t in_RSI;

        new (arg1) Json::Value(*(bool*)in_RSI);
        return arg1;
    }

    // 0x100083e40
    void JsonSerializer<eastl::map<eastl::string, bool>>::Serialize(const eastl::map<eastl::string, bool>& arg1) {
        pair<eastl::string const, bool>* arg1_00;
        char* str;
        Value* value;
        rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>, eastl::allocator,
               eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>* in_RSI;
        Value local_90;
        pair<eastl::stringconst, bool> local_68;

        new (arg1) Json::Value(0);
        uint64_t local_40 = in_RSI->begin();
        uint64_t local_38 = in_RSI->end();
        while (true) {
            if (local_40 != local_38 == '\0')
                break;
            arg1_00 = (pair<eastl::string const, bool>*)*local_40;
            local_68 = eastl::pair(*arg1_00);
            JsonSerialize<bool>(&local_90);
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            value = &arg1[str];
            *value = local_90;
            ++local_40;
        }
        return arg1;
    }

    // 0x100083f70
    int* JsonSerializer<int>::Serialize(const int& arg1) {
        int* in_RSI;

        new (arg1) Json::Value(*in_RSI);
        return arg1;
    }

    // 0x100083f90
    DistanceFogParams* JsonSerializer<DistanceFogParams>::Serialize(const DistanceFogParams& distanceFogParams) {
        Value local_40;

        new (distanceFogParams) Json::Value(0);
        JsonSerialize<bool>(&local_40);
        Value* pVVar1 = &distanceFogParams["enabled"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &distanceFogParams["intensity"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &distanceFogParams["startDistance"];
        *pVVar1 = local_40;
        return distanceFogParams;
    }

    // 0x1000840a0
    JsonSerializer<float>* JsonSerializer<float>::Serialize(const float& arg1) {
        new (this) Json::Value((double)*arg1);
        return this;
    }

    // 0x1000840c0
    SimpleScatteringParams* JsonSerializer<jag::graphics::SimpleScatteringParams>::Serialize(
        const jag::graphics::SimpleScatteringParams& simpleScatteringParams) {
        long in_RSI;
        Vector3T<float> local_40;

        new (simpleScatteringParams) Json::Value(0);
        JsonSerialize<jag::math::Vector3T<float>>(&local_40);
        Value* pVVar1 = &simpleScatteringParams["inscatteringAmount"];
        *pVVar1 = local_40;
        JsonSerialize<jag::math::Vector3T<float>>(&local_40);
        pVVar1 = &simpleScatteringParams["outscatteringAmount"];
        *pVVar1 = local_40;
        JsonSerialize<jag::math::Vector3T<float>>(&local_40);
        pVVar1 = &simpleScatteringParams["scatteringTint"];
        *pVVar1 = local_40;
        Layout* layout = (Layout*)(in_RSI + 48);
        layout->SSOBeginPtr();
        JsonSerialize<float>(&local_40);
        pVVar1 = &simpleScatteringParams["scatteringDensity"];
        *pVVar1 = local_40;
        layout->y();
        JsonSerialize<float>(&local_40);
        pVVar1 = &simpleScatteringParams["startDistance"];
        *pVVar1 = local_40;
        layout->second();
        JsonSerialize<float>(&local_40);
        pVVar1 = &simpleScatteringParams["objectFalloff"];
        *pVVar1 = local_40;
        layout->qw();
        JsonSerialize<float>(&local_40);
        pVVar1 = &simpleScatteringParams["horizonFalloff"];
        *pVVar1 = local_40;
        return simpleScatteringParams;
    }

    // 0x1000842d0
    Vector3T<float>* JsonSerializer<jag::math::Vector3T<float>>::Serialize(const jag::math::Vector3T<float>& vector3) {
        Layout* in_RSI;
        Value local_40;

        new (vector3) Json::Value(0);
        in_RSI->SSOBeginPtr();
        JsonSerialize<float>(&local_40);
        Value* pVVar1 = &vector3["x"];
        *pVVar1 = local_40;
        in_RSI->y();
        JsonSerialize<float>(&local_40);
        pVVar1 = &vector3["y"];
        *pVVar1 = local_40;
        in_RSI->second();
        JsonSerialize<float>(&local_40);
        pVVar1 = &vector3["z"];
        *pVVar1 = local_40;
        return vector3;
    }

    // 0x1000843d0
    SSAOParams* JsonSerializer<jag::graphics::SSAOParams>::Serialize(const jag::graphics::SSAOParams& ssaoParams) {
        Value local_40;

        new (ssaoParams) Json::Value(0);
        JsonSerialize<float>(&local_40);
        Value* pVVar1 = &ssaoParams["radius"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &ssaoParams["bias"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &ssaoParams["detailAO"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &ssaoParams["coarseAO"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &ssaoParams["powerExponent"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &ssaoParams["alcemyProjectionFactor"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &ssaoParams["alchemyRadius"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &ssaoParams["alchemyBias"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &ssaoParams["alchemySigma"];
        *pVVar1 = local_40;
        JsonSerialize<bool>(&local_40);
        pVVar1 = &ssaoParams["blurEnabled"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &ssaoParams["blurSharpness"];
        *pVVar1 = local_40;
        return ssaoParams;
    }

    // 0x100084680
    auto JsonSerializer<jag::graphics::SSAOPass::Mode>::Serialize(const jag::graphics::SSAOPass::Mode& mode) {
        auto result;
        JsonSerialize<int>(&result);
        return result;
    }

    // 0x1000846c0
    JsonSerializer<jag::graphics::SunlightOptions>*
    JsonSerializer<jag::graphics::SunlightOptions>::Serialize(const jag::graphics::SunlightOptions& sunlightOptions) {
        Vector3T<float> local_50;

        new (this) Json::Value(0);
        uint64_t local_28 = sunlightOptions.GetCentrePos();
        JsonSerialize<jag::math::Vector3T<float>>(&local_50);
        Value* pVVar1 = (Value*)(*this)["sunColour"];
        *pVVar1 = local_50;
        uint32_t uVar2 = sunlightOptions.GetOutlineRadiusAdjustment();
        local_28._0_4_ = uVar2;
        JsonSerialize<float>(&local_50);
        pVVar1 = (Value*)(*this)["sunElevation"];
        *pVVar1 = local_50;
        local_28._0_4_ = sunlightOptions.GetAmbientLight();
        JsonSerialize<float>(&local_50);
        pVVar1 = (Value*)(*this)["sunAngle"];
        *pVVar1 = local_50;
        uVar2 = sunlightOptions.GetEnvMapIrradianceScale();
        local_28 = (((uint64_t)local_28._4_4_ << 32) | (uint32_t)uVar2);
        JsonSerialize<float>(&local_50);
        pVVar1 = (Value*)(*this)["sunIntensity"];
        *pVVar1 = local_50;
        local_28 = sunlightOptions.GetAmbientColour();
        JsonSerialize<jag::math::Vector3T<float>>(&local_50);
        pVVar1 = (Value*)(*this)["ambientColour"];
        *pVVar1 = local_50;
        uVar2 = sunlightOptions.GetAmbientIntensity();
        local_28._0_4_ = uVar2;
        JsonSerialize<float>(&local_50);
        pVVar1 = (Value*)(*this)["ambientIntensity"];
        *pVVar1 = local_50;
        local_28._0_4_ = sunlightOptions.GetMean();
        JsonSerialize<float>(&local_50);
        pVVar1 = (Value*)(*this)["shadowStrength"];
        *pVVar1 = local_50;
        uVar2 = sunlightOptions.GetSpriteID();
        local_28 = (((uint64_t)local_28._4_4_ << 32) | (uint32_t)uVar2);
        JsonSerialize<jag::graphics::GraphicsQuality>(&local_50);
        pVVar1 = (Value*)(*this)["shadowQuality"];
        *pVVar1 = local_50;
        return this;
    }

    // 0x100084950
    GraphicsQuality*
    JsonSerializer<jag::graphics::GraphicsQuality>::Serialize(const jag::graphics::GraphicsQuality& graphicsQuality) {
        uint32_t* in_RSI;
        Value local_50;

        new (graphicsQuality) Json::Value(0);
        uint32_t local_24 = *in_RSI;
        JsonSerialize<int>(&local_50);
        Value* value = &graphicsQuality["quality"];
        *value = local_50;
        return graphicsQuality;
    }

    // 0x1000849d0
    TonemappingParams* JsonSerializer<TonemappingParams>::Serialize(const TonemappingParams& tonemappingParams) {
        Value local_40;

        new (tonemappingParams) Json::Value(0);
        JsonSerialize<bool>(&local_40);
        Value* pVVar1 = &tonemappingParams["enabled"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &tonemappingParams["exposureKey"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &tonemappingParams["minBlackLum"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &tonemappingParams["maxWhiteLum"];
        *pVVar1 = local_40;
        return tonemappingParams;
    }

    // 0x100084af0
    VolumetricScatteringParams* JsonSerializer<jag::graphics::VolumetricScatteringParams>::Serialize(
        const jag::graphics::VolumetricScatteringParams& volumetricScatteringParams) {
        Value local_40;

        new (volumetricScatteringParams) Json::Value(0);
        JsonSerialize<float>(&local_40);
        Value* pVVar1 = &volumetricScatteringParams["density"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &volumetricScatteringParams["inscatteringAmount"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &volumetricScatteringParams["outscatteringAmount"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &volumetricScatteringParams["skyboxDensityMultiplier"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &volumetricScatteringParams["exaggerationFactor"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &volumetricScatteringParams["g"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &volumetricScatteringParams["skyG"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &volumetricScatteringParams["bilateralBlurDepthFalloff"];
        *pVVar1 = local_40;
        JsonSerialize<jag::math::Vector3T<float>>(&local_40);
        pVVar1 = &volumetricScatteringParams["litFogColour"];
        *pVVar1 = local_40;
        JsonSerialize<jag::math::Vector3T<float>>(&local_40);
        pVVar1 = &volumetricScatteringParams["unlitFogColour"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = &volumetricScatteringParams["litFogIntensity"];
        *pVVar1 = local_40;
        JsonSerialize<float>(&local_40);
        pVVar1 = (Value*)volumetricScatteringParams["unlitFogIntensity"];
        *pVVar1 = local_40;
        return volumetricScatteringParams;
    }

    // 0x100084fa0
    void JsonDeserializer<RSevenDebugConfiguration>::Deserialize(const Json::Value& value,
                                                                 RSevenDebugConfiguration& rSevenDebugConfiguration) {
        Value* pVVar1 = &value["debugPointLight"];
        JsonDeserialize<bool>(pVVar1, (bool*)rSevenDebugConfiguration);
        pVVar1 = &value["effects"];
        JsonDeserialize<eastl::map<eastl::string, bool>>(pVVar1,
                                                         (map<eastl::string, bool>*)&rSevenDebugConfiguration.field_8);
        pVVar1 = &value["sampleLevel"];
        JsonDeserialize<int>(pVVar1, (int*)&rSevenDebugConfiguration.field_352);
        pVVar1 = &value["effectTransitionTimeMilliseconds"];
        JsonDeserialize<int>(pVVar1, &rSevenDebugConfiguration.field_56);
        pVVar1 = &value["fogParams"];
        JsonDeserialize<DistanceFogParams>(pVVar1, (DistanceFogParams*)&rSevenDebugConfiguration.field_60);
        pVVar1 = &value["lightScatteringParams"];
        JsonDeserialize<jag::graphics::SimpleScatteringParams>(
            pVVar1, (SimpleScatteringParams*)&rSevenDebugConfiguration.field_72);
        pVVar1 = &value["ssao"];
        JsonDeserialize<jag::graphics::SSAOParams>(pVVar1, (SSAOParams*)&rSevenDebugConfiguration.field_140);
        pVVar1 = &value["ssaoMode"];
        JsonDeserialize<jag::graphics::SSAOPass::Mode>(pVVar1, (Mode*)&rSevenDebugConfiguration.field_136);
        pVVar1 = &value["sunlightOptions"];
        JsonDeserialize<jag::graphics::SunlightOptions>(pVVar1, (SunlightOptions*)rSevenDebugConfiguration.field_192);
        pVVar1 = &value["terrainBlend"];
        JsonDeserialize<bool>(pVVar1, (bool*)&rSevenDebugConfiguration.field_188);
        pVVar1 = &value["tonemapping"];
        JsonDeserialize<TonemappingParams>(pVVar1, (TonemappingParams*)(rSevenDebugConfiguration.field_192 + 60));
        pVVar1 = &value["volumetrics"];
        JsonDeserialize<jag::graphics::VolumetricScatteringParams>(
            pVVar1, (VolumetricScatteringParams*)&rSevenDebugConfiguration.field_272);
    }

    // 0x100085460
    void JsonDeserializer<bool>::Deserialize(const Json::Value& value, bool& arg2) {
        uint8_t uVar2;

        if (value.isConvertibleTo(5) == '\0') {
            uVar2 = false;
        } else {
            uVar2 = value.asBool();
        }
        arg2 = (bool)uVar2;
    }

    // 0x100085490
    void JsonDeserializer<eastl::map<eastl::string, bool>>::Deserialize(const Json::Value& value,
                                                                        eastl::map<eastl::string, bool>& arg2) {
        string* string;
        char* pcVar2;
        Value* value_00;
        bool* arg2_00;
        eastl::string local_90;

        arg2.clear();
        auto local_70 = value.getMemberNames();
        uint64_t local_38 = std::vector<std::string>::begin(&local_70);
        uint64_t local_40 = std::vector<std::string>::end(&local_70);
        bool bVar1 = &local_38 != &local_40;
        if (bVar1) {
            do {
                string = (string*)local_38.operator*();
                pcVar2 = (char*)std::string::c_str(string);
                value_00 = &value[pcVar2];
                pcVar2 = (char*)std::string::c_str(string);
                local_90 = eastl::string(pcVar2);
                arg2_00 = &arg2[local_90];
                JsonDeserialize<bool>(value_00, arg2_00);
                local_38.operator++();
                bVar1 = &local_38 != &local_40;
            } while (bVar1);
        }
        std::vector<std::string>::~vector(&local_70);
    }

    // 0x1000857b0
    void JsonDeserializer<int>::Deserialize(const Json::Value& value, int& arg2) {
        bool cVar1 = value.isConvertibleTo(1);
        int iVar2 = 0;
        if (cVar1) {
            iVar2 = value.asInt();
        }
        arg2 = iVar2;
    }

    // 0x1000857e0
    void JsonDeserializer<DistanceFogParams>::Deserialize(const Json::Value& value,
                                                          DistanceFogParams& distanceFogParams) {
        Value* pVVar1 = &value["enabled"];
        JsonDeserialize<bool>(pVVar1, (bool*)distanceFogParams);
        pVVar1 = &value["intensity"];
        JsonDeserialize<float>(pVVar1, (float*)(distanceFogParams + 4));
        pVVar1 = &value["startDistance"];
        JsonDeserialize<float>(pVVar1, (float*)(distanceFogParams + 8));
    }

    // 0x100085880
    void JsonDeserializer<float>::Deserialize(const Json::Value& value, float& arg2) {
        double dVar1;

        bool cVar2 = value.isConvertibleTo(3);
        float fVar3 = 0.0;
        if (cVar2) {
            dVar1 = (double)value.asDouble();
            fVar3 = (float)dVar1;
        }
        arg2 = fVar3;
    }

    // 0x1000858c0
    void JsonDeserializer<jag::graphics::SimpleScatteringParams>::Deserialize(
        const Json::Value& value, jag::graphics::SimpleScatteringParams& simpleScatteringParams) {
        Value* pVVar1 = &value["inscatteringAmount"];
        JsonDeserialize<jag::math::Vector3T<float>>(pVVar1, (Vector3T<float>*)&simpleScatteringParams.field_16);
        pVVar1 = &value["outscatteringAmount"];
        JsonDeserialize<jag::math::Vector3T<float>>(pVVar1, (Vector3T<float>*)simpleScatteringParams);
        pVVar1 = &value["scatteringTint"];
        JsonDeserialize<jag::math::Vector3T<float>>(pVVar1, (Vector3T<float>*)&simpleScatteringParams.field_32);
        pVVar1 = &value["scatteringDensity"];
        JsonDeserialize<float>(pVVar1, (float*)&simpleScatteringParams.field_48);
        pVVar1 = &value["startDistance"];
        JsonDeserialize<float>(pVVar1, (float*)&simpleScatteringParams.field_52);
        pVVar1 = &value["objectFalloff"];
        JsonDeserialize<float>(pVVar1, &simpleScatteringParams[1].field_0);
        pVVar1 = &value["horizonFalloff"];
        JsonDeserialize<float>(pVVar1, &simpleScatteringParams[1].field_4);
    }

    // 0x1000859e0
    void JsonDeserializer<jag::math::Vector3T<float>>::Deserialize(const Json::Value& value,
                                                                   jag::math::Vector3T<float>& vector3) {
        Value* pVVar1 = &value["x"];
        JsonDeserialize<float>(pVVar1, (float*)vector3);
        pVVar1 = &value["y"];
        JsonDeserialize<float>(pVVar1, (float*)(vector3 + 4));
        pVVar1 = &value["z"];
        JsonDeserialize<float>(pVVar1, (float*)(vector3 + 8));
    }

    // 0x100085a50
    void JsonDeserializer<jag::graphics::SSAOParams>::Deserialize(const Json::Value& value,
                                                                  jag::graphics::SSAOParams& ssaoParams) {
        Value* pVVar1 = &value["radius"];
        JsonDeserialize<float>(pVVar1, (float*)ssaoParams);
        pVVar1 = &value["bias"];
        JsonDeserialize<float>(pVVar1, (float*)((long)&ssaoParams.field_0 + 4));
        pVVar1 = &value["detailAO"];
        JsonDeserialize<float>(pVVar1, (float*)&ssaoParams.field_8);
        pVVar1 = &value["coarseAO"];
        JsonDeserialize<float>(pVVar1, (float*)((long)&ssaoParams.field_8 + 4));
        pVVar1 = &value["powerExponent"];
        JsonDeserialize<float>(pVVar1, (float*)&ssaoParams.field_20);
        pVVar1 = &value["alcemyProjectionFactor"];
        JsonDeserialize<float>(pVVar1, (float*)((long)&ssaoParams.field_20 + 4));
        pVVar1 = &value["alchemyRadius"];
        JsonDeserialize<float>(pVVar1, (float*)&ssaoParams.field_28);
        pVVar1 = &value["alchemyBias"];
        JsonDeserialize<float>(pVVar1, (float*)((long)&ssaoParams.field_28 + 4));
        pVVar1 = &value["alchemySigma"];
        JsonDeserialize<float>(pVVar1, (float*)&ssaoParams.field_36);
        pVVar1 = &value["blurEnabled"];
        JsonDeserialize<bool>(pVVar1, (bool*)&ssaoParams.field_40);
        pVVar1 = &value["blurSharpness"];
        JsonDeserialize<float>(pVVar1, (float*)&ssaoParams.field_44);
    }

    // 0x100085b90
    void JsonDeserializer<jag::graphics::SSAOPass::Mode>::Deserialize(const Json::Value& value,
                                                                      jag::graphics::SSAOPass::Mode& mode) {
        uint64_t in_RAX;

        int local_14 = (int)((unsigned long)in_RAX >> 32);
        JsonDeserialize<int>(value, &local_14);
        *(unsigned int*)mode = (local_14 == 1) + 1;
    }

    // 0x100085bc0
    void
    JsonDeserializer<jag::graphics::SunlightOptions>::Deserialize(const Json::Value& value,
                                                                  jag::graphics::SunlightOptions& sunlightOptions) {
        float local_40;
        float local_3c;
        float local_38;
        float local_34;
        float local_30;
        GraphicsQuality local_2c;

        Vector3T<int> local_60;
        Vector3T<int> local_50;
        Value* pVVar1 = &value["sunColour"];
        JsonDeserialize<jag::math::Vector3T<float>>(pVVar1, &local_60);
        pVVar1 = &value["sunElevation"];
        JsonDeserialize<float>(pVVar1, &local_40);
        pVVar1 = &value["sunAngle"];
        JsonDeserialize<float>(pVVar1, &local_3c);
        pVVar1 = &value["sunIntensity"];
        JsonDeserialize<float>(pVVar1, &local_38);
        pVVar1 = &value["ambientColour"];
        JsonDeserialize<jag::math::Vector3T<float>>(pVVar1, &local_50);
        pVVar1 = &value["ambientIntensity"];
        JsonDeserialize<float>(pVVar1, &local_34);
        pVVar1 = &value["shadowStrength"];
        JsonDeserialize<float>(pVVar1, &local_30);
        pVVar1 = &value["shadowQuality"];
        JsonDeserialize<jag::graphics::GraphicsQuality>(pVVar1, &local_2c);
        jag::graphics::SunlightOptions::SetSunColour(sunlightOptions);
        sunlightOptions.SetSunElevation(local_40);
        sunlightOptions.SetSunAngle(local_3c);
        sunlightOptions.SetSunIntensity(local_38);
        jag::graphics::SunlightOptions::SetAmbientColour(sunlightOptions);
        sunlightOptions.SetAmbientIntensity(local_34);
        sunlightOptions.SetShadowStrength(local_30);
        sunlightOptions.SetShadowQuality(local_2c);
    }

    // 0x100085d70
    void
    JsonDeserializer<jag::graphics::GraphicsQuality>::Deserialize(const Json::Value& value,
                                                                  jag::graphics::GraphicsQuality& graphicsQuality) {
        uint64_t in_RAX;

        GraphicsQuality local_14 = (GraphicsQuality)((unsigned long)in_RAX >> 32);
        Value* value_00 = &value["quality"];
        JsonDeserialize<int>(value_00, (int*)&local_14);
        graphicsQuality = local_14;
    }

    // 0x100085db0
    void JsonDeserializer<TonemappingParams>::Deserialize(const Json::Value& value,
                                                          TonemappingParams& tonemappingParams) {
        Value* pVVar1 = &value["enabled"];
        JsonDeserialize<bool>(pVVar1, (bool*)tonemappingParams);
        pVVar1 = &value["exposureKey"];
        JsonDeserialize<float>(pVVar1, (float*)&tonemappingParams.field_4);
        pVVar1 = &value["minBlackLum"];
        JsonDeserialize<float>(pVVar1, (float*)&tonemappingParams.field_12);
        pVVar1 = &value["maxWhiteLum"];
        JsonDeserialize<float>(pVVar1, (float*)((long)&tonemappingParams.field_4 + 4));
    }

    // 0x100085e50
    void JsonDeserializer<jag::graphics::VolumetricScatteringParams>::Deserialize(
        const Json::Value& value, jag::graphics::VolumetricScatteringParams& volumetricScatteringParams) {
        Value* pVVar1 = &value["density"];
        JsonDeserialize<float>(pVVar1, (float*)volumetricScatteringParams);
        pVVar1 = &value["inscatteringAmount"];
        JsonDeserialize<float>(pVVar1, (float*)((long)&volumetricScatteringParams.field_0 + 4));
        pVVar1 = &value["outscatteringAmount"];
        JsonDeserialize<float>(pVVar1, (float*)&volumetricScatteringParams.field_8);
        pVVar1 = &value["skyboxDensityMultiplier"];
        JsonDeserialize<float>(pVVar1, (float*)((long)&volumetricScatteringParams.field_8 + 4));
        pVVar1 = &value["exaggerationFactor"];
        JsonDeserialize<float>(pVVar1, (float*)&volumetricScatteringParams.field_16);
        pVVar1 = &value["g"];
        JsonDeserialize<float>(pVVar1, (float*)((long)&volumetricScatteringParams.field_16 + 4));
        pVVar1 = &value["skyG"];
        JsonDeserialize<float>(pVVar1, (float*)&volumetricScatteringParams.field_24);
        pVVar1 = &value["bilateralBlurDepthFalloff"];
        JsonDeserialize<float>(pVVar1, (float*)((long)&volumetricScatteringParams.field_24 + 4));
        pVVar1 = &value["litFogColour"];
        JsonDeserialize<jag::math::Vector3T<float>>(pVVar1, (Vector3T<float>*)volumetricScatteringParams.field_32);
        pVVar1 = &value["unlitFogColour"];
        JsonDeserialize<jag::math::Vector3T<float>>(pVVar1, (Vector3T<float>*)volumetricScatteringParams.field_48);
        pVVar1 = &value["litFogIntensity"];
        JsonDeserialize<float>(pVVar1, (float*)(volumetricScatteringParams.field_48 + 12));
        pVVar1 = &value["unlitFogIntensity"];
        JsonDeserialize<float>(pVVar1, (float*)&volumetricScatteringParams.field_64);
    }

    // 0x1000b2e90
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        jag::math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&jag::graphics::MAYA_ANIM_INVERT_MATRIX)
            jag::math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1000b2ef0
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&jag::graphics::WORLD_ORTHOGONAL) jag::math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1000b2f10
    void ___cxx_global_var_init_3(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1000b2f70
    void ___cxx_global_var_init_4(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1000b2fd0
    void ___cxx_global_var_init_6(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1000b3030
    void ___cxx_global_var_init_8(void) {
        defaults::DefaultsGroup::GRAPHICS = 3;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x10007e680: ShuffledPacketFactory::p2() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: ShuffledPacketFactory::p4() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: ShuffledPacketFactory::p2_alt1() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: ShuffledPacketFactory::p2_alt2() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: ShuffledPacketFactory::p2_alt3() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: ShuffledPacketFactory::p3_alt1() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: ShuffledPacketFactory::p4_alt1() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: ShuffledPacketFactory::p4_alt2() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10007e680: ShuffledPacketFactory::p4_alt3() has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x100081670
    oldscape::FileRSevenDebugPresetProvider* placement_new<oldscape::FileRSevenDebugPresetProvider>(void* arg1) {
        new (arg1) oldscape::FileRSevenDebugPresetProvider();
        return arg1;
    }

    // 0x100081690
    ref_counter_shared<oldscape::FileRSevenDebugPresetProvider>*
    placement_new<ref_counter_shared<oldscape::FileRSevenDebugPresetProvider>, int,
                  oldscape::FileRSevenDebugPresetProvider*&>(void* arg1, int&& arg2,
                                                             oldscape::FileRSevenDebugPresetProvider*& arg3) {
        new (arg1) ref_counter_shared<oldscape::FileRSevenDebugPresetProvider>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x10007e220
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
        oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x10007e230
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
        oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(_lambda_void__void___1_*)arg1 = *this;
    }

    // 0x10007e240
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
        oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::__invoke(void* arg1, BaseApp* baseApp) {
        operator()(this, arg1, baseApp);
    }

    // 0x10007e250
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
        oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* arg1, BaseApp * baseApp) const {
        oldscape::OSClientConsole::OnFocusChanged()::$_1::operator()((__1*)this, arg1);
    }

    // 0x10007e310
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(
        oldscape::OSClientConsole::OnFocusChanged()::$_1&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag::console::internal {
    // 0x10007a580
    eastl::fixed_vector<CommandArgInfo, 4ul> BuildArgInfos<eastl::fixed_vector<StringView, 4ul> const&>(
        std::tuple<eastl::fixed_vector<StringView, 4ul> const&>* tuple) {
        uint8_t extraout_DL;

        uint64_t local_30 = GetArgInfo<eastl::fixed_vector<StringView, 4ul> const&>();
        uint8_t local_28 = extraout_DL;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_30, DAT_00000001);
        return tuple;
    }

    // 0x10007b3d0
    auto DecodeArgs<eastl::fixed_vector<StringView, 4ul> const&>(
        eastl::fixed_vector<ArgDecodingError, 4ul>& argDecodingErrors, const Console& console,
        const eastl::fixed_vector<StringView, 4ul>& stringViews,
        std::tuple<eastl::fixed_vector<StringView, 4ul> const&>* tuple) {
        uint32_t extraout_var;
        return local_18;

        auto aVar1 =
            DecodeArg<eastl::fixed_vector<StringView, 4ul> const&>(argDecodingErrors, console, stringViews, (int)tuple);
        uint64_t local_10 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar1);
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>::tuple<
            std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>, 0>(
            &local_18, (reference_wrapper<eastl::fixed_vector<StringView, _4ul> const>*)&local_10);
        return local_18[0];
    }

    // 0x10007b450
    auto DecodeArg<eastl::fixed_vector<StringView, 4ul> const&>(
        eastl::fixed_vector<ArgDecodingError, 4ul>& argDecodingErrors, const Console& console,
        const eastl::fixed_vector<StringView, 4ul>& stringViews, int arg4) {
        return std::ref<eastl::fixed_vector<StringView, 4ul> const>(argDecodingErrors);
    }

} // namespace jag::console::internal

namespace jag::graphics {
    // 0x103c04d10
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x103c04d50
    uint8_t WORLD_ORTHOGONAL[12];

} // namespace jag::graphics

namespace jag::oldscape::defaults {
    // 0x103c04d5c
    int32_t DefaultsGroup::GRAPHICS;

} // namespace jag::oldscape::defaults

namespace jag::ui {
    // 0x1000792d0: ComponentDragConfig::ComponentDragConfig() has the same machine code as oldscape::minimenu::MinimenuComponent::MinimenuComponent()

} // namespace jag::ui

namespace jag::auth {
    // 0x10007d0d0: GameSessionTokenCredentials::operator=(GameSessionTokenCredentials&&) has the same machine code as oldscape::ConsoleCommandHelp::operator=(oldscape::ConsoleCommandHelp&&)

} // namespace jag::auth
