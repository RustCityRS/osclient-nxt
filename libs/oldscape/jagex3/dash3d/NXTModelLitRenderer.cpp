// libs/oldscape/jagex3/dash3d/NXTModelLitRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class NXTModelLitRenderer : public SoftwareModelLitRenderer // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual void ObjRender(ModelLit& modelLit, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                               int arg8);
        virtual void ObjRenderOrthog(ModelLit& modelLit, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                     int arg8, int arg9);
        virtual void WorldRender(ModelSource& modelSource, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                 int arg8, int arg9, long long arg10, int arg11, RenderableOverlay&& renderableOverlay,
                                 bool arg13);
        virtual void UploadModel(ModelLit& modelLit);
        virtual void DestroyModel(ModelLit& modelLit);
        virtual void OSRenderCore_ModelLitWorldRender(int arg1, long long arg2, int arg3, int arg4, int arg5, int arg6,
                                                      int arg7, int arg8, int arg9, int arg10, int arg11, int arg12,
                                                      int arg13, int arg14, bool arg15, bool arg16,
                                                      const RenderableOverlay& renderableOverlay);
        NXTModelLitRenderer(NXTPix3D* nxtPix3D);
        void PrepareRender(int arg1);
        void ExpireOldCachedUploadedModels();
        void Render2(const ModelLitImpl& modelLitImpl, bool arg2, bool arg3, long long arg4);
        bool IsMousePointingInsideModel(const ModelLitImpl& modelLitImpl, int arg2, int arg3, int arg4, int arg5,
                                        int arg6, int arg7, int arg8, int arg9);
        void Render3(const ModelLitImpl& modelLitImpl, int arg2);
        void Render3ZClip(const ModelLitImpl& modelLitImpl, int arg2);
        bool FastInsideTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
        static uint8_t m_debug[3]; // = { 1, 0, 0 }

    private:
        uint8_t _unknown_6437232[78120];
        int field_6515352;
        uint8_t _unknown_6515356[12];
    };

    // 0x100d429a1
    uint8_t NXTModelLitRenderer::m_debug[3] = {1, 0, 0};

    // 0x100360a70
    NXTModelLitRenderer::NXTModelLitRenderer(NXTPix3D* nxtPix3D) : ModelLitRenderer<NXTPix3D>(nxtPix3D) {}

    // 0x100360d80
    void NXTModelLitRenderer::PrepareRender(int arg1) {
        field_6515352 = arg1;
        ModelLitRenderer_lastCachedModelsTotal = field_6515360.size();
        ExpireOldCachedUploadedModels();
    }

    // 0x100360dc0
    void NXTModelLitRenderer::ExpireOldCachedUploadedModels() {
        uint8_t* this_00 = &field_6515360;
        auto psVar1 = this_00->HeapBeginPtr();
        auto psVar2 = this_00->end();
        psVar1 = eastl::remove_if<shared_ptr<ModelLitImpl>*, NXTModelLitRenderer::ExpireOldCachedUploadedModels()::__5>(
            psVar1, psVar2, (__5*)this);
        psVar2 = (shared_ptr<ModelLitImpl>*)this_00->end();
        this_00->erase(psVar1, psVar2);
    }

    // 0x100360ef0
    void NXTModelLitRenderer::ObjRender(ModelLit& modelLit, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                        int arg8) {
        (modelLit._vptr[3]._x7e___2)(modelLit);
    }

    // 0x1003612f0
    void NXTModelLitRenderer::Render2(const ModelLitImpl& modelLitImpl, bool arg2, bool arg3, long long arg4) {
        uint8_t* this_00;
        uint8_t* puVar1;
        uint8_t* puVar2;
        uint8_t* puVar3;
        uint8_t* puVar4;
        uint8_t* puVar5;
        uint8_t* this_01;
        uint8_t bVar6;
        unsigned short uVar7;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        uint16_t* puVar15;
        int* piVar16;
        unsigned int* puVar17;
        uint8_t* puVar18;
        uint64_t uVar19;
        array<unsigned short, 512ul>* this_02;
        unsigned short* puVar20;
        void* pvVar21;
        uint32_t* puVar22;
        Array<signed char>* this_03;
        uint8_t* pbVar23;
        array<int, 2000ul>* paVar24;
        array<int, _2000ul>* paVar25;
        int iVar26;
        unsigned long uVar27;
        array<bool, 6500ul>* paVar28;
        int iVar29;
        unsigned long uVar30;
        unsigned short uVar31;
        int iVar32;
        unsigned long uVar33;
        bool bVar34;
        unsigned long uVar35;
        array<unsigned short, 512ul> aaStack_2054;
        int in_stack_ffffffffffffdfb0;
        int local_90;
        int local_80;
        int local_68;

        unsigned int uVar8 = modelLitImpl.field_516;
        if ((int)uVar8 < 6000) {
            this_00 = &field_169008;
            if (0 < (int)uVar8) {
                uVar27 = 0;
                do {
                    puVar15 = (uint16_t*)(*this_00)[uVar27];
                    *puVar15 = 0;
                    uVar27 = uVar27 + 1;
                } while (uVar8 != uVar27);
            }
            if (0 < modelLitImpl.field_96) {
                if (6500 < modelLitImpl.field_96) {
                    LogAssert("m.m_numFaces <= Model::MAX_VERTS",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "dash3d/NXTModelLitRenderer.cpp",
                              521, nullptr);
                }
                if ((short)modelLitImpl.field_96 != 0) {
                    puVar1 = &field_13008;
                    puVar2 = &field_39008;
                    puVar3 = &field_65008;
                    puVar4 = &field_6437232;
                    puVar5 = &field_6463272;
                    this_01 = &field_6489312;
                    uVar31 = 0;
                    do {
                        uVar27 = (unsigned long)uVar31;
                        piVar16 = &modelLitImpl.field_224[uVar27];
                        if (*piVar16 != -2) {
                            piVar16 = &modelLitImpl.field_104[uVar27];
                            uVar30 = (unsigned long)*piVar16;
                            piVar16 = &modelLitImpl.field_128[uVar27];
                            uVar35 = (unsigned long)*piVar16;
                            piVar16 = &modelLitImpl.field_152[uVar27];
                            uVar33 = (unsigned long)*piVar16;
                            piVar16 = (int*)(*puVar1)[uVar30];
                            iVar26 = *piVar16;
                            piVar16 = (int*)(*puVar1)[uVar35];
                            iVar29 = *piVar16;
                            piVar16 = (int*)(*puVar1)[uVar33];
                            iVar32 = *piVar16;
                            if ((!arg2) || (((iVar26 != -5000 && (iVar29 != -5000)) && (iVar32 != -5000)))) {
                                if (arg3 != false) {
                                    puVar17 = (unsigned int*)(*puVar2)[uVar30];
                                    uVar8 = *puVar17;
                                    piVar16 = (int*)(*puVar2)[uVar35];
                                    iVar9 = *piVar16;
                                    piVar16 = (int*)(*puVar2)[uVar33];
                                    if (((MousePickingHelper*)(unsigned long)uVar8)
                                            ->IsMouseRoughlyInsideTriangle(iVar9, *piVar16, iVar26, iVar29, iVar32, 0,
                                                                           in_stack_ffffffffffffdfb0) != '\0') {
                                        MousePickingHelper::AddPickingEntity(arg4);
                                        arg3 = false;
                                    }
                                }
                                piVar16 = (int*)(*puVar2)[uVar33];
                                iVar9 = *piVar16;
                                piVar16 = (int*)(*puVar2)[uVar35];
                                iVar10 = *piVar16;
                                piVar16 = (int*)(*puVar2)[uVar30];
                                if (0 <
                                    (iVar29 - iVar32) * (*piVar16 - iVar10) + (iVar9 - iVar10) * (iVar26 - iVar29)) {
                                    puVar18 = &field_6508[uVar27];
                                    *puVar18 = 0;
                                    bVar34 = true;
                                    paVar28 = (array<bool, 6500ul>*)&field_8;
                                    if (((-1 < iVar26) && (-1 < iVar29)) && (-1 < iVar32)) {
                                        iVar9 = field_6437224->field_28;
                                        bVar34 = iVar9 < iVar32 || (iVar9 < iVar29 || iVar9 < iVar26);
                                    }
                                LAB_1003617f0:
                                    uVar19 = (*paVar28)[uVar27];
                                    *(bool*)uVar19 = bVar34;
                                    piVar16 = (int*)(*puVar3)[uVar30];
                                    iVar26 = *piVar16;
                                    piVar16 = (int*)(*puVar3)[uVar35];
                                    iVar29 = *piVar16;
                                    piVar16 = (int*)(*puVar3)[uVar33];
                                    uVar27 = (long)((iVar26 + iVar29 + *piVar16) / 3) + (long)modelLitImpl.field_520;
                                    this_02 = &field_181008[uVar27];
                                    puVar20 = (unsigned short*)(*this_00)[uVar27];
                                    uVar7 = *puVar20;
                                    *puVar20 = uVar7 + 1;
                                    puVar20 = (unsigned short*)(*this_02)[(unsigned long)uVar7];
                                    *puVar20 = uVar31;
                                }
                            } else {
                                piVar16 = (int*)(*puVar4)[uVar30];
                                iVar26 = *piVar16;
                                piVar16 = (int*)(*puVar4)[uVar35];
                                iVar29 = *piVar16;
                                piVar16 = (int*)(*puVar4)[uVar33];
                                iVar32 = *piVar16;
                                piVar16 = (int*)(*puVar5)[uVar30];
                                iVar9 = *piVar16;
                                piVar16 = (int*)(*puVar5)[uVar35];
                                iVar10 = *piVar16;
                                piVar16 = (int*)(*puVar5)[uVar33];
                                iVar11 = *piVar16;
                                piVar16 = (int*)(*this_01)[uVar30];
                                iVar12 = *piVar16;
                                piVar16 = (int*)(*this_01)[uVar35];
                                iVar13 = *piVar16;
                                piVar16 = (int*)(*this_01)[uVar33];
                                bVar34 = true;
                                paVar28 = (array<bool, 6500ul>*)&field_6508;
                                if (0 < ((iVar11 - iVar10) * (iVar26 - iVar29) - (iVar9 - iVar10) * (iVar32 - iVar29)) *
                                                iVar13 +
                                            ((iVar12 - iVar13) * (iVar32 - iVar29) -
                                             (*piVar16 - iVar13) * (iVar26 - iVar29)) *
                                                iVar10 +
                                            ((*piVar16 - iVar13) * (iVar9 - iVar10) -
                                             (iVar12 - iVar13) * (iVar11 - iVar10)) *
                                                iVar29)
                                    goto LAB_1003617f0;
                            }
                        }
                        uVar31 = uVar31 + 1;
                    } while (uVar31 < (unsigned short)modelLitImpl.field_96);
                }
            }
            bVar34 = modelLitImpl.field_248 == nullptr;
            if (bVar34) {
                if (0 < (long)modelLitImpl.field_516) {
                    uVar27 = (long)modelLitImpl.field_516;
                    do {
                        uVar30 = uVar27 - 1;
                        puVar20 = (unsigned short*)(*this_00)[uVar30];
                        uVar31 = *puVar20;
                        if ((unsigned long)uVar31 != 0) {
                            pvVar21 = &field_181008[uVar30];
                            _memcpy(&aaStack_2054 + 4, pvVar21, 1024);
                            uVar33 = 0;
                            do {
                                puVar20 = (unsigned short*)(*(&aaStack_2054 + 4))[uVar33];
                                Render3(modelLitImpl, (unsigned int)*puVar20);
                                uVar33 = uVar33 + 1;
                            } while (uVar31 != uVar33);
                        }
                        bVar34 = 1 < (long)uVar27;
                        uVar27 = uVar30;
                    } while (bVar34);
                }
            } else {
                puVar1 = &field_6325008;
                puVar2 = &field_6437056;
                uVar27 = 0;
                do {
                    puVar22 = (uint32_t*)(*puVar1)[uVar27];
                    *puVar22 = 0;
                    puVar22 = (uint32_t*)(*puVar2)[uVar27];
                    *puVar22 = 0;
                    uVar27 = uVar27 + 1;
                } while (uVar27 != 12);
                puVar3 = &field_6325056;
                puVar4 = &field_6429056;
                puVar5 = &field_6421056;
                if (0 < (long)modelLitImpl.field_516) {
                    uVar27 = (long)modelLitImpl.field_516;
                    do {
                        uVar30 = uVar27 - 1;
                        puVar20 = (unsigned short*)(*this_00)[uVar30];
                        uVar31 = *puVar20;
                        if ((unsigned long)uVar31 != 0) {
                            pvVar21 = &field_181008[uVar30];
                            _memcpy(&aaStack_2054 + 4, pvVar21, 1024);
                            uVar33 = 0;
                            do {
                                puVar20 = (unsigned short*)(*(&aaStack_2054 + 4))[uVar33];
                                uVar7 = *puVar20;
                                this_03 = (Array<signed char>*)*modelLitImpl.field_248;
                                pbVar23 = (uint8_t*)(*this_03)[(unsigned long)uVar7];
                                bVar6 = *pbVar23;
                                uVar35 = (unsigned long)bVar6;
                                piVar16 = (int*)(*puVar1)[uVar35];
                                iVar26 = *piVar16;
                                *piVar16 = iVar26 + 1;
                                paVar24 = (array<int, 2000ul>*)(*puVar3)[uVar35];
                                puVar17 = (unsigned int*)(*paVar24)[(long)iVar26];
                                *puVar17 = (unsigned int)uVar7;
                                if (uVar35 < 10) {
                                    piVar16 = (int*)(*puVar2)[uVar35];
                                    *piVar16 = *piVar16 + (int)uVar30;
                                } else {
                                    if (bVar6 == 10) {
                                        paVar24 = (array<int, 2000ul>*)puVar5;
                                    } else {
                                        paVar24 = (array<int, 2000ul>*)puVar4;
                                    }
                                    piVar16 = (int*)(*paVar24)[(long)iVar26];
                                    *piVar16 = (int)uVar30;
                                }
                                uVar33 = uVar33 + 1;
                            } while (uVar31 != uVar33);
                        }
                        bVar34 = 1 < (long)uVar27;
                        uVar27 = uVar30;
                    } while (bVar34);
                }
                piVar16 = (int*)(*puVar1)[1];
                iVar26 = *piVar16;
                if ((iVar26 < 1) && (piVar16 = (int*)(*puVar1)[2], *piVar16 < 1)) {
                    local_68 = 0;
                } else {
                    piVar16 = (int*)(*puVar2)[1];
                    iVar29 = *piVar16;
                    piVar16 = (int*)(*puVar2)[2];
                    iVar32 = *piVar16;
                    piVar16 = (int*)(*puVar1)[2];
                    local_68 = (iVar29 + iVar32) / (iVar26 + *piVar16);
                }
                piVar16 = (int*)(*puVar1)[3];
                iVar26 = *piVar16;
                if ((iVar26 < 1) && (piVar16 = (int*)(*puVar1)[4], *piVar16 < 1)) {
                    local_90 = 0;
                } else {
                    piVar16 = (int*)(*puVar2)[3];
                    iVar29 = *piVar16;
                    piVar16 = (int*)(*puVar2)[4];
                    iVar32 = *piVar16;
                    piVar16 = (int*)(*puVar1)[4];
                    local_90 = (iVar29 + iVar32) / (iVar26 + *piVar16);
                }
                piVar16 = (int*)(*puVar1)[6];
                iVar26 = *piVar16;
                if ((iVar26 < 1) && (piVar16 = (int*)(*puVar1)[8], *piVar16 < 1)) {
                    local_80 = 0;
                } else {
                    piVar16 = (int*)(*puVar2)[6];
                    iVar29 = *piVar16;
                    piVar16 = (int*)(*puVar2)[8];
                    iVar32 = *piVar16;
                    piVar16 = (int*)(*puVar1)[8];
                    local_80 = (iVar29 + iVar32) / (iVar26 + *piVar16);
                }
                piVar16 = (int*)(*puVar1)[10];
                iVar26 = *piVar16;
                paVar24 = (array<int, 2000ul>*)(*puVar3)[10];
                if (iVar26 == 0) {
                    piVar16 = (int*)(*puVar1)[11];
                    iVar26 = *piVar16;
                    pvVar21 = (void*)(*puVar3)[11];
                    _memcpy(paVar24, pvVar21, 8000);
                    _memcpy(puVar5, puVar4, 8000);
                }
                if (iVar26 < 1) {
                    iVar29 = -1000;
                } else {
                    piVar16 = (int*)(*puVar5)[0];
                    iVar29 = *piVar16;
                }
                uVar27 = 0;
                iVar32 = 0;
                do {
                    if (uVar27 == 0) {
                        while (local_68 < iVar29) {
                            uVar30 = (unsigned long)iVar32;
                            iVar32 = iVar32 + 1;
                            piVar16 = (int*)(*paVar24)[uVar30];
                            Render3(modelLitImpl, *piVar16);
                            if (iVar32 == iVar26) {
                                paVar25 = (array<int, _2000ul>*)(*puVar3)[11];
                                bVar34 = paVar24 != paVar25;
                                if (bVar34) {
                                    piVar16 = (int*)(*puVar1)[11];
                                    iVar26 = *piVar16;
                                    _memcpy(paVar24, paVar25, 8000);
                                    _memcpy(puVar5, puVar4, 8000);
                                    iVar32 = 0;
                                }
                            }
                            iVar29 = -1000;
                            if (iVar32 < iVar26) {
                                piVar16 = (int*)(*puVar5)[(long)iVar32];
                                iVar29 = *piVar16;
                            }
                        }
                    }
                    while ((uVar27 == 3 && (local_90 < iVar29))) {
                        uVar30 = (unsigned long)iVar32;
                        iVar32 = iVar32 + 1;
                        piVar16 = (int*)(*paVar24)[uVar30];
                        Render3(modelLitImpl, *piVar16);
                        if (iVar32 == iVar26) {
                            paVar25 = (array<int, _2000ul>*)(*puVar3)[11];
                            bVar34 = paVar24 != paVar25;
                            if (bVar34) {
                                piVar16 = (int*)(*puVar1)[11];
                                iVar26 = *piVar16;
                                _memcpy(paVar24, paVar25, 8000);
                                _memcpy(puVar5, puVar4, 8000);
                                iVar32 = 0;
                            }
                        }
                        iVar29 = -1000;
                        if (iVar32 < iVar26) {
                            piVar16 = (int*)(*puVar5)[(long)iVar32];
                            iVar29 = *piVar16;
                        }
                    }
                    while ((uVar27 == 5 && (local_80 < iVar29))) {
                        uVar30 = (unsigned long)iVar32;
                        iVar32 = iVar32 + 1;
                        piVar16 = (int*)(*paVar24)[uVar30];
                        Render3(modelLitImpl, *piVar16);
                        if (iVar32 == iVar26) {
                            paVar25 = (array<int, _2000ul>*)(*puVar3)[11];
                            bVar34 = paVar24 != paVar25;
                            if (bVar34) {
                                piVar16 = (int*)(*puVar1)[11];
                                iVar26 = *piVar16;
                                _memcpy(paVar24, paVar25, 8000);
                                _memcpy(puVar5, puVar4, 8000);
                                iVar32 = 0;
                            }
                        }
                        iVar29 = -1000;
                        if (iVar32 < iVar26) {
                            piVar16 = (int*)(*puVar5)[(long)iVar32];
                            iVar29 = *piVar16;
                        }
                    }
                    puVar17 = (unsigned int*)(*puVar1)[uVar27];
                    uVar8 = *puVar17;
                    pvVar21 = (void*)(*puVar3)[uVar27];
                    _memcpy((array<int, 2000ul>*)(&aaStack_2054 + 4), pvVar21, 8000);
                    if (0 < (int)uVar8) {
                        uVar30 = 0;
                        do {
                            piVar16 = (int*)(*((&aaStack_2054 + 4)))[uVar30];
                            Render3(modelLitImpl, *piVar16);
                            uVar30 = uVar30 + 1;
                        } while (uVar8 != uVar30);
                    }
                    uVar27 = uVar27 + 1;
                } while (uVar27 != 10);
                while (iVar29 != -1000) {
                    uVar27 = (unsigned long)iVar32;
                    iVar32 = iVar32 + 1;
                    piVar16 = (int*)(*paVar24)[uVar27];
                    Render3(modelLitImpl, *piVar16);
                    if (iVar32 == iVar26) {
                        paVar25 = (array<int, _2000ul>*)(*puVar3)[11];
                        bVar34 = paVar24 != paVar25;
                        if (bVar34) {
                            _memcpy(paVar24, paVar25, 8000);
                            piVar16 = (int*)(*puVar1)[11];
                            iVar26 = *piVar16;
                            _memcpy(puVar5, puVar4, 8000);
                            iVar32 = 0;
                        }
                    }
                    iVar29 = -1000;
                    if (iVar32 < iVar26) {
                        piVar16 = (int*)(*puVar5)[(long)iVar32];
                        iVar29 = *piVar16;
                    }
                }
            }
        }
    }

    // 0x1003620b0
    void NXTModelLitRenderer::ObjRenderOrthog(ModelLit& modelLit, int arg2, int arg3, int arg4, int arg5, int arg6,
                                              int arg7, int arg8, int arg9) {
        (modelLit._vptr[3]._x7e___2)(modelLit);
    }

    // 0x100362450
    void NXTModelLitRenderer::WorldRender(ModelSource& modelSource, int arg2, int arg3, int arg4, int arg5, int arg6,
                                          int arg7, int arg8, int arg9, long long arg10, int arg11,
                                          RenderableOverlay&& renderableOverlay, bool arg13) {
        uint8_t local_a0[80];
        NXTModelLitRenderer* local_50;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        if (ModelLitRenderer_drawModels != '\0') {
            local_50 = this;
            local_40 = arg5;
            local_3c = arg3;
            local_38 = arg2;
            local_34 = arg4;
            SystemTimer::GetTimeNS<std::chrono::steady_clock>();
            (modelSource._vptr[1]._dtor)(local_a0, modelSource, (unsigned long)(unsigned int)arg11);
        }
    }

    // 0x1003629c0
    bool NXTModelLitRenderer::IsMousePointingInsideModel(const ModelLitImpl& modelLitImpl, int arg2, int arg3, int arg4,
                                                         int arg5, int arg6, int arg7, int arg8, int arg9) {
        uint8_t* this_00;
        uint8_t* this_01;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        NXTPix3D* pNVar6;
        int iVar7;
        int* piVar8;
        uint32_t* puVar9;
        ModelLit* modelLit;
        uint64_t uVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        array<int, 6500ul>* this_02;
        int iVar14;
        int iVar15;
        unsigned long arg1;

        if (modelLitImpl.field_516 < 6000) {
            iVar1 = field_6437224->field_20;
            iVar2 = field_6437224->field_24;
            iVar14 = arg4;
            piVar8 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_sinTable))[(long)arg2];
            iVar3 = *piVar8;
            piVar8 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_cosTable))[(long)arg2];
            this_00 = &field_39008;
            this_01 = &field_13008;
            if (0 < modelLitImpl.field_20) {
                iVar4 = *piVar8;
                arg1 = 0;
                do {
                    piVar8 = &modelLitImpl.field_24[arg1];
                    iVar14 = *piVar8;
                    piVar8 = &modelLitImpl.field_48[arg1];
                    iVar13 = *piVar8;
                    piVar8 = &modelLitImpl.field_72[arg1];
                    iVar7 = *piVar8;
                    iVar12 = iVar14;
                    if (arg2 != 0) {
                        iVar12 = iVar14 * iVar4 + iVar7 * iVar3 >> 16;
                        iVar7 = iVar7 * iVar4 - iVar14 * iVar3 >> 16;
                    }
                    iVar11 = (iVar7 + arg9) * arg6 - (iVar12 + arg7) * arg5 >> 16;
                    iVar15 = iVar11 * arg4 + (iVar13 + arg8) * arg3;
                    iVar14 = arg6;
                    if (iVar15 < 3276800) {
                        puVar9 = (uint32_t*)(*this_00)[arg1];
                        *puVar9 = 4294967295;
                        iVar13 = -1;
                        this_02 = (array<int, 6500ul>*)this_01;
                    } else {
                        iVar15 = iVar15 >> 16;
                        pNVar6 = field_6437224;
                        iVar5 = pNVar6->field_16;
                        piVar8 = (int*)(*this_01)[arg1];
                        *piVar8 = (((iVar12 + arg7) * arg6 + (iVar7 + arg9) * arg5 >> 16) * iVar5) / iVar15 + iVar1;
                        iVar13 = (((iVar13 + arg8) * arg4 - iVar11 * arg3 >> 16) * pNVar6->field_16) / iVar15 + iVar2;
                        this_02 = (array<int, 6500ul>*)this_00;
                    }
                    piVar8 = (int*)(*this_02)[arg1];
                    *piVar8 = iVar13;
                    arg1 = arg1 + 1;
                } while ((long)arg1 < (long)modelLitImpl.field_20);
            }
            modelLit = (ModelLit*)this_01->data();
            piVar8 = (int*)this_00->data();
            uVar10 = modelLitImpl.DoesMouseIntersectModelPoints(*modelLit, piVar8, 5, iVar14);
        } else {
            uVar10 = 0;
        }
        return uVar10;
    }

    // 0x100362cd0
    void NXTModelLitRenderer::Render3(const ModelLitImpl& modelLitImpl, int arg2) {
        uint8_t* this_00;
        uint8_t* this_01;
        uint8_t* puVar1;
        short sVar2;
        int iVar4;
        int iVar5;
        int iVar6;
        int arg10;
        int arg11;
        int arg12;
        Array<signed char>* pAVar11;
        uint8_t* pbVar12;
        Array<short>* pAVar14;
        short* psVar15;
        char* pcVar16;
        unsigned int* puVar17;
        unsigned long uVar18;
        float fVar20;
        float fVar21;
        float fVar22;
        float fVar23;
        float fVar24;
        float fVar25;
        float fVar26;
        float fVar27;
        float fVar28;
        float fVar29;
        float fVar30;
        float fVar31;
        float local_7c;
        float local_78;
        float local_74;
        float local_68;
        float local_64;
        float local_60;
        float local_5c;
        float local_58;
        float local_54;
        NXTPix3D* local_50;
        NXTPix3D* local_48;
        float local_34;

        int* piVar8 = &modelLitImpl.field_104[(unsigned long)arg2];
        float local_38 = (float)*piVar8;
        uint32_t* puVar9 = &modelLitImpl.field_128[(unsigned long)arg2];
        local_50 = (NXTPix3D*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)(*puVar9));
        piVar8 = &modelLitImpl.field_152[(unsigned long)arg2];
        int iVar3 = *piVar8;
        uint8_t* puVar10 = &field_8[(unsigned long)arg2];
        field_6437224->field_8 = (bool)*puVar10;
        unsigned int uVar19 = 0;
        if (!(modelLitImpl.field_264 == nullptr)) {
            pAVar11 = (Array<signed char>*)*modelLitImpl.field_264;
            pbVar12 = (uint8_t*)(*pAVar11)[(unsigned long)arg2];
            uVar19 = (unsigned int)*pbVar12;
        }
        unsigned long local_70 = (unsigned long)(int)local_38;
        unsigned long uVar13 = (unsigned long)(int)local_50._0_4_;
        unsigned long arg1 = (unsigned long)iVar3;
        field_6437224->field_12 = uVar19;
        puVar10 = modelLitImpl.field_296;
        float local_3c = (float)iVar3;
        if (!(*puVar10 == nullptr)) {
            pAVar14 = (Array<short>*)**puVar10;
            psVar15 = (short*)(*pAVar14)[(unsigned long)arg2];
            if (*psVar15 != -1) {
                puVar1 = modelLitImpl.field_280;
                if (*puVar1 != nullptr) {
                    pAVar11 = (Array<signed char>*)**puVar1;
                    pcVar16 = (char*)(*pAVar11)[(unsigned long)arg2];
                    fVar20 = local_38;
                    if (*pcVar16 != -1) {
                        pAVar11 = (Array<signed char>*)**puVar1;
                        pbVar12 = (uint8_t*)(*pAVar11)[(unsigned long)arg2];
                        uVar18 = (unsigned long)*pbVar12;
                        piVar8 = &modelLitImpl.field_320[uVar18];
                        fVar20 = (float)*piVar8;
                        puVar9 = &modelLitImpl.field_344[uVar18];
                        local_50 = (NXTPix3D*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)(*puVar9));
                        piVar8 = &modelLitImpl.field_368[uVar18];
                        local_3c = (float)*piVar8;
                    }
                } else {
                    fVar20 = local_38;
                }
                puVar1 = &field_6437232;
                uVar18 = (unsigned long)(int)fVar20;
                piVar8 = (int*)(*puVar1)[uVar18];
                local_48._0_4_ = (float)*piVar8;
                this_00 = &field_6463272;
                piVar8 = (int*)(*this_00)[uVar18];
                local_34 = (float)*piVar8;
                this_01 = &field_6489312;
                piVar8 = (int*)(*this_01)[uVar18];
                local_38 = (float)*piVar8;
                uVar18 = (unsigned long)(int)local_50._0_4_;
                piVar8 = (int*)(*puVar1)[uVar18];
                local_54 = (float)*piVar8 - local_48._0_4_;
                piVar8 = (int*)(*this_00)[uVar18];
                fVar20 = (float)*piVar8 - local_34;
                piVar8 = (int*)(*this_01)[uVar18];
                fVar21 = (float)*piVar8 - local_38;
                uVar18 = (unsigned long)(int)local_3c;
                piVar8 = (int*)(*puVar1)[uVar18];
                fVar22 = (float)*piVar8 - local_48._0_4_;
                piVar8 = (int*)(*this_00)[uVar18];
                fVar23 = (float)*piVar8 - local_34;
                piVar8 = (int*)(*this_01)[uVar18];
                uVar18 = local_70;
                fVar24 = (float)*piVar8 - local_38;
                piVar8 = (int*)(*puVar1)[local_70];
                fVar25 = (float)*piVar8 - local_48._0_4_;
                piVar8 = (int*)(*this_00)[uVar18];
                local_60 = (float)*piVar8 - local_34;
                piVar8 = (int*)(*this_01)[uVar18];
                local_50._0_4_ = (float)*piVar8 - local_38;
                piVar8 = (int*)(*puVar1)[uVar13];
                local_5c = (float)*piVar8 - local_48._0_4_;
                piVar8 = (int*)(*this_00)[uVar13];
                local_58 = (float)*piVar8 - local_34;
                piVar8 = (int*)(*this_01)[uVar13];
                local_3c = (float)*piVar8 - local_38;
                piVar8 = (int*)(*puVar1)[arg1];
                local_48 = (NXTPix3D*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)((float)*piVar8 - local_48._0_4_));
                piVar8 = (int*)(*this_00)[arg1];
                local_34 = (float)*piVar8 - local_34;
                piVar8 = (int*)(*this_01)[arg1];
                fVar26 = (float)*piVar8 - local_38;
                fVar30 = fVar24 * fVar20 - fVar23 * fVar21;
                local_38 = fVar22 * fVar21 - fVar24 * local_54;
                fVar31 = fVar23 * local_54 - fVar22 * fVar20;
                fVar27 = fVar31 * fVar23 - local_38 * fVar24;
                fVar28 = fVar30 * fVar24 - fVar31 * fVar22;
                fVar29 = local_38 * fVar22 - fVar30 * fVar23;
                local_74 = 1.0 / (fVar29 * fVar21 + fVar28 * fVar20 + fVar27 * local_54);
                local_7c = (local_50._0_4_ * fVar29 + fVar28 * local_60 + fVar27 * fVar25) * local_74;
                local_78 = (local_3c * fVar29 + local_58 * fVar28 + local_5c * fVar27) * local_74;
                local_74 = (fVar29 * fVar26 + fVar28 * local_34 + fVar27 * local_48._0_4_) * local_74;
                local_68 = 0.0;
                local_64 = 1.0;
                local_7c = jag::math::Clamp<float>(local_7c, local_68, local_64);
                local_68 = 0.0;
                local_64 = 1.0;
                local_78 = jag::math::Clamp<float>(local_78, local_68, local_64);
                local_68 = 0.0;
                local_64 = 1.0;
                local_74 = jag::math::Clamp<float>(local_74, local_68, local_64);
                fVar27 = fVar31 * fVar20 - local_38 * fVar21;
                fVar21 = fVar21 * fVar30 - fVar31 * local_54;
                fVar20 = local_38 * local_54 - fVar30 * fVar20;
                local_38 = 1.0 / (fVar24 * fVar20 + fVar23 * fVar21 + fVar22 * fVar27);
                local_50 =
                    (NXTPix3D*)(((uint64_t)local_50._4_4_ << 32) |
                                (uint32_t)((local_50._0_4_ * fVar20 + local_60 * fVar21 + fVar25 * fVar27) * local_38));
                local_3c = (local_3c * fVar20 + local_58 * fVar21 + local_5c * fVar27) * local_38;
                local_38 = (fVar20 * fVar26 + fVar21 * local_34 + fVar27 * local_48._0_4_) * local_38;
                piVar8 = &modelLitImpl.field_224[(unsigned long)arg2];
                uVar18 = local_70;
                local_34 = (float)*piVar8;
                local_48 = field_6437224;
                piVar8 = (int*)(*this_00)[local_70];
                iVar3 = *piVar8;
                piVar8 = (int*)(*this_00)[uVar13];
                local_60 = (float)*piVar8;
                piVar8 = (int*)(*this_00)[arg1];
                local_5c = (float)*piVar8;
                piVar8 = (int*)(*puVar1)[uVar18];
                local_58 = (float)*piVar8;
                piVar8 = (int*)(*puVar1)[uVar13];
                local_54 = (float)*piVar8;
                piVar8 = (int*)(*puVar1)[arg1];
                iVar4 = *piVar8;
                puVar17 = (unsigned int*)(*this_01)[uVar18];
                local_70 = (unsigned long)*puVar17;
                piVar8 = (int*)(*this_01)[uVar13];
                iVar5 = *piVar8;
                piVar8 = (int*)(*this_01)[arg1];
                iVar6 = *piVar8;
                puVar1 = &modelLitImpl.field_176;
                piVar8 = (int*)(*puVar1)[(unsigned long)arg2];
                arg10 = *piVar8;
                if (local_34 == -NAN) {
                    piVar8 = (int*)(*puVar1)[(unsigned long)arg2];
                    arg11 = *piVar8;
                    piVar8 = (int*)(*puVar1)[(unsigned long)arg2];
                    fVar21 = local_74;
                    fVar20 = local_7c;
                    arg12 = *piVar8;
                    local_34 = local_78;
                    pAVar14 = (Array<short>*)**puVar10;
                    psVar15 = (short*)(*pAVar14)[(unsigned long)arg2];
                    sVar2 = *psVar15;
                } else {
                    piVar8 = (int*)modelLitImpl.field_200[(unsigned long)arg2];
                    arg11 = *piVar8;
                    piVar8 = (int*)modelLitImpl.field_224[(unsigned long)arg2];
                    fVar21 = local_74;
                    fVar20 = local_7c;
                    arg12 = *piVar8;
                    local_34 = local_78;
                    pAVar14 = (Array<short>*)**puVar10;
                    psVar15 = (short*)(*pAVar14)[(unsigned long)arg2];
                    sVar2 = *psVar15;
                }
                local_48->TextureTriangleOpenGL(iVar3, (int)local_60, (int)local_5c, (int)local_58, (int)local_54,
                                                iVar4, (int)local_70, iVar5, iVar6, arg10, arg11, arg12, fVar20,
                                                local_34, fVar21, local_50._0_4_, local_3c, local_38, (int)sVar2);
                return;
            }
        }
        piVar8 = &modelLitImpl.field_224[(unsigned long)arg2];
        uVar18 = local_70;
        local_3c = (float)*piVar8;
        local_50 = field_6437224;
        puVar10 = &field_39008;
        piVar8 = (int*)(*puVar10)[local_70];
        local_38 = (float)*piVar8;
        piVar8 = (int*)(*puVar10)[uVar13];
        local_34 = (float)*piVar8;
        puVar9 = (uint32_t*)(*puVar10)[arg1];
        local_48 = (NXTPix3D*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)(*puVar9));
        puVar10 = &field_13008;
        puVar9 = (uint32_t*)(*puVar10)[uVar18];
        local_70 = (((uint64_t)local_70._4_4_ << 32) | (uint32_t)(*puVar9));
        piVar8 = (int*)(*puVar10)[uVar13];
        iVar3 = *piVar8;
        piVar8 = (int*)(*puVar10)[arg1];
        iVar4 = *piVar8;
        uVar13 = (unsigned long)arg2;
        piVar8 = &modelLitImpl.field_176[(unsigned long)arg2];
        iVar5 = *piVar8;
        if (local_3c == -NAN) {
            piVar8 = (int*)(*((array<int, 65536ul>*)(long)iVar5))[uVar13];
            local_50->FlatTriangle((int)local_38, (int)local_34, (int)local_48._0_4_, (int)local_70, iVar3, iVar4,
                                   *piVar8);
        } else {
            piVar8 = &modelLitImpl.field_200[(unsigned long)arg2];
            iVar6 = *piVar8;
            piVar8 = &modelLitImpl.field_224[(unsigned long)arg2];
            local_50->GouraudTriangle((int)local_38, (int)local_34, (int)local_48._0_4_, (int)local_70, iVar3, iVar4,
                                      iVar5, iVar6, *piVar8);
        }
    }

    // 0x100363c50
    void NXTModelLitRenderer::Render3ZClip(const ModelLitImpl& modelLitImpl, int arg2) {
        uint8_t* puVar2;
        uint32_t uVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        int arg16;
        Array<signed char>* pAVar18;
        uint8_t* pbVar19;
        uint32_t* puVar20;
        Array<short>* pAVar21;
        short* psVar22;
        char* pcVar23;
        int* piVar24;
        int* piVar25;
        int iVar27;
        uint8_t* puVar31;
        unsigned long uVar32;
        int iVar33;
        int iVar37;
        uint8_t* puVar39;
        uint8_t* puVar40;

        int iVar4 = field_6437224->field_20;
        int iVar5 = field_6437224->field_24;
        unsigned long uVar28 = (unsigned long)arg2;
        int* piVar17 = &modelLitImpl.field_104[uVar28];
        int iVar34 = *piVar17;
        piVar17 = &modelLitImpl.field_128[uVar28];
        int iVar38 = *piVar17;
        piVar17 = &modelLitImpl.field_152[uVar28];
        int iVar26 = *piVar17;
        uint8_t* puVar1 = &field_6489312;
        unsigned long uVar35 = (unsigned long)iVar34;
        piVar17 = (int*)(*puVar1)[uVar35];
        int iVar6 = *piVar17;
        unsigned long uVar29 = (unsigned long)iVar38;
        piVar17 = (int*)(*puVar1)[uVar29];
        int iVar7 = *piVar17;
        unsigned long uVar30 = (unsigned long)iVar26;
        piVar17 = (int*)(*puVar1)[uVar30];
        int iVar41 = *piVar17;
        unsigned int uVar36 = 0;
        bool bVar16 = modelLitImpl.field_264 == nullptr;
        if (!bVar16) {
            pAVar18 = (Array<signed char>*)*modelLitImpl.field_264;
            pbVar19 = (uint8_t*)(*pAVar18)[uVar28];
            uVar36 = (unsigned int)*pbVar19;
        }
        field_6437224->field_12 = uVar36;
        if (iVar6 < 50) {
            puVar2 = &field_6437232;
            piVar17 = (int*)(*puVar2)[uVar35];
            iVar9 = *piVar17;
            puVar31 = &field_6463272;
            piVar17 = (int*)(*puVar31)[uVar35];
            iVar10 = *piVar17;
            piVar17 = &modelLitImpl.field_176[uVar28];
            iVar27 = *piVar17;
            bVar16 = 49 < iVar41;
            if (bVar16) {
                piVar17 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_divTable2))[(long)(iVar41 - iVar6)];
                iVar33 = (50 - iVar6) * *piVar17;
                piVar17 = (int*)(*puVar2)[uVar30];
                iVar12 = *piVar17;
                iVar37 = field_6437224->field_16;
                piVar17 = &field_6437104[0];
                *piVar17 = ((((iVar12 - iVar9) * iVar33 >> 16) + iVar9) * iVar37) / 50 + iVar4;
                piVar17 = (int*)(*puVar31)[uVar30];
                iVar12 = *piVar17;
                iVar37 = field_6437224->field_16;
                piVar17 = &field_6437144[0];
                *piVar17 = ((((iVar12 - iVar10) * iVar33 >> 16) + iVar10) * iVar37) / 50 + iVar5;
                piVar17 = &modelLitImpl.field_224[uVar28];
                iVar12 = *piVar17;
                piVar17 = &field_6437184[0];
                *piVar17 = ((iVar12 - iVar27) * iVar33 >> 16) + iVar27;
            }
            uVar36 = (unsigned int)bVar16;
            if (iVar7 < 50)
                goto joined_r0x000100364417;
            piVar17 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_divTable2))[(long)(iVar7 - iVar6)];
            iVar33 = (50 - iVar6) * *piVar17;
            piVar17 = (int*)(*puVar2)[uVar29];
            iVar12 = *piVar17;
            iVar37 = field_6437224->field_16;
            uVar32 = (unsigned long)(unsigned int)bVar16;
            piVar17 = &field_6437104[uVar32];
            *piVar17 = ((((iVar12 - iVar9) * iVar33 >> 16) + iVar9) * iVar37) / 50 + iVar4;
            piVar17 = (int*)(*puVar31)[uVar29];
            iVar9 = *piVar17;
            iVar12 = field_6437224->field_16;
            piVar17 = &field_6437144[uVar32];
            *piVar17 = ((((iVar9 - iVar10) * iVar33 >> 16) + iVar10) * iVar12) / 50 + iVar5;
            piVar17 = &modelLitImpl.field_200[uVar28];
            iVar9 = *piVar17;
            uVar36 = bVar16 + 1;
            piVar17 = &field_6437184[uVar32];
            *piVar17 = ((iVar9 - iVar27) * iVar33 >> 16) + iVar27;
            if (49 < iVar7)
                goto LAB_10036441d;
        LAB_1003640b8:
            puVar2 = &field_6437232;
            piVar17 = (int*)(*puVar2)[uVar29];
            iVar9 = *piVar17;
            puVar31 = &field_6463272;
            piVar17 = (int*)(*puVar31)[uVar29];
            iVar10 = *piVar17;
            piVar17 = &modelLitImpl.field_200[uVar28];
            iVar27 = *piVar17;
            if (49 < iVar6) {
                piVar17 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_divTable2))[(long)(iVar6 - iVar7)];
                iVar33 = (50 - iVar7) * *piVar17;
                piVar17 = (int*)(*puVar2)[uVar35];
                iVar12 = *piVar17;
                iVar37 = field_6437224->field_16;
                uVar32 = (unsigned long)uVar36;
                piVar17 = &field_6437104[uVar32];
                *piVar17 = ((((iVar12 - iVar9) * iVar33 >> 16) + iVar9) * iVar37) / 50 + iVar4;
                piVar17 = (int*)(*puVar31)[uVar35];
                iVar12 = *piVar17;
                iVar37 = field_6437224->field_16;
                piVar17 = &field_6437144[uVar32];
                *piVar17 = ((((iVar12 - iVar10) * iVar33 >> 16) + iVar10) * iVar37) / 50 + iVar5;
                piVar17 = &modelLitImpl.field_176[uVar28];
                iVar12 = *piVar17;
                uVar36 = uVar36 + 1;
                piVar17 = &field_6437184[uVar32];
                *piVar17 = ((iVar12 - iVar27) * iVar33 >> 16) + iVar27;
            }
            if (49 < iVar41) {
                piVar17 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_divTable2))[(long)(iVar41 - iVar7)];
                iVar33 = (50 - iVar7) * *piVar17;
                piVar17 = (int*)(*puVar2)[uVar30];
                iVar12 = *piVar17;
                iVar37 = field_6437224->field_16;
                uVar32 = (unsigned long)uVar36;
                piVar17 = &field_6437104[uVar32];
                *piVar17 = ((((iVar12 - iVar9) * iVar33 >> 16) + iVar9) * iVar37) / 50 + iVar4;
                piVar17 = (int*)(*puVar31)[uVar30];
                iVar9 = *piVar17;
                iVar12 = field_6437224->field_16;
                piVar17 = &field_6437144[uVar32];
                *piVar17 = ((((iVar9 - iVar10) * iVar33 >> 16) + iVar10) * iVar12) / 50 + iVar5;
                piVar17 = &modelLitImpl.field_224[uVar28];
                iVar27 = ((*piVar17 - iVar27) * iVar33 >> 16) + iVar27;
                goto LAB_1003645c9;
            }
            if (iVar41 < 50)
                goto LAB_10036426c;
        LAB_1003645f0:
            puVar20 = &field_13008[uVar30];
            uVar8 = *puVar20;
            uVar29 = (unsigned long)uVar36;
            puVar20 = &field_6437104[uVar29];
            *puVar20 = uVar8;
            puVar20 = &field_39008[uVar30];
            uVar8 = *puVar20;
            puVar20 = &field_6437144[uVar29];
            *puVar20 = uVar8;
            piVar17 = &modelLitImpl.field_224[uVar28];
            iVar27 = *piVar17;
        LAB_100364789:
            uVar36 = uVar36 + 1;
            piVar17 = &field_6437184[uVar29];
            *piVar17 = iVar27;
        } else {
            puVar20 = &field_13008[uVar35];
            uVar8 = *puVar20;
            puVar20 = &field_6437104[0];
            *puVar20 = uVar8;
            puVar20 = &field_39008[uVar35];
            uVar8 = *puVar20;
            puVar20 = &field_6437144[0];
            *puVar20 = uVar8;
            puVar20 = &modelLitImpl.field_176[uVar28];
            uVar8 = *puVar20;
            puVar20 = &field_6437184[0];
            *puVar20 = uVar8;
            uVar36 = 1;
        joined_r0x000100364417:
            if (iVar7 < 50)
                goto LAB_1003640b8;
        LAB_10036441d:
            uVar32 = (unsigned long)uVar36;
            puVar20 = &field_13008[uVar29];
            uVar8 = *puVar20;
            puVar20 = &field_6437104[uVar32];
            *puVar20 = uVar8;
            puVar20 = &field_39008[uVar29];
            uVar8 = *puVar20;
            puVar20 = &field_6437144[uVar32];
            *puVar20 = uVar8;
            piVar17 = &modelLitImpl.field_200[uVar28];
            iVar27 = *piVar17;
        LAB_1003645c9:
            uVar36 = uVar36 + 1;
            piVar17 = &field_6437184[uVar32];
            *piVar17 = iVar27;
            if (49 < iVar41)
                goto LAB_1003645f0;
        LAB_10036426c:
            puVar2 = &field_6437232;
            piVar17 = (int*)(*puVar2)[uVar30];
            iVar9 = *piVar17;
            puVar31 = &field_6463272;
            piVar17 = (int*)(*puVar31)[uVar30];
            iVar10 = *piVar17;
            piVar17 = &modelLitImpl.field_224[uVar28];
            iVar27 = *piVar17;
            if (49 < iVar7) {
                piVar17 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_divTable2))[(long)(iVar7 - iVar41)];
                iVar37 = (50 - iVar41) * *piVar17;
                piVar17 = (int*)(*puVar2)[uVar29];
                iVar7 = *piVar17;
                iVar12 = field_6437224->field_16;
                uVar30 = (unsigned long)uVar36;
                piVar17 = &field_6437104[uVar30];
                *piVar17 = ((((iVar7 - iVar9) * iVar37 >> 16) + iVar9) * iVar12) / 50 + iVar4;
                piVar17 = (int*)(*puVar31)[uVar29];
                iVar7 = *piVar17;
                iVar12 = field_6437224->field_16;
                piVar17 = &field_6437144[uVar30];
                *piVar17 = ((((iVar7 - iVar10) * iVar37 >> 16) + iVar10) * iVar12) / 50 + iVar5;
                piVar17 = &modelLitImpl.field_200[uVar28];
                iVar7 = *piVar17;
                uVar36 = uVar36 + 1;
                piVar17 = &field_6437184[uVar30];
                *piVar17 = ((iVar7 - iVar27) * iVar37 >> 16) + iVar27;
            }
            if (49 < iVar6) {
                piVar17 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_divTable2))[(long)(iVar6 - iVar41)];
                iVar41 = (50 - iVar41) * *piVar17;
                piVar17 = (int*)(*puVar2)[uVar35];
                iVar6 = *piVar17;
                iVar7 = field_6437224->field_16;
                uVar29 = (unsigned long)uVar36;
                piVar17 = &field_6437104[uVar29];
                *piVar17 = ((((iVar6 - iVar9) * iVar41 >> 16) + iVar9) * iVar7) / 50 + iVar4;
                piVar17 = (int*)(*puVar31)[uVar35];
                iVar4 = *piVar17;
                iVar6 = field_6437224->field_16;
                piVar17 = &field_6437144[uVar29];
                *piVar17 = ((((iVar4 - iVar10) * iVar41 >> 16) + iVar10) * iVar6) / 50 + iVar5;
                piVar17 = &modelLitImpl.field_176[uVar28];
                iVar27 = ((*piVar17 - iVar27) * iVar41 >> 16) + iVar27;
                goto LAB_100364789;
            }
        }
        puVar2 = &field_6437104;
        piVar17 = (int*)(*puVar2)[0];
        iVar4 = *piVar17;
        piVar17 = (int*)(*puVar2)[1];
        iVar5 = *piVar17;
        piVar17 = (int*)(*puVar2)[2];
        iVar6 = *piVar17;
        puVar31 = &field_6437144;
        piVar17 = (int*)(*puVar31)[0];
        iVar7 = *piVar17;
        piVar17 = (int*)(*puVar31)[1];
        iVar41 = *piVar17;
        piVar17 = (int*)(*puVar31)[2];
        iVar9 = *piVar17;
        NXTPix3D* pNVar15 = field_6437224;
        pNVar15->field_8 = false;
        if (uVar36 != 4) {
            if (uVar36 != 3) {
                return;
            }
            if ((((iVar4 < 0) || (iVar5 < 0)) || (iVar6 < 0)) ||
                (((iVar10 = pNVar15->field_28, iVar10 < iVar4 || (iVar10 < iVar5)) || (iVar10 < iVar6)))) {
                pNVar15->field_8 = true;
            }
            puVar2 = modelLitImpl.field_296;
            bVar16 = *puVar2 == nullptr;
            if (!bVar16) {
                pAVar21 = (Array<short>*)**puVar2;
                psVar22 = (short*)(*pAVar21)[uVar28];
                if (*psVar22 != -1) {
                    puVar31 = modelLitImpl.field_280;
                    bVar16 = *puVar31 != nullptr;
                    if (bVar16) {
                        pAVar18 = (Array<signed char>*)**puVar31;
                        pcVar23 = (char*)(*pAVar18)[uVar28];
                        if (*pcVar23 != -1) {
                            pAVar18 = (Array<signed char>*)**puVar31;
                            pbVar19 = (uint8_t*)(*pAVar18)[uVar28];
                            uVar29 = (unsigned long)*pbVar19;
                            piVar17 = &modelLitImpl.field_320[uVar29];
                            iVar34 = *piVar17;
                            piVar17 = &modelLitImpl.field_344[uVar29];
                            iVar38 = *piVar17;
                            piVar17 = &modelLitImpl.field_368[uVar29];
                            iVar26 = *piVar17;
                        }
                    }
                    piVar17 = (int*)modelLitImpl.field_224[uVar28];
                    pNVar15 = field_6437224;
                    if (*piVar17 == -1) {
                        puVar31 = &modelLitImpl.field_176;
                        piVar17 = (int*)(*puVar31)[uVar28];
                        iVar10 = *piVar17;
                        piVar17 = (int*)(*puVar31)[uVar28];
                        iVar11 = *piVar17;
                        piVar17 = (int*)(*puVar31)[uVar28];
                        iVar27 = *piVar17;
                        puVar31 = &field_6437232;
                        piVar17 = (int*)(*puVar31)[(long)iVar34];
                        iVar12 = *piVar17;
                        piVar17 = (int*)(*puVar31)[(long)iVar38];
                        iVar37 = *piVar17;
                        piVar17 = (int*)(*puVar31)[(long)iVar26];
                        iVar33 = *piVar17;
                    } else {
                        puVar31 = &field_6437184;
                        piVar17 = (int*)(*puVar31)[0];
                        iVar10 = *piVar17;
                        piVar17 = (int*)(*puVar31)[1];
                        iVar11 = *piVar17;
                        piVar17 = (int*)(*puVar31)[2];
                        iVar27 = *piVar17;
                        puVar31 = &field_6437232;
                        piVar17 = (int*)(*puVar31)[(long)iVar34];
                        iVar12 = *piVar17;
                        piVar17 = (int*)(*puVar31)[(long)iVar38];
                        iVar37 = *piVar17;
                        piVar17 = (int*)(*puVar31)[(long)iVar26];
                        iVar33 = *piVar17;
                    }
                    puVar31 = &field_6463272;
                    piVar17 = (int*)(*puVar31)[(long)iVar34];
                    iVar13 = *piVar17;
                    piVar17 = (int*)(*puVar31)[(long)iVar38];
                    iVar14 = *piVar17;
                    piVar17 = (int*)(*puVar31)[(long)iVar26];
                    arg16 = *piVar17;
                    piVar17 = (int*)(*puVar1)[(long)iVar34];
                    iVar34 = *piVar17;
                    piVar17 = (int*)(*puVar1)[(long)iVar38];
                    iVar38 = *piVar17;
                    piVar17 = (int*)(*puVar1)[(long)iVar26];
                    iVar26 = *piVar17;
                    pAVar21 = (Array<short>*)**puVar2;
                    (*pAVar21)[uVar28];
                    pNVar15->TextureTriangle((int)pNVar15, iVar7, iVar41, iVar9, iVar4, iVar5, iVar6, iVar10, iVar11,
                                             iVar27, iVar12, iVar37, iVar33, iVar13, iVar14, arg16, iVar34, iVar38,
                                             iVar26);
                    return;
                }
            }
            piVar17 = &modelLitImpl.field_224[uVar28];
            pNVar15 = field_6437224;
            if (*piVar17 == -1) {
                piVar17 = &modelLitImpl.field_176[uVar28];
                piVar17 = (int*)(*((array<int, 65536ul>*)(long)*piVar17))[uVar28];
                pNVar15->FlatTriangle(iVar7, iVar41, iVar9, iVar4, iVar5, iVar6, *piVar17);
                return;
            }
            puVar1 = &field_6437184;
            piVar17 = (int*)(*puVar1)[0];
            iVar34 = *piVar17;
            piVar17 = (int*)(*puVar1)[1];
            iVar38 = *piVar17;
            piVar17 = (int*)(*puVar1)[2];
            pNVar15->GouraudTriangle(iVar7, iVar41, iVar9, iVar4, iVar5, iVar6, iVar34, iVar38, *piVar17);
            return;
        }
        if (((-1 < iVar4) && (-1 < iVar5)) &&
            ((-1 < iVar6 &&
              (((iVar10 = field_6437224->field_28, iVar4 <= iVar10 && (iVar5 <= iVar10)) && (iVar6 <= iVar10)))))) {
            piVar17 = (int*)(*puVar2)[3];
            if ((-1 < *piVar17) && (*piVar17 <= iVar10))
                goto LAB_100364d20;
        }
        field_6437224->field_8 = true;
    LAB_100364d20:
        uint8_t* puVar3 = modelLitImpl.field_296;
        bVar16 = *puVar3 == nullptr;
        if (!bVar16) {
            pAVar21 = (Array<short>*)**puVar3;
            psVar22 = (short*)(*pAVar21)[uVar28];
            if (*psVar22 != -1) {
                puVar39 = modelLitImpl.field_280;
                bVar16 = *puVar39 != nullptr;
                if (bVar16) {
                    pAVar18 = (Array<signed char>*)**puVar39;
                    pcVar23 = (char*)(*pAVar18)[uVar28];
                    if (*pcVar23 != -1) {
                        pAVar18 = (Array<signed char>*)**puVar39;
                        pbVar19 = (uint8_t*)(*pAVar18)[uVar28];
                        uVar29 = (unsigned long)*pbVar19;
                        piVar17 = &modelLitImpl.field_320[uVar29];
                        iVar34 = *piVar17;
                        piVar17 = &modelLitImpl.field_344[uVar29];
                        iVar38 = *piVar17;
                        piVar17 = &modelLitImpl.field_368[uVar29];
                        iVar26 = *piVar17;
                    }
                }
                pAVar21 = (Array<short>*)**puVar3;
                (*pAVar21)[uVar28];
                piVar17 = &modelLitImpl.field_224[uVar28];
                pNVar15 = field_6437224;
                if (*piVar17 == -1) {
                    puVar40 = &modelLitImpl.field_176;
                    piVar17 = (int*)(*puVar40)[uVar28];
                    iVar10 = *piVar17;
                    piVar17 = (int*)(*puVar40)[uVar28];
                    iVar27 = *piVar17;
                    piVar17 = (int*)(*puVar40)[uVar28];
                    iVar12 = *piVar17;
                    puVar3 = &field_6437232;
                    uVar35 = (unsigned long)iVar34;
                    piVar17 = (int*)(*puVar3)[uVar35];
                    iVar34 = *piVar17;
                    uVar29 = (unsigned long)iVar38;
                    piVar17 = (int*)(*puVar3)[uVar29];
                    iVar38 = *piVar17;
                    uVar30 = (unsigned long)iVar26;
                    piVar17 = (int*)(*puVar3)[uVar30];
                    iVar26 = *piVar17;
                    puVar39 = &field_6463272;
                    piVar17 = (int*)(*puVar39)[uVar35];
                    iVar37 = *piVar17;
                    piVar17 = (int*)(*puVar39)[uVar29];
                    iVar33 = *piVar17;
                    piVar17 = (int*)(*puVar39)[uVar30];
                    iVar11 = *piVar17;
                    piVar17 = (int*)(*puVar1)[uVar35];
                    iVar13 = *piVar17;
                    piVar17 = (int*)(*puVar1)[uVar29];
                    iVar14 = *piVar17;
                    piVar17 = (int*)(*puVar1)[uVar30];
                    pNVar15->TextureTriangle((int)pNVar15, iVar7, iVar41, iVar9, iVar4, iVar5, iVar6, iVar10, iVar27,
                                             iVar12, iVar34, iVar38, iVar26, iVar37, iVar33, iVar11, iVar13, iVar14,
                                             *piVar17);
                    pNVar15 = field_6437224;
                    piVar17 = (int*)(*puVar31)[3];
                    iVar5 = *piVar17;
                    piVar17 = (int*)(*puVar2)[3];
                    iVar34 = *piVar17;
                    piVar17 = (int*)(*puVar40)[uVar28];
                    iVar38 = *piVar17;
                    piVar17 = (int*)(*puVar40)[uVar28];
                    iVar26 = *piVar17;
                    piVar17 = (int*)(*puVar40)[uVar28];
                    iVar41 = *piVar17;
                    piVar17 = (int*)(*puVar3)[uVar35];
                    iVar10 = *piVar17;
                    piVar17 = (int*)(*puVar3)[uVar29];
                    iVar27 = *piVar17;
                    piVar17 = (int*)(*puVar3)[uVar30];
                    iVar12 = *piVar17;
                    piVar17 = (int*)(*puVar39)[uVar35];
                    iVar37 = *piVar17;
                    piVar17 = (int*)(*puVar39)[uVar29];
                    iVar33 = *piVar17;
                    piVar17 = (int*)(*puVar39)[uVar30];
                    iVar11 = *piVar17;
                    piVar17 = (int*)(*puVar1)[uVar35];
                    iVar13 = *piVar17;
                    piVar17 = (int*)(*puVar1)[uVar29];
                    iVar14 = *piVar17;
                    piVar17 = (int*)(*puVar1)[uVar30];
                    pNVar15->TextureTriangle((int)pNVar15, iVar7, iVar9, iVar5, iVar4, iVar6, iVar34, iVar38, iVar26,
                                             iVar41, iVar10, iVar27, iVar12, iVar37, iVar33, iVar11, iVar13, iVar14,
                                             *piVar17);
                    return;
                }
                puVar3 = &field_6437184;
                piVar17 = (int*)(*puVar3)[0];
                iVar10 = *piVar17;
                piVar24 = (int*)(*puVar3)[1];
                iVar27 = *piVar24;
                piVar24 = (int*)(*puVar3)[2];
                iVar12 = *piVar24;
                puVar39 = &field_6437232;
                uVar29 = (unsigned long)iVar34;
                piVar25 = (int*)(*puVar39)[uVar29];
                iVar34 = *piVar25;
                uVar30 = (unsigned long)iVar38;
                piVar25 = (int*)(*puVar39)[uVar30];
                iVar38 = *piVar25;
                uVar28 = (unsigned long)iVar26;
                piVar25 = (int*)(*puVar39)[uVar28];
                iVar26 = *piVar25;
                puVar40 = &field_6463272;
                piVar25 = (int*)(*puVar40)[uVar29];
                iVar37 = *piVar25;
                piVar25 = (int*)(*puVar40)[uVar30];
                iVar33 = *piVar25;
                piVar25 = (int*)(*puVar40)[uVar28];
                iVar11 = *piVar25;
                piVar25 = (int*)(*puVar1)[uVar29];
                iVar13 = *piVar25;
                piVar25 = (int*)(*puVar1)[uVar30];
                iVar14 = *piVar25;
                piVar25 = (int*)(*puVar1)[uVar28];
                pNVar15->TextureTriangle((int)pNVar15, iVar7, iVar41, iVar9, iVar4, iVar5, iVar6, iVar10, iVar27,
                                         iVar12, iVar34, iVar38, iVar26, iVar37, iVar33, iVar11, iVar13, iVar14,
                                         *piVar25);
                pNVar15 = field_6437224;
                piVar25 = (int*)(*puVar31)[3];
                iVar5 = *piVar25;
                piVar25 = (int*)(*puVar2)[3];
                iVar34 = *piVar25;
                iVar38 = *piVar17;
                iVar26 = *piVar24;
                piVar17 = (int*)(*puVar3)[3];
                iVar41 = *piVar17;
                piVar17 = (int*)(*puVar39)[uVar29];
                iVar10 = *piVar17;
                piVar17 = (int*)(*puVar39)[uVar30];
                iVar27 = *piVar17;
                piVar17 = (int*)(*puVar39)[uVar28];
                iVar12 = *piVar17;
                piVar17 = (int*)(*puVar40)[uVar29];
                iVar37 = *piVar17;
                piVar17 = (int*)(*puVar40)[uVar30];
                iVar33 = *piVar17;
                piVar17 = (int*)(*puVar40)[uVar28];
                iVar11 = *piVar17;
                piVar17 = (int*)(*puVar1)[uVar29];
                iVar13 = *piVar17;
                piVar17 = (int*)(*puVar1)[uVar30];
                iVar14 = *piVar17;
                piVar17 = (int*)(*puVar1)[uVar28];
                pNVar15->TextureTriangle((int)pNVar15, iVar7, iVar9, iVar5, iVar4, iVar6, iVar34, iVar38, iVar26,
                                         iVar41, iVar10, iVar27, iVar12, iVar37, iVar33, iVar11, iVar13, iVar14,
                                         *piVar17);
                return;
            }
        }
        piVar17 = &modelLitImpl.field_224[uVar28];
        if (*piVar17 == -1) {
            piVar17 = &modelLitImpl.field_176[uVar28];
            piVar17 = (int*)(*((array<int, 65536ul>*)(long)*piVar17))[uVar28];
            iVar34 = *piVar17;
            field_6437224->FlatTriangle(iVar7, iVar41, iVar9, iVar4, iVar5, iVar6, iVar34);
            pNVar15 = field_6437224;
            piVar17 = (int*)(*puVar31)[3];
            iVar5 = *piVar17;
            piVar17 = (int*)(*puVar2)[3];
            pNVar15->FlatTriangle(iVar7, iVar9, iVar5, iVar4, iVar6, *piVar17, iVar34);
        } else {
            pNVar15 = field_6437224;
            puVar1 = &field_6437184;
            piVar17 = (int*)(*puVar1)[0];
            iVar34 = *piVar17;
            piVar24 = (int*)(*puVar1)[1];
            iVar38 = *piVar24;
            piVar24 = (int*)(*puVar1)[2];
            pNVar15->GouraudTriangle(iVar7, iVar41, iVar9, iVar4, iVar5, iVar6, iVar34, iVar38, *piVar24);
            pNVar15 = field_6437224;
            piVar25 = (int*)(*puVar31)[3];
            iVar5 = *piVar25;
            piVar25 = (int*)(*puVar2)[3];
            iVar34 = *piVar25;
            iVar38 = *piVar17;
            iVar26 = *piVar24;
            piVar17 = (int*)(*puVar1)[3];
            pNVar15->GouraudTriangle(iVar7, iVar9, iVar5, iVar4, iVar6, iVar34, iVar38, iVar26, *piVar17);
        }
    }

    // 0x100365680
    bool NXTModelLitRenderer::FastInsideTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                                 int arg8) {
        if ((((arg3 <= arg2) || (arg4 <= arg2)) || (arg5 <= arg2)) &&
            (((arg2 <= arg3 || (arg2 <= arg4)) || (arg2 <= arg5)))) {
            if (((arg6 <= arg1) || (arg7 <= arg1)) || (arg8 <= arg1)) {
                return arg1 <= arg8 || (arg1 <= arg7 || arg1 <= arg6);
            }
        }
        return false;
    }

    // 0x1003656d0
    void NXTModelLitRenderer::UploadModel(ModelLit& modelLit) {
        (modelLit._vptr[3]._x7e___2)(modelLit);
    }

    // 0x100365ba0
    void NXTModelLitRenderer::DestroyModel(ModelLit& modelLit) {
        (modelLit._vptr[3]._x7e___2)(modelLit);
    }

    // 0x100365c20
    void NXTModelLitRenderer::OSRenderCore_ModelLitWorldRender(int arg1, long long arg2, int arg3, int arg4, int arg5,
                                                               int arg6, int arg7, int arg8, int arg9, int arg10,
                                                               int arg11, int arg12, int arg13, int arg14, bool arg15,
                                                               bool arg16, const RenderableOverlay& renderableOverlay) {
        OSRenderCore_LogicThread_JavaStyle::Instance()->ModelLitWorldRender(arg1, arg2, arg3, arg4, arg5, arg6, arg7,
                                                                            arg8, arg9, arg10, arg11, arg12, arg13,
                                                                            arg14, arg15, arg16, renderableOverlay);
    }

    // 0x100380620
    bool NXTModelLitRenderer::ExpireOldCachedUploadedModels()::$_5::operator()(
        shared_ptr<ModelLitImpl>& modelLitImpl) const {
        long* plVar3 = field_0;
        int iVar1 = field_8;
        long lVar4 = modelLitImpl.operator->();
        int iVar2 = *(int*)(lVar4 + 496);
        if (iVar2 <= iVar1) {
            (**(void (**)(...))(*plVar3 + 32))(plVar3, (uint64_t)modelLitImpl);
            lVar4 = modelLitImpl.operator->();
            *(uint32_t*)(lVar4 + 496) = 4294967295;
            lVar4 = modelLitImpl.operator->();
            *(uint8_t*)(lVar4 + 492) = 1;
        }
        return iVar2 <= iVar1;
    }

} // namespace jag::oldscape::dash3d
