// libs/graphics/runetek7/materials/shaders/effects/ssao/SSAOVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class SSAOVS {
    public:
        // virtual methods in vtable order
        virtual ~SSAOVS();
        virtual SSAOVS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        SSAOVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: SSAOVS::~SSAOVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: SSAOVS::~SSAOVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x1008531b0
    SSAOVS::SSAOVS() {

        EffectList local_40;
        EffectList local_30;
        new (this) ShaderSource(local_40, local_30);
    }

    // 0x100853210
    SSAOVS* SSAOVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        uint8_t local_128[280];

        new (local_128) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        auto str = shadersourceprovider::GetShaderString(54);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_128 + 16), str);
        *this = local_128->str();
        return this;
    }

} // namespace jag::graphics
