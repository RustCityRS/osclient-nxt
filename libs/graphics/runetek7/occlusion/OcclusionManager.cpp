// libs/graphics/runetek7/occlusion/OcclusionManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "OcclusionManager.h"

namespace jag::graphics {
    // 0x100f43ba1
    bool OcclusionManager::m_OcclusionEnabled = 1;

    // 0x100f43ba2
    bool OcclusionManager::m_GammaCorrectDebugDepthBuffer = 1;

    // 0x100f43ba3
    bool OcclusionManager::m_MergeAABBCPUDepthBuffers = 1;

    // 0x103bbd53c
    bool OcclusionManager::m_CPUDepthBufferGenerationEnabled;

    // 0x103bbd53d
    bool OcclusionManager::m_ShowDownsampledGPUDepthBuffer;

    // 0x103bbd53e
    bool OcclusionManager::m_ShowAABBDebugDepthBuffer;

    // 0x103bbd53f
    bool OcclusionManager::m_ShowEntireDebugAABB;

    // 0x103bbd540
    bool OcclusionManager::m_ShowFailPointOnly;

    // 0x103bbd541
    bool OcclusionManager::m_ShowCulledAABB;

    // 0x103bbd542
    bool OcclusionManager::m_ShowNonCulledAABB;

    // 0x103bbd543
    bool OcclusionManager::m_ShowClippedAABB;

    // 0x103bbd544
    bool OcclusionManager::m_FilterAABBDebug;

    // 0x103bbd548
    float OcclusionManager::m_NDCThreshold;

    // 0x103bbd54c
    bool OcclusionManager::m_GeometryBatchCullingEnabled;

    // 0x103bbd54d
    bool OcclusionManager::m_FlipVisibilityResults;

    // 0x103bbd54e
    bool OcclusionManager::m_useAsyncDepthLoad;

    // 0x103bbd54f
    bool OcclusionManager::m_useCurrentFrameAABBViewTransforms;

    // 0x103bbd550
    bool OcclusionManager::m_disableOnVerticalCameraRotation;

    // 0x100823bb0
    OcclusionManager::OcclusionManager(ThreadPool* threadPool) : field_8(0) {

        Vector3T<float> local_50(0.0);
        Vector3T<float> local_40(0.0);
        new (&field_16) math::AABB(&local_50, &local_40);
        new (&field_48) std::array<Array<unsigned char>, 2ul>();
        m_minimumDepth = 3.4028235e+38;
        field_104.unique_ptr<true, void>();
        new (&field_128) render::Texture2D("Texture2D");
        m_bufferWidth = 0;
        m_bufferHeight = 0;
        field_648 = 0.0;
        field_652 = 0.0;
        m_minimumDepthVariation = 0.01;
        new (&field_660) std::atomic<unsigned int>(15056438);
        new (&field_664) std::atomic<unsigned int>(15056438);
        new (&field_668) std::atomic<unsigned int>(15056438);
        new (&field_672) std::atomic<unsigned int>(15056438);
        new (&field_676) std::atomic<unsigned int>(15056438);
        new (&field_680) std::atomic<unsigned int>(15056438);
        field_684 = 0;
        new (&field_688) math::Vector3T(384.0);
        field_700 = 0;
        field_704 = threadPool;
        m_renderInvalidTransforms = true;
        field_112 = nullptr;
    }

    // 0x100823d70
    OcclusionManager::~OcclusionManager() {
        Destroy();
        field_128.~Texture2D();
        field_104.~unique_ptr();
        field_48.~array();
    }

    // 0x100823de0
    void OcclusionManager::Destroy() {
        field_104.reset(nullptr);
        field_128.Destroy();
        safe_delete_array<float>((unsigned char**)&field_112);
        m_bufferWidth = 0;
        m_bufferHeight = 0;
    }

    // 0x100823e50
    void OcclusionManager::SetNoCullingAABB(const math::Vector3T<float>& vector3) {

        OBB local_78(vector3, *PTR_IDENTITY_100ee6718, field_688);
        local_78.GetMinimumEnclosingAABB(field_16);
    }

    // 0x100823ec0
    void OcclusionManager::GetGPUCullingSupported() {
        Format format;

        auto this_01 = Instance();
        auto this_00 = this_01->GetOrigin();
        unsigned int uVar1 = this_01->GetOptimalDepthReadbackFormat();
        this_00->IsContinuousReadbackSupported(*((RenderDeviceCaps*)(unsigned long)uVar1), format);
    }

    // 0x100823ef0
    auto OcclusionManager::RegisterTweakVars(tweak::ContainerGroup& containerGroup) {
        auto result;
        float* local_48[4];

        new (local_48) eastl::string("Occlusion");
        (containerGroup._vptr[7].Clear)(&result, containerGroup, (eastl::string*)local_48);
        Container* pCVar1 = (Container*)(result).operator->();
        pCVar1->AddCheckBox("Enabled", m_OcclusionEnabled);
        pCVar1 = (Container*)(result).operator->();
        pCVar1->AddCheckBox("Debug Depth Buffer Gamma Correction", m_GammaCorrectDebugDepthBuffer);
        pCVar1 = (Container*)(result).operator->();
        pCVar1->AddCheckBox("Show Downsampled GPU Depth Buffer", m_ShowDownsampledGPUDepthBuffer);
        pCVar1 = (Container*)(result).operator->();
        pCVar1->AddCheckBox("Use Async Depth Load", m_useAsyncDepthLoad);
        pCVar1 = (Container*)(result).operator->();
        pCVar1->AddCheckBox("Show AABB Depth Buffer", m_ShowAABBDebugDepthBuffer);
        pCVar1 = (Container*)(result).operator->();
        pCVar1->AddCheckBox("Show Entire Test AABB", m_ShowEntireDebugAABB);
        pCVar1 = (Container*)(result).operator->();
        pCVar1->AddCheckBox("Show Fail Point Only", m_ShowFailPointOnly);
        pCVar1 = (Container*)(result).operator->();
        pCVar1->AddCheckBox("Merge AABB Depth with CPU Depth", m_MergeAABBCPUDepthBuffers);
        pCVar1 = (Container*)(result).operator->();
        pCVar1->AddCheckBox("Show Culled AABBs", m_ShowCulledAABB);
        pCVar1 = (Container*)(result).operator->();
        pCVar1->AddCheckBox("Show Non-Culled AABBs", m_ShowNonCulledAABB);
        pCVar1 = (Container*)(result).operator->();
        pCVar1->AddCheckBox("Show Clipped AABBs", m_ShowClippedAABB);
        pCVar1 = (Container*)(result).operator->();
        pCVar1->AddCheckBox("Filter AABB debug", m_FilterAABBDebug);
        pCVar1 = (Container*)(result).operator->();
        local_48[0] = (float*)&m_NDCThreshold;
        pCVar1->AddSlider<float>("Occlusion Bin NDC Threshold", 0.0, 5.0, 0.001, *local_48);
        pCVar1 = (Container*)(result).operator->();
        pCVar1->AddCheckBox("Occlude with GeometryBatchInstances", m_GeometryBatchCullingEnabled);
        pCVar1 = (Container*)(result).operator->();
        pCVar1->AddCheckBox("Flip visibility results", m_FlipVisibilityResults);
        pCVar1 = (Container*)(result).operator->();
        pCVar1->AddCheckBox("Use AABB view transforms from current frame", m_useCurrentFrameAABBViewTransforms);
        pCVar1 = (Container*)(result).operator->();
        pCVar1->AddCheckBox("Disable on fast vertical camera rotation", m_disableOnVerticalCameraRotation);
        return result;
    }

    // 0x1008241a0
    void OcclusionManager::Init(unsigned int arg1, unsigned int arg2) {
        Singleton<render::BuiltinStates>* this_05;
        uint8_t local_78[64];
        Alignment* local_38;

        m_bufferWidth = arg1;
        m_bufferHeight = arg2;
        field_648 = (float)arg1 * 0.5;
        field_652 = (float)arg2 * 0.5;
        *local_78 =
            std::make_unique<DepthBufferRasterizerSSEST, unsigned int&, unsigned int&>(m_bufferWidth, m_bufferHeight);
        uint8_t* this_00 = &field_104;
        *this_00 = *local_78;
        Array<unsigned char>* this_01 = (Array<unsigned char>*)field_48[0];
        this_01->set_max_size((unsigned long)(m_bufferHeight * m_bufferWidth) << 2, 0);
        Array<unsigned char>* this_02 = (Array<unsigned char>*)field_48[1];
        this_02->set_max_size((unsigned long)(m_bufferHeight * m_bufferWidth) << 2, 0);
        DepthBufferRasterizerSSE* pDVar1 = (DepthBufferRasterizerSSE*)(*this_00).operator->();
        auto puVar2 = this_01->data();
        pDVar1->SetCPURenderTargetPixels(puVar2, 0);
        pDVar1 = (DepthBufferRasterizerSSE*)(*this_00).operator->();
        puVar2 = (unsigned int*)this_02->data();
        pDVar1->SetCPURenderTargetPixels(puVar2, 1);
        Singleton<render::RenderDevice>* this_04 =
            (Singleton<render::RenderDevice>*)((unsigned long)(m_bufferHeight * m_bufferWidth) << 2);
        new (&local_38) Alignment(16);
        field_112 = (float*)operator_new__((unsigned long)this_04, local_38);
        auto this_03 = this_04->Instance();
        long lVar4 = this_03->GetOrigin();
        if (*(char*)(lVar4 + 155) != '\0') {
            new (local_78) render::Texture::Desc();
            local_78->SetToDefault();
            local_78._0_4_ = m_bufferWidth;
            local_78._4_4_ = m_bufferHeight;
            local_78._12_4_ = 23;
            this_03 = (OcclusionManager*)&field_128;
            this_05 = (Singleton<render::BuiltinStates>*)this_03;
            this_03->Create(*local_78, nullptr, 0);
            lVar4 = this_05->Instance();
            this_03->SetSamplerState(*((lVar4 + 80)), false);
        }
        if (m_OcclusionEnabled == '\0') {
            m_OcclusionEnabled = 0;
        } else {
            m_OcclusionEnabled = GetGPUCullingSupported(this_03);
        }
    }

    // 0x100824490
    void OcclusionManager::RasterizeToDepthBuffer(RT7Core& rt7Core, RenderPassType renderPassType,
                                                  const SceneViewData& sceneViewData, DrawableQueue& drawableQueue) {
        auto plVar1 = field_104.operator->();
        (**(void (**)(...))(*plVar1 + 16))(plVar1, rt7Core, renderPassType, sceneViewData, drawableQueue);
    }

