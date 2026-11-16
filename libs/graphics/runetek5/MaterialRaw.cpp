// libs/graphics/runetek5/MaterialRaw.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "MaterialRaw.h"

namespace jag::graphics {
    // 0x100023af0: the linker folded this into hal::Haptics::GetEnabled() const, which has identical code
    MaterialRaw::IsValid() const;

    // 0x10097c240, 320 bytes, base-object constructor, placed by class name
    // MaterialRaw::MaterialRaw()
    void MaterialRaw::MaterialRaw() {
        undefined* puVar1;

        m_valid = 0;
        field_4 = -1;
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
        *(undefined8*)((long)&field_48 + 1) = 0;
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
        new (&field_144, 0.0, 0.0, 0.0, 0.0) ImVec4();
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
        puVar1 = graphicutils::TextureWrapMode::CLAMP;
        field_208 = graphicutils::TextureWrapMode::CLAMP;
        field_216 = puVar1;
        field_224 = 0;
        field_226 = 0;
        field_227 = 0;
    }

    // 0x10097c380, 16 bytes, complete-object constructor, placed by class name
    // MaterialRaw::MaterialRaw(): jumps straight to the base-object constructor

    // 0x10097c390, 64 bytes, placed by class name
    // MaterialRaw::Decode(int, PacketT<Array<unsigned char, eastl::allocator> >&)
    void MaterialRaw::Decode(int param_1, PacketT* param_2) {
        char cVar1;

        field_4 = param_1;
        cVar1 = param_2->g1();
        field_8 = cVar1;
        if (cVar1 == '\0') {
            DecodeRT5(this, param_2);
        } else {
            DecodeRT7(this, param_2);
        }
    }

    // 0x10097c3d0, 1056 bytes, placed by class name
    // MaterialRaw::DecodeRT5(PacketT<Array<unsigned char, eastl::allocator> >&)
    /* WARNING: Type propagation algorithm not settling */
    /* MaterialRaw::DecodeRT5(PacketT<Array<unsigned char, eastl::allocator>
   >&) */

    void MaterialRaw::DecodeRT5(PacketT* param_1) {
        byte bVar1;
        char cVar2;
        undefined1 uVar3;
        short sVar4;
        undefined2 uVar5;
        undefined4 uVar6;
        uint uVar7;
        undefined* puVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;

        bVar1 = param_1->g1();
        uVar6 = SizeCodeToSize((MaterialRaw*)param_1, (uint)bVar1);
        field_12 = uVar6;
        param_1->g1();
        uVar7 = param_1->g4();
        bVar1 = (byte)uVar7;
        field_16 = bVar1 & 1;
        field_17 = bVar1 >> 1 & 1;
        field_18 = bVar1 >> 2 & 1;
        field_19 = bVar1 >> 3 & 1;
        field_20 = (char)((uVar7 & 16) >> 4);
        if (((uVar7 & 1) == 0) && ((uVar7 & 16) == 0)) {
            bVar1 = field_19;
        } else {
            uVar6 = param_1->g4();
            field_24 = uVar6;
            bVar1 = field_19;
        }
        if ((bVar1 != 0) || (field_17 != 0)) {
            uVar6 = param_1->g4();
            field_28 = uVar6;
        }
        bVar1 = param_1->g1();
        puVar8 = (undefined*)graphicutils::TextureWrapMode::GetByID(bVar1 & 7);
        field_208 = puVar8;
        puVar8 = (undefined*)graphicutils::TextureWrapMode::GetByID(bVar1 >> 3 & 7);
        field_216 = puVar8;
        uVar7 = param_1->g4();
        bVar1 = (byte)uVar7;
        field_160 = bVar1 & 1;
        field_32 = bVar1 >> 1 & 1;
        field_161 = bVar1 >> 2 & 1;
        field_162 = bVar1 >> 3 & 1;
        field_226 = (byte)(uVar7 >> 21) & 1;
        field_227 = (byte)(uVar7 >> 20) & 1;
        if ((uVar7 & 262144) != 0) {
            uVar6 = param_1->g4();
            field_136 = uVar6;
        }
        if ((uVar7 & 524288) != 0) {
            uVar6 = param_1->g4();
            field_140 = uVar6;
            fVar9 = (float)param_1->gFloat();
            fVar10 = (float)param_1->gFloat();
            fVar11 = (float)param_1->gFloat();
            fVar12 = (float)param_1->gFloat();
            (&field_144, 1.0 / fVar9, 1.0 / fVar10, fVar11, fVar12)->Set();
        }
        if ((uVar7 & 16) == 0) {
            bVar1 = field_17;
        } else {
            uVar6 = param_1->gFloat();
            field_164 = uVar6;
            uVar6 = param_1->gFloat();
            field_36 = uVar6;
            bVar1 = field_17;
        }
        if (bVar1 != 0) {
            uVar6 = param_1->gFloat();
            field_168 = uVar6;
        }
        cVar2 = param_1->g1();
        field_33 = cVar2 == '\x01';
        bVar1 = param_1->g1();
        puVar8 = (undefined*)BlendMode::GetByID((uint)bVar1);
        field_184 = puVar8;
        bVar1 = param_1->g1();
        puVar8 = (undefined*)AlphaMode::GetByID((uint)bVar1);
        field_192 = puVar8;
        if (puVar8 == AlphaMode::ALPHA_TESTED) {
            bVar1 = param_1->g1();
            field_200 = (uint)bVar1;
        }
        if ((uVar7 & 2048) != 0) {
            uVar6 = param_1->gFloat();
            field_172 = uVar6;
            uVar6 = param_1->gFloat();
            field_176 = uVar6;
            uVar6 = param_1->gFloat();
            field_180 = uVar6;
        }
        uVar7 = param_1->g1();
        if ((uVar7 & 1) != 0) {
            sVar4 = param_1->g2s();
            uVar6 = AnimationSpeedUnpackValue(sVar4);
            field_128 = uVar6;
        }
        if ((uVar7 & 2) != 0) {
            sVar4 = param_1->g2s();
            uVar6 = AnimationSpeedUnpackValue(sVar4);
            field_132 = uVar6;
        }
        cVar2 = param_1->g1();
        if (cVar2 == '\x01') {
            field_40 = 1;
            cVar2 = param_1->g1s();
            field_44 = (int)cVar2;
            cVar2 = param_1->g1s();
            field_48 = (int)cVar2;
            uVar6 = param_1->g4s();
            field_52 = uVar6;
            bVar1 = param_1->g1();
            field_68 = (uint)bVar1;
            cVar2 = param_1->g1();
            field_56 = cVar2 == '\x01';
            bVar1 = param_1->g1();
            field_60 = (uint)bVar1;
            cVar2 = param_1->g1();
            field_64 = cVar2 == '\x01';
            cVar2 = param_1->g1();
            field_65 = cVar2 == '\x01';
            uVar3 = param_1->g1();
            field_66 = uVar3;
            uVar3 = param_1->g1();
            field_67 = uVar3;
            uVar5 = param_1->g2();
            field_224 = uVar5;
        }
        m_valid = 1;
    }

