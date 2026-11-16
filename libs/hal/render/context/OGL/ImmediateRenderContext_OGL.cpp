// libs/hal/render/context/OGL/ImmediateRenderContext_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/context/ImmediateRenderContext.h"

namespace jag::render {
    class RenderContextStateCache {
    public:
        RenderContextStateCache();
        void Clear(RenderTargets const*, bool);
        void Init(RenderDeviceCaps const&);
        void SetTextures();
        void RemoveTexture(unsigned int);
        void ValidateBoundFBO() const;
        ~RenderContextStateCache();

        // data members, from how the methods use this: 944 bytes
        undefined8 field_0;  // offset 0
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        char _unknown_32[32];
        undefined4 field_64; // offset 64
        char _unknown_68[4];
        undefined1 field_72; // offset 72
        char _unknown_73[135];
        Desc field_208; // offset 208
        char _unknown_252[8];
        Desc field_260; // offset 260
        char _unknown_285[3];
        Desc field_288; // offset 288
        char _unknown_300[56];
        uint field_356;       // offset 356
        undefined1 field_360; // offset 360
        char _unknown_361[167];
        undefined1 field_528; // offset 528
        char _unknown_529[167];
        undefined1 field_696; // offset 696
        char _unknown_697[215];
        undefined1 field_912; // offset 912
        char _unknown_913[19];
        undefined4 field_932; // offset 932
        undefined4 field_936; // offset 936
        char _unknown_940[4];
    };

