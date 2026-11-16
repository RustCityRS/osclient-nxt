// libs/graphics/runetek7/materials/shaders/basic/terrain/TerrainShadowFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class TerrainShadowFS {
    public:
        // virtual methods in vtable order
        virtual ~TerrainShadowFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        TerrainShadowFS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    TerrainShadowFS::~TerrainShadowFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    TerrainShadowFS::~TerrainShadowFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    TerrainShadowFS::~TerrainShadowFS();

    // 0x10088b1f0, 96 bytes, base-object constructor, placed by class name and debug map
    // TerrainShadowFS::TerrainShadowFS()
    void TerrainShadowFS::TerrainShadowFS() {
        EffectList local_50[16];
        initializer_list<EffectType> local_40[16];
        EffectList local_30[16];

        std::initializer_list<EffectType>::initializer_list(local_40);
        EffectList::EffectList(local_50, local_40);
        EffectList::EffectList(local_30);
        new (this) ShaderSource(local_50, local_30);
        field_0 = &PTR__ScriptOption_100f16e18;
    }

    // 0x10088b250, 16 bytes, complete-object constructor, placed by class name and debug map
    // TerrainShadowFS::TerrainShadowFS(): jumps straight to the base-object constructor

    // 0x10088b260, 192 bytes, placed by class name and debug map
    // TerrainShadowFS::GetSource(EffectManager const&, EffectList const&) const
    TerrainShadowFS* TerrainShadowFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        undefined1 local_130[280];

        new (local_130) RT7PixelShaderSourceStream();
        std::operator<<((ostream*)(local_130 + 16), "void main()\n{\n");
        std::operator<<((ostream*)(local_130 + 16), "}\n");
        str();
        local_130->~RT7PixelShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
