// libs/image/RGBAImage.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.image

#include "RGBAImage.h"

namespace jag {
    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    RGBAImage::GetMargins() const;

    // 0x100049810: the linker folded this into oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const, which has identical code
    RGBAImage::GetColourData();

    // 0x100049810: the linker folded this into oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const, which has identical code
    RGBAImage::GetColourData() const;

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    RGBAImage::GetHeight() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    RGBAImage::GetWidth() const;

    // 0x100a0bf50, 272 bytes, placed by class name and debug map
    // RGBAImage::Create(int, int, void const*)
    undefined8 RGBAImage::Create(int param_1, int param_2, void* param_3) {
        undefined1* this_00;
        long lVar1;
        void* pvVar2;
        undefined8 uVar3;
        ulong uVar4;
        undefined8 local_48;
        undefined8 uStack_40;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        Destroy(this);
        if ((param_1 < 0) || (param_2 < 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("w >= 0 && h >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/RGBAImage.cpp", 50,
                      (char*)0);
        }
        uVar4 = (ulong)(param_2 * param_1 * 4);
        this_00 = &field_64;
        this_00->set_max_size(uVar4, 0);
        if (param_2 * param_1 != 0) {
            lVar1 = this_00->data();
            if (lVar1 == 0) {
                uVar3 = 0;
                goto LAB_100a0c031;
            }
        }
        if (param_3 != (void*)0) {
            pvVar2 = (void*)this_00->data();
            _memcpy(pvVar2, param_3, uVar4);
        }
        field_0 = param_1;
        field_4 = param_2;
        local_48 = 0;
        uStack_40 = 0;
        eastl::fixed_vector<int, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<int, 4ul, true, eastl::allocator>*)&field_8, &local_48, 4);
        uVar3 = 1;
    LAB_100a0c031:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar3;
    }

    // 0x100a0c060, 112 bytes, placed by class name and debug map
    // RGBAImage::Destroy()
    void RGBAImage::Destroy() {
        undefined8 local_28;
        undefined8 uStack_20;
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        (&field_64)->clear();
        field_0 = 0;
        field_4 = 0;
        local_28 = 0;
        uStack_20 = 0;
        eastl::fixed_vector<int, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<int, 4ul, true, eastl::allocator>*)&field_8, &local_28, 4);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a0d4f0, 64 bytes, placed by class name
    // RGBAImage::operator=(RGBAImage&&)
    /* RGBAImage::TEMPNAMEPLACEHOLDERVALUE(RGBAImage&&) */

    RGBAImage* RGBAImage::operator=(RGBAImage* param_1) {
        field_0 = param_1->field_0;
        field_4 = param_1->field_4;
        eastl::fixed_vector<int, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<int, 4ul, true, eastl::allocator>*)&field_8, (fixed_vector*)&param_1->field_8);
        Array<unsigned char, BucketAllocatorEASTL>::operator=((Array<unsigned char, BucketAllocatorEASTL>*)&field_64,
                                                              (Array*)&param_1->field_64);
        return this;
    }

    // 0x100a0d540, 80 bytes, base-object constructor, placed by class name
    // RGBAImage::RGBAImage()
    void RGBAImage::RGBAImage() {
        field_0 = 0;
        field_4 = 0;
        new (&field_8) eastl::fixed_vector<int, 4ul, true, eastl::allocator>();
        new (&field_64) Array<unsigned char, BucketAllocatorEASTL>();
    }

    // 0x100a0d590, 16 bytes, complete-object constructor, placed by class name
    // RGBAImage::RGBAImage(): jumps straight to the base-object constructor

    // 0x100a0d5a0, 96 bytes, base-object constructor, placed by class name
    // RGBAImage::RGBAImage(RGBAImage const&)
    void RGBAImage::RGBAImage(RGBAImage* param_1) {
        field_0 = param_1->field_0;
        field_4 = param_1->field_4;
        new (&field_8, (fixed_vector*)&param_1->field_8) eastl::fixed_vector<int, 4ul, true, eastl::allocator>();
        new (&field_64, (Array*)&param_1->field_64) Array<unsigned char, BucketAllocatorEASTL>();
    }

    // 0x100a0d610, 16 bytes, complete-object constructor, placed by class name
    // RGBAImage::RGBAImage(RGBAImage const&): jumps straight to the base-object constructor

    // 0x100a0d620, 64 bytes, base-object constructor, placed by class name
    // RGBAImage::RGBAImage(RGBAImage&&)
    void RGBAImage::RGBAImage(RGBAImage* param_1) {
        field_0 = param_1->field_0;
        field_4 = param_1->field_4;
        new (&field_8, (fixed_vector*)&param_1->field_8) eastl::fixed_vector<int, 4ul, true, eastl::allocator>();
        new (&field_64, (Array*)&param_1->field_64) Array<unsigned char, BucketAllocatorEASTL>();
    }

    // 0x100a0d660, 16 bytes, complete-object constructor, placed by class name
    // RGBAImage::RGBAImage(RGBAImage&&): jumps straight to the base-object constructor

    // 0x100a0d670, 64 bytes, placed by class name
    // RGBAImage::operator=(RGBAImage const&)
    /* RGBAImage::TEMPNAMEPLACEHOLDERVALUE(RGBAImage const&) */

    RGBAImage* RGBAImage::operator=(RGBAImage* param_1) {
        field_0 = param_1->field_0;
        field_4 = param_1->field_4;
        eastl::fixed_vector<int, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<int, 4ul, true, eastl::allocator>*)&field_8, (fixed_vector*)&param_1->field_8);
        Array<unsigned char, BucketAllocatorEASTL>::operator=((Array<unsigned char, BucketAllocatorEASTL>*)&field_64,
                                                              (Array*)&param_1->field_64);
        return this;
    }

    // 0x100a0d820, 352 bytes, placed by class name
    // RGBAImage::CreateFromARGB(int, int, unsigned int const*)
    undefined8 RGBAImage::CreateFromARGB(int param_1, int param_2, uint* param_3) {
        undefined1* this_00;
        undefined1 uVar1;
        long lVar2;
        undefined1* puVar3;
        undefined8 uVar4;
        int iVar5;
        ulong uVar6;
        undefined8 local_48;
        undefined8 uStack_40;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        Destroy(this);
        if ((param_1 < 0) || (param_2 < 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("w >= 0 && h >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/RGBAImage.cpp", 72,
                      (char*)0);
        }
        iVar5 = param_2 * param_1;
        this_00 = &field_64;
        this_00->set_max_size((long)(iVar5 * 4), 0);
        if (iVar5 != 0) {
            lVar2 = this_00->data();
            if (lVar2 == 0) {
                uVar4 = 0;
                goto LAB_100a0d94d;
            }
            lVar2 = (long)iVar5;
            uVar6 = 0;
            do {
                uVar1 = *(undefined1*)((long)param_3 + uVar6 + 2);
                puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                    (Array<unsigned char, BucketAllocatorEASTL>*)this_00, uVar6);
                *puVar3 = uVar1;
                uVar1 = *(undefined1*)((long)param_3 + uVar6 + 1);
                puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                    (Array<unsigned char, BucketAllocatorEASTL>*)this_00, uVar6 + 1);
                *puVar3 = uVar1;
                uVar1 = *(undefined1*)((long)param_3 + uVar6);
                puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                    (Array<unsigned char, BucketAllocatorEASTL>*)this_00, uVar6 + 2);
                *puVar3 = uVar1;
                uVar1 = *(undefined1*)((long)param_3 + uVar6 + 3);
                puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                    (Array<unsigned char, BucketAllocatorEASTL>*)this_00, uVar6 + 3);
                *puVar3 = uVar1;
                uVar6 = uVar6 + 4;
                lVar2 = lVar2 + -1;
            } while (lVar2 != 0);
        }
        field_0 = param_1;
        field_4 = param_2;
        local_48 = 0;
        uStack_40 = 0;
        eastl::fixed_vector<int, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<int, 4ul, true, eastl::allocator>*)&field_8, &local_48, 4);
        uVar4 = 1;
    LAB_100a0d94d:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar4;
    }

    // 0x100a0d980, 336 bytes, placed by class name
    // RGBAImage::Upscale(int)
    void RGBAImage::Upscale(int param_1) {
        undefined4 uVar1;
        long lVar2;
        long lVar3;
        int iVar4;
        uint uVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        Array<unsigned char, BucketAllocatorEASTL> local_40[24];

        if (param_1 != 1) {
            Array<unsigned char, BucketAllocatorEASTL>::Array(local_40);
            local_40->set_max_size((long)(int)(param_1 * param_1 * field_0 * field_4 * 4), 0);
            local_40->swap((Array*)&field_64);
            lVar2 = local_40->data();
            lVar3 = (&field_64)->data();
            uVar5 = field_4;
            if (0 < (int)uVar5) {
                iVar7 = 0;
                iVar8 = 0;
                do {
                    uVar5 = field_0;
                    if (0 < (int)uVar5) {
                        iVar10 = 0;
                        do {
                            if (0 < param_1) {
                                uVar1 = *(undefined4*)(lVar2 + (long)(int)(uVar5 * iVar8 + iVar10) * 4);
                                iVar9 = 0;
                                iVar6 = iVar7;
                                do {
                                    if (0 < param_1) {
                                        iVar4 = 0;
                                        do {
                                            *(undefined4*)(lVar3 +
                                                           (long)(int)((field_0 * iVar6 + iVar10) * param_1 + iVar4) *
                                                               4) = uVar1;
                                            iVar4 = iVar4 + 1;
                                        } while (param_1 != iVar4);
                                    }
                                    iVar9 = iVar9 + 1;
                                    iVar6 = iVar6 + 1;
                                } while (iVar9 != param_1);
                            }
                            iVar10 = iVar10 + 1;
                            uVar5 = field_0;
                        } while (iVar10 < (int)uVar5);
                    }
                    iVar8 = iVar8 + 1;
                    uVar5 = field_4;
                    iVar7 = iVar7 + param_1;
                } while (iVar8 < (int)uVar5);
            }
            field_0 = param_1 * field_0;
            field_4 = uVar5 * param_1;
            local_40->~Array();
        }
    }

    // 0x100a0dad0, 1328 bytes, placed by class name
    // RGBAImage::PadImage(int, bool) const
    RGBAImage* RGBAImage::PadImage(int param_1, bool param_2) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        char cVar5;
        int iVar6;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_00;
        long lVar7;
        long lVar8;
        ulong uVar9;
        undefined4* puVar10;
        char in_CL;
        int iVar11;
        int iVar12;
        int iVar13;
        undefined7 in_register_00000011;
        int iVar14;
        int iVar15;
        undefined4 in_register_00000034;
        int* piVar16;
        long lVar17;
        long lVar18;
        int iVar19;
        int iVar20;
        undefined4* puVar21;
        long lVar22;
        ulong uVar23;
        ulong uVar24;
        int iVar25;
        ulong uVar26;

        piVar16 = (int*)CONCAT44(in_register_00000034, param_1);
        iVar12 = (int)CONCAT71(in_register_00000011, param_2);
        uVar26 = CONCAT71(in_register_00000011, param_2) & 4294967295;
        if (iVar12 < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("padding > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/RGBAImage.cpp", 138,
                      (char*)0);
        }
        RGBAImage(this);
        iVar6 = *piVar16;
        iVar11 = piVar16[1];
        iVar14 = iVar6 + iVar12 * 2;
        iVar25 = iVar11 + iVar12 * 2;
        cVar5 = Create(this, iVar14, iVar25, (void*)0);
        if (cVar5 != '\0') {
            SetMargins(this, (fixed_vector*)(piVar16 + 2), 0);
            this_00 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)GetDevCredentialsOutputDirectory();
            lVar7 = this_00->data();
            lVar8 = ((piVar16 + 16))->data();
            lVar22 = (long)iVar14;
            if (0 < *piVar16) {
                puVar21 = (undefined4*)(lVar7 + (lVar22 + 1) * (long)iVar12 * 4);
                iVar15 = 0;
                do {
                    if (0 < piVar16[1]) {
                        iVar19 = 0;
                        puVar10 = puVar21;
                        do {
                            *puVar10 = *(undefined4*)(lVar8 + (long)(*piVar16 * iVar19 + iVar15) * 4);
                            iVar19 = iVar19 + 1;
                            puVar10 = puVar10 + lVar22;
                        } while (iVar19 < piVar16[1]);
                    }
                    iVar15 = iVar15 + 1;
                    puVar21 = puVar21 + 1;
                } while (iVar15 < *piVar16);
            }
            if (in_CL == '\0') {
                if (0 < iVar12) {
                    iVar13 = iVar6 + iVar12 * 2;
                    iVar15 = (iVar6 + iVar12 * 2 + 1) * iVar12;
                    lVar8 = lVar7 + iVar12 * lVar22 * 4;
                    iVar19 = 0;
                    uVar23 = 0;
                    uVar24 = uVar26;
                    do {
                        if (0 < *piVar16) {
                            lVar18 = 0;
                            iVar20 = iVar12;
                            do {
                                *(undefined4*)(lVar7 + (long)(iVar19 + iVar20) * 4) =
                                    *(undefined4*)(lVar7 + (long)(iVar15 + (int)lVar18) * 4);
                                *(undefined4*)(lVar7 + (long)((piVar16[1] + (int)uVar24) * iVar13 + iVar20) * 4) =
                                    *(undefined4*)(lVar7 + (long)((piVar16[1] + iVar12 + -1) * iVar14 + iVar20) * 4);
                                lVar18 = lVar18 + 1;
                                iVar20 = iVar20 + 1;
                            } while (lVar18 < *piVar16);
                        }
                        if (0 < piVar16[1]) {
                            lVar18 = 0;
                            lVar17 = 0;
                            iVar20 = iVar15;
                            do {
                                *(undefined4*)(lVar8 + lVar18 * 4) =
                                    *(undefined4*)(lVar7 + (lVar22 + 1) * (long)iVar12 * 4 + lVar18 * 4);
                                *(undefined4*)(lVar7 + ((long)(iVar20 + *piVar16) + uVar23) * 4) =
                                    *(undefined4*)(lVar7 + (long)(*piVar16 + iVar20 + -1) * 4);
                                lVar17 = lVar17 + 1;
                                lVar18 = lVar18 + lVar22;
                                iVar20 = iVar20 + iVar13;
                            } while (lVar17 < piVar16[1]);
                        }
                        uVar23 = uVar23 + 1;
                        uVar24 = (ulong)((int)uVar24 + 1);
                        iVar19 = iVar19 + iVar13;
                        lVar8 = lVar8 + 4;
                    } while (uVar23 != uVar26);
                }
                if (0 < iVar12) {
                    iVar15 = iVar14 * iVar12 + iVar12;
                    iVar14 = (iVar12 + piVar16[1] + -1) * iVar14 + iVar12;
                    uVar1 = *(undefined4*)(lVar7 + (long)iVar15 * 4);
                    uVar2 = *(undefined4*)(lVar7 + (long)(iVar15 + *piVar16 + -1) * 4);
                    uVar3 = *(undefined4*)(lVar7 + (long)iVar14 * 4);
                    uVar4 = *(undefined4*)(lVar7 + (long)(*piVar16 + -1 + iVar14) * 4);
                    iVar14 = iVar6 + iVar12 * 2;
                    iVar11 = (iVar11 + iVar12 * 2) * iVar14 - iVar12;
                    lVar8 = lVar7 + ((long)iVar25 + -1) * lVar22 * 4;
                    iVar6 = iVar6 + iVar12;
                    uVar24 = 0;
                    lVar18 = lVar7;
                    do {
                        uVar24 = uVar24 + 1;
                        uVar23 = 0;
                        do {
                            *(undefined4*)(lVar18 + uVar23 * 4) = uVar1;
                            *(undefined4*)(lVar7 + (long)iVar6 * 4 + uVar23 * 4) = uVar2;
                            *(undefined4*)(lVar8 + uVar23 * 4) = uVar3;
                            *(undefined4*)(lVar7 + (long)iVar11 * 4 + uVar23 * 4) = uVar4;
                            uVar23 = uVar23 + 1;
                        } while (uVar26 != uVar23);
                        iVar11 = iVar11 - iVar14;
                        lVar8 = lVar8 + lVar22 * -4;
                        iVar6 = iVar6 + iVar14;
                        lVar18 = lVar18 + lVar22 * 4;
                    } while (uVar24 != uVar26);
                }
            } else if (0 < iVar12) {
                iVar14 = iVar6 + iVar12 * 2;
                iVar19 = (iVar6 + iVar12 * 2 + 1) * iVar12;
                puVar21 = (undefined4*)(lVar7 + iVar12 * lVar22 * 4);
                iVar15 = 0;
                uVar23 = 0;
                uVar24 = uVar26;
                do {
                    if (0 < *piVar16) {
                        lVar8 = 0;
                        uVar9 = uVar26;
                        do {
                            iVar13 = (int)uVar9;
                            *(undefined4*)(lVar7 + (long)(iVar15 + iVar13) * 4) = 0;
                            *(undefined4*)(lVar7 + (long)((piVar16[1] + (int)uVar24) * iVar14 + iVar13) * 4) = 0;
                            lVar8 = lVar8 + 1;
                            uVar9 = (ulong)(iVar13 + 1);
                        } while (lVar8 < *piVar16);
                    }
                    if (0 < piVar16[1]) {
                        lVar8 = 0;
                        puVar10 = puVar21;
                        iVar13 = iVar19;
                        do {
                            *puVar10 = 0;
                            *(undefined4*)(lVar7 + (long)(*piVar16 + iVar13) * 4) = 0;
                            lVar8 = lVar8 + 1;
                            iVar13 = iVar13 + iVar14;
                            puVar10 = puVar10 + lVar22;
                        } while (lVar8 < piVar16[1]);
                    }
                    uVar23 = uVar23 + 1;
                    uVar24 = (ulong)((int)uVar24 + 1);
                    iVar15 = iVar15 + iVar14;
                    iVar19 = iVar19 + 1;
                    puVar21 = puVar21 + 1;
                } while (uVar23 != uVar26);
                if (0 < iVar12) {
                    iVar14 = iVar6 + iVar12 * 2;
                    iVar11 = (iVar11 + iVar12 * 2) * iVar14 - iVar12;
                    lVar8 = lVar7 + ((long)iVar25 + -1) * lVar22 * 4;
                    iVar6 = iVar6 + iVar12;
                    uVar24 = 0;
                    lVar18 = lVar7;
                    do {
                        uVar24 = uVar24 + 1;
                        uVar23 = 0;
                        do {
                            *(undefined4*)(lVar18 + uVar23 * 4) = 0;
                            *(undefined4*)(lVar7 + (long)iVar6 * 4 + uVar23 * 4) = 0;
                            *(undefined4*)(lVar8 + uVar23 * 4) = 0;
                            *(undefined4*)(lVar7 + (long)iVar11 * 4 + uVar23 * 4) = 0;
                            uVar23 = uVar23 + 1;
                        } while (uVar26 != uVar23);
                        iVar11 = iVar11 - iVar14;
                        lVar8 = lVar8 + lVar22 * -4;
                        iVar6 = iVar6 + iVar14;
                        lVar18 = lVar18 + lVar22 * 4;
                    } while (uVar24 != uVar26);
                }
            }
        }
        return this;
    }

    // 0x100a0e0a0, 752 bytes, placed by class name
    // RGBAImage::AddOutline(unsigned int)
    RGBAImage* RGBAImage::AddOutline(uint param_1) {
        int iVar1;
        int iVar2;
        int iVar3;
        Array<unsigned char, BucketAllocatorEASTL>* this_00;
        Array<unsigned char, BucketAllocatorEASTL>* this_01;
        char* pcVar4;
        undefined1* puVar5;
        undefined4 in_EDX;
        ulong uVar6;
        long lVar7;
        long lVar8;
        int local_94;
        RGBAImage local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        PadImage(this, param_1, true);
        this_00 = (Array<unsigned char, BucketAllocatorEASTL>*)GetDevCredentialsOutputDirectory();
        RGBAImage(&local_90, this);
        this_01 = (Array<unsigned char, BucketAllocatorEASTL>*)local_90.GetDevCredentialsOutputDirectory();
        iVar1 = GetZ();
        if (0 < iVar1) {
            local_94 = 0;
            iVar1 = 0;
            do {
                iVar2 = GetX();
                if (0 < iVar2) {
                    lVar7 = (long)iVar1;
                    lVar8 = 0;
                    iVar2 = 0;
                    do {
                        uVar6 = lVar7 + lVar8 + 3;
                        pcVar4 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](this_01, uVar6);
                        if (*pcVar4 != '\0')
                            goto LAB_100a0e1c0;
                        if ((iVar2 == 0) || (pcVar4 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                                 this_01, (lVar7 + lVar8) - 1),
                                             *pcVar4 == '\0')) {
                            if (local_94 != 0) {
                                iVar3 = GetX();
                                pcVar4 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                    this_01, (long)(iVar1 + (int)lVar8 + iVar3 * -4 + 3));
                                if (*pcVar4 != '\0')
                                    goto LAB_100a0e2c0;
                            }
                            iVar3 = GetX();
                            if ((iVar2 < iVar3 + -1) &&
                                (pcVar4 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                     this_01, lVar7 + lVar8 + 7),
                                 *pcVar4 != '\0'))
                                goto LAB_100a0e2c0;
                            iVar3 = GetZ();
                            if (local_94 < iVar3 + -1) {
                                iVar3 = GetX();
                                pcVar4 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                    this_01, (long)(iVar1 + (int)lVar8 + 3 + iVar3 * 4));
                                if (*pcVar4 != '\0')
                                    goto LAB_100a0e2c0;
                            }
                        } else {
                        LAB_100a0e2c0:
                            puVar5 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](this_00,
                                                                                                         lVar7 + lVar8);
                            *puVar5 = (char)((uint)in_EDX >> 24);
                            puVar5 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                this_00, lVar7 + lVar8 + 1);
                            *puVar5 = (char)((uint)in_EDX >> 16);
                            puVar5 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                this_00, lVar7 + lVar8 + 2);
                            *puVar5 = (char)((uint)in_EDX >> 8);
                            puVar5 =
                                (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](this_00, uVar6);
                            *puVar5 = (char)in_EDX;
                        }
                    LAB_100a0e1c0:
                        iVar2 = iVar2 + 1;
                        iVar3 = GetX();
                        lVar8 = lVar8 + 4;
                    } while (iVar2 < iVar3);
                    iVar1 = iVar1 + (int)lVar8;
                }
                local_94 = local_94 + 1;
                iVar2 = GetZ();
            } while (local_94 < iVar2);
        }
        ~RGBAImage(&local_90);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100a0e390, 352 bytes, placed by class name
    // RGBAImage::AddShadow(unsigned int)
    RGBAImage* RGBAImage::AddShadow(uint param_1) {
        int iVar1;
        int iVar2;
        Array<unsigned char, BucketAllocatorEASTL>* this_00;
        char* pcVar3;
        undefined1* puVar4;
        undefined4 in_EDX;
        ulong uVar5;
        int local_38;

        PadImage(this, param_1, true);
        this_00 = (Array<unsigned char, BucketAllocatorEASTL>*)GetDevCredentialsOutputDirectory();
        local_38 = GetZ();
        local_38 = local_38 + -1;
        if (local_38 != 0) {
            do {
                iVar1 = GetX();
                while (iVar1 = iVar1 + -1, iVar1 != 0) {
                    iVar2 = GetX();
                    uVar5 = (ulong)(uint)((iVar2 * local_38 + iVar1) * 4);
                    pcVar3 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](this_00, uVar5 + 3);
                    if (*pcVar3 == '\0') {
                        iVar2 = GetX();
                        pcVar3 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                            this_00, (uVar5 - (long)(iVar2 << 2)) - 4 | 3);
                        if (*pcVar3 != '\0') {
                            puVar4 =
                                (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](this_00, uVar5);
                            *puVar4 = (char)((uint)in_EDX >> 24);
                            puVar4 =
                                (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](this_00, uVar5 | 1);
                            *puVar4 = (char)((uint)in_EDX >> 16);
                            puVar4 =
                                (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](this_00, uVar5 | 2);
                            *puVar4 = (char)((uint)in_EDX >> 8);
                            puVar4 =
                                (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](this_00, uVar5 + 3);
                            *puVar4 = (char)in_EDX;
                        }
                    }
                }
                local_38 = local_38 + -1;
            } while (local_38 != 0);
        }
        return this;
    }

    // 0x100a0e4f0, 208 bytes, placed by class name
    // RGBAImage::FlipVertical()
    void RGBAImage::FlipVertical() {
        undefined1* this_00;
        long lVar1;
        long lVar2;
        long lVar3;
        int iVar4;
        long lVar5;
        long lVar6;
        long lVar7;
        uint uVar8;
        int local_38;

        uVar8 = field_4;
        if (1 < (int)uVar8) {
            lVar5 = (long)(int)field_0 * 4;
            this_00 = &field_64;
            iVar4 = -1;
            lVar7 = 0;
            lVar6 = 0;
            do {
                local_38 = (int)lVar5;
                lVar1 = this_00->data();
                lVar2 = this_00->data();
                lVar3 = this_00->data();
                eastl::swap_ranges<unsigned char*, unsigned char*>((uchar*)(lVar1 + lVar7),
                                                                   (uchar*)(lVar2 + lVar5 + lVar7),
                                                                   (uchar*)((int)((uVar8 + iVar4) * local_38) + lVar3));
                lVar6 = lVar6 + 1;
                uVar8 = field_4;
                iVar4 = iVar4 + -1;
                lVar7 = lVar7 + lVar5;
            } while (lVar6 < (int)uVar8 / 2);
        }
    }

    // 0x100a0e610, 144 bytes, placed by class name
    // RGBAImage::FlipHorizontal()
    void RGBAImage::FlipHorizontal() {
        uint uVar1;
        undefined4 uVar2;
        long lVar3;
        int iVar4;
        undefined4* puVar5;
        undefined4* puVar6;
        bool bVar7;

        lVar3 = (&field_64)->data();
        if (0 < (int)field_4) {
            iVar4 = 0;
            do {
                uVar1 = field_0;
                if (1 < (long)(int)uVar1) {
                    puVar5 = (undefined4*)(lVar3 + (long)(int)(uVar1 * iVar4) * 4 + (long)(int)uVar1 * 4 + -4);
                    puVar6 = (undefined4*)(lVar3 + 4 + (long)(int)(uVar1 * iVar4) * 4);
                    do {
                        uVar2 = puVar6[-1];
                        puVar6[-1] = *puVar5;
                        *puVar5 = uVar2;
                        puVar5 = puVar5 + -1;
                        bVar7 = puVar6 < puVar5;
                        puVar6 = puVar6 + 1;
                    } while (bVar7);
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 < (int)field_4);
        }
    }

} // namespace jag
