// libs/hal/render/device/RenderDevice.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    template <typename...> // 1 instantiations, e.g. <CpuMemoryProfile>
    class MemoryProfileInfo {
    public:
        MemoryProfileInfo();
    };

    class RenderDevice {
    public:
        GetGPUVendor() const;
        GetDeviceCaps() const;
        void GetPrimaryRenderContext();
        void GetPrimaryRenderContext() const;
        int GetGpuMemoryProfile() const;
        ulong GetTotalAllocatedGPUMemory() const;
        void GetExclusiveObjectGPUMemory() const;
        RenderDevice();
        void OnRenderContextInit(ImmediateRenderContext const&, std::function<void(RenderDeviceCaps const&)>);
        long GetAvailableGPUMemory() const;
        long GetTotalGPUMemory() const;
        GetDeviceInfo(eastl::string&, RenderDeviceInfoType) const;
        void KeepAliveSharedPtr(shared_ptr<void const> const&, OwnerThread);
        bool IsKeepAliveSharedPtr<RenderTargets>(shared_ptr<RenderTargets> const&) const;
        bool IsRenderThread() const;
        GetReadyState() const;
        void GetCurrentThreadRenderContext();
        void
        RunOnRenderThread(fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&);
        ulong ShouldDefer() const;
        void TriggerDeviceLoss();
        void OnContextPreCreate(RenderContext&);
        bool IsRenderContextInit() const;
        void OnWindowResize(math::Rect<unsigned int> const&);
        void PushMemoryZone(char const*);
        void PopMemoryZone();
        RegisterObjectGPUMemory(char const*, unsigned int);
        void UnregisterObjectGPUMemory(char const*, unsigned int, GPUMemoryAllocatorZone*);
        void PrintMemoryUsageToConsole();
        ~RenderDevice();
        void DestroySecondaryRenderContexts();
        bool IsDeferredRendering() const;
        ulong CreateRenderContexts(RenderContextDesc const&);
        byte CreateSecondaryRenderContexts();
        void FinishRenderingAndLoseDevice();
        void RunSynchronouslyOnRenderThread(
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&, bool);
        CreateSecondaryRenderContext();
        void DestroySecondaryRenderContext();
        void RunWithThreadPoolRenderContexts(
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&);
        RunOnThreadPoolRenderContext(
            char const*, fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&);
        void RegisterOnEndFrame(RenderDeviceOnEndFrame*);
        void UnregisterOnEndFrame(RenderDeviceOnEndFrame*);
        void RegisterSecondaryContext(RenderDeviceSecondaryContext*);
        void UnregisterSecondaryContext(RenderDeviceSecondaryContext*);
        void RegisterCallback(RenderDeviceCallback*);
        void UnregisterCallback(RenderDeviceCallback*);
        void OnEndFrame();
        ulong IsMobileDesktopGPU() const;
        void ValidateMSAATextureSamples(int&) const;
        GetLowestPrecisionRGBFloatFormat() const;
        void EvaluateDeviceProfiles();
        GetCurrentMemoryZone();
        void EnableGPUMemoryRecorder(char const*);
        void DisableGPUMemoryRecorder(char const*);
        void PrintToConsole(GPUMemoryAllocatorZone*, int);
        void ClearGPUDeviceMemoryTracking();
        static /* 32 bytes */ MEMORY_PROFILE_CPU_THRESHOLDS; // = { 1024, 1536, 2048, 2048, 3072, 0, 0, 0 }
        static /* 20 bytes */ MEMORY_PROFILE_GPU_THRESHOLDS; // = { 128, 512, 1024, 1536, 2048 }
        static /* 40 bytes */ MEMORY_PROFILE_DEBUG_NAMES;    // initialised in its definition
        static /* 24 bytes */ m_secondaryRenderContext;      // = { 0, 0, 0, 0, 1560, 0 }

        // data members, from how the methods use this: 62238400 bytes
        char _unknown_0[96];
        undefined4 m_gPUVendor; // offset 96
        char _unknown_100[36];
        int field_136; // offset 136
        char _unknown_140[52];
        int field_192; // offset 192
        int field_196; // offset 196
        char _unknown_200[61];
        undefined1 field_261; // offset 261
        undefined1 field_262; // offset 262
        undefined1 field_263; // offset 263
        char _unknown_264[7];
        undefined1 field_271; // offset 271
        char _unknown_272[56];
        undefined1 field_328; // offset 328
        char _unknown_329[4];
        undefined1 field_333; // offset 333
        char _unknown_334[130];
        undefined4 field_464; // offset 464
        uint field_468;       // offset 468
        int field_472;        // offset 472
        char _unknown_476[4];
        int field_480;          // offset 480
        uint field_484;         // offset 484
        int m_gpuMemoryProfile; // offset 488
        undefined1 field_492;   // offset 492
        char _unknown_493[507];
        RenderDeviceOnEndFrame* field_1000; // offset 1000
        char _unknown_1008[88];
        undefined1 field_1096; // offset 1096
        char _unknown_1097[47];
        undefined1 field_1144; // offset 1144
        char _unknown_1145[7];
        ulong m_totalAllocatedGPUMemory; // offset 1152
        char _unknown_1160[62198600];
        undefined1 field_62199760; // offset 62199760
        char _unknown_62199761[38639];
    };

    class ScopedGPUMemoryZone {
    public:
        ScopedGPUMemoryZone(char const*, ...);
        ~ScopedGPUMemoryZone();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1003a2860, 32 bytes, inline, placed by class name and debug map
    // RenderDevice::GetPrimaryRenderContext()
    /* RenderDevice::GetPrimaryRenderContext() const */

    void RenderDevice::GetPrimaryRenderContext() {
        (&field_448)->get();
    }

    // 0x1005f7e60, 16 bytes, inline, placed by class name
    // RenderDevice::GetGpuMemoryProfile() const
    int RenderDevice::GetGpuMemoryProfile() {
        return m_gpuMemoryProfile;
    }

    // 0x1008fd940, 16 bytes, inline, placed by class name
    // RenderDevice::GetTotalAllocatedGPUMemory() const
    ulong RenderDevice::GetTotalAllocatedGPUMemory() {
        return m_totalAllocatedGPUMemory;
    }

    // 0x1008fdc40, 32 bytes, inline, placed by class name
    // RenderDevice::GetExclusiveObjectGPUMemory() const
    void RenderDevice::GetExclusiveObjectGPUMemory() {
        Terrain* this_00;

        this_00 = (Terrain*)(&field_1160)->GetRootZone();
        this_00->GetWaterHeights();
    }

    // 0x100bdcb80, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MemoryProfileInfo<CpuMemoryProfile>::MemoryProfileInfo(): jumps straight to the base-object constructor

    // 0x100be0650, 48 bytes, inline, placed by class name
    // RenderDevice::KeepAliveSharedPtr(shared_ptr<void const> const&, OwnerThread)
    void RenderDevice::KeepAliveSharedPtr(undefined8 param_1, undefined4 param_3) {
        RenderContext* pRVar1;

        pRVar1 = (RenderContext*)GetPrimaryRenderContext(this);
        pRVar1->KeepAliveSharedPtr(param_1, param_3);
    }

    // 0x100be1f90, 32 bytes, inline, placed by class name
    // bool RenderDevice::IsKeepAliveSharedPtr<RenderTargets>(shared_ptr<RenderTargets> const&) const
    bool RenderDevice::IsKeepAliveSharedPtr<RenderTargets>(shared_ptr* param_1) {
        RenderContext* this_00;

        this_00 = (RenderContext*)GetPrimaryRenderContext(this);
        return RenderContext::IsKeepAliveSharedPtr<RenderTargets>(this_00, param_1);
    }

    // 0x100c132d0, 64 bytes, inline, placed by class name
    // RenderDevice::IsRenderThread() const
    bool RenderDevice::IsRenderThread() {
        long lVar1;
        RenderContext* this_00;
        long lVar2;
        bool bVar3;

        lVar1 = GetPrimaryRenderContext(this);
        if (lVar1 == 0) {
            bVar3 = false;
        } else {
            lVar1 = this_thread::GetThreadID();
            this_00 = (RenderContext*)GetPrimaryRenderContext(this);
            lVar2 = this_00->GetThreadID();
            bVar3 = lVar1 == lVar2;
        }
        return bVar3;
    }

    // 0x100c13310, 64 bytes, inline, placed by class name
    // RenderDevice::GetReadyState() const
    undefined8 RenderDevice::GetReadyState() {
        RenderContext* this_00;
        undefined8 uVar2;

        if (GetPrimaryRenderContext(this) == 0) {
            uVar2 = 1;
        } else {
            this_00 = (RenderContext*)GetPrimaryRenderContext(this);
            uVar2 = this_00->GetReadyState();
        }
        return uVar2;
    }

    // 0x100c137f0, 32 bytes, inline, placed by class name
    // RenderDevice::GetCurrentThreadRenderContext()
    void RenderDevice::GetCurrentThreadRenderContext() {
        (&field_456)->get();
    }

    // 0x100c14330, 32 bytes, inline, placed by class name
    // RenderDevice::RunOnRenderThread(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)
    void RenderDevice::RunOnRenderThread(function* param_1) {
        RenderContext* this_00;

        this_00 = (RenderContext*)GetPrimaryRenderContext(this);
        this_00->RunOnRenderThread(param_1);
    }

    // 0x100c14920, 48 bytes, inline, placed by class name
    // RenderDevice::ShouldDefer() const
    ulong RenderDevice::ShouldDefer() {
        ulong uVar2;

        if (IsDeferredRendering(this) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = IsRenderThread(this);
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x100c26fd0, 32 bytes, inline, placed by class name
    // RenderDevice::IsRenderContextInit() const
    bool RenderDevice::IsRenderContextInit() {
        return eastl::basic_string<
                   char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() != 0;
    }

    // 0x100c2bb40, 64 bytes, inline, placed by class name
    // RenderDevice::IsDeferredRendering() const
    bool RenderDevice::IsDeferredRendering() {
        long lVar1;
        RenderContext* this_00;
        bool bVar2;

        lVar1 = GetPrimaryRenderContext(this);
        if (lVar1 == 0) {
            bVar2 = false;
        } else {
            this_00 = (RenderContext*)GetPrimaryRenderContext(this);
            lVar1 = this_00->GetDesc();
            bVar2 = *(char*)(lVar1 + 11) != '\0';
        }
        return bVar2;
    }

    // 0x100c2c240, 48 bytes, inline, placed by class name
    // RenderDevice::RunSynchronouslyOnRenderThread(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&, bool)
    void RenderDevice::RunSynchronouslyOnRenderThread(function* param_1, bool param_2) {
        RenderContext* this_00;

        this_00 = (RenderContext*)GetPrimaryRenderContext(this);
        this_00->RunSynchronouslyOnRenderThread(param_1, param_2);
    }

    // 0x100c2cec0, 16 bytes, complete-object destructor, inline, placed by class name
    // RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111::~$_111(): jumps straight to the base-object destructor

    // 0x100c37330, 16 bytes, base-object destructor, inline, placed by class name
    // RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111::~$_111()
    /* ~$_111() */

    void RenderDevice::RunOnThreadPoolRenderContext(
        char const*,
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111::~__111() {
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)this);
    }

    // 0x100c5b6f0, 48 bytes, inline, placed by class name
    // RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110::operator()() const
    /* RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void
   (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>
   const&)::$_110::TEMPNAMEPLACEHOLDERVALUE() const */

    void RenderDevice::RunWithThreadPoolRenderContexts(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0> const&)::$_110::operator()() {
        function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>* this_00;
        TextureAtlasSlot* pTVar1;

        this_00 = *(function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>**)this;
        m_secondaryRenderContext();
        pTVar1 = (TextureAtlasSlot*)std::unique_ptr<RenderContext, std::default_delete<RenderContext>>::operator*(
            (unique_ptr<RenderContext, std::default_delete<RenderContext>>*)this);
        fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul,
                                (fixedfunction::Methods)0>::operator()(this_00, pTVar1);
    }

    // 0x100c5c820, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111::$_111($_111&&): jumps straight to the base-object constructor

    // 0x100c5c830, 16 bytes, base-object constructor, inline, placed by class name
    // RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111::$_111($_111&&)
    /* $_111($_111&&) */

    void RenderDevice::RunOnThreadPoolRenderContext(
        char const*, fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_111::__111(__111* param_1) {
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)this, (function*)param_1);
    }

    // 0x100c5c920, 128 bytes, inline, placed by class name
    // RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111::operator()() const
    /* RenderDevice::RunOnThreadPoolRenderContext(char const*,
   fixedfunction::function<void (RenderContext&), 128ul, 16ul,
   (fixedfunction::Methods)0> const&)::$_111::TEMPNAMEPLACEHOLDERVALUE() const */

    void RenderDevice::RunOnThreadPoolRenderContext(
        char const*, fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_111::operator()() {
        RenderDevice* this_00;
        RenderContext* pRVar1;
        lock_guard<RenderContext> local_20[8];

        this_00 = (RenderDevice*)Instance();
        pRVar1 = (RenderContext*)GetCurrentThreadRenderContext(this_00);
        if (pRVar1 == (RenderContext*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pRenderContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      284, (char*)0);
        }
        lock_guard<RenderContext>::lock_guard(local_20, pRVar1);
        fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>::
        operator()((function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>*)this,
                   (TextureAtlasSlot*)pRVar1);
        local_20->~lock_guard();
    }

} // namespace jag::render
