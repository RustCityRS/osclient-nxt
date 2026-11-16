// libs/oldscape/jagex3/dash3d/Texture.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "Texture.h"

namespace jag::oldscape::dash3d {
    // 0x1016c6100, 16 bytes, __common; set at startup by ___cxx_global_var_init.75
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> Texture::m_tempData;

    // 0x1003028f0, 656 bytes, base-object constructor, placed by class name
    // Texture::Texture(PacketJ<Array<unsigned char, eastl::allocator> >&, ErrorCapture&)
    void Texture::Texture(PacketJ* param_1, ErrorCapture* param_2) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        char cVar1;
        byte bVar2;
        ushort uVar3;
        uint uVar4;
        undefined4 uVar5;
        uint* puVar6;
        undefined4* puVar7;
        ulong uVar8;
        ulong uVar9;
        ulong uVar10;

        new (this) Linkable<Texture>();
        field_0 = PTR_vtable_100ee89e0 + 16;
        field_32 = &__mh_execute_header;
        field_40 = 12884901890;
        this_00 = &field_56;
        new (this_00) Array<int, eastl::allocator>();
        this_01 = &field_80;
        new (this_01) Array<int, eastl::allocator>();
        this_02 = &field_104;
        new (this_02) Array<int, eastl::allocator>();
        this_03 = &field_128;
        new (this_03) Array<unsigned int, eastl::allocator>();
        field_160 = 0;
        field_164 = 0;
        new (field_168, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_184 = 0;
        uVar3 = param_1->g2();
        field_48 = (uint)uVar3;
        cVar1 = param_1->g1();
        field_52 = cVar1 == '\x01';
        bVar2 = param_1->g1();
        uVar10 = (ulong)bVar2;
        if ((byte)(bVar2 - 1) < 4) {
            this_00->set_max_size(uVar10, 5);
            if (bVar2 != 0) {
                uVar8 = 0;
                do {
                    uVar4 = param_1->g2();
                    puVar6 =
                        (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar8);
                    *puVar6 = uVar4 & 65535;
                    uVar8 = uVar8 + 1;
                } while (uVar10 != uVar8);
            }
            if (1 < bVar2) {
                uVar9 = (ulong)(bVar2 - 1);
                this_01->set_max_size(uVar9, 5);
                uVar8 = 0;
                do {
                    uVar4 = param_1->g1();
                    puVar6 =
                        (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar8);
                    *puVar6 = uVar4 & 255;
                    uVar8 = uVar8 + 1;
                } while (uVar9 != uVar8);
                this_02->set_max_size(uVar9, 5);
                uVar8 = 0;
                do {
                    uVar4 = param_1->g1();
                    puVar6 =
                        (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02, uVar8);
                    *puVar6 = uVar4 & 255;
                    uVar8 = uVar8 + 1;
                } while (uVar9 != uVar8);
            }
            this_03->set_max_size(uVar10, 5);
            if (bVar2 != 0) {
                uVar8 = 0;
                do {
                    uVar5 = param_1->g4();
                    puVar7 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                        (Array<unsigned int, eastl::allocator>*)this_03, uVar8);
                    *puVar7 = uVar5;
                    uVar8 = uVar8 + 1;
                } while (uVar10 != uVar8);
            }
            bVar2 = param_1->g1();
            field_152 = (uint)bVar2;
            bVar2 = param_1->g1();
            field_156 = (uint)bVar2;
        } else {
            param_2->Raise("Invalid number of texture layers: %i", (ulong)(uint)bVar2);
        }
    }

    // 0x100302bd0, 16 bytes, complete-object constructor, placed by class name
    // Texture::Texture(PacketJ<Array<unsigned char, eastl::allocator> >&, ErrorCapture&): jumps straight to the base-object constructor

    // 0x100302be0, 1440 bytes, placed by class name
    // Texture::Construct(double, int, jagex3::Js5&, ErrorCapture&)
    ulong Texture::Construct(double param_1, int param_2, Js5* param_3, ErrorCapture* param_4) {
        Layout* this_00;
        uint uVar1;
        int iVar2;
        bool bVar3;
        undefined4 uVar4;
        long lVar5;
        int* piVar6;
        ulong uVar7;
        Array<unsigned int, eastl::allocator>* pAVar8;
        ulong uVar9;
        Pix8* this_01;
        Array<unsigned char, eastl::allocator>* pAVar10;
        uint* puVar11;
        undefined4* puVar12;
        mach_header** ppmVar13;
        byte* pbVar14;
        ulong uVar15;
        uint uVar16;
        undefined7 uVar18;
        long lVar17;
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var19;
        vector<EntityHighlight*, BucketAllocatorEASTL>* pvVar20;
        shared_ptr local_c8;
        long local_b0;
        ulong local_a8;
        Array<unsigned int, eastl::allocator>* local_a0;
        Array<int, eastl::allocator>* local_98;
        mach_header** local_90;
        uint local_7c;
        shared_ptr<Array<unsigned int, eastl::allocator>>* local_78;
        Array<unsigned char, eastl::allocator>* local_70;
        vector<EntityHighlight*, BucketAllocatorEASTL>* local_68;
        Texture* local_60;
        pixloader local_58;
        undefined8 local_40;

        p_Var19 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_2);
        pvVar20 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)&field_56;
        local_60 = this;
        lVar5 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar20);
        if (lVar5 - 1U < 4) {
            new (&local_c8) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var19);
            lVar5 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar20);
            local_68 = pvVar20;
            if (lVar5 != 0) {
                uVar7 = 0;
                uVar15 = 1;
                do {
                    piVar6 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pvVar20, uVar7);
                    param_3->PeekFile(&local_c8, *piVar6);
                    bVar3 = operator==(&local_c8, (_func_decltype_nullptr*)0);
                    pvVar20 = local_68;
                    if (bVar3) {
                        uVar7 = 0;
                        goto LAB_10030310d;
                    }
                    uVar7 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(local_68);
                    bVar3 = uVar15 < uVar7;
                    uVar7 = uVar15;
                    uVar15 = (ulong)((int)uVar15 + 1);
                } while (bVar3);
            }
            pAVar8 = operator_new(24);
            local_7c = param_2 * param_2;
            local_a8 = (ulong)local_7c;
            Array<unsigned int, eastl::allocator>::Array(pAVar8, local_a8);
            local_78 = (shared_ptr<Array<unsigned int, eastl::allocator>>*)local_60->field_168;
            shared_ptr<Array<unsigned int, eastl::allocator>>::reset<Array<unsigned int, eastl::allocator>, void>(
                local_78, (Array*)pAVar8);
            pvVar20 = local_68;
            lVar5 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(local_68);
            uVar18 = (undefined7)((ulong)pAVar8 >> 8);
            uVar7 = CONCAT71(uVar18, lVar5 != 0);
            if (lVar5 != 0) {
                local_a0 = (Array<unsigned int, eastl::allocator>*)&local_60->field_128;
                local_98 = (Array<int, eastl::allocator>*)&local_60->field_80;
                local_90 = &local_60->field_32;
                uVar15 = 0;
                uVar7 = CONCAT71(uVar18, 1);
                do {
                    local_58.field_8 = uVar15;
                    piVar6 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pvVar20, uVar15);
                    local_58.Makepix8(param_3, *piVar6);
                    this_01 = (Pix8*)std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                        (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&local_58);
                    this_01->Untrim();
                    local_58.field_16 = CONCAT44(local_58.field_16._4_4_, (int)uVar7);
                    pAVar10 = (Array<unsigned char, eastl::allocator>*)
                                  std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                                      (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&local_58);
                    puVar11 = (uint*)Array<unsigned int, eastl::allocator>::operator[](local_a0, local_58.field_8);
                    this_00 = (Layout*)(pAVar10 + 24);
                    uVar16 = *puVar11;
                    local_70 = pAVar10;
                    if (((uVar16 & 4278190080) == 50331648) &&
                        (lVar5 = eastl::basic_string<
                             char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                 eastl::allocator>>::Layout::HeapBeginPtr(this_00),
                         lVar5 != 0)) {
                        local_40 = CONCAT44(local_40._4_4_, uVar16) & 18446744069431296255;
                        uVar7 = 0;
                        uVar15 = 1;
                        do {
                            puVar11 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00,
                                                                                   uVar7);
                            uVar1 = *puVar11;
                            if ((uVar1 != 0) && ((short)(uVar1 >> 8) == (short)uVar1)) {
                                piVar6 = (int*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)this_00, uVar7);
                                *piVar6 = ((uVar1 & 255) * (int)local_40 >> 8 & 16711935) +
                                          ((uVar1 & 255) * (uVar16 >> 8 & 255) & 65280) + -16777216;
                            }
                            uVar7 = eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
                            bVar3 = uVar15 < uVar7;
                            uVar7 = uVar15;
                            uVar15 = (ulong)((int)uVar15 + 1);
                        } while (bVar3);
                    }
                    lVar5 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(this_00);
                    if (lVar5 != 0) {
                        uVar7 = 0;
                        uVar15 = 1;
                        do {
                            puVar11 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00,
                                                                                   uVar7);
                            uVar4 = jag::math::RunetekColour::GammaCorrectOSRS(*puVar11, param_1);
                            puVar12 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)this_00, uVar7);
                            *puVar12 = uVar4;
                            uVar7 = eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
                            bVar3 = uVar15 < uVar7;
                            uVar7 = uVar15;
                            uVar15 = (ulong)((int)uVar15 + 1);
                        } while (bVar3);
                    }
                    ppmVar13 = local_90;
                    if ((int)local_58.field_8 != 0) {
                        ppmVar13 = (mach_header**)Array<int, eastl::allocator>::operator[](
                            local_98, (ulong)((int)local_58.field_8 - 1));
                    }
                    pAVar10 = local_70;
                    if (*(int*)ppmVar13 == *(int*)local_90) {
                        lVar5 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                            (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&local_58);
                        iVar2 = *(int*)(lVar5 + 48);
                        if (iVar2 == param_2) {
                            if (local_7c != 0) {
                                uVar7 = 0;
                                do {
                                    pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](pAVar10, uVar7);
                                    puVar12 = (undefined4*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)this_00, (ulong)*pbVar14);
                                    uVar4 = *puVar12;
                                    pAVar8 = (Array<unsigned int, eastl::allocator>*)
                                        shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(local_78);
                                    puVar12 =
                                        (undefined4*)Array<unsigned int, eastl::allocator>::operator[](pAVar8, uVar7);
                                    *puVar12 = uVar4;
                                    uVar7 = uVar7 + 1;
                                } while (local_a8 != uVar7);
                            }
                        } else if ((iVar2 == 64) && (param_2 == 128)) {
                            uVar7 = 0;
                            uVar15 = 0;
                            do {
                                uVar9 = 0;
                                local_58.field_16 = uVar15;
                                local_40 = uVar7;
                                do {
                                    pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                        pAVar10, (long)(int)(((uint)(uVar9 >> 1) & 2147483647) +
                                                             ((uint)uVar7 & 134217726) * 32));
                                    puVar12 = (undefined4*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)this_00, (ulong)*pbVar14);
                                    uVar4 = *puVar12;
                                    pAVar8 = (Array<unsigned int, eastl::allocator>*)
                                        shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(local_78);
                                    puVar12 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                                        pAVar8, (long)(int)uVar15 + uVar9);
                                    *puVar12 = uVar4;
                                    uVar9 = uVar9 + 1;
                                    pAVar10 = local_70;
                                } while ((int)uVar9 != 128);
                                uVar16 = (int)local_40 + 1;
                                uVar7 = (ulong)uVar16;
                                uVar15 = (long)(int)local_58.field_16 + uVar9;
                            } while (uVar16 != 128);
                        } else {
                            if ((iVar2 != 128) || (param_2 != 64)) {
                                /* WARNING: Subroutine does not return */
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
                                local_58.field_16 = uVar7;
                                do {
                                    pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](pAVar10, uVar7);
                                    puVar12 = (undefined4*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)this_00, (ulong)*pbVar14);
                                    uVar4 = *puVar12;
                                    pAVar8 = (Array<unsigned int, eastl::allocator>*)
                                        shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(local_78);
                                    puVar12 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                                        pAVar8, (int)lVar5 + lVar17);
                                    *puVar12 = uVar4;
                                    lVar17 = lVar17 + 1;
                                    uVar7 = uVar7 + 2;
                                    pAVar10 = local_70;
                                } while (lVar17 != 64);
                                local_40 = local_40 + 1;
                                lVar5 = (long)(int)local_b0 + 64;
                                uVar7 = local_58.field_16 + 256;
                            } while (local_40 != 64);
                            local_40 = 64;
                        }
                    }
                    local_58.~unique_ptr();
                    pvVar20 = local_68;
                    uVar16 = (int)local_58.field_8 + 1;
                    uVar15 = (ulong)uVar16;
                    uVar9 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(local_68);
                    uVar7 = (ulong)CONCAT31((int3)(uVar16 >> 8), uVar15 < uVar9);
                } while (uVar15 < uVar9);
            }
            uVar7 = uVar7 ^ 1;
        LAB_10030310d:
            local_c8.~shared_ptr();
        } else {
            uVar7 = 0;
            param_4->Raise("Invalid Texture: not able to Construct()");
        }
        return uVar7 & 4294967041;
    }

    // 0x100303370, 784 bytes, placed by class name
    // Texture::RunAnim(int)
    void Texture::RunAnim(int param_1) {
        undefined1* puVar1;
        undefined4 uVar2;
        uint uVar3;
        bool bVar4;
        vector<EntityHighlight*, BucketAllocatorEASTL>* pvVar5;
        ulong uVar6;
        ulong uVar7;
        Array<unsigned int, eastl::allocator>* pAVar8;
        undefined4* puVar9;
        int iVar10;
        long lVar11;
        int iVar12;

        if ((field_152 | 2) == 3) {
            iVar10 = field_156 * param_1;
            iVar12 = -iVar10;
            if (field_152 != 1) {
                iVar12 = iVar10;
            }
            field_164 = field_164 + iVar12 & 127;
            if (field_184 != '\0') {
                puVar1 = field_168;
                bVar4 = operator!=((shared_ptr*)puVar1, (_func_decltype_nullptr*)0);
                if (bVar4) {
                    bVar4 = operator==((shared_ptr*)&m_tempData, (_func_decltype_nullptr*)0);
                    if (bVar4) {
                    LAB_100303430:
                        pAVar8 = operator_new(24);
                        pvVar5 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                                     shared_ptr<Array<unsigned int, eastl::allocator>>::operator->(
                                         (shared_ptr<Array<unsigned int, eastl::allocator>>*)puVar1);
                        uVar6 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar5);
                        Array<unsigned int, eastl::allocator>::Array(pAVar8, uVar6);
                        shared_ptr<Array<unsigned int, eastl::allocator>>::reset<Array<unsigned int, eastl::allocator>,
                                                                                 void>(
                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&m_tempData, (Array*)pAVar8);
                    } else {
                        pvVar5 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                                     shared_ptr<Array<unsigned int, eastl::allocator>>::operator->(
                                         (shared_ptr<Array<unsigned int, eastl::allocator>>*)&m_tempData);
                        uVar6 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar5);
                        pvVar5 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                                     shared_ptr<Array<unsigned int, eastl::allocator>>::operator->(
                                         (shared_ptr<Array<unsigned int, eastl::allocator>>*)puVar1);
                        uVar7 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar5);
                        if (uVar6 < uVar7)
                            goto LAB_100303430;
                    }
                    uVar6 = 0;
                    do {
                        pAVar8 = (Array<unsigned int, eastl::allocator>*)
                            shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                (shared_ptr<Array<unsigned int, eastl::allocator>>*)puVar1);
                        puVar9 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                            pAVar8, (ulong)(iVar12 * 128 + (int)uVar6 & 16383));
                        uVar2 = *puVar9;
                        pAVar8 = (Array<unsigned int, eastl::allocator>*)
                            shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                (shared_ptr<Array<unsigned int, eastl::allocator>>*)&m_tempData);
                        puVar9 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](pAVar8, uVar6);
                        *puVar9 = uVar2;
                        uVar6 = uVar6 + 1;
                    } while (uVar6 != 16384);
                    m_tempData.swap(puVar1);
                    field_184 = 0;
                }
            }
        }
        uVar3 = field_152;
        if ((uVar3 != 4) && (uVar3 != 2)) {
            return;
        }
        iVar10 = param_1 * field_156;
        iVar12 = -iVar10;
        if (uVar3 != 2) {
            iVar12 = iVar10;
        }
        field_160 = field_160 + iVar12 & 127;
        if (field_184 == '\0') {
            return;
        }
        puVar1 = field_168;
        bVar4 = operator!=((shared_ptr*)puVar1, (_func_decltype_nullptr*)0);
        if (!bVar4) {
            return;
        }
        bVar4 = operator==((shared_ptr*)&m_tempData, (_func_decltype_nullptr*)0);
        if (!bVar4) {
            pvVar5 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                         shared_ptr<Array<unsigned int, eastl::allocator>>::operator->(
                             (shared_ptr<Array<unsigned int, eastl::allocator>>*)&m_tempData);
            uVar6 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar5);
            pvVar5 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                         shared_ptr<Array<unsigned int, eastl::allocator>>::operator->(
                             (shared_ptr<Array<unsigned int, eastl::allocator>>*)puVar1);
            uVar7 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar5);
            if (uVar7 <= uVar6)
                goto LAB_1003035bc;
        }
        pAVar8 = operator_new(24);
        pvVar5 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                     shared_ptr<Array<unsigned int, eastl::allocator>>::operator->(
                         (shared_ptr<Array<unsigned int, eastl::allocator>>*)puVar1);
        uVar6 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar5);
        Array<unsigned int, eastl::allocator>::Array(pAVar8, uVar6);
        shared_ptr<Array<unsigned int, eastl::allocator>>::reset<Array<unsigned int, eastl::allocator>, void>(
            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&m_tempData, (Array*)pAVar8);
    LAB_1003035bc:
        uVar6 = 0;
        do {
            lVar11 = 0;
            do {
                pAVar8 = (Array<unsigned int, eastl::allocator>*)
                    shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                        (shared_ptr<Array<unsigned int, eastl::allocator>>*)puVar1);
                puVar9 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                    pAVar8, (iVar12 + (int)lVar11 & 16383) + uVar6);
                uVar2 = *puVar9;
                pAVar8 = (Array<unsigned int, eastl::allocator>*)
                    shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                        (shared_ptr<Array<unsigned int, eastl::allocator>>*)&m_tempData);
                puVar9 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](pAVar8, uVar6 + lVar11);
                *puVar9 = uVar2;
                lVar11 = lVar11 + 1;
            } while (lVar11 != 128);
            bVar4 = uVar6 < 16256;
            uVar6 = uVar6 + 128;
        } while (bVar4);
        m_tempData.swap(puVar1);
        field_184 = 0;
    }

    // 0x10033dfc0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.75
    void ___cxx_global_var_init_75(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&Texture::m_tempData) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee52f8, &Texture::m_tempData, 4294967296);
    }

} // namespace jag::oldscape::dash3d
