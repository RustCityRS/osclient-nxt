// libs/hal/render/context/ImmediateRenderContext.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class ImmediateRenderContext {
    public:
        void GetDesc() const;
        bool IsInsideBeginEnd() const;
        uint64_t GetThreadID() const;
        uint8_t* GetStats() const;
        uint32_t GetGLCoreProfileVerMinor() const;
        void GetOpenGLContext() const;
        void GetOpenGLPixelFormat() const;
        uint64_t Create(const RenderContextDesc& renderContextDesc);
        void SetReadyState(RenderContextReadyState renderContextReadyState);
        uint64_t BackendInit(const RenderContextDesc& renderContextDesc);
        void Init();
        void ClearState(bool arg1);
        void ClearSwapChain();
        void SetVSyncMode(VSyncMode vSyncMode);
        void ReleaseNativeResources();
        void Destroy();
        bool IsContextThread() const;
        void OnDeviceLost();
        void DestroyRenderingResources();
        void ClearRenderTargets(const RenderTargets* renderTargets, const math::Vector4T<float>* vector4,
                                unsigned long arg3);
        void SetRenderTargets(const RenderTargets* renderTargets);
        void ClearRenderTargets(const math::Vector4T<float>* vector4, unsigned long arg2) const;
        void ClearDepthStencilTarget(const RenderTargets* renderTargets, float arg2, unsigned int arg3,
                                     unsigned int arg4);
        void ClearDepthStencilTarget(float arg1, unsigned int arg2, unsigned int arg3) const;
        uint8_t Begin();
        uint64_t GetBackBuffer() const;
        void SetBlendState(const BlendState* blendState);
        void End();
        void Present();
        void SetVertexBuffer(const VertexBuffer* vertexBuffer, unsigned int arg2, unsigned int arg3);
        void SetVertexBuffers(unsigned int arg1, VertexBuffer const* const* arg2, const unsigned int* arg3,
                              const unsigned int* arg4);
        void SetVSTextureSamplerPair(unsigned int arg1, const Texture* texture, unsigned int arg3,
                                     const SamplerState* samplerState, bool arg5);
        void SetPSTextureSamplerPair(unsigned int arg1, const Texture* texture, int arg3,
                                     const SamplerState* samplerState, bool arg5);
        void BindTexture(const Texture& texture, unsigned int arg2);
        void ValidateTextureSamplerPair(unsigned int arg1, const Texture* texture, int arg3);
        void SetCSTextureSamplerPair(unsigned int arg1, const Texture* texture, int arg3,
                                     const SamplerState* samplerState, bool arg5);
        void SetVSShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer);
        void SetShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer);
        void SetPSShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer);
        void SetCSShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer);
        void BindDrawCallState(const DrawCallState& drawCallState);
        void SetInputAssemblerState(const InputAssemblerState* inputAssemblerState);
        void SetRenderPipelineState(const RenderPipelineState* renderPipelineState);
        void SetOutputMergerState(const OutputMergerState* outputMergerState);
        void BindDrawCallState(DrawCallState& drawCallState);
        void BindDispatchCallState(const DispatchCallState& dispatchCallState);
        void SetComputePipelineState(const ComputePipelineState* computePipelineState);
        void DrawPrimitives(DrawCallState& drawCallState, PrimitiveType primitiveType, int arg3, int arg4);
        void DrawPrimitives(PrimitiveType primitiveType, int arg2, int arg3);
        void DrawMultiPrimitives(DrawCallState& drawCallState, PrimitiveType primitiveType, unsigned int arg3,
                                 const int* arg4, const int* arg5);
        void DrawMultiPrimitives(PrimitiveType primitiveType, unsigned int arg2, const int* arg3, const int* arg4);
        void DrawIndexedPrimitives(DrawCallState& drawCallState, PrimitiveType primitiveType, unsigned int arg3,
                                   unsigned int arg4);
        void DrawIndexedPrimitives(PrimitiveType primitiveType, unsigned int arg2, unsigned int arg3,
                                   IndexType indexType);
        void DrawMultiIndexedPrimitives(DrawCallState& drawCallState, PrimitiveType primitiveType, unsigned int arg3,
                                        const int* arg4, void const* const* arg5);
        void DrawMultiIndexedPrimitives(PrimitiveType primitiveType, unsigned int arg2, const int* arg3,
                                        void const* const* arg4, IndexType indexType);
        void DispatchCompute(DispatchCallState& dispatchCallState, unsigned int arg2, unsigned int arg3,
                             unsigned int arg4);
        void DispatchCompute(unsigned int arg1, unsigned int arg2, unsigned int arg3);
        void BackendBegin();
        void SetDepthStencilState(const DepthStencilState* depthStencilState);
        void SetRasteriserState(const RasteriserState* rasteriserState);
        void BackendEnd();
        ImmediateRenderContext();
        ~ImmediateRenderContext();
        void GetReadyState() const;
        void SetViewports(const Viewport* viewport, unsigned long arg2);
        void SetScissorRectangle(bool arg1, int arg2, int arg3, int arg4, int arg5);
        void SetShaders(const ShaderProgram* shaderProgram);
        void SetIndexBuffer(const IndexBuffer* indexBuffer, unsigned int arg2);
        void SetVertexDeclaration(const VertexDeclaration* vertexDeclaration);
        void MemoryBarrier(unsigned int arg1);
        void CopyColourTargetData(const Texture* texture, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                  unsigned int arg5, unsigned int arg6, unsigned int arg7, unsigned int arg8,
                                  unsigned int arg9, CubeFace cubeFace);
        void ResolveColourTargetData(const RenderTargets* renderTargets, unsigned int arg2,
                                     const math::Rect<unsigned int>& rect1, const math::Rect<unsigned int>& rect2);
        void ReadColourTargetData(void* arg1, Format format, unsigned int arg3, unsigned int arg4, unsigned int arg5,
                                  unsigned int arg6, unsigned int arg7, unsigned int arg8);
        void FlushTextureCache();
        void SetView(const shared_ptr<OpenGLView>& openGLView);
        void LockContext();
        void UnlockContext();
        bool IsLocked() const;
        bool IsInvalidTextureBound() const;
        void SetActiveTextureSlot(unsigned int arg1);
        void BindInvalidTexture();
        void InitBackBuffer();
        void CreateRenderingResources();
        void EnableGLExtensions();
        void SetGLShaderImage(unsigned int arg1, const Texture& texture, Access access);
        void BackendDestroy();
        void CheckDefaultVAOBound();
        void SetVertexBuffers(unsigned int arg1, const unsigned int* arg2, const unsigned int* arg3,
                              const unsigned int* arg4);
        void SetIndexBuffer(unsigned int arg1, unsigned int arg2);
        void SetDefaultVAO();
        void SetCSTextureImage(unsigned int arg1, const Texture* texture, Access access);
        void SetDepthStencilStateDirect(const DepthStencilState::Desc& desc);
        void SetRasteriserStateDirect(const RasteriserState::Desc& desc);
        void SetBlendStateDirect(const BlendState::Desc& desc);
        void SetShaderStorageBuffer(unsigned int arg1, const ShaderStorageBuffer* shaderStorageBuffer);
        void ValidateState();
        uint32_t GetBackBufferWidth() const;
        uint32_t GetBackBufferHeight() const;
        void BackendSetVSyncMode(VSyncMode vSyncMode, int arg2);
        VSyncMode GetVSyncMode() const;
        bool IsMinCoreProfile() const;
        void BindImageTexture(unsigned int arg1, const Texture* texture, int arg3, LockType lockType);
        uint8_t BackendPresent();
        unsigned long BackendLockContext();
        void BackendUnlockContext();
        void FinishRendering();
        void UpdateBackBuffer(unsigned int arg1, unsigned int arg2);
        RenderContextStateCache* GetStateCache() const;
        RenderContextStateCache* GetStateCache();
        MetaDataKey GetGLCoreProfileVerMajor() const;
        void lock();
        void unlock();

    private:
        bool m_insideBeginEnd;
        uint8_t _unknown_1[11];
        uint8_t field_12;
        uint8_t field_13;
        uint8_t field_14;
        uint8_t _unknown_15[3];
        char field_18;
        uint8_t field_19;
        uint8_t _unknown_20[116];
        ShaderProgram* field_136;
        uint8_t _unknown_144[8];
        uint64_t m_threadID;
        int field_160;
        MetaDataKey m_gLCoreProfileVerMajor;
        uint32_t m_gLCoreProfileVerMinor;
        CoordMapSquare field_172;
        uint8_t _unknown_184[2024];
        RenderTargets* m_pStateCache;
        unsigned int field_2216;
        int field_2220;
        uint8_t _unknown_2224[48];
        unsigned int field_2272;
        uint8_t _unknown_2276[140];
        uint16_t field_2416;
        char field_2418;
        uint8_t field_2419[5];
        uint64_t field_2424;
        char field_2432;
        uint8_t field_2433[7];
        uint64_t field_2440;
        uint64_t field_2448;
        uint64_t field_2456;
        uint32_t field_2464;
        uint64_t field_2468;
        uint8_t _unknown_2476[1];
        uint64_t field_2477;
        uint64_t field_2485;
        uint8_t _unknown_2493[3];
        uint64_t field_2496;
        uint64_t field_2504;
        uint64_t field_2512;
        uint64_t field_2520;
        uint64_t field_2528;
        uint64_t field_2536;
        uint64_t field_2544;
        uint64_t field_2552;
        uint32_t field_2560;
        unsigned int field_2564;
        uint8_t _unknown_2568[552];
        bool field_3120;
        uint8_t _unknown_3121[19];
        int field_3140;
        VSyncMode m_vSyncMode;
        uint8_t _unknown_3148[4];
        ID field_3152;
        Singleton<RenderDevice>* field_3160;
    };

    // 0x1003a2880
    void ImmediateRenderContext::GetOpenGLContext() const {
        _objc_retainAutoreleaseReturnValue(field_3152);
    }

    // 0x100be6a40
    void ImmediateRenderContext::GetOpenGLPixelFormat() const {
        _objc_retainAutoreleaseReturnValue(field_3160);
    }

    // 0x100c162e0
    bool ImmediateRenderContext::IsContextThread() const {
        return this_thread::GetThreadID() == m_threadID;
    }

    // 0x100c16bb0
    uint64_t ImmediateRenderContext::GetBackBuffer() const {
        uint64_t uVar2;

        if ((&field_784)->operator_cast_to_bool() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = *field_784;
        }
        return uVar2;
    }

    // 0x100c1b860
    void ImmediateRenderContext::GetReadyState() const {
        (&field_40)->operator_cast_to_RenderContextReadyState();
    }

    // 0x100c25a50
    bool ImmediateRenderContext::IsLocked() const {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.h",
                      213, nullptr);
        }
        return field_160 != 0;
    }

    // 0x100c287d0
    uint32_t ImmediateRenderContext::GetBackBufferWidth() const {
        RenderTargets* this_00;
        vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_01;
        uint64_t* puVar3;
        uint32_t* puVar4;

        bool cVar1 = (&field_784)->operator_cast_to_bool();
        uint32_t uVar2 = 0;
        if (cVar1) {
            this_00 = (RenderTargets*)field_784.operator->();
            this_01 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          this_00->GetColourTargetTextures();
            puVar3 = (uint64_t*)(*this_01)[0];
            puVar4 = (uint32_t*)(*puVar3)->second();
            uVar2 = *puVar4;
        }
        return uVar2;
    }

    // 0x100c28820
    uint32_t ImmediateRenderContext::GetBackBufferHeight() const {
        RenderTargets* this_00;
        vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_01;
        uint64_t* puVar3;
        long lVar4;

        bool cVar1 = (&field_784)->operator_cast_to_bool();
        uint32_t uVar2 = 0;
        if (cVar1) {
            this_00 = (RenderTargets*)field_784.operator->();
            this_01 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          this_00->GetColourTargetTextures();
            puVar3 = (uint64_t*)(*this_01)[0];
            lVar4 = (*puVar3)->second();
            uVar2 = *(uint32_t*)(lVar4 + 4);
        }
        return uVar2;
    }

    // 0x100c29360
    RenderContextStateCache* ImmediateRenderContext::GetStateCache() const {
        return (RenderContextStateCache*)&m_pStateCache;
    }

    // 0x100c373c0
    MetaDataKey ImmediateRenderContext::GetGLCoreProfileVerMajor() const {
        return m_gLCoreProfileVerMajor;
    }

    // 0x100c3cc10
    void ImmediateRenderContext::lock() {
        LockContext();
    }

    // 0x100c3cc30
    void ImmediateRenderContext::unlock() {
        UnlockContext();
    }

} // namespace jag::render
