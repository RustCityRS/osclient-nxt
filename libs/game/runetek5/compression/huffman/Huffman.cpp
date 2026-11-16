// libs/game/runetek5/compression/huffman/Huffman.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "Huffman.h"

namespace jag::game {
    // 0x1005f8990, 160 bytes, base-object constructor, placed by class name and debug map
    // Huffman::Huffman(PacketT<Array<unsigned char, eastl::allocator> >&)
    void Huffman::Huffman(PacketT* param_1) {
        field_0 = (Js5ResourceProvider*)0;
        field_8 = (Js5ArchiveSettings*)0;
        new (&field_16) eastl::string();
        new (&field_48) eastl::vector<int, eastl::allocator>();
        new (&field_80) eastl::vector<unsigned int, eastl::allocator>();
        new (&field_112) eastl::vector<int, eastl::allocator>();
        ReadyInit(this, param_1);
    }

    // 0x1005f8a30, 1152 bytes, placed by class name and debug map
    // Huffman::ReadyInit(PacketT<Array<unsigned char, eastl::allocator> >&)
    void Huffman::ReadyInit(PacketT* param_1) {
        undefined1* this_00;
        uint uVar1;
        undefined4 uVar2;
        byte bVar3;
        int iVar4;
        int iVar5;
        uint* puVar6;
        undefined4* puVar7;
        int* piVar8;
        long lVar9;
        uint uVar10;
        uint uVar11;
        ulong uVar12;
        ulong uVar13;
        undefined1* this_01;
        uint uVar14;
        ulong uVar15;
        uint uVar16;
        ulong local_118;
        uint local_f4;
        uint local_f0;
        uint local_ec;
        vector<unsigned int, eastl::fixed_vector_allocator<4ul, 33ul, 4ul, 0ul, true, eastl::allocator>> local_e8[176];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar4 = param_1->GetTextureAtlas();
        iVar5 = param_1->size();
        uVar10 = iVar4 - iVar5;
        this_00 = &field_80;
        eastl::vector<unsigned int, eastl::allocator>::resize((ulong)this_00);
        if (uVar10 != 0) {
            uVar12 = 0;
            do {
                bVar3 = param_1->g1();
                puVar6 = (uint*)eastl::vector<unsigned int, eastl::allocator>::operator[](
                    (vector<unsigned int, eastl::allocator>*)this_00, uVar12);
                *puVar6 = (uint)bVar3;
                uVar12 = uVar12 + 1;
            } while (uVar10 != uVar12);
        }
        eastl::vector<int, eastl::allocator>::resize((ulong)&field_48);
        this_01 = &field_112;
        eastl::vector<int, eastl::allocator>::resize((ulong)this_01);
        puVar7 =
            (undefined4*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_01, 0);
        *puVar7 = 0;
        eastl::fixed_vector<unsigned int, 33ul, true, eastl::allocator>::fixed_vector((ulong)local_e8);
        local_f4 = 0;
        eastl::vector<unsigned int, eastl::fixed_vector_allocator<4ul, 33ul, 4ul, 0ul, true, eastl::allocator>>::assign(
            local_e8, &local_f4);
        if (uVar10 != 0) {
            uVar12 = 0;
            local_ec = 0;
            do {
                puVar6 = (uint*)eastl::vector<unsigned int, eastl::allocator>::operator[](
                    (vector<unsigned int, eastl::allocator>*)this_00, uVar12);
                uVar16 = *puVar6;
                uVar13 = (ulong)uVar16;
                if (uVar13 != 0) {
                    puVar6 = (uint*)eastl::vector<unsigned int,
                                                  eastl::fixed_vector_allocator<4ul, 33ul, 4ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](local_e8,
                                                                                                               uVar13);
                    uVar1 = *puVar6;
                    puVar6 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)&field_48, uVar12);
                    *puVar6 = uVar1;
                    if ((uVar1 >> ((byte)(32 - (char)uVar16) & 31) & 1) == 0) {
                        local_f0 = 1 << (-(char)uVar16 & 31U) | uVar1;
                        if (uVar16 - 1 != 0) {
                            uVar15 = (ulong)(uVar16 - 1);
                            local_118 = (ulong)(uVar16 - 2);
                            uVar14 = 33 - uVar16;
                            do {
                                puVar6 = (uint*)eastl::vector<
                                    unsigned int, eastl::fixed_vector_allocator<4ul, 33ul, 4ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](local_e8,
                                                                                                               uVar15);
                                uVar11 = *puVar6;
                                if (uVar11 != uVar1)
                                    break;
                                if ((uVar11 >> (uVar14 & 31) & 1) != 0) {
                                    puVar7 = (undefined4*)eastl::vector<
                                        unsigned int,
                                        eastl::fixed_vector_allocator<4ul, 33ul, 4ul, 0ul, true, eastl::allocator>>::
                                    operator[](local_e8, local_118);
                                    uVar2 = *puVar7;
                                    puVar7 = (undefined4*)eastl::vector<
                                        unsigned int,
                                        eastl::fixed_vector_allocator<4ul, 33ul, 4ul, 0ul, true,
                                                                      eastl::allocator>>::operator[](local_e8, uVar15);
                                    *puVar7 = uVar2;
                                    break;
                                }
                                puVar6 = (uint*)eastl::vector<
                                    unsigned int, eastl::fixed_vector_allocator<4ul, 33ul, 4ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](local_e8,
                                                                                                               uVar15);
                                *puVar6 = uVar11 | 1 << ((byte)uVar14 & 31);
                                uVar15 = uVar15 - 1;
                                local_118 = local_118 - 1;
                                uVar14 = uVar14 + 1;
                            } while ((int)uVar15 != 0);
                        }
                    } else {
                        puVar6 = (uint*)eastl::vector<
                            unsigned int, eastl::fixed_vector_allocator<4ul, 33ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](local_e8, (ulong)(uVar16 - 1));
                        local_f0 = *puVar6;
                    }
                    puVar6 = (uint*)eastl::vector<unsigned int,
                                                  eastl::fixed_vector_allocator<4ul, 33ul, 4ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](local_e8,
                                                                                                               uVar13);
                    *puVar6 = local_f0;
                    if (uVar16 + 1 < 33) {
                        uVar13 = (ulong)(uVar16 + 1);
                        iVar4 = uVar16 - 32;
                        do {
                            puVar6 = (uint*)eastl::vector<
                                unsigned int, eastl::fixed_vector_allocator<4ul, 33ul, 4ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](local_e8,
                                                                                                           uVar13);
                            if (*puVar6 == uVar1) {
                                puVar6 = (uint*)eastl::vector<
                                    unsigned int, eastl::fixed_vector_allocator<4ul, 33ul, 4ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](local_e8,
                                                                                                               uVar13);
                                *puVar6 = local_f0;
                            }
                            uVar13 = uVar13 + 1;
                            iVar4 = iVar4 + 1;
                        } while (iVar4 != 0);
                    }
                    if (uVar16 < 2) {
                        uVar16 = 1;
                    }
                    uVar14 = 0;
                    uVar11 = 2147483648;
                    do {
                        if ((uVar1 & uVar11) == 0) {
                            uVar14 = uVar14 + 1;
                        } else {
                            uVar13 = (ulong)uVar14;
                            piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)this_01, uVar13);
                            if (*piVar8 == 0) {
                                puVar6 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)this_01, uVar13);
                                *puVar6 = local_ec;
                            }
                            puVar6 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)this_01, uVar13);
                            uVar14 = *puVar6;
                        }
                        uVar11 = uVar11 >> 1;
                        uVar16 = uVar16 - 1;
                    } while (uVar16 != 0);
                    uVar15 = (ulong)uVar14;
                    uVar13 = this_01->capacity();
                    if (uVar13 <= uVar15) {
                        lVar9 = this_01->size();
                        this_01->set_capacity(lVar9 * 2);
                    }
                    uVar13 = this_01->size();
                    while (uVar13 <= uVar15) {
                        local_f4 = 0;
                        this_01->push_back((int*)&local_f4);
                        uVar13 = this_01->size();
                    }
                    puVar6 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)this_01, uVar15);
                    *puVar6 = ~(uint)uVar12;
                    if (local_ec <= uVar14) {
                        local_ec = uVar14 + 1;
                    }
                }
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar10);
        }
        local_e8->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1005f8eb0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Huffman::Huffman(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x1005f8ec0, 304 bytes, placed by class name and debug map
    // Huffman::Ready()
    ulong Huffman::Ready() {
        char cVar1;
        undefined* puVar2;
        DataStatus* pDVar3;
        undefined8 uVar4;
        PacketT* pPVar5;
        undefined8 unaff_R14;
        ulong uVar7;
        Js5Index* local_40;
        shared_ptr local_38;
        uint local_24;

        cVar1 = (&field_48)->empty();
        uVar7 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (cVar1 != '\0') {
            puVar2 = (undefined*)(*(code*)field_0->field_0[3])(field_0, &local_40, field_8);
            if (puVar2 == DataStatus::READY) {
                pDVar3 = Js5Index::GetGroupID<eastl::string>(local_40, (uint*)(_func_decltype_nullptr*)&local_24,
                                                             (basic_string*)&field_16);
                if (pDVar3 == (DataStatus*)DataStatus::READY) {
                    new (&local_38) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(
                        (_func_decltype_nullptr*)&local_24);
                    puVar2 = (undefined*)(field_0, &local_38, field_8, local_24, 0, (Priority*)Priority::HIGH, true,
                                          false, false)
                                 ->GetFile();
                    if (puVar2 == DataStatus::MISSING) {
                        uVar4 = logger::default_logger();
                        uVar7 = 0;
                        logger::Logger::Log(uVar4, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/compression/huffman/Huffman.cpp",
                                            41, "Huffman: huffman binary file does not exist in JS5!");
                    } else if (puVar2 == DataStatus::READY) {
                        pPVar5 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_38);
                        uVar7 = CONCAT71((int7)((ulong)&local_38 >> 8), 1);
                        ReadyInit(this, pPVar5);
                    } else {
                        uVar7 = 0;
                    }
                    local_38.~shared_ptr();
                    goto LAB_1005f8f16;
                }
            }
            uVar7 = 0;
        }
    LAB_1005f8f16:
        return uVar7 & 4294967295;
    }

    // 0x1005f90a0, 112 bytes, placed by class name and debug map
    // Huffman::CalculateEncodedLength(eastl::basic_string<char, BucketAllocatorEASTL> const&, unsigned int, unsigned int)
    uint Huffman::CalculateEncodedLength(basic_string* param_1, uint param_2, uint param_3) {
        char* pcVar1;
        int* piVar2;
        ulong uVar3;
        int iVar4;
        uint uVar5;

        uVar5 = 0;
        if (param_2 < param_3 + param_2) {
            uVar3 = (ulong)param_2;
            iVar4 = 0;
            do {
                pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::operator[](
                    (basic_string<char, BucketAllocatorEASTL>*)param_1, uVar3);
                piVar2 = (int*)eastl::vector<unsigned int, eastl::allocator>::operator[](
                    (vector<unsigned int, eastl::allocator>*)&field_80, (long)*pcVar1);
                iVar4 = iVar4 + *piVar2;
                uVar3 = uVar3 + 1;
            } while (param_3 + param_2 != uVar3);
            uVar5 = iVar4 + 7U >> 3;
        }
        return uVar5;
    }

    // 0x1005f9160, 448 bytes, placed by class name and debug map
    // Huffman::Encode(eastl::basic_string<char, BucketAllocatorEASTL> const&, unsigned int, unsigned int, unsigned char*, unsigned long, unsigned int)
    int Huffman::Encode(basic_string* param_1, uint param_2, uint param_3, uchar* param_4, ulong param_5,
                        uint param_6) {
        byte bVar1;
        sbyte sVar2;
        vector<unsigned int, eastl::allocator>* this_00;
        uint uVar3;
        ulong uVar4;
        byte* pbVar5;
        uint* puVar6;
        undefined1* puVar7;
        ulong uVar8;
        int iVar9;
        uint uVar10;
        uint uVar11;
        uint uVar12;
        int iVar13;
        WrapArray<unsigned char> local_80[16];
        ulong local_70;
        ulong local_68;
        vector<unsigned int, eastl::allocator>* local_58;
        vector<int, eastl::allocator>* local_50;
        ulong local_48;
        ulong local_40;
        uint local_34;

        WrapArray<unsigned char>::WrapArray(local_80, param_4, param_5);
        uVar3 = param_6 * 8;
        iVar13 = 0;
        if (param_2 < param_3 + param_2) {
            local_50 = (vector<int, eastl::allocator>*)&field_48;
            local_58 = (vector<unsigned int, eastl::allocator>*)&field_80;
            local_68 = (ulong)param_2;
            local_48 = (ulong)(param_3 + param_2);
            uVar10 = 0;
            uVar4 = (ulong)uVar3;
            uVar8 = 0;
            do {
                this_00 = local_58;
                uVar11 = (int)uVar8 + (int)uVar4;
                pbVar5 = (byte*)eastl::basic_string<char, BucketAllocatorEASTL>::operator[](
                    (basic_string<char, BucketAllocatorEASTL>*)param_1, local_68);
                bVar1 = *pbVar5;
                puVar6 = (uint*)eastl::vector<int, eastl::allocator>::operator[](local_50, (ulong)bVar1);
                uVar3 = *puVar6;
                puVar6 = (uint*)eastl::vector<unsigned int, eastl::allocator>::operator[](this_00, (ulong)bVar1);
                iVar13 = (int)uVar11 >> 3;
                uVar12 = uVar11 & 7;
                if (uVar12 == 0) {
                    uVar10 = 0;
                }
                sVar2 = (sbyte)uVar12;
                local_70 = (ulong)*puVar6;
                iVar9 = *puVar6 + uVar12;
                uVar10 = uVar10 | uVar3 >> sVar2 + 24;
                local_40 = (ulong)uVar11;
                local_34 = uVar3;
                puVar7 = (undefined1*)WrapArray<unsigned char>::operator[](local_80, (long)iVar13);
                *puVar7 = (char)uVar10;
                if (8 < iVar9) {
                    uVar10 = local_34 >> sVar2 + 16;
                    puVar7 = (undefined1*)WrapArray<unsigned char>::operator[](local_80, (long)(iVar13 + 1));
                    *puVar7 = (char)uVar10;
                    if (16 < iVar9) {
                        uVar10 = local_34 >> sVar2 + 8;
                        puVar7 = (undefined1*)WrapArray<unsigned char>::operator[](local_80, (long)(iVar13 + 2));
                        *puVar7 = (char)uVar10;
                        if (24 < iVar9) {
                            uVar10 = local_34 >> sVar2;
                            puVar7 = (undefined1*)WrapArray<unsigned char>::operator[](local_80, (long)(iVar13 + 3));
                            *puVar7 = (char)uVar10;
                            if (32 < iVar9) {
                                uVar10 = local_34 << (-((byte)local_40 | 248) & 31);
                                puVar7 =
                                    (undefined1*)WrapArray<unsigned char>::operator[](local_80, (long)(iVar13 + 4));
                                *puVar7 = (char)uVar10;
                            }
                        }
                    }
                }
                local_68 = local_68 + 1;
                uVar3 = (uint)local_40;
                iVar13 = (int)local_70;
                uVar4 = local_40;
                uVar8 = local_70;
            } while (local_48 != local_68);
        }
        return ((int)(uVar3 + iVar13 + 7) >> 3) - param_6;
    }

    // 0x1005f9390, 352 bytes, placed by class name and debug map
    // Huffman::Decode(Array<unsigned char, eastl::allocator> const&, unsigned int, eastl::basic_string<char, BucketAllocatorEASTL>&, unsigned int, unsigned int)
    int Huffman::Decode(Array* param_1, uint param_2, basic_string* param_3, uint param_4, uint param_5) {
        byte bVar1;
        uint uVar2;
        uint uVar3;
        int iVar4;
        undefined8 uVar6;
        byte* pbVar7;
        uint* puVar8;
        int* piVar9;
        uint uVar10;
        uint uVar11;
        uint uVar12;

        if (param_5 == 0) {
            iVar4 = 0;
        } else {
            uVar12 = param_5 + param_4;
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
                param_4) {
                uVar6 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                /* WARNING: Subroutine does not return */
                LogAssert("uoff == udata.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "compression/huffman/Huffman.cpp",
                          251, "Target string size(%d) must == uoff(%d)", uVar6, (ulong)param_4);
            }
            param_3->set_capacity((ulong)(uVar12 + 1));
            uVar11 = 0;
            uVar2 = param_2;
            do {
                pbVar7 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)param_1, (ulong)uVar2);
                bVar1 = *pbVar7;
                uVar10 = 128;
                iVar4 = 8;
                do {
                    if ((bVar1 & uVar10) == 0) {
                        uVar3 = uVar11 + 1;
                    } else {
                        puVar8 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                            (vector<int, eastl::allocator>*)&field_112, (ulong)uVar11);
                        uVar3 = *puVar8;
                    }
                    piVar9 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)&field_112, (ulong)uVar3);
                    if (*piVar9 < 0) {
                        param_3->push_back(~(byte)*piVar9);
                        param_4 = param_4 + 1;
                        uVar11 = 0;
                        if (uVar12 <= param_4)
                            break;
                    } else {
                        uVar11 = uVar3;
                    }
                    uVar10 = uVar10 >> 1;
                    iVar4 = iVar4 + -1;
                    uVar3 = uVar11;
                } while (iVar4 != 0);
                uVar11 = uVar3;
                uVar2 = uVar2 + 1;
            } while (param_4 < uVar12);
            iVar4 = uVar2 - param_2;
        }
        return iVar4;
    }

} // namespace jag::game
