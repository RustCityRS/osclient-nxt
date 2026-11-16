// libs/graphics/runetek5/MaterialRaw.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "MaterialRaw.h"

namespace jag::graphics {
    // 0x100023af0: MaterialRaw::IsValid() const has the same machine code as hal::Haptics::GetEnabled() const

    // 0x10097c240
    MaterialRaw::MaterialRaw() : m_valid(0), field_4(-1) {
        field_8 = '\0';
        field_12 = 64;
        field_16 = 0;
        field_17 = 0;
        field_18 = 0;
        field_19 = 0;
        field_20 = '\0';
        field_24 = 4294967295;
        field_28 = 4294967295;
        field_32 = 0;
        field_33 = false;
        field_36 = 0;
        field_40 = 0;
        field_44 = 0;
        field_48 = 0;
        *(uint64_t*)((long)&field_48 + 1) = 0;
        field_60 = 0;
        field_64 = false;
        field_65 = false;
        field_66 = 0;
        field_67 = 0;
        field_65 = false;
        field_66 = 0;
        field_67 = 0;
        field_68 = 0;
        field_72 = 0;
        field_76 = -1;
        field_80 = -1;
        field_84 = -1;
        field_88 = 0;
        field_92 = 0;
        field_96 = 0;
        field_100 = 1065353216;
        field_104 = 0;
        field_108 = 1107296256;
        field_112 = 1084227584;
        field_116 = 1022739087;
        field_120 = HideFacesMode::NEVER;
        field_128 = 0;
        field_132 = 0;
        field_136 = 4294967295;
        field_140 = 4294967295;
        new (&field_144) ImVec4(0.0, 0.0, 0.0, 0.0);
        field_160 = 0;
        field_161 = 1;
        field_162 = 1;
        field_164 = 0;
        field_168 = 1065353216;
        field_172 = 0;
        field_176 = 1065353216;
        field_180 = 0;
        field_184 = BlendMode::NORMAL;
        field_192 = AlphaMode::ALPHA_OPAQUE;
        field_200 = 255;
        uint8_t* puVar1 = graphicutils::TextureWrapMode::CLAMP;
        field_208 = graphicutils::TextureWrapMode::CLAMP;
        field_216 = puVar1;
        field_224 = 0;
        field_226 = 0;
        field_227 = 0;
    }

    // 0x10097c390
    void MaterialRaw::Decode(int arg1, PacketT<Array<unsigned char>>& arg2) {
        field_4 = arg1;
        char cVar1 = arg2.g1();
        field_8 = cVar1;
        if (!cVar1) {
            DecodeRT5(arg2);
        } else {
            DecodeRT7(arg2);
        }
    }

