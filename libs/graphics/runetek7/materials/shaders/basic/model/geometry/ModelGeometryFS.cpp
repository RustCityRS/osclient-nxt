// libs/graphics/runetek7/materials/shaders/basic/model/geometry/ModelGeometryFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ModelGeometryFS {
    public:
        // virtual methods in vtable order
        virtual ~ModelGeometryFS();
        virtual ModelGeometryFS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ModelGeometryFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint8_t _unknown_40[8];
    };

    // 0x100022b10: ModelGeometryFS::~ModelGeometryFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ModelGeometryFS::~ModelGeometryFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100895050
    ModelGeometryFS::ModelGeometryFS() {
        uint16_t local_7a = 7503;
        uint64_t local_98 = 2;
        EffectList local_c0(&local_7a);
        uint64_t local_48 = 1373899221505804552;
        uint64_t uStack_40 = 3399190960198079062;
        uint64_t local_58 = 216736832471446359;
        uint64_t uStack_50 = 506107457325171972;
        uint64_t local_68 = 3973613183446360095;
        uint64_t uStack_60 = 4122599530425299000;
        uint64_t local_78 = 4763429725955102229;
        uint64_t uStack_70 = 2180935465736026961;
        uint64_t local_38 = 6712412339406454380;
        uint64_t local_88 = 72;
        EffectList local_b0(&local_78);
        new (this) ShaderSource(local_c0, local_b0);
        new (&field_40) TextureAtlasLookup();
    }

    // 0x100895170
    ModelGeometryFS* ModelGeometryFS::GetSource(const EffectManager& effectManager,
                                                const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        basic_ostream<char, std::char_traits<char> _>* pbVar5;
        char* pcVar6;
        EffectList* in_RCX;
        EffectList* this_01;
        uint8_t local_180[280];

        new (local_180) RT7PixelShaderSourceStream(effectManager, *in_RCX, 1, 1, 1, 1, 1, 1, 24);
        uint8_t bVar1 = in_RCX->Contains(29);
        char local_36 = in_RCX->Contains(30);
        char local_35 = in_RCX->Contains(35);
        uint8_t local_31 = in_RCX->Contains(48);
        char local_34 = in_RCX->Contains(21);
        uint8_t local_32 = in_RCX->Contains(26);
        uint8_t bVar2 = in_RCX->Contains(55);
        char local_56 = in_RCX->Contains(110);
        char local_51 = in_RCX->Contains(64);
        char cVar3 = in_RCX->Contains(87);
        char local_33 = in_RCX->Contains(28);
        char local_55 = in_RCX->Contains(108);
        char local_54 = cVar3;
        uint8_t local_52 = bVar2;
        char local_53 = in_RCX->Contains(86);
        cVar3 = in_RCX->Contains(54);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_180 + 16);
        std::operator<<(basic_ostream, "uniform highp float uTextureAnimationTime;\n");
        DebugMaterialHighlightEffect local_50 = DebugReturn::BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        local_50.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        if ((bVar1 | local_31) == 1) {
            local_50 = DirLights::BuildUniforms();
            pbVar5 = std::operator<<(
                basic_ostream, (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            pcVar6 = shadersourceprovider::GetShaderString(70);
            pbVar5 = std::operator<<(pbVar5, pcVar6);
            pcVar6 = shadersourceprovider::GetShaderString(115);
            std::operator<<(pbVar5, pcVar6);
            local_50.~basic_string();
        }
        if (local_32 != 0) {
            local_50 = PointLightIndices::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if (local_36 != '\0') {
            if (local_33 == '\0') {
                pbVar5 = std::operator<<(basic_ostream, "UNIFORM_BUFFER_BEGIN(SunlightViewTransform)\n   uniform highp "
                                                        "mat4 uSunlightViewMatrix;\nUNIFORM_BUFFER_END\n");
                local_50 = DirLightShadowMapping::BuildUniforms();
                std::operator<<(pbVar5,
                                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            } else {
                std::operator<<(basic_ostream, "uniform sampler2D uShadowBuffer;\n");
            }
        }
        if (local_35 != '\0') {
            local_50 = PointLightShadowMapping::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        std::operator<<(basic_ostream, "uniform float uAlphaTestThreshold;\n");
        if (in_RCX->Contains(63) != '\0') {
            std::operator<<(basic_ostream, "uniform vec4 uAtlasMeta;\nuniform sampler2D uTextureAtlas;\nuniform "
                                           "sampler2D uTextureAtlasSettings;\n");
        }
        if (cVar3) {
            std::operator<<(basic_ostream, "uniform sampler2D uViewportMap;\n");
            std::operator<<(basic_ostream, "uniform vec2 uViewportMapTextureSize;\n");
        }
        std::operator<<(basic_ostream,
                        "uniform samplerCube uGlobalEnvironmentMap;\nuniform vec4 uGlobalEnvironmentMappingParams;\n");
        if (local_34 != '\0') {
            local_50 = Irradiance::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if (local_56 != '\0') {
            local_50 = AmbientOcclusion::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if (local_55 != '\0') {
            pcVar6 = shadersourceprovider::GetShaderString(83);
            pbVar5 = std::operator<<(basic_ostream, pcVar6);
            pcVar6 = shadersourceprovider::GetShaderString(82);
            std::operator<<(pbVar5, pcVar6);
        }
        cVar3 = in_RCX->Contains(13);
        if (cVar3) {
            std::operator<<(basic_ostream, "uniform vec4 uDebugInstanceColour;\n");
        }
        if (local_54 != '\0') {
            pcVar6 = shadersourceprovider::GetShaderString(58);
            std::operator<<(basic_ostream, pcVar6);
        }
        cVar3 = in_RCX->Contains(15);
        if (cVar3) {
            std::operator<<(basic_ostream, "uniform vec4 uDebugTexelDensity;\n");
        }
        cVar3 = in_RCX->Contains(9);
        if (cVar3) {
            std::operator<<(basic_ostream, "uniform float uDebugEmissiveScale;\n");
            std::operator<<(basic_ostream, "uniform float uDebugEmissiveMaskMultiplier;\n");
        }
        cVar3 = in_RCX->Contains(19);
        if (cVar3) {
            local_50.BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        cVar3 = in_RCX->Contains(82);
        if (cVar3) {
            std::operator<<(basic_ostream, "uniform vec4 uTint;\n");
        }
        cVar3 = in_RCX->Contains(44);
        if (cVar3) {
            std::operator<<(basic_ostream,
                            "uniform sampler2D uCausticsMap;\nuniform highp float uCausticsPlaneHeight;\nuniform highp "
                            "mat4 uCausticsViewProjMatrix;\nuniform vec2 uCausticsOverWaterFade;\n");
        }
        if (local_53 == '\0') {
            cVar3 = in_RCX->Contains(116);
            if (cVar3) {
                std::operator<<(basic_ostream, "#define STIPPLE_TRANSPARENCY_CLIP_NEAR\n");
                std::operator<<(basic_ostream, "#define STIPPLE_TRANSPARENCY_CLIP_FAR\n");
            }
            cVar3 = in_RCX->Contains(117);
            if (cVar3) {
                local_50 = StippleCutoutEffect::BuildUniforms();
                std::operator<<(basic_ostream,
                                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            }
        }
        std::operator<<(basic_ostream, "in highp vec3 vWorldPosition;\n");
        std::operator<<(basic_ostream, "in highp vec3 vNormal;\n");
        cVar3 = in_RCX->Contains(61);
        if (cVar3) {
            std::operator<<(basic_ostream, "in vec4 vTangent;\n");
        }
        if ((local_52 & local_32) == 1) {
            std::operator<<(basic_ostream, "in vec3 vTilePosition;\n");
        }
        cVar3 = in_RCX->Contains(81);
        if (cVar3) {
            std::operator<<(basic_ostream, "in mediump vec4 vVertexAlbedo;\n");
        }
        cVar3 = in_RCX->Contains(63);
        if (cVar3) {
            std::operator<<(basic_ostream, "in vec2 vTextureUV;\n");
        }
        std::operator<<(basic_ostream, "flat in vec3 vMaterialSettingsSlotXY_BatchFlags;\n");
        if ((local_31 != 0) || (this_01 = in_RCX, cVar3 = in_RCX->Contains(57), cVar3)) {
            pcVar6 = shadersourceprovider::GetShaderString(68);
            this_01 = (EffectList*)basic_ostream;
            std::operator<<(basic_ostream, pcVar6);
        }
        long lVar7 = ((MapArea*)this_01->Instance())->GetOrigin();
        local_50 = TextureCubeUtils::BuildFragment(*(bool*)(lVar7 + 147));
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        cVar3 = in_RCX->Contains(63);
        if (cVar3) {
            local_50 = effectManager->field_40.BuildFSFragment(*in_RCX, 2);
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if (local_36 == '\x01' && local_33 == '\0') {
            local_50 = DirLightShadowMapping::BuildFSFragment(5);
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if (local_35 != '\0') {
            local_50 = PointLightShadowMapping::BuildFSFragment();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if (local_31 == 0) {
        LAB_1008957e7:
            cVar3 = in_RCX->Contains(57);
            if (!cVar3)
                goto LAB_10089580d;
        } else {
            pcVar6 = shadersourceprovider::GetShaderString(69);
            std::operator<<(basic_ostream, pcVar6);
            if (local_31 == 0)
                goto LAB_1008957e7;
        }
        pcVar6 = shadersourceprovider::GetShaderString(67);
        std::operator<<(basic_ostream, pcVar6);
    LAB_10089580d:
        if (local_34 != '\0') {
            local_50.BuildFSFragment();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            local_50.~basic_string();
        }
        if (local_32 != 0) {
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
        cVar3 = in_RCX->Contains(59);
        if (!cVar3) {
            cVar3 = in_RCX->Contains(63);
            if (cVar3) {
                pcVar6 = shadersourceprovider::GetShaderString(92);
                std::operator<<(basic_ostream, pcVar6);
            }
            pcVar6 = shadersourceprovider::GetShaderString(33);
            std::operator<<(basic_ostream, pcVar6);
        } else {
            cVar3 = in_RCX->Contains(63);
            if (cVar3) {
                pcVar6 = shadersourceprovider::GetShaderString(93);
                std::operator<<(basic_ostream, pcVar6);
            }
            pcVar6 = shadersourceprovider::GetShaderString(40);
            std::operator<<(basic_ostream, pcVar6);
        }
        *this = local_180->str();
        return this;
    }

} // namespace jag::graphics