    // 0x100c15960, 960 bytes, placed by class name and debug map
    // ImmediateRenderContext::Init()
    void ImmediateRenderContext::Init() {
        int* piVar1;
        char cVar2;
        ImmediateRenderContext* pIVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        RenderDevice* pRVar6;
        MapArea* pMVar7;
        long lVar8;
        function<void(RenderDeviceCaps_const&)>* this_00;
        char* this_01;
        eastl::string local_d0[32];
        eastl::string local_b0[32];
        eastl::string local_90[39];
        undefined1 local_69;
        function<void(RenderDeviceCaps_const&)> local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        piVar1 = &m_gLCoreProfileVerMajor;
        if (m_gLCoreProfileVerMajor == 0) {
            QueryGLVersion(piVar1, &m_gLCoreProfileVerMinor);
            cVar2 = field_18;
        } else {
            cVar2 = field_18;
        }
        if (cVar2 == '\0') {
            local_69 = 0;
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                212, "\nInitialising OpenGL%s %d.%d Render Context:", &local_69,
                                m_gLCoreProfileVerMajor, m_gLCoreProfileVerMinor);
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                216, "----------------------------------------------");
            eastl::string::basic_string(local_d0);
            eastl::string::basic_string(local_b0);
            eastl::string::basic_string(local_90);
            GetGLString<eastl::string>((basic_string*)local_d0, 7938);
            GetGLString<eastl::string>((basic_string*)local_b0, 7936);
            GetGLString<eastl::string>((basic_string*)local_90, 7937);
            uVar4 = logger::default_logger();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar4, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                228, "\tGL_VERSION = %s", uVar5);
            uVar4 = logger::default_logger();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar4, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                229, "\tGL_VENDOR = %s", uVar5);
            uVar4 = logger::default_logger();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar4, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                230, "\tGL_RENDERER = %s", uVar5);
            PrintGLExtensions(*piVar1);
            pIVar3 = this;
            InitBackBuffer(this);
            pRVar6 = (RenderDevice*)pIVar3->Instance();
            cVar2 = pRVar6->IsRenderContextInit();
            if (cVar2 == '\0') {
                pRVar6 = (RenderDevice*)pRVar6->Instance();
                std::function<void(RenderDeviceCaps_const&)>::function<ImmediateRenderContext::Init()::__96, void>(
                    local_68, this);
                pRVar6->OnRenderContextInit(this, local_68);
                this_00 = local_68;
                std::function<void(RenderDeviceCaps_const&)>::~function(this_00);
            } else {
                pMVar7 = (MapArea*)pRVar6->Instance();
                this_00 = (function<void(RenderDeviceCaps_const&)>*)&m_pStateCache;
                pMVar7->GetOrigin();
                RenderContextStateCache::Init((RenderDeviceCaps*)this_00);
            }
            pMVar7 = (MapArea*)this_00->Instance();
            lVar8 = pMVar7->GetOrigin();
            if (*(char*)(lVar8 + 318) == '\0' && *(char*)(lVar8 + 319) == '\0') {
                this_01 = "deviceCaps.m_GLFramebufferObject || deviceCaps.m_GLFramebufferObjectExt";
                LogFatalError("deviceCaps.m_GLFramebufferObject || deviceCaps.m_GLFramebufferObjectExt",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL.cpp",
                              253, 0, "Framebuffer object extension is missing!");
                /* WARNING: Subroutine does not return */
                this_01->~OptionStore();
            }
            MetaData::SetKeyValue(17, local_d0);
            MetaData::SetKeyValue(18, *piVar1);
            MetaData::SetKeyValue(19, m_gLCoreProfileVerMinor);
            MetaData::SetKeyValue(20, local_b0);
            MetaData::SetKeyValue(21, local_90);
            MetaData::SetKeyValue(22);
            CreateRenderingResources(this);
            eastl::string::~basic_string(local_90);
            eastl::string::~basic_string(local_b0);
            pIVar3 = (ImmediateRenderContext*)local_d0;
            pIVar3->~basic_string();
        } else {
            pIVar3 = (ImmediateRenderContext*)logger::default_logger();
            logger::Logger::Log(pIVar3, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                201, "Initialising secondary GL context");
        }
        EnableGLExtensions(pIVar3);
        ClearState(this, false);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c15d20, 816 bytes, placed by class name and debug map
    // ImmediateRenderContext::ClearState(bool)
    void ImmediateRenderContext::ClearState(bool param_1) {
        RenderTargets** this_00;
        uint uVar1;
        undefined4 uVar3;
        uint uVar4;
        RenderTargets* pRVar5;
        MapArea* this_01;
        long lVar6;
        long lVar7;
        Desc* pDVar8;
        Desc* pDVar9;
        Desc* pDVar10;
        int iVar11;
        Singleton<RenderDevice>* this_02;
        ImmediateRenderContext* pIVar12;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1994, (char*)0);
        }
        this_00 = &m_pStateCache;
        pRVar5 = (RenderTargets*)GetBackBuffer(this);
        this_02 = (Singleton<RenderDevice>*)this_00;
        this_00->Clear(pRVar5, param_1);
        this_01 = (MapArea*)this_02->Instance();
        lVar6 = this_01->GetOrigin();
        lVar7 = this_01->Instance();
        pDVar8 = (Desc*)((lVar7 + 720))->second();
        pIVar12 = this;
        SetDepthStencilStateDirect(this, pDVar8);
        lVar7 = pIVar12->Instance();
        pDVar9 = (Desc*)((lVar7 + 1200))->second();
        pIVar12 = this;
        SetRasteriserStateDirect(this, pDVar9);
        lVar7 = pIVar12->Instance();
        pDVar10 = (Desc*)((lVar7 + 1524))->second();
        SetBlendStateDirect(this, pDVar10);
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
        uVar3 = GetBackBufferWidth(this);
        GetBackBufferHeight(this);
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
        if (param_1) {
            this_00->SetTextures();
            (*___glewActiveTexture)(33984);
            CheckGlErrorInternal("glActiveTexture",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2023);
            BindInvalidTexture(this);
            SetDefaultVAO(this);
            if ((*(char*)(lVar6 + 120) != '\0') && (0 < *(int*)(lVar6 + 124))) {
                iVar11 = 0;
                do {
                    (*___glewBindBufferBase)(35345, iVar11, 0);
                    CheckGlErrorInternal("glBindBufferBase",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         2033);
                    iVar11 = iVar11 + 1;
                } while (iVar11 < *(int*)(lVar6 + 124));
            }
            uVar1 = field_2216;
            pRVar5 = (RenderTargets*)eastl::optional<RenderTargets>::operator->((optional<RenderTargets>*)&field_784);
            uVar4 = pRVar5->GetNativeFBOId();
            if (uVar1 != uVar4) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_StateCache.m_RenderTargetsFBO == m_backBuffer->GetNativeFBOId()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          2038, (char*)0);
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

    // 0x100c16120, 176 bytes, placed by class name and debug map
    // ImmediateRenderContext::SetVSyncMode(VSyncMode)
    void ImmediateRenderContext::SetVSyncMode(int param_2) {
        MapArea* pMVar2;
        long lVar3;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2052, (char*)0);
        }
        pMVar2 = (MapArea*)((ImmediateRenderContext*)this)->Instance();
        lVar3 = pMVar2->GetOrigin();
        if (*(char*)(lVar3 + 185) != '\0') {
            if (param_2 == -1) {
                pMVar2 = (MapArea*)pMVar2->Instance();
                pMVar2->GetOrigin();
            }
            BackendSetVSyncMode(this);
            m_vSyncMode = param_2;
        }
    }

    // 0x100c161e0, 176 bytes, placed by class name and debug map
    // ImmediateRenderContext::ReleaseNativeResources()
    void ImmediateRenderContext::ReleaseNativeResources() {
        undefined1* this_00;
        RenderTargets* pRVar4;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      399, (char*)0);
        }
        (&m_pStateCache, (RenderTargets*)0, true)->Clear();
        (&field_1184)->Destroy();
        (&field_1696)->Destroy();
        this_00 = &field_784;
        if (this_00->operator_cast_to_bool()) {
            pRVar4 = (RenderTargets*)eastl::optional<RenderTargets>::operator->((optional<RenderTargets>*)this_00);
            if (pRVar4->GetNativeFBOId() != 0) {
                pRVar4 = (RenderTargets*)eastl::optional<RenderTargets>::operator->((optional<RenderTargets>*)this_00);
                pRVar4->EnableKeepAlive();
            }
            this_00->reset();
        }
        BackendDestroy(this);
    }

    // 0x100c16340, 192 bytes, placed by __FILE__ string
    // ImmediateRenderContext::DestroyRenderingResources()
    void ImmediateRenderContext::DestroyRenderingResources() {
        undefined1* this_00;
        RenderTargetResolver* this_01;
        VAOManager* this_02;
        Singleton<VAOManager>* this_03;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      379, (char*)0);
        }
        if (field_18 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_Desc.m_SecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      380, (char*)0);
        }
        BufferedRenderTargets::DestroyStaticRenderingResources();
        this_00 = &field_144;
        if (this_00->operator_cast_to_bool()) {
            this_01 = (RenderTargetResolver*)
                          std::unique_ptr<RenderTargetResolver, std::default_delete<RenderTargetResolver>>::operator->(
                              (unique_ptr<RenderTargetResolver, std::default_delete<RenderTargetResolver>>*)this_00);
            this_01->DestroyRenderingResources();
            this_00->reset(0);
        }
        (&field_192)->Destroy();
        this_03 = (Singleton<VAOManager>*)field_172;
        this_03->Destroy();
        this_02 = (VAOManager*)this_03->Instance();
        this_02->DestroyRenderingResources();
    }

    // 0x100c16460, 304 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetRenderTargets(RenderTargets const*)
    void ImmediateRenderContext::SetRenderTargets(RenderTargets* param_1) {
        uint uVar2;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      496, (char*)0);
        }
        if ((m_pStateCache != (RenderTargets*)0) || (field_2216 != 0)) {
            uVar2 = m_pStateCache->GetNativeFBOId();
            if (uVar2 != field_2216) {
                /* WARNING: Subroutine does not return */
                LogAssert("(!m_StateCache.m_pRenderTargets && !m_StateCache.m_RenderTargetsFBO) || "
                          "m_StateCache.m_pRenderTargets->GetNativeFBOId() == m_StateCache.m_RenderTargetsFBO",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          498, (char*)0);
            }
        }
        if (param_1 == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      499, (char*)0);
        }
        uVar2 = param_1->GetNativeFBOId();
        if (field_2216 != uVar2) {
            (*___glewBindFramebuffer)(36160, uVar2);
            CheckGlErrorInternal("glBindFramebuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 506);
            m_pStateCache = param_1;
            field_2216 = uVar2;
            param_1->SetNeedsInvalidated();
        }
        if (m_pStateCache != param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("pRenderTargets == m_StateCache.m_pRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      514, (char*)0);
        }
    }

    // 0x100c16590, 352 bytes, placed by __FILE__ string
    // ImmediateRenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long) const
    void ImmediateRenderContext::ClearRenderTargets(Vector4T* param_1, ulong param_2) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        char cVar4;
        long lVar5;
        vector* pvVar6;
        undefined4* puVar7;

        cVar4 = IsContextThread(this);
        if (cVar4 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      519, (char*)0);
        }
        if ((field_0 == false) || (param_1 == (Vector4T*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_InsideBeginEnd && pClearColours",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      520, (char*)0);
        }
        lVar5 = std::array<RenderTargetBlendDesc, 2ul>::operator[]((ulong)((long)&field_2496 + 4));
        if (*(char*)(lVar5 + 28) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_StateCache.m_BlendStateDesc.m_RenderTargetBlend[0].m_RenderTargetWriteMask != 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      521, "Colour writes must be enabled for colour clears to work");
        }
        cVar4 = m_pStateCache->HasColourTargets();
        if (cVar4 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "OGL/ImmediateRenderContext_OGL.cpp",
                            532, (char*)0);
        }
        pvVar6 = param_1->SSOBeginPtr(param_1);
        uVar1 = *(undefined4*)pvVar6;
        puVar7 = (undefined4*)param_1->y();
        uVar2 = *puVar7;
        puVar7 = (undefined4*)param_1->second();
        uVar3 = *puVar7;
        puVar7 = (undefined4*)param_1->qw();
        _glClearColor(uVar1, uVar2, uVar3, *puVar7);
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

    // 0x100c16770, 784 bytes, placed by __FILE__ string
    // ImmediateRenderContext::ClearDepthStencilTarget(float, unsigned int, unsigned int) const
    void ImmediateRenderContext::ClearDepthStencilTarget(float param_1, uint param_2, uint param_3) {
        char cVar1;
        MapArea* this_00;
        long lVar2;
        int iVar3;
        uint uVar4;
        RenderTargets* this_01;
        char* pcVar5;
        undefined1 local_188[168];
        undefined1 local_e0[168];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      538, (char*)0);
        }
        if (field_0 == false) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      539, (char*)0);
        }
        uVar4 = 0;
        if ((param_3 & 2) != 0) {
            this_01 = m_pStateCache;
            cVar1 = this_01->HasDepthTarget();
            if (cVar1 == '\0') {
                uVar4 = field_2216;
                if (m_pStateCache == (RenderTargets*)0) {
                    pcVar5 = "Backbuffer";
                } else {
                    local_e0->GetInfoString();
                    pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                }
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                562, "Attempting to CLEAR_DEPTH on a render target with no depth buffer (FBO %i - %s)",
                                (ulong)uVar4, pcVar5);
            }
            if (field_2418 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_StateCache.m_DepthStencilStateDesc.m_DepthWriteEnable == true",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          548, "Depth writes must be enabled for depth clears to work");
            }
            this_00 = (MapArea*)this_01->Instance();
            lVar2 = this_00->GetOrigin();
            if (*(char*)(lVar2 + 144) == '\0') {
                _glClearDepth((double)param_1);
                pcVar5 = "glClearDepth";
                iVar3 = 556;
            } else {
                (*___glewClearDepthf)(param_1);
                pcVar5 = "glClearDepthf";
                iVar3 = 552;
            }
            CheckGlErrorInternal(pcVar5,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 iVar3);
            uVar4 = 256;
        }
        if ((param_3 & 4) != 0) {
            cVar1 = m_pStateCache->HasStencilTarget();
            if ((cVar1 == '\0') && (field_2432 == '\0')) {
                uVar4 = field_2216;
                if (m_pStateCache == (RenderTargets*)0) {
                    pcVar5 = "Backbuffer";
                } else {
                    local_188->GetInfoString();
                    pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                }
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                574,
                                "Attempting to CLEAR_STENCIL on a render target with no stencil buffer (FBO %i - %s)",
                                (ulong)uVar4, pcVar5);
            }
            _glClearStencil(param_2);
            CheckGlErrorInternal("glClearStencil",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 569);
            uVar4 = uVar4 | 1024;
        }
        if (uVar4 != 0) {
            _glClear(uVar4);
            CheckGlErrorInternal("glClear",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 583);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c16be0, 144 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetBlendState(BlendState const*)
    void ImmediateRenderContext::SetBlendState(BlendState* param_1) {
        char cVar1;
        Desc* pDVar2;

        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1114, (char*)0);
        }
        if (param_1 == (BlendState*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pBlendState",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1115, (char*)0);
        }
        pDVar2 = (Desc*)param_1->second();
        cVar1 = BlendState::Desc::operator!=((Desc*)&field_2496, pDVar2);
        if (cVar1 != '\0') {
            SetBlendStateDirect(this, pDVar2);
        }
    }

    // 0x100c16d60, 176 bytes, placed by __FILE__ string
    // ImmediateRenderContext::Present()
    void ImmediateRenderContext::Present() {
        uint uVar1;
        char cVar2;
        uint uVar3;
        RenderTargets* this_00;

        cVar2 = IsContextThread(this);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2311, (char*)0);
        }
        cVar2 = IsLocked(this);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsLocked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2312, (char*)0);
        }
        uVar1 = field_2216;
        this_00 = (RenderTargets*)eastl::optional<RenderTargets>::operator->((optional<RenderTargets>*)&field_784);
        uVar3 = this_00->GetNativeFBOId();
        if (uVar1 != uVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_StateCache.m_RenderTargetsFBO == m_backBuffer->GetNativeFBOId()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2313, (char*)0);
        }
        BackendPresent(this);
    }

    // 0x100c16e90, 400 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetVertexBuffers(unsigned int, VertexBuffer const* const*, unsigned int const*, unsigned int const*)
    void ImmediateRenderContext::SetVertexBuffers(uint param_1, VertexBuffer** param_2, uint* param_3, uint* param_4) {
        Material* this;
        int iVar2;
        int* piVar3;
        undefined4 in_register_0000003c;
        ImmediateRenderContext* this_00;
        ulong uVar5;

        this_00 = (ImmediateRenderContext*)CONCAT44(in_register_0000003c, param_1);
        if (IsContextThread(this_00) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      658, (char*)0);
        }
        if (this_00->field_0 == false) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      659, (char*)0);
        }
        if ((int)param_2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("numBuffers > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      660, (char*)0);
        }
        CheckDefaultVAOBound(this_00);
        uVar5 = 0;
        do {
            this = *(Material**)(param_3 + uVar5 * 2);
            iVar2 = 0;
            if (this != (Material*)0) {
                iVar2 = GetNativeBuffer();
                if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("glVB",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL.cpp",
                              669, (char*)0);
                }
                if ((GetNormalEmissiveMapID() & 8) != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("(vertexBuffer.GetCreationFlags() & DISABLE_MARK_AS_DEAD) == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL.cpp",
                              672, (char*)0);
                }
                (*___glewBindBuffer)(34962, iVar2);
                CheckGlErrorInternal("glBindBuffer",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     682);
            }
            piVar3 =
                (int*)std::array<unsigned int, 8ul>::operator[]((array<unsigned int, 8ul>*)&this_00->field_2240, uVar5);
            *piVar3 = iVar2;
            uVar5 = uVar5 + 1;
            if (((ulong)param_2 & 4294967295) == uVar5) {
                return;
            }
        } while (true);
    }

    // 0x100c17230, 240 bytes, placed by __FILE__ string
    // ImmediateRenderContext::BindTexture(Texture const&, unsigned int)
    void ImmediateRenderContext::BindTexture(Texture* param_1, uint param_2) {
        int iVar1;
        int iVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        int* piVar6;
        undefined4* puVar7;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      330, (char*)0);
        }
        piVar6 = (int*)
            eastl::vector<unsigned int, eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<unsigned int,
                               eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>*)&field_2568,
                       (ulong)param_2);
        iVar1 = *piVar6;
        iVar3 = param_1->GetNativeTextureId();
        if (iVar1 != iVar3) {
            SetActiveTextureSlot(this, param_2);
            uVar4 = param_1->GetNativeTextureId();
            puVar7 =
                (undefined4*)eastl::vector<unsigned int,
                                           eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<unsigned int,
                            eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>*)&field_2568,
                    (ulong)param_2);
            *puVar7 = uVar4;
            uVar4 = param_1->GetMaxLineWidth();
            puVar7 =
                (undefined4*)eastl::vector<unsigned int,
                                           eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<unsigned int,
                            eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>*)&field_2736,
                    (ulong)param_2);
            *puVar7 = uVar4;
            uVar4 = param_1->GetMaxLineWidth();
            uVar5 = param_1->GetNativeTextureId();
            _glBindTexture(uVar4, uVar5);
            CheckGlErrorInternal("glBindTexture",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 342);
        }
    }

    // 0x100c17320, 112 bytes, placed by __FILE__ string
    // ImmediateRenderContext::ValidateTextureSamplerPair(unsigned int, Texture const*, int)
    void ImmediateRenderContext::ValidateTextureSamplerPair(uint param_1, Texture* param_2, int param_3) {
        long lVar2;
        undefined4 in_register_00000014;
        undefined4 in_register_0000003c;

        if (IsContextThread((ImmediateRenderContext*)CONCAT44(in_register_0000003c, param_1)) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      857, (char*)0);
        }
        lVar2 = (CONCAT44(in_register_00000014, param_3))->second();
        if (*(int*)(lVar2 + 60) == 35001) {
            /* WARNING: Subroutine does not return */
            LogAssert("pTexture->GetDesc().m_GPUAccess != Access::ACCESS_WRITE_ONLY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      859, "Cannot bind write-only texture for sampling");
        }
    }

    // 0x100c175d0, 400 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetShaderConstBuffer(unsigned int, ShaderConstBuffer const*)
    void ImmediateRenderContext::SetShaderConstBuffer(uint param_1, ShaderConstBuffer* param_2) {
        code* pcVar1;
        int iVar3;
        int iVar4;
        undefined4 uVar5;
        MapArea* this_00;
        long lVar6;
        int* piVar7;
        undefined4* puVar8;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2106, (char*)0);
        }
        if ((field_0 == false) || (param_2 == (ShaderConstBuffer*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_InsideBeginEnd && pShaderConstBuffer",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2107, (char*)0);
        }
        if (param_2 == (ShaderConstBuffer*)0) {
            puVar8 =
                (undefined4*)eastl::vector<unsigned int,
                                           eastl::fixed_vector_allocator<4ul, 24ul, 4ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<unsigned int,
                            eastl::fixed_vector_allocator<4ul, 24ul, 4ul, 0ul, true, eastl::allocator>>*)&field_2280,
                    (ulong)param_1);
            *puVar8 = 0;
            (*___glewBindBufferBase)(35345, param_1, 0);
            CheckGlErrorInternal("glBindBufferBase (GL_UNIFORM_BUFFER)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2125);
        } else {
            iVar3 = param_2->GetNativeBuffer();
            if (iVar3 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("pShaderConstBuffer->GetNativeBuffer() > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          2111, (char*)0);
            }
            this_00 = (MapArea*)param_2->Instance();
            lVar6 = this_00->GetOrigin();
            if (*(char*)(lVar6 + 337) != '\0') {
                piVar7 = (int*)eastl::vector<
                    unsigned int, eastl::fixed_vector_allocator<4ul, 24ul, 4ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<unsigned int,
                            eastl::fixed_vector_allocator<4ul, 24ul, 4ul, 0ul, true, eastl::allocator>>*)&field_2280,
                    (ulong)param_1);
                iVar3 = *piVar7;
                iVar4 = param_2->GetNativeBuffer();
                if (iVar3 == iVar4) {
                    return;
                }
            }
            pcVar1 = ___glewBindBufferBase;
            uVar5 = param_2->GetNativeBuffer();
            (*pcVar1)(35345, param_1, uVar5);
            CheckGlErrorInternal("glBindBufferBase (GL_UNIFORM_BUFFER)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2117);
            uVar5 = param_2->GetNativeBuffer();
            puVar8 =
                (undefined4*)eastl::vector<unsigned int,
                                           eastl::fixed_vector_allocator<4ul, 24ul, 4ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<unsigned int,
                            eastl::fixed_vector_allocator<4ul, 24ul, 4ul, 0ul, true, eastl::allocator>>*)&field_2280,
                    (ulong)param_1);
            *puVar8 = uVar5;
        }
    }

    // 0x100c17a40, 320 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetInputAssemblerState(InputAssemblerState const*)
    void ImmediateRenderContext::SetInputAssemblerState(InputAssemblerState* param_1) {
        int iVar1;
        char cVar2;
        int iVar3;
        uint uVar4;
        array<unsigned int, 8ul>* this_00;
        uint* puVar5;
        VertexDeclaration* pVVar6;
        uint* in_RCX;

        cVar2 = IsContextThread(this);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1128, (char*)0);
        }
        if (param_1 == (InputAssemblerState*)0) {
            SetDefaultVAO(this);
        } else {
            cVar2 = param_1->ShouldUseVAO();
            if (cVar2 == '\0') {
                cVar2 = param_1->IsValidCachedState();
                if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("pIAState->IsValidCachedState()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL.cpp",
                              1154, (char*)0);
                }
                SetDefaultVAO(this);
                uVar4 = param_1->GetCurrentIndex();
                SetIndexBuffer((uint)this, uVar4);
                param_1->GetGLVertexBuffers();
                this_00 = (array<unsigned int, 8ul>*)param_1->GetGLVertexBuffers();
                puVar5 = (uint*)std::array<unsigned int, 8ul>::data(this_00);
                SetVertexBuffers((uint)this, (uint*)8, puVar5, in_RCX);
                pVVar6 = (VertexDeclaration*)param_1->end();
                SetVertexDeclaration(this, pVVar6);
            } else {
                iVar1 = field_3140;
                iVar3 = param_1->GetNativeVAO();
                if (iVar1 != iVar3) {
                    param_1->BindVAO(this);
                    cVar2 = param_1->IsValidCachedState();
                    if (cVar2 == '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("pIAState->IsValidCachedState()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "context/OGL/ImmediateRenderContext_OGL.cpp",
                                  1139, (char*)0);
                    }
                }
            }
        }
    }

    // 0x100c17b80, 1264 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetRenderPipelineState(RenderPipelineState const*)
    void ImmediateRenderContext::SetRenderPipelineState(RenderPipelineState* param_1) {
        char cVar1;
        BlendState* pBVar2;
        DepthStencilState* pDVar3;
        RasteriserState* pRVar4;
        ShaderProgram* pSVar5;
        fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>* pfVar6;
        undefined8 uVar7;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* pvVar8;
        undefined8 uVar9;
        Layout* pLVar10;
        uint* puVar11;
        uint* puVar12;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* pvVar13;
        long lVar14;
        undefined8* puVar15;
        undefined8* puVar16;
        char* in_RCX;
        undefined8 extraout_RDX;
        undefined8 in_R8;
        undefined1 auVar17[16];
        RenderPipelineState local_488;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1169, (char*)0);
        }
        new (&local_488) RenderPipelineState();
        if (param_1 == (RenderPipelineState*)0) {
            param_1 = (RenderPipelineState*)&local_488;
        }
        pBVar2 = (BlendState*)param_1->HeapBeginPtr();
        SetBlendState(this, pBVar2);
        pDVar3 = (DepthStencilState*)param_1->end();
        SetDepthStencilState(this, pDVar3);
        pRVar4 = (RasteriserState*)param_1->data();
        SetRasteriserState(this, pRVar4);
        pSVar5 = (ShaderProgram*)param_1->size();
        SetShaders(this, pSVar5);
        pfVar6 = (fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>*)param_1->GetDefaultValue();
        cVar1 = eastl::fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>::has_overflowed(pfVar6);
        if (cVar1 != '\0') {
            uVar7 = logger::default_logger();
            pvVar8 =
                (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)param_1->GetDefaultValue();
            uVar9 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(pvVar8);
            in_RCX = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                     "ImmediateRenderContext_OGL.cpp";
            pSVar5 = (ShaderProgram*)0;
            in_R8 = 1184;
            logger::Logger::Log(uVar7, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                1184, "RPState VSConstBuffers has overflowed (%zu), consider increasing size", uVar9);
        }
        pLVar10 = (Layout*)param_1->GetDefaultValue();
        puVar11 = (uint*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar10);
        puVar12 = (uint*)pLVar10->end();
        for (; puVar11 != puVar12; puVar11 = puVar11 + 4) {
            pSVar5 = (ShaderProgram*)(ulong)*puVar11;
            SetVSShaderConstBuffer(this, *puVar11, *(ShaderConstBuffer**)(puVar11 + 2));
        }
        pfVar6 = (fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>*)param_1->GetContentType();
        cVar1 = eastl::fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>::has_overflowed(pfVar6);
        if (cVar1 != '\0') {
            uVar7 = logger::default_logger();
            pvVar8 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)param_1->GetContentType();
            uVar9 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(pvVar8);
            in_RCX = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                     "ImmediateRenderContext_OGL.cpp";
            pSVar5 = (ShaderProgram*)0;
            in_R8 = 1191;
            logger::Logger::Log(uVar7, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                1191, "RPState VSStorageBuffers has overflowed (%zu), consider increasing size", uVar9);
        }
        pLVar10 = (Layout*)param_1->GetContentType();
        puVar11 = (uint*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar10);
        puVar12 = (uint*)pLVar10->end();
        for (; puVar11 != puVar12; puVar11 = puVar11 + 4) {
            pSVar5 = (ShaderProgram*)(ulong)*puVar11;
            SetShaderStorageBuffer(this, *puVar11, *(ShaderStorageBuffer**)(puVar11 + 2));
        }
        pfVar6 = (fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>*)param_1->GetMapSquarePointLights();
        cVar1 = eastl::fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>::has_overflowed(pfVar6);
        if (cVar1 != '\0') {
            uVar7 = logger::default_logger();
            pvVar13 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                              eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                          param_1->GetMapSquarePointLights();
            uVar9 = eastl::vector<
                Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(pvVar13);
            in_RCX = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                     "ImmediateRenderContext_OGL.cpp";
            pSVar5 = (ShaderProgram*)0;
            in_R8 = 1198;
            logger::Logger::Log(uVar7, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                1198, "RPState VSTextureSamplerPairs has overflowed (%zu), consider increasing size",
                                uVar9);
        }
        pLVar10 = (Layout*)param_1->GetMapSquarePointLights();
        lVar14 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(pLVar10);
        auVar17 = pLVar10->end();
        uVar7 = auVar17._8_8_;
        for (; lVar14 != auVar17._0_8_; lVar14 = lVar14 + 32) {
            if (*(long*)(lVar14 + 8) != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("!texSamplerPair.m_pSamplerState",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          1202, (char*)0);
            }
            SetVSTextureSamplerPair((uint)pLVar10, (Texture*)pSVar5, (uint)uVar7, (SamplerState*)in_RCX,
                                    SUB81(in_R8, 0));
            uVar7 = extraout_RDX;
        }
        pfVar6 = (fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>*)param_1->GetModel();
        cVar1 = eastl::fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>::has_overflowed(pfVar6);
        if (cVar1 != '\0') {
            uVar7 = logger::default_logger();
            pvVar8 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)param_1->GetModel();
            uVar9 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(pvVar8);
            logger::Logger::Log(uVar7, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                1216, "RPState PSConstBuffers has overflowed (%zu), consider increasing size", uVar9);
        }
        pLVar10 = (Layout*)param_1->GetModel();
        puVar11 = (uint*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar10);
        puVar12 = (uint*)pLVar10->end();
        for (; puVar11 != puVar12; puVar11 = puVar11 + 4) {
            SetPSShaderConstBuffer(this, *puVar11, *(ShaderConstBuffer**)(puVar11 + 2));
        }
        pfVar6 = (fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>*)param_1->GetPSStorageBuffers();
        cVar1 = eastl::fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>::has_overflowed(pfVar6);
        if (cVar1 != '\0') {
            uVar7 = logger::default_logger();
            pvVar8 =
                (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)param_1->GetPSStorageBuffers();
            uVar9 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(pvVar8);
            logger::Logger::Log(uVar7, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                1223, "RPState PSStorageBuffers has overflowed (%zu), consider increasing size", uVar9);
        }
        pLVar10 = (Layout*)param_1->GetPSStorageBuffers();
        puVar11 = (uint*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar10);
        puVar12 = (uint*)pLVar10->end();
        for (; puVar11 != puVar12; puVar11 = puVar11 + 4) {
            SetShaderStorageBuffer(this, *puVar11, *(ShaderStorageBuffer**)(puVar11 + 2));
        }
        pfVar6 = (fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>*)param_1->GetPSTextureSamplerPairs();
        cVar1 = eastl::fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>::has_overflowed(pfVar6);
        if (cVar1 != '\0') {
            uVar7 = logger::default_logger();
            pvVar13 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                              eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                          param_1->GetPSTextureSamplerPairs();
            uVar9 = eastl::vector<
                Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(pvVar13);
            logger::Logger::Log(uVar7, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                1230, "RPState PSTextureSamplerPairs has overflowed (%zu), consider increasing size",
                                uVar9);
        }
        pLVar10 = (Layout*)param_1->GetPSTextureSamplerPairs();
        puVar15 = (undefined8*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar10);
        puVar16 = (undefined8*)pLVar10->end();
        for (; puVar15 != puVar16; puVar15 = puVar15 + 4) {
            SetPSTextureSamplerPair(this, *(uint*)(puVar15 + 2), (Texture*)*puVar15, *(int*)((long)puVar15 + 20),
                                    (SamplerState*)puVar15[1], *(bool*)(puVar15 + 3));
        }
        local_488.~RenderPipelineState();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c18070, 304 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetOutputMergerState(OutputMergerState const*)
    void ImmediateRenderContext::SetOutputMergerState(OutputMergerState* param_1) {
        char cVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        vector* pvVar6;
        long lVar7;
        Viewport* pVVar8;
        ulong uVar9;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_00;
        vector<math::Rect<unsigned int>, eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true, eastl::allocator>>*
            this_01;
        Minimap* this_02;
        RenderTargets* pRVar10;
        OutputMergerState* pOVar11;

        pOVar11 = param_1;
        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1293, (char*)0);
        }
        if (param_1 != (OutputMergerState*)0) {
            pvVar6 = param_1->SSOBeginPtr(pOVar11);
            lVar7 = pvVar6->size();
            if (lVar7 != 0) {
                pvVar6 = param_1->SSOBeginPtr(pOVar11);
                pVVar8 = (Viewport*)pvVar6->HeapBeginPtr();
                pvVar6 = param_1->SSOBeginPtr(pOVar11);
                uVar9 = pvVar6->size();
                SetViewports(this, pVVar8, uVar9);
            }
            this_00 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                          param_1->GetDevCredentialsOutputDirectory();
            lVar7 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_00);
            if (lVar7 == 0) {
                iVar2 = 0;
                iVar3 = 0;
                iVar4 = 0;
                iVar5 = 0;
            } else {
                this_01 = (vector<math::Rect<unsigned int>,
                                  eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true, eastl::allocator>>*)
                              param_1->GetDevCredentialsOutputDirectory();
                this_02 = (Minimap*)eastl::vector<
                    math::Rect<unsigned int>,
                    eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true, eastl::allocator>>::front(this_01);
                iVar2 = this_02->GetX();
                iVar3 = this_02->GetZ();
                iVar4 = this_02->GetPos();
                iVar5 = this_02->GetLevel();
            }
            SetScissorRectangle(this, lVar7 != 0, iVar2, iVar3, iVar4, iVar5);
            pRVar10 = (RenderTargets*)param_1->GetRenderTargets();
            SetRenderTargets(this, pRVar10);
        }
    }

    // 0x100c18320, 752 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetComputePipelineState(ComputePipelineState const*)
    void ImmediateRenderContext::SetComputePipelineState(ComputePipelineState* param_1) {
        char cVar1;
        ShaderProgram* pSVar2;
        vector* pvVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        uint* puVar6;
        uint* puVar7;
        fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>* pfVar8;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        Layout* pLVar9;
        undefined8* puVar10;
        undefined8* puVar11;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_01;
        ComputePipelineState local_2b8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1245, (char*)0);
        }
        new (&local_2b8) ComputePipelineState();
        if (param_1 == (ComputePipelineState*)0) {
            param_1 = (ComputePipelineState*)&local_2b8;
        }
        pSVar2 = (ShaderProgram*)param_1->GetShaderProgram();
        SetShaders(this, pSVar2);
        pvVar3 = param_1->SSOBeginPtr(pSVar2);
        cVar1 = pvVar3->has_overflowed();
        if (cVar1 != '\0') {
            uVar4 = logger::default_logger();
            pvVar3 = param_1->SSOBeginPtr(pSVar2);
            uVar5 = pvVar3->size();
            pSVar2 = (ShaderProgram*)0;
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                1256, "CPState CSConstBuffers has overflowed (%zu), consider increasing size", uVar5);
        }
        pvVar3 = param_1->SSOBeginPtr(pSVar2);
        puVar6 = (uint*)pvVar3->HeapBeginPtr();
        puVar7 = (uint*)pvVar3->end();
        for (; puVar6 != puVar7; puVar6 = puVar6 + 4) {
            SetCSShaderConstBuffer(this, *puVar6, *(ShaderConstBuffer**)(puVar6 + 2));
        }
        pfVar8 = (fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>*)param_1->GetJointIDMap();
        cVar1 = eastl::fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>::has_overflowed(pfVar8);
        if (cVar1 != '\0') {
            uVar4 = logger::default_logger();
            this_00 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                              eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                          param_1->GetJointIDMap();
            uVar5 = eastl::vector<
                Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(this_00);
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                1263, "CPState CSTextureSamplerPairs has overflowed (%zu), consider increasing size",
                                uVar5);
        }
        pLVar9 = (Layout*)param_1->GetJointIDMap();
        puVar10 = (undefined8*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar9);
        puVar11 = (undefined8*)pLVar9->end();
        for (; puVar10 != puVar11; puVar10 = puVar10 + 4) {
            if (puVar10[1] != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("!texSamplerPair.m_pSamplerState",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          1267, (char*)0);
            }
            SetCSTextureSamplerPair(this, *(uint*)(puVar10 + 2), (Texture*)*puVar10, *(int*)((long)puVar10 + 20),
                                    (SamplerState*)puVar10[1], *(bool*)(puVar10 + 3));
        }
        pfVar8 = (fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>*)param_1->GetDynamicChildren();
        cVar1 = eastl::fixed_vector<graphics::GraphNode*, 8ul, true, eastl::allocator>::has_overflowed(pfVar8);
        if (cVar1 != '\0') {
            uVar4 = logger::default_logger();
            this_01 =
                (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)param_1->GetDynamicChildren();
            uVar5 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_01);
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                1278, "CPState CSTextureImages has overflowed (%zu), consider increasing size", uVar5);
        }
        pLVar9 = (Layout*)param_1->GetDynamicChildren();
        puVar10 = (undefined8*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar9);
        puVar11 = (undefined8*)pLVar9->end();
        for (; puVar10 != puVar11; puVar10 = puVar10 + 2) {
            SetCSTextureImage(this, *(undefined4*)(puVar10 + 1), *puVar10, *(undefined4*)((long)puVar10 + 12));
        }
        local_2b8.~ComputePipelineState();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c186b0, 192 bytes, placed by __FILE__ string
    // ImmediateRenderContext::DrawPrimitives(PrimitiveType, int, int)
    void ImmediateRenderContext::DrawPrimitives(undefined4 param_2, undefined4 param_3, undefined4 param_4) {
        char cVar1;

        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1539, (char*)0);
        }
        cVar1 = VerifyVertexCount(param_2, param_4);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("VerifyVertexCount(primType, vertexCount)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1540, (char*)0);
        }
        ValidateState(this);
        _glDrawArrays(param_2, param_3, param_4);
        CheckGlErrorInternal("glDrawArrays",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             1544);
        (&field_44)->AddDrawCall();
        (&field_44, param_2, param_4)->AddPrimitives();
    }

    // 0x100c187f0, 288 bytes, placed by __FILE__ string
    // ImmediateRenderContext::DrawMultiPrimitives(PrimitiveType, unsigned int, int const*, int const*)
    void ImmediateRenderContext::DrawMultiPrimitives(undefined4 param_2, uint param_3, undefined8 param_4,
                                                     long param_5) {
        ulong uVar2;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1552, (char*)0);
        }
        ValidateState(this);
        if (param_3 != 0) {
            uVar2 = 0;
            do {
                if (*(int*)(param_5 + uVar2 * 4) < 3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("vertexCount[i] >= 3",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL.cpp",
                              1558, (char*)0);
                }
                uVar2 = uVar2 + 1;
            } while (param_3 != uVar2);
        }
        (*___glewMultiDrawArrays)(param_2, param_4, param_5, param_3);
        CheckGlErrorInternal("glMultiDrawArrays",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             1568);
        (&field_44)->AddDrawCall();
        if (param_3 != 0) {
            uVar2 = 0;
            do {
                (&field_44, param_2, *(undefined4*)(param_5 + uVar2 * 4))->AddPrimitives();
                uVar2 = uVar2 + 1;
            } while (param_3 != uVar2);
        }
    }

    // 0x100c189d0, 224 bytes, placed by __FILE__ string
    // ImmediateRenderContext::DrawIndexedPrimitives(PrimitiveType, unsigned int, unsigned int, IndexType)
    void ImmediateRenderContext::DrawIndexedPrimitives(undefined4 param_2, uint param_3, ulong param_4,
                                                       undefined4 param_5) {
        uint uVar2;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1588, (char*)0);
        }
        ValidateState(this);
        if (param_3 < 3) {
            /* WARNING: Subroutine does not return */
            LogAssert("indexCount >= 3",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1591, (char*)0);
        }
        uVar2 = GetIndexTypeSize(param_5);
        _glDrawElements(param_2, param_3, param_5, (ulong)uVar2 * (param_4 & 4294967295));
        CheckGlErrorInternal("glDrawElements",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             1618);
        (&field_44)->AddDrawCall();
        (&field_44, param_2, param_3)->AddPrimitives();
    }

    // 0x100c18b80, 288 bytes, placed by __FILE__ string
    // ImmediateRenderContext::DrawMultiIndexedPrimitives(PrimitiveType, unsigned int, int const*, void const* const*, IndexType)
    void ImmediateRenderContext::DrawMultiIndexedPrimitives(undefined4 param_2, uint param_3, long param_4,
                                                            undefined8 param_5, undefined4 param_6) {
        ulong uVar2;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1626, (char*)0);
        }
        ValidateState(this);
        if (param_3 != 0) {
            uVar2 = 0;
            do {
                if (*(int*)(param_4 + uVar2 * 4) < 3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("indexCount[i] >= 3",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL.cpp",
                              1632, (char*)0);
                }
                uVar2 = uVar2 + 1;
            } while (param_3 != uVar2);
        }
        (*___glewMultiDrawElements)(param_2, param_4, param_6, param_5, param_3);
        CheckGlErrorInternal("glMultiDrawElements",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             1655);
        (&field_44)->AddDrawCall();
        if (param_3 != 0) {
            uVar2 = 0;
            do {
                (&field_44, param_2, *(undefined4*)(param_4 + uVar2 * 4))->AddPrimitives();
                uVar2 = uVar2 + 1;
            } while (param_3 != uVar2);
        }
    }

    // 0x100c18d10, 352 bytes, placed by __FILE__ string
    // ImmediateRenderContext::DispatchCompute(unsigned int, unsigned int, unsigned int)
    void ImmediateRenderContext::DispatchCompute(uint param_1, uint param_2, uint param_3) {
        MapArea* this_00;
        long lVar2;
        undefined8 uVar3;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1675, (char*)0);
        }
        this_00 = (MapArea*)((ImmediateRenderContext*)this)->Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 189) == '\0') {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                1696,
                                "ImmediateRenderContext::DispatchCompute: Compute shaders are unsupported on this "
                                "device. Skipping dispatch.");
        } else {
            if ((param_1 == 0) || (*(uint*)(lVar2 + 192) < param_1)) {
                /* WARNING: Subroutine does not return */
                LogAssert("groupCountX > 0u && groupCountX <= (uint) caps.m_ComputeMaxWorkGroupCountX",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          1681, (char*)0);
            }
            if ((param_2 == 0) || (*(uint*)(lVar2 + 196) < param_2)) {
                /* WARNING: Subroutine does not return */
                LogAssert("groupCountY > 0u && groupCountY <= (uint) caps.m_ComputeMaxWorkGroupCountY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          1682, (char*)0);
            }
            if ((param_3 == 0) || (*(uint*)(lVar2 + 200) < param_3)) {
                /* WARNING: Subroutine does not return */
                LogAssert("groupCountZ > 0u && groupCountZ <= (uint) caps.m_ComputeMaxWorkGroupCountZ",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          1683, (char*)0);
            }
            ValidateState(this);
            (*___glewDispatchCompute)(param_1, param_2, param_3);
            CheckGlErrorInternal("glDispatchCompute",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 1692);
        }
        (&field_44)->AddDispatchCall();
    }

    // 0x100c18e70, 16 bytes, placed by class name and neighbouring functions
    // ImmediateRenderContext::BackendBegin()
    void ImmediateRenderContext::BackendBegin() {}

    // 0x100c18f00, 144 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetDepthStencilState(DepthStencilState const*)
    void ImmediateRenderContext::SetDepthStencilState(DepthStencilState* param_1) {
        char cVar1;
        Desc* pDVar2;

        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1086, (char*)0);
        }
        if (param_1 == (DepthStencilState*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDepthStencilState",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1087, (char*)0);
        }
        pDVar2 = (Desc*)param_1->second();
        cVar1 = DepthStencilState::Desc::operator!=((Desc*)&field_2416, pDVar2);
        if (cVar1 != '\0') {
            SetDepthStencilStateDirect(this, pDVar2);
        }
    }

    // 0x100c18f90, 144 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetRasteriserState(RasteriserState const*)
    void ImmediateRenderContext::SetRasteriserState(RasteriserState* param_1) {
        char cVar1;
        Desc* pDVar2;

        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1100, (char*)0);
        }
        if (param_1 == (RasteriserState*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pRasterState",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1101, (char*)0);
        }
        pDVar2 = (Desc*)param_1->second();
        cVar1 = RasteriserState::Desc::operator!=((Desc*)&field_2468, pDVar2);
        if (cVar1 != '\0') {
            SetRasteriserStateDirect(this, pDVar2);
        }
    }

    // 0x100c1e910, 480 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetViewports(Viewport const*, unsigned long)
    void ImmediateRenderContext::SetViewports(Viewport* param_1, ulong param_2) {
        int iVar1;
        int* piVar3;
        ulong uVar4;
        ulong uVar5;
        bool bVar6;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      421, (char*)0);
        }
        if ((((field_0 == false) || (param_1 == (Viewport*)0)) || (param_2 == 0)) || (2 < param_2)) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_InsideBeginEnd && pViewports && (numViewports > 0) && (numViewports <= MAX_RENDER_TARGET_TEXTURES)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                "ImmediateRenderContext_OGL.cpp",
                422, (char*)0);
        }
        if (param_2 != 0) {
            uVar4 = 0;
            uVar5 = 1;
            do {
                iVar1 = (&param_1->field_0)[uVar4 * 6];
                piVar3 = (int*)std::array<Viewport, 2ul>::operator[]((array<Viewport, 2ul>*)&field_3072, uVar4);
                if (((iVar1 != *piVar3) || ((&param_1->field_4)[uVar4 * 6] != piVar3[1])) ||
                    (((&param_1->field_8)[uVar4 * 6] != piVar3[2] || ((&param_1->field_12)[uVar4 * 6] != piVar3[3])))) {
                    _glViewport(iVar1, (&param_1->field_4)[uVar4 * 6], (&param_1->field_8)[uVar4 * 6],
                                (&param_1->field_12)[uVar4 * 6]);
                    CheckGlErrorInternal("glViewport",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         435);
                    *piVar3 = (&param_1->field_0)[uVar4 * 6];
                    piVar3[1] = (&param_1->field_4)[uVar4 * 6];
                    piVar3[2] = (&param_1->field_8)[uVar4 * 6];
                    piVar3[3] = (&param_1->field_12)[uVar4 * 6];
                }
                if (((&param_1->field_16)[uVar4 * 6] != (float)piVar3[4]) ||
                    ((&param_1->field_20)[uVar4 * 6] != (float)piVar3[5])) {
                    _glDepthRange((double)(&param_1->field_16)[uVar4 * 6], (double)(&param_1->field_20)[uVar4 * 6]);
                    CheckGlErrorInternal("glDepthRange",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         448);
                    piVar3[4] = (int)(&param_1->field_16)[uVar4 * 6];
                    piVar3[5] = (int)(&param_1->field_20)[uVar4 * 6];
                }
                bVar6 = uVar5 < param_2;
                uVar4 = uVar5;
                uVar5 = (ulong)((int)uVar5 + 1);
            } while (bVar6);
        }
    }

    // 0x100c1eda0, 384 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetScissorRectangle(bool, int, int, int, int)
    void ImmediateRenderContext::SetScissorRectangle(bool param_1, int param_2, int param_3, int param_4, int param_5) {
        char cVar1;
        int iVar2;
        char* pcVar3;
        GridRect local_48;

        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      461, (char*)0);
        }
        if (field_0 == false) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      462, (char*)0);
        }
        if ((param_1) && ((param_4 < 0 || (param_5 < 0)))) {
            /* WARNING: Subroutine does not return */
            LogAssert("!enabled || (width >= 0 && height >= 0)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      463, (char*)0);
        }
        if (field_3120 != param_1) {
            if (param_1) {
                _glEnable();
                pcVar3 = "glEnable";
                iVar2 = 471;
            } else {
                _glDisable(3089);
                pcVar3 = "glDisable";
                iVar2 = 475;
            }
            CheckGlErrorInternal(pcVar3,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 iVar2);
            field_3120 = param_1;
        }
        if (param_1) {
            new (&local_48) oldscape::dash3d::GridRect(param_2, param_3, param_4, param_5);
            cVar1 = math::Rect<int>::operator!=((Rect<int>*)&field_3124, (Rect*)&local_48);
            iVar2 = param_3;
            if (cVar1 != '\0') {
                _glScissor(param_2, param_3, param_4, param_5);
                CheckGlErrorInternal("glScissor",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     487);
                new (&field_3124, param_2, iVar2, param_4, param_5) oldscape::dash3d::GridRect();
            }
        }
    }

    // 0x100c1fc40, 256 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetShaders(ShaderProgram const*)
    void ImmediateRenderContext::SetShaders(ShaderProgram* param_1) {
        int iVar2;
        float fVar3;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      589, (char*)0);
        }
        if (param_1 == (ShaderProgram*)0) {
            (*___glewUseProgram)(0);
            CheckGlErrorInternal("glUseProgram",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 626);
            field_2220 = 0;
        } else {
            iVar2 = param_1->GetNativeShaderProgram();
            if (iVar2 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("pShaderProgram->GetNativeShaderProgram()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          593, (char*)0);
            }
            fVar3 = (float)FrameTime::GetSecondsSinceProgramStart();
            param_1->SetLastUsedTimeSeconds(fVar3);
            iVar2 = param_1->GetNativeShaderProgram();
            if (field_2220 != iVar2) {
                (*___glewUseProgram)(iVar2);
                CheckGlErrorInternal("glUseProgram",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     619);
                field_2220 = iVar2;
            }
        }
        field_136 = param_1;
    }

    // 0x100c20480, 224 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetIndexBuffer(IndexBuffer const*, unsigned int)
    void ImmediateRenderContext::SetIndexBuffer(IndexBuffer* param_1, uint param_2) {
        uint uVar3;
        undefined4 in_register_00000034;
        Material* this;

        this = (Material*)CONCAT44(in_register_00000034, param_2);
        if (IsContextThread((ImmediateRenderContext*)param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      754, (char*)0);
        }
        if ((char)param_1->field_0 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      755, (char*)0);
        }
        CheckDefaultVAOBound((ImmediateRenderContext*)param_1);
        if (this == (Material*)0) {
            uVar3 = 0;
        } else {
            if (GetNativeBuffer() == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("pIndexBuffer->GetNativeBuffer()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          761, (char*)0);
            }
            if ((GetNormalEmissiveMapID() & 8) != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("(pIndexBuffer->GetCreationFlags() & DISABLE_MARK_AS_DEAD) == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          764, (char*)0);
            }
            uVar3 = GetNativeBuffer();
        }
        SetIndexBuffer((uint)param_1, uVar3);
    }

    // 0x100c20780, 1008 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetVertexDeclaration(VertexDeclaration const*)
    void ImmediateRenderContext::SetVertexDeclaration(VertexDeclaration* param_1) {
        bool bVar1;
        code* pcVar2;
        ImmediateRenderContext* pIVar3;
        int iVar4;
        int iVar6;
        uint uVar7;
        undefined4 uVar8;
        Array<VertexElementDesc, eastl::allocator>* this_01;
        uint* puVar9;
        int* piVar10;
        undefined4* puVar11;
        long lVar12;
        undefined1* this_02;
        ulong uVar13;
        MapArea* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        undefined8 uVar14;
        Array<VertexElementDesc, eastl::allocator>* this_05;
        int iVar15;
        ulong uVar16;
        GLVertexElementFormat local_80;
        Array<unsigned int, eastl::allocator>* local_70;
        ImmediateRenderContext* local_68;
        int local_5c;
        undefined4 local_58;
        uint local_54;
        undefined4 local_50;
        int local_4c;
        code* local_48;
        uint local_3c;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      774, (char*)0);
        }
        if ((field_0 == false) || ((Mixer*)param_1 == (Mixer*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_InsideBeginEnd && pVertexDecl",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      775, (char*)0);
        }
        SetDefaultVAO(this);
        this_01 = (Array<VertexElementDesc, eastl::allocator>*)((Mixer*)param_1)->second();
        local_70 = (Array<unsigned int, eastl::allocator>*)((Mixer*)param_1)->GetDefaultValue();
        local_4c = param_1->GetStreamCountLastMix();
        if (local_4c == 1) {
            puVar9 = (uint*)Array<VertexElementDesc, eastl::allocator>::operator[](this_01, 0);
            piVar10 =
                (int*)std::array<unsigned int, 8ul>::operator[]((array<unsigned int, 8ul>*)&field_2240, (ulong)*puVar9);
            pcVar2 = ___glewBindBuffer;
            if (*piVar10 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_StateCache.m_GLVertexBuffers[vertexElemDescs[0].m_Stream] > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          795, (char*)0);
            }
            puVar9 = (uint*)Array<VertexElementDesc, eastl::allocator>::operator[](this_01, 0);
            puVar11 = (undefined4*)std::array<unsigned int, 8ul>::operator[]((array<unsigned int, 8ul>*)&field_2240,
                                                                             (ulong)*puVar9);
            (*pcVar2)(34962, *puVar11);
            CheckGlErrorInternal("glBindBuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 796);
        }
        this_05 = this_01;
        local_68 = this;
        lVar12 = this_01->end();
        if (lVar12 != 0) {
            this_02 = &local_68->field_2240;
            local_3c = 4294967295;
            uVar13 = 0;
            uVar16 = 1;
            do {
                iVar15 = (int)uVar16 + -1;
                puVar9 = (uint*)Array<VertexElementDesc, eastl::allocator>::operator[](this_01, uVar13);
                if (puVar9[6] == 15) {
                    (*___glewDisableVertexAttribArray)(iVar15);
                    CheckGlErrorInternal("glDisableVertexAttribArray",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         832);
                } else {
                    local_5c = iVar15;
                    if ((1 < local_4c) && (*puVar9 != local_3c)) {
                        piVar10 = (int*)std::array<unsigned int, 8ul>::operator[]((array<unsigned int, 8ul>*)this_02,
                                                                                  (ulong)*puVar9);
                        if (*piVar10 == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_StateCache.m_GLVertexBuffers[elemDesc.m_Stream] > 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                      812, (char*)0);
                        }
                        local_48 = ___glewBindBuffer;
                        puVar11 = (undefined4*)std::array<unsigned int, 8ul>::operator[](
                            (array<unsigned int, 8ul>*)this_02, (ulong)*puVar9);
                        (*local_48)(34962, *puVar11);
                        CheckGlErrorInternal("glBindBuffer",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                             813);
                        local_3c = *puVar9;
                    }
                    new (&local_80) GLVertexElementFormat(puVar9[4]);
                    iVar6 = ((Mixer*)param_1)->GetVertexStride(*puVar9);
                    piVar10 = (int*)Array<unsigned int, eastl::allocator>::operator[](local_70, uVar13);
                    iVar15 = *piVar10;
                    uVar7 = GetShaderInputElementComponentSize(puVar9[4]);
                    iVar4 = local_5c;
                    if ((uint)(iVar6 + iVar15) % uVar7 != 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("(pVertexDecl->GetVertexStride(elemDesc.m_Stream) + vertexElemByteOffsets[iElem]) % "
                                  "GetShaderInputElementComponentSize(elemDesc.m_Format) == 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "context/OGL/ImmediateRenderContext_OGL.cpp",
                                  819, "Attribute %s not aligned to multiple of its size", *(undefined8*)(puVar9 + 2));
                    }
                    (*___glewEnableVertexAttribArray)(local_5c);
                    CheckGlErrorInternal("glEnableVertexAttribArray",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         821);
                    local_48 = ___glewVertexAttribPointer;
                    local_58 = local_80.field_0._0_4_;
                    local_50 = local_80.field_0._4_4_;
                    local_54 = (uint)(byte)puVar9[5];
                    uVar8 = ((Mixer*)param_1)->GetVertexStride(*puVar9);
                    puVar11 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](local_70, uVar13);
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
                uVar16 = (ulong)((int)uVar16 + 1);
            } while (bVar1);
        }
        this_03 = (MapArea*)this_05->Instance();
        lVar12 = this_03->GetOrigin();
        uVar7 = *(uint*)(lVar12 + 100);
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
        pIVar3 = local_68;
        *(undefined8*)&local_68->field_2224 = 0;
        this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)((Mixer*)param_1)->second();
        uVar14 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
        *(undefined8*)&pIVar3->field_2232 = uVar14;
    }

    // 0x100c22e30, 80 bytes, placed by __FILE__ string
    // ImmediateRenderContext::MemoryBarrier(unsigned int)
    void ImmediateRenderContext::MemoryBarrier(uint param_1) {
        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1704, (char*)0);
        }
        (*___glewMemoryBarrier)(param_1);
    }

    // 0x100c23510, 1072 bytes, placed by __FILE__ string
    // ImmediateRenderContext::CopyColourTargetData(Texture const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, CubeFace)
    void ImmediateRenderContext::CopyColourTargetData(SceneViewData* param_1, undefined8 param_3_00, undefined4 param_3,
                                                      uint param_4, uint param_5, undefined4 param_6,
                                                      undefined4 param_7, int param_8, int param_9, int param_11) {
        code* pcVar1;
        char cVar3;
        int iVar4;
        int iVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        undefined4 uVar8;
        undefined4 uVar9;
        uint* puVar10;
        long lVar11;
        Texture* this_00;
        undefined8 uVar12;
        undefined8* puVar13;
        mutex* pmVar14;
        MapArea* pMVar15;
        unique_lock<std::mutex>* this_01;
        Singleton<RenderDevice>* this_02;
        Texture* this_03;
        undefined8 in_stack_ffffffffffffff48;
        undefined4 uVar16;
        ActiveTextureSaveRestore local_68;
        unique_lock<std::mutex> local_58[16];

        uVar16 = (undefined4)((ulong)in_stack_ffffffffffffff48 >> 32);
        cVar3 = IsContextThread(this);
        if (cVar3 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1721, (char*)0);
        }
        if (param_1 == (SceneViewData*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDstTargetTexture != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1722, (char*)0);
        }
        if (m_pStateCache == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_StateCache.m_pRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1723, (char*)0);
        }
        if (param_1 == (SceneViewData*)0) {
            return;
        }
        cVar3 = param_1->IsCreated();
        if (cVar3 == '\0') {
            uVar12 = logger::default_logger();
            logger::Logger::Log(uVar12, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                1773, "%s called on non-existent texture", "CopyColourTargetData");
            return;
        }
        puVar10 = (uint*)param_1->second();
        if (*puVar10 < param_4 + param_8) {
            /* WARNING: Subroutine does not return */
            LogAssert("(dstX + width) <= pDstTargetTexture->GetDesc().m_Width",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1729, (char*)0);
        }
        lVar11 = param_1->second();
        if (*(uint*)(lVar11 + 4) < param_9 + param_5) {
            /* WARNING: Subroutine does not return */
            LogAssert("(dstY + height) <= pDstTargetTexture->GetDesc().m_Height",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1730, (char*)0);
        }
        this_00 = (Texture*)m_pStateCache->GetColourTargetTextures();
        cVar3 = this_00->empty();
        if (cVar3 == '\0') {
            this_00 = (Texture*)m_pStateCache->GetColourTargetTextures();
            puVar13 = (undefined8*)eastl::
                vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                        this_00,
                    0);
            this_03 = (Texture*)*puVar13;
        } else {
            this_03 = (Texture*)0;
        }
        cVar3 = this_00->UseGLWriteMutex();
        if (cVar3 == '\0') {
            this_01 = local_58;
            std::unique_lock<std::mutex>::unique_lock(this_01);
        } else {
            pmVar14 = (mutex*)param_1->GetRenderTargets();
            this_01 = local_58;
            std::unique_lock<std::mutex>::unique_lock(this_01, pmVar14);
        }
        pMVar15 = (MapArea*)this_01->Instance();
        lVar11 = pMVar15->GetOrigin();
        if ((*(char*)(lVar11 + 333) != '\0') && (this_03 != (Texture*)0)) {
            iVar4 = this_03->GetMaxLineWidth();
            iVar5 = param_1->GetMaxLineWidth();
            if (iVar4 == iVar5) {
                iVar4 = this_03->GetNativeTextureId();
                iVar5 = param_1->GetNativeTextureId();
                if (iVar4 != iVar5) {
                    lVar11 = param_1->second();
                    if ((*(int*)(lVar11 + 16) != 1) || (lVar11 = this_03->second(), *(int*)(lVar11 + 16) != 1)) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("pDstTargetTexture->GetDesc().m_SampleCount == 1 && "
                                  "pSrcColourTargetTex->GetDesc().m_SampleCount == 1",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "context/OGL/ImmediateRenderContext_OGL.cpp",
                                  1745, (char*)0);
                    }
                    lVar11 = this_03->second();
                    iVar4 = *(int*)(lVar11 + 16);
                    lVar11 = param_1->second();
                    pcVar1 = ___glewCopyImageSubData;
                    if (iVar4 != *(int*)(lVar11 + 16)) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("pSrcColourTargetTex->GetDesc().m_SampleCount == "
                                  "pDstTargetTexture->GetDesc().m_SampleCount",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "context/OGL/ImmediateRenderContext_OGL.cpp",
                                  1746, (char*)0);
                    }
                    uVar6 = this_03->GetNativeTextureId();
                    uVar7 = this_03->GetMaxLineWidth();
                    uVar8 = param_1->GetNativeTextureId();
                    uVar9 = param_1->GetMaxLineWidth();
                    (*pcVar1)(uVar6, uVar7, 0, param_6, param_7, 0, CONCAT44(uVar16, uVar8), uVar9, 0,
                              (int)(ulong)param_4, (int)(ulong)param_5, 0, param_8, param_9, 1);
                    CheckGlErrorInternal("glCopyImageSubData",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         1752);
                    goto LAB_100c237eb;
                }
            }
        }
        lVar11 = param_1->second();
        this_02 = (Singleton<RenderDevice>*)(ulong) * (uint*)(lVar11 + 12);
        iVar4 = GetFormatDepthBits();
        if (iVar4 != 0) {
            pMVar15 = (MapArea*)this_02->Instance();
            lVar11 = pMVar15->GetOrigin();
            if (*(char*)(lVar11 + 152) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("GetFormatDepthBits(pDstTargetTexture->GetDesc().m_Format) == 0 || "
                          "RenderDevice::Instance().GetDeviceCaps().m_DepthTextureLoad",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          1757, (char*)0);
            }
        }
        new (&local_68) ActiveTextureSaveRestore(this);
        BindTexture(this, (Texture*)param_1, 0);
        if (param_11 == -1) {
            param_11 = param_1->GetMaxLineWidth();
        }
        _glCopyTexSubImage2D(param_11, param_3, (ulong)param_4, (ulong)param_5 & 4294967295, param_6, param_7,
                             CONCAT44(uVar16, param_8), param_9);
        CheckGlErrorInternal("glCopyTexSubImage2D",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             1768);
        local_68.~ActiveTextureSaveRestore();
    LAB_100c237eb:
        std::unique_lock<std::mutex>::~unique_lock(local_58);
    }

    // 0x100c23c00, 2560 bytes, placed by __FILE__ string
    // ImmediateRenderContext::ResolveColourTargetData(RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)
    void ImmediateRenderContext::ResolveColourTargetData(RenderTargets* param_1, uint param_2, Rect* param_3,
                                                         Rect* param_4) {
        int iVar1;
        uint uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        ulong uVar5;
        code* pcVar6;
        ImmediateRenderContext* pIVar7;
        Rect* pRVar8;
        char cVar9;
        byte bVar10;
        int iVar11;
        undefined4 uVar12;
        undefined4 uVar13;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* pvVar14;
        Texture* pTVar15;
        int* piVar16;
        long lVar17;
        vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar18;
        undefined8* puVar19;
        vector* pvVar20;
        MapArea* this_00;
        undefined4* puVar21;
        undefined8 uVar22;
        RenderTargetResolver* this_01;
        bool bVar23;
        Texture* pTVar24;
        Texture* pTVar25;
        RenderTargets* pRVar26;
        StencilOpDesc* pSVar27;
        char* pcVar28;
        Viewport* this_02;
        bool bVar29;
        bool bVar30;
        undefined1 local_d8[24];
        Viewport local_c0;
        int local_a4;
        Texture* local_a0;
        ulong local_98;
        undefined1 local_90[16];
        undefined1 local_80[24];
        RenderTargets* local_68;
        ImmediateRenderContext* local_60;
        Texture* local_58;
        Texture* local_50;
        Rect* local_48;
        Texture* local_40;
        int local_34;

        cVar9 = IsContextThread(this);
        if (cVar9 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1780, (char*)0);
        }
        if ((param_2 & 1024) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("(resolveMask & STENCIL_BUFFER_BIT) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1781, "Resolving stencil buffers is not currently supported");
        }
        local_98 = (ulong)(param_2 & 16640);
        if ((param_2 & 16640) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("(resolveMask & (COLOR_BUFFER_BIT | DEPTH_BUFFER_BIT)) != 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1782, (char*)0);
        }
        if (m_pStateCache == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_StateCache.m_pRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1783, (char*)0);
        }
        if (param_1 == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDstRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1784, (char*)0);
        }
        pvVar14 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      m_pStateCache->GetColourTargetTextures();
        cVar9 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            pvVar14);
        local_48 = param_4;
        if (cVar9 == '\0') {
            pvVar18 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                          m_pStateCache->GetColourTargetTextures();
            puVar19 = (undefined8*)eastl::
                vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                    pvVar18, 0);
            local_40 = (Texture*)*puVar19;
        } else {
            local_40 = (Texture*)0;
        }
        pTVar15 = (Texture*)m_pStateCache->GetDepthStencilTargetTexture();
        if (((param_2 & 16384) != 0) && ((local_40 == (Texture*)0 || (cVar9 = local_40->IsCreated(), cVar9 == '\0')))) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "(resolveMask & COLOR_BUFFER_BIT) == 0 || (pSrcColourTargetTex && pSrcColourTargetTex->IsCreated())",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                "ImmediateRenderContext_OGL.cpp",
                1792, (char*)0);
        }
        local_60 = this;
        if (((param_2 & 256) != 0) && ((pTVar15 == (Texture*)0 || (cVar9 = pTVar15->IsCreated(), cVar9 == '\0')))) {
            /* WARNING: Subroutine does not return */
            LogAssert("(resolveMask & DEPTH_BUFFER_BIT) == 0 || (pSrcDepthStencilTargetTex && "
                      "pSrcDepthStencilTargetTex->IsCreated())",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1793, (char*)0);
        }
        new (local_90) math::Rect<unsigned int>(param_3);
        pTVar24 = local_40;
        if ((local_40 == (Texture*)0) && (pTVar24 = pTVar15, pTVar15 == (Texture*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "OGL/ImmediateRenderContext_OGL.cpp",
                            1814, (char*)0);
        }
        piVar16 = (int*)pTVar24->second();
        iVar11 = *piVar16;
        lVar17 = pTVar24->second();
        local_34 = *(int*)(lVar17 + 4);
        lVar17 = pTVar24->second();
        local_50 = (Texture*)CONCAT44(local_50._4_4_, *(undefined4*)(lVar17 + 16));
        cVar9 = local_90->Valid();
        if (cVar9 == '\0') {
            new (local_d8) oldscape::dash3d::GridRect(0, 0, iVar11, local_34);
            math::Rect<unsigned int>::operator=((Rect<unsigned int>*)local_90, (Rect*)local_d8);
        }
        local_a4 = iVar11;
        pvVar14 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      param_1->GetColourTargetTextures();
        cVar9 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            pvVar14);
        if (cVar9 == '\0') {
            pvVar18 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                          param_1->GetColourTargetTextures();
            puVar19 = (undefined8*)eastl::
                vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                    pvVar18, 0);
            pTVar24 = (Texture*)*puVar19;
        } else {
            pTVar24 = (Texture*)0;
        }
        local_58 = (Texture*)param_1->GetDepthStencilTargetTexture();
        if (((param_2 & 16384) != 0) && ((pTVar24 == (Texture*)0 || (cVar9 = pTVar24->IsCreated(), cVar9 == '\0')))) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "(resolveMask & COLOR_BUFFER_BIT) == 0 || (pDstColourTargetTex && pDstColourTargetTex->IsCreated())",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                "ImmediateRenderContext_OGL.cpp",
                1828, (char*)0);
        }
        local_68 = param_1;
        if (((param_2 & 256) != 0) && ((local_58 == (Texture*)0 || (cVar9 = local_58->IsCreated(), cVar9 == '\0')))) {
            /* WARNING: Subroutine does not return */
            LogAssert("(resolveMask & DEPTH_BUFFER_BIT) == 0 || (pDstDepthStencilTargetTex && "
                      "pDstDepthStencilTargetTex->IsCreated())",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1829, (char*)0);
        }
        new (local_80) math::Rect<unsigned int>(local_48);
        new (local_d8) Viewport(0, 0, 0, 0, 0.0, 1.0);
        pTVar25 = pTVar24;
        local_a0 = pTVar15;
        if ((pTVar24 == (Texture*)0) && (pTVar25 = local_58, local_58 == (Texture*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "OGL/ImmediateRenderContext_OGL.cpp",
                            1855, (char*)0);
        }
        local_48 = (Rect*)CONCAT44(local_48._4_4_, param_2);
        piVar16 = (int*)pTVar25->second();
        iVar11 = *piVar16;
        lVar17 = pTVar25->second();
        iVar1 = *(int*)(lVar17 + 4);
        lVar17 = pTVar25->second();
        local_80._16_4_ = *(undefined4*)(lVar17 + 16);
        pSVar27 = (StencilOpDesc*)0;
        new ((local_d8 + 24)) oldscape::dash3d::GridRect(0, 0, iVar11, iVar1);
        cVar9 = local_80->Valid();
        if (cVar9 == '\0') {
            pSVar27 = (StencilOpDesc*)(local_d8 + 24);
            math::Rect<unsigned int>::operator=((Rect<unsigned int>*)local_80, (Rect*)pSVar27);
        }
        pRVar26 = local_68;
        if (local_68 != (RenderTargets*)0) {
            pSVar27 = (StencilOpDesc*)(local_d8 + 24);
            cVar9 = StencilOpDesc::operator==((StencilOpDesc*)local_80, pSVar27);
            if (cVar9 != '\0') {
                pRVar26->Invalidate();
            }
        }
        pvVar20 = local_80->SSOBeginPtr(pSVar27);
        uVar2 = *(uint*)pvVar20;
        pcVar28 = (char*)(ulong)uVar2;
        piVar16 = (int*)local_80->y();
        iVar11 = *piVar16;
        piVar16 = (int*)local_80->second();
        iVar1 = *piVar16;
        piVar16 = (int*)local_80->qw();
        new (local_d8) Viewport(uVar2, iVar11, iVar1, *piVar16, 0.0, 1.0);
        pRVar8 = local_48;
        uVar2 = (uint)local_48;
        uVar5 = (ulong)local_48 & 268435456;
        local_48 = (Rect*)CONCAT71(local_48._1_7_, 1 < (uint)local_50);
        piVar16 = (int*)local_80->second();
        iVar11 = *piVar16;
        this_02 = (Viewport*)local_90;
        piVar16 = (int*)this_02->second();
        bVar29 = true;
        if (iVar11 == *piVar16) {
            piVar16 = (int*)local_80->qw();
            iVar11 = *piVar16;
            this_02 = (Viewport*)local_90;
            piVar16 = (int*)this_02->qw();
            bVar29 = iVar11 != *piVar16;
        }
        pTVar15 = local_a0;
        if ((((ulong)pRVar8 & 1073741824) != 0) ||
            ((((bVar29 && (((ulong)pRVar8 & 256) != 0)) || (local_60->m_gLCoreProfileVerMajor < 3)) ||
              ((int)local_60->m_gLCoreProfileVerMinor < 0)))) {
            bVar30 = false;
        } else {
            if ((uVar5 == 0 & (byte)local_48) != 0) {
                this_02 = (Viewport*)(local_d8 + 24);
                Viewport::Viewport(this_02, 0, 0, local_a4, local_34, 0.0, 1.0);
                pcVar28 = local_d8;
                cVar9 = Viewport::operator==(this_02, (Viewport*)pcVar28);
                bVar30 = true;
                if (cVar9 != '\0')
                    goto LAB_100c2414f;
            }
            bVar30 = local_80._16_4_ == 1 && (uint)local_50 == 1;
        }
    LAB_100c2414f:
        this_00 = (MapArea*)this_02->Instance();
        lVar17 = this_00->GetOrigin();
        bVar23 = bVar29;
        if (*(char*)(lVar17 + 334) == '\0') {
            bVar23 = (bool)(((uint)local_50 != 1 || *(char*)(lVar17 + 333) == '\0') | bVar29);
        }
        bVar10 = ((ulong)pRVar8 & 16384) == 0 | bVar23;
        bVar23 = (bool)((bVar23 ^ 1U) & bVar10);
        if ((bVar10 == 0) && (local_40 != (Texture*)0)) {
            iVar11 = local_40->GetMaxLineWidth();
            bVar23 = false;
            if ((iVar11 != 36161) && (pTVar24 != (Texture*)0)) {
                iVar11 = pTVar24->GetMaxLineWidth();
                bVar23 = iVar11 != 36161;
                goto LAB_100c241c1;
            }
        } else {
        LAB_100c241c1:
            if ((bVar23 != false) && (((ulong)pRVar8 & 256) != 0)) {
                bVar23 = local_58 != (Texture*)0 && pTVar15 != (Texture*)0;
            }
        }
        pTVar25 = local_40;
        pcVar6 = ___glewBindFramebuffer;
        if (bVar23 == false) {
        LAB_100c243cd:
            if (!bVar30) {
                if (((local_40 != (Texture*)0) && (iVar11 = local_40->GetMaxLineWidth(), iVar11 == 36161)) ||
                    ((pTVar15 != (Texture*)0 && (iVar11 = pTVar15->GetMaxLineWidth(), iVar11 == 36161)))) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("(!pSrcColourTargetTex || pSrcColourTargetTex->GetType() != TEXTURE_TYPE_RENDERBUFFER) "
                              "&& (!pSrcDepthStencilTargetTex || pSrcDepthStencilTargetTex->GetType() != "
                              "TEXTURE_TYPE_RENDERBUFFER)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL.cpp",
                              1944, (char*)0);
                }
                pIVar7 = local_60;
                this_01 =
                    (RenderTargetResolver*)
                        std::unique_ptr<RenderTargetResolver, std::default_delete<RenderTargetResolver>>::operator->(
                            (unique_ptr<RenderTargetResolver, std::default_delete<RenderTargetResolver>>*)&local_60
                                ->field_144);
                pRVar26 = local_68;
                this_01->ResolveViaQuad(pIVar7, local_40, pTVar15, local_68, uVar2, local_90, local_80);
                goto joined_r0x000100c245e3;
            }
            uVar12 = local_68->GetNativeFBOId();
            (*pcVar6)(36009, uVar12);
            pcVar28 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp";
            CheckGlErrorInternal("glBindFramebuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 1930);
            local_40 = ___glewBlitFramebuffer;
            pvVar20 = local_90->SSOBeginPtr(pcVar28);
            local_58 = (Texture*)CONCAT44(local_58._4_4_, *(undefined4*)pvVar20);
            puVar21 = (undefined4*)local_90->y();
            local_50 = (Texture*)CONCAT44(local_50._4_4_, *puVar21);
            uVar12 = local_90->Right();
            local_48 = (Rect*)CONCAT44(local_48._4_4_, uVar12);
            local_34 = local_90->MaxZ();
            pvVar20 = local_80->SSOBeginPtr(pcVar28);
            uVar12 = *(undefined4*)pvVar20;
            puVar21 = (undefined4*)local_80->y();
            uVar3 = *puVar21;
            uVar13 = local_80->Right();
            uVar22 = local_80->MaxZ();
            pRVar26 = local_68;
            (*(code*)local_40)((ulong)local_58 & 4294967295, (ulong)local_50 & 4294967295, (ulong)local_48 & 4294967295,
                               local_34, uVar12, uVar3, uVar13, uVar22, local_98, bVar29 | 9728);
            CheckGlErrorInternal("glBlitFramebuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 1935);
            (*___glewBindFramebuffer)(36009, local_60->field_2216);
            pcVar28 = "glBindFramebuffer";
            iVar11 = 1938;
        } else {
            if ((uint)local_50 != local_80._16_4_)
                goto LAB_100c243cd;
            if (((ulong)pRVar8 & 16384) != 0) {
                local_50 = ___glewCopyImageSubData;
                uVar12 = local_40->GetNativeTextureId();
                local_48 = (Rect*)CONCAT44(local_48._4_4_, uVar12);
                uVar12 = pTVar25->GetMaxLineWidth();
                local_60 = (ImmediateRenderContext*)CONCAT44(local_60._4_4_, uVar12);
                pvVar20 = local_90->SSOBeginPtr(pcVar28);
                local_34 = *(int*)pvVar20;
                puVar21 = (undefined4*)local_90->y();
                local_98 = CONCAT44(local_98._4_4_, *puVar21);
                local_40 = (Texture*)pTVar24->GetNativeTextureId();
                local_80._16_8_ = pTVar24->GetMaxLineWidth();
                pvVar20 = local_80->SSOBeginPtr(pcVar28);
                uVar12 = *(undefined4*)pvVar20;
                puVar21 = (undefined4*)local_80->y();
                uVar3 = *puVar21;
                puVar21 = (undefined4*)local_90->second();
                uVar13 = *puVar21;
                puVar21 = (undefined4*)local_90->qw();
                pTVar15 = local_a0;
                (*(code*)local_50)((ulong)local_48 & 4294967295, (ulong)local_60 & 4294967295, 0, local_34,
                                   local_98 & 4294967295, 0, local_40, local_80._16_8_, 0, uVar12, uVar3, 0, uVar13,
                                   *puVar21, 1);
                pcVar28 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp";
                CheckGlErrorInternal("glCopyImageSubData",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     1912);
            }
            pRVar26 = local_68;
            if (((ulong)pRVar8 & 256) == 0)
                goto joined_r0x000100c245e3;
            local_40 = ___glewCopyImageSubData;
            uVar12 = pTVar15->GetNativeTextureId();
            local_50 = (Texture*)CONCAT44(local_50._4_4_, uVar12);
            uVar12 = pTVar15->GetMaxLineWidth();
            local_60 = (ImmediateRenderContext*)CONCAT44(local_60._4_4_, uVar12);
            pvVar20 = local_90->SSOBeginPtr(pcVar28);
            local_34 = *(int*)pvVar20;
            puVar21 = (undefined4*)local_90->y();
            pTVar15 = local_58;
            uVar12 = *puVar21;
            local_48 = (Rect*)local_58->GetNativeTextureId();
            local_58 = (Texture*)pTVar15->GetMaxLineWidth();
            pvVar20 = local_80->SSOBeginPtr(pcVar28);
            uVar3 = *(undefined4*)pvVar20;
            puVar21 = (undefined4*)local_80->y();
            uVar13 = *puVar21;
            puVar21 = (undefined4*)local_90->second();
            uVar4 = *puVar21;
            puVar21 = (undefined4*)local_90->qw();
            pRVar26 = local_68;
            (*(code*)local_40)((ulong)local_50 & 4294967295, (ulong)local_60 & 4294967295, 0, local_34, uVar12, 0,
                               local_48, local_58, 0, uVar3, uVar13, 0, uVar4, *puVar21, 1);
            pcVar28 = "glCopyImageSubData";
            iVar11 = 1920;
        }
        CheckGlErrorInternal(pcVar28,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             iVar11);
    joined_r0x000100c245e3:
        if (pRVar26 != (RenderTargets*)0) {
            pRVar26->SetNeedsInvalidated();
        }
    }

    // 0x100c246c0, 304 bytes, placed by __FILE__ string
    // ImmediateRenderContext::ReadColourTargetData(void*, Format, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
    void ImmediateRenderContext::ReadColourTargetData(undefined8 param_1, undefined4 param_3, undefined8 param_4,
                                                      undefined8 param_5, undefined4 param_6, undefined4 param_7,
                                                      undefined4 param_8, undefined4 param_9) {
        undefined1 local_40[4];
        int local_3c;
        int local_38;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1962, (char*)0);
        }
        new (local_40) GLFormat(param_3);
        if (((5 < local_3c - 6403U) || ((57U >> (local_3c - 6403U & 31) & 1) == 0)) && (local_3c != 32993)) {
            /* WARNING: Subroutine does not return */
            LogAssert("glDstPixelFormat.m_Format == GL_ALPHA || glDstPixelFormat.m_Format == GL_RGB || "
                      "glDstPixelFormat.m_Format == GL_RGBA || glDstPixelFormat.m_Format == GL_BGRA || "
                      "glDstPixelFormat.m_Format == GL_RED",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1970, (char*)0);
        }
        if (local_38 < 32819) {
            if ((local_38 == 5121) || (local_38 == 5126))
                goto LAB_100c247a4;
        } else if ((local_38 - 32819U < 2) || ((local_38 == 33635 || (local_38 == 33639)))) {
        LAB_100c247a4:
            _glReadPixels(param_6, param_7, param_8, param_9, local_3c, local_38, param_1);
            CheckGlErrorInternal("glReadPixels",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 1989);
            return;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("glDstPixelFormat.m_Type == GL_UNSIGNED_BYTE || glDstPixelFormat.m_Type == GL_UNSIGNED_SHORT_5_6_5 "
                  "|| glDstPixelFormat.m_Type == GL_UNSIGNED_SHORT_4_4_4_4 || glDstPixelFormat.m_Type == "
                  "GL_UNSIGNED_SHORT_5_5_5_1 || glDstPixelFormat.m_Type == GL_UNSIGNED_INT_8_8_8_8_REV || "
                  "glDstPixelFormat.m_Type == GL_FLOAT",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                  "ImmediateRenderContext_OGL.cpp",
                  1977, (char*)0);
    }

    // 0x100c249d0, 144 bytes, placed by __FILE__ string
    // ImmediateRenderContext::FlushTextureCache()
    void ImmediateRenderContext::FlushTextureCache() {
        MapArea* this_00;
        long lVar2;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2191, (char*)0);
        }
        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 327) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_GLTextureBarrier",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2194, (char*)0);
        }
        (*___glewTextureBarrierNV)();
        CheckGlErrorInternal("glTextureBarrierNV",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             2197);
    }

    // 0x100c25750, 112 bytes, placed by __FILE__ string
    // ImmediateRenderContext::LockContext()
    void ImmediateRenderContext::LockContext() {
        char cVar1;
        RenderDevice* this_00;

        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2325, (char*)0);
        }
        field_160 = field_160 + 1;
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            this_00 = (RenderDevice*)((ImmediateRenderContext*)this)->Instance();
            cVar1 = this_00->IsRenderThread();
            if (cVar1 == '\0') {
                _glFlush();
            }
        }
        BackendLockContext(this);
    }

    // 0x100c25830, 144 bytes, placed by __FILE__ string
    // ImmediateRenderContext::UnlockContext()
    void ImmediateRenderContext::UnlockContext() {
        int iVar1;
        char cVar2;
        RenderDevice* this_00;

        cVar2 = IsContextThread(this);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2338, (char*)0);
        }
        iVar1 = field_160;
        field_160 = iVar1 + -1;
        if (iVar1 < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_lockCounter >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2340, (char*)0);
        }
        BackendUnlockContext(this);
        cVar2 = this_thread::IsMainThread();
        if (cVar2 == '\0') {
            this_00 = (RenderDevice*)Instance();
            cVar2 = this_00->IsRenderThread();
            if (cVar2 == '\0') {
                _glFlush();
            }
        }
    }

    // 0x100c25f90, 96 bytes, placed by __FILE__ string
    // ImmediateRenderContext::IsInvalidTextureBound() const
    bool ImmediateRenderContext::IsInvalidTextureBound() {
        int iVar1;
        int iVar3;
        int* piVar4;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2362, (char*)0);
        }
        piVar4 = (int*)
            eastl::vector<unsigned int, eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<unsigned int,
                               eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>*)&field_2568,
                       0);
        iVar1 = *piVar4;
        iVar3 = (&field_192)->GetNativeTextureId();
        return iVar1 == iVar3;
    }

    // 0x100c25ff0, 128 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetActiveTextureSlot(unsigned int)
    void ImmediateRenderContext::SetActiveTextureSlot(uint param_1) {
        code* pcVar1;
        undefined4 uVar3;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      316, (char*)0);
        }
        if (field_2564 != param_1) {
            field_2564 = param_1;
            pcVar1 = ___glewActiveTexture;
            uVar3 = GetTextureSlotGLID(param_1);
            (*pcVar1)(uVar3);
            CheckGlErrorInternal("glActiveTexture",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 324);
        }
    }

    // 0x100c26120, 32 bytes, placed by class name and neighbouring functions
    // ImmediateRenderContext::BindInvalidTexture()
    void ImmediateRenderContext::BindInvalidTexture() {
        BindTexture(this, (Texture*)&field_192, 0);
    }

    // 0x100c26170, 80 bytes, placed by __FILE__ string
    // GetTextureSlotGLID(unsigned int)
    int GetTextureSlotGLID(uint param_1) {
        MapArea* this;
        long lVar1;
        undefined4 in_register_0000003c;

        this = (MapArea*)(CONCAT44(in_register_0000003c, param_1))->Instance();
        lVar1 = GetOrigin();
        if (*(int*)(lVar1 + 76) <= (int)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "static_cast<int>(textureUnit) < RenderDevice::Instance().GetDeviceCaps().m_MaxCombinedTextureUnits",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                "ImmediateRenderContext_OGL.cpp",
                72, (char*)0);
        }
        return param_1 + 33984;
    }

    // 0x100c261c0, 272 bytes, base-object constructor, placed by neighbouring functions
    // RenderContextStateCache::RenderContextStateCache()
    void RenderContextStateCache::RenderContextStateCache() {
        field_24 = 0;
        eastl::fixed_vector<unsigned int, 24ul, true, eastl::allocator>::fixed_vector((ulong)&field_72);
        new (field_208) DepthStencilState::Desc();
        new (field_260) RasteriserState::Desc();
        new (field_288) BlendState::Desc();
        eastl::fixed_vector<unsigned int, 32ul, true, eastl::allocator>::fixed_vector((ulong)&field_360);
        eastl::fixed_vector<unsigned int, 32ul, true, eastl::allocator>::fixed_vector((ulong)&field_528);
        eastl::fixed_vector<unsigned int, 32ul, true, eastl::allocator>::fixed_vector((ulong)&field_696);
        new (&field_864) std::array<Viewport, 2ul>();
        new (&field_916, (_func_decltype_nullptr*)32) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_932 = 0;
        Clear(this, (RenderTargets*)0, true);
    }

    // 0x100c26330, 496 bytes, placed by neighbouring functions
    // RenderContextStateCache::Clear(RenderTargets const*, bool)
    void RenderContextStateCache::Clear(RenderTargets* param_1, bool param_2) {
        undefined1* this_00;
        undefined8 uVar1;
        undefined4 uVar2;
        vector* pvVar3;
        undefined4* puVar4;
        uint* puVar5;
        uint* puVar6;
        undefined7 in_register_00000011;
        Viewport* this_01;
        undefined1 local_50[32];

        local_50._24_8_ = param_1;
        field_208->SetToDefault();
        field_260->SetToDefault();
        field_288->SetToDefault();
        this_01 = (Viewport*)local_50;
        Viewport::Viewport(this_01, 0, 0, 0, 0, 0.0, 1.0);
        (&field_864, this_01)->fill();
        field_912 = 0;
        this_00 = &field_916;
        pvVar3 = this_00->SSOBeginPtr(this_01);
        *(undefined4*)pvVar3 = 0;
        puVar4 = (undefined4*)this_00->y();
        *puVar4 = 0;
        puVar4 = (undefined4*)this_00->second();
        *puVar4 = 0;
        puVar4 = (undefined4*)this_00->qw();
        uVar1 = local_50._24_8_;
        *puVar4 = 0;
        field_936 = 0;
        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            uVar2 = 0;
            if ((RenderTargets*)local_50._24_8_ != (RenderTargets*)0) {
                uVar2 = local_50._24_8_->GetNativeFBOId();
            }
            field_8 = uVar2;
            field_0 = uVar1;
            field_12 = 0;
            field_16 = 0;
            local_50._0_4_ = 0;
            (&field_32, (uint*)local_50)->fill();
            field_64 = 0;
            puVar5 = (uint*)(&field_72)->HeapBeginPtr();
            puVar6 = (uint*)(&field_72)->end();
            eastl::fill<unsigned int>(puVar5, puVar6, 0);
            field_356 = 0;
            puVar5 = (uint*)(&field_360)->HeapBeginPtr();
            puVar6 = (uint*)(&field_360)->end();
            eastl::fill<unsigned int>(puVar5, puVar6, 0);
            puVar5 = (uint*)(&field_528)->HeapBeginPtr();
            puVar6 = (uint*)(&field_528)->end();
            eastl::fill<unsigned int>(puVar5, puVar6, 3553);
            puVar5 = (uint*)(&field_696)->HeapBeginPtr();
            puVar6 = (uint*)(&field_696)->end();
            eastl::fill<unsigned int>(puVar5, puVar6, 0);
            field_932 = 0;
        }
    }

    // 0x100c26540, 16 bytes, complete-object constructor, placed by neighbouring functions
    // RenderContextStateCache::RenderContextStateCache(): jumps straight to the base-object constructor

    // 0x100c26550, 80 bytes, placed by neighbouring functions
    // RenderContextStateCache::Init(RenderDeviceCaps const&)
    void RenderContextStateCache::Init(RenderDeviceCaps* param_1) {
        eastl::vector<unsigned int, eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>::resize(
            (ulong)&param_1[1].field_22);
        eastl::vector<unsigned int, eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>::resize(
            (ulong)&param_1[1].field_190);
        eastl::vector<unsigned int, eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>::resize(
            (ulong)&param_1[2].field_20);
    }

    // 0x100c266d0, 272 bytes, placed by __FILE__ string
    // RenderContextStateCache::SetTextures()
    void RenderContextStateCache::SetTextures() {
        undefined1* this_00;
        code* pcVar1;
        int iVar2;
        undefined4 uVar3;
        uint uVar4;
        undefined4* puVar5;
        ulong uVar6;

        this_00 = &field_528;
        iVar2 = this_00->size();
        if (iVar2 != 0) {
            uVar6 = 0;
            do {
                pcVar1 = ___glewActiveTexture;
                uVar3 = GetTextureSlotGLID((uint)uVar6);
                (*pcVar1)(uVar3);
                CheckGlErrorInternal("glActiveTexture",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     137);
                puVar5 = (undefined4*)eastl::vector<
                    unsigned int, eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<unsigned int, eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>*)
                        this_00,
                    uVar6);
                uVar3 = *puVar5;
                puVar5 = (undefined4*)eastl::vector<
                    unsigned int, eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<unsigned int,
                            eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>*)&field_360,
                    uVar6);
                _glBindTexture(uVar3, *puVar5);
                CheckGlErrorInternal("glBindTexture",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     138);
                uVar6 = uVar6 + 1;
                uVar4 = this_00->size();
            } while (uVar6 < uVar4);
        }
        pcVar1 = ___glewActiveTexture;
        uVar3 = GetTextureSlotGLID(field_356);
        (*pcVar1)(uVar3);
        CheckGlErrorInternal("glActiveTexture",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             142);
    }

    // 0x100c26820, 288 bytes, placed by __FILE__ string
    // RenderContextStateCache::RemoveTexture(unsigned int)
    void RenderContextStateCache::RemoveTexture(uint param_1) {
        undefined1* this_00;
        code* pcVar1;
        uint uVar2;
        undefined4 uVar3;
        uint* puVar4;
        undefined4* puVar5;
        ulong uVar6;

        if (param_1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("glTextureId",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      147, (char*)0);
        }
        this_00 = &field_528;
        uVar2 = this_00->size();
        if (1 < uVar2) {
            uVar6 = 1;
            do {
                puVar4 =
                    (uint*)eastl::vector<unsigned int,
                                         eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<unsigned int,
                                eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>*)&field_360,
                        uVar6);
                pcVar1 = ___glewActiveTexture;
                if (*puVar4 == param_1) {
                    uVar3 = GetTextureSlotGLID((uint)uVar6);
                    (*pcVar1)(uVar3);
                    CheckGlErrorInternal("glActiveTexture",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         156);
                    field_356 = (uint)uVar6;
                    _glBindTexture(3553, 0);
                    CheckGlErrorInternal("glBindTexture",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/context/OGL/ImmediateRenderContext_OGL.cpp",
                                         159);
                    puVar5 = (undefined4*)eastl::vector<
                        unsigned int, eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<unsigned int,
                                eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>*)&field_360,
                        uVar6);
                    *puVar5 = 0;
                    puVar5 = (undefined4*)eastl::vector<
                        unsigned int, eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<unsigned int,
                                eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>*)this_00,
                        uVar6);
                    *puVar5 = 3553;
                    return;
                }
                uVar6 = uVar6 + 1;
                uVar2 = this_00->size();
            } while (uVar6 < uVar2);
        }
    }

    // 0x100c26950, 416 bytes, base-object constructor, placed by class name and neighbouring functions
    // ImmediateRenderContext::ImmediateRenderContext()
    void ImmediateRenderContext::ImmediateRenderContext() {
        field_0 = false;
        new (&field_8) RenderContextDesc();
        new (&field_40) std::atomic<RenderContextReadyState>();
        new (&field_44, 60) RenderStats();
        field_136 = (ShaderProgram*)0;
        std::unique_ptr<RenderTargetResolver, std::default_delete<RenderTargetResolver>>::unique_ptr<true, void>(
            (unique_ptr<RenderTargetResolver, std::default_delete<RenderTargetResolver>>*)&field_144);
        field_152 = 0;
        field_160 = 0;
        m_gLCoreProfileVerMajor = 0;
        m_gLCoreProfileVerMinor = 0;
        new (field_172) VertexArrayObject();
        new (&field_192, "Texture2D") Texture2D();
        new (&field_704)
            eastl::vector_map<unsigned int, Texture_const*, eastl::less<unsigned int>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned int, Texture_const*>, eastl::allocator>>();
        new (&field_744) eastl::vector_map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>();
        new (&field_784) eastl::optional<RenderTargets>();
        new (&field_1184, "Renderbuffer") TextureRenderBuffer();
        new (&field_1696, "Renderbuffer") TextureRenderBuffer();
        new (&m_pStateCache) RenderContextStateCache();
        field_3152 = 0;
        field_3160 = (Singleton<RenderDevice>*)0;
    }

    // 0x100c26bc0, 384 bytes, base-object destructor, placed by __FILE__ string
    // ImmediateRenderContext::~ImmediateRenderContext()
    void ImmediateRenderContext::~ImmediateRenderContext() {
        undefined* puVar1;
        int iVar2;

        iVar2 = (&field_40)->operator_cast_to_RenderContextReadyState();
        puVar1 = PTR__objc_release_100ee9e60;
        if (iVar2 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_ReadyState == RenderContextReadyState::STATE_LOST",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      188, (char*)0);
        }
        (*(code*)PTR__objc_release_100ee9e60)(field_3160);
        (*(code*)puVar1)(field_3152);
        (&m_pStateCache)->~RenderContextStateCache();
        (&field_1696)->~TextureRenderBuffer();
        (&field_1184)->~TextureRenderBuffer();
        (&field_784)->~optional();
        (&field_744)->~vector_map();
        (&field_704)->~vector_map();
        (&field_192)->~Texture2D();
        field_172->~VertexArrayObject();
        (&field_144)->~unique_ptr();
        (&field_8)->~InterfaceMouseEvent();
    }

    // 0x100c26da0, 560 bytes, placed by __FILE__ string
    // ImmediateRenderContext::InitBackBuffer()
    void ImmediateRenderContext::InitBackBuffer() {
        undefined1* this_00;
        code* pcVar1;
        char cVar2;
        undefined4 uVar4;
        RenderTargets* pRVar5;

        if (field_18 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_Desc.m_SecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2368, (char*)0);
        }
        cVar2 = IsContextThread(this);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2369, (char*)0);
        }
        if (field_12 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_Desc.m_ColourBufferBits",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2371, (char*)0);
        }
        this_00 = &field_784;
        if (this_00->operator_cast_to_bool()) {
            cVar2 = (&field_1184)->IsCreated();
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_backBufferColour.IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          2399, (char*)0);
            }
            cVar2 = (&field_1696)->IsCreated();
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_backBufferDepth.IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          2400, (char*)0);
            }
            pRVar5 = (RenderTargets*)eastl::optional<RenderTargets>::operator->((optional<RenderTargets>*)this_00);
            cVar2 = pRVar5->IsCreated();
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_backBuffer->IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          2401, (char*)0);
            }
        } else {
            eastl::optional<RenderTargets>::emplace<>((optional<RenderTargets>*)this_00);
            pRVar5 = (RenderTargets*)eastl::optional<RenderTargets>::operator->((optional<RenderTargets>*)this_00);
            pRVar5->Create("BackBuffer", 18);
            pcVar1 = ___glewBindFramebuffer;
            pRVar5 = (RenderTargets*)eastl::optional<RenderTargets>::operator->((optional<RenderTargets>*)this_00);
            uVar4 = pRVar5->GetNativeFBOId();
            (*pcVar1)(36009, uVar4);
            CheckGlErrorInternal("glBindFramebuffer",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2379);
            (&field_1184)->BindBackColourRenderBuffer();
            pRVar5 = (RenderTargets*)eastl::optional<RenderTargets>::operator->((optional<RenderTargets>*)this_00);
            pRVar5->BindColourTargetTexture(&field_1184, 0, 0, 34069);
            if (field_13 == '\0') {
                if (field_14 != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!m_Desc.m_StencilBufferBits",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL.cpp",
                              2392, (char*)0);
                }
                pRVar5 = (RenderTargets*)eastl::optional<RenderTargets>::operator->((optional<RenderTargets>*)this_00);
                pRVar5->UnbindDepthStencilTargetTexture();
            } else {
                (&field_1696)->BindBackDepthRenderBuffer();
                pRVar5 = (RenderTargets*)eastl::optional<RenderTargets>::operator->((optional<RenderTargets>*)this_00);
                pRVar5->BindDepthStencilTargetTexture((Texture*)&field_1696);
            }
        }
    }

    // 0x100c27010, 464 bytes, placed by __FILE__ string
    // ImmediateRenderContext::CreateRenderingResources()
    void ImmediateRenderContext::CreateRenderingResources() {
        char cVar1;
        MapArea* this_00;
        long lVar4;
        uchar* puVar5;
        RenderTargetResolver* this_01;
        undefined1* puVar6;
        undefined1 local_80[88];
        undefined2 local_28;
        undefined1 local_26;

        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      281, (char*)0);
        }
        if (field_18 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_Desc.m_SecondaryContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      282, (char*)0);
        }
        this_00 = (MapArea*)((ImmediateRenderContext*)this)->Instance();
        lVar4 = this_00->GetOrigin();
        if (*(char*)(lVar4 + 321) != '\0') {
            puVar6 = field_172;
            cVar1 = puVar6->IsValid();
            if (cVar1 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!m_defaultVAO.IsValid()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          287, (char*)0);
            }
            puVar6->Create(this);
            if (puVar6->GetX() != 1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_defaultVAO.GetNativeVAO() == 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          289, "Default VAO should == 1, not all VAOs have been destroyed yet");
            }
        }
        new (local_80) Texture::Desc();
        local_80._12_4_ = 16;
        local_80._0_4_ = 1;
        local_80._4_4_ = 1;
        local_26 = 255;
        local_28 = 255;
        puVar5 = (uchar*)std::array<unsigned char, 3ul>::operator[]((ulong)&local_28);
        new ((local_80 + 64)) ResourceDataT<unsigned char const>(puVar5, 0, 0, false);
        (&field_192, (Desc*)local_80, (ResourceDataT*)(local_80 + 64), 3)->Create();
        (&field_200, 3)->DisableMarkAsDead();
        BindInvalidTexture(this);
        ((local_80 + 64))->~ResourceDataT();
        puVar6 = &field_144;
        if (!puVar6->operator_cast_to_bool()) {
            std::make_unique<RenderTargetResolver>();
            std::unique_ptr<RenderTargetResolver, std::default_delete<RenderTargetResolver>>::operator=(
                (unique_ptr<RenderTargetResolver, std::default_delete<RenderTargetResolver>>*)puVar6,
                (unique_ptr*)local_80);
            local_80->~unique_ptr();
        }
        this_01 = (RenderTargetResolver*)
                      std::unique_ptr<RenderTargetResolver, std::default_delete<RenderTargetResolver>>::operator->(
                          (unique_ptr<RenderTargetResolver, std::default_delete<RenderTargetResolver>>*)puVar6);
        this_01->CreateRenderingResources();
        this_01->CreateStaticRenderingResources();
    }

    // 0x100c271e0, 320 bytes, placed by __FILE__ string
    // ImmediateRenderContext::EnableGLExtensions()
    void ImmediateRenderContext::EnableGLExtensions() {
        code* pcVar1;
        undefined4 uVar2;
        MapArea* this_00;
        long lVar3;

        this_00 = (MapArea*)Instance();
        lVar3 = this_00->GetOrigin();
        if (*(char*)(lVar3 + 320) != '\0') {
            _glEnable(34895);
            CheckGlErrorInternal("glEnable",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 2269);
        }
        pcVar1 = ___glewMaxShaderCompilerThreadsKHR;
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

    // 0x100c273f0, 336 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetGLShaderImage(unsigned int, Texture const&, Access)
    void ImmediateRenderContext::SetGLShaderImage(uint param_1, Texture* param_2, undefined4 param_4) {
        int iVar1;
        code* pcVar2;
        int iVar4;
        undefined4 uVar5;
        int* piVar6;
        long lVar7;
        undefined4* puVar8;
        GLFormat local_48;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      348, (char*)0);
        }
        local_48._16_4_ = param_1;
        piVar6 = (int*)
            eastl::vector<unsigned int, eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<unsigned int,
                               eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>*)&field_2904,
                       (ulong)param_1);
        iVar1 = *piVar6;
        iVar4 = param_2->GetNativeTextureId();
        if (iVar1 != iVar4) {
            lVar7 = param_2->second();
            if (1 < *(uint*)(lVar7 + 28)) {
                /* WARNING: Subroutine does not return */
                LogAssert("texture.GetDesc().m_SampleMipLevels <= 1u",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          357, (char*)0);
            }
            lVar7 = param_2->second();
            if (1 < *(uint*)(lVar7 + 8)) {
                /* WARNING: Subroutine does not return */
                LogAssert("texture.GetDesc().m_ArraySize <= 1u",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          358, (char*)0);
            }
            uVar5 = param_2->GetNativeTextureId();
            puVar8 =
                (undefined4*)eastl::vector<unsigned int,
                                           eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<unsigned int,
                            eastl::fixed_vector_allocator<4ul, 32ul, 4ul, 0ul, true, eastl::allocator>>*)&field_2904,
                    (ulong)param_1);
            *puVar8 = uVar5;
            lVar7 = param_2->second();
            new (&local_48) GLFormat(*(undefined4*)(lVar7 + 12));
            pcVar2 = ___glewBindImageTexture;
            uVar5 = param_2->GetNativeTextureId();
            (*pcVar2)(local_48._16_4_, uVar5, 0, 0, 0, param_4, local_48.field_0._0_4_);
            CheckGlErrorInternal("glBindImageTexture",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 373);
        }
    }

    // 0x100c275f0, 96 bytes, placed by class name and neighbouring functions
    // ImmediateRenderContext::BackendDestroy()
    void ImmediateRenderContext::BackendDestroy() {
        ID IVar1;
        Singleton<RenderDevice>* pSVar2;
        undefined* puVar3;

        NSOpenGLContext::clearCurrentContext((ID)&_OBJC_CLASS___NSOpenGLContext, "clearCurrentContext");
        IVar1 = field_3152;
        field_3152 = 0;
        puVar3 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(IVar1);
        pSVar2 = field_3160;
        field_3160 = (Singleton<RenderDevice>*)0;
        (*(code*)puVar3)(pSVar2);
    }

    // 0x100c27720, 80 bytes, placed by __FILE__ string
    // ImmediateRenderContext::CheckDefaultVAOBound()
    void ImmediateRenderContext::CheckDefaultVAOBound() {
        int iVar1;
        int iVar2;

        iVar1 = field_3140;
        iVar2 = field_172->GetX();
        if (iVar1 != iVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_StateCache.m_VAO == m_defaultVAO.GetNativeVAO()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      640, (char*)0);
        }
    }

    // 0x100c27780, 320 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetVertexBuffers(unsigned int, unsigned int const*, unsigned int const*, unsigned int const*)
    void ImmediateRenderContext::SetVertexBuffers(uint param_1, uint* param_2, uint* param_3, uint* param_4) {
        uint uVar1;
        uint* puVar3;
        ulong uVar4;
        undefined4 in_register_0000003c;
        ImmediateRenderContext* this;
        uint uVar5;

        this = (ImmediateRenderContext*)CONCAT44(in_register_0000003c, param_1);
        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      701, (char*)0);
        }
        if (field_0 == false) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      702, (char*)0);
        }
        if ((int)param_2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("numBuffers > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      703, (char*)0);
        }
        CheckDefaultVAOBound(this);
        uVar4 = 0;
        do {
            uVar1 = param_3[uVar4];
            uVar5 = 0;
            if (uVar1 != 0) {
                (*___glewBindBuffer)(34962, uVar1);
                CheckGlErrorInternal("glBindBuffer",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     719);
                uVar5 = uVar1;
            }
            puVar3 = (uint*)std::array<unsigned int, 8ul>::operator[]((array<unsigned int, 8ul>*)&field_2240, uVar4);
            *puVar3 = uVar5;
            uVar4 = uVar4 + 1;
        } while (((ulong)param_2 & 4294967295) != uVar4);
    }

    // 0x100c278c0, 160 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetIndexBuffer(unsigned int, unsigned int)
    void ImmediateRenderContext::SetIndexBuffer(uint param_1, uint param_2) {
        undefined4 in_register_0000003c;
        ImmediateRenderContext* this;

        this = (ImmediateRenderContext*)CONCAT44(in_register_0000003c, param_1);
        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      734, (char*)0);
        }
        if (field_0 == false) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      735, (char*)0);
        }
        CheckDefaultVAOBound(this);
        (*___glewBindBuffer)(34963, param_2);
        CheckGlErrorInternal("glBindBuffer",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             745);
        *(uint*)&field_2272 = param_2;
    }

    // 0x100c27960, 192 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetDefaultVAO()
    void ImmediateRenderContext::SetDefaultVAO() {
        undefined1* this_00;
        int iVar1;
        char cVar2;
        int iVar3;
        MapArea* this_01;
        long lVar4;
        undefined8 uVar5;

        cVar2 = IsContextThread(this);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2161, (char*)0);
        }
        this_01 = (MapArea*)((ImmediateRenderContext*)this)->Instance();
        lVar4 = this_01->GetOrigin();
        if (*(char*)(lVar4 + 321) != '\0') {
            this_00 = field_172;
            cVar2 = this_00->IsValid();
            if (cVar2 == '\0') {
                uVar5 = logger::default_logger();
                logger::Logger::Log(uVar5, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "context/OGL/ImmediateRenderContext_OGL.cpp",
                                    2177, "m_defaultVAO was invalid, this should only happen during device resets");
            } else {
                iVar1 = field_3140;
                iVar3 = this_00->GetX();
                if (iVar1 != iVar3) {
                    this_00->Bind(this);
                }
                CheckDefaultVAOBound(this);
            }
        }
    }

    // 0x100c27b40, 384 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetCSTextureImage(unsigned int, Texture const*, Access)
    void ImmediateRenderContext::SetCSTextureImage(uint param_1, Texture* param_2, undefined4 param_4) {
        MapArea* pMVar3;
        long lVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        char* pcVar8;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      891, (char*)0);
        }
        if (field_0 == false) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      892, (char*)0);
        }
        if (param_2 == (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      893, (char*)0);
        }
        pMVar3 = (MapArea*)((ImmediateRenderContext*)this)->Instance();
        lVar4 = pMVar3->GetOrigin();
        if (*(char*)(lVar4 + 222) == '\0') {
            uVar5 = logger::default_logger();
            pcVar8 = "ImmediateRenderContext::SetCSTextureImage: Image Load/Store is unsupported on this device. "
                     "Skipping binding.";
            uVar6 = 2;
            uVar7 = 918;
        } else {
            if (param_2->GetNativeTextureId() != 0) {
                pMVar3 = (MapArea*)param_2->Instance();
                lVar4 = pMVar3->GetOrigin();
                if (*(uint*)(lVar4 + 72) <= param_1) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "context/OGL/ImmediateRenderContext_OGL.cpp",
                                    904,
                                    "Attempting to bind to image slot %u, which exceeds maximum images slots of %u",
                                    (ulong)param_1);
                }
                SetGLShaderImage(this, param_1, param_2, param_4);
                return;
            }
            uVar5 = logger::default_logger();
            pcVar8 = "Texture bound without native resources - binding skipped";
            uVar6 = 3;
            uVar7 = 913;
        }
        logger::Logger::Log(uVar5, 0, uVar6,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                            "OGL/ImmediateRenderContext_OGL.cpp",
                            uVar7, pcVar8);
    }

    // 0x100c27cc0, 768 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetDepthStencilStateDirect(DepthStencilState::Desc const&)
    void ImmediateRenderContext::SetDepthStencilStateDirect(Desc* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        MapArea* pMVar7;
        long lVar8;
        int iVar9;
        char* pcVar10;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      924, (char*)0);
        }
        if (param_1->field_0 == '\0') {
            _glDisable(2929);
        } else {
            _glEnable(2929);
        }
        pcVar10 = "glEnable/glDisable GL_DEPTH_TEST";
        CheckGlErrorInternal("glEnable/glDisable GL_DEPTH_TEST",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             926);
        pMVar7 = (MapArea*)pcVar10->Instance();
        lVar8 = pMVar7->GetOrigin();
        if (*(char*)(lVar8 + 184) != '\0') {
            if (param_1->field_1 == '\0') {
                _glEnable(34383);
            } else {
                _glDisable(34383);
            }
            CheckGlErrorInternal("glEnable/glDisable GL_ARB_depth_clamp",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 931);
        }
        _glDepthMask(param_1->field_2);
        CheckGlErrorInternal("glDepthMask",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             935);
        _glDepthFunc(param_1->field_12);
        pcVar10 = "glDepthFunc";
        CheckGlErrorInternal("glDepthFunc",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             937);
        pMVar7 = (MapArea*)pcVar10->Instance();
        lVar8 = pMVar7->GetOrigin();
        if (*(char*)(lVar8 + 183) != '\0') {
            if (param_1->field_3 == '\0') {
                _glDisable(34960);
                pcVar10 = "glDisable GL_DEPTH_BOUNDS_TEST_EXT";
                iVar9 = 951;
            } else {
                _glEnable(34960);
                CheckGlErrorInternal("glEnable GL_DEPTH_BOUNDS_TEST_EXT",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "context/OGL/ImmediateRenderContext_OGL.cpp",
                                     945);
                (*___glewDepthBoundsEXT)(SUB84((double)param_1->field_4, 0), SUB84((double)param_1->field_8, 0));
                pcVar10 = "glDepthBoundsEXT";
                iVar9 = 947;
            }
            CheckGlErrorInternal(pcVar10,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 iVar9);
        }
        if (param_1->field_16 == '\0') {
            _glDisable(2960);
            pcVar10 = "glDisable GL_STENCIL_TEST";
            iVar9 = 972;
        } else {
            _glEnable(2960);
            CheckGlErrorInternal("glEnable GL_STENCIL_TEST",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 959);
            _glStencilMask(param_1->field_18);
            CheckGlErrorInternal("glStencilMask",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 960);
            (*___glewStencilFuncSeparate)(1028, *(undefined4*)&param_1->field_32, param_1->field_19, param_1->field_17);
            CheckGlErrorInternal("glStencilFuncSeparate",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 963);
            (*___glewStencilOpSeparate)(1028, *(undefined4*)&param_1->field_20, *(undefined4*)&param_1->field_24,
                                        *(undefined4*)&param_1->field_28);
            CheckGlErrorInternal("glStencilOpSeparate",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 964);
            (*___glewStencilFuncSeparate)(1029, *(undefined4*)&param_1->field_32, param_1->field_19, param_1->field_17);
            CheckGlErrorInternal("glStencilFuncSeparate",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 967);
            (*___glewStencilOpSeparate)(1028, *(undefined4*)&param_1->field_20, *(undefined4*)&param_1->field_24,
                                        *(undefined4*)&param_1->field_28);
            pcVar10 = "glStencilOpSeparate";
            iVar9 = 968;
        }
        CheckGlErrorInternal(pcVar10,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             iVar9);
        field_2464 = param_1[1].field_4;
        uVar1._0_1_ = param_1->field_0;
        uVar1._1_1_ = param_1->field_1;
        uVar1._2_1_ = param_1->field_2;
        uVar1._3_1_ = param_1->field_3;
        uVar1._4_4_ = param_1->field_4;
        uVar2 = *(undefined8*)&param_1->field_8;
        uVar3._0_1_ = param_1->field_16;
        uVar3._1_1_ = param_1->field_17;
        uVar3._2_1_ = param_1->field_18;
        uVar3._3_5_ = *(undefined5*)&param_1->field_19;
        uVar4 = *(undefined8*)&param_1->field_24;
        uVar5 = *(undefined8*)&param_1->field_40;
        field_2448 = *(undefined8*)&param_1->field_32;
        field_2456 = uVar5;
        field_2432 = (undefined1)uVar3;
        field_2433 = (int7)((ulong)uVar3 >> 8);
        field_2440 = uVar4;
        field_2416 = (short)uVar1;
        field_2418 = (char)((ulong)uVar1 >> 16);
        field_2419 = (int5)((ulong)uVar1 >> 24);
        field_2424 = uVar2;
    }

    // 0x100c27fc0, 576 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetRasteriserStateDirect(RasteriserState::Desc const&)
    void ImmediateRenderContext::SetRasteriserStateDirect(Desc* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        MapArea* this_00;
        long lVar5;
        int iVar6;
        char* pcVar7;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      980, (char*)0);
        }
        if (param_1->field_4 == 0) {
            _glDisable(2884);
            pcVar7 = "glEnable GL_CULL_FACE";
            iVar6 = 989;
        } else {
            _glEnable(2884);
            CheckGlErrorInternal("glEnable GL_CULL_FACE",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 984);
            _glCullFace(param_1->field_4);
            pcVar7 = "glCullFace";
            iVar6 = 985;
        }
        CheckGlErrorInternal(pcVar7,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             iVar6);
        if (param_1->field_12 == 0.0 && param_1->field_8 == 0.0) {
            _glDisable(32823);
            pcVar7 = "glDisable GL_POLYGON_OFFSET_FILL";
            iVar6 = 1000;
        } else {
            _glEnable();
            CheckGlErrorInternal("glEnable GL_POLYGON_OFFSET_FILL",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 995);
            _glPolygonOffset(param_1->field_8, param_1->field_12);
            pcVar7 = "glPolygonOffset";
            iVar6 = 996;
        }
        CheckGlErrorInternal(pcVar7,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             iVar6);
        _glLineWidth(param_1->field_16);
        CheckGlErrorInternal("glLineWidth",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             1004);
        _glPolygonMode(1032, param_1->field_0);
        CheckGlErrorInternal("glPolygonMode",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             1008);
        if (param_1->field_22 == '\0') {
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
        this_00 = (MapArea*)pcVar7->Instance();
        lVar5 = this_00->GetOrigin();
        if (2 < *(int*)(lVar5 + 308)) {
            if (param_1->field_24 == '\0') {
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
        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)&param_1->field_8;
        uVar3 = *(undefined8*)((long)&param_1->field_16 + 1);
        field_2477 = *(undefined8*)((long)&param_1->field_8 + 1);
        field_2485 = uVar3;
        field_2468 = uVar1;
        *(undefined8*)&field_2476 = uVar2;
    }

    // 0x100c28200, 448 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetBlendStateDirect(BlendState::Desc const&)
    void ImmediateRenderContext::SetBlendStateDirect(Desc* param_1) {
        byte bVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        char* pcVar10;
        int iVar11;
        char* pcVar12;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1041, (char*)0);
        }
        pcVar10 = (char*)std::array<RenderTargetBlendDesc, 2ul>::operator[]((ulong)&param_1->field_4);
        if (param_1->field_0 == '\0') {
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
            (*___glewBlendFuncSeparate)(*(undefined4*)(pcVar10 + 4), *(undefined4*)(pcVar10 + 8),
                                        *(undefined4*)(pcVar10 + 16), *(undefined4*)(pcVar10 + 20));
            CheckGlErrorInternal("glBlendFuncSeparate",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "context/OGL/ImmediateRenderContext_OGL.cpp",
                                 1063);
            (*___glewBlendEquationSeparate)(*(undefined4*)(pcVar10 + 12), *(undefined4*)(pcVar10 + 24));
            pcVar12 = "glBlendEquationSeparate";
            iVar11 = 1065;
        }
        CheckGlErrorInternal(pcVar12,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             iVar11);
        bVar1 = pcVar10[28];
        _glColorMask(bVar1 & 1, bVar1 >> 1 & 1, bVar1 >> 2 & 1, bVar1 >> 3 & 1);
        CheckGlErrorInternal("glColorMask",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             1078);
        field_2560 = *(undefined4*)&param_1[5].field_4;
        uVar2 = *(undefined8*)param_1;
        uVar3 = *(undefined8*)&param_1->field_8;
        uVar4 = *(undefined8*)&param_1[1].field_4;
        uVar5 = *(undefined8*)(param_1 + 2);
        uVar6 = *(undefined8*)&param_1[2].field_8;
        uVar7 = *(undefined8*)&param_1[3].field_4;
        uVar8 = *(undefined8*)&param_1[4].field_8;
        field_2544 = *(undefined8*)(param_1 + 4);
        field_2552 = uVar8;
        field_2528 = uVar6;
        field_2536 = uVar7;
        field_2512 = uVar4;
        field_2520 = uVar5;
        field_2496 = uVar2;
        field_2504 = uVar3;
    }

    // 0x100c28450, 304 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetShaderStorageBuffer(unsigned int, ShaderStorageBuffer const*)
    void ImmediateRenderContext::SetShaderStorageBuffer(uint param_1, ShaderStorageBuffer* param_2) {
        code* pcVar1;
        int iVar3;
        undefined4 uVar4;

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2131, (char*)0);
        }
        if ((field_0 == false) || (param_2 == (ShaderStorageBuffer*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_InsideBeginEnd && pShaderStorageBuffer",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2132, (char*)0);
        }
        if (param_1 == 4294967295) {
            /* WARNING: Subroutine does not return */
            LogAssert("bufferSlot != GL_INVALID_INDEX",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2134, (char*)0);
        }
        if (param_2 == (ShaderStorageBuffer*)0) {
            (*___glewBindBufferBase)(37074, param_1, 0);
            iVar3 = 2145;
        } else {
            iVar3 = param_2->GetNativeBuffer();
            pcVar1 = ___glewBindBufferBase;
            if (iVar3 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("pShaderStorageBuffer->GetNativeBuffer() > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL.cpp",
                          2138, (char*)0);
            }
            uVar4 = param_2->GetNativeBuffer();
            (*pcVar1)(37074, param_1, uVar4);
            iVar3 = 2141;
        }
        CheckGlErrorInternal("glBindBufferBase (GL_SHADER_STORAGE_BUFFER)",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             iVar3);
    }

    // 0x100c285b0, 144 bytes, placed by __FILE__ string
    // ImmediateRenderContext::ValidateState()
    void ImmediateRenderContext::ValidateState() {
        char cVar1;

        cVar1 = IsContextThread(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1318, (char*)0);
        }
        if (field_0 == false) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_InsideBeginEnd",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1319, (char*)0);
        }
        cVar1 = IsLocked(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsLocked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      1320, (char*)0);
        }
    }

    // 0x100c28870, 64 bytes, placed by class name and neighbouring functions
    // ImmediateRenderContext::BackendSetVSyncMode(VSyncMode, int)
    void ImmediateRenderContext::BackendSetVSyncMode(undefined8 param_2, undefined4 param_3) {
        undefined8 uVar1;
        undefined4 local_c;

        local_c = param_3;
        uVar1 = (*(code*)PTR__objc_msgSend_100ee9e50)(field_3152, "CGLContextObj");
        _CGLSetParameter(uVar1, 222, &local_c);
    }

    // 0x100c288b0, 16 bytes, placed by class name and neighbouring functions
    // ImmediateRenderContext::GetVSyncMode() const
    int ImmediateRenderContext::GetVSyncMode() {
        return m_vSyncMode;
    }

    // 0x100c28900, 16 bytes, placed by class name and neighbouring functions
    // ImmediateRenderContext::IsMinCoreProfile() const
    bool ImmediateRenderContext::IsMinCoreProfile() {
        return m_gLCoreProfileVerMajor < 3;
    }

    // 0x100c28910, 192 bytes, placed by __FILE__ string
    // ImmediateRenderContext::BindImageTexture(unsigned int, Texture const*, int, LockType)
    void ImmediateRenderContext::BindImageTexture(undefined4 param_1, Texture* param_2, undefined4 param_3,
                                                  undefined4 param_5) {
        code* pcVar1;
        undefined4 uVar3;
        undefined4 uVar4;
        long lVar5;
        undefined1 local_40[16];

        if (IsContextThread(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                      "ImmediateRenderContext_OGL.cpp",
                      2184, (char*)0);
        }
        lVar5 = param_2->second();
        new (local_40) GLFormat(*(undefined4*)(lVar5 + 12));
        pcVar1 = ___glewBindImageTexture;
        uVar3 = param_2->GetNativeTextureId();
        uVar4 = GetGLMapAccessFlags(param_5);
        (*pcVar1)(param_1, uVar3, param_3, 0, 0, uVar4, local_40._0_4_);
        CheckGlErrorInternal("glBindImageTexture",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             2186);
    }

    // 0x100c289d0, 352 bytes, placed by __FILE__ string
    // DebugLogCallback(unsigned int, unsigned int, unsigned int, unsigned int, int, char const*, void const*)
    void DebugLogCallback(uint param_1, uint param_2, uint param_3, uint param_4, int param_5, char* param_6,
                          void* param_7) {
        int iVar1;
        NXTPixScreen* this;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined4 in_register_0000003c;
        Singleton<RenderDevice>* this_00;
        undefined8 uVar8;

        this_00 = (Singleton<RenderDevice>*)CONCAT44(in_register_0000003c, param_1);
        if (((param_4 != 33387) && (0 < param_5)) &&
            ((45 < param_3 - 131139 || ((35184372121601U >> ((ulong)(param_3 - 131139) & 63) & 1) == 0)))) {
            if (Singleton<RenderDevice>::InstancePtr() != 0) {
                this = (NXTPixScreen*)this_00->Instance();
                iVar1 = GetUIHeight();
                if (iVar1 == 4) {
                    iVar1 = _strcmp(param_6, "FreeAllocationOnTimestamp - WaitForTimestamp");
                    if (iVar1 == 0) {
                        return;
                    }
                    iVar1 = _strcmp(param_6, "Namespace collision detected, using slow path");
                    if (iVar1 == 0) {
                        return;
                    }
                    iVar1 = _strcmp(param_6, "EsxBufferObject::Map - Ignoring EsxBufferMapUnsyncedBit");
                    if (iVar1 == 0) {
                        return;
                    }
                    iVar1 = _strcmp(param_6, "Packing allocations for resource %p");
                    if (iVar1 == 0) {
                        return;
                    }
                }
            }
            uVar3 = logger::default_logger();
            uVar4 = GetDebugMessageTypeStr(param_2);
            uVar5 = GetDebugMessageSourceStr(param_1);
            if (param_4 == 37190) {
                uVar6 = GetDebugMessageSeverityStr(37190);
                uVar7 = 6;
                uVar8 = 2242;
            } else {
                uVar6 = GetDebugMessageSeverityStr(param_4);
                uVar7 = 8;
                uVar8 = 2251;
            }
            logger::Logger::Log(uVar3, 0, uVar7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "context/OGL/ImmediateRenderContext_OGL.cpp",
                                uVar8, "GL Debug Message: %s\nType: %s, Source: %s, ID: %u, Severity: %s", param_6,
                                uVar4, uVar5, param_3, uVar6);
        }
    }

    // 0x100c28b60, 32 bytes, placed by class name and neighbouring functions
    // ImmediateRenderContext::BackendPresent()
    undefined1 ImmediateRenderContext::BackendPresent() {
        (*(code*)PTR__objc_msgSend_100ee9e50)(field_3152, "flushBuffer");
        return 1;
    }

    // 0x100c28b80, 144 bytes, placed by class name and neighbouring functions
    // ImmediateRenderContext::BackendLockContext()
    ulong ImmediateRenderContext::BackendLockContext() {
        undefined8 uVar2;
        ID IVar3;
        ID IVar4;
        undefined8 unaff_RBX;
        ulong uVar5;

        if (field_3152 != 0) {
            uVar2 = (*(code*)PTR__objc_msgSend_100ee9e50)(field_3152, "CGLContextObj");
            if (_CGLLockContext(uVar2) == 0) {
                IVar3 = NSOpenGLContext::currentContext((ID)&_OBJC_CLASS___NSOpenGLContext, "currentContext");
                IVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
                IVar3 = field_3152;
                (*(code*)PTR__objc_release_100ee9e60)(IVar4);
                uVar5 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
                if (IVar4 != IVar3) {
                    (*(code*)PTR__objc_msgSend_100ee9e50)(field_3152, "makeCurrentContext");
                }
                goto LAB_100c28bb5;
            }
        }
        uVar5 = 0;
    LAB_100c28bb5:
        return uVar5 & 4294967295;
    }

    // 0x100c28c10, 48 bytes, placed by class name and neighbouring functions
    // ImmediateRenderContext::BackendUnlockContext()
    void ImmediateRenderContext::BackendUnlockContext() {
        undefined8 uVar1;

        if (field_3152 != 0) {
            uVar1 = (*(code*)PTR__objc_msgSend_100ee9e50)(field_3152, "CGLContextObj");
            _CGLUnlockContext(uVar1);
        }
    }

    // 0x100c28c40, 48 bytes, placed by __FILE__ string
    // ImmediateRenderContext::FinishRendering()
    void ImmediateRenderContext::FinishRendering() {
        _glFinish();
        CheckGlErrorInternal("glFinish",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                             "OGL/ImmediateRenderContext_OGL.cpp",
                             2352);
    }

    // 0x100c28d10, 112 bytes, placed by class name and neighbouring functions
    // ImmediateRenderContext::UpdateBackBuffer(unsigned int, unsigned int)
    void ImmediateRenderContext::UpdateBackBuffer(uint param_1, uint param_2) {
        char cVar1;

        if (field_12 != '\0') {
            cVar1 = (&field_1184)->IsNativeBackBuffer();
            if (cVar1 != '\0') {
                (&field_1184, param_1, param_2)->SetNativeBackBufferSize();
            }
        }
        if (field_13 != '\0') {
            cVar1 = (&field_1696)->IsNativeBackBuffer();
            if (cVar1 != '\0') {
                (&field_1696, param_1, param_2)->SetNativeBackBufferSize();
            }
        }
    }

} // namespace jag::render
