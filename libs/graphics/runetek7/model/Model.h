// libs/graphics/runetek7/model/Model.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class Model {
    public:
        // virtual methods in vtable order
        virtual ~Model();
        GetLevel() const;
        GetAABB() const;
        shared_ptr GetTextureAtlasReferences() const;
        GetBatchList();
        GetBatchList() const;
        GetTint() const;
        GetWorldTransform() const;
        void GetBatchCount() const;
        void SetWorldTransform(math::Matrix44T<float> const&);
        GetConstructedState() const;
        void SetUseUncompressedTextures(bool);
        void UpdateFade(unsigned long long);
        void GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&);
        GetLabelCentres() const;
        GetNumExtant();
        GetLocalTransform() const;
        void SetLabelCentres(Array<LabelData, eastl::allocator> const&);
        GetPointLightBounds() const;
        GetHighlightedSectionColour() const;
        int GetExternalID() const;
        uint GetSavedModelHash() const;
        GetModelRawUniqueID() const;
        GetParticleEffectors();
        GetParticleEffectors() const;
        GetIrradianceEffect();
        GetIrradianceEffect() const;
        bool IsLoaded() const;
        void SetFadeTime(unsigned int);
        SetLevel(int);
        int GetTotalBatchCount() const;
        void ClearHighlight();
        GetHighlightColour() const;
        bool HasHighlight() const;
        IsEmptyModel() const;
        void ClearHighlightedSection();
        bool HasHighlightedSection() const;
        GetBillboardBatchList();
        GetBillboardBatchList() const;
        TransformStarted() const;
        GetSavedModelHashList() const;
        GetParticleEmitters();
        GetParticleEmitters() const;
        void SetSourceModelIDs(eastl::vector<int, eastl::allocator>&&);
        void SetSourceModelIDs(int);
        void SetSourceModelIDs(Array<int, eastl::allocator> const&);
        shared_ptr GetGeometryQuery() const;
        void SetSavedModelHash(unsigned int);
        void SetLocalTransform(math::Matrix44T<float> const&);
        byte HasParticleEmitters() const;
        byte HasVFXs() const;
        void SetGeometryQuery(shared_ptr<GeometryQuery> const&);
        float GetHighlightScale() const;
        void GetLodConfig(LodPassType);
        uint CalculateLodLevel(ModelLodPassConfig const&, float, float, float);
        void SelectTextureInclusionMode(TextureInclusionMode const*);
        float GetHighlightSilhouetteAlpha() const;
        GetHighlightsIgnoreDepth() const;
        float GetHighlightedSectionScale() const;
        Model();
        Model(Model const&, ModelCopyType);
        void SetTextureAtlasReferences(
            eastl::fixed_vector<shared_ptr<TextureAtlasReference>, 1ul, true, eastl::allocator> const&);
        void SetBatchAtlasReferences();
        void ConstructFinishAndUpload();
        void SetExternalID(int, bool);
        ulong IsTransformed() const;
        void StartTransform();
        void EndTransform(bool);
        SetModelRawUniqueID(int);
        void NewModelRawUniqueID();
        void UpdateAABB();
        void SetRenderFlags(unsigned int);
        ulong HasAlphaBlendedFaces() const;
        ulong HasOpaqueOrTestedFaces() const;
        void SetPointLightIndicesVertexData(bool);
        void SetHighlight(float, math::Vector4T<float> const&);
        void SetHighlight(float, math::Vector4T<float> const&, float);
        void SetHighlightsIgnoreDepth(bool);
        void SetHighlightedSection(float, math::Vector4T<float> const&);
        void SetCastsShadows(bool);
        ulong GetCastsShadows() const;
        void ClearAnimationState();
        void SetAnimationStateProvider(shared_ptr<AnimationStateProvider> const&);
        void UpdateAnimation(ThreadPool&, unsigned int);
        void EndUpdateAnimation();
        IsReadyToConstruct(RT7Core*);
        void Append(Model&&);
        void Append(Model const&);
        void WeldTouchingBatches();
        void ConstructFromGeometryBatch(ModelConstructedState, shared_ptr<GeometryBatch>&, int, RT7Core*);
        void CombineBatches(TextureManager&);
        void SortSections();
        void ConstructCommon(ModelConstructedState, MaterialManager&, TextureManager&);
        void SetupInitialMaterials(MaterialManager const&);
        void BakeMaterialInfoAndTextureMetaAndHSLColors(MaterialManager const&, TextureManager&, bool);
        void BakeBatchFlags();
        void BakeHSLColors(MaterialManager const&);
        void ConstructFromModelRawRT7(ModelConstructedState, RT7Core*, PacketView);
        void LoadDataFromModelRawRT7(PacketView);
        void BakeTile(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char,
                      unsigned char);
        GetTextureAtlasUsage() const;
        GetMaterialIDList() const;
        void BakeMaterialInfoAndTextureMetaAndHSLColors(RT7Core&, bool);
        void SortBatches();
        bool GetUseUncompressedTextures() const;
        void ConstructAtlasFromWorker(
            eastl::fixed_hash_map<unsigned int, Model const*, 256ul, 257ul, true, eastl::hash<unsigned int>,
                                  eastl::equal_to<unsigned int>, false, eastl::allocator> const*,
            Model*);
        void ConstructFinishAndUploadInternal();
        void CreateSecondaryVertexBuffers();
        void CreateRenderingResources();
        void SetFadeTransitionable(math::Transitionable<float> const&, unsigned long long);
        void StartFade();
        void Transform(math::Matrix44T<float> const&);
        void CheckUploaded(char const*, char const*);
        void TransformNormals(math::Matrix44T<float> const&, bool);
        void Translate(math::Vector3T<float> const&);
        void Rotate(math::QuaternionT<float> const&, bool);
        void Rotate90(Rotation90, bool);
        void Scale(math::Vector3T<float> const&);
        void MirrorZ();
        void HillChange(graphics::HillChange, int, int, int, Rotation90,
                        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&,
                        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, int);
        void HillChangeLocalTransform(graphics::HillChange, int, int, int, Rotation90,
                                      Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&,
                                      Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, int);
        void RecolourSingle(unsigned short, unsigned short);
        void Recolour(Array<unsigned short, eastl::allocator> const&, Array<unsigned short, eastl::allocator> const&);
        void Rematerial(Array<unsigned short, eastl::allocator> const&, Array<unsigned short, eastl::allocator> const&);
        void RematerialSingle(unsigned short, unsigned short);
        void AmbientAdjust(unsigned short);
        void TintAdjust(signed char, signed char, signed char, unsigned char);
        void Update(RT7Core&, unsigned int, unsigned long long);
        void EndUpdate();
        void UpdateParticleEmitters(
            RT7Core&, eastl::fixed_vector<shared_ptr<ParticleSystem>, 1ul, true, eastl::allocator>&,
            math::Matrix44T<float> const&, AnimationStateProvider*,
            eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*,
            bool);
        void UpdateModularParticleSystems(
            RT7Core&, eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>&,
            math::Matrix44T<float> const&, AnimationStateProvider*,
            eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*,
            bool);
        void GatherDrawableElements(
            DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&,
            eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*);
        ulong IsReadyToRender() const;
        void GatherDrawableElementsPrefetch();
        void DestroyRenderingResources();
        void SetLodLevel(unsigned int);
        void BakeShareLight();
        void SetShareLightBatches(bool);
        float GetLoadProgress() const;
        ulong TexturesReady() const;
        ShadersReady() const;
        GetTextureAtlasReference() const;
        void SetDefaultLODs(GeometryBatchInstance*, EffectManager const&, RenderPassType, SceneViewData const&, float,
                            math::OBB const&);
        void SetPointLightBounds(int, int, int, int);
        void SetPointLightBounds(math::Vector3T<float> const&, int, int);
        void UpdatePointLightBounds();
        void CalculateLabelCentres();
        void DeferredRenderKeepAlive(shared_ptr<Model> const&);
        void SetConstructedState(ModelConstructedState);
        void SetAABB(math::AABB const&);
        void AddSavedModelHashList(unsigned int);
        GetCurrentFade() const;
        void SetTint(math::Vector4T<float> const&);
        static /* 96 bytes */ m_lodConfigs;           // initialised in its definition
        static /* 48 bytes */ m_lodConfigNiceNames__; // = { 0, 0, 14658420, 1, 1, 0, 14658437, 1, 2, 0, 14658444, 1 }
        static /* 1 bytes */ m_ShowMeshes;            // = 1
        static /* 1 bytes */ m_ShowBillboards;        // = 1
        static /* 1 bytes */ m_DoModelWelding;        // = 1
        static /* 1 bytes */ m_gatherShareLightOnly;  // = 0
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullModel;
        static StringEnum         /* 16 bytes */
            m_lodConfigNiceNames; // = StringEnum((StringEnumEntry *)&m_lodConfigNiceNames__, 3)
        static /* 4 bytes */ m_NumExtant;
        static /* 4 bytes */ m_NextUniqueID;

        // data members, from how the methods use this: 944 bytes
        undefined** field_0; // offset 0, vtable pointer
        NpcUID* field_8;     // offset 8
        char _unknown_16[32];
        undefined8 m_worldTransform;      // offset 48
        undefined8 field_56;              // offset 56
        undefined8 field_64;              // offset 64
        undefined8 field_72;              // offset 72
        undefined8 field_80;              // offset 80
        undefined8 field_88;              // offset 88
        undefined8 field_96;              // offset 96
        undefined8 field_104;             // offset 104
        undefined8 field_112;             // offset 112
        undefined8 field_120;             // offset 120
        undefined8 field_128;             // offset 128
        undefined8 field_136;             // offset 136
        undefined8 field_144;             // offset 144
        undefined8 field_152;             // offset 152
        undefined8 field_160;             // offset 160
        undefined8 field_168;             // offset 168
        undefined8 m_localTransform;      // offset 176
        undefined8 field_184;             // offset 184
        undefined8 field_192;             // offset 192
        undefined8 field_200;             // offset 200
        undefined8 field_208;             // offset 208
        undefined8 field_216;             // offset 216
        undefined8 field_224;             // offset 224
        undefined8 field_232;             // offset 232
        undefined8 m_tint;                // offset 240
        undefined8 field_248;             // offset 248
        undefined8 m_highlightColour;     // offset 256
        undefined8 field_264;             // offset 264
        float m_highlightScale;           // offset 272
        float m_highlightSilhouetteAlpha; // offset 276
        bool m_highlightsIgnoreDepth;     // offset 280
        char _unknown_281[7];
        undefined8 m_highlightedSectionColour; // offset 288
        undefined8 field_296;                  // offset 296
        float m_highlightedSectionScale;       // offset 304
        char _unknown_308[4];
        undefined4 m_level; // offset 312
        char _unknown_316[20];
        undefined4 m_modelRawUniqueID; // offset 336
        int m_externalID;              // offset 340
        uint m_savedModelHash;         // offset 344
        char _unknown_348[36];
        int field_384; // offset 384
        char _unknown_388[28];
        ModelConstructedState field_416; // offset 416
        char _unknown_417[7];
        shared_ptr m_textureAtlasReferences; // offset 424
        char _unknown_440[40];
        undefined8 field_480;     // offset 480
        undefined8 field_488;     // offset 488
        undefined8 field_496;     // offset 496
        undefined8 field_504;     // offset 504
        uint m_fadeTime;          // offset 512
        undefined4 m_currentFade; // offset 516
        char _unknown_520[120];
        bool m_useUncompressedTextures; // offset 640
        char _unknown_641[199];
        shared_ptr m_geometryQuery; // offset 840
        char _unknown_856[80];
        undefined1 field_936; // offset 936
        undefined1 field_937; // offset 937
        undefined1 field_938; // offset 938
        char _unknown_939[5];
    };

    class ModelTextureMeta {
    public:
        ModelTextureMeta();
    };

    class ModelUpdateManager {
    public:
        void AddToUpdateList(shared_ptr<Model> const&);
        ~ModelUpdateManager();

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[8];
        weak_ptr<oldscape::dash3d::Decor>* field_8; // offset 8
    };

    // 0x1001d0a30, 32 bytes, inline, placed by class name and debug map
    // Model::GetBatchCount() const
    void Model::GetBatchCount() {
        (&field_656)->size();
    }

    // 0x1001d1290, 80 bytes, inline, placed by class name and debug map
    // Model::SetWorldTransform(math::Matrix44T<float> const&)
    void Model::SetWorldTransform(Matrix44T* param_1) {
        undefined1 local_68[72];

        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_112, param_1);
        math::operator*((math*)local_68, (Matrix44T*)&m_localTransform, (Matrix44T*)&field_112);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&m_worldTransform, (Matrix44T*)local_68);
    }

    // 0x1001d1370, 16 bytes, inline, placed by class name and debug map
    // Model::GetConstructedState() const
    undefined1 Model::GetConstructedState() {
        return field_416[0];
    }

    // 0x1001d1380, 16 bytes, inline, placed by class name and debug map
    // Model::SetUseUncompressedTextures(bool)
    void Model::SetUseUncompressedTextures(bool param_1) {
        m_useUncompressedTextures = param_1;
    }

    // 0x1001d1540, 48 bytes, inline, placed by class name and debug map
    // Model::UpdateFade(unsigned long long)
    void Model::UpdateFade(ulonglong param_1) {
        undefined4 uVar1;

        uVar1 = (&field_480, param_1)->GetValue();
        m_currentFade = uVar1;
    }

    // 0x1001d1720, 16 bytes, inline, placed by class name and debug map
    // Model::GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&)
    void Model::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, SceneViewData* param_3,
                                       EffectManager* param_4) {
        GatherDrawableElements(this, param_1, param_2, param_3, param_4, (vector_map*)0);
    }

    // 0x1002eeed0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Model::GetLabelCentres() const
    /* TextureManager::GetTextureAtlasManager() */

    undefined1* TextureManager::GetTextureAtlasManager() {
        return m_textureAtlasManager;
    }

    // 0x1002f22d0, 16 bytes, inline, placed by class name
    // Model::GetNumExtant()
    undefined4 Model::GetNumExtant() {
        return m_NumExtant;
    }

    // 0x100350d70, 32 bytes, inline, placed by class name
    // Model::SetLabelCentres(Array<LabelData, eastl::allocator> const&)
    void Model::SetLabelCentres(Array* param_1) {
        Array<LabelData, eastl::allocator>::operator=((Array<LabelData, eastl::allocator>*)&field_816, param_1);
    }

    // 0x10042c8b0, 16 bytes, inline, placed by class name
    // Model::IsLoaded() const
    bool Model::IsLoaded() {
        return 3 < (byte)field_416[0];
    }

    // 0x10042e1e0, 16 bytes, inline, placed by class name
    // Model::SetFadeTime(unsigned int)
    void Model::SetFadeTime(uint param_1) {
        m_fadeTime = param_1;
    }

    // 0x10042e410, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Model::SetLevel(int)
    /* game::console::CommandLine::SetSelectionStart(int) */

    void game::console::CommandLine::SetSelectionStart(int param_1) {
        m_selectionStart = param_1;
    }

    // 0x100430610, 48 bytes, inline, placed by class name
    // Model::GetTotalBatchCount() const
    int Model::GetTotalBatchCount() {
        int iVar1;
        int iVar2;

        iVar1 = (&field_656)->size();
        iVar2 = (&field_688)->size();
        return iVar2 + iVar1;
    }

    // 0x100431550, 64 bytes, inline, placed by class name
    // Model::ClearHighlight()
    void Model::ClearHighlight() {
        if (HasHighlight(this) != '\0') {
            m_highlightScale = 0.0;
            math::Rect<float>::operator=((Rect<float>*)&m_highlightColour, (Rect*)PTR_ZERO_100ee6708);
        }
    }

    // 0x100432550, 32 bytes, inline, placed by class name
    // Model::HasHighlight() const
    bool Model::HasHighlight() {
        float* pfVar1;

        pfVar1 = (float*)(&m_highlightColour)->qw();
        return 0.0 < *pfVar1;
    }

    // 0x100445ee0, 48 bytes, inline, placed by class name
    // Model::IsEmptyModel() const
    undefined8 Model::IsEmptyModel() {
        undefined8 uVar2;

        if (GetTotalBatchCount(this) == 0) {
            uVar2 = (&field_720)->empty();
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x100449840, 64 bytes, inline, placed by class name
    // Model::ClearHighlightedSection()
    void Model::ClearHighlightedSection() {
        if (HasHighlightedSection(this) != '\0') {
            m_highlightedSectionScale = 0.0;
            math::Rect<float>::operator=((Rect<float>*)&m_highlightedSectionColour, (Rect*)PTR_ZERO_100ee6708);
        }
    }

    // 0x10044d670, 32 bytes, inline, placed by class name
    // Model::HasHighlightedSection() const
    bool Model::HasHighlightedSection() {
        float* pfVar1;

        pfVar1 = (float*)(&m_highlightedSectionColour)->qw();
        return 0.0 < *pfVar1;
    }

    // 0x1004964c0, 16 bytes, inline, placed by class name
    // Model::TransformStarted() const
    undefined1 Model::TransformStarted() {
        return field_936;
    }

    // 0x1005083d0, 32 bytes, inline, placed by class name
    // Model::SetSourceModelIDs(eastl::vector<int, eastl::allocator>&&)
    void Model::SetSourceModelIDs(vector* param_1) {
        eastl::vector<int, eastl::allocator>::operator=((vector<int, eastl::allocator>*)&field_384, param_1);
    }

    // 0x1005092f0, 128 bytes, inline, placed by class name
    // Model::SetSourceModelIDs(int)
    void Model::SetSourceModelIDs(int param_1) {
        vector<int, eastl::allocator> local_50[32];
        allocator local_30[8];

        eastl::allocator::allocator(local_30, "EASTL vector");
        eastl::vector<int, eastl::allocator>::vector<int>(local_50, 1, param_1, local_30);
        eastl::vector<int, eastl::allocator>::operator=((vector<int, eastl::allocator>*)&field_384, (vector*)local_50);
        eastl::vector<int, eastl::allocator>::~vector(local_50);
    }

    // 0x1005463c0, 160 bytes, inline, placed by class name
    // Model::SetSourceModelIDs(Array<int, eastl::allocator> const&)
    void Model::SetSourceModelIDs(Array* param_1) {
        int* piVar1;
        int* piVar2;
        vector<int, eastl::allocator> local_58[32];
        allocator local_38[8];

        piVar1 = (int*)param_1->data();
        piVar2 = (int*)param_1->end();
        eastl::allocator::allocator(local_38, "EASTL vector");
        eastl::vector<int, eastl::allocator>::vector<int const*>(local_58, piVar1, piVar2, local_38);
        eastl::vector<int, eastl::allocator>::operator=((vector<int, eastl::allocator>*)&field_384, (vector*)local_58);
        eastl::vector<int, eastl::allocator>::~vector(local_58);
    }

    // 0x10064eaa0, 16 bytes, inline, placed by class name
    // Model::SetSavedModelHash(unsigned int)
    void Model::SetSavedModelHash(uint param_1) {
        m_savedModelHash = param_1;
    }

    // 0x10064f190, 80 bytes, inline, placed by class name
    // Model::SetLocalTransform(math::Matrix44T<float> const&)
    void Model::SetLocalTransform(Matrix44T* param_1) {
        undefined1 local_68[72];

        math::Matrix44T<float>::operator=((Matrix44T<float>*)&m_localTransform, param_1);
        math::operator*((math*)local_68, (Matrix44T*)&m_localTransform, (Matrix44T*)&field_112);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&m_worldTransform, (Matrix44T*)local_68);
    }

    // 0x100667c60, 32 bytes, inline, placed by class name
    // Model::HasParticleEmitters() const
    byte Model::HasParticleEmitters() {
        byte bVar1;

        bVar1 = (&field_720)->empty();
        return bVar1 ^ 1;
    }

    // 0x100667cc0, 32 bytes, inline, placed by class name
    // Model::HasVFXs() const
    byte Model::HasVFXs() {
        byte bVar1;

        bVar1 = (&field_784)->empty();
        return bVar1 ^ 1;
    }

    // 0x10066a0c0, 32 bytes, inline, placed by class name
    // Model::SetGeometryQuery(shared_ptr<GeometryQuery> const&)
    void Model::SetGeometryQuery(shared_ptr* param_1) {
        shared_ptr<GeometryQuery>::operator=((shared_ptr<GeometryQuery>*)m_geometryQuery, param_1);
    }

    // 0x10066a0e0, 16 bytes, inline, placed by class name
    // Model::GetHighlightScale() const
    float Model::GetHighlightScale() {
        return m_highlightScale;
    }

    // 0x10080def0, 16 bytes, inline, placed by class name
    // Model::GetLodConfig(LodPassType)
    void Model::GetLodConfig(int param_1) {
        std::array<ModelLodPassConfig, 3ul>::operator[]((long)param_1);
    }

    // 0x1008139e0, 16 bytes, inline, placed by class name
    // Model::GetHighlightSilhouetteAlpha() const
    float Model::GetHighlightSilhouetteAlpha() {
        return m_highlightSilhouetteAlpha;
    }

    // 0x100814970, 16 bytes, inline, placed by class name
    // Model::GetHighlightsIgnoreDepth() const
    undefined1 Model::GetHighlightsIgnoreDepth() {
        return m_highlightsIgnoreDepth;
    }

    // 0x100815480, 16 bytes, inline, placed by class name
    // Model::GetHighlightedSectionScale() const
    float Model::GetHighlightedSectionScale() {
        return m_highlightedSectionScale;
    }

    // 0x1008180a0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Model::SetModelRawUniqueID(int)
    /* hal::audio::VoiceInstance::SetBussID(hal::audio::BussType) */

    void hal::audio::VoiceInstance::SetBussID(undefined4 param_2) {
        m_bussID = param_2;
    }

    // 0x1008180b0, 32 bytes, inline, placed by class name
    // Model::NewModelRawUniqueID()
    void Model::NewModelRawUniqueID() {
        m_NextUniqueID = m_NextUniqueID + 1;
    }

    // 0x10081c2a0, 16 bytes, inline, placed by class name
    // Model::GetUseUncompressedTextures() const
    undefined1 Model::GetUseUncompressedTextures() {
        return m_useUncompressedTextures;
    }

    // 0x10081cc80, 80 bytes, inline, placed by class name
    // Model::CheckUploaded(char const*, char const*)
    void Model::CheckUploaded(char* param_1, char* param_2) {
        undefined8 uVar1;

        if (field_937 != '\0') {
            uVar1 = logger::default_logger();
            logger::Logger::Log(
                uVar1, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/Model.h",
                537, "%s: Cannot %s a model already uploaded to the card", param_1, param_2);
        }
    }

    // 0x100821120, 16 bytes, inline, placed by class name
    // Model::SetConstructedState(ModelConstructedState)
    void Model::SetConstructedState(undefined1 param_2) {
        field_416[0] = param_2;
    }

    // 0x100821130, 16 bytes, inline, placed by class name
    // Model::SetAABB(math::AABB const&)
    void Model::SetAABB(AABB* param_1) {
        math::AABB::operator=((AABB*)&field_16, param_1);
    }

    // 0x100821140, 48 bytes, inline, placed by class name
    // Model::AddSavedModelHashList(unsigned int)
    void Model::AddSavedModelHashList(uint param_1) {
        uint local_c;

        local_c = param_1;
        (&field_352, &local_c)->push_back();
    }

    // 0x100847f10, 144 bytes, inline, placed by class name
    // Model::SortBatches()::$_0::operator()(std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter> const&, std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter> const&) const
    /* Model::SortBatches()::$_0::TEMPNAMEPLACEHOLDERVALUE(std::unique_ptr<GeometryBatchInstance,
   MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter> const&,
   std::unique_ptr<GeometryBatchInstance,
   MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter> const&) const
    */

    bool Model::SortBatches()::$_0::operator()(unique_ptr* param_1, unique_ptr* param_2) {
        bool bVar1;
        int iVar2;
        int iVar3;
        GeometryBatchInstance* pGVar4;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar5;
        ulong uVar6;
        ulong uVar7;

        pGVar4 =
            (GeometryBatchInstance*)
                std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                operator->(
                    (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                        param_1);
        pAVar5 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)pGVar4->GetMaterial();
        uVar6 = pAVar5->data();
        pGVar4 =
            (GeometryBatchInstance*)
                std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                operator->(
                    (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                        param_2);
        pAVar5 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)pGVar4->GetMaterial();
        uVar7 = pAVar5->data();
        bVar1 = true;
        if (uVar7 <= uVar6) {
            if (uVar6 == uVar7) {
                pGVar4 =
                    (GeometryBatchInstance*)std::unique_ptr<
                        GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                    operator->((unique_ptr<GeometryBatchInstance,
                                           MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)param_1);
                iVar2 = pGVar4->GetFirstSequenceIDFromSource();
                pGVar4 =
                    (GeometryBatchInstance*)std::unique_ptr<
                        GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                    operator->((unique_ptr<GeometryBatchInstance,
                                           MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)param_2);
                iVar3 = pGVar4->GetFirstSequenceIDFromSource();
                bVar1 = iVar2 < iVar3;
            } else {
                bVar1 = false;
            }
        }
        return bVar1;
    }

    // 0x1008488d0, 144 bytes, inline, placed by class name
    // Model::SortBatches()::$_1::operator()(std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter> const&, std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter> const&) const
    /* Model::SortBatches()::$_1::TEMPNAMEPLACEHOLDERVALUE(std::unique_ptr<BillboardBatchInstance,
   MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter> const&,
   std::unique_ptr<BillboardBatchInstance,
   MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter> const&) const
    */

    bool Model::SortBatches()::$_1::operator()(unique_ptr* param_1, unique_ptr* param_2) {
        bool bVar1;
        int iVar2;
        int iVar3;
        GeometryBatchInstance* pGVar4;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar5;
        ulong uVar6;
        ulong uVar7;
        BillboardBatchInstance* pBVar8;

        pGVar4 =
            (GeometryBatchInstance*)
                std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::
                operator->(
                    (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                        param_1);
        pAVar5 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)pGVar4->GetMaterial();
        uVar6 = pAVar5->data();
        pGVar4 =
            (GeometryBatchInstance*)
                std::unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::
                operator->(
                    (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                        param_2);
        pAVar5 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)pGVar4->GetMaterial();
        uVar7 = pAVar5->data();
        bVar1 = true;
        if (uVar7 <= uVar6) {
            if (uVar6 == uVar7) {
                pBVar8 =
                    (BillboardBatchInstance*)std::unique_ptr<
                        BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::
                    operator->((unique_ptr<BillboardBatchInstance,
                                           MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)param_1);
                iVar2 = pBVar8->GetFirstSequenceIDFromSource();
                pBVar8 =
                    (BillboardBatchInstance*)std::unique_ptr<
                        BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::
                    operator->((unique_ptr<BillboardBatchInstance,
                                           MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)param_2);
                iVar3 = pBVar8->GetFirstSequenceIDFromSource();
                bVar1 = iVar2 < iVar3;
            } else {
                bVar1 = false;
            }
        }
        return bVar1;
    }

    // 0x100849090, 32 bytes, inline, placed by class name
    // auto Model::UpdateModularParticleSystems(RT7Core&, eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>&, math::Matrix44T<float> const&, AnimationStateProvider*, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*, bool)::$_3::operator()<shared_ptr<ModularParticleSystem> >(shared_ptr<ModularParticleSystem> const&) const
    /* auto Model::UpdateModularParticleSystems(RT7Core&,
   eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>&,
   math::Matrix44T<float> const&, AnimationStateProvider*,
   eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
   eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*,
   bool)::$_3::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<ModularParticleSystem>
   const&) const */

    void Model::UpdateModularParticleSystems(
        RT7Core&, eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>&, math::Matrix44T<float> const&,
        AnimationStateProvider*,
        eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*,
        bool)::$_3::operator()(shared_ptr* param_1) {
        ModularParticleSystem* this_00;

        this_00 = (ModularParticleSystem*)shared_ptr<ModularParticleSystem>::operator->(
            (shared_ptr<ModularParticleSystem>*)this);
        this_00->IsFinished();
    }

    // 0x100869330, 16 bytes, inline, placed by class name
    // Model::GetCurrentFade() const
    undefined4 Model::GetCurrentFade() {
        return m_currentFade;
    }

    // 0x10091b490, 32 bytes, inline, placed by class name
    // Model::SetTint(math::Vector4T<float> const&)
    void Model::SetTint(Vector4T* param_1) {
        math::Rect<float>::operator=((Rect<float>*)&m_tint, (Rect*)param_1);
    }

} // namespace jag::graphics

