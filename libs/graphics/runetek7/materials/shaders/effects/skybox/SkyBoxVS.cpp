// libs/graphics/runetek7/materials/shaders/effects/skybox/SkyBoxVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class SkyBoxVS {
    public:
        // virtual methods in vtable order
        virtual ~SkyBoxVS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        SkyBoxVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: SkyBoxVS::~SkyBoxVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: SkyBoxVS::~SkyBoxVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088db80
    SkyBoxVS::SkyBoxVS() {

        EffectList local_40;
        EffectList local_30;
        new (this) ShaderSource(local_40, local_30);
    }

    // 0x10088dbe0
    auto SkyBoxVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_138[280];

        new (local_138) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        char cVar1 = effectList.Contains(29);
        if (!cVar1) {
            cVar1 = '\0';
        } else {
            cVar1 = effectList.Contains(48);
        }
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_138 + 16);
        std::operator<<(basic_ostream, "attribute vec2 aVertexPosition2D;\nattribute vec3 aVertexNormal;\nattribute "
                                       "vec3 aScatteringViewDirection;\n");
        std::operator<<(basic_ostream, "uniform mat4 uProjectionMatrix;\n");
        std::operator<<(basic_ostream, "out vec3 vViewSpaceNormal;\n");
        if (cVar1) {
            std::operator<<(basic_ostream, "out vec4 vViewVectorAndLength;\n");
        }
        std::operator<<(basic_ostream,
                        "\nvoid main()\n{\n   vec4 projVertex = uProjectionMatrix * vec4(aVertexPosition2D, 1.0, "
                        "1.0);\n   projVertex /= projVertex.w;\n   gl_Position = vec4(projVertex.x, projVertex.y, 1.0, "
                        "1.0);\n   vViewSpaceNormal = aVertexNormal;\n");
        if (cVar1) {
            std::operator<<(basic_ostream, " vViewVectorAndLength = vec4(normalize(aScatteringViewDirection), "
                                           "length(aScatteringViewDirection));\n");
        }
        std::operator<<(basic_ostream, "}");
        auto result = local_138->str();
        return result;
    }

} // namespace jag::graphics
