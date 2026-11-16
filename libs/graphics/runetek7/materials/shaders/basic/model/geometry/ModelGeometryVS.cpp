// libs/graphics/runetek7/materials/shaders/basic/model/geometry/ModelGeometryVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ModelGeometryVS {
    public:
        // virtual methods in vtable order
        virtual ~ModelGeometryVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ModelGeometryVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelGeometryVS::~ModelGeometryVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ModelGeometryVS::~ModelGeometryVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelGeometryVS::~ModelGeometryVS();

    // 0x100897590, 192 bytes, base-object constructor, placed by class name and debug map
    // ModelGeometryVS::ModelGeometryVS()
    void ModelGeometryVS::ModelGeometryVS() {
        EffectList local_90[16];
        EffectList local_80[16];
        undefined2* local_70;
        undefined8 local_68;
        undefined8* local_60;
        undefined8 local_58;
        undefined2 local_4b;
        undefined1 local_49;
        undefined8 local_48;
        undefined8 uStack_40;
        undefined4 local_38;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_4b = 7503;
        local_49 = 81;
        local_70 = &local_4b;
        local_68 = 3;
        EffectList::EffectList(local_90, (initializer_list*)&local_70);
        local_48 = 1875553863705697087;
        uStack_40 = 8650947773573845559;
        local_38 = 809065533;
        local_60 = &local_48;
        local_58 = 20;
        EffectList::EffectList(local_80, (initializer_list*)&local_60);
        new (this) ShaderSource(local_90, local_80);
        field_0 = &PTR__ScriptOption_100f17760;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100897650, 16 bytes, complete-object constructor, placed by class name and debug map
    // ModelGeometryVS::ModelGeometryVS(): jumps straight to the base-object constructor

    // 0x100897660, 1008 bytes, placed by class name and debug map
    // ModelGeometryVS::GetSource(EffectManager const&, EffectList const&) const
    ModelGeometryVS* ModelGeometryVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        byte bVar2;
        byte bVar3;
        byte bVar4;
        char cVar5;
        ostream* poVar6;
        char* pcVar7;
        RT7VertexShaderSourceStream local_170[2];
        ViewTransformsFragment local_58[24];
        byte local_35;
        char local_34;
        char local_33;
        byte local_32;
        byte local_31;

        RT7VertexShaderSourceStream::RT7VertexShaderSourceStream(local_170);
        bVar2 = EffectList::Contains();
        local_34 = EffectList::Contains();
        local_35 = EffectList::Contains();
        local_33 = EffectList::Contains();
        bVar3 = EffectList::Contains();
        bVar4 = EffectList::Contains();
        cVar5 = EffectList::Contains();
        local_32 = bVar3;
        if (cVar5 == '\0') {
            bVar3 = 0;
        } else {
            bVar3 = EffectList::Contains();
        }
        local_31 = EffectList::Contains();
        poVar1 = (ostream*)(local_170[0].field_0 + 16);
        std::operator<<(
            poVar1,
            "attribute vec4 aVertexPosition_BoneLabel;\nattribute vec2 aTextureUV;\nattribute vec4 "
            "aVertexNormal_BatchFlags;\nattribute vec4 aVertexTangent;\nattribute vec4 aVertexColour;\nattribute vec4 "
            "aVertexColourUnwhitenedRGB_TilePositionLevel;\nattribute vec4 aMaterialSettingsSlotXY_TilePositionXZ;\n");
        cVar5 = EffectList::Contains();
        if (cVar5 != '\0') {
            std::operator<<(poVar1, "attribute vec4 aVertexSkinBones;\nattribute vec4 aVertexSkinWeights;\n");
            std::operator<<(poVar1, "uniform float uSmoothSkinning;\n");
        }
        std::operator<<(poVar1, "uniform mat4 uModelMatrix;\nuniform float uVertexScale;\n");
        local_58->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_58);
        local_58->~basic_string();
        cVar5 = EffectList::Contains();
        if (cVar5 != '\0') {
            poVar6 = std::operator<<(poVar1, "uniform vec4 uBoneTransforms[");
            poVar6 = (ostream*)std::ostream::operator<<(poVar6, 168);
            std::operator<<(poVar6, "];\n");
            poVar6 = std::operator<<(poVar1, "uniform vec4 uLabelDeltas[");
            poVar6 = (ostream*)std::ostream::operator<<(poVar6, 32);
            std::operator<<(poVar6, "];\n");
        }
        if ((byte)(bVar2 | local_35 | bVar3) == 1) {
            local_58->BuildUniforms();
            std::operator<<(poVar1, (basic_string*)local_58);
            local_58->~basic_string();
        }
        if (bVar3 != 0) {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(70);
            std::operator<<(poVar1, pcVar7);
        }
        if (local_31 != 0) {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(62);
            std::operator<<(poVar1, pcVar7);
        }
        if (local_34 != '\0') {
            std::operator<<(poVar1, "uniform mediump vec4 uTint;\n");
        }
        if (local_33 != '\0') {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(58);
            std::operator<<(poVar1, pcVar7);
        }
        std::operator<<(poVar1, "uniform float uFade;\n");
        std::operator<<(poVar1, "out highp vec3 vWorldPosition;\n");
        std::operator<<(poVar1, "out highp vec3 vNormal;\n");
        cVar5 = EffectList::Contains();
        if (cVar5 != '\0') {
            std::operator<<(poVar1, "out vec4 vTangent;\n");
        }
        if ((local_32 & bVar4) == 1) {
            std::operator<<(poVar1, "out vec3 vTilePosition;\n");
        }
        cVar5 = EffectList::Contains();
        if (cVar5 != '\0') {
            std::operator<<(poVar1, "out mediump vec4 vVertexAlbedo;\n");
        }
        cVar5 = EffectList::Contains();
        if (cVar5 != '\0') {
            std::operator<<(poVar1, "out vec2 vTextureUV;\n");
        }
        std::operator<<(poVar1, "flat out vec3 vMaterialSettingsSlotXY_BatchFlags;\n");
        if ((bVar3 | local_31) == 1) {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(71);
            std::operator<<(poVar1, pcVar7);
        }
        if (bVar3 != 0) {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(69);
            std::operator<<(poVar1, pcVar7);
        }
        if (local_31 != 0) {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(61);
            std::operator<<(poVar1, pcVar7);
        }
        pcVar7 = (char*)shadersourceprovider::GetShaderString(34);
        std::operator<<(poVar1, pcVar7);
        ((ModelGeometryVS*)this)->str();
        local_170->~RT7VertexShaderSourceStream();
        return (ModelGeometryVS*)this;
    }

} // namespace jag::graphics
