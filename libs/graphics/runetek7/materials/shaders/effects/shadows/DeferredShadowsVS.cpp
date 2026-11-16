// libs/graphics/runetek7/materials/shaders/effects/shadows/DeferredShadowsVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class DeferredShadowsVS {
    public:
        // virtual methods in vtable order
        virtual ~DeferredShadowsVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        DeferredShadowsVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DeferredShadowsVS::~DeferredShadowsVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    DeferredShadowsVS::~DeferredShadowsVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DeferredShadowsVS::~DeferredShadowsVS();

    // 0x10088d310, 80 bytes, base-object constructor, placed by class name and debug map
    // DeferredShadowsVS::DeferredShadowsVS()
    void DeferredShadowsVS::DeferredShadowsVS() {
        EffectList local_40[16];
        EffectList local_30[16];

        EffectList::EffectList(local_40);
        EffectList::EffectList(local_30);
        new (this) ShaderSource(local_40, local_30);
        field_0 = &PTR__ScriptOption_100f17098;
    }

    // 0x10088d360, 16 bytes, complete-object constructor, placed by class name and debug map
    // DeferredShadowsVS::DeferredShadowsVS(): jumps straight to the base-object constructor

    // 0x10088d370, 160 bytes, placed by class name and debug map
    // DeferredShadowsVS::GetSource(EffectManager const&, EffectList const&) const
    DeferredShadowsVS* DeferredShadowsVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        char* pcVar1;
        undefined1 local_128[280];

        new (local_128) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        pcVar1 = (char*)shadersourceprovider::GetShaderString(10);
        std::operator<<((ostream*)(local_128 + 16), pcVar1);
        str();
        local_128->~VertexShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
