// libs/oldscape/jagex3/dash3d/World.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "World.h"

namespace jag::oldscape::dash3d {
    // 0x100d41cd4
    int32_t world::Z_CUT[3] = {50, 0, 0};

    // 0x100d41ce0
    int32_t world::PRETAB[12] = {19, 55, 38, 155, 255, 110, 137, 205, 76, 0, 0, 0};

    // 0x100d41d10
    int32_t world::MIDTAB[12] = {160, 192, 80, 96, 0, 144, 80, 48, 160, 0, 0, 0};

    // 0x100d41d40
    int32_t world::POSTTAB[12] = {76, 8, 137, 4, 0, 1, 38, 2, 19, 0, 0, 0};

    // 0x100d41d70
    int32_t world::MIDDEP_16[12] = {0, 0, 2, 0, 0, 2, 1, 1, 0, 0, 0, 0};

    // 0x100d41da0
    int32_t world::MIDDEP_32[12] = {2, 0, 0, 2, 0, 0, 0, 4, 4, 0, 0, 0};

    // 0x100d41dd0
    int32_t world::MIDDEP_64[12] = {0, 4, 4, 8, 0, 0, 8, 0, 0, 0, 0, 0};

    // 0x100d41e00
    int32_t world::MIDDEP_128[9] = {1, 1, 0, 0, 0, 8, 0, 0, 8};