    // 0x10097c3d0
    void MaterialRaw::DecodeRT5(PacketT<Array<unsigned char>>& arg1) {
        uint8_t uVar3;
        short sVar4;
        float fVar10;
        float fVar11;
        float arg3;
        float arg4;

        uint8_t bVar1 = arg1.g1();
        unsigned int uVar8 = (unsigned int)bVar1;
        uint32_t uVar6 = SizeCodeToSize((MaterialRaw*)arg1, (unsigned int)bVar1);
        field_12 = uVar6;
        arg1.g1();
        unsigned int uVar7 = arg1.g4();
        bVar1 = (uint8_t)uVar7;
        field_16 = bVar1 & 1;
        field_17 = bVar1 >> 1 & 1;
        field_18 = bVar1 >> 2 & 1;
        field_19 = bVar1 >> 3 & 1;
        field_20 = (char)((uVar7 & 16) >> 4);
        if (((uVar7 & 1) == 0) && ((uVar7 & 16) == 0)) {
            bVar1 = field_19;
        } else {
            uVar6 = arg1.g4();
            field_24 = uVar6;
            bVar1 = field_19;
        }
        if ((bVar1 != 0) || (field_17 != 0)) {
            uVar6 = arg1.g4();
            field_28 = uVar6;
        }
        bVar1 = arg1.g1();
        uint8_t* puVar9 = (uint8_t*)((TextureWrapMode*)(unsigned long)(bVar1 & 7))->GetByID(uVar8);
        field_208 = puVar9;
        puVar9 = (uint8_t*)((TextureWrapMode*)(unsigned long)(bVar1 >> 3 & 7))->GetByID(uVar8);
        field_216 = puVar9;
        uVar7 = arg1.g4();
        bVar1 = (uint8_t)uVar7;
        field_160 = bVar1 & 1;
        field_32 = bVar1 >> 1 & 1;
        field_161 = bVar1 >> 2 & 1;
        field_162 = bVar1 >> 3 & 1;
        field_226 = (uint8_t)(uVar7 >> 21) & 1;
        field_227 = (uint8_t)(uVar7 >> 20) & 1;
        if ((uVar7 & 262144) != 0) {
            uVar6 = arg1.g4();
            field_136 = uVar6;
        }
        if ((uVar7 & 524288) != 0) {
            uVar6 = arg1.g4();
            field_140 = uVar6;
            fVar10 = (float)arg1.gFloat();
            fVar11 = (float)arg1.gFloat();
            arg3 = (float)arg1.gFloat();
            arg4 = (float)arg1.gFloat();
            field_144.Set(1.0 / fVar10, 1.0 / fVar11, arg3, arg4);
        }
        if ((uVar7 & 16) == 0) {
            bVar1 = field_17;
        } else {
            uVar6 = arg1.gFloat();
            field_164 = uVar6;
            uVar6 = arg1.gFloat();
            field_36 = uVar6;
            bVar1 = field_17;
        }
        if (bVar1 != 0) {
            uVar6 = arg1.gFloat();
            field_168 = uVar6;
        }
        char cVar2 = arg1.g1();
        field_33 = cVar2 == '\x01';
        bVar1 = arg1.g1();
        puVar9 = (uint8_t*)((BlendMode*)(unsigned long)bVar1)->GetByID(uVar8);
        field_184 = puVar9;
        bVar1 = arg1.g1();
        puVar9 = (uint8_t*)((AlphaMode*)(unsigned long)bVar1)->GetByID(uVar8);
        field_192 = puVar9;
        if (puVar9 == AlphaMode::ALPHA_TESTED) {
            bVar1 = arg1.g1();
            field_200 = (unsigned int)bVar1;
        }
        if ((uVar7 & 2048) != 0) {
            uVar6 = arg1.gFloat();
            field_172 = uVar6;
            uVar6 = arg1.gFloat();
            field_176 = uVar6;
            uVar6 = arg1.gFloat();
            field_180 = uVar6;
        }
        uVar8 = arg1.g1();
        if ((uVar8 & 1) != 0) {
            sVar4 = arg1.g2s();
            uVar6 = AnimationSpeedUnpackValue(sVar4);
            field_128 = uVar6;
        }
        if ((uVar8 & 2) != 0) {
            sVar4 = arg1.g2s();
            uVar6 = AnimationSpeedUnpackValue(sVar4);
            field_132 = uVar6;
        }
        cVar2 = arg1.g1();
        if (cVar2 == '\x01') {
            field_40 = 1;
            cVar2 = arg1.g1s();
            field_44 = (int)cVar2;
            cVar2 = arg1.g1s();
            field_48 = (int)cVar2;
            uVar6 = arg1.g4s();
            field_52 = uVar6;
            bVar1 = arg1.g1();
            field_68 = (unsigned int)bVar1;
            cVar2 = arg1.g1();
            field_56 = cVar2 == '\x01';
            bVar1 = arg1.g1();
            field_60 = (unsigned int)bVar1;
            cVar2 = arg1.g1();
            field_64 = cVar2 == '\x01';
            cVar2 = arg1.g1();
            field_65 = cVar2 == '\x01';
            uVar3 = arg1.g1();
            field_66 = uVar3;
            uVar3 = arg1.g1();
            field_67 = uVar3;
            field_224 = arg1.g2();
        }
        m_valid = 1;
    }

