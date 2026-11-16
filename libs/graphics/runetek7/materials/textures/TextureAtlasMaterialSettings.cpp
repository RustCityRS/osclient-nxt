// libs/graphics/runetek7/materials/textures/TextureAtlasMaterialSettings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "TextureAtlasMaterialSettings.h"

namespace jag::graphics {
    // 0x100858a50
    uint64_t TextureAtlasMaterialSettings::Initialise(const Material& material) {
        int iVar9;
        uint32_t* puVar14;
        unsigned long arg1;
        unsigned long arg1_00;
        unsigned long local_48;

        char cVar5 = material.IsRT7();
        field_48 = cVar5;
        auto puVar10 = data();
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        auto puVar11 = material.GetWrapU();
        auto puVar12 = material.GetWrapV();
        unsigned int uVar15 = 0;
        if ((puVar11 != nullptr) && (puVar12 != nullptr)) {
            uVar15 = (unsigned int)(puVar11 == graphicutils::TextureWrapMode::BORDER ||
                                    puVar11 == graphicutils::TextureWrapMode::CLAMP) +
                     (unsigned int)(puVar12 == graphicutils::TextureWrapMode::BORDER ||
                                    puVar12 == graphicutils::TextureWrapMode::CLAMP) *
                         2 +
                     (unsigned int)(puVar11 == graphicutils::TextureWrapMode::REPEAT) * 4 +
                     (unsigned int)(puVar12 == graphicutils::TextureWrapMode::REPEAT) * 8;
        }
        float fVar16 = (float)material.GetMaterialAnimationH();
        float fVar17 = (float)material.GetMaterialAnimationV();
        float local_34 = 0.0;
        float local_3c = 1.0;
        float local_38 = (float)material.GetRefractionAmount();
        auto pfVar13 = std::min<float>(local_3c, local_38);
        pfVar13 = std::max<float>(local_34, *pfVar13);
        float fVar1 = *pfVar13;
        local_34 = 1.0;
        local_3c = 3.0;
        local_38 = (float)material.GetRefractionAmount();
        pfVar13 = std::min<float>(local_3c, local_38);
        pfVar13 = std::max<float>(local_34, *pfVar13);
        float fVar2 = *pfVar13;
        local_34 = 0.0;
        local_3c = 10.0;
        local_38 = (float)material.GetRefractionAmount();
        pfVar13 = std::min<float>(local_3c, local_38);
        pfVar13 = std::max<float>(local_34, *pfVar13);
        uint32_t uVar6 = render::RGBAToABGR((int)(*pfVar13 * 6553.5) & 65535U |
                                            ((int)(fVar2 * 127.5 - 127.5) & 255U) << 16 | (int)(fVar1 * 255.0) << 24);
        Layout* this_00 = (Layout*)material.GetPixelBuffer();
        pfVar13 = (float*)this_00->SSOBeginPtr();
        fVar1 = *pfVar13;
        auto this_01 = material.GetPixelBuffer();
        pfVar13 = (float*)this_01->y();
        fVar2 = *pfVar13;
        auto this_02 = material.GetPixelBuffer();
        pfVar13 = (float*)this_02->second();
        float fVar3 = *pfVar13;
        auto this_03 = material.GetPixelBuffer();
        pfVar13 = (float*)this_03->qw();
        float fVar4 = *pfVar13;
        int iVar7 = material.GetZ();
        cVar5 = field_48;
        uint32_t uVar8 =
            render::RGBAToABGR((int)(fVar17 * 16383.75 + 32767.5) & 65535U | (int)(fVar16 * 16383.75 + 32767.5) << 16);
        if (!cVar5) {
            puVar14 = (uint32_t*)(*this)[2];
            *puVar14 = uVar8;
            uVar8 = render::RGBAToABGR(uVar15);
            puVar14 = (uint32_t*)(*this)[1];
            *puVar14 = uVar8;
            local_34 = (float)material.GetEnvMapIrradianceScale();
            pfVar13 = std::min<float>(MAX_SPECULAR_FACTOR_RT5, local_34);
            pfVar13 = std::max<float>(MIN_SPECULAR_FACTOR_RT5, *pfVar13);
            fVar16 = *pfVar13;
            fVar17 = (float)material.GetNormalScale();
            uVar8 = render::RGBAToABGR((int)(fVar17 * 2550.0 + 20400.0) & 65535U | (int)(fVar16 * 255.0) << 16);
            puVar14 = (uint32_t*)(*this)[3];
            *puVar14 = uVar8;
            local_48 = 6;
            arg1_00 = 5;
            arg1 = 4;
        } else {
            puVar14 = (uint32_t*)(*this)[3];
            *puVar14 = uVar8;
            uVar8 = render::RGBAToABGR(uVar15);
            puVar14 = (uint32_t*)(*this)[2];
            *puVar14 = uVar8;
            local_34 = (float)material.GetSpecularScale();
            pfVar13 = std::min<float>(MAX_SPECULAR_FACTOR_RT7, local_34);
            pfVar13 = std::max<float>(MIN_SPECULAR_FACTOR_RT7, *pfVar13);
            fVar16 = *pfVar13;
            fVar17 = (float)material.GetNormalScale();
            uVar8 = render::RGBAToABGR((int)(fVar17 * 2550.0 + 20400.0) & 65535U | (int)(fVar16 * 7.999878f) << 16);
            puVar14 = (uint32_t*)(*this)[4];
            *puVar14 = uVar8;
            local_34 = 0.0;
            local_3c = 32.0;
            local_38 = (float)material.GetEmissiveScale();
            pfVar13 = std::min<float>(local_3c, local_38);
            pfVar13 = std::max<float>(local_34, *pfVar13);
            uVar8 = render::RGBAToABGR((int)(*pfVar13 * 2047.9688) & 65535);
            puVar14 = (uint32_t*)(*this)[1];
            *puVar14 = uVar8;
            iVar9 = material.GetAmplitude();
            cVar5 = material.HasEmissiveSourceColour();
            uVar15 = iVar9 * 256 + 255;
            if (!cVar5) {
                uVar15 = iVar9 * 256;
            }
            uVar8 = render::RGBAToABGR(uVar15);
            puVar14 = (uint32_t*)(*this)[5];
            *puVar14 = uVar8;
            puVar14 = (uint32_t*)(*this)[6];
            *puVar14 = uVar6;
            local_34 = 0.0;
            local_3c = 1.0;
            local_38 = (float)material.GetDefaultNonMetalSpecular();
            pfVar13 = std::min<float>(local_3c, local_38);
            pfVar13 = std::max<float>(local_34, *pfVar13);
            fVar16 = *pfVar13;
            local_34 = 0.0;
            local_3c = 10.0;
            local_38 = (float)material.GetPlaybackStart();
            pfVar13 = std::min<float>(local_3c, local_38);
            pfVar13 = std::max<float>(local_34, *pfVar13);
            uVar6 = render::RGBAToABGR(((int)(*pfVar13 * 6553.5) & 65535U) << 8 | (int)(fVar16 * 255.0) << 24);
            local_48 = 9;
            arg1_00 = 8;
            arg1 = 7;
        }
        puVar14 = (uint32_t*)(*this)[arg1];
        *puVar14 = uVar6;
        uVar8 =
            render::RGBAToABGR((int)(fVar2 * 16383.75 + 32767.5) & 65535U | (int)(fVar1 * 16383.75 + 32767.5) << 16);
        puVar14 = (uint32_t*)(*this)[arg1_00];
        *puVar14 = uVar8;
        uVar8 =
            render::RGBAToABGR((int)(fVar4 * 16383.75 + 32767.5) & 65535U | (int)(fVar3 * 16383.75 + 32767.5) << 16);
        puVar14 = (uint32_t*)(*this)[local_48];
        *puVar14 = uVar8;
        uVar8 = render::RGBAToABGR(iVar7 << 16);
        puVar14 = (uint32_t*)(*this)[11];
        *puVar14 = uVar8;
        return 1;
    }

