// libs/graphics/runetek7/model/GeometryBatchInstance.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::graphics {
    template <typename...> // 7 instantiations, e.g. <BillboardBatch_DE>, <GeometryBatch_DE>, <LightProbe_DE>
    class DrawableElementPool {
    public:
        // virtual methods in vtable order
        virtual void Release();
        void GetDrawableElementPool();
        TerrainPatch_DE* Create<TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul> const&, math::OBB&, float&,
                                render::InputAssemblerState*>(TerrainPatch& terrainPatch,
                                                              const eastl::fixed_vector<unsigned char, 256ul>& arg2,
                                                              math::OBB& obb, float& arg4,
                                                              render::InputAssemblerState*&& arg5);
        WaterPatch_DE* Create<WaterPatch&, math::OBB&, float&, render::InputAssemblerState*>(
            WaterPatch& waterPatch, math::OBB& obb, float& arg3, render::InputAssemblerState*&& arg4);
        DrawableElementPool(const math::OBB& obb, unsigned int arg2, float arg3);
        ParticleSystem_DE* Create<shared_ptr<ParticleSystem>, math::OBB&, float&, unsigned int, bool>(
            shared_ptr<ParticleSystem>&& particleSystem, math::OBB& obb, float& arg3, unsigned int&& arg4, bool&& arg5);
        GeometryBatch_DE* Create<math::OBB&, float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&, unsigned int,
                                 GeometryBatchInstance&>(math::OBB& obb, float& arg2,
                                                         const eastl::vector_map<int, FaceGroupRenderMasks>*& arg3,
                                                         unsigned int&& arg4,
                                                         GeometryBatchInstance& geometryBatchInstance);
        GeometryBatch_DE*
        Create<math::OBB&, float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&, unsigned int&,
               GeometryBatchInstance&>(math::OBB& obb, float& arg2,
                                       const eastl::vector_map<int, FaceGroupRenderMasks>*& arg3, unsigned int& arg4,
                                       GeometryBatchInstance& geometryBatchInstance);
        ParticleSystem_DE* Create<ModularParticleSystemDrawable&, math::OBB const&, float&, unsigned int, bool, bool>(
            ModularParticleSystemDrawable& modularParticleSystemDrawable, const math::OBB& obb, float& arg3,
            unsigned int&& arg4, bool&& arg5, bool&& arg6);
        BillboardBatch_DE*
        Create<float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&, BillboardBatchInstance&>(
            float& arg1, const eastl::vector_map<int, FaceGroupRenderMasks>*& arg2,
            BillboardBatchInstance& billboardBatchInstance);
        SkyBox_DE* Create<>();
        DrawableElementPool();
        LightProbe_DE* Create<>();
    };

    class GeometryBatchInstance : public ModelParticleSource // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual void Transform(const math::Matrix44T<float>& matrix44);
        virtual void Translate(const math::Vector3T<float>& vector3);
        virtual void Rotate(const math::QuaternionT<float>& quaternion, bool arg2);
        virtual void Rotate90(Rotation90 rotation90, bool arg2);
        virtual ~GeometryBatchInstance();
        virtual void GatherDrawableElements(DrawableQueue& arg1, RT7Core& arg2, const SceneViewData& arg3,
                                            const EffectManager& arg4);
        virtual void RenderDebug(RenderPassType renderPassType, DrawableElement& drawableElement) const;
        RenderMaterial GetMaterial();
        RenderMaterial GetMaterial() const;
        void GetGeometryBatch();
        void GetGeometryBatch() const;
        uint8_t* GetSourceModelExternalIndexList();
        uint8_t* GetVertexAnimation() const;
        void Reserve(const GeometryBatchCombineHelper& geometryBatchCombineHelper);
        void Append(const GeometryBatchInstance& geometryBatchInstance, bool arg2);
        GeometryBatchInstance(Model& model, unsigned short arg2);
        void SetInstanceDebugColour();
        GeometryBatchInstance(GeometryBatchInstance&& geometryBatchInstance, Model& model);
        void UpdateShadowRenderFlags();
        GeometryBatchInstance(const GeometryBatchInstance& geometryBatchInstance, Model& model, bool arg3);
        GeometryBatchInstance(Model& model, const shared_ptr<GeometryBatch>& geometryBatch);
        void SetDefaultLODs(const EffectManager& effectManager, RenderPassType renderPassType,
                            const SceneViewData& sceneViewData, float arg4, const math::OBB& obb);
        void SetLodLevel(LodPassType lodPassType, int arg2);
        void IsTransformed() const;
        void SetTransformed(bool arg1);
        void GetAABB() const;
        void SetAnimationStateProvider(const shared_ptr<AnimationStateProvider>& animationStateProvider);
        void UpdateAnimation(ThreadPool& threadPool, unsigned int arg2, const math::Matrix44T<float>& matrix44);
        void EndUpdateAnimation();
        uint32_t LoadMeshFromModelRawRT7(PacketView& packetView, unsigned int arg2);
        void SetInitialSource(int arg1, unsigned char arg2, int arg3);
        void ChangeSourceExternalID(int arg1, int arg2);
        void ChangeSourceExternalIDs(int arg1);
        uint32_t GetFirstMaterialIDFromSource() const;
        unsigned long GetFirstSequenceIDFromSource() const;
        void BuildMaterialIDListFromSource(eastl::fixed_vector<int, 128ul>& arg1) const;
        void SetInitialMaterial(const Material& material, bool arg2);
        void BakeBatchFlags();
        void BakeTile(unsigned char arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4,
                      unsigned char arg5, unsigned char arg6, unsigned char arg7);
        void BakeHSLColors(eastl::fixed_map<int, Material const*, 64ul> const& fixed_map);
        void BakeMaterialInfoAndTextureMeta(eastl::fixed_map<int, Material const*, 64ul> const& fixed_map1,
                                            const eastl::fixed_map<int, ModelTextureMeta, 64ul>& fixed_map2);
        void SortSections();
        bool IsCombinableWith(const GeometryBatchInstance& geometryBatchInstance, bool arg2, bool arg3, bool arg4,
                              TextureAtlas& textureAtlas);
        void Assign(const GeometryBatchInstance& geometryBatchInstance);
        void DestroyRenderingResources();
        void TransformNormals(const math::QuaternionT<float>& quaternion, bool arg2);
        void Scale(const math::Vector3T<float>& vector3);
        void HillChange(graphics::HillChange arg1, int arg2, const Array<Array<int>>& arg3,
                        const Array<Array<int>>& arg4, const LocationHelpers::LocationHillChangeData& arg5);
        void Rematerial(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2);
        void RematerialSingle(unsigned short arg1, unsigned short arg2);
        void AmbientAdjust(unsigned short arg1);
        void TintAdjust(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4);
        void SetTint(math::Vector4T<float> vector4);
        void InitRenderPassEffects();
        uint8_t[16] GetTint() const;
        void UpdateForwardPassEffect(DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                     RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                     const EffectManager& effectManager, float arg6, float arg7, bool arg8,
                                     const TextureInclusionMode* textureInclusionMode, const math::OBB& obb,
                                     unsigned char arg11, RenderPassType renderPassType);
        void GetAnimatesTransparency() const;
        uint8_t GetAnimatedColourType() const;
        uint32_t GetLodLevel(LodPassType lodPassType) const;
        void UpdateGeometryPassEffect(DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                      RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                      const EffectManager& effectManager, float arg6, float arg7, bool arg8,
                                      const TextureInclusionMode* textureInclusionMode, RenderPassType renderPassType);
        void UpdateShadowPassEffect(DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                    RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                    const EffectManager& effectManager, float arg6, float arg7, bool arg8,
                                    const TextureInclusionMode* textureInclusionMode);
        void UpdateMiniMapPassEffect(DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                     RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                     const EffectManager& effectManager, float arg6, float arg7,
                                     const TextureInclusionMode* textureInclusionMode);
        void UpdateObjectHighlightPassEffect(DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                             RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                             const EffectManager& effectManager, float arg6, float arg7, bool arg8,
                                             const TextureInclusionMode* textureInclusionMode,
                                             DrawableGroupLayer drawableGroupLayer);
        void CreateRenderingResources();
        void GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core, const SceneViewData& sceneViewData,
                                    const EffectManager& effectManager,
                                    const eastl::vector_map<int, FaceGroupRenderMasks>* arg5, unsigned char arg6);
        void IsHidden() const;
        void GetRenderingCameraDistances(float& arg1, float& arg2, float& arg3, math::OBB& obb, bool arg5,
                                         const SceneViewData& sceneViewData);
        unsigned long CastsShadow() const;
        void Prefetch() const;
        void SetPointLightIndicesVertexData(bool arg1);
        void ClearAnimationState();
        uint8_t* GetApproxMaterialInfoList() const;
        static int32_t m_renderDepthEnabled;              // = 1
        static int32_t m_alphaTestThresholdOverrideValue; // = 127
        static int32_t m_debugLodInstanceColourPassType;
        static bool m_debugLodInstanceColourEnabled;
        static bool m_showWorldAABB;
        static bool m_showWorldOBB;
        static bool m_alphaTestThresholdOverride;

    private:
        uint8_t _unknown_84[572];
        Model* field_656;
        uint8_t _unknown_664[96];
        uint64_t field_760;
        uint32_t field_768;
        uint8_t _unknown_772[108];
        uint64_t field_880;
        uint64_t field_888;
        uint8_t _unknown_896[384];
    };

    // 0x10036bfd0
    void GeometryBatchInstance::GetGeometryBatch() {
        **field_24;
    }

    // 0x10036db80
    uint8_t* GeometryBatchInstance::GetSourceModelExternalIndexList() {
        return &field_696;
    }

    // 0x1007bb910
    WaterPatch_DE*
    DrawableElementPool<WaterPatch_DE>::Create<WaterPatch&, math::OBB&, float&, render::InputAssemblerState*>(
        WaterPatch& waterPatch, math::OBB& obb, float& arg3, render::InputAssemblerState*&& arg4) {
        uint32_t uVar3;
        WaterPatch_DE* this_00;
        Logger* this_01;

        auto fastPool = GetDrawableElementPool();
        int iVar1 = fastPool->GetValue();
        int iVar2 = fastPool->capacity();
        if (iVar1 < iVar2) {
            this_00 = fastPool->Create<WaterPatch&, math::OBB&, float&, render::InputAssemblerState*>(waterPatch, obb,
                                                                                                      arg3, arg4);
        } else {
            this_01 = logger::default_logger();
            uVar3 = fastPool->GetValue();
            this_01->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "renderer/DrawableElement.h",
                         142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            this_00 = (WaterPatch_DE*)operator new(192);
            new (this_00) WaterPatch_DE(waterPatch, obb, arg3, arg4);
        }
        return this_00;
    }

    // 0x1007d3210
    ParticleSystem_DE*
    DrawableElementPool<ParticleSystem_DE>::Create<shared_ptr<ParticleSystem>, math::OBB&, float&, unsigned int, bool>(
        shared_ptr<ParticleSystem>&& particleSystem, math::OBB& obb, float& arg3, unsigned int&& arg4, bool&& arg5) {
        uint32_t uVar3;
        ParticleSystem_DE* particleSystem_DE;
        Logger* this_00;

        GetDrawableElementPool();
        int iVar1 = ((Option<game::option::EnumBrightness>*)&GetDrawableElementPool()::pool)->GetValue();
        int iVar2 = ((FastPool<audio::SoundInstance, int>*)&GetDrawableElementPool()::pool)->capacity();
        if (iVar1 < iVar2) {
            particleSystem_DE = ((FastPool<ParticleSystem_DE, int>*)&GetDrawableElementPool()::pool)
                                    ->Create<shared_ptr<ParticleSystem>, math::OBB&, float&, unsigned int, bool>(
                                        particleSystem, obb, arg3, arg4, arg5);
        } else {
            this_00 = logger::default_logger();
            uVar3 = ((Option<game::option::EnumBrightness>*)&GetDrawableElementPool()::pool)->GetValue();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "particles/../renderer/DrawableElement.h",
                         142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            particleSystem_DE = (ParticleSystem_DE*)operator new(144);
            new (particleSystem_DE) ParticleSystem_DE(particleSystem, obb, arg3, arg4, arg5);
        }
        return particleSystem_DE;
    }

    // 0x1007dd520
    uint8_t* GeometryBatchInstance::GetVertexAnimation() const {
        return &field_800;
    }

    // 0x10080de80
    void GeometryBatchInstance::SetLodLevel(LodPassType lodPassType, int arg2) {
        int local_2c[3];

        local_2c[1] = 0;
        local_2c[0] = arg2;
        local_2c[2] = ((GeometryBatch*)(*field_24).operator->())->GetNumLods();
        local_2c[2] = local_2c[2] - 1;
        int iVar1 = math::Clamp<int>(*local_2c, *(local_2c + 1), *(local_2c + 2));
        int* piVar2 = &field_760[(long)(int)lodPassType];
        *piVar2 = iVar1;
    }

    // 0x100811250
    void GeometryBatchInstance::GetAnimatesTransparency() const {
        field_800.GetAnimatesTransparency();
    }

    // 0x100811270
    uint8_t GeometryBatchInstance::GetAnimatedColourType() const {
        shared_ptr<AnimationStateProvider>* psVar3;
        long* plVar4;

        uint8_t* this_01 = &field_800;
        char cVar1 = (GetMaterial((GeometryBatchInstance*)this_01))->operator_cast_to_bool();
        uint8_t uVar2 = 2;
        if (cVar1) {
            psVar3 = (shared_ptr<AnimationStateProvider>*)GetMaterial((GeometryBatchInstance*)this_01);
            plVar4 = (long*)(*psVar3).operator->();
            cVar1 = (**(void (**)(...))(*plVar4 + 56))(plVar4);
            if (cVar1 != '\x02') {
                psVar3 = (shared_ptr<AnimationStateProvider>*)GetMaterial((GeometryBatchInstance*)this_01);
                plVar4 = (long*)(*psVar3).operator->();
                uVar2 = (**(void (**)(...))(*plVar4 + 56))(plVar4);
            }
        }
        return uVar2;
    }

    // 0x1008113c0
    uint32_t GeometryBatchInstance::GetLodLevel(LodPassType lodPassType) const {
        uint32_t* puVar1 = &field_760[(long)(int)lodPassType];
        return *puVar1;
    }

    // 0x1008134a0
    void GeometryBatchInstance::IsHidden() const {
        m_material->GetOption(10);
    }

    // 0x100813620
    GeometryBatch_DE* DrawableElementPool<GeometryBatch_DE>::Create<
        math::OBB&, float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&, unsigned int, GeometryBatchInstance&>(
        math::OBB& obb, float& arg2, const eastl::vector_map<int, FaceGroupRenderMasks>*& arg3, unsigned int&& arg4,
        GeometryBatchInstance& geometryBatchInstance) {
        uint32_t uVar3;
        GeometryBatch_DE* geometryBatch_DE;
        Logger* this_00;

        GetDrawableElementPool();
        int iVar1 = ((Option<game::option::EnumBrightness>*)&GetDrawableElementPool()::pool)->GetValue();
        int iVar2 = ((FastPool<audio::SoundInstance, int>*)&GetDrawableElementPool()::pool)->capacity();
        if (iVar1 < iVar2) {
            geometryBatch_DE =
                ((FastPool<GeometryBatch_DE, int>*)&GetDrawableElementPool()::pool)
                    ->Create<math::OBB&, float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&, unsigned int&,
                             GeometryBatchInstance&>(obb, arg2, arg3, arg4, geometryBatchInstance);
        } else {
            this_00 = logger::default_logger();
            uVar3 = ((Option<game::option::EnumBrightness>*)&GetDrawableElementPool()::pool)->GetValue();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "renderer/DrawableElement.h",
                         142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            geometryBatch_DE = (GeometryBatch_DE*)operator new(160);
            new (geometryBatch_DE) GeometryBatch_DE(obb, arg2, arg3, arg4, geometryBatchInstance);
        }
        return geometryBatch_DE;
    }

    // 0x100813790
    GeometryBatch_DE* DrawableElementPool<GeometryBatch_DE>::Create<
        math::OBB&, float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&, unsigned int&,
        GeometryBatchInstance&>(math::OBB& obb, float& arg2, const eastl::vector_map<int, FaceGroupRenderMasks>*& arg3,
                                unsigned int& arg4, GeometryBatchInstance& geometryBatchInstance) {
        uint32_t uVar3;
        GeometryBatch_DE* geometryBatch_DE;
        Logger* this_00;

        GetDrawableElementPool();
        int iVar1 = ((Option<game::option::EnumBrightness>*)&GetDrawableElementPool()::pool)->GetValue();
        int iVar2 = ((FastPool<audio::SoundInstance, int>*)&GetDrawableElementPool()::pool)->capacity();
        if (iVar1 < iVar2) {
            geometryBatch_DE =
                ((FastPool<GeometryBatch_DE, int>*)&GetDrawableElementPool()::pool)
                    ->Create<math::OBB&, float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&, unsigned int&,
                             GeometryBatchInstance&>(obb, arg2, arg3, arg4, geometryBatchInstance);
        } else {
            this_00 = logger::default_logger();
            uVar3 = ((Option<game::option::EnumBrightness>*)&GetDrawableElementPool()::pool)->GetValue();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "renderer/DrawableElement.h",
                         142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            geometryBatch_DE = (GeometryBatch_DE*)operator new(160);
            new (geometryBatch_DE) GeometryBatch_DE(obb, arg2, arg3, arg4, geometryBatchInstance);
        }
        return geometryBatch_DE;
    }

    // 0x100813980
    unsigned long GeometryBatchInstance::CastsShadow() const {
        unsigned long uVar2;

        if (m_material->GetOption(7) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = field_8.GetPos();
            uVar2 = uVar2 & 18446744073709551361;
        }
        return uVar2;
    }

    // 0x1008185e0
    void GeometryBatchInstance::SetPointLightIndicesVertexData(bool arg1) {
        m_material->SetOption(11, arg1);
    }

    // 0x1008188d0
    void GeometryBatchInstance::ClearAnimationState() {
        field_800.ClearAnimationStateProvider();
    }

    // 0x10081bcb0
    uint8_t* GeometryBatchInstance::GetApproxMaterialInfoList() const {
        return &field_664;
    }

    // 0x10092fa10
    LightProbe_DE* DrawableElementPool<LightProbe_DE>::Create<>() {
        uint32_t uVar3;
        LightProbe_DE* lightProbe_DE;
        Logger* this_00;

        GetDrawableElementPool();
        int iVar1 = ((Option<game::option::EnumBrightness>*)&GetDrawableElementPool()::pool)->GetValue();
        int iVar2 = ((FastPool<audio::SoundInstance, int>*)&GetDrawableElementPool()::pool)->capacity();
        if (iVar1 < iVar2) {
            lightProbe_DE = ((FastPool<LightProbe_DE, int>*)&GetDrawableElementPool()::pool)->Create<>();
        } else {
            this_00 = logger::default_logger();
            uVar3 = ((Option<game::option::EnumBrightness>*)&GetDrawableElementPool()::pool)->GetValue();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "renderer/DrawableElement.h",
                         142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            lightProbe_DE = (LightProbe_DE*)operator new(112);
            lightProbe_DE->_vptr = nullptr;
            *(uint64_t*)&lightProbe_DE->field_8 = 0;
            *(uint64_t*)&lightProbe_DE->field_16 = 0;
            *(uint64_t*)&lightProbe_DE->field_24 = 0;
            *(uint64_t*)&lightProbe_DE->field_32 = 0;
            *(uint64_t*)&lightProbe_DE->field_40 = 0;
            *(uint64_t*)&lightProbe_DE->field_48 = 0;
            *(uint64_t*)&lightProbe_DE->field_56 = 0;
            *(uint64_t*)&lightProbe_DE->field_64 = 0;
            *(uint64_t*)&lightProbe_DE->field_72 = 0;
            *(uint64_t*)&lightProbe_DE->field_80 = 0;
            *(uint64_t*)&lightProbe_DE->field_88 = 0;
            *(uint64_t*)&lightProbe_DE->field_96 = 0;
            lightProbe_DE->field_104 = nullptr;
            new (lightProbe_DE) LightProbe_DE();
        }
        return lightProbe_DE;
    }

} // namespace jag::graphics

