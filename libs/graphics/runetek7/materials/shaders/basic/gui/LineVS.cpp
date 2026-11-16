// libs/graphics/runetek7/materials/shaders/basic/gui/LineVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class LineVS {
    public:
        // virtual methods in vtable order
        virtual ~LineVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        LineVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LineVS::~LineVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    LineVS::~LineVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LineVS::~LineVS();

    // 0x100894410, 128 bytes, base-object constructor, placed by class name and debug map
    // LineVS::LineVS()
    void LineVS::LineVS() {
        EffectList local_68[16];
        EffectList local_58[16];
        undefined1* local_48;
        undefined8 local_40;
        undefined1* local_38;
        undefined8 local_30;
        undefined1 local_22;
        undefined1 local_21;

        local_22 = 80;
        local_48 = &local_22;
        local_40 = 1;
        EffectList::EffectList(local_68, (initializer_list*)&local_48);
        local_21 = 81;
        local_38 = &local_21;
        local_30 = 1;
        EffectList::EffectList(local_58, (initializer_list*)&local_38);
        new (this) ShaderSource(local_68, local_58);
        field_0 = &PTR__ScriptOption_100f17530;
    }

    // 0x100894490, 16 bytes, complete-object constructor, placed by class name and debug map
    // LineVS::LineVS(): jumps straight to the base-object constructor

    // 0x1008944a0, 272 bytes, placed by class name and debug map
    // LineVS::GetSource(EffectManager const&, EffectList const&) const
    LineVS* LineVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        undefined1 local_138[280];

        new (local_138) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        poVar1 = (ostream*)(local_138 + 16);
        std::operator<<(
            poVar1,
            "attribute vec2 aVertexPosition2D;\nattribute vec4 aVertexColour;\nuniform mat4 uProjectionMatrix;\n");
        cVar2 = EffectList::Contains();
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "out vec4 vColour;\n");
        }
        std::operator<<(poVar1, "void main()\n{\n");
        cVar2 = EffectList::Contains();
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "   vColour = aVertexColour;\n");
        }
        std::operator<<(poVar1, "   gl_Position = uProjectionMatrix * vec4(aVertexPosition2D, 1.0, 1.0);\n}\n");
        str();
        local_138->~VertexShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
