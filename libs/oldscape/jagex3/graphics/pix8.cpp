// libs/oldscape/jagex3/graphics/pix8.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "Pix8.h"

namespace jag::oldscape::graphics {
    // 0x100303200, 256 bytes, placed by class name and debug map
    // Pix8::Untrim()
    void Pix8::Untrim() {
        undefined1 uVar1;
        int iVar2;
        undefined1* puVar3;
        long lVar4;
        int iVar5;
        Array<unsigned char, eastl::allocator> local_50[28];
        int local_34;

        if ((field_48 != field_64) || (field_52 != field_68)) {
            Array<unsigned char, eastl::allocator>::Array(local_50, (long)field_68 * (long)field_64);
            if (0 < (int)field_52) {
                iVar5 = 0;
                iVar2 = 0;
                do {
                    if (0 < field_48) {
                        lVar4 = 0;
                        local_34 = iVar2;
                        do {
                            puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                                (Array<unsigned char, eastl::allocator>*)this, iVar2 + lVar4);
                            uVar1 = *puVar3;
                            puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                                local_50, (long)(int)((field_60 + iVar5) * field_64 + field_56 + (int)lVar4));
                            *puVar3 = uVar1;
                            lVar4 = lVar4 + 1;
                        } while ((int)lVar4 < field_48);
                        iVar2 = local_34 + (int)lVar4;
                    }
                    iVar5 = iVar5 + 1;
                } while (iVar5 < (int)field_52);
            }
            Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)this,
                                                              (Array*)local_50);
            field_48 = field_64;
            field_52 = field_68;
            field_56 = 0;
            field_60 = 0;
            local_50->~Array();
        }
    }

    // 0x10031d540, 112 bytes, base-object constructor, placed by class name
    // Pix8::Pix8(int, int, int)
    void Pix8::Pix8(int param_1, int param_2, int param_3) {
        new (this) Array<unsigned char, eastl::allocator>((long)(param_2 * param_1));
        new (&field_24, (long)param_3) SharedArray<unsigned int>();
        field_48 = param_1;
        field_64 = param_1;
        field_52 = param_2;
        field_68 = param_2;
        field_56 = 0;
        field_60 = 0;
    }

    // 0x10031d5b0, 16 bytes, complete-object constructor, placed by class name
    // Pix8::Pix8(int, int, int): jumps straight to the base-object constructor

    // 0x10031d5c0, 432 bytes, placed by class name
    // Pix8::CopyHFlip()
    Pix8* Pix8::CopyHFlip() {
        Array<unsigned char, eastl::allocator>* pAVar1;
        Array<unsigned char, eastl::allocator>* pAVar2;
        Layout* this_00;
        undefined1 uVar3;
        undefined4 uVar4;
        int iVar5;
        long lVar6;
        ulong uVar7;
        undefined4* puVar8;
        undefined1* puVar9;
        Array<unsigned char, eastl::allocator>* this_01;
        Array<unsigned char, eastl::allocator>* in_RSI;
        uint uVar10;
        int iVar11;
        ulong uVar12;
        int iVar13;
        int iVar14;
        int local_38;

        pAVar1 = in_RSI + 48;
        pAVar2 = in_RSI + 52;
        this_00 = (Layout*)(in_RSI + 24);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        std::make_unique<Pix8, int&, int&, int>((int*)this, (int*)pAVar1, (int*)pAVar2);
        uVar4 = *(undefined4*)(in_RSI + 64);
        lVar6 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
        *(undefined4*)(lVar6 + 64) = uVar4;
        uVar4 = *(undefined4*)(in_RSI + 68);
        lVar6 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
        *(undefined4*)(lVar6 + 68) = uVar4;
        iVar11 = *(int*)(in_RSI + 48);
        iVar5 = *(int*)(in_RSI + 64);
        iVar13 = *(int*)(in_RSI + 56);
        lVar6 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
        *(int*)(lVar6 + 56) = iVar5 - (iVar11 + iVar13);
        uVar4 = *(undefined4*)(in_RSI + 60);
        lVar6 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
        *(undefined4*)(lVar6 + 60) = uVar4;
        uVar7 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_00);
        if (uVar7 != 0) {
            uVar10 = 1;
            uVar12 = 0;
            do {
                puVar8 =
                    (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00, uVar12);
                uVar4 = *puVar8;
                lVar6 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
                    (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
                puVar8 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)(lVar6 + 24),
                                                                            uVar12);
                *puVar8 = uVar4;
                uVar12 = (ulong)uVar10;
                uVar10 = uVar10 + 1;
            } while (uVar12 < uVar7);
        }
        if (0 < *(int*)pAVar2) {
            iVar11 = 0;
            local_38 = 1;
            do {
                iVar5 = *(int*)pAVar1;
                if (0 < iVar5) {
                    iVar13 = 0;
                    iVar14 = -1;
                    do {
                        puVar9 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                            in_RSI, (long)(iVar5 * local_38 + iVar14));
                        uVar3 = *puVar9;
                        this_01 = (Array<unsigned char, eastl::allocator>*)
                                      std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
                                          (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
                        puVar9 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                            this_01, (long)(*(int*)pAVar1 * iVar11 + iVar13));
                        *puVar9 = uVar3;
                        iVar13 = iVar13 + 1;
                        iVar5 = *(int*)pAVar1;
                        iVar14 = iVar14 + -1;
                    } while (iVar13 < iVar5);
                }
                iVar11 = iVar11 + 1;
                local_38 = local_38 + 1;
            } while (iVar11 < *(int*)pAVar2);
        }
        return this;
    }

    // 0x10031d7e0, 384 bytes, placed by class name
    // Pix8::Copy()
    Pix8* Pix8::Copy() {
        Layout* this_00;
        undefined1 uVar1;
        int iVar2;
        int iVar3;
        undefined4 uVar4;
        bool bVar5;
        int iVar6;
        Pix8* this_01;
        long lVar7;
        ulong uVar8;
        undefined1* puVar9;
        Array<unsigned char, eastl::allocator>* this_02;
        undefined4* puVar10;
        ulong uVar11;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* in_RSI;
        ulong uVar12;

        this_01 = operator_new(72);
        iVar2 = *(int*)(in_RSI + 48);
        iVar3 = *(int*)(in_RSI + 52);
        this_00 = (Layout*)(in_RSI + 24);
        iVar6 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_00);
        Pix8(this_01, iVar2, iVar3, iVar6);
        std::unique_ptr<Pix8, std::default_delete<Pix8>>::unique_ptr<true, void>(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this, this_01);
        uVar4 = *(undefined4*)(in_RSI + 64);
        lVar7 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
        *(undefined4*)(lVar7 + 64) = uVar4;
        uVar4 = *(undefined4*)(in_RSI + 68);
        lVar7 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
        *(undefined4*)(lVar7 + 68) = uVar4;
        uVar4 = *(undefined4*)(in_RSI + 56);
        lVar7 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
        *(undefined4*)(lVar7 + 56) = uVar4;
        uVar4 = *(undefined4*)(in_RSI + 60);
        lVar7 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
            (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
        *(undefined4*)(lVar7 + 60) = uVar4;
        uVar8 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(in_RSI);
        if (uVar8 != 0) {
            uVar11 = 0;
            uVar12 = 1;
            do {
                puVar9 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)in_RSI, uVar11);
                uVar1 = *puVar9;
                this_02 = (Array<unsigned char, eastl::allocator>*)
                              std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
                                  (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
                puVar9 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](this_02, uVar11);
                *puVar9 = uVar1;
                bVar5 = uVar12 < uVar8;
                uVar11 = uVar12;
                uVar12 = (ulong)((int)uVar12 + 1);
            } while (bVar5);
        }
        uVar8 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_00);
        if (uVar8 != 0) {
            uVar11 = 0;
            uVar12 = 1;
            do {
                puVar10 =
                    (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00, uVar11);
                uVar4 = *puVar10;
                lVar7 = std::unique_ptr<Pix8, std::default_delete<Pix8>>::operator->(
                    (unique_ptr<Pix8, std::default_delete<Pix8>>*)this);
                puVar10 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)(lVar7 + 24),
                                                                             uVar11);
                *puVar10 = uVar4;
                bVar5 = uVar12 < uVar8;
                uVar11 = uVar12;
                uVar12 = (ulong)((int)uVar12 + 1);
            } while (bVar5);
        }
        return this;
    }

    // 0x10031d970, 240 bytes, placed by class name
    // Pix8::Topix32()
    Pix8* Pix8::Topix32() {
        undefined4 uVar1;
        int iVar2;
        int iVar3;
        long lVar4;
        byte* pbVar5;
        undefined4* puVar6;
        SharedArray<unsigned int>* this_00;
        ulong uVar7;
        Array<unsigned char, eastl::allocator>* in_RSI;

        make_shared<Pix32, int&, int&>((jag*)this, (int*)(in_RSI + 48), (int*)(in_RSI + 52));
        uVar1 = *(undefined4*)(in_RSI + 56);
        lVar4 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        *(undefined4*)(lVar4 + 32) = uVar1;
        uVar1 = *(undefined4*)(in_RSI + 60);
        lVar4 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        *(undefined4*)(lVar4 + 36) = uVar1;
        uVar1 = *(undefined4*)(in_RSI + 64);
        lVar4 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        *(undefined4*)(lVar4 + 40) = uVar1;
        uVar1 = *(undefined4*)(in_RSI + 68);
        lVar4 = shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
        *(undefined4*)(lVar4 + 44) = uVar1;
        iVar2 = *(int*)(in_RSI + 52);
        iVar3 = *(int*)(in_RSI + 48);
        if (0 < iVar2 * iVar3) {
            uVar7 = 0;
            do {
                pbVar5 = (byte*)Array<unsigned char, eastl::allocator>::operator[](in_RSI, uVar7);
                puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)(in_RSI + 24),
                                                                            (ulong)*pbVar5);
                uVar1 = *puVar6;
                this_00 = (SharedArray<unsigned int>*)shared_ptr<Pix32>::operator->((shared_ptr<Pix32>*)this);
                puVar6 = (undefined4*)SharedArray<unsigned int>::operator[](this_00, uVar7);
                *puVar6 = uVar1;
                uVar7 = uVar7 + 1;
            } while ((uint)(iVar2 * iVar3) != uVar7);
        }
        return this;
    }

    // 0x10031da60, 272 bytes, placed by class name
    // Pix8::HalveSize()
    void Pix8::HalveSize() {
        undefined1 uVar1;
        int iVar2;
        undefined1* puVar3;
        int iVar4;
        long lVar5;
        Array<unsigned char, eastl::allocator> local_50[28];
        int local_34;

        iVar4 = field_64 / 2;
        field_64 = iVar4;
        iVar2 = field_68 / 2;
        field_68 = iVar2;
        Array<unsigned char, eastl::allocator>::Array(local_50, (long)(iVar2 * iVar4));
        if (0 < (int)field_52) {
            iVar4 = 0;
            iVar2 = 0;
            do {
                if (0 < field_48) {
                    lVar5 = 0;
                    local_34 = iVar2;
                    do {
                        puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)this, iVar2 + lVar5);
                        uVar1 = *puVar3;
                        puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                            local_50, (long)(((int)(field_60 + iVar4) >> 1) * field_64 + (field_56 + (int)lVar5 >> 1)));
                        *puVar3 = uVar1;
                        lVar5 = lVar5 + 1;
                    } while ((int)lVar5 < field_48);
                    iVar2 = local_34 + (int)lVar5;
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 < (int)field_52);
        }
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)this,
                                                          (Array*)local_50);
        field_48 = field_64;
        field_52 = field_68;
        field_56 = 0;
        field_60 = 0;
        local_50->~Array();
    }

    // 0x10031db70, 384 bytes, placed by class name
    // Pix8::Untrim(int)
    void Pix8::Untrim(int param_1) {
        undefined1 uVar1;
        int iVar2;
        int iVar3;
        undefined1* puVar4;
        ulong uVar5;
        int iVar6;
        int iVar7;
        uint uVar8;
        int iVar9;
        int iVar10;
        long lVar11;
        ulong uVar12;
        int iVar13;
        Array<unsigned char, eastl::allocator> local_68[24];
        ulong local_50;
        ulong local_48;
        uint local_3c;
        int local_38;
        uint local_34;

        iVar13 = field_48;
        iVar2 = field_64;
        if ((iVar13 != iVar2) || (field_52 != field_68)) {
            iVar3 = field_56;
            local_38 = param_1;
            if (iVar3 < param_1) {
                local_38 = iVar3;
            }
            iVar6 = iVar3 + iVar13 + param_1;
            iVar10 = iVar2 - (iVar3 + iVar13);
            if (iVar6 <= iVar2) {
                iVar10 = param_1;
            }
            uVar8 = field_60;
            local_34 = param_1;
            if ((int)uVar8 < param_1) {
                local_34 = uVar8;
            }
            iVar7 = uVar8 + field_52;
            iVar9 = field_68 - iVar7;
            if (iVar7 + param_1 <= field_68) {
                iVar9 = param_1;
            }
            uVar8 = iVar13 + local_38 + iVar10;
            local_48 = (ulong)uVar8;
            local_3c = field_52 + local_34 + iVar9;
            Array<unsigned char, eastl::allocator>::Array(local_68, (long)(int)(local_3c * uVar8));
            if (0 < (int)field_52) {
                if (iVar2 < iVar6) {
                    iVar6 = iVar2;
                }
                uVar8 = (iVar6 + local_38) - iVar3;
                local_50 = (ulong)uVar8;
                uVar12 = (ulong)(local_34 * uVar8 + local_38);
                iVar13 = 0;
                do {
                    uVar5 = (ulong)(uint)field_48;
                    if (0 < field_48) {
                        lVar11 = 0;
                        do {
                            puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                                (Array<unsigned char, eastl::allocator>*)this, (int)uVar5 * iVar13 + lVar11);
                            uVar1 = *puVar4;
                            puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                                local_68, (long)((int)lVar11 + (int)uVar12));
                            *puVar4 = uVar1;
                            lVar11 = lVar11 + 1;
                            uVar5 = (ulong)field_48;
                        } while (lVar11 < (long)uVar5);
                    }
                    iVar13 = iVar13 + 1;
                    uVar12 = uVar12 + local_50;
                } while (iVar13 < (int)field_52);
            }
            Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)this,
                                                              (Array*)local_68);
            field_48 = (int)local_48;
            field_52 = local_3c;
            field_56 = field_56 - local_38;
            field_60 = field_60 - local_34;
            local_68->~Array();
        }
    }

    // 0x10031dcf0, 272 bytes, placed by class name
    // Pix8::Rotate90Clockwise()
    void Pix8::Rotate90Clockwise() {
        undefined1 uVar1;
        uint uVar2;
        uint uVar3;
        undefined1* puVar4;
        int iVar5;
        int iVar6;
        ulong uVar7;
        Array<unsigned char, eastl::allocator> local_48[24];

        Array<unsigned char, eastl::allocator>::Array(local_48, (long)(int)field_52 * (long)field_48);
        if (0 < field_48) {
            uVar7 = 0;
            iVar6 = 0;
            do {
                if (0 < (int)field_52) {
                    uVar7 = (ulong)(int)uVar7;
                    iVar5 = field_52 + 1;
                    do {
                        puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)this, (long)((iVar5 + -2) * field_48 + iVar6));
                        uVar1 = *puVar4;
                        puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](local_48, uVar7);
                        uVar7 = uVar7 + 1;
                        *puVar4 = uVar1;
                        iVar5 = iVar5 + -1;
                    } while (1 < iVar5);
                }
                iVar6 = iVar6 + 1;
            } while (iVar6 < field_48);
        }
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)this,
                                                          (Array*)local_48);
        uVar2 = field_52;
        uVar3 = field_60;
        field_60 = field_56;
        iVar6 = field_68;
        field_56 = iVar6 - (uVar3 + uVar2);
        field_52 = field_48;
        field_48 = uVar2;
        field_68 = field_64;
        field_64 = iVar6;
        local_48->~Array();
    }

    // 0x10031de00, 272 bytes, placed by class name
    // Pix8::Rotate90Anticlockwise()
    void Pix8::Rotate90Anticlockwise() {
        undefined1 uVar1;
        int iVar2;
        bool bVar3;
        ulong uVar4;
        undefined1* puVar5;
        long lVar6;
        uint uVar7;
        uint uVar8;
        Array<unsigned char, eastl::allocator> local_58[24];
        ulong local_40;
        ulong local_38;

        Array<unsigned char, eastl::allocator>::Array(local_58, (long)(int)field_52 * (long)field_48);
        if (0 < field_48) {
            uVar4 = 0;
            uVar7 = field_48;
            do {
                uVar8 = uVar7 - 1;
                if (0 < (int)field_52) {
                    lVar6 = 0;
                    local_40 = uVar4;
                    local_38 = (ulong)uVar7;
                    do {
                        puVar5 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)this, (long)(int)(field_48 * (int)lVar6 + uVar8));
                        uVar1 = *puVar5;
                        puVar5 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](local_58,
                                                                                                 lVar6 + (int)uVar4);
                        *puVar5 = uVar1;
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < (int)field_52);
                    uVar4 = (ulong)(uint)((int)local_40 + (int)lVar6);
                    uVar7 = (uint)local_38;
                }
                bVar3 = 1 < (int)uVar7;
                uVar7 = uVar8;
            } while (bVar3);
        }
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)this,
                                                          (Array*)local_58);
        uVar7 = field_52;
        iVar2 = field_56;
        field_56 = field_60;
        field_60 = field_64 - (iVar2 + field_48);
        field_52 = field_48;
        field_48 = uVar7;
        iVar2 = field_68;
        field_68 = field_64;
        field_64 = iVar2;
        local_58->~Array();
    }

    // 0x10031df10, 240 bytes, placed by class name
    // Pix8::HFlip()
    void Pix8::HFlip() {
        undefined1 uVar1;
        undefined1* puVar2;
        int iVar3;
        int iVar4;
        ulong uVar5;
        Array<unsigned char, eastl::allocator> local_48[24];

        Array<unsigned char, eastl::allocator>::Array(local_48, (long)(int)field_52 * (long)field_48);
        if (0 < (int)field_52) {
            iVar4 = 0;
            uVar5 = 0;
            do {
                if (0 < field_48) {
                    uVar5 = (ulong)(int)uVar5;
                    iVar3 = field_48 + 1;
                    do {
                        puVar2 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)this, (long)(field_48 * iVar4 + iVar3 + -2));
                        uVar1 = *puVar2;
                        puVar2 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](local_48, uVar5);
                        uVar5 = uVar5 + 1;
                        *puVar2 = uVar1;
                        iVar3 = iVar3 + -1;
                    } while (1 < iVar3);
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 < (int)field_52);
        }
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)this,
                                                          (Array*)local_48);
        field_56 = field_64 - (field_48 + field_56);
        local_48->~Array();
    }

    // 0x10031e000, 256 bytes, placed by class name
    // Pix8::VFlip()
    void Pix8::VFlip() {
        undefined1 uVar1;
        uint uVar2;
        int iVar3;
        undefined1* puVar4;
        uint uVar5;
        ulong uVar6;
        uint uVar7;
        long lVar8;
        Array<unsigned char, eastl::allocator> local_58[24];
        ulong local_40;
        ulong local_38;

        Array<unsigned char, eastl::allocator>::Array(local_58, (long)(int)field_52 * (long)field_48);
        uVar2 = field_52;
        if (0 < (int)uVar2) {
            uVar6 = 0;
            uVar7 = uVar2;
            do {
                uVar7 = uVar7 - 1;
                iVar3 = field_48;
                uVar5 = uVar2;
                if (0 < iVar3) {
                    lVar8 = 0;
                    local_40 = (ulong)uVar2;
                    local_38 = uVar6;
                    do {
                        puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)this, (long)(int)(iVar3 * uVar7 + (int)lVar8));
                        uVar1 = *puVar4;
                        puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](local_58,
                                                                                                 (int)uVar6 + lVar8);
                        *puVar4 = uVar1;
                        iVar3 = field_48;
                        lVar8 = lVar8 + 1;
                    } while ((int)lVar8 < iVar3);
                    uVar6 = (ulong)(uint)((int)local_38 + (int)lVar8);
                    uVar5 = (uint)local_40;
                }
                uVar2 = uVar5 - 1;
            } while (1 < (int)uVar5);
        }
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)this,
                                                          (Array*)local_58);
        field_60 = field_68 - (field_52 + field_60);
        local_58->~Array();
    }

    // 0x10031e100, 208 bytes, placed by class name
    // Pix8::HVFlip()
    void Pix8::HVFlip() {
        undefined1 uVar1;
        undefined1* puVar2;
        ulong uVar3;
        uint uVar4;
        ulong uVar5;
        Array<unsigned char, eastl::allocator> local_48[24];

        uVar4 = field_52 * field_48;
        Array<unsigned char, eastl::allocator>::Array(local_48, (long)(int)uVar4);
        if (0 < (int)uVar4) {
            uVar5 = (ulong)uVar4;
            uVar3 = 0;
            do {
                uVar4 = uVar4 - 1;
                puVar2 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)this, (ulong)uVar4);
                uVar1 = *puVar2;
                puVar2 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](local_48, uVar3);
                uVar3 = uVar3 + 1;
                *puVar2 = uVar1;
            } while (uVar3 != uVar5);
        }
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)this,
                                                          (Array*)local_48);
        field_56 = field_64 - (field_48 + field_56);
        field_60 = field_68 - (field_52 + field_60);
        local_48->~Array();
    }

    // 0x10031e1d0, 304 bytes, placed by class name
    // Pix8::RgbAdjust(int, int, int)
    void Pix8::RgbAdjust(int param_1, int param_2, int param_3) {
        byte bVar1;
        int iVar2;
        long lVar3;
        byte* pbVar4;
        int* piVar5;
        ulong uVar6;
        undefined1* this_00;
        int iVar7;
        int iVar8;
        uint uVar9;
        ulong uVar10;

        this_00 = &field_24;
        lVar3 = this_00->HeapBeginPtr();
        if (lVar3 != 0) {
            uVar9 = 1;
            uVar10 = 0;
            do {
                lVar3 = SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00, uVar10);
                bVar1 = *(byte*)(lVar3 + 3);
                lVar3 = SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00, uVar10);
                iVar7 = (uint) * (byte*)(lVar3 + 2) + param_1;
                if (254 < iVar7) {
                    iVar7 = 255;
                }
                if (iVar7 < 0) {
                    iVar7 = 0;
                }
                lVar3 = SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00, uVar10);
                iVar8 = (uint) * (byte*)(lVar3 + 1) + param_2;
                if (254 < iVar8) {
                    iVar8 = 255;
                }
                if (iVar8 < 0) {
                    iVar8 = 0;
                }
                pbVar4 = (byte*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00, uVar10);
                iVar2 = (uint)*pbVar4 + param_3;
                if (254 < iVar2) {
                    iVar2 = 255;
                }
                if (iVar2 < 0) {
                    iVar2 = 0;
                }
                piVar5 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00, uVar10);
                *piVar5 = iVar8 * 256 + iVar7 * 65536 + (uint)bVar1 * 16777216 + iVar2;
                uVar10 = (ulong)uVar9;
                uVar6 = this_00->HeapBeginPtr();
                uVar9 = uVar9 + 1;
            } while (uVar10 < uVar6);
        }
    }

    // 0x10031e300, 304 bytes, placed by class name
    // Pix8::Contrast(int)
    void Pix8::Contrast(int param_1) {
        byte bVar1;
        int iVar2;
        ulong uVar3;
        int* piVar4;
        long lVar5;
        byte* pbVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        undefined1* this_00;
        int iVar11;
        int iVar12;

        this_00 = &field_24;
        uVar3 = this_00->HeapBeginPtr();
        while (uVar3 != 0) {
            uVar3 = uVar3 - 1;
            lVar5 = SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00, uVar3);
            bVar1 = *(byte*)(lVar5 + 3);
            lVar5 = SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00, uVar3);
            iVar7 = (uint) * (byte*)(lVar5 + 2) * param_1;
            iVar8 = iVar7 >> 8;
            if (254 < iVar8) {
                iVar8 = 255;
            }
            lVar5 = SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00, uVar3);
            iVar10 = (uint) * (byte*)(lVar5 + 1) * param_1;
            iVar11 = iVar10 >> 8;
            if (254 < iVar11) {
                iVar11 = 255;
            }
            pbVar6 = (byte*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00, uVar3);
            iVar9 = (int)((uint)*pbVar6 * param_1) >> 8;
            if (254 < iVar9) {
                iVar9 = 255;
            }
            iVar12 = 0;
            iVar2 = 0;
            if (-1 < (int)((uint)*pbVar6 * param_1)) {
                iVar2 = iVar9;
            }
            iVar8 = iVar8 << 16;
            if (iVar7 < 0) {
                iVar8 = 0;
            }
            if (-1 < iVar10) {
                iVar12 = iVar11 << 8;
            }
            piVar4 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00, uVar3);
            *piVar4 = iVar8 + (uint)bVar1 * 16777216 + iVar12 + iVar2;
        }
    }

} // namespace jag::oldscape::graphics
