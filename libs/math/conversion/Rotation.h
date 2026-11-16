// libs/math/conversion/Rotation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics::particlemodules {
    class Rotation {
    public:
        // virtual methods in vtable order
        virtual ~Rotation();
        virtual uint64_t LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2);
        virtual float ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                  ParticleModuleUpdateState& particleModuleUpdateState,
                                  ParticleData& particleData) const;
        Rotation();

    private:
        bool field_8;
        uint8_t _unknown_9[3];
        float field_12;
        float field_16;
        uint8_t _unknown_20[100];
    };

    // 0x1007e8940
    Rotation::~Rotation() {
        field_112.~ModulePropertyCurve();
        field_24.~ModulePropertyCurve();
    }

    // 0x10082f5c0
    Rotation::Rotation() : Module() {}

} // namespace jag::graphics::particlemodules

namespace jag::math {
    // 0x1005290a0
    void operator-(const Vector3T<float>& vector3, const Rotation90& rotation90) {
        float arg1;
        uint64_t uVar2;
        float arg2;
        float arg3;

        uint8_t uVar1 = (uint8_t)*rotation90;
        if (uVar1 == 3) {
            arg1 = *(float*)(vector3 + 8);
            arg2 = *(float*)(vector3 + 4);
            arg3 = -*(float*)vector3;
        } else if (uVar1 == 2) {
            arg1 = -*(float*)vector3;
            arg2 = *(float*)(vector3 + 4);
            arg3 = -*(float*)(vector3 + 8);
        } else {
            if (uVar1 != 1) {
                return *(uint64_t*)vector3;
            }
            arg1 = -*(float*)(vector3 + 8);
            arg3 = *(float*)vector3;
            arg2 = *(float*)(vector3 + 4);
        }
        ColourHSL local_18(arg1, arg2, arg3);
        uVar2._0_4_ = local_18.field_0;
        uVar2._4_4_ = local_18.field_4;
        return uVar2;
    }

    // 0x100529130
    void operator*(const Vector3T<float>& vector3, const Rotation90& rotation90) {
        uint64_t uVar1;
        ColourHSL local_18;

        if ((uint8_t)((char)*rotation90 | 2) == 3) {
            local_18 = ColourHSL(*(float*)(vector3 + 8), *(float*)(vector3 + 4), *(float*)vector3);
        } else {
            local_18._0_8_ = *(uint64_t*)vector3;
        }
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x1005294c0
    auto Matrix44T<float>::ApplyScaling(const Vector3T<float>& vector3) {
        auto result;

        float* pfVar3 = &vector3[0];
        float fVar2 = *pfVar3;
        pfVar3 = (float*)(result)[0];
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3 = &vector3[1];
        fVar2 = *pfVar3;
        pfVar3 = (float*)(result)[1];
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3 = &vector3[2];
        fVar2 = *pfVar3;
        pfVar3 = (float*)(result)[2];
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3 = &vector3[0];
        fVar2 = *pfVar3;
        ReturnValue* pRVar1 = &result + 2;
        pfVar3 = (float*)(*pRVar1)[0];
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3 = &vector3[1];
        fVar2 = *pfVar3;
        pfVar3 = (float*)(*pRVar1)[1];
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3 = &vector3[2];
        fVar2 = *pfVar3;
        pfVar3 = (float*)(*pRVar1)[2];
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3 = &vector3[0];
        fVar2 = *pfVar3;
        pRVar1 = &result + 4;
        pfVar3 = (float*)(*pRVar1)[0];
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3 = &vector3[1];
        fVar2 = *pfVar3;
        pfVar3 = (float*)(*pRVar1)[1];
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3 = &vector3[2];
        fVar2 = *pfVar3;
        pfVar3 = (float*)(*pRVar1)[2];
        *pfVar3 = fVar2 * *pfVar3;
        return result;
    }

} // namespace jag::math

namespace jag::game {
    // 0x100529cd0
    Cutscene2DPlaybackState::Cutscene2DPlaybackState() : eastl::bitset(), m_elapsedTimeSec(0.0), m_pauseTimeSec(0.0) {}

    // 0x100529d50
    GlobalCutscene2DResources::GlobalCutscene2DResources() : m_subtitlesEnabled(1) {}

    // 0x100529e80
    GlobalCutscene2DResources::~GlobalCutscene2DResources() {
        field_8.~vector_map();
    }

} // namespace jag::game
