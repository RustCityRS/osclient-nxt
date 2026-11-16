// libs/graphics/runetek7/model/Model.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class Model {
    public:
        // virtual methods in vtable order
        virtual ~Model();
        uint32_t GetLevel() const;
        uint8_t* GetAABB() const;
        uint8_t* GetTextureAtlasReferences() const;
        uint8_t* GetBatchList();
        uint8_t* GetBatchList() const;
        uint8_t* GetTint() const;
        uint8_t* GetWorldTransform() const;
        void GetBatchCount() const;
        void SetWorldTransform(const math::Matrix44T<float>& matrix44);
        uint8_t GetConstructedState() const;
        void SetUseUncompressedTextures(bool arg1);
        void UpdateFade(unsigned long long arg1);
        void GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core, const SceneViewData& sceneViewData,
                                    const EffectManager& effectManager);
        uint8_t* GetLabelCentres() const;
        void GetNumExtant();
        uint8_t* GetLocalTransform() const;
        void SetLabelCentres(const Array<LabelData>& labelDatas);
        uint8_t* GetPointLightBounds() const;
        uint8_t* GetHighlightedSectionColour() const;
        int GetExternalID() const;
        unsigned int GetSavedModelHash() const;
        int GetModelRawUniqueID() const;
        uint8_t* GetParticleEffectors();
        uint8_t* GetParticleEffectors() const;
        uint8_t* GetIrradianceEffect();
        uint8_t* GetIrradianceEffect() const;
        bool IsLoaded() const;
        void SetFadeTime(unsigned int arg1);
        void SetLevel(int arg1);
        int GetTotalBatchCount() const;
        void ClearHighlight();
        uint8_t* GetHighlightColour() const;
        bool HasHighlight() const;
        bool IsEmptyModel() const;
        void ClearHighlightedSection();
        bool HasHighlightedSection() const;
        uint8_t* GetBillboardBatchList();
        uint8_t* GetBillboardBatchList() const;
        uint8_t TransformStarted() const;
        uint32_t* GetSavedModelHashList() const;
        uint8_t* GetParticleEmitters();
        uint8_t* GetParticleEmitters() const;
        void SetSourceModelIDs(eastl::vector<int>&& arg1);
        void SetSourceModelIDs(int arg1);
        void SetSourceModelIDs(const Array<int>& arg1);
        shared_ptr GetGeometryQuery() const;
        void SetSavedModelHash(unsigned int arg1);
        void SetLocalTransform(const math::Matrix44T<float>& matrix44);
        bool HasParticleEmitters() const;
        bool HasVFXs() const;
        void SetGeometryQuery(const shared_ptr<GeometryQuery>& geometryQuery);
        float GetHighlightScale() const;
        void GetLodConfig(LodPassType lodPassType);
        unsigned int CalculateLodLevel(const ModelLodPassConfig& modelLodPassConfig, float arg2, float arg3,
                                       float arg4);
        void SelectTextureInclusionMode(const TextureInclusionMode* textureInclusionMode);
        float GetHighlightSilhouetteAlpha() const;
        uint8_t GetHighlightsIgnoreDepth() const;
        uint32_t GetHighlightedSectionScale() const;
        Model();
        Model(const Model& model, ModelCopyType arg2);
        void SetTextureAtlasReferences(
            const eastl::fixed_vector<shared_ptr<TextureAtlasReference>, 1ul>& textureAtlasReferences);
        void SetBatchAtlasReferences();
        void ConstructFinishAndUpload();
        Model(const Model& arg1, ModelCopyType arg2);
        void SetExternalID(int arg1, bool arg2);
        unsigned long IsTransformed() const;
        void StartTransform();
        void EndTransform(bool arg1);
        void SetModelRawUniqueID(int arg1);
        void NewModelRawUniqueID();
        void UpdateAABB();
        void SetRenderFlags(unsigned int arg1);
        unsigned long HasAlphaBlendedFaces() const;
        unsigned long HasOpaqueOrTestedFaces() const;
        void SetPointLightIndicesVertexData(bool arg1);
        void SetHighlight(float arg1, const math::Vector4T<float>& vector4);
        void SetHighlight(float arg1, const math::Vector4T<float>& vector4, float arg3);
        void SetHighlightsIgnoreDepth(bool arg1);
        void SetHighlightedSection(float arg1, const math::Vector4T<float>& vector4);
        void SetCastsShadows(bool arg1);
        unsigned long GetCastsShadows() const;
        void ClearAnimationState();
        void SetAnimationStateProvider(const shared_ptr<AnimationStateProvider>& animationStateProvider);
        void UpdateAnimation(ThreadPool& threadPool, unsigned int arg2);
        void EndUpdateAnimation();
        void IsReadyToConstruct(RT7Core* rt7Core);
        void Append(Model&& model);
        void Append(const Model& model);
        void WeldTouchingBatches();
        void ConstructFromGeometryBatch(ModelConstructedState arg1, shared_ptr<GeometryBatch>& arg2, int arg3,
                                        RT7Core* arg4);
        void CombineBatches(TextureManager& textureManager);
        void SortSections();
        void ConstructCommon(ModelConstructedState arg1, MaterialManager& arg2, TextureManager& arg3);
        void SetupInitialMaterials(const MaterialManager& materialManager);
        void BakeMaterialInfoAndTextureMetaAndHSLColors(const MaterialManager& materialManager,
                                                        TextureManager& textureManager, bool arg3);
        void BakeBatchFlags();
        void BakeHSLColors(const MaterialManager& materialManager);
        void ConstructFromModelRawRT7(ModelConstructedState arg1, RT7Core* arg2, PacketView arg3);
        void LoadDataFromModelRawRT7(PacketView packetView);
        void BakeTile(unsigned char arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4,
                      unsigned char arg5, unsigned char arg6, unsigned char arg7);
        uint8_t* GetTextureAtlasUsage() const;
        auto GetMaterialIDList() const;
        void BakeMaterialInfoAndTextureMetaAndHSLColors(RT7Core& rt7Core, bool arg2);
        void SortBatches();
        bool GetUseUncompressedTextures() const;
        void ConstructAtlasFromWorker(
            eastl::fixed_hash_map<unsigned int, Model const*, 256ul, 257ul, true, eastl::hash<unsigned int>,
                                  eastl::equal_to<unsigned int>, false> const* fixed_hash_map,
            Model* model);
        void ConstructFinishAndUploadInternal();
        void CreateSecondaryVertexBuffers();
        void CreateRenderingResources();
        void SetFadeTransitionable(const math::Transitionable<float>& transitionable, unsigned long long arg2);
        void StartFade();
        void Transform(const math::Matrix44T<float>& matrix44);
        void CheckUploaded(const char* str1, const char* str2);
        void TransformNormals(const math::Matrix44T<float>& matrix44, bool arg2);
        void Translate(const math::Vector3T<float>& vector3);
        void Rotate(const math::QuaternionT<float>& quaternion, bool arg2);
        void Rotate90(Rotation90 rotation90, bool arg2);
        void Scale(const math::Vector3T<float>& vector3);
        void MirrorZ();
        void HillChange(graphics::HillChange arg1, int arg2, int arg3, int arg4, Rotation90 arg5,
                        const Array<Array<int>>& arg6, const Array<Array<int>>& arg7, int arg8);
        void HillChangeLocalTransform(graphics::HillChange arg1, int arg2, int arg3, int arg4, Rotation90 arg5,
                                      const Array<Array<int>>& arg6, const Array<Array<int>>& arg7, int arg8);
        void RecolourSingle(unsigned short arg1, unsigned short arg2);
        void Recolour(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2);
        void Rematerial(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2);
        void RematerialSingle(unsigned short arg1, unsigned short arg2);
        void AmbientAdjust(unsigned short arg1);
        void TintAdjust(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4);
        void Update(RT7Core& rt7Core, unsigned int arg2, unsigned long long arg3);
        void EndUpdate();
        void UpdateParticleEmitters(RT7Core& rt7Core,
                                    eastl::fixed_vector<shared_ptr<ParticleSystem>, 1ul>& particleSystems,
                                    const math::Matrix44T<float>& matrix44,
                                    AnimationStateProvider* animationStateProvider,
                                    const eastl::vector_map<int, FaceGroupRenderMasks>* arg5, bool arg6);
        void UpdateModularParticleSystems(RT7Core& rt7Core,
                                          eastl::vector<shared_ptr<ModularParticleSystem>>& modularParticleSystems,
                                          const math::Matrix44T<float>& matrix44,
                                          AnimationStateProvider* animationStateProvider,
                                          const eastl::vector_map<int, FaceGroupRenderMasks>* arg5, bool arg6);
        void GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core, const SceneViewData& sceneViewData,
                                    const EffectManager& effectManager,
                                    const eastl::vector_map<int, FaceGroupRenderMasks>* arg5);
        unsigned long IsReadyToRender() const;
        void GatherDrawableElementsPrefetch();
        void DestroyRenderingResources();
        void SetLodLevel(unsigned int arg1);
        void BakeShareLight();
        void SetShareLightBatches(bool arg1);
        float GetLoadProgress() const;
        unsigned long TexturesReady() const;
        uint32_t ShadersReady() const;
        uint64_t GetTextureAtlasReference() const;
        void SetDefaultLODs(GeometryBatchInstance* geometryBatchInstance, const EffectManager& effectManager,
                            RenderPassType renderPassType, const SceneViewData& sceneViewData, float arg5,
                            const math::OBB& obb);
        void SetPointLightBounds(int arg1, int arg2, int arg3, int arg4);
        void SetPointLightBounds(const math::Vector3T<float>& vector3, int arg2, int arg3);
        void UpdatePointLightBounds();
        void CalculateLabelCentres();
        void DeferredRenderKeepAlive(const shared_ptr<Model>& model);
        void SetConstructedState(ModelConstructedState arg1);
        void SetAABB(const math::AABB& aabb);
        void AddSavedModelHashList(unsigned int arg1);
        uint32_t GetCurrentFade() const;
        void SetTint(const math::Vector4T<float>& vector4);
        static int32_t m_lodConfigs[24];           // initialised in its definition
        static int32_t m_lodConfigNiceNames__[12]; // = { 0, 0, 14658420, 1, 1, 0, 14658437, 1, 2, 0, 14658444, 1 }
        static bool m_ShowMeshes;                  // = 1
        static bool m_ShowBillboards;              // = 1
        static bool m_DoModelWelding;              // = 1
        static bool m_gatherShareLightOnly;        // = 0
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullModel;                          // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static StringEnum m_lodConfigNiceNames; // = StringEnum((StringEnumEntry *)&m_lodConfigNiceNames__, 3)
        static int32_t m_NumExtant;
        static int32_t m_NextUniqueID;

    private:
        uint8_t _unknown_8[40];
        uint64_t m_worldTransform;
        uint64_t field_56;
        uint64_t field_64;
        uint64_t field_72;
        uint64_t field_80;
        uint64_t field_88;
        uint64_t field_96;
        uint64_t field_104;
        uint64_t field_112;
        uint64_t field_120;
        uint64_t field_128;
        uint64_t field_136;
        uint64_t field_144;
        uint64_t field_152;
        uint64_t field_160;
        uint64_t field_168;
        uint64_t m_localTransform;
        uint64_t field_184;
        uint64_t field_192;
        uint64_t field_200;
        uint64_t field_208;
        uint64_t field_216;
        uint64_t field_224;
        uint64_t field_232;
        uint64_t m_tint;
        uint64_t field_248;
        uint64_t m_highlightColour;
        uint64_t field_264;
        float m_highlightScale;
        float m_highlightSilhouetteAlpha;
        bool m_highlightsIgnoreDepth;
        uint8_t _unknown_281[7];
        uint64_t m_highlightedSectionColour;
        uint64_t field_296;
        uint32_t m_highlightedSectionScale;
        uint8_t _unknown_308[4];
        uint32_t m_level;
        uint8_t _unknown_316[20];
        int m_modelRawUniqueID;
        int m_externalID;
        unsigned int m_savedModelHash;
        uint8_t _unknown_348[68];
        ModelConstructedState field_416;
        uint8_t _unknown_417[7];
        uint8_t m_textureAtlasReferences[16];
        uint8_t _unknown_440[40];
        uint64_t field_480;
        uint64_t field_488;
        uint64_t field_496;
        uint64_t field_504;
        unsigned int m_fadeTime;
        uint32_t m_currentFade;
        uint8_t _unknown_520[120];
        bool m_useUncompressedTextures;
        uint8_t _unknown_641[199];
        shared_ptr m_geometryQuery;
        uint8_t _unknown_856[80];
        uint8_t field_936;
        uint8_t field_937;
        uint8_t field_938;
        uint8_t _unknown_939[5];
    };

    class ModelTextureMeta {
    public:
        ModelTextureMeta();
    };

    class ModelUpdateManager {
    public:
        void AddToUpdateList(const shared_ptr<Model>& model);
        ~ModelUpdateManager();

    private:
        uint8_t _unknown_0[8];
        weak_ptr<oldscape::dash3d::Decor>* field_8;
    };

    // 0x1001d0a30
    void Model::GetBatchCount() const {
        field_656.size();
    }

    // 0x1001d1290
    void Model::SetWorldTransform(const math::Matrix44T<float>& matrix44) {
        Matrix44T<float> local_68;

        field_112 = matrix44;
        local_68* m_localTransform;
        m_worldTransform = local_68;
    }

    // 0x1001d1370
    uint8_t Model::GetConstructedState() const {
        return field_416[0];
    }

    // 0x1001d1380
    void Model::SetUseUncompressedTextures(bool arg1) {
        m_useUncompressedTextures = arg1;
    }

    // 0x1001d1540
    void Model::UpdateFade(unsigned long long arg1) {
        m_currentFade = field_480.GetValue(arg1);
    }

    // 0x1001d1720
    void Model::GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                       const SceneViewData& sceneViewData, const EffectManager& effectManager) {
        GatherDrawableElements(drawableQueue, rt7Core, sceneViewData, effectManager, nullptr);
    }

    // 0x1002eeed0
    uint8_t* Model::GetLabelCentres() const {
        return m_textureAtlasManager;
    }

    // 0x1002f22d0
    void Model::GetNumExtant() {
        return m_NumExtant;
    }

    // 0x100350d70
    void Model::SetLabelCentres(const Array<LabelData>& labelDatas) {
        field_816 = labelDatas;
    }

    // 0x10042c8b0
    bool Model::IsLoaded() const {
        return 3 < (uint8_t)field_416[0];
    }

    // 0x10042e1e0
    void Model::SetFadeTime(unsigned int arg1) {
        m_fadeTime = arg1;
    }

    // 0x10042e410
    void Model::SetLevel(int arg1) {
        m_selectionStart = arg1;
    }

    // 0x100430610
    int Model::GetTotalBatchCount() const {
        int iVar1 = field_656.size();
        return field_688.size() + iVar1;
    }

    // 0x100431550
    void Model::ClearHighlight() {
        if (HasHighlight() != '\0') {
            m_highlightScale = 0.0;
            m_highlightColour = *PTR_ZERO_100ee6708;
        }
    }

    // 0x100432550
    bool Model::HasHighlight() const {
        auto pfVar1 = m_highlightColour.qw();
        return 0.0 < *pfVar1;
    }

    // 0x100445ee0
    bool Model::IsEmptyModel() const {
        uint64_t uVar2;

        if (GetTotalBatchCount() == 0) {
            uVar2 = field_720.empty();
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x100449840
    void Model::ClearHighlightedSection() {
        if (HasHighlightedSection() != '\0') {
            m_highlightedSectionScale = 0;
            m_highlightedSectionColour = *PTR_ZERO_100ee6708;
        }
    }

    // 0x10044d670
    bool Model::HasHighlightedSection() const {
        auto pfVar1 = m_highlightedSectionColour.qw();
        return 0.0 < *pfVar1;
    }

    // 0x1004964c0
    uint8_t Model::TransformStarted() const {
        return field_936;
    }

    // 0x1005083d0
    void Model::SetSourceModelIDs(eastl::vector<int>&& arg1) {
        field_384 = arg1;
    }

    // 0x1005092f0
    void Model::SetSourceModelIDs(int arg1) {
        vector<int> local_50;

        local_50.vector<int>(1, arg1, local_30);
        field_384 = local_50;
    }

    // 0x1005463c0
    void Model::SetSourceModelIDs(const Array<int>& arg1) {
        vector<int> local_58;

        auto arg1_00 = arg1.data();
        auto arg2 = arg1.end();
        local_58.vector<int const*>(arg1_00, arg2, local_38);
        field_384 = local_58;
    }

    // 0x10064eaa0
    void Model::SetSavedModelHash(unsigned int arg1) {
        m_savedModelHash = arg1;
    }

    // 0x10064f190
    void Model::SetLocalTransform(const math::Matrix44T<float>& matrix44) {
        Matrix44T<float> local_68;

        m_localTransform = matrix44;
        local_68* m_localTransform;
        m_worldTransform = local_68;
    }

    // 0x100667c60
    bool Model::HasParticleEmitters() const {
        return field_720.empty() ^ 1;
    }

    // 0x100667cc0
    bool Model::HasVFXs() const {
        return field_784.empty() ^ 1;
    }

    // 0x10066a0c0
    void Model::SetGeometryQuery(const shared_ptr<GeometryQuery>& geometryQuery) {
        *m_geometryQuery = geometryQuery;
    }

    // 0x10066a0e0
    float Model::GetHighlightScale() const {
        return m_highlightScale;
    }

    // 0x10080def0
    void Model::GetLodConfig(LodPassType lodPassType) {
        uint32_t in_register_00000034;

        (*((array<ModelLodPassConfig, 3ul>*)(long)(int)this))[(((uint64_t)in_register_00000034 << 32) |
                                                               (uint32_t)lodPassType)];
    }

    // 0x1008139e0
    float Model::GetHighlightSilhouetteAlpha() const {
        return m_highlightSilhouetteAlpha;
    }

    // 0x100814970
    uint8_t Model::GetHighlightsIgnoreDepth() const {
        return m_highlightsIgnoreDepth;
    }

    // 0x100815480
    uint32_t Model::GetHighlightedSectionScale() const {
        return m_highlightedSectionScale;
    }

    // 0x1008180a0
    void Model::SetModelRawUniqueID(int arg1) {
        m_bussID = arg1;
    }

    // 0x1008180b0
    void Model::NewModelRawUniqueID() {
        m_NextUniqueID = m_NextUniqueID + 1;
    }

    // 0x10081c2a0
    bool Model::GetUseUncompressedTextures() const {
        return m_useUncompressedTextures;
    }

    // 0x10081cc80
    void Model::CheckUploaded(const char* str1, const char* str2) {
        if (field_937 != '\0') {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "Model.h",
                      537, "%s: Cannot %s a model already uploaded to the card", str1, str2);
        }
    }

    // 0x100821120
    void Model::SetConstructedState(ModelConstructedState arg1) {
        field_416[0] = param_2;
    }

    // 0x100821130
    void Model::SetAABB(const math::AABB& aabb) {
        field_16 = aabb;
    }

    // 0x100821140
    void Model::AddSavedModelHashList(unsigned int arg1) {
        field_352.push_back(arg1);
    }

    // 0x100847f10
    bool Model::SortBatches()::$_0::operator()(
        const std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>&
            geometryBatchInstance1,
        const std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>&
            geometryBatchInstance2) const {
        int iVar2;
        int iVar3;

        GeometryBatchInstance* pGVar4 = (GeometryBatchInstance*)(*this).operator->();
        auto pAVar5 = pGVar4->GetMaterial();
        unsigned long uVar6 = pAVar5->data();
        pGVar4 = (GeometryBatchInstance*)geometryBatchInstance1.operator->();
        pAVar5 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pGVar4->GetMaterial();
        unsigned long uVar7 = pAVar5->data();
        bool bVar1 = true;
        if (uVar7 <= uVar6) {
            if (uVar6 == uVar7) {
                pGVar4 = (GeometryBatchInstance*)(*this).operator->();
                iVar2 = pGVar4->GetFirstSequenceIDFromSource();
                pGVar4 = (GeometryBatchInstance*)geometryBatchInstance1.operator->();
                iVar3 = pGVar4->GetFirstSequenceIDFromSource();
                bVar1 = iVar2 < iVar3;
            } else {
                bVar1 = false;
            }
        }
        return bVar1;
    }

    // 0x1008488d0
    bool Model::SortBatches()::$_1::operator()(
        const std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>&
            billboardBatchInstance1,
        const std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>&
            billboardBatchInstance2) const {
        int iVar2;
        int iVar3;
        BillboardBatchInstance* pBVar8;

        GeometryBatchInstance* pGVar4 = (GeometryBatchInstance*)(*this).operator->();
        auto pAVar5 = pGVar4->GetMaterial();
        unsigned long uVar6 = pAVar5->data();
        pGVar4 = (GeometryBatchInstance*)billboardBatchInstance1.operator->();
        pAVar5 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pGVar4->GetMaterial();
        unsigned long uVar7 = pAVar5->data();
        bool bVar1 = true;
        if (uVar7 <= uVar6) {
            if (uVar6 == uVar7) {
                pBVar8 = (BillboardBatchInstance*)(*this).operator->();
                iVar2 = pBVar8->GetFirstSequenceIDFromSource();
                pBVar8 = (BillboardBatchInstance*)billboardBatchInstance1.operator->();
                iVar3 = pBVar8->GetFirstSequenceIDFromSource();
                bVar1 = iVar2 < iVar3;
            } else {
                bVar1 = false;
            }
        }
        return bVar1;
    }

    // 0x100849090
    auto Model::UpdateModularParticleSystems(
        RT7Core&, eastl::vector<shared_ptr<ModularParticleSystem>>&, math::Matrix44T<float> const&,
        AnimationStateProvider*, eastl::vector_map<int, FaceGroupRenderMasks> const*,
        bool)::$_3::operator()<shared_ptr<ModularParticleSystem>>(const shared_ptr<ModularParticleSystem>&
                                                                      modularParticleSystem) const {
        return ((ModularParticleSystem*)(*this).operator->())->IsFinished();
    }

    // 0x100869330
    uint32_t Model::GetCurrentFade() const {
        return m_currentFade;
    }

    // 0x10091b490
    void Model::SetTint(const math::Vector4T<float>& vector4) {
        m_tint = vector4;
    }

} // namespace jag::graphics

