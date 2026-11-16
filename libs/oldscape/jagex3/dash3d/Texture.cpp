// libs/oldscape/jagex3/dash3d/Texture.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "Texture.h"

namespace jag::oldscape::dash3d {
    // 0x1016c6100, set at startup by ___cxx_global_var_init.75
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> Texture::m_tempData =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1003028f0
    Texture::Texture(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture) : Linkable<Texture>() {
        unsigned int uVar4;
        uint32_t uVar5;
        unsigned int* puVar6;
        uint32_t* puVar7;
        unsigned long uVar8;
        unsigned long arg1;

        field_32 = &__mh_execute_header;
        field_40 = 12884901890;
        uint8_t* this_00 = &field_56;
        new (this_00) Array<int>();
        uint8_t* this_01 = &field_80;
        new (this_01) Array<int>();
        uint8_t* this_02 = &field_104;
        new (this_02) Array<int>();
        uint8_t* this_03 = &field_128;
        new (this_03) Array<unsigned int>();
        field_160 = 0;
        field_164 = 0;
        new (&field_168) shared_ptr();
        field_184 = 0;
        unsigned short uVar3 = packetJ.g2();
        field_48 = (unsigned int)uVar3;
        field_52 = packetJ.g1() == '\x01';
        uint8_t bVar2 = packetJ.g1();
        unsigned long arg1_00 = (unsigned long)bVar2;
        if ((uint8_t)(bVar2 - 1) < 4) {
            this_00->set_max_size(arg1_00, 5);
            if (bVar2 != 0) {
                uVar8 = 0;
                do {
                    uVar4 = packetJ.g2();
                    puVar6 = (unsigned int*)(*this_00)[uVar8];
                    *puVar6 = uVar4 & 65535;
                    uVar8 = uVar8 + 1;
                } while (arg1_00 != uVar8);
            }
            if (1 < bVar2) {
                arg1 = (unsigned long)(bVar2 - 1);
                this_01->set_max_size(arg1, 5);
                uVar8 = 0;
                do {
                    uVar4 = packetJ.g1();
                    puVar6 = (unsigned int*)(*this_01)[uVar8];
                    *puVar6 = uVar4 & 255;
                    uVar8 = uVar8 + 1;
                } while (arg1 != uVar8);
                this_02->set_max_size(arg1, 5);
                uVar8 = 0;
                do {
                    uVar4 = packetJ.g1();
                    puVar6 = (unsigned int*)(*this_02)[uVar8];
                    *puVar6 = uVar4 & 255;
                    uVar8 = uVar8 + 1;
                } while (arg1 != uVar8);
            }
            this_03->set_max_size(arg1_00, 5);
            if (bVar2 != 0) {
                uVar8 = 0;
                do {
                    uVar5 = packetJ.g4();
                    puVar7 = (uint32_t*)(*this_03)[uVar8];
                    *puVar7 = uVar5;
                    uVar8 = uVar8 + 1;
                } while (arg1_00 != uVar8);
            }
            bVar2 = packetJ.g1();
            field_152 = (unsigned int)bVar2;
            bVar2 = packetJ.g1();
            field_156 = (unsigned int)bVar2;
        } else {
            errorCapture.Raise("Invalid number of texture layers: %i", (unsigned long)(unsigned int)bVar2);
        }
    }

