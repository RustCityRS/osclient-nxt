// libs/graphics/runetek7/model/BillboardBatchRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "BillboardBatchRenderer.h"

namespace jag::fixedfunction {
    // 0x10086fff0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100870000
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 64) = *(uint64_t*)(this + 64);
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 16);
        uint64_t uVar4 = *(uint64_t*)(this + 24);
        uint64_t uVar5 = *(uint64_t*)(this + 32);
        uint64_t uVar6 = *(uint64_t*)(this + 40);
        uint64_t uVar7 = *(uint64_t*)(this + 56);
        *(uint64_t*)((long)arg1 + 48) = *(uint64_t*)(this + 48);
        *(uint64_t*)((long)arg1 + 56) = uVar7;
        *(uint64_t*)((long)arg1 + 32) = uVar5;
        *(uint64_t*)((long)arg1 + 40) = uVar6;
        *(uint64_t*)((long)arg1 + 16) = uVar3;
        *(uint64_t*)((long)arg1 + 24) = uVar4;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100870030
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100870040
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1::operator()((__1*)this, arg1);
    }

    // 0x100870100
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x1008715d0
    void function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul>*,
                                                WrapArray<graphics::MaterialInfo const> const&)::$_5,
        void>(graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul>*,
                                                      WrapArray<graphics::MaterialInfo const> const&)::$_5&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {}

    // 0x1008715e0
    void function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul>*,
                                                WrapArray<graphics::MaterialInfo const> const&)::$_5,
        void>(graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul>*,
                                                      WrapArray<graphics::MaterialInfo const> const&)::$_5&&)::{
        lambda(void*, graphicutils::TextureAtlasSlot const&) #1
    }
    ::__invoke(void* arg1, const graphicutils::TextureAtlasSlot& textureAtlasSlot) {}

    // 0x1008715f0
    void function<void(graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul>*,
                                                WrapArray<graphics::MaterialInfo const> const&)::$_5,
        void>(graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul>*,
                                                      WrapArray<graphics::MaterialInfo const> const&)::$_5&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x1008716f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100871700
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->UploadTexture(graphics::TextureAtlasTextureMapping&)::$_8::__8(arg1, (__8*)this);
    }

    // 0x100871770
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100871780
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        int->UploadTexture(graphics::TextureAtlasTextureMapping&)::$_8::operator()((__8*)this, arg1);
    }

    // 0x100871830
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x100871840
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        int->UploadTexture(graphics::TextureAtlasTextureMapping&)::$_8::~__8((__8*)this);
    }

} // namespace jag::fixedfunction

namespace jag::graphics {
    // 0x103bbdf18, set at startup by ___cxx_global_var_init.228
    render::VertexDeclaration BillboardBatchRenderer::m_vertexDecl = VertexDeclaration();

    // 0x103bbdf78, set at startup by ___cxx_global_var_init.229
    render::VertexDeclaration BillboardBatchRenderer::m_vertexDeclLP = VertexDeclaration();

    // 0x100868e00
    BillboardBatchRenderer::BillboardBatchRenderer() : DrawableRenderer(), field_8(4294967295), field_12(4294967295) {}

    // 0x100868e40
    BillboardBatchRenderer::~BillboardBatchRenderer() {
        Destroy();
    }

    // 0x100868e80
    void BillboardBatchRenderer::Destroy() {
        DestroyRenderingResources();
    }

    // 0x100868ec0
    uint32_t BillboardBatchRenderer::Initialise(RT7Core& rt7Core) {
        unsigned int uVar1 = rt7Core.GetPSTextureSlotManager();
        uint32_t uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_8 = uVar2;
        uVar1 = rt7Core.GetPSTextureSlotManager();
        uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_12 = uVar2;
        CreateRenderingResources();
        return 1;
    }

    // 0x100868f10
    void BillboardBatchRenderer::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_10;

