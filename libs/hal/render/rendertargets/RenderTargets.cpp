// libs/hal/render/rendertargets/RenderTargets.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "RenderTargets.h"

namespace jag::render {
    // 0x100bdf670, 48 bytes, placed by class name and debug map
    // RenderTargets::GetDepthStencilTargetTexture() const
    undefined8 RenderTargets::GetDepthStencilTargetTexture() {
        byte bVar1;
        RenderDevice* this_00;

        KeepAlive(this);
        this_00 = (RenderDevice*)((RenderTargets*)this)->Instance();
        bVar1 = this_00->IsRenderThread();
        return *(undefined8*)(field_4 + (ulong)bVar1 * 8 + 188);
    }

    // 0x100bdf7a0, 336 bytes, base-object constructor, placed by class name
    // RenderTargets::RenderTargets()
    void RenderTargets::RenderTargets() {
        new (this) RenderResource();
        new (&field_8) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new (&field_24) eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator>();
        new (&field_80) eastl::fixed_vector<Texture*, 2ul, true, eastl::allocator>();
        new (&field_136)
            eastl::fixed_vector<std::unique_ptr<Texture, std::default_delete<Texture>>, 2ul, true, eastl::allocator>();
        field_192 = (Texture*)0;
        field_200 = (Texture*)0;
        std::unique_ptr<Texture, std::default_delete<Texture>>::unique_ptr<true, void>(
            (unique_ptr<Texture, std::default_delete<Texture>>*)&field_208);
        field_216 = 0;
        new (&field_224) eastl::fixed_string<char, 64, true, eastl::allocator>();
        field_328 = 0;
        eastl::fixed_vector<unsigned long, 2ul, false, eastl::dummy_allocator>::fixed_vector();
        field_376 = 4294967295;
        std::atomic<unsigned int>::atomic((int)this + 380);
        DisableMarkAsDead(2);
    }

    // 0x100bdfa90, 16 bytes, complete-object constructor, placed by class name
    // RenderTargets::RenderTargets(): jumps straight to the base-object constructor

    // 0x100bdfaa0, 384 bytes, base-object destructor, placed by class name
    // RenderTargets::~RenderTargets()
    void RenderTargets::~RenderTargets() {
        char cVar1;
        RenderDevice* this_00;
        _func_decltype_nullptr* in_RSI;

        cVar1 = IsBackBuffer(this);
        if (cVar1 == '\0') {
            if ((field_216 & 2) != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("(m_flags & NO_KEEP_ALIVE) == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/RenderTargets.cpp",
                          27, (char*)0);
            }
            if (Singleton<RenderDevice>::InstancePtr() != 0) {
                this_00 = (RenderDevice*)((RenderTargets*)this)->Instance();
                cVar1 = this_00->IsRenderThread();
                if (cVar1 == '\0') {
                    cVar1 = HasColourTargets(this);
                    if (cVar1 == '\0') {
                        cVar1 = HasDepthTarget(this);
                        if (cVar1 == '\0') {
                            cVar1 = (&field_136)->empty();
                            if (cVar1 != '\0') {
                                if (std::operator==((unique_ptr*)&field_208, in_RSI)) {
                                    cVar1 = IsCreated(this);
                                    if (cVar1 == '\0')
                                        goto LAB_100bdfb5b;
                                }
                            }
                        }
                    }
                    /* WARNING: Subroutine does not return */
                    LogAssert("!RenderDevice::InstancePtr() || RenderDevice::Instance().IsRenderThread() || "
                              "(!HasColourTargets() && !HasDepthTarget() && m_ownedColourTargetTextures.empty() && "
                              "m_pOwnedDepthStencilTargetTexture == nullptr && !IsCreated())",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/RenderTargets.cpp",
                              34, (char*)0);
                }
            }
        }
    LAB_100bdfb5b:
        Destroy(this);
        (&field_336)->~fixed_vector();
        /* WARNING: Subroutine does not return */
        (&field_224)->~fixed_string();
    }