    // 0x10097c7f0, 1120 bytes, placed by class name
    // MaterialRaw::DecodeRT7(PacketT<Array<unsigned char, eastl::allocator> >&)
    /* WARNING: Type propagation algorithm not settling */
    /* MaterialRaw::DecodeRT7(PacketT<Array<unsigned char, eastl::allocator>
   >&) */

    void MaterialRaw::DecodeRT7(PacketT* param_1) {
        byte bVar1;
        byte bVar2;
        short sVar3;
        undefined2 uVar4;
        uint uVar5;
        undefined4 uVar6;
        int iVar7;
        undefined* puVar8;
        MaterialRaw* pMVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;

        uVar5 = param_1->g4();
        bVar2 = (byte)uVar5;
        field_160 = bVar2 & 1;
        field_161 = bVar2 >> 2 & 1;
        field_162 = bVar2 >> 3 & 1;
        field_72 = (byte)(uVar5 >> 10) & 1;
        field_226 = (byte)(uVar5 >> 21) & 1;
        field_227 = (byte)(uVar5 >> 20) & 1;
        if ((uVar5 & 32) != 0) {
            pMVar9 = (MaterialRaw*)param_1;
            bVar1 = param_1->g1();
            uVar6 = SizeCodeToSize(pMVar9, (uint)bVar1);
            field_88 = uVar6;
            iVar7 = param_1->g4();
            field_76 = iVar7;
            if (iVar7 == -1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_diffuseAlphaMapID != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                          "MaterialRaw.cpp",
                          155, (char*)0);
            }
        }
        if ((uVar5 & 64) != 0) {
            pMVar9 = (MaterialRaw*)param_1;
            bVar1 = param_1->g1();
            uVar6 = SizeCodeToSize(pMVar9, (uint)bVar1);
            field_92 = uVar6;
            iVar7 = param_1->g4();
            field_80 = iVar7;
            if (iVar7 == -1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_normalEmissiveMapID != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                          "MaterialRaw.cpp",
                          163, (char*)0);
            }
        }
        if ((char)bVar2 < '\0') {
            pMVar9 = (MaterialRaw*)param_1;
            bVar2 = param_1->g1();
            uVar6 = SizeCodeToSize(pMVar9, (uint)bVar2);
            field_96 = uVar6;
            iVar7 = param_1->g4();
            field_84 = iVar7;
            if (iVar7 == -1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_metalnessRoughnessMapID != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                          "MaterialRaw.cpp",
                          171, (char*)0);
            }
        }
        if ((uVar5 & 262144) != 0) {
            uVar6 = param_1->g4();
            field_136 = uVar6;
        }
        if ((uVar5 & 524288) != 0) {
            uVar6 = param_1->g4();
            field_140 = uVar6;
            fVar10 = (float)param_1->gFloat();
            fVar11 = (float)param_1->gFloat();
            fVar12 = (float)param_1->gFloat();
            fVar13 = (float)param_1->gFloat();
            (&field_144, 1.0 / fVar10, 1.0 / fVar11, fVar12, fVar13)->Set();
        }
        if ((uVar5 & 4096) != 0) {
            uVar6 = param_1->gFloat();
            field_164 = uVar6;
        }
        if ((uVar5 & 8192) != 0) {
            uVar6 = param_1->gFloat();
            field_168 = uVar6;
        }
        if ((uVar5 & 16384) != 0) {
            uVar6 = param_1->gFloat();
            field_100 = uVar6;
        }
        if ((short)uVar5 < 0) {
            uVar6 = param_1->g4();
            field_104 = uVar6;
        }
        if ((uVar5 & 64) != 0) {
            uVar6 = param_1->gFloat();
            field_108 = uVar6;
        }
        if ((uVar5 & 2048) != 0) {
            uVar6 = param_1->gFloat();
            field_172 = uVar6;
            uVar6 = param_1->gFloat();
            field_176 = uVar6;
            uVar6 = param_1->gFloat();
            field_180 = uVar6;
        }
        if ((uVar5 & 65536) != 0) {
            uVar6 = param_1->gFloat();
            field_112 = uVar6;
        }
        if ((uVar5 & 131072) != 0) {
            uVar6 = param_1->gFloat();
            field_116 = uVar6;
        }
        if ((uVar5 & 256) != 0) {
            sVar3 = param_1->g2s();
            uVar6 = AnimationSpeedUnpackValue(sVar3);
            field_128 = uVar6;
        }
        if ((uVar5 & 512) != 0) {
            sVar3 = param_1->g2s();
            uVar6 = AnimationSpeedUnpackValue(sVar3);
            field_132 = uVar6;
        }
        bVar2 = param_1->g1();
        puVar8 = (undefined*)graphicutils::TextureWrapMode::GetByID(bVar2 & 7);
        field_208 = puVar8;
        puVar8 = (undefined*)graphicutils::TextureWrapMode::GetByID(bVar2 >> 3 & 7);
        field_216 = puVar8;
        bVar2 = param_1->g1();
        puVar8 = (undefined*)BlendMode::GetByID((uint)bVar2);
        field_184 = puVar8;
        bVar2 = param_1->g1();
        puVar8 = (undefined*)HideFacesMode::GetByID((uint)bVar2);
        field_120 = puVar8;
        bVar2 = param_1->g1();
        puVar8 = (undefined*)AlphaMode::GetByID((uint)bVar2);
        field_192 = puVar8;
        if (puVar8 == AlphaMode::ALPHA_TESTED) {
            bVar2 = param_1->g1();
            field_200 = (uint)bVar2;
        }
        uVar4 = param_1->g2();
        field_224 = uVar4;
        param_1->g1();
        m_valid = 1;
    }

    // 0x10097cc50, 80 bytes, placed by class name
    // MaterialRaw::SizeCodeToSize(unsigned int)
    undefined4 MaterialRaw::SizeCodeToSize(uint param_1) {
        if (4 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                            "MaterialRaw.cpp",
                            286, "MaterialRaw: Unknown size code: %u");
        }
        return *(undefined4*)(&DAT_100d4fbe0 + (long)(int)param_1 * 4);
    }

    // 0x10097cca0, 32 bytes, placed by class name
    // MaterialRaw::AnimationSpeedUnpackValue(short)
    float MaterialRaw::AnimationSpeedUnpackValue(short param_1) {
        undefined2 in_register_0000003a;

        return (float)CONCAT22(in_register_0000003a, param_1) * 6.0560167e-05;
    }

    // 0x10097ccc0, 64 bytes, placed by class name
    // MaterialRaw::AnimationSpeedPackValue(float)
    int MaterialRaw::AnimationSpeedPackValue(float param_1) {
        float fVar1;
        float local_14;
        float local_10;
        float local_c;

        local_14 = param_1 * 16512.504;
        local_10 = -32768.0;
        local_c = 32767.0;
        fVar1 = math::Clamp<float>(&local_14, &local_10, &local_c);
        return (int)(short)(int)fVar1;
    }

} // namespace jag::graphics
