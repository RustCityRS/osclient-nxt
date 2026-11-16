// libs/graphics/runetek7/particles/DetachedParticleSystemsDrawable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class DetachedParticleSystemsDrawable : public DebugPrimitiveRendererBasic // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DetachedParticleSystemsDrawable();
        virtual void GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                            const SceneViewData& sceneViewData, const EffectManager& effectManager);
        DetachedParticleSystemsDrawable();
        void Add(const eastl::vector<shared_ptr<ModularParticleSystem>>& modularParticleSystems);
        void Add(const eastl::fixed_vector<shared_ptr<ParticleSystem>, 1ul>& particleSystems);
        void GarbageCollect();

    private:
        unsigned int field_8;
        uint8_t _unknown_12[308];
    };

    // 0x10044bab0
    DetachedParticleSystemsDrawable::DetachedParticleSystemsDrawable() : Drawable(0) {}

    // 0x10044bf70
    DetachedParticleSystemsDrawable::~DetachedParticleSystemsDrawable() {
        field_312.~fixed_vector();
        field_16.~fixed_vector();
    }

    // 0x10084f880
    bool DetachedParticleSystemsDrawable::GarbageCollect()::$_7::operator()(
        const shared_ptr<ModularParticleSystem>& modularParticleSystem) const {
        return use_count() == 1;
    }

    // 0x10084f940
    bool DetachedParticleSystemsDrawable::GarbageCollect()::$_8::operator()(
        const shared_ptr<ParticleSystem>& particleSystem) const {
        return ((ParticleSystem*)(*this).operator->())->GetParticleCount() == 0;
    }

} // namespace jag::graphics