    // 0x1008244e0
    void OcclusionManager::RenderDebug() {
        long* plVar1;
        uint8_t local_28[8];

        if ((m_bufferWidth != 0) && (m_bufferHeight != 0)) {
            if (field_8 != '\0') {
                plVar1 = (long*)field_104.operator->();
                (**(void (**)(...))(*plVar1 + 24))(plVar1);
                RenderAABBDepthBuffer();
                ClearAABBDepthBuffer();
            }
            if (m_ShowCulledAABB != '\0' || m_ShowNonCulledAABB != '\0') {
                plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar1 != nullptr) {
                    new (local_28) oldscape::sidebars::SideBarData(-16776961, 3);
                    (**(void (**)(...))(*plVar1 + 72))(plVar1, &field_16, (SideBarData*)local_28);
                }
            }
        }
    }

    // 0x100824580
    void OcclusionManager::RenderAABBDepthBuffer() {
        uint8_t* this_00;
        unsigned int arg4;
        unsigned int arg5;
        Texture2D* pTVar1;
        int arg1;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        long lVar3;
        float* pfVar4;
        void* arg7;
        long* plVar5;
        long lVar6;
        unsigned long uVar7;
        Array<unsigned char, BucketAllocatorEASTL> local_80;
        ImVec4 local_68;
        uint8_t local_58[16];
        Point<float> local_48;
        Texture2D* local_40;
        ColourStorage8888<math::ARGB8StorageLayout> local_38;

        if (m_ShowAABBDebugDepthBuffer != '\0') {
            this_00 = &field_128;
            if (this_00->IsCreated() != '\0') {
                local_40 = (Texture2D*)this_00;
                if ((m_MergeAABBCPUDepthBuffers != '\0') && (m_bufferHeight * m_bufferWidth != 0)) {
                    lVar6 = 0;
                    this_01 = &field_48[0];
                    uVar7 = 0;
                    do {
                        pfVar4 = field_112;
                        lVar3 = this_01->data();
                        pfVar4 = std::max<float>(*((float*)((long)pfVar4 + lVar6)), *((lVar3 + lVar6)));
                        *(float*)((long)field_112 + lVar6) = *pfVar4;
                        uVar7 = uVar7 + 1;
                        lVar6 = lVar6 + 4;
                    } while (uVar7 < m_bufferHeight * m_bufferWidth);
                }
                local_80 = Array<unsigned char, BucketAllocatorEASTL>((unsigned long)(m_bufferHeight * m_bufferWidth));
                DeinterlaceFloatDebugBuffer((unsigned char*)local_80.data(), field_112, m_bufferWidth, m_bufferHeight);
                arg4 = m_bufferWidth;
                arg5 = m_bufferHeight;
                arg7 = (void*)local_80.data();
                pTVar1 = local_40;
                local_40->Update(0, 0, 0, arg4, arg5, 23, arg7);
                plVar5 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar5 != nullptr) {
                    local_68 = ImVec4(0.0, 0.2, 0.4, 0.4);
                    new ((local_58 + 8)) math::Point(0.0, 0.0);
                    local_48 = math::Point(1.0, 1.0);
                    local_38 = math::ColourStorage8888(255, 255, 255, 255);
                    arg1 = local_38.GetX();
                    new (local_58) oldscape::sidebars::SideBarData(arg1, 0);
                    (**(void (**)(...))(*plVar5 + 112))(plVar5, pTVar1, &local_68, local_58 + 8, &local_48, 1, 0,
                                                        (unsigned long)arg7 & 18446744069414584320,
                                                        (SideBarData*)local_58);
                }
            }
        }
    }

    // 0x1008247c0
    void OcclusionManager::ClearAABBDepthBuffer() {
        if (m_ShowAABBDebugDepthBuffer != '\0') {
            ___bzero(field_112, (unsigned long)m_bufferHeight * (unsigned long)m_bufferWidth * 4);
        }
    }

    // 0x1008247f0
    void OcclusionManager::LoadPackedDepthBuffer(const unsigned char* arg1, render::Format format) {
        float fVar1;
        float fVar2;
        future<void>* pfVar4;
        uint64_t* puVar5;
        uint64_t* puVar6;
        Array<unsigned char>* this_01;
        unsigned long uVar7;
        ReturnValue local_b8;
        array<std::future<void>, 4ul> local_b0;
        uint8_t local_90[16];
        OcclusionManager* local_80;
        float** local_78;
        float** local_70;
        unsigned long* local_68;
        unsigned long local_60;
        array<Array<unsigned char>, 2ul>* local_58;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* local_50;

        array<Array<unsigned char>, 2ul>* this_02 = (array<Array<unsigned char>, 2ul>*)&field_48;
        Format local_44 = format;
        float* local_40 = (float*)arg1;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_00 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*this_02)[1];
        auto local_38 = this_00->data();
        if (local_38 != nullptr) {
            if ((m_bufferWidth & 7) != 0) {
                LogAssert("m_BufferWidth % 8 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "occlusion/OcclusionManager.cpp",
                          316, nullptr);
            }
            if (((m_useAsyncDepthLoad == '\0') || (local_44 == 11)) || (local_44 == 21)) {
                switch (local_44) {
                case 7:
                    LoadPackedDepthBufferInternalSSENonInterlaced<false>(this, local_38, (unsigned char*)local_40,
                                                                         (unsigned long)m_bufferHeight, 0);
                    break;
                default:
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/occlusion/OcclusionManager.cpp",
                                    369, nullptr);
                case 11:
                    LoadFloatDepthBuffer(local_38, local_40);
                    break;
                case 21:
                    LoadHalfFloatDepthBuffer(local_38, local_40);
                    break;
                case 29:
                    LoadPackedDepthBufferInternalSSENonInterlaced<true>(this, local_38, (unsigned char*)local_40,
                                                                        (unsigned long)m_bufferHeight, 0);
                }
            } else {
                local_58 = this_02;
                local_50 = this_00;
                if ((m_bufferHeight & 3) != 0) {
                    LogAssert("m_BufferHeight % numWorkers == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "occlusion/OcclusionManager.cpp",
                              322, nullptr);
                }
                local_b0 = std::array<std::future<void>, 4ul>();
                local_60 = (unsigned long)(m_bufferHeight >> 2);
                uVar7 = 0;
                do {
                    local_90._8_8_ = &local_44;
                    local_78 = &local_38;
                    local_70 = &local_40;
                    local_90._0_8_ = uVar7;
                    local_80 = this;
                    local_68 = &local_60;
                    ThreadPool::AddTask<OcclusionManager::LoadPackedDepthBuffer(
                        unsigned char const*, render::Format)::__5>(&local_b8, (char*)field_704, (__5*)local_90);
                    pfVar4 = &local_b0[uVar7];
                    *pfVar4 = local_b8;
                    uVar7 = uVar7 + 1;
                } while (uVar7 != 4);
                uVar7 = 0;
                do {
                    pfVar4 = &local_b0[uVar7];
                    if (pfVar4->valid() == '\0') {
                        LogAssert("workers[i].valid()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/occlusion/OcclusionManager.cpp",
                                  347, nullptr);
                    }
                    pfVar4->wait();
                    uVar7 = uVar7 + 1;
                } while (uVar7 != 4);
                this_00 = local_50;
                this_02 = local_58;
            }
            local_90 = eastl::minmax_element<float*>(local_38, local_38 + m_bufferHeight * m_bufferWidth);
            puVar5 = (uint64_t*)local_90->first();
            puVar6 = (uint64_t*)eastl::compressed_pair<std::deque<ThreadPool::TaskInfo>*>::second();
            fVar1 = *(float*)*puVar5;
            fVar2 = *(float*)*puVar6;
            m_minimumDepth = fVar1;
            if (m_minimumDepthVariation <= fVar2 - fVar1) {
                SetSuccessfulDepthReadFrame();
                this_01 = (Array<unsigned char>*)(*this_02)[0];
                *this_01 = *this_00;
            }
        }
    }

    // 0x100824f30
    void OcclusionManager::LoadFloatDepthBuffer(float* arg1, const float* arg2) {
        _memcpy(arg1, arg2, (unsigned long)(m_bufferHeight * m_bufferWidth) << 2);
    }

    // 0x100824f60
    void OcclusionManager::LoadHalfFloatDepthBuffer(float* arg1, const unsigned short* arg2) {
        unsigned long uVar2;

        unsigned int uVar1 = m_bufferHeight * m_bufferWidth;
        if (uVar1 != 0) {
            uVar2 = 0;
            do {
                arg1[uVar2] = (float)types::Float16ToFloat(arg2[uVar2]);
                uVar2 = uVar2 + 1;
            } while (uVar1 != uVar2);
        }
    }

    // 0x100824fd0
    void OcclusionManager::SetSuccessfulDepthReadFrame() {
        field_700 = ((GraphicsApp*)GraphicsApp::Instance())->GetFrameCount();
    }

    // 0x100825000
    uint8_t[16] OcclusionManager::LoadPackedDepthBufferInternalNonSSE(float* arg1, const unsigned char* arg2,
                                                                      render::Format format) {
        unsigned int uVar2;
        long lVar3;
        long lVar4;
        unsigned long uVar6;
        unsigned long uVar8;
        long lVar9;
        unsigned int uVar10;
        unsigned int uVar11;
        unsigned long uVar12;
        uint8_t auVar13[16];

        if ((format != 7) && (format != 29)) {
            LogAssert("format == render::FORMAT_B8G8R8A8_UNORM || format == render::FORMAT_R8G8B8A8_UNORM",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/OcclusionManager.cpp",
                      410, nullptr);
        }
        unsigned long uVar5 = 0;
        unsigned long uVar7 = 0;
        unsigned int uVar1 = m_bufferHeight;
        if (uVar1 != 0) {
            uVar2 = m_bufferWidth;
            uVar12 = (unsigned long)uVar2;
            uVar7 = (unsigned long)(format != 29);
            lVar3 = uVar7 * 2;
            uVar5 = (unsigned long)(format == 29);
            lVar4 = uVar5 * 2;
            uVar10 = 0;
            lVar9 = 0;
            uVar11 = 0;
            do {
                if (uVar12 != 0) {
                    uVar5 = (unsigned long)uVar10;
                    uVar8 = 0;
                    do {
                        uVar6 = (unsigned long)(unsigned int)((int)lVar9 + (int)uVar8);
                        arg1[uVar6] = (float)arg2[uVar5 | 2] * -0.003921569 + 1.0 +
                                      (float)arg2[lVar3 + 1U | uVar5] * -1.5378702e-05;
                        uVar7 = (unsigned long)arg2[uVar5 | lVar4 + 1U];
                        arg1[uVar6 + 1] =
                            (float)arg2[uVar5] * -0.003921569 + 1.0 + (float)arg2[uVar5 | lVar4 + 1U] * -1.5378702e-05;
                        uVar8 = uVar8 + 2;
                        uVar5 = (unsigned long)((int)uVar5 + 4);
                    } while (uVar8 < uVar12);
                }
                uVar11 = uVar11 + 1;
                lVar9 = lVar9 + uVar12;
                uVar10 = uVar10 + (uVar2 >> 1) * 4;
            } while (uVar11 != uVar1);
        }
        auVar13._8_8_ = uVar7;
        auVar13._0_8_ = uVar5;
        return auVar13;
    }

    // 0x100825160
    void OcclusionManager::DeinterlaceFloatDebugBuffer(unsigned char* arg1, const float* arg2, unsigned int arg3,
                                                       unsigned int arg4) {
        uint64_t in_RAX;
        float* pfVar1;
        unsigned long uVar2;
        float fVar3;
        uint64_t local_38;

        if (arg3 * arg4 != 0) {
            uVar2 = 0;
            local_38 = in_RAX;
            do {
                if (m_GammaCorrectDebugDepthBuffer == '\0') {
                    fVar3 = arg2[uVar2];
                } else {
                    local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)1065353216);
                    fVar3 = (float)::sqrt(arg2[uVar2]);
                    local_38 = (((uint64_t)(fVar3 * 4.0) << 32) | (uint32_t)((float)local_38));
                    pfVar1 = std::min<float>(local_38, *((float*)((long)&local_38 + 4)));
                    fVar3 = *pfVar1;
                }
                arg1[uVar2] = (unsigned char)(int)(fVar3 * 255.0);
                uVar2 = uVar2 + 1;
            } while (arg3 * arg4 != uVar2);
        }
    }

    // 0x100825200
    bool OcclusionManager::DepthBufferCanOcclude() const {
        unsigned int uVar1;
        int iVar2;
        bool bVar3;

        if (m_CPUDepthBufferGenerationEnabled == '\0') {
            uVar1 = field_700;
            iVar2 = ((GraphicsApp*)GraphicsApp::Instance())->GetFrameCount();
            bVar3 = iVar2 - 5U < uVar1;
        } else {
            iVar2 = ((TextRun*)field_104.operator->())->GetMaxLineWidth();
            bVar3 = iVar2 != 0;
        }
        return bVar3;
    }

    // 0x100825250
    void OcclusionManager::UpdateStats() {
        unsigned int uVar1 = field_684 + 1;
        field_684 = uVar1;
        if (16 < uVar1) {
            field_684 = 0;
            uVar1 = (&field_660)->operator_cast_to_unsigned_int();
            field_672 = (uVar1 >> 4);
            uVar1 = (&field_664)->operator_cast_to_unsigned_int();
            field_676 = (uVar1 >> 4);
            uVar1 = (&field_668)->operator_cast_to_unsigned_int();
            field_680 = (uVar1 >> 4);
            field_660 = 0;
            field_664 = 0;
            field_668 = 0;
        }
    }

    // 0x100825330
    uint64_t OcclusionManager::OBBVisible(const math::OBB& obb, const SceneViewData& sceneViewData1,
                                          const SceneViewData* sceneViewData2, float arg4) {
        Vector3T<float>* pVVar2;
        float* pfVar3;
        uint64_t uVar4;
        unsigned int arg1;
        AABB local_b8;
        float local_90;
        OBB local_88;

        float local_8c = arg4;
        if ((&field_104)->operator_cast_to_bool() == '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/OcclusionManager.cpp",
                      530, "OcclusionManager::OBBVisible: Missing depth buffer!");
            uVar4 = 1;
        } else {
            local_88 = math::OBB(obb);
            if (local_8c != 1.0) {
                pVVar2 = (Vector3T<float>*)local_88.GetScreen();
                local_b8._0_8_ = *local_8c * *pVVar2;
                local_88.SetHalfSize(local_b8);
            }
            local_8c = (float)local_88.GetMinimumRadius();
            if (((0.0 < sceneViewData1.m_minOcclusionDrawableRadius) &&
                 (local_8c < sceneViewData1.m_minOcclusionDrawableRadius)) &&
                (0.0 < local_8c)) {
                pVVar2 = (Vector3T<float>*)local_88.GetScreen();
                local_90 = sceneViewData1.m_minOcclusionDrawableRadius;
                arg1 = 0;
                do {
                    pfVar3 = (float*)(*pVVar2)[arg1];
                    if (*pfVar3 < sceneViewData1.m_minOcclusionDrawableAxisLength) {
                        pfVar3 = (float*)(*pVVar2)[arg1];
                        *pfVar3 = (*pfVar3 * local_90) / local_8c;
                    }
                    arg1 = arg1 + 1;
                } while (arg1 != 3);
            }
            local_b8 = math::AABB();
            local_88.GetMinimumEnclosingAABB(local_b8);
            uVar4 = AABBVisible(local_b8, sceneViewData1, sceneViewData2);
        }
        return uVar4;
    }

    // 0x100825530
    bool OcclusionManager::AABBVisible(const math::AABB& aabb, const SceneViewData& sceneViewData1,
                                       const SceneViewData* sceneViewData2) {
        char cVar2;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_00;
        long* plVar3;
        SceneViewData* sceneViewData;
        long lVar4;
        SideBarData local_b8;

        std::__atomic_base<unsigned int, true>::operator++();
        if (1.0 < m_minimumDepth || m_minimumDepth == 1.0) {
            cVar2 = '\0';
        } else {
            lVar4 = 0;
            do {
                new ((Vector4T<float>*)((long)&local_b8[0].field_0 + lVar4)) math::Vector4T();
                lVar4 = lVar4 + 16;
            } while (lVar4 != 128);
            sceneViewData = sceneViewData1;
            if (m_useCurrentFrameAABBViewTransforms == '\0') {
                sceneViewData = sceneViewData2;
            }
            if (sceneViewData2 == nullptr) {
                sceneViewData = sceneViewData1;
            }
            cVar2 = TransformAABBox(aabb, &local_b8, *sceneViewData);
            if (!cVar2) {
                cVar2 = m_renderInvalidTransforms;
            } else {
                std::__atomic_base<unsigned int, true>::operator++();
                this_00 = &field_48[0];
                cVar2 = ApproxDepthTestAABBox((float*)this_00->data(), &local_b8);
            }
            if (cVar2) {
                std::__atomic_base<unsigned int, true>::operator++();
            }
        }
        char cVar1 = m_FlipVisibilityResults;
        if ((((cVar2 == m_FlipVisibilityResults) && (m_ShowCulledAABB != '\0')) ||
             ((cVar2 != m_FlipVisibilityResults && (m_ShowNonCulledAABB != '\0')))) &&
            (((m_FilterAABBDebug == '\0' || (field_8 != '\0')) &&
              (plVar3 = DebugPrimitiveCollectorBasic::GetCollector(""), plVar3 != nullptr)))) {
            local_b8 = oldscape::sidebars::SideBarData(-8323073, 3);
            (**(void (**)(...))(*plVar3 + 72))(plVar3, aabb, &local_b8);
        }
        return cVar2 != cVar1;
    }

    // 0x1008256e0
    uint32_t OcclusionManager::TransformAABBox(const math::AABB& aabb, math::Vector4T<float>* vector4,
                                               const SceneViewData& sceneViewData) {
        float fVar1;
        float fVar2;
        Layout* pLVar5;
        Vector2T<int>* pVVar6;
        long* plVar7;
        Vector3T<float>* pVVar8;
        Vector4T<float>* this_01;
        uint64_t uVar12;
        uint8_t local_b8[32];
        uint8_t local_98[48];
        uint8_t local_58[16];

        bool cVar3 = aabb.IsValid();
        if ((!cVar3) || (cVar3 = aabb.TestIntersection(field_16), cVar3)) {
            return 0;
        }
        RT7Core* this_00 = (RT7Core*)sceneViewData.SSOBeginPtr();
        auto matrix44 = this_00->GetImmediateThreadPool();
        return local_34 = TransformAABBoxInternal(aabb, vector4, *matrix44);
        if ((char)local_34 != '\0') {
            return local_34;
        }
        new ((local_98 + 32)) math::Vector4T(3.4028235e+38);
        Vector4T<float> local_c8(1.1754944e-38);
        long lVar9 = 0;
        do {
            pLVar5 = (Layout*)(vector4 + lVar9);
            pLVar5->SSOBeginPtr();
            pLVar5->y();
            pLVar5->second();
            uVar12 = math::Vector4Min<float>(*((local_98 + 32)), *pLVar5);
            local_b8._0_8_ = uVar12;
            (*((local_98 + 32))) = *local_b8;
            uVar12 = math::Vector4Max<float>(local_c8, *pLVar5);
            local_b8._0_8_ = uVar12;
            local_c8 = *local_b8;
            this_01 = vector4;
            lVar9 = lVar9 + 16;
        } while (lVar9 != 128);
        float* pfVar4 = (float*)((local_98 + 32))->SSOBeginPtr();
        if (*pfVar4 == 3.4028235e+38) {
            return local_34;
        }
        new (local_98) math::ColourHSL(0.0, 0.0, 0.0);
        OcclusionManager* pOVar11 = this;
        float fVar13 = (float)m_bufferHeight;
        GridRect local_48((float)m_bufferWidth, fVar13, 1.0);
        new (local_b8) math::AABB(local_98, &local_48);
        local_48._0_8_ = ((local_98 + 32))->GetXYZ();
        local_48.field_8 = (int)fVar13;
        local_58._0_8_ = local_c8.GetXYZ();
        local_58._8_4_ = fVar13;
        new (local_98) math::AABB(&local_48, local_58);
        if ((m_ShowClippedAABB != '\0') && ((m_FilterAABBDebug == '\0' || (pOVar11->field_8 != '\0')))) {
            pLVar5 = (Layout*)local_98->SSOBeginPtr();
            pfVar4 = (float*)pLVar5->SSOBeginPtr();
            fVar13 = *pfVar4;
            pVVar6 = (Vector2T<int>*)local_98->SSOBeginPtr();
            pfVar4 = (float*)pVVar6->y();
            fVar1 = *pfVar4;
            pLVar5 = (Layout*)local_98->GetScreen();
            pfVar4 = (float*)pLVar5->SSOBeginPtr();
            fVar2 = *pfVar4;
            pVVar6 = (Vector2T<int>*)local_98->GetScreen();
            pfVar4 = (float*)pVVar6->y();
            local_48 = oldscape::dash3d::GridRect((int)fVar13, (int)fVar1, (int)fVar2, (int)*pfVar4);
            plVar7 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar7 != nullptr) {
                new (local_58) oldscape::sidebars::SideBarData(1073807104, 0);
                (**(void (**)(...))(*plVar7 + 152))(plVar7, &local_48, 0, (SideBarData*)local_58);
            }
            pOVar11 = this;
        }
        local_98->Intersection(*local_b8);
        cVar3 = local_98->IsValid();
        if (!cVar3) {
            return local_34;
        }
        if ((m_ShowClippedAABB != '\0') && ((m_FilterAABBDebug == '\0' || (pOVar11->field_8 != '\0')))) {
            pLVar5 = (Layout*)local_98->SSOBeginPtr();
            pfVar4 = (float*)pLVar5->SSOBeginPtr();
            fVar13 = *pfVar4;
            pVVar6 = (Vector2T<int>*)local_98->SSOBeginPtr();
            pfVar4 = (float*)pVVar6->y();
            fVar1 = *pfVar4;
            pLVar5 = (Layout*)local_98->GetScreen();
            pfVar4 = (float*)pLVar5->SSOBeginPtr();
            fVar2 = *pfVar4;
            pVVar6 = (Vector2T<int>*)local_98->GetScreen();
            pfVar4 = (float*)pVVar6->y();
            local_48 = oldscape::dash3d::GridRect((int)fVar13, (int)fVar1, (int)fVar2, (int)*pfVar4);
            plVar7 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar7 != nullptr) {
                new (local_58) oldscape::sidebars::SideBarData(1073742079, 0);
                (**(void (**)(...))(*plVar7 + 152))(plVar7, &local_48, 0, (SideBarData*)local_58);
            }
        }
        unsigned long uVar10 = 18446744073709551614;
        do {
            pVVar8 = (Vector3T<float>*)local_98->SSOBeginPtr();
            local_48 = math::Vector4T(*pVVar8, 0.0);
            *this_01 = local_48;
            pVVar8 = (Vector3T<float>*)local_98->GetScreen();
            local_48 = math::Vector4T(*pVVar8, 0.0);
            (*((this_01 + 16))) = local_48;
            uVar10 = uVar10 + 2;
            this_01 = this_01 + 32;
        } while (uVar10 < 6);
        return 1;
    }

    // 0x100825b00
    bool OcclusionManager::ApproxDepthTestAABBox(const float* arg1, const math::Vector4T<float>* vector4) {
        float fVar1;
        float fVar2;
        bool cVar3;
        bool bVar4;
        float* pfVar5;
        unsigned long uVar6;
        float* pfVar7;
        unsigned int uVar8;
        int iVar9;
        unsigned int uVar10;
        int iVar11;
        unsigned int uVar12;
        int iVar13;
        unsigned int uVar14;
        OcclusionManager* pOVar16;
        unsigned int uVar17;
        bool cVar18;
        float fVar19;
        float fVar20;
        uint64_t uVar21;
        unsigned int local_70;
        unsigned int local_6c;
        unsigned long local_60;
        uint64_t local_58;
        float local_40;
        unsigned int local_3c;
        char local_35;
        float local_34;

        if (m_bufferWidth == 0) {
            LogAssert("m_BufferWidth > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/OcclusionManager.cpp",
                      810, nullptr);
        }
        if (m_bufferHeight == 0) {
            LogAssert("m_BufferHeight > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/OcclusionManager.cpp",
                      811, nullptr);
        }
        uint64_t local_98 = *(uint64_t*)vector4;
        uint64_t uStack_90 = *(uint64_t*)(vector4 + 8);
        uint64_t local_88 = *(uint64_t*)vector4;
        uint64_t uStack_80 = *(uint64_t*)(vector4 + 8);
        long lVar15 = 16;
        do {
            uVar21 = math::Vector4Min<float>(local_98, *(vector4 + lVar15));
            local_58 = uVar21;
            local_98 = local_58;
            uVar21 = math::Vector4Max<float>(local_88, *(vector4 + lVar15));
            local_58 = uVar21;
            local_88 = local_58;
            pOVar16 = this;
            lVar15 = lVar15 + 16;
        } while (lVar15 != 128);
        local_58._0_4_ = (float)uStack_80;
        float local_78 = (float)m_bufferWidth;
        float local_74 = (float)m_bufferHeight;
        if ((((0.0 < (float)local_98) || (0.0 < local_98._4_4_)) || ((float)local_88 < local_78)) ||
            (local_88._4_4_ < local_74)) {
            local_34 = 0.0;
            pfVar5 = std::max<float>(local_34, local_98);
            fVar1 = *pfVar5;
            local_34 = 0.0;
            pfVar5 = std::max<float>(local_34, *((float*)((long)&local_98 + 4)));
            fVar2 = *pfVar5;
            local_34 = (float)local_88 + 1.0;
            local_40 = 0.0;
            fVar19 = math::Clamp<float>(local_34, local_40, local_78);
            local_34 = local_88._4_4_ + 1.0;
            local_40 = 0.0;
            fVar20 = math::Clamp<float>(local_34, local_40, local_74);
            cVar3 = m_ShowFailPointOnly;
            cVar18 = m_ShowEntireDebugAABB;
            uVar14 = (unsigned int)(long)fVar1;
            bVar4 = pOVar16->m_bufferWidth == uVar14;
            uVar8 = uVar14 - bVar4;
            uVar10 = (unsigned int)(long)fVar2 - (unsigned int)(pOVar16->m_bufferHeight == (unsigned int)(long)fVar2);
            uVar6 = (unsigned long)uVar10;
            uVar12 = (unsigned int)(long)fVar19;
            local_35 = uVar8 < uVar12;
            local_3c = uVar8;
            if ((!local_35) || (uVar17 = (unsigned int)(long)fVar20, uVar17 <= uVar10)) {
                LogAssert("minX < maxX && minY < maxY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "occlusion/OcclusionManager.cpp",
                          847, nullptr);
            }
            local_60 = uVar6;
            if ((m_ShowAABBDebugDepthBuffer != '\0') && (uVar10 < uVar17)) {
                local_6c = pOVar16->m_bufferWidth;
                do {
                    local_70 = (unsigned int)uVar6;
                    if (uVar8 < uVar12) {
                        lVar15 = (long)(int)(local_6c * local_70 + uVar8) << 2;
                        do {
                            if ((!cVar3) || (*(float*)((long)arg1 + lVar15) <= (float)local_58)) {
                                pfVar5 = field_112;
                                pfVar7 = std::max<float>(*((float*)((long)pfVar5 + lVar15)), local_58);
                                *(float*)((long)pfVar5 + lVar15) = *pfVar7;
                                pOVar16 = this;
                            }
                            if ((!cVar18) && (*(float*)((long)arg1 + lVar15) <= (float)local_58)) {
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
                    uVar6 = (unsigned long)(local_70 + 1);
                } while (local_70 + 1 < uVar17);
            }
            if ((unsigned int)local_60 < uVar17) {
                iVar11 = -(unsigned int)bVar4;
                iVar9 = pOVar16->m_bufferWidth * (unsigned int)local_60 + uVar14 + iVar11;
                do {
                    iVar13 = 0;
                    if (uVar8 < uVar12) {
                        cVar18 = true;
                        if ((float)local_58 < arg1[iVar9]) {
                            pfVar5 = arg1 + (long)iVar9 + 1;
                            uVar8 = uVar14 + iVar11;
                            do {
                                uVar8 = uVar8 + 1;
                                cVar18 = uVar8 < uVar12;
                                if (!cVar18)
                                    goto LAB_100825ef3;
                                fVar1 = *pfVar5;
                                pfVar5 = pfVar5 + 1;
                            } while ((float)local_58 < fVar1);
                        }
                        iVar13 = 1;
                        if (cVar18)
                            goto LAB_100825f0b;
                    } else {
                        cVar18 = local_35;
                    LAB_100825ef3:
                        if (cVar18)
                            goto LAB_100825f0b;
                    }
                    uVar10 = (int)local_60 + 1;
                    local_60 = (unsigned long)uVar10;
                    iVar9 = iVar9 + pOVar16->m_bufferWidth;
                    uVar8 = local_3c;
                } while (uVar10 < uVar17);
            }
            iVar13 = 11;
        LAB_100825f0b:
            bVar4 = iVar13 != 11;
        } else {
            bVar4 = m_minimumDepth < (float)uStack_80 || 1.0 <= m_minimumDepth;
        }
        return bVar4;
    }

    // 0x100825f30
    unsigned long OcclusionManager::TransformAABBoxInternal(const math::AABB& aabb, math::Vector4T<float>* vector4,
                                                            const math::Matrix44T<float>& matrix44) {
        uint64_t* puVar5;
        uint32_t* puVar6;
        float in_XMM1_Da;
        uint32_t in_XMM1_Db;
        uint64_t local_120;
        float local_118;
        float local_d4;
        uint64_t local_c8;
        float local_c0;
        float local_9c;

        auto pVVar2 = aabb.SSOBeginPtr();
        Vector4T<float> local_108(*pVVar2, 1.0);
        pVVar2 = (Vector3T<float>*)aabb.GetScreen();
        Vector4T<float> local_f8(*pVVar2, 1.0);
        long lVar7 = 0;
        do {
            new ((&local_58 + lVar7)) math::Vector4T();
            lVar7 = lVar7 + 16;
        } while (lVar7 != 32);
        lVar7 = 0;
        do {
            new ((&local_78 + lVar7)) math::Vector4T();
            lVar7 = lVar7 + 16;
        } while (lVar7 != 32);
        lVar7 = 0;
        do {
            new ((&local_98 + lVar7)) math::Vector4T();
            lVar7 = lVar7 + 16;
        } while (lVar7 != 32);
        auto pfVar3 = local_108.SSOBeginPtr();
        new (&local_c8) math::Vector4T(*pfVar3);
        lVar7 = 0;
        Vector4T<float>* pVVar4 = &matrix44[0];
        uint64_t local_b8 = local_c8 * *pVVar4;
        Rect<float> local_58 = local_b8;
        pfVar3 = (float*)local_f8.SSOBeginPtr();
        new (&local_c8) math::Vector4T(*pfVar3);
        pVVar4 = &matrix44[0];
        local_b8 = local_c8 * *pVVar4;
        Rect<float> local_48 = local_b8;
        pfVar3 = (float*)local_108.y();
        new (&local_c8) math::Vector4T(*pfVar3);
        pVVar4 = &matrix44[1];
        local_b8 = local_c8 * *pVVar4;
        Rect<float> local_78 = local_b8;
        pfVar3 = (float*)local_f8.y();
        new (&local_c8) math::Vector4T(*pfVar3);
        pVVar4 = &matrix44[1];
        local_b8 = local_c8 * *pVVar4;
        Rect<float> local_68 = local_b8;
        pfVar3 = (float*)local_108.second();
        new (&local_c8) math::Vector4T(*pfVar3);
        pVVar4 = &matrix44[2];
        local_b8 = local_c8 * *pVVar4;
        Rect<float> local_98 = local_b8;
        pfVar3 = (float*)local_f8.second();
        new (&local_c8) math::Vector4T(*pfVar3);
        pVVar4 = &matrix44[2];
        local_b8 = local_c8 * *pVVar4;
        uint64_t uStack_b0 = (((uint64_t)in_XMM1_Db << 32) | (uint32_t)in_XMM1_Da);
        Rect<float> local_88 = local_b8;
        unsigned long local_d0 = 0;
        do {
            puVar5 = &matrix44[3];
            local_b8 = *puVar5;
            uStack_b0 = puVar5[1];
            local_b8 +=
                (*((Vector4T<float>*)(&local_58 + (unsigned long)*(unsigned int*)((long)&sBBxInd + lVar7) * 16)));
            local_b8 +=
                (*((Vector4T<float>*)(&local_78 + (unsigned long)*(unsigned int*)((long)&sBByInd + lVar7) * 16)));
            local_b8 +=
                (*((Vector4T<float>*)(&local_98 + (unsigned long)*(unsigned int*)((long)&sBBzInd + lVar7) * 16)));
            puVar6 = (uint32_t*)local_b8.qw();
            local_c8 = (((uint64_t)local_c8._4_4_ << 32) | (uint32_t)(*puVar6)) ^ 2147483648;
            pfVar3 = (float*)local_b8.second();
            pfVar3 = std::max<float>(local_c8, *pfVar3);
            local_9c = *pfVar3;
            pfVar3 = (float*)local_b8.second();
            *pfVar3 = local_9c;
            local_c8 = local_b8.GetXYZ();
            local_c0 = in_XMM1_Da;
            pfVar3 = (float*)local_b8.qw();
            local_120 = local_c8 / (*(*pfVar3));
            local_118 = in_XMM1_Da;
            if ((local_d0 & 1) == 0) {
                pfVar3 = (float*)local_120.SSOBeginPtr();
                if (-1.0 < *pfVar3 || *pfVar3 == -1.0) {
                    pfVar3 = (float*)local_120.y();
                    if (-1.0 < *pfVar3 || *pfVar3 == -1.0) {
                        pfVar3 = (float*)local_120.SSOBeginPtr();
                        if (*pfVar3 <= 1.0) {
                            pfVar3 = (float*)local_120.y();
                            if (*pfVar3 <= 1.0) {
                                local_d0 = (((uint64_t)((int64_t)((unsigned long)pfVar3 >> 8)) << 8) | (uint8_t)1);
                            }
                        }
                    }
                }
            }
            pfVar3 = (float*)local_120.SSOBeginPtr();
            local_9c = (*pfVar3 + 1.0) * field_648;
            pfVar3 = (float*)local_120.y();
            local_d4 = (1.0 - *pfVar3) * field_652;
            pfVar3 = (float*)local_120.second();
            in_XMM1_Da = local_d4;
            new (&local_c8) ImVec4(local_9c, local_d4, 0.5 - *pfVar3 * 0.5, 1.0);
            *vector4 = local_c8;
            lVar7 = lVar7 + 4;
            vector4 = vector4 + 16;
        } while (lVar7 != 32);
        return local_d0 & 18446744073709551361;
    }

    // 0x100826490
    void OcclusionManager::Gather(math::Vector4T<float>* vector41, unsigned int arg2,
                                  const math::Vector4T<float>* vector42) {
        long lVar1 = 0;
        do {
            *vector41 =
                (*((QuaternionT<float>*)(vector42 +
                                         (unsigned long)*(unsigned int*)(&sBBIndexList +
                                                                         (unsigned long)(arg2 * 3 + (int)lVar1) * 4) *
                                             16)));
            lVar1 = lVar1 + 1;
            vector41 = vector41 + 16;
        } while (lVar1 != 3);
    }

    // 0x100826500
    void OcclusionManager::AABBGather(vFloat4* vFloat4, unsigned int arg2, const math::Vector4T<float>* vector4,
                                      unsigned int arg4) {
        uint32_t in_register_0000000c;
        uint32_t in_register_00000034;

        uint32_t* puVar18 = (uint32_t*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        long lVar17 = (((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4);
        unsigned long uVar19 = (unsigned long)vector4 & 4294967295;
        unsigned int uVar1 = *(unsigned int*)(&sBBIndexList + (unsigned long)(unsigned int)((int)vector4 * 3) * 4);
        unsigned int uVar2 = *(unsigned int*)(&sBBIndexList + (uVar19 * 3 + 3 & 4294967295) * 4);
        unsigned int uVar3 = *(unsigned int*)(&sBBIndexList + (uVar19 * 3 + 6 & 4294967295) * 4);
        uint64_t* puVar15 = (uint64_t*)(*(
            (Vector4T<float>*)((unsigned long)*(unsigned int*)(&sBBIndexList +
                                                               (unsigned long)((int)vector4 * 3 + 9) * 4) *
                                   16 +
                               lVar17)))[0];
        uint64_t uVar9 = *puVar15;
        uint64_t uVar10 = puVar15[1];
        puVar15 = (uint64_t*)(*((Vector4T<float>*)((unsigned long)uVar2 * 16 + lVar17)))[0];
        uint64_t uVar11 = *puVar15;
        uint64_t uVar12 = puVar15[1];
        puVar15 = (uint64_t*)(*((Vector4T<float>*)((unsigned long)uVar3 * 16 + lVar17)))[0];
        uint64_t uVar13 = *puVar15;
        uint64_t uVar14 = puVar15[1];
        uint32_t* puVar16 = (uint32_t*)(*((Vector4T<float>*)((unsigned long)uVar1 * 16 + lVar17)))[0];
        uint32_t uVar5 = puVar16[1];
        uint32_t uVar6 = puVar16[2];
        uint32_t uVar7 = puVar16[3];
        uint32_t local_58 = (uint32_t)uVar11;
        uint32_t uStack_54 = (uint32_t)((unsigned long)uVar11 >> 32);
        uint32_t uStack_50 = (uint32_t)uVar12;
        uint32_t uStack_4c = (uint32_t)((unsigned long)uVar12 >> 32);
        uint32_t local_48 = (uint32_t)uVar13;
        uint32_t uStack_44 = (uint32_t)((unsigned long)uVar13 >> 32);
        uint32_t uStack_40 = (uint32_t)uVar14;
        uint32_t uStack_3c = (uint32_t)((unsigned long)uVar14 >> 32);
        uint32_t local_68 = (uint32_t)uVar9;
        uint32_t uStack_64 = (uint32_t)((unsigned long)uVar9 >> 32);
        uint32_t uStack_60 = (uint32_t)uVar10;
        uint32_t uStack_5c = (uint32_t)((unsigned long)uVar10 >> 32);
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
        uVar1 = *(unsigned int*)(&sBBIndexList + (uVar19 * 3 + 1 & 4294967295) * 4);
        uVar2 = *(unsigned int*)(&sBBIndexList + (uVar19 * 3 + 4 & 4294967295) * 4);
        uVar3 = *(unsigned int*)(&sBBIndexList + (uVar19 * 3 + 7 & 4294967295) * 4);
        puVar15 = (uint64_t*)(*(
            (Vector4T<float>*)((unsigned long)*(unsigned int*)(&sBBIndexList +
                                                               (unsigned long)((int)vector4 * 3 + 10) * 4) *
                                   16 +
                               lVar17)))[0];
        uVar9 = *puVar15;
        uVar10 = puVar15[1];
        puVar15 = (uint64_t*)(*((Vector4T<float>*)((unsigned long)uVar2 * 16 + lVar17)))[0];
        uVar11 = *puVar15;
        uVar12 = puVar15[1];
        puVar15 = (uint64_t*)(*((Vector4T<float>*)((unsigned long)uVar3 * 16 + lVar17)))[0];
        uVar13 = *puVar15;
        uVar14 = puVar15[1];
        puVar16 = (uint32_t*)(*((Vector4T<float>*)((unsigned long)uVar1 * 16 + lVar17)))[0];
        uVar5 = *puVar16;
        uVar6 = puVar16[1];
        uVar7 = puVar16[2];
        uint32_t uVar8 = puVar16[3];
        local_68 = (uint32_t)uVar9;
        uStack_64 = (uint32_t)((unsigned long)uVar9 >> 32);
        uStack_60 = (uint32_t)uVar10;
        uStack_5c = (uint32_t)((unsigned long)uVar10 >> 32);
        local_58 = (uint32_t)uVar11;
        uStack_54 = (uint32_t)((unsigned long)uVar11 >> 32);
        uStack_50 = (uint32_t)uVar12;
        uStack_4c = (uint32_t)((unsigned long)uVar12 >> 32);
        local_48 = (uint32_t)uVar13;
        uStack_44 = (uint32_t)((unsigned long)uVar13 >> 32);
        uStack_40 = (uint32_t)uVar14;
        uStack_3c = (uint32_t)((unsigned long)uVar14 >> 32);
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
        uVar1 = *(unsigned int*)(&sBBIndexList + (uVar19 * 3 + 2 & 4294967295) * 4);
        uVar2 = *(unsigned int*)(&sBBIndexList + (uVar19 * 3 + 5 & 4294967295) * 4);
        uVar3 = *(unsigned int*)(&sBBIndexList + (uVar19 * 3 + 8 & 4294967295) * 4);
        puVar15 = (uint64_t*)(*(
            (Vector4T<float>*)((unsigned long)*(unsigned int*)(&sBBIndexList +
                                                               (unsigned long)((int)vector4 * 3 + 11) * 4) *
                                   16 +
                               lVar17)))[0];
        uVar9 = *puVar15;
        uVar10 = puVar15[1];
        puVar15 = (uint64_t*)(*((Vector4T<float>*)((unsigned long)uVar2 * 16 + lVar17)))[0];
        uVar11 = *puVar15;
        uVar12 = puVar15[1];
        puVar15 = (uint64_t*)(*((Vector4T<float>*)((unsigned long)uVar3 * 16 + lVar17)))[0];
        uVar13 = *puVar15;
        uVar14 = puVar15[1];
        puVar16 = (uint32_t*)(*((Vector4T<float>*)((unsigned long)uVar1 * 16 + lVar17)))[0];
        uVar5 = *puVar16;
        uVar6 = puVar16[1];
        uVar7 = puVar16[2];
        uVar8 = puVar16[3];
        local_68 = (uint32_t)uVar9;
        uStack_64 = (uint32_t)((unsigned long)uVar9 >> 32);
        uStack_60 = (uint32_t)uVar10;
        uStack_5c = (uint32_t)((unsigned long)uVar10 >> 32);
        local_58 = (uint32_t)uVar11;
        uStack_54 = (uint32_t)((unsigned long)uVar11 >> 32);
        uStack_50 = (uint32_t)uVar12;
        uStack_4c = (uint32_t)((unsigned long)uVar12 >> 32);
        local_48 = (uint32_t)uVar13;
        uStack_44 = (uint32_t)((unsigned long)uVar13 >> 32);
        uStack_40 = (uint32_t)uVar14;
        uStack_3c = (uint32_t)((unsigned long)uVar14 >> 32);
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

    // 0x100826790
    uint64_t OcclusionManager::RasterizeAndDepthTestAABBox(unsigned int* arg1, const math::Vector4T<float>* vector4,
                                                           unsigned int arg3) {
        float* pfVar1;
        uint32_t uVar2;
        unsigned int uVar3;
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
        uint8_t auVar16[16];
        bool cVar17;
        int iVar18;
        unsigned int uVar19;
        long lVar20;
        unsigned long uVar21;
        long lVar22;
        unsigned int uVar23;
        int iVar24;
        int iVar25;
        bool bVar26;
        int iVar27;
        unsigned int uVar42;
        unsigned int uVar43;
        uint8_t auVar29[16];
        uint8_t auVar30[16];
        uint8_t auVar31[16];
        uint8_t auVar32[16];
        uint8_t auVar33[16];
        uint8_t auVar34[16];
        uint8_t auVar35[16];
        uint8_t auVar36[16];
        uint8_t auVar37[16];
        uint8_t auVar38[16];
        uint8_t auVar39[16];
        uint8_t auVar40[16];
        unsigned int uVar28;
        unsigned int uVar44;
        uint8_t auVar41[16];
        unsigned int uVar45;
        unsigned int uVar52;
        unsigned int uVar53;
        uint8_t auVar46[16];
        uint8_t auVar47[16];
        uint8_t auVar48[16];
        uint8_t auVar49[16];
        uint8_t auVar50[16];
        uint8_t auVar51[16];
        unsigned int uVar54;
        int iVar55;
        float fVar60;
        int iVar61;
        float fVar62;
        uint8_t auVar56[16];
        uint8_t auVar57[16];
        uint8_t auVar58[16];
        uint8_t auVar59[16];
        float fVar63;
        uint8_t auVar64[16];
        uint8_t auVar65[16];
        int iVar66;
        int iVar67;
        unsigned int uVar68;
        unsigned int uVar71;
        unsigned int uVar72;
        uint8_t auVar69[16];
        uint8_t auVar70[16];
        unsigned int uVar73;
        uint8_t auVar74[16];
        uint8_t auVar75[16];
        unsigned int uVar76;
        int iVar78;
        unsigned int uVar79;
        unsigned int uVar80;
        int iVar81;
        uint8_t auVar77[16];
        unsigned int uVar82;
        int iVar83;
        unsigned int uVar84;
        int iVar87;
        unsigned int uVar88;
        int iVar89;
        unsigned int uVar90;
        int iVar91;
        uint8_t auVar85[16];
        uint8_t auVar86[16];
        unsigned int uVar92;
        int iVar93;
        int iVar94;
        int iVar95;
        unsigned int uVar96;
        unsigned int uVar99;
        unsigned int uVar100;
        uint8_t auVar97[16];
        uint8_t auVar98[16];
        unsigned int uVar101;
        unsigned int uVar102;
        unsigned int uVar103;
        unsigned int uVar104;
        unsigned int uVar105;
        float fVar106;
        float fVar107;
        int iVar108;
        float fVar109;
        float fVar110;
        uint8_t auVar111[16];
        uint8_t local_1c8[16];
        float local_1b8[12];
        uint64_t local_188;
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
        uint8_t local_128[16];
        uint8_t local_118[16];
        uint8_t local_108[16];
        float local_f8[48];

        MXCSR = MXCSR | 32832;
        Vector4T<float>* vector4_00 = nullptr;
        OcclusionManager* vFloat4 = this;
        do {
            AABBGather((vFloat4*)vFloat4, (unsigned int)local_f8, vector4_00, (unsigned int)vector4);
            cVar17 = m_ShowAABBDebugDepthBuffer;
            lVar20 = 0;
            do {
                fVar106 = local_f8[lVar20 + 1];
                fVar107 = local_f8[lVar20 + 2];
                fVar109 = local_f8[lVar20 + 3];
                fVar110 = local_f8[lVar20 + 4];
                fVar12 = local_f8[lVar20 + 5];
                fVar13 = local_f8[lVar20 + 6];
                fVar14 = local_f8[lVar20 + 7];
                *(int*)(local_128 + lVar20) = (int)local_f8[lVar20];
                *(int*)(local_128 + lVar20 + 4) = (int)fVar106;
                *(int*)(local_128 + lVar20 + 8) = (int)fVar107;
                *(int*)(local_128 + lVar20 + 12) = (int)fVar109;
                *(int*)((long)local_158 + lVar20) = (int)fVar110;
                *(int*)((long)local_158 + lVar20 + 4) = (int)fVar12;
                *(int*)((long)local_158 + lVar20 + 8) = (int)fVar13;
                *(int*)((long)local_158 + lVar20 + 12) = (int)fVar14;
                lVar20 = lVar20 + 16;
            } while (lVar20 != 48);
            auVar111._4_4_ = local_158[1];
            auVar111._0_4_ = local_158[0];
            auVar111._8_4_ = local_158[2];
            auVar111._12_4_ = local_158[3];
            auVar16._4_4_ = local_158[9];
            auVar16._0_4_ = local_158[8];
            auVar16._8_4_ = local_158[10];
            auVar16._12_4_ = local_158[11];
            iVar83 = local_118._0_4_;
            iVar93 = local_128._0_4_;
            auVar85._0_4_ = -(unsigned int)(iVar93 < iVar83);
            iVar87 = local_118._4_4_;
            iVar94 = local_128._4_4_;
            auVar85._4_4_ = -(unsigned int)(iVar94 < iVar87);
            iVar89 = local_118._8_4_;
            iVar18 = local_128._8_4_;
            iVar91 = local_118._12_4_;
            auVar85._8_4_ = -(unsigned int)(iVar18 < iVar89);
            iVar95 = local_128._12_4_;
            auVar85._12_4_ = -(unsigned int)(iVar95 < iVar91);
            iVar27 = local_108._0_4_;
            iVar55 = local_108._4_4_;
            iVar61 = local_108._12_4_;
            auVar56._0_4_ = -(unsigned int)(iVar83 < iVar93);
            auVar56._4_4_ = -(unsigned int)(iVar87 < iVar94);
            auVar56._8_4_ = -(unsigned int)(iVar89 < iVar18);
            auVar56._12_4_ = -(unsigned int)(iVar91 < iVar95);
            auVar97._0_4_ = iVar83 - iVar93;
            auVar97._4_4_ = iVar87 - iVar94;
            auVar97._8_4_ = iVar89 - iVar18;
            auVar97._12_4_ = iVar91 - iVar95;
            auVar29._0_4_ = iVar93 - iVar27;
            auVar29._4_4_ = iVar94 - iVar55;
            iVar108 = local_108._8_4_;
            auVar29._8_4_ = iVar18 - iVar108;
            auVar29._12_4_ = iVar95 - iVar61;
            auVar86 = ~auVar85 & local_118 | local_128 & auVar85;
            auVar65._0_4_ = -(unsigned int)(auVar86._0_4_ < iVar27);
            auVar65._4_4_ = -(unsigned int)(auVar86._4_4_ < iVar55);
            auVar65._8_4_ = -(unsigned int)(auVar86._8_4_ < iVar108);
            auVar65._12_4_ = -(unsigned int)(auVar86._12_4_ < iVar61);
            auVar57 = ~auVar56 & local_118 | local_128 & auVar56;
            auVar64._0_4_ = -(unsigned int)(iVar27 < auVar57._0_4_);
            auVar64._4_4_ = -(unsigned int)(iVar55 < auVar57._4_4_);
            auVar64._8_4_ = -(unsigned int)(iVar108 < auVar57._8_4_);
            auVar64._12_4_ = -(unsigned int)(iVar61 < auVar57._12_4_);
            iVar78 = local_158[9] - local_158[1];
            iVar81 = local_158[11] - local_158[3];
            auVar69._4_4_ = iVar78;
            auVar69._0_4_ = iVar78;
            auVar69._8_4_ = iVar81;
            auVar69._12_4_ = iVar81;
            auVar34._4_4_ = local_158[5];
            auVar34._0_4_ = local_158[4];
            auVar34._8_4_ = local_158[6];
            auVar34._12_4_ = local_158[7];
            iVar66 = local_158[1] - local_158[5];
            iVar67 = local_158[3] - local_158[7];
            auVar46._4_4_ = iVar66;
            auVar46._0_4_ = iVar66;
            auVar46._8_4_ = iVar67;
            auVar46._12_4_ = iVar67;
            fVar106 =
                (float)(auVar97._0_4_ * (local_158[8] - local_158[0]) - auVar29._0_4_ * (local_158[0] - local_158[4]));
            fVar107 = (float)(iVar78 * auVar97._4_4_ - iVar66 * auVar29._4_4_);
            fVar109 = (float)((int)((auVar97._8_8_ & 4294967295) *
                                    (unsigned long)(unsigned int)(local_158[10] - local_158[2])) -
                              (int)((auVar29._8_8_ & 4294967295) *
                                    (unsigned long)(unsigned int)(local_158[2] - local_158[6])));
            fVar110 = (float)((int)((auVar69._8_8_ & 4294967295) * (unsigned long)auVar97._12_4_) -
                              (int)((auVar46._8_8_ & 4294967295) * (unsigned long)auVar29._12_4_));
            auVar30._0_4_ = (float)(int)fVar106;
            auVar30._4_4_ = (float)(int)fVar107;
            auVar30._8_4_ = (float)(int)fVar109;
            auVar30._12_4_ = (float)(int)fVar110;
            auVar30 = rcpps(auVar30, auVar30);
            local_188._0_4_ = local_f8[8];
            local_188._4_4_ = local_f8[9];
            fStack_180 = local_f8[10];
            fStack_17c = local_f8[11];
            local_178 = (local_f8[24] - local_f8[8]) * auVar30._0_4_;
            fStack_174 = (local_f8[25] - local_f8[9]) * auVar30._4_4_;
            fStack_170 = (local_f8[26] - local_f8[10]) * auVar30._8_4_;
            fStack_16c = (local_f8[27] - local_f8[11]) * auVar30._12_4_;
            local_168 = (local_f8[40] - local_f8[8]) * auVar30._0_4_;
            fStack_164 = (local_f8[41] - local_f8[9]) * auVar30._4_4_;
            fStack_160 = (local_f8[42] - local_f8[10]) * auVar30._8_4_;
            fStack_15c = (local_f8[43] - local_f8[11]) * auVar30._12_4_;
            auVar69 = ~auVar65 & local_108 | auVar86 & auVar65;
            auVar86._0_4_ = -(unsigned int)(0 < auVar69._0_4_);
            auVar86._4_4_ = -(unsigned int)(0 < auVar69._4_4_);
            auVar86._8_4_ = -(unsigned int)(0 < auVar69._8_4_);
            auVar86._12_4_ = -(unsigned int)(0 < auVar69._12_4_);
            auVar69 = auVar69 & _DAT_100d4ac90;
            auVar65 = ~auVar64 & local_108 | auVar57 & auVar64;
            iVar18 = m_bufferWidth - 1;
            auVar57._4_4_ = iVar18;
            auVar57._0_4_ = iVar18;
            auVar57._8_4_ = iVar18;
            auVar57._12_4_ = iVar18;
            auVar47._0_4_ = -(unsigned int)(auVar65._0_4_ < iVar18);
            auVar47._4_4_ = -(unsigned int)(auVar65._4_4_ < iVar18);
            auVar47._8_4_ = -(unsigned int)(auVar65._8_4_ < iVar18);
            auVar47._12_4_ = -(unsigned int)(auVar65._12_4_ < iVar18);
            auVar31._0_4_ = -(unsigned int)(local_158[0] < local_158[4]);
            auVar31._4_4_ = -(unsigned int)(local_158[1] < local_158[5]);
            auVar31._8_4_ = -(unsigned int)(local_158[2] < local_158[6]);
            auVar31._12_4_ = -(unsigned int)(local_158[3] < local_158[7]);
            auVar30 = ~auVar31 & auVar34 | auVar111 & auVar31;
            auVar48._0_4_ = -(unsigned int)(auVar30._0_4_ < local_158[8]);
            auVar48._4_4_ = -(unsigned int)(auVar30._4_4_ < local_158[9]);
            auVar48._8_4_ = -(unsigned int)(auVar30._8_4_ < local_158[10]);
            auVar48._12_4_ = -(unsigned int)(auVar30._12_4_ < local_158[11]);
            auVar30 = ~auVar48 & auVar16 | auVar30 & auVar48;
            auVar32._0_4_ = -(unsigned int)(0 < auVar30._0_4_);
            auVar32._4_4_ = -(unsigned int)(0 < auVar30._4_4_);
            auVar32._8_4_ = -(unsigned int)(0 < auVar30._8_4_);
            auVar32._12_4_ = -(unsigned int)(0 < auVar30._12_4_);
            auVar30 = auVar30 & _DAT_100d4ac90;
            auVar33._0_4_ = -(unsigned int)(local_158[4] < local_158[0]);
            auVar33._4_4_ = -(unsigned int)(local_158[5] < local_158[1]);
            auVar33._8_4_ = -(unsigned int)(local_158[6] < local_158[2]);
            auVar33._12_4_ = -(unsigned int)(local_158[7] < local_158[3]);
            auVar34 = ~auVar33 & auVar34 | auVar111 & auVar33;
            auVar49._0_4_ = -(unsigned int)(local_158[8] < auVar34._0_4_);
            auVar49._4_4_ = -(unsigned int)(local_158[9] < auVar34._4_4_);
            auVar49._8_4_ = -(unsigned int)(local_158[10] < auVar34._8_4_);
            auVar49._12_4_ = -(unsigned int)(local_158[11] < auVar34._12_4_);
            auVar34 = ~auVar49 & auVar16 | auVar34 & auVar49;
            iVar18 = m_bufferHeight - 1;
            auVar35._4_4_ = iVar18;
            auVar35._0_4_ = iVar18;
            auVar35._8_4_ = iVar18;
            auVar35._12_4_ = iVar18;
            auVar74._0_4_ = -(unsigned int)(auVar34._0_4_ < iVar18);
            auVar74._4_4_ = -(unsigned int)(auVar34._4_4_ < iVar18);
            auVar74._8_4_ = -(unsigned int)(auVar34._8_4_ < iVar18);
            auVar74._12_4_ = -(unsigned int)(auVar34._12_4_ < iVar18);
            lVar20 = 0;
            do {
                local_1b8[0] = fVar106;
                local_1b8[1] = fVar107;
                local_1b8[2] = fVar109;
                local_1b8[3] = fVar110;
                if (0 < (int)local_1b8[lVar20]) {
                    lVar22 = 0;
                    do {
                        local_1c8._8_8_ = *(uint64_t*)((long)local_158 + lVar22 - 40);
                        local_1c8._0_8_ = *(uint64_t*)((long)local_1b8 + lVar22 + 48);
                        uVar2 = *(uint32_t*)(local_1c8 + lVar20 * 4);
                        *(uint32_t*)((long)local_1b8 + lVar22) = uVar2;
                        *(uint32_t*)((long)local_1b8 + lVar22 + 4) = uVar2;
                        *(uint32_t*)((long)local_1b8 + lVar22 + 8) = uVar2;
                        *(uint32_t*)((long)local_1b8 + lVar22 + 12) = uVar2;
                        lVar22 = lVar22 + 16;
                    } while (lVar22 != 48);
                    local_1c8 = auVar69 & auVar86;
                    uVar3 = *(unsigned int*)(local_1c8 + lVar20 * 4);
                    local_1c8 = ~auVar47 & auVar57 | auVar65 & auVar47;
                    uVar19 = *(unsigned int*)(local_1c8 + lVar20 * 4);
                    vFloat4 = (OcclusionManager*)(unsigned long)uVar19;
                    local_1c8 = auVar30 & auVar32;
                    iVar18 = *(int*)(local_1c8 + lVar20 * 4);
                    local_1c8 = ~auVar74 & auVar35 | auVar34 & auVar74;
                    iVar4 = *(int*)(local_1c8 + lVar20 * 4);
                    local_1c8._4_4_ = local_158[5] - local_158[9];
                    local_1c8._0_4_ = local_158[4] - local_158[8];
                    local_1c8._8_4_ = local_158[6] - local_158[10];
                    local_1c8._12_4_ = local_158[7] - local_158[11];
                    uVar90 = *(unsigned int*)(local_1c8 + lVar20 * 4);
                    local_1c8._4_4_ = iVar78;
                    local_1c8._0_4_ = local_158[8] - local_158[0];
                    local_1c8._8_4_ = local_158[10] - local_158[2];
                    local_1c8._12_4_ = iVar81;
                    iVar25 = *(int*)(local_1c8 + lVar20 * 4);
                    local_1c8._4_4_ = iVar66;
                    local_1c8._0_4_ = local_158[0] - local_158[4];
                    local_1c8._12_4_ = iVar67;
                    local_1c8._8_4_ = local_158[2] - local_158[6];
                    iVar5 = *(int*)(local_1c8 + lVar20 * 4);
                    local_1c8._4_4_ = iVar55 - iVar87;
                    local_1c8._0_4_ = iVar27 - iVar83;
                    local_1c8._12_4_ = iVar61 - iVar91;
                    local_1c8._8_4_ = iVar108 - iVar89;
                    uVar92 = *(unsigned int*)(local_1c8 + lVar20 * 4);
                    local_1c8 = auVar29;
                    iVar6 = *(int*)(local_1c8 + lVar20 * 4);
                    local_1c8 = auVar97;
                    iVar7 = *(int*)(local_1c8 + lVar20 * 4);
                    local_1c8._4_4_ = local_158[9] * iVar87 - local_158[5] * iVar55;
                    local_1c8._0_4_ = iVar83 * local_158[8] - iVar27 * local_158[4];
                    local_1c8._12_4_ = local_158[11] * iVar91 - local_158[7] * iVar61;
                    local_1c8._8_4_ =
                        (int)((local_118._8_8_ & 4294967295) * (unsigned long)(unsigned int)local_158[10]) -
                        (int)((local_108._8_8_ & 4294967295) * (unsigned long)(unsigned int)local_158[6]);
                    iVar8 = *(int*)(local_1c8 + lVar20 * 4);
                    local_1c8._4_4_ = iVar55 * local_158[1] - local_158[9] * iVar94;
                    local_1c8._0_4_ = iVar27 * local_158[0] - iVar93 * local_158[8];
                    local_1c8._8_4_ =
                        (int)((local_108._8_8_ & 4294967295) * (unsigned long)(unsigned int)local_158[2]) -
                        (int)((local_128._8_8_ & 4294967295) * (unsigned long)(unsigned int)local_158[10]);
                    local_1c8._12_4_ = iVar61 * local_158[3] - local_158[11] * iVar95;
                    iVar9 = *(int*)(local_1c8 + lVar20 * 4);
                    local_1c8._4_4_ = iVar94 * local_158[5] - local_158[1] * iVar87;
                    local_1c8._0_4_ = iVar93 * local_158[4] - iVar83 * local_158[0];
                    local_1c8._8_4_ =
                        (int)((local_128._8_8_ & 4294967295) * (unsigned long)(unsigned int)local_158[6]) -
                        (int)((local_118._8_8_ & 4294967295) * (unsigned long)(unsigned int)local_158[2]);
                    local_1c8._12_4_ = iVar95 * local_158[7] - local_158[3] * iVar91;
                    iVar24 = 0;
                    bVar26 = iVar18 < iVar4;
                    if (iVar18 < iVar4) {
                        auVar77._4_4_ = iVar25;
                        auVar77._0_4_ = iVar25;
                        auVar77._8_4_ = iVar25;
                        auVar77._12_4_ = iVar25;
                        auVar98._4_4_ = iVar5;
                        auVar98._0_4_ = iVar5;
                        auVar98._8_4_ = iVar5;
                        auVar98._12_4_ = iVar5;
                        auVar70._4_4_ = iVar7;
                        auVar70._0_4_ = iVar7;
                        auVar70._8_4_ = iVar7;
                        auVar70._12_4_ = iVar7;
                        iVar10 = iVar25 * 2;
                        iVar11 = iVar5 * 2;
                        auVar58._4_4_ = uVar3 + 1;
                        auVar58._0_4_ = uVar3;
                        auVar58._8_4_ = uVar3;
                        auVar58._12_4_ = uVar3 + 1;
                        auVar75._4_4_ = iVar18;
                        auVar75._0_4_ = iVar18;
                        auVar75._8_4_ = iVar18 + 1;
                        auVar75._12_4_ = iVar18 + 1;
                        auVar36._4_4_ = iVar7;
                        auVar36._0_4_ = iVar7;
                        auVar36._8_4_ = iVar7;
                        auVar36._12_4_ = iVar7;
                        auVar37._4_4_ = iVar5;
                        auVar37._0_4_ = iVar5;
                        auVar37._8_4_ = iVar5;
                        auVar37._12_4_ = iVar5;
                        iVar24 = *(int*)(local_1c8 + lVar20 * 4);
                        uVar96 = iVar24 + iVar5 * uVar3 + iVar7 * iVar18;
                        uVar99 = iVar24 + iVar5 * auVar58._4_4_ + iVar7 * iVar18;
                        uVar100 = iVar24 + (int)((auVar98._8_8_ & 4294967295) * (unsigned long)uVar3) +
                                  (int)((auVar70._8_8_ & 4294967295) * (unsigned long)auVar75._8_4_);
                        uVar101 = iVar24 + (int)((auVar37._8_8_ & 4294967295) * (unsigned long)auVar58._12_4_) +
                                  (int)((auVar36._8_8_ & 4294967295) * (unsigned long)auVar75._12_4_);
                        auVar38._4_4_ = iVar6;
                        auVar38._0_4_ = iVar6;
                        auVar38._8_4_ = iVar6;
                        auVar38._12_4_ = iVar6;
                        auVar50._4_4_ = iVar6;
                        auVar50._0_4_ = iVar6;
                        auVar50._8_4_ = iVar6;
                        auVar50._12_4_ = iVar6;
                        auVar51._4_4_ = iVar25;
                        auVar51._0_4_ = iVar25;
                        auVar51._8_4_ = iVar25;
                        auVar51._12_4_ = iVar25;
                        uVar76 = iVar9 + iVar25 * uVar3 + iVar6 * iVar18;
                        uVar79 = iVar9 + iVar25 * auVar58._4_4_ + iVar6 * iVar18;
                        uVar80 = iVar9 + (int)((auVar77._8_8_ & 4294967295) * (unsigned long)uVar3) +
                                 (int)((auVar38._8_8_ & 4294967295) * (unsigned long)auVar75._8_4_);
                        uVar82 = iVar9 + (int)((auVar51._8_8_ & 4294967295) * (unsigned long)auVar58._12_4_) +
                                 (int)((auVar50._8_8_ & 4294967295) * (unsigned long)auVar75._12_4_);
                        auVar39._4_4_ = uVar92;
                        auVar39._0_4_ = uVar92;
                        auVar39._8_4_ = uVar92;
                        auVar39._12_4_ = uVar92;
                        auVar40._4_4_ = uVar90;
                        auVar40._0_4_ = uVar90;
                        auVar40._8_4_ = uVar90;
                        auVar40._12_4_ = uVar90;
                        iVar5 = uVar90 * 2;
                        iVar9 = uVar92 * 2;
                        iVar6 = iVar6 * 2;
                        iVar7 = iVar7 * 2;
                        uVar84 = iVar8 + uVar3 * uVar90 + iVar18 * uVar92;
                        uVar88 = iVar8 + uVar90 * auVar58._4_4_ + uVar92 * iVar18;
                        uVar90 = iVar8 + (int)((auVar58._8_8_ & 4294967295) * (unsigned long)uVar90) +
                                 (int)((auVar75._8_8_ & 4294967295) * (unsigned long)uVar92);
                        uVar92 = iVar8 + (int)((auVar40._8_8_ & 4294967295) * (unsigned long)auVar58._12_4_) +
                                 (int)((auVar39._8_8_ & 4294967295) * (unsigned long)auVar75._12_4_);
                        iVar25 = m_bufferWidth * iVar18 + uVar3 * 2;
                        bVar26 = true;
                        do {
                            uVar28 = 0;
                            uVar42 = 0;
                            uVar43 = 0;
                            uVar44 = 0;
                            if ((int)uVar3 < (int)uVar19) {
                                auVar59._0_4_ = (float)(int)uVar76 * local_1b8[4] + (float)(int)uVar96 * local_1b8[8] +
                                                local_1b8[0];
                                auVar59._4_4_ = (float)(int)uVar79 * local_1b8[5] + (float)(int)uVar99 * local_1b8[9] +
                                                local_1b8[1];
                                auVar59._8_4_ = (float)(int)uVar80 * local_1b8[6] +
                                                (float)(int)uVar100 * local_1b8[10] + local_1b8[2];
                                auVar59._12_4_ = (float)(int)uVar82 * local_1b8[7] +
                                                 (float)(int)uVar101 * local_1b8[11] + local_1b8[3];
                                lVar22 = (long)iVar25 << 2;
                                uVar28 = 0;
                                uVar42 = 0;
                                uVar43 = 0;
                                uVar44 = 0;
                                uVar68 = uVar96;
                                uVar71 = uVar99;
                                uVar72 = uVar100;
                                uVar73 = uVar101;
                                uVar45 = uVar84;
                                uVar52 = uVar88;
                                uVar53 = uVar90;
                                uVar54 = uVar92;
                                uVar102 = uVar76;
                                uVar103 = uVar79;
                                uVar104 = uVar80;
                                uVar105 = uVar82;
                                uVar23 = uVar3;
                                do {
                                    pfVar1 = (float*)((long)arg1 + lVar22);
                                    fVar12 = *pfVar1;
                                    fVar13 = pfVar1[1];
                                    fVar14 = pfVar1[2];
                                    fVar15 = pfVar1[3];
                                    fVar60 = auVar59._4_4_;
                                    fVar62 = auVar59._8_4_;
                                    fVar63 = auVar59._12_4_;
                                    if (cVar17) {
                                        auVar111 = maxps(*(uint8_t(*)[16])((long)field_112 + lVar22), auVar59);
                                        *(uint8_t(*)[16])((long)field_112 + lVar22) = auVar111;
                                    }
                                    uVar28 = uVar28 |
                                             ~(uVar102 | uVar45 | uVar68) & -(unsigned int)(fVar12 <= auVar59._0_4_);
                                    uVar42 = uVar42 | ~(uVar103 | uVar52 | uVar71) & -(unsigned int)(fVar13 <= fVar60);
                                    uVar43 = uVar43 | ~(uVar104 | uVar53 | uVar72) & -(unsigned int)(fVar14 <= fVar62);
                                    uVar44 = uVar44 | ~(uVar105 | uVar54 | uVar73) & -(unsigned int)(fVar15 <= fVar63);
                                    uVar23 = uVar23 + 2;
                                    uVar45 = uVar45 + iVar5;
                                    uVar52 = uVar52 + iVar5;
                                    uVar53 = uVar53 + iVar5;
                                    uVar54 = uVar54 + iVar5;
                                    uVar102 = uVar102 + iVar10;
                                    uVar103 = uVar103 + iVar10;
                                    uVar104 = uVar104 + iVar10;
                                    uVar105 = uVar105 + iVar10;
                                    uVar68 = uVar68 + iVar11;
                                    uVar71 = uVar71 + iVar11;
                                    uVar72 = uVar72 + iVar11;
                                    uVar73 = uVar73 + iVar11;
                                    auVar59._0_4_ =
                                        auVar59._0_4_ + (float)iVar11 * local_1b8[8] + (float)iVar10 * local_1b8[4];
                                    auVar59._4_4_ =
                                        fVar60 + (float)iVar11 * local_1b8[9] + (float)iVar10 * local_1b8[5];
                                    auVar59._8_4_ =
                                        fVar62 + (float)iVar11 * local_1b8[10] + (float)iVar10 * local_1b8[6];
                                    auVar59._12_4_ =
                                        fVar63 + (float)iVar11 * local_1b8[11] + (float)iVar10 * local_1b8[7];
                                    lVar22 = lVar22 + 16;
                                } while ((int)uVar23 < (int)uVar19);
                            }
                            auVar41[3] = -((uVar28 & 2147483648) == 0);
                            auVar41._0_3_ = 16777215;
                            auVar41[4] = 255;
                            auVar41[5] = 255;
                            auVar41[6] = 255;
                            auVar41[7] = -((uVar42 & 2147483648) == 0);
                            auVar41[8] = 255;
                            auVar41[9] = 255;
                            auVar41[10] = 255;
                            auVar41[11] = -((uVar43 & 2147483648) == 0);
                            auVar41[12] = 255;
                            auVar41[13] = 255;
                            auVar41[14] = 255;
                            auVar41[15] = -((uVar44 & 2147483648) == 0);
                            if ((unsigned short)((unsigned short)((uint64_t)(auVar41 >> 7) & 1) |
                                                 (unsigned short)((uint64_t)(auVar41 >> 15) & 1) << 1 |
                                                 (unsigned short)((uint64_t)(auVar41 >> 23) & 1) << 2 |
                                                 (unsigned short)((uint64_t)(auVar41 >> 31) & 1) << 3 |
                                                 (unsigned short)((uint64_t)(auVar41 >> 39) & 1) << 4 |
                                                 (unsigned short)((uint64_t)(auVar41 >> 47) & 1) << 5 |
                                                 (unsigned short)((uint64_t)(auVar41 >> 55) & 1) << 6 |
                                                 (unsigned short)((uint64_t)(auVar41 >> 63) & 1) << 7 |
                                                 (unsigned short)((uint64_t)(auVar41 >> 71) & 1) << 8 |
                                                 (unsigned short)((uint64_t)(auVar41 >> 79) & 1) << 9 |
                                                 (unsigned short)((uint64_t)(auVar41 >> 87) & 1) << 10 |
                                                 (unsigned short)((uint64_t)(auVar41 >> 95) & 1) << 11 |
                                                 (unsigned short)((uint64_t)(auVar41 >> 103) & 1) << 12 |
                                                 (unsigned short)((uint64_t)(auVar41 >> 111) & 1) << 13 |
                                                 (unsigned short)((uint64_t)(auVar41 >> 119) & 1) << 14 |
                                                 (unsigned short)(auVar41[15] >> 7) << 15) != 65535) {
                                iVar24 = 1;
                                goto LAB_100826c58;
                            }
                            iVar18 = iVar18 + 2;
                            iVar25 = iVar25 + m_bufferWidth * 2;
                            uVar84 = uVar84 + iVar9;
                            uVar88 = uVar88 + iVar9;
                            uVar90 = uVar90 + iVar9;
                            uVar92 = uVar92 + iVar9;
                            uVar76 = uVar76 + iVar6;
                            uVar79 = uVar79 + iVar6;
                            uVar80 = uVar80 + iVar6;
                            uVar82 = uVar82 + iVar6;
                            uVar96 = uVar96 + iVar7;
                            uVar99 = uVar99 + iVar7;
                            uVar100 = uVar100 + iVar7;
                            uVar101 = uVar101 + iVar7;
                            bVar26 = iVar18 < iVar4;
                        } while (iVar18 < iVar4);
                        iVar24 = 0;
                    }
                LAB_100826c58:
                    if (bVar26)
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
            uVar3 = (unsigned int)vector4_00;
            uVar19 = uVar3 + 4;
            uVar21 = (unsigned long)uVar19;
            vector4_00 = (Vector4T<float>*)(unsigned long)uVar19;
        } while (uVar3 < 8);
        iVar24 = 2;
    LAB_10082713e:
        return iVar24 != 2;
    }

    // 0x10084d500
    void OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5::operator()() const {
        if (*field_8 == 7) {
            LoadPackedDepthBufferInternalSSENonInterlaced<false>(field_16, (float*)*field_24, (unsigned char*)*field_32,
                                                                 *field_40, field_0);
            return;
        }
        if (*field_8 != 29) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "occlusion/OcclusionManager.cpp",
                            340, nullptr);
        }
        LoadPackedDepthBufferInternalSSENonInterlaced<true>(field_16, (float*)*field_24, (unsigned char*)*field_32,
                                                            *field_40, field_0);
    }

} // namespace jag::graphics
