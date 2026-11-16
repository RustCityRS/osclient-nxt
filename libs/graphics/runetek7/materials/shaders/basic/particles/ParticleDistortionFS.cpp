// libs/graphics/runetek7/materials/shaders/basic/particles/ParticleDistortionFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ParticleDistortionFS {
    public:
        // virtual methods in vtable order
        virtual ~ParticleDistortionFS();
        virtual ParticleDistortionFS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ParticleDistortionFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint8_t _unknown_40[8];
    };

    // 0x100022b10: ParticleDistortionFS::~ParticleDistortionFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ParticleDistortionFS::~ParticleDistortionFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100897a50
    ParticleDistortionFS::ParticleDistortionFS() {
        EffectList local_68;
        uint64_t local_36 = 7523077635848163131;
        uint32_t local_2e = 1160932359;
        uint16_t local_2a = 15684;
        uint64_t local_40 = 14;
        EffectList local_58(&local_36);
        new (this) ShaderSource(local_68, local_58);
        new (&field_40) TextureAtlasLookup();
    }

    // 0x100897b20
    ParticleDistortionFS* ParticleDistortionFS::GetSource(const EffectManager& effectManager,
                                                          const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        char* pcVar3;
        EffectList* in_RCX;
        uint8_t local_178[280];

        new (local_178) RT7PixelShaderSourceStream(effectManager, *in_RCX, 1, 1, 1, 1, 1, 1, 24);
        char local_32 = in_RCX->Contains(59);
        char local_31 = in_RCX->Contains(64);
        char local_33 = in_RCX->Contains(87);
        bool cVar1 = in_RCX->Contains(103);
        bool cVar2 = in_RCX->Contains(54);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_178 + 16);
        std::operator<<(basic_ostream,
                        "in highp vec4 vWorldPosition;\nflat in vec4 vVertexAlbedo;\nflat in vec2 "
                        "vMaterialSettingsSlotXY;\nin vec4 vTextureUV;\nin float vUVInterpolationAmount;\n");
        if (cVar1) {
            std::operator<<(basic_ostream, "in float vViewSpaceDepth;\n");
        }
        local_50.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        std::operator<<(basic_ostream, "uniform vec4 uAtlasMeta;\nuniform sampler2D uTextureAtlas;\nuniform sampler2D "
                                       "uTextureAtlasSettings;\nuniform highp mat4 uInvViewMatrix;\n");
        if (cVar2) {
            std::operator<<(basic_ostream, "uniform highp float uTextureAnimationTime;\n");
            std::operator<<(basic_ostream, "uniform sampler2D uViewportMap;\n");
            std::operator<<(basic_ostream, "uniform vec2 uViewportMapTextureSize;\n");
        }
        if (local_33 != '\0') {
            pcVar3 = shadersourceprovider::GetShaderString(58);
            std::operator<<(basic_ostream, pcVar3);
        }
        if (cVar1) {
            std::operator<<(basic_ostream, "uniform float uParticleInvSoftScale;\n");
        }
        pcVar3 = shadersourceprovider::GetShaderString(83);
        basic_ostream<char, std::char_traits<char> _>* basic_ostream_00 = std::operator<<(basic_ostream, pcVar3);
        pcVar3 = shadersourceprovider::GetShaderString(82);
        std::operator<<(basic_ostream_00, pcVar3);
        auto local_50 = effectManager->field_40.BuildFSFragment(*in_RCX, 0);
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        if (local_31 != '\0') {
            local_50 = BloomHDR::BuildFSFragment();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        }
        if (local_32 == '\0') {
            pcVar3 = shadersourceprovider::GetShaderString(92);
            std::operator<<(basic_ostream, pcVar3);
        } else {
            pcVar3 = shadersourceprovider::GetShaderString(93);
            std::operator<<(basic_ostream, pcVar3);
        }
        pcVar3 = shadersourceprovider::GetShaderString(46);
        std::operator<<(basic_ostream, pcVar3);
        *this = local_178->str();
        return this;
    }

} // namespace jag::graphics
