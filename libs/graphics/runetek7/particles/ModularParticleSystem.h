// libs/graphics/runetek7/particles/ModularParticleSystem.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ModularParticleSystem {
    public:
        GetTemplate() const;
        GetAABB() const;
        GetEmitters();
        GetDrawable();
        int GetParticleCount() const;
        ~ModularParticleSystem();
        GetAttachmentInfo() const;
        void SetEmitting(bool);
        void SetLoopingAllowed(bool);
        ModularParticleSystem(shared_ptr<ModularParticleSystemTemplate> const&, shared_ptr<VFXAttachmentInfo> const&);
        void Update(float);
        CalculateViewDistances(math::Vector4T<float> const&);
        void SortParticles();
        ulong IsEmitting() const;
        ulong IsFinished() const;
        void TranslateParticles(math::Vector3T<float> const&);
        ulong InitEmitters();

        // data members, from how the methods use this: 1512 bytes
        char _unknown_0[8];
        long field_8;        // offset 8
        shared_ptr field_16; // offset 16
        char _unknown_32[32];
        MSIType field_64; // offset 64
        char _unknown_136[1336];
        undefined2 field_1472; // offset 1472
        bool m_loopingAllowed; // offset 1474
        char _unknown_1475[1];
        int m_particleCount; // offset 1476
        char field_1480;     // offset 1480
        char _unknown_1481[3];
        undefined8 field_1484; // offset 1484
        char _unknown_1492[20];
    };

    class ModularParticleSystemTemplate {
    public:
        GetName() const;
        GetEmitterTemplates() const;
        HasAlphaParticles() const;
        void HasDistortionParticles() const;
        void HasAlphaEarlyParticles() const;
        void HasAlphaLateParticles() const;
        ModularParticleSystemTemplate();
        ~ModularParticleSystemTemplate();
        ulong LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator>>&);
        GetNumLoops() const;
        GetRenderPassBits() const;

        // data members, from how the methods use this: 60 bytes
        char _unknown_0[40];
        undefined1 m_numLoops; // offset 40
        char _unknown_41[3];
        Callstack field_44; // offset 44
    };

    // 0x10042f4b0, 16 bytes, inline, placed by class name and debug map
    // ModularParticleSystem::GetDrawable()
    undefined1* ModularParticleSystem::GetDrawable() {
        return &field_1504;
    }

    // 0x1007d0000, 16 bytes, inline, placed by class name
    // ModularParticleSystem::GetParticleCount() const
    int ModularParticleSystem::GetParticleCount() {
        return m_particleCount;
    }

    // 0x1007f1960, 16 bytes, complete-object destructor, inline, placed by class name
    // ModularParticleSystem::~ModularParticleSystem(): jumps straight to the base-object destructor

    // 0x1007f1970, 64 bytes, base-object destructor, inline, placed by class name
    // ModularParticleSystem::~ModularParticleSystem()
    void ModularParticleSystem::~ModularParticleSystem() {
        (&field_1504)->~ModularParticleSystemDrawable();
        (&field_144)->~fixed_vector();
        field_16->~shared_ptr();
        ~shared_ptr();
    }

    // 0x10081ee90, 32 bytes, inline, placed by class name
    // ModularParticleSystem::GetAttachmentInfo() const
    ModularParticleSystem* ModularParticleSystem::GetAttachmentInfo() {
        long in_RSI;

        new (this) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(in_RSI + 16));
        return this;
    }

    // 0x10081ef70, 16 bytes, inline, placed by class name
    // ModularParticleSystem::SetLoopingAllowed(bool)
    void ModularParticleSystem::SetLoopingAllowed(bool param_1) {
        m_loopingAllowed = param_1;
    }

    // 0x10082a210, 16 bytes, inline, placed by class header (inline)
    // ModularParticleSystemTemplate::GetNumLoops() const
    undefined1 ModularParticleSystemTemplate::GetNumLoops() {
        return m_numLoops;
    }

} // namespace jag::graphics

namespace jag {
    // 0x10042fe70, 192 bytes, inline, placed by debug map only (low confidence)
    // char const* ToText<64, true>(eastl::fixed_string<char, 64, true, eastl::allocator>&, math::Vector3T<float> const&)
    char* ToText<64, true>(fixed_string* param_1, Vector3T* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        char* pcVar4;
        char local_68[16];
        char local_58[16];
        char local_48[24];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar1 = ToText(local_48, 16, *(float*)param_2, 10);
        uVar2 = ToText(local_58, 16, *(float*)(param_2 + 4), 10);
        uVar3 = ToText(local_68, 16, *(float*)(param_2 + 8), 10);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, "{Vec3: %s, %s, %s}", uVar1, uVar2, uVar3);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return pcVar4;
    }

} // namespace jag
