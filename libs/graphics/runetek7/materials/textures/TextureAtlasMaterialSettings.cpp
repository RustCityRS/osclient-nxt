// libs/graphics/runetek7/materials/textures/TextureAtlasMaterialSettings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "TextureAtlasMaterialSettings.h"

namespace jag::graphics {
    // 0x100858a50, 1520 bytes, placed by class name and debug map
    // TextureAtlasMaterialSettings::Initialise(Material const&)
    undefined8 TextureAtlasMaterialSettings::Initialise(Material* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        char cVar5;
        undefined4 uVar6;
        int iVar7;
        undefined4 uVar8;
        int iVar9;
        undefined8* puVar10;
        undefined* puVar11;
        undefined* puVar12;
        float* pfVar13;
        type* ptVar14;
        Layout* this_00;
        vector* pvVar15;
        Vector2T<int>* this_01;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_02;
        QuaternionT<float>* this_03;
        undefined4* puVar16;
        uint uVar17;
        ulong uVar18;
        ulong uVar19;
        float fVar20;
        float fVar21;
        ulong local_48;
        float local_3c;
        float local_38;
        float local_34;

        cVar5 = param_1->IsRT7();
        field_48 = cVar5;
        puVar10 = (undefined8*)data();
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar11 = (undefined*)param_1->GetWrapU();
        puVar12 = (undefined*)param_1->GetWrapV();
        uVar17 = 0;
        if ((puVar11 != (undefined*)0) && (puVar12 != (undefined*)0)) {
            uVar17 = (uint)(puVar11 == graphicutils::TextureWrapMode::BORDER ||
                            puVar11 == graphicutils::TextureWrapMode::CLAMP) +
                     (uint)(puVar12 == graphicutils::TextureWrapMode::BORDER ||
                            puVar12 == graphicutils::TextureWrapMode::CLAMP) *
                         2 +
                     (uint)(puVar11 == graphicutils::TextureWrapMode::REPEAT) * 4 +
                     (uint)(puVar12 == graphicutils::TextureWrapMode::REPEAT) * 8;
        }
        fVar20 = (float)param_1->GetMaterialAnimationH();
        fVar21 = (float)param_1->GetMaterialAnimationV();
        local_34 = 0.0;
        local_3c = 1.0;
        local_38 = (float)param_1->GetRefractionAmount();
        pfVar13 = std::min<float>(&local_3c, &local_38);
        pfVar13 = std::max<float>(&local_34, pfVar13);
        fVar1 = *pfVar13;
        local_34 = 1.0;
        local_3c = 3.0;
        local_38 = (float)param_1->GetRefractionAmount();
        pfVar13 = std::min<float>(&local_3c, &local_38);
        pfVar13 = std::max<float>(&local_34, pfVar13);
        fVar2 = *pfVar13;
        local_34 = 0.0;
        local_3c = 10.0;
        local_38 = (float)param_1->GetRefractionAmount();
        ptVar14 = (type*)std::min<float>(&local_3c, &local_38);
        pfVar13 = std::max<float>(&local_34, (float*)ptVar14);
        uVar6 = render::RGBAToABGR((int)(*pfVar13 * 6553.5) & 65535U | ((int)(fVar2 * 127.5 + -127.5) & 255U) << 16 |
                                   (int)(fVar1 * 255.0) << 24);
        this_00 = (Layout*)param_1->GetPixelBuffer();
        pvVar15 = eastl::string::Layout::SSOBeginPtr(this_00, ptVar14);
        fVar1 = *(float*)pvVar15;
        this_01 = (Vector2T<int>*)param_1->GetPixelBuffer();
        pfVar13 = (float*)this_01->y();
        fVar2 = *pfVar13;
        this_02 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)param_1->GetPixelBuffer();
        pfVar13 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_02);
        fVar3 = *pfVar13;
        this_03 = (QuaternionT<float>*)param_1->GetPixelBuffer();
        pfVar13 = (float*)math::QuaternionT<float>::qw(this_03);
        fVar4 = *pfVar13;
        iVar7 = param_1->GetZ();
        cVar5 = field_48;
        uVar8 =
            render::RGBAToABGR((int)(fVar21 * 16383.75 + 32767.5) & 65535U | (int)(fVar20 * 16383.75 + 32767.5) << 16);
        if (cVar5 == '\0') {
            puVar16 = (undefined4*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, 2);
            *puVar16 = uVar8;
            uVar8 = render::RGBAToABGR(uVar17);
            puVar16 = (undefined4*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, 1);
            *puVar16 = uVar8;
            local_34 = (float)param_1->GetEnvMapIrradianceScale();
            pfVar13 = std::min<float>((float*)&MAX_SPECULAR_FACTOR_RT5, &local_34);
            pfVar13 = std::max<float>((float*)&MIN_SPECULAR_FACTOR_RT5, pfVar13);
            fVar20 = *pfVar13;
            fVar21 = (float)param_1->GetNormalScale();
            uVar8 = render::RGBAToABGR((int)(fVar21 * 2550.0 + 20400.0) & 65535U | (int)(fVar20 * 255.0) << 16);
            puVar16 = (undefined4*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, 3);
            *puVar16 = uVar8;
            local_48 = 6;
            uVar19 = 5;
            uVar18 = 4;
        } else {
            puVar16 = (undefined4*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, 3);
            *puVar16 = uVar8;
            uVar8 = render::RGBAToABGR(uVar17);
            puVar16 = (undefined4*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, 2);
            *puVar16 = uVar8;
            local_34 = (float)param_1->GetSpecularScale();
            pfVar13 = std::min<float>((float*)&MAX_SPECULAR_FACTOR_RT7, &local_34);
            pfVar13 = std::max<float>((float*)&MIN_SPECULAR_FACTOR_RT7, pfVar13);
            fVar20 = *pfVar13;
            fVar21 = (float)param_1->GetNormalScale();
            uVar8 = render::RGBAToABGR((int)(fVar21 * 2550.0 + 20400.0) & 65535U | (int)(fVar20 * 7.999878) << 16);
            puVar16 = (undefined4*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, 4);
            *puVar16 = uVar8;
            local_34 = 0.0;
            local_3c = 32.0;
            local_38 = (float)param_1->GetEmissiveScale();
            pfVar13 = std::min<float>(&local_3c, &local_38);
            pfVar13 = std::max<float>(&local_34, pfVar13);
            uVar8 = render::RGBAToABGR((int)(*pfVar13 * 2047.9688) & 65535);
            puVar16 = (undefined4*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, 1);
            *puVar16 = uVar8;
            iVar9 = param_1->GetAmplitude();
            cVar5 = param_1->HasEmissiveSourceColour();
            uVar17 = iVar9 * 256 + 255;
            if (cVar5 == '\0') {
                uVar17 = iVar9 * 256;
            }
            uVar8 = render::RGBAToABGR(uVar17);
            puVar16 = (undefined4*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, 5);
            *puVar16 = uVar8;
            puVar16 = (undefined4*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, 6);
            *puVar16 = uVar6;
            local_34 = 0.0;
            local_3c = 1.0;
            local_38 = (float)param_1->GetDefaultNonMetalSpecular();
            pfVar13 = std::min<float>(&local_3c, &local_38);
            pfVar13 = std::max<float>(&local_34, pfVar13);
            fVar20 = *pfVar13;
            local_34 = 0.0;
            local_3c = 10.0;
            local_38 = (float)param_1->GetPlaybackStart();
            pfVar13 = std::min<float>(&local_3c, &local_38);
            pfVar13 = std::max<float>(&local_34, pfVar13);
            uVar6 = render::RGBAToABGR(((int)(*pfVar13 * 6553.5) & 65535U) << 8 | (int)(fVar20 * 255.0) << 24);
            local_48 = 9;
            uVar19 = 8;
            uVar18 = 7;
        }
        puVar16 = (undefined4*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, uVar18);
        *puVar16 = uVar6;
        uVar8 =
            render::RGBAToABGR((int)(fVar2 * 16383.75 + 32767.5) & 65535U | (int)(fVar1 * 16383.75 + 32767.5) << 16);
        puVar16 = (undefined4*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, uVar19);
        *puVar16 = uVar8;
        uVar8 =
            render::RGBAToABGR((int)(fVar4 * 16383.75 + 32767.5) & 65535U | (int)(fVar3 * 16383.75 + 32767.5) << 16);
        puVar16 = (undefined4*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, local_48);
        *puVar16 = uVar8;
        uVar8 = render::RGBAToABGR(iVar7 << 16);
        puVar16 = (undefined4*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, 11);
        *puVar16 = uVar8;
        return 1;
    }

    // 0x100859040, 800 bytes, placed by class name and debug map
    // TextureAtlasMaterialSettings::SetTextureSlots(std::array<unsigned short, 3ul> const&, std::array<unsigned short, 3ul> const&, std::array<unsigned char, 3ul> const&)
    /* TextureAtlasMaterialSettings::SetTextureSlots(std::array<unsigned short, 3ul>
   const&, std::array<unsigned short, 3ul> const&, std::array<unsigned char, 3ul> const&) */

    void TextureAtlasMaterialSettings::SetTextureSlots(array* param_1, array* param_2, array* param_3) {
        byte bVar1;
        ushort uVar2;
        ushort uVar3;
        ushort uVar4;
        undefined4 uVar5;
        byte* pbVar6;
        uint* puVar7;
        ushort* puVar8;
        ushort* puVar9;
        ushort* puVar10;
        ushort* puVar11;
        undefined4* puVar12;
        ushort* puVar13;
        ushort* puVar14;
        uint uVar15;
        uint uVar16;

        pbVar6 = (byte*)std::array<unsigned char, 3ul>::operator[]((array<unsigned char, 3ul>*)param_3, 0);
        bVar1 = *pbVar6;
        pbVar6 = (byte*)std::array<unsigned char, 3ul>::operator[]((array<unsigned char, 3ul>*)param_3, 1);
        uVar16 = (uint)*pbVar6 << 16 | (uint)bVar1 << 24;
        pbVar6 = (byte*)std::array<unsigned char, 3ul>::operator[]((array<unsigned char, 3ul>*)param_3, 2);
        uVar15 = (uint)*pbVar6 << 8 | uVar16;
        if (uVar15 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("sizes != 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlasMaterialSettings.cpp",
                      209, (char*)0);
        }
        if (field_48 == '\0') {
            uVar15 = render::RGBAToABGR(uVar16);
            puVar7 = (uint*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, 1);
            *puVar7 = *puVar7 | uVar15;
            puVar8 = (ushort*)std::array<unsigned short, 3ul>::operator[]((array<unsigned short, 3ul>*)param_1, 0);
            uVar2 = *puVar8;
            puVar9 = (ushort*)std::array<unsigned short, 3ul>::operator[]((array<unsigned short, 3ul>*)param_2, 0);
            uVar4 = *puVar9;
            puVar10 = (ushort*)std::array<unsigned short, 3ul>::operator[]((array<unsigned short, 3ul>*)param_1, 1);
            uVar3 = *puVar10;
            puVar11 = (ushort*)std::array<unsigned short, 3ul>::operator[]((array<unsigned short, 3ul>*)param_2, 1);
            uVar5 = render::RGBAToABGR((uint)(byte)*puVar11 | (uVar3 & 255) << 8 | (uint)(byte)uVar4 << 16 |
                                       (uint)uVar2 << 24);
            puVar12 = (undefined4*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, 0);
            *puVar12 = uVar5;
            uVar15 = render::RGBAToABGR(((uint)(255 < *puVar8) + (uint)(255 < *puVar9) * 2 +
                                         (uint)(255 < *puVar10) * 4 + (uint)(255 < *puVar11) * 8) *
                                        256);
        } else {
            uVar15 = render::RGBAToABGR(uVar15);
            puVar7 = (uint*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, 2);
            *puVar7 = *puVar7 | uVar15;
            puVar8 = (ushort*)std::array<unsigned short, 3ul>::operator[]((array<unsigned short, 3ul>*)param_1, 0);
            uVar2 = *puVar8;
            puVar9 = (ushort*)std::array<unsigned short, 3ul>::operator[]((array<unsigned short, 3ul>*)param_2, 0);
            uVar4 = *puVar9;
            puVar10 = (ushort*)std::array<unsigned short, 3ul>::operator[]((array<unsigned short, 3ul>*)param_1, 1);
            uVar3 = *puVar10;
            puVar11 = (ushort*)std::array<unsigned short, 3ul>::operator[]((array<unsigned short, 3ul>*)param_2, 1);
            uVar5 = render::RGBAToABGR((uint)(byte)*puVar11 | (uVar3 & 255) << 8 | (uint)(byte)uVar4 << 16 |
                                       (uint)uVar2 << 24);
            puVar12 = (undefined4*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, 0);
            *puVar12 = uVar5;
            puVar13 = (ushort*)std::array<unsigned short, 3ul>::operator[]((array<unsigned short, 3ul>*)param_1, 2);
            uVar2 = *puVar13;
            puVar14 = (ushort*)std::array<unsigned short, 3ul>::operator[]((array<unsigned short, 3ul>*)param_2, 2);
            uVar15 = render::RGBAToABGR((uint)(byte)*puVar14 << 16 | (uint)uVar2 << 24);
            puVar7 = (uint*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, 1);
            *puVar7 = *puVar7 | uVar15;
            uVar15 = render::RGBAToABGR((uint)(255 < *puVar14) << 5 | (uint)(255 < *puVar13) << 4 |
                                        (uint)(255 < *puVar8) + (uint)(255 < *puVar9) * 2 + (uint)(255 < *puVar10) * 4 +
                                            (uint)(255 < *puVar11) * 8);
            puVar7 = (uint*)std::array<unsigned int, 12ul>::operator[]((array<unsigned int, 12ul>*)this, 7);
        }
        *puVar7 = *puVar7 | uVar15;
        m_valid = 1;
    }

    // 0x10085b580, 16 bytes, placed by class name
    // TextureAtlasMaterialSettings::IsValid() const
    undefined1 TextureAtlasMaterialSettings::IsValid() {
        return m_valid;
    }

} // namespace jag::graphics