namespace jag {
    class Model {
    public:
        bool SortTriangles<false>(int arg1, int arg2, int arg3, int arg4);
        bool SortTriangles<true>(int arg1, int arg2, int arg3, int arg4);
        void Init(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4, bool arg5,
                  const int* arg6, const int* arg7, const int* arg8, const int* arg9, const int* arg10,
                  const int* arg11, const int* arg12, const int* arg13, const int* arg14, const int* arg15,
                  const int* arg16, const int* arg17, const unsigned char* arg18, const short* arg19,
                  const unsigned char* arg20, const signed char* arg21, const int* arg22, const int* arg23,
                  signed char arg24, signed char arg25, signed char arg26, unsigned char arg27, unsigned short arg28);
        void TransformVertices(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9,
                               int arg10, int arg11) const;
        void TransformVerticesScalar(unsigned int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                     int arg8, int arg9, int arg10, int arg11, int arg12) const;
        void DummySortTriangles();
        int GetNumOutlineVerts() const;
        Callstack GetTintMode() const;
        int RenderOutline(unsigned int arg1, TriangleVertexData* triangleVertexData, int arg3, unsigned short arg4,
                          unsigned short arg5);
        int RenderTriangles(unsigned int arg1, TriangleVertexData* triangleVertexData);
        void Calculate2DAABB(short& arg1, short& arg2, short& arg3, short& arg4);
        uint64_t Render2DAABB(unsigned int arg1, TriangleVertexData* triangleVertexData, int arg3, unsigned char arg4,
                              unsigned short arg5);
        bool IsTemporary() const;
        int GetNumVerts() const;
        Model(Model&& model);
        Model();
        ~Model();

