// libs/graphics/runetek7/materials/shaders/effects/skybox/SkyBoxVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class SkyBoxVS {
    public:
        // virtual methods in vtable order
        virtual ~SkyBoxVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        SkyBoxVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    SkyBoxVS::~SkyBoxVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    SkyBoxVS::~SkyBoxVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    SkyBoxVS::~SkyBoxVS();

    // 0x10088db80, 80 bytes, base-object constructor, placed by class name and debug map
    // SkyBoxVS::SkyBoxVS()
    void SkyBoxVS::SkyBoxVS() {
        EffectList local_40[16];
        EffectList local_30[16];

        EffectList::EffectList(local_40);
        EffectList::EffectList(local_30);
        new (this) ShaderSource(local_40, local_30);
        field_0 = &PTR__ScriptOption_100f17188;
    }

    // 0x10088dbd0, 16 bytes, complete-object constructor, placed by class name and debug map
    // SkyBoxVS::SkyBoxVS(): jumps straight to the base-object constructor

    // 0x10088dbe0, 304 bytes, placed by class name and debug map
    // SkyBoxVS::GetSource(EffectManager const&, EffectList const&) const
    SkyBoxVS* SkyBoxVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        undefined1 local_138[280];

        new (local_138) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        cVar2 = EffectList::Contains();
        if (cVar2 == '\0') {
            cVar2 = '\0';
        } else {
            cVar2 = EffectList::Contains();
        }
        poVar1 = (ostream*)(local_138 + 16);
        std::operator<<(poVar1, "attribute vec2 aVertexPosition2D;\nattribute vec3 aVertexNormal;\nattribute vec3 "
                                "aScatteringViewDirection;\n");
        std::operator<<(poVar1, "uniform mat4 uProjectionMatrix;\n");
        std::operator<<(poVar1, "out vec3 vViewSpaceNormal;\n");
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "out vec4 vViewVectorAndLength;\n");
        }
        std::operator<<(poVar1, "\nvoid main()\n{\n   vec4 projVertex = uProjectionMatrix * vec4(aVertexPosition2D, "
                                "1.0, 1.0);\n   projVertex /= projVertex.w;\n   gl_Position = vec4(projVertex.x, "
                                "projVertex.y, 1.0, 1.0);\n   vViewSpaceNormal = aVertexNormal;\n");
        if (cVar2 != '\0') {
            std::operator<<(poVar1, " vViewVectorAndLength = vec4(normalize(aScatteringViewDirection), "
                                    "length(aScatteringViewDirection));\n");
        }
        std::operator<<(poVar1, "}");
        str();
        local_138->~VertexShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
