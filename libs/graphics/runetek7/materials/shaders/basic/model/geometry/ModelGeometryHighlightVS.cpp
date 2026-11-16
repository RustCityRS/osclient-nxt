// libs/graphics/runetek7/materials/shaders/basic/model/geometry/ModelGeometryHighlightVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ModelGeometryHighlightVS {
    public:
        // virtual methods in vtable order
        virtual ~ModelGeometryHighlightVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ModelGeometryHighlightVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelGeometryHighlightVS::~ModelGeometryHighlightVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ModelGeometryHighlightVS::~ModelGeometryHighlightVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelGeometryHighlightVS::~ModelGeometryHighlightVS();

    // 0x100895ce0, 144 bytes, base-object constructor, placed by class name and debug map
    // ModelGeometryHighlightVS::ModelGeometryHighlightVS()
    void ModelGeometryHighlightVS::ModelGeometryHighlightVS() {
        EffectList local_68[16];
        EffectList local_58[16];
        undefined1* local_48;
        undefined8 local_40;
        undefined4* local_38;
        undefined8 local_30;
        undefined4 local_28;
        undefined2 local_24;
        undefined1 local_22;
        undefined1 local_21;

        local_21 = 79;
        local_48 = &local_21;
        local_40 = 1;
        EffectList::EffectList(local_68, (initializer_list*)&local_48);
        local_28 = 1245855569;
        local_24 = 22091;
        local_22 = 92;
        local_38 = &local_28;
        local_30 = 7;
        EffectList::EffectList(local_58, (initializer_list*)&local_38);
        new (this) ShaderSource(local_68, local_58);
        field_0 = &PTR__ScriptOption_100f17648;
    }

    // 0x100895d70, 16 bytes, complete-object constructor, placed by class name and debug map
    // ModelGeometryHighlightVS::ModelGeometryHighlightVS(): jumps straight to the base-object constructor

    // 0x100895d80, 576 bytes, placed by class name and debug map
    // ModelGeometryHighlightVS::GetSource(EffectManager const&, EffectList const&) const
    ModelGeometryHighlightVS* ModelGeometryHighlightVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        char cVar3;
        char cVar4;
        ostream* poVar5;
        char* pcVar6;
        RT7VertexShaderSourceStream local_160[2];
        ViewTransformsFragment local_48[24];

        RT7VertexShaderSourceStream::RT7VertexShaderSourceStream(local_160);
        cVar2 = EffectList::Contains();
        if (cVar2 == '\0') {
            cVar2 = '\0';
        } else {
            cVar2 = EffectList::Contains();
        }
        cVar3 = EffectList::Contains();
        if (cVar3 == '\0') {
            cVar3 = '\0';
        } else {
            cVar3 = EffectList::Contains();
        }
        poVar1 = (ostream*)(local_160[0].field_0 + 16);
        std::operator<<(
            poVar1,
            "attribute vec4 aVertexPosition_BoneLabel;\nattribute vec2 aTextureUV;\nattribute vec4 "
            "aVertexNormal_BatchFlags;\nattribute vec4 aVertexTangent;\nattribute vec4 aVertexColour;\nattribute vec4 "
            "aVertexColourUnwhitenedRGB_TilePositionLevel;\nattribute vec4 aMaterialSettingsSlotXY_TilePositionXZ;\n");
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            std::operator<<(poVar1, "attribute vec4 aVertexSkinBones;\nattribute vec4 aVertexSkinWeights;\n");
            std::operator<<(poVar1, "uniform float uSmoothSkinning;\n");
        }
        std::operator<<(poVar1, "uniform mat4 uModelMatrix;\nuniform float uVertexScale;\n");
        local_48->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_48);
        local_48->~basic_string();
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            poVar5 = std::operator<<(poVar1, "uniform vec4 uBoneTransforms[");
            poVar5 = (ostream*)std::ostream::operator<<(poVar5, 168);
            std::operator<<(poVar5, "];\n");
        }
        std::operator<<(poVar1, "uniform mediump float uHighlightScale;\n");
        std::operator<<(poVar1, "#define MODEL_GEOMETRY_HIGHLIGHT_VS\n");
        std::operator<<(poVar1, "out highp vec3 vWorldPosition;\n");
        std::operator<<(poVar1, "out vec3 vNormal;\n");
        if (cVar3 != '\0') {
            std::operator<<(poVar1, "out vec4 vVertexAlbedo;\n");
        }
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "out vec2 vTextureUV;\n");
        }
        std::operator<<(poVar1, "flat out vec3 vMaterialSettingsSlotXY_BatchFlags;\n");
        pcVar6 = (char*)shadersourceprovider::GetShaderString(36);
        std::operator<<(poVar1, pcVar6);
        str();
        local_160->~RT7VertexShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
