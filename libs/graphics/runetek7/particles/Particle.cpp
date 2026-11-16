// libs/graphics/runetek7/particles/Particle.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "Particle.h"
#include "ModularParticleSystemVisuals.h"

namespace jag::graphics {
    // 0x100f43888, 8 bytes, __data
    Particle::m_enableFrameInterpolation = 1;

    // 0x100f43890, 1 bytes, __data
    Particle::m_showParticles = 1;

    // 0x100f43891, 1 bytes, __data
    Particle::m_showOverdraw = 0;

    // 0x100f43892, 1 bytes, __data
    Particle::m_showWorldAABB = 0;

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    Particle::GetPosition() const;

    // 0x1000641f0: the linker folded this into SunlightOptions::GetSunElevation() const, which has identical code
    Particle::GetViewDst() const;

    // 0x100064240: the linker folded this into SunlightOptions::GetSunIntensity() const, which has identical code
    float Particle::GetSize() const;

    // 0x1003f65a0: the linker folded this into EntityRoute::GetStalledTickCount() const, which has identical code
    LocData Particle::GetRGBA() const;

    // 0x10062b9c0: the linker folded this into game::FloorUnderlayType::GetTextureScale() const, which has identical code
    float Particle::GetRotation2D() const;

    // 0x100828760, 96 bytes, placed by debug map only (low confidence)
    // ParticleData::Reserve(unsigned long)
    void ParticleData::Reserve(ulong param_1) {
        reserve(param_1);
        (&field_24, param_1)->reserve();
        (&field_48, param_1)->reserve();
        (&field_72, param_1)->reserve();
        (&field_96, param_1)->reserve();
        ReserveRenderBuffers(this, param_1);
    }

    // 0x100828b20, 448 bytes, placed by debug map only (low confidence)
    // ParticleData::Remove(unsigned long)
    void ParticleData::Remove(ulong param_1) {
        undefined1* this_00;
        long lVar2;
        long lVar3;
        char* this_01;

        if (GetCount(this) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < GetCount()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/Particle.cpp",
                      182, (char*)0);
        }
        lVar2 = size();
        this_00 = &field_120;
        lVar3 = this_00->size();
        if (lVar2 != lVar3) {
            this_01 = "m_seeds.size() == m_positionsAndCreationTimes.size()";
            LogFatalError("m_seeds.size() == m_positionsAndCreationTimes.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/Particle.cpp",
                          185, 0, (char*)0);
            /* WARNING: Subroutine does not return */
            this_01->~OptionStore();
        }
        lVar2 = HeapBeginPtr();
        erase_unsorted((float*)(lVar2 + param_1 * 4));
        lVar2 = (&field_24)->HeapBeginPtr();
        (&field_24, (float*)(lVar2 + param_1 * 4))->erase_unsorted();
        lVar2 = (&field_48)->HeapBeginPtr();
        (&field_48, (float*)(lVar2 + param_1 * 4))->erase_unsorted();
        lVar2 = (&field_72)->HeapBeginPtr();
        (&field_72, (float*)(lVar2 + param_1 * 4))->erase_unsorted();
        lVar2 = (&field_96)->HeapBeginPtr();
        (&field_96, (float*)(lVar2 + param_1 * 4))->erase_unsorted();
        lVar2 = this_00->HeapBeginPtr();
        this_00->erase_unsorted((ParticleVertexDataProxy*)(param_1 * 64 + lVar2));
        lVar2 = (&field_144)->HeapBeginPtr();
        (&field_144, (ParticleVertexData*)(param_1 * 32 + lVar2))->erase_unsorted();
        lVar2 = (&field_168)->HeapBeginPtr();
        (&field_168, (ParticleVertexDataProxy*)(param_1 * 48 + lVar2))->erase_unsorted();
        lVar2 = (&field_192)->HeapBeginPtr();
        lVar3 = param_1 * 16;
        (&field_192, (ParticleVertexDataProxy*)(lVar2 + lVar3))->erase_unsorted();
        lVar2 = (&field_216)->HeapBeginPtr();
        (&field_216, (ParticleVertexDataProxy*)(lVar2 + lVar3))->erase_unsorted();
        lVar2 = (&field_240)->HeapBeginPtr();
        (&field_240, (ParticleVertexDataProxy*)(lVar3 + lVar2))->erase_unsorted();
    }

    // 0x10082c0b0, 448 bytes, base-object constructor, placed by class name
    // Particle::Particle(ParticleEmitter const&, float, float, float, float, float, float, unsigned int, bool, bool)
    void Particle::Particle(ParticleEmitter* param_1, float param_2, float param_3, float param_4, float param_5,
                            float param_6, float param_7, uint param_8, bool param_9, bool param_10) {
        undefined1* this_00;
        byte bVar1;
        bool bVar2;
        long lVar3;
        undefined7 in_register_00000009;
        undefined3 in_register_00000081;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined4 local_50;
        undefined4 local_40;
        float local_3c;
        float local_38;
        float local_34;

        local_40 = CONCAT31(in_register_00000081, param_10);
        local_50 = (undefined4)CONCAT71(in_register_00000009, param_9);
        local_3c = param_7;
        local_38 = param_6;
        local_34 = param_5;
        new (this) math::Vector3T<int>();
        m_viewDst = 0;
        new (&field_16) math::Vector3T<int>();
        field_28 = param_2;
        m_size = param_3;
        field_36 = param_4;
        field_40 = local_34;
        field_44 = local_38;
        new (&field_48, 0.0, 0.0, 0.0, 0.0) ImVec4();
        m_rotation2D = local_3c;
        this_00 = m_rGBA;
        new (this_00) math::ColourStorage8888<math::RGBA8StorageLayout>(param_8);
        *(undefined2*)(m_rGBA + 4) = 0;
        m_rGBA[6] = 0;
        lVar3 = param_1->data();
        if (lVar3 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("emitterTemplate",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/Particle.cpp",
                      34, (char*)0);
        }
        bVar1 = this_00->GetDeceleration();
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

    // 0x10082c270, 16 bytes, complete-object constructor, placed by class name
    // Particle::Particle(ParticleEmitter const&, float, float, float, float, float, float, unsigned int, bool, bool): jumps straight to the base-object constructor

} // namespace jag::graphics
