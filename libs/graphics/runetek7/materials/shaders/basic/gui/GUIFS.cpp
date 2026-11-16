// libs/graphics/runetek7/materials/shaders/basic/gui/GUIFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class GUIFS {
    public:
        // virtual methods in vtable order
        virtual ~GUIFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        GUIFS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    GUIFS::~GUIFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    GUIFS::~GUIFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    GUIFS::~GUIFS();

    // 0x100893e60, 112 bytes, base-object constructor, placed by class name and debug map
    // GUIFS::GUIFS()
    void GUIFS::GUIFS() {
        EffectList local_58[16];
        EffectList local_48[16];
        undefined4* local_38;
        undefined8 local_30;
        undefined4 local_26;
        undefined2 local_22;

        EffectList::EffectList(local_58);
        local_26 = 1195785297;
        local_22 = 18760;
        local_38 = &local_26;
        local_30 = 6;
        EffectList::EffectList(local_48, (initializer_list*)&local_38);
        new (this) ShaderSource(local_58, local_48);
        field_0 = &PTR__ScriptOption_100f174b8;
    }

    // 0x100893ed0, 16 bytes, complete-object constructor, placed by class name and debug map
    // GUIFS::GUIFS(): jumps straight to the base-object constructor

    // 0x100893ee0, 288 bytes, placed by class name and debug map
    // GUIFS::GetSource(EffectManager const&, EffectList const&) const
    GUIFS* GUIFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        char cVar1;
        char* pcVar2;
        undefined1 local_138[280];

        new (local_138) RT7PixelShaderSourceStream();
        cVar1 = EffectList::Contains();
        if (cVar1 != '\0') {
            std::operator<<((ostream*)(local_138 + 16), "in vec4 vColour;\n");
        }
        cVar1 = EffectList::Contains();
        if (cVar1 != '\0') {
            std::operator<<((ostream*)(local_138 + 16),
                            "in highp vec2 vTextureUV2D;\nflat in highp vec4 vTextureUVAtlasMin_Extents;\nuniform "
                            "sampler2D uDiffuseMap;\n");
            cVar1 = EffectList::Contains();
            if (cVar1 != '\0') {
                std::operator<<((ostream*)(local_138 + 16), "uniform sampler2D uMaskMap;\n");
            }
        }
        pcVar2 = (char*)shadersourceprovider::GetShaderString(20);
        std::operator<<((ostream*)(local_138 + 16), pcVar2);
        str();
        local_138->~RT7PixelShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
