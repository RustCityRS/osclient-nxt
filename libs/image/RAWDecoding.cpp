// libs/image/RAWDecoding.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.image

namespace jag {
    class RAWDecoder {
    public:
        void ColorAndAlphaToRGBA(unsigned char* arg1, unsigned int arg2, unsigned char arg3);
        void ColorToRGBA(unsigned char* arg1, unsigned int arg2);
        unsigned long LoadFromPacket(eastl::vector<RGBAImage>& rgbaImages, PacketView& packetView);
        void LoadSingle(RGBAImage& rgbaImage, PacketView& packetView);
    };

    // 0x100a0c580
    void RAWDecoder::ColorAndAlphaToRGBA(unsigned char* arg1, unsigned int arg2, unsigned char arg3) {
        *arg1 = (unsigned char)(arg2 >> 16);
        arg1[1] = (unsigned char)(arg2 >> 8);
        arg1[2] = (unsigned char)arg2;
        arg1[3] = arg3;
    }

    // 0x100a0c5a0
    void RAWDecoder::ColorToRGBA(unsigned char* arg1, unsigned int arg2) {
        ColorAndAlphaToRGBA(arg1, arg2, -(arg2 != 0));
    }

    // 0x100a0c5c0
    unsigned long RAWDecoder::LoadFromPacket(eastl::vector<RGBAImage, BucketAllocatorEASTL>& rgbaImages,
                                             PacketView& packetView) {
        vector<RGBAImage, BucketAllocatorEASTL>* vector;
        uint8_t bVar1;
        bool cVar2;
        uint8_t uVar3;
        unsigned short uVar4;
        unsigned short uVar5;
        unsigned int uVar6;
        uint32_t uVar7;
        unsigned int uVar8;
        Logger* pLVar10;
        LoginManager* pLVar11;
        Array<unsigned char, BucketAllocatorEASTL>* this_00;
        unsigned char* puVar12;
        uint8_t* puVar13;
        long lVar14;
        unsigned int* puVar15;
        int* piVar16;
        uint32_t* puVar17;
        LoginManager* pLVar18;
        char* pcVar19;
        int iVar20;
        int iVar21;
        unsigned long uVar22;
        PacketView* this_01;
        bool bVar23;
        int iVar24;
        vector<unsigned char> local_1e8;
        vector<RAWDecoder::RAWSpriteInfo> local_1c8;
        LoginManager* local_1a8;
        LoginManager* local_198;
        PacketView* local_190;
        uint64_t local_188;
        unsigned long local_180;
        LoginManager* local_178;
        uint64_t local_170;
        char local_161;
        fixed_vector<unsigned int, 64ul> local_160;

        vector<RGBAImage, BucketAllocatorEASTL>* local_1a0 = rgbaImages;
        unsigned long uVar9 = ShuffledPacketFactory::p2_alt2();
        if (uVar9 < 2) {
            pLVar10 = logger::default_logger();
            uVar9 = 0;
            pLVar10->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/RAWDecoding.cpp",
                         51, "Invalid position for the sprite count!");
        } else {
            packetView.SetPos(uVar9 - 2);
            uVar4 = packetView.g2();
            local_170 = (LoginManager*)((((uint64_t)local_170._4_4_ << 32) | (uint32_t)((unsigned int)uVar4)) &
                                        18446744069414617087);
            local_190 = packetView;
            if ((short)uVar4 < 0) {
                packetView.SetPos(0);
                bVar1 = packetView.g1();
                if (bVar1 == 1) {
                    LogAssertAlways(
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/RAWDecoding.cpp",
                        99, "SpriteRawLoader: Unsupported all colour sprite format: JPEG");
                }
                if (bVar1 != 0) {
                    LogAssertAlways(
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/RAWDecoding.cpp",
                        104, "RAWDecoder : Unknown all colour sprite format : %i", (unsigned long)bVar1);
                }
                local_161 = packetView.g1();
                uVar4 = packetView.g2();
                uVar5 = packetView.g2();
                vector = local_1a0;
                local_1a0->resize((unsigned long)local_170 & 65535);
                pLVar11 = (LoginManager*)vector->HeapBeginPtr();
                local_198 = (LoginManager*)vector->end();
                uVar9 = (unsigned long)(pLVar11 == local_198);
                if (pLVar11 != local_198) {
                    local_1a0 = (vector<RGBAImage, BucketAllocatorEASTL>*)(unsigned long)uVar4;
                    local_1a8 = (LoginManager*)(unsigned long)uVar5;
                    local_178 = (LoginManager*)((long)local_1a8 * (long)local_1a0);
                    uVar9 = 0;
                    do {
                        iVar24 = (int)local_1a0;
                        iVar20 = (int)local_1a8;
                        pcVar19 = nullptr;
                        local_180 = uVar9;
                        cVar2 = pLVar11->Create(iVar24, iVar20, nullptr);
                        local_188 = (Array<unsigned char, BucketAllocatorEASTL>*)(((uint64_t)local_188._1_7_ << 8) |
                                                                                  (uint8_t)cVar2);
                        local_170 = pLVar11;
                        if (!cVar2) {
                            pLVar10 = logger::default_logger();
                            pcVar19 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/"
                                      "RAWDecoding.cpp";
                            pLVar10->Log(false, 2,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/"
                                         "RAWDecoding.cpp",
                                         76, "Failed to create new image using the resolution %ix%i", iVar24, iVar20);
                        } else {
                            this_00 = (Array<unsigned char, BucketAllocatorEASTL>*)
                                          pLVar11->GetDevCredentialsOutputDirectory();
                            if (local_178 != nullptr) {
                                uVar9 = 0;
                                pLVar18 = local_178;
                                do {
                                    uVar6 = packetView.g3();
                                    puVar12 = (unsigned char*)(*this_00)[uVar9];
                                    ColorAndAlphaToRGBA(puVar12, uVar6, 255);
                                    uVar9 = uVar9 + 4;
                                    pLVar18 = (LoginManager*)&pLVar18[-1].field_375;
                                    pLVar11 = nullptr;
                                } while (pLVar18 != nullptr);
                            }
                            if ((local_161 == '\x01') && (local_178 != nullptr)) {
                                pLVar11 = (LoginManager*)3;
                                pLVar18 = local_178;
                                do {
                                    uVar3 = packetView.g1();
                                    puVar13 = (uint8_t*)(*this_00)[(unsigned long)pLVar11];
                                    *puVar13 = uVar3;
                                    pLVar11 = (LoginManager*)((long)pLVar11 + 4);
                                    pLVar18 = (LoginManager*)&pLVar18[-1].field_375;
                                } while (pLVar18 != nullptr);
                            }
                        }
                        if ((char)local_188 == '\0') {
                            bVar23 = true;
                            if ((local_180 & 1) == 0)
                                goto LAB_100a0d02f;
                            goto LAB_100a0d02d;
                        }
                        pLVar11 = (LoginManager*)&local_170->field_88;
                        uVar9 = (((uint64_t)((int64_t)((unsigned long)pcVar19 >> 8)) << 8) |
                                 (uint8_t)(pLVar11 == local_198));
                        packetView = local_190;
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
                    LogAssertAlways(
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/RAWDecoding.cpp",
                        260, "RawDecoding: Invalid sprite type loaded: %i");
                }
                local_1c8 = eastl::vector<RAWDecoder::RAWSpriteInfo>();
                pLVar11 = (LoginManager*)((unsigned long)local_170 & 65535);
                local_1c8.resize((unsigned long)pLVar11);
                local_1a0->resize((unsigned long)pLVar11);
                local_178 = pLVar11;
                lVar14 = ShuffledPacketFactory::p2_alt2();
                local_180 = (long)local_178 * 8;
                packetView.SetPos((lVar14 + (long)local_178 * -8) - 7);
                uVar7 = packetView.g2();
                uVar6 = packetView.g2();
                pLVar11 = (LoginManager*)(unsigned long)uVar6;
                uVar3 = packetView.g1();
                local_198 = (LoginManager*)(((uint64_t)local_198._1_7_ << 8) | (uint8_t)uVar3);
                if ((short)local_170 != 0) {
                    local_188 = (Array<unsigned char, BucketAllocatorEASTL>*)((((uint64_t)local_188._4_4_ << 32) |
                                                                               (uint32_t)uVar7) &
                                                                              18446744069414649855);
                    pLVar11 = nullptr;
                    do {
                        uVar8 = packetView.g2();
                        puVar15 = &local_1c8[(unsigned long)pLVar11];
                        *puVar15 = uVar8 & 65535;
                        pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                    } while (local_178 != pLVar11);
                    pLVar11 = nullptr;
                    do {
                        uVar8 = packetView.g2();
                        lVar14 = local_1c8[(unsigned long)pLVar11];
                        *(unsigned int*)(lVar14 + 8) = uVar8 & 65535;
                        pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                    } while (local_178 != pLVar11);
                    pLVar11 = nullptr;
                    do {
                        uVar8 = packetView.g2();
                        lVar14 = local_1c8[(unsigned long)pLVar11];
                        *(unsigned int*)(lVar14 + 16) = uVar8 & 65535;
                        pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                    } while (local_178 != pLVar11);
                    pLVar11 = nullptr;
                    do {
                        uVar8 = packetView.g2();
                        lVar14 = local_1c8[(unsigned long)pLVar11];
                        *(unsigned int*)(lVar14 + 20) = uVar8 & 65535;
                        pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                    } while (local_178 != pLVar11);
                    pLVar11 = nullptr;
                    do {
                        piVar16 = &local_1c8[(unsigned long)pLVar11];
                        piVar16[1] = (int)local_188 - (piVar16[4] + *piVar16);
                        piVar16[3] = (uVar6 & 65535) - (piVar16[5] + piVar16[2]);
                        pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                    } while (local_178 != pLVar11);
                }
                lVar14 = ShuffledPacketFactory::p2_alt2();
                uVar6 = (uint8_t)local_198 + 1;
                packetView.SetPos(((-(unsigned long)(uVar6 * 3) - local_180) + lVar14) - 4);
                local_160 = eastl::fixed_vector<unsigned int, 64ul>((unsigned long)uVar6);
                puVar17 = &local_160[0];
                *puVar17 = 0;
                if ((uint8_t)local_198 != '\0') {
                    pLVar11 = (LoginManager*)&DAT_00000001;
                    do {
                        uVar7 = local_190->g3();
                        puVar17 = &local_160[(unsigned long)pLVar11];
                        *puVar17 = uVar7;
                        piVar16 = &local_160[(unsigned long)pLVar11];
                        if (*piVar16 == 0) {
                            puVar17 = &local_160[(unsigned long)pLVar11];
                            *puVar17 = 1;
                        }
                        lVar14 = (long)pLVar11 - (unsigned long)uVar6;
                        pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                    } while (lVar14 != -1);
                }
                this_01 = local_190;
                local_190->SetPos(0);
                if ((short)local_170 != 0) {
                    pLVar11 = nullptr;
                    do {
                        piVar16 = &local_1c8[(unsigned long)pLVar11];
                        pLVar18 = (LoginManager*)(*local_1a0)[(unsigned long)pLVar11];
                        cVar2 = pLVar18->Create(piVar16[4], piVar16[5], nullptr);
                        local_198 = (LoginManager*)(((uint64_t)local_198._1_7_ << 8) | (uint8_t)cVar2);
                        if (!cVar2) {
                            pLVar10 = logger::default_logger();
                            pLVar10->Log(false, 2,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/"
                                         "RAWDecoding.cpp",
                                         174, "Failed to create new image using the resolution %ix%i", piVar16[4],
                                         piVar16[5]);
                        } else {
                            pLVar18->SetMargins(*piVar16, piVar16[2], piVar16[1], piVar16[3], 0);
                            uVar6 = piVar16[5] * piVar16[4];
                            local_1a8 = pLVar11;
                            local_188 = (Array<unsigned char, BucketAllocatorEASTL>*)
                                            pLVar18->GetDevCredentialsOutputDirectory();
                            uVar3 = this_01->g1();
                            local_180 = (((uint64_t)local_180._1_7_ << 8) | (uint8_t)uVar3);
                            local_1e8 = eastl::vector<unsigned char>();
                            if ((local_180 & 2) != 0) {
                                local_1e8.resize((long)(int)uVar6);
                            }
                            if ((local_180 & 1) == 0) {
                                local_170 = (LoginManager*)(unsigned long)uVar6;
                                if (0 < (int)uVar6) {
                                    uVar9 = (long)local_170 * 4;
                                    uVar22 = 0;
                                    do {
                                        uVar8 = this_01->g1();
                                        puVar12 = (unsigned char*)(*local_188)[uVar22 & 4294967295];
                                        puVar15 = &local_160[(unsigned long)uVar8 & 255];
                                        ColorToRGBA(puVar12, *puVar15);
                                        uVar22 = uVar22 + 4;
                                        this_01 = local_190;
                                    } while (uVar9 != uVar22);
                                }
                                if (((local_180 & 2) != 0) && (0 < (int)uVar6)) {
                                    pLVar11 = nullptr;
                                    bVar23 = false;
                                    do {
                                        uVar3 = this_01->g1();
                                        puVar13 = &local_1e8[(unsigned long)pLVar11];
                                        *puVar13 = uVar3;
                                        pcVar19 = &local_1e8[(unsigned long)pLVar11];
                                        bVar23 = (bool)(bVar23 | *pcVar19 != -1);
                                        pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                                    } while (local_170 != pLVar11);
                                    if ((bVar23) && (0 < (int)uVar6)) {
                                        pLVar11 = nullptr;
                                        do {
                                            puVar13 = &local_1e8[(unsigned long)pLVar11];
                                            uVar3 = *puVar13;
                                            puVar13 =
                                                (uint8_t*)(*local_188)[(unsigned long)(unsigned int)((int)pLVar11 * 4) |
                                                                       3];
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
                                                puVar12 = (unsigned char*)(*local_188)[(
                                                    long)((piVar16[4] * iVar20 + iVar24) * 4)];
                                                puVar15 = &local_160[(unsigned long)uVar6 & 255];
                                                ColorToRGBA(puVar12, *puVar15);
                                                iVar20 = iVar20 + 1;
                                                this_01 = local_190;
                                            } while (iVar20 < piVar16[5]);
                                        }
                                        iVar24 = iVar24 + 1;
                                    } while (iVar24 < piVar16[4]);
                                }
                                if ((local_180 & 2) != 0) {
                                    local_170 = (LoginManager*)((unsigned long)local_170 & 18446744069414584320);
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
                                                    uVar9 = (unsigned long)(iVar20 * iVar24 + (int)local_170);
                                                    puVar13 = &local_1e8[uVar9];
                                                    *puVar13 = uVar3;
                                                    pcVar19 = &local_1e8[uVar9];
                                                    bVar23 = (bool)(bVar23 | *pcVar19 != -1);
                                                    iVar24 = iVar24 + 1;
                                                } while (iVar24 < piVar16[5]);
                                            }
                                            iVar24 = (int)local_170 + 1;
                                            local_170 =
                                                (LoginManager*)(((uint64_t)local_170._4_4_ << 32) | (uint32_t)iVar24);
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
                                                    puVar13 = &local_1e8[(long)iVar21];
                                                    uVar3 = *puVar13;
                                                    puVar13 = (uint8_t*)(*local_188)[(long)(iVar21 * 4 + 3)];
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
                            pLVar11 = local_1a8;
                        }
                        if ((uint8_t)local_198 == '\0') {
                            uVar9 = 0;
                            goto LAB_100a0d039;
                        }
                        pLVar11 = (LoginManager*)((long)&pLVar11->field_0 + 1);
                    } while (pLVar11 != local_178);
                }
            }
            uVar9 = (((uint64_t)((int64_t)((unsigned long)pLVar11 >> 8)) << 8) | (uint8_t)1);
        }
    LAB_100a0d039:
        return uVar9 & 4294967295;
    }

    // 0x100a0d430
    void RAWDecoder::LoadSingle(RGBAImage& rgbaImage, PacketView& packetView) {
        RGBAImage* rgbaImage_00;

        vector<RGBAImage, BucketAllocatorEASTL> local_38;
        uint32_t uVar2 = LoadFromPacket(&local_38, packetView);
        if (local_38.empty() == '\0') {
            if (local_38.size() != 1) {
                LogAssert("imageVectorOut.size() == 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/RAWDecoding.cpp",
                          271, nullptr);
            }
            rgbaImage_00 = &local_38[0];
            rgbaImage = *rgbaImage_00;
        }
        return uVar2;
    }

} // namespace jag

class NxtPNGInfoStruct {
public:
    NxtPNGInfoStruct();
    ~NxtPNGInfoStruct();
};

// 0x100a0e6c0
NxtPNGInfoStruct::NxtPNGInfoStruct() {
    *(uint64_t*)(this + 152) = 0;
    new ((this + 160)) eastl::vector<unsigned char>();
}

// 0x100a0e6e0
NxtPNGInfoStruct::~NxtPNGInfoStruct() {
    ((this + 160))->~vector();
}
