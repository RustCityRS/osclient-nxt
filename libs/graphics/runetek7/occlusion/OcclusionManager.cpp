// libs/graphics/runetek7/occlusion/OcclusionManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "OcclusionManager.h"

namespace jag::graphics {
    // 0x100f43ba1, 1 bytes, __data
    OcclusionManager::m_OcclusionEnabled = 1;

    // 0x100f43ba2, 1 bytes, __data
    OcclusionManager::m_GammaCorrectDebugDepthBuffer = 1;

    // 0x100f43ba3, 1 bytes, __data
    OcclusionManager::m_MergeAABBCPUDepthBuffers = 1;

    // 0x103bbd53c, 1 bytes, __common; zero-initialised
    OcclusionManager::m_CPUDepthBufferGenerationEnabled;

    // 0x103bbd53d, 1 bytes, __common; zero-initialised
    OcclusionManager::m_ShowDownsampledGPUDepthBuffer;

    // 0x103bbd53e, 1 bytes, __common; zero-initialised
    OcclusionManager::m_ShowAABBDebugDepthBuffer;

    // 0x103bbd53f, 1 bytes, __common; zero-initialised
    OcclusionManager::m_ShowEntireDebugAABB;

    // 0x103bbd540, 1 bytes, __common; zero-initialised
    OcclusionManager::m_ShowFailPointOnly;

    // 0x103bbd541, 1 bytes, __common; zero-initialised
    OcclusionManager::m_ShowCulledAABB;

    // 0x103bbd542, 1 bytes, __common; zero-initialised
    OcclusionManager::m_ShowNonCulledAABB;

    // 0x103bbd543, 1 bytes, __common; zero-initialised
    OcclusionManager::m_ShowClippedAABB;

    // 0x103bbd544, 4 bytes, __common; zero-initialised
    OcclusionManager::m_FilterAABBDebug;

    // 0x103bbd548, 4 bytes, __common; zero-initialised
    OcclusionManager::m_NDCThreshold;

    // 0x103bbd54c, 1 bytes, __common; zero-initialised
    OcclusionManager::m_GeometryBatchCullingEnabled;

    // 0x103bbd54d, 1 bytes, __common; zero-initialised
    OcclusionManager::m_FlipVisibilityResults;

    // 0x103bbd54e, 1 bytes, __common; zero-initialised
    OcclusionManager::m_useAsyncDepthLoad;

    // 0x103bbd54f, 1 bytes, __common; zero-initialised
    OcclusionManager::m_useCurrentFrameAABBViewTransforms;

    // 0x103bbd550, 16 bytes, __common; zero-initialised
    OcclusionManager::m_disableOnVerticalCameraRotation;

    // 0x100823bb0, 352 bytes, base-object constructor, placed by class name and debug map
    // OcclusionManager::OcclusionManager(ThreadPool*)
    void OcclusionManager::OcclusionManager(ThreadPool* param_1) {
        Vector3T<float> local_50[16];
        Vector3T<float> local_40[16];

        field_0 = &PTR__OcclusionManager_100f15938;
        *(undefined1*)&field_8 = 0;
        math::Vector3T<float>::Vector3T(local_50, 0.0);
        math::Vector3T<float>::Vector3T(local_40, 0.0);
        new (&field_16, (Vector3T*)local_50, (Vector3T*)local_40) math::AABB();
        new (&field_48) std::array<Array<unsigned char, eastl::allocator>, 2ul>();
        m_minimumDepth = 3.4028235e+38;
        std::unique_ptr<DepthBufferRasterizerSSEST, std::default_delete<DepthBufferRasterizerSSEST>>::unique_ptr<true,
                                                                                                                 void>(
            (unique_ptr<DepthBufferRasterizerSSEST, std::default_delete<DepthBufferRasterizerSSEST>>*)&field_104);
        new (&field_128, "Texture2D") render::Texture2D();
        m_bufferWidth = 0;
        m_bufferHeight = 0;
        field_648 = 0.0;
        field_652 = 0.0;
        m_minimumDepthVariation = 0.01;
        std::atomic<unsigned int>::atomic((int)this + 660);
        std::atomic<unsigned int>::atomic((int)this + 664);
        std::atomic<unsigned int>::atomic((int)this + 668);
        std::atomic<unsigned int>::atomic((int)this + 672);
        std::atomic<unsigned int>::atomic((int)this + 676);
        std::atomic<unsigned int>::atomic((int)this + 680);
        field_684 = 0;
        new (&field_688, 384.0) math::Vector3T<float>();
        field_700 = 0;
        field_704 = param_1;
        m_renderInvalidTransforms = true;
        field_112 = (float*)0;
    }

    // 0x100823d60, 16 bytes, complete-object constructor, placed by class name and debug map
    // OcclusionManager::OcclusionManager(ThreadPool*): jumps straight to the base-object constructor

    // 0x100823d70, 112 bytes, base-object destructor, placed by class name and debug map
    // OcclusionManager::~OcclusionManager()
    void OcclusionManager::~OcclusionManager() {
        field_0 = &PTR__OcclusionManager_100f15938;
        Destroy(this);
        (&field_128)->~Texture2D();
        (&field_104)->~unique_ptr();
        (&field_48)->~array();
    }

    // 0x100823de0, 64 bytes, placed by class name and debug map
    // OcclusionManager::Destroy()
    void OcclusionManager::Destroy() {
        (&field_104, (DepthBufferRasterizerSSEST*)0)->reset();
        (&field_128)->Destroy();
        safe_delete_array<float>(&field_112);
        m_bufferWidth = 0;
        m_bufferHeight = 0;
    }

    // 0x100823e20, 16 bytes, complete-object destructor, placed by class name and debug map
    // OcclusionManager::~OcclusionManager(): jumps straight to the base-object destructor

    // 0x100823e30, 32 bytes, deleting destructor, placed by class name and debug map
    // OcclusionManager::~OcclusionManager()
    void OcclusionManager::~OcclusionManager() {
        ~OcclusionManager(this);
        operator_delete(this);
    }

    // 0x100823e50, 112 bytes, placed by class name and debug map
    // OcclusionManager::SetNoCullingAABB(math::Vector3T<float> const&)
    void OcclusionManager::SetNoCullingAABB(Vector3T* param_1) {
        OBB local_78;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_78) math::OBB(param_1, PTR_IDENTITY_100ee6718, (Vector3T*)&field_688);
        local_78.GetMinimumEnclosingAABB((AABB*)&field_16);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100823ec0, 48 bytes, placed by class name and debug map
    // OcclusionManager::GetGPUCullingSupported()
    void OcclusionManager::GetGPUCullingSupported() {
        undefined8 uVar1;
        undefined4 uVar2;
        BufferedRenderTargets* this_00;

        this_00 = (BufferedRenderTargets*)Instance();
        uVar1 = this_00->GetOrigin();
        uVar2 = this_00->GetOptimalDepthReadbackFormat();
        render::BufferedRenderTargets::IsContinuousReadbackSupported(uVar1, uVar2);
    }

