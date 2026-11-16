// libs/game/runetek5/scene/EnvironmentOverride.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "EnvironmentOverride.h"

namespace jag::game {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    EnvironmentOverride::GetLightingOverrides() const;

    // 0x100324d40: the linker folded this into oldscape::graphics::NXTPixToolkit::GetPix2D(), which has identical code
    EnvironmentOverride::GetColourGradingOverrides() const;

    // 0x100443d40: the linker folded this into Entity::GetBoundingCapsule() const, which has identical code
    EnvironmentOverride::GetFogOverrides() const;

    // 0x1004903c0, 1040 bytes, base-object constructor, placed by class name and debug map
    // EnvironmentOverride::EnvironmentOverride(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void EnvironmentOverride::EnvironmentOverride(PacketT* param_1) {
        undefined8* this_00;
        undefined8* this_01;
        undefined8* this_02;
        undefined8* this_03;
        undefined8* this_04;
        undefined1* this_05;
        undefined1* this_06;
        undefined8* this_07;
        ushort uVar1;
        ulonglong uVar2;
        undefined8 uVar3;
        undefined1 local_98[96];
        undefined4 local_38;

        new (this) LightingEnvironmentOverrides();
        this_00 = &m_fogOverrides;
        new (this_00) FogEnvironmentOverrides();
        this_01 = &field_128;
        new (this_01) BloomEnvironmentOverrides();
        this_02 = &field_156;
        new (this_02) MapEnvironmentOverrides();
        this_03 = &field_176;
        new (this_03) ColourGradingEnvironmentOverrides();
        this_04 = &m_toneMapOverrides;
        new (this_04) ToneMapEnvironmentOverrides();
        this_05 = &field_268;
        new (this_05) ScatteringEnvironmentOverrides();
        this_06 = &field_352;
        new (this_06) VolumetricEnvironmentOverrides();
        this_07 = &m_lightProbeOverrides;
        new (this_07) LightProbeEnvironmentOverrides();
        m_transitionTime = 0;
        m_hasAnyOverrides = 0;
        uVar2 = param_1->g8();
        uVar3 = logger::default_logger();
        logger::Logger::Log(uVar3, 0, 5,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                            "EnvironmentOverride.cpp",
                            11, "Got override packet");
        if (uVar2 == 0) {
            uVar1 = param_1->g2();
            m_transitionTime = (uint)uVar1;
            m_hasAnyOverrides = 0;
            local_98._64_4_ = 0;
            local_98._68_4_ = 0;
            local_98._72_4_ = 0;
            local_98._48_8_ = 0;
            local_98._56_4_ = 0;
            local_98._60_4_ = 0;
            local_98[32] = 0;
            local_98._33_3_ = 0;
            local_98[36] = 0;
            local_98._37_3_ = 0;
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
            LightingEnvironmentOverrides::operator=((LightingEnvironmentOverrides*)this,
                                                    (LightingEnvironmentOverrides*)local_98);
            local_98[32] = 0;
            local_98._33_3_ = 0;
            local_98[36] = 0;
            local_98._37_3_ = 0;
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
            field_92 = CONCAT44(local_98._20_4_, local_98._16_4_);
            field_100 = CONCAT44(local_98._28_4_, local_98._24_4_);
            *this_00 = local_98._0_8_;
            field_84 = CONCAT44(local_98._12_4_, local_98._8_4_);
            local_98._16_4_ = 0;
            local_98._20_4_ = 0;
            local_98._24_4_ = 0;
            local_98[0] = 0;
            local_98._1_7_ = 0;
            local_98._8_4_ = 0;
            local_98._12_4_ = 0;
            new (local_98) BloomEnvironmentOverrides();
            field_140 = CONCAT44(local_98._16_4_, local_98._12_4_);
            field_148 = CONCAT44(local_98._24_4_, local_98._20_4_);
            *this_01 = local_98._0_8_;
            *(ulong*)&field_136 = CONCAT44(local_98._12_4_, local_98._8_4_);
            local_98[0] = 0;
            local_98._1_7_ = 0;
            local_98._8_4_ = 0;
            local_98._12_4_ = 0;
            local_98._16_4_ = 0;
            new (local_98) MapEnvironmentOverrides();
            field_172 = local_98._16_4_;
            *this_02 = local_98._0_8_;
            field_164 = CONCAT44(local_98._12_4_, local_98._8_4_);
            local_98._16_4_ = 0;
            local_98._20_4_ = 0;
            local_98._24_4_ = 0;
            local_98._28_4_ = 0;
            local_98[0] = 0;
            local_98._1_7_ = 0;
            local_98._8_4_ = 0;
            local_98._12_4_ = 0;
            local_98[32] = 0;
            local_98._33_3_ = 0;
            local_98[36] = 0;
            local_98._37_3_ = 0;
            new (local_98) ColourGradingEnvironmentOverrides();
            field_208 = local_98._32_8_;
            field_192 = CONCAT44(local_98._20_4_, local_98._16_4_);
            field_200 = CONCAT44(local_98._28_4_, local_98._24_4_);
            *this_03 = local_98._0_8_;
            field_184 = CONCAT44(local_98._12_4_, local_98._8_4_);
            local_98[32] = 0;
            local_98._33_3_ = 0;
            local_98[36] = 0;
            local_98._37_3_ = 0;
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
            field_232 = CONCAT44(local_98._20_4_, local_98._16_4_);
            field_240 = CONCAT44(local_98._28_4_, local_98._24_4_);
            *this_04 = local_98._0_8_;
            field_224 = CONCAT44(local_98._12_4_, local_98._8_4_);
            local_98._64_4_ = 0;
            local_98._68_4_ = 0;
            local_98._72_4_ = 0;
            local_98._76_4_ = 0;
            local_98._48_8_ = 0;
            local_98._56_4_ = 0;
            local_98._60_4_ = 0;
            local_98[32] = 0;
            local_98._33_3_ = 0;
            local_98[36] = 0;
            local_98._37_3_ = 0;
            local_98._40_8_ = 0;
            local_98._16_4_ = 0;
            local_98._20_4_ = 0;
            local_98._24_4_ = 0;
            local_98._28_4_ = 0;
            local_98[0] = 0;
            local_98._1_7_ = 0;
            local_98._8_4_ = 0;
            local_98._12_4_ = 0;
            local_98._80_8_ = (ulong)(uint)local_98._84_4_ << 32;
            new (local_98) ScatteringEnvironmentOverrides();
            ScatteringEnvironmentOverrides::operator=((ScatteringEnvironmentOverrides*)this_05,
                                                      (ScatteringEnvironmentOverrides*)local_98);
            local_98._80_8_ = 0;
            local_98._88_8_ = 0;
            local_98._64_4_ = 0;
            local_98._68_4_ = 0;
            local_98._72_4_ = 0;
            local_98._76_4_ = 0;
            local_98._48_8_ = 0;
            local_98._56_4_ = 0;
            local_98._60_4_ = 0;
            local_98[32] = 0;
            local_98._33_3_ = 0;
            local_98[36] = 0;
            local_98._37_3_ = 0;
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
            VolumetricEnvironmentOverrides::operator=((VolumetricEnvironmentOverrides*)this_06,
                                                      (VolumetricEnvironmentOverrides*)local_98);
            local_98._8_4_ = 0;
            local_98[0] = 0;
            local_98._1_7_ = 0;
            new (local_98) LightProbeEnvironmentOverrides();
            field_460 = local_98._8_4_;
            *this_07 = local_98._0_8_;
        } else {
            m_hasAnyOverrides = 1;
            Decode(uVar2, param_1);
            this_00->Decode(uVar2, param_1);
            this_01->Decode(uVar2, param_1);
            this_02->Decode(uVar2, param_1);
            this_03->Decode(uVar2, param_1);
            this_04->Decode(uVar2, param_1);
            this_05->Decode(uVar2, param_1);
            this_06->Decode(uVar2, param_1);
            this_07->Decode(uVar2, param_1);
            uVar1 = param_1->g2();
            m_transitionTime = (uint)uVar1;
        }
    }

    // 0x100490970, 400 bytes, placed by neighbouring functions
    // LightingEnvironmentOverrides::Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void LightingEnvironmentOverrides::Decode(ulonglong param_1, PacketT* param_2) {
        char cVar1;
        int iVar2;
        float fVar4;
        undefined1 local_40[16];

        cVar1 = IsFlagBitPresent(param_1, 0);
        if (cVar1 != '\0') {
            iVar2 = param_2->g4();
            (((long)&field_1 + 3), iVar2 * 256 + 255)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 1);
        if (cVar1 != '\0') {
            fVar4 = (float)param_2->gFloat();
            (((long)&field_8 + 4), fVar4)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 2);
        if (cVar1 != '\0') {
            fVar4 = (float)param_2->gFloat();
            (((long)&field_16 + 4), fVar4)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 3);
        if (cVar1 != '\0') {
            fVar4 = (float)param_2->gFloat();
            (((long)&field_24 + 4), fVar4)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 4);
        if (cVar1 != '\0') {
            new (local_40) math::Vector3T<float>(param_2, false);
            math::operator-((math*)local_40, (Vector3T*)param_2);
            (&field_36)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 5);
        if (cVar1 != '\0') {
            fVar4 = (float)param_2->gFloat();
            (&field_52, fVar4)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 45);
        if (cVar1 != '\0') {
            fVar4 = (float)param_2->gFloat();
            (&field_60, fVar4)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 46);
        if (cVar1 != '\0') {
            fVar4 = (float)param_2->gFloat();
            (&field_68, fVar4)->Set();
            field_0 = 1;
        }
    }

    // 0x100490b00, 288 bytes, placed by neighbouring functions
    // FogEnvironmentOverrides::Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void FogEnvironmentOverrides::Decode(ulonglong param_1, PacketT* param_2) {
        char cVar1;
        ushort uVar2;
        int iVar3;
        float fVar4;

        cVar1 = IsFlagBitPresent(param_1, 6);
        if (cVar1 != '\0') {
            iVar3 = param_2->g4();
            (&field_4, iVar3 * 256 + 255)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 7);
        if (cVar1 != '\0') {
            uVar2 = param_2->g2();
            (&field_12, (uint)uVar2)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 8);
        if (cVar1 != '\0') {
            fVar4 = (float)param_2->gFloat();
            (&field_20, fVar4)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 9);
        if (cVar1 != '\0') {
            fVar4 = (float)param_2->gFloat();
            (&field_28, fVar4)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 10);
        if (cVar1 != '\0') {
            fVar4 = (float)param_2->gFloat();
            (&field_36, fVar4)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 11);
        if (cVar1 != '\0') {
            fVar4 = (float)param_2->gFloat();
            (&field_44, fVar4)->Set();
            field_0 = 1;
        }
    }

    // 0x100490c20, 160 bytes, placed by neighbouring functions
    // BloomEnvironmentOverrides::Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void BloomEnvironmentOverrides::Decode(ulonglong param_1, PacketT* param_2) {
        char cVar1;
        float fVar2;

        cVar1 = IsFlagBitPresent(param_1, 12);
        if (cVar1 != '\0') {
            fVar2 = (float)param_2->gFloat();
            (&field_4, fVar2)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 13);
        if (cVar1 != '\0') {
            fVar2 = (float)param_2->gFloat();
            (&field_12, fVar2)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 14);
        if (cVar1 != '\0') {
            fVar2 = (float)param_2->gFloat();
            (&field_20, fVar2)->Set();
            field_0 = 1;
        }
    }

    // 0x100490cc0, 176 bytes, placed by neighbouring functions
    // MapEnvironmentOverrides::Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void MapEnvironmentOverrides::Decode(ulonglong param_1, PacketT* param_2) {
        char cVar1;
        ushort uVar2;

        cVar1 = IsFlagBitPresent(param_1, 15);
        if (cVar1 != '\0') {
            uVar2 = param_2->g2();
            (&field_4, (uint)uVar2)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 16);
        if (cVar1 != '\0') {
            uVar2 = param_2->g2();
            (&field_12, (uint)uVar2)->Set();
            field_0 = 1;
            param_2->Skip(2);
            param_2->Skip(2);
            param_2->Skip(2);
            param_2->Skip(2);
        }
    }

    // 0x100490d70, 160 bytes, placed by neighbouring functions
    // ColourGradingEnvironmentOverrides::Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ColourGradingEnvironmentOverrides::Decode(ulonglong param_1, PacketT* param_2) {
        uint uVar2;
        EnvironmentOverrideParam<ColourGradingEnvironmentOverrides::ColourRemap>* pEVar3;
        ulong uVar4;
        uint uVar5;

        uVar4 = 0;
        do {
            if (IsFlagBitPresent(param_1, (int)uVar4 + 17) != '\0') {
                uVar2 = param_2->g2();
                uVar5 = param_2->gFloat();
                pEVar3 = (EnvironmentOverrideParam<ColourGradingEnvironmentOverrides::ColourRemap>*)std::
                    array<EnvironmentOverrideParam<ColourGradingEnvironmentOverrides::ColourRemap>, 3ul>::operator[](
                        (array<EnvironmentOverrideParam<ColourGradingEnvironmentOverrides::ColourRemap>, 3ul>*)&field_4,
                        uVar4);
                pEVar3->Set((ulong)uVar2 & 65535 | (ulong)uVar5 << 32);
                field_0 = 1;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 != 3);
    }

    // 0x100490e10, 336 bytes, placed by neighbouring functions
    // ToneMapEnvironmentOverrides::Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ToneMapEnvironmentOverrides::Decode(ulonglong param_1, PacketT* param_2) {
        char cVar1;
        int iVar2;
        float fVar3;

        cVar1 = IsFlagBitPresent(param_1, 20);
        if (cVar1 != '\0') {
            iVar2 = param_2->g4();
            (&field_1, iVar2 == 1)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 21);
        if (cVar1 != '\0') {
            iVar2 = param_2->g4();
            (&field_4, iVar2)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 22);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (&field_12, fVar3)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 23);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (&field_20, fVar3)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 24);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (&field_28, fVar3)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 25);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (&field_36, fVar3)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 26);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (&field_44, fVar3)->Set();
            field_0 = 1;
        }
    }

    // 0x100490f60, 432 bytes, placed by neighbouring functions
    // ScatteringEnvironmentOverrides::Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ScatteringEnvironmentOverrides::Decode(ulonglong param_1, PacketT* param_2) {
        char cVar1;
        int iVar2;
        float fVar3;
        undefined8 local_58;
        undefined4 local_50;
        undefined8 local_48;
        undefined4 local_40;
        undefined8 local_38;
        undefined4 local_30;

        cVar1 = IsFlagBitPresent(param_1, 27);
        if (cVar1 != '\0') {
            iVar2 = param_2->g4();
            (&field_1, iVar2 == 1)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 28);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (((long)&field_1 + 3), fVar3)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 29);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (((long)&field_8 + 4), fVar3)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 30);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (((long)&field_16 + 4), fVar3)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 31);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (((long)&field_24 + 4), fVar3)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 32);
        if (cVar1 != '\0') {
            new (&local_58) math::Vector3T<float>(param_2, false);
            local_58->Set(local_50, &field_36);
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 33);
        if (cVar1 != '\0') {
            new (&local_48) math::Vector3T<float>(param_2, false);
            local_48->Set(local_40, &field_52);
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 34);
        if (cVar1 != '\0') {
            new (&local_38) math::Vector3T<float>(param_2, false);
            local_38->Set(local_30, &field_68);
            field_0 = 1;
        }
    }

    // 0x100491110, 480 bytes, placed by neighbouring functions
    // VolumetricEnvironmentOverrides::Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void VolumetricEnvironmentOverrides::Decode(ulonglong param_1, PacketT* param_2) {
        char cVar1;
        int iVar2;
        float fVar3;

        cVar1 = IsFlagBitPresent(param_1, 35);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (((long)&field_1 + 3), fVar3)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 36);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (((long)&field_8 + 4), fVar3)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 37);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (((long)&field_16 + 4), fVar3)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 38);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (((long)&field_24 + 4), fVar3)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 39);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (((long)&field_32 + 4), fVar3)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 40);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (((long)&field_40 + 4), fVar3)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 41);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (((long)&field_48 + 4), fVar3)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 42);
        if (cVar1 != '\0') {
            fVar3 = (float)param_2->gFloat();
            (((long)&field_56 + 4), fVar3)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 43);
        if (cVar1 != '\0') {
            iVar2 = param_2->g4();
            math::Colour3FromR8G8B8A8(iVar2 * 256 + 255);
            (&field_68)->Set();
            field_0 = 1;
        }
        cVar1 = IsFlagBitPresent(param_1, 44);
        if (cVar1 != '\0') {
            iVar2 = param_2->g4();
            math::Colour3FromR8G8B8A8(iVar2 * 256 + 255);
            (&field_84)->Set();
            field_0 = 1;
        }
    }

    // 0x1004912f0, 80 bytes, placed by neighbouring functions
    // LightProbeEnvironmentOverrides::Decode(unsigned long long, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void LightProbeEnvironmentOverrides::Decode(ulonglong param_1, PacketT* param_2) {
        float fVar2;

        if (IsFlagBitPresent(param_1, 47) != '\0') {
            fVar2 = (float)param_2->gFloat();
            (&field_4, fVar2)->Set();
            field_0 = 1;
        }
    }

    // 0x100491340, 16 bytes, complete-object constructor, placed by class name
    // EnvironmentOverride::EnvironmentOverride(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&): jumps straight to the base-object constructor

} // namespace jag::game
