// libs/graphics/runetek7/materials/shaders/basic/terrain/TerrainSimpleFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class TerrainSimpleFS {
    public:
        // virtual methods in vtable order
        virtual ~TerrainSimpleFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        TerrainSimpleFS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    TerrainSimpleFS::~TerrainSimpleFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    TerrainSimpleFS::~TerrainSimpleFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    TerrainSimpleFS::~TerrainSimpleFS();

    // 0x10088b4e0, 112 bytes, base-object constructor, placed by class name and debug map
    // TerrainSimpleFS::TerrainSimpleFS()
    void TerrainSimpleFS::TerrainSimpleFS() {
        EffectList local_58[16];
        EffectList local_48[16];
        undefined1* local_38;
        undefined8 local_30;
        undefined1 local_21;

        local_21 = 81;
        local_38 = &local_21;
        local_30 = 1;
        EffectList::EffectList(local_58, (initializer_list*)&local_38);
        EffectList::EffectList(local_48);
        new (this) ShaderSource(local_58, local_48);
        field_0 = &PTR__ScriptOption_100f16e68;
    }

    // 0x10088b550, 16 bytes, complete-object constructor, placed by class name and debug map
    // TerrainSimpleFS::TerrainSimpleFS(): jumps straight to the base-object constructor

    // 0x10088b560, 160 bytes, placed by class name and debug map
    // TerrainSimpleFS::GetSource(EffectManager const&, EffectList const&) const
    TerrainSimpleFS* TerrainSimpleFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        undefined1 local_128[280];

        new (local_128) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<((ostream*)(local_128 + 16),
                        "in vec4 vVertexAlbedo;\nvoid main()\n{\n   gl_FragColor = vVertexAlbedo;\n}\n");
        str();
        local_128->~PixelShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