    // 0x100302be0
    unsigned long Texture::Construct(double arg1, int arg2, jagex3::Js5& js5, ErrorCapture& errorCapture) {
        Layout* this_00;
        unsigned int uVar1;
        int iVar2;
        bool bVar3;
        uint32_t uVar4;
        int* piVar6;
        unsigned long uVar7;
        Array<unsigned int>* pAVar8;
        unsigned long uVar9;
        Array<unsigned char>* pAVar10;
        unsigned int* puVar11;
        uint32_t* puVar12;
        mach_header** ppmVar13;
        uint8_t* pbVar14;
        unsigned long uVar15;
        unsigned int uVar16;
        uint64_t uVar18;
        long lVar17;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_c8;
        long local_b0;
        unsigned long local_a8;
        Array<unsigned int>* local_a0;
        Array<int>* local_98;
        mach_header** local_90;
        unsigned int local_7c;
        shared_ptr<Array<unsigned int>>* local_78;
        Array<unsigned char>* local_70;
        vector<EntityHighlight*, BucketAllocatorEASTL>* local_68;
        ReturnValue local_58;
        unsigned long local_50;
        unsigned long local_48;
        uint64_t local_40;

        vector<EntityHighlight*, BucketAllocatorEASTL>* pvVar19 =
            (vector<EntityHighlight*, BucketAllocatorEASTL>*)&field_56;
        Texture* local_60 = this;
        long lVar5 = pvVar19->end();
        if (lVar5 - 1U < 4) {
            local_c8 = shared_ptr();
            lVar5 = pvVar19->end();
            local_68 = pvVar19;
            if (lVar5 != 0) {
                uVar7 = 0;
                uVar15 = 1;
                do {
                    piVar6 = (int*)(*pvVar19)[uVar7];
                    js5.PeekFile(local_c8, *piVar6);
                    bVar3 = local_c8 == nullptr;
                    pvVar19 = local_68;
                    if (bVar3) {
                        uVar7 = 0;
                        goto LAB_10030310d;
                    }
                    uVar7 = local_68->end();
                    bVar3 = uVar15 < uVar7;
                    uVar7 = uVar15;
                    uVar15 = (unsigned long)((int)uVar15 + 1);
                } while (bVar3);
            }
            pAVar8 = (Array<unsigned int>*)operator new(24);
            local_7c = arg2 * arg2;
            local_a8 = (unsigned long)local_7c;
            new (pAVar8) Array<unsigned int>(local_a8);
            local_78 = (shared_ptr<Array<unsigned int>>*)&local_60->field_168;
            local_78->reset<Array<unsigned int>, void>(pAVar8);
            pvVar19 = local_68;
            lVar5 = local_68->end();
            uVar18 = (uint64_t)((unsigned long)pAVar8 >> 8);
            uVar7 = (((uint64_t)uVar18 << 8) | (uint8_t)(lVar5 != 0));
            if (lVar5 != 0) {
                local_a0 = (Array<unsigned int>*)&local_60->field_128;
                local_98 = (Array<int>*)&local_60->field_80;
                local_90 = &local_60->field_32;
                uVar15 = 0;
                uVar7 = (((uint64_t)uVar18 << 8) | (uint8_t)1);
                do {
                    local_50 = uVar15;
                    piVar6 = (int*)(*pvVar19)[uVar15];
                    local_58 = graphics::pixloader::Makepix8(js5, *piVar6);
                    ((Pix8*)local_58.operator->())->Untrim();
                    local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)((int)uVar7));
                    pAVar10 = (Array<unsigned char>*)local_58.operator->();
                    puVar11 = (unsigned int*)(*local_a0)[local_50];
                    this_00 = (Layout*)(pAVar10 + 24);
                    uVar16 = *puVar11;
                    local_70 = pAVar10;
                    if (((uVar16 & 4278190080) == 50331648) && (lVar5 = this_00->HeapBeginPtr(), lVar5 != 0)) {
                        local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar16) & 18446744069431296255;
                        uVar7 = 0;
                        uVar15 = 1;
                        do {
                            puVar11 = (unsigned int*)(*this_00)[uVar7];
                            uVar1 = *puVar11;
                            if ((uVar1 != 0) && ((short)(uVar1 >> 8) == (short)uVar1)) {
                                piVar6 = (int*)(*this_00)[uVar7];
                                *piVar6 = ((uVar1 & 255) * (int)local_40 >> 8 & 16711935) +
                                          ((uVar1 & 255) * (uVar16 >> 8 & 255) & 65280) - 16777216;
                            }
                            uVar7 = this_00->HeapBeginPtr();
                            bVar3 = uVar15 < uVar7;
                            uVar7 = uVar15;
                            uVar15 = (unsigned long)((int)uVar15 + 1);
                        } while (bVar3);
                    }
                    lVar5 = this_00->HeapBeginPtr();
                    if (lVar5 != 0) {
                        uVar7 = 0;
                        uVar15 = 1;
                        do {
                            puVar11 = (unsigned int*)(*this_00)[uVar7];
                            uVar4 = jag::math::RunetekColour::GammaCorrectOSRS(*puVar11, arg1);
                            puVar12 = (uint32_t*)(*this_00)[uVar7];
                            *puVar12 = uVar4;
                            uVar7 = this_00->HeapBeginPtr();
                            bVar3 = uVar15 < uVar7;
                            uVar7 = uVar15;
                            uVar15 = (unsigned long)((int)uVar15 + 1);
                        } while (bVar3);
                    }
                    ppmVar13 = local_90;
                    if ((int)local_50 != 0) {
                        ppmVar13 = (mach_header**)(*local_98)[(unsigned long)((int)local_50 - 1)];
                    }
                    pAVar10 = local_70;
                    if (*(int*)ppmVar13 == *(int*)local_90) {
                        lVar5 = local_58.operator->();
                        iVar2 = *(int*)(lVar5 + 48);
                        if (iVar2 == arg2) {
                            if (local_7c != 0) {
                                uVar7 = 0;
                                do {
                                    pbVar14 = (uint8_t*)(*pAVar10)[uVar7];
                                    puVar12 = (uint32_t*)(*this_00)[(unsigned long)*pbVar14];
                                    uVar4 = *puVar12;
                                    pAVar8 = (Array<unsigned int>*)**local_78;
                                    puVar12 = (uint32_t*)(*pAVar8)[uVar7];
                                    *puVar12 = uVar4;
                                    uVar7 = uVar7 + 1;
                                } while (local_a8 != uVar7);
                            }
                        } else if ((iVar2 == 64) && (arg2 == 128)) {
                            uVar7 = 0;
                            uVar15 = 0;
                            do {
                                uVar9 = 0;
                                local_48 = uVar15;
                                local_40 = uVar7;
                                do {
                                    pbVar14 =
                                        (uint8_t*)(*pAVar10)[(long)(int)(((unsigned int)(uVar9 >> 1) & 2147483647) +
                                                                         ((unsigned int)uVar7 & 134217726) * 32)];
                                    puVar12 = (uint32_t*)(*this_00)[(unsigned long)*pbVar14];
                                    uVar4 = *puVar12;
                                    pAVar8 = (Array<unsigned int>*)**local_78;
                                    puVar12 = (uint32_t*)(*pAVar8)[(long)(int)uVar15 + uVar9];
                                    *puVar12 = uVar4;
                                    uVar9 = uVar9 + 1;
                                    pAVar10 = local_70;
                                } while ((int)uVar9 != 128);
                                uVar16 = (int)local_40 + 1;
                                uVar7 = (unsigned long)uVar16;
                                uVar15 = (long)(int)local_48 + uVar9;
                            } while (uVar16 != 128);
                        } else {
                            if ((iVar2 != 128) || (arg2 != 64)) {
                                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "oldscape/jagex3/dash3d/Texture.cpp",
                                                167, "Invalid texture size");
                            }
                            uVar7 = 0;
                            local_40 = 0;
                            lVar5 = 0;
                            do {
                                lVar17 = 0;
                                local_b0 = lVar5;
                                local_48 = uVar7;
                                do {
                                    pbVar14 = (uint8_t*)(*pAVar10)[uVar7];
                                    puVar12 = (uint32_t*)(*this_00)[(unsigned long)*pbVar14];
                                    uVar4 = *puVar12;
                                    pAVar8 = (Array<unsigned int>*)**local_78;
                                    puVar12 = (uint32_t*)(*pAVar8)[(int)lVar5 + lVar17];
                                    *puVar12 = uVar4;
                                    lVar17 = lVar17 + 1;
                                    uVar7 = uVar7 + 2;
                                    pAVar10 = local_70;
                                } while (lVar17 != 64);
                                local_40 = local_40 + 1;
                                lVar5 = (long)(int)local_b0 + 64;
                                uVar7 = local_48 + 256;
                            } while (local_40 != 64);
                            local_40 = 64;
                        }
                    }
                    pvVar19 = local_68;
                    uVar16 = (int)local_50 + 1;
                    uVar15 = (unsigned long)uVar16;
                    uVar9 = local_68->end();
                    uVar7 = (unsigned long)(((uint32_t)((int32_t)(uVar16 >> 8)) << 8) | (uint8_t)(uVar15 < uVar9));
                } while (uVar15 < uVar9);
            }
            uVar7 = uVar7 ^ 1;
        LAB_10030310d:
        } else {
            uVar7 = 0;
            errorCapture.Raise("Invalid Texture: not able to Construct()");
        }
        return uVar7 & 4294967041;
    }

    // 0x100303370
    void Texture::RunAnim(int arg1) {
        uint8_t* puVar1;
        uint32_t uVar2;
        bool bVar4;
        vector<EntityHighlight*, BucketAllocatorEASTL>* pvVar5;
        unsigned long uVar6;
        unsigned long uVar7;
        Array<unsigned int>* pAVar8;
        uint32_t* puVar9;
        int iVar10;
        long lVar11;
        int iVar12;

        if ((field_152 | 2) == 3) {
            iVar10 = field_156 * arg1;
            iVar12 = -iVar10;
            if (field_152 != 1) {
                iVar12 = iVar10;
            }
            field_164 = field_164 + iVar12 & 127;
            if (field_184 != '\0') {
                puVar1 = &field_168;
                bVar4 = *puVar1 != nullptr;
                if (bVar4) {
                    bVar4 = m_tempData == nullptr;
                    if (bVar4) {
                    LAB_100303430:
                        pAVar8 = (Array<unsigned int>*)operator new(24);
                        pvVar5 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*puVar1).operator->();
                        uVar6 = pvVar5->end();
                        new (pAVar8) Array<unsigned int>(uVar6);
                        m_tempData.reset<Array<unsigned int>, void>(pAVar8);
                    } else {
                        pvVar5 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)m_tempData.operator->();
                        uVar6 = pvVar5->end();
                        pvVar5 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*puVar1).operator->();
                        uVar7 = pvVar5->end();
                        if (uVar6 < uVar7)
                            goto LAB_100303430;
                    }
                    uVar6 = 0;
                    do {
                        pAVar8 = (Array<unsigned int>*)**puVar1;
                        puVar9 = (uint32_t*)(*pAVar8)[(unsigned long)(iVar12 * 128 + (int)uVar6 & 16383)];
                        uVar2 = *puVar9;
                        pAVar8 = (Array<unsigned int>*)*m_tempData;
                        puVar9 = (uint32_t*)(*pAVar8)[uVar6];
                        *puVar9 = uVar2;
                        uVar6 = uVar6 + 1;
                    } while (uVar6 != 16384);
                    m_tempData.swap(*puVar1);
                    field_184 = 0;
                }
            }
        }
        unsigned int uVar3 = field_152;
        if ((uVar3 != 4) && (uVar3 != 2)) {
            return;
        }
        iVar10 = arg1 * field_156;
        iVar12 = -iVar10;
        if (uVar3 != 2) {
            iVar12 = iVar10;
        }
        field_160 = field_160 + iVar12 & 127;
        if (field_184 == '\0') {
            return;
        }
        puVar1 = &field_168;
        bVar4 = *puVar1 != nullptr;
        if (!bVar4) {
            return;
        }
        bVar4 = m_tempData == nullptr;
        if (!bVar4) {
            pvVar5 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)m_tempData.operator->();
            uVar6 = pvVar5->end();
            pvVar5 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*puVar1).operator->();
            uVar7 = pvVar5->end();
            if (uVar7 <= uVar6)
                goto LAB_1003035bc;
        }
        pAVar8 = (Array<unsigned int>*)operator new(24);
        pvVar5 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*puVar1).operator->();
        uVar6 = pvVar5->end();
        new (pAVar8) Array<unsigned int>(uVar6);
        m_tempData.reset<Array<unsigned int>, void>(pAVar8);
    LAB_1003035bc:
        uVar6 = 0;
        do {
            lVar11 = 0;
            do {
                pAVar8 = (Array<unsigned int>*)**puVar1;
                puVar9 = (uint32_t*)(*pAVar8)[(iVar12 + (int)lVar11 & 16383) + uVar6];
                uVar2 = *puVar9;
                pAVar8 = (Array<unsigned int>*)*m_tempData;
                puVar9 = (uint32_t*)(*pAVar8)[uVar6 + lVar11];
                *puVar9 = uVar2;
                lVar11 = lVar11 + 1;
            } while (lVar11 != 128);
            bVar4 = uVar6 < 16256;
            uVar6 = uVar6 + 128;
        } while (bVar4);
        m_tempData.swap(*puVar1);
        field_184 = 0;
    }

} // namespace jag::oldscape::dash3d
