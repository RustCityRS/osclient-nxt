// libs/hal/render/context/OGL/RenderContext_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/context/RenderContext.h"

namespace jag::render {
    // 0x100c13860
    void RenderContext::SetDefaultVAO() {
        if (((RenderDevice*)Instance())->IsRenderThread() == '\0') {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "RenderContext_OGL.cpp",
                      32, nullptr);
        }
        m_immediateContext->SetDefaultVAO();
    }

    // 0x100c1a4c0
    uint64_t RenderContext::PostInit(const RenderContextDesc& renderContextDesc) {
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[168];
        long local_30;

        unsigned int local_e0 = 0;
        unsigned int local_dc = 0;
        auto this_00 = renderContextDesc.field_16.operator->();
        this_00->GetBackingSize(local_e0, local_dc);
        if ((local_e0 == 0) || (local_dc == 0)) {
            LogAssert("width && height",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "RenderContext_OGL.cpp",
                      21, nullptr);
        }
        RenderContext* local_f8 = this;
        unsigned int* local_f0 = &local_e0;
        unsigned int* local_e8 = &local_dc;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            RenderContext::PostInit(RenderContextDesc const&)::__97, void>(local_d8, (__97*)&local_f8);
        RunSynchronouslyOnRenderThread(*local_d8, true);
        return 1;
    }

    // 0x100c1f6e0
    bool RenderContext::IsCurrentRenderTargetAlive(const RenderTargets* renderTargets) const {
        unsigned int uVar1;
        bool cVar2;
        unsigned int uVar3;
        Logger* this_00;

        if ((renderTargets == nullptr) || (cVar2 = renderTargets->IsCreated(), !cVar2)) {
            return 0;
        }
        RenderContextStateCache* pRVar5 = m_immediateContext->GetStateCache();
        if ((RenderTargets*)pRVar5->field_0 != renderTargets) {
            this_00 = logger::default_logger();
            pRVar5 = m_immediateContext->GetStateCache();
            uVar1 = pRVar5->field_8;
            uVar3 = renderTargets->GetNativeFBOId();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                         "RenderContext_OGL.cpp",
                         88, "Unexpected render target bound (%u bound, expected %u) - call discarded",
                         (unsigned long)uVar1, (unsigned long)uVar3);
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "OGL/RenderContext_OGL.cpp",
                            89, nullptr);
        }
        return renderTargets->CheckTexturesAlive(*this);
    }

    // 0x100c28e50
    void RenderContext::BindImageTexture(unsigned int arg1, const Texture* texture, int arg3, LockType lockType) {
        long lVar2;
        RenderResource* renderResource;
        RenderContext* local_50;
        Texture* local_48;
        unsigned int local_40;
        int local_3c;
        LockType local_38;

        if (!(ShouldDefer())) {
            lVar2 = GetDesc();
            if (*(char*)(lVar2 + 11) != '\0') {
                renderResource = (RenderResource*)&texture->field_8;
                if (texture == nullptr) {
                    renderResource = nullptr;
                }
                if (!(IsObjectAlive(renderResource))) {
                    SkipCurrentDrawCall();
                    return;
                }
            }
            m_immediateContext->BindImageTexture(arg1, texture, arg3, lockType);
        } else {
            local_50 = this;
            local_48 = texture;
            local_40 = arg1;
            local_3c = arg3;
            local_38 = lockType;
            if (field_3568 == nullptr) {
                (&field_3584)
                    ->emplace_back<RenderContext::BindImageTexture(unsigned int, Texture const*, int, LockType)::__99>(
                        &local_50);
            } else {
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::BindImageTexture(unsigned int, Texture const*, int, LockType)::__98>(
                        &local_50);
            }
        }
    }

    // 0x100c290b0
    void RenderContext::UpdateBackBufferSize(bool arg1) {
        long lVar3;
        RenderDevice* this_01;
        Singleton<RenderDevice>* this_02;
        GridRect local_48;
        unsigned int local_34;

        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "RenderContext_OGL.cpp",
                      43, nullptr);
        }
        if (GetReadyState() != 0) {
            LogAssert("GetReadyState() == RenderContextReadyState::STATE_READY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "RenderContext_OGL.cpp",
                      44, nullptr);
        }
        unsigned int arg1_00 = GetBackBufferWidth();
        unsigned int arg2 = GetBackBufferHeight();
        if (!arg1) {
            lVar3 = GetDesc();
            ((OpenGLView*)(*((lVar3 + 16))).operator->())->GetBackingSize(local_48, local_34);
            if ((local_48.field_0 != arg1_00) || (local_34 != arg2)) {
                arg1 = true;
                arg2 = local_34;
                arg1_00 = local_48.field_0;
            }
        }
        if (arg1 != false) {
            this_02 = (Singleton<RenderDevice>*)m_immediateContext;
            this_02->UpdateBackBuffer(arg1_00, arg2);
            if ((arg1_00 != 0) && (arg2 != 0)) {
                this_01 = (RenderDevice*)this_02->Instance();
                local_48 = oldscape::dash3d::GridRect(0, 0, arg1_00, arg2);
                this_01->OnWindowResize(local_48);
            }
            SetRenderTargets(GetBackBuffer());
        }
    }

    // 0x100c29370
    void RenderContext::SetTexturesFromStateCache() {
        __100 local_18;

        if (ShouldDefer() == '\0') {
            m_immediateContext->GetStateCache()->SetTextures();
        } else {
            local_18.field_0 = (long)this;
            if (field_3568 == nullptr) {
                (&field_3584)->emplace_back<RenderContext::SetTexturesFromStateCache()::__101>(&local_18);
            } else {
                (&field_3568[1].field_32)->emplace_back<RenderContext::SetTexturesFromStateCache()::__100>(&local_18);
            }
        }
    }

    // 0x100c29560
    void RenderContext::ClearRenderTargets(const math::Vector4T<float>* vector4, unsigned long arg2) {
        RenderContextStateCache* pRVar2;
        unsigned long extraout_RDX;
        unsigned long arg2_00;
        unsigned long arg1;
        uint8_t auVar3[16];
        RenderContext* local_68;
        RenderTargets* local_60;
        unsigned long local_58;
        uint64_t local_48;
        uint64_t uStack_40;

        RenderTargets* this_00 = m_pCurrentState;
        if (this_00 != nullptr) {
            this_00->KeepAlive();
        }
        if (!(ShouldDefer())) {
            if (!(IsCurrentRenderTargetAlive(this_00))) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/RenderContext_OGL.cpp",
                                122, nullptr);
            }
            arg2_00 = extraout_RDX;
            if (arg2 != 0) {
                arg1 = 0;
                do {
                    pRVar2 = m_immediateContext->GetStateCache();
                    auVar3 = (*((pRVar2->field_288 + 4)))[arg1];
                    arg2_00 = auVar3._8_8_;
                    if (*(char*)(auVar3._0_8_ + 28) != '\x0f') {
                        LogAssert("m_immediateContext.GetStateCache().m_BlendStateDesc.m_RenderTargetBlend[i].m_"
                                  "RenderTargetWriteMask == COLOR_WRITE_ENABLE_ALL",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "context/OGL/RenderContext_OGL.cpp",
                                  116, nullptr);
                    }
                    arg1 = arg1 + 1;
                } while (arg2 != arg1);
            }
            m_immediateContext->ClearRenderTargets(vector4, arg2_00);
        } else {
            local_68 = this;
            local_60 = this_00;
            local_58 = arg2;
            if (field_3568 == nullptr) {
                local_48 = *(uint64_t*)vector4;
                uStack_40 = *(uint64_t*)(vector4 + 8);
                (&field_3584)
                    ->emplace_back<RenderContext::ClearRenderTargets(math::Vector4T<float> const*,
                                                                     unsigned long)::__103>(&local_68);
            } else {
                local_48 = *(uint64_t*)vector4;
                uStack_40 = *(uint64_t*)(vector4 + 8);
                (&field_3568[1].field_32)
                    ->emplace_back<RenderContext::ClearRenderTargets(math::Vector4T<float> const*,
                                                                     unsigned long)::__102>(&local_68);
            }
        }
    }

} // namespace jag::render
