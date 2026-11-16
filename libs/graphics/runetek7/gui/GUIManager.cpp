// libs/graphics/runetek7/gui/GUIManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "GUIManager.h"

namespace jag::graphics {
    // 0x100f44330
    int32_t GUIManager::m_enableRendering[4] = {1, 0, 0, 0};

    // 0x103bc0468, set at startup by ___cxx_global_var_init.91
    eastl::vector<int> GUIManager::m_quadIndices;

    // 0x103bc0488
    bool GUIManager::m_skipTiledElements;

    // 0x103bc0489
    bool GUIManager::m_skipRotatedElements;

    // 0x103bc048a
    int16_t GUIManager::m_skipLineElements;

    // 0x100024170: GUIManager::GetProjectionMode() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x1000fa830: GUIManager::GetLastViewportWidth() const has the same machine code as oldscape::graphics::NXTPixScreen::GetWidth() const

    // 0x1000fa840: GUIManager::GetLastViewportHeight() const has the same machine code as oldscape::graphics::NXTPixScreen::GetHeight() const

    // 0x1008e5070
    void GUIManager::AddTexturedRectangle(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, float arg6,
                                          float arg7, float arg8, float arg9, const render::Texture* texture,
                                          GUIManager::BlendMode blendMode) {
        AddElementInner(arg1, arg2, arg3 + arg1, arg4 + arg2, arg5, arg6, arg7, arg8, arg9, texture, nullptr, false,
                        blendMode, 1, 1);
    }

    // 0x1008e5710
    void GUIManager::AddHorizontalLine(int arg1, int arg2, int arg3, int arg4, unsigned int arg5,
                                       GUIManager::BlendMode blendMode) {
        AddColouredRectangle(arg1, arg2, arg3, arg4, arg5, blendMode);
    }

    // 0x1008eac50
    GUIManager::GUIManager()
        : field_0(nullptr), m_projectionMode(1), m_lastViewportWidth(4294967295), m_lastViewportHeight(4294967295),
          field_72(0), field_76(2), field_80(0), field_84(0), field_88(nullptr) {
        *(uint8_t(*)[16])((long)&field_88 + 1) = (uint8_t[16])0;
        field_108 = 1;
        field_112 = 1.0;
        new (&field_120) internal::VertexSetupRingArray<GUIManagerVertexBase<short>>();
        new (&field_632) internal::VertexSetupRingArray<GUIManagerVertexBase<float>>();
        new (&field_1144) internal::VertexSetupRingArray<GUIManagerLineVertex>();
        new (&field_1656) internal::VertexSetupDynamic();
        new (&field_2200) eastl::vector<float>();
        field_2232 = 4294967295;
        field_2236 = 4294967295;
        field_2240 = 4294967295;
        field_2244 = 4294967295;
        field_2248 = false;
        field_2252 = 0;
        field_2256 = 0;
        field_2200.resize(8);
        ((vector<render::DrawCallState>*)field_40.SSOBeginPtr())->reserve(8);
    }

    // 0x1008eaf00
    GUIManager::~GUIManager() {
        Destroy();
        field_2200.~vector();
        field_1656.~VertexSetupDynamic();
        field_1144.~VertexSetupRingArray();
        field_632.~VertexSetupRingArray();
        field_120.~VertexSetupRingArray();
        field_40.~stack();
    }

    // 0x1008eafb0
    void GUIManager::Destroy() {
        field_16.Remove(60);
        field_88 = nullptr;
        field_96 = nullptr;
        DestroyRenderingResources();
        m_lastViewportWidth = 4294967295;
        m_lastViewportHeight = 4294967295;
        ResetBatchState();
    }

    // 0x1008eb000
    uint8_t GUIManager::Initialise(RT7Core* rt7Core) {
        field_0 = rt7Core;
        CreateRenderingResources();
        uint8_t* this_00 = &field_16;
        this_00->Add(60);
        this_00->Add(70);
        this_00->Add(71);
        this_00->Add(81);
        this_00->Add(80);
        return 1;
    }

    // 0x1008eb060
    unsigned long GUIManager::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_38;

