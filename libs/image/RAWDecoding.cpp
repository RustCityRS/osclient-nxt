// libs/image/RAWDecoding.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.image

namespace jag {
    class RAWDecoder {
    public:
        void ColorAndAlphaToRGBA(unsigned char*, unsigned int, unsigned char);
        void ColorToRGBA(unsigned char*, unsigned int);
        ulong LoadFromPacket(eastl::vector<RGBAImage, BucketAllocatorEASTL>&, PacketView&);
        LoadSingle(RGBAImage&, PacketView&);
    };

    // 0x100a0c580, 32 bytes, placed by debug map only (low confidence)
    // RAWDecoder::ColorAndAlphaToRGBA(unsigned char*, unsigned int, unsigned char)
    void RAWDecoder::ColorAndAlphaToRGBA(uchar* param_1, uint param_2, uchar param_3) {
        *param_1 = (uchar)(param_2 >> 16);
        param_1[1] = (uchar)(param_2 >> 8);
        param_1[2] = (uchar)param_2;
        param_1[3] = param_3;
    }

    // 0x100a0c5a0, 32 bytes, placed by debug map only (low confidence)
    // RAWDecoder::ColorToRGBA(unsigned char*, unsigned int)
    void RAWDecoder::ColorToRGBA(uchar* param_1, uint param_2) {
        ColorAndAlphaToRGBA(param_1, param_2, -(param_2 != 0));
    }

