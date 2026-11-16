// libs/graphics/runetek7/materials/shaders/basic/terrain/TerrainNormalVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class TerrainNormalVS {
    public:
        // virtual methods in vtable order
        virtual ~TerrainNormalVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        TerrainNormalVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    TerrainNormalVS::~TerrainNormalVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    TerrainNormalVS::~TerrainNormalVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    TerrainNormalVS::~TerrainNormalVS();

    // 0x10088afe0, 144 bytes, base-object constructor, placed by class name and debug map
    // TerrainNormalVS::TerrainNormalVS()
    void TerrainNormalVS::TerrainNormalVS() {
        EffectList local_68[16];
        EffectList local_58[16];
        undefined1* local_48;
        undefined8 local_40;
        undefined2* local_38;
        undefined8 local_30;
        undefined2 local_24;
        undefined1 local_22;
        undefined1 local_21;

        local_21 = 79;
        local_48 = &local_21;
        local_40 = 1;
        EffectList::EffectList(local_68, (initializer_list*)&local_48);
        local_24 = 15679;
        local_22 = 68;
        local_38 = &local_24;
        local_30 = 3;
        EffectList::EffectList(local_58, (initializer_list*)&local_38);
        new (this) ShaderSource(local_68, local_58);
        field_0 = &PTR__ScriptOption_100f16df0;
    }

    // 0x10088b070, 16 bytes, complete-object constructor, placed by class name and debug map
    // TerrainNormalVS::TerrainNormalVS(): jumps straight to the base-object constructor

    // 0x10088b080, 368 bytes, placed by class name and debug map
    // TerrainNormalVS::GetSource(EffectManager const&, EffectList const&) const
    TerrainNormalVS* TerrainNormalVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        char* pcVar3;
        RT7VertexShaderSourceStream local_150[2];
        ViewTransformsFragment local_38[24];

        RT7VertexShaderSourceStream::RT7VertexShaderSourceStream(local_150);
        cVar2 = EffectList::Contains();
        if (cVar2 == '\0') {
            cVar2 = '\0';
        } else {
            cVar2 = EffectList::Contains();
        }
        poVar1 = (ostream*)(local_150[0].field_0 + 16);
        std::operator<<(poVar1,
                        "attribute vec3 aVertexPosition;\nattribute vec4 aVertexNormal_FogProportion;\nattribute vec4 "
                        "aMaterialSettingsSlotXY_MaterialSettingsSlotXY2;\nattribute vec2 "
                        "aMaterialSettingsSlotXY3;\nattribute vec4 aTextureScale;\nattribute vec4 "
                        "aVertexColour;\nattribute vec4 aTextureWeight;\nattribute vec4 aMaterialProperties;\n");
        std::operator<<(poVar1, "uniform mat4 uModelMatrix;\n");
        local_38->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_38);
        local_38->~basic_string();
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "uniform mediump vec4 uAtlasMeta;\n");
        }
        std::operator<<(poVar1, "out highp vec3 vWorldPosition;\n");
        std::operator<<(poVar1, "out vec3 vNormal;\n");
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "flat out highp vec4 vMaterialSettingsSlots1D;\nflat out highp vec4 "
                                    "vTextureScale;\nout vec4 vTextureWeight;\n");
        }
        pcVar3 = (char*)shadersourceprovider::GetShaderString(102);
        std::operator<<(poVar1, pcVar3);
        str();
        local_150->~RT7VertexShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
