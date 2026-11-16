// libs/game/runetek5/scene/EnvironmentOverride.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "EnvironmentOverride.h"

namespace jag::game {
    // 0x100009ca0: EnvironmentOverride::GetLightingOverrides() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100324d40: EnvironmentOverride::GetColourGradingOverrides() const has the same machine code as oldscape::graphics::NXTPixToolkit::GetPix2D()

    // 0x100443d40: EnvironmentOverride::GetFogOverrides() const has the same machine code as Entity::GetBoundingCapsule() const

    // 0x1004903c0
    EnvironmentOverride::EnvironmentOverride(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1)
        : LightingEnvironmentOverrides() {
        unsigned short uVar1;
        uint8_t local_98[96];
        uint32_t local_38;

        uint64_t* this_00 = &m_fogOverrides;
        new (this_00) FogEnvironmentOverrides();
        uint64_t* this_01 = &m_bloomOverrides;
        new (this_01) BloomEnvironmentOverrides();
        uint64_t* this_02 = &m_mapOverrides;
        new (this_02) MapEnvironmentOverrides();
        uint64_t* this_03 = &m_colourGradingOverrides;
        new (this_03) ColourGradingEnvironmentOverrides();
        uint64_t* this_04 = &m_toneMapOverrides;
        new (this_04) ToneMapEnvironmentOverrides();
        uint8_t* this_05 = &field_268;
        new (this_05) ScatteringEnvironmentOverrides();
        uint8_t* this_06 = &field_352;
        new (this_06) VolumetricEnvironmentOverrides();
        uint64_t* this_07 = &m_lightProbeOverrides;
        new (this_07) LightProbeEnvironmentOverrides();
        m_transitionTime = 0;
        m_hasAnyOverrides = 0;
        unsigned long long arg1_00 = arg1.g8();
        (logger::default_logger())
            ->Log(false, 5,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                  "EnvironmentOverride.cpp",
                  11, "Got override packet");
        if (arg1_00 == 0) {
            uVar1 = arg1.g2();
            m_transitionTime = (unsigned int)uVar1;
            m_hasAnyOverrides = 0;
            local_98._64_4_ = 0;
            local_98._68_4_ = 0;
            local_98._72_4_ = 0;
            local_98._48_8_ = 0;
            local_98._56_4_ = 0;
            local_98._60_4_ = 0;
            local_98._32_8_ = 0;
            local_98._40_8_ = 0;
            local_98._16_4_ = 0;
            local_98._20_4_ = 0;
            local_98._24_4_ = 0;
            local_98._28_4_ = 0;
            local_98[0] = 0;
            local_98._1_7_ = 0;
            local_98._8_4_ = 0;
            local_98._12_4_ = 0;
            new (local_98) LightingEnvironmentOverrides();
            *this = *local_98;
            local_98._32_8_ = 0;
            local_98._40_8_ = 0;
            local_98._16_4_ = 0;
            local_98._20_4_ = 0;
            local_98._24_4_ = 0;
            local_98._28_4_ = 0;
            local_98[0] = 0;
            local_98._1_7_ = 0;
            local_98._8_4_ = 0;
            local_98._12_4_ = 0;
            local_98._48_8_ = local_98._48_8_ & 18446744069414584320;
            new (local_98) FogEnvironmentOverrides();
            field_124 = local_98._48_4_;
            field_108 = local_98._32_8_;
            field_116 = local_98._40_8_;
            field_92 = (((uint64_t)local_98._20_4_ << 32) | (uint32_t)local_98._16_4_);
            field_100 = (((uint64_t)local_98._28_4_ << 32) | (uint32_t)local_98._24_4_);
            *this_00 = local_98._0_8_;
            field_84 = (((uint64_t)local_98._12_4_ << 32) | (uint32_t)local_98._8_4_);
            local_98._16_4_ = 0;
            local_98._20_4_ = 0;
            local_98._24_4_ = 0;
            local_98[0] = 0;
            local_98._1_7_ = 0;
            local_98._8_4_ = 0;
            local_98._12_4_ = 0;
            new (local_98) BloomEnvironmentOverrides();
            field_140 = (((uint64_t)local_98._16_4_ << 32) | (uint32_t)local_98._12_4_);
            field_148 = (((uint64_t)local_98._24_4_ << 32) | (uint32_t)local_98._20_4_);
            *this_01 = local_98._0_8_;
            *(unsigned long*)&field_136 = (((uint64_t)local_98._12_4_ << 32) | (uint32_t)local_98._8_4_);
            local_98[0] = 0;
            local_98._1_7_ = 0;
            local_98._8_4_ = 0;
            local_98._12_4_ = 0;
            local_98._16_4_ = 0;
            new (local_98) MapEnvironmentOverrides();
            field_172 = local_98._16_4_;
            *this_02 = local_98._0_8_;
            field_164 = (((uint64_t)local_98._12_4_ << 32) | (uint32_t)local_98._8_4_);
            local_98._16_4_ = 0;
            local_98._20_4_ = 0;
            local_98._24_4_ = 0;
            local_98._28_4_ = 0;
            local_98[0] = 0;
            local_98._1_7_ = 0;
            local_98._8_4_ = 0;
            local_98._12_4_ = 0;
            local_98._32_8_ = 0;
            new (local_98) ColourGradingEnvironmentOverrides();
            field_208 = local_98._32_8_;
            field_192 = (((uint64_t)local_98._20_4_ << 32) | (uint32_t)local_98._16_4_);
            field_200 = (((uint64_t)local_98._28_4_ << 32) | (uint32_t)local_98._24_4_);
            *this_03 = local_98._0_8_;
            field_184 = (((uint64_t)local_98._12_4_ << 32) | (uint32_t)local_98._8_4_);
            local_98._32_8_ = 0;
            local_98._40_8_ = 0;
            local_98._16_4_ = 0;
            local_98._20_4_ = 0;
            local_98._24_4_ = 0;
            local_98._28_4_ = 0;
            local_98[0] = 0;
            local_98._1_7_ = 0;
            local_98._8_4_ = 0;
            local_98._12_4_ = 0;
            local_98._48_8_ = local_98._48_8_ & 18446744069414584320;
            new (local_98) ToneMapEnvironmentOverrides();
            field_264 = local_98._48_4_;
            field_248 = local_98._32_8_;
            field_256 = local_98._40_8_;
            field_232 = (((uint64_t)local_98._20_4_ << 32) | (uint32_t)local_98._16_4_);
            field_240 = (((uint64_t)local_98._28_4_ << 32) | (uint32_t)local_98._24_4_);
            *this_04 = local_98._0_8_;
            field_224 = (((uint64_t)local_98._12_4_ << 32) | (uint32_t)local_98._8_4_);
            local_98._64_4_ = 0;
            local_98._68_4_ = 0;
            local_98._72_4_ = 0;
            local_98._76_4_ = 0;
            local_98._48_8_ = 0;
            local_98._56_4_ = 0;
            local_98._60_4_ = 0;
            local_98._32_8_ = 0;
            local_98._40_8_ = 0;
            local_98._16_4_ = 0;
            local_98._20_4_ = 0;
            local_98._24_4_ = 0;
            local_98._28_4_ = 0;
            local_98[0] = 0;
            local_98._1_7_ = 0;
            local_98._8_4_ = 0;
            local_98._12_4_ = 0;
            local_98._80_8_ = (unsigned long)(unsigned int)local_98._84_4_ << 32;
            new (local_98) ScatteringEnvironmentOverrides();
            *this_05 = *local_98;
            local_98._80_8_ = 0;
            local_98._88_8_ = 0;
            local_98._64_4_ = 0;
            local_98._68_4_ = 0;
            local_98._72_4_ = 0;
            local_98._76_4_ = 0;
            local_98._48_8_ = 0;
            local_98._56_4_ = 0;
            local_98._60_4_ = 0;
            local_98._32_8_ = 0;
            local_98._40_8_ = 0;
            local_98._16_4_ = 0;
            local_98._20_4_ = 0;
            local_98._24_4_ = 0;
            local_98._28_4_ = 0;
            local_98[0] = 0;
            local_98._1_7_ = 0;
            local_98._8_4_ = 0;
            local_98._12_4_ = 0;
            local_38 = 0;
            new (local_98) VolumetricEnvironmentOverrides();
            *this_06 = *local_98;
            local_98._8_4_ = 0;
            local_98[0] = 0;
            local_98._1_7_ = 0;
            new (local_98) LightProbeEnvironmentOverrides();
            field_460 = local_98._8_4_;
            *this_07 = local_98._0_8_;
        } else {
            m_hasAnyOverrides = 1;
            Decode(arg1_00, arg1);
            this_00->Decode(arg1_00, arg1);
            this_01->Decode(arg1_00, arg1);
            this_02->Decode(arg1_00, arg1);
            this_03->Decode(arg1_00, arg1);
            this_04->Decode(arg1_00, arg1);
            this_05->Decode(arg1_00, arg1);
            this_06->Decode(arg1_00, arg1);
            this_07->Decode(arg1_00, arg1);
            uVar1 = arg1.g2();
            m_transitionTime = (unsigned int)uVar1;
        }
    }

