// libs/graphics/runetek7/materials/shaders/basic/model/geometry/ModelGeometryHighlightVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ModelGeometryHighlightVS {
    public:
        // virtual methods in vtable order
        virtual ~ModelGeometryHighlightVS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ModelGeometryHighlightVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: ModelGeometryHighlightVS::~ModelGeometryHighlightVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ModelGeometryHighlightVS::~ModelGeometryHighlightVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100895ce0
    ModelGeometryHighlightVS::ModelGeometryHighlightVS() {
        uint8_t local_21 = 79;
        uint64_t local_40 = 1;
        EffectList local_68(&local_21);
        uint32_t local_28 = 1245855569;
        uint16_t local_24 = 22091;
        uint8_t local_22 = 92;
        uint64_t local_30 = 7;
        EffectList local_58(&local_28);
        new (this) ShaderSource(local_68, local_58);
    }

    // 0x100895d80
    auto ModelGeometryHighlightVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        basic_ostream<char, std::char_traits<char> _>* pbVar4;
        uint8_t local_160[280];
        ViewTransformsFragment local_48;

        new (local_160) RT7VertexShaderSourceStream(*this, effectList, 2, 2, 1, 1, 1, 1, 24);
        char cVar1 = effectList.Contains(63);
        if (!cVar1) {
            cVar1 = '\0';
        } else {
            cVar1 = effectList.Contains(66);
        }
        char cVar2 = effectList.Contains(81);
        if (!cVar2) {
            cVar2 = '\0';
        } else {
            cVar2 = effectList.Contains(66);
        }
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_160 + 16);
        std::operator<<(
            basic_ostream,
            "attribute vec4 aVertexPosition_BoneLabel;\nattribute vec2 aTextureUV;\nattribute vec4 "
            "aVertexNormal_BatchFlags;\nattribute vec4 aVertexTangent;\nattribute vec4 aVertexColour;\nattribute vec4 "
            "aVertexColourUnwhitenedRGB_TilePositionLevel;\nattribute vec4 aMaterialSettingsSlotXY_TilePositionXZ;\n");
        if (effectList.Contains(75)) {
            std::operator<<(basic_ostream, "attribute vec4 aVertexSkinBones;\nattribute vec4 aVertexSkinWeights;\n");
            std::operator<<(basic_ostream, "uniform float uSmoothSkinning;\n");
        }
        std::operator<<(basic_ostream, "uniform mat4 uModelMatrix;\nuniform float uVertexScale;\n");
        local_48.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        if (effectList.Contains(74)) {
            pbVar4 = std::operator<<(basic_ostream, "uniform vec4 uBoneTransforms[");
            pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar4, 168);
            std::operator<<(pbVar4, "];\n");
        }
        std::operator<<(basic_ostream, "uniform mediump float uHighlightScale;\n");
        std::operator<<(basic_ostream, "#define MODEL_GEOMETRY_HIGHLIGHT_VS\n");
        std::operator<<(basic_ostream, "out highp vec3 vWorldPosition;\n");
        std::operator<<(basic_ostream, "out vec3 vNormal;\n");
        if (cVar2) {
            std::operator<<(basic_ostream, "out vec4 vVertexAlbedo;\n");
        }
        if (cVar1) {
            std::operator<<(basic_ostream, "out vec2 vTextureUV;\n");
        }
        std::operator<<(basic_ostream, "flat out vec3 vMaterialSettingsSlotXY_BatchFlags;\n");
        auto str = shadersourceprovider::GetShaderString(36);
        std::operator<<(basic_ostream, str);
        auto result = local_160->str();
        return result;
    }

} // namespace jag::graphics
