// libs/graphics/runetek7/particles/ModularParticleSystemVisuals.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class ModularParticleSystemDrawable : public DebugPrimitiveRendererBasic // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ModularParticleSystemDrawable();
        virtual void GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&);
        virtual GetTransformedTriangle(unsigned int, math::Vector4T<float> (&)[3]);
        virtual void RenderDebug(RenderPassType, DrawableElement&) const;
        GetTextureAtlasReference() const;
        GetViewportMapID() const;
        byte CastsShadow() const;
        ModularParticleSystemDrawable(ModularParticleSystem&);
        void DestroyRenderingResources();
        void CreateRenderingResources();
        void UpdateMaterials(MaterialManager const&, TextureAtlasManager&);
        void GatherParticleDrawables(DrawableQueue&, SceneViewData const&, EffectManager const&, math::OBB const&,
                                     float);
        ulong CalculateViewDistanceAndSort(math::Matrix44T<float> const&);

        // data members, from how the methods use this: 144 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        ModularParticleSystem* field_16; // offset 16
        char _unknown_24[16];
        undefined4 field_40; // offset 40
        char field_44;       // offset 44
        char field_45;       // offset 45
        char _unknown_46[82];
        bool field_128; // offset 128
        char _unknown_129[15];
    };

    class ParticleData {
    public:
        class PositionTimeData;
        class UVAnimationData;
        void GetCount() const;
        ParticleData();
        ~ParticleData();
        bool HasPotentiallyVisibleParticles() const;
        bool CanRender() const;
        void Reserve(unsigned long);
        void Remove(unsigned long);
        void AddDeprecatedParticleRenderData(WrapArray<Particle const>, unsigned short, bool);
        void Add(float, float, math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector2T<float> const&,
                 math::ColourStorage8888<math::RGBA8StorageLayout>, unsigned short, float, UVAnimationData);
        void SetParticleSize(unsigned long, math::Vector2T<float>);
        void RefreshRotationGPUData(unsigned long);
        void ReserveRenderBuffers(unsigned long);
        void Clear();
        ParticleData(ParticleData&&);

        // data members, from how the methods use this: 248 bytes
        float* field_0; // offset 0
        float* field_8; // offset 8
        char _unknown_16[224];
        undefined1 field_240; // offset 240
        char _unknown_241[7];
    };

    class ParticleData::PositionTimeData {
    public:
        PlaneT<float>* operator=(PositionTimeData&&);
        PlaneT<float>* operator=(PositionTimeData const&);
        PositionTimeData();

        // data members, from how the methods use this: 20 bytes
        char _unknown_0[20];
    };

    class ParticleData::UVAnimationData {
    public:
        void SetTilingData(unsigned char, unsigned char);
        UVAnimationData();

        // data members, from how the methods use this: 10 bytes
        uchar field_0; // offset 0
        char _unknown_1[2];
        undefined1 field_3; // offset 3
        char _unknown_4[6];
    };

    // 0x10082a8b0, 224 bytes, base-object constructor, placed by debug map only (low confidence)
    // ModularParticleSystemDrawable::ModularParticleSystemDrawable(ModularParticleSystem&)
    void ModularParticleSystemDrawable::ModularParticleSystemDrawable(ModularParticleSystem* param_1) {
        vector* this_00;
        Material* this_01;
        TextureFormatBitSet local_30[2];

        new (this) Drawable(8);
        field_0 = &PTR__ModularParticleSystemDrawable_100f15958;
        field_16 = param_1;
        new (&field_24, (_func_decltype_nullptr*)(type*)8)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_40 = 4294967295;
        field_44 = '\x01';
        field_45 = '\0';
        std::optional<math::Matrix44T<float>>::optional<math::Matrix44T<float> const&, 0>((Matrix44T*)&field_48);
        field_128 = false;
        new (&field_136) std::mutex();
        this_00 = param_1->SSOBeginPtr(8);
        this_01 = (Material*)shared_ptr<ModularParticleSystemTemplate>::operator->(
            (shared_ptr<ModularParticleSystemTemplate>*)this_00);
        local_30[0].field_0 = this_01->GetNormalEmissiveMapID();
        if (local_30->HasFormatType(0) != '\0') {
            SetRenderFlag(1, true);
        }
    }

    // 0x10082a9b0, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ModularParticleSystemTemplate::GetRenderPassBits() const
    /* Material::GetNormalEmissiveMapID() const */

    undefined4 Material::GetNormalEmissiveMapID() {
        return m_normalEmissiveMapID;
    }

    // 0x10082a9c0, 112 bytes, base-object destructor, placed by debug map only (low confidence)
    // ModularParticleSystemDrawable::~ModularParticleSystemDrawable()
    void ModularParticleSystemDrawable::~ModularParticleSystemDrawable() {
        field_0 = &PTR__ModularParticleSystemDrawable_100f15958;
        DestroyRenderingResources(this);
        (&field_136)->~mutex();
        (&field_24)->~shared_ptr();
        ~AutoSingleton();
    }

    // 0x10082aa30, 16 bytes, placed by debug map only (low confidence)
    // ModularParticleSystemDrawable::DestroyRenderingResources()
    void ModularParticleSystemDrawable::DestroyRenderingResources() {
        shared_ptr<TextureAtlasReference>::reset();
    }

    // 0x10082aa40, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // ModularParticleSystemDrawable::~ModularParticleSystemDrawable(): jumps straight to the base-object destructor

    // 0x10082aa50, 32 bytes, deleting destructor, placed by debug map only (low confidence)
    // ModularParticleSystemDrawable::~ModularParticleSystemDrawable()
    void ModularParticleSystemDrawable::~ModularParticleSystemDrawable() {
        ~ModularParticleSystemDrawable(this);
        operator_delete(this);
    }

    // 0x10082aa70, 16 bytes, placed by debug map only (low confidence)
    // ModularParticleSystemDrawable::CreateRenderingResources()
    void ModularParticleSystemDrawable::CreateRenderingResources() {}

    // 0x10082aa80, 368 bytes, placed by debug map only (low confidence)
    // ModularParticleSystemDrawable::GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&)
    void ModularParticleSystemDrawable::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2,
                                                               SceneViewData* param_3, EffectManager* param_4) {
        char cVar1;
        vector* pvVar2;
        Material* this_00;
        MaterialManager* pMVar3;
        AABB* pAVar4;
        TextureManager* this_01;
        TextureAtlasManager* pTVar5;
        float fVar6;
        OBB local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((*PTR_m_showParticles_100ee6a58 != '\0') && (field_45 == '\0')) {
            pvVar2 = (field_16, (type*)param_1)->SSOBeginPtr();
            this_00 = (Material*)shared_ptr<ModularParticleSystemTemplate>::operator->(
                (shared_ptr<ModularParticleSystemTemplate>*)pvVar2);
            local_88.field_0 = (float)this_00->GetNormalEmissiveMapID();
            pMVar3 = (MaterialManager*)param_3->GetRenderPassBits();
            cVar1 = operator&((RenderPassBitSet*)&local_88, (RenderPassBitSet*)pMVar3);
            if (cVar1 != '\0') {
                pAVar4 = (AABB*)field_16->GetDefaultValue();
                cVar1 = pAVar4->IsValid();
                if (cVar1 != '\0') {
                    if (field_44 != '\0') {
                        pMVar3 = (MaterialManager*)param_2->GetMaterialManager();
                        this_01 = (TextureManager*)param_2->GetTextureManager();
                        pTVar5 = (TextureAtlasManager*)this_01->GetTextureAtlasManager();
                        UpdateMaterials(this, pMVar3, pTVar5);
                        field_44 = '\0';
                    }
                    (&field_48)->reset();
                    pAVar4 = (AABB*)field_16->GetDefaultValue();
                    pvVar2 = param_3->SSOBeginPtr(pMVar3);
                    pvVar2 = pvVar2->SSOBeginPtr(pMVar3);
                    fVar6 = (float)pAVar4->GetDistanceToPoint(pvVar2);
                    new (&local_88) math::OBB();
                    pAVar4 = (AABB*)field_16->GetDefaultValue();
                    pAVar4->GetOBB(&local_88);
                    GatherParticleDrawables(this, param_1, param_3, param_4, &local_88, fVar6);
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10082bb20, 272 bytes, inline, placed by debug map only (low confidence)
    // ParticleSystem_DE* DrawableElementPool<ParticleSystem_DE>::Create<ModularParticleSystemDrawable&, math::OBB const&, float&, unsigned int, bool, bool>(ModularParticleSystemDrawable&, math::OBB const&, float&, unsigned int&&, bool&&, bool&&)
    ParticleSystem_DE* DrawableElementPool<ParticleSystem_DE>::Create<ModularParticleSystemDrawable&, math::OBB_const&,
                                                                      float&, unsigned int, bool, bool>(
        ModularParticleSystemDrawable* param_1, OBB* param_2, float* param_3, uint* param_4, bool* param_5,
        bool* param_6) {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        Option<game::option::EnumBrightness>* this;
        ParticleSystem_DE* this_00;
        undefined8 uVar4;

        this = (Option<game::option::EnumBrightness>*)GetDrawableElementPool();
        iVar1 = GetValue();
        iVar2 = capacity();
        if (iVar1 < iVar2) {
            this_00 = FastPool<ParticleSystem_DE, int>::Create<ModularParticleSystemDrawable&, math::OBB_const&, float&,
                                                               unsigned int, bool, bool>(
                (FastPool<ParticleSystem_DE, int>*)this, param_1, param_2, param_3, param_4, param_5, param_6);
        } else {
            uVar4 = logger::default_logger();
            uVar3 = GetValue();
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/renderer/DrawableElement.h",
                                142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            this_00 = operator_new(144);
            ParticleSystem_DE::ParticleSystem_DE(this_00, param_1, param_2, *param_3, *param_4, *param_5, *param_6);
        }
        return this_00;
    }

    // 0x10082bc30, 320 bytes, placed by debug map only (low confidence)
    // ModularParticleSystemDrawable::RenderDebug(RenderPassType, DrawableElement&) const
    void ModularParticleSystemDrawable::RenderDebug() {
        undefined* puVar1;
        char cVar2;
        AABB* pAVar3;
        long* plVar4;
        undefined8 uVar5;
        vector<ModularParticleEmitter, eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*
            this_00;
        ParticleEmitter* this_01;
        Matrix44T* pMVar6;
        long lVar7;
        ModularParticleEmitter* this_02;
        ulong uVar8;
        ulong uVar9;
        SideBarData local_48[2];

        if (*PTR_m_showWorldAABB_100ee6a60 != '\0') {
            pAVar3 = (AABB*)field_16->GetDefaultValue();
            new (local_48) math::AABB();
            cVar2 = math::operator!=(pAVar3, (AABB*)local_48);
            if ((cVar2 != '\0') &&
                (plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector(""), plVar4 != (long*)0)) {
                uVar5 = field_16->GetDefaultValue();
                oldscape::sidebars::SideBarData::SideBarData(local_48, -1, 3);
                (**(code**)(*plVar4 + 72))(plVar4, uVar5, local_48);
            }
        }
        this_00 = (vector<ModularParticleEmitter,
                          eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*)
                      field_16->GetImmediateThreadPool();
        local_48->GetAttachmentInfo();
        this_01 = (ParticleEmitter*)shared_ptr<VFXAttachmentInfo>::operator->((shared_ptr<VFXAttachmentInfo>*)local_48);
        pMVar6 = (Matrix44T*)this_01->GetParticles();
        local_48->~shared_ptr();
        lVar7 =
            eastl::vector<ModularParticleEmitter,
                          eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>::size(this_00);
        puVar1 = PTR_m_onlyShowModularEmitterIndex_100ee6a28;
        if (lVar7 != 0) {
            uVar9 = 0;
            do {
                if ((*(int*)puVar1 == -1) || ((int)uVar9 == *(int*)puVar1)) {
                    this_02 = (ModularParticleEmitter*)
                        eastl::vector<ModularParticleEmitter,
                                      eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true,
                                                                    eastl::allocator>>::operator[](this_00, uVar9);
                    this_02->RenderDebug(pMVar6);
                }
                uVar9 = uVar9 + 1;
                uVar8 = eastl::vector<
                    ModularParticleEmitter,
                    eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>::size(this_00);
            } while (uVar9 < uVar8);
        }
    }

    // 0x10082bdd0, 320 bytes, placed by debug map only (low confidence)
    // ModularParticleSystemDrawable::CalculateViewDistanceAndSort(math::Matrix44T<float> const&)
    ulong ModularParticleSystemDrawable::CalculateViewDistanceAndSort(Matrix44T* param_1) {
        float fVar2;
        float fVar1;
        float fVar4;
        float fVar3;
        bool bVar5;
        float* pfVar7;
        type* this_00;
        type* ptVar8;
        ImVec4 local_58[16];
        unique_lock<std::mutex> local_48[16];
        undefined8 local_38;
        float local_2c;
        float local_28;
        float local_24;

        std::unique_lock<std::mutex>::unique_lock(local_48, (mutex*)&field_136);
        this_00 = (type*)&field_48;
        if (std::operator==((optional*)this_00, param_1) == '\0') {
            std::optional<math::Matrix44T<float>>::operator=((optional<math::Matrix44T<float>>*)this_00, param_1);
            pfVar7 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_1, 2);
            local_2c = *pfVar7;
            pfVar7 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_1, 6);
            local_28 = *pfVar7;
            pfVar7 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_1, 10);
            local_24 = *pfVar7;
            pfVar7 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_1, 14);
            ImVec4::ImVec4(local_58, local_2c, local_28, local_24, *pfVar7);
            local_38 = (field_16, (Vector4T*)local_58)->CalculateViewDistances();
            this_00 = std::get<0ul, float, float>((pair*)&local_38);
            ptVar8 = std::get<1ul, float, float>((pair*)&local_38);
            fVar1 = *(float*)this_00;
            fVar2 = *(float*)this_00;
            fVar3 = *(float*)ptVar8;
            fVar4 = *(float*)ptVar8;
            field_128 = (0.0 < fVar4 || fVar3 == 0.0) && (0.0 < fVar2 || fVar1 == 0.0);
            if ((0.0 < fVar4 || fVar3 == 0.0) && (0.0 < fVar2 || fVar1 == 0.0)) {
                field_16->SortParticles();
            }
        }
        bVar5 = field_128;
        std::unique_lock<std::mutex>::~unique_lock(local_48);
        return CONCAT71((int7)((ulong)this_00 >> 8), bVar5) & 4294967295;
    }

    // 0x10082c280, 784 bytes, placed by debug map only (low confidence)
    // ParticleData::AddDeprecatedParticleRenderData(WrapArray<Particle const>, unsigned short, bool)
    void ParticleData::AddDeprecatedParticleRenderData(Layout* param_2, undefined4 param_3, int param_4) {
        undefined1* puVar1;
        ParticleData* pPVar2;
        undefined4 uVar3;
        ulong uVar4;
        long lVar5;
        ParticleVertexDataProxy* pPVar6;
        HitmarkType* this_00;
        vector* pvVar7;
        Vector4T<float>* this_01;
        undefined4* puVar8;
        Vector2T<float>* this_02;
        type* ptVar9;
        undefined2* puVar10;
        float fVar11;
        uint extraout_XMM0_Dc;
        uint extraout_XMM0_Dd;
        ParticleVertexDataProxy<ParticleData::UVAnimationData> local_98[16];
        undefined8 local_88;
        uint uStack_80;
        uint uStack_7c;
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* local_78;
        vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>, SafeBucketAllocatorEASTL>*
            local_70;
        vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>* local_68;
        HitmarkType* local_60;
        ParticleData* local_58;
        undefined4 local_40;
        undefined4 local_3c;
        Layout local_38[8];

        local_3c = param_3;
        uVar4 = GetCount(this);
        lVar5 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_2);
        (&field_168, lVar5 + uVar4)->resize();
        puVar1 = &field_240;
        local_58 = this;
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(param_2);
        eastl::vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>,
                      SafeBucketAllocatorEASTL>::resize_uninitialized((ulong)puVar1);
        ParticleVertexDataProxy<ParticleData::UVAnimationData>::ParticleVertexDataProxy<>(local_98);
        if (param_4 == 0) {
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            lVar5 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_38);
            ((lVar5 + 2))->set(6, true);
            local_38->~SplatOp();
        }
        lVar5 = puVar1->HeapBeginPtr();
        pPVar6 = (ParticleVertexDataProxy*)puVar1->end();
        std::fill<ParticleVertexDataProxy<ParticleData::UVAnimationData>*,
                  ParticleVertexDataProxy<ParticleData::UVAnimationData>>(
            (ParticleVertexDataProxy*)(uVar4 * 16 + lVar5), pPVar6, (ParticleVertexDataProxy*)local_98);
        pPVar2 = local_58;
        puVar1 = &local_58->field_120;
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(param_2);
        local_78 = (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>*)puVar1;
        eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                      SafeBucketAllocatorEASTL>::resize_uninitialized((ulong)puVar1);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(param_2);
        local_70 = (vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>,
                           SafeBucketAllocatorEASTL>*)&pPVar2->field_192;
        eastl::vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>,
                      SafeBucketAllocatorEASTL>::resize_uninitialized((ulong)&pPVar2->field_192);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(param_2);
        local_68 = (vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>*)&pPVar2->field_144;
        eastl::vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>::resize_uninitialized(
            (ulong)&pPVar2->field_144);
        lVar5 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_2);
        ptVar9 = (type*)(lVar5 + uVar4);
        eastl::vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>,
                      SafeBucketAllocatorEASTL>::resize_uninitialized((ulong)&pPVar2->field_216);
        this_00 = (HitmarkType*)param_2->end();
        local_60 = (HitmarkType*)param_2->end();
        if (this_00 != local_60) {
            do {
                pvVar7 = this_00->SSOBeginPtr(ptVar9);
                eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                              SafeBucketAllocatorEASTL>::operator[](local_78, uVar4);
                eastl::rbtree<
                    unsigned int,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::less<unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned int const,
                                                 eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                    true, true>::end();
                this_01 = (Vector4T<float>*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(local_38);
                math::Vector4T<float>::SetXYZ(this_01, (Vector3T*)pvVar7);
                local_38->~SplatOp();
                uVar3 = this_00->GetDuration();
                math::ColourStorage8888<math::ABGR8StorageLayout>::ColourStorage8888<math::RGBA8StorageLayout>(
                    (ColourStorage8888<math::ABGR8StorageLayout>*)&local_40, uVar3);
                eastl::vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>,
                              SafeBucketAllocatorEASTL>::operator[](local_70, uVar4);
                eastl::rbtree<
                    unsigned int,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::less<unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned int const,
                                                 eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                    true, true>::end();
                puVar8 = (undefined4*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(local_38);
                *puVar8 = local_40;
                local_38->~SplatOp();
                this_02 = (Vector2T<float>*)
                    eastl::vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>::operator[](
                        local_68, uVar4);
                local_58 = (ParticleData*)this_00->GetEnvMapIrradianceScale();
                local_88 = (ulong)local_58 ^ 9223372039002259456;
                uStack_80 = extraout_XMM0_Dc ^ 2147483648;
                uStack_7c = extraout_XMM0_Dd ^ 2147483648;
                new (local_38) math::Vector2T<float>((float)local_88);
                math::Vector2T<float>::operator=(this_02, (Vector2T*)local_38);
                new (local_38) math::Point<float>(local_58._0_4_, (float)local_88);
                math::Vector2T<float>::operator=(this_02 + 8, (Vector2T*)local_38);
                new (local_38) math::Vector2T<float>(local_58._0_4_);
                math::Vector2T<float>::operator=(this_02 + 16, (Vector2T*)local_38);
                new (local_38) math::Point<float>((float)local_88, local_58._0_4_);
                math::Vector2T<float>::operator=(this_02 + 24, (Vector2T*)local_38);
                fVar11 = (float)this_00->GetTextureScale();
                ptVar9 = (type*)eastl::vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>,
                                              SafeBucketAllocatorEASTL>::
                operator[]((vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>,
                                   SafeBucketAllocatorEASTL>*)&pPVar2->field_216,
                           uVar4);
                eastl::rbtree<
                    unsigned int,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::less<unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned int const,
                                                 eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                    true, true>::end();
                puVar10 = (undefined2*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(local_38);
                *puVar10 = (short)local_3c;
                puVar10[1] = (short)(int)(fVar11 * 10430.219);
                local_38->~SplatOp();
                uVar4 = uVar4 + 1;
                this_00 = (HitmarkType*)&this_00->field_80;
            } while (this_00 != local_60);
        }
    }

    // 0x10082c7c0, 608 bytes, placed by debug map only (low confidence)
    // ParticleData::Add(float, float, math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector2T<float> const&, math::ColourStorage8888<math::RGBA8StorageLayout>, unsigned short, float, ParticleData::UVAnimationData)
    void ParticleData::Add(float param_1, float param_2, float param_3_00, ParticleData* this, Vector3T* param_3,
                           Vector3T* param_4, Vector2T* param_5, undefined4 param_8, undefined4 param_9,
                           UVAnimationData param_10) {
        float* pfVar1;
        ParticleVertexData* this_00;
        undefined4 uVar2;
        undefined8 local_88;
        float local_54;
        float local_50;
        undefined2 local_48;
        undefined2 local_46;
        float local_40;
        float local_3c;
        undefined8 local_38;

        local_54 = param_1;
        local_50 = param_2;
        local_40 = param_3_00;
        push_back(&local_54);
        local_88 = (ulong)local_88._4_4_ << 32;
        (&field_24, (float*)&local_88)->push_back();
        local_38._0_4_ = 0.01;
        pfVar1 = std::max<float>(&local_50, (float*)&local_38);
        local_88._0_4_ = 1.0 / *pfVar1;
        (&field_48, (float*)&local_88)->push_back();
        (&field_72, &local_40)->push_back();
        local_88 = (ulong)local_88._4_4_ << 32;
        (&field_96, (float*)&local_88)->push_back();
        uVar2 = FrameTime::GetSecondsSinceProgramStart();
        local_88 = CONCAT44(local_88._4_4_, uVar2);
        local_38 = (ulong)(uint)local_38._4_4_ << 32;
        local_3c = 65535.0;
        local_3c = math::Wrap<float>((float*)&local_88, (float*)&local_38, &local_3c);
        eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>::emplace_back<
            math::Vector3T<float> const&, float&>(
            (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>*)&field_120,
            param_3, &local_3c);
        math::ColourStorage8888<math::ABGR8StorageLayout>::ColourStorage8888<math::RGBA8StorageLayout>(
            (ColourStorage8888<math::ABGR8StorageLayout>*)&local_38, param_8);
        new (&local_88)
            ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>((ColourStorage8888*)&local_38);
        (&field_192, (ParticleVertexDataProxy*)&local_88)->push_back();
        new (&local_88) ParticleVertexDataProxy<math::Vector3T<float>>(param_4);
        (&field_168, (ParticleVertexDataProxy*)(ParticleVertexDataProxy<math::Vector3T<float>>*)&local_88)->push_back();
        local_38 = math::operator*(0.5, param_5);
        this_00 = eastl::vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>::emplace_back<>(
            (vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>*)&field_144);
        local_88 =
            math::operator-((math*)&local_38, (Vector2T*)(ParticleVertexDataProxy<math::Vector3T<float>>*)&local_88);
        math::Vector2T<float>::operator=((Vector2T<float>*)this_00, (Vector2T*)&local_88);
        new (&local_88) math::Point<float>((float)local_38, -local_38._4_4_);
        math::Vector2T<float>::operator=((Vector2T<float>*)(this_00 + 8), (Vector2T*)&local_88);
        math::Vector2T<float>::operator=((Vector2T<float>*)(this_00 + 16), (Vector2T*)&local_38);
        new (&local_88) math::Point<float>(-(float)local_38, local_38._4_4_);
        math::Vector2T<float>::operator=((Vector2T<float>*)(this_00 + 24), (Vector2T*)&local_88);
        local_40 = local_40 * 10430.219;
        local_48 = (undefined2)param_9;
        local_46 = (undefined2)(int)local_40;
        new (&local_88)
            ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>((MaterialSlotRotationData*)&local_48);
        (&field_216, (ParticleVertexDataProxy*)&local_88)->push_back();
        new (&local_88) ParticleVertexDataProxy<ParticleData::UVAnimationData>(&param_10);
        (&field_240, (ParticleVertexDataProxy*)&local_88)->push_back();
    }

    // 0x10082cd70, 192 bytes, placed by debug map only (low confidence)
    // ParticleData::SetParticleSize(unsigned long, math::Vector2T<float>)
    void ParticleData::SetParticleSize(undefined8 param_1_00, ParticleData* this, Vector2T* param_1) {
        Vector2T<float>* this_00;
        undefined8 local_38;
        undefined8 local_30;
        float local_28;
        float fStack_24;

        local_38 = param_1_00;
        this_00 = (Vector2T<float>*)
            eastl::vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>*)&field_144,
                (ulong)param_1);
        _local_28 = math::operator*(0.5, (Vector2T*)&local_38);
        local_30 = math::operator-((math*)&local_28, param_1);
        math::Vector2T<float>::operator=(this_00, (Vector2T*)&local_30);
        new (&local_30) math::Point<float>(local_28, -fStack_24);
        math::Vector2T<float>::operator=(this_00 + 8, (Vector2T*)&local_30);
        math::Vector2T<float>::operator=(this_00 + 16, (Vector2T*)&local_28);
        new (&local_30) math::Point<float>(-local_28, fStack_24);
        math::Vector2T<float>::operator=(this_00 + 24, (Vector2T*)&local_30);
    }

    // 0x10082ce30, 96 bytes, placed by debug map only (low confidence)
    // ParticleData::RefreshRotationGPUData(unsigned long)
    void ParticleData::RefreshRotationGPUData(ulong param_1) {
        float fVar1;
        float* pfVar2;
        long lVar3;
        long lVar4;

        pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&field_72, param_1);
        fVar1 = *pfVar2;
        lVar3 =
            eastl::vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>, SafeBucketAllocatorEASTL>::
            operator[]((vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>,
                               SafeBucketAllocatorEASTL>*)&field_216,
                       param_1);
        lVar4 = 0;
        do {
            *(short*)(lVar3 + 2 + lVar4 * 4) = (short)(int)(fVar1 * 10430.219);
            lVar4 = lVar4 + 1;
        } while (lVar4 != 4);
    }

    // 0x10082ced0, 112 bytes, placed by debug map only (low confidence)
    // ParticleData::ReserveRenderBuffers(unsigned long)
    void ParticleData::ReserveRenderBuffers(ulong param_1) {
        (&field_120, param_1)->reserve();
        (&field_144, param_1)->reserve();
        (&field_168, param_1)->reserve();
        (&field_192, param_1)->reserve();
        (&field_216, param_1)->reserve();
        (&field_240, param_1)->reserve();
    }

    // 0x10082d0c0, 144 bytes, placed by debug map only (low confidence)
    // ParticleData::Clear()
    void ParticleData::Clear() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10082bd70, 96 bytes, inline, placed by debug map only (low confidence)
    // operator!=(AABB const&, AABB const&)
    /* TEMPNAMEPLACEHOLDERVALUE(AABB const&, AABB const&) */

    bool operator!=(AABB* param_1, AABB* param_2) {
        bool bVar1;
        bool bVar2;
        vector* pvVar3;
        vector* pvVar4;
        Vector3T* pVVar5;
        Vector3T* pVVar6;

        pvVar3 = param_1->SSOBeginPtr(param_2);
        pvVar4 = param_2->SSOBeginPtr(param_2);
        bVar1 = operator!=((Vector3T*)pvVar3, (Vector3T*)pvVar4);
        bVar2 = true;
        if (!bVar1) {
            pVVar5 = (Vector3T*)param_1->GetScreen();
            pVVar6 = (Vector3T*)param_2->GetScreen();
            bVar2 = operator!=(pVVar5, pVVar6);
        }
        return bVar2;
    }

    // 0x10082cc70, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float> operator-<float>(Vector2T<float> const&)
    /* Vector2T<float> TEMPNAMEPLACEHOLDERVALUE(Vector2T<float> const&)
    */

    undefined8 operator-(Vector2T* param_1) {
        undefined8 local_10;

        new (&local_10) Point<float>(-field_0, -field_4);
        return local_10;
    }

} // namespace jag::math
