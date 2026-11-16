// libs/oldscape/jagex3/dash3d/SoftwareModelLitRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class SoftwareModelLitRenderer {
    public:
        // virtual methods in vtable order
        virtual void ObjRender(ModelLit&, int, int, int, int, int, int, int);
        virtual void ObjRenderOrthog(ModelLit&, int, int, int, int, int, int, int, int);
        virtual void WorldRender(ModelSource&, int, int, int, int, int, int, int, int, long long, int,
                                 RenderableOverlay&&, bool);
        virtual UploadModel(ModelLit&);
        DestroyModel(ModelLit&);
        SoftwareModelLitRenderer(SoftwarePix3D*);
        void Render2(ModelLitImpl&, bool, bool, long long);
        void Render3(ModelLitImpl&, int);
        void Render3ZClip(ModelLitImpl&, int);
        bool FastInsideTriangle(int, int, int, int, int, int, int, int);

        // data members, from how the methods use this: 6437232 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[6437216];
        SoftwarePix3D* field_6437224; // offset 6437224
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SoftwareModelLitRenderer::UploadModel(ModelLit&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SoftwareModelLitRenderer::DestroyModel(ModelLit&);

    // 0x1002f4f70, 32 bytes, base-object constructor, placed by class name and debug map
    // SoftwareModelLitRenderer::SoftwareModelLitRenderer(SoftwarePix3D*)
    void SoftwareModelLitRenderer::SoftwareModelLitRenderer(SoftwarePix3D* param_1) {
        new (this) ModelLitRenderer<SoftwarePix3D>(param_1);
        field_0 = &PTR_ObjRender_100efac30;
    }

    // 0x1002f51d0, 16 bytes, complete-object constructor, placed by class name
    // SoftwareModelLitRenderer::SoftwareModelLitRenderer(SoftwarePix3D*): jumps straight to the base-object constructor

    // 0x1002f51e0, 928 bytes, placed by class name
    // SoftwareModelLitRenderer::ObjRender(ModelLit&, int, int, int, int, int, int, int)
    void SoftwareModelLitRenderer::ObjRender(ModelLit* param_1, int param_2, int param_3, int param_4, int param_5,
                                             int param_6, int param_7, int param_8) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        SoftwarePix3D* pSVar11;
        int iVar13;
        array<int, 2048ul>* this_00;
        array<int, 2048ul>* this_01;
        int* piVar14;
        int iVar15;
        int iVar16;
        ulong uVar17;
        int iVar18;

        if ((**(code**)(param_1->field_0 + 56))(param_1) != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("ml.IsForRSeven() == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "SoftwareModelLitRenderer.cpp",
                      18, (char*)0);
        }
        this_00 = (array<int, 2048ul>*)Pix3D::GetSinTable();
        this_01 = (array<int, 2048ul>*)Pix3D::GetCosTable();
        if (1 < *(int*)((long)&param_1[29].field_8 + 3) - 1U) {
            param_1->CalcBoundingSphere();
        }
        iVar1 = field_6437224->field_20;
        iVar2 = *(int*)&field_6437224->field_24;
        piVar14 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)param_2);
        iVar3 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[](this_01, (long)param_2);
        iVar4 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)param_3);
        iVar5 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[](this_01, (long)param_3);
        iVar6 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)param_4);
        iVar7 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[](this_01, (long)param_4);
        iVar8 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)param_5);
        iVar9 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[](this_01, (long)param_5);
        if (0 < *(int*)((long)&param_1[1].field_0 + 3)) {
            iVar10 = *piVar14;
            uVar17 = 0;
            do {
                piVar14 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)((long)&param_1[1].field_0 + 7), uVar17);
                iVar18 = *piVar14;
                piVar14 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)((long)&param_1[2].field_8 + 6), uVar17);
                iVar16 = *piVar14;
                piVar14 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)((long)&param_1[4].field_0 + 4), uVar17);
                iVar15 = iVar18;
                if (param_4 != 0) {
                    iVar15 = iVar18 * iVar8 + iVar16 * iVar7 >> 16;
                    iVar16 = iVar16 * iVar8 - iVar18 * iVar7 >> 16;
                }
                iVar18 = *piVar14;
                iVar13 = iVar16;
                if (param_2 != 0) {
                    iVar13 = iVar16 * iVar4 - iVar18 * iVar3 >> 16;
                    iVar18 = iVar18 * iVar4 + iVar16 * iVar3 >> 16;
                }
                iVar16 = iVar15;
                if (param_3 != 0) {
                    iVar16 = iVar15 * iVar6 + iVar18 * iVar5 >> 16;
                    iVar18 = iVar18 * iVar6 - iVar15 * iVar5 >> 16;
                }
                iVar15 = (iVar13 + param_7) * iVar10 - (iVar18 + param_8) * iVar9 >> 16;
                iVar13 = (iVar18 + param_8) * iVar10 + (iVar13 + param_7) * iVar9 >> 16;
                piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_65008, uVar17);
                *piVar14 = iVar13 - (iVar10 * param_8 + iVar9 * param_7 >> 16);
                pSVar11 = field_6437224;
                iVar18 = *(int*)&pSVar11->field_16;
                piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_13008, uVar17);
                *piVar14 = (iVar18 * (iVar16 + param_6)) / iVar13 + iVar1;
                iVar18 = *(int*)&pSVar11->field_16;
                piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_39008, uVar17);
                *piVar14 = (iVar18 * iVar15) / iVar13 + iVar2;
                if (0 < *(int*)((long)&param_1[18].field_8 + 2)) {
                    piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_91008, uVar17);
                    *piVar14 = iVar16 + param_6;
                    piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_117008, uVar17);
                    *piVar14 = iVar15;
                    piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_143008, uVar17);
                    *piVar14 = iVar13;
                }
                uVar17 = uVar17 + 1;
            } while ((long)uVar17 < (long)*(int*)((long)&param_1[1].field_0 + 3));
        }
        Render2(this, (ModelLitImpl*)param_1, false, false, 0);
    }

    // 0x1002f55a0, 3360 bytes, placed by class name
    // SoftwareModelLitRenderer::Render2(ModelLitImpl&, bool, bool, long long)
    void SoftwareModelLitRenderer::Render2(ModelLitImpl* param_1, bool param_2, bool param_3, longlong param_4) {
        undefined1* this_00;
        undefined1* puVar1;
        undefined1* puVar2;
        undefined1* puVar3;
        undefined1* puVar4;
        undefined1* this_01;
        ushort uVar5;
        uint uVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        bool bVar12;
        char cVar13;
        undefined2* puVar14;
        undefined1* this_02;
        int* piVar15;
        undefined1* puVar16;
        undefined8 uVar17;
        array<unsigned short, 512ul>* paVar18;
        ushort* puVar19;
        undefined4* puVar20;
        Array<signed char, eastl::allocator>* this_03;
        char* pcVar21;
        array<int, 2000ul>* paVar22;
        uint* puVar23;
        array<int, 2000ul>* paVar24;
        int iVar25;
        ulong uVar26;
        array<bool, 6500ul>* paVar27;
        int iVar28;
        ulong uVar29;
        ushort uVar30;
        ulong uVar31;
        int iVar32;
        ulong uVar33;
        int local_88;
        int local_78;
        int local_60;
        array<int, 2000ul>* local_40;

        bVar12 = param_1->PointerRelease(param_1);
        if (bVar12) {
            /* WARNING: Subroutine does not return */
            LogAssert("ml.IsForRSeven() == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "SoftwareModelLitRenderer.cpp",
                      394, (char*)0);
        }
        uVar6 = param_1->field_516;
        if (5999 < (int)uVar6) {
            return;
        }
        this_00 = &field_169008;
        if (0 < (int)uVar6) {
            uVar26 = 0;
            do {
                puVar14 = (undefined2*)std::array<unsigned short, 6000ul>::operator[](
                    (array<unsigned short, 6000ul>*)this_00, uVar26);
                *puVar14 = 0;
                uVar26 = uVar26 + 1;
            } while (uVar6 != uVar26);
        }
        if (0 < param_1->field_96) {
            if (6500 < param_1->field_96) {
                /* WARNING: Subroutine does not return */
                LogAssert("m.m_numFaces <= Model::MAX_VERTS",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                          "dash3d/SoftwareModelLitRenderer.cpp",
                          421, (char*)0);
            }
            if ((short)param_1->field_96 != 0) {
                puVar1 = &field_13008;
                puVar2 = &field_39008;
                puVar3 = &field_65008;
                puVar4 = &field_91008;
                this_01 = &field_117008;
                this_02 = &field_143008;
                uVar30 = 0;
                do {
                    uVar26 = (ulong)uVar30;
                    piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&param_1->field_224, uVar26);
                    if (*piVar15 != -2) {
                        piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&param_1->field_104, uVar26);
                        uVar33 = (ulong)*piVar15;
                        piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&param_1->field_128, uVar26);
                        uVar31 = (ulong)*piVar15;
                        piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&param_1->field_152, uVar26);
                        uVar29 = (ulong)*piVar15;
                        piVar15 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar1, uVar33);
                        iVar25 = *piVar15;
                        piVar15 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar1, uVar31);
                        iVar32 = *piVar15;
                        piVar15 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar1, uVar29);
                        iVar28 = *piVar15;
                        if ((!param_2) || (((iVar25 != -5000 && (iVar32 != -5000)) && (iVar28 != -5000)))) {
                            if (param_3 != false) {
                                piVar15 =
                                    (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar2, uVar33);
                                iVar7 = *piVar15;
                                piVar15 =
                                    (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar2, uVar31);
                                iVar8 = *piVar15;
                                piVar15 =
                                    (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar2, uVar29);
                                cVar13 = MousePickingHelper::IsMouseRoughlyInsideTriangle(iVar7, iVar8, *piVar15,
                                                                                          iVar25, iVar32, iVar28, 5);
                                if (cVar13 != '\0') {
                                    MousePickingHelper::AddPickingEntity(param_4);
                                    param_3 = false;
                                }
                            }
                            piVar15 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar2, uVar29);
                            iVar7 = *piVar15;
                            piVar15 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar2, uVar31);
                            iVar8 = *piVar15;
                            piVar15 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar2, uVar33);
                            if (0 < (iVar32 - iVar28) * (*piVar15 - iVar8) + (iVar7 - iVar8) * (iVar25 - iVar32)) {
                                puVar16 = (undefined1*)std::array<bool, 6500ul>::operator[](
                                    (array<bool, 6500ul>*)&field_6508, uVar26);
                                *puVar16 = 0;
                                bVar12 = true;
                                paVar27 = (array<bool, 6500ul>*)&field_8;
                                if (((-1 < iVar25) && (-1 < iVar32)) && (-1 < iVar28)) {
                                    iVar7 = field_6437224->field_28;
                                    bVar12 = iVar7 < iVar28 || (iVar7 < iVar32 || iVar7 < iVar25);
                                }
                            LAB_1002f5ad0:
                                uVar17 = std::array<bool, 6500ul>::operator[](paVar27, uVar26);
                                *(bool*)uVar17 = bVar12;
                                piVar15 =
                                    (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar3, uVar33);
                                iVar25 = *piVar15;
                                piVar15 =
                                    (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar3, uVar31);
                                iVar32 = *piVar15;
                                piVar15 =
                                    (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar3, uVar29);
                                uVar26 = (long)((iVar25 + iVar32 + *piVar15) / 3) + (long)param_1->field_520;
                                paVar18 = (array<unsigned short, 512ul>*)
                                    std::array<std::array<unsigned short, 512ul>, 6000ul>::operator[](
                                        (array<std::array<unsigned short, 512ul>, 6000ul>*)&field_181008, uVar26);
                                puVar19 = (ushort*)std::array<unsigned short, 6000ul>::operator[](
                                    (array<unsigned short, 6000ul>*)this_00, uVar26);
                                uVar5 = *puVar19;
                                *puVar19 = uVar5 + 1;
                                puVar19 = (ushort*)std::array<unsigned short, 512ul>::operator[](paVar18, (ulong)uVar5);
                                *puVar19 = uVar30;
                            }
                        } else {
                            piVar15 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar4, uVar33);
                            iVar25 = *piVar15;
                            piVar15 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar4, uVar31);
                            iVar32 = *piVar15;
                            piVar15 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar4, uVar29);
                            iVar28 = *piVar15;
                            piVar15 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)this_01, uVar33);
                            iVar7 = *piVar15;
                            piVar15 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)this_01, uVar31);
                            iVar8 = *piVar15;
                            piVar15 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)this_01, uVar29);
                            iVar9 = *piVar15;
                            piVar15 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)this_02, uVar33);
                            iVar10 = *piVar15;
                            piVar15 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)this_02, uVar31);
                            iVar11 = *piVar15;
                            piVar15 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)this_02, uVar29);
                            bVar12 = true;
                            paVar27 = (array<bool, 6500ul>*)&field_6508;
                            if (0 <
                                ((iVar9 - iVar8) * (iVar25 - iVar32) - (iVar7 - iVar8) * (iVar28 - iVar32)) * iVar11 +
                                    ((iVar10 - iVar11) * (iVar28 - iVar32) - (*piVar15 - iVar11) * (iVar25 - iVar32)) *
                                        iVar8 +
                                    ((*piVar15 - iVar11) * (iVar7 - iVar8) - (iVar10 - iVar11) * (iVar9 - iVar8)) *
                                        iVar32)
                                goto LAB_1002f5ad0;
                        }
                    }
                    uVar30 = uVar30 + 1;
                } while (uVar30 < (ushort)param_1->field_96);
            }
        }
        bVar12 = operator==((shared_ptr*)param_1->field_248, (_func_decltype_nullptr*)0);
        if (!bVar12) {
            puVar1 = &field_6325008;
            puVar2 = &field_6437056;
            uVar26 = 0;
            do {
                puVar20 = (undefined4*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, uVar26);
                *puVar20 = 0;
                puVar20 = (undefined4*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar2, uVar26);
                *puVar20 = 0;
                uVar26 = uVar26 + 1;
            } while (uVar26 != 12);
            puVar3 = &field_6325056;
            puVar4 = &field_6429056;
            local_40 = (array<int, 2000ul>*)&field_6421056;
            if (0 < (long)param_1->field_516) {
                uVar26 = (long)param_1->field_516;
                do {
                    uVar29 = uVar26 - 1;
                    puVar19 = (ushort*)std::array<unsigned short, 6000ul>::operator[](
                        (array<unsigned short, 6000ul>*)this_00, uVar29);
                    uVar30 = *puVar19;
                    if ((ulong)uVar30 != 0) {
                        paVar18 = (array<unsigned short, 512ul>*)
                            std::array<std::array<unsigned short, 512ul>, 6000ul>::operator[](
                                (array<std::array<unsigned short, 512ul>, 6000ul>*)&field_181008, uVar29);
                        uVar31 = 0;
                        do {
                            puVar19 = (ushort*)std::array<unsigned short, 512ul>::operator[](paVar18, uVar31);
                            uVar5 = *puVar19;
                            this_03 = (Array<signed char, eastl::allocator>*)
                                shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<signed char, eastl::allocator>>*)param_1->field_248);
                            pcVar21 = (char*)Array<signed char, eastl::allocator>::operator[](this_03, (ulong)uVar5);
                            cVar13 = *pcVar21;
                            uVar33 = (ulong)cVar13;
                            piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, uVar33);
                            iVar25 = *piVar15;
                            *piVar15 = iVar25 + 1;
                            paVar22 = (array<int, 2000ul>*)std::array<std::array<int, 2000ul>, 12ul>::operator[](
                                (array<std::array<int, 2000ul>, 12ul>*)puVar3, uVar33);
                            puVar23 = (uint*)std::array<int, 2000ul>::operator[](paVar22, (long)iVar25);
                            *puVar23 = (uint)uVar5;
                            if ((long)uVar33 < 10) {
                                piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar2, uVar33);
                                *piVar15 = *piVar15 + (int)uVar29;
                            } else {
                                if (cVar13 == '\n') {
                                    paVar22 = local_40;
                                } else {
                                    paVar22 = (array<int, 2000ul>*)puVar4;
                                }
                                piVar15 = (int*)std::array<int, 2000ul>::operator[](paVar22, (long)iVar25);
                                *piVar15 = (int)uVar29;
                            }
                            uVar31 = uVar31 + 1;
                        } while (uVar30 != uVar31);
                    }
                    bVar12 = 1 < (long)uVar26;
                    uVar26 = uVar29;
                } while (bVar12);
            }
            piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, 1);
            iVar25 = *piVar15;
            if ((iVar25 < 1) &&
                (piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, 2), *piVar15 < 1)) {
                local_78 = 0;
            } else {
                piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar2, 1);
                iVar32 = *piVar15;
                piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar2, 2);
                iVar28 = *piVar15;
                piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, 2);
                local_78 = (iVar32 + iVar28) / (iVar25 + *piVar15);
            }
            piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, 3);
            iVar25 = *piVar15;
            if ((iVar25 < 1) &&
                (piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, 4), *piVar15 < 1)) {
                local_88 = 0;
            } else {
                piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar2, 3);
                iVar32 = *piVar15;
                piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar2, 4);
                iVar28 = *piVar15;
                piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, 4);
                local_88 = (iVar32 + iVar28) / (iVar25 + *piVar15);
            }
            piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, 6);
            iVar25 = *piVar15;
            if ((iVar25 < 1) &&
                (piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, 8), *piVar15 < 1)) {
                local_60 = 0;
            } else {
                piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar2, 6);
                iVar32 = *piVar15;
                piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar2, 8);
                iVar28 = *piVar15;
                piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, 8);
                local_60 = (iVar32 + iVar28) / (iVar25 + *piVar15);
            }
            piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, 10);
            iVar25 = *piVar15;
            paVar22 = (array<int, 2000ul>*)std::array<std::array<int, 2000ul>, 12ul>::operator[](
                (array<std::array<int, 2000ul>, 12ul>*)puVar3, 10);
            if (iVar25 == 0) {
                piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, 11);
                iVar25 = *piVar15;
                paVar22 = (array<int, 2000ul>*)std::array<std::array<int, 2000ul>, 12ul>::operator[](
                    (array<std::array<int, 2000ul>, 12ul>*)puVar3, 11);
                local_40 = (array<int, 2000ul>*)puVar4;
            }
            if (iVar25 < 1) {
                iVar32 = -1000;
            } else {
                piVar15 = (int*)std::array<int, 2000ul>::operator[](local_40, 0);
                iVar32 = *piVar15;
            }
            uVar26 = 0;
            iVar28 = 0;
            do {
                if (uVar26 == 0) {
                    while (local_78 < iVar32) {
                        uVar29 = (ulong)iVar28;
                        iVar28 = iVar28 + 1;
                        piVar15 = (int*)std::array<int, 2000ul>::operator[](paVar22, uVar29);
                        Render3(this, param_1, *piVar15);
                        if (iVar28 == iVar25) {
                            paVar24 = (array<int, 2000ul>*)std::array<std::array<int, 2000ul>, 12ul>::operator[](
                                (array<std::array<int, 2000ul>, 12ul>*)puVar3, 11);
                            if (paVar22 != paVar24) {
                                piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, 11);
                                iVar25 = *piVar15;
                                iVar28 = 0;
                                paVar22 = paVar24;
                                local_40 = (array<int, 2000ul>*)puVar4;
                            }
                        }
                        iVar32 = -1000;
                        if (iVar28 < iVar25) {
                            piVar15 = (int*)std::array<int, 2000ul>::operator[](local_40, (long)iVar28);
                            iVar32 = *piVar15;
                        }
                    }
                }
                while ((uVar26 == 3 && (local_88 < iVar32))) {
                    uVar29 = (ulong)iVar28;
                    iVar28 = iVar28 + 1;
                    piVar15 = (int*)std::array<int, 2000ul>::operator[](paVar22, uVar29);
                    Render3(this, param_1, *piVar15);
                    if (iVar28 == iVar25) {
                        paVar24 = (array<int, 2000ul>*)std::array<std::array<int, 2000ul>, 12ul>::operator[](
                            (array<std::array<int, 2000ul>, 12ul>*)puVar3, 11);
                        if (paVar22 != paVar24) {
                            piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, 11);
                            iVar25 = *piVar15;
                            iVar28 = 0;
                            paVar22 = paVar24;
                            local_40 = (array<int, 2000ul>*)puVar4;
                        }
                    }
                    iVar32 = -1000;
                    if (iVar28 < iVar25) {
                        piVar15 = (int*)std::array<int, 2000ul>::operator[](local_40, (long)iVar28);
                        iVar32 = *piVar15;
                    }
                }
                while ((uVar26 == 5 && (local_60 < iVar32))) {
                    uVar29 = (ulong)iVar28;
                    iVar28 = iVar28 + 1;
                    piVar15 = (int*)std::array<int, 2000ul>::operator[](paVar22, uVar29);
                    Render3(this, param_1, *piVar15);
                    if (iVar28 == iVar25) {
                        paVar24 = (array<int, 2000ul>*)std::array<std::array<int, 2000ul>, 12ul>::operator[](
                            (array<std::array<int, 2000ul>, 12ul>*)puVar3, 11);
                        if (paVar22 != paVar24) {
                            piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, 11);
                            iVar25 = *piVar15;
                            iVar28 = 0;
                            paVar22 = paVar24;
                            local_40 = (array<int, 2000ul>*)puVar4;
                        }
                    }
                    iVar32 = -1000;
                    if (iVar28 < iVar25) {
                        piVar15 = (int*)std::array<int, 2000ul>::operator[](local_40, (long)iVar28);
                        iVar32 = *piVar15;
                    }
                }
                puVar23 = (uint*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, uVar26);
                uVar6 = *puVar23;
                paVar24 = (array<int, 2000ul>*)std::array<std::array<int, 2000ul>, 12ul>::operator[](
                    (array<std::array<int, 2000ul>, 12ul>*)puVar3, uVar26);
                if (0 < (int)uVar6) {
                    uVar29 = 0;
                    do {
                        piVar15 = (int*)std::array<int, 2000ul>::operator[](paVar24, uVar29);
                        Render3(this, param_1, *piVar15);
                        uVar29 = uVar29 + 1;
                    } while (uVar6 != uVar29);
                }
                uVar26 = uVar26 + 1;
            } while (uVar26 != 10);
            while (iVar32 != -1000) {
                uVar26 = (ulong)iVar28;
                iVar28 = iVar28 + 1;
                piVar15 = (int*)std::array<int, 2000ul>::operator[](paVar22, uVar26);
                Render3(this, param_1, *piVar15);
                if (iVar28 == iVar25) {
                    paVar24 = (array<int, 2000ul>*)std::array<std::array<int, 2000ul>, 12ul>::operator[](
                        (array<std::array<int, 2000ul>, 12ul>*)puVar3, 11);
                    if (paVar22 != paVar24) {
                        piVar15 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)puVar1, 11);
                        iVar25 = *piVar15;
                        iVar28 = 0;
                        paVar22 = paVar24;
                        local_40 = (array<int, 2000ul>*)puVar4;
                    }
                }
                iVar32 = -1000;
                if (iVar28 < iVar25) {
                    piVar15 = (int*)std::array<int, 2000ul>::operator[](local_40, (long)iVar28);
                    iVar32 = *piVar15;
                }
            }
            return;
        }
        if ((long)param_1->field_516 < 1) {
            return;
        }
        uVar26 = (long)param_1->field_516;
        do {
            uVar29 = uVar26 - 1;
            puVar19 = (ushort*)std::array<unsigned short, 6000ul>::operator[]((array<unsigned short, 6000ul>*)this_00,
                                                                              uVar29);
            uVar30 = *puVar19;
            if ((ulong)uVar30 != 0) {
                paVar18 =
                    (array<unsigned short, 512ul>*)std::array<std::array<unsigned short, 512ul>, 6000ul>::operator[](
                        (array<std::array<unsigned short, 512ul>, 6000ul>*)&field_181008, uVar29);
                uVar31 = 0;
                do {
                    puVar19 = (ushort*)std::array<unsigned short, 512ul>::operator[](paVar18, uVar31);
                    Render3(this, param_1, (uint)*puVar19);
                    uVar31 = uVar31 + 1;
                } while (uVar30 != uVar31);
            }
            bVar12 = 1 < (long)uVar26;
            uVar26 = uVar29;
        } while (bVar12);
    }

    // 0x1002f62c0, 928 bytes, placed by class name
    // SoftwareModelLitRenderer::ObjRenderOrthog(ModelLit&, int, int, int, int, int, int, int, int)
    void SoftwareModelLitRenderer::ObjRenderOrthog(ModelLit* param_1, int param_2, int param_3, int param_4,
                                                   int param_5, int param_6, int param_7, int param_8, int param_9) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        SoftwarePix3D* pSVar11;
        int iVar13;
        array<int, 2048ul>* this_00;
        array<int, 2048ul>* this_01;
        int* piVar14;
        int iVar15;
        int iVar16;
        ulong uVar17;
        int iVar18;

        if ((**(code**)(param_1->field_0 + 56))(param_1) != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("ml.IsForRSeven() == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "SoftwareModelLitRenderer.cpp",
                      92, (char*)0);
        }
        this_00 = (array<int, 2048ul>*)Pix3D::GetSinTable();
        this_01 = (array<int, 2048ul>*)Pix3D::GetCosTable();
        if (1 < *(int*)((long)&param_1[29].field_8 + 3) - 1U) {
            param_1->CalcBoundingSphere();
        }
        iVar1 = field_6437224->field_20;
        iVar2 = *(int*)&field_6437224->field_24;
        piVar14 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)param_2);
        iVar3 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[](this_01, (long)param_2);
        iVar4 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)param_3);
        iVar5 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[](this_01, (long)param_3);
        iVar6 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)param_4);
        iVar7 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[](this_01, (long)param_4);
        iVar8 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)param_5);
        iVar9 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[](this_01, (long)param_5);
        if (0 < *(int*)((long)&param_1[1].field_0 + 3)) {
            iVar10 = *piVar14;
            uVar17 = 0;
            do {
                piVar14 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)((long)&param_1[1].field_0 + 7), uVar17);
                iVar18 = *piVar14;
                piVar14 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)((long)&param_1[2].field_8 + 6), uVar17);
                iVar16 = *piVar14;
                piVar14 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)((long)&param_1[4].field_0 + 4), uVar17);
                iVar15 = iVar18;
                if (param_4 != 0) {
                    iVar15 = iVar18 * iVar8 + iVar16 * iVar7 >> 16;
                    iVar16 = iVar16 * iVar8 - iVar18 * iVar7 >> 16;
                }
                iVar18 = *piVar14;
                iVar13 = iVar16;
                if (param_2 != 0) {
                    iVar13 = iVar16 * iVar4 - iVar18 * iVar3 >> 16;
                    iVar18 = iVar18 * iVar4 + iVar16 * iVar3 >> 16;
                }
                iVar16 = iVar15;
                if (param_3 != 0) {
                    iVar16 = iVar15 * iVar6 + iVar18 * iVar5 >> 16;
                    iVar18 = iVar18 * iVar6 - iVar15 * iVar5 >> 16;
                }
                iVar15 = (iVar13 + param_7) * iVar10 - (iVar18 + param_8) * iVar9 >> 16;
                iVar13 = (iVar18 + param_8) * iVar10 + (iVar13 + param_7) * iVar9 >> 16;
                piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_65008, uVar17);
                *piVar14 = iVar13 - (iVar10 * param_8 + iVar9 * param_7 >> 16);
                pSVar11 = field_6437224;
                iVar18 = *(int*)&pSVar11->field_16;
                piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_13008, uVar17);
                *piVar14 = (iVar18 * (iVar16 + param_6)) / param_9 + iVar1;
                iVar18 = *(int*)&pSVar11->field_16;
                piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_39008, uVar17);
                *piVar14 = (iVar18 * iVar15) / param_9 + iVar2;
                if (0 < *(int*)((long)&param_1[18].field_8 + 2)) {
                    piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_91008, uVar17);
                    *piVar14 = iVar16 + param_6;
                    piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_117008, uVar17);
                    *piVar14 = iVar15;
                    piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_143008, uVar17);
                    *piVar14 = iVar13;
                }
                uVar17 = uVar17 + 1;
            } while ((long)uVar17 < (long)*(int*)((long)&param_1[1].field_0 + 3));
        }
        Render2(this, (ModelLitImpl*)param_1, false, false, 0);
    }

    // 0x1002f6660, 1648 bytes, placed by class name
    // SoftwareModelLitRenderer::WorldRender(ModelSource&, int, int, int, int, int, int, int, int, long long, int, RenderableOverlay&&, bool)
    void SoftwareModelLitRenderer::WorldRender(ModelSource* param_1, int param_2, int param_3, int param_4, int param_5,
                                               int param_6, int param_7, int param_8, int param_9, longlong param_10,
                                               int param_11, RenderableOverlay* param_12, bool param_13) {
        undefined1* puVar1;
        undefined1* this_00;
        undefined1* this_01;
        SoftwarePix3D* pSVar2;
        bool bVar3;
        undefined1 uVar5;
        byte bVar6;
        int iVar7;
        int iVar8;
        long* plVar9;
        ModelLitImpl* this_02;
        int* piVar10;
        undefined1* this_03;
        int iVar11;
        ulong uVar12;
        uint uVar13;
        int iVar14;
        array<int, 6500ul>* this_04;
        int iVar15;
        array<int, 2048ul>* paVar16;
        int iVar17;
        int iVar18;
        int iVar19;
        shared_ptr local_d0;
        undefined4 local_bc;
        array<int, 2048ul>* local_b8;
        Array<int, eastl::allocator>* local_b0;
        Array<int, eastl::allocator>* local_a8;
        array<int, 6500ul>* local_a0;
        array<int, 2048ul>* local_98;
        ulong local_90;
        Array<int, eastl::allocator>* local_88;
        array<int, 6500ul>* local_80;
        int local_74;
        undefined8 local_70;
        int local_5c;
        ModelLitImpl* local_58;
        SoftwareModelLitRenderer* local_50;
        int local_40;
        int local_3c;
        int local_38;
        bool local_31;

        local_50 = this;
        local_98 = (array<int, 2048ul>*)Pix3D::GetSinTable();
        local_b8 = (array<int, 2048ul>*)Pix3D::GetCosTable();
        (**(code**)(param_1->field_0 + 16))(&local_d0, param_1, param_11);
        bVar3 = operator==(&local_d0, (_func_decltype_nullptr*)0);
        if (bVar3)
            goto LAB_1002f6c83;
        plVar9 = (long*)shared_ptr<ModelLit>::operator->((shared_ptr<ModelLit>*)&local_d0);
        if ((**(code**)(*plVar9 + 56))(plVar9) != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!mPtr->IsForRSeven()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "SoftwareModelLitRenderer.cpp",
                      173, (char*)0);
        }
        this_02 = (ModelLitImpl*)shared_ptr<ModelLit>::operator*((shared_ptr<ModelLit>*)&local_d0);
        if (this_02->field_504 != 1) {
            this_02->CalcBoundingCylinder();
        }
        this_02->CalcAABB(param_2);
        iVar15 = param_9 * param_6 - param_7 * param_5 >> 16;
        uVar13 = iVar15 * param_4 + param_8 * param_3 >> 16;
        local_90 = (ulong)uVar13;
        iVar19 = this_02->m_radiusCylinder * param_4 >> 16;
        iVar18 = iVar19 + uVar13;
        local_58 = this_02;
        if (iVar18 < 51)
            goto LAB_1002f6c83;
        iVar7 = local_50->field_6437224->GetRenderDepth();
        if (iVar7 <= (int)local_90)
            goto LAB_1002f6c83;
        local_5c = param_7 * param_6 + param_9 * param_5;
        iVar7 = local_58->m_radiusCylinder;
        pSVar2 = local_50->field_6437224;
        iVar11 = *(int*)&pSVar2->field_16;
        iVar14 = ((local_5c >> 16) - iVar7) * iVar11;
        iVar8 = iVar14 / iVar18;
        local_b0 = (Array<int, eastl::allocator>*)CONCAT44(local_b0._4_4_, iVar8);
        if (*(int*)((long)&pSVar2->field_36 + 4) <= iVar8)
            goto LAB_1002f6c83;
        iVar17 = ((local_5c >> 16) + iVar7) * iVar11;
        iVar8 = iVar17 / iVar18;
        local_a8 = (Array<int, eastl::allocator>*)CONCAT44(local_a8._4_4_, iVar8);
        if (iVar8 <= *(int*)&pSVar2->field_36)
            goto LAB_1002f6c83;
        iVar8 = param_8 * param_4 - iVar15 * param_3;
        local_88 = (Array<int, eastl::allocator>*)CONCAT44(local_88._4_4_, iVar8);
        iVar8 = iVar8 >> 16;
        iVar7 = iVar7 * param_3 >> 16;
        iVar15 = (iVar7 + iVar8) * iVar11;
        local_a0 = (array<int, 6500ul>*)CONCAT44(local_a0._4_4_, iVar15);
        iVar15 = iVar15 / iVar18;
        if (iVar15 <= *(int*)&pSVar2->field_44)
            goto LAB_1002f6c83;
        uVar13 = (iVar8 - (iVar7 + (local_58->field_8 * param_4 >> 16))) * iVar11;
        iVar18 = (int)uVar13 / iVar18;
        if (*(int*)((long)&pSVar2->field_44 + 4) <= iVar18)
            goto LAB_1002f6c83;
        local_31 = true;
        if (50 < (int)local_90 - ((local_58->field_8 * param_3 >> 16) + iVar19)) {
            local_31 = 0 < local_58->field_316;
        }
        local_70 = (ulong)uVar13;
        local_38 = iVar18;
        local_40 = MousePickingHelper::GetMouseScreenX();
        iVar18 = param_2;
        local_3c = MousePickingHelper::GetMouseScreenY();
        uVar5 = MousePickingHelper::IsMousePickingEnabled();
        local_80 = (array<int, 6500ul>*)CONCAT71(local_80._1_7_, uVar5);
        bVar6 = MousePickingHelper::IsActiveEntityTypecode(param_10);
        local_74 = 0;
        local_bc = 0;
        if ((bVar6 & (byte)local_80) == 1) {
            if (MousePickingHelper::m_useAABBMouseCheck == '\0') {
                iVar19 = (int)local_90 - iVar19;
                iVar7 = 50;
                if (50 < iVar19) {
                    iVar7 = iVar19;
                }
                if (local_5c < 65536) {
                    iVar14 = iVar14 / iVar7;
                    iVar19 = (int)local_a8;
                } else {
                    iVar14 = (int)local_b0;
                    iVar19 = iVar17 / iVar7;
                }
                if ((int)local_88 < 65536) {
                    local_38 =
                        (int)((long)((ulong)(uint)((int)local_70 >> 31) << 32 | local_70 & 4294967295) / (long)iVar7);
                } else {
                    iVar15 = (int)local_a0 / iVar7;
                }
                iVar7 = local_40 - local_50->field_6437224->field_20;
                uVar12 = 0;
                local_bc = 0;
                if ((((iVar14 < iVar7) && (iVar7 < iVar19)) &&
                     (iVar19 = local_3c - *(int*)&local_50->field_6437224->field_24, local_38 < iVar19)) &&
                    (iVar19 < iVar15))
                    goto LAB_1002f69a7;
            } else {
                uVar12 = (ulong)(uint)param_8;
                bVar3 = MousePickingHelper::IsMouseIntersectingModelAABB<NXTPix3D>(
                    local_58, iVar18, param_7, param_8, param_9, (ModelLitRenderer*)local_50);
                if (bVar3) {
                LAB_1002f69a7:
                    if (local_58->field_16[0] == '\0') {
                        local_bc = (undefined4)CONCAT71((int7)(uVar12 >> 8), 1);
                        goto LAB_1002f69c0;
                    }
                    MousePickingHelper::AddPickingEntity(param_10);
                }
                local_bc = 0;
            }
        }
    LAB_1002f69c0:
        local_40 = local_50->field_6437224->field_20;
        local_3c = *(int*)&local_50->field_6437224->field_24;
        local_38 = 0;
        if (iVar18 != 0) {
            piVar10 = (int*)std::array<int, 2048ul>::operator[](local_98, (long)iVar18);
            local_74 = *piVar10;
            piVar10 = (int*)std::array<int, 2048ul>::operator[](local_b8, (long)iVar18);
            local_38 = *piVar10;
        }
        if (local_58->field_20 < 1) {
            local_70 = (ulong)local_70._4_4_ << 32;
        } else {
            local_b0 = (Array<int, eastl::allocator>*)&local_58->field_24;
            local_a8 = (Array<int, eastl::allocator>*)&local_58->field_48;
            local_88 = (Array<int, eastl::allocator>*)&local_58->field_72;
            local_a0 = (array<int, 6500ul>*)&local_50->field_65008;
            local_80 = (array<int, 6500ul>*)&local_50->field_13008;
            puVar1 = &local_50->field_39008;
            this_00 = &local_50->field_91008;
            this_01 = &local_50->field_117008;
            this_03 = &local_50->field_143008;
            paVar16 = (array<int, 2048ul>*)0;
            local_70 = (ulong)local_70._4_4_ << 32;
            do {
                piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_b0, (ulong)paVar16);
                iVar19 = *piVar10;
                piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_a8, (ulong)paVar16);
                iVar15 = *piVar10;
                local_b8 = paVar16;
                piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_88, (ulong)paVar16);
                paVar16 = local_b8;
                iVar7 = *piVar10;
                iVar11 = iVar19;
                if (iVar18 != 0) {
                    iVar11 = iVar19 * local_38 + iVar7 * local_74 >> 16;
                    iVar7 = iVar7 * local_38 - iVar19 * local_74 >> 16;
                }
                iVar19 = (iVar11 + param_7) * param_6 + (iVar7 + param_9) * param_5 >> 16;
                iVar18 = (iVar7 + param_9) * param_6 - (iVar11 + param_7) * param_5 >> 16;
                iVar7 = (iVar15 + param_8) * param_4 - iVar18 * param_3 >> 16;
                iVar15 = iVar18 * param_4 + (iVar15 + param_8) * param_3;
                iVar18 = iVar15 >> 16;
                local_98 = (array<int, 2048ul>*)CONCAT44(local_98._4_4_, iVar18);
                iVar18 = iVar18 - (int)local_90;
                piVar10 = (int*)std::array<int, 6500ul>::operator[](local_a0, (ulong)local_b8);
                *piVar10 = iVar18;
                iVar18 = (int)local_98;
                local_5c = iVar19;
                if (iVar15 < 3276800) {
                    local_70 = CONCAT44(local_70._4_4_, (int)CONCAT71((int7)((ulong)piVar10 >> 8), 1));
                    iVar19 = -5000;
                    this_04 = local_80;
                } else {
                    pSVar2 = local_50->field_6437224;
                    iVar19 = (*(int*)&pSVar2->field_16 * iVar19) / (int)local_98 + local_40;
                    piVar10 = (int*)std::array<int, 6500ul>::operator[](local_80, (ulong)paVar16);
                    *piVar10 = iVar19;
                    iVar19 = (*(int*)&pSVar2->field_16 * iVar7) / iVar18 + local_3c;
                    this_04 = (array<int, 6500ul>*)puVar1;
                }
                piVar10 = (int*)std::array<int, 6500ul>::operator[](this_04, (ulong)paVar16);
                *piVar10 = iVar19;
                if (local_31 != false) {
                    piVar10 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)this_00, (ulong)paVar16);
                    *piVar10 = local_5c;
                    piVar10 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)this_01, (ulong)paVar16);
                    *piVar10 = iVar7;
                    piVar10 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)this_03, (ulong)paVar16);
                    *piVar10 = iVar18;
                }
                paVar16 = paVar16 + 1;
                iVar18 = param_2;
            } while ((long)paVar16 < (long)local_58->field_20);
        }
        Render2(local_50, local_58, (bool)((byte)local_70 & 1), local_bc._0_1_, param_10);
    LAB_1002f6c83:
        local_d0.~shared_ptr();
    }

    // 0x1002f6d80, 1680 bytes, placed by class name
    // SoftwareModelLitRenderer::Render3(ModelLitImpl&, int)
    void SoftwareModelLitRenderer::Render3(ModelLitImpl* param_1, int param_2) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        undefined4 uVar8;
        undefined4 uVar9;
        undefined4 uVar10;
        undefined4 uVar11;
        undefined4 uVar12;
        undefined4 uVar13;
        undefined4 uVar14;
        undefined4 uVar15;
        undefined4 uVar16;
        undefined4 uVar17;
        undefined4 uVar18;
        undefined4 uVar19;
        undefined4 uVar20;
        undefined4 uVar21;
        undefined4 uVar22;
        int iVar23;
        int iVar24;
        int iVar25;
        int iVar26;
        SoftwarePix3D* pSVar27;
        bool bVar28;
        char* pcVar29;
        int* piVar30;
        Array<signed char, eastl::allocator>* pAVar31;
        byte* pbVar32;
        ulong uVar33;
        ulong uVar34;
        ulong uVar35;
        Array<short, eastl::allocator>* pAVar36;
        short* psVar37;
        undefined4* puVar38;
        array<int, 65536ul>* this_00;
        ulong uVar40;
        undefined1* puVar41;
        undefined1* puVar42;
        uint uVar43;

        pcVar29 = (char*)std::array<bool, 6500ul>::operator[]((array<bool, 6500ul>*)&field_6508, (ulong)param_2);
        if (*pcVar29 == '\0') {
            piVar30 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_104,
                                                                     (ulong)param_2);
            iVar1 = *piVar30;
            piVar30 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_128,
                                                                     (ulong)param_2);
            iVar2 = *piVar30;
            piVar30 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_152,
                                                                     (ulong)param_2);
            iVar3 = *piVar30;
            pcVar29 = (char*)std::array<bool, 6500ul>::operator[]((array<bool, 6500ul>*)&field_8, (ulong)param_2);
            field_6437224->field_8 = *pcVar29;
            uVar43 = 0;
            bVar28 = operator==((shared_ptr*)param_1->field_264, (_func_decltype_nullptr*)0);
            if (!bVar28) {
                pAVar31 =
                    (Array<signed char, eastl::allocator>*)shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                        (shared_ptr<Array<signed char, eastl::allocator>>*)param_1->field_264);
                pbVar32 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar31, (ulong)param_2);
                uVar43 = (uint)*pbVar32;
            }
            uVar33 = (ulong)iVar1;
            uVar34 = (ulong)iVar2;
            uVar35 = (ulong)iVar3;
            field_6437224->field_12 = uVar43;
            puVar42 = param_1->field_296;
            bVar28 = operator==((shared_ptr*)puVar42, (_func_decltype_nullptr*)0);
            if (!bVar28) {
                pAVar36 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                    (shared_ptr<Array<short, eastl::allocator>>*)puVar42);
                psVar37 = (short*)Array<short, eastl::allocator>::operator[](pAVar36, (ulong)param_2);
                if (*psVar37 != -1) {
                    puVar41 = param_1->field_280;
                    bVar28 = operator!=((shared_ptr*)puVar41, (_func_decltype_nullptr*)0);
                    if (bVar28) {
                        pAVar31 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)puVar41);
                        pcVar29 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar31, (ulong)param_2);
                        if (*pcVar29 != -1) {
                            pAVar31 = (Array<signed char, eastl::allocator>*)
                                shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<signed char, eastl::allocator>>*)puVar41);
                            pbVar32 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar31, (ulong)param_2);
                            uVar40 = (ulong)*pbVar32;
                            piVar30 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&param_1->field_320, uVar40);
                            iVar1 = *piVar30;
                            piVar30 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&param_1->field_344, uVar40);
                            iVar2 = *piVar30;
                            piVar30 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&param_1->field_368, uVar40);
                            iVar3 = *piVar30;
                        }
                    }
                    piVar30 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&param_1->field_224, (ulong)param_2);
                    iVar4 = *piVar30;
                    pSVar27 = field_6437224;
                    puVar41 = &field_39008;
                    puVar38 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar33);
                    uVar5 = *puVar38;
                    puVar38 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar34);
                    uVar6 = *puVar38;
                    puVar38 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar35);
                    uVar7 = *puVar38;
                    puVar41 = &field_13008;
                    puVar38 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar33);
                    uVar8 = *puVar38;
                    puVar38 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar34);
                    uVar9 = *puVar38;
                    puVar38 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar35);
                    uVar10 = *puVar38;
                    puVar41 = &param_1->field_176;
                    puVar38 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar41, (ulong)param_2);
                    uVar11 = *puVar38;
                    if (iVar4 == -1) {
                        puVar38 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)puVar41, (ulong)param_2);
                        uVar12 = *puVar38;
                        puVar38 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)puVar41, (ulong)param_2);
                        uVar13 = *puVar38;
                        puVar41 = &field_91008;
                        uVar33 = (ulong)iVar1;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar33);
                        uVar14 = *puVar38;
                        uVar35 = (ulong)iVar2;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar35);
                        uVar15 = *puVar38;
                        uVar34 = (ulong)iVar3;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar34);
                        uVar16 = *puVar38;
                        puVar41 = &field_117008;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar33);
                        uVar17 = *puVar38;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar35);
                        uVar18 = *puVar38;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar34);
                        uVar19 = *puVar38;
                        puVar41 = &field_143008;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar33);
                        uVar20 = *puVar38;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar35);
                        uVar21 = *puVar38;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar34);
                        uVar22 = *puVar38;
                        pAVar36 =
                            (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                (shared_ptr<Array<short, eastl::allocator>>*)puVar42);
                    } else {
                        puVar38 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&param_1->field_200, (ulong)param_2);
                        uVar12 = *puVar38;
                        puVar38 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&param_1->field_224, (ulong)param_2);
                        uVar13 = *puVar38;
                        puVar41 = &field_91008;
                        uVar33 = (ulong)iVar1;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar33);
                        uVar14 = *puVar38;
                        uVar35 = (ulong)iVar2;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar35);
                        uVar15 = *puVar38;
                        uVar34 = (ulong)iVar3;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar34);
                        uVar16 = *puVar38;
                        puVar41 = &field_117008;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar33);
                        uVar17 = *puVar38;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar35);
                        uVar18 = *puVar38;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar34);
                        uVar19 = *puVar38;
                        puVar41 = &field_143008;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar33);
                        uVar20 = *puVar38;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar35);
                        uVar21 = *puVar38;
                        puVar38 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar41, uVar34);
                        uVar22 = *puVar38;
                        pAVar36 =
                            (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                (shared_ptr<Array<short, eastl::allocator>>*)puVar42);
                    }
                    psVar37 = (short*)Array<short, eastl::allocator>::operator[](pAVar36, (ulong)param_2);
                    (*(code*)pSVar27->field_0[10])(pSVar27, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11, uVar12,
                                                   uVar13, uVar14, uVar15, uVar16, uVar17, uVar18, uVar19, uVar20,
                                                   uVar21, uVar22, (int)*psVar37);
                    return;
                }
            }
            piVar30 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_224,
                                                                     (ulong)param_2);
            iVar1 = *piVar30;
            pSVar27 = field_6437224;
            puVar42 = &field_39008;
            piVar30 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar42, uVar33);
            iVar2 = *piVar30;
            piVar30 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar42, uVar34);
            iVar3 = *piVar30;
            piVar30 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar42, uVar35);
            iVar4 = *piVar30;
            puVar42 = &field_13008;
            piVar30 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar42, uVar33);
            iVar23 = *piVar30;
            piVar30 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar42, uVar34);
            iVar24 = *piVar30;
            piVar30 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar42, uVar35);
            iVar25 = *piVar30;
            if (iVar1 == -1) {
                this_00 = (array<int, 65536ul>*)Pix3D::GetColourTable();
                piVar30 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_176, (ulong)param_2);
                piVar30 = (int*)std::array<int, 65536ul>::operator[](this_00, (long)*piVar30);
                pSVar27->FlatTriangle(iVar2, iVar3, iVar4, iVar23, iVar24, iVar25, *piVar30);
            } else {
                piVar30 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_176, (ulong)param_2);
                iVar1 = *piVar30;
                piVar30 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_200, (ulong)param_2);
                iVar26 = *piVar30;
                piVar30 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_224, (ulong)param_2);
                pSVar27->GouraudTriangle(iVar2, iVar3, iVar4, iVar23, iVar24, iVar25, iVar1, iVar26, *piVar30);
            }
        } else {
            Render3ZClip(this, param_1, param_2);
        }
    }

    // 0x1002f7460, 6496 bytes, placed by class name
    // SoftwareModelLitRenderer::Render3ZClip(ModelLitImpl&, int)
    void SoftwareModelLitRenderer::Render3ZClip(ModelLitImpl* param_1, int param_2) {
        undefined1* puVar1;
        undefined1* puVar2;
        undefined1* puVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        undefined4 uVar8;
        int iVar9;
        undefined4 uVar10;
        undefined4 uVar11;
        undefined4 uVar12;
        undefined4 uVar13;
        undefined4 uVar14;
        undefined4 uVar15;
        undefined4 uVar16;
        undefined4 uVar17;
        undefined4 uVar18;
        undefined4 uVar19;
        undefined4 uVar20;
        undefined4 uVar21;
        undefined4 uVar22;
        bool bVar23;
        array<int, 2048ul>* this_00;
        int* piVar24;
        Array<signed char, eastl::allocator>* pAVar25;
        byte* pbVar26;
        undefined4* puVar27;
        Array<short, eastl::allocator>* pAVar28;
        short* psVar29;
        char* pcVar30;
        int* piVar31;
        int* piVar32;
        array<int, 65536ul>* paVar33;
        undefined4* puVar34;
        undefined4* puVar35;
        undefined4* puVar36;
        undefined4* puVar37;
        undefined4* puVar38;
        undefined4* puVar39;
        undefined4* puVar40;
        undefined4* puVar41;
        undefined4* puVar42;
        undefined4* puVar43;
        undefined4* puVar44;
        undefined** ppuVar45;
        int iVar46;
        int iVar47;
        int iVar48;
        ulong uVar49;
        undefined1* puVar50;
        undefined1* puVar51;
        ulong uVar52;
        ulong uVar53;
        ulong uVar54;
        SoftwarePix3D* pSVar55;
        int iVar56;
        int iVar57;
        int iVar58;
        ulong uVar59;
        int iVar60;
        uint uVar61;
        int iVar62;
        int iVar63;

        this_00 = (array<int, 2048ul>*)Pix3D::GetDivTable2();
        iVar4 = field_6437224->field_20;
        iVar5 = *(int*)&field_6437224->field_24;
        uVar49 = (ulong)param_2;
        piVar24 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_104, uVar49);
        iVar58 = *piVar24;
        piVar24 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_128, uVar49);
        iVar63 = *piVar24;
        piVar24 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_152, uVar49);
        iVar46 = *piVar24;
        puVar1 = &field_143008;
        uVar52 = (ulong)iVar58;
        piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar1, uVar52);
        iVar6 = *piVar24;
        uVar53 = (ulong)iVar63;
        piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar1, uVar53);
        iVar7 = *piVar24;
        uVar54 = (ulong)iVar46;
        piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar1, uVar54);
        iVar57 = *piVar24;
        uVar61 = 0;
        bVar23 = operator==((shared_ptr*)param_1->field_264, (_func_decltype_nullptr*)0);
        if (!bVar23) {
            pAVar25 =
                (Array<signed char, eastl::allocator>*)shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                    (shared_ptr<Array<signed char, eastl::allocator>>*)param_1->field_264);
            pbVar26 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar25, uVar49);
            uVar61 = (uint)*pbVar26;
        }
        field_6437224->field_12 = uVar61;
        if (iVar6 < 50) {
            puVar2 = &field_91008;
            piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar2, uVar52);
            iVar47 = *piVar24;
            puVar50 = &field_117008;
            piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar50, uVar52);
            iVar60 = *piVar24;
            piVar24 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_176,
                                                                     uVar49);
            iVar48 = *piVar24;
            if (49 < iVar57) {
                piVar24 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)(iVar57 - iVar6));
                iVar62 = (50 - iVar6) * *piVar24;
                piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar2, uVar54);
                iVar9 = *piVar24;
                pSVar55 = field_6437224;
                iVar56 = *(int*)&pSVar55->field_16;
                piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, 0);
                *piVar24 = ((((iVar9 - iVar47) * iVar62 >> 16) + iVar47) * iVar56) / 50 + iVar4;
                piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar50, uVar54);
                iVar9 = *piVar24;
                iVar56 = *(int*)&pSVar55->field_16;
                piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, 0);
                *piVar24 = ((((iVar9 - iVar60) * iVar62 >> 16) + iVar60) * iVar56) / 50 + iVar5;
                piVar24 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_224, uVar49);
                iVar9 = *piVar24;
                piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437184, 0);
                *piVar24 = ((iVar9 - iVar48) * iVar62 >> 16) + iVar48;
            }
            uVar61 = (uint)(49 < iVar57);
            if (iVar7 < 50)
                goto LAB_1002f7987;
            piVar24 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)(iVar7 - iVar6));
            iVar62 = (50 - iVar6) * *piVar24;
            piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar2, uVar53);
            iVar9 = *piVar24;
            pSVar55 = field_6437224;
            iVar56 = *(int*)&pSVar55->field_16;
            uVar59 = (ulong)uVar61;
            piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, uVar59);
            *piVar24 = ((((iVar9 - iVar47) * iVar62 >> 16) + iVar47) * iVar56) / 50 + iVar4;
            piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar50, uVar53);
            iVar47 = *piVar24;
            iVar9 = *(int*)&pSVar55->field_16;
            piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, uVar59);
            *piVar24 = ((((iVar47 - iVar60) * iVar62 >> 16) + iVar60) * iVar9) / 50 + iVar5;
            piVar24 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_200,
                                                                     uVar49);
            iVar47 = *piVar24;
            uVar61 = uVar61 + 1;
            piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437184, uVar59);
            *piVar24 = ((iVar47 - iVar48) * iVar62 >> 16) + iVar48;
        LAB_1002f76a3:
            puVar27 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_13008, uVar53);
            uVar8 = *puVar27;
            uVar59 = (ulong)uVar61;
            puVar27 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, uVar59);
            *puVar27 = uVar8;
            puVar27 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_39008, uVar53);
            uVar8 = *puVar27;
            puVar27 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, uVar59);
            *puVar27 = uVar8;
            piVar24 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_200,
                                                                     uVar49);
            iVar47 = *piVar24;
        LAB_1002f7e15:
            uVar61 = uVar61 + 1;
            piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437184, uVar59);
            *piVar24 = iVar47;
            if (iVar57 < 50)
                goto LAB_1002f7b55;
        LAB_1002f7e38:
            uVar53 = (ulong)uVar61;
            puVar27 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_13008, uVar54);
            uVar8 = *puVar27;
            puVar27 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, uVar53);
            *puVar27 = uVar8;
            puVar27 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_39008, uVar54);
            uVar8 = *puVar27;
            puVar27 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, uVar53);
            *puVar27 = uVar8;
            piVar24 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_224,
                                                                     uVar49);
            iVar48 = *piVar24;
        LAB_1002f7fcf:
            uVar61 = uVar61 + 1;
            piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437184, uVar53);
            *piVar24 = iVar48;
        } else {
            puVar27 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_13008, uVar52);
            uVar8 = *puVar27;
            puVar27 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, 0);
            *puVar27 = uVar8;
            puVar27 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_39008, uVar52);
            uVar8 = *puVar27;
            puVar27 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, 0);
            *puVar27 = uVar8;
            puVar27 = (undefined4*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)&param_1->field_176, uVar49);
            uVar8 = *puVar27;
            puVar27 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437184, 0);
            *puVar27 = uVar8;
            uVar61 = 1;
            if (49 < iVar7)
                goto LAB_1002f76a3;
        LAB_1002f7987:
            puVar2 = &field_91008;
            piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar2, uVar53);
            iVar60 = *piVar24;
            puVar50 = &field_117008;
            piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar50, uVar53);
            iVar48 = *piVar24;
            piVar24 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_200,
                                                                     uVar49);
            iVar47 = *piVar24;
            if (49 < iVar6) {
                piVar24 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)(iVar6 - iVar7));
                iVar62 = (50 - iVar7) * *piVar24;
                piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar2, uVar52);
                iVar9 = *piVar24;
                pSVar55 = field_6437224;
                iVar56 = *(int*)&pSVar55->field_16;
                uVar59 = (ulong)uVar61;
                piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, uVar59);
                *piVar24 = ((((iVar9 - iVar60) * iVar62 >> 16) + iVar60) * iVar56) / 50 + iVar4;
                piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar50, uVar52);
                iVar9 = *piVar24;
                iVar56 = *(int*)&pSVar55->field_16;
                piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, uVar59);
                *piVar24 = ((((iVar9 - iVar48) * iVar62 >> 16) + iVar48) * iVar56) / 50 + iVar5;
                piVar24 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_176, uVar49);
                iVar9 = *piVar24;
                uVar61 = uVar61 + 1;
                piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437184, uVar59);
                *piVar24 = ((iVar9 - iVar47) * iVar62 >> 16) + iVar47;
            }
            if (49 < iVar57) {
                piVar24 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)(iVar57 - iVar7));
                iVar62 = (50 - iVar7) * *piVar24;
                piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar2, uVar54);
                iVar9 = *piVar24;
                pSVar55 = field_6437224;
                iVar56 = *(int*)&pSVar55->field_16;
                uVar59 = (ulong)uVar61;
                piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, uVar59);
                *piVar24 = ((((iVar9 - iVar60) * iVar62 >> 16) + iVar60) * iVar56) / 50 + iVar4;
                piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar50, uVar54);
                iVar60 = *piVar24;
                iVar9 = *(int*)&pSVar55->field_16;
                piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, uVar59);
                *piVar24 = ((((iVar60 - iVar48) * iVar62 >> 16) + iVar48) * iVar9) / 50 + iVar5;
                piVar24 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_224, uVar49);
                iVar47 = ((*piVar24 - iVar47) * iVar62 >> 16) + iVar47;
                goto LAB_1002f7e15;
            }
            if (49 < iVar57)
                goto LAB_1002f7e38;
        LAB_1002f7b55:
            puVar2 = &field_91008;
            piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar2, uVar54);
            iVar47 = *piVar24;
            puVar50 = &field_117008;
            piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar50, uVar54);
            iVar60 = *piVar24;
            piVar24 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_224,
                                                                     uVar49);
            iVar48 = *piVar24;
            if (iVar7 < 50) {
                if (49 < iVar6)
                    goto LAB_1002f7ec3;
            } else {
                piVar24 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)(iVar7 - iVar57));
                iVar56 = (50 - iVar57) * *piVar24;
                piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar2, uVar53);
                iVar7 = *piVar24;
                pSVar55 = field_6437224;
                iVar9 = *(int*)&pSVar55->field_16;
                uVar54 = (ulong)uVar61;
                piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, uVar54);
                *piVar24 = ((((iVar7 - iVar47) * iVar56 >> 16) + iVar47) * iVar9) / 50 + iVar4;
                piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar50, uVar53);
                iVar7 = *piVar24;
                iVar9 = *(int*)&pSVar55->field_16;
                piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, uVar54);
                *piVar24 = ((((iVar7 - iVar60) * iVar56 >> 16) + iVar60) * iVar9) / 50 + iVar5;
                piVar24 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_200, uVar49);
                iVar7 = *piVar24;
                uVar61 = uVar61 + 1;
                piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437184, uVar54);
                *piVar24 = ((iVar7 - iVar48) * iVar56 >> 16) + iVar48;
                if (49 < iVar6) {
                LAB_1002f7ec3:
                    piVar24 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)(iVar6 - iVar57));
                    iVar57 = (50 - iVar57) * *piVar24;
                    piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar2, uVar52);
                    iVar6 = *piVar24;
                    pSVar55 = field_6437224;
                    iVar7 = *(int*)&pSVar55->field_16;
                    uVar53 = (ulong)uVar61;
                    piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, uVar53);
                    *piVar24 = ((((iVar6 - iVar47) * iVar57 >> 16) + iVar47) * iVar7) / 50 + iVar4;
                    piVar24 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar50, uVar52);
                    iVar4 = *piVar24;
                    iVar6 = *(int*)&pSVar55->field_16;
                    piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, uVar53);
                    *piVar24 = ((((iVar4 - iVar60) * iVar57 >> 16) + iVar60) * iVar6) / 50 + iVar5;
                    piVar24 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&param_1->field_176, uVar49);
                    iVar48 = ((*piVar24 - iVar48) * iVar57 >> 16) + iVar48;
                    goto LAB_1002f7fcf;
                }
            }
        }
        puVar2 = &field_6437104;
        piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar2, 0);
        iVar4 = *piVar24;
        piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar2, 1);
        iVar5 = *piVar24;
        piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar2, 2);
        iVar6 = *piVar24;
        puVar50 = &field_6437144;
        piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar50, 0);
        iVar7 = *piVar24;
        piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar50, 1);
        iVar57 = *piVar24;
        piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar50, 2);
        iVar47 = *piVar24;
        pSVar55 = field_6437224;
        pSVar55->field_8 = '\0';
        if (uVar61 != 4) {
            if (uVar61 != 3) {
                return;
            }
            if ((((iVar4 < 0) || (iVar5 < 0)) || (iVar6 < 0)) ||
                (((iVar60 = pSVar55->field_28, iVar60 < iVar4 || (iVar60 < iVar5)) || (iVar60 < iVar6)))) {
                pSVar55->field_8 = '\x01';
            }
            puVar2 = param_1->field_296;
            bVar23 = operator==((shared_ptr*)puVar2, (_func_decltype_nullptr*)0);
            if (!bVar23) {
                pAVar28 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                    (shared_ptr<Array<short, eastl::allocator>>*)puVar2);
                psVar29 = (short*)Array<short, eastl::allocator>::operator[](pAVar28, uVar49);
                if (*psVar29 != -1) {
                    puVar50 = param_1->field_280;
                    bVar23 = operator!=((shared_ptr*)puVar50, (_func_decltype_nullptr*)0);
                    if (bVar23) {
                        pAVar25 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)puVar50);
                        pcVar30 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar25, uVar49);
                        if (*pcVar30 != -1) {
                            pAVar25 = (Array<signed char, eastl::allocator>*)
                                shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<signed char, eastl::allocator>>*)puVar50);
                            pbVar26 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar25, uVar49);
                            uVar52 = (ulong)*pbVar26;
                            piVar24 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&param_1->field_320, uVar52);
                            iVar58 = *piVar24;
                            piVar24 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&param_1->field_344, uVar52);
                            iVar63 = *piVar24;
                            piVar24 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&param_1->field_368, uVar52);
                            iVar46 = *piVar24;
                        }
                    }
                    piVar24 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&param_1->field_224, uVar49);
                    pSVar55 = field_6437224;
                    if (*piVar24 == -1) {
                        puVar50 = &param_1->field_176;
                        puVar27 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)puVar50, uVar49);
                        uVar8 = *puVar27;
                        puVar27 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)puVar50, uVar49);
                        uVar10 = *puVar27;
                        puVar27 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)puVar50, uVar49);
                        uVar11 = *puVar27;
                    } else {
                        puVar50 = &field_6437184;
                        puVar27 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar50, 0);
                        uVar8 = *puVar27;
                        puVar27 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar50, 1);
                        uVar10 = *puVar27;
                        puVar27 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar50, 2);
                        uVar11 = *puVar27;
                    }
                    puVar50 = &field_91008;
                    uVar52 = (ulong)iVar58;
                    puVar27 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar50, uVar52);
                    uVar12 = *puVar27;
                    uVar53 = (ulong)iVar63;
                    puVar27 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar50, uVar53);
                    uVar13 = *puVar27;
                    uVar54 = (ulong)iVar46;
                    puVar27 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar50, uVar54);
                    uVar14 = *puVar27;
                    puVar50 = &field_117008;
                    puVar27 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar50, uVar52);
                    uVar15 = *puVar27;
                    puVar27 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar50, uVar53);
                    uVar16 = *puVar27;
                    puVar27 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar50, uVar54);
                    uVar17 = *puVar27;
                    puVar27 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar1, uVar52);
                    uVar18 = *puVar27;
                    puVar27 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar1, uVar53);
                    uVar19 = *puVar27;
                    puVar27 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar1, uVar54);
                    uVar20 = *puVar27;
                    pAVar28 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                        (shared_ptr<Array<short, eastl::allocator>>*)puVar2);
                    psVar29 = (short*)Array<short, eastl::allocator>::operator[](pAVar28, uVar49);
                    (*(code*)pSVar55->field_0[10])(pSVar55, iVar7, iVar57, iVar47, iVar4, iVar5, iVar6, uVar8, uVar10,
                                                   uVar11, uVar12, uVar13, uVar14, uVar15, uVar16, uVar17, uVar18,
                                                   uVar19, uVar20, (int)*psVar29);
                    return;
                }
            }
            piVar24 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_224,
                                                                     uVar49);
            pSVar55 = field_6437224;
            if (*piVar24 == -1) {
                paVar33 = (array<int, 65536ul>*)Pix3D::GetColourTable();
                piVar24 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_176, uVar49);
                piVar24 = (int*)std::array<int, 65536ul>::operator[](paVar33, (long)*piVar24);
                pSVar55->FlatTriangle(iVar7, iVar57, iVar47, iVar4, iVar5, iVar6, *piVar24);
                return;
            }
            puVar1 = &field_6437184;
            piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar1, 0);
            iVar58 = *piVar24;
            piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar1, 1);
            iVar63 = *piVar24;
            piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar1, 2);
            pSVar55->GouraudTriangle(iVar7, iVar57, iVar47, iVar4, iVar5, iVar6, iVar58, iVar63, *piVar24);
            return;
        }
        if (((-1 < iVar4) && (-1 < iVar5)) &&
            ((-1 < iVar6 &&
              (((iVar60 = field_6437224->field_28, iVar4 <= iVar60 && (iVar5 <= iVar60)) && (iVar6 <= iVar60)))))) {
            piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar2, 3);
            if ((-1 < *piVar24) && (*piVar24 <= iVar60))
                goto LAB_1002f84fd;
        }
        field_6437224->field_8 = '\x01';
    LAB_1002f84fd:
        puVar3 = param_1->field_296;
        bVar23 = operator==((shared_ptr*)puVar3, (_func_decltype_nullptr*)0);
        if (!bVar23) {
            pAVar28 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                (shared_ptr<Array<short, eastl::allocator>>*)puVar3);
            psVar29 = (short*)Array<short, eastl::allocator>::operator[](pAVar28, uVar49);
            if (*psVar29 != -1) {
                puVar51 = param_1->field_280;
                bVar23 = operator!=((shared_ptr*)puVar51, (_func_decltype_nullptr*)0);
                if (bVar23) {
                    pAVar25 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)puVar51);
                    pcVar30 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar25, uVar49);
                    if (*pcVar30 != -1) {
                        pAVar25 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)puVar51);
                        pbVar26 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar25, uVar49);
                        uVar52 = (ulong)*pbVar26;
                        piVar24 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&param_1->field_320, uVar52);
                        iVar58 = *piVar24;
                        piVar24 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&param_1->field_344, uVar52);
                        iVar63 = *piVar24;
                        piVar24 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&param_1->field_368, uVar52);
                        iVar46 = *piVar24;
                    }
                }
                pAVar28 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                    (shared_ptr<Array<short, eastl::allocator>>*)puVar3);
                psVar29 = (short*)Array<short, eastl::allocator>::operator[](pAVar28, uVar49);
                iVar60 = (int)*psVar29;
                piVar24 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_224, uVar49);
                pSVar55 = field_6437224;
                if (*piVar24 == -1) {
                    puVar51 = &param_1->field_176;
                    puVar27 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar51, uVar49);
                    uVar8 = *puVar27;
                    puVar27 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar51, uVar49);
                    uVar10 = *puVar27;
                    puVar27 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar51, uVar49);
                    uVar11 = *puVar27;
                    puVar3 = &field_91008;
                    uVar52 = (ulong)iVar58;
                    puVar27 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar3, uVar52);
                    uVar12 = *puVar27;
                    uVar53 = (ulong)iVar63;
                    puVar34 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar3, uVar53);
                    uVar13 = *puVar34;
                    uVar54 = (ulong)iVar46;
                    puVar35 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar3, uVar54);
                    uVar14 = *puVar35;
                    puVar3 = &field_117008;
                    puVar36 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar3, uVar52);
                    uVar15 = *puVar36;
                    puVar37 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar3, uVar53);
                    uVar16 = *puVar37;
                    puVar38 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar3, uVar54);
                    uVar17 = *puVar38;
                    puVar39 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar1, uVar52);
                    uVar18 = *puVar39;
                    puVar40 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar1, uVar53);
                    uVar19 = *puVar40;
                    puVar41 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar1, uVar54);
                    (*(code*)pSVar55->field_0[10])(pSVar55, iVar7, iVar57, iVar47, iVar4, iVar5, iVar6, uVar8, uVar10,
                                                   uVar11, uVar12, uVar13, uVar14, uVar15, uVar16, uVar17, uVar18,
                                                   uVar19, *puVar41, iVar60);
                    pSVar55 = field_6437224;
                    puVar42 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar50, 3);
                    uVar8 = *puVar42;
                    puVar42 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar2, 3);
                    uVar10 = *puVar42;
                    puVar42 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar51, uVar49);
                    uVar11 = *puVar42;
                    puVar42 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar51, uVar49);
                    uVar21 = *puVar42;
                    puVar42 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar51, uVar49);
                    uVar12 = *puVar42;
                    uVar13 = *puVar27;
                    uVar14 = *puVar34;
                    uVar15 = *puVar35;
                    uVar16 = *puVar36;
                    uVar17 = *puVar37;
                    uVar18 = *puVar38;
                    uVar19 = *puVar39;
                    uVar22 = *puVar40;
                    uVar20 = *puVar41;
                    ppuVar45 = pSVar55->field_0;
                } else {
                    puVar3 = &field_6437184;
                    puVar27 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar3, 0);
                    uVar8 = *puVar27;
                    puVar34 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar3, 1);
                    uVar10 = *puVar34;
                    puVar34 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar3, 2);
                    uVar11 = *puVar34;
                    puVar51 = &field_91008;
                    uVar53 = (ulong)iVar58;
                    puVar35 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar51, uVar53);
                    uVar12 = *puVar35;
                    uVar52 = (ulong)iVar63;
                    puVar36 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar51, uVar52);
                    uVar13 = *puVar36;
                    uVar49 = (ulong)iVar46;
                    puVar37 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar51, uVar49);
                    uVar14 = *puVar37;
                    puVar51 = &field_117008;
                    puVar38 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar51, uVar53);
                    uVar15 = *puVar38;
                    puVar39 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar51, uVar52);
                    uVar16 = *puVar39;
                    puVar40 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar51, uVar49);
                    uVar17 = *puVar40;
                    puVar41 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar1, uVar53);
                    uVar18 = *puVar41;
                    puVar42 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar1, uVar52);
                    uVar19 = *puVar42;
                    puVar43 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar1, uVar49);
                    (*(code*)pSVar55->field_0[10])(pSVar55, iVar7, iVar57, iVar47, iVar4, iVar5, iVar6, uVar8, uVar10,
                                                   uVar11, uVar12, uVar13, uVar14, uVar15, uVar16, uVar17, uVar18,
                                                   uVar19, *puVar43, iVar60);
                    pSVar55 = field_6437224;
                    puVar44 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar50, 3);
                    uVar8 = *puVar44;
                    puVar44 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar2, 3);
                    uVar10 = *puVar44;
                    uVar11 = *puVar27;
                    uVar21 = *puVar34;
                    puVar27 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar3, 3);
                    uVar12 = *puVar27;
                    uVar13 = *puVar35;
                    uVar14 = *puVar36;
                    uVar15 = *puVar37;
                    uVar16 = *puVar38;
                    uVar17 = *puVar39;
                    uVar18 = *puVar40;
                    uVar19 = *puVar41;
                    uVar22 = *puVar42;
                    uVar20 = *puVar43;
                    ppuVar45 = pSVar55->field_0;
                }
                (*(code*)ppuVar45[10])(pSVar55, iVar7, iVar47, uVar8, iVar4, iVar6, uVar10, uVar11, uVar21, uVar12,
                                       uVar13, uVar14, uVar15, uVar16, uVar17, uVar18, uVar19, uVar22, uVar20, iVar60);
                return;
            }
        }
        piVar24 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_224, uVar49);
        if (*piVar24 == -1) {
            paVar33 = (array<int, 65536ul>*)Pix3D::GetColourTable();
            piVar24 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_176,
                                                                     uVar49);
            piVar24 = (int*)std::array<int, 65536ul>::operator[](paVar33, (long)*piVar24);
            iVar58 = *piVar24;
            (field_6437224, iVar7, iVar57, iVar47, iVar4, iVar5, iVar6, iVar58)->FlatTriangle();
            pSVar55 = field_6437224;
            piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar50, 3);
            iVar5 = *piVar24;
            piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar2, 3);
            pSVar55->FlatTriangle(iVar7, iVar47, iVar5, iVar4, iVar6, *piVar24, iVar58);
        } else {
            pSVar55 = field_6437224;
            puVar1 = &field_6437184;
            piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar1, 0);
            iVar58 = *piVar24;
            piVar31 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar1, 1);
            iVar63 = *piVar31;
            piVar31 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar1, 2);
            pSVar55->GouraudTriangle(iVar7, iVar57, iVar47, iVar4, iVar5, iVar6, iVar58, iVar63, *piVar31);
            pSVar55 = field_6437224;
            piVar32 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar50, 3);
            iVar5 = *piVar32;
            piVar32 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar2, 3);
            iVar58 = *piVar32;
            iVar63 = *piVar24;
            iVar46 = *piVar31;
            piVar24 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar1, 3);
            pSVar55->GouraudTriangle(iVar7, iVar47, iVar5, iVar4, iVar6, iVar58, iVar63, iVar46, *piVar24);
        }
    }

    // 0x1002fa940, 80 bytes, placed by class name
    // SoftwareModelLitRenderer::FastInsideTriangle(int, int, int, int, int, int, int, int)
    bool SoftwareModelLitRenderer::FastInsideTriangle(int param_1, int param_2, int param_3, int param_4, int param_5,
                                                      int param_6, int param_7, int param_8) {
        if ((((param_3 <= param_2) || (param_4 <= param_2)) || (param_5 <= param_2)) &&
            (((param_2 <= param_3 || (param_2 <= param_4)) || (param_2 <= param_5)))) {
            if (((param_6 <= param_1) || (param_7 <= param_1)) || (param_8 <= param_1)) {
                return param_1 <= param_8 || (param_1 <= param_7 || param_1 <= param_6);
            }
        }
        return false;
    }

} // namespace jag::oldscape::dash3d
