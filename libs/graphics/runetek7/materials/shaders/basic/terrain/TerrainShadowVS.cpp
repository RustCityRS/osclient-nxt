// libs/graphics/runetek7/materials/shaders/basic/terrain/TerrainShadowVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class TerrainShadowVS {
    public:
        // virtual methods in vtable order
        virtual ~TerrainShadowVS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        TerrainShadowVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: TerrainShadowVS::~TerrainShadowVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: TerrainShadowVS::~TerrainShadowVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088b320
    TerrainShadowVS::TerrainShadowVS() {
        uint8_t local_21 = 79;
        uint64_t local_30 = 1;
        EffectList local_58(&local_21);
        EffectList local_48;
        new (this) ShaderSource(local_58, local_48);
    }

    // 0x10088b3a0
    auto TerrainShadowVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_150[280];
        ViewTransformsFragment local_38;

        new (local_150) RT7VertexShaderSourceStream(*this, effectList, 2, 2, 1, 1, 1, 1, 24);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_150 + 16);
        std::operator<<(basic_ostream, "attribute vec3 aVertexPosition;\n");
        basic_ostream<char, std::char_traits<char> _>* pbVar1 =
            std::operator<<(basic_ostream, "uniform mat4 uModelMatrix;\n");
        local_38.BuildUniforms();
        std::operator<<(pbVar1, &local_38);
        std::operator<<(basic_ostream,
                        "\nvoid main()\n{\n   gl_Position = uModelMatrix * vec4(aVertexPosition, 1.0);\n");
        pbVar1 = basic_ostream;
        std::operator<<(basic_ostream, " gl_Position.z = (gl_Position.z - 0.5) * 2.0;\n");
        long lVar2 = ((MapArea*)pbVar1->Instance())->GetOrigin();
        if (*(char*)(lVar2 + 184) == '\0') {
            std::operator<<(basic_ostream, "   const float shadowProjMatNearClip = -1.0;\n   gl_Position.z = "
                                           "max(shadowProjMatNearClip, gl_Position.z);\n");
        }
        std::operator<<(basic_ostream, "}\n");
        auto result = local_150->str();
        return result;
    }

} // namespace jag::graphics
