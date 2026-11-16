// libs/hal/render/textures/OGL/TextureRenderBuffer_OGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::fixedfunction {
    // 0x100be7690, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(render::RenderTargets::Create(char const*, unsigned int)::$_4&&): jumps straight to the base-object constructor

    // 0x100be76a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(render::RenderTargets::Create(char const*, unsigned int)::$_5&&): jumps straight to the base-object constructor

    // 0x100be7a70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_6, void>(render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_6&&): jumps straight to the base-object constructor

    // 0x100be7a80, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_7, void>(render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_7&&): jumps straight to the base-object constructor

    // 0x100be8090, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&): jumps straight to the base-object constructor

    // 0x100be8160, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&): jumps straight to the base-object constructor

    // 0x100be8240, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&): jumps straight to the base-object constructor

    // 0x100be8260, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11, void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11&&): jumps straight to the base-object constructor

    // 0x100be8280, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&): jumps straight to the base-object constructor

    // 0x100be8340, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&): jumps straight to the base-object constructor

    // 0x100be8400, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&): jumps straight to the base-object constructor

    // 0x100be85b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Invalidate() const::$_15, void>(render::RenderTargets::Invalidate() const::$_15&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction

namespace jag::render {
    class TextureRenderBuffer {
    public:
        // virtual methods in vtable order
        virtual ~TextureRenderBuffer();
        virtual void Destroy();
        virtual ulong IsCreatedNative() const;
        TextureRenderBuffer(char const*);
        void Create(Texture::Desc const&);
        void BindNativeBackBuffer(unsigned int);
        GetBackBufferFormat(unsigned int);
        bool IsNativeBackBuffer() const;
        void SetNativeBackBufferSize(unsigned int, unsigned int);
        void GetNativeRenderBufferId() const;
        void BindBackColourRenderBuffer();
        void BindBackDepthRenderBuffer();

        // data members, from how the methods use this: 504 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        char _unknown_12[4];
        int field_16; // offset 16
        char _unknown_20[4];
        uint field_24;       // offset 24
        uint field_28;       // offset 28
        undefined4 field_32; // offset 32
        undefined4 field_36; // offset 36
        undefined4 field_40; // offset 40
        undefined4 field_44; // offset 44
        undefined4 field_48; // offset 48
        undefined4 field_52; // offset 52
        undefined4 field_56; // offset 56
        undefined4 field_60; // offset 60
        undefined4 field_64; // offset 64
        undefined4 field_68; // offset 68
        undefined4 field_72; // offset 72
        undefined4 field_76; // offset 76
        undefined4 field_80; // offset 80
        undefined4 field_84; // offset 84
        uint field_88;       // offset 88
        undefined1 field_92; // offset 92
        char _unknown_93[171];
        float field_264; // offset 264
        char _unknown_268[4];
        RadialHighlightState field_272; // offset 272
        $_10 field_296;                 // offset 296
        char _unknown_300[4];
        SamplerState field_304; // offset 304
        char _unknown_360[72];
        undefined1 field_432; // offset 432
        char _unknown_433[15];
        SamplerState field_448; // offset 448
    };

    // 0x100be6f50, 16 bytes, inline, placed by class name and debug map
    // TextureRenderBuffer::GetNativeRenderBufferId() const
    void TextureRenderBuffer::GetNativeRenderBufferId() {
        GetNativeTextureId();
    }

} // namespace jag::render
