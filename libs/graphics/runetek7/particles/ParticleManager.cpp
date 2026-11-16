// libs/graphics/runetek7/particles/ParticleManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ParticleManager.h"
#include "libs/graphics/runetek7/particles/modules/FlowModule.h"

namespace jag::graphics {
    // 0x100f43880, 4 bytes, __data
    ParticleManager::m_freezeUpdates = 0;

    // 0x100f43884, 4 bytes, __data
    float ParticleManager::m_updateSpeedMultiplier = 1.0f;

    // 0x100f44138, 12 bytes, __data
    ParticleManager::m_enableMetrics = {1, 0, 0};

    // 0x1001d2010: the linker folded this into oldscape::rseven::OSRenderCore_TextureDataProvider::GetSpritesArchive() const, which has identical code
    ParticleManagerHeightProvider* ParticleManager::GetHeightProvider();

    // 0x1004491a0: the linker folded this into game::CombinedLocationSection::GetHighlightState(), which has identical code
    ParticleManager::GetMetrics() const;

    // 0x10079a220: the linker folded this into ImGuiTabBarSection::ImGuiTabBarSection(), which has identical code
    ParticleManager::Metrics::Metrics();

    // 0x10079a220: the linker folded this into ImGuiTabBarSection::ImGuiTabBarSection(), which has identical code
    TextureAtlasTextureMapping::TextureAtlasTextureMapping();

    // 0x10079a850: the linker folded this into ImGuiTabBarSection::ImGuiTabBarSection(), which has identical code
    ParticleManager::Metrics::Metrics();

