// libs/oldscape/osrendercore/OSRenderCore.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.osrendercore

#include "OSRenderCore.h"

namespace jag::oldscape {
    // 0x100fc91d0
    int64_t OSRenderCore_Impl::m_pCore;

    // 0x1001bb000
    OSRenderCore_Impl::OSRenderCore_Impl(GraphicsApp& graphicsApp)
        : OSRenderCore_LogicThread(), field_704(graphicsApp) {
        *(uint8_t***)field_16020848 = &PTR_GetAudioAPI_100ef6768;
        field_16020856 = std::make_unique<hal::audio::AudioAPI>();
        uint8_t* this_00 = &field_16020864;
        new (this_00) std::array<RenderState, 2ul>();
        m_pCore = this;
        uint64_t uVar2 = (*this_00)[0];
        OSRenderCore_Impl_vtbl* pOVar1 = this->_vptr;
        *(uint64_t*)(field_16 + (long)(pOVar1[-1].TexturesUploaded + 72)) = uVar2;
        uVar2 = (*this_00)[1];
        *(uint64_t*)(field_16 + (long)(pOVar1[-1].GetAudioAPI - 16)) = uVar2;
    }

    // 0x1001bb170
    OSRenderCore_RenderThread::OSRenderCore_RenderThread(GraphicsApp& graphicsApp)
        : OSRenderCore_RenderThread_RSeven(), field_16020136(graphicsApp) {}

    // 0x1001bb2c0
    OSRenderCore_RenderThread::~OSRenderCore_RenderThread() {}

    // 0x1001bb490
    OSRenderCore_RenderThread_Common::OSRenderCore_RenderThread_Common() : render::Viewport(0, 0, 0, 0, 0.0, 1.0) {
        new (&field_24) shared_ptr();
        new (&field_40) sidebars::SideBarData(0, 0);
        field_48 = 1;
        new (&field_64) jag::math::Vector4T();
        field_80 = 0;
        field_104 = 0;
    }

    // 0x1001bb4f0
    OSRenderCore_Impl::~OSRenderCore_Impl() {
        *(uint8_t***)field_16020848 = &PTR_GetAudioAPI_100ef6768;
        m_pCore = 0;
        field_16020864.~array();
        field_16020856.~unique_ptr();
        field_704->~OSRenderCore_RenderThread();
    }

    // 0x1001bb5d0
    NoJs5ResourceProvider::NoJs5ResourceProvider() {

        eastl::string local_c0("storename");
        eastl::string local_98("binaryUrl1");
        eastl::string local_78("httpurl");
        VBOMapper local_58;
        eastl::string local_e0("");
        new (this) Js5ResourceProvider(local_c0, local_98, local_78, &bogusSystemSettings, local_58, 0, noArchiveSets,
                                       true, nullptr, nullptr, local_e0);
    }

    // 0x1001bb790
    OSRenderCore_RenderThread_RSeven::OSRenderCore_RenderThread_RSeven() {
        Array<game::ConfigTypeListContainerStrategy>* in_R9;
        unique_ptr<game::ConfigProvider, std::default_delete<game::ConfigProvider> _> local_48;
        bool local_40[15];

        field_8.unique_ptr<true, void>();
        field_16.unique_ptr<true, void>();
        field_24.unique_ptr<true, void>();
        new (field_32) Js5ArchiveSettings();
        field_96.unique_ptr<true, void>();
        Array<game::ConfigTypeListContainerStrategy> local_60;
        Language** arg2 = (Language**)*field_24;
        local_40[0] = false;
        local_40[1] = false;
        local_40[2] = false;
        local_40[3] = false;
        local_40[4] = false;
        local_40[5] = false;
        local_40[6] = false;
        local_40[7] = false;
        std::make_unique<game::ConfigProvider, NoJs5ResourceProvider&, Language const*&, ModeGame const*&, bool,
                         decltype(nullptr), Array<game::ConfigTypeListContainerStrategy>&>(local_48, *arg2, 1,
                                                                                           *local_40, local_60, *in_R9);
        field_96 = local_48;
    }

    // 0x1001bc210
    void OSRenderCore_RenderThread::Init() {
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        field_1580384->SetLightsLevelsAbove(*(char*)(lVar1 + 180) != '\0' || *(char*)(lVar1 + 179) != '\0');
        field_1580360 = 0;
        InitRSeven(*(int*)(field_32 + (long)(this->_vptr[-3].GetUISize + 16)));
    }

    // 0x1001bd060
    void OSRenderCore_LogicThread_JavaStyle::SetTextureOffsets(const int* arg1, const int* arg2, int arg3) {
        if (256 < arg3) {
            LogAssert("numTextures <= (int)m_pRenderStateJava->m_textureXOffsets.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "OSRenderCore.cpp",
                      252, nullptr);
        }
        void* pvVar1 = (void*)(*(
            (array<int, 256ul>*)(*(long*)((long)&field_0 + *(long*)(field_0 - 24)) + 19678752)))[(unsigned long)arg1];
        _memcpy(pvVar1, arg1, (long)arg3 << 2);
        pvVar1 = (void*)(*(
            (array<int, 256ul>*)(*(long*)((long)&field_0 + *(long*)(field_0 - 24)) + 19679776)))[(unsigned long)arg1];
        _memcpy(pvVar1, arg2, (long)arg3 << 2);
    }

    // 0x1001bd110
    void OSRenderCore_RenderThread_UI::NewFrame2D() {
        ReturnValue local_30;

        if (*(char*)&this[1].field_0 != '\0') {
            if (((BufferInterface*)field_1579984.GetWrite())->IsCreated() == '\0') {
                LogAssert("m_uiPBO.GetWrite().IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                          "OSRenderCore.cpp",
                          261, nullptr);
            }
            local_30 = ((PixelUnpackBuffer*)field_1579984.GetWrite())->MapWrite(6, 0, 0, 0);
            *(ReturnValue*)field_1580240 = local_30[0];
        }
    }

