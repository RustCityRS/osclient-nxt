// libs/graphics/runetek7/particles/ParticleManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ParticleManager {
    public:
        class Metrics;
        ParticleManagerHeightProvider* GetHeightProvider();
        uint8_t* GetMetrics() const;
        void SetHeightProvider(const ParticleManagerHeightProvider* particleManagerHeightProvider);
        void GetEmitterTemplate(unsigned int arg1) const;
        ParticleManager(IConfigProvider* iConfigProvider, int arg2, ThreadPool* threadPool);
        ~ParticleManager();
        void Destroy();
        void Initialise(Js5ResourceProvider* js5ResourceProvider, const Js5ArchiveSettings* js5ArchiveSettings1,
                        const Js5ArchiveSettings* js5ArchiveSettings2, const MaterialManager* materialManager, int arg5,
                        int arg6);
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void WaitForParticleSystemUpdate();
        void UpdateParticleSystems(float arg1);
        void LoadEmitters();
        void LoadEffectors();
        void UpdateMetrics();
        uint8_t* GetModularParticleSystemTemplate(int arg1) const;
        void FlushModularParticleSystems();
        void RegisterSystem(ParticleSystem* particleSystem);
        void UnregisterSystem(ParticleSystem* particleSystem);
        auto RegisterSystem(const shared_ptr<VFXAttachmentInfo>& vfxAttachmentInfo);
        void RegisterTweaks(tweak::ContainerGroup& containerGroup);
        bool ParticlesReady() const;
        void GetEffectorTemplate(unsigned int arg1) const;
        static int32_t m_freezeUpdates;       // = 0
        static float m_updateSpeedMultiplier; // = 1.0f
        static int32_t m_enableMetrics[3];    // = { 1, 0, 0 }

    private:
        IConfigProvider* field_0;
        uint8_t _unknown_8[88];
        uint64_t field_96;
        ParticleManagerHeightProvider* m_pHeightProvider;
        int field_112;
        uint8_t _unknown_116[36];
        unsigned int field_152;
        uint8_t _unknown_156[28];
        uint32_t field_184;
        uint8_t _unknown_188[116];
        ThreadPool* field_304;
        uint16_t m_metrics;
        uint16_t field_314;
        short field_316;
        short field_318;
        int field_320;
        uint8_t _unknown_324[60];
    };

    class ParticleManager::Metrics {
    public:
        Metrics();
    };

    class ParticleManagerHeightProvider {
    public:
        ParticleManagerHeightProvider();
    };

    class TextureAtlasTextureMapping {
    public:
        TextureAtlasTextureMapping();
        void Initialise(unsigned int arg1, unsigned int arg2, unsigned int arg3, bool arg4, bool arg5);

    private:
        unsigned int field_0;
        short field_4;
        short field_6;
        short field_8;
        bool field_10;
        uint8_t _unknown_11[5];
    };

    // 0x100461280
    ParticleManagerHeightProvider::ParticleManagerHeightProvider() {
        field_0 = PTR_vtable_100ee88c0 + 16;
    }

    // 0x1004614c0
    void ParticleManager::SetHeightProvider(const ParticleManagerHeightProvider* particleManagerHeightProvider) {
        m_pHeightProvider = particleManagerHeightProvider;
    }

    // 0x1007ca2f0
    void ParticleManager::GetEmitterTemplate(unsigned int arg1) const {
        field_160[(unsigned long)arg1];
    }

    // 0x1007d1be0
    bool ParticleManager::ParticlesReady() const {
        bool bVar2;

        long lVar1 = field_160.end();
        if (lVar1 == 0) {
            bVar2 = false;
        } else {
            lVar1 = field_192.end();
            bVar2 = lVar1 != 0;
        }
        return bVar2;
    }

    // 0x1007e5660
    void ParticleManager::GetEffectorTemplate(unsigned int arg1) const {
        field_192[(unsigned long)arg1];
    }

    // 0x1007ec9e0
    void ParticleManager::Initialise(
        Js5ResourceProvider*, Js5ArchiveSettings const*, Js5ArchiveSettings const*, MaterialManager const*, int,
        int)::$_3::operator()(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                              const shared_ptr<PacketT<Array<unsigned char>>>& arg5,
                              const Array<shared_ptr<PacketT<Array<unsigned char>>>, eastl::allocator>* arg6) const {
        shared_ptr<ModularParticleSystemTemplate>* this_01;
        Logger* this_02;
        char* pcVar3;
        uint32_t in_register_00000014;
        shared_ptr local_40;

        long lVar1 = field_0;
        make_shared<ModularParticleSystemTemplate>((ReturnValue*)&local_40);
        auto this_00 = local_40.operator->();
        auto arg1_00 =
            *(*((shared_ptr<PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2)));
        if (!(this_00->LoadFromPacket(*arg1_00))) {
            this_02 = logger::default_logger();
            if (!(shared_ptr::operator_cast_to_bool(&local_40))) {
                pcVar3 = "<Unknown>";
            } else {
                ((compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)local_40.operator->())
                    ->second();
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            }
            this_02->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "particles/ParticleManager.cpp",
                         113, "Could not decode VFX %u (%s)", arg1, pcVar3);
        } else {
            this_01 = (shared_ptr<ModularParticleSystemTemplate>*)(*((lVar1 + 112)))[arg1];
            *this_01 = local_40;
        }
    }

    // 0x1007f0230
    uint32_t ParticleManager::UpdateParticleSystems(float)::$_4::operator()(
        const shared_ptr<ModularParticleSystem>& modularParticleSystem) const {
        int iVar1 = use_count();
        uint32_t uVar2 = 1;
        if (iVar1 != 1) {
            uVar2 = ((ModularParticleSystem*)(*this).operator->())->IsFinished();
        }
        return uVar2;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1004614d0
    shared_ptr_if_not_array<graphics::EquirectangularRenderer>::type
    make_shared<graphics::EquirectangularRenderer, graphics::RT7Core*&>(graphics::RT7Core*& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        EquirectangularRenderer* local_30[2];

        auto arg1_00 = aligned_alloc(112, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<graphics::EquirectangularRenderer>::type result;
        } else {
            local_30[0] = placement_new<graphics::EquirectangularRenderer, graphics::RT7Core*&>(
                (void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::EquirectangularRenderer>, int,
                              graphics::EquirectangularRenderer*&>(arg1_00, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
