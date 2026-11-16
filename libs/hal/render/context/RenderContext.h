// libs/hal/render/context/RenderContext.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class DeferredFrameData {
    public:
        DeferredFrameData();
        void Clear();
        ~DeferredFrameData();

        // data members, from how the methods use this: 376 bytes
        char _unknown_0[72];
        long field_72; // offset 72
        char _unknown_80[64];
        SyncFence field_144; // offset 144
        char _unknown_152[224];
    };

    class DeferredRenderFunction {
    public:
        ~DeferredRenderFunction();
        DeferredRenderFunction(
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&);
        DeferredRenderFunction(DeferredRenderFunction&&);
        DeferredRenderFunction(DeferredRenderFunction const&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class RenderContext : public RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~RenderContext();
        virtual void OnDeviceLost();
        GetImmediateContextUnsafe() const;
        void SetScissorRectangle(bool, Viewport const&);
        void GetStats() const;
        void GetFPSCounter();
        void IsMinCoreProfile() const;
        void AddAliveObject(RenderResource const*);
        bool IsKeepAliveSharedPtr<RenderTargets>(shared_ptr<RenderTargets> const&) const;
        IsLocked() const;
        void SetDefaultVAO();
        void IsDeviceResetInProgress() const;
        RenderContext();
        void GetDesc() const;
        void StopRenderThread();
        void Shutdown();
        bool Init(RenderContextDesc const&);
        PostInit(RenderContextDesc const&);
        void RunSynchronouslyOnRenderThread(
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&, bool);
        ulong ShouldDefer() const;
        void GetReadyState() const;
        void RunImmediatelyOnRenderThread(
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&);
        AllocateScratch(unsigned long, unsigned long);
        void
        RunOnRenderThread(fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&);
        void RunImmediateRenderFunction(bool);
        void UnlockDeadObjectsMutex() const;
        void RenderThread(RenderContextDesc const&);
        void RenderThreadMainLoop();
        void ResetKeepAliveSharedPtrs(OwnerThread);
        void Begin();
        BeginInternal(bool);
        void CleanUpDeadObjects();
        void KeepAliveSharedPtr(shared_ptr<void const> const&, OwnerThread);
        void AddAliveObject(void const*);
        void LockDeadObjectsMutex() const;
        void End();
        void EndInternal(fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&);
        void Present();
        void SetInputAssemblerState(InputAssemblerState const*);
        void BindDrawCallState(DrawCallState&);
        void IsContextThread() const;
        void BindDrawCallStateInternal(DrawCallState const&);
        ulong IsObjectAlive(RenderResource const*) const;
        void SkipCurrentDrawCall();
        void BindDispatchCallState(DispatchCallState&);
        void BindDispatchCallStateInternal(DispatchCallState const&);
        void SkipCurrentDispatchCall();
        void SetViewports(Viewport const*, unsigned long);
        void SetScissorRectangle(bool, int, int, int, int);
        void SetRenderTargets(RenderTargets const*);
        void ClearRenderTargets(RenderTargets const*, math::Vector4T<float> const*, unsigned long);
        void ClearDepthStencilTarget(float, unsigned int, unsigned int);
        IsCurrentRenderTargetAlive(RenderTargets const*) const;
        void ClearDepthStencilTarget(RenderTargets const*, float, unsigned int, unsigned int);
        void SetShaders(ShaderProgram const*);
        void SetVertexBuffers(unsigned int, VertexBuffer const* const*, unsigned int const*, unsigned int const*);
        void SetVertexBuffer(VertexBuffer const*, unsigned int, unsigned int);
        void SetIndexBuffer(IndexBuffer const*, unsigned int);
        void SetVertexDeclaration(VertexDeclaration const*);
        void SetVSTextureSamplerPair(unsigned int, Texture const*, unsigned int, SamplerState const*, bool);
        void SetPSTextureSamplerPair(unsigned int, Texture const*, int, SamplerState const*, bool);
        void SetVSShaderConstBuffer(unsigned int, ShaderConstBuffer const*);
        void SetPSShaderConstBuffer(unsigned int, ShaderConstBuffer const*);
        void SetDepthStencilState(DepthStencilState const*);
        void SetRasteriserState(RasteriserState const*);
        void SetBlendState(BlendState const*);
        void DrawPrimitives(PrimitiveType, int, int);
        bool PreDrawCall();
        void PostDrawCall();
        void DrawPrimitives(DrawCallState&, PrimitiveType, int, int);
        void DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*);
        void DrawMultiPrimitives(DrawCallState&, PrimitiveType, unsigned int, int const*, int const*);
        void DrawIndexedPrimitives(PrimitiveType, unsigned int, unsigned int, IndexType);
        void DrawIndexedPrimitives(DrawCallState&, PrimitiveType, unsigned int, unsigned int);
        void DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*, IndexType);
        void DrawMultiIndexedPrimitives(DrawCallState&, PrimitiveType, unsigned int, int const*, void const* const*);
        void DispatchCompute(unsigned int, unsigned int, unsigned int);
        bool PreDispatchCall();
        void PostDispatchCall();
        void DispatchCompute(DispatchCallState&, unsigned int, unsigned int, unsigned int);
        void MemoryBarrier(unsigned int);
        void FinishRendering();
        IsInsideBeginEnd() const;
        void CopyColourTargetData(Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                  unsigned int, unsigned int, unsigned int, CubeFace);
        void ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&,
                                     math::Rect<unsigned int> const&);
        void ReadColourTargetData(RenderTargets const*, void*, Format, unsigned int, unsigned int, unsigned int,
                                  unsigned int, unsigned int, unsigned int);
        void FlushTextureCache();
        SetView(shared_ptr<OpenGLView> const&);
        void SetVSyncMode(VSyncMode);
        void AddDeadObject(RenderResource const*);
        void RemoveDeadObject(RenderResource const*);
        void IsKeepAliveSharedPtrInternal(void const*) const;
        LockContext();
        void UnlockContext();
        void ResetDeferredFrames();
        void WaitWithMainThreadEventLoop<ResetDeferredFrames()::$_95>(ResetDeferredFrames()::$_95);
        GetImmediateContext() const;
        RenderTargets** GetCurrentState() const;
        void GetOpenGLContext();
        void BindImageTexture(unsigned int, Texture const*, int, LockType);
        void UpdateBackBufferSize(bool);
        void GetBackBufferWidth() const;
        void GetBackBufferHeight() const;
        void GetBackBuffer() const;
        void SetTexturesFromStateCache();
        void ClearRenderTargets(math::Vector4T<float> const*, unsigned long);
        GetDestroyRenderThreadFence();
        void GetGLCoreProfileVerMajor() const;
        void GetThreadID() const;
        void lock();
        void unlock();
        GetImmediateContext();

        // data members, from how the methods use this: 4160 bytes, the first 9 are RenderDeviceOnEndFrame
        int3 field_9;                              // offset 9
        int field_12;                              // offset 12
        ImmediateRenderContext m_immediateContext; // offset 16
        char _unknown_3184[9];
        undefined1 field_3193; // offset 3193
        char field_3194;       // offset 3194
        char _unknown_3195[5];
        Fence field_3200; // offset 3200
        char _unknown_3313[7];
        Fence field_3320; // offset 3320
        char _unknown_3433[7];
        Fence m_destroyRenderThreadFence; // offset 3440
        char _unknown_3553[15];
        DeferredFrameData* field_3568; // offset 3568
        long field_3576;               // offset 3576
        char _unknown_3584[32];
        undefined1 field_3616; // offset 3616
        char _unknown_3617[87];
        function field_3704; // offset 3704
        char _unknown_3864[96];
        undefined1 field_3960; // offset 3960
        char _unknown_3961[3];
        uint field_3964; // offset 3964
        char _unknown_3968[96];
        RenderTargets* m_pCurrentState; // offset 4064
        undefined8 field_4072;          // offset 4072
        undefined8 field_4080;          // offset 4080
        undefined8 field_4088;          // offset 4088
        undefined8 field_4096;          // offset 4096
        undefined8 field_4104;          // offset 4104
        undefined8 field_4112;          // offset 4112
        bool field_4120;                // offset 4120
        char _unknown_4121[19];
        undefined1 field_4140; // offset 4140
        char _unknown_4141[11];
        undefined1 field_4152; // offset 4152
        undefined1 field_4153; // offset 4153
        char _unknown_4154[6];
    };

    template <typename...> // 2 instantiations, e.g. <unsigned char const>, <unsigned char>
    class ResourceDataT {
    public:
        ResourceDataT<unsigned char>* operator=(ResourceDataT<unsigned char>&&);
        ResourceDataT(ResourceDataT<unsigned char>&&);
        ResourceDataT(unsigned char*, unsigned int, unsigned int, bool);
        ~ResourceDataT();
        ResourceDataT(unsigned char const*, unsigned int, unsigned int, bool);
    };

    // 0x1001d0900, 32 bytes, inline, placed by class name and debug map
    // RenderContext::SetScissorRectangle(bool, Viewport const&)
    void RenderContext::SetScissorRectangle(bool param_1, Viewport* param_2) {
        SetScissorRectangle(this, param_1, param_2->field_0, param_2->field_4, param_2->field_8, param_2->field_12);
    }

    // 0x1008a8f90, 16 bytes, inline, placed by class name
    // RenderContext::GetStats() const
    void RenderContext::GetStats() {
        m_immediateContext->GetStats();
    }

    // 0x1008fcb50, 32 bytes, inline, placed by class name
    // RenderContext::GetFPSCounter()
    void RenderContext::GetFPSCounter() {
        (&field_4144)->get();
    }

    // 0x10092cbe0, 16 bytes, inline, placed by class name
    // RenderContext::IsMinCoreProfile() const
    void RenderContext::IsMinCoreProfile() {
        m_immediateContext->IsMinCoreProfile();
    }

    // 0x10092f1a0, 48 bytes, inline, placed by class header (inline)
    // ResourceDataT<unsigned char>::operator=(ResourceDataT<unsigned char>&&)
    /* ResourceDataT<unsigned
   char>::TEMPNAMEPLACEHOLDERVALUE(ResourceDataT<unsigned char>&&) */

    ResourceDataT<unsigned char>* ResourceDataT<unsigned char>::operator=(ResourceDataT* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined4*)(this + 8) = *(undefined4*)(param_1 + 8);
        *(undefined4*)(this + 12) = *(undefined4*)(param_1 + 12);
        *(ResourceDataT*)(this + 16) = param_1[16];
        param_1[16] = (ResourceDataT)0;
        return this;
    }

    // 0x100be8730, 16 bytes, inline, placed by class name
    // RenderContext::AddAliveObject(RenderResource const*)
    void RenderContext::AddAliveObject(RenderResource* param_1) {
        AddAliveObject(this, param_1);
    }

    // 0x100bfb0f0, 48 bytes, inline, placed by class name
    // bool RenderContext::IsKeepAliveSharedPtr<RenderTargets>(shared_ptr<RenderTargets> const&) const
    bool RenderContext::IsKeepAliveSharedPtr<RenderTargets>(shared_ptr* param_1) {
        void* pvVar1;

        pvVar1 = (void*)param_1->end();
        return (bool)IsKeepAliveSharedPtrInternal(this, pvVar1);
    }

    // 0x100c13a00, 32 bytes, inline, placed by class name and debug map
    // RenderContext::IsDeviceResetInProgress() const
    void RenderContext::IsDeviceResetInProgress() {
        ((field_3704 + 133))->operator_cast_to_bool();
    }

    // 0x100c149a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ResourceDataT<unsigned char>::ResourceDataT(unsigned char*, unsigned int, unsigned int, bool): jumps straight to the base-object constructor

    // 0x100c149c0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ResourceDataT<unsigned char>::~ResourceDataT(): jumps straight to the base-object destructor

    // 0x100c19c80, 16 bytes, inline, placed by class name
    // RenderContext::GetDesc() const
    void RenderContext::GetDesc() {
        m_immediateContext->second();
    }

    // 0x100c1a880, 48 bytes, inline, placed by class name
    // RenderContext::ShouldDefer() const
    ulong RenderContext::ShouldDefer() {
        long lVar1;
        ulong uVar2;

        lVar1 = GetDesc(this);
        if (*(char*)(lVar1 + 11) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = IsContextThread(this);
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x100c1a8b0, 16 bytes, inline, placed by class name
    // RenderContext::GetReadyState() const
    void RenderContext::GetReadyState() {
        m_immediateContext->GetReadyState();
    }

    // 0x100c1d380, 16 bytes, inline, placed by class name
    // RenderContext::IsContextThread() const
    void RenderContext::IsContextThread() {
        m_immediateContext->IsContextThread();
    }

    // 0x100c1dd60, 16 bytes, inline, placed by class name
    // RenderContext::SkipCurrentDrawCall()
    void RenderContext::SkipCurrentDrawCall() {
        field_4152 = 1;
    }

    // 0x100c1e540, 16 bytes, inline, placed by class name
    // RenderContext::SkipCurrentDispatchCall()
    void RenderContext::SkipCurrentDispatchCall() {
        field_4153 = 1;
    }

    // 0x100c231c0, 16 bytes, inline, placed by class name
    // RenderContext::IsInsideBeginEnd() const
    undefined1 RenderContext::IsInsideBeginEnd() {
        long lVar1;

        lVar1 = GetCurrentState(this);
        return *(undefined1*)(lVar1 + 76);
    }

    // 0x100c24c20, 16 bytes, complete-object destructor, inline, placed by class name
    // RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87::~$_87(): jumps straight to the base-object destructor

    // 0x100c24cf0, 16 bytes, complete-object destructor, inline, placed by class name
    // RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88::~$_88(): jumps straight to the base-object destructor

    // 0x100c259a0, 112 bytes, inline, placed by class name
    // void RenderContext::WaitWithMainThreadEventLoop<RenderContext::ResetDeferredFrames()::$_95>(RenderContext::ResetDeferredFrames()::$_95)
    void RenderContext::WaitWithMainThreadEventLoop<RenderContext::ResetDeferredFrames()::__95>(undefined8 param_1) {
        BaseApp* this;
        char cVar1;
        duration local_38[8];
        undefined8 local_30;
        undefined4 local_24;

        local_30 = param_1;
        cVar1 = ResetDeferredFrames()::$_95::operator()((__95*)&local_30);
        if (cVar1 == '\0') {
            do {
                this = (BaseApp*)BaseApp::GetAppInstance();
                ExecuteMainThreadEvents();
                local_24 = 500;
                std::chrono::duration<long long, std::ratio<1l, 1000000000l>>::duration<int>((int*)local_38,
                                                                                             (type*)&local_24);
                std::this_thread::sleep_for(local_38);
                cVar1 = ResetDeferredFrames()::$_95::operator()((__95*)&local_30);
            } while (cVar1 == '\0');
        }
    }

    // 0x100c25a10, 64 bytes, inline, placed by class name
    // RenderContext::GetImmediateContext() const
    undefined1* RenderContext::GetImmediateContext() {
        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.h",
                      555, (char*)0);
        }
        return m_immediateContext;
    }

    // 0x100c25b50, 16 bytes, inline, placed by class name
    // RenderContext::GetCurrentState() const
    RenderTargets** RenderContext::GetCurrentState() {
        return &m_pCurrentState;
    }

    // 0x100c28d80, 32 bytes, inline, placed by class name
    // RenderContext::GetOpenGLContext()
    void RenderContext::GetOpenGLContext() {
        undefined8 uVar1;

        uVar1 = m_immediateContext->GetOpenGLContext();
        uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
        _objc_autoreleaseReturnValue(uVar1);
    }

    // 0x100c291e0, 32 bytes, inline, placed by class name
    // RenderContext::GetBackBufferWidth() const
    void RenderContext::GetBackBufferWidth() {
        ImmediateRenderContext* this_00;

        this_00 = (ImmediateRenderContext*)GetScreen();
        this_00->GetBackBufferWidth();
    }

    // 0x100c29200, 32 bytes, inline, placed by class name
    // RenderContext::GetBackBufferHeight() const
    void RenderContext::GetBackBufferHeight() {
        ImmediateRenderContext* this_00;

        this_00 = (ImmediateRenderContext*)GetScreen();
        this_00->GetBackBufferHeight();
    }

    // 0x100c29340, 32 bytes, inline, placed by class name
    // RenderContext::GetBackBuffer() const
    void RenderContext::GetBackBuffer() {
        ImmediateRenderContext* this_00;

        this_00 = (ImmediateRenderContext*)GetScreen();
        this_00->GetBackBuffer();
    }

    // 0x100c2bb90, 16 bytes, inline, placed by class name
    // RenderContext::GetDestroyRenderThreadFence()
    undefined1* RenderContext::GetDestroyRenderThreadFence() {
        return m_destroyRenderThreadFence;
    }

    // 0x100c2de90, 16 bytes, inline, placed by class name
    // RenderContext::GetGLCoreProfileVerMajor() const
    void RenderContext::GetGLCoreProfileVerMajor() {
        m_immediateContext->GetGLCoreProfileVerMajor();
    }

    // 0x100c31a00, 16 bytes, inline, placed by class name
    // RenderContext::GetThreadID() const
    void RenderContext::GetThreadID() {
        m_immediateContext->GetTransitionOutTime();
    }

    // 0x100c32cb0, 16 bytes, base-object destructor, inline, placed by class name
    // RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87::~$_87()
    /* ~$_87() */

    void RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87::~__87() {
        ((this + 8))->~shared_ptr();
    }

    // 0x100c32cc0, 16 bytes, base-object destructor, inline, placed by class name
    // RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88::~$_88()
    /* ~$_88() */

    void RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88::~__88() {
        ((this + 8))->~shared_ptr();
    }

    // 0x100c3f5d0, 160 bytes, inline, placed by class name
    // RenderContext::RunSynchronouslyOnRenderThread(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&, bool)::$_3::operator()(RenderContext&) const
    /* RenderContext::RunSynchronouslyOnRenderThread(fixedfunction::function<void
   (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&,
   bool)::$_3::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::RunSynchronouslyOnRenderThread(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&,
        bool)::$_3::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        char cVar1;
        undefined8 uVar3;

        this_00 = *(RenderContext**)(this + 24);
        if (**(char**)this != '\0') {
            cVar1 = (*(SyncFence**)(this + 8))->IsCreated();
            if (cVar1 != '\0') {
                (*(SyncFence**)(this + 8))->WaitServer();
                (*(SyncFence**)(this + 8))->Destroy();
            }
        }
        fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>::
        operator()(
            *(function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>**)(this +
                                                                                                              16),
            (TextureAtlasSlot*)param_1);
        if (**(char**)this != '\0') {
            if (GetReadyState(this_00) == 0) {
                cVar1 = (*(SyncFence**)(this + 32))->Create();
                if (cVar1 == '\0') {
                    uVar3 = logger::default_logger();
                    logger::Logger::Log(
                        uVar3, 0, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                        "RenderContext.cpp",
                        205, "Failed to create sync fence for render thread side of synchronous render function");
                }
            }
        }
    }

    // 0x100c3f6a0, 16 bytes, inline, placed by class name
    // RenderContext::lock()
    void RenderContext::lock() {
        LockContext(this);
    }

    // 0x100c3f6c0, 16 bytes, inline, placed by class name
    // RenderContext::unlock()
    void RenderContext::unlock() {
        UnlockContext(this);
    }

    // 0x100c41250, 32 bytes, inline, placed by class name
    // auto RenderContext::CleanUpDeadObjects()::$_12::operator()<eastl::pair<RenderResource const* const, signed char> >(eastl::pair<RenderResource const* const, signed char>&) const
    /* auto 
   RenderContext::CleanUpDeadObjects()::$_12::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<RenderResource
   const* const, signed char>&) const */

    bool RenderContext::CleanUpDeadObjects()::$_12::operator()(pair* param_1) {
        __12 _Var1;

        _Var1 = this[8];
        this[8] = (__12)((char)_Var1 + -1);
        return (char)((char)_Var1 + -1) < '\x01';
    }

    // 0x100c41450, 32 bytes, inline, placed by class name
    // RenderContext::EndInternal(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_13::operator()(RenderContext&) const
    /* RenderContext::EndInternal(fixedfunction::function<void
   (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>
   const&)::$_13::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::EndInternal(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0> const&)::$_13::operator()(RenderContext* param_1) {
        ((*(long*)this + 16))->End();
    }

    // 0x100c41660, 32 bytes, inline, placed by class name
    // RenderContext::EndInternal(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_14::operator()(RenderContext&) const
    /* RenderContext::EndInternal(fixedfunction::function<void
   (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>
   const&)::$_14::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::EndInternal(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0> const&)::$_14::operator()(RenderContext* param_1) {
        ((*(long*)this + 16))->End();
    }

    // 0x100c41870, 96 bytes, inline, placed by class name
    // RenderContext::EndInternal(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_15::operator()(RenderContext&) const
    /* RenderContext::EndInternal(fixedfunction::function<void
   (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>
   const&)::$_15::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::EndInternal(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0> const&)::$_15::operator()(RenderContext* param_1) {
        unique_ptr<FPSCounter, std::default_delete<FPSCounter>>* this_00;
        long lVar1;
        FPSCounter* pFVar2;
        ulonglong uVar3;
        unique_ptr<FPSCounter, std::default_delete<FPSCounter>>* this_01;

        lVar1 = *(long*)this;
        this_00 = (unique_ptr<FPSCounter, std::default_delete<FPSCounter>>*)(lVar1 + 4144);
        this_01 = this_00;
        pFVar2 = (FPSCounter*)std::unique_ptr<FPSCounter, std::default_delete<FPSCounter>>::operator->(this_00);
        uVar3 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_01);
        pFVar2->RecordDrawEndTime(uVar3);
        pFVar2 = (FPSCounter*)std::unique_ptr<FPSCounter, std::default_delete<FPSCounter>>::operator->(this_00);
        pFVar2->UpdateFPSCounter();
        eastl::operator()(*(long*)(lVar1 + 3576) + 312);
    }

    // 0x100c41970, 16 bytes, inline, placed by class name
    // auto RenderContext::EndInternal(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_15::operator()(RenderContext&) const::{lambda(auto:1&)#1}::operator()<KeepAliveSharedPtrAndOwner const>(KeepAliveSharedPtrAndOwner const&) const
    /* auto RenderContext::EndInternal(fixedfunction::function<void
   (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>
   const&)::$_15::operator()(RenderContext&)
   const::{lambda(auto:1&)#1}::TEMPNAMEPLACEHOLDERVALUE(KeepAliveSharedPtrAndOwner
   const&) const */

    _func_operator_RenderContext_ptr* const ::{
        lambda(auto : 1 &) #1
    }
    ::operator()(KeepAliveSharedPtrAndOwner * param_1) {
        undefined7 in_register_00000001;

        return (_func_operator_RenderContext_ptr*)CONCAT71(in_register_00000001, *(int*)(this + 16) == 0);
    }

    // 0x100c41bf0, 96 bytes, inline, placed by class name
    // RenderContext::EndInternal(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_16::operator()(RenderContext&) const
    /* RenderContext::EndInternal(fixedfunction::function<void
   (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>
   const&)::$_16::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::EndInternal(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0> const&)::$_16::operator()(RenderContext* param_1) {
        unique_ptr<FPSCounter, std::default_delete<FPSCounter>>* this_00;
        long lVar1;
        FPSCounter* pFVar2;
        ulonglong uVar3;
        unique_ptr<FPSCounter, std::default_delete<FPSCounter>>* this_01;

        lVar1 = *(long*)this;
        this_00 = (unique_ptr<FPSCounter, std::default_delete<FPSCounter>>*)(lVar1 + 4144);
        this_01 = this_00;
        pFVar2 = (FPSCounter*)std::unique_ptr<FPSCounter, std::default_delete<FPSCounter>>::operator->(this_00);
        uVar3 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_01);
        pFVar2->RecordDrawEndTime(uVar3);
        pFVar2 = (FPSCounter*)std::unique_ptr<FPSCounter, std::default_delete<FPSCounter>>::operator->(this_00);
        pFVar2->UpdateFPSCounter();
        eastl::operator()(*(long*)(lVar1 + 3576) + 312);
    }

    // 0x100c41cf0, 16 bytes, inline, placed by class name
    // auto RenderContext::EndInternal(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_16::operator()(RenderContext&) const::{lambda(auto:1&)#1}::operator()<KeepAliveSharedPtrAndOwner const>(KeepAliveSharedPtrAndOwner const&) const
    /* auto RenderContext::EndInternal(fixedfunction::function<void
   (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>
   const&)::$_16::operator()(RenderContext&)
   const::{lambda(auto:1&)#1}::TEMPNAMEPLACEHOLDERVALUE(KeepAliveSharedPtrAndOwner
   const&) const */

    _func_operator_RenderContext_ptr* const ::{
        lambda(auto : 1 &) #1
    }
    ::operator()(KeepAliveSharedPtrAndOwner * param_1) {
        undefined7 in_register_00000001;

        return (_func_operator_RenderContext_ptr*)CONCAT71(in_register_00000001, *(int*)(this + 16) == 0);
    }

    // 0x100c41d10, 16 bytes, inline, placed by class name
    // auto RenderContext::EndInternal(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_17::operator()<KeepAliveSharedPtrAndOwner const>(KeepAliveSharedPtrAndOwner const&) const
    /* auto RenderContext::EndInternal(fixedfunction::function<void
   (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>
   const&)::$_17::TEMPNAMEPLACEHOLDERVALUE(KeepAliveSharedPtrAndOwner const&) const */

    bool RenderContext::EndInternal(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_17::
    operator()(KeepAliveSharedPtrAndOwner* param_1) {
        return *(int*)(this + 16) == 0;
    }

    // 0x100c47150, 96 bytes, inline, placed by class name
    // RenderContext::ClearRenderTargets(RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_36::operator()(RenderContext&) const
    /* RenderContext::ClearRenderTargets(RenderTargets const*,
   math::Vector4T<float> const*, unsigned
   long)::$_36::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::ClearRenderTargets(RenderTargets_const*, math::Vector4T<float> const*,
                                           unsigned long)::$_36::operator()(RenderContext* param_1) {
        RenderContext* pRVar1;

        pRVar1 = *(RenderContext**)(this + 8);
        if ((*(RenderTargets**)this)->CheckTexturesAlive(pRVar1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            954, (char*)0);
        }
        ((RenderTargets*)pRVar1->m_immediateContext, *(Vector4T**)this, (ulong)(this + 16))->ClearRenderTargets();
    }

    // 0x100c473c0, 96 bytes, inline, placed by class name
    // RenderContext::ClearRenderTargets(RenderTargets const*, math::Vector4T<float> const*, unsigned long)::$_37::operator()(RenderContext&) const
    /* RenderContext::ClearRenderTargets(RenderTargets const*,
   math::Vector4T<float> const*, unsigned
   long)::$_37::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::ClearRenderTargets(RenderTargets_const*, math::Vector4T<float> const*,
                                           unsigned long)::$_37::operator()(RenderContext* param_1) {
        RenderContext* pRVar1;

        pRVar1 = *(RenderContext**)(this + 8);
        if ((*(RenderTargets**)this)->CheckTexturesAlive(pRVar1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "RenderContext.cpp",
                            954, (char*)0);
        }
        ((RenderTargets*)pRVar1->m_immediateContext, *(Vector4T**)this, (ulong)(this + 16))->ClearRenderTargets();
    }

    // 0x100c4d990, 64 bytes, inline, placed by class name
    // RenderContext::GetImmediateContext()
    undefined1* RenderContext::GetImmediateContext() {
        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContext.h",
                      556, (char*)0);
        }
        return m_immediateContext;
    }

    // 0x100c4e170, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83::$_83($_83&&): jumps straight to the base-object constructor

    // 0x100c4e180, 64 bytes, base-object constructor, inline, placed by class name
    // RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83::$_83($_83&&)
    /* $_83($_83&&) */

    void RenderContext::ResolveColourTargetData(RenderTargets_const*, unsigned int, math::Rect<unsigned int> const&,
                                                math::Rect<unsigned int> const&)::$_83::__83(__83* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 20);
        *(undefined8*)(this + 12) = *(undefined8*)(param_1 + 12);
        *(undefined8*)(this + 20) = uVar3;
        *(undefined8*)this = uVar1;
        *(undefined8*)(this + 8) = uVar2;
        new ((this + 28)) math::Rect<unsigned int>((Rect*)(param_1 + 28));
        new ((this + 44)) math::Rect<unsigned int>((Rect*)(param_1 + 44));
    }

    // 0x100c4e1f0, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83::$_83($_83 const&): jumps straight to the base-object constructor

    // 0x100c4e200, 64 bytes, base-object constructor, inline, placed by class name
    // RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83::$_83($_83 const&)
    /* $_83($_83 const&) */

    void RenderContext::ResolveColourTargetData(RenderTargets_const*, unsigned int, math::Rect<unsigned int> const&,
                                                math::Rect<unsigned int> const&)::$_83::__83(__83* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 20);
        *(undefined8*)(this + 12) = *(undefined8*)(param_1 + 12);
        *(undefined8*)(this + 20) = uVar3;
        *(undefined8*)this = uVar1;
        *(undefined8*)(this + 8) = uVar2;
        new ((this + 28)) math::Rect<unsigned int>((Rect*)(param_1 + 28));
        new ((this + 44)) math::Rect<unsigned int>((Rect*)(param_1 + 44));
    }

    // 0x100c4e260, 112 bytes, inline, placed by class name
    // RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_83::operator()(RenderContext&) const
    /* RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned
   int, math::Rect<unsigned int> const&, math::Rect<unsigned int>
   const&)::$_83::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void
    RenderContext::ResolveColourTargetData(RenderTargets_const*, unsigned int, math::Rect<unsigned int> const&,
                                           math::Rect<unsigned int> const&)::$_83::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        char cVar1;

        this_00 = *(RenderContext**)this;
        cVar1 = IsCurrentRenderTargetAlive(this_00, *(RenderTargets**)(this + 8));
        if (cVar1 != '\0') {
            cVar1 = (*(RenderTargets**)(this + 16))->CheckTexturesAlive(this_00);
            if (cVar1 != '\0') {
                (this_00->m_immediateContext, *(RenderTargets**)(this + 16), *(uint*)(this + 24), (Rect*)(this + 28),
                 (Rect*)(this + 44))
                    ->ResolveColourTargetData();
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                        "RenderContext.cpp",
                        1323, (char*)0);
    }

    // 0x100c4e490, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84::$_84($_84&&): jumps straight to the base-object constructor

    // 0x100c4e4a0, 64 bytes, base-object constructor, inline, placed by class name
    // RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84::$_84($_84&&)
    /* $_84($_84&&) */

    void RenderContext::ResolveColourTargetData(RenderTargets_const*, unsigned int, math::Rect<unsigned int> const&,
                                                math::Rect<unsigned int> const&)::$_84::__84(__84* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 20);
        *(undefined8*)(this + 12) = *(undefined8*)(param_1 + 12);
        *(undefined8*)(this + 20) = uVar3;
        *(undefined8*)this = uVar1;
        *(undefined8*)(this + 8) = uVar2;
        new ((this + 28)) math::Rect<unsigned int>((Rect*)(param_1 + 28));
        new ((this + 44)) math::Rect<unsigned int>((Rect*)(param_1 + 44));
    }

    // 0x100c4e510, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84::$_84($_84 const&): jumps straight to the base-object constructor

    // 0x100c4e520, 64 bytes, base-object constructor, inline, placed by class name
    // RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84::$_84($_84 const&)
    /* $_84($_84 const&) */

    void RenderContext::ResolveColourTargetData(RenderTargets_const*, unsigned int, math::Rect<unsigned int> const&,
                                                math::Rect<unsigned int> const&)::$_84::__84(__84* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 20);
        *(undefined8*)(this + 12) = *(undefined8*)(param_1 + 12);
        *(undefined8*)(this + 20) = uVar3;
        *(undefined8*)this = uVar1;
        *(undefined8*)(this + 8) = uVar2;
        new ((this + 28)) math::Rect<unsigned int>((Rect*)(param_1 + 28));
        new ((this + 44)) math::Rect<unsigned int>((Rect*)(param_1 + 44));
    }

    // 0x100c4e580, 112 bytes, inline, placed by class name
    // RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)::$_84::operator()(RenderContext&) const
    /* RenderContext::ResolveColourTargetData(RenderTargets const*, unsigned
   int, math::Rect<unsigned int> const&, math::Rect<unsigned int>
   const&)::$_84::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void
    RenderContext::ResolveColourTargetData(RenderTargets_const*, unsigned int, math::Rect<unsigned int> const&,
                                           math::Rect<unsigned int> const&)::$_84::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        char cVar1;

        this_00 = *(RenderContext**)this;
        cVar1 = IsCurrentRenderTargetAlive(this_00, *(RenderTargets**)(this + 8));
        if (cVar1 != '\0') {
            cVar1 = (*(RenderTargets**)(this + 16))->CheckTexturesAlive(this_00);
            if (cVar1 != '\0') {
                (this_00->m_immediateContext, *(RenderTargets**)(this + 16), *(uint*)(this + 24), (Rect*)(this + 28),
                 (Rect*)(this + 44))
                    ->ResolveColourTargetData();
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                        "RenderContext.cpp",
                        1323, (char*)0);
    }

    // 0x100c4ebd0, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87::$_87($_87&&): jumps straight to the base-object constructor

    // 0x100c4ebe0, 32 bytes, base-object constructor, inline, placed by class name
    // RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87::$_87($_87&&)
    /* $_87($_87&&) */

    void RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87::__87(__87* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(param_1 + 8));
    }

    // 0x100c4ec30, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87::$_87($_87 const&): jumps straight to the base-object constructor

    // 0x100c4ec40, 32 bytes, base-object constructor, inline, placed by class name
    // RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87::$_87($_87 const&)
    /* $_87($_87 const&) */

    void RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87::__87(__87* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(param_1 + 8));
    }

    // 0x100c4ec80, 48 bytes, inline, placed by class name
    // RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87::operator()(RenderContext&) const
    /* RenderContext::SetView(shared_ptr<OpenGLView>
   const&)::$_87::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_87::operator()(RenderContext* param_1) {
        ImmediateRenderContext::SetView((shared_ptr*)this);
        /* WARNING: Subroutine does not return */
        LogAssert("result",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                  "RenderContext.cpp",
                  1366, (char*)0);
    }

    // 0x100c4ee80, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88::$_88($_88&&): jumps straight to the base-object constructor

    // 0x100c4ee90, 32 bytes, base-object constructor, inline, placed by class name
    // RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88::$_88($_88&&)
    /* $_88($_88&&) */

    void RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88::__88(__88* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(param_1 + 8));
    }

    // 0x100c4eee0, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88::$_88($_88 const&): jumps straight to the base-object constructor

    // 0x100c4eef0, 32 bytes, base-object constructor, inline, placed by class name
    // RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88::$_88($_88 const&)
    /* $_88($_88 const&) */

    void RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88::__88(__88* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(param_1 + 8));
    }

    // 0x100c4ef30, 48 bytes, inline, placed by class name
    // RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88::operator()(RenderContext&) const
    /* RenderContext::SetView(shared_ptr<OpenGLView>
   const&)::$_88::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::SetView(shared_ptr<OpenGLView> const&)::$_88::operator()(RenderContext* param_1) {
        ImmediateRenderContext::SetView((shared_ptr*)this);
        /* WARNING: Subroutine does not return */
        LogAssert("result",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                  "RenderContext.cpp",
                  1366, (char*)0);
    }

    // 0x100c50090, 16 bytes, inline, placed by class name
    // auto RenderContext::ResetKeepAliveSharedPtrs(OwnerThread)::$_92::operator()<KeepAliveSharedPtrAndOwner const>(KeepAliveSharedPtrAndOwner const&) const
    /* auto 
   RenderContext::ResetKeepAliveSharedPtrs(OwnerThread)::$_92::TEMPNAMEPLACEHOLDERVALUE(KeepAliveSharedPtrAndOwner
   const&) const */

    undefined4
    RenderContext::ResetKeepAliveSharedPtrs(OwnerThread)::$_92::operator()(KeepAliveSharedPtrAndOwner* param_1) {
        return CONCAT31((int3)((uint)param_1->field_16 >> 8), param_1->field_16 == *(int*)this);
    }

    // 0x100c500a0, 16 bytes, inline, placed by class name
    // auto RenderContext::ResetKeepAliveSharedPtrs(OwnerThread)::$_93::operator()<KeepAliveSharedPtrAndOwner const>(KeepAliveSharedPtrAndOwner const&) const
    /* auto 
   RenderContext::ResetKeepAliveSharedPtrs(OwnerThread)::$_93::TEMPNAMEPLACEHOLDERVALUE(KeepAliveSharedPtrAndOwner
   const&) const */

    undefined4
    RenderContext::ResetKeepAliveSharedPtrs(OwnerThread)::$_93::operator()(KeepAliveSharedPtrAndOwner* param_1) {
        return CONCAT31((int3)((uint)param_1->field_16 >> 8), param_1->field_16 == *(int*)this);
    }

    // 0x100c526e0, 208 bytes, inline, placed by class name
    // RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102::operator()(RenderContext&) const
    /* RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned
   long)::$_102::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::ClearRenderTargets(math::Vector4T<float> const*,
                                           unsigned long)::$_102::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        long lVar2;
        ulong extraout_RDX;
        ulong uVar3;
        ulong uVar4;
        undefined1* this_01;
        undefined1 auVar5[16];

        this_00 = *(RenderContext**)this;
        if (IsCurrentRenderTargetAlive(this_00, *(RenderTargets**)(this + 8)) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "OGL/RenderContext_OGL.cpp",
                            122, (char*)0);
        }
        this_01 = this_00->m_immediateContext;
        uVar3 = extraout_RDX;
        if (*(long*)(this + 16) != 0) {
            uVar4 = 0;
            do {
                lVar2 = this_01->GetStateCache();
                auVar5 = std::array<RenderTargetBlendDesc, 2ul>::operator[](
                    (array<RenderTargetBlendDesc, 2ul>*)(lVar2 + 292), uVar4);
                uVar3 = auVar5._8_8_;
                if (*(char*)(auVar5._0_8_ + 28) != '\x0f') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_immediateContext.GetStateCache().m_BlendStateDesc.m_RenderTargetBlend[i].m_"
                              "RenderTargetWriteMask == COLOR_WRITE_ENABLE_ALL",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/RenderContext_OGL.cpp",
                              116, (char*)0);
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < *(ulong*)(this + 16));
        }
        this_01->ClearRenderTargets((Vector4T*)(this + 32), uVar3);
    }

    // 0x100c529c0, 208 bytes, inline, placed by class name
    // RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103::operator()(RenderContext&) const
    /* RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned
   long)::$_103::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void RenderContext::ClearRenderTargets(math::Vector4T<float> const*,
                                           unsigned long)::$_103::operator()(RenderContext* param_1) {
        RenderContext* this_00;
        long lVar2;
        ulong extraout_RDX;
        ulong uVar3;
        ulong uVar4;
        undefined1* this_01;
        undefined1 auVar5[16];

        this_00 = *(RenderContext**)this;
        if (IsCurrentRenderTargetAlive(this_00, *(RenderTargets**)(this + 8)) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "OGL/RenderContext_OGL.cpp",
                            122, (char*)0);
        }
        this_01 = this_00->m_immediateContext;
        uVar3 = extraout_RDX;
        if (*(long*)(this + 16) != 0) {
            uVar4 = 0;
            do {
                lVar2 = this_01->GetStateCache();
                auVar5 = std::array<RenderTargetBlendDesc, 2ul>::operator[](
                    (array<RenderTargetBlendDesc, 2ul>*)(lVar2 + 292), uVar4);
                uVar3 = auVar5._8_8_;
                if (*(char*)(auVar5._0_8_ + 28) != '\x0f') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_immediateContext.GetStateCache().m_BlendStateDesc.m_RenderTargetBlend[i].m_"
                              "RenderTargetWriteMask == COLOR_WRITE_ENABLE_ALL",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/RenderContext_OGL.cpp",
                              116, (char*)0);
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < *(ulong*)(this + 16));
        }
        this_01->ClearRenderTargets((Vector4T*)(this + 32), uVar3);
    }

} // namespace jag::render

namespace jag::fixedfunction {
    // 0x100c14350, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&): jumps straight to the base-object constructor

    // 0x100c14970, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, render::UpdateType)::$_1, void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*, render::UpdateType)::$_1&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction
