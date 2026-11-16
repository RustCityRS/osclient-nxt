// libs/hal/render/debug/GPUMemoryZone.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class GPUMemoryAllocatorZone {
    public:
        void GetName() const;
        uint8_t* GetExclusiveObjectMemory() const;
        GPUMemoryAllocatorZone(const char* str);
        ~GPUMemoryAllocatorZone();
        void SetParent(GPUMemoryAllocatorZone* gpuMemoryAllocatorZone);
        void AddMemoryAllocation(const eastl::fixed_string<char, 512>& str, unsigned long long arg2);
        void RemoveMemoryAllocation(const eastl::fixed_string<char, 512>& str, unsigned long long arg2);
        void UpdateInclusiveMemory();
        void ProcessChildren<UpdateInclusiveMemory()::$_105>(UpdateInclusiveMemory()::$_105 arg1);
        long GetExclusiveMemory() const;
        long GetInclusiveMemory();
        void PrintToConsole(int arg1);
        uint8_t* GetInclusiveObjectMemory() const;
        int GetInclusiveAllocations();
        void ProcessChildren<RenderDevice::PrintToConsole(GPUMemoryAllocatorZone*, int)::$_115>(
            RenderDevice::PrintToConsole(GPUMemoryAllocatorZone*, int)::$_115 arg1);
        GPUMemoryAllocatorZone(GPUMemoryAllocatorZone&& gpuMemoryAllocatorZone);
        uint64_t GetSibling() const;

    private:
        uint8_t _unknown_0[552];
        uint8_t* field_552;
        uint8_t _unknown_560[4];
        uint64_t field_564;
        uint8_t _unknown_572[4];
        int field_576;
        uint8_t _unknown_580[29108];
        int m_inclusiveAllocations;
        uint8_t _unknown_29692[12];
    };

    class RenderDeviceOnEndFrame {
    public:
        // virtual methods in vtable order
        virtual ~RenderDeviceOnEndFrame();
        virtual void OnEndFrame();
        RenderDeviceOnEndFrame(bool arg1);
        void RegisterOnEndFrame();

    private:
        uint8_t field_8;
    };

    class RenderDeviceSecondaryContext {
    public:
        // virtual methods in vtable order
        virtual ~RenderDeviceSecondaryContext();
        RenderDeviceSecondaryContext();
    };

    // 0x100c2a130
    void GPUMemoryAllocatorZone::SetParent(GPUMemoryAllocatorZone* gpuMemoryAllocatorZone) {
        if (field_552 != nullptr) {
            *(uint64_t*)(field_552 + 560) = *(uint64_t*)((long)&field_564 + 4);
            *(uint64_t*)((long)&field_564 + 4) = 0;
        }
        field_552 = (uint8_t*)gpuMemoryAllocatorZone;
        if (gpuMemoryAllocatorZone != nullptr) {
            *(uint64_t*)((long)&field_564 + 4) = *(uint64_t*)&gpuMemoryAllocatorZone->field_560;
            *(GPUMemoryAllocatorZone**)&gpuMemoryAllocatorZone->field_560 = this;
        }
    }

    // 0x100c2a2a0
    ScopedGPUMemoryZone::ScopedGPUMemoryZone(const char* str, ...) {
        char in_AL;
        uint64_t in_RCX;
        uint64_t in_R8;
        uint64_t in_R9;
        uint64_t in_XMM0_Qa;
        uint64_t in_XMM1_Qa;
        uint64_t in_XMM2_Qa;
        uint64_t in_XMM3_Qa;
        uint64_t in_XMM4_Qa;
        uint64_t in_XMM5_Qa;
        uint64_t in_XMM6_Qa;
        uint64_t in_XMM7_Qa;
        uint8_t uStack0000000000000008;
        uint8_t local_2e8[16];
        uint64_t local_2b8;
        uint64_t local_2a8;
        uint64_t local_298;
        uint64_t local_288;
        uint64_t local_278;
        uint64_t local_268;
        uint64_t local_258;
        uint64_t local_248;
        Singleton<RenderDevice> local_238;

        if (in_AL != '\0') {
            local_2b8 = in_XMM0_Qa;
            local_2a8 = in_XMM1_Qa;
            local_298 = in_XMM2_Qa;
            local_288 = in_XMM3_Qa;
            local_278 = in_XMM4_Qa;
            local_268 = in_XMM5_Qa;
            local_258 = in_XMM6_Qa;
            local_248 = in_XMM7_Qa;
        }
        uint8_t* local_28 = local_2e8;
        uint8_t* local_30 = &uStack0000000000000008;
        uint64_t local_38 = 206158430224;
        char* local_2d8 = str;
        uint64_t local_2d0 = in_RCX;
        uint64_t local_2c8 = in_R8;
        uint64_t local_2c0 = in_R9;
        ((RenderDevice*)&local_238->Instance())->PushMemoryZone(&local_238);
    }

    // 0x100c2ab90
    GPUMemoryAllocatorZone::GPUMemoryAllocatorZone(const char* str)
        : eastl::fixed_string<char, 512>(str), field_564(0) {
        *(uint64_t*)&field_572 = 0;
        field_552 = nullptr;
        *(uint64_t*)&field_560 = 0;
        new (&field_584) eastl::fixed_map<eastl::fixed_string<char, 512>, ZoneObjectMemory, 48ul>();
        m_inclusiveAllocations = 0;
        new (&field_29696) eastl::fixed_map<eastl::fixed_string<char, 512>, ZoneObjectMemory, 48ul>();
    }

    // 0x100c2ac40
    void GPUMemoryAllocatorZone::AddMemoryAllocation(const eastl::fixed_string<char, 512>& str,
                                                     unsigned long long arg2) {
        field_576 = field_576 + 1;
        long* plVar1 = &field_584[str];
        *plVar1 = *plVar1 + arg2;
    }

    // 0x100c2af90
    void GPUMemoryAllocatorZone::ProcessChildren<GPUMemoryAllocatorZone::UpdateInclusiveMemory()::$_105>(
        GPUMemoryAllocatorZone::UpdateInclusiveMemory()::$_105 arg1) {
        __105 local_20;

        GPUMemoryAllocatorZone* gpuMemoryAllocatorZone = *(GPUMemoryAllocatorZone**)&field_560;
        if (gpuMemoryAllocatorZone != nullptr) {
            local_20.field_0 = (long)arg1;
            do {
                UpdateInclusiveMemory()::$_105::operator()(&local_20, gpuMemoryAllocatorZone);
                gpuMemoryAllocatorZone = (GPUMemoryAllocatorZone*)GetSibling(gpuMemoryAllocatorZone);
            } while (gpuMemoryAllocatorZone != nullptr);
        }
    }

    // 0x100c2b4e0
    uint8_t* GPUMemoryAllocatorZone::GetInclusiveObjectMemory() const {
        return &field_29696;
    }

    // 0x100c2e440
    int GPUMemoryAllocatorZone::GetInclusiveAllocations() {
        UpdateInclusiveMemory();
        return m_inclusiveAllocations;
    }

    // 0x100c2e460
    void GPUMemoryAllocatorZone::ProcessChildren<RenderDevice::PrintToConsole(GPUMemoryAllocatorZone*, int)::$_115>(
        RenderDevice::PrintToConsole(GPUMemoryAllocatorZone*, int)::$_115 arg1) {
        __115* local_28[2];

        GPUMemoryAllocatorZone* gpuMemoryAllocatorZone = *(GPUMemoryAllocatorZone**)&field_560;
        if (gpuMemoryAllocatorZone != nullptr) {
            local_28[0] = arg1;
            do {
                (GPUMemoryAllocatorZone*)
                    ->PrintToConsole(int)::$_115::operator()((__115*)local_28, gpuMemoryAllocatorZone);
                gpuMemoryAllocatorZone = (GPUMemoryAllocatorZone*)GetSibling(gpuMemoryAllocatorZone);
            } while (gpuMemoryAllocatorZone != nullptr);
        }
    }

    // 0x100c2e580
    void RenderDeviceOnEndFrame::RegisterOnEndFrame() {
        ((RenderDevice*)Instance())->RegisterOnEndFrame(this);
        field_8 = 1;
    }

    // 0x100c2e5f0
    RenderDeviceSecondaryContext::RenderDeviceSecondaryContext() {
        auto pRVar1 = InstancePtr();
        if (pRVar1 != nullptr) {
            pRVar1 = InstancePtr();
            pRVar1->RegisterSecondaryContext(this);
        }
    }

    // 0x100c2e630
    RenderDeviceSecondaryContext::~RenderDeviceSecondaryContext() {
        auto pRVar1 = InstancePtr();
        if (pRVar1 != nullptr) {
            pRVar1 = InstancePtr();
            pRVar1->UnregisterSecondaryContext(this);
        }
    }

} // namespace jag::render

namespace jag {
    // 0x100c2b4b0
    float Bytes2Megabytes<unsigned long long>(unsigned long long arg1) {
        return (float)arg1 * 9.536743e-07;
    }

} // namespace jag

// 0x100c2db50
void isdigit(int arg1) {
    __isctype(arg1, 1024);
}
