// libs/graphics/runetek7/materials/shaders/basic/gui/LineFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class LineFS {
    public:
        // virtual methods in vtable order
        virtual ~LineFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        LineFS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LineFS::~LineFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    LineFS::~LineFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LineFS::~LineFS();

    // 0x1008942c0, 112 bytes, base-object constructor, placed by class name and debug map
    // LineFS::LineFS()
    void LineFS::LineFS() {
        EffectList local_58[16];
        EffectList local_48[16];
        undefined1* local_38;
        undefined8 local_30;
        undefined1 local_21;

        EffectList::EffectList(local_58);
        local_21 = 81;
        local_38 = &local_21;
        local_30 = 1;
        EffectList::EffectList(local_48, (initializer_list*)&local_38);
        new (this) ShaderSource(local_58, local_48);
        field_0 = &PTR__ScriptOption_100f17508;
    }

    // 0x100894330, 16 bytes, complete-object constructor, placed by class name and debug map
    // LineFS::LineFS(): jumps straight to the base-object constructor

    // 0x100894340, 208 bytes, placed by class name and debug map
    // LineFS::GetSource(EffectManager const&, EffectList const&) const
    LineFS* LineFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        undefined1 local_130[280];

        new (local_130) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        if (EffectList::Contains() != '\0') {
            std::operator<<((ostream*)(local_130 + 16), "in vec4 vColour;\n");
        }
        std::operator<<((ostream*)(local_130 + 16), "void main()\n{\ngl_FragColor = vColour;\n}\n");
        str();
        local_130->~PixelShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
