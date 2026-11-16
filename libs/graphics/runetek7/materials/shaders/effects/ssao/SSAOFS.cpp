// libs/graphics/runetek7/materials/shaders/effects/ssao/SSAOFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class SSAOFS {
    public:
        // virtual methods in vtable order
        virtual ~SSAOFS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        SSAOFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: SSAOFS::~SSAOFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: SSAOFS::~SSAOFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100853080
    SSAOFS::SSAOFS() {
        EffectList local_58;
        uint16_t local_22 = 27225;
        uint64_t local_30 = 2;
        EffectList local_48(&local_22);
        new (this) ShaderSource(local_58, local_48);
    }

    // 0x100853100
    auto SSAOFS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        uint8_t local_128[280];

        new (local_128) RT7PixelShaderSourceStream(*this, effectList, 2, 1, 2, 1, 1, 1, 24);
        auto str = shadersourceprovider::GetShaderString(53);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_128 + 16), str);
        auto result = local_128->str();
        return result;
    }

} // namespace jag::graphics
