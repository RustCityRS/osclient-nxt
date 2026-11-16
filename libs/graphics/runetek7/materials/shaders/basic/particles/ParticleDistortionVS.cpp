// libs/graphics/runetek7/materials/shaders/basic/particles/ParticleDistortionVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ParticleDistortionVS {
    public:
        // virtual methods in vtable order
        virtual ~ParticleDistortionVS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ParticleDistortionVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: ParticleDistortionVS::~ParticleDistortionVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ParticleDistortionVS::~ParticleDistortionVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100897dc0
    ParticleDistortionVS::ParticleDistortionVS() {
        uint8_t local_21 = 79;
        uint64_t local_40 = 1;
        EffectList local_68(&local_21);
        uint16_t local_23 = 26375;
        uint64_t local_30 = 2;
        EffectList local_58(&local_23);
        new (this) ShaderSource(local_68, local_58);
    }

    // 0x100897e50
    auto ParticleDistortionVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_150[280];
        ViewTransformsFragment local_38;

        new (local_150) RT7VertexShaderSourceStream(*this, effectList, 2, 2, 1, 1, 1, 1, 24);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_150 + 16);
        std::operator<<(basic_ostream,
                        "attribute vec4 aParticleOrigin_CreationTime;\nattribute vec2 aParticleOffset;\nattribute vec4 "
                        "aVertexColour;\nattribute vec4 aMaterialSettingsSlotXY_Rotation;\nattribute vec4 "
                        "aParticleUVAnimationData;\nattribute vec3 aParticleVelocity;\n");
        local_38.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_38);
        std::operator<<(basic_ostream,
                        "uniform highp float uTextureAnimationTime;\nuniform highp mat4 uInvViewMatrix;\n");
        std::operator<<(basic_ostream,
                        "out highp vec4 vWorldPosition;\nflat out vec4 vVertexAlbedo;\nflat out vec2 "
                        "vMaterialSettingsSlotXY;\nout vec4 vTextureUV;\nout float vUVInterpolationAmount;\n");
        if (effectList.Contains(103) != '\0') {
            std::operator<<(basic_ostream, "out float vViewSpaceDepth;\n");
        }
        auto str = shadersourceprovider::GetShaderString(47);
        std::operator<<(basic_ostream, str);
        auto result = local_150->str();
        return result;
    }

} // namespace jag::graphics