    // 0x1001bd1c0
    void OSRenderCore_RenderThread_UI::EndFrame2D() {
        uint8_t* this_01;
        uint8_t* this_02;
        uint32_t uVar1;
        int iVar3;
        PixelUnpackBuffer* pPVar4;
        long* plVar5;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* pcVar6;
        uint32_t* puVar7;
        long lVar8;
        VertexBuffer* this_04;
        Layout* this_06;
        void* arg3;

        if (*(char*)&this[1].field_0 != '\0') {
            this_01 = &field_1579984;
            pPVar4 = (PixelUnpackBuffer*)this_01->GetWrite();
            pPVar4->Unmap();
            *(uint64_t*)field_1580240 = 0;
            pPVar4 = (PixelUnpackBuffer*)this_01->GetWrite();
            pPVar4->Bind();
            this_02 = &field_1578944;
            plVar5 = (long*)this_02->GetWrite();
            pcVar6 = (compressed_pair_imp<
                      eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                      eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)this_02->GetWrite();
            puVar7 = (uint32_t*)pcVar6->second();
            uVar1 = *puVar7;
            pcVar6 = (compressed_pair_imp<
                      eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                      eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)this_02->GetWrite();
            lVar8 = pcVar6->second();
            (**(void (**)(...))(*plVar5 + 40))(plVar5, 0, 0, 0, uVar1, *(uint32_t*)(lVar8 + 4), 29, 0);
            pPVar4 = (PixelUnpackBuffer*)this_01->GetWrite();
            pPVar4->Unbind();
        }
        RoundRobin<eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul>, 2ul>* this_00 =
            (RoundRobin<eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul>, 2ul>*)(field_8 + 16);
        if (((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_00->GetWrite())->empty() ==
            '\0') {
            this_04 = (VertexBuffer*)field_1572984.GetWrite();
            iVar3 = ((vector<eastl::pair<int, int>>*)this_00->GetWrite())->size();
            this_06 = (Layout*)this_00->GetWrite();
            arg3 = (void*)this_06->HeapBeginPtr();
            this_04->Update(0, iVar3 * 8, arg3, 2);
        }
        field_1578944.Advance();
        field_1572984.Advance();
        this_00->Advance();
        field_1579984.Advance();
        field_1580160.Advance();
    }

    // 0x1001bd440
    void OSRenderCore_RenderThread::NewFrame3D() {
        field_112.NewFrame2D();
    }

    // 0x1001bd450
    void OSRenderCore_RenderThread::EndFrame3D() {
        long lVar1 = ((OSRenderCore_RenderThread_Common*)(field_32 + (long)(this->_vptr[-3].GetUISize - 32)))
                         ->GetRenderStateNXT();
        if (*(int*)(lVar1 + 17563832) == 0) {
            field_1584944.Advance();
            field_16007448.Advance();
        }
        field_112.EndFrame2D();
    }

    // 0x1001bd4d0
    void OSRenderCore_RenderThread::Paint() {
        PaintDirect();
    }

    // 0x1001bd4e0
    void OSRenderCore_RenderThread::PaintDirect() {
        uint64_t this_00;
        int iVar2;
        int iVar3;
        long lVar4;
        EffectManager* this_03;
        SunlightDirectLighting* this_04;
        ReturnValue* vector3;
        SunlightShadows* this_05;
        MSIType* this_07;
        uint8_t local_60[32];
        ReturnValue local_40;
        uint32_t local_38;

        auto this_01 = field_16020136->GetDefaultRenderContext();
        char cVar1 = this_01->IsInsideBeginEnd();
        if (cVar1) {
            UpdateRenderTargetSizes(*this_01);
            iVar2 = this_01->GetBackBufferWidth();
            iVar3 = this_01->GetBackBufferHeight();
            new (local_60) render::Viewport(0, 0, iVar2, iVar3, 0.0, 1.0);
            this_01->SetViewports(local_60, 1);
            this_01->SetRenderTargets(this_01->GetBackBuffer());
            this_01->ClearDepthStencilTarget(1.0, 0, 2);
            lVar4 = ((OSRenderCore_RenderThread_Common*)(field_32 + (long)(this->_vptr[-3].GetUISize - 32)))
                        ->GetRenderStateNXT();
            if (*(int*)(lVar4 + 17563832) == 0) {
                field_1580368.PaintJavaStyle(*this_01);
            } else {
                this_03 = ((RT7Core*)field_8.operator->())->GetEffectManager();
                lVar4 = ((OSRenderCore_RenderThread_Common*)(field_32 + (long)(this->_vptr[-3].GetUISize - 32)))
                            ->GetRenderStateNXT();
                this_07 = (MSIType*)(lVar4 + 19678676);
                cVar1 = this_03->IsEnabled(29);
                if (cVar1) {
                    this_04 = (SunlightDirectLighting*)this_03->GetEffect<jag::graphics::SunlightDirectLighting>(29);
                    local_40 = (ReturnValue)this_07->GetSunDirection();
                    local_38 = 1065353216;
                    vector3 = local_40 = jag::math::Vector3T<float>::Normalize();
                    this_04->SetDirection(*vector3, 0, 0);
                    local_40 = (ReturnValue)this_07->GetAdjustedAmbientColour();
                    local_38 = 1065353216;
                    this_04->SetAmbientColour(local_40, 0, 0);
                    local_40 = (ReturnValue)this_07->GetAdjustedSunColour();
                    local_38 = 1065353216;
                    this_04->SetColour(local_40, 0, 0);
                }
                cVar1 = this_03->IsEnabled(30);
                if (cVar1) {
                    this_05 = (SunlightShadows*)this_03->GetEffect<jag::graphics::SunlightDirectLighting>(30);
                    this_05->SetSunlightShadowStrength((float)this_07->GetMean(), 0, 0);
                    local_60._24_8_ = this_05;
                    iVar2 = this_05->GetPos();
                    iVar3 = this_07->GetSpriteID();
                    this_00 = local_60._24_8_;
                    if (iVar2 != iVar3) {
                        cVar1 = local_60._24_8_->GetPos();
                        this_03->DisableEffect((unsigned int)(uint8_t)(cVar1 + 31));
                        cVar1 = this_07->GetSpriteID();
                        this_03->EnableEffect((unsigned int)(uint8_t)(cVar1 + 31), true);
                        this_00->SetQuality(this_07->GetSpriteID());
                    }
                }
                PaintRSeven(*this_01);
            }
            lVar4 = ((OSRenderCore_RenderThread_Common*)(field_32 + (long)(this->_vptr[-3].GetUISize - 32)))
                        ->GetRenderStateNXT();
            if (*(char*)(lVar4 + 19677504) != '\0') {
                field_112.DrawUI(*this_01);
            }
            ((fixed_vector<jag::math::Vector2T<float>, 98304ul>*)field_136.GetRead())->reset_lose_memory();
            lVar4 = ((OSRenderCore_RenderThread_Common*)(field_32 + (long)(this->_vptr[-3].GetUISize - 32)))
                        ->GetRenderStateNXT();
            *(uint8_t*)(lVar4 + 19677506) = 0;
        }
    }

    // 0x1001bd780
    void OSRenderCore_RenderThread_JavaStyle::PaintJavaStyle(render::RenderContext& renderContext) {
        RenderTargets* pRVar1;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        Vector4T<float> local_38;

        if (field_8 != '\0') {
            pRVar1 = (RenderTargets*)field_48.end();
            renderContext.SetRenderTargets(pRVar1);
        }
        long lVar2 =
            ((OSRenderCore_RenderThread_Common*)(field_16 + *(long*)((long)field_0 - 24) - 16))->GetRenderStateNXT();
        if (*(char*)(lVar2 + 19677505) == '\0') {
            local_38 = jag::math::Vector4T(0.0);
            renderContext.ClearRenderTargets(&local_38, 1);
        } else {
            DrawSkybox(renderContext);
        }
        DrawTriangles(renderContext);
        if (field_8 != '\0') {
            renderContext.SetScissorRectangle(false, 0, 0, 0, 0);
            pRVar1 = renderContext.GetBackBuffer();
            local_38 = shared_ptr();
            local_48 = shared_ptr();
            renderContext.ResolveColourTargetData(pRVar1, 16384, local_38, local_48);
        }
    }

    // 0x1001bd860
    void OSRenderCore_RenderThread_JavaStyle::DrawSkybox(render::RenderContext& renderContext) {
        RenderTargets* renderTargets;

        if (field_8 != '\0') {
            renderTargets = (RenderTargets*)field_48.end();
            renderContext.SetRenderTargets(renderTargets);
        }
        renderContext.ClearRenderTargets((Vector4T<float>*)(field_16 + *(long*)((long)field_0 - 24) + 48), 1);
    }

    // 0x1001bd8b0
    void OSRenderCore_RenderThread_JavaStyle::DrawTriangles(render::RenderContext& renderContext) {
        uint8_t* this_00;
        unsigned int uVar1;
        RenderPipelineState* this_02;
        compressed_pair_imp<dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_03;
        OutputMergerState* pOVar8;
        RenderTargets* renderTargets;
        vector<OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
               eastl::fixed_vector_allocator<48ul, 128ul, 4ul, 0ul, true>>* this_05;
        int* piVar9;
        OSRenderCore_RenderThread_JavaStyle* this_06;
        unsigned char* puVar10;
        uint8_t* pbVar11;
        VertexDeclaration* pVVar12;
        VertexBuffer* pVVar13;
        float* pfVar14;
        Layout* this_07;
        void* arg1;
        DrawCallState* pDVar16;
        unsigned char* puVar17;
        OSRenderCore_RenderThread_JavaStyle* this_08;
        ShaderProgram* pSVar18;
        uint64_t uVar20;
        float arg3_00;
        uint8_t local_140[24];
        uint64_t local_128;
        ShaderProgram* local_118;
        unsigned char* local_110;
        void* local_108;
        void* local_100;
        void* local_f8;
        void* local_f0;
        void* local_e8;
        DrawCallState local_e0;
        Vector2T<int> local_b0;
        Vector2T<int> local_a8;
        Point<float> local_a0;
        ShaderProgram* local_98;
        InputAssemblerState* local_90;
        OSRenderCore_RenderThread_JavaStyle* local_88;
        float local_74;
        float local_70;
        float local_6c;
        float local_68;
        unsigned long local_60;
        uint8_t local_58[16];
        ShaderProgram* local_48;
        float local_34;

        Minimap* pMVar15 = (Minimap*)(field_16 + *(long*)((long)field_0 - 24) + 8);
        int iVar3 = renderContext.GetBackBufferHeight();
        uint32_t uVar4 = pMVar15->GetPos();
        local_48 = (ShaderProgram*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar4);
        int local_3c = pMVar15->GetLevel();
        int iVar5 = pMVar15->GetX();
        int iVar6 = pMVar15->MaxZ();
        int local_64 = iVar3;
        int arg3 = pMVar15->GetPos();
        int arg4 = pMVar15->GetLevel();
        new (local_140) render::Viewport(iVar5, iVar3 - iVar6, arg3, arg4, 0.0, 1.0);
        auto this_01 = field_4576.GetRead();
        long lVar7 = this_01->size();
        if (lVar7 != 0) {
            local_e0 = render::DrawCallState();
            local_90 = (InputAssemblerState*)&field_4688;
            local_e0.SetInputAssemblerState(local_90);
            pDVar16 = &local_e0;
            this_02 = (RenderPipelineState*)pDVar16->GetRenderPipelineState();
            lVar7 = pDVar16->Instance();
            this_02->SetRasteriserState((lVar7 + 1272));
            pDVar16 = &local_e0;
            this_03 = (compressed_pair_imp<dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                          pDVar16->GetRenderPipelineState();
            lVar7 = pDVar16->Instance();
            eastl::compressed_pair_imp<dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
                this_03, (PlayerDataComparator<social::FriendChatUser>*)(lVar7 + 1676));
            pOVar8 = local_e0.GetOutputMergerState();
            pOVar8->SetViewports(local_140, 1);
            this_08 = (OSRenderCore_RenderThread_JavaStyle*)renderContext;
            if (field_8 == '\0') {
                renderTargets = ((RenderContext*)(OSRenderCore_RenderThread_JavaStyle*)renderContext)->GetBackBuffer();
            } else {
                renderTargets = (RenderTargets*)field_48.end();
            }
            pOVar8 = local_e0.GetOutputMergerState();
            pOVar8->SetRenderTargets(renderTargets);
            local_118 = (ShaderProgram*)&field_4880;
            SetTriangleShaderUniforms(*local_118);
            local_98 = (ShaderProgram*)&field_6736;
            SetTriangleShaderUniforms(*local_98);
            this_00 = &field_14427080;
            if (((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_00->GetRead())->empty() ==
                '\0') {
                this_05 = (vector<OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                                  eastl::fixed_vector_allocator<48ul, 128ul, 4ul, 0ul, true>>*)this_00->GetRead();
                piVar9 = (int*)(*this_05)[0];
                if (*piVar9 != 5) {
                    LogAssert("m_vbSections.GetRead().empty() || m_vbSections.GetRead()[0].m_stencilMode == "
                              "StencilMode::UISCENE_TRANSFORM",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                              "osrendercore/OSRenderCore.cpp",
                              1367, nullptr);
                }
            }
            local_b0 = jag::math::Vector2T();
            local_88 = this;
            local_a8 = jag::math::Vector2T();
            this_06 = (OSRenderCore_RenderThread_JavaStyle*)this_00->GetRead();
            puVar10 = (unsigned char*)this_06->HeapBeginPtr();
            local_110 = (unsigned char*)this_06->end();
            if (puVar10 != local_110) {
                local_108 = &local_88->field_14439704;
                local_100 = &local_88->field_14439644;
                local_f8 = &local_88->field_14439584;
                arg3_00 = (float)(int)local_48;
                local_f0 = &local_88->field_14439524;
                local_68 = (float)local_3c;
                local_e8 = &local_88->field_14439464;
                local_70 = 1.0 / arg3_00;
                local_74 = 1.0 / local_68;
                local_60 = 0;
                local_48 = nullptr;
                local_3c = 0;
                puVar10 = puVar10 + 47;
                local_6c = arg3_00;
                do {
                    pSVar18 = local_118;
                    if (*puVar10 != '\0') {
                        uVar20 = GetBrightnessAdjustedHSL(this_06, puVar10[-3], puVar10[-2], puVar10[-1]);
                        local_34 = arg3_00;
                        local_128 = uVar20;
                        new (local_58) HashedString("uTintHSL_Weight");
                        pSVar18 = local_98;
                        iVar3 = local_98->GetConstIndex(*local_58);
                        local_a0[0] = (Point<float>)0;
                        pbVar11 = std::clamp<unsigned char>(*puVar10, local_a0, 128);
                        pSVar18->SetShaderConstFloat4(iVar3, (float)local_128, local_128._4_4_, local_34,
                                                      (float)*pbVar11 * 0.0078125f);
                        new (local_58) HashedString("uTintHSL_Mask");
                        pSVar18 = local_98;
                        iVar3 = local_98->GetConstIndex(*local_58);
                        pSVar18->SetShaderConstInt3(iVar3, (unsigned int)(puVar10[-3] != 255),
                                                    (unsigned int)(puVar10[-2] != 255),
                                                    (unsigned int)(puVar10[-1] != 255));
                    }
                    if (pSVar18 != local_48) {
                        SetTriangleShader(local_88, pSVar18, &local_e0);
                        pVVar12 = (VertexDeclaration*)pSVar18->second();
                        pVVar13 = (VertexBuffer*)(*this_01)[local_60 & 4294967295];
                        local_90->SetVertexStreamData(pVVar12, pVVar13);
                        local_48 = pSVar18;
                    }
                    if (*(int*)(puVar10 - 47) == 5) {
                        pOVar8 = local_e0.GetOutputMergerState();
                        pOVar8->SetViewports(local_140, 1);
                        iVar3 = *(int*)(puVar10 - 27);
                        local_a0 = jag::math::Point(local_70, local_74);
                        local_58._0_8_ = (*((double)iVar3 + (double)iVar3)) * local_a0;
                        local_b0 = *local_58;
                        arg3_00 = (float)(*(int*)(puVar10 - 31) * -2) / local_68;
                        new (local_58) jag::math::Point((float)(*(int*)(puVar10 - 35) * 2) / local_6c, arg3_00);
                        local_a8 = *local_58;
                        new (local_58) shared_ptr();
                        pMVar15 = (Minimap*)(puVar10 - 19);
                        iVar3 = pMVar15->GetPos();
                        if (iVar3 < 0) {
                            this_06 = (OSRenderCore_RenderThread_JavaStyle*)local_e0.GetOutputMergerState();
                            this_06->SetScissorRects(local_58, 0);
                        } else {
                            local_34 = (float)pMVar15->GetX();
                            iVar3 = pMVar15->MaxZ();
                            iVar3 = local_64 - iVar3;
                            iVar5 = pMVar15->GetPos();
                            iVar6 = pMVar15->GetLevel();
                            this_08 = (OSRenderCore_RenderThread_JavaStyle*)renderContext;
                            new (local_58) dash3d::GridRect((int)local_34, iVar3, iVar5, iVar6);
                            this_06 = (OSRenderCore_RenderThread_JavaStyle*)local_e0.GetOutputMergerState();
                            this_06->SetScissorRects(local_58, 1);
                        }
                    } else {
                        new (local_58) HashedString("uInvViewportSize");
                        iVar3 = local_48->GetConstIndex(*local_58);
                        pfVar14 = (float*)local_b0.SSOBeginPtr();
                        local_34 = *pfVar14;
                        pfVar14 = (float*)local_b0.y();
                        local_48->SetShaderConstFloat2(iVar3, local_34, *pfVar14);
                        new (local_58) HashedString("uOriginShift");
                        iVar3 = local_48->GetConstIndex(*local_58);
                        pfVar14 = (float*)local_a8.SSOBeginPtr();
                        local_34 = *pfVar14;
                        pfVar14 = (float*)local_a8.y();
                        arg3_00 = *pfVar14;
                        local_48->SetShaderConstFloat2(iVar3, local_34, arg3_00);
                        uVar1 = *(unsigned int*)(puVar10 - 43);
                        if (uVar1 != (unsigned int)local_60) {
                            pVVar12 = (VertexDeclaration*)local_48->second();
                            pVVar13 = (VertexBuffer*)(*this_01)[(unsigned long)uVar1];
                            local_3c = 0;
                            local_90->SetVertexStreamData(pVVar12, pVVar13);
                            local_60 = (unsigned long)uVar1;
                        }
                        switch (*(uint32_t*)(puVar10 - 47)) {
                        case 0:
                            this_07 = (Layout*)local_e0.GetRenderPipelineState();
                            arg1 = local_e8;
                            break;
                        case 1:
                            this_07 = (Layout*)local_e0.GetRenderPipelineState();
                            arg1 = local_f0;
                            break;
                        case 2:
                            this_07 = (Layout*)local_e0.GetRenderPipelineState();
                            arg1 = local_f8;
                            break;
                        case 3:
                            this_07 = (Layout*)local_e0.GetRenderPipelineState();
                            arg1 = local_100;
                            break;
                        case 4:
                            this_07 = (Layout*)local_e0.GetRenderPipelineState();
                            arg1 = local_108;
                            break;
                        default:
                            goto switchD_1001bdf41_default;
                        }
                        this_07->SetHeapSize(arg1);
                    switchD_1001bdf41_default:
                        this_08->BindDrawCallState(local_e0);
                        if (*(int*)(puVar10 - 47) - 1U < 2) {
                            this_08->ClearDepthStencilTarget(0.0, 0, 4);
                        }
                        this_06 = this_08;
                        this_08->DrawPrimitives(4, local_3c, *(int*)(puVar10 - 39));
                        local_3c = local_3c + *(int*)(puVar10 - 39);
                    }
                    puVar17 = puVar10 + 1;
                    puVar10 = puVar10 + 48;
                } while (puVar17 != local_110);
            }
        }
    }

    // 0x1001be0a0
    void OSRenderCore_RenderThread_JavaStyle::GetBrightnessAdjustedHSL(signed char arg1, signed char arg2,
                                                                       signed char arg3) {
        unsigned long local_50;
        unsigned long local_40;
        schar local_1d;

        local_1d[2] = arg1;
        if (arg1 == -1) {
            local_1d[2] = '?';
        }
        local_1d[3] = arg2;
        if (arg2 == -1) {
            local_1d[3] = '\a';
        }
        local_1d[4] = arg3;
        if (arg3 == -1) {
            local_1d[4] = '?';
        }
        local_50 = local_50 & 18446744073709551360;
        local_30.field_0._0_1_ = 63;
        auto psVar4 = std::clamp<signed char>(*(&local_1d + 2), local_50, local_30);
        bool cVar1 = *psVar4;
        local_40 = local_40 & 18446744073709551360;
        local_60[0] = (Vector3T<float>)7;
        psVar4 = std::clamp<signed char>(*(&local_1d + 3), local_40, local_60);
        bool cVar2 = *psVar4;
        local_1d[0] = '\0';
        local_1d[1] = 127;
        psVar4 = std::clamp<signed char>(*(&local_1d + 4), local_1d, *(&local_1d + 1));
        unsigned int uVar3 =
            jag::math::RunetekColour::HSLToRGB(jag::math::RunetekColour::PackHSL((int)cVar1, (int)cVar2, (int)*psVar4));
        float arg2_00 = (float)(uVar3 >> 8 & 255);
        ColourHSL local_30((float)(uVar3 >> 16 & 255), arg2_00, (float)(uVar3 & 255));
        local_50 = local_30 / *256.0;
        float local_48 = arg2_00;
        local_40 = *1.03 * local_50;
        float local_38 = arg2_00;
        Vector3T<float> local_60(0.035);
        local_30._0_8_ = local_40 + local_60;
        local_30.field_8 = arg2_00;
        local_50.SetXYZ(local_30);
        jag::math::RGBToHSL(local_50);
    }

    // 0x1001be270
    void OSRenderCore_RenderThread::UpdateRenderTargetSizes(const render::RenderContext& renderContext) {
        uint8_t* this_00;
        shared_ptr<render::RenderTargets>* renderTargets;
        uint64_t texture;
        bool bVar1;
        Texture* pTVar6;
        uint32_t* puVar7;
        RenderTargets* pRVar8;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_02;
        uint64_t* puVar9;
        RT7Core* pRVar10;
        uint8_t local_d8[68];
        uint32_t local_94;
        int local_8c;
        uint32_t local_88;
        uint32_t local_80;
        uint8_t local_78;
        ReturnValue local_58;
        uint8_t local_48[16];

        int iVar3 = renderContext.GetBackBufferWidth();
        int arg2 = renderContext.GetBackBufferHeight();
        Vector2T<int> local_38(iVar3, arg2);
        Texture* this_01 = (Texture*)(field_1580384 + 48);
        auto piVar4 = this_01->second();
        iVar3 = *piVar4;
        long lVar5 = this_01->second();
        new (local_48) sidebars::SideBarData(iVar3, *(int*)(lVar5 + 4));
        if (*(int*)(field_32 + (long)(this->_vptr[-3].GetUISize + 72)) == 1) {
            this_00 = &field_8;
            pRVar10 = (RT7Core*)(*this_00).operator->();
            piVar4 = (int*)pRVar10->GetMSAASampleCount();
            if (*piVar4 != *(int*)(field_32 + (long)(this->_vptr[-3].GetUISize + 16))) {
                pRVar10 = (RT7Core*)(*this_00).operator->();
                pRVar10->DestroyRenderTargets();
                pRVar10 = (RT7Core*)(*this_00).operator->();
                pRVar10->InitRenderTargets(*(int*)(field_32 + (long)(this->_vptr[-3].GetUISize + 16)));
            }
        } else if (((*(int*)(field_32 + (long)(this->_vptr[-3].GetUISize + 72)) == 0) && (field_1580376 != '\0')) &&
                   ((bVar1 = local_38 != *local_48,
                     bVar1 || (iVar3 = *(int*)(field_32 + (long)(this->_vptr[-3].GetUISize + 16)),
                               lVar5 = this_01->second(), iVar3 != *(int*)(lVar5 + 16))))) {
            pTVar6 = (Texture*)field_1579056.GetWrite();
            if (pTVar6->IsCreated() == '\0') {
                LogAssert("m_textureUI.GetWrite().IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                          "OSRenderCore.cpp",
                          704, "Call SetUISize before SetScreenSize");
            }
            renderTargets = (shared_ptr<render::RenderTargets>*)(field_1580384 + 32);
            render::RenderTargets::SafeReset(*renderTargets);
            this_01->Destroy();
            local_48._8_8_ = &field_1580944;
            local_48._8_8_->Destroy();
            render::RenderTargets::SafeReset(field_1581456);
            field_1581472.Destroy();
            new ((local_d8 + 64)) render::Texture::Desc();
            puVar7 = (uint32_t*)local_38.SSOBeginPtr();
            local_d8._64_4_ = *puVar7;
            puVar7 = (uint32_t*)local_38.y();
            texture = local_48._8_8_;
            local_94 = *puVar7;
            local_80 = 1;
            local_78 = 0;
            local_88 = *(uint32_t*)(field_32 + (long)(this->_vptr[-3].GetUISize + 16));
            pRVar8 = renderContext.GetBackBuffer();
            this_02 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar8->GetColourTargetTextures();
            puVar9 = (uint64_t*)(*this_02)[0];
            lVar5 = (*puVar9)->second();
            local_8c = (unsigned int)(*(int*)(lVar5 + 12) != 7) * 9 + 7;
            new (local_d8) render::Texture::Desc();
            piVar4 = (int*)local_38.SSOBeginPtr();
            local_d8._0_4_ = *piVar4;
            piVar4 = (int*)local_38.y();
            local_d8._4_4_ = *piVar4;
            local_d8._16_4_ = local_88;
            local_d8._24_4_ = 0;
            local_d8[32] = 0;
            local_d8._12_4_ = 14;
            this_01->Create(*((local_d8 + 64)));
            pTVar6 = (Texture*)texture;
            texture->Create(*local_d8);
            lVar5 = pTVar6->Instance();
            this_01->SetSamplerState(*((lVar5 + 80)), false);
            make_shared<render::RenderTargets>(&local_58);
            *renderTargets = local_58;
            pRVar8 = (RenderTargets*)(*renderTargets).operator->();
            pRVar8->Create("", 0);
            pRVar8 = (RenderTargets*)(*renderTargets).operator->();
            pRVar8->BindColourTargetTexture(this_01, 0, 0, 34069);
            pRVar8 = (RenderTargets*)(*renderTargets).operator->();
            pRVar8->BindDepthStencilTargetTexture(texture);
        }
    }

    // 0x1001beee0
    void OSRenderCore_RenderThread_UI::UploadUIRect(unsigned int* arg1, int arg2, int arg3, int arg4, int arg5) {
        int iVar5;
        unsigned int uVar6;

        if (*(char*)&this[1].field_0 == '\0') {
            LogAssert("m_usePixelBuffers",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "OSRenderCore.cpp",
                      475, "UploadUIRect() only valid when using pixel buffers");
        }
        if (*(long*)field_1580240 == 0) {
            LogAssert("m_uiPixelData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "OSRenderCore.cpp",
                      476, "UI PBO returned null");
        }
        auto pcVar1 = field_1578944.GetWrite();
        auto piVar2 = pcVar1->second();
        int local_34 = *piVar2;
        pcVar1 = (compressed_pair_imp<
                  eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                  eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)field_1578944.GetWrite();
        long lVar3 = pcVar1->second();
        int local_40 = *(int*)(lVar3 + 4);
        if (0 < arg5) {
            lVar3 = (long)arg4;
            uVar6 = local_34 * arg3 + arg2;
            iVar5 = arg3;
            do {
                _memmove((void*)((unsigned long)uVar6 * 4 + *(long*)field_1580240), arg1 + uVar6, lVar3 << 2);
                iVar5 = iVar5 + 1;
                uVar6 = uVar6 + local_34;
            } while (iVar5 < arg3 + arg5);
        }
        float fVar7 = (float)local_40;
        float local_50 = (float)arg2 * (1.0 / (float)local_34);
        float local_4c = (fVar7 - (float)arg3) * (1.0 / fVar7);
        float local_48 = (float)arg4 * (1.0 / (float)local_34) + local_50;
        float local_44 = (fVar7 - (float)(arg3 + arg5)) * (1.0 / fVar7);
        RoundRobin<eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul>, 2ul>* this_00 =
            (RoundRobin<eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul>, 2ul>*)(field_8 + 16);
        auto pvVar4 = this_00->GetWrite();
        pvVar4->emplace_back<float&, float&>(local_50, local_4c);
        pvVar4 = (vector<jag::math::Vector2T<float>, eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true>>*)
                     this_00->GetWrite();
        pvVar4->emplace_back<float&, float&>(local_50, local_44);
        pvVar4 = (vector<jag::math::Vector2T<float>, eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true>>*)
                     this_00->GetWrite();
        pvVar4->emplace_back<float&, float&>(local_48, local_44);
        pvVar4 = (vector<jag::math::Vector2T<float>, eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true>>*)
                     this_00->GetWrite();
        pvVar4->emplace_back<float&, float&>(local_50, local_4c);
        pvVar4 = (vector<jag::math::Vector2T<float>, eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true>>*)
                     this_00->GetWrite();
        pvVar4->emplace_back<float&, float&>(local_48, local_44);
        pvVar4 = (vector<jag::math::Vector2T<float>, eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true>>*)
                     this_00->GetWrite();
        pvVar4->emplace_back<float&, float&>(local_48, local_4c);
    }

    // 0x1001bf1c0
    void OSRenderCore_RenderThread_UI::ClearUIRect(int arg1, int arg2, int arg3, int arg4) {
        int iVar1;
        int iVar3;
        unsigned int uVar4;

        if (*(char*)&this[1].field_0 == '\0') {
            LogAssert("m_usePixelBuffers",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "OSRenderCore.cpp",
                      507, "ClearUIRect() only valid when using pixel buffers");
        }
        if (*(long*)field_1580240 == 0) {
            LogAssert("m_uiPixelData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "OSRenderCore.cpp",
                      508, "UI PBO returned null");
        }
        auto this_00 = field_1578944.GetWrite();
        auto piVar2 = this_00->second();
        if (0 < arg4) {
            iVar1 = *piVar2;
            iVar3 = arg4 + arg2;
            uVar4 = arg1 + iVar1 * arg2;
            do {
                ___bzero((unsigned long)uVar4 * 4 + *(long*)field_1580240, (long)arg3 << 2);
                arg2 = arg2 + 1;
                uVar4 = uVar4 + iVar1;
            } while (arg2 < iVar3);
        }
    }

    // 0x1001bf2d0
    void OSRenderCore_RenderThread_UI::UploadUI(unsigned int* arg1) {
        int iVar2;
        vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true>>* this_01;
        LODLevel* lodLevel1;
        LODLevel* lodLevel2;
        int* piVar6;
        unsigned int* puVar7;
        uint64_t uVar8;
        char* pcVar9;
        long* plVar10;
        vector<jag::math::Vector2T<float>, eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true>>* pvVar11;
        char cVar12;
        unsigned int uVar13;
        unsigned long uVar14;
        RoundRobin<eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul>, 2ul>* this_02;
        int iVar16;
        int arg2;
        unsigned long uVar17;
        int local_54;
        int local_50;
        char* local_48;
        long local_40;
        float local_34;

        uint8_t* this_00 = &field_1578944;
        auto pcVar3 = this_00->GetRead();
        auto puVar4 = pcVar3->second();
        unsigned int uVar15 = *puVar4;
        pcVar3 = (compressed_pair_imp<
                  eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                  eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)this_00->GetRead();
        long lVar5 = pcVar3->second();
        unsigned int uVar1 = *(unsigned int*)(lVar5 + 4);
        if (*(char*)&this[1].field_0 == '\0') {
            plVar10 = (long*)this_00->GetWrite();
            (**(void (**)(...))(*plVar10 + 40))(plVar10, 0, 0, 0, uVar15, uVar1, 29, arg1);
            local_34 = 0.0;
            this_02 = (RoundRobin<eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul>, 2ul>*)(field_8 + 16);
            pvVar11 = (vector<jag::math::Vector2T<float>, eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true>>*)
                          this_02->GetWrite();
            pvVar11->emplace_back<float&, float&>(local_34, 0.0);
            pvVar11 = (vector<jag::math::Vector2T<float>, eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true>>*)
                          this_02->GetWrite();
            pvVar11->emplace_back<float&, float&>(local_34, 1.0);
            pvVar11 = (vector<jag::math::Vector2T<float>, eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true>>*)
                          this_02->GetWrite();
            pvVar11->emplace_back<float&, float&>(1.0, 1.0);
            pvVar11 = (vector<jag::math::Vector2T<float>, eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true>>*)
                          this_02->GetWrite();
            pvVar11->emplace_back<float&, float&>(local_34, 0.0);
            pvVar11 = (vector<jag::math::Vector2T<float>, eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true>>*)
                          this_02->GetWrite();
            pvVar11->emplace_back<float&, float&>(1.0, 1.0);
            pvVar11 = (vector<jag::math::Vector2T<float>, eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true>>*)
                          this_02->GetWrite();
            pvVar11->emplace_back<float&, float&>(1.0, 0.0);
        } else {
            this_01 = (vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true>>*)
                          field_1580160.GetWrite();
            uVar13 = uVar15 + 31;
            if (-1 < (int)uVar15) {
                uVar13 = uVar15;
            }
            local_50 = (((int)uVar13 >> 5) + 1) - (unsigned int)((uVar15 & 31) == 0);
            uVar13 = uVar1 + 31;
            if (-1 < (int)uVar1) {
                uVar13 = uVar1;
            }
            iVar16 = ((((int)uVar13 >> 5) + 1) - (unsigned int)((uVar1 & 31) == 0)) * local_50;
            local_40 = (long)(int)uVar15;
            iVar2 = this_01->size();
            if (iVar16 != iVar2) {
                this_01->resize((long)iVar16);
                lodLevel1 = (LODLevel*)this_01->HeapBeginPtr();
                lodLevel2 = (LODLevel*)this_01->end();
                local_34 = (float)(((uint32_t)local_34._1_3_ << 8) | (uint8_t)1);
                eastl::fill<bool*, bool>(lodLevel1, lodLevel2, local_34);
            }
            if (0 < (int)uVar1) {
                uVar15 = 0;
                do {
                    local_34 = (float)(uVar1 - uVar15);
                    piVar6 = std::min<int>(local_34, 32);
                    if (0 < (int)local_40) {
                        local_54 = (uVar15 >> 5) * local_50;
                        iVar2 = *piVar6;
                        uVar17 = 0;
                        puVar4 = arg1;
                        do {
                            arg2 = (int)uVar17;
                            local_34 = (float)((int)local_40 - arg2);
                            puVar7 = (unsigned int*)std::min<int>(local_34, 32);
                            iVar16 = 0;
                            uVar13 = *puVar7;
                            if (iVar2 < 1) {
                                local_48 = nullptr;
                            } else {
                                local_48 = nullptr;
                                lVar5 = local_40;
                                do {
                                    if (0 < (int)uVar13) {
                                        uVar14 = 0;
                                        do {
                                            if (puVar4[(int)((uVar15 + iVar16) * (int)lVar5) + uVar14] != 0) {
                                                uVar8 = UploadUIRect(arg1, arg2, uVar15, uVar13, iVar2);
                                                iVar16 = 32;
                                                local_48 =
                                                    (char*)(((uint64_t)((int64_t)((unsigned long)uVar8 >> 8)) << 8) |
                                                            (uint8_t)1);
                                                lVar5 = local_40;
                                                break;
                                            }
                                            uVar14 = uVar14 + 1;
                                        } while (uVar13 != uVar14);
                                    }
                                    iVar16 = iVar16 + 1;
                                } while (iVar16 < iVar2);
                            }
                            pcVar9 = (char*)(*this_01)[(long)((int)(uVar17 >> 5) + local_54)];
                            cVar12 = '\x01';
                            if (((unsigned long)local_48 & 1) == 0) {
                                if (*pcVar9 != '\0') {
                                    local_48 = pcVar9;
                                    ClearUIRect(arg2, uVar15, uVar13, iVar2);
                                    cVar12 = '\0';
                                    pcVar9 = local_48;
                                    goto LAB_1001bf430;
                                }
                            } else {
                            LAB_1001bf430:
                                *pcVar9 = cVar12;
                            }
                            uVar17 = uVar17 + 32;
                            puVar4 = puVar4 + 32;
                        } while ((long)uVar17 < local_40);
                    }
                    uVar15 = uVar15 + 32;
                } while ((int)uVar15 < (int)uVar1);
            }
        }
    }

    // 0x1001bf6e0
    void OSRenderCore_RenderThread_JavaStyle::UploadTexture(unsigned char arg1, const unsigned char* arg2) {
        field_2128.Update(0, ((uint8_t)(arg1 + 1) & 15) << 7, ((uint8_t)(arg1 + 1) & 240) << 3, 128, 128, 29, arg2);
    }

    // 0x1001bf720
    void OSRenderCore_RenderThread_JavaStyle::UploadColTab(const unsigned char* arg1) {
        uint8_t* this_00 = &field_1616;
        auto puVar1 = this_00->second();
        unsigned int arg4 = *puVar1;
        long lVar2 = this_00->second();
        this_00->Update(0, 0, 0, arg4, *(unsigned int*)(lVar2 + 4), 29, arg1);
    }

    // 0x1001bf770
    void OSRenderCore_RenderThread_Common::ShowUI(bool arg1) {
        long lVar1 = GetRenderStateNXT();
        *(bool*)(lVar1 + 19677504) = arg1;
    }

    // 0x1001bf790
    void OSRenderCore_RenderThread::SetSkyboxColour(jag::math::Vector4T<float> vector4) {
        QuaternionT<float> local_18;

        (*((Rect<float>*)(vector4 + *(long*)(*(long*)vector4 - 24) + 64))) = local_18;
    }

    // 0x1001bf7c0
    void OSRenderCore_RenderThread_Common::ShowSkybox(bool arg1) {
        long lVar1 = GetRenderStateNXT();
        *(bool*)(lVar1 + 19677505) = arg1;
    }

    // 0x1001bf7e0
    void OSRenderCore_RenderThread::SetFogParams(float arg1, float arg2) {
        OSRenderCore_RenderThread_vtbl* pOVar1 = this->_vptr;
        *(float*)(field_32 + (long)(pOVar1[-3].GetUISize + 48)) = arg1;
        *(float*)(field_32 + (long)(pOVar1[-3].GetUISize + 52)) = arg2;
    }

    // 0x1001bf800
    void OSRenderCore_RenderThread_UI::SetScaledUIQuality(ScaledUIQuality scaledUIQuality) {
        m_scaledUIQuality = scaledUIQuality;
    }

    // 0x1001bf810
    void OSRenderCore_RenderThread_UI::SetUISize(unsigned int arg1, unsigned int arg2) {
        bool cVar1;
        int iVar2;
        unsigned int uVar3;
        unsigned int* puVar5;
        long lVar6;
        BufferInterface* this_01;
        BufferInterface* pBVar7;
        vector<eastl::pair<int, int>>* this_02;
        vector<eastl::pair<int, int>>* pvVar8;
        Texture* this_03;
        unsigned int arg1_00;
        uint8_t local_78[72];

        local_78._64_8_ = this;
        Texture* this_00 = (Texture*)std::array<render::Texture2D, 2ul>::begin();
        Texture* pTVar4 = (Texture*)std::array<render::Texture2D, 2ul>::end();
        if (this_00 != pTVar4) {
            do {
                cVar1 = this_00->IsCreated();
                if (((!cVar1) || (puVar5 = (unsigned int*)this_00->second(), *puVar5 != arg1)) ||
                    (lVar6 = this_00->second(), *(unsigned int*)(lVar6 + 4) != arg2)) {
                    new (local_78) render::Texture::Desc();
                    local_78._12_4_ = 29;
                    local_78._24_4_ = 1;
                    local_78[32] = 0;
                    local_78._0_4_ = arg1;
                    local_78._4_4_ = arg2;
                    cVar1 = this_00->IsCreated();
                    if (cVar1) {
                        (*(void (*)(...))this_00->field_0[2])(this_00);
                    }
                    this_03 = this_00;
                    this_00->Create(*local_78, nullptr, 0);
                    lVar6 = this_03->Instance();
                    (*(void (*)(...))this_00->field_0[3])(this_00, lVar6 + 80, 0);
                }
                this_00 = (Texture*)&this_00[1].field_56;
            } while (this_00 != pTVar4);
        }
        if (*(char*)&((OSRenderCore_RenderThread_UI*)(local_78._64_8_ + 1580248))->field_0 != '\0') {
            iVar2 = render::GetFormatByteCount(29);
            this_01 = (BufferInterface*)std::array<render::PixelUnpackBuffer, 2ul>::begin();
            pBVar7 = (BufferInterface*)std::array<render::PixelUnpackBuffer, 2ul>::end();
            if (this_01 != pBVar7) {
                arg1_00 = arg2 * arg1 * iVar2;
                do {
                    cVar1 = this_01->IsCreated();
                    if ((!cVar1) || (uVar3 = this_01->GetAliveCount(), uVar3 != arg1_00)) {
                        cVar1 = this_01->IsCreated();
                        if (cVar1) {
                            this_01->Destroy();
                        }
                        this_01->Create(arg1_00, 1, nullptr);
                    }
                    this_01 = this_01 + 1;
                } while (this_01 != pBVar7);
            }
            this_02 = (vector<eastl::pair<int, int>>*)std::array<eastl::vector<bool>, 2ul>::begin();
            pvVar8 = (vector<eastl::pair<int, int>>*)std::array<eastl::vector<bool>, 2ul>::end();
            for (; this_02 != pvVar8; this_02 = this_02 + 32) {
                this_02->clear();
            }
        }
    }

    // 0x1001bfa60
    void OSRenderCore_RenderThread::SetScreenSize(unsigned int arg1, unsigned int arg2) {
        *((ReturnValue*)(field_32 + (long)(this->_vptr[-3].GetUISize + 8))) = jag::math::Vector2T<int>::Set(arg1, arg2);
    }

    // 0x1001bfaa0
    void OSRenderCore_RenderThread_Common::SetRenderViewRect(int arg1, int arg2, int arg3, int arg4) {

        Rect<int> local_30(arg1, arg2, arg3, arg4);
        if (local_30 != field_24 != '\0') {
            field_116 = field_112 + 2;
        }
        field_24 = local_30;
    }

    // 0x1001bfb00
    void OSRenderCore_RenderThread_UI::SetUIViewRect(int arg1, int arg2, int arg3, int arg4) {
        new (field_8) dash3d::GridRect(arg1, arg2, arg3, arg4);
    }

    // 0x1001bfb10
    void OSRenderCore_RenderThread_JavaStyle::GetNextWriteVB() {
        VertexBuffer* pVVar2;

        auto this_00 = field_4576.GetWrite();
        uint8_t* this_01 = &field_4656;
        if (this_01->size() == 0) {
            pVVar2 = (VertexBuffer*)this_00->push_back();
            pVVar2->Create(2097152, 1, nullptr);
        } else {
            pVVar2 = (VertexBuffer*)this_01->back();
            this_00->push_back(*pVVar2);
            this_01->pop_back();
        }
        this_00->back();
    }

    // 0x1001bfd20
    void OSRenderCore_RenderThread_JavaStyle::UploadVertexBuffer(bool arg1) {
        uint8_t* this_00;
        VBOMapper* this_01;
        vector<eastl::pair<int, int>>* this_02;
        OSRenderCore_RenderThread_JavaStyle* pOVar1;
        char cVar2;
        bool cVar3;
        unsigned int uVar4;
        pair<int, Model>* ppVar8;
        pair<int, Model>* ppVar9;
        VertexBuffer* pVVar11;
        VertexBuffer* pVVar12;
        TriangleVertexData* triangleVertexData;
        uint64_t uVar13;
        long lVar14;
        VertexBufferSection* pVVar15;
        unsigned int uVar16;
        uint32_t uVar17;
        unsigned long uVar18;
        uint64_t in_register_00000031;
        unsigned int uVar19;
        hashtable<int, eastl::pair<int const, Model>,
                  eastl::fixed_hashtable_allocator<32770ul, 432ul, 32768ul, 8ul, 0ul, true>,
                  eastl::use_first<eastl::pair<int const, Model>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            phVar20;
        uint8_t local_108[64];
        RoundRobin<eastl::vector<render::VertexBuffer>, 2ul>* local_c8;
        uint64_t local_c0;
        VBOMapper* local_b8;
        RenderableOutput local_b0;
        VertexBuffer* local_70;
        vector<eastl::pair<int, int>>* local_68;
        unsigned long local_60;
        uint32_t local_3c;
        uint32_t local_38;

        unsigned int local_34 = (unsigned int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1);
        OSRenderCore_RenderThread_JavaStyle* local_50 = this;
        fixed_hash_map<int, Model, _32768ul, _32769ul, true, eastl::hash<int>, eastl::equal_to<int>, false>* local_58 =
            (fixed_hash_map<int, Model, _32768ul, _32769ul, true, eastl::hash<int>, eastl::equal_to<int>,
                            false>*)((OSRenderCore_RenderThread_Common*)(field_16 + *(long*)((long)field_0 - 24) - 16))
                ->GetRenderStateNXT();
        if (*(int*)(local_58 + 32) != 0) {
            LogAssert("nxtRenderState.m_zoom == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "OSRenderCore.cpp",
                      813, nullptr);
        }
        Layout* pLVar10 = (Layout*)(local_58 + 17432696);
        auto puVar6 = pLVar10->HeapBeginPtr();
        auto puVar7 = pLVar10->end();
        hashtable<int, eastl::pair<int const, Model>,
                  eastl::fixed_hashtable_allocator<32770ul, 432ul, 32768ul, 8ul, 0ul, true>,
                  eastl::use_first<eastl::pair<int const, Model>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            local_48 = (hashtable<int, eastl::pair<int const, Model>,
                                  eastl::fixed_hashtable_allocator<32770ul, 432ul, 32768ul, 8ul, 0ul, true>,
                                  eastl::use_first<eastl::pair<int const, Model>>, eastl::equal_to<int>,
                                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                  eastl::prime_rehash_policy, false, true, true>*)&local_50->field_8592;
        if (puVar6 != puVar7) {
            do {
                local_b0._0_4_ = *puVar6;
                local_48->erase(local_b0);
                puVar6 = puVar6 + 1;
            } while (puVar6 != puVar7);
        }
        pLVar10->reset_lose_memory();
        if ((char)local_34 == '\0') {
            pLVar10 = (Layout*)(local_58 + 3539024);
            ppVar8 = (pair<int, Model>*)pLVar10->HeapBeginPtr();
            ppVar9 = (pair<int, Model>*)pLVar10->end();
            if (ppVar8 != ppVar9) {
                do {
                    cVar2 = ((ppVar8 + 8))->IsTemporary();
                    if (!cVar2) {
                        local_b0 = local_48->emplace<eastl::pair<int, Model>>(*ppVar8);
                    }
                    ppVar8 = ppVar8 + 424;
                } while (ppVar8 != ppVar9);
            }
            pLVar10->clear();
        } else {
            pLVar10 = (Layout*)(local_58 + 3539024);
            ppVar8 = (pair<int, Model>*)pLVar10->HeapBeginPtr();
            ppVar9 = (pair<int, Model>*)pLVar10->end();
            phVar20 = local_48;
            if (ppVar8 != ppVar9) {
                do {
                    local_b0 = phVar20->emplace<eastl::pair<int, Model>>(*ppVar8);
                    ppVar8 = ppVar8 + 424;
                } while (ppVar8 != ppVar9);
            }
            pLVar10->reset_lose_memory();
        }
        if ((char)local_34 != '\0') {
            local_c8 = (RoundRobin<eastl::vector<render::VertexBuffer>, 2ul>*)&local_50->field_4576;
            pLVar10 = (Layout*)local_c8->GetWrite();
            pVVar11 = (VertexBuffer*)pLVar10->HeapBeginPtr();
            pVVar12 = (VertexBuffer*)pLVar10->end();
            if (pVVar11 != pVVar12) {
                this_00 = &local_50->field_4656;
                do {
                    this_00->push_back(*pVVar11);
                    pVVar11 = pVVar11 + 1;
                } while (pVVar11 != pVVar12);
            }
            pLVar10->clear();
            pOVar1 = local_50;
            *(uint32_t*)(local_50->field_16 + *(long*)((long)local_50->field_0 - 24) + 92) = 0;
            local_3c = 0;
            local_68 = (vector<eastl::pair<int, int>>*)local_50->field_14427080.GetWrite();
            local_68->clear();
            pLVar10 = (Layout*)(local_58 + 40);
            triangleVertexData = (TriangleVertexData*)pLVar10->HeapBeginPtr();
            local_108._56_8_ = pLVar10->end();
            local_b8 = (VBOMapper*)pOVar1->field_16;
            if (triangleVertexData == (TriangleVertexData*)local_108._56_8_) {
                local_b0.field_48._8_8_ = 0;
                uVar4 = 0;
                local_70 = nullptr;
            } else {
                local_60 = 4294967295;
                local_38 = 0;
                local_70 = nullptr;
                local_c0 = 0;
                local_b0.field_48._8_8_ = 0;
                phVar20 = local_48;
                uVar19 = 0;
                uVar16 = 0;
                do {
                    local_b0.Render(triangleVertexData, (unsigned int)local_c0, *((RenderState*)(unsigned long)uVar19),
                                    *local_58, (unsigned int)phVar20);
                    this_01 = local_b8;
                    if (local_b0.field_0 == '\x01') {
                        if (local_70 != nullptr) {
                            local_b8->Unmap(*local_70);
                        }
                        pVVar11 = (VertexBuffer*)GetNextWriteVB(local_50);
                        uVar13 = this_01->Map(*pVVar11, 4, 0, 0, 0);
                        local_70 = pVVar11;
                        uVar4 = pVVar11->GetAliveCount();
                        uVar18 = (unsigned long)((int)local_60 + 1);
                        local_3c = 0;
                        lVar14 = ((vector<game::LocationAudioProperties>*)local_c8->GetWrite())->size();
                        phVar20 = local_48;
                        local_60 = uVar18;
                        if (lVar14 - 1U != uVar18) {
                            LogAssert("poolCursor == m_triangleVBs.GetWrite().size() - 1",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "osrendercore/OSRenderCore.cpp",
                                      895, nullptr);
                        }
                        local_b0.field_48._8_8_ = (uint64_t)(local_b0.field_48._8_4_ + uVar19);
                        uVar19 = 0;
                        local_c0 = uVar13;
                        local_34 = uVar4 >> 4;
                        local_108->Render(triangleVertexData, (unsigned int)uVar13, nullptr, *local_58,
                                          (unsigned int)local_48);
                        local_b0 = *local_108;
                        local_38 = 0;
                        uVar4 = 0;
                        if (local_b0.field_0 != '\x01') {
                            if (local_b0.field_0 == '\x05')
                                goto LAB_1001bffb0;
                        LAB_1001c0190:
                            uVar4 = local_b0.GetTotalVertCount() + uVar19;
                            if (local_34 < uVar4) {
                                LogAssert("vertCursor <= maxVertIndex",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "oldscape/osrendercore/OSRenderCore.cpp",
                                          919, nullptr);
                            }
                            cVar2 = local_b0.field_0;
                            if (((char)local_38 == local_b0.field_0) &&
                                (cVar3 = local_3c == *local_b0.field_48, uVar19 = local_b0.field_4, cVar3)) {
                                lVar14 = local_68->back();
                                *(int*)(lVar14 + 8) = *(int*)(lVar14 + 8) + uVar19;
                                phVar20 = local_48;
                            } else {
                                this_02 = local_68;
                                if (local_b0.field_4 != 0) {
                                    if (cVar2 == '\x02') {
                                        pVVar15 = local_68->emplace_back<>();
                                        *(uint32_t*)&pVVar15->field_0 = 0;
                                        *(int*)((long)&pVVar15->field_0 + 4) = (int)local_60;
                                        pVVar15->field_8 = pVVar15->field_8 + local_b0.field_4;
                                        *(uint32_t*)pVVar15->field_44 = local_b0.field_48._0_4_;
                                        local_3c = local_b0.field_48._0_4_;
                                        local_38 = (uint32_t)(((uint64_t)((uint64_t)local_b0.field_48._1_3_) << 8) |
                                                              (uint8_t)2);
                                    } else if ((uint8_t)(cVar2 - 3U) < 2) {
                                        pVVar15 = local_68->emplace_back<>();
                                        *(unsigned int*)&pVVar15->field_0 =
                                            2 - (unsigned int)(local_b0.field_0 == '\x03');
                                        uVar17 = (uint32_t)local_60;
                                        *(uint32_t*)((long)&pVVar15->field_0 + 4) = uVar17;
                                        pVVar15->field_8 = local_b0.field_4;
                                        *(uint32_t*)pVVar15->field_44 = local_b0.field_48._0_4_;
                                        if (local_b0.field_8 != 0) {
                                            pVVar15 = this_02->emplace_back<>();
                                            *(uint32_t*)&pVVar15->field_0 = 4;
                                            *(uint32_t*)((long)&pVVar15->field_0 + 4) = uVar17;
                                            pVVar15->field_8 = local_b0.field_8;
                                        }
                                        phVar20 = local_48;
                                        if (local_b0.field_12 != 0) {
                                            pVVar15 = local_68->emplace_back<>();
                                            *(uint32_t*)&pVVar15->field_0 = 3;
                                            *(int*)((long)&pVVar15->field_0 + 4) = (int)local_60;
                                            pVVar15->field_8 = local_b0.field_12;
                                        }
                                        local_3c = 0;
                                        local_38 = 0;
                                        goto LAB_1001c0014;
                                    }
                                }
                                phVar20 = local_48;
                            }
                        }
                    } else {
                        local_34 = uVar16;
                        if (local_b0.field_0 != '\x05')
                            goto LAB_1001c0190;
                    LAB_1001bffb0:
                        pVVar15 = local_68->emplace_back<>();
                        *(uint32_t*)&pVVar15->field_0 = 5;
                        *pVVar15->field_12 = *local_b0.field_16;
                        *(uint32_t*)pVVar15->field_44 = local_b0.field_48._0_4_;
                        *(int*)((long)&pVVar15->field_0 + 4) = (int)local_60;
                        pVVar15->field_8 = 0;
                        *(uint32_t*)(*(long*)(local_50->field_16 + *(long*)((long)local_50->field_0 - 24) + 72) + 32) =
                            local_b0.field_16._8_4_;
                        local_3c = 0;
                        local_38 = 0;
                        phVar20 = local_48;
                        uVar4 = uVar19;
                    }
                LAB_1001c0014:
                    triangleVertexData = triangleVertexData + 72;
                    uVar19 = uVar4;
                    uVar16 = local_34;
                } while (triangleVertexData != (TriangleVertexData*)local_108._56_8_);
            }
            if (local_70 != nullptr) {
                local_b8->Unmap(*local_70);
            }
            *(unsigned int*)(local_50->field_16 + *(long*)((long)local_50->field_0 - 24) + 92) =
                uVar4 + local_b0.field_48._8_4_;
        }
        *(uint32_t*)(local_58 + 32) = 0;
    }

    // 0x1001c1140
    void OSRenderCore_RenderThread::CreateRenderingResources() {
        int iVar4;
        uint8_t local_e0[80];

        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                  "OSRenderCore.cpp",
                  1040, "CreateRenderingResources called");
        new (local_e0) render::VertexElementDesc(0, "aPosition", 1, false, 0, 0);
        auto local_68 = osrsgraphics::shadersourceprovider::GetCompletedShader(1);
        auto pcVar5 = local_68.c_str();
        GetCompletedHighPrecisionPixelShader(&local_40, 0);
        auto pcVar6 = local_40.c_str();
        field_1583088.CreateFromSourceString(pcVar5, pcVar6, local_e0, 1, '\0');
        local_68 = osrsgraphics::shadersourceprovider::GetCompletedShader(1);
        pcVar5 = (char*)local_68.c_str();
        GetCompletedHighPrecisionPixelShader(&local_40, 8);
        pcVar6 = (char*)local_40.c_str();
        field_1573472.CreateFromSourceString(pcVar5, pcVar6, local_e0, 1, '\0');
        local_68 = osrsgraphics::shadersourceprovider::GetCompletedShader(1);
        pcVar5 = (char*)local_68.c_str();
        GetCompletedHighPrecisionPixelShader(&local_40, 10);
        pcVar6 = (char*)local_40.c_str();
        field_1575328.CreateFromSourceString(pcVar5, pcVar6, local_e0, 1, '\0');
        local_68 = osrsgraphics::shadersourceprovider::GetCompletedShader(1);
        pcVar5 = (char*)local_68.c_str();
        GetCompletedHighPrecisionPixelShader(&local_40, 9);
        pcVar6 = (char*)local_40.c_str();
        field_1577184.CreateFromSourceString(pcVar5, pcVar6, local_e0, 1, '\0');
        VertexBuffer* this_01 = std::array<render::VertexBuffer, 2ul>::begin();
        VertexBuffer* pVVar7 = std::array<render::VertexBuffer, 2ul>::end();
        for (; this_01 != pVVar7; this_01 = this_01 + 1) {
            this_01->Create(786432, 1, nullptr);
        }
        if ((CreateRenderingResources()::quadVertices == '\0') &&
            (iVar4 = ___cxa_guard_acquire(&CreateRenderingResources()::quadVertices), iVar4 != 0)) {
            new ((Point<float>*)&CreateRenderingResources()::quadVertices) jag::math::Point(0.0, 1.0);
            new (&DAT_104229188) jag::math::Point(1.0, 1.0);
            new (&DAT_104229190) jag::math::Point(0.0, 0.0);
            new (&DAT_104229198) jag::math::Point(1.0, 0.0);
            ___cxa_guard_release(&CreateRenderingResources()::quadVertices);
        }
        field_1583008.Create(32, 0, &CreateRenderingResources()::quadVertices);
        new (local_e0) render::VertexElementDesc(0, "aPosition_Atlas", 16, false, 0, 0);
        new ((local_e0 + 40)) render::VertexElementDesc(0, "aColour", 18, true, 10, 0);
        VertexElementDesc local_90(0, "aTextureUV", 14, false, 5, 0);
        local_68 = osrsgraphics::shadersourceprovider::GetCompletedShader(5);
        pcVar5 = (char*)local_68.c_str();
        unsigned long uVar10 = 4;
        GetCompletedHighPrecisionPixelShader(&local_40, 4);
        pcVar6 = (char*)local_40.c_str();
        VertexElementDesc* pVVar8 = (VertexElementDesc*)(*local_e0)[uVar10];
        field_1585248.CreateFromSourceString(pcVar5, pcVar6, pVVar8, 3, '\0');
        new (local_e0) render::VertexElementDesc(0, "aPosition_Atlas", 16, false, 0, 0);
        new ((local_e0 + 40)) render::VertexElementDesc(0, "aColour", 18, false, 10, 0);
        local_90 = render::VertexElementDesc(0, "aTextureUV", 14, false, 5, 0);
        local_68 = osrsgraphics::shadersourceprovider::GetCompletedShader(3);
        pcVar5 = (char*)local_68.c_str();
        uVar10 = 2;
        GetCompletedHighPrecisionPixelShader(&local_40, 2);
        pcVar6 = (char*)local_40.c_str();
        pVVar8 = (VertexElementDesc*)(*local_e0)[uVar10];
        field_1587104.CreateFromSourceString(pcVar5, pcVar6, pVVar8, 3, '\0');
        new (local_e0) render::Texture::Desc();
        local_e0._0_4_ = 2048;
        local_e0._4_4_ = 2048;
        local_e0._12_4_ = 29;
        local_e0._24_4_ = 1;
        local_e0[32] = 0;
        render::ResourceDataT local_40(nullptr, 0, 0, false);
        local_68 = eastl::vector<unsigned int>();
        unsigned int local_44 = 4294967295;
        local_68.resize(4194304, local_44);
        local_40[0] = (ReturnValue)local_68.HeapBeginPtr();
        iVar4 = render::GetFormatByteCount(local_e0._12_4_);
        uint8_t* puVar1 = &field_1582496;
        Singleton<render::BuiltinStates>* pSVar11 = (Singleton<render::BuiltinStates>*)puVar1;
        puVar1->Create(*local_e0, &local_40, iVar4 << 22);
        long lVar9 = pSVar11->Instance();
        puVar1->SetSamplerState(*((lVar9 + 80)), false);
        new (local_e0) render::Texture::Desc();
        local_e0._0_4_ = 128;
        local_e0._4_4_ = 512;
        local_e0._12_4_ = 29;
        local_e0._24_4_ = 1;
        local_e0[32] = 0;
        local_40 = render::ResourceDataT(nullptr, 0, 0, false);
        local_68 = eastl::vector<unsigned int>();
        local_44 = 0;
        local_68.resize((unsigned long)(unsigned int)(local_e0._4_4_ * local_e0._0_4_), local_44);
        local_40[0] = (ReturnValue)local_68.HeapBeginPtr();
        uint32_t uVar2 = local_e0._0_4_;
        uint32_t uVar3 = local_e0._4_4_;
        iVar4 = render::GetFormatByteCount(local_e0._12_4_);
        puVar1 = &field_1581984;
        pSVar11 = (Singleton<render::BuiltinStates>*)puVar1;
        puVar1->Create(*local_e0, &local_40, uVar3 * uVar2 * iVar4);
        lVar9 = pSVar11->Instance();
        puVar1->SetSamplerState(*((lVar9 + 80)), false);
        field_1580368.SetupDepthStencils(false);
        (*this->_vptr[1].GetUISize)((unsigned int*)this, (unsigned int*)1);
        ((DebugUIManager*)Instance())->CreateRenderingResources();
    }

    // 0x1001c1a60
    void OSRenderCore_RenderThread_JavaStyle::SetupDepthStencils(bool arg1) {
        Desc local_58;

        uint8_t* this_00 = &field_14439464;
        long lVar1 = this_00->second();
        if ((*(int*)(lVar1 + 12) != 513) == arg1) {
            if (arg1) {
                local_58 = render::DepthStencilState::Desc();
                local_58.SetToDefault();
                this_00->Create(local_58);
                local_58 = render::DepthStencilState::Desc();
                local_58.SetToDefault();
                local_58.field_16 = '\x01';
                local_58.field_18 = -1;
                local_58._19_1_ = 1;
                local_58._28_8_ = 2229088034305;
                field_14439524.Create(local_58);
                local_58 = render::DepthStencilState::Desc();
                local_58.field_2 = '\0';
            } else {
                local_58 = render::DepthStencilState::Desc();
                local_58.SetToDefault();
                local_58.field_1 = '\x01';
                local_58.field_2 = '\0';
                local_58.field_12 = 519;
                this_00->Create(local_58);
                local_58 = render::DepthStencilState::Desc();
                local_58.field_1 = '\x01';
                local_58.field_2 = '\0';
                local_58.field_12 = 519;
                local_58.field_16 = '\x01';
                local_58.field_18 = -1;
                local_58._19_1_ = 1;
                local_58._28_8_ = 2229088034305;
                field_14439524.Create(local_58);
                local_58 = render::DepthStencilState::Desc();
                local_58.field_1 = '\x01';
                local_58.field_2 = '\0';
                local_58.field_12 = 519;
            }
            local_58.field_16 = '\x01';
            local_58.field_17 = -1;
            local_58._32_4_ = 517;
            local_58._19_1_ = 1;
            field_14439704.Create(local_58);
            local_58 = render::DepthStencilState::Desc();
            local_58.field_1 = '\x01';
            local_58.field_2 = '\0';
            local_58.field_12 = 519;
            local_58.field_16 = '\x01';
            local_58.field_17 = -1;
            local_58._32_4_ = 514;
            local_58._19_1_ = 1;
            field_14439644.Create(local_58);
            local_58 = render::DepthStencilState::Desc();
            local_58.field_1 = '\x01';
            local_58.field_2 = '\0';
            local_58.field_12 = 519;
            local_58.field_16 = '\x01';
            local_58.field_18 = -1;
            local_58._19_1_ = 1;
            local_58._32_4_ = 512;
            local_58._20_4_ = 7681;
            field_14439584.Create(local_58);
        }
    }

    // 0x1001c1c40
    void OSRenderCore_RenderThread::DestroyRenderingResources() {
        VertexBuffer* pVVar2;
        VertexBuffer* pVVar3;

        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                  "OSRenderCore.cpp",
                  1177, "DestroyRenderingResources called");
        (*this->_vptr[1].GetUISize)((unsigned int*)this, nullptr);
        field_1573472.Destroy();
        field_1575328.Destroy();
        field_1577184.Destroy();
        vector<render::VertexBuffer>* this_02 =
            (vector<render::VertexBuffer>*)std::array<eastl::vector<render::VertexBuffer>, 2ul>::begin();
        vector<render::VertexBuffer>* pvVar1 =
            (vector<render::VertexBuffer>*)std::array<eastl::vector<render::VertexBuffer>, 2ul>::end();
        for (; this_02 != pvVar1; this_02 = this_02 + 32) {
            pVVar2 = (VertexBuffer*)this_02->HeapBeginPtr();
            pVVar3 = (VertexBuffer*)this_02->end();
            for (; pVVar2 != pVVar3; pVVar2 = pVVar2 + 1) {
                pVVar2->Destroy();
            }
            this_02->clear();
        }
        uint8_t* this_00 = &field_1585024;
        pVVar2 = (VertexBuffer*)this_00->HeapBeginPtr();
        pVVar3 = (VertexBuffer*)this_00->end();
        for (; pVVar2 != pVVar3; pVVar2 = pVVar2 + 1) {
            pVVar2->Destroy();
        }
        this_00->clear();
        field_1585056.Destroy();
        pVVar2 = std::array<render::VertexBuffer, 2ul>::begin();
        pVVar3 = std::array<render::VertexBuffer, 2ul>::end();
        for (; pVVar2 != pVVar3; pVVar2 = pVVar2 + 1) {
            pVVar2->Destroy();
        }
        field_1573272.Destroy();
        field_1585248.Destroy();
        field_1587104.Destroy();
        field_1583008.Destroy();
        field_1583088.Destroy();
        field_1582496.Destroy();
        field_1581984.Destroy();
        render::RenderTargets::SafeReset(*((field_1580384 + 32)));
        ((field_1580384 + 48))->Destroy();
        field_1580944.Destroy();
        render::RenderTargets::SafeReset(field_1581456);
        field_1581472.Destroy();
        long* plVar4 = (long*)std::array<render::Texture2D, 2ul>::begin();
        long* plVar5 = (long*)std::array<render::Texture2D, 2ul>::end();
        for (; plVar4 != plVar5; plVar4 = plVar4 + 64) {
            (**(void (**)(...))(*plVar4 + 16))(plVar4);
        }
        PixelUnpackBuffer* this_03 = (PixelUnpackBuffer*)std::array<render::PixelUnpackBuffer, 2ul>::begin();
        PixelUnpackBuffer* pPVar6 = (PixelUnpackBuffer*)std::array<render::PixelUnpackBuffer, 2ul>::end();
        for (; this_03 != pPVar6; this_03 = this_03 + 1) {
            this_03->Destroy();
        }
        DestroyRSeven();
        auto this_04 = Instance();
        this_04->UnregisterInputHandler();
        this_04->Instance();
        this_04->Destroy();
    }

