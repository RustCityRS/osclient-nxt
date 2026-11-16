// libs/graphics/runetek7/materials/shaders/effects/shadows/ShadowCascadeBoxFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ShadowCascadeBoxFS {
    public:
        // virtual methods in vtable order
        virtual ~ShadowCascadeBoxFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ShadowCascadeBoxFS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ShadowCascadeBoxFS::~ShadowCascadeBoxFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ShadowCascadeBoxFS::~ShadowCascadeBoxFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ShadowCascadeBoxFS::~ShadowCascadeBoxFS();

    // 0x10088d410, 80 bytes, base-object constructor, placed by class name and debug map
    // ShadowCascadeBoxFS::ShadowCascadeBoxFS()
    void ShadowCascadeBoxFS::ShadowCascadeBoxFS() {
        EffectList local_40[16];
        EffectList local_30[16];

        EffectList::EffectList(local_40);
        EffectList::EffectList(local_30);
        new (this) ShaderSource(local_40, local_30);
        field_0 = &PTR__ScriptOption_100f170c0;
    }

    // 0x10088d460, 16 bytes, complete-object constructor, placed by class name and debug map
    // ShadowCascadeBoxFS::ShadowCascadeBoxFS(): jumps straight to the base-object constructor

    // 0x10088d470, 208 bytes, placed by class name and debug map
    // ShadowCascadeBoxFS::GetSource(EffectManager const&, EffectList const&) const
    ShadowCascadeBoxFS* ShadowCascadeBoxFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        undefined1 local_148[280];
        DirLightShadowMapping local_30[24];

        new (local_148) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        local_30->BuildSharedFragment();
        std::operator<<((ostream*)(local_148 + 16), (basic_string*)local_30);
        local_30->~basic_string();
        std::operator<<(
            (ostream*)(local_148 + 16),
            "                                                                            \nflat in float vCascade;     "
            "                                                \n                                                        "
            "                    \nvoid main()                                                                 \n{     "
            "                                                                      \n    int iCascade = int(vCascade); "
            "                                          \n    gl_FragColor = vec4(0.0);                                 "
            "              \n    gl_FragColor[GetConstantCascadeIndex(iCascade)] = gl_FragCoord.z;       \n}\n");
        str();
        local_148->~PixelShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
