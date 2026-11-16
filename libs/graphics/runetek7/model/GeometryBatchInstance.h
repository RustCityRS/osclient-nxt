// libs/graphics/runetek7/model/GeometryBatchInstance.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::graphics {
    template <typename...> // 7 instantiations, e.g. <BillboardBatch_DE>, <GeometryBatch_DE>, <LightProbe_DE>
    class DrawableElementPool {
    public:
        // virtual methods in vtable order
        virtual void Release();
        GetDrawableElementPool();
        TerrainPatch_DE* Create<TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&,
                                math::OBB&, float&, render::InputAssemblerState*>(
            TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&, math::OBB&, float&,
            render::InputAssemblerState*&&);
        WaterPatch_DE*
        Create<WaterPatch&, math::OBB&, float&, render::InputAssemblerState*>(WaterPatch&, math::OBB&, float&,
                                                                              render::InputAssemblerState*&&);
        DrawableElementPool(math::OBB const&, unsigned int, float);
        ParticleSystem_DE* Create<shared_ptr<ParticleSystem>, math::OBB&, float&, unsigned int, bool>(
            shared_ptr<ParticleSystem>&&, math::OBB&, float&, unsigned int&&, bool&&);
        GeometryBatch_DE*
        Create<math::OBB&, float&,
               eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                 eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
               unsigned int, GeometryBatchInstance&>(
            math::OBB&, float&,
            eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
            unsigned int&&, GeometryBatchInstance&);
        GeometryBatch_DE*
        Create<math::OBB&, float&,
               eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                 eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
               unsigned int&, GeometryBatchInstance&>(
            math::OBB&, float&,
            eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
            unsigned int&, GeometryBatchInstance&);
        ParticleSystem_DE* Create<ModularParticleSystemDrawable&, math::OBB const&, float&, unsigned int, bool, bool>(
            ModularParticleSystemDrawable&, math::OBB const&, float&, unsigned int&&, bool&&, bool&&);
        BillboardBatch_DE*
        Create<float&,
               eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                 eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
               BillboardBatchInstance&>(
            float&,
            eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
            BillboardBatchInstance&);
        SkyBox_DE* Create<>();
        DrawableElementPool();
        LightProbe_DE* Create<>();
    };

    class GeometryBatchInstance : public ModelParticleSource // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual void Transform(math::Matrix44T<float> const&);
        virtual void Translate(math::Vector3T<float> const&);
        virtual void Rotate(math::QuaternionT<float> const&, bool);
        virtual void Rotate90(Rotation90, bool);
        virtual ~GeometryBatchInstance();
        virtual GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&);
        virtual void RenderDebug(RenderPassType, DrawableElement&) const;
        RenderMaterial GetMaterial();
        RenderMaterial GetMaterial() const;
        void GetGeometryBatch();
        void GetGeometryBatch() const;
        GetSourceModelExternalIndexList();
        GetVertexAnimation() const;
        void Reserve(GeometryBatchCombineHelper const&);
        void Append(GeometryBatchInstance const&, bool);
        GeometryBatchInstance(Model&, unsigned short);
        void SetInstanceDebugColour();
        GeometryBatchInstance(GeometryBatchInstance&&, Model&);
        void UpdateShadowRenderFlags();
        GeometryBatchInstance(GeometryBatchInstance const&, Model&, bool);
        GeometryBatchInstance(Model&, shared_ptr<GeometryBatch> const&);
        void SetDefaultLODs(EffectManager const&, RenderPassType, SceneViewData const&, float, math::OBB const&);
        void SetLodLevel(LodPassType, int);
        void IsTransformed() const;
        void SetTransformed(bool);
        void GetAABB() const;
        void SetAnimationStateProvider(shared_ptr<AnimationStateProvider> const&);
        void UpdateAnimation(ThreadPool&, unsigned int, math::Matrix44T<float> const&);
        void EndUpdateAnimation();
        LoadMeshFromModelRawRT7(PacketView&, unsigned int);
        void SetInitialSource(int, unsigned char, int);
        void ChangeSourceExternalID(int, int);
        void ChangeSourceExternalIDs(int);
        GetFirstMaterialIDFromSource() const;
        ulong GetFirstSequenceIDFromSource() const;
        void BuildMaterialIDListFromSource(eastl::fixed_vector<int, 128ul, true, eastl::allocator>&) const;
        void SetInitialMaterial(Material const&, bool);
        void BakeBatchFlags();
        void BakeTile(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char,
                      unsigned char);
        void
        BakeHSLColors(eastl::fixed_map<int, Material const*, 64ul, true, eastl::less<int>, eastl::allocator> const&);
        void BakeMaterialInfoAndTextureMeta(
            eastl::fixed_map<int, Material const*, 64ul, true, eastl::less<int>, eastl::allocator> const&,
            eastl::fixed_map<int, ModelTextureMeta, 64ul, true, eastl::less<int>, eastl::allocator> const&);
        void SortSections();
        int IsCombinableWith(GeometryBatchInstance const&, bool, bool, bool, TextureAtlas&);
        void Assign(GeometryBatchInstance const&);
        void DestroyRenderingResources();
        void TransformNormals(math::QuaternionT<float> const&, bool);
        void Scale(math::Vector3T<float> const&);
        void HillChange(graphics::HillChange, int, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&,
                        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&,
                        LocationHelpers::LocationHillChangeData const&);
        void Rematerial(Array<unsigned short, eastl::allocator> const&, Array<unsigned short, eastl::allocator> const&);
        void RematerialSingle(unsigned short, unsigned short);
        void AmbientAdjust(unsigned short);
        void TintAdjust(signed char, signed char, signed char, unsigned char);
        void SetTint(math::Vector4T<float>);
        void InitRenderPassEffects();
        GetTint() const;
        void UpdateForwardPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&,
                                     EffectManager const&, float, float, bool, TextureInclusionMode const*,
                                     math::OBB const&, unsigned char, RenderPassType);
        void GetAnimatesTransparency() const;
        GetAnimatedColourType() const;
        GetLodLevel(LodPassType) const;
        void UpdateGeometryPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&,
                                      EffectManager const&, float, float, bool, TextureInclusionMode const*,
                                      RenderPassType);
        void UpdateShadowPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&,
                                    EffectManager const&, float, float, bool, TextureInclusionMode const*);
        void UpdateMiniMapPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&,
                                     EffectManager const&, float, float, TextureInclusionMode const*);
        void UpdateObjectHighlightPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&,
                                             EffectManager const&, float, float, bool, TextureInclusionMode const*,
                                             DrawableGroupLayer);
        void CreateRenderingResources();
        void GatherDrawableElements(
            DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&,
            eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*,
            unsigned char);
        void IsHidden() const;
        void GetRenderingCameraDistances(float&, float&, float&, math::OBB&, bool, SceneViewData const&);
        ulong CastsShadow() const;
        void Prefetch() const;
        void SetPointLightIndicesVertexData(bool);
        void ClearAnimationState();
        GetApproxMaterialInfoList() const;
        static /* 4 bytes */ m_renderDepthEnabled;              // = 1
        static /* 4 bytes */ m_alphaTestThresholdOverrideValue; // = 127
        static /* 4 bytes */ m_debugLodInstanceColourPassType;
        static /* 1 bytes */ m_debugLodInstanceColourEnabled;
        static /* 1 bytes */ m_showWorldAABB;
        static /* 1 bytes */ m_showWorldOBB;
        static /* 1 bytes */ m_alphaTestThresholdOverride;

        // data members, from how the methods use this: 896 bytes, the first 84 are ModelParticleSource
        char _unknown_84[572];
        Model* field_656; // offset 656
        char _unknown_664[96];
        undefined8 field_760; // offset 760
        undefined4 field_768; // offset 768
        char _unknown_772[108];
        undefined8 field_880; // offset 880
        undefined8 field_888; // offset 888
    };

    // 0x10036bfd0, 16 bytes, inline, placed by class name and debug map
    // GeometryBatchInstance::GetGeometryBatch()
    /* GeometryBatchInstance::GetGeometryBatch() const */

    void GeometryBatchInstance::GetGeometryBatch() {
        shared_ptr<GeometryBatch>::operator*((shared_ptr<GeometryBatch>*)field_24);
    }

    // 0x10036db80, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GeometryBatchInstance::GetSourceModelExternalIndexList()
    /* game::ObjType::GetRecolourDest() const */

    undefined1* game::ObjType::GetRecolourDest() {
        return &field_696;
    }

    // 0x1007bb910, 240 bytes, inline, placed by class header (inline)
    // WaterPatch_DE* DrawableElementPool<WaterPatch_DE>::Create<WaterPatch&, math::OBB&, float&, render::InputAssemblerState*>(WaterPatch&, math::OBB&, float&, render::InputAssemblerState*&&)
    WaterPatch_DE*
    DrawableElementPool<WaterPatch_DE>::Create<WaterPatch&, math::OBB&, float&, render::InputAssemblerState*>(
        WaterPatch* param_1, OBB* param_2, float* param_3, InputAssemblerState** param_4) {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        Option<game::option::EnumBrightness>* this;
        WaterPatch_DE* this_00;
        undefined8 uVar4;

        this = (Option<game::option::EnumBrightness>*)GetDrawableElementPool();
        iVar1 = GetValue();
        iVar2 = capacity();
        if (iVar1 < iVar2) {
            this_00 =
                FastPool<WaterPatch_DE, int>::Create<WaterPatch&, math::OBB&, float&, render::InputAssemblerState*>(
                    (FastPool<WaterPatch_DE, int>*)this, param_1, param_2, param_3, param_4);
        } else {
            uVar4 = logger::default_logger();
            uVar3 = GetValue();
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/renderer/DrawableElement.h",
                                142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            this_00 = operator_new(192);
            WaterPatch_DE::WaterPatch_DE(this_00, param_1, param_2, *param_3, *param_4);
        }
        return this_00;
    }

    // 0x1007d3210, 256 bytes, inline, placed by class header (inline)
    // ParticleSystem_DE* DrawableElementPool<ParticleSystem_DE>::Create<shared_ptr<ParticleSystem>, math::OBB&, float&, unsigned int, bool>(shared_ptr<ParticleSystem>&&, math::OBB&, float&, unsigned int&&, bool&&)
    ParticleSystem_DE*
    DrawableElementPool<ParticleSystem_DE>::Create<shared_ptr<ParticleSystem>, math::OBB&, float&, unsigned int, bool>(
        shared_ptr* param_1, OBB* param_2, float* param_3, uint* param_4, bool* param_5) {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        ParticleSystem_DE* this;
        undefined8 uVar4;

        GetDrawableElementPool();
        iVar1 = (&GetDrawableElementPool()::pool)->GetValue();
        iVar2 = (&GetDrawableElementPool()::pool)->capacity();
        if (iVar1 < iVar2) {
            this = FastPool<ParticleSystem_DE, int>::Create<shared_ptr<ParticleSystem>, math::OBB&, float&,
                                                            unsigned int, bool>(
                (FastPool<ParticleSystem_DE, int>*)&GetDrawableElementPool()::pool, param_1, param_2, param_3, param_4,
                param_5);
        } else {
            uVar4 = logger::default_logger();
            uVar3 = (&GetDrawableElementPool()::pool)->GetValue();
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/particles/../renderer/DrawableElement.h",
                                142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            this = operator_new(144);
            ParticleSystem_DE::ParticleSystem_DE(this, param_1, param_2, *param_3, *param_4, *param_5);
        }
        return this;
    }

    // 0x1007dd520, 16 bytes, inline, placed by class name
    // GeometryBatchInstance::GetVertexAnimation() const
    undefined1* GeometryBatchInstance::GetVertexAnimation() {
        return &field_800;
    }

    // 0x10080de80, 112 bytes, inline, placed by class name
    // GeometryBatchInstance::SetLodLevel(LodPassType, int)
    void GeometryBatchInstance::SetLodLevel(int param_2, int param_3) {
        int iVar1;
        GeometryBatch* this_00;
        int* piVar2;
        int local_2c[3];

        local_2c[1] = 0;
        local_2c[0] = param_3;
        this_00 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        local_2c[2] = this_00->GetNumLods();
        local_2c[2] = local_2c[2] + -1;
        iVar1 = math::Clamp<int>(local_2c, local_2c + 1, local_2c + 2);
        piVar2 = (int*)std::array<unsigned int, 3ul>::operator[]((array<unsigned int, 3ul>*)&field_760, (long)param_2);
        *piVar2 = iVar1;
    }

    // 0x100811250, 32 bytes, inline, placed by class name
    // GeometryBatchInstance::GetAnimatesTransparency() const
    void GeometryBatchInstance::GetAnimatesTransparency() {
        (&field_800)->GetAnimatesTransparency();
    }

    // 0x100811270, 112 bytes, inline, placed by class name
    // GeometryBatchInstance::GetAnimatedColourType() const
    undefined1 GeometryBatchInstance::GetAnimatedColourType() {
        bool bVar1;
        undefined1 uVar3;
        shared_ptr* this_00;
        shared_ptr<AnimationStateProvider>* psVar4;
        long* plVar5;
        undefined1* this_01;

        this_01 = &field_800;
        this_00 = (shared_ptr*)GetMaterial((GeometryBatchInstance*)this_01);
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        uVar3 = 2;
        if (bVar1) {
            psVar4 = (shared_ptr<AnimationStateProvider>*)GetMaterial((GeometryBatchInstance*)this_01);
            plVar5 = (long*)shared_ptr<AnimationStateProvider>::operator->(psVar4);
            if ((**(code**)(*plVar5 + 56))(plVar5) != '\x02') {
                psVar4 = (shared_ptr<AnimationStateProvider>*)GetMaterial((GeometryBatchInstance*)this_01);
                plVar5 = (long*)shared_ptr<AnimationStateProvider>::operator->(psVar4);
                uVar3 = (**(code**)(*plVar5 + 56))(plVar5);
            }
        }
        return uVar3;
    }

    // 0x1008113c0, 32 bytes, inline, placed by class name
    // GeometryBatchInstance::GetLodLevel(LodPassType) const
    undefined4 GeometryBatchInstance::GetLodLevel(int param_2) {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<unsigned int, 3ul>::operator[]((array<unsigned int, 3ul>*)&field_760,
                                                                        (long)param_2);
        return *puVar1;
    }

    // 0x1008134a0, 32 bytes, inline, placed by class name
    // GeometryBatchInstance::IsHidden() const
    void GeometryBatchInstance::IsHidden() {
        (m_material, 10)->GetOption();
    }

    // 0x100813620, 256 bytes, inline, placed by class header (inline)
    // GeometryBatch_DE* DrawableElementPool<GeometryBatch_DE>::Create<math::OBB&, float&, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*&, unsigned int, GeometryBatchInstance&>(math::OBB&, float&, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*&, unsigned int&&, GeometryBatchInstance&)
    GeometryBatch_DE* DrawableElementPool<GeometryBatch_DE>::Create<
        math::OBB&, float&,
        eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
        unsigned int, GeometryBatchInstance&>(OBB* param_1, float* param_2, vector_map** param_3, uint* param_4,
                                              GeometryBatchInstance* param_5) {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        GeometryBatch_DE* this;
        undefined8 uVar4;

        GetDrawableElementPool();
        iVar1 = (&GetDrawableElementPool()::pool)->GetValue();
        iVar2 = (&GetDrawableElementPool()::pool)->capacity();
        if (iVar1 < iVar2) {
            this = FastPool<GeometryBatch_DE, int>::Create<
                math::OBB&, float&,
                eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                  eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
                unsigned int&, GeometryBatchInstance&>(
                (FastPool<GeometryBatch_DE, int>*)&GetDrawableElementPool()::pool, param_1, param_2, param_3, param_4,
                param_5);
        } else {
            uVar4 = logger::default_logger();
            uVar3 = (&GetDrawableElementPool()::pool)->GetValue();
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/renderer/DrawableElement.h",
                                142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            this = operator_new(160);
            GeometryBatch_DE::GeometryBatch_DE(this, param_1, *param_2, *param_3, *param_4, param_5);
        }
        return this;
    }

    // 0x100813790, 256 bytes, inline, placed by class header (inline)
    // GeometryBatch_DE* DrawableElementPool<GeometryBatch_DE>::Create<math::OBB&, float&, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*&, unsigned int&, GeometryBatchInstance&>(math::OBB&, float&, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*&, unsigned int&, GeometryBatchInstance&)
    GeometryBatch_DE* DrawableElementPool<GeometryBatch_DE>::Create<
        math::OBB&, float&,
        eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
        unsigned int&, GeometryBatchInstance&>(OBB* param_1, float* param_2, vector_map** param_3, uint* param_4,
                                               GeometryBatchInstance* param_5) {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        GeometryBatch_DE* this;
        undefined8 uVar4;

        GetDrawableElementPool();
        iVar1 = (&GetDrawableElementPool()::pool)->GetValue();
        iVar2 = (&GetDrawableElementPool()::pool)->capacity();
        if (iVar1 < iVar2) {
            this = FastPool<GeometryBatch_DE, int>::Create<
                math::OBB&, float&,
                eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                  eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
                unsigned int&, GeometryBatchInstance&>(
                (FastPool<GeometryBatch_DE, int>*)&GetDrawableElementPool()::pool, param_1, param_2, param_3, param_4,
                param_5);
        } else {
            uVar4 = logger::default_logger();
            uVar3 = (&GetDrawableElementPool()::pool)->GetValue();
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/renderer/DrawableElement.h",
                                142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            this = operator_new(160);
            GeometryBatch_DE::GeometryBatch_DE(this, param_1, *param_2, *param_3, *param_4, param_5);
        }
        return this;
    }

    // 0x100813980, 64 bytes, inline, placed by class name
    // GeometryBatchInstance::CastsShadow() const
    ulong GeometryBatchInstance::CastsShadow() {
        ulong uVar2;

        if ((m_material, 7)->GetOption() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = (&field_8)->GetPos();
            uVar2 = uVar2 & 18446744073709551361;
        }
        return uVar2;
    }

    // 0x1008185e0, 32 bytes, inline, placed by class name
    // GeometryBatchInstance::SetPointLightIndicesVertexData(bool)
    void GeometryBatchInstance::SetPointLightIndicesVertexData(bool param_1) {
        (m_material, 11, param_1)->SetOption();
    }

    // 0x1008188d0, 32 bytes, inline, placed by class name
    // GeometryBatchInstance::ClearAnimationState()
    void GeometryBatchInstance::ClearAnimationState() {
        (&field_800)->ClearAnimationStateProvider();
    }

    // 0x10081bcb0, 16 bytes, inline, placed by class name
    // GeometryBatchInstance::GetApproxMaterialInfoList() const
    undefined1* GeometryBatchInstance::GetApproxMaterialInfoList() {
        return &field_664;
    }

    // 0x10092fa10, 224 bytes, inline, placed by class header (inline)
    // LightProbe_DE* DrawableElementPool<LightProbe_DE>::Create<>()
    LightProbe_DE* DrawableElementPool<LightProbe_DE>::Create<>() {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        LightProbe_DE* this_00;
        undefined8 uVar4;

        GetDrawableElementPool();
        iVar1 = (&GetDrawableElementPool()::pool)->GetValue();
        iVar2 = (&GetDrawableElementPool()::pool)->capacity();
        if (iVar1 < iVar2) {
            this_00 =
                FastPool<LightProbe_DE, int>::Create<>((FastPool<LightProbe_DE, int>*)&GetDrawableElementPool()::pool);
        } else {
            uVar4 = logger::default_logger();
            uVar3 = (&GetDrawableElementPool()::pool)->GetValue();
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/renderer/DrawableElement.h",
                                142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            this_00 = operator_new(112);
            this_00->field_0 = (undefined*)0;
            *(undefined8*)&this_00->field_8 = 0;
            *(undefined8*)&this_00->field_16 = 0;
            *(undefined8*)&this_00->field_24 = 0;
            *(undefined8*)&this_00->field_32 = 0;
            *(undefined8*)&this_00->field_40 = 0;
            *(undefined8*)&this_00->field_48 = 0;
            *(undefined8*)&this_00->field_56 = 0;
            *(undefined8*)&this_00->field_64 = 0;
            *(undefined8*)&this_00->field_72 = 0;
            *(undefined8*)&this_00->field_80 = 0;
            *(undefined8*)&this_00->field_88 = 0;
            *(undefined8*)&this_00->field_96 = 0;
            this_00->field_104 = (PointLightShadows*)0;
            LightProbe_DE::LightProbe_DE(this_00);
        }
        return this_00;
    }

} // namespace jag::graphics