        InitialiseVertexDeclarations();
        return 1;
    }

    // 0x100868f40
    void BillboardBatchRenderer::DestroyRenderingResources() {
        auto pVVar1 = Instance();
        pVVar1->Unregister(&m_vertexDecl);
        Singleton<render::VertexDeclarationManager>* this_00 =
            (Singleton<render::VertexDeclarationManager>*)&m_vertexDecl;
        m_vertexDecl.Destroy();
        pVVar1 = this_00->Instance();
        pVVar1->Unregister(&m_vertexDeclLP);
        m_vertexDeclLP.Destroy();
    }

    // 0x100868f90
    void BillboardBatchRenderer::Render(const BillboardBatch_DE& billboardBatch_DE,
                                        render::RenderContext& renderContext,
                                        const render::DrawCallState& drawCallState, const SceneViewData& sceneViewData,
                                        RenderPassType renderPassType, EffectManager& effectManager) {
        GeometryBatch* pGVar1;
        uint8_t bVar4;
        uint32_t uVar5;
        unsigned int uVar6;
        unsigned int arg3;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        ShaderProgram* this_04;
        RenderPipelineState* this_06;
        HashedString* pHVar7;
        VertexAnimation* this_07;
        vector_map<unsigned short, unsigned short>* arg1;
        vector_map<unsigned short, unsigned short>* arg3_00;
        vector_map<unsigned short, unsigned short>* arg4;
        TextureAtlasReference* textureAtlasReference;
        Matrix44T<float>* matrix44;
        Layout* this_09;
        long lVar9;
        InputAssemblerState* inputAssemblerState;
        DrawCallState* pDVar10;
        uint32_t in_register_00000084;
        RenderContext* renderContext_00;
        float arg2;
        EffectManager* in_stack_00000008;
        EffectList in_stack_ffffffffffffff48;
        DrawCallState local_b0;
        ShaderProgram* local_68;
        VertexAnimation* local_60;
        ParticleMaterial* local_50;
        vector_map<unsigned short, unsigned short>* local_40;

        BillboardBatchInstance* billboardBatchInstance =
            *(BillboardBatchInstance**)(renderContext.m_immediateContext + 96);
        BillboardBatch_DE* local_80 = billboardBatch_DE;
        if (billboardBatchInstance == nullptr) {
            LogAssert("pBillboardBatchInstance != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatchRenderer.cpp",
                      49, nullptr);
        }
        auto local_38 = billboardBatchInstance->GetBillboardBatch();
        auto local_58 = billboardBatchInstance->size();
        auto this_00 = billboardBatchInstance->GetMaterial();
        auto this_01 = this_00->GetRenderPassEffect((RenderPassType)effectManager);
        midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)this_01->GetShader(
            *((SceneViewData*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)renderPassType)));
        if (!*midiPlayerMainThread != nullptr) {
            LogAssert("renderPassEffect.GetShader(viewData) != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatchRenderer.cpp",
                      56, "No shader program available for billboardBatchInstance render pass");
        }
        auto this_02 =
            this_01->GetShader(*((SceneViewData*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)renderPassType)));
        Shader* this_03 = (Shader*)**this_02;
        if (this_03->IsReady()) {
            local_b0 = render::DrawCallState(sceneViewData);
            this_04 = this_03->GetProgram();
            renderContext_00 = (RenderContext*)drawCallState;
            this_04->GetNativeShaderProgram();
            ((Layout*)this_03->second())->SSOBeginPtr();
            this_06 = (RenderPipelineState*)local_b0.GetRenderPipelineState();
            local_68 = this_04;
            this_06->SetShaderProgram(this_04);
            local_50 = (ParticleMaterial*)billboardBatchInstance->GetMaterial();
            in_stack_00000008->SetShaderConstants(local_b0, *renderContext_00, *this_03, in_stack_ffffffffffffff48);
            pHVar7 = (HashedString*)graphics::operator*(116);
            arg2 = (float)local_58->GetCurrentFade();
            local_68->SetShaderConstFloat1(pHVar7, arg2);
            if (local_38->HasBones()) {
                this_07 = (VertexAnimation*)billboardBatchInstance->GetBatchList();
                pGVar1 = local_38;
                uVar5 = local_38->GetBoneCount();
                local_40 =
                    (vector_map<unsigned short, unsigned short>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar5);
                uVar6 = pGVar1->GetFaceLabelCount();
                arg3 = pGVar1->GetBillboardLabelCount();
                local_60 = this_07;
                this_07->SetMaxSize((unsigned int)local_40, uVar6, arg3);
                pGVar1 = local_38;
                arg1 = (vector_map<unsigned short, unsigned short>*)local_38->GetBoneIDMap();
                local_40 = (vector_map<unsigned short, unsigned short>*)pGVar1->GetWorld();
                arg3_00 = (vector_map<unsigned short, unsigned short>*)pGVar1->get_overflow_allocator();
                arg4 = (vector_map<unsigned short, unsigned short>*)pGVar1->GetBillboardLabelIDMap();
                renderContext_00 = (RenderContext*)drawCallState;
                local_60->DeferredUpdateAnimation(arg1, local_40, arg3_00, arg4);
                local_60->SetShaderConstants(*renderContext_00, *this_03);
            }
            textureAtlasReference = (TextureAtlasReference*)local_50->GetTextureAtlasReference();
            TextureAtlasing::SetShaderConstants(local_b0, *renderContext_00, *this_03, *textureAtlasReference,
                                                *(int*)&local_80->field_8, *(int*)&local_80->field_12);
            if ((uint8_t*)local_50->data() == AlphaMode::ALPHA_OPAQUE) {
                uVar6 = 4294967295;
            } else {
                bVar4 = local_50->GetAlphaTestThreshold();
                uVar6 = (unsigned int)bVar4;
            }
            AlphaTesting::SetShaderConstants(*this_03, uVar6);
            if (this_01->field_16.Contains(21)) {
                if (!(in_stack_00000008->IsEnabled(40))) {
                    ((IrradianceEffect*)local_58->GetIrradianceEffect())->SetShaderConstants(*this_03);
                } else {
                    this_03->SetIdentityShaderConstants(*40);
                }
            }
            pHVar7 = (HashedString*)graphics::operator*(0);
            matrix44 = (Matrix44T<float>*)local_58->GetMaterial();
            local_68->SetShaderConstMatrix4(pHVar7, 1, matrix44, 0);
            pDVar10 = &local_b0;
            this_09 = (Layout*)pDVar10->GetRenderPipelineState();
            lVar9 = pDVar10->Instance();
            this_09->SetHeapSize((lVar9 + 960));
            inputAssemblerState = (InputAssemblerState*)local_38->GetForwardPassIAState();
            pDVar10 = &local_b0;
            pDVar10->SetInputAssemblerState(inputAssemblerState);
            DrawPrimitives((BillboardBatchRenderer*)pDVar10, (BillboardBatch*)local_38, renderContext_00, &local_b0,
                           (vector<SourceModelExternalIndexSection>*)(billboardBatchInstance->m_vertexAnimation + 80),
                           *(vector_map<int, FaceGroupRenderMasks>**)(renderContext.m_immediateContext + 88));
        }
    }

    // 0x100869350
    void BillboardBatchRenderer::DrawPrimitives(
        const BillboardBatch& billboardBatch, render::RenderContext& renderContext,
        render::DrawCallState& drawCallState,
        const eastl::vector<SourceModelExternalIndexSection>& sourceModelExternalIndexSections,
        const eastl::vector_map<int, FaceGroupRenderMasks>* arg5) {
        unsigned int uVar2;
        IndexType IVar3;
        int arg1;
        unsigned int uVar4;
        long lVar6;
        unsigned int* puVar7;
        long lVar8;
        AnimationDescriptor* pAVar9;
        Component* pCVar10;
        unsigned long arg1_00;
        unsigned long arg1_01;
        int local_ea0;
        unsigned int local_e9c;

        FixedIndexPrimitiveBatchData<300ul> local_e98;
        unsigned long uVar5 = sourceModelExternalIndexSections.size();
        if ((arg5 == nullptr) || (uVar5 == 0)) {
            arg1 = billboardBatch.GetIndexCount();
            pCVar10 = (Component*)billboardBatch.GetLinearLookatAcceleration();
            IVar3 = pCVar10->GetCurrentX();
            local_e98.AddPrimitiveBatch(arg1, 0, IVar3);
        } else {
            local_e9c = 0;
            local_ea0 = 0;
            arg1_01 = 0;
            do {
                arg1_00 = arg1_01;
                lVar6 = sourceModelExternalIndexSections[arg1_01];
                puVar7 = (unsigned int*)(*((lVar6 + 20)))[arg1_00];
                lVar6 = eastl::vector_map<int, int>::find(*arg5);
                lVar8 = arg5->end();
                if (lVar6 == lVar8) {
                LAB_100869500:
                    if (uVar5 - 1 == arg1_01) {
                        uVar4 = puVar7[1];
                        pAVar9 = (AnimationDescriptor*)billboardBatch.GetLinearLookatAcceleration();
                        uVar2 = pAVar9->GetLoopLength();
                        if (uVar2 < uVar4) {
                            LogAssert("(currentIndexStart + (indexRange.m_indexEnd - currentIndexStart)) <= "
                                      "billboardBatch.GetIndexBuffer().GetIndexCount()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/BillboardBatchRenderer.cpp",
                                      222, nullptr);
                        }
                        uVar4 = puVar7[1];
                        pCVar10 = (Component*)billboardBatch.GetLinearLookatAcceleration();
                        IVar3 = pCVar10->GetCurrentX();
                        local_e98.AddPrimitiveBatch(uVar4 - local_e9c, local_e9c, IVar3);
                    } else {
                        local_ea0 = local_ea0 + 1;
                    }
                } else {
                    if (((lVar6 + 4))->IsHidden() == '\0')
                        goto LAB_100869500;
                    if (local_ea0 != 0) {
                        uVar4 = *puVar7;
                        pAVar9 = (AnimationDescriptor*)billboardBatch.GetLinearLookatAcceleration();
                        uVar2 = pAVar9->GetLoopLength();
                        if (uVar2 < uVar4) {
                            LogAssert("(currentIndexStart + (indexRange.m_indexStart - currentIndexStart)) <= "
                                      "billboardBatch.GetIndexBuffer().GetIndexCount()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/BillboardBatchRenderer.cpp",
                                      210, nullptr);
                        }
                        uVar4 = *puVar7;
                        pCVar10 = (Component*)billboardBatch.GetLinearLookatAcceleration();
                        IVar3 = pCVar10->GetCurrentX();
                        local_e98.AddPrimitiveBatch(uVar4 - local_e9c, local_e9c, IVar3);
                    }
                    local_e9c = puVar7[1];
                    local_ea0 = 0;
                }
                arg1_01 = arg1_01 + 1;
            } while (uVar5 != arg1_01);
        }
        uVar4 = local_e98.GetBatchCount();
        auto pLVar11 = local_e98.SSOBeginPtr();
        auto arg4 = pLVar11->HeapBeginPtr();
        pLVar11 = (Layout*)local_e98.GetStartIndexByteOffset();
        auto arg5_00 = pLVar11->HeapBeginPtr();
        renderContext.DrawMultiIndexedPrimitives(drawCallState, 4, uVar4, arg4, arg5_00);
    }

    // 0x100869660
    void BillboardBatchRenderer::InitialiseVertexDeclarations() {
        auto pSVar2 = graphics::operator*(216);
        VertexElementDesc local_e0 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(235);
        VertexElementDesc local_b8 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(252);
        VertexElementDesc local_90 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(231);
        VertexElementDesc local_68 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(249);
        VertexElementDesc local_40 = pSVar2->GetVertexElementDesc(0);
        auto pVVar3 = local_e0.data();
        m_vertexDecl.Create(pVVar3, 5, nullptr, 0);
        Singleton<render::VertexDeclarationManager>* pSVar5 =
            (Singleton<render::VertexDeclarationManager>*)&m_vertexDecl;
        int iVar1 = m_vertexDecl.GetVertexStride(0);
        if (iVar1 != 36) {
            LogAssert("m_vertexDecl.GetVertexStride() == sizeof(BillboardBatchVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatchRenderer.cpp",
                      158, nullptr);
        }
        auto pVVar4 = pSVar5->Instance();
        pVVar4->Register(&m_vertexDecl);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(212);
        local_e0 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(235);
        local_b8 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(252);
        local_90 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(231);
        local_68 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(249);
        local_40 = pSVar2->GetVertexElementDesc(0);
        pVVar3 = (VertexElementDesc*)local_e0.data();
        m_vertexDeclLP.Create(pVVar3, 5, nullptr, 0);
        pSVar5 = (Singleton<render::VertexDeclarationManager>*)&m_vertexDeclLP;
        iVar1 = m_vertexDeclLP.GetVertexStride(0);
        if (iVar1 != 28) {
            LogAssert("m_vertexDeclLP.GetVertexStride() == sizeof(BillboardBatchVertexLP)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatchRenderer.cpp",
                      178, nullptr);
        }
        pVVar4 = pSVar5->Instance();
        pVVar4->Register(&m_vertexDeclLP);
    }

} // namespace jag::graphics

