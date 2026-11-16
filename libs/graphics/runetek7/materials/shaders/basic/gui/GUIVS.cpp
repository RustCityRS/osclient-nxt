// libs/graphics/runetek7/materials/shaders/basic/gui/GUIVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class GUIVS {
    public:
        // virtual methods in vtable order
        virtual ~GUIVS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        GUIVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    class RT7VertexShaderSourceStream {
    public:
        // virtual methods in vtable order
        virtual ~RT7VertexShaderSourceStream();
        RT7VertexShaderSourceStream(const ShaderSource& shaderSource, const EffectList& effectList,
                                    render::ShaderVariablePrecision shaderVariablePrecision1,
                                    render::ShaderVariablePrecision shaderVariablePrecision2,
                                    render::ShaderVariablePrecision shaderVariablePrecision3,
                                    render::ShaderVariablePrecision shaderVariablePrecision4,
                                    render::ShaderVariablePrecision shaderVariablePrecision5,
                                    render::ShaderVariablePrecision shaderVariablePrecision6, unsigned int arg9);

    private:
        uint8_t _unknown_8[128];
    };

    // 0x100022b10: GUIVS::~GUIVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: GUIVS::~GUIVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100894020
    GUIVS::GUIVS() {
        uint8_t local_21 = 80;
        uint64_t local_40 = 1;
        EffectList local_68(&local_21);
        uint16_t local_23 = 15441;
        uint64_t local_30 = 2;
        EffectList local_58(&local_23);
        new (this) ShaderSource(local_68, local_58);
    }

    // 0x1008940b0
    auto GUIVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_138[280];

        new (local_138) RT7VertexShaderSourceStream(*this, effectList, 2, 2, 1, 1, 1, 1, 24);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_138 + 16);
        std::operator<<(basic_ostream,
                        "attribute vec2 aVertexPosition2D;\nattribute vec4 aVertexColour;\nattribute vec2 "
                        "aTextureUV;\nattribute vec2 aTextureUVAtlasMin;\nattribute vec2 aTextureUVAtlasExtents;\n");
        std::operator<<(basic_ostream, "uniform mat4 uProjectionMatrix;\n");
        if (effectList.Contains(81)) {
            std::operator<<(basic_ostream, "out vec4 vColour;\n");
        }
        if (effectList.Contains(60)) {
            std::operator<<(basic_ostream,
                            "out highp vec2 vTextureUV2D;\nflat out highp vec4 vTextureUVAtlasMin_Extents;\n");
        }
        auto str = shadersourceprovider::GetShaderString(21);
        std::operator<<(basic_ostream, str);
        auto result = local_138->str();
        return result;
    }

    // 0x1008941d0
    RT7VertexShaderSourceStream::RT7VertexShaderSourceStream(const ShaderSource& shaderSource,
                                                             const EffectList& effectList,
                                                             render::ShaderVariablePrecision shaderVariablePrecision1,
                                                             render::ShaderVariablePrecision shaderVariablePrecision2,
                                                             render::ShaderVariablePrecision shaderVariablePrecision3,
                                                             render::ShaderVariablePrecision shaderVariablePrecision4,
                                                             render::ShaderVariablePrecision shaderVariablePrecision5,
                                                             render::ShaderVariablePrecision shaderVariablePrecision6,
                                                             unsigned int arg9)
        : RT7ShaderSourceStream(*((PTR_VTT_100ee6fb0 + 8)), (ShaderType)shaderSource, *35633,
                                (ShaderVariablePrecision)effectList, shaderVariablePrecision1, shaderVariablePrecision2,
                                shaderVariablePrecision3, shaderVariablePrecision4, shaderVariablePrecision5,
                                shaderVariablePrecision6) {
        uint8_t* puVar1 = PTR_vtable_100ee88a8;
        *(uint8_t**)&field_128 = puVar1 + 112;
        *(uint8_t**)&field_16 = puVar1 + 72;
    }

    // 0x100898d20
    RT7VertexShaderSourceStream::~RT7VertexShaderSourceStream() {}

} // namespace jag::graphics
