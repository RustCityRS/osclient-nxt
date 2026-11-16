// libs/hal/render/debug/GPUMemoryZone.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class GPUMemoryAllocatorZone {
    public:
        GetName() const;
        GetExclusiveObjectMemory() const;
        GPUMemoryAllocatorZone(char const*);
        ~GPUMemoryAllocatorZone();
        void SetParent(GPUMemoryAllocatorZone*);
        void AddMemoryAllocation(eastl::fixed_string<char, 512, true, eastl::allocator> const&, unsigned long long);
        void RemoveMemoryAllocation(eastl::fixed_string<char, 512, true, eastl::allocator> const&, unsigned long long);
        void UpdateInclusiveMemory();
        void ProcessChildren<UpdateInclusiveMemory()::$_105>(UpdateInclusiveMemory()::$_105);
        long GetExclusiveMemory() const;
        long GetInclusiveMemory();
        void PrintToConsole(int);
        GetInclusiveObjectMemory() const;
        int GetInclusiveAllocations();
        void ProcessChildren<RenderDevice::PrintToConsole(GPUMemoryAllocatorZone*, int)::$_115>(
            RenderDevice::PrintToConsole(GPUMemoryAllocatorZone*, int)::$_115);
        GPUMemoryAllocatorZone(GPUMemoryAllocatorZone&&);
        GetSibling() const;

        // data members, from how the methods use this: 29704 bytes
        char _unknown_0[552];
        undefined* field_552; // offset 552
        char _unknown_560[4];
        undefined8 field_564; // offset 564
        char _unknown_572[4];
        int field_576; // offset 576
        char _unknown_580[29108];
        int m_inclusiveAllocations; // offset 29688
        char _unknown_29692[12];
    };

    class RenderDeviceOnEndFrame {
    public:
        // virtual methods in vtable order
        virtual ~RenderDeviceOnEndFrame();
        virtual OnEndFrame();
        RenderDeviceOnEndFrame(bool);
        void RegisterOnEndFrame();

        // data members, from how the methods use this: 9 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
    };

    class RenderDeviceSecondaryContext {
    public:
        // virtual methods in vtable order
        virtual ~RenderDeviceSecondaryContext();
        RenderDeviceSecondaryContext();

        // data members, from how the methods use this: 8 bytes
        undefined** field_0; // offset 0, vtable pointer
    };

    // 0x100c2a0e0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // GPUMemoryAllocatorZone::~GPUMemoryAllocatorZone(): jumps straight to the base-object destructor

    // 0x100c2a130, 80 bytes, placed by debug map only (low confidence)
    // GPUMemoryAllocatorZone::SetParent(GPUMemoryAllocatorZone*)
    void GPUMemoryAllocatorZone::SetParent(GPUMemoryAllocatorZone* param_1) {
        if (field_552 != (undefined*)0) {
            *(undefined8*)(field_552 + 560) = *(undefined8*)((long)&field_564 + 4);
            *(undefined8*)((long)&field_564 + 4) = 0;
        }
        field_552 = (undefined*)param_1;
        if (param_1 != (GPUMemoryAllocatorZone*)0) {
            *(undefined8*)((long)&field_564 + 4) = *(undefined8*)&param_1->field_560;
            *(GPUMemoryAllocatorZone**)&param_1->field_560 = this;
        }
    }

    // 0x100c2a2a0, 224 bytes, base-object constructor, placed by debug map only (low confidence)
    // ScopedGPUMemoryZone::ScopedGPUMemoryZone(char const*, ...)
    void ScopedGPUMemoryZone::ScopedGPUMemoryZone(char* param_1, ...) {
        char in_AL;
        RenderDevice* this_00;
        undefined8 in_RCX;
        undefined8 in_RDX;
        Singleton<RenderDevice>* this_01;
        undefined8 in_R8;
        undefined8 in_R9;
        undefined8 in_XMM0_Qa;
        undefined8 in_XMM1_Qa;
        undefined8 in_XMM2_Qa;
        undefined8 in_XMM3_Qa;
        undefined8 in_XMM4_Qa;
        undefined8 in_XMM5_Qa;
        undefined8 in_XMM6_Qa;
        undefined8 in_XMM7_Qa;
        undefined1 uStack0000000000000008;
        undefined1 local_2e8[16];
        undefined8 local_2d8;
        undefined8 local_2d0;
        undefined8 local_2c8;
        undefined8 local_2c0;
        undefined8 local_2b8;
        undefined8 local_2a8;
        undefined8 local_298;
        undefined8 local_288;
        undefined8 local_278;
        undefined8 local_268;
        undefined8 local_258;
        undefined8 local_248;
        Singleton<RenderDevice> local_238[512];
        undefined8 local_38;
        undefined1* local_30;
        undefined1* local_28;
        long local_18;

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
        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_28 = local_2e8;
        local_30 = &uStack0000000000000008;
        local_38 = 206158430224;
        this_01 = local_238;
        local_2d8 = in_RDX;
        local_2d0 = in_RCX;
        local_2c8 = in_R8;
        local_2c0 = in_R9;
        _vsnprintf((char*)local_238, 512, param_1, &local_38);
        this_00 = (RenderDevice*)this_01->Instance();
        this_00->PushMemoryZone(local_238);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c2ab90, 128 bytes, base-object constructor, placed by debug map only (low confidence)
    // GPUMemoryAllocatorZone::GPUMemoryAllocatorZone(char const*)
    void GPUMemoryAllocatorZone::GPUMemoryAllocatorZone(char* param_1) {
        new (this) eastl::fixed_string<char, 512, true, eastl::allocator>(param_1);
        field_564 = 0;
        *(undefined8*)&field_572 = 0;
        field_552 = (undefined*)0;
        *(undefined8*)&field_560 = 0;
        new (&field_584)
            eastl::fixed_map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory, 48ul, true,
                             eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>, eastl::allocator>();
        m_inclusiveAllocations = 0;
        new (&field_29696)
            eastl::fixed_map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory, 48ul, true,
                             eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>, eastl::allocator>();
    }

    // 0x100c2ac40, 48 bytes, placed by debug map only (low confidence)
    // GPUMemoryAllocatorZone::AddMemoryAllocation(eastl::fixed_string<char, 512, true, eastl::allocator> const&, unsigned long long)
    void GPUMemoryAllocatorZone::AddMemoryAllocation(fixed_string* param_1, ulonglong param_2) {
        long* plVar1;

        field_576 = field_576 + 1;
        plVar1 = (long*)eastl::map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory,
                                   eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                                   eastl::fixed_node_allocator<592ul, 48ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory,
                        eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                        eastl::fixed_node_allocator<592ul, 48ul, 8ul, 0ul, true, eastl::allocator>>*)&field_584,
                   param_1);
        *plVar1 = *plVar1 + param_2;
    }

    // 0x100c2af90, 80 bytes, inline, placed by debug map only (low confidence)
    // void GPUMemoryAllocatorZone::ProcessChildren<GPUMemoryAllocatorZone::UpdateInclusiveMemory()::$_105>(GPUMemoryAllocatorZone::UpdateInclusiveMemory()::$_105)
    void GPUMemoryAllocatorZone::ProcessChildren<GPUMemoryAllocatorZone::UpdateInclusiveMemory()::__105>(
        undefined8 param_2) {
        GPUMemoryAllocatorZone* this_00;
        undefined8 local_20;

        this_00 = *(GPUMemoryAllocatorZone**)&field_560;
        if (this_00 != (GPUMemoryAllocatorZone*)0) {
            local_20 = param_2;
            do {
                UpdateInclusiveMemory()::$_105::operator()((__105*)&local_20, this_00);
                this_00 = (GPUMemoryAllocatorZone*)GetSibling(this_00);
            } while (this_00 != (GPUMemoryAllocatorZone*)0);
        }
    }

    // 0x100c2b4e0, 16 bytes, inline, placed by debug map only (low confidence)
    // GPUMemoryAllocatorZone::GetInclusiveObjectMemory() const
    undefined1* GPUMemoryAllocatorZone::GetInclusiveObjectMemory() {
        return &field_29696;
    }

    // 0x100c2e440, 32 bytes, inline, placed by debug map only (low confidence)
    // GPUMemoryAllocatorZone::GetInclusiveAllocations()
    int GPUMemoryAllocatorZone::GetInclusiveAllocations() {
        UpdateInclusiveMemory(this);
        return m_inclusiveAllocations;
    }

    // 0x100c2e460, 96 bytes, inline, placed by debug map only (low confidence)
    // void GPUMemoryAllocatorZone::ProcessChildren<RenderDevice::PrintToConsole(GPUMemoryAllocatorZone*, int)::$_115>(RenderDevice::PrintToConsole(GPUMemoryAllocatorZone*, int)::$_115)
    void GPUMemoryAllocatorZone::ProcessChildren<RenderDevice::PrintToConsole(GPUMemoryAllocatorZone*, int)::__115>(
        long param_1, undefined8 param_2, undefined8 param_3) {
        GPUMemoryAllocatorZone* this;
        undefined8 local_28;
        undefined8 local_20;

        this = *(GPUMemoryAllocatorZone**)(param_1 + 560);
        if (this != (GPUMemoryAllocatorZone*)0) {
            local_28 = param_2;
            local_20 = param_3;
            do {
                (GPUMemoryAllocatorZone*)->PrintToConsole(int)::$_115::operator()((__115*)&local_28, this);
                this = (GPUMemoryAllocatorZone*)GetSibling(this);
            } while (this != (GPUMemoryAllocatorZone*)0);
        }
    }

    // 0x100c2e580, 48 bytes, placed by debug map only (low confidence)
    // RenderDeviceOnEndFrame::RegisterOnEndFrame()
    void RenderDeviceOnEndFrame::RegisterOnEndFrame() {
        RenderDevice* this_00;

        this_00 = (RenderDevice*)Instance();
        this_00->RegisterOnEndFrame(this);
        field_8 = 1;
    }

    // 0x100c2e5b0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // RenderDeviceOnEndFrame::RenderDeviceOnEndFrame(bool): jumps straight to the base-object constructor

    // 0x100c2e5c0, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // RenderDeviceOnEndFrame::~RenderDeviceOnEndFrame(): jumps straight to the base-object destructor

    // 0x100c2e5d0, 32 bytes, deleting destructor, placed by debug map only (low confidence)
    // RenderDeviceOnEndFrame::~RenderDeviceOnEndFrame()
    void RenderDeviceOnEndFrame::~RenderDeviceOnEndFrame() {
        ~RenderDeviceOnEndFrame(this);
        operator_delete(this);
    }

    // 0x100c2e5f0, 64 bytes, base-object constructor, placed by debug map only (low confidence)
    // RenderDeviceSecondaryContext::RenderDeviceSecondaryContext()
    void RenderDeviceSecondaryContext::RenderDeviceSecondaryContext() {
        RenderDevice* this_00;

        field_0 = &PTR__RenderDeviceSecondaryContext_100f29168;
        if (Singleton<RenderDevice>::InstancePtr() != 0) {
            this_00 = (RenderDevice*)Singleton<RenderDevice>::InstancePtr();
            this_00->RegisterSecondaryContext(this);
        }
    }

    // 0x100c2e630, 64 bytes, base-object destructor, placed by debug map only (low confidence)
    // RenderDeviceSecondaryContext::~RenderDeviceSecondaryContext()
    void RenderDeviceSecondaryContext::~RenderDeviceSecondaryContext() {
        RenderDevice* this_00;

        field_0 = &PTR__RenderDeviceSecondaryContext_100f29168;
        if (Singleton<RenderDevice>::InstancePtr() != 0) {
            this_00 = (RenderDevice*)Singleton<RenderDevice>::InstancePtr();
            this_00->UnregisterSecondaryContext(this);
        }
    }

    // 0x100c2e670, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // RenderDeviceSecondaryContext::~RenderDeviceSecondaryContext(): jumps straight to the base-object destructor

    // 0x100c2e680, 16 bytes, deleting destructor, placed by debug map only (low confidence)
    // RenderDeviceSecondaryContext::~RenderDeviceSecondaryContext()
    void RenderDeviceSecondaryContext::~RenderDeviceSecondaryContext() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

} // namespace jag::render

namespace jag::fixedfunction {
    // 0x100c2c270, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&): jumps straight to the base-object constructor

    // 0x100c2ceb0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function(function<void (render::RenderContext&), 128ul, 16ul, (Methods)0> const&): jumps straight to the base-object constructor

    // 0x100c2d850, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderDevice::TriggerDeviceLoss()::$_114, void>(render::RenderDevice::TriggerDeviceLoss()::$_114&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction

namespace jag {
    // 0x100c2b4b0, 48 bytes, inline, placed by debug map only (low confidence)
    // float Bytes2Megabytes<unsigned long long>(unsigned long long)
    float Bytes2Megabytes<unsigned long long>(ulonglong param_1) {
        return (float)param_1 * 9.536743e-07;
    }

} // namespace jag

// 0x100c2db50, 16 bytes, inline, placed by debug map only (low confidence)
// isdigit(int)
void isdigit(int param_1) {
    __isctype(param_1, 1024);
}
