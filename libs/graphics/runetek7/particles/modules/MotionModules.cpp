// libs/graphics/runetek7/particles/modules/MotionModules.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#include "MotionModules.h"

namespace jag::graphics {
    namespace {
        // 0x1007cee50
        void UpdateParticleSystemsImpl<eastl::vector<ParticleSystem*>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>& futures, unsigned long arg2,
            eastl::vector<ParticleSystem*>& particleSystems, ThreadPool& threadPool, float arg5) {
            unsigned long uVar1;
            unsigned long* puVar3;
            uint64_t* puVar4;
            unsigned long uVar5;
            unsigned long uVar6;
            unsigned long arg1;
            vector<ParticleSystem*>* local_70;
            float local_68;
            unsigned long local_60;
            unsigned long local_58;
            ReturnValue local_40;

            unsigned long uVar2 = particleSystems.size();
            if (uVar2 != 0) {
                arg1 = 0;
                local_70 = (vector<ParticleSystem*>*)((uVar2 - 1) / arg2);
                local_40 = (ReturnValue)1;
                puVar3 = std::max<unsigned long>(local_70, local_40);
                uVar1 = *puVar3;
                local_70 = (vector<ParticleSystem*>*)(uVar2 - 1);
                puVar3 = std::min<unsigned long>(arg2, local_70);
                uVar6 = *puVar3;
                if (uVar6 != 0) {
                    uVar5 = 0;
                    do {
                        arg1 = uVar5 + uVar1;
                        if (uVar2 <= arg1) {
                            LogAssert("indexMax < systemCount",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/particles/ParticleManager.cpp",
                                      42, nullptr);
                        }
                        local_70 = particleSystems;
                        local_68 = arg5;
                        local_60 = uVar5;
                        local_58 = arg1;
                        ThreadPool::AddTask<UpdateParticleSystemsImpl<eastl::vector<ParticleSystem*>>(
                            std::vector<std::future<void>>&, unsigned long, eastl::vector<ParticleSystem*>&,
                            ThreadPool&, float)::_lambda() _1_>(&local_40, (char*)threadPool,
                                                                (vector<ParticleSystem*>*)&local_70);
                        futures.push_back(local_40);
                        uVar6 = uVar6 - 1;
                        uVar5 = arg1;
                    } while (uVar6 != 0);
                }
                if (arg1 < uVar2) {
                    do {
                        puVar4 = &particleSystems[arg1];
                        (*puVar4)->Update(arg5);
                        arg1 = arg1 + 1;
                    } while (uVar2 != arg1);
                }
            }
        }

        // 0x1007cf060
        void UpdateParticleSystemsImpl<eastl::vector<shared_ptr<ModularParticleSystem>>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>& futures, unsigned long arg2,
            eastl::vector<shared_ptr<ModularParticleSystem>>& modularParticleSystems, ThreadPool& threadPool,
            float arg5) {
            unsigned long uVar1;
            unsigned long* puVar3;
            shared_ptr<ModularParticleSystem>* this_00;
            unsigned long uVar4;
            unsigned long uVar5;
            unsigned long arg1;
            vector<shared_ptr<ModularParticleSystem>>* local_70;
            float local_68;
            unsigned long local_60;
            unsigned long local_58;
            ReturnValue local_40;

            unsigned long uVar2 = modularParticleSystems.size();
            if (uVar2 != 0) {
                arg1 = 0;
                local_70 = (vector<shared_ptr<ModularParticleSystem>>*)((uVar2 - 1) / arg2);
                local_40 = (ReturnValue)1;
                puVar3 = std::max<unsigned long>(local_70, local_40);
                uVar1 = *puVar3;
                local_70 = (vector<shared_ptr<ModularParticleSystem>>*)(uVar2 - 1);
                puVar3 = std::min<unsigned long>(arg2, local_70);
                uVar5 = *puVar3;
                if (uVar5 != 0) {
                    uVar4 = 0;
                    do {
                        arg1 = uVar4 + uVar1;
                        if (uVar2 <= arg1) {
                            LogAssert("indexMax < systemCount",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/particles/ParticleManager.cpp",
                                      42, nullptr);
                        }
                        local_70 = modularParticleSystems;
                        local_68 = arg5;
                        local_60 = uVar4;
                        local_58 = arg1;
                        ThreadPool::AddTask<UpdateParticleSystemsImpl<eastl::vector<shared_ptr<ModularParticleSystem>>>(
                            std::vector<std::future<void>>&, unsigned long,
                            eastl::vector<shared_ptr<ModularParticleSystem>>&, ThreadPool&, float)::_lambda() _1_>(
                            &local_40, (char*)threadPool, (vector<shared_ptr<ModularParticleSystem>>*)&local_70);
                        futures.push_back(local_40);
                        uVar5 = uVar5 - 1;
                        uVar4 = arg1;
                    } while (uVar5 != 0);
                }
                if (arg1 < uVar2) {
                    do {
                        this_00 = &modularParticleSystems[arg1];
                        ((ModularParticleSystem*)(*this_00).operator->())->Update(arg5);
                        arg1 = arg1 + 1;
                    } while (uVar2 != arg1);
                }
            }
        }

    } // namespace

} // namespace jag::graphics

namespace jag {
    // 0x1007cf7b0
    shared_ptr_if_not_array<graphics::ModularParticleSystem>::type
    make_shared<graphics::ModularParticleSystem, shared_ptr<graphics::ModularParticleSystemTemplate> const&,
                shared_ptr<graphics::VFXAttachmentInfo> const&>(
        const shared_ptr<graphics::ModularParticleSystemTemplate>& modularParticleSystemTemplate,
        const shared_ptr<graphics::VFXAttachmentInfo>& vfxAttachmentInfo) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        ModularParticleSystem* local_38[2];

        auto arg1 = aligned_alloc(1744, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::ModularParticleSystem>::type result;
        } else {
            local_38[0] = placement_new<graphics::ModularParticleSystem,
                                        shared_ptr<graphics::ModularParticleSystemTemplate> const&,
                                        shared_ptr<graphics::VFXAttachmentInfo> const&>(
                (void*)((long)arg1 + 32), modularParticleSystemTemplate, vfxAttachmentInfo);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::ModularParticleSystem>, int,
                              graphics::ModularParticleSystem*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag
