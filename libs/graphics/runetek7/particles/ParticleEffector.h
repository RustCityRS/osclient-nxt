// libs/graphics/runetek7/particles/ParticleEffector.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ParticleEffector {
    public:
        GetEffectorSource() const;
        GetEffectorTemplate() const;
        GetPosition() const;
        ~ParticleEffector();
        GetForceDirection() const;
        ParticleEffector* operator=(ParticleEffector&&);
        ParticleEffector(ParticleEffector&&);
        ParticleEffector(shared_ptr<ModelParticleSource> const&, ParticleManager*, ParticleSystem*);
        void Initialise(shared_ptr<ModelParticleSource> const&, ParticleManager*, ParticleSystem*);
        MainLogic();
        void UpdatePosition(math::Vector3T<float> const&, math::Matrix33T<float> const&);

        // data members, from how the methods use this: 76 bytes
        char _unknown_0[16];
        undefined8 field_16;       // offset 16
        ParticleManager* field_24; // offset 24
        ParticleSystem* field_32;  // offset 32
        undefined8 field_40;       // offset 40
        undefined8 field_48;       // offset 48
        undefined8 field_56;       // offset 56
        undefined4 field_64;       // offset 64
        undefined4 field_68;       // offset 68
        char _unknown_72[4];
    };

    // 0x1007cd080, 16 bytes, inline, placed by class name and debug map
    // ParticleEffector::GetForceDirection() const
    undefined1* ParticleEffector::GetForceDirection() {
        return (undefined1*)((long)&field_48 + 4);
    }

    // 0x1007f6910, 80 bytes, inline, placed by class name
    // ParticleEffector::operator=(ParticleEffector&&)
    /* ParticleEffector::TEMPNAMEPLACEHOLDERVALUE(ParticleEffector&&) */

    ParticleEffector* ParticleEffector::operator=(ParticleEffector* param_1) {
        ParticleManager* pPVar1;
        undefined4 uVar2;

        shared_ptr<ModelParticleSource>::operator=((shared_ptr<ModelParticleSource>*)this, (shared_ptr*)param_1);
        pPVar1 = param_1->field_24;
        field_16 = param_1->field_16;
        field_24 = pPVar1;
        field_32 = param_1->field_32;
        (&field_40, (Vector3T*)&param_1->field_40)->SetXYZ();
        (((long)&field_48 + 4), (Vector3T*)((long)&param_1->field_48 + 4))->SetXYZ();
        uVar2 = param_1->field_68;
        field_64 = param_1->field_64;
        field_68 = uVar2;
        return this;
    }

    // 0x1007f6c30, 16 bytes, complete-object constructor, inline, placed by class name
    // ParticleEffector::ParticleEffector(ParticleEffector&&): jumps straight to the base-object constructor

    // 0x1007f6c40, 64 bytes, base-object constructor, inline, placed by class name
    // ParticleEffector::ParticleEffector(ParticleEffector&&)
    void ParticleEffector::ParticleEffector(ParticleEffector* param_1) {
        undefined8 uVar1;
        ParticleManager* pPVar2;
        ParticleSystem* pPVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined4 uVar6;

        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        uVar6 = param_1->field_68;
        field_64 = param_1->field_64;
        field_68 = uVar6;
        uVar1 = param_1->field_16;
        pPVar2 = param_1->field_24;
        pPVar3 = param_1->field_32;
        uVar4 = param_1->field_40;
        uVar5 = param_1->field_56;
        field_48 = param_1->field_48;
        field_56 = uVar5;
        field_32 = pPVar3;
        field_40 = uVar4;
        field_16 = uVar1;
        field_24 = pPVar2;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1007cd8d0, 32 bytes, inline, placed by debug map only (low confidence)
    // ColourStorage8888<RGBA8StorageLayout>::Set(unsigned char, unsigned char, unsigned char, unsigned char)
    void ColourStorage8888<RGBA8StorageLayout>::Set(uchar param_1, uchar param_2, uchar param_3, uchar param_4) {
        this[3] = (ColourStorage8888<RGBA8StorageLayout>)param_1;
        this[2] = (ColourStorage8888<RGBA8StorageLayout>)param_2;
        this[1] = (ColourStorage8888<RGBA8StorageLayout>)param_3;
        *this = (ColourStorage8888<RGBA8StorageLayout>)param_4;
    }

    // 0x1007ce110, 112 bytes, inline, placed by debug map only (low confidence)
    // FRandMT(float, float)
    void FRandMT(float param_1, float param_2) {
        mersenne_twister_engine* pmVar1;
        param_type local_28[8];

        if (param_2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("min <= max",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/Random.h", 152,
                      (char*)0);
        }
        pmVar1 = (mersenne_twister_engine*)getMersenneTwistorEngine();
        std::uniform_real_distribution<float>::param_type::param_type(local_28, param_1, param_2);
        std::uniform_real_distribution<float>::operator()(pmVar1, local_28);
    }

    // 0x1007ce180, 112 bytes, inline, placed by debug map only (low confidence)
    // IRandMT(int, int)
    void IRandMT(int param_1, int param_2) {
        mersenne_twister_engine* pmVar1;
        undefined1 local_30[8];

        if (param_2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("min <= max",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/Random.h", 137,
                      (char*)0);
        }
        pmVar1 = (mersenne_twister_engine*)getMersenneTwistorEngine();
        new (local_30) oldscape::sidebars::SideBarData(param_1, param_2);
        std::uniform_int_distribution<int>::operator()((uniform_int_distribution<int>*)&Random::uniformIntDistribution,
                                                       pmVar1, (param_type*)local_30);
    }

} // namespace jag::math
