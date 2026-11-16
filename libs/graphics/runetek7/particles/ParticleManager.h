// libs/graphics/runetek7/particles/ParticleManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ParticleManager {
    public:
        class Metrics;
        ParticleManagerHeightProvider* GetHeightProvider();
        GetMetrics() const;
        void SetHeightProvider(ParticleManagerHeightProvider const*);
        void GetEmitterTemplate(unsigned int) const;
        ParticleManager(IConfigProvider*, int, ThreadPool*);
        ~ParticleManager();
        void Destroy();
        void Initialise(Js5ResourceProvider*, Js5ArchiveSettings const*, Js5ArchiveSettings const*,
                        MaterialManager const*, int, int);
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void WaitForParticleSystemUpdate();
        void UpdateParticleSystems(float);
        void LoadEmitters();
        void LoadEffectors();
        void UpdateMetrics();
        GetModularParticleSystemTemplate(int) const;
        void FlushModularParticleSystems();
        void RegisterSystem(ParticleSystem*);
        void UnregisterSystem(ParticleSystem*);
        RegisterSystem(shared_ptr<VFXAttachmentInfo> const&);
        void RegisterTweaks(tweak::ContainerGroup&);
        bool ParticlesReady() const;
        void GetEffectorTemplate(unsigned int) const;
        static /* 4 bytes */ m_freezeUpdates;               // = 0
        static float /* 4 bytes */ m_updateSpeedMultiplier; // = 1.0f
        static /* 12 bytes */ m_enableMetrics;              // = { 1, 0, 0 }

        // data members, from how the methods use this: 384 bytes
        IConfigProvider* field_0; // offset 0
        char _unknown_8[88];
        MaterialManager* field_96;                        // offset 96
        ParticleManagerHeightProvider* m_pHeightProvider; // offset 104
        char _unknown_112[40];
        uint field_152; // offset 152
        char _unknown_156[28];
        undefined4 field_184; // offset 184
        char _unknown_188[116];
        ThreadPool* field_304; // offset 304
        undefined2 m_metrics;  // offset 312
        undefined2 field_314;  // offset 314
        short field_316;       // offset 316
        short field_318;       // offset 318
        int field_320;         // offset 320
        char _unknown_324[60];
    };

    class ParticleManager::Metrics {
    public:
        Metrics();
    };

    class ParticleManagerHeightProvider {
    public:
        ParticleManagerHeightProvider();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    class TextureAtlasTextureMapping {
    public:
        TextureAtlasTextureMapping();
        void Initialise(unsigned int, unsigned int, unsigned int, bool, bool);

        // data members, from how the methods use this: 16 bytes
        uint field_0;  // offset 0
        short field_4; // offset 4
        short field_6; // offset 6
        short field_8; // offset 8
        bool field_10; // offset 10
        char _unknown_11[5];
    };

    // 0x100461280, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ParticleManagerHeightProvider::ParticleManagerHeightProvider()
    void ParticleManagerHeightProvider::ParticleManagerHeightProvider() {
        field_0 = PTR_vtable_100ee88c0 + 16;
    }

    // 0x1004614c0, 16 bytes, inline, placed by class name and debug map
    // ParticleManager::SetHeightProvider(ParticleManagerHeightProvider const*)
    void ParticleManager::SetHeightProvider(ParticleManagerHeightProvider* param_1) {
        m_pHeightProvider = param_1;
    }

    // 0x1007ca2f0, 32 bytes, inline, placed by class name
    // ParticleManager::GetEmitterTemplate(unsigned int) const
    void ParticleManager::GetEmitterTemplate(uint param_1) {
        Array<ParticleEmitterTemplate, eastl::allocator>::operator[](
            (Array<ParticleEmitterTemplate, eastl::allocator>*)&field_160, (ulong)param_1);
    }

    // 0x1007d1be0, 64 bytes, inline, placed by class name
    // ParticleManager::ParticlesReady() const
    bool ParticleManager::ParticlesReady() {
        long lVar1;
        bool bVar2;

        lVar1 = (&field_160)->end();
        if (lVar1 == 0) {
            bVar2 = false;
        } else {
            lVar1 = (&field_192)->end();
            bVar2 = lVar1 != 0;
        }
        return bVar2;
    }

    // 0x1007e5660, 32 bytes, inline, placed by class name
    // ParticleManager::GetEffectorTemplate(unsigned int) const
    void ParticleManager::GetEffectorTemplate(uint param_1) {
        Array<ParticleEffectorTemplate, eastl::allocator>::operator[](
            (Array<ParticleEffectorTemplate, eastl::allocator>*)&field_192, (ulong)param_1);
    }

    // 0x1007ec9e0, 256 bytes, inline, placed by class name
    // ParticleManager::Initialise(Js5ResourceProvider*, Js5ArchiveSettings const*, Js5ArchiveSettings const*, MaterialManager const*, int, int)::$_3::operator()(unsigned int, unsigned int, unsigned int, unsigned int, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&, Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >, eastl::allocator> const*) const
    /* ParticleManager::Initialise(Js5ResourceProvider*, Js5ArchiveSettings
   const*, Js5ArchiveSettings const*, MaterialManager const*, int,
   int)::$_3::TEMPNAMEPLACEHOLDERVALUE(unsigned int, unsigned int, unsigned int, unsigned int,
   shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&,
   Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >,
   eastl::allocator> const*) const */

    void ParticleManager::Initialise(Js5ResourceProvider*, Js5ArchiveSettings_const*, Js5ArchiveSettings_const*,
                                     MaterialManager_const*, int,
                                     int)::$_3::operator()(uint param_1, uint param_2, uint param_3, uint param_4,
                                                           shared_ptr* param_5, Array* param_6) {
        long lVar1;
        char cVar2;
        bool bVar3;
        ModularParticleSystemTemplate* this;
        PacketT* pPVar4;
        shared_ptr<ModularParticleSystemTemplate>* this_00;
        undefined8 uVar5;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_01;
        char* pcVar6;
        undefined4 in_register_00000014;
        undefined4 in_register_0000003c;
        shared_ptr local_40;
        uint local_2c;

        lVar1 = *(long*)CONCAT44(in_register_0000003c, param_1);
        make_shared<ModularParticleSystemTemplate>((jag*)&local_40);
        this = (ModularParticleSystemTemplate*)shared_ptr<ModularParticleSystemTemplate>::operator->(
            (shared_ptr<ModularParticleSystemTemplate>*)&local_40);
        pPVar4 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)CONCAT44(in_register_00000014, param_3));
        cVar2 = LoadFromPacket(pPVar4);
        if (cVar2 == '\0') {
            uVar5 = logger::default_logger();
            bVar3 = shared_ptr::operator_cast_to_bool(&local_40);
            if (bVar3) {
                this_01 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<ModularParticleSystemTemplate>::operator->(
                                  (shared_ptr<ModularParticleSystemTemplate>*)&local_40);
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this_01);
                pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            } else {
                pcVar6 = "<Unknown>";
            }
            logger::Logger::Log(uVar5, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/particles/ParticleManager.cpp",
                                113, "Could not decode VFX %u (%s)", param_2, pcVar6);
        } else {
            local_2c = param_2;
            this_00 = (shared_ptr<ModularParticleSystemTemplate>*)eastl::vector_map<
                int, shared_ptr<ModularParticleSystemTemplate>, eastl::less<int>, eastl::allocator,
                eastl::vector<eastl::pair<int, shared_ptr<ModularParticleSystemTemplate>>, eastl::allocator>>::
            operator[]((vector_map<int, shared_ptr<ModularParticleSystemTemplate>, eastl::less<int>, eastl::allocator,
                                   eastl::vector<eastl::pair<int, shared_ptr<ModularParticleSystemTemplate>>,
                                                 eastl::allocator>>*)(lVar1 + 112),
                       (int*)&local_2c);
            shared_ptr<ModularParticleSystemTemplate>::operator=(this_00, &local_40);
        }
        local_40.~shared_ptr();
    }

    // 0x1007f0230, 48 bytes, inline, placed by class name
    // ParticleManager::UpdateParticleSystems(float)::$_4::operator()(shared_ptr<ModularParticleSystem> const&) const
    /* ParticleManager::UpdateParticleSystems(float)::$_4::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<ModularParticleSystem>
   const&) const */

    undefined4 ParticleManager::UpdateParticleSystems(float)::$_4::operator()(shared_ptr* param_1) {
        ModularParticleSystem* this_00;
        int iVar1;
        undefined4 uVar2;

        iVar1 = use_count();
        uVar2 = 1;
        if (iVar1 != 1) {
            this_00 = (ModularParticleSystem*)shared_ptr<ModularParticleSystem>::operator->(
                (shared_ptr<ModularParticleSystem>*)this);
            uVar2 = this_00->IsFinished();
        }
        return uVar2;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1004614d0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::EquirectangularRenderer>::type make_shared<graphics::EquirectangularRenderer, graphics::RT7Core*&>(graphics::RT7Core*&)
    jag* make_shared<graphics::EquirectangularRenderer, graphics::RT7Core*&>(RT7Core** param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        EquirectangularRenderer* local_30[2];

        pvVar1 = (void*)aligned_alloc(112, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<graphics::EquirectangularRenderer, graphics::RT7Core*&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<graphics::EquirectangularRenderer>, int,
                                   graphics::EquirectangularRenderer*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
