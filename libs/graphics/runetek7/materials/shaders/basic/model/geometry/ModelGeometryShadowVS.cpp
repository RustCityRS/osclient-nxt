// libs/graphics/runetek7/materials/shaders/basic/model/geometry/ModelGeometryShadowVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ModelGeometryShadowVS {
    public:
        // virtual methods in vtable order
        virtual ~ModelGeometryShadowVS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ModelGeometryShadowVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: ModelGeometryShadowVS::~ModelGeometryShadowVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ModelGeometryShadowVS::~ModelGeometryShadowVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x1008971c0
    ModelGeometryShadowVS::ModelGeometryShadowVS() {
        initializer_list<EffectType> local_58;
        EffectList local_68(local_58);
        uint32_t local_26 = 1246838607;
        uint16_t local_22 = 16971;
        uint64_t local_30 = 6;
        EffectList local_48(&local_26);
        new (this) ShaderSource(local_68, local_48);
    }

    // 0x100897250
    auto ModelGeometryShadowVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
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
        std::operator<<(basic_ostream, "uniform mat4 uModelMatrix;\nuniform float uVertexScale;\n");
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
        if (cVar3) {
            std::operator<<(basic_ostream, "out vec4 vVertexAlbedo;\n");
        }
        if (cVar1) {
            std::operator<<(basic_ostream, "out vec2 vTextureUV;\n");
            std::operator<<(basic_ostream, "flat out vec2 vMaterialSettingsSlotXY;\n");
        }
        cVar2 = effectList.Contains(75);
        if (cVar2) {
            std::operator<<(basic_ostream, "attribute vec4 aVertexSkinBones;\nattribute vec4 aVertexSkinWeights;\n");
            std::operator<<(basic_ostream, "uniform float uSmoothSkinning;\n");
        }
        std::operator<<(basic_ostream, "#define MODEL_GEOMETRY_SHADOW_VS\n");
        auto str = shadersourceprovider::GetShaderString(75);
        std::operator<<(basic_ostream, str);
        std::operator<<(basic_ostream, "\nvoid main()\n{\nvec3 vertexPosition = aVertexPosition_BoneLabel.xyz;\n");
        cVar2 = effectList.Contains(74);
        if (cVar2) {
            std::operator<<(basic_ostream, "float label = floor(aVertexPosition_BoneLabel.w / 256.0);\nfloat bone = "
                                           "aVertexPosition_BoneLabel.w - label * 256.0;\n");
        }
        if (cVar3) {
            cVar2 = effectList.Contains(81);
            if (!cVar2) {
                std::operator<<(basic_ostream, " vVertexAlbedo = vec4(1.0, 1.0, 1.0, 1.0);\n");
            } else {
                std::operator<<(basic_ostream, " vVertexAlbedo = aVertexColour;\n");
            }
            cVar2 = effectList.Contains(74);
            if (cVar2) {
                std::operator<<(
                    basic_ostream,
                    "vVertexAlbedo += uLabelDeltas[int(label)];\nvVertexAlbedo = clamp(vVertexAlbedo, 0.0, 1.0);\n");
            }
        }
        if (cVar1) {
            std::operator<<(basic_ostream, " AssignTextureAtlasVaryings(vTextureUV, vMaterialSettingsSlotXY, "
                                           "aTextureUV, aMaterialSettingsSlotXY_TilePositionXZ.xy);\n");
        }
        cVar1 = effectList.Contains(74);
        if (!cVar1) {
            std::operator<<(basic_ostream, " gl_Position = uModelMatrix * vec4(vertexPosition * uVertexScale, 1.0);\n");
        } else {
            std::operator<<(basic_ostream,
                            "   mat4 modelMatrix = uModelMatrix;\n   mat4 boneMatrix = GetBoneMatrixRigid(label);\n   "
                            "mat4 modelAndSkinMatrix = modelMatrix * boneMatrix;\n   gl_Position = modelAndSkinMatrix "
                            "* vec4(vertexPosition * uVertexScale, 1.0);\n");
        }
        pbVar4 = basic_ostream;
        std::operator<<(basic_ostream, "   gl_Position.z = (gl_Position.z - 0.5) * 2.0;\n");
        long lVar5 = ((MapArea*)pbVar4->Instance())->GetOrigin();
        if (*(char*)(lVar5 + 184) == '\0') {
            std::operator<<(basic_ostream, " const float shadowProjMatNearClip = -1.0;\n   gl_Position.z = "
                                           "max(shadowProjMatNearClip, gl_Position.z);\n");
        }
        std::operator<<(basic_ostream, "}\n");
        auto result = local_160->str();
        return result;
    }

} // namespace jag::graphics
