// libs/oldscape/jagex3/dash3d/SoftwareModelLitRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class SoftwareModelLitRenderer {
    public:
        // virtual methods in vtable order
        virtual void ObjRender(ModelLit& modelLit, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                               int arg8);
        virtual void ObjRenderOrthog(ModelLit& modelLit, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                     int arg8, int arg9);
        virtual void WorldRender(ModelSource& modelSource, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                 int arg8, int arg9, long long arg10, int arg11, RenderableOverlay&& renderableOverlay,
                                 bool arg13);
        virtual void UploadModel(ModelLit& arg1);
        void DestroyModel(ModelLit& arg1);
        SoftwareModelLitRenderer(SoftwarePix3D* softwarePix3D);
        void Render2(ModelLitImpl& modelLitImpl, bool arg2, bool arg3, long long arg4);
        void Render3(ModelLitImpl& modelLitImpl, int arg2);
        void Render3ZClip(ModelLitImpl& modelLitImpl, int arg2);
        bool FastInsideTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);

    private:
        uint8_t _unknown_8[6437216];
        SoftwarePix3D* field_6437224;
    };

    // 0x100009e70: SoftwareModelLitRenderer::UploadModel(ModelLit&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: SoftwareModelLitRenderer::DestroyModel(ModelLit&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1002f4f70
    SoftwareModelLitRenderer::SoftwareModelLitRenderer(SoftwarePix3D* softwarePix3D)
        : ModelLitRenderer<SoftwarePix3D>(softwarePix3D) {}

    // 0x1002f51e0
    void SoftwareModelLitRenderer::ObjRender(ModelLit& modelLit, int arg2, int arg3, int arg4, int arg5, int arg6,
                                             int arg7, int arg8) {
        (modelLit._vptr[3]._x7e___2)(modelLit);
    }

    // 0x1002f55a0
    void SoftwareModelLitRenderer::Render2(ModelLitImpl& modelLitImpl, bool arg2, bool arg3, long long arg4) {
        uint8_t* puVar1;
        uint8_t* puVar2;
        uint8_t* puVar3;
        uint8_t* puVar4;
        uint8_t* this_01;
        unsigned short uVar5;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        uint16_t* puVar13;
        uint8_t* this_02;
        int* piVar14;
        uint8_t* puVar15;
        uint64_t uVar16;
        array<unsigned short, 512ul>* paVar17;
        unsigned short* puVar18;
        uint32_t* puVar19;
        Array<signed char>* this_03;
        char* pcVar20;
        array<int, 2000ul>* paVar21;
        unsigned int* puVar22;
        array<int, 2000ul>* paVar23;
        int iVar24;
        unsigned long uVar25;
        array<bool, 6500ul>* paVar26;
        int iVar27;
        unsigned long uVar28;
        unsigned short uVar29;
        unsigned long uVar30;
        bool bVar31;
        int iVar32;
        unsigned long uVar33;
        int in_stack_fffffffffffffee0;
        int local_88;
        int local_78;
        int local_60;
        array<int, 2000ul>* local_40;

        char cVar12 = modelLitImpl.PointerRelease();
        if (cVar12) {
            LogAssert("ml.IsForRSeven() == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "SoftwareModelLitRenderer.cpp",
                      394, nullptr);
        }
        unsigned int uVar6 = modelLitImpl.field_516;
        if (5999 < (int)uVar6) {
            return;
        }
        uint8_t* this_00 = &field_169008;
        if (0 < (int)uVar6) {
            uVar25 = 0;
            do {
                puVar13 = (uint16_t*)(*this_00)[uVar25];
                *puVar13 = 0;
                uVar25 = uVar25 + 1;
            } while (uVar6 != uVar25);
        }
        if (0 < modelLitImpl.field_96) {
            if (6500 < modelLitImpl.field_96) {
                LogAssert("m.m_numFaces <= Model::MAX_VERTS",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                          "dash3d/SoftwareModelLitRenderer.cpp",
                          421, nullptr);
            }
            if ((short)modelLitImpl.field_96 != 0) {
                puVar1 = &field_13008;
                puVar2 = &field_39008;
                puVar3 = &field_65008;
                puVar4 = &field_91008;
                this_01 = &field_117008;
                this_02 = &field_143008;
                uVar29 = 0;
                do {
                    uVar25 = (unsigned long)uVar29;
                    piVar14 = (int*)modelLitImpl.field_224[uVar25];
                    if (*piVar14 != -2) {
                        piVar14 = &modelLitImpl.field_104[uVar25];
                        uVar33 = (unsigned long)*piVar14;
                        piVar14 = &modelLitImpl.field_128[uVar25];
                        uVar30 = (unsigned long)*piVar14;
                        piVar14 = &modelLitImpl.field_152[uVar25];
                        uVar28 = (unsigned long)*piVar14;
                        piVar14 = (int*)(*puVar1)[uVar33];
                        iVar24 = *piVar14;
                        piVar14 = (int*)(*puVar1)[uVar30];
                        iVar32 = *piVar14;
                        piVar14 = (int*)(*puVar1)[uVar28];
                        iVar27 = *piVar14;
                        if ((!arg2) || (((iVar24 != -5000 && (iVar32 != -5000)) && (iVar27 != -5000)))) {
                            if (arg3 != false) {
                                puVar22 = (unsigned int*)(*puVar2)[uVar33];
                                uVar6 = *puVar22;
                                piVar14 = (int*)(*puVar2)[uVar30];
                                iVar7 = *piVar14;
                                piVar14 = (int*)(*puVar2)[uVar28];
                                cVar12 = ((MousePickingHelper*)(unsigned long)uVar6)
                                             ->IsMouseRoughlyInsideTriangle(iVar7, *piVar14, iVar24, iVar32, iVar27, 5,
                                                                            in_stack_fffffffffffffee0);
                                if (cVar12) {
                                    MousePickingHelper::AddPickingEntity(arg4);
                                    arg3 = false;
                                }
                            }
                            piVar14 = (int*)(*puVar2)[uVar28];
                            iVar7 = *piVar14;
                            piVar14 = (int*)(*puVar2)[uVar30];
                            iVar8 = *piVar14;
                            piVar14 = (int*)(*puVar2)[uVar33];
                            if (0 < (iVar32 - iVar27) * (*piVar14 - iVar8) + (iVar7 - iVar8) * (iVar24 - iVar32)) {
                                puVar15 = &field_6508[uVar25];
                                *puVar15 = 0;
                                bVar31 = true;
                                paVar26 = (array<bool, 6500ul>*)&field_8;
                                if (((-1 < iVar24) && (-1 < iVar32)) && (-1 < iVar27)) {
                                    iVar7 = field_6437224->field_28;
                                    bVar31 = iVar7 < iVar27 || (iVar7 < iVar32 || iVar7 < iVar24);
                                }
                            LAB_1002f5ad0:
                                uVar16 = (*paVar26)[uVar25];
                                *(bool*)uVar16 = bVar31;
                                piVar14 = (int*)(*puVar3)[uVar33];
                                iVar24 = *piVar14;
                                piVar14 = (int*)(*puVar3)[uVar30];
                                iVar32 = *piVar14;
                                piVar14 = (int*)(*puVar3)[uVar28];
                                uVar25 = (long)((iVar24 + iVar32 + *piVar14) / 3) + (long)modelLitImpl.field_520;
                                paVar17 = &field_181008[uVar25];
                                puVar18 = (unsigned short*)(*this_00)[uVar25];
                                uVar5 = *puVar18;
                                *puVar18 = uVar5 + 1;
                                puVar18 = (unsigned short*)(*paVar17)[(unsigned long)uVar5];
                                *puVar18 = uVar29;
                            }
                        } else {
                            piVar14 = (int*)(*puVar4)[uVar33];
                            iVar24 = *piVar14;
                            piVar14 = (int*)(*puVar4)[uVar30];
                            iVar32 = *piVar14;
                            piVar14 = (int*)(*puVar4)[uVar28];
                            iVar27 = *piVar14;
                            piVar14 = (int*)(*this_01)[uVar33];
                            iVar7 = *piVar14;
                            piVar14 = (int*)(*this_01)[uVar30];
                            iVar8 = *piVar14;
                            piVar14 = (int*)(*this_01)[uVar28];
                            iVar9 = *piVar14;
                            piVar14 = (int*)(*this_02)[uVar33];
                            iVar10 = *piVar14;
                            piVar14 = (int*)(*this_02)[uVar30];
                            iVar11 = *piVar14;
                            piVar14 = (int*)(*this_02)[uVar28];
                            bVar31 = true;
                            paVar26 = (array<bool, 6500ul>*)&field_6508;
                            if (0 <
                                ((iVar9 - iVar8) * (iVar24 - iVar32) - (iVar7 - iVar8) * (iVar27 - iVar32)) * iVar11 +
                                    ((iVar10 - iVar11) * (iVar27 - iVar32) - (*piVar14 - iVar11) * (iVar24 - iVar32)) *
                                        iVar8 +
                                    ((*piVar14 - iVar11) * (iVar7 - iVar8) - (iVar10 - iVar11) * (iVar9 - iVar8)) *
                                        iVar32)
                                goto LAB_1002f5ad0;
                        }
                    }
                    uVar29 = uVar29 + 1;
                } while (uVar29 < (unsigned short)modelLitImpl.field_96);
            }
        }
        bVar31 = modelLitImpl.field_248 == nullptr;
        if (!bVar31) {
            puVar1 = &field_6325008;
            puVar2 = &field_6437056;
            uVar25 = 0;
            do {
                puVar19 = (uint32_t*)(*puVar1)[uVar25];
                *puVar19 = 0;
                puVar19 = (uint32_t*)(*puVar2)[uVar25];
                *puVar19 = 0;
                uVar25 = uVar25 + 1;
            } while (uVar25 != 12);
            puVar3 = &field_6325056;
            puVar4 = &field_6429056;
            local_40 = (array<int, 2000ul>*)&field_6421056;
            if (0 < (long)modelLitImpl.field_516) {
                uVar25 = (long)modelLitImpl.field_516;
                do {
                    uVar28 = uVar25 - 1;
                    puVar18 = (unsigned short*)(*this_00)[uVar28];
                    uVar29 = *puVar18;
                    if ((unsigned long)uVar29 != 0) {
                        paVar17 = &field_181008[uVar28];
                        uVar30 = 0;
                        do {
                            puVar18 = (unsigned short*)(*paVar17)[uVar30];
                            uVar5 = *puVar18;
                            this_03 = (Array<signed char>*)*modelLitImpl.field_248;
                            pcVar20 = (char*)(*this_03)[(unsigned long)uVar5];
                            cVar12 = *pcVar20;
                            uVar33 = (unsigned long)cVar12;
                            piVar14 = (int*)(*puVar1)[uVar33];
                            iVar24 = *piVar14;
                            *piVar14 = iVar24 + 1;
                            paVar21 = (array<int, 2000ul>*)(*puVar3)[uVar33];
                            puVar22 = (unsigned int*)(*paVar21)[(long)iVar24];
                            *puVar22 = (unsigned int)uVar5;
                            if ((long)uVar33 < 10) {
                                piVar14 = (int*)(*puVar2)[uVar33];
                                *piVar14 = *piVar14 + (int)uVar28;
                            } else {
                                if (cVar12 == '\n') {
                                    paVar21 = local_40;
                                } else {
                                    paVar21 = (array<int, 2000ul>*)puVar4;
                                }
                                piVar14 = (int*)(*paVar21)[(long)iVar24];
                                *piVar14 = (int)uVar28;
                            }
                            uVar30 = uVar30 + 1;
                        } while (uVar29 != uVar30);
                    }
                    bVar31 = 1 < (long)uVar25;
                    uVar25 = uVar28;
                } while (bVar31);
            }
            piVar14 = (int*)(*puVar1)[1];
            iVar24 = *piVar14;
            if ((iVar24 < 1) && (piVar14 = (int*)(*puVar1)[2], *piVar14 < 1)) {
                local_78 = 0;
            } else {
                piVar14 = (int*)(*puVar2)[1];
                iVar32 = *piVar14;
                piVar14 = (int*)(*puVar2)[2];
                iVar27 = *piVar14;
                piVar14 = (int*)(*puVar1)[2];
                local_78 = (iVar32 + iVar27) / (iVar24 + *piVar14);
            }
            piVar14 = (int*)(*puVar1)[3];
            iVar24 = *piVar14;
            if ((iVar24 < 1) && (piVar14 = (int*)(*puVar1)[4], *piVar14 < 1)) {
                local_88 = 0;
            } else {
                piVar14 = (int*)(*puVar2)[3];
                iVar32 = *piVar14;
                piVar14 = (int*)(*puVar2)[4];
                iVar27 = *piVar14;
                piVar14 = (int*)(*puVar1)[4];
                local_88 = (iVar32 + iVar27) / (iVar24 + *piVar14);
            }
            piVar14 = (int*)(*puVar1)[6];
            iVar24 = *piVar14;
            if ((iVar24 < 1) && (piVar14 = (int*)(*puVar1)[8], *piVar14 < 1)) {
                local_60 = 0;
            } else {
                piVar14 = (int*)(*puVar2)[6];
                iVar32 = *piVar14;
                piVar14 = (int*)(*puVar2)[8];
                iVar27 = *piVar14;
                piVar14 = (int*)(*puVar1)[8];
                local_60 = (iVar32 + iVar27) / (iVar24 + *piVar14);
            }
            piVar14 = (int*)(*puVar1)[10];
            iVar24 = *piVar14;
            paVar21 = (array<int, 2000ul>*)(*puVar3)[10];
            if (iVar24 == 0) {
                piVar14 = (int*)(*puVar1)[11];
                iVar24 = *piVar14;
                paVar21 = (array<int, 2000ul>*)(*puVar3)[11];
                local_40 = (array<int, 2000ul>*)puVar4;
            }
            if (iVar24 < 1) {
                iVar32 = -1000;
            } else {
                piVar14 = (int*)(*local_40)[0];
                iVar32 = *piVar14;
            }
            uVar25 = 0;
            iVar27 = 0;
            do {
                if (uVar25 == 0) {
                    while (local_78 < iVar32) {
                        uVar28 = (unsigned long)iVar27;
                        iVar27 = iVar27 + 1;
                        piVar14 = (int*)(*paVar21)[uVar28];
                        Render3(modelLitImpl, *piVar14);
                        if (iVar27 == iVar24) {
                            paVar23 = (array<int, 2000ul>*)(*puVar3)[11];
                            if (paVar21 != paVar23) {
                                piVar14 = (int*)(*puVar1)[11];
                                iVar24 = *piVar14;
                                iVar27 = 0;
                                paVar21 = paVar23;
                                local_40 = (array<int, 2000ul>*)puVar4;
                            }
                        }
                        iVar32 = -1000;
                        if (iVar27 < iVar24) {
                            piVar14 = (int*)(*local_40)[(long)iVar27];
                            iVar32 = *piVar14;
                        }
                    }
                }
                while ((uVar25 == 3 && (local_88 < iVar32))) {
                    uVar28 = (unsigned long)iVar27;
                    iVar27 = iVar27 + 1;
                    piVar14 = (int*)(*paVar21)[uVar28];
                    Render3(modelLitImpl, *piVar14);
                    if (iVar27 == iVar24) {
                        paVar23 = (array<int, 2000ul>*)(*puVar3)[11];
                        if (paVar21 != paVar23) {
                            piVar14 = (int*)(*puVar1)[11];
                            iVar24 = *piVar14;
                            iVar27 = 0;
                            paVar21 = paVar23;
                            local_40 = (array<int, 2000ul>*)puVar4;
                        }
                    }
                    iVar32 = -1000;
                    if (iVar27 < iVar24) {
                        piVar14 = (int*)(*local_40)[(long)iVar27];
                        iVar32 = *piVar14;
                    }
                }
                while ((uVar25 == 5 && (local_60 < iVar32))) {
                    uVar28 = (unsigned long)iVar27;
                    iVar27 = iVar27 + 1;
                    piVar14 = (int*)(*paVar21)[uVar28];
                    Render3(modelLitImpl, *piVar14);
                    if (iVar27 == iVar24) {
                        paVar23 = (array<int, 2000ul>*)(*puVar3)[11];
                        if (paVar21 != paVar23) {
                            piVar14 = (int*)(*puVar1)[11];
                            iVar24 = *piVar14;
                            iVar27 = 0;
                            paVar21 = paVar23;
                            local_40 = (array<int, 2000ul>*)puVar4;
                        }
                    }
                    iVar32 = -1000;
                    if (iVar27 < iVar24) {
                        piVar14 = (int*)(*local_40)[(long)iVar27];
                        iVar32 = *piVar14;
                    }
                }
                puVar22 = (unsigned int*)(*puVar1)[uVar25];
                uVar6 = *puVar22;
                paVar23 = (array<int, 2000ul>*)(*puVar3)[uVar25];
                if (0 < (int)uVar6) {
                    uVar28 = 0;
                    do {
                        piVar14 = (int*)(*paVar23)[uVar28];
                        Render3(modelLitImpl, *piVar14);
                        uVar28 = uVar28 + 1;
                    } while (uVar6 != uVar28);
                }
                uVar25 = uVar25 + 1;
            } while (uVar25 != 10);
            while (iVar32 != -1000) {
                uVar25 = (unsigned long)iVar27;
                iVar27 = iVar27 + 1;
                piVar14 = (int*)(*paVar21)[uVar25];
                Render3(modelLitImpl, *piVar14);
                if (iVar27 == iVar24) {
                    paVar23 = (array<int, 2000ul>*)(*puVar3)[11];
                    if (paVar21 != paVar23) {
                        piVar14 = (int*)(*puVar1)[11];
                        iVar24 = *piVar14;
                        iVar27 = 0;
                        paVar21 = paVar23;
                        local_40 = (array<int, 2000ul>*)puVar4;
                    }
                }
                iVar32 = -1000;
                if (iVar27 < iVar24) {
                    piVar14 = (int*)(*local_40)[(long)iVar27];
                    iVar32 = *piVar14;
                }
            }
            return;
        }
        if ((long)modelLitImpl.field_516 < 1) {
            return;
        }
        uVar25 = (long)modelLitImpl.field_516;
        do {
            uVar28 = uVar25 - 1;
            puVar18 = (unsigned short*)(*this_00)[uVar28];
            uVar29 = *puVar18;
            if ((unsigned long)uVar29 != 0) {
                paVar17 = &field_181008[uVar28];
                uVar30 = 0;
                do {
                    puVar18 = (unsigned short*)(*paVar17)[uVar30];
                    Render3(modelLitImpl, (unsigned int)*puVar18);
                    uVar30 = uVar30 + 1;
                } while (uVar29 != uVar30);
            }
            bVar31 = 1 < (long)uVar25;
            uVar25 = uVar28;
        } while (bVar31);
    }

    // 0x1002f62c0
    void SoftwareModelLitRenderer::ObjRenderOrthog(ModelLit& modelLit, int arg2, int arg3, int arg4, int arg5, int arg6,
                                                   int arg7, int arg8, int arg9) {
        (modelLit._vptr[3]._x7e___2)(modelLit);
    }

    // 0x1002f6660
    void SoftwareModelLitRenderer::WorldRender(ModelSource& modelSource, int arg2, int arg3, int arg4, int arg5,
                                               int arg6, int arg7, int arg8, int arg9, long long arg10, int arg11,
                                               RenderableOverlay&& renderableOverlay, bool arg13) {
        uint8_t local_d0[24];

        int local_64 = arg5;
        int local_60 = arg2;
        SoftwareModelLitRenderer* local_50 = this;
        int local_48 = arg4;
        int local_44 = arg3;
        auto local_98 = Pix3D::GetSinTable();
        auto local_b8 = Pix3D::GetCosTable();
        (modelSource._vptr[1]._dtor)(local_d0, modelSource, (unsigned long)(unsigned int)arg11);
    }

    // 0x1002f6d80
    void SoftwareModelLitRenderer::Render3(ModelLitImpl& modelLitImpl, int arg2) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int arg6;
        int arg7;
        int arg8;
        int arg10;
        int arg14;
        int arg15;
        int arg16;
        int arg17;
        int arg18;
        int arg19;
        SoftwarePix3D* pSVar9;
        int* piVar12;
        uint8_t* puVar13;
        Array<signed char>* pAVar14;
        uint8_t* pbVar15;
        unsigned long uVar16;
        unsigned long uVar17;
        unsigned long uVar18;
        Array<short>* pAVar19;
        short* psVar20;
        array<int, _65536ul>* this_00;
        unsigned long arg1_00;
        uint8_t* puVar21;
        unsigned int uVar22;

        char* pcVar11 = &field_6508[(unsigned long)arg2];
        if (*pcVar11 == '\0') {
            piVar12 = &modelLitImpl.field_104[(unsigned long)arg2];
            iVar1 = *piVar12;
            piVar12 = &modelLitImpl.field_128[(unsigned long)arg2];
            iVar2 = *piVar12;
            piVar12 = &modelLitImpl.field_152[(unsigned long)arg2];
            iVar3 = *piVar12;
            puVar13 = &field_8[(unsigned long)arg2];
            field_6437224->field_8[0] = *puVar13;
            uVar22 = 0;
            if (!(modelLitImpl.field_264 == nullptr)) {
                pAVar14 = (Array<signed char>*)*modelLitImpl.field_264;
                pbVar15 = (uint8_t*)(*pAVar14)[(unsigned long)arg2];
                uVar22 = (unsigned int)*pbVar15;
            }
            uVar16 = (unsigned long)iVar1;
            uVar17 = (unsigned long)iVar2;
            uVar18 = (unsigned long)iVar3;
            field_6437224->field_12 = uVar22;
            puVar13 = modelLitImpl.field_296;
            if (!(*puVar13 == nullptr)) {
                pAVar19 = (Array<short>*)**puVar13;
                psVar20 = (short*)(*pAVar19)[(unsigned long)arg2];
                if (*psVar20 != -1) {
                    puVar21 = modelLitImpl.field_280;
                    if (*puVar21 != nullptr) {
                        pAVar14 = (Array<signed char>*)**puVar21;
                        pcVar11 = (char*)(*pAVar14)[(unsigned long)arg2];
                        if (*pcVar11 != -1) {
                            pAVar14 = (Array<signed char>*)**puVar21;
                            pbVar15 = (uint8_t*)(*pAVar14)[(unsigned long)arg2];
                            arg1_00 = (unsigned long)*pbVar15;
                            piVar12 = &modelLitImpl.field_320[arg1_00];
                            iVar1 = *piVar12;
                            piVar12 = &modelLitImpl.field_344[arg1_00];
                            iVar2 = *piVar12;
                            piVar12 = &modelLitImpl.field_368[arg1_00];
                            iVar3 = *piVar12;
                        }
                    }
                    piVar12 = &modelLitImpl.field_224[(unsigned long)arg2];
                    iVar4 = *piVar12;
                    pSVar9 = field_6437224;
                    puVar21 = &field_39008;
                    piVar12 = (int*)(*puVar21)[uVar16];
                    iVar5 = *piVar12;
                    piVar12 = (int*)(*puVar21)[uVar17];
                    iVar6 = *piVar12;
                    piVar12 = (int*)(*puVar21)[uVar18];
                    iVar7 = *piVar12;
                    puVar21 = &field_13008;
                    piVar12 = (int*)(*puVar21)[uVar16];
                    iVar8 = *piVar12;
                    piVar12 = (int*)(*puVar21)[uVar17];
                    arg6 = *piVar12;
                    piVar12 = (int*)(*puVar21)[uVar18];
                    arg7 = *piVar12;
                    puVar21 = &modelLitImpl.field_176;
                    piVar12 = (int*)(*puVar21)[(unsigned long)arg2];
                    arg8 = *piVar12;
                    if (iVar4 == -1) {
                        piVar12 = (int*)(*puVar21)[(unsigned long)arg2];
                        iVar4 = *piVar12;
                        piVar12 = (int*)(*puVar21)[(unsigned long)arg2];
                        arg10 = *piVar12;
                        puVar21 = &field_91008;
                        uVar16 = (unsigned long)iVar1;
                        piVar12 = (int*)(*puVar21)[uVar16];
                        iVar1 = *piVar12;
                        uVar18 = (unsigned long)iVar2;
                        piVar12 = (int*)(*puVar21)[uVar18];
                        iVar2 = *piVar12;
                        uVar17 = (unsigned long)iVar3;
                        piVar12 = (int*)(*puVar21)[uVar17];
                        iVar3 = *piVar12;
                        puVar21 = &field_117008;
                        piVar12 = (int*)(*puVar21)[uVar16];
                        arg14 = *piVar12;
                        piVar12 = (int*)(*puVar21)[uVar18];
                        arg15 = *piVar12;
                        piVar12 = (int*)(*puVar21)[uVar17];
                        arg16 = *piVar12;
                        puVar21 = &field_143008;
                        piVar12 = (int*)(*puVar21)[uVar16];
                        arg17 = *piVar12;
                        piVar12 = (int*)(*puVar21)[uVar18];
                        arg18 = *piVar12;
                        piVar12 = (int*)(*puVar21)[uVar17];
                        arg19 = *piVar12;
                        pAVar19 = (Array<short>*)**puVar13;
                    } else {
                        piVar12 = (int*)modelLitImpl.field_200[(unsigned long)arg2];
                        iVar4 = *piVar12;
                        piVar12 = (int*)modelLitImpl.field_224[(unsigned long)arg2];
                        arg10 = *piVar12;
                        puVar21 = &field_91008;
                        uVar16 = (unsigned long)iVar1;
                        piVar12 = (int*)(*puVar21)[uVar16];
                        iVar1 = *piVar12;
                        uVar18 = (unsigned long)iVar2;
                        piVar12 = (int*)(*puVar21)[uVar18];
                        iVar2 = *piVar12;
                        uVar17 = (unsigned long)iVar3;
                        piVar12 = (int*)(*puVar21)[uVar17];
                        iVar3 = *piVar12;
                        puVar21 = &field_117008;
                        piVar12 = (int*)(*puVar21)[uVar16];
                        arg14 = *piVar12;
                        piVar12 = (int*)(*puVar21)[uVar18];
                        arg15 = *piVar12;
                        piVar12 = (int*)(*puVar21)[uVar17];
                        arg16 = *piVar12;
                        puVar21 = &field_143008;
                        piVar12 = (int*)(*puVar21)[uVar16];
                        arg17 = *piVar12;
                        piVar12 = (int*)(*puVar21)[uVar18];
                        arg18 = *piVar12;
                        piVar12 = (int*)(*puVar21)[uVar17];
                        arg19 = *piVar12;
                        pAVar19 = (Array<short>*)**puVar13;
                    }
                    (*pAVar19)[(unsigned long)arg2];
                    pSVar9->TextureTriangle((int)pSVar9, iVar5, iVar6, iVar7, iVar8, arg6, arg7, arg8, iVar4, arg10,
                                            iVar1, iVar2, iVar3, arg14, arg15, arg16, arg17, arg18, arg19);
                    return;
                }
            }
            piVar12 = &modelLitImpl.field_224[(unsigned long)arg2];
            iVar1 = *piVar12;
            pSVar9 = field_6437224;
            puVar13 = &field_39008;
            piVar12 = (int*)(*puVar13)[uVar16];
            iVar2 = *piVar12;
            piVar12 = (int*)(*puVar13)[uVar17];
            iVar3 = *piVar12;
            piVar12 = (int*)(*puVar13)[uVar18];
            iVar4 = *piVar12;
            puVar13 = &field_13008;
            piVar12 = (int*)(*puVar13)[uVar16];
            iVar5 = *piVar12;
            piVar12 = (int*)(*puVar13)[uVar17];
            iVar6 = *piVar12;
            piVar12 = (int*)(*puVar13)[uVar18];
            iVar7 = *piVar12;
            if (iVar1 == -1) {
                this_00 = Pix3D::GetColourTable();
                piVar12 = &modelLitImpl.field_176[(unsigned long)arg2];
                piVar12 = (int*)(*this_00)[(long)*piVar12];
                pSVar9->FlatTriangle(iVar2, iVar3, iVar4, iVar5, iVar6, iVar7, *piVar12);
            } else {
                piVar12 = &modelLitImpl.field_176[(unsigned long)arg2];
                iVar1 = *piVar12;
                piVar12 = &modelLitImpl.field_200[(unsigned long)arg2];
                iVar8 = *piVar12;
                piVar12 = &modelLitImpl.field_224[(unsigned long)arg2];
                pSVar9->GouraudTriangle(iVar2, iVar3, iVar4, iVar5, iVar6, iVar7, iVar1, iVar8, *piVar12);
            }
        } else {
            Render3ZClip(modelLitImpl, arg2);
        }
    }

    // 0x1002f7460
    void SoftwareModelLitRenderer::Render3ZClip(ModelLitImpl& modelLitImpl, int arg2) {
        uint8_t* puVar2;
        uint32_t uVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        Array<signed char>* pAVar17;
        uint8_t* pbVar18;
        uint32_t* puVar19;
        Array<short>* pAVar20;
        short* psVar21;
        char* pcVar22;
        array<int, _65536ul>* paVar23;
        int* piVar24;
        int* piVar25;
        int* piVar26;
        int* piVar27;
        int* piVar28;
        int* piVar29;
        int* piVar30;
        int* piVar31;
        int* piVar32;
        int* piVar33;
        int* piVar34;
        SoftwarePix3D_vtbl* pSVar35;
        int iVar37;
        int iVar38;
        uint8_t* puVar40;
        uint8_t* puVar41;
        SoftwarePix3D* pSVar45;
        int iVar46;
        unsigned long uVar49;
        int iVar51;

        auto this_00 = Pix3D::GetDivTable2();
        int iVar4 = field_6437224->field_20;
        int iVar5 = *(int*)&field_6437224->field_24;
        unsigned long uVar39 = (unsigned long)arg2;
        int* piVar16 = &modelLitImpl.field_104[uVar39];
        int iVar48 = *piVar16;
        piVar16 = &modelLitImpl.field_128[uVar39];
        int iVar52 = *piVar16;
        piVar16 = &modelLitImpl.field_152[uVar39];
        int iVar36 = *piVar16;
        uint8_t* puVar1 = &field_143008;
        unsigned long uVar42 = (unsigned long)iVar48;
        piVar16 = (int*)(*puVar1)[uVar42];
        int iVar6 = *piVar16;
        unsigned long uVar43 = (unsigned long)iVar52;
        piVar16 = (int*)(*puVar1)[uVar43];
        int iVar7 = *piVar16;
        unsigned long uVar44 = (unsigned long)iVar36;
        piVar16 = (int*)(*puVar1)[uVar44];
        int iVar47 = *piVar16;
        unsigned int uVar50 = 0;
        if (!(modelLitImpl.field_264 == nullptr)) {
            pAVar17 = (Array<signed char>*)*modelLitImpl.field_264;
            pbVar18 = (uint8_t*)(*pAVar17)[uVar39];
            uVar50 = (unsigned int)*pbVar18;
        }
        field_6437224->field_12 = uVar50;
        if (iVar6 < 50) {
            puVar2 = &field_91008;
            piVar16 = (int*)(*puVar2)[uVar42];
            iVar37 = *piVar16;
            puVar40 = &field_117008;
            piVar16 = (int*)(*puVar40)[uVar42];
            iVar9 = *piVar16;
            piVar16 = &modelLitImpl.field_176[uVar39];
            iVar38 = *piVar16;
            if (49 < iVar47) {
                piVar16 = (int*)(*this_00)[(long)(iVar47 - iVar6)];
                iVar51 = (50 - iVar6) * *piVar16;
                piVar16 = (int*)(*puVar2)[uVar44];
                iVar10 = *piVar16;
                pSVar45 = field_6437224;
                iVar46 = *(int*)&pSVar45->field_16;
                piVar16 = &field_6437104[0];
                *piVar16 = ((((iVar10 - iVar37) * iVar51 >> 16) + iVar37) * iVar46) / 50 + iVar4;
                piVar16 = (int*)(*puVar40)[uVar44];
                iVar10 = *piVar16;
                iVar46 = *(int*)&pSVar45->field_16;
                piVar16 = &field_6437144[0];
                *piVar16 = ((((iVar10 - iVar9) * iVar51 >> 16) + iVar9) * iVar46) / 50 + iVar5;
                piVar16 = &modelLitImpl.field_224[uVar39];
                iVar10 = *piVar16;
                piVar16 = &field_6437184[0];
                *piVar16 = ((iVar10 - iVar38) * iVar51 >> 16) + iVar38;
            }
            uVar50 = (unsigned int)(49 < iVar47);
            if (iVar7 < 50)
                goto LAB_1002f7987;
            piVar16 = (int*)(*this_00)[(long)(iVar7 - iVar6)];
            iVar51 = (50 - iVar6) * *piVar16;
            piVar16 = (int*)(*puVar2)[uVar43];
            iVar10 = *piVar16;
            pSVar45 = field_6437224;
            iVar46 = *(int*)&pSVar45->field_16;
            uVar49 = (unsigned long)uVar50;
            piVar16 = &field_6437104[uVar49];
            *piVar16 = ((((iVar10 - iVar37) * iVar51 >> 16) + iVar37) * iVar46) / 50 + iVar4;
            piVar16 = (int*)(*puVar40)[uVar43];
            iVar37 = *piVar16;
            iVar10 = *(int*)&pSVar45->field_16;
            piVar16 = &field_6437144[uVar49];
            *piVar16 = ((((iVar37 - iVar9) * iVar51 >> 16) + iVar9) * iVar10) / 50 + iVar5;
            piVar16 = &modelLitImpl.field_200[uVar39];
            iVar37 = *piVar16;
            uVar50 = uVar50 + 1;
            piVar16 = &field_6437184[uVar49];
            *piVar16 = ((iVar37 - iVar38) * iVar51 >> 16) + iVar38;
        LAB_1002f76a3:
            puVar19 = &field_13008[uVar43];
            uVar8 = *puVar19;
            uVar49 = (unsigned long)uVar50;
            puVar19 = &field_6437104[uVar49];
            *puVar19 = uVar8;
            puVar19 = &field_39008[uVar43];
            uVar8 = *puVar19;
            puVar19 = &field_6437144[uVar49];
            *puVar19 = uVar8;
            piVar16 = &modelLitImpl.field_200[uVar39];
            iVar37 = *piVar16;
        LAB_1002f7e15:
            uVar50 = uVar50 + 1;
            piVar16 = &field_6437184[uVar49];
            *piVar16 = iVar37;
            if (iVar47 < 50)
                goto LAB_1002f7b55;
        LAB_1002f7e38:
            uVar43 = (unsigned long)uVar50;
            puVar19 = &field_13008[uVar44];
            uVar8 = *puVar19;
            puVar19 = &field_6437104[uVar43];
            *puVar19 = uVar8;
            puVar19 = &field_39008[uVar44];
            uVar8 = *puVar19;
            puVar19 = &field_6437144[uVar43];
            *puVar19 = uVar8;
            piVar16 = &modelLitImpl.field_224[uVar39];
            iVar38 = *piVar16;
        LAB_1002f7fcf:
            uVar50 = uVar50 + 1;
            piVar16 = &field_6437184[uVar43];
            *piVar16 = iVar38;
        } else {
            puVar19 = &field_13008[uVar42];
            uVar8 = *puVar19;
            puVar19 = &field_6437104[0];
            *puVar19 = uVar8;
            puVar19 = &field_39008[uVar42];
            uVar8 = *puVar19;
            puVar19 = &field_6437144[0];
            *puVar19 = uVar8;
            puVar19 = &modelLitImpl.field_176[uVar39];
            uVar8 = *puVar19;
            puVar19 = &field_6437184[0];
            *puVar19 = uVar8;
            uVar50 = 1;
            if (49 < iVar7)
                goto LAB_1002f76a3;
        LAB_1002f7987:
            puVar2 = &field_91008;
            piVar16 = (int*)(*puVar2)[uVar43];
            iVar9 = *piVar16;
            puVar40 = &field_117008;
            piVar16 = (int*)(*puVar40)[uVar43];
            iVar38 = *piVar16;
            piVar16 = &modelLitImpl.field_200[uVar39];
            iVar37 = *piVar16;
            if (49 < iVar6) {
                piVar16 = (int*)(*this_00)[(long)(iVar6 - iVar7)];
                iVar51 = (50 - iVar7) * *piVar16;
                piVar16 = (int*)(*puVar2)[uVar42];
                iVar10 = *piVar16;
                pSVar45 = field_6437224;
                iVar46 = *(int*)&pSVar45->field_16;
                uVar49 = (unsigned long)uVar50;
                piVar16 = &field_6437104[uVar49];
                *piVar16 = ((((iVar10 - iVar9) * iVar51 >> 16) + iVar9) * iVar46) / 50 + iVar4;
                piVar16 = (int*)(*puVar40)[uVar42];
                iVar10 = *piVar16;
                iVar46 = *(int*)&pSVar45->field_16;
                piVar16 = &field_6437144[uVar49];
                *piVar16 = ((((iVar10 - iVar38) * iVar51 >> 16) + iVar38) * iVar46) / 50 + iVar5;
                piVar16 = &modelLitImpl.field_176[uVar39];
                iVar10 = *piVar16;
                uVar50 = uVar50 + 1;
                piVar16 = &field_6437184[uVar49];
                *piVar16 = ((iVar10 - iVar37) * iVar51 >> 16) + iVar37;
            }
            if (49 < iVar47) {
                piVar16 = (int*)(*this_00)[(long)(iVar47 - iVar7)];
                iVar51 = (50 - iVar7) * *piVar16;
                piVar16 = (int*)(*puVar2)[uVar44];
                iVar10 = *piVar16;
                pSVar45 = field_6437224;
                iVar46 = *(int*)&pSVar45->field_16;
                uVar49 = (unsigned long)uVar50;
                piVar16 = &field_6437104[uVar49];
                *piVar16 = ((((iVar10 - iVar9) * iVar51 >> 16) + iVar9) * iVar46) / 50 + iVar4;
                piVar16 = (int*)(*puVar40)[uVar44];
                iVar9 = *piVar16;
                iVar10 = *(int*)&pSVar45->field_16;
                piVar16 = &field_6437144[uVar49];
                *piVar16 = ((((iVar9 - iVar38) * iVar51 >> 16) + iVar38) * iVar10) / 50 + iVar5;
                piVar16 = &modelLitImpl.field_224[uVar39];
                iVar37 = ((*piVar16 - iVar37) * iVar51 >> 16) + iVar37;
                goto LAB_1002f7e15;
            }
            if (49 < iVar47)
                goto LAB_1002f7e38;
        LAB_1002f7b55:
            puVar2 = &field_91008;
            piVar16 = (int*)(*puVar2)[uVar44];
            iVar37 = *piVar16;
            puVar40 = &field_117008;
            piVar16 = (int*)(*puVar40)[uVar44];
            iVar9 = *piVar16;
            piVar16 = &modelLitImpl.field_224[uVar39];
            iVar38 = *piVar16;
            if (iVar7 < 50) {
                if (49 < iVar6)
                    goto LAB_1002f7ec3;
            } else {
                piVar16 = (int*)(*this_00)[(long)(iVar7 - iVar47)];
                iVar46 = (50 - iVar47) * *piVar16;
                piVar16 = (int*)(*puVar2)[uVar43];
                iVar7 = *piVar16;
                pSVar45 = field_6437224;
                iVar10 = *(int*)&pSVar45->field_16;
                uVar44 = (unsigned long)uVar50;
                piVar16 = &field_6437104[uVar44];
                *piVar16 = ((((iVar7 - iVar37) * iVar46 >> 16) + iVar37) * iVar10) / 50 + iVar4;
                piVar16 = (int*)(*puVar40)[uVar43];
                iVar7 = *piVar16;
                iVar10 = *(int*)&pSVar45->field_16;
                piVar16 = &field_6437144[uVar44];
                *piVar16 = ((((iVar7 - iVar9) * iVar46 >> 16) + iVar9) * iVar10) / 50 + iVar5;
                piVar16 = &modelLitImpl.field_200[uVar39];
                iVar7 = *piVar16;
                uVar50 = uVar50 + 1;
                piVar16 = &field_6437184[uVar44];
                *piVar16 = ((iVar7 - iVar38) * iVar46 >> 16) + iVar38;
                if (49 < iVar6) {
                LAB_1002f7ec3:
                    piVar16 = (int*)(*this_00)[(long)(iVar6 - iVar47)];
                    iVar47 = (50 - iVar47) * *piVar16;
                    piVar16 = (int*)(*puVar2)[uVar42];
                    iVar6 = *piVar16;
                    pSVar45 = field_6437224;
                    iVar7 = *(int*)&pSVar45->field_16;
                    uVar43 = (unsigned long)uVar50;
                    piVar16 = &field_6437104[uVar43];
                    *piVar16 = ((((iVar6 - iVar37) * iVar47 >> 16) + iVar37) * iVar7) / 50 + iVar4;
                    piVar16 = (int*)(*puVar40)[uVar42];
                    iVar4 = *piVar16;
                    iVar6 = *(int*)&pSVar45->field_16;
                    piVar16 = &field_6437144[uVar43];
                    *piVar16 = ((((iVar4 - iVar9) * iVar47 >> 16) + iVar9) * iVar6) / 50 + iVar5;
                    piVar16 = (int*)modelLitImpl.field_176[uVar39];
                    iVar38 = ((*piVar16 - iVar38) * iVar47 >> 16) + iVar38;
                    goto LAB_1002f7fcf;
                }
            }
        }
        puVar2 = &field_6437104;
        piVar16 = (int*)(*puVar2)[0];
        iVar4 = *piVar16;
        piVar16 = (int*)(*puVar2)[1];
        iVar5 = *piVar16;
        piVar16 = (int*)(*puVar2)[2];
        iVar6 = *piVar16;
        puVar40 = &field_6437144;
        piVar16 = (int*)(*puVar40)[0];
        iVar7 = *piVar16;
        piVar16 = (int*)(*puVar40)[1];
        iVar47 = *piVar16;
        piVar16 = (int*)(*puVar40)[2];
        iVar37 = *piVar16;
        pSVar45 = field_6437224;
        pSVar45->field_8[0] = 0;
        if (uVar50 != 4) {
            if (uVar50 != 3) {
                return;
            }
            if ((((iVar4 < 0) || (iVar5 < 0)) || (iVar6 < 0)) ||
                (((iVar9 = pSVar45->field_28, iVar9 < iVar4 || (iVar9 < iVar5)) || (iVar9 < iVar6)))) {
                pSVar45->field_8[0] = 1;
            }
            puVar2 = modelLitImpl.field_296;
            if (!(*puVar2 == nullptr)) {
                pAVar20 = (Array<short>*)**puVar2;
                psVar21 = (short*)(*pAVar20)[uVar39];
                if (*psVar21 != -1) {
                    puVar40 = modelLitImpl.field_280;
                    if (*puVar40 != nullptr) {
                        pAVar17 = (Array<signed char>*)**puVar40;
                        pcVar22 = (char*)(*pAVar17)[uVar39];
                        if (*pcVar22 != -1) {
                            pAVar17 = (Array<signed char>*)**puVar40;
                            pbVar18 = (uint8_t*)(*pAVar17)[uVar39];
                            uVar42 = (unsigned long)*pbVar18;
                            piVar16 = &modelLitImpl.field_320[uVar42];
                            iVar48 = *piVar16;
                            piVar16 = &modelLitImpl.field_344[uVar42];
                            iVar52 = *piVar16;
                            piVar16 = &modelLitImpl.field_368[uVar42];
                            iVar36 = *piVar16;
                        }
                    }
                    piVar16 = (int*)modelLitImpl.field_224[uVar39];
                    pSVar45 = field_6437224;
                    if (*piVar16 == -1) {
                        puVar40 = &modelLitImpl.field_176;
                        piVar16 = (int*)(*puVar40)[uVar39];
                        iVar9 = *piVar16;
                        piVar16 = (int*)(*puVar40)[uVar39];
                        iVar10 = *piVar16;
                        piVar16 = (int*)(*puVar40)[uVar39];
                        iVar38 = *piVar16;
                    } else {
                        puVar40 = &field_6437184;
                        piVar16 = (int*)(*puVar40)[0];
                        iVar9 = *piVar16;
                        piVar16 = (int*)(*puVar40)[1];
                        iVar10 = *piVar16;
                        piVar16 = (int*)(*puVar40)[2];
                        iVar38 = *piVar16;
                    }
                    puVar40 = &field_91008;
                    uVar42 = (unsigned long)iVar48;
                    piVar16 = (int*)(*puVar40)[uVar42];
                    iVar48 = *piVar16;
                    uVar43 = (unsigned long)iVar52;
                    piVar16 = (int*)(*puVar40)[uVar43];
                    iVar52 = *piVar16;
                    uVar44 = (unsigned long)iVar36;
                    piVar16 = (int*)(*puVar40)[uVar44];
                    iVar36 = *piVar16;
                    puVar40 = &field_117008;
                    piVar16 = (int*)(*puVar40)[uVar42];
                    iVar46 = *piVar16;
                    piVar16 = (int*)(*puVar40)[uVar43];
                    iVar51 = *piVar16;
                    piVar16 = (int*)(*puVar40)[uVar44];
                    iVar11 = *piVar16;
                    piVar16 = (int*)(*puVar1)[uVar42];
                    iVar12 = *piVar16;
                    piVar16 = (int*)(*puVar1)[uVar43];
                    iVar13 = *piVar16;
                    piVar16 = (int*)(*puVar1)[uVar44];
                    iVar14 = *piVar16;
                    pAVar20 = (Array<short>*)**puVar2;
                    (*pAVar20)[uVar39];
                    pSVar45->TextureTriangle((int)pSVar45, iVar7, iVar47, iVar37, iVar4, iVar5, iVar6, iVar9, iVar10,
                                             iVar38, iVar48, iVar52, iVar36, iVar46, iVar51, iVar11, iVar12, iVar13,
                                             iVar14);
                    return;
                }
            }
            piVar16 = &modelLitImpl.field_224[uVar39];
            pSVar45 = field_6437224;
            if (*piVar16 == -1) {
                paVar23 = Pix3D::GetColourTable();
                piVar16 = &modelLitImpl.field_176[uVar39];
                piVar16 = (int*)(*paVar23)[(long)*piVar16];
                pSVar45->FlatTriangle(iVar7, iVar47, iVar37, iVar4, iVar5, iVar6, *piVar16);
                return;
            }
            puVar1 = &field_6437184;
            piVar16 = (int*)(*puVar1)[0];
            iVar48 = *piVar16;
            piVar16 = (int*)(*puVar1)[1];
            iVar52 = *piVar16;
            piVar16 = (int*)(*puVar1)[2];
            pSVar45->GouraudTriangle(iVar7, iVar47, iVar37, iVar4, iVar5, iVar6, iVar48, iVar52, *piVar16);
            return;
        }
        if (((-1 < iVar4) && (-1 < iVar5)) &&
            ((-1 < iVar6 &&
              (((iVar9 = field_6437224->field_28, iVar4 <= iVar9 && (iVar5 <= iVar9)) && (iVar6 <= iVar9)))))) {
            piVar16 = (int*)(*puVar2)[3];
            if ((-1 < *piVar16) && (*piVar16 <= iVar9))
                goto LAB_1002f84fd;
        }
        field_6437224->field_8[0] = 1;
    LAB_1002f84fd:
        uint8_t* puVar3 = modelLitImpl.field_296;
        if (!(*puVar3 == nullptr)) {
            pAVar20 = (Array<short>*)**puVar3;
            psVar21 = (short*)(*pAVar20)[uVar39];
            if (*psVar21 != -1) {
                puVar41 = modelLitImpl.field_280;
                if (*puVar41 != nullptr) {
                    pAVar17 = (Array<signed char>*)**puVar41;
                    pcVar22 = (char*)(*pAVar17)[uVar39];
                    if (*pcVar22 != -1) {
                        pAVar17 = (Array<signed char>*)**puVar41;
                        pbVar18 = (uint8_t*)(*pAVar17)[uVar39];
                        uVar42 = (unsigned long)*pbVar18;
                        piVar16 = &modelLitImpl.field_320[uVar42];
                        iVar48 = *piVar16;
                        piVar16 = &modelLitImpl.field_344[uVar42];
                        iVar52 = *piVar16;
                        piVar16 = &modelLitImpl.field_368[uVar42];
                        iVar36 = *piVar16;
                    }
                }
                pAVar20 = (Array<short>*)**puVar3;
                (*pAVar20)[uVar39];
                piVar16 = &modelLitImpl.field_224[uVar39];
                pSVar45 = field_6437224;
                if (*piVar16 == -1) {
                    puVar41 = &modelLitImpl.field_176;
                    piVar16 = (int*)(*puVar41)[uVar39];
                    iVar9 = *piVar16;
                    piVar16 = (int*)(*puVar41)[uVar39];
                    iVar38 = *piVar16;
                    piVar16 = (int*)(*puVar41)[uVar39];
                    iVar10 = *piVar16;
                    puVar3 = &field_91008;
                    uVar42 = (unsigned long)iVar48;
                    piVar16 = (int*)(*puVar3)[uVar42];
                    iVar48 = *piVar16;
                    uVar43 = (unsigned long)iVar52;
                    piVar24 = (int*)(*puVar3)[uVar43];
                    iVar52 = *piVar24;
                    uVar44 = (unsigned long)iVar36;
                    piVar25 = (int*)(*puVar3)[uVar44];
                    iVar36 = *piVar25;
                    puVar3 = &field_117008;
                    piVar26 = (int*)(*puVar3)[uVar42];
                    iVar46 = *piVar26;
                    piVar27 = (int*)(*puVar3)[uVar43];
                    iVar51 = *piVar27;
                    piVar28 = (int*)(*puVar3)[uVar44];
                    iVar11 = *piVar28;
                    piVar29 = (int*)(*puVar1)[uVar42];
                    iVar12 = *piVar29;
                    piVar30 = (int*)(*puVar1)[uVar43];
                    iVar13 = *piVar30;
                    piVar31 = (int*)(*puVar1)[uVar44];
                    pSVar45->TextureTriangle((int)pSVar45, iVar7, iVar47, iVar37, iVar4, iVar5, iVar6, iVar9, iVar38,
                                             iVar10, iVar48, iVar52, iVar36, iVar46, iVar51, iVar11, iVar12, iVar13,
                                             *piVar31);
                    pSVar45 = field_6437224;
                    piVar32 = (int*)(*puVar40)[3];
                    iVar52 = *piVar32;
                    piVar32 = (int*)(*puVar2)[3];
                    iVar36 = *piVar32;
                    piVar32 = (int*)(*puVar41)[uVar39];
                    iVar47 = *piVar32;
                    piVar32 = (int*)(*puVar41)[uVar39];
                    iVar5 = *piVar32;
                    piVar32 = (int*)(*puVar41)[uVar39];
                    iVar9 = *piVar32;
                    iVar48 = *piVar16;
                    iVar10 = *piVar24;
                    iVar46 = *piVar25;
                    iVar51 = *piVar26;
                    iVar11 = *piVar27;
                    iVar12 = *piVar28;
                    iVar38 = *piVar29;
                    iVar13 = *piVar30;
                    iVar14 = *piVar31;
                    pSVar35 = pSVar45->_vptr;
                } else {
                    puVar3 = &field_6437184;
                    piVar16 = (int*)(*puVar3)[0];
                    iVar9 = *piVar16;
                    piVar24 = (int*)(*puVar3)[1];
                    iVar38 = *piVar24;
                    piVar24 = (int*)(*puVar3)[2];
                    iVar10 = *piVar24;
                    puVar41 = &field_91008;
                    uVar43 = (unsigned long)iVar48;
                    piVar25 = (int*)(*puVar41)[uVar43];
                    iVar48 = *piVar25;
                    uVar42 = (unsigned long)iVar52;
                    piVar26 = (int*)(*puVar41)[uVar42];
                    iVar52 = *piVar26;
                    uVar39 = (unsigned long)iVar36;
                    piVar27 = (int*)(*puVar41)[uVar39];
                    iVar36 = *piVar27;
                    puVar41 = &field_117008;
                    piVar28 = (int*)(*puVar41)[uVar43];
                    iVar46 = *piVar28;
                    piVar29 = (int*)(*puVar41)[uVar42];
                    iVar51 = *piVar29;
                    piVar30 = (int*)(*puVar41)[uVar39];
                    iVar11 = *piVar30;
                    piVar31 = (int*)(*puVar1)[uVar43];
                    iVar12 = *piVar31;
                    piVar32 = (int*)(*puVar1)[uVar42];
                    iVar13 = *piVar32;
                    piVar33 = (int*)(*puVar1)[uVar39];
                    pSVar45->TextureTriangle((int)pSVar45, iVar7, iVar47, iVar37, iVar4, iVar5, iVar6, iVar9, iVar38,
                                             iVar10, iVar48, iVar52, iVar36, iVar46, iVar51, iVar11, iVar12, iVar13,
                                             *piVar33);
                    pSVar45 = field_6437224;
                    piVar34 = (int*)(*puVar40)[3];
                    iVar52 = *piVar34;
                    piVar34 = (int*)(*puVar2)[3];
                    iVar36 = *piVar34;
                    iVar47 = *piVar16;
                    iVar5 = *piVar24;
                    piVar16 = (int*)(*puVar3)[3];
                    iVar9 = *piVar16;
                    iVar48 = *piVar25;
                    iVar10 = *piVar26;
                    iVar46 = *piVar27;
                    iVar51 = *piVar28;
                    iVar11 = *piVar29;
                    iVar12 = *piVar30;
                    iVar38 = *piVar31;
                    iVar13 = *piVar32;
                    iVar14 = *piVar33;
                    pSVar35 = pSVar45->_vptr;
                }
                (*pSVar35->TextureTriangle)((int)pSVar45, iVar7, iVar37, iVar52, iVar4, iVar6, iVar36, iVar47, iVar5,
                                            iVar9, iVar48, iVar10, iVar46, iVar51, iVar11, iVar12, iVar38, iVar13,
                                            iVar14);
                return;
            }
        }
        piVar16 = &modelLitImpl.field_224[uVar39];
        if (*piVar16 == -1) {
            paVar23 = Pix3D::GetColourTable();
            piVar16 = &modelLitImpl.field_176[uVar39];
            piVar16 = (int*)(*paVar23)[(long)*piVar16];
            iVar48 = *piVar16;
            field_6437224->FlatTriangle(iVar7, iVar47, iVar37, iVar4, iVar5, iVar6, iVar48);
            pSVar45 = field_6437224;
            piVar16 = (int*)(*puVar40)[3];
            iVar5 = *piVar16;
            piVar16 = (int*)(*puVar2)[3];
            pSVar45->FlatTriangle(iVar7, iVar37, iVar5, iVar4, iVar6, *piVar16, iVar48);
        } else {
            pSVar45 = field_6437224;
            puVar1 = &field_6437184;
            piVar16 = (int*)(*puVar1)[0];
            iVar48 = *piVar16;
            piVar24 = (int*)(*puVar1)[1];
            iVar52 = *piVar24;
            piVar24 = (int*)(*puVar1)[2];
            pSVar45->GouraudTriangle(iVar7, iVar47, iVar37, iVar4, iVar5, iVar6, iVar48, iVar52, *piVar24);
            pSVar45 = field_6437224;
            piVar25 = (int*)(*puVar40)[3];
            iVar5 = *piVar25;
            piVar25 = (int*)(*puVar2)[3];
            iVar48 = *piVar25;
            iVar52 = *piVar16;
            iVar36 = *piVar24;
            piVar16 = (int*)(*puVar1)[3];
            pSVar45->GouraudTriangle(iVar7, iVar37, iVar5, iVar4, iVar6, iVar48, iVar52, iVar36, *piVar16);
        }
    }

    // 0x1002fa940
    bool SoftwareModelLitRenderer::FastInsideTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                                                      int arg7, int arg8) {
        if ((((arg3 <= arg2) || (arg4 <= arg2)) || (arg5 <= arg2)) &&
            (((arg2 <= arg3 || (arg2 <= arg4)) || (arg2 <= arg5)))) {
            if (((arg6 <= arg1) || (arg7 <= arg1)) || (arg8 <= arg1)) {
                return arg1 <= arg8 || (arg1 <= arg7 || arg1 <= arg6);
            }
        }
        return false;
    }

} // namespace jag::oldscape::dash3d
