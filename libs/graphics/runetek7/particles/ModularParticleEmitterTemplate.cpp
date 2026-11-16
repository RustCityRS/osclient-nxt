// libs/graphics/runetek7/particles/ModularParticleEmitterTemplate.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ModularParticleEmitterTemplate.h"
#include "ModularParticleSystem.h"

namespace jag::graphics {
    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    Callstack ModularParticleEmitterTemplate::GetRenderPassBits() const;

    // 0x1000602b0: the linker folded this into oldscape::widgets::ScrollBarWidget::ThumbIsVisible() const, which has identical code
    bool ModularParticleEmitterTemplate::IsContinuous() const;

    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    ModularParticleEmitterTemplate::GetRenderMode() const;

    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    ModularParticleEmitterTemplate::GetTransform() const;

    // 0x1001be5d0: the linker folded this into SunlightOptions::GetShadowQuality() const, which has identical code
    uint ModularParticleEmitterTemplate::GetMaterialID() const;

    // 0x100414cb0: the linker folded this into math::Transitionable<IrradianceSHCoefConsts>::GetEndValue(), which has identical code
    ModularParticleEmitterTemplate::GetModules() const;

    // 0x100448110: the linker folded this into game::Entity::GetCurrentLOD() const, which has identical code
    uchar ModularParticleEmitterTemplate::GetNumTilesPerRow() const;

    // 0x1004c67a0: the linker folded this into game::WaterType::GetFoamMaterialScale() const, which has identical code
    float ModularParticleEmitterTemplate::GetLifetime() const;

    // 0x1008291d0, 112 bytes, placed by class name and debug map
    // ModularParticleEmitterTemplate::RenderDebug(math::Matrix44T<float>, float) const
    void ModularParticleEmitterTemplate::RenderDebug(Matrix44T param_1, float param_2) {
        undefined8* puVar1;
        undefined8* puVar2;

        puVar1 = (undefined8*)(&m_modules)->HeapBeginPtr();
        puVar2 = (undefined8*)(&m_modules)->end();
        if (puVar1 != puVar2) {
            do {
                (**(code**)(*(long*)*puVar1 + 32))(param_2, (long*)*puVar1, &param_1);
                puVar1 = puVar1 + 1;
            } while (puVar1 != puVar2);
        }
    }

