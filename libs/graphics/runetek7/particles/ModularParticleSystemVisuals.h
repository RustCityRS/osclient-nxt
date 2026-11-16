// libs/graphics/runetek7/particles/ModularParticleSystemVisuals.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class ModularParticleSystemDrawable : public DebugPrimitiveRendererBasic // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ModularParticleSystemDrawable();
        virtual void GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                            const SceneViewData& sceneViewData, const EffectManager& effectManager);
        virtual void GetTransformedTriangle(unsigned int arg1, math::Vector4T<float> (&arg2)[3]);
        virtual void RenderDebug(RenderPassType renderPassType, DrawableElement& drawableElement) const;
        void GetTextureAtlasReference() const;
        int GetViewportMapID() const;
        uint8_t CastsShadow() const;
        ModularParticleSystemDrawable(ModularParticleSystem& modularParticleSystem);
        void DestroyRenderingResources();
        void CreateRenderingResources();
        void UpdateMaterials(const MaterialManager& materialManager, TextureAtlasManager& textureAtlasManager);
        void GatherParticleDrawables(DrawableQueue& drawableQueue, const SceneViewData& sceneViewData,
                                     const EffectManager& effectManager, const math::OBB& obb, float arg5);
        unsigned long CalculateViewDistanceAndSort(const math::Matrix44T<float>& matrix44);

    private:
        unsigned int field_8;
        uint8_t _unknown_12[4];
        ModularParticleSystem* field_16;
        uint8_t _unknown_24[16];
        int m_viewportMapID;
        char field_44;
        char field_45;
        uint8_t _unknown_46[82];
        bool field_128;
        uint8_t _unknown_129[15];
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
        void Reserve(unsigned long arg1);
        void Remove(unsigned long arg1);
        void AddDeprecatedParticleRenderData(WrapArray<Particle const> wrapArray, unsigned short arg2, bool arg3);
        void Add(float arg1, float arg2, const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                 const math::Vector2T<float>& vector2,
                 math::ColourStorage8888<math::RGBA8StorageLayout> colourStorage8888, unsigned short arg7, float arg8,
                 UVAnimationData uvAnimationData);
        void SetParticleSize(unsigned long arg1, math::Vector2T<float> vector2);
        void RefreshRotationGPUData(unsigned long arg1);
        void ReserveRenderBuffers(unsigned long arg1);
        void Clear();
        ParticleData(ParticleData&& particleData);

    private:
        eastl* field_0;
        float* field_8;
        uint8_t _unknown_16[232];
    };

    class ParticleData::PositionTimeData {
    public:
        PlaneT<float>* operator=(PositionTimeData&& positionTimeData);
        PlaneT<float>* operator=(const PositionTimeData& positionTimeData);
        PositionTimeData();

        uint8_t _unknown_0[20];
    };

    class ParticleData::UVAnimationData {
    public:
        void SetTilingData(unsigned char arg1, unsigned char arg2);
        UVAnimationData();

    private:
        unsigned char field_0;
        uint8_t _unknown_1[2];
        uint8_t field_3;
        uint8_t _unknown_4[6];
    };

    // 0x10082a8b0
    ModularParticleSystemDrawable::ModularParticleSystemDrawable(ModularParticleSystem& modularParticleSystem)
        : Drawable(8), field_16(modularParticleSystem) {
        TextureFormatBitSet local_30;

        new (&field_24) shared_ptr();
        m_viewportMapID = -1;
        field_44 = '\x01';
        field_45 = '\0';
        field_48.optional<math::Matrix44T<float> const&, 0>(*8);
        field_128 = false;
        new (&field_136) std::mutex();
        auto this_00 = modularParticleSystem.SSOBeginPtr();
        local_30[0].m_bits = ((Material*)(*this_00).operator->())->GetNormalEmissiveMapID();
        if (local_30.HasFormatType(0) != '\0') {
            SetRenderFlag(1, true);
        }
    }

    // 0x10082a9b0
    Callstack ModularParticleSystemTemplate::GetRenderPassBits() const {
        return m_normalEmissiveMapID;
    }

    // 0x10082a9c0
    ModularParticleSystemDrawable::~ModularParticleSystemDrawable() {
        DestroyRenderingResources();
        (&field_136)->~mutex();
        field_24.~shared_ptr();
    }

    // 0x10082aa30
    void ModularParticleSystemDrawable::DestroyRenderingResources() {
        field_24.reset();
    }

    // 0x10082aa70
    void ModularParticleSystemDrawable::CreateRenderingResources() {}

    // 0x10082aa80
    void ModularParticleSystemDrawable::GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                                               const SceneViewData& sceneViewData,
                                                               const EffectManager& effectManager) {
        shared_ptr<ModularParticleSystemTemplate>* this_00;
        Material* this_01;
        RenderPassBitSet* renderPassBitSet2;
        AABB* pAVar2;
        MaterialManager* materialManager;
        TextureManager* this_02;
        TextureAtlasManager* textureAtlasManager;
        Layout* this_03;
        Vector3T<float>* vector3;
        float arg5;
        OBB local_88;

        if ((*PTR_m_showParticles_100ee6a58 != '\0') && (field_45 == '\0')) {
            this_00 = (shared_ptr<ModularParticleSystemTemplate>*)field_16->SSOBeginPtr();
            this_01 = (Material*)(*this_00).operator->();
            local_88.field_0 = (float)this_01->GetNormalEmissiveMapID();
            renderPassBitSet2 = sceneViewData.GetRenderPassBits();
            if (operator&((RenderPassBitSet*)&local_88, renderPassBitSet2)) {
                pAVar2 = (AABB*)field_16->GetDefaultValue();
                if (pAVar2->IsValid()) {
                    if (field_44 != '\0') {
                        materialManager = rt7Core.GetMaterialManager();
                        this_02 = rt7Core.GetTextureManager();
                        textureAtlasManager = (TextureAtlasManager*)this_02->GetTextureAtlasManager();
                        UpdateMaterials(*materialManager, *textureAtlasManager);
                        field_44 = '\0';
                    }
                    field_48.reset();
                    pAVar2 = (AABB*)field_16->GetDefaultValue();
                    this_03 = (Layout*)sceneViewData.SSOBeginPtr();
                    vector3 = (Vector3T<float>*)this_03->SSOBeginPtr();
                    arg5 = (float)pAVar2->GetDistanceToPoint(*vector3);
                    local_88 = math::OBB();
                    pAVar2 = (AABB*)field_16->GetDefaultValue();
                    pAVar2->GetOBB(local_88);
                    GatherParticleDrawables(drawableQueue, sceneViewData, effectManager, local_88, arg5);
                }
            }
        }
    }

    // 0x10082bb20
    ParticleSystem_DE* DrawableElementPool<ParticleSystem_DE>::Create<ModularParticleSystemDrawable&, math::OBB const&,
                                                                      float&, unsigned int, bool, bool>(
        ModularParticleSystemDrawable& modularParticleSystemDrawable, const math::OBB& obb, float& arg3,
        unsigned int&& arg4, bool&& arg5, bool&& arg6) {
        uint32_t uVar3;
        ParticleSystem_DE* particleSystem_DE;
        Logger* this_00;

        auto modularParticleSystemDrawable_00 = GetDrawableElementPool();
        int iVar1 = modularParticleSystemDrawable_00->GetValue();
        int iVar2 = modularParticleSystemDrawable_00->capacity();
        if (iVar1 < iVar2) {
            particleSystem_DE =
                FastPool<ParticleSystem_DE, int>::Create<ModularParticleSystemDrawable&, math::OBB const&, float&,
                                                         unsigned int, bool, bool>(
                    *modularParticleSystemDrawable_00, modularParticleSystemDrawable, obb.field_0, arg3, arg4, arg5);
        } else {
            this_00 = logger::default_logger();
            uVar3 = modularParticleSystemDrawable_00->GetValue();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "renderer/DrawableElement.h",
                         142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            particleSystem_DE = (ParticleSystem_DE*)operator new(144);
            new (particleSystem_DE) ParticleSystem_DE(modularParticleSystemDrawable, obb, arg3, arg4, arg5, arg6);
        }
        return particleSystem_DE;
    }

    // 0x10082bc30
    void ModularParticleSystemDrawable::RenderDebug(RenderPassType renderPassType,
                                                    DrawableElement& drawableElement) const {
        AABB* aabb1;
        long* plVar3;
        uint64_t uVar4;
        unsigned long uVar6;
        unsigned long arg1;

        if (*PTR_m_showWorldAABB_100ee6a60 != '\0') {
            aabb1 = (AABB*)field_16->GetDefaultValue();
            local_48 = math::AABB();
            if ((*aabb1 != local_48 != '\0') &&
                (plVar3 = DebugPrimitiveCollectorBasic::GetCollector(""), plVar3 != nullptr)) {
                uVar4 = field_16->GetDefaultValue();
                local_48 = oldscape::sidebars::SideBarData(-1, 3);
                (**(void (**)(...))(*plVar3 + 72))(plVar3, uVar4, &local_48);
            }
        }
        auto this_00 = field_16->GetImmediateThreadPool();
        SideBarData local_48 = field_16->GetAttachmentInfo();
        auto this_01 = local_48.operator->();
        auto matrix44 = this_01->GetParticles();
        long lVar5 = this_00->size();
        uint8_t* puVar1 = PTR_m_onlyShowModularEmitterIndex_100ee6a28;
        if (lVar5 != 0) {
            arg1 = 0;
            do {
                if ((*(int*)puVar1 == -1) || ((int)arg1 == *(int*)puVar1)) {
                    ((ModularParticleEmitter*)(*this_00)[arg1])->RenderDebug(*matrix44);
                }
                arg1 = arg1 + 1;
                uVar6 = this_00->size();
            } while (arg1 < uVar6);
        }
    }

    // 0x10082bdd0
    unsigned long ModularParticleSystemDrawable::CalculateViewDistanceAndSort(const math::Matrix44T<float>& matrix44) {
        float fVar2;
        float fVar1;
        float fVar4;
        float fVar3;
        float* pfVar7;
        type* ptVar8;
        ImVec4 local_58;
        uint64_t local_38;
        float local_2c;
        float local_28;
        float local_24;

        unique_lock<std::mutex> local_48(field_136);
        type* matrix441 = (type*)&field_48;
        if (matrix441 == matrix44 == '\0') {
            matrix441->operator=(matrix44);
            pfVar7 = (float*)math::Matrix44T<float>::operator()(matrix44, 2);
            local_2c = *pfVar7;
            pfVar7 = (float*)math::Matrix44T<float>::operator()(matrix44, 6);
            local_28 = *pfVar7;
            pfVar7 = (float*)math::Matrix44T<float>::operator()(matrix44, 10);
            local_24 = *pfVar7;
            pfVar7 = (float*)math::Matrix44T<float>::operator()(matrix44, 14);
            local_58 = ImVec4(local_2c, local_28, local_24, *pfVar7);
            local_38 = field_16->CalculateViewDistances(local_58);
            matrix441 = std::get<0ul, float, float>(local_38);
            ptVar8 = std::get<1ul, float, float>(local_38);
            fVar1 = *(float*)matrix441;
            fVar2 = *(float*)matrix441;
            fVar3 = *(float*)ptVar8;
            fVar4 = *(float*)ptVar8;
            field_128 = (0.0 < fVar4 || fVar3 == 0.0) && (0.0 < fVar2 || fVar1 == 0.0);
            if ((0.0 < fVar4 || fVar3 == 0.0) && (0.0 < fVar2 || fVar1 == 0.0)) {
                field_16->SortParticles();
            }
        }
        bool bVar5 = field_128;
        return bVar5 & 4294967295;
    }

    // 0x10082c280
    void ParticleData::AddDeprecatedParticleRenderData(WrapArray<Particle const> wrapArray, unsigned short arg2,
                                                       bool arg3) {
        unsigned int uVar3;
        ParticleVertexDataProxy<ParticleData::UVAnimationData>* particleVertexDataProxy2;
        Vector3T<float>* vector3;
        uint32_t* puVar5;
        Vector2T<float>* this_02;
        uint16_t* puVar6;
        uint64_t in_register_00000009;
        uint64_t in_register_00000012;
        float fVar7;
        unsigned int extraout_XMM0_Dc;
        unsigned int extraout_XMM0_Dd;
        ParticleVertexDataProxy<ParticleData::UVAnimationData> local_98;
        uint64_t local_88;
        unsigned int uStack_80;
        unsigned int uStack_7c;
        uint32_t local_40;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        uint32_t local_3c = (uint32_t)(((uint64_t)in_register_00000012 << 16) | (uint16_t)arg2);
        unsigned long arg1 = GetCount();
        long lVar4 = wrapArray->HeapBeginPtr();
        field_168.resize(lVar4 + arg1);
        uint8_t* puVar1 = &field_240;
        ParticleData* local_58 = this;
        lVar4 = wrapArray->HeapBeginPtr();
        puVar1->resize_uninitialized(lVar4 + arg1);
        local_98.ParticleVertexDataProxy<>();
        if ((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) == 0) {
            local_38.end();
            lVar4 = local_38.HeapBeginPtr();
            *((lVar4 + 2)) = eastl::bitset<7ul, unsigned char>::set(6, true);
        }
        lVar4 = puVar1->HeapBeginPtr();
        particleVertexDataProxy2 = (ParticleVertexDataProxy<ParticleData::UVAnimationData>*)puVar1->end();
        std::fill<ParticleVertexDataProxy<ParticleData::UVAnimationData>*,
                  ParticleVertexDataProxy<ParticleData::UVAnimationData>>((arg1 * 16 + lVar4), particleVertexDataProxy2,
                                                                          local_98);
        ParticleData* pPVar2 = local_58;
        puVar1 = &local_58->field_120;
        lVar4 = wrapArray->HeapBeginPtr();
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* local_78 =
            (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>*)puVar1;
        puVar1->resize_uninitialized(lVar4 + arg1);
        lVar4 = wrapArray->HeapBeginPtr();
        vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>, SafeBucketAllocatorEASTL>*
            local_70 = (vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>,
                               SafeBucketAllocatorEASTL>*)&pPVar2->field_192;
        pPVar2->field_192.resize_uninitialized(lVar4 + arg1);
        lVar4 = wrapArray->HeapBeginPtr();
        vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>* local_68 =
            (vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>*)&pPVar2->field_144;
        pPVar2->field_144.resize_uninitialized(lVar4 + arg1);
        lVar4 = wrapArray->HeapBeginPtr();
        pPVar2->field_216.resize_uninitialized(lVar4 + arg1);
        auto this_00 = wrapArray->end();
        auto local_60 = wrapArray->end();
        if (this_00 != local_60) {
            do {
                vector3 = (Vector3T<float>*)this_00->SSOBeginPtr();
                (*local_78)[arg1];
                local_38.end();
                ((Vector4T<float>*)local_38.HeapBeginPtr())->SetXYZ(*vector3);
                uVar3 = this_00->GetDuration();
                local_40.ColourStorage8888<math::RGBA8StorageLayout>(
                    (ColourStorage8888<math::RGBA8StorageLayout>*)(unsigned long)uVar3);
                (*local_70)[arg1];
                local_38.end();
                puVar5 = (uint32_t*)local_38.HeapBeginPtr();
                *puVar5 = local_40;
                this_02 = (Vector2T<float>*)(*local_68)[arg1];
                local_58 = (ParticleData*)this_00->GetEnvMapIrradianceScale();
                local_88 = (unsigned long)local_58 ^ 9223372039002259456;
                uStack_80 = extraout_XMM0_Dc ^ 2147483648;
                uStack_7c = extraout_XMM0_Dd ^ 2147483648;
                local_38 = math::Vector2T((float)local_88);
                *this_02 = local_38;
                local_38 = math::Point(local_58._0_4_, (float)local_88);
                (*(this_02 + 8)) = local_38;
                local_38 = math::Vector2T(local_58._0_4_);
                (*(this_02 + 16)) = local_38;
                local_38 = math::Point((float)local_88, local_58._0_4_);
                (*(this_02 + 24)) = local_38;
                fVar7 = (float)this_00->GetTextureScale();
                pPVar2->field_216[arg1];
                local_38.end();
                puVar6 = (uint16_t*)local_38.HeapBeginPtr();
                *puVar6 = (short)local_3c;
                puVar6[1] = (short)(int)(fVar7 * 10430.219);
                arg1 = arg1 + 1;
                this_00 = (HitmarkType*)&this_00->field_80;
            } while (this_00 != local_60);
        }
    }

    // 0x10082c7c0
    void ParticleData::Add(float arg1, float arg2, const math::Vector3T<float>& vector31,
                           const math::Vector3T<float>& vector32, const math::Vector2T<float>& vector2,
                           math::ColourStorage8888<math::RGBA8StorageLayout> colourStorage8888, unsigned short arg7,
                           float arg8, ParticleData::UVAnimationData uvAnimationData) {
        uint16_t in_register_0000008a;
        uint64_t local_88;
        uint64_t local_38;

        uint32_t local_4c = (((uint32_t)in_register_0000008a << 16) | (uint16_t)arg7);
        float local_40 = arg8;
        push_back(arg1);
        local_88 = (unsigned long)local_88._4_4_ << 32;
        field_24.push_back(local_88);
        local_38._0_4_ = 0.01;
        auto pfVar1 = std::max<float>(arg2, local_38);
        local_88._0_4_ = 1.0 / *pfVar1;
        field_48.push_back(local_88);
        field_72.push_back(local_40);
        local_88 = (unsigned long)local_88._4_4_ << 32;
        field_96.push_back(local_88);
        uint32_t uVar2 = FrameTime::GetSecondsSinceProgramStart();
        local_88 = (((uint64_t)local_88._4_4_ << 32) | (uint32_t)uVar2);
        local_38 = (unsigned long)(unsigned int)local_38._4_4_ << 32;
        float local_3c = 65535.0;
        local_3c = math::Wrap<float>(local_88, local_38, local_3c);
        field_120.emplace_back<math::Vector3T<float> const&, float&>(vector31, local_3c);
        local_38.ColourStorage8888<math::RGBA8StorageLayout>(
            (ColourStorage8888<math::RGBA8StorageLayout>*)((unsigned long)colourStorage8888 & 4294967295));
        new (&local_88) ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>(local_38);
        field_192.push_back(local_88);
        new (&local_88) ParticleVertexDataProxy<math::Vector3T<float>>(vector32);
        field_168.push_back(local_88);
        local_38 = vector2 * *0.5;
        auto this_00 = field_144.emplace_back<>();
        local_88 = math::operator-((Vector2T<float>*)&local_38);
        *this_00 = local_88;
        new (&local_88) math::Point((float)local_38, -local_38._4_4_);
        (*((this_00 + 8))) = local_88;
        (*((this_00 + 16))) = local_38;
        new (&local_88) math::Point(-(float)local_38, local_38._4_4_);
        (*((this_00 + 24))) = local_88;
        local_40 = local_40 * 10430.219;
        uint16_t local_48 = (uint16_t)local_4c;
        uint16_t local_46 = (uint16_t)(int)local_40;
        new (&local_88) ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>(local_48);
        field_216.push_back(local_88);
        new (&local_88) ParticleVertexDataProxy<ParticleData::UVAnimationData>(uvAnimationData);
        field_240.push_back(local_88);
    }

    // 0x10082cd70
    void ParticleData::SetParticleSize(unsigned long arg1, math::Vector2T<float> vector2) {
        Vector2T<float> local_38;

        Vector2T<float>* this_00 = &field_144[arg1];
        uint64_t local_28 = local_38 * *0.5;
        uint64_t local_30 = math::operator-((Vector2T<float>*)&local_28);
        *this_00 = local_30;
        new (&local_30) math::Point((float)local_28, -local_28._4_4_);
        (*(this_00 + 8)) = local_30;
        (*(this_00 + 16)) = local_28;
        new (&local_30) math::Point(-(float)local_28, local_28._4_4_);
        (*(this_00 + 24)) = local_30;
    }

    // 0x10082ce30
    void ParticleData::RefreshRotationGPUData(unsigned long arg1) {
        float* pfVar2 = &field_72[arg1];
        float fVar1 = *pfVar2;
        long lVar3 = field_216[arg1];
        long lVar4 = 0;
        do {
            *(short*)(lVar3 + 2 + lVar4 * 4) = (short)(int)(fVar1 * 10430.219);
            lVar4 = lVar4 + 1;
        } while (lVar4 != 4);
    }

    // 0x10082ced0
    void ParticleData::ReserveRenderBuffers(unsigned long arg1) {
        field_120.reserve(arg1);
        field_144.reserve(arg1);
        field_168.reserve(arg1);
        field_192.reserve(arg1);
        field_216.reserve(arg1);
        field_240.reserve(arg1);
    }

    // 0x10082d0c0
    void ParticleData::Clear() {
        clear();
        field_24.clear();
        field_48.clear();
        field_72.clear();
        field_96.clear();
        field_120.clear();
        field_144.clear();
        field_168.clear();
        field_192.clear();
        field_216.clear();
        field_240.clear();
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10082bd70
    bool operator!=(const AABB& aabb1, const AABB& aabb2) {
        auto pVVar1 = aabb1.SSOBeginPtr();
        auto pVVar2 = aabb2.SSOBeginPtr();
        bool bVar3 = *pVVar1 != *pVVar2;
        bool bVar4 = true;
        if (!bVar3) {
            pVVar1 = (Vector3T<float>*)aabb1.GetScreen();
            pVVar2 = (Vector3T<float>*)aabb2.GetScreen();
            bVar4 = *pVVar1 != *pVVar2;
        }
        return bVar4;
    }

    // 0x10082cc70
    Vector2T<float> operator- <float>(const Vector2T<float>& vector2) {

        return local_10(-*(float*)vector2, -*(float*)(vector2 + 4));
        return local_10;
    }

} // namespace jag::math