    // 0x1001c3640
    void OSRenderCore_AudioThread::WriteAudioSamples(hal::audio::AudioBuffer& audioBuffer) {
        uint8_t uVar2;
        shared_ptr<hal::audio::AudioRenderer>* this_02;
        AudioBuss* this_05;
        AudioBuffer* this_06;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        unsigned int arg3;
        unsigned int uVar4;
        unsigned int local_34;

        auto pOVar3 = OSRenderCore_AnyThread::Instance();
        Layout* this_00 = (Layout*)(*(void (*)(...))*pOVar3->field_0)(pOVar3);
        bool cVar1 = (this_00->SSOBeginPtr())->operator_cast_to_bool();
        if (cVar1) {
            this_02 = (shared_ptr<hal::audio::AudioRenderer>*)this_00->SSOBeginPtr();
            this_05 = (((AudioRenderer*)(*this_02).operator->())->GetMixer())->GetMasterBuss();
            this_06 = (AudioBuffer*)this_05->GetBuffer();
            local_34 = 0;
            uVar2 = this_06->NumberOfChannels();
            if ((int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2) != 0) {
                uVar4 = 0;
                do {
                    cVar1 = (audioBuffer._vptr->HasChannel)((unsigned int)audioBuffer);
                    arg3 = 0;
                    if (cVar1) {
                        arg3 = uVar4;
                    }
                    hal::audio::AudioBuffer::WriteSamples(*this_06, (unsigned int)audioBuffer, arg3,
                                                          *((unsigned int*)(unsigned long)uVar4), 0,
                                                          (uint8_t)(&local_34), 1.0, 0.0);
                    uVar4 = uVar4 + 1;
                    uVar2 = this_06->NumberOfChannels();
                } while (uVar4 < (unsigned int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2));
            }
            this_06->WroteSamples(local_34);
            uVar2 = (audioBuffer._vptr->GetNumberSamplesCanBeRead)((unsigned int)audioBuffer);
            if ((unsigned int)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar2) != 0) {
                LogAssert("buffer.GetNumberSamplesCanBeRead(0) == numSamplesRead",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                          "OSRenderCore.cpp",
                          1855, nullptr);
            }
        }
    }

    // 0x1001c3800
    void OSRenderCore_Impl::LockAudio() {
        std::mutex::lock();
    }

    // 0x1001c3820
    void OSRenderCore_Impl::UnlockAudio() {
        std::mutex::unlock();
    }

    // 0x1001c3840
    unsigned int OSRenderCore_AudioThread::GetAudioBufferSampleSize() {
        shared_ptr<hal::audio::AudioRenderer>* psVar3;
        long lVar5;

        auto pOVar2 = OSRenderCore_AnyThread::Instance();
        Layout* layout = (Layout*)(*(void (*)(...))*pOVar2->field_0)(pOVar2);
        bool cVar1 = (layout->SSOBeginPtr())->operator_cast_to_bool();
        unsigned int uVar6 = 0;
        if (cVar1) {
            psVar3 = (shared_ptr<hal::audio::AudioRenderer>*)layout->SSOBeginPtr();
            if (((AudioRenderer*)(*psVar3).operator->())->GetMixer() != nullptr) {
                psVar3 = (shared_ptr<hal::audio::AudioRenderer>*)layout->SSOBeginPtr();
                lVar5 = ((NXTPixToolkit*)(*psVar3).operator->())->GetScreen();
                uVar6 = *(unsigned int*)(lVar5 + 8) >> 1;
            }
        }
        return uVar6;
    }

    // 0x1001c38b0
    void OSRenderCore_AudioThread::GetNumberSamplesInAudioBuffer() {
        shared_ptr<hal::audio::AudioRenderer>* psVar4;
        AudioRenderer* pAVar5;
        AudioMixer* pAVar6;
        AudioBuss* this_01;
        long* plVar7;

        auto pOVar3 = OSRenderCore_AnyThread::Instance();
        Layout* layout = (Layout*)(*(void (*)(...))*pOVar3->field_0)(pOVar3);
        bool cVar1 = (layout->SSOBeginPtr())->operator_cast_to_bool();
        uint32_t uVar2 = 0;
        if (cVar1) {
            psVar4 = (shared_ptr<hal::audio::AudioRenderer>*)layout->SSOBeginPtr();
            pAVar5 = (AudioRenderer*)(*psVar4).operator->();
            pAVar6 = pAVar5->GetMixer();
            if (pAVar6 != nullptr) {
                psVar4 = (shared_ptr<hal::audio::AudioRenderer>*)layout->SSOBeginPtr();
                pAVar5 = (AudioRenderer*)(*psVar4).operator->();
                pAVar6 = pAVar5->GetMixer();
                this_01 = pAVar6->GetMasterBuss();
                plVar7 = (long*)this_01->GetBuffer();
                uVar2 = (**(void (**)(...))(*plVar7 + 16))(plVar7, 0);
            }
        }
        return uVar2;
    }

    // 0x1001c3940
    void OSRenderCore_Impl::ResumeAudio() {
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        shared_ptr<hal::audio::AudioRenderer>* this_01;
        long* plVar3;

        uint8_t uVar1 = GetAudioAPI();
        shared_ptr* this_00 = (shared_ptr*)((Layout*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->SSOBeginPtr();
        if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
            uVar1 = GetAudioAPI();
            this_01 =
                (shared_ptr<hal::audio::AudioRenderer>*)((Layout*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1))
                    ->SSOBeginPtr();
            plVar3 = (long*)(*this_01).operator->();
            (**(void (**)(...))(*plVar3 + 40))(plVar3);
        }
    }

    // 0x1001c3990
    void OSRenderCore_RenderThread_RSeven::CheckRebuild() {
        uint8_t* this_00;
        RT7Core* pRVar3;
        MaterialManager* pMVar4;

        long lVar2 =
            ((OSRenderCore_RenderThread_Common*)(field_32 + *(long*)((long)field_0 - 24) - 32))->GetRenderStateNXT();
        MapRebuildResults* mapRebuildResults = *(MapRebuildResults**)(lVar2 + 17563840);
        if (mapRebuildResults != nullptr) {
            lVar2 = ((OSRenderCore_RenderThread_Common*)(field_32 + *(long*)((long)field_0 - 24) - 32))
                        ->GetRenderStateNXT();
            if (*(int*)(lVar2 + 17563832) == 1) {
                this_00 = &field_8;
                pRVar3 = (RT7Core*)(*this_00).operator->();
                pMVar4 = pRVar3->GetMaterialManager();
                if (pMVar4->MaterialsReady()) {
                    tdp.HandleRebuild(*mapRebuildResults);
                    pRVar3 = (RT7Core*)**this_00;
                    rseven::MapRebuildHandler_RenderThread::HandleRebuild(*mapRebuildResults, *pRVar3);
                    ((Scene*)field_16.operator->())->HandleRebuild(*mapRebuildResults);
                }
                pRVar3 = (RT7Core*)(*this_00).operator->();
                pMVar4 = pRVar3->GetMaterialManager();
                if (!(pMVar4->MaterialsReady())) {
                    LogAssert("m_rt7Core->GetMaterialManager().MaterialsReady()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                              "osrendercore/OSRenderCore.cpp",
                              1916, nullptr);
                }
            }
            rseven::MapRebuildHandler::DeleteRebuildResults(mapRebuildResults);
            lVar2 = ((OSRenderCore_RenderThread_Common*)(field_32 + *(long*)((long)field_0 - 24) - 32))
                        ->GetRenderStateNXT();
            *(uint64_t*)(lVar2 + 17563840) = 0;
        }
    }

} // namespace jag::oldscape

namespace jag::osrsgraphics::shadersourceprovider {
    // 0x1001c1890
    auto GetCompletedShader(ShaderResource shaderResource) {
        auto result;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_40;

        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_70;
        auto pcVar2 = GetResourceFilename(shaderResource);
        pcVar2 = (anonymous namespace)::ConvertEncodedResourceFilename<
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_70, pcVar2);
        local_40.basic_string<decltype(nullptr)>(pcVar2);
        long lVar3 = local_40.size();
        auto local_58 = local_40.substr(lVar3 - 3, 18446744073709551615);
        bool bVar1 = &local_58 == ".fs";
        ShaderType shaderType = 35632;
        if (!bVar1) {
            lVar3 = local_40.size();
            local_58 = local_40.substr(lVar3 - 3, 18446744073709551615);
            bVar1 = &local_58 == ".vs";
            shaderType = 4294967295;
            if (bVar1) {
                shaderType = 35633;
            }
        }
        GetCompletedShader(&result, shaderResource, shaderType);
        return result;
    }

} // namespace jag::osrsgraphics::shadersourceprovider
