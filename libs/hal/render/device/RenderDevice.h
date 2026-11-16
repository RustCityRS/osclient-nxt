// libs/hal/render/device/RenderDevice.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    template <typename...> // 1 instantiations, e.g. <CpuMemoryProfile>
    class MemoryProfileInfo {
    public:
        MemoryProfileInfo();
    };

    class RenderDevice {
    public:
        uint32_t GetGPUVendor() const;
        uint64_t* GetDeviceCaps() const;
        void GetPrimaryRenderContext();
        void GetPrimaryRenderContext() const;
        int GetGpuMemoryProfile() const;
        unsigned long GetTotalAllocatedGPUMemory() const;
        void GetExclusiveObjectGPUMemory() const;
        RenderDevice();
        void OnRenderContextInit(const ImmediateRenderContext& immediateRenderContext,
                                 std::function<void(RenderDeviceCaps const&)> callback);
        long GetAvailableGPUMemory() const;
        long GetTotalGPUMemory() const;
        uint64_t GetDeviceInfo(eastl::string& str, RenderDeviceInfoType renderDeviceInfoType) const;
        void KeepAliveSharedPtr(const shared_ptr<void const>& arg1, OwnerThread ownerThread);
        bool IsKeepAliveSharedPtr<RenderTargets>(const shared_ptr<RenderTargets>& renderTargets) const;
        bool IsRenderThread() const;
        uint64_t GetReadyState() const;
        RenderContext* GetCurrentThreadRenderContext();
        void RunOnRenderThread(
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback);
        unsigned long ShouldDefer() const;
        void TriggerDeviceLoss();
        void OnContextPreCreate(RenderContext& renderContext);
        bool IsRenderContextInit() const;
        void OnWindowResize(const math::Rect<unsigned int>& rect);
        void PushMemoryZone(const char* str);
        void PopMemoryZone();
        uint64_t RegisterObjectGPUMemory(const char* str, unsigned int arg2);
        void UnregisterObjectGPUMemory(const char* str, unsigned int arg2,
                                       GPUMemoryAllocatorZone* gpuMemoryAllocatorZone);
        void PrintMemoryUsageToConsole();
        ~RenderDevice();
        void DestroySecondaryRenderContexts();
        bool IsDeferredRendering() const;
        unsigned long CreateRenderContexts(const RenderContextDesc& renderContextDesc);
        uint8_t CreateSecondaryRenderContexts();
        void FinishRenderingAndLoseDevice();
        void RunSynchronouslyOnRenderThread(
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback,
            bool arg2);
        uint32_t CreateSecondaryRenderContext();
        void DestroySecondaryRenderContext();
        void RunWithThreadPoolRenderContexts(
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback);
        auto RunOnThreadPoolRenderContext(
            const char* str,
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback);
        void RegisterOnEndFrame(RenderDeviceOnEndFrame* renderDeviceOnEndFrame);
        void UnregisterOnEndFrame(RenderDeviceOnEndFrame* renderDeviceOnEndFrame);
        void RegisterSecondaryContext(RenderDeviceSecondaryContext* renderDeviceSecondaryContext);
        void UnregisterSecondaryContext(RenderDeviceSecondaryContext* renderDeviceSecondaryContext);
        void RegisterCallback(RenderDeviceCallback* renderDeviceCallback);
        void UnregisterCallback(RenderDeviceCallback* renderDeviceCallback);
        void OnEndFrame();
        unsigned long IsMobileDesktopGPU() const;
        void ValidateMSAATextureSamples(int& arg1) const;
        uint64_t GetLowestPrecisionRGBFloatFormat() const;
        void EvaluateDeviceProfiles();
        uint64_t GetCurrentMemoryZone();
        void EnableGPUMemoryRecorder(const char* str);
        void DisableGPUMemoryRecorder(const char* str);
        void PrintToConsole(GPUMemoryAllocatorZone* gpuMemoryAllocatorZone, int arg2);
        void ClearGPUDeviceMemoryTracking();
        static int32_t MEMORY_PROFILE_CPU_THRESHOLDS[8];  // = { 1024, 1536, 2048, 2048, 3072, 0, 0, 0 }
        static int32_t MEMORY_PROFILE_GPU_THRESHOLDS[5];  // = { 128, 512, 1024, 1536, 2048 }
        static const void* MEMORY_PROFILE_DEBUG_NAMES[5]; // initialised in its definition
        static int32_t m_secondaryRenderContext[6];       // = { 0, 0, 0, 0, 1560, 0 }

    private:
        uint8_t _unknown_0[96];
        uint32_t m_gPUVendor;
        uint8_t _unknown_100[36];
        int field_136;
        uint8_t _unknown_140[52];
        int field_192;
        int field_196;
        uint8_t _unknown_200[61];
        uint8_t field_261;
        uint8_t field_262;
        uint8_t field_263;
        uint8_t _unknown_264[7];
        uint8_t field_271;
        uint8_t _unknown_272[56];
        uint8_t field_328;
        uint8_t _unknown_329[4];
        uint8_t field_333;
        uint8_t _unknown_334[130];
        unsigned int field_464;
        unsigned int field_468;
        int field_472;
        uint8_t _unknown_476[4];
        unsigned int field_480;
        unsigned int field_484;
        int m_gpuMemoryProfile;
        uint8_t field_492;
        uint8_t _unknown_493[603];
        uint8_t field_1096;
        uint8_t _unknown_1097[7];
        RenderDeviceSecondaryContext* field_1104;
        uint8_t _unknown_1112[32];
        uint8_t field_1144;
        uint8_t _unknown_1145[7];
        unsigned long m_totalAllocatedGPUMemory;
        uint8_t _unknown_1160[62237240];
    };

    class ScopedGPUMemoryZone {
    public:
        ScopedGPUMemoryZone(const char* str, ...);
        ~ScopedGPUMemoryZone();

        uint8_t _unknown_0[1];
    };

    // 0x1003a2860
    void RenderDevice::GetPrimaryRenderContext() {
        field_448.get();
    }

    // 0x1005f7e60
    int RenderDevice::GetGpuMemoryProfile() const {
        return m_gpuMemoryProfile;
    }

    // 0x1008fd940
    unsigned long RenderDevice::GetTotalAllocatedGPUMemory() const {
        return m_totalAllocatedGPUMemory;
    }

    // 0x1008fdc40
    void RenderDevice::GetExclusiveObjectGPUMemory() const {
        ((Terrain*)field_1160.GetRootZone())->GetWaterHeights();
    }

    // 0x100be0650
    void RenderDevice::KeepAliveSharedPtr(const shared_ptr<void const>& arg1, OwnerThread ownerThread) {
        ((RenderContext*)GetPrimaryRenderContext())->KeepAliveSharedPtr(arg1, ownerThread);
    }

    // 0x100be1f90
    bool RenderDevice::IsKeepAliveSharedPtr<RenderTargets>(const shared_ptr<RenderTargets>& renderTargets) const {
        return ((RenderContext*)GetPrimaryRenderContext())->IsKeepAliveSharedPtr<RenderTargets>(renderTargets);
    }

    // 0x100c132d0
    bool RenderDevice::IsRenderThread() const {
        long lVar2;
        bool bVar3;

        long lVar1 = GetPrimaryRenderContext();
        if (lVar1 == 0) {
            bVar3 = false;
        } else {
            lVar1 = this_thread::GetThreadID();
            lVar2 = ((RenderContext*)GetPrimaryRenderContext())->GetThreadID();
            bVar3 = lVar1 == lVar2;
        }
        return bVar3;
    }

    // 0x100c13310
    uint64_t RenderDevice::GetReadyState() const {
        uint64_t uVar2;

        if (GetPrimaryRenderContext() == 0) {
            uVar2 = 1;
        } else {
            uVar2 = ((RenderContext*)GetPrimaryRenderContext())->GetReadyState();
        }
        return uVar2;
    }

    // 0x100c137f0
    RenderContext* RenderDevice::GetCurrentThreadRenderContext() {
        return (RenderContext*)field_456.get();
    }

    // 0x100c14330
    void RenderDevice::RunOnRenderThread(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback) {
        ((RenderContext*)GetPrimaryRenderContext())->RunOnRenderThread(callback);
    }

    // 0x100c14920
    unsigned long RenderDevice::ShouldDefer() const {
        unsigned long uVar2;

        if (IsDeferredRendering() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = IsRenderThread();
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x100c26fd0
    bool RenderDevice::IsRenderContextInit() const {
        return size() != 0;
    }

    // 0x100c2bb40
    bool RenderDevice::IsDeferredRendering() const {
        bool bVar2;

        long lVar1 = GetPrimaryRenderContext();
        if (lVar1 == 0) {
            bVar2 = false;
        } else {
            lVar1 = ((RenderContext*)GetPrimaryRenderContext())->GetDesc();
            bVar2 = *(char*)(lVar1 + 11) != '\0';
        }
        return bVar2;
    }

    // 0x100c2c240
    void RenderDevice::RunSynchronouslyOnRenderThread(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const& callback,
        bool arg2) {
        ((RenderContext*)GetPrimaryRenderContext())->RunSynchronouslyOnRenderThread(callback, arg2);
    }

    // 0x100c37330
    RenderDevice::RunOnThreadPoolRenderContext(
        char const*,
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111::~$_111() {
    }

    // 0x100c5b6f0
    void RenderDevice::RunWithThreadPoolRenderContexts(
        fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                (fixedfunction::Methods)0> const&)::$_110::operator()() const {
        function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>* this_00;

        this_00 = *(function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>**)this;
        m_secondaryRenderContext();
        **this;
        fixedfunction::function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul,
                                (fixedfunction::Methods)0>::operator()(this_00);
    }

    // 0x100c5c830
    RenderDevice::RunOnThreadPoolRenderContext(
        char const*, fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_111::$_111($_111&& arg1)
        : fixedfunction::function(arg1) {}

    // 0x100c5c920
    void RenderDevice::RunOnThreadPoolRenderContext(
        char const*, fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_111::operator()() const {
        auto renderContext = GetCurrentThreadRenderContext((RenderDevice*)Instance());
        if (renderContext == nullptr) {
            LogAssert("pRenderContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      284, nullptr);
        }
        lock_guard<RenderContext> local_20(*renderContext);
        fixedfunction::function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>::
        operator()((function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0>*)this);
    }

} // namespace jag::render
