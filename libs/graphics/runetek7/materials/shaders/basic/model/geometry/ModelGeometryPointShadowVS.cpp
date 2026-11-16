// libs/graphics/runetek7/materials/shaders/basic/model/geometry/ModelGeometryPointShadowVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ModelGeometryPointShadowVS {
    public:
        // virtual methods in vtable order
        virtual ~ModelGeometryPointShadowVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ModelGeometryPointShadowVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelGeometryPointShadowVS::~ModelGeometryPointShadowVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ModelGeometryPointShadowVS::~ModelGeometryPointShadowVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelGeometryPointShadowVS::~ModelGeometryPointShadowVS();

    // 0x100896a80, 112 bytes, base-object constructor, placed by class name and debug map
    // ModelGeometryPointShadowVS::ModelGeometryPointShadowVS()
    void ModelGeometryPointShadowVS::ModelGeometryPointShadowVS() {
        EffectList local_58[16];
        EffectList local_48[16];
        undefined4* local_38;
        undefined8 local_30;
        undefined4 local_27;
        undefined2 local_23;
        undefined1 local_21;

        EffectList::EffectList(local_58);
        local_27 = 1246838607;
        local_23 = 16971;
        local_21 = 36;
        local_38 = &local_27;
        local_30 = 7;
        EffectList::EffectList(local_48, (initializer_list*)&local_38);
        new (this) ShaderSource(local_58, local_48);
        field_0 = &PTR__ScriptOption_100f176e8;
    }

    // 0x100896af0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ModelGeometryPointShadowVS::ModelGeometryPointShadowVS(): jumps straight to the base-object constructor

    // 0x100896b00, 864 bytes, placed by class name and debug map
    // ModelGeometryPointShadowVS::GetSource(EffectManager const&, EffectList const&) const
    ModelGeometryPointShadowVS* ModelGeometryPointShadowVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        char cVar3;
        char cVar4;
        ostream* poVar5;
        char* pcVar6;
        MapArea* this_00;
        long lVar7;
        EffectList* in_RCX;
        undefined1 local_160[280];
        ViewTransformsFragment local_48[24];

        new (local_160) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        param_1->AppendRelevantEffectsAsStringDefines(local_160, in_RCX);
        cVar2 = EffectList::Contains();
        cVar3 = EffectList::Contains();
        cVar4 = '\x01';
        if (cVar3 == '\0') {
            cVar4 = EffectList::Contains();
        }
        poVar1 = (ostream*)(local_160 + 16);
        std::operator<<(
            poVar1,
            "attribute vec4 aVertexPosition_BoneLabel;\nattribute vec2 aTextureUV;\nattribute vec4 "
            "aVertexNormal_BatchFlags;\nattribute vec4 aVertexTangent;\nattribute vec4 aVertexColour;\nattribute vec4 "
            "aVertexColourUnwhitenedRGB_TilePositionLevel;\nattribute vec4 aMaterialSettingsSlotXY_TilePositionXZ;\n");
        cVar3 = EffectList::Contains();
        if (cVar3 != '\0') {
            std::operator<<(poVar1, "attribute vec4 aVertexSkinBones;\nattribute vec4 aVertexSkinWeights;\n");
            std::operator<<(poVar1, "uniform float uSmoothSkinning;\n");
        }
        std::operator<<(poVar1,
                        "uniform mat4 uModelMatrix;\nuniform mat4 uWorldMatrix;\nuniform float uVertexScale;\n");
        local_48->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_48);
        local_48->~basic_string();
        cVar3 = EffectList::Contains();
        if (cVar3 != '\0') {
            poVar5 = std::operator<<(poVar1, "uniform vec4 uBoneTransforms[");
            poVar5 = (ostream*)std::ostream::operator<<(poVar5, 168);
            std::operator<<(poVar5, "];\n");
            poVar5 = std::operator<<(poVar1, "uniform vec4 uLabelDeltas[");
            poVar5 = (ostream*)std::ostream::operator<<(poVar5, 32);
            std::operator<<(poVar5, "];\n");
        }
        std::operator<<(poVar1, "out highp vec4 vWorldPos;\n");
        if (cVar4 != '\0') {
            std::operator<<(poVar1, "out vec4 vVertexAlbedo;\n");
        }
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "out vec2 vTextureUV;\n");
            std::operator<<(poVar1, "flat out vec2 vMaterialSettingsSlotXY;\n");
        }
        std::operator<<(poVar1, "#define MODEL_GEOMETRY_SHADOW_VS\n");
        pcVar6 = (char*)shadersourceprovider::GetShaderString(75);
        std::operator<<(poVar1, pcVar6);
        std::operator<<(poVar1, "\nvoid main()\n{\n    vec3 vertexPosition = aVertexPosition_BoneLabel.xyz;\n");
        cVar3 = EffectList::Contains();
        if (cVar3 != '\0') {
            std::operator<<(poVar1, "    float label = floor(aVertexPosition_BoneLabel.w / 256.0);\n    float bone = "
                                    "aVertexPosition_BoneLabel.w - label * 256.0;\n");
        }
        if (cVar4 != '\0') {
            cVar3 = EffectList::Contains();
            if (cVar3 == '\0') {
                std::operator<<(poVar1, "    vVertexAlbedo = vec4(1.0, 1.0, 1.0, 1.0);\n");
            } else {
                std::operator<<(poVar1, "    vVertexAlbedo = aVertexColour;\n");
            }
            cVar3 = EffectList::Contains();
            if (cVar3 != '\0') {
                std::operator<<(poVar1, "    vVertexAlbedo += uLabelDeltas[int(label)];\n    vVertexAlbedo = "
                                        "clamp(vVertexAlbedo, 0.0, 1.0);\n");
            }
        }
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "    AssignTextureAtlasVaryings(vTextureUV, vMaterialSettingsSlotXY, aTextureUV, "
                                    "aMaterialSettingsSlotXY_TilePositionXZ.xy);\n");
        }
        std::operator<<(poVar1, "    vec4 scaledVertexPos = vec4(vertexPosition * uVertexScale, 1.0);\n");
        cVar2 = EffectList::Contains();
        if (cVar2 == '\0') {
            std::operator<<(poVar1, "    gl_Position = uModelMatrix * scaledVertexPos;\n");
        } else {
            std::operator<<(poVar1, "   mat4 modelMatrix = uModelMatrix;\n   mat4 boneMatrix = "
                                    "GetBoneMatrixRigid(bone);\n   mat4 modelAndSkinMatrix = modelMatrix * "
                                    "boneMatrix;\n   gl_Position = modelAndSkinMatrix * scaledVertexPos;\n");
        }
        poVar5 = poVar1;
        std::operator<<(poVar1, "    vWorldPos = uWorldMatrix * scaledVertexPos;\n");
        this_00 = (MapArea*)poVar5->Instance();
        lVar7 = this_00->GetOrigin();
        if (*(char*)(lVar7 + 184) == '\0') {
            std::operator<<(poVar1, "    const float shadowProjMatNearClip = -1.0;\n    gl_Position.z = "
                                    "max(shadowProjMatNearClip, gl_Position.z);\n");
        }
        std::operator<<(poVar1, "}\n");
        str();
        local_160->~VertexShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
