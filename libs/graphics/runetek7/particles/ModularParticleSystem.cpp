// libs/graphics/runetek7/particles/ModularParticleSystem.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ModularParticleSystem.h"
#include "ModularParticleSystemVisuals.h"

namespace jag::graphics {
    // 0x100009ca0: ModularParticleSystem::GetTemplate() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x10002d850: ModularParticleSystem::GetAABB() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x100414cb0: ModularParticleSystem::GetEmitters() has the same machine code as math::Transitionable<IrradianceSHCoefConsts>::GetEndValue()

    // 0x10081eeb0
    void ModularParticleSystem::SetEmitting(bool arg1) {
        auto this_00 = field_144.HeapBeginPtr();
        auto pMVar1 = field_144.end();
        for (; this_00 != pMVar1; this_00 = (ModularParticleEmitter*)(this_00[1].field_12 + 12)) {
            this_00->SetEmitting(arg1);
        }
    }

    // 0x10082a120
    ModularParticleSystem::ModularParticleSystem(
        const shared_ptr<ModularParticleSystemTemplate>& modularParticleSystemTemplate,
        const shared_ptr<VFXAttachmentInfo>& vfxAttachmentInfo)
        : shared_ptr(modularParticleSystemTemplate), field_16(vfxAttachmentInfo), field_1472(0), m_loopingAllowed(true),
          m_particleCount(0) {
        field_1480 = ((ModularParticleSystemTemplate*)(*this).operator->())->GetNumLoops();
        field_1484 = 18410715274534715391;
        new (&field_1504) ModularParticleSystemDrawable(*this);
    }

    // 0x10082a240
    void ModularParticleSystem::Update(float arg1) {
        int iVar3;
        Matrix44T<float>* matrix441;
        AABB* pAVar5;
        ModularParticleEmitter* this_04;
        ModularParticleEmitter* pMVar6;
        Layout* local_48;

        bool bVar1 = field_16 != nullptr;
        if (!bVar1) {
            LogAssert("m_attachmentInfo != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ModularParticleSystem.cpp",
                      18, nullptr);
        }
        auto this_01 = field_16.operator->();
        auto local_38 = this_01->GetParticles();
        uint8_t* this_00 = field_64;
        bool cVar2 = this_00->GetResize();
        if (!cVar2) {
            this_00->operator=(local_38);
        }
        AABB local_78;
        AABB* local_50 = (AABB*)&field_32;
        *local_50 = local_78;
        m_particleCount = 0;
        Layout* this_06 = (Layout*)&field_144;
        auto this_02 = this_06->HeapBeginPtr();
        auto pCVar4 = this_06->end();
        if (this_02 != pCVar4) {
            bVar1 = false;
            local_48 = this_06;
            do {
                matrix441 = (Matrix44T<float>*)this_00->value();
                cVar2 = this_02->Update(arg1, *matrix441, *local_38, true);
                if (cVar2) {
                    bVar1 = true;
                }
                pAVar5 = (AABB*)this_02->GetSwipeConfig();
                cVar2 = pAVar5->IsValid();
                if (cVar2) {
                    pAVar5 = (AABB*)this_02->GetSwipeConfig();
                    local_50->AddAABB(*pAVar5);
                }
                iVar3 = ((ParticleData*)this_02->second())->GetCount();
                m_particleCount = m_particleCount + iVar3;
                this_02 = (Component*)&this_02->field_320;
            } while (this_02 != pCVar4);
            this_06 = local_48;
            if (bVar1)
                goto LAB_10082a40a;
        }
        if (m_loopingAllowed != false) {
            if (field_1480 != '\0') {
                field_1480 = field_1480 - 1;
            }
            if (field_1480 == '\0') {
                cVar2 = ((ModularParticleSystemTemplate*)(*this).operator->())->GetNumLoops();
                if (cVar2)
                    goto LAB_10082a40a;
            }
            this_04 = (ModularParticleEmitter*)this_06->HeapBeginPtr();
            pMVar6 = (ModularParticleEmitter*)this_06->end();
            for (; this_04 != pMVar6; this_04 = (ModularParticleEmitter*)(this_04[1].field_12 + 12)) {
                this_04->Restart();
            }
        }
    LAB_10082a40a:
        this_00->operator=(local_38);
    }

    // 0x10082a490
    uint64_t ModularParticleSystem::CalculateViewDistances(const math::Vector4T<float>& vector4) {
        float* pfVar2;
        uint64_t local_48;
        uint64_t local_40;

        float local_38 = 3.4028235e+38;
        float local_34 = -3.4028235e+38;
        auto this_00 = field_144.HeapBeginPtr();
        auto pMVar1 = field_144.end();
        if (this_00 != pMVar1) {
            do {
                local_40 = this_00->CalculateViewDistances(vector4);
                pfVar2 = std::min<float>(local_40, local_38);
                local_38 = *pfVar2;
                pfVar2 = std::max<float>(*((float*)((long)&local_40 + 4)), local_34);
                local_34 = *pfVar2;
                this_00 = (ModularParticleEmitter*)(this_00[1].field_12 + 12);
            } while (this_00 != pMVar1);
        }
        local_48.pair<float&, float&, false>(local_38, local_34);
        return local_48;
    }

