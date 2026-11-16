// libs/graphics/runetek7/particles/ParticleSystem.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class ParticleSystem : public DebugPrimitiveRendererBasic // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ParticleSystem();
        virtual void GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&);
        virtual GetTransformedTriangle(unsigned int, math::Vector4T<float> (&)[3]);
        virtual void RenderDebug(RenderPassType, DrawableElement&) const;
        GetMaterial();
        void GetGlobalEffectorTemplate(unsigned int) const;
        void GetEffectors(eastl::vector<ParticleEffector const*, BucketAllocatorEASTL>&, unsigned int) const;
        void CreateRenderingResources();
        void DestroyRenderingResources();
        GetParticleCount() const;
        ParticleSystem(ParticleManager*);
        void DisableEmitters();
        void Update(float);
        void UnregisterModelEmitter(shared_ptr<ModelParticleSource> const&);
        void RegisterModelEmitter(shared_ptr<ModelParticleSource> const&, math::Vector3T<float> const&,
                                  math::Vector3T<float> const&, math::Vector3T<float> const&, bool, bool);
        void UnregisterModelEffector(shared_ptr<ModelParticleSource> const&);
        void RegisterModelEffector(shared_ptr<ModelParticleSource> const&, math::Vector3T<float> const&,
                                   math::Matrix33T<float> const&);
        void KeepActiveParticleEmitters(eastl::vector<shared_ptr<ModelParticleSource>, eastl::allocator> const&);
        void UpdateMaterials(MaterialManager const&, TextureAtlasManager&);
        byte CastsShadow() const;
        void TranslateParticles(math::Vector3T<float> const&);
        CalculateViewDistanceAndSort(math::Matrix44T<float> const&);
        CalculateViewDistances(math::Matrix44T<float> const&);
        void SortParticles();
        ulong ContainsEmitterSource(shared_ptr<ModelParticleSource> const&) const;
        ulong CanBatchEmitterSource(MaterialManager const&, shared_ptr<ModelParticleSource> const&) const;
        ulong GetParticleSystemForEmitter(RT7Core&,
                                          eastl::fixed_vector<shared_ptr<ParticleSystem>, 1ul, true, eastl::allocator>&,
                                          shared_ptr<ModelParticleSource> const&);

        // data members, from how the methods use this: 42856 bytes, the first 9056 are DebugPrimitiveRendererBasic
        char _unknown_9056[33776];
        undefined4 m_particleCount; // offset 42832
        char _unknown_42836[20];
    };

    // 0x1007cc3f0, 32 bytes, inline, placed by class name and debug map
    // ParticleSystem::GetGlobalEffectorTemplate(unsigned int) const
    void ParticleSystem::GetGlobalEffectorTemplate(uint param_1) {
        (field_624, param_1)->GetEffectorTemplate();
    }

    // 0x1007cfff0, 16 bytes, inline, placed by class name
    // ParticleSystem::GetParticleCount() const
    undefined4 ParticleSystem::GetParticleCount() {
        return m_particleCount;
    }

    // 0x1007d3330, 16 bytes, inline, placed by class name
    // ParticleSystem::CastsShadow() const
    /* ModularParticleSystemDrawable::CastsShadow() const */

    byte ModularParticleSystemDrawable::CastsShadow() {
        return GetPos() & 1;
    }

    // 0x1007d3330: the linker folded this into ParticleSystem::CastsShadow() const, which has identical code
    ModularParticleSystemDrawable::CastsShadow() const;

    // 0x1007f5a80, 144 bytes, inline, placed by class name
    // auto ParticleSystem::Update(float)::$_6::operator()<ParticleEmitter>(ParticleEmitter&) const
    /* auto 
   ParticleSystem::Update(float)::$_6::TEMPNAMEPLACEHOLDERVALUE(ParticleEmitter&)
   const */

    undefined4 ParticleSystem::Update(float)::$_6::operator()(ParticleEmitter* param_1) {
        int* piVar1;
        long lVar2;
        char cVar3;
        undefined4 uVar4;
        int iVar5;
        vector<game::LocationAudioProperties, eastl::allocator>* this_00;
        undefined1 local_48[32];

        lVar2 = *(long*)(this + 8);
        new (local_48) math::AABB();
        uVar4 = param_1->Update(**(float**)this, local_48, false);
        if ((char)uVar4 == '\0') {
            cVar3 = param_1->IsHidden();
            if (cVar3 == '\0') {
                cVar3 = local_48->IsValid();
                if (cVar3 != '\0') {
                    ((lVar2 + 32))->Union(local_48);
                }
                this_00 = (vector<game::LocationAudioProperties, eastl::allocator>*)param_1->GetParticles();
                iVar5 = eastl::vector<game::LocationAudioProperties, eastl::allocator>::size(this_00);
                piVar1 = (int*)(lVar2 + 42832);
                *piVar1 = *piVar1 + iVar5;
            }
        }
        return uVar4;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1007cc410, 192 bytes, inline, placed by debug map only (low confidence)
    // char const* ToText<32, true>(eastl::fixed_string<char, 32, true, eastl::allocator>&, math::Vector3T<float> const&)
    char* ToText<32, true>(fixed_string* param_1, Vector3T* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        char* pcVar4;
        char local_68[16];
        char local_58[16];
        char local_48[24];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar1 = ToText(local_48, 16, *(float*)param_2, 10);
        uVar2 = ToText(local_58, 16, *(float*)(param_2 + 4), 10);
        uVar3 = ToText(local_68, 16, *(float*)(param_2 + 8), 10);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, "{Vec3: %s, %s, %s}", uVar1, uVar2, uVar3);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return pcVar4;
    }

} // namespace jag
