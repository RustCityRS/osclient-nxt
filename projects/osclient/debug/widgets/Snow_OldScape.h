// projects/osclient/debug/widgets/Snow_OldScape.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    // 0x1000173f0, 16 bytes, inline, placed by class name
    // HiscoresInstanceToID(HiscoresInstance)
    int HiscoresInstanceToID(int param_1) {
        return (uint)(1 < param_1) + param_1;
    }

    // 0x1000176c0, 48 bytes, inline, placed by class name
    // HiscoresInstanceToName(eastl::string&, HiscoresInstance)
    void HiscoresInstanceToName(eastl::string* param_1, uint param_2) {
        basic_string* pbVar1;

        pbVar1 = (basic_string*)std::array<eastl::string, 10ul>::operator[](
            (array<eastl::string, 10ul>*)&typeToInstance, (ulong)param_2);
        eastl::string::operator=(param_1, pbVar1);
    }

    // 0x100048320, 32 bytes, inline, placed by class name
    // void GetEnumRange<ClientWindowMode>(ClientWindowMode&, ClientWindowMode&)
    void GetEnumRange<ClientWindowMode>(ClientWindowMode* param_1, ClientWindowMode* param_2) {
        *(undefined4*)param_1 = 1;
        *(undefined4*)param_2 = 2;
    }

    // 0x1000488a0, 32 bytes, inline, placed by class name
    // void GetEnumRange<ScaledUIQuality>(ScaledUIQuality&, ScaledUIQuality&)
    /* void 
   GetEnumRange<hal::Haptics::ImpactStrength>(hal::Haptics::ImpactStrength&,
   hal::Haptics::ImpactStrength&) */

    void GetEnumRange<hal::Haptics::ImpactStrength>(ImpactStrength* param_1, ImpactStrength* param_2) {
        *(undefined4*)param_1 = 0;
        *(undefined4*)param_2 = 2;
    }

    // 0x10004a3b0, 16 bytes, inline, placed by class name
    // bool IsValidEnumValue<hal::Haptics::ImpactStrength>(std::underlying_type<hal::Haptics::ImpactStrength>::type)
    /* bool 
   IsValidEnumValue<ChatTimestampMode>(std::underlying_type<ChatTimestampMode>::type)
    */

    bool IsValidEnumValue<ChatTimestampMode>(uint param_1) {
        return param_1 < 3;
    }

    // 0x100065c20, 32 bytes, inline, placed by class name
    // Json::Value JsonSerialize<RSevenDebugConfiguration>(RSevenDebugConfiguration const&)
    oldscape* JsonSerialize<RSevenDebugConfiguration>(RSevenDebugConfiguration* param_1) {
        Serialize(param_1);
        return this;
    }

    // 0x100065f50, 176 bytes, inline, placed by class name
    // void JsonDeserialize<RSevenDebugConfiguration>(Json::Value const&, RSevenDebugConfiguration&)
    void JsonDeserialize<RSevenDebugConfiguration>(Value* param_1, RSevenDebugConfiguration* param_2) {
        RSevenDebugConfiguration local_198;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (Json::Value::isNull(param_1) == '\0') {
            JsonDeserializer<RSevenDebugConfiguration>::Deserialize(param_1, param_2);
        } else {
            ___bzero(&local_198, 368);
            new (&local_198) RSevenDebugConfiguration();
            RSevenDebugConfiguration::operator=(param_2, &local_198);
            local_198.~RSevenDebugConfiguration();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100075280, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ConsoleCommandHelp::ConsoleCommandHelp(char const*, char const*)
    void ConsoleCommandHelp::ConsoleCommandHelp(char* param_1, char* param_2) {
        allocator local_38[8];

        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (this) eastl::string(param_1, local_38);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&field_32, param_2, local_38) eastl::string();
    }

    // 0x100075370, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ConsoleCommandHelp::ConsoleCommandHelp(ConsoleCommandHelp const&): jumps straight to the base-object constructor

    // 0x100075380, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ConsoleCommandHelp::ConsoleCommandHelp(ConsoleCommandHelp const&)
    void ConsoleCommandHelp::ConsoleCommandHelp(ConsoleCommandHelp* param_1) {
        new (this) eastl::string(param_1);
        new (&field_32, (basic_string*)&param_1->field_32) eastl::string();
    }

    // 0x1000753f0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ConsoleCommandHelp::~ConsoleCommandHelp()
    /* eastl::pair<eastl::string const, eastl::basic_string<char,
   eastl::allocator> const>::~pair() */

    void
        eastl::pair<eastl::stringconst, eastl::stringconst>::~pair(pair<eastl::stringconst, eastl::stringconst>* this) {
        ((this + 32))->~basic_string();
        ~basic_string();
    }

    // 0x100076660, 384 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // RSevenDebugConfiguration::RSevenDebugConfiguration()
    void RSevenDebugConfiguration::RSevenDebugConfiguration() {
        allocator local_28[8];

        field_0 = 0;
        eastl::allocator::allocator(local_28, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_8);
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
        new (field_304, 1.0, 0.7, 0.5) jag::math::ColourHSL();
        new (field_320, 0.025, 0.025, 0.025) jag::math::ColourHSL();
        *(undefined8*)(field_320 + 12) = 4575657222473777152;
        field_352 = 21474836480;
    }

    // 0x1000767e0, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // RSevenDebugConfiguration::~RSevenDebugConfiguration()
    void RSevenDebugConfiguration::~RSevenDebugConfiguration() {
        (&field_8)->~map();
    }

    // 0x100083ce0, 32 bytes, inline, placed by class name
    // Json::Value JsonSerialize<bool>(bool const&)
    oldscape* JsonSerialize<bool>(bool* param_1) {
        Serialize(param_1);
        return this;
    }

    // 0x100083d00, 32 bytes, inline, placed by class name
    // Json::Value JsonSerialize<eastl::map<eastl::string, bool, eastl::less<eastl::string >, eastl::allocator> >(eastl::map<eastl::string, bool, eastl::less<eastl::string >, eastl::allocator> const&)
    map* oldscape::JsonSerialize<eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>>(
        map* param_1) {
        param_1->Serialize();
        return param_1;
    }

    // 0x100083d20, 32 bytes, inline, placed by class name
    // Json::Value JsonSerialize<int>(int const&)
    oldscape* JsonSerialize<int>(int* param_1) {
        Serialize(param_1);
        return this;
    }

    // 0x100083d40, 32 bytes, inline, placed by class name
    // Json::Value JsonSerialize<DistanceFogParams>(DistanceFogParams const&)
    oldscape* JsonSerialize<DistanceFogParams>(DistanceFogParams* param_1) {
        Serialize(param_1);
        return this;
    }

    // 0x100083d60, 32 bytes, inline, placed by class name
    // Json::Value JsonSerialize<jag::graphics::SimpleScatteringParams>(jag::graphics::SimpleScatteringParams const&)
    oldscape* JsonSerialize<jag::graphics::SimpleScatteringParams>(SimpleScatteringParams* param_1) {
        Serialize(param_1);
        return this;
    }

    // 0x100083d80, 32 bytes, inline, placed by class name
    // Json::Value JsonSerialize<jag::graphics::SSAOParams>(jag::graphics::SSAOParams const&)
    oldscape* JsonSerialize<jag::graphics::SSAOParams>(SSAOParams* param_1) {
        Serialize(param_1);
        return this;
    }

    // 0x100083da0, 32 bytes, inline, placed by class name
    // Json::Value JsonSerialize<jag::graphics::SSAOPass::Mode>(jag::graphics::SSAOPass::Mode const&)
    oldscape* JsonSerialize<jag::graphics::SSAOPass::Mode>(Mode* param_1) {
        Serialize(param_1);
        return this;
    }

    // 0x100083dc0, 32 bytes, inline, placed by class name
    // Json::Value JsonSerialize<jag::graphics::SunlightOptions>(jag::graphics::SunlightOptions const&)
    SunlightOptions* JsonSerialize<jag::graphics::SunlightOptions>(SunlightOptions* param_1) {
        param_1->Serialize();
        return param_1;
    }

    // 0x100083de0, 32 bytes, inline, placed by class name
    // Json::Value JsonSerialize<TonemappingParams>(TonemappingParams const&)
    oldscape* JsonSerialize<TonemappingParams>(TonemappingParams* param_1) {
        Serialize(param_1);
        return this;
    }

    // 0x100083e00, 32 bytes, inline, placed by class name
    // Json::Value JsonSerialize<jag::graphics::VolumetricScatteringParams>(jag::graphics::VolumetricScatteringParams const&)
    oldscape* JsonSerialize<jag::graphics::VolumetricScatteringParams>(VolumetricScatteringParams* param_1) {
        Serialize(param_1);
        return this;
    }

    // 0x100084080, 32 bytes, inline, placed by class name
    // Json::Value JsonSerialize<float>(float const&)
    oldscape* JsonSerialize<float>(float* param_1) {
        Serialize(param_1);
        return this;
    }

    // 0x1000842b0, 32 bytes, inline, placed by class name
    // Json::Value JsonSerialize<jag::math::Vector3T<float> >(jag::math::Vector3T<float> const&)
    oldscape* JsonSerialize<jag::math::Vector3T<float>>(Vector3T* param_1) {
        Serialize(param_1);
        return this;
    }

    // 0x100084930, 32 bytes, inline, placed by class name
    // Json::Value JsonSerialize<jag::graphics::GraphicsQuality>(jag::graphics::GraphicsQuality const&)
    oldscape* JsonSerialize<jag::graphics::GraphicsQuality>(GraphicsQuality* param_1) {
        Serialize(param_1);
        return this;
    }

    // 0x100085110, 48 bytes, inline, placed by class name
    // void JsonDeserialize<bool>(Json::Value const&, bool&)
    void JsonDeserialize<bool>(Value* param_1, bool* param_2) {
        if (Json::Value::isNull(param_1) == '\0') {
            JsonDeserializer<bool>::Deserialize(param_1, param_2);
        } else {
            *param_2 = false;
        }
    }

    // 0x100085140, 128 bytes, inline, placed by class name
    // void JsonDeserialize<eastl::map<eastl::string, bool, eastl::less<eastl::string >, eastl::allocator> >(Json::Value const&, eastl::map<eastl::string, bool, eastl::less<eastl::string >, eastl::allocator>&)
    void oldscape::JsonDeserialize<eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>>(
        Value* param_1, map* param_2) {
        allocator local_58[48];
        allocator local_28[8];

        if (Json::Value::isNull(param_1) == '\0') {
            JsonDeserializer<
                eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>>::Deserialize(param_1,
                                                                                                            param_2);
        } else {
            eastl::allocator::allocator(local_28, "EASTL map");
            eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<eastl::string>, eastl::allocator>::map(local_58);
            eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>::operator=(
                (map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>*)param_2, (map*)local_58);
            local_58->~map();
        }
    }

    // 0x1000851c0, 48 bytes, inline, placed by class name
    // void JsonDeserialize<int>(Json::Value const&, int&)
    void JsonDeserialize<int>(Value* param_1, int* param_2) {
        if (Json::Value::isNull(param_1) == '\0') {
            JsonDeserializer<int>::Deserialize(param_1, param_2);
        } else {
            *param_2 = 0;
        }
    }

    // 0x1000851f0, 64 bytes, inline, placed by class name
    // void JsonDeserialize<DistanceFogParams>(Json::Value const&, DistanceFogParams&)
    void JsonDeserialize<DistanceFogParams>(Value* param_1, DistanceFogParams* param_2) {
        if (Json::Value::isNull(param_1) == '\0') {
            JsonDeserializer<DistanceFogParams>::Deserialize(param_1, param_2);
        } else {
            *(undefined4*)(param_2 + 8) = 0;
            *(undefined8*)param_2 = 0;
        }
    }

    // 0x100085230, 96 bytes, inline, placed by class name
    // void JsonDeserialize<jag::graphics::SimpleScatteringParams>(Json::Value const&, jag::graphics::SimpleScatteringParams&)
    void JsonDeserialize<jag::graphics::SimpleScatteringParams>(Value* param_1, SimpleScatteringParams* param_2) {
        SimpleScatteringParams local_58;
        undefined8 uStack_20;

        if (Json::Value::isNull(param_1) == '\0') {
            JsonDeserializer<jag::graphics::SimpleScatteringParams>::Deserialize(param_1, param_2);
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
            new (&local_58) jag::graphics::SimpleScatteringParams();
            jag::graphics::SimpleScatteringParams::operator=(param_2, &local_58);
        }
    }

    // 0x100085290, 112 bytes, inline, placed by class name
    // void JsonDeserialize<jag::graphics::SSAOParams>(Json::Value const&, jag::graphics::SSAOParams&)
    void JsonDeserialize<jag::graphics::SSAOParams>(Value* param_1, SSAOParams* param_2) {
        undefined8 local_48;
        undefined8 uStack_20;

        if (Json::Value::isNull(param_1) == '\0') {
            JsonDeserializer<jag::graphics::SSAOParams>::Deserialize(param_1, param_2);
        } else {
            uStack_20._0_1_ = 0;
            uStack_20._1_3_ = 0;
            uStack_20._4_4_ = 0;
            local_48 = 0;
            new (&local_48) jag::graphics::SSAOParams();
            *(undefined8*)((long)&param_2->field_28 + 4) = 0;
            param_2->field_40 = (undefined1)uStack_20;
            *(undefined3*)&param_2->field_41 = uStack_20._1_3_;
            param_2->field_44 = uStack_20._4_4_;
            *(undefined8*)&param_2->field_16 = 0;
            *(undefined8*)((long)&param_2->field_20 + 4) = 0;
            param_2->field_0 = local_48;
            param_2->field_8 = 0;
        }
    }

    // 0x100085300, 48 bytes, inline, placed by class name
    // void JsonDeserialize<jag::graphics::SSAOPass::Mode>(Json::Value const&, jag::graphics::SSAOPass::Mode&)
    void JsonDeserialize<jag::graphics::SSAOPass::Mode>(Value* param_1, Mode* param_2) {
        if (Json::Value::isNull(param_1) == '\0') {
            JsonDeserializer<jag::graphics::SSAOPass::Mode>::Deserialize(param_1, param_2);
        } else {
            *(undefined4*)param_2 = 0;
        }
    }

    // 0x100085330, 80 bytes, inline, placed by class name
    // void JsonDeserialize<jag::graphics::SunlightOptions>(Json::Value const&, jag::graphics::SunlightOptions&)
    void JsonDeserialize<jag::graphics::SunlightOptions>(Value* param_1, SunlightOptions* param_2) {
        SunlightOptions local_58;

        if (Json::Value::isNull(param_1) == '\0') {
            JsonDeserializer<jag::graphics::SunlightOptions>::Deserialize(param_1, param_2);
        } else {
            new (&local_58) jag::graphics::SunlightOptions();
            jag::graphics::SunlightOptions::operator=(param_2, &local_58);
        }
    }

    // 0x100085380, 80 bytes, inline, placed by class name
    // void JsonDeserialize<TonemappingParams>(Json::Value const&, TonemappingParams&)
    void JsonDeserialize<TonemappingParams>(Value* param_1, TonemappingParams* param_2) {
        TonemappingParams local_28;

        if (Json::Value::isNull(param_1) == '\0') {
            JsonDeserializer<TonemappingParams>::Deserialize(param_1, param_2);
        } else {
            local_28._0_8_ = 0;
            local_28._8_8_ = 0;
            new (&local_28) TonemappingParams();
            *(undefined8*)param_2 = local_28._0_8_;
            *(undefined8*)((long)&param_2->field_4 + 4) = local_28._8_8_;
        }
    }

    // 0x1000853d0, 144 bytes, inline, placed by class name
    // void JsonDeserialize<jag::graphics::VolumetricScatteringParams>(Json::Value const&, jag::graphics::VolumetricScatteringParams&)
    void JsonDeserialize<jag::graphics::VolumetricScatteringParams>(Value* param_1,
                                                                    VolumetricScatteringParams* param_2) {
        undefined1 local_78[72];
        undefined8 uStack_30;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (Json::Value::isNull(param_1) == '\0') {
            JsonDeserializer<jag::graphics::VolumetricScatteringParams>::Deserialize(param_1, param_2);
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
            jag::graphics::VolumetricScatteringParams::operator=(param_2, (VolumetricScatteringParams*)local_78);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100085850, 48 bytes, inline, placed by class name
    // void JsonDeserialize<float>(Json::Value const&, float&)
    void JsonDeserialize<float>(Value* param_1, float* param_2) {
        if (Json::Value::isNull(param_1) == '\0') {
            JsonDeserializer<float>::Deserialize(param_1, param_2);
        } else {
            *param_2 = 0.0;
        }
    }

    // 0x100085990, 80 bytes, inline, placed by class name
    // void JsonDeserialize<jag::math::Vector3T<float> >(Json::Value const&, jag::math::Vector3T<float>&)
    void JsonDeserialize<jag::math::Vector3T<float>>(Value* param_1, Vector3T* param_2) {
        Vector3T<int> local_28[16];

        if (Json::Value::isNull(param_1) == '\0') {
            JsonDeserializer<jag::math::Vector3T<float>>::Deserialize(param_1, param_2);
        } else {
            jag::math::Vector3T<int>::Vector3T(local_28);
            param_2->SetXYZ(local_28);
        }
    }

    // 0x100085d40, 48 bytes, inline, placed by class name
    // void JsonDeserialize<jag::graphics::GraphicsQuality>(Json::Value const&, jag::graphics::GraphicsQuality&)
    void JsonDeserialize<jag::graphics::GraphicsQuality>(Value* param_1, GraphicsQuality* param_2) {
        if (Json::Value::isNull(param_1) == '\0') {
            JsonDeserializer<jag::graphics::GraphicsQuality>::Deserialize(param_1, param_2);
        } else {
            *(undefined4*)param_2 = 0;
        }
    }

    // 0x100168390, 16 bytes, inline, placed by class name
    // bool IsValidEnumValue<ClientWindowMode>(std::underlying_type<ClientWindowMode>::type)
    /* bool 
   IsValidEnumValue<ClientWindowMode>(std::underlying_type<ClientWindowMode>::type)
    */

    bool IsValidEnumValue<ClientWindowMode>(int param_1) {
        return param_1 - 1U < 2;
    }

    // 0x1001c0d00, 64 bytes, inline, placed by class name
    // char const* ConvertEncodedResourceFilename<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > >(std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> >&, char const*)
    /* char const* ConvertEncodedResourceFilename<std::basic_string<char,
   std::char_traits<char>, BucketAllocatorSTL<char> > >(std::basic_string<char,
   std::char_traits<char>, BucketAllocatorSTL<char> >&, char const*) */

    char*
    oldscape::ConvertEncodedResourceFilename<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(
        basic_string* param_1, char* param_2) {
        bool bVar1;
        Base64* this;

        this = (Base64*)Base64::Instance();
        bVar1 = Base64::DecodeString<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(
            this, param_1, param_2);
        if (bVar1) {
            param_2 = (char*)param_1->data();
        }
        return param_2;
    }

} // namespace jag::oldscape

namespace jag::oldscape::widgets {
    class Snow_OldScape {
    public:
        // virtual methods in vtable order
        virtual ~Snow_OldScape();
        virtual void DrawSnowFlakes(int, int, int, int);
        virtual void DrawSnowPiles(int, int, int, int);

        // data members, from how the methods use this: 120 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        DrawContext* field_112; // offset 112
    };

    // 0x1000750e0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Snow_OldScape::~Snow_OldScape(): jumps straight to the base-object destructor

    // 0x1000750f0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // Snow_OldScape::~Snow_OldScape()
    void Snow_OldScape::~Snow_OldScape() {
        ~Snow_OldScape(this);
        operator_delete(this);
    }

    // 0x100075850, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Padding::Padding(int, int, int, int)
    /* dash3d::GridRect::GridRect(int, int, int, int) */

    void dash3d::GridRect::GridRect(int param_1, int param_2, int param_3, int param_4) {
        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
        field_12 = param_4;
    }

    // 0x1000797e0, 16 bytes, base-object destructor, inline, placed by class name
    // Snow_OldScape::~Snow_OldScape()
    void Snow_OldScape::~Snow_OldScape() {
        ~Snow();
    }

} // namespace jag::oldscape::widgets

namespace jag::auth {
    // 0x1000753f0: the linker folded this into oldscape::ConsoleCommandHelp::~ConsoleCommandHelp(), which has identical code
    OAuth2TokenPair::~OAuth2TokenPair();

    // 0x1000753f0: the linker folded this into oldscape::ConsoleCommandHelp::~ConsoleCommandHelp(), which has identical code
    FederatedLoginTokenPair::~FederatedLoginTokenPair();

    // 0x1000753f0: the linker folded this into oldscape::ConsoleCommandHelp::~ConsoleCommandHelp(), which has identical code
    GameSessionTokenCredentials::~GameSessionTokenCredentials();

} // namespace jag::auth

namespace jag::testframework {
    // 0x1000753f0: the linker folded this into oldscape::ConsoleCommandHelp::~ConsoleCommandHelp(), which has identical code
    TestAssertionResult::~TestAssertionResult();

} // namespace jag::testframework

namespace jag {
    // 0x1000753f0: the linker folded this into oldscape::ConsoleCommandHelp::~ConsoleCommandHelp(), which has identical code
    SteamApp::~SteamApp();

} // namespace jag

namespace jag::tweak {
    // 0x100075850: the linker folded this into oldscape::widgets::Padding::Padding(int, int, int, int), which has identical code
    Placement::Placement(int, int, int, int);

} // namespace jag::tweak

namespace jag::render {
    // 0x100075850: the linker folded this into oldscape::widgets::Padding::Padding(int, int, int, int), which has identical code
    GLFormat::GLFormat(int, unsigned int, unsigned int, unsigned int);

} // namespace jag::render

namespace jag::oldscape::dash3d {
    // 0x100075850: the linker folded this into widgets::Padding::Padding(int, int, int, int), which has identical code
    GridRect::GridRect(int, int, int, int);

} // namespace jag::oldscape::dash3d