    // 0x100823ef0, 688 bytes, placed by class name and debug map
    // OcclusionManager::RegisterTweakVars(tweak::ContainerGroup&)
    OcclusionManager* OcclusionManager::RegisterTweakVars(ContainerGroup* param_1) {
        Container* pCVar1;
        allocator local_50[8];
        float* local_48[4];

        eastl::allocator::allocator(local_50, "EASTL basic_string");
        new (local_48) eastl::string("Occlusion", local_50);
        (*(code*)param_1->field_0[30])(this, param_1, (eastl::string*)local_48);
        local_48->~basic_string();
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        pCVar1->AddCheckBox("Enabled", (bool*)&m_OcclusionEnabled);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        pCVar1->AddCheckBox("Debug Depth Buffer Gamma Correction", (bool*)&m_GammaCorrectDebugDepthBuffer);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        pCVar1->AddCheckBox("Show Downsampled GPU Depth Buffer", (bool*)&m_ShowDownsampledGPUDepthBuffer);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        pCVar1->AddCheckBox("Use Async Depth Load", (bool*)&m_useAsyncDepthLoad);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        pCVar1->AddCheckBox("Show AABB Depth Buffer", (bool*)&m_ShowAABBDebugDepthBuffer);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        pCVar1->AddCheckBox("Show Entire Test AABB", (bool*)&m_ShowEntireDebugAABB);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        pCVar1->AddCheckBox("Show Fail Point Only", (bool*)&m_ShowFailPointOnly);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        pCVar1->AddCheckBox("Merge AABB Depth with CPU Depth", (bool*)&m_MergeAABBCPUDepthBuffers);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        pCVar1->AddCheckBox("Show Culled AABBs", (bool*)&m_ShowCulledAABB);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        pCVar1->AddCheckBox("Show Non-Culled AABBs", (bool*)&m_ShowNonCulledAABB);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        pCVar1->AddCheckBox("Show Clipped AABBs", (bool*)&m_ShowClippedAABB);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        pCVar1->AddCheckBox("Filter AABB debug", (bool*)&m_FilterAABBDebug);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        local_48[0] = (float*)&m_NDCThreshold;
        tweak::Container::AddSlider<float>(pCVar1, "Occlusion Bin NDC Threshold", 0.0, 5.0, 0.001, local_48);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        pCVar1->AddCheckBox("Occlude with GeometryBatchInstances", (bool*)&m_GeometryBatchCullingEnabled);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        pCVar1->AddCheckBox("Flip visibility results", (bool*)&m_FlipVisibilityResults);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        pCVar1->AddCheckBox("Use AABB view transforms from current frame", (bool*)&m_useCurrentFrameAABBViewTransforms);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)this);
        pCVar1->AddCheckBox("Disable on fast vertical camera rotation", (bool*)&m_disableOnVerticalCameraRotation);
        return this;
    }

    // 0x1008241a0, 496 bytes, placed by class name and debug map
    // OcclusionManager::Init(unsigned int, unsigned int)
    void OcclusionManager::Init(uint param_1, uint param_2) {
        undefined1* this_00;
        Array<unsigned char, eastl::allocator>* this_01;
        Array<unsigned char, eastl::allocator>* this_02;
        DepthBufferRasterizerSSE* pDVar1;
        uint* puVar2;
        OcclusionManager* this_03;
        long lVar4;
        Singleton<render::RenderDevice>* this_04;
        Singleton<render::BuiltinStates>* this_05;
        undefined1 local_78[64];
        undefined8 local_38;

        m_bufferWidth = param_1;
        m_bufferHeight = param_2;
        field_648 = (float)param_1 * 0.5;
        field_652 = (float)param_2 * 0.5;
        std::make_unique<DepthBufferRasterizerSSEST, unsigned int&, unsigned int&>((uint*)local_78, &m_bufferWidth);
        this_00 = &field_104;
        std::unique_ptr<DepthBufferRasterizerSSEST, std::default_delete<DepthBufferRasterizerSSEST>>::operator=(
            (unique_ptr<DepthBufferRasterizerSSEST, std::default_delete<DepthBufferRasterizerSSEST>>*)this_00,
            (unique_ptr*)local_78);
        local_78->~unique_ptr();
        this_01 = (Array<unsigned char, eastl::allocator>*)
            std::array<Array<unsigned char, eastl::allocator>, 2ul>::operator[](
                (array<Array<unsigned char, eastl::allocator>, 2ul>*)&field_48, 0);
        this_01->set_max_size((ulong)(m_bufferHeight * m_bufferWidth) << 2, 0);
        this_02 = (Array<unsigned char, eastl::allocator>*)
            std::array<Array<unsigned char, eastl::allocator>, 2ul>::operator[](
                (array<Array<unsigned char, eastl::allocator>, 2ul>*)&field_48, 1);
        this_02->set_max_size((ulong)(m_bufferHeight * m_bufferWidth) << 2, 0);
        pDVar1 =
            (DepthBufferRasterizerSSE*)std::
                unique_ptr<DepthBufferRasterizerSSEST, std::default_delete<DepthBufferRasterizerSSEST>>::operator->(
                    (unique_ptr<DepthBufferRasterizerSSEST, std::default_delete<DepthBufferRasterizerSSEST>>*)this_00);
        puVar2 = (uint*)this_01->data();
        pDVar1->SetCPURenderTargetPixels(puVar2, 0);
        pDVar1 =
            (DepthBufferRasterizerSSE*)std::
                unique_ptr<DepthBufferRasterizerSSEST, std::default_delete<DepthBufferRasterizerSSEST>>::operator->(
                    (unique_ptr<DepthBufferRasterizerSSEST, std::default_delete<DepthBufferRasterizerSSEST>>*)this_00);
        puVar2 = (uint*)this_02->data();
        pDVar1->SetCPURenderTargetPixels(puVar2, 1);
        this_04 = (Singleton<render::RenderDevice>*)((ulong)(m_bufferHeight * m_bufferWidth) << 2);
        new (&local_38) Alignment(16);
        field_112 = operator_new__(this_04, local_38);
        this_03 = (OcclusionManager*)this_04->Instance();
        lVar4 = this_03->GetOrigin();
        if (*(char*)(lVar4 + 155) != '\0') {
            new (local_78) render::Texture::Desc();
            local_78->SetToDefault();
            local_78._0_4_ = m_bufferWidth;
            local_78._4_4_ = m_bufferHeight;
            local_78._12_4_ = 23;
            this_03 = (OcclusionManager*)&field_128;
            this_05 = (Singleton<render::BuiltinStates>*)this_03;
            this_03->Create(local_78, 0, 0);
            lVar4 = this_05->Instance();
            this_03->SetSamplerState((SamplerState*)(lVar4 + 80), false);
        }
        if (m_OcclusionEnabled == '\0') {
            m_OcclusionEnabled = 0;
        } else {
            m_OcclusionEnabled = GetGPUCullingSupported(this_03);
        }
    }

    // 0x100824490, 80 bytes, placed by class name
    // OcclusionManager::RasterizeToDepthBuffer(RT7Core&, RenderPassType, SceneViewData const&, DrawableQueue&)
    void OcclusionManager::RasterizeToDepthBuffer(undefined8 param_1, undefined4 param_3, undefined8 param_4,
                                                  undefined8 param_5) {
        long* plVar1;

        plVar1 =
            (long*)std::unique_ptr<DepthBufferRasterizerSSEST, std::default_delete<DepthBufferRasterizerSSEST>>::
            operator->(
                (unique_ptr<DepthBufferRasterizerSSEST, std::default_delete<DepthBufferRasterizerSSEST>>*)&field_104);
        (**(code**)(*plVar1 + 16))(plVar1, param_1, param_3, param_4, param_5);
    }

    // 0x1008244e0, 160 bytes, placed by class name
    // OcclusionManager::RenderDebug()
    void OcclusionManager::RenderDebug() {
        long* plVar1;
        undefined1 local_28[8];

        if ((m_bufferWidth != 0) && (m_bufferHeight != 0)) {
            if ((char)field_8 != '\0') {
                plVar1 =
                    (long*)
                        std::unique_ptr<DepthBufferRasterizerSSEST, std::default_delete<DepthBufferRasterizerSSEST>>::
                        operator->((unique_ptr<DepthBufferRasterizerSSEST,
                                               std::default_delete<DepthBufferRasterizerSSEST>>*)&field_104);
                (**(code**)(*plVar1 + 24))(plVar1);
                RenderAABBDepthBuffer(this);
                ClearAABBDepthBuffer(this);
            }
            if (m_ShowCulledAABB != '\0' || m_ShowNonCulledAABB != '\0') {
                plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar1 != (long*)0) {
                    new (local_28) oldscape::sidebars::SideBarData(-16776961, 3);
                    (**(code**)(*plVar1 + 72))(plVar1, &field_16, (SideBarData*)local_28);
                }
            }
        }
    }

    // 0x100824580, 576 bytes, placed by class name
    // OcclusionManager::RenderAABBDepthBuffer()
    void OcclusionManager::RenderAABBDepthBuffer() {
        undefined1* this_00;
        uint uVar1;
        uint uVar2;
        Texture2D* pTVar3;
        char cVar4;
        int iVar5;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_01;
        long lVar6;
        float* pfVar7;
        uchar* puVar8;
        long* plVar9;
        long lVar10;
        ulong uVar11;
        Array<unsigned char, BucketAllocatorEASTL> local_80[24];
        ImVec4 local_68[16];
        undefined1 local_58[16];
        Point<float> local_48[8];
        Texture2D* local_40;
        ColourStorage8888<math::ARGB8StorageLayout> local_38[8];

        if (m_ShowAABBDebugDepthBuffer != '\0') {
            this_00 = &field_128;
            cVar4 = this_00->IsCreated();
            if (cVar4 != '\0') {
                local_40 = (Texture2D*)this_00;
                if ((m_MergeAABBCPUDepthBuffers != '\0') && (m_bufferHeight * m_bufferWidth != 0)) {
                    lVar10 = 0;
                    this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                     std::default_delete<LoadingScreenScript::AnimLayer>>,
                                     eastl::allocator>*)
                        std::array<Array<unsigned char, eastl::allocator>, 2ul>::operator[](
                            (array<Array<unsigned char, eastl::allocator>, 2ul>*)&field_48, 0);
                    uVar11 = 0;
                    do {
                        pfVar7 = field_112;
                        lVar6 = this_01->data();
                        pfVar7 = std::max<float>((float*)((long)pfVar7 + lVar10), (float*)(lVar6 + lVar10));
                        *(float*)((long)field_112 + lVar10) = *pfVar7;
                        uVar11 = uVar11 + 1;
                        lVar10 = lVar10 + 4;
                    } while (uVar11 < m_bufferHeight * m_bufferWidth);
                }
                Array<unsigned char, BucketAllocatorEASTL>::Array(local_80, (ulong)(m_bufferHeight * m_bufferWidth));
                puVar8 = (uchar*)local_80->data();
                DeinterlaceFloatDebugBuffer(puVar8, field_112, m_bufferWidth, m_bufferHeight);
                uVar1 = m_bufferWidth;
                uVar2 = m_bufferHeight;
                uVar11 = local_80->data();
                pTVar3 = local_40;
                local_40->Update(0, 0, 0, uVar1, uVar2, 23, uVar11);
                plVar9 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar9 != (long*)0) {
                    ImVec4::ImVec4(local_68, 0.0, 0.2, 0.4, 0.4);
                    new ((local_58 + 8)) math::Point<float>(0.0, 0.0);
                    math::Point<float>::Point(local_48, 1.0, 1.0);
                    math::ColourStorage8888<math::ARGB8StorageLayout>::ColourStorage8888(local_38, 255, 255, 255, 255);
                    iVar5 = local_38->GetX();
                    new (local_58) oldscape::sidebars::SideBarData(iVar5, 0);
                    (**(code**)(*plVar9 + 112))(plVar9, pTVar3, local_68, local_58 + 8, local_48, 1, 0,
                                                uVar11 & 18446744069414584320, (SideBarData*)local_58);
                }
                local_80->~Array();
            }
        }
    }

    // 0x1008247c0, 48 bytes, placed by class name
    // OcclusionManager::ClearAABBDepthBuffer()
    void OcclusionManager::ClearAABBDepthBuffer() {
        if (m_ShowAABBDebugDepthBuffer != '\0') {
            ___bzero(field_112, (ulong)m_bufferHeight * (ulong)m_bufferWidth * 4);
        }
    }

    // 0x1008247f0, 880 bytes, placed by class name
    // OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)
    void OcclusionManager::LoadPackedDepthBuffer(float* param_1, int param_3) {
        float fVar1;
        float fVar2;
        char cVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_00;
        future<void>* pfVar4;
        undefined8* puVar5;
        undefined8* puVar6;
        Array<unsigned char, eastl::allocator>* this_01;
        ulong uVar7;
        array<Array<unsigned char, eastl::allocator>, 2ul>* this_02;
        undefined1 local_b8[8];
        array<std::future<void>, 4ul> local_b0[32];
        __5 local_90;
        ulong local_60;
        array<Array<unsigned char, eastl::allocator>, 2ul>* local_58;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* local_50;
        int local_44;
        float* local_40;
        float* local_38;

        this_02 = (array<Array<unsigned char, eastl::allocator>, 2ul>*)&field_48;
        local_44 = param_3;
        local_40 = param_1;
        this_00 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)std::array<Array<unsigned char, eastl::allocator>, 2ul>::operator[](this_02, 1);
        local_38 = (float*)this_00->data();
        if (local_38 != (float*)0) {
            if ((m_bufferWidth & 7) != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_BufferWidth % 8 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "occlusion/OcclusionManager.cpp",
                          316, (char*)0);
            }
            if (((m_useAsyncDepthLoad == '\0') || (local_44 == 11)) || (local_44 == 21)) {
                switch (local_44) {
                case 7:
                    LoadPackedDepthBufferInternalSSENonInterlaced<false>(this, local_38, (uchar*)local_40,
                                                                         (ulong)m_bufferHeight, 0);
                    break;
                default:
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/occlusion/OcclusionManager.cpp",
                                    369, (char*)0);
                case 11:
                    LoadFloatDepthBuffer(this, local_38, local_40);
                    break;
                case 21:
                    LoadHalfFloatDepthBuffer(this, local_38, (ushort*)local_40);
                    break;
                case 29:
                    LoadPackedDepthBufferInternalSSENonInterlaced<true>(this, local_38, (uchar*)local_40,
                                                                        (ulong)m_bufferHeight, 0);
                }
            } else {
                local_58 = this_02;
                local_50 = this_00;
                if ((m_bufferHeight & 3) != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_BufferHeight % numWorkers == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "occlusion/OcclusionManager.cpp",
                              322, (char*)0);
                }
                std::array<std::future<void>, 4ul>::array(local_b0);
                local_60 = (ulong)(m_bufferHeight >> 2);
                uVar7 = 0;
                do {
                    local_90.field_8 = &local_44;
                    local_90.field_24 = &local_38;
                    local_90.field_32 = &local_40;
                    local_90.field_0 = uVar7;
                    local_90.field_16 = this;
                    local_90.field_40 = &local_60;
                    ThreadPool::AddTask<OcclusionManager::LoadPackedDepthBuffer(
                        unsigned char const*, render::Format)::__5>((ThreadPool*)local_b8, (char*)field_704, &local_90);
                    pfVar4 = (future<void>*)std::array<std::future<void>, 4ul>::operator[](local_b0, uVar7);
                    std::future<void>::operator=(pfVar4, (future*)local_b8);
                    local_b8->~future();
                    uVar7 = uVar7 + 1;
                } while (uVar7 != 4);
                uVar7 = 0;
                do {
                    pfVar4 = (future<void>*)std::array<std::future<void>, 4ul>::operator[](local_b0, uVar7);
                    cVar3 = std::future<void>::valid(pfVar4);
                    if (cVar3 == '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("workers[i].valid()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/occlusion/OcclusionManager.cpp",
                                  347, (char*)0);
                    }
                    std::future<void>::wait();
                    uVar7 = uVar7 + 1;
                } while (uVar7 != 4);
                std::array<std::future<void>, 4ul>::~array(local_b0);
                this_00 = local_50;
                this_02 = local_58;
            }
            local_90._0_16_ = eastl::minmax_element<float*>(local_38, local_38 + m_bufferHeight * m_bufferWidth);
            puVar5 = (undefined8*)eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
            puVar6 = (undefined8*)local_90.second();
            fVar1 = *(float*)*puVar5;
            fVar2 = *(float*)*puVar6;
            m_minimumDepth = fVar1;
            if (m_minimumDepthVariation <= fVar2 - fVar1) {
                SetSuccessfulDepthReadFrame(this);
                this_01 = (Array<unsigned char, eastl::allocator>*)
                    std::array<Array<unsigned char, eastl::allocator>, 2ul>::operator[](this_02, 0);
                Array<unsigned char, eastl::allocator>::operator=(this_01, (Array*)this_00);
            }
        }
    }

    // 0x100824f30, 48 bytes, placed by class name
    // OcclusionManager::LoadFloatDepthBuffer(float*, float const*)
    void OcclusionManager::LoadFloatDepthBuffer(float* param_1, float* param_2) {
        _memcpy(param_1, param_2, (ulong)(m_bufferHeight * m_bufferWidth) << 2);
    }

    // 0x100824f60, 96 bytes, placed by class name
    // OcclusionManager::LoadHalfFloatDepthBuffer(float*, unsigned short const*)
    void OcclusionManager::LoadHalfFloatDepthBuffer(float* param_1, ushort* param_2) {
        uint uVar1;
        ulong uVar2;

        uVar1 = m_bufferHeight * m_bufferWidth;
        if (uVar1 != 0) {
            uVar2 = 0;
            do {
                param_1[uVar2] = (float)types::Float16ToFloat(param_2[uVar2]);
                uVar2 = uVar2 + 1;
            } while (uVar1 != uVar2);
        }
    }

    // 0x100824fd0, 48 bytes, placed by class name
    // OcclusionManager::SetSuccessfulDepthReadFrame()
    void OcclusionManager::SetSuccessfulDepthReadFrame() {
        GraphicsApp* this_00;

        this_00 = (GraphicsApp*)Instance();
        field_700 = this_00->GetFrameCount();
    }

    // 0x100825000, 352 bytes, placed by class name
    // OcclusionManager::LoadPackedDepthBufferInternalNonSSE(float*, unsigned char const*, render::Format)
    undefined1[16] OcclusionManager::LoadPackedDepthBufferInternalNonSSE(long param_1, long param_2, int param_4) {
        byte bVar1;
        uint uVar2;
        uint uVar3;
        long lVar4;
        long lVar5;
        ulong uVar6;
        ulong uVar7;
        ulong uVar8;
        ulong uVar9;
        long lVar10;
        uint uVar11;
        uint uVar12;
        ulong uVar13;
        undefined1 auVar14[16];

        if ((param_4 != 7) && (param_4 != 29)) {
            /* WARNING: Subroutine does not return */
            LogAssert("format == render::FORMAT_B8G8R8A8_UNORM || format == render::FORMAT_R8G8B8A8_UNORM",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/OcclusionManager.cpp",
                      410, (char*)0);
        }
        uVar6 = 0;
        uVar8 = 0;
        uVar2 = m_bufferHeight;
        if (uVar2 != 0) {
            uVar3 = m_bufferWidth;
            uVar13 = (ulong)uVar3;
            uVar8 = (ulong)(param_4 != 29);
            lVar4 = uVar8 * 2;
            uVar6 = (ulong)(param_4 == 29);
            lVar5 = uVar6 * 2;
            uVar11 = 0;
            lVar10 = 0;
            uVar12 = 0;
            do {
                if (uVar13 != 0) {
                    uVar6 = (ulong)uVar11;
                    uVar9 = 0;
                    do {
                        uVar7 = (ulong)(uint)((int)lVar10 + (int)uVar9);
                        *(float*)(param_1 + uVar7 * 4) =
                            (float)*(byte*)(param_2 + (uVar6 | 2)) * -0.003921569 + 1.0 +
                            (float)*(byte*)(param_2 + (lVar4 + 1U | uVar6)) * -1.5378702e-05;
                        bVar1 = *(byte*)(param_2 + (uVar6 | lVar5 + 1U));
                        uVar8 = (ulong)bVar1;
                        *(float*)(param_1 + 4 + uVar7 * 4) =
                            (float)*(byte*)(param_2 + uVar6) * -0.003921569 + 1.0 + (float)bVar1 * -1.5378702e-05;
                        uVar9 = uVar9 + 2;
                        uVar6 = (ulong)((int)uVar6 + 4);
                    } while (uVar9 < uVar13);
                }
                uVar12 = uVar12 + 1;
                lVar10 = lVar10 + uVar13;
                uVar11 = uVar11 + (uVar3 >> 1) * 4;
            } while (uVar12 != uVar2);
        }
        auVar14._8_8_ = uVar8;
        auVar14._0_8_ = uVar6;
        return auVar14;
    }

    // 0x100825160, 160 bytes, placed by class name
    // OcclusionManager::DeinterlaceFloatDebugBuffer(unsigned char*, float const*, unsigned int, unsigned int)
    void OcclusionManager::DeinterlaceFloatDebugBuffer(uchar* param_1, float* param_2, uint param_3, uint param_4) {
        undefined8 in_RAX;
        float* pfVar1;
        ulong uVar2;
        float fVar3;
        undefined8 local_38;

        if (param_3 * param_4 != 0) {
            uVar2 = 0;
            local_38 = in_RAX;
            do {
                if (m_GammaCorrectDebugDepthBuffer == '\0') {
                    fVar3 = param_2[uVar2];
                } else {
                    local_38 = CONCAT44(local_38._4_4_, 1065353216);
                    fVar3 = (float)::sqrt(param_2[uVar2]);
                    local_38 = CONCAT44(fVar3 * 4.0, (float)local_38);
                    pfVar1 = std::min<float>((float*)&local_38, (float*)((long)&local_38 + 4));
                    fVar3 = *pfVar1;
                }
                param_1[uVar2] = (uchar)(int)(fVar3 * 255.0);
                uVar2 = uVar2 + 1;
            } while (param_3 * param_4 != uVar2);
        }
    }

    // 0x100825200, 80 bytes, placed by class name
    // OcclusionManager::DepthBufferCanOcclude() const
    bool OcclusionManager::DepthBufferCanOcclude() {
        uint uVar1;
        int iVar2;
        TextRun* this_00;
        GraphicsApp* this_01;
        bool bVar3;

        if (m_CPUDepthBufferGenerationEnabled == '\0') {
            uVar1 = field_700;
            this_01 = (GraphicsApp*)Instance();
            iVar2 = this_01->GetFrameCount();
            bVar3 = iVar2 - 5U < uVar1;
        } else {
            this_00 =
                (TextRun*)std::unique_ptr<DepthBufferRasterizerSSEST, std::default_delete<DepthBufferRasterizerSSEST>>::
                operator->((unique_ptr<DepthBufferRasterizerSSEST,
                                       std::default_delete<DepthBufferRasterizerSSEST>>*)&field_104);
            iVar2 = this_00->GetMaxLineWidth();
            bVar3 = iVar2 != 0;
        }
        return bVar3;
    }

    // 0x100825250, 192 bytes, placed by class name
    // OcclusionManager::UpdateStats()
    void OcclusionManager::UpdateStats() {
        uint uVar1;

        uVar1 = field_684 + 1;
        field_684 = uVar1;
        if (16 < uVar1) {
            field_684 = 0;
            uVar1 = (&field_660)->operator_cast_to_unsigned_int();
            std::atomic<unsigned int>::operator=((atomic<unsigned int>*)&field_672, uVar1 >> 4);
            uVar1 = (&field_664)->operator_cast_to_unsigned_int();
            std::atomic<unsigned int>::operator=((atomic<unsigned int>*)&field_676, uVar1 >> 4);
            uVar1 = (&field_668)->operator_cast_to_unsigned_int();
            std::atomic<unsigned int>::operator=((atomic<unsigned int>*)&field_680, uVar1 >> 4);
            std::atomic<unsigned int>::operator=((atomic<unsigned int>*)&field_660, 0);
            std::atomic<unsigned int>::operator=((atomic<unsigned int>*)&field_664, 0);
            std::atomic<unsigned int>::operator=((atomic<unsigned int>*)&field_668, 0);
        }
    }

    // 0x100825330, 480 bytes, placed by class name
    // OcclusionManager::OBBVisible(math::OBB const&, SceneViewData const&, SceneViewData const*, float)
    undefined8 OcclusionManager::OBBVisible(OBB* param_1, SceneViewData* param_2, SceneViewData* param_3,
                                            float param_4) {
        Vector3T* pVVar2;
        Vector3T<float>* this_00;
        float* pfVar3;
        undefined8 uVar4;
        uint uVar5;
        Vector3T local_b8[40];
        float local_90;
        float local_8c;
        OBB local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_8c = param_4;
        if ((&field_104)->operator_cast_to_bool()) {
            new (&local_88) math::OBB(param_1);
            if (local_8c != 1.0) {
                pVVar2 = (Vector3T*)local_88.GetScreen();
                local_b8._0_8_ = math::operator*(pVVar2, local_8c);
                local_88.SetHalfSize(local_b8);
            }
            local_8c = (float)local_88.GetMinimumRadius();
            if (((0.0 < param_2->m_minOcclusionDrawableRadius) && (local_8c < param_2->m_minOcclusionDrawableRadius)) &&
                (0.0 < local_8c)) {
                this_00 = (Vector3T<float>*)local_88.GetScreen();
                local_90 = param_2->m_minOcclusionDrawableRadius;
                uVar5 = 0;
                do {
                    pfVar3 = (float*)math::Vector3T<float>::operator[](this_00, uVar5);
                    if (*pfVar3 < param_2->m_minOcclusionDrawableAxisLength) {
                        pfVar3 = (float*)math::Vector3T<float>::operator[](this_00, uVar5);
                        *pfVar3 = (*pfVar3 * local_90) / local_8c;
                    }
                    uVar5 = uVar5 + 1;
                } while (uVar5 != 3);
            }
            new (local_b8) math::AABB();
            local_88.GetMinimumEnclosingAABB(local_b8);
            uVar4 = AABBVisible((AABB*)this, (SceneViewData*)local_b8, param_2);
        } else {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/occlusion/OcclusionManager.cpp",
                                530, "OcclusionManager::OBBVisible: Missing depth buffer!");
            uVar4 = 1;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar4;
    }

    // 0x100825530, 416 bytes, placed by class name
    // OcclusionManager::AABBVisible(math::AABB const&, SceneViewData const&, SceneViewData const*)
    bool OcclusionManager::AABBVisible(AABB* param_1, SceneViewData* param_2, SceneViewData* param_3) {
        char cVar1;
        char cVar2;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this;
        float* pfVar3;
        long* plVar4;
        SceneViewData* in_RCX;
        SceneViewData* pSVar5;
        long lVar6;
        SideBarData local_b8[10];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)&param_1[18].field_12);
        if (1.0 < param_1[2].field_24 || param_1[2].field_24 == 1.0) {
            cVar2 = '\0';
        } else {
            lVar6 = 0;
            do {
                new (((long)&local_b8[0].field_0 + lVar6)) math::Vector4T<float>();
                lVar6 = lVar6 + 16;
            } while (lVar6 != 128);
            pSVar5 = param_3;
            if (m_useCurrentFrameAABBViewTransforms == '\0') {
                pSVar5 = in_RCX;
            }
            if (in_RCX == (SceneViewData*)0) {
                pSVar5 = param_3;
            }
            cVar2 = TransformAABBox((OcclusionManager*)param_1, (AABB*)param_2, (Vector4T*)local_b8, pSVar5);
            if (cVar2 == '\0') {
                cVar2 = *(char*)&param_1[19].field_28;
            } else {
                std::__atomic_base<unsigned int, true>::operator++(
                    (__atomic_base<unsigned int, true>*)&param_1[18].m_maximum);
                this = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)
                    std::array<Array<unsigned char, eastl::allocator>, 2ul>::operator[](
                        (array<Array<unsigned char, eastl::allocator>, 2ul>*)&param_1[1].field_12, 0);
                pfVar3 = (float*)data();
                cVar2 = ApproxDepthTestAABBox((OcclusionManager*)param_1, pfVar3, (Vector4T*)local_b8);
            }
            if (cVar2 != '\0') {
                std::__atomic_base<unsigned int, true>::operator++(
                    (__atomic_base<unsigned int, true>*)&param_1[18].field_20);
            }
        }
        cVar1 = m_FlipVisibilityResults;
        if ((((cVar2 == m_FlipVisibilityResults) && (m_ShowCulledAABB != '\0')) ||
             ((cVar2 != m_FlipVisibilityResults && (m_ShowNonCulledAABB != '\0')))) &&
            (((m_FilterAABBDebug == '\0' || (*(char*)&param_1->field_8 != '\0')) &&
              (plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector(""), plVar4 != (long*)0)))) {
            oldscape::sidebars::SideBarData::SideBarData(local_b8, -8323073, 3);
            (**(code**)(*plVar4 + 72))(plVar4, param_2, local_b8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return cVar2 != cVar1;
    }

    // 0x1008256e0, 1056 bytes, placed by class name
    // OcclusionManager::TransformAABBox(math::AABB const&, math::Vector4T<float>*, SceneViewData const&)
    undefined4 OcclusionManager::TransformAABBox(AABB* param_1, Vector4T* param_2, SceneViewData* param_3) {
        float fVar1;
        float fVar2;
        char cVar3;
        RT7Core* this_00;
        Matrix44T* pMVar4;
        vector* pvVar5;
        float* pfVar6;
        Layout* pLVar7;
        Vector2T<int>* pVVar8;
        long* plVar9;
        Vector3T* pVVar10;
        Vector4T* this_01;
        type* ptVar11;
        AABB* pAVar13;
        long lVar14;
        ulong uVar15;
        OcclusionManager* pOVar16;
        undefined8 uVar17;
        float fVar18;
        Vector4T<float> local_c8[16];
        undefined1 local_b8[32];
        undefined1 local_98[48];
        undefined1 local_58[16];
        GridRect local_48;
        float local_34;

        cVar3 = param_1->IsValid();
        if (cVar3 != '\0') {
            ptVar11 = (type*)&field_16;
            cVar3 = param_1->TestIntersection(ptVar11);
            if (cVar3 == '\0') {
                this_00 = (RT7Core*)param_3->SSOBeginPtr(ptVar11);
                pMVar4 = (Matrix44T*)this_00->GetImmediateThreadPool();
                local_34 = (float)TransformAABBoxInternal(this, param_1, param_2, pMVar4);
                if (SUB41(local_34, 0) != '\0') {
                    return local_34;
                }
                new ((local_98 + 32)) math::Vector4T<float>(3.4028235e+38);
                math::Vector4T<float>::Vector4T(local_c8, 1.1754944e-38);
                lVar14 = 0;
                do {
                    pLVar7 = (Layout*)(param_2 + lVar14);
                    eastl::string::Layout::SSOBeginPtr(pLVar7, (type*)param_1);
                    pLVar7->y();
                    pLVar7->second();
                    uVar17 = math::Vector4Min<float>((Vector4T*)(local_98 + 32), (Vector4T*)pLVar7);
                    local_b8._0_8_ = uVar17;
                    math::Rect<float>::operator=((Rect<float>*)(local_98 + 32), (Rect*)local_b8);
                    uVar17 = math::Vector4Max<float>((Vector4T*)local_c8, (Vector4T*)pLVar7);
                    param_1 = (AABB*)local_b8;
                    local_b8._0_8_ = uVar17;
                    math::Rect<float>::operator=((Rect<float>*)local_c8, (Rect*)local_b8);
                    this_01 = param_2;
                    lVar14 = lVar14 + 16;
                } while (lVar14 != 128);
                pvVar5 = ((local_98 + 32))->SSOBeginPtr(param_1);
                if (*(float*)pvVar5 == 3.4028235e+38) {
                    return local_34;
                }
                new (local_98) math::ColourHSL(0.0, 0.0, 0.0);
                pOVar16 = (OcclusionManager*)this;
                fVar18 = (float)((OcclusionManager*)this)->m_bufferHeight;
                new (&local_48) math::ColourHSL((float)((OcclusionManager*)this)->m_bufferWidth, fVar18, 1.0);
                new (local_b8) math::AABB(local_98, (Vector3T*)&local_48);
                local_48._0_8_ = ((local_98 + 32))->GetXYZ();
                local_48.field_8 = (int)fVar18;
                local_58._0_8_ = local_c8->GetXYZ();
                local_58._8_4_ = fVar18;
                new (local_98) math::AABB((Vector3T*)&local_48, local_58);
                if ((m_ShowClippedAABB != '\0') && ((m_FilterAABBDebug == '\0' || ((char)pOVar16->field_8 != '\0')))) {
                    pvVar5 = local_98->SSOBeginPtr((type*)&local_48);
                    pvVar5 = pvVar5->SSOBeginPtr((type*)&local_48);
                    fVar18 = *(float*)pvVar5;
                    pvVar5 = local_98->SSOBeginPtr((type*)&local_48);
                    pfVar6 = (float*)pvVar5->y();
                    fVar1 = *pfVar6;
                    pLVar7 = (Layout*)local_98->GetScreen();
                    pvVar5 = eastl::string::Layout::SSOBeginPtr(pLVar7, (type*)&local_48);
                    fVar2 = *(float*)pvVar5;
                    pVVar8 = (Vector2T<int>*)local_98->GetScreen();
                    pfVar6 = (float*)pVVar8->y();
                    new (&local_48) oldscape::dash3d::GridRect((int)fVar18, (int)fVar1, (int)fVar2, (int)*pfVar6);
                    plVar9 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar9 != (long*)0) {
                        new (local_58) oldscape::sidebars::SideBarData(1073807104, 0);
                        (**(code**)(*plVar9 + 152))(plVar9, &local_48, 0, (SideBarData*)local_58);
                    }
                    pOVar16 = (OcclusionManager*)this;
                }
                pAVar13 = (AABB*)local_b8;
                local_98->Intersection(pAVar13);
                cVar3 = local_98->IsValid();
                if (cVar3 == '\0') {
                    return local_34;
                }
                if ((m_ShowClippedAABB != '\0') && ((m_FilterAABBDebug == '\0' || ((char)pOVar16->field_8 != '\0')))) {
                    pvVar5 = local_98->SSOBeginPtr(pAVar13);
                    pvVar5 = pvVar5->SSOBeginPtr(pAVar13);
                    fVar18 = *(float*)pvVar5;
                    pvVar5 = local_98->SSOBeginPtr(pAVar13);
                    pfVar6 = (float*)pvVar5->y();
                    fVar1 = *pfVar6;
                    pLVar7 = (Layout*)local_98->GetScreen();
                    pvVar5 = eastl::string::Layout::SSOBeginPtr(pLVar7, (type*)pAVar13);
                    fVar2 = *(float*)pvVar5;
                    pVVar8 = (Vector2T<int>*)local_98->GetScreen();
                    pfVar6 = (float*)pVVar8->y();
                    pAVar13 = (AABB*)(ulong)(uint)(int)fVar18;
                    new (&local_48) oldscape::dash3d::GridRect((int)fVar18, (int)fVar1, (int)fVar2, (int)*pfVar6);
                    plVar9 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar9 != (long*)0) {
                        new (local_58) oldscape::sidebars::SideBarData(1073742079, 0);
                        pAVar13 = (AABB*)&local_48;
                        (**(code**)(*plVar9 + 152))(plVar9, pAVar13, 0, (SideBarData*)local_58);
                    }
                }
                uVar15 = 18446744073709551614;
                do {
                    pvVar5 = local_98->SSOBeginPtr(pAVar13);
                    new (&local_48) math::Vector4T<float>(pvVar5, 0.0);
                    math::Rect<float>::operator=((Rect<float>*)this_01, (Rect*)&local_48);
                    pVVar10 = (Vector3T*)local_98->GetScreen();
                    new (&local_48) math::Vector4T<float>(pVVar10, 0.0);
                    pAVar13 = (AABB*)&local_48;
                    math::Rect<float>::operator=((Rect<float>*)(this_01 + 16), (Rect*)&local_48);
                    uVar15 = uVar15 + 2;
                    this_01 = this_01 + 32;
                } while (uVar15 < 6);
                return 1;
            }
        }
        return 0;
    }

    // 0x100825b00, 1072 bytes, placed by class name
    // OcclusionManager::ApproxDepthTestAABBox(float const*, math::Vector4T<float> const*)
    bool OcclusionManager::ApproxDepthTestAABBox(float* param_1, Vector4T* param_2) {
        float fVar1;
        float fVar2;
        char cVar3;
        bool bVar4;
        float* pfVar5;
        ulong uVar6;
        float* pfVar7;
        uint uVar8;
        int iVar9;
        uint uVar10;
        int iVar11;
        uint uVar12;
        int iVar13;
        uint uVar14;
        long lVar15;
        OcclusionManager* pOVar16;
        uint uVar17;
        char cVar18;
        float fVar19;
        float fVar20;
        undefined8 uVar21;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 local_88;
        undefined8 uStack_80;
        float local_78;
        float local_74;
        uint local_70;
        uint local_6c;
        ulong local_60;
        undefined8 local_58;
        float local_40;
        uint local_3c;
        char local_35;
        float local_34;

        if (m_bufferWidth == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_BufferWidth > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/OcclusionManager.cpp",
                      810, (char*)0);
        }
        if (m_bufferHeight == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_BufferHeight > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/OcclusionManager.cpp",
                      811, (char*)0);
        }
        local_98 = *(undefined8*)param_2;
        uStack_90 = *(undefined8*)(param_2 + 8);
        local_88 = *(undefined8*)param_2;
        uStack_80 = *(undefined8*)(param_2 + 8);
        lVar15 = 16;
        do {
            uVar21 = math::Vector4Min<float>((Vector4T*)&local_98, param_2 + lVar15);
            local_58 = uVar21;
            math::Rect<float>::operator=((Rect<float>*)&local_98, (Rect*)&local_58);
            uVar21 = math::Vector4Max<float>((Vector4T*)&local_88, param_2 + lVar15);
            local_58 = uVar21;
            math::Rect<float>::operator=((Rect<float>*)&local_88, (Rect*)&local_58);
            pOVar16 = (OcclusionManager*)this;
            lVar15 = lVar15 + 16;
        } while (lVar15 != 128);
        local_58._0_4_ = (float)uStack_80;
        local_78 = (float)((OcclusionManager*)this)->m_bufferWidth;
        local_74 = (float)((OcclusionManager*)this)->m_bufferHeight;
        if ((((0.0 < (float)local_98) || (0.0 < local_98._4_4_)) || ((float)local_88 < local_78)) ||
            (local_88._4_4_ < local_74)) {
            local_34 = 0.0;
            pfVar5 = std::max<float>(&local_34, (float*)&local_98);
            fVar1 = *pfVar5;
            local_34 = 0.0;
            pfVar5 = std::max<float>(&local_34, (float*)((long)&local_98 + 4));
            fVar2 = *pfVar5;
            local_34 = (float)local_88 + 1.0;
            local_40 = 0.0;
            fVar19 = math::Clamp<float>(&local_34, &local_40, &local_78);
            local_34 = local_88._4_4_ + 1.0;
            local_40 = 0.0;
            fVar20 = math::Clamp<float>(&local_34, &local_40, &local_74);
            cVar3 = m_ShowFailPointOnly;
            cVar18 = m_ShowEntireDebugAABB;
            uVar14 = (uint)(long)fVar1;
            bVar4 = pOVar16->m_bufferWidth == uVar14;
            uVar8 = uVar14 - bVar4;
            uVar10 = (uint)(long)fVar2 - (uint)(pOVar16->m_bufferHeight == (uint)(long)fVar2);
            uVar6 = (ulong)uVar10;
            uVar12 = (uint)(long)fVar19;
            local_35 = uVar8 < uVar12;
            local_3c = uVar8;
            if ((!(bool)local_35) || (uVar17 = (uint)(long)fVar20, uVar17 <= uVar10)) {
                /* WARNING: Subroutine does not return */
                LogAssert("minX < maxX && minY < maxY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "occlusion/OcclusionManager.cpp",
                          847, (char*)0);
            }
            local_60 = uVar6;
            if ((m_ShowAABBDebugDepthBuffer != '\0') && (uVar10 < uVar17)) {
                local_6c = pOVar16->m_bufferWidth;
                do {
                    local_70 = (uint)uVar6;
                    if (uVar8 < uVar12) {
                        lVar15 = (long)(int)(local_6c * local_70 + uVar8) << 2;
                        do {
                            if ((cVar3 == '\0') || (*(float*)((long)param_1 + lVar15) <= (float)local_58)) {
                                pfVar5 = ((OcclusionManager*)this)->field_112;
                                pfVar7 = std::max<float>((float*)((long)pfVar5 + lVar15), (float*)&local_58);
                                *(float*)((long)pfVar5 + lVar15) = *pfVar7;
                                pOVar16 = (OcclusionManager*)this;
                            }
                            if ((cVar18 == '\0') && (*(float*)((long)param_1 + lVar15) <= (float)local_58)) {
                                uVar8 = local_3c;
                                local_70 = uVar17;
                                goto LAB_100825dbd;
                            }
                            uVar8 = uVar8 + 1;
                            lVar15 = lVar15 + 4;
                        } while (uVar8 < uVar12);
                        uVar8 = local_3c;
                    }
                LAB_100825dbd:
                    uVar6 = (ulong)(local_70 + 1);
                } while (local_70 + 1 < uVar17);
            }
            if ((uint)local_60 < uVar17) {
                iVar11 = -(uint)bVar4;
                iVar9 = pOVar16->m_bufferWidth * (uint)local_60 + uVar14 + iVar11;
                do {
                    iVar13 = 0;
                    if (uVar8 < uVar12) {
                        cVar18 = true;
                        if ((float)local_58 < param_1[iVar9]) {
                            pfVar5 = param_1 + (long)iVar9 + 1;
                            uVar8 = uVar14 + iVar11;
                            do {
                                uVar8 = uVar8 + 1;
                                cVar18 = uVar8 < uVar12;
                                if (!(bool)cVar18)
                                    goto LAB_100825ef3;
                                fVar1 = *pfVar5;
                                pfVar5 = pfVar5 + 1;
                            } while ((float)local_58 < fVar1);
                        }
                        iVar13 = 1;
                        if ((bool)cVar18)
                            goto LAB_100825f0b;
                    } else {
                        cVar18 = local_35;
                    LAB_100825ef3:
                        if (cVar18 != '\0')
                            goto LAB_100825f0b;
                    }
                    uVar10 = (int)local_60 + 1;
                    local_60 = (ulong)uVar10;
                    iVar9 = iVar9 + pOVar16->m_bufferWidth;
                    uVar8 = local_3c;
                } while (uVar10 < uVar17);
            }
            iVar13 = 11;
        LAB_100825f0b:
            bVar4 = iVar13 != 11;
        } else {
            bVar4 = ((OcclusionManager*)this)->m_minimumDepth < (float)uStack_80 ||
                    1.0 <= ((OcclusionManager*)this)->m_minimumDepth;
        }
        return bVar4;
    }

    // 0x100825f30, 1376 bytes, placed by class name
    // OcclusionManager::TransformAABBoxInternal(math::AABB const&, math::Vector4T<float>*, math::Matrix44T<float> const&)
    ulong OcclusionManager::TransformAABBoxInternal(AABB* param_1, Vector4T* param_2, Matrix44T* param_3) {
        vector* pvVar2;
        Vector3T* pVVar3;
        Vector4T* pVVar4;
        float* pfVar5;
        undefined8* puVar6;
        undefined4* puVar7;
        type* ptVar8;
        long lVar9;
        float in_XMM1_Da;
        undefined4 in_XMM1_Db;
        undefined8 local_120;
        float local_118;
        Vector4T<float> local_108[16];
        Vector4T<float> local_f8[24];
        float local_d4;
        ulong local_d0;
        undefined8 local_c8;
        float local_c0;
        undefined8 local_b8;
        undefined8 uStack_b0;
        float local_9c;
        Rect<float> local_98[16];
        Rect<float> local_88[16];
        Rect<float> local_78[16];
        Rect<float> local_68[16];
        Rect<float> local_58[16];
        Rect<float> local_48[16];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pvVar2 = param_1->SSOBeginPtr(param_1);
        math::Vector4T<float>::Vector4T(local_108, (Vector3T*)pvVar2, 1.0);
        pVVar3 = (Vector3T*)param_1->GetScreen();
        math::Vector4T<float>::Vector4T(local_f8, pVVar3, 1.0);
        lVar9 = 0;
        do {
            new ((local_58 + lVar9)) math::Vector4T<float>();
            lVar9 = lVar9 + 16;
        } while (lVar9 != 32);
        lVar9 = 0;
        do {
            new ((local_78 + lVar9)) math::Vector4T<float>();
            lVar9 = lVar9 + 16;
        } while (lVar9 != 32);
        lVar9 = 0;
        do {
            new ((local_98 + lVar9)) math::Vector4T<float>();
            lVar9 = lVar9 + 16;
        } while (lVar9 != 32);
        pvVar2 = local_108->SSOBeginPtr(pVVar3);
        new (&local_c8) math::Vector4T<float>(*(float*)pvVar2);
        lVar9 = 0;
        pVVar4 = (Vector4T*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 0);
        local_b8 = math::operator*((Vector4T*)&local_c8, pVVar4);
        math::Rect<float>::operator=(local_58, (Rect*)&local_b8);
        pvVar2 = local_f8->SSOBeginPtr((type*)(Rect*)&local_b8);
        new (&local_c8) math::Vector4T<float>(*(float*)pvVar2);
        pVVar4 = (Vector4T*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 0);
        local_b8 = math::operator*((Vector4T*)&local_c8, pVVar4);
        math::Rect<float>::operator=(local_48, (Rect*)&local_b8);
        pfVar5 = (float*)local_108->y();
        new (&local_c8) math::Vector4T<float>(*pfVar5);
        pVVar4 = (Vector4T*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 1);
        local_b8 = math::operator*((Vector4T*)&local_c8, pVVar4);
        math::Rect<float>::operator=(local_78, (Rect*)&local_b8);
        pfVar5 = (float*)local_f8->y();
        new (&local_c8) math::Vector4T<float>(*pfVar5);
        pVVar4 = (Vector4T*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 1);
        local_b8 = math::operator*((Vector4T*)&local_c8, pVVar4);
        math::Rect<float>::operator=(local_68, (Rect*)&local_b8);
        pfVar5 = (float*)local_108->second();
        new (&local_c8) math::Vector4T<float>(*pfVar5);
        pVVar4 = (Vector4T*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 2);
        local_b8 = math::operator*((Vector4T*)&local_c8, pVVar4);
        math::Rect<float>::operator=(local_98, (Rect*)&local_b8);
        pfVar5 = (float*)local_f8->second();
        new (&local_c8) math::Vector4T<float>(*pfVar5);
        pVVar4 = (Vector4T*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 2);
        local_b8 = math::operator*((Vector4T*)&local_c8, pVVar4);
        uStack_b0 = CONCAT44(in_XMM1_Db, in_XMM1_Da);
        math::Rect<float>::operator=(local_88, (Rect*)&local_b8);
        local_d0 = 0;
        do {
            puVar6 = (undefined8*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 3);
            local_b8 = *puVar6;
            uStack_b0 = puVar6[1];
            math::QuaternionT<float>::operator+=(
                (QuaternionT<float>*)&local_b8,
                (QuaternionT*)(local_58 + (ulong) * (uint*)((long)&sBBxInd + lVar9) * 16));
            math::QuaternionT<float>::operator+=(
                (QuaternionT<float>*)&local_b8,
                (QuaternionT*)(local_78 + (ulong) * (uint*)((long)&sBByInd + lVar9) * 16));
            math::QuaternionT<float>::operator+=(
                (QuaternionT<float>*)&local_b8,
                (QuaternionT*)(local_98 + (ulong) * (uint*)((long)&sBBzInd + lVar9) * 16));
            puVar7 = (undefined4*)local_b8.qw();
            local_c8 = CONCAT44(local_c8._4_4_, *puVar7) ^ 2147483648;
            ptVar8 = (type*)local_b8.second();
            pfVar5 = std::max<float>((float*)&local_c8, (float*)ptVar8);
            local_9c = *pfVar5;
            pfVar5 = (float*)local_b8.second();
            *pfVar5 = local_9c;
            local_c8 = local_b8.GetXYZ();
            local_c0 = in_XMM1_Da;
            pfVar5 = (float*)local_b8.qw();
            local_120 = math::operator/((Vector3T*)&local_c8, *pfVar5);
            local_118 = in_XMM1_Da;
            if ((local_d0 & 1) == 0) {
                pvVar2 = local_120.SSOBeginPtr(ptVar8);
                if (-1.0 < *(float*)pvVar2 || *(float*)pvVar2 == -1.0) {
                    pfVar5 = (float*)local_120.y();
                    if (-1.0 < *pfVar5 || *pfVar5 == -1.0) {
                        pvVar2 = local_120.SSOBeginPtr(ptVar8);
                        if (*(float*)pvVar2 <= 1.0) {
                            pfVar5 = (float*)local_120.y();
                            if (*pfVar5 <= 1.0) {
                                local_d0 = CONCAT71((int7)((ulong)pfVar5 >> 8), 1);
                            }
                        }
                    }
                }
            }
            pvVar2 = local_120.SSOBeginPtr(ptVar8);
            local_9c = (*(float*)pvVar2 + 1.0) * ((OcclusionManager*)this)->field_648;
            pfVar5 = (float*)local_120.y();
            local_d4 = (1.0 - *pfVar5) * ((OcclusionManager*)this)->field_652;
            pfVar5 = (float*)local_120.second();
            in_XMM1_Da = local_d4;
            new (&local_c8) ImVec4(local_9c, local_d4, 0.5 - *pfVar5 * 0.5, 1.0);
            math::Rect<float>::operator=((Rect<float>*)param_2, (Rect*)&local_c8);
            lVar9 = lVar9 + 4;
            param_2 = param_2 + 16;
        } while (lVar9 != 32);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_d0 & 18446744073709551361;
    }

    // 0x100826490, 112 bytes, placed by class name
    // OcclusionManager::Gather(math::Vector4T<float>*, unsigned int, math::Vector4T<float> const*)
    void OcclusionManager::Gather(Vector4T* param_1, uint param_2, Vector4T* param_3) {
        long lVar1;

        lVar1 = 0;
        do {
            math::Rect<float>::operator=(
                (Rect<float>*)param_1,
                (Rect*)(param_3 + (ulong) * (uint*)(&sBBIndexList + (ulong)(param_2 * 3 + (int)lVar1) * 4) * 16));
            lVar1 = lVar1 + 1;
            param_1 = param_1 + 16;
        } while (lVar1 != 3);
    }

    // 0x100826500, 656 bytes, placed by class name
    // OcclusionManager::AABBGather(vFloat4*, unsigned int, math::Vector4T<float> const*, unsigned int)
    void OcclusionManager::AABBGather(vFloat4* param_1, uint param_2, Vector4T* param_3, uint param_4) {
        uint uVar1;
        uint uVar2;
        uint uVar3;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        undefined4 uVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        undefined8 uVar11;
        undefined8 uVar12;
        undefined8 uVar13;
        undefined8 uVar14;
        undefined8* puVar15;
        undefined4* puVar16;
        undefined4 in_register_0000000c;
        long lVar17;
        undefined4 in_register_00000034;
        undefined4* puVar18;
        ulong uVar19;
        undefined4 local_68;
        undefined4 uStack_64;
        undefined4 uStack_60;
        undefined4 uStack_5c;
        undefined4 local_58;
        undefined4 uStack_54;
        undefined4 uStack_50;
        undefined4 uStack_4c;
        undefined4 local_48;
        undefined4 uStack_44;
        undefined4 uStack_40;
        undefined4 uStack_3c;

        puVar18 = (undefined4*)CONCAT44(in_register_00000034, param_2);
        lVar17 = CONCAT44(in_register_0000000c, param_4);
        uVar19 = (ulong)param_3 & 4294967295;
        uVar1 = *(uint*)(&sBBIndexList + (ulong)(uint)((int)param_3 * 3) * 4);
        uVar2 = *(uint*)(&sBBIndexList + (uVar19 * 3 + 3 & 4294967295) * 4);
        uVar3 = *(uint*)(&sBBIndexList + (uVar19 * 3 + 6 & 4294967295) * 4);
        puVar15 = (undefined8*)math::Vector4T<float>::operator[](
            (Vector4T<float>*)((ulong) * (uint*)(&sBBIndexList + (ulong)((int)param_3 * 3 + 9) * 4) * 16 + lVar17), 0);
        uVar9 = *puVar15;
        uVar10 = puVar15[1];
        puVar15 = (undefined8*)math::Vector4T<float>::operator[]((Vector4T<float>*)((ulong)uVar2 * 16 + lVar17), 0);
        uVar11 = *puVar15;
        uVar12 = puVar15[1];
        puVar15 = (undefined8*)math::Vector4T<float>::operator[]((Vector4T<float>*)((ulong)uVar3 * 16 + lVar17), 0);
        uVar13 = *puVar15;
        uVar14 = puVar15[1];
        puVar16 = (undefined4*)math::Vector4T<float>::operator[]((Vector4T<float>*)((ulong)uVar1 * 16 + lVar17), 0);
        uVar5 = puVar16[1];
        uVar6 = puVar16[2];
        uVar7 = puVar16[3];
        local_58 = (undefined4)uVar11;
        uStack_54 = (undefined4)((ulong)uVar11 >> 32);
        uStack_50 = (undefined4)uVar12;
        uStack_4c = (undefined4)((ulong)uVar12 >> 32);
        local_48 = (undefined4)uVar13;
        uStack_44 = (undefined4)((ulong)uVar13 >> 32);
        uStack_40 = (undefined4)uVar14;
        uStack_3c = (undefined4)((ulong)uVar14 >> 32);
        local_68 = (undefined4)uVar9;
        uStack_64 = (undefined4)((ulong)uVar9 >> 32);
        uStack_60 = (undefined4)uVar10;
        uStack_5c = (undefined4)((ulong)uVar10 >> 32);
        *puVar18 = *puVar16;
        puVar18[1] = local_58;
        puVar18[2] = local_48;
        puVar18[3] = local_68;
        puVar18[4] = uVar5;
        puVar18[5] = uStack_54;
        puVar18[6] = uStack_44;
        puVar18[7] = uStack_64;
        puVar18[8] = uVar6;
        puVar18[9] = uStack_50;
        puVar18[10] = uStack_40;
        puVar18[11] = uStack_60;
        puVar18[12] = uVar7;
        puVar18[13] = uStack_4c;
        puVar18[14] = uStack_3c;
        puVar18[15] = uStack_5c;
        uVar1 = *(uint*)(&sBBIndexList + (uVar19 * 3 + 1 & 4294967295) * 4);
        uVar2 = *(uint*)(&sBBIndexList + (uVar19 * 3 + 4 & 4294967295) * 4);
        uVar3 = *(uint*)(&sBBIndexList + (uVar19 * 3 + 7 & 4294967295) * 4);
        puVar15 = (undefined8*)math::Vector4T<float>::operator[](
            (Vector4T<float>*)((ulong) * (uint*)(&sBBIndexList + (ulong)((int)param_3 * 3 + 10) * 4) * 16 + lVar17), 0);
        uVar9 = *puVar15;
        uVar10 = puVar15[1];
        puVar15 = (undefined8*)math::Vector4T<float>::operator[]((Vector4T<float>*)((ulong)uVar2 * 16 + lVar17), 0);
        uVar11 = *puVar15;
        uVar12 = puVar15[1];
        puVar15 = (undefined8*)math::Vector4T<float>::operator[]((Vector4T<float>*)((ulong)uVar3 * 16 + lVar17), 0);
        uVar13 = *puVar15;
        uVar14 = puVar15[1];
        puVar16 = (undefined4*)math::Vector4T<float>::operator[]((Vector4T<float>*)((ulong)uVar1 * 16 + lVar17), 0);
        uVar5 = *puVar16;
        uVar6 = puVar16[1];
        uVar7 = puVar16[2];
        uVar8 = puVar16[3];
        local_68 = (undefined4)uVar9;
        uStack_64 = (undefined4)((ulong)uVar9 >> 32);
        uStack_60 = (undefined4)uVar10;
        uStack_5c = (undefined4)((ulong)uVar10 >> 32);
        local_58 = (undefined4)uVar11;
        uStack_54 = (undefined4)((ulong)uVar11 >> 32);
        uStack_50 = (undefined4)uVar12;
        uStack_4c = (undefined4)((ulong)uVar12 >> 32);
        local_48 = (undefined4)uVar13;
        uStack_44 = (undefined4)((ulong)uVar13 >> 32);
        uStack_40 = (undefined4)uVar14;
        uStack_3c = (undefined4)((ulong)uVar14 >> 32);
        puVar18[16] = local_68;
        puVar18[17] = local_58;
        puVar18[18] = local_48;
        puVar18[19] = uVar5;
        puVar18[20] = uStack_64;
        puVar18[21] = uStack_54;
        puVar18[22] = uStack_44;
        puVar18[23] = uVar6;
        puVar18[24] = uStack_60;
        puVar18[25] = uStack_50;
        puVar18[26] = uStack_40;
        puVar18[27] = uVar7;
        puVar18[28] = uStack_5c;
        puVar18[29] = uStack_4c;
        puVar18[30] = uStack_3c;
        puVar18[31] = uVar8;
        uVar1 = *(uint*)(&sBBIndexList + (uVar19 * 3 + 2 & 4294967295) * 4);
        uVar2 = *(uint*)(&sBBIndexList + (uVar19 * 3 + 5 & 4294967295) * 4);
        uVar3 = *(uint*)(&sBBIndexList + (uVar19 * 3 + 8 & 4294967295) * 4);
        puVar15 = (undefined8*)math::Vector4T<float>::operator[](
            (Vector4T<float>*)((ulong) * (uint*)(&sBBIndexList + (ulong)((int)param_3 * 3 + 11) * 4) * 16 + lVar17), 0);
        uVar9 = *puVar15;
        uVar10 = puVar15[1];
        puVar15 = (undefined8*)math::Vector4T<float>::operator[]((Vector4T<float>*)((ulong)uVar2 * 16 + lVar17), 0);
        uVar11 = *puVar15;
        uVar12 = puVar15[1];
        puVar15 = (undefined8*)math::Vector4T<float>::operator[]((Vector4T<float>*)((ulong)uVar3 * 16 + lVar17), 0);
        uVar13 = *puVar15;
        uVar14 = puVar15[1];
        puVar16 = (undefined4*)math::Vector4T<float>::operator[]((Vector4T<float>*)((ulong)uVar1 * 16 + lVar17), 0);
        uVar5 = *puVar16;
        uVar6 = puVar16[1];
        uVar7 = puVar16[2];
        uVar8 = puVar16[3];
        local_68 = (undefined4)uVar9;
        uStack_64 = (undefined4)((ulong)uVar9 >> 32);
        uStack_60 = (undefined4)uVar10;
        uStack_5c = (undefined4)((ulong)uVar10 >> 32);
        local_58 = (undefined4)uVar11;
        uStack_54 = (undefined4)((ulong)uVar11 >> 32);
        uStack_50 = (undefined4)uVar12;
        uStack_4c = (undefined4)((ulong)uVar12 >> 32);
        local_48 = (undefined4)uVar13;
        uStack_44 = (undefined4)((ulong)uVar13 >> 32);
        uStack_40 = (undefined4)uVar14;
        uStack_3c = (undefined4)((ulong)uVar14 >> 32);
        puVar18[32] = local_68;
        puVar18[33] = local_58;
        puVar18[34] = local_48;
        puVar18[35] = uVar5;
        puVar18[36] = uStack_64;
        puVar18[37] = uStack_54;
        puVar18[38] = uStack_44;
        puVar18[39] = uVar6;
        puVar18[40] = uStack_60;
        puVar18[41] = uStack_50;
        puVar18[42] = uStack_40;
        puVar18[43] = uVar7;
        puVar18[44] = uStack_5c;
        puVar18[45] = uStack_4c;
        puVar18[46] = uStack_3c;
        puVar18[47] = uVar8;
    }

    // 0x100826790, 2528 bytes, placed by class name
    // OcclusionManager::RasterizeAndDepthTestAABBox(unsigned int*, math::Vector4T<float> const*, unsigned int)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* OcclusionManager::RasterizeAndDepthTestAABBox(unsigned int*,
   math::Vector4T<float> const*, unsigned int) */

    undefined8 OcclusionManager::RasterizeAndDepthTestAABBox(uint* param_1, Vector4T* param_2, uint param_3) {
        Vector4T* pVVar1;
        undefined4 uVar2;
        uint uVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        undefined1 auVar16[16];
        char cVar17;
        int iVar18;
        uint uVar19;
        long lVar20;
        ulong uVar21;
        long lVar22;
        uint uVar23;
        int iVar24;
        Vector4T* pVVar25;
        int iVar26;
        vFloat4* pvVar27;
        bool bVar28;
        int iVar29;
        uint uVar44;
        uint uVar45;
        undefined1 auVar31[16];
        undefined1 auVar32[16];
        undefined1 auVar33[16];
        undefined1 auVar34[16];
        undefined1 auVar35[16];
        undefined1 auVar36[16];
        undefined1 auVar37[16];
        undefined1 auVar38[16];
        undefined1 auVar39[16];
        undefined1 auVar40[16];
        undefined1 auVar41[16];
        undefined1 auVar42[16];
        uint uVar30;
        uint uVar46;
        undefined1 auVar43[16];
        uint uVar47;
        uint uVar54;
        uint uVar55;
        undefined1 auVar48[16];
        undefined1 auVar49[16];
        undefined1 auVar50[16];
        undefined1 auVar51[16];
        undefined1 auVar52[16];
        undefined1 auVar53[16];
        uint uVar56;
        int iVar57;
        float fVar62;
        int iVar63;
        float fVar64;
        undefined1 auVar58[16];
        undefined1 auVar59[16];
        undefined1 auVar60[16];
        undefined1 auVar61[16];
        float fVar65;
        undefined1 auVar66[16];
        undefined1 auVar67[16];
        int iVar68;
        int iVar69;
        uint uVar70;
        uint uVar73;
        uint uVar74;
        undefined1 auVar71[16];
        undefined1 auVar72[16];
        uint uVar75;
        undefined1 auVar76[16];
        undefined1 auVar77[16];
        uint uVar78;
        int iVar80;
        uint uVar81;
        uint uVar82;
        int iVar83;
        undefined1 auVar79[16];
        uint uVar84;
        int iVar85;
        uint uVar86;
        int iVar89;
        uint uVar90;
        int iVar91;
        uint uVar92;
        int iVar93;
        undefined1 auVar87[16];
        undefined1 auVar88[16];
        uint uVar94;
        int iVar95;
        int iVar96;
        int iVar97;
        uint uVar98;
        uint uVar101;
        uint uVar102;
        undefined1 auVar99[16];
        undefined1 auVar100[16];
        uint uVar103;
        uint uVar104;
        uint uVar105;
        uint uVar106;
        uint uVar107;
        float fVar108;
        float fVar109;
        int iVar110;
        float fVar111;
        float fVar112;
        undefined1 auVar113[16];
        undefined1 local_1c8[16];
        float local_1b8[12];
        undefined8 local_188;
        float fStack_180;
        float fStack_17c;
        float local_178;
        float fStack_174;
        float fStack_170;
        float fStack_16c;
        float local_168;
        float fStack_164;
        float fStack_160;
        float fStack_15c;
        int local_158[12];
        undefined1 local_128[16];
        undefined1 local_118[16];
        undefined1 local_108[16];
        float local_f8[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        MXCSR = MXCSR | 32832;
        pVVar25 = (Vector4T*)0;
        pvVar27 = (vFloat4*)param_1;
        do {
            AABBGather(pvVar27, (uint)local_f8, pVVar25, param_3);
            cVar17 = m_ShowAABBDebugDepthBuffer;
            lVar20 = 0;
            do {
                fVar108 = local_f8[lVar20 + 1];
                fVar109 = local_f8[lVar20 + 2];
                fVar111 = local_f8[lVar20 + 3];
                fVar112 = local_f8[lVar20 + 4];
                fVar12 = local_f8[lVar20 + 5];
                fVar13 = local_f8[lVar20 + 6];
                fVar14 = local_f8[lVar20 + 7];
                *(int*)(local_128 + lVar20) = (int)local_f8[lVar20];
                *(int*)(local_128 + lVar20 + 4) = (int)fVar108;
                *(int*)(local_128 + lVar20 + 8) = (int)fVar109;
                *(int*)(local_128 + lVar20 + 12) = (int)fVar111;
                *(int*)((long)local_158 + lVar20) = (int)fVar112;
                *(int*)((long)local_158 + lVar20 + 4) = (int)fVar12;
                *(int*)((long)local_158 + lVar20 + 8) = (int)fVar13;
                *(int*)((long)local_158 + lVar20 + 12) = (int)fVar14;
                lVar20 = lVar20 + 16;
            } while (lVar20 != 48);
            auVar113._4_4_ = local_158[1];
            auVar113._0_4_ = local_158[0];
            auVar113._8_4_ = local_158[2];
            auVar113._12_4_ = local_158[3];
            auVar16._4_4_ = local_158[9];
            auVar16._0_4_ = local_158[8];
            auVar16._8_4_ = local_158[10];
            auVar16._12_4_ = local_158[11];
            iVar85 = local_118._0_4_;
            iVar95 = local_128._0_4_;
            auVar87._0_4_ = -(uint)(iVar95 < iVar85);
            iVar89 = local_118._4_4_;
            iVar96 = local_128._4_4_;
            auVar87._4_4_ = -(uint)(iVar96 < iVar89);
            iVar91 = local_118._8_4_;
            iVar18 = local_128._8_4_;
            iVar93 = local_118._12_4_;
            auVar87._8_4_ = -(uint)(iVar18 < iVar91);
            iVar97 = local_128._12_4_;
            auVar87._12_4_ = -(uint)(iVar97 < iVar93);
            iVar29 = local_108._0_4_;
            iVar57 = local_108._4_4_;
            iVar63 = local_108._12_4_;
            auVar58._0_4_ = -(uint)(iVar85 < iVar95);
            auVar58._4_4_ = -(uint)(iVar89 < iVar96);
            auVar58._8_4_ = -(uint)(iVar91 < iVar18);
            auVar58._12_4_ = -(uint)(iVar93 < iVar97);
            auVar99._0_4_ = iVar85 - iVar95;
            auVar99._4_4_ = iVar89 - iVar96;
            auVar99._8_4_ = iVar91 - iVar18;
            auVar99._12_4_ = iVar93 - iVar97;
            auVar31._0_4_ = iVar95 - iVar29;
            auVar31._4_4_ = iVar96 - iVar57;
            iVar110 = local_108._8_4_;
            auVar31._8_4_ = iVar18 - iVar110;
            auVar31._12_4_ = iVar97 - iVar63;
            auVar88 = ~auVar87 & local_118 | local_128 & auVar87;
            auVar67._0_4_ = -(uint)(auVar88._0_4_ < iVar29);
            auVar67._4_4_ = -(uint)(auVar88._4_4_ < iVar57);
            auVar67._8_4_ = -(uint)(auVar88._8_4_ < iVar110);
            auVar67._12_4_ = -(uint)(auVar88._12_4_ < iVar63);
            auVar59 = ~auVar58 & local_118 | local_128 & auVar58;
            auVar66._0_4_ = -(uint)(iVar29 < auVar59._0_4_);
            auVar66._4_4_ = -(uint)(iVar57 < auVar59._4_4_);
            auVar66._8_4_ = -(uint)(iVar110 < auVar59._8_4_);
            auVar66._12_4_ = -(uint)(iVar63 < auVar59._12_4_);
            iVar80 = local_158[9] - local_158[1];
            iVar83 = local_158[11] - local_158[3];
            auVar71._4_4_ = iVar80;
            auVar71._0_4_ = iVar80;
            auVar71._8_4_ = iVar83;
            auVar71._12_4_ = iVar83;
            auVar36._4_4_ = local_158[5];
            auVar36._0_4_ = local_158[4];
            auVar36._8_4_ = local_158[6];
            auVar36._12_4_ = local_158[7];
            iVar68 = local_158[1] - local_158[5];
            iVar69 = local_158[3] - local_158[7];
            auVar48._4_4_ = iVar68;
            auVar48._0_4_ = iVar68;
            auVar48._8_4_ = iVar69;
            auVar48._12_4_ = iVar69;
            fVar108 =
                (float)(auVar99._0_4_ * (local_158[8] - local_158[0]) - auVar31._0_4_ * (local_158[0] - local_158[4]));
            fVar109 = (float)(iVar80 * auVar99._4_4_ - iVar68 * auVar31._4_4_);
            fVar111 = (float)((int)((auVar99._8_8_ & 4294967295) * (ulong)(uint)(local_158[10] - local_158[2])) -
                              (int)((auVar31._8_8_ & 4294967295) * (ulong)(uint)(local_158[2] - local_158[6])));
            fVar112 = (float)((int)((auVar71._8_8_ & 4294967295) * (ulong)auVar99._12_4_) -
                              (int)((auVar48._8_8_ & 4294967295) * (ulong)auVar31._12_4_));
            auVar32._0_4_ = (float)(int)fVar108;
            auVar32._4_4_ = (float)(int)fVar109;
            auVar32._8_4_ = (float)(int)fVar111;
            auVar32._12_4_ = (float)(int)fVar112;
            auVar32 = rcpps(auVar32, auVar32);
            local_188._0_4_ = local_f8[8];
            local_188._4_4_ = local_f8[9];
            fStack_180 = local_f8[10];
            fStack_17c = local_f8[11];
            local_178 = (local_f8[24] - local_f8[8]) * auVar32._0_4_;
            fStack_174 = (local_f8[25] - local_f8[9]) * auVar32._4_4_;
            fStack_170 = (local_f8[26] - local_f8[10]) * auVar32._8_4_;
            fStack_16c = (local_f8[27] - local_f8[11]) * auVar32._12_4_;
            local_168 = (local_f8[40] - local_f8[8]) * auVar32._0_4_;
            fStack_164 = (local_f8[41] - local_f8[9]) * auVar32._4_4_;
            fStack_160 = (local_f8[42] - local_f8[10]) * auVar32._8_4_;
            fStack_15c = (local_f8[43] - local_f8[11]) * auVar32._12_4_;
            auVar71 = ~auVar67 & local_108 | auVar88 & auVar67;
            auVar88._0_4_ = -(uint)(0 < auVar71._0_4_);
            auVar88._4_4_ = -(uint)(0 < auVar71._4_4_);
            auVar88._8_4_ = -(uint)(0 < auVar71._8_4_);
            auVar88._12_4_ = -(uint)(0 < auVar71._12_4_);
            auVar71 = auVar71 & _DAT_100d4ac90;
            auVar67 = ~auVar66 & local_108 | auVar59 & auVar66;
            iVar18 = param_1[160] - 1;
            auVar59._4_4_ = iVar18;
            auVar59._0_4_ = iVar18;
            auVar59._8_4_ = iVar18;
            auVar59._12_4_ = iVar18;
            auVar49._0_4_ = -(uint)(auVar67._0_4_ < iVar18);
            auVar49._4_4_ = -(uint)(auVar67._4_4_ < iVar18);
            auVar49._8_4_ = -(uint)(auVar67._8_4_ < iVar18);
            auVar49._12_4_ = -(uint)(auVar67._12_4_ < iVar18);
            auVar33._0_4_ = -(uint)(local_158[0] < local_158[4]);
            auVar33._4_4_ = -(uint)(local_158[1] < local_158[5]);
            auVar33._8_4_ = -(uint)(local_158[2] < local_158[6]);
            auVar33._12_4_ = -(uint)(local_158[3] < local_158[7]);
            auVar32 = ~auVar33 & auVar36 | auVar113 & auVar33;
            auVar50._0_4_ = -(uint)(auVar32._0_4_ < local_158[8]);
            auVar50._4_4_ = -(uint)(auVar32._4_4_ < local_158[9]);
            auVar50._8_4_ = -(uint)(auVar32._8_4_ < local_158[10]);
            auVar50._12_4_ = -(uint)(auVar32._12_4_ < local_158[11]);
            auVar32 = ~auVar50 & auVar16 | auVar32 & auVar50;
            auVar34._0_4_ = -(uint)(0 < auVar32._0_4_);
            auVar34._4_4_ = -(uint)(0 < auVar32._4_4_);
            auVar34._8_4_ = -(uint)(0 < auVar32._8_4_);
            auVar34._12_4_ = -(uint)(0 < auVar32._12_4_);
            auVar32 = auVar32 & _DAT_100d4ac90;
            auVar35._0_4_ = -(uint)(local_158[4] < local_158[0]);
            auVar35._4_4_ = -(uint)(local_158[5] < local_158[1]);
            auVar35._8_4_ = -(uint)(local_158[6] < local_158[2]);
            auVar35._12_4_ = -(uint)(local_158[7] < local_158[3]);
            auVar36 = ~auVar35 & auVar36 | auVar113 & auVar35;
            auVar51._0_4_ = -(uint)(local_158[8] < auVar36._0_4_);
            auVar51._4_4_ = -(uint)(local_158[9] < auVar36._4_4_);
            auVar51._8_4_ = -(uint)(local_158[10] < auVar36._8_4_);
            auVar51._12_4_ = -(uint)(local_158[11] < auVar36._12_4_);
            auVar36 = ~auVar51 & auVar16 | auVar36 & auVar51;
            iVar18 = param_1[161] - 1;
            auVar37._4_4_ = iVar18;
            auVar37._0_4_ = iVar18;
            auVar37._8_4_ = iVar18;
            auVar37._12_4_ = iVar18;
            auVar76._0_4_ = -(uint)(auVar36._0_4_ < iVar18);
            auVar76._4_4_ = -(uint)(auVar36._4_4_ < iVar18);
            auVar76._8_4_ = -(uint)(auVar36._8_4_ < iVar18);
            auVar76._12_4_ = -(uint)(auVar36._12_4_ < iVar18);
            lVar20 = 0;
            do {
                local_1b8[0] = fVar108;
                local_1b8[1] = fVar109;
                local_1b8[2] = fVar111;
                local_1b8[3] = fVar112;
                if (0 < (int)local_1b8[lVar20]) {
                    lVar22 = 0;
                    do {
                        local_1c8._8_8_ = *(undefined8*)((long)local_158 + lVar22 + -40);
                        local_1c8._0_8_ = *(undefined8*)((long)local_1b8 + lVar22 + 48);
                        uVar2 = *(undefined4*)(local_1c8 + lVar20 * 4);
                        *(undefined4*)((long)local_1b8 + lVar22) = uVar2;
                        *(undefined4*)((long)local_1b8 + lVar22 + 4) = uVar2;
                        *(undefined4*)((long)local_1b8 + lVar22 + 8) = uVar2;
                        *(undefined4*)((long)local_1b8 + lVar22 + 12) = uVar2;
                        lVar22 = lVar22 + 16;
                    } while (lVar22 != 48);
                    local_1c8 = auVar71 & auVar88;
                    uVar3 = *(uint*)(local_1c8 + lVar20 * 4);
                    local_1c8 = ~auVar49 & auVar59 | auVar67 & auVar49;
                    uVar19 = *(uint*)(local_1c8 + lVar20 * 4);
                    pvVar27 = (vFloat4*)(ulong)uVar19;
                    local_1c8 = auVar32 & auVar34;
                    iVar18 = *(int*)(local_1c8 + lVar20 * 4);
                    local_1c8 = ~auVar76 & auVar37 | auVar36 & auVar76;
                    iVar4 = *(int*)(local_1c8 + lVar20 * 4);
                    local_1c8._4_4_ = local_158[5] - local_158[9];
                    local_1c8._0_4_ = local_158[4] - local_158[8];
                    local_1c8._8_4_ = local_158[6] - local_158[10];
                    local_1c8._12_4_ = local_158[7] - local_158[11];
                    uVar92 = *(uint*)(local_1c8 + lVar20 * 4);
                    local_1c8._4_4_ = iVar80;
                    local_1c8._0_4_ = local_158[8] - local_158[0];
                    local_1c8._8_4_ = local_158[10] - local_158[2];
                    local_1c8._12_4_ = iVar83;
                    iVar26 = *(int*)(local_1c8 + lVar20 * 4);
                    local_1c8._4_4_ = iVar68;
                    local_1c8._0_4_ = local_158[0] - local_158[4];
                    local_1c8._12_4_ = iVar69;
                    local_1c8._8_4_ = local_158[2] - local_158[6];
                    iVar5 = *(int*)(local_1c8 + lVar20 * 4);
                    local_1c8._4_4_ = iVar57 - iVar89;
                    local_1c8._0_4_ = iVar29 - iVar85;
                    local_1c8._12_4_ = iVar63 - iVar93;
                    local_1c8._8_4_ = iVar110 - iVar91;
                    uVar94 = *(uint*)(local_1c8 + lVar20 * 4);
                    local_1c8 = auVar31;
                    iVar6 = *(int*)(local_1c8 + lVar20 * 4);
                    local_1c8 = auVar99;
                    iVar7 = *(int*)(local_1c8 + lVar20 * 4);
                    local_1c8._4_4_ = local_158[9] * iVar89 - local_158[5] * iVar57;
                    local_1c8._0_4_ = iVar85 * local_158[8] - iVar29 * local_158[4];
                    local_1c8._12_4_ = local_158[11] * iVar93 - local_158[7] * iVar63;
                    local_1c8._8_4_ = (int)((local_118._8_8_ & 4294967295) * (ulong)(uint)local_158[10]) -
                                      (int)((local_108._8_8_ & 4294967295) * (ulong)(uint)local_158[6]);
                    iVar8 = *(int*)(local_1c8 + lVar20 * 4);
                    local_1c8._4_4_ = iVar57 * local_158[1] - local_158[9] * iVar96;
                    local_1c8._0_4_ = iVar29 * local_158[0] - iVar95 * local_158[8];
                    local_1c8._8_4_ = (int)((local_108._8_8_ & 4294967295) * (ulong)(uint)local_158[2]) -
                                      (int)((local_128._8_8_ & 4294967295) * (ulong)(uint)local_158[10]);
                    local_1c8._12_4_ = iVar63 * local_158[3] - local_158[11] * iVar97;
                    iVar9 = *(int*)(local_1c8 + lVar20 * 4);
                    local_1c8._4_4_ = iVar96 * local_158[5] - local_158[1] * iVar89;
                    local_1c8._0_4_ = iVar95 * local_158[4] - iVar85 * local_158[0];
                    local_1c8._8_4_ = (int)((local_128._8_8_ & 4294967295) * (ulong)(uint)local_158[6]) -
                                      (int)((local_118._8_8_ & 4294967295) * (ulong)(uint)local_158[2]);
                    local_1c8._12_4_ = iVar97 * local_158[7] - local_158[3] * iVar93;
                    iVar24 = 0;
                    bVar28 = iVar18 < iVar4;
                    if (iVar18 < iVar4) {
                        auVar79._4_4_ = iVar26;
                        auVar79._0_4_ = iVar26;
                        auVar79._8_4_ = iVar26;
                        auVar79._12_4_ = iVar26;
                        auVar100._4_4_ = iVar5;
                        auVar100._0_4_ = iVar5;
                        auVar100._8_4_ = iVar5;
                        auVar100._12_4_ = iVar5;
                        auVar72._4_4_ = iVar7;
                        auVar72._0_4_ = iVar7;
                        auVar72._8_4_ = iVar7;
                        auVar72._12_4_ = iVar7;
                        iVar10 = iVar26 * 2;
                        iVar11 = iVar5 * 2;
                        auVar60._4_4_ = uVar3 + 1;
                        auVar60._0_4_ = uVar3;
                        auVar60._8_4_ = uVar3;
                        auVar60._12_4_ = uVar3 + 1;
                        auVar77._4_4_ = iVar18;
                        auVar77._0_4_ = iVar18;
                        auVar77._8_4_ = iVar18 + 1;
                        auVar77._12_4_ = iVar18 + 1;
                        auVar38._4_4_ = iVar7;
                        auVar38._0_4_ = iVar7;
                        auVar38._8_4_ = iVar7;
                        auVar38._12_4_ = iVar7;
                        auVar39._4_4_ = iVar5;
                        auVar39._0_4_ = iVar5;
                        auVar39._8_4_ = iVar5;
                        auVar39._12_4_ = iVar5;
                        iVar24 = *(int*)(local_1c8 + lVar20 * 4);
                        uVar98 = iVar24 + iVar5 * uVar3 + iVar7 * iVar18;
                        uVar101 = iVar24 + iVar5 * auVar60._4_4_ + iVar7 * iVar18;
                        uVar102 = iVar24 + (int)((auVar100._8_8_ & 4294967295) * (ulong)uVar3) +
                                  (int)((auVar72._8_8_ & 4294967295) * (ulong)auVar77._8_4_);
                        uVar103 = iVar24 + (int)((auVar39._8_8_ & 4294967295) * (ulong)auVar60._12_4_) +
                                  (int)((auVar38._8_8_ & 4294967295) * (ulong)auVar77._12_4_);
                        auVar40._4_4_ = iVar6;
                        auVar40._0_4_ = iVar6;
                        auVar40._8_4_ = iVar6;
                        auVar40._12_4_ = iVar6;
                        auVar52._4_4_ = iVar6;
                        auVar52._0_4_ = iVar6;
                        auVar52._8_4_ = iVar6;
                        auVar52._12_4_ = iVar6;
                        auVar53._4_4_ = iVar26;
                        auVar53._0_4_ = iVar26;
                        auVar53._8_4_ = iVar26;
                        auVar53._12_4_ = iVar26;
                        uVar78 = iVar9 + iVar26 * uVar3 + iVar6 * iVar18;
                        uVar81 = iVar9 + iVar26 * auVar60._4_4_ + iVar6 * iVar18;
                        uVar82 = iVar9 + (int)((auVar79._8_8_ & 4294967295) * (ulong)uVar3) +
                                 (int)((auVar40._8_8_ & 4294967295) * (ulong)auVar77._8_4_);
                        uVar84 = iVar9 + (int)((auVar53._8_8_ & 4294967295) * (ulong)auVar60._12_4_) +
                                 (int)((auVar52._8_8_ & 4294967295) * (ulong)auVar77._12_4_);
                        auVar41._4_4_ = uVar94;
                        auVar41._0_4_ = uVar94;
                        auVar41._8_4_ = uVar94;
                        auVar41._12_4_ = uVar94;
                        auVar42._4_4_ = uVar92;
                        auVar42._0_4_ = uVar92;
                        auVar42._8_4_ = uVar92;
                        auVar42._12_4_ = uVar92;
                        iVar5 = uVar92 * 2;
                        iVar9 = uVar94 * 2;
                        iVar6 = iVar6 * 2;
                        iVar7 = iVar7 * 2;
                        uVar86 = iVar8 + uVar3 * uVar92 + iVar18 * uVar94;
                        uVar90 = iVar8 + uVar92 * auVar60._4_4_ + uVar94 * iVar18;
                        uVar92 = iVar8 + (int)((auVar60._8_8_ & 4294967295) * (ulong)uVar92) +
                                 (int)((auVar77._8_8_ & 4294967295) * (ulong)uVar94);
                        uVar94 = iVar8 + (int)((auVar42._8_8_ & 4294967295) * (ulong)auVar60._12_4_) +
                                 (int)((auVar41._8_8_ & 4294967295) * (ulong)auVar77._12_4_);
                        iVar26 = param_1[160] * iVar18 + uVar3 * 2;
                        bVar28 = true;
                        do {
                            uVar30 = 0;
                            uVar44 = 0;
                            uVar45 = 0;
                            uVar46 = 0;
                            if ((int)uVar3 < (int)uVar19) {
                                auVar61._0_4_ = (float)(int)uVar78 * local_1b8[4] + (float)(int)uVar98 * local_1b8[8] +
                                                local_1b8[0];
                                auVar61._4_4_ = (float)(int)uVar81 * local_1b8[5] + (float)(int)uVar101 * local_1b8[9] +
                                                local_1b8[1];
                                auVar61._8_4_ = (float)(int)uVar82 * local_1b8[6] +
                                                (float)(int)uVar102 * local_1b8[10] + local_1b8[2];
                                auVar61._12_4_ = (float)(int)uVar84 * local_1b8[7] +
                                                 (float)(int)uVar103 * local_1b8[11] + local_1b8[3];
                                lVar22 = (long)iVar26 << 2;
                                uVar30 = 0;
                                uVar44 = 0;
                                uVar45 = 0;
                                uVar46 = 0;
                                uVar70 = uVar98;
                                uVar73 = uVar101;
                                uVar74 = uVar102;
                                uVar75 = uVar103;
                                uVar47 = uVar86;
                                uVar54 = uVar90;
                                uVar55 = uVar92;
                                uVar56 = uVar94;
                                uVar104 = uVar78;
                                uVar105 = uVar81;
                                uVar106 = uVar82;
                                uVar107 = uVar84;
                                uVar23 = uVar3;
                                do {
                                    pVVar1 = param_2 + lVar22;
                                    fVar12 = *(float*)pVVar1;
                                    fVar13 = *(float*)(pVVar1 + 4);
                                    fVar14 = *(float*)(pVVar1 + 8);
                                    fVar15 = *(float*)(pVVar1 + 12);
                                    fVar62 = auVar61._4_4_;
                                    fVar64 = auVar61._8_4_;
                                    fVar65 = auVar61._12_4_;
                                    if (cVar17 != '\0') {
                                        auVar113 =
                                            maxps(*(undefined1(*)[16])(*(long*)(param_1 + 28) + lVar22), auVar61);
                                        *(undefined1(*)[16])(*(long*)(param_1 + 28) + lVar22) = auVar113;
                                    }
                                    uVar30 = uVar30 | ~(uVar104 | uVar47 | uVar70) & -(uint)(fVar12 <= auVar61._0_4_);
                                    uVar44 = uVar44 | ~(uVar105 | uVar54 | uVar73) & -(uint)(fVar13 <= fVar62);
                                    uVar45 = uVar45 | ~(uVar106 | uVar55 | uVar74) & -(uint)(fVar14 <= fVar64);
                                    uVar46 = uVar46 | ~(uVar107 | uVar56 | uVar75) & -(uint)(fVar15 <= fVar65);
                                    uVar23 = uVar23 + 2;
                                    uVar47 = uVar47 + iVar5;
                                    uVar54 = uVar54 + iVar5;
                                    uVar55 = uVar55 + iVar5;
                                    uVar56 = uVar56 + iVar5;
                                    uVar104 = uVar104 + iVar10;
                                    uVar105 = uVar105 + iVar10;
                                    uVar106 = uVar106 + iVar10;
                                    uVar107 = uVar107 + iVar10;
                                    uVar70 = uVar70 + iVar11;
                                    uVar73 = uVar73 + iVar11;
                                    uVar74 = uVar74 + iVar11;
                                    uVar75 = uVar75 + iVar11;
                                    auVar61._0_4_ =
                                        auVar61._0_4_ + (float)iVar11 * local_1b8[8] + (float)iVar10 * local_1b8[4];
                                    auVar61._4_4_ =
                                        fVar62 + (float)iVar11 * local_1b8[9] + (float)iVar10 * local_1b8[5];
                                    auVar61._8_4_ =
                                        fVar64 + (float)iVar11 * local_1b8[10] + (float)iVar10 * local_1b8[6];
                                    auVar61._12_4_ =
                                        fVar65 + (float)iVar11 * local_1b8[11] + (float)iVar10 * local_1b8[7];
                                    lVar22 = lVar22 + 16;
                                } while ((int)uVar23 < (int)uVar19);
                            }
                            auVar43[3] = -((uVar30 & 2147483648) == 0);
                            auVar43._0_3_ = 16777215;
                            auVar43[4] = 255;
                            auVar43[5] = 255;
                            auVar43[6] = 255;
                            auVar43[7] = -((uVar44 & 2147483648) == 0);
                            auVar43[8] = 255;
                            auVar43[9] = 255;
                            auVar43[10] = 255;
                            auVar43[11] = -((uVar45 & 2147483648) == 0);
                            auVar43[12] = 255;
                            auVar43[13] = 255;
                            auVar43[14] = 255;
                            auVar43[15] = -((uVar46 & 2147483648) == 0);
                            if ((ushort)((ushort)(SUB161(auVar43 >> 7, 0) & 1) |
                                         (ushort)(SUB161(auVar43 >> 15, 0) & 1) << 1 |
                                         (ushort)(SUB161(auVar43 >> 23, 0) & 1) << 2 |
                                         (ushort)(SUB161(auVar43 >> 31, 0) & 1) << 3 |
                                         (ushort)(SUB161(auVar43 >> 39, 0) & 1) << 4 |
                                         (ushort)(SUB161(auVar43 >> 47, 0) & 1) << 5 |
                                         (ushort)(SUB161(auVar43 >> 55, 0) & 1) << 6 |
                                         (ushort)(SUB161(auVar43 >> 63, 0) & 1) << 7 |
                                         (ushort)(SUB161(auVar43 >> 71, 0) & 1) << 8 |
                                         (ushort)(SUB161(auVar43 >> 79, 0) & 1) << 9 |
                                         (ushort)(SUB161(auVar43 >> 87, 0) & 1) << 10 |
                                         (ushort)(SUB161(auVar43 >> 95, 0) & 1) << 11 |
                                         (ushort)(SUB161(auVar43 >> 103, 0) & 1) << 12 |
                                         (ushort)(SUB161(auVar43 >> 111, 0) & 1) << 13 |
                                         (ushort)(SUB161(auVar43 >> 119, 0) & 1) << 14 |
                                         (ushort)(auVar43[15] >> 7) << 15) != 65535) {
                                iVar24 = 1;
                                goto LAB_100826c58;
                            }
                            iVar18 = iVar18 + 2;
                            iVar26 = iVar26 + param_1[160] * 2;
                            uVar86 = uVar86 + iVar9;
                            uVar90 = uVar90 + iVar9;
                            uVar92 = uVar92 + iVar9;
                            uVar94 = uVar94 + iVar9;
                            uVar78 = uVar78 + iVar6;
                            uVar81 = uVar81 + iVar6;
                            uVar82 = uVar82 + iVar6;
                            uVar84 = uVar84 + iVar6;
                            uVar98 = uVar98 + iVar7;
                            uVar101 = uVar101 + iVar7;
                            uVar102 = uVar102 + iVar7;
                            uVar103 = uVar103 + iVar7;
                            bVar28 = iVar18 < iVar4;
                        } while (iVar18 < iVar4);
                        iVar24 = 0;
                    }
                LAB_100826c58:
                    if (bVar28)
                        goto LAB_100827115;
                }
                lVar20 = lVar20 + 1;
            } while (lVar20 != 4);
            iVar24 = 8;
        LAB_100827115:
            uVar21 = 0;
            if (iVar24 == 8) {
                iVar24 = 0;
            }
            if (iVar24 != 0)
                goto LAB_10082713e;
            uVar3 = (uint)pVVar25;
            uVar19 = uVar3 + 4;
            uVar21 = (ulong)uVar19;
            pVVar25 = (Vector4T*)(ulong)uVar19;
        } while (uVar3 < 8);
        iVar24 = 2;
    LAB_10082713e:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)(uVar21 >> 8), iVar24 != 2);
    }

    // 0x10084d500, 128 bytes, placed by class name
    // OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5::operator()() const
    /* OcclusionManager::LoadPackedDepthBuffer(unsigned char const*,
   render::Format)::$_5::TEMPNAMEPLACEHOLDERVALUE() const */

    void OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5::operator()() {
        if (*field_8 == 7) {
            LoadPackedDepthBufferInternalSSENonInterlaced<false>(field_16, (float*)*field_24, (uchar*)*field_32,
                                                                 *field_40, field_0);
            return;
        }
        if (*field_8 != 29) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "occlusion/OcclusionManager.cpp",
                            340, (char*)0);
        }
        LoadPackedDepthBufferInternalSSENonInterlaced<true>(field_16, (float*)*field_24, (uchar*)*field_32, *field_40,
                                                            field_0);
    }

} // namespace jag::graphics
