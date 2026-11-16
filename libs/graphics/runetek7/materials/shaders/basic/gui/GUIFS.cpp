// libs/graphics/runetek7/materials/shaders/basic/gui/GUIFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class GUIFS {
    public:
        // virtual methods in vtable order
        virtual ~GUIFS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        GUIFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: GUIFS::~GUIFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: GUIFS::~GUIFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100893e60
    GUIFS::GUIFS() {
        EffectList local_58;
        uint32_t local_26 = 1195785297;
        uint16_t local_22 = 18760;
        uint64_t local_30 = 6;
        EffectList local_48(&local_26);
        new (this) ShaderSource(local_58, local_48);
    }

    // 0x100893ee0
    auto GUIFS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        uint8_t local_138[280];

        new (local_138) RT7PixelShaderSourceStream(*this, effectList, 1, 1, 1, 1, 1, 1, 24);
        if (effectList.Contains(81)) {
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_138 + 16), "in vec4 vColour;\n");
        }
        if (effectList.Contains(60)) {
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_138 + 16),
                            "in highp vec2 vTextureUV2D;\nflat in highp vec4 vTextureUVAtlasMin_Extents;\nuniform "
                            "sampler2D uDiffuseMap;\n");
            if (effectList.Contains(72)) {
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_138 + 16),
                                "uniform sampler2D uMaskMap;\n");
            }
        }
        auto str = shadersourceprovider::GetShaderString(20);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_138 + 16), str);
        auto result = local_138->str();
        return result;
    }

} // namespace jag::graphics
