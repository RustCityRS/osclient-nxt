// libs/graphics/runetek7/particles/Particle.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "Particle.h"
#include "ModularParticleSystemVisuals.h"

namespace jag::graphics {
    // 0x100f43888
    int64_t Particle::m_enableFrameInterpolation = 1;

    // 0x100f43890
    bool Particle::m_showParticles = 1;

    // 0x100f43891
    bool Particle::m_showOverdraw = 0;

    // 0x100f43892
    bool Particle::m_showWorldAABB = 0;

    // 0x100009ca0: Particle::GetPosition() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1000641f0: Particle::GetViewDst() const has the same machine code as SunlightOptions::GetSunElevation() const

    // 0x100064240: Particle::GetSize() const has the same machine code as SunlightOptions::GetSunIntensity() const

    // 0x1003f65a0: Particle::GetRGBA() const has the same machine code as EntityRoute::GetStalledTickCount() const

    // 0x10062b9c0, the same machine code as game::FloorUnderlayType::GetTextureScale() const
    float Particle::GetRotation2D() const {
        return m_rotation2D;
    }

    // 0x100828760
    void ParticleData::Reserve(unsigned long arg1) {
        reserve(arg1);
        field_24.reserve(arg1);
        field_48.reserve(arg1);
        field_72.reserve(arg1);
        field_96.reserve(arg1);
        ReserveRenderBuffers(arg1);
    }

    // 0x100828b20
    void ParticleData::Remove(unsigned long arg1) {
        char* this_01;

        if (GetCount() <= arg1) {
            LogAssert("index < GetCount()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/Particle.cpp",
                      182, nullptr);
        }
        long lVar2 = size();
        uint8_t* this_00 = &field_120;
        long lVar3 = this_00->size();
        if (lVar2 != lVar3) {
            this_01 = "m_seeds.size() == m_positionsAndCreationTimes.size()";
            LogFatalError("m_seeds.size() == m_positionsAndCreationTimes.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/Particle.cpp",
                          185, 0, nullptr);
            this_01->~OptionStore();
        }
        lVar2 = HeapBeginPtr();
        erase_unsorted((lVar2 + arg1 * 4));
        lVar2 = field_24.HeapBeginPtr();
        field_24.erase_unsorted((lVar2 + arg1 * 4));
        lVar2 = field_48.HeapBeginPtr();
        field_48.erase_unsorted((lVar2 + arg1 * 4));
        lVar2 = field_72.HeapBeginPtr();
        field_72.erase_unsorted((lVar2 + arg1 * 4));
        lVar2 = field_96.HeapBeginPtr();
        field_96.erase_unsorted((lVar2 + arg1 * 4));
        lVar2 = this_00->HeapBeginPtr();
        this_00->erase_unsorted((arg1 * 64 + lVar2));
        lVar2 = field_144.HeapBeginPtr();
        field_144.erase_unsorted((arg1 * 32 + lVar2));
        lVar2 = field_168.HeapBeginPtr();
        field_168.erase_unsorted((arg1 * 48 + lVar2));
        lVar2 = field_192.HeapBeginPtr();
        lVar3 = arg1 * 16;
        field_192.erase_unsorted((lVar2 + lVar3));
        lVar2 = field_216.HeapBeginPtr();
        field_216.erase_unsorted((lVar2 + lVar3));
        lVar2 = field_240.HeapBeginPtr();
        field_240.erase_unsorted((lVar3 + lVar2));
    }

    // 0x10082c0b0
    Particle::Particle(const ParticleEmitter& particleEmitter, float arg2, float arg3, float arg4, float arg5,
                       float arg6, float arg7, unsigned int arg8, bool arg9, bool arg10) {
        bool bVar2;
        uint64_t in_register_00000009;
        uint32_t in_register_00000081;
        uint64_t local_68;
        uint64_t uStack_60;

        uint32_t local_40 = (((uint32_t)in_register_00000081 << 8) | (uint8_t)arg10);
        uint32_t local_50 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg9);
        float local_3c = arg7;
        float local_38 = arg6;
        float local_34 = arg5;
        new (this) math::Vector3T();
        m_viewDst = 0;
        new (&field_16) math::Vector3T();
        field_28 = arg2;
        m_size = arg3;
        field_36 = arg4;
        field_40 = local_34;
        field_44 = local_38;
        new (&field_48) ImVec4(0.0, 0.0, 0.0, 0.0);
        m_rotation2D = local_3c;
        uint8_t* this_00 = m_rGBA;
        new (this_00) math::ColourStorage8888(arg8);
        *(uint16_t*)(m_rGBA + 4) = 0;
        m_rGBA[6] = 0;
        long lVar3 = particleEmitter.data();
        if (lVar3 == 0) {
            LogAssert("emitterTemplate",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/Particle.cpp",
                      34, nullptr);
        }
        uint8_t bVar1 = this_00->GetDeceleration();
        local_3c = (float)bVar1;
        bVar1 = this_00->GetDirectionMask();
        local_38 = (float)bVar1;
        bVar1 = this_00->GetRot();
        local_34 = (float)bVar1;
        bVar1 = this_00->GetShape();
        new (&local_68) ImVec4(local_3c, local_38, local_34, (float)bVar1);
        field_48 = local_68;
        field_56 = uStack_60;
        if ((char)local_50 == '\0') {
            bVar2 = false;
        } else {
            bVar2 = *(float*)(lVar3 + 208) != 1.1754944e-38;
        }
        m_rGBA[4] = bVar2;
        if ((char)local_40 == '\0') {
            bVar2 = false;
        } else {
            bVar2 = *(float*)(lVar3 + 220) != 1.1754944e-38;
        }
        m_rGBA[5] = bVar2;
    }

} // namespace jag::graphics
