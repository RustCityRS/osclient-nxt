// libs/graphics/runetek7/materials/shaders/basic/texturetoquad/TextureToQuadFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class TextureToQuadFS {
    public:
        // virtual methods in vtable order
        virtual ~TextureToQuadFS();
        virtual TextureToQuadFS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        TextureToQuadFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: TextureToQuadFS::~TextureToQuadFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: TextureToQuadFS::~TextureToQuadFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088c2f0
    TextureToQuadFS::TextureToQuadFS() {

        EffectList local_40;
        EffectList local_30;
        new (this) ShaderSource(local_40, local_30);
    }

    // 0x10088c350
    TextureToQuadFS* TextureToQuadFS::GetSource(const EffectManager& effectManager,
                                                const EffectList& effectList) const {
        uint8_t local_128[280];

        new (local_128) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_128 + 16),
                        "uniform sampler2D uColorTexture;\nin vec2 vTextureUV;\nvoid main()\n{\n    gl_FragColor = "
                        "texture2D(uColorTexture, vTextureUV);\n}\n");
        *this = local_128->str();
        return this;
    }

} // namespace jag::graphics
