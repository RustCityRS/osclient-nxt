// libs/graphics/runetek7/particles/ModularParticleEmitterTemplate.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ModularParticleEmitterTemplate.h"
#include "ModularParticleSystem.h"

namespace jag::graphics {
    // 0x100024170: ModularParticleEmitterTemplate::GetRenderPassBits() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x1000602b0: ModularParticleEmitterTemplate::IsContinuous() const has the same machine code as oldscape::widgets::ScrollBarWidget::ThumbIsVisible() const

    // 0x1000e5d50, the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const
    Callstack ModularParticleEmitterTemplate::GetRenderMode() const {
        return m_renderPassBits;
    }

    // 0x100102fc0: ModularParticleEmitterTemplate::GetTransform() const has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x1001be5d0: ModularParticleEmitterTemplate::GetMaterialID() const has the same machine code as SunlightOptions::GetShadowQuality() const

    // 0x100414cb0: ModularParticleEmitterTemplate::GetModules() const has the same machine code as math::Transitionable<IrradianceSHCoefConsts>::GetEndValue()

    // 0x100448110: ModularParticleEmitterTemplate::GetNumTilesPerRow() const has the same machine code as game::Entity::GetCurrentLOD() const

    // 0x1004c67a0: ModularParticleEmitterTemplate::GetLifetime() const has the same machine code as game::WaterType::GetFoamMaterialScale() const

    // 0x1008291d0
    void ModularParticleEmitterTemplate::RenderDebug(math::Matrix44T<float> matrix44, float arg2) const {
        uint8_t uStack0000000000000008;

        auto puVar1 = m_modules->HeapBeginPtr();
        auto puVar2 = m_modules->end();
        if (puVar1 != puVar2) {
            do {
                (**(void (**)(...))(*(long*)*puVar1 + 32))(arg2, (long*)*puVar1, &uStack0000000000000008);
                puVar1 = puVar1 + 1;
            } while (puVar1 != puVar2);
        }
    }

