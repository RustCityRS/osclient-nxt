// libs/graphics/runetek7/materials/shaders/basic/particles/ParticleFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ParticleFS {
    public:
        // virtual methods in vtable order
        virtual ~ParticleFS();
        virtual ParticleFS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ParticleFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint8_t _unknown_40[8];
    };

    // 0x100022b10: ParticleFS::~ParticleFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ParticleFS::~ParticleFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100897f80
    ParticleFS::ParticleFS() {
        EffectList local_78;
        uint64_t local_48 = 2314601844307545915;
        uint64_t uStack_40 = 24558937338290721;
        uint8_t uStack_39 = 103;
        uint64_t uStack_38 = 19207665824302953;
        uint64_t local_50 = 23;
        EffectList local_68(&local_48);
        new (this) ShaderSource(local_78, local_68);
        new (&field_40) TextureAtlasLookup();
    }

    // 0x100898050
    ParticleFS* ParticleFS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        char* pcVar6;
        EffectList* in_RCX;
        uint8_t local_180[280];
        basic_ostream<char, std::char_traits<char> _>* local_60;

        new (local_180) RT7PixelShaderSourceStream(effectManager, *in_RCX, 1, 1, 1, 1, 1, 1, 24);
        char local_34 = in_RCX->Contains(59);
        char cVar1 = in_RCX->Contains(48);
        uint8_t local_31 = 1;
        if (!cVar1) {
            local_31 = in_RCX->Contains(29);
        }
        cVar1 = in_RCX->Contains(64);
        char local_36 = in_RCX->Contains(87);
        uint8_t bVar2 = in_RCX->Contains(103);
        char cVar3 = in_RCX->Contains(30);
        char local_32 = in_RCX->Contains(28);
        char local_33 = cVar1;
        uint8_t bVar4 = in_RCX->Contains(29);
        char local_35 = in_RCX->Contains(54);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_180 + 16);
        std::operator<<(
            basic_ostream,
            "in highp vec4 vWorldPosition;\nflat in vec4 vVertexAlbedo;\nflat in vec2 vMaterialSettingsSlotXY;\nin "
            "vec4 vTextureUV;\nin float vUVInterpolationAmount;\nflat in float vAlphaOutput;\n");
        if (((bVar2 != 0) && (std::operator<<(basic_ostream, "flat in float vSoftFadeEnabled;\n"), bVar2 != 0)) ||
            (cVar1 = in_RCX->Contains(105), cVar1)) {
            std::operator<<(basic_ostream, "in float vViewSpaceDepth;\n");
        }
        if ((local_31 != 0) || (cVar1 = in_RCX->Contains(57), cVar1)) {
            pcVar6 = shadersourceprovider::GetShaderString(68);
            std::operator<<(basic_ostream, pcVar6);
        }
        local_50.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        std::operator<<(basic_ostream, "uniform vec4 uAtlasMeta;\nuniform sampler2D uTextureAtlas;\nuniform sampler2D "
                                       "uTextureAtlasSettings;\nuniform highp mat4 uInvViewMatrix;\n");
        if (cVar3) {
            if (local_32 == '\0') {
                local_60 = std::operator<<(basic_ostream, "UNIFORM_BUFFER_BEGIN(SunlightViewTransform)\n   uniform "
                                                          "mat4 uSunlightViewMatrix;\nUNIFORM_BUFFER_END\n");
                local_50 = DirLightShadowMapping::BuildUniforms();
                std::operator<<(local_60, &local_50);
            } else {
                std::operator<<(basic_ostream, "uniform sampler2D uShadowBuffer;\n");
            }
        }
        if (local_35 != '\0') {
            std::operator<<(basic_ostream, "uniform highp float uTextureAnimationTime;\n");
            std::operator<<(basic_ostream, "uniform sampler2D uViewportMap;\n");
            std::operator<<(basic_ostream, "uniform vec2 uViewportMapTextureSize;\n");
        }
        if (local_36 != '\0') {
            pcVar6 = shadersourceprovider::GetShaderString(58);
            std::operator<<(basic_ostream, pcVar6);
        }
        if ((in_RCX->Contains(108) & bVar2) == 1) {
            pcVar6 = shadersourceprovider::GetShaderString(83);
            std::operator<<(basic_ostream, pcVar6);
        }
        if (bVar2 != 0) {
            std::operator<<(basic_ostream, "uniform float uParticleInvSoftScale;\n");
        }
        if ((bVar4 | local_31) == 1) {
            local_50 = DirLights::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        }
        auto local_50 = effectManager->field_40.BuildFSFragment(*in_RCX, 0);
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        if ((local_31 != 0) || (cVar1 = in_RCX->Contains(57), cVar1)) {
            pcVar6 = shadersourceprovider::GetShaderString(67);
            std::operator<<(basic_ostream, pcVar6);
        }
        if (local_33 != '\0') {
            local_50 = BloomHDR::BuildFSFragment();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        }
        if (cVar3 == '\x01' && local_32 == '\0') {
            local_50 = DirLightShadowMapping::BuildFSFragment(5);
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        }
        if (local_34 == '\0') {
            pcVar6 = shadersourceprovider::GetShaderString(92);
            std::operator<<(basic_ostream, pcVar6);
        } else {
            pcVar6 = shadersourceprovider::GetShaderString(93);
            std::operator<<(basic_ostream, pcVar6);
        }
        pcVar6 = shadersourceprovider::GetShaderString(43);
        std::operator<<(basic_ostream, pcVar6);
        *this = local_180->str();
        return this;
    }

} // namespace jag::graphics
