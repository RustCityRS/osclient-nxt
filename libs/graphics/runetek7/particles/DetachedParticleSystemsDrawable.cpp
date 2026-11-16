// libs/graphics/runetek7/particles/DetachedParticleSystemsDrawable.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "DetachedParticleSystemsDrawable.h"

namespace jag::graphics {
    // 0x100828290
    void DetachedParticleSystemsDrawable::Add(
        const eastl::vector<shared_ptr<ModularParticleSystem>>& modularParticleSystems) {
        ModularParticleSystem* pMVar1;

        auto this_00 = modularParticleSystems.HeapBeginPtr();
        auto psVar3 = modularParticleSystems.end();
        if (this_00 != psVar3) {
            do {
                pMVar1 = (ModularParticleSystem*)(*this_00).operator->();
                pMVar1->SetEmitting(false);
                pMVar1 = (ModularParticleSystem*)(*this_00).operator->();
                pMVar1->SetLoopingAllowed(false);
                pMVar1 = (ModularParticleSystem*)(*this_00).operator->();
                if (pMVar1->GetParticleCount() != 0) {
                    field_16.push_back(*this_00);
                }
                this_00 = this_00 + 16;
            } while (this_00 != psVar3);
        }
    }

    // 0x100828340
    void
    DetachedParticleSystemsDrawable::Add(const eastl::fixed_vector<shared_ptr<ParticleSystem>, 1ul>& particleSystems) {
        ParticleSystem* pPVar1;

        auto this_00 = particleSystems.HeapBeginPtr();
        auto psVar3 = particleSystems.end();
        if (this_00 != psVar3) {
            do {
                pPVar1 = (ParticleSystem*)(*this_00).operator->();
                pPVar1->DisableEmitters();
                pPVar1 = (ParticleSystem*)(*this_00).operator->();
                if (pPVar1->GetParticleCount() != 0) {
                    field_312.push_back(*this_00);
                }
                this_00 = this_00 + 16;
            } while (this_00 != psVar3);
        }
    }

    // 0x1008283e0
    void DetachedParticleSystemsDrawable::GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                                                 const SceneViewData& sceneViewData,
                                                                 const EffectManager& effectManager) {
        long* plVar2;

        auto this_00 = field_312.HeapBeginPtr();
        auto psVar1 = field_312.end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 16))(plVar2, drawableQueue, rt7Core, sceneViewData, effectManager);
        }
        auto this_01 = field_16.HeapBeginPtr();
        auto psVar3 = field_16.end();
        for (; this_01 != psVar3; this_01 = this_01 + 16) {
            plVar2 = ((ModularParticleSystem*)(*this_01).operator->())->GetDrawable();
            (**(void (**)(...))(*plVar2 + 16))(plVar2, drawableQueue, rt7Core, sceneViewData, effectManager);
        }
    }

    // 0x1008284c0
    void DetachedParticleSystemsDrawable::GarbageCollect() {
        shared_ptr<ModularParticleSystem>* modularParticleSystem2;
        shared_ptr<ParticleSystem>* particleSystem2;
        uint8_t auVar4[16];

        uint8_t* puVar3 = &field_16;
        auto psVar1 = puVar3->HeapBeginPtr();
        auVar4 = puVar3->end();
        psVar1 = eastl::remove_if<shared_ptr<ModularParticleSystem>*,
                                  DetachedParticleSystemsDrawable::GarbageCollect()::__7>(psVar1, auVar4._0_8_,
                                                                                          auVar4._8_8_);
        modularParticleSystem2 = (shared_ptr<ModularParticleSystem>*)puVar3->end();
        puVar3->erase(psVar1, modularParticleSystem2);
        puVar3 = &field_312;
        auto psVar2 = puVar3->HeapBeginPtr();
        auVar4 = puVar3->end();
        psVar2 = eastl::remove_if<shared_ptr<ParticleSystem>*, DetachedParticleSystemsDrawable::GarbageCollect()::__8>(
            psVar2, auVar4._0_8_, auVar4._8_8_);
        particleSystem2 = (shared_ptr<ParticleSystem>*)puVar3->end();
        puVar3->erase(psVar2, particleSystem2);
    }

} // namespace jag::graphics
