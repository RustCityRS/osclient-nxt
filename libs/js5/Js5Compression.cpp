// libs/js5/Js5Compression.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.js5

namespace jag {
    class Js5Compression {
    public:
        Js5Compression* Decompress(PacketT<Array<unsigned char, eastl::allocator>>&, JS5DecompressionResult&);
        TextureAtlasReference* DecompressBZip2(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned long,
                                               unsigned long, unsigned long, JS5DecompressionResult&);
        Js5Compression* DecompressGZip(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned long, unsigned long,
                                       unsigned long, JS5DecompressionResult&);
        Js5Compression* DecompressLZMA(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned long, unsigned long,
                                       unsigned long, JS5DecompressionResult&);
        void DecodePNG(PacketT<Array<unsigned char, eastl::allocator>>&);

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[24];
        undefined8 field_24; // offset 24
    };

    // 0x1009debf0, 400 bytes, placed by class name and debug map
    // Js5Compression::Decompress(PacketT<Array<unsigned char, eastl::allocator> >&, Js5Compression::JS5DecompressionResult&)
    Js5Compression* Js5Compression::Decompress(PacketT* param_1, JS5DecompressionResult* param_2) {
        char cVar1;
        uint uVar2;
        ulong uVar3;
        long lVar4;
        ulong uVar5;
        void* pvVar6;
        long lVar7;
        ulong uVar8;

        param_1->SetPos(0);
        cVar1 = param_1->g1();
        uVar2 = param_1->g4();
        uVar8 = (ulong)uVar2;
        *(undefined4*)param_2 = 0;
        if (cVar1 == '\0') {
            new (this) PacketT<Array<unsigned char, eastl::allocator>>(uVar8);
            if (uVar8 != 0) {
                lVar4 = param_1->size();
                uVar5 = param_1->GetTextureAtlas();
                if (uVar5 < lVar4 + uVar8) {
                    /* WARNING: Subroutine does not return */
                    LogAssert(
                        "data.GetPos() + compressedLength <= data.GetSize()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                        42, (char*)0);
                }
                pvVar6 = (void*)GetDataPtr();
                lVar4 = param_1->GetDataPtr();
                lVar7 = param_1->size();
                _memcpy(pvVar6, (void*)(lVar4 + lVar7), uVar8);
            }
        } else {
            uVar2 = param_1->g4();
            uVar5 = (ulong)uVar2;
            if (cVar1 == '\x03') {
                uVar3 = param_1->size();
                DecompressLZMA(this, param_1, uVar3, uVar8, uVar5, param_2);
            } else if (cVar1 == '\x02') {
                uVar3 = param_1->size();
                DecompressGZip(this, param_1, uVar3, uVar8, uVar5, param_2);
            } else if (cVar1 == '\x01') {
                uVar3 = param_1->size();
                DecompressBZip2(this, param_1, uVar3, uVar8, uVar5, param_2);
            } else {
                *(undefined4*)param_2 = 1;
                new (this) PacketT<Array<unsigned char, eastl::allocator>>();
            }
        }
        return this;
    }

    // 0x1009ded80, 768 bytes, placed by class name and debug map
    // Js5Compression::DecompressBZip2(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned long, unsigned long, unsigned long, Js5Compression::JS5DecompressionResult&)
    TextureAtlasReference* Js5Compression::DecompressBZip2(PacketT* param_1, ulong param_2, ulong param_3,
                                                           ulong param_4, JS5DecompressionResult* param_5) {
        char* pcVar1;
        char* pcVar2;
        int iVar3;
        long lVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        ulong uVar7;
        undefined4 uVar8;
        bz_stream local_a8;
        undefined8 local_58;
        JS5DecompressionResult* local_40;

        local_40 = param_5;
        new (this) PacketT<Array<unsigned char, eastl::allocator>>(param_4);
        local_a8.bzfree = (_func_1325*)0;
        local_a8.opaque = (void*)0;
        local_a8.state = (void*)0;
        local_a8.bzalloc = (_func_1324*)0;
        local_a8.avail_out = 0;
        local_a8.total_out_lo32 = 0;
        local_a8.total_out_hi32 = 0;
        local_a8._44_4_ = 0;
        local_a8.total_in_hi32 = 0;
        local_a8._20_4_ = 0;
        local_a8.next_out = (char*)0;
        local_a8.next_in = (char*)0;
        local_a8.avail_in = 0;
        local_a8.total_in_lo32 = 0;
        local_58 = 0;
        lVar4 = param_1->GetDataPtr();
        local_a8.next_in = (char*)(lVar4 + param_2);
        local_a8.avail_in = (uint)param_3;
        lVar4 = param_1->GetTextureAtlas();
        if (lVar4 - param_2 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssert("lengthCompressed <= data.GetSize() - offset",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                      92, (char*)0);
        }
        local_a8.next_out = (char*)GetDataPtr();
        local_a8.avail_out = (uint)param_4;
        iVar3 = _BZ2_bzDecompressInit(&local_a8, 0, 0);
        if (iVar3 == 0) {
            local_a8.bzalloc = (_func_1324*)CONCAT44(local_a8.bzalloc._4_4_, 1);
            do {
                iVar3 = _BZ2_bzDecompress(&local_a8);
            } while (iVar3 == 0);
            if (iVar3 != 4) {
                *(undefined4*)local_40 = 1;
                uVar5 = logger::default_logger();
                uVar6 = BzipError(iVar3);
                logger::Logger::Log(
                    uVar5, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 116,
                    "BZ2_bzDecompress error %d (%s)", iVar3, uVar6);
                uVar8 = (undefined4)((ulong)uVar6 >> 32);
                ((TextureAtlasReference*)this)->Clear();
                if (iVar3 == 0) {
                    lVar4 = GetTextureAtlas();
                    pcVar1 = local_a8.next_in;
                    if (lVar4 != 0) {
                        lVar4 = param_1->GetDataPtr();
                        pcVar2 = local_a8.next_out;
                        uVar7 = (long)pcVar1 - (lVar4 + param_2);
                        if (uVar7 == param_3) {
                            lVar4 = ((TextureAtlasReference*)this)->GetDataPtr();
                            if ((long)pcVar2 - lVar4 != param_4) {
                                *(undefined4*)local_40 = 1;
                                ((TextureAtlasReference*)this)->Clear();
                                uVar5 = logger::default_logger();
                                logger::Logger::Log(uVar5, 0, 2,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/js5/Js5Compression.cpp",
                                                    138, "BZ2_bzDecompress gave us %u bytes instead of %u",
                                                    (int)((long)pcVar2 - lVar4), CONCAT44(uVar8, (int)param_4));
                            }
                        } else {
                            *(undefined4*)local_40 = 1;
                            ((TextureAtlasReference*)this)->Clear();
                            uVar5 = logger::default_logger();
                            logger::Logger::Log(uVar5, 0, 2,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "js5/Js5Compression.cpp",
                                                145, "BZ2_bzDecompress took %u bytes from us instead of %u", (int)uVar7,
                                                CONCAT44(uVar8, (uint)param_3));
                        }
                    }
                }
            }
            iVar3 = _BZ2_bzDecompressEnd(&local_a8);
            if (iVar3 != 0) {
                uVar5 = logger::default_logger();
                uVar6 = BzipError(iVar3);
                logger::Logger::Log(
                    uVar5, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 152,
                    "BZ2_bzDecompressEnd error %d (%s)", iVar3, uVar6);
            }
        } else {
            *(undefined4*)local_40 = 1;
            ((TextureAtlasReference*)this)->Clear();
            uVar5 = logger::default_logger();
            uVar6 = BzipError(iVar3);
            logger::Logger::Log(
                uVar5, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 159,
                "BZ2_bzDecompressInit error %d (%s)", iVar3, uVar6);
        }
        return (TextureAtlasReference*)this;
    }

    // 0x1009df080, 992 bytes, placed by class name and debug map
    // Js5Compression::DecompressGZip(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned long, unsigned long, unsigned long, Js5Compression::JS5DecompressionResult&)
    Js5Compression* Js5Compression::DecompressGZip(PacketT* param_1, ulong param_2, ulong param_3, ulong param_4,
                                                   JS5DecompressionResult* param_5) {
        Bytef* pBVar1;
        Bytef* pBVar2;
        int iVar5;
        long lVar6;
        undefined8 uVar7;
        char* pcVar8;
        ulong uVar10;
        undefined8 in_stack_ffffffffffffff10;
        undefined4 uVar11;
        z_stream local_e8;
        VBOMapper local_68;
        ulong local_40;
        JS5DecompressionResult* local_38;

        uVar11 = (undefined4)((ulong)in_stack_ffffffffffffff10 >> 32);
        local_e8.adler = 0;
        local_e8.reserved = 0;
        local_e8.opaque = (voidpf)0;
        local_e8.data_type = 0;
        local_e8._92_4_ = 0;
        local_e8.zalloc = (alloc_func)0;
        local_e8.zfree = (free_func)0;
        local_e8.msg = (char*)0;
        local_e8.state = (internal_state*)0;
        local_e8.avail_out = 0;
        local_e8._36_4_ = 0;
        local_e8.total_out = 0;
        local_e8.total_in = 0;
        local_e8.next_out = (Bytef*)0;
        local_e8.next_in = (Bytef*)0;
        local_e8.avail_in = 0;
        local_e8._12_4_ = 0;
        local_38 = param_5;
        lVar6 = param_1->GetDataPtr();
        if ((*(char*)(lVar6 + 9) != '\x1f') || (*(char*)(lVar6 + 10) != -117)) {
            uVar7 = logger::default_logger();
            logger::Logger::Log(
                uVar7, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 174,
                "Invalid gzip header");
            *(undefined4*)local_38 = 1;
            new (this) PacketT<Array<unsigned char, eastl::allocator>>();
            return this;
        }
        new (&local_68) PacketT<Array<unsigned char, eastl::allocator>>(param_4);
        lVar6 = param_1->GetDataPtr();
        uVar10 = param_3 - 8;
        local_e8.next_in = (Bytef*)(lVar6 + param_2 + 10);
        local_e8.avail_in = (int)param_3 - 18;
        lVar6 = param_1->GetTextureAtlas();
        local_40 = uVar10;
        if (lVar6 - param_2 < uVar10) {
            /* WARNING: Subroutine does not return */
            LogAssert("(size_t)lengthCompressed <= data.GetSize() - offset",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                      185, (char*)0);
        }
        local_e8.next_out = (Bytef*)local_68.GetDataPtr();
        local_e8.avail_out = (uInt)param_4;
        iVar5 = _inflateInit2_(&local_e8, -15, "1.2.11", 112);
        uVar10 = param_2;
        if (iVar5 != 0) {
            uVar7 = logger::default_logger();
            pcVar8 = "(no message)";
            if (local_e8.msg != (char*)0) {
                pcVar8 = local_e8.msg;
            }
            logger::Logger::Log(
                uVar7, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 243,
                "inflateInit error %d: %s", iVar5, pcVar8);
            local_68.Clear();
            *(undefined4*)local_38 = 1;
            goto LAB_1009df3d1;
        }
        iVar5 = _inflate(&local_e8, 4);
        pBVar1 = local_e8.next_in;
        if (iVar5 == 0) {
            uVar7 = logger::default_logger();
            logger::Logger::Log(
                uVar7, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 225,
                "inflate didn\'t finish - truncated input, or output longer than recorded in js5?");
        LAB_1009df365:
            local_68.Clear();
        LAB_1009df36e:
            *(undefined4*)local_38 = 1;
        } else {
            if (iVar5 != 1) {
                uVar7 = logger::default_logger();
                pcVar8 = "(no message)";
                if (local_e8.msg != (char*)0) {
                    pcVar8 = local_e8.msg;
                }
                logger::Logger::Log(
                    uVar7, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 229,
                    "inflate error %d: %s", iVar5, pcVar8);
                goto LAB_1009df365;
            }
            lVar6 = param_1->GetDataPtr();
            pBVar2 = local_e8.next_out;
            uVar10 = (long)pBVar1 - (lVar6 + uVar10);
            if (uVar10 != local_40) {
                uVar7 = logger::default_logger();
                logger::Logger::Log(
                    uVar7, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 216,
                    "inflate took %u bytes from us instead of %u", (int)uVar10, CONCAT44(uVar11, (int)local_40));
                local_68.Clear();
                goto LAB_1009df36e;
            }
            lVar6 = local_68.GetDataPtr();
            if ((long)pBVar2 - lVar6 != param_4) {
                uVar7 = logger::default_logger();
                logger::Logger::Log(
                    uVar7, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 209,
                    "inflate gave us %u bytes instead of %u", (int)((long)pBVar2 - lVar6),
                    CONCAT44(uVar11, (uInt)param_4));
                local_68.Clear();
                goto LAB_1009df36e;
            }
        }
        iVar5 = _inflateEnd(&local_e8);
        if (iVar5 != 0) {
            uVar7 = logger::default_logger();
            pcVar8 = "(no message)";
            if (local_e8.msg != (char*)0) {
                pcVar8 = local_e8.msg;
            }
            logger::Logger::Log(
                uVar7, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 238,
                "inflateEnd error %d: %s", iVar5, pcVar8);
        }
    LAB_1009df3d1:
        new (this) PacketT<Array<unsigned char, eastl::allocator>>((PacketT*)&local_68);
        local_68.~VBOMapper();
        return this;
    }

    // 0x1009df460, 576 bytes, placed by class name and debug map
    // Js5Compression::DecompressLZMA(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned long, unsigned long, unsigned long, Js5Compression::JS5DecompressionResult&)
    Js5Compression* Js5Compression::DecompressLZMA(PacketT* param_1, ulong param_2, ulong param_3, ulong param_4,
                                                   JS5DecompressionResult* param_5) {
        int iVar1;
        long lVar2;
        undefined8 uVar3;
        undefined8 in_stack_ffffffffffffff18;
        undefined4 uVar5;
        ulong local_e0;
        ulong local_d8;
        JS5DecompressionResult* local_d0;
        uchar local_c1[5];
        int local_bc;
        undefined1 local_b8[8];
        undefined8 local_b0;
        undefined8 local_a0;
        long local_38;

        uVar5 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 32);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_d0 = param_5;
        lVar2 = param_1->GetTextureAtlas();
        if (lVar2 - param_2 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssert("(size_t)lengthCompressed <= data.GetSize() - offset",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                      393, (char*)0);
        }
        new (this) PacketT<Array<unsigned char, eastl::allocator>>(param_4);
        local_a0 = 0;
        local_b0 = 0;
        _LzmaDec_Init(local_b8);
        local_bc = 2;
        local_e0 = param_3;
        local_d8 = param_4;
        param_1->gArrayBuffer(local_c1, 0, 5);
        iVar1 = _LzmaDec_Allocate(local_b8, local_c1, 5, &g_Alloc);
        if (iVar1 == 0) {
            uVar3 = GetDataPtr();
            lVar2 = param_1->GetDataPtr();
            iVar1 = _LzmaDec_DecodeToBuf(local_b8, uVar3, &local_d8, lVar2 + param_2 + 5, &local_e0, 0, &local_bc);
            uVar5 = (undefined4)((ulong)&local_bc >> 32);
            _LzmaDec_Free(local_b8, &g_Alloc);
            if (iVar1 == 0) {
                if ((local_bc != 1) && (local_bc != 4)) {
                    uVar3 = logger::default_logger();
                    logger::Logger::Log(
                        uVar3, 0, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp",
                        429, "lzma reached end of stream without finishing");
                }
                goto LAB_1009df619;
            }
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 423,
                "lzma decompression decode failed: %d", CONCAT44(uVar5, iVar1));
            Clear();
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 413,
                "lzma decompression allocate failed: %d", CONCAT44(uVar5, iVar1));
        }
        *(undefined4*)local_d0 = 1;
    LAB_1009df619:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x1009df760, 1040 bytes, placed by class name and debug map
    // Js5Compression::DecodePNG(PacketT<Array<unsigned char, eastl::allocator> >&)
    void Js5Compression::DecodePNG(PacketT* param_1) {
        bool bVar1;
        byte bVar2;
        byte bVar3;
        char cVar4;
        uint uVar5;
        int iVar6;
        int iVar7;
        uint uVar8;
        long lVar9;
        long lVar10;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this;
        ulong uVar11;
        uchar* puVar12;
        PacketView local_108;
        PacketT* local_e0;
        TextureAtlasReference local_d8;
        uchar* local_a8;
        uint local_9c;
        uint local_98;
        byte local_92;
        byte local_91;
        RGBAImage local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_e0 = param_1;
        PacketView::PacketView<Array<unsigned char, eastl::allocator>>(&local_108, param_1);
        bVar2 = local_108.g1();
        new (&local_d8) PacketT<Array<unsigned char, eastl::allocator>>();
        if (bVar2 != 0) {
            local_d8._32_8_ = ZEXT18(bVar2);
            bVar2 = 1;
            local_a8 = (uchar*)0;
            local_9c = 0;
            local_98 = 0;
            do {
                bVar3 = local_108.g1();
                if (local_98 == 0) {
                    local_9c = (uint)bVar3;
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
                        new (&local_90) RGBAImage();
                        cVar4 = PNGDecoder::LoadFromPacket(&local_90, &local_108);
                        if (cVar4 == '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssertAlways(
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                "Js5Compression.cpp",
                                463, "Failed to entirely load mipped PNG image, PNG decode failed at mip level %d/%d.",
                                (ulong)(local_d8.m_textureAtlasID + 1), (ulong)(uint)bVar3);
                        }
                        lVar10 = local_108.data();
                        if (lVar10 != lVar9 + (ulong)uVar5) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("sourceData.GetPos() == (mipDecodeStartPos + pngByteLength)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                      "Js5Compression.cpp",
                                      467, (char*)0);
                        }
                        iVar6 = local_90.GetX();
                        iVar7 = local_90.GetZ();
                        if (local_d8.m_textureAtlasID != 0) {
                            puVar12 = (uchar*)0;
                        } else {
                            puVar12 = (uchar*)0;
                            if (local_92 != 0) {
                                uVar11 = 0;
                                puVar12 = (uchar*)0;
                                do {
                                    puVar12 =
                                        (uchar*)((long)puVar12 +
                                                 (ulong)(uint)((int)((ulong)(long)iVar6 >> ((byte)uVar11 & 63)) *
                                                               (int)((ulong)(long)iVar7 >> ((byte)uVar11 & 63)) * 4));
                                    uVar11 = uVar11 + 1;
                                } while (bVar3 != uVar11);
                            }
                        }
                        uVar5 = (uint)bVar3;
                        if (local_98 == 0 && local_d8.m_textureAtlasID == 0) {
                            local_d8.Reserve((long)puVar12 * local_d8._32_8_ + 9);
                            PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                (PacketT<Array<unsigned char, eastl::allocator>>*)&local_d8, (ulong)uVar5);
                            PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                                (PacketT<Array<unsigned char, eastl::allocator>>*)&local_d8, iVar6);
                            PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                                (PacketT<Array<unsigned char, eastl::allocator>>*)&local_d8, iVar7);
                        LAB_1009df9cc:
                            lVar9 = local_d8.GetTextureAtlas();
                            bVar1 = true;
                            if (lVar9 == 0) {
                                local_a8 = puVar12;
                                bVar2 = local_91;
                            } else {
                                this = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                                              eastl::allocator>*)local_90.GetDevCredentialsOutputDirectory();
                                local_a8 = (uchar*)data();
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
                                if (local_9c == uVar5)
                                    goto LAB_1009df9cc;
                            } else {
                                bVar2 = 0;
                            }
                        }
                        local_90.~RGBAImage();
                    } while (((bVar1) && (uVar8 = local_d8.m_textureAtlasID + 1, local_d8._40_8_ = ZEXT48(uVar8),
                                          uVar8 < uVar5)) &&
                             ((bVar2 & 1) != 0));
                }
                local_98 = local_98 + 1;
            } while ((local_98 < (uint)local_d8._32_4_) && ((bVar2 & 1) != 0));
        }
        PacketT<Array<unsigned char, eastl::allocator>>::operator=(
            (PacketT<Array<unsigned char, eastl::allocator>>*)local_e0, (PacketT*)&local_d8);
        local_d8.~VBOMapper();
        local_108.~PacketView();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag

// 0x1009df6a0, 32 bytes, placed by neighbouring functions
// BzipError(int)
undefined* BzipError(int param_1) {
    if ((uint)param_1 < 4294967287) {
        return (undefined*)0;
    }
    return (&PTR_s_Config_error_100f1d040)[param_1 + 9];
}

// 0x1009f6a00, 64 bytes, placed by __FILE__ string
// SzMarkPermanentBufferUsed(unsigned char*, unsigned long, bool)
uint SzMarkPermanentBufferUsed(uchar* param_1, ulong param_2, bool param_3) {
    uint unaff_EBX;

    if ((param_1[param_2] != '\x01') != param_3) {
        /* WARNING: Subroutine does not return */
        jag::LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5Compression.cpp", 314,
            (char*)0);
    }
    param_1[param_2] = param_3;
    return unaff_EBX & 4294967040 ^ 1;
}
