// libs/graphics/runetek7/materials/shaders/basic/model/geometry/ModelGeometryPointShadowVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ModelGeometryPointShadowVS {
    public:
        // virtual methods in vtable order
        virtual ~ModelGeometryPointShadowVS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ModelGeometryPointShadowVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: ModelGeometryPointShadowVS::~ModelGeometryPointShadowVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ModelGeometryPointShadowVS::~ModelGeometryPointShadowVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100896a80
    ModelGeometryPointShadowVS::ModelGeometryPointShadowVS() {
        EffectList local_58;
        uint32_t local_27 = 1246838607;
        uint16_t local_23 = 16971;
        uint8_t local_21 = 36;
        uint64_t local_30 = 7;
        EffectList local_48(&local_27);
        new (this) ShaderSource(local_58, local_48);
    }

    // 0x100896b00
    auto ModelGeometryPointShadowVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        basic_ostream<char, std::char_traits<char> _>* pbVar4;
        uint8_t local_160[280];
        ViewTransformsFragment local_48;

        new (local_160) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        AppendRelevantEffectsAsStringDefines(*local_160, effectList);
        bool cVar1 = effectList.Contains(63);
        bool cVar2 = effectList.Contains(81);
        char cVar3 = '\x01';
        if (!cVar2) {
            cVar3 = effectList.Contains(74);
        }
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_160 + 16);
        std::operator<<(
            basic_ostream,
            "attribute vec4 aVertexPosition_BoneLabel;\nattribute vec2 aTextureUV;\nattribute vec4 "
            "aVertexNormal_BatchFlags;\nattribute vec4 aVertexTangent;\nattribute vec4 aVertexColour;\nattribute vec4 "
            "aVertexColourUnwhitenedRGB_TilePositionLevel;\nattribute vec4 aMaterialSettingsSlotXY_TilePositionXZ;\n");
        cVar2 = effectList.Contains(75);
        if (cVar2) {
            std::operator<<(basic_ostream, "attribute vec4 aVertexSkinBones;\nattribute vec4 aVertexSkinWeights;\n");
            std::operator<<(basic_ostream, "uniform float uSmoothSkinning;\n");
        }
        std::operator<<(basic_ostream,
                        "uniform mat4 uModelMatrix;\nuniform mat4 uWorldMatrix;\nuniform float uVertexScale;\n");
        local_48.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        cVar2 = effectList.Contains(74);
        if (cVar2) {
            pbVar4 = std::operator<<(basic_ostream, "uniform vec4 uBoneTransforms[");
            pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar4, 168);
            std::operator<<(pbVar4, "];\n");
            pbVar4 = std::operator<<(basic_ostream, "uniform vec4 uLabelDeltas[");
            pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar4, 32);
            std::operator<<(pbVar4, "];\n");
        }
        std::operator<<(basic_ostream, "out highp vec4 vWorldPos;\n");
        if (cVar3) {
            std::operator<<(basic_ostream, "out vec4 vVertexAlbedo;\n");
        }
        if (cVar1) {
            std::operator<<(basic_ostream, "out vec2 vTextureUV;\n");
            std::operator<<(basic_ostream, "flat out vec2 vMaterialSettingsSlotXY;\n");
        }
        std::operator<<(basic_ostream, "#define MODEL_GEOMETRY_SHADOW_VS\n");
        auto str = shadersourceprovider::GetShaderString(75);
        std::operator<<(basic_ostream, str);
        std::operator<<(basic_ostream, "\nvoid main()\n{\n    vec3 vertexPosition = aVertexPosition_BoneLabel.xyz;\n");
        cVar2 = effectList.Contains(74);
        if (cVar2) {
            std::operator<<(basic_ostream, "    float label = floor(aVertexPosition_BoneLabel.w / 256.0);\n    float "
                                           "bone = aVertexPosition_BoneLabel.w - label * 256.0;\n");
        }
        if (cVar3) {
            cVar2 = effectList.Contains(81);
            if (!cVar2) {
                std::operator<<(basic_ostream, "    vVertexAlbedo = vec4(1.0, 1.0, 1.0, 1.0);\n");
            } else {
                std::operator<<(basic_ostream, "    vVertexAlbedo = aVertexColour;\n");
            }
            cVar2 = effectList.Contains(74);
            if (cVar2) {
                std::operator<<(basic_ostream, "    vVertexAlbedo += uLabelDeltas[int(label)];\n    vVertexAlbedo = "
                                               "clamp(vVertexAlbedo, 0.0, 1.0);\n");
            }
        }
        if (cVar1) {
            std::operator<<(basic_ostream, "    AssignTextureAtlasVaryings(vTextureUV, vMaterialSettingsSlotXY, "
                                           "aTextureUV, aMaterialSettingsSlotXY_TilePositionXZ.xy);\n");
        }
        std::operator<<(basic_ostream, "    vec4 scaledVertexPos = vec4(vertexPosition * uVertexScale, 1.0);\n");
        cVar1 = effectList.Contains(74);
        if (!cVar1) {
            std::operator<<(basic_ostream, "    gl_Position = uModelMatrix * scaledVertexPos;\n");
        } else {
            std::operator<<(basic_ostream, "   mat4 modelMatrix = uModelMatrix;\n   mat4 boneMatrix = "
                                           "GetBoneMatrixRigid(bone);\n   mat4 modelAndSkinMatrix = modelMatrix * "
                                           "boneMatrix;\n   gl_Position = modelAndSkinMatrix * scaledVertexPos;\n");
        }
        pbVar4 = basic_ostream;
        std::operator<<(basic_ostream, "    vWorldPos = uWorldMatrix * scaledVertexPos;\n");
        long lVar5 = ((MapArea*)pbVar4->Instance())->GetOrigin();
        if (*(char*)(lVar5 + 184) == '\0') {
            std::operator<<(basic_ostream, "    const float shadowProjMatNearClip = -1.0;\n    gl_Position.z = "
                                           "max(shadowProjMatNearClip, gl_Position.z);\n");
        }
        std::operator<<(basic_ostream, "}\n");
        auto result = local_160->str();
        return result;
    }

} // namespace jag::graphics
