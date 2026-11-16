// libs/graphics/runetek7/materials/shaders/basic/terrain/TerrainSimpleVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class TerrainSimpleVS {
    public:
        // virtual methods in vtable order
        virtual ~TerrainSimpleVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        TerrainSimpleVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    TerrainSimpleVS::~TerrainSimpleVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    TerrainSimpleVS::~TerrainSimpleVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    TerrainSimpleVS::~TerrainSimpleVS();

    // 0x10088b600, 112 bytes, base-object constructor, placed by class name and debug map
    // TerrainSimpleVS::TerrainSimpleVS()
    void TerrainSimpleVS::TerrainSimpleVS() {
        EffectList local_58[16];
        EffectList local_48[16];
        undefined2* local_38;
        undefined8 local_30;
        undefined2 local_22;

        local_22 = 20815;
        local_38 = &local_22;
        local_30 = 2;
        EffectList::EffectList(local_58, (initializer_list*)&local_38);
        EffectList::EffectList(local_48);
        new (this) ShaderSource(local_58, local_48);
        field_0 = &PTR__ScriptOption_100f16e90;
    }

    // 0x10088b670, 16 bytes, complete-object constructor, placed by class name and debug map
    // TerrainSimpleVS::TerrainSimpleVS(): jumps straight to the base-object constructor

    // 0x10088b680, 224 bytes, placed by class name and debug map
    // TerrainSimpleVS::GetSource(EffectManager const&, EffectList const&) const
    TerrainSimpleVS* TerrainSimpleVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        undefined1 local_148[280];
        ViewTransformsFragment local_30[24];

        new (local_148) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        poVar1 = (ostream*)(local_148 + 16);
        std::operator<<(poVar1,
                        "attribute vec3 aVertexPosition;\nattribute vec4 aVertexColour;\nuniform mat4 uModelMatrix;\n");
        local_30->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_30);
        local_30->~basic_string();
        std::operator<<(poVar1, "out vec4 vVertexAlbedo;\n\nvoid main()\n{\nvec4 position = uModelMatrix * "
                                "vec4(aVertexPosition, 1.0);\nposition = uViewProjMatrix * position;\nvVertexAlbedo = "
                                "aVertexColour;\ngl_Position = position;\n}\n");
        str();
        local_148->~VertexShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
