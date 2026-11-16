// libs/graphics/runetek7/particles/DetachedParticleSystemsDrawable.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "DetachedParticleSystemsDrawable.h"

namespace jag::graphics {
    // 0x100828290, 160 bytes, placed by class name and debug map
    // DetachedParticleSystemsDrawable::Add(eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator> const&)
    void DetachedParticleSystemsDrawable::Add(vector* param_1) {
        ModularParticleSystem* pMVar1;
        shared_ptr<ModularParticleSystem>* psVar3;
        shared_ptr<ModularParticleSystem>* this_00;

        this_00 = (shared_ptr<ModularParticleSystem>*)param_1->HeapBeginPtr();
        psVar3 = (shared_ptr<ModularParticleSystem>*)param_1->end();
        if (this_00 != psVar3) {
            do {
                pMVar1 = (ModularParticleSystem*)shared_ptr<ModularParticleSystem>::operator->(this_00);
                pMVar1->SetEmitting(false);
                pMVar1 = (ModularParticleSystem*)shared_ptr<ModularParticleSystem>::operator->(this_00);
                pMVar1->SetLoopingAllowed(false);
                pMVar1 = (ModularParticleSystem*)shared_ptr<ModularParticleSystem>::operator->(this_00);
                if (pMVar1->GetParticleCount() != 0) {
                    eastl::fixed_vector<shared_ptr<ModularParticleSystem>, 16ul, true, eastl::allocator>::push_back(
                        (shared_ptr*)field_16);
                }
                this_00 = this_00 + 16;
            } while (this_00 != psVar3);
        }
    }

    // 0x100828340, 144 bytes, placed by class name and debug map
    // DetachedParticleSystemsDrawable::Add(eastl::fixed_vector<shared_ptr<ParticleSystem>, 1ul, true, eastl::allocator> const&)
    void DetachedParticleSystemsDrawable::Add(fixed_vector* param_1) {
        ParticleSystem* pPVar1;
        shared_ptr<ParticleSystem>* psVar3;
        shared_ptr<ParticleSystem>* this_00;

        this_00 = (shared_ptr<ParticleSystem>*)param_1->HeapBeginPtr();
        psVar3 = (shared_ptr<ParticleSystem>*)param_1->end();
        if (this_00 != psVar3) {
            do {
                pPVar1 = (ParticleSystem*)shared_ptr<ParticleSystem>::operator->(this_00);
                pPVar1->DisableEmitters();
                pPVar1 = (ParticleSystem*)shared_ptr<ParticleSystem>::operator->(this_00);
                if (pPVar1->GetParticleCount() != 0) {
                    eastl::fixed_vector<shared_ptr<ParticleSystem>, 16ul, true, eastl::allocator>::push_back(
                        (shared_ptr*)field_312);
                }
                this_00 = this_00 + 16;
            } while (this_00 != psVar3);
        }
    }

    // 0x1008283e0, 224 bytes, placed by class name and debug map
    // DetachedParticleSystemsDrawable::GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&)
    void DetachedParticleSystemsDrawable::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2,
                                                                 SceneViewData* param_3, EffectManager* param_4) {
        shared_ptr<ParticleSystem>* this_00;
        shared_ptr<ParticleSystem>* psVar1;
        long* plVar2;
        shared_ptr<ModularParticleSystem>* this_01;
        shared_ptr<ModularParticleSystem>* psVar3;
        ModularParticleSystem* this_02;

        this_00 = (shared_ptr<ParticleSystem>*)field_312->HeapBeginPtr();
        psVar1 = (shared_ptr<ParticleSystem>*)field_312->end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            plVar2 = (long*)shared_ptr<ParticleSystem>::operator->(this_00);
            (**(code**)(*plVar2 + 16))(plVar2, param_1, param_2, param_3, param_4);
        }
        this_01 = (shared_ptr<ModularParticleSystem>*)field_16->HeapBeginPtr();
        psVar3 = (shared_ptr<ModularParticleSystem>*)field_16->end();
        for (; this_01 != psVar3; this_01 = this_01 + 16) {
            this_02 = (ModularParticleSystem*)shared_ptr<ModularParticleSystem>::operator->(this_01);
            plVar2 = (long*)this_02->GetDrawable();
            (**(code**)(*plVar2 + 16))(plVar2, param_1, param_2, param_3, param_4);
        }
    }

    // 0x1008284c0, 160 bytes, placed by class name and debug map
    // DetachedParticleSystemsDrawable::GarbageCollect()
    void DetachedParticleSystemsDrawable::GarbageCollect() {
        undefined8 uVar1;
        undefined8 uVar2;
        shared_ptr* psVar3;
        shared_ptr* psVar4;
        undefined1* puVar5;

        puVar5 = field_16;
        uVar1 = puVar5->HeapBeginPtr();
        uVar2 = puVar5->end();
        psVar3 = eastl::remove_if<shared_ptr<ModularParticleSystem>*,
                                  DetachedParticleSystemsDrawable::GarbageCollect()::__7>(uVar1, uVar2);
        psVar4 = (shared_ptr*)puVar5->end();
        puVar5->erase(psVar3, psVar4);
        puVar5 = field_312;
        uVar1 = puVar5->HeapBeginPtr();
        uVar2 = puVar5->end();
        psVar3 = eastl::remove_if<shared_ptr<ParticleSystem>*, DetachedParticleSystemsDrawable::GarbageCollect()::__8>(
            uVar1, uVar2);
        psVar4 = (shared_ptr*)puVar5->end();
        puVar5->erase(psVar3, psVar4);
    }

} // namespace jag::graphics
