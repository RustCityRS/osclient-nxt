// libs/graphics/runetek7/particles/ParticleSystem.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class ParticleSystem : public DebugPrimitiveRendererBasic // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ParticleSystem();
        virtual void GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                            const SceneViewData& sceneViewData, const EffectManager& effectManager);
        virtual void GetTransformedTriangle(unsigned int arg1, math::Vector4T<float> (&arg2)[3]);
        virtual void RenderDebug(RenderPassType renderPassType, DrawableElement& drawableElement) const;
        ParticleMaterial GetMaterial();
        void GetGlobalEffectorTemplate(unsigned int arg1) const;
        void GetEffectors(eastl::vector<ParticleEffector const*>& particleEffectors, unsigned int arg2) const;
        void CreateRenderingResources();
        void DestroyRenderingResources();
        uint32_t GetParticleCount() const;
        ParticleSystem(ParticleManager* particleManager);
        void DisableEmitters();
        void Update(float arg1);
        void UnregisterModelEmitter(const shared_ptr<ModelParticleSource>& modelParticleSource);
        void RegisterModelEmitter(const shared_ptr<ModelParticleSource>& modelParticleSource,
                                  const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                                  const math::Vector3T<float>& vector33, bool arg5, bool arg6);
        void UnregisterModelEffector(const shared_ptr<ModelParticleSource>& modelParticleSource);
        void RegisterModelEffector(const shared_ptr<ModelParticleSource>& modelParticleSource,
                                   const math::Vector3T<float>& vector3, const math::Matrix33T<float>& matrix33);
        void KeepActiveParticleEmitters(const eastl::vector<shared_ptr<ModelParticleSource>>& modelParticleSources);
        void UpdateMaterials(const MaterialManager& materialManager, TextureAtlasManager& textureAtlasManager);
        uint8_t CastsShadow() const;
        void TranslateParticles(const math::Vector3T<float>& vector3);
        uint64_t CalculateViewDistanceAndSort(const math::Matrix44T<float>& matrix44);
        uint64_t CalculateViewDistances(const math::Matrix44T<float>& matrix44);
        void SortParticles();
        unsigned long ContainsEmitterSource(const shared_ptr<ModelParticleSource>& modelParticleSource) const;
        unsigned long CanBatchEmitterSource(const MaterialManager& materialManager,
                                            const shared_ptr<ModelParticleSource>& modelParticleSource) const;
        unsigned long GetParticleSystemForEmitter(RT7Core& rt7Core,
                                                  eastl::fixed_vector<shared_ptr<ParticleSystem>, 1ul>& particleSystems,
                                                  const shared_ptr<ModelParticleSource>& modelParticleSource);

    private:
        uint8_t _unknown_9056[33776];
        uint32_t m_particleCount;
        uint8_t _unknown_42836[20];
    };

    // 0x1007cc3f0
    void ParticleSystem::GetGlobalEffectorTemplate(unsigned int arg1) const {
        field_624->GetEffectorTemplate(arg1);
    }

    // 0x1007cfff0
    uint32_t ParticleSystem::GetParticleCount() const {
        return m_particleCount;
    }

    // 0x1007d3330
    uint8_t ParticleSystem::CastsShadow() const {
        return GetPos() & 1;
    }

    // 0x1007d3330: ModularParticleSystemDrawable::CastsShadow() const has the same machine code as ParticleSystem::CastsShadow() const

    // 0x1007f5a80
    auto ParticleSystem::Update(float)::$_6::operator()<ParticleEmitter>(ParticleEmitter& particleEmitter) const {
        int* piVar1;
        int iVar5;
        uint8_t local_48[32];

        long lVar2 = field_8;
        new (local_48) math::AABB();
        auto aVar4 = particleEmitter.Update(*field_0, *local_48, false);
        if ((char)aVar4 == '\0') {
            if (!(particleEmitter.IsHidden())) {
                if (local_48->IsValid()) {
                    ((lVar2 + 32))->Union(*local_48);
                }
                iVar5 = ((vector<game::LocationAudioProperties>*)particleEmitter.GetParticles())->size();
                piVar1 = (int*)(lVar2 + 42832);
                *piVar1 = *piVar1 + iVar5;
            }
        }
        return aVar4;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1007cc410
    char const* ToText<32, true>(eastl::fixed_string<char, 32>& str, const math::Vector3T<float>& vector3) {
        char local_68[16];
        char local_58[16];
        char local_48[24];

        uint64_t uVar1 = ToText(local_48, 16, *(float*)vector3, 10);
        uint64_t uVar2 = ToText(local_58, 16, *(float*)(vector3 + 4), 10);
        uint64_t uVar3 = ToText(local_68, 16, *(float*)(vector3 + 8), 10);
        str.sprintf("{Vec3: %s, %s, %s}", uVar1, uVar2, uVar3);
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag
