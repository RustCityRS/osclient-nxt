// libs/graphics/runetek7/materials/shaders/basic/terrain/TerrainNormalVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class TerrainNormalVS {
    public:
        // virtual methods in vtable order
        virtual ~TerrainNormalVS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        TerrainNormalVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: TerrainNormalVS::~TerrainNormalVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: TerrainNormalVS::~TerrainNormalVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088afe0
    TerrainNormalVS::TerrainNormalVS() {
        uint8_t local_21 = 79;
        uint64_t local_40 = 1;
        EffectList local_68(&local_21);
        uint16_t local_24 = 15679;
        uint8_t local_22 = 68;
        uint64_t local_30 = 3;
        EffectList local_58(&local_24);
        new (this) ShaderSource(local_68, local_58);
    }

    // 0x10088b080
    auto TerrainNormalVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_150[280];
        ViewTransformsFragment local_38;

        new (local_150) RT7VertexShaderSourceStream(*this, effectList, 2, 2, 1, 1, 1, 1, 24);
        char cVar1 = effectList.Contains(63);
        if (!cVar1) {
            cVar1 = '\0';
        } else {
            cVar1 = effectList.Contains(61);
        }
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_150 + 16);
        std::operator<<(basic_ostream,
                        "attribute vec3 aVertexPosition;\nattribute vec4 aVertexNormal_FogProportion;\nattribute vec4 "
                        "aMaterialSettingsSlotXY_MaterialSettingsSlotXY2;\nattribute vec2 "
                        "aMaterialSettingsSlotXY3;\nattribute vec4 aTextureScale;\nattribute vec4 "
                        "aVertexColour;\nattribute vec4 aTextureWeight;\nattribute vec4 aMaterialProperties;\n");
        std::operator<<(basic_ostream, "uniform mat4 uModelMatrix;\n");
        local_38.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_38);
        if (cVar1) {
            std::operator<<(basic_ostream, "uniform mediump vec4 uAtlasMeta;\n");
        }
        std::operator<<(basic_ostream, "out highp vec3 vWorldPosition;\n");
        std::operator<<(basic_ostream, "out vec3 vNormal;\n");
        if (cVar1) {
            std::operator<<(basic_ostream, "flat out highp vec4 vMaterialSettingsSlots1D;\nflat out highp vec4 "
                                           "vTextureScale;\nout vec4 vTextureWeight;\n");
        }
        auto str = shadersourceprovider::GetShaderString(102);
        std::operator<<(basic_ostream, str);
        auto result = local_150->str();
        return result;
    }

} // namespace jag::graphics