namespace jag::oldscape::dash3d {
    // 0x10036bff0
    void CombineOperation::UpdateLabelOffset(
        const jag::graphics::Model& model, unsigned short& arg2,
        std::function<eastl::vector_map<unsigned short, unsigned short> const*(jag::graphics::GeometryBatch const&)>
            callback) const {
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*
            geometryBatchInstance1;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*
            geometryBatchInstance2;

        auto this_00 = model.GetBatchList();
        geometryBatchInstance1 =
            (unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*)
                this_00->HeapBeginPtr();
        auto this_01 = model.GetBatchList();
        geometryBatchInstance2 =
            (unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*)this_01->end();
        arg2 = eastl::accumulate<
            std::unique_ptr<jag::graphics::GeometryBatchInstance,
                            MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> const*,
            unsigned short,
            (jag::graphics::Model const&)
                ->UpdateLabelOffset(unsigned short&,
                                    std::function<eastl::vector_map<unsigned short, unsigned short> const*(
                                        jag::graphics::GeometryBatch const&)>) const ::__9>(
            geometryBatchInstance1, geometryBatchInstance2, arg2, (__9*)callback);
    }

    // 0x10036c440
    AnimateOperation* AnimateOperation::GetNextPose(const ResolvedModel& resolvedModel,
                                                    const OperationRecordEntry* operationRecordEntry) const {
        new (this) shared_ptr(resolvedModel.field_64);
        return this;
    }

