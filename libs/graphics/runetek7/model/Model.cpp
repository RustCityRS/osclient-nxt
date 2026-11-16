// libs/graphics/runetek7/model/Model.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "Model.h"

namespace jag::graphics {
    // 0x100f43b00
    int32_t Model::m_lodConfigs[24] = {
        1167867904, 1071225242, 1038845215, 1080033280, 1,          0, -2,         1178304512,
        1074580685, 1007908028, 1082130432, 0,          1041865114, 1, 1195593728, 1065353216,
        1007908028, 1082130432, 0,          1056964608, 2,          0, 0,          0,
    };

    // 0x100f43b60
    int32_t Model::m_lodConfigNiceNames__[12] = {0, 0, 14658420, 1, 1, 0, 14658437, 1, 2, 0, 14658444, 1};

    // 0x100f43b90
    bool Model::m_ShowMeshes = 1;

    // 0x100f43b91
    bool Model::m_ShowBillboards = 1;

    // 0x100f43b92
    bool Model::m_DoModelWelding = 1;

    // 0x100f43ba0
    bool Model::m_gatherShareLightOnly = 0;

    // 0x103bbd4d8, set at startup by ___cxx_global_var_init.92
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Model::NullModel =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x103bbd4e8, set at startup by ___cxx_global_var_init.96
    StringEnum Model::m_lodConfigNiceNames = StringEnum((StringEnumEntry*)&Model::m_lodConfigNiceNames__, 3);

    // 0x103bbd4f8
    int32_t Model::m_NumExtant;

    // 0x103bbd4fc
    int32_t Model::m_NextUniqueID;

    // 0x10005d590: Model::GetLevel() const has the same machine code as game::console::CommandLine::GetSelectionStart() const

    // 0x1000b9950: Model::GetAABB() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1000fa850: Model::GetTextureAtlasReferences() const has the same machine code as oldscape::graphics::NXTPixToolkit::getWorldRenderer()

    // 0x10011ced0: Model::GetBatchList() has the same machine code as oldscape::configdecoder::NpcType::GetHeadIconIndices() const

    // 0x10011ced0: Model::GetBatchList() const has the same machine code as oldscape::configdecoder::NpcType::GetHeadIconIndices() const

    // 0x10016ea80: Model::GetTint() const has the same machine code as oldscape::minimenu::Minimenu::GetPlayerOps() const

    // 0x1001a3c10: Model::GetWorldTransform() const has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x100324d40: Model::GetLocalTransform() const has the same machine code as oldscape::graphics::NXTPixToolkit::GetPix2D()

    // 0x1003c1fc0: Model::GetPointLightBounds() const has the same machine code as game::LocationContainer::GetDynamicChangedLocations() const

    // 0x1003c2100: Model::GetHighlightedSectionColour() const has the same machine code as game::LocationContainer::GetDynamicMultiLocations() const

    // 0x1003c3d90: Model::GetExternalID() const has the same machine code as game::MapElementType::GetMinimapIconScale() const

    // 0x1003c3e20: Model::GetSavedModelHash() const has the same machine code as game::MapElementType::GetHAlign() const

    // 0x1003cf240: Model::GetModelRawUniqueID() const has the same machine code as game::MapElementType::GetFlashSpriteID() const

    // 0x1004140b0: Model::GetParticleEffectors() has the same machine code as game::MapSquare::GetLocationContainers() const

    // 0x1004140b0: Model::GetParticleEffectors() const has the same machine code as game::MapSquare::GetLocationContainers() const

    // 0x100417fb0: Model::GetIrradianceEffect() has the same machine code as game::NPCType::GetHeadIconGraphic() const

    // 0x100417fb0: Model::GetIrradianceEffect() const has the same machine code as game::NPCType::GetHeadIconGraphic() const

    // 0x100431760: Model::GetHighlightColour() const has the same machine code as game::Location::GetLocationType() const

    // 0x10047dbc0: Model::GetBillboardBatchList() has the same machine code as PointLightShadows::GetPointLightSMManager()

    // 0x10047dbc0: Model::GetBillboardBatchList() const has the same machine code as PointLightShadows::GetPointLightSMManager()

    // 0x1004ab8a0: Model::GetSavedModelHashList() const has the same machine code as game::EnvironmentOverride::GetVolumetricOverrides() const

    // 0x100505580: Model::GetParticleEmitters() has the same machine code as game::NPCType::GetBodyList() const

    // 0x100505580: Model::GetParticleEmitters() const has the same machine code as game::NPCType::GetBodyList() const

    // 0x100623240: Model::GetGeometryQuery() const has the same machine code as game::OldCamera::GetClampedSceneSize() const

    // 0x10080df00
    unsigned int Model::CalculateLodLevel(const ModelLodPassConfig& modelLodPassConfig, float arg2, float arg3,
                                          float arg4) {
        unsigned int uVar1;
        unsigned int uVar3;
        float* arg2_00;
        float* arg1;
        bool bVar4;
        float fVar5;
        float local_28;
        float local_24;
        float local_1c;

        float local_20 = 0.0;
        if (*(float*)modelLodPassConfig <= arg2 && arg2 != *(float*)modelLodPassConfig) {
            do {
                local_24 = *(float*)modelLodPassConfig;
                fVar5 = math::IntegerExponentPow<float>(*(float*)(modelLodPassConfig + 4), (int)local_20 + 1);
                local_20 = (float)((int)local_20 + 1);
                if (arg2 <= fVar5 * local_24)
                    break;
            } while ((unsigned int)local_20 < 10);
        }
        if (arg2 <= arg4) {
            local_1c = 5.60519e-45;
            arg1 = &local_1c;
            arg2_00 = &local_20;
        } else {
            uVar1 = 0;
            if (arg3 < *(float*)(modelLodPassConfig + 8)) {
                uVar3 = 0;
                do {
                    local_24 = *(float*)(modelLodPassConfig + 8);
                    fVar5 = math::IntegerExponentPow<float>(*(float*)(modelLodPassConfig + 12), uVar3);
                    uVar1 = uVar3 + 1;
                    if (local_24 / fVar5 <= arg3)
                        break;
                    bVar4 = uVar3 < 3;
                    uVar3 = uVar1;
                } while (bVar4);
            }
            uVar3 = 5 - uVar1;
            if (modelLodPassConfig[16] == (ModelLodPassConfig)0) {
                uVar3 = uVar1;
            }
            local_1c = (float)(unsigned int)local_20;
            local_28 = (float)uVar3;
            fVar5 = math::Lerp<float, float>(local_1c, local_28, *(float*)(modelLodPassConfig + 20));
            local_1c = (float)math::RoundFloatToInt(fVar5);
            local_28 = 5.60519e-45;
            arg1 = &local_28;
            arg2_00 = &local_1c;
        }
        auto puVar2 = std::min<unsigned int>(*arg1, *arg2_00);
        return *puVar2;
    }

    // 0x100813610
    void Model::SelectTextureInclusionMode(const TextureInclusionMode* textureInclusionMode) {
        TexturesReady();
    }

