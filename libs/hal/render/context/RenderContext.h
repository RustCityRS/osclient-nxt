// libs/hal/render/context/RenderContext.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class DeferredFrameData {
    public:
        DeferredFrameData();
        void Clear();
        ~DeferredFrameData();

    private:
        uint8_t _unknown_0[72];
        uint64_t field_72;
        uint8_t _unknown_80[64];
        SyncFence field_144;
        uint8_t _unknown_152[224];
    };

    class DeferredRenderFunction {
    public:
        ~DeferredRenderFunction();
        DeferredRenderFunction(
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback);
        DeferredRenderFunction(DeferredRenderFunction&& callback);
        DeferredRenderFunction(const DeferredRenderFunction& callback);

        uint8_t _unknown_0[1];
    };

    class RenderContext : public RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~RenderContext();
        virtual void OnDeviceLost();
        ImmediateRenderContext GetImmediateContextUnsafe() const;
        void SetScissorRectangle(bool arg1, const Viewport& viewport);
        void GetStats() const;
        void GetFPSCounter();
        void IsMinCoreProfile() const;
        void AddAliveObject(const RenderResource* renderResource);
        bool IsKeepAliveSharedPtr<RenderTargets>(const shared_ptr<RenderTargets>& renderTargets) const;
        bool IsLocked() const;
        void SetDefaultVAO();
        void IsDeviceResetInProgress() const;
        RenderContext();
        void GetDesc() const;
        void StopRenderThread();
        void Shutdown();
        bool Init(const RenderContextDesc& renderContextDesc);
        uint64_t PostInit(const RenderContextDesc& renderContextDesc);
        void RunSynchronouslyOnRenderThread(
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback,
            bool arg2);
        unsigned long ShouldDefer() const;
        void GetReadyState() const;
        void RunImmediatelyOnRenderThread(
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback);
        auto AllocateScratch(unsigned long arg1, unsigned long arg2);
        void RunOnRenderThread(
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback);
        void RunImmediateRenderFunction(bool arg1);
        void UnlockDeadObjectsMutex() const;
        void RenderThread(const RenderContextDesc& renderContextDesc);
        void RenderThreadMainLoop();
        void ResetKeepAliveSharedPtrs(OwnerThread ownerThread);
        void Begin();
        uint64_t BeginInternal(bool arg1);
        void CleanUpDeadObjects();
        void KeepAliveSharedPtr(const shared_ptr<void const>& arg1, OwnerThread ownerThread);
        void AddAliveObject(const void* arg1);
        void LockDeadObjectsMutex() const;
        void End();
        void EndInternal(
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback);
        void Present();
        void SetInputAssemblerState(const InputAssemblerState* inputAssemblerState);
        void BindDrawCallState(DrawCallState& drawCallState);
        void IsContextThread() const;
        void BindDrawCallStateInternal(const DrawCallState& drawCallState);
        unsigned long IsObjectAlive(const RenderResource* renderResource) const;
        void SkipCurrentDrawCall();
        void BindDispatchCallState(DispatchCallState& dispatchCallState);
        void BindDispatchCallStateInternal(const DispatchCallState& dispatchCallState);
        void SkipCurrentDispatchCall();
        void SetViewports(const Viewport* viewport, unsigned long arg2);
        void SetScissorRectangle(bool arg1, int arg2, int arg3, int arg4, int arg5);
        void SetRenderTargets(const RenderTargets* renderTargets);
        void ClearRenderTargets(const RenderTargets* renderTargets, const math::Vector4T<float>* vector4,
                                unsigned long arg3);
        void ClearDepthStencilTarget(float arg1, unsigned int arg2, unsigned int arg3);
        bool IsCurrentRenderTargetAlive(const RenderTargets* renderTargets) const;
        void ClearDepthStencilTarget(const RenderTargets* renderTargets, float arg2, unsigned int arg3,
                                     unsigned int arg4);
        void SetShaders(const ShaderProgram* shaderProgram);
        void SetVertexBuffers(unsigned int arg1, VertexBuffer const* const* arg2, const unsigned int* arg3,
                              const unsigned int* arg4);
        void SetVertexBuffer(const VertexBuffer* vertexBuffer, unsigned int arg2, unsigned int arg3);
        void SetIndexBuffer(const IndexBuffer* indexBuffer, unsigned int arg2);
        void SetVertexDeclaration(const VertexDeclaration* vertexDeclaration);
        void SetVSTextureSamplerPair(unsigned int arg1, const Texture* texture, unsigned int arg3,
                                     const SamplerState* samplerState, bool arg5);
        void SetPSTextureSamplerPair(unsigned int arg1, const Texture* texture, int arg3,
                                     const SamplerState* samplerState, bool arg5);
        void SetVSShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer);
        void SetPSShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer);
        void SetDepthStencilState(const DepthStencilState* depthStencilState);
        void SetRasteriserState(const RasteriserState* rasteriserState);
        void SetBlendState(const BlendState* blendState);
        void DrawPrimitives(PrimitiveType primitiveType, int arg2, int arg3);
        bool PreDrawCall();
        void PostDrawCall();
        void DrawPrimitives(DrawCallState& drawCallState, PrimitiveType primitiveType, int arg3, int arg4);
        void DrawMultiPrimitives(PrimitiveType primitiveType, unsigned int arg2, const int* arg3, const int* arg4);
        void DrawMultiPrimitives(DrawCallState& drawCallState, PrimitiveType primitiveType, unsigned int arg3,
                                 const int* arg4, const int* arg5);
        void DrawIndexedPrimitives(PrimitiveType primitiveType, unsigned int arg2, unsigned int arg3,
                                   IndexType indexType);
        void DrawIndexedPrimitives(DrawCallState& drawCallState, PrimitiveType primitiveType, unsigned int arg3,
                                   unsigned int arg4);
        void DrawMultiIndexedPrimitives(PrimitiveType primitiveType, unsigned int arg2, const int* arg3,
                                        void const* const* arg4, IndexType indexType);
        void DrawMultiIndexedPrimitives(DrawCallState& drawCallState, PrimitiveType primitiveType, unsigned int arg3,
                                        const int* arg4, void const* const* arg5);
        void DispatchCompute(unsigned int arg1, unsigned int arg2, unsigned int arg3);
        bool PreDispatchCall();
        void PostDispatchCall();
        void DispatchCompute(DispatchCallState& dispatchCallState, unsigned int arg2, unsigned int arg3,
                             unsigned int arg4);
        void MemoryBarrier(unsigned int arg1);
        void FinishRendering();
        bool IsInsideBeginEnd() const;
        void CopyColourTargetData(const Texture* texture, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                  unsigned int arg5, unsigned int arg6, unsigned int arg7, unsigned int arg8,
                                  unsigned int arg9, CubeFace cubeFace);
        void ResolveColourTargetData(const RenderTargets* renderTargets, unsigned int arg2,
                                     const math::Rect<unsigned int>& rect1, const math::Rect<unsigned int>& rect2);
        void ReadColourTargetData(const RenderTargets* renderTargets, void* arg2, Format format, unsigned int arg4,
                                  unsigned int arg5, unsigned int arg6, unsigned int arg7, unsigned int arg8,
                                  unsigned int arg9);
        void FlushTextureCache();
        uint32_t SetView(const shared_ptr<OpenGLView>& openGLView);
        void SetVSyncMode(VSyncMode vSyncMode);
        void AddDeadObject(const RenderResource* renderResource);
        void RemoveDeadObject(const RenderResource* renderResource);
        void IsKeepAliveSharedPtrInternal(const void* arg1) const;
        uint32_t LockContext();
        void UnlockContext();
        void ResetDeferredFrames();
        void WaitWithMainThreadEventLoop<ResetDeferredFrames()::$_95>(ResetDeferredFrames()::$_95 arg1);
        ImmediateRenderContext* GetImmediateContext() const;
        RenderTargets** GetCurrentState() const;
        void GetOpenGLContext();
        void BindImageTexture(unsigned int arg1, const Texture* texture, int arg3, LockType lockType);
        void UpdateBackBufferSize(bool arg1);
        void GetBackBufferWidth() const;
        void GetBackBufferHeight() const;
        RenderTargets* GetBackBuffer() const;
        void SetTexturesFromStateCache();
        void ClearRenderTargets(const math::Vector4T<float>* vector4, unsigned long arg2);
        Fence GetDestroyRenderThreadFence();
        void GetGLCoreProfileVerMajor() const;
        void GetThreadID() const;
        void lock();
        void unlock();
        ImmediateRenderContext* GetImmediateContext();

    private:
        uint8_t _unknown_9[3];
        uint32_t field_12;
        ImmediateRenderContext m_immediateContext;
        uint8_t _unknown_3184[9];
        uint8_t field_3193;
        char field_3194;
        uint8_t _unknown_3195[5];
        Fence field_3200;
        uint8_t _unknown_3313[7];
        Fence field_3320;
        uint8_t _unknown_3433[7];
        Fence m_destroyRenderThreadFence;
        uint8_t _unknown_3553[15];
        Allocator* field_3568;
        long field_3576;
        uint8_t _unknown_3584[128];
        Fence field_3712;
        uint8_t _unknown_3825[7];
        unsigned int field_3832;
        uint8_t field_3836;
        uint8_t _unknown_3837[123];
        uint8_t field_3960;
        uint8_t _unknown_3961[3];
        unsigned int field_3964;
        uint8_t _unknown_3968[96];
        RenderTargets* m_pCurrentState;
        uint64_t field_4072;
        uint64_t field_4080;
        uint64_t field_4088;
        uint64_t field_4096;
        uint64_t field_4104;
        uint64_t field_4112;
        bool field_4120;
        uint8_t _unknown_4121[19];
        uint8_t field_4140;
        uint8_t _unknown_4141[11];
        uint8_t field_4152;
        uint8_t field_4153;
        uint8_t _unknown_4154[6];
    };

    template <typename...> // 2 instantiations, e.g. <unsigned char const>, <unsigned char>
    class ResourceDataT {
    public:
        ResourceDataT<unsigned char>* operator=(ResourceDataT<unsigned char>&& resourceData);
        ResourceDataT(ResourceDataT<unsigned char>&& resourceData);
        ResourceDataT(unsigned char* arg1, unsigned int arg2, unsigned int arg3, bool arg4);
        ~ResourceDataT();
        ResourceDataT(const unsigned char* arg1, unsigned int arg2, unsigned int arg3, bool arg4);
    };

    // 0x1001d0900
    void RenderContext::SetScissorRectangle(bool arg1, const Viewport& viewport) {
        SetScissorRectangle(arg1, viewport.field_0, viewport.field_4, viewport.field_8, viewport.field_12);
    }

    // 0x1008a8f90
    void RenderContext::GetStats() const {
        m_immediateContext->GetStats();
    }

    // 0x1008fcb50
    void RenderContext::GetFPSCounter() {
        field_4144.get();
    }

    // 0x10092cbe0
    void RenderContext::IsMinCoreProfile() const {
        m_immediateContext->IsMinCoreProfile();
    }

    // 0x10092f1a0
    ResourceDataT<unsigned char>* ResourceDataT<unsigned char>::operator=(ResourceDataT<unsigned char>&& resourceData) {
        *(uint64_t*)this = *(uint64_t*)resourceData;
        *(uint32_t*)(this + 8) = *(uint32_t*)(resourceData + 8);
        *(uint32_t*)(this + 12) = *(uint32_t*)(resourceData + 12);
        *(ResourceDataT<unsigned char>*)(this + 16) = resourceData[16];
        resourceData[16] = (ResourceDataT<unsigned char>)0;
        return this;
    }

    // 0x100be8730
    void RenderContext::AddAliveObject(const RenderResource* renderResource) {
        AddAliveObject(renderResource);
    }

    // 0x100bfb0f0
    bool RenderContext::IsKeepAliveSharedPtr<RenderTargets>(const shared_ptr<RenderTargets>& renderTargets) const {
        auto arg1 = renderTargets.end();
        return (bool)IsKeepAliveSharedPtrInternal(arg1);
    }

    // 0x100c13a00
    void RenderContext::IsDeviceResetInProgress() const {
        (&field_3837)->operator_cast_to_bool();
    }

    // 0x100c19c80
    void RenderContext::GetDesc() const {
        m_immediateContext->second();
    }

    // 0x100c1a880
    unsigned long RenderContext::ShouldDefer() const {
        unsigned long uVar2;

        long lVar1 = GetDesc();
        if (*(char*)(lVar1 + 11) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = IsContextThread();
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x100c1a8b0
    void RenderContext::GetReadyState() const {
        m_immediateContext->GetReadyState();
    }

    // 0x100c1d380
    void RenderContext::IsContextThread() const {
        m_immediateContext->IsContextThread();
    }

    // 0x100c1dd60
    void RenderContext::SkipCurrentDrawCall() {
        field_4152 = 1;
    }

    // 0x100c1e540
    void RenderContext::SkipCurrentDispatchCall() {
        field_4153 = 1;
    }

    // 0x100c231c0
    bool RenderContext::IsInsideBeginEnd() const {
        long lVar1 = GetCurrentState();
        return *(uint8_t*)(lVar1 + 76);
    }

    // 0x100c259a0
    void RenderContext::WaitWithMainThreadEventLoop<RenderContext::ResetDeferredFrames()::$_95>(
        RenderContext::ResetDeferredFrames()::$_95 arg1) {
        type* arg2;
        duration<long long, std::ratio<1l, 1000000000l>> local_38;
        __95 local_30;

        local_30.field_0 = (__atomic_base<bool, false>*)arg1;
        bool cVar1 = ResetDeferredFrames()::$_95::operator()(&local_30);
        if (!cVar1) {
            do {
                BaseApp::GetAppInstance()->ExecuteMainThreadEvents();
                local_38.duration<int>(500, arg2);
                std::this_thread::sleep_for(&local_38);
                cVar1 = ResetDeferredFrames()::$_95::operator()(&local_30);
            } while (!cVar1);
        }
    }

    // 0x100c25a10
    ImmediateRenderContext* RenderContext::GetImmediateContext() const {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.h",
                      555, nullptr);
        }
        return (ImmediateRenderContext*)m_immediateContext;
    }

    // 0x100c25b50
    RenderTargets** RenderContext::GetCurrentState() const {
        return &m_pCurrentState;
    }

    // 0x100c28d80
    void RenderContext::GetOpenGLContext() {
        uint64_t uVar1 = m_immediateContext->GetOpenGLContext();
        uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
        _objc_autoreleaseReturnValue(uVar1);
    }

    // 0x100c291e0
    void RenderContext::GetBackBufferWidth() const {
        ((ImmediateRenderContext*)GetScreen())->GetBackBufferWidth();
    }

    // 0x100c29200
    void RenderContext::GetBackBufferHeight() const {
        ((ImmediateRenderContext*)GetScreen())->GetBackBufferHeight();
    }

    // 0x100c29340
    RenderTargets* RenderContext::GetBackBuffer() const {
        auto this_00 = GetScreen();
        return (RenderTargets*)this_00->GetBackBuffer();
    }

    // 0x100c2bb90
    Fence RenderContext::GetDestroyRenderThreadFence() {
        return m_destroyRenderThreadFence;
    }

    // 0x100c2de90
    void RenderContext::GetGLCoreProfileVerMajor() const {
        m_immediateContext->GetGLCoreProfileVerMajor();
    }

    // 0x100c31a00
    void RenderContext::GetThreadID() const {
        m_immediateContext->GetTransitionOutTime();
    }

    // 0x100c32cb0
    RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87::~$_87() {
        ((this + 8))->~shared_ptr();
    }

    // 0x100c32cc0
    RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88::~$_88() {
        ((this + 8))->~shared_ptr();
    }

    // 0x100c3f5d0
    void RenderContext::RunSynchronouslyOnRenderThread(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&,
        bool)::$_3::operator()(RenderContext& renderContext) const {
        RenderContext* this_00 = *(RenderContext**)(this + 24);
        if (**(char**)this != '\0') {
            if ((*(SyncFence**)(this + 8))->IsCreated()) {
                (*(SyncFence**)(this + 8))->WaitServer();
                (*(SyncFence**)(this + 8))->Destroy();
            }
        }
        fixedfunction::function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>::
        operator()(*(
            function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>**)(this + 16));
        if (**(char**)this != '\0') {
            if (GetReadyState(this_00) == 0) {
                if (!((*(SyncFence**)(this + 32))->Create())) {
                    (logger::default_logger())
                        ->Log(false, 3,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/RenderContext.cpp",
                              205, "Failed to create sync fence for render thread side of synchronous render function");
                }
            }
        }
    }

    // 0x100c3f6a0
    void RenderContext::lock() {
        LockContext();
    }

    // 0x100c3f6c0
    void RenderContext::unlock() {
        UnlockContext();
    }

    // 0x100c41250
    auto RenderContext::CleanUpDeadObjects()::$_12::operator()<eastl::pair<RenderResource const* const, signed char>>(
        eastl::pair<RenderResource const* const, signed char>& arg1) const {
        char cVar1 = field_8 - 1;
        field_8 = cVar1;
        return cVar1 < '\x01';
    }

    // 0x100c41450
    void RenderContext::EndInternal(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0> const&)::$_13::operator()(RenderContext& renderContext)
        const {
        ((ImmediateRenderContext*)(*(long*)this + 16))->End();
    }

    // 0x100c41660
    void RenderContext::EndInternal(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0> const&)::$_14::operator()(RenderContext& renderContext)
        const {
        ((ImmediateRenderContext*)(*(long*)this + 16))->End();
    }

    // 0x100c41870
    void RenderContext::EndInternal(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0> const&)::$_15::operator()(RenderContext& renderContext)
        const {
        long lVar1 = *(long*)this;
        unique_ptr<FPSCounter>* this_00 = (unique_ptr<FPSCounter>*)(lVar1 + 4144);
        FPSCounter* pFVar2 = (FPSCounter*)(*this_00).operator->();
        auto arg2 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
        pFVar2->RecordDrawEndTime((unsigned long long)arg2);
        pFVar2 = (FPSCounter*)(*this_00).operator->();
        pFVar2->UpdateFPSCounter();
        eastl::operator()((hash_set<KeepAliveSharedPtrAndOwner>*)(*(long*)(lVar1 + 3576) + 312), arg2);
    }

    // 0x100c41970
    auto RenderContext::EndInternal(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0> const&)::$_15::operator()(RenderContext&) const ::{
        lambda(auto : 1 &) #1
    }
    ::operator()<KeepAliveSharedPtrAndOwner const>(const KeepAliveSharedPtrAndOwner& keepAliveSharedPtrAndOwner) const {
        return *(int*)(this + 16) == 0;
    }

    // 0x100c41bf0
    void RenderContext::EndInternal(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0> const&)::$_16::operator()(RenderContext& renderContext)
        const {
        long lVar1 = *(long*)this;
        unique_ptr<FPSCounter>* this_00 = (unique_ptr<FPSCounter>*)(lVar1 + 4144);
        FPSCounter* pFVar2 = (FPSCounter*)(*this_00).operator->();
        auto arg2 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
        pFVar2->RecordDrawEndTime((unsigned long long)arg2);
        pFVar2 = (FPSCounter*)(*this_00).operator->();
        pFVar2->UpdateFPSCounter();
        eastl::operator()((hash_set<KeepAliveSharedPtrAndOwner>*)(*(long*)(lVar1 + 3576) + 312), arg2);
    }

    // 0x100c41cf0
    auto RenderContext::EndInternal(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0> const&)::$_16::operator()(RenderContext&) const ::{
        lambda(auto : 1 &) #1
    }
    ::operator()<KeepAliveSharedPtrAndOwner const>(const KeepAliveSharedPtrAndOwner& keepAliveSharedPtrAndOwner) const {
        return *(int*)(this + 16) == 0;
    }

    // 0x100c41d10
    auto RenderContext::EndInternal(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_17::
    operator()<KeepAliveSharedPtrAndOwner const>(const KeepAliveSharedPtrAndOwner& keepAliveSharedPtrAndOwner) const {
        return *(int*)(this + 16) == 0;
    }

    // 0x100c47150
    void RenderContext::ClearRenderTargets(RenderTargets const*, math::Vector4T<float> const*,
                                           unsigned long)::$_36::operator()(RenderContext& renderContext) const {
        RenderContext* renderContext_00 = *(RenderContext**)(this + 8);
        if ((*(RenderTargets**)this)->CheckTexturesAlive(*renderContext_00) == '\0') {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            954, nullptr);
        }
        ((RenderTargets*)renderContext_00->m_immediateContext)
            ->ClearRenderTargets(*(Vector4T<float>**)this, (unsigned long)(this + 16));
    }

    // 0x100c473c0
    void RenderContext::ClearRenderTargets(RenderTargets const*, math::Vector4T<float> const*,
                                           unsigned long)::$_37::operator()(RenderContext& renderContext) const {
        RenderContext* renderContext_00 = *(RenderContext**)(this + 8);
        if ((*(RenderTargets**)this)->CheckTexturesAlive(*renderContext_00) == '\0') {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            954, nullptr);
        }
        ((RenderTargets*)renderContext_00->m_immediateContext)
            ->ClearRenderTargets(*(Vector4T<float>**)this, (unsigned long)(this + 16));
    }

    // 0x100c4d990
    ImmediateRenderContext* RenderContext::GetImmediateContext() {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.h",
                      556, nullptr);
        }
        return (ImmediateRenderContext*)m_immediateContext;
    }

    // 0x100c4e180
    RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&,
                                           math::Rect<unsigned int> const&)::$_83::$_83($_83&& arg1) {
        uint64_t uVar1 = *(uint64_t*)arg1;
        uint64_t uVar2 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 20);
        *(uint64_t*)(this + 12) = *(uint64_t*)(arg1 + 12);
        *(uint64_t*)(this + 20) = uVar3;
        *(uint64_t*)this = uVar1;
        *(uint64_t*)(this + 8) = uVar2;
        new ((this + 28)) math::Rect(*((arg1 + 28)));
        new ((this + 44)) math::Rect(*((arg1 + 44)));
    }

    // 0x100c4e200
    RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&,
                                           math::Rect<unsigned int> const&)::$_83::$_83(const $_83& arg1) {
        uint64_t uVar1 = *(uint64_t*)arg1;
        uint64_t uVar2 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 20);
        *(uint64_t*)(this + 12) = *(uint64_t*)(arg1 + 12);
        *(uint64_t*)(this + 20) = uVar3;
        *(uint64_t*)this = uVar1;
        *(uint64_t*)(this + 8) = uVar2;
        new ((this + 28)) math::Rect(*((arg1 + 28)));
        new ((this + 44)) math::Rect(*((arg1 + 44)));
    }

    // 0x100c4e260
    void RenderContext::ResolveColourTargetData(
        RenderTargets const*, unsigned int, math::Rect<unsigned int> const&,
        math::Rect<unsigned int> const&)::$_83::operator()(RenderContext& renderContext) const {
        RenderContext* this_00 = *(RenderContext**)this;
        if (IsCurrentRenderTargetAlive(this_00, *(RenderTargets**)(this + 8))) {
            if ((*(RenderTargets**)(this + 16))->CheckTexturesAlive(*this_00)) {
                this_00->m_immediateContext->ResolveColourTargetData(
                    *(RenderTargets**)(this + 16), *(unsigned int*)(this + 24), *((this + 28)), *((this + 44)));
                return;
            }
        }
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                        "RenderContext.cpp",
                        1323, nullptr);
    }

    // 0x100c4e4a0
    RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&,
                                           math::Rect<unsigned int> const&)::$_84::$_84($_84&& arg1) {
        uint64_t uVar1 = *(uint64_t*)arg1;
        uint64_t uVar2 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 20);
        *(uint64_t*)(this + 12) = *(uint64_t*)(arg1 + 12);
        *(uint64_t*)(this + 20) = uVar3;
        *(uint64_t*)this = uVar1;
        *(uint64_t*)(this + 8) = uVar2;
        new ((this + 28)) math::Rect(*((arg1 + 28)));
        new ((this + 44)) math::Rect(*((arg1 + 44)));
    }

    // 0x100c4e520
    RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&,
                                           math::Rect<unsigned int> const&)::$_84::$_84(const $_84& arg1) {
        uint64_t uVar1 = *(uint64_t*)arg1;
        uint64_t uVar2 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 20);
        *(uint64_t*)(this + 12) = *(uint64_t*)(arg1 + 12);
        *(uint64_t*)(this + 20) = uVar3;
        *(uint64_t*)this = uVar1;
        *(uint64_t*)(this + 8) = uVar2;
        new ((this + 28)) math::Rect(*((arg1 + 28)));
        new ((this + 44)) math::Rect(*((arg1 + 44)));
    }

    // 0x100c4e580
    void RenderContext::ResolveColourTargetData(
        RenderTargets const*, unsigned int, math::Rect<unsigned int> const&,
        math::Rect<unsigned int> const&)::$_84::operator()(RenderContext& renderContext) const {
        RenderContext* this_00 = *(RenderContext**)this;
        if (IsCurrentRenderTargetAlive(this_00, *(RenderTargets**)(this + 8))) {
            if ((*(RenderTargets**)(this + 16))->CheckTexturesAlive(*this_00)) {
                this_00->m_immediateContext->ResolveColourTargetData(
                    *(RenderTargets**)(this + 16), *(unsigned int*)(this + 24), *((this + 28)), *((this + 44)));
                return;
            }
        }
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                        "RenderContext.cpp",
                        1323, nullptr);
    }

    // 0x100c4ebe0
    RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87::$_87($_87&& arg1) {
        *(uint64_t*)this = *(uint64_t*)arg1;
        new ((this + 8)) shared_ptr((arg1 + 8));
    }

    // 0x100c4ec40
    RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87::$_87(const $_87& arg1) {
        *(uint64_t*)this = *(uint64_t*)arg1;
        new ((this + 8)) shared_ptr((arg1 + 8));
    }

    // 0x100c4ec80
    void RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87::operator()(RenderContext& renderContext) const {
        SetView(renderContext);
        LogAssert("result",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                  "RenderContext.cpp",
                  1366, nullptr);
    }

    // 0x100c4ee90
    RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88::$_88($_88&& arg1) {
        *(uint64_t*)this = *(uint64_t*)arg1;
        new ((this + 8)) shared_ptr((arg1 + 8));
    }

    // 0x100c4eef0
    RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88::$_88(const $_88& arg1) {
        *(uint64_t*)this = *(uint64_t*)arg1;
        new ((this + 8)) shared_ptr((arg1 + 8));
    }

    // 0x100c4ef30
    void RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88::operator()(RenderContext& renderContext) const {
        SetView(renderContext);
        LogAssert("result",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                  "RenderContext.cpp",
                  1366, nullptr);
    }

    // 0x100c50090
    auto RenderContext::ResetKeepAliveSharedPtrs(OwnerThread)::$_92::operator()<KeepAliveSharedPtrAndOwner const>(
        const KeepAliveSharedPtrAndOwner& keepAliveSharedPtrAndOwner) const {
        return keepAliveSharedPtrAndOwner.field_16 == field_0;
    }

    // 0x100c500a0
    auto RenderContext::ResetKeepAliveSharedPtrs(OwnerThread)::$_93::operator()<KeepAliveSharedPtrAndOwner const>(
        const KeepAliveSharedPtrAndOwner& keepAliveSharedPtrAndOwner) const {
        return keepAliveSharedPtrAndOwner.field_16 == field_0;
    }

    // 0x100c526e0
    void RenderContext::ClearRenderTargets(math::Vector4T<float> const*,
                                           unsigned long)::$_102::operator()(RenderContext& renderContext) const {
        RenderContextStateCache* pRVar2;
        unsigned long extraout_RDX;
        unsigned long arg1;
        uint8_t auVar3[16];

        RenderContext* this_00 = *(RenderContext**)this;
        if (IsCurrentRenderTargetAlive(this_00, *(RenderTargets**)(this + 8)) == '\0') {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "OGL/RenderContext_OGL.cpp",
                            122, nullptr);
        }
        uint8_t* this_01 = this_00->m_immediateContext;
        unsigned long arg2 = extraout_RDX;
        if (*(long*)(this + 16) != 0) {
            arg1 = 0;
            do {
                pRVar2 = this_01->GetStateCache();
                auVar3 = (*((pRVar2->field_288 + 4)))[arg1];
                arg2 = auVar3._8_8_;
                if (*(char*)(auVar3._0_8_ + 28) != '\x0f') {
                    LogAssert("m_immediateContext.GetStateCache().m_BlendStateDesc.m_RenderTargetBlend[i].m_"
                              "RenderTargetWriteMask == COLOR_WRITE_ENABLE_ALL",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/RenderContext_OGL.cpp",
                              116, nullptr);
                }
                arg1 = arg1 + 1;
            } while (arg1 < *(unsigned long*)(this + 16));
        }
        this_01->ClearRenderTargets((this + 32), arg2);
    }

    // 0x100c529c0
    void RenderContext::ClearRenderTargets(math::Vector4T<float> const*,
                                           unsigned long)::$_103::operator()(RenderContext& renderContext) const {
        RenderContextStateCache* pRVar2;
        unsigned long extraout_RDX;
        unsigned long arg1;
        uint8_t auVar3[16];

        RenderContext* this_00 = *(RenderContext**)this;
        if (IsCurrentRenderTargetAlive(this_00, *(RenderTargets**)(this + 8)) == '\0') {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "OGL/RenderContext_OGL.cpp",
                            122, nullptr);
        }
        uint8_t* this_01 = this_00->m_immediateContext;
        unsigned long arg2 = extraout_RDX;
        if (*(long*)(this + 16) != 0) {
            arg1 = 0;
            do {
                pRVar2 = this_01->GetStateCache();
                auVar3 = (*((pRVar2->field_288 + 4)))[arg1];
                arg2 = auVar3._8_8_;
                if (*(char*)(auVar3._0_8_ + 28) != '\x0f') {
                    LogAssert("m_immediateContext.GetStateCache().m_BlendStateDesc.m_RenderTargetBlend[i].m_"
                              "RenderTargetWriteMask == COLOR_WRITE_ENABLE_ALL",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/RenderContext_OGL.cpp",
                              116, nullptr);
                }
                arg1 = arg1 + 1;
            } while (arg1 < *(unsigned long*)(this + 16));
        }
        this_01->ClearRenderTargets((this + 32), arg2);
    }

} // namespace jag::render
