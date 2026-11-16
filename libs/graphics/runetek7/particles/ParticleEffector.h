// libs/graphics/runetek7/particles/ParticleEffector.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ParticleEffector {
    public:
        void GetEffectorSource() const;
        uint64_t GetEffectorTemplate() const;
        void GetPosition() const;
        ~ParticleEffector();
        uint8_t* GetForceDirection() const;
        ParticleEffector* operator=(ParticleEffector&& particleEffector);
        ParticleEffector(ParticleEffector&& particleEffector);
        ParticleEffector(const shared_ptr<ModelParticleSource>& modelParticleSource, ParticleManager* particleManager,
                         ParticleSystem* particleSystem);
        void Initialise(const shared_ptr<ModelParticleSource>& modelParticleSource, ParticleManager* particleManager,
                        ParticleSystem* particleSystem);
        void MainLogic();
        void UpdatePosition(const math::Vector3T<float>& vector3, const math::Matrix33T<float>& matrix33);

    private:
        uint8_t _unknown_0[16];
        uint64_t m_effectorTemplate;
        ParticleManager* field_24;
        ParticleSystem* field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        uint32_t field_64;
        uint32_t field_68;
        uint8_t _unknown_72[4];
    };

    // 0x1007cd080
    uint8_t* ParticleEffector::GetForceDirection() const {
        return (uint8_t*)((long)&field_48 + 4);
    }

    // 0x1007f6910
    ParticleEffector* ParticleEffector::operator=(ParticleEffector&& particleEffector) {
        *this = particleEffector;
        ParticleManager* pPVar1 = particleEffector.field_24;
        m_effectorTemplate = particleEffector.m_effectorTemplate;
        field_24 = pPVar1;
        field_32 = particleEffector.field_32;
        field_40.SetXYZ(particleEffector.field_40);
        ((Vector4T<float>*)((long)&field_48 + 4))->SetXYZ(*((Vector3T<float>*)((long)&particleEffector.field_48 + 4)));
        uint32_t uVar2 = particleEffector.field_68;
        field_64 = particleEffector.field_64;
        field_68 = uVar2;
        return this;
    }

    // 0x1007f6c40
    ParticleEffector::ParticleEffector(ParticleEffector&& particleEffector) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(particleEffector);
        uint32_t uVar6 = particleEffector.field_68;
        field_64 = particleEffector.field_64;
        field_68 = uVar6;
        uint64_t uVar1 = particleEffector.m_effectorTemplate;
        ParticleManager* pPVar2 = particleEffector.field_24;
        ParticleSystem* pPVar3 = particleEffector.field_32;
        uint64_t uVar4 = particleEffector.field_40;
        uint64_t uVar5 = particleEffector.field_56;
        field_48 = particleEffector.field_48;
        field_56 = uVar5;
        field_32 = pPVar3;
        field_40 = uVar4;
        m_effectorTemplate = uVar1;
        field_24 = pPVar2;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1007cd8d0
    void ColourStorage8888<RGBA8StorageLayout>::Set(unsigned char arg1, unsigned char arg2, unsigned char arg3,
                                                    unsigned char arg4) {
        this[3] = (ColourStorage8888<RGBA8StorageLayout>)arg1;
        this[2] = (ColourStorage8888<RGBA8StorageLayout>)arg2;
        this[1] = (ColourStorage8888<RGBA8StorageLayout>)arg3;
        *this = (ColourStorage8888<RGBA8StorageLayout>)arg4;
    }

    // 0x1007ce110
    void FRandMT(float arg1, float arg2) {
        uniform_real_distribution<float>* uniform_real_distribution;
        param_type* extraout_RDX;

        if (arg2 < arg1) {
            LogAssert("min <= max",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/Random.h", 152,
                      nullptr);
        }
        uniform_real_distribution = (uniform_real_distribution<float>*)getMersenneTwistorEngine();
        param_type local_28(arg1, arg2);
        std::uniform_real_distribution<float>::operator()(uniform_real_distribution, &local_28, extraout_RDX);
    }

    // 0x1007ce180
    void IRandMT(int arg1, int arg2) {
        mersenne_twister_engine<unsigned int, _32ul, _624ul, _397ul, _31ul, _2567483615u, _11ul, _4294967295u, _7ul,
                                _2636928640u, _15ul, _4022730752u, _18ul, _1812433253u>* mersenne_twister_engine;
        uint8_t local_30[8];

        if (arg2 < arg1) {
            LogAssert("min <= max",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/Random.h", 137,
                      nullptr);
        }
        mersenne_twister_engine =
            (mersenne_twister_engine<unsigned int, _32ul, _624ul, _397ul, _31ul, _2567483615u, _11ul, _4294967295u,
                                     _7ul, _2636928640u, _15ul, _4022730752u, _18ul, _1812433253u>*)
                getMersenneTwistorEngine();
        new (local_30) oldscape::sidebars::SideBarData(arg1, arg2);
        std::uniform_int_distribution<int>::operator()((uniform_int_distribution<int>*)&Random::uniformIntDistribution,
                                                       mersenne_twister_engine, (param_type*)local_30);
    }

} // namespace jag::math