    // 0x100bdfc40, 128 bytes, placed by class name
    // RenderTargets::HasColourTargets() const
    ulong RenderTargets::HasColourTargets() {
        char cVar1;
        RenderDevice* this_00;
        undefined8* puVar3;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;

        if (Singleton<RenderDevice>::InstancePtr() != 0) {
            this_00 = (RenderDevice*)((RenderTargets*)this)->Instance();
            cVar1 = this_00->IsRenderThread();
            if (cVar1 != '\0') {
                this_01 =
                    (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)&field_80;
                goto LAB_100bdfc6e;
            }
        }
        this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)&field_24;
    LAB_100bdfc6e:
        cVar1 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            this_01);
        if (cVar1 == '\0') {
            puVar3 = (undefined8*)eastl::
                vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                        this_01,
                    0);
            cVar1 = (*puVar3)->IsCreated();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("colourTargets.empty() || colourTargets[0]->IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/RenderTargets.cpp",
                          95, (char*)0);
            }
        }
        return eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                   this_01) ^
               1;
    }

    // 0x100bdfcc0, 128 bytes, placed by class name
    // RenderTargets::HasDepthTarget() const
    bool RenderTargets::HasDepthTarget() {
        Texture* this_00;
        char cVar1;
        RenderDevice* this_01;
        Texture** ppTVar3;

        if (Singleton<RenderDevice>::InstancePtr() != 0) {
            this_01 = (RenderDevice*)((RenderTargets*)this)->Instance();
            cVar1 = this_01->IsRenderThread();
            if (cVar1 != '\0') {
                ppTVar3 = &field_200;
                goto LAB_100bdfcf4;
            }
        }
        ppTVar3 = &field_192;
    LAB_100bdfcf4:
        this_00 = *ppTVar3;
        if (this_00 != (Texture*)0) {
            cVar1 = this_00->IsCreated();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!depthTexture || depthTexture->IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/RenderTargets.cpp",
                          102, (char*)0);
            }
        }
        return this_00 != (Texture*)0;
    }

    // 0x100bdfdc0, 416 bytes, placed by __FILE__ string
    // RenderTargets::Destroy()
    void RenderTargets::Destroy() {
        long lVar2;
        RenderDevice* pRVar3;
        Singleton<RenderDevice>* this_01;
        __0 local_d8;
        AutoSingleton<ShaderThreadPoolSingleton> local_d0[8];
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        lVar2 = Singleton<RenderDevice>::InstancePtr();
        local_d8.field_0 = this;
        if (lVar2 != 0) {
            pRVar3 = (RenderDevice*)((RenderTargets*)this)->Instance();
            if (pRVar3->IsRenderThread() != '\0') {
                local_d0->~AutoSingleton();
                ReleaseNativeResources(this);
                field_200 = (Texture*)0;
                (&field_208, (Texture*)0)->reset();
                (&field_136)->clear();
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                new (&local_c8) std::scoped_lock<std::mutex>((mutex*)&m_renderTargetsToInvalidateMutex);
                eastl::set<RenderTargets_const*, eastl::less<RenderTargets_const*>,
                           eastl::fixed_node_allocator<40ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::
                    erase((RenderTargets**)&m_renderTargetsToInvalidate);
                local_c8.~scoped_lock();
                goto LAB_100bdff0b;
            }
        }
        lVar2 = Singleton<RenderDevice>::InstancePtr();
        if (lVar2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::InstancePtr()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargets.cpp",
                      149, (char*)0);
        }
        KeepAlive(this);
        field_192 = (Texture*)0;
        this_01 = (Singleton<RenderDevice>*)&field_24;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        pRVar3 = (RenderDevice*)this_01->Instance();
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderTargets::Destroy()::__0, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_d8);
        pRVar3->RunOnRenderThread(&local_c8);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
    LAB_100bdff0b:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be0340, 240 bytes, placed by __FILE__ string
    // RenderTargets::CheckTexturesAlive(RenderContext const&) const
    undefined8 RenderTargets::CheckTexturesAlive(RenderContext* param_1) {
        char cVar1;
        RenderDevice* this_00;
        long* plVar2;
        long* plVar3;
        undefined8 uVar4;

        this_00 = (RenderDevice*)Instance();
        cVar1 = this_00->IsRenderThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargets.cpp",
                      62, (char*)0);
        }
        cVar1 = HasColourTargets(this);
        if (cVar1 != '\0') {
            plVar2 = (long*)(&field_80)->HeapBeginPtr();
            plVar3 = (long*)(&field_80)->end();
            for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
                if (((*plVar2 == 0) ||
                     (cVar1 = param_1->IsObjectAlive((RenderResource*)(*plVar2 + 8)), cVar1 == '\0')) ||
                    (cVar1 = (*plVar2)->IsCreated(), cVar1 == '\0'))
                    goto LAB_100be0419;
            }
        }
        cVar1 = HasDepthTarget(this);
        if ((cVar1 == '\0') ||
            (((field_200 != (Texture*)0 &&
               (cVar1 = param_1->IsObjectAlive((RenderResource*)&field_200->field_8), cVar1 != '\0')) &&
              (cVar1 = field_200->IsCreated(), cVar1 != '\0')))) {
            uVar4 = 1;
        } else {
        LAB_100be0419:
            uVar4 = 0;
        }
        return uVar4;
    }

    // 0x100be04c0, 144 bytes, placed by __FILE__ string
    // RenderTargets::HasStencilTarget() const
    undefined8 RenderTargets::HasStencilTarget() {
        Texture* this_00;
        char cVar1;
        long lVar2;
        RenderDevice* this_01;
        undefined8 uVar3;
        Texture** ppTVar4;

        lVar2 = Singleton<RenderDevice>::InstancePtr();
        if (lVar2 != 0) {
            this_01 = (RenderDevice*)((RenderTargets*)this)->Instance();
            cVar1 = this_01->IsRenderThread();
            if (cVar1 != '\0') {
                ppTVar4 = &field_200;
                goto LAB_100be04f4;
            }
        }
        ppTVar4 = &field_192;
    LAB_100be04f4:
        this_00 = *ppTVar4;
        if (this_00 == (Texture*)0) {
            uVar3 = 0;
        } else {
            cVar1 = this_00->IsCreated();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!depthTexture || depthTexture->IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/RenderTargets.cpp",
                          109, (char*)0);
            }
            lVar2 = this_00->second();
            uVar3 = HasStencilBits(*(undefined4*)(lVar2 + 12));
        }
        return uVar3;
    }

    // 0x100be0550, 256 bytes, placed by __FILE__ string
    // RenderTargets::KeepAlive() const
    void RenderTargets::KeepAlive() {
        RenderDevice* pRVar3;
        shared_ptr local_38;
        shared_ptr local_28;

        if ((field_216 & 2) == 0) {
            pRVar3 = (RenderDevice*)Instance();
            if (pRVar3->IsRenderThread() == '\0') {
                local_28.shared_from_this();
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_38, &local_28);
                local_28.~shared_ptr();
                if (!shared_ptr::operator_cast_to_bool(&local_38)) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("sharedThis",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/RenderTargets.cpp",
                              121, (char*)0);
                }
                pRVar3 = (RenderDevice*)local_38.Instance();
                new (&local_28) shared_ptr<oldscape::dash3d::Decor>(&local_38);
                pRVar3->KeepAliveSharedPtr(&local_28, 0);
                local_28.~shared_ptr();
                local_38.~shared_ptr();
            }
        }
    }

    // 0x100be0890, 96 bytes, placed by __FILE__ string
    // RenderTargets::BindDepthStencilTargetTexture(RenderTargets*)
    undefined8 RenderTargets::BindDepthStencilTargetTexture(RenderTargets* param_1) {
        Texture* pTVar1;

        if (param_1 == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDepthStencilRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargets.cpp",
                      165, (char*)0);
        }
        KeepAlive(this);
        pTVar1 = (Texture*)GetDepthStencilTargetTexture(param_1);
        BindDepthStencilTargetTexture(this, pTVar1);
        return 1;
    }

    // 0x100bfc010: the linker folded this into ShaderStorageBuffer::ShaderStorageBuffer(ShaderStorageBuffer&&), which has identical code
    PixelBuffer::PixelBuffer(PixelBuffer&&);

    // 0x100bfc010: the linker folded this into ShaderStorageBuffer::ShaderStorageBuffer(ShaderStorageBuffer&&), which has identical code
    PixelUnpackBuffer::PixelUnpackBuffer(PixelUnpackBuffer&&);

} // namespace jag::render