    private:
        unsigned int field_0;
        unsigned int field_4;
        unsigned int field_8;
        unsigned int field_12;
        Callstack m_tintMode;
        uint8_t _unknown_32[376];
        bool m_temporary;
    };

    // 0x1001b7fa0
    bool Model::SortTriangles<false>(int arg1, int arg2, int arg3, int arg4) {
        Array<std::array<TriangleVertexData, 3ul>>* this_00;
        uint8_t* this_01;
        uint8_t* this_02;
        short sVar1;
        short sVar2;
        short sVar3;
        short sVar4;
        short sVar5;
        short sVar6;
        uint16_t uVar8;
        int* piVar10;
        float* pfVar11;
        array<TriangleVertexData, 3ul>* paVar12;
        uint16_t* puVar13;
        uint16_t* puVar14;
        uint16_t* puVar15;
        short* psVar16;
        char* pcVar17;
        uint8_t* pbVar18;
        uint32_t in_register_0000000c;
        uint32_t in_register_00000014;
        long lVar19;
        uint32_t in_register_00000084;
        int iVar20;
        unsigned long arg1_00;
        int iVar21;
        long lVar22;
        long lVar23;
        unsigned long arg1_01;
        float arg1_02;
        float arg1_03;
        float fVar24;
        float fVar25;
        float fVar26;
        float fVar27;
        float fVar28;
        float fVar29;
        float fVar30;
        float fVar31;
        float fVar32;
        float fVar33;
        float fVar34;
        float fVar35;
        float fVar36;
        float fVar37;
        float fVar38;
        int local_5c;
        float local_58;
        float local_54;
        long local_50;
        unsigned long local_48;
        float local_3c;
        float local_38;
        float local_34;

        if (6000 < arg1) {
            LogAssert(
                "radixsize <= Model::MAX_MODEL_SIZE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/Model.cpp",
                440, nullptr);
        }
        ___bzero(&internal::zsize, (long)arg1 * 2, (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2),
                 (((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3),
                 (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4));
        internal::minZ = 2147483647;
        internal::maxZ = 0;
        auto pOVar9 = oldscape::OSRenderCore_RenderThread::Instance();
        if (field_8 != 0) {
            this_00 = (Array<std::array<TriangleVertexData, 3ul>>*)(m_tintMode + 8);
            this_01 = &field_360;
            this_02 = &field_384;
            arg1_01 = 0;
            do {
                piVar10 = &field_120[arg1_01];
                iVar21 = *piVar10;
                lVar19 = (long)iVar21;
                piVar10 = &field_144[arg1_01];
                iVar20 = *piVar10;
                pfVar11 = &field_168[arg1_01];
                if (lVar19 != -2) {
                    lVar22 = (long)iVar20;
                    lVar23 = (long)(int)*pfVar11;
                    if ((*(float*)(&internal::sxf + lVar23 * 4) - *(float*)(&internal::sxf + lVar22 * 4)) *
                            (*(float*)(&internal::syf + lVar19 * 4) - *(float*)(&internal::syf + lVar22 * 4)) <
                        (*(float*)(&internal::syf + lVar23 * 4) - *(float*)(&internal::syf + lVar22 * 4)) *
                            (*(float*)(&internal::sxf + lVar19 * 4) - *(float*)(&internal::sxf + lVar22 * 4))) {
                        local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)iVar20);
                        local_50 = lVar22;
                        local_34 = *pfVar11;
                        paVar12 = (array<TriangleVertexData, 3ul>*)(*this_00)[arg1_01];
                        puVar13 = (uint16_t*)(*paVar12)[0];
                        paVar12 = (array<TriangleVertexData, 3ul>*)(*this_00)[arg1_01];
                        puVar14 = (uint16_t*)(*paVar12)[1];
                        paVar12 = (array<TriangleVertexData, 3ul>*)(*this_00)[arg1_01];
                        puVar15 = (uint16_t*)(*paVar12)[2];
                        *puVar13 = *(uint16_t*)(&internal::cx + lVar19 * 2);
                        puVar13[1] = *(uint16_t*)(&internal::cy + lVar19 * 2);
                        puVar13[2] = *(uint16_t*)(&internal::cz + lVar19 * 2);
                        *puVar14 = *(uint16_t*)(&internal::cx + local_50 * 2);
                        puVar14[1] = *(uint16_t*)(&internal::cy + local_50 * 2);
                        puVar14[2] = *(uint16_t*)(&internal::cz + local_50 * 2);
                        *puVar15 = *(uint16_t*)(&internal::cx + lVar23 * 2);
                        puVar15[1] = *(uint16_t*)(&internal::cy + lVar23 * 2);
                        puVar15[2] = *(uint16_t*)(&internal::cz + lVar23 * 2);
                        local_5c = (((int)*(short*)(&internal::sortz + lVar23 * 2) +
                                     (int)*(short*)(&internal::sortz + local_50 * 2) +
                                     (int)*(short*)(&internal::sortz + lVar19 * 2)) *
                                            21845 +
                                        21845 >>
                                    16) +
                                   arg2;
                        local_38 = 0.0;
                        piVar10 = std::max<int>(local_38, local_5c);
                        iVar20 = *piVar10;
                        local_5c = iVar20;
                        piVar10 = std::min<int>(*(&internal::minZ), local_5c);
                        internal::minZ = *piVar10;
                        piVar10 = std::max<int>(*(&internal::maxZ), local_5c);
                        internal::maxZ = *piVar10;
                        if (arg1 <= iVar20) {
                            LogAssert("p < radixsize",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "osrendercore/Model.cpp",
                                      484, nullptr);
                        }
                        lVar22 = (long)local_5c;
                        sVar6 = (&internal::zsize)[lVar22];
                        (&internal::zsize)[lVar22] = sVar6 + 1;
                        (&internal::zlist)[lVar22 * 512 + (long)sVar6] = (short)arg1_01;
                        if (!(this_01->empty())) {
                            psVar16 = (short*)(*this_01)[arg1_01];
                            if (*psVar16 != -1) {
                                if (!(this_02->empty())) {
                                    pcVar17 = (char*)(*this_02)[arg1_01];
                                    iVar20 = (int)(float)local_48;
                                    if (*pcVar17 != -1) {
                                        pbVar18 = (uint8_t*)(*this_02)[arg1_01];
                                        arg1_00 = (unsigned long)*pbVar18;
                                        local_48 = arg1_00;
                                        piVar10 = &field_288[arg1_00];
                                        iVar21 = *piVar10;
                                        piVar10 = &field_312[arg1_00];
                                        iVar20 = *piVar10;
                                        pfVar11 = &field_336[local_48];
                                        local_34 = *pfVar11;
                                    }
                                } else {
                                    iVar20 = (int)(float)local_48;
                                }
                                lVar22 = (long)iVar21;
                                fVar29 = (float)(int)*(short*)(&internal::wx + lVar22 * 2);
                                fVar24 = (float)(int)*(short*)(&internal::wy + lVar22 * 2);
                                fVar36 = (float)(int)*(short*)(&internal::wz + lVar22 * 2);
                                lVar22 = (long)iVar20;
                                fVar31 = (float)(int)*(short*)(&internal::wx + lVar22 * 2) - fVar29;
                                fVar32 = (float)(int)*(short*)(&internal::wy + lVar22 * 2) - fVar24;
                                fVar38 = (float)(int)*(short*)(&internal::wz + lVar22 * 2) - fVar36;
                                lVar22 = (long)(int)local_34;
                                fVar34 = (float)(int)*(short*)(&internal::wx + lVar22 * 2) - fVar29;
                                sVar6 = *(short*)(&internal::wx + lVar19 * 2);
                                fVar35 = (float)(int)*(short*)(&internal::wy + lVar22 * 2) - fVar24;
                                fVar37 = (float)(int)*(short*)(&internal::wz + lVar22 * 2) - fVar36;
                                sVar1 = *(short*)(&internal::wy + lVar19 * 2);
                                sVar2 = *(short*)(&internal::wz + lVar19 * 2);
                                sVar3 = *(short*)(&internal::wx + local_50 * 2);
                                sVar4 = *(short*)(&internal::wy + local_50 * 2);
                                local_48 = (((uint64_t)local_48._4_4_ << 32) |
                                            (uint32_t)((float)(int)*(short*)(&internal::wx + lVar23 * 2) - fVar29));
                                local_34 = (float)(int)*(short*)(&internal::wy + lVar23 * 2) - fVar24;
                                sVar5 = *(short*)(&internal::wz + lVar23 * 2);
                                fVar25 = fVar37 * fVar32 - fVar35 * fVar38;
                                fVar26 = fVar34 * fVar38 - fVar37 * fVar31;
                                fVar30 = fVar35 * fVar31 - fVar34 * fVar32;
                                fVar27 = fVar30 * fVar35 - fVar26 * fVar37;
                                local_3c = fVar25 * fVar37 - fVar30 * fVar34;
                                fVar33 = fVar26 * fVar34 - fVar25 * fVar35;
                                fVar28 = 1.0 / (fVar33 * fVar38 + local_3c * fVar32 + fVar27 * fVar31);
                                local_38 =
                                    (fVar33 * ((float)(int)sVar2 - fVar36) + local_3c * ((float)(int)sVar1 - fVar24) +
                                     fVar27 * ((float)(int)sVar6 - fVar29)) *
                                    fVar28;
                                local_58 = -1.0;
                                local_54 = 1.0;
                                local_50._0_4_ = (float)(int)*(short*)(&internal::wz + local_50 * 2) - fVar36;
                                arg1_02 = math::Clamp<float>(local_38, local_58, local_54);
                                local_38 = ((float)local_50 * fVar33 + ((float)(int)sVar4 - fVar24) * local_3c +
                                            fVar27 * ((float)(int)sVar3 - fVar29)) *
                                           fVar28;
                                local_58 = -1.0;
                                local_54 = 1.0;
                                arg1_03 = math::Clamp<float>(local_38, local_58, local_54);
                                local_38 = (fVar33 * ((float)(int)sVar5 - fVar36) + local_3c * local_34 +
                                            fVar27 * (float)local_48) *
                                           fVar28;
                                local_58 = -1.0;
                                local_54 = 1.0;
                                local_3c = math::Clamp<float>(local_38, local_58, local_54);
                                fVar27 = fVar30 * fVar32 - fVar26 * fVar38;
                                fVar28 = fVar38 * fVar25 - fVar30 * fVar31;
                                fVar31 = fVar26 * fVar31 - fVar25 * fVar32;
                                fVar26 = 1.0 / (fVar37 * fVar31 + fVar35 * fVar28 + fVar34 * fVar27);
                                fVar25 = fVar27 * (float)local_48;
                                fVar30 = fVar28 * local_34;
                                local_50 =
                                    (((uint64_t)local_50._4_4_ << 32) |
                                     (uint32_t)(((float)local_50 * fVar31 + ((float)(int)sVar4 - fVar24) * fVar28 +
                                                 ((float)(int)sVar3 - fVar29) * fVar27) *
                                                fVar26));
                                psVar16 = (short*)(*this_01)[arg1_01];
                                sVar3 = *psVar16;
                                uVar8 = oldscape::OSRenderCore_RenderThread::GetAtlasUV((int)sVar3);
                                puVar15[3] = uVar8;
                                puVar14[3] = uVar8;
                                puVar13[3] = uVar8;
                                lVar19 = ((OSRenderCore_RenderThread_Common*)(pOVar9->field_32 +
                                                                              (long)(pOVar9->_vptr[-3].GetUISize - 32)))
                                             ->GetRenderStateNXT();
                                piVar10 = (int*)(*((lVar19 + 19678752)))[(long)sVar3];
                                iVar21 = *piVar10;
                                piVar10 = (int*)(*((lVar19 + 19679776)))[(long)sVar3];
                                iVar20 = *piVar10;
                                uVar8 = oldscape::OSRenderCore_RenderThread::GetLocalU(arg1_02, iVar21);
                                puVar13[6] = uVar8;
                                uVar8 = oldscape::OSRenderCore_RenderThread::GetLocalU(
                                    (((float)(int)sVar2 - fVar36) * fVar31 + ((float)(int)sVar1 - fVar24) * fVar28 +
                                     ((float)(int)sVar6 - fVar29) * fVar27) *
                                        fVar26,
                                    iVar20);
                                puVar13[7] = uVar8;
                                uVar8 = oldscape::OSRenderCore_RenderThread::GetLocalU(arg1_03, iVar21);
                                puVar14[6] = uVar8;
                                uVar8 = oldscape::OSRenderCore_RenderThread::GetLocalU((float)local_50, iVar20);
                                puVar14[7] = uVar8;
                                uVar8 = oldscape::OSRenderCore_RenderThread::GetLocalU(local_3c, iVar21);
                                puVar15[6] = uVar8;
                                uVar8 = oldscape::OSRenderCore_RenderThread::GetLocalU(
                                    (fVar31 * ((float)(int)sVar5 - fVar36) + fVar30 + fVar25) * fVar26, iVar20);
                                puVar15[7] = uVar8;
                            }
                        }
                    }
                }
                arg1_01 = arg1_01 + 1;
            } while (arg1_01 < field_8);
        }
        return false;
    }