    // 0x100829270, 128 bytes, placed by class name and debug map
    // ModularParticleEmitterTemplate::ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&, ParticleData&) const
    void ModularParticleEmitterTemplate::ProcessTick(float param_1, ParticleModuleUpdateParams* param_2,
                                                     ParticleModuleUpdateState* param_3, ParticleData* param_4) {
        undefined8* puVar1;
        undefined8* puVar2;

        puVar1 = (undefined8*)(&m_modules)->HeapBeginPtr();
        puVar2 = (undefined8*)(&m_modules)->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            (**(code**)(*(long*)*puVar1 + 24))(param_1, (long*)*puVar1, param_2, param_3, param_4);
        }
    }

    // 0x1008292f0, 176 bytes, base-object constructor, placed by class name and debug map
    // ModularParticleEmitterTemplate::ModularParticleEmitterTemplate()
    void ModularParticleEmitterTemplate::ModularParticleEmitterTemplate() {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        field_0 = (ModularParticleSystemTemplate*)0;
        new (m_renderPassBits) callstack::Callstack();
        new ((m_renderPassBits + 8)) eastl::bitset<4ul, unsigned char>();
        new (&field_24) eastl::string();
        m_materialID = 3000;
        m_maxParticles = 1000;
        m_maxActiveParticlesEstimate = 0;
        m_numTiles = '\0';
        m_numTilesPerRow = '\0';
        m_warmupTime = 0.0;
        m_lifetime = 1.0;
        m_continuous = false;
        uVar1 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 8);
        uVar2 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 16);
        uVar3 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 24);
        uVar4 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 32);
        uVar5 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 40);
        uVar6 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 48);
        uVar7 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 56);
        m_transform = *(undefined8*)PTR_IDENTITY_100ee6730;
        field_88 = uVar1;
        field_96 = uVar2;
        field_104 = uVar3;
        field_112 = uVar4;
        field_120 = uVar5;
        field_128 = uVar6;
        field_136 = uVar7;
        new (&m_modules) eastl::fixed_vector<particlemodules::Module*, 1ul, true, eastl::allocator>();
    }

    // 0x1008293b0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ModularParticleEmitterTemplate::ModularParticleEmitterTemplate(): jumps straight to the base-object constructor

    // 0x1008293c0, 224 bytes, placed by class name and debug map
    // ModularParticleEmitterTemplate::operator=(ModularParticleEmitterTemplate&&)
    /* ModularParticleEmitterTemplate::TEMPNAMEPLACEHOLDERVALUE(ModularParticleEmitterTemplate&&)
    */

    ModularParticleEmitterTemplate* ModularParticleEmitterTemplate::operator=(ModularParticleEmitterTemplate* param_1) {
        std::swap<ModularParticleSystemTemplate_const*>(&field_0, &param_1->field_0);
        std::swap<RenderPassBitSet>((RenderPassBitSet*)m_renderPassBits, (RenderPassBitSet*)param_1->m_renderPassBits);
        std::swap<ParticleRenderMode>(m_renderPassBits + 4, param_1->m_renderPassBits + 4);
        std::swap<eastl::string>((basic_string*)&field_24, (basic_string*)&param_1->field_24);
        std::swap<int>((int*)&m_materialID, (int*)&param_1->m_materialID);
        std::swap<unsigned short>(&m_maxParticles, &param_1->m_maxParticles);
        std::swap<unsigned short>(&m_maxActiveParticlesEstimate, &param_1->m_maxActiveParticlesEstimate);
        std::swap<unsigned char>(&m_numTiles, &param_1->m_numTiles);
        std::swap<unsigned char>(&m_numTilesPerRow, &param_1->m_numTilesPerRow);
        std::swap<float>(&m_warmupTime, &param_1->m_warmupTime);
        std::swap<float>(&m_lifetime, &param_1->m_lifetime);
        std::swap<bool>(&m_continuous, &param_1->m_continuous);
        std::swap<math::Matrix44T<float>>((Matrix44T*)&m_transform, (Matrix44T*)&param_1->m_transform);
        eastl::fixed_vector<particlemodules::Module*, 1ul, true, eastl::allocator>::operator=(
            (fixed_vector<particlemodules::Module*, 1ul, true, eastl::allocator>*)&m_modules,
            (fixed_vector*)&param_1->m_modules);
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        return this;
    }

    // 0x100829650, 128 bytes, base-object destructor, placed by class name and debug map
    // ModularParticleEmitterTemplate::~ModularParticleEmitterTemplate()
    void ModularParticleEmitterTemplate::~ModularParticleEmitterTemplate() {
        undefined1* this_00;
        long* plVar1;
        long* plVar2;

        this_00 = &m_modules;
        plVar1 = (long*)this_00->HeapBeginPtr();
        plVar2 = (long*)this_00->end();
        for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
            if ((long*)*plVar1 != (long*)0) {
                (**(code**)(*(long*)*plVar1 + 8))();
            }
        }
        this_00->~fixed_vector();
        (&field_24)->~basic_string();
    }

    // 0x1008296e0, 16 bytes, complete-object destructor, placed by class name and debug map
    // ModularParticleEmitterTemplate::~ModularParticleEmitterTemplate(): jumps straight to the base-object destructor

    // 0x1008296f0, 1648 bytes, placed by class name and debug map
    // ModularParticleEmitterTemplate::LoadFromPacket(ModularParticleSystemTemplate const*, unsigned char, PacketT<Array<unsigned char, eastl::allocator> >&)
    ulong ModularParticleEmitterTemplate::LoadFromPacket(ModularParticleSystemTemplate* param_1, uchar param_2,
                                                         PacketT* param_3) {
        ushort* puVar1;
        vector<particlemodules::Module*, eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*
            this_00;
        ModularParticleEmitterTemplate* pMVar2;
        byte bVar3;
        uchar uVar4;
        undefined1 uVar5;
        char cVar6;
        ushort uVar7;
        long lVar8;
        undefined8* puVar9;
        ulong uVar10;
        Colour* this_01;
        undefined7 in_register_00000011;
        undefined1* puVar11;
        ulong uVar12;
        bool bVar13;
        float fVar14;
        undefined8 uVar15;
        float extraout_XMM0_Db;
        undefined1 local_f0[40];
        Matrix44T local_c8;
        Vector3T<float> local_88[16];
        vector<particlemodules::Module*, eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*
            local_78;
        float local_70;
        float local_6c;
        float local_68;
        ModularParticleEmitterTemplate* local_60;
        undefined8 local_58;
        undefined4 local_3c;
        PacketT* local_38;

        local_3c = (undefined4)CONCAT71(in_register_00000011, param_2);
        local_38 = param_3;
        if (field_0 != (ModularParticleSystemTemplate*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_systemTemplate",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ModularParticleEmitterTemplate.cpp",
                      50, (char*)0);
        }
        field_0 = param_1;
        ((local_f0 + 40))->gStringNoConversion(SUB81(param_3, 0));
        eastl::string::operator=((eastl::string*)&field_24, (basic_string*)(local_f0 + 40));
        ((local_f0 + 40))->~basic_string();
        bVar3 = param_3->g1();
        *(uint*)(m_renderPassBits + 4) = (uint)bVar3;
        if (1 < (byte)local_3c) {
            bVar3 = param_3->g1();
            ((m_renderPassBits + 8), (uint)bVar3)->from_uint32();
        }
        uVar7 = param_3->g2();
        m_materialID = (uint)uVar7;
        uVar7 = param_3->g2();
        m_maxParticles = uVar7;
        uVar4 = param_3->g1();
        m_numTiles = uVar4;
        uVar4 = param_3->g1();
        m_numTilesPerRow = uVar4;
        fVar14 = (float)param_3->gFloat();
        m_warmupTime = fVar14;
        fVar14 = (float)param_3->gFloat();
        m_lifetime = fVar14;
        math::Vector3T<float>::Vector3T(local_88, param_3, false);
        new (&local_70) math::Vector3T<float>(param_3, false);
        math::Matrix33RotationYawPitchRoll<float>((math*)local_f0, local_70, local_6c, local_68);
        new ((local_f0 + 40)) math::Matrix44T<float>(local_f0, local_88);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&m_transform, (Matrix44T*)(local_f0 + 40));
        puVar11 = &m_modules;
        local_60 = this;
        param_3->g1();
        eastl::vector<particlemodules::Module*,
                      eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::resize((ulong)
                                                                                                             puVar11);
        local_78 = (vector<particlemodules::Module*,
                           eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)puVar11;
        lVar8 = puVar11->size();
        bVar13 = lVar8 != 0;
        if (bVar13) {
            uVar12 = 0;
            do {
                uVar5 = param_3->g1();
                local_58._0_4_ = (float)CONCAT31(local_58._1_3_, uVar5);
                switch (uVar5) {
                case 0:
                    this_01 = operator_new(176);
                    this_01->field_0 = (undefined**)0;
                    *(undefined8*)&this_01->field_8 = 0;
                    *(undefined8*)&this_01->field_16 = 0;
                    *(undefined8*)&this_01->field_24 = 0;
                    *(undefined8*)&this_01->field_32 = 0;
                    *(undefined8*)&this_01->field_40 = 0;
                    *(undefined8*)&this_01->field_48 = 0;
                    *(undefined8*)&this_01->field_56 = 0;
                    *(undefined8*)&this_01->field_64 = 0;
                    *(undefined8*)&this_01->field_72 = 0;
                    *(undefined8*)&this_01->field_80 = 0;
                    *(undefined8*)&this_01->field_88 = 0;
                    *(undefined8*)&this_01->field_96 = 0;
                    *(undefined8*)&this_01->field_104 = 0;
                    *(undefined8*)&this_01->field_112 = 0;
                    *(undefined8*)&this_01->field_120 = 0;
                    *(undefined8*)&this_01->field_128 = 0;
                    *(undefined8*)&this_01->field_136 = 0;
                    *(undefined8*)&this_01->field_144 = 0;
                    *(undefined8*)&this_01->field_152 = 0;
                    *(undefined8*)&this_01->field_160 = 0;
                    *(undefined8*)&this_01->field_168 = 0;
                    new (this_01) particlemodules::Flow();
                    break;
                case 1:
                    this_01 = operator_new(392);
                    ___bzero(this_01, 392);
                    particlemodules::Colour::Colour(this_01);
                    break;
                case 2:
                    this_01 = operator_new(184);
                    this_01->field_0 = (undefined**)0;
                    *(undefined8*)&this_01->field_8 = 0;
                    *(undefined8*)&this_01->field_16 = 0;
                    *(undefined8*)&this_01->field_24 = 0;
                    *(undefined8*)&this_01->field_32 = 0;
                    *(undefined8*)&this_01->field_40 = 0;
                    *(undefined8*)&this_01->field_48 = 0;
                    *(undefined8*)&this_01->field_56 = 0;
                    *(undefined8*)&this_01->field_64 = 0;
                    *(undefined8*)&this_01->field_72 = 0;
                    *(undefined8*)&this_01->field_80 = 0;
                    *(undefined8*)&this_01->field_88 = 0;
                    *(undefined8*)&this_01->field_96 = 0;
                    *(undefined8*)&this_01->field_104 = 0;
                    *(undefined8*)&this_01->field_112 = 0;
                    *(undefined8*)&this_01->field_120 = 0;
                    *(undefined8*)&this_01->field_128 = 0;
                    *(undefined8*)&this_01->field_136 = 0;
                    *(undefined8*)&this_01->field_144 = 0;
                    *(undefined8*)&this_01->field_152 = 0;
                    *(undefined8*)&this_01->field_160 = 0;
                    *(undefined8*)&this_01->field_168 = 0;
                    *(undefined8*)&this_01->field_176 = 0;
                    new (this_01) particlemodules::Gravity();
                    break;
                case 3:
                    this_01 = operator_new(312);
                    ___bzero(this_01, 312);
                    new (this_01) particlemodules::TriggerPlane();
                    break;
                case 4:
                    this_01 = operator_new(200);
                    this_01->field_0 = (undefined**)0;
                    *(undefined8*)&this_01->field_8 = 0;
                    *(undefined8*)&this_01->field_16 = 0;
                    *(undefined8*)&this_01->field_24 = 0;
                    *(undefined8*)&this_01->field_32 = 0;
                    *(undefined8*)&this_01->field_40 = 0;
                    *(undefined8*)&this_01->field_48 = 0;
                    *(undefined8*)&this_01->field_56 = 0;
                    *(undefined8*)&this_01->field_64 = 0;
                    *(undefined8*)&this_01->field_72 = 0;
                    *(undefined8*)&this_01->field_80 = 0;
                    *(undefined8*)&this_01->field_88 = 0;
                    *(undefined8*)&this_01->field_96 = 0;
                    *(undefined8*)&this_01->field_104 = 0;
                    *(undefined8*)&this_01->field_112 = 0;
                    *(undefined8*)&this_01->field_120 = 0;
                    *(undefined8*)&this_01->field_128 = 0;
                    *(undefined8*)&this_01->field_136 = 0;
                    *(undefined8*)&this_01->field_144 = 0;
                    *(undefined8*)&this_01->field_152 = 0;
                    *(undefined8*)&this_01->field_160 = 0;
                    *(undefined8*)&this_01->field_168 = 0;
                    *(undefined8*)&this_01->field_176 = 0;
                    *(undefined8*)&this_01->field_184 = 0;
                    *(undefined8*)&this_01->field_192 = 0;
                    new (this_01) particlemodules::Attractor();
                    break;
                case 5:
                    this_01 = operator_new(200);
                    this_01->field_0 = (undefined**)0;
                    *(undefined8*)&this_01->field_8 = 0;
                    *(undefined8*)&this_01->field_16 = 0;
                    *(undefined8*)&this_01->field_24 = 0;
                    *(undefined8*)&this_01->field_32 = 0;
                    *(undefined8*)&this_01->field_40 = 0;
                    *(undefined8*)&this_01->field_48 = 0;
                    *(undefined8*)&this_01->field_56 = 0;
                    *(undefined8*)&this_01->field_64 = 0;
                    *(undefined8*)&this_01->field_72 = 0;
                    *(undefined8*)&this_01->field_80 = 0;
                    *(undefined8*)&this_01->field_88 = 0;
                    *(undefined8*)&this_01->field_96 = 0;
                    *(undefined8*)&this_01->field_104 = 0;
                    *(undefined8*)&this_01->field_112 = 0;
                    *(undefined8*)&this_01->field_120 = 0;
                    *(undefined8*)&this_01->field_128 = 0;
                    *(undefined8*)&this_01->field_136 = 0;
                    *(undefined8*)&this_01->field_144 = 0;
                    *(undefined8*)&this_01->field_152 = 0;
                    *(undefined8*)&this_01->field_160 = 0;
                    *(undefined8*)&this_01->field_168 = 0;
                    *(undefined8*)&this_01->field_176 = 0;
                    *(undefined8*)&this_01->field_184 = 0;
                    *(undefined8*)&this_01->field_192 = 0;
                    new (this_01) particlemodules::Rotation();
                    break;
                case 6:
                    this_01 = operator_new(384);
                    ___bzero(this_01, 384);
                    new (this_01) particlemodules::Scale();
                    break;
                case 7:
                    this_01 = operator_new(184);
                    this_01->field_0 = (undefined**)0;
                    *(undefined8*)&this_01->field_8 = 0;
                    *(undefined8*)&this_01->field_16 = 0;
                    *(undefined8*)&this_01->field_24 = 0;
                    *(undefined8*)&this_01->field_32 = 0;
                    *(undefined8*)&this_01->field_40 = 0;
                    *(undefined8*)&this_01->field_48 = 0;
                    *(undefined8*)&this_01->field_56 = 0;
                    *(undefined8*)&this_01->field_64 = 0;
                    *(undefined8*)&this_01->field_72 = 0;
                    *(undefined8*)&this_01->field_80 = 0;
                    *(undefined8*)&this_01->field_88 = 0;
                    *(undefined8*)&this_01->field_96 = 0;
                    *(undefined8*)&this_01->field_104 = 0;
                    *(undefined8*)&this_01->field_112 = 0;
                    *(undefined8*)&this_01->field_120 = 0;
                    *(undefined8*)&this_01->field_128 = 0;
                    *(undefined8*)&this_01->field_136 = 0;
                    *(undefined8*)&this_01->field_144 = 0;
                    *(undefined8*)&this_01->field_152 = 0;
                    *(undefined8*)&this_01->field_160 = 0;
                    *(undefined8*)&this_01->field_168 = 0;
                    *(undefined8*)&this_01->field_176 = 0;
                    new (this_01) particlemodules::Noise();
                    break;
                case 8:
                    this_01 = operator_new(16);
                    this_01->field_0 = (undefined**)0;
                    *(undefined8*)&this_01->field_8 = 0;
                    new (this_01) particlemodules::Flipbook();
                    break;
                case 9:
                    this_01 = operator_new(192);
                    this_01->field_0 = (undefined**)0;
                    *(undefined8*)&this_01->field_8 = 0;
                    *(undefined8*)&this_01->field_16 = 0;
                    *(undefined8*)&this_01->field_24 = 0;
                    *(undefined8*)&this_01->field_32 = 0;
                    *(undefined8*)&this_01->field_40 = 0;
                    *(undefined8*)&this_01->field_48 = 0;
                    *(undefined8*)&this_01->field_56 = 0;
                    *(undefined8*)&this_01->field_64 = 0;
                    *(undefined8*)&this_01->field_72 = 0;
                    *(undefined8*)&this_01->field_80 = 0;
                    *(undefined8*)&this_01->field_88 = 0;
                    *(undefined8*)&this_01->field_96 = 0;
                    *(undefined8*)&this_01->field_104 = 0;
                    *(undefined8*)&this_01->field_112 = 0;
                    *(undefined8*)&this_01->field_120 = 0;
                    *(undefined8*)&this_01->field_128 = 0;
                    *(undefined8*)&this_01->field_136 = 0;
                    *(undefined8*)&this_01->field_144 = 0;
                    *(undefined8*)&this_01->field_152 = 0;
                    *(undefined8*)&this_01->field_160 = 0;
                    *(undefined8*)&this_01->field_168 = 0;
                    *(undefined8*)&this_01->field_176 = 0;
                    *(undefined8*)&this_01->field_184 = 0;
                    new (this_01) particlemodules::Acceleration();
                    break;
                case 10:
                    this_01 = operator_new(16);
                    this_01->field_0 = (undefined**)0;
                    *(undefined8*)&this_01->field_8 = 0;
                    new (this_01) particlemodules::Lighting();
                    break;
                default:
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/particles/ModularParticleEmitterTemplate.cpp",
                                    119, (char*)0);
                }
                param_3 = local_38;
                if (this_01 == (Colour*)0)
                    goto LAB_100829cd7;
                cVar6 = (*(code*)this_01->field_0[2])(this_01, (byte)local_3c, local_38);
                if (cVar6 == '\0')
                    goto LAB_100829cd7;
                if ((char)local_58 == '\0') {
                    bVar3 = this_01->IsSingleBurstSpawn();
                    pMVar2 = local_60;
                    local_60->m_continuous = (bool)(local_60->m_continuous | bVar3 ^ 1);
                    uVar15 = this_01->GetSpawnRate();
                    fVar14 = (float)uVar15;
                    if (pMVar2->m_continuous != false) {
                        local_58 = uVar15;
                        this_01->GetLifetimeRange();
                        fVar14 = (float)local_58 * extraout_XMM0_Db;
                        local_58._0_4_ = fVar14;
                    }
                    fVar14 = (float)ceil(fVar14);
                    puVar1 = &pMVar2->m_maxActiveParticlesEstimate;
                    *puVar1 = *puVar1 + (short)(int)fVar14;
                    param_3 = local_38;
                }
                this_00 = local_78;
                puVar9 = (undefined8*)eastl::vector<
                    particlemodules::Module*,
                    eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::operator[](local_78,
                                                                                                           uVar12);
                *puVar9 = this_01;
                uVar12 = uVar12 + 1;
                uVar10 = this_00->size();
                bVar13 = uVar12 < uVar10;
            } while (bVar13);
        }
        pMVar2 = local_60;
        puVar11 = local_60->m_renderPassBits;
        puVar11->AddFormatType(4);
        if (*(int*)(pMVar2->m_renderPassBits + 4) != 2) {
            puVar11->AddFormatType(2);
            cVar6 = IsFlagSet(pMVar2, 0);
            if (cVar6 != '\0') {
                puVar11->AddFormatType(0);
            }
        }
    LAB_100829cd7:
        return CONCAT71((int7)((ulong)local_88 >> 8), ~bVar13) & 4294967041;
    }

    // 0x100829ef0, 400 bytes, placed by debug map only (low confidence)
    // ModularParticleSystemTemplate::LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator> >&)
    ulong ModularParticleSystemTemplate::LoadFromPacket(PacketT* param_1) {
        vector<ModularParticleEmitterTemplate,
               eastl::fixed_vector_allocator<192ul, 1ul, 16ul, 0ul, true, eastl::allocator>>* this_00;
        undefined1* this_01;
        uchar uVar1;
        undefined1 uVar2;
        byte bVar3;
        uint uVar4;
        uint uVar5;
        int iVar6;
        Minimap* this_02;
        Minimap* pMVar7;
        Minimap* pMVar8;
        ulong uVar9;
        CoordMapSquare local_70[2];
        Minimap* local_50;
        undefined1* local_48;
        PacketT* local_40;
        uint local_38;
        undefined1 local_31;

        uVar2 = param_1->g1();
        local_38 = CONCAT31(local_38._1_3_, uVar2);
        local_70->gStringNoConversion(SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)&field_8, (basic_string*)local_70);
        local_70->~basic_string();
        uVar2 = param_1->g1();
        m_numLoops = uVar2;
        bVar3 = param_1->g1();
        this_00 =
            (vector<ModularParticleEmitterTemplate,
                    eastl::fixed_vector_allocator<192ul, 1ul, 16ul, 0ul, true, eastl::allocator>>*)(m_renderPassBits +
                                                                                                    4);
        eastl::vector<ModularParticleEmitterTemplate,
                      eastl::fixed_vector_allocator<192ul, 1ul, 16ul, 0ul, true, eastl::allocator>>::resize(this_00,
                                                                                                            (ulong)
                                                                                                                bVar3);
        this_02 = (Minimap*)this_00->HeapBeginPtr();
        pMVar7 = (Minimap*)this_00->end();
        local_31 = this_02 == pMVar7;
        if (!(bool)local_31) {
            uVar1 = (uchar)local_38;
            local_38 = local_38 & 255;
            local_50 = pMVar7;
            pMVar7 = (Minimap*)this_02->LoadFromPacket(this, uVar1, param_1);
            if ((char)pMVar7 != '\0') {
                this_01 = m_renderPassBits;
                pMVar8 = pMVar7;
                local_48 = this_01;
                local_40 = param_1;
                do {
                    uVar4 = this_01->GetX();
                    local_70[0].m_x = this_02->GetPos();
                    uVar5 = local_70->GetX();
                    new (this_01)
                        std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(uVar4 | uVar5);
                    iVar6 = this_02->GetLevel();
                    uVar9 = 2;
                    if (iVar6 != 2) {
                        bVar3 = this_02->IsFlagSet(1);
                        uVar9 = (ulong)(bVar3 ^ 1);
                    }
                    pMVar7 = (Minimap*)set(uVar9, true);
                    if (((ulong)pMVar8 & 1) == 0)
                        break;
                    this_02 = (Minimap*)&this_02->field_192;
                    local_31 = this_02 == local_50;
                    if ((bool)local_31)
                        break;
                    pMVar7 = (Minimap*)this_02->LoadFromPacket(this, (uchar)local_38, local_40);
                    pMVar8 = pMVar7;
                } while ((char)pMVar7 != '\0');
            }
        }
        return CONCAT71((int7)((ulong)pMVar7 >> 8), local_31) & 18446744073709551361;
    }

} // namespace jag::graphics