    // 0x100d41e24
    int32_t world::MINIMAP_SHAPE[208] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
        0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0,
        1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
        1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1,
    };

    // 0x100d42164
    int32_t world::MINIMAP_ROTATE[64] = {
        0, 1, 2,  3,  4, 5, 6,  7,  8, 9, 10, 11, 12, 13, 14, 15, 12, 8, 4, 0,  13, 9,
        5, 1, 14, 10, 6, 2, 15, 11, 7, 3, 15, 14, 13, 12, 11, 10, 9,  8, 7, 6,  5,  4,
        3, 2, 1,  0,  3, 7, 11, 15, 2, 6, 10, 14, 1,  5,  9,  13, 0,  4, 8, 12,
    };

    // 0x100d42264
    int32_t world::FOLLOW_CAMERA_LOWEST_RELATIVEANGLE_X = 128;

    // 0x100d42268
    int32_t world::FOLLOW_CAMERA_HIGHEST_RELATIVEANGLE_X = 383;

    // 0x100f37c60
    int32_t world::m_groundX = -1;

    // 0x100f37c64
    int32_t world::m_groundY = -1;

    // 0x100f37c68
    int32_t world::m_groundZ = -1;

    // 0x100f37c6c
    int32_t world::m_mouseoverGroundX = -1;

    // 0x100f37c70
    int32_t world::m_mouseoverGroundY = -1;

    // 0x100f37c74
    int32_t world::m_mouseoverGroundZ = -1;

    // 0x100f37c84
    int32_t world::m_drawDistanceRange = 25;

    // 0x1016c6110
    int32_t world::m_lowMem;

    // 0x1016c6114
    int32_t world::m_cameraSinX;

    // 0x1016c6118
    int32_t world::m_cameraCosX;

    // 0x1016c611c
    int32_t world::m_cameraSinY;

    // 0x1016c6120
    int32_t world::m_cameraCosY;

    // 0x1016c6124
    int32_t world::m_fillLeft;

    // 0x1016c6128
    int32_t world::m_maxLevel;

    // 0x1016c612c
    int32_t world::m_cycleNo;

    // 0x1016c6130
    int32_t world::m_minX;

    // 0x1016c6134
    int32_t world::m_maxX;

    // 0x1016c6138
    int32_t world::m_minZ;

    // 0x1016c613c
    int32_t world::m_maxZ;

    // 0x1016c6140
    int32_t world::m_gx;

    // 0x1016c6144
    int32_t world::m_gz;

    // 0x1016c6148
    int32_t world::m_cx;

    // 0x1016c614c
    int32_t world::m_cy;

    // 0x1016c6150
    int32_t world::m_cz;

    // 0x1016c6154
    int32_t world::m_click;

    // 0x1016c6158
    int32_t world::m_clickLev;

    // 0x1016c615c
    int32_t world::m_clickX;

    // 0x1016c6160
    int32_t world::m_clickY;

    // 0x1016c6164
    eastl::basic_string::Layout world::m_mouseoverGroundFine;

    // 0x1016c6170
    int32_t world::m_groundPickingLevel;

    // 0x1016c6174
    int32_t world::m_executeGroundOp;

    // 0x1016c6178
    int64_t world::m_pix3D;

    // 0x1016c6180
    int64_t world::m_worldRenderer;

    // 0x1016c6188
    int64_t world::m_modelLitRenderer;

    // 0x1016c6190
    int64_t world::m_modelLitRendererRt7;

    // 0x1016c6198
    int32_t world::m_cameraAngleXSlice;

    // 0x1016c619c
    int32_t world::m_cameraAngleYSlice;

    // 0x1016c61a0, set at startup by ___cxx_global_var_init.85
    world::VisCalcParams world::m_visCalcParams = VisCalcParams();

    // 0x1016c61c8
    int32_t world::m_xOrig;

    // 0x1016c61cc
    int32_t world::m_yOrig;

    // 0x1016c61d0
    int32_t world::m_xClip;

    // 0x1016c61d4
    int32_t world::m_yClip;

    // 0x1016c61d8
    int32_t world::m_xClip2;

    // 0x1016c61dc
    int32_t world::m_yClip2;

    // 0x1016c61e0
    std::array<bool, _8386816ul> world::m_visBacking;

    // 0x101ec5ae0
    std::array<bool, 8386816ul> world::m_visBackingDirty;

    // 0x1026c53e0
    std::array<bool, _9644832ul> world::m_pvisBacking;

    // 0x102ff7f00
    std::array<bool, 9644832ul> world::m_pvisBackingDirty;

    // 0x1003068c0
    world::world(int arg1, int arg2, int arg3, int arg4, const Array<int>& arg5, NXTPix3D& nxtPix3D)
        : eastl::fixed_vector<shared_ptr<Sprite>, 100ul>() {
        uint8_t* this_00 = &field_1640;
        new (this_00) eastl::fixed_vector<int, 4ul>();
        uint8_t* this_01 = &field_1696;
        new (this_01) eastl::fixed_vector<std::unique_ptr<Occlude>, 2000ul>();
        uint8_t* this_02 = &field_17744;
        new (this_02) eastl::fixed_vector<Occlude*, 500ul>();
        new (&field_21784) SharedPtrList<Square>();
        new (&field_21816) Array<shared_ptr<Square>>();
        new (&field_21840) eastl::fixed_vector<std::unique_ptr<DeferredHighlight>, 1024ul>();
        new (&field_30072) eastl::fixed_vector<long long, 10000ul>();
        field_110120 = 0;
        field_110124 = 0;
        new (&field_110128) eastl::fixed_vector<shared_ptr<Sprite>, 5000ul>(5000);
        new (&field_190168) Array<int>();
        this[1].field_16 = 0;
        field_21800 = arg1;
        field_21804 = arg2;
        field_21808 = arg3;
        m_pix3D = nxtPix3D;
        m_drawDistanceRange = arg4;
        (nxtPix3D._vptr->CalculateRenderDepth)((int)nxtPix3D);
        field_21816.set_max_size((long)(arg2 * arg1 * arg3), 3);
        field_190168.set_max_size((long)((arg3 + 1) * (arg2 + 1) * arg1), 3);
        unsigned long uVar1 = this_00->GetID();
        this_00->resize(uVar1);
        uVar1 = this_02->max_size();
        this_02->resize(uVar1);
        uVar1 = this_01->max_size();
        this_01->resize(uVar1);
        field_110112 = arg5;
        uVar1 = GetDefault();
        resize(uVar1);
        ResetMap();
    }

    // 0x100306e50
    void world::ResetMap() {
        uint32_t* puVar1;
        int* piVar2;
        shared_ptr<Sprite>* psVar3;
        unsigned long uVar5;
        int arg3;
        unsigned long uVar6;
        void* arg1;
        int arg2;
        int arg1_00;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;

        if (0 < field_21800) {
            arg1_00 = 0;
            do {
                if (0 < field_21804) {
                    arg2 = 0;
                    do {
                        if (0 < field_21808) {
                            arg3 = 0;
                            do {
                                local_40 = shared_ptr();
                                SetSquare(arg1_00, arg2, arg3, local_40);
                                arg3 = arg3 + 1;
                            } while (arg3 < field_21808);
                        }
                        arg2 = arg2 + 1;
                    } while (arg2 < field_21804);
                }
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 < field_21800);
        }
        uint8_t* this_00 = &field_1640;
        void* arg1_01 = nullptr;
        do {
            arg1 = arg1_01;
            piVar2 = (int*)(*this_00)[(unsigned long)arg1_01];
            if (0 < *piVar2) {
                uVar6 = 0;
                do {
                    local_40.unique_ptr<true, void>(arg1);
                    SetOccluder((unsigned long)arg1_01, uVar6, local_40);
                    uVar6 = uVar6 + 1;
                    arg1 = arg1_01;
                    piVar2 = (int*)(*this_00)[(unsigned long)arg1_01];
                } while ((long)uVar6 < (long)*piVar2);
            }
            puVar1 = (uint32_t*)(*this_00)[(unsigned long)arg1_01];
            *puVar1 = 0;
            arg1_01 = (void*)((long)arg1_01 + 1);
        } while (arg1_01 != (void*)4);
        if (0 < field_110124) {
            uVar6 = 0;
            do {
                local_40 = shared_ptr();
                psVar3 = &field_110128[uVar6];
                *psVar3 = local_40;
                uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)field_110124);
        }
        field_110124 = 0;
        if (size() != 0) {
            uVar6 = 0;
            do {
                local_40 = shared_ptr();
                psVar3 = (shared_ptr<Sprite>*)(*this)[uVar6];
                *psVar3 = local_40;
                uVar6 = uVar6 + 1;
                uVar5 = size();
            } while (uVar6 < uVar5);
        }
        if (m_modelLitRendererRt7 != nullptr) {
            m_modelLitRendererRt7->ResetMap();
        }
    }

    // 0x100307140
    world::~world() {
        ResetMap();
        ResetAll();
        field_190168.~Array();
        field_110128.~fixed_vector();
        field_30072.~fixed_vector();
        field_21840.~fixed_vector();
        field_21816.~Array();
        field_21784.~SharedPtrList();
        field_17744.~fixed_vector();
        field_1696.~fixed_vector();
        field_1640.~fixed_vector();
    }

    // 0x100307250
    void world::ResetAll() {
        shared_ptr<Sprite>* this_01;
        unsigned long uVar3;
        uint32_t* puVar4;
        unsigned long uVar7;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_30;

        long lVar2 = size();
        if (lVar2 != 0) {
            uVar7 = 0;
            do {
                local_30 = shared_ptr();
                this_01 = (shared_ptr<Sprite>*)(*this)[uVar7];
                *this_01 = local_30;
                uVar7 = uVar7 + 1;
                uVar3 = size();
            } while (uVar7 < uVar3);
        }
        while (true) {
            if (field_21784.empty() != '\0')
                break;
            field_21784.pop();
        }
        uint8_t* this_00 = &field_1640;
        lVar2 = this_00->size();
        if (lVar2 != 0) {
            uVar7 = 0;
            do {
                puVar4 = (uint32_t*)(*this_00)[uVar7];
                *puVar4 = 0;
                uVar7 = uVar7 + 1;
                uVar3 = this_00->size();
            } while (uVar7 < uVar3);
        }
        field_1696.clear();
        uint64_t uVar5 = m_visBacking.data();
        ___bzero(uVar5, 8386816);
        auto pvVar6 = m_visBackingDirty.data();
        _memset(pvVar6, 1, 8386816);
        uVar5 = m_pvisBacking.data();
        ___bzero(uVar5, 9644832);
        pvVar6 = (void*)m_pvisBackingDirty.data();
        _memset(pvVar6, 1, 9644832);
    }

    // 0x100307600
    void world::FillBaseLevel(int arg1) {
        int arg1_00;
        int arg3;
        int arg2;
        bool bVar1;
        shared_ptr<configdecoder::ObjType>* objType;
        ReturnValue local_50;
        int local_3c;
        int local_38;

        field_110120 = arg1;
        int local_34 = 0;
        if (0 < field_21804) {
            local_3c = arg1;
            do {
                local_38 = 0;
                if (0 < field_21808) {
                    do {
                        objType = (shared_ptr<configdecoder::ObjType>*)GetSquare(local_3c, local_34, local_38);
                        bVar1 = *objType == nullptr;
                        arg2 = local_34;
                        arg3 = local_38;
                        arg1_00 = local_3c;
                        if (bVar1) {
                            make_shared<Square, int&, int&, int&>(&local_50, &local_3c, &local_34, &local_38);
                            SetSquare(arg1_00, arg2, arg3, local_50);
                        }
                        local_38 = local_38 + 1;
                    } while (local_38 < field_21808);
                }
                local_34 = local_34 + 1;
            } while (local_34 < field_21804);
        }
    }

    // 0x1003077b0
    void world::PushDown(int arg1, int arg2) {
        shared_ptr<Square>* psVar4;
        long lVar5;
        int* piVar6;
        int arg1_00;
        unsigned long arg1_02;

        auto psVar3 = GetSquare(0, arg1, arg2);
        shared_ptr<Decor> local_60(psVar3);
        int arg1_01 = 0;
        do {
            arg1_00 = arg1_01 + 1;
            psVar4 = (shared_ptr<Square>*)GetSquare(arg1_00, arg1, arg2);
            SetSquare(arg1_01, arg1, arg2, *psVar4);
            if (*psVar4 != nullptr) {
                lVar5 = (*psVar4).operator->();
                *(int*)(lVar5 + 32) = *(int*)(lVar5 + 32) - 1;
                arg1_02 = 0;
                while (true) {
                    lVar5 = (*psVar4).operator->();
                    if ((long)*(int*)(lVar5 + 156) <= (long)arg1_02)
                        break;
                    lVar5 = (*psVar4).operator->();
                    psVar3 = (shared_ptr<GroundDecor>*)(*((lVar5 + 160)))[arg1_02];
                    local_50 = shared_ptr(psVar3);
                    lVar5 = local_50.operator->();
                    if ((*(MousePickingHelper**)(lVar5 + 80))->IsLocTypecode((long long)psVar3) != '\0') {
                        lVar5 = local_50.operator->();
                        if (*(int*)(lVar5 + 52) == arg1) {
                            lVar5 = local_50.operator->();
                            if (*(int*)(lVar5 + 60) == arg2) {
                                piVar6 = (int*)local_50.operator->();
                                *piVar6 = *piVar6 - 1;
                            }
                        }
                    }
                    arg1_02 = arg1_02 + 1;
                }
            }
            arg1_01 = arg1_00;
        } while (arg1_00 != 3);
        psVar4 = (shared_ptr<Square>*)GetOrCreateSquare(0, arg1, arg2);
        lVar5 = (*psVar4).operator->();
        (*((lVar5 + 376))) = local_60;
        shared_ptr<RSevenDebugPresetProvider> local_50;
        SetSquare(3, arg1, arg2, local_50);
    }

    // 0x100307a80
    void world::ColourGround(int arg1, int arg2, int arg3, int arg4) {
        long lVar2;
        int* piVar3;
        shared_ptr<Decor> local_28;

        auto objType = GetSquare(arg1, arg2, arg3);
        if (!(*objType == nullptr)) {
            lVar2 = (*objType).operator->();
            local_28 = shared_ptr((lVar2 + 64));
            if (!(local_28 == nullptr)) {
                lVar2 = local_28.operator->();
                piVar3 = (int*)(*((lVar2 + 104)))[0];
                *piVar3 = arg4;
                lVar2 = local_28.operator->();
                piVar3 = (int*)(*((lVar2 + 136)))[0];
                *piVar3 = arg4;
                lVar2 = local_28.operator->();
                piVar3 = (int*)(*((lVar2 + 168)))[0];
                *piVar3 = arg4;
            }
        }
    }

    // 0x100307b90
    void world::SetOcclude(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8) {
        unique_ptr<Occlude> local_38;

        ImGuiSettingsHandler* this_00 = (ImGuiSettingsHandler*)operator new(72);
        *(uint64_t*)this_00 = 0;
        *(uint64_t*)(this_00 + 8) = 0;
        *(uint64_t*)(this_00 + 16) = 0;
        *(uint64_t*)(this_00 + 24) = 0;
        *(uint64_t*)(this_00 + 32) = 0;
        *(uint64_t*)(this_00 + 40) = 0;
        *(uint64_t*)(this_00 + 48) = 0;
        *(uint64_t*)(this_00 + 56) = 0;
        *(uint64_t*)(this_00 + 64) = 0;
        new (this_00) ImGuiSettingsHandler();
        int iVar1 = arg3 + 127;
        if (-1 < arg3) {
            iVar1 = arg3;
        }
        int iVar3 = arg4 + 127;
        if (-1 < arg4) {
            iVar3 = arg4;
        }
        *(int*)this_00 = iVar1 >> 7;
        *(int*)(this_00 + 4) = iVar3 >> 7;
        iVar1 = arg5 + 127;
        if (-1 < arg5) {
            iVar1 = arg5;
        }
        iVar3 = arg6 + 127;
        if (-1 < arg6) {
            iVar3 = arg6;
        }
        *(int*)(this_00 + 8) = iVar1 >> 7;
        *(int*)(this_00 + 12) = iVar3 >> 7;
        *(int*)(this_00 + 16) = arg2;
        *(int*)(this_00 + 20) = arg3;
        *(int*)(this_00 + 24) = arg4;
        *(int*)(this_00 + 28) = arg5;
        *(int*)(this_00 + 32) = arg6;
        *(int*)(this_00 + 36) = arg7;
        *(int*)(this_00 + 40) = arg8;
        int* piVar2 = &field_1640[(unsigned long)arg1];
        iVar1 = *piVar2;
        local_38.unique_ptr<true, void>(this_00);
        SetOccluder((unsigned long)arg1, (long)iVar1, local_38);
        piVar2 = &field_1640[(unsigned long)arg1];
        *piVar2 = *piVar2 + 1;
    }

    // 0x100307cf0
    void world::SetLayer(int arg1, int arg2, int arg3, int arg4) {
        long lVar1;

        auto objType = GetSquare(arg1, arg2, arg3);
        if (!*objType == nullptr) {
            lVar1 = (*objType).operator->();
            *(int*)(lVar1 + 348) = arg4;
        }
    }

    // 0x100307d30
    void world::SetGround(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9,
                          int arg10, int arg11, int arg12, int arg13, int arg14, int arg15, int arg16, int arg17,
                          int arg18, int arg19, int arg20) {
        int iVar1;
        int iVar2;
        int iVar3;
        bool bVar4;
        shared_ptr<configdecoder::ObjType>* psVar5;
        shared_ptr<Square>* psVar6;
        long lVar7;
        ReturnValue local_68;
        shared_ptr<QuickGround> local_58;
        uint8_t local_3d;
        int local_34;

        int local_70 = arg4;
        int local_6c = arg5;
        int local_3c = arg2;
        int local_38 = arg3;
        if (arg4 == 1) {
            local_68[0]._0_1_ = arg10 == arg7 && (arg9 == arg7 && arg8 == arg7);
            local_34 = (((uint32_t)local_34._1_3_ << 8) | (uint8_t)1);
            make_shared<QuickGround, int&, int&, int&, int&, int&, int&, bool, bool>(
                &local_58, &arg15, &arg16, &arg17, &arg18, &arg6, (bool*)&arg20, &local_68);
            local_34 = arg1;
            if (-1 < arg1) {
                iVar1 = arg1;
                local_34 = arg1;
                do {
                    psVar5 = (shared_ptr<configdecoder::ObjType>*)GetSquare(iVar1, local_3c, local_38);
                    bVar4 = *psVar5 == nullptr;
                    iVar3 = local_34;
                    iVar2 = local_38;
                    iVar1 = local_3c;
                    if (bVar4) {
                        make_shared<Square, int&, int&, int&>(&local_68, &local_34, &local_3c, &local_38);
                        SetSquare(iVar3, iVar1, iVar2, local_68);
                    }
                    iVar1 = local_34 - 1;
                    bVar4 = 0 < local_34;
                    local_34 = iVar1;
                } while (bVar4);
            }
            psVar6 = (shared_ptr<Square>*)GetSquare(arg1, local_3c, local_38);
            lVar7 = (*psVar6).operator->();
            (*((lVar7 + 48))) = local_58;
        } else {
            if (arg4 != 0) {
                make_shared<Ground, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&,
                            int&, int&, int&, int&, int&>(&local_58, &local_70, &local_6c, &arg6, &local_3c, &local_38,
                                                          &arg7, &arg8, &arg9, &arg10, &arg11, &arg12, &arg13, &arg14,
                                                          &arg15, &arg16, &arg17, &arg18, &arg19);
                local_34 = arg1;
                if (-1 < arg1) {
                    iVar1 = arg1;
                    local_34 = arg1;
                    do {
                        psVar5 = (shared_ptr<configdecoder::ObjType>*)GetSquare(iVar1, local_3c, local_38);
                        bVar4 = *psVar5 == nullptr;
                        iVar3 = local_34;
                        iVar2 = local_38;
                        iVar1 = local_3c;
                        if (bVar4) {
                            make_shared<Square, int&, int&, int&>(&local_68, &local_34, &local_3c, &local_38);
                            SetSquare(iVar3, iVar1, iVar2, local_68);
                        }
                        iVar1 = local_34 - 1;
                        bVar4 = 0 < local_34;
                        local_34 = iVar1;
                    } while (bVar4);
                }
                psVar6 = (shared_ptr<Square>*)GetSquare(arg1, local_3c, local_38);
                lVar7 = (*psVar6).operator->();
                (*((lVar7 + 64))) = local_58;
                return;
            }
            local_68[0]._0_4_ = 4294967295;
            local_34 = (unsigned int)local_34._1_3_ << 8;
            local_3d = 0;
            make_shared<QuickGround, int&, int&, int&, int&, int&, int&, bool, bool>(
                &local_58, &arg11, &arg12, &arg13, &arg14, &local_68, (bool*)&arg19, (bool*)&local_34);
            local_34 = arg1;
            if (-1 < arg1) {
                iVar1 = arg1;
                local_34 = arg1;
                do {
                    psVar5 = (shared_ptr<configdecoder::ObjType>*)GetSquare(iVar1, local_3c, local_38);
                    bVar4 = *psVar5 == nullptr;
                    iVar3 = local_34;
                    iVar2 = local_38;
                    iVar1 = local_3c;
                    if (bVar4) {
                        make_shared<Square, int&, int&, int&>(&local_68, &local_34, &local_3c, &local_38);
                        SetSquare(iVar3, iVar1, iVar2, local_68);
                    }
                    iVar1 = local_34 - 1;
                    bVar4 = 0 < local_34;
                    local_34 = iVar1;
                } while (bVar4);
            }
            psVar6 = (shared_ptr<Square>*)GetSquare(arg1, local_3c, local_38);
            lVar7 = (*psVar6).operator->();
            (*((lVar7 + 48))) = local_58;
        }
    }

    // 0x100308390
    unsigned long world::SetGroundDecor(int arg1, int arg2, int arg3, int arg4,
                                        const shared_ptr<ModelSource>& modelSource, long long arg6, int arg7) {
        long lVar2;
        int* piVar3;
        shared_ptr<Square>* this_00;
        ReturnValue local_40;

        bool bVar1 = modelSource == nullptr;
        if (!bVar1) {
            make_shared<GroundDecor>(&local_40);
            lVar2 = local_40.operator->();
            (*((lVar2 + 16))) = modelSource;
            lVar2 = local_40.operator->();
            *(unsigned int*)(lVar2 + 4) = arg2 << 7 | 64;
            lVar2 = local_40.operator->();
            *(unsigned int*)(lVar2 + 8) = arg3 << 7 | 64;
            piVar3 = (int*)local_40.operator->();
            *piVar3 = arg4;
            lVar2 = local_40.operator->();
            *(long long*)(lVar2 + 32) = arg6;
            lVar2 = local_40.operator->();
            *(int*)(lVar2 + 40) = arg7;
            this_00 = (shared_ptr<Square>*)GetOrCreateSquare(arg1, arg2, arg3);
            lVar2 = (*this_00).operator->();
            (*((lVar2 + 112))) = local_40;
        }
        return bVar1 & 4294967295 ^ 1;
    }

    // 0x100308590
    void world::SetObj(int arg1, int arg2, int arg3, int arg4, const shared_ptr<ModelSource>& modelSource1,
                       long long arg6, const shared_ptr<ModelSource>& modelSource2,
                       const shared_ptr<ModelSource>& modelSource3, const EntityHighlight& entityHighlight) {
        ReturnValue local_40;

        make_shared<GroundObject>(&local_40);
        long lVar2 = local_40.operator->();
        (*((lVar2 + 16))) = modelSource1;
        lVar2 = local_40.operator->();
        *(unsigned int*)(lVar2 + 4) = arg2 << 7 | 64;
        lVar2 = local_40.operator->();
        *(unsigned int*)(lVar2 + 8) = arg3 << 7 | 64;
        auto piVar3 = local_40.operator->();
        *piVar3 = arg4;
        lVar2 = local_40.operator->();
        *(long long*)(lVar2 + 64) = arg6;
        lVar2 = local_40.operator->();
        (*((lVar2 + 32))) = modelSource2;
        lVar2 = local_40.operator->();
        (*((lVar2 + 48))) = modelSource3;
        lVar2 = local_40.operator->();
        *(uint16_t*)(lVar2 + 84) = *(uint16_t*)&entityHighlight.field_8;
        *(uint64_t*)(lVar2 + 76) = *(uint64_t*)entityHighlight;
        uint32_t uVar1 = GetTableHeightOnTile(arg1, arg2, arg3);
        lVar2 = local_40.operator->();
        *(uint32_t*)(lVar2 + 72) = uVar1;
        auto this_00 = GetOrCreateSquare(arg1, arg2, arg3);
        lVar2 = (*this_00).operator->();
        (*((lVar2 + 128))) = local_40;
    }

    // 0x100308780
    int world::GetTableHeightOnTile(int arg1, int arg2, int arg3) const {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        long lVar3;
        shared_ptr<Sprite>* psVar4;
        long* plVar5;
        unsigned long arg1_00;
        shared_ptr<RSevenDebugPresetProvider> local_38;

        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(arg1, arg2, arg3);
        int iVar6 = 0;
        if (*midiPlayerMainThread != nullptr) {
            lVar3 = (*midiPlayerMainThread).operator->();
            if (0 < *(int*)(lVar3 + 156)) {
                arg1_00 = 0;
                iVar6 = 0;
                do {
                    lVar3 = (*midiPlayerMainThread).operator->();
                    psVar4 = (shared_ptr<Sprite>*)(*((lVar3 + 160)))[arg1_00];
                    lVar3 = (*psVar4).operator->();
                    if ((*(uint8_t*)(lVar3 + 89) & 1) != 0) {
                        lVar3 = (*midiPlayerMainThread).operator->();
                        psVar4 = (shared_ptr<Sprite>*)(*((lVar3 + 160)))[arg1_00];
                        lVar3 = (*psVar4).operator->();
                        if (((lVar3 + 32))->operator_cast_to_bool()) {
                            lVar3 = (*midiPlayerMainThread).operator->();
                            psVar4 = (shared_ptr<Sprite>*)(*((lVar3 + 160)))[arg1_00];
                            lVar3 = (*psVar4).operator->();
                            plVar5 = (long*)(*((lVar3 + 32))).operator->();
                            if ((**(void (**)(...))(*plVar5 + 24))(plVar5)) {
                                lVar3 = (*midiPlayerMainThread).operator->();
                                psVar4 = (shared_ptr<Sprite>*)(*((lVar3 + 160)))[arg1_00];
                                (*psVar4).operator->();
                                static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_38);
                                plVar5 = (long*)local_38.operator->();
                                (**(void (**)(...))(*plVar5 + 64))(plVar5);
                                lVar3 = local_38.operator->();
                                if (iVar6 < *(int*)(lVar3 + 8)) {
                                    lVar3 = local_38.operator->();
                                    iVar6 = *(int*)(lVar3 + 8);
                                }
                            }
                        }
                    }
                    arg1_00 = arg1_00 + 1;
                    lVar3 = (*midiPlayerMainThread).operator->();
                } while ((long)arg1_00 < (long)*(int*)(lVar3 + 156));
            }
        }
        return iVar6;
    }

    // 0x100308950
    unsigned long world::GroundExists(int arg1, int arg2, int arg3) {
        long lVar2;
        uint64_t extraout_var;

        auto objType = GetSquare(arg1, arg2, arg3);
        unsigned long uVar3 = 0;
        bool bVar1 = *objType == nullptr;
        if (!bVar1) {
            lVar2 = (*objType).operator->();
            bVar1 = (*((lVar2 + 64))) != nullptr;
            uVar3 = 1;
            if (!bVar1) {
                lVar2 = (*objType).operator->();
                bVar1 = (*((lVar2 + 48))) != nullptr;
                uVar3 = (((uint64_t)extraout_var << 8) | (uint8_t)bVar1) & 4294967295;
            }
        }
        return uVar3;
    }

    // 0x1003089b0
    unsigned long world::SetWall(int arg1, int arg2, int arg3, int arg4, const shared_ptr<ModelSource>& modelSource1,
                                 const shared_ptr<ModelSource>& modelSource2, int arg7, int arg8, long long arg9,
                                 int arg10) {
        unsigned long result;
        int arg1_00;
        ReturnValue result;
        unsigned long uVar4;
        ReturnValue local_40;

        bool bVar1 = modelSource1 == nullptr;
        if (bVar1) {
            uVar4 = 0;
            bVar1 = modelSource2 == nullptr;
            if (bVar1)
                goto LAB_100308b0d;
        }
        &result = &local_40;
        make_shared<Wall>(&result);
        long lVar2 = (result).operator->();
        *(long long*)(lVar2 + 56) = arg9;
        lVar2 = local_40.operator->();
        *(int*)(lVar2 + 20) = arg10;
        lVar2 = local_40.operator->();
        *(unsigned int*)(lVar2 + 4) = arg2 << 7 | 64;
        lVar2 = local_40.operator->();
        *(unsigned int*)(lVar2 + 8) = arg3 << 7 | 64;
        auto piVar3 = local_40.operator->();
        *piVar3 = arg4;
        lVar2 = local_40.operator->();
        (*((lVar2 + 24))) = modelSource1;
        lVar2 = local_40.operator->();
        (*((lVar2 + 40))) = modelSource2;
        lVar2 = local_40.operator->();
        *(int*)(lVar2 + 12) = arg7;
        lVar2 = local_40.operator->();
        *(int*)(lVar2 + 16) = arg8;
        if (-1 < arg1) {
            &result = (ReturnValue*)(unsigned long)(unsigned int)arg1;
            do {
                arg1_00 = (int)&result;
                GetOrCreateSquare(arg1_00, arg2, arg3);
                &result = (ReturnValue*)(unsigned long)(arg1_00 - 1);
            } while (0 < arg1_00);
        }
        auto this_00 = GetSquare(arg1, arg2, arg3);
        lVar2 = (*this_00).operator->();
        (*((lVar2 + 80))) = local_40;
        uVar4 = (((uint64_t)((int64_t)((unsigned long)&result >> 8)) << 8) | (uint8_t)1);
    LAB_100308b0d:
        return uVar4 & 4294967295;
    }

    // 0x100308c20
    unsigned long world::SetDecor(int arg1, int arg2, int arg3, int arg4, const shared_ptr<ModelSource>& modelSource1,
                                  const shared_ptr<ModelSource>& modelSource2, int arg7, int arg8, int arg9, int arg10,
                                  long long arg11, int arg12) {
        bool bVar1;
        uint64_t extraout_var;
        long lVar2;
        int* piVar3;
        shared_ptr<Square>* this_00;
        uint64_t extraout_RAX;
        int arg1_00;
        ReturnValue local_48;

        uint8_t local_31 = modelSource1 == nullptr;
        uint64_t uVar4 = extraout_var;
        if (!local_31) {
            make_shared<Decor>(&local_48);
            lVar2 = local_48.operator->();
            *(long long*)(lVar2 + 64) = arg11;
            lVar2 = local_48.operator->();
            *(int*)(lVar2 + 72) = arg12;
            lVar2 = local_48.operator->();
            *(unsigned int*)(lVar2 + 4) = arg2 << 7 | 64;
            lVar2 = local_48.operator->();
            *(unsigned int*)(lVar2 + 8) = arg3 << 7 | 64;
            piVar3 = (int*)local_48.operator->();
            *piVar3 = arg4;
            lVar2 = local_48.operator->();
            (*((lVar2 + 32))) = modelSource1;
            lVar2 = local_48.operator->();
            (*((lVar2 + 48))) = modelSource2;
            lVar2 = local_48.operator->();
            *(int*)(lVar2 + 12) = arg7;
            lVar2 = local_48.operator->();
            *(int*)(lVar2 + 16) = arg8;
            lVar2 = local_48.operator->();
            *(int*)(lVar2 + 20) = arg9;
            lVar2 = local_48.operator->();
            *(int*)(lVar2 + 24) = arg10;
            if (-1 < arg1) {
                arg1_00 = arg1;
                do {
                    GetOrCreateSquare(arg1_00, arg2, arg3);
                    bVar1 = 0 < arg1_00;
                    arg1_00 = arg1_00 - 1;
                } while (bVar1);
            }
            this_00 = (shared_ptr<Square>*)GetSquare(arg1, arg2, arg3);
            lVar2 = (*this_00).operator->();
            (*((lVar2 + 96))) = local_48;
            uVar4 = (uint64_t)((unsigned long)extraout_RAX >> 8);
        }
        return local_31 ^ 1;
    }

    // 0x100308ea0
    uint64_t world::AddScenery(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                               const shared_ptr<ModelSource>& modelSource, int arg8, long long arg9, int arg10) {
        uint64_t extraout_var;
        uint8_t local_60[24];
        unsigned long local_48;
        EntityHighlight local_40;

        local_60._16_8_ = this;
        local_40._12_4_ = arg1;
        bool bVar1 = modelSource == nullptr;
        uint64_t uVar2 = (((uint64_t)extraout_var << 8) | (uint8_t)1);
        if (!bVar1) {
            local_40.field_8 = 0;
            local_40.field_9 = '\0';
            local_40.m_colour = 0;
            local_40.field_2 = 0;
            local_40.field_4 = '\0';
            local_40._5_1_ = 0;
            local_40.field_6 = 0;
            local_40._7_1_ = 0;
            local_48 = (unsigned long)(unsigned int)arg4;
            local_40 = EntityHighlight();
            new (local_60) GridRect(arg2, arg3, arg5, arg6);
            uVar2 = SetSprite((world*)local_60._16_8_, local_40._12_4_, arg2, arg3, arg5, arg6, arg5 * 64 + arg2 * 128,
                              arg6 * 64 + arg3 * 128, (int)local_48, modelSource, arg8, false, arg9, arg10, &local_40,
                              (GridRect*)local_60);
        }
        return uVar2;
    }

    // 0x100308f80
    uint64_t world::SetSprite(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                              const shared_ptr<ModelSource>& modelSource, int arg10, bool arg11, long long arg12,
                              int arg13, const EntityHighlight& entityHighlight, const GridRect& gridRect) {
        bool bVar1;
        unsigned int uVar2;
        unsigned long uVar3;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        long lVar4;
        shared_ptr<Square>* this_00;
        long lVar6;
        shared_ptr<Sprite>* psVar7;
        uint32_t* puVar8;
        unsigned int uVar9;
        uint32_t in_register_0000000c;
        uint32_t in_register_00000014;
        uint32_t in_register_00000084;
        uint32_t in_register_0000008c;
        unsigned long uVar12;
        int iVar13;
        ReturnValue local_90;
        unsigned long local_80;
        unsigned int local_70;
        unsigned int local_64;

        unsigned long local_50 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        unsigned long local_40 = (((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3);
        unsigned long local_58 = (unsigned long)(unsigned int)(arg4 + arg2);
        uint64_t local_78 = (((uint64_t)in_register_0000008c << 32) | (uint32_t)arg5);
        unsigned long local_60 = (unsigned long)(unsigned int)(arg5 + arg3);
        uint64_t local_48 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4);
        if (arg4 < 1) {
            local_64 = 2;
        } else {
            do {
                if (0 < (int)local_78) {
                    uVar12 = local_40 & 4294967295;
                    do {
                        uVar3 = 1;
                        if ((((arg2 < 0) || ((int)local_40 < 0)) || (field_21804 <= arg2)) ||
                            (iVar13 = (int)uVar12, field_21808 <= iVar13))
                            goto LAB_1003090a3;
                        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(arg1, arg2, iVar13);
                        bVar1 = *midiPlayerMainThread != nullptr;
                        if ((bVar1) && (lVar4 = (*midiPlayerMainThread).operator->(), 4 < *(int*)(lVar4 + 156))) {
                            uVar3 = 1;
                            goto LAB_1003090a3;
                        }
                        uVar12 = (unsigned long)(iVar13 + 1U);
                    } while ((int)(iVar13 + 1U) < (int)local_60);
                }
                arg2 = arg2 + 1;
            } while (arg2 < (int)local_58);
            uVar3 = 2;
        LAB_1003090a3:
            local_64 = (unsigned int)uVar3;
            if (local_64 != 2)
                goto LAB_1003092e7;
        }
        make_shared<Sprite>(&local_90);
        int* piVar5 = (int*)*local_90;
        *(long long*)(piVar5 + 20) = arg12;
        piVar5[22] = arg13;
        *piVar5 = arg1;
        piVar5[2] = arg6;
        piVar5[3] = arg7;
        piVar5[1] = arg8;
        (*((piVar5 + 8))) = modelSource;
        int local_68 = (int)local_58 - 1;
        int local_6c = (int)local_60 - 1;
        piVar5[12] = arg10;
        piVar5[13] = (int)local_50;
        piVar5[15] = (int)local_40;
        piVar5[14] = local_68;
        piVar5[16] = local_6c;
        *(uint64_t*)(piVar5 + 23) = *(uint64_t*)entityHighlight;
        *(uint16_t*)(piVar5 + 25) = *(uint16_t*)&entityHighlight.field_8;
        iVar13 = gridRect.field_4;
        int iVar11 = gridRect.field_8;
        int iVar10 = gridRect.field_12;
        piVar5[4] = gridRect.field_0;
        piVar5[5] = iVar13;
        piVar5[6] = iVar11;
        piVar5[7] = iVar10;
        if (0 < (int)(unsigned int)local_48) {
            uVar12 = local_50 & 4294967295;
            do {
                iVar13 = (int)uVar12;
                uVar2 = ((int)local_50 < iVar13) + 4;
                if (local_68 <= iVar13) {
                    uVar2 = (unsigned int)((int)local_50 < iVar13);
                }
                local_80 = (unsigned long)uVar2;
                if (0 < (int)local_78) {
                    local_70 = uVar2 + 8;
                    uVar12 = local_40 & 4294967295;
                    do {
                        iVar11 = (int)uVar12;
                        uVar2 = (unsigned int)local_80;
                        if ((int)local_40 < iVar11) {
                            uVar2 = local_70;
                        }
                        uVar9 = uVar2 | 2;
                        if (local_6c <= iVar11) {
                            uVar9 = uVar2;
                        }
                        local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar9);
                        iVar10 = arg1;
                        if (-1 < arg1) {
                            do {
                                GetOrCreateSquare(iVar10, iVar13, iVar11);
                                bVar1 = 0 < iVar10;
                                iVar10 = iVar10 - 1;
                            } while (bVar1);
                        }
                        this_00 = (shared_ptr<Square>*)GetSquare(arg1, iVar13, iVar11);
                        lVar4 = (*this_00).operator->();
                        lVar6 = (*this_00).operator->();
                        psVar7 = (shared_ptr<Sprite>*)(*((lVar4 + 160)))[(long)*(int*)(lVar6 + 156)];
                        *psVar7 = local_90;
                        lVar4 = (*this_00).operator->();
                        lVar6 = (*this_00).operator->();
                        puVar8 = (uint32_t*)(*((lVar4 + 280)))[(long)*(int*)(lVar6 + 156)];
                        *puVar8 = (unsigned int)local_48;
                        lVar4 = (*this_00).operator->();
                        *(unsigned int*)(lVar4 + 344) = *(unsigned int*)(lVar4 + 344) | (unsigned int)local_48;
                        lVar4 = (*this_00).operator->();
                        *(int*)(lVar4 + 156) = *(int*)(lVar4 + 156) + 1;
                        uVar12 = (unsigned long)(iVar11 + 1U);
                    } while ((int)(iVar11 + 1U) < (int)local_60);
                }
                uVar12 = (unsigned long)(iVar13 + 1U);
            } while ((int)(iVar13 + 1U) < (int)local_58);
        }
        if (arg11) {
            iVar13 = field_110124;
            field_110124 = iVar13 + 1;
            psVar7 = &field_110128[(long)iVar13];
            *psVar7 = local_90;
        }
        uVar3 = (unsigned long)local_64;
    LAB_1003092e7:
        return (int)uVar3 == 2;
    }

    // 0x100309320
    void world::AddDynamic(int arg1, int arg2, int arg3, int arg4, int arg5, const shared_ptr<ModelSource>& modelSource,
                           int arg7, long long arg8, bool arg9) {
        uint8_t local_58[16];

        local_48.field_8 = 0;
        local_48.field_9 = '\0';
        local_48.m_colour = 0;
        local_48.field_2 = 0;
        local_48.field_4 = '\0';
        local_48._5_1_ = 0;
        local_48.field_6 = 0;
        local_48._7_1_ = 0;
        EntityHighlight local_48;
        new (local_58) GridRect();
        AddDynamic(arg1, arg2, arg3, arg4, arg5, modelSource, arg7, arg8, arg9, local_48, *local_58);
    }

    // 0x1003093b0
    uint64_t world::AddDynamic(int arg1, int arg2, int arg3, int arg4, int arg5,
                               const shared_ptr<ModelSource>& modelSource, int arg7, long long arg8, bool arg9,
                               const EntityHighlight& entityHighlight, const GridRect& gridRect) {
        uint64_t extraout_var;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;

        bool bVar1 = modelSource == nullptr;
        uint64_t uVar2 = (((uint64_t)extraout_var << 8) | (uint8_t)1);
        if (!bVar1) {
            iVar3 = arg2 - arg5;
            iVar5 = arg3 - arg5;
            iVar6 = arg5 + arg2;
            iVar7 = arg5 + arg3;
            if (arg9) {
                iVar4 = iVar7 + 128;
                if (766 < arg7 - 641U) {
                    iVar4 = iVar7;
                }
                iVar7 = iVar4;
                iVar4 = iVar6 + 128;
                if (766 < arg7 - 1153U) {
                    iVar4 = iVar6;
                }
                iVar6 = iVar4;
                iVar4 = iVar5 - 128;
                if (arg7 - 384U < 1281) {
                    iVar4 = iVar5;
                }
                iVar5 = iVar4;
                iVar4 = iVar3 - 128;
                if (766 < arg7 - 129U) {
                    iVar4 = iVar3;
                }
                iVar3 = iVar4;
            }
            iVar4 = iVar3 + 127;
            if (-1 < iVar3) {
                iVar4 = iVar3;
            }
            iVar3 = iVar5 + 127;
            if (-1 < iVar5) {
                iVar3 = iVar5;
            }
            iVar5 = iVar6 + 127;
            if (-1 < iVar6) {
                iVar5 = iVar6;
            }
            iVar6 = iVar7 + 127;
            if (-1 < iVar7) {
                iVar6 = iVar7;
            }
            uVar2 = SetSprite(arg1, iVar4 >> 7, iVar3 >> 7, ((iVar5 >> 7) - (iVar4 >> 7)) + 1,
                              ((iVar6 >> 7) - (iVar3 >> 7)) + 1, arg2, arg3, arg4, modelSource, arg7, true, arg8, 0,
                              entityHighlight, gridRect);
        }
        return uVar2;
    }

    // 0x100309500
    uint64_t world::AddDynamic(int arg1, int arg2, int arg3, int arg4, int arg5,
                               const shared_ptr<ModelSource>& modelSource, int arg7, long long arg8, int arg9,
                               int arg10, int arg11, int arg12, const EntityHighlight& entityHighlight,
                               const GridRect& gridRect) {
        uint64_t extraout_var;

        bool bVar1 = modelSource == nullptr;
        uint64_t uVar2 = (((uint64_t)extraout_var << 8) | (uint8_t)1);
        if (!bVar1) {
            uVar2 = SetSprite(arg1, arg9, arg10, (arg11 - arg9) + 1, (arg12 - arg10) + 1, arg2, arg3, arg4, modelSource,
                              arg7, true, arg8, 0, entityHighlight, gridRect);
        }
        return uVar2;
    }

    // 0x1003096a0
    void world::RemoveSprites() {
        shared_ptr<Sprite>* psVar1;
        Sprite* sprite;
        unsigned long arg1;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_38;

        if (0 < field_110124) {
            arg1 = 0;
            do {
                psVar1 = &field_110128[arg1];
                sprite = (Sprite*)**psVar1;
                DelSprite(*sprite);
                local_38 = shared_ptr();
                psVar1 = &field_110128[arg1];
                *psVar1 = local_38;
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)field_110124);
        }
        field_110124 = 0;
    }

    // 0x100309760
    void world::DelSprite(const Sprite& sprite) {
        unsigned long arg1;
        uint32_t uVar1;
        bool cVar3;
        unsigned int arg3;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        long lVar5;
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_00;
        shared_ptr<Sprite>* psVar7;
        shared_ptr<Sprite>* this_01;
        uint32_t* puVar8;
        long lVar9;
        unsigned int* puVar10;
        int iVar11;
        unsigned int uVar12;
        unsigned long uVar13;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        unsigned long local_48;
        unsigned long local_38;

        unsigned int uVar4 = *(unsigned int*)&sprite.field_52;
        if ((int)uVar4 <= *(int*)&sprite.field_56) {
            do {
                uVar13 = (unsigned long)uVar4;
                arg3 = *(unsigned int*)&sprite.field_60;
                uVar12 = uVar4;
                local_38 = uVar13;
                if ((int)arg3 <= *(int*)&sprite.field_64) {
                    do {
                        local_48 = (unsigned long)arg3;
                        midiPlayerMainThread =
                            (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(*(int*)sprite, (int)uVar13, arg3);
                        if (*midiPlayerMainThread != nullptr) {
                            lVar5 = (*midiPlayerMainThread).operator->();
                            iVar11 = 8;
                            if (0 < *(int*)(lVar5 + 156)) {
                                uVar13 = 0;
                            LAB_100309800:
                                lVar5 = (*midiPlayerMainThread).operator->();
                                this_00 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*((lVar5 + 160)))[uVar13];
                                if ((Sprite*)this_00->end() != sprite)
                                    goto code_r0x000100309824;
                                lVar5 = (*midiPlayerMainThread).operator->();
                                *(int*)(lVar5 + 156) = *(int*)(lVar5 + 156) - 1;
                                lVar5 = (*midiPlayerMainThread).operator->();
                                if ((int)uVar13 < *(int*)(lVar5 + 156)) {
                                    do {
                                        lVar5 = (*midiPlayerMainThread).operator->();
                                        arg1 = uVar13 + 1;
                                        psVar7 = (shared_ptr<Sprite>*)(*((lVar5 + 160)))[arg1];
                                        lVar5 = (*midiPlayerMainThread).operator->();
                                        this_01 = (shared_ptr<Sprite>*)(*((lVar5 + 160)))[uVar13];
                                        *this_01 = *psVar7;
                                        lVar5 = (*midiPlayerMainThread).operator->();
                                        puVar8 = (uint32_t*)(*((lVar5 + 280)))[arg1];
                                        uVar1 = *puVar8;
                                        lVar5 = (*midiPlayerMainThread).operator->();
                                        puVar8 = (uint32_t*)(*((lVar5 + 280)))[uVar13];
                                        *puVar8 = uVar1;
                                        lVar5 = (*midiPlayerMainThread).operator->();
                                        uVar13 = arg1;
                                    } while ((long)arg1 < (long)*(int*)(lVar5 + 156));
                                }
                                lVar5 = (*midiPlayerMainThread).operator->();
                                lVar9 = (*midiPlayerMainThread).operator->();
                                cVar3 = ((shared_ptr<configdecoder::OldscapeVarType>*)(*(
                                             (lVar5 + 160)))[(long)*(int*)(lVar9 + 156)])
                                            ->unique();
                                local_58 = shared_ptr();
                                lVar5 = (*midiPlayerMainThread).operator->();
                                lVar9 = (*midiPlayerMainThread).operator->();
                                psVar7 = (shared_ptr<Sprite>*)(*((lVar5 + 160)))[(long)*(int*)(lVar9 + 156)];
                                *psVar7 = local_58;
                                iVar11 = 8;
                                if (cVar3) {
                                    iVar11 = 1;
                                }
                                this = this;
                            LAB_10030998c:
                                uVar13 = local_38;
                            }
                            if (iVar11 == 8) {
                                lVar5 = (*midiPlayerMainThread).operator->();
                                *(uint32_t*)(lVar5 + 344) = 0;
                                lVar5 = (*midiPlayerMainThread).operator->();
                                if (*(int*)(lVar5 + 156) < 1)
                                    goto LAB_100309a20;
                                uVar13 = 0;
                                do {
                                    lVar5 = (*midiPlayerMainThread).operator->();
                                    puVar10 = (unsigned int*)(*((lVar5 + 280)))[uVar13];
                                    uVar4 = *puVar10;
                                    lVar5 = (*midiPlayerMainThread).operator->();
                                    *(unsigned int*)(lVar5 + 344) = *(unsigned int*)(lVar5 + 344) | uVar4;
                                    uVar13 = uVar13 + 1;
                                    lVar5 = (*midiPlayerMainThread).operator->();
                                } while ((long)uVar13 < (long)*(int*)(lVar5 + 156));
                                iVar11 = 0;
                                uVar13 = local_38;
                            }
                            uVar12 = (unsigned int)uVar13;
                            if (iVar11 != 0)
                                goto LAB_100309a3e;
                        } else {
                        LAB_100309a20:
                        }
                        uVar12 = (unsigned int)uVar13;
                        arg3 = (int)local_48 + 1;
                    } while ((int)local_48 < *(int*)&sprite.field_64);
                }
                iVar11 = 5;
            LAB_100309a3e:
            } while ((iVar11 == 5) && (uVar4 = uVar12 + 1, (int)uVar12 < *(int*)&sprite.field_56));
        }
        return;
    code_r0x000100309824:
        uVar13 = uVar13 + 1;
        lVar5 = (*midiPlayerMainThread).operator->();
        if ((long)*(int*)(lVar5 + 156) <= (long)uVar13)
            goto LAB_10030998c;
        goto LAB_100309800;
    }

    // 0x100309a80
    void world::MoveDecor(int arg1, int arg2, int arg3, int arg4) {
        int iVar2;
        long lVar4;
        int iVar5;

        auto psVar3 = GetSquare(arg1, arg2, arg3);
        if (!(*psVar3 == nullptr)) {
            lVar4 = (*psVar3).operator->();
            psVar3 = (shared_ptr<configdecoder::ObjType>*)(lVar4 + 96);
            if (!(*psVar3 == nullptr)) {
                lVar4 = (*psVar3).operator->();
                iVar2 = *(int*)(lVar4 + 20) * arg4;
                iVar5 = iVar2 + 15;
                if (-1 < iVar2) {
                    iVar5 = iVar2;
                }
                lVar4 = (*psVar3).operator->();
                *(int*)(lVar4 + 20) = iVar5 >> 4;
                lVar4 = (*psVar3).operator->();
                iVar2 = arg4 * *(int*)(lVar4 + 24);
                iVar5 = iVar2 + 15;
                if (-1 < iVar2) {
                    iVar5 = iVar2;
                }
                lVar4 = (*psVar3).operator->();
                *(int*)(lVar4 + 24) = iVar5 >> 4;
            }
        }
    }

    // 0x100309b20
    void world::DelWall(int arg1, int arg2, int arg3) {
        long lVar2;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_20;

        auto objType = GetSquare(arg1, arg2, arg3);
        if (!*objType == nullptr) {
            local_20 = shared_ptr();
            lVar2 = (*objType).operator->();
            (*((lVar2 + 80))) = local_20;
        }
    }

    // 0x100309be0
    void world::DelDecor(int arg1, int arg2, int arg3) {
        long lVar2;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_20;

        auto objType = GetSquare(arg1, arg2, arg3);
        if (!*objType == nullptr) {
            local_20 = shared_ptr();
            lVar2 = (*objType).operator->();
            (*((lVar2 + 96))) = local_20;
        }
    }

    // 0x100309ca0
    void world::DelLoc(int arg1, int arg2, int arg3) {
        long lVar3;
        shared_ptr<Sprite>* this_00;
        Sprite* sprite;
        unsigned long arg1_00;
        unsigned long arg1_01;

        auto objType = GetSquare(arg1, arg2, arg3);
        if ((!*objType == nullptr) && (lVar3 = (*objType).operator->(), 0 < *(int*)(lVar3 + 156))) {
            arg1_00 = 0;
            do {
                lVar3 = (*objType).operator->();
                arg1_01 = arg1_00;
                this_00 = (shared_ptr<Sprite>*)(*((lVar3 + 160)))[arg1_00];
                lVar3 = (*this_00).operator->();
                if ((((*(MousePickingHelper**)(lVar3 + 80))->IsLocTypecode(arg1_01) != '\0') &&
                     (lVar3 = (*this_00).operator->(), *(int*)(lVar3 + 52) == arg2)) &&
                    (lVar3 = (*this_00).operator->(), *(int*)(lVar3 + 60) == arg3)) {
                    sprite = (Sprite*)**this_00;
                    DelSprite(*sprite);
                    return;
                }
                arg1_00 = arg1_00 + 1;
                lVar3 = (*objType).operator->();
            } while ((long)arg1_00 < (long)*(int*)(lVar3 + 156));
        }
    }

    // 0x100309d80
    void world::DelGroundDecor(int arg1, int arg2, int arg3) {
        long lVar2;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_20;

        auto objType = GetSquare(arg1, arg2, arg3);
        if (!*objType == nullptr) {
            local_20 = shared_ptr();
            lVar2 = (*objType).operator->();
            (*((lVar2 + 112))) = local_20;
        }
    }

    // 0x100309e40
    void world::DelObj(int arg1, int arg2, int arg3) {
        long lVar2;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_20;

        auto objType = GetSquare(arg1, arg2, arg3);
        if (!*objType == nullptr) {
            local_20 = shared_ptr();
            lVar2 = (*objType).operator->();
            (*((lVar2 + 128))) = local_20;
        }
    }

    // 0x100309ef0
    void world::ResetMapArea(int arg1, int arg2, int arg3, int arg4, int arg5) {
        uint32_t in_register_00000014;
        uint32_t in_register_00000084;
        unsigned int uVar1;
        unsigned long uVar2;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        int local_34;

        uint64_t local_48 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4);
        unsigned long local_40 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        if (0 < arg3) {
            local_34 = arg3 + arg1;
            do {
                uVar2 = local_40 & 4294967295;
                if (0 < (int)local_48) {
                    do {
                        local_58 = shared_ptr();
                        SetSquare(arg5, arg1, (int)uVar2, local_58);
                        uVar1 = (int)uVar2 + 1;
                        uVar2 = (unsigned long)uVar1;
                    } while ((int)uVar1 < arg4 + arg2);
                }
                arg1 = arg1 + 1;
            } while (arg1 < local_34);
        }
    }

    // 0x100309fb0
    void world::ResetSprites(int arg1, int arg2, int arg3, int arg4) {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        long lVar2;
        int arg2_00;
        int arg1_00;
        int arg3_00;

        if (0 < field_21800) {
            arg1_00 = 0;
            do {
                arg2_00 = arg1;
                if (0 < arg3) {
                    do {
                        arg3_00 = arg2;
                        if (0 < arg4) {
                            do {
                                midiPlayerMainThread =
                                    (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(arg1_00, arg2_00, arg3_00);
                                if (*midiPlayerMainThread != nullptr) {
                                    lVar2 = (*midiPlayerMainThread).operator->();
                                    *(uint32_t*)(lVar2 + 156) = 0;
                                }
                                arg3_00 = arg3_00 + 1;
                            } while (arg3_00 < arg4 + arg2);
                        }
                        arg2_00 = arg2_00 + 1;
                    } while (arg2_00 < arg3 + arg1);
                }
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 < field_21800);
        }
    }

    // 0x10030a090
    void world::SetDrawDistance(int arg1) {
        vector<int, BucketAllocatorEASTL> local_28;

        auto shaderVariablePrecision1 = eastl::min<jag::graphics::GraphicsQuality>(90, arg1);
        m_drawDistanceRange = eastl::max<int>(shaderVariablePrecision1, 25);
        (**(void (**)(...))(*m_pix3D + 48))(m_pix3D, m_drawDistanceRange);
        if (m_visCalcParams.empty() == '\0') {
            local_28 = eastl::vector<int, BucketAllocatorEASTL>(m_visCalcParams);
            ResetVisCalc(&local_28, reinterpret_cast<const uint64_t*>(&m_visCalcParams)[3], DAT_1016c61bc,
                         reinterpret_cast<const uint64_t*>(&m_visCalcParams)[4], DAT_1016c61c4);
        }
    }

    // 0x10030a130
    void world::ResetVisCalc(eastl::vector<int, BucketAllocatorEASTL> arg1, int arg2, int arg3, int arg4, int arg5) {
        if (arg1->size() != 9) {
            LogAssert("baseY.size() == 9",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "World.cpp",
                      1367, nullptr);
        }
        m_visCalcParams = *arg1;
        m_xClip = 0;
        m_yClip = 0;
        m_xOrig = arg4 / 2;
        m_yOrig = arg5 / 2;
        reinterpret_cast<const uint64_t*>(&m_visCalcParams)[3] = arg2;
        DAT_1016c61bc = arg3;
        reinterpret_cast<const uint64_t*>(&m_visCalcParams)[4] = arg4;
        DAT_1016c61c4 = arg5;
        m_xClip2 = arg4;
        m_yClip2 = arg5;
        auto pvVar2 = m_visBackingDirty.data();
        _memset(pvVar2, 1, 8386816);
        pvVar2 = (void*)m_pvisBackingDirty.data();
        _memset(pvVar2, 1, 9644832);
    }

    // 0x10030a230
    auto world::GetWall(int arg1, int arg2, int arg3) const {
        long lVar2;

        auto objType = GetSquare(arg1, arg2, arg3);
        if (*objType == nullptr) {
            auto result;
        } else {
            lVar2 = (*objType).operator->();
            new (&result) shared_ptr((lVar2 + 80));
        }
        return result;
    }

    // 0x10030a290
    auto world::GetDecor(int arg1, int arg2, int arg3) const {
        long lVar2;

        auto objType = GetSquare(arg1, arg2, arg3);
        if (*objType == nullptr) {
            auto result;
        } else {
            lVar2 = (*objType).operator->();
            new (&result) shared_ptr((lVar2 + 96));
        }
        return result;
    }

    // 0x10030a2f0
    auto world::GetGroundDecor(int arg1, int arg2, int arg3) const {
        long lVar2;

        auto objType = GetSquare(arg1, arg2, arg3);
        if (*objType == nullptr) {
            auto result;
        } else {
            lVar2 = (*objType).operator->();
            new (&result) shared_ptr((lVar2 + 112));
        }
        return result;
    }

    // 0x10030a350
    auto world::GetScene(int arg1, int arg2, int arg3) const {
        long lVar3;
        shared_ptr<Sprite>* this_00;
        unsigned long arg1_00;
        unsigned long arg1_01;

        auto objType = GetSquare(arg1, arg2, arg3);
        if ((!*objType == nullptr) && (lVar3 = (*objType).operator->(), 0 < *(int*)(lVar3 + 156))) {
            arg1_00 = 0;
            do {
                lVar3 = (*objType).operator->();
                arg1_01 = arg1_00;
                this_00 = (shared_ptr<Sprite>*)(*((lVar3 + 160)))[arg1_00];
                lVar3 = (*this_00).operator->();
                if ((((*(MousePickingHelper**)(lVar3 + 80))->IsLocTypecode(arg1_01) != '\0') &&
                     (lVar3 = (*this_00).operator->(), *(int*)(lVar3 + 52) == arg2)) &&
                    (lVar3 = (*this_00).operator->(), *(int*)(lVar3 + 60) == arg3)) {
                    return auto(this_00);
                }
                arg1_00 = arg1_00 + 1;
                lVar3 = (*objType).operator->();
            } while ((long)arg1_00 < (long)*(int*)(lVar3 + 156));
        }
        new (&result) shared_ptr();
        return result;
    }

    // 0x10030a450
    auto world::GetGd(int arg1, int arg2, int arg3) const {
        long lVar2;

        auto objType = GetSquare(arg1, arg2, arg3);
        if (!(*objType == nullptr)) {
            lVar2 = (*objType).operator->();
            if (!((*((lVar2 + 112))) == nullptr)) {
                lVar2 = (*objType).operator->();
                return auto((lVar2 + 112));
            }
        }
        new (&result) shared_ptr();
        return result;
    }

    // 0x10030a4c0
    auto world::GetLocLayer(int arg1, int arg2, int arg3, int arg4) const {
        ReturnValue* pRVar1;
        int iVar4;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        long lVar5;
        shared_ptr local_50;
        ReturnValue* local_38;

        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(arg1, arg2, arg3);
        if (*midiPlayerMainThread != nullptr) {
            local_38 = &result;
            lVar5 = (*midiPlayerMainThread).operator->();
            if (((lVar5 + 96))->operator_cast_to_bool()) {
                lVar5 = (*midiPlayerMainThread).operator->();
                lVar5 = (*((lVar5 + 96))).operator->();
                iVar4 = MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar5 + 64));
                pRVar1 = local_38;
                if (iVar4 == arg4) {
                    new (local_38) Nullable(1);
                    return pRVar1;
                }
            }
            lVar5 = (*midiPlayerMainThread).operator->();
            if (((lVar5 + 80))->operator_cast_to_bool()) {
                lVar5 = (*midiPlayerMainThread).operator->();
                lVar5 = (*((lVar5 + 80))).operator->();
                iVar4 = MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar5 + 56));
                pRVar1 = local_38;
                if (iVar4 == arg4) {
                    new (local_38) Nullable(0);
                    return pRVar1;
                }
            }
            lVar5 = (*midiPlayerMainThread).operator->();
            if (((lVar5 + 112))->operator_cast_to_bool()) {
                lVar5 = (*midiPlayerMainThread).operator->();
                lVar5 = (*((lVar5 + 112))).operator->();
                iVar4 = MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar5 + 32));
                pRVar1 = local_38;
                if (iVar4 == arg4) {
                    new (local_38) Nullable(3);
                    return pRVar1;
                }
            }
            GetScene((ReturnValue*)&local_50, this, arg1, arg2, arg3);
            if (shared_ptr::operator_cast_to_bool(&local_50)) {
                lVar5 = local_50.operator->();
                iVar4 = MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar5 + 80));
                if (iVar4 == arg4) {
                    new (local_38) Nullable(2);
                    return local_38;
                }
            }
            &result = local_38;
        }
        return auto();
    }

    // 0x10030a690
    uint64_t world::WallType(int arg1, int arg2, int arg3) {
        long lVar2;

        auto objType = GetSquare(arg1, arg2, arg3);
        uint64_t uVar3 = 0;
        if (!(*objType == nullptr)) {
            lVar2 = (*objType).operator->();
            uVar3 = 0;
            if (!((*((lVar2 + 80))) == nullptr)) {
                lVar2 = (*objType).operator->();
                lVar2 = (*((lVar2 + 80))).operator->();
                uVar3 = *(uint64_t*)(lVar2 + 56);
            }
        }
        return uVar3;
    }

    // 0x10030a6f0
    uint64_t world::DecorType(int arg1, int arg2, int arg3) {
        long lVar2;

        auto objType = GetSquare(arg1, arg2, arg3);
        uint64_t uVar3 = 0;
        if (!(*objType == nullptr)) {
            lVar2 = (*objType).operator->();
            uVar3 = 0;
            if (!((*((lVar2 + 96))) == nullptr)) {
                lVar2 = (*objType).operator->();
                lVar2 = (*((lVar2 + 96))).operator->();
                uVar3 = *(uint64_t*)(lVar2 + 64);
            }
        }
        return uVar3;
    }

    // 0x10030a750
    uint64_t world::SceneType(int arg1, int arg2, int arg3) {
        bool cVar2;
        long lVar3;
        shared_ptr<Sprite>* this_00;
        unsigned long arg1_00;
        unsigned long arg1_01;
        uint64_t local_40;

        auto objType = GetSquare(arg1, arg2, arg3);
        bool bVar1 = *objType == nullptr;
        if ((!bVar1) && (lVar3 = (*objType).operator->(), 0 < *(int*)(lVar3 + 156))) {
            arg1_00 = 0;
            do {
                lVar3 = (*objType).operator->();
                arg1_01 = arg1_00;
                this_00 = (shared_ptr<Sprite>*)(*((lVar3 + 160)))[arg1_00];
                lVar3 = (*this_00).operator->();
                cVar2 = (*(MousePickingHelper**)(lVar3 + 80))->IsLocTypecode(arg1_01);
                bVar1 = true;
                if (((cVar2) && (lVar3 = (*this_00).operator->(), *(int*)(lVar3 + 52) == arg2)) &&
                    (lVar3 = (*this_00).operator->(), *(int*)(lVar3 + 60) == arg3)) {
                    lVar3 = (*this_00).operator->();
                    local_40 = *(uint64_t*)(lVar3 + 80);
                    bVar1 = false;
                }
                if (!bVar1) {
                    return local_40;
                }
                arg1_00 = arg1_00 + 1;
                lVar3 = (*objType).operator->();
            } while ((long)arg1_00 < (long)*(int*)(lVar3 + 156));
        }
        return 0;
    }

    // 0x10030a850
    uint64_t world::GdType(int arg1, int arg2, int arg3) {
        long lVar2;

        auto objType = GetSquare(arg1, arg2, arg3);
        uint64_t uVar3 = 0;
        if (!(*objType == nullptr)) {
            lVar2 = (*objType).operator->();
            uVar3 = 0;
            if (!((*((lVar2 + 112))) == nullptr)) {
                lVar2 = (*objType).operator->();
                lVar2 = (*((lVar2 + 112))).operator->();
                uVar3 = *(uint64_t*)(lVar2 + 32);
            }
        }
        return uVar3;
    }

    // 0x10030a8b0
    unsigned long world::TypeCode2(int arg1, int arg2, int arg3, long long arg4) {
        long lVar2;
        shared_ptr<Sprite>* psVar3;
        unsigned long arg1_00;

        auto objType = GetSquare(arg1, arg2, arg3);
        if (!(*objType == nullptr)) {
            lVar2 = (*objType).operator->();
            if ((*((lVar2 + 80))) != nullptr) {
                lVar2 = (*objType).operator->();
                lVar2 = (*((lVar2 + 80))).operator->();
                if (*(long*)(lVar2 + 56) == arg4) {
                    lVar2 = (*objType).operator->();
                    lVar2 = (*((lVar2 + 80))).operator->();
                    return (unsigned long)*(uint8_t*)(lVar2 + 20);
                }
            }
            lVar2 = (*objType).operator->();
            if ((*((lVar2 + 96))) != nullptr) {
                lVar2 = (*objType).operator->();
                lVar2 = (*((lVar2 + 96))).operator->();
                if (*(long*)(lVar2 + 64) == arg4) {
                    lVar2 = (*objType).operator->();
                    lVar2 = (*((lVar2 + 96))).operator->();
                    return (unsigned long)*(uint8_t*)(lVar2 + 72);
                }
            }
            lVar2 = (*objType).operator->();
            if ((*((lVar2 + 112))) != nullptr) {
                lVar2 = (*objType).operator->();
                lVar2 = (*((lVar2 + 112))).operator->();
                if (*(long*)(lVar2 + 32) == arg4) {
                    lVar2 = (*objType).operator->();
                    lVar2 = (*((lVar2 + 112))).operator->();
                    return (unsigned long)*(uint8_t*)(lVar2 + 40);
                }
            }
            lVar2 = (*objType).operator->();
            if (0 < *(int*)(lVar2 + 156)) {
                arg1_00 = 0;
                do {
                    lVar2 = (*objType).operator->();
                    psVar3 = (shared_ptr<Sprite>*)(*((lVar2 + 160)))[arg1_00];
                    lVar2 = (*psVar3).operator->();
                    if (*(long*)(lVar2 + 80) == arg4) {
                        lVar2 = (*objType).operator->();
                        psVar3 = (shared_ptr<Sprite>*)(*((lVar2 + 160)))[arg1_00];
                        lVar2 = (*psVar3).operator->();
                        return (unsigned long)*(uint8_t*)(lVar2 + 88);
                    }
                    arg1_00 = arg1_00 + 1;
                    lVar2 = (*objType).operator->();
                } while ((long)arg1_00 < (long)*(int*)(lVar2 + 156));
            }
        }
        return 4294967295;
    }

    // 0x10030aa40
    void world::SetTileHighlight(int arg1, int arg2, int arg3, const EntityHighlight& entityHighlight) {
        shared_ptr* this_00;
        long lVar2;

        if (IsValidSquare(arg1, arg2, arg3)) {
            this_00 = (shared_ptr*)GetSquare(arg1, arg2, arg3);
            if (shared_ptr::operator_cast_to_bool(this_00)) {
                lVar2 = (*this_00).operator->();
                *(uint64_t*)(lVar2 + 144) = *(uint64_t*)entityHighlight;
                *(uint16_t*)(lVar2 + 152) = *(uint16_t*)&entityHighlight.field_8;
            }
        }
    }

    // 0x10030ab10
    void world::ShareLight(int arg1, int arg2, int arg3) {
        int iVar1;
        bool cVar3;
        unsigned int uVar4;
        int iVar5;
        int arg2_00;
        shared_ptr<midi2::MidiPlayerMainThread>* psVar6;
        long lVar7;
        long* plVar8;
        ModelUnlit* pMVar9;
        ModelUnlit* modelUnlit2;
        shared_ptr* this_00;
        int iVar10;
        unsigned long arg1_00;
        shared_ptr<ClientLocAnim> local_90;
        shared_ptr<ClientNpc> local_80;
        shared_ptr<ClientNpc> local_70;
        shared_ptr<midi2::MidiPlayerMainThread>* local_60;
        unsigned long local_50;
        int local_38;
        int local_34;

        if (0 < field_21800) {
            local_50 = 0;
            do {
                if (0 < field_21804) {
                    local_34 = 0;
                    do {
                        if (0 < field_21808) {
                            local_38 = 0;
                            do {
                                psVar6 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare((int)local_50, local_34,
                                                                                             local_38);
                                if (*psVar6 != nullptr) {
                                    local_60 = psVar6;
                                    lVar7 = (*psVar6).operator->();
                                    psVar6 = (shared_ptr<midi2::MidiPlayerMainThread>*)(lVar7 + 80);
                                    if (*psVar6 != nullptr) {
                                        lVar7 = (*psVar6).operator->();
                                        cVar3 = ((lVar7 + 24))->operator_cast_to_bool();
                                        if (cVar3) {
                                            lVar7 = (*psVar6).operator->();
                                            plVar8 = (long*)(*((lVar7 + 24))).operator->();
                                            cVar3 = (**(void (**)(...))(*plVar8 + 32))(plVar8);
                                            if (cVar3) {
                                                (*psVar6).operator->();
                                                static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_80);
                                                iVar5 = *local_80;
                                                ShareLightLoc((ModelUnlit*)this, iVar5, (int)local_50, local_34,
                                                              local_38, 1);
                                                lVar7 = (*psVar6).operator->();
                                                cVar3 = ((lVar7 + 40))->operator_cast_to_bool();
                                                if (cVar3) {
                                                    lVar7 = (*psVar6).operator->();
                                                    plVar8 = (long*)(*((lVar7 + 40))).operator->();
                                                    cVar3 = (**(void (**)(...))(*plVar8 + 32))(plVar8);
                                                    if (cVar3) {
                                                        (*psVar6).operator->();
                                                        static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                                            &local_70);
                                                        iVar5 = *local_70;
                                                        ShareLightLoc((ModelUnlit*)this, iVar5, (int)local_50, local_34,
                                                                      local_38, 1);
                                                        pMVar9 = (ModelUnlit*)*local_80;
                                                        modelUnlit2 = (ModelUnlit*)*local_70;
                                                        ModelUnlit::ShareLight(*pMVar9, *modelUnlit2, 0, 0, 0, false);
                                                        plVar8 = (long*)local_70.operator->();
                                                        (**(void (**)(...))(*plVar8 + 80))(&local_90, plVar8, arg1,
                                                                                           arg2, arg3);
                                                        lVar7 = (*psVar6).operator->();
                                                        (*((lVar7 + 40))) = local_90;
                                                    }
                                                }
                                                plVar8 = (long*)local_80.operator->();
                                                (**(void (**)(...))(*plVar8 + 80))(&local_70, plVar8, arg1, arg2, arg3);
                                                lVar7 = (*psVar6).operator->();
                                                (*((lVar7 + 24))) = local_70;
                                            }
                                        }
                                    }
                                    psVar6 = local_60;
                                    lVar7 = (*local_60).operator->();
                                    if (0 < *(int*)(lVar7 + 156)) {
                                        arg1_00 = 0;
                                        do {
                                            lVar7 = (*psVar6).operator->();
                                            psVar6 =
                                                (shared_ptr<midi2::MidiPlayerMainThread>*)(*((lVar7 + 160)))[arg1_00];
                                            if (*psVar6 != nullptr) {
                                                lVar7 = (*psVar6).operator->();
                                                cVar3 = ((lVar7 + 32))->operator_cast_to_bool();
                                                if (cVar3) {
                                                    lVar7 = (*psVar6).operator->();
                                                    plVar8 = (long*)(*((lVar7 + 32))).operator->();
                                                    cVar3 = (**(void (**)(...))(*plVar8 + 32))(plVar8);
                                                    if (cVar3) {
                                                        (*psVar6).operator->();
                                                        static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                                            &local_80);
                                                        arg2_00 = *local_80;
                                                        lVar7 = (*psVar6).operator->();
                                                        iVar5 = *(int*)(lVar7 + 56);
                                                        lVar7 = (*psVar6).operator->();
                                                        iVar1 = *(int*)(lVar7 + 52);
                                                        lVar7 = (*psVar6).operator->();
                                                        iVar10 = *(int*)(lVar7 + 64);
                                                        lVar7 = (*psVar6).operator->();
                                                        iVar10 = (iVar10 - *(int*)(lVar7 + 60)) + 1;
                                                        ShareLightLoc((ModelUnlit*)this, arg2_00, (int)local_50,
                                                                      local_34, local_38, (iVar5 - iVar1) + 1);
                                                        plVar8 = (long*)local_80.operator->();
                                                        (**(void (**)(...))(*plVar8 + 80))(
                                                            (shared_ptr<RSevenDebugPresetProvider>*)&local_70, plVar8,
                                                            arg1, arg2, arg3, *plVar8, iVar10);
                                                        lVar7 = (*psVar6).operator->();
                                                        (*((lVar7 + 32))) = local_70;
                                                    }
                                                }
                                            }
                                            psVar6 = local_60;
                                            arg1_00 = arg1_00 + 1;
                                            lVar7 = (*local_60).operator->();
                                        } while ((long)arg1_00 < (long)*(int*)(lVar7 + 156));
                                    }
                                    lVar7 = (*psVar6).operator->();
                                    this_00 = (shared_ptr*)(lVar7 + 112);
                                    cVar3 = shared_ptr::operator_cast_to_bool(this_00);
                                    this = this;
                                    if (cVar3) {
                                        lVar7 = (*this_00).operator->();
                                        cVar3 = ((lVar7 + 16))->operator_cast_to_bool();
                                        if (cVar3) {
                                            lVar7 = (*this_00).operator->();
                                            plVar8 = (long*)(*((lVar7 + 16))).operator->();
                                            cVar3 = (**(void (**)(...))(*plVar8 + 32))(plVar8);
                                            if (cVar3) {
                                                (*this_00).operator->();
                                                static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_80);
                                                pMVar9 = (ModelUnlit*)*local_80;
                                                ShareLightGd(*pMVar9, (int)local_50, local_34, local_38);
                                                plVar8 = (long*)local_80.operator->();
                                                (**(void (**)(...))(*plVar8 + 80))(&local_70, plVar8, arg1, arg2, arg3);
                                                lVar7 = (*this_00).operator->();
                                                (*((lVar7 + 16))) = local_70;
                                            }
                                        }
                                    }
                                }
                                local_38 = local_38 + 1;
                            } while (local_38 < field_21808);
                        }
                        local_34 = local_34 + 1;
                    } while (local_34 < field_21804);
                }
                uVar4 = (int)local_50 + 1;
                local_50 = (unsigned long)uVar4;
            } while ((int)uVar4 < field_21800);
        }
    }

    // 0x10030b080
    void world::ShareLightLoc(ModelUnlit& modelUnlit, int arg2, int arg3, int arg4, int arg5, int arg6) {
        int iVar1;
        int iVar2;
        int iVar5;
        unsigned int arg3_00;
        shared_ptr<configdecoder::ObjType>* psVar6;
        long lVar7;
        long* plVar8;
        ModelUnlit* pMVar9;
        uint32_t in_register_0000000c;
        uint32_t in_register_00000014;
        uint32_t in_register_00000034;
        uint32_t in_register_00000084;
        uint32_t in_register_0000008c;
        unsigned int uVar10;
        shared_ptr<midi2::MidiPlayerMainThread>* psVar11;
        unsigned long arg1;
        int in_stack_00000008;
        CoordGrid local_d8;
        unsigned long local_c8;
        ModelUnlit* local_c0;
        shared_ptr<configdecoder::ObjType>* local_a8;
        int local_9c;
        int local_98;
        int local_8c;
        CoordGrid local_70;
        int local_58;
        int local_48;
        uint8_t local_31;

        uint64_t local_b8 = (((uint64_t)in_register_0000008c << 32) | (uint32_t)arg6);
        uint64_t local_50 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg5);
        ModelUnlit* local_80 = (ModelUnlit*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        unsigned long local_88 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg3);
        unsigned long local_40 = (((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4);
        int local_44 = arg6 + arg4;
        unsigned int local_94 = arg5 - 1;
        int local_60 = in_stack_00000008 + arg5;
        int local_90 = arg6 * -64 + 64;
        int local_54 = in_stack_00000008 * -64 + 64;
        uint32_t local_38 =
            (uint32_t)(((uint64_t)((uint64_t)(uint32_t)((unsigned int)(in_stack_00000008 * 64) >> 8)) << 8) |
                       (uint8_t)1);
        world* local_b0 = (world*)modelUnlit;
        unsigned long local_78 = local_40;
        do {
            if ((int)local_88 != ((world*)modelUnlit)->field_21800) {
                local_8c = (int)local_40;
                local_40 = local_40 & 4294967295;
                if (local_8c <= local_44) {
                    do {
                        iVar5 = (int)local_40;
                        if (((-1 < iVar5) && (iVar5 < ((world*)modelUnlit)->field_21804)) && (-2 < in_stack_00000008)) {
                            local_31 = iVar5 < local_44 & (uint8_t)local_38;
                            local_58 = (iVar5 - (int)local_78) * 128 + local_90;
                            arg3_00 = local_94;
                            do {
                                uVar10 = arg3_00;
                                if (((-1 < (int)arg3_00) && ((int)arg3_00 < ((world*)modelUnlit)->field_21808)) &&
                                    ((((int)arg3_00 < local_60 & local_31) != 1 ||
                                      (((int)arg3_00 < (int)local_50 && ((int)local_40 != (int)local_78)))))) {
                                    psVar6 = (shared_ptr<configdecoder::ObjType>*)GetSquare(
                                        (world*)modelUnlit, (int)local_88, (int)local_40, arg3_00);
                                    if (!(*psVar6 == nullptr)) {
                                        local_70 = rs2lib::CoordGrid((int)local_88, (int)local_40, arg3_00);
                                        local_d8 = rs2lib::CoordGrid(arg3, (int)local_78, (int)local_50);
                                        local_48 = GetTileAvgYDif((world*)modelUnlit, &local_70, &local_d8);
                                        local_a8 = psVar6;
                                        lVar7 = (*psVar6).operator->();
                                        psVar11 = (shared_ptr<midi2::MidiPlayerMainThread>*)(lVar7 + 80);
                                        if (*psVar11 != nullptr) {
                                            lVar7 = (*psVar11).operator->();
                                            if (((lVar7 + 24))->operator_cast_to_bool()) {
                                                lVar7 = (*psVar11).operator->();
                                                plVar8 = (long*)(*((lVar7 + 24))).operator->();
                                                if ((**(void (**)(...))(*plVar8 + 32))(plVar8)) {
                                                    (*psVar11).operator->();
                                                    static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                                        (shared_ptr<ClientNpc>*)&local_70);
                                                    pMVar9 = (ModelUnlit*)*local_70;
                                                    ModelUnlit::ShareLight(*local_80, *pMVar9, local_58, local_48,
                                                                           (arg3_00 - (int)local_50) * 128 + local_54,
                                                                           (bool)((uint8_t)local_38 & 1));
                                                }
                                            }
                                            lVar7 = (*psVar11).operator->();
                                            if (((lVar7 + 40))->operator_cast_to_bool()) {
                                                lVar7 = (*psVar11).operator->();
                                                plVar8 = (long*)(*((lVar7 + 40))).operator->();
                                                if ((**(void (**)(...))(*plVar8 + 32))(plVar8)) {
                                                    (*psVar11).operator->();
                                                    static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                                        (shared_ptr<ClientNpc>*)&local_70);
                                                    pMVar9 = (ModelUnlit*)*local_70;
                                                    ModelUnlit::ShareLight(*local_80, *pMVar9, local_58, local_48,
                                                                           (arg3_00 - (int)local_50) * 128 + local_54,
                                                                           (bool)((uint8_t)local_38 & 1));
                                                }
                                            }
                                        }
                                        psVar6 = local_a8;
                                        lVar7 = (*local_a8).operator->();
                                        if (0 < *(int*)(lVar7 + 156)) {
                                            arg1 = 0;
                                            local_c8 = (unsigned long)arg3_00;
                                            do {
                                                lVar7 = (*psVar6).operator->();
                                                psVar11 =
                                                    (shared_ptr<midi2::MidiPlayerMainThread>*)(*((lVar7 + 160)))[arg1];
                                                if (*psVar11 != nullptr) {
                                                    lVar7 = (*psVar11).operator->();
                                                    if (((lVar7 + 32))->operator_cast_to_bool()) {
                                                        lVar7 = (*psVar11).operator->();
                                                        plVar8 = (long*)(*((lVar7 + 32))).operator->();
                                                        if ((**(void (**)(...))(*plVar8 + 32))(plVar8)) {
                                                            (*psVar11).operator->();
                                                            static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                                                (shared_ptr<ClientNpc>*)&local_70);
                                                            lVar7 = (*psVar11).operator->();
                                                            iVar5 = *(int*)(lVar7 + 56);
                                                            lVar7 = (*psVar11).operator->();
                                                            local_9c = *(int*)(lVar7 + 52);
                                                            lVar7 = (*psVar11).operator->();
                                                            iVar1 = *(int*)(lVar7 + 64);
                                                            lVar7 = (*psVar11).operator->();
                                                            local_98 = *(int*)(lVar7 + 60);
                                                            local_c0 = (ModelUnlit*)*local_70;
                                                            lVar7 = (*psVar11).operator->();
                                                            iVar2 = *(int*)(lVar7 + 52);
                                                            lVar7 = (*psVar11).operator->();
                                                            ModelUnlit::ShareLight(
                                                                *local_80, *local_c0,
                                                                (iVar5 - (local_9c + (int)local_b8)) * 64 +
                                                                    (iVar2 - (int)local_78) * 128 + 64,
                                                                local_48,
                                                                (*(int*)(lVar7 + 60) - (int)local_50) * 128 +
                                                                    (iVar1 - (local_98 + in_stack_00000008)) * 64 + 64,
                                                                (bool)((uint8_t)local_38 & 1));
                                                            modelUnlit = (ModelUnlit*)local_b0;
                                                        }
                                                    }
                                                }
                                                psVar6 = local_a8;
                                                arg1 = arg1 + 1;
                                                lVar7 = (*local_a8).operator->();
                                                uVar10 = (unsigned int)local_c8;
                                            } while ((long)arg1 < (long)*(int*)(lVar7 + 156));
                                        }
                                    }
                                }
                                arg3_00 = uVar10 + 1;
                            } while ((int)uVar10 < local_60);
                        }
                        iVar5 = (int)local_40;
                        local_40 = (unsigned long)(iVar5 + 1);
                    } while (iVar5 != local_44);
                }
                local_40 = (unsigned long)(local_8c - 1);
                local_38 = 0;
            }
            iVar5 = (int)local_88;
            local_88 = (unsigned long)(iVar5 + 1);
        } while (iVar5 <= arg3);
    }

    // 0x10030b540
    void world::ShareLightGd(ModelUnlit& modelUnlit, int arg2, int arg3, int arg4) {
        bool bVar1;
        bool cVar2;
        long lVar3;
        long* plVar4;
        ModelUnlit* modelUnlit2;
        int iVar5;
        int iVar6;
        int arg5;
        CoordGrid local_80;
        CoordGrid local_68;
        int local_58;
        shared_ptr<Square>* local_50;

        int local_54 = arg4 - 2;
        int local_34 = arg3;
        do {
            if ((-1 < arg3) && (arg3 < field_21804)) {
                local_58 = (arg3 - local_34) * 128;
                arg5 = -128;
                iVar6 = local_54;
                do {
                    iVar5 = iVar6 + 1;
                    if (((-1 < iVar5) && (iVar5 < field_21808)) && ((local_34 < arg3 || (arg4 < iVar5)))) {
                        local_50 = (shared_ptr<Square>*)GetSquare(arg2, arg3, iVar5);
                        bVar1 = *local_50 == nullptr;
                        this = this;
                        if (!bVar1) {
                            lVar3 = (*local_50).operator->();
                            bVar1 = (*((lVar3 + 112))) == nullptr;
                            this = this;
                            if (!bVar1) {
                                lVar3 = (*local_50).operator->();
                                lVar3 = (*((lVar3 + 112))).operator->();
                                cVar2 = ((lVar3 + 16))->operator_cast_to_bool();
                                this = this;
                                if (cVar2) {
                                    lVar3 = (*local_50).operator->();
                                    lVar3 = (*((lVar3 + 112))).operator->();
                                    plVar4 = (long*)(*((lVar3 + 16))).operator->();
                                    cVar2 = (**(void (**)(...))(*plVar4 + 32))(plVar4);
                                    this = this;
                                    if (cVar2) {
                                        local_68 = rs2lib::CoordGrid(arg2, arg3, iVar5);
                                        local_80 = rs2lib::CoordGrid(arg2, local_34, arg4);
                                        iVar5 = GetTileAvgYDif(local_68, local_80);
                                        lVar3 = (*local_50).operator->();
                                        (*((lVar3 + 112))).operator->();
                                        static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                            (shared_ptr<ClientNpc>*)&local_68);
                                        modelUnlit2 = (ModelUnlit*)*local_68;
                                        ModelUnlit::ShareLight(modelUnlit, *modelUnlit2, local_58, iVar5, arg5, true);
                                        this = this;
                                    }
                                }
                            }
                        }
                    }
                    iVar6 = iVar6 + 1;
                    arg5 = arg5 + 128;
                } while (iVar6 <= arg4);
            }
            bVar1 = arg3 <= local_34;
            arg3 = arg3 + 1;
        } while (bVar1);
    }

    // 0x10030b730
    int world::GetTileAvgYDif(const rs2lib::CoordGrid& coordGrid1, const rs2lib::CoordGrid& coordGrid2) {
        int iVar1 = GetTileAvgY(coordGrid1);
        int iVar2 = GetTileAvgY(coordGrid2);
        return iVar1 - iVar2;
    }

    // 0x10030b770
    int world::GetTileAvgY(const rs2lib::CoordGrid& coordGrid) {
        int iVar1 = coordGrid.GetX();
        int iVar2 = coordGrid.GetZ();
        int arg3 = coordGrid.GetPos();
        int iVar3 = GetGroundHeight(iVar1, iVar2, arg3);
        int iVar4 = GetGroundHeight(iVar1, iVar2 + 1, arg3);
        int iVar5 = GetGroundHeight(iVar1, iVar2, arg3 + 1);
        iVar5 = iVar5 + iVar4 + iVar3;
        iVar1 = GetGroundHeight(iVar1, iVar2 + 1, arg3 + 1);
        iVar2 = iVar5 + iVar1;
        iVar1 = iVar1 + 3 + iVar5;
        if (-1 < iVar2) {
            iVar1 = iVar2;
        }
        return iVar1 >> 2;
    }

    // 0x10030b830
    void world::Render2DGround(SharedArray<unsigned int>& sharedArray, int arg2, int arg3, int arg4, int arg5, int arg6,
                               int arg7) {
        unsigned int uVar1;
        unsigned int uVar2;
        int iVar4;
        long lVar6;
        int* piVar7;
        array<int, 16ul>* this_00;
        array<int, 16ul>* this_01;
        unsigned int* puVar8;
        int iVar9;
        unsigned int uVar10;
        unsigned long uVar11;
        float fVar12;
        float fVar13;
        long local_50;

        auto psVar5 = GetSquare(arg5, arg6, arg7);
        if (!(*psVar5 == nullptr)) {
            lVar6 = (*psVar5).operator->();
            if ((*((lVar6 + 48))) != nullptr) {
                piVar7 = (int*)(*((lVar6 + 48))).operator->();
                iVar9 = *piVar7;
                if ((iVar9 != 0) && (0 < arg4)) {
                    lVar6 = (long)arg2;
                    iVar4 = 0;
                    do {
                        uVar11 = 0;
                        do {
                            piVar7 = &sharedArray[lVar6 + uVar11];
                            *piVar7 = iVar9;
                            uVar11 = uVar11 + 1;
                        } while ((unsigned int)arg4 != uVar11);
                        lVar6 = lVar6 + arg3;
                        iVar4 = iVar4 + 1;
                    } while (iVar4 != arg4);
                }
            } else {
                lVar6 = (*psVar5).operator->();
                psVar5 = (shared_ptr<configdecoder::ObjType>*)(lVar6 + 64);
                uVar11 = 0;
                if (!(*psVar5 == nullptr)) {
                    lVar6 = (*psVar5).operator->();
                    iVar9 = *(int*)(lVar6 + 340);
                    lVar6 = (*psVar5).operator->();
                    iVar4 = *(int*)(lVar6 + 344);
                    lVar6 = (*psVar5).operator->();
                    uVar1 = *(unsigned int*)(lVar6 + 348);
                    lVar6 = (*psVar5).operator->();
                    uVar2 = *(unsigned int*)(lVar6 + 352);
                    this_00 = (array<int, 16ul>*)(*((array<std::array<int, 16ul>, 13ul>*)(long)iVar9))[uVar11];
                    this_01 = (array<int, 16ul>*)(*((array<std::array<int, 16ul>, 4ul>*)(long)iVar4))[uVar11];
                    fVar13 = 4.0 / (float)arg4;
                    if ((uVar1 & 16777215) == 0) {
                        if (0 < arg4) {
                            local_50 = (long)arg2;
                            iVar9 = 0;
                            do {
                                fVar12 = (float)::floor((float)iVar9 * fVar13);
                                fVar12 = fVar12 * 4.0;
                                uVar11 = 0;
                                do {
                                    piVar7 = (int*)(*this_01)[(long)(int)fVar12];
                                    piVar7 = (int*)(*this_00)[(long)*piVar7];
                                    if (*piVar7 != 0) {
                                        puVar8 = &sharedArray[local_50 + uVar11];
                                        *puVar8 = uVar2;
                                    }
                                    fVar12 = fVar12 + fVar13;
                                    uVar11 = uVar11 + 1;
                                } while ((unsigned int)arg4 != uVar11);
                                local_50 = local_50 + arg3;
                                iVar9 = iVar9 + 1;
                            } while (iVar9 != arg4);
                        }
                    } else if (0 < arg4) {
                        lVar6 = (long)arg2;
                        iVar9 = 0;
                        do {
                            fVar12 = (float)::floor((float)iVar9 * fVar13);
                            fVar12 = fVar12 * 4.0;
                            uVar11 = 0;
                            do {
                                piVar7 = (int*)(*this_01)[(long)(int)fVar12];
                                piVar7 = (int*)(*this_00)[(long)*piVar7];
                                uVar10 = uVar2;
                                if (*piVar7 == 0) {
                                    uVar10 = uVar1;
                                }
                                puVar8 = &sharedArray[lVar6 + uVar11];
                                *puVar8 = uVar10;
                                fVar12 = fVar12 + fVar13;
                                uVar11 = uVar11 + 1;
                            } while ((unsigned int)arg4 != uVar11);
                            lVar6 = lVar6 + arg3;
                            iVar9 = iVar9 + 1;
                        } while (iVar9 != arg4);
                    }
                }
            }
        }
    }

    // 0x10030bc30
    void world::GetTileVisibility(int arg1, int arg2) {
        bool bVar1;
        int iVar3;
        int iVar4;
        int arg4;
        int arg3;
        int iVar5;
        bool arg5;
        int iVar6;

        bool cVar2 = GetTileVisDirtyAt(m_cameraAngleXSlice, m_cameraAngleYSlice, arg1, arg2);
        if (!cVar2) {
            GetTileVisDataAt(m_cameraAngleXSlice, m_cameraAngleYSlice, arg1, arg2);
        } else {
            arg5 = false;
            SetTileVisDirtyAt(m_cameraAngleXSlice, m_cameraAngleYSlice, arg1, arg2, false);
            iVar3 = -1;
            do {
                arg3 = arg1 + 1 + iVar3;
                iVar5 = 0;
                do {
                    arg4 = arg2 + iVar5;
                    cVar2 = GetPointVisibility(m_cameraAngleXSlice, m_cameraAngleYSlice, arg3, arg4);
                    iVar6 = 2;
                    bVar1 = true;
                    if (((cVar2) ||
                         (iVar4 = (int)((unsigned long)((long)(m_cameraAngleYSlice + 1) * -2078209981) >> 32) +
                                  m_cameraAngleYSlice + 1,
                          cVar2 = GetPointVisibility(m_cameraAngleXSlice,
                                                     m_cameraAngleYSlice + ((iVar4 >> 4) - (iVar4 >> 31)) * -31 + 1,
                                                     arg3, arg4),
                          cVar2)) ||
                        (cVar2 = GetPointVisibility(m_cameraAngleXSlice + 1, m_cameraAngleYSlice, arg3, arg4), cVar2))
                        goto LAB_10030bca3;
                    iVar4 = (int)((unsigned long)((long)(m_cameraAngleYSlice + 1) * -2078209981) >> 32) +
                            m_cameraAngleYSlice + 1;
                    cVar2 =
                        GetPointVisibility(m_cameraAngleXSlice + 1,
                                           m_cameraAngleYSlice + ((iVar4 >> 4) - (iVar4 >> 31)) * -31 + 1, arg3, arg4);
                    if (cVar2)
                        goto LAB_10030bca3;
                    iVar5 = iVar5 + 1;
                } while (iVar5 != 3);
                iVar6 = iVar3;
                bVar1 = arg5;
            LAB_10030bca3:
                arg5 = bVar1;
                iVar3 = iVar6 + 1;
            } while (iVar6 < 1);
            SetTileVisDataAt(m_cameraAngleXSlice, m_cameraAngleYSlice, arg1, arg2, arg5);
        }
    }

    // 0x10030be80
    unsigned long world::GetPointVisibility(int arg1, int arg2, int arg3, int arg4) {
        bool bVar1;
        unsigned int uVar3;
        int* piVar4;
        unsigned long uVar5;
        int arg4_00;
        int arg1_00;
        int iVar6;
        int arg3_00;

        if (GetPointVisDirtyAt(arg1, arg2, arg3, arg4) == '\0') {
            uVar5 = GetPointVisDataAt(arg1, arg2, arg3, arg4);
        } else {
            SetPointVisDirtyAt(arg1, arg2, arg3, arg4, false);
            iVar6 = reinterpret_cast<const uint64_t*>(&m_visCalcParams)[3];
            uVar3 = -reinterpret_cast<const uint64_t*>(&m_visCalcParams)[3];
            uVar5 = (unsigned long)uVar3;
            bVar1 = DAT_1016c61bc < (int)uVar3;
            if ((int)uVar3 <= DAT_1016c61bc) {
                arg4_00 = arg1 * 32 + 128;
                arg1_00 = (~m_drawDistanceRange + arg3) * 128;
                arg3_00 = (~m_drawDistanceRange + arg4) * 128;
                piVar4 = &m_visCalcParams[(long)arg1];
                uVar5 = IsPointVisible(arg1_00, *piVar4 - iVar6, arg3_00, arg4_00, arg2 << 6);
                if ((char)uVar5 == '\0') {
                    iVar6 = -iVar6;
                    do {
                        iVar6 = iVar6 + 128;
                        bVar1 = DAT_1016c61bc < iVar6;
                        if (DAT_1016c61bc < iVar6) {
                            if (!bVar1)
                                goto LAB_10030bfe8;
                            goto LAB_10030bfd5;
                        }
                        piVar4 = &m_visCalcParams[(long)arg1];
                        uVar5 = IsPointVisible(arg1_00, *piVar4 + iVar6, arg3_00, arg4_00, arg2 << 6);
                    } while ((char)uVar5 == '\0');
                }
                uVar5 = SetPointVisDataAt(arg1, arg2, arg3, arg4, true);
            }
            if (bVar1) {
            LAB_10030bfd5:
                uVar5 = SetPointVisDataAt(arg1, arg2, arg3, arg4, false);
            }
        }
    LAB_10030bfe8:
        return uVar5 & 18446744073709551361;
    }

    // 0x10030c090
    void world::IsPointVisible(int arg1, int arg2, int arg3, int arg4, int arg5) {
        int iVar2;

        auto array = Pix3D::GetSinTable();
        auto this_00 = Pix3D::GetCosTable();
        int* piVar3 = (int*)(*array)[(long)arg4];
        int iVar7 = *piVar3;
        piVar3 = (int*)(*this_00)[(long)arg4];
        int iVar4 = *piVar3;
        piVar3 = (int*)(*array)[(long)arg5];
        int iVar8 = *piVar3;
        piVar3 = (int*)(*this_00)[(long)arg5];
        int iVar1 = *piVar3;
        int iVar5 = iVar1 * arg3 - iVar8 * arg1 >> 16;
        int iVar6 = iVar5 * iVar4 + iVar7 * arg2;
        if (3276799 < iVar6) {
            iVar6 = iVar6 >> 16;
            iVar2 = m_pix3D->GetRenderDepth();
            if (iVar6 <= iVar2) {
                iVar8 = iVar1 * arg1 + iVar8 * arg3;
                iVar7 = iVar4 * arg2 - iVar5 * iVar7;
                iVar4 =
                    (int)((long)((((uint64_t)(iVar8 >> 31) << 32) | (uint32_t)(iVar8 >> 9)) & 18446744073709551488) /
                          (long)iVar6) +
                    m_xOrig;
                iVar7 =
                    (int)((long)((((uint64_t)(iVar7 >> 31) << 32) | (uint32_t)(iVar7 >> 9)) & 18446744073709551488) /
                          (long)iVar6) +
                    m_yOrig;
                return iVar7 <= m_yClip2 && (m_yClip <= iVar7 && (iVar4 <= m_xClip2 && m_xClip <= iVar4));
            }
        }
        return 0;
    }

    // 0x10030c1f0
    void world::SetMaxGroundPickingLevel(int arg1) {
        m_groundPickingLevel = arg1;
    }

    // 0x10030c200
    int world::ClampPitchAngle(int arg1) {
        int* piVar1 = (int*)PTR_FOLLOW_CAMERA_LOWEST_RELATIVEANGLE_X_100ee6b38;
        auto arg1_00 = std::max<int>(arg1, *PTR_FOLLOW_CAMERA_LOWEST_RELATIVEANGLE_X_100ee6b38);
        piVar1 = std::min<int>(*arg1_00, *piVar1);
        return *piVar1;
    }

    // 0x10030c250
    void world::RequestGroundCoordsForOp(int arg1, int arg2, int arg3, bool arg4) {
        if ((HasValidGroundOpToExecute() == '\0') || (arg4)) {
            m_click = 1;
            m_groundX = 4294967295;
            m_groundZ = 4294967295;
            m_clickLev = arg1;
            m_clickX = arg2;
            m_clickY = arg3;
            m_executeGroundOp = arg4;
        }
    }

    // 0x10030c2c0
    bool world::HasValidGroundOpToExecute() {
        return m_groundX != -1 && m_executeGroundOp != '\0';
    }

    // 0x10030c2e0
    void world::RequestExecuteGroundOp() {
        m_executeGroundOp = 1;
    }

    // 0x10030c2f0
    void world::ResetGroundOp() {
        m_groundX = 4294967295;
        m_executeGroundOp = 0;
    }

    // 0x10030c310
    void world::RenderFollow(NXTWorldRenderer* nxtWorldRenderer, int arg2, int arg3, int arg4, int arg5, int arg6,
                             int arg7, int arg8, int arg9) {
        int* piVar1;
        int iVar3;
        int iVar5;

        unsigned int uVar4 = -arg6 & 2047;
        auto this_00 = Pix3D::GetSinTable();
        auto this_01 = Pix3D::GetCosTable();
        unsigned int uVar2 = -arg5 & 2047;
        if (uVar2 == 0) {
            iVar5 = 0;
        } else {
            piVar1 = (int*)(*this_00)[(unsigned long)uVar2];
            iVar5 = *piVar1;
            piVar1 = (int*)(*this_01)[(unsigned long)uVar2];
            iVar5 = -(iVar5 * arg7) >> 16;
            arg7 = arg7 * *piVar1 >> 16;
        }
        if (uVar4 == 0) {
            iVar3 = 0;
        } else {
            piVar1 = (int*)(*this_00)[(unsigned long)uVar4];
            iVar3 = *piVar1;
            piVar1 = (int*)(*this_01)[(unsigned long)uVar4];
            iVar3 = iVar3 * arg7 >> 16;
            arg7 = arg7 * *piVar1 >> 16;
        }
        Render(nxtWorldRenderer, arg2 - iVar3, arg3 - iVar5, arg4 - arg7, arg5, arg6, arg8, arg9);
    }

    // 0x10030c430
    void world::Render(NXTWorldRenderer* nxtWorldRenderer, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                       int arg8) {
        uint8_t uVar1;
        bool bVar2;
        int iVar4;
        uint64_t extraout_var;
        shared_ptr<Square>* midiPlayerMainThread;
        long lVar5;
        shared_ptr<midi2::MidiPlayerMainThread>* psVar6;
        unsigned long uVar7;
        unsigned int uVar8;
        int iVar9;
        int iVar10;
        unsigned int uVar11;
        unsigned int uVar12;
        unsigned int uVar13;
        CoordGrid coordGrid;
        LocationData local_68;
        unsigned long local_58;
        unsigned long local_50;
        shared_ptr<Square>* local_48;
        int local_3c;
        int local_38;
        uint8_t local_31;

        if (g_usingRSeven == '\0') {
            local_50 = (((uint64_t)local_50._4_4_ << 32) | (uint32_t)arg3);
            m_worldRenderer = nxtWorldRenderer;
            uVar1 = nxtWorldRenderer->GetModelLitRenderer();
            m_modelLitRenderer = (((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
            CalcOcclude();
            m_fillLeft = 0;
            iVar10 = field_110120;
            if (iVar10 < field_21800) {
                do {
                    for (local_3c = m_minX; local_3c < m_maxX; local_3c = local_3c + 1) {
                        iVar9 = m_minZ;
                        if (m_minZ < m_maxZ) {
                            do {
                                while (true) {
                                    midiPlayerMainThread = (shared_ptr<Square>*)GetSquare(iVar10, local_3c, iVar9);
                                    bVar2 = *midiPlayerMainThread != nullptr;
                                    if (bVar2)
                                        break;
                                LAB_10030c5b7:
                                    iVar9 = iVar9 + 1;
                                    if (m_maxZ <= iVar9)
                                        goto LAB_10030c540;
                                }
                                lVar5 = (*midiPlayerMainThread).operator->();
                                if (*(int*)(lVar5 + 348) <= arg7) {
                                    if (GetTileVisibility((local_3c - m_gx) + m_drawDistanceRange,
                                                          (m_drawDistanceRange - m_gz) + iVar9) == '\0') {
                                        iVar4 = GetGroundHeight(iVar10, local_3c, iVar9);
                                        if (iVar4 - (int)local_50 < 2000)
                                            goto LAB_10030c5f8;
                                    }
                                    lVar5 = (*midiPlayerMainThread).operator->();
                                    *(uint8_t*)(lVar5 + 352) = 1;
                                    lVar5 = (*midiPlayerMainThread).operator->();
                                    *(uint8_t*)(lVar5 + 353) = 1;
                                    lVar5 = (*midiPlayerMainThread).operator->();
                                    iVar4 = *(int*)(lVar5 + 156);
                                    lVar5 = (*midiPlayerMainThread).operator->();
                                    *(bool*)(lVar5 + 354) = 0 < iVar4;
                                    m_fillLeft = m_fillLeft + 1;
                                    goto LAB_10030c5b7;
                                }
                            LAB_10030c5f8:
                                lVar5 = (*midiPlayerMainThread).operator->();
                                *(uint8_t*)(lVar5 + 352) = 0;
                                lVar5 = (*midiPlayerMainThread).operator->();
                                *(uint8_t*)(lVar5 + 353) = 0;
                                lVar5 = (*midiPlayerMainThread).operator->();
                                *(uint32_t*)(lVar5 + 356) = 0;
                                iVar9 = iVar9 + 1;
                            } while (iVar9 < m_maxZ);
                        }
                    LAB_10030c540:
                    }
                    iVar10 = iVar10 + 1;
                } while (iVar10 < field_21800);
            }
            local_38 = field_110120;
            if (local_38 < field_21800) {
                do {
                    iVar10 = local_38;
                    if (m_drawDistanceRange < 0) {
                        iVar9 = 14;
                    LAB_10030c905:
                        if (iVar9 != 14)
                            goto LAB_10030c92f;
                    } else {
                        uVar8 = -m_drawDistanceRange;
                        do {
                            local_3c = m_gx + uVar8;
                            uVar13 = uVar8;
                            if ((local_3c < m_minX) && (m_maxX <= (int)(m_gx - uVar8))) {
                            LAB_10030c8c2:
                                iVar9 = 0;
                            } else {
                                uVar12 = (unsigned int)(-1 < m_drawDistanceRange);
                                if (-1 < m_drawDistanceRange) {
                                    uVar12 = 1;
                                    iVar9 = m_drawDistanceRange;
                                    uVar11 = -m_drawDistanceRange;
                                    local_58 = (unsigned long)uVar8;
                                    local_50 = (unsigned long)(m_gx - uVar8);
                                    do {
                                        local_31 = (uint8_t)uVar12;
                                        iVar10 = m_gz + uVar11;
                                        iVar4 = m_gz + iVar9;
                                        if (m_minX <= local_3c) {
                                            if (m_minZ <= iVar10) {
                                                local_48 = (shared_ptr<Square>*)GetSquare(local_38, local_3c, iVar10);
                                                bVar2 = *local_48 != nullptr;
                                                if ((bVar2) &&
                                                    (lVar5 = (*local_48).operator->(), *(char*)(lVar5 + 352) != '\0')) {
                                                    Fill(*local_48, true, arg8);
                                                }
                                            }
                                            if (iVar4 < m_maxZ) {
                                                local_48 = (shared_ptr<Square>*)GetSquare(local_38, local_3c, iVar4);
                                                bVar2 = *local_48 != nullptr;
                                                if ((bVar2) &&
                                                    (lVar5 = (*local_48).operator->(), *(char*)(lVar5 + 352) != '\0')) {
                                                    Fill(*local_48, true, arg8);
                                                }
                                            }
                                        }
                                        if ((int)local_50 < m_maxX) {
                                            if (m_minZ <= iVar10) {
                                                psVar6 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                                    local_38, (int)local_50, iVar10);
                                                bVar2 = *psVar6 != nullptr;
                                                if ((bVar2) &&
                                                    (lVar5 = (*psVar6).operator->(), *(char*)(lVar5 + 352) != '\0')) {
                                                    Fill(*psVar6, true, arg8);
                                                }
                                            }
                                            if (iVar4 < m_maxZ) {
                                                psVar6 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                                    local_38, (int)local_50, iVar4);
                                                bVar2 = *psVar6 != nullptr;
                                                if ((bVar2) &&
                                                    (lVar5 = (*psVar6).operator->(), *(char*)(lVar5 + 352) != '\0')) {
                                                    Fill(*psVar6, true, arg8);
                                                }
                                            }
                                        }
                                        uVar13 = (unsigned int)local_58;
                                        iVar10 = local_38;
                                        if (m_fillLeft == 0) {
                                            m_click = 0;
                                            iVar9 = 1;
                                            if ((local_31 & 1) == 0)
                                                goto LAB_10030c8c2;
                                            goto LAB_10030c8c4;
                                        }
                                        uVar12 = uVar11 >> 31;
                                        bVar2 = iVar9 != 0;
                                        iVar9 = iVar9 - 1;
                                        uVar11 = uVar11 + 1;
                                    } while (bVar2);
                                }
                                iVar9 = 17;
                                if (uVar12 == 0)
                                    goto LAB_10030c8c2;
                            }
                        LAB_10030c8c4:
                            if (iVar9 != 0)
                                goto LAB_10030c905;
                            uVar8 = uVar13 + 1;
                        } while (uVar13 != 0);
                    }
                    local_38 = iVar10 + 1;
                } while (local_38 < field_21800);
            }
            iVar9 = 11;
        LAB_10030c92f:
            if (iVar9 == 11) {
                local_38 = field_110120;
                if (local_38 < field_21800) {
                    do {
                        if (m_drawDistanceRange < 0) {
                            iVar10 = 23;
                        LAB_10030cb85:
                            if (iVar10 != 23)
                                goto LAB_10030cbb5;
                        } else {
                            uVar8 = -m_drawDistanceRange;
                            do {
                                uVar7 = (unsigned long)uVar8;
                                local_3c = m_gx + uVar8;
                                if ((local_3c < m_minX) && (m_maxX <= (int)(m_gx - uVar8))) {
                                LAB_10030cb4f:
                                    iVar9 = (int)uVar7;
                                    iVar10 = 0;
                                } else {
                                    uVar13 = (unsigned int)(-1 < m_drawDistanceRange);
                                    if (-1 < m_drawDistanceRange) {
                                        uVar13 = 1;
                                        iVar10 = m_drawDistanceRange;
                                        uVar12 = -m_drawDistanceRange;
                                        local_58 = uVar7;
                                        local_50 = (unsigned long)(m_gx - uVar8);
                                        do {
                                            local_31 = (uint8_t)uVar13;
                                            iVar9 = m_gz + uVar12;
                                            iVar4 = m_gz + iVar10;
                                            if (m_minX <= local_3c) {
                                                if (m_minZ <= iVar9) {
                                                    local_48 =
                                                        (shared_ptr<Square>*)GetSquare(local_38, local_3c, iVar9);
                                                    bVar2 = *local_48 != nullptr;
                                                    if ((bVar2) && (lVar5 = (*local_48).operator->(),
                                                                    *(char*)(lVar5 + 352) != '\0')) {
                                                        Fill(*local_48, false, arg8);
                                                    }
                                                }
                                                if (iVar4 < m_maxZ) {
                                                    local_48 =
                                                        (shared_ptr<Square>*)GetSquare(local_38, local_3c, iVar4);
                                                    bVar2 = *local_48 != nullptr;
                                                    if ((bVar2) && (lVar5 = (*local_48).operator->(),
                                                                    *(char*)(lVar5 + 352) != '\0')) {
                                                        Fill(*local_48, false, arg8);
                                                    }
                                                }
                                            }
                                            if ((int)local_50 < m_maxX) {
                                                if (m_minZ <= iVar9) {
                                                    psVar6 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                                        local_38, (int)local_50, iVar9);
                                                    bVar2 = *psVar6 != nullptr;
                                                    if ((bVar2) && (lVar5 = (*psVar6).operator->(),
                                                                    *(char*)(lVar5 + 352) != '\0')) {
                                                        Fill(*psVar6, false, arg8);
                                                    }
                                                }
                                                if (iVar4 < m_maxZ) {
                                                    psVar6 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                                        local_38, (int)local_50, iVar4);
                                                    bVar2 = *psVar6 != nullptr;
                                                    if ((bVar2) && (lVar5 = (*psVar6).operator->(),
                                                                    *(char*)(lVar5 + 352) != '\0')) {
                                                        Fill(*psVar6, false, arg8);
                                                    }
                                                }
                                            }
                                            uVar7 = local_58;
                                            if (m_fillLeft == 0) {
                                                m_click = 0;
                                                iVar10 = 1;
                                                iVar9 = (int)local_58;
                                                if ((local_31 & 1) == 0)
                                                    goto LAB_10030cb4f;
                                                goto LAB_10030cb51;
                                            }
                                            uVar13 = uVar12 >> 31;
                                            bVar2 = iVar10 != 0;
                                            iVar10 = iVar10 - 1;
                                            uVar12 = uVar12 + 1;
                                        } while (bVar2);
                                    }
                                    iVar9 = (int)uVar7;
                                    iVar10 = 26;
                                    if (uVar13 == 0)
                                        goto LAB_10030cb4f;
                                }
                            LAB_10030cb51:
                                if (iVar10 != 0)
                                    goto LAB_10030cb85;
                                uVar8 = iVar9 + 1;
                            } while (iVar9 != 0);
                        }
                        local_38 = local_38 + 1;
                    } while (local_38 < field_21800);
                }
                iVar10 = 20;
            LAB_10030cbb5:
                if (iVar10 == 20) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "jagex3/dash3d/World.cpp",
                                    2055, "Render::Fill failure, some squares won\'t be rendered.");
                }
            }
        } else {
            UpdateMousePickingRSeven(arg2, arg3, arg4, arg5, arg6);
            m_modelLitRendererRt7->OnBeginWorldRender(this);
            SubmitAllModelsRt7(arg8);
            SubmitDebugPointLight(arg8);
            m_modelLitRendererRt7->OnEndWorldRender();
            local_68 = rs2lib::worldmap::LocationData(field_110120, arg2 >> 7, arg4 >> 7);
            coordGrid._12_4_ = 0;
            coordGrid.field_0 = local_68.field_0;
            coordGrid.field_4 = local_68.field_4;
            register0x00000030 = local_68.field_8;
            MousePickingHelper::SortPickingEntities(coordGrid);
        }
    }

    // 0x10030cbf0
    void world::PrepRender(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        int iVar1;
        int iVar2;
        uint32_t in_register_0000003c;
        uint32_t in_stack_00000008;

        long lVar5 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        ((lVar5 + 30072))->clear();
        ((lVar5 + 30072))->reserve(10000);
        int iVar6 = 0;
        if ((-1 < arg2) && (iVar1 = *(int*)(lVar5 + 21804) * 128, iVar6 = iVar1 - 1, arg2 < iVar1)) {
            iVar6 = arg2;
        }
        iVar1 = 0;
        if ((-1 < arg4) && (iVar2 = *(int*)(lVar5 + 21808) * 128, iVar1 = iVar2 - 1, arg4 < iVar2)) {
            iVar1 = arg4;
        }
        int iVar3 = ClampPitchAngle(arg5);
        m_cycleNo = m_cycleNo + 1;
        auto array = Pix3D::GetSinTable();
        auto this_00 = Pix3D::GetCosTable();
        uint32_t* puVar4 = (uint32_t*)(*array)[(long)iVar3];
        m_cameraSinX = *puVar4;
        puVar4 = (uint32_t*)(*this_00)[(long)iVar3];
        m_cameraCosX = *puVar4;
        puVar4 = (uint32_t*)(*array)[(long)arg6];
        m_cameraSinY = *puVar4;
        puVar4 = (uint32_t*)(*this_00)[(long)arg6];
        m_cameraCosY = *puVar4;
        iVar2 = iVar3 - 97;
        if (-1 < iVar3 - 128) {
            iVar2 = iVar3 - 128;
        }
        iVar3 = arg6 + 63;
        if (-1 < arg6) {
            iVar3 = arg6;
        }
        SetVisCalcCameraAngle(iVar2 >> 5, iVar3 >> 6);
        m_cx = iVar6;
        m_cy = arg3;
        m_cz = iVar1;
        iVar2 = iVar6 + 127;
        if (-1 < iVar6) {
            iVar2 = iVar6;
        }
        m_gx = iVar2 >> 7;
        iVar6 = iVar1 + 127;
        if (-1 < iVar1) {
            iVar6 = iVar1;
        }
        m_gz = iVar6 >> 7;
        m_maxLevel = in_stack_00000008;
        m_minX = m_gx - m_drawDistanceRange;
        if (m_minX < 0) {
            m_minX = 0;
        }
        m_minZ = m_gz - m_drawDistanceRange;
        if (m_minZ < 0) {
            m_minZ = 0;
        }
        m_maxX = m_drawDistanceRange + m_gx;
        if (*(int*)(lVar5 + 21804) < m_drawDistanceRange + m_gx) {
            m_maxX = *(int*)(lVar5 + 21804);
        }
        m_maxZ = m_gz + m_drawDistanceRange;
        if (*(int*)(lVar5 + 21808) < m_gz + m_drawDistanceRange) {
            m_maxZ = *(int*)(lVar5 + 21808);
        }
    }

    // 0x10030ce20
    void world::SubmitAllModelsRt7(int arg1) {
        uint8_t* puVar1;
        uint8_t* midiPlayerMainThread;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        long long lVar6;
        bool bVar7;
        bool cVar8;
        bool bVar9;
        unsigned int uVar10;
        shared_ptr<midi2::MidiPlayerMainThread>* psVar11;
        Square* this_00;
        long lVar12;
        unsigned int* puVar13;
        ModelSource* modelSource;
        int* piVar14;
        EntityHighlight* entityHighlight;
        shared_ptr<Sprite>* this_01;
        int arg3;
        uint32_t in_register_00000034;
        unsigned long uVar15;
        shared_ptr<Square>* midiPlayerMainThread_00;
        int arg6;
        uint64_t local_98;
        uint16_t local_90;
        shared_ptr<Square>* local_88;
        int local_74;
        unsigned long local_70;
        RSevenModelLitRenderer* local_68;
        Square* local_58;
        unsigned long local_50;
        ModelSource* local_48;
        RSevenModelLitRenderer* local_40;
        RSevenModelLitRenderer* local_38;

        uint64_t local_60 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        fixed_vector<long long, 10000ul>* local_80 = (fixed_vector<long long, 10000ul>*)&field_30072;
        local_80->clear();
        if (0 < field_21800) {
            local_50 = 0;
            do {
                if (0 < field_21804) {
                    local_74 = 0;
                    do {
                        if (0 < field_21808) {
                            arg3 = 0;
                            do {
                                psVar11 =
                                    (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare((int)local_50, local_74, arg3);
                                bVar7 = *psVar11 != nullptr;
                                if (bVar7) {
                                    this_00 = (Square*)**psVar11;
                                    iVar2 = this_00->field_32;
                                    iVar3 = this_00->field_36;
                                    iVar4 = this_00->field_40;
                                    cVar8 = this_00->IsEmpty();
                                    if (!cVar8) {
                                        local_98 =
                                            MousePickingHelper::GetPackedTypeCode(iVar3, iVar4, iVar2, 4, false, 0);
                                        local_80->push_back(local_98);
                                    }
                                    midiPlayerMainThread_00 = (shared_ptr<Square>*)&this_00->field_376;
                                    bVar7 = *midiPlayerMainThread_00 != nullptr;
                                    local_58 = this_00;
                                    if (bVar7) {
                                        lVar12 = (*midiPlayerMainThread_00).operator->();
                                        psVar11 = (shared_ptr<midi2::MidiPlayerMainThread>*)(lVar12 + 80);
                                        bVar7 = *psVar11 != nullptr;
                                        local_88 = midiPlayerMainThread_00;
                                        if (bVar7) {
                                            local_68 = m_modelLitRendererRt7;
                                            lVar12 = (*psVar11).operator->();
                                            local_40 = (RSevenModelLitRenderer*)*(*((lVar12 + 24)));
                                            iVar2 = *(int*)&this_00->field_348;
                                            lVar12 = (*psVar11).operator->();
                                            iVar3 = *(int*)(lVar12 + 4);
                                            puVar13 = (unsigned int*)(*psVar11).operator->();
                                            local_38 = (RSevenModelLitRenderer*)(unsigned long)*puVar13;
                                            lVar12 = (*psVar11).operator->();
                                            iVar4 = *(int*)(lVar12 + 8);
                                            lVar12 = (*psVar11).operator->();
                                            lVar6 = *(long long*)(lVar12 + 56);
                                            lVar12 = (*psVar11).operator->();
                                            this_00 = local_58;
                                            midiPlayerMainThread_00 = local_88;
                                            local_68->SubmitModel(*local_40, iVar2, (int)local_50, 0, iVar3,
                                                                  (int)local_38, iVar4, lVar6, 1, *((lVar12 + 64)),
                                                                  (int)local_60);
                                        }
                                        lVar12 = (*midiPlayerMainThread_00).operator->();
                                        if (0 < *(int*)(lVar12 + 156)) {
                                            uVar15 = 0;
                                            do {
                                                lVar12 = (*midiPlayerMainThread_00).operator->();
                                                psVar11 = (shared_ptr<midi2::MidiPlayerMainThread>*)(*(
                                                    (lVar12 + 160)))[uVar15];
                                                bVar7 = *psVar11 != nullptr;
                                                if (bVar7) {
                                                    local_68 = m_modelLitRendererRt7;
                                                    lVar12 = (*psVar11).operator->();
                                                    local_40 = (RSevenModelLitRenderer*)*(*((lVar12 + 32)));
                                                    local_38 =
                                                        (RSevenModelLitRenderer*)(((uint64_t)local_38._4_4_ << 32) |
                                                                                  (uint32_t)(*(uint32_t*)&this_00
                                                                                                  ->field_348));
                                                    lVar12 = (*psVar11).operator->();
                                                    local_48 = (ModelSource*)(((uint64_t)local_48._4_4_ << 32) |
                                                                              (uint32_t)(*(uint32_t*)(lVar12 + 48)));
                                                    lVar12 = (*psVar11).operator->();
                                                    iVar2 = *(int*)(lVar12 + 8);
                                                    lVar12 = (*psVar11).operator->();
                                                    local_70 = (unsigned long)*(unsigned int*)(lVar12 + 4);
                                                    lVar12 = (*psVar11).operator->();
                                                    iVar3 = *(int*)(lVar12 + 12);
                                                    lVar12 = (*psVar11).operator->();
                                                    lVar6 = *(long long*)(lVar12 + 80);
                                                    lVar12 = (*psVar11).operator->();
                                                    this_00 = local_58;
                                                    midiPlayerMainThread_00 = local_88;
                                                    local_68->SubmitModel(*local_40, (int)local_38, (int)local_50,
                                                                          (int)local_48, iVar2, (int)local_70, iVar3,
                                                                          lVar6, 2, *((lVar12 + 92)), (int)local_60);
                                                }
                                                uVar15 = uVar15 + 1;
                                                lVar12 = (*midiPlayerMainThread_00).operator->();
                                            } while ((long)uVar15 < (long)*(int*)(lVar12 + 156));
                                        }
                                    }
                                    puVar1 = this_00->field_80;
                                    bVar7 = *this_00->field_64 != nullptr;
                                    bVar9 = true;
                                    if (!bVar7) {
                                        bVar9 = *this_00->field_48 != nullptr;
                                    }
                                    local_68 =
                                        (RSevenModelLitRenderer*)(((uint64_t)local_68._1_7_ << 8) | (uint8_t)bVar9);
                                    midiPlayerMainThread = this_00->field_96;
                                    bVar7 = *puVar1 != nullptr;
                                    if (bVar7) {
                                        lVar12 = (*puVar1).operator->();
                                        local_80->push_back(*((lVar12 + 56)));
                                        local_40 = m_modelLitRendererRt7;
                                        lVar12 = (*puVar1).operator->();
                                        local_38 = (RSevenModelLitRenderer*)*(*((lVar12 + 24)));
                                        local_48 = (ModelSource*)(((uint64_t)local_48._4_4_ << 32) |
                                                                  (uint32_t)(*(uint32_t*)&this_00->field_348));
                                        lVar12 = (*puVar1).operator->();
                                        iVar2 = *(int*)(lVar12 + 4);
                                        puVar13 = (unsigned int*)(*puVar1).operator->();
                                        local_70 = (unsigned long)*puVar13;
                                        lVar12 = (*puVar1).operator->();
                                        iVar3 = *(int*)(lVar12 + 8);
                                        lVar12 = (*puVar1).operator->();
                                        lVar6 = *(long long*)(lVar12 + 56);
                                        lVar12 = (*puVar1).operator->();
                                        this_00 = local_58;
                                        local_40->SubmitModel(*local_38, (int)local_48, (int)local_50, 0, iVar2,
                                                              (int)local_70, iVar3, lVar6, 3, *((lVar12 + 64)),
                                                              (int)local_60);
                                        lVar12 = (*puVar1).operator->();
                                        bVar7 = (*((lVar12 + 40))) != nullptr;
                                        if (bVar7) {
                                            local_40 = m_modelLitRendererRt7;
                                            lVar12 = (*puVar1).operator->();
                                            local_38 = (RSevenModelLitRenderer*)*(*((lVar12 + 40)));
                                            local_48 = (ModelSource*)(((uint64_t)local_48._4_4_ << 32) |
                                                                      (uint32_t)(*(uint32_t*)&this_00->field_348));
                                            lVar12 = (*puVar1).operator->();
                                            iVar2 = *(int*)(lVar12 + 4);
                                            puVar13 = (unsigned int*)(*puVar1).operator->();
                                            local_70 = (unsigned long)*puVar13;
                                            lVar12 = (*puVar1).operator->();
                                            iVar3 = *(int*)(lVar12 + 8);
                                            lVar12 = (*puVar1).operator->();
                                            lVar6 = *(long long*)(lVar12 + 56);
                                            lVar12 = (*puVar1).operator->();
                                            this_00 = local_58;
                                            local_40->SubmitModel(*local_38, (int)local_48, (int)local_50, 0, iVar2,
                                                                  (int)local_70, iVar3, lVar6, 4, *((lVar12 + 64)),
                                                                  (int)local_60);
                                        }
                                    }
                                    bVar7 = *midiPlayerMainThread != nullptr;
                                    if (bVar7) {
                                        lVar12 = (*midiPlayerMainThread).operator->();
                                        iVar2 = *(int*)(lVar12 + 4);
                                        puVar13 = (unsigned int*)(*midiPlayerMainThread).operator->();
                                        local_40 = (RSevenModelLitRenderer*)(unsigned long)*puVar13;
                                        lVar12 = (*midiPlayerMainThread).operator->();
                                        iVar3 = *(int*)(lVar12 + 8);
                                        lVar12 = (*midiPlayerMainThread).operator->();
                                        local_80->push_back(*((lVar12 + 64)));
                                        local_38 = m_modelLitRendererRt7;
                                        lVar12 = (*midiPlayerMainThread).operator->();
                                        local_48 = (ModelSource*)*(*((lVar12 + 32)));
                                        local_70 = (((uint64_t)local_70._4_4_ << 32) |
                                                    (uint32_t)(*(uint32_t*)&this_00->field_348));
                                        lVar12 = (*midiPlayerMainThread).operator->();
                                        iVar4 = *(int*)(lVar12 + 20);
                                        local_88 =
                                            (shared_ptr<Square>*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)iVar2);
                                        lVar12 = (*midiPlayerMainThread).operator->();
                                        iVar5 = *(int*)(lVar12 + 24);
                                        lVar12 = (*midiPlayerMainThread).operator->();
                                        lVar6 = *(long long*)(lVar12 + 64);
                                        lVar12 = (*midiPlayerMainThread).operator->();
                                        this_00 = local_58;
                                        arg6 = (int)local_40;
                                        local_38->SubmitModel(*local_48, (int)local_70, (int)local_50, 0, iVar4 + iVar2,
                                                              arg6, iVar5 + iVar3, lVar6, 5, *((lVar12 + 76)),
                                                              (int)local_60);
                                        lVar12 = (*midiPlayerMainThread).operator->();
                                        if (*(int*)(lVar12 + 12) == 256) {
                                            lVar12 = (*midiPlayerMainThread).operator->();
                                            bVar7 = (*((lVar12 + 48))) != nullptr;
                                            if (bVar7) {
                                                local_38 = m_modelLitRendererRt7;
                                                lVar12 = (*midiPlayerMainThread).operator->();
                                                modelSource = (ModelSource*)*(*((lVar12 + 48)));
                                                iVar2 = *(int*)&local_58->field_348;
                                                lVar12 = (*midiPlayerMainThread).operator->();
                                                lVar6 = *(long long*)(lVar12 + 64);
                                                lVar12 = (*midiPlayerMainThread).operator->();
                                                this_00 = local_58;
                                                local_38->SubmitModel(*modelSource, iVar2, (int)local_50, 0,
                                                                      (int)local_88, arg6, iVar3, lVar6, 6,
                                                                      *((lVar12 + 76)), (int)local_60);
                                            }
                                        }
                                    }
                                    puVar1 = this_00->field_112;
                                    bVar7 = *puVar1 != nullptr;
                                    cVar8 = (char)local_68;
                                    if (bVar7) {
                                        lVar12 = (*puVar1).operator->();
                                        local_80->push_back(*((lVar12 + 32)));
                                        if (cVar8) {
                                            local_40 = m_modelLitRendererRt7;
                                            lVar12 = (*puVar1).operator->();
                                            local_38 = (RSevenModelLitRenderer*)*(*((lVar12 + 16)));
                                            iVar2 = *(int*)&this_00->field_348;
                                            lVar12 = (*puVar1).operator->();
                                            iVar3 = *(int*)(lVar12 + 4);
                                            puVar13 = (unsigned int*)(*puVar1).operator->();
                                            local_48 = (ModelSource*)(unsigned long)*puVar13;
                                            lVar12 = (*puVar1).operator->();
                                            iVar4 = *(int*)(lVar12 + 8);
                                            lVar12 = (*puVar1).operator->();
                                            lVar6 = *(long long*)(lVar12 + 32);
                                            lVar12 = (*puVar1).operator->();
                                            this_00 = local_58;
                                            cVar8 = (char)local_68;
                                            local_40->SubmitModel(*local_38, iVar2, (int)local_50, 0, iVar3,
                                                                  (int)local_48, iVar4, lVar6, 7, *((lVar12 + 44)),
                                                                  (int)local_60);
                                        }
                                    }
                                    puVar1 = this_00->field_128;
                                    bVar7 = *puVar1 != nullptr;
                                    if (bVar7) {
                                        lVar12 = (*puVar1).operator->();
                                        local_80->push_back(*((lVar12 + 64)));
                                        if (cVar8) {
                                            lVar12 = (*puVar1).operator->();
                                            bVar7 = (*((lVar12 + 32))) != nullptr;
                                            if (bVar7) {
                                                local_40 = m_modelLitRendererRt7;
                                                lVar12 = (*puVar1).operator->();
                                                local_38 = (RSevenModelLitRenderer*)*(*((lVar12 + 32)));
                                                local_48 = (ModelSource*)(((uint64_t)local_48._4_4_ << 32) |
                                                                          (uint32_t)(*(uint32_t*)&this_00->field_348));
                                                lVar12 = (*puVar1).operator->();
                                                iVar2 = *(int*)(lVar12 + 4);
                                                piVar14 = (int*)(*puVar1).operator->();
                                                iVar3 = *piVar14;
                                                lVar12 = (*puVar1).operator->();
                                                iVar4 = *(int*)(lVar12 + 72);
                                                lVar12 = (*puVar1).operator->();
                                                iVar5 = *(int*)(lVar12 + 8);
                                                lVar12 = (*puVar1).operator->();
                                                lVar6 = *(long long*)(lVar12 + 64);
                                                lVar12 = (*puVar1).operator->();
                                                this_00 = local_58;
                                                cVar8 = (char)local_68;
                                                local_40->SubmitModel(*local_38, (int)local_48, (int)local_50, 0, iVar2,
                                                                      iVar3 - iVar4, iVar5, lVar6, 8, *((lVar12 + 76)),
                                                                      (int)local_60);
                                            }
                                            lVar12 = (*puVar1).operator->();
                                            bVar7 = (*((lVar12 + 48))) != nullptr;
                                            if (bVar7) {
                                                local_40 = m_modelLitRendererRt7;
                                                lVar12 = (*puVar1).operator->();
                                                local_38 = (RSevenModelLitRenderer*)*(*((lVar12 + 48)));
                                                local_48 = (ModelSource*)(((uint64_t)local_48._4_4_ << 32) |
                                                                          (uint32_t)(*(uint32_t*)&this_00->field_348));
                                                lVar12 = (*puVar1).operator->();
                                                iVar2 = *(int*)(lVar12 + 4);
                                                piVar14 = (int*)(*puVar1).operator->();
                                                iVar3 = *piVar14;
                                                lVar12 = (*puVar1).operator->();
                                                iVar4 = *(int*)(lVar12 + 72);
                                                lVar12 = (*puVar1).operator->();
                                                iVar5 = *(int*)(lVar12 + 8);
                                                lVar12 = (*puVar1).operator->();
                                                lVar6 = *(long long*)(lVar12 + 64);
                                                lVar12 = (*puVar1).operator->();
                                                this_00 = local_58;
                                                cVar8 = (char)local_68;
                                                local_40->SubmitModel(*local_38, (int)local_48, (int)local_50, 0, iVar2,
                                                                      iVar3 - iVar4, iVar5, lVar6, 9, *((lVar12 + 76)),
                                                                      (int)local_60);
                                            }
                                            lVar12 = (*puVar1).operator->();
                                            bVar7 = (*((lVar12 + 16))) != nullptr;
                                            if (bVar7) {
                                                local_40 = m_modelLitRendererRt7;
                                                lVar12 = (*puVar1).operator->();
                                                local_38 = (RSevenModelLitRenderer*)*(*((lVar12 + 16)));
                                                local_48 = (ModelSource*)(((uint64_t)local_48._4_4_ << 32) |
                                                                          (uint32_t)(*(uint32_t*)&this_00->field_348));
                                                lVar12 = (*puVar1).operator->();
                                                iVar2 = *(int*)(lVar12 + 4);
                                                piVar14 = (int*)(*puVar1).operator->();
                                                iVar3 = *piVar14;
                                                lVar12 = (*puVar1).operator->();
                                                iVar4 = *(int*)(lVar12 + 72);
                                                lVar12 = (*puVar1).operator->();
                                                iVar5 = *(int*)(lVar12 + 8);
                                                lVar12 = (*puVar1).operator->();
                                                lVar6 = *(long long*)(lVar12 + 64);
                                                lVar12 = (*puVar1).operator->();
                                                this_00 = local_58;
                                                cVar8 = (char)local_68;
                                                local_40->SubmitModel(*local_38, (int)local_48, (int)local_50, 0, iVar2,
                                                                      iVar3 - iVar4, iVar5, lVar6, 10, *((lVar12 + 76)),
                                                                      (int)local_60);
                                            }
                                            goto LAB_10030d7d0;
                                        }
                                    } else {
                                    LAB_10030d7d0:
                                        if (cVar8) {
                                            entityHighlight = this_00->GetTileHighlightData();
                                            if (entityHighlight != nullptr) {
                                                m_modelLitRendererRt7->SubmitTileHighlight(
                                                    this_00->field_36 << 7, this_00->field_40 << 7, this_00->field_32,
                                                    *entityHighlight);
                                            }
                                        }
                                    }
                                    uVar10 = this_00->field_156;
                                    if (0 < (int)uVar10) {
                                        local_68 = (RSevenModelLitRenderer*)&this_00->field_160;
                                        uVar15 = 0;
                                        do {
                                            this_01 = (shared_ptr<Sprite>*)(*local_68)[uVar15];
                                            lVar12 = (*this_01).operator->();
                                            iVar2 = m_cycleNo;
                                            if (*(int*)(lVar12 + 72) != m_cycleNo) {
                                                lVar12 = (*this_01).operator->();
                                                *(int*)(lVar12 + 72) = iVar2;
                                                lVar12 = (*this_01).operator->();
                                                local_80->push_back(*((lVar12 + 80)));
                                                lVar12 = (*this_01).operator->();
                                                local_98 = *(long long*)(lVar12 + 92);
                                                local_90 = *(uint16_t*)(lVar12 + 100);
                                                cVar8 = local_98.isAllocated();
                                                if (!cVar8) {
                                                    lVar12 = (*this_01).operator->();
                                                    local_98._0_6_ = (((uint64_t)(*(uint8_t*)(lVar12 + 24)) << 40) |
                                                                      (uint64_t)((uint64_t)local_98));
                                                    lVar12 = (*this_01).operator->();
                                                    local_98._0_7_ = (((uint64_t)(*(uint8_t*)(lVar12 + 28)) << 48) |
                                                                      (uint64_t)((uint64_t)local_98));
                                                } else {
                                                    local_98._0_7_ =
                                                        (((uint64_t)257 << 40) | (uint64_t)((uint64_t)local_98));
                                                }
                                                local_40 = m_modelLitRendererRt7;
                                                lVar12 = (*this_01).operator->();
                                                local_48 = (ModelSource*)*(*((lVar12 + 32)));
                                                local_38 = (RSevenModelLitRenderer*)(((uint64_t)local_38._4_4_ << 32) |
                                                                                     (uint32_t)this_00->field_32);
                                                local_70 = (((uint64_t)local_70._4_4_ << 32) |
                                                            (uint32_t)(*(uint32_t*)&this_00->field_348));
                                                lVar12 = (*this_01).operator->();
                                                local_88 = (shared_ptr<Square>*)(((uint64_t)local_88._4_4_ << 32) |
                                                                                 (uint32_t)(*(uint32_t*)(lVar12 + 48)));
                                                lVar12 = (*this_01).operator->();
                                                iVar2 = *(int*)(lVar12 + 8);
                                                lVar12 = (*this_01).operator->();
                                                iVar3 = *(int*)(lVar12 + 4);
                                                lVar12 = (*this_01).operator->();
                                                iVar4 = *(int*)(lVar12 + 12);
                                                lVar12 = (*this_01).operator->();
                                                lVar6 = *(long long*)(lVar12 + 80);
                                                lVar12 = (*this_01).operator->();
                                                this_00 = local_58;
                                                local_40->SubmitModel(*local_48, (int)local_70, (int)local_38,
                                                                      (int)local_88, iVar2, iVar3, iVar4, lVar6, 11,
                                                                      *((lVar12 + 92)), (int)local_60);
                                            }
                                            uVar15 = uVar15 + 1;
                                        } while (uVar10 != uVar15);
                                    }
                                }
                                arg3 = arg3 + 1;
                            } while (arg3 < field_21808);
                        }
                        local_74 = local_74 + 1;
                    } while (local_74 < field_21804);
                }
                uVar10 = (int)local_50 + 1;
                local_50 = (unsigned long)uVar10;
            } while ((int)uVar10 < field_21800);
        }
    }

    // 0x10030dac0
    void world::SubmitDebugPointLight(int arg1) {
        int arg3;
        int iVar1;
        PointLightSource* pointLightSource;
        int* piVar2;
        unsigned int* puVar3;
        DemoPointLightSource local_38;

        if (this[1].field_16 != '\0') {
            SubmitDebugPointLight(int) new (&local_38)::DemoPointLightSource();
            pointLightSource = m_modelLitRendererRt7;
            piVar2 = (int*)m_mouseoverGroundFine.SSOBeginPtr();
            arg3 = *piVar2;
            piVar2 = (int*)m_mouseoverGroundFine.y();
            iVar1 = *piVar2;
            puVar3 = (unsigned int*)m_mouseoverGroundFine.second();
            RSevenModelLitRenderer::SubmitLightSource(*pointLightSource, (int)&local_38, arg3, iVar1 - 32,
                                                      (unsigned long)*puVar3, 0);
        }
    }

    // 0x10030db60
    void world::UpdateMousePickingRSeven(int arg1, int arg2, int arg3, int arg4, int arg5) {
        void result;
        ReturnValue result;
        uint32_t* puVar4;
        ReturnValue local_168;
        uint8_t local_128[80];
        uint8_t local_d8[64];
        RSevenModelLitRenderer* local_88;
        unsigned int local_80;
        Vector2T<int>* local_78;
        Vector2T<int>* local_70;
        Vector2T<int>* local_68;
        world* local_48;
        unsigned int local_40;
        Vector3T<int>* local_38;
        unsigned int local_30;

        new (&local_88) rs2lib::worldmap::LocationData(arg1, arg2, arg3);
        new (&local_78) sidebars::SideBarData(arg4, arg5);
        ReturnValue* __return_storage_ptr___00 = &local_168;
        *__return_storage_ptr___00 = local_88->CreateViewMatrix((Vector3T<int>*)(unsigned long)local_80, local_78);
        &result = (ReturnValue*)(local_128 + 64);
        result = MousePickingHelper::GetViewportRect();
        auto piVar3 = result.second();
        double local_50 = (double)*piVar3;
        piVar3 = result.qw();
        local_50 = local_50 / (double)*piVar3;
        int iVar2 = MousePickingHelper::GetViewportFov();
        local_128->CreateProjectionMatrix((double)iVar2, local_50);
        MousePickingHelper* this_00 = (MousePickingHelper*)local_d8;
        *this_00** __return_storage_ptr___00;
        this_00->SetViewProjectionMatrix(__return_storage_ptr___00);
        new (&local_48) jag::math::Vector3T();
        new (&local_38) jag::math::Vector3T();
        iVar2 = MousePickingHelper::GetMouseScreenX();
        int arg2_00 = MousePickingHelper::GetMouseScreenY();
        new (&local_70) sidebars::SideBarData(iVar2, arg2_00);
        MousePickingHelper::CalculateMouseWorldVectorRSeven(local_70, local_48, local_38);
        local_48->SetMouseWorldVector((Vector3T<int>*)(unsigned long)local_40, local_38);
        Vector3T<int> local_60;
        Vector3T<int> local_98;
        if (GetGroundIntersection(*local_48, (Vector3T<int>*)(unsigned long)local_40, local_38,
                                  *((Vector3T<int>*)(unsigned long)local_30), local_60)) {
            puVar4 = (uint32_t*)local_60.SSOBeginPtr();
            m_mouseoverGroundX = *puVar4;
            puVar4 = (uint32_t*)local_60.y();
            m_mouseoverGroundY = *puVar4;
            puVar4 = (uint32_t*)local_60.second();
            m_mouseoverGroundZ = *puVar4;
            m_mouseoverGroundFine = local_98;
        }
        if (m_click != '\0') {
            new (&local_68) sidebars::SideBarData(m_clickX, m_clickY);
            MousePickingHelper::CalculateMouseWorldVectorRSeven(local_68, local_48, local_38);
            if (GetGroundIntersection(*local_48, (Vector3T<int>*)(unsigned long)local_40, local_38,
                                      *((Vector3T<int>*)(unsigned long)local_30), local_60)) {
                puVar4 = (uint32_t*)local_60.SSOBeginPtr();
                m_groundX = *puVar4;
                puVar4 = (uint32_t*)local_60.y();
                m_groundY = *puVar4;
                puVar4 = (uint32_t*)local_60.second();
                m_groundZ = *puVar4;
            }
        }
    }

    // 0x10030ddc0
    void world::CalcOcclude() {
        bool bVar2;
        bool cVar3;
        bool bVar4;
        uint64_t* puVar6;
        int* piVar7;
        int iVar8;
        int iVar9;
        unsigned long arg2;
        int arg1;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;

        unsigned int* puVar5 = &field_1640[(long)m_maxLevel];
        unsigned int uVar1 = *puVar5;
        field_17736 = 0;
        if (0 < (int)uVar1) {
            arg2 = 0;
            do {
                piVar7 = (int*)GetOccluder((long)m_maxLevel, arg2);
                iVar13 = piVar7[4];
                if (iVar13 == 4) {
                    iVar13 = piVar7[9] - m_cy;
                    if (128 < iVar13) {
                        iVar8 = (piVar7[2] - m_gz) + m_drawDistanceRange;
                        if (iVar8 < 0) {
                            iVar8 = 0;
                        }
                        iVar11 = (piVar7[3] - m_gz) + m_drawDistanceRange;
                        iVar9 = m_drawDistanceRange * 2;
                        if (iVar9 < iVar11) {
                            iVar11 = iVar9;
                        }
                        if (iVar8 <= iVar11) {
                            arg1 = (*piVar7 - m_gx) + m_drawDistanceRange;
                            bVar4 = false;
                            if (arg1 < 0) {
                                arg1 = 0;
                            }
                            iVar12 = (piVar7[1] - m_gx) + m_drawDistanceRange;
                            if (iVar9 < iVar12) {
                                iVar12 = iVar9;
                            }
                            if (arg1 <= iVar12) {
                                bVar4 = false;
                                do {
                                    iVar9 = iVar8;
                                    do {
                                        cVar3 = GetTileVisibility(arg1, iVar9);
                                        if (cVar3) {
                                            bVar4 = true;
                                            iVar10 = iVar12 + 1;
                                            break;
                                        }
                                        bVar2 = iVar9 < iVar11;
                                        iVar10 = arg1;
                                        iVar9 = iVar9 + 1;
                                    } while (bVar2);
                                    arg1 = iVar10 + 1;
                                } while (iVar10 < iVar12);
                            }
                            if (bVar4) {
                                piVar7[11] = 5;
                                iVar8 = m_cx;
                                piVar7[12] = ((piVar7[5] - m_cx) * 256) / iVar13;
                                piVar7[13] = ((piVar7[6] - iVar8) * 256) / iVar13;
                                iVar8 = m_cz;
                                piVar7[14] = ((piVar7[7] - m_cz) * 256) / iVar13;
                                piVar7[15] = ((piVar7[8] - iVar8) * 256) / iVar13;
                                goto LAB_10030de59;
                            }
                        }
                    }
                } else if (iVar13 == 2) {
                    iVar13 = (piVar7[2] - m_gz) + m_drawDistanceRange;
                    if ((-1 < iVar13) && (iVar8 = m_drawDistanceRange * 2, iVar13 <= iVar8)) {
                        iVar9 = (*piVar7 - m_gx) + m_drawDistanceRange;
                        if (iVar9 < 0) {
                            iVar9 = 0;
                        }
                        iVar11 = (piVar7[1] - m_gx) + m_drawDistanceRange;
                        if (iVar8 < iVar11) {
                            iVar11 = iVar8;
                        }
                        do {
                            if (iVar11 < iVar9)
                                goto LAB_10030de80;
                            cVar3 = GetTileVisibility(iVar9, iVar13);
                            iVar9 = iVar9 + 1;
                        } while (!cVar3);
                        iVar13 = m_cz - piVar7[7];
                        if (iVar13 < 33) {
                            if (-33 < iVar13)
                                goto LAB_10030de80;
                            piVar7[11] = 4;
                            iVar13 = -iVar13;
                        } else {
                            piVar7[11] = 3;
                        }
                        iVar8 = m_cx;
                        piVar7[12] = ((piVar7[5] - m_cx) * 256) / iVar13;
                        piVar7[13] = ((piVar7[6] - iVar8) * 256) / iVar13;
                        goto LAB_10030de37;
                    }
                } else if (((iVar13 == 1) && (iVar13 = (*piVar7 - m_gx) + m_drawDistanceRange, -1 < iVar13)) &&
                           (iVar8 = m_drawDistanceRange * 2, iVar13 <= iVar8)) {
                    iVar9 = (piVar7[2] - m_gz) + m_drawDistanceRange;
                    if (iVar9 < 0) {
                        iVar9 = 0;
                    }
                    iVar11 = (piVar7[3] - m_gz) + m_drawDistanceRange;
                    if (iVar8 < iVar11) {
                        iVar11 = iVar8;
                    }
                    do {
                        if (iVar11 < iVar9)
                            goto LAB_10030de80;
                        cVar3 = GetTileVisibility(iVar13, iVar9);
                        iVar9 = iVar9 + 1;
                    } while (!cVar3);
                    iVar13 = m_cx - piVar7[5];
                    if (iVar13 < 33) {
                        if (-33 < iVar13)
                            goto LAB_10030de80;
                        piVar7[11] = 2;
                        iVar13 = -iVar13;
                    } else {
                        piVar7[11] = 1;
                    }
                    iVar8 = m_cz;
                    piVar7[14] = ((piVar7[7] - m_cz) * 256) / iVar13;
                    piVar7[15] = ((piVar7[8] - iVar8) * 256) / iVar13;
                LAB_10030de37:
                    iVar8 = m_cy;
                    piVar7[16] = ((piVar7[9] - m_cy) * 256) / iVar13;
                    piVar7[17] = ((piVar7[10] - iVar8) * 256) / iVar13;
                LAB_10030de59:
                    iVar13 = field_17736;
                    field_17736 = iVar13 + 1;
                    puVar6 = &field_17744[(long)iVar13];
                    *puVar6 = piVar7;
                }
            LAB_10030de80:
                arg2 = arg2 + 1;
            } while (arg2 != uVar1);
        }
    }

    // 0x10030e190
    void world::Fill(const shared_ptr<Square>& square, bool arg2, int arg3) {
        uint8_t* puVar1;
        long long lVar2;
        int iVar3;
        uint64_t uVar4;
        Square* pSVar5;
        bool bVar7;
        uint8_t bVar8;
        unsigned short uVar9;
        unsigned short uVar10;
        uint32_t uVar11;
        unsigned int uVar12;
        unsigned int uVar13;
        shared_ptr<midi2::MidiPlayerMainThread>* psVar14;
        long lVar15;
        int* piVar16;
        EntityHighlight* this_01;
        shared_ptr<Sprite>* psVar17;
        unsigned int* puVar18;
        shared_ptr* psVar19;
        shared_ptr<Sprite>* this_02;
        long lVar20;
        long lVar21;
        uint32_t* puVar22;
        int iVar23;
        unsigned long uVar24;
        uint8_t* puVar25;
        int iVar26;
        int iVar27;
        int iVar28;
        ModelSource* pMVar29;
        int iVar30;
        int iVar31;
        ReturnValue local_118;
        int local_104;
        fixed_vector<std::unique_ptr<DeferredHighlight>, 1024ul>* local_100;
        unique_ptr<DeferredHighlight> local_f8;
        ReturnValue local_f0;
        int local_e8;
        int local_e4;
        uint8_t local_d8[24];
        SharedPtrList<Square>* local_c0;
        int local_b4;
        fixed_vector<long long, 10000ul>* local_b0;
        int local_a4;
        unsigned long local_a0;
        int local_94;
        vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true>>* local_90;
        Square* local_88;
        int local_80;
        ModelSource* local_78;
        ModelSource* local_70;
        shared_ptr<Sprite>* local_60;
        uint64_t local_58;
        ModelSource* local_50;
        unsigned long local_48;
        unsigned long local_40;
        uint8_t local_31;

        world* local_e0 = m_worldRenderer;
        SharedPtrList<Square>* this_03 = (SharedPtrList<Square>*)&field_21784;
        this_03->push(square);
        bool cVar6 = this_03->empty();
        if (!cVar6) {
            local_b0 = (fixed_vector<long long, 10000ul>*)&field_30072;
            local_100 = (fixed_vector<std::unique_ptr<DeferredHighlight>, 1024ul>*)&field_21840;
            local_c0 = this_03;
            do {
                local_118 = this_03->takeFrontAndPop();
                local_d8._16_8_ = *local_118;
                if (((Square*)local_d8._16_8_)->field_353 != false) {
                    uVar12 = ((Square*)local_d8._16_8_)->field_32;
                    local_a0 = (unsigned long)uVar12;
                    local_40 = (unsigned long)(unsigned int)((Square*)local_d8._16_8_)->field_36;
                    local_48 = (unsigned long)(unsigned int)((Square*)local_d8._16_8_)->field_40;
                    local_80 = ((Square*)local_d8._16_8_)->field_44;
                    local_88 = (Square*)local_d8._16_8_;
                    if (((Square*)local_d8._16_8_)->field_352 == false) {
                        local_31 = arg2;
                    } else {
                        local_31 = 1;
                        if ((arg2 & 1U) != 0) {
                            if (0 < (int)uVar12) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                    uVar12 - 1, ((Square*)local_d8._16_8_)->field_36,
                                    ((Square*)local_d8._16_8_)->field_40);
                                bVar7 = *psVar14 != nullptr;
                                if ((bVar7) && (lVar15 = (*psVar14).operator->(), *(char*)(lVar15 + 353) != '\0'))
                                    goto LAB_10030e226;
                            }
                            iVar26 = (int)local_40;
                            if ((iVar26 <= m_gx) && (m_minX < iVar26)) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare((int)local_a0, iVar26 - 1,
                                                                                              (int)local_48);
                                bVar7 = *psVar14 != nullptr;
                                iVar26 = (int)local_40;
                                if (bVar7) {
                                    lVar15 = (*psVar14).operator->();
                                    iVar26 = (int)local_40;
                                    if ((*(char*)(lVar15 + 353) != '\0') &&
                                        ((lVar15 = (*psVar14).operator->(),
                                          *(char*)(lVar15 + 352) != '\0' ||
                                              (iVar26 = (int)local_40, (local_88->field_344 & 1) == 0))))
                                        goto LAB_10030e226;
                                }
                            }
                            if ((m_gx <= iVar26) && ((int)local_40 < m_maxX - 1)) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                    (int)local_a0, (int)local_40 + 1, (int)local_48);
                                bVar7 = *psVar14 != nullptr;
                                if (((bVar7) && (lVar15 = (*psVar14).operator->(), *(char*)(lVar15 + 353) != '\0')) &&
                                    ((lVar15 = (*psVar14).operator->(),
                                      *(char*)(lVar15 + 352) != '\0' || ((local_88->field_344 & 4) == 0))))
                                    goto LAB_10030e226;
                            }
                            iVar26 = (int)local_48;
                            if ((iVar26 <= m_gz) && (m_minZ < iVar26)) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                    (int)local_a0, (int)local_40, iVar26 - 1);
                                bVar7 = *psVar14 != nullptr;
                                if ((bVar7) &&
                                    ((lVar15 = (*psVar14).operator->(),
                                      *(char*)(lVar15 + 353) != '\0' &&
                                          ((lVar15 = (*psVar14).operator->(),
                                            *(char*)(lVar15 + 352) != '\0' || ((local_88->field_344 & 8) == 0))))))
                                    goto LAB_10030e226;
                            }
                            iVar26 = (int)local_48;
                            if ((m_gz <= iVar26) && (iVar26 < m_maxZ - 1)) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                    (int)local_a0, (int)local_40, iVar26 + 1);
                                bVar7 = *psVar14 != nullptr;
                                if ((bVar7) && (lVar15 = (*psVar14).operator->(), *(char*)(lVar15 + 353) != '\0')) {
                                    lVar15 = (*psVar14).operator->();
                                    if ((*(char*)(lVar15 + 352) != '\0') ||
                                        (local_31 = arg2, (local_88->field_344 & 2) == 0))
                                        goto LAB_10030e226;
                                    goto LAB_10030e503;
                                }
                            }
                            local_31 = arg2;
                        }
                    LAB_10030e503:
                        local_88->field_352 = false;
                        puVar25 = (uint8_t*)(local_d8._16_8_ + 376);
                        bVar7 = *puVar25 != nullptr;
                        if (bVar7) {
                            lVar15 = (*puVar25).operator->();
                            bVar7 = (*((lVar15 + 48))) != nullptr;
                            if (bVar7) {
                                cVar6 = GroundoOcluded(0, (int)local_40, (int)local_48);
                                if (!cVar6) {
                                    lVar15 = (*puVar25).operator->();
                                    lVar15 = *(*((lVar15 + 48)));
                                    (**(void (**)(...))(local_e0->field_0 + 24))(
                                        local_e0, (int)this, 0, m_cameraSinX, m_cameraCosX, m_cameraSinY, m_cameraCosY,
                                        (int)local_40, (int)local_48, *(int*)(lVar15 + 20), *(int*)(lVar15 + 4),
                                        *(int*)(lVar15 + 8), *(int*)(lVar15 + 12), *(int*)(lVar15 + 16));
                                }
                            } else {
                                lVar15 = (*puVar25).operator->();
                                bVar7 = (*((lVar15 + 64))) != nullptr;
                                if ((bVar7) && (cVar6 = GroundoOcluded(0, (int)local_40, (int)local_48), !cVar6)) {
                                    lVar15 = (*puVar25).operator->();
                                    iVar26 = *(*((lVar15 + 64)));
                                    lVar15 = (*puVar25).operator->();
                                    (**(void (**)(...))(local_e0->field_0 + 32))(
                                        local_e0, (Ground*)this, iVar26, *(int*)(lVar15 + 32), m_cameraSinX,
                                        m_cameraCosX, m_cameraSinY, m_cameraCosY, (int)local_40);
                                }
                            }
                            local_60 = (shared_ptr<Sprite>*)puVar25;
                            lVar15 = (*puVar25).operator->();
                            psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)(lVar15 + 80);
                            bVar7 = *psVar14 != nullptr;
                            if (bVar7) {
                                lVar15 = (*psVar14).operator->();
                                local_50 = (ModelSource*)*(*((lVar15 + 24)));
                                local_78 = (ModelSource*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)m_cameraSinX);
                                local_58 = (ModelSource*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)m_cameraCosX);
                                local_70 = (ModelSource*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)m_cameraSinY);
                                local_90 =
                                    (vector<shared_ptr<Sprite>,
                                            eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul,
                                                                          true>>*)(((uint64_t)local_90._4_4_ << 32) |
                                                                                   (uint32_t)m_cameraCosY);
                                lVar15 = (*psVar14).operator->();
                                iVar30 = *(int*)(lVar15 + 4) - m_cx;
                                piVar16 = (int*)(*psVar14).operator->();
                                iVar26 = *piVar16 - m_cy;
                                lVar15 = (*psVar14).operator->();
                                iVar28 = *(int*)(lVar15 + 8) - m_cz;
                                lVar15 = (*psVar14).operator->();
                                lVar2 = *(long long*)(lVar15 + 56);
                                lVar15 = (*psVar14).operator->();
                                SubmitModelForRender(*local_50, 0, (int)local_78, (unsigned int)local_58, (int)local_70,
                                                     (int)local_90, iVar30, iVar26, iVar28, lVar2, arg3,
                                                     *((lVar15 + 64)));
                            }
                            pMVar29 = nullptr;
                            while (psVar17 = local_60, lVar15 = (*local_60).operator->(), this = this,
                                   (long)pMVar29 < (long)*(int*)(lVar15 + 156)) {
                                local_50 = pMVar29;
                                lVar15 = (*psVar17).operator->();
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)(*(
                                    (lVar15 + 160)))[(unsigned long)local_50];
                                bVar7 = *psVar14 != nullptr;
                                if (bVar7) {
                                    lVar15 = (*psVar14).operator->();
                                    local_78 = (ModelSource*)*(*((lVar15 + 32)));
                                    lVar15 = (*psVar14).operator->();
                                    local_58 = (ModelSource*)(((uint64_t)local_58._4_4_ << 32) |
                                                              (uint32_t)(*(uint32_t*)(lVar15 + 48)));
                                    local_70 =
                                        (ModelSource*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)m_cameraSinX);
                                    local_90 = (vector<shared_ptr<Sprite>,
                                                       eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul,
                                                                                     true>>*)(((uint64_t)local_90._4_4_
                                                                                               << 32) |
                                                                                              (uint32_t)m_cameraCosX);
                                    local_94 = m_cameraSinY;
                                    local_a4 = m_cameraCosY;
                                    lVar15 = (*psVar14).operator->();
                                    iVar28 = *(int*)(lVar15 + 8) - m_cx;
                                    lVar15 = (*psVar14).operator->();
                                    iVar26 = *(int*)(lVar15 + 4) - m_cy;
                                    lVar15 = (*psVar14).operator->();
                                    iVar30 = *(int*)(lVar15 + 12) - m_cz;
                                    lVar15 = (*psVar14).operator->();
                                    lVar2 = *(long long*)(lVar15 + 80);
                                    lVar15 = (*psVar14).operator->();
                                    SubmitModelForRender(*local_78, (unsigned int)local_58, (int)local_70,
                                                         (int)local_90, local_94, local_a4, iVar28, iVar26, iVar30,
                                                         lVar2, arg3, *((lVar15 + 92)));
                                }
                                pMVar29 = (ModelSource*)((long)&local_50->_vptr + 1);
                            }
                        }
                        uVar4 = local_d8._16_8_;
                        puVar25 = (uint8_t*)(local_d8._16_8_ + 48);
                        bVar7 = *puVar25 != nullptr;
                        if (bVar7) {
                            cVar6 = GroundoOcluded(local_80, (int)local_40, (int)local_48);
                            if (!cVar6) {
                                lVar15 = (*puVar25).operator->();
                                local_60 =
                                    (shared_ptr<Sprite>*)(((uint64_t)local_60._4_4_ << 32) |
                                                          (uint32_t)((
                                                              int)(((uint64_t)((int64_t)((unsigned long)lVar15 >> 8))
                                                                    << 8) |
                                                                   (uint8_t)1)));
                                if ((*(int*)(lVar15 + 12) != 12345678) || ((int)local_a0 <= m_groundPickingLevel)) {
                                    lVar15 = **puVar25;
                                    (**(void (**)(...))(local_e0->field_0 + 24))(
                                        local_e0, (int)this, local_80, m_cameraSinX, m_cameraCosX, m_cameraSinY,
                                        m_cameraCosY, (int)local_40, (int)local_48, *(int*)(lVar15 + 20),
                                        *(int*)(lVar15 + 4), *(int*)(lVar15 + 8), *(int*)(lVar15 + 12),
                                        *(int*)(lVar15 + 16));
                                }
                            } else {
                                local_60 = (shared_ptr<Sprite>*)((unsigned long)local_60 & 18446744069414584320);
                            }
                            iVar26 = (int)local_48;
                            local_d8._0_8_ = MousePickingHelper::GetPackedTypeCode((int)local_40, iVar26,
                                                                                   local_88->field_32, 4, false, 0);
                            local_b0->push_back(*local_d8);
                        } else {
                            bVar7 = (*((uVar4 + 64))) != nullptr;
                            pSVar5 = local_88;
                            if (bVar7) {
                                cVar6 = GroundoOcluded(local_80, (int)local_40, (int)local_48);
                                if (!cVar6) {
                                    iVar26 = *(*((uVar4 + 64)));
                                    local_60 =
                                        (shared_ptr<Sprite>*)(((uint64_t)local_60._4_4_ << 32) |
                                                              (uint32_t)((
                                                                  int)(((uint64_t)((
                                                                            int64_t)((unsigned long)local_e0->field_0 >>
                                                                                     8))
                                                                        << 8) |
                                                                       (uint8_t)1)));
                                    (**(void (**)(...))(local_e0->field_0 + 32))(
                                        local_e0, (Ground*)this, iVar26, local_88->field_32, m_cameraSinX, m_cameraCosX,
                                        m_cameraSinY, m_cameraCosY, (int)local_40);
                                } else {
                                    local_60 = (shared_ptr<Sprite>*)((unsigned long)local_60 & 18446744069414584320);
                                }
                                iVar26 = (int)local_48;
                                local_d8._0_8_ = MousePickingHelper::GetPackedTypeCode((int)local_40, iVar26,
                                                                                       local_88->field_32, 4, false, 0);
                                local_b0->push_back(*local_d8);
                            } else {
                                cVar6 = local_88->IsEmpty();
                                iVar26 = (int)local_48;
                                if (!cVar6) {
                                    local_d8._0_8_ = MousePickingHelper::GetPackedTypeCode(
                                        (int)local_40, iVar26, pSVar5->field_32, 4, false, 0);
                                    local_b0->push_back(*local_d8);
                                    local_60 = (shared_ptr<Sprite>*)((unsigned long)local_60 & 18446744069414584320);
                                } else {
                                    local_60 = (shared_ptr<Sprite>*)((unsigned long)local_60 & 18446744069414584320);
                                }
                            }
                        }
                        puVar25 = (uint8_t*)(local_d8._16_8_ + 80);
                        puVar1 = (uint8_t*)(local_d8._16_8_ + 96);
                        bVar7 = *puVar25 != nullptr;
                        if (bVar7) {
                        LAB_10030eb6f:
                            uVar12 = (unsigned int)(m_gx < (int)local_40) * 2;
                            if (m_gx == (int)local_40) {
                                uVar12 = 1;
                            }
                            uVar13 = uVar12 + 6;
                            if (m_gz <= iVar26) {
                                uVar13 = uVar12;
                            }
                            if (m_gz == iVar26) {
                                uVar13 = uVar12 + 3;
                            }
                            uVar24 = (unsigned long)uVar13;
                            local_50 = (ModelSource*)(unsigned long)*(unsigned int*)(&PRETAB + uVar24 * 4);
                            local_88->field_368 = *(int*)(&POSTTAB + uVar24 * 4);
                        } else {
                            local_50 = nullptr;
                            bVar7 = *puVar1 != nullptr;
                            uVar24 = 0;
                            if (bVar7)
                                goto LAB_10030eb6f;
                        }
                        local_78 = (ModelSource*)puVar1;
                        bVar7 = *puVar25 != nullptr;
                        if (bVar7) {
                            lVar15 = (*puVar25).operator->();
                            if ((*(unsigned int*)(lVar15 + 12) & *(unsigned int*)(&MIDTAB + uVar24 * 4)) == 0) {
                                local_88->field_356 = 0;
                            } else {
                                lVar15 = (*puVar25).operator->();
                                if (*(int*)(lVar15 + 12) == 16) {
                                    local_88->field_356 = 3;
                                    iVar26 = *(int*)(&MIDDEP_16 + uVar24 * 4);
                                    local_88->field_360 = iVar26;
                                    iVar28 = 3;
                                } else {
                                    lVar15 = (*puVar25).operator->();
                                    if (*(int*)(lVar15 + 12) == 32) {
                                        local_88->field_356 = 6;
                                        iVar26 = *(int*)(&MIDDEP_32 + uVar24 * 4);
                                        local_88->field_360 = iVar26;
                                        iVar28 = 6;
                                    } else {
                                        lVar15 = (*puVar25).operator->();
                                        if (*(int*)(lVar15 + 12) == 64) {
                                            local_88->field_356 = 12;
                                            iVar26 = *(int*)(&MIDDEP_64 + uVar24 * 4);
                                            local_88->field_360 = iVar26;
                                            iVar28 = 12;
                                        } else {
                                            local_88->field_356 = 9;
                                            iVar26 = *(int*)(&MIDDEP_128 + uVar24 * 4);
                                            local_88->field_360 = iVar26;
                                            iVar28 = 9;
                                        }
                                    }
                                }
                                local_88->field_364 = iVar28 - iVar26;
                            }
                            lVar15 = (*puVar25).operator->();
                            uVar12 = *(unsigned int*)(lVar15 + 12);
                            lVar15 = (*puVar25).operator->();
                            local_58 = (ModelSource*)(((uint64_t)local_58._4_4_ << 32) |
                                                      (uint32_t)(*(unsigned int*)(lVar15 + 16)));
                            if (((unsigned int)local_50 & (uVar12 | *(unsigned int*)(lVar15 + 16))) != 0) {
                                lVar15 = (*puVar25).operator->();
                                local_b0->push_back(*((lVar15 + 56)));
                                iVar26 = local_80;
                                if (((unsigned int)local_50 & uVar12) != 0) {
                                    lVar15 = (*puVar25).operator->();
                                    cVar6 = WallOccluded(iVar26, (int)local_40, (int)local_48, *(int*)(lVar15 + 12));
                                    if (!cVar6) {
                                        lVar15 = (*puVar25).operator->();
                                        local_70 = (ModelSource*)*(*((lVar15 + 24)));
                                        local_90 =
                                            (vector<shared_ptr<Sprite>,
                                                    eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul,
                                                                                  true>>*)(((uint64_t)local_90._4_4_
                                                                                            << 32) |
                                                                                           (uint32_t)m_cameraSinX);
                                        local_94 = m_cameraCosX;
                                        local_a4 = m_cameraSinY;
                                        local_b4 = m_cameraCosY;
                                        lVar15 = (*puVar25).operator->();
                                        iVar30 = *(int*)(lVar15 + 4) - m_cx;
                                        piVar16 = (int*)(*puVar25).operator->();
                                        iVar26 = *piVar16 - m_cy;
                                        lVar15 = (*puVar25).operator->();
                                        iVar28 = *(int*)(lVar15 + 8) - m_cz;
                                        lVar15 = (*puVar25).operator->();
                                        lVar2 = *(long long*)(lVar15 + 56);
                                        lVar15 = (*puVar25).operator->();
                                        SubmitModelForRender(*local_70, 0, (int)local_90, local_94, local_a4, local_b4,
                                                             iVar30, iVar26, iVar28, lVar2, arg3, *((lVar15 + 64)));
                                    }
                                }
                                iVar26 = local_80;
                                if (((unsigned int)local_50 & (unsigned int)local_58) != 0) {
                                    lVar15 = (*puVar25).operator->();
                                    cVar6 = WallOccluded(iVar26, (int)local_40, (int)local_48, *(int*)(lVar15 + 16));
                                    if (!cVar6) {
                                        lVar15 = (*puVar25).operator->();
                                        local_58 = (ModelSource*)*(*((lVar15 + 40)));
                                        local_70 =
                                            (ModelSource*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)m_cameraSinX);
                                        local_90 =
                                            (vector<shared_ptr<Sprite>,
                                                    eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul,
                                                                                  true>>*)(((uint64_t)local_90._4_4_
                                                                                            << 32) |
                                                                                           (uint32_t)m_cameraCosX);
                                        local_94 = m_cameraSinY;
                                        local_a4 = m_cameraCosY;
                                        lVar15 = (*puVar25).operator->();
                                        iVar30 = *(int*)(lVar15 + 4) - m_cx;
                                        piVar16 = (int*)(*puVar25).operator->();
                                        iVar28 = *piVar16 - m_cy;
                                        lVar15 = (*puVar25).operator->();
                                        iVar26 = *(int*)(lVar15 + 8) - m_cz;
                                        lVar15 = (*puVar25).operator->();
                                        lVar2 = *(long long*)(lVar15 + 56);
                                        lVar15 = (*puVar25).operator->();
                                        SubmitModelForRender(*local_58, 0, (int)local_70, (int)local_90, local_94,
                                                             local_a4, iVar30, iVar28, iVar26, lVar2, arg3,
                                                             *((lVar15 + 64)));
                                    }
                                }
                            }
                        }
                        pMVar29 = local_78;
                        bVar7 = *local_78 != nullptr;
                        if (bVar7) {
                            lVar15 = (*pMVar29).operator->();
                            if ((*(unsigned int*)(lVar15 + 12) & (unsigned int)local_50) == 0) {
                                lVar15 = (*pMVar29).operator->();
                                if (*(int*)(lVar15 + 12) == 256) {
                                    lVar15 = (*pMVar29).operator->();
                                    iVar27 = *(int*)(lVar15 + 4) - m_cx;
                                    piVar16 = (int*)(*pMVar29).operator->();
                                    iVar30 = *piVar16 - m_cy;
                                    lVar15 = (*pMVar29).operator->();
                                    iVar28 = *(int*)(lVar15 + 8) - m_cz;
                                    lVar15 = (*pMVar29).operator->();
                                    iVar26 = -iVar27;
                                    if (1 < *(unsigned int*)(lVar15 + 16) - 1) {
                                        iVar26 = iVar27;
                                    }
                                    iVar23 = -iVar28;
                                    if ((*(unsigned int*)(lVar15 + 16) & 4294967294) != 2) {
                                        iVar23 = iVar28;
                                    }
                                    if (iVar23 < iVar26) {
                                        lVar15 = (*pMVar29).operator->();
                                        local_b0->push_back(*((lVar15 + 64)));
                                        iVar26 = local_80;
                                        lVar15 = (*pMVar29).operator->();
                                        lVar15 = (*((lVar15 + 32))).operator->();
                                        cVar6 =
                                            SpriteOccluded(iVar26, (int)local_40, (int)local_48, *(int*)(lVar15 + 8));
                                        if (!cVar6) {
                                            lVar15 = (*pMVar29).operator->();
                                            local_50 = (ModelSource*)*(*((lVar15 + 32)));
                                            iVar3 = m_cameraCosY;
                                            local_58 = (ModelSource*)(((uint64_t)local_58._4_4_ << 32) |
                                                                      (uint32_t)m_cameraSinX);
                                            local_70 = (ModelSource*)(((uint64_t)local_70._4_4_ << 32) |
                                                                      (uint32_t)m_cameraCosX);
                                            local_90 =
                                                (vector<shared_ptr<Sprite>,
                                                        eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul,
                                                                                      true>>*)(((uint64_t)local_90._4_4_
                                                                                                << 32) |
                                                                                               (uint32_t)m_cameraSinY);
                                            lVar15 = (*pMVar29).operator->();
                                            iVar26 = *(int*)(lVar15 + 20);
                                            lVar15 = (*pMVar29).operator->();
                                            iVar23 = *(int*)(lVar15 + 24);
                                            lVar15 = (*pMVar29).operator->();
                                            lVar2 = *(long long*)(lVar15 + 64);
                                            lVar15 = (*pMVar29).operator->();
                                            SubmitModelForRender(*local_50, 0, (unsigned int)local_58, (int)local_70,
                                                                 (int)local_90, iVar3, iVar27 + iVar26, iVar30,
                                                                 iVar28 + iVar23, lVar2, arg3, *((lVar15 + 76)));
                                        }
                                    } else {
                                        lVar15 = (*pMVar29).operator->();
                                        bVar7 = (*((lVar15 + 48))) != nullptr;
                                        if (bVar7) {
                                            lVar15 = (*pMVar29).operator->();
                                            local_b0->push_back(*((lVar15 + 64)));
                                            iVar26 = local_80;
                                            lVar15 = (*pMVar29).operator->();
                                            lVar15 = (*((lVar15 + 32))).operator->();
                                            cVar6 = SpriteOccluded(iVar26, (int)local_40, (int)local_48,
                                                                   *(int*)(lVar15 + 8));
                                            if (!cVar6) {
                                                lVar15 = (*pMVar29).operator->();
                                                local_50 = (ModelSource*)*(*((lVar15 + 48)));
                                                iVar26 = m_cameraCosY;
                                                local_58 = (ModelSource*)(((uint64_t)local_58._4_4_ << 32) |
                                                                          (uint32_t)m_cameraSinX);
                                                local_70 = (ModelSource*)(((uint64_t)local_70._4_4_ << 32) |
                                                                          (uint32_t)m_cameraCosX);
                                                local_90 =
                                                    (vector<shared_ptr<Sprite>,
                                                            eastl::fixed_vector_allocator<
                                                                16ul, 5ul, 8ul, 0ul, true>>*)(((uint64_t)local_90._4_4_
                                                                                               << 32) |
                                                                                              (uint32_t)m_cameraSinY);
                                                lVar15 = (*pMVar29).operator->();
                                                lVar2 = *(long long*)(lVar15 + 64);
                                                lVar15 = (*pMVar29).operator->();
                                                SubmitModelForRender(*local_50, 0, (unsigned int)local_58,
                                                                     (int)local_70, (int)local_90, iVar26, iVar27,
                                                                     iVar30, iVar28, lVar2, arg3, *((lVar15 + 76)));
                                            }
                                        }
                                    }
                                }
                            } else {
                                lVar15 = (*pMVar29).operator->();
                                local_b0->push_back(*((lVar15 + 64)));
                                iVar26 = local_80;
                                lVar15 = (*pMVar29).operator->();
                                lVar15 = (*((lVar15 + 32))).operator->();
                                cVar6 = SpriteOccluded(iVar26, (int)local_40, (int)local_48, *(int*)(lVar15 + 8));
                                if (!cVar6) {
                                    lVar15 = (*pMVar29).operator->();
                                    local_50 = (ModelSource*)*(*((lVar15 + 32)));
                                    local_58 =
                                        (ModelSource*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)m_cameraSinX);
                                    local_70 =
                                        (ModelSource*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)m_cameraCosX);
                                    local_90 = (vector<shared_ptr<Sprite>,
                                                       eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul,
                                                                                     true>>*)(((uint64_t)local_90._4_4_
                                                                                               << 32) |
                                                                                              (uint32_t)m_cameraSinY);
                                    local_94 = m_cameraCosY;
                                    lVar15 = (*pMVar29).operator->();
                                    iVar23 = m_cx;
                                    iVar26 = *(int*)(lVar15 + 4);
                                    lVar15 = (*pMVar29).operator->();
                                    iVar28 = *(int*)(lVar15 + 20);
                                    piVar16 = (int*)(*pMVar29).operator->();
                                    iVar31 = *piVar16 - m_cy;
                                    lVar15 = (*pMVar29).operator->();
                                    iVar3 = m_cz;
                                    iVar30 = *(int*)(lVar15 + 8);
                                    lVar15 = (*pMVar29).operator->();
                                    iVar27 = *(int*)(lVar15 + 24);
                                    lVar15 = (*pMVar29).operator->();
                                    lVar2 = *(long long*)(lVar15 + 64);
                                    lVar15 = (*pMVar29).operator->();
                                    SubmitModelForRender(*local_50, 0, (unsigned int)local_58, (int)local_70,
                                                         (int)local_90, local_94, (iVar26 - iVar23) + iVar28, iVar31,
                                                         (iVar30 - iVar3) + iVar27, lVar2, arg3, *((lVar15 + 76)));
                                }
                            }
                        }
                        puVar25 = (uint8_t*)(local_d8._16_8_ + 112);
                        bVar7 = *puVar25 != nullptr;
                        if (bVar7) {
                            lVar15 = (*puVar25).operator->();
                            local_b0->push_back(*((lVar15 + 32)));
                            if ((char)local_60 != '\0') {
                                lVar15 = (*puVar25).operator->();
                                local_50 = (ModelSource*)*(*((lVar15 + 16)));
                                local_78 = (ModelSource*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)m_cameraSinX);
                                local_58 = (ModelSource*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)m_cameraCosX);
                                local_70 = (ModelSource*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)m_cameraSinY);
                                local_90 =
                                    (vector<shared_ptr<Sprite>,
                                            eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul,
                                                                          true>>*)(((uint64_t)local_90._4_4_ << 32) |
                                                                                   (uint32_t)m_cameraCosY);
                                lVar15 = (*puVar25).operator->();
                                iVar30 = *(int*)(lVar15 + 4) - m_cx;
                                piVar16 = (int*)(*puVar25).operator->();
                                iVar26 = *piVar16 - m_cy;
                                lVar15 = (*puVar25).operator->();
                                iVar28 = *(int*)(lVar15 + 8) - m_cz;
                                lVar15 = (*puVar25).operator->();
                                lVar2 = *(long long*)(lVar15 + 32);
                                lVar15 = (*puVar25).operator->();
                                SubmitModelForRender(*local_50, 0, (int)local_78, (unsigned int)local_58, (int)local_70,
                                                     (int)local_90, iVar30, iVar26, iVar28, lVar2, arg3,
                                                     *((lVar15 + 44)));
                            }
                        }
                        puVar25 = (uint8_t*)(local_d8._16_8_ + 128);
                        bVar7 = *puVar25 != nullptr;
                        if ((bVar7) && (lVar15 = (*puVar25).operator->(), *(int*)(lVar15 + 72) == 0)) {
                            lVar15 = (*puVar25).operator->();
                            local_b0->push_back(*((lVar15 + 64)));
                            if ((char)local_60 != '\0') {
                                lVar15 = (*puVar25).operator->();
                                bVar7 = (*((lVar15 + 32))) != nullptr;
                                if (bVar7) {
                                    lVar15 = (*puVar25).operator->();
                                    local_50 = (ModelSource*)*(*((lVar15 + 32)));
                                    local_78 =
                                        (ModelSource*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)m_cameraSinX);
                                    local_58 =
                                        (ModelSource*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)m_cameraCosX);
                                    local_70 =
                                        (ModelSource*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)m_cameraSinY);
                                    local_90 = (vector<shared_ptr<Sprite>,
                                                       eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul,
                                                                                     true>>*)(((uint64_t)local_90._4_4_
                                                                                               << 32) |
                                                                                              (uint32_t)m_cameraCosY);
                                    lVar15 = (*puVar25).operator->();
                                    iVar30 = *(int*)(lVar15 + 4) - m_cx;
                                    piVar16 = (int*)(*puVar25).operator->();
                                    iVar26 = *piVar16 - m_cy;
                                    lVar15 = (*puVar25).operator->();
                                    iVar28 = *(int*)(lVar15 + 8) - m_cz;
                                    lVar15 = (*puVar25).operator->();
                                    lVar2 = *(long long*)(lVar15 + 64);
                                    lVar15 = (*puVar25).operator->();
                                    SubmitModelForRender(*local_50, 0, (int)local_78, (unsigned int)local_58,
                                                         (int)local_70, (int)local_90, iVar30, iVar26, iVar28, lVar2,
                                                         arg3, *((lVar15 + 76)));
                                }
                                lVar15 = (*puVar25).operator->();
                                bVar7 = (*((lVar15 + 48))) != nullptr;
                                if (bVar7) {
                                    lVar15 = (*puVar25).operator->();
                                    local_50 = (ModelSource*)*(*((lVar15 + 48)));
                                    local_78 =
                                        (ModelSource*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)m_cameraSinX);
                                    local_58 =
                                        (ModelSource*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)m_cameraCosX);
                                    local_70 =
                                        (ModelSource*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)m_cameraSinY);
                                    local_90 = (vector<shared_ptr<Sprite>,
                                                       eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul,
                                                                                     true>>*)(((uint64_t)local_90._4_4_
                                                                                               << 32) |
                                                                                              (uint32_t)m_cameraCosY);
                                    lVar15 = (*puVar25).operator->();
                                    iVar30 = *(int*)(lVar15 + 4) - m_cx;
                                    piVar16 = (int*)(*puVar25).operator->();
                                    iVar26 = *piVar16 - m_cy;
                                    lVar15 = (*puVar25).operator->();
                                    iVar28 = *(int*)(lVar15 + 8) - m_cz;
                                    lVar15 = (*puVar25).operator->();
                                    lVar2 = *(long long*)(lVar15 + 64);
                                    lVar15 = (*puVar25).operator->();
                                    SubmitModelForRender(*local_50, 0, (int)local_78, (unsigned int)local_58,
                                                         (int)local_70, (int)local_90, iVar30, iVar26, iVar28, lVar2,
                                                         arg3, *((lVar15 + 76)));
                                }
                                lVar15 = (*puVar25).operator->();
                                bVar7 = (*((lVar15 + 16))) != nullptr;
                                if (bVar7) {
                                    lVar15 = (*puVar25).operator->();
                                    local_50 = (ModelSource*)*(*((lVar15 + 16)));
                                    local_78 =
                                        (ModelSource*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)m_cameraSinX);
                                    local_58 =
                                        (ModelSource*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)m_cameraCosX);
                                    local_70 =
                                        (ModelSource*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)m_cameraSinY);
                                    local_90 = (vector<shared_ptr<Sprite>,
                                                       eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul,
                                                                                     true>>*)(((uint64_t)local_90._4_4_
                                                                                               << 32) |
                                                                                              (uint32_t)m_cameraCosY);
                                    lVar15 = (*puVar25).operator->();
                                    iVar30 = *(int*)(lVar15 + 4) - m_cx;
                                    piVar16 = (int*)(*puVar25).operator->();
                                    iVar26 = *piVar16 - m_cy;
                                    lVar15 = (*puVar25).operator->();
                                    iVar28 = *(int*)(lVar15 + 8) - m_cz;
                                    lVar15 = (*puVar25).operator->();
                                    lVar2 = *(long long*)(lVar15 + 64);
                                    lVar15 = (*puVar25).operator->();
                                    SubmitModelForRender(*local_50, 0, (int)local_78, (unsigned int)local_58,
                                                         (int)local_70, (int)local_90, iVar30, iVar26, iVar28, lVar2,
                                                         arg3, *((lVar15 + 76)));
                                }
                            }
                        }
                        if (((char)local_60 != '\0') &&
                            (this_01 = local_88->GetTileHighlightData(), this_01 != nullptr)) {
                            cVar6 = this_01->AlwaysOnTop();
                            iVar26 = m_cameraCosY;
                            if (!cVar6) {
                                local_50 = (ModelSource*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)local_80);
                                local_60 =
                                    (shared_ptr<Sprite>*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)m_cameraSinX);
                                local_78 = (ModelSource*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)m_cameraCosX);
                                local_58 = (ModelSource*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)m_cameraSinY);
                                bVar7 = (bool)this_01->ShowInsideEdges();
                                uVar9 = this_01->GetTileOutlineWidth();
                                uVar10 = this_01->GetEntityID();
                                bVar8 = this_01->GetTileTintAlpha();
                                local_e0->RenderGroundOverlayGrid(
                                    *this, (unsigned int)local_50, (int)local_60, (int)local_78, (unsigned int)local_58,
                                    iVar26, (int)local_40, (int)local_48, 1, 1, bVar7, (unsigned int)uVar9,
                                    (unsigned int)uVar10, (unsigned int)bVar8);
                            } else {
                                new (local_d8) GridRect((int)local_40, (int)local_48, 1, 1);
                                local_f0 = std::make_unique<DeferredGroundGridHighlight, int&, GridRect,
                                                            EntityHighlight const&>(local_80, *local_d8, *this_01);
                                std::unique_ptr<DeferredHighlight>::unique_ptr<
                                    DeferredGroundGridHighlight, std::default_delete<DeferredGroundGridHighlight>, void,
                                    void>(&local_f8,
                                          (unique_ptr<DeferredGroundGridHighlight,
                                                      std::default_delete<DeferredGroundGridHighlight> _>*)&local_f0);
                                local_100->push_back(local_f8);
                            }
                        }
                        uVar12 = local_88->field_344;
                        if (uVar12 != 0) {
                            if (((int)local_40 < m_gx) && ((uVar12 & 4) != 0)) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                    (int)local_a0, (int)local_40 + 1, (int)local_48);
                                bVar7 = *psVar14 != nullptr;
                                if ((bVar7) && (lVar15 = (*psVar14).operator->(), *(char*)(lVar15 + 353) != '\0')) {
                                    local_c0->push(*psVar14);
                                }
                            }
                            if (((int)local_48 < m_gz) && ((uVar12 & 2) != 0)) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                    (int)local_a0, (int)local_40, (int)local_48 + 1);
                                bVar7 = *psVar14 != nullptr;
                                if ((bVar7) && (lVar15 = (*psVar14).operator->(), *(char*)(lVar15 + 353) != '\0')) {
                                    local_c0->push(*psVar14);
                                }
                            }
                            if ((m_gx < (int)local_40) && ((uVar12 & 1) != 0)) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                    (int)local_a0, (int)local_40 - 1, (int)local_48);
                                bVar7 = *psVar14 != nullptr;
                                if ((bVar7) && (lVar15 = (*psVar14).operator->(), *(char*)(lVar15 + 353) != '\0')) {
                                    local_c0->push(*psVar14);
                                }
                            }
                            if ((m_gz < (int)local_48) && ((uVar12 & 8) != 0)) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                    (int)local_a0, (int)local_40, (int)local_48 - 1);
                                bVar7 = *psVar14 != nullptr;
                                if ((bVar7) && (lVar15 = (*psVar14).operator->(), *(char*)(lVar15 + 353) != '\0')) {
                                    local_c0->push(*psVar14);
                                }
                            }
                        }
                    }
                    if (local_88->field_356 != 0) {
                        bVar7 = 0 < local_88->field_156;
                        if (0 < local_88->field_156) {
                            puVar25 = (uint8_t*)(local_d8._16_8_ + 160);
                            puVar1 = (uint8_t*)(local_d8._16_8_ + 280);
                            uVar24 = 0;
                            do {
                                psVar17 = (shared_ptr<Sprite>*)(*puVar25)[uVar24];
                                lVar15 = (*psVar17).operator->();
                                if ((*(int*)(lVar15 + 72) != m_cycleNo) &&
                                    (puVar18 = (unsigned int*)(*puVar1)[uVar24],
                                     (local_88->field_356 & *puVar18) == local_88->field_360))
                                    break;
                                uVar24 = uVar24 + 1;
                                bVar7 = (long)uVar24 < (long)local_88->field_156;
                            } while ((long)uVar24 < (long)local_88->field_156);
                        }
                        puVar25 = (uint8_t*)(local_d8._16_8_ + 80);
                        if (!bVar7) {
                            cVar6 = puVar25->operator_cast_to_bool();
                            iVar26 = local_80;
                            if (cVar6) {
                                lVar15 = (*puVar25).operator->();
                                cVar6 = WallOccluded(iVar26, (int)local_40, (int)local_48, *(int*)(lVar15 + 12));
                                if (!cVar6) {
                                    lVar15 = (*puVar25).operator->();
                                    local_50 = (ModelSource*)*(*((lVar15 + 24)));
                                    local_60 = (shared_ptr<Sprite>*)(((uint64_t)local_60._4_4_ << 32) |
                                                                     (uint32_t)m_cameraSinX);
                                    local_78 =
                                        (ModelSource*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)m_cameraCosX);
                                    local_58 =
                                        (ModelSource*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)m_cameraSinY);
                                    local_70 =
                                        (ModelSource*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)m_cameraCosY);
                                    lVar15 = (*puVar25).operator->();
                                    iVar30 = *(int*)(lVar15 + 4) - m_cx;
                                    piVar16 = (int*)(*puVar25).operator->();
                                    iVar26 = *piVar16 - m_cy;
                                    lVar15 = (*puVar25).operator->();
                                    iVar28 = *(int*)(lVar15 + 8) - m_cz;
                                    lVar15 = (*puVar25).operator->();
                                    lVar2 = *(long long*)(lVar15 + 56);
                                    lVar15 = (*puVar25).operator->();
                                    SubmitModelForRender(*local_50, 0, (int)local_60, (int)local_78,
                                                         (unsigned int)local_58, (int)local_70, iVar30, iVar26, iVar28,
                                                         lVar2, arg3, *((lVar15 + 64)));
                                }
                            }
                            local_88->field_356 = 0;
                        }
                        cVar6 = puVar25->operator_cast_to_bool();
                        if (cVar6) {
                            lVar15 = (*puVar25).operator->();
                            local_b0->push_back(*((lVar15 + 56)));
                        }
                    }
                    this = this;
                    if (local_88->field_354 == false) {
                        cVar6 = local_88->field_353;
                    joined_r0x00010030ff5b:
                        if ((cVar6) && (local_88->field_356 == 0)) {
                            iVar26 = (int)local_40;
                            if ((iVar26 <= m_gx) && (m_minX < iVar26)) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare((int)local_a0, iVar26 - 1,
                                                                                              (int)local_48);
                                bVar7 = *psVar14 != nullptr;
                                iVar26 = (int)local_40;
                                if (bVar7) {
                                    lVar15 = (*psVar14).operator->();
                                    iVar26 = (int)local_40;
                                    if (*(char*)(lVar15 + 353) != '\0')
                                        goto LAB_10030e220;
                                }
                            }
                            if ((m_gx <= iVar26) && ((int)local_40 < m_maxX - 1)) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                    (int)local_a0, (int)local_40 + 1, (int)local_48);
                                bVar7 = *psVar14 != nullptr;
                                if ((bVar7) && (lVar15 = (*psVar14).operator->(), *(char*)(lVar15 + 353) != '\0'))
                                    goto LAB_10030e220;
                            }
                            iVar26 = (int)local_48;
                            if ((iVar26 <= m_gz) && (m_minZ < iVar26)) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                    (int)local_a0, (int)local_40, iVar26 - 1);
                                bVar7 = *psVar14 != nullptr;
                                iVar26 = (int)local_48;
                                if (bVar7) {
                                    lVar15 = (*psVar14).operator->();
                                    iVar26 = (int)local_48;
                                    if (*(char*)(lVar15 + 353) != '\0')
                                        goto LAB_10030e220;
                                }
                            }
                            if ((m_gz <= iVar26) && ((int)local_48 < m_maxZ - 1)) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                    (int)local_a0, (int)local_40, (int)local_48 + 1);
                                bVar7 = *psVar14 != nullptr;
                                if ((bVar7) && (lVar15 = (*psVar14).operator->(), *(char*)(lVar15 + 353) != '\0'))
                                    goto LAB_10030e220;
                            }
                            local_88->field_353 = false;
                            m_fillLeft = m_fillLeft - 1;
                            puVar25 = (uint8_t*)(local_d8._16_8_ + 128);
                            bVar7 = *puVar25 != nullptr;
                            if ((bVar7) && (lVar15 = (*puVar25).operator->(), *(int*)(lVar15 + 72) != 0)) {
                                lVar15 = (*puVar25).operator->();
                                local_b0->push_back(*((lVar15 + 64)));
                                lVar15 = (*puVar25).operator->();
                                bVar7 = (*((lVar15 + 32))) != nullptr;
                                if (bVar7) {
                                    lVar15 = (*puVar25).operator->();
                                    local_50 = (ModelSource*)*(*((lVar15 + 32)));
                                    local_60 = (shared_ptr<Sprite>*)(((uint64_t)local_60._4_4_ << 32) |
                                                                     (uint32_t)m_cameraSinX);
                                    local_78 =
                                        (ModelSource*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)m_cameraCosX);
                                    local_58 =
                                        (ModelSource*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)m_cameraSinY);
                                    local_70 =
                                        (ModelSource*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)m_cameraCosY);
                                    lVar15 = (*puVar25).operator->();
                                    iVar27 = *(int*)(lVar15 + 4) - m_cx;
                                    puVar22 = (uint32_t*)(*puVar25).operator->();
                                    iVar28 = m_cy;
                                    local_90 = (vector<shared_ptr<Sprite>,
                                                       eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul,
                                                                                     true>>*)(((uint64_t)local_90._4_4_
                                                                                               << 32) |
                                                                                              (uint32_t)(*puVar22));
                                    lVar15 = (*puVar25).operator->();
                                    iVar26 = *(int*)(lVar15 + 72);
                                    lVar15 = (*puVar25).operator->();
                                    iVar30 = *(int*)(lVar15 + 8) - m_cz;
                                    lVar15 = (*puVar25).operator->();
                                    lVar2 = *(long long*)(lVar15 + 64);
                                    lVar15 = (*puVar25).operator->();
                                    SubmitModelForRender(*local_50, 0, (int)local_60, (int)local_78,
                                                         (unsigned int)local_58, (int)local_70, iVar27,
                                                         (int)local_90 - (iVar28 + iVar26), iVar30, lVar2, arg3,
                                                         *((lVar15 + 76)));
                                }
                                lVar15 = (*puVar25).operator->();
                                bVar7 = (*((lVar15 + 48))) != nullptr;
                                if (bVar7) {
                                    lVar15 = (*puVar25).operator->();
                                    local_50 = (ModelSource*)*(*((lVar15 + 48)));
                                    local_60 = (shared_ptr<Sprite>*)(((uint64_t)local_60._4_4_ << 32) |
                                                                     (uint32_t)m_cameraSinX);
                                    local_78 =
                                        (ModelSource*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)m_cameraCosX);
                                    local_58 =
                                        (ModelSource*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)m_cameraSinY);
                                    local_70 =
                                        (ModelSource*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)m_cameraCosY);
                                    lVar15 = (*puVar25).operator->();
                                    iVar27 = *(int*)(lVar15 + 4) - m_cx;
                                    puVar22 = (uint32_t*)(*puVar25).operator->();
                                    iVar28 = m_cy;
                                    local_90 = (vector<shared_ptr<Sprite>,
                                                       eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul,
                                                                                     true>>*)(((uint64_t)local_90._4_4_
                                                                                               << 32) |
                                                                                              (uint32_t)(*puVar22));
                                    lVar15 = (*puVar25).operator->();
                                    iVar26 = *(int*)(lVar15 + 72);
                                    lVar15 = (*puVar25).operator->();
                                    iVar30 = *(int*)(lVar15 + 8) - m_cz;
                                    lVar15 = (*puVar25).operator->();
                                    lVar2 = *(long long*)(lVar15 + 64);
                                    lVar15 = (*puVar25).operator->();
                                    SubmitModelForRender(*local_50, 0, (int)local_60, (int)local_78,
                                                         (unsigned int)local_58, (int)local_70, iVar27,
                                                         (int)local_90 - (iVar28 + iVar26), iVar30, lVar2, arg3,
                                                         *((lVar15 + 76)));
                                }
                                lVar15 = (*puVar25).operator->();
                                bVar7 = (*((lVar15 + 16))) != nullptr;
                                if (bVar7) {
                                    lVar15 = (*puVar25).operator->();
                                    local_50 = (ModelSource*)*(*((lVar15 + 16)));
                                    local_60 = (shared_ptr<Sprite>*)(((uint64_t)local_60._4_4_ << 32) |
                                                                     (uint32_t)m_cameraSinX);
                                    local_78 =
                                        (ModelSource*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)m_cameraCosX);
                                    local_58 =
                                        (ModelSource*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)m_cameraSinY);
                                    local_70 =
                                        (ModelSource*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)m_cameraCosY);
                                    lVar15 = (*puVar25).operator->();
                                    iVar27 = *(int*)(lVar15 + 4) - m_cx;
                                    puVar22 = (uint32_t*)(*puVar25).operator->();
                                    iVar28 = m_cy;
                                    local_90 = (vector<shared_ptr<Sprite>,
                                                       eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul,
                                                                                     true>>*)(((uint64_t)local_90._4_4_
                                                                                               << 32) |
                                                                                              (uint32_t)(*puVar22));
                                    lVar15 = (*puVar25).operator->();
                                    iVar26 = *(int*)(lVar15 + 72);
                                    lVar15 = (*puVar25).operator->();
                                    iVar30 = *(int*)(lVar15 + 8) - m_cz;
                                    lVar15 = (*puVar25).operator->();
                                    lVar2 = *(long long*)(lVar15 + 64);
                                    lVar15 = (*puVar25).operator->();
                                    SubmitModelForRender(*local_50, 0, (int)local_60, (int)local_78,
                                                         (unsigned int)local_58, (int)local_70, iVar27,
                                                         (int)local_90 - (iVar28 + iVar26), iVar30, lVar2, arg3,
                                                         *((lVar15 + 76)));
                                }
                            }
                            if (local_88->field_368 != 0) {
                                puVar25 = (uint8_t*)(local_d8._16_8_ + 96);
                                bVar7 = *puVar25 != nullptr;
                                if (bVar7) {
                                    lVar15 = (*puVar25).operator->();
                                    if ((*(unsigned int*)(lVar15 + 12) & local_88->field_368) == 0) {
                                        lVar15 = (*puVar25).operator->();
                                        if (*(int*)(lVar15 + 12) == 256) {
                                            lVar15 = (*puVar25).operator->();
                                            iVar27 = *(int*)(lVar15 + 4) - m_cx;
                                            piVar16 = (int*)(*puVar25).operator->();
                                            iVar28 = *piVar16 - m_cy;
                                            lVar15 = (*puVar25).operator->();
                                            iVar30 = *(int*)(lVar15 + 8) - m_cz;
                                            lVar15 = (*puVar25).operator->();
                                            iVar26 = -iVar27;
                                            if (1 < *(unsigned int*)(lVar15 + 16) - 1) {
                                                iVar26 = iVar27;
                                            }
                                            iVar23 = -iVar30;
                                            if ((*(unsigned int*)(lVar15 + 16) & 4294967294) != 2) {
                                                iVar23 = iVar30;
                                            }
                                            if (iVar23 < iVar26) {
                                                lVar15 = (*puVar25).operator->();
                                                bVar7 = (*((lVar15 + 48))) != nullptr;
                                                if (bVar7) {
                                                    lVar15 = (*puVar25).operator->();
                                                    local_b0->push_back(*((lVar15 + 64)));
                                                    iVar26 = local_80;
                                                    lVar15 = (*puVar25).operator->();
                                                    lVar15 = (*((lVar15 + 32))).operator->();
                                                    cVar6 = SpriteOccluded(iVar26, (int)local_40, (int)local_48,
                                                                           *(int*)(lVar15 + 8));
                                                    if (!cVar6) {
                                                        lVar15 = (*puVar25).operator->();
                                                        local_50 = (ModelSource*)*(*((lVar15 + 48)));
                                                        local_60 =
                                                            (shared_ptr<Sprite>*)(((uint64_t)local_60._4_4_ << 32) |
                                                                                  (uint32_t)m_cameraSinX);
                                                        local_78 = (ModelSource*)(((uint64_t)local_78._4_4_ << 32) |
                                                                                  (uint32_t)m_cameraCosX);
                                                        local_58 = (ModelSource*)(((uint64_t)local_58._4_4_ << 32) |
                                                                                  (uint32_t)m_cameraSinY);
                                                        local_70 = (ModelSource*)(((uint64_t)local_70._4_4_ << 32) |
                                                                                  (uint32_t)m_cameraCosY);
                                                        lVar15 = (*puVar25).operator->();
                                                        lVar2 = *(long long*)(lVar15 + 64);
                                                        lVar15 = (*puVar25).operator->();
                                                        SubmitModelForRender(*local_50, 0, (int)local_60, (int)local_78,
                                                                             (unsigned int)local_58, (int)local_70,
                                                                             iVar27, iVar28, iVar30, lVar2, arg3,
                                                                             *((lVar15 + 76)));
                                                    }
                                                }
                                            } else {
                                                lVar15 = (*puVar25).operator->();
                                                local_b0->push_back(*((lVar15 + 64)));
                                                iVar26 = local_80;
                                                lVar15 = (*puVar25).operator->();
                                                lVar15 = (*((lVar15 + 32))).operator->();
                                                cVar6 = SpriteOccluded(iVar26, (int)local_40, (int)local_48,
                                                                       *(int*)(lVar15 + 8));
                                                if (!cVar6) {
                                                    lVar15 = (*puVar25).operator->();
                                                    local_50 = (ModelSource*)*(*((lVar15 + 32)));
                                                    local_60 = (shared_ptr<Sprite>*)(((uint64_t)local_60._4_4_ << 32) |
                                                                                     (uint32_t)m_cameraSinX);
                                                    local_78 = (ModelSource*)(((uint64_t)local_78._4_4_ << 32) |
                                                                              (uint32_t)m_cameraCosX);
                                                    local_58 = (ModelSource*)(((uint64_t)local_58._4_4_ << 32) |
                                                                              (uint32_t)m_cameraSinY);
                                                    local_70 = (ModelSource*)(((uint64_t)local_70._4_4_ << 32) |
                                                                              (uint32_t)m_cameraCosY);
                                                    lVar15 = (*puVar25).operator->();
                                                    iVar26 = *(int*)(lVar15 + 20);
                                                    lVar15 = (*puVar25).operator->();
                                                    iVar23 = *(int*)(lVar15 + 24);
                                                    lVar15 = (*puVar25).operator->();
                                                    lVar2 = *(long long*)(lVar15 + 64);
                                                    lVar15 = (*puVar25).operator->();
                                                    SubmitModelForRender(*local_50, 0, (int)local_60, (int)local_78,
                                                                         (unsigned int)local_58, (int)local_70,
                                                                         iVar27 + iVar26, iVar28, iVar30 + iVar23,
                                                                         lVar2, arg3, *((lVar15 + 76)));
                                                }
                                            }
                                        }
                                    } else {
                                        lVar15 = (*puVar25).operator->();
                                        local_b0->push_back(*((lVar15 + 64)));
                                        iVar26 = local_80;
                                        lVar15 = (*puVar25).operator->();
                                        lVar15 = (*((lVar15 + 32))).operator->();
                                        cVar6 =
                                            SpriteOccluded(iVar26, (int)local_40, (int)local_48, *(int*)(lVar15 + 8));
                                        if (!cVar6) {
                                            lVar15 = (*puVar25).operator->();
                                            local_50 = (ModelSource*)*(*((lVar15 + 32)));
                                            local_60 = (shared_ptr<Sprite>*)(((uint64_t)local_60._4_4_ << 32) |
                                                                             (uint32_t)m_cameraSinX);
                                            local_78 = (ModelSource*)(((uint64_t)local_78._4_4_ << 32) |
                                                                      (uint32_t)m_cameraCosX);
                                            local_58 = (ModelSource*)(((uint64_t)local_58._4_4_ << 32) |
                                                                      (uint32_t)m_cameraSinY);
                                            local_70 = (ModelSource*)(((uint64_t)local_70._4_4_ << 32) |
                                                                      (uint32_t)m_cameraCosY);
                                            lVar15 = (*puVar25).operator->();
                                            iVar23 = m_cx;
                                            iVar26 = *(int*)(lVar15 + 4);
                                            lVar15 = (*puVar25).operator->();
                                            iVar28 = *(int*)(lVar15 + 20);
                                            piVar16 = (int*)(*puVar25).operator->();
                                            iVar31 = *piVar16 - m_cy;
                                            lVar15 = (*puVar25).operator->();
                                            iVar3 = m_cz;
                                            iVar30 = *(int*)(lVar15 + 8);
                                            lVar15 = (*puVar25).operator->();
                                            iVar27 = *(int*)(lVar15 + 24);
                                            lVar15 = (*puVar25).operator->();
                                            lVar2 = *(long long*)(lVar15 + 64);
                                            lVar15 = (*puVar25).operator->();
                                            SubmitModelForRender(
                                                *local_50, 0, (int)local_60, (int)local_78, (unsigned int)local_58,
                                                (int)local_70, (iVar26 - iVar23) + iVar28, iVar31,
                                                (iVar30 - iVar3) + iVar27, lVar2, arg3, *((lVar15 + 76)));
                                        }
                                    }
                                }
                                puVar25 = (uint8_t*)(local_d8._16_8_ + 80);
                                bVar7 = *puVar25 != nullptr;
                                if (bVar7) {
                                    lVar15 = (*puVar25).operator->();
                                    uVar12 = *(unsigned int*)(lVar15 + 12);
                                    uVar13 = local_88->field_368;
                                    lVar15 = (*puVar25).operator->();
                                    if (((uVar13 & uVar12) != 0) ||
                                        ((*(unsigned int*)(lVar15 + 16) & local_88->field_368) != 0)) {
                                        lVar15 = (*puVar25).operator->();
                                        local_b0->push_back(*((lVar15 + 56)));
                                        lVar15 = (*puVar25).operator->();
                                        iVar26 = local_80;
                                        if ((*(unsigned int*)(lVar15 + 16) & local_88->field_368) != 0) {
                                            lVar15 = (*puVar25).operator->();
                                            cVar6 = WallOccluded(iVar26, (int)local_40, (int)local_48,
                                                                 *(int*)(lVar15 + 16));
                                            if (!cVar6) {
                                                lVar15 = (*puVar25).operator->();
                                                local_50 = (ModelSource*)*(*((lVar15 + 40)));
                                                local_60 = (shared_ptr<Sprite>*)(((uint64_t)local_60._4_4_ << 32) |
                                                                                 (uint32_t)m_cameraSinX);
                                                local_78 = (ModelSource*)(((uint64_t)local_78._4_4_ << 32) |
                                                                          (uint32_t)m_cameraCosX);
                                                local_58 = (ModelSource*)(((uint64_t)local_58._4_4_ << 32) |
                                                                          (uint32_t)m_cameraSinY);
                                                local_70 = (ModelSource*)(((uint64_t)local_70._4_4_ << 32) |
                                                                          (uint32_t)m_cameraCosY);
                                                lVar15 = (*puVar25).operator->();
                                                iVar28 = *(int*)(lVar15 + 4) - m_cx;
                                                piVar16 = (int*)(*puVar25).operator->();
                                                iVar30 = *piVar16 - m_cy;
                                                lVar15 = (*puVar25).operator->();
                                                iVar26 = *(int*)(lVar15 + 8) - m_cz;
                                                lVar15 = (*puVar25).operator->();
                                                lVar2 = *(long long*)(lVar15 + 56);
                                                lVar15 = (*puVar25).operator->();
                                                SubmitModelForRender(*local_50, 0, (int)local_60, (int)local_78,
                                                                     (unsigned int)local_58, (int)local_70, iVar28,
                                                                     iVar30, iVar26, lVar2, arg3, *((lVar15 + 64)));
                                            }
                                        }
                                        lVar15 = (*puVar25).operator->();
                                        iVar26 = local_80;
                                        if ((*(unsigned int*)(lVar15 + 12) & local_88->field_368) != 0) {
                                            lVar15 = (*puVar25).operator->();
                                            cVar6 = WallOccluded(iVar26, (int)local_40, (int)local_48,
                                                                 *(int*)(lVar15 + 12));
                                            if (!cVar6) {
                                                lVar15 = (*puVar25).operator->();
                                                local_50 = (ModelSource*)*(*((lVar15 + 24)));
                                                local_60 = (shared_ptr<Sprite>*)(((uint64_t)local_60._4_4_ << 32) |
                                                                                 (uint32_t)m_cameraSinX);
                                                local_88 = (Square*)(((uint64_t)local_88._4_4_ << 32) |
                                                                     (uint32_t)m_cameraCosX);
                                                local_78 = (ModelSource*)(((uint64_t)local_78._4_4_ << 32) |
                                                                          (uint32_t)m_cameraSinY);
                                                local_58 = (ModelSource*)(((uint64_t)local_58._4_4_ << 32) |
                                                                          (uint32_t)m_cameraCosY);
                                                lVar15 = (*puVar25).operator->();
                                                iVar28 = *(int*)(lVar15 + 4) - m_cx;
                                                piVar16 = (int*)(*puVar25).operator->();
                                                iVar30 = *piVar16 - m_cy;
                                                lVar15 = (*puVar25).operator->();
                                                iVar26 = *(int*)(lVar15 + 8) - m_cz;
                                                lVar15 = (*puVar25).operator->();
                                                lVar2 = *(long long*)(lVar15 + 56);
                                                lVar15 = (*puVar25).operator->();
                                                SubmitModelForRender(*local_50, 0, (int)local_60, (int)local_88,
                                                                     (int)local_78, (unsigned int)local_58, iVar28,
                                                                     iVar30, iVar26, lVar2, arg3, *((lVar15 + 64)));
                                            }
                                        }
                                    }
                                }
                            }
                            this = this;
                            if ((int)local_a0 < field_21800 - 1) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                    (int)local_a0 + 1, (int)local_40, (int)local_48);
                                bVar7 = *psVar14 != nullptr;
                                if ((bVar7) && (lVar15 = (*psVar14).operator->(), *(char*)(lVar15 + 353) != '\0')) {
                                    local_c0->push(*psVar14);
                                }
                            }
                            if ((int)local_40 < m_gx) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                    (int)local_a0, (int)local_40 + 1, (int)local_48);
                                bVar7 = *psVar14 != nullptr;
                                if ((bVar7) && (lVar15 = (*psVar14).operator->(), *(char*)(lVar15 + 353) != '\0')) {
                                    local_c0->push(*psVar14);
                                }
                            }
                            if ((int)local_48 < m_gz) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                    (int)local_a0, (int)local_40, (int)local_48 + 1);
                                bVar7 = *psVar14 != nullptr;
                                if ((bVar7) && (lVar15 = (*psVar14).operator->(), *(char*)(lVar15 + 353) != '\0')) {
                                    local_c0->push(*psVar14);
                                }
                            }
                            if (m_gx < (int)local_40) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                    (int)local_a0, (int)local_40 - 1, (int)local_48);
                                bVar7 = *psVar14 != nullptr;
                                if ((bVar7) && (lVar15 = (*psVar14).operator->(), *(char*)(lVar15 + 353) != '\0')) {
                                    local_c0->push(*psVar14);
                                }
                            }
                            if (m_gz < (int)local_48) {
                                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                    (int)local_a0, (int)local_40, (int)local_48 - 1);
                                bVar7 = *psVar14 != nullptr;
                                if ((bVar7) && (lVar15 = (*psVar14).operator->(), *(char*)(lVar15 + 353) != '\0')) {
                                    local_c0->push(*psVar14);
                                    arg2 = (bool)local_31;
                                    goto LAB_10030e226;
                                }
                            }
                        }
                    } else {
                        local_88->field_354 = false;
                        local_70 = (ModelSource*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)local_88->field_156);
                        if (local_88->field_156 < 1) {
                            local_58 = (ModelSource*)((unsigned long)local_58._4_4_ << 32);
                        } else {
                            local_90 =
                                (vector<shared_ptr<Sprite>,
                                        eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true>>*)(local_d8._16_8_ +
                                                                                                    160);
                            local_58 = (ModelSource*)((unsigned long)local_58._4_4_ << 32);
                            iVar26 = 0;
                        LAB_10030fcbd:
                            do {
                                psVar17 = (shared_ptr<Sprite>*)(*local_90)[(long)iVar26];
                                lVar15 = (*psVar17).operator->();
                                iVar28 = 0;
                                local_60 = psVar17;
                                if (*(int*)(lVar15 + 72) != m_cycleNo) {
                                    lVar15 = (*psVar17).operator->();
                                    local_50 = (ModelSource*)(((uint64_t)local_50._4_4_ << 32) |
                                                              (uint32_t)(*(uint32_t*)(lVar15 + 52)));
                                    do {
                                        lVar15 = (*local_60).operator->();
                                        if (*(int*)(lVar15 + 56) < (int)(unsigned int)local_50) {
                                            iVar28 = 14;
                                            break;
                                        }
                                        lVar15 = (*local_60).operator->();
                                        for (iVar30 = *(int*)(lVar15 + 60);
                                             lVar15 = (*local_60).operator->(), iVar30 <= *(int*)(lVar15 + 64);
                                             iVar30 = iVar30 + 1) {
                                            psVar19 =
                                                (shared_ptr*)GetSquare((int)local_a0, (unsigned int)local_50, iVar30);
                                            cVar6 = shared_ptr::operator_cast_to_bool(psVar19);
                                            iVar28 = 19;
                                            if (cVar6) {
                                                lVar15 = (*psVar19).operator->();
                                                if (*(char*)(lVar15 + 352) == '\0') {
                                                    lVar15 = (*psVar19).operator->();
                                                    psVar17 = local_60;
                                                    if (*(int*)(lVar15 + 356) != 0) {
                                                        local_78 = (ModelSource*)(((uint64_t)local_78._4_4_ << 32) |
                                                                                  (uint32_t)iVar26);
                                                        lVar15 = (*local_60).operator->();
                                                        bVar7 = *(int*)(lVar15 + 52) < (int)(unsigned int)local_50;
                                                        lVar15 = (*psVar17).operator->();
                                                        uVar12 = bVar7 + 4;
                                                        if (*(int*)(lVar15 + 56) <= (int)(unsigned int)local_50) {
                                                            uVar12 = (unsigned int)bVar7;
                                                        }
                                                        lVar15 = (*psVar17).operator->();
                                                        if (*(int*)(lVar15 + 60) < iVar30) {
                                                            uVar12 = uVar12 + 8;
                                                        }
                                                        lVar15 = (*psVar17).operator->();
                                                        iVar26 = *(int*)(lVar15 + 64);
                                                        lVar15 = (*psVar19).operator->();
                                                        uVar13 = uVar12 | 2;
                                                        if (iVar26 <= iVar30) {
                                                            uVar13 = uVar12;
                                                        }
                                                        this = this;
                                                        if ((uVar13 & *(unsigned int*)(lVar15 + 356)) ==
                                                            local_88->field_364) {
                                                            local_88->field_354 = true;
                                                            iVar26 = (int)local_78 + 1;
                                                            iVar28 = 10;
                                                            goto LAB_10030fe70;
                                                        }
                                                        iVar26 = (int)local_78;
                                                    }
                                                    iVar28 = 0;
                                                } else {
                                                    local_88->field_354 = true;
                                                    iVar26 = iVar26 + 1;
                                                    iVar28 = 10;
                                                }
                                            }
                                        LAB_10030fe70:
                                            if ((iVar28 != 19) && (iVar28 != 0))
                                                goto LAB_10030fd05;
                                        }
                                        iVar28 = 17;
                                    LAB_10030fd05:
                                        local_50 = (ModelSource*)(((uint64_t)local_50._4_4_ << 32) |
                                                                  (uint32_t)((unsigned int)local_50 + 1));
                                    } while (iVar28 == 17);
                                    if (iVar28 == 14) {
                                        this_02 = (shared_ptr<Sprite>*)(*this)[(long)(int)(unsigned int)local_58];
                                        psVar17 = local_60;
                                        *this_02 = *local_60;
                                        iVar28 = m_gx;
                                        lVar15 = (*psVar17).operator->();
                                        iVar28 = iVar28 - *(int*)(lVar15 + 52);
                                        lVar15 = (*psVar17).operator->();
                                        iVar30 = m_gz;
                                        iVar27 = *(int*)(lVar15 + 56) - m_gx;
                                        if (iVar27 <= iVar28) {
                                            iVar27 = iVar28;
                                        }
                                        lVar15 = (*psVar17).operator->();
                                        iVar30 = iVar30 - *(int*)(lVar15 + 60);
                                        lVar15 = (*psVar17).operator->();
                                        iVar28 = *(int*)(lVar15 + 64) - m_gz;
                                        if (iVar30 < iVar28) {
                                            lVar15 = (*local_60).operator->();
                                        } else {
                                            lVar15 = (*local_60).operator->();
                                            iVar28 = iVar30;
                                        }
                                        local_58 = (ModelSource*)(((uint64_t)local_58._4_4_ << 32) |
                                                                  (uint32_t)((unsigned int)local_58 + 1));
                                        *(int*)(lVar15 + 68) = iVar28 + iVar27;
                                        iVar28 = 0;
                                        this = this;
                                    }
                                }
                                if (iVar28 == 0) {
                                    iVar26 = iVar26 + 1;
                                    if ((int)local_70 <= iVar26)
                                        break;
                                    goto LAB_10030fcbd;
                                }
                            } while (iVar26 < (int)local_70);
                        }
                        if (0 < (int)(unsigned int)local_58) {
                            local_50 = (ModelSource*)((unsigned long)local_58 & 4294967295);
                            do {
                                local_60 =
                                    (shared_ptr<Sprite>*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)4294967295);
                                iVar26 = -50;
                                pMVar29 = nullptr;
                                do {
                                    psVar17 = (shared_ptr<Sprite>*)(*this)[(unsigned long)pMVar29];
                                    lVar15 = (*psVar17).operator->();
                                    if (*(int*)(lVar15 + 72) != m_cycleNo) {
                                        lVar15 = (*psVar17).operator->();
                                        if (iVar26 < *(int*)(lVar15 + 68)) {
                                            lVar15 = (*psVar17).operator->();
                                            local_60 = (shared_ptr<Sprite>*)(((uint64_t)local_60._4_4_ << 32) |
                                                                             (uint32_t)((int)pMVar29));
                                            iVar26 = *(int*)(lVar15 + 68);
                                        } else {
                                            lVar15 = (*psVar17).operator->();
                                            if (*(int*)(lVar15 + 68) == iVar26) {
                                                lVar15 = (*psVar17).operator->();
                                                iVar30 = *(int*)(lVar15 + 8) - m_cx;
                                                lVar15 = (*psVar17).operator->();
                                                local_78 =
                                                    (ModelSource*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)iVar26);
                                                iVar28 = *(int*)(lVar15 + 12) - m_cz;
                                                uVar24 = (unsigned long)(int)local_60;
                                                psVar17 = (shared_ptr<Sprite>*)(*this)[uVar24];
                                                lVar15 = (*psVar17).operator->();
                                                iVar27 = *(int*)(lVar15 + 8) - m_cx;
                                                psVar17 = (shared_ptr<Sprite>*)(*this)[uVar24];
                                                lVar15 = (*psVar17).operator->();
                                                iVar26 = *(int*)(lVar15 + 12) - m_cz;
                                                uVar11 = (int)pMVar29;
                                                if ((unsigned int)(iVar28 * iVar28 + iVar30 * iVar30) <=
                                                    (unsigned int)(iVar26 * iVar26 + iVar27 * iVar27)) {
                                                    uVar11 = (int)local_60;
                                                }
                                                local_60 = (shared_ptr<Sprite>*)(((uint64_t)local_60._4_4_ << 32) |
                                                                                 (uint32_t)uVar11);
                                                this = this;
                                                iVar26 = (int)local_78;
                                            }
                                        }
                                    }
                                    pMVar29 = (ModelSource*)((long)&pMVar29->_vptr + 1);
                                } while (local_50 != pMVar29);
                                if ((int)local_60 != -1) {
                                    psVar17 = (shared_ptr<Sprite>*)(*this)[(long)(int)local_60];
                                    iVar26 = m_cycleNo;
                                    lVar15 = (*psVar17).operator->();
                                    *(int*)(lVar15 + 72) = iVar26;
                                    lVar15 = (*psVar17).operator->();
                                    local_b0->push_back(*((lVar15 + 80)));
                                    lVar15 = (*psVar17).operator->();
                                    cVar6 = ((lVar15 + 92))->HasTileHighlight();
                                    if (cVar6) {
                                        lVar15 = (*psVar17).operator->();
                                        local_d8._0_8_ = *(long long*)(lVar15 + 16);
                                        local_d8._8_8_ = *(uint64_t*)(lVar15 + 24);
                                        lVar15 = (*psVar17).operator->();
                                        cVar6 = ((lVar15 + 92))->isAllocated();
                                        if (cVar6) {
                                            local_d8._8_4_ = 1;
                                            local_d8._12_4_ = 1;
                                        }
                                        lVar15 = (*psVar17).operator->();
                                        cVar6 = ((lVar15 + 92))->AlwaysOnTop();
                                        if (!cVar6) {
                                            lVar15 = (*psVar17).operator->();
                                            cVar6 = ((lVar15 + 92))->SnapToGrid();
                                            local_78 =
                                                (ModelSource*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)local_80);
                                            local_70 = (ModelSource*)(((uint64_t)local_70._4_4_ << 32) |
                                                                      (uint32_t)m_cameraSinX);
                                            local_94 = m_cameraCosX;
                                            local_90 =
                                                (vector<shared_ptr<Sprite>,
                                                        eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul,
                                                                                      true>>*)(((uint64_t)local_90._4_4_
                                                                                                << 32) |
                                                                                               (uint32_t)m_cameraSinY);
                                            local_a4 = m_cameraCosY;
                                            if (!cVar6) {
                                                lVar15 = (*psVar17).operator->();
                                                local_b4 = *(int*)(lVar15 + 8);
                                                lVar15 = (*psVar17).operator->();
                                                local_e8 = *(int*)(lVar15 + 12);
                                                local_e4 = local_d8._8_4_;
                                                local_104 = local_d8._12_4_;
                                                lVar15 = (*psVar17).operator->();
                                                bVar7 = (bool)((lVar15 + 92))->ShowInsideEdges();
                                                lVar15 = (*psVar17).operator->();
                                                uVar12 = ((lVar15 + 92))->GetTileOutlineWidth();
                                                lVar15 = (*psVar17).operator->();
                                                uVar13 = ((lVar15 + 92))->GetEntityID();
                                                lVar15 = (*psVar17).operator->();
                                                bVar8 = ((lVar15 + 92))->GetTileTintAlpha();
                                                local_e0->RenderGroundOverlayFine(
                                                    *this, (int)local_78, (int)local_70, local_94, (int)local_90,
                                                    local_a4, local_b4, local_e8, local_e4, local_104, bVar7,
                                                    uVar12 & 65535, uVar13 & 65535, (unsigned int)bVar8);
                                            } else {
                                                local_b4 = local_d8._0_4_;
                                                local_e8 = local_d8._4_4_;
                                                local_e4 = local_d8._8_4_;
                                                uVar11 = local_d8._12_4_;
                                                lVar15 = (*psVar17).operator->();
                                                bVar7 = (bool)((lVar15 + 92))->ShowInsideEdges();
                                                lVar15 = (*psVar17).operator->();
                                                uVar12 = ((lVar15 + 92))->GetTileOutlineWidth();
                                                lVar15 = (*psVar17).operator->();
                                                uVar13 = ((lVar15 + 92))->GetEntityID();
                                                lVar15 = (*psVar17).operator->();
                                                bVar8 = ((lVar15 + 92))->GetTileTintAlpha();
                                                local_e0->RenderGroundOverlayGrid(
                                                    *this, (int)local_78, (int)local_70, local_94, (int)local_90,
                                                    local_a4, local_b4, local_e8, local_e4, uVar11, bVar7,
                                                    uVar12 & 65535, uVar13 & 65535, (unsigned int)bVar8);
                                            }
                                        } else {
                                            lVar15 = (*psVar17).operator->();
                                            cVar6 = ((lVar15 + 92))->SnapToGrid();
                                            if (!cVar6) {
                                                lVar15 = (*psVar17).operator->();
                                                lVar20 = (*psVar17).operator->();
                                                lVar21 = (*psVar17).operator->();
                                                local_f0 = std::make_unique<DeferredGroundFineHighlight, int&, int&,
                                                                            int&, GridRect&, EntityHighlight&>(
                                                    local_80, *((lVar15 + 8)), *((lVar20 + 12)), *local_d8,
                                                    *((lVar21 + 92)));
                                                std::unique_ptr<DeferredHighlight>::unique_ptr<
                                                    DeferredGroundFineHighlight,
                                                    std::default_delete<DeferredGroundFineHighlight>, void, void>(
                                                    &local_f8,
                                                    (unique_ptr<
                                                        DeferredGroundFineHighlight,
                                                        std::default_delete<DeferredGroundFineHighlight> _>*)&local_f0);
                                                local_100->push_back(local_f8);
                                            } else {
                                                lVar15 = (*psVar17).operator->();
                                                local_f0 = std::make_unique<DeferredGroundGridHighlight, int&,
                                                                            GridRect&, EntityHighlight&>(
                                                    local_80, *local_d8, *((lVar15 + 92)));
                                                std::unique_ptr<DeferredHighlight>::unique_ptr<
                                                    DeferredGroundGridHighlight,
                                                    std::default_delete<DeferredGroundGridHighlight>, void, void>(
                                                    &local_f8,
                                                    (unique_ptr<
                                                        DeferredGroundGridHighlight,
                                                        std::default_delete<DeferredGroundGridHighlight> _>*)&local_f0);
                                                local_100->push_back(local_f8);
                                            }
                                        }
                                    }
                                    iVar27 = local_80;
                                    lVar15 = (*psVar17).operator->();
                                    local_78 = (ModelSource*)(((uint64_t)local_78._4_4_ << 32) |
                                                              (uint32_t)(*(uint32_t*)(lVar15 + 52)));
                                    lVar15 = (*psVar17).operator->();
                                    iVar26 = *(int*)(lVar15 + 56);
                                    lVar15 = (*psVar17).operator->();
                                    iVar28 = *(int*)(lVar15 + 60);
                                    lVar15 = (*psVar17).operator->();
                                    iVar30 = *(int*)(lVar15 + 64);
                                    lVar15 = (*psVar17).operator->();
                                    (*((lVar15 + 32))).operator->();
                                    cVar6 = SpriteOccluded((int)this, iVar27, (int)local_78, iVar26, iVar28, iVar30);
                                    if (!cVar6) {
                                        lVar15 = (*psVar17).operator->();
                                        local_78 = (ModelSource*)*(*((lVar15 + 32)));
                                        lVar15 = (*psVar17).operator->();
                                        local_70 = (ModelSource*)(((uint64_t)local_70._4_4_ << 32) |
                                                                  (uint32_t)(*(uint32_t*)(lVar15 + 48)));
                                        local_90 =
                                            (vector<shared_ptr<Sprite>,
                                                    eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul,
                                                                                  true>>*)(((uint64_t)local_90._4_4_
                                                                                            << 32) |
                                                                                           (uint32_t)m_cameraSinX);
                                        local_94 = m_cameraCosX;
                                        local_a4 = m_cameraSinY;
                                        local_b4 = m_cameraCosY;
                                        lVar15 = (*psVar17).operator->();
                                        iVar30 = *(int*)(lVar15 + 8) - m_cx;
                                        lVar15 = (*psVar17).operator->();
                                        iVar26 = *(int*)(lVar15 + 4) - m_cy;
                                        lVar15 = (*psVar17).operator->();
                                        iVar28 = *(int*)(lVar15 + 12) - m_cz;
                                        lVar15 = (*psVar17).operator->();
                                        lVar2 = *(long long*)(lVar15 + 80);
                                        lVar15 = (*psVar17).operator->();
                                        SubmitModelForRender(*local_78, (int)local_70, (int)local_90, local_94,
                                                             local_a4, local_b4, iVar30, iVar26, iVar28, lVar2, arg3,
                                                             *((lVar15 + 92)));
                                    }
                                    lVar15 = (*psVar17).operator->();
                                    this = this;
                                    for (iVar26 = *(int*)(lVar15 + 52);
                                         lVar15 = (*psVar17).operator->(), iVar26 <= *(int*)(lVar15 + 56);
                                         iVar26 = iVar26 + 1) {
                                        lVar15 = (*psVar17).operator->();
                                        for (iVar28 = *(int*)(lVar15 + 60);
                                             lVar15 = (*psVar17).operator->(), iVar28 <= *(int*)(lVar15 + 64);
                                             iVar28 = iVar28 + 1) {
                                            psVar19 = (shared_ptr*)GetSquare((int)local_a0, iVar26, iVar28);
                                            cVar6 = shared_ptr::operator_cast_to_bool(psVar19);
                                            if (cVar6) {
                                                lVar15 = (*psVar19).operator->();
                                                if (*(int*)(lVar15 + 356) == 0) {
                                                    if (((iVar26 != (int)local_40) || ((int)local_48 != iVar28)) &&
                                                        (lVar15 = (*psVar19).operator->(),
                                                         *(char*)(lVar15 + 353) != '\0')) {
                                                        local_c0->push(*psVar19);
                                                    }
                                                } else {
                                                    local_c0->push(*psVar19);
                                                }
                                            }
                                        }
                                    }
                                }
                            } while (((int)local_60 != -1) && (0 < (int)(unsigned int)local_58));
                        }
                        if (local_88->field_354 == false) {
                            cVar6 = local_88->field_353;
                            goto joined_r0x00010030ff5b;
                        }
                    }
                LAB_10030e220:
                    arg2 = (bool)local_31;
                }
            LAB_10030e226:
                this_03 = local_c0;
                cVar6 = local_c0->empty();
            } while (!cVar6);
        }
    }

    // 0x1003115c0
    void world::RenderAlwaysOnTopHighlights(int arg1) {
        uint64_t* puVar2;

        uint8_t* this_00 = &field_21840;
        auto this_01 = this_00->HeapBeginPtr();
        auto puVar1 = this_00->end();
        for (; this_01 != puVar1; this_01 = this_01 + 8) {
            puVar2 = (uint64_t*)(*this_01).operator->();
            (**(void (**)(...))*puVar2)(puVar2, this, m_worldRenderer, m_modelLitRenderer, m_cameraSinX, m_cameraCosX,
                                        m_cameraSinY, m_cameraCosY, arg1);
        }
        this_00->clear();
    }

    // 0x1003116b0
    void world::RenderAllSlow(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
        unsigned int uVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        shared_ptr<midi2::MidiPlayerMainThread>* psVar7;
        long lVar8;
        shared_ptr<Square>* midiPlayerMainThread;
        int iVar9;
        int iVar10;
        int arg3_00;
        unsigned int uVar12;
        unsigned int uVar13;
        int iVar14;
        bool bVar15;
        int local_50;

        int iVar11 = 0;
        if ((-1 < arg1) && (iVar3 = field_21804 * 128, iVar11 = iVar3 - 1, arg1 < iVar3)) {
            iVar11 = arg1;
        }
        iVar3 = 0;
        if ((-1 < arg3) && (iVar4 = field_21808 * 128, iVar3 = iVar4 - 1, arg3 < iVar4)) {
            iVar3 = arg3;
        }
        m_cycleNo = m_cycleNo + 1;
        auto this_00 = Pix3D::GetSinTable();
        auto this_01 = Pix3D::GetCosTable();
        uint32_t* puVar6 = (uint32_t*)(*this_00)[(long)arg4];
        m_cameraSinX = *puVar6;
        puVar6 = (uint32_t*)(*this_01)[(long)arg4];
        m_cameraCosX = *puVar6;
        puVar6 = (uint32_t*)(*this_00)[(long)arg5];
        m_cameraSinY = *puVar6;
        puVar6 = (uint32_t*)(*this_01)[(long)arg5];
        m_cameraCosY = *puVar6;
        iVar4 = iVar11 + 127;
        if (-1 < iVar11) {
            iVar4 = iVar11;
        }
        m_gx = iVar4 >> 7;
        iVar4 = iVar3 + 127;
        if (-1 < iVar3) {
            iVar4 = iVar3;
        }
        m_gz = iVar4 >> 7;
        m_maxLevel = arg6;
        m_minX = 0;
        m_minZ = 0;
        m_maxX = field_21804;
        m_maxZ = field_21808;
        m_cx = iVar11;
        m_cy = arg2;
        m_cz = iVar3;
        field_17736 = 0;
        m_fillLeft = 0;
        iVar11 = field_110120;
        if (iVar11 < field_21800) {
            do {
                for (iVar3 = m_minX; iVar3 < m_maxX; iVar3 = iVar3 + 1) {
                    for (iVar4 = m_minZ; iVar4 < m_maxZ; iVar4 = iVar4 + 1) {
                        midiPlayerMainThread = (shared_ptr<Square>*)GetSquare(iVar11, iVar3, iVar4);
                        bVar15 = *midiPlayerMainThread != nullptr;
                        if (bVar15) {
                            lVar8 = (*midiPlayerMainThread).operator->();
                            iVar9 = *(int*)(lVar8 + 348);
                            lVar8 = (*midiPlayerMainThread).operator->();
                            if (arg6 < iVar9) {
                                *(uint8_t*)(lVar8 + 352) = 0;
                                lVar8 = (*midiPlayerMainThread).operator->();
                                *(uint8_t*)(lVar8 + 353) = 0;
                                lVar8 = (*midiPlayerMainThread).operator->();
                                *(uint32_t*)(lVar8 + 356) = 0;
                            } else {
                                *(uint8_t*)(lVar8 + 352) = 1;
                                lVar8 = (*midiPlayerMainThread).operator->();
                                *(uint8_t*)(lVar8 + 353) = 1;
                                lVar8 = (*midiPlayerMainThread).operator->();
                                iVar9 = *(int*)(lVar8 + 156);
                                lVar8 = (*midiPlayerMainThread).operator->();
                                *(bool*)(lVar8 + 354) = 0 < iVar9;
                                m_fillLeft = m_fillLeft + 1;
                            }
                        }
                    }
                }
                iVar11 = iVar11 + 1;
            } while (iVar11 < field_21800);
        }
        iVar11 = field_21804;
        if (field_21804 < field_21808) {
            iVar11 = field_21808;
        }
        iVar3 = field_110120;
        unsigned int uVar5 = -iVar11;
        bVar15 = -1 < iVar11;
        if (iVar3 < field_21800) {
            do {
                uVar1 = uVar5;
                if (iVar11 < 0) {
                    iVar4 = 14;
                LAB_100311ac5:
                    if (iVar4 != 14)
                        goto LAB_100311aef;
                } else {
                    do {
                        iVar4 = m_gx + uVar1;
                        iVar9 = m_gx - uVar1;
                        if ((iVar4 < m_minX) && (m_maxX <= iVar9)) {
                        LAB_100311a7b:
                            iVar4 = 0;
                        } else {
                            uVar13 = (unsigned int)bVar15;
                            iVar10 = iVar11;
                            uVar12 = uVar5;
                            if (iVar11 < 0) {
                                uVar13 = (unsigned int)bVar15;
                            } else {
                                do {
                                    iVar14 = uVar12 + m_gz;
                                    arg3_00 = m_gz + iVar10;
                                    if (m_minX <= iVar4) {
                                        if (m_minZ <= iVar14) {
                                            psVar7 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(iVar3, iVar4,
                                                                                                         iVar14);
                                            bVar2 = *psVar7 != nullptr;
                                            if ((bVar2) &&
                                                (lVar8 = (*psVar7).operator->(), *(char*)(lVar8 + 352) != '\0')) {
                                                Fill(*psVar7, true, arg7);
                                            }
                                        }
                                        if (arg3_00 < m_maxZ) {
                                            psVar7 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(iVar3, iVar4,
                                                                                                         arg3_00);
                                            bVar2 = *psVar7 != nullptr;
                                            if ((bVar2) &&
                                                (lVar8 = (*psVar7).operator->(), *(char*)(lVar8 + 352) != '\0')) {
                                                Fill(*psVar7, true, arg7);
                                            }
                                        }
                                    }
                                    if (iVar9 < m_maxX) {
                                        if (m_minZ <= iVar14) {
                                            psVar7 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(iVar3, iVar9,
                                                                                                         iVar14);
                                            bVar2 = *psVar7 != nullptr;
                                            if ((bVar2) &&
                                                (lVar8 = (*psVar7).operator->(), *(char*)(lVar8 + 352) != '\0')) {
                                                Fill(*psVar7, true, arg7);
                                            }
                                        }
                                        if (arg3_00 < m_maxZ) {
                                            psVar7 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(iVar3, iVar9,
                                                                                                         arg3_00);
                                            bVar2 = *psVar7 != nullptr;
                                            if ((bVar2) &&
                                                (lVar8 = (*psVar7).operator->(), *(char*)(lVar8 + 352) != '\0')) {
                                                Fill(*psVar7, true, arg7);
                                            }
                                        }
                                    }
                                    if (m_fillLeft == 0) {
                                        m_click = 0;
                                        iVar4 = 1;
                                        if (uVar13 != 0)
                                            goto LAB_100311a7d;
                                        goto LAB_100311a7b;
                                    }
                                    uVar13 = uVar12 >> 31;
                                    bVar2 = iVar10 != 0;
                                    iVar10 = iVar10 - 1;
                                    uVar12 = uVar12 + 1;
                                } while (bVar2);
                            }
                            iVar4 = 17;
                            if (uVar13 == 0)
                                goto LAB_100311a7b;
                        }
                    LAB_100311a7d:
                        if (iVar4 != 0)
                            goto LAB_100311ac5;
                        bVar2 = uVar1 != 0;
                        uVar1 = uVar1 + 1;
                    } while (bVar2);
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < field_21800);
        }
        iVar4 = 11;
    LAB_100311aef:
        if (iVar4 == 11) {
            local_50 = field_110120;
            if (local_50 < field_21800) {
                do {
                    uVar1 = uVar5;
                    if (iVar11 < 0) {
                        iVar3 = 23;
                    LAB_100311d65:
                        if (iVar3 != 23)
                            goto LAB_100311d95;
                    } else {
                        do {
                            iVar3 = uVar1 + m_gx;
                            iVar4 = m_gx - uVar1;
                            if ((iVar3 < m_minX) && (m_maxX <= iVar4)) {
                            LAB_100311d24:
                                iVar3 = 0;
                            } else {
                                uVar13 = (unsigned int)bVar15;
                                iVar9 = iVar11;
                                uVar12 = uVar5;
                                if (iVar11 < 0) {
                                    uVar13 = (unsigned int)bVar15;
                                } else {
                                    do {
                                        iVar10 = uVar12 + m_gz;
                                        iVar14 = m_gz + iVar9;
                                        if (m_minX <= iVar3) {
                                            if (m_minZ <= iVar10) {
                                                psVar7 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                                    local_50, iVar3, iVar10);
                                                bVar2 = *psVar7 != nullptr;
                                                if ((bVar2) &&
                                                    (lVar8 = (*psVar7).operator->(), *(char*)(lVar8 + 352) != '\0')) {
                                                    Fill(*psVar7, false, arg7);
                                                }
                                            }
                                            if (iVar14 < m_maxZ) {
                                                psVar7 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                                    local_50, iVar3, iVar14);
                                                bVar2 = *psVar7 != nullptr;
                                                if ((bVar2) &&
                                                    (lVar8 = (*psVar7).operator->(), *(char*)(lVar8 + 352) != '\0')) {
                                                    Fill(*psVar7, false, arg7);
                                                }
                                            }
                                        }
                                        if (iVar4 < m_maxX) {
                                            if (m_minZ <= iVar10) {
                                                psVar7 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                                    local_50, iVar4, iVar10);
                                                bVar2 = *psVar7 != nullptr;
                                                if ((bVar2) &&
                                                    (lVar8 = (*psVar7).operator->(), *(char*)(lVar8 + 352) != '\0')) {
                                                    Fill(*psVar7, false, arg7);
                                                }
                                            }
                                            if (iVar14 < m_maxZ) {
                                                psVar7 = (shared_ptr<midi2::MidiPlayerMainThread>*)GetSquare(
                                                    local_50, iVar4, iVar14);
                                                bVar2 = *psVar7 != nullptr;
                                                if ((bVar2) &&
                                                    (lVar8 = (*psVar7).operator->(), *(char*)(lVar8 + 352) != '\0')) {
                                                    Fill(*psVar7, false, arg7);
                                                }
                                            }
                                        }
                                        if (m_fillLeft == 0) {
                                            m_click = 0;
                                            iVar3 = 1;
                                            if (uVar13 != 0)
                                                goto LAB_100311d26;
                                            goto LAB_100311d24;
                                        }
                                        uVar13 = uVar12 >> 31;
                                        bVar2 = iVar9 != 0;
                                        iVar9 = iVar9 - 1;
                                        uVar12 = uVar12 + 1;
                                    } while (bVar2);
                                }
                                iVar3 = 26;
                                if (uVar13 == 0)
                                    goto LAB_100311d24;
                            }
                        LAB_100311d26:
                            if (iVar3 != 0)
                                goto LAB_100311d65;
                            bVar2 = uVar1 != 0;
                            uVar1 = uVar1 + 1;
                        } while (bVar2);
                    }
                    local_50 = local_50 + 1;
                } while (local_50 < field_21800);
            }
            iVar3 = 20;
        LAB_100311d95:
            if (iVar3 == 20) {
                m_click = 0;
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "dash3d/World.cpp",
                                2297, "Render::Fill failure, some squares won\'t be rendered.");
            }
        }
    }

    // 0x100311ed0
    void world::SubmitModelForRender(ModelSource& modelSource, int arg2, int arg3, int arg4, int arg5, int arg6,
                                     int arg7, int arg8, int arg9, long long arg10, int arg11,
                                     const EntityHighlight& entityHighlight) {
        long* plVar1;
        long long lVar5;
        uint64_t uVar7;
        uint64_t in_stack_ffffffffffffff58;
        uint64_t in_stack_ffffffffffffff60;
        ModelSource local_68;
        world* local_58;
        ModelSource* local_50;
        int local_40;
        int local_3c;
        uint8_t local_38[4];
        uint16_t local_34;

        uint32_t uVar8 = (uint32_t)((unsigned long)in_stack_ffffffffffffff58 >> 32);
        uint32_t uVar9 = (uint32_t)((unsigned long)in_stack_ffffffffffffff60 >> 32);
        bool cVar6 = entityHighlight.HasModelHighlight();
        if ((!cVar6) || (cVar6 = entityHighlight.AlwaysOnTop(), lVar5 = arg10, plVar1 = m_modelLitRenderer, !cVar6)) {
            lVar5 = arg10;
            plVar1 = m_modelLitRenderer;
            local_40 = arg2;
            local_58 = (world*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)arg3);
            local_50 = modelSource;
            local_3c = arg5;
            uVar7 = entityHighlight.GetModelOverlayProperties();
            local_38 = (uint32_t)uVar7;
            local_34 = (uint16_t)((unsigned long)uVar7 >> 32);
            (**(void (**)(...))(*plVar1 + 16))(plVar1, local_50, local_40, (unsigned long)local_58 & 4294967295, arg4,
                                               local_3c, (((uint64_t)uVar8 << 32) | (uint32_t)arg6),
                                               (((uint64_t)uVar9 << 32) | (uint32_t)arg7), arg8, arg9, lVar5, arg11,
                                               local_38, 0);
            return;
        }
        local_40 = arg2;
        local_3c = arg7;
        local_50 = (ModelSource*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)arg8);
        local_68.field_8._4_4_ = arg9;
        local_34 = 0;
        local_38 = (uint8_t[4])0;
        local_58 = this;
        new (local_38) game::GamepadEvent();
        (**(void (**)(...))(*plVar1 + 16))(plVar1, modelSource, local_40, arg3, arg4, arg5,
                                           (((uint64_t)uVar8 << 32) | (uint32_t)arg6),
                                           (((uint64_t)uVar9 << 32) | (uint32_t)local_3c), local_50._0_4_,
                                           local_68.field_8._4_4_, lVar5, arg11, local_38, 0);
        uint8_t* this_01 = &local_58->field_21840;
        std::make_unique<DeferredModelHighlight, ModelSource&, int&, int&, int&, int&, long long&,
                         EntityHighlight const&>(local_68, modelSource, arg2, arg7, arg8, arg9, arg10);
        std::unique_ptr<DeferredHighlight>::unique_ptr<DeferredModelHighlight,
                                                       std::default_delete<DeferredModelHighlight>, void, void>(
            (unique_ptr<DeferredHighlight>*)local_38,
            (unique_ptr<DeferredModelHighlight, std::default_delete<DeferredModelHighlight> _>*)&local_68);
        this_01->push_back(*local_38);
    }

    // 0x100312330
    unsigned long world::GroundoOcluded(int arg1, int arg2, int arg3) {
        unsigned int arg1_02;
        unsigned long uVar4;

        unsigned long arg1_00 = GetSquareIndex(arg1, arg2, arg3);
        int* piVar3 = &field_190168[arg1_00];
        if (*piVar3 + m_cycleNo == 0) {
            uVar4 = 0;
            goto LAB_100312491;
        }
        uVar4 = (((uint64_t)((int64_t)(arg1_00 >> 8)) << 8) | (uint8_t)1);
        if (*piVar3 == m_cycleNo)
            goto LAB_100312491;
        unsigned int uVar5 = arg3 * 128;
        int arg1_01 = arg2 * 128 + 1;
        int iVar2 = GetGroundHeight(arg1, arg2, arg3);
        bool cVar1 = Occluded(arg1_01, iVar2, uVar5 + 1);
        if (!cVar1) {
        LAB_100312475:
            uVar4 = 0;
            iVar2 = -m_cycleNo;
        } else {
            arg1_02 = arg2 * 128 | 127;
            iVar2 = GetGroundHeight(arg1, arg2 + 1, arg3);
            cVar1 = Occluded(arg1_02, iVar2, uVar5 + 1);
            if (!cVar1)
                goto LAB_100312475;
            iVar2 = GetGroundHeight(arg1, arg2 + 1, arg3 + 1);
            cVar1 = Occluded(arg1_02, iVar2, uVar5 | 127);
            if (!cVar1)
                goto LAB_100312475;
            iVar2 = GetGroundHeight(arg1, arg2, arg3 + 1);
            cVar1 = Occluded(arg1_01, iVar2, uVar5 | 127);
            if (!cVar1)
                goto LAB_100312475;
            uVar4 = (((uint64_t)((uint64_t)(uint32_t)(uVar5 >> 8)) << 8) | (uint8_t)1);
            iVar2 = m_cycleNo;
        }
        piVar3 = &field_190168[arg1_00];
        *piVar3 = iVar2;
    LAB_100312491:
        return uVar4 & 4294967295;
    }

    // 0x1003124b0
    uint64_t world::WallOccluded(int arg1, int arg2, int arg3, int arg4) {
        bool cVar1 = GroundoOcluded(arg1, arg2, arg3);
        if (!cVar1) {
            return 0;
        }
        unsigned int arg1_00 = arg2 * 128;
        unsigned int arg3_00 = arg3 * 128;
        int iVar2 = GetGroundHeight(arg1, arg2, arg3);
        int arg2_02 = iVar2 - 231;
        if ((15 < arg4) || (7 < arg4 - 1U)) {
        switchD_100312536_caseD_3:
            cVar1 = Occluded(arg1_00 | 64, iVar2 - 239, arg3_00 | 64);
            if (!cVar1) {
                return 0;
            }
            switch (arg4 << 28 | arg4 - 16U >> 4) {
            case 1:
                arg1_00 = arg1_00 + 128;
            case 0:
                arg3_00 = arg3_00 + 128;
                break;
            default:
                (logger::default_logger())
                    ->Log(false, 3,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                          "dash3d/World.cpp",
                          3780, "Unsupported wall type");
                return 1;
            case 3:
                arg1_00 = arg1_00 + 128;
                break;
            case 7:
                break;
            }
            goto LAB_1003128e8;
        }
        int arg2_01 = iVar2 - 1;
        int arg2_00 = iVar2 - 121;
        switch (arg4) {
        case 1:
            if (m_cx < (int)arg1_00) {
                cVar1 = Occluded(arg1_00, arg2_01, arg3_00);
                if (!cVar1) {
                    return 0;
                }
                cVar1 = Occluded(arg1_00, arg2_01, arg3_00 + 128);
                if (!cVar1) {
                    return 0;
                }
            }
            if (0 < arg1) {
                cVar1 = Occluded(arg1_00, arg2_00, arg3_00);
                if (!cVar1) {
                    return 0;
                }
                cVar1 = Occluded(arg1_00, arg2_00, arg3_00 + 128);
                if (!cVar1) {
                    return 0;
                }
            }
            cVar1 = Occluded(arg1_00, arg2_02, arg3_00);
            if (!cVar1) {
                return 0;
            }
            arg3_00 = arg3_00 + 128;
            goto LAB_1003128e8;
        case 2:
            if ((int)arg3_00 < m_cz) {
                cVar1 = Occluded(arg1_00, arg2_01, arg3_00 + 128);
                if (!cVar1) {
                    return 0;
                }
                cVar1 = Occluded(arg1_00 + 128, arg2_01, arg3_00 + 128);
                if (!cVar1) {
                    return 0;
                }
            }
            if (0 < arg1) {
                cVar1 = Occluded(arg1_00, arg2_00, arg3_00 + 128);
                if (!cVar1) {
                    return 0;
                }
                cVar1 = Occluded(arg1_00 + 128, arg2_00, arg3_00 + 128);
                if (!cVar1) {
                    return 0;
                }
            }
            cVar1 = Occluded(arg1_00, arg2_02, arg3_00 + 128);
            break;
        default:
            goto switchD_100312536_caseD_3;
        case 4:
            if ((int)arg1_00 < m_cx) {
                cVar1 = Occluded(arg1_00 + 128, arg2_01, arg3_00);
                if (!cVar1) {
                    return 0;
                }
                cVar1 = Occluded(arg1_00 + 128, arg2_01, arg3_00 + 128);
                if (!cVar1) {
                    return 0;
                }
            }
            if (0 < arg1) {
                cVar1 = Occluded(arg1_00 + 128, arg2_00, arg3_00);
                if (!cVar1) {
                    return 0;
                }
                cVar1 = Occluded(arg1_00 + 128, arg2_00, arg3_00 + 128);
                if (!cVar1) {
                    return 0;
                }
            }
            cVar1 = Occluded(arg1_00 + 128, arg2_02, arg3_00);
            break;
        case 8:
            if (m_cz < (int)arg3_00) {
                cVar1 = Occluded(arg1_00, arg2_01, arg3_00);
                if (!cVar1) {
                    return 0;
                }
                cVar1 = Occluded(arg1_00 + 128, arg2_01, arg3_00);
                if (!cVar1) {
                    return 0;
                }
            }
            if (0 < arg1) {
                cVar1 = Occluded(arg1_00, arg2_00, arg3_00);
                if (!cVar1) {
                    return 0;
                }
                cVar1 = Occluded(arg1_00 + 128, arg2_00, arg3_00);
                if (!cVar1) {
                    return 0;
                }
            }
            cVar1 = Occluded(arg1_00, arg2_02, arg3_00);
            if (!cVar1) {
                return 0;
            }
            arg1_00 = arg1_00 + 128;
            goto LAB_1003128e8;
        }
        if (!cVar1) {
            return 0;
        }
        arg1_00 = arg1_00 + 128;
        arg3_00 = arg3_00 + 128;
    LAB_1003128e8:
        return Occluded(arg1_00, arg2_02, arg3_00);
    }

    // 0x100312930
    uint64_t world::SpriteOccluded(int arg1, int arg2, int arg3, int arg4) {
        int arg1_00;
        int iVar2;
        int arg3_00;
        unsigned int arg3_01;
        unsigned int arg1_01;

        if (GroundoOcluded(arg1, arg2, arg3)) {
            arg1_00 = arg2 * 128 + 1;
            iVar2 = GetGroundHeight(arg1, arg2, arg3);
            arg3_00 = arg3 * 128 + 1;
            if (Occluded(arg1_00, iVar2 - arg4, arg3_00)) {
                arg1_01 = arg2 * 128 | 127;
                iVar2 = GetGroundHeight(arg1, arg2 + 1, arg3);
                if (Occluded(arg1_01, iVar2 - arg4, arg3_00)) {
                    iVar2 = GetGroundHeight(arg1, arg2 + 1, arg3 + 1);
                    arg3_01 = arg3 * 128 | 127;
                    if (Occluded(arg1_01, iVar2 - arg4, arg3_01)) {
                        iVar2 = GetGroundHeight(arg1, arg2, arg3 + 1);
                        if (Occluded(arg1_00, iVar2 - arg4, arg3_01)) {
                            return 1;
                        }
                    }
                }
            }
        }
        return 0;
    }

    // 0x100312c00
    void world::SpriteOccluded(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        int iVar2;
        int iVar3;
        int iVar4;
        unsigned long uVar6;
        int* piVar7;
        unsigned int uVar8;
        uint32_t in_register_0000003c;
        world* world;
        unsigned int uVar9;
        bool bVar10;
        int in_stack_00000008;

        world = (world*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        if ((arg3 == arg4) && (arg5 == arg6)) {
            if (GroundoOcluded(world, arg2, arg3, arg5)) {
                iVar4 = arg3 * 128 + 1;
                iVar2 = GetGroundHeight(world, arg2, arg3, arg5);
                iVar3 = arg5 * 128 + 1;
                if (Occluded(world, iVar4, iVar2 - in_stack_00000008, iVar3)) {
                    uVar8 = arg3 * 128 | 127;
                    iVar2 = GetGroundHeight(world, arg2, arg3 + 1, arg5);
                    if (Occluded(world, uVar8, iVar2 - in_stack_00000008, iVar3)) {
                        iVar3 = GetGroundHeight(world, arg2, arg3 + 1, arg5 + 1);
                        uVar9 = arg5 * 128 | 127;
                        if (Occluded(world, uVar8, iVar3 - in_stack_00000008, uVar9)) {
                            iVar3 = GetGroundHeight(world, arg2, arg3, arg5 + 1);
                            if (Occluded(world, iVar4, iVar3 - in_stack_00000008, uVar9)) {
                                return 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (arg3 <= arg4) {
                iVar4 = arg3;
                do {
                    iVar3 = 5;
                    bVar10 = arg6 < arg5;
                    if (arg5 <= arg6) {
                        uVar6 = GetSquareIndex(world, arg2, iVar4, arg5);
                        piVar7 = &world->field_190168[uVar6];
                        iVar2 = *piVar7 + m_cycleNo;
                        iVar3 = arg5;
                        while (iVar2 != 0) {
                            bVar10 = arg6 <= iVar3;
                            if (arg6 == iVar3) {
                                iVar3 = 5;
                                goto joined_r0x000100312eef;
                            }
                            iVar3 = iVar3 + 1;
                            uVar6 = GetSquareIndex(world, arg2, iVar4, iVar3);
                            piVar7 = &world->field_190168[uVar6];
                            iVar2 = *piVar7 + m_cycleNo;
                        }
                        iVar3 = 1;
                    }
                joined_r0x000100312eef:
                    if (!bVar10)
                        goto LAB_100312d4f;
                    bVar10 = iVar4 != arg4;
                    iVar4 = iVar4 + 1;
                } while (bVar10);
            }
            iVar3 = 2;
        LAB_100312d4f:
            if (iVar3 == 2) {
                uVar8 = arg3 << 7 | 1;
                uVar9 = arg5 << 7 | 2;
                iVar4 = GetGroundHeight(world, arg2, arg3, arg5);
                iVar4 = iVar4 - in_stack_00000008;
                if (Occluded(world, uVar8, iVar4, uVar9)) {
                    iVar3 = arg4 * 128 - 1;
                    if (Occluded(world, iVar3, iVar4, uVar9)) {
                        iVar2 = arg6 * 128 - 1;
                        if (Occluded(world, uVar8, iVar4, iVar2)) {
                            return Occluded(world, iVar3, iVar4, iVar2);
                        }
                    }
                }
            }
        }
        return 0;
    }

    // 0x100312f00
    int world::TextureLightCol(int arg1, int arg2) {
        int iVar1 = (arg1 & 127U) * arg2;
        int iVar2 = iVar1 >> 7;
        int iVar3 = 126;
        if (iVar2 < 126) {
            iVar3 = iVar2;
        }
        iVar2 = 2;
        if (255 < iVar1) {
            iVar2 = iVar3;
        }
        return iVar2 + (arg1 & 65408U);
    }

    // 0x100312f40
    unsigned long world::InsideTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                        int arg8) {
        bool bVar2;
        int iVar4;

        if (((((arg1 < arg2) && (arg1 < arg3)) && (arg1 < arg4)) ||
             ((((arg1 - arg2 != 0 && arg2 <= arg1 && (arg3 < arg1)) && (arg4 < arg1)) ||
               (((iVar4 = (int)this, iVar4 < arg5 && (iVar4 < arg6)) && (iVar4 < arg7)))))) ||
            (((iVar4 - arg5 != 0 && arg5 <= iVar4 && (arg6 < iVar4)) && (arg7 < iVar4)))) {
            return 0;
        }
        unsigned int uVar3 = (arg3 - arg4) * (iVar4 - arg6) + (arg7 - arg6) * (arg1 - arg3);
        unsigned int uVar5 = (arg4 - arg2) * (iVar4 - arg7) + (arg5 - arg7) * (arg1 - arg4);
        int iVar6 = (iVar4 - arg5) * (arg2 - arg3) + (arg6 - arg5) * (arg1 - arg2);
        uint32_t uVar1 = (uint32_t)((unsigned int)(iVar4 - arg6) >> 8);
        if (iVar6 == 0) {
            if (uVar3 == 0) {
                return 1;
            }
            bVar2 = -1 < (int)uVar5;
            if ((int)uVar3 < 0) {
                bVar2 = (int)uVar5 < 1;
            }
            return (unsigned long)bVar2;
        }
        if (iVar6 < 0) {
            return (unsigned long)(((uint32_t)uVar1 << 8) | (uint8_t)((int)uVar5 < 1 && (int)uVar3 < 1));
        }
        return (unsigned long)(((uint32_t)uVar1 << 8) | (uint8_t)(-1 < (int)(uVar3 | uVar5)));
    }

    // 0x100313020
    void world::TransformWorldToScreenCoord(int arg1, int arg2, int arg3, int& arg4, int& arg5) {
        long lVar1 = m_pix3D;
        int iVar3 = m_cameraCosY * arg3 - m_cameraSinY * arg1 >> 16;
        int iVar2 = m_cameraCosX * arg2;
        int iVar5 = iVar3 * m_cameraSinX;
        unsigned int uVar4 = iVar3 * m_cameraCosX + m_cameraSinX * arg2 >> 16 | 1;
        arg4 = ((m_cameraCosY * arg1 + m_cameraSinY * arg3 >> 16) * *(int*)(m_pix3D + 16)) / (int)uVar4 +
               *(int*)(m_pix3D + 20) + *(int*)(m_pix3D + 96);
        arg5 = ((iVar2 - iVar5 >> 16) * *(int*)(lVar1 + 16)) / (int)uVar4 + *(int*)(lVar1 + 24) + *(int*)(lVar1 + 88);
    }

    // 0x100313130
    bool world::Occluded(int arg1, int arg2, int arg3) {
        long lVar1;
        long* plVar2;
        unsigned int uVar3;
        int iVar4;
        unsigned long arg1_00;

        if (0 < field_17736) {
            arg1_00 = 0;
            do {
                plVar2 = &field_17744[arg1_00];
                lVar1 = *plVar2;
                uVar3 = 0;
                switch (*(uint32_t*)(lVar1 + 44)) {
                case 1:
                    uVar3 = 4;
                    iVar4 = *(int*)(lVar1 + 20) - arg1;
                    if (iVar4 != 0 && arg1 <= *(int*)(lVar1 + 20)) {
                    LAB_1003131be:
                        if (((*(int*)(lVar1 + 56) * iVar4 >> 8) + *(int*)(lVar1 + 28) <= arg3) &&
                            (arg3 <= (*(int*)(lVar1 + 60) * iVar4 >> 8) + *(int*)(lVar1 + 32)))
                            goto LAB_100313227;
                    LAB_100313270:
                        uVar3 = 4;
                    }
                    break;
                case 2:
                    uVar3 = 4;
                    iVar4 = arg1 - *(int*)(lVar1 + 20);
                    if (iVar4 != 0 && *(int*)(lVar1 + 20) <= arg1)
                        goto LAB_1003131be;
                    break;
                case 3:
                    uVar3 = 4;
                    iVar4 = *(int*)(lVar1 + 28) - arg3;
                    if (iVar4 != 0 && arg3 <= *(int*)(lVar1 + 28)) {
                    LAB_100313205:
                        if ((arg1 < (*(int*)(lVar1 + 48) * iVar4 >> 8) + *(int*)(lVar1 + 20)) ||
                            ((*(int*)(lVar1 + 52) * iVar4 >> 8) + *(int*)(lVar1 + 24) < arg1))
                            goto LAB_100313270;
                    LAB_100313227:
                        if ((arg2 < (*(int*)(lVar1 + 64) * iVar4 >> 8) + *(int*)(lVar1 + 36)) ||
                            (uVar3 = 1, (iVar4 * *(int*)(lVar1 + 68) >> 8) + *(int*)(lVar1 + 40) < arg2))
                            goto LAB_100313270;
                    }
                    break;
                case 4:
                    uVar3 = 4;
                    iVar4 = arg3 - *(int*)(lVar1 + 28);
                    if (iVar4 != 0 && *(int*)(lVar1 + 28) <= arg3)
                        goto LAB_100313205;
                    break;
                case 5:
                    uVar3 = 4;
                    iVar4 = arg2 - *(int*)(lVar1 + 36);
                    if ((iVar4 != 0 && *(int*)(lVar1 + 36) <= arg2) &&
                        ((((arg1 < (*(int*)(lVar1 + 48) * iVar4 >> 8) + *(int*)(lVar1 + 20) ||
                            ((*(int*)(lVar1 + 52) * iVar4 >> 8) + *(int*)(lVar1 + 24) < arg1)) ||
                           (arg3 < (*(int*)(lVar1 + 56) * iVar4 >> 8) + *(int*)(lVar1 + 28))) ||
                          (uVar3 = 1, (iVar4 * *(int*)(lVar1 + 60) >> 8) + *(int*)(lVar1 + 32) < arg3))))
                        goto LAB_100313270;
                }
                if ((uVar3 & 3) != 0)
                    goto LAB_1003132cd;
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)field_17736);
        }
        uVar3 = 2;
    LAB_1003132cd:
        return uVar3 != 2;
    }

    // 0x100313300
    void world::GetGroundHeightAtFinePos(int arg1, int arg2, int arg3) const {
        ClientBuild::GetGroundHeightAtFinePos(arg1, arg2, arg3);
    }

    // 0x100313320
    EntityHighlight* world::GetHighlightOnTile(int arg1, int arg2, int arg3) const {
        EntityHighlight* pEVar2;

        auto this_00 = GetSquare(arg1, arg2, arg3);
        if (shared_ptr::operator_cast_to_bool(this_00) == '\0') {
            pEVar2 = nullptr;
        } else {
            pEVar2 = ((Square*)(*this_00).operator->())->GetTileHighlightData();
        }
        return pEVar2;
    }

    // 0x100313360
    uint8_t world::GetShowDebugPointLight() {
        return this[1].field_16;
    }

    // 0x100313370
    void world::SetShowDebugPointLight(bool arg1) {
        this[1].field_16 = arg1;
    }

    // 0x100327090
    world::SubmitDebugPointLight(int)::DemoPointLightSource::DemoPointLightSource() : PointLightSource() {}

    // 0x1003270d0
    DemoPointLightSource* world::SubmitDebugPointLight(int)::DemoPointLightSource::GetLight(int arg1) {
        bool local_20[7];

        uint32_t local_28 = 1142947840;
        ImVec4 local_38(0.7, 0.1, 0.1, 1.0);
        float local_24 = 2.0;
        local_20[0] = true;
        local_20[1] = true;
        local_20[2] = true;
        local_20[3] = true;
        uint8_t local_19 = 1;
        make_shared<jag::graphics::PointLight, jag::math::Vector3T<float> const&, float, jag::math::Vector4T<float>,
                    float, float, bool>((Vector3T<float>*)this, (float*)PTR_ZERO_100ee66e8, (Vector4T<float>*)&local_28,
                                        &local_38, &local_24, local_20);
        return this;
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100307700
    shared_ptr_if_not_array<oldscape::dash3d::Square>::type
    make_shared<oldscape::dash3d::Square, int&, int&, int&>(int& arg1, int& arg2, int& arg3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        Square* local_40[2];

        auto arg1_00 = aligned_alloc(440, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::Square>::type result;
        } else {
            local_40[0] = placement_new<oldscape::dash3d::Square, int&, int&, int&>((void*)((long)arg1_00 + 32), arg1,
                                                                                    arg2, arg3);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::Square>, int, oldscape::dash3d::Square*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag

// 0x10030bbc0
void floor(float arg1) {
    _floorf();
}
