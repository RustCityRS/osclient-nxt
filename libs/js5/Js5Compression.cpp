// libs/js5/Js5Compression.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.js5

namespace jag {
    class Js5Compression {
    public:
        auto Decompress(PacketT<Array<unsigned char>>& arg1, JS5DecompressionResult& js5DecompressionResult);
        TextureAtlasReference* DecompressBZip2(PacketT<Array<unsigned char>>& arg1, unsigned long arg2,
                                               unsigned long arg3, unsigned long arg4,
                                               JS5DecompressionResult& js5DecompressionResult);
        auto DecompressGZip(PacketT<Array<unsigned char>>& arg1, unsigned long arg2, unsigned long arg3,
                            unsigned long arg4, JS5DecompressionResult& js5DecompressionResult);
        auto DecompressLZMA(PacketT<Array<unsigned char>>& arg1, unsigned long arg2, unsigned long arg3,
                            unsigned long arg4, JS5DecompressionResult& js5DecompressionResult);
        void DecodePNG(PacketT<Array<unsigned char>>& arg1);

        uint8_t _unknown_0[1];
    };

    // 0x1009debf0
    auto Js5Compression::Decompress(PacketT<Array<unsigned char>>& arg1,
                                    Js5Compression::JS5DecompressionResult& js5DecompressionResult) {
        unsigned long uVar3;
        long lVar4;
        unsigned long uVar5;
        void* pvVar6;
        long lVar7;

        arg1.SetPos(0);
        char cVar1 = arg1.g1();
        unsigned int uVar2 = arg1.g4();
        unsigned long arg1_00 = (unsigned long)uVar2;
        *(uint32_t*)js5DecompressionResult = 0;
        if (!cVar1) {
            auto result(arg1_00);
            if (arg1_00 != 0) {
                lVar4 = arg1.size();
                uVar5 = arg1.GetTextureAtlas();
                if (uVar5 < lVar4 + arg1_00) {
                    LogAssert(
                        "data.GetPos() + compressedLength <= data.GetSize()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                        42, nullptr);
                }
                pvVar6 = result.GetDataPtr();
                lVar4 = arg1.GetDataPtr();
                lVar7 = arg1.size();
                _memcpy(pvVar6, (void*)(lVar4 + lVar7), arg1_00);
            }
        } else {
            uVar2 = arg1.g4();
            uVar5 = (unsigned long)uVar2;
            if (cVar1 == '\x03') {
                uVar3 = arg1.size();
                DecompressLZMA(&result, arg1, uVar3, arg1_00, uVar5, js5DecompressionResult);
            } else if (cVar1 == '\x02') {
                uVar3 = arg1.size();
                DecompressGZip(&result, arg1, uVar3, arg1_00, uVar5, js5DecompressionResult);
            } else if (cVar1 == '\x01') {
                uVar3 = arg1.size();
                DecompressBZip2(&result, arg1, uVar3, arg1_00, uVar5, js5DecompressionResult);
            } else {
                *(uint32_t*)js5DecompressionResult = 1;
                new (&result) PacketT();
            }
        }
        return result;
    }

    // 0x1009ded80
    TextureAtlasReference*
    Js5Compression::DecompressBZip2(PacketT<Array<unsigned char>>& arg1, unsigned long arg2, unsigned long arg3,
                                    unsigned long arg4,
                                    Js5Compression::JS5DecompressionResult& js5DecompressionResult) {
        char* pcVar1;
        char* pcVar2;
        Logger* pLVar5;
        uint64_t uVar6;
        unsigned long uVar7;
        uint32_t uVar8;
        bz_stream local_a8;

        JS5DecompressionResult* local_40 = js5DecompressionResult;
        new (this) PacketT(arg4);
        local_a8.bzfree = nullptr;
        local_a8.opaque = nullptr;
        local_a8.state = nullptr;
        local_a8.bzalloc = nullptr;
        local_a8.avail_out = 0;
        local_a8.total_out_lo32 = 0;
        local_a8.total_out_hi32 = 0;
        local_a8._44_4_ = 0;
        local_a8.total_in_hi32 = 0;
        local_a8._20_4_ = 0;
        local_a8.next_out = nullptr;
        local_a8.next_in = nullptr;
        local_a8.avail_in = 0;
        local_a8.total_in_lo32 = 0;
        uint64_t local_58 = 0;
        long lVar4 = arg1.GetDataPtr();
        local_a8.next_in = (char*)(lVar4 + arg2);
        local_a8.avail_in = (unsigned int)arg3;
        lVar4 = arg1.GetTextureAtlas();
        if (lVar4 - arg2 < arg3) {
            LogAssert("lengthCompressed <= data.GetSize() - offset",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                      92, nullptr);
        }
        local_a8.next_out = (char*)GetDataPtr();
        local_a8.avail_out = (unsigned int)arg4;
        int iVar3 = _BZ2_bzDecompressInit(&local_a8, 0, 0);
        if (iVar3 == 0) {
            local_a8.bzalloc = (_func_1324*)(((uint64_t)local_a8.bzalloc._4_4_ << 32) | (uint32_t)1);
            do {
                iVar3 = _BZ2_bzDecompress(&local_a8);
            } while (iVar3 == 0);
            if (iVar3 != 4) {
                *(uint32_t*)local_40 = 1;
                pLVar5 = logger::default_logger();
                uVar6 = BzipError(iVar3);
                pLVar5->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 116,
                    "BZ2_bzDecompress error %d (%s)", iVar3, uVar6);
                uVar8 = (uint32_t)((unsigned long)uVar6 >> 32);
                ((PacketT<Array<unsigned char>>*)(TextureAtlasReference*)this)->Clear();
                if (iVar3 == 0) {
                    lVar4 = GetTextureAtlas();
                    pcVar1 = local_a8.next_in;
                    if (lVar4 != 0) {
                        lVar4 = arg1.GetDataPtr();
                        pcVar2 = local_a8.next_out;
                        uVar7 = (long)pcVar1 - (lVar4 + arg2);
                        if (uVar7 == arg3) {
                            lVar4 = ((PacketT<Array<unsigned char>>*)(TextureAtlasReference*)this)->GetDataPtr();
                            if ((long)pcVar2 - lVar4 != arg4) {
                                *(uint32_t*)local_40 = 1;
                                ((PacketT<Array<unsigned char>>*)(TextureAtlasReference*)this)->Clear();
                                pLVar5 = logger::default_logger();
                                pLVar5->Log(false, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                            "Js5Compression.cpp",
                                            138, "BZ2_bzDecompress gave us %u bytes instead of %u",
                                            (int)((long)pcVar2 - lVar4),
                                            (((uint64_t)uVar8 << 32) | (uint32_t)((int)arg4)));
                            }
                        } else {
                            *(uint32_t*)local_40 = 1;
                            ((PacketT<Array<unsigned char>>*)(TextureAtlasReference*)this)->Clear();
                            pLVar5 = logger::default_logger();
                            pLVar5->Log(false, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                        "Js5Compression.cpp",
                                        145, "BZ2_bzDecompress took %u bytes from us instead of %u", (int)uVar7,
                                        (((uint64_t)uVar8 << 32) | (uint32_t)((unsigned int)arg3)));
                        }
                    }
                }
            }
            iVar3 = _BZ2_bzDecompressEnd(&local_a8);
            if (iVar3 != 0) {
                pLVar5 = logger::default_logger();
                uVar6 = BzipError(iVar3);
                pLVar5->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 152,
                    "BZ2_bzDecompressEnd error %d (%s)", iVar3, uVar6);
            }
        } else {
            *(uint32_t*)local_40 = 1;
            ((PacketT<Array<unsigned char>>*)(TextureAtlasReference*)this)->Clear();
            pLVar5 = logger::default_logger();
            uVar6 = BzipError(iVar3);
            pLVar5->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                        159, "BZ2_bzDecompressInit error %d (%s)", iVar3, uVar6);
        }
        return (TextureAtlasReference*)this;
    }

    // 0x1009df080
    auto Js5Compression::DecompressGZip(PacketT<Array<unsigned char>>& arg1, unsigned long arg2, unsigned long arg3,
                                        unsigned long arg4,
                                        Js5Compression::JS5DecompressionResult& js5DecompressionResult) {
        Bytef* pBVar2;
        Logger* pLVar7;
        char* pcVar8;
        uint64_t in_stack_ffffffffffffff10;
        z_stream local_e8;

        uint32_t uVar11 = (uint32_t)((unsigned long)in_stack_ffffffffffffff10 >> 32);
        local_e8.adler = 0;
        local_e8.reserved = 0;
        local_e8.opaque = (voidpf)0;
        local_e8.data_type = 0;
        local_e8._92_4_ = 0;
        local_e8.zalloc = (alloc_func)0;
        local_e8.zfree = (free_func)0;
        local_e8.msg = nullptr;
        local_e8.state = nullptr;
        local_e8.avail_out = 0;
        local_e8._36_4_ = 0;
        local_e8.total_out = 0;
        local_e8.total_in = 0;
        local_e8.next_out = nullptr;
        local_e8.next_in = nullptr;
        local_e8.avail_in = 0;
        local_e8._12_4_ = 0;
        JS5DecompressionResult* local_38 = js5DecompressionResult;
        long lVar6 = arg1.GetDataPtr();
        if ((*(char*)(lVar6 + 9) != '\x1f') || (*(char*)(lVar6 + 10) != -117)) {
            pLVar7 = logger::default_logger();
            pLVar7->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                        174, "Invalid gzip header");
            *(uint32_t*)local_38 = 1;
            return auto();
        }
        VBOMapper local_68(arg4);
        lVar6 = arg1.GetDataPtr();
        unsigned long uVar10 = arg3 - 8;
        local_e8.next_in = (Bytef*)(lVar6 + arg2 + 10);
        local_e8.avail_in = (int)arg3 - 18;
        lVar6 = arg1.GetTextureAtlas();
        unsigned long local_40 = uVar10;
        if (lVar6 - arg2 < uVar10) {
            LogAssert("(size_t)lengthCompressed <= data.GetSize() - offset",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                      185, nullptr);
        }
        local_e8.next_out = (Bytef*)local_68.GetDataPtr();
        local_e8.avail_out = (uInt)arg4;
        int iVar5 = _inflateInit2_(&local_e8, -15, "1.2.11", 112);
        uVar10 = arg2;
        if (iVar5 != 0) {
            pLVar7 = logger::default_logger();
            pcVar8 = "(no message)";
            if (local_e8.msg != nullptr) {
                pcVar8 = local_e8.msg;
            }
            pLVar7->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                        243, "inflateInit error %d: %s", iVar5, pcVar8);
            local_68.Clear();
            *(uint32_t*)local_38 = 1;
            goto LAB_1009df3d1;
        }
        iVar5 = _inflate(&local_e8, 4);
        Bytef* pBVar1 = local_e8.next_in;
        if (iVar5 == 0) {
            pLVar7 = logger::default_logger();
            pLVar7->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                        225, "inflate didn\'t finish - truncated input, or output longer than recorded in js5?");
        LAB_1009df365:
            local_68.Clear();
        LAB_1009df36e:
            *(uint32_t*)local_38 = 1;
        } else {
            if (iVar5 != 1) {
                pLVar7 = logger::default_logger();
                pcVar8 = "(no message)";
                if (local_e8.msg != nullptr) {
                    pcVar8 = local_e8.msg;
                }
                pLVar7->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 229,
                    "inflate error %d: %s", iVar5, pcVar8);
                goto LAB_1009df365;
            }
            lVar6 = arg1.GetDataPtr();
            pBVar2 = local_e8.next_out;
            uVar10 = (long)pBVar1 - (lVar6 + uVar10);
            if (uVar10 != local_40) {
                pLVar7 = logger::default_logger();
                pLVar7->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 216,
                    "inflate took %u bytes from us instead of %u", (int)uVar10,
                    (((uint64_t)uVar11 << 32) | (uint32_t)((int)local_40)));
                local_68.Clear();
                goto LAB_1009df36e;
            }
            lVar6 = local_68.GetDataPtr();
            if ((long)pBVar2 - lVar6 != arg4) {
                pLVar7 = logger::default_logger();
                pLVar7->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 209,
                    "inflate gave us %u bytes instead of %u", (int)((long)pBVar2 - lVar6),
                    (((uint64_t)uVar11 << 32) | (uint32_t)(uInt)arg4));
                local_68.Clear();
                goto LAB_1009df36e;
            }
        }
        iVar5 = _inflateEnd(&local_e8);
        if (iVar5 != 0) {
            pLVar7 = logger::default_logger();
            pcVar8 = "(no message)";
            if (local_e8.msg != nullptr) {
                pcVar8 = local_e8.msg;
            }
            pLVar7->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                        238, "inflateEnd error %d: %s", iVar5, pcVar8);
        }
    LAB_1009df3d1:
        new (&result) PacketT(&local_68);
        return result;
    }

    // 0x1009df460
    auto Js5Compression::DecompressLZMA(PacketT<Array<unsigned char>>& arg1, unsigned long arg2, unsigned long arg3,
                                        unsigned long arg4,
                                        Js5Compression::JS5DecompressionResult& js5DecompressionResult) {
        Logger* pLVar3;
        uint64_t uVar4;
        uint64_t in_stack_ffffffffffffff18;
        unsigned char local_c1[5];
        uint8_t local_b8[8];

        uint32_t uVar6 = (uint32_t)((unsigned long)in_stack_ffffffffffffff18 >> 32);
        JS5DecompressionResult* local_d0 = js5DecompressionResult;
        long lVar2 = arg1.GetTextureAtlas();
        if (lVar2 - arg2 < arg3) {
            LogAssert("(size_t)lengthCompressed <= data.GetSize() - offset",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                      393, nullptr);
        }
        auto result(arg4);
        uint64_t local_a0 = 0;
        uint64_t local_b0 = 0;
        _LzmaDec_Init(local_b8);
        int local_bc = 2;
        unsigned long local_e0 = arg3;
        unsigned long local_d8 = arg4;
        arg1.gArrayBuffer(local_c1, 0, 5);
        int iVar1 = _LzmaDec_Allocate(local_b8, local_c1, 5, &g_Alloc);
        if (iVar1 == 0) {
            uVar4 = result.GetDataPtr();
            lVar2 = arg1.GetDataPtr();
            iVar1 = _LzmaDec_DecodeToBuf(local_b8, uVar4, &local_d8, lVar2 + arg2 + 5, &local_e0, 0, &local_bc);
            uVar6 = (uint32_t)((unsigned long)&local_bc >> 32);
            _LzmaDec_Free(local_b8);
            if (iVar1 == 0) {
                if ((local_bc != 1) && (local_bc != 4)) {
                    pLVar3 = logger::default_logger();
                    pLVar3->Log(
                        false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                        429, "lzma reached end of stream without finishing");
                }
                goto LAB_1009df619;
            }
            pLVar3 = logger::default_logger();
            pLVar3->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                        423, "lzma decompression decode failed: %d", (((uint64_t)uVar6 << 32) | (uint32_t)iVar1));
            result.Clear();
        } else {
            pLVar3 = logger::default_logger();
            pLVar3->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                        413, "lzma decompression allocate failed: %d", (((uint64_t)uVar6 << 32) | (uint32_t)iVar1));
        }
        *(uint32_t*)local_d0 = 1;
    LAB_1009df619:
        return result;
    }

    // 0x1009df760
    void Js5Compression::DecodePNG(PacketT<Array<unsigned char>>& arg1) {
        bool bVar1;
        uint8_t bVar3;
        unsigned int uVar5;
        unsigned int arg1_00;
        int iVar6;
        int iVar7;
        ID IVar8;
        long lVar9;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* array;
        unsigned long uVar11;
        unsigned char* puVar12;
        ID id;
        PacketView local_108;
        unsigned char* local_a8;
        ID local_9c;
        unsigned int local_98;
        uint8_t local_92;
        uint8_t local_91;
        RGBAImage local_90;

        local_108.PacketView<Array<unsigned char>>(arg1);
        uint8_t bVar2 = local_108.g1();
        TextureAtlasReference local_d8;
        if (bVar2 != 0) {
            local_d8._32_8_ = (uint64_t)bVar2;
            bVar2 = 1;
            local_a8 = nullptr;
            local_9c = 0;
            local_98 = 0;
            do {
                bVar3 = local_108.g1();
                if (local_98 == 0) {
                    local_9c = (unsigned int)bVar3;
                }
                local_92 = bVar3;
                if ((bVar3 != 0) && ((bVar2 & 1) != 0)) {
                    local_d8.m_textureAtlasID = 0;
                    local_d8.field_44 = 0;
                    local_d8._45_3_ = 0;
                    do {
                        uVar5 = local_108.g4();
                        local_91 = bVar2;
                        lVar9 = local_108.data();
                        local_90 = RGBAImage();
                        if (PNGDecoder::LoadFromPacket(local_90, local_108) == '\0') {
                            LogAssertAlways(
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                "Js5Compression.cpp",
                                463, "Failed to entirely load mipped PNG image, PNG decode failed at mip level %d/%d.",
                                (unsigned long)(local_d8.m_textureAtlasID + 1), (unsigned long)(unsigned int)bVar3);
                        }
                        if (local_108.data() != lVar9 + (unsigned long)uVar5) {
                            LogAssert("sourceData.GetPos() == (mipDecodeStartPos + pngByteLength)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                      "Js5Compression.cpp",
                                      467, nullptr);
                        }
                        uVar5 = local_90.GetX();
                        arg1_00 = local_90.GetZ();
                        if (local_d8.m_textureAtlasID != 0) {
                            puVar12 = nullptr;
                        } else {
                            puVar12 = nullptr;
                            if (local_92 != 0) {
                                uVar11 = 0;
                                puVar12 = nullptr;
                                do {
                                    puVar12 =
                                        (unsigned char*)((long)puVar12 +
                                                         (unsigned long)(unsigned int)((int)((unsigned long)(long)(int)
                                                                                                 uVar5 >>
                                                                                             ((uint8_t)uVar11 & 63)) *
                                                                                       (int)((unsigned long)(long)(int)
                                                                                                 arg1_00 >>
                                                                                             ((uint8_t)uVar11 & 63)) *
                                                                                       4));
                                    uVar11 = uVar11 + 1;
                                } while (bVar3 != uVar11);
                            }
                        }
                        id = (ID)bVar3;
                        if (local_98 == 0 && local_d8.m_textureAtlasID == 0) {
                            local_d8.Reserve((long)puVar12 * local_d8._32_8_ + 9);
                            local_d8.p1<unsigned long>(id);
                            local_d8.p4<int>(uVar5);
                            local_d8.p4<int>(arg1_00);
                        LAB_1009df9cc:
                            lVar9 = local_d8.GetTextureAtlas();
                            bVar1 = true;
                            if (lVar9 == 0) {
                                local_a8 = puVar12;
                                bVar2 = local_91;
                            } else {
                                array = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)
                                            local_90.GetDevCredentialsOutputDirectory();
                                local_a8 = (unsigned char*)array->data();
                                iVar6 = local_90.GetX();
                                iVar7 = local_90.GetZ();
                                local_d8.pArrayBuffer(local_a8, 0, (long)(iVar7 * iVar6 * 4));
                                local_a8 = puVar12;
                                bVar2 = local_91;
                            }
                        } else {
                            bVar1 = false;
                            if (local_d8.m_textureAtlasID != 0 || puVar12 == local_a8) {
                                bVar2 = 0;
                                puVar12 = local_a8;
                                if (local_9c == id)
                                    goto LAB_1009df9cc;
                            } else {
                                bVar2 = 0;
                            }
                        }
                    } while (((bVar1) &&
                              (IVar8 = local_d8.m_textureAtlasID + 1, local_d8._40_8_ = (uint64_t)IVar8, IVar8 < id)) &&
                             ((bVar2 & 1) != 0));
                }
                local_98 = local_98 + 1;
            } while ((local_98 < (unsigned int)local_d8._32_4_) && ((bVar2 & 1) != 0));
        }
        arg1 = local_d8;
    }

} // namespace jag

// 0x1009df6a0
void BzipError(int arg1) {
    if ((unsigned int)arg1 < 4294967287) {
        return nullptr;
    }
    return (&PTR_s_Config_error_100f1d040)[arg1 + 9];
}

// 0x1009f6a00
unsigned int SzMarkPermanentBufferUsed(unsigned char* arg1, unsigned long arg2, bool arg3) {
    unsigned int unaff_EBX;

    if ((arg1[arg2] != '\x01') != arg3) {
        jag::LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 314,
            nullptr);
    }
    arg1[arg2] = arg3;
    return unaff_EBX & 4294967040 ^ 1;
}
