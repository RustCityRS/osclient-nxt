// libs/graphics/runetek7/materials/shaders/basic/terrain/TerrainFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class TerrainFS {
    public:
        // virtual methods in vtable order
        virtual ~TerrainFS();
        virtual TerrainFS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        TerrainFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint8_t _unknown_40[8];
    };

    // 0x100022b10: TerrainFS::~TerrainFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: TerrainFS::~TerrainFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088a480
    TerrainFS::TerrainFS() {
        uint16_t local_6a = 7505;
        uint64_t local_88 = 2;
        EffectList local_b0(&local_6a);
        uint64_t local_48 = 578437725934650371;
        uint64_t uStack_40 = 1230063429716741898;
        uint64_t local_58 = 7940462028951593505;
        uint64_t uStack_50 = 144397042473055850;
        uint64_t local_68 = 4267189342014215701;
        uint64_t uStack_60 = 2314602011926151231;
        uint32_t local_38 = 661931326;
        uint64_t local_78 = 52;
        EffectList local_a0(&local_68);
        new (this) ShaderSource(local_b0, local_a0);
        new (&field_40) TextureAtlasLookup();
    }

    // 0x10088a590
    TerrainFS* TerrainFS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        basic_ostream<char, std::char_traits<char> _>* pbVar4;
        char* pcVar5;
        EffectList* in_RCX;
        uint8_t local_188[280];
        uint32_t local_5c;

        new (local_188) RT7PixelShaderSourceStream(effectManager, *in_RCX, 1, 1, 1, 1, 1, 1, 24);
        char local_52 = in_RCX->Contains(59);
        char local_31 = in_RCX->Contains(63);
        uint8_t bVar1 = in_RCX->Contains(29);
        char cVar2 = in_RCX->Contains(30);
        char local_36 = in_RCX->Contains(35);
        if (bVar1 == 0) {
            local_5c = 0;
        } else {
            local_5c = in_RCX->Contains(48);
        }
        char local_35 = in_RCX->Contains(26);
        char cVar3 = in_RCX->Contains(110);
        char local_33 = in_RCX->Contains(28);
        char local_51 = in_RCX->Contains(64);
        char local_55 = in_RCX->Contains(87);
        uint8_t local_32 = in_RCX->Contains(21);
        char local_53 = cVar3;
        uint8_t local_37 = bVar1;
        uint8_t local_34 = in_RCX->Contains(61);
        char local_54 = in_RCX->Contains(54);
        DebugMaterialHighlightEffect local_50 = DebugReturn::BuildUniforms();
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_188 + 16);
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        local_50.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        cVar3 = in_RCX->Contains(116);
        if (cVar3) {
            std::operator<<(basic_ostream, "#define STIPPLE_TRANSPARENCY_CLIP_FAR\n");
        }
        if ((uint8_t)((uint8_t)local_5c | local_37 | local_32) == 1) {
            local_50 = DirLights::BuildUniforms();
            pbVar4 = std::operator<<(
                basic_ostream, (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            pcVar5 = shadersourceprovider::GetShaderString(70);
            pbVar4 = std::operator<<(pbVar4, pcVar5);
            pcVar5 = shadersourceprovider::GetShaderString(115);
            std::operator<<(pbVar4, pcVar5);
            local_50.~basic_string();
        }
        if (local_32 != 0) {
            local_50 = Irradiance::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if (cVar2) {
            if (local_33 == '\0') {
                pbVar4 = std::operator<<(basic_ostream, "UNIFORM_BUFFER_BEGIN(SunlightViewTransform)\n   uniform highp "
                                                        "mat4 uSunlightViewMatrix;\nUNIFORM_BUFFER_END\n");
                local_50 = DirLightShadowMapping::BuildUniforms();
                std::operator<<(pbVar4,
                                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            } else {
                std::operator<<(basic_ostream, "uniform sampler2D uShadowBuffer;\n");
            }
        }
        if (local_36 != '\0') {
            local_50 = PointLightShadowMapping::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if (local_35 != '\0') {
            local_50 = PointLightIndices::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if (local_31 != '\0') {
            std::operator<<(basic_ostream, "uniform highp float uGridSize;\nuniform mediump vec4 uAtlasMeta;\nuniform "
                                           "sampler2D uTextureAtlas;\nuniform sampler2D uTextureAtlasSettings;\n");
        }
        if (local_54 != '\0') {
            std::operator<<(basic_ostream, "uniform highp float uTextureAnimationTime;\n");
            std::operator<<(basic_ostream, "uniform sampler2D uViewportMap;\n");
            std::operator<<(basic_ostream, "uniform vec2 uViewportMapTextureSize;\n");
        }
        if (local_53 != '\0') {
            local_50 = AmbientOcclusion::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if (local_55 != '\0') {
            pcVar5 = shadersourceprovider::GetShaderString(58);
            std::operator<<(basic_ostream, pcVar5);
        }
        cVar3 = in_RCX->Contains(15);
        if (cVar3) {
            std::operator<<(basic_ostream, "uniform vec4 uDebugTexelDensity;\n");
        }
        cVar3 = in_RCX->Contains(119);
        if (cVar3) {
            std::operator<<(basic_ostream, "uniform vec4 uDebugTerrainSpecular;\n");
        }
        cVar3 = in_RCX->Contains(19);
        if (cVar3) {
            local_50.BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        cVar3 = in_RCX->Contains(44);
        if (cVar3) {
            std::operator<<(basic_ostream,
                            "uniform sampler2D uCausticsMap;\nuniform highp float uCausticsPlaneHeight;\nuniform highp "
                            "mat4 uCausticsViewProjMatrix;\nuniform vec2 uCausticsOverWaterFade;\n");
        }
        std::operator<<(basic_ostream, "in highp vec4 vWorldPos_ViewSpaceDepth;\n");
        std::operator<<(basic_ostream, "in vec4 vVertexAlbedo;\n");
        local_37 = local_37 | local_34;
        if ((local_37 != 0) || (cVar3 = in_RCX->Contains(2), cVar3)) {
            std::operator<<(basic_ostream, "in vec3 vWorldNormal;\n");
        }
        if (local_32 == 1 && local_34 == 0) {
            std::operator<<(basic_ostream, "in vec3 vAmbientColour;\n");
        }
        if (local_31 != '\0') {
            std::operator<<(basic_ostream, "flat in highp vec4 vMaterialSettingsSlots1D;\nflat in highp vec4 "
                                           "vTextureScale;\nin vec4 vTextureWeight;\n");
        }
        std::operator<<(basic_ostream, "flat in vec4 vMaterialProperties;\n");
        if (((char)local_5c != '\0') || (cVar3 = in_RCX->Contains(57), cVar3)) {
            pcVar5 = shadersourceprovider::GetShaderString(68);
            std::operator<<(basic_ostream, pcVar5);
        }
        if (local_31 != '\0') {
            local_50 = effectManager->field_40.BuildFSFragment(*in_RCX, 1);
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if (cVar2 == '\x01' && local_33 == '\0') {
            local_50 = DirLightShadowMapping::BuildFSFragment(5);
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if (local_36 != '\0') {
            local_50 = PointLightShadowMapping::BuildFSFragment();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if ((char)local_5c == '\0') {
        LAB_10088aa95:
            cVar2 = in_RCX->Contains(57);
            if (!cVar2)
                goto LAB_10088aabb;
        } else {
            pcVar5 = shadersourceprovider::GetShaderString(69);
            std::operator<<(basic_ostream, pcVar5);
            if ((char)local_5c == '\0')
                goto LAB_10088aa95;
        }
        pcVar5 = shadersourceprovider::GetShaderString(67);
        std::operator<<(basic_ostream, pcVar5);
    LAB_10088aabb:
        if (local_35 != '\0') {
            local_50 = PointLightIndices::BuildFSFragment();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if (local_51 != '\0') {
            local_50 = BloomHDR::BuildFSFragment();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if (local_32 != 0) {
            local_50.BuildFSFragment();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if (local_52 == '\0') {
            if (local_31 != '\0') {
                pcVar5 = shadersourceprovider::GetShaderString(92);
                std::operator<<(basic_ostream, pcVar5);
            }
            pcVar5 = shadersourceprovider::GetShaderString(99);
            std::operator<<(basic_ostream, pcVar5);
        } else {
            if (local_31 != '\0') {
                pcVar5 = shadersourceprovider::GetShaderString(93);
                std::operator<<(basic_ostream, pcVar5);
            }
            pcVar5 = shadersourceprovider::GetShaderString(104);
            std::operator<<(basic_ostream, pcVar5);
        }
        *this = local_188->str();
        return this;
    }

} // namespace jag::graphics
