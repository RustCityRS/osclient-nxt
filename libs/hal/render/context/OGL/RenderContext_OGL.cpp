// libs/hal/render/context/OGL/RenderContext_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/context/RenderContext.h"

namespace jag::render {
    // 0x100c13860, 80 bytes, placed by class name and debug map
    // RenderContext::SetDefaultVAO()
    void RenderContext::SetDefaultVAO() {
        RenderDevice* this_00;

        this_00 = (RenderDevice*)Instance();
        if (this_00->IsRenderThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "RenderContext_OGL.cpp",
                      32, (char*)0);
        }
        m_immediateContext->SetDefaultVAO();
    }

    // 0x100c1a4c0, 288 bytes, placed by __FILE__ string
    // RenderContext::PostInit(RenderContextDesc const&)
    undefined8 RenderContext::PostInit(RenderContextDesc* param_1) {
        OpenGLView* this_00;
        __97 local_f8;
        uint local_e0;
        uint local_dc;
        function local_d8;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_e0 = 0;
        local_dc = 0;
        this_00 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)&param_1->field_16);
        this_00->GetBackingSize(&local_e0, &local_dc);
        if ((local_e0 == 0) || (local_dc == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("width && height",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "RenderContext_OGL.cpp",
                      21, (char*)0);
        }
        local_f8.field_0 = (long)this;
        local_f8.field_8 = &local_e0;
        local_f8.field_16 = &local_dc;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderContext::PostInit(RenderContextDesc_const&)::__97, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, &local_f8);
        RunSynchronouslyOnRenderThread(this, &local_d8, true);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong) * (long*)PTR____stack_chk_guard_100ee9d98 >> 8), 1);
    }

    // 0x100c1f6e0, 192 bytes, placed by __FILE__ string
    // RenderContext::IsCurrentRenderTargetAlive(RenderTargets const*) const
    undefined4 RenderContext::IsCurrentRenderTargetAlive(RenderTargets* param_1) {
        char cVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        long* plVar4;
        undefined8 uVar5;
        long lVar6;

        if ((param_1 == (RenderTargets*)0) || (cVar1 = param_1->IsCreated(), cVar1 == '\0')) {
            return 0;
        }
        plVar4 = (long*)m_immediateContext->GetStateCache();
        if ((RenderTargets*)*plVar4 != param_1) {
            uVar5 = logger::default_logger();
            lVar6 = m_immediateContext->GetStateCache();
            uVar3 = *(undefined4*)(lVar6 + 8);
            uVar2 = param_1->GetNativeFBOId();
            logger::Logger::Log(uVar5, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/RenderContext_OGL.cpp",
                                88, "Unexpected render target bound (%u bound, expected %u) - call discarded", uVar3,
                                uVar2);
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "OGL/RenderContext_OGL.cpp",
                            89, (char*)0);
        }
        uVar3 = param_1->CheckTexturesAlive(this);
        return uVar3;
    }

    // 0x100c28e50, 224 bytes, placed by class name and neighbouring functions
    // RenderContext::BindImageTexture(unsigned int, Texture const*, int, LockType)
    void RenderContext::BindImageTexture(undefined4 param_1, long param_2, undefined4 param_3, undefined4 param_5) {
        char cVar1;
        long lVar2;
        RenderResource* pRVar3;
        __98 local_50;

        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            lVar2 = GetDesc(this);
            if (*(char*)(lVar2 + 11) != '\0') {
                pRVar3 = (RenderResource*)(param_2 + 8);
                if (param_2 == 0) {
                    pRVar3 = (RenderResource*)0;
                }
                cVar1 = IsObjectAlive(this, pRVar3);
                if (cVar1 == '\0') {
                    SkipCurrentDrawCall(this);
                    return;
                }
            }
            (m_immediateContext, param_1, param_2, param_3, param_5)->BindImageTexture();
        } else {
            local_50.field_0 = this;
            local_50.field_8 = param_2;
            local_50.field_16 = param_1;
            local_50.field_20 = param_3;
            local_50.field_24 = param_5;
            if (field_3568 == (DeferredFrameData*)0) {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::BindImageTexture(
                    unsigned int, Texture_const*, int, LockType)::__99>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__99*)&local_50);
            } else {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::BindImageTexture(
                    unsigned int, Texture_const*, int, LockType)::__98>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_50);
            }
        }
    }

    // 0x100c290b0, 304 bytes, placed by __FILE__ string
    // RenderContext::UpdateBackBufferSize(bool)
    void RenderContext::UpdateBackBufferSize(bool param_1) {
        uint uVar3;
        uint uVar4;
        long lVar5;
        OpenGLView* this_00;
        RenderDevice* this_01;
        RenderTargets* pRVar6;
        Singleton<RenderDevice>* this_02;
        GridRect local_48;
        uint local_34;

        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "RenderContext_OGL.cpp",
                      43, (char*)0);
        }
        if (GetReadyState(this) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("GetReadyState() == RenderContextReadyState::STATE_READY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "RenderContext_OGL.cpp",
                      44, (char*)0);
        }
        uVar3 = GetBackBufferWidth(this);
        uVar4 = GetBackBufferHeight(this);
        if (!param_1) {
            lVar5 = GetDesc(this);
            this_00 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)(lVar5 + 16));
            this_00->GetBackingSize((uint*)&local_48, &local_34);
            if ((local_48.field_0 != uVar3) || (local_34 != uVar4)) {
                param_1 = true;
                uVar4 = local_34;
                uVar3 = local_48.field_0;
            }
        }
        if (param_1 != false) {
            this_02 = (Singleton<RenderDevice>*)m_immediateContext;
            this_02->UpdateBackBuffer(uVar3, uVar4);
            if ((uVar3 != 0) && (uVar4 != 0)) {
                this_01 = (RenderDevice*)this_02->Instance();
                new (&local_48) oldscape::dash3d::GridRect(0, 0, uVar3, uVar4);
                this_01->OnWindowResize((Rect*)&local_48);
            }
            pRVar6 = (RenderTargets*)GetBackBuffer(this);
            SetRenderTargets(this, pRVar6);
        }
    }

    // 0x100c29370, 112 bytes, placed by class name and neighbouring functions
    // RenderContext::SetTexturesFromStateCache()
    void RenderContext::SetTexturesFromStateCache() {
        RenderContextStateCache* this_00;
        __100 local_18;

        if (ShouldDefer(this) == '\0') {
            this_00 = (RenderContextStateCache*)m_immediateContext->GetStateCache();
            this_00->SetTextures();
        } else {
            local_18.field_0 = (long)this;
            if (field_3568 == (DeferredFrameData*)0) {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::SetTexturesFromStateCache()::__101>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__101*)&local_18);
            } else {
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<
                    RenderContext::SetTexturesFromStateCache()::__100>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, &local_18);
            }
        }
    }

    // 0x100c29560, 368 bytes, placed by __FILE__ string
    // RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)
    void RenderContext::ClearRenderTargets(Vector4T* param_1, ulong param_2) {
        RenderTargets* this_00;
        char cVar1;
        long lVar2;
        ulong extraout_RDX;
        ulong uVar3;
        ulong uVar4;
        undefined1 auVar5[16];
        RenderContext* local_68;
        RenderTargets* local_60;
        ulong local_58;
        undefined8 local_48;
        undefined8 uStack_40;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = m_pCurrentState;
        if (this_00 != (RenderTargets*)0) {
            this_00->KeepAlive();
        }
        cVar1 = ShouldDefer(this);
        if (cVar1 == '\0') {
            cVar1 = IsCurrentRenderTargetAlive(this, this_00);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/RenderContext_OGL.cpp",
                                122, (char*)0);
            }
            uVar3 = extraout_RDX;
            if (param_2 != 0) {
                uVar4 = 0;
                do {
                    lVar2 = m_immediateContext->GetStateCache();
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
                } while (param_2 != uVar4);
            }
            (m_immediateContext, param_1, uVar3)->ClearRenderTargets();
        } else {
            local_68 = this;
            local_60 = this_00;
            local_58 = param_2;
            if (field_3568 == (DeferredFrameData*)0) {
                local_48 = *(undefined8*)param_1;
                uStack_40 = *(undefined8*)(param_1 + 8);
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::ClearRenderTargets(
                    math::Vector4T<float> const*, unsigned long)::__103>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3584, (__103*)&local_68);
            } else {
                local_48 = *(undefined8*)param_1;
                uStack_40 = *(undefined8*)(param_1 + 8);
                eastl::vector<DeferredRenderFunction, eastl::allocator>::emplace_back<RenderContext::ClearRenderTargets(
                    math::Vector4T<float> const*, unsigned long)::__102>(
                    (vector<DeferredRenderFunction, eastl::allocator>*)&field_3568->field_80, (__102*)&local_68);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::render