    // 0x10082a550
    void ModularParticleSystem::SortParticles() {
        auto this_00 = field_144.HeapBeginPtr();
        auto pMVar1 = field_144.end();
        for (; this_00 != pMVar1; this_00 = (ModularParticleEmitter*)(this_00[1].field_12 + 12)) {
            this_00->SortParticles();
        }
    }

    // 0x10082a5a0
    unsigned long ModularParticleSystem::IsEmitting() const {
        bool cVar1;

        uint8_t* this_01 = &field_144;
        auto this_00 = this_01->HeapBeginPtr();
        auto pMVar2 = this_01->end();
        bool bVar3 = this_00 == pMVar2;
        if (!bVar3) {
            cVar1 = this_00->IsEmitting();
            while (!cVar1) {
                this_00 = (ModularParticleEmitter*)(this_00[1].field_12 + 12);
                bVar3 = this_00 == pMVar2;
                if (bVar3)
                    break;
                cVar1 = this_00->IsEmitting();
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)this_01 >> 8)) << 8) | (uint8_t)bVar3) ^ 1) & 4294967295;
    }

    // 0x10082a620
    unsigned long ModularParticleSystem::IsFinished() const {
        bool cVar1;
        ModularParticleEmitter* this_01;
        ModularParticleEmitter* pMVar3;
        uint8_t* this_02;
        unsigned long uVar4;

        if (GetParticleCount() == 0) {
            if (m_loopingAllowed == false) {
            LAB_10082a66f:
                this_02 = &field_144;
                this_01 = (ModularParticleEmitter*)this_02->HeapBeginPtr();
                pMVar3 = (ModularParticleEmitter*)this_02->end();
                uVar4 = (((uint64_t)((int64_t)((unsigned long)this_02 >> 8)) << 8) | (uint8_t)(this_01 == pMVar3));
                if (this_01 != pMVar3) {
                    cVar1 = this_01->IsEmitting();
                    while (!cVar1) {
                        this_01 = (ModularParticleEmitter*)(this_01[1].field_12 + 12);
                        uVar4 = (((uint64_t)((int64_t)(uVar4 >> 8)) << 8) | (uint8_t)(this_01 == pMVar3));
                        if (this_01 == pMVar3)
                            break;
                        cVar1 = this_01->IsEmitting();
                    }
                }
                goto LAB_10082a639;
            }
            if (field_1480 == '\0') {
                cVar1 = ((ModularParticleSystemTemplate*)(*this).operator->())->GetNumLoops();
                if (cVar1)
                    goto LAB_10082a66f;
            }
        }
        uVar4 = 0;
    LAB_10082a639:
        return uVar4 & 4294967295;
    }

    // 0x10082a6e0
    void ModularParticleSystem::TranslateParticles(const math::Vector3T<float>& vector3) {
        auto this_00 = field_144.HeapBeginPtr();
        auto pMVar1 = field_144.end();
        for (; this_00 != pMVar1; this_00 = (ModularParticleEmitter*)(this_00[1].field_12 + 12)) {
            this_00->TranslateParticles(vector3);
        }
    }

    // 0x10082a750
    uint32_t ModularParticleSystem::InitEmitters() {
        ModularParticleEmitterTemplate* modularParticleEmitterTemplate;

        uint32_t uVar2 = operator_cast_to_bool();
        if ((char)uVar2 == '\0') {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ModularParticleSystem.cpp",
                      164,
                      "Attempting to initialize emitters for a modular particle system with no template specified.");
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "particles/ModularParticleSystem.cpp",
                            165, nullptr);
        }
        if (field_144.empty() == '\0') {
            LogAssert("m_emitters.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ModularParticleSystem.cpp",
                      169, nullptr);
        }
        GeometryBatchInstance* this_00 = (GeometryBatchInstance*)(*this).operator->();
        auto this_01 = this_00->GetMaterial();
        modularParticleEmitterTemplate = (ModularParticleEmitterTemplate*)this_01->HeapBeginPtr();
        auto pMVar3 = this_01->end();
        for (; modularParticleEmitterTemplate != pMVar3;
             modularParticleEmitterTemplate =
                 (ModularParticleEmitterTemplate*)&modularParticleEmitterTemplate[1].field_40) {
            field_144.emplace_back<ModularParticleEmitterTemplate const&>(*modularParticleEmitterTemplate);
        }
        return uVar2;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10081f340
    float IntegerExponentPow<float>(float arg1, unsigned int arg2) {
        if (arg2 == 0) {
            return 1.0;
        }
        float fVar1 = 1.0;
        do {
            fVar1 = fVar1 * arg1;
            arg2 = arg2 - 1;
        } while (arg2 != 0);
        return fVar1;
    }

} // namespace jag::math
