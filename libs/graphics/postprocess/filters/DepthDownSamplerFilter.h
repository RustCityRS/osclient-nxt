// libs/graphics/postprocess/filters/DepthDownSamplerFilter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::postprocess {
    class DepthDownSamplerFilter {
    public:
        DepthDownSamplerFilter(graphicutils::RenderToTextureHelper*);
        ~DepthDownSamplerFilter();
        ulong IsReady() const;
        ulong Init(bool);
        void Destroy();
        void DownSample2x2(render::RenderContext&, WrapArray<shared_ptr<render::RenderTargets>> const&,
                           render::Texture const&, unsigned int, bool);

        // data members, from how the methods use this: 40 bytes
        RenderToTextureHelper* field_0; // offset 0
        shared_ptr field_8;             // offset 8
        shared_ptr field_24;            // offset 24
    };

    // 0x1009329f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DepthDownSamplerFilter::DepthDownSamplerFilter(graphicutils::RenderToTextureHelper*): jumps straight to the base-object constructor

    // 0x100932b50, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DepthDownSamplerFilter::~DepthDownSamplerFilter(): jumps straight to the base-object destructor

    // 0x100934af0, 64 bytes, inline, placed by class name and debug map
    // DepthDownSamplerFilter::IsReady() const
    ulong DepthDownSamplerFilter::IsReady() {
        bool bVar1;
        undefined7 extraout_var;
        ulong uVar2;

        if (field_0 == (RenderToTextureHelper*)0) {
            uVar2 = 0;
        } else {
            uVar2 = 0;
            bVar1 = operator!=((shared_ptr*)field_8, (_func_decltype_nullptr*)0);
            if (bVar1) {
                bVar1 = operator!=((shared_ptr*)field_24, (_func_decltype_nullptr*)0);
                uVar2 = CONCAT71(extraout_var, bVar1) & 4294967295;
            }
        }
        return uVar2;
    }

    // 0x100938bd0, 128 bytes, base-object constructor, inline, placed by class name
    // DepthDownSamplerFilter::DepthDownSamplerFilter(graphicutils::RenderToTextureHelper*)
    void DepthDownSamplerFilter::DepthDownSamplerFilter(RenderToTextureHelper* param_1) {
        field_0 = param_1;
        new (field_8, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_24, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        if (param_1 == (RenderToTextureHelper*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("renderToTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "shaders/../filters/DepthDownSamplerFilter.h",
                      21, (char*)0);
        }
    }

    // 0x100938c50, 80 bytes, base-object destructor, inline, placed by class name
    // DepthDownSamplerFilter::~DepthDownSamplerFilter()
    void DepthDownSamplerFilter::~DepthDownSamplerFilter() {
        Destroy(this);
        field_24->~shared_ptr();
        field_8->~shared_ptr();
    }

} // namespace jag::postprocess

namespace jag::graphics {
    class RT7PixelShaderSourceStream {
    public:
        // virtual methods in vtable order
        virtual ~RT7PixelShaderSourceStream();
        RT7PixelShaderSourceStream(ShaderSource const&, EffectList const&, render::ShaderVariablePrecision,
                                   render::ShaderVariablePrecision, render::ShaderVariablePrecision,
                                   render::ShaderVariablePrecision, render::ShaderVariablePrecision,
                                   render::ShaderVariablePrecision, unsigned int);
        RT7PixelShaderSourceStream(EffectList const&, render::ShaderVariablePrecision, render::ShaderVariablePrecision,
                                   render::ShaderVariablePrecision, render::ShaderVariablePrecision,
                                   render::ShaderVariablePrecision, render::ShaderVariablePrecision, unsigned int);

        // data members, from how the methods use this: 136 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        undefined* field_16; // offset 16
        char _unknown_24[104];
        undefined* field_128; // offset 128
    };

    // 0x100934790, 192 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // RT7PixelShaderSourceStream::RT7PixelShaderSourceStream(EffectList const&, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, unsigned int)
    void RT7PixelShaderSourceStream::RT7PixelShaderSourceStream(undefined8 param_1, undefined4 param_3,
                                                                undefined4 param_4, undefined4 param_5,
                                                                undefined4 param_6, undefined4 param_7,
                                                                undefined4 param_8, undefined4 param_9) {
        undefined* puVar1;
        undefined** this_00;

        this_00 = &field_128;
        new (this_00) std::ios();
        new (this) RT7ShaderSourceStream(PTR_VTT_100ee6fa8 + 8, 35632, param_1, param_3, param_4, param_5, param_6,
                                         param_7, param_8, param_9, this_00);
        puVar1 = PTR_vtable_100ee8890;
        field_0 = PTR_vtable_100ee8890 + 24;
        field_128 = puVar1 + 112;
        field_16 = puVar1 + 72;
    }

    // 0x100934880, 48 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // RT7PixelShaderSourceStream::~RT7PixelShaderSourceStream()
    void RT7PixelShaderSourceStream::~RT7PixelShaderSourceStream() {
        ~RT7PixelShaderSourceStream(this);
        (&field_128)->~ios();
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x100933670, 48 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>& Matrix44Inverse<float>(Matrix44T<float>&, float*, Matrix44T<float> const&)
    Matrix44T* Matrix44Inverse<float>(Matrix44T* param_1, float* param_2, Matrix44T* param_3) {
        Matrix44T<float>::operator=((Matrix44T<float>*)param_1, param_3);
        param_1->Invert(param_2);
        return param_1;
    }

} // namespace jag::math
