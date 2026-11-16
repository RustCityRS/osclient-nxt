// libs/graphics/runetek7/materials/shaders/basic/gui/LineVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class LineVS {
    public:
        // virtual methods in vtable order
        virtual ~LineVS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        LineVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: LineVS::~LineVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: LineVS::~LineVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100894410
    LineVS::LineVS() {
        uint8_t local_22 = 80;
        uint64_t local_40 = 1;
        EffectList local_68(&local_22);
        uint8_t local_21 = 81;
        uint64_t local_30 = 1;
        EffectList local_58(&local_21);
        new (this) ShaderSource(local_68, local_58);
    }

    // 0x1008944a0
    auto LineVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_138[280];

        new (local_138) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_138 + 16);
        std::operator<<(
            basic_ostream,
            "attribute vec2 aVertexPosition2D;\nattribute vec4 aVertexColour;\nuniform mat4 uProjectionMatrix;\n");
        if (effectList.Contains(81)) {
            std::operator<<(basic_ostream, "out vec4 vColour;\n");
        }
        std::operator<<(basic_ostream, "void main()\n{\n");
        if (effectList.Contains(81)) {
            std::operator<<(basic_ostream, "   vColour = aVertexColour;\n");
        }
        std::operator<<(basic_ostream, "   gl_Position = uProjectionMatrix * vec4(aVertexPosition2D, 1.0, 1.0);\n}\n");
        auto result = local_138->str();
        return result;
    }

} // namespace jag::graphics
