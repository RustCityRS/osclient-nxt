// libs/graphics/runetek7/materials/shaders/effects/ssao/SSAOVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class SSAOVS {
    public:
        // virtual methods in vtable order
        virtual ~SSAOVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        SSAOVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    SSAOVS::~SSAOVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    SSAOVS::~SSAOVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    SSAOVS::~SSAOVS();

    // 0x1008531b0, 80 bytes, base-object constructor, placed by class name and debug map
    // SSAOVS::SSAOVS()
    void SSAOVS::SSAOVS() {
        EffectList local_40[16];
        EffectList local_30[16];

        EffectList::EffectList(local_40);
        EffectList::EffectList(local_30);
        new (this) ShaderSource(local_40, local_30);
        field_0 = &PTR__ScriptOption_100f160b8;
    }

    // 0x100853200, 16 bytes, complete-object constructor, placed by class name and debug map
    // SSAOVS::SSAOVS(): jumps straight to the base-object constructor

    // 0x100853210, 160 bytes, placed by class name and debug map
    // SSAOVS::GetSource(EffectManager const&, EffectList const&) const
    SSAOVS* SSAOVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        char* pcVar1;
        undefined1 local_128[280];

        new (local_128) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        pcVar1 = (char*)shadersourceprovider::GetShaderString(54);
        std::operator<<((ostream*)(local_128 + 16), pcVar1);
        str();
        local_128->~VertexShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
