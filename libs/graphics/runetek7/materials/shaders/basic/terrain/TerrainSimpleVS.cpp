// libs/graphics/runetek7/materials/shaders/basic/terrain/TerrainSimpleVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class TerrainSimpleVS {
    public:
        // virtual methods in vtable order
        virtual ~TerrainSimpleVS();
        virtual TerrainSimpleVS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        TerrainSimpleVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: TerrainSimpleVS::~TerrainSimpleVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: TerrainSimpleVS::~TerrainSimpleVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088b600
    TerrainSimpleVS::TerrainSimpleVS() {
        uint16_t local_22 = 20815;
        uint64_t local_30 = 2;
        EffectList local_58(&local_22);
        EffectList local_48;
        new (this) ShaderSource(local_58, local_48);
    }

    // 0x10088b680
    TerrainSimpleVS* TerrainSimpleVS::GetSource(const EffectManager& effectManager,
                                                const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_148[280];
        ViewTransformsFragment local_30;

        new (local_148) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16);
        std::operator<<(basic_ostream,
                        "attribute vec3 aVertexPosition;\nattribute vec4 aVertexColour;\nuniform mat4 uModelMatrix;\n");
        local_30.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        std::operator<<(basic_ostream, "out vec4 vVertexAlbedo;\n\nvoid main()\n{\nvec4 position = uModelMatrix * "
                                       "vec4(aVertexPosition, 1.0);\nposition = uViewProjMatrix * "
                                       "position;\nvVertexAlbedo = aVertexColour;\ngl_Position = position;\n}\n");
        *this = local_148->str();
        return this;
    }

} // namespace jag::graphics
