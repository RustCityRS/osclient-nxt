// libs/graphics/runetek7/materials/shaders/RT7ShaderSourceStream.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class RT7ShaderSourceStream {
    public:
        // virtual methods in vtable order
        virtual ~RT7ShaderSourceStream();
        virtual void AppendMandatoryShaderFragments();
        RT7ShaderSourceStream(ShaderSource const&, render::ShaderType, EffectList const&,
                              render::ShaderVariablePrecision, render::ShaderVariablePrecision,
                              render::ShaderVariablePrecision, render::ShaderVariablePrecision,
                              render::ShaderVariablePrecision, render::ShaderVariablePrecision, unsigned int);
        void AppendRelevantEffectsAsStringDefines(ShaderSource const&, EffectList const&);
        RT7ShaderSourceStream(render::ShaderType, EffectList const&, render::ShaderVariablePrecision,
                              render::ShaderVariablePrecision, render::ShaderVariablePrecision,
                              render::ShaderVariablePrecision, render::ShaderVariablePrecision,
                              render::ShaderVariablePrecision, unsigned int);

        // data members, from how the methods use this: 136 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        undefined** field_16; // offset 16
        char _unknown_24[104];
        undefined** field_128; // offset 128
    };

    // 0x100852fa0, 192 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // RT7PixelShaderSourceStream::RT7PixelShaderSourceStream(ShaderSource const&, EffectList const&, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, unsigned int)
    void RT7PixelShaderSourceStream::RT7PixelShaderSourceStream(undefined8 param_1, undefined8 param_2,
                                                                undefined4 param_4, undefined4 param_5,
                                                                undefined4 param_6, undefined4 param_7,
                                                                undefined4 param_8, undefined4 param_9,
                                                                undefined4 param_10) {
        undefined* puVar1;

        new (&field_128) std::ios();
        new (this) RT7ShaderSourceStream(PTR_VTT_100ee6fa8 + 8, param_1, 35632, param_2, param_4, param_5, param_6,
                                         param_7, param_8, param_9, param_10);
        puVar1 = PTR_vtable_100ee8890;
        field_0 = PTR_vtable_100ee8890 + 24;
        field_128 = puVar1 + 112;
        field_16 = puVar1 + 72;
    }

    // 0x100938cd0, 48 bytes, complete-object destructor, inline, placed by class name
    // RT7ShaderSourceStream::~RT7ShaderSourceStream()
    void RT7ShaderSourceStream::~RT7ShaderSourceStream() {
        ~ComputeShaderSourceStream();
        (&field_128)->~ios();
    }

    // 0x100938d00, 32 bytes, deleting destructor, inline, placed by class name
    // RT7ShaderSourceStream::~RT7ShaderSourceStream()
    void RT7ShaderSourceStream::~RT7ShaderSourceStream() {
        ~RT7ShaderSourceStream(this);
        operator_delete(this);
    }

    // 0x100938e20, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RT7ShaderSourceStream::~RT7ShaderSourceStream()
    /* render::ComputeShaderSourceStream::~ComputeShaderSourceStream() */

    void render::ComputeShaderSourceStream::~ComputeShaderSourceStream() {
        ~ShaderSourceStream();
    }

} // namespace jag::graphics

namespace jag::render {
    // 0x100938e20: the linker folded this into graphics::RT7ShaderSourceStream::~RT7ShaderSourceStream(), which has identical code
    PixelShaderSourceStream::~PixelShaderSourceStream();

    // 0x100938e20: the linker folded this into graphics::RT7ShaderSourceStream::~RT7ShaderSourceStream(), which has identical code
    VertexShaderSourceStream::~VertexShaderSourceStream();

    // 0x100938e20: the linker folded this into graphics::RT7ShaderSourceStream::~RT7ShaderSourceStream(), which has identical code
    ComputeShaderSourceStream::~ComputeShaderSourceStream();

} // namespace jag::render
