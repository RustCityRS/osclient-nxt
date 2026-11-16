// libs/graphics/runetek7/materials/shaders/basic/texturetoquad/DepthDownsampleVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class DepthDownsampleVS {
    public:
        // virtual methods in vtable order
        virtual ~DepthDownsampleVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        DepthDownsampleVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DepthDownsampleVS::~DepthDownsampleVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    DepthDownsampleVS::~DepthDownsampleVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DepthDownsampleVS::~DepthDownsampleVS();

    // 0x10088c1f0, 80 bytes, base-object constructor, placed by class name and debug map
    // DepthDownsampleVS::DepthDownsampleVS()
    void DepthDownsampleVS::DepthDownsampleVS() {
        EffectList local_40[16];
        EffectList local_30[16];

        EffectList::EffectList(local_40);
        EffectList::EffectList(local_30);
        new (this) ShaderSource(local_40, local_30);
        field_0 = &PTR__ScriptOption_100f16f80;
    }

    // 0x10088c240, 16 bytes, complete-object constructor, placed by class name and debug map
    // DepthDownsampleVS::DepthDownsampleVS(): jumps straight to the base-object constructor

    // 0x10088c250, 160 bytes, placed by class name and debug map
    // DepthDownsampleVS::GetSource(EffectManager const&, EffectList const&) const
    DepthDownsampleVS* DepthDownsampleVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        undefined1 local_128[280];

        new (local_128) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (ostream*)(local_128 + 16),
            "attribute vec3 aVertexPosition;\nattribute vec2 aTextureUV;\nout vec2 vTextureUV;\n\nvoid main()\n{\n   "
            "gl_Position = vec4(aVertexPosition.xy, 0.0, 1.0);\n   vTextureUV = aTextureUV;\n   // We require the "
            "depth buffer to be upside down, as the intel occlusion culling example uses directx viewport "
            "coordinates\n   vTextureUV.y = 1.0 - vTextureUV.y;\n}\n");
        str();
        local_128->~VertexShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
