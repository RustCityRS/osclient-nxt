// libs/graphics/runetek7/materials/shaders/basic/gui/GUIVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class GUIVS {
    public:
        // virtual methods in vtable order
        virtual ~GUIVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        GUIVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    class RT7VertexShaderSourceStream {
    public:
        // virtual methods in vtable order
        virtual ~RT7VertexShaderSourceStream();
        RT7VertexShaderSourceStream(ShaderSource const&, EffectList const&, render::ShaderVariablePrecision,
                                    render::ShaderVariablePrecision, render::ShaderVariablePrecision,
                                    render::ShaderVariablePrecision, render::ShaderVariablePrecision,
                                    render::ShaderVariablePrecision, unsigned int);

        // data members, from how the methods use this: 136 bytes
        RT7ShaderSourceStream field_0; // offset 0
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    GUIVS::~GUIVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    GUIVS::~GUIVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    GUIVS::~GUIVS();

    // 0x100894020, 128 bytes, base-object constructor, placed by class name and debug map
    // GUIVS::GUIVS()
    void GUIVS::GUIVS() {
        EffectList local_68[16];
        EffectList local_58[16];
        undefined1* local_48;
        undefined8 local_40;
        undefined2* local_38;
        undefined8 local_30;
        undefined2 local_23;
        undefined1 local_21;

        local_21 = 80;
        local_48 = &local_21;
        local_40 = 1;
        EffectList::EffectList(local_68, (initializer_list*)&local_48);
        local_23 = 15441;
        local_38 = &local_23;
        local_30 = 2;
        EffectList::EffectList(local_58, (initializer_list*)&local_38);
        new (this) ShaderSource(local_68, local_58);
        field_0 = &PTR__ScriptOption_100f174e0;
    }

    // 0x1008940a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // GUIVS::GUIVS(): jumps straight to the base-object constructor

    // 0x1008940b0, 288 bytes, placed by class name and debug map
    // GUIVS::GetSource(EffectManager const&, EffectList const&) const
    GUIVS* GUIVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        char* pcVar3;
        RT7VertexShaderSourceStream local_138[2];

        RT7VertexShaderSourceStream::RT7VertexShaderSourceStream(local_138);
        poVar1 = (ostream*)(local_138[0].field_0 + 16);
        std::operator<<(poVar1,
                        "attribute vec2 aVertexPosition2D;\nattribute vec4 aVertexColour;\nattribute vec2 "
                        "aTextureUV;\nattribute vec2 aTextureUVAtlasMin;\nattribute vec2 aTextureUVAtlasExtents;\n");
        std::operator<<(poVar1, "uniform mat4 uProjectionMatrix;\n");
        cVar2 = EffectList::Contains();
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "out vec4 vColour;\n");
        }
        cVar2 = EffectList::Contains();
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "out highp vec2 vTextureUV2D;\nflat out highp vec4 vTextureUVAtlasMin_Extents;\n");
        }
        pcVar3 = (char*)shadersourceprovider::GetShaderString(21);
        std::operator<<(poVar1, pcVar3);
        str();
        local_138->~RT7VertexShaderSourceStream();
        return this;
    }

    // 0x1008941d0, 192 bytes, complete-object constructor, inline, placed by class header (inline)
    // RT7VertexShaderSourceStream::RT7VertexShaderSourceStream(ShaderSource const&, EffectList const&, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, unsigned int)
    void RT7VertexShaderSourceStream::RT7VertexShaderSourceStream(undefined8 param_1, undefined8 param_2,
                                                                  undefined4 param_4, undefined4 param_5,
                                                                  undefined4 param_6, undefined4 param_7,
                                                                  undefined4 param_8, undefined4 param_9,
                                                                  undefined4 param_10) {
        undefined* puVar1;

        new ((field_0 + 128)) std::ios();
        new (this) RT7ShaderSourceStream(PTR_VTT_100ee6fb0 + 8, param_1, 35633, param_2, param_4, param_5, param_6,
                                         param_7, param_8, param_9, param_10);
        puVar1 = PTR_vtable_100ee88a8;
        *(undefined**)field_0 = PTR_vtable_100ee88a8 + 24;
        *(undefined**)(field_0 + 128) = puVar1 + 112;
        *(undefined**)(field_0 + 16) = puVar1 + 72;
    }

    // 0x100894290, 48 bytes, complete-object destructor, inline, placed by class header (inline)
    // RT7VertexShaderSourceStream::~RT7VertexShaderSourceStream()
    void RT7VertexShaderSourceStream::~RT7VertexShaderSourceStream() {
        ~RT7PixelShaderSourceStream();
        ((field_0 + 128))->~ios();
    }

    // 0x100898ca0, 32 bytes, deleting destructor, inline, placed by class header (inline)
    // RT7VertexShaderSourceStream::~RT7VertexShaderSourceStream()
    void RT7VertexShaderSourceStream::~RT7VertexShaderSourceStream() {
        ~RT7VertexShaderSourceStream(this);
        operator_delete(this);
    }

    // 0x100898d20, 16 bytes, base-object destructor, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RT7VertexShaderSourceStream::~RT7VertexShaderSourceStream()
    /* RT7PixelShaderSourceStream::~RT7PixelShaderSourceStream() */

    void RT7PixelShaderSourceStream::~RT7PixelShaderSourceStream() {
        ~ComputeShaderSourceStream();
    }

} // namespace jag::graphics
