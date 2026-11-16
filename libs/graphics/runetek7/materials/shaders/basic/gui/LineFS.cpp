// libs/graphics/runetek7/materials/shaders/basic/gui/LineFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class LineFS {
    public:
        // virtual methods in vtable order
        virtual ~LineFS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        LineFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: LineFS::~LineFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: LineFS::~LineFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x1008942c0
    LineFS::LineFS() {
        EffectList local_58;
        uint8_t local_21 = 81;
        uint64_t local_30 = 1;
        EffectList local_48(&local_21);
        new (this) ShaderSource(local_58, local_48);
    }

    // 0x100894340
    auto LineFS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        uint8_t local_130[280];

        new (local_130) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        if (effectList.Contains(81) != '\0') {
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_130 + 16), "in vec4 vColour;\n");
        }
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_130 + 16),
                        "void main()\n{\ngl_FragColor = vColour;\n}\n");
        auto result = local_130->str();
        return result;
    }

} // namespace jag::graphics