namespace jag {
    class Model {
    public:
        bool SortTriangles<false>(int, int, int, int);
        bool SortTriangles<true>(int, int, int, int);
        void Init(unsigned int, unsigned int, unsigned int, unsigned int, bool, int const*, int const*, int const*,
                  int const*, int const*, int const*, int const*, int const*, int const*, int const*, int const*,
                  int const*, unsigned char const*, short const*, unsigned char const*, signed char const*, int const*,
                  int const*, signed char, signed char, signed char, unsigned char, unsigned short);
        void TransformVertices(int, int, int, int, int, int, int, int, int, int, int) const;
        void TransformVerticesScalar(unsigned int, int, int, int, int, int, int, int, int, int, int, int) const;
        void DummySortTriangles();
        int GetNumOutlineVerts() const;
        Callstack GetTintMode() const;
        int RenderOutline(unsigned int, TriangleVertexData*, int, unsigned short, unsigned short);
        int RenderTriangles(unsigned int, TriangleVertexData*);
        void Calculate2DAABB(short&, short&, short&, short&);
        Render2DAABB(unsigned int, TriangleVertexData*, int, unsigned char, unsigned short);
        IsTemporary() const;
        int GetNumVerts() const;
        Model(Model&&);
        Model();
        ~Model();

        // data members, from how the methods use this: 409 bytes
        undefined4 field_0;   // offset 0
        uint field_4;         // offset 4
        uint field_8;         // offset 8
        uint field_12;        // offset 12
        Callstack m_tintMode; // offset 16
        char _unknown_32[376];
        undefined1 m_temporary; // offset 408
    };

