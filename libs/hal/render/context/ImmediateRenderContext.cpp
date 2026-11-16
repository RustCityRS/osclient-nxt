// libs/hal/render/context/ImmediateRenderContext.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "ImmediateRenderContext.h"

namespace jag::render {
    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    ImmediateRenderContext::GetDesc() const;

    // 0x100023af0: the linker folded this into hal::Haptics::GetEnabled() const, which has identical code
    bool ImmediateRenderContext::IsInsideBeginEnd() const;

    // 0x100029c40: the linker folded this into oldscape::javapal::GameShell::GetGraphicsApp(), which has identical code
    ImmediateRenderContext::GetThreadID() const;

    // 0x10005fc30: the linker folded this into oldscape::widgets::Widget::GetBounds() const, which has identical code
    ImmediateRenderContext::GetStats() const;

    // 0x1002135f0: the linker folded this into oldscape::rs2lib::worldmap::PackableArea::GetBaseLevel(), which has identical code
    ImmediateRenderContext::GetGLCoreProfileVerMinor() const;

    // 0x100c15530, 272 bytes, placed by class name and debug map
    // ImmediateRenderContext::Create(RenderContextDesc const&)
    undefined8 ImmediateRenderContext::Create(RenderContextDesc* param_1) {
        Singleton<RenderDevice>* this_00;
        MapArea* this_01;
        long lVar1;
        lock_guard<ImmediateRenderContext> local_20[8];

        this_00 = (Singleton<RenderDevice>*)logger::default_logger();
        logger::Logger::Log(this_00, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "ImmediateRenderContext.cpp",
                            18, "ImmediateRenderContext::Create");
        if (*(char*)((long)&param_1->field_8 + 2) != '\0') {
            this_01 = (MapArea*)this_00->Instance();
            lVar1 = this_01->GetOrigin();
            if (*(char*)(lVar1 + 224) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("RenderDevice::Instance().GetDeviceCaps().m_MultiContext",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "ImmediateRenderContext.cpp",
                          25, (char*)0);
            }
        }
        m_threadID = this_thread::GetThreadID();
        SetReadyState(this, 0);
        BackendInit(this, param_1);
        RenderContextDesc::operator=((RenderContextDesc*)&field_8, param_1);
        lock_guard<ImmediateRenderContext>::lock_guard(local_20, this);
        Init(this);
        if (*(char*)((long)&param_1->field_8 + 2) == '\0') {
            ClearState(this, true);
            ClearSwapChain(this);
            SetVSyncMode(this, param_1->field_0);
        }
        local_20->~lock_guard();
        return 1;
    }

    // 0x100c15640, 128 bytes, placed by class name and debug map
    // ImmediateRenderContext::SetReadyState(RenderContextReadyState)
    void ImmediateRenderContext::SetReadyState(undefined4 param_2) {
        undefined4 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;

        uVar2 = logger::default_logger();
        uVar3 = GetReadyStateString(param_2);
        uVar1 = (&field_40)->operator_cast_to_RenderContextReadyState();
        uVar4 = GetReadyStateString(uVar1);
        logger::Logger::Log(uVar2, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "ImmediateRenderContext.cpp",
                            426, "Setting context ready state to %s, was %s", uVar3, uVar4);
        std::atomic<RenderContextReadyState>::operator=((atomic<RenderContextReadyState>*)&field_40, param_2);
    }

