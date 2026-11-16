// libs/graphics/runetek7/materials/shaders/basic/lightprobe/LightProbeVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class LightProbeVS {
    public:
        // virtual methods in vtable order
        virtual ~LightProbeVS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        LightProbeVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: LightProbeVS::~LightProbeVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: LightProbeVS::~LightProbeVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x1008947b0
    LightProbeVS::LightProbeVS() {
        uint8_t local_22 = 79;
        uint64_t local_40 = 1;
        EffectList local_68(&local_22);
        uint8_t local_21 = 74;
        uint64_t local_30 = 1;
        EffectList local_58(&local_21);
        new (this) ShaderSource(local_68, local_58);
    }

    // 0x100894840
    auto LightProbeVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_148[280];
        ViewTransformsFragment local_30;

        new (local_148) RT7VertexShaderSourceStream(*this, effectList, 2, 2, 1, 1, 1, 1, 24);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16);
        std::operator<<(basic_ostream, "attribute vec3 aVertexPosition;\n");
        std::operator<<(basic_ostream, "attribute vec3 aVertexNormal;\n");
        std::operator<<(basic_ostream, "uniform mat4 uModelMatrix;\n");
        local_30.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        std::operator<<(basic_ostream, "out vec3 vInvViewDirection;\n");
        std::operator<<(basic_ostream, "out vec3 vNormal;\n");
        std::operator<<(basic_ostream, "void main()\n");
        std::operator<<(basic_ostream, "{\n");
        std::operator<<(basic_ostream, "vec4 position = uModelMatrix * vec4(aVertexPosition, 1.0);\n");
        std::operator<<(basic_ostream, "gl_Position = uViewProjMatrix * position;\n");
        std::operator<<(basic_ostream, "vec3 viewDirection = position.xyz - uCameraPosition;\n");
        std::operator<<(basic_ostream, "vInvViewDirection = -normalize(viewDirection);\n");
        std::operator<<(basic_ostream, "vNormal = aVertexNormal;\n");
        std::operator<<(basic_ostream, "}\n");
        auto result = local_148->str();
        return result;
    }

} // namespace jag::graphics
