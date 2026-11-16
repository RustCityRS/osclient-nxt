// libs/graphics/runetek7/model/Model.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "Model.h"

namespace jag::graphics {
    // 0x100f43b00, 96 bytes, __data
    Model::m_lodConfigs = {
        1167867904, 1071225242, 1038845215, 1080033280, 1,          0, -2,         1178304512,
        1074580685, 1007908028, 1082130432, 0,          1041865114, 1, 1195593728, 1065353216,
        1007908028, 1082130432, 0,          1056964608, 2,          0, 0,          0,
    };

    // 0x100f43b60, 48 bytes, __data
    Model::m_lodConfigNiceNames__ = {0, 0, 14658420, 1, 1, 0, 14658437, 1, 2, 0, 14658444, 1};

    // 0x100f43b90, 1 bytes, __data
    Model::m_ShowMeshes = 1;

    // 0x100f43b91, 1 bytes, __data
    Model::m_ShowBillboards = 1;

    // 0x100f43b92, 1 bytes, __data
    Model::m_DoModelWelding = 1;

    // 0x100f43ba0, 1 bytes, __data
    Model::m_gatherShareLightOnly = 0;

    // 0x103bbd4d8, 16 bytes, __common; set at startup by ___cxx_global_var_init.92
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Model::NullModel;

    // 0x103bbd4e8, 16 bytes, __common; set at startup by ___cxx_global_var_init.96
    StringEnum Model::m_lodConfigNiceNames = StringEnum((StringEnumEntry*)&Model::m_lodConfigNiceNames__, 3);

    // 0x103bbd4f8, 4 bytes, __common; zero-initialised
    Model::m_NumExtant;

    // 0x103bbd4fc, 4 bytes, __common; zero-initialised
    Model::m_NextUniqueID;

    // 0x10005d590: the linker folded this into game::console::CommandLine::GetSelectionStart() const, which has identical code
    Model::GetLevel() const;

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    Model::GetAABB() const;

    // 0x1000fa850: the linker folded this into oldscape::graphics::NXTPixToolkit::getWorldRenderer(), which has identical code
    shared_ptr Model::GetTextureAtlasReferences() const;

    // 0x10011ced0: the linker folded this into oldscape::configdecoder::NpcType::GetHeadIconIndices() const, which has identical code
    Model::GetBatchList();

    // 0x10011ced0: the linker folded this into oldscape::configdecoder::NpcType::GetHeadIconIndices() const, which has identical code
    Model::GetBatchList() const;

    // 0x10016ea80: the linker folded this into oldscape::minimenu::Minimenu::GetPlayerOps() const, which has identical code
    Model::GetTint() const;

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    Model::GetWorldTransform() const;

    // 0x100324d40: the linker folded this into oldscape::graphics::NXTPixToolkit::GetPix2D(), which has identical code
    Model::GetLocalTransform() const;

    // 0x1003c1fc0: the linker folded this into game::LocationContainer::GetDynamicChangedLocations() const, which has identical code
    Model::GetPointLightBounds() const;

    // 0x1003c2100: the linker folded this into game::LocationContainer::GetDynamicMultiLocations() const, which has identical code
    Model::GetHighlightedSectionColour() const;

    // 0x1003c3d90: the linker folded this into game::MapElementType::GetMinimapIconScale() const, which has identical code
    int Model::GetExternalID() const;

    // 0x1003c3e20: the linker folded this into game::MapElementType::GetHAlign() const, which has identical code
    uint Model::GetSavedModelHash() const;

    // 0x1003cf240: the linker folded this into game::MapElementType::GetFlashSpriteID() const, which has identical code
    Model::GetModelRawUniqueID() const;

    // 0x1004140b0: the linker folded this into game::MapSquare::GetLocationContainers() const, which has identical code
    Model::GetParticleEffectors();

    // 0x1004140b0: the linker folded this into game::MapSquare::GetLocationContainers() const, which has identical code
    Model::GetParticleEffectors() const;

    // 0x100417fb0: the linker folded this into game::NPCType::GetHeadIconGraphic() const, which has identical code
    Model::GetIrradianceEffect();

    // 0x100417fb0: the linker folded this into game::NPCType::GetHeadIconGraphic() const, which has identical code
    Model::GetIrradianceEffect() const;

    // 0x100431760: the linker folded this into game::Location::GetLocationType() const, which has identical code
    Model::GetHighlightColour() const;

    // 0x10047dbc0: the linker folded this into PointLightShadows::GetPointLightSMManager(), which has identical code
    Model::GetBillboardBatchList();

    // 0x10047dbc0: the linker folded this into PointLightShadows::GetPointLightSMManager(), which has identical code
    Model::GetBillboardBatchList() const;

    // 0x1004ab8a0: the linker folded this into game::EnvironmentOverride::GetVolumetricOverrides() const, which has identical code
    Model::GetSavedModelHashList() const;

    // 0x100505580: the linker folded this into game::NPCType::GetBodyList() const, which has identical code
    Model::GetParticleEmitters();

    // 0x100505580: the linker folded this into game::NPCType::GetBodyList() const, which has identical code
    Model::GetParticleEmitters() const;

    // 0x100623240: the linker folded this into game::OldCamera::GetClampedSceneSize() const, which has identical code
    shared_ptr Model::GetGeometryQuery() const;

    // 0x10080df00, 304 bytes, placed by class name and debug map
    // Model::CalculateLodLevel(ModelLodPassConfig const&, float, float, float)
    uint Model::CalculateLodLevel(ModelLodPassConfig* param_1, float param_2, float param_3, float param_4) {
        uint uVar1;
        uint* puVar2;
        uint uVar3;
        float* pfVar4;
        float* pfVar5;
        bool bVar6;
        float fVar7;
        float local_28;
        float local_24;
        float local_20;
        float local_1c;

        local_20 = 0.0;
        if (*(float*)param_1 <= param_2 && param_2 != *(float*)param_1) {
            do {
                local_24 = *(float*)param_1;
                fVar7 = math::IntegerExponentPow<float>(*(float*)(param_1 + 4), (int)local_20 + 1);
                local_20 = (float)((int)local_20 + 1);
                if (param_2 <= fVar7 * local_24)
                    break;
            } while ((uint)local_20 < 10);
        }
        if (param_2 <= param_4) {
            local_1c = 5.60519e-45;
            pfVar5 = &local_1c;
            pfVar4 = &local_20;
        } else {
            uVar1 = 0;
            if (param_3 < *(float*)(param_1 + 8)) {
                uVar3 = 0;
                do {
                    local_24 = *(float*)(param_1 + 8);
                    fVar7 = math::IntegerExponentPow<float>(*(float*)(param_1 + 12), uVar3);
                    uVar1 = uVar3 + 1;
                    if (local_24 / fVar7 <= param_3)
                        break;
                    bVar6 = uVar3 < 3;
                    uVar3 = uVar1;
                } while (bVar6);
            }
            uVar3 = 5 - uVar1;
            if (param_1[16] == (ModelLodPassConfig)0) {
                uVar3 = uVar1;
            }
            local_1c = (float)(uint)local_20;
            local_28 = (float)uVar3;
            fVar7 = math::Lerp<float, float>(&local_1c, &local_28, *(float*)(param_1 + 20));
            local_1c = (float)math::RoundFloatToInt(fVar7);
            local_28 = 5.60519e-45;
            pfVar5 = &local_28;
            pfVar4 = &local_1c;
        }
        puVar2 = std::min<unsigned int>((uint*)pfVar5, (uint*)pfVar4);
        return *puVar2;
    }

    // 0x100813610, 16 bytes, placed by class name and debug map
    // Model::SelectTextureInclusionMode(TextureInclusionMode const*)
    void Model::SelectTextureInclusionMode(TextureInclusionMode* param_1) {
        TexturesReady((Model*)param_1);
    }

