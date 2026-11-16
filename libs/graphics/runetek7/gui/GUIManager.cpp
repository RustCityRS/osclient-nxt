// libs/graphics/runetek7/gui/GUIManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "GUIManager.h"

namespace jag::graphics {
    // 0x100f44330, 16 bytes, __data
    GUIManager::m_enableRendering = {1, 0, 0, 0};

    // 0x103bc0468, 32 bytes, __common; set at startup by ___cxx_global_var_init.91
    eastl::vector<int, eastl::allocator> GUIManager::m_quadIndices;

    // 0x103bc0488, 1 bytes, __common; zero-initialised
    GUIManager::m_skipTiledElements;

    // 0x103bc0489, 1 bytes, __common; zero-initialised
    GUIManager::m_skipRotatedElements;

    // 0x103bc048a, 6 bytes, __common; zero-initialised
    GUIManager::m_skipLineElements;

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    GUIManager::GetProjectionMode() const;

    // 0x1000fa830: the linker folded this into oldscape::graphics::NXTPixScreen::GetWidth() const, which has identical code
    GUIManager::GetLastViewportWidth() const;

    // 0x1000fa840: the linker folded this into oldscape::graphics::NXTPixScreen::GetHeight() const, which has identical code
    GUIManager::GetLastViewportHeight() const;

    // 0x1008e5070, 48 bytes, placed by class name and debug map
    // GUIManager::AddTexturedRectangle(int, int, int, int, unsigned int, float, float, float, float, render::Texture const*, GUIManager::BlendMode)
    void GUIManager::AddTexturedRectangle() {
        AddElementInner();
    }

    // 0x1008e5710, 32 bytes, placed by class name and debug map
    // GUIManager::AddHorizontalLine(int, int, int, int, unsigned int, GUIManager::BlendMode)
    void GUIManager::AddHorizontalLine() {
        AddColouredRectangle();
    }

    // 0x1008eac50, 352 bytes, base-object constructor, placed by class name
    // GUIManager::GUIManager()
    void GUIManager::GUIManager() {
        vector* this_00;

        field_0 = (RT7Core*)0;
        field_8 = 1;
        new (&field_16) EffectList();
        field_32 = 4294967295;
        field_36 = 4294967295;
        new (&field_40) eastl::stack<render::DrawCallState, eastl::vector<render::DrawCallState, eastl::allocator>>();
        field_72 = 0;
        field_76 = 2;
        field_80 = 0;
        field_84 = 0;
        field_88 = (Mixer*)0;
        *(undefined1(*)[16])((long)&field_88 + 1) = (undefined1[16])0;
        *(undefined8*)&field_108 = 4575657221408423937;
        new (field_120) internal::VertexSetupRingArray<GUIManagerVertexBase<short>>();
        new (field_632) internal::VertexSetupRingArray<GUIManagerVertexBase<float>>();
        new (field_1144) internal::VertexSetupRingArray<GUIManagerLineVertex>();
        new (field_1656) internal::VertexSetupDynamic();
        new (&field_2200) eastl::vector<float, eastl::allocator>();
        m_projectionOverride = 4294967295;
        field_2236 = 4294967295;
        field_2240 = 4294967295;
        field_2244 = 4294967295;
        field_2248 = false;
        field_2252 = 0;
        field_2256 = 0;
        eastl::vector<float, eastl::allocator>::resize((ulong)&field_2200);
        this_00 = (&field_40, (type*)8)->SSOBeginPtr();
        this_00->reserve(8);
    }

    // 0x1008eaef0, 16 bytes, complete-object constructor, placed by class name
    // GUIManager::GUIManager(): jumps straight to the base-object constructor

    // 0x1008eaf00, 176 bytes, base-object destructor, placed by class name
    // GUIManager::~GUIManager()
    void GUIManager::~GUIManager() {
        Destroy(this);
        (&field_2200)->~vector();
        field_1656->~VertexSetupDynamic();
        field_1144->~VertexSetupRingArray();
        field_632->~VertexSetupRingArray();
        field_120->~VertexSetupRingArray();
        (&field_40)->~stack();
    }

    // 0x1008eafb0, 64 bytes, placed by class name
    // GUIManager::Destroy()
    void GUIManager::Destroy() {
        (&field_16, 60)->Remove();
        field_88 = (Mixer*)0;
        field_96 = (Texture*)0;
        DestroyRenderingResources(this);
        field_32 = 4294967295;
        field_36 = 4294967295;
        ResetBatchState(this);
    }

    // 0x1008eaff0, 16 bytes, complete-object destructor, placed by class name
    // GUIManager::~GUIManager(): jumps straight to the base-object destructor

    // 0x1008eb000, 96 bytes, placed by class name
    // GUIManager::Initialise(RT7Core*)
    undefined1 GUIManager::Initialise(RT7Core* param_1) {
        undefined1* puVar1;

        field_0 = param_1;
        CreateRenderingResources(this);
        puVar1 = &field_16;
        puVar1->Add(60);
        puVar1->Add(70);
        puVar1->Add(71);
        puVar1->Add(81);
        puVar1->Add(80);
        return 1;
    }

