// libs/graphics/runetek7/materials/shaders/basic/model/geometry/ModelGeometryNormalVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ModelGeometryNormalVS {
    public:
        // virtual methods in vtable order
        virtual ~ModelGeometryNormalVS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ModelGeometryNormalVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: ModelGeometryNormalVS::~ModelGeometryNormalVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ModelGeometryNormalVS::~ModelGeometryNormalVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x1008963e0
    ModelGeometryNormalVS::ModelGeometryNormalVS() {
        uint8_t local_31 = 79;
        uint64_t local_50 = 1;
        EffectList local_78(&local_31);
        uint64_t local_30 = 6646563506437111633;
        uint64_t local_40 = 8;
        EffectList local_68(&local_30);
        new (this) ShaderSource(local_78, local_68);
    }

    // 0x1008964a0
    auto ModelGeometryNormalVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        char cVar2;
        basic_ostream<char, std::char_traits<char> _>* pbVar4;
        uint8_t local_160[280];
        ViewTransformsFragment local_48;

        new (local_160) RT7VertexShaderSourceStream(*this, effectList, 2, 2, 1, 1, 1, 1, 24);
        char cVar1 = effectList.Contains(63);
        if (!cVar1) {
            cVar1 = '\0';
        } else {
            cVar2 = effectList.Contains(61);
            cVar1 = '\x01';
            if (!cVar2) {
                cVar1 = effectList.Contains(66);
            }
        }
        cVar2 = effectList.Contains(81);
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
        std::operator<<(basic_ostream, "out highp vec3 vWorldPosition;\n");
        std::operator<<(basic_ostream, "out vec3 vNormal;\n");
        if (effectList.Contains(61)) {
            std::operator<<(basic_ostream, "out vec4 vTangent;\n");
        }
        if (cVar2) {
            std::operator<<(basic_ostream, "out vec4 vVertexAlbedo;\n");
        }
        if (cVar1) {
            std::operator<<(basic_ostream, "out vec2 vTextureUV;\n");
        }
        std::operator<<(basic_ostream, "flat out vec3 vMaterialSettingsSlotXY_BatchFlags;\n");
        auto str = shadersourceprovider::GetShaderString(38);
        std::operator<<(basic_ostream, str);
        auto result = local_160->str();
        return result;
    }

} // namespace jag::graphics
