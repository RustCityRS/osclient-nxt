// libs/graphics/runetek7/materials/shaders/basic/terrain/TerrainShadowFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class TerrainShadowFS {
    public:
        // virtual methods in vtable order
        virtual ~TerrainShadowFS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        TerrainShadowFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: TerrainShadowFS::~TerrainShadowFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: TerrainShadowFS::~TerrainShadowFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088b1f0
    TerrainShadowFS::TerrainShadowFS() {

        initializer_list<EffectType> local_40;
        EffectList local_50(local_40);
        EffectList local_30;
        new (this) ShaderSource(local_50, local_30);
    }

    // 0x10088b260
    auto TerrainShadowFS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        uint8_t local_130[280];

        new (local_130) RT7PixelShaderSourceStream(*this, effectList, 1, 1, 1, 1, 1, 1, 24);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_130 + 16), "void main()\n{\n");
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_130 + 16), "}\n");
        auto result = local_130->str();
        return result;
    }

} // namespace jag::graphics
