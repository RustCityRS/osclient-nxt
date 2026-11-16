// libs/graphics/runetek7/particles/ModularParticleSystem.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ModularParticleSystem.h"
#include "ModularParticleSystemVisuals.h"

namespace jag::graphics {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    ModularParticleSystem::GetTemplate() const;

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    ModularParticleSystem::GetAABB() const;

    // 0x100414cb0: the linker folded this into math::Transitionable<IrradianceSHCoefConsts>::GetEndValue(), which has identical code
    ModularParticleSystem::GetEmitters();

    // 0x10081eeb0, 112 bytes, placed by class name and debug map
    // ModularParticleSystem::SetEmitting(bool)
    void ModularParticleSystem::SetEmitting(bool param_1) {
        ModularParticleEmitter* this_00;
        ModularParticleEmitter* pMVar1;

        this_00 = (ModularParticleEmitter*)(&field_144)->HeapBeginPtr();
        pMVar1 = (ModularParticleEmitter*)(&field_144)->end();
        for (; this_00 != pMVar1; this_00 = (ModularParticleEmitter*)(this_00[1].field_12 + 12)) {
            this_00->SetEmitting(param_1);
        }
    }

    // 0x10082a120, 208 bytes, base-object constructor, placed by class name
    // ModularParticleSystem::ModularParticleSystem(shared_ptr<ModularParticleSystemTemplate> const&, shared_ptr<VFXAttachmentInfo> const&)
    void ModularParticleSystem::ModularParticleSystem(shared_ptr* param_1, shared_ptr* param_2) {
        ModularParticleSystemTemplate* this_00;

        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new (field_16, param_2) shared_ptr<oldscape::dash3d::Decor>();
        new (&field_32) math::AABB();
        new (field_64) eastl::optional<math::Matrix44T<float>>();
        new (&field_144) eastl::fixed_vector<ModularParticleEmitter, 4ul, true, eastl::allocator>();
        field_1472 = 0;
        m_loopingAllowed = true;
        m_particleCount = 0;
        this_00 = (ModularParticleSystemTemplate*)shared_ptr<ModularParticleSystemTemplate>::operator->(
            (shared_ptr<ModularParticleSystemTemplate>*)this);
        field_1480 = this_00->GetNumLoops();
        field_1484 = 18410715274534715391;
        new (&field_1504, this) ModularParticleSystemDrawable();
    }

    // 0x10082a220, 16 bytes, complete-object constructor, placed by neighbouring functions
    // ModularParticleSystemDrawable::ModularParticleSystemDrawable(ModularParticleSystem&): jumps straight to the base-object constructor

    // 0x10082a230, 16 bytes, complete-object constructor, placed by class name
    // ModularParticleSystem::ModularParticleSystem(shared_ptr<ModularParticleSystemTemplate> const&, shared_ptr<VFXAttachmentInfo> const&): jumps straight to the base-object constructor

    // 0x10082a240, 496 bytes, placed by class name
    // ModularParticleSystem::Update(float)
    void ModularParticleSystem::Update(float param_1) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        int iVar3;
        ParticleEmitter* this_01;
        Component* this_02;
        Component* pCVar4;
        ParticleData* this_03;
        Matrix44T* pMVar5;
        AABB* pAVar6;
        ModularParticleEmitter* this_04;
        ModularParticleEmitter* pMVar7;
        ModularParticleSystemTemplate* this_05;
        Layout* this_06;
        AABB local_78;
        AABB* local_50;
        Layout* local_48;
        Matrix44T* local_38;