namespace jag::oldscape::dash3d {
    // 0x10036bff0, 96 bytes, placed by debug map only (low confidence)
    // CombineOperation::UpdateLabelOffset(jag::graphics::Model const&, unsigned short&, std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const* (jag::graphics::GeometryBatch const&)>) const
    /* CombineOperation::UpdateLabelOffset(jag::graphics::Model const&, unsigned
   short&, std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned
   short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>,
   eastl::allocator> > const* (jag::graphics::GeometryBatch const&)>) const */

    void CombineOperation::UpdateLabelOffset(undefined8 param_1_00, Model* param_1, ushort* param_2,
                                             undefined8 param_4) {
        Layout* this;
        undefined8 uVar1;
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_00;
        undefined8 uVar2;
        ushort uVar3;

        this = (Layout*)param_1->GetBatchList();
        uVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::Layout::HeapBeginPtr(this);
        this_00 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)param_1->GetBatchList();
        uVar2 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        uVar3 = eastl::accumulate<
            std::unique_ptr<jag::graphics::GeometryBatchInstance,
                            MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> const*,
            unsigned short,
            (jag::graphics::Model_const&)
                ->UpdateLabelOffset(unsigned short&,
                                    std::function<eastl::vector_map<
                                        unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                      eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>)
                    const ::__9>(uVar1, uVar2, *param_2, param_4);
        *param_2 = uVar3;
    }

    // 0x10036c440, 32 bytes, placed by debug map only (low confidence)
    // AnimateOperation::GetNextPose(ResolvedModel const&, OperationRecordEntry const*) const
    AnimateOperation* AnimateOperation::GetNextPose(ResolvedModel* param_1, OperationRecordEntry* param_2) {
        new (this) shared_ptr<Decor>((shared_ptr*)&param_1->field_64);
        return this;
    }

    // 0x10036c460, 80 bytes, placed by debug map only (low confidence)
    // AnimateOperation::IsEqual(Operation const&) const
    undefined8 AnimateOperation::IsEqual(Operation* param_1) {
        PoseStateRSeven* pPVar2;
        PoseStateRSeven* pPVar3;
        undefined8 uVar4;

        if (param_1->GetPos() == 0) {
            pPVar2 = (PoseStateRSeven*)shared_ptr<PoseStateRSeven>::operator*((shared_ptr<PoseStateRSeven>*)field_64);
            pPVar3 =
                (PoseStateRSeven*)shared_ptr<PoseStateRSeven>::operator*((shared_ptr<PoseStateRSeven>*)(param_1 + 4));
            uVar4 = dash3d::operator==(pPVar2, pPVar3);
        } else {
            uVar4 = 0;
        }
        return uVar4;
    }

    // 0x10036c4b0, 224 bytes, placed by debug map only (low confidence)
    // DashAnimateOperation::GetNextPose(ResolvedModel const&, OperationRecordEntry const*) const
    DashAnimateOperation* DashAnimateOperation::GetNextPose(ResolvedModel* param_1, OperationRecordEntry* param_2) {
        Array* pAVar2;
        shared_ptr local_40;

        if ((&param_1->field_88)->operator_cast_to_bool()) {
            pAVar2 = (Array*)shared_ptr<Array<int, eastl::allocator>>::operator*(
                (shared_ptr<Array<int, eastl::allocator>>*)&param_1->field_88);
            make_shared<MaskedDashPoseStateRSeven, shared_ptr<AnimFrameSet> const&, int const&, ResolvedModel_const&,
                        Array<int, eastl::allocator>&, bool const&>((jag*)&local_40, (shared_ptr*)&param_1->field_64,
                                                                    (int*)&param_1->field_80, (ResolvedModel*)param_2,
                                                                    pAVar2, (bool*)&param_1->field_104);
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            local_40.~shared_ptr();
        } else {
            make_shared<DashPoseStateRSeven, shared_ptr<AnimFrameSet> const&, int const&, ResolvedModel_const&>(
                (jag*)&local_40, (shared_ptr*)&param_1->field_64, (int*)&param_1->field_80, (ResolvedModel*)param_2);
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            local_40.~shared_ptr();
        }
        return this;
    }

    // 0x10036c700, 64 bytes, placed by debug map only (low confidence)
    // DashAnimateOperation::IsEqual(Operation const&) const
    undefined4 DashAnimateOperation::IsEqual(Operation* param_1) {
        bool bVar1;
        shared_ptr* extraout_RDX;

        if ((param_1->GetPos() == 2) &&
            (bVar1 = operator==((jag*)&field_64, (shared_ptr*)(param_1 + 4), extraout_RDX), bVar1)) {
            return CONCAT31((int3)((uint)field_80 >> 8), field_80 == *(int*)&param_1[5].field_0);
        }
        return 0;
    }

    // 0x10036c740, 704 bytes, placed by debug map only (low confidence)
    // AnimateBaseOperation::Apply(ResolvedModel const&, OperationRecordEntry const*) const
    AnimateBaseOperation* AnimateBaseOperation::Apply(ResolvedModel* param_1, OperationRecordEntry* param_2) {
        undefined* puVar1;
        bool bVar3;
        shared_ptr* this_00;
        Model* pMVar4;
        PoseStateRSeven* pPVar5;
        shared_ptr* this_01;
        undefined1 local_158[112];
        shared_ptr local_60;
        shared_ptr local_50;
        shared_ptr local_40;

        (**(code**)(param_1->field_0 + 40))(&local_60);
        this_00 = (shared_ptr*)param_2->GetModel();
        pMVar4 = (Model*)shared_ptr<jag::graphics::Model>::operator*((shared_ptr<jag::graphics::Model>*)this_00);
        pPVar5 = (PoseStateRSeven*)shared_ptr<PoseStateRSeven>::operator*((shared_ptr<PoseStateRSeven>*)&local_60);
        LoadTransparencyAffectedLabels((AnimateBaseOperation*)param_1, pMVar4, pPVar5);
        local_158->GetLocalTransform();
        puVar1 = PTR_IDENTITY_100ee6730;
        bVar3 = jag::math::operator!=((Matrix44T*)local_158, (Matrix44T*)PTR_IDENTITY_100ee6730);
        if (bVar3) {
            local_158->GetLocalTransform();
            ((local_158 + 112))->operator_cast_to_Matrix43T();
            make_shared<TransformedPoseStateRSeven, jag::math::Matrix43T<float>>((jag*)&local_40,
                                                                                 (Matrix43T*)(local_158 + 112));
            make_shared<ChainedPoseStateRSeven, shared_ptr<TransformedPoseStateRSeven>, shared_ptr<PoseStateRSeven>&>(
                (jag*)&local_50, &local_40, &local_60);
            shared_ptr<PoseStateRSeven>::operator=((shared_ptr<PoseStateRSeven>*)&local_60, &local_50);
            local_50.~shared_ptr();
            local_40.~shared_ptr();
        }
        new (local_158) ResolvedModel();
        this_01 = (shared_ptr*)param_2->GetAnimationState();
        bVar3 = shared_ptr::operator_cast_to_bool(this_01);
        if (bVar3) {
            make_shared<ChainedPoseStateRSeven, shared_ptr<PoseStateRSeven> const&, shared_ptr<PoseStateRSeven>&>(
                (jag*)&local_40, this_01, &local_60);
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)&local_50, &local_40);
            new ((local_158 + 112)) ResolvedModel(this_00, &local_50, *(Matrix44T*)puVar1);
            ResolvedModel::operator=((ResolvedModel*)local_158, (ResolvedModel*)(local_158 + 112));
            ((local_158 + 112))->~ResolvedModel();
            local_50.~shared_ptr();
            local_40.~shared_ptr();
        } else {
            new ((local_158 + 112)) ResolvedModel(this_00, &local_60, *(Matrix44T*)puVar1);
            ResolvedModel::operator=((ResolvedModel*)local_158, (ResolvedModel*)(local_158 + 112));
            ((local_158 + 112))->~ResolvedModel();
        }
        SeparateFacesByLabelTransparency((AnimateBaseOperation*)this, param_1, (ResolvedModel*)param_2,
                                         (OperationRecordEntry*)local_158);
        local_158->~ResolvedModel();
        local_60.~shared_ptr();
        return (AnimateBaseOperation*)this;
    }

    // 0x10036ca00, 288 bytes, placed by debug map only (low confidence)
    // AnimateBaseOperation::LoadTransparencyAffectedLabels(jag::graphics::Model const&, PoseStateRSeven const&) const
    void AnimateBaseOperation::LoadTransparencyAffectedLabels(Model* param_1, PoseStateRSeven* param_2) {
        bool bVar1;
        Layout* pLVar2;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        GeometryBatchInstance* pGVar3;
        ushort* puVar4;
        ushort* puVar5;
        vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<unsigned short, eastl::allocator>>* this_01;
        undefined1* this_02;
        float fVar6;
        vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<unsigned short, eastl::allocator>>
            local_60[40];
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_38;

        this_02 = &field_16;
        bVar1 = this_02->Ready();
        if (!bVar1) {
            eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<unsigned short, eastl::allocator>>::vector_set(local_60);
            eastl::optional<eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                              eastl::vector<unsigned short, eastl::allocator>>>::
            operator=((optional<eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                                  eastl::vector<unsigned short, eastl::allocator>>>*)this_02,
                      (vector_set*)local_60);
            eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<unsigned short, eastl::allocator>>::~vector_set(local_60);
            pLVar2 = (Layout*)param_1->GetBatchList();
            this_00 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                                  MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar2);
            local_38 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                           pLVar2->end();
            if (this_00 != local_38) {
                do {
                    pGVar3 = (GeometryBatchInstance*)
                                 std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                                 MakeUniquePool<jag::graphics::GeometryBatchInstance,
                                                                3072>::UniquePoolDeleter>::operator->(this_00);
                    pGVar3 = (GeometryBatchInstance*)pGVar3->GetGeometryBatch();
                    pLVar2 = (Layout*)pGVar3->GetMaterial();
                    puVar4 = (ushort*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(pLVar2);
                    puVar5 = (ushort*)pLVar2->end();
                    for (; puVar4 != puVar5; puVar4 = puVar4 + 2) {
                        fVar6 = (float)(*(code*)param_2->field_0[2])(param_2, *puVar4);
                        if (fVar6 < 0.0) {
                            this_01 =
                                (vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                            eastl::vector<unsigned short, eastl::allocator>>*)
                                    eastl::optional<
                                        eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                                          eastl::vector<unsigned short, eastl::allocator>>>::
                                    operator->((optional<eastl::vector_set<
                                                    unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                                    eastl::vector<unsigned short, eastl::allocator>>>*)this_02);
                            eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                              eastl::vector<unsigned short, eastl::allocator>>::insert(this_01, puVar4);
                        }
                    }
                    this_00 = this_00 + 8;
                } while (this_00 != local_38);
            }
        }
    }

    // 0x10036cbd0, 592 bytes, placed by debug map only (low confidence)
    // AnimateBaseOperation::SeparateFacesByLabelTransparency(ResolvedModel const&, ResolvedModel const&, OperationRecordEntry const*) const
    ResolvedModel* AnimateBaseOperation::SeparateFacesByLabelTransparency(ResolvedModel* param_1,
                                                                          ResolvedModel* param_2,
                                                                          OperationRecordEntry* param_3) {
        Matrix44T MVar1;
        Matrix44T MVar2;
        OperationRecordEntry* this_00;
        char cVar3;
        uint uVar4;
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* this_01;
        long lVar5;
        ResolvedModel* this_02;
        shared_ptr* psVar6;
        shared_ptr* psVar7;
        shared_ptr<jag::graphics::Model>* this_03;
        undefined8 uVar8;
        Model* pMVar9;
        Layout* this_04;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_05;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar10;
        GeometryBatchInstance* pGVar11;
        AnimateBaseOperation* this_06;
        OperationRecordEntry* in_R8;
        undefined1 local_f8[72];
        undefined8 uStack_b0;
        undefined8 local_a8;
        undefined8 uStack_a0;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 local_88;
        BatchDestroy<eastl::vector<
            std::unique_ptr<jag::graphics::GeometryBatchInstance,
                            MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
            eastl::allocator>>
            local_70[32];
        ResolvedModel* local_50;
        OperationRecordEntry* local_48;
        Operation local_40;

        this_01 =
            (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)
                eastl::optional<eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                                  eastl::vector<unsigned short, eastl::allocator>>>::
                operator->(
                    (optional<eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                                eastl::vector<unsigned short, eastl::allocator>>>*)&param_1->field_16);
        lVar5 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(this_01);
        if (lVar5 == 0) {
            new (this) ResolvedModel(param_3);
        } else {
            cVar3 = CanReusePreviousTransparencyBatching((AnimateBaseOperation*)param_1, param_2, in_R8);
            if (cVar3 == '\0') {
                this_03 = (shared_ptr<jag::graphics::Model>*)param_3->GetModel();
                uVar8 = shared_ptr<jag::graphics::Model>::operator*(this_03);
                local_40.CloneModel(param_1, uVar8, 2);
                graphicutils::BatchDestroy<eastl::vector<
                    std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                    MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                    eastl::allocator>>::BatchDestroy<>(local_70);
                pMVar9 =
                    (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)&local_40);
                uVar4 = pMVar9->GetBatchCount();
                local_70->reserve((ulong)uVar4 * 2);
                local_50 = (ResolvedModel*)this;
                local_48 = param_3;
                pMVar9 =
                    (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)&local_40);
                this_04 = (Layout*)pMVar9->GetBatchList();
                this_05 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                                      MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_04);
                puVar10 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                                      MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                              this_04->end();
                if (this_05 != puVar10) {
                    do {
                        pGVar11 = (GeometryBatchInstance*)
                            std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                            MakeUniquePool<jag::graphics::GeometryBatchInstance,
                                                           3072>::UniquePoolDeleter>::operator*(this_05);
                        pMVar9 = (Model*)shared_ptr<jag::graphics::Model>::operator*(
                            (shared_ptr<jag::graphics::Model>*)&local_40);
                        SeparateBatchByLabelTransparency((AnimateBaseOperation*)param_1, pGVar11, pMVar9,
                                                         (vector*)local_70);
                        this_05 = this_05 + 8;
                    } while (this_05 != puVar10);
                }
                this_06 = (AnimateBaseOperation*)&local_40;
                pMVar9 =
                    (Model*)shared_ptr<jag::graphics::Model>::operator*((shared_ptr<jag::graphics::Model>*)this_06);
                this_00 = local_48;
                this = (AnimateBaseOperation*)local_50;
                ReplaceModelBatches(this_06, pMVar9, (vector*)local_70);
                psVar6 = (shared_ptr*)this_00->GetAnimationState();
                ((local_f8 + 64))->GetLocalTransform();
                MVar2._8_8_ = uStack_b0;
                MVar2._0_8_ = local_f8._64_8_;
                MVar2._16_8_ = local_a8;
                MVar2._24_8_ = uStack_a0;
                MVar2._32_8_ = local_98;
                MVar2._40_8_ = uStack_90;
                MVar2._48_8_ = local_88;
                new (this) ResolvedModel((shared_ptr*)&local_40, psVar6, MVar2);
                local_70->~BatchDestroy();
                local_40.~shared_ptr();
            } else {
                this_02 = (ResolvedModel*)in_R8->GetOutputModel();
                psVar6 = (shared_ptr*)this_02->GetModel();
                psVar7 = (shared_ptr*)param_3->GetAnimationState();
                local_f8->GetLocalTransform();
                MVar1._8_8_ = local_f8._8_8_;
                MVar1._0_8_ = local_f8._0_8_;
                MVar1._16_8_ = local_f8._16_8_;
                MVar1._24_8_ = local_f8._24_8_;
                MVar1._32_8_ = local_f8._32_8_;
                MVar1._40_8_ = local_f8._40_8_;
                MVar1._48_8_ = local_f8._48_8_;
                new (this) ResolvedModel(psVar6, psVar7, MVar1);
            }
        }
        return (ResolvedModel*)this;
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x10036c0e0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ChainedPoseStateRSeven>::type make_shared<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven> const&, shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven> >(shared_ptr<oldscape::dash3d::PoseStateRSeven> const&, shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>&&)
    jag*
    jag::make_shared<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven> const&,
                     shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>>(shared_ptr* param_1,
                                                                               shared_ptr* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        ChainedPoseStateRSeven* local_38[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::dash3d::ChainedPoseStateRSeven,
                                        shared_ptr<oldscape::dash3d::PoseStateRSeven> const&,
                                        shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>, int,
                                   oldscape::dash3d::ChainedPoseStateRSeven*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x10036c190, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::TransformedPoseStateRSeven>::type make_shared<oldscape::dash3d::TransformedPoseStateRSeven, math::Matrix43T<float> >(math::Matrix43T<float>&&)
    jag* make_shared<oldscape::dash3d::TransformedPoseStateRSeven, math::Matrix43T<float>>(Matrix43T* param_1) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_34;
        TransformedPoseStateRSeven* local_30[2];

        pvVar1 = (void*)aligned_alloc(80, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<oldscape::dash3d::TransformedPoseStateRSeven, math::Matrix43T<float>>(
                (void*)((long)pvVar1 + 16), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::dash3d::TransformedPoseStateRSeven>, int,
                                   oldscape::dash3d::TransformedPoseStateRSeven*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10036c2b0, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>::type make_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven> const&, unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&>(shared_ptr<oldscape::dash3d::PoseStateRSeven> const&, unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&)
    jag*
    jag::make_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven,
                     shared_ptr<oldscape::dash3d::PoseStateRSeven> const&, unsigned short const&, unsigned short const&,
                     unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&>(
        shared_ptr* param_1, ushort* param_2, ushort* param_3, ushort* param_4, ushort* param_5, ushort* param_6,
        ushort* param_7) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ShiftedLabelRangePoseStateRSeven* local_40[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven,
                                        shared_ptr<oldscape::dash3d::PoseStateRSeven> const&, unsigned short const&,
                                        unsigned short const&, unsigned short const&, unsigned short const&,
                                        unsigned short const&, unsigned short const&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6, param_7);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::ShiftedLabelRangePoseStateRSeven>, int,
                                   oldscape::dash3d::ShiftedLabelRangePoseStateRSeven*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x10036c380, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ChainedPoseStateRSeven>::type make_shared<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven>&, shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(shared_ptr<oldscape::dash3d::PoseStateRSeven>&, shared_ptr<oldscape::dash3d::PoseStateRSeven>&)
    /* shared_ptr_if_not_array<oldscape::dash3d::ChainedPoseStateRSeven>::type
   make_shared<oldscape::dash3d::ChainedPoseStateRSeven,
   shared_ptr<oldscape::dash3d::PoseStateRSeven> const&,
   shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(shared_ptr<oldscape::dash3d::PoseStateRSeven>
   const&, shared_ptr<oldscape::dash3d::PoseStateRSeven>&) */

    jag*
    jag::make_shared<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::PoseStateRSeven> const&,
                     shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(shared_ptr* param_1, shared_ptr* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        ChainedPoseStateRSeven* local_38[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::dash3d::ChainedPoseStateRSeven,
                                        shared_ptr<oldscape::dash3d::PoseStateRSeven> const&,
                                        shared_ptr<oldscape::dash3d::PoseStateRSeven>&>((void*)((long)pvVar1 + 32),
                                                                                        param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>, int,
                                   oldscape::dash3d::ChainedPoseStateRSeven*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x10036c590, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::MaskedDashPoseStateRSeven>::type make_shared<oldscape::dash3d::MaskedDashPoseStateRSeven, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int const&, oldscape::dash3d::ResolvedModel const&, Array<int, eastl::allocator>&, bool const&>(shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int const&, oldscape::dash3d::ResolvedModel const&, Array<int, eastl::allocator>&, bool const&)
    jag*
    jag::make_shared<oldscape::dash3d::MaskedDashPoseStateRSeven, shared_ptr<oldscape::dash3d::AnimFrameSet> const&,
                     int const&, oldscape::dash3d::ResolvedModel_const&, Array<int, eastl::allocator>&, bool const&>(
        shared_ptr* param_1, int* param_2, ResolvedModel* param_3, Array* param_4, bool* param_5) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        MaskedDashPoseStateRSeven* local_40[2];

        pvVar1 = (void*)aligned_alloc(240, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] =
                placement_new<oldscape::dash3d::MaskedDashPoseStateRSeven,
                              shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int const&,
                              oldscape::dash3d::ResolvedModel_const&, Array<int, eastl::allocator>&, bool const&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::MaskedDashPoseStateRSeven>, int,
                                   oldscape::dash3d::MaskedDashPoseStateRSeven*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x10036c650, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::DashPoseStateRSeven>::type make_shared<oldscape::dash3d::DashPoseStateRSeven, shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int const&, oldscape::dash3d::ResolvedModel const&>(shared_ptr<oldscape::dash3d::AnimFrameSet> const&, int const&, oldscape::dash3d::ResolvedModel const&)
    jag* jag::make_shared<oldscape::dash3d::DashPoseStateRSeven, shared_ptr<oldscape::dash3d::AnimFrameSet> const&,
                          int const&, oldscape::dash3d::ResolvedModel_const&>(shared_ptr* param_1, int* param_2,
                                                                              ResolvedModel* param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        DashPoseStateRSeven* local_40[2];

        pvVar1 = (void*)aligned_alloc(208, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] =
                placement_new<oldscape::dash3d::DashPoseStateRSeven, shared_ptr<oldscape::dash3d::AnimFrameSet> const&,
                              int const&, oldscape::dash3d::ResolvedModel_const&>((void*)((long)pvVar1 + 32), param_1,
                                                                                  param_2, param_3);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::DashPoseStateRSeven>, int,
                                   oldscape::dash3d::DashPoseStateRSeven*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x10036cb20, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ChainedPoseStateRSeven>::type make_shared<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>, shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>&&, shared_ptr<oldscape::dash3d::PoseStateRSeven>&)
    jag*
    jag::make_shared<oldscape::dash3d::ChainedPoseStateRSeven, shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>,
                     shared_ptr<oldscape::dash3d::PoseStateRSeven>&>(shared_ptr* param_1, shared_ptr* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        ChainedPoseStateRSeven* local_38[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::dash3d::ChainedPoseStateRSeven,
                                        shared_ptr<oldscape::dash3d::TransformedPoseStateRSeven>,
                                        shared_ptr<oldscape::dash3d::PoseStateRSeven>&>((void*)((long)pvVar1 + 32),
                                                                                        param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::ChainedPoseStateRSeven>, int,
                                   oldscape::dash3d::ChainedPoseStateRSeven*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::math {
    // 0x10036c230, 128 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::operator Matrix43T<float><float>() const
    Matrix44T* Matrix44T::operator_cast_to_Matrix43T() {
        Vector4T<float>* in_RSI;
        undefined8 local_58[2];
        undefined8 local_48[2];
        undefined8 local_38[2];
        undefined8 local_28[2];

        local_58[0] = in_RSI->GetXYZ();
        local_48[0] = (in_RSI + 16)->GetXYZ();
        local_38[0] = (in_RSI + 32)->GetXYZ();
        local_28[0] = (in_RSI + 48)->GetXYZ();
        new (this) Matrix43T<float>(local_58, local_48, local_38, local_28);
        return this;
    }

} // namespace jag::math

namespace jag::oldscape {
    // 0x10036c430, 16 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread::GetRT7Core()
    void OSRenderCore_RenderThread::GetRT7Core() {
        (&field_8)->get();
    }

} // namespace jag::oldscape