    // 0x100859040
    void TextureAtlasMaterialSettings::SetTextureSlots(const std::array<unsigned short, 3ul>& arg1,
                                                       const std::array<unsigned short, 3ul>& arg2,
                                                       const std::array<unsigned char, 3ul>& arg3) {
        unsigned short uVar2;
        unsigned short uVar3;
        unsigned short uVar4;
        uint32_t uVar5;
        unsigned int* puVar7;
        unsigned short* puVar8;
        unsigned short* puVar9;
        unsigned short* puVar10;
        unsigned short* puVar11;
        uint32_t* puVar12;
        unsigned short* puVar13;
        unsigned short* puVar14;

        uint8_t* pbVar6 = &arg3[0];
        uint8_t bVar1 = *pbVar6;
        pbVar6 = &arg3[1];
        unsigned int arg1_00 = (unsigned int)*pbVar6 << 16 | (unsigned int)bVar1 << 24;
        pbVar6 = &arg3[2];
        unsigned int uVar15 = (unsigned int)*pbVar6 << 8 | arg1_00;
        if (uVar15 == 0) {
            LogAssert("sizes != 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlasMaterialSettings.cpp",
                      209, nullptr);
        }
        if (field_48 == '\0') {
            uVar15 = render::RGBAToABGR(arg1_00);
            puVar7 = (unsigned int*)(*this)[1];
            *puVar7 = *puVar7 | uVar15;
            puVar8 = &arg1[0];
            uVar2 = *puVar8;
            puVar9 = &arg2[0];
            uVar4 = *puVar9;
            puVar10 = &arg1[1];
            uVar3 = *puVar10;
            puVar11 = &arg2[1];
            uVar5 = render::RGBAToABGR((unsigned int)(uint8_t)*puVar11 | (uVar3 & 255) << 8 |
                                       (unsigned int)(uint8_t)uVar4 << 16 | (unsigned int)uVar2 << 24);
            puVar12 = (uint32_t*)(*this)[0];
            *puVar12 = uVar5;
            uVar15 = render::RGBAToABGR(((unsigned int)(255 < *puVar8) + (unsigned int)(255 < *puVar9) * 2 +
                                         (unsigned int)(255 < *puVar10) * 4 + (unsigned int)(255 < *puVar11) * 8) *
                                        256);
        } else {
            uVar15 = render::RGBAToABGR(uVar15);
            puVar7 = (unsigned int*)(*this)[2];
            *puVar7 = *puVar7 | uVar15;
            puVar8 = &arg1[0];
            uVar2 = *puVar8;
            puVar9 = &arg2[0];
            uVar4 = *puVar9;
            puVar10 = &arg1[1];
            uVar3 = *puVar10;
            puVar11 = &arg2[1];
            uVar5 = render::RGBAToABGR((unsigned int)(uint8_t)*puVar11 | (uVar3 & 255) << 8 |
                                       (unsigned int)(uint8_t)uVar4 << 16 | (unsigned int)uVar2 << 24);
            puVar12 = (uint32_t*)(*this)[0];
            *puVar12 = uVar5;
            puVar13 = &arg1[2];
            uVar2 = *puVar13;
            puVar14 = &arg2[2];
            uVar15 = render::RGBAToABGR((unsigned int)(uint8_t)*puVar14 << 16 | (unsigned int)uVar2 << 24);
            puVar7 = (unsigned int*)(*this)[1];
            *puVar7 = *puVar7 | uVar15;
            uVar15 = render::RGBAToABGR((unsigned int)(255 < *puVar14) << 5 | (unsigned int)(255 < *puVar13) << 4 |
                                        (unsigned int)(255 < *puVar8) + (unsigned int)(255 < *puVar9) * 2 +
                                            (unsigned int)(255 < *puVar10) * 4 + (unsigned int)(255 < *puVar11) * 8);
            puVar7 = (unsigned int*)(*this)[7];
        }
        *puVar7 = *puVar7 | uVar15;
        m_valid = 1;
    }

    // 0x10085b580
    bool TextureAtlasMaterialSettings::IsValid() const {
        return m_valid;
    }

} // namespace jag::graphics
