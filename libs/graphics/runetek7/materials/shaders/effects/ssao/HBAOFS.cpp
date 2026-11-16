// libs/graphics/runetek7/materials/shaders/effects/ssao/HBAOFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class HBAOFS {
    public:
        // virtual methods in vtable order
        virtual ~HBAOFS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        HBAOFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: HBAOFS::~HBAOFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: HBAOFS::~HBAOFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100852e40
    HBAOFS::HBAOFS() {
        EffectList local_58;
        uint16_t local_22 = 27225;
        uint64_t local_30 = 2;
        EffectList local_48(&local_22);
        new (this) ShaderSource(local_58, local_48);
    }

    // 0x100852ef0
    auto HBAOFS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        uint8_t local_128[280];

        new (local_128) RT7PixelShaderSourceStream(*this, effectList, 2, 1, 2, 1, 1, 1, 24);
        auto str = shadersourceprovider::GetShaderString(24);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_128 + 16), str);
        auto result = local_128->str();
        return result;
    }

} // namespace jag::graphics
