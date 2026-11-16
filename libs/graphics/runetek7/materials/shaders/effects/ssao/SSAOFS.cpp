// libs/graphics/runetek7/materials/shaders/effects/ssao/SSAOFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class SSAOFS {
    public:
        // virtual methods in vtable order
        virtual ~SSAOFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        SSAOFS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    SSAOFS::~SSAOFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    SSAOFS::~SSAOFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    SSAOFS::~SSAOFS();

    // 0x100853080, 112 bytes, base-object constructor, placed by class name and debug map
    // SSAOFS::SSAOFS()
    void SSAOFS::SSAOFS() {
        EffectList local_58[16];
        EffectList local_48[16];
        undefined2* local_38;
        undefined8 local_30;
        undefined2 local_22;

        EffectList::EffectList(local_58);
        local_22 = 27225;
        local_38 = &local_22;
        local_30 = 2;
        EffectList::EffectList(local_48, (initializer_list*)&local_38);
        new (this) ShaderSource(local_58, local_48);
        field_0 = &PTR__ScriptOption_100f16090;
    }

    // 0x1008530f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // SSAOFS::SSAOFS(): jumps straight to the base-object constructor

    // 0x100853100, 176 bytes, placed by class name and debug map
    // SSAOFS::GetSource(EffectManager const&, EffectList const&) const
    SSAOFS* SSAOFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        char* pcVar1;
        undefined1 local_128[280];

        new (local_128) RT7PixelShaderSourceStream();
        pcVar1 = (char*)shadersourceprovider::GetShaderString(53);
        std::operator<<((ostream*)(local_128 + 16), pcVar1);
        str();
        local_128->~RT7PixelShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
