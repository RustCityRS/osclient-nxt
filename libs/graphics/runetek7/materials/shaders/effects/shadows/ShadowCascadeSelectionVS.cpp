// libs/graphics/runetek7/materials/shaders/effects/shadows/ShadowCascadeSelectionVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ShadowCascadeSelectionVS {
    public:
        // virtual methods in vtable order
        virtual ~ShadowCascadeSelectionVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ShadowCascadeSelectionVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ShadowCascadeSelectionVS::~ShadowCascadeSelectionVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ShadowCascadeSelectionVS::~ShadowCascadeSelectionVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ShadowCascadeSelectionVS::~ShadowCascadeSelectionVS();

    // 0x10088d790, 80 bytes, base-object constructor, placed by class name and debug map
    // ShadowCascadeSelectionVS::ShadowCascadeSelectionVS()
    void ShadowCascadeSelectionVS::ShadowCascadeSelectionVS() {
        EffectList local_40[16];
        EffectList local_30[16];

        EffectList::EffectList(local_40);
        EffectList::EffectList(local_30);
        new (this) ShaderSource(local_40, local_30);
        field_0 = &PTR__ScriptOption_100f17138;
    }

    // 0x10088d7e0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ShadowCascadeSelectionVS::ShadowCascadeSelectionVS(): jumps straight to the base-object constructor

    // 0x10088d7f0, 224 bytes, placed by class name and debug map
    // ShadowCascadeSelectionVS::GetSource(EffectManager const&, EffectList const&) const
    ShadowCascadeSelectionVS* ShadowCascadeSelectionVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        char* pcVar1;
        undefined1 local_148[280];
        DirLightShadowMapping local_30[24];

        new (local_148) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        local_30->BuildSharedFragment();
        std::operator<<((ostream*)(local_148 + 16), (basic_string*)local_30);
        local_30->~basic_string();
        pcVar1 = (char*)shadersourceprovider::GetShaderString(55);
        std::operator<<((ostream*)(local_148 + 16), pcVar1);
        str();
        local_148->~VertexShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