    // 0x1008eb060, 1344 bytes, placed by class name
    // GUIManager::CreateRenderingResources()
    ulong GUIManager::CreateRenderingResources() {
        uint uVar1;
        int iVar2;
        ulong uVar3;
        long lVar4;
        undefined8 uVar5;
        byte bVar6;
        ShaderProgramVariable local_2e0;
        ShaderProgramVariable local_2b8;
        ShaderProgramVariable local_290;
        ShaderProgramVariable local_268;
        ShaderProgramVariable local_240;
        ShaderProgramVariable local_218;
        ShaderProgramVariable local_1f0;
        ShaderProgramVariable local_1c8;
        ShaderProgramVariable local_1a0;
        ShaderProgramVariable local_178;
        ShaderProgramVariable local_150;
        ShaderProgramVariable local_128;
        ShaderProgramVariable local_100;
        ShaderProgramVariable local_d8;
        ShaderProgramVariable local_b0;
        ShaderProgramVariable local_88;
        ShaderProgramVariable local_60;
        AutoSingleton<ShaderThreadPoolSingleton> local_38[2];
        byte local_36;
        byte local_35;
        byte local_34;
        byte local_33;
        byte local_32;
        byte local_31;

        local_38->~AutoSingleton("GUI_Manager");
        uVar1 = graphics::operator*((graphics*)213);
        local_100.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)235);
        local_d8.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)237);
        local_b0.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)239);
        local_88.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)240);
        local_60.GetVertexElementDesc(uVar1);
        uVar3 = local_100.data();
        local_36 = render::VertexDeclaration::Create((VertexElementDesc*)&field_648, uVar3, (void*)5, 0);
        iVar2 = (&field_648, 0)->GetVertexStride();
        if (iVar2 != 36) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_vertexPreciseTriangle.m_vertexDeclaration.GetVertexStride() == sizeof(GUIManagerVertexPrecise)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                "GUIManager.cpp",
                1835, (char*)0);
        }
        uVar1 = graphics::operator*((graphics*)208);
        local_2e0.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)235);
        local_2b8.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)237);
        local_290.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)239);
        local_268.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)240);
        local_240.GetVertexElementDesc(uVar1);
        uVar3 = local_2e0.data();
        local_35 = render::VertexDeclaration::Create((VertexElementDesc*)&field_136, uVar3, (void*)5, 0);
        iVar2 = (&field_136, 0)->GetVertexStride();
        if (iVar2 != 32) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexTriangle.m_vertexDeclaration.GetVertexStride() == sizeof(GUIManagerVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1853, (char*)0);
        }
        uVar1 = graphics::operator*((graphics*)208);
        local_218.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)235);
        local_1f0.GetVertexElementDesc(uVar1);
        uVar3 = local_218.data();
        local_34 = render::VertexDeclaration::Create((VertexElementDesc*)&field_1160, uVar3, (void*)2, 0);
        iVar2 = (&field_1160, 0)->GetVertexStride();
        if (iVar2 != 8) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexLine.m_vertexDeclaration.GetVertexStride() == sizeof(GUIManagerLineVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1865, (char*)0);
        }
        uVar1 = graphics::operator*((graphics*)208);
        local_1c8.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)235);
        local_1a0.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)237);
        local_178.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)239);
        local_150.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)240);
        local_128.GetVertexElementDesc(uVar1);
        uVar3 = local_1c8.data();
        local_33 = render::VertexDeclaration::Create((VertexElementDesc*)&field_1672, uVar3, (void*)5, 0);
        iVar2 = (&field_1672, 0)->GetVertexStride();
        if (iVar2 != 32) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexDynamic.m_vertexDeclaration.GetVertexStride() == sizeof(GUIManagerVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1883, (char*)0);
        }
        (&field_744, 512, 0)->set_max_size();
        (&field_232, 16384, 0)->set_max_size();
        (&field_1256, 32768, 0)->set_max_size();
        (&field_1960, 2048)->reserve();
        new (&local_100) Array<unsigned short, eastl::allocator>();
        graphicutils::CreateQuadListIndices<unsigned short>((Array*)&local_100, 4096);
        lVar4 = local_100.end();
        if (lVar4 != 24576) {
            /* WARNING: Subroutine does not return */
            LogAssert("quadIndexData.size() == (MAX_QUADS * 6)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1895, (char*)0);
        }
        uVar5 = local_100.data();
        local_32 = (&field_352, 49152, 0, uVar5, 5123)->Create();
        uVar5 = local_100.data();
        local_31 = (&field_864, 1536, 0, uVar5, 5123)->Create();
        (&field_2080, 2048)->reserve();
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)field_440, (uint)&field_352);
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)field_952, (uint)&field_864);
        bVar6 = local_36 & local_35 & local_34 & local_33 & local_32 & local_31;
        (field_440, 1)->SetFlags();
        (field_952, 1)->SetFlags();
        (field_1768, 1)->SetFlags();
        (field_1464, 1)->SetFlags();
        ResetBatchState(this);
        local_100.~Array();
        return CONCAT71((int7)((ulong)&local_100 >> 8), bVar6) & 4294967295;
    }

    // 0x1008eb5d0, 96 bytes, placed by class name
    // GUIManager::DestroyRenderingResources()
    void GUIManager::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18[8];

        local_18->~AutoSingleton("GUI_Manager");
        field_120->Destroy();
        field_632->Destroy();
        field_1144->Destroy();
        field_1656->Destroy();
    }

    // 0x1008eb630, 80 bytes, placed by class name
    // GUIManager::ResetBatchState()
    void GUIManager::ResetBatchState() {
        field_80 = 0;
        field_256 = 0;
        field_768 = 0;
        field_1280 = 0;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x1008eb680, 112 bytes, placed by class name
    // GUIManager::SetProjection(ProjectionMode, int, int)
    void GUIManager::SetProjection(int param_2, uint param_3, uint param_4) {
        uint uVar1;
        uint uVar2;

        uVar1 = field_32;
        uVar2 = field_36;
        if (param_2 == 2) {
            field_32 = param_3;
        } else {
            field_32 = field_0->GetInterfaceWidth();
            param_4 = field_0->GetInterfaceHeight();
        }
        field_36 = param_4;
        if (((uVar1 != field_32) || (uVar2 != param_4)) || (field_8 != param_2)) {
            field_8 = param_2;
            UpdateProjection(this, true);
        }
    }

    // 0x1008eb750, 416 bytes, placed by class name
    // GUIManager::UpdateProjection(bool)
    void GUIManager::UpdateProjection(bool param_1) {
        uint uVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        EffectManager* pEVar5;
        SunlightDirectLighting* this_00;
        uint uVar6;
        uint uVar7;
        uint uVar8;
        uint uVar9;
        float fVar10;
        Matrix44T local_78;

        uVar1 = field_32;
        uVar2 = field_36;
        if (field_8 == 1) {
            uVar4 = field_0->GetInterfaceWidth();
            field_32 = uVar4;
            uVar4 = field_0->GetInterfaceHeight();
            field_36 = uVar4;
        }
        if (((param_1) || (uVar1 != field_32)) || (uVar2 != field_36)) {
            uVar1 = field_32;
            uVar2 = field_36;
            uVar4 = field_2240;
            uVar9 = 0;
            uVar6 = uVar2;
            uVar8 = uVar1;
            if ((int)uVar4 < 0) {
                uVar7 = 0;
            } else {
                uVar7 = 0;
                if (field_8 == 1) {
                    fVar10 = (float)(int)uVar1 / (float)(int)uVar2;
                    uVar3 = field_2244;
                    uVar7 = m_projectionOverride;
                    uVar9 = field_2236;
                    if (fVar10 <= (float)(int)uVar4 / (float)(int)uVar3) {
                        uVar6 = (uint)((float)(int)uVar4 / fVar10);
                        uVar9 = uVar9 - (int)(uVar6 - uVar3) / 2;
                        uVar8 = uVar4;
                    } else {
                        uVar8 = (uint)(fVar10 * (float)(int)uVar3);
                        uVar7 = uVar7 - (int)(uVar8 - uVar4) / 2;
                        uVar6 = uVar3;
                    }
                }
            }
            field_2248 =
                (int)uVar2 < (int)(uVar6 + uVar9) || ((int)uVar1 < (int)(uVar8 + uVar7) || (int)(uVar7 | uVar9) < 0);
            new (&local_78) math::Matrix44T<float>();
            math::Matrix44OrthographicLH<float>((float)(int)uVar7, (float)(int)(uVar8 + uVar7),
                                                (float)(int)(field_36 - (uVar6 + uVar9)),
                                                (float)(int)(field_36 - uVar9), 1036831949, 1167867904, &local_78, 0);
            pEVar5 = (EffectManager*)field_0->GetEffectManager();
            this_00 = EffectManager::GetEffect<SunlightDirectLighting>(pEVar5, 80);
            this_00->SetTransforms(&local_78);
        }
    }

    // 0x1008eb8f0, 96 bytes, placed by class name
    // GUIManager::Begin(render::DrawCallState const&)
    void GUIManager::Begin(DrawCallState* param_1) {
        char cVar1;

        Render(this, (SamplerState*)0);
        cVar1 = eastl::internal::function_detail<16, void()>::HaveManager((function_detail<16, void()>*)param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("drawCallState.HasOutputMergerState()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      98, (char*)0);
        }
        (&field_40, param_1)->push();
        field_72 = 1;
    }

    // 0x1008eb950, 2528 bytes, placed by class name
    // GUIManager::Render(render::SamplerState const*)
    void GUIManager::Render(SamplerState* param_1) {
        undefined1* puVar1;
        undefined1* puVar2;
        char cVar3;
        uint uVar4;
        int iVar5;
        long lVar6;
        DrawCallState* pDVar7;
        Layout* this_00;
        RT7Core* this_01;
        ulong uVar8;
        void* pvVar9;
        VertexBuffer* pVVar10;
        ShaderManager* pSVar11;
        shared_ptr* psVar12;
        RenderPipelineState* pRVar13;
        Shader* pSVar14;
        ShaderProgram* pSVar15;
        OutputMergerState* this_02;
        NpcUID* in_RDX;
        Singleton<render::BuiltinStates>* this_03;
        EntityHighlight** ppEVar16;
        bool bVar17;
        undefined1 auVar18[16];
        EffectList in_stack_ffffffffffffff68;
        DrawCallState local_88;
        eastl local_50[8];
        DrawCallState* local_48;
        EffectList* local_40;
        RenderContext* local_38;

        if (field_80 != 0) {
            eastl::destruct<oldscape::highlight::NpcUID*>(local_50, (NpcUID*)"GUIManager::Render", in_RDX);
            UpdateProjection(this, false);
            if ((field_88 == (Mixer*)0) || (field_76 == 3)) {
                puVar1 = &field_16;
                puVar1->Remove(60);
                puVar1->Remove(72);
                puVar1->Remove(73);
            } else {
                puVar1 = &field_16;
                puVar1->Add(60);
                uVar4 = field_88->GetStreamCountLastMix();
                puVar1->Set(70, 1 < uVar4);
                puVar1->Set(72, field_96 != (Texture*)0);
                if (field_96 == (Texture*)0) {
                    bVar17 = false;
                } else {
                    bVar17 = field_104 != '\0';
                }
                puVar1->Set(73, bVar17);
            }
            this_03 = (Singleton<render::BuiltinStates>*)&field_16;
            local_40 = (EffectList*)this_03;
            this_03->Set(71, field_108 == 2);
            lVar6 = this_03->Instance();
            if (field_108 == 2) {
                lVar6 = this_03->Instance();
                ppEVar16 = (EntityHighlight**)(lVar6 + 1904);
            } else if (field_108 == 1) {
                lVar6 = this_03->Instance();
                ppEVar16 = (EntityHighlight**)(lVar6 + 1676);
            } else {
                ppEVar16 = (EntityHighlight**)(lVar6 + 1524);
            }
            local_48 = (DrawCallState*)field_0->GetEffectManager();
            puVar1 = &field_40;
            cVar3 = puVar1->empty();
            if (cVar3 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!m_drawCallStates.empty()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                          "GUIManager.cpp",
                          1594, "Ensure Begin() is called with a valid DrawCallState before Render()");
            }
            pDVar7 = (DrawCallState*)puVar1->top();
            new (&local_88) render::DrawCallState(pDVar7);
            auVar18 = local_88.GetRenderPipelineState();
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                       2>::compressed_pair_imp(auVar18._0_8_, ppEVar16, auVar18._8_8_);
            pDVar7 = &local_88;
            this_00 = (Layout*)pDVar7->GetRenderPipelineState();
            lVar6 = pDVar7->Instance();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(this_00, lVar6 + 1080);
            pDVar7 = &local_88;
            this_01 = (RT7Core*)pDVar7->GetRenderPipelineState();
            lVar6 = pDVar7->Instance();
            this_01->SetRasteriserState((RasteriserState*)(lVar6 + 1308));
            local_38 = (RenderContext*)this_01->GetRenderContext();
            switch (field_76) {
            case 0:
                uVar4 = field_80;
                uVar8 = (&field_744)->end();
                if (uVar8 < uVar4) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_currentBatchSize <= m_vertexPreciseTriangle.m_vertexDataBuffer.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1608, (char*)0);
                }
                if (field_80 * 4 != field_768) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_currentBatchSize * 4 == m_vertexPreciseTriangle.m_vertexDataBufferPos",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1609, (char*)0);
                }
                if (m_enableRendering != '\0') {
                    uVar4 = field_80;
                    pvVar9 = (void*)(&field_744)->data();
                    (&field_776, 0, uVar4 * 144, pvVar9)->Update();
                    pVVar10 = (VertexBuffer*)(&field_776)->CurrentBuffer();
                    (field_952, (VertexDeclaration*)&field_648, pVVar10)->SetVertexStreamData();
                    local_88.SetInputAssemblerState(field_952);
                    puVar2 = field_632;
                    cVar3 = UpdateShader((shared_ptr*)puVar2, local_40);
                    if (cVar3 != '\0') {
                        pSVar11 = (ShaderManager*)field_0->GetShaderManager();
                        in_stack_ffffffffffffff68 = (EffectList)255;
                        psVar12 = (shared_ptr*)pSVar11->GetShader(15, local_48, local_40, &field_648, 0);
                        shared_ptr<Shader>::operator=((shared_ptr<Shader>*)puVar2, psVar12);
                    }
                    pRVar13 = (RenderPipelineState*)local_88.GetRenderPipelineState();
                    pSVar14 = (Shader*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)puVar2);
                    pSVar15 = (ShaderProgram*)pSVar14->GetProgram();
                    pRVar13->SetShaderProgram(pSVar15);
                    shared_ptr<Shader>::operator*((shared_ptr<Shader>*)puVar2);
                    EffectManager::SetShaderConstants(local_48, (RenderContext*)&local_88, (Shader*)local_38,
                                                      in_stack_ffffffffffffff68);
                    if ((field_88 != (Mixer*)0) && (cVar3 = local_40->Contains(60), cVar3 != '\0')) {
                        pSVar14 = (Shader*)shared_ptr<Shader>::operator*((shared_ptr<Shader>*)puVar2);
                        DiffuseMap::SetShaderConstants(&local_88, local_38, pSVar14, (Texture*)field_88, 14, param_1);
                    }
                    local_38->DrawIndexedPrimitives(&local_88, 4, field_80 * 6, 0);
                }
                break;
            case 1:
                uVar4 = field_80;
                puVar2 = &field_2080;
                uVar8 = puVar2->size();
                if (uVar8 != uVar4) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_currentBatchSize == m_vertexDynamic.m_indexDataBuffer.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1639, (char*)0);
                }
                if (m_enableRendering != '\0') {
                    iVar5 = puVar2->size();
                    pvVar9 = (void*)puVar2->HeapBeginPtr();
                    (&field_2112, 0, iVar5 * 2, pvVar9)->Update();
                    iVar5 = (&field_1960)->size();
                    pvVar9 = (void*)(&field_1960)->HeapBeginPtr();
                    (&field_1992, 0, iVar5 << 5, pvVar9)->Update();
                    pVVar10 = (VertexBuffer*)(&field_1992)->CurrentBuffer();
                    puVar2 = field_1768;
                    puVar2->SetVertexStreamData((VertexDeclaration*)&field_1672, pVVar10);
                    uVar4 = (&field_2112)->CurrentBuffer();
                    render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)puVar2, uVar4);
                    local_88.SetInputAssemblerState(puVar2);
                    puVar2 = field_1656;
                    cVar3 = UpdateShader((shared_ptr*)puVar2, local_40);
                    if (cVar3 != '\0') {
                        pSVar11 = (ShaderManager*)field_0->GetShaderManager();
                        in_stack_ffffffffffffff68 = (EffectList)255;
                        psVar12 = (shared_ptr*)pSVar11->GetShader(15, local_48, local_40, &field_1672, 0);
                        shared_ptr<Shader>::operator=((shared_ptr<Shader>*)puVar2, psVar12);
                    }
                    pRVar13 = (RenderPipelineState*)local_88.GetRenderPipelineState();
                    pSVar14 = (Shader*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)puVar2);
                    pSVar15 = (ShaderProgram*)pSVar14->GetProgram();
                    pRVar13->SetShaderProgram(pSVar15);
                    shared_ptr<Shader>::operator*((shared_ptr<Shader>*)puVar2);
                    EffectManager::SetShaderConstants(local_48, (RenderContext*)&local_88, (Shader*)local_38,
                                                      in_stack_ffffffffffffff68);
                    if ((field_88 != (Mixer*)0) && (cVar3 = local_40->Contains(60), cVar3 != '\0')) {
                        pSVar14 = (Shader*)shared_ptr<Shader>::operator*((shared_ptr<Shader>*)puVar2);
                        DiffuseMap::SetShaderConstants(&local_88, local_38, pSVar14, (Texture*)field_88, 14, param_1);
                        if ((field_96 != (Texture*)0) && (cVar3 = local_40->Contains(72), cVar3 != '\0')) {
                            pSVar14 = (Shader*)shared_ptr<Shader>::operator*((shared_ptr<Shader>*)puVar2);
                            DiffuseMap::SetShaderConstantsMask(&local_88, local_38, pSVar14, field_96, 15, param_1);
                        }
                    }
                    local_38->DrawIndexedPrimitives(&local_88, 4, field_80, 0);
                }
                break;
            case 2:
                uVar4 = field_80;
                uVar8 = (&field_232)->end();
                if (uVar8 < uVar4) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_currentBatchSize <= m_vertexTriangle.m_vertexDataBuffer.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1675, (char*)0);
                }
                if (field_80 * 4 != field_256) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_currentBatchSize * 4 == m_vertexTriangle.m_vertexDataBufferPos",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1676, (char*)0);
                }
                if (m_enableRendering != '\0') {
                    uVar4 = field_80;
                    pvVar9 = (void*)(&field_232)->data();
                    (&field_264, 0, uVar4 << 7, pvVar9)->Update();
                    pVVar10 = (VertexBuffer*)(&field_264)->CurrentBuffer();
                    (field_440, (VertexDeclaration*)&field_136, pVVar10)->SetVertexStreamData();
                    local_88.SetInputAssemblerState(field_440);
                    puVar2 = field_120;
                    cVar3 = UpdateShader((shared_ptr*)puVar2, local_40);
                    if (cVar3 != '\0') {
                        pSVar11 = (ShaderManager*)field_0->GetShaderManager();
                        in_stack_ffffffffffffff68 = (EffectList)255;
                        psVar12 = (shared_ptr*)pSVar11->GetShader(15, local_48, local_40, &field_136, 0);
                        shared_ptr<Shader>::operator=((shared_ptr<Shader>*)puVar2, psVar12);
                    }
                    pRVar13 = (RenderPipelineState*)local_88.GetRenderPipelineState();
                    pSVar14 = (Shader*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)puVar2);
                    pSVar15 = (ShaderProgram*)pSVar14->GetProgram();
                    pRVar13->SetShaderProgram(pSVar15);
                    shared_ptr<Shader>::operator*((shared_ptr<Shader>*)puVar2);
                    EffectManager::SetShaderConstants(local_48, (RenderContext*)&local_88, (Shader*)local_38,
                                                      in_stack_ffffffffffffff68);
                    if ((field_88 != (Mixer*)0) && (cVar3 = local_40->Contains(60), cVar3 != '\0')) {
                        pSVar14 = (Shader*)shared_ptr<Shader>::operator*((shared_ptr<Shader>*)puVar2);
                        DiffuseMap::SetShaderConstants(&local_88, local_38, pSVar14, (Texture*)field_88, 14, param_1);
                        if ((field_96 != (Texture*)0) && (cVar3 = local_40->Contains(72), cVar3 != '\0')) {
                            pSVar14 = (Shader*)shared_ptr<Shader>::operator*((shared_ptr<Shader>*)puVar2);
                            DiffuseMap::SetShaderConstantsMask(&local_88, local_38, pSVar14, field_96, 15, param_1);
                        }
                    }
                    local_38->DrawIndexedPrimitives(&local_88, 4, field_80 * 6, 0);
                }
                break;
            case 3:
                uVar4 = field_80;
                uVar8 = (&field_1256)->end();
                if (uVar8 < uVar4) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_currentBatchSize <= m_vertexLine.m_vertexDataBuffer.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1713, (char*)0);
                }
                if (field_80 * 2 != field_1280) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_currentBatchSize * 2 == m_vertexLine.m_vertexDataBufferPos",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1714, (char*)0);
                }
                if (m_enableRendering != '\0') {
                    uVar4 = field_80;
                    pvVar9 = (void*)(&field_1256)->data();
                    (&field_1288, 0, uVar4 << 4, pvVar9)->Update();
                    pVVar10 = (VertexBuffer*)(&field_1288)->CurrentBuffer();
                    (field_1464, (VertexDeclaration*)&field_1160, pVVar10)->SetVertexStreamData();
                    local_88.SetInputAssemblerState(field_1464);
                    puVar2 = field_1144;
                    cVar3 = UpdateShader((shared_ptr*)puVar2, local_40);
                    if (cVar3 != '\0') {
                        pSVar11 = (ShaderManager*)field_0->GetShaderManager();
                        in_stack_ffffffffffffff68 = (EffectList)255;
                        psVar12 = (shared_ptr*)pSVar11->GetShader(16, local_48, local_40, &field_1160, 0);
                        shared_ptr<Shader>::operator=((shared_ptr<Shader>*)puVar2, psVar12);
                    }
                    pRVar13 = (RenderPipelineState*)local_88.GetRenderPipelineState();
                    pSVar14 = (Shader*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)puVar2);
                    pSVar15 = (ShaderProgram*)pSVar14->GetProgram();
                    pRVar13->SetShaderProgram(pSVar15);
                    shared_ptr<Shader>::operator*((shared_ptr<Shader>*)puVar2);
                    EffectManager::SetShaderConstants(local_48, (RenderContext*)&local_88, (Shader*)local_38,
                                                      in_stack_ffffffffffffff68);
                    local_38->DrawPrimitives(&local_88, 1, 0, field_80 * 2);
                }
            }
            local_38->SetInputAssemblerState(0);
            pDVar7 = (DrawCallState*)puVar1->top();
            this_02 = (OutputMergerState*)pDVar7->GetOutputMergerState();
            this_02->SetClearFlags(0);
            field_2252 = field_2252 + 1;
            ResetBatchState(this);
            local_88.~DrawCallState();
        }
    }

    // 0x1008ec340, 96 bytes, placed by class name
    // GUIManager::End()
    void GUIManager::End() {
        char cVar1;

        Render(this, (SamplerState*)0);
        field_72 = 0;
        field_108 = 0;
        cVar1 = (&field_40)->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      112, (char*)0);
        }
        (&field_40)->pop();
    }

    // 0x1008ec4f0, 80 bytes, placed by class name
    // GUIManager::AddColouredRectangle(int, int, int, int, unsigned int, GUIManager::BlendMode)
    void GUIManager::AddColouredRectangle() {
        AddElementInner((GUIManager*)0, 0, 1065353216, 1065353216);
    }

    // 0x1008ec540, 1840 bytes, placed by class name
    // GUIManager::AddElementInner(int, int, int, int, unsigned int, float, float, float, float, render::Texture const*, render::Texture const*, bool, GUIManager::BlendMode, unsigned int, unsigned int)
    void GUIManager::AddElementInner(float param_6, float param_7, float param_8, float param_9, GUIManager* this,
                                     int param_1, int param_2, int param_3, int param_4, undefined4 param_5,
                                     Texture* param_10, Texture* param_11, undefined1 param_12, int param_14,
                                     int param_15, int param_16) {
        int iVar1;
        uint uVar2;
        char cVar4;
        int* piVar5;
        array<short, 2ul>* paVar6;
        undefined2* puVar7;
        short* psVar8;
        float* pfVar9;
        undefined4* puVar10;
        undefined2 uVar11;
        undefined2 uVar12;
        short sVar13;
        short sVar14;
        float fVar15;
        float fVar16;
        undefined1 local_88[16];
        undefined1 local_78[16];
        float local_68;
        float local_64;
        float local_5c;
        Array<GUIManagerVertexBase<short>, eastl::allocator>* local_58;
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        local_68 = param_8;
        local_64 = param_9;
        local_44 = param_6;
        local_40 = param_7;
        cVar4 = (&field_40)->empty();
        if (cVar4 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      760,
                      "Ensure Begin() is called with a valid DrawCallState before submitting GUI elements to draw");
        }
        cVar4 = (field_0, param_1, param_2, param_3, param_4)->ClippingTest();
        if (cVar4 == '\0') {
            return;
        }
        if ((field_84 <= field_80) ||
            (cVar4 = IsStateChangeNeeded(this, &param_14, 2, param_5, param_10, param_11, param_12), cVar4 != '\0')) {
            Render(this, (SamplerState*)0);
            SetBatchMode(this, 2);
            if (param_10 != (Texture*)0) {
                cVar4 = param_10->IsCreated();
                if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("texture->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              778, "GUIManager texture being added that has no native resources");
                }
                field_88 = (Mixer*)param_10;
            }
            field_108 = param_14;
            if ((param_11 != (Texture*)0) && (cVar4 = param_11->IsCreated(), cVar4 == '\0')) {
                /* WARNING: Subroutine does not return */
                LogAssert("!textureMask || textureMask->IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                          "GUIManager.cpp",
                          782, "GUIManager textureMask being added that has no native resources");
            }
            field_96 = param_11;
            field_104 = param_12;
        }
        local_4c = local_44;
        local_34 = local_40;
        if ((param_15 == 1) && (param_16 == 1)) {
            local_38 = local_68;
            local_3c = local_64;
        } else {
            local_38 = local_68 + (local_68 - local_44) * (float)(param_15 - 1);
            local_3c = local_64 + (local_64 - local_40) * (float)(param_16 - 1);
        }
        piVar5 = (int*)field_0->GetPixelBuffer();
        iVar1 = *piVar5;
        if (iVar1 != -1) {
            if (param_3 - param_1 < 1) {
            joined_r0x0001008ec798:
                uVar12 = (undefined2)param_1;
            } else {
                fVar16 = (float)(param_3 - param_1);
                fVar15 = local_38 - local_4c;
                if (!(iVar1 - param_1 == 0 || iVar1 < param_1)) {
                    local_4c = local_4c + ((float)(iVar1 - param_1) * fVar15) / fVar16;
                    param_1 = iVar1;
                }
                uVar12 = (undefined2)param_1;
                iVar1 = piVar5[2];
                if (param_3 <= iVar1)
                    goto joined_r0x0001008ec798;
                local_38 = local_38 - (fVar15 * (float)(param_3 - iVar1)) / fVar16;
                param_3 = iVar1;
            }
            if (0 < param_4 - param_2) {
                uVar11 = (undefined2)param_3;
                fVar16 = (float)(param_4 - param_2);
                fVar15 = local_3c - local_34;
                iVar1 = piVar5[1];
                if (!(iVar1 - param_2 == 0 || iVar1 < param_2)) {
                    local_34 = local_34 + ((float)(iVar1 - param_2) * fVar15) / fVar16;
                    param_2 = iVar1;
                }
                iVar1 = piVar5[3];
                local_58 = (Array<GUIManagerVertexBase<short>, eastl::allocator>*)CONCAT44(local_58._4_4_, param_2);
                if (iVar1 < param_4) {
                    local_3c = local_3c - (fVar15 * (float)(param_4 - iVar1)) / fVar16;
                    param_4 = iVar1;
                }
                goto joined_r0x0001008ec84c;
            }
        }
        uVar11 = (undefined2)param_3;
        uVar12 = (undefined2)param_1;
        local_58 = (Array<GUIManagerVertexBase<short>, eastl::allocator>*)CONCAT44(local_58._4_4_, param_2);
    joined_r0x0001008ec84c:
        if (param_10 == (Texture*)0) {
            local_34 = -65000.0;
            local_4c = -65000.0;
            local_3c = -65000.0;
            local_38 = -65000.0;
        }
        fVar15 = local_68 - local_44;
        uVar2 = field_36;
        if (0.0 <= fVar15) {
            local_88 = ZEXT416((uint)fVar15);
        } else {
            local_88._4_4_ = 2147483648;
            local_88._0_4_ = -fVar15;
            local_88._8_4_ = 2147483648;
            local_88._12_4_ = 2147483648;
            std::swap<float>(&local_44, &local_68);
        }
        fVar15 = local_64 - local_40;
        if (0.0 <= fVar15) {
            local_78 = ZEXT416((uint)fVar15);
        } else {
            local_78._4_4_ = 2147483648;
            local_78._0_4_ = -fVar15;
            local_78._8_4_ = 2147483648;
            local_78._12_4_ = 2147483648;
            std::swap<float>(&local_40, &local_64);
        }
        if (param_15 == 1) {
            local_88._0_8_ = local_88._0_8_ ^ 9223372039002259456;
            local_88._8_4_ = local_88._8_4_ ^ 2147483648;
            local_88._12_4_ = local_88._12_4_ ^ 2147483648;
        }
        sVar14 = (short)uVar2;
        sVar13 = sVar14 - (short)local_58;
        sVar14 = sVar14 - (short)param_4;
        local_58 = (Array<GUIManagerVertexBase<short>, eastl::allocator>*)&field_232;
        if (param_16 == 1) {
            local_78._0_8_ = local_78._0_8_ ^ 9223372039002259456;
            local_78._8_4_ = local_78._8_4_ ^ 2147483648;
            local_78._12_4_ = local_78._12_4_ ^ 2147483648;
        }
        uVar2 = field_256;
        field_256 = uVar2 + 1;
        paVar6 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](local_58,
                                                                                                      (ulong)uVar2);
        local_5c = local_44;
        local_48 = local_40;
        puVar7 = (undefined2*)std::array<short, 2ul>::operator[](paVar6, 0);
        *puVar7 = uVar12;
        psVar8 = (short*)std::array<short, 2ul>::operator[](paVar6, 1);
        *psVar8 = sVar13;
        *(undefined4*)(paVar6 + 4) = param_5;
        ((paVar6 + 8))->Set(local_4c, local_34);
        pfVar9 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 16), 0);
        *pfVar9 = local_5c;
        pfVar9 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 16), 1);
        *pfVar9 = local_48;
        puVar10 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 24), 0);
        *puVar10 = local_88._0_4_;
        puVar10 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 24), 1);
        *puVar10 = local_78._0_4_;
        uVar2 = field_256;
        field_256 = uVar2 + 1;
        paVar6 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](local_58,
                                                                                                      (ulong)uVar2);
        local_5c = local_44;
        local_48 = local_40;
        puVar7 = (undefined2*)std::array<short, 2ul>::operator[](paVar6, 0);
        *puVar7 = uVar11;
        psVar8 = (short*)std::array<short, 2ul>::operator[](paVar6, 1);
        *psVar8 = sVar13;
        *(undefined4*)(paVar6 + 4) = param_5;
        ((paVar6 + 8))->Set(local_38, local_34);
        pfVar9 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 16), 0);
        *pfVar9 = local_5c;
        pfVar9 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 16), 1);
        *pfVar9 = local_48;
        puVar10 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 24), 0);
        *puVar10 = local_88._0_4_;
        puVar10 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 24), 1);
        *puVar10 = local_78._0_4_;
        uVar2 = field_256;
        field_256 = uVar2 + 1;
        paVar6 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](local_58,
                                                                                                      (ulong)uVar2);
        local_48 = local_44;
        local_34 = local_40;
        puVar7 = (undefined2*)std::array<short, 2ul>::operator[](paVar6, 0);
        *puVar7 = uVar11;
        psVar8 = (short*)std::array<short, 2ul>::operator[](paVar6, 1);
        *psVar8 = sVar14;
        *(undefined4*)(paVar6 + 4) = param_5;
        ((paVar6 + 8))->Set(local_38, local_3c);
        pfVar9 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 16), 0);
        *pfVar9 = local_48;
        pfVar9 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 16), 1);
        *pfVar9 = local_34;
        puVar10 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 24), 0);
        *puVar10 = local_88._0_4_;
        puVar10 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 24), 1);
        *puVar10 = local_78._0_4_;
        uVar2 = field_256;
        field_256 = uVar2 + 1;
        paVar6 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](local_58,
                                                                                                      (ulong)uVar2);
        local_34 = local_44;
        local_38 = local_40;
        puVar7 = (undefined2*)std::array<short, 2ul>::operator[](paVar6, 0);
        *puVar7 = uVar12;
        psVar8 = (short*)std::array<short, 2ul>::operator[](paVar6, 1);
        *psVar8 = sVar14;
        *(undefined4*)(paVar6 + 4) = param_5;
        ((paVar6 + 8))->Set(local_4c, local_3c);
        pfVar9 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 16), 0);
        *pfVar9 = local_34;
        pfVar9 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 16), 1);
        *pfVar9 = local_38;
        puVar10 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 24), 0);
        *puVar10 = local_88._0_4_;
        puVar10 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 24), 1);
        *puVar10 = local_78._0_4_;
        field_80 = field_80 + 1;
    }

    // 0x1008ecc70, 80 bytes, placed by class name
    // GUIManager::AddTexturedRectangleMasked(int, int, int, int, unsigned int, float, float, float, float, render::Texture const*, render::Texture const*, bool, GUIManager::BlendMode)
    void GUIManager::AddTexturedRectangleMasked() {
        AddElementInner();
    }

    // 0x1008eccc0, 48 bytes, placed by class name
    // GUIManager::AddColouredTriangleList(eastl::vector<int, eastl::allocator> const&, eastl::vector<int, eastl::allocator> const&, unsigned int, GUIManager::BlendMode, bool)
    void GUIManager::AddColouredTriangleList() {
        AddTriangleListInner((GUIManager*)0, 0);
    }

    // 0x1008eccf0, 1552 bytes, placed by class name
    // GUIManager::AddTriangleListInner(eastl::vector<int, eastl::allocator> const&, eastl::vector<int, eastl::allocator> const&, unsigned int, unsigned int, float, float, render::Texture const*, GUIManager::BlendMode, bool)
    void GUIManager::AddTriangleListInner(undefined4 param_5, float param_6, GUIManager* this,
                                          vector<unsigned int, eastl::allocator>* param_1,
                                          vector<unsigned int, eastl::allocator>* param_2, uint param_3,
                                          undefined4 param_4, Texture* param_7, int param_9, char param_10) {
        undefined1* puVar1;
        undefined4 uVar2;
        bool bVar3;
        undefined8 uVar4;
        Texture* pTVar5;
        GUIManager* this_00;
        vector<unsigned int, eastl::allocator>* pvVar6;
        char cVar7;
        bool bVar8;
        char cVar9;
        uint uVar10;
        int iVar11;
        long lVar12;
        int* piVar13;
        ulong uVar14;
        int* piVar15;
        ulong uVar16;
        array<short, 2ul>* this_01;
        undefined2* puVar17;
        undefined4* puVar18;
        ulong uVar19;
        uint uVar20;
        int iVar21;
        float fVar22;
        undefined1 local_c0[24];
        undefined1 local_a8[16];
        ulong local_98;
        ulong local_90;
        ulong local_78;
        ulong local_70;
        ulong local_68;
        ulong local_60;
        GUIManager* local_58;
        ulong local_48;
        vector<unsigned int, eastl::allocator>* local_40;
        float local_38;
        undefined4 local_34;

        local_34 = param_4;
        lVar12 = eastl::vector<unsigned int, eastl::allocator>::size(param_2);
        if (6148914691236517205 < (ulong)(lVar12 * -6148914691236517205)) {
            /* WARNING: Subroutine does not return */
            LogAssert("indices.size() % 3 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1236, (char*)0);
        }
        local_98 = (ulong)(param_3 & 2);
        if (((param_3 & 2) != 0) && (param_7 == (Texture*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("(triangleListFlags & TRIANGLE_LIST_HAS_UV) ? (texture != nullptr) : true",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1237, (char*)0);
        }
        cVar7 = (&field_40)->empty();
        cVar9 = param_10;
        if (cVar7 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1238,
                      "Ensure Begin() is called with a valid DrawCallState before submitting GUI elements to draw");
        }
        iVar11 = (int)local_98;
        param_3 = param_3 & 1;
        local_90 = (ulong)param_3;
        uVar20 = iVar11 + 2U | param_3;
        local_60 = (ulong)uVar20;
        local_70 = (ulong)(param_3 + 2);
        local_68 = (ulong)(param_3 + 3);
        uVar10 = param_3 + 3;
        if (iVar11 == 0) {
            uVar10 = param_3 + 2;
        }
        local_38 = (float)-(uint)(iVar11 == 0);
        if ((iVar11 != 0) + uVar10 != uVar20) {
            /* WARNING: Subroutine does not return */
            LogAssert("nextOffset == pointElementCount",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1250, (char*)0);
        }
        local_58 = this;
        piVar13 = (int*)field_0->GetPixelBuffer();
        new (local_c0) oldscape::dash3d::GridRect(*piVar13, piVar13[1], piVar13[2] - *piVar13, piVar13[3] - piVar13[1]);
        local_40 = param_2;
        if (cVar9 == '\0') {
            lVar12 = eastl::vector<unsigned int, eastl::allocator>::size(param_1);
            pvVar6 = param_1;
            if (lVar12 == 0) {
                return;
            }
            uVar16 = 0;
            uVar19 = 1;
            do {
                piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)pvVar6,
                                                                                 uVar16);
                iVar11 = *piVar13;
                piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)pvVar6,
                                                                                 uVar19);
                new (local_a8) oldscape::sidebars::SideBarData(iVar11, *piVar13);
                bVar8 = math::Rect<int>::IsInside<int>((Rect<int>*)local_c0, (Point*)local_a8);
                bVar3 = true;
                if (bVar8)
                    break;
                iVar11 = (int)local_60;
                uVar16 = (ulong)((iVar11 + (int)uVar19) - 1);
                uVar14 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar6);
                uVar19 = (ulong)(uint)((int)uVar19 + iVar11);
                bVar3 = false;
            } while (uVar16 < uVar14);
            if (!bVar3) {
                return;
            }
        }
        pvVar6 = local_40;
        pTVar5 = param_7;
        local_48 = eastl::vector<unsigned int, eastl::allocator>::size(param_1);
        this_00 = local_58;
        uVar19 = (local_48 & 4294967295) / (local_60 & 4294967295);
        puVar1 = local_58->field_1656;
        uVar10 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar6);
        local_78 = uVar19;
        cVar9 = puVar1->HasRoom((uint)uVar19, uVar10);
        if ((cVar9 == '\0') ||
            (cVar9 = IsStateChangeNeeded(this_00, &param_9, 1, local_34, pTVar5, 0, 0), cVar9 != '\0')) {
            Render(this_00, (SamplerState*)0);
            SetBatchMode(this_00, 1);
            if (pTVar5 != (Texture*)0) {
                cVar9 = pTVar5->IsCreated();
                if (cVar9 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("texture->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1288, "GUIManager texture being added that has no native resources");
                }
                this_00->field_88 = (Mixer*)pTVar5;
            }
            this_00->field_108 = param_9;
        }
        local_a8._8_8_ = &this_00->field_1960;
        iVar11 = local_a8._8_8_->size();
        piVar13 = (int*)pvVar6->HeapBeginPtr();
        piVar15 = (int*)pvVar6->end();
        if (piVar13 != piVar15) {
            puVar1 = &local_58->field_2080;
            do {
                uVar19 = puVar1->size();
                uVar16 = puVar1->capacity();
                if (uVar16 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_vertexDynamic.m_indexDataBuffer.size() < m_vertexDynamic.m_indexDataBuffer.capacity()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1298, (char*)0);
                }
                local_a8._0_2_ = (short)*piVar13 + (short)iVar11;
                puVar1->push_back(local_a8);
                if (65535 < (uint)(*piVar13 + iVar11)) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("startIndex + index <= std::numeric_limits<uint16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1300, (char*)0);
                }
                piVar13 = piVar13 + 1;
            } while (piVar13 != piVar15);
        }
        iVar11 = eastl::vector<unsigned int, eastl::allocator>::size(local_40);
        local_58->field_80 = local_58->field_80 + iVar11;
        if ((uint)local_60 <= (uint)local_48) {
            local_c0._16_8_ = ZEXT48((int)local_90 * 3 - 1);
            local_70 = (ulong)((uint)local_70 | (uint)local_38);
            local_68 = (ulong)((uint)local_68 | (uint)local_38);
            uVar10 = (uint)local_78;
            local_78 = local_78 & 4294967295;
            if (uVar10 < 2) {
                local_78 = 1;
            }
            uVar19 = 0;
            uVar16 = 0;
            do {
                pvVar6 = param_1;
                pTVar5 = param_7;
                iVar11 = (int)uVar19;
                puVar18 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                    (vector<int, eastl::allocator>*)param_1, uVar19);
                uVar2 = *puVar18;
                piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)pvVar6,
                                                                                 (ulong)(iVar11 + 1));
                local_48 = CONCAT44(local_48._4_4_, (float)*piVar13);
                if ((int)local_90 != 0) {
                    puVar18 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)pvVar6, (ulong)(uint)(local_c0._16_4_ + iVar11));
                    local_34 = *puVar18;
                }
                local_40 = (vector<unsigned int, eastl::allocator>*)CONCAT44(local_40._4_4_, param_5);
                fVar22 = param_6;
                if ((int)local_98 != 0) {
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)pvVar6, (ulong)(uint)((int)local_70 + iVar11));
                    local_40 = (vector<unsigned int, eastl::allocator>*)CONCAT44(local_40._4_4_,
                                                                                 (float)*piVar13 * 9.536743e-07);
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)pvVar6, (ulong)(uint)((int)local_68 + iVar11));
                    fVar22 = (float)*piVar13 * 9.536743e-07;
                }
                uVar4 = local_a8._8_8_;
                if (pTVar5 == (Texture*)0) {
                    fVar22 = -65000.0;
                    local_40 = (vector<unsigned int, eastl::allocator>*)CONCAT44(local_40._4_4_, 3346917376);
                }
                local_48 = CONCAT44(local_48._4_4_, (float)(int)local_58->field_36 - (float)local_48);
                local_38 = fVar22;
                uVar19 = local_a8._8_8_->size();
                uVar14 = uVar4->capacity();
                uVar4 = local_a8._8_8_;
                if (uVar14 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                    LogAssert(
                        "m_vertexDynamic.m_vertexDataBuffer.size() < m_vertexDynamic.m_vertexDataBuffer.capacity()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                        "GUIManager.cpp",
                        1336, (char*)0);
                }
                local_a8._8_8_->push_back_uninitialized();
                this_01 = (array<short, 2ul>*)uVar4->back();
                iVar21 = (int)(float)local_48;
                puVar17 = (undefined2*)std::array<short, 2ul>::operator[](this_01, 0);
                *puVar17 = (short)uVar2;
                puVar17 = (undefined2*)std::array<short, 2ul>::operator[](this_01, 1);
                *puVar17 = (short)iVar21;
                *(undefined4*)(this_01 + 4) = local_34;
                ((this_01 + 8))->Set(local_40._0_4_, local_38);
                puVar18 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(this_01 + 16), 0);
                *puVar18 = 0;
                puVar18 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(this_01 + 16), 1);
                *puVar18 = 0;
                puVar18 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(this_01 + 24), 0);
                *puVar18 = 1065353216;
                puVar18 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(this_01 + 24), 1);
                *puVar18 = 1065353216;
                uVar16 = uVar16 + 1;
                uVar19 = (ulong)(iVar11 + (uint)local_60);
            } while (uVar16 != local_78);
        }
    }

    // 0x1008ed300, 3328 bytes, placed by class name
    // GUIManager::AddHorizontalGradientRectangle(int, int, int, int, unsigned int, unsigned int, GUIManager::BlendMode, int, bool)
    void GUIManager::AddHorizontalGradientRectangle(ulong param_2_00, uint param_2, int param_3, uint param_4,
                                                    uint param_5, uint param_6, int param_8, int param_9,
                                                    char param_10) {
        undefined1* this_00;
        uint uVar1;
        Array<GUIManagerVertexBase<short>, eastl::allocator>* pAVar2;
        char cVar3;
        uint* puVar4;
        array<short, 2ul>* paVar5;
        short* psVar6;
        undefined4* puVar7;
        undefined2* puVar8;
        uint uVar9;
        uint uVar10;
        int iVar11;
        undefined2 uVar12;
        short sVar13;
        int iVar14;
        short sVar15;
        int iVar16;
        undefined2 uVar17;
        bool bVar18;
        uint local_60;
        int local_5c;
        Array<GUIManagerVertexBase<short>, eastl::allocator>* local_58;
        int local_4c;
        ulong local_48;
        uint local_40;
        uint local_38;
        short local_34;
        short local_32;

        local_48 = param_2_00;
        cVar3 = (&field_40)->empty();
        if (cVar3 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      218,
                      "Ensure Begin() is called with a valid DrawCallState before submitting GUI elements to draw");
        }
        local_40 = param_3 + (int)local_48;
        uVar9 = param_4 + param_2;
        local_58 = (Array<GUIManagerVertexBase<short>, eastl::allocator>*)(ulong)param_4;
        cVar3 = (field_0, (int)local_48, param_2, local_40, uVar9)->ClippingTest();
        if (cVar3 == '\0') {
            return;
        }
        if (field_80 < field_84) {
            cVar3 = IsStateChangeNeeded(this, &field_108, 2, param_5, 0, 0, 0);
            if ((cVar3 != '\0') || (cVar3 = IsStateChangeNeeded(this, &field_108, 2, param_6, 0, 0, 0), cVar3 != '\0'))
                goto LAB_1008ed3d9;
        } else {
        LAB_1008ed3d9:
            Render(this, (SamplerState*)0);
            SetBatchMode(this, 2);
            field_108 = param_8;
        }
        puVar4 = (uint*)field_0->GetPixelBuffer();
        uVar10 = *puVar4;
        iVar11 = 0;
        if (uVar10 != 4294967295) {
            if (0 < param_3) {
                iVar16 = (int)local_48;
                local_48 = local_48 & 4294967295;
                if (iVar16 < (int)uVar10) {
                    local_48 = (ulong)uVar10;
                }
                if ((int)puVar4[2] < (int)local_40) {
                    local_40 = puVar4[2];
                }
            }
            if (0 < (int)local_58) {
                uVar1 = puVar4[1];
                iVar11 = uVar1 - param_2;
                bVar18 = iVar11 == 0;
                if (bVar18 || (int)uVar1 < (int)param_2) {
                    iVar11 = 0;
                }
                uVar10 = puVar4[3];
                if (!bVar18 && (int)param_2 <= (int)uVar1) {
                    param_2 = uVar1;
                }
                iVar16 = uVar9 - uVar10;
                if (iVar16 == 0 || (int)uVar9 < (int)uVar10) {
                    iVar16 = 0;
                    uVar10 = uVar9;
                }
                goto LAB_1008ed45a;
            }
        }
        iVar16 = 0;
        uVar10 = uVar9;
    LAB_1008ed45a:
        if ((uint)local_48 != local_40) {
            iVar14 = field_36 - param_2;
            local_5c = field_36 - uVar10;
            this_00 = &field_232;
            local_58 = (Array<GUIManagerVertexBase<short>, eastl::allocator>*)this_00;
            if ((param_9 < 1) || (iVar14 - local_5c <= param_9 * 2)) {
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
                    (Array<GUIManagerVertexBase<short>, eastl::allocator>*)this_00, (ulong)uVar9);
                sVar13 = (short)iVar14 + -5;
                puVar8 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 0);
                *puVar8 = (short)local_48;
                psVar6 = (short*)std::array<short, 2ul>::operator[](paVar5, 1);
                *psVar6 = sVar13;
                *(uint*)(paVar5 + 4) = param_5;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
                *puVar7 = 1065353216;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
                    (Array<GUIManagerVertexBase<short>, eastl::allocator>*)this_00, (ulong)uVar9);
                puVar8 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 0);
                uVar12 = (undefined2)local_40;
                *puVar8 = uVar12;
                psVar6 = (short*)std::array<short, 2ul>::operator[](paVar5, 1);
                *psVar6 = sVar13;
                *(uint*)(paVar5 + 4) = param_6;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
                *puVar7 = 1065353216;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
                pAVar2 = local_58;
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
                    local_58, (ulong)uVar9);
                puVar8 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 0);
                *puVar8 = uVar12;
                puVar8 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 1);
                uVar12 = (undefined2)local_5c;
                *puVar8 = uVar12;
                *(uint*)(paVar5 + 4) = param_6;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
                *puVar7 = 1065353216;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
                    pAVar2, (ulong)uVar9);
                puVar8 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 0);
                *puVar8 = (short)local_48;
                puVar8 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 1);
                *puVar8 = uVar12;
                *(uint*)(paVar5 + 4) = param_5;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
                *puVar7 = 1065353216;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
                *puVar7 = 1065353216;
                field_80 = field_80 + 1;
            } else {
                local_60 = param_5;
                local_38 = param_6;
                local_34 = (short)local_48;
                local_32 = (short)local_40;
                if (param_10 != '\0') {
                    std::swap<unsigned int>(&local_60, &local_38);
                    std::swap<short>(&local_34, &local_32);
                }
                local_4c = iVar11 - param_9;
                if (param_9 <= iVar11) {
                    local_4c = 0;
                }
                iVar11 = param_9 - iVar16;
                if (iVar11 == 0 || param_9 < iVar16) {
                    iVar11 = 0;
                }
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
                    (Array<GUIManagerVertexBase<short>, eastl::allocator>*)this_00, (ulong)uVar9);
                sVar13 = local_34;
                uVar9 = local_38;
                psVar6 = (short*)std::array<short, 2ul>::operator[](paVar5, 0);
                *psVar6 = sVar13;
                psVar6 = (short*)std::array<short, 2ul>::operator[](paVar5, 1);
                *psVar6 = (short)iVar14;
                *(uint*)(paVar5 + 4) = uVar9;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
                *puVar7 = 1065353216;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
                    (Array<GUIManagerVertexBase<short>, eastl::allocator>*)this_00, (ulong)uVar9);
                sVar13 = local_32;
                uVar9 = local_38;
                iVar14 = local_4c + iVar14;
                local_4c = iVar14;
                psVar6 = (short*)std::array<short, 2ul>::operator[](paVar5, 0);
                *psVar6 = sVar13;
                puVar8 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 1);
                *puVar8 = (short)iVar14;
                *(uint*)(paVar5 + 4) = uVar9;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
                *puVar7 = 1065353216;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
                pAVar2 = local_58;
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
                    local_58, (ulong)uVar9);
                sVar13 = local_32;
                uVar9 = local_38;
                psVar6 = (short*)std::array<short, 2ul>::operator[](paVar5, 0);
                *psVar6 = sVar13;
                puVar8 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 1);
                *puVar8 = (short)local_4c;
                *(uint*)(paVar5 + 4) = uVar9;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
                *puVar7 = 1065353216;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
                    pAVar2, (ulong)uVar9);
                sVar13 = local_34;
                uVar9 = local_60;
                psVar6 = (short*)std::array<short, 2ul>::operator[](paVar5, 0);
                *psVar6 = sVar13;
                puVar8 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 1);
                uVar12 = (undefined2)local_4c;
                *puVar8 = uVar12;
                *(uint*)(paVar5 + 4) = uVar9;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
                *puVar7 = 1065353216;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
                pAVar2 = local_58;
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
                    local_58, (ulong)uVar9);
                puVar8 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 0);
                *puVar8 = (short)local_48;
                puVar8 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 1);
                *puVar8 = uVar12;
                *(uint*)(paVar5 + 4) = param_5;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
                *puVar7 = 1065353216;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
                    pAVar2, (ulong)uVar9);
                puVar8 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 0);
                uVar17 = (undefined2)local_40;
                *puVar8 = uVar17;
                puVar8 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 1);
                *puVar8 = uVar12;
                *(uint*)(paVar5 + 4) = param_6;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
                *puVar7 = 1065353216;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
                pAVar2 = local_58;
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
                    local_58, (ulong)uVar9);
                sVar15 = (short)iVar11 + (short)local_5c;
                puVar8 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 0);
                *puVar8 = uVar17;
                psVar6 = (short*)std::array<short, 2ul>::operator[](paVar5, 1);
                *psVar6 = sVar15;
                *(uint*)(paVar5 + 4) = param_6;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
                *puVar7 = 1065353216;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
                    pAVar2, (ulong)uVar9);
                puVar8 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 0);
                *puVar8 = (short)local_48;
                psVar6 = (short*)std::array<short, 2ul>::operator[](paVar5, 1);
                *psVar6 = sVar15;
                *(uint*)(paVar5 + 4) = param_5;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
                *puVar7 = 1065353216;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
                    pAVar2, (ulong)uVar9);
                sVar13 = local_34;
                uVar9 = local_60;
                psVar6 = (short*)std::array<short, 2ul>::operator[](paVar5, 0);
                *psVar6 = sVar13;
                psVar6 = (short*)std::array<short, 2ul>::operator[](paVar5, 1);
                *psVar6 = sVar15;
                *(uint*)(paVar5 + 4) = uVar9;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
                *puVar7 = 1065353216;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
                pAVar2 = local_58;
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
                    local_58, (ulong)uVar9);
                sVar13 = local_32;
                uVar9 = local_38;
                psVar6 = (short*)std::array<short, 2ul>::operator[](paVar5, 0);
                *psVar6 = sVar13;
                psVar6 = (short*)std::array<short, 2ul>::operator[](paVar5, 1);
                *psVar6 = sVar15;
                *(uint*)(paVar5 + 4) = uVar9;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
                *puVar7 = 1065353216;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
                    pAVar2, (ulong)uVar9);
                sVar13 = local_32;
                uVar9 = local_38;
                psVar6 = (short*)std::array<short, 2ul>::operator[](paVar5, 0);
                *psVar6 = sVar13;
                psVar6 = (short*)std::array<short, 2ul>::operator[](paVar5, 1);
                *psVar6 = sVar15;
                *(uint*)(paVar5 + 4) = uVar9;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
                *puVar7 = 1065353216;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
                    pAVar2, (ulong)uVar9);
                sVar13 = local_34;
                uVar9 = local_38;
                psVar6 = (short*)std::array<short, 2ul>::operator[](paVar5, 0);
                *psVar6 = sVar13;
                puVar8 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 1);
                *puVar8 = (short)local_5c;
                *(uint*)(paVar5 + 4) = uVar9;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
                *puVar7 = 3346917376;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
                *puVar7 = 1065353216;
                puVar7 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
                *puVar7 = 1065353216;
                field_80 = field_80 + 3;
            }
        }
    }

    // 0x1008ee000, 80 bytes, placed by class name
    // GUIManager::IsStateChangeNeeded(GUIManager::BlendMode&, GUIManager::BatchMode, unsigned int, render::Texture const*, render::Texture const*, bool) const
    bool GUIManager::IsStateChangeNeeded(int* param_1, int param_3, char param_4, Mixer* param_5, Texture* param_6,
                                         char param_7) {
        if ((*param_1 == 0) && (param_4 == -1)) {
            *param_1 = field_108;
        }
        if (((field_76 == param_3) && (((param_5 == (Mixer*)0 || (field_88 == param_5)) && (field_96 == param_6)))) &&
            (field_104 == param_7)) {
            return *param_1 != field_108;
        }
        return true;
    }

    // 0x1008ee050, 160 bytes, placed by class name
    // GUIManager::SetBatchMode(GUIManager::BatchMode)
    void GUIManager::SetBatchMode(undefined4 param_2) {
        uint uVar1;

        field_76 = param_2;
        switch (param_2) {
        case 0:
            uVar1 = (&field_744)->end();
            break;
        case 1:
            uVar1 = (&field_1960)->size();
            goto LAB_1008ee0ce;
        case 2:
            uVar1 = (&field_232)->end();
            break;
        case 3:
            uVar1 = (&field_1256)->end();
            uVar1 = uVar1 >> 1;
            goto LAB_1008ee0ce;
        default:
            field_84 = 0;
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "gui/GUIManager.cpp",
                            1370, (char*)0);
        }
        uVar1 = uVar1 >> 2;
    LAB_1008ee0ce:
        field_84 = uVar1;
    }

    // 0x1008ee1a0, 144 bytes, placed by class name
    // GUIManager::AddTexturedTriangleList(eastl::vector<int, eastl::allocator> const&, eastl::vector<int, eastl::allocator> const&, unsigned int, render::Texture*, GUIManager::BlendMode, bool)
    void GUIManager::AddTexturedTriangleList(undefined8 param_1, undefined8 param_2, undefined4 param_3, long param_4,
                                             ulong param_6, undefined1 param_7) {
        if (param_4 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("texture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      350, "Use AddColouredTriangleList if there is no texture", 0, param_6, param_6 & 4294967295);
        }
        AddTriangleListInner((GUIManager*)3212836864, 3212836864, this, param_1, param_2, 2, param_3, param_4,
                             param_6 & 4294967295, param_7);
    }

    // 0x1008ee230, 192 bytes, placed by class name
    // GUIManager::AddOutline(int, int, int, int, int, unsigned int, GUIManager::BlendMode)
    void GUIManager::AddOutline(int param_1, int param_2, int param_3, int param_4, int param_5, undefined4 param_6,
                                undefined4 param_8) {
        AddColouredRectangle();
        AddColouredRectangle(this, param_1, (param_4 + param_2) - param_5, param_3, param_5, param_6, param_8);
        param_4 = param_4 + param_5 * -2;
        AddColouredRectangle(this, param_1, param_2 + param_5, param_5, param_4, param_6, param_8);
        AddColouredRectangle(this, (param_3 + param_1) - param_5, param_2 + param_5, param_5, param_4, param_6,
                             param_8);
    }

    // 0x1008ee2f0, 48 bytes, placed by class name
    // GUIManager::AddVerticalLine(int, int, int, int, unsigned int, GUIManager::BlendMode)
    void GUIManager::AddVerticalLine() {
        AddColouredRectangle();
    }

    // 0x1008ee320, 400 bytes, placed by class name
    // GUIManager::AddSprite(int, int, int, int, unsigned int, shared_ptr<SpriteAtlasReference> const&, GUIManager::BlendMode)
    void GUIManager::AddSprite(int param_1, int param_2, int param_3, int param_4, undefined4 param_5,
                               shared_ptr* param_6, undefined4 param_8) {
        bool bVar1;
        int iVar2;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        shared_ptr* this_01;
        SpriteAtlas* this_02;
        FastPool<audio::SoundInstance, int>* this_03;
        long lVar3;
        MapArea* this_04;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_05;
        undefined8 uVar4;
        EntityHighlightState* this_06;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        undefined4 uVar8;

        if ((param_3 < 1) && (param_4 < 1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("width > 0 || height > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      380, (char*)0);
        }
        bVar1 = shared_ptr::operator_cast_to_bool(param_6);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("reference",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      382, (char*)0);
        }
        this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
                      shared_ptr<SpriteAtlasReference>::operator->((shared_ptr<SpriteAtlasReference>*)param_6);
        this_01 = (shared_ptr*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(this_00);
        bVar1 = shared_ptr::operator_cast_to_bool(this_01);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("atlas",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      384, (char*)0);
        }
        this_02 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)this_01);
        this_03 = (FastPool<audio::SoundInstance, int>*)shared_ptr<SpriteAtlasReference>::operator->(
            (shared_ptr<SpriteAtlasReference>*)param_6);
        iVar2 = FastPool<audio::SoundInstance, int>::capacity(this_03);
        lVar3 = this_02->GetSpriteRenderMapping(iVar2);
        this_06 = (EntityHighlightState*)(lVar3 + 88);
        uVar5 = this_06->GetOverbright();
        uVar6 = this_06->GetAlpha();
        uVar7 = this_06->MaxU();
        uVar8 = this_06->MaxV();
        this_04 = (MapArea*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)this_01);
        this_05 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_04->GetOrigin();
        uVar4 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_05);
        AddElement(uVar5, uVar6, uVar7, uVar8, this, param_1, param_2, param_3 + param_1, param_4 + param_2, param_5,
                   uVar4, param_8);
    }

    // 0x1008ee4b0, 544 bytes, placed by class name
    // GUIManager::AddSpriteTiled(int, int, int, int, unsigned int, shared_ptr<SpriteAtlasReference> const&, GUIManager::BlendMode)
    void GUIManager::AddSpriteTiled(int param_1, int param_2, int param_3, int param_4, undefined4 param_5,
                                    shared_ptr* param_6, undefined4 param_8) {
        EntityHighlightState* this_00;
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        bool bVar4;
        int iVar5;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_01;
        shared_ptr* this_02;
        SpriteAtlas* this_03;
        FastPool<audio::SoundInstance, int>* this_04;
        long lVar6;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        undefined8 uVar7;
        undefined4* puVar8;
        vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>* this_07;
        undefined1 local_78[36];
        undefined4 local_54;
        int local_50;
        int local_4c;
        int local_48;
        int local_44;
        undefined8 local_40;
        undefined4 local_38;
        undefined4 local_34;

        local_54 = param_5;
        new (local_78) ClippingState(field_0);
        local_78._24_8_ = this;
        local_50 = param_2;
        local_4c = param_1;
        (field_0, param_1, param_2, param_3, param_4, false)->SetClippingRectangle();
        bVar4 = shared_ptr::operator_cast_to_bool(param_6);
        if (!bVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert("reference",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      395, (char*)0);
        }
        this_01 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
                      shared_ptr<SpriteAtlasReference>::operator->((shared_ptr<SpriteAtlasReference>*)param_6);
        this_02 = (shared_ptr*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(this_01);
        bVar4 = shared_ptr::operator_cast_to_bool(this_02);
        if (!bVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert("atlas",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      397, (char*)0);
        }
        local_48 = param_4;
        local_44 = param_3;
        this_03 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)this_02);
        this_04 = (FastPool<audio::SoundInstance, int>*)shared_ptr<SpriteAtlasReference>::operator->(
            (shared_ptr<SpriteAtlasReference>*)param_6);
        iVar5 = FastPool<audio::SoundInstance, int>::capacity(this_04);
        lVar6 = this_03->GetSpriteRenderMapping(iVar5);
        this_00 = (EntityHighlightState*)(lVar6 + 88);
        local_40._0_4_ = (GUIManager*)this_00->GetOverbright();
        local_40._4_4_ = this_00->GetAlpha();
        local_38 = this_00->MaxU();
        local_34 = this_00->MaxV();
        this_05 = (MapArea*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)this_02);
        this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
        uVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_06);
        this_07 = (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)(lVar6 + 8);
        puVar8 = (undefined4*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                this_07, 0);
        uVar1 = *puVar8;
        puVar8 = (undefined4*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                this_07, 1);
        uVar2 = *puVar8;
        puVar8 = (undefined4*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                this_07, 2);
        uVar3 = *puVar8;
        puVar8 = (undefined4*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                this_07, 3);
        AddElementTiled((GUIManager*)local_40, local_40._4_4_, local_38, local_34, local_78._24_8_, local_4c, local_50,
                        local_44 + local_4c, local_48 + local_50, local_54, uVar7, param_8, uVar1, uVar2, uVar3,
                        *puVar8, 0, 0);
        local_78->~ClippingState();
    }

    // 0x1008ee6e0, 704 bytes, placed by class name
    // GUIManager::AddElementTiled(int, int, int, int, unsigned int, float, float, float, float, render::Texture const*, GUIManager::BlendMode, unsigned int, unsigned int, unsigned int, unsigned int, int, int)
    void GUIManager::AddElementTiled(
        GUIManager* param_1, float param_7, float param_8, float param_9, GUIManager* this, undefined8 param_6,
        int param_2, int param_3, int param_4, undefined4 param_5,
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* param_10,
        undefined4 param_12, int param_13, int param_14, int param_15, int param_16, int param_17, int param_18) {
        uint* puVar1;
        long lVar2;
        ulong uVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        ulong uVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        float fVar11;
        float fVar12;
        float fVar13;

        if (m_skipTiledElements == '\0') {
            puVar1 = (uint*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(param_10);
            uVar6 = *puVar1;
            fVar11 = (float)::abs(param_8 - (float)param_1._0_4_);
            fVar11 = fVar11 * (float)uVar6;
            lVar2 = eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(param_10);
            uVar6 = *(uint*)(lVar2 + 4);
            fVar12 = (float)::abs(param_9 - param_7);
            fVar12 = fVar12 * (float)uVar6;
            iVar5 = (int)param_6;
            fVar13 = (float)ceil((float)(param_3 - iVar5) / fVar11);
            iVar10 = (int)fVar13;
            fVar13 = (float)ceil((float)(param_4 - param_2) / fVar12);
            if (param_17 != 0) {
                iVar10 = eastl::min<GraphicsQuality>(iVar10, param_17);
                fVar11 = (float)(param_3 - iVar5) / (float)iVar10;
            }
            uVar3 = (ulong)(uint)(int)fVar13;
            if (param_18 != 0) {
                uVar3 = eastl::min<GraphicsQuality>((int)fVar13);
                fVar12 = (float)(param_4 - param_2) / (float)(int)uVar3;
            }
            if ((((param_13 == 0) && (param_14 == 0)) && (param_16 == 0)) && (param_15 == 0)) {
                AddElementInner(param_1._0_4_, param_7, param_8, param_9, this, param_6, param_2,
                                (int)(fVar11 * (float)iVar10) + iVar5, (int)(fVar12 * (float)(int)uVar3) + param_2,
                                param_5, param_10, 0, 0, param_12, iVar10, uVar3);
            } else if (0 < iVar10) {
                iVar5 = iVar5 + param_13;
                iVar4 = 0;
                do {
                    if (0 < (int)uVar3) {
                        uVar7 = uVar3 & 4294967295;
                        iVar9 = param_2;
                        do {
                            iVar8 = iVar9 + param_16 + (int)fVar12;
                            AddElementInner(param_1._0_4_, param_7, param_8, param_9, this, iVar5, iVar9 + param_16,
                                            (int)fVar11 + iVar5, iVar8, param_5, param_10, 0, 0, param_12, 1, 1);
                            iVar9 = iVar8 + param_15;
                            uVar6 = (int)uVar7 - 1;
                            uVar7 = (ulong)uVar6;
                        } while (uVar6 != 0);
                    }
                    iVar5 = iVar5 + param_14 + param_13 + (int)fVar11;
                    iVar4 = iVar4 + 1;
                } while (iVar4 != iVar10);
            }
        }
    }

    // 0x1008ee9b0, 1424 bytes, placed by class name
    // GUIManager::AddElementRotated(int, int, int, int, unsigned int, float, float, float, float, render::Texture const*, GUIManager::BlendMode, float, int, int)
    void GUIManager::AddElementRotated(float param_6, float param_7, float param_8, float param_9, float param_5_00,
                                       GUIManager* this, type* param_7_00, int param_2, int param_3, int param_4,
                                       undefined4 param_5, undefined8 param_10, undefined4 param_13, int param_14,
                                       int param_15) {
        vector* pvVar1;
        float* pfVar2;
        Layout* pLVar3;
        Vector2T<int>* pVVar4;
        undefined4* puVar5;
        type* ptVar6;
        Vector2T* pVVar7;
        undefined8 in_stack_ffffffffffffff08;
        undefined4 uVar8;
        undefined8 in_stack_ffffffffffffff10;
        undefined4 uVar9;
        undefined8 in_stack_ffffffffffffff18;
        undefined4 uVar10;
        Matrix22T<float> local_d0[16];
        Vector2T<int> local_c0[8];
        Vector2T<int> local_b8[8];
        Vector2T<int> local_b0[8];
        Vector2T<int> local_a8[8];
        undefined4 local_94;
        undefined4 local_90;
        undefined4 local_8c;
        undefined4 local_88;
        undefined4 local_84;
        Vector2T<int> local_80[12];
        float local_74;
        float local_70;
        float local_6c;
        float local_68;
        float local_64;
        float local_60;
        float local_5c;
        int local_58;
        int local_54;
        int local_50;
        int local_4c;
        undefined8 local_48;
        undefined4 uStack_40;
        undefined4 uStack_3c;

        uVar8 = (undefined4)((ulong)in_stack_ffffffffffffff08 >> 32);
        uVar9 = (undefined4)((ulong)in_stack_ffffffffffffff10 >> 32);
        uVar10 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 32);
        local_58 = (int)param_7_00;
        local_74 = param_6;
        local_70 = param_8;
        local_64 = param_7;
        local_60 = param_9;
        local_54 = param_2;
        local_50 = param_3;
        local_4c = param_4;
        if (param_5_00 == 0.0) {
            AddElementInner();
        } else if (m_skipRotatedElements == '\0') {
            local_5c = param_5_00;
            if (param_8 < param_6) {
                std::swap<float>(&local_74, &local_70);
                param_7_00 = (type*)&local_50;
                std::swap<int>(&local_58, (int*)param_7_00);
            }
            if (local_60 < local_64) {
                std::swap<float>(&local_64, &local_60);
                param_7_00 = (type*)&local_4c;
                std::swap<int>(&local_54, (int*)param_7_00);
            }
            math::Vector2T<int>::Vector2T(local_80);
            if (param_14 == -999999) {
                local_48._0_4_ = (GUIManager*)((float)(local_50 + local_58) * 0.5);
                pvVar1 = local_80->SSOBeginPtr(param_7_00);
                /* WARNING: Store size is inaccurate */
                *(GUIManager**)pvVar1 = (GUIManager*)local_48;
                local_48._0_4_ = (GUIManager*)((float)(local_4c + local_54) * 0.5);
            } else {
                local_48._0_4_ = (GUIManager*)(float)param_14;
                pvVar1 = local_80->SSOBeginPtr(param_7_00);
                /* WARNING: Store size is inaccurate */
                *(GUIManager**)pvVar1 = (GUIManager*)local_48;
                local_48._0_4_ = (GUIManager*)(float)param_15;
            }
            pfVar2 = (float*)local_80->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar2 = (GUIManager*)local_48;
            math::Vector2T<int>::Vector2T(local_c0);
            math::Vector2T<int>::Vector2T(local_b8);
            math::Vector2T<int>::Vector2T(local_b0);
            math::Vector2T<int>::Vector2T(local_a8);
            local_48._0_4_ = (GUIManager*)(float)local_58;
            pvVar1 = local_80->SSOBeginPtr(param_7_00);
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *(float*)pvVar1);
            pvVar1 = local_c0->SSOBeginPtr(param_7_00);
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pvVar1 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)(float)local_54;
            pfVar2 = (float*)local_80->y();
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *pfVar2);
            pfVar2 = (float*)local_c0->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar2 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)(float)local_50;
            pvVar1 = local_80->SSOBeginPtr(param_7_00);
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *(float*)pvVar1);
            pvVar1 = local_b8->SSOBeginPtr(param_7_00);
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pvVar1 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)(float)local_54;
            pfVar2 = (float*)local_80->y();
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *pfVar2);
            pfVar2 = (float*)local_b8->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar2 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)(float)local_50;
            pvVar1 = local_80->SSOBeginPtr(param_7_00);
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *(float*)pvVar1);
            pvVar1 = local_a8->SSOBeginPtr(param_7_00);
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pvVar1 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)(float)local_4c;
            pfVar2 = (float*)local_80->y();
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *pfVar2);
            pfVar2 = (float*)local_a8->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar2 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)(float)local_58;
            pvVar1 = local_80->SSOBeginPtr(param_7_00);
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *(float*)pvVar1);
            pvVar1 = local_b0->SSOBeginPtr(param_7_00);
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pvVar1 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)(float)local_4c;
            pfVar2 = (float*)local_80->y();
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *pfVar2);
            pfVar2 = (float*)local_b0->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar2 = (GUIManager*)local_48;
            math::SinCos(&local_6c, &local_68, local_5c);
            math::Matrix22T<float>::Matrix22T(local_d0);
            local_48._0_4_ = (GUIManager*)local_68;
            ptVar6 = (type*)0;
            pLVar3 = (Layout*)math::Matrix22T<float>::operator[](local_d0, 0);
            pvVar1 = eastl::string::Layout::SSOBeginPtr(pLVar3, ptVar6);
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pvVar1 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)local_6c;
            pVVar4 = (Vector2T<int>*)math::Matrix22T<float>::operator[](local_d0, 0);
            pfVar2 = (float*)pVVar4->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar2 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)-local_6c;
            local_48._4_4_ = 2147483648;
            uStack_40 = 2147483648;
            uStack_3c = 2147483648;
            ptVar6 = (type*)&DAT_00000001;
            pLVar3 = (Layout*)math::Matrix22T<float>::operator[](local_d0, 1);
            pvVar1 = eastl::string::Layout::SSOBeginPtr(pLVar3, ptVar6);
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pvVar1 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)local_68;
            pVVar4 = (Vector2T<int>*)math::Matrix22T<float>::operator[](local_d0, 1);
            pfVar2 = (float*)pVVar4->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar2 = (GUIManager*)local_48;
            math::Vector2T<float>::operator*=((Vector2T<float>*)local_c0, (Matrix22T*)local_d0);
            math::Vector2T<float>::operator*=((Vector2T<float>*)local_b8, (Matrix22T*)local_d0);
            math::Vector2T<float>::operator*=((Vector2T<float>*)local_a8, (Matrix22T*)local_d0);
            math::Vector2T<float>::operator*=((Vector2T<float>*)local_b0, (Matrix22T*)local_d0);
            pVVar7 = (Vector2T*)local_80;
            math::Vector2T<float>::operator+=((Vector2T<float>*)local_c0, pVVar7);
            math::Vector2T<float>::operator+=((Vector2T<float>*)local_b8, pVVar7);
            math::Vector2T<float>::operator+=((Vector2T<float>*)local_b0, pVVar7);
            math::Vector2T<float>::operator+=((Vector2T<float>*)local_a8, pVVar7);
            pvVar1 = local_c0->SSOBeginPtr(pVVar7);
            /* WARNING: Load size is inaccurate */
            local_48._0_4_ = *(GUIManager**)pvVar1;
            puVar5 = (undefined4*)local_c0->y();
            local_5c = (float)*puVar5;
            pvVar1 = local_b8->SSOBeginPtr(pVVar7);
            local_94 = *(undefined4*)pvVar1;
            puVar5 = (undefined4*)local_b8->y();
            local_90 = *puVar5;
            pvVar1 = local_a8->SSOBeginPtr(pVVar7);
            local_8c = *(undefined4*)pvVar1;
            puVar5 = (undefined4*)local_a8->y();
            local_88 = *puVar5;
            pvVar1 = local_b0->SSOBeginPtr(pVVar7);
            local_84 = *(undefined4*)pvVar1;
            puVar5 = (undefined4*)local_b0->y();
            AddElementInnerClipped((GUIManager*)local_48, local_5c, local_94, local_90, local_8c, local_88, local_84,
                                   *puVar5, this, param_5, param_10, 0, 0, param_13, CONCAT44(uVar8, local_74),
                                   CONCAT44(uVar9, local_64), CONCAT44(uVar10, local_70), CONCAT44(1, local_60));
        }
    }

    // 0x1008ef150, 1616 bytes, placed by class name
    // GUIManager::AddElementInnerClipped(float, float, float, float, float, float, float, float, unsigned int, float, float, float, float, render::Texture const*, render::Texture const*, bool, GUIManager::BlendMode)
    void GUIManager::AddElementInnerClipped(float param_1, undefined4 param_2, float param_3, float param_4,
                                            float param_5, float param_6, float param_7, float param_8,
                                            GUIManager* this, undefined4 param_9, Texture* param_14, Texture* param_15,
                                            undefined1 param_16, int param_14_00, float param_10, float param_11,
                                            float param_12, float param_13) {
        undefined1* this_00;
        uint uVar1;
        char cVar3;
        int* piVar4;
        array<short, 2ul>* paVar5;
        undefined2* puVar6;
        float* pfVar7;
        undefined4* puVar8;
        int iVar9;
        int iVar10;
        float fVar11;
        float fVar12;
        float local_88;
        int local_70;
        undefined1 local_68[16];
        float local_50;
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        local_68._0_4_ = param_2;
        local_70 = param_14_00;
        local_4c = param_7;
        local_48 = param_5;
        local_44 = param_8;
        local_40 = param_6;
        local_3c = param_3;
        local_38 = param_4;
        local_34 = param_1;
        cVar3 = (&field_40)->empty();
        if (cVar3 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      893,
                      "Ensure Begin() is called with a valid DrawCallState before submitting GUI elements to draw");
        }
        piVar4 = (int*)field_0->GetPixelBuffer();
        if (piVar4[2] != -1) {
            fVar11 = (float)piVar4[2];
            if ((((fVar11 < local_34) && (fVar11 < local_3c)) && (fVar11 < local_4c)) && (fVar11 < local_48)) {
                return;
            }
            fVar11 = (float)*piVar4;
            if (((local_34 < fVar11) && (local_3c < fVar11)) && ((local_4c < fVar11 && (local_48 < fVar11)))) {
                return;
            }
            fVar11 = (float)piVar4[3];
            if (((fVar11 < (float)local_68._0_4_) && (fVar11 < local_38)) &&
                ((fVar11 < local_44 && (fVar11 < local_40)))) {
                return;
            }
            fVar11 = (float)piVar4[1];
            if (((((float)local_68._0_4_ < fVar11) && (local_38 < fVar11)) && (local_44 < fVar11)) &&
                (local_40 < fVar11)) {
                return;
            }
        }
        if ((field_84 <= field_80) ||
            (cVar3 = IsStateChangeNeeded(this, &local_70, 2, param_9, param_14, param_15, param_16), cVar3 != '\0')) {
            Render(this, (SamplerState*)0);
            SetBatchMode(this, 2);
            if (param_14 != (Texture*)0) {
                cVar3 = param_14->IsCreated();
                if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("texture->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              918, "GUIManager texture being added that has no native resources");
                }
                field_88 = (Mixer*)param_14;
            }
            field_108 = local_70;
            if ((param_15 != (Texture*)0) && (cVar3 = param_15->IsCreated(), cVar3 == '\0')) {
                /* WARNING: Subroutine does not return */
                LogAssert("!textureMask || textureMask->IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                          "GUIManager.cpp",
                          922, "GUIManager textureMask being added that has no native resources");
            }
            field_96 = param_15;
            field_104 = param_16;
        }
        if (param_14 == (Texture*)0) {
            param_10 = -65000.0;
            param_12 = -65000.0;
            param_11 = -65000.0;
            param_13 = -65000.0;
        }
        local_50 = (float)(int)field_36;
        local_88 = param_12 - param_10;
        if (local_88 < 0.0) {
            local_88 = -local_88;
            std::swap<float>(&param_10, &param_12);
        }
        local_44 = local_50 - local_44;
        fVar11 = local_50 - (float)local_68._0_4_;
        local_40 = local_50 - local_40;
        local_50 = local_50 - local_38;
        this_00 = &field_232;
        fVar12 = param_13 - param_11;
        if (0.0 <= fVar12) {
            local_68 = ZEXT416((uint)fVar12);
        } else {
            local_68._4_4_ = 2147483648;
            local_68._0_4_ = -fVar12;
            local_68._8_4_ = 2147483648;
            local_68._12_4_ = 2147483648;
            std::swap<float>(&param_11, &param_13);
        }
        local_88 = -local_88;
        local_68._0_8_ = local_68._0_8_ ^ 9223372039002259456;
        local_68._8_4_ = local_68._8_4_ ^ 2147483648;
        local_68._12_4_ = local_68._12_4_ ^ 2147483648;
        uVar1 = field_256;
        field_256 = uVar1 + 1;
        paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
            (Array<GUIManagerVertexBase<short>, eastl::allocator>*)this_00, (ulong)uVar1);
        iVar9 = (int)local_34;
        local_38 = param_10;
        local_34 = param_11;
        puVar6 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 0);
        *puVar6 = (short)iVar9;
        puVar6 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 1);
        *puVar6 = (short)(int)fVar11;
        *(undefined4*)(paVar5 + 4) = param_9;
        ((paVar5 + 8))->Set(local_38, local_34);
        pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
        *pfVar7 = local_38;
        pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
        *pfVar7 = local_34;
        pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
        *pfVar7 = local_88;
        puVar8 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
        *puVar8 = local_68._0_4_;
        uVar1 = field_256;
        field_256 = uVar1 + 1;
        paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
            (Array<GUIManagerVertexBase<short>, eastl::allocator>*)this_00, (ulong)uVar1);
        iVar9 = (int)local_3c;
        iVar10 = (int)local_50;
        local_38 = param_12;
        local_34 = param_11;
        local_3c = param_10;
        puVar6 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 0);
        *puVar6 = (short)iVar9;
        puVar6 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 1);
        *puVar6 = (short)iVar10;
        *(undefined4*)(paVar5 + 4) = param_9;
        ((paVar5 + 8))->Set(local_38, local_34);
        pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
        *pfVar7 = local_3c;
        pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
        *pfVar7 = local_34;
        pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
        *pfVar7 = local_88;
        puVar8 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
        *puVar8 = local_68._0_4_;
        uVar1 = field_256;
        field_256 = uVar1 + 1;
        paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
            (Array<GUIManagerVertexBase<short>, eastl::allocator>*)this_00, (ulong)uVar1);
        iVar9 = (int)local_48;
        iVar10 = (int)local_40;
        local_48 = param_12;
        local_38 = param_13;
        local_3c = param_10;
        local_34 = param_11;
        puVar6 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 0);
        *puVar6 = (short)iVar9;
        puVar6 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 1);
        *puVar6 = (short)iVar10;
        *(undefined4*)(paVar5 + 4) = param_9;
        ((paVar5 + 8))->Set(local_48, local_38);
        pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
        *pfVar7 = local_3c;
        pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
        *pfVar7 = local_34;
        pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
        *pfVar7 = local_88;
        puVar8 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
        *puVar8 = local_68._0_4_;
        uVar1 = field_256;
        field_256 = uVar1 + 1;
        paVar5 = (array<short, 2ul>*)Array<GUIManagerVertexBase<short>, eastl::allocator>::operator[](
            (Array<GUIManagerVertexBase<short>, eastl::allocator>*)this_00, (ulong)uVar1);
        iVar10 = (int)local_4c;
        iVar9 = (int)local_44;
        local_34 = param_10;
        local_4c = param_13;
        local_3c = param_11;
        puVar6 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 0);
        *puVar6 = (short)iVar10;
        puVar6 = (undefined2*)std::array<short, 2ul>::operator[](paVar5, 1);
        *puVar6 = (short)iVar9;
        *(undefined4*)(paVar5 + 4) = param_9;
        ((paVar5 + 8))->Set(local_34, local_4c);
        pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 0);
        *pfVar7 = local_34;
        pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 16), 1);
        *pfVar7 = local_3c;
        pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 0);
        *pfVar7 = local_88;
        puVar8 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar5 + 24), 1);
        *puVar8 = local_68._0_4_;
        field_80 = field_80 + 1;
    }

    // 0x1008ef7a0, 1408 bytes, placed by class name
    // GUIManager::AddElementPrecise(float, float, float, float, unsigned int, float, float, float, float, render::Texture const*, GUIManager::BlendMode, float, int, int)
    void GUIManager::AddElementPrecise(float param_1, float param_2, float param_3, float param_4, float param_6,
                                       float param_7, float param_8, float param_9, GUIManager* this, type* param_10_00,
                                       undefined8 param_10, undefined4 param_12, int param_13, int param_14,
                                       float param_15) {
        vector* pvVar1;
        float* pfVar2;
        Layout* pLVar3;
        Vector2T<int>* pVVar4;
        undefined4* puVar5;
        type* ptVar6;
        Vector2T* pVVar7;
        Matrix22T<float> local_d8[16];
        Vector2T<int> local_c8[8];
        Vector2T<int> local_c0[8];
        Vector2T<int> local_b8[8];
        Vector2T<int> local_a0[8];
        undefined4 local_94;
        undefined4 local_90;
        undefined4 local_8c;
        undefined4 local_88;
        undefined4 local_84;
        undefined4 local_80;
        undefined4 local_7c;
        Vector2T<int> local_78[8];
        float local_70;
        float local_6c;
        float local_68;
        float local_64;
        float local_60;
        float local_5c;
        float local_58;
        float local_54;
        float local_50;
        float local_4c;
        undefined8 local_48;
        undefined4 uStack_40;
        undefined4 uStack_3c;

        local_70 = param_6;
        local_6c = param_8;
        local_60 = param_7;
        local_5c = param_9;
        local_58 = param_1;
        local_54 = param_2;
        local_50 = param_3;
        local_4c = param_4;
        if (param_15 == 0.0) {
            AddElementPreciseInner();
        } else if (m_skipRotatedElements == '\0') {
            local_94 = SUB84(param_10_00, 0);
            if (param_8 < param_6) {
                std::swap<float>(&local_70, &local_6c);
                param_10_00 = (type*)&local_50;
                std::swap<float>(&local_58, (float*)param_10_00);
            }
            if (local_5c < local_60) {
                std::swap<float>(&local_60, &local_5c);
                param_10_00 = (type*)&local_4c;
                std::swap<float>(&local_54, (float*)param_10_00);
            }
            math::Vector2T<int>::Vector2T(local_78);
            if (param_13 == -999999) {
                local_48._0_4_ = (GUIManager*)((local_50 + local_58) * 0.5);
                pvVar1 = local_78->SSOBeginPtr(param_10_00);
                /* WARNING: Store size is inaccurate */
                *(GUIManager**)pvVar1 = (GUIManager*)local_48;
                local_48._0_4_ = (GUIManager*)((local_4c + local_54) * 0.5);
            } else {
                local_48._0_4_ = (GUIManager*)(float)param_13;
                pvVar1 = local_78->SSOBeginPtr(param_10_00);
                /* WARNING: Store size is inaccurate */
                *(GUIManager**)pvVar1 = (GUIManager*)local_48;
                local_48._0_4_ = (GUIManager*)(float)param_14;
            }
            pfVar2 = (float*)local_78->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar2 = (GUIManager*)local_48;
            math::Vector2T<int>::Vector2T(local_b8);
            math::Vector2T<int>::Vector2T(local_c8);
            math::Vector2T<int>::Vector2T(local_a0);
            math::Vector2T<int>::Vector2T(local_c0);
            local_48._0_4_ = (GUIManager*)local_58;
            pvVar1 = local_78->SSOBeginPtr(param_10_00);
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *(float*)pvVar1);
            pvVar1 = local_b8->SSOBeginPtr(param_10_00);
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pvVar1 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)local_54;
            pfVar2 = (float*)local_78->y();
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *pfVar2);
            pfVar2 = (float*)local_b8->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar2 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)local_50;
            pvVar1 = local_78->SSOBeginPtr(param_10_00);
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *(float*)pvVar1);
            pvVar1 = local_c8->SSOBeginPtr(param_10_00);
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pvVar1 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)local_54;
            pfVar2 = (float*)local_78->y();
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *pfVar2);
            pfVar2 = (float*)local_c8->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar2 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)local_50;
            pvVar1 = local_78->SSOBeginPtr(param_10_00);
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *(float*)pvVar1);
            pvVar1 = local_c0->SSOBeginPtr(param_10_00);
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pvVar1 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)local_4c;
            pfVar2 = (float*)local_78->y();
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *pfVar2);
            pfVar2 = (float*)local_c0->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar2 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)local_58;
            pvVar1 = local_78->SSOBeginPtr(param_10_00);
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *(float*)pvVar1);
            pvVar1 = local_a0->SSOBeginPtr(param_10_00);
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pvVar1 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)local_4c;
            pfVar2 = (float*)local_78->y();
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *pfVar2);
            pfVar2 = (float*)local_a0->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar2 = (GUIManager*)local_48;
            math::SinCos(&local_68, &local_64, param_15);
            math::Matrix22T<float>::Matrix22T(local_d8);
            local_48._0_4_ = (GUIManager*)local_64;
            ptVar6 = (type*)0;
            pLVar3 = (Layout*)math::Matrix22T<float>::operator[](local_d8, 0);
            pvVar1 = eastl::string::Layout::SSOBeginPtr(pLVar3, ptVar6);
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pvVar1 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)local_68;
            pVVar4 = (Vector2T<int>*)math::Matrix22T<float>::operator[](local_d8, 0);
            pfVar2 = (float*)pVVar4->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar2 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)-local_68;
            local_48._4_4_ = 2147483648;
            uStack_40 = 2147483648;
            uStack_3c = 2147483648;
            ptVar6 = (type*)&DAT_00000001;
            pLVar3 = (Layout*)math::Matrix22T<float>::operator[](local_d8, 1);
            pvVar1 = eastl::string::Layout::SSOBeginPtr(pLVar3, ptVar6);
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pvVar1 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)local_64;
            pVVar4 = (Vector2T<int>*)math::Matrix22T<float>::operator[](local_d8, 1);
            pfVar2 = (float*)pVVar4->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar2 = (GUIManager*)local_48;
            math::Vector2T<float>::operator*=((Vector2T<float>*)local_b8, (Matrix22T*)local_d8);
            math::Vector2T<float>::operator*=((Vector2T<float>*)local_c8, (Matrix22T*)local_d8);
            math::Vector2T<float>::operator*=((Vector2T<float>*)local_c0, (Matrix22T*)local_d8);
            math::Vector2T<float>::operator*=((Vector2T<float>*)local_a0, (Matrix22T*)local_d8);
            pVVar7 = (Vector2T*)local_78;
            math::Vector2T<float>::operator+=((Vector2T<float>*)local_b8, pVVar7);
            math::Vector2T<float>::operator+=((Vector2T<float>*)local_c8, pVVar7);
            math::Vector2T<float>::operator+=((Vector2T<float>*)local_a0, pVVar7);
            math::Vector2T<float>::operator+=((Vector2T<float>*)local_c0, pVVar7);
            pvVar1 = local_b8->SSOBeginPtr(pVVar7);
            /* WARNING: Load size is inaccurate */
            local_48._0_4_ = *(GUIManager**)pvVar1;
            puVar5 = (undefined4*)local_b8->y();
            local_90 = *puVar5;
            pvVar1 = local_c8->SSOBeginPtr(pVVar7);
            local_8c = *(undefined4*)pvVar1;
            puVar5 = (undefined4*)local_c8->y();
            local_88 = *puVar5;
            pvVar1 = local_c0->SSOBeginPtr(pVVar7);
            local_84 = *(undefined4*)pvVar1;
            puVar5 = (undefined4*)local_c0->y();
            local_80 = *puVar5;
            pvVar1 = local_a0->SSOBeginPtr(pVVar7);
            local_7c = *(undefined4*)pvVar1;
            puVar5 = (undefined4*)local_a0->y();
            AddElementPreciseInnerClipped((GUIManager*)local_48, local_90, local_8c, local_88, local_84, local_80,
                                          local_7c, *puVar5, this, local_94, param_10, 0, 0, param_12, local_70,
                                          local_60, local_6c, local_5c);
        }
    }

    // 0x1008efd20, 2032 bytes, placed by class name
    // GUIManager::AddElementPreciseInner(float, float, float, float, unsigned int, float, float, float, float, render::Texture const*, render::Texture const*, bool, GUIManager::BlendMode, unsigned int, unsigned int)
    void GUIManager::AddElementPreciseInner(float param_1, undefined4 param_2, float param_3, undefined4 param_4,
                                            float param_6, float param_7, float param_8, float param_9,
                                            GUIManager* this, undefined4 param_5, Texture* param_10, Texture* param_11,
                                            uint param_13, int param_14, int param_15, int param_16) {
        undefined1* this_00;
        uint uVar1;
        RT7Core* this_01;
        Texture* this_02;
        char cVar2;
        int iVar3;
        int iVar4;
        int* piVar5;
        array<float, 2ul>* paVar6;
        float* pfVar7;
        undefined4* puVar8;
        int iVar9;
        int iVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        int local_a0;
        float local_9c;
        undefined1 local_98[16];
        undefined1 local_88[16];
        Texture* local_70;
        float local_68;
        float local_64;
        float local_54;
        float local_50;
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        local_98._0_4_ = param_4;
        local_88._0_4_ = param_2;
        local_a0 = param_14;
        local_70 = param_10;
        local_68 = param_8;
        local_64 = param_9;
        local_54 = param_1;
        local_48 = param_6;
        local_44 = param_7;
        local_40 = (float)param_13;
        local_3c = param_3;
        cVar2 = (&field_40)->empty();
        if (cVar2 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      978,
                      "Ensure Begin() is called with a valid DrawCallState before submitting GUI elements to draw");
        }
        this_01 = field_0;
        iVar10 = (int)local_54;
        iVar9 = (int)(float)local_88._0_4_;
        iVar3 = math::RoundFloatToInt(local_3c);
        iVar4 = math::RoundFloatToInt((float)local_98._0_4_);
        cVar2 = this_01->ClippingTest(iVar10, iVar9, iVar3, iVar4);
        fVar11 = local_40;
        this_02 = local_70;
        if (cVar2 != '\0') {
            if ((field_84 <= field_80) ||
                (cVar2 = IsStateChangeNeeded(this, &local_a0, 0, param_5, local_70, param_11, (uint)local_40 & 255),
                 cVar2 != '\0')) {
                Render(this, (SamplerState*)0);
                SetBatchMode(this, 0);
                if (this_02 != (Texture*)0) {
                    cVar2 = this_02->IsCreated();
                    if (cVar2 == '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("texture->IsCreated()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/gui/GUIManager.cpp",
                                  996, "GUIManager texture being added that has no native resources");
                    }
                    field_88 = (Mixer*)this_02;
                }
                field_108 = local_a0;
                if ((param_11 != (Texture*)0) && (cVar2 = param_11->IsCreated(), cVar2 == '\0')) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!textureMask || textureMask->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1000, "GUIManager textureMask being added that has no native resources");
                }
                field_96 = param_11;
                field_104 = SUB41(fVar11, 0);
            }
            local_40 = local_48;
            local_34 = local_44;
            if ((param_15 == 1) && (param_16 == 1)) {
                local_38 = local_68;
                fVar11 = local_64;
            } else {
                local_38 = local_68 + (local_68 - local_48) * (float)(param_15 - 1);
                fVar11 = local_64 + (local_64 - local_44) * (float)(param_16 - 1);
            }
            (param_11)._0_4_ = fVar11;
            piVar5 = (int*)field_0->GetPixelBuffer();
            local_4c = (float)local_98._0_4_;
            local_50 = (float)local_88._0_4_;
            local_9c = local_3c;
            if (*piVar5 != -1) {
                fVar12 = local_3c - local_54;
                fVar11 = (float)local_98._0_4_ - (float)local_88._0_4_;
                if (0.0 < fVar12) {
                    fVar14 = (float)*piVar5;
                    fVar13 = local_38 - local_40;
                    if (local_54 < fVar14) {
                        local_40 = local_40 + ((fVar14 - local_54) * fVar13) / fVar12;
                        local_54 = fVar14;
                    }
                    fVar14 = (float)piVar5[2];
                    if (fVar14 < local_3c) {
                        local_38 = local_38 + ((fVar14 - local_3c) * fVar13) / fVar12;
                        local_9c = fVar14;
                    }
                }
                if (0.0 < fVar11) {
                    local_50 = (float)piVar5[1];
                    fVar12 = (param_11)._0_4_ - local_34;
                    if (local_50 <= (float)local_88._0_4_) {
                        local_50 = (float)local_88._0_4_;
                    } else {
                        local_34 = local_34 + ((local_50 - (float)local_88._0_4_) * fVar12) / fVar11;
                    }
                    fVar13 = (float)piVar5[3];
                    if (fVar13 < (float)local_98._0_4_) {
                        (param_11)._0_4_ = (param_11)._0_4_ + ((fVar13 - (float)local_98._0_4_) * fVar12) / fVar11;
                        local_4c = fVar13;
                    }
                }
            }
            if (this_02 == (Texture*)0) {
                local_40 = -65000.0;
                (param_11)._0_4_ = -65000.0;
                local_34 = -65000.0;
                local_38 = -65000.0;
            }
            local_3c = (float)(int)field_36;
            fVar11 = local_68 - local_48;
            if (0.0 <= fVar11) {
                local_98 = ZEXT416((uint)fVar11);
            } else {
                local_98._4_4_ = 2147483648;
                local_98._0_4_ = -fVar11;
                local_98._8_4_ = 2147483648;
                local_98._12_4_ = 2147483648;
                std::swap<float>(&local_48, &local_68);
            }
            fVar11 = local_64 - local_44;
            if (0.0 <= fVar11) {
                local_88 = ZEXT416((uint)fVar11);
            } else {
                local_88._4_4_ = 2147483648;
                local_88._0_4_ = -fVar11;
                local_88._8_4_ = 2147483648;
                local_88._12_4_ = 2147483648;
                std::swap<float>(&local_44, &local_64);
            }
            if (param_15 == 1) {
                local_98._0_8_ = local_98._0_8_ ^ 9223372039002259456;
                local_98._8_4_ = local_98._8_4_ ^ 2147483648;
                local_98._12_4_ = local_98._12_4_ ^ 2147483648;
            }
            fVar11 = local_3c - local_50;
            local_3c = local_3c - local_4c;
            this_00 = &field_744;
            if (param_16 == 1) {
                local_88._0_8_ = local_88._0_8_ ^ 9223372039002259456;
                local_88._8_4_ = local_88._8_4_ ^ 2147483648;
                local_88._12_4_ = local_88._12_4_ ^ 2147483648;
            }
            uVar1 = field_768;
            field_768 = uVar1 + 1;
            local_70._0_4_ = fVar11;
            paVar6 = (array<float, 2ul>*)Array<GUIManagerVertexBase<float>, eastl::allocator>::operator[](
                (Array<GUIManagerVertexBase<float>, eastl::allocator>*)this_00, (ulong)uVar1);
            local_4c = local_48;
            local_50 = local_44;
            pfVar7 = (float*)std::array<float, 2ul>::operator[](paVar6, 0);
            *pfVar7 = local_54;
            pfVar7 = (float*)std::array<float, 2ul>::operator[](paVar6, 1);
            *pfVar7 = local_70._0_4_;
            *(undefined4*)(paVar6 + 8) = param_5;
            ((paVar6 + 12))->Set(local_40, local_34);
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 20), 0);
            *pfVar7 = local_4c;
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 20), 1);
            *pfVar7 = local_50;
            puVar8 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 28), 0);
            *puVar8 = local_98._0_4_;
            puVar8 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 28), 1);
            *puVar8 = local_88._0_4_;
            uVar1 = field_768;
            field_768 = uVar1 + 1;
            paVar6 = (array<float, 2ul>*)Array<GUIManagerVertexBase<float>, eastl::allocator>::operator[](
                (Array<GUIManagerVertexBase<float>, eastl::allocator>*)this_00, (ulong)uVar1);
            local_4c = local_48;
            local_50 = local_44;
            pfVar7 = (float*)std::array<float, 2ul>::operator[](paVar6, 0);
            *pfVar7 = local_9c;
            pfVar7 = (float*)std::array<float, 2ul>::operator[](paVar6, 1);
            *pfVar7 = local_70._0_4_;
            *(undefined4*)(paVar6 + 8) = param_5;
            ((paVar6 + 12))->Set(local_38, local_34);
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 20), 0);
            *pfVar7 = local_4c;
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 20), 1);
            *pfVar7 = local_50;
            puVar8 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 28), 0);
            *puVar8 = local_98._0_4_;
            puVar8 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 28), 1);
            *puVar8 = local_88._0_4_;
            uVar1 = field_768;
            field_768 = uVar1 + 1;
            paVar6 = (array<float, 2ul>*)Array<GUIManagerVertexBase<float>, eastl::allocator>::operator[](
                (Array<GUIManagerVertexBase<float>, eastl::allocator>*)this_00, (ulong)uVar1);
            local_70 = (Texture*)CONCAT44(local_70._4_4_, local_48);
            local_34 = local_44;
            pfVar7 = (float*)std::array<float, 2ul>::operator[](paVar6, 0);
            *pfVar7 = local_9c;
            pfVar7 = (float*)std::array<float, 2ul>::operator[](paVar6, 1);
            *pfVar7 = local_3c;
            *(undefined4*)(paVar6 + 8) = param_5;
            ((paVar6 + 12))->Set(local_38, (param_11)._0_4_);
            puVar8 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 20), 0);
            *puVar8 = local_70._0_4_;
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 20), 1);
            *pfVar7 = local_34;
            puVar8 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 28), 0);
            *puVar8 = local_98._0_4_;
            puVar8 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 28), 1);
            *puVar8 = local_88._0_4_;
            uVar1 = field_768;
            field_768 = uVar1 + 1;
            paVar6 = (array<float, 2ul>*)Array<GUIManagerVertexBase<float>, eastl::allocator>::operator[](
                (Array<GUIManagerVertexBase<float>, eastl::allocator>*)this_00, (ulong)uVar1);
            local_34 = local_48;
            local_38 = local_44;
            pfVar7 = (float*)std::array<float, 2ul>::operator[](paVar6, 0);
            *pfVar7 = local_54;
            pfVar7 = (float*)std::array<float, 2ul>::operator[](paVar6, 1);
            *pfVar7 = local_3c;
            *(undefined4*)(paVar6 + 8) = param_5;
            ((paVar6 + 12))->Set(local_40, (param_11)._0_4_);
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 20), 0);
            *pfVar7 = local_34;
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 20), 1);
            *pfVar7 = local_38;
            puVar8 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 28), 0);
            *puVar8 = local_98._0_4_;
            puVar8 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar6 + 28), 1);
            *puVar8 = local_88._0_4_;
            field_80 = field_80 + 1;
        }
    }

    // 0x1008f0510, 1584 bytes, placed by class name
    // GUIManager::AddElementPreciseInnerClipped(float, float, float, float, float, float, float, float, unsigned int, float, float, float, float, render::Texture const*, render::Texture const*, bool, GUIManager::BlendMode)
    void GUIManager::AddElementPreciseInnerClipped(float param_1, undefined4 param_2, float param_3, float param_4,
                                                   float param_5, float param_6, float param_7, float param_8,
                                                   GUIManager* this, undefined4 param_9, Texture* param_14,
                                                   Texture* param_15, undefined1 param_16, int param_14_00,
                                                   float param_10, float param_11, float param_12, float param_13) {
        undefined1* this_00;
        uint uVar1;
        char cVar2;
        int* piVar3;
        array<float, 2ul>* paVar4;
        float* pfVar5;
        undefined4* puVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float local_88;
        int local_6c;
        undefined1 local_68[16];
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        local_68._0_4_ = param_2;
        local_6c = param_14_00;
        local_48 = param_5;
        local_44 = param_6;
        local_40 = param_3;
        local_3c = param_4;
        local_38 = param_8;
        local_34 = param_1;
        cVar2 = (&field_40)->empty();
        if (cVar2 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1111,
                      "Ensure Begin() is called with a valid DrawCallState before submitting GUI elements to draw");
        }
        piVar3 = (int*)field_0->GetPixelBuffer();
        if (piVar3[2] != -1) {
            fVar7 = (float)piVar3[2];
            if ((((fVar7 < local_34) && (fVar7 < local_40)) && (fVar7 < param_7)) && (fVar7 < local_48)) {
                return;
            }
            fVar7 = (float)*piVar3;
            if (((local_34 < fVar7) && (local_40 < fVar7)) && ((param_7 < fVar7 && (local_48 < fVar7)))) {
                return;
            }
            fVar7 = (float)piVar3[3];
            if (((fVar7 < (float)local_68._0_4_) && (fVar7 < local_3c)) && ((fVar7 < local_38 && (fVar7 < local_44)))) {
                return;
            }
            fVar7 = (float)piVar3[1];
            if (((((float)local_68._0_4_ < fVar7) && (local_3c < fVar7)) && (local_38 < fVar7)) && (local_44 < fVar7)) {
                return;
            }
        }
        if ((field_84 <= field_80) ||
            (cVar2 = IsStateChangeNeeded(this, &local_6c, 0, param_9, param_14, param_15, param_16), cVar2 != '\0')) {
            Render(this, (SamplerState*)0);
            SetBatchMode(this, 0);
            if (param_14 != (Texture*)0) {
                cVar2 = param_14->IsCreated();
                if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("texture->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1136, "GUIManager texture being added that has no native resources");
                }
                field_88 = (Mixer*)param_14;
            }
            field_108 = local_6c;
            if ((param_15 != (Texture*)0) && (cVar2 = param_15->IsCreated(), cVar2 == '\0')) {
                /* WARNING: Subroutine does not return */
                LogAssert("!textureMask || textureMask->IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                          "GUIManager.cpp",
                          1140, "GUIManager textureMask being added that has no native resources");
            }
            field_96 = param_15;
            field_104 = param_16;
        }
        if (param_14 == (Texture*)0) {
            param_10 = -65000.0;
            param_12 = -65000.0;
            param_11 = -65000.0;
            param_13 = -65000.0;
        }
        local_4c = (float)(int)field_36;
        local_88 = param_12 - param_10;
        if (local_88 < 0.0) {
            local_88 = -local_88;
            std::swap<float>(&param_10, &param_12);
        }
        fVar7 = local_4c - local_38;
        fVar8 = local_4c - (float)local_68._0_4_;
        local_44 = local_4c - local_44;
        local_4c = local_4c - local_3c;
        this_00 = &field_744;
        fVar9 = param_13 - param_11;
        if (0.0 <= fVar9) {
            local_68 = ZEXT416((uint)fVar9);
        } else {
            local_68._4_4_ = 2147483648;
            local_68._0_4_ = -fVar9;
            local_68._8_4_ = 2147483648;
            local_68._12_4_ = 2147483648;
            std::swap<float>(&param_11, &param_13);
        }
        local_88 = -local_88;
        local_68._0_8_ = local_68._0_8_ ^ 9223372039002259456;
        local_68._8_4_ = local_68._8_4_ ^ 2147483648;
        local_68._12_4_ = local_68._12_4_ ^ 2147483648;
        uVar1 = field_768;
        field_768 = uVar1 + 1;
        paVar4 = (array<float, 2ul>*)Array<GUIManagerVertexBase<float>, eastl::allocator>::operator[](
            (Array<GUIManagerVertexBase<float>, eastl::allocator>*)this_00, (ulong)uVar1);
        local_38 = param_10;
        local_3c = param_11;
        pfVar5 = (float*)std::array<float, 2ul>::operator[](paVar4, 0);
        *pfVar5 = local_34;
        pfVar5 = (float*)std::array<float, 2ul>::operator[](paVar4, 1);
        *pfVar5 = fVar8;
        *(undefined4*)(paVar4 + 8) = param_9;
        ((paVar4 + 12))->Set(local_38, local_3c);
        pfVar5 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar4 + 20), 0);
        *pfVar5 = local_38;
        pfVar5 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar4 + 20), 1);
        *pfVar5 = local_3c;
        pfVar5 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar4 + 28), 0);
        *pfVar5 = local_88;
        puVar6 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar4 + 28), 1);
        *puVar6 = local_68._0_4_;
        uVar1 = field_768;
        field_768 = uVar1 + 1;
        paVar4 = (array<float, 2ul>*)Array<GUIManagerVertexBase<float>, eastl::allocator>::operator[](
            (Array<GUIManagerVertexBase<float>, eastl::allocator>*)this_00, (ulong)uVar1);
        local_38 = param_12;
        local_34 = param_11;
        local_3c = param_10;
        pfVar5 = (float*)std::array<float, 2ul>::operator[](paVar4, 0);
        *pfVar5 = local_40;
        pfVar5 = (float*)std::array<float, 2ul>::operator[](paVar4, 1);
        *pfVar5 = local_4c;
        *(undefined4*)(paVar4 + 8) = param_9;
        ((paVar4 + 12))->Set(local_38, local_34);
        pfVar5 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar4 + 20), 0);
        *pfVar5 = local_3c;
        pfVar5 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar4 + 20), 1);
        *pfVar5 = local_34;
        pfVar5 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar4 + 28), 0);
        *pfVar5 = local_88;
        puVar6 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar4 + 28), 1);
        *puVar6 = local_68._0_4_;
        uVar1 = field_768;
        field_768 = uVar1 + 1;
        paVar4 = (array<float, 2ul>*)Array<GUIManagerVertexBase<float>, eastl::allocator>::operator[](
            (Array<GUIManagerVertexBase<float>, eastl::allocator>*)this_00, (ulong)uVar1);
        local_3c = param_12;
        local_38 = param_13;
        local_40 = param_10;
        local_34 = param_11;
        pfVar5 = (float*)std::array<float, 2ul>::operator[](paVar4, 0);
        *pfVar5 = local_48;
        pfVar5 = (float*)std::array<float, 2ul>::operator[](paVar4, 1);
        *pfVar5 = local_44;
        *(undefined4*)(paVar4 + 8) = param_9;
        ((paVar4 + 12))->Set(local_3c, local_38);
        pfVar5 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar4 + 20), 0);
        *pfVar5 = local_40;
        pfVar5 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar4 + 20), 1);
        *pfVar5 = local_34;
        pfVar5 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar4 + 28), 0);
        *pfVar5 = local_88;
        puVar6 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar4 + 28), 1);
        *puVar6 = local_68._0_4_;
        uVar1 = field_768;
        field_768 = uVar1 + 1;
        paVar4 = (array<float, 2ul>*)Array<GUIManagerVertexBase<float>, eastl::allocator>::operator[](
            (Array<GUIManagerVertexBase<float>, eastl::allocator>*)this_00, (ulong)uVar1);
        local_34 = param_10;
        local_48 = param_13;
        local_40 = param_11;
        pfVar5 = (float*)std::array<float, 2ul>::operator[](paVar4, 0);
        *pfVar5 = param_7;
        pfVar5 = (float*)std::array<float, 2ul>::operator[](paVar4, 1);
        *pfVar5 = fVar7;
        *(undefined4*)(paVar4 + 8) = param_9;
        ((paVar4 + 12))->Set(local_34, local_48);
        pfVar5 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar4 + 20), 0);
        *pfVar5 = local_34;
        pfVar5 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar4 + 20), 1);
        *pfVar5 = local_40;
        pfVar5 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar4 + 28), 0);
        *pfVar5 = local_88;
        puVar6 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(paVar4 + 28), 1);
        *puVar6 = local_68._0_4_;
        field_80 = field_80 + 1;
    }

    // 0x1008f0b60, 2032 bytes, placed by class name
    // GUIManager::AddElementRotatedTiled(int, int, int, int, unsigned int, float, float, float, float, render::Texture const*, GUIManager::BlendMode, float, int, int)
    void GUIManager::AddElementRotatedTiled(
        float param_6, float param_7, float param_8, float param_9, float param_5_00, GUIManager* this,
        type* param_7_00, int param_2, float param_3, float param_4, uint param_5,
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* param_10,
        undefined4 param_13, int param_14, int param_15) {
        uint uVar1;
        uint* puVar2;
        long lVar3;
        vector* pvVar4;
        float* pfVar5;
        Layout* pLVar6;
        Vector2T<int>* pVVar7;
        int iVar8;
        type* ptVar9;
        Vector2T<int>* this_00;
        int iVar10;
        float fVar11;
        float fVar12;
        Matrix22T<float> local_d0[16];
        Vector2T<int> local_b8[8];
        uint local_ac;
        Vector2T<int> local_a8[8];
        Vector2T<int> local_a0[8];
        Vector2T<int> local_98[8];
        Vector2T<int> local_90[8];
        float local_78;
        float local_74;
        float local_70;
        float local_6c;
        float local_68;
        float local_64;
        float local_60;
        float local_5c;
        ulong local_58;
        float local_50;
        float local_4c;
        undefined8 local_48;
        undefined4 uStack_40;
        undefined4 uStack_3c;
        float local_38;
        float local_34;

        if (m_skipTiledElements == '\0' && m_skipRotatedElements == '\0') {
            fVar11 = SUB84(param_7_00, 0);
            local_6c = param_3;
            local_68 = param_4;
            local_5c = param_5_00;
            puVar2 = (uint*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(param_10);
            local_34 = (float)*puVar2;
            local_50 = (float)::abs(param_8 - param_6);
            local_50 = local_50 * local_34;
            lVar3 = eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(param_10);
            local_34 = (float)*(uint*)(lVar3 + 4);
            local_4c = (float)::abs(param_9 - param_7);
            local_4c = local_4c * local_34;
            math::Vector2T<int>::Vector2T(local_a8);
            if (param_14 == -999999) {
                local_34 = local_50 * 0.5 + (float)(int)fVar11;
                pvVar4 = local_a8->SSOBeginPtr(param_7_00);
                *(float*)pvVar4 = local_34;
                local_34 = local_4c * 0.5 + (float)param_2;
            } else {
                local_34 = (float)param_14;
                pvVar4 = local_a8->SSOBeginPtr(param_7_00);
                *(float*)pvVar4 = local_34;
                local_34 = (float)param_15;
            }
            this_00 = local_a8;
            local_60 = (float)param_2;
            pfVar5 = (float*)this_00->y();
            *pfVar5 = local_34;
            math::Vector2T<int>::Vector2T(local_a0);
            math::Vector2T<int>::Vector2T(local_b8);
            math::Vector2T<int>::Vector2T(local_98);
            math::Vector2T<int>::Vector2T(local_90);
            local_38 = (float)(int)fVar11;
            local_64 = fVar11;
            pvVar4 = this_00->SSOBeginPtr(param_7_00);
            local_34 = local_38 - *(float*)pvVar4;
            pvVar4 = local_a0->SSOBeginPtr(param_7_00);
            *(float*)pvVar4 = local_34;
            local_34 = (float)param_2;
            pfVar5 = (float*)this_00->y();
            local_48._0_4_ = (GUIManager*)(local_34 - *pfVar5);
            pfVar5 = (float*)local_a0->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar5 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)(local_50 + local_38);
            pvVar4 = this_00->SSOBeginPtr(param_7_00);
            local_58._0_4_ = (float)(GUIManager*)local_48 - *(float*)pvVar4;
            pvVar4 = local_b8->SSOBeginPtr(param_7_00);
            *(float*)pvVar4 = (float)local_58;
            pfVar5 = (float*)this_00->y();
            local_58._0_4_ = local_34 - *pfVar5;
            pfVar5 = (float*)local_b8->y();
            *pfVar5 = (float)local_58;
            pvVar4 = this_00->SSOBeginPtr(param_7_00);
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *(float*)pvVar4);
            pvVar4 = local_90->SSOBeginPtr(param_7_00);
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pvVar4 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)(local_4c + local_34);
            pfVar5 = (float*)this_00->y();
            local_58._0_4_ = (float)(GUIManager*)local_48 - *pfVar5;
            pfVar5 = (float*)local_90->y();
            *pfVar5 = (float)local_58;
            pvVar4 = this_00->SSOBeginPtr(param_7_00);
            local_58 = CONCAT44(local_58._4_4_, local_38 - *(float*)pvVar4);
            pvVar4 = local_98->SSOBeginPtr(param_7_00);
            *(float*)pvVar4 = (float)local_58;
            pfVar5 = (float*)this_00->y();
            local_48._0_4_ = (GUIManager*)((float)(GUIManager*)local_48 - *pfVar5);
            pfVar5 = (float*)local_98->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar5 = (GUIManager*)local_48;
            math::SinCos(&local_74, &local_70, local_5c);
            math::Matrix22T<float>::Matrix22T(local_d0);
            local_48._0_4_ = (GUIManager*)local_70;
            local_58 = 0;
            ptVar9 = (type*)0;
            pLVar6 = (Layout*)math::Matrix22T<float>::operator[](local_d0, 0);
            pvVar4 = eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar9);
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pvVar4 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)-local_74;
            local_48._4_4_ = 2147483648;
            uStack_40 = 2147483648;
            uStack_3c = 2147483648;
            pVVar7 = (Vector2T<int>*)math::Matrix22T<float>::operator[](local_d0, 0);
            pfVar5 = (float*)pVVar7->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar5 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)local_74;
            ptVar9 = (type*)&DAT_00000001;
            pLVar6 = (Layout*)math::Matrix22T<float>::operator[](local_d0, 1);
            pvVar4 = eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar9);
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pvVar4 = (GUIManager*)local_48;
            local_48._0_4_ = (GUIManager*)local_70;
            pVVar7 = (Vector2T<int>*)math::Matrix22T<float>::operator[](local_d0, 1);
            pfVar5 = (float*)pVVar7->y();
            /* WARNING: Store size is inaccurate */
            *(GUIManager**)pfVar5 = (GUIManager*)local_48;
            math::Vector2T<float>::operator*=((Vector2T<float>*)this_00, (Matrix22T*)local_d0);
            math::Vector2T<float>::operator*=((Vector2T<float>*)local_a0, (Matrix22T*)local_d0);
            math::Vector2T<float>::operator*=((Vector2T<float>*)local_b8, (Matrix22T*)local_d0);
            math::Vector2T<float>::operator*=((Vector2T<float>*)local_90, (Matrix22T*)local_d0);
            math::Vector2T<float>::operator*=((Vector2T<float>*)local_98, (Matrix22T*)local_d0);
            math::Vector2T<float>::operator+=((Vector2T<float>*)local_a0, (Vector2T*)this_00);
            math::Vector2T<float>::operator+=((Vector2T<float>*)local_b8, (Vector2T*)this_00);
            math::Vector2T<float>::operator+=((Vector2T<float>*)local_98, (Vector2T*)this_00);
            pVVar7 = this_00;
            math::Vector2T<float>::operator+=((Vector2T<float>*)local_90, (Vector2T*)this_00);
            pvVar4 = local_a0->SSOBeginPtr(pVVar7);
            /* WARNING: Load size is inaccurate */
            local_48._0_4_ = *(GUIManager**)pvVar4;
            pvVar4 = local_b8->SSOBeginPtr(pVVar7);
            local_48._0_4_ = (GUIManager*)eastl::min<float>((float)(GUIManager*)local_48, *(float*)pvVar4);
            pvVar4 = local_98->SSOBeginPtr(pVVar7);
            local_5c = *(float*)pvVar4;
            pvVar4 = local_90->SSOBeginPtr(pVVar7);
            fVar11 = (float)eastl::min<float>(local_5c, *(float*)pvVar4);
            fVar11 = (float)eastl::min<float>((float)(GUIManager*)local_48, fVar11);
            local_38 = fVar11 - local_38;
            pvVar4 = this_00->SSOBeginPtr(pVVar7);
            *(float*)pvVar4 = local_38;
            pfVar5 = (float*)local_a0->y();
            local_38 = *pfVar5;
            pfVar5 = (float*)local_b8->y();
            local_38 = (float)eastl::min<float>(local_38, *pfVar5);
            pfVar5 = (float*)local_98->y();
            /* WARNING: Load size is inaccurate */
            local_48._0_4_ = *(GUIManager**)pfVar5;
            pfVar5 = (float*)local_90->y();
            fVar11 = (float)eastl::min<float>((float)(GUIManager*)local_48, *pfVar5);
            fVar11 = (float)eastl::min<float>(local_38, fVar11);
            local_34 = fVar11 - local_34;
            pfVar5 = (float*)this_00->y();
            *pfVar5 = local_34;
            math::Vector2T<float>::operator-=((Vector2T<float>*)local_a0, (Vector2T*)this_00);
            math::Vector2T<float>::operator-=((Vector2T<float>*)local_b8, (Vector2T*)this_00);
            math::Vector2T<float>::operator-=((Vector2T<float>*)local_90, (Vector2T*)this_00);
            math::Vector2T<float>::operator-=((Vector2T<float>*)local_98, (Vector2T*)this_00);
            iVar8 = (int)local_6c - (int)local_64;
            iVar10 = (int)local_68 - (int)local_60;
            local_34 = local_70;
            local_48._0_4_ = (GUIManager*)::abs(local_70 * local_50);
            local_38 = local_74;
            local_78 = (float)::abs(local_74 * local_4c);
            local_78 = local_78 + (float)(GUIManager*)local_48;
            local_34 = (float)::abs(local_34 * local_4c);
            local_60 = (float)::abs(local_38 * local_50);
            local_60 = local_60 + local_34;
            fVar11 = (float)ceil((float)iVar8 / local_78);
            fVar12 = (float)ceil((float)iVar10 / local_60);
            if (0 < (int)fVar11) {
                local_ac = (int)fVar11;
                do {
                    if (0 < (int)fVar12) {
                        local_34 = (float)(int)(float)local_58 * local_78;
                        iVar8 = 0;
                        do {
                            pvVar4 = local_a0->SSOBeginPtr(this_00);
                            local_48._0_4_ = (GUIManager*)(*(float*)pvVar4 + local_34);
                            pfVar5 = (float*)local_a0->y();
                            local_38 = (float)iVar8 * local_60;
                            local_50 = *pfVar5 + local_38;
                            pvVar4 = local_b8->SSOBeginPtr(this_00);
                            local_4c = *(float*)pvVar4 + local_34;
                            pfVar5 = (float*)local_b8->y();
                            local_6c = *pfVar5 + local_38;
                            pvVar4 = local_90->SSOBeginPtr(this_00);
                            local_68 = *(float*)pvVar4 + local_34;
                            pfVar5 = (float*)local_90->y();
                            local_64 = *pfVar5 + local_38;
                            pvVar4 = local_98->SSOBeginPtr(this_00);
                            local_5c = *(float*)pvVar4 + local_34;
                            pfVar5 = (float*)local_98->y();
                            this_00 = (Vector2T<int>*)(ulong)param_5;
                            AddElementInnerClipped((GUIManager*)local_48, local_50, local_4c, local_6c, local_68,
                                                   local_64, local_5c, local_38 + *pfVar5, this, this_00, param_10, 0,
                                                   0, param_13, param_6, param_7, param_8, param_9);
                            iVar8 = iVar8 + 1;
                        } while ((int)fVar12 != iVar8);
                    }
                    uVar1 = (int)local_58 + 1;
                    local_58 = (ulong)uVar1;
                } while (uVar1 != local_ac);
            }
        }
    }

    // 0x1008f1380, 560 bytes, placed by class name
    // GUIManager::AddElementIn3DSpace(math::Vector3T<float> const&, int, int, math::Matrix44T<float> const&, math::Matrix44T<float> const&, unsigned int, float, float, float, float, render::Texture*, GUIManager::BlendMode, bool, int, int)
    void GUIManager::AddElementIn3DSpace(GUIManager* param_1_00, undefined4 param_8, undefined4 param_9,
                                         undefined4 param_10, GUIManager* this, Vector3T* param_1, int param_2,
                                         int param_3, Matrix44T* param_4, Matrix44T* param_5, undefined4 param_6,
                                         undefined8 param_11, undefined4 param_13, char param_14, int param_15,
                                         int param_16) {
        float* pfVar1;
        vector* pvVar2;
        undefined4* puVar3;
        float fVar4;
        Vector4T<float> local_48[20];
        float local_34;

        math::Vector4T<float>::Vector4T(local_48, param_1, 1.0);
        math::Vector4T<float>::operator*=(local_48, param_5);
        math::Vector4T<float>::operator*=(local_48, param_4);
        if (param_14 == '\0') {
            pfVar1 = (float*)local_48->second();
            local_34 = *pfVar1;
            pvVar2 = local_48->SSOBeginPtr(param_4);
            *(float*)pvVar2 = *(float*)pvVar2 / local_34;
            pfVar1 = (float*)local_48->second();
        } else {
            pfVar1 = (float*)local_48->qw();
            local_34 = *pfVar1;
            pvVar2 = local_48->SSOBeginPtr(param_4);
            *(float*)pvVar2 = *(float*)pvVar2 / local_34;
            pfVar1 = (float*)local_48->qw();
        }
        local_34 = *pfVar1;
        pfVar1 = (float*)local_48->y();
        *pfVar1 = *pfVar1 / local_34;
        pvVar2 = local_48->SSOBeginPtr(param_4);
        fVar4 = (float)::abs(*(float*)pvVar2);
        if (fVar4 < 0.0005) {
            pvVar2 = local_48->SSOBeginPtr(param_4);
            *(undefined4*)pvVar2 = 0;
        }
        pfVar1 = (float*)local_48->y();
        fVar4 = (float)::abs(*pfVar1);
        if (fVar4 < 0.0005) {
            puVar3 = (undefined4*)local_48->y();
            *puVar3 = 0;
        }
        pvVar2 = local_48->SSOBeginPtr(param_4);
        local_34 = (float)(int)field_32 * (*(float*)pvVar2 * 0.5 + 0.5);
        pfVar1 = (float*)local_48->y();
        fVar4 = (float)(int)field_36 * (*pfVar1 * 0.5 + 0.5) - (float)param_16;
        AddElementInner(param_1_00._0_4_, param_8, param_9, param_10, this, (int)(local_34 - (float)param_15),
                        (int)fVar4, (int)((float)param_2 + (local_34 - (float)param_15)), (int)((float)param_3 + fVar4),
                        param_6, param_11, 0, 0, param_13, 1, 1);
    }

    // 0x1008f1630, 816 bytes, placed by class name
    // GUIManager::AddTriangleListInner(eastl::vector<float, eastl::allocator> const&, eastl::vector<int, eastl::allocator> const&, unsigned int, GUIManager::BlendMode)
    void GUIManager::AddTriangleListInner(vector<unsigned int, eastl::allocator>* param_1,
                                          vector<unsigned int, eastl::allocator>* param_2, undefined4 param_3,
                                          int param_5) {
        undefined1* this_00;
        undefined1* this_01;
        float fVar1;
        float fVar2;
        char cVar3;
        uint uVar4;
        int iVar5;
        long lVar6;
        ulong uVar7;
        int* piVar8;
        int* piVar9;
        ulong uVar10;
        ulong uVar11;
        array<short, 2ul>* this_02;
        undefined2* puVar12;
        float* pfVar13;
        ulong uVar14;
        uint uVar15;
        uint local_48;
        int local_3c;
        ushort local_32;

        local_3c = param_5;
        lVar6 = eastl::vector<unsigned int, eastl::allocator>::size(param_2);
        if (6148914691236517205 < (ulong)(lVar6 * -6148914691236517205)) {
            /* WARNING: Subroutine does not return */
            LogAssert("indices.size() % 3 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1195, (char*)0);
        }
        cVar3 = (&field_40)->empty();
        if (cVar3 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1196,
                      "Ensure Begin() is called with a valid DrawCallState before submitting GUI elements to draw");
        }
        uVar7 = eastl::vector<unsigned int, eastl::allocator>::size(param_1);
        uVar15 = (uint)(uVar7 >> 1) & 2147483647;
        uVar4 = eastl::vector<unsigned int, eastl::allocator>::size(param_2);
        cVar3 = (field_1656, uVar15, uVar4)->HasRoom();
        if (cVar3 != '\0') {
            cVar3 = IsStateChangeNeeded(this, &local_3c, 1, param_3, 0, 0, 0);
            if (cVar3 == '\0')
                goto LAB_1008f173b;
        }
        Render(this, (SamplerState*)0);
        SetBatchMode(this, 1);
        field_108 = local_3c;
    LAB_1008f173b:
        this_00 = &field_1960;
        iVar5 = this_00->size();
        piVar8 = (int*)param_2->HeapBeginPtr();
        piVar9 = (int*)param_2->end();
        if (piVar8 != piVar9) {
            this_01 = &field_2080;
            do {
                uVar10 = this_01->size();
                uVar11 = this_01->capacity();
                if (uVar11 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_vertexDynamic.m_indexDataBuffer.size() < m_vertexDynamic.m_indexDataBuffer.capacity()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1212, (char*)0);
                }
                local_32 = (short)*piVar8 + (short)iVar5;
                this_01->push_back(&local_32);
                if (65535 < (uint)(*piVar8 + iVar5)) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("startIndex + index <= std::numeric_limits<uint16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1214, (char*)0);
                }
                piVar8 = piVar8 + 1;
            } while (piVar8 != piVar9);
        }
        iVar5 = eastl::vector<unsigned int, eastl::allocator>::size(param_2);
        field_80 = field_80 + iVar5;
        local_48 = (uint)uVar7;
        if (1 < local_48) {
            uVar7 = 1;
            if (1 < uVar15) {
                uVar7 = (ulong)uVar15;
            }
            uVar10 = 0;
            do {
                pfVar13 = (float*)eastl::vector<float, eastl::allocator>::operator[](
                    (vector<float, eastl::allocator>*)param_1, uVar10);
                fVar1 = *pfVar13;
                pfVar13 = (float*)eastl::vector<float, eastl::allocator>::operator[](
                    (vector<float, eastl::allocator>*)param_1, uVar10 + 1);
                uVar4 = field_36;
                fVar2 = *pfVar13;
                uVar11 = this_00->size();
                uVar14 = this_00->capacity();
                if (uVar14 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                    LogAssert(
                        "m_vertexDynamic.m_vertexDataBuffer.size() < m_vertexDynamic.m_vertexDataBuffer.capacity()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                        "GUIManager.cpp",
                        1227, (char*)0);
                }
                this_00->push_back_uninitialized();
                this_02 = (array<short, 2ul>*)this_00->back();
                puVar12 = (undefined2*)std::array<short, 2ul>::operator[](this_02, 0);
                *puVar12 = (short)(int)fVar1;
                puVar12 = (undefined2*)std::array<short, 2ul>::operator[](this_02, 1);
                *puVar12 = (short)(int)((float)(int)uVar4 - fVar2);
                *(undefined4*)(this_02 + 4) = param_3;
                ((this_02 + 8))->Set(-65000.0, -65000.0);
                ((this_02 + 16))->SetToZero();
                ((this_02 + 24))->SetToOne();
                uVar10 = uVar10 + 2;
            } while (uVar7 * 2 != uVar10);
        }
    }

    // 0x1008f1bd0, 1168 bytes, placed by class name
    // GUIManager::AddLineIn3DSpace(math::Vector3T<float> const&, math::Vector3T<float> const&, float, math::Matrix44T<float> const&, math::Matrix44T<float> const&, unsigned int, GUIManager::BlendMode, bool)
    void GUIManager::AddLineIn3DSpace(float param_3, GUIManager* this, Vector3T* param_1, Vector3T* param_2,
                                      Matrix44T* param_4, Matrix44T* param_5, undefined4 param_6, undefined4 param_8,
                                      char param_9) {
        float* pfVar2;
        Vector2T* pVVar3;
        vector* pvVar4;
        float fVar5;
        Vector4T<float> local_88[16];
        Point<float> local_78[8];
        Point<float> local_70[8];
        Vector2T<int> local_68[12];
        undefined8 local_58;
        undefined8 local_48;
        float local_34;

        if (!math::operator==(param_1, param_2)) {
            math::Vector4T<float>::Vector4T(local_88, param_1, 1.0);
            math::Vector4T<float>::operator*=(local_88, param_5);
            math::Vector4T<float>::operator*=(local_88, param_4);
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 3);
            local_34 = *pfVar2;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 0);
            *pfVar2 = *pfVar2 / local_34;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 3);
            local_34 = *pfVar2;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 1);
            *pfVar2 = *pfVar2 / local_34;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 3);
            local_34 = *pfVar2;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 2);
            *pfVar2 = *pfVar2 / local_34;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 0);
            local_34 = (float)(int)field_32 * (*pfVar2 * 0.5 + 0.5);
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 0);
            *pfVar2 = local_34;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 1);
            local_34 = (float)(int)field_36 * (*pfVar2 * 0.5 + 0.5);
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 1);
            *pfVar2 = local_34;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 0);
            /* WARNING: Load size is inaccurate */
            local_48._0_4_ = *(GUIManager**)pfVar2;
            local_34 = (float)(int)field_36;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 1);
            local_34 = local_34 - *pfVar2;
            local_88->Set(param_2, 1.0);
            math::Vector4T<float>::operator*=(local_88, param_5);
            math::Vector4T<float>::operator*=(local_88, param_4);
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 3);
            (param_2)._0_4_ = *pfVar2;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 0);
            *pfVar2 = *pfVar2 / (param_2)._0_4_;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 3);
            (param_2)._0_4_ = *pfVar2;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 1);
            *pfVar2 = *pfVar2 / (param_2)._0_4_;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 3);
            (param_2)._0_4_ = *pfVar2;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 2);
            *pfVar2 = *pfVar2 / (param_2)._0_4_;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 0);
            (param_2)._0_4_ = (float)(int)field_32 * (*pfVar2 * 0.5 + 0.5);
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 0);
            *pfVar2 = (param_2)._0_4_;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 1);
            (param_2)._0_4_ = (float)(int)field_36 * (*pfVar2 * 0.5 + 0.5);
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 1);
            *pfVar2 = (param_2)._0_4_;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 0);
            (param_2)._0_4_ = *pfVar2;
            local_48._4_4_ = (float)(int)field_36;
            pfVar2 = (float*)math::Vector4T<float>::operator[](local_88, 1);
            fVar5 = local_48._4_4_ - *pfVar2;
            if (((float)(GUIManager*)local_48 != (param_2)._0_4_) || (local_34 != fVar5)) {
                if (param_9 != '\0') {
                    local_48._4_4_ = fVar5;
                    math::Point<float>::Point(local_78, (float)(GUIManager*)local_48, local_34);
                    math::Point<float>::Point(local_70, (param_2)._0_4_, local_48._4_4_);
                    math::Vector2T<int>::Vector2T(local_68);
                    local_58 = math::operator-((Vector2T*)local_70, (Vector2T*)local_78);
                    pVVar3 = (Vector2T*)local_58.Normalize();
                    math::Vector2T<float>::operator=((Vector2T<float>*)local_68, pVVar3);
                    local_34 = param_3 + -1.0;
                    local_58 = math::operator*(local_34, (Vector2T*)local_68);
                    math::Vector2T<float>::operator-=((Vector2T<float>*)local_78, (Vector2T*)&local_58);
                    local_58 = math::operator*(local_34, (Vector2T*)local_68);
                    pVVar3 = (Vector2T*)&local_58;
                    math::Vector2T<float>::operator+=((Vector2T<float>*)local_70, pVVar3);
                    pvVar4 = local_78->SSOBeginPtr(pVVar3);
                    /* WARNING: Load size is inaccurate */
                    local_48._0_4_ = *(GUIManager**)pvVar4;
                    pfVar2 = (float*)local_78->y();
                    local_34 = *pfVar2;
                    pvVar4 = local_70->SSOBeginPtr(pVVar3);
                    (param_2)._0_4_ = *(float*)pvVar4;
                    pfVar2 = (float*)local_70->y();
                    fVar5 = *pfVar2;
                }
                AddGeneralLine((GUIManager*)local_48, local_34, (param_2)._0_4_, fVar5, param_3, this, param_6, param_8,
                               0);
            }
        }
    }

    // 0x1008f2110, 1408 bytes, placed by class name
    // GUIManager::AddGeneralLine(float, float, float, float, float, unsigned int, GUIManager::BlendMode, bool)
    void GUIManager::AddGeneralLine(float param_1, float param_2, float param_3, float param_4, float param_5,
                                    GUIManager* this, int param_6, int param_8, char param_9) {
        undefined1* this_00;
        uint uVar1;
        char cVar2;
        int* piVar3;
        array<short, 2ul>* paVar4;
        undefined2* puVar5;
        Vector2T* pVVar6;
        vector* pvVar7;
        uint* puVar8;
        undefined4* puVar9;
        Vector2T<int>* pVVar10;
        int iVar11;
        float fVar12;
        Point<float> local_88[8];
        Point<float> local_80[8];
        Vector2T<int> local_78[8];
        undefined8 local_70;
        float local_68;
        undefined4 uStack_64;
        undefined4 uStack_60;
        undefined4 uStack_5c;
        int local_4c;
        float local_48;
        int local_44;
        undefined8 local_40;
        float local_34;

        if ((m_skipLineElements == '\0') && ((param_1 != param_3 || (param_2 != param_4)))) {
            local_68 = param_1;
            local_4c = param_8;
            local_48 = param_2;
            local_44 = param_6;
            local_34 = param_5;
            piVar3 = (int*)field_0->GetPixelBuffer();
            if ((piVar3[2] == -1) || (((((fVar12 = (float)piVar3[2], local_68 <= fVar12 || (param_3 <= fVar12)) &&
                                         (((float)*piVar3 <= local_68 || ((float)*piVar3 <= param_3)))) &&
                                        ((local_48 <= (float)piVar3[3] || (param_4 <= (float)piVar3[3])))) &&
                                       (((float)piVar3[1] <= local_48 || ((float)piVar3[1] <= param_4)))))) {
                if (param_9 == '\0') {
                    if ((field_76 == 2) && (((local_68 == param_3 || (local_48 == param_4)) && (local_34 == 1.0)))) {
                        AddColouredRectangle(this, (int)local_68, (int)local_48, (int)((1.0 - local_68) + param_3),
                                             (int)((1.0 - local_48) + param_4), local_44, param_8);
                        return;
                    }
                    cVar2 = IsStateChangeNeeded(this, &local_4c, 3, local_44, 0, 0, 0);
                    if ((cVar2 != '\0') || (local_34 != 1.0)) {
                        math::Point<float>::Point(local_88, local_68, local_48);
                        math::Point<float>::Point(local_80, param_3, param_4);
                        math::Vector2T<int>::Vector2T(local_78);
                        local_70 = math::operator-((Vector2T*)local_80, (Vector2T*)local_88);
                        pVVar6 = (Vector2T*)local_70.Normalize();
                        local_40 = math::operator*(local_34, pVVar6);
                        pVVar6 = (Vector2T*)&local_40;
                        math::Vector2T<float>::operator=((Vector2T<float>*)local_78, pVVar6);
                        pvVar7 = local_78->SSOBeginPtr(pVVar6);
                        local_34 = *(float*)pvVar7;
                        puVar8 = (uint*)local_78->y();
                        local_68 = (float)(*puVar8 ^ 2147483648);
                        uStack_64 = 2147483648;
                        uStack_60 = 2147483648;
                        uStack_5c = 2147483648;
                        pvVar7 = local_78->SSOBeginPtr(pVVar6);
                        *(float*)pvVar7 = local_68;
                        puVar9 = (undefined4*)local_78->y();
                        *puVar9 = local_34;
                        pVVar10 = local_78;
                        local_40 = math::operator-((Vector2T*)local_88, (Vector2T*)local_78);
                        pvVar7 = local_40.SSOBeginPtr(pVVar10);
                        local_34 = *(float*)pvVar7;
                        this_00 = &field_2200;
                        puVar9 = (undefined4*)eastl::vector<float, eastl::allocator>::operator[](
                            (vector<float, eastl::allocator>*)this_00, 0);
                        *puVar9 = local_34;
                        local_40 = math::operator-((Vector2T*)local_88, (Vector2T*)local_78);
                        puVar9 = (undefined4*)local_40.y();
                        local_34 = (float)*puVar9;
                        puVar9 = (undefined4*)eastl::vector<float, eastl::allocator>::operator[](
                            (vector<float, eastl::allocator>*)this_00, 1);
                        *puVar9 = local_34;
                        pVVar10 = local_78;
                        local_40 = math::operator-((Vector2T*)local_80, (Vector2T*)local_78);
                        pvVar7 = local_40.SSOBeginPtr(pVVar10);
                        local_34 = *(float*)pvVar7;
                        puVar9 = (undefined4*)eastl::vector<float, eastl::allocator>::operator[](
                            (vector<float, eastl::allocator>*)this_00, 2);
                        *puVar9 = local_34;
                        local_40 = math::operator-((Vector2T*)local_80, (Vector2T*)local_78);
                        puVar9 = (undefined4*)local_40.y();
                        local_34 = (float)*puVar9;
                        puVar9 = (undefined4*)eastl::vector<float, eastl::allocator>::operator[](
                            (vector<float, eastl::allocator>*)this_00, 3);
                        *puVar9 = local_34;
                        pVVar10 = local_78;
                        local_40 = math::operator+((Vector2T*)local_80, (Vector2T*)local_78);
                        pvVar7 = local_40.SSOBeginPtr(pVVar10);
                        local_34 = *(float*)pvVar7;
                        puVar9 = (undefined4*)eastl::vector<float, eastl::allocator>::operator[](
                            (vector<float, eastl::allocator>*)this_00, 4);
                        *puVar9 = local_34;
                        local_40 = math::operator+((Vector2T*)local_80, (Vector2T*)local_78);
                        puVar9 = (undefined4*)local_40.y();
                        local_34 = (float)*puVar9;
                        puVar9 = (undefined4*)eastl::vector<float, eastl::allocator>::operator[](
                            (vector<float, eastl::allocator>*)this_00, 5);
                        *puVar9 = local_34;
                        pVVar10 = local_78;
                        local_40 = math::operator+((Vector2T*)local_88, (Vector2T*)local_78);
                        pvVar7 = local_40.SSOBeginPtr(pVVar10);
                        local_34 = *(float*)pvVar7;
                        puVar9 = (undefined4*)eastl::vector<float, eastl::allocator>::operator[](
                            (vector<float, eastl::allocator>*)this_00, 6);
                        *puVar9 = local_34;
                        local_40 = math::operator+((Vector2T*)local_88, (Vector2T*)local_78);
                        puVar9 = (undefined4*)local_40.y();
                        local_34 = (float)*puVar9;
                        puVar9 = (undefined4*)eastl::vector<float, eastl::allocator>::operator[](
                            (vector<float, eastl::allocator>*)this_00, 7);
                        *puVar9 = local_34;
                        AddTriangleListInner(this, this_00, &m_quadIndices, local_44, local_4c);
                        return;
                    }
                }
                if (local_34 != 1.0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert(
                        "thickness == 1.f",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                        "GUIManager.cpp",
                        1471,
                        "Lines with a thickness that is not 1 cannot be rendered using native line rasterisation.");
                }
                if (((field_84 <= field_80) || (local_34 != *(float*)&field_112)) ||
                    (cVar2 = IsStateChangeNeeded(this, &local_4c, 3, local_44, 0, 0, 0), cVar2 != '\0')) {
                    Render(this, (SamplerState*)0);
                    SetBatchMode(this, 3);
                    *(float*)&field_112 = local_34;
                    field_108 = local_4c;
                }
                local_48 = (float)(int)field_36 - local_48;
                local_34 = (float)(int)field_36 - param_4;
                DoByteReorder<EndianSwap, int>(&local_44);
                uVar1 = field_1280;
                field_1280 = uVar1 + 1;
                paVar4 = (array<short, 2ul>*)Array<GUIManagerLineVertex, eastl::allocator>::operator[](
                    (Array<GUIManagerLineVertex, eastl::allocator>*)&field_1256, (ulong)uVar1);
                iVar11 = (int)local_68;
                puVar5 = (undefined2*)std::array<short, 2ul>::operator[](paVar4, 0);
                *puVar5 = (short)iVar11;
                iVar11 = (int)local_48;
                puVar5 = (undefined2*)std::array<short, 2ul>::operator[](paVar4, 1);
                *puVar5 = (short)iVar11;
                *(int*)(paVar4 + 4) = local_44;
                uVar1 = field_1280;
                field_1280 = uVar1 + 1;
                paVar4 = (array<short, 2ul>*)Array<GUIManagerLineVertex, eastl::allocator>::operator[](
                    (Array<GUIManagerLineVertex, eastl::allocator>*)&field_1256, (ulong)uVar1);
                iVar11 = (int)param_3;
                puVar5 = (undefined2*)std::array<short, 2ul>::operator[](paVar4, 0);
                *puVar5 = (short)iVar11;
                iVar11 = (int)local_34;
                puVar5 = (undefined2*)std::array<short, 2ul>::operator[](paVar4, 1);
                *puVar5 = (short)iVar11;
                *(int*)(paVar4 + 4) = local_44;
                field_80 = field_80 + 1;
            }
        }
    }

    // 0x1008f2c20, 208 bytes, placed by class name
    // GUIManager::OnEndFrame()
    void GUIManager::OnEndFrame() {
        char cVar1;
        undefined8 in_RAX;
        undefined4 uVar3;
        undefined8 uVar2;

        uVar3 = (undefined4)((ulong)in_RAX >> 32);
        if (field_80 != 0) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/gui/GUIManager.cpp",
                                1762, "GUIManager frame ended while %u elements are still waiting to be rendered",
                                CONCAT44(uVar3, field_80));
        }
        field_120->OnEndFrame();
        field_632->OnEndFrame();
        field_1144->OnEndFrame();
        field_1656->OnEndFrame();
        ResetBatchState(this);
        field_2256 = field_2252;
        field_2252 = 0;
        cVar1 = (&field_40)->empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1773, "GUIManager has leaked DrawCallStates, check Begin/End calls");
        }
    }

    // 0x1008f2d60, 48 bytes, placed by class name
    // GUIManager::RemoveCurrentTexture(render::Texture const*)
    void GUIManager::RemoveCurrentTexture(Texture* param_1) {
        if ((Texture*)field_88 == param_1) {
            if (field_80 != 0) {
                Render(this, (SamplerState*)0);
            }
            field_88 = (Mixer*)0;
        }
    }

    // 0x1008f2d90, 48 bytes, placed by class name
    // GUIManager::RemoveCurrentTextureMask(render::Texture const*)
    void GUIManager::RemoveCurrentTextureMask(Texture* param_1) {
        if (field_96 == param_1) {
            if (field_80 != 0) {
                Render(this, (SamplerState*)0);
            }
            field_96 = (Texture*)0;
        }
    }

    // 0x1008f3490, 48 bytes, placed by class name
    // GUIManager::SetProjectionOverride(int, int, unsigned int, unsigned int)
    void GUIManager::SetProjectionOverride(int param_1, int param_2, uint param_3, uint param_4) {
        m_projectionOverride = param_1;
        field_2236 = param_2;
        field_2240 = param_3;
        field_2244 = param_4;
        UpdateProjection(this, true);
    }

    // 0x1008f34c0, 32 bytes, placed by class name
    // GUIManager::ResetProjectionOverride()
    void GUIManager::ResetProjectionOverride() {
        m_projectionOverride = 4294967295;
        field_2236 = 4294967295;
        field_2240 = 4294967295;
        field_2244 = 4294967295;
        UpdateProjection(this, true);
    }

    // 0x100916e10, 160 bytes, placed by the data it initialises
    // ___cxx_global_var_init.91
    void ___cxx_global_var_init_91() {
        allocator local_40[8];
        mach_header* local_38;
        undefined8 uStack_30;
        undefined8 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_28 = 12884901890;
        local_38 = &__mh_execute_header;
        uStack_30 = 2;
        eastl::allocator::allocator(local_40, "EASTL vector");
        new (&GUIManager::m_quadIndices) eastl::vector<int, eastl::allocator>(&local_38, 6, local_40);
        ___cxa_atexit(PTR__vector_100ee6d78, &GUIManager::m_quadIndices, 4294967296);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::graphics

// 0x1008f0b40, 16 bytes, placed by neighbouring functions
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}

// 0x1008f0b50, 16 bytes, placed by neighbouring functions
// ceil(float)
void ceil(float param_1) {
    _ceilf();
}

namespace jag {
    // 0x1008e5780, 64 bytes, inline, placed by debug map only (low confidence)
    // bool FromString<StringView, unsigned int>(StringView const&, unsigned int&, int)
    bool FromString<StringView, unsigned int>(StringView* param_1, uint* param_2, int param_3) {
        int in_ECX;
        StringView SVar2;
        StringView local_30;

        new (&local_30) StringView(param_1);
        SVar2.field_8 = (uchar*)param_2;
        SVar2.field_0 = (ulong)&local_30;
        return (bool)FromText(SVar2, (uint*)(ulong)(uint)param_3, in_ECX);
    }

} // namespace jag