    // 0x100a0c5c0, 2912 bytes, placed by debug map only (low confidence)
    // RAWDecoder::LoadFromPacket(eastl::vector<RGBAImage, BucketAllocatorEASTL>&, PacketView&)
    ulong RAWDecoder::LoadFromPacket(vector* param_1, PacketView* param_2) {
        vector* this;
        byte bVar1;
        char cVar2;
        undefined1 uVar3;
        ushort uVar4;
        ushort uVar5;
        uint uVar6;
        undefined4 uVar7;
        uint uVar8;
        ulong uVar9;
        undefined8 uVar10;
        LoginManager* pLVar11;
        Array<unsigned char, BucketAllocatorEASTL>* this_00;
        uchar* puVar12;
        undefined1* puVar13;
        long lVar14;
        uint* puVar15;
        int* piVar16;
        undefined4* puVar17;
        LoginManager* pLVar18;
        char* pcVar19;
        int iVar20;
        int iVar21;
        ulong uVar22;
        PacketView* this_01;
        bool bVar23;
        int iVar24;
        vector<unsigned char, eastl::allocator> local_1e8[32];
        vector<RAWDecoder::RAWSpriteInfo, eastl::allocator> local_1c8[32];
        LoginManager* local_1a8;
        vector* local_1a0;
        LoginManager* local_198;
        PacketView* local_190;
        undefined8 local_188;
        ulong local_180;
        LoginManager* local_178;
        undefined8 local_170;
        char local_161;
        vector<unsigned int, eastl::fixed_vector_allocator<4ul, 64ul, 4ul, 0ul, true, eastl::allocator>> local_160[296];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_1a0 = param_1;
        uVar9 = param_2->p2_alt2();
        if (uVar9 < 2) {
            uVar10 = logger::default_logger();
            uVar9 = 0;
            logger::Logger::Log(
                uVar10, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/RAWDecoding.cpp", 51,
                "Invalid position for the sprite count!");
        } else {
            param_2->SetPos(uVar9 - 2);
            uVar4 = param_2->g2();
            local_170 = (LoginManager*)(CONCAT44(local_170._4_4_, (uint)uVar4) & 18446744069414617087);
            local_190 = param_2;
            if ((short)uVar4 < 0) {
                param_2->SetPos(0);
                bVar1 = param_2->g1();
                if (bVar1 == 1) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways(
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/RAWDecoding.cpp",
                        99, "SpriteRawLoader: Unsupported all colour sprite format: JPEG");
                }
                if (bVar1 != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways(
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/RAWDecoding.cpp",
                        104, "RAWDecoder : Unknown all colour sprite format : %i", (ulong)bVar1);
                }
                local_161 = param_2->g1();
                uVar4 = param_2->g2();
                uVar5 = param_2->g2();
                this = local_1a0;
                local_1a0->resize((ulong)local_170 & 65535);
                pLVar11 = (LoginManager*)HeapBeginPtr();
                local_198 = (LoginManager*)end();
                uVar9 = (ulong)(pLVar11 == local_198);
                if (pLVar11 != local_198) {
                    local_1a0 = (vector*)(ulong)uVar4;
                    local_1a8 = (LoginManager*)(ulong)uVar5;
                    local_178 = (LoginManager*)((long)local_1a8 * (long)local_1a0);
                    uVar9 = 0;
                    do {
                        iVar24 = (int)local_1a0;
                        iVar20 = (int)local_1a8;
                        pcVar19 = (char*)0;
                        local_180 = uVar9;
                        cVar2 = pLVar11->Create(iVar24, iVar20, 0);
                        local_188 = (Array<unsigned char, BucketAllocatorEASTL>*)CONCAT71(local_188._1_7_, cVar2);
                        local_170 = pLVar11;
                        if (cVar2 == '\0') {
                            uVar10 = logger::default_logger();
                            pcVar19 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/"
                                      "RAWDecoding.cpp";
                            logger::Logger::Log(uVar10, 0, 2,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "image/RAWDecoding.cpp",
                                                76, "Failed to create new image using the resolution %ix%i", iVar24,
                                                iVar20);
                        } else {
                            this_00 = (Array<unsigned char, BucketAllocatorEASTL>*)
                                          pLVar11->GetDevCredentialsOutputDirectory();
                            if (local_178 != (LoginManager*)0) {
                                uVar9 = 0;
                                pLVar18 = local_178;
                                do {
                                    uVar6 = param_2->g3();
                                    puVar12 =
                                        (uchar*)Array<unsigned char, BucketAllocatorEASTL>::operator[](this_00, uVar9);
                                    ColorAndAlphaToRGBA(puVar12, uVar6, 255);
                                    uVar9 = uVar9 + 4;
                                    pLVar18 = (LoginManager*)&pLVar18[-1].field_375;
                                    pLVar11 = (LoginManager*)0;
                                } while (pLVar18 != (LoginManager*)0);
                            }
                            if ((local_161 == '\x01') && (local_178 != (LoginManager*)0)) {
                                pLVar11 = (LoginManager*)3;
                                pLVar18 = local_178;
                                do {
                                    uVar3 = param_2->g1();
                                    puVar13 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                        this_00, (ulong)pLVar11);
                                    *puVar13 = uVar3;
                                    pLVar11 = (LoginManager*)((long)pLVar11 + 4);
                                    pLVar18 = (LoginManager*)&pLVar18[-1].field_375;
                                } while (pLVar18 != (LoginManager*)0);
                            }
                        }
                        if ((char)local_188 == '\0') {
                            bVar23 = true;
                            if ((local_180 & 1) == 0)
                                goto LAB_100a0d02f;
                            goto LAB_100a0d02d;
                        }
                        pLVar11 = (LoginManager*)&local_170->field_88;
                        uVar9 = CONCAT71((int7)((ulong)pcVar19 >> 8), pLVar11 == local_198);
                        param_2 = local_190;
                    } while (pLVar11 != local_198);
                }
                bVar23 = false;
                if ((char)uVar9 != '\0') {
                LAB_100a0d02d:
                    bVar23 = false;
                }
            LAB_100a0d02f:
                if (bVar23) {
                    uVar9 = 0;
                    goto LAB_100a0d039;
                }
            } else {
                if ((short)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways(
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/RAWDecoding.cpp",
                        260, "RawDecoding: Invalid sprite type loaded: %i");
                }
                eastl::vector<RAWDecoder::RAWSpriteInfo, eastl::allocator>::vector(local_1c8);
                pLVar11 = (LoginManager*)((ulong)local_170 & 65535);
                eastl::vector<RAWDecoder::RAWSpriteInfo, eastl::allocator>::resize(local_1c8, (ulong)pLVar11);
                local_1a0->resize((ulong)pLVar11);
                local_178 = pLVar11;
                lVar14 = param_2->p2_alt2();
                local_180 = (long)local_178 * 8;
                param_2->SetPos((lVar14 + (long)local_178 * -8) - 7);
                uVar7 = param_2->g2();
                uVar6 = param_2->g2();
                pLVar11 = (LoginManager*)(ulong)uVar6;
                uVar3 = param_2->g1();
                local_198 = (LoginManager*)CONCAT71(local_198._1_7_, uVar3);
                if ((short)local_170 != 0) {
                    local_188 = (Array<unsigned char, BucketAllocatorEASTL>*)(CONCAT44(local_188._4_4_, uVar7) &
                                                                              18446744069414649855);
                    pLVar11 = (LoginManager*)0;
                    do {
                        uVar8 = param_2->g2();
                        puVar15 = (uint*)eastl::vector<RAWDecoder::RAWSpriteInfo, eastl::allocator>::operator[](
                            local_1c8, (ulong)pLVar11);
                        *puVar15 = uVar8 & 65535;
                        pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                    } while (local_178 != pLVar11);
                    pLVar11 = (LoginManager*)0;
                    do {
                        uVar8 = param_2->g2();
                        lVar14 = eastl::vector<RAWDecoder::RAWSpriteInfo, eastl::allocator>::operator[](local_1c8,
                                                                                                        (ulong)pLVar11);
                        *(uint*)(lVar14 + 8) = uVar8 & 65535;
                        pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                    } while (local_178 != pLVar11);
                    pLVar11 = (LoginManager*)0;
                    do {
                        uVar8 = param_2->g2();
                        lVar14 = eastl::vector<RAWDecoder::RAWSpriteInfo, eastl::allocator>::operator[](local_1c8,
                                                                                                        (ulong)pLVar11);
                        *(uint*)(lVar14 + 16) = uVar8 & 65535;
                        pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                    } while (local_178 != pLVar11);
                    pLVar11 = (LoginManager*)0;
                    do {
                        uVar8 = param_2->g2();
                        lVar14 = eastl::vector<RAWDecoder::RAWSpriteInfo, eastl::allocator>::operator[](local_1c8,
                                                                                                        (ulong)pLVar11);
                        *(uint*)(lVar14 + 20) = uVar8 & 65535;
                        pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                    } while (local_178 != pLVar11);
                    pLVar11 = (LoginManager*)0;
                    do {
                        piVar16 = (int*)eastl::vector<RAWDecoder::RAWSpriteInfo, eastl::allocator>::operator[](
                            local_1c8, (ulong)pLVar11);
                        piVar16[1] = (int)local_188 - (piVar16[4] + *piVar16);
                        piVar16[3] = (uVar6 & 65535) - (piVar16[5] + piVar16[2]);
                        pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                    } while (local_178 != pLVar11);
                }
                lVar14 = param_2->p2_alt2();
                uVar6 = (uint)(byte)local_198;
                param_2->SetPos(((-(ulong)((uVar6 + 1) * 3) - local_180) + lVar14) - 4);
                eastl::fixed_vector<unsigned int, 64ul, true, eastl::allocator>::fixed_vector((ulong)local_160);
                puVar17 = (undefined4*)
                    eastl::vector<unsigned int, eastl::fixed_vector_allocator<4ul, 64ul, 4ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](local_160,
                                                                                                             0);
                *puVar17 = 0;
                if ((byte)local_198 != '\0') {
                    pLVar11 = (LoginManager*)&DAT_00000001;
                    do {
                        uVar7 = local_190->g3();
                        puVar17 = (undefined4*)eastl::vector<
                            unsigned int, eastl::fixed_vector_allocator<4ul, 64ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](local_160, (ulong)pLVar11);
                        *puVar17 = uVar7;
                        piVar16 = (int*)eastl::vector<
                            unsigned int, eastl::fixed_vector_allocator<4ul, 64ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](local_160, (ulong)pLVar11);
                        if (*piVar16 == 0) {
                            puVar17 = (undefined4*)eastl::vector<
                                unsigned int, eastl::fixed_vector_allocator<4ul, 64ul, 4ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](local_160,
                                                                                                           (ulong)
                                                                                                               pLVar11);
                            *puVar17 = 1;
                        }
                        lVar14 = (long)pLVar11 - (ulong)(uVar6 + 1);
                        pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                    } while (lVar14 != -1);
                }
                this_01 = local_190;
                local_190->SetPos(0);
                if ((short)local_170 != 0) {
                    pLVar11 = (LoginManager*)0;
                    do {
                        piVar16 = (int*)eastl::vector<RAWDecoder::RAWSpriteInfo, eastl::allocator>::operator[](
                            local_1c8, (ulong)pLVar11);
                        pLVar18 = (LoginManager*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                            (vector<RGBAImage, BucketAllocatorEASTL>*)local_1a0, (ulong)pLVar11);
                        cVar2 = pLVar18->Create(piVar16[4], piVar16[5], 0);
                        local_198 = (LoginManager*)CONCAT71(local_198._1_7_, cVar2);
                        if (cVar2 == '\0') {
                            uVar10 = logger::default_logger();
                            logger::Logger::Log(uVar10, 0, 2,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "image/RAWDecoding.cpp",
                                                174, "Failed to create new image using the resolution %ix%i",
                                                piVar16[4], piVar16[5]);
                        } else {
                            pLVar18->SetMargins(*piVar16, piVar16[2], piVar16[1], piVar16[3], 0);
                            uVar6 = piVar16[5] * piVar16[4];
                            local_1a8 = pLVar11;
                            local_188 = (Array<unsigned char, BucketAllocatorEASTL>*)
                                            pLVar18->GetDevCredentialsOutputDirectory();
                            uVar3 = this_01->g1();
                            local_180 = CONCAT71(local_180._1_7_, uVar3);
                            eastl::vector<unsigned char, eastl::allocator>::vector(local_1e8);
                            if ((local_180 & 2) != 0) {
                                eastl::vector<unsigned char, eastl::allocator>::resize((ulong)local_1e8);
                            }
                            if ((local_180 & 1) == 0) {
                                local_170 = (LoginManager*)(ulong)uVar6;
                                if (0 < (int)uVar6) {
                                    uVar9 = (long)local_170 * 4;
                                    uVar22 = 0;
                                    do {
                                        uVar8 = this_01->g1();
                                        puVar12 = (uchar*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                            local_188, uVar22 & 4294967295);
                                        puVar15 = (uint*)eastl::vector<
                                            unsigned int,
                                            eastl::fixed_vector_allocator<4ul, 64ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](local_160,
                                                                                                         (ulong)uVar8 &
                                                                                                             255);
                                        ColorToRGBA(puVar12, *puVar15);
                                        uVar22 = uVar22 + 4;
                                        this_01 = local_190;
                                    } while (uVar9 != uVar22);
                                }
                                if (((local_180 & 2) != 0) && (0 < (int)uVar6)) {
                                    pLVar11 = (LoginManager*)0;
                                    bVar23 = false;
                                    do {
                                        uVar3 = this_01->g1();
                                        puVar13 =
                                            (undefined1*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                                                local_1e8, (ulong)pLVar11);
                                        *puVar13 = uVar3;
                                        pcVar19 = (char*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                                            local_1e8, (ulong)pLVar11);
                                        bVar23 = (bool)(bVar23 | *pcVar19 != -1);
                                        pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                                    } while (local_170 != pLVar11);
                                    if ((bVar23) && (0 < (int)uVar6)) {
                                        pLVar11 = (LoginManager*)0;
                                        do {
                                            puVar13 =
                                                (undefined1*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                                                    local_1e8, (ulong)pLVar11);
                                            uVar3 = *puVar13;
                                            puVar13 =
                                                (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                                    local_188, (ulong)(uint)((int)pLVar11 * 4) | 3);
                                            *puVar13 = uVar3;
                                            pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                                        } while (pLVar11 != local_170);
                                    }
                                }
                            } else {
                                if (0 < piVar16[4]) {
                                    iVar24 = 0;
                                    do {
                                        if (0 < piVar16[5]) {
                                            iVar20 = 0;
                                            do {
                                                uVar6 = this_01->g1();
                                                puVar12 =
                                                    (uchar*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                                        local_188, (long)((piVar16[4] * iVar20 + iVar24) * 4));
                                                puVar15 = (uint*)eastl::vector<
                                                    unsigned int, eastl::fixed_vector_allocator<
                                                                      4ul, 64ul, 4ul, 0ul, true, eastl::allocator>>::
                                                operator[](local_160, (ulong)uVar6 & 255);
                                                ColorToRGBA(puVar12, *puVar15);
                                                iVar20 = iVar20 + 1;
                                                this_01 = local_190;
                                            } while (iVar20 < piVar16[5]);
                                        }
                                        iVar24 = iVar24 + 1;
                                    } while (iVar24 < piVar16[4]);
                                }
                                if ((local_180 & 2) != 0) {
                                    local_170 = (LoginManager*)((ulong)local_170 & 18446744069414584320);
                                    if (piVar16[4] < 1) {
                                        bVar23 = false;
                                    } else {
                                        bVar23 = false;
                                        do {
                                            if (0 < piVar16[5]) {
                                                iVar24 = 0;
                                                do {
                                                    iVar20 = piVar16[4];
                                                    uVar3 = local_190->g1();
                                                    uVar9 = (ulong)(iVar20 * iVar24 + (int)local_170);
                                                    puVar13 = (undefined1*)
                                                        eastl::vector<unsigned char, eastl::allocator>::operator[](
                                                            local_1e8, uVar9);
                                                    *puVar13 = uVar3;
                                                    pcVar19 = (char*)
                                                        eastl::vector<unsigned char, eastl::allocator>::operator[](
                                                            local_1e8, uVar9);
                                                    bVar23 = (bool)(bVar23 | *pcVar19 != -1);
                                                    iVar24 = iVar24 + 1;
                                                } while (iVar24 < piVar16[5]);
                                            }
                                            iVar24 = (int)local_170 + 1;
                                            local_170 = (LoginManager*)CONCAT44(local_170._4_4_, iVar24);
                                        } while (iVar24 < piVar16[4]);
                                    }
                                    this_01 = local_190;
                                    if ((bVar23) && (0 < piVar16[4])) {
                                        iVar24 = 0;
                                        do {
                                            if (0 < piVar16[5]) {
                                                iVar20 = 0;
                                                do {
                                                    iVar21 = piVar16[4] * iVar20 + iVar24;
                                                    puVar13 = (undefined1*)
                                                        eastl::vector<unsigned char, eastl::allocator>::operator[](
                                                            local_1e8, (long)iVar21);
                                                    uVar3 = *puVar13;
                                                    puVar13 = (undefined1*)
                                                        Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                                            local_188, (long)(iVar21 * 4 + 3));
                                                    *puVar13 = uVar3;
                                                    iVar20 = iVar20 + 1;
                                                } while (iVar20 < piVar16[5]);
                                            }
                                            iVar24 = iVar24 + 1;
                                            this_01 = local_190;
                                        } while (iVar24 < piVar16[4]);
                                    }
                                }
                            }
                            eastl::vector<unsigned char, eastl::allocator>::~vector(local_1e8);
                            pLVar11 = local_1a8;
                        }
                        if ((byte)local_198 == '\0') {
                            local_160->~fixed_vector();
                            eastl::vector<RAWDecoder::RAWSpriteInfo, eastl::allocator>::~vector(local_1c8);
                            uVar9 = 0;
                            goto LAB_100a0d039;
                        }
                        pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                    } while (pLVar11 != local_178);
                }
                local_160->~fixed_vector();
                eastl::vector<RAWDecoder::RAWSpriteInfo, eastl::allocator>::~vector(local_1c8);
            }
            uVar9 = CONCAT71((int7)((ulong)pLVar11 >> 8), 1);
        }
    LAB_100a0d039:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar9 & 4294967295;
    }

    // 0x100a0d430, 176 bytes, placed by debug map only (low confidence)
    // RAWDecoder::LoadSingle(RGBAImage&, PacketView&)
    undefined4 RAWDecoder::LoadSingle(RGBAImage* param_1, PacketView* param_2) {
        char cVar1;
        undefined4 uVar2;
        long lVar3;
        RGBAImage* pRVar4;
        vector local_38[24];

        eastl::vector<RGBAImage, BucketAllocatorEASTL>::vector();
        uVar2 = LoadFromPacket(local_38, param_2);
        cVar1 = local_38->empty();
        if (cVar1 == '\0') {
            lVar3 = local_38->size();
            if (lVar3 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssert("imageVectorOut.size() == 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/RAWDecoding.cpp",
                          271, (char*)0);
            }
            pRVar4 = (RGBAImage*)eastl::vector<RGBAImage, BucketAllocatorEASTL>::operator[](
                (vector<RGBAImage, BucketAllocatorEASTL>*)local_38, 0);
            RGBAImage::operator=(param_1, pRVar4);
        }
        local_38->~vector();
        return uVar2;
    }

} // namespace jag

class NxtPNGInfoStruct {
public:
    NxtPNGInfoStruct();
    ~NxtPNGInfoStruct();
};

// 0x100a0c0d0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
// NxtPNGInfoStruct::~NxtPNGInfoStruct(): jumps straight to the base-object destructor

// 0x100a0e6c0, 32 bytes, base-object constructor, inline, placed by class header (inline)
// NxtPNGInfoStruct::NxtPNGInfoStruct()
void NxtPNGInfoStruct::NxtPNGInfoStruct() {
    *(undefined8*)(this + 152) = 0;
    new ((this + 160)) eastl::vector<unsigned char, eastl::allocator>();
}

// 0x100a0e6e0, 32 bytes, base-object destructor, inline, placed by class header (inline)
// NxtPNGInfoStruct::~NxtPNGInfoStruct()
void NxtPNGInfoStruct::~NxtPNGInfoStruct() {
    ((this + 160))->~vector();
}