namespace jag {
    // 0x100873480
    graphics::TextureAtlasReference* placement_new<graphics::TextureAtlasReference, graphics::TextureAtlasReference>(
        void* arg1, graphics::TextureAtlasReference&& textureAtlasReference) {
        new (arg1) graphics::TextureAtlasReference(textureAtlasReference);
        return arg1;
    }

    // 0x1008734a0
    MakeSharedPoolRefCounter<graphics::TextureAtlasReference, MakeSharedPool<graphics::TextureAtlasReference, 8192>>*
    placement_new<MakeSharedPoolRefCounter<graphics::TextureAtlasReference,
                                           MakeSharedPool<graphics::TextureAtlasReference, 8192>>,
                  MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData*&,
                  graphics::TextureAtlasReference*>(
        void* arg1, MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData*& arg2,
        graphics::TextureAtlasReference*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<graphics::TextureAtlasReference,
                                            MakeSharedPool<graphics::TextureAtlasReference, 8192>>(arg2, arg3);
        return arg1;
    }

    // 0x100875820
    graphics::TextureAtlas* placement_new<graphics::TextureAtlas, graphics::TextureManager&, unsigned int&,
                                          std::recursive_mutex&, graphicutils::TextureAtlasUsage const* const&>(
        void* arg1, graphics::TextureManager& textureManager, unsigned int& arg3, std::recursive_mutex& recursive_mutex,
        graphicutils::TextureAtlasUsage const* const& arg5) {
        new (arg1) graphics::TextureAtlas(textureManager, arg3, recursive_mutex, arg5);
        return arg1;
    }

