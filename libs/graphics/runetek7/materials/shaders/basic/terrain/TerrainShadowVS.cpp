// libs/graphics/runetek7/materials/shaders/basic/terrain/TerrainShadowVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class TerrainShadowVS {
    public:
        // virtual methods in vtable order
        virtual ~TerrainShadowVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        TerrainShadowVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    TerrainShadowVS::~TerrainShadowVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    TerrainShadowVS::~TerrainShadowVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    TerrainShadowVS::~TerrainShadowVS();

    // 0x10088b320, 112 bytes, base-object constructor, placed by class name and debug map
    // TerrainShadowVS::TerrainShadowVS()
    void TerrainShadowVS::TerrainShadowVS() {
        EffectList local_58[16];
        EffectList local_48[16];
        undefined1* local_38;
        undefined8 local_30;
        undefined1 local_21;

        local_21 = 79;
        local_38 = &local_21;
        local_30 = 1;
        EffectList::EffectList(local_58, (initializer_list*)&local_38);
        EffectList::EffectList(local_48);
        new (this) ShaderSource(local_58, local_48);
        field_0 = &PTR__ScriptOption_100f16e40;
    }

    // 0x10088b390, 16 bytes, complete-object constructor, placed by class name and debug map
    // TerrainShadowVS::TerrainShadowVS(): jumps straight to the base-object constructor

    // 0x10088b3a0, 320 bytes, placed by class name and debug map
    // TerrainShadowVS::GetSource(EffectManager const&, EffectList const&) const
    TerrainShadowVS* TerrainShadowVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        ostream* poVar2;
        MapArea* this_00;
        long lVar3;
        RT7VertexShaderSourceStream local_150[2];
        ViewTransformsFragment local_38[24];

        RT7VertexShaderSourceStream::RT7VertexShaderSourceStream(local_150);
        poVar1 = (ostream*)(local_150[0].field_0 + 16);
        std::operator<<(poVar1, "attribute vec3 aVertexPosition;\n");
        poVar2 = std::operator<<(poVar1, "uniform mat4 uModelMatrix;\n");
        local_38->BuildUniforms();
        std::operator<<(poVar2, (basic_string*)local_38);
        local_38->~basic_string();
        std::operator<<(poVar1, "\nvoid main()\n{\n   gl_Position = uModelMatrix * vec4(aVertexPosition, 1.0);\n");
        poVar2 = poVar1;
        std::operator<<(poVar1, " gl_Position.z = (gl_Position.z - 0.5) * 2.0;\n");
        this_00 = (MapArea*)poVar2->Instance();
        lVar3 = this_00->GetOrigin();
        if (*(char*)(lVar3 + 184) == '\0') {
            std::operator<<(poVar1, "   const float shadowProjMatNearClip = -1.0;\n   gl_Position.z = "
                                    "max(shadowProjMatNearClip, gl_Position.z);\n");
        }
        std::operator<<(poVar1, "}\n");
        str();
        local_150->~RT7VertexShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