        auto pSVar2 = graphics::operator*(213);
        VertexElementDesc local_100 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(235);
        VertexElementDesc local_d8 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(237);
        VertexElementDesc local_b0 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(239);
        VertexElementDesc local_88 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(240);
        VertexElementDesc local_60 = pSVar2->GetVertexElementDesc(0);
        auto pVVar3 = local_100.data();
        uint8_t local_36 = field_648.Create(pVVar3, 5, nullptr, 0);
        int iVar1 = field_648.GetVertexStride(0);
        if (iVar1 != 36) {
            LogAssert(
                "m_vertexPreciseTriangle.m_vertexDeclaration.GetVertexStride() == sizeof(GUIManagerVertexPrecise)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                "GUIManager.cpp",
                1835, nullptr);
        }
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(208);
        VertexElementDesc local_2e0 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(235);
        VertexElementDesc local_2b8 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(237);
        VertexElementDesc local_290 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(239);
        VertexElementDesc local_268 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(240);
        VertexElementDesc local_240 = pSVar2->GetVertexElementDesc(0);
        pVVar3 = (VertexElementDesc*)local_2e0.data();
        uint8_t local_35 = field_136.Create(pVVar3, 5, nullptr, 0);
        iVar1 = field_136.GetVertexStride(0);
        if (iVar1 != 32) {
            LogAssert("m_vertexTriangle.m_vertexDeclaration.GetVertexStride() == sizeof(GUIManagerVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1853, nullptr);
        }
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(208);
        VertexElementDesc local_218 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(235);
        VertexElementDesc local_1f0 = pSVar2->GetVertexElementDesc(0);
        pVVar3 = (VertexElementDesc*)local_218.data();
        uint8_t local_34 = field_1160.Create(pVVar3, 2, nullptr, 0);
        iVar1 = field_1160.GetVertexStride(0);
        if (iVar1 != 8) {
            LogAssert("m_vertexLine.m_vertexDeclaration.GetVertexStride() == sizeof(GUIManagerLineVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1865, nullptr);
        }
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(208);
        VertexElementDesc local_1c8 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(235);
        VertexElementDesc local_1a0 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(237);
        VertexElementDesc local_178 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(239);
        VertexElementDesc local_150 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(240);
        VertexElementDesc local_128 = pSVar2->GetVertexElementDesc(0);
        pVVar3 = (VertexElementDesc*)local_1c8.data();
        uint8_t local_33 = field_1672.Create(pVVar3, 5, nullptr, 0);
        iVar1 = field_1672.GetVertexStride(0);
        if (iVar1 != 32) {
            LogAssert("m_vertexDynamic.m_vertexDeclaration.GetVertexStride() == sizeof(GUIManagerVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1883, nullptr);
        }
        field_744.set_max_size(512, 0);
        field_232.set_max_size(16384, 0);
        field_1256.set_max_size(32768, 0);
        field_1960.reserve(2048);
        local_100 = Array<unsigned short>();
        graphicutils::CreateQuadListIndices<unsigned short>(local_100, 4096);
        if (local_100.end() != 24576) {
            LogAssert("quadIndexData.size() == (MAX_QUADS * 6)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1895, nullptr);
        }
        auto pvVar5 = local_100.data();
        uint8_t local_32 = field_352.Create(49152, 0, pvVar5, 5123);
        pvVar5 = (void*)local_100.data();
        uint8_t local_31 = field_864.Create(1536, 0, pvVar5, 5123);
        field_2080.reserve(2048);
        render::InputAssemblerState::SetIndexBuffer(field_440, (unsigned int)&field_352);
        render::InputAssemblerState::SetIndexBuffer(field_952, (unsigned int)&field_864);
        uint8_t bVar6 = local_36 & local_35 & local_34 & local_33 & local_32 & local_31;
        field_440->SetFlags(1);
        field_952->SetFlags(1);
        field_1768->SetFlags(1);
        field_1464->SetFlags(1);
        ResetBatchState();
        return bVar6 & 4294967295;
    }

    // 0x1008eb5d0
    void GUIManager::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18;

        field_120.Destroy();
        field_632.Destroy();
        field_1144.Destroy();
        field_1656.Destroy();
    }

    // 0x1008eb630
    void GUIManager::ResetBatchState() {
        field_80 = 0;
        field_256 = 0;
        field_768 = 0;
        field_1280 = 0;
        field_1960.clear();
        field_2080.clear();
    }

    // 0x1008eb680
    void GUIManager::SetProjection(ProjectionMode projectionMode, int arg2, int arg3) {
        unsigned int uVar1 = m_lastViewportWidth;
        unsigned int uVar2 = m_lastViewportHeight;
        if (projectionMode == 2) {
            m_lastViewportWidth = arg2;
        } else {
            m_lastViewportWidth = field_0->GetInterfaceWidth();
            arg3 = field_0->GetInterfaceHeight();
        }
        m_lastViewportHeight = arg3;
        if (((uVar1 != m_lastViewportWidth) || (uVar2 != arg3)) || (m_projectionMode != projectionMode)) {
            m_projectionMode = projectionMode;
            UpdateProjection(true);
        }
    }

    // 0x1008eb750
    void GUIManager::UpdateProjection(bool arg1) {
        unsigned int uVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        unsigned int uVar6;
        unsigned int uVar7;
        unsigned int uVar8;
        float fVar9;
        Matrix44T<float> local_78;

        unsigned int uVar1 = m_lastViewportWidth;
        unsigned int uVar2 = m_lastViewportHeight;
        if (m_projectionMode == 1) {
            uVar4 = field_0->GetInterfaceWidth();
            m_lastViewportWidth = uVar4;
            uVar4 = field_0->GetInterfaceHeight();
            m_lastViewportHeight = uVar4;
        }
        if (((arg1) || (uVar1 != m_lastViewportWidth)) || (uVar2 != m_lastViewportHeight)) {
            uVar1 = m_lastViewportWidth;
            uVar2 = m_lastViewportHeight;
            uVar4 = field_2240;
            uVar8 = 0;
            uVar5 = uVar2;
            uVar7 = uVar1;
            if ((int)uVar4 < 0) {
                uVar6 = 0;
            } else {
                uVar6 = 0;
                if (m_projectionMode == 1) {
                    fVar9 = (float)(int)uVar1 / (float)(int)uVar2;
                    uVar3 = field_2244;
                    uVar6 = field_2232;
                    uVar8 = field_2236;
                    if (fVar9 <= (float)(int)uVar4 / (float)(int)uVar3) {
                        uVar5 = (unsigned int)((float)(int)uVar4 / fVar9);
                        uVar8 = uVar8 - (int)(uVar5 - uVar3) / 2;
                        uVar7 = uVar4;
                    } else {
                        uVar7 = (unsigned int)(fVar9 * (float)(int)uVar3);
                        uVar6 = uVar6 - (int)(uVar7 - uVar4) / 2;
                        uVar5 = uVar3;
                    }
                }
            }
            field_2248 =
                (int)uVar2 < (int)(uVar5 + uVar8) || ((int)uVar1 < (int)(uVar7 + uVar6) || (int)(uVar6 | uVar8) < 0);
            local_78 = math::Matrix44T<float>();
            math::Matrix44OrthographicLH<float>(local_78, (float)(int)uVar6, (float)(int)(uVar7 + uVar6),
                                                (float)(int)(m_lastViewportHeight - (uVar5 + uVar8)),
                                                (float)(int)(m_lastViewportHeight - uVar8), 0.1, 5000.0, 0);
            field_0->GetEffectManager()->GetEffect<SunlightDirectLighting>(80)->SetTransforms(local_78);
        }
    }

    // 0x1008eb8f0
    void GUIManager::Begin(const render::DrawCallState& drawCallState) {
        Render(nullptr);
        if (drawCallState.HaveManager() == '\0') {
            LogAssert("drawCallState.HasOutputMergerState()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      98, nullptr);
        }
        field_40.push(drawCallState);
        field_72 = 1;
    }

    // 0x1008eb950
    void GUIManager::Render(const render::SamplerState* samplerState) {
        uint8_t* puVar1;
        bool cVar2;
        unsigned int uVar3;
        int iVar4;
        long lVar5;
        DrawCallState* pDVar6;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        Layout* this_01;
        RT7Core* this_02;
        unsigned long uVar7;
        void* pvVar8;
        VertexBuffer* pVVar9;
        ShaderManager* pSVar10;
        shared_ptr<Shader>* psVar11;
        RenderPipelineState* pRVar12;
        Shader* pSVar13;
        ShaderProgram* pSVar14;
        Singleton<render::BuiltinStates>* this_04;
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;
        bool arg2;
        EffectList in_stack_ffffffffffffff68;
        DrawCallState local_88;
        eastl local_50;
        EffectManager* local_48;
        VertexDeclaration* local_40;
        RenderContext* local_38;

        if (field_80 != 0) {
            eastl::destruct<oldscape::highlight::NpcUID*>(&local_50);
            UpdateProjection(false);
            if ((field_88 == nullptr) || (field_76 == 3)) {
                puVar1 = &field_16;
                puVar1->Remove(60);
                puVar1->Remove(72);
                puVar1->Remove(73);
            } else {
                puVar1 = &field_16;
                puVar1->Add(60);
                uVar3 = field_88->GetStreamCountLastMix();
                puVar1->Set(70, 1 < uVar3);
                puVar1->Set(72, field_96 != nullptr);
                if (field_96 == nullptr) {
                    arg2 = false;
                } else {
                    arg2 = field_104 != false;
                }
                puVar1->Set(73, arg2);
            }
            this_04 = (Singleton<render::BuiltinStates>*)&field_16;
            local_40 = (VertexDeclaration*)this_04;
            this_04->Set(71, field_108 == 2);
            lVar5 = this_04->Instance();
            if (field_108 == 2) {
                lVar5 = this_04->Instance();
                playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar5 + 1904);
            } else if (field_108 == 1) {
                lVar5 = this_04->Instance();
                playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar5 + 1676);
            } else {
                playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar5 + 1524);
            }
            local_48 = field_0->GetEffectManager();
            cVar2 = field_40.empty();
            if (cVar2) {
                LogAssert("!m_drawCallStates.empty()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                          "GUIManager.cpp",
                          1594, "Ensure Begin() is called with a valid DrawCallState before Render()");
            }
            pDVar6 = (DrawCallState*)eastl::stack<render::DrawCallState, eastl::vector<render::DrawCallState>>::top();
            local_88 = render::DrawCallState(*pDVar6);
            this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                          local_88.GetRenderPipelineState();
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                       2>::compressed_pair_imp(this_00, playerDataComparator);
            pDVar6 = &local_88;
            this_01 = (Layout*)pDVar6->GetRenderPipelineState();
            lVar5 = pDVar6->Instance();
            this_01->SetHeapSize((lVar5 + 1080));
            pDVar6 = &local_88;
            this_02 = (RT7Core*)pDVar6->GetRenderPipelineState();
            lVar5 = pDVar6->Instance();
            this_02->SetRasteriserState((lVar5 + 1308));
            local_38 = (RenderContext*)this_02->GetRenderContext();
            switch (field_76) {
            case 0:
                uVar3 = field_80;
                uVar7 = field_744.end();
                if (uVar7 < uVar3) {
                    LogAssert("m_currentBatchSize <= m_vertexPreciseTriangle.m_vertexDataBuffer.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1608, nullptr);
                }
                if (field_80 * 4 != field_768) {
                    LogAssert("m_currentBatchSize * 4 == m_vertexPreciseTriangle.m_vertexDataBufferPos",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1609, nullptr);
                }
                if (m_enableRendering != '\0') {
                    uVar3 = field_80;
                    pvVar8 = (void*)field_744.data();
                    field_776.Update(0, uVar3 * 144, pvVar8);
                    pVVar9 = (VertexBuffer*)field_776.CurrentBuffer();
                    field_952->SetVertexStreamData(&field_648, pVVar9);
                    local_88.SetInputAssemblerState(field_952);
                    puVar1 = &field_632;
                    cVar2 = UpdateShader((shared_ptr<Shader>*)puVar1, (EffectList*)local_40);
                    if (cVar2) {
                        pSVar10 = field_0->GetShaderManager();
                        in_stack_ffffffffffffff68 = (EffectList)255;
                        psVar11 = (shared_ptr<Shader>*)ShaderManager::GetShader(
                            (ShaderType)pSVar10, *15, *local_48, *local_40, (unsigned char)&field_648, 0);
                        *puVar1 = *psVar11;
                    }
                    pRVar12 = (RenderPipelineState*)local_88.GetRenderPipelineState();
                    pSVar13 = (Shader*)(*puVar1).operator->();
                    pSVar14 = pSVar13->GetProgram();
                    pRVar12->SetShaderProgram(pSVar14);
                    pSVar13 = (Shader*)**puVar1;
                    local_48->SetShaderConstants(local_88, *local_38, *pSVar13, in_stack_ffffffffffffff68);
                    if ((field_88 != nullptr) && (cVar2 = local_40->Contains(60), cVar2)) {
                        pSVar13 = (Shader*)**puVar1;
                        DiffuseMap::SetShaderConstants(local_88, *local_38, *pSVar13, *field_88, 14, samplerState);
                    }
                    local_38->DrawIndexedPrimitives(&local_88, 4, field_80 * 6, 0);
                }
                break;
            case 1:
                uVar3 = field_80;
                puVar1 = &field_2080;
                uVar7 = puVar1->size();
                if (uVar7 != uVar3) {
                    LogAssert("m_currentBatchSize == m_vertexDynamic.m_indexDataBuffer.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1639, nullptr);
                }
                if (m_enableRendering != '\0') {
                    iVar4 = puVar1->size();
                    pvVar8 = (void*)puVar1->HeapBeginPtr();
                    field_2112.Update(0, iVar4 * 2, pvVar8);
                    iVar4 = field_1960.size();
                    pvVar8 = (void*)field_1960.HeapBeginPtr();
                    field_1992.Update(0, iVar4 << 5, pvVar8);
                    pVVar9 = (VertexBuffer*)field_1992.CurrentBuffer();
                    puVar1 = field_1768;
                    puVar1->SetVertexStreamData(&field_1672, pVVar9);
                    uVar3 = field_2112.CurrentBuffer();
                    render::InputAssemblerState::SetIndexBuffer(puVar1, uVar3);
                    local_88.SetInputAssemblerState(puVar1);
                    puVar1 = &field_1656;
                    cVar2 = UpdateShader((shared_ptr<Shader>*)puVar1, (EffectList*)local_40);
                    if (cVar2) {
                        pSVar10 = field_0->GetShaderManager();
                        in_stack_ffffffffffffff68 = (EffectList)255;
                        psVar11 = (shared_ptr<Shader>*)ShaderManager::GetShader(
                            (ShaderType)pSVar10, *15, *local_48, *local_40, (unsigned char)&field_1672, 0);
                        *puVar1 = *psVar11;
                    }
                    pRVar12 = (RenderPipelineState*)local_88.GetRenderPipelineState();
                    pSVar13 = (Shader*)(*puVar1).operator->();
                    pSVar14 = pSVar13->GetProgram();
                    pRVar12->SetShaderProgram(pSVar14);
                    pSVar13 = (Shader*)**puVar1;
                    local_48->SetShaderConstants(local_88, *local_38, *pSVar13, in_stack_ffffffffffffff68);
                    if ((field_88 != nullptr) && (cVar2 = local_40->Contains(60), cVar2)) {
                        pSVar13 = (Shader*)**puVar1;
                        DiffuseMap::SetShaderConstants(local_88, *local_38, *pSVar13, *field_88, 14, samplerState);
                        if ((field_96 != nullptr) && (cVar2 = local_40->Contains(72), cVar2)) {
                            pSVar13 = (Shader*)**puVar1;
                            DiffuseMap::SetShaderConstantsMask(local_88, *local_38, *pSVar13, *field_96, 15,
                                                               samplerState);
                        }
                    }
                    local_38->DrawIndexedPrimitives(&local_88, 4, field_80, 0);
                }
                break;
            case 2:
                uVar3 = field_80;
                uVar7 = field_232.end();
                if (uVar7 < uVar3) {
                    LogAssert("m_currentBatchSize <= m_vertexTriangle.m_vertexDataBuffer.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1675, nullptr);
                }
                if (field_80 * 4 != field_256) {
                    LogAssert("m_currentBatchSize * 4 == m_vertexTriangle.m_vertexDataBufferPos",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1676, nullptr);
                }
                if (m_enableRendering != '\0') {
                    uVar3 = field_80;
                    pvVar8 = (void*)field_232.data();
                    field_264.Update(0, uVar3 << 7, pvVar8);
                    pVVar9 = (VertexBuffer*)field_264.CurrentBuffer();
                    field_440->SetVertexStreamData(&field_136, pVVar9);
                    local_88.SetInputAssemblerState(field_440);
                    puVar1 = &field_120;
                    cVar2 = UpdateShader((shared_ptr<Shader>*)puVar1, (EffectList*)local_40);
                    if (cVar2) {
                        pSVar10 = field_0->GetShaderManager();
                        in_stack_ffffffffffffff68 = (EffectList)255;
                        psVar11 = (shared_ptr<Shader>*)ShaderManager::GetShader(
                            (ShaderType)pSVar10, *15, *local_48, *local_40, (unsigned char)&field_136, 0);
                        *puVar1 = *psVar11;
                    }
                    pRVar12 = (RenderPipelineState*)local_88.GetRenderPipelineState();
                    pSVar13 = (Shader*)(*puVar1).operator->();
                    pSVar14 = pSVar13->GetProgram();
                    pRVar12->SetShaderProgram(pSVar14);
                    pSVar13 = (Shader*)**puVar1;
                    local_48->SetShaderConstants(local_88, *local_38, *pSVar13, in_stack_ffffffffffffff68);
                    if ((field_88 != nullptr) && (cVar2 = local_40->Contains(60), cVar2)) {
                        pSVar13 = (Shader*)**puVar1;
                        DiffuseMap::SetShaderConstants(local_88, *local_38, *pSVar13, *field_88, 14, samplerState);
                        if ((field_96 != nullptr) && (cVar2 = local_40->Contains(72), cVar2)) {
                            pSVar13 = (Shader*)**puVar1;
                            DiffuseMap::SetShaderConstantsMask(local_88, *local_38, *pSVar13, *field_96, 15,
                                                               samplerState);
                        }
                    }
                    local_38->DrawIndexedPrimitives(&local_88, 4, field_80 * 6, 0);
                }
                break;
            case 3:
                uVar3 = field_80;
                uVar7 = field_1256.end();
                if (uVar7 < uVar3) {
                    LogAssert("m_currentBatchSize <= m_vertexLine.m_vertexDataBuffer.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1713, nullptr);
                }
                if (field_80 * 2 != field_1280) {
                    LogAssert("m_currentBatchSize * 2 == m_vertexLine.m_vertexDataBufferPos",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1714, nullptr);
                }
                if (m_enableRendering != '\0') {
                    uVar3 = field_80;
                    pvVar8 = (void*)field_1256.data();
                    field_1288.Update(0, uVar3 << 4, pvVar8);
                    pVVar9 = (VertexBuffer*)field_1288.CurrentBuffer();
                    field_1464->SetVertexStreamData(&field_1160, pVVar9);
                    local_88.SetInputAssemblerState(field_1464);
                    puVar1 = &field_1144;
                    cVar2 = UpdateShader((shared_ptr<Shader>*)puVar1, (EffectList*)local_40);
                    if (cVar2) {
                        pSVar10 = field_0->GetShaderManager();
                        in_stack_ffffffffffffff68 = (EffectList)255;
                        psVar11 = (shared_ptr<Shader>*)ShaderManager::GetShader(
                            (ShaderType)pSVar10, *16, *local_48, *local_40, (unsigned char)&field_1160, 0);
                        *puVar1 = *psVar11;
                    }
                    pRVar12 = (RenderPipelineState*)local_88.GetRenderPipelineState();
                    pSVar13 = (Shader*)(*puVar1).operator->();
                    pSVar14 = pSVar13->GetProgram();
                    pRVar12->SetShaderProgram(pSVar14);
                    pSVar13 = (Shader*)**puVar1;
                    local_48->SetShaderConstants(local_88, *local_38, *pSVar13, in_stack_ffffffffffffff68);
                    local_38->DrawPrimitives(local_88, 1, 0, field_80 * 2);
                }
            }
            local_38->SetInputAssemblerState(nullptr);
            pDVar6 = (DrawCallState*)eastl::stack<render::DrawCallState, eastl::vector<render::DrawCallState>>::top();
            pDVar6->GetOutputMergerState()->SetClearFlags(0);
            field_2252 = field_2252 + 1;
            ResetBatchState();
        }
    }

    // 0x1008ec340
    void GUIManager::End() {
        Render(nullptr);
        field_72 = 0;
        field_108 = 0;
        if (field_40.empty() != '\0') {
            LogAssert("!m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      112, nullptr);
        }
        eastl::stack<render::DrawCallState, eastl::vector<render::DrawCallState>>::pop();
    }

    // 0x1008ec4f0
    void GUIManager::AddColouredRectangle(int arg1, int arg2, int arg3, int arg4, unsigned int arg5,
                                          GUIManager::BlendMode blendMode) {
        AddElementInner(arg1, arg2, arg3 + arg1, arg4 + arg2, arg5, 0.0, 0.0, 1.0, 1.0, nullptr, nullptr, false,
                        blendMode, 1, 1);
    }

    // 0x1008ec540
    void GUIManager::AddElementInner(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, float arg6, float arg7,
                                     float arg8, float arg9, const render::Texture* texture1,
                                     const render::Texture* texture2, bool arg12, GUIManager::BlendMode blendMode,
                                     unsigned int arg14, unsigned int arg15) {
        uint16_t uVar11;
        uint16_t uVar12;
        float fVar15;
        float fVar16;
        uint8_t local_88[16];
        uint8_t local_78[16];
        Array<GUIManagerVertexBase<short>>* local_58;
        float local_3c;
        float local_38;

        bool cVar4 = field_40.empty();
        if (cVar4) {
            LogAssert("!m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      760,
                      "Ensure Begin() is called with a valid DrawCallState before submitting GUI elements to draw");
        }
        cVar4 = field_0->ClippingTest(arg1, arg2, arg3, arg4);
        if (!cVar4) {
            return;
        }
        if ((field_84 <= field_80) ||
            (cVar4 = IsStateChangeNeeded(blendMode, 2, arg5, texture1, texture2, arg12), cVar4)) {
            Render(nullptr);
            SetBatchMode(2);
            if (texture1 != nullptr) {
                cVar4 = texture1->IsCreated();
                if (!cVar4) {
                    LogAssert("texture->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              778, "GUIManager texture being added that has no native resources");
                }
                field_88 = texture1;
            }
            field_108 = blendMode;
            if ((texture2 != nullptr) && (cVar4 = texture2->IsCreated(), !cVar4)) {
                LogAssert("!textureMask || textureMask->IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                          "GUIManager.cpp",
                          782, "GUIManager textureMask being added that has no native resources");
            }
            field_96 = texture2;
            field_104 = arg12;
        }
        float local_4c = arg6;
        float local_34 = arg7;
        if ((arg14 == 1) && (arg15 == 1)) {
            local_38 = arg8;
            local_3c = arg9;
        } else {
            local_38 = arg8 + (arg8 - arg6) * (float)(arg14 - 1);
            local_3c = arg9 + (arg9 - arg7) * (float)(arg15 - 1);
        }
        auto piVar5 = field_0->GetPixelBuffer();
        int iVar1 = *piVar5;
        if (iVar1 != -1) {
            if (arg3 - arg1 < 1) {
            joined_r0x0001008ec798:
                uVar12 = (uint16_t)arg1;
            } else {
                fVar16 = (float)(arg3 - arg1);
                fVar15 = local_38 - local_4c;
                if (!(iVar1 - arg1 == 0 || iVar1 < arg1)) {
                    local_4c = local_4c + ((float)(iVar1 - arg1) * fVar15) / fVar16;
                    arg1 = iVar1;
                }
                uVar12 = (uint16_t)arg1;
                iVar1 = piVar5[2];
                if (arg3 <= iVar1)
                    goto joined_r0x0001008ec798;
                local_38 = local_38 - (fVar15 * (float)(arg3 - iVar1)) / fVar16;
                arg3 = iVar1;
            }
            if (0 < arg4 - arg2) {
                uVar11 = (uint16_t)arg3;
                fVar16 = (float)(arg4 - arg2);
                fVar15 = local_3c - local_34;
                iVar1 = piVar5[1];
                if (!(iVar1 - arg2 == 0 || iVar1 < arg2)) {
                    local_34 = local_34 + ((float)(iVar1 - arg2) * fVar15) / fVar16;
                    arg2 = iVar1;
                }
                iVar1 = piVar5[3];
                local_58 = (Array<GUIManagerVertexBase<short>>*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)arg2);
                if (iVar1 < arg4) {
                    local_3c = local_3c - (fVar15 * (float)(arg4 - iVar1)) / fVar16;
                    arg4 = iVar1;
                }
                goto joined_r0x0001008ec84c;
            }
        }
        uVar11 = (uint16_t)arg3;
        uVar12 = (uint16_t)arg1;
        local_58 = (Array<GUIManagerVertexBase<short>>*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)arg2);
    joined_r0x0001008ec84c:
        if (texture1 == nullptr) {
            local_34 = -65000.0;
            local_4c = -65000.0;
            local_3c = -65000.0;
            local_38 = -65000.0;
        }
        fVar15 = arg8 - arg6;
        unsigned int uVar2 = m_lastViewportHeight;
        if (0.0 <= fVar15) {
            local_88 = (unsigned __int128)((unsigned int)fVar15);
        } else {
            local_88._4_4_ = 2147483648;
            local_88._0_4_ = -fVar15;
            local_88._8_4_ = 2147483648;
            local_88._12_4_ = 2147483648;
            std::swap<float>(arg6, arg8);
        }
        fVar15 = arg9 - arg7;
        if (0.0 <= fVar15) {
            local_78 = (unsigned __int128)((unsigned int)fVar15);
        } else {
            local_78._4_4_ = 2147483648;
            local_78._0_4_ = -fVar15;
            local_78._8_4_ = 2147483648;
            local_78._12_4_ = 2147483648;
            std::swap<float>(arg7, arg9);
        }
        if (arg14 == 1) {
            local_88._0_8_ = local_88._0_8_ ^ 9223372039002259456;
            local_88._8_4_ = local_88._8_4_ ^ 2147483648;
            local_88._12_4_ = local_88._12_4_ ^ 2147483648;
        }
        short sVar14 = (short)uVar2;
        short sVar13 = sVar14 - (short)local_58;
        sVar14 = sVar14 - (short)arg4;
        local_58 = (Array<GUIManagerVertexBase<short>>*)&field_232;
        if (arg15 == 1) {
            local_78._0_8_ = local_78._0_8_ ^ 9223372039002259456;
            local_78._8_4_ = local_78._8_4_ ^ 2147483648;
            local_78._12_4_ = local_78._12_4_ ^ 2147483648;
        }
        uVar2 = field_256;
        field_256 = uVar2 + 1;
        array<short, 2ul>* paVar6 = (array<short, 2ul>*)(*local_58)[(unsigned long)uVar2];
        float local_5c = arg6;
        float local_48 = arg7;
        uint16_t* puVar7 = (uint16_t*)(*paVar6)[0];
        *puVar7 = uVar12;
        short* psVar8 = (short*)(*paVar6)[1];
        *psVar8 = sVar13;
        *(unsigned int*)(paVar6 + 4) = arg5;
        ((paVar6 + 8))->Set(local_4c, local_34);
        float* pfVar9 = (float*)(*((paVar6 + 16)))[0];
        *pfVar9 = local_5c;
        pfVar9 = (float*)(*((paVar6 + 16)))[1];
        *pfVar9 = local_48;
        uint32_t* puVar10 = (uint32_t*)(*((paVar6 + 24)))[0];
        *puVar10 = local_88._0_4_;
        puVar10 = (uint32_t*)(*((paVar6 + 24)))[1];
        *puVar10 = local_78._0_4_;
        uVar2 = field_256;
        field_256 = uVar2 + 1;
        paVar6 = (array<short, 2ul>*)(*local_58)[(unsigned long)uVar2];
        local_5c = arg6;
        local_48 = arg7;
        puVar7 = (uint16_t*)(*paVar6)[0];
        *puVar7 = uVar11;
        psVar8 = (short*)(*paVar6)[1];
        *psVar8 = sVar13;
        *(unsigned int*)(paVar6 + 4) = arg5;
        ((paVar6 + 8))->Set(local_38, local_34);
        pfVar9 = (float*)(*((paVar6 + 16)))[0];
        *pfVar9 = local_5c;
        pfVar9 = (float*)(*((paVar6 + 16)))[1];
        *pfVar9 = local_48;
        puVar10 = (uint32_t*)(*((paVar6 + 24)))[0];
        *puVar10 = local_88._0_4_;
        puVar10 = (uint32_t*)(*((paVar6 + 24)))[1];
        *puVar10 = local_78._0_4_;
        uVar2 = field_256;
        field_256 = uVar2 + 1;
        paVar6 = (array<short, 2ul>*)(*local_58)[(unsigned long)uVar2];
        local_48 = arg6;
        local_34 = arg7;
        puVar7 = (uint16_t*)(*paVar6)[0];
        *puVar7 = uVar11;
        psVar8 = (short*)(*paVar6)[1];
        *psVar8 = sVar14;
        *(unsigned int*)(paVar6 + 4) = arg5;
        ((paVar6 + 8))->Set(local_38, local_3c);
        pfVar9 = (float*)(*((paVar6 + 16)))[0];
        *pfVar9 = local_48;
        pfVar9 = (float*)(*((paVar6 + 16)))[1];
        *pfVar9 = local_34;
        puVar10 = (uint32_t*)(*((paVar6 + 24)))[0];
        *puVar10 = local_88._0_4_;
        puVar10 = (uint32_t*)(*((paVar6 + 24)))[1];
        *puVar10 = local_78._0_4_;
        uVar2 = field_256;
        field_256 = uVar2 + 1;
        paVar6 = (array<short, 2ul>*)(*local_58)[(unsigned long)uVar2];
        local_34 = arg6;
        local_38 = arg7;
        puVar7 = (uint16_t*)(*paVar6)[0];
        *puVar7 = uVar12;
        psVar8 = (short*)(*paVar6)[1];
        *psVar8 = sVar14;
        *(unsigned int*)(paVar6 + 4) = arg5;
        ((paVar6 + 8))->Set(local_4c, local_3c);
        pfVar9 = (float*)(*((paVar6 + 16)))[0];
        *pfVar9 = local_34;
        pfVar9 = (float*)(*((paVar6 + 16)))[1];
        *pfVar9 = local_38;
        puVar10 = (uint32_t*)(*((paVar6 + 24)))[0];
        *puVar10 = local_88._0_4_;
        puVar10 = (uint32_t*)(*((paVar6 + 24)))[1];
        *puVar10 = local_78._0_4_;
        field_80 = field_80 + 1;
    }

    // 0x1008ecc70
    void GUIManager::AddTexturedRectangleMasked(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, float arg6,
                                                float arg7, float arg8, float arg9, const render::Texture* texture1,
                                                const render::Texture* texture2, bool arg12,
                                                GUIManager::BlendMode blendMode) {
        AddElementInner(arg1, arg2, arg3 + arg1, arg4 + arg2, arg5, arg6, arg7, arg8, arg9, texture1, texture2, arg12,
                        blendMode, 1, 1);
    }

    // 0x1008eccc0
    void GUIManager::AddColouredTriangleList(const eastl::vector<int>& arg1, const eastl::vector<int>& arg2,
                                             unsigned int arg3, GUIManager::BlendMode blendMode, bool arg5) {
        AddTriangleListInner(arg1, arg2, 0, arg3, 0.0, 0.0, nullptr, blendMode, arg5);
    }

    // 0x1008eccf0
    void GUIManager::AddTriangleListInner(const eastl::vector<int>& arg1, const eastl::vector<int>& arg2,
                                          unsigned int arg3, unsigned int arg4, float arg5, float arg6,
                                          const render::Texture* texture, GUIManager::BlendMode blendMode, bool arg9) {
        uint32_t uVar2;
        uint64_t uVar4;
        vector<int>* pvVar6;
        bool bVar8;
        unsigned long uVar13;
        unsigned long uVar15;
        array<short, 2ul>* this_01;
        uint16_t* puVar16;
        uint32_t* puVar17;
        unsigned int* puVar18;
        unsigned long uVar20;
        int iVar22;
        float fVar23;
        uint8_t local_c0[24];
        uint8_t local_a8[16];

        unsigned int local_34 = arg4;
        long lVar11 = arg2.size();
        if (6148914691236517205 < (unsigned long)(lVar11 * -6148914691236517205)) {
            LogAssert("indices.size() % 3 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1236, nullptr);
        }
        unsigned long local_98 = (unsigned long)(arg3 & 2);
        if (((arg3 & 2) != 0) && (texture == nullptr)) {
            LogAssert("(triangleListFlags & TRIANGLE_LIST_HAS_UV) ? (texture != nullptr) : true",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1237, nullptr);
        }
        bool cVar7 = field_40.empty();
        bool bVar3 = arg9;
        if (cVar7) {
            LogAssert("!m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1238,
                      "Ensure Begin() is called with a valid DrawCallState before submitting GUI elements to draw");
        }
        int iVar10 = (int)local_98;
        unsigned int uVar19 = arg3 & 1;
        unsigned long local_90 = (unsigned long)uVar19;
        unsigned int uVar21 = iVar10 + 2U | uVar19;
        unsigned long local_60 = (unsigned long)uVar21;
        unsigned long local_70 = (unsigned long)(uVar19 + 2);
        unsigned long local_68 = (unsigned long)(uVar19 + 3);
        unsigned int uVar9 = uVar19 + 3;
        if (iVar10 == 0) {
            uVar9 = uVar19 + 2;
        }
        float local_38 = (float)-(unsigned int)(iVar10 == 0);
        if ((iVar10 != 0) + uVar9 != uVar21) {
            LogAssert("nextOffset == pointElementCount",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1250, nullptr);
        }
        GUIManager* local_58 = this;
        auto piVar12 = field_0->GetPixelBuffer();
        new (local_c0) oldscape::dash3d::GridRect(*piVar12, piVar12[1], piVar12[2] - *piVar12, piVar12[3] - piVar12[1]);
        vector<int>* local_40 = arg2;
        if (bVar3 == false) {
            lVar11 = arg1.size();
            pvVar6 = arg1;
            if (lVar11 == 0) {
                return;
            }
            uVar15 = 0;
            uVar20 = 1;
            do {
                piVar12 = (int*)(*pvVar6)[uVar15];
                iVar10 = *piVar12;
                piVar12 = (int*)(*pvVar6)[uVar20];
                new (local_a8) oldscape::sidebars::SideBarData(iVar10, *piVar12);
                bVar8 = local_c0->IsInside<int>(*local_a8);
                bVar3 = true;
                if (bVar8)
                    break;
                iVar10 = (int)local_60;
                uVar15 = (unsigned long)((iVar10 + (int)uVar20) - 1);
                uVar13 = pvVar6->size();
                uVar20 = (unsigned long)(unsigned int)((int)uVar20 + iVar10);
                bVar3 = false;
            } while (uVar15 < uVar13);
            if (!bVar3) {
                return;
            }
        }
        pvVar6 = local_40;
        Texture* pTVar5 = texture;
        unsigned long local_48 = arg1.size();
        GUIManager* this_00 = local_58;
        uVar20 = (local_48 & 4294967295) / (local_60 & 4294967295);
        uint8_t* puVar1 = &local_58->field_1656;
        uVar9 = pvVar6->size();
        unsigned long local_78 = uVar20;
        cVar7 = puVar1->HasRoom((unsigned int)uVar20, uVar9);
        if ((!cVar7) ||
            (cVar7 = IsStateChangeNeeded(this_00, &blendMode, 1, local_34, pTVar5, nullptr, false), cVar7)) {
            Render(this_00, nullptr);
            SetBatchMode(this_00, 1);
            if (pTVar5 != nullptr) {
                cVar7 = pTVar5->IsCreated();
                if (!cVar7) {
                    LogAssert("texture->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1288, "GUIManager texture being added that has no native resources");
                }
                this_00->field_88 = pTVar5;
            }
            this_00->field_108 = blendMode;
        }
        local_a8._8_8_ = &this_00->field_1960;
        iVar10 = local_a8._8_8_->size();
        piVar12 = (int*)pvVar6->HeapBeginPtr();
        auto piVar14 = pvVar6->end();
        if (piVar12 != piVar14) {
            puVar1 = &local_58->field_2080;
            do {
                uVar20 = puVar1->size();
                uVar15 = puVar1->capacity();
                if (uVar15 <= uVar20) {
                    LogAssert("m_vertexDynamic.m_indexDataBuffer.size() < m_vertexDynamic.m_indexDataBuffer.capacity()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1298, nullptr);
                }
                local_a8._0_2_ = (short)*piVar12 + (short)iVar10;
                puVar1->push_back(*local_a8);
                if (65535 < (unsigned int)(*piVar12 + iVar10)) {
                    LogAssert("startIndex + index <= std::numeric_limits<uint16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1300, nullptr);
                }
                piVar12 = piVar12 + 1;
            } while (piVar12 != piVar14);
        }
        iVar10 = local_40->size();
        local_58->field_80 = local_58->field_80 + iVar10;
        if ((unsigned int)local_60 <= (unsigned int)local_48) {
            local_c0._16_8_ = (uint64_t)((int)local_90 * 3 - 1);
            local_70 = (unsigned long)((unsigned int)local_70 | (unsigned int)local_38);
            local_68 = (unsigned long)((unsigned int)local_68 | (unsigned int)local_38);
            uVar9 = (unsigned int)local_78;
            local_78 = local_78 & 4294967295;
            if (uVar9 < 2) {
                local_78 = 1;
            }
            uVar20 = 0;
            uVar15 = 0;
            do {
                pvVar6 = arg1;
                pTVar5 = texture;
                iVar10 = (int)uVar20;
                puVar17 = &arg1[uVar20];
                uVar2 = *puVar17;
                piVar12 = (int*)(*pvVar6)[(unsigned long)(iVar10 + 1)];
                local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)((float)*piVar12));
                if ((int)local_90 != 0) {
                    puVar18 = (unsigned int*)(*pvVar6)[(unsigned long)(unsigned int)(local_c0._16_4_ + iVar10)];
                    local_34 = *puVar18;
                }
                local_40 = (vector<int>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)arg5);
                fVar23 = arg6;
                if ((int)local_98 != 0) {
                    piVar12 = (int*)(*pvVar6)[(unsigned long)(unsigned int)((int)local_70 + iVar10)];
                    local_40 =
                        (vector<int>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)((float)*piVar12 * 9.536743e-07));
                    piVar12 = (int*)(*pvVar6)[(unsigned long)(unsigned int)((int)local_68 + iVar10)];
                    fVar23 = (float)*piVar12 * 9.536743e-07;
                }
                uVar4 = local_a8._8_8_;
                if (pTVar5 == nullptr) {
                    fVar23 = -65000.0;
                    local_40 = (vector<int>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)3346917376);
                }
                local_48 = (((uint64_t)local_48._4_4_ << 32) |
                            (uint32_t)((float)(int)local_58->m_lastViewportHeight - (float)local_48));
                local_38 = fVar23;
                uVar20 = local_a8._8_8_->size();
                uVar13 = uVar4->capacity();
                uVar4 = local_a8._8_8_;
                if (uVar13 <= uVar20) {
                    LogAssert(
                        "m_vertexDynamic.m_vertexDataBuffer.size() < m_vertexDynamic.m_vertexDataBuffer.capacity()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                        "GUIManager.cpp",
                        1336, nullptr);
                }
                local_a8._8_8_->push_back_uninitialized();
                this_01 = (array<short, 2ul>*)uVar4->back();
                iVar22 = (int)(float)local_48;
                puVar16 = (uint16_t*)(*this_01)[0];
                *puVar16 = (short)uVar2;
                puVar16 = (uint16_t*)(*this_01)[1];
                *puVar16 = (short)iVar22;
                *(unsigned int*)(this_01 + 4) = local_34;
                ((this_01 + 8))->Set(local_40._0_4_, local_38);
                puVar17 = (uint32_t*)(*((this_01 + 16)))[0];
                *puVar17 = 0;
                puVar17 = (uint32_t*)(*((this_01 + 16)))[1];
                *puVar17 = 0;
                puVar17 = (uint32_t*)(*((this_01 + 24)))[0];
                *puVar17 = 1065353216;
                puVar17 = (uint32_t*)(*((this_01 + 24)))[1];
                *puVar17 = 1065353216;
                uVar15 = uVar15 + 1;
                uVar20 = (unsigned long)(iVar10 + (unsigned int)local_60);
            } while (uVar15 != local_78);
        }
    }

    // 0x1008ed300
    void GUIManager::AddHorizontalGradientRectangle(int arg1, int arg2, int arg3, int arg4, unsigned int arg5,
                                                    unsigned int arg6, GUIManager::BlendMode blendMode, int arg8,
                                                    bool arg9) {
        uint8_t* this_00;
        unsigned int uVar1;
        Array<GUIManagerVertexBase<short>>* pAVar2;
        array<short, 2ul>* paVar5;
        short* psVar6;
        uint32_t* puVar7;
        uint16_t* puVar8;
        uint32_t in_register_00000034;
        uint16_t uVar12;
        short sVar13;
        int iVar14;
        short sVar15;
        int iVar16;
        uint16_t uVar17;
        bool bVar18;
        int local_5c;
        int local_4c;
        short local_34;
        short local_32;

        unsigned long local_48 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        bool cVar3 = field_40.empty();
        if (cVar3) {
            LogAssert("!m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      218,
                      "Ensure Begin() is called with a valid DrawCallState before submitting GUI elements to draw");
        }
        unsigned int local_40 = arg3 + (int)local_48;
        unsigned int uVar9 = arg4 + arg2;
        Array<GUIManagerVertexBase<short>>* local_58 =
            (Array<GUIManagerVertexBase<short>>*)(unsigned long)(unsigned int)arg4;
        cVar3 = field_0->ClippingTest((int)local_48, arg2, local_40, uVar9);
        if (!cVar3) {
            return;
        }
        if (field_80 < field_84) {
            cVar3 = IsStateChangeNeeded(field_108, 2, arg5, nullptr, nullptr, false);
            if ((cVar3) || (cVar3 = IsStateChangeNeeded(field_108, 2, arg6, nullptr, nullptr, false), cVar3))
                goto LAB_1008ed3d9;
        } else {
        LAB_1008ed3d9:
            Render(nullptr);
            SetBatchMode(2);
            field_108 = blendMode;
        }
        auto puVar4 = field_0->GetPixelBuffer();
        unsigned int uVar10 = *puVar4;
        int iVar11 = 0;
        if (uVar10 != 4294967295) {
            if (0 < arg3) {
                iVar16 = (int)local_48;
                local_48 = local_48 & 4294967295;
                if (iVar16 < (int)uVar10) {
                    local_48 = (unsigned long)uVar10;
                }
                if ((int)puVar4[2] < (int)local_40) {
                    local_40 = puVar4[2];
                }
            }
            if (0 < (int)local_58) {
                uVar1 = puVar4[1];
                iVar11 = uVar1 - arg2;
                bVar18 = iVar11 == 0;
                if (bVar18 || (int)uVar1 < arg2) {
                    iVar11 = 0;
                }
                uVar10 = puVar4[3];
                if (!bVar18 && arg2 <= (int)uVar1) {
                    arg2 = uVar1;
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
        if ((unsigned int)local_48 != local_40) {
            iVar14 = m_lastViewportHeight - arg2;
            local_5c = m_lastViewportHeight - uVar10;
            this_00 = &field_232;
            local_58 = (Array<GUIManagerVertexBase<short>>*)this_00;
            if ((arg8 < 1) || (iVar14 - local_5c <= arg8 * 2)) {
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)(*this_00)[(unsigned long)uVar9];
                sVar13 = (short)iVar14 - 5;
                puVar8 = (uint16_t*)(*paVar5)[0];
                *puVar8 = (short)local_48;
                psVar6 = (short*)(*paVar5)[1];
                *psVar6 = sVar13;
                *(unsigned int*)(paVar5 + 4) = arg5;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[0];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[1];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[0];
                *puVar7 = 1065353216;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[1];
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)(*this_00)[(unsigned long)uVar9];
                puVar8 = (uint16_t*)(*paVar5)[0];
                uVar12 = (uint16_t)local_40;
                *puVar8 = uVar12;
                psVar6 = (short*)(*paVar5)[1];
                *psVar6 = sVar13;
                *(unsigned int*)(paVar5 + 4) = arg6;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[0];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[1];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[0];
                *puVar7 = 1065353216;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[1];
                pAVar2 = local_58;
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)(*local_58)[(unsigned long)uVar9];
                puVar8 = (uint16_t*)(*paVar5)[0];
                *puVar8 = uVar12;
                puVar8 = (uint16_t*)(*paVar5)[1];
                uVar12 = (uint16_t)local_5c;
                *puVar8 = uVar12;
                *(unsigned int*)(paVar5 + 4) = arg6;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[0];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[1];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[0];
                *puVar7 = 1065353216;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[1];
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)(*pAVar2)[(unsigned long)uVar9];
                puVar8 = (uint16_t*)(*paVar5)[0];
                *puVar8 = (short)local_48;
                puVar8 = (uint16_t*)(*paVar5)[1];
                *puVar8 = uVar12;
                *(unsigned int*)(paVar5 + 4) = arg5;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[0];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[1];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[0];
                *puVar7 = 1065353216;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[1];
                *puVar7 = 1065353216;
                field_80 = field_80 + 1;
            } else {
                local_34 = (short)local_48;
                local_32 = (short)local_40;
                if (arg9) {
                    std::swap<unsigned int>(arg5, arg6);
                    std::swap<short>(local_34, local_32);
                }
                local_4c = iVar11 - arg8;
                if (arg8 <= iVar11) {
                    local_4c = 0;
                }
                iVar11 = arg8 - iVar16;
                if (iVar11 == 0 || arg8 < iVar16) {
                    iVar11 = 0;
                }
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)(*this_00)[(unsigned long)uVar9];
                sVar13 = local_34;
                uVar9 = arg6;
                psVar6 = (short*)(*paVar5)[0];
                *psVar6 = sVar13;
                psVar6 = (short*)(*paVar5)[1];
                *psVar6 = (short)iVar14;
                *(unsigned int*)(paVar5 + 4) = uVar9;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[0];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[1];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[0];
                *puVar7 = 1065353216;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[1];
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)(*this_00)[(unsigned long)uVar9];
                sVar13 = local_32;
                uVar9 = arg6;
                iVar14 = local_4c + iVar14;
                local_4c = iVar14;
                psVar6 = (short*)(*paVar5)[0];
                *psVar6 = sVar13;
                puVar8 = (uint16_t*)(*paVar5)[1];
                *puVar8 = (short)iVar14;
                *(unsigned int*)(paVar5 + 4) = uVar9;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[0];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[1];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[0];
                *puVar7 = 1065353216;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[1];
                pAVar2 = local_58;
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)(*local_58)[(unsigned long)uVar9];
                sVar13 = local_32;
                uVar9 = arg6;
                psVar6 = (short*)(*paVar5)[0];
                *psVar6 = sVar13;
                puVar8 = (uint16_t*)(*paVar5)[1];
                *puVar8 = (short)local_4c;
                *(unsigned int*)(paVar5 + 4) = uVar9;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[0];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[1];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[0];
                *puVar7 = 1065353216;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[1];
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)(*pAVar2)[(unsigned long)uVar9];
                sVar13 = local_34;
                uVar9 = arg5;
                psVar6 = (short*)(*paVar5)[0];
                *psVar6 = sVar13;
                puVar8 = (uint16_t*)(*paVar5)[1];
                uVar12 = (uint16_t)local_4c;
                *puVar8 = uVar12;
                *(unsigned int*)(paVar5 + 4) = uVar9;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[0];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[1];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[0];
                *puVar7 = 1065353216;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[1];
                pAVar2 = local_58;
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)(*local_58)[(unsigned long)uVar9];
                puVar8 = (uint16_t*)(*paVar5)[0];
                *puVar8 = (short)local_48;
                puVar8 = (uint16_t*)(*paVar5)[1];
                *puVar8 = uVar12;
                *(unsigned int*)(paVar5 + 4) = arg5;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[0];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[1];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[0];
                *puVar7 = 1065353216;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[1];
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)(*pAVar2)[(unsigned long)uVar9];
                puVar8 = (uint16_t*)(*paVar5)[0];
                uVar17 = (uint16_t)local_40;
                *puVar8 = uVar17;
                puVar8 = (uint16_t*)(*paVar5)[1];
                *puVar8 = uVar12;
                *(unsigned int*)(paVar5 + 4) = arg6;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[0];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[1];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[0];
                *puVar7 = 1065353216;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[1];
                pAVar2 = local_58;
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)(*local_58)[(unsigned long)uVar9];
                sVar15 = (short)iVar11 + (short)local_5c;
                puVar8 = (uint16_t*)(*paVar5)[0];
                *puVar8 = uVar17;
                psVar6 = (short*)(*paVar5)[1];
                *psVar6 = sVar15;
                *(unsigned int*)(paVar5 + 4) = arg6;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[0];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[1];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[0];
                *puVar7 = 1065353216;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[1];
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)(*pAVar2)[(unsigned long)uVar9];
                puVar8 = (uint16_t*)(*paVar5)[0];
                *puVar8 = (short)local_48;
                psVar6 = (short*)(*paVar5)[1];
                *psVar6 = sVar15;
                *(unsigned int*)(paVar5 + 4) = arg5;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[0];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[1];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[0];
                *puVar7 = 1065353216;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[1];
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)(*pAVar2)[(unsigned long)uVar9];
                sVar13 = local_34;
                uVar9 = arg5;
                psVar6 = (short*)(*paVar5)[0];
                *psVar6 = sVar13;
                psVar6 = (short*)(*paVar5)[1];
                *psVar6 = sVar15;
                *(unsigned int*)(paVar5 + 4) = uVar9;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[0];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[1];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[0];
                *puVar7 = 1065353216;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[1];
                pAVar2 = local_58;
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)(*local_58)[(unsigned long)uVar9];
                sVar13 = local_32;
                uVar9 = arg6;
                psVar6 = (short*)(*paVar5)[0];
                *psVar6 = sVar13;
                psVar6 = (short*)(*paVar5)[1];
                *psVar6 = sVar15;
                *(unsigned int*)(paVar5 + 4) = uVar9;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[0];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[1];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[0];
                *puVar7 = 1065353216;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[1];
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)(*pAVar2)[(unsigned long)uVar9];
                sVar13 = local_32;
                uVar9 = arg6;
                psVar6 = (short*)(*paVar5)[0];
                *psVar6 = sVar13;
                psVar6 = (short*)(*paVar5)[1];
                *psVar6 = sVar15;
                *(unsigned int*)(paVar5 + 4) = uVar9;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[0];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[1];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[0];
                *puVar7 = 1065353216;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[1];
                *puVar7 = 1065353216;
                uVar9 = field_256;
                field_256 = uVar9 + 1;
                paVar5 = (array<short, 2ul>*)(*pAVar2)[(unsigned long)uVar9];
                sVar13 = local_34;
                uVar9 = arg6;
                psVar6 = (short*)(*paVar5)[0];
                *psVar6 = sVar13;
                puVar8 = (uint16_t*)(*paVar5)[1];
                *puVar8 = (short)local_5c;
                *(unsigned int*)(paVar5 + 4) = uVar9;
                ((paVar5 + 8))->Set(-65000.0, -65000.0);
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[0];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 16)))[1];
                *puVar7 = 3346917376;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[0];
                *puVar7 = 1065353216;
                puVar7 = (uint32_t*)(*((paVar5 + 24)))[1];
                *puVar7 = 1065353216;
                field_80 = field_80 + 3;
            }
        }
    }

    // 0x1008ee000
    bool GUIManager::IsStateChangeNeeded(GUIManager::BlendMode& blendMode, GUIManager::BatchMode batchMode,
                                         unsigned int arg3, const render::Texture* texture1,
                                         const render::Texture* texture2, bool arg6) const {
        if ((blendMode == 0) && ((arg3 & 255) == 255)) {
            blendMode = field_108;
        }
        if (((field_76 == batchMode) &&
             (((texture1 == nullptr || (field_88 == texture1)) && (field_96 == texture2)))) &&
            (field_104 == arg6)) {
            return blendMode != field_108;
        }
        return true;
    }

    // 0x1008ee050
    void GUIManager::SetBatchMode(GUIManager::BatchMode batchMode) {
        unsigned int uVar1;

        field_76 = batchMode;
        switch (batchMode) {
        case 0:
            uVar1 = field_744.end();
            break;
        case 1:
            uVar1 = field_1960.size();
            goto LAB_1008ee0ce;
        case 2:
            uVar1 = field_232.end();
            break;
        case 3:
            uVar1 = field_1256.end();
            uVar1 = uVar1 >> 1;
            goto LAB_1008ee0ce;
        default:
            field_84 = 0;
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "gui/GUIManager.cpp",
                            1370, nullptr);
        }
        uVar1 = uVar1 >> 2;
    LAB_1008ee0ce:
        field_84 = uVar1;
    }

    // 0x1008ee1a0
    void GUIManager::AddTexturedTriangleList(const eastl::vector<int>& arg1, const eastl::vector<int>& arg2,
                                             unsigned int arg3, render::Texture* texture,
                                             GUIManager::BlendMode blendMode, bool arg6) {
        uint32_t in_register_00000014;
        uint32_t in_register_00000084;
        uint64_t in_register_00000089;
        bool in_stack_00000008;

        unsigned long uVar1 = (((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6);
        if ((Texture*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)blendMode) == nullptr) {
            LogAssert("texture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      350, "Use AddColouredTriangleList if there is no texture", 0, uVar1, uVar1 & 4294967295);
        }
        AddTriangleListInner(
            (GUIManager*)arg1, arg2, (vector<int>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg3), 2,
            (unsigned int)texture, -1.0, -1.0, (Texture*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)blendMode),
            (BlendMode)uVar1, in_stack_00000008);
    }

    // 0x1008ee230
    void GUIManager::AddOutline(int arg1, int arg2, int arg3, int arg4, int arg5, unsigned int arg6,
                                GUIManager::BlendMode blendMode) {
        AddColouredRectangle(arg1, arg2, arg3, arg5, arg6, blendMode);
        AddColouredRectangle(arg1, (arg4 + arg2) - arg5, arg3, arg5, arg6, blendMode);
        int arg4_00 = arg4 + arg5 * -2;
        AddColouredRectangle(arg1, arg2 + arg5, arg5, arg4_00, arg6, blendMode);
        AddColouredRectangle((arg3 + arg1) - arg5, arg2 + arg5, arg5, arg4_00, arg6, blendMode);
    }

    // 0x1008ee2f0
    void GUIManager::AddVerticalLine(int arg1, int arg2, int arg3, int arg4, unsigned int arg5,
                                     GUIManager::BlendMode blendMode) {
        AddColouredRectangle(arg1, arg2, arg4, arg3, arg5, blendMode);
    }

    // 0x1008ee320
    void GUIManager::AddSprite(int arg1, int arg2, int arg3, int arg4, unsigned int arg5,
                               const shared_ptr<SpriteAtlasReference>& spriteAtlasReference,
                               GUIManager::BlendMode blendMode) {
        if ((arg3 < 1) && (arg4 < 1)) {
            LogAssert("width > 0 || height > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      380, nullptr);
        }
        if (!(spriteAtlasReference.operator_cast_to_bool())) {
            LogAssert("reference",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      382, nullptr);
        }
        auto this_00 = spriteAtlasReference.operator->();
        auto this_01 = this_00->second();
        if (!(shared_ptr::operator_cast_to_bool(this_01))) {
            LogAssert("atlas",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      384, nullptr);
        }
        long lVar2 = ((SpriteAtlas*)(*this_01).operator->())
                         ->GetSpriteRenderMapping(
                             ((FastPool<audio::SoundInstance, int>*)spriteAtlasReference.operator->())->capacity());
        EntityHighlightState* this_06 = (EntityHighlightState*)(lVar2 + 88);
        float arg6 = (float)this_06->GetOverbright();
        float arg7 = (float)this_06->GetAlpha();
        float arg8 = (float)this_06->MaxU();
        float arg9 = (float)this_06->MaxV();
        MapArea* this_04 = (MapArea*)(*this_01).operator->();
        auto this_05 = this_04->GetOrigin();
        auto texture = this_05->end();
        AddElement(arg1, arg2, arg3 + arg1, arg4 + arg2, arg5, arg6, arg7, arg8, arg9, texture, blendMode);
    }

    // 0x1008ee4b0
    void GUIManager::AddSpriteTiled(int arg1, int arg2, int arg3, int arg4, unsigned int arg5,
                                    const shared_ptr<SpriteAtlasReference>& spriteAtlasReference,
                                    GUIManager::BlendMode blendMode) {
        uint8_t local_78[36];

        new (local_78) ClippingState(field_0);
        local_78._24_8_ = this;
        field_0->SetClippingRectangle(arg1, arg2, arg3, arg4, false);
        if (!(spriteAtlasReference.operator_cast_to_bool())) {
            LogAssert("reference",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      395, nullptr);
        }
        auto this_01 = spriteAtlasReference.operator->();
        auto this_02 = this_01->second();
        if (!(shared_ptr::operator_cast_to_bool(this_02))) {
            LogAssert("atlas",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      397, nullptr);
        }
        long lVar2 = ((SpriteAtlas*)(*this_02).operator->())
                         ->GetSpriteRenderMapping(
                             ((FastPool<audio::SoundInstance, int>*)spriteAtlasReference.operator->())->capacity());
        EntityHighlightState* this_00 = (EntityHighlightState*)(lVar2 + 88);
        float local_40 = (float)this_00->GetOverbright();
        float local_3c = (float)this_00->GetAlpha();
        float local_38 = (float)this_00->MaxU();
        float local_34 = (float)this_00->MaxV();
        MapArea* this_05 = (MapArea*)(*this_02).operator->();
        auto this_06 = this_05->GetOrigin();
        auto texture = this_06->end();
        vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true>>* this_07 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true>>*)(lVar2 + 8);
        unsigned int* puVar3 = (unsigned int*)(*this_07)[0];
        unsigned int arg12 = *puVar3;
        puVar3 = (unsigned int*)(*this_07)[1];
        unsigned int arg13 = *puVar3;
        puVar3 = (unsigned int*)(*this_07)[2];
        unsigned int arg14 = *puVar3;
        puVar3 = (unsigned int*)(*this_07)[3];
        AddElementTiled((GUIManager*)local_78._24_8_, arg1, arg2, arg3 + arg1, arg4 + arg2, arg5, local_40, local_3c,
                        local_38, local_34, texture, blendMode, arg12, arg13, arg14, *puVar3, 0, 0);
    }

    // 0x1008ee6e0
    void GUIManager::AddElementTiled(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, float arg6, float arg7,
                                     float arg8, float arg9, const render::Texture* texture,
                                     GUIManager::BlendMode blendMode, unsigned int arg12, unsigned int arg13,
                                     unsigned int arg14, unsigned int arg15, int arg16, int arg17) {
        unsigned int uVar1;
        EnumOptionToggle enumOptionToggle1;
        unsigned int* puVar2;
        long lVar3;
        EnumOptionToggle EVar4;
        int arg1_00;
        EnumOptionToggle EVar5;
        int arg4_00;
        int iVar6;
        EnumOptionToggle enumOptionToggle1_00;
        float fVar7;
        float fVar8;
        float fVar9;

        if (m_skipTiledElements == '\0') {
            puVar2 = (unsigned int*)texture->second();
            uVar1 = *puVar2;
            fVar7 = (float)::abs(arg8 - arg6);
            fVar7 = fVar7 * (float)uVar1;
            lVar3 = texture->second();
            uVar1 = *(unsigned int*)(lVar3 + 4);
            fVar8 = (float)::abs(arg9 - arg7);
            fVar8 = fVar8 * (float)uVar1;
            fVar9 = (float)ceil((float)(arg3 - arg1) / fVar7);
            enumOptionToggle1_00 = (EnumOptionToggle)fVar9;
            fVar9 = (float)ceil((float)(arg4 - arg2) / fVar8);
            if (arg16 != 0) {
                enumOptionToggle1_00 = eastl::min<GraphicsQuality>(enumOptionToggle1_00, arg16);
                fVar7 = (float)(arg3 - arg1) / (float)(int)enumOptionToggle1_00;
            }
            enumOptionToggle1 = (EnumOptionToggle)fVar9;
            if (arg17 != 0) {
                enumOptionToggle1 = eastl::min<GraphicsQuality>(enumOptionToggle1, arg17);
                fVar8 = (float)(arg4 - arg2) / (float)(int)enumOptionToggle1;
            }
            if ((((arg12 == 0) && (arg13 == 0)) && (arg15 == 0)) && (arg14 == 0)) {
                AddElementInner(arg1, arg2, (int)(fVar7 * (float)(int)enumOptionToggle1_00) + arg1,
                                (int)(fVar8 * (float)(int)enumOptionToggle1) + arg2, arg5, arg6, arg7, arg8, arg9,
                                texture, nullptr, false, blendMode, enumOptionToggle1_00, enumOptionToggle1);
            } else if (0 < (int)enumOptionToggle1_00) {
                arg1_00 = arg1 + arg12;
                EVar4 = 0;
                do {
                    if (0 < (int)enumOptionToggle1) {
                        iVar6 = arg2;
                        EVar5 = enumOptionToggle1;
                        do {
                            arg4_00 = iVar6 + arg15 + (int)fVar8;
                            AddElementInner(arg1_00, iVar6 + arg15, (int)fVar7 + arg1_00, arg4_00, arg5, arg6, arg7,
                                            arg8, arg9, texture, nullptr, false, blendMode, 1, 1);
                            iVar6 = arg4_00 + arg14;
                            EVar5 = EVar5 - 1;
                        } while (EVar5 != 0);
                    }
                    arg1_00 = arg1_00 + arg13 + arg12 + (int)fVar7;
                    EVar4 = EVar4 + 1;
                } while (EVar4 != enumOptionToggle1_00);
            }
        }
    }

    // 0x1008ee9b0
    void GUIManager::AddElementRotated(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, float arg6,
                                       float arg7, float arg8, float arg9, const render::Texture* texture,
                                       GUIManager::BlendMode blendMode, float arg12, int arg13, int arg14) {
        float* pfVar1;
        Layout* pLVar2;
        Vector2T<int>* pVVar3;
        Matrix22T<float> local_d0;
        Vector2T<int> local_c0;
        Vector2T<int> local_b8;
        Vector2T<int> local_b0;
        Vector2T<int> local_a8;
        float local_94;
        float local_90;
        float local_8c;
        float local_88;
        float local_84;
        Vector2T<int> local_80;
        float local_6c;
        float local_68;
        float local_5c;
        float local_48;
        uint32_t uStack_44;
        uint32_t uStack_40;
        uint32_t uStack_3c;

        if (arg12 == 0.0) {
            AddElementInner(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, texture, nullptr, false, blendMode, 1,
                            1);
        } else if (m_skipRotatedElements == '\0') {
            local_5c = arg12;
            if (arg8 < arg6) {
                std::swap<float>(arg6, arg8);
                std::swap<int>(arg1, arg3);
            }
            if (arg9 < arg7) {
                std::swap<float>(arg7, arg9);
                std::swap<int>(arg2, arg4);
            }
            local_80 = math::Vector2T();
            if (arg13 == -999999) {
                local_48 = (float)(arg3 + arg1) * 0.5;
                pfVar1 = (float*)local_80.SSOBeginPtr();
                *pfVar1 = local_48;
                local_48 = (float)(arg4 + arg2) * 0.5;
            } else {
                local_48 = (float)arg13;
                pfVar1 = (float*)local_80.SSOBeginPtr();
                *pfVar1 = local_48;
                local_48 = (float)arg14;
            }
            pfVar1 = (float*)local_80.y();
            *pfVar1 = local_48;
            local_c0 = math::Vector2T();
            local_b8 = math::Vector2T();
            local_b0 = math::Vector2T();
            local_a8 = math::Vector2T();
            local_48 = (float)arg1;
            pfVar1 = (float*)local_80.SSOBeginPtr();
            local_48 = local_48 - *pfVar1;
            pfVar1 = (float*)local_c0.SSOBeginPtr();
            *pfVar1 = local_48;
            local_48 = (float)arg2;
            pfVar1 = (float*)local_80.y();
            local_48 = local_48 - *pfVar1;
            pfVar1 = (float*)local_c0.y();
            *pfVar1 = local_48;
            local_48 = (float)arg3;
            pfVar1 = (float*)local_80.SSOBeginPtr();
            local_48 = local_48 - *pfVar1;
            pfVar1 = (float*)local_b8.SSOBeginPtr();
            *pfVar1 = local_48;
            local_48 = (float)arg2;
            pfVar1 = (float*)local_80.y();
            local_48 = local_48 - *pfVar1;
            pfVar1 = (float*)local_b8.y();
            *pfVar1 = local_48;
            local_48 = (float)arg3;
            pfVar1 = (float*)local_80.SSOBeginPtr();
            local_48 = local_48 - *pfVar1;
            pfVar1 = (float*)local_a8.SSOBeginPtr();
            *pfVar1 = local_48;
            local_48 = (float)arg4;
            pfVar1 = (float*)local_80.y();
            local_48 = local_48 - *pfVar1;
            pfVar1 = (float*)local_a8.y();
            *pfVar1 = local_48;
            local_48 = (float)arg1;
            pfVar1 = (float*)local_80.SSOBeginPtr();
            local_48 = local_48 - *pfVar1;
            pfVar1 = (float*)local_b0.SSOBeginPtr();
            *pfVar1 = local_48;
            local_48 = (float)arg4;
            pfVar1 = (float*)local_80.y();
            local_48 = local_48 - *pfVar1;
            pfVar1 = (float*)local_b0.y();
            *pfVar1 = local_48;
            math::SinCos(&local_6c, &local_68, local_5c);
            local_d0 = math::Matrix22T<float>();
            local_48 = local_68;
            pLVar2 = &local_d0[0];
            pfVar1 = (float*)pLVar2->SSOBeginPtr();
            *pfVar1 = local_48;
            local_48 = local_6c;
            pVVar3 = &local_d0[0];
            pfVar1 = (float*)pVVar3->y();
            *pfVar1 = local_48;
            local_48 = -local_6c;
            uStack_44 = 2147483648;
            uStack_40 = 2147483648;
            uStack_3c = 2147483648;
            pLVar2 = &local_d0[1];
            pfVar1 = (float*)pLVar2->SSOBeginPtr();
            *pfVar1 = local_48;
            local_48 = local_68;
            pVVar3 = &local_d0[1];
            pfVar1 = (float*)pVVar3->y();
            *pfVar1 = local_48;
            local_c0 *= &local_d0;
            local_b8 *= &local_d0;
            local_a8 *= &local_d0;
            local_b0 *= &local_d0;
            local_c0 += local_80;
            local_b8 += local_80;
            local_b0 += local_80;
            local_a8 += local_80;
            pfVar1 = (float*)local_c0.SSOBeginPtr();
            local_48 = *pfVar1;
            pfVar1 = (float*)local_c0.y();
            local_5c = *pfVar1;
            pfVar1 = (float*)local_b8.SSOBeginPtr();
            local_94 = *pfVar1;
            pfVar1 = (float*)local_b8.y();
            local_90 = *pfVar1;
            pfVar1 = (float*)local_a8.SSOBeginPtr();
            local_8c = *pfVar1;
            pfVar1 = (float*)local_a8.y();
            local_88 = *pfVar1;
            pfVar1 = (float*)local_b0.SSOBeginPtr();
            local_84 = *pfVar1;
            pfVar1 = (float*)local_b0.y();
            AddElementInnerClipped(local_48, local_5c, local_94, local_90, local_8c, local_88, local_84, *pfVar1, arg5,
                                   arg6, arg7, arg8, arg9, texture, nullptr, false, blendMode);
        }
    }

    // 0x1008ef150
    void GUIManager::AddElementInnerClipped(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6,
                                            float arg7, float arg8, unsigned int arg9, float arg10, float arg11,
                                            float arg12, float arg13, const render::Texture* texture1,
                                            const render::Texture* texture2, bool arg16,
                                            GUIManager::BlendMode blendMode) {
        float fVar11;
        uint8_t local_68[16];

        local_68._0_4_ = arg2;
        float local_4c = arg7;
        float local_48 = arg5;
        float local_44 = arg8;
        float local_40 = arg6;
        float local_3c = arg3;
        float local_38 = arg4;
        float local_34 = arg1;
        bool cVar3 = field_40.empty();
        if (cVar3) {
            LogAssert("!m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      893,
                      "Ensure Begin() is called with a valid DrawCallState before submitting GUI elements to draw");
        }
        auto piVar4 = field_0->GetPixelBuffer();
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
            (cVar3 = IsStateChangeNeeded(blendMode, 2, arg9, texture1, texture2, arg16), cVar3)) {
            Render(nullptr);
            SetBatchMode(2);
            if (texture1 != nullptr) {
                cVar3 = texture1->IsCreated();
                if (!cVar3) {
                    LogAssert("texture->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              918, "GUIManager texture being added that has no native resources");
                }
                field_88 = texture1;
            }
            field_108 = blendMode;
            if ((texture2 != nullptr) && (cVar3 = texture2->IsCreated(), !cVar3)) {
                LogAssert("!textureMask || textureMask->IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                          "GUIManager.cpp",
                          922, "GUIManager textureMask being added that has no native resources");
            }
            field_96 = texture2;
            field_104 = arg16;
        }
        if (texture1 == nullptr) {
            arg10 = -65000.0;
            arg12 = -65000.0;
            arg11 = -65000.0;
            arg13 = -65000.0;
        }
        float local_50 = (float)(int)m_lastViewportHeight;
        float local_88 = arg12 - arg10;
        if (local_88 < 0.0) {
            local_88 = -local_88;
            std::swap<float>(arg10, arg12);
        }
        local_44 = local_50 - local_44;
        fVar11 = local_50 - (float)local_68._0_4_;
        local_40 = local_50 - local_40;
        local_50 = local_50 - local_38;
        uint8_t* this_00 = &field_232;
        float fVar12 = arg13 - arg11;
        if (0.0 <= fVar12) {
            local_68 = (unsigned __int128)((unsigned int)fVar12);
        } else {
            local_68._4_4_ = 2147483648;
            local_68._0_4_ = -fVar12;
            local_68._8_4_ = 2147483648;
            local_68._12_4_ = 2147483648;
            std::swap<float>(arg11, arg13);
        }
        local_88 = -local_88;
        local_68._0_8_ = local_68._0_8_ ^ 9223372039002259456;
        local_68._8_4_ = local_68._8_4_ ^ 2147483648;
        local_68._12_4_ = local_68._12_4_ ^ 2147483648;
        unsigned int uVar1 = field_256;
        field_256 = uVar1 + 1;
        array<short, 2ul>* paVar5 = (array<short, 2ul>*)(*this_00)[(unsigned long)uVar1];
        int iVar9 = (int)local_34;
        local_38 = arg10;
        local_34 = arg11;
        uint16_t* puVar6 = (uint16_t*)(*paVar5)[0];
        *puVar6 = (short)iVar9;
        puVar6 = (uint16_t*)(*paVar5)[1];
        *puVar6 = (short)(int)fVar11;
        *(unsigned int*)(paVar5 + 4) = arg9;
        ((paVar5 + 8))->Set(local_38, local_34);
        float* pfVar7 = (float*)(*((paVar5 + 16)))[0];
        *pfVar7 = local_38;
        pfVar7 = (float*)(*((paVar5 + 16)))[1];
        *pfVar7 = local_34;
        pfVar7 = (float*)(*((paVar5 + 24)))[0];
        *pfVar7 = local_88;
        uint32_t* puVar8 = (uint32_t*)(*((paVar5 + 24)))[1];
        *puVar8 = local_68._0_4_;
        uVar1 = field_256;
        field_256 = uVar1 + 1;
        paVar5 = (array<short, 2ul>*)(*this_00)[(unsigned long)uVar1];
        iVar9 = (int)local_3c;
        int iVar10 = (int)local_50;
        local_38 = arg12;
        local_34 = arg11;
        local_3c = arg10;
        puVar6 = (uint16_t*)(*paVar5)[0];
        *puVar6 = (short)iVar9;
        puVar6 = (uint16_t*)(*paVar5)[1];
        *puVar6 = (short)iVar10;
        *(unsigned int*)(paVar5 + 4) = arg9;
        ((paVar5 + 8))->Set(local_38, local_34);
        pfVar7 = (float*)(*((paVar5 + 16)))[0];
        *pfVar7 = local_3c;
        pfVar7 = (float*)(*((paVar5 + 16)))[1];
        *pfVar7 = local_34;
        pfVar7 = (float*)(*((paVar5 + 24)))[0];
        *pfVar7 = local_88;
        puVar8 = (uint32_t*)(*((paVar5 + 24)))[1];
        *puVar8 = local_68._0_4_;
        uVar1 = field_256;
        field_256 = uVar1 + 1;
        paVar5 = (array<short, 2ul>*)(*this_00)[(unsigned long)uVar1];
        iVar9 = (int)local_48;
        iVar10 = (int)local_40;
        local_48 = arg12;
        local_38 = arg13;
        local_3c = arg10;
        local_34 = arg11;
        puVar6 = (uint16_t*)(*paVar5)[0];
        *puVar6 = (short)iVar9;
        puVar6 = (uint16_t*)(*paVar5)[1];
        *puVar6 = (short)iVar10;
        *(unsigned int*)(paVar5 + 4) = arg9;
        ((paVar5 + 8))->Set(local_48, local_38);
        pfVar7 = (float*)(*((paVar5 + 16)))[0];
        *pfVar7 = local_3c;
        pfVar7 = (float*)(*((paVar5 + 16)))[1];
        *pfVar7 = local_34;
        pfVar7 = (float*)(*((paVar5 + 24)))[0];
        *pfVar7 = local_88;
        puVar8 = (uint32_t*)(*((paVar5 + 24)))[1];
        *puVar8 = local_68._0_4_;
        uVar1 = field_256;
        field_256 = uVar1 + 1;
        paVar5 = (array<short, 2ul>*)(*this_00)[(unsigned long)uVar1];
        iVar10 = (int)local_4c;
        iVar9 = (int)local_44;
        local_34 = arg10;
        local_4c = arg13;
        local_3c = arg11;
        puVar6 = (uint16_t*)(*paVar5)[0];
        *puVar6 = (short)iVar10;
        puVar6 = (uint16_t*)(*paVar5)[1];
        *puVar6 = (short)iVar9;
        *(unsigned int*)(paVar5 + 4) = arg9;
        ((paVar5 + 8))->Set(local_34, local_4c);
        pfVar7 = (float*)(*((paVar5 + 16)))[0];
        *pfVar7 = local_34;
        pfVar7 = (float*)(*((paVar5 + 16)))[1];
        *pfVar7 = local_3c;
        pfVar7 = (float*)(*((paVar5 + 24)))[0];
        *pfVar7 = local_88;
        puVar8 = (uint32_t*)(*((paVar5 + 24)))[1];
        *puVar8 = local_68._0_4_;
        field_80 = field_80 + 1;
    }

    // 0x1008ef7a0
    void GUIManager::AddElementPrecise(float arg1, float arg2, float arg3, float arg4, unsigned int arg5, float arg6,
                                       float arg7, float arg8, float arg9, const render::Texture* texture,
                                       GUIManager::BlendMode blendMode, float arg12, int arg13, int arg14) {
        float* pfVar1;
        Layout* pLVar2;
        Vector2T<int>* pVVar3;
        Matrix22T<float> local_d8;
        Vector2T<int> local_c8;
        Vector2T<int> local_c0;
        Vector2T<int> local_b8;
        Vector2T<int> local_a0;
        float local_90;
        float local_8c;
        float local_88;
        float local_84;
        float local_80;
        float local_7c;
        Vector2T<int> local_78;
        float local_68;
        float local_64;
        float local_48;
        uint32_t uStack_44;
        uint32_t uStack_40;
        uint32_t uStack_3c;

        if (arg12 == 0.0) {
            AddElementPreciseInner(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, texture, nullptr, false,
                                   blendMode, 1, 1);
        } else if (m_skipRotatedElements == '\0') {
            if (arg8 < arg6) {
                std::swap<float>(arg6, arg8);
                std::swap<float>(arg1, arg3);
            }
            if (arg9 < arg7) {
                std::swap<float>(arg7, arg9);
                std::swap<float>(arg2, arg4);
            }
            local_78 = math::Vector2T();
            if (arg13 == -999999) {
                local_48 = (arg3 + arg1) * 0.5;
                pfVar1 = (float*)local_78.SSOBeginPtr();
                *pfVar1 = local_48;
                local_48 = (arg4 + arg2) * 0.5;
            } else {
                local_48 = (float)arg13;
                pfVar1 = (float*)local_78.SSOBeginPtr();
                *pfVar1 = local_48;
                local_48 = (float)arg14;
            }
            pfVar1 = (float*)local_78.y();
            *pfVar1 = local_48;
            local_b8 = math::Vector2T();
            local_c8 = math::Vector2T();
            local_a0 = math::Vector2T();
            local_c0 = math::Vector2T();
            local_48 = arg1;
            pfVar1 = (float*)local_78.SSOBeginPtr();
            local_48 = local_48 - *pfVar1;
            pfVar1 = (float*)local_b8.SSOBeginPtr();
            *pfVar1 = local_48;
            local_48 = arg2;
            pfVar1 = (float*)local_78.y();
            local_48 = local_48 - *pfVar1;
            pfVar1 = (float*)local_b8.y();
            *pfVar1 = local_48;
            local_48 = arg3;
            pfVar1 = (float*)local_78.SSOBeginPtr();
            local_48 = local_48 - *pfVar1;
            pfVar1 = (float*)local_c8.SSOBeginPtr();
            *pfVar1 = local_48;
            local_48 = arg2;
            pfVar1 = (float*)local_78.y();
            local_48 = local_48 - *pfVar1;
            pfVar1 = (float*)local_c8.y();
            *pfVar1 = local_48;
            local_48 = arg3;
            pfVar1 = (float*)local_78.SSOBeginPtr();
            local_48 = local_48 - *pfVar1;
            pfVar1 = (float*)local_c0.SSOBeginPtr();
            *pfVar1 = local_48;
            local_48 = arg4;
            pfVar1 = (float*)local_78.y();
            local_48 = local_48 - *pfVar1;
            pfVar1 = (float*)local_c0.y();
            *pfVar1 = local_48;
            local_48 = arg1;
            pfVar1 = (float*)local_78.SSOBeginPtr();
            local_48 = local_48 - *pfVar1;
            pfVar1 = (float*)local_a0.SSOBeginPtr();
            *pfVar1 = local_48;
            local_48 = arg4;
            pfVar1 = (float*)local_78.y();
            local_48 = local_48 - *pfVar1;
            pfVar1 = (float*)local_a0.y();
            *pfVar1 = local_48;
            math::SinCos(&local_68, &local_64, arg12);
            local_d8 = math::Matrix22T<float>();
            local_48 = local_64;
            pLVar2 = &local_d8[0];
            pfVar1 = (float*)pLVar2->SSOBeginPtr();
            *pfVar1 = local_48;
            local_48 = local_68;
            pVVar3 = &local_d8[0];
            pfVar1 = (float*)pVVar3->y();
            *pfVar1 = local_48;
            local_48 = -local_68;
            uStack_44 = 2147483648;
            uStack_40 = 2147483648;
            uStack_3c = 2147483648;
            pLVar2 = &local_d8[1];
            pfVar1 = (float*)pLVar2->SSOBeginPtr();
            *pfVar1 = local_48;
            local_48 = local_64;
            pVVar3 = &local_d8[1];
            pfVar1 = (float*)pVVar3->y();
            *pfVar1 = local_48;
            local_b8 *= &local_d8;
            local_c8 *= &local_d8;
            local_c0 *= &local_d8;
            local_a0 *= &local_d8;
            local_b8 += local_78;
            local_c8 += local_78;
            local_a0 += local_78;
            local_c0 += local_78;
            pfVar1 = (float*)local_b8.SSOBeginPtr();
            local_48 = *pfVar1;
            pfVar1 = (float*)local_b8.y();
            local_90 = *pfVar1;
            pfVar1 = (float*)local_c8.SSOBeginPtr();
            local_8c = *pfVar1;
            pfVar1 = (float*)local_c8.y();
            local_88 = *pfVar1;
            pfVar1 = (float*)local_c0.SSOBeginPtr();
            local_84 = *pfVar1;
            pfVar1 = (float*)local_c0.y();
            local_80 = *pfVar1;
            pfVar1 = (float*)local_a0.SSOBeginPtr();
            local_7c = *pfVar1;
            pfVar1 = (float*)local_a0.y();
            AddElementPreciseInnerClipped(local_48, local_90, local_8c, local_88, local_84, local_80, local_7c, *pfVar1,
                                          arg5, arg6, arg7, arg8, arg9, texture, nullptr, false, blendMode);
        }
    }

    // 0x1008efd20
    void GUIManager::AddElementPreciseInner(float arg1, float arg2, float arg3, float arg4, unsigned int arg5,
                                            float arg6, float arg7, float arg8, float arg9,
                                            const render::Texture* texture1, const render::Texture* texture2,
                                            bool arg12, GUIManager::BlendMode blendMode, unsigned int arg14,
                                            unsigned int arg15) {
        uint8_t* this_00;
        unsigned int uVar1;
        int* piVar3;
        array<float, 2ul>* paVar4;
        float* pfVar5;
        uint32_t* puVar6;
        bool arg6_00;
        uint64_t in_register_00000081;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float local_9c;
        uint8_t local_98[16];
        uint8_t local_88[16];
        float local_50;
        float local_4c;
        float local_38;
        float local_34;

        float local_40 = (float)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg12);
        local_98._0_4_ = arg4;
        local_88._0_4_ = arg2;
        Texture* local_70 = texture1;
        float local_54 = arg1;
        float local_3c = arg3;
        bool cVar2 = field_40.empty();
        if (cVar2) {
            LogAssert("!m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      978,
                      "Ensure Begin() is called with a valid DrawCallState before submitting GUI elements to draw");
        }
        RT7Core* this_01 = field_0;
        int arg1_00 = (int)local_54;
        int arg2_00 = (int)(float)local_88._0_4_;
        int arg3_00 = math::RoundFloatToInt(local_3c);
        int arg4_00 = math::RoundFloatToInt((float)local_98._0_4_);
        cVar2 = this_01->ClippingTest(arg1_00, arg2_00, arg3_00, arg4_00);
        Texture* this_02 = local_70;
        if (cVar2) {
            arg6_00 = (uint8_t)local_40;
            if ((field_84 <= field_80) ||
                (cVar2 = IsStateChangeNeeded(blendMode, 0, arg5, local_70, texture2, arg6_00), cVar2)) {
                Render(nullptr);
                SetBatchMode(0);
                if (this_02 != nullptr) {
                    cVar2 = this_02->IsCreated();
                    if (!cVar2) {
                        LogAssert("texture->IsCreated()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/gui/GUIManager.cpp",
                                  996, "GUIManager texture being added that has no native resources");
                    }
                    field_88 = this_02;
                }
                field_108 = blendMode;
                if ((texture2 != nullptr) && (cVar2 = texture2->IsCreated(), !cVar2)) {
                    LogAssert("!textureMask || textureMask->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1000, "GUIManager textureMask being added that has no native resources");
                }
                field_96 = texture2;
                field_104 = arg6_00;
            }
            local_40 = arg6;
            local_34 = arg7;
            if ((arg14 == 1) && (arg15 == 1)) {
                local_38 = arg8;
                fVar7 = arg9;
            } else {
                local_38 = arg8 + (arg8 - arg6) * (float)(arg14 - 1);
                fVar7 = arg9 + (arg9 - arg7) * (float)(arg15 - 1);
            }
            (texture2)._0_4_ = fVar7;
            piVar3 = (int*)field_0->GetPixelBuffer();
            local_4c = (float)local_98._0_4_;
            local_50 = (float)local_88._0_4_;
            local_9c = local_3c;
            if (*piVar3 != -1) {
                fVar8 = local_3c - local_54;
                fVar7 = (float)local_98._0_4_ - (float)local_88._0_4_;
                if (0.0 < fVar8) {
                    fVar10 = (float)*piVar3;
                    fVar9 = local_38 - local_40;
                    if (local_54 < fVar10) {
                        local_40 = local_40 + ((fVar10 - local_54) * fVar9) / fVar8;
                        local_54 = fVar10;
                    }
                    fVar10 = (float)piVar3[2];
                    if (fVar10 < local_3c) {
                        local_38 = local_38 + ((fVar10 - local_3c) * fVar9) / fVar8;
                        local_9c = fVar10;
                    }
                }
                if (0.0 < fVar7) {
                    local_50 = (float)piVar3[1];
                    fVar8 = (texture2)._0_4_ - local_34;
                    if (local_50 <= (float)local_88._0_4_) {
                        local_50 = (float)local_88._0_4_;
                    } else {
                        local_34 = local_34 + ((local_50 - (float)local_88._0_4_) * fVar8) / fVar7;
                    }
                    fVar9 = (float)piVar3[3];
                    if (fVar9 < (float)local_98._0_4_) {
                        (texture2)._0_4_ = (texture2)._0_4_ + ((fVar9 - (float)local_98._0_4_) * fVar8) / fVar7;
                        local_4c = fVar9;
                    }
                }
            }
            if (this_02 == nullptr) {
                local_40 = -65000.0;
                (texture2)._0_4_ = -65000.0;
                local_34 = -65000.0;
                local_38 = -65000.0;
            }
            local_3c = (float)(int)m_lastViewportHeight;
            fVar7 = arg8 - arg6;
            if (0.0 <= fVar7) {
                local_98 = (unsigned __int128)((unsigned int)fVar7);
            } else {
                local_98._4_4_ = 2147483648;
                local_98._0_4_ = -fVar7;
                local_98._8_4_ = 2147483648;
                local_98._12_4_ = 2147483648;
                std::swap<float>(arg6, arg8);
            }
            fVar7 = arg9 - arg7;
            if (0.0 <= fVar7) {
                local_88 = (unsigned __int128)((unsigned int)fVar7);
            } else {
                local_88._4_4_ = 2147483648;
                local_88._0_4_ = -fVar7;
                local_88._8_4_ = 2147483648;
                local_88._12_4_ = 2147483648;
                std::swap<float>(arg7, arg9);
            }
            if (arg14 == 1) {
                local_98._0_8_ = local_98._0_8_ ^ 9223372039002259456;
                local_98._8_4_ = local_98._8_4_ ^ 2147483648;
                local_98._12_4_ = local_98._12_4_ ^ 2147483648;
            }
            fVar7 = local_3c - local_50;
            local_3c = local_3c - local_4c;
            this_00 = &field_744;
            if (arg15 == 1) {
                local_88._0_8_ = local_88._0_8_ ^ 9223372039002259456;
                local_88._8_4_ = local_88._8_4_ ^ 2147483648;
                local_88._12_4_ = local_88._12_4_ ^ 2147483648;
            }
            uVar1 = field_768;
            field_768 = uVar1 + 1;
            local_70._0_4_ = fVar7;
            paVar4 = (array<float, 2ul>*)(*this_00)[(unsigned long)uVar1];
            local_4c = arg6;
            local_50 = arg7;
            pfVar5 = (float*)(*paVar4)[0];
            *pfVar5 = local_54;
            pfVar5 = (float*)(*paVar4)[1];
            *pfVar5 = local_70._0_4_;
            *(unsigned int*)(paVar4 + 8) = arg5;
            ((paVar4 + 12))->Set(local_40, local_34);
            pfVar5 = (float*)(*((paVar4 + 20)))[0];
            *pfVar5 = local_4c;
            pfVar5 = (float*)(*((paVar4 + 20)))[1];
            *pfVar5 = local_50;
            puVar6 = (uint32_t*)(*((paVar4 + 28)))[0];
            *puVar6 = local_98._0_4_;
            puVar6 = (uint32_t*)(*((paVar4 + 28)))[1];
            *puVar6 = local_88._0_4_;
            uVar1 = field_768;
            field_768 = uVar1 + 1;
            paVar4 = (array<float, 2ul>*)(*this_00)[(unsigned long)uVar1];
            local_4c = arg6;
            local_50 = arg7;
            pfVar5 = (float*)(*paVar4)[0];
            *pfVar5 = local_9c;
            pfVar5 = (float*)(*paVar4)[1];
            *pfVar5 = local_70._0_4_;
            *(unsigned int*)(paVar4 + 8) = arg5;
            ((paVar4 + 12))->Set(local_38, local_34);
            pfVar5 = (float*)(*((paVar4 + 20)))[0];
            *pfVar5 = local_4c;
            pfVar5 = (float*)(*((paVar4 + 20)))[1];
            *pfVar5 = local_50;
            puVar6 = (uint32_t*)(*((paVar4 + 28)))[0];
            *puVar6 = local_98._0_4_;
            puVar6 = (uint32_t*)(*((paVar4 + 28)))[1];
            *puVar6 = local_88._0_4_;
            uVar1 = field_768;
            field_768 = uVar1 + 1;
            paVar4 = (array<float, 2ul>*)(*this_00)[(unsigned long)uVar1];
            local_70 = (Texture*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)arg6);
            local_34 = arg7;
            pfVar5 = (float*)(*paVar4)[0];
            *pfVar5 = local_9c;
            pfVar5 = (float*)(*paVar4)[1];
            *pfVar5 = local_3c;
            *(unsigned int*)(paVar4 + 8) = arg5;
            ((paVar4 + 12))->Set(local_38, (texture2)._0_4_);
            puVar6 = (uint32_t*)(*((paVar4 + 20)))[0];
            *puVar6 = local_70._0_4_;
            pfVar5 = (float*)(*((paVar4 + 20)))[1];
            *pfVar5 = local_34;
            puVar6 = (uint32_t*)(*((paVar4 + 28)))[0];
            *puVar6 = local_98._0_4_;
            puVar6 = (uint32_t*)(*((paVar4 + 28)))[1];
            *puVar6 = local_88._0_4_;
            uVar1 = field_768;
            field_768 = uVar1 + 1;
            paVar4 = (array<float, 2ul>*)(*this_00)[(unsigned long)uVar1];
            local_34 = arg6;
            local_38 = arg7;
            pfVar5 = (float*)(*paVar4)[0];
            *pfVar5 = local_54;
            pfVar5 = (float*)(*paVar4)[1];
            *pfVar5 = local_3c;
            *(unsigned int*)(paVar4 + 8) = arg5;
            ((paVar4 + 12))->Set(local_40, (texture2)._0_4_);
            pfVar5 = (float*)(*((paVar4 + 20)))[0];
            *pfVar5 = local_34;
            pfVar5 = (float*)(*((paVar4 + 20)))[1];
            *pfVar5 = local_38;
            puVar6 = (uint32_t*)(*((paVar4 + 28)))[0];
            *puVar6 = local_98._0_4_;
            puVar6 = (uint32_t*)(*((paVar4 + 28)))[1];
            *puVar6 = local_88._0_4_;
            field_80 = field_80 + 1;
        }
    }

    // 0x1008f0510
    void GUIManager::AddElementPreciseInnerClipped(float arg1, float arg2, float arg3, float arg4, float arg5,
                                                   float arg6, float arg7, float arg8, unsigned int arg9, float arg10,
                                                   float arg11, float arg12, float arg13,
                                                   const render::Texture* texture1, const render::Texture* texture2,
                                                   bool arg16, GUIManager::BlendMode blendMode) {
        float fVar7;
        uint8_t local_68[16];

        local_68._0_4_ = arg2;
        float local_48 = arg5;
        float local_44 = arg6;
        float local_40 = arg3;
        float local_3c = arg4;
        float local_38 = arg8;
        float local_34 = arg1;
        bool cVar2 = field_40.empty();
        if (cVar2) {
            LogAssert("!m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1111,
                      "Ensure Begin() is called with a valid DrawCallState before submitting GUI elements to draw");
        }
        auto piVar3 = field_0->GetPixelBuffer();
        if (piVar3[2] != -1) {
            fVar7 = (float)piVar3[2];
            if ((((fVar7 < local_34) && (fVar7 < local_40)) && (fVar7 < arg7)) && (fVar7 < local_48)) {
                return;
            }
            fVar7 = (float)*piVar3;
            if (((local_34 < fVar7) && (local_40 < fVar7)) && ((arg7 < fVar7 && (local_48 < fVar7)))) {
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
            (cVar2 = IsStateChangeNeeded(blendMode, 0, arg9, texture1, texture2, arg16), cVar2)) {
            Render(nullptr);
            SetBatchMode(0);
            if (texture1 != nullptr) {
                cVar2 = texture1->IsCreated();
                if (!cVar2) {
                    LogAssert("texture->IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1136, "GUIManager texture being added that has no native resources");
                }
                field_88 = texture1;
            }
            field_108 = blendMode;
            if ((texture2 != nullptr) && (cVar2 = texture2->IsCreated(), !cVar2)) {
                LogAssert("!textureMask || textureMask->IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                          "GUIManager.cpp",
                          1140, "GUIManager textureMask being added that has no native resources");
            }
            field_96 = texture2;
            field_104 = arg16;
        }
        if (texture1 == nullptr) {
            arg10 = -65000.0;
            arg12 = -65000.0;
            arg11 = -65000.0;
            arg13 = -65000.0;
        }
        float local_4c = (float)(int)m_lastViewportHeight;
        float local_88 = arg12 - arg10;
        if (local_88 < 0.0) {
            local_88 = -local_88;
            std::swap<float>(arg10, arg12);
        }
        fVar7 = local_4c - local_38;
        float fVar8 = local_4c - (float)local_68._0_4_;
        local_44 = local_4c - local_44;
        local_4c = local_4c - local_3c;
        uint8_t* this_00 = &field_744;
        float fVar9 = arg13 - arg11;
        if (0.0 <= fVar9) {
            local_68 = (unsigned __int128)((unsigned int)fVar9);
        } else {
            local_68._4_4_ = 2147483648;
            local_68._0_4_ = -fVar9;
            local_68._8_4_ = 2147483648;
            local_68._12_4_ = 2147483648;
            std::swap<float>(arg11, arg13);
        }
        local_88 = -local_88;
        local_68._0_8_ = local_68._0_8_ ^ 9223372039002259456;
        local_68._8_4_ = local_68._8_4_ ^ 2147483648;
        local_68._12_4_ = local_68._12_4_ ^ 2147483648;
        unsigned int uVar1 = field_768;
        field_768 = uVar1 + 1;
        array<float, 2ul>* paVar4 = (array<float, 2ul>*)(*this_00)[(unsigned long)uVar1];
        local_38 = arg10;
        local_3c = arg11;
        float* pfVar5 = (float*)(*paVar4)[0];
        *pfVar5 = local_34;
        pfVar5 = (float*)(*paVar4)[1];
        *pfVar5 = fVar8;
        *(unsigned int*)(paVar4 + 8) = arg9;
        ((paVar4 + 12))->Set(local_38, local_3c);
        pfVar5 = (float*)(*((paVar4 + 20)))[0];
        *pfVar5 = local_38;
        pfVar5 = (float*)(*((paVar4 + 20)))[1];
        *pfVar5 = local_3c;
        pfVar5 = (float*)(*((paVar4 + 28)))[0];
        *pfVar5 = local_88;
        uint32_t* puVar6 = (uint32_t*)(*((paVar4 + 28)))[1];
        *puVar6 = local_68._0_4_;
        uVar1 = field_768;
        field_768 = uVar1 + 1;
        paVar4 = (array<float, 2ul>*)(*this_00)[(unsigned long)uVar1];
        local_38 = arg12;
        local_34 = arg11;
        local_3c = arg10;
        pfVar5 = (float*)(*paVar4)[0];
        *pfVar5 = local_40;
        pfVar5 = (float*)(*paVar4)[1];
        *pfVar5 = local_4c;
        *(unsigned int*)(paVar4 + 8) = arg9;
        ((paVar4 + 12))->Set(local_38, local_34);
        pfVar5 = (float*)(*((paVar4 + 20)))[0];
        *pfVar5 = local_3c;
        pfVar5 = (float*)(*((paVar4 + 20)))[1];
        *pfVar5 = local_34;
        pfVar5 = (float*)(*((paVar4 + 28)))[0];
        *pfVar5 = local_88;
        puVar6 = (uint32_t*)(*((paVar4 + 28)))[1];
        *puVar6 = local_68._0_4_;
        uVar1 = field_768;
        field_768 = uVar1 + 1;
        paVar4 = (array<float, 2ul>*)(*this_00)[(unsigned long)uVar1];
        local_3c = arg12;
        local_38 = arg13;
        local_40 = arg10;
        local_34 = arg11;
        pfVar5 = (float*)(*paVar4)[0];
        *pfVar5 = local_48;
        pfVar5 = (float*)(*paVar4)[1];
        *pfVar5 = local_44;
        *(unsigned int*)(paVar4 + 8) = arg9;
        ((paVar4 + 12))->Set(local_3c, local_38);
        pfVar5 = (float*)(*((paVar4 + 20)))[0];
        *pfVar5 = local_40;
        pfVar5 = (float*)(*((paVar4 + 20)))[1];
        *pfVar5 = local_34;
        pfVar5 = (float*)(*((paVar4 + 28)))[0];
        *pfVar5 = local_88;
        puVar6 = (uint32_t*)(*((paVar4 + 28)))[1];
        *puVar6 = local_68._0_4_;
        uVar1 = field_768;
        field_768 = uVar1 + 1;
        paVar4 = (array<float, 2ul>*)(*this_00)[(unsigned long)uVar1];
        local_34 = arg10;
        local_48 = arg13;
        local_40 = arg11;
        pfVar5 = (float*)(*paVar4)[0];
        *pfVar5 = arg7;
        pfVar5 = (float*)(*paVar4)[1];
        *pfVar5 = fVar7;
        *(unsigned int*)(paVar4 + 8) = arg9;
        ((paVar4 + 12))->Set(local_34, local_48);
        pfVar5 = (float*)(*((paVar4 + 20)))[0];
        *pfVar5 = local_34;
        pfVar5 = (float*)(*((paVar4 + 20)))[1];
        *pfVar5 = local_40;
        pfVar5 = (float*)(*((paVar4 + 28)))[0];
        *pfVar5 = local_88;
        puVar6 = (uint32_t*)(*((paVar4 + 28)))[1];
        *puVar6 = local_68._0_4_;
        field_80 = field_80 + 1;
    }

    // 0x1008f0b60
    void GUIManager::AddElementRotatedTiled(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, float arg6,
                                            float arg7, float arg8, float arg9, const render::Texture* texture,
                                            GUIManager::BlendMode blendMode, float arg12, int arg13, int arg14) {
        unsigned int uVar1;
        unsigned int* puVar2;
        long lVar3;
        float* pfVar4;
        uint32_t* puVar5;
        Layout* pLVar6;
        Vector2T<int>* pVVar7;
        int iVar8;
        int iVar9;
        float fVar10;
        float fVar11;
        Matrix22T<float> local_d0;
        Vector2T<int> local_b8;
        unsigned int local_ac;
        Vector2T<int> local_a8;
        Vector2T<int> local_a0;
        Vector2T<int> local_98;
        Vector2T<int> local_90;
        float local_78;
        float local_74;
        float local_70;
        float local_6c;
        float local_68;
        float local_64;
        float local_60;
        float local_5c;
        unsigned long local_58;
        float local_50;
        float local_4c;
        float local_48;
        uint32_t uStack_44;
        uint32_t uStack_40;
        uint32_t uStack_3c;
        float local_38;
        float local_34;

        if (m_skipTiledElements == '\0' && m_skipRotatedElements == '\0') {
            local_6c = (float)arg3;
            local_68 = (float)arg4;
            local_5c = arg12;
            puVar2 = (unsigned int*)texture->second();
            local_34 = (float)*puVar2;
            local_50 = (float)::abs(arg8 - arg6);
            local_50 = local_50 * local_34;
            lVar3 = texture->second();
            local_34 = (float)*(unsigned int*)(lVar3 + 4);
            local_4c = (float)::abs(arg9 - arg7);
            local_4c = local_4c * local_34;
            local_a8 = math::Vector2T();
            if (arg13 == -999999) {
                local_34 = local_50 * 0.5 + (float)arg1;
                pfVar4 = (float*)local_a8.SSOBeginPtr();
                *pfVar4 = local_34;
                local_34 = local_4c * 0.5 + (float)arg2;
            } else {
                local_34 = (float)arg13;
                pfVar4 = (float*)local_a8.SSOBeginPtr();
                *pfVar4 = local_34;
                local_34 = (float)arg14;
            }
            local_60 = (float)arg2;
            pfVar4 = (float*)local_a8.y();
            *pfVar4 = local_34;
            local_a0 = math::Vector2T();
            local_b8 = math::Vector2T();
            local_98 = math::Vector2T();
            local_90 = math::Vector2T();
            local_38 = (float)arg1;
            local_64 = (float)arg1;
            pfVar4 = (float*)local_a8.SSOBeginPtr();
            local_34 = local_38 - *pfVar4;
            pfVar4 = (float*)local_a0.SSOBeginPtr();
            *pfVar4 = local_34;
            local_34 = (float)arg2;
            pfVar4 = (float*)local_a8.y();
            local_48 = local_34 - *pfVar4;
            pfVar4 = (float*)local_a0.y();
            *pfVar4 = local_48;
            local_48 = local_50 + local_38;
            pfVar4 = (float*)local_a8.SSOBeginPtr();
            local_58._0_4_ = local_48 - *pfVar4;
            pfVar4 = (float*)local_b8.SSOBeginPtr();
            *pfVar4 = (float)local_58;
            pfVar4 = (float*)local_a8.y();
            local_58._0_4_ = local_34 - *pfVar4;
            pfVar4 = (float*)local_b8.y();
            *pfVar4 = (float)local_58;
            pfVar4 = (float*)local_a8.SSOBeginPtr();
            local_48 = local_48 - *pfVar4;
            pfVar4 = (float*)local_90.SSOBeginPtr();
            *pfVar4 = local_48;
            local_48 = local_4c + local_34;
            pfVar4 = (float*)local_a8.y();
            local_58._0_4_ = local_48 - *pfVar4;
            pfVar4 = (float*)local_90.y();
            *pfVar4 = (float)local_58;
            pfVar4 = (float*)local_a8.SSOBeginPtr();
            local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)(local_38 - *pfVar4));
            puVar5 = (uint32_t*)local_98.SSOBeginPtr();
            *puVar5 = (float)local_58;
            pfVar4 = (float*)local_a8.y();
            local_48 = local_48 - *pfVar4;
            pfVar4 = (float*)local_98.y();
            *pfVar4 = local_48;
            math::SinCos(&local_74, &local_70, local_5c);
            local_d0 = math::Matrix22T<float>();
            local_48 = local_70;
            local_58 = 0;
            pLVar6 = &local_d0[0];
            pfVar4 = (float*)pLVar6->SSOBeginPtr();
            *pfVar4 = local_48;
            local_48 = -local_74;
            uStack_44 = 2147483648;
            uStack_40 = 2147483648;
            uStack_3c = 2147483648;
            pVVar7 = &local_d0[0];
            pfVar4 = (float*)pVVar7->y();
            *pfVar4 = local_48;
            local_48 = local_74;
            pLVar6 = &local_d0[1];
            pfVar4 = (float*)pLVar6->SSOBeginPtr();
            *pfVar4 = local_48;
            local_48 = local_70;
            pVVar7 = &local_d0[1];
            pfVar4 = (float*)pVVar7->y();
            *pfVar4 = local_48;
            local_a8 *= &local_d0;
            local_a0 *= &local_d0;
            local_b8 *= &local_d0;
            local_90 *= &local_d0;
            local_98 *= &local_d0;
            local_a0 += local_a8;
            local_b8 += local_a8;
            local_98 += local_a8;
            local_90 += local_a8;
            pfVar4 = (float*)local_a0.SSOBeginPtr();
            local_48 = *pfVar4;
            pfVar4 = (float*)local_b8.SSOBeginPtr();
            local_48 = (float)eastl::min<float>(local_48, *pfVar4);
            pfVar4 = (float*)local_98.SSOBeginPtr();
            local_5c = *pfVar4;
            pfVar4 = (float*)local_90.SSOBeginPtr();
            fVar10 = (float)eastl::min<float>(local_5c, *pfVar4);
            fVar10 = (float)eastl::min<float>(local_48, fVar10);
            local_38 = fVar10 - local_38;
            pfVar4 = (float*)local_a8.SSOBeginPtr();
            *pfVar4 = local_38;
            pfVar4 = (float*)local_a0.y();
            local_38 = *pfVar4;
            pfVar4 = (float*)local_b8.y();
            local_38 = (float)eastl::min<float>(local_38, *pfVar4);
            pfVar4 = (float*)local_98.y();
            local_48 = *pfVar4;
            pfVar4 = (float*)local_90.y();
            fVar10 = (float)eastl::min<float>(local_48, *pfVar4);
            fVar10 = (float)eastl::min<float>(local_38, fVar10);
            local_34 = fVar10 - local_34;
            pfVar4 = (float*)local_a8.y();
            *pfVar4 = local_34;
            local_a0 -= local_a8;
            local_b8 -= local_a8;
            local_90 -= local_a8;
            local_98 -= local_a8;
            iVar8 = (int)local_6c - (int)local_64;
            iVar9 = (int)local_68 - (int)local_60;
            local_34 = local_70;
            local_48 = (float)::abs(local_70 * local_50);
            local_38 = local_74;
            local_78 = (float)::abs(local_74 * local_4c);
            local_78 = local_78 + local_48;
            local_34 = (float)::abs(local_34 * local_4c);
            local_60 = (float)::abs(local_38 * local_50);
            local_60 = local_60 + local_34;
            fVar10 = (float)ceil((float)iVar8 / local_78);
            fVar11 = (float)ceil((float)iVar9 / local_60);
            if (0 < (int)fVar10) {
                local_ac = (int)fVar10;
                do {
                    if (0 < (int)fVar11) {
                        local_34 = (float)(int)(float)local_58 * local_78;
                        iVar8 = 0;
                        do {
                            pfVar4 = (float*)local_a0.SSOBeginPtr();
                            local_48 = *pfVar4 + local_34;
                            pfVar4 = (float*)local_a0.y();
                            local_38 = (float)iVar8 * local_60;
                            local_50 = *pfVar4 + local_38;
                            pfVar4 = (float*)local_b8.SSOBeginPtr();
                            local_4c = *pfVar4 + local_34;
                            pfVar4 = (float*)local_b8.y();
                            local_6c = *pfVar4 + local_38;
                            pfVar4 = (float*)local_90.SSOBeginPtr();
                            local_68 = *pfVar4 + local_34;
                            pfVar4 = (float*)local_90.y();
                            local_64 = *pfVar4 + local_38;
                            pfVar4 = (float*)local_98.SSOBeginPtr();
                            local_5c = *pfVar4 + local_34;
                            pfVar4 = (float*)local_98.y();
                            AddElementInnerClipped(local_48, local_50, local_4c, local_6c, local_68, local_64, local_5c,
                                                   local_38 + *pfVar4, arg5, arg6, arg7, arg8, arg9, texture, nullptr,
                                                   false, blendMode);
                            iVar8 = iVar8 + 1;
                        } while ((int)fVar11 != iVar8);
                    }
                    uVar1 = (int)local_58 + 1;
                    local_58 = (unsigned long)uVar1;
                } while (uVar1 != local_ac);
            }
        }
    }

    // 0x1008f1380
    void GUIManager::AddElementIn3DSpace(const math::Vector3T<float>& vector3, int arg2, int arg3,
                                         const math::Matrix44T<float>& matrix441,
                                         const math::Matrix44T<float>& matrix442, unsigned int arg6, float arg7,
                                         float arg8, float arg9, float arg10, render::Texture* texture,
                                         GUIManager::BlendMode blendMode, bool arg13, int arg14, int arg15) {
        float* pfVar1;
        uint32_t* puVar2;
        float local_34;

        Vector4T<float> local_48(vector3, 1.0);
        local_48 *= matrix442;
        local_48 *= matrix441;
        if (arg13) {
            pfVar1 = (float*)local_48.qw();
            local_34 = *pfVar1;
            pfVar1 = (float*)local_48.SSOBeginPtr();
            *pfVar1 = *pfVar1 / local_34;
            pfVar1 = (float*)local_48.qw();
        } else {
            pfVar1 = (float*)local_48.second();
            local_34 = *pfVar1;
            pfVar1 = (float*)local_48.SSOBeginPtr();
            *pfVar1 = *pfVar1 / local_34;
            pfVar1 = (float*)local_48.second();
        }
        local_34 = *pfVar1;
        pfVar1 = (float*)local_48.y();
        *pfVar1 = *pfVar1 / local_34;
        pfVar1 = (float*)local_48.SSOBeginPtr();
        float fVar3 = (float)::abs(*pfVar1);
        if (fVar3 < 0.0005) {
            puVar2 = (uint32_t*)local_48.SSOBeginPtr();
            *puVar2 = 0;
        }
        pfVar1 = (float*)local_48.y();
        fVar3 = (float)::abs(*pfVar1);
        if (fVar3 < 0.0005) {
            puVar2 = (uint32_t*)local_48.y();
            *puVar2 = 0;
        }
        pfVar1 = (float*)local_48.SSOBeginPtr();
        local_34 = (float)(int)m_lastViewportWidth * (*pfVar1 * 0.5 + 0.5);
        pfVar1 = (float*)local_48.y();
        fVar3 = (float)(int)m_lastViewportHeight * (*pfVar1 * 0.5 + 0.5) - (float)arg15;
        AddElementInner((int)(local_34 - (float)arg14), (int)fVar3, (int)((float)arg2 + (local_34 - (float)arg14)),
                        (int)((float)arg3 + fVar3), arg6, arg7, arg8, arg9, arg10, texture, nullptr, false, blendMode,
                        1, 1);
    }

    // 0x1008f1630
    void GUIManager::AddTriangleListInner(const eastl::vector<float>& arg1, const eastl::vector<int>& arg2,
                                          unsigned int arg3, GUIManager::BlendMode blendMode) {
        uint8_t* this_01;
        float fVar1;
        float fVar2;
        unsigned long uVar10;
        unsigned long uVar11;
        array<short, 2ul>* this_02;
        uint16_t* puVar12;
        float* pfVar13;

        long lVar6 = arg2.size();
        if (6148914691236517205 < (unsigned long)(lVar6 * -6148914691236517205)) {
            LogAssert("indices.size() % 3 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1195, nullptr);
        }
        bool cVar3 = field_40.empty();
        if (cVar3) {
            LogAssert("!m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1196,
                      "Ensure Begin() is called with a valid DrawCallState before submitting GUI elements to draw");
        }
        unsigned long uVar7 = arg1.size();
        unsigned int arg1_00 = (unsigned int)(uVar7 >> 1) & 2147483647;
        unsigned int uVar4 = arg2.size();
        cVar3 = field_1656.HasRoom(arg1_00, uVar4);
        if (cVar3) {
            cVar3 = IsStateChangeNeeded(blendMode, 1, arg3, nullptr, nullptr, false);
            if (!cVar3)
                goto LAB_1008f173b;
        }
        Render(nullptr);
        SetBatchMode(1);
        field_108 = blendMode;
    LAB_1008f173b:
        uint8_t* this_00 = &field_1960;
        int iVar5 = this_00->size();
        auto piVar8 = arg2.HeapBeginPtr();
        auto piVar9 = arg2.end();
        if (piVar8 != piVar9) {
            this_01 = &field_2080;
            do {
                uVar10 = this_01->size();
                uVar11 = this_01->capacity();
                if (uVar11 <= uVar10) {
                    LogAssert("m_vertexDynamic.m_indexDataBuffer.size() < m_vertexDynamic.m_indexDataBuffer.capacity()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1212, nullptr);
                }
                this_01->push_back((short)*piVar8 + (short)iVar5);
                if (65535 < (unsigned int)(*piVar8 + iVar5)) {
                    LogAssert("startIndex + index <= std::numeric_limits<uint16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "gui/GUIManager.cpp",
                              1214, nullptr);
                }
                piVar8 = piVar8 + 1;
            } while (piVar8 != piVar9);
        }
        iVar5 = arg2.size();
        field_80 = field_80 + iVar5;
        unsigned int local_48 = (unsigned int)uVar7;
        if (1 < local_48) {
            uVar7 = 1;
            if (1 < arg1_00) {
                uVar7 = (unsigned long)arg1_00;
            }
            uVar10 = 0;
            do {
                pfVar13 = &arg1[uVar10];
                fVar1 = *pfVar13;
                pfVar13 = &arg1[uVar10 + 1];
                uVar4 = m_lastViewportHeight;
                fVar2 = *pfVar13;
                uVar11 = this_00->size();
                if (this_00->capacity() <= uVar11) {
                    LogAssert(
                        "m_vertexDynamic.m_vertexDataBuffer.size() < m_vertexDynamic.m_vertexDataBuffer.capacity()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                        "GUIManager.cpp",
                        1227, nullptr);
                }
                this_00->push_back_uninitialized();
                this_02 = (array<short, 2ul>*)this_00->back();
                puVar12 = (uint16_t*)(*this_02)[0];
                *puVar12 = (short)(int)fVar1;
                puVar12 = (uint16_t*)(*this_02)[1];
                *puVar12 = (short)(int)((float)(int)uVar4 - fVar2);
                *(unsigned int*)(this_02 + 4) = arg3;
                ((this_02 + 8))->Set(-65000.0, -65000.0);
                *((this_02 + 16)) = math::Vector2T<float>::SetToZero();
                *((this_02 + 24)) = math::Vector2T<float>::SetToOne();
                uVar10 = uVar10 + 2;
            } while (uVar7 * 2 != uVar10);
        }
    }

    // 0x1008f1bd0
    void GUIManager::AddLineIn3DSpace(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                                      float arg3, const math::Matrix44T<float>& matrix441,
                                      const math::Matrix44T<float>& matrix442, unsigned int arg6,
                                      GUIManager::BlendMode blendMode, bool arg8) {
        float* pfVar2;
        ReturnValue* vector2;
        float arg4;
        Vector4T<float> local_88;
        Point<float> local_78;
        Point<float> local_70;
        Vector2T<int> local_68;
        ReturnValue local_58;
        float local_48;
        float local_44;
        float local_34;

        if (!vector31 == vector32) {
            local_88 = math::Vector4T(vector31, 1.0);
            local_88 *= matrix442;
            local_88 *= matrix441;
            pfVar2 = &local_88[3];
            local_34 = *pfVar2;
            pfVar2 = &local_88[0];
            *pfVar2 = *pfVar2 / local_34;
            pfVar2 = &local_88[3];
            local_34 = *pfVar2;
            pfVar2 = &local_88[1];
            *pfVar2 = *pfVar2 / local_34;
            pfVar2 = &local_88[3];
            local_34 = *pfVar2;
            pfVar2 = &local_88[2];
            *pfVar2 = *pfVar2 / local_34;
            pfVar2 = &local_88[0];
            local_34 = (float)(int)m_lastViewportWidth * (*pfVar2 * 0.5 + 0.5);
            pfVar2 = &local_88[0];
            *pfVar2 = local_34;
            pfVar2 = &local_88[1];
            local_34 = (float)(int)m_lastViewportHeight * (*pfVar2 * 0.5 + 0.5);
            pfVar2 = &local_88[1];
            *pfVar2 = local_34;
            pfVar2 = &local_88[0];
            local_48 = *pfVar2;
            local_34 = (float)(int)m_lastViewportHeight;
            pfVar2 = &local_88[1];
            local_34 = local_34 - *pfVar2;
            local_88.Set(vector32, 1.0);
            local_88 *= matrix442;
            local_88 *= matrix441;
            pfVar2 = &local_88[3];
            (vector32)._0_4_ = *pfVar2;
            pfVar2 = &local_88[0];
            *pfVar2 = *pfVar2 / (vector32)._0_4_;
            pfVar2 = &local_88[3];
            (vector32)._0_4_ = *pfVar2;
            pfVar2 = &local_88[1];
            *pfVar2 = *pfVar2 / (vector32)._0_4_;
            pfVar2 = &local_88[3];
            (vector32)._0_4_ = *pfVar2;
            pfVar2 = &local_88[2];
            *pfVar2 = *pfVar2 / (vector32)._0_4_;
            pfVar2 = &local_88[0];
            (vector32)._0_4_ = (float)(int)m_lastViewportWidth * (*pfVar2 * 0.5 + 0.5);
            pfVar2 = &local_88[0];
            *pfVar2 = (vector32)._0_4_;
            pfVar2 = &local_88[1];
            (vector32)._0_4_ = (float)(int)m_lastViewportHeight * (*pfVar2 * 0.5 + 0.5);
            pfVar2 = &local_88[1];
            *pfVar2 = (vector32)._0_4_;
            pfVar2 = &local_88[0];
            (vector32)._0_4_ = *pfVar2;
            local_44 = (float)(int)m_lastViewportHeight;
            pfVar2 = &local_88[1];
            arg4 = local_44 - *pfVar2;
            if ((local_48 != (vector32)._0_4_) || (local_34 != arg4)) {
                if (arg8) {
                    local_44 = arg4;
                    local_78 = math::Point(local_48, local_34);
                    local_70 = math::Point((vector32)._0_4_, local_44);
                    local_68 = math::Vector2T();
                    local_58 = (ReturnValue)local_70 - local_78;
                    vector2 = local_58 = math::Vector2T<float>::Normalize();
                    local_68 = *vector2;
                    local_34 = arg3 - 1.0;
                    local_58 = (ReturnValue)local_68 * *local_34;
                    local_78 -= local_58;
                    local_58 = (ReturnValue)local_68 * *local_34;
                    local_70 += local_58;
                    pfVar2 = (float*)local_78.SSOBeginPtr();
                    local_48 = *pfVar2;
                    pfVar2 = (float*)local_78.y();
                    local_34 = *pfVar2;
                    pfVar2 = (float*)local_70.SSOBeginPtr();
                    (vector32)._0_4_ = *pfVar2;
                    pfVar2 = (float*)local_70.y();
                    arg4 = *pfVar2;
                }
                AddGeneralLine(local_48, local_34, (vector32)._0_4_, arg4, arg3, arg6, blendMode, false);
            }
        }
    }

    // 0x1008f2110
    void GUIManager::AddGeneralLine(float arg1, float arg2, float arg3, float arg4, float arg5, unsigned int arg6,
                                    GUIManager::BlendMode blendMode, bool arg8) {
        uint8_t* this_00;
        unsigned int uVar1;
        bool cVar2;
        int* piVar3;
        array<short, 2ul>* paVar4;
        uint16_t* puVar5;
        ReturnValue* vector2;
        uint32_t* puVar6;
        unsigned int* puVar7;
        int iVar8;
        float fVar9;
        Point<float> local_88;
        Point<float> local_80;
        Vector2T<int> local_78;
        ReturnValue local_70;
        float local_68;
        uint32_t uStack_64;
        uint32_t uStack_60;
        uint32_t uStack_5c;
        float local_48;
        unsigned int local_44;
        uint64_t local_40;
        float local_34;

        if ((m_skipLineElements == '\0') && ((arg1 != arg3 || (arg2 != arg4)))) {
            local_68 = arg1;
            local_48 = arg2;
            local_44 = arg6;
            local_34 = arg5;
            piVar3 = (int*)field_0->GetPixelBuffer();
            if ((piVar3[2] == -1) || (((((fVar9 = (float)piVar3[2], local_68 <= fVar9 || (arg3 <= fVar9)) &&
                                         (((float)*piVar3 <= local_68 || ((float)*piVar3 <= arg3)))) &&
                                        ((local_48 <= (float)piVar3[3] || (arg4 <= (float)piVar3[3])))) &&
                                       (((float)piVar3[1] <= local_48 || ((float)piVar3[1] <= arg4)))))) {
                if (!arg8) {
                    if ((field_76 == 2) && (((local_68 == arg3 || (local_48 == arg4)) && (local_34 == 1.0)))) {
                        AddColouredRectangle((int)local_68, (int)local_48, (int)((1.0 - local_68) + arg3),
                                             (int)((1.0 - local_48) + arg4), local_44, blendMode);
                        return;
                    }
                    cVar2 = IsStateChangeNeeded(blendMode, 3, local_44, nullptr, nullptr, false);
                    if ((cVar2) || (local_34 != 1.0)) {
                        local_88 = math::Point(local_68, local_48);
                        local_80 = math::Point(arg3, arg4);
                        local_78 = math::Vector2T();
                        local_70 = (ReturnValue)local_80 - local_88;
                        vector2 = local_70 = math::Vector2T<float>::Normalize();
                        local_40 = *vector2 * *local_34;
                        local_78 = local_40;
                        puVar6 = (uint32_t*)local_78.SSOBeginPtr();
                        local_34 = (float)*puVar6;
                        puVar7 = (unsigned int*)local_78.y();
                        local_68 = (float)(*puVar7 ^ 2147483648);
                        uStack_64 = 2147483648;
                        uStack_60 = 2147483648;
                        uStack_5c = 2147483648;
                        puVar7 = (unsigned int*)local_78.SSOBeginPtr();
                        *puVar7 = (unsigned int)local_68;
                        puVar6 = (uint32_t*)local_78.y();
                        *puVar6 = local_34;
                        local_40 = local_88 - local_78;
                        puVar6 = (uint32_t*)local_40.SSOBeginPtr();
                        local_34 = (float)*puVar6;
                        this_00 = &field_2200;
                        puVar6 = (uint32_t*)(*this_00)[0];
                        *puVar6 = local_34;
                        local_40 = local_88 - local_78;
                        puVar6 = (uint32_t*)local_40.y();
                        local_34 = (float)*puVar6;
                        puVar6 = (uint32_t*)(*this_00)[1];
                        *puVar6 = local_34;
                        local_40 = local_80 - local_78;
                        puVar6 = (uint32_t*)local_40.SSOBeginPtr();
                        local_34 = (float)*puVar6;
                        puVar6 = (uint32_t*)(*this_00)[2];
                        *puVar6 = local_34;
                        local_40 = local_80 - local_78;
                        puVar6 = (uint32_t*)local_40.y();
                        local_34 = (float)*puVar6;
                        puVar6 = (uint32_t*)(*this_00)[3];
                        *puVar6 = local_34;
                        local_40 = local_80 + local_78;
                        puVar6 = (uint32_t*)local_40.SSOBeginPtr();
                        local_34 = (float)*puVar6;
                        puVar6 = (uint32_t*)(*this_00)[4];
                        *puVar6 = local_34;
                        local_40 = local_80 + local_78;
                        puVar6 = (uint32_t*)local_40.y();
                        local_34 = (float)*puVar6;
                        puVar6 = (uint32_t*)(*this_00)[5];
                        *puVar6 = local_34;
                        local_40 = local_88 + local_78;
                        puVar6 = (uint32_t*)local_40.SSOBeginPtr();
                        local_34 = (float)*puVar6;
                        puVar6 = (uint32_t*)(*this_00)[6];
                        *puVar6 = local_34;
                        local_40 = local_88 + local_78;
                        puVar6 = (uint32_t*)local_40.y();
                        local_34 = (float)*puVar6;
                        puVar6 = (uint32_t*)(*this_00)[7];
                        *puVar6 = local_34;
                        AddTriangleListInner(*this_00, m_quadIndices, local_44, blendMode);
                        return;
                    }
                }
                if (local_34 != 1.0) {
                    LogAssert(
                        "thickness == 1.f",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                        "GUIManager.cpp",
                        1471,
                        "Lines with a thickness that is not 1 cannot be rendered using native line rasterisation.");
                }
                if (((field_84 <= field_80) || (local_34 != field_112)) ||
                    (cVar2 = IsStateChangeNeeded(blendMode, 3, local_44, nullptr, nullptr, false), cVar2)) {
                    Render(nullptr);
                    SetBatchMode(3);
                    field_112 = local_34;
                    field_108 = blendMode;
                }
                local_48 = (float)(int)m_lastViewportHeight - local_48;
                local_34 = (float)(int)m_lastViewportHeight - arg4;
                DoByteReorder<EndianSwap, int>(&local_44);
                uVar1 = field_1280;
                field_1280 = uVar1 + 1;
                paVar4 = &field_1256[(unsigned long)uVar1];
                iVar8 = (int)local_68;
                puVar5 = (uint16_t*)(*paVar4)[0];
                *puVar5 = (short)iVar8;
                iVar8 = (int)local_48;
                puVar5 = (uint16_t*)(*paVar4)[1];
                *puVar5 = (short)iVar8;
                *(unsigned int*)(paVar4 + 4) = local_44;
                uVar1 = field_1280;
                field_1280 = uVar1 + 1;
                paVar4 = &field_1256[(unsigned long)uVar1];
                iVar8 = (int)arg3;
                puVar5 = (uint16_t*)(*paVar4)[0];
                *puVar5 = (short)iVar8;
                iVar8 = (int)local_34;
                puVar5 = (uint16_t*)(*paVar4)[1];
                *puVar5 = (short)iVar8;
                *(unsigned int*)(paVar4 + 4) = local_44;
                field_80 = field_80 + 1;
            }
        }
    }

    // 0x1008f2c20
    void GUIManager::OnEndFrame() {
        uint64_t in_RAX;

        uint32_t uVar2 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (field_80 != 0) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1762, "GUIManager frame ended while %u elements are still waiting to be rendered",
                      (((uint64_t)uVar2 << 32) | (uint32_t)field_80));
        }
        field_120.OnEndFrame();
        field_632.OnEndFrame();
        field_1144.OnEndFrame();
        field_1656.OnEndFrame();
        ResetBatchState();
        field_2256 = field_2252;
        field_2252 = 0;
        if (field_40.empty() == '\0') {
            LogAssert("m_drawCallStates.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "GUIManager.cpp",
                      1773, "GUIManager has leaked DrawCallStates, check Begin/End calls");
        }
    }

    // 0x1008f2d60
    void GUIManager::RemoveCurrentTexture(const render::Texture* texture) {
        if (field_88 == texture) {
            if (field_80 != 0) {
                Render(nullptr);
            }
            field_88 = nullptr;
        }
    }

    // 0x1008f2d90
    void GUIManager::RemoveCurrentTextureMask(const render::Texture* texture) {
        if (field_96 == texture) {
            if (field_80 != 0) {
                Render(nullptr);
            }
            field_96 = nullptr;
        }
    }

    // 0x1008f3490
    void GUIManager::SetProjectionOverride(int arg1, int arg2, unsigned int arg3, unsigned int arg4) {
        field_2232 = arg1;
        field_2236 = arg2;
        field_2240 = arg3;
        field_2244 = arg4;
        UpdateProjection(true);
    }

    // 0x1008f34c0
    void GUIManager::ResetProjectionOverride() {
        field_2232 = 4294967295;
        field_2236 = 4294967295;
        field_2240 = 4294967295;
        field_2244 = 4294967295;
        UpdateProjection(true);
    }

    // 0x100916e10
    void ___cxx_global_var_init_91(void) {
        uint64_t local_28 = 12884901890;
        mach_header* local_38 = &__mh_execute_header;
        uint64_t uStack_30 = 2;
        new ((vector<int>*)&GUIManager::m_quadIndices) eastl::vector<int>(&local_38, *6);
        ___cxa_atexit(PTR__vector_100ee6d78, &GUIManager::m_quadIndices, 4294967296);
    }

} // namespace jag::graphics

// 0x1008f0b40
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}

// 0x1008f0b50
void ceil(float arg1) {
    _ceilf();
}

namespace jag {
    // 0x1008e5780
    bool FromString<StringView, unsigned int>(const StringView& stringView, unsigned int& arg2, int arg3) {

        StringView local_30(stringView);
        return (bool)FromText(&local_30, arg2, arg3);
    }

} // namespace jag
