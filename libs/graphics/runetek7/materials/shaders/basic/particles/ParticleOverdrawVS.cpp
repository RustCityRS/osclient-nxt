// libs/graphics/runetek7/materials/shaders/basic/particles/ParticleOverdrawVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ParticleOverdrawVS {
    public:
        // virtual methods in vtable order
        virtual ~ParticleOverdrawVS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ParticleOverdrawVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: ParticleOverdrawVS::~ParticleOverdrawVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ParticleOverdrawVS::~ParticleOverdrawVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100889b30
    ParticleOverdrawVS::ParticleOverdrawVS() {
        uint8_t local_22 = 79;
        uint64_t local_40 = 1;
        EffectList local_68(&local_22);
        uint8_t local_21 = 79;
        uint64_t local_30 = 1;
        EffectList local_58(&local_21);
        new (this) ShaderSource(local_68, local_58);
    }

    // 0x100889bc0
    auto ParticleOverdrawVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_148[280];
        ViewTransformsFragment local_30;

        new (local_148) RT7VertexShaderSourceStream(*this, effectList, 2, 2, 1, 1, 1, 1, 24);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16);
        std::operator<<(basic_ostream,
                        "\n                attribute vec4 aParticleOrigin_CreationTime;\n                attribute "
                        "vec2 aParticleOffset;\n                attribute vec4 aMaterialSettingsSlotXY_Rotation;\n     "
                        "           attribute vec4 aParticleUVAnimationData;\n                attribute vec3 "
                        "aParticleVelocity;\n                ");
        local_30.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        std::operator<<(basic_ostream, "out highp vec4 vWorldPosition;\n");
        auto str = shadersourceprovider::GetShaderString(50);
        std::operator<<(basic_ostream, str);
        auto result = local_148->str();
        return result;
    }

} // namespace jag::graphics