    // 0x100490970
    void LightingEnvironmentOverrides::Decode(unsigned long long arg1,
                                              PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) {
        int iVar2;
        float fVar3;
        Vector3T<float> local_40;

        if (IsFlagBitPresent(arg1, 0)) {
            iVar2 = arg2.g4();
            ((EnvironmentOverrideParam<int>*)((long)&field_1 + 3))->Set(iVar2 * 256 + 255);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 1)) {
            fVar3 = (float)arg2.gFloat();
            ((EnvironmentOverrideParam<float>*)((long)&field_8 + 4))->Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 2)) {
            fVar3 = (float)arg2.gFloat();
            ((EnvironmentOverrideParam<float>*)((long)&field_16 + 4))->Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 3)) {
            fVar3 = (float)arg2.gFloat();
            ((EnvironmentOverrideParam<float>*)((long)&field_24 + 4))->Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 4)) {
            local_40 = math::Vector3T(arg2, false);
            math::operator-(&local_40);
            EnvironmentOverrideParam<math::Vector3T<float>>::Set(&field_36);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 5)) {
            fVar3 = (float)arg2.gFloat();
            field_52.Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 45)) {
            fVar3 = (float)arg2.gFloat();
            field_60.Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 46)) {
            fVar3 = (float)arg2.gFloat();
            field_68.Set(fVar3);
            field_0 = 1;
        }
    }

    // 0x100490b00
    void FogEnvironmentOverrides::Decode(unsigned long long arg1,
                                         PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) {
        unsigned short uVar2;
        float fVar4;

        if (IsFlagBitPresent(arg1, 6)) {
            field_4.Set(arg2.g4() * 256 + 255);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 7)) {
            uVar2 = arg2.g2();
            field_12.Set((unsigned int)uVar2);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 8)) {
            fVar4 = (float)arg2.gFloat();
            field_20.Set(fVar4);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 9)) {
            fVar4 = (float)arg2.gFloat();
            field_28.Set(fVar4);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 10)) {
            fVar4 = (float)arg2.gFloat();
            field_36.Set(fVar4);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 11)) {
            fVar4 = (float)arg2.gFloat();
            field_44.Set(fVar4);
            field_0 = 1;
        }
    }

    // 0x100490c20
    void BloomEnvironmentOverrides::Decode(unsigned long long arg1,
                                           PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) {
        float fVar2;

        if (IsFlagBitPresent(arg1, 12)) {
            fVar2 = (float)arg2.gFloat();
            field_4.Set(fVar2);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 13)) {
            fVar2 = (float)arg2.gFloat();
            field_12.Set(fVar2);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 14)) {
            fVar2 = (float)arg2.gFloat();
            field_20.Set(fVar2);
            field_0 = 1;
        }
    }

    // 0x100490cc0
    void MapEnvironmentOverrides::Decode(unsigned long long arg1,
                                         PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) {
        unsigned short uVar2;

        if (IsFlagBitPresent(arg1, 15)) {
            uVar2 = arg2.g2();
            field_4.Set((unsigned int)uVar2);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 16)) {
            uVar2 = arg2.g2();
            field_12.Set((unsigned int)uVar2);
            field_0 = 1;
            arg2.Skip(2);
            arg2.Skip(2);
            arg2.Skip(2);
            arg2.Skip(2);
        }
    }

    // 0x100490d70
    void ColourGradingEnvironmentOverrides::Decode(unsigned long long arg1,
                                                   PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) {
        ColourRemap CVar2;

        unsigned long arg1_00 = 0;
        do {
            if (IsFlagBitPresent(arg1, (int)arg1_00 + 17) != '\0') {
                CVar2 = arg2.g2();
                arg2.gFloat();
                ((EnvironmentOverrideParam<ColourGradingEnvironmentOverrides::ColourRemap>*)field_4[arg1_00])
                    ->Set(CVar2 & 65535);
                field_0 = 1;
            }
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 3);
    }

    // 0x100490e10
    void ToneMapEnvironmentOverrides::Decode(unsigned long long arg1,
                                             PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) {
        float fVar3;

        if (IsFlagBitPresent(arg1, 20)) {
            field_1.Set(arg2.g4() == 1);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 21)) {
            field_4.Set(arg2.g4());
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 22)) {
            fVar3 = (float)arg2.gFloat();
            field_12.Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 23)) {
            fVar3 = (float)arg2.gFloat();
            field_20.Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 24)) {
            fVar3 = (float)arg2.gFloat();
            field_28.Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 25)) {
            fVar3 = (float)arg2.gFloat();
            field_36.Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 26)) {
            fVar3 = (float)arg2.gFloat();
            field_44.Set(fVar3);
            field_0 = 1;
        }
    }

    // 0x100490f60
    void ScatteringEnvironmentOverrides::Decode(unsigned long long arg1,
                                                PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) {
        float fVar3;
        Vector3T<float> local_58;
        Vector3T<float> local_48;
        Vector3T<float> local_38;

        if (IsFlagBitPresent(arg1, 27)) {
            field_1.Set(arg2.g4() == 1);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 28)) {
            fVar3 = (float)arg2.gFloat();
            ((EnvironmentOverrideParam<float>*)((long)&field_1 + 3))->Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 29)) {
            fVar3 = (float)arg2.gFloat();
            ((EnvironmentOverrideParam<float>*)((long)&field_8 + 4))->Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 30)) {
            fVar3 = (float)arg2.gFloat();
            ((EnvironmentOverrideParam<float>*)((long)&field_16 + 4))->Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 31)) {
            fVar3 = (float)arg2.gFloat();
            ((EnvironmentOverrideParam<float>*)((long)&field_24 + 4))->Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 32)) {
            local_58 = math::Vector3T(arg2, false);
            EnvironmentOverrideParam<math::Vector3T<float>>::Set(&field_36);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 33)) {
            local_48 = math::Vector3T(arg2, false);
            EnvironmentOverrideParam<math::Vector3T<float>>::Set(&field_52);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 34)) {
            local_38 = math::Vector3T(arg2, false);
            EnvironmentOverrideParam<math::Vector3T<float>>::Set(&field_68);
            field_0 = 1;
        }
    }

    // 0x100491110
    void VolumetricEnvironmentOverrides::Decode(unsigned long long arg1,
                                                PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) {
        int iVar2;
        float fVar3;

        if (IsFlagBitPresent(arg1, 35)) {
            fVar3 = (float)arg2.gFloat();
            ((EnvironmentOverrideParam<float>*)((long)&field_1 + 3))->Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 36)) {
            fVar3 = (float)arg2.gFloat();
            ((EnvironmentOverrideParam<float>*)((long)&field_8 + 4))->Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 37)) {
            fVar3 = (float)arg2.gFloat();
            ((EnvironmentOverrideParam<float>*)((long)&field_16 + 4))->Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 38)) {
            fVar3 = (float)arg2.gFloat();
            ((EnvironmentOverrideParam<float>*)((long)&field_24 + 4))->Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 39)) {
            fVar3 = (float)arg2.gFloat();
            ((EnvironmentOverrideParam<float>*)((long)&field_32 + 4))->Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 40)) {
            fVar3 = (float)arg2.gFloat();
            ((EnvironmentOverrideParam<float>*)((long)&field_40 + 4))->Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 41)) {
            fVar3 = (float)arg2.gFloat();
            ((EnvironmentOverrideParam<float>*)((long)&field_48 + 4))->Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 42)) {
            fVar3 = (float)arg2.gFloat();
            ((EnvironmentOverrideParam<float>*)((long)&field_56 + 4))->Set(fVar3);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 43)) {
            iVar2 = arg2.g4();
            math::Colour3FromR8G8B8A8(iVar2 * 256 + 255);
            EnvironmentOverrideParam<math::Vector3T<float>>::Set(&field_68);
            field_0 = 1;
        }
        if (IsFlagBitPresent(arg1, 44)) {
            iVar2 = arg2.g4();
            math::Colour3FromR8G8B8A8(iVar2 * 256 + 255);
            EnvironmentOverrideParam<math::Vector3T<float>>::Set(&field_84);
            field_0 = 1;
        }
    }

    // 0x1004912f0
    void LightProbeEnvironmentOverrides::Decode(unsigned long long arg1,
                                                PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) {
        if (IsFlagBitPresent(arg1, 47) != '\0') {
            field_4.Set((float)arg2.gFloat());
            field_0 = 1;
        }
    }

} // namespace jag::game
