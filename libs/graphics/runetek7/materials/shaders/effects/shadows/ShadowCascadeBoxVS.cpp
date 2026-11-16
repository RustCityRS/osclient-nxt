// libs/graphics/runetek7/materials/shaders/effects/shadows/ShadowCascadeBoxVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ShadowCascadeBoxVS {
    public:
        // virtual methods in vtable order
        virtual ~ShadowCascadeBoxVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ShadowCascadeBoxVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ShadowCascadeBoxVS::~ShadowCascadeBoxVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ShadowCascadeBoxVS::~ShadowCascadeBoxVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ShadowCascadeBoxVS::~ShadowCascadeBoxVS();

    // 0x10088d540, 80 bytes, base-object constructor, placed by class name and debug map
    // ShadowCascadeBoxVS::ShadowCascadeBoxVS()
    void ShadowCascadeBoxVS::ShadowCascadeBoxVS() {
        EffectList local_40[16];
        EffectList local_30[16];

        EffectList::EffectList(local_40);
        EffectList::EffectList(local_30);
        new (this) ShaderSource(local_40, local_30);
        field_0 = &PTR__ScriptOption_100f170e8;
    }

    // 0x10088d590, 16 bytes, complete-object constructor, placed by class name and debug map
    // ShadowCascadeBoxVS::ShadowCascadeBoxVS(): jumps straight to the base-object constructor

    // 0x10088d5a0, 240 bytes, placed by class name and debug map
    // ShadowCascadeBoxVS::GetSource(EffectManager const&, EffectList const&) const
    ShadowCascadeBoxVS* ShadowCascadeBoxVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        undefined1 local_148[280];
        DirLightShadowMapping local_30[24];

        new (local_148) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        local_30->BuildSharedFragment();
        std::operator<<((ostream*)(local_148 + 16), (basic_string*)local_30);
        local_30->~basic_string();
        poVar1 = std::operator<<(
            (ostream*)(local_148 + 16),
            "                                                                                           \nattribute "
            "vec3 aPos;                                                                       \nattribute float "
            "aCascadeIndex;                                                             \n                             "
            "                                                              \nflat out float vCascade;                  "
            "                                                 \n                                                       "
            "                                    \nuniform mat4 uWorldViewProjMats[");
        poVar1 = (ostream*)std::ostream::operator<<(poVar1, 4);
        std::operator<<(
            poVar1,
            "];                             \n                                                                         "
            "                  \nvoid main()                                                                           "
            "     \n{                                                                                          \n    "
            "vCascade = aCascadeIndex;                                                              \n    int iCascade "
            "= int(aCascadeIndex);                                                     \n    gl_Position = "
            "uWorldViewProjMats[GetConstantCascadeIndex(iCascade)] * vec4(aPos, 1.0); \n}\n");
        str();
        local_148->~VertexShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