    // 0x1001b8aa0
    bool Model::SortTriangles<true>(int arg1, int arg2, int arg3, int arg4) {
        Array<std::array<TriangleVertexData, 3ul>>* this_00;
        uint8_t* this_01;
        uint8_t* this_02;
        short sVar1;
        short sVar2;
        short sVar3;
        short sVar4;
        short sVar5;
        short sVar6;
        short sVar7;
        int iVar8;
        unsigned int uVar9;
        bool cVar10;
        uint16_t uVar11;
        int* piVar13;
        float* pfVar14;
        array<TriangleVertexData, 3ul>* paVar15;
        uint16_t* puVar16;
        uint16_t* puVar17;
        uint16_t* puVar18;
        short* psVar19;
        char* pcVar20;
        uint8_t* pbVar21;
        unsigned long arg1_00;
        long lVar22;
        long lVar23;
        unsigned long arg1_01;
        int iVar24;
        long lVar25;
        float fVar26;
        float fVar27;
        float fVar28;
        float fVar29;
        float fVar30;
        float fVar31;
        float fVar32;
        float fVar33;
        float fVar34;
        float fVar35;
        float fVar36;
        float fVar37;
        float fVar38;
        float fVar39;
        float fVar40;
        float fVar41;
        int local_5c;
        float local_58;
        float local_54;
        long local_50;
        unsigned int local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        if (6000 < arg1) {
            LogAssert(
                "radixsize <= Model::MAX_MODEL_SIZE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/Model.cpp",
                440, nullptr);
        }
        ___bzero(&internal::zsize, (long)arg1 * 2);
        internal::minZ = 2147483647;
        internal::maxZ = 0;
        auto pOVar12 = oldscape::OSRenderCore_RenderThread::Instance();
        if (field_8 == 0) {
            local_44 = 0;
        } else {
            this_00 = (Array<std::array<TriangleVertexData, 3ul>>*)(m_tintMode + 8);
            this_01 = &field_360;
            this_02 = &field_384;
            arg1_01 = 0;
            local_44 = 0;
            do {
                piVar13 = &field_120[arg1_01];
                iVar24 = *piVar13;
                lVar23 = (long)iVar24;
                pfVar14 = &field_144[arg1_01];
                fVar26 = *pfVar14;
                pfVar14 = &field_168[arg1_01];
                uVar9 = local_44;
                if (lVar23 != -2) {
                    lVar22 = (long)(int)fVar26;
                    fVar27 = *pfVar14;
                    lVar25 = (long)(int)fVar27;
                    if ((*(float*)(&internal::sxf + lVar25 * 4) - *(float*)(&internal::sxf + lVar22 * 4)) *
                            (*(float*)(&internal::syf + lVar23 * 4) - *(float*)(&internal::syf + lVar22 * 4)) <
                        (*(float*)(&internal::syf + lVar25 * 4) - *(float*)(&internal::syf + lVar22 * 4)) *
                            (*(float*)(&internal::sxf + lVar23 * 4) - *(float*)(&internal::sxf + lVar22 * 4))) {
                        local_50 = lVar22;
                        local_38 = fVar27;
                        local_34 = fVar26;
                        if ((local_44 & 1) == 0) {
                            cVar10 = IsInsideTriangle(
                                arg3, arg4, (int)*(short*)(&internal::sy + lVar23 * 2),
                                (int)*(short*)(&internal::sy + lVar22 * 2), (int)*(short*)(&internal::sy + lVar25 * 2),
                                (int)*(short*)(&internal::sx + lVar23 * 2), (int)*(short*)(&internal::sx + lVar22 * 2),
                                (int)*(short*)(&internal::sx + lVar25 * 2));
                            local_44 = uVar9 & 255;
                            if (cVar10) {
                                local_44 = 1;
                            }
                        }
                        paVar15 = (array<TriangleVertexData, 3ul>*)(*this_00)[arg1_01];
                        puVar16 = (uint16_t*)(*paVar15)[0];
                        paVar15 = (array<TriangleVertexData, 3ul>*)(*this_00)[arg1_01];
                        puVar17 = (uint16_t*)(*paVar15)[1];
                        paVar15 = (array<TriangleVertexData, 3ul>*)(*this_00)[arg1_01];
                        puVar18 = (uint16_t*)(*paVar15)[2];
                        *puVar16 = *(uint16_t*)(&internal::cx + lVar23 * 2);
                        puVar16[1] = *(uint16_t*)(&internal::cy + lVar23 * 2);
                        puVar16[2] = *(uint16_t*)(&internal::cz + lVar23 * 2);
                        *puVar17 = *(uint16_t*)(&internal::cx + local_50 * 2);
                        puVar17[1] = *(uint16_t*)(&internal::cy + local_50 * 2);
                        puVar17[2] = *(uint16_t*)(&internal::cz + local_50 * 2);
                        *puVar18 = *(uint16_t*)(&internal::cx + lVar25 * 2);
                        puVar18[1] = *(uint16_t*)(&internal::cy + lVar25 * 2);
                        puVar18[2] = *(uint16_t*)(&internal::cz + lVar25 * 2);
                        local_5c = (((int)*(short*)(&internal::sortz + lVar25 * 2) +
                                     (int)*(short*)(&internal::sortz + local_50 * 2) +
                                     (int)*(short*)(&internal::sortz + lVar23 * 2)) *
                                            21845 +
                                        21845 >>
                                    16) +
                                   arg2;
                        local_3c = 0.0;
                        piVar13 = std::max<int>(local_3c, local_5c);
                        iVar8 = *piVar13;
                        local_5c = iVar8;
                        piVar13 = std::min<int>(*(&internal::minZ), local_5c);
                        internal::minZ = *piVar13;
                        piVar13 = std::max<int>(*(&internal::maxZ), local_5c);
                        internal::maxZ = *piVar13;
                        if (arg1 <= iVar8) {
                            LogAssert("p < radixsize",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "osrendercore/Model.cpp",
                                      484, nullptr);
                        }
                        lVar22 = (long)local_5c;
                        sVar7 = (&internal::zsize)[lVar22];
                        (&internal::zsize)[lVar22] = sVar7 + 1;
                        (&internal::zlist)[lVar22 * 512 + (long)sVar7] = (short)arg1_01;
                        cVar10 = this_01->empty();
                        if ((!cVar10) && (psVar19 = (short*)(*this_01)[arg1_01], *psVar19 != -1)) {
                            cVar10 = this_02->empty();
                            if ((!cVar10) && (pcVar20 = (char*)(*this_02)[arg1_01], *pcVar20 != -1)) {
                                pbVar21 = (uint8_t*)(*this_02)[arg1_01];
                                arg1_00 = (unsigned long)*pbVar21;
                                piVar13 = (int*)field_288[arg1_00];
                                iVar24 = *piVar13;
                                pfVar14 = &field_312[arg1_00];
                                local_34 = *pfVar14;
                                pfVar14 = &field_336[arg1_00];
                                local_38 = *pfVar14;
                            }
                            lVar22 = (long)iVar24;
                            fVar32 = (float)(int)*(short*)(&internal::wx + lVar22 * 2);
                            fVar28 = (float)(int)*(short*)(&internal::wy + lVar22 * 2);
                            fVar39 = (float)(int)*(short*)(&internal::wz + lVar22 * 2);
                            lVar22 = (long)(int)local_34;
                            fVar34 = (float)(int)*(short*)(&internal::wx + lVar22 * 2) - fVar32;
                            fVar35 = (float)(int)*(short*)(&internal::wy + lVar22 * 2) - fVar28;
                            fVar41 = (float)(int)*(short*)(&internal::wz + lVar22 * 2) - fVar39;
                            lVar22 = (long)(int)local_38;
                            fVar37 = (float)(int)*(short*)(&internal::wx + lVar22 * 2) - fVar32;
                            sVar7 = *(short*)(&internal::wx + lVar23 * 2);
                            fVar38 = (float)(int)*(short*)(&internal::wy + lVar22 * 2) - fVar28;
                            fVar40 = (float)(int)*(short*)(&internal::wz + lVar22 * 2) - fVar39;
                            sVar1 = *(short*)(&internal::wy + lVar23 * 2);
                            sVar2 = *(short*)(&internal::wz + lVar23 * 2);
                            sVar3 = *(short*)(&internal::wx + local_50 * 2);
                            sVar4 = *(short*)(&internal::wy + local_50 * 2);
                            local_38 = (float)(int)*(short*)(&internal::wx + lVar25 * 2) - fVar32;
                            sVar5 = *(short*)(&internal::wy + lVar25 * 2);
                            sVar6 = *(short*)(&internal::wz + lVar25 * 2);
                            fVar29 = fVar40 * fVar35 - fVar38 * fVar41;
                            local_34 = fVar37 * fVar41 - fVar40 * fVar34;
                            fVar33 = fVar38 * fVar34 - fVar37 * fVar35;
                            fVar30 = fVar33 * fVar38 - local_34 * fVar40;
                            local_40 = fVar29 * fVar40 - fVar33 * fVar37;
                            fVar36 = local_34 * fVar37 - fVar29 * fVar38;
                            fVar31 = 1.0 / (fVar36 * fVar41 + local_40 * fVar35 + fVar30 * fVar34);
                            local_3c =
                                (fVar36 * ((float)(int)sVar2 - fVar39) + local_40 * ((float)(int)sVar1 - fVar28) +
                                 fVar30 * ((float)(int)sVar7 - fVar32)) *
                                fVar31;
                            local_58 = -1.0;
                            local_54 = 1.0;
                            local_50._0_4_ = (float)(int)*(short*)(&internal::wz + local_50 * 2) - fVar39;
                            fVar26 = math::Clamp<float>(local_3c, local_58, local_54);
                            local_3c = ((float)local_50 * fVar36 + ((float)(int)sVar4 - fVar28) * local_40 +
                                        fVar30 * ((float)(int)sVar3 - fVar32)) *
                                       fVar31;
                            local_58 = -1.0;
                            local_54 = 1.0;
                            fVar27 = math::Clamp<float>(local_3c, local_58, local_54);
                            local_3c = (fVar36 * ((float)(int)sVar6 - fVar39) +
                                        local_40 * ((float)(int)sVar5 - fVar28) + fVar30 * local_38) *
                                       fVar31;
                            local_58 = -1.0;
                            local_54 = 1.0;
                            local_40 = math::Clamp<float>(local_3c, local_58, local_54);
                            fVar30 = fVar33 * fVar35 - local_34 * fVar41;
                            fVar31 = fVar41 * fVar29 - fVar33 * fVar34;
                            fVar33 = local_34 * fVar34 - fVar29 * fVar35;
                            fVar29 = 1.0 / (fVar40 * fVar33 + fVar38 * fVar31 + fVar37 * fVar30);
                            local_50 = (((uint64_t)local_50._4_4_ << 32) |
                                        (uint32_t)(((float)local_50 * fVar33 + ((float)(int)sVar4 - fVar28) * fVar31 +
                                                    ((float)(int)sVar3 - fVar32) * fVar30) *
                                                   fVar29));
                            local_34 = (fVar33 * ((float)(int)sVar6 - fVar39) + fVar31 * ((float)(int)sVar5 - fVar28) +
                                        fVar30 * local_38) *
                                       fVar29;
                            psVar19 = (short*)(*this_01)[arg1_01];
                            sVar3 = *psVar19;
                            uVar11 = oldscape::OSRenderCore_RenderThread::GetAtlasUV((int)sVar3);
                            puVar18[3] = uVar11;
                            puVar17[3] = uVar11;
                            puVar16[3] = uVar11;
                            lVar23 = ((OSRenderCore_RenderThread_Common*)(pOVar12->field_32 +
                                                                          (long)(pOVar12->_vptr[-3].GetUISize - 32)))
                                         ->GetRenderStateNXT();
                            piVar13 = (int*)(*((lVar23 + 19678752)))[(long)sVar3];
                            iVar24 = *piVar13;
                            piVar13 = (int*)(*((lVar23 + 19679776)))[(long)sVar3];
                            iVar8 = *piVar13;
                            uVar11 = oldscape::OSRenderCore_RenderThread::GetLocalU(fVar26, iVar24);
                            puVar16[6] = uVar11;
                            uVar11 = oldscape::OSRenderCore_RenderThread::GetLocalU(
                                (((float)(int)sVar2 - fVar39) * fVar33 + ((float)(int)sVar1 - fVar28) * fVar31 +
                                 ((float)(int)sVar7 - fVar32) * fVar30) *
                                    fVar29,
                                iVar8);
                            puVar16[7] = uVar11;
                            uVar11 = oldscape::OSRenderCore_RenderThread::GetLocalU(fVar27, iVar24);
                            puVar17[6] = uVar11;
                            uVar11 = oldscape::OSRenderCore_RenderThread::GetLocalU((float)local_50, iVar8);
                            puVar17[7] = uVar11;
                            uVar11 = oldscape::OSRenderCore_RenderThread::GetLocalU(local_40, iVar24);
                            puVar18[6] = uVar11;
                            uVar11 = oldscape::OSRenderCore_RenderThread::GetLocalU(local_34, iVar8);
                            puVar18[7] = uVar11;
                        }
                    }
                }
                arg1_01 = arg1_01 + 1;
            } while (arg1_01 < field_8);
        }
        return (bool)((uint8_t)local_44 & 1);
    }

    // 0x1001c04b0
    bool Model::IsTemporary() const {
        return m_temporary;
    }

    // 0x1001c4d20
    int Model::GetNumVerts() const {
        return field_8 * 3;
    }

    // 0x1001d10f0
    shared_ptr_if_not_array<oldscape::dash3d::PoseStateProviderRSeven>::type
    make_shared<oldscape::dash3d::PoseStateProviderRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(
        shared_ptr<oldscape::dash3d::PoseStateRSeven>& poseStateRSeven) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        PoseStateProviderRSeven* local_30[2];

        auto arg1 = aligned_alloc(72, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::PoseStateProviderRSeven>::type result;
        } else {
            local_30[0] = placement_new<oldscape::dash3d::PoseStateProviderRSeven,
                                        shared_ptr<oldscape::dash3d::PoseStateRSeven> const&>((void*)((long)arg1 + 32),
                                                                                              poseStateRSeven);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::PoseStateProviderRSeven>, int,
                              oldscape::dash3d::PoseStateProviderRSeven*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1001d1490
    shared_ptr_if_not_array<graphics::Model>::type
    make_shared<graphics::Model, graphics::Model&, graphics::ModelCopyType>(graphics::Model& model,
                                                                            graphics::ModelCopyType&& modelCopyType) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        Model* local_38[2];

        auto arg1 = aligned_alloc(976, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::Model>::type result;
        } else {
            local_38[0] = placement_new<graphics::Model, graphics::Model const&, graphics::ModelCopyType>(
                (void*)((long)arg1 + 32), model, modelCopyType);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::Model>, int, graphics::Model*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1001d3780
    Model::Model(Model&& model) {
        *(uint32_t*)m_tintMode = *(uint32_t*)model.m_tintMode;
        unsigned int uVar1 = model.field_4;
        unsigned int uVar2 = model.field_8;
        unsigned int uVar3 = model.field_12;
        field_0 = model.field_0;
        field_4 = uVar1;
        field_8 = uVar2;
        field_12 = uVar3;
        new ((m_tintMode + 8)) Array<std::array<TriangleVertexData, 3ul>>(*((model.m_tintMode + 8)));
        new (&field_48) Array<int>(&model.field_48);
        new (&field_72) Array<int>(&model.field_72);
        new (&field_96) Array<int>(&model.field_96);
        new (&field_120) Array<int>(&model.field_120);
        new (&field_144) Array<int>(&model.field_144);
        new (&field_168) Array<int>(&model.field_168);
        new (&field_192) Array<signed char>(&model.field_192);
        new (&field_216) Array<unsigned char>(&model.field_216);
        new (&field_240) Array<int>(&model.field_240);
        new (&field_264) Array<int>(&model.field_264);
        new (&field_288) Array<int>(&model.field_288);
        new (&field_312) Array<int>(&model.field_312);
        new (&field_336) Array<int>(&model.field_336);
        new (&field_360) Array<short>(&model.field_360);
        new (&field_384) Array<unsigned char>(&model.field_384);
        m_temporary = model.m_temporary;
    }

    // 0x1001d3a10
    Model::Model() : field_4(0), field_8(0), field_12(0) {
        new ((m_tintMode + 8)) Array<std::array<TriangleVertexData, 3ul>>();
        new (&field_48) Array<int>();
        new (&field_72) Array<int>();
        new (&field_96) Array<int>();
        new (&field_120) Array<int>();
        new (&field_144) Array<int>();
        new (&field_168) Array<int>();
        new (&field_192) Array<signed char>();
        new (&field_216) Array<unsigned char>();
        new (&field_240) Array<int>();
        new (&field_264) Array<int>();
        new (&field_288) Array<int>();
        new (&field_312) Array<int>();
        new (&field_336) Array<int>();
        new (&field_360) Array<short>();
        new (&field_384) Array<unsigned char>();
        m_temporary = false;
    }

    // 0x1001d3d60
    Model::~Model() {
        field_384.~Array();
        field_360.~Array();
        field_336.~Array();
        field_312.~Array();
        field_288.~Array();
        field_264.~Array();
        field_240.~Array();
        field_216.~Array();
        field_192.~Array();
        field_168.~Array();
        field_144.~Array();
        field_120.~Array();
        field_96.~Array();
        field_72.~Array();
        field_48.~Array();
        ((m_tintMode + 8))->~Array();
    }

} // namespace jag

namespace jag::oldscape::rseven {
    // 0x1001d12f0
    void FinishModel(jag::graphics::Model& model, jag::graphics::RT7Core& rt7Core) {
        MaterialManager* materialManager;
        TextureManager* textureManager;

        if (model.GetConstructedState() < 5) {
            materialManager = rt7Core.GetMaterialManager();
            textureManager = rt7Core.GetTextureManager();
            model.UpdateAABB();
            model.SetUseUncompressedTextures(true);
            model.SetupInitialMaterials(*materialManager);
            model.BakeMaterialInfoAndTextureMetaAndHSLColors(*materialManager, *textureManager, true);
            model.ConstructFinishAndUpload();
        }
    }

    // 0x1001d1390
    void SetModelHighlightable(jag::graphics::Model& model, bool arg2) {
        GeometryBatchInstance* this_01;

        auto layout = model.GetBatchList();
        auto this_00 = layout->HeapBeginPtr();
        auto puVar1 = layout->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 = (GeometryBatchInstance*)(*this_00).operator->();
            ((RenderMaterial*)this_01->GetMaterial())->SetOption(12, arg2);
        }
    }

} // namespace jag::oldscape::rseven

namespace jag::oldscape {
    // 0x1001d1190
    uint32_t OSRenderCore_RenderThread::GetFrameCount() {
        return *(uint32_t*)(field_32 + (long)(this->_vptr[-3].GetUISize + 80));
    }

} // namespace jag::oldscape

namespace jag::math {
    // 0x1001d11b0
    Matrix33T<float> Matrix33RotationY<float>(float arg1) {
        Matrix33T<float>* in_RDI;
        uint64_t local_48;

        local_48._0_4_ = arg1;
        float local_2c = (float)::cos(arg1);
        local_48 = ::sin((float)local_48);
        ColourHSL local_78(local_2c, 0.0, -(float)local_48);
        ColourHSL local_68(0.0, 1.0, 0.0);
        ColourHSL local_58((float)local_48, 0.0, local_2c);
        new (in_RDI) Matrix33T<float>(local_78, local_68, local_58);
    }

} // namespace jag::math