    // 0x100875840
    ref_counter_shared<graphics::TextureAtlas>*
    placement_new<ref_counter_shared<graphics::TextureAtlas>, int, graphics::TextureAtlas*&>(
        void* arg1, int&& arg2, graphics::TextureAtlas*& arg3) {
        new (arg1) ref_counter_shared<graphics::TextureAtlas>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10087fcc0
    graphics::TextureData* placement_new<graphics::TextureData>(void* arg1) {
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        new (arg1) graphics::TextureData();
        return arg1;
    }

    // 0x10087fcf0
    ref_counter_shared<graphics::TextureData>*
    placement_new<ref_counter_shared<graphics::TextureData>, int, graphics::TextureData*&>(
        void* arg1, int&& arg2, graphics::TextureData*& arg3) {
        new (arg1) ref_counter_shared<graphics::TextureData>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100882290
    void ReorderFromLE<unsigned short>(unsigned short& arg1) {
        if (IsBigEndian() != '\0') {
            DoByteReorder<EndianSwap, unsigned short>((short*)arg1);
        }
    }

    // 0x100882510
    void ReorderFromLE<float>(float& arg1) {
        if (IsBigEndian() != '\0') {
            DoByteReorder<EndianSwap, float>(arg1);
        }
    }

    // 0x100884d60
    graphics::BillboardBatch* placement_new<graphics::BillboardBatch>(void* arg1) {
        new (arg1) graphics::BillboardBatch();
        return arg1;
    }

    // 0x100884d80
    MakeSharedPoolRefCounter<graphics::BillboardBatch, MakeSharedPool<graphics::BillboardBatch, 64>>*
    placement_new<MakeSharedPoolRefCounter<graphics::BillboardBatch, MakeSharedPool<graphics::BillboardBatch, 64>>,
                  MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData*&, graphics::BillboardBatch*>(
        void* arg1, MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData*& arg2,
        graphics::BillboardBatch*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<graphics::BillboardBatch, MakeSharedPool<graphics::BillboardBatch, 64>>(
            arg2, arg3);
        return arg1;
    }

    // 0x100886320
    graphics::BillboardBatch*
    placement_new<graphics::BillboardBatch, graphics::BillboardBatch&>(void* arg1,
                                                                       graphics::BillboardBatch& billboardBatch) {
        new (arg1) graphics::BillboardBatch(billboardBatch);
        return arg1;
    }

} // namespace jag

namespace jag::math {
    // 0x10086aef0
    Vector3T<short> Vector3TFromVector3<short>(const Vector3T<float>& vector3) {
        uint64_t in_RAX;
        uint64_t uVar4;
        uint8_t local_28[8];

        local_28 = (uint8_t[8])in_RAX;
        auto pfVar3 = vector3.SSOBeginPtr();
        float fVar1 = *pfVar3;
        pfVar3 = (float*)vector3.y();
        float fVar2 = *pfVar3;
        pfVar3 = (float*)vector3.second();
        new (local_28) graphics::GUIAnimationRGB((short)(int)fVar1, (short)(int)fVar2, (short)(int)*pfVar3);
        uVar4._0_2_ = local_28._0_2_;
        uVar4._2_2_ = local_28._2_2_;
        uVar4._4_2_ = local_28._4_2_;
        uVar4._6_2_ = local_28._6_2_;
        return uVar4;
    }

} // namespace jag::math
