// libs/hal/render/context/ImmediateRenderContext.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "ImmediateRenderContext.h"

namespace jag::render {
    // 0x100009d50: ImmediateRenderContext::GetDesc() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100023af0: ImmediateRenderContext::IsInsideBeginEnd() const has the same machine code as hal::Haptics::GetEnabled() const

    // 0x100029c40: ImmediateRenderContext::GetThreadID() const has the same machine code as oldscape::javapal::GameShell::GetGraphicsApp()

    // 0x10005fc30: ImmediateRenderContext::GetStats() const has the same machine code as oldscape::widgets::Widget::GetBounds() const

    // 0x1002135f0: ImmediateRenderContext::GetGLCoreProfileVerMinor() const has the same machine code as oldscape::rs2lib::worldmap::PackableArea::GetBaseLevel()

    // 0x100c15530
    uint64_t ImmediateRenderContext::Create(const RenderContextDesc& renderContextDesc) {
        long lVar1;

        auto this_00 = logger::default_logger();
        this_00->Log(false, 8,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                     "ImmediateRenderContext.cpp",
                     18, "ImmediateRenderContext::Create");
        if (*(char*)((long)&renderContextDesc.field_8 + 2) != '\0') {
            lVar1 = ((MapArea*)this_00->Instance())->GetOrigin();
            if (*(char*)(lVar1 + 224) == '\0') {
                LogAssert("RenderDevice::Instance().GetDeviceCaps().m_MultiContext",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "ImmediateRenderContext.cpp",
                          25, nullptr);
            }
        }
        m_threadID = this_thread::GetThreadID();
        SetReadyState(0);
        BackendInit(renderContextDesc);
        field_8 = renderContextDesc;
        lock_guard<ImmediateRenderContext> local_20(*this);
        Init();
        if (*(char*)((long)&renderContextDesc.field_8 + 2) == '\0') {
            ClearState(true);
            ClearSwapChain();
            SetVSyncMode(renderContextDesc.field_0);
        }
        return 1;
    }

    // 0x100c15640
    void ImmediateRenderContext::SetReadyState(RenderContextReadyState renderContextReadyState) {
        auto this_00 = logger::default_logger();
        uint64_t uVar1 = GetReadyStateString(renderContextReadyState);
        uint64_t uVar2 = GetReadyStateString((&field_40)->operator_cast_to_RenderContextReadyState());
        this_00->Log(false, 8,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                     "ImmediateRenderContext.cpp",
                     426, "Setting context ready state to %s, was %s", uVar1, uVar2);
        field_40 = renderContextReadyState;
    }

