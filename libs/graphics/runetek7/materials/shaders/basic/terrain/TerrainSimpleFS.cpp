// libs/graphics/runetek7/materials/shaders/basic/terrain/TerrainSimpleFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class TerrainSimpleFS {
    public:
        // virtual methods in vtable order
        virtual ~TerrainSimpleFS();
        virtual TerrainSimpleFS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        TerrainSimpleFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: TerrainSimpleFS::~TerrainSimpleFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: TerrainSimpleFS::~TerrainSimpleFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088b4e0
    TerrainSimpleFS::TerrainSimpleFS() {
        uint8_t local_21 = 81;
        uint64_t local_30 = 1;
        EffectList local_58(&local_21);
        EffectList local_48;
        new (this) ShaderSource(local_58, local_48);
    }

    // 0x10088b560
    TerrainSimpleFS* TerrainSimpleFS::GetSource(const EffectManager& effectManager,
                                                const EffectList& effectList) const {
        uint8_t local_128[280];

        new (local_128) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_128 + 16),
                        "in vec4 vVertexAlbedo;\nvoid main()\n{\n   gl_FragColor = vVertexAlbedo;\n}\n");
        *this = local_128->str();
        return this;
    }

} // namespace jag::graphics