    // 0x100829270
    void ModularParticleEmitterTemplate::ProcessTick(float arg1,
                                                     const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                                     ParticleModuleUpdateState& particleModuleUpdateState,
                                                     ParticleData& particleData) const {
        auto puVar1 = m_modules->HeapBeginPtr();
        auto puVar2 = m_modules->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            (**(void (**)(...))(*(long*)*puVar1 + 24))(arg1, (long*)*puVar1, particleModuleUpdateParams,
                                                       particleModuleUpdateState, particleData);
        }
    }

    // 0x1008292f0
    ModularParticleEmitterTemplate::ModularParticleEmitterTemplate() : field_0(nullptr) {
        new ((m_renderPassBits + 8)) eastl::bitset();
        new (&field_24) eastl::string();
        m_materialID = 3000;
        m_maxParticles = 1000;
        m_maxActiveParticlesEstimate = 0;
        m_numTiles = '\0';
        m_numTilesPerRow = '\0';
        m_warmupTime = 0.0;
        m_lifetime = 1.0;
        m_continuous = false;
        uint64_t uVar1 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 8);
        uint64_t uVar2 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 16);
        uint64_t uVar3 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 24);
        uint64_t uVar4 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 32);
        uint64_t uVar5 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 40);
        uint64_t uVar6 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 48);
        uint64_t uVar7 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 56);
        m_transform = *(uint64_t*)PTR_IDENTITY_100ee6730;
        field_88 = uVar1;
        field_96 = uVar2;
        field_104 = uVar3;
        field_112 = uVar4;
        field_120 = uVar5;
        field_128 = uVar6;
        field_136 = uVar7;
        new (m_modules) eastl::fixed_vector<particlemodules::Module*, 1ul>();
    }

    // 0x1008293c0
    ModularParticleEmitterTemplate*
    ModularParticleEmitterTemplate::operator=(ModularParticleEmitterTemplate&& modularParticleEmitterTemplate) {
        std::swap<ModularParticleSystemTemplate const*>(field_0, modularParticleEmitterTemplate.field_0);
        std::swap<RenderPassBitSet>(*m_renderPassBits, modularParticleEmitterTemplate.m_renderPassBits);
        std::swap<ParticleRenderMode>(*((m_renderPassBits + 4)),
                                      *((modularParticleEmitterTemplate.m_renderPassBits + 4)));
        std::swap<eastl::string>(field_24, modularParticleEmitterTemplate.field_24);
        std::swap<int>(m_materialID, modularParticleEmitterTemplate.m_materialID);
        std::swap<unsigned short>(m_maxParticles, modularParticleEmitterTemplate.m_maxParticles);
        std::swap<unsigned short>(m_maxActiveParticlesEstimate,
                                  modularParticleEmitterTemplate.m_maxActiveParticlesEstimate);
        std::swap<unsigned char>(m_numTiles, modularParticleEmitterTemplate.m_numTiles);
        std::swap<unsigned char>(m_numTilesPerRow, modularParticleEmitterTemplate.m_numTilesPerRow);
        std::swap<float>(m_warmupTime, modularParticleEmitterTemplate.m_warmupTime);
        std::swap<float>(m_lifetime, modularParticleEmitterTemplate.m_lifetime);
        std::swap<bool>(m_continuous, modularParticleEmitterTemplate.m_continuous);
        std::swap<math::Matrix44T<float>>(m_transform, modularParticleEmitterTemplate.m_transform);
        *m_modules = modularParticleEmitterTemplate.m_modules;
        modularParticleEmitterTemplate.m_modules->clear();
        return this;
    }

    // 0x100829650
    ModularParticleEmitterTemplate::~ModularParticleEmitterTemplate() {
        uint8_t* this_00 = m_modules;
        auto plVar1 = this_00->HeapBeginPtr();
        auto plVar2 = this_00->end();
        for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
            if ((long*)*plVar1 != nullptr) {
                (**(void (**)(...))(*(long*)*plVar1 + 8))();
            }
        }
        this_00->~fixed_vector();
        field_24.~basic_string();
    }

    // 0x1008296f0
    unsigned long
    ModularParticleEmitterTemplate::LoadFromPacket(const ModularParticleSystemTemplate* modularParticleSystemTemplate,
                                                   unsigned char arg2, PacketT<Array<unsigned char>>& arg3) {
        unsigned short* puVar1;
        vector<particlemodules::Module*, eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true>>* this_00;
        ModularParticleEmitterTemplate* pMVar2;
        uint8_t uVar5;
        bool cVar6;
        uint64_t* puVar9;
        unsigned long uVar10;
        Colour* this_01;
        uint64_t in_register_00000011;
        unsigned long arg1;
        uint64_t uVar14;
        float extraout_XMM0_Db;
        Matrix33T<float> local_f0;
        float local_70;
        float local_6c;
        float local_68;
        uint64_t local_58;

        uint32_t local_3c = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        PacketT<Array<unsigned char> _>* local_38 = arg3;
        if (field_0 != nullptr) {
            LogAssert("!m_systemTemplate",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ModularParticleEmitterTemplate.cpp",
                      50, nullptr);
        }
        field_0 = modularParticleSystemTemplate;
        local_c8.gStringNoConversion((uint8_t)arg3);
        field_24 = &local_c8;
        uint8_t bVar3 = arg3.g1();
        *(unsigned int*)(m_renderPassBits + 4) = (unsigned int)bVar3;
        if (1 < (uint8_t)local_3c) {
            bVar3 = arg3.g1();
            ((m_renderPassBits + 8))->from_uint32((unsigned int)bVar3);
        }
        unsigned short uVar7 = arg3.g2();
        m_materialID = (unsigned int)uVar7;
        uVar7 = arg3.g2();
        m_maxParticles = uVar7;
        unsigned char uVar4 = arg3.g1();
        m_numTiles = uVar4;
        uVar4 = arg3.g1();
        m_numTilesPerRow = uVar4;
        float fVar13 = (float)arg3.gFloat();
        m_warmupTime = fVar13;
        fVar13 = (float)arg3.gFloat();
        m_lifetime = fVar13;
        Vector3T<float> local_88(arg3, false);
        new (&local_70) math::Vector3T(arg3, false);
        math::Matrix33RotationYawPitchRoll<float>(local_70, local_6c, local_68);
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_c8(local_f0, local_88);
        m_transform = local_c8;
        uint8_t* puVar11 = m_modules;
        bVar3 = arg3.g1();
        puVar11->resize((unsigned long)bVar3);
        vector<particlemodules::Module*, eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true>>* local_78 =
            (vector<particlemodules::Module*, eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true>>*)puVar11;
        bool bVar12 = puVar11->size() != 0;
        if (bVar12) {
            arg1 = 0;
            do {
                uVar5 = arg3.g1();
                local_58._0_4_ = (float)(((uint32_t)local_58._1_3_ << 8) | (uint8_t)uVar5);
                switch (uVar5) {
                case 0:
                    this_01 = (Colour*)operator new(176);
                    this_01->_vptr = nullptr;
                    *(uint64_t*)&this_01->field_8 = 0;
                    *(uint64_t*)&this_01->field_16 = 0;
                    *(uint64_t*)&this_01->field_24 = 0;
                    *(uint64_t*)&this_01->field_32 = 0;
                    *(uint64_t*)&this_01->field_40 = 0;
                    *(uint64_t*)&this_01->field_48 = 0;
                    *(uint64_t*)&this_01->field_56 = 0;
                    *(uint64_t*)&this_01->field_64 = 0;
                    *(uint64_t*)&this_01->field_72 = 0;
                    *(uint64_t*)&this_01->field_80 = 0;
                    *(uint64_t*)&this_01->field_88 = 0;
                    *(uint64_t*)&this_01->field_96 = 0;
                    *(uint64_t*)&this_01->field_104 = 0;
                    *(uint64_t*)&this_01->field_112 = 0;
                    *(uint64_t*)&this_01->field_120 = 0;
                    *(uint64_t*)&this_01->field_128 = 0;
                    *(uint64_t*)&this_01->field_136 = 0;
                    *(uint64_t*)&this_01->field_144 = 0;
                    *(uint64_t*)&this_01->field_152 = 0;
                    *(uint64_t*)&this_01->field_160 = 0;
                    *(uint64_t*)&this_01->field_168 = 0;
                    new (this_01) particlemodules::Flow();
                    break;
                case 1:
                    this_01 = (Colour*)operator new(392);
                    ___bzero(this_01, 392);
                    new (this_01) particlemodules::Colour();
                    break;
                case 2:
                    this_01 = (Colour*)operator new(184);
                    this_01->_vptr = nullptr;
                    *(uint64_t*)&this_01->field_8 = 0;
                    *(uint64_t*)&this_01->field_16 = 0;
                    *(uint64_t*)&this_01->field_24 = 0;
                    *(uint64_t*)&this_01->field_32 = 0;
                    *(uint64_t*)&this_01->field_40 = 0;
                    *(uint64_t*)&this_01->field_48 = 0;
                    *(uint64_t*)&this_01->field_56 = 0;
                    *(uint64_t*)&this_01->field_64 = 0;
                    *(uint64_t*)&this_01->field_72 = 0;
                    *(uint64_t*)&this_01->field_80 = 0;
                    *(uint64_t*)&this_01->field_88 = 0;
                    *(uint64_t*)&this_01->field_96 = 0;
                    *(uint64_t*)&this_01->field_104 = 0;
                    *(uint64_t*)&this_01->field_112 = 0;
                    *(uint64_t*)&this_01->field_120 = 0;
                    *(uint64_t*)&this_01->field_128 = 0;
                    *(uint64_t*)&this_01->field_136 = 0;
                    *(uint64_t*)&this_01->field_144 = 0;
                    *(uint64_t*)&this_01->field_152 = 0;
                    *(uint64_t*)&this_01->field_160 = 0;
                    *(uint64_t*)&this_01->field_168 = 0;
                    *(uint64_t*)&this_01->field_176 = 0;
                    new (this_01) particlemodules::Gravity();
                    break;
                case 3:
                    this_01 = (Colour*)operator new(312);
                    ___bzero(this_01, 312);
                    new (this_01) particlemodules::TriggerPlane();
                    break;
                case 4:
                    this_01 = (Colour*)operator new(200);
                    this_01->_vptr = nullptr;
                    *(uint64_t*)&this_01->field_8 = 0;
                    *(uint64_t*)&this_01->field_16 = 0;
                    *(uint64_t*)&this_01->field_24 = 0;
                    *(uint64_t*)&this_01->field_32 = 0;
                    *(uint64_t*)&this_01->field_40 = 0;
                    *(uint64_t*)&this_01->field_48 = 0;
                    *(uint64_t*)&this_01->field_56 = 0;
                    *(uint64_t*)&this_01->field_64 = 0;
                    *(uint64_t*)&this_01->field_72 = 0;
                    *(uint64_t*)&this_01->field_80 = 0;
                    *(uint64_t*)&this_01->field_88 = 0;
                    *(uint64_t*)&this_01->field_96 = 0;
                    *(uint64_t*)&this_01->field_104 = 0;
                    *(uint64_t*)&this_01->field_112 = 0;
                    *(uint64_t*)&this_01->field_120 = 0;
                    *(uint64_t*)&this_01->field_128 = 0;
                    *(uint64_t*)&this_01->field_136 = 0;
                    *(uint64_t*)&this_01->field_144 = 0;
                    *(uint64_t*)&this_01->field_152 = 0;
                    *(uint64_t*)&this_01->field_160 = 0;
                    *(uint64_t*)&this_01->field_168 = 0;
                    *(uint64_t*)&this_01->field_176 = 0;
                    *(uint64_t*)&this_01->field_184 = 0;
                    *(uint64_t*)&this_01->field_192 = 0;
                    new (this_01) particlemodules::Attractor();
                    break;
                case 5:
                    this_01 = (Colour*)operator new(200);
                    this_01->_vptr = nullptr;
                    *(uint64_t*)&this_01->field_8 = 0;
                    *(uint64_t*)&this_01->field_16 = 0;
                    *(uint64_t*)&this_01->field_24 = 0;
                    *(uint64_t*)&this_01->field_32 = 0;
                    *(uint64_t*)&this_01->field_40 = 0;
                    *(uint64_t*)&this_01->field_48 = 0;
                    *(uint64_t*)&this_01->field_56 = 0;
                    *(uint64_t*)&this_01->field_64 = 0;
                    *(uint64_t*)&this_01->field_72 = 0;
                    *(uint64_t*)&this_01->field_80 = 0;
                    *(uint64_t*)&this_01->field_88 = 0;
                    *(uint64_t*)&this_01->field_96 = 0;
                    *(uint64_t*)&this_01->field_104 = 0;
                    *(uint64_t*)&this_01->field_112 = 0;
                    *(uint64_t*)&this_01->field_120 = 0;
                    *(uint64_t*)&this_01->field_128 = 0;
                    *(uint64_t*)&this_01->field_136 = 0;
                    *(uint64_t*)&this_01->field_144 = 0;
                    *(uint64_t*)&this_01->field_152 = 0;
                    *(uint64_t*)&this_01->field_160 = 0;
                    *(uint64_t*)&this_01->field_168 = 0;
                    *(uint64_t*)&this_01->field_176 = 0;
                    *(uint64_t*)&this_01->field_184 = 0;
                    *(uint64_t*)&this_01->field_192 = 0;
                    new (this_01) particlemodules::Rotation();
                    break;
                case 6:
                    this_01 = (Colour*)operator new(384);
                    ___bzero(this_01, 384);
                    new (this_01) particlemodules::Scale();
                    break;
                case 7:
                    this_01 = (Colour*)operator new(184);
                    this_01->_vptr = nullptr;
                    *(uint64_t*)&this_01->field_8 = 0;
                    *(uint64_t*)&this_01->field_16 = 0;
                    *(uint64_t*)&this_01->field_24 = 0;
                    *(uint64_t*)&this_01->field_32 = 0;
                    *(uint64_t*)&this_01->field_40 = 0;
                    *(uint64_t*)&this_01->field_48 = 0;
                    *(uint64_t*)&this_01->field_56 = 0;
                    *(uint64_t*)&this_01->field_64 = 0;
                    *(uint64_t*)&this_01->field_72 = 0;
                    *(uint64_t*)&this_01->field_80 = 0;
                    *(uint64_t*)&this_01->field_88 = 0;
                    *(uint64_t*)&this_01->field_96 = 0;
                    *(uint64_t*)&this_01->field_104 = 0;
                    *(uint64_t*)&this_01->field_112 = 0;
                    *(uint64_t*)&this_01->field_120 = 0;
                    *(uint64_t*)&this_01->field_128 = 0;
                    *(uint64_t*)&this_01->field_136 = 0;
                    *(uint64_t*)&this_01->field_144 = 0;
                    *(uint64_t*)&this_01->field_152 = 0;
                    *(uint64_t*)&this_01->field_160 = 0;
                    *(uint64_t*)&this_01->field_168 = 0;
                    *(uint64_t*)&this_01->field_176 = 0;
                    new (this_01) particlemodules::Noise();
                    break;
                case 8:
                    this_01 = (Colour*)operator new(16);
                    this_01->_vptr = nullptr;
                    *(uint64_t*)&this_01->field_8 = 0;
                    new (this_01) particlemodules::Flipbook();
                    break;
                case 9:
                    this_01 = (Colour*)operator new(192);
                    this_01->_vptr = nullptr;
                    *(uint64_t*)&this_01->field_8 = 0;
                    *(uint64_t*)&this_01->field_16 = 0;
                    *(uint64_t*)&this_01->field_24 = 0;
                    *(uint64_t*)&this_01->field_32 = 0;
                    *(uint64_t*)&this_01->field_40 = 0;
                    *(uint64_t*)&this_01->field_48 = 0;
                    *(uint64_t*)&this_01->field_56 = 0;
                    *(uint64_t*)&this_01->field_64 = 0;
                    *(uint64_t*)&this_01->field_72 = 0;
                    *(uint64_t*)&this_01->field_80 = 0;
                    *(uint64_t*)&this_01->field_88 = 0;
                    *(uint64_t*)&this_01->field_96 = 0;
                    *(uint64_t*)&this_01->field_104 = 0;
                    *(uint64_t*)&this_01->field_112 = 0;
                    *(uint64_t*)&this_01->field_120 = 0;
                    *(uint64_t*)&this_01->field_128 = 0;
                    *(uint64_t*)&this_01->field_136 = 0;
                    *(uint64_t*)&this_01->field_144 = 0;
                    *(uint64_t*)&this_01->field_152 = 0;
                    *(uint64_t*)&this_01->field_160 = 0;
                    *(uint64_t*)&this_01->field_168 = 0;
                    *(uint64_t*)&this_01->field_176 = 0;
                    *(uint64_t*)&this_01->field_184 = 0;
                    new (this_01) particlemodules::Acceleration();
                    break;
                case 10:
                    this_01 = (Colour*)operator new(16);
                    this_01->_vptr = nullptr;
                    *(uint64_t*)&this_01->field_8 = 0;
                    new (this_01) particlemodules::Lighting();
                    break;
                default:
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/particles/ModularParticleEmitterTemplate.cpp",
                                    119, nullptr);
                }
                arg3 = local_38;
                if ((this_01 == nullptr) || (cVar6 = this_01->LoadFromPacket(
                                                 (unsigned char)this_01, (PacketT<Array<unsigned char> _>*)local_3c),
                                             !cVar6))
                    goto LAB_100829cd7;
                if ((char)local_58 == '\0') {
                    bVar3 = this_01->IsSingleBurstSpawn();
                    pMVar2 = this;
                    m_continuous = (bool)(m_continuous | bVar3 ^ 1);
                    uVar14 = this_01->GetSpawnRate();
                    fVar13 = (float)uVar14;
                    if (pMVar2->m_continuous != false) {
                        local_58 = uVar14;
                        this_01->GetLifetimeRange();
                        fVar13 = (float)local_58 * extraout_XMM0_Db;
                        local_58._0_4_ = fVar13;
                    }
                    fVar13 = (float)ceil(fVar13);
                    puVar1 = &pMVar2->m_maxActiveParticlesEstimate;
                    *puVar1 = *puVar1 + (short)(int)fVar13;
                    arg3 = local_38;
                }
                this_00 = local_78;
                puVar9 = (uint64_t*)(*local_78)[arg1];
                *puVar9 = this_01;
                arg1 = arg1 + 1;
                uVar10 = this_00->size();
                bVar12 = arg1 < uVar10;
            } while (bVar12);
        }
        pMVar2 = this;
        puVar11 = m_renderPassBits;
        puVar11->AddFormatType(4);
        if (*(int*)(pMVar2->m_renderPassBits + 4) != 2) {
            puVar11->AddFormatType(2);
            cVar6 = IsFlagSet(pMVar2, 0);
            if (cVar6) {
                puVar11->AddFormatType(0);
            }
        }
    LAB_100829cd7:
        return ~bVar12 & 4294967041;
    }

    // 0x100829ef0
    unsigned long ModularParticleSystemTemplate::LoadFromPacket(PacketT<Array<unsigned char>>& arg1) {
        uint8_t* this_01;
        unsigned char arg2;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        Minimap* pMVar7;
        unsigned long arg1_00;
        CoordMapSquare local_70;
        Minimap* local_50;
        uint8_t* local_48;
        unsigned int local_38;

        uint8_t uVar1 = arg1.g1();
        local_38 = (((uint32_t)local_38._1_3_ << 8) | (uint8_t)uVar1);
        local_70.gStringNoConversion((uint8_t)arg1);
        field_8 = &local_70;
        uVar1 = arg1.g1();
        m_numLoops = uVar1;
        uint8_t bVar2 = arg1.g1();
        vector<ModularParticleEmitterTemplate, eastl::fixed_vector_allocator<192ul, 1ul, 16ul, 0ul, true>>* this_00 =
            (vector<ModularParticleEmitterTemplate,
                    eastl::fixed_vector_allocator<192ul, 1ul, 16ul, 0ul, true>>*)(m_renderPassBits + 4);
        this_00->resize((unsigned long)bVar2);
        auto this_02 = this_00->HeapBeginPtr();
        auto pMVar6 = this_00->end();
        uint8_t local_31 = this_02 == pMVar6;
        if (!local_31) {
            arg2 = (unsigned char)local_38;
            local_38 = local_38 & 255;
            local_50 = pMVar6;
            pMVar6 = (Minimap*)this_02->LoadFromPacket(this, arg2, arg1);
            if ((char)pMVar6 != '\0') {
                this_01 = m_renderPassBits;
                pMVar7 = pMVar6;
                local_48 = this_01;
                do {
                    uVar3 = this_01->GetX();
                    local_70[0].m_x = this_02->GetPos();
                    uVar4 = local_70.GetX();
                    new (this_01) std::__cxx_atomic_base_impl(uVar3 | uVar4);
                    iVar5 = this_02->GetLevel();
                    arg1_00 = 2;
                    if (iVar5 != 2) {
                        bVar2 = this_02->IsFlagSet(1);
                        arg1_00 = (unsigned long)(bVar2 ^ 1);
                    }
                    pMVar6 = (Minimap*)* this = eastl::bitset<3ul, unsigned char>::set(arg1_00, true);
                    if (((unsigned long)pMVar7 & 1) == 0)
                        break;
                    this_02 = (Minimap*)&this_02->field_192;
                    local_31 = this_02 == local_50;
                    if (local_31)
                        break;
                    pMVar6 = (Minimap*)this_02->LoadFromPacket(this, (unsigned char)local_38, arg1);
                    pMVar7 = pMVar6;
                } while ((char)pMVar6 != '\0');
            }
        }
        return local_31 & 18446744073709551361;
    }

} // namespace jag::graphics
