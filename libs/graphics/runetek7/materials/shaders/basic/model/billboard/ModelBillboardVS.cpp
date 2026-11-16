// libs/graphics/runetek7/materials/shaders/basic/model/billboard/ModelBillboardVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ModelBillboardVS {
    public:
        // virtual methods in vtable order
        virtual ~ModelBillboardVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ModelBillboardVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelBillboardVS::~ModelBillboardVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ModelBillboardVS::~ModelBillboardVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelBillboardVS::~ModelBillboardVS();

    // 0x100894ce0, 176 bytes, base-object constructor, placed by class name and debug map
    // ModelBillboardVS::ModelBillboardVS()
    void ModelBillboardVS::ModelBillboardVS() {
        EffectList local_78[16];
        EffectList local_68[16];
        undefined1* local_58;
        undefined8 local_50;
        undefined8* local_48;
        undefined8 local_40;
        undefined1 local_32;
        undefined8 local_31;
        undefined1 local_29;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_32 = 79;
        local_58 = &local_32;
        local_50 = 1;
        EffectList::EffectList(local_78, (initializer_list*)&local_58);
        local_31 = 4129322897965402644;
        local_29 = 86;
        local_48 = &local_31;
        local_40 = 9;
        EffectList::EffectList(local_68, (initializer_list*)&local_48);
        new (this) ShaderSource(local_78, local_68);
        field_0 = &PTR__ScriptOption_100f175d0;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100894d90, 16 bytes, complete-object constructor, placed by class name and debug map
    // ModelBillboardVS::ModelBillboardVS(): jumps straight to the base-object constructor

    // 0x100894da0, 688 bytes, placed by class name and debug map
    // ModelBillboardVS::GetSource(EffectManager const&, EffectList const&) const
    ModelBillboardVS* ModelBillboardVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        byte bVar3;
        byte bVar4;
        ostream* poVar5;
        char* pcVar6;
        RT7VertexShaderSourceStream local_168[2];
        ViewTransformsFragment local_50[24];

        RT7VertexShaderSourceStream::RT7VertexShaderSourceStream(local_168);
        cVar2 = EffectList::Contains();
        if (cVar2 == '\0') {
            bVar3 = 0;
        } else {
            bVar3 = EffectList::Contains();
        }
        bVar4 = EffectList::Contains();
        poVar1 = (ostream*)(local_168[0].field_0 + 16);
        std::operator<<(poVar1, "attribute vec4 aVertexPositionDepthOffset;\nattribute vec4 aVertexColour;\nattribute "
                                "vec2 aBillboardSize;\nattribute vec4 aMaterialSettingsSlotXY_UV;\nattribute vec4 "
                                "aBone_Label_BillboardLabel_Joint;\n");
        poVar5 = std::operator<<(poVar1, "uniform mat4 uModelMatrix;\n");
        local_50->BuildUniforms();
        poVar5 = std::operator<<(poVar5, (basic_string*)local_50);
        std::operator<<(poVar5, "uniform float uFade;\n");
        local_50->~basic_string();
        cVar2 = EffectList::Contains();
        if (cVar2 != '\0') {
            poVar5 = std::operator<<(poVar1, "uniform vec4 uBoneTransforms[");
            poVar5 = (ostream*)std::ostream::operator<<(poVar5, 168);
            std::operator<<(poVar5, "];\n");
        }
        cVar2 = EffectList::Contains();
        if (cVar2 != '\0') {
            poVar5 = std::operator<<(poVar1, "uniform vec4 uLabelDeltas[");
            poVar5 = (ostream*)std::ostream::operator<<(poVar5, 32);
            std::operator<<(poVar5, "];\n");
            poVar5 = std::operator<<(poVar1, "uniform vec4 uBillboardLabelTransforms[");
            poVar5 = (ostream*)std::ostream::operator<<(poVar5, 20);
            std::operator<<(poVar5, "];\n");
        }
        if (bVar3 != 0) {
            local_50->BuildUniforms();
            std::operator<<(poVar1, (basic_string*)local_50);
            local_50->~basic_string();
            pcVar6 = (char*)shadersourceprovider::GetShaderString(70);
            std::operator<<(poVar1, pcVar6);
        }
        if (bVar4 != 0) {
            pcVar6 = (char*)shadersourceprovider::GetShaderString(62);
            std::operator<<(poVar1, pcVar6);
        }
        std::operator<<(poVar1,
                        "out vec4 vVertexAlbedo;\nout vec2 vTextureUV;\nflat out vec2 vMaterialSettingsSlotXY;\n");
        if ((bVar3 | bVar4) == 1) {
            pcVar6 = (char*)shadersourceprovider::GetShaderString(71);
            std::operator<<(poVar1, pcVar6);
        }
        if (bVar3 != 0) {
            pcVar6 = (char*)shadersourceprovider::GetShaderString(69);
            std::operator<<(poVar1, pcVar6);
        }
        if (bVar4 != 0) {
            pcVar6 = (char*)shadersourceprovider::GetShaderString(61);
            std::operator<<(poVar1, pcVar6);
        }
        pcVar6 = (char*)shadersourceprovider::GetShaderString(31);
        std::operator<<(poVar1, pcVar6);
        ((ModelBillboardVS*)this)->str();
        local_168->~RT7VertexShaderSourceStream();
        return (ModelBillboardVS*)this;
    }

} // namespace jag::graphics