    // 0x100816480, 784 bytes, base-object constructor, placed by class name
    // Model::Model()
    void Model::Model() {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined* puVar8;
        float local_34;

        new (this) MakeSharedPool<Model, 3072>();
        field_0 = &PTR__Model_100f157b8;
        new (&field_16) math::AABB();
        puVar8 = PTR_IDENTITY_100ee6730;
        uVar1 = *(undefined8*)PTR_IDENTITY_100ee6730;
        uVar2 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 8);
        uVar3 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 16);
        uVar4 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 24);
        uVar5 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 32);
        uVar6 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 40);
        uVar7 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 56);
        field_96 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 48);
        field_104 = uVar7;
        field_80 = uVar5;
        field_88 = uVar6;
        field_64 = uVar3;
        field_72 = uVar4;
        m_worldTransform = uVar1;
        field_56 = uVar2;
        uVar1 = *(undefined8*)puVar8;
        uVar2 = *(undefined8*)(puVar8 + 8);
        uVar3 = *(undefined8*)(puVar8 + 16);
        uVar4 = *(undefined8*)(puVar8 + 24);
        uVar5 = *(undefined8*)(puVar8 + 32);
        uVar6 = *(undefined8*)(puVar8 + 40);
        uVar7 = *(undefined8*)(puVar8 + 56);
        field_160 = *(undefined8*)(puVar8 + 48);
        field_168 = uVar7;
        field_144 = uVar5;
        field_152 = uVar6;
        field_128 = uVar3;
        field_136 = uVar4;
        field_112 = uVar1;
        field_120 = uVar2;
        uVar1 = *(undefined8*)puVar8;
        uVar2 = *(undefined8*)(puVar8 + 8);
        uVar3 = *(undefined8*)(puVar8 + 16);
        uVar4 = *(undefined8*)(puVar8 + 24);
        uVar5 = *(undefined8*)(puVar8 + 32);
        uVar6 = *(undefined8*)(puVar8 + 40);
        uVar7 = *(undefined8*)(puVar8 + 56);
        field_224 = *(undefined8*)(puVar8 + 48);
        field_232 = uVar7;
        field_208 = uVar5;
        field_216 = uVar6;
        field_192 = uVar3;
        field_200 = uVar4;
        m_localTransform = uVar1;
        field_184 = uVar2;
        puVar8 = PTR_ZERO_100ee6708;
        uVar1 = *(undefined8*)(PTR_ZERO_100ee6708 + 8);
        m_tint = *(undefined8*)PTR_ZERO_100ee6708;
        field_248 = uVar1;
        uVar1 = *(undefined8*)(puVar8 + 8);
        m_highlightColour = *(undefined8*)puVar8;
        field_264 = uVar1;
        m_highlightsIgnoreDepth = false;
        m_highlightScale = 0.0;
        m_highlightSilhouetteAlpha = 0.0;
        uVar1 = *(undefined8*)(puVar8 + 8);
        m_highlightedSectionColour = *(undefined8*)puVar8;
        field_296 = uVar1;
        *(undefined8*)&m_highlightedSectionScale = 4575657221408423936;
        m_level = 4294967295;
        new (&field_320) math::Vector4T<float>();
        m_modelRawUniqueID = 4294967295;
        m_externalID = -1;
        m_savedModelHash = 0;
        new (&field_352) eastl::vector<unsigned int, eastl::allocator>();
        new (&field_384) eastl::vector<int, eastl::allocator>();
        field_416[0] = 0;
        graphicutils::BatchDestroy<
            eastl::fixed_vector<shared_ptr<TextureAtlasReference>, 1ul, true, eastl::allocator>>::
            BatchDestroy<>(
                (BatchDestroy<eastl::fixed_vector<shared_ptr<TextureAtlasReference>, 1ul, true, eastl::allocator>>*)
                    m_textureAtlasReferences);
        local_34 = 0.0;
        new (&field_480, &local_34) math::Transitionable<float>();
        m_fadeTime = 0;
        m_currentFade = 3212836864;
        new (&field_528) IrradianceEffect();
        m_useUncompressedTextures = false;
        new (&field_648) std::future<void>();
        graphicutils::BatchDestroy<eastl::vector<
            std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
            eastl::allocator>>::
            BatchDestroy<>(
                (BatchDestroy<
                    eastl::vector<std::unique_ptr<GeometryBatchInstance,
                                                  MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                  eastl::allocator>>*)&field_656);
        graphicutils::BatchDestroy<eastl::vector<
            std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
            eastl::allocator>>::
            BatchDestroy<>(
                (BatchDestroy<
                    eastl::vector<std::unique_ptr<BillboardBatchInstance,
                                                  MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                  eastl::allocator>>*)&field_688);
        new (&field_720) eastl::vector<shared_ptr<ModelParticleSource>, eastl::allocator>();
        new (&field_752) eastl::vector<shared_ptr<ModelParticleSource>, eastl::allocator>();
        new (&field_784) eastl::vector<shared_ptr<VFXAttachmentInfo>, eastl::allocator>();
        new (&field_816) Array<LabelData, eastl::allocator>();
        new (m_geometryQuery, (_func_decltype_nullptr*)&local_34)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_856)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_896)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        field_936 = 0;
        field_937 = 0;
        field_938 = 0;
        m_NumExtant = m_NumExtant + 1;
    }

    // 0x100816880, 16 bytes, complete-object constructor, placed by class name
    // Model::Model(): jumps straight to the base-object constructor

    // 0x100816890, 1920 bytes, base-object constructor, placed by class name
    // Model::Model(Model const&, ModelCopyType)
    void Model::Model(long param_1, int param_3) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        undefined1* this_04;
        undefined1* this_05;
        undefined1* this_06;
        vector<eastl::pair<int, int>, eastl::allocator>* pvVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined* puVar9;
        char cVar10;
        ModelConstructedState* pMVar11;
        ulong uVar12;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_07;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar13;
        GeometryBatchInstance* pGVar14;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_08;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar15;
        BillboardBatchInstance* pBVar16;
        shared_ptr<ModelParticleSource>* psVar17;
        shared_ptr<ModelParticleSource>* psVar18;
        shared_ptr<VFXAttachmentInfo>* this_09;
        shared_ptr<VFXAttachmentInfo>* psVar19;
        vector* pvVar20;
        bool bVar21;
        undefined1 auVar22[16];
        shared_ptr local_78;
        Model* local_68;
        int local_5c;
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        undefined1* local_40;
        bool local_31;

        local_5c = param_3;
        new (this) MakeSharedPool<Model, 3072>();
        field_0 = &PTR__Model_100f157b8;
        new (&field_16, (AABB*)(param_1 + 16)) math::AABB();
        uVar2 = *(undefined8*)(param_1 + 48);
        uVar3 = *(undefined8*)(param_1 + 56);
        uVar4 = *(undefined8*)(param_1 + 64);
        uVar5 = *(undefined8*)(param_1 + 72);
        uVar6 = *(undefined8*)(param_1 + 80);
        uVar7 = *(undefined8*)(param_1 + 88);
        uVar8 = *(undefined8*)(param_1 + 104);
        field_96 = *(undefined8*)(param_1 + 96);
        field_104 = uVar8;
        field_80 = uVar6;
        field_88 = uVar7;
        field_64 = uVar4;
        field_72 = uVar5;
        m_worldTransform = uVar2;
        field_56 = uVar3;
        uVar2 = *(undefined8*)(param_1 + 112);
        uVar3 = *(undefined8*)(param_1 + 120);
        uVar4 = *(undefined8*)(param_1 + 128);
        uVar5 = *(undefined8*)(param_1 + 136);
        uVar6 = *(undefined8*)(param_1 + 144);
        uVar7 = *(undefined8*)(param_1 + 152);
        uVar8 = *(undefined8*)(param_1 + 168);
        field_160 = *(undefined8*)(param_1 + 160);
        field_168 = uVar8;
        field_144 = uVar6;
        field_152 = uVar7;
        field_128 = uVar4;
        field_136 = uVar5;
        field_112 = uVar2;
        field_120 = uVar3;
        uVar2 = *(undefined8*)(param_1 + 176);
        uVar3 = *(undefined8*)(param_1 + 184);
        uVar4 = *(undefined8*)(param_1 + 192);
        uVar5 = *(undefined8*)(param_1 + 200);
        uVar6 = *(undefined8*)(param_1 + 208);
        uVar7 = *(undefined8*)(param_1 + 216);
        uVar8 = *(undefined8*)(param_1 + 232);
        field_224 = *(undefined8*)(param_1 + 224);
        field_232 = uVar8;
        field_208 = uVar6;
        field_216 = uVar7;
        field_192 = uVar4;
        field_200 = uVar5;
        m_localTransform = uVar2;
        field_184 = uVar3;
        uVar2 = *(undefined8*)(param_1 + 248);
        m_tint = *(undefined8*)(param_1 + 240);
        field_248 = uVar2;
        puVar9 = PTR_ZERO_100ee6708;
        uVar2 = *(undefined8*)(PTR_ZERO_100ee6708 + 8);
        m_highlightColour = *(undefined8*)PTR_ZERO_100ee6708;
        field_264 = uVar2;
        m_highlightsIgnoreDepth = false;
        m_highlightScale = 0.0;
        m_highlightSilhouetteAlpha = 0.0;
        uVar2 = *(undefined8*)(puVar9 + 8);
        m_highlightedSectionColour = *(undefined8*)puVar9;
        field_296 = uVar2;
        *(undefined8*)&m_highlightedSectionScale = 4575657221408423936;
        m_level = 4294967295;
        new (&field_320) math::Vector4T<float>();
        m_modelRawUniqueID = *(undefined4*)(param_1 + 336);
        m_externalID = *(int*)(param_1 + 340);
        m_savedModelHash = *(uint*)(param_1 + 344);
        this_00 = &field_352;
        pvVar20 = (vector*)(param_1 + 352);
        new (this_00) eastl::vector<unsigned int, eastl::allocator>(pvVar20);
        new (&field_384) eastl::vector<int, eastl::allocator>();
        field_416[0] = 0;
        this_01 = m_textureAtlasReferences;
        graphicutils::BatchDestroy<
            eastl::fixed_vector<shared_ptr<TextureAtlasReference>, 1ul, true, eastl::allocator>>::
            BatchDestroy<>(
                (BatchDestroy<eastl::fixed_vector<shared_ptr<TextureAtlasReference>, 1ul, true, eastl::allocator>>*)
                    this_01);
        uVar2 = *(undefined8*)(param_1 + 480);
        uVar3 = *(undefined8*)(param_1 + 488);
        uVar4 = *(undefined8*)(param_1 + 504);
        field_496 = *(undefined8*)(param_1 + 496);
        field_504 = uVar4;
        field_480 = uVar2;
        field_488 = uVar3;
        m_fadeTime = 0;
        m_currentFade = *(undefined4*)(param_1 + 516);
        new (&field_528) IrradianceEffect();
        m_useUncompressedTextures = *(bool*)(param_1 + 640);
        this_02 = &field_648;
        new (this_02) std::future<void>();
        this_03 = &field_656;
        graphicutils::BatchDestroy<eastl::vector<
            std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
            eastl::allocator>>::
            BatchDestroy<>(
                (BatchDestroy<
                    eastl::vector<std::unique_ptr<GeometryBatchInstance,
                                                  MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                  eastl::allocator>>*)this_03);
        this_04 = &field_688;
        graphicutils::BatchDestroy<eastl::vector<
            std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
            eastl::allocator>>::
            BatchDestroy<>(
                (BatchDestroy<
                    eastl::vector<std::unique_ptr<BillboardBatchInstance,
                                                  MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                  eastl::allocator>>*)this_04);
        this_05 = &field_720;
        new (this_05) eastl::vector<shared_ptr<ModelParticleSource>, eastl::allocator>();
        this_06 = &field_752;
        new (this_06) eastl::vector<shared_ptr<ModelParticleSource>, eastl::allocator>();
        new (&field_784) eastl::vector<shared_ptr<VFXAttachmentInfo>, eastl::allocator>();
        new (&field_816) Array<LabelData, eastl::allocator>();
        local_40 = m_geometryQuery;
        new (local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pvVar20);
        new (&field_856)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        new (&field_896)
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        field_936 = 0;
        field_937 = 0;
        field_938 = 0;
        m_NumExtant = m_NumExtant + 1;
        local_68 = this;
        local_58 = this_00;
        local_50 = this_01;
        local_48 = this_02;
        if (local_5c == 2) {
            cVar10 = ((param_1 + 648))->valid();
            if (cVar10 != '\0') {
                std::future<void>::wait();
            }
            local_68->field_416[0] = *(undefined1*)(param_1 + 416);
        } else {
            local_78._0_1_ = 4;
            pMVar11 = std::min<ModelConstructedState>((ModelConstructedState*)&local_78,
                                                      (ModelConstructedState*)(param_1 + 416));
            field_416[0] = *pMVar11;
        }
        if (local_5c != 1) {
            SetTextureAtlasReferences(local_68, (fixed_vector*)(param_1 + 424));
        }
        pvVar1 = (vector<eastl::pair<int, int>, eastl::allocator>*)(param_1 + 656);
        uVar12 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar1);
        this_03->reserve(uVar12);
        bVar21 = local_5c == 2;
        this_07 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                      pvVar1->HeapBeginPtr();
        puVar13 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                      pvVar1->end();
        if (this_07 != puVar13) {
            do {
                pGVar14 = (GeometryBatchInstance*)
                    std::unique_ptr<GeometryBatchInstance,
                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator*(this_07);
                local_31 = bVar21;
                MakeUniquePool<GeometryBatchInstance, 3072>::MakeUnique<GeometryBatchInstance&, Model&, bool>(
                    (MakeUniquePool<GeometryBatchInstance, 3072>*)&local_78, pGVar14, local_68, &local_31);
                this_03->push_back((unique_ptr*)&local_78);
                local_78.~unique_ptr();
                this_07 = this_07 + 8;
            } while (this_07 != puVar13);
        }
        pvVar1 = (vector<eastl::pair<int, int>, eastl::allocator>*)(param_1 + 688);
        uVar12 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar1);
        this_04->reserve(uVar12);
        this_08 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                      pvVar1->HeapBeginPtr();
        puVar15 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                      pvVar1->end();
        if (this_08 != puVar15) {
            do {
                pBVar16 = (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator*(this_08);
                local_31 = bVar21;
                MakeUniquePool<BillboardBatchInstance, 64>::MakeUnique<BillboardBatchInstance&, Model&, bool>(
                    (MakeUniquePool<BillboardBatchInstance, 64>*)&local_78, pBVar16, local_68, &local_31);
                this_04->push_back((unique_ptr*)&local_78);
                local_78.~unique_ptr();
                this_08 = this_08 + 8;
            } while (this_08 != puVar15);
        }
        pvVar20 = (vector*)(param_1 + 720);
        if (local_5c == 2) {
            eastl::vector<shared_ptr<ModelParticleSource>, eastl::allocator>::operator=(
                (vector<shared_ptr<ModelParticleSource>, eastl::allocator>*)this_05, pvVar20);
            eastl::vector<shared_ptr<ModelParticleSource>, eastl::allocator>::operator=(
                (vector<shared_ptr<ModelParticleSource>, eastl::allocator>*)this_06, (vector*)(param_1 + 752));
        } else {
            psVar17 = (shared_ptr<ModelParticleSource>*)pvVar20->HeapBeginPtr();
            psVar18 = (shared_ptr<ModelParticleSource>*)pvVar20->end();
            if (psVar17 != psVar18) {
                do {
                    auVar22 = shared_ptr<ModelParticleSource>::operator*(psVar17);
                    MakeSharedPool<ModelParticleSource, 768>::MakeShared<ModelParticleSource&>(&local_78, auVar22._0_8_,
                                                                                               auVar22._8_8_);
                    eastl::vector<shared_ptr<ModelParticleSource>, eastl::allocator>::emplace_back<
                        shared_ptr<ModelParticleSource>>(
                        (vector<shared_ptr<ModelParticleSource>, eastl::allocator>*)this_05, &local_78);
                    local_78.~shared_ptr();
                    psVar17 = psVar17 + 16;
                } while (psVar17 != psVar18);
            }
            psVar17 = (shared_ptr<ModelParticleSource>*)((param_1 + 752))->HeapBeginPtr();
            psVar18 = (shared_ptr<ModelParticleSource>*)((param_1 + 752))->end();
            if (psVar17 != psVar18) {
                do {
                    auVar22 = shared_ptr<ModelParticleSource>::operator*(psVar17);
                    MakeSharedPool<ModelParticleSource, 768>::MakeShared<ModelParticleSource&>(&local_78, auVar22._0_8_,
                                                                                               auVar22._8_8_);
                    eastl::vector<shared_ptr<ModelParticleSource>, eastl::allocator>::emplace_back<
                        shared_ptr<ModelParticleSource>>(
                        (vector<shared_ptr<ModelParticleSource>, eastl::allocator>*)this_06, &local_78);
                    local_78.~shared_ptr();
                    psVar17 = psVar17 + 16;
                } while (psVar17 != psVar18);
            }
        }
        this_09 = (shared_ptr<VFXAttachmentInfo>*)((param_1 + 784))->HeapBeginPtr();
        psVar19 = (shared_ptr<VFXAttachmentInfo>*)((param_1 + 784))->end();
        if (this_09 != psVar19) {
            do {
                auVar22 = shared_ptr<VFXAttachmentInfo>::operator*(this_09);
                MakeSharedPool<VFXAttachmentInfo, 768>::MakeShared<VFXAttachmentInfo&>(&local_78, auVar22._0_8_,
                                                                                       auVar22._8_8_);
                eastl::vector<shared_ptr<VFXAttachmentInfo>, eastl::allocator>::emplace_back<
                    shared_ptr<VFXAttachmentInfo>>((vector<shared_ptr<VFXAttachmentInfo>, eastl::allocator>*)&field_784,
                                                   &local_78);
                local_78.~shared_ptr();
                this_09 = this_09 + 16;
            } while (this_09 != psVar19);
        }
        cVar10 = IsLoaded(local_68);
        if (cVar10 != '\0') {
            if (local_5c == 2) {
                SetBatchAtlasReferences(local_68);
            } else {
                ConstructFinishAndUpload(local_68);
            }
        }
        eastl::vector<int, eastl::allocator>::operator=((vector<int, eastl::allocator>*)&field_384,
                                                        (vector*)(param_1 + 384));
        Array<LabelData, eastl::allocator>::operator=((Array<LabelData, eastl::allocator>*)&field_816,
                                                      (Array*)(param_1 + 816));
        (&field_856, 16)->reserve();
        (&field_896, 16)->reserve();
    }

    // 0x100817040, 192 bytes, placed by class name
    // Model::SetTextureAtlasReferences(eastl::fixed_vector<shared_ptr<TextureAtlasReference>, 1ul, true, eastl::allocator> const&)
    void Model::SetTextureAtlasReferences(fixed_vector* param_1) {
        bool bVar1;
        char cVar2;
        shared_ptr* psVar3;
        shared_ptr* psVar4;
        undefined1* this_00;

        this_00 = m_textureAtlasReferences;
        psVar4 = (shared_ptr*)this_00->HeapBeginPtr();
        psVar3 = (shared_ptr*)this_00->end();
        for (; psVar4 != psVar3; psVar4 = psVar4 + 1) {
            bVar1 = shared_ptr::operator_cast_to_bool(psVar4);
            if (bVar1) {
                shared_ptr<TextureAtlasReference>::reset();
            }
        }
        this_00->clear();
        cVar2 = param_1->empty();
        if (cVar2 == '\0') {
            psVar4 = (shared_ptr*)param_1->HeapBeginPtr();
            psVar3 = (shared_ptr*)param_1->end();
            for (; psVar4 != psVar3; psVar4 = psVar4 + 1) {
                bVar1 = shared_ptr::operator_cast_to_bool(psVar4);
                if (bVar1) {
                    eastl::fixed_vector<shared_ptr<TextureAtlasReference>, 1ul, true, eastl::allocator>::push_back(
                        (shared_ptr*)this_00);
                }
            }
        }
    }

    // 0x1008177a0, 528 bytes, placed by class name
    // Model::SetBatchAtlasReferences()
    void Model::SetBatchAtlasReferences() {
        undefined1* this_00;
        undefined1* this_01;
        bool bVar1;
        bool bVar2;
        char cVar3;
        long lVar4;
        BillboardBatchInstance* pBVar5;
        BillboardBatch* pBVar6;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        GeometryBatchInstance* pGVar7;
        ParticleMaterial* this_03;
        ulong uVar8;
        shared_ptr* psVar9;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_04;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar10;
        long lVar11;
        GeometryBatch* pGVar12;
        ModelMaterial* pMVar13;
        ulong uVar14;
        ulong uVar15;

        this_00 = &field_688;
        this_01 = m_textureAtlasReferences;
        lVar4 = this_00->size();
        if (lVar4 != 0) {
            uVar14 = 0;
            do {
                this_02 =
                    (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                        eastl::vector<std::unique_ptr<BillboardBatchInstance,
                                                      MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                      eastl::allocator>::
                        operator[](
                            (vector<std::unique_ptr<BillboardBatchInstance,
                                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                    eastl::allocator>*)this_00,
                            uVar14);
                cVar3 = this_01->empty();
                if (cVar3 == '\0') {
                    pGVar7 = (GeometryBatchInstance*)std::unique_ptr<
                                 BillboardBatchInstance,
                                 MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
                    this_03 = (ParticleMaterial*)pGVar7->GetMaterial();
                    uVar8 = this_01->size();
                    uVar15 = uVar14;
                    if (uVar8 < 2) {
                        uVar15 = 0;
                    }
                    psVar9 = (shared_ptr*)
                        eastl::vector<shared_ptr<TextureAtlasReference>,
                                      eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<shared_ptr<TextureAtlasReference>,
                                           eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       this_01,
                                   uVar15);
                    this_03->SetTextureAtlasReference(psVar9);
                }
                pGVar7 = (GeometryBatchInstance*)std::unique_ptr<
                             BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
                bVar1 = (bool)pGVar7->GetMaterial();
                pBVar5 = (BillboardBatchInstance*)std::unique_ptr<
                             BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
                pBVar6 = (BillboardBatch*)pBVar5->GetBillboardBatch();
                bVar2 = (bool)pBVar6->HasBones();
                pBVar5 = (BillboardBatchInstance*)std::unique_ptr<
                             BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
                pBVar6 = (BillboardBatch*)pBVar5->GetBillboardBatch();
                pBVar6->HasJoints();
                BillboardMaterial::InitRenderPassEffects(bVar1, bVar2);
                uVar14 = uVar14 + 1;
                uVar15 = this_00->size();
            } while (uVar14 < uVar15);
        }
        this_04 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar10 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->end();
        if (this_04 != puVar10) {
            lVar4 = 0;
            do {
                pGVar7 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_04);
                pGVar12 = (GeometryBatch*)pGVar7->GetGeometryBatch();
                cVar3 = pGVar12->IsHidden();
                if (cVar3 == '\0') {
                    cVar3 = this_01->empty();
                    if (cVar3 == '\0') {
                        pGVar7 =
                            (GeometryBatchInstance*)std::unique_ptr<
                                GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_04);
                        pMVar13 = (ModelMaterial*)pGVar7->GetMaterial();
                        uVar14 = this_01->size();
                        if (uVar14 < 2) {
                            uVar14 = 0;
                        } else {
                            lVar11 = this_00->size();
                            uVar14 = lVar11 + lVar4;
                        }
                        psVar9 = (shared_ptr*)
                            eastl::vector<shared_ptr<TextureAtlasReference>,
                                          eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<shared_ptr<TextureAtlasReference>,
                                        eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    this_01,
                                uVar14);
                        pMVar13->SetTextureAtlasReference(psVar9);
                    }
                    lVar4 = lVar4 + 1;
                    pGVar7 = (GeometryBatchInstance*)std::unique_ptr<
                                 GeometryBatchInstance,
                                 MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_04);
                    pMVar13 = (ModelMaterial*)pGVar7->GetMaterial();
                    pGVar7 = (GeometryBatchInstance*)std::unique_ptr<
                                 GeometryBatchInstance,
                                 MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_04);
                    pGVar12 = (GeometryBatch*)pGVar7->GetGeometryBatch();
                    bVar1 = (bool)pGVar12->HasBones();
                    pMVar13->InitRenderPassEffects(bVar1);
                }
                this_04 = this_04 + 8;
            } while (this_04 != puVar10);
        }
    }

    // 0x1008179b0, 256 bytes, placed by class name
    // Model::ConstructFinishAndUpload()
    void Model::ConstructFinishAndUpload() {
        char* pcVar1;
        future local_d8[8];
        __2 local_d0;
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_416[0] != '\x03') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_constructedState == ModelConstructedState::DATA_MAT_AND_ATLAS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1166, (char*)0);
        }
        field_416[0] = 4;
        pcVar1 = (char*)Instance();
        local_d0.field_0 = this;
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            Model::ConstructFinishAndUpload()::__2, void>(local_c8, &local_d0);
        local_d8->RunOnThreadPoolRenderContext(pcVar1, (function*)"ConstructFinishAndUpload");
        std::future<void>::operator=((future<void>*)&field_648, local_d8);
        local_d8->~future();
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100817ab0, 16 bytes, complete-object constructor, placed by class name
    // Model::Model(Model const&, ModelCopyType): jumps straight to the base-object constructor

    // 0x100817ac0, 400 bytes, base-object destructor, placed by class name
    // Model::~Model()
    void Model::~Model() {
        field_0 = &PTR__Model_100f157b8;
        m_NumExtant = m_NumExtant + -1;
        if ((&field_648)->valid() != '\0') {
            std::future<void>::wait();
        }
        (&field_896)->~vector_map();
        (&field_856)->~vector_map();
        m_geometryQuery->~shared_ptr();
        (&field_816)->~Array();
        (&field_784)->~vector();
        (&field_752)->~vector();
        (&field_720)->~vector();
        (&field_688)->~BatchDestroy();
        (&field_656)->~BatchDestroy();
        (&field_648)->~future();
        m_textureAtlasReferences->~BatchDestroy();
        (&field_384)->~vector();
        (&field_352)->~vector();
    }

    // 0x100817c50, 16 bytes, complete-object destructor, placed by class name
    // Model::~Model(): jumps straight to the base-object destructor

    // 0x100817c60, 32 bytes, deleting destructor, placed by class name
    // Model::~Model()
    void Model::~Model() {
        ~Model(this);
        operator_delete(this);
    }

    // 0x100817c80, 416 bytes, placed by class name
    // Model::SetExternalID(int, bool)
    void Model::SetExternalID(int param_1, bool param_2) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar2;
        BillboardBatchInstance* this_03;
        shared_ptr<ModelParticleSource>* psVar3;
        shared_ptr<ModelParticleSource>* psVar4;
        ModelParticleSource* pMVar5;
        shared_ptr<VFXAttachmentInfo>* this_04;
        shared_ptr<VFXAttachmentInfo>* psVar6;
        PlayerGroupMember* pPVar7;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01->ChangeSourceExternalID(m_externalID, param_1);
        }
        this_02 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            this_03 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
            this_03->ChangeSourceExternalID(m_externalID, param_1);
        }
        if (param_2) {
            psVar3 = (shared_ptr<ModelParticleSource>*)(&field_720)->HeapBeginPtr();
            psVar4 = (shared_ptr<ModelParticleSource>*)(&field_720)->end();
            for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
                pMVar5 = (ModelParticleSource*)shared_ptr<ModelParticleSource>::operator->(psVar3);
                pMVar5->SetSourceModelExternalID(param_1);
            }
            psVar3 = (shared_ptr<ModelParticleSource>*)(&field_752)->HeapBeginPtr();
            psVar4 = (shared_ptr<ModelParticleSource>*)(&field_752)->end();
            for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
                pMVar5 = (ModelParticleSource*)shared_ptr<ModelParticleSource>::operator->(psVar3);
                pMVar5->SetSourceModelExternalID(param_1);
            }
            this_04 = (shared_ptr<VFXAttachmentInfo>*)(&field_784)->HeapBeginPtr();
            psVar6 = (shared_ptr<VFXAttachmentInfo>*)(&field_784)->end();
            for (; this_04 != psVar6; this_04 = this_04 + 16) {
                pPVar7 = (PlayerGroupMember*)shared_ptr<VFXAttachmentInfo>::operator->(this_04);
                pPVar7->SetStatus(param_1);
            }
        }
        m_externalID = param_1;
    }

    // 0x100817e40, 208 bytes, placed by class name
    // Model::IsTransformed() const
    ulong Model::IsTransformed() {
        char cVar1;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar2;
        GeometryBatchInstance* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar3;
        BillboardBatchInstance* pBVar4;
        undefined1* this_03;
        ulong uVar5;
        bool bVar6;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar2; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            cVar1 = this_01->IsTransformed();
            if (cVar1 != '\0') {
                uVar5 = CONCAT71((int7)((ulong)this >> 8), 1);
                goto LAB_100817efa;
            }
        }
        this_03 = &field_688;
        this_02 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                      this_03->HeapBeginPtr();
        puVar3 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                     this_03->end();
        bVar6 = this_02 == puVar3;
        if (!bVar6) {
            pBVar4 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
            cVar1 = pBVar4->IsTransformed();
            while (cVar1 == '\0') {
                this_02 = this_02 + 8;
                bVar6 = this_02 == puVar3;
                if (bVar6)
                    break;
                pBVar4 = (BillboardBatchInstance*)std::unique_ptr<
                             BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
                cVar1 = pBVar4->IsTransformed();
            }
        }
        uVar5 = CONCAT71((int7)((ulong)this_03 >> 8), bVar6) ^ 1;
    LAB_100817efa:
        return uVar5 & 4294967295;
    }

    // 0x100817f30, 64 bytes, placed by class name
    // Model::StartTransform()
    void Model::StartTransform() {
        if (field_936 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      222, (char*)0);
        }
        field_936 = 1;
    }

    // 0x100817f70, 256 bytes, placed by class name
    // Model::EndTransform(bool)
    void Model::EndTransform(bool param_1) {
        undefined4 uVar1;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar2;
        GeometryBatchInstance* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar3;
        BillboardBatchInstance* this_03;

        if (field_936 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      230, (char*)0);
        }
        field_936 = 0;
        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar2; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01->SetTransformed(param_1);
        }
        this_02 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar3 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_02 != puVar3; this_02 = this_02 + 8) {
            this_03 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
            this_03->SetTransformed(param_1);
        }
        uVar1 = NewModelRawUniqueID();
        SetBussID(uVar1);
    }

    // 0x1008180d0, 640 bytes, placed by class name
    // Model::UpdateAABB()
    void Model::UpdateAABB() {
        undefined1* this_00;
        GeometryBatchInstance* pGVar1;
        GeometryBatch* this_01;
        BillboardBatchInstance* pBVar2;
        BillboardBatch* this_02;
        NXTPixToolkit* pNVar3;
        ModelParticleSource* this_03;
        Logger* this_04;
        Vector2T<int>* this_05;
        char cVar4;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar5;
        AABB* pAVar6;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar7;
        shared_ptr<ModelParticleSource>* psVar8;
        shared_ptr<VFXAttachmentInfo>* psVar9;
        array<VFXAttachmentInfo::VertexBonePos, 3ul>* this_06;
        Vector3T* pVVar10;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_07;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_08;
        shared_ptr<ModelParticleSource>* psVar11;
        Vector3T* pVVar12;
        shared_ptr<VFXAttachmentInfo>* this_09;

        this_00 = &field_16;
        this_00->Reset();
        this_07 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar5 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_07 != puVar5; this_07 = this_07 + 8) {
            pGVar1 = (GeometryBatchInstance*)std::unique_ptr<
                         GeometryBatchInstance,
                         MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_07);
            this_01 = (GeometryBatch*)pGVar1->GetGeometryBatch();
            this_01->UpdateAABB();
            pGVar1 = (GeometryBatchInstance*)std::unique_ptr<
                         GeometryBatchInstance,
                         MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_07);
            pAVar6 = (AABB*)pGVar1->GetAABB();
            cVar4 = pAVar6->IsValid();
            if (cVar4 != '\0') {
                this_00->AddAABB(pAVar6);
            }
        }
        this_08 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar7 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_08 != puVar7; this_08 = this_08 + 8) {
            pBVar2 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_08);
            this_02 = (BillboardBatch*)pBVar2->GetBillboardBatch();
            this_02->UpdateAABB();
            pBVar2 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_08);
            pAVar6 = (AABB*)pBVar2->GetAABB();
            cVar4 = pAVar6->IsValid();
            if (cVar4 != '\0') {
                this_00->AddAABB(pAVar6);
            }
        }
        psVar11 = (shared_ptr<ModelParticleSource>*)(&field_720)->HeapBeginPtr();
        psVar8 = (shared_ptr<ModelParticleSource>*)(&field_720)->end();
        for (; psVar11 != psVar8; psVar11 = psVar11 + 16) {
            pNVar3 = (NXTPixToolkit*)shared_ptr<ModelParticleSource>::operator->(psVar11);
            pVVar12 = (Vector3T*)pNVar3->GetScreen();
            this_00->AddPoint(pVVar12);
            this_03 = (ModelParticleSource*)shared_ptr<ModelParticleSource>::operator->(psVar11);
            pVVar12 = (Vector3T*)this_03->GetVertex2();
            this_00->AddPoint(pVVar12);
            this_04 = (Logger*)shared_ptr<ModelParticleSource>::operator->(psVar11);
            pVVar12 = (Vector3T*)this_04->GetLogStreams();
            this_00->AddPoint(pVVar12);
        }
        psVar11 = (shared_ptr<ModelParticleSource>*)(&field_752)->HeapBeginPtr();
        psVar8 = (shared_ptr<ModelParticleSource>*)(&field_752)->end();
        for (; psVar11 != psVar8; psVar11 = psVar11 + 16) {
            pNVar3 = (NXTPixToolkit*)shared_ptr<ModelParticleSource>::operator->(psVar11);
            pVVar12 = (Vector3T*)pNVar3->GetScreen();
            this_00->AddPoint(pVVar12);
        }
        this_09 = (shared_ptr<VFXAttachmentInfo>*)(&field_784)->HeapBeginPtr();
        psVar9 = (shared_ptr<VFXAttachmentInfo>*)(&field_784)->end();
        for (; this_09 != psVar9; this_09 = this_09 + 16) {
            this_05 = (Vector2T<int>*)shared_ptr<VFXAttachmentInfo>::operator->(this_09);
            this_06 = (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)this_05->y();
            pVVar12 = (Vector3T*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::begin(this_06);
            pVVar10 = (Vector3T*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::end(this_06);
            for (; pVVar12 != pVVar10; pVVar12 = pVVar12 + 20) {
                this_00->AddPoint(pVVar12);
            }
        }
    }

    // 0x100818370, 176 bytes, placed by class name
    // Model::SetRenderFlags(unsigned int)
    void Model::SetRenderFlags(uint param_1) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        long lVar2;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar3;
        ServerConnectionWorkItem* pSVar4;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            lVar2 =
                std::unique_ptr<GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            new ((lVar2 + 8)) oldscape::ServerConnectionWorkItem(param_1);
        }
        this_01 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar3 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_01 != puVar3; this_01 = this_01 + 8) {
            pSVar4 =
                (ServerConnectionWorkItem*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_01);
            oldscape::ServerConnectionWorkItem::ServerConnectionWorkItem(pSVar4, param_1);
        }
    }

    // 0x100818420, 176 bytes, placed by class name
    // Model::HasAlphaBlendedFaces() const
    ulong Model::HasAlphaBlendedFaces() {
        char cVar1;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar2;
        GeometryBatchInstance* pGVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar4;
        undefined* puVar5;
        undefined8 unaff_R14;
        undefined7 uVar7;
        ulong uVar6;
        bool bVar8;

        cVar1 = (&field_688)->empty();
        uVar7 = (undefined7)((ulong)unaff_R14 >> 8);
        uVar6 = CONCAT71(uVar7, 1);
        if (cVar1 != '\0') {
            this_00 = (unique_ptr<GeometryBatchInstance,
                                  MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                          ->HeapBeginPtr();
            puVar2 = (unique_ptr<GeometryBatchInstance,
                                 MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                         ->end();
            bVar8 = this_00 == puVar2;
            if (!bVar8) {
                pGVar3 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
                pAVar4 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                std::default_delete<LoadingScreenScript::AnimLayer>>,
                                eastl::allocator>*)pGVar3->GetMaterial();
                puVar5 = (undefined*)pAVar4->data();
                if (puVar5 != AlphaMode::ALPHA_BLENDED) {
                    do {
                        this_00 = this_00 + 8;
                        bVar8 = this_00 == puVar2;
                        if (bVar8)
                            break;
                        pGVar3 =
                            (GeometryBatchInstance*)std::unique_ptr<
                                GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
                        pAVar4 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                        std::default_delete<LoadingScreenScript::AnimLayer>>,
                                        eastl::allocator>*)pGVar3->GetMaterial();
                        puVar5 = (undefined*)pAVar4->data();
                    } while (puVar5 != AlphaMode::ALPHA_BLENDED);
                }
            }
            uVar6 = CONCAT71(uVar7, bVar8) ^ 1;
        }
        return uVar6 & 4294967295;
    }

    // 0x1008184d0, 160 bytes, placed by class name
    // Model::HasOpaqueOrTestedFaces() const
    ulong Model::HasOpaqueOrTestedFaces() {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* pGVar2;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar3;
        undefined* puVar4;
        undefined1* this_01;
        bool bVar5;

        this_01 = &field_656;
        this_00 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                      this_01->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     this_01->end();
        bVar5 = this_00 == puVar1;
        if (!bVar5) {
            pGVar2 = (GeometryBatchInstance*)std::unique_ptr<
                         GeometryBatchInstance,
                         MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            pAVar3 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                            std::default_delete<LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>*)pGVar2->GetMaterial();
            puVar4 = (undefined*)pAVar3->data();
            if (puVar4 == AlphaMode::ALPHA_BLENDED) {
                do {
                    this_00 = this_00 + 8;
                    bVar5 = this_00 == puVar1;
                    if (bVar5)
                        break;
                    pGVar2 = (GeometryBatchInstance*)std::unique_ptr<
                                 GeometryBatchInstance,
                                 MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
                    pAVar3 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                    std::default_delete<LoadingScreenScript::AnimLayer>>,
                                    eastl::allocator>*)pGVar2->GetMaterial();
                    puVar4 = (undefined*)pAVar3->data();
                } while (puVar4 == AlphaMode::ALPHA_BLENDED);
            }
        }
        return (CONCAT71((int7)((ulong)this_01 >> 8), bVar5) ^ 1) & 4294967295;
    }

    // 0x100818570, 112 bytes, placed by class name
    // Model::SetPointLightIndicesVertexData(bool)
    void Model::SetPointLightIndicesVertexData(bool param_1) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01->SetPointLightIndicesVertexData(param_1);
        }
    }

    // 0x100818600, 32 bytes, placed by class name
    // Model::SetHighlight(float, math::Vector4T<float> const&)
    void Model::SetHighlight(float param_1, Vector4T* param_2) {
        SetHighlight(this, param_1, param_2, (float)(-(uint)(param_1 == 0.0) & 1065353216));
    }

    // 0x100818620, 64 bytes, placed by class name
    // Model::SetHighlight(float, math::Vector4T<float> const&, float)
    void Model::SetHighlight(float param_1, Vector4T* param_2, float param_3) {
        math::Rect<float>::operator=((Rect<float>*)&m_highlightColour, (Rect*)param_2);
        m_highlightScale = param_1;
        m_highlightSilhouetteAlpha = param_3;
    }

    // 0x100818660, 16 bytes, placed by class name
    // Model::SetHighlightsIgnoreDepth(bool)
    void Model::SetHighlightsIgnoreDepth(bool param_1) {
        m_highlightsIgnoreDepth = param_1;
    }

    // 0x100818670, 32 bytes, placed by class name
    // Model::SetHighlightedSection(float, math::Vector4T<float> const&)
    void Model::SetHighlightedSection(float param_1, Vector4T* param_2) {
        m_highlightedSectionScale = param_1;
        math::Rect<float>::operator=((Rect<float>*)&m_highlightedSectionColour, (Rect*)param_2);
    }

    // 0x100818690, 192 bytes, placed by class name
    // Model::SetCastsShadows(bool)
    void Model::SetCastsShadows(bool param_1) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        long lVar2;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar3;
        Drawable* this_02;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            lVar2 =
                std::unique_ptr<GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            ((lVar2 + 8))->SetRenderFlag(1, param_1);
        }
        this_01 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar3 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_01 != puVar3; this_01 = this_01 + 8) {
            this_02 =
                (Drawable*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_01);
            this_02->SetRenderFlag(1, param_1);
        }
    }

    // 0x100818750, 224 bytes, placed by class name
    // Model::GetCastsShadows() const
    ulong Model::GetCastsShadows() {
        char cVar1;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar2;
        long lVar3;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar4;
        Drawable* pDVar5;
        undefined1* this_02;
        ulong uVar6;
        bool bVar7;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar2; this_00 = this_00 + 8) {
            lVar3 =
                std::unique_ptr<GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            cVar1 = ((lVar3 + 8))->GetRenderFlag(1);
            if (cVar1 != '\0') {
                uVar6 = CONCAT71((int7)((ulong)this >> 8), 1);
                goto LAB_10081881f;
            }
        }
        this_02 = &field_688;
        this_01 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                      this_02->HeapBeginPtr();
        puVar4 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                     this_02->end();
        bVar7 = this_01 == puVar4;
        if (!bVar7) {
            pDVar5 =
                (Drawable*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_01);
            cVar1 = pDVar5->GetRenderFlag(1);
            while (cVar1 == '\0') {
                this_01 = this_01 + 8;
                bVar7 = this_01 == puVar4;
                if (bVar7)
                    break;
                pDVar5 = (Drawable*)std::unique_ptr<
                             BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_01);
                cVar1 = pDVar5->GetRenderFlag(1);
            }
        }
        uVar6 = CONCAT71((int7)((ulong)this_02 >> 8), bVar7) ^ 1;
    LAB_10081881f:
        return uVar6 & 4294967295;
    }

    // 0x100818830, 160 bytes, placed by class name
    // Model::ClearAnimationState()
    void Model::ClearAnimationState() {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar2;
        BillboardBatchInstance* this_03;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01->ClearAnimationState();
        }
        this_02 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            this_03 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
            this_03->ClearAnimationState();
        }
    }

    // 0x100818910, 176 bytes, placed by class name
    // Model::SetAnimationStateProvider(shared_ptr<AnimationStateProvider> const&)
    void Model::SetAnimationStateProvider(shared_ptr* param_1) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar2;
        BillboardBatchInstance* this_03;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01->SetAnimationStateProvider(param_1);
        }
        this_02 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            this_03 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
            this_03->SetAnimationStateProvider(param_1);
        }
    }

    // 0x1008189c0, 224 bytes, placed by class name
    // Model::UpdateAnimation(ThreadPool&, unsigned int)
    void Model::UpdateAnimation(ThreadPool* param_1, uint param_2) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar2;
        BillboardBatchInstance* this_03;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01->UpdateAnimation(param_1, param_2, (Matrix44T*)&m_worldTransform);
        }
        this_02 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            this_03 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
            this_03->UpdateAnimation(param_1, param_2, (Matrix44T*)&m_worldTransform);
        }
        field_938 = 1;
    }

    // 0x100818aa0, 160 bytes, placed by class name
    // Model::EndUpdateAnimation()
    void Model::EndUpdateAnimation() {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar2;
        BillboardBatchInstance* this_03;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01->EndUpdateAnimation();
        }
        this_02 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            this_03 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
            this_03->EndUpdateAnimation();
        }
    }

    // 0x100818b40, 112 bytes, placed by class name
    // Model::IsReadyToConstruct(RT7Core*)
    undefined8 Model::IsReadyToConstruct(RT7Core* param_1) {
        RenderDevice* this;
        MaterialManager* this_00;

        if (param_1 == (RT7Core*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("rt7Core != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      450, (char*)0);
        }
        this = (RenderDevice*)param_1->Instance();
        if (GetReadyState() == 0) {
            this_00 = (MaterialManager*)param_1->GetMaterialManager();
            if (this_00->MaterialsReady() != '\0') {
                return BillboardManager::BillboardsReady();
            }
        }
        return 0;
    }

    // 0x100818bd0, 752 bytes, placed by class name
    // Model::Append(Model&&)
    void Model::Append(Model* param_1) {
        Model* pMVar1;
        ModelConstructedState MVar2;
        char cVar3;
        ModelConstructedState* pMVar4;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar5;
        GeometryBatchInstance* pGVar6;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar7;
        BillboardBatchInstance* pBVar8;
        shared_ptr* psVar9;
        shared_ptr* psVar10;
        undefined8 uVar11;
        undefined8 uVar12;
        undefined8 uVar13;
        int* piVar14;
        int* piVar15;
        undefined1* puVar16;
        MakeUniquePool<GeometryBatchInstance, 3072> local_48[8];
        vector<std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
               eastl::allocator>* local_40;
        Model* local_38;

        if (field_936 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      459, (char*)0);
        }
        MVar2 = (ModelConstructedState)param_1->field_416[0];
        if (field_416[0] != '\0') {
            if (MVar2 == (ModelConstructedState)0)
                goto LAB_100818c3f;
            pMVar4 = std::min<ModelConstructedState>((ModelConstructedState*)field_416,
                                                     (ModelConstructedState*)param_1->field_416);
            MVar2 = *pMVar4;
        }
        field_416[0] = MVar2;
    LAB_100818c3f:
        cVar3 = (&param_1->field_16)->IsValid();
        if (cVar3 != '\0') {
            (&field_16, (AABB*)&param_1->field_16)->AddAABB();
        }
        puVar16 = &param_1->field_656;
        local_38 = param_1;
        this_00 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                      puVar16->HeapBeginPtr();
        local_40 =
            (vector<
                std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                eastl::allocator>*)puVar16;
        puVar5 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     puVar16->end();
        if (this_00 != puVar5) {
            do {
                pGVar6 = (GeometryBatchInstance*)
                    std::unique_ptr<GeometryBatchInstance,
                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator*(this_00);
                MakeUniquePool<GeometryBatchInstance, 3072>::MakeUnique<GeometryBatchInstance, Model&>(local_48, pGVar6,
                                                                                                       this);
                (&field_656, (unique_ptr*)local_48)->push_back();
                local_48->~unique_ptr();
                this_00 = this_00 + 8;
            } while (this_00 != puVar5);
        }
        eastl::vector<
            std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
            eastl::allocator>::clear(local_40);
        puVar16 = &local_38->field_688;
        this_01 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                      puVar16->HeapBeginPtr();
        local_40 =
            (vector<
                std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                eastl::allocator>*)puVar16;
        puVar7 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                     puVar16->end();
        if (this_01 != puVar7) {
            do {
                pBVar8 = (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator*(this_01);
                MakeUniquePool<BillboardBatchInstance, 64>::MakeUnique<BillboardBatchInstance, Model&>(
                    (MakeUniquePool<BillboardBatchInstance, 64>*)local_48, pBVar8, this);
                (&field_688, (unique_ptr*)local_48)->push_back();
                local_48->~unique_ptr();
                this_01 = this_01 + 8;
            } while (this_01 != puVar7);
        }
        local_40->clear();
        puVar16 = &local_38->field_720;
        psVar9 = (shared_ptr*)puVar16->HeapBeginPtr();
        psVar10 = (shared_ptr*)puVar16->end();
        if (psVar9 != psVar10) {
            do {
                eastl::vector<shared_ptr<ModelParticleSource>, eastl::allocator>::emplace_back<
                    shared_ptr<ModelParticleSource> const&>(
                    (vector<shared_ptr<ModelParticleSource>, eastl::allocator>*)&field_720, psVar9);
                psVar9 = psVar9 + 1;
            } while (psVar9 != psVar10);
        }
        puVar16->clear();
        puVar16 = &local_38->field_752;
        psVar9 = (shared_ptr*)puVar16->HeapBeginPtr();
        psVar10 = (shared_ptr*)puVar16->end();
        if (psVar9 != psVar10) {
            do {
                eastl::vector<shared_ptr<ModelParticleSource>, eastl::allocator>::emplace_back<
                    shared_ptr<ModelParticleSource> const&>(
                    (vector<shared_ptr<ModelParticleSource>, eastl::allocator>*)&field_752, psVar9);
                psVar9 = psVar9 + 1;
            } while (psVar9 != psVar10);
        }
        puVar16->clear();
        pMVar1 = local_38;
        puVar16 = &local_38->field_784;
        uVar11 = puVar16->HeapBeginPtr();
        uVar12 = puVar16->end();
        uVar13 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        eastl::move<shared_ptr<VFXAttachmentInfo>*,
                    eastl::back_insert_iterator<eastl::vector<shared_ptr<VFXAttachmentInfo>, eastl::allocator>>>(
            uVar11, uVar12, uVar13);
        puVar16->clear();
        piVar14 = (int*)(&field_384)->end();
        piVar15 = (int*)(&pMVar1->field_384)->HeapBeginPtr();
        (&pMVar1->field_384)->end();
        eastl::vector<int, eastl::allocator>::insert<int*>(&field_384, piVar14, piVar15);
    }

    // 0x100819160, 672 bytes, placed by class name
    // Model::Append(Model const&)
    void Model::Append(Model* param_1) {
        ModelConstructedState MVar1;
        char cVar2;
        ModelConstructedState* pMVar3;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar4;
        GeometryBatchInstance* pGVar5;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar6;
        BillboardBatchInstance* pBVar7;
        shared_ptr* psVar8;
        shared_ptr* psVar9;
        undefined8 uVar10;
        undefined8 uVar11;
        undefined8 uVar12;
        int* piVar13;
        int* piVar14;
        MakeUniquePool<GeometryBatchInstance, 3072> local_40[15];
        bool local_31;

        if (field_936 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      509, (char*)0);
        }
        MVar1 = (ModelConstructedState)param_1->field_416[0];
        if (field_416[0] != '\0') {
            if (MVar1 == (ModelConstructedState)0)
                goto LAB_1008191cd;
            pMVar3 = std::min<ModelConstructedState>((ModelConstructedState*)field_416,
                                                     (ModelConstructedState*)param_1->field_416);
            MVar1 = *pMVar3;
        }
        field_416[0] = MVar1;
    LAB_1008191cd:
        cVar2 = (&param_1->field_16)->IsValid();
        if (cVar2 != '\0') {
            (&field_16, (AABB*)&param_1->field_16)->AddAABB();
        }
        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&param_1->field_656)
                      ->HeapBeginPtr();
        puVar4 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&param_1->field_656)
                     ->end();
        if (this_00 != puVar4) {
            do {
                pGVar5 = (GeometryBatchInstance*)
                    std::unique_ptr<GeometryBatchInstance,
                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator*(this_00);
                local_31 = false;
                MakeUniquePool<GeometryBatchInstance, 3072>::MakeUnique<GeometryBatchInstance&, Model&, bool>(
                    local_40, pGVar5, this, &local_31);
                (&field_656, (unique_ptr*)local_40)->push_back();
                local_40->~unique_ptr();
                this_00 = this_00 + 8;
            } while (this_00 != puVar4);
        }
        this_01 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&param_1->field_688)
                      ->HeapBeginPtr();
        puVar6 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&param_1->field_688)
                     ->end();
        if (this_01 != puVar6) {
            do {
                pBVar7 = (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator*(this_01);
                local_31 = false;
                MakeUniquePool<BillboardBatchInstance, 64>::MakeUnique<BillboardBatchInstance&, Model&, bool>(
                    (MakeUniquePool<BillboardBatchInstance, 64>*)local_40, pBVar7, this, &local_31);
                (&field_688, (unique_ptr*)local_40)->push_back();
                local_40->~unique_ptr();
                this_01 = this_01 + 8;
            } while (this_01 != puVar6);
        }
        psVar8 = (shared_ptr*)(&param_1->field_720)->HeapBeginPtr();
        psVar9 = (shared_ptr*)(&param_1->field_720)->end();
        if (psVar8 != psVar9) {
            do {
                eastl::vector<shared_ptr<ModelParticleSource>, eastl::allocator>::emplace_back<
                    shared_ptr<ModelParticleSource> const&>(
                    (vector<shared_ptr<ModelParticleSource>, eastl::allocator>*)&field_720, psVar8);
                psVar8 = psVar8 + 1;
            } while (psVar8 != psVar9);
        }
        psVar8 = (shared_ptr*)(&param_1->field_752)->HeapBeginPtr();
        psVar9 = (shared_ptr*)(&param_1->field_752)->end();
        if (psVar8 != psVar9) {
            do {
                eastl::vector<shared_ptr<ModelParticleSource>, eastl::allocator>::emplace_back<
                    shared_ptr<ModelParticleSource> const&>(
                    (vector<shared_ptr<ModelParticleSource>, eastl::allocator>*)&field_752, psVar8);
                psVar8 = psVar8 + 1;
            } while (psVar8 != psVar9);
        }
        uVar10 = (&param_1->field_784)->HeapBeginPtr();
        uVar11 = (&param_1->field_784)->end();
        uVar12 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        eastl::copy<shared_ptr<VFXAttachmentInfo> const*,
                    eastl::back_insert_iterator<eastl::vector<shared_ptr<VFXAttachmentInfo>, eastl::allocator>>>(
            uVar10, uVar11, uVar12);
        piVar13 = (int*)(&field_384)->end();
        piVar14 = (int*)(&param_1->field_384)->HeapBeginPtr();
        (&param_1->field_384)->end();
        eastl::vector<int, eastl::allocator>::insert<int const*>(&field_384, piVar13, piVar14);
    }

    // 0x100819460, 608 bytes, placed by class name
    // Model::WeldTouchingBatches()
    void Model::WeldTouchingBatches() {
        char* pcVar1;
        GeometryBatchInstance* pGVar2;
        GeometryBatch* pGVar3;
        undefined8 uVar4;
        bool bVar5;
        char cVar6;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar7;
        SimpleAllocator* pSVar8;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar9;
        undefined1* puVar10;
        hash_map<math::Vector3T<float>, unsigned short, eastl::hash<math::Vector3T<float>>,
                 eastl::equal_to<math::Vector3T<float>>, SafeSimpleAllocatorEASTL, false>
            local_b0[56];
        hash_map<math::Vector3T<float>, SharedVertexSkin, eastl::hash<math::Vector3T<float>>,
                 eastl::equal_to<math::Vector3T<float>>, SafeSimpleAllocatorEASTL, false>
            local_78[56];
        SafeSimpleAllocatorEASTL local_40;
        SafeSimpleAllocatorEASTL local_38;

        pcVar1 = (char*)(*(code*)WeldTouchingBatches()::positionToModelBoneMapBucket)();
        if (*pcVar1 == '\0') {
            pSVar8 = (SimpleAllocator*)(*(code*)WeldTouchingBatches()::positionToModelBoneMapBucket)();
            SimpleAllocator::SimpleAllocator(pSVar8, 4352, 24, 0, 16);
            __tlv_atexit(SimpleAllocator::~SimpleAllocator, pSVar8, 4294967296);
            puVar10 = (undefined1*)(*(code*)WeldTouchingBatches()::positionToModelBoneMapBucket)();
            *puVar10 = 1;
        }
        pSVar8 = (SimpleAllocator*)(*(code*)WeldTouchingBatches()::positionToModelBoneMapBucket)();
        new (&local_38) SafeSimpleAllocatorEASTL(pSVar8, "SafeSimpleAllocatorEASTL");
        eastl::hash_map<math::Vector3T<float>, unsigned short, eastl::hash<math::Vector3T<float>>,
                        eastl::equal_to<math::Vector3T<float>>, SafeSimpleAllocatorEASTL, false>::hash_map(local_b0,
                                                                                                           &local_38);
        pcVar1 = (char*)(*(code*)WeldTouchingBatches()::positionToModelSkinMapBucket)();
        if (*pcVar1 == '\0') {
            pSVar8 = (SimpleAllocator*)(*(code*)WeldTouchingBatches()::positionToModelSkinMapBucket)();
            SimpleAllocator::SimpleAllocator(pSVar8, 4352, 24, 0, 16);
            uVar4 = (*(code*)WeldTouchingBatches()::positionToModelSkinMapBucket)();
            __tlv_atexit(SimpleAllocator::~SimpleAllocator, uVar4, 4294967296);
            puVar10 = (undefined1*)(*(code*)WeldTouchingBatches()::positionToModelSkinMapBucket)();
            *puVar10 = 1;
        }
        pSVar8 = (SimpleAllocator*)(*(code*)WeldTouchingBatches()::positionToModelSkinMapBucket)();
        new (&local_40) SafeSimpleAllocatorEASTL(pSVar8, "SafeSimpleAllocatorEASTL");
        eastl::hash_map<math::Vector3T<float>, SharedVertexSkin, eastl::hash<math::Vector3T<float>>,
                        eastl::equal_to<math::Vector3T<float>>, SafeSimpleAllocatorEASTL, false>::hash_map(local_78,
                                                                                                           &local_38);
        puVar10 = &field_656;
        puVar9 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     puVar10->HeapBeginPtr();
        puVar7 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     puVar10->end();
        if (puVar9 != puVar7) {
            do {
                pGVar2 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar9);
                pGVar3 = (GeometryBatch*)pGVar2->GetGeometryBatch();
                cVar6 = pGVar3->HasBones();
                bVar5 = true;
                if (cVar6 != '\0')
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
                        pGVar2 =
                            (GeometryBatchInstance*)std::unique_ptr<
                                GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar9);
                        pGVar3 = (GeometryBatch*)pGVar2->GetGeometryBatch();
                        pGVar3->WeldVertexEdgesWithMap(local_b0);
                        pGVar2 =
                            (GeometryBatchInstance*)std::unique_ptr<
                                GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar9);
                        pGVar3 = (GeometryBatch*)pGVar2->GetGeometryBatch();
                        pGVar3->WeldVertexEdgesWithMapSkin(local_78);
                        puVar9 = puVar9 + 8;
                    } while (puVar9 != puVar7);
                }
            }
        }
        eastl::hash_map<math::Vector3T<float>, SharedVertexSkin, eastl::hash<math::Vector3T<float>>,
                        eastl::equal_to<math::Vector3T<float>>, SafeSimpleAllocatorEASTL, false>::~hash_map(local_78);
        eastl::hash_map<math::Vector3T<float>, unsigned short, eastl::hash<math::Vector3T<float>>,
                        eastl::equal_to<math::Vector3T<float>>, SafeSimpleAllocatorEASTL, false>::~hash_map(local_b0);
    }

    // 0x100819710, 416 bytes, placed by class name
    // Model::ConstructFromGeometryBatch(ModelConstructedState, shared_ptr<GeometryBatch>&, int, RT7Core*)
    void Model::ConstructFromGeometryBatch(undefined1 param_2, shared_ptr* param_3, int param_4, RT7Core* param_5) {
        undefined1* this_00;
        undefined4 uVar2;
        undefined8 uVar3;
        TextureManager* pTVar4;
        GeometryBatchInstance* this_01;
        MakeUniquePool<GeometryBatchInstance, 3072> local_40[8];
        ScopedGPUMemoryZone local_38[8];

        if (param_5 == (RT7Core*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("rt7Core != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      593, (char*)0);
        }
        if (IsReadyToConstruct(param_5) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsReadyToConstruct(rt7Core)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      594, (char*)0);
        }
        render::ScopedGPUMemoryZone::ScopedGPUMemoryZone(local_38, "ConstructFromGeometryBatch");
        uVar3 = param_5->GetMaterialManager();
        pTVar4 = (TextureManager*)param_5->GetTextureManager();
        this_00 = &field_656;
        this_00->clear();
        this_00->reserve(1);
        MakeUniquePool<GeometryBatchInstance, 3072>::MakeUnique<Model&, shared_ptr<GeometryBatch>&>(local_40, this,
                                                                                                    param_3);
        this_01 =
            (GeometryBatchInstance*)
                std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                operator->(
                    (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                        local_40);
        this_01->SetInitialSource(m_externalID, '\0', param_4);
        this_00->push_back(local_40);
        local_40->~unique_ptr();
        (&field_688)->clear();
        (&field_720)->clear();
        (&field_752)->clear();
        (&field_784)->clear();
        uVar2 = NewModelRawUniqueID();
        SetBussID(uVar2);
        CombineBatches(this, pTVar4);
        SortSections(this);
        ConstructCommon(this, param_2, uVar3, pTVar4);
        local_38->~ScopedGPUMemoryZone();
    }

    // 0x1008198b0, 912 bytes, placed by class name
    // Model::CombineBatches(TextureManager&)
    /* WARNING: Removing unreachable block (ram,4303461107) */
    /* Model::CombineBatches(TextureManager&) */

    void Model::CombineBatches(TextureManager* param_1) {
        TextureAtlasUsage* pTVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        undefined** ppuVar5;
        TextureAtlasManager* this_00;
        long lVar6;
        TextureAtlas* pTVar7;
        ulong uVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        undefined8 uVar11;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_01;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_02;
        GeometryBatchInstance* pGVar12;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_03;
        ulong uVar13;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_04;
        BillboardBatchInstance* pBVar14;
        BillboardBatchInstance* pBVar15;
        GeometryBatchInstance* pGVar16;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar17;
        undefined* puVar18;
        undefined1* puVar19;
        ulong uVar20;

        SortBatches(this);
        cVar2 = GetUseUncompressedTextures(this);
        if (cVar2 == '\0') {
            ppuVar5 = &graphicutils::TextureAtlasUsage::USAGE_COMPRESSED;
        } else {
            ppuVar5 = &graphicutils::TextureAtlasUsage::USAGE_UNCOMPRESSED;
        }
        pTVar1 = (TextureAtlasUsage*)*ppuVar5;
        this_00 = (TextureAtlasManager*)param_1->GetTextureAtlasManager();
        lVar6 = this_00->GetSettings();
        bVar3 = (bool)param_1->UseCompressedTextures();
        pTVar7 =
            (TextureAtlas*)TextureAtlasManager::GetVirtualAtlas((TextureAtlasQuality*)(lVar6 + 144), pTVar1, bVar3);
        puVar19 = &field_656;
        uVar8 = puVar19->size();
        if (1 < uVar8) {
            uVar9 = puVar19->size();
            lVar6 = puVar19->size();
            if (lVar6 != 1) {
                uVar8 = 0;
            LAB_100819a09:
                this_01 =
                    (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                        eastl::vector<std::unique_ptr<GeometryBatchInstance,
                                                      MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                      eastl::allocator>::
                        operator[](
                            (vector<std::unique_ptr<GeometryBatchInstance,
                                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                    eastl::allocator>*)puVar19,
                            uVar8);
                uVar8 = uVar8 + 1;
                uVar20 = uVar8;
            LAB_100819a20:
                do {
                    uVar13 = puVar19->size();
                    if (uVar13 <= uVar20)
                        goto LAB_1008199f0;
                    this_02 = (unique_ptr<GeometryBatchInstance,
                                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                        eastl::vector<std::unique_ptr<GeometryBatchInstance,
                                                      MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                      eastl::allocator>::
                        operator[](
                            (vector<std::unique_ptr<GeometryBatchInstance,
                                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                    eastl::allocator>*)puVar19,
                            uVar20);
                    pGVar16 = (GeometryBatchInstance*)std::unique_ptr<
                                  GeometryBatchInstance,
                                  MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_01);
                    pGVar12 = (GeometryBatchInstance*)std::unique_ptr<
                        GeometryBatchInstance,
                        MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator*(this_02);
                    iVar4 = pGVar16->IsCombinableWith(pGVar12, true, true, true, pTVar7);
                    if (iVar4 == 2) {
                        pGVar16 =
                            (GeometryBatchInstance*)std::unique_ptr<
                                GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_01);
                        pAVar17 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                         std::default_delete<LoadingScreenScript::AnimLayer>>,
                                         eastl::allocator>*)pGVar16->GetMaterial();
                        puVar18 = (undefined*)pAVar17->data();
                        if (puVar18 == AlphaMode::ALPHA_BLENDED)
                            goto LAB_1008199f0;
                    } else if (iVar4 == 0) {
                        pGVar16 =
                            (GeometryBatchInstance*)std::unique_ptr<
                                GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_01);
                        pGVar12 = (GeometryBatchInstance*)std::unique_ptr<
                            GeometryBatchInstance,
                            MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator*(this_02);
                        pGVar16->Append(pGVar12, true);
                        lVar6 = puVar19->HeapBeginPtr();
                        puVar19->erase((unique_ptr*)(lVar6 + uVar20 * 8));
                        goto LAB_100819a20;
                    }
                    uVar20 = uVar20 + 1;
                } while (true);
            }
        LAB_100819957:
            uVar8 = puVar19->size();
            if (16 < uVar8) {
                uVar10 = logger::default_logger();
                uVar11 = puVar19->size();
                logger::Logger::Log(uVar10, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/model/Model.cpp",
                                    1055,
                                    "Model has more than 16 batches, this may cause sorting key problems. Current "
                                    "batch count: %d (starting count: %d)",
                                    uVar11, uVar9);
            }
        }
        puVar19 = &field_688;
        cVar2 = puVar19->empty();
        if ((cVar2 == '\0') && (lVar6 = puVar19->size(), lVar6 != 1)) {
            uVar8 = 0;
            do {
                this_03 =
                    (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                        eastl::vector<std::unique_ptr<BillboardBatchInstance,
                                                      MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                      eastl::allocator>::
                        operator[](
                            (vector<std::unique_ptr<BillboardBatchInstance,
                                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                    eastl::allocator>*)puVar19,
                            uVar8);
                uVar8 = uVar8 + 1;
                uVar20 = uVar8;
            LAB_100819b90:
                do {
                    uVar13 = puVar19->size();
                    if (uVar13 <= uVar20)
                        break;
                    this_04 = (unique_ptr<BillboardBatchInstance,
                                          MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                        eastl::vector<std::unique_ptr<BillboardBatchInstance,
                                                      MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                      eastl::allocator>::
                        operator[](
                            (vector<std::unique_ptr<BillboardBatchInstance,
                                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                    eastl::allocator>*)puVar19,
                            uVar20);
                    pBVar14 = (BillboardBatchInstance*)std::unique_ptr<
                                  BillboardBatchInstance,
                                  MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_03);
                    pBVar15 = (BillboardBatchInstance*)std::unique_ptr<
                        BillboardBatchInstance,
                        MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator*(this_04);
                    iVar4 = pBVar14->IsCombinableWith(pBVar15, true, true, true, pTVar7);
                    if (iVar4 == 2) {
                        pGVar16 =
                            (GeometryBatchInstance*)std::unique_ptr<
                                BillboardBatchInstance,
                                MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_03);
                        pAVar17 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                         std::default_delete<LoadingScreenScript::AnimLayer>>,
                                         eastl::allocator>*)pGVar16->GetMaterial();
                        puVar18 = (undefined*)pAVar17->data();
                        if (puVar18 != AlphaMode::ALPHA_BLENDED)
                            goto LAB_100819c24;
                        bVar3 = false;
                    } else {
                        if (iVar4 == 0) {
                            pBVar14 =
                                (BillboardBatchInstance*)std::unique_ptr<
                                    BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_03);
                            pBVar15 = (BillboardBatchInstance*)std::unique_ptr<
                                BillboardBatchInstance,
                                MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator*(this_04);
                            pBVar14->Append(pBVar15, true);
                            lVar6 = puVar19->HeapBeginPtr();
                            puVar19->erase((unique_ptr*)(lVar6 + uVar20 * 8));
                            goto LAB_100819b90;
                        }
                    LAB_100819c24:
                        uVar20 = uVar20 + 1;
                        bVar3 = true;
                    }
                } while (bVar3);
                lVar6 = puVar19->size();
            } while (uVar8 < lVar6 - 1U);
        }
        return;
    LAB_1008199f0:
        lVar6 = puVar19->size();
        if (lVar6 - 1U <= uVar8)
            goto LAB_100819957;
        goto LAB_100819a09;
    }

    // 0x100819c40, 160 bytes, placed by class name
    // Model::SortSections()
    void Model::SortSections() {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar2;
        BillboardBatchInstance* this_03;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01->SortSections();
        }
        this_02 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            this_03 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
            this_03->SortSections();
        }
    }

    // 0x100819ce0, 128 bytes, placed by class name
    // Model::ConstructCommon(ModelConstructedState, MaterialManager&, TextureManager&)
    void Model::ConstructCommon(byte param_2, MaterialManager* param_3, TextureManager* param_4) {
        UpdateAABB(this);
        if (1 < param_2) {
            SetupInitialMaterials(this, param_3);
            if (param_2 == 2) {
                BakeHSLColors(this, param_3);
            } else {
                BakeMaterialInfoAndTextureMetaAndHSLColors(this, param_3, param_4, true);
                BakeBatchFlags(this);
                if (3 < param_2) {
                    ConstructFinishAndUpload(this);
                }
            }
        }
    }

    // 0x100819d60, 304 bytes, placed by class name
    // Model::SetupInitialMaterials(MaterialManager const&)
    void Model::SetupInitialMaterials(MaterialManager* param_1) {
        bool bVar1;
        int iVar2;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar3;
        GeometryBatch* this_01;
        GeometryBatchInstance* pGVar4;
        Material* pMVar5;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar6;
        BillboardBatchInstance* pBVar7;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar3 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar3; this_00 = this_00 + 8) {
            pGVar4 = (GeometryBatchInstance*)std::unique_ptr<
                         GeometryBatchInstance,
                         MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            iVar2 = pGVar4->GetFirstMaterialIDFromSource();
            if (iVar2 == -1) {
                pMVar5 = (Material*)param_1->GetDefaultMaterial();
            } else {
                pMVar5 = (Material*)param_1->GetMaterial(iVar2);
            }
            pGVar4 = (GeometryBatchInstance*)std::unique_ptr<
                         GeometryBatchInstance,
                         MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01 = (GeometryBatch*)pGVar4->GetGeometryBatch();
            bVar1 = (bool)this_01->HasFaceTransparency();
            pGVar4->SetInitialMaterial(pMVar5, bVar1);
        }
        this_02 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar6 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_02 != puVar6; this_02 = this_02 + 8) {
            pBVar7 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
            iVar2 = pBVar7->GetFirstMaterialIDFromSource();
            if (iVar2 == -1) {
                pMVar5 = (Material*)param_1->GetDefaultMaterial();
            } else {
                pMVar5 = (Material*)param_1->GetMaterial(iVar2);
            }
            pBVar7 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
            pBVar7->SetInitialMaterial(pMVar5);
        }
        field_416[0] = 2;
    }

    // 0x100819e90, 2784 bytes, placed by class name
    // Model::BakeMaterialInfoAndTextureMetaAndHSLColors(MaterialManager const&, TextureManager&, bool)
    void Model::BakeMaterialInfoAndTextureMetaAndHSLColors(MaterialManager* param_1, TextureManager* param_2,
                                                           bool param_3) {
        undefined1* puVar1;
        fixed_vector<shared_ptr<TextureAtlasReference>, 1ul, true, eastl::allocator>* pfVar2;
        bool bVar3;
        char cVar4;
        char cVar5;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar6;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar7;
        GeometryBatchInstance* pGVar8;
        vector<BillboardBatchVertexLP, eastl::allocator>* pvVar9;
        long lVar10;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar11;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar12;
        BillboardBatchInstance* pBVar13;
        MaterialInfo* pMVar14;
        Layout* pLVar15;
        MaterialInfo* pMVar16;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar17;
        TextureAtlasManager* pTVar18;
        TextureAtlasUsage* pTVar19;
        TextureAtlas* pTVar20;
        shared_ptr* psVar21;
        long lVar22;
        int* piVar23;
        int* piVar24;
        uint* puVar25;
        TextureAtlasReference* this_00;
        shared_ptr* psVar26;
        TextureAtlasReference* this_01;
        undefined7 in_register_00000009;
        hashtable_iterator_base* extraout_RDX;
        undefined8 extraout_RDX_00;
        ulong uVar27;
        undefined1 local_1a00[24];
        undefined4 local_19e8;
        undefined8 local_19e0;
        undefined8 local_19d8[2];
        Material* local_19c8;
        MaterialManager* local_19c0;
        undefined4 local_19b4;
        Vector2T<unsigned char> local_19b0[8];
        Layout* local_19a8;
        Layout* local_19a0;
        fixed_vector<shared_ptr<TextureAtlasReference>, 1ul, true, eastl::allocator>* local_1998;
        TextureManager* local_1990;
        Model* local_1988;
        char local_1979;
        shared_ptr local_1978[168];
        Model local_ef0[3];
        Layout local_260[552];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_19c0 = param_1;
        local_1990 = param_2;
        local_1988 = this;
        if (2 < (byte)field_416[0]) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_constructedState < ModelConstructedState::DATA_MAT_AND_ATLAS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      868, (char*)0);
        }
        puVar1 = &field_656;
        puVar6 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     puVar1->HeapBeginPtr();
        local_19a0 = (Layout*)puVar1;
        puVar7 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     puVar1->end();
        if (puVar6 == puVar7) {
            uVar27 = 0;
        } else {
            uVar27 = 0;
            do {
                pGVar8 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar6);
                pvVar9 = (vector<BillboardBatchVertexLP, eastl::allocator>*)pGVar8->GetApproxMaterialInfoList();
                lVar10 = eastl::vector<BillboardBatchVertexLP, eastl::allocator>::size(pvVar9);
                uVar27 = uVar27 + lVar10;
                puVar6 = puVar6 + 8;
            } while (puVar6 != puVar7);
        }
        puVar1 = &local_1988->field_688;
        puVar11 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                      puVar1->HeapBeginPtr();
        local_19a8 = (Layout*)puVar1;
        puVar12 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                      puVar1->end();
        for (; puVar11 != puVar12; puVar11 = puVar11 + 8) {
            pBVar13 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(puVar11);
            pvVar9 = (vector<BillboardBatchVertexLP, eastl::allocator>*)pBVar13->GetApproxMaterialInfoList();
            lVar10 = eastl::vector<BillboardBatchVertexLP, eastl::allocator>::size(pvVar9);
            uVar27 = uVar27 + lVar10;
        }
        local_19b4 = (undefined4)CONCAT71(in_register_00000009, param_3);
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::vector();
        local_1a00->reserve(uVar27);
        pLVar15 = local_19a0;
        puVar6 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::HeapBeginPtr(local_19a0);
        puVar7 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     pLVar15->end();
        if (puVar6 != puVar7) {
            do {
                pMVar14 = (MaterialInfo*)local_1a00->end();
                pGVar8 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar6);
                pLVar15 = (Layout*)pGVar8->GetApproxMaterialInfoList();
                pMVar16 = (MaterialInfo*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(pLVar15);
                pGVar8 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar6);
                pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                              pGVar8->GetApproxMaterialInfoList();
                eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar17);
                eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::insert<MaterialInfo_const*>(
                    (MaterialInfo*)local_1a00, pMVar14, pMVar16);
                puVar6 = puVar6 + 8;
            } while (puVar6 != puVar7);
        }
        pLVar15 = local_19a8;
        puVar11 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::HeapBeginPtr(local_19a8);
        puVar12 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                      pLVar15->end();
        if (puVar11 != puVar12) {
            do {
                pMVar14 = (MaterialInfo*)local_1a00->end();
                pBVar13 = (BillboardBatchInstance*)std::unique_ptr<
                              BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(puVar11);
                pLVar15 = (Layout*)pBVar13->GetApproxMaterialInfoList();
                pMVar16 = (MaterialInfo*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(pLVar15);
                pBVar13 = (BillboardBatchInstance*)std::unique_ptr<
                              BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(puVar11);
                pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                              pBVar13->GetApproxMaterialInfoList();
                eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar17);
                eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::insert<MaterialInfo_const*>(
                    (MaterialInfo*)local_1a00, pMVar14, pMVar16);
                puVar11 = puVar11 + 8;
            } while (puVar11 != puVar12);
        }
        pTVar18 = (TextureAtlasManager*)local_1990->GetTextureAtlasManager();
        lVar10 = pTVar18->GetSettings();
        pTVar19 = (TextureAtlasUsage*)GetTextureAtlasUsage(local_1988);
        bVar3 = (bool)local_1990->UseCompressedTextures();
        pTVar20 =
            (TextureAtlas*)TextureAtlasManager::GetVirtualAtlas((TextureAtlasQuality*)(lVar10 + 144), pTVar19, bVar3);
        WrapArray<MaterialInfo_const>::WrapArray<eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>>(
            (WrapArray<MaterialInfo_const>*)local_ef0, (vector*)local_1a00);
        cVar4 = pTVar20->CheckMaterialsFit(local_ef0);
        puVar1 = local_1988->m_textureAtlasReferences;
        puVar1->clear();
        pLVar15 = local_19a8;
        local_1998 = (fixed_vector<shared_ptr<TextureAtlasReference>, 1ul, true, eastl::allocator>*)puVar1;
        local_1979 = cVar4;
        if (cVar4 == '\0') {
            lVar10 = local_19a8->size();
            lVar22 = local_19a0->size();
            puVar1->reserve(lVar10 + lVar22);
            puVar11 =
                (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(pLVar15);
            puVar12 =
                (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                    pLVar15->end();
            if (puVar11 != puVar12) {
                do {
                    new (local_ef0) eastl::fixed_vector<int, 128ul, true, eastl::allocator>();
                    pBVar13 = (BillboardBatchInstance*)std::unique_ptr<
                                  BillboardBatchInstance,
                                  MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(puVar11);
                    pBVar13->BuildMaterialIDListFromSource(local_ef0);
                    cVar4 = local_ef0->empty();
                    if (cVar4 == '\0') {
                        piVar23 = (int*)local_ef0->HeapBeginPtr();
                        piVar24 = (int*)local_ef0->end();
                        eastl::sort<int*>(piVar23, piVar24);
                        piVar23 = (int*)local_ef0->HeapBeginPtr();
                        piVar24 = (int*)local_ef0->end();
                        piVar23 = eastl::unique<int*>(piVar23, piVar24);
                        piVar24 = (int*)local_ef0->end();
                        local_ef0->erase(piVar23, piVar24);
                        pTVar18 = (TextureAtlasManager*)local_1990->GetTextureAtlasManager();
                        pTVar19 = (TextureAtlasUsage*)GetTextureAtlasUsage(local_1988);
                        TextureAtlasManager::GetSharedAtlasRefFromMaterialIDs<
                            eastl::fixed_vector<int, 128ul, true, eastl::allocator>>(local_1978, pTVar18, pTVar19,
                                                                                     (fixed_vector*)local_ef0);
                        pfVar2 = local_1998;
                        eastl::fixed_vector<shared_ptr<TextureAtlasReference>, 1ul, true, eastl::allocator>::push_back(
                            local_1998, local_1978);
                        local_1978->~shared_ptr();
                        psVar21 = (shared_ptr*)pfVar2->back();
                        bVar3 = operator!=(psVar21, (_func_decltype_nullptr*)0);
                        if (!bVar3) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_textureAtlasReferences.back() != nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/Model.cpp",
                                      924, (char*)0);
                        }
                    }
                    local_ef0->~fixed_vector();
                    puVar11 = puVar11 + 8;
                } while (puVar11 != puVar12);
            }
            pLVar15 = local_19a0;
            puVar6 = (unique_ptr<GeometryBatchInstance,
                                 MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_19a0);
            puVar7 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    pLVar15->end();
            if (puVar6 != puVar7) {
                do {
                    new (local_ef0) eastl::fixed_vector<int, 128ul, true, eastl::allocator>();
                    pGVar8 = (GeometryBatchInstance*)std::unique_ptr<
                                 GeometryBatchInstance,
                                 MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar6);
                    pGVar8->BuildMaterialIDListFromSource(local_ef0);
                    cVar4 = local_ef0->empty();
                    if (cVar4 == '\0') {
                        piVar23 = (int*)local_ef0->HeapBeginPtr();
                        piVar24 = (int*)local_ef0->end();
                        eastl::sort<int*>(piVar23, piVar24);
                        piVar23 = (int*)local_ef0->HeapBeginPtr();
                        piVar24 = (int*)local_ef0->end();
                        piVar23 = eastl::unique<int*>(piVar23, piVar24);
                        piVar24 = (int*)local_ef0->end();
                        local_ef0->erase(piVar23, piVar24);
                        pTVar18 = (TextureAtlasManager*)local_1990->GetTextureAtlasManager();
                        pTVar19 = (TextureAtlasUsage*)GetTextureAtlasUsage(local_1988);
                        TextureAtlasManager::GetSharedAtlasRefFromMaterialIDs<
                            eastl::fixed_vector<int, 128ul, true, eastl::allocator>>(local_1978, pTVar18, pTVar19,
                                                                                     (fixed_vector*)local_ef0);
                        pfVar2 = local_1998;
                        eastl::fixed_vector<shared_ptr<TextureAtlasReference>, 1ul, true, eastl::allocator>::push_back(
                            local_1998, local_1978);
                        local_1978->~shared_ptr();
                        psVar21 = (shared_ptr*)pfVar2->back();
                        bVar3 = operator!=(psVar21, (_func_decltype_nullptr*)0);
                        if (!bVar3) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_textureAtlasReferences.back() != nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/Model.cpp",
                                      936, (char*)0);
                        }
                    }
                    local_ef0->~fixed_vector();
                    puVar6 = puVar6 + 8;
                } while (puVar6 != puVar7);
            }
        } else {
            GetMaterialIDList(local_ef0);
            cVar4 = local_ef0->empty();
            if (cVar4 == '\0') {
                pTVar18 = (TextureAtlasManager*)local_1990->GetTextureAtlasManager();
                pTVar19 = (TextureAtlasUsage*)GetTextureAtlasUsage(local_1988);
                TextureAtlasManager::GetSharedAtlasRefFromMaterialIDs<
                    eastl::fixed_vector<int, 128ul, true, eastl::allocator>>(local_1978, pTVar18, pTVar19,
                                                                             (fixed_vector*)local_ef0);
                pfVar2 = local_1998;
                eastl::fixed_vector<shared_ptr<TextureAtlasReference>, 1ul, true, eastl::allocator>::push_back(
                    local_1998, local_1978);
                local_1978->~shared_ptr();
                psVar21 = (shared_ptr*)pfVar2->back();
                bVar3 = operator!=(psVar21, (_func_decltype_nullptr*)0);
                if (!bVar3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_textureAtlasReferences.back() != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/Model.cpp",
                              906, (char*)0);
                }
            }
            local_ef0->~fixed_vector();
        }
        GetMaterialIDList((Model*)local_260);
        new (local_ef0) eastl::fixed_map<int, Material_const*, 64ul, true, eastl::less<int>, eastl::allocator>();
        new (local_1978) eastl::fixed_map<int, ModelTextureMeta, 64ul, true, eastl::less<int>, eastl::allocator>();
        puVar25 = (uint*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(local_260);
        local_1990 = (TextureManager*)local_260->end();
        cVar4 = local_1979;
        if ((TextureManager*)puVar25 != local_1990) {
            do {
                if (*puVar25 == 4294967295) {
                    local_19c8 = (Material*)local_19c0->GetDefaultMaterial();
                } else {
                    local_19c8 = (Material*)local_19c0->GetMaterial(*puVar25);
                }
                eastl::rbtree<int, eastl::pair<int const, Material_const*>, eastl::less<int>,
                              eastl::fixed_node_allocator<48ul, 64ul, 8ul, 0ul, true, eastl::allocator>,
                              eastl::use_first<eastl::pair<int const, Material_const*>>, true,
                              true>::find((int*)&local_19e8);
                eastl::rbtree<
                    unsigned int,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::less<unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned int const,
                                                 eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                    true, true>::end();
                bVar3 = eastl::operator==((eastl*)&local_19e8, (hashtable_iterator_base*)local_19d8, extraout_RDX);
                if (bVar3) {
                    local_19e8 = eastl::make_pair<unsigned int const&, game::ScriptVarType*>(
                        puVar25, (ScriptVarType**)&local_19c8);
                    local_19e0 = extraout_RDX_00;
                    eastl::rbtree<int, eastl::pair<int const, Material_const*>, eastl::less<int>,
                                  eastl::fixed_node_allocator<48ul, 64ul, 8ul, 0ul, true, eastl::allocator>,
                                  eastl::use_first<eastl::pair<int const, Material_const*>>, true,
                                  true>::insert<eastl::pair<int, Material_const*>, void>((pair*)local_19d8);
                }
                pfVar2 = local_1998;
                if (cVar4 == '\0') {
                    psVar21 = (shared_ptr*)local_1998->HeapBeginPtr();
                    psVar26 = (shared_ptr*)pfVar2->end();
                    if (psVar21 == psVar26) {
                        this_00 = (TextureAtlasReference*)0;
                    } else {
                        this_00 = (TextureAtlasReference*)0;
                        do {
                            bVar3 = shared_ptr::operator_cast_to_bool(psVar21);
                            if (bVar3) {
                                this_01 = (TextureAtlasReference*)shared_ptr<TextureAtlasReference>::operator->(
                                    (shared_ptr<TextureAtlasReference>*)psVar21);
                                pTVar20 = (TextureAtlas*)this_01->GetTextureAtlas();
                                cVar4 = pTVar20->CheckContainsMaterial(*puVar25);
                                if (cVar4 != '\0') {
                                    this_00 = (TextureAtlasReference*)psVar21->end();
                                    break;
                                }
                            }
                            psVar21 = psVar21 + 1;
                        } while (psVar21 != psVar26);
                    }
                } else {
                    pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                        eastl::vector<shared_ptr<TextureAtlasReference>,
                                      eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<shared_ptr<TextureAtlasReference>,
                                           eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       local_1998,
                                   0);
                    this_00 = (TextureAtlasReference*)
                        eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar17);
                }
                cVar4 = local_1979;
                if ((this_00 != (TextureAtlasReference*)0) && (cVar5 = local_19c8->HasTextures(), cVar5 != '\0')) {
                    math::Vector2T<unsigned char>::Vector2T(local_19b0);
                    pTVar20 = (TextureAtlas*)this_00->GetTextureAtlas();
                    pTVar20->GetMaterialSettingsSlotXY(local_19b0, *puVar25);
                    local_19d8[0] =
                        eastl::make_pair<int const&, ModelTextureMeta&>((int*)puVar25, (ModelTextureMeta*)local_19b0);
                    eastl::rbtree<int, eastl::pair<int const, ModelTextureMeta>, eastl::less<int>,
                                  eastl::fixed_node_allocator<40ul, 64ul, 4ul, 0ul, true, eastl::allocator>,
                                  eastl::use_first<eastl::pair<int const, ModelTextureMeta>>, true,
                                  true>::insert<eastl::pair<int, ModelTextureMeta>, void>((pair*)&local_19e8);
                }
                puVar25 = puVar25 + 1;
            } while ((TextureManager*)puVar25 != local_1990);
        }
        pLVar15 = local_19a0;
        puVar6 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::HeapBeginPtr(local_19a0);
        puVar7 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     pLVar15->end();
        cVar4 = (char)local_19b4;
        if (puVar6 != puVar7) {
            do {
                pGVar8 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar6);
                pGVar8->BakeMaterialInfoAndTextureMeta(local_ef0, local_1978);
                if (cVar4 != '\0') {
                    pGVar8 = (GeometryBatchInstance*)std::unique_ptr<
                                 GeometryBatchInstance,
                                 MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar6);
                    pGVar8->BakeHSLColors(local_ef0);
                }
                puVar6 = puVar6 + 8;
            } while (puVar6 != puVar7);
        }
        pLVar15 = local_19a8;
        puVar11 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::HeapBeginPtr(local_19a8);
        puVar12 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                      pLVar15->end();
        if (puVar11 != puVar12) {
            do {
                pBVar13 = (BillboardBatchInstance*)std::unique_ptr<
                              BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(puVar11);
                pBVar13->BakeTextureMeta(local_1978);
                if (cVar4 != '\0') {
                    pBVar13 = (BillboardBatchInstance*)std::unique_ptr<
                                  BillboardBatchInstance,
                                  MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(puVar11);
                    pBVar13->BakeHSLColors();
                }
                puVar11 = puVar11 + 8;
            } while (puVar11 != puVar12);
        }
        local_1988->field_416[0] = 3;
        local_1978->~fixed_map();
        local_ef0->~fixed_map();
        local_260->~fixed_vector();
        local_1a00->~vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10081a970, 80 bytes, placed by class name
    // Model::BakeBatchFlags()
    void Model::BakeBatchFlags() {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01->BakeBatchFlags();
        }
    }

    // 0x10081a9c0, 752 bytes, placed by class name
    // Model::BakeHSLColors(MaterialManager const&)
    void Model::BakeHSLColors(MaterialManager* param_1) {
        undefined1* this_00;
        Layout* pLVar1;
        bool bVar2;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar3;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar4;
        GeometryBatchInstance* pGVar5;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar6;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar7;
        BillboardBatchInstance* pBVar8;
        uint* puVar9;
        uint* puVar10;
        hashtable_iterator_base* extraout_RDX;
        undefined8 extraout_RDX_00;
        undefined1* this_01;
        hashtable_iterator_base local_f30[16];
        undefined4 local_f20[2];
        undefined8 local_f18;
        ScriptVarType* local_f10;
        Layout* local_f08;
        Layout* local_f00;
        MaterialManager* local_ef8;
        fixed_map<int, Material_const*, 64ul, true, eastl::less<int>, eastl::allocator> local_ef0[3216];
        fixed_vector<int, 128ul, true, eastl::allocator> local_260[552];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_ef8 = param_1;
        eastl::fixed_vector<int, 128ul, true, eastl::allocator>::fixed_vector(local_260);
        this_00 = &field_656;
        puVar3 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     this_00->HeapBeginPtr();
        puVar4 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     this_00->end();
        if (puVar3 != puVar4) {
            do {
                pGVar5 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar3);
                pGVar5->BuildMaterialIDListFromSource(local_260);
                puVar3 = puVar3 + 8;
            } while (puVar3 != puVar4);
        }
        this_01 = &field_688;
        puVar6 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                     this_01->HeapBeginPtr();
        puVar7 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                     this_01->end();
        if (puVar6 != puVar7) {
            do {
                pBVar8 = (BillboardBatchInstance*)std::unique_ptr<
                             BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(puVar6);
                pBVar8->BuildMaterialIDListFromSource(local_260);
                puVar6 = puVar6 + 8;
            } while (puVar6 != puVar7);
        }
        local_f08 = (Layout*)this_01;
        local_f00 = (Layout*)this_00;
        eastl::fixed_map<int, Material_const*, 64ul, true, eastl::less<int>, eastl::allocator>::fixed_map(local_ef0);
        puVar9 = (uint*)local_260->HeapBeginPtr();
        puVar10 = (uint*)local_260->end();
        if (puVar9 != puVar10) {
            do {
                if (*puVar9 == 4294967295) {
                    local_f10 = (ScriptVarType*)local_ef8->GetDefaultMaterial();
                } else {
                    local_f10 = (ScriptVarType*)local_ef8->GetMaterial(*puVar9);
                }
                eastl::rbtree<int, eastl::pair<int const, Material_const*>, eastl::less<int>,
                              eastl::fixed_node_allocator<48ul, 64ul, 8ul, 0ul, true, eastl::allocator>,
                              eastl::use_first<eastl::pair<int const, Material_const*>>, true,
                              true>::find((int*)local_f20);
                eastl::rbtree<
                    unsigned int,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::less<unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned int const,
                                                 eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                    true, true>::end();
                bVar2 = eastl::operator==((eastl*)local_f20, local_f30, extraout_RDX);
                if (bVar2) {
                    local_f20[0] = eastl::make_pair<unsigned int const&, game::ScriptVarType*>(puVar9, &local_f10);
                    local_f18 = extraout_RDX_00;
                    eastl::rbtree<int, eastl::pair<int const, Material_const*>, eastl::less<int>,
                                  eastl::fixed_node_allocator<48ul, 64ul, 8ul, 0ul, true, eastl::allocator>,
                                  eastl::use_first<eastl::pair<int const, Material_const*>>, true,
                                  true>::insert<eastl::pair<int, Material_const*>, void>((pair*)local_f30);
                }
                puVar9 = puVar9 + 1;
            } while (puVar9 != puVar10);
        }
        pLVar1 = local_f00;
        puVar3 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(local_f00);
        puVar4 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     pLVar1->end();
        pLVar1 = local_f08;
        if (puVar3 != puVar4) {
            do {
                pGVar5 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar3);
                pGVar5->BakeHSLColors(local_ef0);
                puVar3 = puVar3 + 8;
            } while (puVar3 != puVar4);
        }
        puVar6 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar1);
        puVar7 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                     pLVar1->end();
        for (; puVar6 != puVar7; puVar6 = puVar6 + 8) {
            pBVar8 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(puVar6);
            pBVar8->BakeHSLColors();
        }
        local_ef0->~fixed_map();
        eastl::fixed_vector<int, 128ul, true, eastl::allocator>::~fixed_vector(local_260);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10081acb0, 272 bytes, placed by class name
    // Model::ConstructFromModelRawRT7(ModelConstructedState, RT7Core*, PacketView)
    void Model::ConstructFromModelRawRT7(undefined1 param_2, RT7Core* param_3, PacketView* param_4) {
        undefined8 uVar2;
        undefined8 uVar3;
        PacketView aPStackY_1080[128];
        PacketView in_stack_ffffffffffffff98;
        ScopedGPUMemoryZone local_38[8];

        render::ScopedGPUMemoryZone::ScopedGPUMemoryZone(local_38, "ConstructFromModelRawRT7");
        if (param_3 == (RT7Core*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("rt7Core != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      658, (char*)0);
        }
        if (IsReadyToConstruct(param_3) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsReadyToConstruct(rt7Core)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      659, (char*)0);
        }
        uVar2 = param_3->GetMaterialManager();
        uVar3 = param_3->GetTextureManager();
        PacketView::PacketView(aPStackY_1080 + 129, param_4);
        LoadDataFromModelRawRT7(this, in_stack_ffffffffffffff98);
        (aPStackY_1080 + 129)->~PacketView();
        ConstructCommon(this, param_2, uVar2, uVar3);
        local_38->~ScopedGPUMemoryZone();
    }

    // 0x10081adc0, 1712 bytes, placed by class name
    // Model::LoadDataFromModelRawRT7(PacketView)
    void Model::LoadDataFromModelRawRT7(PacketView param_1) {
        undefined1* puVar1;
        PacketView* pPVar2;
        Model* pMVar3;
        byte bVar4;
        undefined1 uVar5;
        char cVar6;
        uchar uVar7;
        undefined2 uVar8;
        short sVar9;
        short sVar10;
        short sVar11;
        short sVar12;
        uint uVar13;
        uint uVar14;
        undefined4 uVar15;
        GeometryBatchInstance* pGVar16;
        BillboardBatchInstance* pBVar17;
        VertexBonePos* pVVar18;
        int iVar19;
        vector<std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
               eastl::allocator>* pvVar20;
        PacketView* in_RSI;
        VertexBonePos* in_R9;
        ushort uVar21;
        ulong uVar22;
        VertexBonePos local_f8;
        VertexBonePos local_e0;
        shared_ptr local_c8;
        uint local_b4;
        undefined4 local_b0;
        undefined4 local_ac;
        undefined4 local_a8;
        undefined4 local_a0;
        undefined4 local_9c;
        undefined4 local_98;
        vector<shared_ptr<ModelParticleSource>, eastl::allocator>* local_90;
        vector<std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
               eastl::allocator>* local_88;
        VertexBonePos local_80;
        undefined4 local_68;
        undefined4 local_64;
        undefined4 local_60;
        PacketView* local_58;
        Model* local_50;
        vector<std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
               eastl::allocator>* local_48;
        ushort local_3a;
        byte local_37;
        ushort local_36;
        ushort local_34;
        byte local_31;

        local_58 = in_RSI;
        local_50 = this;
        bVar4 = in_RSI->g1();
        if (bVar4 != 2) {
            /* WARNING: Subroutine does not return */
            LogAssert("modelType == static_cast<uint>(ModelFormatType::RT7)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      674, "Model: Unexpected model type field in rt7: %u", (ulong)bVar4);
        }
        bVar4 = local_58->g1();
        pPVar2 = local_58;
        if (3 < (byte)(bVar4 - 1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("packetVersion > 0 && packetVersion <= MODELRAWRT7_CURRENT_PACKED_VERSION",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      679, "Model: Unexpected model packetVersion field in rt7: %u", (ulong)bVar4);
        }
        local_58->g1();
        local_34 = pPVar2->g2LE();
        local_31 = pPVar2->g1();
        uVar5 = pPVar2->g1();
        local_90 = (vector<shared_ptr<ModelParticleSource>, eastl::allocator>*)CONCAT71(local_90._1_7_, uVar5);
        local_37 = pPVar2->g1();
        puVar1 = &local_50->field_656;
        puVar1->clear();
        local_88 =
            (vector<
                std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                eastl::allocator>*)puVar1;
        puVar1->reserve((ulong)local_34);
        pPVar2 = local_58;
        if (local_34 != 0) {
            uVar21 = 0;
            do {
                uVar13 = pPVar2->g4LE();
                uVar5 = pPVar2->g1();
                local_48 = (vector<std::unique_ptr<BillboardBatchInstance,
                                                   MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                   eastl::allocator>*)CONCAT71(local_48._1_7_, uVar5);
                local_36 = pPVar2->g2LE();
                MakeUniquePool<GeometryBatchInstance, 3072>::MakeUnique<Model&, unsigned short&>(
                    (MakeUniquePool<GeometryBatchInstance, 3072>*)&local_80, local_50, &local_34);
                pGVar16 =
                    (GeometryBatchInstance*)std::unique_ptr<
                        GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                    operator->((unique_ptr<GeometryBatchInstance,
                                           MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)&local_80);
                cVar6 = pGVar16->LoadMeshFromModelRawRT7(pPVar2, uVar13);
                if (cVar6 != '\0') {
                    if ((uVar13 & 16) == 0) {
                        uVar13 = (uint)local_36;
                        pGVar16 =
                            (GeometryBatchInstance*)std::unique_ptr<
                                GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                            operator->(
                                (unique_ptr<GeometryBatchInstance,
                                            MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)&local_80);
                        pGVar16->SetInitialSource(local_50->m_externalID, (uchar)local_48, uVar13 - 1);
                    }
                    eastl::vector<std::unique_ptr<GeometryBatchInstance,
                                                  MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                  eastl::allocator>::push_back(local_88, (unique_ptr*)&local_80);
                }
                local_80.~unique_ptr();
                uVar21 = uVar21 + 1;
            } while (uVar21 < local_34);
        }
        puVar1 = &local_50->field_688;
        puVar1->clear();
        local_48 =
            (vector<
                std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                eastl::allocator>*)puVar1;
        puVar1->reserve((ulong)local_31);
        if (local_31 != 0) {
            uVar21 = 0;
            do {
                pPVar2 = local_58;
                uVar7 = local_58->g1();
                uVar13 = pPVar2->g2LE();
                uVar14 = pPVar2->g2LE();
                MakeUniquePool<BillboardBatchInstance, 64>::MakeUnique<Model&, unsigned char&>(
                    (MakeUniquePool<BillboardBatchInstance, 64>*)&local_80, local_50, &local_31);
                pBVar17 =
                    (BillboardBatchInstance*)std::unique_ptr<
                        BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::
                    operator->((unique_ptr<BillboardBatchInstance,
                                           MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)&local_80);
                pBVar17->LoadMeshFromModelRawRT7(pPVar2);
                pBVar17 =
                    (BillboardBatchInstance*)std::unique_ptr<
                        BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::
                    operator->((unique_ptr<BillboardBatchInstance,
                                           MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)&local_80);
                pBVar17->SetInitialSource(local_50->m_externalID, uVar7, (uVar13 & 65535) - 1, (uVar14 & 65535) - 1);
                eastl::vector<std::unique_ptr<BillboardBatchInstance,
                                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                              eastl::allocator>::push_back(local_48, (unique_ptr*)&local_80);
                local_80.~unique_ptr();
                uVar21 = uVar21 + 1;
            } while (uVar21 < local_31);
        }
        pMVar3 = local_50;
        puVar1 = &local_50->field_720;
        puVar1->clear();
        (&pMVar3->field_784)->clear();
        cVar6 = (char)local_90;
        pvVar20 =
            (vector<
                std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                eastl::allocator>*)((ulong)local_90 & 255);
        local_90 = (vector<shared_ptr<ModelParticleSource>, eastl::allocator>*)puVar1;
        puVar1->reserve((ulong)pvVar20);
        if (cVar6 != '\0') {
            do {
                local_88 = pvVar20;
                local_3a = local_58->g2LE();
                new (&local_68) math::Vector3T<int>();
                local_68 = local_58->gFloatLE();
                local_64 = local_58->gFloatLE();
                local_60 = local_58->gFloatLE();
                uVar8 = local_58->g2sLE();
                local_48 = (vector<std::unique_ptr<BillboardBatchInstance,
                                                   MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                   eastl::allocator>*)CONCAT62(local_48._2_6_, uVar8);
                local_36 = local_58->g2sLE();
                new (&local_b0) math::Vector3T<int>();
                local_b0 = local_58->gFloatLE();
                local_ac = local_58->gFloatLE();
                local_a8 = local_58->gFloatLE();
                sVar9 = local_58->g2sLE();
                sVar10 = local_58->g2sLE();
                new (&local_a0) math::Vector3T<int>();
                local_a0 = local_58->gFloatLE();
                local_9c = local_58->gFloatLE();
                local_98 = local_58->gFloatLE();
                sVar11 = local_58->g2sLE();
                sVar12 = local_58->g2sLE();
                iVar19 = (int)(short)local_48;
                local_48 = (vector<std::unique_ptr<BillboardBatchInstance,
                                                   MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                   eastl::allocator>*)CONCAT44(local_48._4_4_, (int)sVar12);
                if ((short)local_3a < 0) {
                    local_b4 = local_3a & 32767;
                    new (&local_80)
                        VFXAttachmentInfo::VertexBonePos((Vector3T*)&local_68, iVar19, (int)(short)local_36);
                    new (&local_f8) VFXAttachmentInfo::VertexBonePos((Vector3T*)&local_b0, (int)sVar9, (int)sVar10);
                    new (&local_e0) VFXAttachmentInfo::VertexBonePos((Vector3T*)&local_a0, (int)sVar11, (int)local_48);
                    MakeSharedPool<VFXAttachmentInfo, 768>::MakeShared<int, VFXAttachmentInfo::VertexBonePos,
                                                                       VFXAttachmentInfo::VertexBonePos,
                                                                       VFXAttachmentInfo::VertexBonePos>(
                        &local_c8, (MakeSharedPool<VFXAttachmentInfo, 768>*)&local_b4, (int*)&local_80,
                        (VertexBonePos*)&local_f8, (VertexBonePos*)&local_e0, (VertexBonePos*)in_R9);
                    (&pMVar3->field_784, &local_c8)->push_back();
                    local_c8.~shared_ptr();
                } else {
                    new (&local_80)
                        ModelParticleSource::VertexBonePos((Vector3T*)&local_68, iVar19, (int)(short)local_36);
                    new (&local_f8) ModelParticleSource::VertexBonePos((Vector3T*)&local_b0, (int)sVar9, (int)sVar10);
                    new (&local_e0)
                        ModelParticleSource::VertexBonePos((Vector3T*)&local_a0, (int)sVar11, (int)local_48);
                    MakeSharedPool<ModelParticleSource, 768>::MakeShared<
                        unsigned short&, ModelParticleSource::VertexBonePos, ModelParticleSource::VertexBonePos,
                        ModelParticleSource::VertexBonePos>(&local_c8,
                                                            (MakeSharedPool<ModelParticleSource, 768>*)&local_3a,
                                                            (ushort*)&local_80, &local_f8, &local_e0, in_R9);
                    eastl::vector<shared_ptr<ModelParticleSource>, eastl::allocator>::push_back(local_90, &local_c8);
                    local_c8.~shared_ptr();
                }
                sVar9 = (short)local_88 + -1;
                pvVar20 = (vector<std::unique_ptr<GeometryBatchInstance,
                                                  MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                  eastl::allocator>*)CONCAT62((int6)((ulong)local_88 >> 16), sVar9);
            } while (sVar9 != 0);
        }
        puVar1 = &local_50->field_752;
        puVar1->clear();
        bVar4 = local_37;
        uVar22 = (ulong)local_37;
        local_48 =
            (vector<
                std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                eastl::allocator>*)puVar1;
        puVar1->reserve(uVar22);
        if (bVar4 != 0) {
            do {
                local_c8._0_2_ = local_58->g2LE();
                new (&local_e0) math::Vector3T<int>();
                local_e0.field_0._0_4_ = local_58->gFloatLE();
                local_e0.field_0._4_4_ = local_58->gFloatLE();
                local_e0.field_8 = local_58->gFloatLE();
                sVar9 = local_58->g2sLE();
                sVar10 = local_58->g2sLE();
                pVVar18 = (VertexBonePos*)(ulong)(uint)(int)sVar10;
                new (&local_80) ModelParticleSource::VertexBonePos((Vector3T*)&local_e0, (int)sVar9, (int)sVar10);
                MakeSharedPool<ModelParticleSource, 768>::MakeShared<unsigned short&,
                                                                     ModelParticleSource::VertexBonePos>(
                    (shared_ptr*)&local_f8, (MakeSharedPool<ModelParticleSource, 768>*)&local_c8, (ushort*)&local_80,
                    pVVar18);
                local_48->push_back((shared_ptr*)&local_f8);
                local_f8.~shared_ptr();
                uVar21 = (short)uVar22 - 1;
                uVar22 = (ulong)uVar21;
            } while (uVar21 != 0);
        }
        uVar15 = NewModelRawUniqueID();
        pMVar3 = local_50;
        local_50->SetBussID(uVar15);
        pMVar3->field_416[0] = 1;
    }

    // 0x10081bac0, 208 bytes, placed by class name
    // Model::BakeTile(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char)
    void Model::BakeTile(uchar param_1, uchar param_2, uchar param_3, uchar param_4, uchar param_5, uchar param_6,
                         uchar param_7) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01->BakeTile(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
        }
    }

    // 0x10081bcc0, 96 bytes, placed by class name
    // Model::GetTextureAtlasUsage() const
    undefined* Model::GetTextureAtlasUsage() {
        char cVar1;
        uint uVar2;
        RenderDevice* this_00;
        MapArea* this_01;
        RenderDeviceCaps* this_02;
        undefined** ppuVar3;
        Singleton<render::RenderDevice>* this_03;

        if (m_useUncompressedTextures != false) {
            this_00 = (RenderDevice*)Instance();
            uVar2 = this_00->GetGpuMemoryProfile();
            this_03 = (Singleton<render::RenderDevice>*)(ulong)uVar2;
            cVar1 = render::operator<(this_03, 1);
            ppuVar3 = &graphicutils::TextureAtlasUsage::USAGE_UNCOMPRESSED;
            if (cVar1 == '\0')
                goto LAB_10081bd13;
            this_01 = (MapArea*)this_03->Instance();
            this_02 = (RenderDeviceCaps*)this_01->GetOrigin();
            cVar1 = this_02->GetCompressedTextures();
            if (cVar1 == '\0')
                goto LAB_10081bd13;
        }
        ppuVar3 = &graphicutils::TextureAtlasUsage::USAGE_COMPRESSED;
    LAB_10081bd13:
        return *ppuVar3;
    }

    // 0x10081bd20, 288 bytes, placed by class name
    // Model::GetMaterialIDList() const
    Model* Model::GetMaterialIDList() {
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_00;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar1;
        BillboardBatchInstance* this_01;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_02;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar2;
        GeometryBatchInstance* this_03;
        int* piVar3;
        int* piVar4;
        long in_RSI;

        new (this) eastl::fixed_vector<int, 128ul, true, eastl::allocator>();
        this_00 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)((in_RSI + 688))
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)((in_RSI + 688))
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_00);
            this_01->BuildMaterialIDListFromSource(this);
        }
        this_02 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)((in_RSI + 656))
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)((in_RSI + 656))
                     ->end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            this_03 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_02);
            this_03->BuildMaterialIDListFromSource(this);
        }
        piVar3 = (int*)HeapBeginPtr();
        piVar4 = (int*)end();
        eastl::sort<int*>(piVar3, piVar4);
        piVar3 = (int*)HeapBeginPtr();
        piVar4 = (int*)end();
        piVar3 = eastl::unique<int*>(piVar3, piVar4);
        piVar4 = (int*)end();
        erase(piVar3, piVar4);
        return this;
    }

    // 0x10081c1e0, 80 bytes, placed by class name
    // Model::BakeMaterialInfoAndTextureMetaAndHSLColors(RT7Core&, bool)
    void Model::BakeMaterialInfoAndTextureMetaAndHSLColors(RT7Core* param_1, bool param_2) {
        MaterialManager* pMVar1;
        TextureManager* pTVar2;

        pMVar1 = (MaterialManager*)param_1->GetMaterialManager();
        pTVar2 = (TextureManager*)param_1->GetTextureManager();
        BakeMaterialInfoAndTextureMetaAndHSLColors(this, pMVar1, pTVar2, param_2);
    }

    // 0x10081c230, 112 bytes, placed by class name
    // Model::SortBatches()
    void Model::SortBatches() {
        undefined8 uVar1;
        undefined8 uVar2;

        uVar1 = (&field_656)->HeapBeginPtr();
        uVar2 = (&field_656)->end();
        std::sort<
            std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*,
            Model::SortBatches()::__0>(uVar1, uVar2);
        uVar1 = (&field_688)->HeapBeginPtr();
        uVar2 = (&field_688)->end();
        std::sort<
            std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*,
            Model::SortBatches()::__1>(uVar1, uVar2);
    }

    // 0x10081c450, 528 bytes, placed by class name
    // Model::ConstructAtlasFromWorker(eastl::fixed_hash_map<unsigned int, Model const*, 256ul, 257ul, true, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>, false, eastl::allocator> const*, Model*)
    void Model::ConstructAtlasFromWorker(fixed_hash_map* param_1, Model* param_2) {
        undefined1* this_00;
        vector<shared_ptr<TextureAtlasReference>,
               eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        bool bVar1;
        char cVar2;
        fixed_vector* pfVar3;
        ulong uVar4;
        shared_ptr* psVar5;
        uint* puVar6;
        uint* puVar7;
        long lVar8;
        shared_ptr<TextureAtlasReference>* psVar9;
        TextureAtlasReference* this_02;
        TextureAtlasReference* pTVar10;
        vector<shared_ptr<TextureAtlasReference>,
               eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>* this_03;
        undefined1 auVar11[16];
        undefined1 local_60[16];
        undefined1 local_50[16];
        vector<shared_ptr<TextureAtlasReference>,
               eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>* local_40;
        uint local_34;

        if (param_2 == (Model*)0) {
            if (param_1 != (fixed_hash_map*)0) {
                this_00 = m_textureAtlasReferences;
                uVar4 = this_00->size();
                if (1 < uVar4) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_textureAtlasReferences.size() <= 1",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/Model.cpp",
                              1133, (char*)0);
                }
                this_00->resize(1);
                psVar5 = (shared_ptr*)
                    eastl::vector<shared_ptr<TextureAtlasReference>,
                                  eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<shared_ptr<TextureAtlasReference>,
                                eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                        0);
                bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                if (bVar1) {
                    eastl::vector<shared_ptr<TextureAtlasReference>,
                                  eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<shared_ptr<TextureAtlasReference>,
                                eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                        0);
                    shared_ptr<TextureAtlasReference>::reset();
                }
                local_40 = (vector<shared_ptr<TextureAtlasReference>,
                                   eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)this_00;
                puVar6 = (uint*)(&field_352)->HeapBeginPtr();
                puVar7 = (uint*)(&field_352)->end();
                for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
                    local_34 = *puVar6;
                    auVar11 = param_1->find(&local_34);
                    local_50 = auVar11;
                    auVar11 = param_1->end();
                    local_60 = auVar11;
                    bVar1 = eastl::operator!=((eastl*)local_50, (hashtable_iterator_base*)local_60, auVar11._8_8_);
                    if (bVar1) {
                        lVar8 = local_50->HeapBeginPtr();
                        if (*(long*)(lVar8 + 8) == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("hashedModel",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/Model.cpp",
                                      1146, (char*)0);
                        }
                        this_03 = (vector<shared_ptr<TextureAtlasReference>,
                                          eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true,
                                                                        eastl::allocator>>*)(*(long*)(lVar8 + 8) + 424);
                        cVar2 = this_03->empty();
                        if (cVar2 == '\0') {
                            psVar5 = (shared_ptr*)
                                eastl::vector<shared_ptr<TextureAtlasReference>,
                                              eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](this_03, 0);
                            bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                            this_01 = local_40;
                            if (bVar1) {
                                psVar5 = (shared_ptr*)
                                    eastl::vector<shared_ptr<TextureAtlasReference>,
                                                  eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](local_40,
                                                                                                               0);
                                bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                                if (bVar1) {
                                    psVar9 = (shared_ptr<TextureAtlasReference>*)eastl::vector<
                                        shared_ptr<TextureAtlasReference>,
                                        eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true,
                                                                      eastl::allocator>>::operator[](this_01, 0);
                                    this_02 =
                                        (TextureAtlasReference*)shared_ptr<TextureAtlasReference>::operator->(psVar9);
                                    psVar9 = (shared_ptr<TextureAtlasReference>*)eastl::vector<
                                        shared_ptr<TextureAtlasReference>,
                                        eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true,
                                                                      eastl::allocator>>::operator[](this_03, 0);
                                    pTVar10 =
                                        (TextureAtlasReference*)shared_ptr<TextureAtlasReference>::operator*(psVar9);
                                    this_02->Combine(pTVar10);
                                } else {
                                    psVar5 = (shared_ptr*)eastl::vector<
                                        shared_ptr<TextureAtlasReference>,
                                        eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true,
                                                                      eastl::allocator>>::operator[](this_03, 0);
                                    psVar9 = (shared_ptr<TextureAtlasReference>*)eastl::vector<
                                        shared_ptr<TextureAtlasReference>,
                                        eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true,
                                                                      eastl::allocator>>::operator[](this_01, 0);
                                    shared_ptr<TextureAtlasReference>::operator=(psVar9, psVar5);
                                }
                            }
                        }
                    }
                }
            }
        } else {
            pfVar3 = (fixed_vector*)param_2->GetServerPosition();
            SetTextureAtlasReferences(this, pfVar3);
        }
    }

    // 0x10081c860, 96 bytes, placed by class name
    // Model::ConstructFinishAndUploadInternal()
    void Model::ConstructFinishAndUploadInternal() {
        if (field_416[0] != '\x04') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_constructedState == ModelConstructedState::DATA_MAT_ATLAS_AND_LOAD",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1177, (char*)0);
        }
        CreateSecondaryVertexBuffers(this);
        SetBatchAtlasReferences(this);
        CreateRenderingResources(this);
        field_416[0] = 5;
    }

    // 0x10081c8c0, 96 bytes, placed by class name
    // Model::CreateSecondaryVertexBuffers()
    void Model::CreateSecondaryVertexBuffers() {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;
        GeometryBatch* this_02;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_02 = (GeometryBatch*)this_01->GetGeometryBatch();
            this_02->CreateSecondaryVertexBuffers();
        }
    }

    // 0x10081c920, 288 bytes, placed by class name
    // Model::CreateRenderingResources()
    void Model::CreateRenderingResources() {
        char cVar1;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar2;
        GeometryBatchInstance* pGVar3;
        GeometryBatch* pGVar4;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar5;
        BillboardBatchInstance* this_02;
        AutoSingleton<ShaderThreadPoolSingleton> local_30[8];

        local_30->~AutoSingleton("RT7_Models");
        if (field_937 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_uploaded == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1892, "Model: Already uploaded!");
        }
        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar2; this_00 = this_00 + 8) {
            pGVar3 = (GeometryBatchInstance*)std::unique_ptr<
                         GeometryBatchInstance,
                         MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            pGVar4 = (GeometryBatch*)pGVar3->GetGeometryBatch();
            cVar1 = pGVar4->IsHidden();
            pGVar3 = (GeometryBatchInstance*)std::unique_ptr<
                         GeometryBatchInstance,
                         MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            if (cVar1 == '\0') {
                pGVar3->CreateRenderingResources();
            } else {
                pGVar4 = (GeometryBatch*)pGVar3->GetGeometryBatch();
                pGVar4->DestroyCPUBuffers();
            }
        }
        this_01 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar5 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_01 != puVar5; this_01 = this_01 + 8) {
            this_02 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_01);
            this_02->CreateRenderingResources();
        }
        field_937 = 1;
    }

    // 0x10081ca40, 48 bytes, placed by class name
    // Model::SetFadeTransitionable(math::Transitionable<float> const&, unsigned long long)
    void Model::SetFadeTransitionable(Transitionable* param_1, ulonglong param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 20);
        *(undefined8*)((long)&field_488 + 4) = *(undefined8*)(param_1 + 12);
        *(undefined8*)((long)&field_496 + 4) = uVar3;
        field_480 = uVar1;
        field_488 = uVar2;
        UpdateFade(this, param_2);
    }

    // 0x10081ca70, 112 bytes, placed by class name
    // Model::StartFade()
    void Model::StartFade() {
        undefined8* this_00;
        uint uVar1;
        undefined8 in_RAX;
        ulonglong uVar2;
        undefined8 local_28;

        local_28 = CONCAT44((int)((ulong)in_RAX >> 32), 3212836864);
        this_00 = &field_480;
        math::Transitionable<float>::operator=((Transitionable<float>*)this_00, (float*)&local_28);
        local_28 = local_28 & 4294967295;
        uVar1 = m_fadeTime;
        uVar2 = FrameTime::GetCurrentTimeMS();
        this_00->SetValue((float*)((long)&local_28 + 4), (ulong)uVar1, uVar2);
        uVar2 = FrameTime::GetCurrentTimeMS();
        m_currentFade = this_00->GetValue(uVar2);
    }

    // 0x10081cae0, 416 bytes, placed by class name
    // Model::Transform(math::Matrix44T<float> const&)
    void Model::Transform(Matrix44T* param_1) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        undefined8* puVar2;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar3;
        long* plVar4;
        shared_ptr<ModelParticleSource>* psVar5;
        shared_ptr<ModelParticleSource>* psVar6;
        shared_ptr<VFXAttachmentInfo>* this_02;
        shared_ptr<VFXAttachmentInfo>* psVar7;
        VFXAttachmentInfo* this_03;

        if (field_936 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1202, (char*)0);
        }
        CheckUploaded(this, "Transform", "transform");
        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            puVar2 = (undefined8*)std::unique_ptr<
                         GeometryBatchInstance,
                         MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            (**(code**)*puVar2)(puVar2, param_1);
        }
        this_01 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar3 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_01 != puVar3; this_01 = this_01 + 8) {
            plVar4 =
                (long*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_01);
            (**(code**)(*plVar4 + 48))(plVar4, param_1);
        }
        psVar5 = (shared_ptr<ModelParticleSource>*)(&field_720)->HeapBeginPtr();
        psVar6 = (shared_ptr<ModelParticleSource>*)(&field_720)->end();
        for (; psVar5 != psVar6; psVar5 = psVar5 + 16) {
            puVar2 = (undefined8*)shared_ptr<ModelParticleSource>::operator->(psVar5);
            (**(code**)*puVar2)(puVar2, param_1);
        }
        psVar5 = (shared_ptr<ModelParticleSource>*)(&field_752)->HeapBeginPtr();
        psVar6 = (shared_ptr<ModelParticleSource>*)(&field_752)->end();
        for (; psVar5 != psVar6; psVar5 = psVar5 + 16) {
            puVar2 = (undefined8*)shared_ptr<ModelParticleSource>::operator->(psVar5);
            (**(code**)*puVar2)(puVar2, param_1);
        }
        this_02 = (shared_ptr<VFXAttachmentInfo>*)(&field_784)->HeapBeginPtr();
        psVar7 = (shared_ptr<VFXAttachmentInfo>*)(&field_784)->end();
        for (; this_02 != psVar7; this_02 = this_02 + 16) {
            this_03 = (VFXAttachmentInfo*)shared_ptr<VFXAttachmentInfo>::operator->(this_02);
            this_03->Transform(param_1);
        }
    }

    // 0x10081ccd0, 160 bytes, placed by class name
    // Model::TransformNormals(math::Matrix44T<float> const&, bool)
    void Model::TransformNormals(Matrix44T* param_1, bool param_2) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        QuaternionT* pQVar2;
        Matrix44T<float> local_68[40];
        QuaternionT<float> local_40[16];

        math::QuaternionT<float>::QuaternionT(local_40);
        local_68->GetRot();
        local_40->FromRotationMatrix(local_68);
        this = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                   param_1[11]
                       .field_40.HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     param_1[11]
                         .field_40.end();
        if (this != puVar1) {
            do {
                pQVar2 = (QuaternionT*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this);
                GeometryBatchInstance::TransformNormals(pQVar2, SUB81(local_40, 0));
                this = this + 8;
            } while (this != puVar1);
        }
    }

    // 0x10081cd70, 432 bytes, placed by class name
    // Model::Translate(math::Vector3T<float> const&)
    void Model::Translate(Vector3T* param_1) {
        char cVar1;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar2;
        long* plVar3;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar4;
        shared_ptr<ModelParticleSource>* psVar5;
        shared_ptr<ModelParticleSource>* psVar6;
        shared_ptr<VFXAttachmentInfo>* this_02;
        shared_ptr<VFXAttachmentInfo>* psVar7;
        VFXAttachmentInfo* this_03;

        if (field_936 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1249, (char*)0);
        }
        CheckUploaded(this, "Translate", "translate");
        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar2; this_00 = this_00 + 8) {
            plVar3 = (long*)std::unique_ptr<
                         GeometryBatchInstance,
                         MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            (**(code**)(*plVar3 + 8))(plVar3, param_1);
        }
        this_01 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar4 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_01 != puVar4; this_01 = this_01 + 8) {
            plVar3 =
                (long*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_01);
            (**(code**)(*plVar3 + 56))(plVar3, param_1);
        }
        psVar5 = (shared_ptr<ModelParticleSource>*)(&field_720)->HeapBeginPtr();
        psVar6 = (shared_ptr<ModelParticleSource>*)(&field_720)->end();
        for (; psVar5 != psVar6; psVar5 = psVar5 + 16) {
            plVar3 = (long*)shared_ptr<ModelParticleSource>::operator->(psVar5);
            (**(code**)(*plVar3 + 8))(plVar3, param_1);
        }
        psVar5 = (shared_ptr<ModelParticleSource>*)(&field_752)->HeapBeginPtr();
        psVar6 = (shared_ptr<ModelParticleSource>*)(&field_752)->end();
        for (; psVar5 != psVar6; psVar5 = psVar5 + 16) {
            plVar3 = (long*)shared_ptr<ModelParticleSource>::operator->(psVar5);
            (**(code**)(*plVar3 + 8))(plVar3, param_1);
        }
        this_02 = (shared_ptr<VFXAttachmentInfo>*)(&field_784)->HeapBeginPtr();
        psVar7 = (shared_ptr<VFXAttachmentInfo>*)(&field_784)->end();
        for (; this_02 != psVar7; this_02 = this_02 + 16) {
            this_03 = (VFXAttachmentInfo*)shared_ptr<VFXAttachmentInfo>::operator->(this_02);
            this_03->Translate(param_1);
        }
        cVar1 = (&field_16)->IsValid();
        if (cVar1 != '\0') {
            (&field_16, param_1)->Translate();
        }
    }

    // 0x10081cf20, 496 bytes, placed by class name
    // Model::Rotate(math::QuaternionT<float> const&, bool)
    void Model::Rotate(QuaternionT* param_1, bool param_2) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        long* plVar2;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar3;
        shared_ptr<ModelParticleSource>* psVar4;
        shared_ptr<ModelParticleSource>* psVar5;
        shared_ptr<VFXAttachmentInfo>* this_02;
        shared_ptr<VFXAttachmentInfo>* psVar6;
        VFXAttachmentInfo* this_03;

        if (field_936 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1291, (char*)0);
        }
        CheckUploaded(this, "Rotate", "rotate");
        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            plVar2 = (long*)std::unique_ptr<
                         GeometryBatchInstance,
                         MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            (**(code**)(*plVar2 + 16))(plVar2, param_1, param_2);
        }
        this_01 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar3 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_01 != puVar3; this_01 = this_01 + 8) {
            plVar2 =
                (long*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_01);
            (**(code**)(*plVar2 + 64))(plVar2, param_1, 0);
        }
        psVar4 = (shared_ptr<ModelParticleSource>*)(&field_720)->HeapBeginPtr();
        psVar5 = (shared_ptr<ModelParticleSource>*)(&field_720)->end();
        for (; psVar4 != psVar5; psVar4 = psVar4 + 16) {
            plVar2 = (long*)shared_ptr<ModelParticleSource>::operator->(psVar4);
            (**(code**)(*plVar2 + 16))(plVar2, param_1, 0);
        }
        psVar4 = (shared_ptr<ModelParticleSource>*)(&field_752)->HeapBeginPtr();
        psVar5 = (shared_ptr<ModelParticleSource>*)(&field_752)->end();
        for (; psVar4 != psVar5; psVar4 = psVar4 + 16) {
            plVar2 = (long*)shared_ptr<ModelParticleSource>::operator->(psVar4);
            (**(code**)(*plVar2 + 16))(plVar2, param_1, 0);
        }
        this_02 = (shared_ptr<VFXAttachmentInfo>*)(&field_784)->HeapBeginPtr();
        psVar6 = (shared_ptr<VFXAttachmentInfo>*)(&field_784)->end();
        for (; this_02 != psVar6; this_02 = this_02 + 16) {
            this_03 = (VFXAttachmentInfo*)shared_ptr<VFXAttachmentInfo>::operator->(this_02);
            this_03->Rotate(param_1);
        }
    }

    // 0x10081d110, 528 bytes, placed by class name
    // Model::Rotate90(Rotation90, bool)
    void Model::Rotate90(char param_2, undefined1 param_3) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        long* plVar2;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar3;
        shared_ptr<ModelParticleSource>* psVar4;
        shared_ptr<ModelParticleSource>* psVar5;
        shared_ptr<VFXAttachmentInfo>* this_02;
        shared_ptr<VFXAttachmentInfo>* psVar6;
        VFXAttachmentInfo* pVVar7;

        if (field_936 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1328, (char*)0);
        }
        if (param_2 != '\0') {
            CheckUploaded(this, "Rotate90", "rotate90");
            this_00 = (unique_ptr<GeometryBatchInstance,
                                  MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                          ->HeapBeginPtr();
            puVar1 = (unique_ptr<GeometryBatchInstance,
                                 MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                         ->end();
            for (; this_00 != puVar1; this_00 = this_00 + 8) {
                plVar2 = (long*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
                (**(code**)(*plVar2 + 24))(plVar2, param_2, param_3);
            }
            this_01 = (unique_ptr<BillboardBatchInstance,
                                  MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                          ->HeapBeginPtr();
            puVar3 = (unique_ptr<BillboardBatchInstance,
                                 MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                         ->end();
            for (; this_01 != puVar3; this_01 = this_01 + 8) {
                plVar2 = (long*)std::unique_ptr<
                             BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_01);
                (**(code**)(*plVar2 + 72))(plVar2, param_2, param_3);
            }
            psVar4 = (shared_ptr<ModelParticleSource>*)(&field_720)->HeapBeginPtr();
            psVar5 = (shared_ptr<ModelParticleSource>*)(&field_720)->end();
            for (; psVar4 != psVar5; psVar4 = psVar4 + 16) {
                plVar2 = (long*)shared_ptr<ModelParticleSource>::operator->(psVar4);
                (**(code**)(*plVar2 + 24))(plVar2, param_2, 0);
            }
            psVar4 = (shared_ptr<ModelParticleSource>*)(&field_752)->HeapBeginPtr();
            psVar5 = (shared_ptr<ModelParticleSource>*)(&field_752)->end();
            for (; psVar4 != psVar5; psVar4 = psVar4 + 16) {
                plVar2 = (long*)shared_ptr<ModelParticleSource>::operator->(psVar4);
                (**(code**)(*plVar2 + 24))(plVar2, param_2, 0);
            }
            this_02 = (shared_ptr<VFXAttachmentInfo>*)(&field_784)->HeapBeginPtr();
            psVar6 = (shared_ptr<VFXAttachmentInfo>*)(&field_784)->end();
            for (; this_02 != psVar6; this_02 = this_02 + 16) {
                pVVar7 = (VFXAttachmentInfo*)shared_ptr<VFXAttachmentInfo>::operator->(this_02);
                pVVar7->Rotate90(param_2);
            }
        }
    }

    // 0x10081d320, 400 bytes, placed by class name
    // Model::Scale(math::Vector3T<float> const&)
    void Model::Scale(Vector3T* param_1) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar2;
        BillboardBatchInstance* this_03;
        shared_ptr<ModelParticleSource>* psVar3;
        shared_ptr<ModelParticleSource>* psVar4;
        ModelParticleSource* pMVar5;
        shared_ptr<VFXAttachmentInfo>* this_04;
        shared_ptr<VFXAttachmentInfo>* psVar6;
        VFXAttachmentInfo* this_05;

        if (field_936 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1370, (char*)0);
        }
        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01->Scale(param_1);
        }
        this_02 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            this_03 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
            this_03->Scale(param_1);
        }
        psVar3 = (shared_ptr<ModelParticleSource>*)(&field_720)->HeapBeginPtr();
        psVar4 = (shared_ptr<ModelParticleSource>*)(&field_720)->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            pMVar5 = (ModelParticleSource*)shared_ptr<ModelParticleSource>::operator->(psVar3);
            pMVar5->Scale(param_1);
        }
        psVar3 = (shared_ptr<ModelParticleSource>*)(&field_752)->HeapBeginPtr();
        psVar4 = (shared_ptr<ModelParticleSource>*)(&field_752)->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            pMVar5 = (ModelParticleSource*)shared_ptr<ModelParticleSource>::operator->(psVar3);
            pMVar5->Scale(param_1);
        }
        this_04 = (shared_ptr<VFXAttachmentInfo>*)(&field_784)->HeapBeginPtr();
        psVar6 = (shared_ptr<VFXAttachmentInfo>*)(&field_784)->end();
        for (; this_04 != psVar6; this_04 = this_04 + 16) {
            this_05 = (VFXAttachmentInfo*)shared_ptr<VFXAttachmentInfo>::operator->(this_04);
            this_05->Scale(param_1);
        }
    }

    // 0x10081d4f0, 432 bytes, placed by class name
    // Model::MirrorZ()
    void Model::MirrorZ() {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;
        GeometryBatch* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_03;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar2;
        BillboardBatchInstance* this_04;
        BillboardBatch* this_05;
        shared_ptr<ModelParticleSource>* psVar3;
        shared_ptr<ModelParticleSource>* psVar4;
        ModelParticleSource* pMVar5;
        shared_ptr<VFXAttachmentInfo>* this_06;
        shared_ptr<VFXAttachmentInfo>* psVar6;
        VFXAttachmentInfo* this_07;

        if (field_936 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1398, (char*)0);
        }
        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_02 = (GeometryBatch*)this_01->GetGeometryBatch();
            this_02->MirrorZ();
        }
        this_03 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_03 != puVar2; this_03 = this_03 + 8) {
            this_04 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_03);
            this_05 = (BillboardBatch*)this_04->GetBillboardBatch();
            this_05->MirrorZ();
        }
        psVar3 = (shared_ptr<ModelParticleSource>*)(&field_720)->HeapBeginPtr();
        psVar4 = (shared_ptr<ModelParticleSource>*)(&field_720)->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            pMVar5 = (ModelParticleSource*)shared_ptr<ModelParticleSource>::operator->(psVar3);
            pMVar5->MirrorZ();
        }
        psVar3 = (shared_ptr<ModelParticleSource>*)(&field_752)->HeapBeginPtr();
        psVar4 = (shared_ptr<ModelParticleSource>*)(&field_752)->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            pMVar5 = (ModelParticleSource*)shared_ptr<ModelParticleSource>::operator->(psVar3);
            pMVar5->MirrorZ();
        }
        this_06 = (shared_ptr<VFXAttachmentInfo>*)(&field_784)->HeapBeginPtr();
        psVar6 = (shared_ptr<VFXAttachmentInfo>*)(&field_784)->end();
        for (; this_06 != psVar6; this_06 = this_06 + 16) {
            this_07 = (VFXAttachmentInfo*)shared_ptr<VFXAttachmentInfo>::operator->(this_06);
            this_07->MirrorZ();
        }
    }

    // 0x10081d6e0, 704 bytes, placed by class name
    // Model::HillChange(HillChange, int, int, int, Rotation90, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, int)
    void Model::HillChange(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5,
                           undefined4 param_6, undefined8 param_7, undefined8 param_8, undefined4 param_9) {
        float fVar1;
        char cVar2;
        Vector2T<int>* this_00;
        float* pfVar3;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_01;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar4;
        GeometryBatchInstance* pGVar5;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar6;
        BillboardBatchInstance* pBVar7;
        shared_ptr<ModelParticleSource>* psVar8;
        shared_ptr<ModelParticleSource>* psVar9;
        ModelParticleSource* pMVar10;
        shared_ptr<VFXAttachmentInfo>* this_03;
        shared_ptr<VFXAttachmentInfo>* psVar11;
        VFXAttachmentInfo* pVVar12;
        undefined1* puVar13;
        float fVar14;
        undefined4 local_58;
        undefined4 local_54;
        undefined1 local_50;
        undefined4 local_4c;
        int local_48;
        int local_44;
        undefined4 local_40;
        undefined4 local_3c;
        Model* local_38;

        local_38 = (Model*)CONCAT44(local_38._4_4_, param_6);
        local_40 = param_5;
        local_3c = param_4;
        if (field_936 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1426, (char*)0);
        }
        CheckUploaded(this, "HillChange", "hillchange");
        puVar13 = &field_16;
        cVar2 = puVar13->IsValid();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_aabb.IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1431, (char*)0);
        }
        this_00 = (Vector2T<int>*)puVar13->GetScreen();
        pfVar3 = (float*)this_00->y();
        fVar1 = *pfVar3;
        fVar14 = (float)puVar13->GetHeight();
        local_44 = (int)fVar14;
        local_58 = local_3c;
        local_54 = local_40;
        local_50 = SUB81(local_38, 0);
        local_4c = param_9;
        local_48 = (int)fVar1;
        local_38 = this;
        this_01 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar4 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        if (this_01 != puVar4) {
            do {
                pGVar5 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_01);
                pGVar5->HillChange(param_2, param_3, param_7, param_8, &local_58);
                this_01 = this_01 + 8;
            } while (this_01 != puVar4);
        }
        puVar13 = &local_38->field_688;
        this_02 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                      puVar13->HeapBeginPtr();
        puVar6 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                     puVar13->end();
        if (this_02 != puVar6) {
            do {
                pBVar7 = (BillboardBatchInstance*)std::unique_ptr<
                             BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
                pBVar7->HillChange(param_2, param_3, param_7, param_8, &local_58);
                this_02 = this_02 + 8;
            } while (this_02 != puVar6);
        }
        puVar13 = &local_38->field_720;
        psVar8 = (shared_ptr<ModelParticleSource>*)puVar13->HeapBeginPtr();
        psVar9 = (shared_ptr<ModelParticleSource>*)puVar13->end();
        if (psVar8 != psVar9) {
            do {
                pMVar10 = (ModelParticleSource*)shared_ptr<ModelParticleSource>::operator->(psVar8);
                pMVar10->HillChange(param_2, param_3, param_7, param_8, &local_58);
                psVar8 = psVar8 + 16;
            } while (psVar8 != psVar9);
        }
        puVar13 = &local_38->field_752;
        psVar8 = (shared_ptr<ModelParticleSource>*)puVar13->HeapBeginPtr();
        psVar9 = (shared_ptr<ModelParticleSource>*)puVar13->end();
        if (psVar8 != psVar9) {
            do {
                pMVar10 = (ModelParticleSource*)shared_ptr<ModelParticleSource>::operator->(psVar8);
                pMVar10->HillChange(param_2, param_3, param_7, param_8, &local_58);
                psVar8 = psVar8 + 16;
            } while (psVar8 != psVar9);
        }
        puVar13 = &local_38->field_784;
        this_03 = (shared_ptr<VFXAttachmentInfo>*)puVar13->HeapBeginPtr();
        psVar11 = (shared_ptr<VFXAttachmentInfo>*)puVar13->end();
        if (this_03 != psVar11) {
            do {
                pVVar12 = (VFXAttachmentInfo*)shared_ptr<VFXAttachmentInfo>::operator->(this_03);
                pVVar12->HillChange(param_2, param_3, param_7, param_8, &local_58);
                this_03 = this_03 + 16;
            } while (this_03 != psVar11);
        }
    }

    // 0x10081da80, 240 bytes, placed by class name
    // Model::HillChangeLocalTransform(HillChange, int, int, int, Rotation90, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, int)
    void Model::HillChangeLocalTransform(undefined8 param_1, undefined4 param_2, long param_3, undefined4 param_4,
                                         undefined4 param_5, float param_6, float param_7, undefined4 param_8,
                                         undefined8 param_9, undefined8 param_10, undefined4 param_11) {
        NXTPixToolkit* this;
        float fVar1;
        int iVar2;
        Vector2T<int>* this_00;
        float* pfVar3;
        Matrix44T<float>* this_01;
        float fVar4;
        undefined8 local_68;
        undefined4 local_60;
        ColourHSL local_58;
        int local_48;
        int local_44;

        this = (NXTPixToolkit*)(param_3 + 16);
        this_00 = (Vector2T<int>*)GetScreen();
        pfVar3 = (float*)this_00->y();
        fVar1 = *pfVar3;
        fVar4 = (float)GetHeight();
        local_68 = GetCentrePos();
        local_58.field_4 = param_7;
        local_58.field_8._0_1_ = (undefined1)param_8;
        local_58._12_4_ = param_11;
        local_60 = param_2;
        local_58.field_0 = param_6;
        local_48 = (int)fVar1;
        local_44 = (int)fVar4;
        iVar2 = LocationHelpers::HillChangeVertex(param_4, param_5, &local_58, param_9, param_10, &local_68);
        this_01 = (Matrix44T<float>*)((param_3 + 176))->SetToIdentity();
        new (&local_58) math::ColourHSL(0.0, (float)iVar2 - local_68._4_4_, 0.0);
        this_01->SetPos((Vector3T*)&local_58);
    }

    // 0x10081db70, 272 bytes, placed by class name
    // Model::RecolourSingle(unsigned short, unsigned short)
    void Model::RecolourSingle(ushort param_1, ushort param_2) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;
        GeometryBatch* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_03;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar2;
        BillboardBatchInstance* this_04;
        BillboardBatch* this_05;

        if (field_936 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1482, (char*)0);
        }
        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_02 = (GeometryBatch*)this_01->GetGeometryBatch();
            this_02->RecolourSingle(param_1, param_2);
        }
        this_03 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_03 != puVar2; this_03 = this_03 + 8) {
            this_04 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_03);
            this_05 = (BillboardBatch*)this_04->GetBillboardBatch();
            this_05->RecolourSingle(param_1, param_2);
        }
    }

    // 0x10081dc80, 240 bytes, placed by class name
    // Model::Recolour(Array<unsigned short, eastl::allocator> const&, Array<unsigned short, eastl::allocator> const&)
    void Model::Recolour(Array* param_1, Array* param_2) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;
        GeometryBatch* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_03;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar2;
        BillboardBatchInstance* this_04;
        BillboardBatch* this_05;

        if (field_936 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1496, (char*)0);
        }
        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_02 = (GeometryBatch*)this_01->GetGeometryBatch();
            this_02->Recolour(param_1, param_2);
        }
        this_03 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_03 != puVar2; this_03 = this_03 + 8) {
            this_04 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_03);
            this_05 = (BillboardBatch*)this_04->GetBillboardBatch();
            this_05->Recolour(param_1, param_2);
        }
    }

    // 0x10081dd70, 224 bytes, placed by class name
    // Model::Rematerial(Array<unsigned short, eastl::allocator> const&, Array<unsigned short, eastl::allocator> const&)
    void Model::Rematerial(Array* param_1, Array* param_2) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar2;
        BillboardBatchInstance* this_03;

        if (field_936 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1510, (char*)0);
        }
        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01->Rematerial(param_1, param_2);
        }
        this_02 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            this_03 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
            this_03->Rematerial(param_1, param_2);
        }
    }

    // 0x10081de50, 240 bytes, placed by class name
    // Model::RematerialSingle(unsigned short, unsigned short)
    void Model::RematerialSingle(ushort param_1, ushort param_2) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar2;
        BillboardBatchInstance* this_03;

        if (field_936 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1524, (char*)0);
        }
        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01->RematerialSingle(param_1, param_2);
        }
        this_02 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            this_03 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
            this_03->RematerialSingle(param_1, param_2);
        }
    }

    // 0x10081df40, 240 bytes, placed by class name
    // Model::AmbientAdjust(unsigned short)
    void Model::AmbientAdjust(ushort param_1) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar2;
        BillboardBatchInstance* this_03;

        if (field_936 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1538, (char*)0);
        }
        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01->AmbientAdjust(param_1);
        }
        this_02 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            this_03 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
            this_03->AmbientAdjust(param_1);
        }
    }

    // 0x10081e030, 320 bytes, placed by class name
    // Model::TintAdjust(signed char, signed char, signed char, unsigned char)
    void Model::TintAdjust(char param_2, char param_3, char param_4, undefined1 param_5) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* pGVar2;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar3;
        BillboardBatchInstance* pBVar4;

        if (field_936 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transformStarted",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      1552, (char*)0);
        }
        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        if (this_00 != puVar1) {
            do {
                pGVar2 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
                pGVar2->TintAdjust((int)param_2, (int)param_3, (int)param_4, param_5);
                this_00 = this_00 + 8;
            } while (this_00 != puVar1);
        }
        this_01 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar3 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        if (this_01 != puVar3) {
            do {
                pBVar4 = (BillboardBatchInstance*)std::unique_ptr<
                             BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_01);
                pBVar4->TintAdjust((int)param_2, (int)param_3, (int)param_4, param_5);
                this_01 = this_01 + 8;
            } while (this_01 != puVar3);
        }
    }

    // 0x10081e170, 64 bytes, placed by class name
    // Model::Update(RT7Core&, unsigned int, unsigned long long)
    void Model::Update(RT7Core* param_1, uint param_2, ulonglong param_3) {
        ThreadPool* pTVar1;

        UpdateFade(this, param_3);
        pTVar1 = (ThreadPool*)param_1->GetImmediateThreadPool();
        UpdateAnimation(this, pTVar1, param_2);
    }

    // 0x10081e1b0, 16 bytes, placed by class name
    // Model::EndUpdate()
    void Model::EndUpdate() {
        EndUpdateAnimation(this);
    }

    // 0x10081e1c0, 2032 bytes, placed by class name
    // Model::UpdateParticleEmitters(RT7Core&, eastl::fixed_vector<shared_ptr<ParticleSystem>, 1ul, true, eastl::allocator>&, math::Matrix44T<float> const&, AnimationStateProvider*, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*, bool)
    void Model::UpdateParticleEmitters(RT7Core* param_1, fixed_vector* param_2, Matrix44T* param_3,
                                       AnimationStateProvider* param_4, vector_map* param_5, bool param_6) {
        Matrix44T* pMVar1;
        fixed_vector* this_00;
        vector_map* this_01;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* pvVar2;
        AnimationStateProvider* this_02;
        shared_ptr* psVar3;
        char cVar4;
        undefined1 uVar5;
        bool bVar6;
        undefined4 uVar7;
        shared_ptr* psVar8;
        HeadbarType* pHVar9;
        long lVar10;
        long lVar11;
        NXTPixToolkit* pNVar12;
        undefined8* puVar13;
        ModelParticleSource* pMVar14;
        undefined8* puVar15;
        Logger* this_03;
        undefined8* puVar16;
        undefined2* puVar17;
        ulong uVar18;
        shared_ptr<ParticleSystem>* psVar19;
        ParticleSystem* pPVar20;
        undefined1* puVar21;
        undefined4 in_XMM1_Da;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>
            local_1a0[40];
        undefined8 local_178;
        undefined4 local_170;
        undefined8 local_168;
        undefined4 local_160;
        RT7Core* local_158;
        shared_ptr* local_150;
        undefined8 local_148;
        undefined8 uStack_140;
        undefined4 local_138;
        undefined4 uStack_134;
        undefined4 uStack_130;
        undefined4 uStack_12c;
        undefined8 local_128;
        undefined8 uStack_120;
        undefined8 local_110;
        undefined4 local_108;
        undefined8 local_e8;
        undefined8 uStack_e0;
        undefined4 local_d8;
        undefined4 uStack_d4;
        undefined4 uStack_d0;
        undefined4 uStack_cc;
        undefined8 local_c8;
        undefined8 uStack_c0;
        Matrix44T* local_b8;
        undefined8 local_b0;
        undefined4 local_a8;
        shared_ptr<ParticleSystem>* local_88;
        fixed_vector* local_80;
        vector_map* local_78;
        Model* local_70;
        undefined8 local_68;
        undefined4 local_60;
        undefined8 local_58;
        undefined4 local_50;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* local_48;
        AnimationStateProvider* local_40;
        shared_ptr* local_38;

        if (field_938 != '\0') {
            puVar21 = &field_720;
            local_158 = param_1;
            local_80 = param_2;
            local_40 = param_4;
            cVar4 = puVar21->empty();
            if ((cVar4 == '\0') || (cVar4 = (&field_752)->empty(), cVar4 == '\0')) {
                local_70 = this;
                if (local_40 != (AnimationStateProvider*)0) {
                    local_40->WaitForAsyncTasks();
                }
                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                eastl::allocator>>::vector_map(local_1a0);
                psVar8 = (shared_ptr*)puVar21->HeapBeginPtr();
                local_150 = (shared_ptr*)puVar21->end();
                local_48 =
                    (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)&local_70
                        ->field_856;
                local_b8 = param_3;
                local_78 = param_5;
                if (psVar8 != local_150) {
                    local_38 = (shared_ptr*)&local_70->field_896;
                    do {
                        uVar5 = 1;
                        if (param_5 != (vector_map*)0) {
                            pHVar9 = (HeadbarType*)shared_ptr<ModelParticleSource>::operator->(
                                (shared_ptr<ModelParticleSource>*)psVar8);
                            uVar7 = pHVar9->GetStickTime();
                            local_e8 = CONCAT44(local_e8._4_4_, uVar7);
                            lVar10 = param_5->find((int*)&local_e8);
                            lVar11 = param_5->end();
                            if (lVar10 != lVar11) {
                                uVar5 = ((lVar10 + 4))->IsVisible();
                            }
                        }
                        pNVar12 = (NXTPixToolkit*)shared_ptr<ModelParticleSource>::operator->(
                            (shared_ptr<ModelParticleSource>*)psVar8);
                        local_88 = (shared_ptr<ParticleSystem>*)CONCAT71(local_88._1_7_, uVar5);
                        puVar13 = (undefined8*)pNVar12->GetScreen();
                        pMVar14 = (ModelParticleSource*)shared_ptr<ModelParticleSource>::operator->(
                            (shared_ptr<ModelParticleSource>*)psVar8);
                        puVar15 = (undefined8*)pMVar14->GetVertex2();
                        this_03 = (Logger*)shared_ptr<ModelParticleSource>::operator->(
                            (shared_ptr<ModelParticleSource>*)psVar8);
                        puVar16 = (undefined8*)this_03->GetLogStreams();
                        psVar3 = local_38;
                        uStack_e0 = CONCAT44(uStack_e0._4_4_, *(undefined4*)(puVar13 + 1));
                        local_e8 = *puVar13;
                        uStack_140 = CONCAT44(uStack_140._4_4_, *(undefined4*)(puVar15 + 1));
                        local_148 = *puVar15;
                        local_108 = *(undefined4*)(puVar16 + 1);
                        local_110 = *puVar16;
                        if (local_40 != (AnimationStateProvider*)0) {
                            if ((*(int*)((long)puVar13 + 12) != -1) || (*(int*)(puVar13 + 2) != -1)) {
                                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                                local_b0._0_2_ = *(ushort*)(puVar13 + 2);
                                puVar17 = (undefined2*)eastl::vector_map<
                                    unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                                operator[](
                                    (vector_map<
                                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)
                                        psVar3,
                                    (ushort*)&local_b0);
                                pvVar2 = local_48;
                                *puVar17 = 0;
                                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                                local_b0 = CONCAT62(local_b0._2_6_, *(undefined2*)((long)puVar13 + 12));
                                puVar17 = (undefined2*)eastl::vector_map<
                                    unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                  eastl::allocator>>::operator[](pvVar2, (ushort*)&local_b0);
                                *puVar17 = 0;
                                (**(code**)(local_40->field_0 + 24))(local_40, &local_e8, pvVar2, local_38,
                                                                     PTR_IDENTITY_100ee6730);
                            }
                            psVar3 = local_38;
                            if ((*(int*)((long)puVar15 + 12) != -1) || (*(int*)(puVar15 + 2) != -1)) {
                                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                                local_b0._0_2_ = *(ushort*)(puVar15 + 2);
                                puVar17 = (undefined2*)eastl::vector_map<
                                    unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                                operator[](
                                    (vector_map<
                                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)
                                        psVar3,
                                    (ushort*)&local_b0);
                                pvVar2 = local_48;
                                *puVar17 = 0;
                                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                                local_b0 = CONCAT62(local_b0._2_6_, *(undefined2*)((long)puVar15 + 12));
                                puVar17 = (undefined2*)eastl::vector_map<
                                    unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                  eastl::allocator>>::operator[](pvVar2, (ushort*)&local_b0);
                                *puVar17 = 0;
                                (**(code**)(local_40->field_0 + 24))(local_40, &local_148, pvVar2, local_38,
                                                                     PTR_IDENTITY_100ee6730);
                            }
                            psVar3 = local_38;
                            if ((*(int*)((long)puVar16 + 12) != -1) || (*(int*)(puVar16 + 2) != -1)) {
                                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                                local_b0._0_2_ = *(ushort*)(puVar16 + 2);
                                puVar17 = (undefined2*)eastl::vector_map<
                                    unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                                operator[](
                                    (vector_map<
                                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)
                                        psVar3,
                                    (ushort*)&local_b0);
                                pvVar2 = local_48;
                                *puVar17 = 0;
                                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                                local_b0 = CONCAT62(local_b0._2_6_, *(undefined2*)((long)puVar16 + 12));
                                puVar17 = (undefined2*)eastl::vector_map<
                                    unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                  eastl::allocator>>::operator[](pvVar2, (ushort*)&local_b0);
                                *puVar17 = 0;
                                (**(code**)(local_40->field_0 + 24))(local_40, &local_110, pvVar2, local_38,
                                                                     PTR_IDENTITY_100ee6730);
                            }
                            bVar6 = math::operator==((Vector3T*)&local_e8, (Vector3T*)&local_e8);
                            if (((!bVar6) ||
                                 (bVar6 = math::operator==((Vector3T*)&local_148, (Vector3T*)&local_148), !bVar6)) ||
                                (bVar6 = math::operator==((Vector3T*)&local_110, (Vector3T*)&local_110), !bVar6)) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("(v1WorldPos == v1WorldPos) && (v2WorldPos == v2WorldPos) && (v3WorldPos == "
                                          "v3WorldPos)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/model/Model.cpp",
                                          1663, (char*)0);
                            }
                        }
                        uVar18 = ParticleSystem::GetParticleSystemForEmitter(local_158, local_80, psVar8);
                        psVar19 = (shared_ptr<ParticleSystem>*)
                            eastl::vector<shared_ptr<ParticleSystem>,
                                          eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<shared_ptr<ParticleSystem>,
                                        eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    local_80,
                                uVar18);
                        pPVar20 = (ParticleSystem*)shared_ptr<ParticleSystem>::operator->(psVar19);
                        pMVar1 = local_b8;
                        local_b0 = math::operator*((Vector3T*)&local_e8, local_b8);
                        param_5 = local_78;
                        local_a8 = in_XMM1_Da;
                        local_58 = math::operator*((Vector3T*)&local_148, pMVar1);
                        local_50 = in_XMM1_Da;
                        local_68 = math::operator*((Vector3T*)&local_110, pMVar1);
                        local_60 = in_XMM1_Da;
                        pPVar20->RegisterModelEmitter(psVar8, (Vector3T*)&local_b0, (Vector3T*)&local_58,
                                                      (Vector3T*)&local_68, param_6, (bool)((byte)local_88 ^ 1));
                        psVar8 = psVar8 + 1;
                    } while (psVar8 != local_150);
                }
                puVar21 = &local_70->field_752;
                psVar8 = (shared_ptr*)puVar21->HeapBeginPtr();
                local_38 = (shared_ptr*)puVar21->end();
                pMVar1 = local_b8;
                if (psVar8 != local_38) {
                    do {
                        if (local_78 != (vector_map*)0) {
                            pHVar9 = (HeadbarType*)shared_ptr<ModelParticleSource>::operator->(
                                (shared_ptr<ModelParticleSource>*)psVar8);
                            this_01 = local_78;
                            uVar7 = pHVar9->GetStickTime();
                            local_e8 = CONCAT44(local_e8._4_4_, uVar7);
                            lVar10 = this_01->find((int*)&local_e8);
                            lVar11 = this_01->end();
                            if (lVar10 != lVar11) {
                                ((lVar10 + 4))->IsVisible();
                            }
                        }
                        pNVar12 = (NXTPixToolkit*)shared_ptr<ModelParticleSource>::operator->(
                            (shared_ptr<ModelParticleSource>*)psVar8);
                        puVar13 = (undefined8*)pNVar12->GetScreen();
                        pMVar14 = (ModelParticleSource*)shared_ptr<ModelParticleSource>::operator->(
                            (shared_ptr<ModelParticleSource>*)psVar8);
                        this_02 = local_40;
                        puVar15 = (undefined8*)pMVar14->GetVertex2();
                        pvVar2 = local_48;
                        local_50 = *(undefined4*)(puVar13 + 1);
                        local_58 = *puVar13;
                        local_60 = *(undefined4*)(puVar15 + 1);
                        local_68 = *puVar15;
                        if (this_02 != (AnimationStateProvider*)0) {
                            local_148 = *(undefined8*)PTR_IDENTITY_100ee6720;
                            uStack_140 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 8);
                            in_XMM1_Da = *(undefined4*)(PTR_IDENTITY_100ee6720 + 16);
                            uStack_134 = *(undefined4*)(PTR_IDENTITY_100ee6720 + 20);
                            uStack_130 = *(undefined4*)(PTR_IDENTITY_100ee6720 + 24);
                            uStack_12c = *(undefined4*)(PTR_IDENTITY_100ee6720 + 28);
                            local_128 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 32);
                            uStack_120 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 40);
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
                                    eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                                    local_110 = CONCAT62(local_110._2_6_, *(undefined2*)((long)puVar13 + 12));
                                    puVar17 = (undefined2*)eastl::vector_map<
                                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                      eastl::allocator>>::operator[](pvVar2, (ushort*)&local_110);
                                    *puVar17 = 0;
                                    this_02->GetBoneTransforms((Matrix43T*)&local_e8, pvVar2, local_1a0,
                                                               PTR_IDENTITY_100ee6730);
                                }
                                pvVar2 = local_48;
                                if (*(int*)(puVar13 + 2) != -1) {
                                    eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                                    local_110 = CONCAT62(local_110._2_6_, *(undefined2*)(puVar13 + 2));
                                    puVar17 = (undefined2*)eastl::vector_map<
                                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                      eastl::allocator>>::operator[](pvVar2, (ushort*)&local_110);
                                    *puVar17 = 0;
                                    this_02->GetBoneTransforms((Matrix43T*)&local_148, local_1a0, pvVar2,
                                                               PTR_IDENTITY_100ee6730);
                                }
                                local_110.GetRot();
                                local_168 = math::operator*((Vector3T*)&local_68, (Matrix43T<float>*)&local_110);
                                local_160 = in_XMM1_Da;
                                local_b0.GetRot();
                                local_178 = math::operator*((Vector3T*)&local_168, (Matrix43T<float>*)&local_b0);
                                local_170 = in_XMM1_Da;
                                local_68.SetXYZ((Vector3T*)&local_178);
                                local_b0 = math::operator*((Vector3T*)&local_58, (Matrix43T*)&local_148);
                                local_a8 = in_XMM1_Da;
                                local_110 = math::operator*((Vector3T*)&local_b0, (Matrix43T*)&local_e8);
                                local_108 = in_XMM1_Da;
                                local_58.SetXYZ((Vector3T*)&local_110);
                            }
                        }
                        this_00 = local_80;
                        psVar19 = (shared_ptr<ParticleSystem>*)local_80->HeapBeginPtr();
                        local_88 = (shared_ptr<ParticleSystem>*)this_00->end();
                        if (psVar19 != local_88) {
                            do {
                                pPVar20 = (ParticleSystem*)shared_ptr<ParticleSystem>::operator->(psVar19);
                                local_148 = math::operator*((Vector3T*)&local_58, pMVar1);
                                uStack_140 = CONCAT44(uStack_140._4_4_, in_XMM1_Da);
                                local_e8.GetRot();
                                pPVar20->RegisterModelEffector(psVar8, (Vector3T*)&local_148,
                                                               (Matrix44T<float>*)&local_e8);
                                psVar19 = psVar19 + 16;
                            } while (psVar19 != local_88);
                        }
                        psVar8 = psVar8 + 1;
                    } while (psVar8 != local_38);
                }
                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                eastl::allocator>>::~vector_map(local_1a0);
            }
        }
    }

    // 0x10081eb30, 864 bytes, placed by class name
    // Model::UpdateModularParticleSystems(RT7Core&, eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>&, math::Matrix44T<float> const&, AnimationStateProvider*, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*, bool)
    void Model::UpdateModularParticleSystems(RT7Core* param_1, vector* param_2, Matrix44T* param_3,
                                             AnimationStateProvider* param_4, vector_map* param_5, bool param_6) {
        vector* this_00;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_01;
        char cVar1;
        bool bVar2;
        bool bVar3;
        shared_ptr* psVar4;
        shared_ptr* psVar5;
        LightType* this_02;
        long lVar6;
        long lVar7;
        VFXAttachmentInfo* this_03;
        shared_ptr<ModularParticleSystem>* psVar8;
        shared_ptr<ModularParticleSystem>* psVar9;
        ModularParticleSystem* pMVar10;
        ulong uVar11;
        undefined8 uVar13;
        undefined8 uVar14;
        shared_ptr* extraout_RDX;
        undefined1* this_04;
        undefined1 local_60[16];
        vector* local_50;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* local_48;
        shared_ptr* local_40;
        undefined4 local_38;
        byte local_31;

        this_04 = &field_784;
        cVar1 = this_04->empty();
        if (cVar1 == '\0') {
            if (param_4 != (AnimationStateProvider*)0) {
                param_4->WaitForAsyncTasks();
            }
            psVar4 = (shared_ptr*)this_04->HeapBeginPtr();
            local_48 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)this_04;
            psVar5 = (shared_ptr*)this_04->end();
            local_50 = param_2;
            local_40 = psVar4;
            if (psVar4 != psVar5) {
                psVar4 = (shared_ptr*)(CONCAT71((int7)((ulong)psVar5 >> 8), param_6) ^ 1);
                local_31 = (byte)psVar4;
                do {
                    local_38 = (undefined4)CONCAT71((int7)((ulong)psVar4 >> 8), 1);
                    if (param_5 != (vector_map*)0) {
                        this_02 = (LightType*)shared_ptr<VFXAttachmentInfo>::operator->(
                            (shared_ptr<VFXAttachmentInfo>*)local_40);
                        local_60._0_4_ = this_02->GetAmplitude();
                        lVar6 = param_5->find(local_60);
                        lVar7 = param_5->end();
                        if (lVar6 != lVar7) {
                            local_38 = ((lVar6 + 4))->IsVisible();
                        }
                    }
                    this_03 = (VFXAttachmentInfo*)shared_ptr<VFXAttachmentInfo>::operator->(
                        (shared_ptr<VFXAttachmentInfo>*)local_40);
                    cVar1 = this_03->Update(param_4, param_3);
                    if (cVar1 == '\0') {
                        local_38 = 0;
                    } else {
                        local_38._1_3_ = SUB43(local_38, 1);
                        local_38._0_1_ = (byte)local_38 & local_31;
                    }
                    psVar8 = (shared_ptr<ModularParticleSystem>*)param_2->HeapBeginPtr();
                    psVar9 = (shared_ptr<ModularParticleSystem>*)param_2->end();
                    if (psVar8 == psVar9) {
                        bVar3 = false;
                    } else {
                        bVar3 = false;
                        do {
                            shared_ptr<ModularParticleSystem>::operator->(psVar8);
                            local_60->GetAttachmentInfo();
                            bVar2 = operator==((jag*)local_60, local_40, extraout_RDX);
                            local_60->~shared_ptr();
                            if (bVar2) {
                                pMVar10 = (ModularParticleSystem*)shared_ptr<ModularParticleSystem>::operator->(psVar8);
                                pMVar10->SetEmitting((bool)(undefined1)local_38);
                                bVar3 = true;
                            }
                            psVar8 = psVar8 + 16;
                        } while (!bVar2 && psVar8 != psVar9);
                    }
                    param_2 = local_50;
                    if ((!bVar3) && ((char)local_38 == '\x01')) {
                        psVar4 = (shared_ptr*)param_1->GetParticleManager();
                        local_60->RegisterSystem(psVar4);
                        bVar3 = local_60->operator_cast_to_bool();
                        if (bVar3) {
                            param_2->push_back(local_60);
                        }
                        local_60->~shared_ptr();
                    }
                    psVar4 = local_40 + 1;
                    local_40 = psVar4;
                } while (psVar4 != psVar5);
            }
            uVar11 = param_2->size();
            if (eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(local_48) <
                uVar11) {
                psVar8 = (shared_ptr<ModularParticleSystem>*)param_2->HeapBeginPtr();
                local_40 = (shared_ptr*)param_2->end();
                this_01 = local_48;
                if ((shared_ptr*)psVar8 != local_40) {
                    do {
                        psVar4 = (shared_ptr*)this_01->HeapBeginPtr();
                        psVar5 = (shared_ptr*)this_01->end();
                        shared_ptr<ModularParticleSystem>::operator->(psVar8);
                        local_60->GetAttachmentInfo();
                        psVar4 = std::find<shared_ptr<VFXAttachmentInfo>*, shared_ptr<VFXAttachmentInfo>>(
                            psVar4, psVar5, (shared_ptr*)local_60);
                        local_60->~shared_ptr();
                        psVar5 = (shared_ptr*)this_01->end();
                        if (psVar4 == psVar5) {
                            pMVar10 = (ModularParticleSystem*)shared_ptr<ModularParticleSystem>::operator->(psVar8);
                            pMVar10->SetEmitting(false);
                            pMVar10 = (ModularParticleSystem*)shared_ptr<ModularParticleSystem>::operator->(psVar8);
                            pMVar10->SetLoopingAllowed(false);
                        }
                        psVar8 = psVar8 + 16;
                    } while ((shared_ptr*)psVar8 != local_40);
                }
                this_00 = local_50;
                uVar13 = local_50->HeapBeginPtr();
                uVar14 = this_00->end();
                psVar4 =
                    std::remove_if<shared_ptr<ModularParticleSystem>*,
                                   (RT7Core&)->UpdateModularParticleSystems(
                                       eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>&,
                                       math::Matrix44T<float> const&, AnimationStateProvider*,
                                       eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                                         eastl::vector<eastl::pair<int, FaceGroupRenderMasks>,
                                                                       eastl::allocator>> const*,
                                       bool)::__3>(uVar13, uVar14);
                psVar5 = (shared_ptr*)this_00->end();
                this_00->erase(psVar4, psVar5);
            }
        }
    }

    // 0x10081efe0, 464 bytes, placed by class name
    // Model::GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*)
    void Model::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, SceneViewData* param_3,
                                       EffectManager* param_4, vector_map* param_5) {
        undefined1* this_00;
        undefined1* this_01;
        char cVar1;
        bool bVar2;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar3;
        BillboardBatchInstance* this_03;
        GeometryQuery* pGVar4;
        ulong uVar5;
        ulong uVar6;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_04;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar7;
        GeometryBatchInstance* pGVar8;
        SpriteAtlasReference* this_05;
        uchar uVar9;

        cVar1 = IsReadyToRender(this);
        if (cVar1 != '\0') {
            if (m_fadeTime != 0) {
                StartFade(this);
                m_fadeTime = 0;
            }
            if (m_ShowBillboards != '\0') {
                this_02 = (unique_ptr<BillboardBatchInstance,
                                      MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                              ->HeapBeginPtr();
                puVar3 = (unique_ptr<BillboardBatchInstance,
                                     MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                             ->end();
                for (; this_02 != puVar3; this_02 = this_02 + 8) {
                    this_03 = (BillboardBatchInstance*)std::unique_ptr<
                                  BillboardBatchInstance,
                                  MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
                    this_03->GatherDrawableElements(param_1, param_2, param_3, param_4, param_5);
                }
            }
            if (m_ShowMeshes != '\0') {
                this_00 = m_geometryQuery;
                bVar2 = this_00->operator_cast_to_bool();
                if (bVar2) {
                    this_01 = &field_656;
                    cVar1 = this_01->empty();
                    if (cVar1 == '\0') {
                        pGVar4 =
                            (GeometryQuery*)shared_ptr<GeometryQuery>::operator->((shared_ptr<GeometryQuery>*)this_00);
                        uVar5 = pGVar4->GetQueryInstanceCount();
                        uVar6 = this_01->size();
                        if (uVar5 < uVar6) {
                            pGVar4 = (GeometryQuery*)shared_ptr<GeometryQuery>::operator->(
                                (shared_ptr<GeometryQuery>*)this_00);
                            uVar5 = this_01->size();
                            pGVar4->CreateQueryInstances(uVar5);
                        }
                    }
                }
                this_04 = (unique_ptr<GeometryBatchInstance,
                                      MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                              ->HeapBeginPtr();
                puVar7 = (unique_ptr<GeometryBatchInstance,
                                     MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                             ->end();
                if (this_04 != puVar7) {
                    uVar9 = '\0';
                    do {
                        if (*PTR_m_gatherShareLightOnly_100ee6a40 == '\0') {
                        LAB_10081f140:
                            pGVar8 = (GeometryBatchInstance*)
                                         std::unique_ptr<GeometryBatchInstance,
                                                         MakeUniquePool<GeometryBatchInstance,
                                                                        3072>::UniquePoolDeleter>::operator->(this_04);
                            pGVar8->GatherDrawableElements(param_1, param_2, param_3, param_4, param_5, uVar9);
                            uVar9 = uVar9 + '\x01';
                        } else {
                            pGVar8 = (GeometryBatchInstance*)
                                         std::unique_ptr<GeometryBatchInstance,
                                                         MakeUniquePool<GeometryBatchInstance,
                                                                        3072>::UniquePoolDeleter>::operator->(this_04);
                            this_05 = (SpriteAtlasReference*)pGVar8->GetGeometryBatch();
                            cVar1 = this_05->GetDisableCache();
                            if (cVar1 != '\0')
                                goto LAB_10081f140;
                        }
                        this_04 = this_04 + 8;
                    } while (this_04 != puVar7);
                }
            }
        }
    }

    // 0x10081f1b0, 64 bytes, placed by class name
    // Model::IsReadyToRender() const
    ulong Model::IsReadyToRender() {
        char cVar1;
        undefined8 unaff_R14;
        ulong uVar2;

        if (field_416[0] == '\x05') {
            cVar1 = IsEmptyModel(this);
            uVar2 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
            if (cVar1 != '\0')
                goto LAB_10081f1de;
            cVar1 = TexturesReady(this);
            if (cVar1 != '\0')
                goto LAB_10081f1de;
        }
        uVar2 = 0;
    LAB_10081f1de:
        return uVar2 & 4294967295;
    }

    // 0x10081f200, 96 bytes, placed by class name
    // Model::GatherDrawableElementsPrefetch()
    void Model::GatherDrawableElementsPrefetch() {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;

        if (m_ShowMeshes != '\0') {
            this_00 = (unique_ptr<GeometryBatchInstance,
                                  MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                          ->HeapBeginPtr();
            puVar1 = (unique_ptr<GeometryBatchInstance,
                                 MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                         ->end();
            for (; this_00 != puVar1; this_00 = this_00 + 8) {
                this_01 = (GeometryBatchInstance*)std::unique_ptr<
                              GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
                this_01->Prefetch();
            }
        }
    }

    // 0x10081f260, 224 bytes, placed by class name
    // Model::DestroyRenderingResources()
    void Model::DestroyRenderingResources() {
        char cVar1;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar2;
        GeometryBatchInstance* pGVar3;
        GeometryBatch* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_02;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar4;
        BillboardBatchInstance* this_03;
        AutoSingleton<ShaderThreadPoolSingleton> local_28[8];

        local_28->~AutoSingleton("RT7_Models");
        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar2 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar2; this_00 = this_00 + 8) {
            pGVar3 = (GeometryBatchInstance*)std::unique_ptr<
                         GeometryBatchInstance,
                         MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01 = (GeometryBatch*)pGVar3->GetGeometryBatch();
            cVar1 = this_01->IsHidden();
            if (cVar1 == '\0') {
                pGVar3 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
                pGVar3->DestroyRenderingResources();
            }
        }
        this_02 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar4 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        for (; this_02 != puVar4; this_02 = this_02 + 8) {
            this_03 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_02);
            this_03->DestroyRenderingResources();
        }
        field_937 = 0;
    }

    // 0x10081f380, 128 bytes, placed by class name
    // Model::SetLodLevel(unsigned int)
    void Model::SetLodLevel(uint param_1) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* pGVar2;
        int iVar3;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            iVar3 = 0;
            do {
                pGVar2 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
                pGVar2->SetLodLevel(iVar3, param_1);
                iVar3 = iVar3 + 1;
            } while (iVar3 != 3);
        }
    }

    // 0x10081f400, 800 bytes, placed by class name
    // Model::BakeShareLight()
    void Model::BakeShareLight() {
        Layout* this_00;
        bool bVar1;
        char cVar2;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar3;
        long lVar4;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* this_01;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_02;
        Vector3T* pVVar5;
        int* piVar6;
        GeometryBatchVertex* this_03;
        ulong uVar7;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar8;
        GeometryBatchInstance* pGVar9;
        GeometryBatch* pGVar10;
        SpriteAtlasReference* pSVar11;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar12;
        uint uVar13;
        ulong uVar14;
        undefined1* this_04;
        equal_to local_6118[16];
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_6108;
        Layout* local_6100;
        undefined8 local_60f8[2];
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_60e8;
        fixed_hash_map<math::Vector3T<float>, SharedVertexCountNormal, 512ul, 513ul, true,
                       eastl::hash<math::Vector3T<float>>, eastl::equal_to<math::Vector3T<float>>, false,
                       BucketAllocatorEASTL>
            local_60e0[24744];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_hash_map<math::Vector3T<float>, SharedVertexCountNormal, 512ul, 513ul, true,
                              eastl::hash<math::Vector3T<float>>, eastl::equal_to<math::Vector3T<float>>, false,
                              BucketAllocatorEASTL>::fixed_hash_map(local_60e0, (hash*)local_60f8, local_6118);
        this_04 = &field_656;
        puVar3 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     this_04->HeapBeginPtr();
        local_6100 = (Layout*)this_04;
        local_6108 =
            (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                this_04->end();
        if (puVar3 != local_6108) {
            do {
                local_60e8 = puVar3;
                pGVar9 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar3);
                pGVar10 = (GeometryBatch*)pGVar9->GetGeometryBatch();
                cVar2 = pGVar10->IsHidden();
                if (cVar2 == '\0') {
                    pGVar9 =
                        (GeometryBatchInstance*)std::unique_ptr<
                            GeometryBatchInstance,
                            MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(local_60e8);
                    pSVar11 = (SpriteAtlasReference*)pGVar9->GetGeometryBatch();
                    cVar2 = pSVar11->GetDisableCache();
                    puVar3 = local_60e8;
                    if (cVar2 != '\0') {
                        pGVar9 =
                            (GeometryBatchInstance*)std::unique_ptr<
                                GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(local_60e8);
                        pGVar10 = (GeometryBatch*)pGVar9->GetGeometryBatch();
                        this_01 =
                            (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                                pGVar10->GetVertexDataBuffer();
                        pGVar9 =
                            (GeometryBatchInstance*)std::unique_ptr<
                                GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar3);
                        pGVar10 = (GeometryBatch*)pGVar9->GetGeometryBatch();
                        this_02 =
                            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                pGVar10->GetVertexDataBufferPos();
                        cVar2 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                 eastl::allocator>>::empty(this_02);
                        if (cVar2 != '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("!vertexDataBufferPos.empty()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/Model.cpp",
                                      2001, (char*)0);
                        }
                        lVar4 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>,
                                              eastl::allocator>::size(this_01);
                        if (lVar4 != 0) {
                            uVar13 = 1;
                            uVar14 = 0;
                            do {
                                pVVar5 = (Vector3T*)eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                                    (vector<GeometryBatchVertexPos, eastl::allocator>*)this_02, uVar14);
                                piVar6 =
                                    (int*)eastl::hash_map<math::Vector3T<float>, SharedVertexCountNormal,
                                                          eastl::hash<math::Vector3T<float>>,
                                                          eastl::equal_to<math::Vector3T<float>>,
                                                          eastl::fixed_hashtable_allocator<514ul, 40ul, 512ul, 4ul, 0ul,
                                                                                           true, BucketAllocatorEASTL>,
                                                          false>::
                                    operator[]((hash_map<math::Vector3T<float>, SharedVertexCountNormal,
                                                         eastl::hash<math::Vector3T<float>>,
                                                         eastl::equal_to<math::Vector3T<float>>,
                                                         eastl::fixed_hashtable_allocator<514ul, 40ul, 512ul, 4ul, 0ul,
                                                                                          true, BucketAllocatorEASTL>,
                                                         false>*)local_60e0,
                                               pVVar5);
                                *piVar6 = *piVar6 + 1;
                                this_03 = (GeometryBatchVertex*)
                                    eastl::vector<GeometryBatchVertex, eastl::allocator>::operator[](
                                        (vector<GeometryBatchVertex, eastl::allocator>*)this_01, uVar14);
                                local_60f8[0] = this_03->GetNormal();
                                math::Vector3T<float>::operator+=((Vector3T<float>*)(piVar6 + 1),
                                                                  (Vector3T*)local_60f8);
                                uVar14 = (ulong)uVar13;
                                uVar7 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>,
                                                      eastl::allocator>::size(this_01);
                                uVar13 = uVar13 + 1;
                            } while (uVar14 < uVar7);
                        }
                    }
                }
                puVar3 = local_60e8 + 8;
            } while (puVar3 != local_6108);
        }
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        phVar12 = extraout_RDX;
        while (bVar1 = eastl::operator!=((eastl*)local_60f8, (hashtable_iterator_base*)local_6118, phVar12),
               this_00 = local_6100, bVar1) {
            lVar4 = local_60f8->HeapBeginPtr();
            if (1 < *(uint*)(lVar4 + 12)) {
                ((lVar4 + 16))->Normalize();
            }
            eastl::hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>, false, false>::
            operator++(
                (hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>, false, false>*)
                    local_60f8);
            phVar12 = extraout_RDX_00;
        }
        puVar3 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::HeapBeginPtr(local_6100);
        puVar8 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     this_00->end();
        if (puVar3 != puVar8) {
            do {
                pGVar9 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar3);
                pGVar10 = (GeometryBatch*)pGVar9->GetGeometryBatch();
                cVar2 = pGVar10->IsHidden();
                if (cVar2 == '\0') {
                    pGVar9 = (GeometryBatchInstance*)std::unique_ptr<
                                 GeometryBatchInstance,
                                 MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar3);
                    pSVar11 = (SpriteAtlasReference*)pGVar9->GetGeometryBatch();
                    cVar2 = pSVar11->GetDisableCache();
                    if (cVar2 != '\0') {
                        pGVar9 =
                            (GeometryBatchInstance*)std::unique_ptr<
                                GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar3);
                        pGVar10 = (GeometryBatch*)pGVar9->GetGeometryBatch();
                        pGVar10->BakeShareLightNormals(local_60e0);
                    }
                }
                puVar3 = puVar3 + 8;
            } while (puVar3 != puVar8);
        }
        eastl::fixed_hash_map<math::Vector3T<float>, SharedVertexCountNormal, 512ul, 513ul, true,
                              eastl::hash<math::Vector3T<float>>, eastl::equal_to<math::Vector3T<float>>, false,
                              BucketAllocatorEASTL>::~fixed_hash_map(local_60e0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10081f770, 112 bytes, placed by class name
    // Model::SetShareLightBatches(bool)
    void Model::SetShareLightBatches(bool param_1) {
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;
        GeometryBatch* this_02;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar1 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)std::unique_ptr<
                          GeometryBatchInstance,
                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_02 = (GeometryBatch*)this_01->GetGeometryBatch();
            this_02->SetShareLight(param_1);
        }
    }

    // 0x10081f7e0, 112 bytes, placed by class name
    // Model::GetLoadProgress() const
    float Model::GetLoadProgress() {
        char cVar1;
        float fVar2;

        cVar1 = IsLoaded(this);
        fVar2 = 1.0;
        if (cVar1 == '\0') {
            fVar2 = 0.0;
        }
        cVar1 = TexturesReady(this);
        if (cVar1 != '\0') {
            fVar2 = fVar2 + 1.0;
        }
        cVar1 = ShadersReady(this);
        if (cVar1 != '\0') {
            fVar2 = fVar2 + 1.0;
        }
        return fVar2 * 0.33333334;
    }

    // 0x10081f850, 144 bytes, placed by class name
    // Model::TexturesReady() const
    ulong Model::TexturesReady() {
        char cVar1;
        bool bVar2;
        byte bVar3;
        shared_ptr* this_00;
        shared_ptr* psVar4;
        TextureAtlasReference* this_01;
        undefined8 unaff_R14;
        undefined7 uVar6;
        ulong uVar5;
        undefined1* this_02;

        this_02 = m_textureAtlasReferences;
        cVar1 = this_02->empty();
        uVar6 = (undefined7)((ulong)unaff_R14 >> 8);
        uVar5 = CONCAT71(uVar6, 1);
        if (cVar1 == '\0') {
            this_00 = (shared_ptr*)this_02->HeapBeginPtr();
            psVar4 = (shared_ptr*)this_02->end();
            if (this_00 != psVar4) {
                uVar5 = CONCAT71(uVar6, 1);
                do {
                    bVar2 = shared_ptr::operator_cast_to_bool(this_00);
                    bVar3 = 1;
                    if (bVar2) {
                        this_01 = (TextureAtlasReference*)shared_ptr<TextureAtlasReference>::operator->(
                            (shared_ptr<TextureAtlasReference>*)this_00);
                        bVar3 = this_01->CheckTexturesLoaded();
                    }
                    uVar5 = CONCAT71((int7)(uVar5 >> 8), (byte)uVar5 & bVar3);
                    this_00 = this_00 + 1;
                } while (this_00 != psVar4);
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x10081f8e0, 592 bytes, placed by class name
    // Model::ShadersReady() const
    undefined4 Model::ShadersReady() {
        char cVar1;
        int iVar2;
        uint uVar3;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar4;
        GeometryBatchInstance* pGVar5;
        RenderMaterial* pRVar6;
        RenderPassEffect* pRVar7;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_01;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar8;
        undefined8 in_RCX;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar9;
        bool bVar10;
        uint uVar11;
        bool bVar12;
        undefined4 local_34;

        this_00 = (unique_ptr<GeometryBatchInstance,
                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                      ->HeapBeginPtr();
        puVar4 = (unique_ptr<GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(&field_656)
                     ->end();
        if (this_00 == puVar4) {
            bVar10 = false;
            local_34 = 0;
        } else {
            local_34 = 0;
            bVar10 = false;
            do {
                pGVar5 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
                cVar1 = pGVar5->IsHidden();
                if (cVar1 == '\0') {
                    pGVar5 = (GeometryBatchInstance*)std::unique_ptr<
                                 GeometryBatchInstance,
                                 MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
                    pRVar6 = (RenderMaterial*)pGVar5->GetMaterial();
                    iVar2 = oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(10);
                    bVar12 = iVar2 != 0;
                    if (iVar2 == 0) {
                        iVar2 = 0;
                    } else {
                        uVar11 = 0;
                        do {
                            pRVar7 = (RenderPassEffect*)pRVar6->GetRenderPassEffect(uVar11);
                            cVar1 = pRVar7->HasShader();
                            if (cVar1 != '\0') {
                                cVar1 = pRVar7->IsShaderReady();
                                in_RCX = CONCAT71((int7)((ulong)in_RCX >> 8), 1);
                                local_34 = (undefined4)in_RCX;
                                if (cVar1 == '\0') {
                                    iVar2 = 1;
                                    goto LAB_10081f9df;
                                }
                            }
                            uVar11 = uVar11 + 1;
                            uVar3 =
                                oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(10);
                            bVar12 = uVar11 < uVar3;
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
        this_01 = (unique_ptr<BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                      ->HeapBeginPtr();
        puVar8 = (unique_ptr<BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(&field_688)
                     ->end();
        iVar2 = 7;
        puVar9 = puVar8;
        if (this_01 != puVar8) {
            do {
                pGVar5 = (GeometryBatchInstance*)std::unique_ptr<
                             BillboardBatchInstance,
                             MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(this_01);
                pRVar6 = (RenderMaterial*)pGVar5->GetMaterial();
                iVar2 = oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(10);
                bVar12 = iVar2 != 0;
                if (bVar12) {
                    uVar11 = 0;
                    do {
                        pRVar7 = (RenderPassEffect*)pRVar6->GetRenderPassEffect(uVar11);
                        cVar1 = pRVar7->HasShader();
                        if (cVar1 != '\0') {
                            cVar1 = pRVar7->IsShaderReady();
                            puVar9 = (unique_ptr<BillboardBatchInstance,
                                                 MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                                CONCAT71((int7)((ulong)puVar9 >> 8), 1);
                            local_34 = SUB84(puVar9, 0);
                            if (cVar1 == '\0') {
                                iVar2 = 1;
                                goto LAB_10081fae2;
                            }
                        }
                        uVar11 = uVar11 + 1;
                        uVar3 = oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(10);
                        bVar12 = uVar11 < uVar3;
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
            return CONCAT31((int3)((uint)local_34 >> 8), (byte)local_34 | !bVar10);
        }
        return 0;
    }

    // 0x10081fba0, 112 bytes, placed by class name
    // Model::GetTextureAtlasReference() const
    undefined8 Model::GetTextureAtlasReference() {
        char cVar1;
        ulong uVar2;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        undefined8 uVar3;
        undefined1* this_01;

        this_01 = m_textureAtlasReferences;
        uVar2 = this_01->size();
        if (1 < uVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_textureAtlasReferences.size() <= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      2200, (char*)0);
        }
        cVar1 = this_01->empty();
        if (cVar1 == '\0') {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                eastl::vector<shared_ptr<TextureAtlasReference>,
                              eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<shared_ptr<TextureAtlasReference>,
                                   eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)this_01,
                           0);
            uVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x10081fd60, 320 bytes, placed by class name
    // Model::SetDefaultLODs(GeometryBatchInstance*, EffectManager const&, RenderPassType, SceneViewData const&, float, math::OBB const&)
    void Model::SetDefaultLODs(float param_1_00, undefined8 param_2_00, GeometryBatchInstance* param_1,
                               EffectManager* param_2, uint param_5, NXTPixToolkit* param_6, OBB* param_7) {
        char cVar1;
        int iVar2;
        Matrix44T* pMVar3;
        Matrix44T* pMVar4;
        ModelLodPassConfig* pMVar5;
        int iVar6;
        float fVar7;
        undefined1 local_48[16];
        float local_34;

        cVar1 = param_2->IsEnabled(96);
        if (((cVar1 == '\0') && (param_5 < 10)) && ((536U >> (param_5 & 31) & 1) != 0)) {
            cVar1 = param_2->IsEnabled(95);
            if (cVar1 == '\0') {
                iVar6 = 0;
                do {
                    param_1->SetLodLevel(iVar6, 0);
                    iVar6 = iVar6 + 1;
                } while (iVar6 != 3);
            } else {
                cVar1 = param_2->IsEnabled(97);
                if (cVar1 == '\0') {
                    new (local_48) math::Sphere();
                    param_7->GetMinimumEnclosingSphere(local_48);
                    pMVar3 = (Matrix44T*)param_6->GetScreen();
                    pMVar4 = (Matrix44T*)param_6->GetOrigin();
                    local_34 = (float)math::NDCProjectGetSphericalNDCRadius((Sphere*)local_48, pMVar3, pMVar4);
                    iVar6 = 0;
                    do {
                        pMVar5 = (ModelLodPassConfig*)GetLodConfig(iVar6);
                        fVar7 = (float)local_48->GetOutlineRadiusAdjustment();
                        iVar2 = CalculateLodLevel(pMVar5, param_1_00, local_34, fVar7);
                        param_1->SetLodLevel(iVar6, iVar2 + *(int*)(pMVar5 + 24));
                        iVar6 = iVar6 + 1;
                    } while (iVar6 != 3);
                } else {
                    param_1->SetLodLevel(0, 4);
                }
            }
        }
    }

    // 0x10081fea0, 208 bytes, placed by class name
    // Model::SetPointLightBounds(int, int, int, int)
    void Model::SetPointLightBounds(int param_1, int param_2, int param_3, int param_4) {
        vector* pvVar1;
        float* pfVar2;
        undefined4 in_register_00000034;
        undefined1* this_00;

        this_00 = &field_320;
        pvVar1 = this_00->SSOBeginPtr((type*)CONCAT44(in_register_00000034, param_1));
        *(float*)pvVar1 = (float)param_1 * 128.0;
        pfVar2 = (float*)this_00->y();
        *pfVar2 = (float)param_2 * 128.0;
        pfVar2 = (float*)this_00->second();
        *pfVar2 = (float)((param_3 + param_1) * 128) + -1.0;
        pfVar2 = (float*)this_00->qw();
        *pfVar2 = (float)((param_4 + param_2) * 128) + -1.0;
    }

    // 0x10081ff70, 240 bytes, placed by class name
    // Model::SetPointLightBounds(math::Vector3T<float> const&, int, int)
    void Model::SetPointLightBounds(Vector3T* param_1, int param_2, int param_3) {
        float fVar1;
        int iVar2;
        int iVar3;
        vector* pvVar4;
        float* pfVar5;
        int iVar6;
        float fVar7;
        float fVar8;
        float fVar9;

        pvVar4 = param_1->SSOBeginPtr(param_1);
        if ((param_2 & 1U) == 0) {
            fVar7 = (float)(param_2 << 6);
        } else {
            fVar7 = (float)(param_2 << 7) * 0.5;
        }
        fVar9 = *(float*)pvVar4;
        pfVar5 = (float*)param_1->second();
        fVar1 = *pfVar5;
        if ((param_3 & 1U) == 0) {
            fVar8 = (float)(param_3 << 6);
        } else {
            fVar8 = (float)(param_3 << 7) * 0.5;
        }
        fVar7 = (float)floor(fVar9 - fVar7);
        fVar9 = (float)floor(fVar1 - fVar8);
        iVar2 = (int)fVar9;
        iVar6 = iVar2 + 127;
        if (-1 < iVar2) {
            iVar6 = iVar2;
        }
        iVar3 = (int)fVar7;
        iVar2 = iVar3 + 127;
        if (-1 < iVar3) {
            iVar2 = iVar3;
        }
        SetPointLightBounds(this, iVar2 >> 7, iVar6 >> 7, param_2, param_3);
    }

    // 0x100820060, 240 bytes, placed by class name
    // Model::UpdatePointLightBounds()
    void Model::UpdatePointLightBounds() {
        AABB* pAVar2;
        vector* pvVar3;
        float* pfVar4;
        type* ptVar5;
        float fVar6;
        float fVar7;
        undefined1 local_58[32];
        undefined8 local_38;
        undefined8 local_30;
        float local_28;
        float local_24;

        pAVar2 = (AABB*)GetScreen();
        new (local_58) math::AABB(pAVar2);
        if (local_58->IsValid() != '\0') {
            ptVar5 = (type*)&m_worldTransform;
            local_58->Transform(ptVar5);
            local_24 = (float)local_58->GetWidth();
            local_24 = local_24 + 1.0;
            fVar6 = (float)local_58->GetHeight();
            fVar6 = fVar6 + 1.0;
            new (&local_30) math::Point<float>(local_24, fVar6);
            local_38 = math::operator/((Vector2T*)&local_30, 128.0);
            local_30 = local_58->GetCentrePos();
            local_28 = fVar6;
            pvVar3 = local_38.SSOBeginPtr(ptVar5);
            fVar6 = (float)ceil(*(float*)pvVar3);
            pfVar4 = (float*)local_38.y();
            fVar7 = (float)ceil(*pfVar4);
            SetPointLightBounds(this, (Vector3T*)&local_30, (int)fVar6, (int)fVar7);
        }
    }

    // 0x100820150, 1216 bytes, placed by class name
    // Model::CalculateLabelCentres()
    void Model::CalculateLabelCentres() {
        undefined1* this_00;
        undefined1* this_01;
        char cVar1;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar2;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar3;
        GeometryBatchInstance* pGVar4;
        GeometryBatch* pGVar5;
        Layout* pLVar6;
        ushort* puVar7;
        ushort* puVar8;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar9;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar10;
        BillboardBatchInstance* pBVar11;
        Vector3T<float>* pVVar12;
        Vector3T<float>* pVVar13;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_02;
        ObjTypeList* pOVar14;
        vector_map<unsigned short, eastl::vector<unsigned short, eastl::allocator>, eastl::less<unsigned short>,
                   eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                                 eastl::allocator>>* pvVar15;
        vector<BillboardBatchVertex, eastl::allocator>* this_03;
        long lVar16;
        long lVar17;
        ushort* puVar18;
        ushort* puVar19;
        Vector3T* pVVar20;
        undefined1* this_04;
        ushort uVar21;
        bool bVar22;

        this_00 = &field_656;
        puVar2 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     this_00->HeapBeginPtr();
        puVar3 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                     this_00->end();
        if (puVar2 == puVar3) {
            uVar21 = 0;
            bVar22 = false;
        } else {
            bVar22 = false;
            uVar21 = 0;
            do {
                pGVar4 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar2);
                pGVar5 = (GeometryBatch*)pGVar4->GetGeometryBatch();
                cVar1 = pGVar5->HasBones();
                if (cVar1 != '\0') {
                    pLVar6 = (Layout*)pGVar5->GetBoneIDMap();
                    puVar7 = (ushort*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(pLVar6);
                    puVar8 = (ushort*)pLVar6->end();
                    bVar22 = true;
                    for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
                        if (uVar21 < *puVar7) {
                            uVar21 = *puVar7;
                        }
                    }
                }
                puVar2 = puVar2 + 8;
            } while (puVar2 != puVar3);
        }
        this_01 = &field_688;
        puVar9 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                     this_01->HeapBeginPtr();
        puVar10 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                      this_01->end();
        for (; puVar9 != puVar10; puVar9 = puVar9 + 8) {
            pBVar11 =
                (BillboardBatchInstance*)
                    std::unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(puVar9);
            pGVar5 = (GeometryBatch*)pBVar11->GetBillboardBatch();
            cVar1 = pGVar5->HasBones();
            if (cVar1 != '\0') {
                pLVar6 = (Layout*)pGVar5->GetBoneIDMap();
                puVar7 = (ushort*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(pLVar6);
                puVar8 = (ushort*)pLVar6->end();
                bVar22 = true;
                for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
                    if (uVar21 < *puVar7) {
                        uVar21 = *puVar7;
                    }
                }
            }
        }
        if (bVar22) {
            this_04 = &field_816;
            this_04->clear();
            this_04->set_max_size((ulong)uVar21 + 1, 0);
            puVar2 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    this_00->HeapBeginPtr();
            puVar3 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    this_00->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 8) {
                pGVar4 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar2);
                pOVar14 = (ObjTypeList*)pGVar4->GetGeometryBatch();
                cVar1 = pOVar14->HasBones();
                if (cVar1 != '\0') {
                    pLVar6 = (Layout*)pOVar14->GetBoneIDMap();
                    pvVar15 =
                        (vector_map<
                            unsigned short, eastl::vector<unsigned short, eastl::allocator>,
                            eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                                          eastl::allocator>>*)pOVar14->GetModelCache();
                    this_02 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                  pOVar14->GetVertexDataBufferPos();
                    cVar1 = eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_02);
                    if (cVar1 != '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("!vertexData.empty()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/model/Model.cpp",
                                  2419, (char*)0);
                    }
                    puVar7 = (ushort*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(pLVar6);
                    puVar8 = (ushort*)pLVar6->end();
                    for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
                        lVar16 = eastl::vector_map<
                            unsigned short, eastl::vector<unsigned short, eastl::allocator>,
                            eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                                          eastl::allocator>>::find(pvVar15, puVar7 + 1);
                        lVar17 = pvVar15->end();
                        if (lVar16 != lVar17) {
                            puVar18 = (ushort*)((lVar16 + 8))->HeapBeginPtr();
                            puVar19 = (ushort*)((lVar16 + 8))->end();
                            for (; puVar18 != puVar19; puVar18 = puVar18 + 1) {
                                pVVar20 =
                                    (Vector3T*)eastl::vector<GeometryBatchVertexPos, eastl::allocator>::operator[](
                                        (vector<GeometryBatchVertexPos, eastl::allocator>*)this_02, (ulong)*puVar18);
                                pVVar12 = (Vector3T<float>*)Array<LabelData, eastl::allocator>::operator[](
                                    (Array<LabelData, eastl::allocator>*)this_04, (ulong)*puVar7);
                                math::Vector3T<float>::operator+=(pVVar12, pVVar20);
                                lVar16 = Array<LabelData, eastl::allocator>::operator[](
                                    (Array<LabelData, eastl::allocator>*)this_04, (ulong)*puVar7);
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
                pBVar11 = (BillboardBatchInstance*)std::unique_ptr<
                              BillboardBatchInstance,
                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(puVar9);
                pOVar14 = (ObjTypeList*)pBVar11->GetBillboardBatch();
                cVar1 = pOVar14->HasBones();
                if (cVar1 != '\0') {
                    pLVar6 = (Layout*)pOVar14->GetBoneIDMap();
                    pvVar15 =
                        (vector_map<
                            unsigned short, eastl::vector<unsigned short, eastl::allocator>,
                            eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                                          eastl::allocator>>*)pOVar14->GetModelCache();
                    this_03 = (vector<BillboardBatchVertex, eastl::allocator>*)pOVar14->GetChildren();
                    puVar7 = (ushort*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(pLVar6);
                    puVar8 = (ushort*)pLVar6->end();
                    for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
                        lVar16 = eastl::vector_map<
                            unsigned short, eastl::vector<unsigned short, eastl::allocator>,
                            eastl::less<unsigned short>, eastl::allocator,
                            eastl::vector<eastl::pair<unsigned short, eastl::vector<unsigned short, eastl::allocator>>,
                                          eastl::allocator>>::find(pvVar15, puVar7 + 1);
                        lVar17 = pvVar15->end();
                        if (lVar16 != lVar17) {
                            puVar18 = (ushort*)((lVar16 + 8))->HeapBeginPtr();
                            puVar19 = (ushort*)((lVar16 + 8))->end();
                            for (; puVar18 != puVar19; puVar18 = puVar18 + 1) {
                                pVVar20 = (Vector3T*)eastl::vector<BillboardBatchVertex, eastl::allocator>::operator[](
                                    this_03, (ulong)*puVar18);
                                pVVar12 = (Vector3T<float>*)Array<LabelData, eastl::allocator>::operator[](
                                    (Array<LabelData, eastl::allocator>*)this_04, (ulong)*puVar7);
                                math::Vector3T<float>::operator+=(pVVar12, pVVar20);
                                lVar16 = Array<LabelData, eastl::allocator>::operator[](
                                    (Array<LabelData, eastl::allocator>*)this_04, (ulong)*puVar7);
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
                    math::Vector3T<float>::operator/=(pVVar12, (float)*(int*)(pVVar12 + 12));
                }
            }
        }
    }

    // 0x100820690, 176 bytes, placed by class name
    // Model::DeferredRenderKeepAlive(shared_ptr<Model> const&)
    void Model::DeferredRenderKeepAlive(shared_ptr* param_1) {
        undefined1 auVar2[16];
        shared_ptr local_40;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30[16];

        if (!shared_ptr::operator_cast_to_bool(param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("model",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.cpp",
                      2473, (char*)0);
        }
        auVar2 = param_1->Instance();
        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_40, (jag*)param_1,
                                                                                     auVar2._8_8_);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            local_30, &local_40);
        auVar2._0_8_->KeepAliveSharedPtr(local_30, 1);
        local_30->~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x100849030, 16 bytes, placed by class name
    // Model::ConstructFinishAndUpload()::$_2::operator()(render::RenderContext&) const
    /* Model::ConstructFinishAndUpload()::$_2::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
   const */

    void Model::ConstructFinishAndUpload()::$_2::operator()(RenderContext* param_1) {
        ConstructFinishAndUploadInternal(field_0);
    }

    // 0x100852520, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.92
    void ___cxx_global_var_init_92(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&Model::NullModel) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5398, &Model::NullModel, 4294967296);
    }

    // 0x100852560, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.96
    void ___cxx_global_var_init_96() {
        new (&Model::m_lodConfigNiceNames) StringEnum((StringEnumEntry*)&Model::m_lodConfigNiceNames__, 3);
        ___cxa_atexit(StringEnum::~StringEnum, &Model::m_lodConfigNiceNames, 4294967296);
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10080f970, 16 bytes, inline, placed by debug map only (low confidence)
    // bool operator!=<float>(Vector4T<float> const&, Vector4T<float> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(Vector4T<float> const&,
   Vector4T<float> const&) */

    bool operator!=(Vector4T* param_1, Vector4T* param_2) {
        bool bVar1;

        bVar1 = operator==(param_1, param_2);
        return !bVar1;
    }

} // namespace jag::math