    // 0x1007ce1f0, 432 bytes, base-object constructor, placed by class name and debug map
    // ParticleManager::ParticleManager(IConfigProvider*, int, ThreadPool*)
    void ParticleManager::ParticleManager(IConfigProvider* param_1, int param_2, ThreadPool* param_3) {
        field_0 = param_1;
        new (&field_8) ParticleRawLoader();
        m_pHeightProvider = (ParticleManagerHeightProvider*)0;
        new (&field_112) eastl::vector_map<
            int, shared_ptr<ModularParticleSystemTemplate>, eastl::less<int>, eastl::allocator,
            eastl::vector<eastl::pair<int, shared_ptr<ModularParticleSystemTemplate>>, eastl::allocator>>();
        field_152 = 0;
        new (&field_160) Array<ParticleEmitterTemplate, eastl::allocator>();
        field_184 = 0;
        new (&field_192) Array<ParticleEffectorTemplate, eastl::allocator>();
        new (&field_216) eastl::vector<ParticleSystem*, eastl::allocator>();
        new (&field_248) eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>();
        std::vector<std::future<void>, std::allocator<std::future<void>>>::vector();
        field_304 = param_3;
        new (&m_metrics) ImGuiTableColumnSortSpecs();
        if (param_3 == (ThreadPool*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pThreadPool",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleManager.cpp",
                      70, (char*)0);
        }
        if (param_1 == (IConfigProvider*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("configProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleManager.cpp",
                      71, (char*)0);
        }
        if (0 < param_2) {
            (&field_216, (long)param_2)->reserve();
            (&field_248, (long)param_2)->reserve();
        }
        particlemodules::Noise::PrecalculateNoise();
    }

    // 0x1007ce570, 16 bytes, complete-object constructor, placed by class name
    // ParticleManager::ParticleManager(IConfigProvider*, int, ThreadPool*): jumps straight to the base-object constructor

    // 0x1007ce580, 256 bytes, base-object destructor, placed by class name
    // ParticleManager::~ParticleManager()
    void ParticleManager::~ParticleManager() {
        char cVar1;

        cVar1 = (&field_280)->empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pendingUpdateTasks.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleManager.cpp",
                      84, (char*)0);
        }
        Destroy(this);
        (&field_280)->~vector();
        (&field_248)->~vector();
        (&field_216)->~vector();
        (&field_192)->~Array();
        (&field_160)->~Array();
        (&field_112)->~vector_map();
        (&field_8)->~ParticleRawLoader();
    }

    // 0x1007ce690, 48 bytes, placed by class name
    // ParticleManager::Destroy()
    void ParticleManager::Destroy() {
        DestroyRenderingResources(this);
        (&field_8)->Destruct();
        field_96 = (MaterialManager*)0;
    }

    // 0x1007ce6c0, 16 bytes, complete-object destructor, placed by class name
    // ParticleManager::~ParticleManager(): jumps straight to the base-object destructor

    // 0x1007ce6d0, 160 bytes, placed by class name
    // ParticleManager::Initialise(Js5ResourceProvider*, Js5ArchiveSettings const*, Js5ArchiveSettings const*, MaterialManager const*, int, int)
    void ParticleManager::Initialise(Js5ResourceProvider* param_1, Js5ArchiveSettings* param_2,
                                     Js5ArchiveSettings* param_3, MaterialManager* param_4, int param_5, int param_6) {
        undefined1 local_70[72];
        ParticleManager* local_28;

        field_96 = param_4;
        (&field_8, param_1, param_2, param_5, param_6)->Initialise();
        (&field_112, 512)->reserve();
        new (local_70) ConfigDecoderInfo();
        local_28 = this;
        eastl::function<void(
            unsigned int, unsigned int, unsigned int, unsigned int,
            shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
            Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator> const*)>::
        operator=((function<void(unsigned int, unsigned int, unsigned int, unsigned int,
                                 shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
                                 Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>,
                                       eastl::allocator> const*)>*)(local_70 + 8),
                  (__3*)&local_28);
        (**(code**)(field_0->field_0 + 16))(field_0, param_3, (ConfigDecoderInfo*)local_70);
        CreateRenderingResources(this);
        local_70->~ConfigDecoderInfo();
    }

    // 0x1007ce7c0, 160 bytes, placed by class name
    // ParticleManager::CreateRenderingResources()
    void ParticleManager::CreateRenderingResources() {
        long* plVar1;
        long* plVar2;
        AutoSingleton<ShaderThreadPoolSingleton> local_30[8];

        local_30->~AutoSingleton("Particle_Manager");
        plVar1 = (long*)(&field_216)->HeapBeginPtr();
        plVar2 = (long*)(&field_216)->end();
        while (true) {
            if (plVar1 == plVar2) {
                return;
            }
            if (*plVar1 == 0)
                break;
            plVar1 = plVar1 + 1;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("pSystem",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/particles/"
                  "ParticleManager.cpp",
                  136, (char*)0);
    }

    // 0x1007ce860, 160 bytes, placed by class name
    // ParticleManager::DestroyRenderingResources()
    void ParticleManager::DestroyRenderingResources() {
        long* plVar1;
        long* plVar2;
        AutoSingleton<ShaderThreadPoolSingleton> local_30[8];

        local_30->~AutoSingleton("Particle_Manager");
        plVar1 = (long*)(&field_216)->HeapBeginPtr();
        plVar2 = (long*)(&field_216)->end();
        while (true) {
            if (plVar1 == plVar2) {
                return;
            }
            if (*plVar1 == 0)
                break;
            (*plVar1)->DestroyRenderingResources();
            plVar1 = plVar1 + 1;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("pSystem",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/particles/"
                  "ParticleManager.cpp",
                  147, (char*)0);
    }

    // 0x1007ce970, 160 bytes, placed by class name
    // ParticleManager::WaitForParticleSystemUpdate()
    void ParticleManager::WaitForParticleSystemUpdate() {
        future<void>* this_00;
        bool bVar1;
        undefined1* this_01;
        undefined8 local_38;
        undefined8 local_30;

        this_01 = &field_280;
        local_38 = this_01->begin();
        local_30 = this_01->end();
        bVar1 = std::operator!=((__wrap_iter*)&local_38, (__wrap_iter*)&local_30);
        if (bVar1) {
            do {
                this_00 = (future<void>*)std::__wrap_iter<std::future<void>*>::operator*(
                    (__wrap_iter<std::future<void>*>*)&local_38);
                if (std::future<void>::valid(this_00) != '\0') {
                    std::future<void>::wait();
                }
                std::__wrap_iter<std::future<void>*>::operator++((__wrap_iter<std::future<void>*>*)&local_38);
                bVar1 = std::operator!=((__wrap_iter*)&local_38, (__wrap_iter*)&local_30);
            } while (bVar1);
        }
        this_01->clear();
    }

    // 0x1007cea90, 496 bytes, placed by class name
    // ParticleManager::UpdateParticleSystems(float)
    void ParticleManager::UpdateParticleSystems(float param_1) {
        undefined1* this_00;
        undefined1* this_01;
        ulong uVar1;
        char cVar2;
        undefined4 uVar3;
        undefined8 uVar4;
        ulong* puVar5;
        undefined8 uVar6;
        shared_ptr* psVar7;
        shared_ptr* psVar8;
        ulong local_48[2];
        float local_34;

        if (*PTR_m_freezeUpdates_100ee69c0 == '\0') {
            local_34 = param_1 * *(float*)PTR_m_updateSpeedMultiplier_100ee69c8;
            cVar2 = (&field_160)->empty();
            if (cVar2 != '\0') {
                cVar2 = (&field_192)->empty();
                if (cVar2 != '\0') {
                    cVar2 = (&field_8)->MainLogic();
                    if (cVar2 != '\0') {
                        cVar2 = field_96->MaterialsReady();
                        if (cVar2 != '\0') {
                            LoadEmitters(this);
                            LoadEffectors(this);
                            (&field_8)->Destruct();
                            uVar4 = logger::default_logger();
                            uVar3 = (&field_160)->end();
                            logger::Logger::Log(uVar4, 0, 8,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "graphics/runetek7/particles/ParticleManager.cpp",
                                                190, "ParticleManager: Loaded %u particle emitter templates from pack!",
                                                uVar3);
                            uVar4 = logger::default_logger();
                            uVar3 = (&field_192)->end();
                            logger::Logger::Log(
                                uVar4, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/particles/ParticleManager.cpp",
                                191, "ParticleManager: Loaded %u particle effector templates from pack!", uVar3);
                        }
                    }
                }
            }
            local_48[0] = field_304->GetNumberOfThreads();
            local_48[1] = 4;
            puVar5 = std::max<unsigned long>(local_48, local_48 + 1);
            uVar1 = *puVar5;
            this_00 = &field_280;
            this_00->reserve(uVar1 * 2);
            (anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<ParticleSystem*, eastl::allocator>>(
                (vector*)this_00, uVar1, (vector*)&field_216, field_304, local_34);
            this_01 = &field_248;
            uVar4 = this_01->HeapBeginPtr();
            uVar6 = this_01->end();
            psVar7 =
                eastl::remove_if<shared_ptr<ModularParticleSystem>*, float->UpdateParticleSystems()::__4>(uVar4, uVar6);
            psVar8 = (shared_ptr*)this_01->end();
            this_01->erase(psVar7, psVar8);
            (anonymous namespace)::UpdateParticleSystemsImpl<
                eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator>>(
                (vector*)this_00, uVar1, (vector*)this_01, field_304, local_34);
            WaitForParticleSystemUpdate(this);
            UpdateMetrics(this);
        }
    }

    // 0x1007cec80, 176 bytes, placed by class name
    // ParticleManager::LoadEmitters()
    void ParticleManager::LoadEmitters() {
        uint uVar1;
        Array<ParticleEmitterRaw, eastl::allocator>* this_00;
        ParticleEmitterRaw* pPVar2;
        ParticleEmitterTemplate* this_01;
        ulong uVar3;

        uVar1 = (&field_8)->capacity();
        field_152 = uVar1;
        this_00 = (Array<ParticleEmitterRaw, eastl::allocator>*)(&field_8)->GetDefaultValue();
        (&field_160, (ulong)field_152, 0)->set_max_size();
        if (field_152 != 0) {
            uVar3 = 0;
            do {
                pPVar2 = (ParticleEmitterRaw*)Array<ParticleEmitterRaw, eastl::allocator>::operator[](this_00, uVar3);
                this_01 = (ParticleEmitterTemplate*)Array<ParticleEmitterTemplate, eastl::allocator>::operator[](
                    (Array<ParticleEmitterTemplate, eastl::allocator>*)&field_160, uVar3);
                this_01->Initialise((int)uVar3, pPVar2);
                uVar3 = uVar3 + 1;
            } while (uVar3 < field_152);
        }
    }

    // 0x1007ced30, 144 bytes, placed by class name
    // ParticleManager::LoadEffectors()
    void ParticleManager::LoadEffectors() {
        Array<ParticleEffectorRaw, eastl::allocator>* this_00;
        ParticleEffectorRaw* pPVar1;
        ParticleEffectorTemplate* this_01;
        uint uVar2;
        ulong uVar3;

        uVar2 = (&field_8)->GetTint();
        this_00 = (Array<ParticleEffectorRaw, eastl::allocator>*)(&field_8)->GetDevCredentialsOutputDirectory();
        (&field_192, (ulong)uVar2, 0)->set_max_size();
        if (uVar2 != 0) {
            uVar3 = 0;
            do {
                pPVar1 = (ParticleEffectorRaw*)Array<ParticleEffectorRaw, eastl::allocator>::operator[](this_00, uVar3);
                this_01 = (ParticleEffectorTemplate*)Array<ParticleEffectorTemplate, eastl::allocator>::operator[](
                    (Array<ParticleEffectorTemplate, eastl::allocator>*)&field_192, uVar3);
                this_01->Initialise((int)uVar3, pPVar1);
                uVar3 = uVar3 + 1;
            } while (uVar2 != uVar3);
        }
    }

    // 0x1007cf1c0, 400 bytes, placed by class name
    // ParticleManager::UpdateMetrics()
    void ParticleManager::UpdateMetrics() {
        undefined1* this_00;
        undefined1* this_01;
        undefined2 uVar1;
        short sVar2;
        int iVar3;
        undefined8* puVar4;
        undefined8* puVar5;
        shared_ptr<ModularParticleSystem>* this_02;
        shared_ptr<ModularParticleSystem>* psVar6;
        ModularParticleSystem* this_03;
        RT7Core* pRVar7;
        vector<ModularParticleEmitter, eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*
            this_04;
        Layout* pLVar8;
        Layout* this_05;
        vector<eastl::pair<int, int>, eastl::allocator>* this_06;

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
            puVar4 = (undefined8*)this_00->HeapBeginPtr();
            puVar5 = (undefined8*)this_00->end();
            for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
                iVar3 = (*puVar4)->GetParticleCount();
                field_320 = field_320 + iVar3;
            }
            this_02 = (shared_ptr<ModularParticleSystem>*)this_01->HeapBeginPtr();
            psVar6 = (shared_ptr<ModularParticleSystem>*)this_01->end();
            for (; this_02 != psVar6; this_02 = this_02 + 16) {
                this_03 = (ModularParticleSystem*)shared_ptr<ModularParticleSystem>::operator->(this_02);
                iVar3 = this_03->GetParticleCount();
                field_320 = field_320 + iVar3;
                pRVar7 = (RT7Core*)shared_ptr<ModularParticleSystem>::operator->(this_02);
                this_04 = (vector<ModularParticleEmitter,
                                  eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*)
                              pRVar7->GetImmediateThreadPool();
                sVar2 = eastl::vector<
                    ModularParticleEmitter,
                    eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>::size(this_04);
                field_316 = field_316 + sVar2;
                pRVar7 = (RT7Core*)shared_ptr<ModularParticleSystem>::operator->(this_02);
                pLVar8 = (Layout*)pRVar7->GetImmediateThreadPool();
                this_05 = (Layout*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(pLVar8);
                pLVar8 = (Layout*)pLVar8->end();
                for (; this_05 != pLVar8; this_05 = this_05 + 320) {
                    pRVar7 = (RT7Core*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(this_05);
                    this_06 = (vector<eastl::pair<int, int>, eastl::allocator>*)pRVar7->GetImmediateThreadPool();
                    sVar2 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_06);
                    field_318 = field_318 + sVar2;
                }
            }
        }
    }

    // 0x1007cf350, 176 bytes, placed by class name
    // ParticleManager::GetModularParticleSystemTemplate(int) const
    undefined1* ParticleManager::GetModularParticleSystemTemplate(int param_1) {
        long lVar2;
        long lVar3;
        undefined1* puVar4;
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var5;
        int local_1c;

        p_Var5 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1);
        local_1c = param_1;
        if (GetModularParticleSystemTemplate(int)::missing == '\0') {
            if (___cxa_guard_acquire(&GetModularParticleSystemTemplate(int)::missing) != 0) {
                new (&GetModularParticleSystemTemplate(int)::missing)
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var5);
                ___cxa_atexit(PTR__shared_ptr_100ee5388, &GetModularParticleSystemTemplate(int)::missing, 4294967296);
                ___cxa_guard_release(&GetModularParticleSystemTemplate(int)::missing);
            }
        }
        lVar2 = (&field_112, &local_1c)->find();
        lVar3 = (&field_112)->end();
        puVar4 = &GetModularParticleSystemTemplate(int)::missing;
        if (lVar2 != lVar3) {
            puVar4 = (undefined1*)(lVar2 + 8);
        }
        return puVar4;
    }

    // 0x1007cf400, 80 bytes, placed by class name
    // ParticleManager::FlushModularParticleSystems()
    void ParticleManager::FlushModularParticleSystems() {
        char cVar1;

        cVar1 = (&field_280)->empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pendingUpdateTasks.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleManager.cpp",
                      224, (char*)0);
        }
        (&field_248)->clear();
    }

    // 0x1007cf450, 160 bytes, placed by class name
    // ParticleManager::RegisterSystem(ParticleSystem*)
    void ParticleManager::RegisterSystem(ParticleSystem* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined1* this_00;
        ParticleSystem* local_20;

        local_20 = param_1;
        if (param_1 == (ParticleSystem*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pSystem",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleManager.cpp",
                      230, (char*)0);
        }
        if (param_1 != (ParticleSystem*)0) {
            this_00 = &field_216;
            ppfVar1 = (function**)this_00->HeapBeginPtr();
            ppfVar2 = (function**)this_00->end();
            ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
                ppfVar1, ppfVar2, (function**)&local_20);
            ppfVar2 = (function**)this_00->end();
            if (ppfVar1 == ppfVar2) {
                this_00->push_back(&local_20);
            }
        }
    }

    // 0x1007cf540, 160 bytes, placed by class name
    // ParticleManager::UnregisterSystem(ParticleSystem*)
    void ParticleManager::UnregisterSystem(ParticleSystem* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        ParticleSystem** ppPVar3;
        ParticleSystem** ppPVar4;
        undefined1* this_00;
        ParticleSystem* local_20;

        local_20 = param_1;
        if (param_1 == (ParticleSystem*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pSystem",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleManager.cpp",
                      243, (char*)0);
        }
        if (param_1 != (ParticleSystem*)0) {
            this_00 = &field_216;
            ppfVar1 = (function**)this_00->HeapBeginPtr();
            ppfVar2 = (function**)this_00->end();
            ppPVar3 = (ParticleSystem**)
                eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
                    ppfVar1, ppfVar2, (function**)&local_20);
            ppPVar4 = (ParticleSystem**)this_00->end();
            if (ppPVar3 != ppPVar4) {
                this_00->erase_unsorted(ppPVar3);
            }
        }
    }

    // 0x1007cf630, 384 bytes, placed by class name
    // ParticleManager::RegisterSystem(shared_ptr<VFXAttachmentInfo> const&)
    ParticleManager* ParticleManager::RegisterSystem(shared_ptr* param_1) {
        bool bVar1;
        int iVar3;
        undefined4 uVar4;
        CoordMapSquare* pCVar5;
        shared_ptr* this_00;
        ModularParticleSystem* this_01;
        undefined8 uVar6;
        shared_ptr* in_RDX;
        shared_ptr local_40;

        bVar1 = operator!=(in_RDX, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("attachmentInfo != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleManager.cpp",
                      256, (char*)0);
        }
        pCVar5 = (CoordMapSquare*)shared_ptr<VFXAttachmentInfo>::operator->((shared_ptr<VFXAttachmentInfo>*)in_RDX);
        iVar3 = pCVar5->GetX();
        this_00 = (shared_ptr*)GetModularParticleSystemTemplate((ParticleManager*)param_1, iVar3);
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (bVar1) {
            make_shared<ModularParticleSystem, shared_ptr<ModularParticleSystemTemplate> const&,
                        shared_ptr<VFXAttachmentInfo> const&>((jag*)&local_40, this_00, in_RDX);
            this_01 = (ModularParticleSystem*)shared_ptr<ModularParticleSystem>::operator->(
                (shared_ptr<ModularParticleSystem>*)&local_40);
            if (this_01->InitEmitters() == '\0') {
                uVar6 = logger::default_logger();
                pCVar5 =
                    (CoordMapSquare*)shared_ptr<VFXAttachmentInfo>::operator->((shared_ptr<VFXAttachmentInfo>*)in_RDX);
                uVar4 = pCVar5->GetX();
                logger::Logger::Log(uVar6, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/particles/ParticleManager.cpp",
                                    270, "Could not initialise particle system using template %u", uVar4);
                new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
            } else {
                param_1[15].field_8.push_back(&local_40);
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_40);
            }
            local_40.~shared_ptr();
        } else {
            uVar6 = logger::default_logger();
            pCVar5 = (CoordMapSquare*)shared_ptr<VFXAttachmentInfo>::operator->((shared_ptr<VFXAttachmentInfo>*)in_RDX);
            uVar4 = pCVar5->GetX();
            logger::Logger::Log(uVar6, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/particles/ParticleManager.cpp",
                                276, "Missing particle system template %u", uVar4);
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        return this;
    }

    // 0x1007cfd60, 624 bytes, placed by class name
    // ParticleManager::RegisterTweaks(tweak::ContainerGroup&)
    void ParticleManager::RegisterTweaks(ContainerGroup* param_1) {
        Container* pCVar1;
        char* pcVar2;
        undefined8* puVar3;
        ulong uVar4;
        allocator local_68[16];
        undefined** local_58[4];
        shared_ptr<tweak::Container> local_38[16];

        eastl::allocator::allocator(local_68, "EASTL basic_string");
        new (local_58) eastl::string("Particles", local_68);
        (*(code*)param_1->field_0[30])(local_38, param_1, (eastl::string*)local_58);
        local_58->~basic_string();
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_38);
        pCVar1->AddCheckBox("Enable frame interpolation", PTR_m_enableFrameInterpolation_100ee6a68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_38);
        pCVar1->AddCheckBox("Enable metrics ", PTR_m_enableMetrics_100ee69b8);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_38);
        pCVar1->AddCheckBox("Freeze updates", PTR_m_freezeUpdates_100ee69c0);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_38);
        local_58[0] = (undefined**)PTR_m_updateSpeedMultiplier_100ee69c8;
        tweak::Container::AddSlider<float>(pCVar1, "Speed Multiplier", 0.01, 5.0, 0.01, (float**)local_58);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_38);
        local_58[0] = (undefined**)PTR_m_particleCountMultiplier_100ee69d8;
        tweak::Container::AddSlider<float>(pCVar1, "Spawn Multiplier", 0.01, 2.0, 0.01, (float**)local_58);
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_38);
        local_58->AddGroup(pcVar2);
        uVar4 = 0;
        do {
            pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_58);
            puVar3 = (undefined8*)std::array<char const*, 11ul>::operator[](uVar4);
            pCVar1->AddCheckBox((char*)*puVar3, (bool*)(&particlemodules::Module::m_debugDisabled + uVar4));
            uVar4 = uVar4 + 1;
        } while (uVar4 != 11);
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_38);
        local_68->AddGroup(pcVar2);
        uVar4 = 0;
        do {
            pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_68);
            puVar3 = (undefined8*)std::array<char const*, 11ul>::operator[](uVar4);
            pCVar1->AddCheckBox((char*)*puVar3, (bool*)(&particlemodules::Module::m_debugRender + uVar4));
            uVar4 = uVar4 + 1;
        } while (uVar4 != 11);
        local_68->~shared_ptr();
        local_58->~shared_ptr();
        local_38->~shared_ptr();
    }

} // namespace jag::graphics

namespace jag::graphics::particlemodules {
    // 0x1039bd390, 2097152 bytes, __common; zero-initialised
    Noise::NOISE_TABLE;

    // 0x1007ce480, 144 bytes, placed by neighbouring functions
    // Noise::PrecalculateNoise()
    void Noise::PrecalculateNoise() {
        double* pdVar1;
        double* pdVar2;
        WrapArray<double> local_20[16];

        WrapArray<double>::WrapArray<std::array<double, 262144ul>>(local_20, (array*)&NOISE_TABLE);
        math::GenerateSummedGradientNoise3d(4607182418800017408, 4607182418800017408, 4602678819172646912, local_20, 64,
                                            8, 3);
        pdVar1 = (double*)std::array<double, 262144ul>::begin();
        pdVar2 = (double*)std::array<double, 262144ul>::end();
        for (; pdVar1 != pdVar2; pdVar1 = pdVar1 + 1) {
            *pdVar1 = *pdVar1 * 0.5 + 0.5;
        }
    }

} // namespace jag::graphics::particlemodules
