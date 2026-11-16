// libs/graphics/runetek7/materials/shaders/basic/particles/ParticleShadowVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ParticleShadowVS {
    public:
        // virtual methods in vtable order
        virtual ~ParticleShadowVS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ParticleShadowVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: ParticleShadowVS::~ParticleShadowVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ParticleShadowVS::~ParticleShadowVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100889f00
    ParticleShadowVS::ParticleShadowVS() {
        uint8_t local_29 = 79;
        uint64_t local_38 = 1;
        EffectList local_70(&local_29);
        initializer_list<EffectType> local_50;
        EffectList local_60(local_50);
        new (this) ShaderSource(local_70, local_60);
    }

    // 0x100889fa0
    auto ParticleShadowVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_148[280];
        ViewTransformsFragment local_30;

        new (local_148) RT7VertexShaderSourceStream(*this, effectList, 2, 2, 1, 1, 1, 1, 24);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16);
        std::operator<<(basic_ostream,
                        "attribute vec4 aParticleOrigin_CreationTime;\nattribute vec2 aParticleOffset;\nattribute vec4 "
                        "aVertexColour;\nattribute vec4 aMaterialSettingsSlotXY_Rotation;\nattribute vec4 "
                        "aParticleUVAnimationData;\nattribute vec3 aParticleVelocity;\n");
        local_30.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        std::operator<<(basic_ostream, "uniform highp float uTextureAnimationTime;\n");
        std::operator<<(basic_ostream, "out vec4 vVertexAlbedo;\nout vec4 vTextureUV;\nout float "
                                       "vUVInterpolationAmount;\nflat out vec2 vMaterialSettingsSlotXY;\n");
        auto str = shadersourceprovider::GetShaderString(51);
        std::operator<<(basic_ostream, str);
        auto result = local_148->str();
        return result;
    }

} // namespace jag::graphics