    // 0x10036c460
    bool AnimateOperation::IsEqual(const Operation& operation) const {
        PoseStateRSeven* poseStateRSeven1;
        PoseStateRSeven* poseStateRSeven2;
        uint64_t uVar2;

        if (operation.GetPos() == 0) {
            poseStateRSeven1 = (PoseStateRSeven*)**field_64;
            poseStateRSeven2 = (PoseStateRSeven*)*(*((operation + 4)));
            uVar2 = *poseStateRSeven1 == *poseStateRSeven2;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x10036c4b0
    DashAnimateOperation* DashAnimateOperation::GetNextPose(const ResolvedModel& resolvedModel,
                                                            const OperationRecordEntry* operationRecordEntry) const {
        Array<int>* arg4;
        ReturnValue local_40;

        if (resolvedModel.field_88->operator_cast_to_bool() == '\0') {
            make_shared<DashPoseStateRSeven, shared_ptr<AnimFrameSet> const&, int const&, ResolvedModel const&>(
                &local_40, (shared_ptr<AnimFrameSet>*)resolvedModel.field_64, (int*)resolvedModel.field_80,
                (ResolvedModel*)operationRecordEntry);
            shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        } else {
            arg4 = (Array<int>*)*resolvedModel.field_88;
            make_shared<MaskedDashPoseStateRSeven, shared_ptr<AnimFrameSet> const&, int const&, ResolvedModel const&,
                        Array<int>&, bool const&>(&local_40, (shared_ptr<AnimFrameSet>*)resolvedModel.field_64,
                                                  (int*)resolvedModel.field_80, (ResolvedModel*)operationRecordEntry,
                                                  arg4, (bool*)resolvedModel.field_104);
            shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        }
        return this;
    }

    // 0x10036c700
    bool DashAnimateOperation::IsEqual(const Operation& operation) const {
        bool bVar1;

        if ((operation.GetPos() == 2) && (bVar1 = field_64 == (*((operation + 4))), bVar1)) {
            return field_80 == *(int*)&operation[5]._vptr;
        }
        return 0;
    }

    // 0x10036c740
    AnimateBaseOperation* AnimateBaseOperation::Apply(const ResolvedModel& resolvedModel,
                                                      const OperationRecordEntry* operationRecordEntry) const {
        PoseStateRSeven* poseStateRSeven;
        OperationRecordEntry* in_RCX;
        ResolvedModel local_e8;
        shared_ptr<PoseStateRSeven> local_60;
        ReturnValue local_50;
        ReturnValue local_40;

        OperationRecordEntry* local_68 = in_RCX;
        (**(void (**)(...))(*(long*)resolvedModel + 40))(&local_60);
        auto this_00 = operationRecordEntry->GetModel();
        Model* model = (Model*)**this_00;
        poseStateRSeven = (PoseStateRSeven*)*local_60;
        LoadTransparencyAffectedLabels((AnimateBaseOperation*)resolvedModel, model, poseStateRSeven);
        ResolvedModel local_158 = operationRecordEntry->GetLocalTransform();
        if (local_158 != *PTR_IDENTITY_100ee6730) {
            local_158 = operationRecordEntry->GetLocalTransform();
            local_e8.operator_cast_to_Matrix43T();
            make_shared<TransformedPoseStateRSeven, jag::math::Matrix43T<float>>(&local_40,
                                                                                 (Matrix43T<float>*)&local_e8);
            make_shared<ChainedPoseStateRSeven, shared_ptr<TransformedPoseStateRSeven>, shared_ptr<PoseStateRSeven>&>(
                &local_50, &local_40, &local_60);
            local_60 = local_50;
        }
        local_158 = ResolvedModel();
        auto this_01 = operationRecordEntry->GetAnimationState();
        if (shared_ptr::operator_cast_to_bool(this_01) == '\0') {
            local_e8 = ResolvedModel(*this_00, local_60, in_RCX);
            local_158 = local_e8;
        } else {
            make_shared<ChainedPoseStateRSeven, shared_ptr<PoseStateRSeven> const&, shared_ptr<PoseStateRSeven>&>(
                &local_40, (shared_ptr<PoseStateRSeven>*)this_01, &local_60);
            local_50.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
            local_e8 = ResolvedModel(*this_00, local_50, in_RCX);
            local_158 = local_e8;
        }
        *this = resolvedModel.SeparateFacesByLabelTransparency(*operationRecordEntry, local_158, local_68);
        return this;
    }

    // 0x10036ca00
    void AnimateBaseOperation::LoadTransparencyAffectedLabels(const jag::graphics::Model& model,
                                                              const PoseStateRSeven& poseStateRSeven) const {
        Layout* pLVar2;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        GeometryBatchInstance* pGVar3;
        unsigned short* arg1;
        unsigned short* puVar4;
        float extraout_XMM0_Da;
        vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<unsigned short>>
            local_60;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_38;

        uint8_t* this_02 = field_16;
        if (this_02->Ready() == '\0') {
            local_60 = eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                         eastl::vector<unsigned short>>();
            this_02->operator=(&local_60);
            pLVar2 = (Layout*)model.GetBatchList();
            this_00 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                                  MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                          pLVar2->HeapBeginPtr();
            local_38 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                           pLVar2->end();
            if (this_00 != local_38) {
                do {
                    pGVar3 = (GeometryBatchInstance*)(*this_00).operator->();
                    pGVar3 = (GeometryBatchInstance*)pGVar3->GetGeometryBatch();
                    pLVar2 = (Layout*)pGVar3->GetMaterial();
                    arg1 = (unsigned short*)pLVar2->HeapBeginPtr();
                    puVar4 = (unsigned short*)pLVar2->end();
                    for (; arg1 != puVar4; arg1 = arg1 + 2) {
                        (poseStateRSeven._vptr->GetLabelTransparencyDelta)(poseStateRSeven, (unsigned long)*arg1);
                        if (extraout_XMM0_Da < 0.0) {
                            ((vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                         eastl::vector<unsigned short>>*)(*this_02)
                                 .operator->())
                                ->insert(*arg1);
                        }
                    }
                    this_00 = this_00 + 8;
                } while (this_00 != local_38);
            }
        }
    }

    // 0x10036cbd0
    ResolvedModel
    AnimateBaseOperation::SeparateFacesByLabelTransparency(const ResolvedModel& resolvedModel1,
                                                           const ResolvedModel& resolvedModel2,
                                                           const OperationRecordEntry* operationRecordEntry) const {
        unsigned int uVar2;
        ResolvedModel* this_01;
        shared_ptr<jag::graphics::Model>* psVar4;
        shared_ptr<PoseStateRSeven>* psVar5;
        uint64_t uVar6;
        Model* pMVar7;
        Layout* this_02;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_03;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar8;
        GeometryBatchInstance* geometryBatchInstance;
        vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
                               MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>>*
            matrix44;
        ReturnValue local_f8;
        ReturnValue local_b8;
        BatchDestroy<eastl::vector<
            std::unique_ptr<jag::graphics::GeometryBatchInstance,
                            MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>
            local_70;
        ResolvedModel* local_50;
        shared_ptr<jag::graphics::Model> local_40;

        ResolvedModel* pRVar9 = resolvedModel2;
        if (((vector<game::MapSquare::MapSquarePos>*)(*field_16).operator->())->size() == 0) {
            ResolvedModel result(resolvedModel2);
        } else {
            if (CanReusePreviousTransparencyBatching(resolvedModel1, operationRecordEntry) == '\0') {
                psVar4 = (shared_ptr<jag::graphics::Model>*)resolvedModel2.GetModel();
                uVar6 = **psVar4;
                matrix44 = (vector<std::unique_ptr<
                                jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>>*)2;
                local_40.CloneModel(this, uVar6);
                local_70.BatchDestroy<>();
                pMVar7 = (Model*)local_40.operator->();
                uVar2 = pMVar7->GetBatchCount();
                local_70.reserve((unsigned long)uVar2 * 2);
                local_50 = &result;
                pMVar7 = (Model*)local_40.operator->();
                this_02 = (Layout*)pMVar7->GetBatchList();
                this_03 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                                      MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                              this_02->HeapBeginPtr();
                puVar8 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                                     MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                             this_02->end();
                if (this_03 != puVar8) {
                    do {
                        geometryBatchInstance = (GeometryBatchInstance*)**this_03;
                        pMVar7 = (Model*)*local_40;
                        matrix44 = &local_70;
                        SeparateBatchByLabelTransparency(*geometryBatchInstance, *pMVar7, local_70);
                        this_03 = this_03 + 8;
                    } while (this_03 != puVar8);
                }
                pMVar7 = (Model*)**&local_40;
                pRVar9 = resolvedModel2;
                &result = local_50;
                ReplaceModelBatches(&local_40, pMVar7, &local_70);
                psVar5 = (shared_ptr<PoseStateRSeven>*)pRVar9->GetAnimationState();
                local_b8 = pRVar9->GetLocalTransform();
                new (&result) ResolvedModel(local_40, *psVar5, matrix44);
            } else {
                this_01 = operationRecordEntry->GetOutputModel();
                psVar4 = (shared_ptr<jag::graphics::Model>*)this_01->GetModel();
                psVar5 = (shared_ptr<PoseStateRSeven>*)resolvedModel2.GetAnimationState();
                local_f8 = resolvedModel2.GetLocalTransform();
                new (&result) ResolvedModel(*psVar4, *psVar5, pRVar9);
            }
        }
        return result;
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x10036c0e0
    shared_ptr_if_not_array<oldscape::dash3d::ChainedPoseStateRSeven>::type
    make_shared<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven> const&,
                shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>>(
        const shared_ptr<oldscape::dash3d::PoseStateRSeven>& poseStateRSeven,
        shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>&& transformedPoseStateRSeven) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        ChainedPoseStateRSeven* local_38[2];

        auto arg1 = aligned_alloc(80, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::ChainedPoseStateRSeven>::type result;
        } else {
            local_38[0] = placement_new<oldscape::dash3d::ChainedPoseStateRSeven,
                                        shared_ptr<oldscape::dash3d::PoseStateRSeven> const&,
                                        shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>>(
                (void*)((long)arg1 + 32), poseStateRSeven, transformedPoseStateRSeven);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>, int,
                              oldscape::dash3d::ChainedPoseStateRSeven*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x10036c190
    shared_ptr_if_not_array<oldscape::dash3d::TransformedPoseStateRSeven>::type
    make_shared<oldscape::dash3d::TransformedPoseStateRSeven, math::Matrix43T<float>>(
        math::Matrix43T<float>&& matrix43) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        TransformedPoseStateRSeven* local_30[2];

        auto arg1 = aligned_alloc(80, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::TransformedPoseStateRSeven>::type result;
        } else {
            local_30[0] = placement_new<oldscape::dash3d::TransformedPoseStateRSeven, math::Matrix43T<float>>(
                (void*)((long)arg1 + 16), matrix43);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::dash3d::TransformedPoseStateRSeven>, int,
                              oldscape::dash3d::TransformedPoseStateRSeven*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10036c2b0
    shared_ptr_if_not_array<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>::type
    make_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven,
                shared_ptr<oldscape::dash3d::PoseStateRSeven> const&, unsigned short const&, unsigned short const&,
                unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&>(
        const shared_ptr<oldscape::dash3d::PoseStateRSeven>& poseStateRSeven, const unsigned short& arg2,
        const unsigned short& arg3, const unsigned short& arg4, const unsigned short& arg5, const unsigned short& arg6,
        const unsigned short& arg7) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        unsigned short* in_stack_00000010;
        int local_44;
        ShiftedLabelRangePoseStateRSeven* local_40[2];

        auto arg1 = aligned_alloc(80, 8);
        if (arg1 == nullptr) {
            new (poseStateRSeven) shared_ptr();
        } else {
            local_40[0] = placement_new<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven,
                                        shared_ptr<oldscape::dash3d::PoseStateRSeven> const&, unsigned short const&,
                                        unsigned short const&, unsigned short const&, unsigned short const&,
                                        unsigned short const&, unsigned short const&>(
                (void*)((long)arg1 + 32), (shared_ptr<oldscape::dash3d::PoseStateRSeven>*)arg2, arg3, arg4, arg5, arg6,
                arg7, in_stack_00000010);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>, int,
                              oldscape::dash3d::ShiftedLabelRangePoseStateRSeven*&>(arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (poseStateRSeven) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return poseStateRSeven;
    }

    // 0x10036c380
    shared_ptr_if_not_array<oldscape::dash3d::ChainedPoseStateRSeven>::type
    make_shared<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven>&,
                shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(
        shared_ptr<oldscape::dash3d::PoseStateRSeven>& poseStateRSeven1,
        shared_ptr<oldscape::dash3d::PoseStateRSeven>& poseStateRSeven2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        ChainedPoseStateRSeven* local_38[2];

        auto arg1 = aligned_alloc(80, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::ChainedPoseStateRSeven>::type result;
        } else {
            local_38[0] = placement_new<oldscape::dash3d::ChainedPoseStateRSeven,
                                        shared_ptr<oldscape::dash3d::PoseStateRSeven> const&,
                                        shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(
                (void*)((long)arg1 + 32), poseStateRSeven1, poseStateRSeven2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>, int,
                              oldscape::dash3d::ChainedPoseStateRSeven*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x10036c590
    shared_ptr_if_not_array<oldscape::dash3d::MaskedDashPoseStateRSeven>::type
    make_shared<oldscape::dash3d::MaskedDashPoseStateRSeven, shared_ptr<oldscape::dash3d::AnimFrameSet> const&,
                int const&, oldscape::dash3d::ResolvedModel const&, Array<int>&, bool const&>(
        const shared_ptr<oldscape::dash3d::AnimFrameSet>& animFrameSet, const int& arg2,
        const oldscape::dash3d::ResolvedModel& resolvedModel, Array<int>& arg4, const bool& arg5) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        MaskedDashPoseStateRSeven* local_40[2];

        auto arg1 = aligned_alloc(240, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::MaskedDashPoseStateRSeven>::type result;
        } else {
            local_40[0] = placement_new<oldscape::dash3d::MaskedDashPoseStateRSeven,
                                        shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int const&,
                                        oldscape::dash3d::ResolvedModel const&, Array<int>&, bool const&>(
                (void*)((long)arg1 + 32), animFrameSet, arg2, resolvedModel, arg4, arg5);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven>, int,
                              oldscape::dash3d::MaskedDashPoseStateRSeven*&>(arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x10036c650
    shared_ptr_if_not_array<oldscape::dash3d::DashPoseStateRSeven>::type
    make_shared<oldscape::dash3d::DashPoseStateRSeven, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int const&,
                oldscape::dash3d::ResolvedModel const&>(const shared_ptr<oldscape::dash3d::AnimFrameSet>& animFrameSet,
                                                        const int& arg2,
                                                        const oldscape::dash3d::ResolvedModel& resolvedModel) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        DashPoseStateRSeven* local_40[2];

        auto arg1 = aligned_alloc(208, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::DashPoseStateRSeven>::type result;
        } else {
            local_40[0] =
                placement_new<oldscape::dash3d::DashPoseStateRSeven, shared_ptr<oldscape::dash3d::AnimFrameSet> const&,
                              int const&, oldscape::dash3d::ResolvedModel const&>((void*)((long)arg1 + 32),
                                                                                  animFrameSet, arg2, resolvedModel);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven>, int,
                              oldscape::dash3d::DashPoseStateRSeven*&>(arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x10036cb20
    shared_ptr_if_not_array<oldscape::dash3d::ChainedPoseStateRSeven>::type
    make_shared<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>,
                shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(
        shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>&& transformedPoseStateRSeven,
        shared_ptr<oldscape::dash3d::PoseStateRSeven>& poseStateRSeven) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        ChainedPoseStateRSeven* local_38[2];

        auto arg1 = aligned_alloc(80, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::ChainedPoseStateRSeven>::type result;
        } else {
            local_38[0] = placement_new<oldscape::dash3d::ChainedPoseStateRSeven,
                                        shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>,
                                        shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(
                (void*)((long)arg1 + 32), transformedPoseStateRSeven, poseStateRSeven);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>, int,
                              oldscape::dash3d::ChainedPoseStateRSeven*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::math {
    // 0x10036c230
    Matrix44T<float>::operator Matrix43T<float><float>() const {
        Vector4T<float>* in_RSI;
        uint64_t local_58[2];
        uint64_t local_48[2];
        uint64_t local_38[2];
        uint64_t local_28[2];

        local_58[0] = in_RSI->GetXYZ();
        local_48[0] = (in_RSI + 16)->GetXYZ();
        local_38[0] = (in_RSI + 32)->GetXYZ();
        local_28[0] = (in_RSI + 48)->GetXYZ();
        new (this) Matrix43T<float>(*local_58, *local_48, *local_38, *local_28);
        return this;
    }

} // namespace jag::math

namespace jag::oldscape {
    // 0x10036c430
    void OSRenderCore_RenderThread::GetRT7Core() {
        field_8.get();
    }

} // namespace jag::oldscape
