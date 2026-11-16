// libs/graphics/runetek7/particles/modules/MotionModules.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#include "MotionModules.h"

namespace jag::graphics {
    namespace {
        // 0x1007cee50, 352 bytes, inline, placed by debug map only (low confidence)
        // void UpdateParticleSystemsImpl<eastl::vector<ParticleSystem*, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<ParticleSystem*, eastl::allocator>&, ThreadPool&, float)
        /* void graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<ParticleSystem*,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<ParticleSystem*, eastl::allocator>&,
   ThreadPool&, float) */

        void(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<ParticleSystem*, eastl::allocator>>(
            vector* param_1, ulong param_2, vector* param_3, ThreadPool* param_4, float param_5) {
            ulong uVar1;
            ulong uVar2;
            ulong* puVar3;
            undefined8* puVar4;
            ulong uVar5;
            ulong uVar6;
            ulong uVar7;
            vector* local_70;
            float local_68;
            ulong local_60;
            ulong local_58;
            ulong local_50;
            ulong local_40;

            local_50 = param_2;
            uVar2 = param_3->size();
            if (uVar2 != 0) {
                uVar7 = 0;
                local_70 = (vector*)((uVar2 - 1) / local_50);
                local_40 = 1;
                puVar3 = std::max<unsigned long>((ulong*)&local_70, &local_40);
                uVar1 = *puVar3;
                local_70 = (vector*)(uVar2 - 1);
                puVar3 = std::min<unsigned long>(&local_50, (ulong*)&local_70);
                uVar6 = *puVar3;
                if (uVar6 != 0) {
                    uVar5 = 0;
                    do {
                        uVar7 = uVar5 + uVar1;
                        if (uVar2 <= uVar7) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("indexMax < systemCount",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/particles/ParticleManager.cpp",
                                      42, (char*)0);
                        }
                        local_70 = param_3;
                        local_68 = param_5;
                        local_60 = uVar5;
                        local_58 = uVar7;
                        ThreadPool::AddTask<UpdateParticleSystemsImpl<eastl::vector<ParticleSystem*, eastl::allocator>>(
                            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                            eastl::vector<ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::_lambda() _1_>(
                            (ThreadPool*)&local_40, (char*)param_4, (vector*)&local_70);
                        param_1->push_back((future*)&local_40);
                        local_40.~future();
                        uVar6 = uVar6 - 1;
                        uVar5 = uVar7;
                    } while (uVar6 != 0);
                }
                if (uVar7 < uVar2) {
                    do {
                        puVar4 = (undefined8*)eastl::vector<ParticleSystem*, eastl::allocator>::operator[](
                            (vector<ParticleSystem*, eastl::allocator>*)param_3, uVar7);
                        (*puVar4)->Update(param_5);
                        uVar7 = uVar7 + 1;
                    } while (uVar2 != uVar7);
                }
            }
        }

        // 0x1007cf060, 352 bytes, inline, placed by debug map only (low confidence)
        // void UpdateParticleSystemsImpl<eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)
        /* void graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<ModularParticleSystem>,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<shared_ptr<ModularParticleSystem>,
   eastl::allocator>&, ThreadPool&, float) */

        void(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>>(vector* param_1, ulong param_2,
                                                                                vector* param_3, ThreadPool* param_4,
                                                                                float param_5) {
            ulong uVar1;
            ulong uVar2;
            ulong* puVar3;
            shared_ptr<ModularParticleSystem>* this_00;
            ModularParticleSystem* this_01;
            ulong uVar4;
            ulong uVar5;
            ulong uVar6;
            vector* local_70;
            float local_68;
            ulong local_60;
            ulong local_58;
            ulong local_50;
            ulong local_40;

            local_50 = param_2;
            uVar2 = param_3->size();
            if (uVar2 != 0) {
                uVar6 = 0;
                local_70 = (vector*)((uVar2 - 1) / local_50);
                local_40 = 1;
                puVar3 = std::max<unsigned long>((ulong*)&local_70, &local_40);
                uVar1 = *puVar3;
                local_70 = (vector*)(uVar2 - 1);
                puVar3 = std::min<unsigned long>(&local_50, (ulong*)&local_70);
                uVar5 = *puVar3;
                if (uVar5 != 0) {
                    uVar4 = 0;
                    do {
                        uVar6 = uVar4 + uVar1;
                        if (uVar2 <= uVar6) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("indexMax < systemCount",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/particles/ParticleManager.cpp",
                                      42, (char*)0);
                        }
                        local_70 = param_3;
                        local_68 = param_5;
                        local_60 = uVar4;
                        local_58 = uVar6;
                        ThreadPool::AddTask<UpdateParticleSystemsImpl<
                            eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>>(
                            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                            eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>&, ThreadPool&,
                            float)::_lambda() _1_>((ThreadPool*)&local_40, (char*)param_4, (vector*)&local_70);
                        param_1->push_back((future*)&local_40);
                        local_40.~future();
                        uVar5 = uVar5 - 1;
                        uVar4 = uVar6;
                    } while (uVar5 != 0);
                }
                if (uVar6 < uVar2) {
                    do {
                        this_00 = (shared_ptr<ModularParticleSystem>*)
                            eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>::operator[](
                                (vector<shared_ptr<ModularParticleSystem>, eastl::allocator>*)param_3, uVar6);
                        this_01 = (ModularParticleSystem*)shared_ptr<ModularParticleSystem>::operator->(this_00);
                        this_01->Update(param_5);
                        uVar6 = uVar6 + 1;
                    } while (uVar2 != uVar6);
                }
            }
        }

    } // namespace

} // namespace jag::graphics

namespace jag {
    // 0x1007cf7b0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::ModularParticleSystem>::type make_shared<graphics::ModularParticleSystem, shared_ptr<graphics::ModularParticleSystemTemplate> const&, shared_ptr<graphics::VFXAttachmentInfo> const&>(shared_ptr<graphics::ModularParticleSystemTemplate> const&, shared_ptr<graphics::VFXAttachmentInfo> const&)
    jag* jag::make_shared<graphics::ModularParticleSystem, shared_ptr<graphics::ModularParticleSystemTemplate> const&,
                          shared_ptr<graphics::VFXAttachmentInfo> const&>(shared_ptr* param_1, shared_ptr* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        ModularParticleSystem* local_38[2];

        pvVar1 = (void*)aligned_alloc(1744, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_38[0] = placement_new<graphics::ModularParticleSystem,
                                        shared_ptr<graphics::ModularParticleSystemTemplate> const&,
                                        shared_ptr<graphics::VFXAttachmentInfo> const&>((void*)((long)pvVar1 + 32),
                                                                                        param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<graphics::ModularParticleSystem>, int,
                                   graphics::ModularParticleSystem*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag
