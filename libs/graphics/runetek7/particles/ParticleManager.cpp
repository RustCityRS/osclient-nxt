// libs/graphics/runetek7/particles/ParticleManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ParticleManager.h"
#include "libs/graphics/runetek7/particles/modules/FlowModule.h"

namespace jag::graphics {
    // 0x100f43880
    int32_t ParticleManager::m_freezeUpdates = 0;

    // 0x100f43884
    float ParticleManager::m_updateSpeedMultiplier = 1.0f;

    // 0x100f44138
    int32_t ParticleManager::m_enableMetrics[3] = {1, 0, 0};

    // 0x1001d2010: ParticleManager::GetHeightProvider() has the same machine code as oldscape::rseven::OSRenderCore_TextureDataProvider::GetSpritesArchive() const

    // 0x1004491a0: ParticleManager::GetMetrics() const has the same machine code as game::CombinedLocationSection::GetHighlightState()

    // 0x10079a220: ParticleManager::Metrics::Metrics() has the same machine code as ImGuiTabBarSection::ImGuiTabBarSection()

    // 0x10079a220: TextureAtlasTextureMapping::TextureAtlasTextureMapping() has the same machine code as ImGuiTabBarSection::ImGuiTabBarSection()

    // 0x10079a850: ParticleManager::Metrics::Metrics() has the same machine code as ImGuiTabBarSection::ImGuiTabBarSection()

    // 0x1007ce1f0
    ParticleManager::ParticleManager(IConfigProvider* iConfigProvider, int arg2, ThreadPool* threadPool)
        : field_0(iConfigProvider), m_pHeightProvider(nullptr), field_152(0), field_184(0), field_304(threadPool) {
        if (threadPool == nullptr) {
            LogAssert("pThreadPool",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleManager.cpp",
                      70, nullptr);
        }
        if (iConfigProvider == nullptr) {
            LogAssert("configProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleManager.cpp",
                      71, nullptr);
        }
        if (0 < arg2) {
            field_216.reserve((long)arg2);
            field_248.reserve((long)arg2);
        }
        particlemodules::Noise::PrecalculateNoise();
    }

    // 0x1007ce580
    ParticleManager::~ParticleManager() {
        if (field_280.empty() == '\0') {
            LogAssert("m_pendingUpdateTasks.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleManager.cpp",
                      84, nullptr);
        }
        Destroy();
        field_280.~vector();
        field_248.~vector();
        field_216.~vector();
        field_192.~Array();
        field_160.~Array();
        field_8.~ParticleRawLoader();
    }

    // 0x1007ce690
    void ParticleManager::Destroy() {
        DestroyRenderingResources();
        field_8.Destruct();
        field_96 = 0;
    }