    // 0x1001b7fa0, 2528 bytes, inline, placed by class name
    // bool Model::SortTriangles<false>(int, int, int, int)
    bool Model::SortTriangles<false>(int param_1, int param_2, int param_3, int param_4) {
        Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>* this;
        Array<game::VarValue, eastl::allocator>* this_00;
        Array<game::VarValue, eastl::allocator>* this_01;
        short sVar1;
        short sVar2;
        short sVar3;
        short sVar4;
        short sVar5;
        short sVar6;
        char cVar7;
        undefined2 uVar8;
        long* plVar9;
        int* piVar10;
        float* pfVar11;
        array<TriangleVertexData, 3ul>* paVar12;
        undefined2* puVar13;
        undefined2* puVar14;
        undefined2* puVar15;
        short* psVar16;
        char* pcVar17;
        byte* pbVar18;
        long lVar19;
        undefined4 in_register_0000003c;
        long lVar20;
        int iVar21;
        ulong uVar22;
        int iVar23;
        long lVar24;
        long lVar25;
        ulong uVar26;
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
        float fVar42;
        float fVar43;
        int local_5c;
        float local_58;
        float local_54;
        long local_50;
        ulong local_48;
        float local_3c;
        float local_38;
        float local_34;

        lVar20 = CONCAT44(in_register_0000003c, param_1);
        if (6000 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "radixsize <= Model::MAX_MODEL_SIZE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/Model.cpp",
                440, (char*)0);
        }
        ___bzero(&internal::zsize, (long)param_2 * 2);
        internal::minZ = 2147483647;
        internal::maxZ = 0;
        plVar9 = (long*)oldscape::OSRenderCore_RenderThread::Instance();
        if (*(int*)(lVar20 + 8) != 0) {
            this = (Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>*)(lVar20 + 24);
            this_00 = (Array<game::VarValue, eastl::allocator>*)(lVar20 + 360);
            this_01 = (Array<game::VarValue, eastl::allocator>*)(lVar20 + 384);
            uVar26 = 0;
            do {
                piVar10 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(lVar20 + 120),
                                                                         uVar26);
                iVar23 = *piVar10;
                lVar19 = (long)iVar23;
                piVar10 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(lVar20 + 144),
                                                                         uVar26);
                iVar21 = *piVar10;
                pfVar11 = (float*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)(lVar20 + 168), uVar26);
                if (lVar19 != -2) {
                    lVar24 = (long)iVar21;
                    lVar25 = (long)(int)*pfVar11;
                    if ((*(float*)(&internal::sxf + lVar25 * 4) - *(float*)(&internal::sxf + lVar24 * 4)) *
                            (*(float*)(&internal::syf + lVar19 * 4) - *(float*)(&internal::syf + lVar24 * 4)) <
                        (*(float*)(&internal::syf + lVar25 * 4) - *(float*)(&internal::syf + lVar24 * 4)) *
                            (*(float*)(&internal::sxf + lVar19 * 4) - *(float*)(&internal::sxf + lVar24 * 4))) {
                        local_48 = CONCAT44(local_48._4_4_, iVar21);
                        local_50 = lVar24;
                        local_34 = *pfVar11;
                        paVar12 = (array<TriangleVertexData, 3ul>*)
                            Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](this, uVar26);
                        puVar13 = (undefined2*)std::array<TriangleVertexData, 3ul>::operator[](paVar12, 0);
                        paVar12 = (array<TriangleVertexData, 3ul>*)
                            Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](this, uVar26);
                        puVar14 = (undefined2*)std::array<TriangleVertexData, 3ul>::operator[](paVar12, 1);
                        paVar12 = (array<TriangleVertexData, 3ul>*)
                            Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](this, uVar26);
                        puVar15 = (undefined2*)std::array<TriangleVertexData, 3ul>::operator[](paVar12, 2);
                        *puVar13 = *(undefined2*)(&internal::cx + lVar19 * 2);
                        puVar13[1] = *(undefined2*)(&internal::cy + lVar19 * 2);
                        puVar13[2] = *(undefined2*)(&internal::cz + lVar19 * 2);
                        *puVar14 = *(undefined2*)(&internal::cx + local_50 * 2);
                        puVar14[1] = *(undefined2*)(&internal::cy + local_50 * 2);
                        puVar14[2] = *(undefined2*)(&internal::cz + local_50 * 2);
                        *puVar15 = *(undefined2*)(&internal::cx + lVar25 * 2);
                        puVar15[1] = *(undefined2*)(&internal::cy + lVar25 * 2);
                        puVar15[2] = *(undefined2*)(&internal::cz + lVar25 * 2);
                        local_5c = (((int)*(short*)(&internal::sortz + lVar25 * 2) +
                                     (int)*(short*)(&internal::sortz + local_50 * 2) +
                                     (int)*(short*)(&internal::sortz + lVar19 * 2)) *
                                            21845 +
                                        21845 >>
                                    16) +
                                   param_3;
                        local_38 = 0.0;
                        piVar10 = std::max<int>((int*)&local_38, &local_5c);
                        iVar21 = *piVar10;
                        local_5c = iVar21;
                        piVar10 = std::min<int>(&internal::minZ, &local_5c);
                        internal::minZ = *piVar10;
                        piVar10 = std::max<int>(&internal::maxZ, &local_5c);
                        internal::maxZ = *piVar10;
                        if (param_2 <= iVar21) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("p < radixsize",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "osrendercore/Model.cpp",
                                      484, (char*)0);
                        }
                        lVar24 = (long)local_5c;
                        sVar6 = (&internal::zsize)[lVar24];
                        (&internal::zsize)[lVar24] = sVar6 + 1;
                        (&internal::zlist)[lVar24 * 512 + (long)sVar6] = (short)uVar26;
                        cVar7 = this_00->empty();
                        if (cVar7 == '\0') {
                            psVar16 = (short*)Array<short, eastl::allocator>::operator[](
                                (Array<short, eastl::allocator>*)this_00, uVar26);
                            if (*psVar16 != -1) {
                                cVar7 = this_01->empty();
                                if (cVar7 == '\0') {
                                    pcVar17 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                                        (Array<unsigned char, eastl::allocator>*)this_01, uVar26);
                                    iVar21 = (int)(float)local_48;
                                    if (*pcVar17 != -1) {
                                        pbVar18 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                            (Array<unsigned char, eastl::allocator>*)this_01, uVar26);
                                        uVar22 = (ulong)*pbVar18;
                                        local_48 = uVar22;
                                        piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                            (Array<int, eastl::allocator>*)(lVar20 + 288), uVar22);
                                        iVar23 = *piVar10;
                                        piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                            (Array<int, eastl::allocator>*)(lVar20 + 312), uVar22);
                                        iVar21 = *piVar10;
                                        pfVar11 = (float*)Array<int, eastl::allocator>::operator[](
                                            (Array<int, eastl::allocator>*)(lVar20 + 336), local_48);
                                        local_34 = *pfVar11;
                                    }
                                } else {
                                    iVar21 = (int)(float)local_48;
                                }
                                lVar24 = (long)iVar23;
                                fVar34 = (float)(int)*(short*)(&internal::wx + lVar24 * 2);
                                fVar29 = (float)(int)*(short*)(&internal::wy + lVar24 * 2);
                                fVar41 = (float)(int)*(short*)(&internal::wz + lVar24 * 2);
                                lVar24 = (long)iVar21;
                                fVar36 = (float)(int)*(short*)(&internal::wx + lVar24 * 2) - fVar34;
                                fVar37 = (float)(int)*(short*)(&internal::wy + lVar24 * 2) - fVar29;
                                fVar43 = (float)(int)*(short*)(&internal::wz + lVar24 * 2) - fVar41;
                                lVar24 = (long)(int)local_34;
                                fVar39 = (float)(int)*(short*)(&internal::wx + lVar24 * 2) - fVar34;
                                sVar6 = *(short*)(&internal::wx + lVar19 * 2);
                                fVar40 = (float)(int)*(short*)(&internal::wy + lVar24 * 2) - fVar29;
                                fVar42 = (float)(int)*(short*)(&internal::wz + lVar24 * 2) - fVar41;
                                sVar1 = *(short*)(&internal::wy + lVar19 * 2);
                                sVar2 = *(short*)(&internal::wz + lVar19 * 2);
                                sVar3 = *(short*)(&internal::wx + local_50 * 2);
                                sVar4 = *(short*)(&internal::wy + local_50 * 2);
                                local_48 = CONCAT44(local_48._4_4_,
                                                    (float)(int)*(short*)(&internal::wx + lVar25 * 2) - fVar34);
                                local_34 = (float)(int)*(short*)(&internal::wy + lVar25 * 2) - fVar29;
                                sVar5 = *(short*)(&internal::wz + lVar25 * 2);
                                fVar30 = fVar42 * fVar37 - fVar40 * fVar43;
                                fVar31 = fVar39 * fVar43 - fVar42 * fVar36;
                                fVar35 = fVar40 * fVar36 - fVar39 * fVar37;
                                fVar32 = fVar35 * fVar40 - fVar31 * fVar42;
                                local_3c = fVar30 * fVar42 - fVar35 * fVar39;
                                fVar38 = fVar31 * fVar39 - fVar30 * fVar40;
                                fVar33 = 1.0 / (fVar38 * fVar43 + local_3c * fVar37 + fVar32 * fVar36);
                                local_38 =
                                    (fVar38 * ((float)(int)sVar2 - fVar41) + local_3c * ((float)(int)sVar1 - fVar29) +
                                     fVar32 * ((float)(int)sVar6 - fVar34)) *
                                    fVar33;
                                local_58 = -1.0;
                                local_54 = 1.0;
                                local_50._0_4_ = (float)(int)*(short*)(&internal::wz + local_50 * 2) - fVar41;
                                fVar27 = math::Clamp<float>(&local_38, &local_58, &local_54);
                                local_38 = ((float)local_50 * fVar38 + ((float)(int)sVar4 - fVar29) * local_3c +
                                            fVar32 * ((float)(int)sVar3 - fVar34)) *
                                           fVar33;
                                local_58 = -1.0;
                                local_54 = 1.0;
                                fVar28 = math::Clamp<float>(&local_38, &local_58, &local_54);
                                local_38 = (fVar38 * ((float)(int)sVar5 - fVar41) + local_3c * local_34 +
                                            fVar32 * (float)local_48) *
                                           fVar33;
                                local_58 = -1.0;
                                local_54 = 1.0;
                                local_3c = math::Clamp<float>(&local_38, &local_58, &local_54);
                                fVar32 = fVar35 * fVar37 - fVar31 * fVar43;
                                fVar33 = fVar43 * fVar30 - fVar35 * fVar36;
                                fVar36 = fVar31 * fVar36 - fVar30 * fVar37;
                                fVar31 = 1.0 / (fVar42 * fVar36 + fVar40 * fVar33 + fVar39 * fVar32);
                                fVar30 = fVar32 * (float)local_48;
                                fVar35 = fVar33 * local_34;
                                local_50 = CONCAT44(local_50._4_4_,
                                                    ((float)local_50 * fVar36 + ((float)(int)sVar4 - fVar29) * fVar33 +
                                                     ((float)(int)sVar3 - fVar34) * fVar32) *
                                                        fVar31);
                                psVar16 = (short*)Array<short, eastl::allocator>::operator[](
                                    (Array<short, eastl::allocator>*)this_00, uVar26);
                                sVar3 = *psVar16;
                                uVar8 = oldscape::OSRenderCore_RenderThread::GetAtlasUV((int)sVar3);
                                puVar15[3] = uVar8;
                                puVar14[3] = uVar8;
                                puVar13[3] = uVar8;
                                lVar19 = ((*(long*)(*plVar9 + -24) + (long)plVar9))->GetRenderStateNXT();
                                piVar10 = (int*)std::array<int, 256ul>::operator[](
                                    (array<int, 256ul>*)(lVar19 + 19678752), (long)sVar3);
                                iVar23 = *piVar10;
                                piVar10 = (int*)std::array<int, 256ul>::operator[](
                                    (array<int, 256ul>*)(lVar19 + 19679776), (long)sVar3);
                                iVar21 = *piVar10;
                                uVar8 = oldscape::OSRenderCore_RenderThread::GetLocalU(fVar27, iVar23);
                                puVar13[6] = uVar8;
                                uVar8 = oldscape::OSRenderCore_RenderThread::GetLocalU(
                                    (((float)(int)sVar2 - fVar41) * fVar36 + ((float)(int)sVar1 - fVar29) * fVar33 +
                                     ((float)(int)sVar6 - fVar34) * fVar32) *
                                        fVar31,
                                    iVar21);
                                puVar13[7] = uVar8;
                                uVar8 = oldscape::OSRenderCore_RenderThread::GetLocalU(fVar28, iVar23);
                                puVar14[6] = uVar8;
                                uVar8 = oldscape::OSRenderCore_RenderThread::GetLocalU((float)local_50, iVar21);
                                puVar14[7] = uVar8;
                                uVar8 = oldscape::OSRenderCore_RenderThread::GetLocalU(local_3c, iVar23);
                                puVar15[6] = uVar8;
                                uVar8 = oldscape::OSRenderCore_RenderThread::GetLocalU(
                                    (fVar36 * ((float)(int)sVar5 - fVar41) + fVar35 + fVar30) * fVar31, iVar21);
                                puVar15[7] = uVar8;
                            }
                        }
                    }
                }
                uVar26 = uVar26 + 1;
            } while (uVar26 < *(uint*)(lVar20 + 8));
        }
        return false;
    }

    // 0x1001b8aa0, 2656 bytes, inline, placed by class name
    // bool Model::SortTriangles<true>(int, int, int, int)
    bool Model::SortTriangles<true>(int param_1, int param_2, int param_3, int param_4) {
        Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>* this_00;
        undefined1* this_01;
        undefined1* this_02;
        short sVar1;
        short sVar2;
        short sVar3;
        short sVar4;
        short sVar5;
        short sVar6;
        short sVar7;
        int iVar8;
        uint uVar9;
        char cVar10;
        undefined2 uVar11;
        long* plVar12;
        int* piVar13;
        float* pfVar14;
        array<TriangleVertexData, 3ul>* paVar15;
        undefined2* puVar16;
        undefined2* puVar17;
        undefined2* puVar18;
        short* psVar19;
        char* pcVar20;
        byte* pbVar21;
        ulong uVar22;
        long lVar23;
        long lVar24;
        ulong uVar25;
        int iVar26;
        long lVar27;
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
        float fVar42;
        float fVar43;
        int local_5c;
        float local_58;
        float local_54;
        long local_50;
        uint local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        if (6000 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "radixsize <= Model::MAX_MODEL_SIZE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/Model.cpp",
                440, (char*)0);
        }
        ___bzero(&internal::zsize, (long)param_1 * 2);
        internal::minZ = 2147483647;
        internal::maxZ = 0;
        plVar12 = (long*)oldscape::OSRenderCore_RenderThread::Instance();
        if (field_8 == 0) {
            local_44 = 0;
        } else {
            this_00 = (Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>*)(m_tintMode + 8);
            this_01 = &field_360;
            this_02 = &field_384;
            uVar25 = 0;
            local_44 = 0;
            do {
                piVar13 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_120, uVar25);
                iVar26 = *piVar13;
                lVar24 = (long)iVar26;
                pfVar14 =
                    (float*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_144, uVar25);
                fVar28 = *pfVar14;
                pfVar14 =
                    (float*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_168, uVar25);
                uVar9 = local_44;
                if (lVar24 != -2) {
                    lVar23 = (long)(int)fVar28;
                    fVar29 = *pfVar14;
                    lVar27 = (long)(int)fVar29;
                    if ((*(float*)(&internal::sxf + lVar27 * 4) - *(float*)(&internal::sxf + lVar23 * 4)) *
                            (*(float*)(&internal::syf + lVar24 * 4) - *(float*)(&internal::syf + lVar23 * 4)) <
                        (*(float*)(&internal::syf + lVar27 * 4) - *(float*)(&internal::syf + lVar23 * 4)) *
                            (*(float*)(&internal::sxf + lVar24 * 4) - *(float*)(&internal::sxf + lVar23 * 4))) {
                        local_50 = lVar23;
                        local_38 = fVar29;
                        local_34 = fVar28;
                        if ((local_44 & 1) == 0) {
                            cVar10 = IsInsideTriangle(
                                param_3, param_4, (int)*(short*)(&internal::sy + lVar24 * 2),
                                (int)*(short*)(&internal::sy + lVar23 * 2), (int)*(short*)(&internal::sy + lVar27 * 2),
                                (int)*(short*)(&internal::sx + lVar24 * 2), (int)*(short*)(&internal::sx + lVar23 * 2),
                                (int)*(short*)(&internal::sx + lVar27 * 2));
                            local_44 = uVar9 & 255;
                            if (cVar10 != '\0') {
                                local_44 = 1;
                            }
                        }
                        paVar15 = (array<TriangleVertexData, 3ul>*)
                            Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](this_00, uVar25);
                        puVar16 = (undefined2*)std::array<TriangleVertexData, 3ul>::operator[](paVar15, 0);
                        paVar15 = (array<TriangleVertexData, 3ul>*)
                            Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](this_00, uVar25);
                        puVar17 = (undefined2*)std::array<TriangleVertexData, 3ul>::operator[](paVar15, 1);
                        paVar15 = (array<TriangleVertexData, 3ul>*)
                            Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](this_00, uVar25);
                        puVar18 = (undefined2*)std::array<TriangleVertexData, 3ul>::operator[](paVar15, 2);
                        *puVar16 = *(undefined2*)(&internal::cx + lVar24 * 2);
                        puVar16[1] = *(undefined2*)(&internal::cy + lVar24 * 2);
                        puVar16[2] = *(undefined2*)(&internal::cz + lVar24 * 2);
                        *puVar17 = *(undefined2*)(&internal::cx + local_50 * 2);
                        puVar17[1] = *(undefined2*)(&internal::cy + local_50 * 2);
                        puVar17[2] = *(undefined2*)(&internal::cz + local_50 * 2);
                        *puVar18 = *(undefined2*)(&internal::cx + lVar27 * 2);
                        puVar18[1] = *(undefined2*)(&internal::cy + lVar27 * 2);
                        puVar18[2] = *(undefined2*)(&internal::cz + lVar27 * 2);
                        local_5c = (((int)*(short*)(&internal::sortz + lVar27 * 2) +
                                     (int)*(short*)(&internal::sortz + local_50 * 2) +
                                     (int)*(short*)(&internal::sortz + lVar24 * 2)) *
                                            21845 +
                                        21845 >>
                                    16) +
                                   param_2;
                        local_3c = 0.0;
                        piVar13 = std::max<int>((int*)&local_3c, &local_5c);
                        iVar8 = *piVar13;
                        local_5c = iVar8;
                        piVar13 = std::min<int>(&internal::minZ, &local_5c);
                        internal::minZ = *piVar13;
                        piVar13 = std::max<int>(&internal::maxZ, &local_5c);
                        internal::maxZ = *piVar13;
                        if (param_1 <= iVar8) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("p < radixsize",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "osrendercore/Model.cpp",
                                      484, (char*)0);
                        }
                        lVar23 = (long)local_5c;
                        sVar7 = (&internal::zsize)[lVar23];
                        (&internal::zsize)[lVar23] = sVar7 + 1;
                        (&internal::zlist)[lVar23 * 512 + (long)sVar7] = (short)uVar25;
                        cVar10 = this_01->empty();
                        if ((cVar10 == '\0') && (psVar19 = (short*)Array<short, eastl::allocator>::operator[](
                                                     (Array<short, eastl::allocator>*)this_01, uVar25),
                                                 *psVar19 != -1)) {
                            cVar10 = this_02->empty();
                            if ((cVar10 == '\0') &&
                                (pcVar20 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                                     (Array<unsigned char, eastl::allocator>*)this_02, uVar25),
                                 *pcVar20 != -1)) {
                                pbVar21 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                    (Array<unsigned char, eastl::allocator>*)this_02, uVar25);
                                uVar22 = (ulong)*pbVar21;
                                piVar13 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&field_288, uVar22);
                                iVar26 = *piVar13;
                                pfVar14 = (float*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&field_312, uVar22);
                                local_34 = *pfVar14;
                                pfVar14 = (float*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&field_336, uVar22);
                                local_38 = *pfVar14;
                            }
                            lVar23 = (long)iVar26;
                            fVar34 = (float)(int)*(short*)(&internal::wx + lVar23 * 2);
                            fVar30 = (float)(int)*(short*)(&internal::wy + lVar23 * 2);
                            fVar41 = (float)(int)*(short*)(&internal::wz + lVar23 * 2);
                            lVar23 = (long)(int)local_34;
                            fVar36 = (float)(int)*(short*)(&internal::wx + lVar23 * 2) - fVar34;
                            fVar37 = (float)(int)*(short*)(&internal::wy + lVar23 * 2) - fVar30;
                            fVar43 = (float)(int)*(short*)(&internal::wz + lVar23 * 2) - fVar41;
                            lVar23 = (long)(int)local_38;
                            fVar39 = (float)(int)*(short*)(&internal::wx + lVar23 * 2) - fVar34;
                            sVar7 = *(short*)(&internal::wx + lVar24 * 2);
                            fVar40 = (float)(int)*(short*)(&internal::wy + lVar23 * 2) - fVar30;
                            fVar42 = (float)(int)*(short*)(&internal::wz + lVar23 * 2) - fVar41;
                            sVar1 = *(short*)(&internal::wy + lVar24 * 2);
                            sVar2 = *(short*)(&internal::wz + lVar24 * 2);
                            sVar3 = *(short*)(&internal::wx + local_50 * 2);
                            sVar4 = *(short*)(&internal::wy + local_50 * 2);
                            local_38 = (float)(int)*(short*)(&internal::wx + lVar27 * 2) - fVar34;
                            sVar5 = *(short*)(&internal::wy + lVar27 * 2);
                            sVar6 = *(short*)(&internal::wz + lVar27 * 2);
                            fVar31 = fVar42 * fVar37 - fVar40 * fVar43;
                            local_34 = fVar39 * fVar43 - fVar42 * fVar36;
                            fVar35 = fVar40 * fVar36 - fVar39 * fVar37;
                            fVar32 = fVar35 * fVar40 - local_34 * fVar42;
                            local_40 = fVar31 * fVar42 - fVar35 * fVar39;
                            fVar38 = local_34 * fVar39 - fVar31 * fVar40;
                            fVar33 = 1.0 / (fVar38 * fVar43 + local_40 * fVar37 + fVar32 * fVar36);
                            local_3c =
                                (fVar38 * ((float)(int)sVar2 - fVar41) + local_40 * ((float)(int)sVar1 - fVar30) +
                                 fVar32 * ((float)(int)sVar7 - fVar34)) *
                                fVar33;
                            local_58 = -1.0;
                            local_54 = 1.0;
                            local_50._0_4_ = (float)(int)*(short*)(&internal::wz + local_50 * 2) - fVar41;
                            fVar28 = math::Clamp<float>(&local_3c, &local_58, &local_54);
                            local_3c = ((float)local_50 * fVar38 + ((float)(int)sVar4 - fVar30) * local_40 +
                                        fVar32 * ((float)(int)sVar3 - fVar34)) *
                                       fVar33;
                            local_58 = -1.0;
                            local_54 = 1.0;
                            fVar29 = math::Clamp<float>(&local_3c, &local_58, &local_54);
                            local_3c = (fVar38 * ((float)(int)sVar6 - fVar41) +
                                        local_40 * ((float)(int)sVar5 - fVar30) + fVar32 * local_38) *
                                       fVar33;
                            local_58 = -1.0;
                            local_54 = 1.0;
                            local_40 = math::Clamp<float>(&local_3c, &local_58, &local_54);
                            fVar32 = fVar35 * fVar37 - local_34 * fVar43;
                            fVar33 = fVar43 * fVar31 - fVar35 * fVar36;
                            fVar35 = local_34 * fVar36 - fVar31 * fVar37;
                            fVar31 = 1.0 / (fVar42 * fVar35 + fVar40 * fVar33 + fVar39 * fVar32);
                            local_50 = CONCAT44(local_50._4_4_,
                                                ((float)local_50 * fVar35 + ((float)(int)sVar4 - fVar30) * fVar33 +
                                                 ((float)(int)sVar3 - fVar34) * fVar32) *
                                                    fVar31);
                            local_34 = (fVar35 * ((float)(int)sVar6 - fVar41) + fVar33 * ((float)(int)sVar5 - fVar30) +
                                        fVar32 * local_38) *
                                       fVar31;
                            psVar19 = (short*)Array<short, eastl::allocator>::operator[](
                                (Array<short, eastl::allocator>*)this_01, uVar25);
                            sVar3 = *psVar19;
                            uVar11 = oldscape::OSRenderCore_RenderThread::GetAtlasUV((int)sVar3);
                            puVar18[3] = uVar11;
                            puVar17[3] = uVar11;
                            puVar16[3] = uVar11;
                            lVar24 = ((*(long*)(*plVar12 + -24) + (long)plVar12))->GetRenderStateNXT();
                            piVar13 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)(lVar24 + 19678752),
                                                                               (long)sVar3);
                            iVar26 = *piVar13;
                            piVar13 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)(lVar24 + 19679776),
                                                                               (long)sVar3);
                            iVar8 = *piVar13;
                            uVar11 = oldscape::OSRenderCore_RenderThread::GetLocalU(fVar28, iVar26);
                            puVar16[6] = uVar11;
                            uVar11 = oldscape::OSRenderCore_RenderThread::GetLocalU(
                                (((float)(int)sVar2 - fVar41) * fVar35 + ((float)(int)sVar1 - fVar30) * fVar33 +
                                 ((float)(int)sVar7 - fVar34) * fVar32) *
                                    fVar31,
                                iVar8);
                            puVar16[7] = uVar11;
                            uVar11 = oldscape::OSRenderCore_RenderThread::GetLocalU(fVar29, iVar26);
                            puVar17[6] = uVar11;
                            uVar11 = oldscape::OSRenderCore_RenderThread::GetLocalU((float)local_50, iVar8);
                            puVar17[7] = uVar11;
                            uVar11 = oldscape::OSRenderCore_RenderThread::GetLocalU(local_40, iVar26);
                            puVar18[6] = uVar11;
                            uVar11 = oldscape::OSRenderCore_RenderThread::GetLocalU(local_34, iVar8);
                            puVar18[7] = uVar11;
                        }
                    }
                }
                uVar25 = uVar25 + 1;
            } while (uVar25 < field_8);
        }
        return (bool)((byte)local_44 & 1);
    }

    // 0x1001c04b0, 16 bytes, inline, placed by class name
    // Model::IsTemporary() const
    undefined1 Model::IsTemporary() {
        return m_temporary;
    }

    // 0x1001c4d20, 16 bytes, inline, placed by class name
    // Model::GetNumVerts() const
    int Model::GetNumVerts() {
        return field_8 * 3;
    }

    // 0x1001d10f0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::PoseStateProviderRSeven>::type make_shared<oldscape::dash3d::PoseStateProviderRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(shared_ptr<oldscape::dash3d::PoseStateRSeven>&)
    /* shared_ptr_if_not_array<oldscape::dash3d::PoseStateProviderRSeven>::type
   make_shared<oldscape::dash3d::PoseStateProviderRSeven,
   shared_ptr<oldscape::dash3d::PoseStateRSeven>
   const&>(shared_ptr<oldscape::dash3d::PoseStateRSeven> const&) */

    jag*
    jag::make_shared<oldscape::dash3d::PoseStateProviderRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven> const&>(
        shared_ptr* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        PoseStateProviderRSeven* local_30[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::dash3d::PoseStateProviderRSeven,
                                        shared_ptr<oldscape::dash3d::PoseStateRSeven> const&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::PoseStateProviderRSeven>, int,
                                   oldscape::dash3d::PoseStateProviderRSeven*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1001d1490, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::Model>::type make_shared<graphics::Model, graphics::Model&, graphics::ModelCopyType>(graphics::Model&, graphics::ModelCopyType&&)
    /* shared_ptr_if_not_array<graphics::Model>::type make_shared<graphics::Model,
   graphics::Model const&, graphics::ModelCopyType>(graphics::Model const&,
   graphics::ModelCopyType&&) */

    jag* make_shared<graphics::Model, graphics::Model_const&, graphics::ModelCopyType>(Model* param_1,
                                                                                       ModelCopyType* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        Model* local_38[2];

        pvVar1 = (void*)aligned_alloc(976, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_38[0] = placement_new<graphics::Model, graphics::Model_const&, graphics::ModelCopyType>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 =
                placement_new<ref_counter_shared<graphics::Model>, int, graphics::Model*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1001d3770, 16 bytes, complete-object constructor, inline, placed by class name
    // Model::Model(Model&&): jumps straight to the base-object constructor

    // 0x1001d3780, 320 bytes, base-object constructor, inline, placed by class name
    // Model::Model(Model&&)
    void Model::Model(Model* param_1) {
        uint uVar1;
        uint uVar2;
        uint uVar3;

        *(undefined4*)m_tintMode = *(undefined4*)param_1->m_tintMode;
        uVar1 = param_1->field_4;
        uVar2 = param_1->field_8;
        uVar3 = param_1->field_12;
        field_0 = param_1->field_0;
        field_4 = uVar1;
        field_8 = uVar2;
        field_12 = uVar3;
        new ((m_tintMode + 8), (Array*)(param_1->m_tintMode + 8))
            Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>();
        new (&field_48, (Array*)&param_1->field_48) Array<int, eastl::allocator>();
        new (&field_72, (Array*)&param_1->field_72) Array<int, eastl::allocator>();
        new (&field_96, (Array*)&param_1->field_96) Array<int, eastl::allocator>();
        new (&field_120, (Array*)&param_1->field_120) Array<int, eastl::allocator>();
        new (&field_144, (Array*)&param_1->field_144) Array<int, eastl::allocator>();
        new (&field_168, (Array*)&param_1->field_168) Array<int, eastl::allocator>();
        new (&field_192, (Array*)&param_1->field_192) Array<signed char, eastl::allocator>();
        new (&field_216, (Array*)&param_1->field_216) Array<unsigned char, eastl::allocator>();
        new (&field_240, (Array*)&param_1->field_240) Array<int, eastl::allocator>();
        new (&field_264, (Array*)&param_1->field_264) Array<int, eastl::allocator>();
        new (&field_288, (Array*)&param_1->field_288) Array<int, eastl::allocator>();
        new (&field_312, (Array*)&param_1->field_312) Array<int, eastl::allocator>();
        new (&field_336, (Array*)&param_1->field_336) Array<int, eastl::allocator>();
        new (&field_360, (Array*)&param_1->field_360) Array<short, eastl::allocator>();
        new (&field_384, (Array*)&param_1->field_384) Array<unsigned char, eastl::allocator>();
        m_temporary = param_1->m_temporary;
    }

    // 0x1001d3a00, 16 bytes, complete-object constructor, inline, placed by class name
    // Model::Model(): jumps straight to the base-object constructor

    // 0x1001d3a10, 528 bytes, base-object constructor, inline, placed by class name
    // Model::Model()
    void Model::Model() {
        field_4 = 0;
        field_8 = 0;
        field_12 = 0;
        new (m_tintMode) callstack::Callstack();
        new ((m_tintMode + 8)) Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>();
        new (&field_48) Array<int, eastl::allocator>();
        new (&field_72) Array<int, eastl::allocator>();
        new (&field_96) Array<int, eastl::allocator>();
        new (&field_120) Array<int, eastl::allocator>();
        new (&field_144) Array<int, eastl::allocator>();
        new (&field_168) Array<int, eastl::allocator>();
        new (&field_192) Array<signed char, eastl::allocator>();
        new (&field_216) Array<unsigned char, eastl::allocator>();
        new (&field_240) Array<int, eastl::allocator>();
        new (&field_264) Array<int, eastl::allocator>();
        new (&field_288) Array<int, eastl::allocator>();
        new (&field_312) Array<int, eastl::allocator>();
        new (&field_336) Array<int, eastl::allocator>();
        new (&field_360) Array<short, eastl::allocator>();
        new (&field_384) Array<unsigned char, eastl::allocator>();
        m_temporary = 0;
    }

    // 0x1001d3d50, 16 bytes, complete-object destructor, inline, placed by class name
    // Model::~Model(): jumps straight to the base-object destructor

    // 0x1001d3d60, 208 bytes, base-object destructor, inline, placed by class name
    // Model::~Model()
    void Model::~Model() {
        (&field_384)->~Array();
        (&field_360)->~Array();
        (&field_336)->~Array();
        (&field_312)->~Array();
        (&field_288)->~Array();
        (&field_264)->~Array();
        (&field_240)->~Array();
        (&field_216)->~Array();
        (&field_192)->~Array();
        (&field_168)->~Array();
        (&field_144)->~Array();
        (&field_120)->~Array();
        (&field_96)->~Array();
        (&field_72)->~Array();
        (&field_48)->~Array();
        ((m_tintMode + 8))->~Array();
    }

} // namespace jag

namespace jag::oldscape::rseven {
    // 0x1001d12f0, 128 bytes, placed by debug map only (low confidence)
    // FinishModel(jag::graphics::Model&, jag::graphics::RT7Core&)
    void FinishModel(Model* param_1, RT7Core* param_2) {
        MaterialManager* pMVar1;
        TextureManager* pTVar2;

        if (param_1->GetConstructedState() < 5) {
            pMVar1 = (MaterialManager*)param_2->GetMaterialManager();
            pTVar2 = (TextureManager*)param_2->GetTextureManager();
            param_1->UpdateAABB();
            param_1->SetUseUncompressedTextures(true);
            param_1->SetupInitialMaterials(pMVar1);
            param_1->BakeMaterialInfoAndTextureMetaAndHSLColors(pMVar1, pTVar2, true);
            param_1->ConstructFinishAndUpload();
        }
    }

    // 0x1001d1390, 128 bytes, placed by debug map only (low confidence)
    // SetModelHighlightable(jag::graphics::Model&, bool)
    void SetModelHighlightable(Model* param_1, bool param_2) {
        Layout* this;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;
        RenderMaterial* this_02;

        this = (Layout*)param_1->GetBatchList();
        this_00 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                              MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this);
        puVar1 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                             MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 =
                (GeometryBatchInstance*)std::unique_ptr<
                    jag::graphics::GeometryBatchInstance,
                    MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_02 = (RenderMaterial*)this_01->GetMaterial();
            this_02->SetOption(12, param_2);
        }
    }

} // namespace jag::oldscape::rseven

namespace jag::oldscape {
    // 0x1001d1190, 32 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread::GetFrameCount()
    undefined4 OSRenderCore_RenderThread::GetFrameCount() {
        return *(undefined4*)(field_112 + (long)field_0[-3]);
    }

} // namespace jag::oldscape

namespace jag::math {
    // 0x1001d11b0, 160 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float> Matrix33RotationY<float>(float)
    math* Matrix33RotationY<float>(float param_1) {
        ColourHSL local_78;
        ColourHSL local_68;
        ColourHSL local_58;
        undefined8 local_48;
        float local_2c;

        local_48._0_4_ = param_1;
        local_2c = (float)::cos(param_1);
        local_48 = ::sin((float)local_48);
        new (&local_78) ColourHSL(local_2c, 0.0, -(float)local_48);
        new (&local_68) ColourHSL(0.0, 1.0, 0.0);
        new (&local_58) ColourHSL((float)local_48, 0.0, local_2c);
        new (this) Matrix33T<float>((Vector3T*)&local_78, (Vector3T*)&local_68, (Vector3T*)&local_58);
        return this;
    }

} // namespace jag::math
