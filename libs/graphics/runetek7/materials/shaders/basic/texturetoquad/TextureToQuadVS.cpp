// libs/graphics/runetek7/materials/shaders/basic/texturetoquad/TextureToQuadVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class TextureToQuadVS {
    public:
        // virtual methods in vtable order
        virtual ~TextureToQuadVS();
        virtual TextureToQuadVS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        TextureToQuadVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: TextureToQuadVS::~TextureToQuadVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: TextureToQuadVS::~TextureToQuadVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088c3f0
    TextureToQuadVS::TextureToQuadVS() {

        EffectList local_40;
        EffectList local_30;
        new (this) ShaderSource(local_40, local_30);
    }

    // 0x10088c450
    TextureToQuadVS* TextureToQuadVS::GetSource(const EffectManager& effectManager,
                                                const EffectList& effectList) const {
        uint8_t local_128[280];

        new (local_128) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_128 + 16),
                        "attribute vec2 aVertexPosition2D;\nattribute vec2 aTextureUV;\nuniform mat4 "
                        "uProjectionMatrix;\nout vec2 vTextureUV;\n\nvoid main()\n{\n   gl_Position = "
                        "uProjectionMatrix * vec4(aVertexPosition2D, 0.0, 1.0);\n   vTextureUV = aTextureUV;\n}\n");
        *this = local_128->str();
        return this;
    }

} // namespace jag::graphics
