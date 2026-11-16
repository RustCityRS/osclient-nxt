// libs/hal/render/context/OGL/ImmediateRenderContext_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/context/ImmediateRenderContext.h"

namespace jag::render {
    class RenderContextStateCache {
    public:
        RenderContextStateCache();
        void Clear(const RenderTargets* renderTargets, bool arg2);
        void Init(const RenderDeviceCaps& renderDeviceCaps);
        void SetTextures();
        void RemoveTexture(unsigned int arg1);
        void ValidateBoundFBO() const;
        ~RenderContextStateCache();

    private:
        uint64_t field_0;
        uint32_t field_8;
        uint32_t field_12;
        uint64_t field_16;
        uint64_t field_24;
        uint8_t _unknown_32[32];
        uint32_t field_64;
        uint8_t _unknown_68[140];
        Desc field_208;
        uint8_t _unknown_252[8];
        Desc field_260;
        uint8_t _unknown_285[3];
        Desc field_288;
        uint8_t _unknown_300[56];
        unsigned int field_356;
        uint8_t _unknown_360[552];
        uint8_t field_912;
        uint8_t _unknown_913[19];
        uint32_t field_932;
        uint32_t field_936;
        uint8_t _unknown_940[4];
    };

    // 0x100c15960
    void ImmediateRenderContext::Init() {
        bool cVar1;
        ImmediateRenderContext* pIVar2;
        Logger* pLVar3;
        uint64_t uVar4;
        RenderDevice* pRVar5;
        MapArea* pMVar6;
        RenderDeviceCaps* renderDeviceCaps;
        bool arg2;
        int arg2_00;
        int arg2_01;
        eastl::string* str;
        eastl::string* str_00;
        function<void(RenderDeviceCaps const&)>* this_00;
        char* this_01;
        uint8_t auVar7[16];
        eastl::string local_d0;
        eastl::string local_b0;
        eastl::string local_90;
        uint8_t local_69;
        function<void(RenderDeviceCaps const&)> local_68[56];
        long local_30;

        MetaDataKey* arg1 = &m_gLCoreProfileVerMajor;
        if (m_gLCoreProfileVerMajor == 0) {
            QueryGLVersion((int*)arg1, &m_gLCoreProfileVerMinor);
            cVar1 = field_18;
        } else {
            cVar1 = field_18;
        }
        if (!cVar1) {
            local_69 = 0;
            pLVar3 = logger::default_logger();
            pLVar3->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL.cpp",
                        212, "\nInitialising OpenGL%s %d.%d Render Context:", &local_69, m_gLCoreProfileVerMajor,
                        m_gLCoreProfileVerMinor);
            pLVar3 = logger::default_logger();
            pLVar3->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL.cpp",
                        216, "----------------------------------------------");
            local_d0 = eastl::string();
            local_b0 = eastl::string();
            local_90 = eastl::string();
            GetGLString<eastl::string>(&local_d0, 7938);
            GetGLString<eastl::string>(&local_b0, 7936);
            GetGLString<eastl::string>(&local_90, 7937);
            pLVar3 = logger::default_logger();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar3->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL.cpp",
                        228, "\tGL_VERSION = %s", uVar4);
            pLVar3 = logger::default_logger();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar3->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL.cpp",
                        229, "\tGL_VENDOR = %s", uVar4);
            pLVar3 = logger::default_logger();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar3->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL.cpp",
                        230, "\tGL_RENDERER = %s", uVar4);
            PrintGLExtensions(*arg1);
            pIVar2 = this;
            InitBackBuffer();
            pRVar5 = (RenderDevice*)pIVar2->Instance();
            cVar1 = pRVar5->IsRenderContextInit();
            if (!cVar1) {
                pRVar5 = (RenderDevice*)pRVar5->Instance();
                std::function<void(RenderDeviceCaps const&)>::function<ImmediateRenderContext::Init()::__96, void>(
                    local_68, (__96*)this);
                pRVar5->OnRenderContextInit(*this, local_68);
                this_00 = local_68;
                this_00->~function();
            } else {
                pMVar6 = (MapArea*)pRVar5->Instance();
                this_00 = (function<void(RenderDeviceCaps const&)>*)&m_pStateCache;
                renderDeviceCaps = (RenderDeviceCaps*)pMVar6->GetOrigin();
                this_00->Init(*renderDeviceCaps);
            }
            pMVar6 = (MapArea*)this_00->Instance();
            auVar7 = pMVar6->GetOrigin();
            if (*(char*)(auVar7._0_8_ + 318) == '\0' && *(char*)(auVar7._0_8_ + 319) == '\0') {
                this_01 = "deviceCaps.m_GLFramebufferObject || deviceCaps.m_GLFramebufferObjectExt";
                LogFatalError("deviceCaps.m_GLFramebufferObject || deviceCaps.m_GLFramebufferObjectExt",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL.cpp",
                              253, 0, "Framebuffer object extension is missing!");
                this_01->~OptionStore();
            }
            17->SetKeyValue((MetaDataKey)&local_d0, auVar7._8_8_);
            18->SetKeyValue(*arg1, arg2_00);
            19->SetKeyValue(m_gLCoreProfileVerMinor, arg2_01);
            20->SetKeyValue((MetaDataKey)&local_b0, str);
            21->SetKeyValue((MetaDataKey)&local_90, str_00);
            22->SetKeyValue((unsigned int)field_19, arg2);
            CreateRenderingResources();
            pIVar2 = &local_d0;
            pIVar2->~basic_string();
        } else {
            pIVar2 = (ImmediateRenderContext*)logger::default_logger();
            pIVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL.cpp",
                        201, "Initialising secondary GL context");
        }
        EnableGLExtensions(pIVar2);
        ClearState(false);
    }

    // 0x100c15d20
    void ImmediateRenderContext::ClearState(bool arg1) {
        unsigned int uVar1;
        unsigned int uVar4;
        int iVar8;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1994, nullptr);
        }
        RenderTargets** this_00 = &m_pStateCache;
        auto pRVar5 = GetBackBuffer();
        Singleton<RenderDevice>* this_02 = (Singleton<RenderDevice>*)this_00;
        this_00->Clear(pRVar5, arg1);
        auto this_01 = this_02->Instance();
        long lVar6 = this_01->GetOrigin();
        long lVar7 = this_01->Instance();
        Desc* desc = (Desc*)((lVar7 + 720))->second();
        ImmediateRenderContext* pIVar9 = this;
        SetDepthStencilStateDirect(*desc);
        lVar7 = pIVar9->Instance();
        Desc* desc_00 = (Desc*)((lVar7 + 1200))->second();
        pIVar9 = this;
        SetRasteriserStateDirect(*desc_00);
        lVar7 = pIVar9->Instance();
        Desc* desc_01 = (Desc*)((lVar7 + 1524))->second();
        SetBlendStateDirect(*desc_01);
        _glLineWidth(1065353216);
        CheckGlErrorInternal("glLineWidth",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             2007);
        _glDisable(3089);
        CheckGlErrorInternal("glDisable",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             2008);
        _glDisable(3024);
        CheckGlErrorInternal("glDisable",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             2009);
        uint32_t uVar3 = GetBackBufferWidth();
        GetBackBufferHeight();
        _glViewport(0, 0, uVar3);
        CheckGlErrorInternal("glViewport",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             2012);
        _glPixelStorei(3333, 1);
        CheckGlErrorInternal("glPixelStorei",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             2015);
        _glPixelStorei(3317, 1);
        CheckGlErrorInternal("glPixelStorei",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             2016);
        if (arg1) {
            this_00->SetTextures();
            (*___glewActiveTexture)(33984);
            CheckGlErrorInternal("glActiveTexture",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2023);
            BindInvalidTexture();
            SetDefaultVAO();
            if ((*(char*)(lVar6 + 120) != '\0') && (0 < *(int*)(lVar6 + 124))) {
                iVar8 = 0;
                do {
                    (*___glewBindBufferBase)(35345, iVar8, 0);
                    CheckGlErrorInternal("glBindBufferBase",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         2033);
                    iVar8 = iVar8 + 1;
                } while (iVar8 < *(int*)(lVar6 + 124));
            }
            uVar1 = field_2216;
            pRVar5 = (RenderTargets*)field_784.operator->();
            uVar4 = pRVar5->GetNativeFBOId();
            if (uVar1 != uVar4) {
                LogAssert("m_StateCache.m_RenderTargetsFBO == m_backBuffer->GetNativeFBOId()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          2038, nullptr);
            }
            (*___glewBindFramebuffer)(36160, field_2216);
            CheckGlErrorInternal("glBindFramebuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2039);
            (*___glewBindBuffer)(34962, 0);
            CheckGlErrorInternal("glBindBuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2042);
            (*___glewBindBuffer)(34963, 0);
            CheckGlErrorInternal("glBindBuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2043);
            (*___glewUseProgram)(0);
            CheckGlErrorInternal("glUseProgram",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2046);
        }
    }

    // 0x100c16120
    void ImmediateRenderContext::SetVSyncMode(VSyncMode vSyncMode) {
        int arg2;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2052, nullptr);
        }
        auto pMVar2 = Instance();
        long lVar3 = pMVar2->GetOrigin();
        if (*(char*)(lVar3 + 185) != '\0') {
            arg2 = 0;
            if (vSyncMode + 1 < 5) {
                arg2 = *(int*)(&DAT_100d99830 + (long)(int)(vSyncMode + 1) * 4);
            }
            if (vSyncMode == 4294967295) {
                pMVar2 = (MapArea*)pMVar2->Instance();
                lVar3 = pMVar2->GetOrigin();
                if (*(char*)(lVar3 + 186) == '\0') {
                    arg2 = 1;
                }
            }
            BackendSetVSyncMode(vSyncMode, arg2);
            m_vSyncMode = vSyncMode;
        }
    }

    // 0x100c161e0
    void ImmediateRenderContext::ReleaseNativeResources() {
        RenderTargets* pRVar3;

        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      399, nullptr);
        }
        m_pStateCache.Clear(nullptr, true);
        field_1184.Destroy();
        field_1696.Destroy();
        uint8_t* this_00 = &field_784;
        if (this_00->operator_cast_to_bool()) {
            pRVar3 = (RenderTargets*)(*this_00).operator->();
            if (pRVar3->GetNativeFBOId() != 0) {
                pRVar3 = (RenderTargets*)(*this_00).operator->();
                pRVar3->EnableKeepAlive();
            }
            this_00->reset();
        }
        BackendDestroy();
    }

    // 0x100c16340
    void ImmediateRenderContext::DestroyRenderingResources() {
        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      379, nullptr);
        }
        if (field_18 != '\0') {
            LogAssert("!m_Desc.m_SecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      380, nullptr);
        }
        BufferedRenderTargets::DestroyStaticRenderingResources();
        uint8_t* this_00 = &field_144;
        if (this_00->operator_cast_to_bool()) {
            ((RenderTargetResolver*)(*this_00).operator->())->DestroyRenderingResources();
            this_00->reset(nullptr);
        }
        field_192.Destroy();
        Singleton<VAOManager>* this_03 = (Singleton<VAOManager>*)field_172;
        this_03->Destroy();
        this_03->Instance()->DestroyRenderingResources();
    }

    // 0x100c16460
    void ImmediateRenderContext::SetRenderTargets(const RenderTargets* renderTargets) {
        unsigned int uVar2;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      496, nullptr);
        }
        if ((m_pStateCache != nullptr) || (field_2216 != 0)) {
            uVar2 = m_pStateCache->GetNativeFBOId();
            if (uVar2 != field_2216) {
                LogAssert("(!m_StateCache.m_pRenderTargets && !m_StateCache.m_RenderTargetsFBO) || "
                          "m_StateCache.m_pRenderTargets->GetNativeFBOId() == m_StateCache.m_RenderTargetsFBO",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          498, nullptr);
            }
        }
        if (renderTargets == nullptr) {
            LogAssert("pRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      499, nullptr);
        }
        uVar2 = renderTargets->GetNativeFBOId();
        if (field_2216 != uVar2) {
            (*___glewBindFramebuffer)(36160, uVar2);
            CheckGlErrorInternal("glBindFramebuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 506);
            m_pStateCache = renderTargets;
            field_2216 = uVar2;
            renderTargets->SetNeedsInvalidated();
        }
        if (m_pStateCache != renderTargets) {
            LogAssert("pRenderTargets == m_StateCache.m_pRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      514, nullptr);
        }
    }

    // 0x100c16590
    void ImmediateRenderContext::ClearRenderTargets(const math::Vector4T<float>* vector4, unsigned long arg2) const {
        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      519, nullptr);
        }
        if ((m_insideBeginEnd == false) || (vector4 == nullptr)) {
            LogAssert("m_InsideBeginEnd && pClearColours",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      520, nullptr);
        }
        long lVar5 = (*((array<RenderTargetBlendDesc, 2ul>*)((long)&field_2496 + 4)))[(unsigned long)vector4];
        if (*(char*)(lVar5 + 28) == '\0') {
            LogAssert("m_StateCache.m_BlendStateDesc.m_RenderTargetBlend[0].m_RenderTargetWriteMask != 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      521, "Colour writes must be enabled for colour clears to work");
        }
        if (!(m_pStateCache->HasColourTargets())) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "OGL/ImmediateRenderContext_OGL.cpp",
                            532, nullptr);
        }
        auto puVar6 = vector4->SSOBeginPtr();
        uint32_t uVar1 = *puVar6;
        puVar6 = (uint32_t*)vector4->y();
        uint32_t uVar2 = *puVar6;
        puVar6 = (uint32_t*)vector4->second();
        uint32_t uVar3 = *puVar6;
        puVar6 = (uint32_t*)vector4->qw();
        _glClearColor(uVar1, uVar2, uVar3, *puVar6);
        CheckGlErrorInternal("glClearColor",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             527);
        _glClear(16384);
        CheckGlErrorInternal("glClear",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             528);
    }

    // 0x100c16770
    void ImmediateRenderContext::ClearDepthStencilTarget(float arg1, unsigned int arg2, unsigned int arg3) const {
        long lVar2;
        int arg3_00;
        RenderTargets* this_01;
        char* pcVar4;
        ReturnValue local_188;
        ReturnValue local_e0;

        bool cVar1 = IsContextThread();
        if (!cVar1) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      538, nullptr);
        }
        if (m_insideBeginEnd == false) {
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      539, nullptr);
        }
        unsigned int uVar3 = 0;
        if ((arg3 & 2) != 0) {
            this_01 = m_pStateCache;
            cVar1 = this_01->HasDepthTarget();
            if (!cVar1) {
                uVar3 = field_2216;
                if (m_pStateCache == nullptr) {
                    pcVar4 = "Backbuffer";
                } else {
                    local_e0 = m_pStateCache->GetInfoString();
                    pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                }
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                562, "Attempting to CLEAR_DEPTH on a render target with no depth buffer (FBO %i - %s)",
                                (unsigned long)uVar3, pcVar4);
            }
            if (field_2418 == '\0') {
                LogAssert("m_StateCache.m_DepthStencilStateDesc.m_DepthWriteEnable == true",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          548, "Depth writes must be enabled for depth clears to work");
            }
            lVar2 = ((MapArea*)this_01->Instance())->GetOrigin();
            if (*(char*)(lVar2 + 144) == '\0') {
                _glClearDepth((double)arg1);
                pcVar4 = "glClearDepth";
                arg3_00 = 556;
            } else {
                (*___glewClearDepthf)(arg1);
                pcVar4 = "glClearDepthf";
                arg3_00 = 552;
            }
            CheckGlErrorInternal(pcVar4,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 arg3_00);
            uVar3 = 256;
        }
        if ((arg3 & 4) != 0) {
            cVar1 = m_pStateCache->HasStencilTarget();
            if ((!cVar1) && (field_2432 == '\0')) {
                uVar3 = field_2216;
                if (m_pStateCache == nullptr) {
                    pcVar4 = "Backbuffer";
                } else {
                    local_188 = m_pStateCache->GetInfoString();
                    pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                }
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                574,
                                "Attempting to CLEAR_STENCIL on a render target with no stencil buffer (FBO %i - %s)",
                                (unsigned long)uVar3, pcVar4);
            }
            _glClearStencil(arg2);
            CheckGlErrorInternal("glClearStencil",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 569);
            uVar3 = uVar3 | 1024;
        }
        if (uVar3 != 0) {
            _glClear(uVar3);
            CheckGlErrorInternal("glClear",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 583);
        }
    }

    // 0x100c16be0
    void ImmediateRenderContext::SetBlendState(const BlendState* blendState) {
        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1114, nullptr);
        }
        if (blendState == nullptr) {
            LogAssert("pBlendState",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1115, nullptr);
        }
        auto desc = blendState->second();
        if (field_2496 != *desc) {
            SetBlendStateDirect(*desc);
        }
    }

    // 0x100c16d60
    void ImmediateRenderContext::Present() {
        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2311, nullptr);
        }
        if (!(IsLocked())) {
            LogAssert("IsLocked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2312, nullptr);
        }
        unsigned int uVar1 = field_2216;
        unsigned int uVar3 = ((RenderTargets*)field_784.operator->())->GetNativeFBOId();
        if (uVar1 != uVar3) {
            LogAssert("m_StateCache.m_RenderTargetsFBO == m_backBuffer->GetNativeFBOId()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2313, nullptr);
        }
        BackendPresent();
    }

    // 0x100c16e90
    void ImmediateRenderContext::SetVertexBuffers(unsigned int arg1, VertexBuffer const* const* arg2,
                                                  const unsigned int* arg3, const unsigned int* arg4) {
        Material* this_00;
        int iVar2;
        int* piVar3;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      658, nullptr);
        }
        if (m_insideBeginEnd == false) {
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      659, nullptr);
        }
        if (arg1 == 0) {
            LogAssert("numBuffers > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      660, nullptr);
        }
        CheckDefaultVAOBound();
        unsigned long arg1_00 = 0;
        do {
            this_00 = &arg2[arg1_00];
            iVar2 = 0;
            if (this_00 != nullptr) {
                iVar2 = this_00->GetNativeBuffer();
                if (iVar2 == 0) {
                    LogAssert("glVB",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL.cpp",
                              669, nullptr);
                }
                if ((this_00->GetNormalEmissiveMapID() & 8) != 0) {
                    LogAssert("(vertexBuffer.GetCreationFlags() & DISABLE_MARK_AS_DEAD) == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL.cpp",
                              672, nullptr);
                }
                (*___glewBindBuffer)(34962, iVar2);
                CheckGlErrorInternal("glBindBuffer",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     682);
            }
            piVar3 = &field_2240[arg1_00];
            *piVar3 = iVar2;
            arg1_00 = arg1_00 + 1;
            if (arg1 == arg1_00) {
                return;
            }
        } while (true);
    }

    // 0x100c17230
    void ImmediateRenderContext::BindTexture(const Texture& texture, unsigned int arg2) {
        uint32_t uVar3;
        uint32_t* puVar6;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      330, nullptr);
        }
        int* piVar4 = &field_2568[(unsigned long)arg2];
        int iVar1 = *piVar4;
        auto pTVar5 = texture.GetNativeTextureId();
        if (iVar1 != (int)pTVar5) {
            SetActiveTextureSlot(arg2);
            pTVar5 = texture.GetNativeTextureId();
            puVar6 = &field_2568[(unsigned long)arg2];
            *puVar6 = (int)pTVar5;
            uVar3 = texture.GetMaxLineWidth();
            puVar6 = &field_2736[(unsigned long)arg2];
            *puVar6 = uVar3;
            uVar3 = texture.GetMaxLineWidth();
            pTVar5 = texture.GetNativeTextureId();
            _glBindTexture(uVar3, (unsigned long)pTVar5 & 4294967295);
            CheckGlErrorInternal("glBindTexture",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 342);
        }
    }

    // 0x100c17320
    void ImmediateRenderContext::ValidateTextureSamplerPair(unsigned int arg1, const Texture* texture, int arg3) {
        uint32_t in_register_00000014;
        uint32_t in_register_0000003c;

        if (IsContextThread((ImmediateRenderContext*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1)) ==
            '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      857, nullptr);
        }
        long lVar2 =
            ((compressed_pair_imp<
                 eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)(((uint64_t)in_register_00000014 << 32) |
                                                                                (uint32_t)arg3))
                ->second();
        if (*(int*)(lVar2 + 60) == 35001) {
            LogAssert("pTexture->GetDesc().m_GPUAccess != Access::ACCESS_WRITE_ONLY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      859, "Cannot bind write-only texture for sampling");
        }
    }

    // 0x100c175d0
    void ImmediateRenderContext::SetShaderConstBuffer(unsigned int arg1, const ShaderConstBuffer* shaderConstBuffer) {
        void* pcVar1;
        int iVar3;
        int iVar4;
        uint32_t uVar5;
        long lVar6;
        int* piVar7;
        uint32_t* puVar8;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2106, nullptr);
        }
        if ((m_insideBeginEnd == false) || (shaderConstBuffer == nullptr)) {
            LogAssert("m_InsideBeginEnd && pShaderConstBuffer",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2107, nullptr);
        }
        if (shaderConstBuffer == nullptr) {
            puVar8 = &field_2280[(unsigned long)arg1];
            *puVar8 = 0;
            (*___glewBindBufferBase)(35345, arg1, 0);
            CheckGlErrorInternal("glBindBufferBase (GL_UNIFORM_BUFFER)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2125);
        } else {
            iVar3 = shaderConstBuffer->GetNativeBuffer();
            if (iVar3 == 0) {
                LogAssert("pShaderConstBuffer->GetNativeBuffer() > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          2111, nullptr);
            }
            lVar6 = ((MapArea*)shaderConstBuffer->Instance())->GetOrigin();
            if (*(char*)(lVar6 + 337) != '\0') {
                piVar7 = &field_2280[(unsigned long)arg1];
                iVar3 = *piVar7;
                iVar4 = shaderConstBuffer->GetNativeBuffer();
                if (iVar3 == iVar4) {
                    return;
                }
            }
            pcVar1 = ___glewBindBufferBase;
            uVar5 = shaderConstBuffer->GetNativeBuffer();
            (*pcVar1)(35345, arg1, uVar5);
            CheckGlErrorInternal("glBindBufferBase (GL_UNIFORM_BUFFER)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2117);
            uVar5 = shaderConstBuffer->GetNativeBuffer();
            puVar8 = &field_2280[(unsigned long)arg1];
            *puVar8 = uVar5;
        }
    }

    // 0x100c17a40
    void ImmediateRenderContext::SetInputAssemblerState(const InputAssemblerState* inputAssemblerState) {
        int iVar1;
        int iVar3;
        array<unsigned int, 8ul>* this_00;
        unsigned int* arg2;
        VertexDeclaration* vertexDeclaration;
        unsigned int* in_RCX;
        unsigned int arg2_00;
        unsigned int* in_R8;

        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1128, nullptr);
        }
        if (inputAssemblerState == nullptr) {
            SetDefaultVAO();
        } else {
            if (!(inputAssemblerState->ShouldUseVAO())) {
                if (!(inputAssemblerState->IsValidCachedState())) {
                    LogAssert("pIAState->IsValidCachedState()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL.cpp",
                              1154, nullptr);
                }
                SetDefaultVAO();
                SetIndexBuffer(inputAssemblerState->GetCurrentIndex(), arg2_00);
                inputAssemblerState->GetGLVertexBuffers();
                this_00 = (array<unsigned int, 8ul>*)inputAssemblerState->GetGLVertexBuffers();
                arg2 = (unsigned int*)this_00->data();
                SetVertexBuffers(8, arg2, in_RCX, in_R8);
                vertexDeclaration = (VertexDeclaration*)inputAssemblerState->end();
                SetVertexDeclaration(vertexDeclaration);
            } else {
                iVar1 = field_3140;
                iVar3 = inputAssemblerState->GetNativeVAO();
                if (iVar1 != iVar3) {
                    inputAssemblerState->BindVAO(*this);
                    if (!(inputAssemblerState->IsValidCachedState())) {
                        LogAssert("pIAState->IsValidCachedState()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "context/OGL/ImmediateRenderContext_OGL.cpp",
                                  1139, nullptr);
                    }
                }
            }
        }
    }

    // 0x100c17b80
    void ImmediateRenderContext::SetRenderPipelineState(const RenderPipelineState* renderPipelineState) {
        DepthStencilState* depthStencilState;
        RasteriserState* rasteriserState;
        ShaderProgram* shaderProgram;
        Logger* pLVar3;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* pvVar4;
        uint64_t uVar5;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* pvVar9;
        char* in_RCX;
        Texture* extraout_RDX;
        SamplerState* in_R8;
        uint8_t auVar13[16];

        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1169, nullptr);
        }
        RenderPipelineState local_488;
        if (renderPipelineState == nullptr) {
            renderPipelineState = (RenderPipelineState*)&local_488;
        }
        SetBlendState((BlendState*)renderPipelineState->HeapBeginPtr());
        depthStencilState = (DepthStencilState*)renderPipelineState->end();
        SetDepthStencilState(depthStencilState);
        rasteriserState = (RasteriserState*)renderPipelineState->data();
        SetRasteriserState(rasteriserState);
        shaderProgram = (ShaderProgram*)renderPipelineState->size();
        SetShaders(shaderProgram);
        auto pfVar2 = renderPipelineState->GetDefaultValue();
        if (pfVar2->has_overflowed()) {
            pLVar3 = logger::default_logger();
            pvVar4 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                         renderPipelineState->GetDefaultValue();
            uVar5 = pvVar4->size();
            in_RCX = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                     "ImmediateRenderContext_OGL.cpp";
            shaderProgram = nullptr;
            in_R8 = (SamplerState*)1184;
            pLVar3->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL.cpp",
                        1184, "RPState VSConstBuffers has overflowed (%zu), consider increasing size", uVar5);
        }
        auto pLVar6 = renderPipelineState->GetDefaultValue();
        auto puVar7 = pLVar6->HeapBeginPtr();
        auto puVar8 = pLVar6->end();
        for (; puVar7 != puVar8; puVar7 = puVar7 + 4) {
            shaderProgram = (ShaderProgram*)(unsigned long)*puVar7;
            SetVSShaderConstBuffer(*puVar7, *(ShaderConstBuffer**)(puVar7 + 2));
        }
        pfVar2 = (fixed_vector<graphics::GraphNode*, 8ul>*)renderPipelineState->GetContentType();
        if (pfVar2->has_overflowed()) {
            pLVar3 = logger::default_logger();
            pvVar4 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                         renderPipelineState->GetContentType();
            uVar5 = pvVar4->size();
            in_RCX = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                     "ImmediateRenderContext_OGL.cpp";
            shaderProgram = nullptr;
            in_R8 = (SamplerState*)1191;
            pLVar3->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL.cpp",
                        1191, "RPState VSStorageBuffers has overflowed (%zu), consider increasing size", uVar5);
        }
        pLVar6 = (Layout*)renderPipelineState->GetContentType();
        puVar7 = (unsigned int*)pLVar6->HeapBeginPtr();
        puVar8 = (unsigned int*)pLVar6->end();
        for (; puVar7 != puVar8; puVar7 = puVar7 + 4) {
            shaderProgram = (ShaderProgram*)(unsigned long)*puVar7;
            SetShaderStorageBuffer(*puVar7, *(ShaderStorageBuffer**)(puVar7 + 2));
        }
        pfVar2 = (fixed_vector<graphics::GraphNode*, 8ul>*)renderPipelineState->GetMapSquarePointLights();
        if (pfVar2->has_overflowed()) {
            pLVar3 = logger::default_logger();
            pvVar9 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                             eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)
                         renderPipelineState->GetMapSquarePointLights();
            uVar5 = pvVar9->size();
            in_RCX = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                     "ImmediateRenderContext_OGL.cpp";
            shaderProgram = nullptr;
            in_R8 = (SamplerState*)1198;
            pLVar3->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL.cpp",
                        1198, "RPState VSTextureSamplerPairs has overflowed (%zu), consider increasing size", uVar5);
        }
        auto this_00 = renderPipelineState->GetMapSquarePointLights();
        long lVar10 = this_00->HeapBeginPtr();
        auVar13 = this_00->end();
        Texture* texture = auVar13._8_8_;
        for (; lVar10 != auVar13._0_8_; lVar10 = lVar10 + 32) {
            if (*(long*)(lVar10 + 8) != 0) {
                LogAssert("!texSamplerPair.m_pSamplerState",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          1202, nullptr);
            }
            SetVSTextureSamplerPair(this_00, (unsigned int)shaderProgram, texture, (unsigned int)in_RCX, in_R8, false);
            texture = extraout_RDX;
        }
        pfVar2 = (fixed_vector<graphics::GraphNode*, 8ul>*)renderPipelineState->GetModel();
        if (pfVar2->has_overflowed()) {
            pLVar3 = logger::default_logger();
            pvVar4 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                         renderPipelineState->GetModel();
            uVar5 = pvVar4->size();
            pLVar3->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL.cpp",
                        1216, "RPState PSConstBuffers has overflowed (%zu), consider increasing size", uVar5);
        }
        pLVar6 = (Layout*)renderPipelineState->GetModel();
        puVar7 = (unsigned int*)pLVar6->HeapBeginPtr();
        puVar8 = (unsigned int*)pLVar6->end();
        for (; puVar7 != puVar8; puVar7 = puVar7 + 4) {
            SetPSShaderConstBuffer(*puVar7, *(ShaderConstBuffer**)(puVar7 + 2));
        }
        pfVar2 = (fixed_vector<graphics::GraphNode*, 8ul>*)renderPipelineState->GetPSStorageBuffers();
        if (pfVar2->has_overflowed()) {
            pLVar3 = logger::default_logger();
            pvVar4 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                         renderPipelineState->GetPSStorageBuffers();
            uVar5 = pvVar4->size();
            pLVar3->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL.cpp",
                        1223, "RPState PSStorageBuffers has overflowed (%zu), consider increasing size", uVar5);
        }
        pLVar6 = (Layout*)renderPipelineState->GetPSStorageBuffers();
        puVar7 = (unsigned int*)pLVar6->HeapBeginPtr();
        puVar8 = (unsigned int*)pLVar6->end();
        for (; puVar7 != puVar8; puVar7 = puVar7 + 4) {
            SetShaderStorageBuffer(*puVar7, *(ShaderStorageBuffer**)(puVar7 + 2));
        }
        pfVar2 = (fixed_vector<graphics::GraphNode*, 8ul>*)renderPipelineState->GetPSTextureSamplerPairs();
        if (pfVar2->has_overflowed()) {
            pLVar3 = logger::default_logger();
            pvVar9 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                             eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)
                         renderPipelineState->GetPSTextureSamplerPairs();
            uVar5 = pvVar9->size();
            pLVar3->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL.cpp",
                        1230, "RPState PSTextureSamplerPairs has overflowed (%zu), consider increasing size", uVar5);
        }
        pLVar6 = (Layout*)renderPipelineState->GetPSTextureSamplerPairs();
        auto puVar11 = pLVar6->HeapBeginPtr();
        auto puVar12 = pLVar6->end();
        for (; puVar11 != puVar12; puVar11 = puVar11 + 4) {
            SetPSTextureSamplerPair(*(unsigned int*)(puVar11 + 2), *puVar11, *(int*)((long)puVar11 + 20), puVar11[1],
                                    *(bool*)(puVar11 + 3));
        }
    }

    // 0x100c18070
    void ImmediateRenderContext::SetOutputMergerState(const OutputMergerState* outputMergerState) {
        int arg2;
        int arg3;
        int arg4;
        int arg5;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>* pvVar2;
        long lVar3;
        Layout* this_00;
        Viewport* viewport;
        unsigned long arg2_00;
        vector<math::Rect<unsigned int>, eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true>>* this_02;
        Minimap* this_03;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1293, nullptr);
        }
        if (outputMergerState != nullptr) {
            pvVar2 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)
                         outputMergerState->SSOBeginPtr();
            lVar3 = pvVar2->size();
            if (lVar3 != 0) {
                this_00 = (Layout*)outputMergerState->SSOBeginPtr();
                viewport = (Viewport*)this_00->HeapBeginPtr();
                pvVar2 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)
                             outputMergerState->SSOBeginPtr();
                arg2_00 = pvVar2->size();
                SetViewports(viewport, arg2_00);
            }
            lVar3 = ((vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                         outputMergerState->GetDevCredentialsOutputDirectory())
                        ->size();
            if (lVar3 == 0) {
                arg2 = 0;
                arg3 = 0;
                arg4 = 0;
                arg5 = 0;
            } else {
                this_02 = (vector<math::Rect<unsigned int>, eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true>>*)
                              outputMergerState->GetDevCredentialsOutputDirectory();
                this_03 = (Minimap*)this_02->front();
                arg2 = this_03->GetX();
                arg3 = this_03->GetZ();
                arg4 = this_03->GetPos();
                arg5 = this_03->GetLevel();
            }
            SetScissorRectangle(lVar3 != 0, arg2, arg3, arg4, arg5);
            SetRenderTargets(outputMergerState->GetRenderTargets());
        }
    }

    // 0x100c18320
    void ImmediateRenderContext::SetComputePipelineState(const ComputePipelineState* computePipelineState) {
        Logger* pLVar3;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* pvVar4;
        uint64_t uVar5;

        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1245, nullptr);
        }
        ComputePipelineState local_2b8;
        if (computePipelineState == nullptr) {
            computePipelineState = (ComputePipelineState*)&local_2b8;
        }
        SetShaders(computePipelineState->GetShaderProgram());
        auto pfVar2 = computePipelineState->SSOBeginPtr();
        if (pfVar2->has_overflowed()) {
            pLVar3 = logger::default_logger();
            pvVar4 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                         computePipelineState->SSOBeginPtr();
            uVar5 = pvVar4->size();
            pLVar3->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL.cpp",
                        1256, "CPState CSConstBuffers has overflowed (%zu), consider increasing size", uVar5);
        }
        auto pLVar6 = computePipelineState->SSOBeginPtr();
        auto puVar7 = pLVar6->HeapBeginPtr();
        auto puVar8 = pLVar6->end();
        for (; puVar7 != puVar8; puVar7 = puVar7 + 4) {
            SetCSShaderConstBuffer(*puVar7, *(ShaderConstBuffer**)(puVar7 + 2));
        }
        pfVar2 = (fixed_vector<graphics::GraphNode*, 8ul>*)computePipelineState->GetJointIDMap();
        if (pfVar2->has_overflowed()) {
            pLVar3 = logger::default_logger();
            uVar5 = ((vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                             eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)
                         computePipelineState->GetJointIDMap())
                        ->size();
            pLVar3->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL.cpp",
                        1263, "CPState CSTextureSamplerPairs has overflowed (%zu), consider increasing size", uVar5);
        }
        pLVar6 = (Layout*)computePipelineState->GetJointIDMap();
        auto puVar9 = pLVar6->HeapBeginPtr();
        auto puVar10 = pLVar6->end();
        for (; puVar9 != puVar10; puVar9 = puVar9 + 4) {
            if (puVar9[1] != 0) {
                LogAssert("!texSamplerPair.m_pSamplerState",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          1267, nullptr);
            }
            SetCSTextureSamplerPair(*(unsigned int*)(puVar9 + 2), *puVar9, *(int*)((long)puVar9 + 20), puVar9[1],
                                    *(bool*)(puVar9 + 3));
        }
        pfVar2 = (fixed_vector<graphics::GraphNode*, 8ul>*)computePipelineState->GetDynamicChildren();
        if (pfVar2->has_overflowed()) {
            pLVar3 = logger::default_logger();
            pvVar4 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                         computePipelineState->GetDynamicChildren();
            uVar5 = pvVar4->size();
            pLVar3->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL.cpp",
                        1278, "CPState CSTextureImages has overflowed (%zu), consider increasing size", uVar5);
        }
        pLVar6 = (Layout*)computePipelineState->GetDynamicChildren();
        puVar9 = (uint64_t*)pLVar6->HeapBeginPtr();
        puVar10 = (uint64_t*)pLVar6->end();
        for (; puVar9 != puVar10; puVar9 = puVar9 + 2) {
            SetCSTextureImage(*(unsigned int*)(puVar9 + 1), *puVar9, *(Access*)((long)puVar9 + 12));
        }
    }

    // 0x100c186b0
    void ImmediateRenderContext::DrawPrimitives(PrimitiveType primitiveType, int arg2, int arg3) {

        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1539, nullptr);
        }
        if (!(VerifyVertexCount(primitiveType, arg3))) {
            LogAssert("VerifyVertexCount(primType, vertexCount)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1540, nullptr);
        }
        ValidateState();
        _glDrawArrays(primitiveType, arg2, arg3);
        CheckGlErrorInternal("glDrawArrays",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             1544);
        field_44.AddDrawCall();
        field_44.AddPrimitives(primitiveType, arg3);
    }

    // 0x100c187f0
    void ImmediateRenderContext::DrawMultiPrimitives(PrimitiveType primitiveType, unsigned int arg2, const int* arg3,
                                                     const int* arg4) {
        unsigned long uVar2;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1552, nullptr);
        }
        ValidateState();
        if (arg2 != 0) {
            uVar2 = 0;
            do {
                if (arg4[uVar2] < 3) {
                    LogAssert("vertexCount[i] >= 3",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL.cpp",
                              1558, nullptr);
                }
                uVar2 = uVar2 + 1;
            } while (arg2 != uVar2);
        }
        (*___glewMultiDrawArrays)(primitiveType, arg3, arg4, arg2);
        CheckGlErrorInternal("glMultiDrawArrays",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             1568);
        field_44.AddDrawCall();
        if (arg2 != 0) {
            uVar2 = 0;
            do {
                field_44.AddPrimitives(primitiveType, arg4[uVar2]);
                uVar2 = uVar2 + 1;
            } while (arg2 != uVar2);
        }
    }

    // 0x100c189d0
    void ImmediateRenderContext::DrawIndexedPrimitives(PrimitiveType primitiveType, unsigned int arg2,
                                                       unsigned int arg3, IndexType indexType) {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1588, nullptr);
        }
        ValidateState();
        if (arg2 < 3) {
            LogAssert("indexCount >= 3",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1591, nullptr);
        }
        unsigned int uVar2 = GetIndexTypeSize(indexType);
        _glDrawElements(primitiveType, arg2, indexType, (unsigned long)uVar2 * (unsigned long)arg3);
        CheckGlErrorInternal("glDrawElements",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             1618);
        field_44.AddDrawCall();
        field_44.AddPrimitives(primitiveType, arg2);
    }

    // 0x100c18b80
    void ImmediateRenderContext::DrawMultiIndexedPrimitives(PrimitiveType primitiveType, unsigned int arg2,
                                                            const int* arg3, void const* const* arg4,
                                                            IndexType indexType) {
        unsigned long uVar2;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1626, nullptr);
        }
        ValidateState();
        if (arg2 != 0) {
            uVar2 = 0;
            do {
                if (arg3[uVar2] < 3) {
                    LogAssert("indexCount[i] >= 3",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL.cpp",
                              1632, nullptr);
                }
                uVar2 = uVar2 + 1;
            } while (arg2 != uVar2);
        }
        (*___glewMultiDrawElements)(primitiveType, arg3, indexType, arg4, arg2);
        CheckGlErrorInternal("glMultiDrawElements",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             1655);
        field_44.AddDrawCall();
        if (arg2 != 0) {
            uVar2 = 0;
            do {
                field_44.AddPrimitives(primitiveType, arg3[uVar2]);
                uVar2 = uVar2 + 1;
            } while (arg2 != uVar2);
        }
    }

    // 0x100c18d10
    void ImmediateRenderContext::DispatchCompute(unsigned int arg1, unsigned int arg2, unsigned int arg3) {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1675, nullptr);
        }
        long lVar2 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar2 + 189) == '\0') {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1696,
                      "ImmediateRenderContext::DispatchCompute: Compute shaders are unsupported on this device. "
                      "Skipping dispatch.");
        } else {
            if ((arg1 == 0) || (*(unsigned int*)(lVar2 + 192) < arg1)) {
                LogAssert("groupCountX > 0u && groupCountX <= (uint) caps.m_ComputeMaxWorkGroupCountX",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          1681, nullptr);
            }
            if ((arg2 == 0) || (*(unsigned int*)(lVar2 + 196) < arg2)) {
                LogAssert("groupCountY > 0u && groupCountY <= (uint) caps.m_ComputeMaxWorkGroupCountY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          1682, nullptr);
            }
            if ((arg3 == 0) || (*(unsigned int*)(lVar2 + 200) < arg3)) {
                LogAssert("groupCountZ > 0u && groupCountZ <= (uint) caps.m_ComputeMaxWorkGroupCountZ",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          1683, nullptr);
            }
            ValidateState();
            (*___glewDispatchCompute)(arg1, arg2, arg3);
            CheckGlErrorInternal("glDispatchCompute",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 1692);
        }
        field_44.AddDispatchCall();
    }

    // 0x100c18e70
    void ImmediateRenderContext::BackendBegin() {}

    // 0x100c18f00
    void ImmediateRenderContext::SetDepthStencilState(const DepthStencilState* depthStencilState) {
        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1086, nullptr);
        }
        if (depthStencilState == nullptr) {
            LogAssert("pDepthStencilState",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1087, nullptr);
        }
        auto desc = depthStencilState->second();
        if (field_2416 != *desc) {
            SetDepthStencilStateDirect(*desc);
        }
    }

    // 0x100c18f90
    void ImmediateRenderContext::SetRasteriserState(const RasteriserState* rasteriserState) {
        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1100, nullptr);
        }
        if (rasteriserState == nullptr) {
            LogAssert("pRasterState",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1101, nullptr);
        }
        auto desc = rasteriserState->second();
        if (field_2468 != *desc) {
            SetRasteriserStateDirect(*desc);
        }
    }

    // 0x100c1e910
    void ImmediateRenderContext::SetViewports(const Viewport* viewport, unsigned long arg2) {
        int iVar1;
        int* piVar3;
        unsigned long arg1;
        unsigned long uVar4;
        bool bVar5;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      421, nullptr);
        }
        if ((((m_insideBeginEnd == false) || (viewport == nullptr)) || (arg2 == 0)) || (2 < arg2)) {
            LogAssert(
                "m_InsideBeginEnd && pViewports && (numViewports > 0) && (numViewports <= MAX_RENDER_TARGET_TEXTURES)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                "ImmediateRenderContext_OGL.cpp",
                422, nullptr);
        }
        if (arg2 != 0) {
            arg1 = 0;
            uVar4 = 1;
            do {
                iVar1 = (&viewport->field_0)[arg1 * 6];
                piVar3 = &field_3072[arg1];
                if (((iVar1 != *piVar3) || ((&viewport->field_4)[arg1 * 6] != piVar3[1])) ||
                    (((&viewport->field_8)[arg1 * 6] != piVar3[2] || ((&viewport->field_12)[arg1 * 6] != piVar3[3])))) {
                    _glViewport(iVar1, (&viewport->field_4)[arg1 * 6], (&viewport->field_8)[arg1 * 6],
                                (&viewport->field_12)[arg1 * 6]);
                    CheckGlErrorInternal("glViewport",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         435);
                    *piVar3 = (&viewport->field_0)[arg1 * 6];
                    piVar3[1] = (&viewport->field_4)[arg1 * 6];
                    piVar3[2] = (&viewport->field_8)[arg1 * 6];
                    piVar3[3] = (&viewport->field_12)[arg1 * 6];
                }
                if (((&viewport->field_16)[arg1 * 6] != (float)piVar3[4]) ||
                    ((&viewport->field_20)[arg1 * 6] != (float)piVar3[5])) {
                    _glDepthRange((double)(&viewport->field_16)[arg1 * 6], (double)(&viewport->field_20)[arg1 * 6]);
                    CheckGlErrorInternal("glDepthRange",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         448);
                    piVar3[4] = (int)(&viewport->field_16)[arg1 * 6];
                    piVar3[5] = (int)(&viewport->field_20)[arg1 * 6];
                }
                bVar5 = uVar4 < arg2;
                arg1 = uVar4;
                uVar4 = (unsigned long)((int)uVar4 + 1);
            } while (bVar5);
        }
    }

    // 0x100c1eda0
    void ImmediateRenderContext::SetScissorRectangle(bool arg1, int arg2, int arg3, int arg4, int arg5) {
        int iVar2;
        char* str1;
        GridRect local_48;

        bool cVar1 = IsContextThread();
        if (!cVar1) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      461, nullptr);
        }
        if (m_insideBeginEnd == false) {
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      462, nullptr);
        }
        if ((arg1) && ((arg4 < 0 || (arg5 < 0)))) {
            LogAssert("!enabled || (width >= 0 && height >= 0)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      463, nullptr);
        }
        if (field_3120 != arg1) {
            if (arg1) {
                _glEnable();
                str1 = "glEnable";
                iVar2 = 471;
            } else {
                _glDisable(3089);
                str1 = "glDisable";
                iVar2 = 475;
            }
            CheckGlErrorInternal(str1,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 iVar2);
            field_3120 = arg1;
        }
        if (arg1) {
            local_48 = oldscape::dash3d::GridRect(arg2, arg3, arg4, arg5);
            cVar1 = field_3124 != local_48;
            iVar2 = arg3;
            if (cVar1) {
                _glScissor(arg2, arg3, arg4, arg5);
                CheckGlErrorInternal("glScissor",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     487);
                new (&field_3124) oldscape::dash3d::GridRect(arg2, iVar2, arg4, arg5);
            }
        }
    }

    // 0x100c1fc40
    void ImmediateRenderContext::SetShaders(const ShaderProgram* shaderProgram) {
        int iVar2;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      589, nullptr);
        }
        if (shaderProgram == nullptr) {
            (*___glewUseProgram)(0);
            CheckGlErrorInternal("glUseProgram",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 626);
            field_2220 = 0;
        } else {
            iVar2 = shaderProgram->GetNativeShaderProgram();
            if (iVar2 == 0) {
                LogAssert("pShaderProgram->GetNativeShaderProgram()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          593, nullptr);
            }
            shaderProgram->SetLastUsedTimeSeconds((float)FrameTime::GetSecondsSinceProgramStart());
            iVar2 = shaderProgram->GetNativeShaderProgram();
            if (field_2220 != iVar2) {
                (*___glewUseProgram)(iVar2);
                CheckGlErrorInternal("glUseProgram",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     619);
                field_2220 = iVar2;
            }
        }
        field_136 = shaderProgram;
    }

    // 0x100c20480
    void ImmediateRenderContext::SetIndexBuffer(const IndexBuffer* indexBuffer, unsigned int arg2) {
        unsigned int arg1;
        unsigned int extraout_EDX;
        unsigned int extraout_EDX_00;
        unsigned int arg2_00;
        uint32_t in_register_00000034;

        Material* material = (Material*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        if (IsContextThread((ImmediateRenderContext*)indexBuffer) == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      754, nullptr);
        }
        if ((char)indexBuffer->field_0 == '\0') {
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      755, nullptr);
        }
        CheckDefaultVAOBound((ImmediateRenderContext*)indexBuffer);
        if (material == nullptr) {
            arg1 = 0;
            arg2_00 = extraout_EDX;
        } else {
            if (material->GetNativeBuffer() == 0) {
                LogAssert("pIndexBuffer->GetNativeBuffer()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          761, nullptr);
            }
            if ((material->GetNormalEmissiveMapID() & 8) != 0) {
                LogAssert("(pIndexBuffer->GetCreationFlags() & DISABLE_MARK_AS_DEAD) == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          764, nullptr);
            }
            arg1 = material->GetNativeBuffer();
            arg2_00 = extraout_EDX_00;
        }
        SetIndexBuffer((ImmediateRenderContext*)indexBuffer, arg1, arg2_00);
    }

    // 0x100c20780
    void ImmediateRenderContext::SetVertexDeclaration(const VertexDeclaration* vertexDeclaration) {
        bool bVar1;
        void* pcVar2;
        int iVar4;
        int iVar6;
        unsigned int uVar7;
        uint32_t uVar8;
        unsigned int* puVar9;
        int* piVar10;
        uint32_t* puVar11;
        uint8_t* this_02;
        unsigned long uVar13;
        int iVar15;
        unsigned long uVar16;
        GLVertexElementFormat local_80;
        int local_5c;
        uint32_t local_58;
        unsigned int local_54;
        uint32_t local_50;
        void* local_48;
        unsigned int local_3c;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      774, nullptr);
        }
        if ((m_insideBeginEnd == false) || ((Mixer*)vertexDeclaration == nullptr)) {
            LogAssert("m_InsideBeginEnd && pVertexDecl",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      775, nullptr);
        }
        SetDefaultVAO();
        Array<VertexElementDesc>* this_01 =
            (Array<VertexElementDesc>*)((compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator,
                                                             0>*)(Mixer*)vertexDeclaration)
                ->second();
        Array<unsigned int>* local_70 =
            (Array<unsigned int>*)((Option<float>*)(Mixer*)vertexDeclaration)->GetDefaultValue();
        int local_4c = vertexDeclaration->GetStreamCountLastMix();
        if (local_4c == 1) {
            puVar9 = (unsigned int*)(*this_01)[0];
            piVar10 = &field_2240[(unsigned long)*puVar9];
            pcVar2 = ___glewBindBuffer;
            if (*piVar10 == 0) {
                LogAssert("m_StateCache.m_GLVertexBuffers[vertexElemDescs[0].m_Stream] > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          795, nullptr);
            }
            puVar9 = (unsigned int*)(*this_01)[0];
            puVar11 = &field_2240[(unsigned long)*puVar9];
            (*pcVar2)(34962, *puVar11);
            CheckGlErrorInternal("glBindBuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 796);
        }
        Array<VertexElementDesc>* this_05 = this_01;
        ImmediateRenderContext* local_68 = this;
        long lVar12 = this_01->end();
        if (lVar12 != 0) {
            this_02 = &local_68->field_2240;
            local_3c = 4294967295;
            uVar13 = 0;
            uVar16 = 1;
            do {
                iVar15 = (int)uVar16 - 1;
                puVar9 = (unsigned int*)(*this_01)[uVar13];
                if (puVar9[6] == 15) {
                    (*___glewDisableVertexAttribArray)(iVar15);
                    CheckGlErrorInternal("glDisableVertexAttribArray",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         832);
                } else {
                    local_5c = iVar15;
                    if ((1 < local_4c) && (*puVar9 != local_3c)) {
                        piVar10 = (int*)(*this_02)[(unsigned long)*puVar9];
                        if (*piVar10 == 0) {
                            LogAssert("m_StateCache.m_GLVertexBuffers[elemDesc.m_Stream] > 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                      812, nullptr);
                        }
                        local_48 = ___glewBindBuffer;
                        puVar11 = (uint32_t*)(*this_02)[(unsigned long)*puVar9];
                        (*local_48)(34962, *puVar11);
                        CheckGlErrorInternal("glBindBuffer",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                             813);
                        local_3c = *puVar9;
                    }
                    local_80 = GLVertexElementFormat(puVar9[4]);
                    iVar6 = ((VertexDeclaration*)(Mixer*)vertexDeclaration)->GetVertexStride(*puVar9);
                    piVar10 = (int*)(*local_70)[uVar13];
                    iVar15 = *piVar10;
                    uVar7 = GetShaderInputElementComponentSize(puVar9[4]);
                    iVar4 = local_5c;
                    if ((unsigned int)(iVar6 + iVar15) % uVar7 != 0) {
                        LogAssert("(pVertexDecl->GetVertexStride(elemDesc.m_Stream) + vertexElemByteOffsets[iElem]) % "
                                  "GetShaderInputElementComponentSize(elemDesc.m_Format) == 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "context/OGL/ImmediateRenderContext_OGL.cpp",
                                  819, "Attribute %s not aligned to multiple of its size", *(uint64_t*)(puVar9 + 2));
                    }
                    (*___glewEnableVertexAttribArray)(local_5c);
                    CheckGlErrorInternal("glEnableVertexAttribArray",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         821);
                    local_48 = ___glewVertexAttribPointer;
                    local_58 = local_80.field_0._0_4_;
                    local_50 = local_80.field_0._4_4_;
                    local_54 = (unsigned int)(uint8_t)puVar9[5];
                    uVar8 = ((VertexDeclaration*)(Mixer*)vertexDeclaration)->GetVertexStride(*puVar9);
                    puVar11 = (uint32_t*)(*local_70)[uVar13];
                    (*local_48)(iVar4, local_50, local_58, local_54, uVar8, *puVar11);
                    CheckGlErrorInternal("glVertexAttribPointer (%i)",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         828);
                }
                this_05 = this_01;
                uVar13 = this_01->end();
                bVar1 = uVar16 < uVar13;
                uVar13 = uVar16;
                uVar16 = (unsigned long)((int)uVar16 + 1);
            } while (bVar1);
        }
        lVar12 = ((MapArea*)this_05->Instance())->GetOrigin();
        uVar7 = *(unsigned int*)(lVar12 + 100);
        uVar13 = this_01->end();
        if (uVar13 < uVar7) {
            do {
                (*___glewDisableVertexAttribArray)(uVar13 & 4294967295);
                CheckGlErrorInternal("glDisableVertexAttribArray",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     842);
                uVar13 = uVar13 + 1;
            } while (uVar7 != uVar13);
        }
        ImmediateRenderContext* pIVar3 = local_68;
        *(uint64_t*)&local_68->field_2224 = 0;
        uint64_t uVar14 =
            ((vector<oldscape::dash3d::EntityHighlight*,
                     BucketAllocatorEASTL>*)((compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator,
                                                                  0>*)(Mixer*)vertexDeclaration)
                 ->second())
                ->end();
        *(uint64_t*)&pIVar3->field_2232 = uVar14;
    }

    // 0x100c22e30
    void ImmediateRenderContext::MemoryBarrier(unsigned int arg1) {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1704, nullptr);
        }
        (*___glewMemoryBarrier)(arg1);
    }

    // 0x100c23510
    void ImmediateRenderContext::CopyColourTargetData(const Texture* texture, unsigned int arg2, unsigned int arg3,
                                                      unsigned int arg4, unsigned int arg5, unsigned int arg6,
                                                      unsigned int arg7, unsigned int arg8, unsigned int arg9,
                                                      CubeFace cubeFace) {
        void* pcVar1;
        int iVar4;
        int iVar5;
        uint32_t uVar6;
        uint32_t uVar7;
        uint64_t* puVar11;
        mutex* mutex;
        Texture* pTVar13;
        Texture* pTVar14;
        unique_lock<std::mutex>* this_01;
        uint64_t in_stack_ffffffffffffff48;
        unique_lock<std::mutex> local_58;

        uint32_t uVar15 = (uint32_t)((unsigned long)in_stack_ffffffffffffff48 >> 32);
        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1721, nullptr);
        }
        if (texture == nullptr) {
            LogAssert("pDstTargetTexture != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1722, nullptr);
        }
        if (m_pStateCache == nullptr) {
            LogAssert("m_StateCache.m_pRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1723, nullptr);
        }
        if (texture == nullptr) {
            return;
        }
        if (!(texture->IsCreated())) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1773, "%s called on non-existent texture", "CopyColourTargetData");
            return;
        }
        auto puVar8 = texture->second();
        if (*puVar8 < arg4 + arg8) {
            LogAssert("(dstX + width) <= pDstTargetTexture->GetDesc().m_Width",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1729, nullptr);
        }
        long lVar9 = texture->second();
        if (*(unsigned int*)(lVar9 + 4) < arg9 + arg5) {
            LogAssert("(dstY + height) <= pDstTargetTexture->GetDesc().m_Height",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1730, nullptr);
        }
        auto pTVar10 = m_pStateCache->GetColourTargetTextures();
        if (!(pTVar10->empty())) {
            pTVar10 = (Texture*)m_pStateCache->GetColourTargetTextures();
            puVar11 = (uint64_t*)(*pTVar10)[0];
            pTVar14 = (Texture*)*puVar11;
        } else {
            pTVar14 = nullptr;
        }
        if (!(pTVar10->UseGLWriteMutex())) {
            this_01 = &local_58;
            new (this_01) std::unique_lock<std::mutex>();
        } else {
            mutex = (mutex*)texture->GetRenderTargets();
            this_01 = &local_58;
            new (this_01) std::unique_lock<std::mutex>(*mutex);
        }
        auto pMVar12 = this_01->Instance();
        lVar9 = pMVar12->GetOrigin();
        if ((*(char*)(lVar9 + 333) != '\0') && (pTVar14 != nullptr)) {
            iVar4 = pTVar14->GetMaxLineWidth();
            iVar5 = texture->GetMaxLineWidth();
            if (iVar4 == iVar5) {
                pTVar10 = pTVar14->GetNativeTextureId();
                pTVar13 = texture->GetNativeTextureId();
                if ((int)pTVar10 != (int)pTVar13) {
                    lVar9 = texture->second();
                    if ((*(int*)(lVar9 + 16) != 1) || (lVar9 = pTVar14->second(), *(int*)(lVar9 + 16) != 1)) {
                        LogAssert("pDstTargetTexture->GetDesc().m_SampleCount == 1 && "
                                  "pSrcColourTargetTex->GetDesc().m_SampleCount == 1",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "context/OGL/ImmediateRenderContext_OGL.cpp",
                                  1745, nullptr);
                    }
                    lVar9 = pTVar14->second();
                    iVar4 = *(int*)(lVar9 + 16);
                    lVar9 = texture->second();
                    pcVar1 = ___glewCopyImageSubData;
                    if (iVar4 != *(int*)(lVar9 + 16)) {
                        LogAssert("pSrcColourTargetTex->GetDesc().m_SampleCount == "
                                  "pDstTargetTexture->GetDesc().m_SampleCount",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "context/OGL/ImmediateRenderContext_OGL.cpp",
                                  1746, nullptr);
                    }
                    pTVar10 = pTVar14->GetNativeTextureId();
                    uVar6 = pTVar14->GetMaxLineWidth();
                    pTVar14 = texture->GetNativeTextureId();
                    uVar7 = texture->GetMaxLineWidth();
                    (*pcVar1)((unsigned long)pTVar10 & 4294967295, uVar6, 0, arg6, arg7, 0,
                              (((uint64_t)uVar15 << 32) | (uint32_t)((int)pTVar14)), uVar7, 0, (int)(unsigned long)arg4,
                              (int)(unsigned long)arg5, 0, arg8, arg9, 1);
                    CheckGlErrorInternal("glCopyImageSubData",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         1752);
                    goto LAB_100c237eb;
                }
            }
        }
        lVar9 = texture->second();
        Singleton<RenderDevice>* this_02 = (Singleton<RenderDevice>*)(unsigned long)*(Format*)(lVar9 + 12);
        iVar4 = GetFormatDepthBits(*(Format*)(lVar9 + 12));
        if (iVar4 != 0) {
            pMVar12 = (MapArea*)this_02->Instance();
            lVar9 = pMVar12->GetOrigin();
            if (*(char*)(lVar9 + 152) == '\0') {
                LogAssert("GetFormatDepthBits(pDstTargetTexture->GetDesc().m_Format) == 0 || "
                          "RenderDevice::Instance().GetDeviceCaps().m_DepthTextureLoad",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          1757, nullptr);
            }
        }
        ActiveTextureSaveRestore local_68(*this);
        BindTexture(*texture, 0);
        if (cubeFace == 4294967295) {
            cubeFace = texture->GetMaxLineWidth();
        }
        _glCopyTexSubImage2D(cubeFace, arg3, (unsigned long)arg4, (unsigned long)arg5 & 4294967295, arg6, arg7,
                             (((uint64_t)uVar15 << 32) | (uint32_t)arg8), arg9);
        CheckGlErrorInternal("glCopyTexSubImage2D",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             1768);
    LAB_100c237eb:
    }

    // 0x100c23c00
    void ImmediateRenderContext::ResolveColourTargetData(const RenderTargets* renderTargets, unsigned int arg2,
                                                         const math::Rect<unsigned int>& rect1,
                                                         const math::Rect<unsigned int>& rect2) {
        uint32_t uVar2;
        uint32_t uVar3;
        ImmediateRenderContext* immediateRenderContext;
        uint32_t uVar9;
        uint32_t uVar10;
        vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar15;
        uint64_t* puVar16;
        uint32_t* puVar18;
        uint64_t uVar19;
        RenderTargetResolver* this_02;
        char* str1;
        bool bVar24;
        uint8_t local_d8[24];
        uint8_t local_90[16];
        uint8_t local_80[24];
        Texture* local_50;
        Texture* local_40;

        bool cVar6 = IsContextThread();
        if (!cVar6) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1780, nullptr);
        }
        if ((arg2 & 1024) != 0) {
            LogAssert("(resolveMask & STENCIL_BUFFER_BIT) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1781, "Resolving stencil buffers is not currently supported");
        }
        unsigned long local_98 = (unsigned long)(arg2 & 16640);
        if ((arg2 & 16640) == 0) {
            LogAssert("(resolveMask & (COLOR_BUFFER_BIT | DEPTH_BUFFER_BIT)) != 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1782, nullptr);
        }
        if (m_pStateCache == nullptr) {
            LogAssert("m_StateCache.m_pRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1783, nullptr);
        }
        if (renderTargets == nullptr) {
            LogAssert("pDstRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1784, nullptr);
        }
        auto pvVar11 = m_pStateCache->GetColourTargetTextures();
        cVar6 = pvVar11->empty();
        Texture* local_48 = (Texture*)rect2;
        if (!cVar6) {
            pvVar15 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          m_pStateCache->GetColourTargetTextures();
            puVar16 = (uint64_t*)(*pvVar15)[0];
            local_40 = (Texture*)*puVar16;
        } else {
            local_40 = nullptr;
        }
        auto pTVar12 = m_pStateCache->GetDepthStencilTargetTexture();
        if (((arg2 & 16384) != 0) && ((local_40 == nullptr || (cVar6 = local_40->IsCreated(), !cVar6)))) {
            LogAssert(
                "(resolveMask & COLOR_BUFFER_BIT) == 0 || (pSrcColourTargetTex && pSrcColourTargetTex->IsCreated())",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                "ImmediateRenderContext_OGL.cpp",
                1792, nullptr);
        }
        ImmediateRenderContext* local_60 = this;
        if (((arg2 & 256) != 0) && ((pTVar12 == nullptr || (cVar6 = pTVar12->IsCreated(), !cVar6)))) {
            LogAssert("(resolveMask & DEPTH_BUFFER_BIT) == 0 || (pSrcDepthStencilTargetTex && "
                      "pSrcDepthStencilTargetTex->IsCreated())",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1793, nullptr);
        }
        new (local_90) math::Rect(rect1);
        Texture* pTVar21 = local_40;
        if ((local_40 == nullptr) && (pTVar21 = pTVar12, pTVar12 == nullptr)) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "OGL/ImmediateRenderContext_OGL.cpp",
                            1814, nullptr);
        }
        auto piVar13 = pTVar21->second();
        int iVar8 = *piVar13;
        long lVar14 = pTVar21->second();
        int local_34 = *(int*)(lVar14 + 4);
        lVar14 = pTVar21->second();
        local_50 = (Texture*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)(*(uint32_t*)(lVar14 + 16)));
        cVar6 = local_90->Valid();
        if (!cVar6) {
            new (local_d8) oldscape::dash3d::GridRect(0, 0, iVar8, local_34);
            *local_90 = *local_d8;
        }
        int local_a4 = iVar8;
        pvVar11 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                      renderTargets->GetColourTargetTextures();
        cVar6 = pvVar11->empty();
        if (!cVar6) {
            pvVar15 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          renderTargets->GetColourTargetTextures();
            puVar16 = (uint64_t*)(*pvVar15)[0];
            pTVar21 = (Texture*)*puVar16;
        } else {
            pTVar21 = nullptr;
        }
        auto local_58 = renderTargets->GetDepthStencilTargetTexture();
        if (((arg2 & 16384) != 0) && ((pTVar21 == nullptr || (cVar6 = pTVar21->IsCreated(), !cVar6)))) {
            LogAssert(
                "(resolveMask & COLOR_BUFFER_BIT) == 0 || (pDstColourTargetTex && pDstColourTargetTex->IsCreated())",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                "ImmediateRenderContext_OGL.cpp",
                1828, nullptr);
        }
        if (((arg2 & 256) != 0) && ((local_58 == nullptr || (cVar6 = local_58->IsCreated(), !cVar6)))) {
            LogAssert("(resolveMask & DEPTH_BUFFER_BIT) == 0 || (pDstDepthStencilTargetTex && "
                      "pDstDepthStencilTargetTex->IsCreated())",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1829, nullptr);
        }
        new (local_80) math::Rect(*local_48);
        new (local_d8) Viewport(0, 0, 0, 0, 0.0, 1.0);
        Texture* pTVar17 = pTVar21;
        Texture* local_a0 = pTVar12;
        if ((pTVar21 == nullptr) && (pTVar17 = local_58, local_58 == nullptr)) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "OGL/ImmediateRenderContext_OGL.cpp",
                            1855, nullptr);
        }
        local_48 = (Texture*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)arg2);
        piVar13 = (int*)pTVar17->second();
        iVar8 = *piVar13;
        lVar14 = pTVar17->second();
        int iVar1 = *(int*)(lVar14 + 4);
        lVar14 = pTVar17->second();
        local_80._16_4_ = *(uint32_t*)(lVar14 + 16);
        new ((local_d8 + 24)) oldscape::dash3d::GridRect(0, 0, iVar8, iVar1);
        cVar6 = local_80->Valid();
        if (!cVar6) {
            *local_80 = (*((local_d8 + 24)));
        }
        RenderTargets* pRVar22 = renderTargets;
        if ((renderTargets != nullptr) && (cVar6 = *local_80 == (*((local_d8 + 24))), cVar6)) {
            pRVar22->Invalidate();
        }
        piVar13 = (int*)local_80->SSOBeginPtr();
        iVar8 = *piVar13;
        piVar13 = (int*)local_80->y();
        iVar1 = *piVar13;
        piVar13 = (int*)local_80->second();
        int arg3 = *piVar13;
        piVar13 = (int*)local_80->qw();
        new (local_d8) Viewport(iVar8, iVar1, arg3, *piVar13, 0.0, 1.0);
        pTVar12 = local_48;
        unsigned int arg5 = (unsigned int)local_48;
        unsigned long uVar4 = (unsigned long)local_48 & 268435456;
        local_48 = (Texture*)(((uint64_t)local_48._1_7_ << 8) | (uint8_t)(1 < (unsigned int)local_50));
        piVar13 = (int*)local_80->second();
        iVar8 = *piVar13;
        Viewport* this_03 = (Viewport*)local_90;
        piVar13 = (int*)this_03->second();
        bool bVar23 = true;
        if (iVar8 == *piVar13) {
            piVar13 = (int*)local_80->qw();
            iVar8 = *piVar13;
            this_03 = (Viewport*)local_90;
            piVar13 = (int*)this_03->qw();
            bVar23 = iVar8 != *piVar13;
        }
        pTVar17 = local_a0;
        if ((((unsigned long)pTVar12 & 1073741824) != 0) ||
            ((((bVar23 && (((unsigned long)pTVar12 & 256) != 0)) || ((int)local_60->m_gLCoreProfileVerMajor < 3)) ||
              ((int)local_60->m_gLCoreProfileVerMinor < 0)))) {
            bVar24 = false;
        } else {
            if ((uVar4 == 0 & (uint8_t)local_48) != 0) {
                this_03 = (Viewport*)(local_d8 + 24);
                new (this_03) Viewport(0, 0, local_a4, local_34, 0.0, 1.0);
                cVar6 = *this_03 == *local_d8;
                bVar24 = true;
                if (cVar6)
                    goto LAB_100c2414f;
            }
            bVar24 = local_80._16_4_ == 1 && (unsigned int)local_50 == 1;
        }
    LAB_100c2414f:
        lVar14 = ((MapArea*)this_03->Instance())->GetOrigin();
        bool bVar20 = bVar23;
        if (*(char*)(lVar14 + 334) == '\0') {
            bVar20 = (bool)(((unsigned int)local_50 != 1 || *(char*)(lVar14 + 333) == '\0') | bVar23);
        }
        uint8_t bVar7 = ((unsigned long)pTVar12 & 16384) == 0 | bVar20;
        bVar20 = (bool)((bVar20 ^ 1U) & bVar7);
        if ((bVar7 == 0) && (local_40 != nullptr)) {
            iVar8 = local_40->GetMaxLineWidth();
            bVar20 = false;
            if ((iVar8 != 36161) && (pTVar21 != nullptr)) {
                iVar8 = pTVar21->GetMaxLineWidth();
                bVar20 = iVar8 != 36161;
                goto LAB_100c241c1;
            }
        } else {
        LAB_100c241c1:
            if ((bVar20 != false) && (((unsigned long)pTVar12 & 256) != 0)) {
                bVar20 = local_58 != nullptr && pTVar17 != nullptr;
            }
        }
        Texture* this_00 = local_40;
        void* pcVar5 = ___glewBindFramebuffer;
        if (bVar20 == false) {
        LAB_100c243cd:
            if (!bVar24) {
                if (((local_40 != nullptr) && (iVar8 = local_40->GetMaxLineWidth(), iVar8 == 36161)) ||
                    ((pTVar17 != nullptr && (iVar8 = pTVar17->GetMaxLineWidth(), iVar8 == 36161)))) {
                    LogAssert("(!pSrcColourTargetTex || pSrcColourTargetTex->GetType() != TEXTURE_TYPE_RENDERBUFFER) "
                              "&& (!pSrcDepthStencilTargetTex || pSrcDepthStencilTargetTex->GetType() != "
                              "TEXTURE_TYPE_RENDERBUFFER)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL.cpp",
                              1944, nullptr);
                }
                immediateRenderContext = local_60;
                this_02 = (RenderTargetResolver*)local_60->field_144.operator->();
                pRVar22 = renderTargets;
                this_02->ResolveViaQuad(*immediateRenderContext, local_40, pTVar17, renderTargets, arg5, *local_90,
                                        *local_80);
                goto joined_r0x000100c245e3;
            }
            uVar9 = renderTargets->GetNativeFBOId();
            (*pcVar5)(36009, uVar9);
            CheckGlErrorInternal("glBindFramebuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 1930);
            local_40 = ___glewBlitFramebuffer;
            puVar18 = (uint32_t*)local_90->SSOBeginPtr();
            local_58 = (Texture*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)(*puVar18));
            puVar18 = (uint32_t*)local_90->y();
            local_50 = (Texture*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)(*puVar18));
            uVar9 = local_90->Right();
            local_48 = (Texture*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar9);
            local_34 = local_90->MaxZ();
            puVar18 = (uint32_t*)local_80->SSOBeginPtr();
            uVar9 = *puVar18;
            puVar18 = (uint32_t*)local_80->y();
            uVar2 = *puVar18;
            uVar10 = local_80->Right();
            uVar19 = local_80->MaxZ();
            pRVar22 = renderTargets;
            (*(void (*)(...))local_40)((unsigned long)local_58 & 4294967295, (unsigned long)local_50 & 4294967295,
                                       (unsigned long)local_48 & 4294967295, local_34, uVar9, uVar2, uVar10, uVar19,
                                       local_98, bVar23 | 9728);
            CheckGlErrorInternal("glBlitFramebuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 1935);
            (*___glewBindFramebuffer)(36009, local_60->field_2216);
            str1 = "glBindFramebuffer";
            iVar8 = 1938;
        } else {
            if ((unsigned int)local_50 != local_80._16_4_)
                goto LAB_100c243cd;
            if (((unsigned long)pTVar12 & 16384) != 0) {
                local_50 = ___glewCopyImageSubData;
                pTVar17 = local_40->GetNativeTextureId();
                local_48 = (Texture*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)((int)pTVar17));
                uVar9 = this_00->GetMaxLineWidth();
                local_60 = (ImmediateRenderContext*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar9);
                piVar13 = (int*)local_90->SSOBeginPtr();
                local_34 = *piVar13;
                puVar18 = (uint32_t*)local_90->y();
                local_98 = (((uint64_t)local_98._4_4_ << 32) | (uint32_t)(*puVar18));
                local_40 = pTVar21->GetNativeTextureId();
                local_80._16_8_ = pTVar21->GetMaxLineWidth();
                puVar18 = (uint32_t*)local_80->SSOBeginPtr();
                uVar9 = *puVar18;
                puVar18 = (uint32_t*)local_80->y();
                uVar2 = *puVar18;
                puVar18 = (uint32_t*)local_90->second();
                uVar10 = *puVar18;
                puVar18 = (uint32_t*)local_90->qw();
                pTVar17 = local_a0;
                (*(void (*)(...))local_50)((unsigned long)local_48 & 4294967295, (unsigned long)local_60 & 4294967295,
                                           0, local_34, local_98 & 4294967295, 0, local_40, local_80._16_8_, 0, uVar9,
                                           uVar2, 0, uVar10, *puVar18, 1);
                CheckGlErrorInternal("glCopyImageSubData",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     1912);
            }
            pRVar22 = renderTargets;
            if (((unsigned long)pTVar12 & 256) == 0)
                goto joined_r0x000100c245e3;
            local_40 = ___glewCopyImageSubData;
            pTVar12 = pTVar17->GetNativeTextureId();
            local_50 = (Texture*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)((int)pTVar12));
            uVar9 = pTVar17->GetMaxLineWidth();
            local_60 = (ImmediateRenderContext*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar9);
            piVar13 = (int*)local_90->SSOBeginPtr();
            local_34 = *piVar13;
            puVar18 = (uint32_t*)local_90->y();
            pTVar12 = local_58;
            uVar9 = *puVar18;
            local_48 = local_58->GetNativeTextureId();
            local_58 = (Texture*)pTVar12->GetMaxLineWidth();
            puVar18 = (uint32_t*)local_80->SSOBeginPtr();
            uVar2 = *puVar18;
            puVar18 = (uint32_t*)local_80->y();
            uVar10 = *puVar18;
            puVar18 = (uint32_t*)local_90->second();
            uVar3 = *puVar18;
            puVar18 = (uint32_t*)local_90->qw();
            pRVar22 = renderTargets;
            (*(void (*)(...))local_40)((unsigned long)local_50 & 4294967295, (unsigned long)local_60 & 4294967295, 0,
                                       local_34, uVar9, 0, local_48, local_58, 0, uVar2, uVar10, 0, uVar3, *puVar18, 1);
            str1 = "glCopyImageSubData";
            iVar8 = 1920;
        }
        CheckGlErrorInternal(str1,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             iVar8);
    joined_r0x000100c245e3:
        if (pRVar22 != nullptr) {
            pRVar22->SetNeedsInvalidated();
        }
    }

    // 0x100c246c0
    void ImmediateRenderContext::ReadColourTargetData(void* arg1, Format format, unsigned int arg3, unsigned int arg4,
                                                      unsigned int arg5, unsigned int arg6, unsigned int arg7,
                                                      unsigned int arg8) {
        uint8_t local_40[4];
        int local_3c;
        int local_38;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1962, nullptr);
        }
        new (local_40) GLFormat(format);
        if (((5 < local_3c - 6403U) || ((57U >> (local_3c - 6403U & 31) & 1) == 0)) && (local_3c != 32993)) {
            LogAssert("glDstPixelFormat.m_Format == GL_ALPHA || glDstPixelFormat.m_Format == GL_RGB || "
                      "glDstPixelFormat.m_Format == GL_RGBA || glDstPixelFormat.m_Format == GL_BGRA || "
                      "glDstPixelFormat.m_Format == GL_RED",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1970, nullptr);
        }
        if (local_38 < 32819) {
            if ((local_38 == 5121) || (local_38 == 5126))
                goto LAB_100c247a4;
        } else if ((local_38 - 32819U < 2) || ((local_38 == 33635 || (local_38 == 33639)))) {
        LAB_100c247a4:
            _glReadPixels(arg5, arg6, arg7, arg8, local_3c, local_38, arg1);
            CheckGlErrorInternal("glReadPixels",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 1989);
            return;
        }
        LogAssert("glDstPixelFormat.m_Type == GL_UNSIGNED_BYTE || glDstPixelFormat.m_Type == GL_UNSIGNED_SHORT_5_6_5 "
                  "|| glDstPixelFormat.m_Type == GL_UNSIGNED_SHORT_4_4_4_4 || glDstPixelFormat.m_Type == "
                  "GL_UNSIGNED_SHORT_5_5_5_1 || glDstPixelFormat.m_Type == GL_UNSIGNED_INT_8_8_8_8_REV || "
                  "glDstPixelFormat.m_Type == GL_FLOAT",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                  "ImmediateRenderContext_OGL.cpp",
                  1977, nullptr);
    }

    // 0x100c249d0
    void ImmediateRenderContext::FlushTextureCache() {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2191, nullptr);
        }
        long lVar2 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar2 + 327) == '\0') {
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_GLTextureBarrier",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2194, nullptr);
        }
        (*___glewTextureBarrierNV)();
        CheckGlErrorInternal("glTextureBarrierNV",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             2197);
    }

    // 0x100c25750
    void ImmediateRenderContext::LockContext() {

        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2325, nullptr);
        }
        field_160 = field_160 + 1;
        if (!(this_thread::IsMainThread())) {
            if (!(((RenderDevice*)Instance())->IsRenderThread())) {
                _glFlush();
            }
        }
        BackendLockContext();
    }

    // 0x100c25830
    void ImmediateRenderContext::UnlockContext() {
        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2338, nullptr);
        }
        int iVar1 = field_160;
        field_160 = iVar1 - 1;
        if (iVar1 < 1) {
            LogAssert("m_lockCounter >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2340, nullptr);
        }
        BackendUnlockContext();
        if (!(this_thread::IsMainThread())) {
            if (!(((RenderDevice*)Instance())->IsRenderThread())) {
                _glFlush();
            }
        }
    }

    // 0x100c25f90
    bool ImmediateRenderContext::IsInvalidTextureBound() const {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2362, nullptr);
        }
        int* piVar3 = &field_2568[0];
        int iVar1 = *piVar3;
        auto pTVar4 = field_192.GetNativeTextureId();
        return iVar1 == (int)pTVar4;
    }

    // 0x100c25ff0
    void ImmediateRenderContext::SetActiveTextureSlot(unsigned int arg1) {
        void* pcVar1;
        uint32_t uVar3;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      316, nullptr);
        }
        if (field_2564 != arg1) {
            field_2564 = arg1;
            pcVar1 = ___glewActiveTexture;
            uVar3 = GetTextureSlotGLID(arg1);
            (*pcVar1)(uVar3);
            CheckGlErrorInternal("glActiveTexture",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 324);
        }
    }

    // 0x100c26120
    void ImmediateRenderContext::BindInvalidTexture() {
        BindTexture(field_192, 0);
    }

    // 0x100c26170
    int GetTextureSlotGLID(unsigned int arg1) {
        uint32_t in_register_0000003c;

        long lVar1 = ((MapArea*)((Singleton<RenderDevice>*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1))
                          ->Instance())
                         ->GetOrigin();
        if (*(int*)(lVar1 + 76) <= (int)arg1) {
            LogAssert(
                "static_cast<int>(textureUnit) < RenderDevice::Instance().GetDeviceCaps().m_MaxCombinedTextureUnits",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                "ImmediateRenderContext_OGL.cpp",
                72, nullptr);
        }
        return arg1 + 33984;
    }

    // 0x100c261c0
    RenderContextStateCache::RenderContextStateCache()
        : field_24(0), field_72(24), field_360(32), field_528(32), field_696(32), field_932(0) {
        Clear(nullptr, true);
    }

    // 0x100c26330
    void RenderContextStateCache::Clear(const RenderTargets* renderTargets, bool arg2) {
        uint32_t uVar2;
        unsigned int* puVar4;
        unsigned int* puVar5;
        uint64_t in_register_00000011;
        uint8_t local_50[32];

        local_50._24_8_ = renderTargets;
        field_208->SetToDefault();
        field_260->SetToDefault();
        field_288->SetToDefault();
        new (local_50) Viewport(0, 0, 0, 0, 0.0, 1.0);
        field_864.fill(*local_50);
        field_912 = 0;
        uint8_t* this_00 = &field_916;
        auto puVar3 = this_00->SSOBeginPtr();
        *puVar3 = 0;
        puVar3 = (uint32_t*)this_00->y();
        *puVar3 = 0;
        puVar3 = (uint32_t*)this_00->second();
        *puVar3 = 0;
        puVar3 = (uint32_t*)this_00->qw();
        uint64_t uVar1 = local_50._24_8_;
        *puVar3 = 0;
        field_936 = 0;
        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            uVar2 = 0;
            if ((RenderTargets*)local_50._24_8_ != nullptr) {
                uVar2 = local_50._24_8_->GetNativeFBOId();
            }
            field_8 = uVar2;
            field_0 = uVar1;
            field_12 = 0;
            field_16 = 0;
            local_50._0_4_ = 0;
            field_32.fill(*local_50);
            field_64 = 0;
            puVar4 = (unsigned int*)field_72.HeapBeginPtr();
            puVar5 = (unsigned int*)field_72.end();
            eastl::fill<unsigned int>(puVar4, puVar5, 0);
            field_356 = 0;
            puVar4 = (unsigned int*)field_360.HeapBeginPtr();
            puVar5 = (unsigned int*)field_360.end();
            eastl::fill<unsigned int>(puVar4, puVar5, 0);
            puVar4 = (unsigned int*)field_528.HeapBeginPtr();
            puVar5 = (unsigned int*)field_528.end();
            eastl::fill<unsigned int>(puVar4, puVar5, 3553);
            puVar4 = (unsigned int*)field_696.HeapBeginPtr();
            puVar5 = (unsigned int*)field_696.end();
            eastl::fill<unsigned int>(puVar4, puVar5, 0);
            field_932 = 0;
        }
    }

    // 0x100c26550
    void RenderContextStateCache::Init(const RenderDeviceCaps& renderDeviceCaps) {
        field_360.resize((long)renderDeviceCaps.field_76);
        field_528.resize((long)renderDeviceCaps.field_76);
        field_696.resize((long)renderDeviceCaps.field_72);
    }

    // 0x100c266d0
    void RenderContextStateCache::SetTextures() {
        void* pcVar1;
        uint32_t uVar3;
        unsigned int uVar4;
        uint32_t* puVar5;
        unsigned long arg1;

        uint8_t* this_00 = &field_528;
        if (this_00->size() != 0) {
            arg1 = 0;
            do {
                pcVar1 = ___glewActiveTexture;
                uVar3 = GetTextureSlotGLID((unsigned int)arg1);
                (*pcVar1)(uVar3);
                CheckGlErrorInternal("glActiveTexture",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     137);
                puVar5 = (uint32_t*)(*this_00)[arg1];
                uVar3 = *puVar5;
                puVar5 = &field_360[arg1];
                _glBindTexture(uVar3, *puVar5);
                CheckGlErrorInternal("glBindTexture",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     138);
                arg1 = arg1 + 1;
                uVar4 = this_00->size();
            } while (arg1 < uVar4);
        }
        pcVar1 = ___glewActiveTexture;
        uVar3 = GetTextureSlotGLID(field_356);
        (*pcVar1)(uVar3);
        CheckGlErrorInternal("glActiveTexture",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             142);
    }

    // 0x100c26820
    void RenderContextStateCache::RemoveTexture(unsigned int arg1) {
        void* pcVar1;
        uint32_t uVar3;
        unsigned int* puVar4;
        uint32_t* puVar5;
        unsigned long arg1_00;

        if (arg1 == 0) {
            LogAssert("glTextureId",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      147, nullptr);
        }
        uint8_t* this_00 = &field_528;
        unsigned int uVar2 = this_00->size();
        if (1 < uVar2) {
            arg1_00 = 1;
            do {
                puVar4 = &field_360[arg1_00];
                pcVar1 = ___glewActiveTexture;
                if (*puVar4 == arg1) {
                    uVar3 = GetTextureSlotGLID((unsigned int)arg1_00);
                    (*pcVar1)(uVar3);
                    CheckGlErrorInternal("glActiveTexture",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         156);
                    field_356 = (unsigned int)arg1_00;
                    _glBindTexture(3553, 0);
                    CheckGlErrorInternal("glBindTexture",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         159);
                    puVar5 = &field_360[arg1_00];
                    *puVar5 = 0;
                    puVar5 = (uint32_t*)(*this_00)[arg1_00];
                    *puVar5 = 3553;
                    return;
                }
                arg1_00 = arg1_00 + 1;
                uVar2 = this_00->size();
            } while (arg1_00 < uVar2);
        }
    }

    // 0x100c26950
    ImmediateRenderContext::ImmediateRenderContext() : m_insideBeginEnd(false), field_44(60), field_136(nullptr) {
        field_144.unique_ptr<true, void>();
        m_threadID = 0;
        field_160 = 0;
        m_gLCoreProfileVerMajor = 0;
        m_gLCoreProfileVerMinor = 0;
        new (field_172) VertexArrayObject();
        new (&field_192) Texture2D("Texture2D");
        new (&field_704) eastl::vector_map<unsigned int, Texture const*>();
        new (&field_744) eastl::vector_map<unsigned int, unsigned int>();
        new (&field_784) eastl::optional<RenderTargets>();
        new (&field_1184) TextureRenderBuffer("Renderbuffer");
        new (&field_1696) TextureRenderBuffer("Renderbuffer");
        new (&m_pStateCache) RenderContextStateCache();
        field_3152 = 0;
        field_3160 = nullptr;
    }

    // 0x100c26bc0
    ImmediateRenderContext::~ImmediateRenderContext() {
        int iVar2 = (&field_40)->operator_cast_to_RenderContextReadyState();
        uint8_t* puVar1 = PTR__objc_release_100ee9e60;
        if (iVar2 != 1) {
            LogAssert("m_ReadyState == RenderContextReadyState::STATE_LOST",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      188, nullptr);
        }
        (*(void (*)(...))PTR__objc_release_100ee9e60)(field_3160);
        (*(void (*)(...))puVar1)(field_3152);
        m_pStateCache.~RenderContextStateCache();
        field_1696.~TextureRenderBuffer();
        field_1184.~TextureRenderBuffer();
        field_784.~optional();
        field_744.~vector_map();
        field_704.~vector_map();
        field_192.~Texture2D();
        field_172->~VertexArrayObject();
        field_144.~unique_ptr();
        field_8.~InterfaceMouseEvent();
    }

    // 0x100c26da0
    void ImmediateRenderContext::InitBackBuffer() {
        void* pcVar1;
        uint32_t uVar3;
        RenderTargets* pRVar4;

        if (field_18 != '\0') {
            LogAssert("!m_Desc.m_SecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2368, nullptr);
        }
        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2369, nullptr);
        }
        if (field_12 == '\0') {
            LogAssert("m_Desc.m_ColourBufferBits",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2371, nullptr);
        }
        uint8_t* this_00 = &field_784;
        if (!(this_00->operator_cast_to_bool())) {
            this_00->emplace<>();
            pRVar4 = (RenderTargets*)(*this_00).operator->();
            pRVar4->Create("BackBuffer", 18);
            pcVar1 = ___glewBindFramebuffer;
            pRVar4 = (RenderTargets*)(*this_00).operator->();
            uVar3 = pRVar4->GetNativeFBOId();
            (*pcVar1)(36009, uVar3);
            CheckGlErrorInternal("glBindFramebuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2379);
            field_1184.BindBackColourRenderBuffer();
            pRVar4 = (RenderTargets*)(*this_00).operator->();
            pRVar4->BindColourTargetTexture(&field_1184, 0, 0, 34069);
            if (field_13 == '\0') {
                if (field_14 != '\0') {
                    LogAssert("!m_Desc.m_StencilBufferBits",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL.cpp",
                              2392, nullptr);
                }
                pRVar4 = (RenderTargets*)(*this_00).operator->();
                pRVar4->UnbindDepthStencilTargetTexture();
            } else {
                field_1696.BindBackDepthRenderBuffer();
                pRVar4 = (RenderTargets*)(*this_00).operator->();
                pRVar4->BindDepthStencilTargetTexture(&field_1696);
            }
        } else {
            if (!(field_1184.IsCreated())) {
                LogAssert("m_backBufferColour.IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          2399, nullptr);
            }
            if (!(field_1696.IsCreated())) {
                LogAssert("m_backBufferDepth.IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          2400, nullptr);
            }
            pRVar4 = (RenderTargets*)(*this_00).operator->();
            if (!(pRVar4->IsCreated())) {
                LogAssert("m_backBuffer->IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          2401, nullptr);
            }
        }
    }

    // 0x100c27010
    void ImmediateRenderContext::CreateRenderingResources() {
        uint8_t* puVar4;
        ImmediateRenderContext* in_RSI;
        uint8_t local_80[88];

        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      281, nullptr);
        }
        if (field_18 != '\0') {
            LogAssert("!m_Desc.m_SecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      282, nullptr);
        }
        long lVar3 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar3 + 321) != '\0') {
            puVar4 = field_172;
            if (puVar4->IsValid()) {
                LogAssert("!m_defaultVAO.IsValid()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          287, nullptr);
            }
            in_RSI = this;
            puVar4->Create(*this);
            if (puVar4->GetX() != 1) {
                LogAssert("m_defaultVAO.GetNativeVAO() == 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          289, "Default VAO should == 1, not all VAOs have been destroyed yet");
            }
        }
        new (local_80) Texture::Desc();
        local_80._12_4_ = 16;
        local_80._0_8_ = (ReturnValue)4294967297;
        uint8_t local_26 = 255;
        unsigned char* arg1 = &255 [(unsigned long)in_RSI];
        new ((local_80 + 64)) ResourceDataT(arg1, 0, 0, false);
        field_192.Create(*local_80, (local_80 + 64), 3);
        field_200.DisableMarkAsDead(3);
        BindInvalidTexture();
        ((local_80 + 64))->~ResourceDataT();
        puVar4 = &field_144;
        if (!(puVar4->operator_cast_to_bool())) {
            *local_80 = std::make_unique<RenderTargetResolver>();
            *puVar4 = *local_80;
        }
        RenderTargetResolver* this_01 = (RenderTargetResolver*)(*puVar4).operator->();
        this_01->CreateRenderingResources();
        this_01->CreateStaticRenderingResources();
    }

    // 0x100c271e0
    void ImmediateRenderContext::EnableGLExtensions() {
        uint32_t uVar2;

        long lVar3 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar3 + 320) != '\0') {
            _glEnable(34895);
            CheckGlErrorInternal("glEnable",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2269);
        }
        void* pcVar1 = ___glewMaxShaderCompilerThreadsKHR;
        if ((*(char*)(lVar3 + 335) != '\0') && (*(char*)(lVar3 + 230) == '\0')) {
            uVar2 = threading::GetMaxHardwareThreads();
            (*pcVar1)(uVar2);
            CheckGlErrorInternal("glMaxShaderCompilerThreadsKHR",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2274);
        }
        if (*(char*)(lVar3 + 316) != '\0') {
            (*___glewDebugMessageCallback)(DebugLogCallback, 0);
            CheckGlErrorInternal("glDebugMessageCallback",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2298);
            (*___glewDebugMessageControl)(4352, 4352, 4352, 0, 0, 1);
            CheckGlErrorInternal("glDebugMessageControl",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2299);
            _glEnable(37600);
            CheckGlErrorInternal("glEnable",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2300);
            _glEnable(33346);
            CheckGlErrorInternal("glEnable",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2301);
        }
    }

    // 0x100c273f0
    void ImmediateRenderContext::SetGLShaderImage(unsigned int arg1, const Texture& texture, Access access) {
        void* pcVar2;
        long lVar6;
        uint32_t* puVar7;
        GLFormat local_48;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      348, nullptr);
        }
        local_48._16_4_ = arg1;
        int* piVar4 = &field_2904[(unsigned long)arg1];
        int iVar1 = *piVar4;
        auto pTVar5 = texture.GetNativeTextureId();
        if (iVar1 != (int)pTVar5) {
            lVar6 = texture.second();
            if (1 < *(unsigned int*)(lVar6 + 28)) {
                LogAssert("texture.GetDesc().m_SampleMipLevels <= 1u",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          357, nullptr);
            }
            lVar6 = texture.second();
            if (1 < *(unsigned int*)(lVar6 + 8)) {
                LogAssert("texture.GetDesc().m_ArraySize <= 1u",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          358, nullptr);
            }
            pTVar5 = texture.GetNativeTextureId();
            puVar7 = &field_2904[(unsigned long)arg1];
            *puVar7 = (int)pTVar5;
            lVar6 = texture.second();
            local_48 = GLFormat(*(Format*)(lVar6 + 12));
            pcVar2 = ___glewBindImageTexture;
            pTVar5 = texture.GetNativeTextureId();
            (*pcVar2)(local_48._16_4_, (unsigned long)pTVar5 & 4294967295, 0, 0, 0, access, local_48.field_0._0_4_);
            CheckGlErrorInternal("glBindImageTexture",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 373);
        }
    }

    // 0x100c275f0
    void ImmediateRenderContext::BackendDestroy() {
        NSOpenGLContext::clearCurrentContext((ID)&_OBJC_CLASS___NSOpenGLContext, "clearCurrentContext");
        ID IVar1 = field_3152;
        field_3152 = 0;
        uint8_t* puVar3 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar1);
        Singleton<RenderDevice>* pSVar2 = field_3160;
        field_3160 = nullptr;
        (*(void (*)(...))puVar3)(pSVar2);
    }

    // 0x100c27720
    void ImmediateRenderContext::CheckDefaultVAOBound() {
        int iVar1 = field_3140;
        int iVar2 = field_172->GetX();
        if (iVar1 != iVar2) {
            LogAssert("m_StateCache.m_VAO == m_defaultVAO.GetNativeVAO()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      640, nullptr);
        }
    }

    // 0x100c27780
    void ImmediateRenderContext::SetVertexBuffers(unsigned int arg1, const unsigned int* arg2, const unsigned int* arg3,
                                                  const unsigned int* arg4) {
        unsigned int uVar1;
        unsigned int* puVar3;
        unsigned int uVar4;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      701, nullptr);
        }
        if (m_insideBeginEnd == false) {
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      702, nullptr);
        }
        if (arg1 == 0) {
            LogAssert("numBuffers > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      703, nullptr);
        }
        CheckDefaultVAOBound();
        unsigned long arg1_00 = 0;
        do {
            uVar1 = arg2[arg1_00];
            uVar4 = 0;
            if (uVar1 != 0) {
                (*___glewBindBuffer)(34962, uVar1);
                CheckGlErrorInternal("glBindBuffer",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     719);
                uVar4 = uVar1;
            }
            puVar3 = &field_2240[arg1_00];
            *puVar3 = uVar4;
            arg1_00 = arg1_00 + 1;
        } while (arg1 != arg1_00);
    }

    // 0x100c278c0
    void ImmediateRenderContext::SetIndexBuffer(unsigned int arg1, unsigned int arg2) {
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      734, nullptr);
        }
        if (m_insideBeginEnd == false) {
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      735, nullptr);
        }
        CheckDefaultVAOBound();
        (*___glewBindBuffer)(34963, arg1);
        CheckGlErrorInternal("glBindBuffer",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             745);
        field_2272 = arg1;
    }

    // 0x100c27960
    void ImmediateRenderContext::SetDefaultVAO() {
        uint8_t* this_00;
        int iVar1;
        int iVar3;

        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2161, nullptr);
        }
        long lVar4 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar4 + 321) != '\0') {
            this_00 = field_172;
            if (!(this_00->IsValid())) {
                (logger::default_logger())
                    ->Log(false, 3,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          2177, "m_defaultVAO was invalid, this should only happen during device resets");
            } else {
                iVar1 = field_3140;
                iVar3 = this_00->GetX();
                if (iVar1 != iVar3) {
                    this_00->Bind(*this);
                }
                CheckDefaultVAOBound();
            }
        }
    }

    // 0x100c27b40
    void ImmediateRenderContext::SetCSTextureImage(unsigned int arg1, const Texture* texture, Access access) {
        Texture* pTVar4;
        Logger* this_00;
        LogLevel logLevel;
        int arg4;
        char* str2;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      891, nullptr);
        }
        if (m_insideBeginEnd == false) {
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      892, nullptr);
        }
        if (texture == nullptr) {
            LogAssert("pTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      893, nullptr);
        }
        auto pMVar2 = Instance();
        long lVar3 = pMVar2->GetOrigin();
        if (*(char*)(lVar3 + 222) == '\0') {
            this_00 = logger::default_logger();
            str2 = "ImmediateRenderContext::SetCSTextureImage: Image Load/Store is unsupported on this device. "
                   "Skipping binding.";
            logLevel = 2;
            arg4 = 918;
        } else {
            pTVar4 = texture->GetNativeTextureId();
            if ((int)pTVar4 != 0) {
                pMVar2 = (MapArea*)texture->Instance();
                lVar3 = pMVar2->GetOrigin();
                if (*(unsigned int*)(lVar3 + 72) <= arg1) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "context/OGL/ImmediateRenderContext_OGL.cpp",
                                    904,
                                    "Attempting to bind to image slot %u, which exceeds maximum images slots of %u",
                                    (unsigned long)arg1);
                }
                SetGLShaderImage(arg1, *texture, access);
                return;
            }
            this_00 = logger::default_logger();
            str2 = "Texture bound without native resources - binding skipped";
            logLevel = 3;
            arg4 = 913;
        }
        this_00->Log(false, logLevel,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                     "ImmediateRenderContext_OGL.cpp",
                     arg4, str2);
    }

    // 0x100c27cc0
    void ImmediateRenderContext::SetDepthStencilStateDirect(const DepthStencilState::Desc& desc) {
        uint64_t uVar1;
        uint64_t uVar3;
        int iVar9;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      924, nullptr);
        }
        if (desc.field_0 == '\0') {
            _glDisable(2929);
        } else {
            _glEnable(2929);
        }
        char* pcVar10 = "glEnable/glDisable GL_DEPTH_TEST";
        CheckGlErrorInternal("glEnable/glDisable GL_DEPTH_TEST",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             926);
        auto pMVar7 = pcVar10->Instance();
        long lVar8 = pMVar7->GetOrigin();
        if (*(char*)(lVar8 + 184) != '\0') {
            if (desc.field_1 == '\0') {
                _glEnable(34383);
            } else {
                _glDisable(34383);
            }
            CheckGlErrorInternal("glEnable/glDisable GL_ARB_depth_clamp",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 931);
        }
        _glDepthMask(desc.field_2);
        CheckGlErrorInternal("glDepthMask",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             935);
        _glDepthFunc(desc.field_12);
        pcVar10 = "glDepthFunc";
        CheckGlErrorInternal("glDepthFunc",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             937);
        pMVar7 = (MapArea*)pcVar10->Instance();
        lVar8 = pMVar7->GetOrigin();
        if (*(char*)(lVar8 + 183) != '\0') {
            if (desc.field_3 == '\0') {
                _glDisable(34960);
                pcVar10 = "glDisable GL_DEPTH_BOUNDS_TEST_EXT";
                iVar9 = 951;
            } else {
                _glEnable(34960);
                CheckGlErrorInternal("glEnable GL_DEPTH_BOUNDS_TEST_EXT",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     945);
                (*___glewDepthBoundsEXT)((uint32_t)((double)desc.field_4), (uint32_t)((double)desc.field_8));
                pcVar10 = "glDepthBoundsEXT";
                iVar9 = 947;
            }
            CheckGlErrorInternal(pcVar10,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 iVar9);
        }
        if (desc.field_16 == '\0') {
            _glDisable(2960);
            pcVar10 = "glDisable GL_STENCIL_TEST";
            iVar9 = 972;
        } else {
            _glEnable(2960);
            CheckGlErrorInternal("glEnable GL_STENCIL_TEST",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 959);
            _glStencilMask(desc.field_18);
            CheckGlErrorInternal("glStencilMask",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 960);
            (*___glewStencilFuncSeparate)(1028, *(uint32_t*)&desc.field_32, desc.field_19, desc.field_17);
            CheckGlErrorInternal("glStencilFuncSeparate",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 963);
            (*___glewStencilOpSeparate)(1028, *(uint32_t*)&desc.field_20, *(uint32_t*)&desc.field_24,
                                        *(uint32_t*)&desc.field_28);
            CheckGlErrorInternal("glStencilOpSeparate",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 964);
            (*___glewStencilFuncSeparate)(1029, *(uint32_t*)&desc.field_32, desc.field_19, desc.field_17);
            CheckGlErrorInternal("glStencilFuncSeparate",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 967);
            (*___glewStencilOpSeparate)(1028, *(uint32_t*)&desc.field_20, *(uint32_t*)&desc.field_24,
                                        *(uint32_t*)&desc.field_28);
            pcVar10 = "glStencilOpSeparate";
            iVar9 = 968;
        }
        CheckGlErrorInternal(pcVar10,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             iVar9);
        field_2464 = *(uint32_t*)(desc.field_36 + 12);
        uVar1._0_1_ = desc.field_0;
        uVar1._1_1_ = desc.field_1;
        uVar1._2_1_ = desc.field_2;
        uVar1._3_1_ = desc.field_3;
        uVar1._4_4_ = desc.field_4;
        uint64_t uVar2 = *(uint64_t*)&desc.field_8;
        uVar3._0_1_ = desc.field_16;
        uVar3._1_1_ = desc.field_17;
        uVar3._2_1_ = desc.field_18;
        uVar3._3_5_ = *(uint64_t*)&desc.field_19;
        uint64_t uVar4 = *(uint64_t*)&desc.field_24;
        uint64_t uVar5 = *(uint64_t*)(desc.field_36 + 4);
        field_2448 = *(uint64_t*)&desc.field_32;
        field_2456 = uVar5;
        field_2432 = (uint8_t)uVar3;
        field_2433 = (int64_t)((unsigned long)uVar3 >> 8);
        field_2440 = uVar4;
        field_2416 = (short)uVar1;
        field_2418 = (char)((unsigned long)uVar1 >> 16);
        field_2419 = (int64_t)((unsigned long)uVar1 >> 24);
        field_2424 = uVar2;
    }

    // 0x100c27fc0
    void ImmediateRenderContext::SetRasteriserStateDirect(const RasteriserState::Desc& desc) {
        int iVar6;
        char* pcVar7;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      980, nullptr);
        }
        if (desc.field_4 == 0) {
            _glDisable(2884);
            pcVar7 = "glEnable GL_CULL_FACE";
            iVar6 = 989;
        } else {
            _glEnable(2884);
            CheckGlErrorInternal("glEnable GL_CULL_FACE",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 984);
            _glCullFace(desc.field_4);
            pcVar7 = "glCullFace";
            iVar6 = 985;
        }
        CheckGlErrorInternal(pcVar7,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             iVar6);
        if (desc.field_12 == 0.0 && desc.field_8 == 0.0) {
            _glDisable(32823);
            pcVar7 = "glDisable GL_POLYGON_OFFSET_FILL";
            iVar6 = 1000;
        } else {
            _glEnable();
            CheckGlErrorInternal("glEnable GL_POLYGON_OFFSET_FILL",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 995);
            _glPolygonOffset(desc.field_8, desc.field_12);
            pcVar7 = "glPolygonOffset";
            iVar6 = 996;
        }
        CheckGlErrorInternal(pcVar7,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             iVar6);
        _glLineWidth(desc.field_16);
        CheckGlErrorInternal("glLineWidth",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             1004);
        _glPolygonMode(1032, desc.field_0);
        CheckGlErrorInternal("glPolygonMode",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             1008);
        if (desc.field_22 == '\0') {
            _glDisable(32925);
            pcVar7 = "glDisable GL_MULTISAMPLE";
            iVar6 = 1016;
        } else {
            _glEnable(32925);
            pcVar7 = "glEnable GL_MULTISAMPLE";
            iVar6 = 1012;
        }
        CheckGlErrorInternal(pcVar7,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             iVar6);
        long lVar5 = ((MapArea*)pcVar7->Instance())->GetOrigin();
        if (2 < *(int*)(lVar5 + 308)) {
            if (desc.field_24 == '\0') {
                _glDisable(35977);
                pcVar7 = "glDisable GL_RASTERIZER_DISCARD";
                iVar6 = 1030;
            } else {
                _glEnable(35977);
                pcVar7 = "glEnable GL_RASTERIZER_DISCARD";
                iVar6 = 1026;
            }
            CheckGlErrorInternal(pcVar7,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 iVar6);
        }
        uint64_t uVar1 = *(uint64_t*)desc;
        uint64_t uVar2 = *(uint64_t*)&desc.field_8;
        uint64_t uVar3 = *(uint64_t*)((long)&desc.field_16 + 1);
        field_2477 = *(uint64_t*)((long)&desc.field_8 + 1);
        field_2485 = uVar3;
        field_2468 = uVar1;
        *(uint64_t*)&field_2476 = uVar2;
    }

    // 0x100c28200
    void ImmediateRenderContext::SetBlendStateDirect(const BlendState::Desc& desc) {
        int iVar11;
        char* pcVar12;

        Desc* arg1 = desc;
        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1041, nullptr);
        }
        char* pcVar10 = &desc.field_4[(unsigned long)arg1];
        if (desc.field_0 == '\0') {
            _glDisable(32926);
            pcVar12 = "glDisable";
            iVar11 = 1051;
        } else {
            _glEnable(32926);
            pcVar12 = "glEnable";
            iVar11 = 1047;
        }
        CheckGlErrorInternal(pcVar12,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             iVar11);
        if (*pcVar10 == '\0') {
            _glDisable(3042);
            pcVar12 = "glDisable";
            iVar11 = 1069;
        } else {
            _glEnable(3042);
            CheckGlErrorInternal("glEnable",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 1057);
            (*___glewBlendFuncSeparate)(*(uint32_t*)(pcVar10 + 4), *(uint32_t*)(pcVar10 + 8),
                                        *(uint32_t*)(pcVar10 + 16), *(uint32_t*)(pcVar10 + 20));
            CheckGlErrorInternal("glBlendFuncSeparate",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 1063);
            (*___glewBlendEquationSeparate)(*(uint32_t*)(pcVar10 + 12), *(uint32_t*)(pcVar10 + 24));
            pcVar12 = "glBlendEquationSeparate";
            iVar11 = 1065;
        }
        CheckGlErrorInternal(pcVar12,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             iVar11);
        uint8_t bVar1 = pcVar10[28];
        _glColorMask(bVar1 & 1, bVar1 >> 1 & 1, bVar1 >> 2 & 1, bVar1 >> 3 & 1);
        CheckGlErrorInternal("glColorMask",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             1078);
        field_2560 = *(uint32_t*)&desc[5].field_4;
        uint64_t uVar2 = *(uint64_t*)desc;
        uint64_t uVar3 = *(uint64_t*)&desc.field_8;
        uint64_t uVar4 = *(uint64_t*)&desc[1].field_4;
        uint64_t uVar5 = *(uint64_t*)(desc + 2);
        uint64_t uVar6 = *(uint64_t*)&desc[2].field_8;
        uint64_t uVar7 = *(uint64_t*)&desc[3].field_4;
        uint64_t uVar8 = *(uint64_t*)&desc[4].field_8;
        field_2544 = *(uint64_t*)(desc + 4);
        field_2552 = uVar8;
        field_2528 = uVar6;
        field_2536 = uVar7;
        field_2512 = uVar4;
        field_2520 = uVar5;
        field_2496 = uVar2;
        field_2504 = uVar3;
    }

    // 0x100c28450
    void ImmediateRenderContext::SetShaderStorageBuffer(unsigned int arg1,
                                                        const ShaderStorageBuffer* shaderStorageBuffer) {
        void* pcVar1;
        int iVar3;
        uint32_t uVar4;

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2131, nullptr);
        }
        if ((m_insideBeginEnd == false) || (shaderStorageBuffer == nullptr)) {
            LogAssert("m_InsideBeginEnd && pShaderStorageBuffer",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2132, nullptr);
        }
        if (arg1 == 4294967295) {
            LogAssert("bufferSlot != GL_INVALID_INDEX",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2134, nullptr);
        }
        if (shaderStorageBuffer == nullptr) {
            (*___glewBindBufferBase)(37074, arg1, 0);
            iVar3 = 2145;
        } else {
            iVar3 = shaderStorageBuffer->GetNativeBuffer();
            pcVar1 = ___glewBindBufferBase;
            if (iVar3 == 0) {
                LogAssert("pShaderStorageBuffer->GetNativeBuffer() > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          2138, nullptr);
            }
            uVar4 = shaderStorageBuffer->GetNativeBuffer();
            (*pcVar1)(37074, arg1, uVar4);
            iVar3 = 2141;
        }
        CheckGlErrorInternal("glBindBufferBase (GL_SHADER_STORAGE_BUFFER)",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             iVar3);
    }

    // 0x100c285b0
    void ImmediateRenderContext::ValidateState() {

        if (!(IsContextThread())) {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1318, nullptr);
        }
        if (m_insideBeginEnd == false) {
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1319, nullptr);
        }
        if (!(IsLocked())) {
            LogAssert("IsLocked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1320, nullptr);
        }
    }

    // 0x100c28870
    void ImmediateRenderContext::BackendSetVSyncMode(VSyncMode vSyncMode, int arg2) {
        int local_c = arg2;
        _CGLSetParameter((*(void (*)(...))PTR__objc_msgSend_100ee9e50)(field_3152, "CGLContextObj"), 222, &local_c);
    }

    // 0x100c288b0
    VSyncMode ImmediateRenderContext::GetVSyncMode() const {
        return m_vSyncMode;
    }

    // 0x100c28900
    bool ImmediateRenderContext::IsMinCoreProfile() const {
        return (int)m_gLCoreProfileVerMajor < 3;
    }

    // 0x100c28910
    void ImmediateRenderContext::BindImageTexture(unsigned int arg1, const Texture* texture, int arg3,
                                                  LockType lockType) {
        uint8_t local_40[16];

        if (IsContextThread() == '\0') {
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2184, nullptr);
        }
        long lVar4 = texture->second();
        new (local_40) GLFormat(*(Format*)(lVar4 + 12));
        void* pcVar1 = ___glewBindImageTexture;
        auto pTVar5 = texture->GetNativeTextureId();
        uint32_t uVar3 = GetGLMapAccessFlags(lockType);
        (*pcVar1)(arg1, (unsigned long)pTVar5 & 4294967295, arg3, 0, 0, uVar3, local_40._0_4_);
        CheckGlErrorInternal("glBindImageTexture",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             2186);
    }

    // 0x100c289d0
    void DebugLogCallback(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4, int arg5,
                          const char* str, const void* arg7) {
        int iVar1;
        Logger* this_00;
        uint64_t uVar3;
        uint64_t uVar4;
        uint64_t uVar5;
        LogLevel logLevel;
        uint32_t in_register_0000003c;

        Singleton<RenderDevice>* this_01 =
            (Singleton<RenderDevice>*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        if ((arg4 != 33387) && (0 < arg5)) {
            if ((45 < arg3 - 131139) || ((35184372121601U >> ((unsigned long)(arg3 - 131139) & 63) & 1) == 0)) {
                if (this_01->InstancePtr() != nullptr) {
                    iVar1 = ((NXTPixScreen*)this_01->Instance())->GetUIHeight();
                    if (iVar1 == 4) {
                        iVar1 = _strcmp(str, "FreeAllocationOnTimestamp - WaitForTimestamp");
                        if (iVar1 == 0) {
                            return;
                        }
                        iVar1 = _strcmp(str, "Namespace collision detected, using slow path");
                        if (iVar1 == 0) {
                            return;
                        }
                        iVar1 = _strcmp(str, "EsxBufferObject::Map - Ignoring EsxBufferMapUnsyncedBit");
                        if (iVar1 == 0) {
                            return;
                        }
                        iVar1 = _strcmp(str, "Packing allocations for resource %p");
                        if (iVar1 == 0) {
                            return;
                        }
                    }
                }
                this_00 = logger::default_logger();
                uVar3 = GetDebugMessageTypeStr(arg2);
                uVar4 = GetDebugMessageSourceStr(arg1);
                if (arg4 == 37190) {
                    uVar5 = GetDebugMessageSeverityStr(37190);
                    logLevel = 6;
                    iVar1 = 2242;
                } else {
                    uVar5 = GetDebugMessageSeverityStr(arg4);
                    logLevel = 8;
                    iVar1 = 2251;
                }
                this_00->Log(false, logLevel,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             iVar1, "GL Debug Message: %s\nType: %s, Source: %s, ID: %u, Severity: %s", str, uVar3,
                             uVar4, (unsigned long)arg3, uVar5);
            }
        }
    }

    // 0x100c28b60
    uint8_t ImmediateRenderContext::BackendPresent() {
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(field_3152, "flushBuffer");
        return 1;
    }

    // 0x100c28b80
    unsigned long ImmediateRenderContext::BackendLockContext() {
        uint64_t uVar2;
        ID IVar3;
        ID IVar4;
        uint64_t unaff_RBX;
        unsigned long uVar5;

        if (field_3152 != 0) {
            uVar2 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(field_3152, "CGLContextObj");
            if (_CGLLockContext(uVar2) == 0) {
                IVar3 = NSOpenGLContext::currentContext((ID)&_OBJC_CLASS___NSOpenGLContext, "currentContext");
                IVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
                IVar3 = field_3152;
                (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar4);
                uVar5 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
                if (IVar4 != IVar3) {
                    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(field_3152, "makeCurrentContext");
                }
                goto LAB_100c28bb5;
            }
        }
        uVar5 = 0;
    LAB_100c28bb5:
        return uVar5 & 4294967295;
    }

    // 0x100c28c10
    void ImmediateRenderContext::BackendUnlockContext() {
        if (field_3152 != 0) {
            _CGLUnlockContext((*(void (*)(...))PTR__objc_msgSend_100ee9e50)(field_3152, "CGLContextObj"));
        }
    }

    // 0x100c28c40
    void ImmediateRenderContext::FinishRendering() {
        _glFinish();
        CheckGlErrorInternal("glFinish",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             2352);
    }

    // 0x100c28d10
    void ImmediateRenderContext::UpdateBackBuffer(unsigned int arg1, unsigned int arg2) {

        if (field_12 != '\0') {
            if (field_1184.IsNativeBackBuffer()) {
                field_1184.SetNativeBackBufferSize(arg1, arg2);
            }
        }
        if (field_13 != '\0') {
            if (field_1696.IsNativeBackBuffer()) {
                field_1696.SetNativeBackBufferSize(arg1, arg2);
            }
        }
    }

} // namespace jag::render
