// libs/graphics/runetek7/materials/shaders/basic/texturetoquad/DepthDownsampleVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class DepthDownsampleVS {
    public:
        // virtual methods in vtable order
        virtual ~DepthDownsampleVS();
        virtual DepthDownsampleVS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        DepthDownsampleVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: DepthDownsampleVS::~DepthDownsampleVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: DepthDownsampleVS::~DepthDownsampleVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088c1f0
    DepthDownsampleVS::DepthDownsampleVS() {

        EffectList local_40;
        EffectList local_30;
        new (this) ShaderSource(local_40, local_30);
    }

    // 0x10088c250
    DepthDownsampleVS* DepthDownsampleVS::GetSource(const EffectManager& effectManager,
                                                    const EffectList& effectList) const {
        uint8_t local_128[280];

        new (local_128) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_128 + 16),
            "attribute vec3 aVertexPosition;\nattribute vec2 aTextureUV;\nout vec2 vTextureUV;\n\nvoid main()\n{\n   "
            "gl_Position = vec4(aVertexPosition.xy, 0.0, 1.0);\n   vTextureUV = aTextureUV;\n   // We require the "
            "depth buffer to be upside down, as the intel occlusion culling example uses directx viewport "
            "coordinates\n   vTextureUV.y = 1.0 - vTextureUV.y;\n}\n");
        *this = local_128->str();
        return this;
    }

} // namespace jag::graphics
