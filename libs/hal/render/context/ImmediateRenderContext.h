// libs/hal/render/context/ImmediateRenderContext.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class ImmediateRenderContext {
    public:
        GetDesc() const;
        bool IsInsideBeginEnd() const;
        GetThreadID() const;
        GetStats() const;
        GetGLCoreProfileVerMinor() const;
        void GetOpenGLContext() const;
        void GetOpenGLPixelFormat() const;
        Create(RenderContextDesc const&);
        void SetReadyState(RenderContextReadyState);
        BackendInit(RenderContextDesc const&);
        void Init();
        void ClearState(bool);
        void ClearSwapChain();
        void SetVSyncMode(VSyncMode);
        void ReleaseNativeResources();
        void Destroy();
        bool IsContextThread() const;
        void OnDeviceLost();
        void DestroyRenderingResources();
        void ClearRenderTargets(RenderTargets const*, math::Vector4T<float> const*, unsigned long);
        void SetRenderTargets(RenderTargets const*);
        void ClearRenderTargets(math::Vector4T<float> const*, unsigned long) const;
        void ClearDepthStencilTarget(RenderTargets const*, float, unsigned int, unsigned int);
        void ClearDepthStencilTarget(float, unsigned int, unsigned int) const;
        Begin();
        GetBackBuffer() const;
        void SetBlendState(BlendState const*);
        void End();
        void Present();
        void SetVertexBuffer(VertexBuffer const*, unsigned int, unsigned int);
        void SetVertexBuffers(unsigned int, VertexBuffer const* const*, unsigned int const*, unsigned int const*);
        void SetVSTextureSamplerPair(unsigned int, Texture const*, unsigned int, SamplerState const*, bool);
        void SetPSTextureSamplerPair(unsigned int, Texture const*, int, SamplerState const*, bool);
        void BindTexture(Texture const&, unsigned int);
        void ValidateTextureSamplerPair(unsigned int, Texture const*, int);
        void SetCSTextureSamplerPair(unsigned int, Texture const*, int, SamplerState const*, bool);
        void SetVSShaderConstBuffer(unsigned int, ShaderConstBuffer const*);
        void SetShaderConstBuffer(unsigned int, ShaderConstBuffer const*);
        void SetPSShaderConstBuffer(unsigned int, ShaderConstBuffer const*);
        void SetCSShaderConstBuffer(unsigned int, ShaderConstBuffer const*);
        void BindDrawCallState(DrawCallState const&);
        void SetInputAssemblerState(InputAssemblerState const*);
        void SetRenderPipelineState(RenderPipelineState const*);
        void SetOutputMergerState(OutputMergerState const*);
        void BindDrawCallState(DrawCallState&);
        void BindDispatchCallState(DispatchCallState const&);
        void SetComputePipelineState(ComputePipelineState const*);
        void DrawPrimitives(DrawCallState&, PrimitiveType, int, int);
        void DrawPrimitives(PrimitiveType, int, int);
        void DrawMultiPrimitives(DrawCallState&, PrimitiveType, unsigned int, int const*, int const*);
        void DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*);
        void DrawIndexedPrimitives(DrawCallState&, PrimitiveType, unsigned int, unsigned int);
        void DrawIndexedPrimitives(PrimitiveType, unsigned int, unsigned int, IndexType);
        void DrawMultiIndexedPrimitives(DrawCallState&, PrimitiveType, unsigned int, int const*, void const* const*);
        void DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*, IndexType);
        void DispatchCompute(DispatchCallState&, unsigned int, unsigned int, unsigned int);
        void DispatchCompute(unsigned int, unsigned int, unsigned int);
        void BackendBegin();
        void SetDepthStencilState(DepthStencilState const*);
        void SetRasteriserState(RasteriserState const*);
        void BackendEnd();
        ImmediateRenderContext();
        ~ImmediateRenderContext();
        void GetReadyState() const;
        void SetViewports(Viewport const*, unsigned long);
        void SetScissorRectangle(bool, int, int, int, int);
        void SetShaders(ShaderProgram const*);
        void SetIndexBuffer(IndexBuffer const*, unsigned int);
        void SetVertexDeclaration(VertexDeclaration const*);
        void MemoryBarrier(unsigned int);
        void CopyColourTargetData(Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                  unsigned int, unsigned int, unsigned int, CubeFace);
        void ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&,
                                     math::Rect<unsigned int> const&);
        void ReadColourTargetData(void*, Format, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                  unsigned int);
        void FlushTextureCache();
        void SetView(shared_ptr<OpenGLView> const&);
        void LockContext();
        void UnlockContext();
        bool IsLocked() const;
        bool IsInvalidTextureBound() const;
        void SetActiveTextureSlot(unsigned int);
        void BindInvalidTexture();
        void InitBackBuffer();
        void CreateRenderingResources();
        void EnableGLExtensions();
        void SetGLShaderImage(unsigned int, Texture const&, Access);
        void BackendDestroy();
        void CheckDefaultVAOBound();
        void SetVertexBuffers(unsigned int, unsigned int const*, unsigned int const*, unsigned int const*);
        void SetIndexBuffer(unsigned int, unsigned int);
        void SetDefaultVAO();
        void SetCSTextureImage(unsigned int, Texture const*, Access);
        void SetDepthStencilStateDirect(DepthStencilState::Desc const&);
        void SetRasteriserStateDirect(RasteriserState::Desc const&);
        void SetBlendStateDirect(BlendState::Desc const&);
        void SetShaderStorageBuffer(unsigned int, ShaderStorageBuffer const*);
        void ValidateState();
        GetBackBufferWidth() const;
        GetBackBufferHeight() const;
        void BackendSetVSyncMode(VSyncMode, int);
        int GetVSyncMode() const;
        bool IsMinCoreProfile() const;
        void BindImageTexture(unsigned int, Texture const*, int, LockType);
        BackendPresent();
        ulong BackendLockContext();
        void BackendUnlockContext();
        void FinishRendering();
        void UpdateBackBuffer(unsigned int, unsigned int);
        RenderTargets** GetStateCache() const;
        RenderTargets** GetStateCache();
        int GetGLCoreProfileVerMajor() const;
        void lock();
        void unlock();

        // data members, from how the methods use this: 3168 bytes
        bool m_insideBeginEnd; // offset 0
        char _unknown_1[11];
        undefined1 field_12; // offset 12
        undefined1 field_13; // offset 13
        undefined1 field_14; // offset 14
        char _unknown_15[3];
        char field_18; // offset 18
        char _unknown_19[21];
        undefined1 field_40; // offset 40
        char _unknown_41[95];
        ShaderProgram* field_136; // offset 136
        char _unknown_144[8];
        undefined8 m_threadID;              // offset 152
        int field_160;                      // offset 160
        int m_gLCoreProfileVerMajor;        // offset 164
        undefined4 m_gLCoreProfileVerMinor; // offset 168
        CoordMapSquare field_172;           // offset 172
        char _unknown_184[1000];
        undefined1 field_1184; // offset 1184
        char _unknown_1185[1023];
        RenderTargets* m_pStateCache; // offset 2208
        uint field_2216;              // offset 2216
        int field_2220;               // offset 2220
        char _unknown_2224[192];
        undefined2 field_2416; // offset 2416
        char field_2418;       // offset 2418
        undefined5 field_2419; // offset 2419
        undefined8 field_2424; // offset 2424
        char field_2432;       // offset 2432
        undefined7 field_2433; // offset 2433
        undefined8 field_2440; // offset 2440
        undefined8 field_2448; // offset 2448
        undefined8 field_2456; // offset 2456
        undefined4 field_2464; // offset 2464
        undefined8 field_2468; // offset 2468
        char _unknown_2476[1];
        undefined8 field_2477; // offset 2477
        undefined8 field_2485; // offset 2485
        char _unknown_2493[3];
        undefined8 field_2496; // offset 2496
        undefined8 field_2504; // offset 2504
        undefined8 field_2512; // offset 2512
        undefined8 field_2520; // offset 2520
        undefined8 field_2528; // offset 2528
        undefined8 field_2536; // offset 2536
        undefined8 field_2544; // offset 2544
        undefined8 field_2552; // offset 2552
        undefined4 field_2560; // offset 2560
        uint field_2564;       // offset 2564
        char _unknown_2568[552];
        bool field_3120; // offset 3120
        char _unknown_3121[19];
        int field_3140;  // offset 3140
        int m_vSyncMode; // offset 3144
        char _unknown_3148[4];
        ID field_3152;                       // offset 3152
        Singleton<RenderDevice>* field_3160; // offset 3160
    };

    // 0x1003a2880, 32 bytes, inline, placed by class name
    // ImmediateRenderContext::GetOpenGLContext() const
    void ImmediateRenderContext::GetOpenGLContext() {
        _objc_retainAutoreleaseReturnValue(field_3152);
    }

    // 0x100be6a40, 32 bytes, inline, placed by class name
    // ImmediateRenderContext::GetOpenGLPixelFormat() const
    void ImmediateRenderContext::GetOpenGLPixelFormat() {
        _objc_retainAutoreleaseReturnValue(field_3160);
    }

    // 0x100c162e0, 32 bytes, inline, placed by class name and debug map
    // ImmediateRenderContext::IsContextThread() const
    bool ImmediateRenderContext::IsContextThread() {
        return this_thread::GetThreadID() == m_threadID;
    }

    // 0x100c16bb0, 48 bytes, inline, placed by class name
    // ImmediateRenderContext::GetBackBuffer() const
    undefined8 ImmediateRenderContext::GetBackBuffer() {
        undefined8 uVar2;

        if ((&field_784)->operator_cast_to_bool()) {
            uVar2 = eastl::optional<RenderTargets>::operator*((optional<RenderTargets>*)&field_784);
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x100c1b860, 16 bytes, inline, placed by class name
    // ImmediateRenderContext::GetReadyState() const
    void ImmediateRenderContext::GetReadyState() {
        (&field_40)->operator_cast_to_RenderContextReadyState();
    }

    // 0x100c25a50, 80 bytes, inline, placed by class name
    // ImmediateRenderContext::IsLocked() const
    bool ImmediateRenderContext::IsLocked() {
        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.h",
                      213, (char*)0);
        }
        return field_160 != 0;
    }

    // 0x100c287d0, 80 bytes, inline, placed by class name
    // ImmediateRenderContext::GetBackBufferWidth() const
    undefined4 ImmediateRenderContext::GetBackBufferWidth() {
        bool bVar1;
        undefined4 uVar2;
        RenderTargets* this_00;
        vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar3;
        undefined4* puVar4;

        bVar1 = (&field_784)->operator_cast_to_bool();
        uVar2 = 0;
        if (bVar1) {
            this_00 = (RenderTargets*)eastl::optional<RenderTargets>::operator->((optional<RenderTargets>*)&field_784);
            this_01 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                          this_00->GetColourTargetTextures();
            puVar3 = (undefined8*)eastl::
                vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                    this_01, 0);
            puVar4 = (undefined4*)(*puVar3)->second();
            uVar2 = *puVar4;
        }
        return uVar2;
    }

    // 0x100c28820, 80 bytes, inline, placed by class name
    // ImmediateRenderContext::GetBackBufferHeight() const
    undefined4 ImmediateRenderContext::GetBackBufferHeight() {
        bool bVar1;
        undefined4 uVar2;
        RenderTargets* this_00;
        vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar3;
        long lVar4;

        bVar1 = (&field_784)->operator_cast_to_bool();
        uVar2 = 0;
        if (bVar1) {
            this_00 = (RenderTargets*)eastl::optional<RenderTargets>::operator->((optional<RenderTargets>*)&field_784);
            this_01 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                          this_00->GetColourTargetTextures();
            puVar3 = (undefined8*)eastl::
                vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                    this_01, 0);
            lVar4 = (*puVar3)->second();
            uVar2 = *(undefined4*)(lVar4 + 4);
        }
        return uVar2;
    }

    // 0x100c29360, 16 bytes, inline, placed by class name
    // ImmediateRenderContext::GetStateCache() const
    /* ImmediateRenderContext::GetStateCache() */

    RenderTargets** ImmediateRenderContext::GetStateCache() {
        return &m_pStateCache;
    }

    // 0x100c373c0, 16 bytes, inline, placed by class name
    // ImmediateRenderContext::GetGLCoreProfileVerMajor() const
    int ImmediateRenderContext::GetGLCoreProfileVerMajor() {
        return m_gLCoreProfileVerMajor;
    }

    // 0x100c3cc10, 16 bytes, inline, placed by class name
    // ImmediateRenderContext::lock()
    void ImmediateRenderContext::lock() {
        LockContext(this);
    }

    // 0x100c3cc30, 16 bytes, inline, placed by class name
    // ImmediateRenderContext::unlock()
    void ImmediateRenderContext::unlock() {
        UnlockContext(this);
    }

} // namespace jag::render