    // 0x100c16050
    void ImmediateRenderContext::ClearSwapChain() {
        long lVar2;
        unsigned long arg2;
        ImVec4 local_38;

        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      96, nullptr);
        }
        int iVar3 = 2;
        do {
            if (Begin()) {
                SetRenderTargets((RenderTargets*)GetBackBuffer());
                local_38 = ImVec4(0.0, 0.0, 0.0, 0.0);
                lVar2 = &local_38->Instance();
                SetBlendState((lVar2 + 1524));
                ClearRenderTargets(this, &local_38, arg2);
                End();
            }
            Present();
            iVar3 = iVar3 - 1;
        } while (iVar3 != 0);
    }

    // 0x100c16290
    void ImmediateRenderContext::Destroy() {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      66, nullptr);
        }
        SetReadyState(1);
        ReleaseNativeResources();
    }

    // 0x100c16300
    void ImmediateRenderContext::OnDeviceLost() {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      75, nullptr);
        }
        DestroyRenderingResources();
    }

    // 0x100c16400
    void ImmediateRenderContext::ClearRenderTargets(const RenderTargets* renderTargets,
                                                    const math::Vector4T<float>* vector4, unsigned long arg3) {
        unsigned long arg2;

        if (IsContextThread((ImmediateRenderContext*)renderTargets) == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      82, nullptr);
        }
        SetRenderTargets((ImmediateRenderContext*)renderTargets, (RenderTargets*)vector4);
        ClearRenderTargets((ImmediateRenderContext*)renderTargets, (Vector4T<float>*)arg3, arg2);
    }

    // 0x100c166f0
    void ImmediateRenderContext::ClearDepthStencilTarget(const RenderTargets* renderTargets, float arg2,
                                                         unsigned int arg3, unsigned int arg4) {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      89, nullptr);
        }
        SetRenderTargets(renderTargets);
        ClearDepthStencilTarget(arg2, arg3, arg4);
    }

    // 0x100c16a80
    uint8_t ImmediateRenderContext::Begin() {
        long lVar3;
        Vector4T<float>* vector4;
        ImmediateRenderContext* pIVar4;
        ImVec4 local_28;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      359, nullptr);
        }
        if (m_insideBeginEnd != false) {
            LogAssert("!m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      360, nullptr);
        }
        if (field_18 != '\0') {
            LogAssert("!m_Desc.m_SecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      361, nullptr);
        }
        field_44.Update();
        int iVar2 = (&field_40)->operator_cast_to_RenderContextReadyState();
        if (iVar2 == 0) {
            pIVar4 = this;
            ClearState(false);
            lVar3 = pIVar4->Instance();
            pIVar4 = this;
            SetDepthStencilState((lVar3 + 720));
            lVar3 = pIVar4->Instance();
            pIVar4 = this;
            SetRasteriserState((lVar3 + 1200));
            lVar3 = pIVar4->Instance();
            SetBlendState((lVar3 + 1524));
        }
        iVar2 = (&field_40)->operator_cast_to_RenderContextReadyState();
        m_insideBeginEnd = iVar2 == 0;
        if (iVar2 == 0) {
            local_28 = ImVec4(0.0, 0.0, 0.0, 0.0);
            vector4 = (Vector4T<float>*)GetBackBuffer();
            ClearRenderTargets((RenderTargets*)this, vector4, (unsigned long)&local_28);
        }
        return m_insideBeginEnd;
    }

    // 0x100c16cb0
    void ImmediateRenderContext::End() {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      392, nullptr);
        }
        if (field_18 != '\0') {
            LogAssert("!m_Desc.m_SecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      393, nullptr);
        }
        RenderTargets* pRVar3 = (RenderTargets*)&field_40;
        if (pRVar3->operator_cast_to_RenderContextReadyState() == 0) {
            if (m_insideBeginEnd == false) {
                LogAssert("m_InsideBeginEnd",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "ImmediateRenderContext.cpp",
                          397, nullptr);
            }
            pRVar3->InvalidateAllRenderTargets();
            pRVar3 = (RenderTargets*)GetBackBuffer();
            SetRenderTargets(pRVar3);
        }
        m_insideBeginEnd = false;
    }

    // 0x100c16e10
    void ImmediateRenderContext::SetVertexBuffer(const VertexBuffer* vertexBuffer, unsigned int arg2,
                                                 unsigned int arg3) {
        uint32_t in_register_0000000c;
        unsigned int* in_R8;

        unsigned int* arg3_00 = (unsigned int*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3);
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      114, nullptr);
        }
        VertexBuffer* local_28 = vertexBuffer;
        SetVertexBuffers(1, &local_28, arg3_00, in_R8);
    }

    // 0x100c17020
    void ImmediateRenderContext::SetVSTextureSamplerPair(unsigned int arg1, const Texture* texture, unsigned int arg3,
                                                         const SamplerState* samplerState, bool arg5) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                        "ImmediateRenderContext.cpp",
                        128, "\nNot supported");
    }

    // 0x100c17050
    void ImmediateRenderContext::SetPSTextureSamplerPair(unsigned int arg1, const Texture* texture, int arg3,
                                                         const SamplerState* samplerState, bool arg5) {
        long lVar3;
        unsigned int arg2;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      138, nullptr);
        }
        if (m_insideBeginEnd == false) {
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      139, nullptr);
        }
        if (texture == nullptr) {
            LogAssert("pTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      140, nullptr);
        }
        Texture* this_00 = texture;
        auto pTVar2 = texture->GetNativeTextureId();
        if ((int)pTVar2 == 0) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      179, "Texture bound without native resources - binding skipped");
        } else {
            if ((!arg5) && (arg3 < 0)) {
                this_00 = (Texture*)logger::default_logger();
                this_00->Log(false, 3,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "ImmediateRenderContext.cpp",
                             146,
                             "Sampler uniform has probably been optimised out unexpectedly or of the incorrect type "
                             "(i.e. multi-sampled texture)");
            }
            arg2 = arg1 + 1;
            lVar3 = ((MapArea*)this_00->Instance())->GetOrigin();
            if (*(unsigned int*)(lVar3 + 60) <= arg2) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/ImmediateRenderContext.cpp",
                                161,
                                "Attempting to bind to texture slot %u, which exceeds maximum textures slots of %u",
                                (unsigned long)arg2);
            }
            if (arg2 == 0) {
                LogAssert("textureSlot > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "ImmediateRenderContext.cpp",
                          166, nullptr);
            }
            BindTexture(*texture, arg2);
            texture->SetTemporarySamplerState(samplerState);
            ValidateTextureSamplerPair((unsigned int)this, (Texture*)samplerState, (int)texture);
            field_136->SetShaderConstSampler(arg3, arg2);
        }
    }

    // 0x100c17390
    void ImmediateRenderContext::SetCSTextureSamplerPair(unsigned int arg1, const Texture* texture, int arg3,
                                                         const SamplerState* samplerState, bool arg5) {
        long lVar3;
        unsigned int arg2;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      190, nullptr);
        }
        if (m_insideBeginEnd == false) {
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      191, nullptr);
        }
        if (texture == nullptr) {
            LogAssert("pTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      192, nullptr);
        }
        Texture* this_00 = texture;
        auto pTVar2 = texture->GetNativeTextureId();
        if ((int)pTVar2 == 0) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      231, "Texture bound without native resources - binding skipped");
        } else {
            if ((!arg5) && (arg3 < 0)) {
                this_00 = (Texture*)logger::default_logger();
                this_00->Log(false, 3,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "ImmediateRenderContext.cpp",
                             198,
                             "Sampler uniform has probably been optimised out unexpectedly or of the incorrect type "
                             "(i.e. multi-sampled texture)");
            }
            arg2 = arg1 + 1;
            lVar3 = ((MapArea*)this_00->Instance())->GetOrigin();
            if (*(unsigned int*)(lVar3 + 64) <= arg2) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/ImmediateRenderContext.cpp",
                                213,
                                "Attempting to bind to texture slot %u, which exceeds maximum textures slots of %u",
                                (unsigned long)arg2);
            }
            if (arg2 == 0) {
                LogAssert("textureSlot > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "ImmediateRenderContext.cpp",
                          218, nullptr);
            }
            BindTexture(*texture, arg2);
            texture->SetTemporarySamplerState(samplerState);
            ValidateTextureSamplerPair((unsigned int)this, (Texture*)samplerState, (int)texture);
            field_136->SetShaderConstSampler(arg3, arg2);
        }
    }

    // 0x100c17570
    void ImmediateRenderContext::SetVSShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer) {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      237, nullptr);
        }
        SetShaderConstBuffer(arg1, shaderConstBuffer);
    }

    // 0x100c17760
    void ImmediateRenderContext::SetPSShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer) {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      243, nullptr);
        }
        SetShaderConstBuffer(arg1, shaderConstBuffer);
    }

    // 0x100c177c0
    void ImmediateRenderContext::SetCSShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer) {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      249, nullptr);
        }
        SetShaderConstBuffer(arg1, shaderConstBuffer);
    }

    // 0x100c17820
    void ImmediateRenderContext::BindDrawCallState(const DrawCallState& drawCallState) {
        uint8_t bVar2;
        InputAssemblerState* inputAssemblerState;
        RenderPipelineState* renderPipelineState;
        Vector4T<float>* vector4;
        unsigned long arg2;
        bool bVar6;
        float arg1;
        ReturnValue local_f8;
        ReturnValue local_b8;
        ReturnValue local_78;

        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      256, nullptr);
        }
        if (!(drawCallState.operator_cast_to_bool())) {
            inputAssemblerState = nullptr;
        } else {
            inputAssemblerState = (InputAssemblerState*)drawCallState.GetInputAssemblerState();
        }
        SetInputAssemblerState(inputAssemblerState);
        if (!(drawCallState.operator_cast_to_bool())) {
            renderPipelineState = nullptr;
        } else {
            renderPipelineState = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
        }
        SetRenderPipelineState(renderPipelineState);
        if (!(drawCallState.HaveManager())) {
            LogAssert("drawCallState.HasOutputMergerState()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      271, nullptr);
        }
        auto this_00 = drawCallState.GetOutputMergerState();
        SetOutputMergerState(this_00);
        unsigned int uVar3 = this_00->SampleRate();
        if ((uVar3 & 1) == 0) {
            bVar6 = false;
        } else {
            local_78 = this_00->GetClearColours();
            bVar6 = local_78.size() != 0;
        }
        if ((uVar3 & 1) != 0) {
        }
        if (bVar6) {
            local_b8 = this_00->GetClearColours();
            vector4 = (Vector4T<float>*)local_b8.HeapBeginPtr();
            local_f8 = this_00->GetClearColours();
            local_f8.size();
            ClearRenderTargets(this, vector4, arg2);
        }
        unsigned long uVar5 = this_00->SampleRate();
        if (((uVar5 & 2) != 0) || (uVar5 = this_00->SampleRate(), (uVar5 & 4) != 0)) {
            arg1 = (float)this_00->GetDepthClear();
            bVar2 = this_00->GetStencilClear();
            uVar3 = this_00->SampleRate();
            ClearDepthStencilTarget(arg1, (unsigned int)bVar2, uVar3);
        }
    }

    // 0x100c181f0
    void ImmediateRenderContext::BindDrawCallState(DrawCallState& drawCallState) {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      292, nullptr);
        }
        BindDrawCallState(drawCallState);
        auto this_00 = drawCallState.GetOutputMergerState();
        this_00->SetClearColours(nullptr, 0);
        this_00->SetDepthStencilClear(1.0, '\0');
        this_00->SetClearFlags(0);
    }

    // 0x100c182c0
    void ImmediateRenderContext::BindDispatchCallState(const DispatchCallState& dispatchCallState) {
        ComputePipelineState* computePipelineState;

        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      305, nullptr);
        }
        if (!(dispatchCallState.operator_cast_to_bool())) {
            computePipelineState = nullptr;
        } else {
            computePipelineState = dispatchCallState.GetComputePipelineState();
        }
        SetComputePipelineState(computePipelineState);
    }

    // 0x100c18610
    void ImmediateRenderContext::DrawPrimitives(DrawCallState& drawCallState, PrimitiveType primitiveType, int arg3,
                                                int arg4) {

        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      316, nullptr);
        }
        if (!(VerifyVertexCount(primitiveType, arg4))) {
            LogAssert("VerifyVertexCount(primType, vertexCount)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      317, nullptr);
        }
        BindDrawCallState(drawCallState);
        DrawPrimitives(primitiveType, arg3, arg4);
    }

    // 0x100c18770
    void ImmediateRenderContext::DrawMultiPrimitives(DrawCallState& drawCallState, PrimitiveType primitiveType,
                                                     unsigned int arg3, const int* arg4, const int* arg5) {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      324, nullptr);
        }
        BindDrawCallState(drawCallState);
        DrawMultiPrimitives(primitiveType, arg3, arg4, arg5);
    }

    // 0x100c18910
    void ImmediateRenderContext::DrawIndexedPrimitives(DrawCallState& drawCallState, PrimitiveType primitiveType,
                                                       unsigned int arg3, unsigned int arg4) {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      331, nullptr);
        }
        auto this_00 = drawCallState.GetInputAssemblerState();
        if (this_00->GetIndexBuffer() == 0) {
            LogAssert("IAState.GetIndexBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      333, nullptr);
        }
        BindDrawCallState(drawCallState);
        IndexType indexType = ((Component*)this_00->GetIndexBuffer())->GetCurrentX();
        DrawIndexedPrimitives(primitiveType, arg3, arg4, indexType);
    }

    // 0x100c18ab0
    void ImmediateRenderContext::DrawMultiIndexedPrimitives(DrawCallState& drawCallState, PrimitiveType primitiveType,
                                                            unsigned int arg3, const int* arg4,
                                                            void const* const* arg5) {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      341, nullptr);
        }
        auto this_00 = drawCallState.GetInputAssemblerState();
        if (this_00->GetIndexBuffer() == 0) {
            LogAssert("IAState.GetIndexBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      343, nullptr);
        }
        BindDrawCallState(drawCallState);
        IndexType indexType = ((Component*)this_00->GetIndexBuffer())->GetCurrentX();
        DrawMultiIndexedPrimitives(primitiveType, arg3, arg4, arg5, indexType);
    }

    // 0x100c18ca0
    void ImmediateRenderContext::DispatchCompute(DispatchCallState& dispatchCallState, unsigned int arg2,
                                                 unsigned int arg3, unsigned int arg4) {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      351, nullptr);
        }
        BindDispatchCallState(dispatchCallState);
        DispatchCompute(arg2, arg3, arg4);
    }

    // 0x100c19020
    void ImmediateRenderContext::BackendEnd() {}

    // 0x100c19030
    char* GetReadyStateString(RenderContextReadyState renderContextReadyState) {
        if (renderContextReadyState == 0) {
            return "STATE_READY";
        }
        if (renderContextReadyState != 1) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "ImmediateRenderContext.cpp",
                            416, nullptr);
        }
        return "STATE_LOST";
    }

    // 0x100c29360: ImmediateRenderContext::GetStateCache() has the same machine code as ImmediateRenderContext::GetStateCache() const

    // 0x100c51500
    void ImmediateRenderContext::Init()::$_96::operator()(const RenderDeviceCaps& renderDeviceCaps) const {
        ((field_0 + 2208))->Init(renderDeviceCaps);
    }

} // namespace jag::render