    // 0x1007ce6d0
    void ParticleManager::Initialise(Js5ResourceProvider* js5ResourceProvider,
                                     const Js5ArchiveSettings* js5ArchiveSettings1,
                                     const Js5ArchiveSettings* js5ArchiveSettings2,
                                     const MaterialManager* materialManager, int arg5, int arg6) {
        uint32_t in_register_00000084;
        unsigned int in_stack_00000008;
        uint8_t local_70[72];

        *(unsigned long*)&js5ResourceProvider->field_96 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg5);
        js5ResourceProvider->field_8->Initialise(js5ArchiveSettings1, js5ArchiveSettings2, arg6, in_stack_00000008);
        js5ResourceProvider->field_112.reserve(512);
        new (local_70) ConfigDecoderInfo();
        Js5ResourceProvider* local_28 = js5ResourceProvider;
        (*((local_70 + 8))) = local_28;
        (**(void (**)(...))(js5ResourceProvider->_vptr->_dtor + 16))(js5ResourceProvider->_vptr, materialManager,
                                                                     (ConfigDecoderInfo*)local_70);
        CreateRenderingResources((ParticleManager*)js5ResourceProvider);
    }

    // 0x1007ce7c0
    void ParticleManager::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_30;

        auto plVar1 = field_216.HeapBeginPtr();
        auto plVar2 = field_216.end();
        while (true) {
            if (plVar1 == plVar2) {
                return;
            }
            if (*plVar1 == 0)
                break;
            plVar1 = plVar1 + 1;
        }
        LogAssert("pSystem",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/particles/"
                  "ParticleManager.cpp",
                  136, nullptr);
    }

    // 0x1007ce860
    void ParticleManager::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_30;

        auto plVar1 = field_216.HeapBeginPtr();
        auto plVar2 = field_216.end();
        while (true) {
            if (plVar1 == plVar2) {
                return;
            }
            if (*plVar1 == 0)
                break;
            (*plVar1)->DestroyRenderingResources();
            plVar1 = plVar1 + 1;
        }
        LogAssert("pSystem",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/particles/"
                  "ParticleManager.cpp",
                  147, nullptr);
    }

    // 0x1007ce970
    void ParticleManager::WaitForParticleSystemUpdate() {
        future<void>* this_00;

        uint64_t local_38 = field_280.begin();
        uint64_t local_30 = field_280.end();
        bool bVar1 = &local_38 != &local_30;
        if (bVar1) {
            do {
                this_00 = (future<void>*)*local_38;
                if (this_00->valid() != '\0') {
                    this_00->wait();
                }
                ++local_38;
                bVar1 = &local_38 != &local_30;
            } while (bVar1);
        }
        std::vector<std::future<void>>::clear();
    }

    // 0x1007cea90
    void ParticleManager::UpdateParticleSystems(float arg1) {
        uint8_t* this_00;
        uint8_t* this_01;
        unsigned long arg2;
        uint32_t uVar2;
        Logger* pLVar3;
        unsigned long* puVar4;
        shared_ptr<ModularParticleSystem>* psVar5;
        shared_ptr<ModularParticleSystem>* modularParticleSystem2;
        uint8_t auVar6[16];
        unsigned long local_48[2];
        float local_34;

        if (*PTR_m_freezeUpdates_100ee69c0 == '\0') {
            local_34 = arg1 * *(float*)PTR_m_updateSpeedMultiplier_100ee69c8;
            if (field_160.empty()) {
                if (field_192.empty()) {
                    if (field_8.MainLogic()) {
                        if (field_96->MaterialsReady()) {
                            LoadEmitters();
                            LoadEffectors();
                            field_8.Destruct();
                            pLVar3 = logger::default_logger();
                            uVar2 = field_160.end();
                            pLVar3->Log(false, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/particles/ParticleManager.cpp",
                                        190, "ParticleManager: Loaded %u particle emitter templates from pack!", uVar2);
                            pLVar3 = logger::default_logger();
                            uVar2 = field_192.end();
                            pLVar3->Log(false, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/particles/ParticleManager.cpp",
                                        191, "ParticleManager: Loaded %u particle effector templates from pack!",
                                        uVar2);
                        }
                    }
                }
            }
            local_48[0] = field_304->GetNumberOfThreads();
            local_48[1] = 4;
            puVar4 = std::max<unsigned long>(*local_48, *(local_48 + 1));
            arg2 = *puVar4;
            this_00 = &field_280;
            this_00->reserve(arg2 * 2);
            (anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<ParticleSystem*>>(
                (vector<std::future<void>, std::allocator<std::future<void> _> _>*)this_00, arg2,
                (vector<ParticleSystem*>*)&field_216, field_304, local_34);
            this_01 = &field_248;
            psVar5 = (shared_ptr<ModularParticleSystem>*)this_01->HeapBeginPtr();
            auVar6 = this_01->end();
            psVar5 = eastl::remove_if<shared_ptr<ModularParticleSystem>*, float->UpdateParticleSystems()::__4>(
                psVar5, auVar6._0_8_, auVar6._8_8_);
            modularParticleSystem2 = (shared_ptr<ModularParticleSystem>*)this_01->end();
            this_01->erase(psVar5, modularParticleSystem2);
            (anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<ModularParticleSystem>>>(
                (vector<std::future<void>, std::allocator<std::future<void> _> _>*)this_00, arg2,
                (vector<shared_ptr<ModularParticleSystem>>*)this_01, field_304, local_34);
            WaitForParticleSystemUpdate();
            UpdateMetrics();
        }
    }

    // 0x1007cec80
    void ParticleManager::LoadEmitters() {
        ParticleEmitterRaw* particleEmitterRaw;
        unsigned long arg1;

        field_152 = field_8.capacity();
        auto this_00 = field_8.GetDefaultValue();
        field_160.set_max_size((unsigned long)field_152, 0);
        if (field_152 != 0) {
            arg1 = 0;
            do {
                particleEmitterRaw = (ParticleEmitterRaw*)(*this_00)[arg1];
                ((ParticleEmitterTemplate*)field_160[arg1])->Initialise((int)arg1, *particleEmitterRaw);
                arg1 = arg1 + 1;
            } while (arg1 < field_152);
        }
    }

    // 0x1007ced30
    void ParticleManager::LoadEffectors() {
        ParticleEffectorRaw* particleEffectorRaw;
        unsigned long arg1;

        unsigned int uVar1 = field_8.GetTint();
        auto this_00 = field_8.GetDevCredentialsOutputDirectory();
        field_192.set_max_size((unsigned long)uVar1, 0);
        if (uVar1 != 0) {
            arg1 = 0;
            do {
                particleEffectorRaw = (ParticleEffectorRaw*)(*this_00)[arg1];
                ((ParticleEffectorTemplate*)field_192[arg1])->Initialise((int)arg1, *particleEffectorRaw);
                arg1 = arg1 + 1;
            } while (uVar1 != arg1);
        }
    }

    // 0x1007cf1c0
    void ParticleManager::UpdateMetrics() {
        uint8_t* this_00;
        uint8_t* this_01;
        uint16_t uVar1;
        short sVar2;
        int iVar3;
        uint64_t* puVar4;
        uint64_t* puVar5;
        shared_ptr<ModularParticleSystem>* this_02;
        shared_ptr<ModularParticleSystem>* psVar6;
        RT7Core* pRVar7;
        Layout* pLVar8;
        Layout* this_05;

        if (*PTR_m_enableMetrics_100ee69b8 != '\0') {
            this_00 = &field_216;
            uVar1 = this_00->size();
            m_metrics = uVar1;
            this_01 = &field_248;
            uVar1 = this_01->size();
            field_314 = uVar1;
            field_316 = 0;
            field_318 = 0;
            field_320 = 0;
            puVar4 = (uint64_t*)this_00->HeapBeginPtr();
            puVar5 = (uint64_t*)this_00->end();
            for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
                iVar3 = (*puVar4)->GetParticleCount();
                field_320 = field_320 + iVar3;
            }
            this_02 = (shared_ptr<ModularParticleSystem>*)this_01->HeapBeginPtr();
            psVar6 = (shared_ptr<ModularParticleSystem>*)this_01->end();
            for (; this_02 != psVar6; this_02 = this_02 + 16) {
                iVar3 = ((ModularParticleSystem*)(*this_02).operator->())->GetParticleCount();
                field_320 = field_320 + iVar3;
                pRVar7 = (RT7Core*)(*this_02).operator->();
                sVar2 = ((vector<ModularParticleEmitter, eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>*)
                             pRVar7->GetImmediateThreadPool())
                            ->size();
                field_316 = field_316 + sVar2;
                pRVar7 = (RT7Core*)(*this_02).operator->();
                pLVar8 = (Layout*)pRVar7->GetImmediateThreadPool();
                this_05 = (Layout*)pLVar8->HeapBeginPtr();
                pLVar8 = (Layout*)pLVar8->end();
                for (; this_05 != pLVar8; this_05 = this_05 + 320) {
                    pRVar7 = (RT7Core*)this_05->HeapBeginPtr();
                    sVar2 = ((vector<eastl::pair<int, int>>*)pRVar7->GetImmediateThreadPool())->size();
                    field_318 = field_318 + sVar2;
                }
            }
        }
    }

    // 0x1007cf350
    uint8_t* ParticleManager::GetModularParticleSystemTemplate(int arg1) const {
        if (GetModularParticleSystemTemplate(int)::missing == '\0') {
            if (___cxa_guard_acquire(&GetModularParticleSystemTemplate(int)::missing) != 0) {
                new ((shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>*)&GetModularParticleSystemTemplate(
                    int)::missing) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5388, &GetModularParticleSystemTemplate(int)::missing, 4294967296);
                ___cxa_guard_release(&GetModularParticleSystemTemplate(int)::missing);
            }
        }
        long lVar2 = eastl::vector_map<int, shared_ptr<AnimationStateMachineProvider>>::find(field_112);
        long lVar3 = field_112.end();
        uint8_t* puVar4 = &GetModularParticleSystemTemplate(int)::missing;
        if (lVar2 != lVar3) {
            puVar4 = (uint8_t*)(lVar2 + 8);
        }
        return puVar4;
    }

    // 0x1007cf400
    void ParticleManager::FlushModularParticleSystems() {
        if (field_280.empty() == '\0') {
            LogAssert("m_pendingUpdateTasks.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleManager.cpp",
                      224, nullptr);
        }
        field_248.clear();
    }

    // 0x1007cf450
    void ParticleManager::RegisterSystem(ParticleSystem* particleSystem) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        uint8_t* this_00;

        ParticleSystem* local_20 = particleSystem;
        if (particleSystem == nullptr) {
            LogAssert("pSystem",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleManager.cpp",
                      230, nullptr);
        }
        if (particleSystem != nullptr) {
            this_00 = &field_216;
            ppfVar1 = (function<bool_(int, int, int, int)>**)this_00->HeapBeginPtr();
            ppfVar2 = (function<bool_(int, int, int, int)>**)this_00->end();
            ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
                ppfVar1, ppfVar2, local_20);
            ppfVar2 = (function<bool_(int, int, int, int)>**)this_00->end();
            if (ppfVar1 == ppfVar2) {
                this_00->push_back(local_20);
            }
        }
    }

    // 0x1007cf540
    void ParticleManager::UnregisterSystem(ParticleSystem* particleSystem) {
        function<bool_(int, int, int, int)>** arg1;
        function<bool_(int, int, int, int)>** arg2;
        ParticleSystem** arg1_00;
        ParticleSystem** ppPVar1;
        uint8_t* this_00;

        ParticleSystem* local_20 = particleSystem;
        if (particleSystem == nullptr) {
            LogAssert("pSystem",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleManager.cpp",
                      243, nullptr);
        }
        if (particleSystem != nullptr) {
            this_00 = &field_216;
            arg1 = (function<bool_(int, int, int, int)>**)this_00->HeapBeginPtr();
            arg2 = (function<bool_(int, int, int, int)>**)this_00->end();
            arg1_00 = (ParticleSystem**)
                eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
                    arg1, arg2, local_20);
            ppPVar1 = (ParticleSystem**)this_00->end();
            if (arg1_00 != ppPVar1) {
                this_00->erase_unsorted(arg1_00);
            }
        }
    }

    // 0x1007cf630
    auto ParticleManager::RegisterSystem(const shared_ptr<VFXAttachmentInfo>& vfxAttachmentInfo) {
        uint32_t uVar3;
        Logger* pLVar5;
        ReturnValue local_40;

        if (!vfxAttachmentInfo != nullptr) {
            LogAssert("attachmentInfo != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleManager.cpp",
                      256, nullptr);
        }
        auto pCVar4 = vfxAttachmentInfo.operator->();
        int arg1 = pCVar4->GetX();
        auto this_00 = GetModularParticleSystemTemplate(arg1);
        if (!(shared_ptr::operator_cast_to_bool(this_00))) {
            pLVar5 = logger::default_logger();
            pCVar4 = (CoordMapSquare*)vfxAttachmentInfo.operator->();
            uVar3 = pCVar4->GetX();
            pLVar5->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "particles/ParticleManager.cpp",
                        276, "Missing particle system template %u", uVar3);
            auto result;
        } else {
            make_shared<ModularParticleSystem, shared_ptr<ModularParticleSystemTemplate> const&,
                        shared_ptr<VFXAttachmentInfo> const&>(
                &local_40, (shared_ptr<ModularParticleSystemTemplate>*)this_00, vfxAttachmentInfo);
            if (!(((ModularParticleSystem*)local_40.operator->())->InitEmitters())) {
                pLVar5 = logger::default_logger();
                pCVar4 = (CoordMapSquare*)vfxAttachmentInfo.operator->();
                uVar3 = pCVar4->GetX();
                pLVar5->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "particles/ParticleManager.cpp",
                            270, "Could not initialise particle system using template %u", uVar3);
                new (&result) shared_ptr();
            } else {
                field_248.push_back(local_40);
                result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
            }
        }
        return result;
    }

    // 0x1007cfd60
    void ParticleManager::RegisterTweaks(tweak::ContainerGroup& containerGroup) {
        uint64_t* puVar3;
        Container_vtbl* local_58[4];
        shared_ptr<tweak::Container> local_38;

        new (local_58) eastl::string("Particles");
        (containerGroup._vptr[7].Clear)(&local_38, containerGroup, (eastl::string*)local_58);
        auto pCVar1 = local_38.operator->();
        pCVar1->AddCheckBox("Enable frame interpolation", *PTR_m_enableFrameInterpolation_100ee6a68);
        pCVar1 = (Container*)local_38.operator->();
        pCVar1->AddCheckBox("Enable metrics ", *PTR_m_enableMetrics_100ee69b8);
        pCVar1 = (Container*)local_38.operator->();
        pCVar1->AddCheckBox("Freeze updates", *PTR_m_freezeUpdates_100ee69c0);
        pCVar1 = (Container*)local_38.operator->();
        local_58[0] = (Container_vtbl*)PTR_m_updateSpeedMultiplier_100ee69c8;
        pCVar1->AddSlider<float>("Speed Multiplier", 0.01, 5.0, 0.01, *local_58);
        pCVar1 = (Container*)local_38.operator->();
        local_58[0] = (Container_vtbl*)PTR_m_particleCountMultiplier_100ee69d8;
        pCVar1->AddSlider<float>("Spawn Multiplier", 0.01, 2.0, 0.01, *local_58);
        auto pcVar2 = local_38.operator->();
        local_58->AddGroup(pcVar2);
        array<char const*, 11ul>* paVar4 = (array<char const*, 11ul>*)0;
        do {
            pCVar1 = (Container*)(*local_58).operator->();
            puVar3 = (uint64_t*)(*paVar4)[(unsigned long)pcVar2];
            pcVar2 = (char*)*puVar3;
            pCVar1->AddCheckBox(pcVar2, *((paVar4 + 4355511161)));
            paVar4 = paVar4 + 1;
        } while (paVar4 != (array<char const*, 11ul>*)11);
        pcVar2 = (char*)local_38.operator->();
        local_68.AddGroup(pcVar2);
        paVar4 = (array<char const*, 11ul>*)0;
        do {
            pCVar1 = (Container*)local_68.operator->();
            puVar3 = (uint64_t*)(*paVar4)[(unsigned long)pcVar2];
            pcVar2 = (char*)*puVar3;
            pCVar1->AddCheckBox(pcVar2, *((paVar4 + 4355511172)));
            paVar4 = paVar4 + 1;
        } while (paVar4 != (array<char const*, 11ul>*)11);
    }

} // namespace jag::graphics

namespace jag::graphics::particlemodules {
    // 0x1039bd390
    std::array<double, _262144ul> Noise::NOISE_TABLE;

    // 0x1007ce480
    void Noise::PrecalculateNoise() {
        WrapArray<double> local_20;

        local_20.WrapArray<std::array<double, 262144ul>>(NOISE_TABLE);
        math::GenerateSummedGradientNoise3d(&local_20, 64, 1.0, 1.0, 0.5, 8, 3);
        double* pdVar1 = (double*)std::array<double, 262144ul>::begin();
        double* pdVar2 = (double*)std::array<double, 262144ul>::end();
        for (; pdVar1 != pdVar2; pdVar1 = pdVar1 + 1) {
            *pdVar1 = *pdVar1 * 0.5 + 0.5;
        }
    }

} // namespace jag::graphics::particlemodules
