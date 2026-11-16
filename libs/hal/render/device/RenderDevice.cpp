// libs/hal/render/device/RenderDevice.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "RenderDevice.h"

namespace jag::render {
    // 0x100d997c0, 32 bytes, __const
    RenderDevice::MEMORY_PROFILE_CPU_THRESHOLDS = {1024, 1536, 2048, 2048, 3072, 0, 0, 0};

    // 0x100d997e0, 20 bytes, __const
    RenderDevice::MEMORY_PROFILE_GPU_THRESHOLDS = {128, 512, 1024, 1536, 2048};

    // 0x100f48890, 40 bytes, __data
    RenderDevice::MEMORY_PROFILE_DEBUG_NAMES = {
        "Low", "Medium", "High", "High + Uncompressed", "Ultra",
    };

    // 0x100f4e380, 24 bytes, __thread_vars
    RenderDevice::m_secondaryRenderContext = {0, 0, 0, 0, 1560, 0};

    // 0x100009720: the linker folded this into BaseApp::GetExitCode(), which has identical code
    RenderDevice::GetGPUVendor() const;

    // 0x10005d8c0: the linker folded this into oldscape::OSClientConsoleUI::GetBounds() const, which has identical code
    RenderDevice::GetDeviceCaps() const;

    // 0x1003a2860: the linker folded this into RenderDevice::GetPrimaryRenderContext(), which has identical code
    RenderDevice::GetPrimaryRenderContext() const;

    // 0x100c19e50, 928 bytes, placed by class name and debug map
    // RenderDevice::TriggerDeviceLoss()
    void RenderDevice::TriggerDeviceLoss() {
        undefined1* this_00;
        undefined1* this_01;
        char cVar1;
        bool bVar2;
        RenderContext* this_02;
        undefined8 uVar3;
        long lVar4;
        RenderDeviceCallback** ppRVar5;
        RenderDeviceCallback** ppRVar6;
        long* plVar7;
        undefined8* puVar8;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar9;
        undefined1 auVar10[16];
        scoped_lock<std::mutex> local_f0[8];
        undefined1 local_e8[16];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      428, (char*)0);
        }
        this_00 = &field_448;
        bVar2 = this_00->operator_cast_to_bool();
        if (!bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_primaryRenderContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      429, (char*)0);
        }
        this_02 = (RenderContext*)std::unique_ptr<RenderContext, std::default_delete<RenderContext>>::operator->(
            (unique_ptr<RenderContext, std::default_delete<RenderContext>>*)this_00);
        cVar1 = this_02->IsInsideBeginEnd();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_primaryRenderContext->IsInsideBeginEnd()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      432, (char*)0);
        }
        FinishRenderingAndLoseDevice(this);
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      436, (char*)0);
        }
        field_1144 = 1;
        this_01 = &field_912;
        cVar1 = this_01->empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_removedCallbacks.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      438, (char*)0);
        }
        uVar3 = logger::default_logger();
        uVar9 = 0;
        logger::Logger::Log(
            uVar3, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/RenderDevice.cpp",
            440, "Running OnDeviceLost callbacks");
        std::scoped_lock<std::mutex>::scoped_lock(local_f0, (mutex*)&field_848);
        do {
            lVar4 = std::array<DeviceCallbacks, 4ul>::operator[]((array<DeviceCallbacks, 4ul>*)&field_496, uVar9);
            ppRVar5 = (RenderDeviceCallback**)((lVar4 + 56))->HeapBeginPtr();
            ppRVar6 = (RenderDeviceCallback**)((lVar4 + 56))->end();
            for (; ppRVar5 != ppRVar6; ppRVar5 = ppRVar5 + 1) {
                auVar10 = this_01->find(ppRVar5);
                local_d8._0_16_ = auVar10;
                auVar10 = this_01->end();
                local_e8 = auVar10;
                bVar2 = eastl::operator==((eastl*)&local_d8, (hashtable_iterator_base*)local_e8, auVar10._8_8_);
                if (bVar2) {
                    (*(code*)(*ppRVar5)->field_0[2])();
                }
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 != 4);
        std::scoped_lock<std::mutex>::~scoped_lock(local_f0);
        plVar7 = (long*)std::unique_ptr<RenderContext, std::default_delete<RenderContext>>::operator->(
            (unique_ptr<RenderContext, std::default_delete<RenderContext>>*)this_00);
        (**(code**)(*plVar7 + 16))(plVar7);
        uVar3 = logger::default_logger();
        logger::Logger::Log(
            uVar3, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/RenderDevice.cpp",
            459, "Finished running OnDeviceLost callbacks");
        field_1144 = 0;
        auVar10 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                   eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                   eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                   eastl::prime_rehash_policy, false, true, true>::begin();
        local_d8._0_16_ = auVar10;
        auVar10 = this_01->end();
        local_e8 = auVar10;
        bVar2 = eastl::operator!=((eastl*)&local_d8, (hashtable_iterator_base*)local_e8, auVar10._8_8_);
        if (bVar2) {
            do {
                puVar8 = (undefined8*)local_d8.HeapBeginPtr();
                UnregisterCallback(this, (RenderDeviceCallback*)*puVar8);
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>*)&local_d8);
                bVar2 = eastl::operator!=((eastl*)&local_d8, (hashtable_iterator_base*)local_e8, extraout_RDX);
            } while (bVar2);
        }
        this_01->clear();
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderDevice::TriggerDeviceLoss()::__114, void>((__114*)&local_d8);
        RunSynchronouslyOnRenderThread(this, &local_d8, false);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c1a5e0, 32 bytes, placed by class name and debug map
    // RenderDevice::OnContextPreCreate(RenderContext&)
    void RenderDevice::OnContextPreCreate(RenderContext* param_1) {
        (&field_456, param_1)->reset();
    }

    // 0x100c29220, 288 bytes, placed by class name
    // RenderDevice::OnWindowResize(math::Rect<unsigned int> const&)
    void RenderDevice::OnWindowResize(Rect* param_1) {
        long* plVar1;
        long lVar4;
        long* plVar5;
        long* plVar6;
        ulong uVar7;
        scoped_lock<std::mutex> local_38[8];

        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      478, (char*)0);
        }
        if (GetReadyState(this) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("GetReadyState() == RenderContextReadyState::STATE_READY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      479, (char*)0);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_848);
        uVar7 = 0;
        do {
            lVar4 = std::array<DeviceCallbacks, 4ul>::operator[]((array<DeviceCallbacks, 4ul>*)&field_496, uVar7);
            plVar5 = (long*)((lVar4 + 56))->HeapBeginPtr();
            plVar6 = (long*)((lVar4 + 56))->end();
            for (; plVar5 != plVar6; plVar5 = plVar5 + 1) {
                plVar1 = (long*)*plVar5;
                if (plVar1 != (long*)0) {
                    (**(code**)(*plVar1 + 24))(plVar1, param_1);
                }
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 != 4);
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
    }

    // 0x100c2a380, 96 bytes, placed by class name
    // RenderDevice::PushMemoryZone(char const*)
    void RenderDevice::PushMemoryZone(char* param_1) {
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_62238336);
        (&field_1160, param_1)->PushZone();
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100c2a3e0, 224 bytes, complete-object constructor, placed by neighbouring functions
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

    // 0x100c2a4c0, 32 bytes, base-object destructor, placed by neighbouring functions
    // ScopedGPUMemoryZone::~ScopedGPUMemoryZone()
    void ScopedGPUMemoryZone::~ScopedGPUMemoryZone() {
        RenderDevice* this_00;

        this_00 = (RenderDevice*)Instance();
        this_00->PopMemoryZone();
    }

    // 0x100c2a4e0, 80 bytes, placed by class name
    // RenderDevice::PopMemoryZone()
    void RenderDevice::PopMemoryZone() {
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)&field_62238336);
        (&field_1160)->PopZone();
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
    }

    // 0x100c2a530, 16 bytes, complete-object destructor, placed by neighbouring functions
    // ScopedGPUMemoryZone::~ScopedGPUMemoryZone(): jumps straight to the base-object destructor

    // 0x100c2a540, 416 bytes, placed by class name
    // RenderDevice::RegisterObjectGPUMemory(char const*, unsigned int)
    undefined8 RenderDevice::RegisterObjectGPUMemory(char* param_1, uint param_2) {
        char* pcVar2;
        long lVar3;
        long* plVar4;
        GPUMemoryAllocatorZone* this_00;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar5;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_278[8];
        hashtable_iterator_base local_270[8];
        scoped_lock<std::mutex> local_268[8];
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_2 == 0) {
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return 0;
        }
        pcVar2 = "Unknown";
        if (param_1 != (char*)0) {
            pcVar2 = param_1;
        }
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_260, pcVar2);
        std::scoped_lock<std::mutex>::scoped_lock(local_268, (mutex*)&field_62238336);
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar5 = extraout_RDX;
        while (true) {
            if (!eastl::operator!=(local_278, local_270, phVar5))
                break;
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_278);
            plVar4 = (long*)eastl::map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory,
                                       eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                                       eastl::fixed_node_allocator<592ul, 48ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                *(map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory,
                      eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                      eastl::fixed_node_allocator<592ul, 48ul, 8ul, 0ul, true, eastl::allocator>>**)(lVar3 + 552),
                (fixed_string*)local_260);
            *plVar4 = *plVar4 + (ulong)param_2;
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_278);
            phVar5 = extraout_RDX_00;
        }
        m_totalAllocatedGPUMemory = m_totalAllocatedGPUMemory + (ulong)param_2;
        this_00 = (GPUMemoryAllocatorZone*)(&field_1160)->GetCurrentZone();
        if (this_00 == (GPUMemoryAllocatorZone*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pCurrentZone != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      719, (char*)0);
        }
        this_00->AddMemoryAllocation(local_260, (ulong)param_2);
        std::scoped_lock<std::mutex>::~scoped_lock(local_268);
        /* WARNING: Subroutine does not return */
        local_260->~fixed_string();
    }

    // 0x100c2a6e0, 560 bytes, placed by class name
    // RenderDevice::UnregisterObjectGPUMemory(char const*, unsigned int, GPUMemoryAllocatorZone*)
    void RenderDevice::UnregisterObjectGPUMemory(char* param_1, uint param_2, GPUMemoryAllocatorZone* param_3) {
        bool bVar1;
        char* pcVar2;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar4;
        ulong uVar5;
        undefined1 auVar6[16];
        rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>
            local_298[8];
        rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>
            local_290[8];
        hashtable_iterator_base local_288[8];
        undefined8 local_280;
        GPUMemoryAllocatorZone* local_278;
        RenderDevice* local_270;
        scoped_lock<std::mutex> local_268[8];
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_2 == 0) {
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return;
        }
        pcVar2 = "Unknown";
        if (param_1 != (char*)0) {
            pcVar2 = param_1;
        }
        local_278 = param_3;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_260, pcVar2);
        std::scoped_lock<std::mutex>::scoped_lock(local_268, (mutex*)&field_62238336);
        local_270 = this;
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        uVar5 = (ulong)param_2;
        phVar4 = extraout_RDX;
        while (true) {
            bVar1 = eastl::operator!=((eastl*)local_298, local_288, phVar4);
            if (!bVar1)
                break;
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const,
                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::operator*(local_298);
            eastl::rbtree<eastl::fixed_string<char, 512, true, eastl::allocator>,
                          eastl::pair<eastl::fixed_string<char, 512, true, eastl::allocator> const, ZoneObjectMemory>,
                          eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                          eastl::fixed_node_allocator<592ul, 48ul, 8ul, 0ul, true, eastl::allocator>,
                          eastl::use_first<eastl::pair<eastl::fixed_string<char, 512, true, eastl::allocator> const,
                                                       ZoneObjectMemory>>,
                          true, true>::find((fixed_string*)local_290);
            auVar6 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                   eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                   true>::end();
            local_280 = auVar6._0_8_;
            bVar1 = eastl::operator!=((eastl*)local_290, (hashtable_iterator_base*)&local_280, auVar6._8_8_);
            if (bVar1) {
                lVar3 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const,
                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::operator*(local_290);
                if (*(ulong*)(lVar3 + 552) < uVar5) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("objAllocationIt->second.m_size >= size",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                              "RenderDevice.cpp",
                              746, (char*)0);
                }
                lVar3 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const,
                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::operator*(local_290);
                *(long*)(lVar3 + 552) = *(long*)(lVar3 + 552) - uVar5;
            }
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const,
                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::operator++(local_298);
            phVar4 = extraout_RDX_00;
        }
        if (local_270->m_totalAllocatedGPUMemory < uVar5) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_TotalAllocatedGPUMemory >= size",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      752, (char*)0);
        }
        local_270->m_totalAllocatedGPUMemory = local_270->m_totalAllocatedGPUMemory - uVar5;
        if (local_278 == (GPUMemoryAllocatorZone*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("memoryZone",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      755, (char*)0);
        }
        local_278->RemoveMemoryAllocation(local_260, uVar5);
        std::scoped_lock<std::mutex>::~scoped_lock(local_268);
        /* WARNING: Subroutine does not return */
        local_260->~fixed_string();
    }

    // 0x100c2a930, 608 bytes, placed by class name
    // RenderDevice::PrintMemoryUsageToConsole()
    void RenderDevice::PrintMemoryUsageToConsole() {
        char cVar1;
        bool bVar2;
        GPUMemoryAllocatorZone* pGVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        long lVar6;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        float fVar7;
        eastl local_58[8];
        hashtable_iterator_base local_50[8];
        double local_48;
        eastl local_40[8];
        hashtable_iterator_base local_38[8];

        pGVar3 = (GPUMemoryAllocatorZone*)(&field_1160)->GetRootZone();
        uVar4 = logger::default_logger();
        logger::Logger::Log(
            uVar4, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/RenderDevice.cpp",
            809, "\nGPU Memory Report");
        uVar4 = logger::default_logger();
        logger::Logger::Log(
            uVar4, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/RenderDevice.cpp",
            810, "--------------------------------------");
        PrintToConsole(this, pGVar3, 0);
        cVar1 = (&field_60269944)->empty();
        if (cVar1 == '\0') {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "device/RenderDevice.cpp",
                                817, "\nMemory Recorders:");
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            bVar2 = eastl::operator!=(local_40, local_50, extraout_RDX);
            if (bVar2) {
                do {
                    eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator*(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                            local_40);
                    uVar4 = logger::default_logger();
                    uVar5 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
                    logger::Logger::Log(uVar4, 0, 7,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/device/RenderDevice.cpp",
                                        820, "\t<%s>", uVar5);
                    eastl::vector<unsigned long,
                                  eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    bVar2 = eastl::operator!=(local_58, local_38, extraout_RDX_01);
                    if (bVar2) {
                        do {
                            lVar6 = eastl::rbtree_iterator<
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                            operator*((rbtree_iterator<
                                       eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                       eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                       eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                                          local_58);
                            fVar7 = Bytes2Megabytes<unsigned long long>(*(ulonglong*)(lVar6 + 552));
                            local_48 = (double)fVar7;
                            uVar4 = logger::default_logger();
                            uVar5 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::begin();
                            logger::Logger::Log(local_48, uVar4, 0, 7,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "hal/render/device/RenderDevice.cpp",
                                                824, "\t\t%s Memory: %.2lfMb", uVar5);
                            eastl::rbtree_iterator<
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                eastl::pair<unsigned int const,
                                            eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                            operator++((rbtree_iterator<
                                        eastl::pair<unsigned int const,
                                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                        eastl::pair<unsigned int const,
                                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                        eastl::pair<unsigned int const,
                                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                                           local_58);
                            bVar2 = eastl::operator!=(local_58, local_38, extraout_RDX_02);
                        } while (bVar2);
                    }
                    eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator++(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                            local_40);
                    bVar2 = eastl::operator!=(local_40, local_50, extraout_RDX_00);
                } while (bVar2);
            }
        }
        uVar4 = logger::default_logger();
        logger::Logger::Log(
            uVar4, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/RenderDevice.cpp",
            829, "");
    }

    // 0x100c2b540, 576 bytes, base-object destructor, placed by class name
    // RenderDevice::~RenderDevice()
    void RenderDevice::~RenderDevice() {
        unique_ptr* this_00;
        Layout* this_01;
        ThreadPool* this_02;
        RenderContext* this_03;
        Fence* this_04;
        __106* extraout_RDX;
        type* in_RSI;
        RenderDevice* local_20;

        Destroy();
        DestroySecondaryRenderContexts(this);
        m_secondaryRenderContext();
        this_00 = (unique_ptr*)(*(code*)m_secondaryRenderContext)();
        if (std::unique_ptr::operator_cast_to_bool(this_00)) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_secondaryRenderContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      37, (char*)0);
        }
        this_01 = (Layout*)this_00->Instance();
        this_02 = (ThreadPool*)eastl::string::Layout::SSOBeginPtr(this_01, in_RSI);
        local_20 = this;
        ThreadPool::RunOnceOnAllThreads<RenderDevice::~RenderDevice()::__106>(this_02, (char*)&local_20, extraout_RDX);
        if (IsDeferredRendering(this) != '\0') {
            this_03 = (RenderContext*)std::unique_ptr<RenderContext, std::default_delete<RenderContext>>::operator->(
                (unique_ptr<RenderContext, std::default_delete<RenderContext>>*)&field_448);
            this_04 = (Fence*)this_03->GetDestroyRenderThreadFence();
            this_04->Wait();
        }
        (&field_62238336)->~mutex();
        (&field_62199760)->~fixed_map();
        (&field_60269944)->~fixed_map();
        (&field_1160)->~GPUMemoryAllocatorZoneMonitor();
        (&field_1104)->~vector_set();
        (&field_1032)->~recursive_mutex();
        (&field_1000)->~vector();
        (&field_968)->~vector();
        (&field_912)->~hash_map();
        (&field_848)->~mutex();
        (&field_496)->~array();
        (&field_456)->~thread_specific_ptr();
        (&field_448)->~unique_ptr();
        (&field_104)->~hash_node();
        (&field_64)->~basic_string();
        (&field_32)->~basic_string();
        ~basic_string();
        ~AutoSingleton();
    }

    // 0x100c2b7a0, 176 bytes, placed by class name
    // RenderDevice::DestroySecondaryRenderContexts()
    void RenderDevice::DestroySecondaryRenderContexts() {
        undefined8 uVar2;
        undefined8* puVar3;
        undefined8* puVar4;
        Layout* this_00;
        ThreadPool* this_01;
        __109* extraout_RDX;
        AutoSingleton<ThreadPoolSingleton>* this_02;
        RenderDevice* local_28;

        uVar2 = logger::default_logger();
        logger::Logger::Log(
            uVar2, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/RenderDevice.cpp",
            243, "Destroying secondary render contexts");
        this_02 = (AutoSingleton<ThreadPoolSingleton>*)&field_1104;
        puVar3 = (undefined8*)this_02->HeapBeginPtr();
        puVar4 = (undefined8*)this_02->end();
        for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
            this_02 = (AutoSingleton<ThreadPoolSingleton>*)*puVar3;
            (**(code**)(*(long*)this_02 + 24))();
        }
        this_00 = (Layout*)this_02->Instance();
        this_01 = (ThreadPool*)eastl::string::Layout::SSOBeginPtr(this_00, (type*)0);
        local_28 = this;
        ThreadPool::RunOnceOnAllThreads<RenderDevice::DestroySecondaryRenderContexts()::__109>(
            this_01, (char*)&local_28, extraout_RDX);
        if (IsRenderThread(this) == '\0') {
            DestroySecondaryRenderContext(this);
        }
    }

    // 0x100c2bbe0, 16 bytes, complete-object destructor, placed by class name
    // RenderDevice::~RenderDevice(): jumps straight to the base-object destructor

    // 0x100c2bbf0, 640 bytes, placed by class name
    // RenderDevice::CreateRenderContexts(RenderContextDesc const&)
    ulong RenderDevice::CreateRenderContexts(RenderContextDesc* param_1) {
        undefined1* this_00;
        char cVar1;
        RenderContext* pRVar3;
        undefined8 uVar4;
        default_delete<RenderContext>* this_01;
        ulong uVar5;
        RenderContextDesc local_68;
        RenderContextDesc local_48;
        unique_ptr local_28[8];

        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      55, (char*)0);
        }
        this_00 = &field_448;
        if (this_00->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_primaryRenderContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      57, (char*)0);
        }
        new (&local_48) RenderContextDesc(param_1);
        if (local_48.field_8._2_1_ != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!deferredDesc.m_SecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      60, (char*)0);
        }
        new (&local_68) RenderContextDesc(param_1);
        local_68.field_8._3_1_ = 0;
        std::make_unique<RenderContext>();
        std::unique_ptr<RenderContext, std::default_delete<RenderContext>>::operator=(
            (unique_ptr<RenderContext, std::default_delete<RenderContext>>*)this_00, local_28);
        local_28->~unique_ptr();
        pRVar3 = (RenderContext*)std::unique_ptr<RenderContext, std::default_delete<RenderContext>>::operator->(
            (unique_ptr<RenderContext, std::default_delete<RenderContext>>*)this_00);
        cVar1 = pRVar3->Init(&local_68);
        if (cVar1 == '\0') {
            uVar4 = logger::default_logger();
            uVar5 = 0;
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "device/RenderDevice.cpp",
                                70, "Failed to init non-deferred main thread primary context");
        } else {
            if (local_48.field_8._3_1_ != '\0') {
                if (field_333 == '\0') {
                    uVar4 = logger::default_logger();
                    logger::Logger::Log(uVar4, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/device/RenderDevice.cpp",
                                        94, "Deferred rendering disabled due to lack of device support");
                } else {
                    uVar4 = logger::default_logger();
                    logger::Logger::Log(uVar4, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/device/RenderDevice.cpp",
                                        80, "Deferred rendering enabled, creating deferred render context");
                    pRVar3 =
                        (RenderContext*)std::unique_ptr<RenderContext, std::default_delete<RenderContext>>::operator->(
                            (unique_ptr<RenderContext, std::default_delete<RenderContext>>*)this_00);
                    pRVar3->Shutdown();
                    this_01 = (default_delete<RenderContext>*)this_00->get();
                    std::default_delete<RenderContext>::operator()(this_01, (RenderContext*)0);
                    this_00->release();
                    std::make_unique<RenderContext>();
                    std::unique_ptr<RenderContext, std::default_delete<RenderContext>>::operator=(
                        (unique_ptr<RenderContext, std::default_delete<RenderContext>>*)this_00, local_28);
                    local_28->~unique_ptr();
                    pRVar3 =
                        (RenderContext*)std::unique_ptr<RenderContext, std::default_delete<RenderContext>>::operator->(
                            (unique_ptr<RenderContext, std::default_delete<RenderContext>>*)this_00);
                    cVar1 = pRVar3->Init(&local_48);
                    if (cVar1 == '\0') {
                        uVar4 = logger::default_logger();
                        uVar5 = 0;
                        logger::Logger::Log(uVar4, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "render/device/RenderDevice.cpp",
                                            88, "Failed to init deferred render thread primary context");
                        goto LAB_100c2be17;
                    }
                }
            }
            uVar5 = CONCAT71((int7)((ulong)local_28 >> 8), 1);
            if (field_328 != '\0') {
                CreateSecondaryRenderContexts(this);
            }
        }
    LAB_100c2be17:
        local_68.~InterfaceMouseEvent();
        local_48.~InterfaceMouseEvent();
        return uVar5 & 4294967295;
    }

    // 0x100c2bf40, 464 bytes, placed by class name
    // RenderDevice::CreateSecondaryRenderContexts()
    byte RenderDevice::CreateSecondaryRenderContexts() {
        char cVar1;
        byte bVar2;
        int iVar3;
        int iVar4;
        undefined8 uVar5;
        Layout* pLVar6;
        ThreadPool* pTVar7;
        BaseApp* this_00;
        undefined8* puVar8;
        undefined8* puVar9;
        __108* extraout_RDX;
        type* ptVar10;
        RenderDevice* this_01;
        __atomic_base* p_Var12;
        RenderDevice* local_58;
        byte* local_50;
        __atomic_base* local_48;
        undefined4 local_3c;
        undefined4 local_38;
        byte local_31;

        uVar5 = logger::default_logger();
        ptVar10 = (type*)0;
        logger::Logger::Log(
            uVar5, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/RenderDevice.cpp",
            145, "Initialising secondary render contexts");
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      147, (char*)0);
        }
        if (field_328 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_DeviceCaps.m_MultiContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      148, (char*)0);
        }
        local_31 = 1;
        this_01 = this;
        cVar1 = IsDeferredRendering(this);
        if (cVar1 != '\0') {
            this_01 = this;
            local_31 = CreateSecondaryRenderContext(this);
        }
        if (local_31 != 0) {
            local_38 = 0;
            pLVar6 = (Layout*)this_01->Instance();
            pTVar7 = (ThreadPool*)eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar10);
            local_50 = &local_31;
            p_Var12 = (__atomic_base*)&local_38;
            ptVar10 = (type*)&local_58;
            local_58 = this;
            local_48 = p_Var12;
            ThreadPool::RunOnceOnAllThreadsAsync<RenderDevice::CreateSecondaryRenderContexts()::__108>(
                pTVar7, (char*)ptVar10, extraout_RDX);
            iVar3 = std::__atomic_base::operator_cast_to_int(p_Var12);
            pLVar6 = (Layout*)p_Var12->Instance();
            pTVar7 = (ThreadPool*)eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar10);
            iVar4 = pTVar7->GetNumberOfThreads();
            if (iVar3 < iVar4) {
                do {
                    this_00 = (BaseApp*)BaseApp::GetAppInstance();
                    this_00->ExecuteMainThreadEvents();
                    local_3c = 500;
                    std::chrono::duration<long long, std::ratio<1l, 1000000000l>>::duration<int>((int*)&local_58,
                                                                                                 (type*)&local_3c);
                    std::this_thread::sleep_for((duration*)&local_58);
                    p_Var12 = (__atomic_base*)&local_38;
                    iVar3 = local_38.operator_cast_to_int();
                    pLVar6 = (Layout*)p_Var12->Instance();
                    pTVar7 = (ThreadPool*)eastl::string::Layout::SSOBeginPtr(pLVar6, (type*)(type*)&local_3c);
                    iVar4 = pTVar7->GetNumberOfThreads();
                } while (iVar3 < iVar4);
            }
        }
        if (local_31 != 0) {
            puVar8 = (undefined8*)(&field_1104)->HeapBeginPtr();
            puVar9 = (undefined8*)(&field_1104)->end();
            for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
                bVar2 = (**(code**)(*(long*)*puVar8 + 16))();
                local_31 = local_31 & bVar2;
            }
        }
        return local_31;
    }

    // 0x100c2c110, 304 bytes, placed by class name
    // RenderDevice::FinishRenderingAndLoseDevice()
    void RenderDevice::FinishRenderingAndLoseDevice() {
        RenderDevice* pRVar3;
        long lVar4;
        long lVar5;
        RenderContext* pRVar6;
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pRVar3 = this;
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      108, (char*)0);
        }
        pRVar3 = (RenderDevice*)pRVar3->Instance();
        if (GetReadyState(pRVar3) == 0) {
            std::atomic<bool>::operator=((atomic<bool>*)&field_1145, true);
            lVar4 = GetCurrentThreadRenderContext(this);
            if (lVar4 != 0) {
                lVar4 = GetCurrentThreadRenderContext(this);
                lVar5 = (&field_448)->get();
                if (lVar4 != lVar5) {
                    pRVar6 = (RenderContext*)GetCurrentThreadRenderContext(this);
                    pRVar6->FinishRendering();
                }
            }
            pRVar6 = (RenderContext*)std::unique_ptr<RenderContext, std::default_delete<RenderContext>>::operator->(
                (unique_ptr<RenderContext, std::default_delete<RenderContext>>*)&field_448);
            pRVar6->FinishRendering();
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                RenderDevice::FinishRenderingAndLoseDevice()::__107, void>((__107*)&local_c8);
            RunSynchronouslyOnRenderThread(this, &local_c8, false);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
            std::atomic<bool>::operator=((atomic<bool>*)&field_1145, false);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c2c280, 384 bytes, placed by class name
    // RenderDevice::CreateSecondaryRenderContext()
    undefined4 RenderDevice::CreateSecondaryRenderContext() {
        undefined4 uVar2;
        RenderContext* pRVar4;
        RenderContextDesc* pRVar5;
        unique_ptr* this_00;
        unique_ptr<RenderContext, std::default_delete<RenderContext>>* this_01;
        undefined8 uVar6;
        RenderContextDesc local_48;
        unique_ptr local_28[8];
        scoped_lock<std::mutex> local_20[8];

        if (CreateSecondaryRenderContext()::creationMutex == '\0') {
            if (___cxa_guard_acquire(&CreateSecondaryRenderContext()::creationMutex) != 0) {
                ___cxa_atexit(PTR__mutex_100ee6ef8, &CreateSecondaryRenderContext()::creationMutex, 4294967296);
                ___cxa_guard_release(&CreateSecondaryRenderContext()::creationMutex);
            }
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&CreateSecondaryRenderContext()::creationMutex);
        pRVar4 = (RenderContext*)GetPrimaryRenderContext(this);
        pRVar5 = (RenderContextDesc*)pRVar4->GetDesc();
        new (&local_48) RenderContextDesc(pRVar5);
        local_48.field_8._2_2_ = 1;
        m_secondaryRenderContext();
        this_00 = (unique_ptr*)(*(code*)m_secondaryRenderContext)();
        if (std::unique_ptr::operator_cast_to_bool(this_00)) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_secondaryRenderContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      231, (char*)0);
        }
        std::make_unique<RenderContext>();
        m_secondaryRenderContext();
        this_01 = (unique_ptr<RenderContext, std::default_delete<RenderContext>>*)(*(code*)m_secondaryRenderContext)();
        std::unique_ptr<RenderContext, std::default_delete<RenderContext>>::operator=(this_01, local_28);
        local_28->~unique_ptr();
        m_secondaryRenderContext();
        pRVar4 =
            (RenderContext*)std::unique_ptr<RenderContext, std::default_delete<RenderContext>>::operator->(this_01);
        uVar2 = pRVar4->Init(&local_48);
        if ((char)uVar2 == '\0') {
            uVar6 = logger::default_logger();
            logger::Logger::Log(uVar6, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "device/RenderDevice.cpp",
                                235, "Failed to init secondary RenderContext");
        }
        local_48.~InterfaceMouseEvent();
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        return uVar2;
    }

    // 0x100c2c820, 48 bytes, placed by class name
    // RenderDevice::DestroySecondaryRenderContext()
    void RenderDevice::DestroySecondaryRenderContext() {
        unique_ptr<RenderContext, std::default_delete<RenderContext>>* this_00;

        (&field_456)->release();
        m_secondaryRenderContext();
        this_00 = (unique_ptr<RenderContext, std::default_delete<RenderContext>>*)(*(code*)m_secondaryRenderContext)();
        std::unique_ptr<RenderContext, std::default_delete<RenderContext>>::reset(this_00, (RenderContext*)0);
    }

    // 0x100c2c8b0, 48 bytes, placed by class name
    // RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)
    void RenderDevice::RunWithThreadPoolRenderContexts(function* param_1) {
        Layout* this_00;
        ThreadPool* this_01;
        __110* extraout_RDX;
        RenderDevice* local_18;

        this_00 = (Layout*)Instance();
        this_01 = (ThreadPool*)eastl::string::Layout::SSOBeginPtr(this_00, (type*)param_1);
        local_18 = this;
        ThreadPool::RunOnceOnAllThreads<RenderDevice::RunWithThreadPoolRenderContexts(
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::__110>(
            this_01, (char*)&local_18, extraout_RDX);
    }

    // 0x100c2cb40, 368 bytes, placed by class name
    // RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)
    RenderDevice* RenderDevice::RunOnThreadPoolRenderContext(char* param_1, function* param_2) {
        char cVar1;
        long lVar2;
        Layout* this_00;
        vector* pvVar3;
        RenderDevice* this_01;
        TextureAtlasSlot* pTVar4;
        function* in_RCX;
        type* ptVar5;
        Singleton<RenderDevice>* this_02;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        ptVar5 = (type*)param_1;
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            this_02 = (Singleton<RenderDevice>*)param_1;
            cVar1 = IsRenderThread((RenderDevice*)param_1);
            if (cVar1 != '\0')
                goto LAB_100c2cb83;
        } else {
        LAB_100c2cb83:
            lVar2 = param_1->GetOrigin();
            this_02 = (Singleton<RenderDevice>*)param_1;
            if (*(char*)(lVar2 + 227) != '\0') {
                this_00 = (Layout*)param_1->Instance();
                pvVar3 = eastl::string::Layout::SSOBeginPtr(this_00, ptVar5);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function(
                    local_d8, in_RCX);
                ThreadPool::AddTask<RenderDevice::RunOnThreadPoolRenderContext(
                    char const*, fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                                         (fixedfunction::Methods)0> const&)::__111>(
                    (ThreadPool*)this, (char*)pvVar3, (__111*)param_2);
                RunOnThreadPoolRenderContext(
                    char const*,
                    fixedfunction::function<void(RenderContext&), 128ul, 16ul,
                                            (fixedfunction::Methods)0> const&)::$_111::~__111((__111*)local_d8);
                goto LAB_100c2cc45;
            }
        }
        this_01 = (RenderDevice*)this_02->Instance();
        pTVar4 = (TextureAtlasSlot*)GetCurrentThreadRenderContext(this_01);
        if (pTVar4 == (TextureAtlasSlot*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pRenderContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      292, (char*)0);
        }
        fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>::
        operator()(
            (function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (fixedfunction::Methods)0>*)in_RCX,
            pTVar4);
        std::promise<void>::promise();
        std::promise<void>::get_future();
        std::promise<void>::set_value();
        local_d8->~promise();
    LAB_100c2cc45:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100c2ced0, 208 bytes, placed by class name
    // RenderDevice::RegisterOnEndFrame(RenderDeviceOnEndFrame*)
    void RenderDevice::RegisterOnEndFrame(RenderDeviceOnEndFrame* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        RenderDeviceOnEndFrame** ppRVar3;
        RenderDeviceOnEndFrame** ppRVar4;
        undefined1* this_00;
        scoped_lock<std::recursive_mutex> local_28[8];
        RenderDeviceOnEndFrame* local_20;

        local_20 = param_1;
        if (param_1 == (RenderDeviceOnEndFrame*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDeviceOnEndFrame",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      305, (char*)0);
        }
        if (param_1 != (RenderDeviceOnEndFrame*)0) {
            std::scoped_lock<std::recursive_mutex>::scoped_lock(local_28, (recursive_mutex*)&field_1032);
            this_00 = &field_968;
            uVar1 = this_00->HeapBeginPtr();
            uVar2 = this_00->end();
            ppRVar3 =
                eastl::find_if<RenderDeviceOnEndFrame* const*, (RenderDeviceOnEndFrame*)->RegisterOnEndFrame()::__112>(
                    uVar1, uVar2, local_20);
            ppRVar4 = (RenderDeviceOnEndFrame**)this_00->end();
            if (ppRVar3 == ppRVar4) {
                this_00->push_back(&local_20);
            }
            std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_28);
        }
    }

    // 0x100c2d060, 288 bytes, placed by class name
    // RenderDevice::UnregisterOnEndFrame(RenderDeviceOnEndFrame*)
    void RenderDevice::UnregisterOnEndFrame(RenderDeviceOnEndFrame* param_1) {
        undefined1* this_00;
        undefined8 uVar1;
        undefined8 uVar2;
        RenderDeviceOnEndFrame** ppRVar3;
        RenderDeviceOnEndFrame** ppRVar4;
        function** ppfVar5;
        function** ppfVar6;
        RenderDeviceOnEndFrame** this_01;
        scoped_lock<std::recursive_mutex> local_30[8];
        RenderDeviceOnEndFrame* local_28;

        local_28 = param_1;
        if (param_1 == (RenderDeviceOnEndFrame*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDeviceOnEndFrame",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      331, (char*)0);
        }
        if (param_1 != (RenderDeviceOnEndFrame*)0) {
            std::scoped_lock<std::recursive_mutex>::scoped_lock(local_30, (recursive_mutex*)&field_1032);
            this_00 = &field_968;
            uVar1 = this_00->HeapBeginPtr();
            uVar2 = this_00->end();
            ppRVar3 = eastl::find_if<RenderDeviceOnEndFrame* const*,
                                     (RenderDeviceOnEndFrame*)->UnregisterOnEndFrame()::__113>(uVar1, uVar2, local_28);
            ppRVar4 = (RenderDeviceOnEndFrame**)this_00->end();
            if ((ppRVar3 != ppRVar4) && (this_00->erase_unsorted(ppRVar3), field_1096 != '\0')) {
                this_01 = &field_1000;
                ppfVar5 = (function**)this_01->HeapBeginPtr();
                ppfVar6 = (function**)this_01->end();
                ppRVar3 = (RenderDeviceOnEndFrame**)
                    eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
                        ppfVar5, ppfVar6, (function**)&local_28);
                ppRVar4 = (RenderDeviceOnEndFrame**)this_01->end();
                if (ppRVar3 != ppRVar4) {
                    this_01->erase_unsorted(ppRVar3);
                }
            }
            std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_30);
        }
    }

    // 0x100c2d220, 128 bytes, placed by class name
    // RenderDevice::RegisterSecondaryContext(RenderDeviceSecondaryContext*)
    void RenderDevice::RegisterSecondaryContext(RenderDeviceSecondaryContext* param_1) {
        RenderDeviceSecondaryContext* local_18;

        local_18 = param_1;
        if (param_1 == (RenderDeviceSecondaryContext*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDeviceSecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      368, (char*)0);
        }
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      369, (char*)0);
        }
        eastl::vector_set<RenderDeviceSecondaryContext*, eastl::less<RenderDeviceSecondaryContext*>, eastl::allocator,
                          eastl::vector<RenderDeviceSecondaryContext*, eastl::allocator>>::
            insert<RenderDeviceSecondaryContext*&>(
                (vector_set<RenderDeviceSecondaryContext*, eastl::less<RenderDeviceSecondaryContext*>, eastl::allocator,
                            eastl::vector<RenderDeviceSecondaryContext*, eastl::allocator>>*)&field_1104,
                &local_18);
    }

    // 0x100c2d350, 128 bytes, placed by class name
    // RenderDevice::UnregisterSecondaryContext(RenderDeviceSecondaryContext*)
    void RenderDevice::UnregisterSecondaryContext(RenderDeviceSecondaryContext* param_1) {
        RenderDeviceSecondaryContext* local_18;

        local_18 = param_1;
        if (param_1 == (RenderDeviceSecondaryContext*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDeviceSecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      376, (char*)0);
        }
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      377, (char*)0);
        }
        (&field_1104, &local_18)->erase();
    }

    // 0x100c2d410, 272 bytes, placed by class name
    // RenderDevice::RegisterCallback(RenderDeviceCallback*)
    void RenderDevice::RegisterCallback(RenderDeviceCallback* param_1) {
        bool bVar1;
        hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                  eastl::use_self<RenderDeviceCallback*>, eastl::equal_to<RenderDeviceCallback*>,
                  eastl::hash<RenderDeviceCallback*>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, false, true>* this_00;
        hashtable_iterator_base local_48[24];
        eastl local_30[16];
        scoped_lock<std::mutex> local_20[8];
        RenderDeviceCallback* local_18;

        local_18 = param_1;
        if (param_1 == (RenderDeviceCallback*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDeviceCallback",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      384, (char*)0);
        }
        if (field_1144 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_deviceResetInProgress",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      385, "Attempting to change device reset callback list while iterating over it");
        }
        if (param_1 != (RenderDeviceCallback*)0) {
            std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_848);
            this_00 = (hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                                 eastl::use_self<RenderDeviceCallback*>, eastl::equal_to<RenderDeviceCallback*>,
                                 eastl::hash<RenderDeviceCallback*>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false, true>*)
                std::array<DeviceCallbacks, 4ul>::operator[]((array<DeviceCallbacks, 4ul>*)&field_496,
                                                             (long)local_18->field_12);
            local_30 = (eastl[16])eastl::hashtable<
                RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator, eastl::use_self<RenderDeviceCallback*>,
                eastl::equal_to<RenderDeviceCallback*>, eastl::hash<RenderDeviceCallback*>, eastl::mod_range_hashing,
                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false, true>::find(this_00, &local_18);
            local_48._0_16_ = this_00->end();
            bVar1 = eastl::operator==(local_30, local_48, local_48._8_8_);
            if (bVar1) {
                eastl::hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                                 eastl::use_self<RenderDeviceCallback*>, eastl::equal_to<RenderDeviceCallback*>,
                                 eastl::hash<RenderDeviceCallback*>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false,
                                 true>::insert((RenderDeviceCallback**)local_48);
                ((this_00 + 56))->push_back(&local_18);
            }
            std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        }
    }

    // 0x100c2d5a0, 432 bytes, placed by class name
    // RenderDevice::UnregisterCallback(RenderDeviceCallback*)
    void RenderDevice::UnregisterCallback(RenderDeviceCallback* param_1) {
        Layout* this_00;
        char cVar1;
        bool bVar2;
        hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                  eastl::use_self<RenderDeviceCallback*>, eastl::equal_to<RenderDeviceCallback*>,
                  eastl::hash<RenderDeviceCallback*>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, false, true>* this_01;
        hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                  eastl::use_self<RenderDeviceCallback*>, eastl::equal_to<RenderDeviceCallback*>,
                  eastl::hash<RenderDeviceCallback*>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, false, true>* phVar3;
        function** ppfVar4;
        function** ppfVar5;
        RenderDeviceCallback** ppRVar6;
        undefined1 auVar7[16];
        undefined1 local_68[16];
        undefined1 local_58[16];
        scoped_lock<std::mutex> local_40[8];
        RenderDeviceCallback* local_38;

        local_38 = param_1;
        if (param_1 == (RenderDeviceCallback*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDeviceCallback",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      401, (char*)0);
        }
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      402, (char*)0);
        }
        if (local_38 != (RenderDeviceCallback*)0) {
            if (field_1144 == '\0') {
                std::scoped_lock<std::mutex>::scoped_lock(local_40, (mutex*)&field_848);
                this_01 =
                    (hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                               eastl::use_self<RenderDeviceCallback*>, eastl::equal_to<RenderDeviceCallback*>,
                               eastl::hash<RenderDeviceCallback*>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, false, true>*)(&field_496)
                        ->begin();
                phVar3 =
                    (hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                               eastl::use_self<RenderDeviceCallback*>, eastl::equal_to<RenderDeviceCallback*>,
                               eastl::hash<RenderDeviceCallback*>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, false, true>*)(&field_496)
                        ->end();
                if (this_01 != phVar3) {
                    do {
                        auVar7 =
                            eastl::hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                                             eastl::use_self<RenderDeviceCallback*>,
                                             eastl::equal_to<RenderDeviceCallback*>, eastl::hash<RenderDeviceCallback*>,
                                             eastl::mod_range_hashing, eastl::default_ranged_hash,
                                             eastl::prime_rehash_policy, false, false, true>::find(this_01, &local_38);
                        local_58 = auVar7;
                        auVar7 = this_01->end();
                        local_68 = auVar7;
                        bVar2 = eastl::operator!=((eastl*)local_58, (hashtable_iterator_base*)local_68, auVar7._8_8_);
                        if (bVar2) {
                            eastl::hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                                             eastl::use_self<RenderDeviceCallback*>,
                                             eastl::equal_to<RenderDeviceCallback*>, eastl::hash<RenderDeviceCallback*>,
                                             eastl::mod_range_hashing, eastl::default_ranged_hash,
                                             eastl::prime_rehash_policy, false, false, true>::erase(this_01,
                                                                                                    local_58._0_8_,
                                                                                                    local_58._8_8_);
                            this_00 = (Layout*)(this_01 + 56);
                            ppfVar4 = (function**)eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
                            ppfVar5 = (function**)this_00->end();
                            ppRVar6 = (RenderDeviceCallback**)eastl::find<std::function<bool(input::TextCommand)>**,
                                                                          std::function<bool(input::TextCommand)>*>(
                                ppfVar4, ppfVar5, (function**)&local_38);
                            this_00->erase(ppRVar6);
                        }
                        this_01 = this_01 + 88;
                    } while (this_01 != phVar3);
                }
                std::scoped_lock<std::mutex>::~scoped_lock(local_40);
            } else {
                eastl::hashtable<RenderDeviceCallback*, RenderDeviceCallback*, eastl::allocator,
                                 eastl::use_self<RenderDeviceCallback*>, eastl::equal_to<RenderDeviceCallback*>,
                                 eastl::hash<RenderDeviceCallback*>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false,
                                 true>::insert((RenderDeviceCallback**)local_58);
            }
        }
    }

    // 0x100c2d860, 368 bytes, placed by class name
    // RenderDevice::OnEndFrame()
    void RenderDevice::OnEndFrame() {
        RenderDeviceOnEndFrame** this_00;
        char cVar1;
        RenderDeviceOnEndFrame** ppRVar4;
        long* plVar5;
        scoped_lock<std::recursive_mutex> local_30[8];

        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      497, (char*)0);
        }
        if ((&field_448)->operator_cast_to_bool()) {
            if (GetReadyState(this) == 0) {
                std::scoped_lock<std::recursive_mutex>::scoped_lock(local_30, (recursive_mutex*)&field_1032);
                if (field_1096 != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!m_isInOnEndFrame",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                              "RenderDevice.cpp",
                              504, (char*)0);
                }
                field_1096 = 1;
                this_00 = &field_1000;
                cVar1 = this_00->empty();
                if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_OnEndFrameQueue.empty()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                              "RenderDevice.cpp",
                              519, (char*)0);
                }
                ppRVar4 = (RenderDeviceOnEndFrame**)(&field_968)->HeapBeginPtr();
                (&field_968)->end();
                eastl::vector<RenderDeviceOnEndFrame*, eastl::allocator>::assign<RenderDeviceOnEndFrame* const*>(
                    this_00, ppRVar4);
                while (true) {
                    cVar1 = this_00->empty();
                    if (cVar1 != '\0')
                        break;
                    plVar5 = (long*)this_00->back();
                    plVar5 = (long*)*plVar5;
                    this_00->pop_back();
                    if (plVar5 != (long*)0) {
                        (**(code**)(*plVar5 + 16))(plVar5);
                    }
                }
                field_1096 = 0;
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_30);
            }
        }
    }

    // 0x100c2da50, 256 bytes, placed by class name
    // RenderDevice::IsMobileDesktopGPU() const
    ulong RenderDevice::IsMobileDesktopGPU() {
        int iVar1;
        long lVar2;
        ulong uVar3;
        byte* pbVar4;
        char* pcVar5;
        ulong unaff_R14;

        iVar1 = GetUIHeight();
        if (iVar1 != 0) {
            iVar1 = GetUIHeight();
            unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8), 1);
            if (iVar1 != 2)
                goto LAB_100c2db37;
        }
        lVar2 = find("Mobility", 0);
        unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8), 1);
        if (lVar2 == -1) {
            lVar2 = find(" Go", 0);
            if (lVar2 == -1) {
                uVar3 = find("M", 0);
                if (uVar3 != 18446744073709551615) {
                    pbVar4 = (byte*)at(uVar3 - 1);
                    iVar1 = isdigit((uint)*pbVar4);
                    if (iVar1 != 0)
                        goto LAB_100c2db37;
                }
                iVar1 = GetUIHeight();
                if ((iVar1 == 0) && (uVar3 != 18446744073709551615)) {
                    pcVar5 = (char*)at(uVar3 - 1);
                    if (*pcVar5 == ' ') {
                        lVar2 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        if (uVar3 < lVar2 - 1U) {
                            pbVar4 = (byte*)at(uVar3 + 1);
                            iVar1 = isdigit((uint)*pbVar4);
                            if (iVar1 != 0)
                                goto LAB_100c2db37;
                        }
                    }
                }
                unaff_R14 = 0;
            }
        }
    LAB_100c2db37:
        return unaff_R14 & 4294967295;
    }

    // 0x100c2dbb0, 80 bytes, placed by class name
    // RenderDevice::ValidateMSAATextureSamples(int&) const
    void RenderDevice::ValidateMSAATextureSamples(int* param_1) {
        int iVar1;
        int* piVar2;

        if (field_271 == '\0') {
            iVar1 = 1;
        } else {
            piVar2 = std::min<int>(&field_192, &field_196);
            piVar2 = std::min<int>(param_1, piVar2);
            iVar1 = *piVar2;
        }
        *param_1 = iVar1;
    }

    // 0x100c2dc10, 64 bytes, placed by class name
    // RenderDevice::GetLowestPrecisionRGBFloatFormat() const
    undefined8 RenderDevice::GetLowestPrecisionRGBFloatFormat() {
        undefined8 uVar1;

        uVar1 = 6;
        if ((field_261 != '\0') || (uVar1 = 3, field_262 != '\0')) {
            return uVar1;
        }
        uVar1 = 1;
        if (field_263 == '\0') {
            uVar1 = 16;
        }
        return uVar1;
    }

    // 0x100c2dc50, 576 bytes, placed by class name
    // RenderDevice::EvaluateDeviceProfiles()
    void RenderDevice::EvaluateDeviceProfiles() {
        int iVar3;
        GraphicsDefaults* this_00;
        ulong uVar4;
        long lVar5;
        RenderContext* this_01;
        undefined8 uVar6;
        uint uVar7;

        this_00 = (GraphicsDefaults*)Instance();
        field_464 = this_00->GetWrapMode();
        uVar4 = GetTotalGPUMemory(this);
        iVar3 = (int)(uVar4 >> 20);
        field_480 = iVar3;
        if (iVar3 == 0) {
            iVar3 = this_00->GetFont12pxBoldID();
            field_480 = iVar3;
        }
        field_468 = field_464;
        field_484 = field_480;
        iVar3 = GetUIHeight();
        if ((iVar3 == 1) || (field_480 == 0)) {
            uVar7 = (uint)(long)((float)field_468 * 0.33);
            field_484 = uVar7;
            field_468 = field_468 - uVar7;
        }
        field_472 = 4;
        m_gpuMemoryProfile = 4;
        lVar5 = 0;
        do {
            if (field_468 < (uint)(&DAT_100d997c4)[lVar5]) {
                field_472 = (int)lVar5;
                break;
            }
            lVar5 = lVar5 + 1;
        } while (lVar5 != 4);
        lVar5 = 0;
        do {
            if (field_484 < (uint)(&DAT_100d997e4)[lVar5]) {
                m_gpuMemoryProfile = (int)lVar5;
                break;
            }
            lVar5 = lVar5 + 1;
        } while (lVar5 != 4);
        iVar3 = GetUIHeight();
        if ((iVar3 == 1) && (lVar5 = GetPrimaryRenderContext(this), lVar5 != 0)) {
            this_01 = (RenderContext*)GetPrimaryRenderContext(this);
            iVar3 = this_01->GetGLCoreProfileVerMajor();
            if (iVar3 < 4) {
                m_gpuMemoryProfile = 0;
                field_492 = 1;
            }
        }
        uVar6 = logger::default_logger();
        logger::Logger::Log(
            uVar6, 0, 5,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/RenderDevice.cpp",
            696,
            "Selected %s/%s CPU/GPU memory profiles with %u/%u Mb adjusted CPU/GPU memory (%u/%u Mb base CPU/GPU "
            "memory).",
            (&MEMORY_PROFILE_DEBUG_NAMES)[field_472], (&MEMORY_PROFILE_DEBUG_NAMES)[m_gpuMemoryProfile], field_468,
            field_484, field_464, field_480);
        if (render::operator<(m_gpuMemoryProfile, 1) != '\0') {
            uVar6 = logger::default_logger();
            logger::Logger::Log(uVar6, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "device/RenderDevice.cpp",
                                698, "Detected GPU with memory and/or shader limitations, disabling effects/textures.");
        }
    }

    // 0x100c2deb0, 96 bytes, placed by class name
    // RenderDevice::GetCurrentMemoryZone()
    undefined8 RenderDevice::GetCurrentMemoryZone() {
        undefined8 uVar1;
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)&field_62238336);
        uVar1 = (&field_1160)->GetCurrentZone();
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
        return uVar1;
    }

    // 0x100c2df10, 256 bytes, placed by class name
    // RenderDevice::EnableGPUMemoryRecorder(char const*)
    void RenderDevice::EnableGPUMemoryRecorder(char* param_1) {
        undefined8 uVar1;
        undefined8* puVar2;
        scoped_lock<std::mutex> local_250[8];
        fixed_string<char, 512, true, eastl::allocator> local_248[552];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        if (param_1 == (char*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pRecorderName != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      780, (char*)0);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_250, (mutex*)&field_62238336);
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_248, param_1);
        uVar1 = eastl::map<
            eastl::fixed_string<char, 512, true, eastl::allocator>,
            eastl::fixed_map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory, 48ul, true,
                             eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>, eastl::allocator>,
            eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
            eastl::fixed_node_allocator<29688ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[](
            (map<
                eastl::fixed_string<char, 512, true, eastl::allocator>,
                eastl::fixed_map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory, 48ul, true,
                                 eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>, eastl::allocator>,
                eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                eastl::fixed_node_allocator<29688ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)&field_60269944,
            (fixed_string*)local_248);
        puVar2 = (undefined8*)eastl::map<
            eastl::fixed_string<char, 512, true, eastl::allocator>,
            eastl::fixed_map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory, 48ul, true,
                             eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>, eastl::allocator>*,
            eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
            eastl::fixed_node_allocator<592ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((map<eastl::fixed_string<char, 512, true, eastl::allocator>,
                        eastl::fixed_map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory, 48ul,
                                         true, eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                                         eastl::allocator>*,
                        eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                        eastl::fixed_node_allocator<592ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)&field_62199760,
                   (fixed_string*)local_248);
        *puVar2 = uVar1;
        /* WARNING: Subroutine does not return */
        local_248->~fixed_string();
    }

    // 0x100c2e170, 320 bytes, placed by class name
    // RenderDevice::DisableGPUMemoryRecorder(char const*)
    void RenderDevice::DisableGPUMemoryRecorder(char* param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_268[8];
        undefined8 local_260;
        scoped_lock<std::mutex> local_258[8];
        fixed_string local_250[8];
        fixed_string<char, 512, true, eastl::allocator> local_248[552];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        if (param_1 == (char*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pRecorderName != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      791, (char*)0);
        }
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_248, param_1);
        std::scoped_lock<std::mutex>::scoped_lock(local_258, (mutex*)&field_62238336);
        eastl::rbtree<
            eastl::fixed_string<char, 512, true, eastl::allocator>,
            eastl::pair<eastl::fixed_string<char, 512, true, eastl::allocator> const,
                        eastl::fixed_map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory, 48ul,
                                         true, eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                                         eastl::allocator>*>,
            eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
            eastl::fixed_node_allocator<592ul, 64ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<
                eastl::fixed_string<char, 512, true, eastl::allocator> const,
                eastl::fixed_map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory, 48ul, true,
                                 eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                                 eastl::allocator>*>>,
            true, true>::find(local_250);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=((eastl*)local_250, local_268, extraout_RDX)) {
            new (&local_260) eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                 shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                 shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_250);
            eastl::rbtree<
                eastl::fixed_string<char, 512, true, eastl::allocator>,
                eastl::pair<
                    eastl::fixed_string<char, 512, true, eastl::allocator> const,
                    eastl::fixed_map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory, 48ul,
                                     true, eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                                     eastl::allocator>*>,
                eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                eastl::fixed_node_allocator<592ul, 64ul, 8ul, 0ul, true, eastl::allocator>,
                eastl::use_first<eastl::pair<
                    eastl::fixed_string<char, 512, true, eastl::allocator> const,
                    eastl::fixed_map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory, 48ul,
                                     true, eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                                     eastl::allocator>*>>,
                true, true>::erase(local_268, &field_62199760, local_260);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_258);
        /* WARNING: Subroutine does not return */
        local_248->~fixed_string();
    }

    // 0x100c2e3f0, 80 bytes, placed by class name
    // RenderDevice::PrintToConsole(GPUMemoryAllocatorZone*, int)
    void RenderDevice::PrintToConsole(GPUMemoryAllocatorZone* param_1, int param_2) {
        int local_1c;

        local_1c = param_2;
        if (param_1->GetInclusiveAllocations() != 0) {
            param_1->PrintToConsole(local_1c);
            local_1c = local_1c + 1;
            GPUMemoryAllocatorZone::ProcessChildren<RenderDevice::PrintToConsole(GPUMemoryAllocatorZone*, int)::__115>(
                param_1, this, &local_1c);
        }
    }

    // 0x100c2e4c0, 16 bytes, placed by class name
    // RenderDevice::ClearGPUDeviceMemoryTracking()
    void RenderDevice::ClearGPUDeviceMemoryTracking() {}

    // 0x100c56760, 64 bytes, placed by class name
    // RenderDevice::~RenderDevice()::$_106::operator()() const
    /* RenderDevice::~RenderDevice()::$_106::TEMPNAMEPLACEHOLDERVALUE() const */

    void RenderDevice::~RenderDevice()::$_106::operator()() {
        RenderContext* pRVar1;

        pRVar1 = ((field_0 + 456))->operator_cast_to_RenderContext_();
        if (pRVar1 != (RenderContext*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_currentThreadRenderContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                      "RenderDevice.cpp",
                      41, (char*)0);
        }
    }

    // 0x100c58fc0, 32 bytes, placed by class name
    // RenderDevice::FinishRenderingAndLoseDevice()::$_107::operator()(RenderContext&) const
    /* RenderDevice::FinishRenderingAndLoseDevice()::$_107::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderDevice::FinishRenderingAndLoseDevice()::$_107::operator()(RenderContext* param_1) {
        ImmediateRenderContext* pIVar1;

        pIVar1 = (ImmediateRenderContext*)GetImmediateContext();
        pIVar1->SetReadyState(1);
    }

    // 0x100c59710, 48 bytes, placed by class name
    // RenderDevice::CreateSecondaryRenderContexts()::$_108::operator()() const
    /* RenderDevice::CreateSecondaryRenderContexts()::$_108::TEMPNAMEPLACEHOLDERVALUE()
   const */

    void RenderDevice::CreateSecondaryRenderContexts()::$_108::operator()() {
        if (CreateSecondaryRenderContext(field_0) == '\0') {
            *field_8 = 0;
        }
        std::__atomic_base<int, true>::operator++(field_16);
    }

    // 0x100c5a770, 16 bytes, placed by class name
    // RenderDevice::DestroySecondaryRenderContexts()::$_109::operator()() const
    /* RenderDevice::DestroySecondaryRenderContexts()::$_109::TEMPNAMEPLACEHOLDERVALUE()
   const */

    void RenderDevice::DestroySecondaryRenderContexts()::$_109::operator()() {
        DestroySecondaryRenderContext(field_0);
    }

    // 0x100c5d590, 16 bytes, placed by class name
    // RenderDevice::RegisterOnEndFrame(RenderDeviceOnEndFrame*)::$_112::operator()(RenderDeviceOnEndFrame*) const
    /* RenderDevice::RegisterOnEndFrame(RenderDeviceOnEndFrame*)::$_112::TEMPNAMEPLACEHOLDERVALUE(RenderDeviceOnEndFrame*)
   const */

    bool RenderDevice::RegisterOnEndFrame(RenderDeviceOnEndFrame*)::$_112::operator()(RenderDeviceOnEndFrame* param_1) {
        return *(RenderDeviceOnEndFrame**)this == param_1;
    }

    // 0x100c5d6c0, 16 bytes, placed by class name
    // RenderDevice::UnregisterOnEndFrame(RenderDeviceOnEndFrame*)::$_113::operator()(RenderDeviceOnEndFrame*) const
    /* RenderDevice::UnregisterOnEndFrame(RenderDeviceOnEndFrame*)::$_113::TEMPNAMEPLACEHOLDERVALUE(RenderDeviceOnEndFrame*)
   const */

    bool
    RenderDevice::UnregisterOnEndFrame(RenderDeviceOnEndFrame*)::$_113::operator()(RenderDeviceOnEndFrame* param_1) {
        return *(RenderDeviceOnEndFrame**)this == param_1;
    }

    // 0x100c5de90, 32 bytes, placed by class name
    // RenderDevice::TriggerDeviceLoss()::$_114::operator()(RenderContext&) const
    /* RenderDevice::TriggerDeviceLoss()::$_114::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    void RenderDevice::TriggerDeviceLoss()::$_114::operator()(RenderContext* param_1) {
        ImmediateRenderContext* pIVar1;

        pIVar1 = (ImmediateRenderContext*)GetImmediateContext();
        pIVar1->SetReadyState(1);
    }

    // 0x100c5eec0, 32 bytes, placed by class name
    // RenderDevice::PrintToConsole(GPUMemoryAllocatorZone*, int)::$_115::operator()(GPUMemoryAllocatorZone*) const
    /* RenderDevice::PrintToConsole(GPUMemoryAllocatorZone*,
   int)::$_115::TEMPNAMEPLACEHOLDERVALUE(GPUMemoryAllocatorZone*) const */

    void RenderDevice::PrintToConsole(GPUMemoryAllocatorZone*,
                                      int)::$_115::operator()(GPUMemoryAllocatorZone* param_1) {
        PrintToConsole(*(RenderDevice**)this, param_1, **(int**)(this + 8));
    }

} // namespace jag::render

// 0x100c2b850, 32 bytes, placed by neighbouring functions
// TLS wrapper function for jag::render::RenderDevice::m_secondaryRenderContext
void jag::render::RenderDevice::m_secondaryRenderContext() {
    ___tls_init();
    (*(code*)m_secondaryRenderContext)();
}
