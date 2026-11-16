// libs/graphics/primitive/debugbasic/DebugImageRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class DebugImageRender {
    public:
        DebugImageRender(int, int, int);
        CreateRenderingResources();
        void DestroyRenderingResources();
        void RenderImage2DGroup(
            render::RenderContext&, render::DrawCallState const&, render::Viewport const&,
            math::Matrix44T<float> const&,
            eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator> const&, bool);
        void RenderImageCubeGroup(
            render::RenderContext&, render::DrawCallState const&, render::Viewport const&,
            math::Matrix44T<float> const&,
            eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator> const&, bool);
        void RenderImage3DGroup(
            render::RenderContext&, render::DrawCallState const&, render::Viewport const&,
            math::Matrix44T<float> const&,
            eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator> const&, bool);
        void OnEndFrame();
        ~DebugImageRender();

        // data members, from how the methods use this: 472 bytes
        char _unknown_0[8];
        ulong field_8;              // offset 8
        PrimVertPosUVCol* field_16; // offset 16
        int field_24;               // offset 24
        undefined4 field_28;        // offset 28
        char _unknown_32[176];
        InputAssemblerState field_208; // offset 208
        char _unknown_400[72];
    };

    // 0x1009c92b0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DebugImageRender::~DebugImageRender(): jumps straight to the base-object destructor

    // 0x1009cce10, 160 bytes, base-object destructor, inline, placed by class name
    // DebugImageRender::~DebugImageRender()
    void DebugImageRender::~DebugImageRender() {
        DestroyRenderingResources(this);
        (&field_464)->~SamplerState();
        (&field_400)->~SamplerState();
        field_208->~InputAssemblerState();
        (&field_120)->~IndexBuffer();
        (&field_32)->~DynamicBuffer();
        ~Array();
    }

} // namespace jag