        bVar1 = operator!=((shared_ptr*)field_16, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_attachmentInfo != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ModularParticleSystem.cpp",
                      18, (char*)0);
        }
        this_01 = (ParticleEmitter*)shared_ptr<VFXAttachmentInfo>::operator->((shared_ptr<VFXAttachmentInfo>*)field_16);
        local_38 = (Matrix44T*)this_01->GetParticles();
        this_00 = field_64;
        bVar1 = this_00->GetResize();
        if (!bVar1) {
            eastl::optional<math::Matrix44T<float>>::operator=((optional<math::Matrix44T<float>>*)this_00, local_38);
        }
        new (&local_78) math::AABB();
        local_50 = (AABB*)&field_32;
        math::AABB::operator=(local_50, &local_78);
        m_particleCount = 0;
        this_06 = (Layout*)&field_144;
        this_02 = (Component*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_06);
        pCVar4 = (Component*)this_06->end();
        if (this_02 != pCVar4) {
            bVar1 = false;
            local_48 = this_06;
            do {
                pMVar5 = (Matrix44T*)eastl::optional<math::Matrix44T<float>>::value();
                cVar2 = this_02->Update(param_1, pMVar5, local_38, true);
                if (cVar2 != '\0') {
                    bVar1 = true;
                }
                pAVar6 = (AABB*)this_02->GetSwipeConfig();
                cVar2 = pAVar6->IsValid();
                if (cVar2 != '\0') {
                    pAVar6 = (AABB*)this_02->GetSwipeConfig();
                    local_50->AddAABB(pAVar6);
                }
                this_03 = (ParticleData*)this_02->second();
                iVar3 = this_03->GetCount();
                m_particleCount = m_particleCount + iVar3;
                this_02 = (Component*)&this_02->field_320;
            } while (this_02 != pCVar4);
            this_06 = local_48;
            if (bVar1)
                goto LAB_10082a40a;
        }
        if (m_loopingAllowed != false) {
            if (field_1480 != '\0') {
                field_1480 = field_1480 + -1;
            }
            if (field_1480 == '\0') {
                this_05 = (ModularParticleSystemTemplate*)shared_ptr<ModularParticleSystemTemplate>::operator->(
                    (shared_ptr<ModularParticleSystemTemplate>*)this);
                cVar2 = this_05->GetNumLoops();
                if (cVar2 != '\0')
                    goto LAB_10082a40a;
            }
            this_04 = (ModularParticleEmitter*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_06);
            pMVar7 = (ModularParticleEmitter*)this_06->end();
            for (; this_04 != pMVar7; this_04 = (ModularParticleEmitter*)(this_04[1].field_12 + 12)) {
                this_04->Restart();
            }
        }
    LAB_10082a40a:
        eastl::optional<math::Matrix44T<float>>::operator=((optional<math::Matrix44T<float>>*)this_00, local_38);
    }

    // 0x10082a490, 192 bytes, placed by class name
    // ModularParticleSystem::CalculateViewDistances(math::Vector4T<float> const&)
    undefined8 ModularParticleSystem::CalculateViewDistances(Vector4T* param_1) {
        ModularParticleEmitter* this_00;
        ModularParticleEmitter* pMVar1;
        float* pfVar2;
        undefined8 local_48;
        undefined8 local_40;
        float local_38;
        float local_34;

        local_38 = 3.4028235e+38;
        local_34 = -3.4028235e+38;
        this_00 = (ModularParticleEmitter*)(&field_144)->HeapBeginPtr();
        pMVar1 = (ModularParticleEmitter*)(&field_144)->end();
        if (this_00 != pMVar1) {
            do {
                local_40 = this_00->CalculateViewDistances(param_1);
                pfVar2 = std::min<float>((float*)&local_40, &local_38);
                local_38 = *pfVar2;
                pfVar2 = std::max<float>((float*)((long)&local_40 + 4), &local_34);
                local_34 = *pfVar2;
                this_00 = (ModularParticleEmitter*)(this_00[1].field_12 + 12);
            } while (this_00 != pMVar1);
        }
        std::pair<float, float>::pair<float&, float&, false>((pair<float, float>*)&local_48, &local_38, &local_34);
        return local_48;
    }

    // 0x10082a550, 80 bytes, placed by class name
    // ModularParticleSystem::SortParticles()
    void ModularParticleSystem::SortParticles() {
        ModularParticleEmitter* this_00;
        ModularParticleEmitter* pMVar1;

        this_00 = (ModularParticleEmitter*)(&field_144)->HeapBeginPtr();
        pMVar1 = (ModularParticleEmitter*)(&field_144)->end();
        for (; this_00 != pMVar1; this_00 = (ModularParticleEmitter*)(this_00[1].field_12 + 12)) {
            this_00->SortParticles();
        }
    }

    // 0x10082a5a0, 128 bytes, placed by class name
    // ModularParticleSystem::IsEmitting() const
    ulong ModularParticleSystem::IsEmitting() {
        char cVar1;
        ModularParticleEmitter* this_00;
        ModularParticleEmitter* pMVar2;
        undefined1* this_01;
        bool bVar3;

        this_01 = &field_144;
        this_00 = (ModularParticleEmitter*)this_01->HeapBeginPtr();
        pMVar2 = (ModularParticleEmitter*)this_01->end();
        bVar3 = this_00 == pMVar2;
        if (!bVar3) {
            cVar1 = this_00->IsEmitting();
            while (cVar1 == '\0') {
                this_00 = (ModularParticleEmitter*)(this_00[1].field_12 + 12);
                bVar3 = this_00 == pMVar2;
                if (bVar3)
                    break;
                cVar1 = this_00->IsEmitting();
            }
        }
        return (CONCAT71((int7)((ulong)this_01 >> 8), bVar3) ^ 1) & 4294967295;
    }

    // 0x10082a620, 192 bytes, placed by class name
    // ModularParticleSystem::IsFinished() const
    ulong ModularParticleSystem::IsFinished() {
        char cVar1;
        ModularParticleSystemTemplate* this_00;
        ModularParticleEmitter* this_01;
        ModularParticleEmitter* pMVar3;
        undefined1* this_02;
        ulong uVar4;

        if (GetParticleCount(this) == 0) {
            if (m_loopingAllowed == false) {
            LAB_10082a66f:
                this_02 = &field_144;
                this_01 = (ModularParticleEmitter*)this_02->HeapBeginPtr();
                pMVar3 = (ModularParticleEmitter*)this_02->end();
                uVar4 = CONCAT71((int7)((ulong)this_02 >> 8), this_01 == pMVar3);
                if (this_01 != pMVar3) {
                    cVar1 = this_01->IsEmitting();
                    while (cVar1 == '\0') {
                        this_01 = (ModularParticleEmitter*)(this_01[1].field_12 + 12);
                        uVar4 = CONCAT71((int7)(uVar4 >> 8), this_01 == pMVar3);
                        if (this_01 == pMVar3)
                            break;
                        cVar1 = this_01->IsEmitting();
                    }
                }
                goto LAB_10082a639;
            }
            if (field_1480 == '\0') {
                this_00 = (ModularParticleSystemTemplate*)shared_ptr<ModularParticleSystemTemplate>::operator->(
                    (shared_ptr<ModularParticleSystemTemplate>*)this);
                cVar1 = this_00->GetNumLoops();
                if (cVar1 != '\0')
                    goto LAB_10082a66f;
            }
        }
        uVar4 = 0;
    LAB_10082a639:
        return uVar4 & 4294967295;
    }

    // 0x10082a6e0, 112 bytes, placed by class name
    // ModularParticleSystem::TranslateParticles(math::Vector3T<float> const&)
    void ModularParticleSystem::TranslateParticles(Vector3T* param_1) {
        ModularParticleEmitter* this_00;
        ModularParticleEmitter* pMVar1;

        this_00 = (ModularParticleEmitter*)(&field_144)->HeapBeginPtr();
        pMVar1 = (ModularParticleEmitter*)(&field_144)->end();
        for (; this_00 != pMVar1; this_00 = (ModularParticleEmitter*)(this_00[1].field_12 + 12)) {
            this_00->TranslateParticles(param_1);
        }
    }

    // 0x10082a750, 240 bytes, placed by class name
    // ModularParticleSystem::InitEmitters()
    ulong ModularParticleSystem::InitEmitters() {
        bool bVar1;
        char cVar2;
        undefined7 extraout_var;
        GeometryBatchInstance* this_00;
        Layout* this_01;
        ModularParticleEmitterTemplate* pMVar3;
        ModularParticleEmitterTemplate* pMVar4;
        undefined8 uVar5;

        bVar1 = operator_cast_to_bool();
        if (!bVar1) {
            uVar5 = logger::default_logger();
            logger::Logger::Log(
                uVar5, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/particles/"
                "ModularParticleSystem.cpp",
                164, "Attempting to initialize emitters for a modular particle system with no template specified.");
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "particles/ModularParticleSystem.cpp",
                            165, (char*)0);
        }
        cVar2 = (&field_144)->empty();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_emitters.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ModularParticleSystem.cpp",
                      169, (char*)0);
        }
        this_00 = (GeometryBatchInstance*)shared_ptr<ModularParticleSystemTemplate>::operator->(
            (shared_ptr<ModularParticleSystemTemplate>*)this);
        this_01 = (Layout*)this_00->GetMaterial();
        pMVar3 = (ModularParticleEmitterTemplate*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        pMVar4 = (ModularParticleEmitterTemplate*)this_01->end();
        for (; pMVar3 != pMVar4; pMVar3 = (ModularParticleEmitterTemplate*)&pMVar3[1].field_40) {
            eastl::vector<ModularParticleEmitter,
                          eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>::
                emplace_back<ModularParticleEmitterTemplate_const&>(
                    (vector<ModularParticleEmitter,
                            eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*)&field_144,
                    pMVar3);
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10081f340, 64 bytes, inline, placed by debug map only (low confidence)
    // float IntegerExponentPow<float>(float, unsigned int)
    float IntegerExponentPow<float>(float param_1, uint param_2) {
        float fVar1;

        if (param_2 == 0) {
            return 1.0;
        }
        fVar1 = 1.0;
        do {
            fVar1 = fVar1 * param_1;
            param_2 = param_2 - 1;
        } while (param_2 != 0);
        return fVar1;
    }

} // namespace jag::math