    // 0x100816480
    Model::Model() : MakeSharedPool<Model, 3072>() {
        uint8_t* puVar8 = PTR_IDENTITY_100ee6730;
        uint64_t uVar1 = *(uint64_t*)PTR_IDENTITY_100ee6730;
        uint64_t uVar2 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 8);
        uint64_t uVar3 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 16);
        uint64_t uVar4 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 24);
        uint64_t uVar5 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 32);
        uint64_t uVar6 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 40);
        uint64_t uVar7 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 56);
        field_96 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 48);
        field_104 = uVar7;
        field_80 = uVar5;
        field_88 = uVar6;
        field_64 = uVar3;
        field_72 = uVar4;
        m_worldTransform = uVar1;
        field_56 = uVar2;
        uVar1 = *(uint64_t*)puVar8;
        uVar2 = *(uint64_t*)(puVar8 + 8);
        uVar3 = *(uint64_t*)(puVar8 + 16);
        uVar4 = *(uint64_t*)(puVar8 + 24);
        uVar5 = *(uint64_t*)(puVar8 + 32);
        uVar6 = *(uint64_t*)(puVar8 + 40);
        uVar7 = *(uint64_t*)(puVar8 + 56);
        field_160 = *(uint64_t*)(puVar8 + 48);
        field_168 = uVar7;
        field_144 = uVar5;
        field_152 = uVar6;
        field_128 = uVar3;
        field_136 = uVar4;
        field_112 = uVar1;
        field_120 = uVar2;
        uVar1 = *(uint64_t*)puVar8;
        uVar2 = *(uint64_t*)(puVar8 + 8);
        uVar3 = *(uint64_t*)(puVar8 + 16);
        uVar4 = *(uint64_t*)(puVar8 + 24);
        uVar5 = *(uint64_t*)(puVar8 + 32);
        uVar6 = *(uint64_t*)(puVar8 + 40);
        uVar7 = *(uint64_t*)(puVar8 + 56);
        field_224 = *(uint64_t*)(puVar8 + 48);
        field_232 = uVar7;
        field_208 = uVar5;
        field_216 = uVar6;
        field_192 = uVar3;
        field_200 = uVar4;
        m_localTransform = uVar1;
        field_184 = uVar2;
        puVar8 = PTR_ZERO_100ee6708;
        uVar1 = *(uint64_t*)(PTR_ZERO_100ee6708 + 8);
        m_tint = *(uint64_t*)PTR_ZERO_100ee6708;
        field_248 = uVar1;
        uVar1 = *(uint64_t*)(puVar8 + 8);
        m_highlightColour = *(uint64_t*)puVar8;
        field_264 = uVar1;
        m_highlightsIgnoreDepth = false;
        m_highlightScale = 0.0;
        m_highlightSilhouetteAlpha = 0.0;
        uVar1 = *(uint64_t*)(puVar8 + 8);
        m_highlightedSectionColour = *(uint64_t*)puVar8;
        field_296 = uVar1;
        *(uint64_t*)&m_highlightedSectionScale = 4575657221408423936;
        m_level = 4294967295;
        new (&field_320) math::Vector4T();
        m_modelRawUniqueID = -1;
        m_externalID = -1;
        m_savedModelHash = 0;
        new (&field_352) eastl::vector<unsigned int>();
        new (&field_384) eastl::vector<int>();
        field_416[0] = 0;
        m_textureAtlasReferences->BatchDestroy<>();
        new (&field_480) math::Transitionable<float>(0.0);
        m_fadeTime = 0;
        m_currentFade = 3212836864;
        new (&field_528) IrradianceEffect();
        m_useUncompressedTextures = false;
        new (&field_648) std::future<void>();
        field_656.BatchDestroy<>();
        field_688.BatchDestroy<>();
        new (&field_720) eastl::vector<shared_ptr<ModelParticleSource>>();
        new (&field_752) eastl::vector<shared_ptr<ModelParticleSource>>();
        new (&field_784) eastl::vector<shared_ptr<VFXAttachmentInfo>>();
        new (&field_816) Array<LabelData>();
        new (m_geometryQuery) shared_ptr();
        new (&field_856) eastl::vector_map<unsigned short, unsigned short>();
        new (&field_896) eastl::vector_map<unsigned short, unsigned short>();
        field_936 = 0;
        field_937 = 0;
        field_938 = 0;
        m_NumExtant = m_NumExtant + 1;
    }

    // 0x100816890
    Model::Model(const Model& model, ModelCopyType arg2) : MakeSharedPool<Model, 3072>(), field_16(*((model + 16))) {
        ModelConstructedState* pMVar11;
        Model* pMVar14;
        shared_ptr<ModelParticleSource>* psVar16;
        shared_ptr<ModelParticleSource>* psVar17;
        ModelConstructedState local_78;
        uint8_t local_31;

        uint64_t uVar2 = *(uint64_t*)(model + 48);
        uint64_t uVar3 = *(uint64_t*)(model + 56);
        uint64_t uVar4 = *(uint64_t*)(model + 64);
        uint64_t uVar5 = *(uint64_t*)(model + 72);
        uint64_t uVar6 = *(uint64_t*)(model + 80);
        uint64_t uVar7 = *(uint64_t*)(model + 88);
        uint64_t uVar8 = *(uint64_t*)(model + 104);
        field_96 = *(uint64_t*)(model + 96);
        field_104 = uVar8;
        field_80 = uVar6;
        field_88 = uVar7;
        field_64 = uVar4;
        field_72 = uVar5;
        m_worldTransform = uVar2;
        field_56 = uVar3;
        uVar2 = *(uint64_t*)(model + 112);
        uVar3 = *(uint64_t*)(model + 120);
        uVar4 = *(uint64_t*)(model + 128);
        uVar5 = *(uint64_t*)(model + 136);
        uVar6 = *(uint64_t*)(model + 144);
        uVar7 = *(uint64_t*)(model + 152);
        uVar8 = *(uint64_t*)(model + 168);
        field_160 = *(uint64_t*)(model + 160);
        field_168 = uVar8;
        field_144 = uVar6;
        field_152 = uVar7;
        field_128 = uVar4;
        field_136 = uVar5;
        field_112 = uVar2;
        field_120 = uVar3;
        uVar2 = *(uint64_t*)(model + 176);
        uVar3 = *(uint64_t*)(model + 184);
        uVar4 = *(uint64_t*)(model + 192);
        uVar5 = *(uint64_t*)(model + 200);
        uVar6 = *(uint64_t*)(model + 208);
        uVar7 = *(uint64_t*)(model + 216);
        uVar8 = *(uint64_t*)(model + 232);
        field_224 = *(uint64_t*)(model + 224);
        field_232 = uVar8;
        field_208 = uVar6;
        field_216 = uVar7;
        field_192 = uVar4;
        field_200 = uVar5;
        m_localTransform = uVar2;
        field_184 = uVar3;
        uVar2 = *(uint64_t*)(model + 248);
        m_tint = *(uint64_t*)(model + 240);
        field_248 = uVar2;
        uint8_t* puVar9 = PTR_ZERO_100ee6708;
        uVar2 = *(uint64_t*)(PTR_ZERO_100ee6708 + 8);
        m_highlightColour = *(uint64_t*)PTR_ZERO_100ee6708;
        field_264 = uVar2;
        m_highlightsIgnoreDepth = false;
        m_highlightScale = 0.0;
        m_highlightSilhouetteAlpha = 0.0;
        uVar2 = *(uint64_t*)(puVar9 + 8);
        m_highlightedSectionColour = *(uint64_t*)puVar9;
        field_296 = uVar2;
        *(uint64_t*)&m_highlightedSectionScale = 4575657221408423936;
        m_level = 4294967295;
        new (&field_320) math::Vector4T();
        m_modelRawUniqueID = *(int*)(model + 336);
        m_externalID = *(int*)(model + 340);
        m_savedModelHash = *(unsigned int*)(model + 344);
        uint8_t* this_00 = &field_352;
        new (this_00) eastl::vector<unsigned int>(*((model + 352)));
        new (&field_384) eastl::vector<int>();
        field_416[0] = 0;
        uint8_t* this_01 = m_textureAtlasReferences;
        this_01->BatchDestroy<>();
        uVar2 = *(uint64_t*)(model + 480);
        uVar3 = *(uint64_t*)(model + 488);
        uVar4 = *(uint64_t*)(model + 504);
        field_496 = *(uint64_t*)(model + 496);
        field_504 = uVar4;
        field_480 = uVar2;
        field_488 = uVar3;
        m_fadeTime = 0;
        m_currentFade = *(uint32_t*)(model + 516);
        new (&field_528) IrradianceEffect();
        m_useUncompressedTextures = *(bool*)(model + 640);
        uint8_t* this_02 = &field_648;
        new (this_02) std::future<void>();
        uint8_t* this_03 = &field_656;
        this_03->BatchDestroy<>();
        uint8_t* this_04 = &field_688;
        this_04->BatchDestroy<>();
        uint8_t* this_05 = &field_720;
        new (this_05) eastl::vector<shared_ptr<ModelParticleSource>>();
        uint8_t* this_06 = &field_752;
        new (this_06) eastl::vector<shared_ptr<ModelParticleSource>>();
        new (&field_784) eastl::vector<shared_ptr<VFXAttachmentInfo>>();
        new (&field_816) Array<LabelData>();
        uint8_t* local_40 = m_geometryQuery;
        new (local_40) shared_ptr();
        new (&field_856) eastl::vector_map<unsigned short, unsigned short>();
        new (&field_896) eastl::vector_map<unsigned short, unsigned short>();
        field_936 = 0;
        field_937 = 0;
        field_938 = 0;
        m_NumExtant = m_NumExtant + 1;
        uint8_t* local_58 = this_00;
        uint8_t* local_50 = this_01;
        uint8_t* local_48 = this_02;
        if (param_3 == 2) {
            if (((model + 648))->valid()) {
                ((model + 648))->wait();
            }
            field_416[0] = *(uint8_t*)(model + 416);
        } else {
            local_78[0] = (ModelConstructedState)4;
            pMVar11 = std::min<ModelConstructedState>(local_78, *((model + 416)));
            field_416[0] = *pMVar11;
        }
        if (param_3 != 1) {
            SetTextureAtlasReferences(*((model + 424)));
        }
        vector<eastl::pair<int, int>>* pvVar1 = (vector<eastl::pair<int, int>>*)(model + 656);
        unsigned long uVar12 = pvVar1->size();
        this_03->reserve(uVar12);
        bool bVar19 = param_3 == 2;
        auto this_08 = pvVar1->HeapBeginPtr();
        auto puVar13 = pvVar1->end();
        if (this_08 != puVar13) {
            do {
                pMVar14 = (Model*)**this_08;
                local_31 = bVar19;
                MakeUniquePool<GeometryBatchInstance, 3072>::MakeUnique<GeometryBatchInstance&, Model&, bool>(
                    &local_78, pMVar14, (bool*)this);
                this_03->push_back(local_78);
                this_08 = this_08 + 8;
            } while (this_08 != puVar13);
        }
        pvVar1 = (vector<eastl::pair<int, int>>*)(model + 688);
        uVar12 = pvVar1->size();
        this_04->reserve(uVar12);
        auto this_09 = pvVar1->HeapBeginPtr();
        auto puVar15 = pvVar1->end();
        if (this_09 != puVar15) {
            do {
                pMVar14 = (Model*)**this_09;
                local_31 = bVar19;
                MakeUniquePool<BillboardBatchInstance, 64>::MakeUnique<BillboardBatchInstance&, Model&, bool>(
                    &local_78, pMVar14, (bool*)this);
                this_04->push_back(local_78);
                this_09 = this_09 + 8;
            } while (this_09 != puVar15);
        }
        vector<shared_ptr<ModelParticleSource>>* this_07 = (vector<shared_ptr<ModelParticleSource>>*)(model + 720);
        if (param_3 == 2) {
            *this_05 = *this_07;
            *this_06 = (*((model + 752)));
        } else {
            psVar16 = (shared_ptr<ModelParticleSource>*)this_07->HeapBeginPtr();
            psVar17 = (shared_ptr<ModelParticleSource>*)this_07->end();
            if (psVar16 != psVar17) {
                do {
                    **psVar16;
                    MakeSharedPool<ModelParticleSource, 768>::MakeShared<ModelParticleSource&>(&local_78);
                    this_05->emplace_back<shared_ptr<ModelParticleSource>>(local_78);
                    psVar16 = psVar16 + 16;
                } while (psVar16 != psVar17);
            }
            psVar16 = (shared_ptr<ModelParticleSource>*)((model + 752))->HeapBeginPtr();
            psVar17 = (shared_ptr<ModelParticleSource>*)((model + 752))->end();
            if (psVar16 != psVar17) {
                do {
                    **psVar16;
                    MakeSharedPool<ModelParticleSource, 768>::MakeShared<ModelParticleSource&>(&local_78);
                    this_06->emplace_back<shared_ptr<ModelParticleSource>>(local_78);
                    psVar16 = psVar16 + 16;
                } while (psVar16 != psVar17);
            }
        }
        shared_ptr<VFXAttachmentInfo>* this_10 = (shared_ptr<VFXAttachmentInfo>*)((model + 784))->HeapBeginPtr();
        shared_ptr<VFXAttachmentInfo>* psVar18 = (shared_ptr<VFXAttachmentInfo>*)((model + 784))->end();
        if (this_10 != psVar18) {
            do {
                **this_10;
                MakeSharedPool<VFXAttachmentInfo, 768>::MakeShared<VFXAttachmentInfo&>(&local_78);
                field_784.emplace_back<shared_ptr<VFXAttachmentInfo>>(local_78);
                this_10 = this_10 + 16;
            } while (this_10 != psVar18);
        }
        if (IsLoaded()) {
            if (param_3 == 2) {
                SetBatchAtlasReferences();
            } else {
                ConstructFinishAndUpload();
            }
        }
        field_384 = (*((model + 384)));
        field_816 = (*((model + 816)));
        field_856.reserve(16);
        field_896.reserve(16);
    }

    // 0x100817040
    void Model::SetTextureAtlasReferences(
        const eastl::fixed_vector<shared_ptr<TextureAtlasReference>, 1ul>& textureAtlasReferences) {
        uint8_t* this_00 = m_textureAtlasReferences;
        auto psVar3 = this_00->HeapBeginPtr();
        auto psVar2 = this_00->end();
        for (; psVar3 != psVar2; psVar3 = psVar3 + 1) {
            if (shared_ptr::operator_cast_to_bool(psVar3)) {
                psVar3->reset();
            }
        }
        this_00->clear();
        if (!(textureAtlasReferences.empty())) {
            psVar3 = (shared_ptr*)textureAtlasReferences.HeapBeginPtr();
            psVar2 = (shared_ptr*)textureAtlasReferences.end();
            for (; psVar3 != psVar2; psVar3 = psVar3 + 1) {
                if (shared_ptr::operator_cast_to_bool(psVar3)) {
                    this_00->push_back(*psVar3);
                }
            }
        }
    }

    // 0x1008177a0
    void Model::SetBatchAtlasReferences() {
        bool bVar1;
        bool arg2;
        BillboardBatchInstance* pBVar4;
        BillboardBatch* pBVar5;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        GeometryBatchInstance* pGVar6;
        ParticleMaterial* this_03;
        unsigned long uVar7;
        shared_ptr<TextureAtlasReference>* psVar8;
        GeometryBatch* pGVar11;
        ModelMaterial* pMVar12;
        unsigned long uVar13;
        unsigned long uVar14;

        uint8_t* this_00 = &field_688;
        uint8_t* this_01 = m_textureAtlasReferences;
        long lVar3 = this_00->size();
        if (lVar3 != 0) {
            uVar13 = 0;
            do {
                this_02 =
                    (unique_ptr<BillboardBatchInstance,
                                MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(*this_00)[uVar13];
                if (!(this_01->empty())) {
                    pGVar6 = (GeometryBatchInstance*)(*this_02).operator->();
                    this_03 = (ParticleMaterial*)pGVar6->GetMaterial();
                    uVar7 = this_01->size();
                    uVar14 = uVar13;
                    if (uVar7 < 2) {
                        uVar14 = 0;
                    }
                    psVar8 = (shared_ptr<TextureAtlasReference>*)(*this_01)[uVar14];
                    this_03->SetTextureAtlasReference(*psVar8);
                }
                pGVar6 = (GeometryBatchInstance*)(*this_02).operator->();
                bVar1 = (bool)pGVar6->GetMaterial();
                pBVar4 = (BillboardBatchInstance*)(*this_02).operator->();
                pBVar5 = (BillboardBatch*)pBVar4->GetBillboardBatch();
                arg2 = (bool)pBVar5->HasBones();
                pBVar4 = (BillboardBatchInstance*)(*this_02).operator->();
                pBVar5 = (BillboardBatch*)pBVar4->GetBillboardBatch();
                pBVar5->HasJoints();
                BillboardMaterial::InitRenderPassEffects(bVar1, arg2);
                uVar13 = uVar13 + 1;
                uVar14 = this_00->size();
            } while (uVar13 < uVar14);
        }
        auto this_04 = field_656.HeapBeginPtr();
        auto puVar9 = field_656.end();
        if (this_04 != puVar9) {
            lVar3 = 0;
            do {
                pGVar6 = (GeometryBatchInstance*)(*this_04).operator->();
                pGVar11 = (GeometryBatch*)pGVar6->GetGeometryBatch();
                if (!(pGVar11->IsHidden())) {
                    if (!(this_01->empty())) {
                        pGVar6 = (GeometryBatchInstance*)(*this_04).operator->();
                        pMVar12 = (ModelMaterial*)pGVar6->GetMaterial();
                        uVar13 = this_01->size();
                        if (uVar13 < 2) {
                            uVar13 = 0;
                        } else {
                            uVar13 = this_00->size() + lVar3;
                        }
                        psVar8 = (shared_ptr<TextureAtlasReference>*)(*this_01)[uVar13];
                        pMVar12->SetTextureAtlasReference(*psVar8);
                    }
                    lVar3 = lVar3 + 1;
                    pGVar6 = (GeometryBatchInstance*)(*this_04).operator->();
                    pMVar12 = (ModelMaterial*)pGVar6->GetMaterial();
                    pGVar6 = (GeometryBatchInstance*)(*this_04).operator->();
                    pGVar11 = (GeometryBatch*)pGVar6->GetGeometryBatch();
                    bVar1 = (bool)pGVar11->HasBones();
                    pMVar12->InitRenderPassEffects(bVar1);
                }
                this_04 = this_04 + 8;
            } while (this_04 != puVar9);
        }
    }

    // 0x1008179b0
    void Model::ConstructFinishAndUpload() {
        __2 local_d0;
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        if (field_416[0] != '\x03') {
            LogAssert("m_constructedState == ModelConstructedState::DATA_MAT_AND_ATLAS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1166, nullptr);
        }
        field_416[0] = 4;
        auto this_00 = Instance();
        local_d0.field_0 = this;
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            Model::ConstructFinishAndUpload()::__2, void>(local_c8, &local_d0);
        auto local_d8 = this_00->RunOnThreadPoolRenderContext("ConstructFinishAndUpload", *local_c8);
        field_648 = local_d8;
    }

    // 0x100817ac0
    Model::~Model() {
        m_NumExtant = m_NumExtant - 1;
        uint8_t* this_00 = &field_648;
        if (this_00->valid() != '\0') {
            this_00->wait();
        }
        field_896.~vector_map();
        field_856.~vector_map();
        m_geometryQuery->~shared_ptr();
        field_816.~Array();
        field_784.~vector();
        field_752.~vector();
        field_720.~vector();
        field_688.~BatchDestroy();
        field_656.~BatchDestroy();
        this_00->~future();
        m_textureAtlasReferences->~BatchDestroy();
        field_384.~vector();
        field_352.~vector();
    }

    // 0x100817c80
    void Model::SetExternalID(int arg1, bool arg2) {
        shared_ptr<ModelParticleSource>* psVar3;
        shared_ptr<ModelParticleSource>* psVar4;
        ModelParticleSource* pMVar5;
        shared_ptr<VFXAttachmentInfo>* this_04;
        shared_ptr<VFXAttachmentInfo>* psVar6;

        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((GeometryBatchInstance*)(*this_00).operator->())->ChangeSourceExternalID(m_externalID, arg1);
        }
        auto this_02 = field_688.HeapBeginPtr();
        auto puVar2 = field_688.end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            ((BillboardBatchInstance*)(*this_02).operator->())->ChangeSourceExternalID(m_externalID, arg1);
        }
        if (arg2) {
            psVar3 = (shared_ptr<ModelParticleSource>*)field_720.HeapBeginPtr();
            psVar4 = (shared_ptr<ModelParticleSource>*)field_720.end();
            for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
                pMVar5 = (ModelParticleSource*)(*psVar3).operator->();
                pMVar5->SetSourceModelExternalID(arg1);
            }
            psVar3 = (shared_ptr<ModelParticleSource>*)field_752.HeapBeginPtr();
            psVar4 = (shared_ptr<ModelParticleSource>*)field_752.end();
            for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
                pMVar5 = (ModelParticleSource*)(*psVar3).operator->();
                pMVar5->SetSourceModelExternalID(arg1);
            }
            this_04 = (shared_ptr<VFXAttachmentInfo>*)field_784.HeapBeginPtr();
            psVar6 = (shared_ptr<VFXAttachmentInfo>*)field_784.end();
            for (; this_04 != psVar6; this_04 = this_04 + 16) {
                ((PlayerGroupMember*)(*this_04).operator->())->SetStatus(arg1);
            }
        }
        m_externalID = arg1;
    }

    // 0x100817e40
    unsigned long Model::IsTransformed() const {
        bool cVar1;
        BillboardBatchInstance* pBVar4;
        unsigned long uVar5;

        auto this_00 = field_656.HeapBeginPtr();
        auto puVar2 = field_656.end();
        for (; this_00 != puVar2; this_00 = this_00 + 8) {
            cVar1 = ((GeometryBatchInstance*)(*this_00).operator->())->IsTransformed();
            if (cVar1) {
                uVar5 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
                goto LAB_100817efa;
            }
        }
        uint8_t* this_03 = &field_688;
        auto this_02 = this_03->HeapBeginPtr();
        auto puVar3 = this_03->end();
        bool bVar6 = this_02 == puVar3;
        if (!bVar6) {
            pBVar4 = (BillboardBatchInstance*)(*this_02).operator->();
            cVar1 = pBVar4->IsTransformed();
            while (!cVar1) {
                this_02 = this_02 + 8;
                bVar6 = this_02 == puVar3;
                if (bVar6)
                    break;
                pBVar4 = (BillboardBatchInstance*)(*this_02).operator->();
                cVar1 = pBVar4->IsTransformed();
            }
        }
        uVar5 = (((uint64_t)((int64_t)((unsigned long)this_03 >> 8)) << 8) | (uint8_t)bVar6) ^ 1;
    LAB_100817efa:
        return uVar5 & 4294967295;
    }

    // 0x100817f30
    void Model::StartTransform() {
        if (field_936 != '\0') {
            LogAssert("!m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      222, nullptr);
        }
        field_936 = 1;
    }

    // 0x100817f70
    void Model::EndTransform(bool arg1) {
        if (field_936 == '\0') {
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      230, nullptr);
        }
        field_936 = 0;
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((GeometryBatchInstance*)(*this_00).operator->())->SetTransformed(arg1);
        }
        auto this_02 = field_688.HeapBeginPtr();
        auto puVar2 = field_688.end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            ((BillboardBatchInstance*)(*this_02).operator->())->SetTransformed(arg1);
        }
        SetBussID(NewModelRawUniqueID());
    }

    // 0x1008180d0
    void Model::UpdateAABB() {
        GeometryBatchInstance* pGVar1;
        BillboardBatchInstance* pBVar2;
        NXTPixToolkit* pNVar3;
        ModelParticleSource* this_03;
        Logger* this_04;
        Vector2T<int>* this_05;
        AABB* pAVar6;
        array<VFXAttachmentInfo::VertexBonePos, 3ul>* this_06;
        Vector3T<float>* pVVar10;
        Vector3T<float>* pVVar12;

        uint8_t* this_00 = &field_16;
        this_00->Reset();
        auto this_07 = field_656.HeapBeginPtr();
        auto puVar5 = field_656.end();
        for (; this_07 != puVar5; this_07 = this_07 + 8) {
            pGVar1 = (GeometryBatchInstance*)(*this_07).operator->();
            ((GeometryBatch*)pGVar1->GetGeometryBatch())->UpdateAABB();
            pGVar1 = (GeometryBatchInstance*)(*this_07).operator->();
            pAVar6 = (AABB*)pGVar1->GetAABB();
            if (pAVar6->IsValid()) {
                this_00->AddAABB(*pAVar6);
            }
        }
        auto this_08 = field_688.HeapBeginPtr();
        auto puVar7 = field_688.end();
        for (; this_08 != puVar7; this_08 = this_08 + 8) {
            pBVar2 = (BillboardBatchInstance*)(*this_08).operator->();
            ((BillboardBatch*)pBVar2->GetBillboardBatch())->UpdateAABB();
            pBVar2 = (BillboardBatchInstance*)(*this_08).operator->();
            pAVar6 = (AABB*)pBVar2->GetAABB();
            if (pAVar6->IsValid()) {
                this_00->AddAABB(*pAVar6);
            }
        }
        auto psVar11 = field_720.HeapBeginPtr();
        auto psVar8 = field_720.end();
        for (; psVar11 != psVar8; psVar11 = psVar11 + 16) {
            pNVar3 = (NXTPixToolkit*)(*psVar11).operator->();
            pVVar12 = (Vector3T<float>*)pNVar3->GetScreen();
            this_00->AddPoint(*pVVar12);
            this_03 = (ModelParticleSource*)(*psVar11).operator->();
            pVVar12 = (Vector3T<float>*)this_03->GetVertex2();
            this_00->AddPoint(*pVVar12);
            this_04 = (Logger*)(*psVar11).operator->();
            pVVar12 = (Vector3T<float>*)this_04->GetLogStreams();
            this_00->AddPoint(*pVVar12);
        }
        psVar11 = (shared_ptr<ModelParticleSource>*)field_752.HeapBeginPtr();
        psVar8 = (shared_ptr<ModelParticleSource>*)field_752.end();
        for (; psVar11 != psVar8; psVar11 = psVar11 + 16) {
            pNVar3 = (NXTPixToolkit*)(*psVar11).operator->();
            pVVar12 = (Vector3T<float>*)pNVar3->GetScreen();
            this_00->AddPoint(*pVVar12);
        }
        auto this_09 = field_784.HeapBeginPtr();
        auto psVar9 = field_784.end();
        for (; this_09 != psVar9; this_09 = this_09 + 16) {
            this_05 = (Vector2T<int>*)(*this_09).operator->();
            this_06 = (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_05->y();
            pVVar12 = (Vector3T<float>*)this_06->begin();
            pVVar10 = (Vector3T<float>*)this_06->end();
            for (; pVVar12 != pVVar10; pVVar12 = pVVar12 + 20) {
                this_00->AddPoint(*pVVar12);
            }
        }
    }

    // 0x100818370
    void Model::SetRenderFlags(unsigned int arg1) {
        long lVar2;

        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            lVar2 = (*this_00).operator->();
            new ((lVar2 + 8)) oldscape::ServerConnectionWorkItem(arg1);
        }
        auto this_01 = field_688.HeapBeginPtr();
        auto puVar3 = field_688.end();
        for (; this_01 != puVar3; this_01 = this_01 + 8) {
            new ((ServerConnectionWorkItem*)(*this_01).operator->()) oldscape::ServerConnectionWorkItem(arg1);
        }
    }

    // 0x100818420
    unsigned long Model::HasAlphaBlendedFaces() const {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar2;
        GeometryBatchInstance* pGVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar4;
        uint8_t* puVar5;
        uint64_t unaff_R14;
        bool bVar8;

        bool cVar1 = field_688.empty();
        uint64_t uVar7 = (uint64_t)((unsigned long)unaff_R14 >> 8);
        unsigned long uVar6 = (((uint64_t)uVar7 << 8) | (uint8_t)1);
        if (cVar1) {
            this_00 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    field_656.HeapBeginPtr();
            puVar2 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    field_656.end();
            bVar8 = this_00 == puVar2;
            if (!bVar8) {
                pGVar3 = (GeometryBatchInstance*)(*this_00).operator->();
                pAVar4 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pGVar3->GetMaterial();
                puVar5 = (uint8_t*)pAVar4->data();
                if (puVar5 != AlphaMode::ALPHA_BLENDED) {
                    do {
                        this_00 = this_00 + 8;
                        bVar8 = this_00 == puVar2;
                        if (bVar8)
                            break;
                        pGVar3 = (GeometryBatchInstance*)(*this_00).operator->();
                        pAVar4 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pGVar3->GetMaterial();
                        puVar5 = (uint8_t*)pAVar4->data();
                    } while (puVar5 != AlphaMode::ALPHA_BLENDED);
                }
            }
            uVar6 = (((uint64_t)uVar7 << 8) | (uint8_t)bVar8) ^ 1;
        }
        return uVar6 & 4294967295;
    }

    // 0x1008184d0
    unsigned long Model::HasOpaqueOrTestedFaces() const {
        GeometryBatchInstance* pGVar2;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar3;
        uint8_t* puVar4;

        uint8_t* this_01 = &field_656;
        auto this_00 = this_01->HeapBeginPtr();
        auto puVar1 = this_01->end();
        bool bVar5 = this_00 == puVar1;
        if (!bVar5) {
            pGVar2 = (GeometryBatchInstance*)(*this_00).operator->();
            pAVar3 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pGVar2->GetMaterial();
            puVar4 = (uint8_t*)pAVar3->data();
            if (puVar4 == AlphaMode::ALPHA_BLENDED) {
                do {
                    this_00 = this_00 + 8;
                    bVar5 = this_00 == puVar1;
                    if (bVar5)
                        break;
                    pGVar2 = (GeometryBatchInstance*)(*this_00).operator->();
                    pAVar3 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pGVar2->GetMaterial();
                    puVar4 = (uint8_t*)pAVar3->data();
                } while (puVar4 == AlphaMode::ALPHA_BLENDED);
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)this_01 >> 8)) << 8) | (uint8_t)bVar5) ^ 1) & 4294967295;
    }

    // 0x100818570
    void Model::SetPointLightIndicesVertexData(bool arg1) {
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((GeometryBatchInstance*)(*this_00).operator->())->SetPointLightIndicesVertexData(arg1);
        }
    }

    // 0x100818600
    void Model::SetHighlight(float arg1, const math::Vector4T<float>& vector4) {
        SetHighlight(arg1, vector4, (float)(-(unsigned int)(arg1 == 0.0) & 1065353216));
    }

    // 0x100818620
    void Model::SetHighlight(float arg1, const math::Vector4T<float>& vector4, float arg3) {
        m_highlightColour = vector4;
        m_highlightScale = arg1;
        m_highlightSilhouetteAlpha = arg3;
    }

    // 0x100818660
    void Model::SetHighlightsIgnoreDepth(bool arg1) {
        m_highlightsIgnoreDepth = arg1;
    }

    // 0x100818670
    void Model::SetHighlightedSection(float arg1, const math::Vector4T<float>& vector4) {
        m_highlightedSectionScale = arg1;
        m_highlightedSectionColour = vector4;
    }

    // 0x100818690
    void Model::SetCastsShadows(bool arg1) {
        long lVar2;

        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            lVar2 = (*this_00).operator->();
            ((lVar2 + 8))->SetRenderFlag(1, arg1);
        }
        auto this_01 = field_688.HeapBeginPtr();
        auto puVar3 = field_688.end();
        for (; this_01 != puVar3; this_01 = this_01 + 8) {
            ((Drawable*)(*this_01).operator->())->SetRenderFlag(1, arg1);
        }
    }

    // 0x100818750
    unsigned long Model::GetCastsShadows() const {
        bool cVar1;
        long lVar3;
        Drawable* pDVar5;
        unsigned long uVar6;

        auto this_00 = field_656.HeapBeginPtr();
        auto puVar2 = field_656.end();
        for (; this_00 != puVar2; this_00 = this_00 + 8) {
            lVar3 = (*this_00).operator->();
            cVar1 = ((lVar3 + 8))->GetRenderFlag(1);
            if (cVar1) {
                uVar6 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
                goto LAB_10081881f;
            }
        }
        uint8_t* this_02 = &field_688;
        auto this_01 = this_02->HeapBeginPtr();
        auto puVar4 = this_02->end();
        bool bVar7 = this_01 == puVar4;
        if (!bVar7) {
            pDVar5 = (Drawable*)(*this_01).operator->();
            cVar1 = pDVar5->GetRenderFlag(1);
            while (!cVar1) {
                this_01 = this_01 + 8;
                bVar7 = this_01 == puVar4;
                if (bVar7)
                    break;
                pDVar5 = (Drawable*)(*this_01).operator->();
                cVar1 = pDVar5->GetRenderFlag(1);
            }
        }
        uVar6 = (((uint64_t)((int64_t)((unsigned long)this_02 >> 8)) << 8) | (uint8_t)bVar7) ^ 1;
    LAB_10081881f:
        return uVar6 & 4294967295;
    }

    // 0x100818830
    void Model::ClearAnimationState() {
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((GeometryBatchInstance*)(*this_00).operator->())->ClearAnimationState();
        }
        auto this_02 = field_688.HeapBeginPtr();
        auto puVar2 = field_688.end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            ((BillboardBatchInstance*)(*this_02).operator->())->ClearAnimationState();
        }
    }

    // 0x100818910
    void Model::SetAnimationStateProvider(const shared_ptr<AnimationStateProvider>& animationStateProvider) {
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((GeometryBatchInstance*)(*this_00).operator->())->SetAnimationStateProvider(animationStateProvider);
        }
        auto this_02 = field_688.HeapBeginPtr();
        auto puVar2 = field_688.end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            ((BillboardBatchInstance*)(*this_02).operator->())->SetAnimationStateProvider(animationStateProvider);
        }
    }

    // 0x1008189c0
    void Model::UpdateAnimation(ThreadPool& threadPool, unsigned int arg2) {
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((GeometryBatchInstance*)(*this_00).operator->())->UpdateAnimation(threadPool, arg2, m_worldTransform);
        }
        auto this_02 = field_688.HeapBeginPtr();
        auto puVar2 = field_688.end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            ((BillboardBatchInstance*)(*this_02).operator->())->UpdateAnimation(threadPool, arg2, m_worldTransform);
        }
        field_938 = 1;
    }

    // 0x100818aa0
    void Model::EndUpdateAnimation() {
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((GeometryBatchInstance*)(*this_00).operator->())->EndUpdateAnimation();
        }
        auto this_02 = field_688.HeapBeginPtr();
        auto puVar2 = field_688.end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            ((BillboardBatchInstance*)(*this_02).operator->())->EndUpdateAnimation();
        }
    }

    // 0x100818b40
    void Model::IsReadyToConstruct(RT7Core* rt7Core) {
        if (rt7Core == nullptr) {
            LogAssert("rt7Core != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      450, nullptr);
        }
        if (((RenderDevice*)rt7Core->Instance())->GetReadyState() == 0) {
            if (rt7Core->GetMaterialManager()->MaterialsReady() != '\0') {
                return BillboardManager::BillboardsReady();
            }
        }
        return 0;
    }

    // 0x100818bd0
    void Model::Append(Model&& model) {
        ModelConstructedState* pMVar3;
        Model* pMVar5;
        shared_ptr<VFXAttachmentInfo>* vfxAttachmentInfo1;
        shared_ptr<VFXAttachmentInfo>* vfxAttachmentInfo2;
        back_insert_iterator<eastl::vector<shared_ptr<VFXAttachmentInfo>> _>* back_insert_iterator;
        uint8_t local_48[8];

        if (field_936 == '\0') {
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      459, nullptr);
        }
        ModelConstructedState MVar1 = (ModelConstructedState)model.field_416[0];
        if (field_416[0] != '\0') {
            if (MVar1 == (ModelConstructedState)0)
                goto LAB_100818c3f;
            pMVar3 = std::min<ModelConstructedState>(*field_416, model.field_416);
            MVar1 = *pMVar3;
        }
        field_416[0] = MVar1;
    LAB_100818c3f:
        if (model.field_16.IsValid() != '\0') {
            field_16.AddAABB(model.field_16);
        }
        uint8_t* puVar9 = &model.field_656;
        Model* local_38 = model;
        auto this_00 = puVar9->HeapBeginPtr();
        vector<std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>*
            local_40 = (vector<std::unique_ptr<GeometryBatchInstance,
                                               MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>*)puVar9;
        auto puVar4 = puVar9->end();
        if (this_00 != puVar4) {
            do {
                pMVar5 = (Model*)**this_00;
                MakeUniquePool<GeometryBatchInstance, 3072>::MakeUnique<GeometryBatchInstance, Model&>(
                    (GeometryBatchInstance*)local_48, pMVar5);
                field_656.push_back(*local_48);
                this_00 = this_00 + 8;
            } while (this_00 != puVar4);
        }
        local_40->clear();
        puVar9 = &local_38->field_688;
        auto this_01 = puVar9->HeapBeginPtr();
        local_40 = (vector<std::unique_ptr<GeometryBatchInstance,
                                           MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>*)puVar9;
        auto puVar6 = puVar9->end();
        if (this_01 != puVar6) {
            do {
                pMVar5 = (Model*)**this_01;
                MakeUniquePool<BillboardBatchInstance, 64>::MakeUnique<BillboardBatchInstance, Model&>(
                    (BillboardBatchInstance*)local_48, pMVar5);
                field_688.push_back(*local_48);
                this_01 = this_01 + 8;
            } while (this_01 != puVar6);
        }
        local_40->clear();
        puVar9 = &local_38->field_720;
        auto psVar7 = puVar9->HeapBeginPtr();
        auto psVar8 = puVar9->end();
        if (psVar7 != psVar8) {
            do {
                field_720.emplace_back<shared_ptr<ModelParticleSource> const&>(*psVar7);
                psVar7 = psVar7 + 16;
            } while (psVar7 != psVar8);
        }
        puVar9->clear();
        puVar9 = &local_38->field_752;
        psVar7 = (shared_ptr<ModelParticleSource>*)puVar9->HeapBeginPtr();
        psVar8 = (shared_ptr<ModelParticleSource>*)puVar9->end();
        if (psVar7 != psVar8) {
            do {
                field_752.emplace_back<shared_ptr<ModelParticleSource> const&>(*psVar7);
                psVar7 = psVar7 + 16;
            } while (psVar7 != psVar8);
        }
        puVar9->clear();
        pMVar5 = local_38;
        puVar9 = &local_38->field_784;
        vfxAttachmentInfo1 = (shared_ptr<VFXAttachmentInfo>*)puVar9->HeapBeginPtr();
        vfxAttachmentInfo2 = (shared_ptr<VFXAttachmentInfo>*)puVar9->end();
        back_insert_iterator = (back_insert_iterator<eastl::vector<shared_ptr<VFXAttachmentInfo>> _>*)field_784.end();
        eastl::move<shared_ptr<VFXAttachmentInfo>*,
                    eastl::back_insert_iterator<eastl::vector<shared_ptr<VFXAttachmentInfo>>>>(
            vfxAttachmentInfo1, vfxAttachmentInfo2, back_insert_iterator);
        puVar9->clear();
        auto arg1 = field_384.end();
        auto arg2 = pMVar5->field_384.HeapBeginPtr();
        auto arg3 = pMVar5->field_384.end();
        field_384.insert<int*>(arg1, arg2, arg3);
    }

    // 0x100819160
    void Model::Append(const Model& model) {
        ModelConstructedState* pMVar3;
        Model* pMVar5;
        shared_ptr<VFXAttachmentInfo>* vfxAttachmentInfo1;
        shared_ptr<VFXAttachmentInfo>* vfxAttachmentInfo2;
        back_insert_iterator<eastl::vector<shared_ptr<VFXAttachmentInfo>> _>* back_insert_iterator;
        uint8_t local_40[15];
        uint8_t local_31;

        if (field_936 == '\0') {
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      509, nullptr);
        }
        ModelConstructedState MVar1 = (ModelConstructedState)model.field_416[0];
        if (field_416[0] != '\0') {
            if (MVar1 == (ModelConstructedState)0)
                goto LAB_1008191cd;
            pMVar3 = std::min<ModelConstructedState>(*field_416, model.field_416);
            MVar1 = *pMVar3;
        }
        field_416[0] = MVar1;
    LAB_1008191cd:
        if (model.field_16.IsValid() != '\0') {
            field_16.AddAABB(model.field_16);
        }
        auto this_00 = model.field_656.HeapBeginPtr();
        auto puVar4 = model.field_656.end();
        if (this_00 != puVar4) {
            do {
                pMVar5 = (Model*)**this_00;
                local_31 = 0;
                MakeUniquePool<GeometryBatchInstance, 3072>::MakeUnique<GeometryBatchInstance&, Model&, bool>(
                    (GeometryBatchInstance*)local_40, pMVar5, (bool*)this);
                field_656.push_back(*local_40);
                this_00 = this_00 + 8;
            } while (this_00 != puVar4);
        }
        auto this_01 = model.field_688.HeapBeginPtr();
        auto puVar6 = model.field_688.end();
        if (this_01 != puVar6) {
            do {
                pMVar5 = (Model*)**this_01;
                local_31 = 0;
                MakeUniquePool<BillboardBatchInstance, 64>::MakeUnique<BillboardBatchInstance&, Model&, bool>(
                    (BillboardBatchInstance*)local_40, pMVar5, (bool*)this);
                field_688.push_back(*local_40);
                this_01 = this_01 + 8;
            } while (this_01 != puVar6);
        }
        auto psVar7 = model.field_720.HeapBeginPtr();
        auto psVar8 = model.field_720.end();
        if (psVar7 != psVar8) {
            do {
                field_720.emplace_back<shared_ptr<ModelParticleSource> const&>(*psVar7);
                psVar7 = psVar7 + 16;
            } while (psVar7 != psVar8);
        }
        psVar7 = (shared_ptr<ModelParticleSource>*)model.field_752.HeapBeginPtr();
        psVar8 = (shared_ptr<ModelParticleSource>*)model.field_752.end();
        if (psVar7 != psVar8) {
            do {
                field_752.emplace_back<shared_ptr<ModelParticleSource> const&>(*psVar7);
                psVar7 = psVar7 + 16;
            } while (psVar7 != psVar8);
        }
        vfxAttachmentInfo1 = (shared_ptr<VFXAttachmentInfo>*)model.field_784.HeapBeginPtr();
        vfxAttachmentInfo2 = (shared_ptr<VFXAttachmentInfo>*)model.field_784.end();
        back_insert_iterator = (back_insert_iterator<eastl::vector<shared_ptr<VFXAttachmentInfo>> _>*)field_784.end();
        eastl::copy<shared_ptr<VFXAttachmentInfo> const*,
                    eastl::back_insert_iterator<eastl::vector<shared_ptr<VFXAttachmentInfo>>>>(
            vfxAttachmentInfo1, vfxAttachmentInfo2, back_insert_iterator);
        auto arg1 = field_384.end();
        auto arg2 = model.field_384.HeapBeginPtr();
        auto arg3 = model.field_384.end();
        field_384.insert<int const*>(arg1, arg2, arg3);
    }

    // 0x100819460
    void Model::WeldTouchingBatches() {
        GeometryBatchInstance* pGVar2;
        GeometryBatch* pGVar3;
        uint64_t uVar4;
        bool bVar5;
        bool cVar6;
        SimpleAllocator* pSVar8;
        uint8_t* puVar10;

        char* pcVar1 = (char*)(*(void (*)(...))WeldTouchingBatches()::positionToModelBoneMapBucket)();
        if (*pcVar1 == '\0') {
            pSVar8 = (SimpleAllocator*)(*(void (*)(...))WeldTouchingBatches()::positionToModelBoneMapBucket)();
            new (pSVar8) SimpleAllocator(4352, 24, 0, 16);
            __tlv_atexit(SimpleAllocator::~SimpleAllocator, pSVar8, 4294967296);
            puVar10 = (uint8_t*)(*(void (*)(...))WeldTouchingBatches()::positionToModelBoneMapBucket)();
            *puVar10 = 1;
        }
        pSVar8 = (SimpleAllocator*)(*(void (*)(...))WeldTouchingBatches()::positionToModelBoneMapBucket)();
        SafeSimpleAllocatorEASTL local_38(pSVar8, "SafeSimpleAllocatorEASTL");
        hash_map<math::Vector3T<float>, unsigned short, eastl::hash<math::Vector3T<float>>,
                 eastl::equal_to<math::Vector3T<float>>, SafeSimpleAllocatorEASTL>
            local_b0(local_38);
        pcVar1 = (char*)(*(void (*)(...))WeldTouchingBatches()::positionToModelSkinMapBucket)();
        if (*pcVar1 == '\0') {
            pSVar8 = (SimpleAllocator*)(*(void (*)(...))WeldTouchingBatches()::positionToModelSkinMapBucket)();
            new (pSVar8) SimpleAllocator(4352, 24, 0, 16);
            uVar4 = (*(void (*)(...))WeldTouchingBatches()::positionToModelSkinMapBucket)();
            __tlv_atexit(SimpleAllocator::~SimpleAllocator, uVar4, 4294967296);
            puVar10 = (uint8_t*)(*(void (*)(...))WeldTouchingBatches()::positionToModelSkinMapBucket)();
            *puVar10 = 1;
        }
        pSVar8 = (SimpleAllocator*)(*(void (*)(...))WeldTouchingBatches()::positionToModelSkinMapBucket)();
        SafeSimpleAllocatorEASTL local_40(pSVar8, "SafeSimpleAllocatorEASTL");
        hash_map<math::Vector3T<float>, SharedVertexSkin, eastl::hash<math::Vector3T<float>>,
                 eastl::equal_to<math::Vector3T<float>>, SafeSimpleAllocatorEASTL>
            local_78(local_38);
        puVar10 = &field_656;
        auto puVar9 = puVar10->HeapBeginPtr();
        auto puVar7 = puVar10->end();
        if (puVar9 != puVar7) {
            do {
                pGVar2 = (GeometryBatchInstance*)(*puVar9).operator->();
                pGVar3 = (GeometryBatch*)pGVar2->GetGeometryBatch();
                cVar6 = pGVar3->HasBones();
                bVar5 = true;
                if (cVar6)
                    break;
                puVar9 = puVar9 + 8;
                bVar5 = false;
            } while (puVar9 != puVar7);
            if (bVar5) {
                puVar9 =
                    (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                        puVar10->HeapBeginPtr();
                puVar7 =
                    (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                        puVar10->end();
                if (puVar9 != puVar7) {
                    do {
                        pGVar2 = (GeometryBatchInstance*)(*puVar9).operator->();
                        pGVar3 = (GeometryBatch*)pGVar2->GetGeometryBatch();
                        pGVar3->WeldVertexEdgesWithMap(local_b0);
                        pGVar2 = (GeometryBatchInstance*)(*puVar9).operator->();
                        pGVar3 = (GeometryBatch*)pGVar2->GetGeometryBatch();
                        pGVar3->WeldVertexEdgesWithMapSkin(local_78);
                        puVar9 = puVar9 + 8;
                    } while (puVar9 != puVar7);
                }
            }
        }
    }

    // 0x100819710
    void Model::ConstructFromGeometryBatch(ModelConstructedState arg1, shared_ptr<GeometryBatch>& arg2, int arg3,
                                           RT7Core* arg4) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter> local_40;

        if (param_5 == nullptr) {
            LogAssert("rt7Core != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      593, nullptr);
        }
        if (IsReadyToConstruct(param_5) == '\0') {
            LogAssert("IsReadyToConstruct(rt7Core)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      594, nullptr);
        }
        ScopedGPUMemoryZone local_38("ConstructFromGeometryBatch");
        auto pMVar2 = param_5->GetMaterialManager();
        auto textureManager = param_5->GetTextureManager();
        uint8_t* this_00 = &field_656;
        this_00->clear();
        this_00->reserve(1);
        MakeUniquePool<GeometryBatchInstance, 3072>::MakeUnique<Model&, shared_ptr<GeometryBatch>&>(
            &local_40, (shared_ptr<GeometryBatch>*)this);
        ((GeometryBatchInstance*)local_40.operator->())->SetInitialSource(m_externalID, '\0', param_4);
        this_00->push_back(local_40);
        field_688.clear();
        field_720.clear();
        field_752.clear();
        field_784.clear();
        SetBussID(NewModelRawUniqueID());
        CombineBatches(*textureManager);
        SortSections();
        ConstructCommon(param_2, *pMVar2, *textureManager);
    }

    // 0x1008198b0
    void Model::CombineBatches(TextureManager& textureManager) {
        int iVar3;
        uint8_t** ppuVar4;
        uint64_t uVar7;
        Logger* this_01;
        uint64_t uVar8;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_02;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_03;
        GeometryBatchInstance* pGVar9;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_04;
        unsigned long uVar10;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_05;
        BillboardBatchInstance* pBVar11;
        BillboardBatchInstance* pBVar12;
        GeometryBatchInstance* pGVar13;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar14;
        uint8_t* puVar15;
        unsigned long uVar17;

        SortBatches();
        bool cVar1 = GetUseUncompressedTextures();
        if (!cVar1) {
            ppuVar4 = &graphicutils::TextureAtlasUsage::USAGE_COMPRESSED;
        } else {
            ppuVar4 = &graphicutils::TextureAtlasUsage::USAGE_UNCOMPRESSED;
        }
        TextureAtlasUsage* textureAtlasUsage = (TextureAtlasUsage*)*ppuVar4;
        long lVar5 = ((TextureAtlasManager*)textureManager.GetTextureAtlasManager())->GetSettings();
        bool bVar2 = (bool)textureManager.UseCompressedTextures();
        auto textureAtlas = TextureAtlasManager::GetVirtualAtlas(*((lVar5 + 144)), textureAtlasUsage, bVar2);
        uint8_t* puVar16 = &field_656;
        unsigned long uVar6 = puVar16->size();
        if (1 < uVar6) {
            uVar7 = puVar16->size();
            lVar5 = puVar16->size();
            if (lVar5 != 1) {
                uVar6 = 0;
            LAB_100819a09:
                this_02 =
                    (unique_ptr<GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(*puVar16)[uVar6];
                uVar6 = uVar6 + 1;
                uVar17 = uVar6;
            LAB_100819a20:
                do {
                    uVar10 = puVar16->size();
                    if (uVar10 <= uVar17)
                        goto LAB_1008199f0;
                    this_03 =
                        (unique_ptr<GeometryBatchInstance,
                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(*puVar16)[uVar17];
                    pGVar13 = (GeometryBatchInstance*)(*this_02).operator->();
                    pGVar9 = (GeometryBatchInstance*)**this_03;
                    iVar3 = pGVar13->IsCombinableWith(*pGVar9, true, true, true, *textureAtlas);
                    if (iVar3 == 2) {
                        pGVar13 = (GeometryBatchInstance*)(*this_02).operator->();
                        pAVar14 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pGVar13->GetMaterial();
                        puVar15 = (uint8_t*)pAVar14->data();
                        if (puVar15 == AlphaMode::ALPHA_BLENDED)
                            goto LAB_1008199f0;
                    } else if (iVar3 == 0) {
                        pGVar13 = (GeometryBatchInstance*)(*this_02).operator->();
                        pGVar9 = (GeometryBatchInstance*)**this_03;
                        pGVar13->Append(*pGVar9, true);
                        lVar5 = puVar16->HeapBeginPtr();
                        puVar16->erase((lVar5 + uVar17 * 8));
                        goto LAB_100819a20;
                    }
                    uVar17 = uVar17 + 1;
                } while (true);
            }
        LAB_100819957:
            uVar6 = puVar16->size();
            if (16 < uVar6) {
                this_01 = logger::default_logger();
                uVar8 = puVar16->size();
                this_01->Log(false, 3,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                             "model/Model.cpp",
                             1055,
                             "Model has more than 16 batches, this may cause sorting key problems. Current batch "
                             "count: %d (starting count: %d)",
                             uVar8, uVar7);
            }
        }
        puVar16 = &field_688;
        cVar1 = puVar16->empty();
        if ((!cVar1) && (lVar5 = puVar16->size(), lVar5 != 1)) {
            uVar6 = 0;
            do {
                this_04 = (unique_ptr<BillboardBatchInstance,
                                      MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(*puVar16)[uVar6];
                uVar6 = uVar6 + 1;
                uVar17 = uVar6;
            LAB_100819b90:
                do {
                    uVar10 = puVar16->size();
                    if (uVar10 <= uVar17)
                        break;
                    this_05 =
                        (unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(*puVar16)[uVar17];
                    pBVar11 = (BillboardBatchInstance*)(*this_04).operator->();
                    pBVar12 = (BillboardBatchInstance*)**this_05;
                    iVar3 = pBVar11->IsCombinableWith(*pBVar12, true, true, true, *textureAtlas);
                    if (iVar3 == 2) {
                        pGVar13 = (GeometryBatchInstance*)(*this_04).operator->();
                        pAVar14 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pGVar13->GetMaterial();
                        puVar15 = (uint8_t*)pAVar14->data();
                        if (puVar15 != AlphaMode::ALPHA_BLENDED)
                            goto LAB_100819c24;
                        bVar2 = false;
                    } else {
                        if (iVar3 == 0) {
                            pBVar11 = (BillboardBatchInstance*)(*this_04).operator->();
                            pBVar12 = (BillboardBatchInstance*)**this_05;
                            pBVar11->Append(*pBVar12, true);
                            lVar5 = puVar16->HeapBeginPtr();
                            puVar16->erase((lVar5 + uVar17 * 8));
                            goto LAB_100819b90;
                        }
                    LAB_100819c24:
                        uVar17 = uVar17 + 1;
                        bVar2 = true;
                    }
                } while (bVar2);
                lVar5 = puVar16->size();
            } while (uVar6 < lVar5 - 1U);
        }
        return;
    LAB_1008199f0:
        lVar5 = puVar16->size();
        if (lVar5 - 1U <= uVar6)
            goto LAB_100819957;
        goto LAB_100819a09;
    }

    // 0x100819c40
    void Model::SortSections() {
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((GeometryBatchInstance*)(*this_00).operator->())->SortSections();
        }
        auto this_02 = field_688.HeapBeginPtr();
        auto puVar2 = field_688.end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            ((BillboardBatchInstance*)(*this_02).operator->())->SortSections();
        }
    }

    // 0x100819ce0
    void Model::ConstructCommon(ModelConstructedState arg1, MaterialManager& arg2, TextureManager& arg3) {
        UpdateAABB();
        if (1 < param_2) {
            SetupInitialMaterials(*param_3);
            if (param_2 == 2) {
                BakeHSLColors(*param_3);
            } else {
                BakeMaterialInfoAndTextureMetaAndHSLColors(*param_3, *param_4, true);
                BakeBatchFlags();
                if (3 < param_2) {
                    ConstructFinishAndUpload();
                }
            }
        }
    }

    // 0x100819d60
    void Model::SetupInitialMaterials(const MaterialManager& materialManager) {
        bool arg2;
        int iVar1;
        GeometryBatch* this_01;
        GeometryBatchInstance* pGVar3;
        Material* pMVar4;
        BillboardBatchInstance* pBVar6;

        auto this_00 = field_656.HeapBeginPtr();
        auto puVar2 = field_656.end();
        for (; this_00 != puVar2; this_00 = this_00 + 8) {
            pGVar3 = (GeometryBatchInstance*)(*this_00).operator->();
            iVar1 = pGVar3->GetFirstMaterialIDFromSource();
            if (iVar1 == -1) {
                pMVar4 = (Material*)materialManager.GetDefaultMaterial();
            } else {
                pMVar4 = materialManager.GetMaterial(iVar1);
            }
            pGVar3 = (GeometryBatchInstance*)(*this_00).operator->();
            this_01 = (GeometryBatch*)pGVar3->GetGeometryBatch();
            arg2 = (bool)this_01->HasFaceTransparency();
            pGVar3->SetInitialMaterial(*pMVar4, arg2);
        }
        auto this_02 = field_688.HeapBeginPtr();
        auto puVar5 = field_688.end();
        for (; this_02 != puVar5; this_02 = this_02 + 8) {
            pBVar6 = (BillboardBatchInstance*)(*this_02).operator->();
            iVar1 = pBVar6->GetFirstMaterialIDFromSource();
            if (iVar1 == -1) {
                pMVar4 = (Material*)materialManager.GetDefaultMaterial();
            } else {
                pMVar4 = materialManager.GetMaterial(iVar1);
            }
            pBVar6 = (BillboardBatchInstance*)(*this_02).operator->();
            pBVar6->SetInitialMaterial(*pMVar4);
        }
        field_416[0] = 2;
    }

    // 0x100819e90
    void Model::BakeMaterialInfoAndTextureMetaAndHSLColors(const MaterialManager& materialManager,
                                                           TextureManager& textureManager, bool arg3) {
        fixed_vector<int, 128ul>* pfVar2;
        fixed_vector<shared_ptr<TextureAtlasReference>, 1ul>* pfVar3;
        bool cVar6;
        GeometryBatchInstance* pGVar9;
        vector<BillboardBatchVertexLP>* pvVar10;
        long lVar11;
        BillboardBatchInstance* pBVar14;
        MaterialInfo* pMVar15;
        MaterialInfo* pMVar17;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar18;
        MaterialInfo* pMVar19;
        fixed_vector<int, _128ul>* pfVar22;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* psVar23;
        long lVar24;
        int* piVar25;
        int* piVar26;
        TextureAtlasReference* this_02;
        shared_ptr* this_03;
        shared_ptr* psVar27;
        TextureAtlasReference* this_04;
        uint64_t in_register_00000009;
        uint64_t extraout_RDX;
        unsigned long arg1_00;
        ReturnValue local_19e8;
        uint64_t local_19e0;
        ReturnValue local_19d8;
        Material* local_19c8;
        Vector2T<unsigned char> local_19b0;
        uint8_t local_1978[2696];
        ReturnValue local_260;

        TextureManager* local_1990 = textureManager;
        Model* local_1988 = this;
        if (2 < (uint8_t)field_416[0]) {
            LogAssert("m_constructedState < ModelConstructedState::DATA_MAT_AND_ATLAS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      868, nullptr);
        }
        uint8_t* puVar1 = &field_656;
        auto puVar7 = puVar1->HeapBeginPtr();
        Layout* local_19a0 = (Layout*)puVar1;
        auto puVar8 = puVar1->end();
        if (puVar7 == puVar8) {
            arg1_00 = 0;
        } else {
            arg1_00 = 0;
            do {
                pGVar9 = (GeometryBatchInstance*)(*puVar7).operator->();
                pvVar10 = (vector<BillboardBatchVertexLP>*)pGVar9->GetApproxMaterialInfoList();
                lVar11 = pvVar10->size();
                arg1_00 = arg1_00 + lVar11;
                puVar7 = puVar7 + 8;
            } while (puVar7 != puVar8);
        }
        puVar1 = &local_1988->field_688;
        auto puVar12 = puVar1->HeapBeginPtr();
        Layout* local_19a8 = (Layout*)puVar1;
        auto puVar13 = puVar1->end();
        for (; puVar12 != puVar13; puVar12 = puVar12 + 8) {
            pBVar14 = (BillboardBatchInstance*)(*puVar12).operator->();
            pvVar10 = (vector<BillboardBatchVertexLP>*)pBVar14->GetApproxMaterialInfoList();
            lVar11 = pvVar10->size();
            arg1_00 = arg1_00 + lVar11;
        }
        uint32_t local_19b4 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        vector<MaterialInfo, SafeBucketAllocatorEASTL> local_1a00;
        local_1a00.reserve(arg1_00);
        Layout* pLVar16 = local_19a0;
        puVar7 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     local_19a0->HeapBeginPtr();
        puVar8 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     pLVar16->end();
        if (puVar7 != puVar8) {
            do {
                pMVar15 = (MaterialInfo*)local_1a00.end();
                pGVar9 = (GeometryBatchInstance*)(*puVar7).operator->();
                pLVar16 = (Layout*)pGVar9->GetApproxMaterialInfoList();
                pMVar17 = (MaterialInfo*)pLVar16->HeapBeginPtr();
                pGVar9 = (GeometryBatchInstance*)(*puVar7).operator->();
                pvVar18 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                              pGVar9->GetApproxMaterialInfoList();
                pMVar19 = (MaterialInfo*)pvVar18->end();
                local_1a00.insert<MaterialInfo const*>(pMVar15, pMVar17, pMVar19);
                puVar7 = puVar7 + 8;
            } while (puVar7 != puVar8);
        }
        pLVar16 = local_19a8;
        puVar12 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                      local_19a8->HeapBeginPtr();
        puVar13 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                      pLVar16->end();
        if (puVar12 != puVar13) {
            do {
                pMVar15 = (MaterialInfo*)local_1a00.end();
                pBVar14 = (BillboardBatchInstance*)(*puVar12).operator->();
                pLVar16 = (Layout*)pBVar14->GetApproxMaterialInfoList();
                pMVar17 = (MaterialInfo*)pLVar16->HeapBeginPtr();
                pBVar14 = (BillboardBatchInstance*)(*puVar12).operator->();
                pvVar18 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                              pBVar14->GetApproxMaterialInfoList();
                pMVar19 = (MaterialInfo*)pvVar18->end();
                local_1a00.insert<MaterialInfo const*>(pMVar15, pMVar17, pMVar19);
                puVar12 = puVar12 + 8;
            } while (puVar12 != puVar13);
        }
        lVar11 = ((TextureAtlasManager*)local_1990->GetTextureAtlasManager())->GetSettings();
        auto pTVar20 = GetTextureAtlasUsage(local_1988);
        bool bVar4 = (bool)local_1990->UseCompressedTextures();
        auto pTVar21 = TextureAtlasManager::GetVirtualAtlas(*((lVar11 + 144)), pTVar20, bVar4);
        ((local_1978 + 2696))->WrapArray<eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>>(local_1a00);
        char cVar5 = pTVar21->CheckMaterialsFit(*((local_1978 + 2696)));
        Model* this_00 = local_1988;
        puVar1 = local_1988->m_textureAtlasReferences;
        puVar1->clear();
        pLVar16 = local_19a8;
        fixed_vector<shared_ptr<TextureAtlasReference>, 1ul>* local_1998 =
            (fixed_vector<shared_ptr<TextureAtlasReference>, 1ul>*)puVar1;
        char local_1979 = cVar5;
        if (!cVar5) {
            lVar11 = local_19a8->size();
            lVar24 = local_19a0->size();
            puVar1->reserve(lVar11 + lVar24);
            puVar12 =
                (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                    pLVar16->HeapBeginPtr();
            puVar13 =
                (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                    pLVar16->end();
            if (puVar12 != puVar13) {
                pfVar2 = (fixed_vector<int, 128ul>*)(local_1978 + 2696);
                do {
                    new (pfVar2) eastl::fixed_vector<int, 128ul>();
                    pBVar14 = (BillboardBatchInstance*)(*puVar12).operator->();
                    pBVar14->BuildMaterialIDListFromSource(*pfVar2);
                    cVar5 = pfVar2->empty();
                    if (!cVar5) {
                        piVar25 = (int*)pfVar2->HeapBeginPtr();
                        piVar26 = (int*)pfVar2->end();
                        eastl::sort<int*>(piVar25, piVar26);
                        piVar25 = (int*)pfVar2->HeapBeginPtr();
                        piVar26 = (int*)pfVar2->end();
                        piVar25 = eastl::unique<int*>(piVar25, piVar26);
                        piVar26 = (int*)pfVar2->end();
                        pfVar2->erase(piVar25, piVar26);
                        pTVar20 = (TextureAtlasUsage*)local_1990->GetTextureAtlasManager();
                        pfVar22 = (fixed_vector<int, _128ul>*)GetTextureAtlasUsage(local_1988);
                        local_1978->GetSharedAtlasRefFromMaterialIDs<eastl::fixed_vector<int, 128ul>>(pTVar20, pfVar22);
                        pfVar3 = local_1998;
                        local_1998->push_back(*local_1978);
                        psVar23 = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)pfVar3->back();
                        bVar4 = *psVar23 != nullptr;
                        if (!bVar4) {
                            LogAssert("m_textureAtlasReferences.back() != nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/Model.cpp",
                                      924, nullptr);
                        }
                    }
                    pfVar2->~fixed_vector();
                    puVar12 = puVar12 + 8;
                } while (puVar12 != puVar13);
            }
            pLVar16 = local_19a0;
            puVar7 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    local_19a0->HeapBeginPtr();
            puVar8 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    pLVar16->end();
            if (puVar7 != puVar8) {
                pfVar2 = (fixed_vector<int, 128ul>*)(local_1978 + 2696);
                do {
                    new (pfVar2) eastl::fixed_vector<int, 128ul>();
                    pGVar9 = (GeometryBatchInstance*)(*puVar7).operator->();
                    pGVar9->BuildMaterialIDListFromSource(*pfVar2);
                    cVar5 = pfVar2->empty();
                    if (!cVar5) {
                        piVar25 = (int*)pfVar2->HeapBeginPtr();
                        piVar26 = (int*)pfVar2->end();
                        eastl::sort<int*>(piVar25, piVar26);
                        piVar25 = (int*)pfVar2->HeapBeginPtr();
                        piVar26 = (int*)pfVar2->end();
                        piVar25 = eastl::unique<int*>(piVar25, piVar26);
                        piVar26 = (int*)pfVar2->end();
                        pfVar2->erase(piVar25, piVar26);
                        pTVar20 = (TextureAtlasUsage*)local_1990->GetTextureAtlasManager();
                        pfVar22 = (fixed_vector<int, _128ul>*)GetTextureAtlasUsage(local_1988);
                        local_1978->GetSharedAtlasRefFromMaterialIDs<eastl::fixed_vector<int, 128ul>>(pTVar20, pfVar22);
                        pfVar3 = local_1998;
                        local_1998->push_back(*local_1978);
                        psVar23 = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)pfVar3->back();
                        bVar4 = *psVar23 != nullptr;
                        if (!bVar4) {
                            LogAssert("m_textureAtlasReferences.back() != nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/Model.cpp",
                                      936, nullptr);
                        }
                    }
                    pfVar2->~fixed_vector();
                    puVar7 = puVar7 + 8;
                } while (puVar7 != puVar8);
            }
        } else {
            GetMaterialIDList((ReturnValue*)(local_1978 + 2696), this_00);
            cVar5 = ((local_1978 + 2696))->empty();
            if (!cVar5) {
                pTVar20 = (TextureAtlasUsage*)local_1990->GetTextureAtlasManager();
                pfVar22 = (fixed_vector<int, _128ul>*)GetTextureAtlasUsage(local_1988);
                local_1978->GetSharedAtlasRefFromMaterialIDs<eastl::fixed_vector<int, 128ul>>(pTVar20, pfVar22);
                pfVar3 = local_1998;
                local_1998->push_back(*local_1978);
                psVar23 = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)pfVar3->back();
                bVar4 = *psVar23 != nullptr;
                if (!bVar4) {
                    LogAssert("m_textureAtlasReferences.back() != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/Model.cpp",
                              906, nullptr);
                }
            }
            ((local_1978 + 2696))->~fixed_vector();
        }
        GetMaterialIDList(&local_260, local_1988);
        new ((local_1978 + 2696)) eastl::fixed_map<int, Material const*, 64ul>();
        new (local_1978) eastl::fixed_map<int, ModelTextureMeta, 64ul>();
        auto arg1 = local_260.HeapBeginPtr();
        local_1990 = (TextureManager*)local_260.end();
        cVar5 = local_1979;
        if ((TextureManager*)arg1 != local_1990) {
            do {
                if (*arg1 == 4294967295) {
                    local_19c8 = (Material*)materialManager.GetDefaultMaterial();
                } else {
                    local_19c8 = materialManager.GetMaterial(*arg1);
                }
                local_19e8 = ((local_1978 + 2696))->find(*arg1);
                local_19d8.end();
                cVar6 = local_19e8 == local_19d8;
                if (cVar6) {
                    local_19e8._0_4_ = eastl::make_pair<unsigned int const&, game::ScriptVarType*>(*arg1, local_19c8);
                    local_19e0 = extraout_RDX;
                    local_19d8 = ((local_1978 + 2696))->insert<eastl::pair<int, Material const*>, void>(local_19e8);
                }
                pfVar3 = local_1998;
                if (!cVar5) {
                    this_03 = (shared_ptr*)local_1998->HeapBeginPtr();
                    psVar27 = (shared_ptr*)pfVar3->end();
                    if (this_03 == psVar27) {
                        this_02 = nullptr;
                    } else {
                        this_02 = nullptr;
                        do {
                            cVar5 = shared_ptr::operator_cast_to_bool(this_03);
                            if (cVar5) {
                                this_04 = (TextureAtlasReference*)(*this_03).operator->();
                                pTVar21 = (TextureAtlas*)this_04->GetTextureAtlas();
                                cVar5 = pTVar21->CheckContainsMaterial(*arg1);
                                if (cVar5) {
                                    this_02 = (TextureAtlasReference*)this_03->end();
                                    break;
                                }
                            }
                            this_03 = this_03 + 1;
                        } while (this_03 != psVar27);
                    }
                } else {
                    pvVar18 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*local_1998)[0];
                    this_02 = (TextureAtlasReference*)pvVar18->end();
                }
                cVar5 = local_1979;
                if ((this_02 != nullptr) && (cVar6 = local_19c8->HasTextures(), cVar6)) {
                    local_19b0 = math::Vector2T();
                    pTVar21 = (TextureAtlas*)this_02->GetTextureAtlas();
                    pTVar21->GetMaterialSettingsSlotXY(local_19b0, *arg1);
                    local_19d8[0] = (ReturnValue)eastl::make_pair<int const&, ModelTextureMeta&>(*arg1, local_19b0);
                    local_19e8 = local_1978->insert<eastl::pair<int, ModelTextureMeta>, void>(local_19d8);
                }
                arg1 = arg1 + 1;
            } while ((TextureManager*)arg1 != local_1990);
        }
        pLVar16 = local_19a0;
        puVar7 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     local_19a0->HeapBeginPtr();
        puVar8 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     pLVar16->end();
        cVar5 = (char)local_19b4;
        if (puVar7 != puVar8) {
            do {
                pGVar9 = (GeometryBatchInstance*)(*puVar7).operator->();
                pGVar9->BakeMaterialInfoAndTextureMeta(*((local_1978 + 2696)), *local_1978);
                if (cVar5) {
                    pGVar9 = (GeometryBatchInstance*)(*puVar7).operator->();
                    pGVar9->BakeHSLColors(*((local_1978 + 2696)));
                }
                puVar7 = puVar7 + 8;
            } while (puVar7 != puVar8);
        }
        pLVar16 = local_19a8;
        puVar12 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                      local_19a8->HeapBeginPtr();
        puVar13 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                      pLVar16->end();
        if (puVar12 != puVar13) {
            do {
                pBVar14 = (BillboardBatchInstance*)(*puVar12).operator->();
                pBVar14->BakeTextureMeta(*local_1978);
                if (cVar5) {
                    pBVar14 = (BillboardBatchInstance*)(*puVar12).operator->();
                    pBVar14->BakeHSLColors();
                }
                puVar12 = puVar12 + 8;
            } while (puVar12 != puVar13);
        }
        local_1988->field_416[0] = 3;
        ((local_1978 + 2696))->~fixed_map();
    }

    // 0x10081a970
    void Model::BakeBatchFlags() {
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((GeometryBatchInstance*)(*this_00).operator->())->BakeBatchFlags();
        }
    }

    // 0x10081a9c0
    void Model::BakeHSLColors(const MaterialManager& materialManager) {
        GeometryBatchInstance* pGVar5;
        BillboardBatchInstance* pBVar8;
        uint64_t extraout_RDX;
        ReturnValue local_f30;
        ReturnValue local_f20;
        uint64_t local_f18;
        Material* local_f10;
        fixed_map<int, Material const*, 64ul> local_ef0[3216];

        fixed_vector<int, 128ul> local_260;
        uint8_t* this_00 = &field_656;
        auto puVar3 = this_00->HeapBeginPtr();
        auto puVar4 = this_00->end();
        if (puVar3 != puVar4) {
            do {
                pGVar5 = (GeometryBatchInstance*)(*puVar3).operator->();
                pGVar5->BuildMaterialIDListFromSource(local_260);
                puVar3 = puVar3 + 8;
            } while (puVar3 != puVar4);
        }
        uint8_t* this_01 = &field_688;
        auto puVar6 = this_01->HeapBeginPtr();
        auto puVar7 = this_01->end();
        if (puVar6 != puVar7) {
            do {
                pBVar8 = (BillboardBatchInstance*)(*puVar6).operator->();
                pBVar8->BuildMaterialIDListFromSource(local_260);
                puVar6 = puVar6 + 8;
            } while (puVar6 != puVar7);
        }
        Layout* local_f08 = (Layout*)this_01;
        Layout* local_f00 = (Layout*)this_00;
        new (local_ef0) eastl::fixed_map<int, Material const*, 64ul>();
        auto arg1 = local_260.HeapBeginPtr();
        auto piVar9 = local_260.end();
        if (arg1 != piVar9) {
            do {
                if (*arg1 == -1) {
                    local_f10 = (Material*)materialManager.GetDefaultMaterial();
                } else {
                    local_f10 = materialManager.GetMaterial(*arg1);
                }
                local_f20 = local_ef0->find(*arg1);
                local_f30.end();
                if (local_f20 == local_f30 != '\0') {
                    local_f20._0_4_ = eastl::make_pair<unsigned int const&, game::ScriptVarType*>(*arg1, local_f10);
                    local_f18 = extraout_RDX;
                    local_f30 = local_ef0->insert<eastl::pair<int, Material const*>, void>(local_f20);
                }
                arg1 = arg1 + 1;
            } while (arg1 != piVar9);
        }
        Layout* pLVar1 = local_f00;
        puVar3 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     local_f00->HeapBeginPtr();
        puVar4 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     pLVar1->end();
        pLVar1 = local_f08;
        if (puVar3 != puVar4) {
            do {
                pGVar5 = (GeometryBatchInstance*)(*puVar3).operator->();
                pGVar5->BakeHSLColors(*local_ef0);
                puVar3 = puVar3 + 8;
            } while (puVar3 != puVar4);
        }
        puVar6 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                     pLVar1->HeapBeginPtr();
        puVar7 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                     pLVar1->end();
        for (; puVar6 != puVar7; puVar6 = puVar6 + 8) {
            pBVar8 = (BillboardBatchInstance*)(*puVar6).operator->();
            pBVar8->BakeHSLColors();
        }
    }

    // 0x10081acb0
    void Model::ConstructFromModelRawRT7(ModelConstructedState arg1, RT7Core* arg2, PacketView arg3) {
        ScopedGPUMemoryZone local_38("ConstructFromModelRawRT7");
        if (param_3 == nullptr) {
            LogAssert("rt7Core != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      658, nullptr);
        }
        if (IsReadyToConstruct(param_3) == '\0') {
            LogAssert("IsReadyToConstruct(rt7Core)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      659, nullptr);
        }
        auto pMVar2 = param_3->GetMaterialManager();
        auto pTVar3 = param_3->GetTextureManager();
        PacketView local_60(param_4);
        LoadDataFromModelRawRT7(&local_60);
        ConstructCommon(param_2, *pMVar2, *pTVar3);
    }

    // 0x10081adc0
    void Model::LoadDataFromModelRawRT7(PacketView packetView) {
        bool cVar6;
        unsigned char arg2;
        uint16_t uVar7;
        short sVar8;
        short sVar9;
        short sVar10;
        short sVar11;
        unsigned int uVar12;
        unsigned int uVar13;
        GeometryBatchInstance* pGVar14;
        BillboardBatchInstance* pBVar15;
        int iVar16;
        unsigned short uVar17;
        VertexBonePos local_f8;
        VertexBonePos local_e0;
        uint8_t local_c8[24];
        CoordGrid local_b0;
        CoordGrid local_a0;
        vector<shared_ptr<ModelParticleSource>>* local_90;
        VertexBonePos local_80;
        CoordGrid local_68;
        vector<std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>>*
            local_48;
        unsigned short local_3a;
        unsigned short local_36;

        Model* local_50 = this;
        uint8_t bVar4 = packetView->g1();
        if (bVar4 != 2) {
            LogAssert("modelType == static_cast<uint>(ModelFormatType::RT7)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      674, "Model: Unexpected model type field in rt7: %u", (unsigned long)bVar4);
        }
        bVar4 = packetView->g1();
        PacketView* pPVar2 = packetView;
        if (3 < (uint8_t)(bVar4 - 1)) {
            LogAssert("packetVersion > 0 && packetVersion <= MODELRAWRT7_CURRENT_PACKED_VERSION",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      679, "Model: Unexpected model packetVersion field in rt7: %u", (unsigned long)bVar4);
        }
        packetView->g1();
        unsigned short local_34 = pPVar2->g2LE();
        uint8_t local_31 = pPVar2->g1();
        uint8_t uVar5 = pPVar2->g1();
        local_90 = (vector<shared_ptr<ModelParticleSource>>*)(((uint64_t)local_90._1_7_ << 8) | (uint8_t)uVar5);
        uint8_t local_37 = pPVar2->g1();
        uint8_t* puVar1 = &local_50->field_656;
        puVar1->clear();
        vector<std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>*
            local_88 = (vector<std::unique_ptr<GeometryBatchInstance,
                                               MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>*)puVar1;
        puVar1->reserve((unsigned long)local_34);
        pPVar2 = packetView;
        if (local_34 != 0) {
            uVar17 = 0;
            do {
                uVar12 = pPVar2->g4LE();
                uVar5 = pPVar2->g1();
                local_48 =
                    (vector<std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::
                                                                        UniquePoolDeleter>>*)(((uint64_t)local_48._1_7_
                                                                                               << 8) |
                                                                                              (uint8_t)uVar5);
                local_36 = pPVar2->g2LE();
                MakeUniquePool<GeometryBatchInstance, 3072>::MakeUnique<Model&, unsigned short&>(
                    (Model*)&local_80, (unsigned short*)local_50);
                pGVar14 = (GeometryBatchInstance*)local_80.operator->();
                cVar6 = pGVar14->LoadMeshFromModelRawRT7(*pPVar2, uVar12);
                if (cVar6) {
                    if ((uVar12 & 16) == 0) {
                        uVar12 = (unsigned int)local_36;
                        pGVar14 = (GeometryBatchInstance*)local_80.operator->();
                        pGVar14->SetInitialSource(local_50->m_externalID, (unsigned char)local_48, uVar12 - 1);
                    }
                    local_88->push_back(local_80);
                }
                uVar17 = uVar17 + 1;
            } while (uVar17 < local_34);
        }
        puVar1 = &local_50->field_688;
        puVar1->clear();
        local_48 = (vector<std::unique_ptr<BillboardBatchInstance,
                                           MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>>*)puVar1;
        puVar1->reserve((unsigned long)local_31);
        if (local_31 != 0) {
            uVar17 = 0;
            do {
                pPVar2 = packetView;
                arg2 = packetView->g1();
                uVar12 = pPVar2->g2LE();
                uVar13 = pPVar2->g2LE();
                MakeUniquePool<BillboardBatchInstance, 64>::MakeUnique<Model&, unsigned char&>(
                    (Model*)&local_80, (unsigned char*)local_50);
                pBVar15 = (BillboardBatchInstance*)local_80.operator->();
                pBVar15->LoadMeshFromModelRawRT7(*pPVar2);
                pBVar15 = (BillboardBatchInstance*)local_80.operator->();
                pBVar15->SetInitialSource(local_50->m_externalID, arg2, (uVar12 & 65535) - 1, (uVar13 & 65535) - 1);
                local_48->push_back(local_80);
                uVar17 = uVar17 + 1;
            } while (uVar17 < local_31);
        }
        Model* pMVar3 = local_50;
        puVar1 = &local_50->field_720;
        puVar1->clear();
        pMVar3->field_784.clear();
        cVar6 = (char)local_90;
        vector<std::unique_ptr<GeometryBatchInstance,
                               MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>* arg1 =
            (vector<std::unique_ptr<GeometryBatchInstance,
                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>*)((unsigned long)
                                                                                                           local_90 &
                                                                                                       255);
        local_90 = (vector<shared_ptr<ModelParticleSource>>*)puVar1;
        puVar1->reserve((unsigned long)arg1);
        pPVar2 = packetView;
        if (cVar6) {
            do {
                local_88 = arg1;
                local_3a = pPVar2->g2LE();
                local_68 = math::Vector3T();
                local_68.field_0 = pPVar2->gFloatLE();
                local_68.field_4 = pPVar2->gFloatLE();
                local_68.field_8 = pPVar2->gFloatLE();
                uVar7 = pPVar2->g2sLE();
                local_48 =
                    (vector<std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::
                                                                        UniquePoolDeleter>>*)(((uint64_t)local_48._2_6_
                                                                                               << 16) |
                                                                                              (uint16_t)uVar7);
                local_36 = pPVar2->g2sLE();
                local_b0 = math::Vector3T();
                local_b0.field_0 = pPVar2->gFloatLE();
                local_b0.field_4 = pPVar2->gFloatLE();
                local_b0.field_8 = pPVar2->gFloatLE();
                sVar8 = pPVar2->g2sLE();
                sVar9 = pPVar2->g2sLE();
                local_a0 = math::Vector3T();
                local_a0.field_0 = pPVar2->gFloatLE();
                local_a0.field_4 = pPVar2->gFloatLE();
                local_a0.field_8 = pPVar2->gFloatLE();
                sVar10 = pPVar2->g2sLE();
                sVar11 = pPVar2->g2sLE();
                iVar16 = (int)(short)local_48;
                local_48 =
                    (vector<std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::
                                                                        UniquePoolDeleter>>*)(((uint64_t)local_48._4_4_
                                                                                               << 32) |
                                                                                              (uint32_t)((int)sVar11));
                if ((short)local_3a < 0) {
                    local_c8._20_4_ = local_3a & 32767;
                    local_80 = VFXAttachmentInfo::VertexBonePos(local_68, iVar16, (int)(short)local_36);
                    local_f8 = VFXAttachmentInfo::VertexBonePos(local_b0, (int)sVar8, (int)sVar9);
                    local_e0 = VFXAttachmentInfo::VertexBonePos(local_a0, (int)sVar10, (int)local_48);
                    MakeSharedPool<VFXAttachmentInfo, 768>::MakeShared<int, VFXAttachmentInfo::VertexBonePos,
                                                                       VFXAttachmentInfo::VertexBonePos,
                                                                       VFXAttachmentInfo::VertexBonePos>(
                        (int*)local_c8, (VertexBonePos*)(local_c8 + 20), (VertexBonePos*)&local_80,
                        (VertexBonePos*)&local_f8);
                    pMVar3->field_784.push_back(*local_c8);
                } else {
                    local_80 = ModelParticleSource::VertexBonePos(local_68, iVar16, (int)(short)local_36);
                    new (&local_f8) ModelParticleSource::VertexBonePos(local_b0, (int)sVar8, (int)sVar9);
                    local_e0 = ModelParticleSource::VertexBonePos(local_a0, (int)sVar10, (int)local_48);
                    MakeSharedPool<ModelParticleSource, 768>::MakeShared<
                        unsigned short&, ModelParticleSource::VertexBonePos, ModelParticleSource::VertexBonePos,
                        ModelParticleSource::VertexBonePos>((unsigned short*)local_c8, (VertexBonePos*)&local_3a,
                                                            &local_80, &local_f8);
                    local_90->push_back(*local_c8);
                }
                sVar8 = (short)local_88 - 1;
                arg1 = (vector<std::unique_ptr<GeometryBatchInstance,
                                               MakeUniquePool<GeometryBatchInstance, 3072>::
                                                   UniquePoolDeleter>>*)(((uint64_t)((
                                                                              int64_t)((unsigned long)local_88 >> 16))
                                                                          << 16) |
                                                                         (uint16_t)sVar8);
            } while (sVar8 != 0);
        }
        puVar1 = &local_50->field_752;
        puVar1->clear();
        bVar4 = local_37;
        unsigned long arg1_00 = (unsigned long)local_37;
        local_48 = (vector<std::unique_ptr<BillboardBatchInstance,
                                           MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>>*)puVar1;
        puVar1->reserve(arg1_00);
        if (bVar4 != 0) {
            do {
                local_c8._0_2_ = pPVar2->g2LE();
                local_e0 = math::Vector3T();
                local_e0.field_0 = pPVar2->gFloatLE();
                local_e0.field_4 = pPVar2->gFloatLE();
                local_e0.field_8 = pPVar2->gFloatLE();
                sVar8 = pPVar2->g2sLE();
                sVar9 = pPVar2->g2sLE();
                local_80 = ModelParticleSource::VertexBonePos(local_e0, (int)sVar8, (int)sVar9);
                MakeSharedPool<ModelParticleSource, 768>::MakeShared<unsigned short&,
                                                                     ModelParticleSource::VertexBonePos>(
                    (unsigned short*)&local_f8, (VertexBonePos*)local_c8);
                local_48->push_back(local_f8);
                uVar17 = (short)arg1_00 - 1;
                arg1_00 = (unsigned long)uVar17;
            } while (uVar17 != 0);
        }
        iVar16 = NewModelRawUniqueID();
        pMVar3 = local_50;
        local_50->SetBussID(iVar16);
        pMVar3->field_416[0] = 1;
    }

    // 0x10081bac0
    void Model::BakeTile(unsigned char arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4,
                         unsigned char arg5, unsigned char arg6, unsigned char arg7) {
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((GeometryBatchInstance*)(*this_00).operator->())->BakeTile(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        }
    }

    // 0x10081bcc0
    uint8_t* Model::GetTextureAtlasUsage() const {
        bool cVar1;
        GpuMemoryProfile gpuMemoryProfile1;
        MapArea* this_01;
        uint8_t** ppuVar2;
        Singleton<render::RenderDevice>* this_03;

        if (m_useUncompressedTextures != false) {
            gpuMemoryProfile1 = ((RenderDevice*)Instance())->GetGpuMemoryProfile();
            this_03 = (Singleton<render::RenderDevice>*)(unsigned long)gpuMemoryProfile1;
            cVar1 = render::operator<(gpuMemoryProfile1, 1);
            ppuVar2 = &graphicutils::TextureAtlasUsage::USAGE_UNCOMPRESSED;
            if (!cVar1)
                goto LAB_10081bd13;
            this_01 = (MapArea*)this_03->Instance();
            cVar1 = ((RenderDeviceCaps*)this_01->GetOrigin())->GetCompressedTextures();
            if (!cVar1)
                goto LAB_10081bd13;
        }
        ppuVar2 = &graphicutils::TextureAtlasUsage::USAGE_COMPRESSED;
    LAB_10081bd13:
        return *ppuVar2;
    }

    // 0x10081bd20
    auto Model::GetMaterialIDList() const {
        auto result;
        auto this_00 = field_688.HeapBeginPtr();
        auto puVar1 = field_688.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((BillboardBatchInstance*)(*this_00).operator->())->BuildMaterialIDListFromSource(result);
        }
        auto this_02 = field_656.HeapBeginPtr();
        auto puVar2 = field_656.end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            ((GeometryBatchInstance*)(*this_02).operator->())->BuildMaterialIDListFromSource(result);
        }
        auto piVar3 = result.HeapBeginPtr();
        auto piVar4 = result.end();
        eastl::sort<int*>(piVar3, piVar4);
        piVar3 = result.HeapBeginPtr();
        piVar4 = result.end();
        piVar3 = eastl::unique<int*>(piVar3, piVar4);
        piVar4 = result.end();
        result.erase(piVar3, piVar4);
        return result;
    }

    // 0x10081c1e0
    void Model::BakeMaterialInfoAndTextureMetaAndHSLColors(RT7Core& rt7Core, bool arg2) {
        auto materialManager = rt7Core.GetMaterialManager();
        auto textureManager = rt7Core.GetTextureManager();
        BakeMaterialInfoAndTextureMetaAndHSLColors(*materialManager, *textureManager, arg2);
    }

    // 0x10081c230
    void Model::SortBatches() {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, _3072>::UniquePoolDeleter>*
            geometryBatchInstance1;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, _64>::UniquePoolDeleter>*
            billboardBatchInstance1;
        uint8_t auVar1[16];

        geometryBatchInstance1 =
            (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, _3072>::UniquePoolDeleter>*)
                field_656.HeapBeginPtr();
        auVar1 = field_656.end();
        std::sort<
            std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*,
            Model::SortBatches()::__0>(geometryBatchInstance1, auVar1._0_8_, auVar1._8_8_);
        billboardBatchInstance1 =
            (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, _64>::UniquePoolDeleter>*)
                field_688.HeapBeginPtr();
        auVar1 = field_688.end();
        std::sort<
            std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*,
            Model::SortBatches()::__1>(billboardBatchInstance1, auVar1._0_8_, auVar1._8_8_);
    }

    // 0x10081c450
    void Model::ConstructAtlasFromWorker(
        eastl::fixed_hash_map<unsigned int, Model const*, 256ul, 257ul, true, eastl::hash<unsigned int>,
                              eastl::equal_to<unsigned int>, false> const* fixed_hash_map,
        Model* model) {
        uint8_t* this_00;
        vector<shared_ptr<TextureAtlasReference>, eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true>>* this_01;
        bool cVar1;
        fixed_vector<shared_ptr<TextureAtlasReference>, _1ul>* textureAtlasReferences;
        unsigned long uVar2;
        shared_ptr* psVar3;
        shared_ptr<TextureAtlasReference>* psVar4;
        unsigned int* puVar5;
        unsigned int* puVar6;
        shared_ptr<TextureAtlasReference>* this_02;
        long lVar7;
        TextureAtlasReference* this_03;
        TextureAtlasReference* textureAtlasReference;
        vector<shared_ptr<TextureAtlasReference>, eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true>>* this_04;
        uint8_t auVar8[16];
        uint8_t local_60[16];
        uint8_t local_50[16];
        vector<shared_ptr<TextureAtlasReference>, eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true>>* local_40;

        if (model == nullptr) {
            if (fixed_hash_map != (fixed_hash_map<unsigned int, Model const*, _256ul, _257ul, true,
                                                  eastl::hash<unsigned int>, eastl::equal_to<unsigned int>, false>*)0) {
                this_00 = m_textureAtlasReferences;
                uVar2 = this_00->size();
                if (1 < uVar2) {
                    LogAssert("m_textureAtlasReferences.size() <= 1",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/Model.cpp",
                              1133, nullptr);
                }
                this_00->resize(1);
                psVar3 = (shared_ptr*)(*this_00)[0];
                cVar1 = shared_ptr::operator_cast_to_bool(psVar3);
                if (cVar1) {
                    psVar4 = (shared_ptr<TextureAtlasReference>*)(*this_00)[0];
                    psVar4->reset();
                }
                local_40 = (vector<shared_ptr<TextureAtlasReference>,
                                   eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true>>*)this_00;
                puVar5 = (unsigned int*)field_352.HeapBeginPtr();
                puVar6 = (unsigned int*)field_352.end();
                for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
                    auVar8 = fixed_hash_map->find(*puVar5);
                    local_50 = auVar8;
                    auVar8 = fixed_hash_map->end();
                    local_60 = auVar8;
                    cVar1 = *local_50 != *local_60;
                    if (cVar1) {
                        lVar7 = local_50->HeapBeginPtr();
                        if (*(long*)(lVar7 + 8) == 0) {
                            LogAssert("hashedModel",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/Model.cpp",
                                      1146, nullptr);
                        }
                        this_04 =
                            (vector<shared_ptr<TextureAtlasReference>,
                                    eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true>>*)(*(long*)(lVar7 + 8) +
                                                                                                424);
                        cVar1 = this_04->empty();
                        if (!cVar1) {
                            psVar3 = (shared_ptr*)(*this_04)[0];
                            cVar1 = shared_ptr::operator_cast_to_bool(psVar3);
                            this_01 = local_40;
                            if (cVar1) {
                                psVar3 = (shared_ptr*)(*local_40)[0];
                                cVar1 = shared_ptr::operator_cast_to_bool(psVar3);
                                if (!cVar1) {
                                    psVar4 = (shared_ptr<TextureAtlasReference>*)(*this_04)[0];
                                    this_02 = (shared_ptr<TextureAtlasReference>*)(*this_01)[0];
                                    *this_02 = *psVar4;
                                } else {
                                    psVar4 = (shared_ptr<TextureAtlasReference>*)(*this_01)[0];
                                    this_03 = (TextureAtlasReference*)(*psVar4).operator->();
                                    psVar4 = (shared_ptr<TextureAtlasReference>*)(*this_04)[0];
                                    textureAtlasReference = (TextureAtlasReference*)**psVar4;
                                    this_03->Combine(*textureAtlasReference);
                                }
                            }
                        }
                    }
                }
            }
        } else {
            textureAtlasReferences = (fixed_vector<shared_ptr<TextureAtlasReference>, _1ul>*)model->GetServerPosition();
            SetTextureAtlasReferences(*textureAtlasReferences);
        }
    }

    // 0x10081c860
    void Model::ConstructFinishAndUploadInternal() {
        if (field_416[0] != '\x04') {
            LogAssert("m_constructedState == ModelConstructedState::DATA_MAT_ATLAS_AND_LOAD",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1177, nullptr);
        }
        CreateSecondaryVertexBuffers();
        SetBatchAtlasReferences();
        CreateRenderingResources();
        field_416[0] = 5;
    }

    // 0x10081c8c0
    void Model::CreateSecondaryVertexBuffers() {
        GeometryBatchInstance* this_01;

        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)(*this_00).operator->();
            ((GeometryBatch*)this_01->GetGeometryBatch())->CreateSecondaryVertexBuffers();
        }
    }

    // 0x10081c920
    void Model::CreateRenderingResources() {
        bool cVar1;
        GeometryBatchInstance* pGVar3;
        GeometryBatch* pGVar4;
        AutoSingleton<ShaderThreadPoolSingleton> local_30;

        if (field_937 != '\0') {
            LogAssert("m_uploaded == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1892, "Model: Already uploaded!");
        }
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar2 = field_656.end();
        for (; this_00 != puVar2; this_00 = this_00 + 8) {
            pGVar3 = (GeometryBatchInstance*)(*this_00).operator->();
            pGVar4 = (GeometryBatch*)pGVar3->GetGeometryBatch();
            cVar1 = pGVar4->IsHidden();
            pGVar3 = (GeometryBatchInstance*)(*this_00).operator->();
            if (!cVar1) {
                pGVar3->CreateRenderingResources();
            } else {
                pGVar4 = (GeometryBatch*)pGVar3->GetGeometryBatch();
                pGVar4->DestroyCPUBuffers();
            }
        }
        auto this_01 = field_688.HeapBeginPtr();
        auto puVar5 = field_688.end();
        for (; this_01 != puVar5; this_01 = this_01 + 8) {
            ((BillboardBatchInstance*)(*this_01).operator->())->CreateRenderingResources();
        }
        field_937 = 1;
    }

    // 0x10081ca40
    void Model::SetFadeTransitionable(const math::Transitionable<float>& transitionable, unsigned long long arg2) {
        uint64_t uVar1 = *(uint64_t*)transitionable;
        uint64_t uVar2 = *(uint64_t*)(transitionable + 8);
        uint64_t uVar3 = *(uint64_t*)(transitionable + 20);
        *(uint64_t*)((long)&field_488 + 4) = *(uint64_t*)(transitionable + 12);
        *(uint64_t*)((long)&field_496 + 4) = uVar3;
        field_480 = uVar1;
        field_488 = uVar2;
        UpdateFade(arg2);
    }

    // 0x10081ca70
    void Model::StartFade() {
        uint64_t in_RAX;

        uint64_t local_28 = (((uint64_t)((int)((unsigned long)in_RAX >> 32)) << 32) | (uint32_t)3212836864);
        uint64_t* this_00 = &field_480;
        *this_00 = local_28;
        local_28 = local_28 & 4294967295;
        unsigned int uVar1 = m_fadeTime;
        unsigned long long uVar2 = FrameTime::GetCurrentTimeMS();
        this_00->SetValue(*((float*)((long)&local_28 + 4)), (unsigned long)uVar1, uVar2);
        uVar2 = FrameTime::GetCurrentTimeMS();
        m_currentFade = this_00->GetValue(uVar2);
    }

    // 0x10081cae0
    void Model::Transform(const math::Matrix44T<float>& matrix44) {
        uint64_t* puVar2;
        long* plVar4;

        if (field_936 == '\0') {
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1202, nullptr);
        }
        CheckUploaded("Transform", "transform");
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            puVar2 = (uint64_t*)(*this_00).operator->();
            (**(void (**)(...))*puVar2)(puVar2, matrix44);
        }
        auto this_01 = field_688.HeapBeginPtr();
        auto puVar3 = field_688.end();
        for (; this_01 != puVar3; this_01 = this_01 + 8) {
            plVar4 = (long*)(*this_01).operator->();
            (**(void (**)(...))(*plVar4 + 48))(plVar4, matrix44);
        }
        auto psVar5 = field_720.HeapBeginPtr();
        auto psVar6 = field_720.end();
        for (; psVar5 != psVar6; psVar5 = psVar5 + 16) {
            puVar2 = (uint64_t*)(*psVar5).operator->();
            (**(void (**)(...))*puVar2)(puVar2, matrix44);
        }
        psVar5 = (shared_ptr<ModelParticleSource>*)field_752.HeapBeginPtr();
        psVar6 = (shared_ptr<ModelParticleSource>*)field_752.end();
        for (; psVar5 != psVar6; psVar5 = psVar5 + 16) {
            puVar2 = (uint64_t*)(*psVar5).operator->();
            (**(void (**)(...))*puVar2)(puVar2, matrix44);
        }
        auto this_02 = field_784.HeapBeginPtr();
        auto psVar7 = field_784.end();
        for (; this_02 != psVar7; this_02 = this_02 + 16) {
            ((VFXAttachmentInfo*)(*this_02).operator->())->Transform(matrix44);
        }
    }

    // 0x10081ccd0
    void Model::TransformNormals(const math::Matrix44T<float>& matrix44, bool arg2) {
        Matrix44T<float> local_68;

        math::QuaternionT<float> local_40;
        local_68.GetRot();
        local_40 = math::QuaternionT<float>::FromRotationMatrix(local_68);
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        if (this_00 != puVar1) {
            do {
                ((GeometryBatchInstance*)(*this_00).operator->())->TransformNormals(local_40, arg2);
                this_00 = this_00 + 8;
            } while (this_00 != puVar1);
        }
    }

    // 0x10081cd70
    void Model::Translate(const math::Vector3T<float>& vector3) {
        long* plVar3;

        if (field_936 == '\0') {
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1249, nullptr);
        }
        CheckUploaded("Translate", "translate");
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar2 = field_656.end();
        for (; this_00 != puVar2; this_00 = this_00 + 8) {
            plVar3 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar3 + 8))(plVar3, vector3);
        }
        auto this_01 = field_688.HeapBeginPtr();
        auto puVar4 = field_688.end();
        for (; this_01 != puVar4; this_01 = this_01 + 8) {
            plVar3 = (long*)(*this_01).operator->();
            (**(void (**)(...))(*plVar3 + 56))(plVar3, vector3);
        }
        auto psVar5 = field_720.HeapBeginPtr();
        auto psVar6 = field_720.end();
        for (; psVar5 != psVar6; psVar5 = psVar5 + 16) {
            plVar3 = (long*)(*psVar5).operator->();
            (**(void (**)(...))(*plVar3 + 8))(plVar3, vector3);
        }
        psVar5 = (shared_ptr<ModelParticleSource>*)field_752.HeapBeginPtr();
        psVar6 = (shared_ptr<ModelParticleSource>*)field_752.end();
        for (; psVar5 != psVar6; psVar5 = psVar5 + 16) {
            plVar3 = (long*)(*psVar5).operator->();
            (**(void (**)(...))(*plVar3 + 8))(plVar3, vector3);
        }
        auto this_02 = field_784.HeapBeginPtr();
        auto psVar7 = field_784.end();
        for (; this_02 != psVar7; this_02 = this_02 + 16) {
            ((VFXAttachmentInfo*)(*this_02).operator->())->Translate(vector3);
        }
        if (field_16.IsValid() != '\0') {
            field_16.Translate(vector3);
        }
    }

    // 0x10081cf20
    void Model::Rotate(const math::QuaternionT<float>& quaternion, bool arg2) {
        long* plVar2;

        if (field_936 == '\0') {
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1291, nullptr);
        }
        CheckUploaded("Rotate", "rotate");
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 16))(plVar2, quaternion, arg2);
        }
        auto this_01 = field_688.HeapBeginPtr();
        auto puVar3 = field_688.end();
        for (; this_01 != puVar3; this_01 = this_01 + 8) {
            plVar2 = (long*)(*this_01).operator->();
            (**(void (**)(...))(*plVar2 + 64))(plVar2, quaternion, 0);
        }
        auto psVar4 = field_720.HeapBeginPtr();
        auto psVar5 = field_720.end();
        for (; psVar4 != psVar5; psVar4 = psVar4 + 16) {
            plVar2 = (long*)(*psVar4).operator->();
            (**(void (**)(...))(*plVar2 + 16))(plVar2, quaternion, 0);
        }
        psVar4 = (shared_ptr<ModelParticleSource>*)field_752.HeapBeginPtr();
        psVar5 = (shared_ptr<ModelParticleSource>*)field_752.end();
        for (; psVar4 != psVar5; psVar4 = psVar4 + 16) {
            plVar2 = (long*)(*psVar4).operator->();
            (**(void (**)(...))(*plVar2 + 16))(plVar2, quaternion, 0);
        }
        auto this_02 = field_784.HeapBeginPtr();
        auto psVar6 = field_784.end();
        for (; this_02 != psVar6; this_02 = this_02 + 16) {
            ((VFXAttachmentInfo*)(*this_02).operator->())->Rotate(quaternion);
        }
    }

    // 0x10081d110
    void Model::Rotate90(Rotation90 rotation90, bool arg2) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar2;
        long* plVar3;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar4;
        shared_ptr<ModelParticleSource>* psVar5;
        shared_ptr<ModelParticleSource>* psVar6;
        shared_ptr<VFXAttachmentInfo>* this_02;
        shared_ptr<VFXAttachmentInfo>* psVar7;

        if (field_936 == '\0') {
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1328, nullptr);
        }
        if ((char)rotation90 != '\0') {
            CheckUploaded("Rotate90", "rotate90");
            this_00 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    field_656.HeapBeginPtr();
            puVar2 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    field_656.end();
            for (; this_00 != puVar2; this_00 = this_00 + 8) {
                plVar3 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar3 + 24))(plVar3, (char)rotation90, arg2);
            }
            this_01 =
                (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                    field_688.HeapBeginPtr();
            puVar4 =
                (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                    field_688.end();
            for (; this_01 != puVar4; this_01 = this_01 + 8) {
                plVar3 = (long*)(*this_01).operator->();
                (**(void (**)(...))(*plVar3 + 72))(plVar3, (char)rotation90, arg2);
            }
            psVar5 = (shared_ptr<ModelParticleSource>*)field_720.HeapBeginPtr();
            psVar6 = (shared_ptr<ModelParticleSource>*)field_720.end();
            for (; psVar5 != psVar6; psVar5 = psVar5 + 16) {
                plVar3 = (long*)(*psVar5).operator->();
                (**(void (**)(...))(*plVar3 + 24))(plVar3, (char)rotation90, 0);
            }
            psVar5 = (shared_ptr<ModelParticleSource>*)field_752.HeapBeginPtr();
            psVar6 = (shared_ptr<ModelParticleSource>*)field_752.end();
            if (psVar5 != psVar6) {
                do {
                    plVar3 = (long*)(*psVar5).operator->();
                    (**(void (**)(...))(*plVar3 + 24))(plVar3, rotation90 & 255, 0);
                    psVar5 = psVar5 + 16;
                } while (psVar5 != psVar6);
            }
            this_02 = (shared_ptr<VFXAttachmentInfo>*)field_784.HeapBeginPtr();
            psVar7 = (shared_ptr<VFXAttachmentInfo>*)field_784.end();
            if (this_02 != psVar7) {
                do {
                    ((VFXAttachmentInfo*)(*this_02).operator->())->Rotate90(rotation90 & 255);
                    this_02 = this_02 + 16;
                } while (this_02 != psVar7);
            }
        }
    }

    // 0x10081d320
    void Model::Scale(const math::Vector3T<float>& vector3) {
        ModelParticleSource* pMVar5;

        if (field_936 == '\0') {
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1370, nullptr);
        }
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((GeometryBatchInstance*)(*this_00).operator->())->Scale(vector3);
        }
        auto this_02 = field_688.HeapBeginPtr();
        auto puVar2 = field_688.end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            ((BillboardBatchInstance*)(*this_02).operator->())->Scale(vector3);
        }
        auto psVar3 = field_720.HeapBeginPtr();
        auto psVar4 = field_720.end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            pMVar5 = (ModelParticleSource*)(*psVar3).operator->();
            pMVar5->Scale(vector3);
        }
        psVar3 = (shared_ptr<ModelParticleSource>*)field_752.HeapBeginPtr();
        psVar4 = (shared_ptr<ModelParticleSource>*)field_752.end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            pMVar5 = (ModelParticleSource*)(*psVar3).operator->();
            pMVar5->Scale(vector3);
        }
        auto this_04 = field_784.HeapBeginPtr();
        auto psVar6 = field_784.end();
        for (; this_04 != psVar6; this_04 = this_04 + 16) {
            ((VFXAttachmentInfo*)(*this_04).operator->())->Scale(vector3);
        }
    }

    // 0x10081d4f0
    void Model::MirrorZ() {
        GeometryBatchInstance* this_01;
        BillboardBatchInstance* this_04;
        ModelParticleSource* pMVar5;

        if (field_936 == '\0') {
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1398, nullptr);
        }
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)(*this_00).operator->();
            ((GeometryBatch*)this_01->GetGeometryBatch())->MirrorZ();
        }
        auto this_03 = field_688.HeapBeginPtr();
        auto puVar2 = field_688.end();
        for (; this_03 != puVar2; this_03 = this_03 + 8) {
            this_04 = (BillboardBatchInstance*)(*this_03).operator->();
            ((BillboardBatch*)this_04->GetBillboardBatch())->MirrorZ();
        }
        auto psVar3 = field_720.HeapBeginPtr();
        auto psVar4 = field_720.end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            pMVar5 = (ModelParticleSource*)(*psVar3).operator->();
            pMVar5->MirrorZ();
        }
        psVar3 = (shared_ptr<ModelParticleSource>*)field_752.HeapBeginPtr();
        psVar4 = (shared_ptr<ModelParticleSource>*)field_752.end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            pMVar5 = (ModelParticleSource*)(*psVar3).operator->();
            pMVar5->MirrorZ();
        }
        auto this_06 = field_784.HeapBeginPtr();
        auto psVar6 = field_784.end();
        for (; this_06 != psVar6; this_06 = this_06 + 16) {
            ((VFXAttachmentInfo*)(*this_06).operator->())->MirrorZ();
        }
    }

    // 0x10081d6e0
    void Model::HillChange(HillChange arg1, int arg2, int arg3, int arg4, Rotation90 arg5,
                           const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg6,
                           const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg7, int arg8) {
        ModelParticleSource* pMVar10;
        Model* local_38;

        local_38 = (Model*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)param_6);
        if (field_936 == '\0') {
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1426, nullptr);
        }
        CheckUploaded("HillChange", "hillchange");
        uint8_t* puVar13 = &field_16;
        if (puVar13->IsValid() == '\0') {
            LogAssert("m_aabb.IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1431, nullptr);
        }
        auto this_00 = puVar13->GetScreen();
        auto pfVar3 = this_00->y();
        float fVar1 = *pfVar3;
        float fVar14 = (float)puVar13->GetHeight();
        int local_44 = (int)fVar14;
        uint32_t local_54 = param_5;
        uint8_t local_50 = (uint8_t)local_38;
        uint32_t local_4c = param_9;
        int local_48 = (int)fVar1;
        local_38 = this;
        auto this_01 = field_656.HeapBeginPtr();
        auto puVar4 = field_656.end();
        if (this_01 != puVar4) {
            do {
                ((GeometryBatchInstance*)(*this_01).operator->())
                    ->HillChange(param_2, param_3, *param_7, *param_8, param_4);
                this_01 = this_01 + 8;
            } while (this_01 != puVar4);
        }
        puVar13 = &local_38->field_688;
        auto this_02 = puVar13->HeapBeginPtr();
        auto puVar6 = puVar13->end();
        if (this_02 != puVar6) {
            do {
                ((BillboardBatchInstance*)(*this_02).operator->())
                    ->HillChange(param_2, param_3, *param_7, *param_8, param_4);
                this_02 = this_02 + 8;
            } while (this_02 != puVar6);
        }
        puVar13 = &local_38->field_720;
        auto psVar8 = puVar13->HeapBeginPtr();
        auto psVar9 = puVar13->end();
        if (psVar8 != psVar9) {
            do {
                pMVar10 = (ModelParticleSource*)(*psVar8).operator->();
                pMVar10->HillChange(param_2, param_3, *param_7, *param_8, param_4);
                psVar8 = psVar8 + 16;
            } while (psVar8 != psVar9);
        }
        puVar13 = &local_38->field_752;
        psVar8 = (shared_ptr<ModelParticleSource>*)puVar13->HeapBeginPtr();
        psVar9 = (shared_ptr<ModelParticleSource>*)puVar13->end();
        if (psVar8 != psVar9) {
            do {
                pMVar10 = (ModelParticleSource*)(*psVar8).operator->();
                pMVar10->HillChange(param_2, param_3, *param_7, *param_8, param_4);
                psVar8 = psVar8 + 16;
            } while (psVar8 != psVar9);
        }
        puVar13 = &local_38->field_784;
        auto this_03 = puVar13->HeapBeginPtr();
        auto psVar11 = puVar13->end();
        if (this_03 != psVar11) {
            do {
                ((VFXAttachmentInfo*)(*this_03).operator->())
                    ->HillChange(param_2, param_3, *param_7, *param_8, param_4);
                this_03 = this_03 + 16;
            } while (this_03 != psVar11);
        }
    }

    // 0x10081da80
    void Model::HillChangeLocalTransform(HillChange arg1, int arg2, int arg3, int arg4, Rotation90 arg5,
                                         const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg6,
                                         const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg7,
                                         int arg8) {
        uint8_t* this_00 = &field_16;
        auto this_01 = this_00->GetScreen();
        auto pfVar3 = this_01->y();
        float fVar1 = *pfVar3;
        float fVar4 = (float)this_00->GetHeight();
        uint64_t local_68 = this_00->GetCentrePos();
        local_58.field_4 = param_7;
        local_58.field_8._0_1_ = (uint8_t)param_8;
        local_58._12_4_ = param_11;
        uint32_t local_60 = param_2;
        local_58.field_0 = param_6;
        int local_48 = (int)fVar1;
        int local_44 = (int)fVar4;
        int iVar2 = LocationHelpers::HillChangeVertex(param_4, param_5, local_58, *param_9, *param_10, local_68);
        auto this_02 = m_localTransform.SetToIdentity();
        ColourHSL local_58(0.0, (float)iVar2 - local_68._4_4_, 0.0);
        this_02->SetPos(local_58);
    }

    // 0x10081db70
    void Model::RecolourSingle(unsigned short arg1, unsigned short arg2) {
        GeometryBatchInstance* this_01;
        BillboardBatchInstance* this_04;

        if (field_936 == '\0') {
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1482, nullptr);
        }
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)(*this_00).operator->();
            ((GeometryBatch*)this_01->GetGeometryBatch())->RecolourSingle(arg1, arg2);
        }
        auto this_03 = field_688.HeapBeginPtr();
        auto puVar2 = field_688.end();
        for (; this_03 != puVar2; this_03 = this_03 + 8) {
            this_04 = (BillboardBatchInstance*)(*this_03).operator->();
            ((BillboardBatch*)this_04->GetBillboardBatch())->RecolourSingle(arg1, arg2);
        }
    }

    // 0x10081dc80
    void Model::Recolour(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2) {
        GeometryBatchInstance* this_01;
        BillboardBatchInstance* this_04;

        if (field_936 == '\0') {
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1496, nullptr);
        }
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)(*this_00).operator->();
            ((GeometryBatch*)this_01->GetGeometryBatch())->Recolour(arg1, arg2);
        }
        auto this_03 = field_688.HeapBeginPtr();
        auto puVar2 = field_688.end();
        for (; this_03 != puVar2; this_03 = this_03 + 8) {
            this_04 = (BillboardBatchInstance*)(*this_03).operator->();
            ((BillboardBatch*)this_04->GetBillboardBatch())->Recolour(arg1, arg2);
        }
    }

    // 0x10081dd70
    void Model::Rematerial(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2) {
        if (field_936 == '\0') {
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1510, nullptr);
        }
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((GeometryBatchInstance*)(*this_00).operator->())->Rematerial(arg1, arg2);
        }
        auto this_02 = field_688.HeapBeginPtr();
        auto puVar2 = field_688.end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            ((BillboardBatchInstance*)(*this_02).operator->())->Rematerial(arg1, arg2);
        }
    }

    // 0x10081de50
    void Model::RematerialSingle(unsigned short arg1, unsigned short arg2) {
        if (field_936 == '\0') {
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1524, nullptr);
        }
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((GeometryBatchInstance*)(*this_00).operator->())->RematerialSingle(arg1, arg2);
        }
        auto this_02 = field_688.HeapBeginPtr();
        auto puVar2 = field_688.end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            ((BillboardBatchInstance*)(*this_02).operator->())->RematerialSingle(arg1, arg2);
        }
    }

    // 0x10081df40
    void Model::AmbientAdjust(unsigned short arg1) {
        if (field_936 == '\0') {
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1538, nullptr);
        }
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((GeometryBatchInstance*)(*this_00).operator->())->AmbientAdjust(arg1);
        }
        auto this_02 = field_688.HeapBeginPtr();
        auto puVar2 = field_688.end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            ((BillboardBatchInstance*)(*this_02).operator->())->AmbientAdjust(arg1);
        }
    }

    // 0x10081e030
    void Model::TintAdjust(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4) {
        if (field_936 == '\0') {
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1552, nullptr);
        }
        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((GeometryBatchInstance*)(*this_00).operator->())->TintAdjust(arg1, arg2, arg3, arg4);
        }
        auto this_02 = field_688.HeapBeginPtr();
        auto puVar2 = field_688.end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            ((BillboardBatchInstance*)(*this_02).operator->())->TintAdjust(arg1, arg2, arg3, arg4);
        }
    }

    // 0x10081e170
    void Model::Update(RT7Core& rt7Core, unsigned int arg2, unsigned long long arg3) {
        UpdateFade(arg3);
        auto threadPool = rt7Core.GetImmediateThreadPool();
        UpdateAnimation(*threadPool, arg2);
    }

    // 0x10081e1b0
    void Model::EndUpdate() {
        EndUpdateAnimation();
    }

    // 0x10081e1c0
    void Model::UpdateParticleEmitters(RT7Core& rt7Core,
                                       eastl::fixed_vector<shared_ptr<ParticleSystem>, 1ul>& particleSystems,
                                       const math::Matrix44T<float>& matrix44,
                                       AnimationStateProvider* animationStateProvider,
                                       const eastl::vector_map<int, FaceGroupRenderMasks>* arg5, bool arg6) {
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* vector;
        uint8_t* puVar1;
        AnimationStateProvider* pAVar2;
        vector<eastl::pair<int, int>>* pvVar3;
        bool cVar4;
        uint8_t uVar5;
        bool bVar6;
        uint32_t uVar7;
        shared_ptr<ModelParticleSource>* psVar8;
        HeadbarType* pHVar9;
        long lVar10;
        long lVar11;
        NXTPixToolkit* pNVar12;
        uint64_t* puVar13;
        ModelParticleSource* pMVar14;
        uint64_t* puVar15;
        Logger* this_02;
        uint64_t* puVar16;
        uint16_t* puVar17;
        unsigned long arg1;
        shared_ptr<ParticleSystem>* psVar18;
        shared_ptr<ModelParticleSource>* modelParticleSource;
        ParticleSystem* this_03;
        uint64_t in_register_00000089;
        uint32_t in_XMM1_Da;
        bool in_stack_00000008;
        vector_map<unsigned short, unsigned short> local_1a0;
        uint64_t local_178;
        uint32_t local_170;
        uint64_t local_168;
        uint32_t local_160;
        shared_ptr<ModelParticleSource>* local_150;
        uint64_t local_148;
        uint64_t uStack_140;
        uint32_t local_138;
        uint32_t uStack_134;
        uint32_t uStack_130;
        uint32_t uStack_12c;
        uint64_t local_128;
        uint64_t uStack_120;
        uint64_t local_110;
        uint32_t local_108;
        uint64_t local_e8;
        uint64_t uStack_e0;
        uint32_t local_d8;
        uint32_t uStack_d4;
        uint32_t uStack_d0;
        uint32_t uStack_cc;
        uint64_t local_c8;
        uint64_t uStack_c0;
        uint64_t local_b0;
        uint32_t local_a8;
        shared_ptr<ParticleSystem>* local_88;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_78;
        uint64_t local_68;
        uint32_t local_60;
        uint64_t local_58;
        uint32_t local_50;
        vector<eastl::pair<int, int>>* local_48;
        vector<eastl::pair<int, int>>* local_38;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar19 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(((uint64_t)in_register_00000089 << 8) |
                                                                                (uint8_t)arg6);
        if (rt7Core.m_postProcessManager[490] != '\0') {
            vector =
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(rt7Core.m_postProcessManager +
                                                                                        272);
            cVar4 = vector->empty();
            if ((!cVar4) || (cVar4 = ((rt7Core.m_postProcessManager + 304))->empty(), !cVar4)) {
                if ((AnimationStateProvider*)arg5 != nullptr) {
                    arg5->WaitForAsyncTasks();
                }
                local_1a0 = eastl::vector_map<unsigned short, unsigned short>();
                psVar8 = (shared_ptr<ModelParticleSource>*)vector->HeapBeginPtr();
                local_150 = (shared_ptr<ModelParticleSource>*)vector->end();
                local_48 = (vector<eastl::pair<int, int>>*)(rt7Core.m_postProcessManager + 408);
                local_78 = pvVar19;
                if (psVar8 != local_150) {
                    local_38 = (vector<eastl::pair<int, int>>*)(rt7Core.m_postProcessManager + 448);
                    do {
                        uVar5 = 1;
                        if (pvVar19 != (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0) {
                            pHVar9 = (HeadbarType*)(*psVar8).operator->();
                            uVar7 = pHVar9->GetStickTime();
                            local_e8 = (((uint64_t)local_e8._4_4_ << 32) | (uint32_t)uVar7);
                            lVar10 = eastl::vector_map<int, int>::find(*pvVar19);
                            lVar11 = pvVar19->end();
                            if (lVar10 != lVar11) {
                                uVar5 = ((lVar10 + 4))->IsVisible();
                            }
                        }
                        pNVar12 = (NXTPixToolkit*)(*psVar8).operator->();
                        local_88 = (shared_ptr<ParticleSystem>*)(((uint64_t)local_88._1_7_ << 8) | (uint8_t)uVar5);
                        puVar13 = (uint64_t*)pNVar12->GetScreen();
                        pMVar14 = (ModelParticleSource*)(*psVar8).operator->();
                        puVar15 = (uint64_t*)pMVar14->GetVertex2();
                        this_02 = (Logger*)(*psVar8).operator->();
                        puVar16 = (uint64_t*)this_02->GetLogStreams();
                        pvVar3 = local_38;
                        uStack_e0 = (((uint64_t)uStack_e0._4_4_ << 32) | (uint32_t)(*(uint32_t*)(puVar13 + 1)));
                        local_e8 = *puVar13;
                        uStack_140 = (((uint64_t)uStack_140._4_4_ << 32) | (uint32_t)(*(uint32_t*)(puVar15 + 1)));
                        local_148 = *puVar15;
                        local_108 = *(uint32_t*)(puVar16 + 1);
                        local_110 = *puVar16;
                        if ((AnimationStateProvider*)arg5 != nullptr) {
                            if ((*(int*)((long)puVar13 + 12) != -1) || (*(int*)(puVar13 + 2) != -1)) {
                                local_38->clear();
                                local_b0._0_2_ = *(unsigned short*)(puVar13 + 2);
                                puVar17 = (uint16_t*)(*pvVar3)[local_b0];
                                pvVar3 = local_48;
                                *puVar17 = 0;
                                local_48->clear();
                                local_b0 =
                                    (((uint64_t)local_b0._2_6_ << 16) | (uint16_t)(*(uint16_t*)((long)puVar13 + 12)));
                                puVar17 = (uint16_t*)(*pvVar3)[local_b0];
                                *puVar17 = 0;
                                (*((AnimationStateProvider*)arg5)->_vptr[1]._x7e___2)(
                                    (AnimationStateProvider*)arg5, &local_e8, pvVar3, local_38, PTR_IDENTITY_100ee6730);
                            }
                            if ((*(int*)((long)puVar15 + 12) != -1) || (*(int*)(puVar15 + 2) != -1)) {
                                local_38->clear();
                                local_b0._0_2_ = *(unsigned short*)(puVar15 + 2);
                                puVar17 = (uint16_t*)(*pvVar3)[local_b0];
                                pvVar3 = local_48;
                                *puVar17 = 0;
                                local_48->clear();
                                local_b0 =
                                    (((uint64_t)local_b0._2_6_ << 16) | (uint16_t)(*(uint16_t*)((long)puVar15 + 12)));
                                puVar17 = (uint16_t*)(*pvVar3)[local_b0];
                                *puVar17 = 0;
                                (*((AnimationStateProvider*)arg5)->_vptr[1]._x7e___2)((AnimationStateProvider*)arg5,
                                                                                      &local_148, pvVar3, local_38,
                                                                                      PTR_IDENTITY_100ee6730);
                            }
                            if ((*(int*)((long)puVar16 + 12) != -1) || (*(int*)(puVar16 + 2) != -1)) {
                                local_38->clear();
                                local_b0._0_2_ = *(unsigned short*)(puVar16 + 2);
                                puVar17 = (uint16_t*)(*pvVar3)[local_b0];
                                pvVar3 = local_48;
                                *puVar17 = 0;
                                local_48->clear();
                                local_b0 =
                                    (((uint64_t)local_b0._2_6_ << 16) | (uint16_t)(*(uint16_t*)((long)puVar16 + 12)));
                                puVar17 = (uint16_t*)(*pvVar3)[local_b0];
                                *puVar17 = 0;
                                (*((AnimationStateProvider*)arg5)->_vptr[1]._x7e___2)((AnimationStateProvider*)arg5,
                                                                                      &local_110, pvVar3, local_38,
                                                                                      PTR_IDENTITY_100ee6730);
                            }
                            bVar6 = local_e8 == local_e8;
                            if (((!bVar6) || (bVar6 = local_148 == local_148, !bVar6)) ||
                                (bVar6 = local_110 == local_110, !bVar6)) {
                                LogAssert("(v1WorldPos == v1WorldPos) && (v2WorldPos == v2WorldPos) && (v3WorldPos == "
                                          "v3WorldPos)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/model/Model.cpp",
                                          1663, nullptr);
                            }
                        }
                        arg1 = ParticleSystem::GetParticleSystemForEmitter(particleSystems, matrix44, *psVar8);
                        psVar18 = &matrix44[arg1];
                        modelParticleSource = (shared_ptr<ModelParticleSource>*)(*psVar18).operator->();
                        pAVar2 = animationStateProvider;
                        local_b0 = local_e8 * *animationStateProvider;
                        pvVar19 = local_78;
                        local_a8 = in_XMM1_Da;
                        local_58 = local_148 * *pAVar2;
                        local_50 = in_XMM1_Da;
                        local_68 = local_110 * *pAVar2;
                        local_60 = in_XMM1_Da;
                        ParticleSystem::RegisterModelEmitter(*modelParticleSource, *psVar8, local_b0, local_58,
                                                             (uint8_t)(&local_68), in_stack_00000008);
                        psVar8 = psVar8 + 16;
                    } while (psVar8 != local_150);
                }
                puVar1 = rt7Core.m_postProcessManager;
                psVar8 = (shared_ptr<ModelParticleSource>*)((puVar1 + 304))->HeapBeginPtr();
                local_38 = (vector<eastl::pair<int, int>>*)((puVar1 + 304))->end();
                pAVar2 = animationStateProvider;
                if (psVar8 != (shared_ptr<ModelParticleSource>*)local_38) {
                    do {
                        if (local_78 != (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0) {
                            pHVar9 = (HeadbarType*)(*psVar8).operator->();
                            pvVar19 = local_78;
                            uVar7 = pHVar9->GetStickTime();
                            local_e8 = (((uint64_t)local_e8._4_4_ << 32) | (uint32_t)uVar7);
                            lVar10 = eastl::vector_map<int, int>::find(*pvVar19);
                            lVar11 = pvVar19->end();
                            if (lVar10 != lVar11) {
                                ((lVar10 + 4))->IsVisible();
                            }
                        }
                        pNVar12 = (NXTPixToolkit*)(*psVar8).operator->();
                        puVar13 = (uint64_t*)pNVar12->GetScreen();
                        pMVar14 = (ModelParticleSource*)(*psVar8).operator->();
                        puVar15 = (uint64_t*)pMVar14->GetVertex2();
                        pvVar3 = local_48;
                        local_50 = *(uint32_t*)(puVar13 + 1);
                        local_58 = *puVar13;
                        local_60 = *(uint32_t*)(puVar15 + 1);
                        local_68 = *puVar15;
                        if ((AnimationStateProvider*)arg5 != nullptr) {
                            local_148 = *(uint64_t*)PTR_IDENTITY_100ee6720;
                            uStack_140 = *(uint64_t*)(PTR_IDENTITY_100ee6720 + 8);
                            in_XMM1_Da = *(uint32_t*)(PTR_IDENTITY_100ee6720 + 16);
                            uStack_134 = *(uint32_t*)(PTR_IDENTITY_100ee6720 + 20);
                            uStack_130 = *(uint32_t*)(PTR_IDENTITY_100ee6720 + 24);
                            uStack_12c = *(uint32_t*)(PTR_IDENTITY_100ee6720 + 28);
                            local_128 = *(uint64_t*)(PTR_IDENTITY_100ee6720 + 32);
                            uStack_120 = *(uint64_t*)(PTR_IDENTITY_100ee6720 + 40);
                            local_138 = in_XMM1_Da;
                            local_e8 = local_148;
                            uStack_e0 = uStack_140;
                            local_d8 = in_XMM1_Da;
                            uStack_d4 = uStack_134;
                            uStack_d0 = uStack_130;
                            uStack_cc = uStack_12c;
                            local_c8 = local_128;
                            uStack_c0 = uStack_120;
                            if ((*(int*)((long)puVar13 + 12) != -1) || (*(int*)(puVar13 + 2) != -1)) {
                                if (*(int*)((long)puVar13 + 12) != -1) {
                                    local_48->clear();
                                    local_110 = (((uint64_t)local_110._2_6_ << 16) |
                                                 (uint16_t)(*(uint16_t*)((long)puVar13 + 12)));
                                    puVar17 = (uint16_t*)(*pvVar3)[local_110];
                                    *puVar17 = 0;
                                    arg5->GetBoneTransforms(local_e8, *pvVar3, local_1a0, *PTR_IDENTITY_100ee6730);
                                }
                                pvVar3 = local_48;
                                if (*(int*)(puVar13 + 2) != -1) {
                                    local_48->clear();
                                    local_110 =
                                        (((uint64_t)local_110._2_6_ << 16) | (uint16_t)(*(uint16_t*)(puVar13 + 2)));
                                    puVar17 = (uint16_t*)(*pvVar3)[local_110];
                                    *puVar17 = 0;
                                    arg5->GetBoneTransforms(local_148, local_1a0, *pvVar3, *PTR_IDENTITY_100ee6730);
                                }
                                local_110.GetRot();
                                local_168 = local_68 * local_110;
                                local_160 = in_XMM1_Da;
                                local_b0.GetRot();
                                local_178 = local_168 * local_b0;
                                local_170 = in_XMM1_Da;
                                local_68.SetXYZ(local_178);
                                local_b0 = local_58 * local_148;
                                local_a8 = in_XMM1_Da;
                                local_110 = local_b0 * local_e8;
                                local_108 = in_XMM1_Da;
                                local_58.SetXYZ(local_110);
                            }
                        }
                        psVar18 = (shared_ptr<ParticleSystem>*)matrix44.HeapBeginPtr();
                        local_88 = (shared_ptr<ParticleSystem>*)matrix44.end();
                        if (psVar18 != local_88) {
                            do {
                                this_03 = (ParticleSystem*)(*psVar18).operator->();
                                local_148 = local_58 * *pAVar2;
                                uStack_140 = (((uint64_t)uStack_140._4_4_ << 32) | (uint32_t)in_XMM1_Da);
                                local_e8.GetRot();
                                this_03->RegisterModelEffector(*psVar8, local_148, local_e8);
                                psVar18 = psVar18 + 16;
                            } while (psVar18 != local_88);
                        }
                        psVar8 = psVar8 + 16;
                    } while (psVar8 != (shared_ptr<ModelParticleSource>*)local_38);
                }
            }
        }
    }

    // 0x10081eb30
    void Model::UpdateModularParticleSystems(RT7Core& rt7Core,
                                             eastl::vector<shared_ptr<ModularParticleSystem>>& modularParticleSystems,
                                             const math::Matrix44T<float>& matrix44,
                                             AnimationStateProvider* animationStateProvider,
                                             const eastl::vector_map<int, FaceGroupRenderMasks>* arg5, bool arg6) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        Matrix44T<float>* this_00;
        bool bVar2;
        shared_ptr<VFXAttachmentInfo>* psVar3;
        shared_ptr<VFXAttachmentInfo>* psVar4;
        long lVar5;
        long lVar6;
        shared_ptr<ModularParticleSystem>* psVar7;
        shared_ptr<ModularParticleSystem>* psVar8;
        ModularParticleSystem* pMVar9;
        unsigned long uVar10;
        uint64_t in_register_00000089;
        bool bVar13;
        uint8_t auVar14[16];
        uint8_t in_stack_00000008;
        shared_ptr local_60;
        Matrix44T<float>* local_50;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* local_48;
        shared_ptr<VFXAttachmentInfo>* local_40;
        uint32_t local_38;
        uint8_t local_31;

        this =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(((uint64_t)in_register_00000089 << 8) |
                                                                                (uint8_t)arg6);
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* pvVar12 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(rt7Core.m_postProcessManager + 336);
        if (!(pvVar12->empty())) {
            if (arg5 != nullptr) {
                arg5->WaitForAsyncTasks();
            }
            psVar3 = (shared_ptr<VFXAttachmentInfo>*)pvVar12->HeapBeginPtr();
            local_48 = pvVar12;
            psVar4 = (shared_ptr<VFXAttachmentInfo>*)pvVar12->end();
            local_50 = matrix44;
            local_40 = psVar3;
            if (psVar3 != psVar4) {
                psVar3 = (shared_ptr<VFXAttachmentInfo>*)((((uint64_t)((int64_t)((unsigned long)psVar4 >> 8)) << 8) |
                                                           (uint8_t)in_stack_00000008) ^
                                                          1);
                local_31 = (uint8_t)psVar3;
                do {
                    local_38 = (uint32_t)(((uint64_t)((int64_t)((unsigned long)psVar3 >> 8)) << 8) | (uint8_t)1);
                    if (this != (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0) {
                        local_60._0_4_ = ((LightType*)(*local_40).operator->())->GetAmplitude();
                        lVar5 = eastl::vector_map<int, int>::find(*this);
                        lVar6 = end();
                        if (lVar5 != lVar6) {
                            local_38 = ((lVar5 + 4))->IsVisible();
                        }
                    }
                    if (!(((VFXAttachmentInfo*)(*local_40).operator->())->Update(arg5, animationStateProvider))) {
                        local_38 = 0;
                    } else {
                        local_38 = (((uint32_t)((int32_t)((unsigned int)local_38 >> 8)) << 8) |
                                    (uint8_t)((uint8_t)local_38 & local_31));
                    }
                    psVar7 = (shared_ptr<ModularParticleSystem>*)matrix44.HeapBeginPtr();
                    psVar8 = (shared_ptr<ModularParticleSystem>*)matrix44.end();
                    if (psVar7 == psVar8) {
                        bVar13 = false;
                    } else {
                        bVar13 = false;
                        do {
                            pMVar9 = (ModularParticleSystem*)(*psVar7).operator->();
                            local_60 = pMVar9->GetAttachmentInfo();
                            bVar2 = local_60 == *local_40;
                            if (bVar2) {
                                pMVar9 = (ModularParticleSystem*)(*psVar7).operator->();
                                pMVar9->SetEmitting(local_38._0_1_);
                                bVar13 = true;
                            }
                            psVar7 = psVar7 + 16;
                        } while (!bVar2 && psVar7 != psVar8);
                    }
                    matrix44 = local_50;
                    if ((!bVar13) && ((char)local_38 == '\x01')) {
                        local_60 =
                            ((ParticleManager*)modularParticleSystems.GetParticleManager())->RegisterSystem(*local_40);
                        if (shared_ptr::operator_cast_to_bool(&local_60)) {
                            matrix44.push_back(local_60);
                        }
                    }
                    psVar3 = local_40 + 16;
                    local_40 = psVar3;
                } while (psVar3 != psVar4);
            }
            uVar10 = matrix44.size();
            if (local_48->size() < uVar10) {
                psVar7 = (shared_ptr<ModularParticleSystem>*)matrix44.HeapBeginPtr();
                local_40 = (shared_ptr<VFXAttachmentInfo>*)matrix44.end();
                pvVar12 = local_48;
                if (psVar7 != (shared_ptr<ModularParticleSystem>*)local_40) {
                    do {
                        psVar3 = (shared_ptr<VFXAttachmentInfo>*)pvVar12->HeapBeginPtr();
                        psVar4 = (shared_ptr<VFXAttachmentInfo>*)pvVar12->end();
                        pMVar9 = (ModularParticleSystem*)(*psVar7).operator->();
                        local_60 = pMVar9->GetAttachmentInfo();
                        psVar3 = std::find<shared_ptr<VFXAttachmentInfo>*, shared_ptr<VFXAttachmentInfo>>(
                            psVar3, psVar4, local_60);
                        psVar4 = (shared_ptr<VFXAttachmentInfo>*)pvVar12->end();
                        if (psVar3 == psVar4) {
                            pMVar9 = (ModularParticleSystem*)(*psVar7).operator->();
                            pMVar9->SetEmitting(false);
                            pMVar9 = (ModularParticleSystem*)(*psVar7).operator->();
                            pMVar9->SetLoopingAllowed(false);
                        }
                        psVar7 = psVar7 + 16;
                    } while (psVar7 != (shared_ptr<ModularParticleSystem>*)local_40);
                }
                this_00 = local_50;
                psVar7 = (shared_ptr<ModularParticleSystem>*)local_50->HeapBeginPtr();
                auVar14 = this_00->end();
                psVar7 = std::remove_if<shared_ptr<ModularParticleSystem>*,
                                        Model::UpdateModularParticleSystems(
                                            *(RT7Core&), *(eastl::vector<shared_ptr<ModularParticleSystem>>&),
                                            *(math::Matrix44T<float> const&), AnimationStateProvider*,
                                            eastl::vector_map<int, FaceGroupRenderMasks> const*, bool)::__3>(
                    psVar7, auVar14._0_8_, auVar14._8_8_);
                psVar8 = (shared_ptr<ModularParticleSystem>*)this_00->end();
                this_00->erase(psVar7, psVar8);
            }
        }
    }

    // 0x10081efe0
    void Model::GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                       const SceneViewData& sceneViewData, const EffectManager& effectManager,
                                       const eastl::vector_map<int, FaceGroupRenderMasks>* arg5) {
        uint8_t* this_00;
        uint8_t* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar2;
        GeometryQuery* pGVar3;
        unsigned long uVar4;
        unsigned long uVar5;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_04;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar6;
        DrawableQueue* drawableQueue_00;
        GeometryBatchInstance* this_05;

        bool cVar1 = IsReadyToRender();
        if (cVar1) {
            if (m_fadeTime != 0) {
                StartFade();
                m_fadeTime = 0;
            }
            if (m_ShowBillboards != '\0') {
                this_02 =
                    (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                        field_688.HeapBeginPtr();
                puVar2 =
                    (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                        field_688.end();
                for (; this_02 != puVar2; this_02 = this_02 + 8) {
                    ((BillboardBatchInstance*)(*this_02).operator->())
                        ->GatherDrawableElements(drawableQueue, rt7Core, sceneViewData, effectManager, arg5);
                }
            }
            if (m_ShowMeshes != '\0') {
                this_00 = m_geometryQuery;
                cVar1 = this_00->operator_cast_to_bool();
                if (cVar1) {
                    this_01 = &field_656;
                    cVar1 = this_01->empty();
                    if (!cVar1) {
                        pGVar3 = (GeometryQuery*)(*this_00).operator->();
                        uVar4 = pGVar3->GetQueryInstanceCount();
                        uVar5 = this_01->size();
                        if (uVar4 < uVar5) {
                            pGVar3 = (GeometryQuery*)(*this_00).operator->();
                            uVar4 = this_01->size();
                            pGVar3->CreateQueryInstances(uVar4);
                        }
                    }
                }
                this_04 =
                    (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                        field_656.HeapBeginPtr();
                puVar6 =
                    (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                        field_656.end();
                for (; this_04 != puVar6; this_04 = this_04 + 8) {
                    if (*PTR_m_gatherShareLightOnly_100ee6a40 == '\0') {
                    LAB_10081f140:
                        drawableQueue_00 = (DrawableQueue*)(*this_04).operator->();
                        GeometryBatchInstance::GatherDrawableElements(*drawableQueue_00, drawableQueue, rt7Core,
                                                                      sceneViewData, effectManager,
                                                                      (unsigned char)arg5);
                    } else {
                        this_05 = (GeometryBatchInstance*)(*this_04).operator->();
                        cVar1 = ((SpriteAtlasReference*)this_05->GetGeometryBatch())->GetDisableCache();
                        if (cVar1)
                            goto LAB_10081f140;
                    }
                }
            }
        }
    }

    // 0x10081f1b0
    unsigned long Model::IsReadyToRender() const {
        bool cVar1;
        uint64_t unaff_R14;
        unsigned long uVar2;

        if (field_416[0] == '\x05') {
            cVar1 = IsEmptyModel();
            uVar2 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
            if (cVar1)
                goto LAB_10081f1de;
            cVar1 = TexturesReady();
            if (cVar1)
                goto LAB_10081f1de;
        }
        uVar2 = 0;
    LAB_10081f1de:
        return uVar2 & 4294967295;
    }

    // 0x10081f200
    void Model::GatherDrawableElementsPrefetch() {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;

        if (m_ShowMeshes != '\0') {
            this_00 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    field_656.HeapBeginPtr();
            puVar1 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    field_656.end();
            for (; this_00 != puVar1; this_00 = this_00 + 8) {
                ((GeometryBatchInstance*)(*this_00).operator->())->Prefetch();
            }
        }
    }

    // 0x10081f260
    void Model::DestroyRenderingResources() {
        GeometryBatchInstance* pGVar3;
        AutoSingleton<ShaderThreadPoolSingleton> local_28;

        auto this_00 = field_656.HeapBeginPtr();
        auto puVar2 = field_656.end();
        for (; this_00 != puVar2; this_00 = this_00 + 8) {
            pGVar3 = (GeometryBatchInstance*)(*this_00).operator->();
            if (((GeometryBatch*)pGVar3->GetGeometryBatch())->IsHidden() == '\0') {
                pGVar3 = (GeometryBatchInstance*)(*this_00).operator->();
                pGVar3->DestroyRenderingResources();
            }
        }
        auto this_02 = field_688.HeapBeginPtr();
        auto puVar4 = field_688.end();
        for (; this_02 != puVar4; this_02 = this_02 + 8) {
            ((BillboardBatchInstance*)(*this_02).operator->())->DestroyRenderingResources();
        }
        field_937 = 0;
    }

    // 0x10081f380
    void Model::SetLodLevel(unsigned int arg1) {
        LodPassType lodPassType;

        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            lodPassType = 0;
            do {
                ((GeometryBatchInstance*)(*this_00).operator->())->SetLodLevel(lodPassType, arg1);
                lodPassType = lodPassType + 1;
            } while (lodPassType != 3);
        }
    }

    // 0x10081f400
    void Model::BakeShareLight() {
        Layout* this_00;
        bool cVar1;
        long lVar3;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>* this_01;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_02;
        Vector3T<float>* vector3;
        int* piVar4;
        GeometryBatchVertex* this_03;
        unsigned long uVar5;
        GeometryBatchInstance* pGVar7;
        GeometryBatch* pGVar8;
        SpriteAtlasReference* pSVar9;
        unsigned int uVar10;
        unsigned long arg1;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_60e8;

        fixed_hash_map<math::Vector3T<float>, SharedVertexCountNormal, 512ul, 513ul, true,
                       eastl::hash<math::Vector3T<float>>, eastl::equal_to<math::Vector3T<float>>, false,
                       BucketAllocatorEASTL>
            local_60e0(local_60f8, local_6118);
        uint8_t* this_04 = &field_656;
        auto puVar2 = this_04->HeapBeginPtr();
        Layout* local_6100 = (Layout*)this_04;
        auto local_6108 = this_04->end();
        if (puVar2 != local_6108) {
            do {
                local_60e8 = puVar2;
                pGVar7 = (GeometryBatchInstance*)(*puVar2).operator->();
                pGVar8 = (GeometryBatch*)pGVar7->GetGeometryBatch();
                cVar1 = pGVar8->IsHidden();
                if (!cVar1) {
                    pGVar7 = (GeometryBatchInstance*)(*local_60e8).operator->();
                    pSVar9 = (SpriteAtlasReference*)pGVar7->GetGeometryBatch();
                    cVar1 = pSVar9->GetDisableCache();
                    puVar2 = local_60e8;
                    if (cVar1) {
                        pGVar7 = (GeometryBatchInstance*)(*local_60e8).operator->();
                        pGVar8 = (GeometryBatch*)pGVar7->GetGeometryBatch();
                        this_01 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)
                                      pGVar8->GetVertexDataBuffer();
                        pGVar7 = (GeometryBatchInstance*)(*puVar2).operator->();
                        pGVar8 = (GeometryBatch*)pGVar7->GetGeometryBatch();
                        this_02 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                                      pGVar8->GetVertexDataBufferPos();
                        cVar1 = this_02->empty();
                        if (cVar1) {
                            LogAssert("!vertexDataBufferPos.empty()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/Model.cpp",
                                      2001, nullptr);
                        }
                        lVar3 = this_01->size();
                        if (lVar3 != 0) {
                            uVar10 = 1;
                            arg1 = 0;
                            do {
                                vector3 = (Vector3T<float>*)(*this_02)[arg1];
                                piVar4 = &local_60e0[*vector3];
                                *piVar4 = *piVar4 + 1;
                                this_03 = (GeometryBatchVertex*)(*this_01)[arg1];
                                local_60f8[0] = (ReturnValue)this_03->GetNormal();
                                (*((piVar4 + 1))) += local_60f8;
                                arg1 = (unsigned long)uVar10;
                                uVar5 = this_01->size();
                                uVar10 = uVar10 + 1;
                            } while (arg1 < uVar5);
                        }
                    }
                }
                puVar2 = local_60e8 + 8;
            } while (puVar2 != local_6108);
        }
        auto local_60f8 = local_60e0.begin();
        auto local_6118 = local_60e0.end();
        while (cVar1 = local_60f8 != local_6118, this_00 = local_6100, cVar1) {
            lVar3 = local_60f8.HeapBeginPtr();
            if (1 < *(unsigned int*)(lVar3 + 12)) {
                *((lVar3 + 16)) = math::Vector3T<float>::Normalize();
            }
            ++local_60f8;
        }
        puVar2 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     local_6100->HeapBeginPtr();
        auto puVar6 = this_00->end();
        if (puVar2 != puVar6) {
            do {
                pGVar7 = (GeometryBatchInstance*)(*puVar2).operator->();
                pGVar8 = (GeometryBatch*)pGVar7->GetGeometryBatch();
                cVar1 = pGVar8->IsHidden();
                if (!cVar1) {
                    pGVar7 = (GeometryBatchInstance*)(*puVar2).operator->();
                    pSVar9 = (SpriteAtlasReference*)pGVar7->GetGeometryBatch();
                    cVar1 = pSVar9->GetDisableCache();
                    if (cVar1) {
                        pGVar7 = (GeometryBatchInstance*)(*puVar2).operator->();
                        pGVar8 = (GeometryBatch*)pGVar7->GetGeometryBatch();
                        pGVar8->BakeShareLightNormals(local_60e0);
                    }
                }
                puVar2 = puVar2 + 8;
            } while (puVar2 != puVar6);
        }
    }

    // 0x10081f770
    void Model::SetShareLightBatches(bool arg1) {
        GeometryBatchInstance* this_01;

        auto this_00 = field_656.HeapBeginPtr();
        auto puVar1 = field_656.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)(*this_00).operator->();
            ((GeometryBatch*)this_01->GetGeometryBatch())->SetShareLight(arg1);
        }
    }

    // 0x10081f7e0
    float Model::GetLoadProgress() const {
        bool cVar1 = IsLoaded();
        float fVar2 = 1.0;
        if (!cVar1) {
            fVar2 = 0.0;
        }
        cVar1 = TexturesReady();
        if (cVar1) {
            fVar2 = fVar2 + 1.0;
        }
        cVar1 = ShadersReady();
        if (cVar1) {
            fVar2 = fVar2 + 1.0;
        }
        return fVar2 * 0.33333334f;
    }

    // 0x10081f850
    unsigned long Model::TexturesReady() const {
        uint8_t bVar2;
        shared_ptr* this_00;
        shared_ptr* psVar3;
        uint64_t unaff_R14;

        uint8_t* this_02 = m_textureAtlasReferences;
        bool cVar1 = this_02->empty();
        uint64_t uVar5 = (uint64_t)((unsigned long)unaff_R14 >> 8);
        unsigned long uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)1);
        if (!cVar1) {
            this_00 = (shared_ptr*)this_02->HeapBeginPtr();
            psVar3 = (shared_ptr*)this_02->end();
            if (this_00 != psVar3) {
                uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)1);
                do {
                    cVar1 = shared_ptr::operator_cast_to_bool(this_00);
                    bVar2 = 1;
                    if (cVar1) {
                        bVar2 = ((TextureAtlasReference*)(*this_00).operator->())->CheckTexturesLoaded();
                    }
                    uVar4 = (((uint64_t)((int64_t)(uVar4 >> 8)) << 8) | (uint8_t)((uint8_t)uVar4 & bVar2));
                    this_00 = this_00 + 1;
                } while (this_00 != psVar3);
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x10081f8e0
    uint32_t Model::ShadersReady() const {
        bool cVar1;
        int iVar2;
        RenderPassType RVar3;
        GeometryBatchInstance* pGVar5;
        RenderMaterial* pRVar6;
        RenderPassEffect* pRVar7;
        uint64_t in_RCX;
        bool bVar10;
        RenderPassType RVar11;
        bool bVar12;
        uint32_t local_34;

        auto this_00 = field_656.HeapBeginPtr();
        auto puVar4 = field_656.end();
        if (this_00 == puVar4) {
            bVar10 = false;
            local_34 = 0;
        } else {
            local_34 = 0;
            bVar10 = false;
            do {
                pGVar5 = (GeometryBatchInstance*)(*this_00).operator->();
                cVar1 = pGVar5->IsHidden();
                if (!cVar1) {
                    pGVar5 = (GeometryBatchInstance*)(*this_00).operator->();
                    pRVar6 = (RenderMaterial*)pGVar5->GetMaterial();
                    iVar2 = oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(10);
                    bVar12 = iVar2 != 0;
                    if (iVar2 == 0) {
                        iVar2 = 0;
                    } else {
                        RVar11 = 0;
                        do {
                            pRVar7 = (RenderPassEffect*)pRVar6->GetRenderPassEffect(RVar11);
                            cVar1 = pRVar7->HasShader();
                            if (cVar1) {
                                cVar1 = pRVar7->IsShaderReady();
                                in_RCX = (((uint64_t)((int64_t)((unsigned long)in_RCX >> 8)) << 8) | (uint8_t)1);
                                local_34 = (uint32_t)in_RCX;
                                if (!cVar1) {
                                    iVar2 = 1;
                                    goto LAB_10081f9df;
                                }
                            }
                            RVar11 = RVar11 + 1;
                            RVar3 =
                                oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(10);
                            bVar12 = RVar11 < RVar3;
                        } while (bVar12);
                        iVar2 = 0;
                    }
                LAB_10081f9df:
                    bVar10 = true;
                    if (!bVar12)
                        goto LAB_10081f9e7;
                } else {
                LAB_10081f9e7:
                    iVar2 = 0;
                }
                if (iVar2 != 0)
                    goto LAB_10081f9ff;
                this_00 = this_00 + 8;
            } while (this_00 != puVar4);
            iVar2 = 2;
        LAB_10081f9ff:
            if (iVar2 != 2) {
                return 0;
            }
        }
        auto this_01 = field_688.HeapBeginPtr();
        auto puVar8 = field_688.end();
        iVar2 = 7;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar9 =
            puVar8;
        if (this_01 != puVar8) {
            do {
                pGVar5 = (GeometryBatchInstance*)(*this_01).operator->();
                pRVar6 = (RenderMaterial*)pGVar5->GetMaterial();
                iVar2 = oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(10);
                bVar12 = iVar2 != 0;
                if (bVar12) {
                    RVar11 = 0;
                    do {
                        pRVar7 = (RenderPassEffect*)pRVar6->GetRenderPassEffect(RVar11);
                        cVar1 = pRVar7->HasShader();
                        if (cVar1) {
                            cVar1 = pRVar7->IsShaderReady();
                            puVar9 =
                                (unique_ptr<BillboardBatchInstance,
                                            MakeUniquePool<BillboardBatchInstance, 64>::
                                                UniquePoolDeleter>*)(((uint64_t)((int64_t)((unsigned long)puVar9 >> 8))
                                                                      << 8) |
                                                                     (uint8_t)1);
                            local_34 = (uint32_t)puVar9;
                            if (!cVar1) {
                                iVar2 = 1;
                                goto LAB_10081fae2;
                            }
                        }
                        RVar11 = RVar11 + 1;
                        RVar3 = oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(10);
                        bVar12 = RVar11 < RVar3;
                    } while (bVar12);
                }
                iVar2 = 0;
            LAB_10081fae2:
                bVar10 = true;
                if (bVar12)
                    goto LAB_10081fafd;
                this_01 = this_01 + 8;
            } while (this_01 != puVar8);
            iVar2 = 7;
        }
    LAB_10081fafd:
        if (iVar2 == 7) {
            return (uint8_t)local_34 | !bVar10;
        }
        return 0;
    }

    // 0x10081fba0
    uint64_t Model::GetTextureAtlasReference() const {
        uint64_t uVar3;

        uint8_t* this_01 = m_textureAtlasReferences;
        unsigned long uVar2 = this_01->size();
        if (1 < uVar2) {
            LogAssert("m_textureAtlasReferences.size() <= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      2200, nullptr);
        }
        if (this_01->empty() == '\0') {
            uVar3 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_01)[0])->end();
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x10081fd60
    void Model::SetDefaultLODs(GeometryBatchInstance* geometryBatchInstance, const EffectManager& effectManager,
                               RenderPassType renderPassType, const SceneViewData& sceneViewData, float arg5,
                               const math::OBB& obb) {
        int iVar2;
        Matrix44T<float>* matrix441;
        Matrix44T<float>* matrix442;
        ModelLodPassConfig* modelLodPassConfig;
        LodPassType LVar3;
        float arg4;
        uint8_t local_48[16];
        float local_34;

        bool cVar1 = effectManager.IsEnabled(96);
        if (((!cVar1) && (renderPassType < 10)) && ((536U >> (renderPassType & 31) & 1) != 0)) {
            cVar1 = effectManager.IsEnabled(95);
            if (!cVar1) {
                LVar3 = 0;
                do {
                    geometryBatchInstance->SetLodLevel(LVar3, 0);
                    LVar3 = LVar3 + 1;
                } while (LVar3 != 3);
            } else {
                cVar1 = effectManager.IsEnabled(97);
                if (!cVar1) {
                    new (local_48) math::Sphere();
                    obb.GetMinimumEnclosingSphere(*local_48);
                    matrix441 = (Matrix44T<float>*)sceneViewData.GetScreen();
                    matrix442 = (Matrix44T<float>*)sceneViewData.GetOrigin();
                    local_34 = (float)math::NDCProjectGetSphericalNDCRadius(*local_48, *matrix441, *matrix442);
                    LVar3 = 0;
                    do {
                        modelLodPassConfig =
                            (ModelLodPassConfig*)GetLodConfig((Model*)(unsigned long)LVar3, (LodPassType)matrix441);
                        arg4 = (float)local_48->GetOutlineRadiusAdjustment();
                        iVar2 = CalculateLodLevel(modelLodPassConfig, arg5, local_34, arg4);
                        matrix441 = (Matrix44T<float>*)(unsigned long)LVar3;
                        geometryBatchInstance->SetLodLevel(LVar3, iVar2 + *(int*)(modelLodPassConfig + 24));
                        LVar3 = LVar3 + 1;
                    } while (LVar3 != 3);
                } else {
                    geometryBatchInstance->SetLodLevel(0, 4);
                }
            }
        }
    }

    // 0x10081fea0
    void Model::SetPointLightBounds(int arg1, int arg2, int arg3, int arg4) {
        uint8_t* this_00 = &field_320;
        auto pfVar1 = this_00->SSOBeginPtr();
        *pfVar1 = (float)arg1 * 128.0;
        pfVar1 = (float*)this_00->y();
        *pfVar1 = (float)arg2 * 128.0;
        pfVar1 = (float*)this_00->second();
        *pfVar1 = (float)((arg3 + arg1) * 128) - 1.0;
        pfVar1 = (float*)this_00->qw();
        *pfVar1 = (float)((arg4 + arg2) * 128) - 1.0;
    }

    // 0x10081ff70
    void Model::SetPointLightBounds(const math::Vector3T<float>& vector3, int arg2, int arg3) {
        float fVar6;
        float fVar7;

        auto pfVar4 = vector3.SSOBeginPtr();
        if ((arg2 & 1U) == 0) {
            fVar6 = (float)(arg2 << 6);
        } else {
            fVar6 = (float)(arg2 << 7) * 0.5;
        }
        float fVar8 = *pfVar4;
        pfVar4 = (float*)vector3.second();
        float fVar1 = *pfVar4;
        if ((arg3 & 1U) == 0) {
            fVar7 = (float)(arg3 << 6);
        } else {
            fVar7 = (float)(arg3 << 7) * 0.5;
        }
        fVar6 = (float)::floor(fVar8 - fVar6);
        fVar8 = (float)::floor(fVar1 - fVar7);
        int iVar2 = (int)fVar8;
        int iVar5 = iVar2 + 127;
        if (-1 < iVar2) {
            iVar5 = iVar2;
        }
        int iVar3 = (int)fVar6;
        iVar2 = iVar3 + 127;
        if (-1 < iVar3) {
            iVar2 = iVar3;
        }
        SetPointLightBounds(iVar2 >> 7, iVar5 >> 7, arg2, arg3);
    }

    // 0x100820060
    void Model::UpdatePointLightBounds() {
        float* pfVar1;
        float fVar3;
        float fVar4;
        uint8_t local_58[32];
        uint64_t local_38;
        uint64_t local_30;
        float local_28;
        float local_24;

        auto aabb = GetScreen();
        new (local_58) math::AABB(*aabb);
        if (local_58->IsValid() != '\0') {
            local_58->Transform(m_worldTransform);
            local_24 = (float)local_58->GetWidth();
            local_24 = local_24 + 1.0;
            fVar3 = (float)local_58->GetHeight();
            fVar3 = fVar3 + 1.0;
            new (&local_30) math::Point(local_24, fVar3);
            local_38 = local_30 / *128.0;
            local_30 = local_58->GetCentrePos();
            local_28 = fVar3;
            pfVar1 = (float*)local_38.SSOBeginPtr();
            fVar3 = (float)ceil(*pfVar1);
            pfVar1 = (float*)local_38.y();
            fVar4 = (float)ceil(*pfVar1);
            SetPointLightBounds(local_30, (int)fVar3, (int)fVar4);
        }
    }

    // 0x100820150
    void Model::CalculateLabelCentres() {
        GeometryBatchInstance* pGVar4;
        GeometryBatch* pGVar5;
        Layout* pLVar6;
        unsigned short* puVar7;
        unsigned short* puVar8;
        BillboardBatchInstance* pBVar11;
        Vector3T<float>* pVVar12;
        Vector3T<float>* pVVar13;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_02;
        ObjTypeList* pOVar14;
        vector_map<unsigned short, eastl::vector<unsigned short>>* pvVar15;
        vector<BillboardBatchVertex>* this_03;
        long lVar16;
        long lVar17;
        unsigned short* puVar18;
        unsigned short* puVar19;
        uint8_t* this_04;
        unsigned short uVar20;
        bool bVar21;

        uint8_t* this_00 = &field_656;
        auto puVar2 = this_00->HeapBeginPtr();
        auto puVar3 = this_00->end();
        if (puVar2 == puVar3) {
            uVar20 = 0;
            bVar21 = false;
        } else {
            bVar21 = false;
            uVar20 = 0;
            do {
                pGVar4 = (GeometryBatchInstance*)(*puVar2).operator->();
                pGVar5 = (GeometryBatch*)pGVar4->GetGeometryBatch();
                if (pGVar5->HasBones()) {
                    pLVar6 = (Layout*)pGVar5->GetBoneIDMap();
                    puVar7 = (unsigned short*)pLVar6->HeapBeginPtr();
                    puVar8 = (unsigned short*)pLVar6->end();
                    bVar21 = true;
                    for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
                        if (uVar20 < *puVar7) {
                            uVar20 = *puVar7;
                        }
                    }
                }
                puVar2 = puVar2 + 8;
            } while (puVar2 != puVar3);
        }
        uint8_t* this_01 = &field_688;
        auto puVar9 = this_01->HeapBeginPtr();
        auto puVar10 = this_01->end();
        for (; puVar9 != puVar10; puVar9 = puVar9 + 8) {
            pBVar11 = (BillboardBatchInstance*)(*puVar9).operator->();
            pGVar5 = (GeometryBatch*)pBVar11->GetBillboardBatch();
            if (pGVar5->HasBones()) {
                pLVar6 = (Layout*)pGVar5->GetBoneIDMap();
                puVar7 = (unsigned short*)pLVar6->HeapBeginPtr();
                puVar8 = (unsigned short*)pLVar6->end();
                bVar21 = true;
                for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
                    if (uVar20 < *puVar7) {
                        uVar20 = *puVar7;
                    }
                }
            }
        }
        if (bVar21) {
            this_04 = &field_816;
            this_04->clear();
            this_04->set_max_size((unsigned long)uVar20 + 1, 0);
            puVar2 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    this_00->HeapBeginPtr();
            puVar3 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    this_00->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 8) {
                pGVar4 = (GeometryBatchInstance*)(*puVar2).operator->();
                pOVar14 = (ObjTypeList*)pGVar4->GetGeometryBatch();
                if (pOVar14->HasBones()) {
                    pLVar6 = (Layout*)pOVar14->GetBoneIDMap();
                    pvVar15 = (vector_map<unsigned short, eastl::vector<unsigned short>>*)pOVar14->GetModelCache();
                    this_02 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                                  pOVar14->GetVertexDataBufferPos();
                    if (this_02->empty()) {
                        LogAssert("!vertexData.empty()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/model/Model.cpp",
                                  2419, nullptr);
                    }
                    puVar7 = (unsigned short*)pLVar6->HeapBeginPtr();
                    puVar8 = (unsigned short*)pLVar6->end();
                    for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
                        lVar16 = pvVar15->find(*(puVar7 + 1));
                        lVar17 = pvVar15->end();
                        if (lVar16 != lVar17) {
                            puVar18 = (unsigned short*)((lVar16 + 8))->HeapBeginPtr();
                            puVar19 = (unsigned short*)((lVar16 + 8))->end();
                            for (; puVar18 != puVar19; puVar18 = puVar18 + 1) {
                                pVVar12 = (Vector3T<float>*)(*this_02)[(unsigned long)*puVar18];
                                pVVar13 = (Vector3T<float>*)(*this_04)[(unsigned long)*puVar7];
                                *pVVar13 += *pVVar12;
                                lVar16 = (*this_04)[(unsigned long)*puVar7];
                                *(int*)(lVar16 + 12) = *(int*)(lVar16 + 12) + 1;
                            }
                        }
                    }
                }
            }
            puVar9 =
                (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                    this_01->HeapBeginPtr();
            puVar10 =
                (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                    this_01->end();
            for (; puVar9 != puVar10; puVar9 = puVar9 + 8) {
                pBVar11 = (BillboardBatchInstance*)(*puVar9).operator->();
                pOVar14 = (ObjTypeList*)pBVar11->GetBillboardBatch();
                if (pOVar14->HasBones()) {
                    pLVar6 = (Layout*)pOVar14->GetBoneIDMap();
                    pvVar15 = (vector_map<unsigned short, eastl::vector<unsigned short>>*)pOVar14->GetModelCache();
                    this_03 = (vector<BillboardBatchVertex>*)pOVar14->GetChildren();
                    puVar7 = (unsigned short*)pLVar6->HeapBeginPtr();
                    puVar8 = (unsigned short*)pLVar6->end();
                    for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
                        lVar16 = pvVar15->find(*(puVar7 + 1));
                        lVar17 = pvVar15->end();
                        if (lVar16 != lVar17) {
                            puVar18 = (unsigned short*)((lVar16 + 8))->HeapBeginPtr();
                            puVar19 = (unsigned short*)((lVar16 + 8))->end();
                            for (; puVar18 != puVar19; puVar18 = puVar18 + 1) {
                                pVVar12 = (Vector3T<float>*)(*this_03)[(unsigned long)*puVar18];
                                pVVar13 = (Vector3T<float>*)(*this_04)[(unsigned long)*puVar7];
                                *pVVar13 += *pVVar12;
                                lVar16 = (*this_04)[(unsigned long)*puVar7];
                                *(int*)(lVar16 + 12) = *(int*)(lVar16 + 12) + 1;
                            }
                        }
                    }
                }
            }
            pVVar12 = (Vector3T<float>*)this_04->data();
            pVVar13 = (Vector3T<float>*)this_04->end();
            for (; pVVar12 != pVVar13; pVVar12 = pVVar12 + 16) {
                if (0 < *(int*)(pVVar12 + 12)) {
                    *pVVar12 /= ((float)*(int*)(pVVar12 + 12));
                }
            }
        }
    }

    // 0x100820690
    void Model::DeferredRenderKeepAlive(const shared_ptr<Model>& model) {
        shared_ptr<oldscape::ClientNpc> local_40;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30;

        if (model.operator_cast_to_bool() == '\0') {
            LogAssert("model",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      2473, nullptr);
        }
        auto renderDevice = model.Instance();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_40);
        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
        renderDevice->KeepAliveSharedPtr(local_30, 1);
    }

    // 0x100849030
    void Model::ConstructFinishAndUpload()::$_2::operator()(render::RenderContext& renderContext) const {
        ConstructFinishAndUploadInternal(field_0);
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10080f970
    bool operator!= <float>(const Vector4T<float>& vector41, const Vector4T<float>& vector42) {
        bool bVar1 = vector41 == vector42;
        return !bVar1;
    }

} // namespace jag::math