    // 0x10097c7f0
    void MaterialRaw::DecodeRT7(PacketT<Array<unsigned char>>& arg1) {
        uint8_t bVar1;
        short sVar3;
        uint32_t uVar6;
        int iVar7;
        MaterialRaw* pMVar10;
        float fVar11;
        float fVar12;
        float arg3;
        float arg4;

        unsigned int uVar5 = arg1.g4();
        unsigned int arg1_00 = (unsigned int)arg1;
        uint8_t bVar2 = (uint8_t)uVar5;
        field_160 = bVar2 & 1;
        field_161 = bVar2 >> 2 & 1;
        field_162 = bVar2 >> 3 & 1;
        field_72 = (uint8_t)(uVar5 >> 10) & 1;
        field_226 = (uint8_t)(uVar5 >> 21) & 1;
        field_227 = (uint8_t)(uVar5 >> 20) & 1;
        if ((uVar5 & 32) != 0) {
            pMVar10 = (MaterialRaw*)arg1;
            bVar1 = arg1.g1();
            arg1_00 = (unsigned int)bVar1;
            uVar6 = SizeCodeToSize(pMVar10, (unsigned int)bVar1);
            field_88 = uVar6;
            iVar7 = arg1.g4();
            field_76 = iVar7;
            if (iVar7 == -1) {
                LogAssert("m_diffuseAlphaMapID != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                          "MaterialRaw.cpp",
                          155, nullptr);
            }
        }
        if ((uVar5 & 64) != 0) {
            pMVar10 = (MaterialRaw*)arg1;
            bVar1 = arg1.g1();
            arg1_00 = (unsigned int)bVar1;
            uVar6 = SizeCodeToSize(pMVar10, (unsigned int)bVar1);
            field_92 = uVar6;
            iVar7 = arg1.g4();
            field_80 = iVar7;
            if (iVar7 == -1) {
                LogAssert("m_normalEmissiveMapID != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                          "MaterialRaw.cpp",
                          163, nullptr);
            }
        }
        if ((char)bVar2 < '\0') {
            pMVar10 = (MaterialRaw*)arg1;
            bVar2 = arg1.g1();
            arg1_00 = (unsigned int)bVar2;
            uVar6 = SizeCodeToSize(pMVar10, (unsigned int)bVar2);
            field_96 = uVar6;
            iVar7 = arg1.g4();
            field_84 = iVar7;
            if (iVar7 == -1) {
                LogAssert("m_metalnessRoughnessMapID != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                          "MaterialRaw.cpp",
                          171, nullptr);
            }
        }
        if ((uVar5 & 262144) != 0) {
            uVar6 = arg1.g4();
            field_136 = uVar6;
        }
        if ((uVar5 & 524288) != 0) {
            uVar6 = arg1.g4();
            field_140 = uVar6;
            fVar11 = (float)arg1.gFloat();
            fVar12 = (float)arg1.gFloat();
            arg3 = (float)arg1.gFloat();
            arg4 = (float)arg1.gFloat();
            field_144.Set(1.0 / fVar11, 1.0 / fVar12, arg3, arg4);
        }
        if ((uVar5 & 4096) != 0) {
            uVar6 = arg1.gFloat();
            field_164 = uVar6;
        }
        if ((uVar5 & 8192) != 0) {
            uVar6 = arg1.gFloat();
            field_168 = uVar6;
        }
        if ((uVar5 & 16384) != 0) {
            uVar6 = arg1.gFloat();
            field_100 = uVar6;
        }
        if ((short)uVar5 < 0) {
            uVar6 = arg1.g4();
            field_104 = uVar6;
        }
        if ((uVar5 & 64) != 0) {
            uVar6 = arg1.gFloat();
            field_108 = uVar6;
        }
        if ((uVar5 & 2048) != 0) {
            uVar6 = arg1.gFloat();
            field_172 = uVar6;
            uVar6 = arg1.gFloat();
            field_176 = uVar6;
            uVar6 = arg1.gFloat();
            field_180 = uVar6;
        }
        if ((uVar5 & 65536) != 0) {
            uVar6 = arg1.gFloat();
            field_112 = uVar6;
        }
        if ((uVar5 & 131072) != 0) {
            uVar6 = arg1.gFloat();
            field_116 = uVar6;
        }
        if ((uVar5 & 256) != 0) {
            sVar3 = arg1.g2s();
            uVar6 = AnimationSpeedUnpackValue(sVar3);
            field_128 = uVar6;
        }
        if ((uVar5 & 512) != 0) {
            sVar3 = arg1.g2s();
            uVar6 = AnimationSpeedUnpackValue(sVar3);
            field_132 = uVar6;
        }
        bVar2 = arg1.g1();
        uint8_t* puVar8 = (uint8_t*)((TextureWrapMode*)(unsigned long)(bVar2 & 7))->GetByID(arg1_00);
        field_208 = puVar8;
        puVar8 = (uint8_t*)((TextureWrapMode*)(unsigned long)(bVar2 >> 3 & 7))->GetByID(arg1_00);
        field_216 = puVar8;
        bVar2 = arg1.g1();
        puVar8 = (uint8_t*)((BlendMode*)(unsigned long)bVar2)->GetByID(arg1_00);
        field_184 = puVar8;
        bVar2 = arg1.g1();
        puVar8 = (uint8_t*)((HideFacesMode*)(unsigned long)bVar2)->GetByID(arg1_00);
        field_120 = puVar8;
        bVar2 = arg1.g1();
        puVar8 = (uint8_t*)((AlphaMode*)(unsigned long)bVar2)->GetByID(arg1_00);
        field_192 = puVar8;
        if (puVar8 == AlphaMode::ALPHA_TESTED) {
            bVar2 = arg1.g1();
            field_200 = (unsigned int)bVar2;
        }
        field_224 = arg1.g2();
        arg1.g1();
        m_valid = 1;
    }

    // 0x10097cc50
    uint32_t MaterialRaw::SizeCodeToSize(unsigned int arg1) {
        if (4 < arg1) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                            "MaterialRaw.cpp",
                            286, "MaterialRaw: Unknown size code: %u");
        }
        return *(uint32_t*)(&reinterpret_cast<const uint64_t*>(&MAX_HARDWARE_THREAD_LIMIT)[2] + (long)(int)arg1 * 4);
    }

    // 0x10097cca0
    float MaterialRaw::AnimationSpeedUnpackValue(short arg1) {
        uint16_t in_register_0000003a;

        return (float)(((uint32_t)in_register_0000003a << 16) | (uint16_t)arg1) * 6.0560167e-05;
    }

    // 0x10097ccc0
    int MaterialRaw::AnimationSpeedPackValue(float arg1) {
        float local_14 = arg1 * 16512.504;
        float fVar1 = math::Clamp<float>(local_14, -32768.0, 32767.0);
        return (int)(short)(int)fVar1;
    }

} // namespace jag::graphics