    // 0x100c16050, 208 bytes, placed by __FILE__ string
    // ImmediateRenderContext::ClearSwapChain()
    void ImmediateRenderContext::ClearSwapChain() {
        char cVar1;
        RenderTargets* pRVar2;
        long lVar3;
        ulong extraout_RDX;
        int iVar4;
        ImVec4* this_00;
        ImVec4 local_38[24];

        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      96, (char*)0);
        }
        iVar4 = 2;
        do {
            cVar1 = Begin(this);
            if (cVar1 != '\0') {
                pRVar2 = (RenderTargets*)GetBackBuffer(this);
                SetRenderTargets(this, pRVar2);
                this_00 = local_38;
                ImVec4::ImVec4(local_38, 0.0, 0.0, 0.0, 0.0);
                lVar3 = this_00->Instance();
                SetBlendState(this, (BlendState*)(lVar3 + 1524));
                ClearRenderTargets(this, (Vector4T*)local_38, extraout_RDX);
                End(this);
            }
            Present(this);
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }

    // 0x100c16290, 80 bytes, placed by __FILE__ string
    // ImmediateRenderContext::Destroy()
    void ImmediateRenderContext::Destroy() {
        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      66, (char*)0);
        }
        SetReadyState(this, 1);
        ReleaseNativeResources(this);
    }

    // 0x100c16300, 64 bytes, placed by class name
    // ImmediateRenderContext::OnDeviceLost()
    void ImmediateRenderContext::OnDeviceLost() {
        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      75, (char*)0);
        }
        DestroyRenderingResources(this);
    }

    // 0x100c16400, 96 bytes, placed by class name
    // ImmediateRenderContext::ClearRenderTargets(RenderTargets const*, math::Vector4T<float> const*, unsigned long)
    void ImmediateRenderContext::ClearRenderTargets(RenderTargets* param_1, Vector4T* param_2, ulong param_3) {
        ulong extraout_RDX;

        if (IsContextThread((ImmediateRenderContext*)param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      82, (char*)0);
        }
        SetRenderTargets((ImmediateRenderContext*)param_1, (RenderTargets*)param_2);
        ClearRenderTargets((ImmediateRenderContext*)param_1, (Vector4T*)param_3, extraout_RDX);
    }

    // 0x100c166f0, 128 bytes, placed by class name
    // ImmediateRenderContext::ClearDepthStencilTarget(RenderTargets const*, float, unsigned int, unsigned int)
    void ImmediateRenderContext::ClearDepthStencilTarget(RenderTargets* param_1, float param_2, uint param_3,
                                                         uint param_4) {
        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      89, (char*)0);
        }
        SetRenderTargets(this, param_1);
        ClearDepthStencilTarget(this, param_2, param_3, param_4);
    }

    // 0x100c16a80, 304 bytes, placed by class name
    // ImmediateRenderContext::Begin()
    undefined1 ImmediateRenderContext::Begin() {
        int iVar2;
        long lVar3;
        Vector4T* pVVar4;
        ImmediateRenderContext* pIVar5;
        ImVec4 local_28[16];

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      359, (char*)0);
        }
        if (m_insideBeginEnd != false) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      360, (char*)0);
        }
        if (field_18 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_Desc.m_SecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      361, (char*)0);
        }
        (&field_44)->Update();
        iVar2 = (&field_40)->operator_cast_to_RenderContextReadyState();
        if (iVar2 == 0) {
            pIVar5 = this;
            ClearState(this, false);
            lVar3 = pIVar5->Instance();
            pIVar5 = this;
            SetDepthStencilState(this, (DepthStencilState*)(lVar3 + 720));
            lVar3 = pIVar5->Instance();
            pIVar5 = this;
            SetRasteriserState(this, (RasteriserState*)(lVar3 + 1200));
            lVar3 = pIVar5->Instance();
            SetBlendState(this, (BlendState*)(lVar3 + 1524));
        }
        iVar2 = (&field_40)->operator_cast_to_RenderContextReadyState();
        m_insideBeginEnd = iVar2 == 0;
        if (iVar2 == 0) {
            ImVec4::ImVec4(local_28, 0.0, 0.0, 0.0, 0.0);
            pVVar4 = (Vector4T*)GetBackBuffer(this);
            ClearRenderTargets((RenderTargets*)this, pVVar4, (ulong)local_28);
        }
        return m_insideBeginEnd;
    }

    // 0x100c16cb0, 176 bytes, placed by class name
    // ImmediateRenderContext::End()
    void ImmediateRenderContext::End() {
        RenderTargets* pRVar3;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      392, (char*)0);
        }
        if (field_18 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_Desc.m_SecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      393, (char*)0);
        }
        pRVar3 = (RenderTargets*)&field_40;
        if (pRVar3->operator_cast_to_RenderContextReadyState() == 0) {
            if (m_insideBeginEnd == false) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_InsideBeginEnd",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "ImmediateRenderContext.cpp",
                          397, (char*)0);
            }
            pRVar3->InvalidateAllRenderTargets();
            pRVar3 = (RenderTargets*)GetBackBuffer(this);
            SetRenderTargets(this, pRVar3);
        }
        m_insideBeginEnd = false;
    }

    // 0x100c16e10, 128 bytes, placed by class name
    // ImmediateRenderContext::SetVertexBuffer(VertexBuffer const*, unsigned int, unsigned int)
    void ImmediateRenderContext::SetVertexBuffer(VertexBuffer* param_1, uint param_2, uint param_3) {
        undefined4 in_register_0000000c;
        uint* puVar2;
        VertexBuffer* local_28;
        long local_20;

        puVar2 = (uint*)CONCAT44(in_register_0000000c, param_3);
        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      114, (char*)0);
        }
        local_28 = param_1;
        SetVertexBuffers((uint)this, (VertexBuffer**)&DAT_00000001, (uint*)&local_28, puVar2);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c17020, 48 bytes, placed by class name
    // ImmediateRenderContext::SetVSTextureSamplerPair(unsigned int, Texture const*, unsigned int, SamplerState const*, bool)
    void ImmediateRenderContext::SetVSTextureSamplerPair(uint param_1, Texture* param_2, uint param_3,
                                                         SamplerState* param_4, bool param_5) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                        "ImmediateRenderContext.cpp",
                        128, "\nNot supported");
    }

    // 0x100c17050, 480 bytes, placed by class name
    // ImmediateRenderContext::SetPSTextureSamplerPair(unsigned int, Texture const*, int, SamplerState const*, bool)
    void ImmediateRenderContext::SetPSTextureSamplerPair(uint param_1, Texture* param_2, int param_3,
                                                         SamplerState* param_4, bool param_5) {
        Texture* this_00;
        MapArea* this_01;
        long lVar3;
        undefined8 uVar4;
        uint uVar5;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      138, (char*)0);
        }
        if (m_insideBeginEnd == false) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      139, (char*)0);
        }
        if (param_2 == (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      140, (char*)0);
        }
        this_00 = param_2;
        if (param_2->GetNativeTextureId() == 0) {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/ImmediateRenderContext.cpp",
                                179, "Texture bound without native resources - binding skipped");
        } else {
            if ((!param_5) && (param_3 < 0)) {
                this_00 = (Texture*)logger::default_logger();
                logger::Logger::Log(this_00, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "context/ImmediateRenderContext.cpp",
                                    146,
                                    "Sampler uniform has probably been optimised out unexpectedly or of the incorrect "
                                    "type (i.e. multi-sampled texture)");
            }
            uVar5 = param_1 + 1;
            this_01 = (MapArea*)this_00->Instance();
            lVar3 = this_01->GetOrigin();
            if (*(uint*)(lVar3 + 60) <= uVar5) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/ImmediateRenderContext.cpp",
                                161,
                                "Attempting to bind to texture slot %u, which exceeds maximum textures slots of %u",
                                (ulong)uVar5);
            }
            if (uVar5 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("textureSlot > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "ImmediateRenderContext.cpp",
                          166, (char*)0);
            }
            BindTexture(this, param_2, uVar5);
            param_2->SetTemporarySamplerState(param_4);
            ValidateTextureSamplerPair((uint)this, (Texture*)param_4, (int)param_2);
            (field_136, param_3, uVar5)->SetShaderConstSampler();
        }
    }

    // 0x100c17390, 480 bytes, placed by class name
    // ImmediateRenderContext::SetCSTextureSamplerPair(unsigned int, Texture const*, int, SamplerState const*, bool)
    void ImmediateRenderContext::SetCSTextureSamplerPair(uint param_1, Texture* param_2, int param_3,
                                                         SamplerState* param_4, bool param_5) {
        Texture* this_00;
        MapArea* this_01;
        long lVar3;
        undefined8 uVar4;
        uint uVar5;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      190, (char*)0);
        }
        if (m_insideBeginEnd == false) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      191, (char*)0);
        }
        if (param_2 == (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      192, (char*)0);
        }
        this_00 = param_2;
        if (param_2->GetNativeTextureId() == 0) {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/ImmediateRenderContext.cpp",
                                231, "Texture bound without native resources - binding skipped");
        } else {
            if ((!param_5) && (param_3 < 0)) {
                this_00 = (Texture*)logger::default_logger();
                logger::Logger::Log(this_00, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "context/ImmediateRenderContext.cpp",
                                    198,
                                    "Sampler uniform has probably been optimised out unexpectedly or of the incorrect "
                                    "type (i.e. multi-sampled texture)");
            }
            uVar5 = param_1 + 1;
            this_01 = (MapArea*)this_00->Instance();
            lVar3 = this_01->GetOrigin();
            if (*(uint*)(lVar3 + 64) <= uVar5) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/ImmediateRenderContext.cpp",
                                213,
                                "Attempting to bind to texture slot %u, which exceeds maximum textures slots of %u",
                                (ulong)uVar5);
            }
            if (uVar5 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("textureSlot > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "ImmediateRenderContext.cpp",
                          218, (char*)0);
            }
            BindTexture(this, param_2, uVar5);
            param_2->SetTemporarySamplerState(param_4);
            ValidateTextureSamplerPair((uint)this, (Texture*)param_4, (int)param_2);
            (field_136, param_3, uVar5)->SetShaderConstSampler();
        }
    }

    // 0x100c17570, 96 bytes, placed by class name
    // ImmediateRenderContext::SetVSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)
    void ImmediateRenderContext::SetVSShaderConstBuffer(uint param_1, ShaderConstBuffer* param_2) {
        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      237, (char*)0);
        }
        SetShaderConstBuffer(this, param_1, param_2);
    }

    // 0x100c17760, 96 bytes, placed by class name
    // ImmediateRenderContext::SetPSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)
    void ImmediateRenderContext::SetPSShaderConstBuffer(uint param_1, ShaderConstBuffer* param_2) {
        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      243, (char*)0);
        }
        SetShaderConstBuffer(this, param_1, param_2);
    }

    // 0x100c177c0, 96 bytes, placed by class name
    // ImmediateRenderContext::SetCSShaderConstBuffer(unsigned int, ShaderConstBuffer const*)
    void ImmediateRenderContext::SetCSShaderConstBuffer(uint param_1, ShaderConstBuffer* param_2) {
        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      249, (char*)0);
        }
        SetShaderConstBuffer(this, param_1, param_2);
    }

    // 0x100c17820, 544 bytes, placed by class name
    // ImmediateRenderContext::BindDrawCallState(DrawCallState const&)
    void ImmediateRenderContext::BindDrawCallState(DrawCallState* param_1) {
        char cVar1;
        bool bVar2;
        byte bVar3;
        uint uVar4;
        InputAssemblerState* pIVar5;
        RenderPipelineState* pRVar6;
        AudioBuffer* this_00;
        long lVar7;
        Vector4T* pVVar8;
        ulong uVar9;
        ulong extraout_RDX;
        float fVar10;
        undefined1 local_f8[128];
        fixed_vector<math::Vector4T<float>, 1ul, true, eastl::allocator> local_78[72];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      256, (char*)0);
        }
        bVar2 = param_1->operator_cast_to_bool();
        if (bVar2) {
            pIVar5 = (InputAssemblerState*)param_1->GetInputAssemblerState();
        } else {
            pIVar5 = (InputAssemblerState*)0;
        }
        SetInputAssemblerState(this, pIVar5);
        bVar2 = param_1->operator_cast_to_bool();
        if (bVar2) {
            pRVar6 = (RenderPipelineState*)param_1->GetRenderPipelineState();
        } else {
            pRVar6 = (RenderPipelineState*)0;
        }
        SetRenderPipelineState(this, pRVar6);
        cVar1 = eastl::internal::function_detail<16, void()>::HaveManager((function_detail<16, void()>*)param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("drawCallState.HasOutputMergerState()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      271, (char*)0);
        }
        this_00 = (AudioBuffer*)param_1->GetOutputMergerState();
        SetOutputMergerState(this, (OutputMergerState*)this_00);
        uVar4 = this_00->SampleRate();
        if ((uVar4 & 1) == 0) {
            bVar2 = false;
        } else {
            local_78->GetClearColours();
            lVar7 = local_78->size();
            bVar2 = lVar7 != 0;
        }
        if ((uVar4 & 1) != 0) {
            eastl::fixed_vector<math::Vector4T<float>, 1ul, true, eastl::allocator>::~fixed_vector(local_78);
        }
        if (bVar2) {
            ((local_f8 + 64))->GetClearColours();
            pVVar8 = (Vector4T*)((local_f8 + 64))->HeapBeginPtr();
            local_f8->GetClearColours();
            local_f8->size();
            ClearRenderTargets(this, pVVar8, extraout_RDX);
            local_f8->~fixed_vector();
            ((local_f8 + 64))->~fixed_vector();
        }
        uVar9 = this_00->SampleRate();
        if (((uVar9 & 2) != 0) || (uVar9 = this_00->SampleRate(), (uVar9 & 4) != 0)) {
            fVar10 = (float)this_00->GetDepthClear();
            bVar3 = this_00->GetStencilClear();
            uVar4 = this_00->SampleRate();
            ClearDepthStencilTarget(this, fVar10, (uint)bVar3, uVar4);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c181f0, 128 bytes, placed by class name
    // ImmediateRenderContext::BindDrawCallState(DrawCallState&)
    void ImmediateRenderContext::BindDrawCallState(DrawCallState* param_1) {
        OutputMergerState* this_00;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      292, (char*)0);
        }
        BindDrawCallState(this, param_1);
        this_00 = (OutputMergerState*)param_1->GetOutputMergerState();
        OutputMergerState::SetClearColours((Vector4T*)this_00, 0);
        this_00->SetDepthStencilClear(1.0, '\0');
        this_00->SetClearFlags(0);
    }

    // 0x100c182c0, 96 bytes, placed by class name
    // ImmediateRenderContext::BindDispatchCallState(DispatchCallState const&)
    void ImmediateRenderContext::BindDispatchCallState(DispatchCallState* param_1) {
        ComputePipelineState* pCVar3;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      305, (char*)0);
        }
        if (param_1->operator_cast_to_bool()) {
            pCVar3 = (ComputePipelineState*)param_1->GetComputePipelineState();
        } else {
            pCVar3 = (ComputePipelineState*)0;
        }
        SetComputePipelineState(this, pCVar3);
    }

    // 0x100c18610, 160 bytes, placed by class name
    // ImmediateRenderContext::DrawPrimitives(DrawCallState&, PrimitiveType, int, int)
    void ImmediateRenderContext::DrawPrimitives(DrawCallState* param_1, undefined4 param_3, undefined4 param_4,
                                                undefined4 param_5) {
        char cVar1;

        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      316, (char*)0);
        }
        cVar1 = VerifyVertexCount(param_3, param_5);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("VerifyVertexCount(primType, vertexCount)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      317, (char*)0);
        }
        BindDrawCallState(this, param_1);
        DrawPrimitives(this, param_3, param_4, param_5);
    }

    // 0x100c18770, 128 bytes, placed by class name
    // ImmediateRenderContext::DrawMultiPrimitives(DrawCallState&, PrimitiveType, unsigned int, int const*, int const*)
    void ImmediateRenderContext::DrawMultiPrimitives(DrawCallState* param_1, undefined4 param_3, undefined4 param_4,
                                                     undefined8 param_5, undefined8 param_6) {
        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      324, (char*)0);
        }
        BindDrawCallState(this, param_1);
        DrawMultiPrimitives(this, param_3, param_4, param_5, param_6);
    }

    // 0x100c18910, 192 bytes, placed by class name
    // ImmediateRenderContext::DrawIndexedPrimitives(DrawCallState&, PrimitiveType, unsigned int, unsigned int)
    void ImmediateRenderContext::DrawIndexedPrimitives(DrawCallState* param_1, undefined4 param_3, undefined4 param_4,
                                                       undefined4 param_5) {
        undefined4 uVar2;
        InputAssemblerState* this_00;
        Component* this_01;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      331, (char*)0);
        }
        this_00 = (InputAssemblerState*)param_1->GetInputAssemblerState();
        if (this_00->GetIndexBuffer() == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("IAState.GetIndexBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      333, (char*)0);
        }
        BindDrawCallState(this, param_1);
        this_01 = (Component*)this_00->GetIndexBuffer();
        uVar2 = this_01->GetCurrentX();
        DrawIndexedPrimitives(this, param_3, param_4, param_5, uVar2);
    }

    // 0x100c18ab0, 208 bytes, placed by class name
    // ImmediateRenderContext::DrawMultiIndexedPrimitives(DrawCallState&, PrimitiveType, unsigned int, int const*, void const* const*)
    void ImmediateRenderContext::DrawMultiIndexedPrimitives(DrawCallState* param_1, undefined4 param_3,
                                                            undefined4 param_4, undefined8 param_5,
                                                            undefined8 param_6) {
        undefined4 uVar2;
        InputAssemblerState* this_00;
        Component* this_01;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      341, (char*)0);
        }
        this_00 = (InputAssemblerState*)param_1->GetInputAssemblerState();
        if (this_00->GetIndexBuffer() == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("IAState.GetIndexBuffer()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      343, (char*)0);
        }
        BindDrawCallState(this, param_1);
        this_01 = (Component*)this_00->GetIndexBuffer();
        uVar2 = this_01->GetCurrentX();
        DrawMultiIndexedPrimitives(this, param_3, param_4, param_5, param_6, uVar2);
    }

    // 0x100c18ca0, 112 bytes, placed by class name
    // ImmediateRenderContext::DispatchCompute(DispatchCallState&, unsigned int, unsigned int, unsigned int)
    void ImmediateRenderContext::DispatchCompute(DispatchCallState* param_1, uint param_2, uint param_3, uint param_4) {
        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "ImmediateRenderContext.cpp",
                      351, (char*)0);
        }
        BindDispatchCallState(this, param_1);
        DispatchCompute(this, param_2, param_3, param_4);
    }

    // 0x100c19020, 16 bytes, placed by class name
    // ImmediateRenderContext::BackendEnd()
    void ImmediateRenderContext::BackendEnd() {}

    // 0x100c19030, 64 bytes, placed by __FILE__ string
    // GetReadyStateString(RenderContextReadyState)
    char* GetReadyStateString(int param_1) {
        if (param_1 == 0) {
            return "STATE_READY";
        }
        if (param_1 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "ImmediateRenderContext.cpp",
                            416, (char*)0);
        }
        return "STATE_LOST";
    }

    // 0x100c19920, 16 bytes, complete-object constructor, placed by class name
    // ImmediateRenderContext::ImmediateRenderContext(): jumps straight to the base-object constructor

    // 0x100c19a10, 16 bytes, complete-object destructor, placed by class name
    // ImmediateRenderContext::~ImmediateRenderContext(): jumps straight to the base-object destructor

    // 0x100c29360: the linker folded this into ImmediateRenderContext::GetStateCache() const, which has identical code
    RenderTargets* ImmediateRenderContext::GetStateCache();

    // 0x100c51500, 32 bytes, placed by class name
    // ImmediateRenderContext::Init()::$_96::operator()(RenderDeviceCaps const&) const
    /* ImmediateRenderContext::Init()::$_96::TEMPNAMEPLACEHOLDERVALUE(RenderDeviceCaps
   const&) const */

    void ImmediateRenderContext::Init()::$_96::operator()(RenderDeviceCaps* param_1) {
        RenderContextStateCache::Init((RenderDeviceCaps*)(*(long*)this + 2208));
    }

} // namespace jag::render
