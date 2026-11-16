// libs/oldscape/jagex3/dash3d/World.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "World.h"

namespace jag::oldscape::dash3d {
    // 0x100d41cd4, 12 bytes, __const
    world::Z_CUT = {50, 0, 0};

    // 0x100d41ce0, 48 bytes, __const
    world::PRETAB = {19, 55, 38, 155, 255, 110, 137, 205, 76, 0, 0, 0};

    // 0x100d41d10, 48 bytes, __const
    world::MIDTAB = {160, 192, 80, 96, 0, 144, 80, 48, 160, 0, 0, 0};

    // 0x100d41d40, 48 bytes, __const
    world::POSTTAB = {76, 8, 137, 4, 0, 1, 38, 2, 19, 0, 0, 0};

    // 0x100d41d70, 48 bytes, __const
    world::MIDDEP_16 = {0, 0, 2, 0, 0, 2, 1, 1, 0, 0, 0, 0};

    // 0x100d41da0, 48 bytes, __const
    world::MIDDEP_32 = {2, 0, 0, 2, 0, 0, 0, 4, 4, 0, 0, 0};

    // 0x100d41dd0, 48 bytes, __const
    world::MIDDEP_64 = {0, 4, 4, 8, 0, 0, 8, 0, 0, 0, 0, 0};

    // 0x100d41e00, 36 bytes, __const
    world::MIDDEP_128 = {1, 1, 0, 0, 0, 8, 0, 0, 8};

    // 0x100d41e24, 832 bytes, __const
    world::MINIMAP_SHAPE = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
        0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0,
        1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
        1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1,
    };

    // 0x100d42164, 256 bytes, __const
    world::MINIMAP_ROTATE = {
        0, 1, 2,  3,  4, 5, 6,  7,  8, 9, 10, 11, 12, 13, 14, 15, 12, 8, 4, 0,  13, 9,
        5, 1, 14, 10, 6, 2, 15, 11, 7, 3, 15, 14, 13, 12, 11, 10, 9,  8, 7, 6,  5,  4,
        3, 2, 1,  0,  3, 7, 11, 15, 2, 6, 10, 14, 1,  5,  9,  13, 0,  4, 8, 12,
    };

    // 0x100d42264, 4 bytes, __const
    world::FOLLOW_CAMERA_LOWEST_RELATIVEANGLE_X = 128;

    // 0x100d42268, 4 bytes, __const
    world::FOLLOW_CAMERA_HIGHEST_RELATIVEANGLE_X = 383;

    // 0x100f37c60, 4 bytes, __data
    world::m_groundX = -1;

    // 0x100f37c64, 4 bytes, __data
    world::m_groundY = -1;

    // 0x100f37c68, 4 bytes, __data
    world::m_groundZ = -1;

    // 0x100f37c6c, 4 bytes, __data
    world::m_mouseoverGroundX = -1;

    // 0x100f37c70, 4 bytes, __data
    world::m_mouseoverGroundY = -1;

    // 0x100f37c74, 4 bytes, __data
    world::m_mouseoverGroundZ = -1;

    // 0x100f37c84, 4 bytes, __data
    world::m_drawDistanceRange = 25;

    // 0x1016c6110, 4 bytes, __common; zero-initialised
    world::m_lowMem;

    // 0x1016c6114, 4 bytes, __common; zero-initialised
    world::m_cameraSinX;

    // 0x1016c6118, 4 bytes, __common; zero-initialised
    world::m_cameraCosX;

    // 0x1016c611c, 4 bytes, __common; zero-initialised
    world::m_cameraSinY;

    // 0x1016c6120, 4 bytes, __common; zero-initialised
    world::m_cameraCosY;

    // 0x1016c6124, 4 bytes, __common; zero-initialised
    world::m_fillLeft;

    // 0x1016c6128, 4 bytes, __common; zero-initialised
    world::m_maxLevel;

    // 0x1016c612c, 4 bytes, __common; zero-initialised
    world::m_cycleNo;

    // 0x1016c6130, 4 bytes, __common; zero-initialised
    world::m_minX;

    // 0x1016c6134, 4 bytes, __common; zero-initialised
    world::m_maxX;

    // 0x1016c6138, 4 bytes, __common; zero-initialised
    world::m_minZ;

    // 0x1016c613c, 4 bytes, __common; zero-initialised
    world::m_maxZ;

    // 0x1016c6140, 4 bytes, __common; zero-initialised
    world::m_gx;

    // 0x1016c6144, 4 bytes, __common; zero-initialised
    world::m_gz;

    // 0x1016c6148, 4 bytes, __common; zero-initialised
    world::m_cx;

    // 0x1016c614c, 4 bytes, __common; zero-initialised
    world::m_cy;

    // 0x1016c6150, 4 bytes, __common; zero-initialised
    world::m_cz;

    // 0x1016c6154, 4 bytes, __common; zero-initialised
    world::m_click;

    // 0x1016c6158, 4 bytes, __common; zero-initialised
    world::m_clickLev;

    // 0x1016c615c, 4 bytes, __common; zero-initialised
    world::m_clickX;

    // 0x1016c6160, 4 bytes, __common; zero-initialised
    world::m_clickY;

    // 0x1016c6164, 12 bytes, __common; zero-initialised
    world::m_mouseoverGroundFine;

    // 0x1016c6170, 4 bytes, __common; zero-initialised
    world::m_groundPickingLevel;

    // 0x1016c6174, 4 bytes, __common; zero-initialised
    world::m_executeGroundOp;

    // 0x1016c6178, 8 bytes, __common; zero-initialised
    world::m_pix3D;

    // 0x1016c6180, 8 bytes, __common; zero-initialised
    world::m_worldRenderer;

    // 0x1016c6188, 8 bytes, __common; zero-initialised
    world::m_modelLitRenderer;

    // 0x1016c6190, 8 bytes, __common; zero-initialised
    world::m_modelLitRendererRt7;

    // 0x1016c6198, 4 bytes, __common; zero-initialised
    world::m_cameraAngleXSlice;

    // 0x1016c619c, 4 bytes, __common; zero-initialised
    world::m_cameraAngleYSlice;

    // 0x1016c61a0, 40 bytes, __common; set at startup by ___cxx_global_var_init.85
    world::VisCalcParams world::m_visCalcParams = VisCalcParams();

    // 0x1016c61c8, 4 bytes, __common; zero-initialised
    world::m_xOrig;

    // 0x1016c61cc, 4 bytes, __common; zero-initialised
    world::m_yOrig;

    // 0x1016c61d0, 4 bytes, __common; zero-initialised
    world::m_xClip;

    // 0x1016c61d4, 4 bytes, __common; zero-initialised
    world::m_yClip;

    // 0x1016c61d8, 4 bytes, __common; zero-initialised
    world::m_xClip2;

    // 0x1016c61dc, 4 bytes, __common; zero-initialised
    world::m_yClip2;

    // 0x1016c61e0, 8386816 bytes, __common; zero-initialised
    world::m_visBacking;

    // 0x101ec5ae0, 8386816 bytes, __common; zero-initialised
    world::m_visBackingDirty;

    // 0x1026c53e0, 9644832 bytes, __common; zero-initialised
    world::m_pvisBacking;

    // 0x102ff7f00, 9644832 bytes, __common; zero-initialised
    world::m_pvisBackingDirty;

    // 0x1003068c0, 592 bytes, base-object constructor, placed by class name and debug map
    // world::world(int, int, int, int, Array<int, eastl::allocator> const&, NXTPix3D&)
    void world::world(int param_1, int param_2, int param_3, int param_4, Array* param_5, NXTPix3D* param_6) {
        undefined1* this_00;
        ulong uVar1;

        new (this) eastl::fixed_vector<shared_ptr<Sprite>, 100ul, true, eastl::allocator>();
        this_00 = &field_1640;
        new (this_00) eastl::fixed_vector<int, 4ul, true, eastl::allocator>();
        new (&field_1696) eastl::fixed_vector<std::unique_ptr<Occlude, std::default_delete<Occlude>>, 2000ul, true,
                                              eastl::allocator>();
        new (&field_17744) eastl::fixed_vector<Occlude*, 500ul, true, eastl::allocator>();
        new (&field_21784) SharedPtrList<Square>();
        new (&field_21816) Array<shared_ptr<Square>, eastl::allocator>();
        new (&field_21840)
            eastl::fixed_vector<std::unique_ptr<DeferredHighlight, std::default_delete<DeferredHighlight>>, 1024ul,
                                true, eastl::allocator>();
        new (&field_30072) eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>();
        field_110120 = 0;
        field_110124 = 0;
        new (&field_110128, 5000) eastl::fixed_vector<shared_ptr<Sprite>, 5000ul, true, eastl::allocator>();
        new (&field_190168) Array<int, eastl::allocator>();
        this[1].field_16 = 0;
        field_21800 = param_1;
        field_21804 = param_2;
        field_21808 = param_3;
        m_pix3D = param_6;
        m_drawDistanceRange = param_4;
        (*(code*)param_6->field_0[6])(param_6, param_4);
        (&field_21816, (long)(param_2 * param_1 * param_3), 3)->set_max_size();
        (&field_190168, (long)((param_3 + 1) * (param_2 + 1) * param_1), 3)->set_max_size();
        this_00->GetID();
        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::resize(
            (ulong)this_00);
        eastl::fixed_vector<Occlude*, 500ul, true, eastl::allocator>::max_size();
        eastl::vector<Occlude*, eastl::fixed_vector_allocator<8ul, 500ul, 8ul, 0ul, true, eastl::allocator>>::resize(
            (ulong)&field_17744);
        uVar1 = eastl::fixed_vector<std::unique_ptr<Occlude, std::default_delete<Occlude>>, 2000ul, true,
                                    eastl::allocator>::max_size();
        (&field_1696, uVar1)->resize();
        field_110112 = param_5;
        uVar1 = game::option::GameRenderScale::GetDefault();
        resize(uVar1);
        ResetMap(this);
    }

    // 0x100306e50, 592 bytes, placed by class name and debug map
    // world::ResetMap()
    void world::ResetMap() {
        undefined1* this_00;
        undefined4* puVar1;
        int* piVar2;
        shared_ptr<Sprite>* psVar3;
        long lVar4;
        int iVar5;
        ulong uVar6;
        int iVar7;
        int iVar8;
        ulong uVar9;
        shared_ptr local_40;

        if (0 < field_21800) {
            iVar8 = 0;
            do {
                if (0 < field_21804) {
                    iVar7 = 0;
                    do {
                        if (0 < field_21808) {
                            iVar5 = 0;
                            do {
                                new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                SetSquare(this, iVar8, iVar7, iVar5, &local_40);
                                local_40.~shared_ptr();
                                iVar5 = iVar5 + 1;
                            } while (iVar5 < field_21808);
                        }
                        iVar7 = iVar7 + 1;
                    } while (iVar7 < field_21804);
                }
                iVar8 = iVar8 + 1;
            } while (iVar8 < field_21800);
        }
        this_00 = &field_1640;
        uVar9 = 0;
        do {
            piVar2 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)this_00,
                    uVar9);
            if (0 < *piVar2) {
                uVar6 = 0;
                do {
                    std::unique_ptr<Occlude, std::default_delete<Occlude>>::unique_ptr<true, void>(
                        (_func_decltype_nullptr*)&local_40);
                    SetOccluder(this, uVar9, uVar6, (unique_ptr*)&local_40);
                    local_40.~unique_ptr();
                    uVar6 = uVar6 + 1;
                    piVar2 = (int*)
                        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)
                                this_00,
                            uVar9);
                } while ((long)uVar6 < (long)*piVar2);
            }
            puVar1 = (undefined4*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)this_00,
                    uVar9);
            *puVar1 = 0;
            uVar9 = uVar9 + 1;
        } while (uVar9 != 4);
        if (0 < field_110124) {
            uVar9 = 0;
            do {
                new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                psVar3 = (shared_ptr<Sprite>*)eastl::vector<
                    shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5000ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5000ul, 8ul, 0ul, true,
                                                                                     eastl::allocator>>*)&field_110128,
                           uVar9);
                shared_ptr<Sprite>::operator=(psVar3, &local_40);
                local_40.~shared_ptr();
                uVar9 = uVar9 + 1;
            } while ((long)uVar9 < (long)field_110124);
        }
        field_110124 = 0;
        lVar4 = size();
        if (lVar4 != 0) {
            uVar9 = 0;
            do {
                new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                psVar3 = (shared_ptr<Sprite>*)eastl::vector<
                    shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 100ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<shared_ptr<Sprite>,
                                   eastl::fixed_vector_allocator<16ul, 100ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           uVar9);
                shared_ptr<Sprite>::operator=(psVar3, &local_40);
                local_40.~shared_ptr();
                uVar9 = uVar9 + 1;
                uVar6 = size();
            } while (uVar9 < uVar6);
        }
        if (m_modelLitRendererRt7 != (RSevenModelLitRenderer*)0) {
            m_modelLitRendererRt7->ResetMap();
        }
    }

    // 0x100307120, 32 bytes, complete-object constructor, placed by class name and debug map
    // world::world(int, int, int, int, Array<int, eastl::allocator> const&, NXTPix3D&)
    void world::world(int param_1, int param_2, int param_3, int param_4, Array* param_5, NXTPix3D* param_6) {
        world(this, param_1, param_2, param_3, param_4, param_5, param_6);
    }

    // 0x100307140, 272 bytes, base-object destructor, placed by class name and debug map
    // world::~world()
    void world::~world() {
        ResetMap(this);
        ResetAll(this);
        (&field_190168)->~Array();
        (&field_110128)->~fixed_vector();
        (&field_30072)->~fixed_vector();
        (&field_21840)->~fixed_vector();
        (&field_21816)->~Array();
        (&field_21784)->~SharedPtrList();
        (&field_17744)->~fixed_vector();
        (&field_1696)->~fixed_vector();
        (&field_1640)->~fixed_vector();
        ~fixed_vector();
    }

    // 0x100307250, 336 bytes, placed by class name and debug map
    // world::ResetAll()
    void world::ResetAll() {
        undefined1* this_00;
        char cVar1;
        long lVar2;
        shared_ptr<Sprite>* this_01;
        ulong uVar3;
        undefined4* puVar4;
        undefined8 uVar5;
        void* pvVar6;
        ulong uVar7;
        shared_ptr local_30;

        lVar2 = size();
        if (lVar2 != 0) {
            uVar7 = 0;
            do {
                new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                this_01 = (shared_ptr<Sprite>*)eastl::vector<
                    shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 100ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<shared_ptr<Sprite>,
                                   eastl::fixed_vector_allocator<16ul, 100ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           uVar7);
                shared_ptr<Sprite>::operator=(this_01, &local_30);
                local_30.~shared_ptr();
                uVar7 = uVar7 + 1;
                uVar3 = size();
            } while (uVar7 < uVar3);
        }
        while (true) {
            cVar1 = (&field_21784)->empty();
            if (cVar1 != '\0')
                break;
            SharedPtrList<Square>::pop();
        }
        this_00 = &field_1640;
        lVar2 = this_00->size();
        if (lVar2 != 0) {
            uVar7 = 0;
            do {
                puVar4 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        uVar7);
                *puVar4 = 0;
                uVar7 = uVar7 + 1;
                uVar3 = this_00->size();
            } while (uVar7 < uVar3);
        }
        (&field_1696)->clear();
        uVar5 = m_visBacking.data();
        ___bzero(uVar5, 8386816);
        pvVar6 = (void*)m_visBackingDirty.data();
        _memset(pvVar6, 1, 8386816);
        uVar5 = m_pvisBacking.data();
        ___bzero(uVar5, 9644832);
        pvVar6 = (void*)m_pvisBackingDirty.data();
        _memset(pvVar6, 1, 9644832);
    }

    // 0x1003073a0, 16 bytes, complete-object destructor, placed by class name and debug map
    // world::~world(): jumps straight to the base-object destructor

    // 0x100307600, 256 bytes, placed by class name and debug map
    // world::FillBaseLevel(int)
    void world::FillBaseLevel(int param_1) {
        int iVar1;
        int iVar2;
        int iVar3;
        bool bVar4;
        shared_ptr* psVar5;
        shared_ptr local_50;
        int local_3c;
        int local_38;
        int local_34;

        field_110120 = param_1;
        local_34 = 0;
        if (0 < field_21804) {
            local_3c = param_1;
            do {
                local_38 = 0;
                if (0 < field_21808) {
                    do {
                        psVar5 = (shared_ptr*)GetSquare(this, local_3c, local_34, local_38);
                        bVar4 = operator==(psVar5, (_func_decltype_nullptr*)0);
                        iVar3 = local_34;
                        iVar2 = local_38;
                        iVar1 = local_3c;
                        if (bVar4) {
                            make_shared<Square, int&, int&, int&>((jag*)&local_50, &local_3c, &local_34, &local_38);
                            SetSquare(this, iVar1, iVar3, iVar2, &local_50);
                            local_50.~shared_ptr();
                        }
                        local_38 = local_38 + 1;
                    } while (local_38 < field_21808);
                }
                local_34 = local_34 + 1;
            } while (local_34 < field_21804);
        }
    }

    // 0x1003077b0, 464 bytes, placed by class name and debug map
    // world::PushDown(int, int)
    void world::PushDown(int param_1, int param_2) {
        shared_ptr* psVar3;
        long lVar4;
        shared_ptr* psVar5;
        int* piVar6;
        shared_ptr<Square>* this_00;
        int iVar7;
        int iVar8;
        ulong uVar9;
        shared_ptr local_60;
        shared_ptr local_50;

        psVar3 = (shared_ptr*)GetSquare(this, 0, param_1, param_2);
        new (&local_60) shared_ptr<Decor>(psVar3);
        iVar8 = 0;
        do {
            iVar7 = iVar8 + 1;
            psVar3 = (shared_ptr*)GetSquare((world*)this, iVar7, param_1, param_2);
            SetSquare((world*)this, iVar8, param_1, param_2, psVar3);
            if (operator!=(psVar3, (_func_decltype_nullptr*)0)) {
                lVar4 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar3);
                *(int*)(lVar4 + 32) = *(int*)(lVar4 + 32) + -1;
                uVar9 = 0;
                while (true) {
                    lVar4 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar3);
                    if ((long)*(int*)(lVar4 + 156) <= (long)uVar9)
                        break;
                    lVar4 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar3);
                    psVar5 = (shared_ptr*)
                        eastl::vector<shared_ptr<Sprite>,
                                      eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)(lVar4 + 160),
                            uVar9);
                    new (&local_50) shared_ptr<Decor>(psVar5);
                    lVar4 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)&local_50);
                    if (MousePickingHelper::IsLocTypecode(*(longlong*)(lVar4 + 80)) != '\0') {
                        lVar4 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)&local_50);
                        if (*(int*)(lVar4 + 52) == param_1) {
                            lVar4 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)&local_50);
                            if (*(int*)(lVar4 + 60) == param_2) {
                                piVar6 = (int*)shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)&local_50);
                                *piVar6 = *piVar6 + -1;
                            }
                        }
                    }
                    local_50.~shared_ptr();
                    uVar9 = uVar9 + 1;
                }
            }
            iVar8 = iVar7;
        } while (iVar7 != 3);
        this_00 = (shared_ptr<Square>*)GetOrCreateSquare((world*)this, 0, param_1, param_2);
        lVar4 = shared_ptr<Square>::operator->(this_00);
        shared_ptr<Square>::operator=((shared_ptr<Square>*)(lVar4 + 376), &local_60);
        new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        SetSquare((world*)this, 3, param_1, param_2, &local_50);
        local_50.~shared_ptr();
        local_60.~shared_ptr();
    }

    // 0x100307a80, 208 bytes, placed by class name and debug map
    // world::ColourGround(int, int, int, int)
    void world::ColourGround(int param_1, int param_2, int param_3, int param_4) {
        bool bVar1;
        shared_ptr* this_00;
        long lVar2;
        int* piVar3;
        shared_ptr local_28;

        this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        bVar1 = operator==(this_00, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            new (&local_28) shared_ptr<Decor>((shared_ptr*)(lVar2 + 64));
            bVar1 = operator==(&local_28, (_func_decltype_nullptr*)0);
            if (!bVar1) {
                lVar2 = shared_ptr<Ground>::operator->((shared_ptr<Ground>*)&local_28);
                piVar3 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                    (vector<int, eastl::allocator>*)(lVar2 + 104), 0);
                *piVar3 = param_4;
                lVar2 = shared_ptr<Ground>::operator->((shared_ptr<Ground>*)&local_28);
                piVar3 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                    (vector<int, eastl::allocator>*)(lVar2 + 136), 0);
                *piVar3 = param_4;
                lVar2 = shared_ptr<Ground>::operator->((shared_ptr<Ground>*)&local_28);
                piVar3 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                    (vector<int, eastl::allocator>*)(lVar2 + 168), 0);
                *piVar3 = param_4;
            }
            local_28.~shared_ptr();
        }
    }

    // 0x100307b90, 320 bytes, placed by class name and debug map
    // world::SetOcclude(int, int, int, int, int, int, int, int)
    void world::SetOcclude(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7,
                           int param_8) {
        int iVar1;
        ImGuiSettingsHandler* this_00;
        int* piVar2;
        int iVar3;
        ulong uVar4;
        unique_ptr<Occlude, std::default_delete<Occlude>> local_38[8];

        this_00 = operator_new(72);
        *(undefined8*)this_00 = 0;
        *(undefined8*)(this_00 + 8) = 0;
        *(undefined8*)(this_00 + 16) = 0;
        *(undefined8*)(this_00 + 24) = 0;
        *(undefined8*)(this_00 + 32) = 0;
        *(undefined8*)(this_00 + 40) = 0;
        *(undefined8*)(this_00 + 48) = 0;
        *(undefined8*)(this_00 + 56) = 0;
        *(undefined8*)(this_00 + 64) = 0;
        ImGuiSettingsHandler::ImGuiSettingsHandler(this_00);
        iVar1 = param_3 + 127;
        if (-1 < param_3) {
            iVar1 = param_3;
        }
        iVar3 = param_4 + 127;
        if (-1 < param_4) {
            iVar3 = param_4;
        }
        *(int*)this_00 = iVar1 >> 7;
        *(int*)(this_00 + 4) = iVar3 >> 7;
        iVar1 = param_5 + 127;
        if (-1 < param_5) {
            iVar1 = param_5;
        }
        iVar3 = param_6 + 127;
        if (-1 < param_6) {
            iVar3 = param_6;
        }
        *(int*)(this_00 + 8) = iVar1 >> 7;
        *(int*)(this_00 + 12) = iVar3 >> 7;
        *(int*)(this_00 + 16) = param_2;
        *(int*)(this_00 + 20) = param_3;
        *(int*)(this_00 + 24) = param_4;
        *(int*)(this_00 + 28) = param_5;
        *(int*)(this_00 + 32) = param_6;
        *(int*)(this_00 + 36) = param_7;
        *(int*)(this_00 + 40) = param_8;
        uVar4 = (ulong)param_1;
        piVar2 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)&field_1640,
                uVar4);
        iVar1 = *piVar2;
        std::unique_ptr<Occlude, std::default_delete<Occlude>>::unique_ptr<true, void>(local_38, (Occlude*)this_00);
        SetOccluder(this, uVar4, (long)iVar1, (unique_ptr*)local_38);
        std::unique_ptr<Occlude, std::default_delete<Occlude>>::~unique_ptr(local_38);
        piVar2 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)&field_1640,
                uVar4);
        *piVar2 = *piVar2 + 1;
    }

    // 0x100307cf0, 64 bytes, placed by class name
    // world::SetLayer(int, int, int, int)
    void world::SetLayer(int param_1, int param_2, int param_3, int param_4) {
        long lVar1;
        shared_ptr* this_00;

        this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        if (!operator==(this_00, (_func_decltype_nullptr*)0)) {
            lVar1 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            *(int*)(lVar1 + 348) = param_4;
        }
    }

    // 0x100307d30, 1040 bytes, placed by class name
    // world::SetGround(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int)
    void world::SetGround(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7,
                          int param_8, int param_9, int param_10, int param_11, int param_12, int param_13,
                          int param_14, int param_15, int param_16, int param_17, int param_18, int param_19,
                          int param_20) {
        int iVar1;
        int iVar2;
        int iVar3;
        bool bVar4;
        shared_ptr* psVar5;
        shared_ptr<Square>* psVar6;
        long lVar7;
        int local_70;
        int local_6c;
        shared_ptr local_68;
        shared_ptr local_58;
        bool local_3d;
        int local_3c;
        int local_38;
        int local_34;

        local_70 = param_4;
        local_6c = param_5;
        local_3c = param_2;
        local_38 = param_3;
        if (param_4 == 1) {
            local_68._0_1_ = param_10 == param_7 && (param_9 == param_7 && param_8 == param_7);
            local_34 = CONCAT31(local_34._1_3_, 1);
            make_shared<QuickGround, int&, int&, int&, int&, int&, int&, bool, bool>(
                (jag*)&local_58, &param_15, &param_16, &param_17, &param_18, &param_6, &param_20, (bool*)&local_68,
                (bool*)&local_34);
            local_34 = param_1;
            if (-1 < param_1) {
                iVar1 = param_1;
                local_34 = param_1;
                do {
                    psVar5 = (shared_ptr*)GetSquare(this, iVar1, local_3c, local_38);
                    bVar4 = operator==(psVar5, (_func_decltype_nullptr*)0);
                    iVar3 = local_34;
                    iVar2 = local_38;
                    iVar1 = local_3c;
                    if (bVar4) {
                        make_shared<Square, int&, int&, int&>((jag*)&local_68, &local_34, &local_3c, &local_38);
                        SetSquare(this, iVar3, iVar1, iVar2, &local_68);
                        local_68.~shared_ptr();
                    }
                    iVar1 = local_34 + -1;
                    bVar4 = 0 < local_34;
                    local_34 = iVar1;
                } while (bVar4);
            }
            psVar6 = (shared_ptr<Square>*)GetSquare(this, param_1, local_3c, local_38);
            lVar7 = shared_ptr<Square>::operator->(psVar6);
            shared_ptr<QuickGround>::operator=((shared_ptr<QuickGround>*)(lVar7 + 48), &local_58);
        } else {
            if (param_4 != 0) {
                make_shared<Ground, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&,
                            int&, int&, int&, int&, int&>((jag*)&local_58, &local_70, &local_6c, &param_6, &local_3c,
                                                          &local_38, &param_7, &param_8, &param_9, &param_10, &param_11,
                                                          &param_12, &param_13, &param_14, &param_15, &param_16,
                                                          &param_17, &param_18, &param_19, &param_20);
                local_34 = param_1;
                if (-1 < param_1) {
                    iVar1 = param_1;
                    local_34 = param_1;
                    do {
                        psVar5 = (shared_ptr*)GetSquare(this, iVar1, local_3c, local_38);
                        bVar4 = operator==(psVar5, (_func_decltype_nullptr*)0);
                        iVar3 = local_34;
                        iVar2 = local_38;
                        iVar1 = local_3c;
                        if (bVar4) {
                            make_shared<Square, int&, int&, int&>((jag*)&local_68, &local_34, &local_3c, &local_38);
                            SetSquare(this, iVar3, iVar1, iVar2, &local_68);
                            local_68.~shared_ptr();
                        }
                        iVar1 = local_34 + -1;
                        bVar4 = 0 < local_34;
                        local_34 = iVar1;
                    } while (bVar4);
                }
                psVar6 = (shared_ptr<Square>*)GetSquare(this, param_1, local_3c, local_38);
                lVar7 = shared_ptr<Square>::operator->(psVar6);
                shared_ptr<Ground>::operator=((shared_ptr<Ground>*)(lVar7 + 64), &local_58);
                local_58.~shared_ptr();
                return;
            }
            local_68._0_4_ = 4294967295;
            local_34 = (uint)local_34._1_3_ << 8;
            local_3d = false;
            make_shared<QuickGround, int&, int&, int&, int&, int&, int&, bool, bool>(
                (jag*)&local_58, &param_11, &param_12, &param_13, &param_14, (int*)&local_68, &param_19,
                (bool*)&local_34, &local_3d);
            local_34 = param_1;
            if (-1 < param_1) {
                iVar1 = param_1;
                local_34 = param_1;
                do {
                    psVar5 = (shared_ptr*)GetSquare(this, iVar1, local_3c, local_38);
                    bVar4 = operator==(psVar5, (_func_decltype_nullptr*)0);
                    iVar3 = local_34;
                    iVar2 = local_38;
                    iVar1 = local_3c;
                    if (bVar4) {
                        make_shared<Square, int&, int&, int&>((jag*)&local_68, &local_34, &local_3c, &local_38);
                        SetSquare(this, iVar3, iVar1, iVar2, &local_68);
                        local_68.~shared_ptr();
                    }
                    iVar1 = local_34 + -1;
                    bVar4 = 0 < local_34;
                    local_34 = iVar1;
                } while (bVar4);
            }
            psVar6 = (shared_ptr<Square>*)GetSquare(this, param_1, local_3c, local_38);
            lVar7 = shared_ptr<Square>::operator->(psVar6);
            shared_ptr<QuickGround>::operator=((shared_ptr<QuickGround>*)(lVar7 + 48), &local_58);
        }
        local_58.~shared_ptr();
    }

    // 0x100308390, 288 bytes, placed by class name
    // world::SetGroundDecor(int, int, int, int, shared_ptr<ModelSource> const&, long long, int)
    ulong world::SetGroundDecor(int param_1, int param_2, int param_3, int param_4, shared_ptr* param_5,
                                longlong param_6, int param_7) {
        bool bVar1;
        undefined7 extraout_var;
        long lVar2;
        int* piVar3;
        shared_ptr<Square>* this_00;
        shared_ptr local_40;

        bVar1 = operator==(param_5, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            make_shared<GroundDecor>((jag*)&local_40);
            lVar2 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)&local_40);
            shared_ptr<ModelSource>::operator=((shared_ptr<ModelSource>*)(lVar2 + 16), param_5);
            lVar2 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)&local_40);
            *(uint*)(lVar2 + 4) = param_2 << 7 | 64;
            lVar2 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)&local_40);
            *(uint*)(lVar2 + 8) = param_3 << 7 | 64;
            piVar3 = (int*)shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)&local_40);
            *piVar3 = param_4;
            lVar2 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)&local_40);
            *(longlong*)(lVar2 + 32) = param_6;
            lVar2 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)&local_40);
            *(int*)(lVar2 + 40) = param_7;
            this_00 = (shared_ptr<Square>*)GetOrCreateSquare(this, param_1, param_2, param_3);
            lVar2 = shared_ptr<Square>::operator->(this_00);
            shared_ptr<GroundDecor>::operator=((shared_ptr<GroundDecor>*)(lVar2 + 112), &local_40);
            local_40.~shared_ptr();
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295 ^ 1;
    }

    // 0x100308590, 352 bytes, placed by class name
    // world::SetObj(int, int, int, int, shared_ptr<ModelSource> const&, long long, shared_ptr<ModelSource> const&, shared_ptr<ModelSource> const&, EntityHighlight const&)
    void world::SetObj(int param_1, int param_2, int param_3, int param_4, shared_ptr* param_5, longlong param_6,
                       shared_ptr* param_7, shared_ptr* param_8, EntityHighlight* param_9) {
        undefined4 uVar1;
        long lVar2;
        int* piVar3;
        shared_ptr<Square>* this_00;
        shared_ptr local_40;

        make_shared<GroundObject>((jag*)&local_40);
        lVar2 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)&local_40);
        shared_ptr<ModelSource>::operator=((shared_ptr<ModelSource>*)(lVar2 + 16), param_5);
        lVar2 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)&local_40);
        *(uint*)(lVar2 + 4) = param_2 << 7 | 64;
        lVar2 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)&local_40);
        *(uint*)(lVar2 + 8) = param_3 << 7 | 64;
        piVar3 = (int*)shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)&local_40);
        *piVar3 = param_4;
        lVar2 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)&local_40);
        *(longlong*)(lVar2 + 64) = param_6;
        lVar2 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)&local_40);
        shared_ptr<ModelSource>::operator=((shared_ptr<ModelSource>*)(lVar2 + 32), param_7);
        lVar2 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)&local_40);
        shared_ptr<ModelSource>::operator=((shared_ptr<ModelSource>*)(lVar2 + 48), param_8);
        lVar2 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)&local_40);
        *(undefined2*)(lVar2 + 84) = *(undefined2*)&param_9->field_8;
        *(undefined8*)(lVar2 + 76) = *(undefined8*)param_9;
        uVar1 = GetTableHeightOnTile(this, param_1, param_2, param_3);
        lVar2 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)&local_40);
        *(undefined4*)(lVar2 + 72) = uVar1;
        this_00 = (shared_ptr<Square>*)GetOrCreateSquare(this, param_1, param_2, param_3);
        lVar2 = shared_ptr<Square>::operator->(this_00);
        shared_ptr<GroundObject>::operator=((shared_ptr<GroundObject>*)(lVar2 + 128), &local_40);
        local_40.~shared_ptr();
    }

    // 0x100308780, 400 bytes, placed by class name
    // world::GetTableHeightOnTile(int, int, int) const
    int world::GetTableHeightOnTile(int param_1, int param_2, int param_3) {
        bool bVar1;
        shared_ptr* this_00;
        long lVar3;
        shared_ptr<Sprite>* psVar4;
        long* plVar5;
        undefined4 extraout_EDX;
        undefined4 extraout_var;
        ulong uVar6;
        int iVar7;
        shared_ptr local_38;

        this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        iVar7 = 0;
        bVar1 = operator!=(this_00, (_func_decltype_nullptr*)0);
        if (bVar1) {
            lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            if (0 < *(int*)(lVar3 + 156)) {
                uVar6 = 0;
                iVar7 = 0;
                do {
                    lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                    psVar4 = (shared_ptr<Sprite>*)
                        eastl::vector<shared_ptr<Sprite>,
                                      eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)(lVar3 + 160),
                            uVar6);
                    lVar3 = shared_ptr<Sprite>::operator->(psVar4);
                    if ((*(byte*)(lVar3 + 89) & 1) != 0) {
                        lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                        psVar4 = (shared_ptr<Sprite>*)
                            eastl::vector<shared_ptr<Sprite>,
                                          eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)(lVar3 +
                                                                                                               160),
                                uVar6);
                        lVar3 = shared_ptr<Sprite>::operator->(psVar4);
                        bVar1 = ((lVar3 + 32))->operator_cast_to_bool();
                        if (bVar1) {
                            lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                            psVar4 = (shared_ptr<Sprite>*)eastl::vector<
                                shared_ptr<Sprite>,
                                eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)(lVar3 +
                                                                                                               160),
                                uVar6);
                            lVar3 = shared_ptr<Sprite>::operator->(psVar4);
                            plVar5 = (long*)shared_ptr<ModelSource>::operator->((shared_ptr<ModelSource>*)(lVar3 + 32));
                            if ((**(code**)(*plVar5 + 24))(plVar5) != '\0') {
                                lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                psVar4 = (shared_ptr<Sprite>*)eastl::vector<
                                    shared_ptr<Sprite>,
                                    eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                                operator[]((vector<shared_ptr<Sprite>,
                                                   eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                 eastl::allocator>>*)(lVar3 + 160),
                                           uVar6);
                                lVar3 = shared_ptr<Sprite>::operator->(psVar4);
                                static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                    &local_38, (jag*)(lVar3 + 32), (shared_ptr*)CONCAT44(extraout_var, extraout_EDX));
                                plVar5 = (long*)shared_ptr<ModelLit>::operator->((shared_ptr<ModelLit>*)&local_38);
                                (**(code**)(*plVar5 + 64))(plVar5);
                                lVar3 = shared_ptr<ModelLit>::operator->((shared_ptr<ModelLit>*)&local_38);
                                if (iVar7 < *(int*)(lVar3 + 8)) {
                                    lVar3 = shared_ptr<ModelLit>::operator->((shared_ptr<ModelLit>*)&local_38);
                                    iVar7 = *(int*)(lVar3 + 8);
                                }
                                local_38.~shared_ptr();
                            }
                        }
                    }
                    uVar6 = uVar6 + 1;
                    lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                } while ((long)uVar6 < (long)*(int*)(lVar3 + 156));
            }
        }
        return iVar7;
    }

    // 0x100308950, 96 bytes, placed by class name
    // world::GroundExists(int, int, int)
    ulong world::GroundExists(int param_1, int param_2, int param_3) {
        bool bVar1;
        shared_ptr* this_00;
        long lVar2;
        undefined7 extraout_var;
        ulong uVar3;

        this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        uVar3 = 0;
        bVar1 = operator==(this_00, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            bVar1 = operator!=((shared_ptr*)(lVar2 + 64), (_func_decltype_nullptr*)0);
            uVar3 = 1;
            if (!bVar1) {
                lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                bVar1 = operator!=((shared_ptr*)(lVar2 + 48), (_func_decltype_nullptr*)0);
                uVar3 = CONCAT71(extraout_var, bVar1) & 4294967295;
            }
        }
        return uVar3;
    }

    // 0x1003089b0, 400 bytes, placed by class name
    // world::SetWall(int, int, int, int, shared_ptr<ModelSource> const&, shared_ptr<ModelSource> const&, int, int, long long, int)
    ulong world::SetWall(int param_1, int param_2, int param_3, int param_4, shared_ptr* param_5, shared_ptr* param_6,
                         int param_7, int param_8, longlong param_9, int param_10) {
        bool bVar1;
        long lVar2;
        int* piVar3;
        shared_ptr<Square>* this_00;
        int iVar4;
        shared_ptr* this_01;
        ulong uVar5;
        shared_ptr local_40;

        bVar1 = operator==(param_5, (_func_decltype_nullptr*)0);
        if (bVar1) {
            uVar5 = 0;
            bVar1 = operator==(param_6, (_func_decltype_nullptr*)0);
            if (bVar1)
                goto LAB_100308b0d;
        }
        this_01 = &local_40;
        make_shared<Wall>((jag*)this_01);
        lVar2 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)this_01);
        *(longlong*)(lVar2 + 56) = param_9;
        lVar2 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)&local_40);
        *(int*)(lVar2 + 20) = param_10;
        lVar2 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)&local_40);
        *(uint*)(lVar2 + 4) = param_2 << 7 | 64;
        lVar2 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)&local_40);
        *(uint*)(lVar2 + 8) = param_3 << 7 | 64;
        piVar3 = (int*)shared_ptr<Wall>::operator->((shared_ptr<Wall>*)&local_40);
        *piVar3 = param_4;
        lVar2 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)&local_40);
        shared_ptr<ModelSource>::operator=((shared_ptr<ModelSource>*)(lVar2 + 24), param_5);
        lVar2 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)&local_40);
        shared_ptr<ModelSource>::operator=((shared_ptr<ModelSource>*)(lVar2 + 40), param_6);
        lVar2 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)&local_40);
        *(int*)(lVar2 + 12) = param_7;
        lVar2 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)&local_40);
        *(int*)(lVar2 + 16) = param_8;
        if (-1 < param_1) {
            this_01 = (shared_ptr*)(ulong)(uint)param_1;
            do {
                iVar4 = (int)this_01;
                GetOrCreateSquare(this, iVar4, param_2, param_3);
                this_01 = (shared_ptr*)(ulong)(iVar4 - 1);
            } while (0 < iVar4);
        }
        this_00 = (shared_ptr<Square>*)GetSquare(this, param_1, param_2, param_3);
        lVar2 = shared_ptr<Square>::operator->(this_00);
        shared_ptr<Wall>::operator=((shared_ptr<Wall>*)(lVar2 + 80), &local_40);
        local_40.~shared_ptr();
        uVar5 = CONCAT71((int7)((ulong)this_01 >> 8), 1);
    LAB_100308b0d:
        return uVar5 & 4294967295;
    }

    // 0x100308c20, 416 bytes, placed by class name
    // world::SetDecor(int, int, int, int, shared_ptr<ModelSource> const&, shared_ptr<ModelSource> const&, int, int, int, int, long long, int)
    ulong world::SetDecor(int param_1, int param_2, int param_3, int param_4, shared_ptr* param_5, shared_ptr* param_6,
                          int param_7, int param_8, int param_9, int param_10, longlong param_11, int param_12) {
        bool bVar1;
        undefined7 extraout_var;
        long lVar2;
        int* piVar3;
        shared_ptr<Square>* this_00;
        undefined8 uVar4;
        undefined7 uVar5;
        int iVar6;
        shared_ptr local_48;
        undefined1 local_31;

        local_31 = operator==(param_5, (_func_decltype_nullptr*)0);
        uVar5 = extraout_var;
        if (!(bool)local_31) {
            make_shared<Decor>((jag*)&local_48);
            lVar2 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)&local_48);
            *(longlong*)(lVar2 + 64) = param_11;
            lVar2 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)&local_48);
            *(int*)(lVar2 + 72) = param_12;
            lVar2 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)&local_48);
            *(uint*)(lVar2 + 4) = param_2 << 7 | 64;
            lVar2 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)&local_48);
            *(uint*)(lVar2 + 8) = param_3 << 7 | 64;
            piVar3 = (int*)shared_ptr<Decor>::operator->((shared_ptr<Decor>*)&local_48);
            *piVar3 = param_4;
            lVar2 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)&local_48);
            shared_ptr<ModelSource>::operator=((shared_ptr<ModelSource>*)(lVar2 + 32), param_5);
            lVar2 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)&local_48);
            shared_ptr<ModelSource>::operator=((shared_ptr<ModelSource>*)(lVar2 + 48), param_6);
            lVar2 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)&local_48);
            *(int*)(lVar2 + 12) = param_7;
            lVar2 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)&local_48);
            *(int*)(lVar2 + 16) = param_8;
            lVar2 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)&local_48);
            *(int*)(lVar2 + 20) = param_9;
            lVar2 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)&local_48);
            *(int*)(lVar2 + 24) = param_10;
            if (-1 < param_1) {
                iVar6 = param_1;
                do {
                    GetOrCreateSquare(this, iVar6, param_2, param_3);
                    bVar1 = 0 < iVar6;
                    iVar6 = iVar6 + -1;
                } while (bVar1);
            }
            this_00 = (shared_ptr<Square>*)GetSquare(this, param_1, param_2, param_3);
            lVar2 = shared_ptr<Square>::operator->(this_00);
            shared_ptr<Decor>::operator=((shared_ptr<Decor>*)(lVar2 + 96), &local_48);
            uVar4 = local_48.~shared_ptr();
            uVar5 = (undefined7)((ulong)uVar4 >> 8);
        }
        return CONCAT71(uVar5, local_31) ^ 1;
    }

    // 0x100308ea0, 224 bytes, placed by class name
    // world::AddScenery(int, int, int, int, int, int, shared_ptr<ModelSource> const&, int, long long, int)
    undefined8 world::AddScenery(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                 shared_ptr* param_7, int param_8, longlong param_9, int param_10) {
        bool bVar1;
        undefined7 extraout_var;
        undefined8 uVar2;
        undefined1 local_60[24];
        ulong local_48;
        EntityHighlight local_40;

        local_60._16_8_ = this;
        local_40._12_4_ = param_1;
        bVar1 = operator==(param_7, (_func_decltype_nullptr*)0);
        uVar2 = CONCAT71(extraout_var, 1);
        if (!bVar1) {
            local_40.field_8 = 0;
            local_40.field_9 = '\0';
            local_40.field_0 = 0;
            local_40.field_2 = 0;
            local_40.field_4 = '\0';
            local_40._5_1_ = 0;
            local_40.field_6 = 0;
            local_40._7_1_ = 0;
            local_48 = (ulong)(uint)param_4;
            new (&local_40) EntityHighlight();
            new (local_60) GridRect(param_2, param_3, param_5, param_6);
            uVar2 = SetSprite((world*)local_60._16_8_, local_40._12_4_, param_2, param_3, param_5, param_6,
                              param_5 * 64 + param_2 * 128, param_6 * 64 + param_3 * 128, (int)local_48, param_7,
                              param_8, false, param_9, param_10, &local_40, (GridRect*)local_60);
        }
        return uVar2;
    }

    // 0x100308f80, 928 bytes, placed by class name
    // world::SetSprite(int, int, int, int, int, int, int, int, shared_ptr<ModelSource> const&, int, bool, long long, int, EntityHighlight const&, GridRect const&)
    undefined8 world::SetSprite(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                int param_7, int param_8, shared_ptr* param_9, int param_10, bool param_11,
                                longlong param_12, int param_13, EntityHighlight* param_14, GridRect* param_15) {
        bool bVar1;
        uint uVar2;
        ulong uVar3;
        shared_ptr* this_00;
        long lVar4;
        int* piVar5;
        shared_ptr<Square>* this_01;
        long lVar6;
        shared_ptr<Sprite>* psVar7;
        undefined4* puVar8;
        uint uVar9;
        undefined4 in_register_0000000c;
        undefined4 in_register_00000014;
        int iVar10;
        undefined4 in_register_00000084;
        undefined4 in_register_0000008c;
        int iVar11;
        ulong uVar12;
        int iVar13;
        shared_ptr local_90;
        ulong local_80;
        undefined8 local_78;
        uint local_70;
        int local_6c;
        int local_68;
        uint local_64;
        ulong local_60;
        ulong local_58;
        ulong local_50;
        undefined8 local_48;
        ulong local_40;

        local_50 = CONCAT44(in_register_00000014, param_2);
        local_40 = CONCAT44(in_register_0000000c, param_3);
        local_58 = (ulong)(uint)(param_4 + param_2);
        local_78 = CONCAT44(in_register_0000008c, param_5);
        local_60 = (ulong)(uint)(param_5 + param_3);
        local_48 = CONCAT44(in_register_00000084, param_4);
        if (param_4 < 1) {
            local_64 = 2;
        } else {
            do {
                if (0 < (int)local_78) {
                    uVar12 = local_40 & 4294967295;
                    do {
                        uVar3 = 1;
                        if ((((param_2 < 0) || ((int)local_40 < 0)) || (field_21804 <= param_2)) ||
                            (iVar13 = (int)uVar12, field_21808 <= iVar13))
                            goto LAB_1003090a3;
                        this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, iVar13);
                        bVar1 = operator!=(this_00, (_func_decltype_nullptr*)0);
                        if ((bVar1) && (lVar4 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00),
                                        4 < *(int*)(lVar4 + 156))) {
                            uVar3 = 1;
                            goto LAB_1003090a3;
                        }
                        uVar12 = (ulong)(iVar13 + 1U);
                    } while ((int)(iVar13 + 1U) < (int)local_60);
                }
                param_2 = param_2 + 1;
            } while (param_2 < (int)local_58);
            uVar3 = 2;
        LAB_1003090a3:
            local_64 = (uint)uVar3;
            if (local_64 != 2)
                goto LAB_1003092e7;
        }
        make_shared<Sprite>((jag*)&local_90);
        piVar5 = (int*)shared_ptr<Sprite>::operator*((shared_ptr<Sprite>*)&local_90);
        *(longlong*)(piVar5 + 20) = param_12;
        piVar5[22] = param_13;
        *piVar5 = param_1;
        piVar5[2] = param_6;
        piVar5[3] = param_7;
        piVar5[1] = param_8;
        shared_ptr<ModelSource>::operator=((shared_ptr<ModelSource>*)(piVar5 + 8), param_9);
        local_68 = (int)local_58 + -1;
        local_6c = (int)local_60 + -1;
        piVar5[12] = param_10;
        piVar5[13] = (int)local_50;
        piVar5[15] = (int)local_40;
        piVar5[14] = local_68;
        piVar5[16] = local_6c;
        *(undefined8*)(piVar5 + 23) = *(undefined8*)param_14;
        *(undefined2*)(piVar5 + 25) = *(undefined2*)&param_14->field_8;
        iVar13 = param_15->field_4;
        iVar11 = param_15->field_8;
        iVar10 = param_15->field_12;
        piVar5[4] = param_15->field_0;
        piVar5[5] = iVar13;
        piVar5[6] = iVar11;
        piVar5[7] = iVar10;
        if (0 < (int)(uint)local_48) {
            uVar12 = local_50 & 4294967295;
            do {
                iVar13 = (int)uVar12;
                uVar2 = ((int)local_50 < iVar13) + 4;
                if (local_68 <= iVar13) {
                    uVar2 = (uint)((int)local_50 < iVar13);
                }
                local_80 = (ulong)uVar2;
                if (0 < (int)local_78) {
                    local_70 = uVar2 + 8;
                    uVar12 = local_40 & 4294967295;
                    do {
                        iVar11 = (int)uVar12;
                        uVar2 = (uint)local_80;
                        if ((int)local_40 < iVar11) {
                            uVar2 = local_70;
                        }
                        uVar9 = uVar2 | 2;
                        if (local_6c <= iVar11) {
                            uVar9 = uVar2;
                        }
                        local_48 = CONCAT44(local_48._4_4_, uVar9);
                        iVar10 = param_1;
                        if (-1 < param_1) {
                            do {
                                GetOrCreateSquare(this, iVar10, iVar13, iVar11);
                                bVar1 = 0 < iVar10;
                                iVar10 = iVar10 + -1;
                            } while (bVar1);
                        }
                        this_01 = (shared_ptr<Square>*)GetSquare(this, param_1, iVar13, iVar11);
                        lVar4 = shared_ptr<Square>::operator->(this_01);
                        lVar6 = shared_ptr<Square>::operator->(this_01);
                        psVar7 = (shared_ptr<Sprite>*)
                            eastl::vector<shared_ptr<Sprite>,
                                          eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)(lVar4 +
                                                                                                               160),
                                (long)*(int*)(lVar6 + 156));
                        shared_ptr<Sprite>::operator=(psVar7, &local_90);
                        lVar4 = shared_ptr<Square>::operator->(this_01);
                        lVar6 = shared_ptr<Square>::operator->(this_01);
                        puVar8 = (undefined4*)eastl::vector<
                            int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int,
                                    eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>*)(lVar4 +
                                                                                                                 280),
                            (long)*(int*)(lVar6 + 156));
                        *puVar8 = (uint)local_48;
                        lVar4 = shared_ptr<Square>::operator->(this_01);
                        *(uint*)(lVar4 + 344) = *(uint*)(lVar4 + 344) | (uint)local_48;
                        lVar4 = shared_ptr<Square>::operator->(this_01);
                        *(int*)(lVar4 + 156) = *(int*)(lVar4 + 156) + 1;
                        uVar12 = (ulong)(iVar11 + 1U);
                    } while ((int)(iVar11 + 1U) < (int)local_60);
                }
                uVar12 = (ulong)(iVar13 + 1U);
            } while ((int)(iVar13 + 1U) < (int)local_58);
        }
        if (param_11) {
            iVar13 = field_110124;
            field_110124 = iVar13 + 1;
            psVar7 = (shared_ptr<Sprite>*)eastl::vector<
                shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5000ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<shared_ptr<Sprite>,
                        eastl::fixed_vector_allocator<16ul, 5000ul, 8ul, 0ul, true, eastl::allocator>>*)&field_110128,
                (long)iVar13);
            shared_ptr<Sprite>::operator=(psVar7, &local_90);
        }
        local_90.~shared_ptr();
        uVar3 = (ulong)local_64;
    LAB_1003092e7:
        return CONCAT71((int7)(uVar3 >> 8), (int)uVar3 == 2);
    }

    // 0x100309320, 144 bytes, placed by class name
    // world::AddDynamic(int, int, int, int, int, shared_ptr<ModelSource> const&, int, long long, bool)
    void world::AddDynamic(int param_1, int param_2, int param_3, int param_4, int param_5, shared_ptr* param_6,
                           int param_7, longlong param_8, bool param_9) {
        undefined1 local_58[16];
        EntityHighlight local_48;

        local_48.field_8 = 0;
        local_48.field_9 = '\0';
        local_48.field_0 = 0;
        local_48.field_2 = 0;
        local_48.field_4 = '\0';
        local_48._5_1_ = 0;
        local_48.field_6 = 0;
        local_48._7_1_ = 0;
        new (&local_48) EntityHighlight();
        new (local_58) GridRect();
        AddDynamic(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, &local_48,
                   (GridRect*)local_58);
    }

    // 0x1003093b0, 320 bytes, placed by class name
    // world::AddDynamic(int, int, int, int, int, shared_ptr<ModelSource> const&, int, long long, bool, EntityHighlight const&, GridRect const&)
    undefined8 world::AddDynamic(int param_1, int param_2, int param_3, int param_4, int param_5, shared_ptr* param_6,
                                 int param_7, longlong param_8, bool param_9, EntityHighlight* param_10,
                                 GridRect* param_11) {
        bool bVar1;
        undefined7 extraout_var;
        undefined8 uVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;

        bVar1 = operator==(param_6, (_func_decltype_nullptr*)0);
        uVar2 = CONCAT71(extraout_var, 1);
        if (!bVar1) {
            iVar3 = param_2 - param_5;
            iVar5 = param_3 - param_5;
            iVar6 = param_5 + param_2;
            iVar7 = param_5 + param_3;
            if (param_9) {
                iVar4 = iVar7 + 128;
                if (766 < param_7 - 641U) {
                    iVar4 = iVar7;
                }
                iVar7 = iVar4;
                iVar4 = iVar6 + 128;
                if (766 < param_7 - 1153U) {
                    iVar4 = iVar6;
                }
                iVar6 = iVar4;
                iVar4 = iVar5 + -128;
                if (param_7 - 384U < 1281) {
                    iVar4 = iVar5;
                }
                iVar5 = iVar4;
                iVar4 = iVar3 + -128;
                if (766 < param_7 - 129U) {
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
            uVar2 = SetSprite(this, param_1, iVar4 >> 7, iVar3 >> 7, ((iVar5 >> 7) - (iVar4 >> 7)) + 1,
                              ((iVar6 >> 7) - (iVar3 >> 7)) + 1, param_2, param_3, param_4, param_6, param_7, true,
                              param_8, 0, param_10, param_11);
        }
        return uVar2;
    }

    // 0x100309500, 144 bytes, placed by class name
    // world::AddDynamic(int, int, int, int, int, shared_ptr<ModelSource> const&, int, long long, int, int, int, int, EntityHighlight const&, GridRect const&)
    undefined8 world::AddDynamic(int param_1, int param_2, int param_3, int param_4, int param_5, shared_ptr* param_6,
                                 int param_7, longlong param_8, int param_9, int param_10, int param_11, int param_12,
                                 EntityHighlight* param_13, GridRect* param_14) {
        bool bVar1;
        undefined7 extraout_var;
        undefined8 uVar2;

        bVar1 = operator==(param_6, (_func_decltype_nullptr*)0);
        uVar2 = CONCAT71(extraout_var, 1);
        if (!bVar1) {
            uVar2 = SetSprite(this, param_1, param_9, param_10, (param_11 - param_9) + 1, (param_12 - param_10) + 1,
                              param_2, param_3, param_4, param_6, param_7, true, param_8, 0, param_13, param_14);
        }
        return uVar2;
    }

    // 0x1003096a0, 192 bytes, placed by class name
    // world::RemoveSprites()
    void world::RemoveSprites() {
        shared_ptr<Sprite>* psVar1;
        Sprite* pSVar2;
        ulong uVar3;
        shared_ptr local_38;

        if (0 < field_110124) {
            uVar3 = 0;
            do {
                psVar1 = (shared_ptr<Sprite>*)eastl::vector<
                    shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5000ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5000ul, 8ul, 0ul, true,
                                                                                     eastl::allocator>>*)&field_110128,
                           uVar3);
                pSVar2 = (Sprite*)shared_ptr<Sprite>::operator*(psVar1);
                DelSprite(this, pSVar2);
                new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                psVar1 = (shared_ptr<Sprite>*)eastl::vector<
                    shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5000ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5000ul, 8ul, 0ul, true,
                                                                                     eastl::allocator>>*)&field_110128,
                           uVar3);
                shared_ptr<Sprite>::operator=(psVar1, &local_38);
                local_38.~shared_ptr();
                uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)field_110124);
        }
        field_110124 = 0;
    }

    // 0x100309760, 800 bytes, placed by class name
    // world::DelSprite(Sprite const&)
    void world::DelSprite(Sprite* param_1) {
        ulong uVar1;
        undefined4 uVar2;
        char cVar4;
        uint uVar5;
        uint uVar6;
        shared_ptr* this_00;
        long lVar7;
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_01;
        Sprite* pSVar8;
        shared_ptr* psVar9;
        shared_ptr<Sprite>* psVar10;
        undefined4* puVar11;
        long lVar12;
        shared_ptr<configdecoder::OldscapeVarType>* this_02;
        uint* puVar13;
        int iVar14;
        uint uVar15;
        ulong uVar16;
        shared_ptr local_58;
        ulong local_48;
        ulong local_38;

        uVar6 = *(uint*)&param_1->field_52;
        if ((int)uVar6 <= *(int*)&param_1->field_56) {
            do {
                uVar16 = (ulong)uVar6;
                uVar5 = *(uint*)&param_1->field_60;
                uVar15 = uVar6;
                local_38 = uVar16;
                if ((int)uVar5 <= *(int*)&param_1->field_64) {
                    do {
                        local_48 = (ulong)uVar5;
                        this_00 = (shared_ptr*)GetSquare(this, *(int*)param_1, (int)uVar16, uVar5);
                        if (operator!=(this_00, (_func_decltype_nullptr*)0)) {
                            lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                            iVar14 = 8;
                            if (0 < *(int*)(lVar7 + 156)) {
                                uVar16 = 0;
                            LAB_100309800:
                                lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                this_01 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)eastl::vector<
                                    shared_ptr<Sprite>,
                                    eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                                operator[]((vector<shared_ptr<Sprite>,
                                                   eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                 eastl::allocator>>*)(lVar7 + 160),
                                           uVar16);
                                pSVar8 = (Sprite*)eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                                if (pSVar8 != param_1)
                                    goto code_r0x000100309824;
                                lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                *(int*)(lVar7 + 156) = *(int*)(lVar7 + 156) + -1;
                                lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                if ((int)uVar16 < *(int*)(lVar7 + 156)) {
                                    do {
                                        lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                        uVar1 = uVar16 + 1;
                                        psVar9 = (shared_ptr*)eastl::vector<
                                            shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                              eastl::allocator>>::
                                        operator[](
                                            (vector<shared_ptr<Sprite>,
                                                    eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                  eastl::allocator>>*)(lVar7 + 160),
                                            uVar1);
                                        lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                        psVar10 = (shared_ptr<Sprite>*)eastl::vector<
                                            shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                              eastl::allocator>>::
                                        operator[](
                                            (vector<shared_ptr<Sprite>,
                                                    eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                  eastl::allocator>>*)(lVar7 + 160),
                                            uVar16);
                                        shared_ptr<Sprite>::operator=(psVar10, psVar9);
                                        lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                        puVar11 = (undefined4*)
                                            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true,
                                                                                             eastl::allocator>>::
                                            operator[](
                                                (vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true,
                                                                                           eastl::allocator>>*)(lVar7 +
                                                                                                                280),
                                                uVar1);
                                        uVar2 = *puVar11;
                                        lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                        puVar11 = (undefined4*)
                                            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true,
                                                                                             eastl::allocator>>::
                                            operator[](
                                                (vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true,
                                                                                           eastl::allocator>>*)(lVar7 +
                                                                                                                280),
                                                uVar16);
                                        *puVar11 = uVar2;
                                        lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                        uVar16 = uVar1;
                                    } while ((long)uVar1 < (long)*(int*)(lVar7 + 156));
                                }
                                lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                lVar12 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                this_02 = (shared_ptr<configdecoder::OldscapeVarType>*)eastl::vector<
                                    shared_ptr<Sprite>,
                                    eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                                operator[]((vector<shared_ptr<Sprite>,
                                                   eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                 eastl::allocator>>*)(lVar7 + 160),
                                           (long)*(int*)(lVar12 + 156));
                                cVar4 = this_02->unique();
                                new (&local_58) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                lVar12 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                psVar10 = (shared_ptr<Sprite>*)eastl::vector<
                                    shared_ptr<Sprite>,
                                    eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                                operator[]((vector<shared_ptr<Sprite>,
                                                   eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                 eastl::allocator>>*)(lVar7 + 160),
                                           (long)*(int*)(lVar12 + 156));
                                shared_ptr<Sprite>::operator=(psVar10, &local_58);
                                local_58.~shared_ptr();
                                iVar14 = 8;
                                if (cVar4 != '\0') {
                                    iVar14 = 1;
                                }
                                this = (world*)this;
                            LAB_10030998c:
                                uVar16 = local_38;
                            }
                            if (iVar14 == 8) {
                                lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                *(undefined4*)(lVar7 + 344) = 0;
                                lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                if (*(int*)(lVar7 + 156) < 1)
                                    goto LAB_100309a20;
                                uVar16 = 0;
                                do {
                                    lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                    puVar13 = (uint*)eastl::vector<
                                        int,
                                        eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::
                                    operator[](
                                        (vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true,
                                                                                   eastl::allocator>>*)(lVar7 + 280),
                                        uVar16);
                                    uVar6 = *puVar13;
                                    lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                    *(uint*)(lVar7 + 344) = *(uint*)(lVar7 + 344) | uVar6;
                                    uVar16 = uVar16 + 1;
                                    lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                } while ((long)uVar16 < (long)*(int*)(lVar7 + 156));
                                iVar14 = 0;
                                uVar16 = local_38;
                            }
                            uVar15 = (uint)uVar16;
                            if (iVar14 != 0)
                                goto LAB_100309a3e;
                        } else {
                        LAB_100309a20:
                        }
                        uVar15 = (uint)uVar16;
                        uVar5 = (int)local_48 + 1;
                    } while ((int)local_48 < *(int*)&param_1->field_64);
                }
                iVar14 = 5;
            LAB_100309a3e:
            } while ((iVar14 == 5) && (uVar6 = uVar15 + 1, (int)uVar15 < *(int*)&param_1->field_56));
        }
        return;
    code_r0x000100309824:
        uVar16 = uVar16 + 1;
        lVar7 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
        if ((long)*(int*)(lVar7 + 156) <= (long)uVar16)
            goto LAB_10030998c;
        goto LAB_100309800;
    }

    // 0x100309a80, 160 bytes, placed by class name
    // world::MoveDecor(int, int, int, int)
    void world::MoveDecor(int param_1, int param_2, int param_3, int param_4) {
        bool bVar1;
        int iVar2;
        shared_ptr* psVar3;
        long lVar4;
        int iVar5;

        psVar3 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        bVar1 = operator==(psVar3, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            lVar4 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar3);
            psVar3 = (shared_ptr*)(lVar4 + 96);
            bVar1 = operator==(psVar3, (_func_decltype_nullptr*)0);
            if (!bVar1) {
                lVar4 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)psVar3);
                iVar2 = *(int*)(lVar4 + 20) * param_4;
                iVar5 = iVar2 + 15;
                if (-1 < iVar2) {
                    iVar5 = iVar2;
                }
                lVar4 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)psVar3);
                *(int*)(lVar4 + 20) = iVar5 >> 4;
                lVar4 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)psVar3);
                iVar2 = param_4 * *(int*)(lVar4 + 24);
                iVar5 = iVar2 + 15;
                if (-1 < iVar2) {
                    iVar5 = iVar2;
                }
                lVar4 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)psVar3);
                *(int*)(lVar4 + 24) = iVar5 >> 4;
            }
        }
    }

    // 0x100309b20, 112 bytes, placed by class name
    // world::DelWall(int, int, int)
    void world::DelWall(int param_1, int param_2, int param_3) {
        shared_ptr* this_00;
        long lVar2;
        shared_ptr local_20;

        this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        if (!operator==(this_00, (_func_decltype_nullptr*)0)) {
            new (&local_20) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            shared_ptr<Wall>::operator=((shared_ptr<Wall>*)(lVar2 + 80), &local_20);
            local_20.~shared_ptr();
        }
    }

    // 0x100309be0, 112 bytes, placed by class name
    // world::DelDecor(int, int, int)
    void world::DelDecor(int param_1, int param_2, int param_3) {
        shared_ptr* this_00;
        long lVar2;
        shared_ptr local_20;

        this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        if (!operator==(this_00, (_func_decltype_nullptr*)0)) {
            new (&local_20) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            shared_ptr<Decor>::operator=((shared_ptr<Decor>*)(lVar2 + 96), &local_20);
            local_20.~shared_ptr();
        }
    }

    // 0x100309ca0, 224 bytes, placed by class name
    // world::DelLoc(int, int, int)
    void world::DelLoc(int param_1, int param_2, int param_3) {
        shared_ptr* this_00;
        long lVar3;
        shared_ptr<Sprite>* this_01;
        Sprite* pSVar4;
        ulong uVar5;

        this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        if ((!operator==(this_00, (_func_decltype_nullptr*)0)) &&
            (lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00), 0 < *(int*)(lVar3 + 156))) {
            uVar5 = 0;
            do {
                lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                this_01 = (shared_ptr<Sprite>*)eastl::vector<
                    shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<shared_ptr<Sprite>,
                            eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar3 + 160),
                    uVar5);
                lVar3 = shared_ptr<Sprite>::operator->(this_01);
                if (((MousePickingHelper::IsLocTypecode(*(longlong*)(lVar3 + 80)) != '\0') &&
                     (lVar3 = shared_ptr<Sprite>::operator->(this_01), *(int*)(lVar3 + 52) == param_2)) &&
                    (lVar3 = shared_ptr<Sprite>::operator->(this_01), *(int*)(lVar3 + 60) == param_3)) {
                    pSVar4 = (Sprite*)shared_ptr<Sprite>::operator*(this_01);
                    DelSprite(this, pSVar4);
                    return;
                }
                uVar5 = uVar5 + 1;
                lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            } while ((long)uVar5 < (long)*(int*)(lVar3 + 156));
        }
    }

    // 0x100309d80, 112 bytes, placed by class name
    // world::DelGroundDecor(int, int, int)
    void world::DelGroundDecor(int param_1, int param_2, int param_3) {
        shared_ptr* this_00;
        long lVar2;
        shared_ptr local_20;

        this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        if (!operator==(this_00, (_func_decltype_nullptr*)0)) {
            new (&local_20) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            shared_ptr<GroundDecor>::operator=((shared_ptr<GroundDecor>*)(lVar2 + 112), &local_20);
            local_20.~shared_ptr();
        }
    }

    // 0x100309e40, 112 bytes, placed by class name
    // world::DelObj(int, int, int)
    void world::DelObj(int param_1, int param_2, int param_3) {
        shared_ptr* this_00;
        long lVar2;
        shared_ptr local_20;

        this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        if (!operator==(this_00, (_func_decltype_nullptr*)0)) {
            new (&local_20) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            shared_ptr<GroundObject>::operator=((shared_ptr<GroundObject>*)(lVar2 + 128), &local_20);
            local_20.~shared_ptr();
        }
    }

    // 0x100309ef0, 192 bytes, placed by class name
    // world::ResetMapArea(int, int, int, int, int)
    void world::ResetMapArea(int param_1, int param_2, int param_3, int param_4, int param_5) {
        undefined4 in_register_00000014;
        undefined4 in_register_00000084;
        uint uVar1;
        ulong uVar2;
        shared_ptr local_58;
        undefined8 local_48;
        ulong local_40;
        int local_34;

        local_48 = CONCAT44(in_register_00000084, param_4);
        local_40 = CONCAT44(in_register_00000014, param_2);
        if (0 < param_3) {
            local_34 = param_3 + param_1;
            do {
                uVar2 = local_40 & 4294967295;
                if (0 < (int)local_48) {
                    do {
                        new (&local_58) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                        SetSquare(this, param_5, param_1, (int)uVar2, &local_58);
                        local_58.~shared_ptr();
                        uVar1 = (int)uVar2 + 1;
                        uVar2 = (ulong)uVar1;
                    } while ((int)uVar1 < param_4 + param_2);
                }
                param_1 = param_1 + 1;
            } while (param_1 < local_34);
        }
    }

    // 0x100309fb0, 224 bytes, placed by class name
    // world::ResetSprites(int, int, int, int)
    void world::ResetSprites(int param_1, int param_2, int param_3, int param_4) {
        shared_ptr* this_00;
        long lVar2;
        int iVar3;
        int iVar4;
        int iVar5;

        if (0 < field_21800) {
            iVar4 = 0;
            do {
                iVar3 = param_1;
                if (0 < param_3) {
                    do {
                        iVar5 = param_2;
                        if (0 < param_4) {
                            do {
                                this_00 = (shared_ptr*)GetSquare(this, iVar4, iVar3, iVar5);
                                if (operator!=(this_00, (_func_decltype_nullptr*)0)) {
                                    lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                                    *(undefined4*)(lVar2 + 156) = 0;
                                }
                                iVar5 = iVar5 + 1;
                            } while (iVar5 < param_4 + param_2);
                        }
                        iVar3 = iVar3 + 1;
                    } while (iVar3 < param_3 + param_1);
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 < field_21800);
        }
    }

    // 0x10030a090, 160 bytes, placed by class name
    // world::SetDrawDistance(int)
    void world::SetDrawDistance(int param_1) {
        char cVar1;
        int iVar2;
        vector<int, BucketAllocatorEASTL> local_28[24];

        iVar2 = eastl::min<jag::graphics::GraphicsQuality>(90);
        m_drawDistanceRange = eastl::max<int>(iVar2, 25);
        (**(code**)(*m_pix3D + 48))(m_pix3D, m_drawDistanceRange);
        cVar1 = m_visCalcParams.empty();
        if (cVar1 == '\0') {
            eastl::vector<int, BucketAllocatorEASTL>::vector(local_28, (vector*)&m_visCalcParams);
            ResetVisCalc(local_28, DAT_1016c61b8, DAT_1016c61bc, DAT_1016c61c0, DAT_1016c61c4);
            local_28->~vector_set();
        }
    }

    // 0x10030a130, 256 bytes, placed by class name
    // world::ResetVisCalc(eastl::vector<int, BucketAllocatorEASTL>, int, int, int, int)
    void world::ResetVisCalc(vector<unsigned int, eastl::allocator>* param_1, undefined4 param_2, undefined4 param_3,
                             int param_4, int param_5) {
        void* pvVar2;

        if (eastl::vector<unsigned int, eastl::allocator>::size(param_1) != 9) {
            /* WARNING: Subroutine does not return */
            LogAssert("baseY.size() == 9",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "World.cpp",
                      1367, (char*)0);
        }
        eastl::vector<int, BucketAllocatorEASTL>::operator=((vector<int, BucketAllocatorEASTL>*)&m_visCalcParams,
                                                            (vector*)param_1);
        m_xClip = 0;
        m_yClip = 0;
        m_xOrig = param_4 / 2;
        m_yOrig = param_5 / 2;
        DAT_1016c61b8 = param_2;
        DAT_1016c61bc = param_3;
        DAT_1016c61c0 = param_4;
        DAT_1016c61c4 = param_5;
        m_xClip2 = param_4;
        m_yClip2 = param_5;
        pvVar2 = (void*)m_visBackingDirty.data();
        _memset(pvVar2, 1, 8386816);
        pvVar2 = (void*)m_pvisBackingDirty.data();
        _memset(pvVar2, 1, 9644832);
    }

    // 0x10030a230, 96 bytes, placed by class name
    // world::GetWall(int, int, int) const
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* world::GetWall(int param_1, int param_2, int param_3) {
        shared_ptr* this;
        long lVar2;
        int in_ECX;
        undefined4 in_register_00000034;
        undefined4 in_register_0000003c;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* this_00;
        int in_R8D;

        this_00 = (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)CONCAT44(in_register_0000003c, param_1);
        this = (shared_ptr*)GetSquare((world*)CONCAT44(in_register_00000034, param_2), param_3, in_ECX, in_R8D);
        if (operator==(this, (_func_decltype_nullptr*)0)) {
            shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(this_00, (_func_decltype_nullptr*)0);
        } else {
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this);
            new (this_00) shared_ptr<Decor>((shared_ptr*)(lVar2 + 80));
        }
        return this_00;
    }

    // 0x10030a290, 96 bytes, placed by class name
    // world::GetDecor(int, int, int) const
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* world::GetDecor(int param_1, int param_2, int param_3) {
        shared_ptr* this;
        long lVar2;
        int in_ECX;
        undefined4 in_register_00000034;
        undefined4 in_register_0000003c;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* this_00;
        int in_R8D;

        this_00 = (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)CONCAT44(in_register_0000003c, param_1);
        this = (shared_ptr*)GetSquare((world*)CONCAT44(in_register_00000034, param_2), param_3, in_ECX, in_R8D);
        if (operator==(this, (_func_decltype_nullptr*)0)) {
            shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(this_00, (_func_decltype_nullptr*)0);
        } else {
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this);
            new (this_00) shared_ptr<Decor>((shared_ptr*)(lVar2 + 96));
        }
        return this_00;
    }

    // 0x10030a2f0, 96 bytes, placed by class name
    // world::GetGroundDecor(int, int, int) const
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* world::GetGroundDecor(int param_1, int param_2, int param_3) {
        shared_ptr* this;
        long lVar2;
        int in_ECX;
        undefined4 in_register_00000034;
        undefined4 in_register_0000003c;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* this_00;
        int in_R8D;

        this_00 = (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)CONCAT44(in_register_0000003c, param_1);
        this = (shared_ptr*)GetSquare((world*)CONCAT44(in_register_00000034, param_2), param_3, in_ECX, in_R8D);
        if (operator==(this, (_func_decltype_nullptr*)0)) {
            shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(this_00, (_func_decltype_nullptr*)0);
        } else {
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this);
            new (this_00) shared_ptr<Decor>((shared_ptr*)(lVar2 + 112));
        }
        return this_00;
    }

    // 0x10030a350, 256 bytes, placed by class name
    // world::GetScene(int, int, int) const
    shared_ptr<Decor>* world::GetScene(int param_1, int param_2, int param_3) {
        shared_ptr* this;
        long lVar3;
        shared_ptr* this_00;
        int in_ECX;
        ulong uVar4;
        undefined4 in_register_00000034;
        undefined4 in_register_0000003c;
        shared_ptr<Decor>* this_01;
        int in_R8D;

        this_01 = (shared_ptr<Decor>*)CONCAT44(in_register_0000003c, param_1);
        this = (shared_ptr*)GetSquare((world*)CONCAT44(in_register_00000034, param_2), param_3, in_ECX, in_R8D);
        if ((!operator==(this, (_func_decltype_nullptr*)0)) &&
            (lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this), 0 < *(int*)(lVar3 + 156))) {
            uVar4 = 0;
            do {
                lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this);
                this_00 = (shared_ptr*)eastl::vector<
                    shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<shared_ptr<Sprite>,
                            eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar3 + 160),
                    uVar4);
                lVar3 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)this_00);
                if (((MousePickingHelper::IsLocTypecode(*(longlong*)(lVar3 + 80)) != '\0') &&
                     (lVar3 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)this_00),
                      *(int*)(lVar3 + 52) == in_ECX)) &&
                    (lVar3 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)this_00),
                     *(int*)(lVar3 + 60) == in_R8D)) {
                    shared_ptr<Decor>::shared_ptr(this_01, this_00);
                    return this_01;
                }
                uVar4 = uVar4 + 1;
                lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this);
            } while ((long)uVar4 < (long)*(int*)(lVar3 + 156));
        }
        new (this_01) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return this_01;
    }

    // 0x10030a450, 112 bytes, placed by class name
    // world::GetGd(int, int, int) const
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* world::GetGd(int param_1, int param_2, int param_3) {
        bool bVar1;
        shared_ptr* this;
        long lVar2;
        int in_ECX;
        undefined4 in_register_00000034;
        undefined4 in_register_0000003c;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* this_00;
        int in_R8D;

        this_00 = (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)CONCAT44(in_register_0000003c, param_1);
        this = (shared_ptr*)GetSquare((world*)CONCAT44(in_register_00000034, param_2), param_3, in_ECX, in_R8D);
        bVar1 = operator==(this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this);
            bVar1 = operator==((shared_ptr*)(lVar2 + 112), (_func_decltype_nullptr*)0);
            if (!bVar1) {
                lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this);
                new (this_00) shared_ptr<Decor>((shared_ptr*)(lVar2 + 112));
                return this_00;
            }
        }
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(this_00, (_func_decltype_nullptr*)0);
        return this_00;
    }

    // 0x10030a4c0, 448 bytes, placed by class name
    // world::GetLocLayer(int, int, int, int) const
    Nullable<LocLayer>* world::GetLocLayer(int param_1, int param_2, int param_3, int param_4) {
        bool bVar1;
        int iVar2;
        shared_ptr* this;
        long lVar3;
        undefined4 in_register_00000034;
        undefined4 in_register_0000003c;
        int in_R8D;
        int in_R9D;
        Nullable<LocLayer>* pNVar4;
        shared_ptr local_50;
        int local_3c;
        Nullable<LocLayer>* local_38;

        local_3c = param_4;
        this = (shared_ptr*)GetSquare((world*)CONCAT44(in_register_00000034, param_2), param_3, param_4, in_R8D);
        bVar1 = operator!=(this, (_func_decltype_nullptr*)0);
        pNVar4 = (Nullable<LocLayer>*)CONCAT44(in_register_0000003c, param_1);
        if (bVar1) {
            local_38 = (Nullable<LocLayer>*)CONCAT44(in_register_0000003c, param_1);
            lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this);
            bVar1 = ((lVar3 + 96))->operator_cast_to_bool();
            if (bVar1) {
                lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this);
                lVar3 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)(lVar3 + 96));
                iVar2 = MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar3 + 64));
                pNVar4 = local_38;
                if (iVar2 == in_R9D) {
                    new (local_38) Nullable<bool>(true);
                    return pNVar4;
                }
            }
            lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this);
            bVar1 = ((lVar3 + 80))->operator_cast_to_bool();
            if (bVar1) {
                lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this);
                lVar3 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)(lVar3 + 80));
                iVar2 = MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar3 + 56));
                pNVar4 = local_38;
                if (iVar2 == in_R9D) {
                    new (local_38) Nullable<bool>(false);
                    return pNVar4;
                }
            }
            lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this);
            bVar1 = ((lVar3 + 112))->operator_cast_to_bool();
            if (bVar1) {
                lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this);
                lVar3 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)(lVar3 + 112));
                iVar2 = MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar3 + 32));
                pNVar4 = local_38;
                if (iVar2 == in_R9D) {
                    new (local_38) Nullable<bool>(true);
                    return pNVar4;
                }
            }
            GetScene((int)&local_50, param_2, param_3);
            bVar1 = shared_ptr::operator_cast_to_bool(&local_50);
            if (bVar1) {
                lVar3 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)&local_50);
                iVar2 = MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)(lVar3 + 80));
                if (iVar2 == in_R9D) {
                    new (local_38) Nullable<bool>(true);
                    local_50.~shared_ptr();
                    return local_38;
                }
            }
            local_50.~shared_ptr();
            pNVar4 = local_38;
        }
        Nullable<LocLayer>::Nullable(pNVar4);
        return pNVar4;
    }

    // 0x10030a690, 96 bytes, placed by class name
    // world::WallType(int, int, int)
    undefined8 world::WallType(int param_1, int param_2, int param_3) {
        bool bVar1;
        shared_ptr* this_00;
        long lVar2;
        undefined8 uVar3;

        this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        uVar3 = 0;
        bVar1 = operator==(this_00, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            uVar3 = 0;
            bVar1 = operator==((shared_ptr*)(lVar2 + 80), (_func_decltype_nullptr*)0);
            if (!bVar1) {
                lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                lVar2 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)(lVar2 + 80));
                uVar3 = *(undefined8*)(lVar2 + 56);
            }
        }
        return uVar3;
    }

    // 0x10030a6f0, 96 bytes, placed by class name
    // world::DecorType(int, int, int)
    undefined8 world::DecorType(int param_1, int param_2, int param_3) {
        bool bVar1;
        shared_ptr* this_00;
        long lVar2;
        undefined8 uVar3;

        this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        uVar3 = 0;
        bVar1 = operator==(this_00, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            uVar3 = 0;
            bVar1 = operator==((shared_ptr*)(lVar2 + 96), (_func_decltype_nullptr*)0);
            if (!bVar1) {
                lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                lVar2 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)(lVar2 + 96));
                uVar3 = *(undefined8*)(lVar2 + 64);
            }
        }
        return uVar3;
    }

    // 0x10030a750, 256 bytes, placed by class name
    // world::SceneType(int, int, int)
    undefined8 world::SceneType(int param_1, int param_2, int param_3) {
        bool bVar1;
        char cVar2;
        shared_ptr* this_00;
        long lVar3;
        shared_ptr<Sprite>* this_01;
        ulong uVar4;
        undefined8 local_40;

        this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        bVar1 = operator==(this_00, (_func_decltype_nullptr*)0);
        if ((!bVar1) &&
            (lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00), 0 < *(int*)(lVar3 + 156))) {
            uVar4 = 0;
            do {
                lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                this_01 = (shared_ptr<Sprite>*)eastl::vector<
                    shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<shared_ptr<Sprite>,
                            eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar3 + 160),
                    uVar4);
                lVar3 = shared_ptr<Sprite>::operator->(this_01);
                cVar2 = MousePickingHelper::IsLocTypecode(*(longlong*)(lVar3 + 80));
                bVar1 = true;
                if (((cVar2 != '\0') &&
                     (lVar3 = shared_ptr<Sprite>::operator->(this_01), *(int*)(lVar3 + 52) == param_2)) &&
                    (lVar3 = shared_ptr<Sprite>::operator->(this_01), *(int*)(lVar3 + 60) == param_3)) {
                    lVar3 = shared_ptr<Sprite>::operator->(this_01);
                    local_40 = *(undefined8*)(lVar3 + 80);
                    bVar1 = false;
                }
                if (!bVar1) {
                    return local_40;
                }
                uVar4 = uVar4 + 1;
                lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            } while ((long)uVar4 < (long)*(int*)(lVar3 + 156));
        }
        return 0;
    }

    // 0x10030a850, 96 bytes, placed by class name
    // world::GdType(int, int, int)
    undefined8 world::GdType(int param_1, int param_2, int param_3) {
        bool bVar1;
        shared_ptr* this_00;
        long lVar2;
        undefined8 uVar3;

        this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        uVar3 = 0;
        bVar1 = operator==(this_00, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            uVar3 = 0;
            bVar1 = operator==((shared_ptr*)(lVar2 + 112), (_func_decltype_nullptr*)0);
            if (!bVar1) {
                lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                lVar2 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)(lVar2 + 112));
                uVar3 = *(undefined8*)(lVar2 + 32);
            }
        }
        return uVar3;
    }

    // 0x10030a8b0, 400 bytes, placed by class name
    // world::TypeCode2(int, int, int, long long)
    ulong world::TypeCode2(int param_1, int param_2, int param_3, longlong param_4) {
        bool bVar1;
        shared_ptr* this_00;
        long lVar2;
        shared_ptr<Sprite>* psVar3;
        ulong uVar4;

        this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        bVar1 = operator==(this_00, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            bVar1 = operator!=((shared_ptr*)(lVar2 + 80), (_func_decltype_nullptr*)0);
            if (bVar1) {
                lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                lVar2 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)(lVar2 + 80));
                if (*(long*)(lVar2 + 56) == param_4) {
                    lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                    lVar2 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)(lVar2 + 80));
                    return (ulong) * (byte*)(lVar2 + 20);
                }
            }
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            bVar1 = operator!=((shared_ptr*)(lVar2 + 96), (_func_decltype_nullptr*)0);
            if (bVar1) {
                lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                lVar2 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)(lVar2 + 96));
                if (*(long*)(lVar2 + 64) == param_4) {
                    lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                    lVar2 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)(lVar2 + 96));
                    return (ulong) * (byte*)(lVar2 + 72);
                }
            }
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            bVar1 = operator!=((shared_ptr*)(lVar2 + 112), (_func_decltype_nullptr*)0);
            if (bVar1) {
                lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                lVar2 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)(lVar2 + 112));
                if (*(long*)(lVar2 + 32) == param_4) {
                    lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                    lVar2 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)(lVar2 + 112));
                    return (ulong) * (byte*)(lVar2 + 40);
                }
            }
            lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            if (0 < *(int*)(lVar2 + 156)) {
                uVar4 = 0;
                do {
                    lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                    psVar3 = (shared_ptr<Sprite>*)
                        eastl::vector<shared_ptr<Sprite>,
                                      eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)(lVar2 + 160),
                            uVar4);
                    lVar2 = shared_ptr<Sprite>::operator->(psVar3);
                    if (*(long*)(lVar2 + 80) == param_4) {
                        lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                        psVar3 = (shared_ptr<Sprite>*)
                            eastl::vector<shared_ptr<Sprite>,
                                          eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)(lVar2 +
                                                                                                               160),
                                uVar4);
                        lVar2 = shared_ptr<Sprite>::operator->(psVar3);
                        return (ulong) * (byte*)(lVar2 + 88);
                    }
                    uVar4 = uVar4 + 1;
                    lVar2 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                } while ((long)uVar4 < (long)*(int*)(lVar2 + 156));
            }
        }
        return 4294967295;
    }

    // 0x10030aa40, 128 bytes, placed by class name
    // world::SetTileHighlight(int, int, int, EntityHighlight const&)
    void world::SetTileHighlight(int param_1, int param_2, int param_3, EntityHighlight* param_4) {
        shared_ptr* this_00;
        long lVar3;

        if (IsValidSquare(this, param_1, param_2, param_3) != '\0') {
            this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
            if (shared_ptr::operator_cast_to_bool(this_00)) {
                lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
                *(undefined8*)(lVar3 + 144) = *(undefined8*)param_4;
                *(undefined2*)(lVar3 + 152) = *(undefined2*)&param_4->field_8;
            }
        }
    }

    // 0x10030ab10, 1392 bytes, placed by class name
    // world::ShareLight(int, int, int)
    void world::ShareLight(int param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;
        int iVar3;
        bool bVar4;
        char cVar5;
        uint uVar6;
        shared_ptr* psVar7;
        long lVar8;
        long* plVar9;
        ModelUnlit* pMVar10;
        ModelUnlit* pMVar11;
        ulong uVar12;
        undefined1 auVar13[16];
        shared_ptr local_90;
        shared_ptr local_80;
        shared_ptr local_70;
        shared_ptr* local_60;
        ulong local_50;
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
                                psVar7 = (shared_ptr*)GetSquare(this, (int)local_50, local_34, local_38);
                                bVar4 = operator!=(psVar7, (_func_decltype_nullptr*)0);
                                if (bVar4) {
                                    local_60 = psVar7;
                                    lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar7);
                                    psVar7 = (shared_ptr*)(lVar8 + 80);
                                    bVar4 = operator!=(psVar7, (_func_decltype_nullptr*)0);
                                    if (bVar4) {
                                        lVar8 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar7);
                                        bVar4 = ((lVar8 + 24))->operator_cast_to_bool();
                                        if (bVar4) {
                                            lVar8 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar7);
                                            plVar9 = (long*)shared_ptr<ModelSource>::operator->(
                                                (shared_ptr<ModelSource>*)(lVar8 + 24));
                                            cVar5 = (**(code**)(*plVar9 + 32))(plVar9);
                                            if (cVar5 != '\0') {
                                                auVar13 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar7);
                                                static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                                    &local_80, (jag*)(auVar13._0_8_ + 24), auVar13._8_8_);
                                                pMVar10 = (ModelUnlit*)shared_ptr<ModelUnlit>::operator*(
                                                    (shared_ptr<ModelUnlit>*)&local_80);
                                                ShareLightLoc((world*)this, pMVar10, (int)local_50, local_34, local_38,
                                                              1, 1);
                                                lVar8 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar7);
                                                bVar4 = ((lVar8 + 40))->operator_cast_to_bool();
                                                if (bVar4) {
                                                    lVar8 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar7);
                                                    plVar9 = (long*)shared_ptr<ModelSource>::operator->(
                                                        (shared_ptr<ModelSource>*)(lVar8 + 40));
                                                    cVar5 = (**(code**)(*plVar9 + 32))(plVar9);
                                                    if (cVar5 != '\0') {
                                                        auVar13 =
                                                            shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar7);
                                                        static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                                            &local_70, (jag*)(auVar13._0_8_ + 40), auVar13._8_8_);
                                                        pMVar10 = (ModelUnlit*)shared_ptr<ModelUnlit>::operator*(
                                                            (shared_ptr<ModelUnlit>*)&local_70);
                                                        ShareLightLoc((world*)this, pMVar10, (int)local_50, local_34,
                                                                      local_38, 1, 1);
                                                        pMVar10 = (ModelUnlit*)shared_ptr<ModelUnlit>::operator*(
                                                            (shared_ptr<ModelUnlit>*)&local_80);
                                                        pMVar11 = (ModelUnlit*)shared_ptr<ModelUnlit>::operator*(
                                                            (shared_ptr<ModelUnlit>*)&local_70);
                                                        ModelUnlit::ShareLight(pMVar10, pMVar11, 0, 0, 0, false);
                                                        plVar9 = (long*)shared_ptr<ModelUnlit>::operator->(
                                                            (shared_ptr<ModelUnlit>*)&local_70);
                                                        (**(code**)(*plVar9 + 80))(&local_90, plVar9, param_1, param_2,
                                                                                   param_3);
                                                        lVar8 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar7);
                                                        shared_ptr<ModelSource>::operator=(
                                                            (shared_ptr<ModelSource>*)(lVar8 + 40), &local_90);
                                                        local_90.~shared_ptr();
                                                        local_70.~shared_ptr();
                                                    }
                                                }
                                                plVar9 = (long*)shared_ptr<ModelUnlit>::operator->(
                                                    (shared_ptr<ModelUnlit>*)&local_80);
                                                (**(code**)(*plVar9 + 80))(&local_70, plVar9, param_1, param_2,
                                                                           param_3);
                                                lVar8 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar7);
                                                shared_ptr<ModelSource>::operator=(
                                                    (shared_ptr<ModelSource>*)(lVar8 + 24), &local_70);
                                                local_70.~shared_ptr();
                                                local_80.~shared_ptr();
                                            }
                                        }
                                    }
                                    psVar7 = local_60;
                                    lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)local_60);
                                    if (0 < *(int*)(lVar8 + 156)) {
                                        uVar12 = 0;
                                        do {
                                            lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar7);
                                            psVar7 = (shared_ptr*)eastl::vector<
                                                shared_ptr<Sprite>, eastl::fixed_vector_allocator<
                                                                        16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                                            operator[](
                                                (vector<shared_ptr<Sprite>,
                                                        eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)(lVar8 + 160),
                                                uVar12);
                                            bVar4 = operator!=(psVar7, (_func_decltype_nullptr*)0);
                                            if (bVar4) {
                                                lVar8 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar7);
                                                bVar4 = ((lVar8 + 32))->operator_cast_to_bool();
                                                if (bVar4) {
                                                    lVar8 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar7);
                                                    plVar9 = (long*)shared_ptr<ModelSource>::operator->(
                                                        (shared_ptr<ModelSource>*)(lVar8 + 32));
                                                    cVar5 = (**(code**)(*plVar9 + 32))(plVar9);
                                                    if (cVar5 != '\0') {
                                                        auVar13 =
                                                            shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar7);
                                                        static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                                            &local_80, (jag*)(auVar13._0_8_ + 32), auVar13._8_8_);
                                                        pMVar10 = (ModelUnlit*)shared_ptr<ModelUnlit>::operator*(
                                                            (shared_ptr<ModelUnlit>*)&local_80);
                                                        lVar8 =
                                                            shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar7);
                                                        iVar1 = *(int*)(lVar8 + 56);
                                                        lVar8 =
                                                            shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar7);
                                                        iVar2 = *(int*)(lVar8 + 52);
                                                        lVar8 =
                                                            shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar7);
                                                        iVar3 = *(int*)(lVar8 + 64);
                                                        lVar8 =
                                                            shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar7);
                                                        ShareLightLoc((world*)this, pMVar10, (int)local_50, local_34,
                                                                      local_38, (iVar1 - iVar2) + 1,
                                                                      (iVar3 - *(int*)(lVar8 + 60)) + 1);
                                                        plVar9 = (long*)shared_ptr<ModelUnlit>::operator->(
                                                            (shared_ptr<ModelUnlit>*)&local_80);
                                                        (**(code**)(*plVar9 + 80))(&local_70, plVar9, param_1, param_2,
                                                                                   param_3);
                                                        lVar8 =
                                                            shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar7);
                                                        shared_ptr<ModelSource>::operator=(
                                                            (shared_ptr<ModelSource>*)(lVar8 + 32), &local_70);
                                                        local_70.~shared_ptr();
                                                        local_80.~shared_ptr();
                                                    }
                                                }
                                            }
                                            psVar7 = local_60;
                                            uVar12 = uVar12 + 1;
                                            lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)local_60);
                                        } while ((long)uVar12 < (long)*(int*)(lVar8 + 156));
                                    }
                                    lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar7);
                                    psVar7 = (shared_ptr*)(lVar8 + 112);
                                    bVar4 = shared_ptr::operator_cast_to_bool(psVar7);
                                    this = (world*)this;
                                    if (bVar4) {
                                        lVar8 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)psVar7);
                                        bVar4 = ((lVar8 + 16))->operator_cast_to_bool();
                                        if (bVar4) {
                                            lVar8 =
                                                shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)psVar7);
                                            plVar9 = (long*)shared_ptr<ModelSource>::operator->(
                                                (shared_ptr<ModelSource>*)(lVar8 + 16));
                                            cVar5 = (**(code**)(*plVar9 + 32))(plVar9);
                                            if (cVar5 != '\0') {
                                                auVar13 = shared_ptr<GroundDecor>::operator->(
                                                    (shared_ptr<GroundDecor>*)psVar7);
                                                static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                                    &local_80, (jag*)(auVar13._0_8_ + 16), auVar13._8_8_);
                                                pMVar10 = (ModelUnlit*)shared_ptr<ModelUnlit>::operator*(
                                                    (shared_ptr<ModelUnlit>*)&local_80);
                                                ShareLightGd(this, pMVar10, (int)local_50, local_34, local_38);
                                                plVar9 = (long*)shared_ptr<ModelUnlit>::operator->(
                                                    (shared_ptr<ModelUnlit>*)&local_80);
                                                (**(code**)(*plVar9 + 80))(&local_70, plVar9, param_1, param_2,
                                                                           param_3);
                                                lVar8 = shared_ptr<GroundDecor>::operator->(
                                                    (shared_ptr<GroundDecor>*)psVar7);
                                                shared_ptr<ModelSource>::operator=(
                                                    (shared_ptr<ModelSource>*)(lVar8 + 16), &local_70);
                                                local_70.~shared_ptr();
                                                local_80.~shared_ptr();
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
                uVar6 = (int)local_50 + 1;
                local_50 = (ulong)uVar6;
            } while ((int)uVar6 < field_21800);
        }
    }

    // 0x10030b080, 1216 bytes, placed by class name
    // world::ShareLightLoc(ModelUnlit&, int, int, int, int, int)
    void world::ShareLightLoc(ModelUnlit* param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        int iVar1;
        int iVar2;
        bool bVar3;
        char cVar4;
        int iVar5;
        uint uVar6;
        shared_ptr* psVar7;
        long lVar8;
        long* plVar9;
        ModelUnlit* pMVar10;
        undefined4 in_register_0000000c;
        undefined4 in_register_00000014;
        undefined4 in_register_00000084;
        undefined4 in_register_0000008c;
        uint uVar11;
        ulong uVar12;
        undefined1 auVar13[16];
        CoordGrid local_d8;
        ulong local_c8;
        ModelUnlit* local_c0;
        undefined8 local_b8;
        shared_ptr* local_a8;
        int local_9c;
        int local_98;
        uint local_94;
        int local_90;
        int local_8c;
        ulong local_88;
        ulong local_78;
        CoordGrid local_70;
        int local_60;
        int local_58;
        int local_54;
        undefined8 local_50;
        int local_48;
        int local_44;
        ulong local_40;
        undefined4 local_38;
        byte local_31;

        local_b8 = CONCAT44(in_register_0000008c, param_5);
        local_50 = CONCAT44(in_register_00000084, param_4);
        local_88 = CONCAT44(in_register_00000014, param_2);
        local_40 = CONCAT44(in_register_0000000c, param_3);
        local_44 = param_5 + param_3;
        local_94 = param_4 - 1;
        local_60 = param_6 + param_4;
        local_90 = param_5 * -64 + 64;
        local_54 = param_6 * -64 + 64;
        local_38 = (undefined4)CONCAT71((uint7)(uint3)((uint)(param_6 * 64) >> 8), 1);
        local_78 = local_40;
        do {
            if ((int)local_88 != field_21800) {
                local_8c = (int)local_40;
                local_40 = local_40 & 4294967295;
                if (local_8c <= local_44) {
                    do {
                        iVar5 = (int)local_40;
                        if (((-1 < iVar5) && (iVar5 < field_21804)) && (-2 < param_6)) {
                            local_31 = iVar5 < local_44 & (byte)local_38;
                            local_58 = (iVar5 - (int)local_78) * 128 + local_90;
                            uVar6 = local_94;
                            do {
                                uVar11 = uVar6;
                                if (((-1 < (int)uVar6) && ((int)uVar6 < field_21808)) &&
                                    ((((int)uVar6 < local_60 & local_31) != 1 ||
                                      (((int)uVar6 < (int)local_50 && ((int)local_40 != (int)local_78)))))) {
                                    psVar7 = (shared_ptr*)GetSquare(this, (int)local_88, (int)local_40, uVar6);
                                    bVar3 = operator==(psVar7, (_func_decltype_nullptr*)0);
                                    if (!bVar3) {
                                        new (&local_70) rs2lib::CoordGrid((int)local_88, (int)local_40, uVar6);
                                        new (&local_d8) rs2lib::CoordGrid(param_2, (int)local_78, (int)local_50);
                                        local_48 = GetTileAvgYDif(this, &local_70, &local_d8);
                                        local_a8 = psVar7;
                                        lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar7);
                                        psVar7 = (shared_ptr*)(lVar8 + 80);
                                        bVar3 = operator!=(psVar7, (_func_decltype_nullptr*)0);
                                        if (bVar3) {
                                            lVar8 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar7);
                                            bVar3 = ((lVar8 + 24))->operator_cast_to_bool();
                                            if (bVar3) {
                                                lVar8 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar7);
                                                plVar9 = (long*)shared_ptr<ModelSource>::operator->(
                                                    (shared_ptr<ModelSource>*)(lVar8 + 24));
                                                cVar4 = (**(code**)(*plVar9 + 32))(plVar9);
                                                if (cVar4 != '\0') {
                                                    auVar13 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar7);
                                                    static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                                        (shared_ptr*)&local_70, (jag*)(auVar13._0_8_ + 24),
                                                        auVar13._8_8_);
                                                    pMVar10 = (ModelUnlit*)shared_ptr<ModelUnlit>::operator*(
                                                        (shared_ptr<ModelUnlit>*)&local_70);
                                                    ModelUnlit::ShareLight(param_1, pMVar10, local_58, local_48,
                                                                           (uVar6 - (int)local_50) * 128 + local_54,
                                                                           (bool)((byte)local_38 & 1));
                                                    local_70.~shared_ptr();
                                                }
                                            }
                                            lVar8 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar7);
                                            bVar3 = ((lVar8 + 40))->operator_cast_to_bool();
                                            if (bVar3) {
                                                lVar8 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar7);
                                                plVar9 = (long*)shared_ptr<ModelSource>::operator->(
                                                    (shared_ptr<ModelSource>*)(lVar8 + 40));
                                                cVar4 = (**(code**)(*plVar9 + 32))(plVar9);
                                                if (cVar4 != '\0') {
                                                    auVar13 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar7);
                                                    static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                                        (shared_ptr*)&local_70, (jag*)(auVar13._0_8_ + 40),
                                                        auVar13._8_8_);
                                                    pMVar10 = (ModelUnlit*)shared_ptr<ModelUnlit>::operator*(
                                                        (shared_ptr<ModelUnlit>*)&local_70);
                                                    ModelUnlit::ShareLight(param_1, pMVar10, local_58, local_48,
                                                                           (uVar6 - (int)local_50) * 128 + local_54,
                                                                           (bool)((byte)local_38 & 1));
                                                    local_70.~shared_ptr();
                                                }
                                            }
                                        }
                                        psVar7 = local_a8;
                                        lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)local_a8);
                                        if (0 < *(int*)(lVar8 + 156)) {
                                            uVar12 = 0;
                                            local_c8 = (ulong)uVar6;
                                            do {
                                                lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar7);
                                                psVar7 = (shared_ptr*)eastl::vector<
                                                    shared_ptr<Sprite>,
                                                    eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                  eastl::allocator>>::
                                                operator[](
                                                    (vector<shared_ptr<Sprite>,
                                                            eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)(lVar8 +
                                                                                                               160),
                                                    uVar12);
                                                bVar3 = operator!=(psVar7, (_func_decltype_nullptr*)0);
                                                if (bVar3) {
                                                    lVar8 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar7);
                                                    bVar3 = ((lVar8 + 32))->operator_cast_to_bool();
                                                    if (bVar3) {
                                                        lVar8 =
                                                            shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar7);
                                                        plVar9 = (long*)shared_ptr<ModelSource>::operator->(
                                                            (shared_ptr<ModelSource>*)(lVar8 + 32));
                                                        cVar4 = (**(code**)(*plVar9 + 32))(plVar9);
                                                        if (cVar4 != '\0') {
                                                            auVar13 = shared_ptr<Sprite>::operator->(
                                                                (shared_ptr<Sprite>*)psVar7);
                                                            static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                                                (shared_ptr*)&local_70, (jag*)(auVar13._0_8_ + 32),
                                                                auVar13._8_8_);
                                                            lVar8 = shared_ptr<Sprite>::operator->(
                                                                (shared_ptr<Sprite>*)psVar7);
                                                            iVar5 = *(int*)(lVar8 + 56);
                                                            lVar8 = shared_ptr<Sprite>::operator->(
                                                                (shared_ptr<Sprite>*)psVar7);
                                                            local_9c = *(int*)(lVar8 + 52);
                                                            lVar8 = shared_ptr<Sprite>::operator->(
                                                                (shared_ptr<Sprite>*)psVar7);
                                                            iVar1 = *(int*)(lVar8 + 64);
                                                            lVar8 = shared_ptr<Sprite>::operator->(
                                                                (shared_ptr<Sprite>*)psVar7);
                                                            local_98 = *(int*)(lVar8 + 60);
                                                            local_c0 = (ModelUnlit*)shared_ptr<ModelUnlit>::operator*(
                                                                (shared_ptr<ModelUnlit>*)&local_70);
                                                            lVar8 = shared_ptr<Sprite>::operator->(
                                                                (shared_ptr<Sprite>*)psVar7);
                                                            iVar2 = *(int*)(lVar8 + 52);
                                                            lVar8 = shared_ptr<Sprite>::operator->(
                                                                (shared_ptr<Sprite>*)psVar7);
                                                            ModelUnlit::ShareLight(
                                                                param_1, local_c0,
                                                                (iVar5 - (local_9c + (int)local_b8)) * 64 +
                                                                    (iVar2 - (int)local_78) * 128 + 64,
                                                                local_48,
                                                                (*(int*)(lVar8 + 60) - (int)local_50) * 128 +
                                                                    (iVar1 - (local_98 + param_6)) * 64 + 64,
                                                                (bool)((byte)local_38 & 1));
                                                            local_70.~shared_ptr();
                                                            this = (world*)this;
                                                        }
                                                    }
                                                }
                                                psVar7 = local_a8;
                                                uVar12 = uVar12 + 1;
                                                lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)local_a8);
                                                uVar11 = (uint)local_c8;
                                            } while ((long)uVar12 < (long)*(int*)(lVar8 + 156));
                                        }
                                    }
                                }
                                uVar6 = uVar11 + 1;
                            } while ((int)uVar11 < local_60);
                        }
                        iVar5 = (int)local_40;
                        local_40 = (ulong)(iVar5 + 1);
                    } while (iVar5 != local_44);
                }
                local_40 = (ulong)(local_8c - 1);
                local_38 = 0;
            }
            iVar5 = (int)local_88;
            local_88 = (ulong)(iVar5 + 1);
        } while (iVar5 <= param_2);
    }

    // 0x10030b540, 496 bytes, placed by class name
    // world::ShareLightGd(ModelUnlit&, int, int, int)
    void world::ShareLightGd(ModelUnlit* param_1, int param_2, int param_3, int param_4) {
        bool bVar1;
        char cVar2;
        long lVar3;
        long* plVar4;
        ModelUnlit* pMVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        undefined1 auVar9[16];
        CoordGrid local_80;
        CoordGrid local_68;
        int local_58;
        int local_54;
        shared_ptr* local_50;
        int local_34;

        local_54 = param_4 + -2;
        local_34 = param_3;
        do {
            if ((-1 < param_3) && (param_3 < field_21804)) {
                local_58 = (param_3 - local_34) * 128;
                iVar8 = -128;
                iVar7 = local_54;
                do {
                    iVar6 = iVar7 + 1;
                    if (((-1 < iVar6) && (iVar6 < field_21808)) && ((local_34 < param_3 || (param_4 < iVar6)))) {
                        local_50 = (shared_ptr*)GetSquare((world*)this, param_2, param_3, iVar6);
                        bVar1 = operator==(local_50, (_func_decltype_nullptr*)0);
                        this = (world*)this;
                        if (!bVar1) {
                            lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)local_50);
                            bVar1 = operator==((shared_ptr*)(lVar3 + 112), (_func_decltype_nullptr*)0);
                            this = (world*)this;
                            if (!bVar1) {
                                lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)local_50);
                                lVar3 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)(lVar3 + 112));
                                bVar1 = ((lVar3 + 16))->operator_cast_to_bool();
                                this = (world*)this;
                                if (bVar1) {
                                    lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)local_50);
                                    lVar3 =
                                        shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)(lVar3 + 112));
                                    plVar4 = (long*)shared_ptr<ModelSource>::operator->(
                                        (shared_ptr<ModelSource>*)(lVar3 + 16));
                                    cVar2 = (**(code**)(*plVar4 + 32))(plVar4);
                                    this = (world*)this;
                                    if (cVar2 != '\0') {
                                        new (&local_68) rs2lib::CoordGrid(param_2, param_3, iVar6);
                                        new (&local_80) rs2lib::CoordGrid(param_2, local_34, param_4);
                                        iVar6 = GetTileAvgYDif((world*)this, &local_68, &local_80);
                                        lVar3 = shared_ptr<Square>::operator->((shared_ptr<Square>*)local_50);
                                        auVar9 = shared_ptr<GroundDecor>::operator->(
                                            (shared_ptr<GroundDecor>*)(lVar3 + 112));
                                        static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                            (shared_ptr*)&local_68, (jag*)(auVar9._0_8_ + 16), auVar9._8_8_);
                                        pMVar5 = (ModelUnlit*)shared_ptr<ModelUnlit>::operator*(
                                            (shared_ptr<ModelUnlit>*)&local_68);
                                        ModelUnlit::ShareLight(param_1, pMVar5, local_58, iVar6, iVar8, true);
                                        local_68.~shared_ptr();
                                        this = (world*)this;
                                    }
                                }
                            }
                        }
                    }
                    iVar7 = iVar7 + 1;
                    iVar8 = iVar8 + 128;
                } while (iVar7 <= param_4);
            }
            bVar1 = param_3 <= local_34;
            param_3 = param_3 + 1;
        } while (bVar1);
    }

    // 0x10030b730, 64 bytes, placed by class name
    // world::GetTileAvgYDif(rs2lib::CoordGrid const&, rs2lib::CoordGrid const&)
    int world::GetTileAvgYDif(CoordGrid* param_1, CoordGrid* param_2) {
        int iVar1;
        int iVar2;

        iVar1 = GetTileAvgY(this, param_1);
        iVar2 = GetTileAvgY(this, param_2);
        return iVar1 - iVar2;
    }

    // 0x10030b770, 192 bytes, placed by class name
    // world::GetTileAvgY(rs2lib::CoordGrid const&)
    int world::GetTileAvgY(CoordGrid* param_1) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;

        iVar1 = param_1->GetX();
        iVar2 = param_1->GetZ();
        iVar3 = param_1->GetPos();
        iVar4 = GetGroundHeight(this, iVar1, iVar2, iVar3);
        iVar5 = GetGroundHeight(this, iVar1, iVar2 + 1, iVar3);
        iVar6 = GetGroundHeight(this, iVar1, iVar2, iVar3 + 1);
        iVar6 = iVar6 + iVar5 + iVar4;
        iVar1 = GetGroundHeight(this, iVar1, iVar2 + 1, iVar3 + 1);
        iVar2 = iVar6 + iVar1;
        iVar1 = iVar1 + 3 + iVar6;
        if (-1 < iVar2) {
            iVar1 = iVar2;
        }
        return iVar1 >> 2;
    }

    // 0x10030b830, 784 bytes, placed by class name
    // world::Render2DGround(SharedArray<unsigned int>&, int, int, int, int, int, int)
    void world::Render2DGround(SharedArray* param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                               int param_7) {
        uint uVar1;
        uint uVar2;
        bool bVar3;
        int iVar4;
        shared_ptr* psVar5;
        long lVar6;
        int* piVar7;
        array<int, 16ul>* this_00;
        array<int, 16ul>* this_01;
        uint* puVar8;
        int iVar9;
        uint uVar10;
        ulong uVar11;
        float fVar12;
        float fVar13;
        long local_50;

        psVar5 = (shared_ptr*)GetSquare(this, param_5, param_6, param_7);
        bVar3 = operator==(psVar5, (_func_decltype_nullptr*)0);
        if (!bVar3) {
            lVar6 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar5);
            bVar3 = operator!=((shared_ptr*)(lVar6 + 48), (_func_decltype_nullptr*)0);
            if (bVar3) {
                piVar7 = (int*)shared_ptr<QuickGround>::operator->((shared_ptr<QuickGround>*)(lVar6 + 48));
                iVar9 = *piVar7;
                if ((iVar9 != 0) && (0 < param_4)) {
                    lVar6 = (long)param_2;
                    iVar4 = 0;
                    do {
                        uVar11 = 0;
                        do {
                            piVar7 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                 lVar6 + uVar11);
                            *piVar7 = iVar9;
                            uVar11 = uVar11 + 1;
                        } while ((uint)param_4 != uVar11);
                        lVar6 = lVar6 + param_3;
                        iVar4 = iVar4 + 1;
                    } while (iVar4 != param_4);
                }
            } else {
                lVar6 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar5);
                psVar5 = (shared_ptr*)(lVar6 + 64);
                bVar3 = operator==(psVar5, (_func_decltype_nullptr*)0);
                if (!bVar3) {
                    lVar6 = shared_ptr<Ground>::operator->((shared_ptr<Ground>*)psVar5);
                    iVar9 = *(int*)(lVar6 + 340);
                    lVar6 = shared_ptr<Ground>::operator->((shared_ptr<Ground>*)psVar5);
                    iVar4 = *(int*)(lVar6 + 344);
                    lVar6 = shared_ptr<Ground>::operator->((shared_ptr<Ground>*)psVar5);
                    uVar1 = *(uint*)(lVar6 + 348);
                    lVar6 = shared_ptr<Ground>::operator->((shared_ptr<Ground>*)psVar5);
                    uVar2 = *(uint*)(lVar6 + 352);
                    this_00 = (array<int, 16ul>*)std::array<std::array<int, 16ul>, 13ul>::operator[]((long)iVar9);
                    this_01 = (array<int, 16ul>*)std::array<std::array<int, 16ul>, 4ul>::operator[]((long)iVar4);
                    fVar13 = 4.0 / (float)param_4;
                    if ((uVar1 & 16777215) == 0) {
                        if (0 < param_4) {
                            local_50 = (long)param_2;
                            iVar9 = 0;
                            do {
                                fVar12 = (float)floor((float)iVar9 * fVar13);
                                fVar12 = fVar12 * 4.0;
                                uVar11 = 0;
                                do {
                                    piVar7 = (int*)std::array<int, 16ul>::operator[](this_01, (long)(int)fVar12);
                                    piVar7 = (int*)std::array<int, 16ul>::operator[](this_00, (long)*piVar7);
                                    if (*piVar7 != 0) {
                                        puVar8 = (uint*)SharedArray<unsigned int>::operator[](
                                            (SharedArray<unsigned int>*)param_1, local_50 + uVar11);
                                        *puVar8 = uVar2;
                                    }
                                    fVar12 = fVar12 + fVar13;
                                    uVar11 = uVar11 + 1;
                                } while ((uint)param_4 != uVar11);
                                local_50 = local_50 + param_3;
                                iVar9 = iVar9 + 1;
                            } while (iVar9 != param_4);
                        }
                    } else if (0 < param_4) {
                        lVar6 = (long)param_2;
                        iVar9 = 0;
                        do {
                            fVar12 = (float)floor((float)iVar9 * fVar13);
                            fVar12 = fVar12 * 4.0;
                            uVar11 = 0;
                            do {
                                piVar7 = (int*)std::array<int, 16ul>::operator[](this_01, (long)(int)fVar12);
                                piVar7 = (int*)std::array<int, 16ul>::operator[](this_00, (long)*piVar7);
                                uVar10 = uVar2;
                                if (*piVar7 == 0) {
                                    uVar10 = uVar1;
                                }
                                puVar8 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar6 + uVar11);
                                *puVar8 = uVar10;
                                fVar12 = fVar12 + fVar13;
                                uVar11 = uVar11 + 1;
                            } while ((uint)param_4 != uVar11);
                            lVar6 = lVar6 + param_3;
                            iVar9 = iVar9 + 1;
                        } while (iVar9 != param_4);
                    }
                }
            }
        }
    }

    // 0x10030bc30, 496 bytes, placed by class name
    // world::GetTileVisibility(int, int)
    void world::GetTileVisibility(int param_1, int param_2) {
        bool bVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        bool bVar8;
        int iVar9;

        cVar2 = GetTileVisDirtyAt(m_cameraAngleXSlice, m_cameraAngleYSlice, param_1, param_2);
        if (cVar2 == '\0') {
            GetTileVisDataAt(m_cameraAngleXSlice, m_cameraAngleYSlice, param_1, param_2);
        } else {
            bVar8 = false;
            SetTileVisDirtyAt(m_cameraAngleXSlice, m_cameraAngleYSlice, param_1, param_2, false);
            iVar3 = -1;
            do {
                iVar6 = param_1 + 1 + iVar3;
                iVar7 = 0;
                do {
                    iVar5 = param_2 + iVar7;
                    cVar2 = GetPointVisibility(m_cameraAngleXSlice, m_cameraAngleYSlice, iVar6, iVar5);
                    iVar9 = 2;
                    bVar1 = true;
                    if (((cVar2 != '\0') ||
                         (iVar4 = (int)((ulong)((long)(m_cameraAngleYSlice + 1) * -2078209981) >> 32) +
                                  m_cameraAngleYSlice + 1,
                          cVar2 = GetPointVisibility(m_cameraAngleXSlice,
                                                     m_cameraAngleYSlice + ((iVar4 >> 4) - (iVar4 >> 31)) * -31 + 1,
                                                     iVar6, iVar5),
                          cVar2 != '\0')) ||
                        (cVar2 = GetPointVisibility(m_cameraAngleXSlice + 1, m_cameraAngleYSlice, iVar6, iVar5),
                         cVar2 != '\0'))
                        goto LAB_10030bca3;
                    iVar4 =
                        (int)((ulong)((long)(m_cameraAngleYSlice + 1) * -2078209981) >> 32) + m_cameraAngleYSlice + 1;
                    cVar2 = GetPointVisibility(m_cameraAngleXSlice + 1,
                                               m_cameraAngleYSlice + ((iVar4 >> 4) - (iVar4 >> 31)) * -31 + 1, iVar6,
                                               iVar5);
                    if (cVar2 != '\0')
                        goto LAB_10030bca3;
                    iVar7 = iVar7 + 1;
                } while (iVar7 != 3);
                iVar9 = iVar3;
                bVar1 = bVar8;
            LAB_10030bca3:
                bVar8 = bVar1;
                iVar3 = iVar9 + 1;
            } while (iVar9 < 1);
            SetTileVisDataAt(m_cameraAngleXSlice, m_cameraAngleYSlice, param_1, param_2, bVar8);
        }
    }

    // 0x10030be80, 400 bytes, placed by class name
    // world::GetPointVisibility(int, int, int, int)
    ulong world::GetPointVisibility(int param_1, int param_2, int param_3, int param_4) {
        bool bVar1;
        uint uVar3;
        int* piVar4;
        ulong uVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;

        if (GetPointVisDirtyAt(param_1, param_2, param_3, param_4) == '\0') {
            uVar5 = GetPointVisDataAt(param_1, param_2, param_3, param_4);
        } else {
            SetPointVisDirtyAt(param_1, param_2, param_3, param_4, false);
            iVar8 = DAT_1016c61b8;
            uVar3 = -DAT_1016c61b8;
            uVar5 = (ulong)uVar3;
            bVar1 = DAT_1016c61bc < (int)uVar3;
            if ((int)uVar3 <= DAT_1016c61bc) {
                iVar6 = param_1 * 32 + 128;
                iVar7 = (~m_drawDistanceRange + param_3) * 128;
                iVar9 = (~m_drawDistanceRange + param_4) * 128;
                piVar4 = (int*)eastl::vector<int, BucketAllocatorEASTL>::operator[](
                    (vector<int, BucketAllocatorEASTL>*)&m_visCalcParams, (long)param_1);
                uVar5 = IsPointVisible(iVar7, *piVar4 - iVar8, iVar9, iVar6, param_2 << 6);
                if ((char)uVar5 == '\0') {
                    iVar8 = -iVar8;
                    do {
                        iVar8 = iVar8 + 128;
                        bVar1 = DAT_1016c61bc < iVar8;
                        if (DAT_1016c61bc < iVar8) {
                            if (!bVar1)
                                goto LAB_10030bfe8;
                            goto LAB_10030bfd5;
                        }
                        piVar4 = (int*)eastl::vector<int, BucketAllocatorEASTL>::operator[](
                            (vector<int, BucketAllocatorEASTL>*)&m_visCalcParams, (long)param_1);
                        uVar5 = IsPointVisible(iVar7, *piVar4 + iVar8, iVar9, iVar6, param_2 << 6);
                    } while ((char)uVar5 == '\0');
                }
                uVar5 = SetPointVisDataAt(param_1, param_2, param_3, param_4, true);
            }
            if (bVar1) {
            LAB_10030bfd5:
                uVar5 = SetPointVisDataAt(param_1, param_2, param_3, param_4, false);
            }
        }
    LAB_10030bfe8:
        return uVar5 & 18446744073709551361;
    }

    // 0x10030c090, 320 bytes, placed by class name
    // world::IsPointVisible(int, int, int, int, int)
    undefined4 world::IsPointVisible(int param_1, int param_2, int param_3, int param_4, int param_5) {
        int iVar1;
        int iVar2;
        array<int, 2048ul>* this;
        array<int, 2048ul>* this_00;
        int* piVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;

        this = (array<int, 2048ul>*)Pix3D::GetSinTable();
        this_00 = (array<int, 2048ul>*)Pix3D::GetCosTable();
        piVar3 = (int*)std::array<int, 2048ul>::operator[](this, (long)param_4);
        iVar7 = *piVar3;
        piVar3 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)param_4);
        iVar4 = *piVar3;
        piVar3 = (int*)std::array<int, 2048ul>::operator[](this, (long)param_5);
        iVar8 = *piVar3;
        piVar3 = (int*)std::array<int, 2048ul>::operator[](this_00, (long)param_5);
        iVar1 = *piVar3;
        iVar5 = iVar1 * param_3 - iVar8 * param_1 >> 16;
        iVar6 = iVar5 * iVar4 + iVar7 * param_2;
        if (3276799 < iVar6) {
            iVar6 = iVar6 >> 16;
            iVar2 = m_pix3D->GetRenderDepth();
            if (iVar6 <= iVar2) {
                iVar8 = iVar1 * param_1 + iVar8 * param_3;
                iVar7 = iVar4 * param_2 - iVar5 * iVar7;
                iVar4 = (int)((long)(CONCAT44(iVar8 >> 31, iVar8 >> 9) & 18446744073709551488) / (long)iVar6) + m_xOrig;
                iVar7 = (int)((long)(CONCAT44(iVar7 >> 31, iVar7 >> 9) & 18446744073709551488) / (long)iVar6) + m_yOrig;
                return CONCAT31((int3)((uint)iVar7 >> 8),
                                iVar7 <= m_yClip2 && (m_yClip <= iVar7 && (iVar4 <= m_xClip2 && m_xClip <= iVar4)));
            }
        }
        return 0;
    }

    // 0x10030c1f0, 16 bytes, placed by class name
    // world::SetMaxGroundPickingLevel(int)
    void world::SetMaxGroundPickingLevel(int param_1) {
        m_groundPickingLevel = param_1;
    }

    // 0x10030c200, 48 bytes, placed by class name
    // world::ClampPitchAngle(int)
    int world::ClampPitchAngle(int param_1) {
        int* piVar1;
        int* piVar2;
        int local_c;

        piVar2 = (int*)PTR_FOLLOW_CAMERA_LOWEST_RELATIVEANGLE_X_100ee6b38;
        local_c = param_1;
        piVar1 = std::max<int>(&local_c, (int*)PTR_FOLLOW_CAMERA_LOWEST_RELATIVEANGLE_X_100ee6b38);
        piVar2 = std::min<int>(piVar1, piVar2);
        return *piVar2;
    }

    // 0x10030c250, 112 bytes, placed by class name
    // world::RequestGroundCoordsForOp(int, int, int, bool)
    void world::RequestGroundCoordsForOp(int param_1, int param_2, int param_3, bool param_4) {
        if ((HasValidGroundOpToExecute() == '\0') || (param_4)) {
            m_click = 1;
            m_groundX = 4294967295;
            m_groundZ = 4294967295;
            m_clickLev = param_1;
            m_clickX = param_2;
            m_clickY = param_3;
            m_executeGroundOp = param_4;
        }
    }

    // 0x10030c2c0, 32 bytes, placed by class name
    // world::HasValidGroundOpToExecute()
    bool world::HasValidGroundOpToExecute() {
        return m_groundX != -1 && m_executeGroundOp != '\0';
    }

    // 0x10030c2e0, 16 bytes, placed by class name
    // world::RequestExecuteGroundOp()
    void world::RequestExecuteGroundOp() {
        m_executeGroundOp = 1;
    }

    // 0x10030c2f0, 32 bytes, placed by class name
    // world::ResetGroundOp()
    void world::ResetGroundOp() {
        m_groundX = 4294967295;
        m_executeGroundOp = 0;
    }

    // 0x10030c310, 288 bytes, placed by class name
    // world::RenderFollow(NXTWorldRenderer*, int, int, int, int, int, int, int, int)
    void world::RenderFollow(NXTWorldRenderer* param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                             int param_7, int param_8, int param_9) {
        array<int, 2048ul>* this_00;
        array<int, 2048ul>* this_01;
        int* piVar1;
        uint uVar2;
        int iVar3;
        uint uVar4;
        int iVar5;

        uVar4 = -param_6 & 2047;
        this_00 = (array<int, 2048ul>*)Pix3D::GetSinTable();
        this_01 = (array<int, 2048ul>*)Pix3D::GetCosTable();
        uVar2 = -param_5 & 2047;
        if (uVar2 == 0) {
            iVar5 = 0;
        } else {
            piVar1 = (int*)std::array<int, 2048ul>::operator[](this_00, (ulong)uVar2);
            iVar5 = *piVar1;
            piVar1 = (int*)std::array<int, 2048ul>::operator[](this_01, (ulong)uVar2);
            iVar5 = -(iVar5 * param_7) >> 16;
            param_7 = param_7 * *piVar1 >> 16;
        }
        if (uVar4 == 0) {
            iVar3 = 0;
        } else {
            piVar1 = (int*)std::array<int, 2048ul>::operator[](this_00, (ulong)uVar4);
            iVar3 = *piVar1;
            piVar1 = (int*)std::array<int, 2048ul>::operator[](this_01, (ulong)uVar4);
            iVar3 = iVar3 * param_7 >> 16;
            param_7 = param_7 * *piVar1 >> 16;
        }
        Render(this, param_1, param_2 - iVar3, param_3 - iVar5, param_4 - param_7, param_5, param_6, param_8, param_9);
    }

    // 0x10030c430, 1984 bytes, placed by class name
    // world::Render(NXTWorldRenderer*, int, int, int, int, int, int, int)
    void world::Render(NXTWorldRenderer* param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                       int param_7, int param_8) {
        bool bVar1;
        char cVar2;
        int iVar3;
        shared_ptr* psVar4;
        long lVar5;
        ulong uVar6;
        uint uVar7;
        undefined8 extraout_RDX;
        int iVar8;
        int iVar9;
        uint uVar10;
        uint uVar11;
        uint uVar12;
        CoordGrid CVar13;
        MousePickingHelper* local_68;
        uint local_60;
        ulong local_58;
        ulong local_50;
        shared_ptr* local_48;
        int local_3c;
        int local_38;
        byte local_31;

        if (g_usingRSeven == '\0') {
            local_50 = CONCAT44(local_50._4_4_, param_3);
            m_worldRenderer = param_1;
            m_modelLitRenderer = (*(code*)param_1->field_0[1])(param_1);
            CalcOcclude(this);
            m_fillLeft = 0;
            iVar9 = field_110120;
            if (iVar9 < field_21800) {
                do {
                    for (local_3c = m_minX; local_3c < m_maxX; local_3c = local_3c + 1) {
                        iVar8 = m_minZ;
                        if (m_minZ < m_maxZ) {
                            do {
                                while (true) {
                                    psVar4 = (shared_ptr*)GetSquare(this, iVar9, local_3c, iVar8);
                                    bVar1 = operator!=(psVar4, (_func_decltype_nullptr*)0);
                                    if (bVar1)
                                        break;
                                LAB_10030c5b7:
                                    iVar8 = iVar8 + 1;
                                    if (m_maxZ <= iVar8)
                                        goto LAB_10030c540;
                                }
                                lVar5 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar4);
                                if (*(int*)(lVar5 + 348) <= param_7) {
                                    cVar2 = GetTileVisibility((local_3c - m_gx) + m_drawDistanceRange,
                                                              (m_drawDistanceRange - m_gz) + iVar8);
                                    if (cVar2 == '\0') {
                                        iVar3 = GetGroundHeight(this, iVar9, local_3c, iVar8);
                                        if (iVar3 - (int)local_50 < 2000)
                                            goto LAB_10030c5f8;
                                    }
                                    lVar5 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar4);
                                    *(undefined1*)(lVar5 + 352) = 1;
                                    lVar5 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar4);
                                    *(undefined1*)(lVar5 + 353) = 1;
                                    lVar5 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar4);
                                    iVar3 = *(int*)(lVar5 + 156);
                                    lVar5 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar4);
                                    *(bool*)(lVar5 + 354) = 0 < iVar3;
                                    m_fillLeft = m_fillLeft + 1;
                                    goto LAB_10030c5b7;
                                }
                            LAB_10030c5f8:
                                lVar5 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar4);
                                *(undefined1*)(lVar5 + 352) = 0;
                                lVar5 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar4);
                                *(undefined1*)(lVar5 + 353) = 0;
                                lVar5 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar4);
                                *(undefined4*)(lVar5 + 356) = 0;
                                iVar8 = iVar8 + 1;
                            } while (iVar8 < m_maxZ);
                        }
                    LAB_10030c540:
                    }
                    iVar9 = iVar9 + 1;
                } while (iVar9 < field_21800);
            }
            local_38 = field_110120;
            if (local_38 < field_21800) {
                do {
                    iVar9 = local_38;
                    if (m_drawDistanceRange < 0) {
                        iVar8 = 14;
                    LAB_10030c905:
                        if (iVar8 != 14)
                            goto LAB_10030c92f;
                    } else {
                        uVar7 = -m_drawDistanceRange;
                        do {
                            local_3c = m_gx + uVar7;
                            uVar12 = uVar7;
                            if ((local_3c < m_minX) && (m_maxX <= (int)(m_gx - uVar7))) {
                            LAB_10030c8c2:
                                iVar8 = 0;
                            } else {
                                uVar11 = (uint)(-1 < m_drawDistanceRange);
                                if (-1 < m_drawDistanceRange) {
                                    uVar11 = 1;
                                    iVar8 = m_drawDistanceRange;
                                    uVar10 = -m_drawDistanceRange;
                                    local_58 = (ulong)uVar7;
                                    local_50 = (ulong)(m_gx - uVar7);
                                    do {
                                        local_31 = (byte)uVar11;
                                        iVar9 = m_gz + uVar10;
                                        iVar3 = m_gz + iVar8;
                                        if (m_minX <= local_3c) {
                                            if (m_minZ <= iVar9) {
                                                local_48 = (shared_ptr*)GetSquare(this, local_38, local_3c, iVar9);
                                                bVar1 = operator!=(local_48, (_func_decltype_nullptr*)0);
                                                if ((bVar1) && (lVar5 = shared_ptr<Square>::operator->(
                                                                    (shared_ptr<Square>*)local_48),
                                                                *(char*)(lVar5 + 352) != '\0')) {
                                                    Fill(this, local_48, true, param_8);
                                                }
                                            }
                                            if (iVar3 < m_maxZ) {
                                                local_48 = (shared_ptr*)GetSquare(this, local_38, local_3c, iVar3);
                                                bVar1 = operator!=(local_48, (_func_decltype_nullptr*)0);
                                                if ((bVar1) && (lVar5 = shared_ptr<Square>::operator->(
                                                                    (shared_ptr<Square>*)local_48),
                                                                *(char*)(lVar5 + 352) != '\0')) {
                                                    Fill(this, local_48, true, param_8);
                                                }
                                            }
                                        }
                                        if ((int)local_50 < m_maxX) {
                                            if (m_minZ <= iVar9) {
                                                psVar4 = (shared_ptr*)GetSquare(this, local_38, (int)local_50, iVar9);
                                                bVar1 = operator!=(psVar4, (_func_decltype_nullptr*)0);
                                                if ((bVar1) && (lVar5 = shared_ptr<Square>::operator->(
                                                                    (shared_ptr<Square>*)psVar4),
                                                                *(char*)(lVar5 + 352) != '\0')) {
                                                    Fill(this, psVar4, true, param_8);
                                                }
                                            }
                                            if (iVar3 < m_maxZ) {
                                                psVar4 = (shared_ptr*)GetSquare(this, local_38, (int)local_50, iVar3);
                                                bVar1 = operator!=(psVar4, (_func_decltype_nullptr*)0);
                                                if ((bVar1) && (lVar5 = shared_ptr<Square>::operator->(
                                                                    (shared_ptr<Square>*)psVar4),
                                                                *(char*)(lVar5 + 352) != '\0')) {
                                                    Fill(this, psVar4, true, param_8);
                                                }
                                            }
                                        }
                                        uVar12 = (uint)local_58;
                                        iVar9 = local_38;
                                        if (m_fillLeft == 0) {
                                            m_click = 0;
                                            iVar8 = 1;
                                            if ((local_31 & 1) == 0)
                                                goto LAB_10030c8c2;
                                            goto LAB_10030c8c4;
                                        }
                                        uVar11 = uVar10 >> 31;
                                        bVar1 = iVar8 != 0;
                                        iVar8 = iVar8 + -1;
                                        uVar10 = uVar10 + 1;
                                    } while (bVar1);
                                }
                                iVar8 = 17;
                                if (uVar11 == 0)
                                    goto LAB_10030c8c2;
                            }
                        LAB_10030c8c4:
                            if (iVar8 != 0)
                                goto LAB_10030c905;
                            uVar7 = uVar12 + 1;
                        } while (uVar12 != 0);
                    }
                    local_38 = iVar9 + 1;
                } while (local_38 < field_21800);
            }
            iVar8 = 11;
        LAB_10030c92f:
            if (iVar8 == 11) {
                local_38 = field_110120;
                if (local_38 < field_21800) {
                    do {
                        if (m_drawDistanceRange < 0) {
                            iVar9 = 23;
                        LAB_10030cb85:
                            if (iVar9 != 23)
                                goto LAB_10030cbb5;
                        } else {
                            uVar7 = -m_drawDistanceRange;
                            do {
                                uVar6 = (ulong)uVar7;
                                local_3c = m_gx + uVar7;
                                if ((local_3c < m_minX) && (m_maxX <= (int)(m_gx - uVar7))) {
                                LAB_10030cb4f:
                                    iVar8 = (int)uVar6;
                                    iVar9 = 0;
                                } else {
                                    uVar12 = (uint)(-1 < m_drawDistanceRange);
                                    if (-1 < m_drawDistanceRange) {
                                        uVar12 = 1;
                                        iVar9 = m_drawDistanceRange;
                                        uVar11 = -m_drawDistanceRange;
                                        local_58 = uVar6;
                                        local_50 = (ulong)(m_gx - uVar7);
                                        do {
                                            local_31 = (byte)uVar12;
                                            iVar8 = m_gz + uVar11;
                                            iVar3 = m_gz + iVar9;
                                            if (m_minX <= local_3c) {
                                                if (m_minZ <= iVar8) {
                                                    local_48 = (shared_ptr*)GetSquare(this, local_38, local_3c, iVar8);
                                                    bVar1 = operator!=(local_48, (_func_decltype_nullptr*)0);
                                                    if ((bVar1) && (lVar5 = shared_ptr<Square>::operator->(
                                                                        (shared_ptr<Square>*)local_48),
                                                                    *(char*)(lVar5 + 352) != '\0')) {
                                                        Fill(this, local_48, false, param_8);
                                                    }
                                                }
                                                if (iVar3 < m_maxZ) {
                                                    local_48 = (shared_ptr*)GetSquare(this, local_38, local_3c, iVar3);
                                                    bVar1 = operator!=(local_48, (_func_decltype_nullptr*)0);
                                                    if ((bVar1) && (lVar5 = shared_ptr<Square>::operator->(
                                                                        (shared_ptr<Square>*)local_48),
                                                                    *(char*)(lVar5 + 352) != '\0')) {
                                                        Fill(this, local_48, false, param_8);
                                                    }
                                                }
                                            }
                                            if ((int)local_50 < m_maxX) {
                                                if (m_minZ <= iVar8) {
                                                    psVar4 =
                                                        (shared_ptr*)GetSquare(this, local_38, (int)local_50, iVar8);
                                                    bVar1 = operator!=(psVar4, (_func_decltype_nullptr*)0);
                                                    if ((bVar1) && (lVar5 = shared_ptr<Square>::operator->(
                                                                        (shared_ptr<Square>*)psVar4),
                                                                    *(char*)(lVar5 + 352) != '\0')) {
                                                        Fill(this, psVar4, false, param_8);
                                                    }
                                                }
                                                if (iVar3 < m_maxZ) {
                                                    psVar4 =
                                                        (shared_ptr*)GetSquare(this, local_38, (int)local_50, iVar3);
                                                    bVar1 = operator!=(psVar4, (_func_decltype_nullptr*)0);
                                                    if ((bVar1) && (lVar5 = shared_ptr<Square>::operator->(
                                                                        (shared_ptr<Square>*)psVar4),
                                                                    *(char*)(lVar5 + 352) != '\0')) {
                                                        Fill(this, psVar4, false, param_8);
                                                    }
                                                }
                                            }
                                            uVar6 = local_58;
                                            if (m_fillLeft == 0) {
                                                m_click = 0;
                                                iVar9 = 1;
                                                iVar8 = (int)local_58;
                                                if ((local_31 & 1) == 0)
                                                    goto LAB_10030cb4f;
                                                goto LAB_10030cb51;
                                            }
                                            uVar12 = uVar11 >> 31;
                                            bVar1 = iVar9 != 0;
                                            iVar9 = iVar9 + -1;
                                            uVar11 = uVar11 + 1;
                                        } while (bVar1);
                                    }
                                    iVar8 = (int)uVar6;
                                    iVar9 = 26;
                                    if (uVar12 == 0)
                                        goto LAB_10030cb4f;
                                }
                            LAB_10030cb51:
                                if (iVar9 != 0)
                                    goto LAB_10030cb85;
                                uVar7 = iVar8 + 1;
                            } while (iVar8 != 0);
                        }
                        local_38 = local_38 + 1;
                    } while (local_38 < field_21800);
                }
                iVar9 = 20;
            LAB_10030cbb5:
                if (iVar9 == 20) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "jagex3/dash3d/World.cpp",
                                    2055, "Render::Fill failure, some squares won\'t be rendered.");
                }
            }
        } else {
            UpdateMousePickingRSeven(this, param_2, param_3, param_4, param_5, param_6);
            m_modelLitRendererRt7->OnBeginWorldRender(this);
            SubmitAllModelsRt7(this, param_8);
            SubmitDebugPointLight(this, param_8);
            m_modelLitRendererRt7->OnEndWorldRender();
            new (&local_68) rs2lib::worldmap::LocationData(field_110120, param_2 >> 7, param_4 >> 7);
            CVar13.field_4 = 0;
            CVar13.field_0 = local_60;
            CVar13._8_8_ = extraout_RDX;
            local_68->SortPickingEntities(CVar13);
        }
    }

    // 0x10030cbf0, 464 bytes, placed by class name
    // world::PrepRender(int, int, int, int, int, int)
    void world::PrepRender(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        int iVar1;
        int iVar2;
        int iVar3;
        array<int, 2048ul>* this_00;
        array<int, 2048ul>* this_01;
        undefined4* puVar4;
        int iVar5;

        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        (&field_30072, 10000)->reserve();
        iVar5 = 0;
        if ((-1 < param_1) && (iVar1 = field_21804 * 128, iVar5 = iVar1 + -1, param_1 < iVar1)) {
            iVar5 = param_1;
        }
        iVar1 = 0;
        if ((-1 < param_3) && (iVar2 = field_21808 * 128, iVar1 = iVar2 + -1, param_3 < iVar2)) {
            iVar1 = param_3;
        }
        iVar3 = ClampPitchAngle(param_4);
        m_cycleNo = m_cycleNo + 1;
        this_00 = (array<int, 2048ul>*)Pix3D::GetSinTable();
        this_01 = (array<int, 2048ul>*)Pix3D::GetCosTable();
        puVar4 = (undefined4*)std::array<int, 2048ul>::operator[](this_00, (long)iVar3);
        m_cameraSinX = *puVar4;
        puVar4 = (undefined4*)std::array<int, 2048ul>::operator[](this_01, (long)iVar3);
        m_cameraCosX = *puVar4;
        puVar4 = (undefined4*)std::array<int, 2048ul>::operator[](this_00, (long)param_5);
        m_cameraSinY = *puVar4;
        puVar4 = (undefined4*)std::array<int, 2048ul>::operator[](this_01, (long)param_5);
        m_cameraCosY = *puVar4;
        iVar2 = iVar3 + -97;
        if (-1 < iVar3 + -128) {
            iVar2 = iVar3 + -128;
        }
        iVar3 = param_5 + 63;
        if (-1 < param_5) {
            iVar3 = param_5;
        }
        SetVisCalcCameraAngle(iVar2 >> 5, iVar3 >> 6);
        m_cx = iVar5;
        m_cy = param_2;
        m_cz = iVar1;
        iVar2 = iVar5 + 127;
        if (-1 < iVar5) {
            iVar2 = iVar5;
        }
        m_gx = iVar2 >> 7;
        iVar5 = iVar1 + 127;
        if (-1 < iVar1) {
            iVar5 = iVar1;
        }
        m_gz = iVar5 >> 7;
        m_maxLevel = param_6;
        m_minX = m_gx - m_drawDistanceRange;
        if (m_minX < 0) {
            m_minX = 0;
        }
        m_minZ = m_gz - m_drawDistanceRange;
        if (m_minZ < 0) {
            m_minZ = 0;
        }
        m_maxX = m_drawDistanceRange + m_gx;
        if (field_21804 < m_drawDistanceRange + m_gx) {
            m_maxX = field_21804;
        }
        m_maxZ = m_gz + m_drawDistanceRange;
        if (field_21808 < m_gz + m_drawDistanceRange) {
            m_maxZ = field_21808;
        }
    }

    // 0x10030ce20, 2960 bytes, placed by class name
    // world::SubmitAllModelsRt7(int)
    void world::SubmitAllModelsRt7(int param_1) {
        undefined1* puVar1;
        undefined1* this_00;
        int iVar2;
        int iVar3;
        int iVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        int iVar8;
        undefined8 uVar9;
        RSevenModelLitRenderer* pRVar10;
        bool bVar11;
        char cVar12;
        bool bVar13;
        uint uVar14;
        shared_ptr* psVar15;
        Square* this_01;
        long lVar16;
        uint* puVar17;
        undefined8 uVar18;
        int* piVar19;
        EntityHighlight* pEVar20;
        shared_ptr<Sprite>* this_02;
        int iVar21;
        undefined4 in_register_00000034;
        ulong uVar22;
        shared_ptr<Square>* this_03;
        undefined8 local_98;
        undefined2 local_90;
        shared_ptr<Square>* local_88;
        fixed_vector<long long, 10000ul, true, eastl::allocator>* local_80;
        int local_74;
        ulong local_70;
        RSevenModelLitRenderer* local_68;
        undefined8 local_60;
        Square* local_58;
        ulong local_50;
        ulong local_48;
        RSevenModelLitRenderer* local_40;
        RSevenModelLitRenderer* local_38;

        local_60 = CONCAT44(in_register_00000034, param_1);
        local_80 = (fixed_vector<long long, 10000ul, true, eastl::allocator>*)&field_30072;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        if (0 < field_21800) {
            local_50 = 0;
            do {
                if (0 < field_21804) {
                    local_74 = 0;
                    do {
                        if (0 < field_21808) {
                            iVar21 = 0;
                            do {
                                psVar15 = (shared_ptr*)GetSquare(this, (int)local_50, local_74, iVar21);
                                bVar11 = operator!=(psVar15, (_func_decltype_nullptr*)0);
                                if (bVar11) {
                                    this_01 = (Square*)shared_ptr<Square>::operator*((shared_ptr<Square>*)psVar15);
                                    iVar2 = this_01->field_32;
                                    iVar3 = this_01->field_36;
                                    iVar4 = this_01->field_40;
                                    cVar12 = this_01->IsEmpty();
                                    if (cVar12 == '\0') {
                                        local_98 =
                                            MousePickingHelper::GetPackedTypeCode(iVar3, iVar4, iVar2, 4, false, 0);
                                        eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                            local_80, &local_98);
                                    }
                                    this_03 = (shared_ptr<Square>*)&this_01->field_376;
                                    bVar11 = operator!=((shared_ptr*)this_03, (_func_decltype_nullptr*)0);
                                    local_58 = this_01;
                                    if (bVar11) {
                                        lVar16 = shared_ptr<Square>::operator->(this_03);
                                        psVar15 = (shared_ptr*)(lVar16 + 80);
                                        bVar11 = operator!=(psVar15, (_func_decltype_nullptr*)0);
                                        local_88 = this_03;
                                        if (bVar11) {
                                            local_68 = m_modelLitRendererRt7;
                                            lVar16 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar15);
                                            local_40 = (RSevenModelLitRenderer*)shared_ptr<ModelSource>::operator*(
                                                (shared_ptr<ModelSource>*)(lVar16 + 24));
                                            uVar5 = *(undefined4*)&this_01->field_348;
                                            lVar16 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar15);
                                            uVar6 = *(undefined4*)(lVar16 + 4);
                                            puVar17 = (uint*)shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar15);
                                            local_38 = (RSevenModelLitRenderer*)(ulong)*puVar17;
                                            lVar16 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar15);
                                            uVar7 = *(undefined4*)(lVar16 + 8);
                                            lVar16 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar15);
                                            uVar9 = *(undefined8*)(lVar16 + 56);
                                            lVar16 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar15);
                                            this_01 = local_58;
                                            this_03 = local_88;
                                            local_68->SubmitModel(local_40, uVar5, local_50, 0, uVar6, local_38, uVar7,
                                                                  uVar9, 1, lVar16 + 64, local_60);
                                        }
                                        lVar16 = shared_ptr<Square>::operator->(this_03);
                                        if (0 < *(int*)(lVar16 + 156)) {
                                            uVar22 = 0;
                                            do {
                                                lVar16 = shared_ptr<Square>::operator->(this_03);
                                                psVar15 = (shared_ptr*)eastl::vector<
                                                    shared_ptr<Sprite>,
                                                    eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                  eastl::allocator>>::
                                                operator[](
                                                    (vector<shared_ptr<Sprite>,
                                                            eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)(lVar16 +
                                                                                                               160),
                                                    uVar22);
                                                bVar11 = operator!=(psVar15, (_func_decltype_nullptr*)0);
                                                if (bVar11) {
                                                    local_68 = m_modelLitRendererRt7;
                                                    lVar16 =
                                                        shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar15);
                                                    local_40 =
                                                        (RSevenModelLitRenderer*)shared_ptr<ModelSource>::operator*(
                                                            (shared_ptr<ModelSource>*)(lVar16 + 32));
                                                    local_38 = (RSevenModelLitRenderer*)CONCAT44(
                                                        local_38._4_4_, *(undefined4*)&this_01->field_348);
                                                    lVar16 =
                                                        shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar15);
                                                    local_48 = CONCAT44(local_48._4_4_, *(undefined4*)(lVar16 + 48));
                                                    lVar16 =
                                                        shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar15);
                                                    uVar5 = *(undefined4*)(lVar16 + 8);
                                                    lVar16 =
                                                        shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar15);
                                                    local_70 = (ulong) * (uint*)(lVar16 + 4);
                                                    lVar16 =
                                                        shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar15);
                                                    uVar6 = *(undefined4*)(lVar16 + 12);
                                                    lVar16 =
                                                        shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar15);
                                                    uVar9 = *(undefined8*)(lVar16 + 80);
                                                    lVar16 =
                                                        shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar15);
                                                    this_01 = local_58;
                                                    this_03 = local_88;
                                                    local_68->SubmitModel(local_40, (ulong)local_38 & 4294967295,
                                                                          local_50, local_48 & 4294967295, uVar5,
                                                                          local_70, uVar6, uVar9, 2, lVar16 + 92,
                                                                          local_60);
                                                }
                                                uVar22 = uVar22 + 1;
                                                lVar16 = shared_ptr<Square>::operator->(this_03);
                                            } while ((long)uVar22 < (long)*(int*)(lVar16 + 156));
                                        }
                                    }
                                    puVar1 = this_01->field_80;
                                    bVar11 = operator!=((shared_ptr*)this_01->field_64, (_func_decltype_nullptr*)0);
                                    bVar13 = true;
                                    if (!bVar11) {
                                        bVar13 = operator!=((shared_ptr*)this_01->field_48, (_func_decltype_nullptr*)0);
                                    }
                                    local_68 = (RSevenModelLitRenderer*)CONCAT71(local_68._1_7_, bVar13);
                                    this_00 = this_01->field_96;
                                    bVar11 = operator!=((shared_ptr*)puVar1, (_func_decltype_nullptr*)0);
                                    if (bVar11) {
                                        shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar1);
                                        eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                            (longlong*)local_80);
                                        local_40 = m_modelLitRendererRt7;
                                        lVar16 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar1);
                                        local_38 = (RSevenModelLitRenderer*)shared_ptr<ModelSource>::operator*(
                                            (shared_ptr<ModelSource>*)(lVar16 + 24));
                                        local_48 = CONCAT44(local_48._4_4_, *(undefined4*)&this_01->field_348);
                                        lVar16 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar1);
                                        uVar5 = *(undefined4*)(lVar16 + 4);
                                        puVar17 = (uint*)shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar1);
                                        local_70 = (ulong)*puVar17;
                                        lVar16 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar1);
                                        uVar6 = *(undefined4*)(lVar16 + 8);
                                        lVar16 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar1);
                                        uVar9 = *(undefined8*)(lVar16 + 56);
                                        lVar16 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar1);
                                        this_01 = local_58;
                                        local_40->SubmitModel(local_38, local_48 & 4294967295, local_50, 0, uVar5,
                                                              local_70, uVar6, uVar9, 3, lVar16 + 64, local_60);
                                        lVar16 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar1);
                                        bVar11 = operator!=((shared_ptr*)(lVar16 + 40), (_func_decltype_nullptr*)0);
                                        if (bVar11) {
                                            local_40 = m_modelLitRendererRt7;
                                            lVar16 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar1);
                                            local_38 = (RSevenModelLitRenderer*)shared_ptr<ModelSource>::operator*(
                                                (shared_ptr<ModelSource>*)(lVar16 + 40));
                                            local_48 = CONCAT44(local_48._4_4_, *(undefined4*)&this_01->field_348);
                                            lVar16 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar1);
                                            uVar5 = *(undefined4*)(lVar16 + 4);
                                            puVar17 = (uint*)shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar1);
                                            local_70 = (ulong)*puVar17;
                                            lVar16 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar1);
                                            uVar6 = *(undefined4*)(lVar16 + 8);
                                            lVar16 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar1);
                                            uVar9 = *(undefined8*)(lVar16 + 56);
                                            lVar16 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar1);
                                            this_01 = local_58;
                                            local_40->SubmitModel(local_38, local_48 & 4294967295, local_50, 0, uVar5,
                                                                  local_70, uVar6, uVar9, 4, lVar16 + 64, local_60);
                                        }
                                    }
                                    bVar11 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
                                    if (bVar11) {
                                        lVar16 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)this_00);
                                        iVar2 = *(int*)(lVar16 + 4);
                                        puVar17 = (uint*)shared_ptr<Decor>::operator->((shared_ptr<Decor>*)this_00);
                                        local_40 = (RSevenModelLitRenderer*)(ulong)*puVar17;
                                        lVar16 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)this_00);
                                        iVar3 = *(int*)(lVar16 + 8);
                                        shared_ptr<Decor>::operator->((shared_ptr<Decor>*)this_00);
                                        eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                            (longlong*)local_80);
                                        local_38 = m_modelLitRendererRt7;
                                        lVar16 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)this_00);
                                        local_48 =
                                            shared_ptr<ModelSource>::operator*((shared_ptr<ModelSource>*)(lVar16 + 32));
                                        local_70 = CONCAT44(local_70._4_4_, *(undefined4*)&this_01->field_348);
                                        lVar16 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)this_00);
                                        iVar4 = *(int*)(lVar16 + 20);
                                        local_88 = (shared_ptr<Square>*)CONCAT44(local_88._4_4_, iVar2);
                                        lVar16 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)this_00);
                                        iVar8 = *(int*)(lVar16 + 24);
                                        lVar16 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)this_00);
                                        uVar9 = *(undefined8*)(lVar16 + 64);
                                        lVar16 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)this_00);
                                        pRVar10 = local_40;
                                        this_01 = local_58;
                                        local_38->SubmitModel(local_48, local_70 & 4294967295, local_50, 0,
                                                              iVar4 + iVar2, local_40, iVar8 + iVar3, uVar9, 5,
                                                              lVar16 + 76, local_60);
                                        lVar16 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)this_00);
                                        if (*(int*)(lVar16 + 12) == 256) {
                                            lVar16 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)this_00);
                                            bVar11 = operator!=((shared_ptr*)(lVar16 + 48), (_func_decltype_nullptr*)0);
                                            if (bVar11) {
                                                local_38 = m_modelLitRendererRt7;
                                                lVar16 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)this_00);
                                                uVar18 = shared_ptr<ModelSource>::operator*(
                                                    (shared_ptr<ModelSource>*)(lVar16 + 48));
                                                uVar5 = *(undefined4*)&local_58->field_348;
                                                lVar16 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)this_00);
                                                uVar9 = *(undefined8*)(lVar16 + 64);
                                                lVar16 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)this_00);
                                                this_01 = local_58;
                                                local_38->SubmitModel(uVar18, uVar5, local_50, 0,
                                                                      (ulong)local_88 & 4294967295, pRVar10, iVar3,
                                                                      uVar9, 6, lVar16 + 76, local_60);
                                            }
                                        }
                                    }
                                    puVar1 = this_01->field_112;
                                    bVar11 = operator!=((shared_ptr*)puVar1, (_func_decltype_nullptr*)0);
                                    cVar12 = (char)local_68;
                                    if (bVar11) {
                                        shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)puVar1);
                                        eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                            (longlong*)local_80);
                                        if (cVar12 != '\0') {
                                            local_40 = m_modelLitRendererRt7;
                                            lVar16 =
                                                shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)puVar1);
                                            local_38 = (RSevenModelLitRenderer*)shared_ptr<ModelSource>::operator*(
                                                (shared_ptr<ModelSource>*)(lVar16 + 16));
                                            uVar5 = *(undefined4*)&this_01->field_348;
                                            lVar16 =
                                                shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)puVar1);
                                            uVar6 = *(undefined4*)(lVar16 + 4);
                                            puVar17 = (uint*)shared_ptr<GroundDecor>::operator->(
                                                (shared_ptr<GroundDecor>*)puVar1);
                                            local_48 = (ulong)*puVar17;
                                            lVar16 =
                                                shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)puVar1);
                                            uVar7 = *(undefined4*)(lVar16 + 8);
                                            lVar16 =
                                                shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)puVar1);
                                            uVar9 = *(undefined8*)(lVar16 + 32);
                                            lVar16 =
                                                shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)puVar1);
                                            this_01 = local_58;
                                            cVar12 = (char)local_68;
                                            local_40->SubmitModel(local_38, uVar5, local_50, 0, uVar6, local_48, uVar7,
                                                                  uVar9, 7, lVar16 + 44, local_60);
                                        }
                                    }
                                    puVar1 = this_01->field_128;
                                    bVar11 = operator!=((shared_ptr*)puVar1, (_func_decltype_nullptr*)0);
                                    if (bVar11) {
                                        shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar1);
                                        eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                            (longlong*)local_80);
                                        if (cVar12 != '\0') {
                                            lVar16 =
                                                shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar1);
                                            bVar11 = operator!=((shared_ptr*)(lVar16 + 32), (_func_decltype_nullptr*)0);
                                            if (bVar11) {
                                                local_40 = m_modelLitRendererRt7;
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                local_38 = (RSevenModelLitRenderer*)shared_ptr<ModelSource>::operator*(
                                                    (shared_ptr<ModelSource>*)(lVar16 + 32));
                                                local_48 = CONCAT44(local_48._4_4_, *(undefined4*)&this_01->field_348);
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                uVar5 = *(undefined4*)(lVar16 + 4);
                                                piVar19 = (int*)shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                iVar2 = *piVar19;
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                iVar3 = *(int*)(lVar16 + 72);
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                uVar6 = *(undefined4*)(lVar16 + 8);
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                uVar9 = *(undefined8*)(lVar16 + 64);
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                this_01 = local_58;
                                                cVar12 = (char)local_68;
                                                local_40->SubmitModel(local_38, local_48 & 4294967295, local_50, 0,
                                                                      uVar5, iVar2 - iVar3, uVar6, uVar9, 8,
                                                                      lVar16 + 76, local_60);
                                            }
                                            lVar16 =
                                                shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar1);
                                            bVar11 = operator!=((shared_ptr*)(lVar16 + 48), (_func_decltype_nullptr*)0);
                                            if (bVar11) {
                                                local_40 = m_modelLitRendererRt7;
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                local_38 = (RSevenModelLitRenderer*)shared_ptr<ModelSource>::operator*(
                                                    (shared_ptr<ModelSource>*)(lVar16 + 48));
                                                local_48 = CONCAT44(local_48._4_4_, *(undefined4*)&this_01->field_348);
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                uVar5 = *(undefined4*)(lVar16 + 4);
                                                piVar19 = (int*)shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                iVar2 = *piVar19;
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                iVar3 = *(int*)(lVar16 + 72);
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                uVar6 = *(undefined4*)(lVar16 + 8);
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                uVar9 = *(undefined8*)(lVar16 + 64);
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                this_01 = local_58;
                                                cVar12 = (char)local_68;
                                                local_40->SubmitModel(local_38, local_48 & 4294967295, local_50, 0,
                                                                      uVar5, iVar2 - iVar3, uVar6, uVar9, 9,
                                                                      lVar16 + 76, local_60);
                                            }
                                            lVar16 =
                                                shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar1);
                                            bVar11 = operator!=((shared_ptr*)(lVar16 + 16), (_func_decltype_nullptr*)0);
                                            if (bVar11) {
                                                local_40 = m_modelLitRendererRt7;
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                local_38 = (RSevenModelLitRenderer*)shared_ptr<ModelSource>::operator*(
                                                    (shared_ptr<ModelSource>*)(lVar16 + 16));
                                                local_48 = CONCAT44(local_48._4_4_, *(undefined4*)&this_01->field_348);
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                uVar5 = *(undefined4*)(lVar16 + 4);
                                                piVar19 = (int*)shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                iVar2 = *piVar19;
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                iVar3 = *(int*)(lVar16 + 72);
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                uVar6 = *(undefined4*)(lVar16 + 8);
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                uVar9 = *(undefined8*)(lVar16 + 64);
                                                lVar16 = shared_ptr<GroundObject>::operator->(
                                                    (shared_ptr<GroundObject>*)puVar1);
                                                this_01 = local_58;
                                                cVar12 = (char)local_68;
                                                local_40->SubmitModel(local_38, local_48 & 4294967295, local_50, 0,
                                                                      uVar5, iVar2 - iVar3, uVar6, uVar9, 10,
                                                                      lVar16 + 76, local_60);
                                            }
                                            goto LAB_10030d7d0;
                                        }
                                    } else {
                                    LAB_10030d7d0:
                                        if (cVar12 != '\0') {
                                            pEVar20 = (EntityHighlight*)this_01->GetTileHighlightData();
                                            if (pEVar20 != (EntityHighlight*)0) {
                                                m_modelLitRendererRt7->SubmitTileHighlight(this_01->field_36 << 7,
                                                                                           this_01->field_40 << 7,
                                                                                           this_01->field_32, pEVar20);
                                            }
                                        }
                                    }
                                    uVar14 = this_01->field_156;
                                    if (0 < (int)uVar14) {
                                        local_68 = (RSevenModelLitRenderer*)&this_01->field_160;
                                        uVar22 = 0;
                                        do {
                                            this_02 = (shared_ptr<Sprite>*)
                                                eastl::vector<shared_ptr<Sprite>,
                                                              eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                            eastl::allocator>>::
                                                operator[](
                                                    (vector<shared_ptr<Sprite>,
                                                            eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)local_68,
                                                    uVar22);
                                            lVar16 = shared_ptr<Sprite>::operator->(this_02);
                                            iVar2 = m_cycleNo;
                                            if (*(int*)(lVar16 + 72) != m_cycleNo) {
                                                lVar16 = shared_ptr<Sprite>::operator->(this_02);
                                                *(int*)(lVar16 + 72) = iVar2;
                                                shared_ptr<Sprite>::operator->(this_02);
                                                eastl::fixed_vector<long long, 10000ul, true,
                                                                    eastl::allocator>::push_back((longlong*)local_80);
                                                lVar16 = shared_ptr<Sprite>::operator->(this_02);
                                                local_98 = *(longlong*)(lVar16 + 92);
                                                local_90 = *(undefined2*)(lVar16 + 100);
                                                cVar12 = local_98.isAllocated();
                                                if (cVar12 == '\0') {
                                                    lVar16 = shared_ptr<Sprite>::operator->(this_02);
                                                    local_98._0_6_ =
                                                        CONCAT15(*(undefined1*)(lVar16 + 24), (undefined5)local_98);
                                                    lVar16 = shared_ptr<Sprite>::operator->(this_02);
                                                    local_98._0_7_ =
                                                        CONCAT16(*(undefined1*)(lVar16 + 28), (undefined6)local_98);
                                                } else {
                                                    local_98._0_7_ = CONCAT25(257, (undefined5)local_98);
                                                }
                                                local_40 = m_modelLitRendererRt7;
                                                lVar16 = shared_ptr<Sprite>::operator->(this_02);
                                                local_48 = shared_ptr<ModelSource>::operator*(
                                                    (shared_ptr<ModelSource>*)(lVar16 + 32));
                                                local_38 = (RSevenModelLitRenderer*)CONCAT44(local_38._4_4_,
                                                                                             this_01->field_32);
                                                local_70 = CONCAT44(local_70._4_4_, *(undefined4*)&this_01->field_348);
                                                lVar16 = shared_ptr<Sprite>::operator->(this_02);
                                                local_88 = (shared_ptr<Square>*)CONCAT44(local_88._4_4_,
                                                                                         *(undefined4*)(lVar16 + 48));
                                                lVar16 = shared_ptr<Sprite>::operator->(this_02);
                                                uVar5 = *(undefined4*)(lVar16 + 8);
                                                lVar16 = shared_ptr<Sprite>::operator->(this_02);
                                                uVar6 = *(undefined4*)(lVar16 + 4);
                                                lVar16 = shared_ptr<Sprite>::operator->(this_02);
                                                uVar7 = *(undefined4*)(lVar16 + 12);
                                                lVar16 = shared_ptr<Sprite>::operator->(this_02);
                                                uVar9 = *(undefined8*)(lVar16 + 80);
                                                lVar16 = shared_ptr<Sprite>::operator->(this_02);
                                                this_01 = local_58;
                                                local_40->SubmitModel(local_48, local_70 & 4294967295,
                                                                      (ulong)local_38 & 4294967295,
                                                                      (ulong)local_88 & 4294967295, uVar5, uVar6, uVar7,
                                                                      uVar9, 11, lVar16 + 92, local_60);
                                            }
                                            uVar22 = uVar22 + 1;
                                        } while (uVar14 != uVar22);
                                    }
                                }
                                iVar21 = iVar21 + 1;
                            } while (iVar21 < field_21808);
                        }
                        local_74 = local_74 + 1;
                    } while (local_74 < field_21804);
                }
                uVar14 = (int)local_50 + 1;
                local_50 = (ulong)uVar14;
            } while ((int)uVar14 < field_21800);
        }
    }

    // 0x10030dac0, 144 bytes, placed by class name
    // world::SubmitDebugPointLight(int)
    void world::SubmitDebugPointLight(int param_1) {
        int iVar1;
        int iVar2;
        RSevenModelLitRenderer* this_00;
        vector* pvVar3;
        int* piVar4;
        undefined4 in_register_00000034;
        type* ptVar5;
        DemoPointLightSource local_38;

        ptVar5 = (type*)CONCAT44(in_register_00000034, param_1);
        if (this[1].field_16 != '\0') {
            SubmitDebugPointLight(int) new (&local_38)::DemoPointLightSource();
            this_00 = m_modelLitRendererRt7;
            pvVar3 = m_mouseoverGroundFine.SSOBeginPtr(ptVar5);
            iVar1 = *(int*)pvVar3;
            piVar4 = (int*)m_mouseoverGroundFine.y();
            iVar2 = *piVar4;
            piVar4 = (int*)m_mouseoverGroundFine.second();
            this_00->SubmitLightSource((PointLightSource*)&local_38, iVar1, iVar2 + -32, *piVar4, 0, param_1);
        }
    }

    // 0x10030db50, 16 bytes, complete-object constructor, placed by class name
    // world::SubmitDebugPointLight(int)::DemoPointLightSource::DemoPointLightSource(): jumps straight to the base-object constructor

    // 0x10030db60, 608 bytes, placed by class name
    // world::UpdateMousePickingRSeven(int, int, int, int, int)
    void world::UpdateMousePickingRSeven(int param_1, int param_2, int param_3, int param_4, int param_5) {
        Layout* pLVar1;
        MousePickingHelper* this_00;
        Matrix44T MVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        int* piVar6;
        vector* pvVar7;
        undefined4* puVar8;
        type* ptVar9;
        Matrix44T local_168;
        undefined1 local_128[144];
        Vector3T<int> local_98[16];
        LocationData local_88;
        undefined1 local_78[16];
        undefined1 local_68[24];
        double local_50;
        type* local_48;
        undefined4 local_40;
        undefined8 local_38;
        undefined4 local_30;

        new (&local_88) rs2lib::worldmap::LocationData(param_1, param_2, param_3);
        new (local_78) sidebars::SideBarData(param_4, param_5);
        RSevenModelLitRenderer::CreateViewMatrix(&local_168, local_88._0_8_, local_88.field_8, local_78._0_8_);
        this_00 = (MousePickingHelper*)(local_128 + 64);
        this_00->GetViewportRect();
        piVar6 = (int*)this_00->second();
        local_50 = (double)*piVar6;
        piVar6 = (int*)this_00->qw();
        local_50 = local_50 / (double)*piVar6;
        iVar4 = MousePickingHelper::GetViewportFov();
        local_128->CreateProjectionMatrix((double)iVar4, local_50);
        jag::math::operator*((math*)(local_128 + 80), &local_168, (Matrix44T*)local_128);
        MVar2._8_8_ = local_128._88_8_;
        MVar2._0_8_ = local_128._80_8_;
        MVar2._16_8_ = local_128._96_8_;
        MVar2._24_8_ = local_128._104_8_;
        MVar2._32_8_ = local_128._112_8_;
        MVar2._40_8_ = local_128._120_8_;
        MVar2._48_8_ = local_128._128_8_;
        MousePickingHelper::SetViewProjectionMatrix(MVar2);
        new (&local_48) jag::math::Vector3T<int>();
        new (&local_38) jag::math::Vector3T<int>();
        iVar4 = MousePickingHelper::GetMouseScreenX();
        iVar5 = MousePickingHelper::GetMouseScreenY();
        new ((local_78 + 8)) sidebars::SideBarData(iVar4, iVar5);
        MousePickingHelper::CalculateMouseWorldVectorRSeven(local_78._8_8_, (Vector3T<int>*)&local_48,
                                                            (Vector3T<int>*)&local_38);
        MousePickingHelper::SetMouseWorldVector(local_48, local_40, local_38, local_30);
        new ((local_68 + 8)) jag::math::Vector3T<int>();
        jag::math::Vector3T<int>::Vector3T(local_98);
        ptVar9 = local_48;
        cVar3 = MousePickingHelper::GetGroundIntersection(this, local_48, local_40, local_38, local_30,
                                                          (Vector3T<int>*)(local_68 + 8), local_98);
        if (cVar3 != '\0') {
            pLVar1 = (Layout*)(local_68 + 8);
            pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar1, ptVar9);
            m_mouseoverGroundX = *(undefined4*)pvVar7;
            puVar8 = (undefined4*)pLVar1->y();
            m_mouseoverGroundY = *puVar8;
            puVar8 = (undefined4*)pLVar1->second();
            m_mouseoverGroundZ = *puVar8;
            jag::math::Vector3T<int>::operator=((Vector3T<int>*)&m_mouseoverGroundFine, (Vector3T*)local_98);
        }
        if (m_click != '\0') {
            new (local_68) sidebars::SideBarData(m_clickX, m_clickY);
            MousePickingHelper::CalculateMouseWorldVectorRSeven(local_68._0_8_, &local_48, &local_38);
            cVar3 = MousePickingHelper::GetGroundIntersection(this, local_48, local_40, local_38, local_30,
                                                              local_68 + 8, local_98);
            if (cVar3 != '\0') {
                pLVar1 = (Layout*)(local_68 + 8);
                pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar1, local_48);
                m_groundX = *(undefined4*)pvVar7;
                puVar8 = (undefined4*)pLVar1->y();
                m_groundY = *puVar8;
                puVar8 = (undefined4*)pLVar1->second();
                m_groundZ = *puVar8;
            }
        }
    }

    // 0x10030ddc0, 976 bytes, placed by class name
    // world::CalcOcclude()
    void world::CalcOcclude() {
        uint uVar1;
        bool bVar2;
        char cVar3;
        bool bVar4;
        uint* puVar5;
        undefined8* puVar6;
        int* piVar7;
        int iVar8;
        int iVar9;
        ulong uVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        int iVar15;

        puVar5 = (uint*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)&field_1640,
                (long)m_maxLevel);
        uVar1 = *puVar5;
        field_17736 = 0;
        if (0 < (int)uVar1) {
            uVar10 = 0;
            do {
                piVar7 = (int*)GetOccluder(this, (long)m_maxLevel, uVar10);
                iVar15 = piVar7[4];
                if (iVar15 == 4) {
                    iVar15 = piVar7[9] - m_cy;
                    if (128 < iVar15) {
                        iVar8 = (piVar7[2] - m_gz) + m_drawDistanceRange;
                        if (iVar8 < 0) {
                            iVar8 = 0;
                        }
                        iVar13 = (piVar7[3] - m_gz) + m_drawDistanceRange;
                        iVar9 = m_drawDistanceRange * 2;
                        if (iVar9 < iVar13) {
                            iVar13 = iVar9;
                        }
                        if (iVar8 <= iVar13) {
                            iVar11 = (*piVar7 - m_gx) + m_drawDistanceRange;
                            bVar4 = false;
                            if (iVar11 < 0) {
                                iVar11 = 0;
                            }
                            iVar14 = (piVar7[1] - m_gx) + m_drawDistanceRange;
                            if (iVar9 < iVar14) {
                                iVar14 = iVar9;
                            }
                            if (iVar11 <= iVar14) {
                                bVar4 = false;
                                do {
                                    iVar9 = iVar8;
                                    do {
                                        cVar3 = GetTileVisibility(iVar11, iVar9);
                                        if (cVar3 != '\0') {
                                            bVar4 = true;
                                            iVar12 = iVar14 + 1;
                                            break;
                                        }
                                        bVar2 = iVar9 < iVar13;
                                        iVar12 = iVar11;
                                        iVar9 = iVar9 + 1;
                                    } while (bVar2);
                                    iVar11 = iVar12 + 1;
                                } while (iVar12 < iVar14);
                            }
                            if (bVar4) {
                                piVar7[11] = 5;
                                iVar8 = m_cx;
                                piVar7[12] = ((piVar7[5] - m_cx) * 256) / iVar15;
                                piVar7[13] = ((piVar7[6] - iVar8) * 256) / iVar15;
                                iVar8 = m_cz;
                                piVar7[14] = ((piVar7[7] - m_cz) * 256) / iVar15;
                                piVar7[15] = ((piVar7[8] - iVar8) * 256) / iVar15;
                                goto LAB_10030de59;
                            }
                        }
                    }
                } else if (iVar15 == 2) {
                    iVar15 = (piVar7[2] - m_gz) + m_drawDistanceRange;
                    if ((-1 < iVar15) && (iVar8 = m_drawDistanceRange * 2, iVar15 <= iVar8)) {
                        iVar9 = (*piVar7 - m_gx) + m_drawDistanceRange;
                        if (iVar9 < 0) {
                            iVar9 = 0;
                        }
                        iVar13 = (piVar7[1] - m_gx) + m_drawDistanceRange;
                        if (iVar8 < iVar13) {
                            iVar13 = iVar8;
                        }
                        do {
                            if (iVar13 < iVar9)
                                goto LAB_10030de80;
                            cVar3 = GetTileVisibility(iVar9, iVar15);
                            iVar9 = iVar9 + 1;
                        } while (cVar3 == '\0');
                        iVar15 = m_cz - piVar7[7];
                        if (iVar15 < 33) {
                            if (-33 < iVar15)
                                goto LAB_10030de80;
                            piVar7[11] = 4;
                            iVar15 = -iVar15;
                        } else {
                            piVar7[11] = 3;
                        }
                        iVar8 = m_cx;
                        piVar7[12] = ((piVar7[5] - m_cx) * 256) / iVar15;
                        piVar7[13] = ((piVar7[6] - iVar8) * 256) / iVar15;
                        goto LAB_10030de37;
                    }
                } else if (((iVar15 == 1) && (iVar15 = (*piVar7 - m_gx) + m_drawDistanceRange, -1 < iVar15)) &&
                           (iVar8 = m_drawDistanceRange * 2, iVar15 <= iVar8)) {
                    iVar9 = (piVar7[2] - m_gz) + m_drawDistanceRange;
                    if (iVar9 < 0) {
                        iVar9 = 0;
                    }
                    iVar13 = (piVar7[3] - m_gz) + m_drawDistanceRange;
                    if (iVar8 < iVar13) {
                        iVar13 = iVar8;
                    }
                    do {
                        if (iVar13 < iVar9)
                            goto LAB_10030de80;
                        cVar3 = GetTileVisibility(iVar15, iVar9);
                        iVar9 = iVar9 + 1;
                    } while (cVar3 == '\0');
                    iVar15 = m_cx - piVar7[5];
                    if (iVar15 < 33) {
                        if (-33 < iVar15)
                            goto LAB_10030de80;
                        piVar7[11] = 2;
                        iVar15 = -iVar15;
                    } else {
                        piVar7[11] = 1;
                    }
                    iVar8 = m_cz;
                    piVar7[14] = ((piVar7[7] - m_cz) * 256) / iVar15;
                    piVar7[15] = ((piVar7[8] - iVar8) * 256) / iVar15;
                LAB_10030de37:
                    iVar8 = m_cy;
                    piVar7[16] = ((piVar7[9] - m_cy) * 256) / iVar15;
                    piVar7[17] = ((piVar7[10] - iVar8) * 256) / iVar15;
                LAB_10030de59:
                    iVar15 = field_17736;
                    field_17736 = iVar15 + 1;
                    puVar6 = (undefined8*)eastl::vector<
                        Occlude*, eastl::fixed_vector_allocator<8ul, 500ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[]((vector<Occlude*, eastl::fixed_vector_allocator<8ul, 500ul, 8ul, 0ul, true,
                                                                               eastl::allocator>>*)&field_17744,
                               (long)iVar15);
                    *puVar6 = piVar7;
                }
            LAB_10030de80:
                uVar10 = uVar10 + 1;
            } while (uVar10 != uVar1);
        }
    }

    // 0x10030e190, 13360 bytes, placed by class name
    // world::Fill(shared_ptr<Square> const&, bool, int)
    void world::Fill(shared_ptr* param_1, bool param_2, int param_3) {
        undefined1* puVar1;
        int iVar2;
        Square* pSVar3;
        world* this_00;
        shared_ptr* this_01;
        char cVar4;
        bool bVar5;
        byte bVar6;
        ushort uVar7;
        ushort uVar8;
        undefined4 uVar9;
        undefined4 uVar10;
        uint uVar11;
        undefined4 uVar12;
        shared_ptr* psVar13;
        long lVar14;
        int* piVar15;
        undefined8 uVar16;
        EntityHighlight* this_02;
        shared_ptr<Sprite>* psVar17;
        uint* puVar18;
        long lVar19;
        undefined4* puVar20;
        int iVar21;
        uint uVar22;
        ulong uVar23;
        undefined1* puVar24;
        int iVar25;
        int iVar26;
        int iVar27;
        ModelSource* pMVar28;
        int iVar29;
        int iVar30;
        longlong in_stack_fffffffffffffeb8;
        EntityHighlight* in_stack_fffffffffffffec8;
        undefined4 uVar31;
        shared_ptr<RSevenDebugPresetProvider> local_118[20];
        int local_104;
        fixed_vector<std::unique_ptr<DeferredHighlight, std::default_delete<DeferredHighlight>>, 1024ul, true,
                     eastl::allocator>* local_100;
        unique_ptr<DeferredHighlight, std::default_delete<DeferredHighlight>> local_f8[8];
        unique_ptr local_f0[8];
        int local_e8;
        int local_e4;
        NXTWorldRenderer* local_e0;
        undefined1 local_d8[24];
        SharedPtrList<Square>* local_c0;
        int local_b4;
        fixed_vector<long long, 10000ul, true, eastl::allocator>* local_b0;
        int local_a4;
        ulong local_a0;
        int local_94;
        vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*
            local_90;
        Square* local_88;
        undefined1 local_80[16];
        ModelSource* local_70;
        world* local_68;
        shared_ptr* local_60;
        undefined8 local_58;
        ModelSource* local_50;
        ulong local_48;
        ulong local_40;
        byte local_31;

        local_e0 = m_worldRenderer;
        puVar24 = &field_21784;
        local_80._4_4_ = param_3;
        puVar24->push(param_1);
        cVar4 = puVar24->empty();
        if (cVar4 == '\0') {
            local_b0 = (fixed_vector<long long, 10000ul, true, eastl::allocator>*)&field_30072;
            local_100 = (fixed_vector<std::unique_ptr<DeferredHighlight, std::default_delete<DeferredHighlight>>,
                                      1024ul, true, eastl::allocator>*)&field_21840;
            local_c0 = (SharedPtrList<Square>*)puVar24;
            local_68 = this;
            do {
                local_118->takeFrontAndPop();
                local_d8._16_8_ = shared_ptr<Square>::operator*((shared_ptr<Square>*)local_118);
                if (*(char*)((long)&((Square*)local_d8._16_8_)->field_351 + 2) != '\0') {
                    uVar11 = ((Square*)local_d8._16_8_)->field_32;
                    local_a0 = (ulong)uVar11;
                    local_40 = (ulong)(uint)((Square*)local_d8._16_8_)->field_36;
                    local_48 = (ulong)(uint)((Square*)local_d8._16_8_)->field_40;
                    local_80._0_4_ = ((Square*)local_d8._16_8_)->field_44;
                    local_88 = (Square*)local_d8._16_8_;
                    if (*(char*)((long)&((Square*)local_d8._16_8_)->field_351 + 1) == '\0') {
                        local_31 = param_2;
                    } else {
                        local_31 = 1;
                        if ((param_2 & 1U) != 0) {
                            if (0 < (int)uVar11) {
                                psVar13 = (shared_ptr*)GetSquare(this, uVar11 - 1, ((Square*)local_d8._16_8_)->field_36,
                                                                 ((Square*)local_d8._16_8_)->field_40);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                if ((bVar5) && (lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                                *(char*)(lVar14 + 353) != '\0'))
                                    goto LAB_10030e226;
                            }
                            iVar25 = (int)local_40;
                            if ((iVar25 <= m_gx) && (m_minX < iVar25)) {
                                psVar13 = (shared_ptr*)GetSquare(this, (int)local_a0, iVar25 + -1, (int)local_48);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                iVar25 = (int)local_40;
                                if (bVar5) {
                                    lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13);
                                    iVar25 = (int)local_40;
                                    if ((*(char*)(lVar14 + 353) != '\0') &&
                                        ((lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                          *(char*)(lVar14 + 352) != '\0' ||
                                              (iVar25 = (int)local_40, (local_88->field_344 & 1) == 0))))
                                        goto LAB_10030e226;
                                }
                            }
                            if ((m_gx <= iVar25) && ((int)local_40 < m_maxX + -1)) {
                                psVar13 = (shared_ptr*)GetSquare(this, (int)local_a0, (int)local_40 + 1, (int)local_48);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                if (((bVar5) && (lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                                 *(char*)(lVar14 + 353) != '\0')) &&
                                    ((lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                      *(char*)(lVar14 + 352) != '\0' || ((local_88->field_344 & 4) == 0))))
                                    goto LAB_10030e226;
                            }
                            iVar25 = (int)local_48;
                            if ((iVar25 <= m_gz) && (m_minZ < iVar25)) {
                                psVar13 = (shared_ptr*)GetSquare(this, (int)local_a0, (int)local_40, iVar25 + -1);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                if ((bVar5) &&
                                    ((lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                      *(char*)(lVar14 + 353) != '\0' &&
                                          ((lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                            *(char*)(lVar14 + 352) != '\0' || ((local_88->field_344 & 8) == 0))))))
                                    goto LAB_10030e226;
                            }
                            iVar25 = (int)local_48;
                            if ((m_gz <= iVar25) && (iVar25 < m_maxZ + -1)) {
                                psVar13 = (shared_ptr*)GetSquare(this, (int)local_a0, (int)local_40, iVar25 + 1);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                if ((bVar5) && (lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                                *(char*)(lVar14 + 353) != '\0')) {
                                    lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13);
                                    if ((*(char*)(lVar14 + 352) != '\0') ||
                                        (local_31 = param_2, (local_88->field_344 & 2) == 0))
                                        goto LAB_10030e226;
                                    goto LAB_10030e503;
                                }
                            }
                            local_31 = param_2;
                        }
                    LAB_10030e503:
                        *(undefined1*)((long)&local_88->field_351 + 1) = 0;
                        puVar24 = (undefined1*)(local_d8._16_8_ + 376);
                        bVar5 = operator!=((shared_ptr*)puVar24, (_func_decltype_nullptr*)0);
                        if (bVar5) {
                            lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)puVar24);
                            bVar5 = operator!=((shared_ptr*)(lVar14 + 48), (_func_decltype_nullptr*)0);
                            if (bVar5) {
                                cVar4 = GroundoOcluded(this, 0, (int)local_40, (int)local_48);
                                uVar9 = (undefined4)((ulong)in_stack_fffffffffffffeb8 >> 32);
                                uVar31 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 32);
                                if (cVar4 == '\0') {
                                    lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)puVar24);
                                    lVar14 =
                                        shared_ptr<QuickGround>::operator*((shared_ptr<QuickGround>*)(lVar14 + 48));
                                    in_stack_fffffffffffffec8 =
                                        (EntityHighlight*)CONCAT44(uVar31, *(undefined4*)(lVar14 + 12));
                                    in_stack_fffffffffffffeb8 = CONCAT44(uVar9, *(undefined4*)(lVar14 + 4));
                                    (*(code*)local_e0->field_0[3])(
                                        local_e0, this, 0, m_cameraSinX, m_cameraCosX, m_cameraSinY, m_cameraCosY,
                                        (int)local_40, (int)local_48, *(undefined4*)(lVar14 + 20),
                                        in_stack_fffffffffffffeb8, *(undefined4*)(lVar14 + 8),
                                        in_stack_fffffffffffffec8, *(undefined4*)(lVar14 + 16), 255);
                                }
                            } else {
                                lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)puVar24);
                                bVar5 = operator!=((shared_ptr*)(lVar14 + 64), (_func_decltype_nullptr*)0);
                                if ((bVar5) &&
                                    (cVar4 = GroundoOcluded(this, 0, (int)local_40, (int)local_48), cVar4 == '\0')) {
                                    lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)puVar24);
                                    uVar16 = shared_ptr<Ground>::operator*((shared_ptr<Ground>*)(lVar14 + 64));
                                    lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)puVar24);
                                    (*(code*)local_e0->field_0[4])(local_e0, this, uVar16, *(undefined4*)(lVar14 + 32),
                                                                   m_cameraSinX, m_cameraCosX, m_cameraSinY,
                                                                   m_cameraCosY, (int)local_40, (int)local_48);
                                }
                            }
                            local_60 = (shared_ptr*)puVar24;
                            lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)puVar24);
                            psVar13 = (shared_ptr*)(lVar14 + 80);
                            bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                            if (bVar5) {
                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar13);
                                local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                    (shared_ptr<ModelSource>*)(lVar14 + 24));
                                local_80._8_4_ = m_cameraSinX;
                                local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraCosX);
                                local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraSinY);
                                local_90 =
                                    (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                              eastl::allocator>>*)
                                        CONCAT44(local_90._4_4_, m_cameraCosY);
                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar13);
                                iVar29 = *(int*)(lVar14 + 4) - m_cx;
                                piVar15 = (int*)shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar13);
                                iVar25 = *piVar15 - m_cy;
                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar13);
                                iVar27 = *(int*)(lVar14 + 8) - m_cz;
                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar13);
                                in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 56);
                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)psVar13);
                                in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 64);
                                SubmitModelForRender(local_68, local_50, 0, local_80._8_4_, (uint)local_58,
                                                     (int)local_70, (int)local_90, iVar29, iVar25, iVar27,
                                                     in_stack_fffffffffffffeb8, local_80._4_4_,
                                                     in_stack_fffffffffffffec8);
                            }
                            pMVar28 = (ModelSource*)0;
                            while (psVar13 = local_60,
                                   lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)local_60),
                                   this = local_68, (long)pMVar28 < (long)*(int*)(lVar14 + 156)) {
                                local_50 = pMVar28;
                                lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13);
                                psVar13 = (shared_ptr*)eastl::vector<
                                    shared_ptr<Sprite>,
                                    eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                                operator[]((vector<shared_ptr<Sprite>,
                                                   eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                 eastl::allocator>>*)(lVar14 + 160),
                                           (ulong)local_50);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                if (bVar5) {
                                    lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar13);
                                    local_80._8_8_ =
                                        shared_ptr<ModelSource>::operator*((shared_ptr<ModelSource>*)(lVar14 + 32));
                                    lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar13);
                                    local_58 = (ModelSource*)CONCAT44(local_58._4_4_, *(undefined4*)(lVar14 + 48));
                                    local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraSinX);
                                    local_90 =
                                        (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<
                                                                        16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                                            CONCAT44(local_90._4_4_, m_cameraCosX);
                                    local_94 = m_cameraSinY;
                                    local_a4 = m_cameraCosY;
                                    lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar13);
                                    iVar27 = *(int*)(lVar14 + 8) - m_cx;
                                    lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar13);
                                    iVar25 = *(int*)(lVar14 + 4) - m_cy;
                                    lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar13);
                                    iVar29 = *(int*)(lVar14 + 12) - m_cz;
                                    lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar13);
                                    in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 80);
                                    lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar13);
                                    in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 92);
                                    SubmitModelForRender(local_68, (ModelSource*)local_80._8_8_, (uint)local_58,
                                                         (int)local_70, (int)local_90, local_94, local_a4, iVar27,
                                                         iVar25, iVar29, in_stack_fffffffffffffeb8, local_80._4_4_,
                                                         in_stack_fffffffffffffec8);
                                }
                                pMVar28 = (ModelSource*)((long)&local_50->field_0 + 1);
                            }
                        }
                        uVar16 = local_d8._16_8_;
                        puVar24 = (undefined1*)(local_d8._16_8_ + 48);
                        bVar5 = operator!=((shared_ptr*)puVar24, (_func_decltype_nullptr*)0);
                        if (bVar5) {
                            cVar4 = GroundoOcluded(this, local_80._0_4_, (int)local_40, (int)local_48);
                            if (cVar4 == '\0') {
                                lVar14 = shared_ptr<QuickGround>::operator->((shared_ptr<QuickGround>*)puVar24);
                                uVar9 = (undefined4)((ulong)in_stack_fffffffffffffeb8 >> 32);
                                uVar31 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 32);
                                local_60 =
                                    (shared_ptr*)CONCAT44(local_60._4_4_, (int)CONCAT71((int7)((ulong)lVar14 >> 8), 1));
                                if ((*(int*)(lVar14 + 12) != 12345678) || ((int)local_a0 <= m_groundPickingLevel)) {
                                    lVar14 = shared_ptr<QuickGround>::operator*((shared_ptr<QuickGround>*)puVar24);
                                    in_stack_fffffffffffffec8 =
                                        (EntityHighlight*)CONCAT44(uVar31, *(undefined4*)(lVar14 + 12));
                                    in_stack_fffffffffffffeb8 = CONCAT44(uVar9, *(undefined4*)(lVar14 + 4));
                                    (*(code*)local_e0->field_0[3])(
                                        local_e0, this, local_80._0_4_, m_cameraSinX, m_cameraCosX, m_cameraSinY,
                                        m_cameraCosY, (int)local_40, (int)local_48, *(undefined4*)(lVar14 + 20),
                                        in_stack_fffffffffffffeb8, *(undefined4*)(lVar14 + 8),
                                        in_stack_fffffffffffffec8, *(undefined4*)(lVar14 + 16), 255);
                                }
                            } else {
                                local_60 = (shared_ptr*)((ulong)local_60 & 18446744069414584320);
                            }
                            iVar25 = (int)local_48;
                            local_d8._0_8_ = MousePickingHelper::GetPackedTypeCode((int)local_40, iVar25,
                                                                                   local_88->field_32, 4, false, 0);
                            eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                local_b0, (longlong*)local_d8);
                        } else {
                            bVar5 = operator!=((shared_ptr*)(uVar16 + 64), (_func_decltype_nullptr*)0);
                            pSVar3 = local_88;
                            if (bVar5) {
                                cVar4 = GroundoOcluded(this, local_80._0_4_, (int)local_40, (int)local_48);
                                if (cVar4 == '\0') {
                                    uVar16 = shared_ptr<Ground>::operator*((shared_ptr<Ground>*)(uVar16 + 64));
                                    local_60 = (shared_ptr*)CONCAT44(
                                        local_60._4_4_, (int)CONCAT71((int7)((ulong)local_e0->field_0 >> 8), 1));
                                    (*(code*)local_e0->field_0[4])(local_e0, this, uVar16, local_88->field_32,
                                                                   m_cameraSinX, m_cameraCosX, m_cameraSinY,
                                                                   m_cameraCosY, (int)local_40, (int)local_48);
                                } else {
                                    local_60 = (shared_ptr*)((ulong)local_60 & 18446744069414584320);
                                }
                                iVar25 = (int)local_48;
                                local_d8._0_8_ = MousePickingHelper::GetPackedTypeCode((int)local_40, iVar25,
                                                                                       local_88->field_32, 4, false, 0);
                                eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                    local_b0, (longlong*)local_d8);
                            } else {
                                cVar4 = local_88->IsEmpty();
                                iVar25 = (int)local_48;
                                if (cVar4 == '\0') {
                                    local_d8._0_8_ = MousePickingHelper::GetPackedTypeCode(
                                        (int)local_40, iVar25, pSVar3->field_32, 4, false, 0);
                                    eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                        local_b0, (longlong*)local_d8);
                                    local_60 = (shared_ptr*)((ulong)local_60 & 18446744069414584320);
                                } else {
                                    local_60 = (shared_ptr*)((ulong)local_60 & 18446744069414584320);
                                }
                            }
                        }
                        puVar24 = (undefined1*)(local_d8._16_8_ + 80);
                        puVar1 = (undefined1*)(local_d8._16_8_ + 96);
                        bVar5 = operator!=((shared_ptr*)puVar24, (_func_decltype_nullptr*)0);
                        if (bVar5) {
                        LAB_10030eb6f:
                            uVar11 = (uint)(m_gx < (int)local_40) * 2;
                            if (m_gx == (int)local_40) {
                                uVar11 = 1;
                            }
                            uVar22 = uVar11 + 6;
                            if (m_gz <= iVar25) {
                                uVar22 = uVar11;
                            }
                            if (m_gz == iVar25) {
                                uVar22 = uVar11 + 3;
                            }
                            uVar23 = (ulong)uVar22;
                            local_50 = (ModelSource*)(ulong) * (uint*)(&PRETAB + uVar23 * 4);
                            *(undefined4*)((long)&local_88->field_364 + 4) = *(undefined4*)(&POSTTAB + uVar23 * 4);
                        } else {
                            local_50 = (ModelSource*)0;
                            bVar5 = operator!=((shared_ptr*)puVar1, (_func_decltype_nullptr*)0);
                            uVar23 = 0;
                            if (bVar5)
                                goto LAB_10030eb6f;
                        }
                        local_80._8_8_ = puVar1;
                        bVar5 = operator!=((shared_ptr*)puVar24, (_func_decltype_nullptr*)0);
                        if (bVar5) {
                            lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                            if ((*(uint*)(lVar14 + 12) & *(uint*)(&MIDTAB + uVar23 * 4)) == 0) {
                                *(undefined4*)&local_88->field_356 = 0;
                            } else {
                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                if (*(int*)(lVar14 + 12) == 16) {
                                    *(undefined4*)&local_88->field_356 = 3;
                                    iVar25 = *(int*)(&MIDDEP_16 + uVar23 * 4);
                                    *(int*)((long)&local_88->field_356 + 4) = iVar25;
                                    iVar27 = 3;
                                } else {
                                    lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                    if (*(int*)(lVar14 + 12) == 32) {
                                        *(undefined4*)&local_88->field_356 = 6;
                                        iVar25 = *(int*)(&MIDDEP_32 + uVar23 * 4);
                                        *(int*)((long)&local_88->field_356 + 4) = iVar25;
                                        iVar27 = 6;
                                    } else {
                                        lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                        if (*(int*)(lVar14 + 12) == 64) {
                                            *(undefined4*)&local_88->field_356 = 12;
                                            iVar25 = *(int*)(&MIDDEP_64 + uVar23 * 4);
                                            *(int*)((long)&local_88->field_356 + 4) = iVar25;
                                            iVar27 = 12;
                                        } else {
                                            *(undefined4*)&local_88->field_356 = 9;
                                            iVar25 = *(int*)(&MIDDEP_128 + uVar23 * 4);
                                            *(int*)((long)&local_88->field_356 + 4) = iVar25;
                                            iVar27 = 9;
                                        }
                                    }
                                }
                                *(int*)&local_88->field_364 = iVar27 - iVar25;
                            }
                            lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                            uVar11 = *(uint*)(lVar14 + 12);
                            lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                            local_58 = (ModelSource*)CONCAT44(local_58._4_4_, *(uint*)(lVar14 + 16));
                            if (((uint)local_50 & (uVar11 | *(uint*)(lVar14 + 16))) != 0) {
                                shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                    (longlong*)local_b0);
                                uVar9 = local_80._0_4_;
                                if (((uint)local_50 & uVar11) != 0) {
                                    lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                    cVar4 = WallOccluded(local_68, uVar9, (int)local_40, (int)local_48,
                                                         *(int*)(lVar14 + 12));
                                    if (cVar4 == '\0') {
                                        lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                        local_70 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                            (shared_ptr<ModelSource>*)(lVar14 + 24));
                                        local_90 = (vector<shared_ptr<Sprite>,
                                                           eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                         eastl::allocator>>*)
                                            CONCAT44(local_90._4_4_, m_cameraSinX);
                                        local_94 = m_cameraCosX;
                                        local_a4 = m_cameraSinY;
                                        local_b4 = m_cameraCosY;
                                        lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                        iVar29 = *(int*)(lVar14 + 4) - m_cx;
                                        piVar15 = (int*)shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                        iVar25 = *piVar15 - m_cy;
                                        lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                        iVar27 = *(int*)(lVar14 + 8) - m_cz;
                                        lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                        in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 56);
                                        lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                        in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 64);
                                        SubmitModelForRender(local_68, local_70, 0, (int)local_90, local_94, local_a4,
                                                             local_b4, iVar29, iVar25, iVar27,
                                                             in_stack_fffffffffffffeb8, local_80._4_4_,
                                                             in_stack_fffffffffffffec8);
                                    }
                                }
                                uVar9 = local_80._0_4_;
                                if (((uint)local_50 & (uint)local_58) != 0) {
                                    lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                    cVar4 = WallOccluded(local_68, uVar9, (int)local_40, (int)local_48,
                                                         *(int*)(lVar14 + 16));
                                    if (cVar4 == '\0') {
                                        lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                        local_58 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                            (shared_ptr<ModelSource>*)(lVar14 + 40));
                                        local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraSinX);
                                        local_90 = (vector<shared_ptr<Sprite>,
                                                           eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                         eastl::allocator>>*)
                                            CONCAT44(local_90._4_4_, m_cameraCosX);
                                        local_94 = m_cameraSinY;
                                        local_a4 = m_cameraCosY;
                                        lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                        iVar29 = *(int*)(lVar14 + 4) - m_cx;
                                        piVar15 = (int*)shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                        iVar27 = *piVar15 - m_cy;
                                        lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                        iVar25 = *(int*)(lVar14 + 8) - m_cz;
                                        lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                        in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 56);
                                        lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                        in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 64);
                                        SubmitModelForRender(local_68, local_58, 0, (int)local_70, (int)local_90,
                                                             local_94, local_a4, iVar29, iVar27, iVar25,
                                                             in_stack_fffffffffffffeb8, local_80._4_4_,
                                                             in_stack_fffffffffffffec8);
                                    }
                                }
                            }
                        }
                        uVar16 = local_80._8_8_;
                        bVar5 = operator!=((shared_ptr*)local_80._8_8_, (_func_decltype_nullptr*)0);
                        if (bVar5) {
                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                            if ((*(uint*)(lVar14 + 12) & (uint)local_50) == 0) {
                                lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                if (*(int*)(lVar14 + 12) == 256) {
                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                    iVar26 = *(int*)(lVar14 + 4) - m_cx;
                                    piVar15 = (int*)shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                    iVar29 = *piVar15 - m_cy;
                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                    iVar27 = *(int*)(lVar14 + 8) - m_cz;
                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                    iVar25 = -iVar26;
                                    if (1 < *(uint*)(lVar14 + 16) - 1) {
                                        iVar25 = iVar26;
                                    }
                                    iVar21 = -iVar27;
                                    if ((*(uint*)(lVar14 + 16) & 4294967294) != 2) {
                                        iVar21 = iVar27;
                                    }
                                    if (iVar21 < iVar25) {
                                        shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                        eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                            (longlong*)local_b0);
                                        uVar9 = local_80._0_4_;
                                        lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                        lVar14 = shared_ptr<ModelSource>::operator->(
                                            (shared_ptr<ModelSource>*)(lVar14 + 32));
                                        cVar4 = SpriteOccluded(local_68, uVar9, (int)local_40, (int)local_48,
                                                               *(int*)(lVar14 + 8));
                                        if (cVar4 == '\0') {
                                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                            local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                                (shared_ptr<ModelSource>*)(lVar14 + 32));
                                            iVar2 = m_cameraCosY;
                                            local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraSinX);
                                            local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraCosX);
                                            local_90 = (vector<shared_ptr<Sprite>,
                                                               eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                             eastl::allocator>>*)
                                                CONCAT44(local_90._4_4_, m_cameraSinY);
                                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                            iVar25 = *(int*)(lVar14 + 20);
                                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                            iVar21 = *(int*)(lVar14 + 24);
                                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                            in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 64);
                                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                            in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 76);
                                            SubmitModelForRender(local_68, local_50, 0, (uint)local_58, (int)local_70,
                                                                 (int)local_90, iVar2, iVar26 + iVar25, iVar29,
                                                                 iVar27 + iVar21, in_stack_fffffffffffffeb8,
                                                                 local_80._4_4_, in_stack_fffffffffffffec8);
                                        }
                                    } else {
                                        lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                        bVar5 = operator!=((shared_ptr*)(lVar14 + 48), (_func_decltype_nullptr*)0);
                                        if (bVar5) {
                                            shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                            eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                                (longlong*)local_b0);
                                            uVar9 = local_80._0_4_;
                                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                            lVar14 = shared_ptr<ModelSource>::operator->(
                                                (shared_ptr<ModelSource>*)(lVar14 + 32));
                                            cVar4 = SpriteOccluded(local_68, uVar9, (int)local_40, (int)local_48,
                                                                   *(int*)(lVar14 + 8));
                                            if (cVar4 == '\0') {
                                                lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                                local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                                    (shared_ptr<ModelSource>*)(lVar14 + 48));
                                                iVar25 = m_cameraCosY;
                                                local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraSinX);
                                                local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraCosX);
                                                local_90 =
                                                    (vector<shared_ptr<Sprite>,
                                                            eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)
                                                        CONCAT44(local_90._4_4_, m_cameraSinY);
                                                lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                                in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 64);
                                                lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                                in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 76);
                                                SubmitModelForRender(local_68, local_50, 0, (uint)local_58,
                                                                     (int)local_70, (int)local_90, iVar25, iVar26,
                                                                     iVar29, iVar27, in_stack_fffffffffffffeb8,
                                                                     local_80._4_4_, in_stack_fffffffffffffec8);
                                            }
                                        }
                                    }
                                }
                            } else {
                                shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                    (longlong*)local_b0);
                                uVar9 = local_80._0_4_;
                                lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                lVar14 = shared_ptr<ModelSource>::operator->((shared_ptr<ModelSource>*)(lVar14 + 32));
                                cVar4 =
                                    SpriteOccluded(local_68, uVar9, (int)local_40, (int)local_48, *(int*)(lVar14 + 8));
                                if (cVar4 == '\0') {
                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                    local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                        (shared_ptr<ModelSource>*)(lVar14 + 32));
                                    local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraSinX);
                                    local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraCosX);
                                    local_90 =
                                        (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<
                                                                        16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                                            CONCAT44(local_90._4_4_, m_cameraSinY);
                                    local_94 = m_cameraCosY;
                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                    iVar21 = m_cx;
                                    iVar25 = *(int*)(lVar14 + 4);
                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                    iVar27 = *(int*)(lVar14 + 20);
                                    piVar15 = (int*)shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                    iVar30 = *piVar15 - m_cy;
                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                    iVar2 = m_cz;
                                    iVar29 = *(int*)(lVar14 + 8);
                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                    iVar26 = *(int*)(lVar14 + 24);
                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                    in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 64);
                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)uVar16);
                                    in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 76);
                                    SubmitModelForRender(local_68, local_50, 0, (uint)local_58, (int)local_70,
                                                         (int)local_90, local_94, (iVar25 - iVar21) + iVar27, iVar30,
                                                         (iVar29 - iVar2) + iVar26, in_stack_fffffffffffffeb8,
                                                         local_80._4_4_, in_stack_fffffffffffffec8);
                                }
                            }
                        }
                        puVar24 = (undefined1*)(local_d8._16_8_ + 112);
                        bVar5 = operator!=((shared_ptr*)puVar24, (_func_decltype_nullptr*)0);
                        if (bVar5) {
                            shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)puVar24);
                            eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                (longlong*)local_b0);
                            if ((char)local_60 != '\0') {
                                lVar14 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)puVar24);
                                local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                    (shared_ptr<ModelSource>*)(lVar14 + 16));
                                local_80._8_4_ = m_cameraSinX;
                                local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraCosX);
                                local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraSinY);
                                local_90 =
                                    (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                              eastl::allocator>>*)
                                        CONCAT44(local_90._4_4_, m_cameraCosY);
                                lVar14 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)puVar24);
                                iVar29 = *(int*)(lVar14 + 4) - m_cx;
                                piVar15 = (int*)shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)puVar24);
                                iVar25 = *piVar15 - m_cy;
                                lVar14 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)puVar24);
                                iVar27 = *(int*)(lVar14 + 8) - m_cz;
                                lVar14 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)puVar24);
                                in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 32);
                                lVar14 = shared_ptr<GroundDecor>::operator->((shared_ptr<GroundDecor>*)puVar24);
                                in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 44);
                                SubmitModelForRender(local_68, local_50, 0, local_80._8_4_, (uint)local_58,
                                                     (int)local_70, (int)local_90, iVar29, iVar25, iVar27,
                                                     in_stack_fffffffffffffeb8, local_80._4_4_,
                                                     in_stack_fffffffffffffec8);
                            }
                        }
                        puVar24 = (undefined1*)(local_d8._16_8_ + 128);
                        bVar5 = operator!=((shared_ptr*)puVar24, (_func_decltype_nullptr*)0);
                        if ((bVar5) &&
                            (lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24),
                             *(int*)(lVar14 + 72) == 0)) {
                            shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                            eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                (longlong*)local_b0);
                            if ((char)local_60 != '\0') {
                                lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                bVar5 = operator!=((shared_ptr*)(lVar14 + 32), (_func_decltype_nullptr*)0);
                                if (bVar5) {
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                        (shared_ptr<ModelSource>*)(lVar14 + 32));
                                    local_80._8_4_ = m_cameraSinX;
                                    local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraCosX);
                                    local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraSinY);
                                    local_90 =
                                        (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<
                                                                        16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                                            CONCAT44(local_90._4_4_, m_cameraCosY);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar29 = *(int*)(lVar14 + 4) - m_cx;
                                    piVar15 =
                                        (int*)shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar25 = *piVar15 - m_cy;
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar27 = *(int*)(lVar14 + 8) - m_cz;
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 64);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 76);
                                    SubmitModelForRender(local_68, local_50, 0, local_80._8_4_, (uint)local_58,
                                                         (int)local_70, (int)local_90, iVar29, iVar25, iVar27,
                                                         in_stack_fffffffffffffeb8, local_80._4_4_,
                                                         in_stack_fffffffffffffec8);
                                }
                                lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                bVar5 = operator!=((shared_ptr*)(lVar14 + 48), (_func_decltype_nullptr*)0);
                                if (bVar5) {
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                        (shared_ptr<ModelSource>*)(lVar14 + 48));
                                    local_80._8_4_ = m_cameraSinX;
                                    local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraCosX);
                                    local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraSinY);
                                    local_90 =
                                        (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<
                                                                        16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                                            CONCAT44(local_90._4_4_, m_cameraCosY);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar29 = *(int*)(lVar14 + 4) - m_cx;
                                    piVar15 =
                                        (int*)shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar25 = *piVar15 - m_cy;
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar27 = *(int*)(lVar14 + 8) - m_cz;
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 64);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 76);
                                    SubmitModelForRender(local_68, local_50, 0, local_80._8_4_, (uint)local_58,
                                                         (int)local_70, (int)local_90, iVar29, iVar25, iVar27,
                                                         in_stack_fffffffffffffeb8, local_80._4_4_,
                                                         in_stack_fffffffffffffec8);
                                }
                                lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                bVar5 = operator!=((shared_ptr*)(lVar14 + 16), (_func_decltype_nullptr*)0);
                                if (bVar5) {
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                        (shared_ptr<ModelSource>*)(lVar14 + 16));
                                    local_80._8_4_ = m_cameraSinX;
                                    local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraCosX);
                                    local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraSinY);
                                    local_90 =
                                        (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<
                                                                        16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                                            CONCAT44(local_90._4_4_, m_cameraCosY);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar29 = *(int*)(lVar14 + 4) - m_cx;
                                    piVar15 =
                                        (int*)shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar25 = *piVar15 - m_cy;
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar27 = *(int*)(lVar14 + 8) - m_cz;
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 64);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 76);
                                    SubmitModelForRender(local_68, local_50, 0, local_80._8_4_, (uint)local_58,
                                                         (int)local_70, (int)local_90, iVar29, iVar25, iVar27,
                                                         in_stack_fffffffffffffeb8, local_80._4_4_,
                                                         in_stack_fffffffffffffec8);
                                }
                            }
                        }
                        if (((char)local_60 != '\0') && (this_02 = (EntityHighlight*)local_88->GetTileHighlightData(),
                                                         this_02 != (EntityHighlight*)0)) {
                            cVar4 = this_02->AlwaysOnTop();
                            iVar25 = m_cameraCosY;
                            uVar9 = (undefined4)((ulong)in_stack_fffffffffffffeb8 >> 32);
                            uVar31 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 32);
                            if (cVar4 == '\0') {
                                local_50 = (ModelSource*)CONCAT44(local_50._4_4_, local_80._0_4_);
                                local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, m_cameraSinX);
                                local_80._8_4_ = m_cameraCosX;
                                local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraSinY);
                                bVar5 = (bool)this_02->ShowInsideEdges();
                                uVar7 = this_02->GetTileOutlineWidth();
                                uVar8 = this_02->GetEntityID();
                                bVar6 = this_02->GetTileTintAlpha();
                                in_stack_fffffffffffffec8 = (EntityHighlight*)CONCAT44(uVar31, (uint)uVar7);
                                in_stack_fffffffffffffeb8 = CONCAT44(uVar9, 1);
                                local_e0->RenderGroundOverlayGrid(
                                    local_68, (uint)local_50, (int)local_60, local_80._8_4_, (uint)local_58, iVar25,
                                    (int)local_40, (int)local_48, 1, 1, bVar5, (uint)uVar7, (uint)uVar8, (uint)bVar6);
                            } else {
                                new (local_d8) GridRect((int)local_40, (int)local_48, 1, 1);
                                std::make_unique<DeferredGroundGridHighlight, int&, GridRect, EntityHighlight_const&>(
                                    (int*)local_f0, (GridRect*)local_80, (EntityHighlight*)local_d8);
                                std::unique_ptr<DeferredHighlight, std::default_delete<DeferredHighlight>>::unique_ptr<
                                    DeferredGroundGridHighlight, std::default_delete<DeferredGroundGridHighlight>, void,
                                    void>(local_f8, local_f0);
                                eastl::fixed_vector<
                                    std::unique_ptr<DeferredHighlight, std::default_delete<DeferredHighlight>>, 1024ul,
                                    true, eastl::allocator>::push_back(local_100, (unique_ptr*)local_f8);
                                std::unique_ptr<DeferredHighlight, std::default_delete<DeferredHighlight>>::~unique_ptr(
                                    local_f8);
                                local_f0->~unique_ptr();
                            }
                        }
                        this_00 = local_68;
                        uVar11 = *(uint*)&local_88->field_344;
                        if (uVar11 != 0) {
                            if (((int)local_40 < m_gx) && ((uVar11 & 4) != 0)) {
                                psVar13 =
                                    (shared_ptr*)GetSquare(local_68, (int)local_a0, (int)local_40 + 1, (int)local_48);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                if ((bVar5) && (lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                                *(char*)(lVar14 + 353) != '\0')) {
                                    local_c0->push(psVar13);
                                }
                            }
                            if (((int)local_48 < m_gz) && ((uVar11 & 2) != 0)) {
                                psVar13 =
                                    (shared_ptr*)GetSquare(this_00, (int)local_a0, (int)local_40, (int)local_48 + 1);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                if ((bVar5) && (lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                                *(char*)(lVar14 + 353) != '\0')) {
                                    local_c0->push(psVar13);
                                }
                            }
                            if ((m_gx < (int)local_40) && ((uVar11 & 1) != 0)) {
                                psVar13 =
                                    (shared_ptr*)GetSquare(this_00, (int)local_a0, (int)local_40 + -1, (int)local_48);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                if ((bVar5) && (lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                                *(char*)(lVar14 + 353) != '\0')) {
                                    local_c0->push(psVar13);
                                }
                            }
                            if ((m_gz < (int)local_48) && ((uVar11 & 8) != 0)) {
                                psVar13 =
                                    (shared_ptr*)GetSquare(this_00, (int)local_a0, (int)local_40, (int)local_48 + -1);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                if ((bVar5) && (lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                                *(char*)(lVar14 + 353) != '\0')) {
                                    local_c0->push(psVar13);
                                }
                            }
                        }
                    }
                    if (*(int*)&local_88->field_356 != 0) {
                        bVar5 = 0 < local_88->field_156;
                        if (0 < local_88->field_156) {
                            puVar24 = (undefined1*)(local_d8._16_8_ + 160);
                            puVar1 = (undefined1*)(local_d8._16_8_ + 280);
                            uVar23 = 0;
                            do {
                                psVar17 = (shared_ptr<Sprite>*)eastl::vector<
                                    shared_ptr<Sprite>,
                                    eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                                operator[](
                                    (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                              eastl::allocator>>*)
                                        puVar24,
                                    uVar23);
                                lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                if ((*(int*)(lVar14 + 72) != m_cycleNo) &&
                                    (puVar18 = (uint*)eastl::vector<
                                         int,
                                         eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::
                                     operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true,
                                                                                           eastl::allocator>>*)puVar1,
                                                uVar23),
                                     (*(uint*)&local_88->field_356 & *puVar18) ==
                                         *(uint*)((long)&local_88->field_356 + 4)))
                                    break;
                                uVar23 = uVar23 + 1;
                                bVar5 = (long)uVar23 < (long)local_88->field_156;
                            } while ((long)uVar23 < (long)local_88->field_156);
                        }
                        puVar24 = (undefined1*)(local_d8._16_8_ + 80);
                        if (!bVar5) {
                            bVar5 = puVar24->operator_cast_to_bool();
                            uVar9 = local_80._0_4_;
                            if (bVar5) {
                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                cVar4 =
                                    WallOccluded(local_68, uVar9, (int)local_40, (int)local_48, *(int*)(lVar14 + 12));
                                if (cVar4 == '\0') {
                                    lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                    local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                        (shared_ptr<ModelSource>*)(lVar14 + 24));
                                    local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, m_cameraSinX);
                                    local_80._8_4_ = m_cameraCosX;
                                    local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraSinY);
                                    local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraCosY);
                                    lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                    iVar29 = *(int*)(lVar14 + 4) - m_cx;
                                    piVar15 = (int*)shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                    iVar25 = *piVar15 - m_cy;
                                    lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                    iVar27 = *(int*)(lVar14 + 8) - m_cz;
                                    lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                    in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 56);
                                    lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                    in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 64);
                                    SubmitModelForRender(local_68, local_50, 0, (int)local_60, local_80._8_4_,
                                                         (uint)local_58, (int)local_70, iVar29, iVar25, iVar27,
                                                         in_stack_fffffffffffffeb8, local_80._4_4_,
                                                         in_stack_fffffffffffffec8);
                                }
                            }
                            *(undefined4*)&local_88->field_356 = 0;
                        }
                        bVar5 = puVar24->operator_cast_to_bool();
                        if (bVar5) {
                            shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                            eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                (longlong*)local_b0);
                        }
                    }
                    this = local_68;
                    if (*(char*)((long)&local_88->field_351 + 3) == '\0') {
                        cVar4 = *(char*)((long)&local_88->field_351 + 2);
                    joined_r0x00010030ff5b:
                        if ((cVar4 != '\0') && (*(int*)&local_88->field_356 == 0)) {
                            iVar25 = (int)local_40;
                            if ((iVar25 <= m_gx) && (m_minX < iVar25)) {
                                psVar13 = (shared_ptr*)GetSquare(this, (int)local_a0, iVar25 + -1, (int)local_48);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                iVar25 = (int)local_40;
                                if (bVar5) {
                                    lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13);
                                    iVar25 = (int)local_40;
                                    if (*(char*)(lVar14 + 353) != '\0')
                                        goto LAB_10030e220;
                                }
                            }
                            if ((m_gx <= iVar25) && ((int)local_40 < m_maxX + -1)) {
                                psVar13 = (shared_ptr*)GetSquare(this, (int)local_a0, (int)local_40 + 1, (int)local_48);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                if ((bVar5) && (lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                                *(char*)(lVar14 + 353) != '\0'))
                                    goto LAB_10030e220;
                            }
                            iVar25 = (int)local_48;
                            if ((iVar25 <= m_gz) && (m_minZ < iVar25)) {
                                psVar13 = (shared_ptr*)GetSquare(this, (int)local_a0, (int)local_40, iVar25 + -1);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                iVar25 = (int)local_48;
                                if (bVar5) {
                                    lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13);
                                    iVar25 = (int)local_48;
                                    if (*(char*)(lVar14 + 353) != '\0')
                                        goto LAB_10030e220;
                                }
                            }
                            if ((m_gz <= iVar25) && ((int)local_48 < m_maxZ + -1)) {
                                psVar13 = (shared_ptr*)GetSquare(this, (int)local_a0, (int)local_40, (int)local_48 + 1);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                if ((bVar5) && (lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                                *(char*)(lVar14 + 353) != '\0'))
                                    goto LAB_10030e220;
                            }
                            *(undefined1*)((long)&local_88->field_351 + 2) = 0;
                            m_fillLeft = m_fillLeft + -1;
                            puVar24 = (undefined1*)(local_d8._16_8_ + 128);
                            bVar5 = operator!=((shared_ptr*)puVar24, (_func_decltype_nullptr*)0);
                            if ((bVar5) &&
                                (lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24),
                                 *(int*)(lVar14 + 72) != 0)) {
                                shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                    (longlong*)local_b0);
                                lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                bVar5 = operator!=((shared_ptr*)(lVar14 + 32), (_func_decltype_nullptr*)0);
                                if (bVar5) {
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                        (shared_ptr<ModelSource>*)(lVar14 + 32));
                                    local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, m_cameraSinX);
                                    local_80._8_4_ = m_cameraCosX;
                                    local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraSinY);
                                    local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraCosY);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar26 = *(int*)(lVar14 + 4) - m_cx;
                                    puVar20 = (undefined4*)shared_ptr<GroundObject>::operator->(
                                        (shared_ptr<GroundObject>*)puVar24);
                                    iVar27 = m_cy;
                                    local_90 =
                                        (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<
                                                                        16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                                            CONCAT44(local_90._4_4_, *puVar20);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar25 = *(int*)(lVar14 + 72);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar29 = *(int*)(lVar14 + 8) - m_cz;
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 64);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 76);
                                    SubmitModelForRender(
                                        local_68, local_50, 0, (int)local_60, local_80._8_4_, (uint)local_58,
                                        (int)local_70, iVar26, (int)local_90 - (iVar27 + iVar25), iVar29,
                                        in_stack_fffffffffffffeb8, local_80._4_4_, in_stack_fffffffffffffec8);
                                }
                                lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                bVar5 = operator!=((shared_ptr*)(lVar14 + 48), (_func_decltype_nullptr*)0);
                                if (bVar5) {
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                        (shared_ptr<ModelSource>*)(lVar14 + 48));
                                    local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, m_cameraSinX);
                                    local_80._8_4_ = m_cameraCosX;
                                    local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraSinY);
                                    local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraCosY);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar26 = *(int*)(lVar14 + 4) - m_cx;
                                    puVar20 = (undefined4*)shared_ptr<GroundObject>::operator->(
                                        (shared_ptr<GroundObject>*)puVar24);
                                    iVar27 = m_cy;
                                    local_90 =
                                        (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<
                                                                        16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                                            CONCAT44(local_90._4_4_, *puVar20);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar25 = *(int*)(lVar14 + 72);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar29 = *(int*)(lVar14 + 8) - m_cz;
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 64);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 76);
                                    SubmitModelForRender(
                                        local_68, local_50, 0, (int)local_60, local_80._8_4_, (uint)local_58,
                                        (int)local_70, iVar26, (int)local_90 - (iVar27 + iVar25), iVar29,
                                        in_stack_fffffffffffffeb8, local_80._4_4_, in_stack_fffffffffffffec8);
                                }
                                lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                bVar5 = operator!=((shared_ptr*)(lVar14 + 16), (_func_decltype_nullptr*)0);
                                if (bVar5) {
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                        (shared_ptr<ModelSource>*)(lVar14 + 16));
                                    local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, m_cameraSinX);
                                    local_80._8_4_ = m_cameraCosX;
                                    local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraSinY);
                                    local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraCosY);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar26 = *(int*)(lVar14 + 4) - m_cx;
                                    puVar20 = (undefined4*)shared_ptr<GroundObject>::operator->(
                                        (shared_ptr<GroundObject>*)puVar24);
                                    iVar27 = m_cy;
                                    local_90 =
                                        (vector<shared_ptr<Sprite>, eastl::fixed_vector_allocator<
                                                                        16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                                            CONCAT44(local_90._4_4_, *puVar20);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar25 = *(int*)(lVar14 + 72);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    iVar29 = *(int*)(lVar14 + 8) - m_cz;
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 64);
                                    lVar14 = shared_ptr<GroundObject>::operator->((shared_ptr<GroundObject>*)puVar24);
                                    in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 76);
                                    SubmitModelForRender(
                                        local_68, local_50, 0, (int)local_60, local_80._8_4_, (uint)local_58,
                                        (int)local_70, iVar26, (int)local_90 - (iVar27 + iVar25), iVar29,
                                        in_stack_fffffffffffffeb8, local_80._4_4_, in_stack_fffffffffffffec8);
                                }
                            }
                            if (*(int*)((long)&local_88->field_364 + 4) != 0) {
                                puVar24 = (undefined1*)(local_d8._16_8_ + 96);
                                bVar5 = operator!=((shared_ptr*)puVar24, (_func_decltype_nullptr*)0);
                                if (bVar5) {
                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                    if ((*(uint*)(lVar14 + 12) & *(uint*)((long)&local_88->field_364 + 4)) == 0) {
                                        lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                        if (*(int*)(lVar14 + 12) == 256) {
                                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                            iVar26 = *(int*)(lVar14 + 4) - m_cx;
                                            piVar15 = (int*)shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                            iVar27 = *piVar15 - m_cy;
                                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                            iVar29 = *(int*)(lVar14 + 8) - m_cz;
                                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                            iVar25 = -iVar26;
                                            if (1 < *(uint*)(lVar14 + 16) - 1) {
                                                iVar25 = iVar26;
                                            }
                                            iVar21 = -iVar29;
                                            if ((*(uint*)(lVar14 + 16) & 4294967294) != 2) {
                                                iVar21 = iVar29;
                                            }
                                            if (iVar21 < iVar25) {
                                                lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                                bVar5 = operator!=((shared_ptr*)(lVar14 + 48),
                                                                   (_func_decltype_nullptr*)0);
                                                if (bVar5) {
                                                    shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                                    eastl::fixed_vector<long long, 10000ul, true,
                                                                        eastl::allocator>::push_back((longlong*)
                                                                                                         local_b0);
                                                    uVar9 = local_80._0_4_;
                                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                                    lVar14 = shared_ptr<ModelSource>::operator->(
                                                        (shared_ptr<ModelSource>*)(lVar14 + 32));
                                                    cVar4 = SpriteOccluded(local_68, uVar9, (int)local_40,
                                                                           (int)local_48, *(int*)(lVar14 + 8));
                                                    if (cVar4 == '\0') {
                                                        lVar14 =
                                                            shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                                        local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                                            (shared_ptr<ModelSource>*)(lVar14 + 48));
                                                        local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, m_cameraSinX);
                                                        local_80._8_4_ = m_cameraCosX;
                                                        local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraSinY);
                                                        local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraCosY);
                                                        lVar14 =
                                                            shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                                        in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 64);
                                                        lVar14 =
                                                            shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                                        in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 76);
                                                        SubmitModelForRender(local_68, local_50, 0, (int)local_60,
                                                                             local_80._8_4_, (uint)local_58,
                                                                             (int)local_70, iVar26, iVar27, iVar29,
                                                                             in_stack_fffffffffffffeb8, local_80._4_4_,
                                                                             in_stack_fffffffffffffec8);
                                                    }
                                                }
                                            } else {
                                                shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                                eastl::fixed_vector<long long, 10000ul, true,
                                                                    eastl::allocator>::push_back((longlong*)local_b0);
                                                uVar9 = local_80._0_4_;
                                                lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                                lVar14 = shared_ptr<ModelSource>::operator->(
                                                    (shared_ptr<ModelSource>*)(lVar14 + 32));
                                                cVar4 = SpriteOccluded(local_68, uVar9, (int)local_40, (int)local_48,
                                                                       *(int*)(lVar14 + 8));
                                                if (cVar4 == '\0') {
                                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                                    local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                                        (shared_ptr<ModelSource>*)(lVar14 + 32));
                                                    local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, m_cameraSinX);
                                                    local_80._8_4_ = m_cameraCosX;
                                                    local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraSinY);
                                                    local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraCosY);
                                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                                    iVar25 = *(int*)(lVar14 + 20);
                                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                                    iVar21 = *(int*)(lVar14 + 24);
                                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                                    in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 64);
                                                    lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                                    in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 76);
                                                    SubmitModelForRender(local_68, local_50, 0, (int)local_60,
                                                                         local_80._8_4_, (uint)local_58, (int)local_70,
                                                                         iVar26 + iVar25, iVar27, iVar29 + iVar21,
                                                                         in_stack_fffffffffffffeb8, local_80._4_4_,
                                                                         in_stack_fffffffffffffec8);
                                                }
                                            }
                                        }
                                    } else {
                                        shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                        eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                            (longlong*)local_b0);
                                        uVar9 = local_80._0_4_;
                                        lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                        lVar14 = shared_ptr<ModelSource>::operator->(
                                            (shared_ptr<ModelSource>*)(lVar14 + 32));
                                        cVar4 = SpriteOccluded(local_68, uVar9, (int)local_40, (int)local_48,
                                                               *(int*)(lVar14 + 8));
                                        if (cVar4 == '\0') {
                                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                            local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                                (shared_ptr<ModelSource>*)(lVar14 + 32));
                                            local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, m_cameraSinX);
                                            local_80._8_4_ = m_cameraCosX;
                                            local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraSinY);
                                            local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraCosY);
                                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                            iVar21 = m_cx;
                                            iVar25 = *(int*)(lVar14 + 4);
                                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                            iVar27 = *(int*)(lVar14 + 20);
                                            piVar15 = (int*)shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                            iVar30 = *piVar15 - m_cy;
                                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                            iVar2 = m_cz;
                                            iVar29 = *(int*)(lVar14 + 8);
                                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                            iVar26 = *(int*)(lVar14 + 24);
                                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                            in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 64);
                                            lVar14 = shared_ptr<Decor>::operator->((shared_ptr<Decor>*)puVar24);
                                            in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 76);
                                            SubmitModelForRender(local_68, local_50, 0, (int)local_60, local_80._8_4_,
                                                                 (uint)local_58, (int)local_70,
                                                                 (iVar25 - iVar21) + iVar27, iVar30,
                                                                 (iVar29 - iVar2) + iVar26, in_stack_fffffffffffffeb8,
                                                                 local_80._4_4_, in_stack_fffffffffffffec8);
                                        }
                                    }
                                }
                                puVar24 = (undefined1*)(local_d8._16_8_ + 80);
                                bVar5 = operator!=((shared_ptr*)puVar24, (_func_decltype_nullptr*)0);
                                if (bVar5) {
                                    lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                    uVar11 = *(uint*)(lVar14 + 12);
                                    uVar22 = *(uint*)((long)&local_88->field_364 + 4);
                                    lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                    if (((uVar22 & uVar11) != 0) ||
                                        ((*(uint*)(lVar14 + 16) & *(uint*)((long)&local_88->field_364 + 4)) != 0)) {
                                        shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                        eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                            (longlong*)local_b0);
                                        lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                        uVar9 = local_80._0_4_;
                                        if ((*(uint*)(lVar14 + 16) & *(uint*)((long)&local_88->field_364 + 4)) != 0) {
                                            lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                            cVar4 = WallOccluded(local_68, uVar9, (int)local_40, (int)local_48,
                                                                 *(int*)(lVar14 + 16));
                                            if (cVar4 == '\0') {
                                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                                local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                                    (shared_ptr<ModelSource>*)(lVar14 + 40));
                                                local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, m_cameraSinX);
                                                local_80._8_4_ = m_cameraCosX;
                                                local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraSinY);
                                                local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraCosY);
                                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                                iVar27 = *(int*)(lVar14 + 4) - m_cx;
                                                piVar15 =
                                                    (int*)shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                                iVar29 = *piVar15 - m_cy;
                                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                                iVar25 = *(int*)(lVar14 + 8) - m_cz;
                                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                                in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 56);
                                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                                in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 64);
                                                SubmitModelForRender(local_68, local_50, 0, (int)local_60,
                                                                     local_80._8_4_, (uint)local_58, (int)local_70,
                                                                     iVar27, iVar29, iVar25, in_stack_fffffffffffffeb8,
                                                                     local_80._4_4_, in_stack_fffffffffffffec8);
                                            }
                                        }
                                        lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                        uVar9 = local_80._0_4_;
                                        if ((*(uint*)(lVar14 + 12) & *(uint*)((long)&local_88->field_364 + 4)) != 0) {
                                            lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                            cVar4 = WallOccluded(local_68, uVar9, (int)local_40, (int)local_48,
                                                                 *(int*)(lVar14 + 12));
                                            if (cVar4 == '\0') {
                                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                                local_50 = (ModelSource*)shared_ptr<ModelSource>::operator*(
                                                    (shared_ptr<ModelSource>*)(lVar14 + 24));
                                                local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, m_cameraSinX);
                                                local_88 = (Square*)CONCAT44(local_88._4_4_, m_cameraCosX);
                                                local_80._8_4_ = m_cameraSinY;
                                                local_58 = (ModelSource*)CONCAT44(local_58._4_4_, m_cameraCosY);
                                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                                iVar27 = *(int*)(lVar14 + 4) - m_cx;
                                                piVar15 =
                                                    (int*)shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                                iVar29 = *piVar15 - m_cy;
                                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                                iVar25 = *(int*)(lVar14 + 8) - m_cz;
                                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                                in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 56);
                                                lVar14 = shared_ptr<Wall>::operator->((shared_ptr<Wall>*)puVar24);
                                                in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 64);
                                                SubmitModelForRender(local_68, local_50, 0, (int)local_60,
                                                                     (int)local_88, local_80._8_4_, (uint)local_58,
                                                                     iVar27, iVar29, iVar25, in_stack_fffffffffffffeb8,
                                                                     local_80._4_4_, in_stack_fffffffffffffec8);
                                            }
                                        }
                                    }
                                }
                            }
                            this = local_68;
                            if ((int)local_a0 < local_68->field_21800 + -1) {
                                psVar13 =
                                    (shared_ptr*)GetSquare(local_68, (int)local_a0 + 1, (int)local_40, (int)local_48);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                if ((bVar5) && (lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                                *(char*)(lVar14 + 353) != '\0')) {
                                    local_c0->push(psVar13);
                                }
                            }
                            if ((int)local_40 < m_gx) {
                                psVar13 = (shared_ptr*)GetSquare(this, (int)local_a0, (int)local_40 + 1, (int)local_48);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                if ((bVar5) && (lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                                *(char*)(lVar14 + 353) != '\0')) {
                                    local_c0->push(psVar13);
                                }
                            }
                            if ((int)local_48 < m_gz) {
                                psVar13 = (shared_ptr*)GetSquare(this, (int)local_a0, (int)local_40, (int)local_48 + 1);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                if ((bVar5) && (lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                                *(char*)(lVar14 + 353) != '\0')) {
                                    local_c0->push(psVar13);
                                }
                            }
                            if (m_gx < (int)local_40) {
                                psVar13 =
                                    (shared_ptr*)GetSquare(this, (int)local_a0, (int)local_40 + -1, (int)local_48);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                if ((bVar5) && (lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                                *(char*)(lVar14 + 353) != '\0')) {
                                    local_c0->push(psVar13);
                                }
                            }
                            if (m_gz < (int)local_48) {
                                psVar13 =
                                    (shared_ptr*)GetSquare(this, (int)local_a0, (int)local_40, (int)local_48 + -1);
                                bVar5 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                                if ((bVar5) && (lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13),
                                                *(char*)(lVar14 + 353) != '\0')) {
                                    local_c0->push(psVar13);
                                    param_2 = (bool)local_31;
                                    goto LAB_10030e226;
                                }
                            }
                        }
                    } else {
                        iVar25 = local_88->field_156;
                        *(undefined1*)((long)&local_88->field_351 + 3) = 0;
                        local_70 = (ModelSource*)CONCAT44(local_70._4_4_, iVar25);
                        if (iVar25 < 1) {
                            local_58 = (ModelSource*)((ulong)local_58._4_4_ << 32);
                        } else {
                            local_90 =
                                (vector<shared_ptr<Sprite>,
                                        eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                      eastl::allocator>>*)(local_d8._16_8_ + 160);
                            local_58 = (ModelSource*)((ulong)local_58._4_4_ << 32);
                            iVar25 = 0;
                        LAB_10030fcbd:
                            do {
                                psVar13 = (shared_ptr*)eastl::vector<
                                    shared_ptr<Sprite>,
                                    eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                                operator[](local_90, (long)iVar25);
                                lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar13);
                                iVar27 = 0;
                                local_60 = psVar13;
                                if (*(int*)(lVar14 + 72) != m_cycleNo) {
                                    lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar13);
                                    local_50 = (ModelSource*)CONCAT44(local_50._4_4_, *(undefined4*)(lVar14 + 52));
                                    do {
                                        lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)local_60);
                                        if (*(int*)(lVar14 + 56) < (int)(uint)local_50) {
                                            iVar27 = 14;
                                            break;
                                        }
                                        lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)local_60);
                                        for (iVar29 = *(int*)(lVar14 + 60);
                                             lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)local_60),
                                            iVar29 <= *(int*)(lVar14 + 64);
                                             iVar29 = iVar29 + 1) {
                                            psVar13 =
                                                (shared_ptr*)GetSquare(this, (int)local_a0, (uint)local_50, iVar29);
                                            bVar5 = shared_ptr::operator_cast_to_bool(psVar13);
                                            iVar27 = 19;
                                            if (bVar5) {
                                                lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13);
                                                if (*(char*)(lVar14 + 352) == '\0') {
                                                    lVar14 =
                                                        shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13);
                                                    this_01 = local_60;
                                                    if (*(int*)(lVar14 + 356) != 0) {
                                                        local_80._8_4_ = iVar25;
                                                        lVar14 = shared_ptr<Sprite>::operator->(
                                                            (shared_ptr<Sprite>*)local_60);
                                                        bVar5 = *(int*)(lVar14 + 52) < (int)(uint)local_50;
                                                        lVar14 = shared_ptr<Sprite>::operator->(
                                                            (shared_ptr<Sprite>*)this_01);
                                                        uVar11 = bVar5 + 4;
                                                        if (*(int*)(lVar14 + 56) <= (int)(uint)local_50) {
                                                            uVar11 = (uint)bVar5;
                                                        }
                                                        lVar14 = shared_ptr<Sprite>::operator->(
                                                            (shared_ptr<Sprite>*)this_01);
                                                        if (*(int*)(lVar14 + 60) < iVar29) {
                                                            uVar11 = uVar11 + 8;
                                                        }
                                                        lVar14 = shared_ptr<Sprite>::operator->(
                                                            (shared_ptr<Sprite>*)this_01);
                                                        iVar25 = *(int*)(lVar14 + 64);
                                                        lVar14 = shared_ptr<Square>::operator->(
                                                            (shared_ptr<Square>*)psVar13);
                                                        uVar22 = uVar11 | 2;
                                                        if (iVar25 <= iVar29) {
                                                            uVar22 = uVar11;
                                                        }
                                                        this = local_68;
                                                        if ((uVar22 & *(uint*)(lVar14 + 356)) ==
                                                            *(uint*)&local_88->field_364) {
                                                            *(undefined1*)((long)&local_88->field_351 + 3) = 1;
                                                            iVar25 = local_80._8_4_ + 1;
                                                            iVar27 = 10;
                                                            goto LAB_10030fe70;
                                                        }
                                                        iVar25 = local_80._8_4_;
                                                    }
                                                    iVar27 = 0;
                                                } else {
                                                    *(undefined1*)((long)&local_88->field_351 + 3) = 1;
                                                    iVar25 = iVar25 + 1;
                                                    iVar27 = 10;
                                                }
                                            }
                                        LAB_10030fe70:
                                            if ((iVar27 != 19) && (iVar27 != 0))
                                                goto LAB_10030fd05;
                                        }
                                        iVar27 = 17;
                                    LAB_10030fd05:
                                        local_50 = (ModelSource*)CONCAT44(local_50._4_4_, (uint)local_50 + 1);
                                    } while (iVar27 == 17);
                                    if (iVar27 == 14) {
                                        psVar17 = (shared_ptr<Sprite>*)eastl::vector<
                                            shared_ptr<Sprite>, eastl::fixed_vector_allocator<16ul, 100ul, 8ul, 0ul,
                                                                                              true, eastl::allocator>>::
                                        operator[]((vector<shared_ptr<Sprite>,
                                                           eastl::fixed_vector_allocator<16ul, 100ul, 8ul, 0ul, true,
                                                                                         eastl::allocator>>*)this,
                                                   (long)(int)(uint)local_58);
                                        psVar13 = local_60;
                                        shared_ptr<Sprite>::operator=(psVar17, local_60);
                                        iVar27 = m_gx;
                                        lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar13);
                                        iVar27 = iVar27 - *(int*)(lVar14 + 52);
                                        lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar13);
                                        iVar29 = m_gz;
                                        iVar26 = *(int*)(lVar14 + 56) - m_gx;
                                        if (iVar26 <= iVar27) {
                                            iVar26 = iVar27;
                                        }
                                        lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar13);
                                        iVar29 = iVar29 - *(int*)(lVar14 + 60);
                                        lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)psVar13);
                                        iVar27 = *(int*)(lVar14 + 64) - m_gz;
                                        if (iVar29 < iVar27) {
                                            lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)local_60);
                                        } else {
                                            lVar14 = shared_ptr<Sprite>::operator->((shared_ptr<Sprite>*)local_60);
                                            iVar27 = iVar29;
                                        }
                                        local_58 = (ModelSource*)CONCAT44(local_58._4_4_, (uint)local_58 + 1);
                                        *(int*)(lVar14 + 68) = iVar27 + iVar26;
                                        iVar27 = 0;
                                        this = local_68;
                                    }
                                }
                                if (iVar27 == 0) {
                                    iVar25 = iVar25 + 1;
                                    if ((int)local_70 <= iVar25)
                                        break;
                                    goto LAB_10030fcbd;
                                }
                            } while (iVar25 < (int)local_70);
                        }
                        if (0 < (int)(uint)local_58) {
                            local_50 = (ModelSource*)((ulong)local_58 & 4294967295);
                            do {
                                local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, 4294967295);
                                iVar25 = -50;
                                pMVar28 = (ModelSource*)0;
                                do {
                                    psVar17 = (shared_ptr<Sprite>*)eastl::vector<
                                        shared_ptr<Sprite>,
                                        eastl::fixed_vector_allocator<16ul, 100ul, 8ul, 0ul, true, eastl::allocator>>::
                                    operator[]((vector<shared_ptr<Sprite>,
                                                       eastl::fixed_vector_allocator<16ul, 100ul, 8ul, 0ul, true,
                                                                                     eastl::allocator>>*)this,
                                               (ulong)pMVar28);
                                    lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                    if (*(int*)(lVar14 + 72) != m_cycleNo) {
                                        lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                        if (iVar25 < *(int*)(lVar14 + 68)) {
                                            lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                            local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, (int)pMVar28);
                                            iVar25 = *(int*)(lVar14 + 68);
                                        } else {
                                            lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                            if (*(int*)(lVar14 + 68) == iVar25) {
                                                lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                                iVar29 = *(int*)(lVar14 + 8) - m_cx;
                                                lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                                local_80._8_4_ = iVar25;
                                                iVar27 = *(int*)(lVar14 + 12) - m_cz;
                                                uVar23 = (ulong)(int)local_60;
                                                psVar17 = (shared_ptr<Sprite>*)eastl::vector<
                                                    shared_ptr<Sprite>,
                                                    eastl::fixed_vector_allocator<16ul, 100ul, 8ul, 0ul, true,
                                                                                  eastl::allocator>>::
                                                operator[](
                                                    (vector<shared_ptr<Sprite>,
                                                            eastl::fixed_vector_allocator<16ul, 100ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)this,
                                                    uVar23);
                                                lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                                iVar26 = *(int*)(lVar14 + 8) - m_cx;
                                                psVar17 = (shared_ptr<Sprite>*)eastl::vector<
                                                    shared_ptr<Sprite>,
                                                    eastl::fixed_vector_allocator<16ul, 100ul, 8ul, 0ul, true,
                                                                                  eastl::allocator>>::
                                                operator[](
                                                    (vector<shared_ptr<Sprite>,
                                                            eastl::fixed_vector_allocator<16ul, 100ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)this,
                                                    uVar23);
                                                lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                                iVar25 = *(int*)(lVar14 + 12) - m_cz;
                                                uVar9 = (int)pMVar28;
                                                if ((uint)(iVar27 * iVar27 + iVar29 * iVar29) <=
                                                    (uint)(iVar25 * iVar25 + iVar26 * iVar26)) {
                                                    uVar9 = (int)local_60;
                                                }
                                                local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, uVar9);
                                                this = local_68;
                                                iVar25 = local_80._8_4_;
                                            }
                                        }
                                    }
                                    pMVar28 = (ModelSource*)((long)&pMVar28->field_0 + 1);
                                } while (local_50 != pMVar28);
                                if ((int)local_60 != -1) {
                                    psVar17 = (shared_ptr<Sprite>*)eastl::vector<
                                        shared_ptr<Sprite>,
                                        eastl::fixed_vector_allocator<16ul, 100ul, 8ul, 0ul, true, eastl::allocator>>::
                                    operator[]((vector<shared_ptr<Sprite>,
                                                       eastl::fixed_vector_allocator<16ul, 100ul, 8ul, 0ul, true,
                                                                                     eastl::allocator>>*)this,
                                               (long)(int)local_60);
                                    iVar25 = m_cycleNo;
                                    lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                    *(int*)(lVar14 + 72) = iVar25;
                                    shared_ptr<Sprite>::operator->(psVar17);
                                    eastl::fixed_vector<long long, 10000ul, true, eastl::allocator>::push_back(
                                        (longlong*)local_b0);
                                    lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                    cVar4 = ((lVar14 + 92))->HasTileHighlight();
                                    if (cVar4 != '\0') {
                                        lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                        local_d8._0_8_ = *(longlong*)(lVar14 + 16);
                                        local_d8._8_8_ = *(undefined8*)(lVar14 + 24);
                                        lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                        cVar4 = ((lVar14 + 92))->isAllocated();
                                        if (cVar4 != '\0') {
                                            local_d8._8_4_ = 1;
                                            local_d8._12_4_ = 1;
                                        }
                                        lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                        cVar4 = ((lVar14 + 92))->AlwaysOnTop();
                                        uVar9 = (undefined4)((ulong)in_stack_fffffffffffffeb8 >> 32);
                                        uVar31 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 32);
                                        if (cVar4 == '\0') {
                                            lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                            cVar4 = ((lVar14 + 92))->SnapToGrid();
                                            local_80._8_4_ = local_80._0_4_;
                                            local_70 = (ModelSource*)CONCAT44(local_70._4_4_, m_cameraSinX);
                                            local_94 = m_cameraCosX;
                                            local_90 = (vector<shared_ptr<Sprite>,
                                                               eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                             eastl::allocator>>*)
                                                CONCAT44(local_90._4_4_, m_cameraSinY);
                                            local_a4 = m_cameraCosY;
                                            if (cVar4 == '\0') {
                                                lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                                local_b4 = *(int*)(lVar14 + 8);
                                                lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                                local_e8 = *(int*)(lVar14 + 12);
                                                local_e4 = local_d8._8_4_;
                                                local_104 = local_d8._12_4_;
                                                lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                                bVar5 = (bool)((lVar14 + 92))->ShowInsideEdges();
                                                lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                                uVar12 = ((lVar14 + 92))->GetTileOutlineWidth();
                                                lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                                uVar11 = ((lVar14 + 92))->GetEntityID();
                                                lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                                bVar6 = ((lVar14 + 92))->GetTileTintAlpha();
                                                in_stack_fffffffffffffec8 =
                                                    (EntityHighlight*)(CONCAT44(uVar31, uVar12) & 18446744069414649855);
                                                in_stack_fffffffffffffeb8 = CONCAT44(uVar9, local_104);
                                                local_e0->RenderGroundOverlayFine(
                                                    local_68, local_80._8_4_, (int)local_70, local_94, (int)local_90,
                                                    local_a4, local_b4, local_e8, local_e4, local_104, bVar5,
                                                    (int)in_stack_fffffffffffffec8, uVar11 & 65535, (uint)bVar6);
                                            } else {
                                                local_b4 = local_d8._0_4_;
                                                local_e8 = local_d8._4_4_;
                                                local_e4 = local_d8._8_4_;
                                                uVar12 = local_d8._12_4_;
                                                lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                                bVar5 = (bool)((lVar14 + 92))->ShowInsideEdges();
                                                lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                                uVar10 = ((lVar14 + 92))->GetTileOutlineWidth();
                                                lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                                uVar11 = ((lVar14 + 92))->GetEntityID();
                                                lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                                bVar6 = ((lVar14 + 92))->GetTileTintAlpha();
                                                in_stack_fffffffffffffec8 =
                                                    (EntityHighlight*)(CONCAT44(uVar31, uVar10) & 18446744069414649855);
                                                in_stack_fffffffffffffeb8 = CONCAT44(uVar9, uVar12);
                                                local_e0->RenderGroundOverlayGrid(
                                                    local_68, local_80._8_4_, (int)local_70, local_94, (int)local_90,
                                                    local_a4, local_b4, local_e8, local_e4, uVar12, bVar5,
                                                    (int)in_stack_fffffffffffffec8, uVar11 & 65535, (uint)bVar6);
                                            }
                                        } else {
                                            lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                            cVar4 = ((lVar14 + 92))->SnapToGrid();
                                            if (cVar4 == '\0') {
                                                lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                                lVar19 = shared_ptr<Sprite>::operator->(psVar17);
                                                shared_ptr<Sprite>::operator->(psVar17);
                                                std::make_unique<DeferredGroundFineHighlight, int&, int&, int&,
                                                                 GridRect&, EntityHighlight&>(
                                                    (int*)local_f0, (int*)local_80, (int*)(lVar14 + 8),
                                                    (GridRect*)(lVar19 + 12), (EntityHighlight*)local_d8);
                                                std::unique_ptr<DeferredHighlight,
                                                                std::default_delete<DeferredHighlight>>::
                                                    unique_ptr<DeferredGroundFineHighlight,
                                                               std::default_delete<DeferredGroundFineHighlight>, void,
                                                               void>(local_f8, local_f0);
                                                eastl::fixed_vector<
                                                    std::unique_ptr<DeferredHighlight,
                                                                    std::default_delete<DeferredHighlight>>,
                                                    1024ul, true, eastl::allocator>::push_back(local_100,
                                                                                               (unique_ptr*)local_f8);
                                                std::unique_ptr<
                                                    DeferredHighlight,
                                                    std::default_delete<DeferredHighlight>>::~unique_ptr(local_f8);
                                                local_f0->~unique_ptr();
                                            } else {
                                                shared_ptr<Sprite>::operator->(psVar17);
                                                std::make_unique<DeferredGroundGridHighlight, int&, GridRect&,
                                                                 EntityHighlight&>((int*)local_f0, (GridRect*)local_80,
                                                                                   (EntityHighlight*)local_d8);
                                                std::unique_ptr<DeferredHighlight,
                                                                std::default_delete<DeferredHighlight>>::
                                                    unique_ptr<DeferredGroundGridHighlight,
                                                               std::default_delete<DeferredGroundGridHighlight>, void,
                                                               void>(local_f8, local_f0);
                                                eastl::fixed_vector<
                                                    std::unique_ptr<DeferredHighlight,
                                                                    std::default_delete<DeferredHighlight>>,
                                                    1024ul, true, eastl::allocator>::push_back(local_100,
                                                                                               (unique_ptr*)local_f8);
                                                std::unique_ptr<
                                                    DeferredHighlight,
                                                    std::default_delete<DeferredHighlight>>::~unique_ptr(local_f8);
                                                local_f0->~unique_ptr();
                                            }
                                        }
                                    }
                                    uVar9 = local_80._0_4_;
                                    lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                    local_80._8_4_ = *(undefined4*)(lVar14 + 52);
                                    lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                    iVar25 = *(int*)(lVar14 + 56);
                                    lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                    iVar27 = *(int*)(lVar14 + 60);
                                    lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                    iVar29 = *(int*)(lVar14 + 64);
                                    lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                    lVar14 =
                                        shared_ptr<ModelSource>::operator->((shared_ptr<ModelSource>*)(lVar14 + 32));
                                    cVar4 = SpriteOccluded(local_68, uVar9, local_80._8_4_, iVar25, iVar27, iVar29,
                                                           *(int*)(lVar14 + 8));
                                    if (cVar4 == '\0') {
                                        lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                        local_80._8_8_ =
                                            shared_ptr<ModelSource>::operator*((shared_ptr<ModelSource>*)(lVar14 + 32));
                                        lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                        local_70 = (ModelSource*)CONCAT44(local_70._4_4_, *(undefined4*)(lVar14 + 48));
                                        local_90 = (vector<shared_ptr<Sprite>,
                                                           eastl::fixed_vector_allocator<16ul, 5ul, 8ul, 0ul, true,
                                                                                         eastl::allocator>>*)
                                            CONCAT44(local_90._4_4_, m_cameraSinX);
                                        local_94 = m_cameraCosX;
                                        local_a4 = m_cameraSinY;
                                        local_b4 = m_cameraCosY;
                                        lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                        iVar29 = *(int*)(lVar14 + 8) - m_cx;
                                        lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                        iVar25 = *(int*)(lVar14 + 4) - m_cy;
                                        lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                        iVar27 = *(int*)(lVar14 + 12) - m_cz;
                                        lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                        in_stack_fffffffffffffeb8 = *(longlong*)(lVar14 + 80);
                                        lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                        in_stack_fffffffffffffec8 = (EntityHighlight*)(lVar14 + 92);
                                        SubmitModelForRender(local_68, (ModelSource*)local_80._8_8_, (int)local_70,
                                                             (int)local_90, local_94, local_a4, local_b4, iVar29,
                                                             iVar25, iVar27, in_stack_fffffffffffffeb8, local_80._4_4_,
                                                             in_stack_fffffffffffffec8);
                                    }
                                    lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                    this = local_68;
                                    for (iVar25 = *(int*)(lVar14 + 52);
                                         lVar14 = shared_ptr<Sprite>::operator->(psVar17),
                                        iVar25 <= *(int*)(lVar14 + 56);
                                         iVar25 = iVar25 + 1) {
                                        lVar14 = shared_ptr<Sprite>::operator->(psVar17);
                                        for (iVar27 = *(int*)(lVar14 + 60);
                                             lVar14 = shared_ptr<Sprite>::operator->(psVar17),
                                            iVar27 <= *(int*)(lVar14 + 64);
                                             iVar27 = iVar27 + 1) {
                                            psVar13 = (shared_ptr*)GetSquare(this, (int)local_a0, iVar25, iVar27);
                                            bVar5 = shared_ptr::operator_cast_to_bool(psVar13);
                                            if (bVar5) {
                                                lVar14 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar13);
                                                if (*(int*)(lVar14 + 356) == 0) {
                                                    if (((iVar25 != (int)local_40) || ((int)local_48 != iVar27)) &&
                                                        (lVar14 = shared_ptr<Square>::operator->(
                                                             (shared_ptr<Square>*)psVar13),
                                                         *(char*)(lVar14 + 353) != '\0')) {
                                                        local_c0->push(psVar13);
                                                    }
                                                } else {
                                                    local_c0->push(psVar13);
                                                }
                                            }
                                        }
                                    }
                                }
                            } while (((int)local_60 != -1) && (0 < (int)(uint)local_58));
                        }
                        if (*(char*)((long)&local_88->field_351 + 3) == '\0') {
                            cVar4 = *(char*)((long)&local_88->field_351 + 2);
                            goto joined_r0x00010030ff5b;
                        }
                    }
                LAB_10030e220:
                    param_2 = (bool)local_31;
                }
            LAB_10030e226:
                local_118->~shared_ptr();
                cVar4 = local_c0->empty();
            } while (cVar4 == '\0');
        }
    }

    // 0x1003115c0, 176 bytes, placed by class name
    // world::RenderAlwaysOnTopHighlights(int)
    void world::RenderAlwaysOnTopHighlights(int param_1) {
        undefined1* this_00;
        unique_ptr<DeferredHighlight, std::default_delete<DeferredHighlight>>* this_01;
        unique_ptr<DeferredHighlight, std::default_delete<DeferredHighlight>>* puVar1;
        undefined8* puVar2;

        this_00 = &field_21840;
        this_01 = (unique_ptr<DeferredHighlight, std::default_delete<DeferredHighlight>>*)this_00->HeapBeginPtr();
        puVar1 = (unique_ptr<DeferredHighlight, std::default_delete<DeferredHighlight>>*)this_00->end();
        for (; this_01 != puVar1; this_01 = this_01 + 8) {
            puVar2 =
                (undefined8*)std::unique_ptr<DeferredHighlight, std::default_delete<DeferredHighlight>>::operator->(
                    this_01);
            (**(code**)*puVar2)(puVar2, this, m_worldRenderer, m_modelLitRenderer, m_cameraSinX, m_cameraCosX,
                                m_cameraSinY, m_cameraCosY, param_1);
        }
        this_00->clear();
    }

    // 0x1003116b0, 2080 bytes, placed by class name
    // world::RenderAllSlow(int, int, int, int, int, int, int)
    void world::RenderAllSlow(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                              int param_7) {
        uint uVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        array<int, 2048ul>* this_00;
        array<int, 2048ul>* this_01;
        undefined4* puVar6;
        shared_ptr* psVar7;
        long lVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        uint uVar13;
        uint uVar14;
        int iVar15;
        bool bVar16;
        int local_50;

        iVar12 = 0;
        if ((-1 < param_1) && (iVar3 = field_21804 * 128, iVar12 = iVar3 + -1, param_1 < iVar3)) {
            iVar12 = param_1;
        }
        iVar3 = 0;
        if ((-1 < param_3) && (iVar4 = field_21808 * 128, iVar3 = iVar4 + -1, param_3 < iVar4)) {
            iVar3 = param_3;
        }
        m_cycleNo = m_cycleNo + 1;
        this_00 = (array<int, 2048ul>*)Pix3D::GetSinTable();
        this_01 = (array<int, 2048ul>*)Pix3D::GetCosTable();
        puVar6 = (undefined4*)std::array<int, 2048ul>::operator[](this_00, (long)param_4);
        m_cameraSinX = *puVar6;
        puVar6 = (undefined4*)std::array<int, 2048ul>::operator[](this_01, (long)param_4);
        m_cameraCosX = *puVar6;
        puVar6 = (undefined4*)std::array<int, 2048ul>::operator[](this_00, (long)param_5);
        m_cameraSinY = *puVar6;
        puVar6 = (undefined4*)std::array<int, 2048ul>::operator[](this_01, (long)param_5);
        m_cameraCosY = *puVar6;
        iVar4 = iVar12 + 127;
        if (-1 < iVar12) {
            iVar4 = iVar12;
        }
        m_gx = iVar4 >> 7;
        iVar4 = iVar3 + 127;
        if (-1 < iVar3) {
            iVar4 = iVar3;
        }
        m_gz = iVar4 >> 7;
        m_maxLevel = param_6;
        m_minX = 0;
        m_minZ = 0;
        m_maxX = field_21804;
        m_maxZ = field_21808;
        m_cx = iVar12;
        m_cy = param_2;
        m_cz = iVar3;
        field_17736 = 0;
        m_fillLeft = 0;
        iVar12 = field_110120;
        if (iVar12 < field_21800) {
            do {
                for (iVar3 = m_minX; iVar3 < m_maxX; iVar3 = iVar3 + 1) {
                    for (iVar4 = m_minZ; iVar4 < m_maxZ; iVar4 = iVar4 + 1) {
                        psVar7 = (shared_ptr*)GetSquare(this, iVar12, iVar3, iVar4);
                        bVar16 = operator!=(psVar7, (_func_decltype_nullptr*)0);
                        if (bVar16) {
                            lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar7);
                            iVar9 = *(int*)(lVar8 + 348);
                            lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar7);
                            if (param_6 < iVar9) {
                                *(undefined1*)(lVar8 + 352) = 0;
                                lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar7);
                                *(undefined1*)(lVar8 + 353) = 0;
                                lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar7);
                                *(undefined4*)(lVar8 + 356) = 0;
                            } else {
                                *(undefined1*)(lVar8 + 352) = 1;
                                lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar7);
                                *(undefined1*)(lVar8 + 353) = 1;
                                lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar7);
                                iVar9 = *(int*)(lVar8 + 156);
                                lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar7);
                                *(bool*)(lVar8 + 354) = 0 < iVar9;
                                m_fillLeft = m_fillLeft + 1;
                            }
                        }
                    }
                }
                iVar12 = iVar12 + 1;
            } while (iVar12 < field_21800);
        }
        iVar12 = field_21804;
        if (field_21804 < field_21808) {
            iVar12 = field_21808;
        }
        iVar3 = field_110120;
        uVar5 = -iVar12;
        bVar16 = -1 < iVar12;
        if (iVar3 < field_21800) {
            do {
                uVar1 = uVar5;
                if (iVar12 < 0) {
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
                            uVar14 = (uint)bVar16;
                            iVar10 = iVar12;
                            uVar13 = uVar5;
                            if (iVar12 < 0) {
                                uVar14 = (uint)bVar16;
                            } else {
                                do {
                                    iVar15 = uVar13 + m_gz;
                                    iVar11 = m_gz + iVar10;
                                    if (m_minX <= iVar4) {
                                        if (m_minZ <= iVar15) {
                                            psVar7 = (shared_ptr*)GetSquare(this, iVar3, iVar4, iVar15);
                                            bVar2 = operator!=(psVar7, (_func_decltype_nullptr*)0);
                                            if ((bVar2) &&
                                                (lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar7),
                                                 *(char*)(lVar8 + 352) != '\0')) {
                                                Fill(this, psVar7, true, param_7);
                                            }
                                        }
                                        if (iVar11 < m_maxZ) {
                                            psVar7 = (shared_ptr*)GetSquare(this, iVar3, iVar4, iVar11);
                                            bVar2 = operator!=(psVar7, (_func_decltype_nullptr*)0);
                                            if ((bVar2) &&
                                                (lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar7),
                                                 *(char*)(lVar8 + 352) != '\0')) {
                                                Fill(this, psVar7, true, param_7);
                                            }
                                        }
                                    }
                                    if (iVar9 < m_maxX) {
                                        if (m_minZ <= iVar15) {
                                            psVar7 = (shared_ptr*)GetSquare(this, iVar3, iVar9, iVar15);
                                            bVar2 = operator!=(psVar7, (_func_decltype_nullptr*)0);
                                            if ((bVar2) &&
                                                (lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar7),
                                                 *(char*)(lVar8 + 352) != '\0')) {
                                                Fill(this, psVar7, true, param_7);
                                            }
                                        }
                                        if (iVar11 < m_maxZ) {
                                            psVar7 = (shared_ptr*)GetSquare(this, iVar3, iVar9, iVar11);
                                            bVar2 = operator!=(psVar7, (_func_decltype_nullptr*)0);
                                            if ((bVar2) &&
                                                (lVar8 = shared_ptr<Square>::operator->((shared_ptr<Square>*)psVar7),
                                                 *(char*)(lVar8 + 352) != '\0')) {
                                                Fill(this, psVar7, true, param_7);
                                            }
                                        }
                                    }
                                    if (m_fillLeft == 0) {
                                        m_click = 0;
                                        iVar4 = 1;
                                        if (uVar14 != 0)
                                            goto LAB_100311a7d;
                                        goto LAB_100311a7b;
                                    }
                                    uVar14 = uVar13 >> 31;
                                    bVar2 = iVar10 != 0;
                                    iVar10 = iVar10 + -1;
                                    uVar13 = uVar13 + 1;
                                } while (bVar2);
                            }
                            iVar4 = 17;
                            if (uVar14 == 0)
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
                    if (iVar12 < 0) {
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
                                uVar14 = (uint)bVar16;
                                iVar9 = iVar12;
                                uVar13 = uVar5;
                                if (iVar12 < 0) {
                                    uVar14 = (uint)bVar16;
                                } else {
                                    do {
                                        iVar10 = uVar13 + m_gz;
                                        iVar15 = m_gz + iVar9;
                                        if (m_minX <= iVar3) {
                                            if (m_minZ <= iVar10) {
                                                psVar7 = (shared_ptr*)GetSquare(this, local_50, iVar3, iVar10);
                                                bVar2 = operator!=(psVar7, (_func_decltype_nullptr*)0);
                                                if ((bVar2) && (lVar8 = shared_ptr<Square>::operator->(
                                                                    (shared_ptr<Square>*)psVar7),
                                                                *(char*)(lVar8 + 352) != '\0')) {
                                                    Fill(this, psVar7, false, param_7);
                                                }
                                            }
                                            if (iVar15 < m_maxZ) {
                                                psVar7 = (shared_ptr*)GetSquare(this, local_50, iVar3, iVar15);
                                                bVar2 = operator!=(psVar7, (_func_decltype_nullptr*)0);
                                                if ((bVar2) && (lVar8 = shared_ptr<Square>::operator->(
                                                                    (shared_ptr<Square>*)psVar7),
                                                                *(char*)(lVar8 + 352) != '\0')) {
                                                    Fill(this, psVar7, false, param_7);
                                                }
                                            }
                                        }
                                        if (iVar4 < m_maxX) {
                                            if (m_minZ <= iVar10) {
                                                psVar7 = (shared_ptr*)GetSquare(this, local_50, iVar4, iVar10);
                                                bVar2 = operator!=(psVar7, (_func_decltype_nullptr*)0);
                                                if ((bVar2) && (lVar8 = shared_ptr<Square>::operator->(
                                                                    (shared_ptr<Square>*)psVar7),
                                                                *(char*)(lVar8 + 352) != '\0')) {
                                                    Fill(this, psVar7, false, param_7);
                                                }
                                            }
                                            if (iVar15 < m_maxZ) {
                                                psVar7 = (shared_ptr*)GetSquare(this, local_50, iVar4, iVar15);
                                                bVar2 = operator!=(psVar7, (_func_decltype_nullptr*)0);
                                                if ((bVar2) && (lVar8 = shared_ptr<Square>::operator->(
                                                                    (shared_ptr<Square>*)psVar7),
                                                                *(char*)(lVar8 + 352) != '\0')) {
                                                    Fill(this, psVar7, false, param_7);
                                                }
                                            }
                                        }
                                        if (m_fillLeft == 0) {
                                            m_click = 0;
                                            iVar3 = 1;
                                            if (uVar14 != 0)
                                                goto LAB_100311d26;
                                            goto LAB_100311d24;
                                        }
                                        uVar14 = uVar13 >> 31;
                                        bVar2 = iVar9 != 0;
                                        iVar9 = iVar9 + -1;
                                        uVar13 = uVar13 + 1;
                                    } while (bVar2);
                                }
                                iVar3 = 26;
                                if (uVar14 == 0)
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
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "dash3d/World.cpp",
                                2297, "Render::Fill failure, some squares won\'t be rendered.");
            }
        }
    }

    // 0x100311ed0, 512 bytes, placed by class name
    // world::SubmitModelForRender(ModelSource&, int, int, int, int, int, int, int, int, long long, int, EntityHighlight const&)
    void world::SubmitModelForRender(ModelSource* param_1, int param_2, int param_3, int param_4, int param_5,
                                     int param_6, int param_7, int param_8, int param_9, longlong param_10,
                                     int param_11, EntityHighlight* param_12) {
        long* plVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        longlong lVar5;
        char cVar6;
        undefined8 uVar7;
        undefined1* this_01;
        undefined8 in_stack_ffffffffffffff58;
        undefined4 uVar8;
        undefined8 in_stack_ffffffffffffff60;
        undefined4 uVar9;
        ModelSource local_68;
        world* local_58;
        ModelSource* local_50;
        int local_44;
        int local_40;
        int local_3c;
        undefined1 local_38[4];
        undefined2 local_34;

        uVar8 = (undefined4)((ulong)in_stack_ffffffffffffff58 >> 32);
        uVar9 = (undefined4)((ulong)in_stack_ffffffffffffff60 >> 32);
        local_44 = param_2;
        cVar6 = param_12->HasModelHighlight();
        if ((cVar6 == '\0') ||
            (cVar6 = param_12->AlwaysOnTop(), lVar5 = param_10, plVar1 = m_modelLitRenderer, cVar6 == '\0')) {
            lVar5 = param_10;
            iVar4 = param_9;
            iVar3 = param_8;
            iVar2 = param_7;
            plVar1 = m_modelLitRenderer;
            local_40 = local_44;
            local_58 = (world*)CONCAT44(local_58._4_4_, param_3);
            local_50 = param_1;
            local_3c = param_5;
            uVar7 = param_12->GetModelOverlayProperties();
            local_38 = SUB84(uVar7, 0);
            local_34 = (undefined2)((ulong)uVar7 >> 32);
            (**(code**)(*plVar1 + 16))(plVar1, local_50, local_40, (ulong)local_58 & 4294967295, param_4, local_3c,
                                       CONCAT44(uVar8, param_6), CONCAT44(uVar9, iVar2), iVar3, iVar4, lVar5, param_11,
                                       local_38, 0);
            return;
        }
        local_40 = local_44;
        local_3c = param_7;
        local_50 = (ModelSource*)CONCAT44(local_50._4_4_, param_8);
        local_68.field_8._4_4_ = param_9;
        local_34 = 0;
        local_38 = (undefined1[4])0;
        local_58 = this;
        new (local_38) game::GamepadEvent();
        (**(code**)(*plVar1 + 16))(plVar1, param_1, local_40, param_3, param_4, param_5, CONCAT44(uVar8, param_6),
                                   CONCAT44(uVar9, local_3c), local_50._0_4_, local_68.field_8._4_4_, lVar5, param_11,
                                   local_38, 0);
        this_01 = &local_58->field_21840;
        std::make_unique<DeferredModelHighlight, ModelSource&, int&, int&, int&, int&, long long&,
                         EntityHighlight_const&>(&local_68, (int*)param_1, &local_44, &param_7, &param_8,
                                                 (longlong*)&param_9, (EntityHighlight*)&param_10);
        std::unique_ptr<DeferredHighlight, std::default_delete<DeferredHighlight>>::unique_ptr<
            DeferredModelHighlight, std::default_delete<DeferredModelHighlight>, void, void>(
            (unique_ptr<DeferredHighlight, std::default_delete<DeferredHighlight>>*)local_38, (unique_ptr*)&local_68);
        this_01->push_back(local_38);
        local_38->~unique_ptr();
        local_68.~unique_ptr();
    }

    // 0x100312330, 384 bytes, placed by class name
    // world::GroundoOcluded(int, int, int)
    ulong world::GroundoOcluded(int param_1, int param_2, int param_3) {
        char cVar1;
        int iVar2;
        ulong uVar3;
        int* piVar4;
        int iVar5;
        uint uVar6;
        ulong uVar7;
        uint uVar8;

        uVar3 = GetSquareIndex(this, param_1, param_2, param_3);
        piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_190168, uVar3);
        if (*piVar4 + m_cycleNo == 0) {
            uVar7 = 0;
            goto LAB_100312491;
        }
        uVar7 = CONCAT71((int7)(uVar3 >> 8), 1);
        if (*piVar4 == m_cycleNo)
            goto LAB_100312491;
        uVar8 = param_3 * 128;
        iVar5 = param_2 * 128 + 1;
        iVar2 = GetGroundHeight(this, param_1, param_2, param_3);
        cVar1 = Occluded(this, iVar5, iVar2, uVar8 + 1);
        if (cVar1 == '\0') {
        LAB_100312475:
            uVar7 = 0;
            iVar2 = -m_cycleNo;
        } else {
            uVar6 = param_2 * 128 | 127;
            iVar2 = GetGroundHeight(this, param_1, param_2 + 1, param_3);
            cVar1 = Occluded(this, uVar6, iVar2, uVar8 + 1);
            if (cVar1 == '\0')
                goto LAB_100312475;
            iVar2 = GetGroundHeight(this, param_1, param_2 + 1, param_3 + 1);
            cVar1 = Occluded(this, uVar6, iVar2, uVar8 | 127);
            if (cVar1 == '\0')
                goto LAB_100312475;
            iVar2 = GetGroundHeight(this, param_1, param_2, param_3 + 1);
            cVar1 = Occluded(this, iVar5, iVar2, uVar8 | 127);
            if (cVar1 == '\0')
                goto LAB_100312475;
            uVar7 = CONCAT71((uint7)(uint3)(uVar8 >> 8), 1);
            iVar2 = m_cycleNo;
        }
        piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_190168, uVar3);
        *piVar4 = iVar2;
    LAB_100312491:
        return uVar7 & 4294967295;
    }

    // 0x1003124b0, 1152 bytes, placed by class name
    // world::WallOccluded(int, int, int, int)
    undefined8 world::WallOccluded(int param_1, int param_2, int param_3, int param_4) {
        char cVar1;
        uint uVar2;
        int iVar3;
        undefined8 uVar4;
        int iVar5;
        uint uVar6;
        int iVar7;
        int iVar8;

        cVar1 = GroundoOcluded(this, param_1, param_2, param_3);
        if (cVar1 == '\0') {
            return 0;
        }
        uVar2 = param_2 * 128;
        uVar6 = param_3 * 128;
        iVar3 = GetGroundHeight(this, param_1, param_2, param_3);
        iVar8 = iVar3 + -231;
        if ((15 < param_4) || (7 < param_4 - 1U)) {
        switchD_100312536_caseD_3:
            cVar1 = Occluded(this, uVar2 | 64, iVar3 + -239, uVar6 | 64);
            if (cVar1 == '\0') {
                return 0;
            }
            switch (param_4 << 28 | param_4 - 16U >> 4) {
            case 1:
                uVar2 = uVar2 + 128;
            case 0:
                uVar6 = uVar6 + 128;
                break;
            default:
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "jagex3/dash3d/World.cpp",
                                    3780, "Unsupported wall type");
                return 1;
            case 3:
                uVar2 = uVar2 + 128;
                break;
            case 7:
                break;
            }
            goto LAB_1003128e8;
        }
        iVar7 = iVar3 + -1;
        iVar5 = iVar3 + -121;
        switch (param_4) {
        case 1:
            if (m_cx < (int)uVar2) {
                cVar1 = Occluded(this, uVar2, iVar7, uVar6);
                if (cVar1 == '\0') {
                    return 0;
                }
                cVar1 = Occluded(this, uVar2, iVar7, uVar6 + 128);
                if (cVar1 == '\0') {
                    return 0;
                }
            }
            if (0 < param_1) {
                cVar1 = Occluded(this, uVar2, iVar5, uVar6);
                if (cVar1 == '\0') {
                    return 0;
                }
                cVar1 = Occluded(this, uVar2, iVar5, uVar6 + 128);
                if (cVar1 == '\0') {
                    return 0;
                }
            }
            cVar1 = Occluded(this, uVar2, iVar8, uVar6);
            if (cVar1 == '\0') {
                return 0;
            }
            uVar6 = uVar6 + 128;
            goto LAB_1003128e8;
        case 2:
            if ((int)uVar6 < m_cz) {
                cVar1 = Occluded(this, uVar2, iVar7, uVar6 + 128);
                if (cVar1 == '\0') {
                    return 0;
                }
                cVar1 = Occluded(this, uVar2 + 128, iVar7, uVar6 + 128);
                if (cVar1 == '\0') {
                    return 0;
                }
            }
            if (0 < param_1) {
                cVar1 = Occluded(this, uVar2, iVar5, uVar6 + 128);
                if (cVar1 == '\0') {
                    return 0;
                }
                cVar1 = Occluded(this, uVar2 + 128, iVar5, uVar6 + 128);
                if (cVar1 == '\0') {
                    return 0;
                }
            }
            cVar1 = Occluded(this, uVar2, iVar8, uVar6 + 128);
            break;
        default:
            goto switchD_100312536_caseD_3;
        case 4:
            if ((int)uVar2 < m_cx) {
                cVar1 = Occluded(this, uVar2 + 128, iVar7, uVar6);
                if (cVar1 == '\0') {
                    return 0;
                }
                cVar1 = Occluded(this, uVar2 + 128, iVar7, uVar6 + 128);
                if (cVar1 == '\0') {
                    return 0;
                }
            }
            if (0 < param_1) {
                cVar1 = Occluded(this, uVar2 + 128, iVar5, uVar6);
                if (cVar1 == '\0') {
                    return 0;
                }
                cVar1 = Occluded(this, uVar2 + 128, iVar5, uVar6 + 128);
                if (cVar1 == '\0') {
                    return 0;
                }
            }
            cVar1 = Occluded(this, uVar2 + 128, iVar8, uVar6);
            break;
        case 8:
            if (m_cz < (int)uVar6) {
                cVar1 = Occluded(this, uVar2, iVar7, uVar6);
                if (cVar1 == '\0') {
                    return 0;
                }
                cVar1 = Occluded(this, uVar2 + 128, iVar7, uVar6);
                if (cVar1 == '\0') {
                    return 0;
                }
            }
            if (0 < param_1) {
                cVar1 = Occluded(this, uVar2, iVar5, uVar6);
                if (cVar1 == '\0') {
                    return 0;
                }
                cVar1 = Occluded(this, uVar2 + 128, iVar5, uVar6);
                if (cVar1 == '\0') {
                    return 0;
                }
            }
            cVar1 = Occluded(this, uVar2, iVar8, uVar6);
            if (cVar1 == '\0') {
                return 0;
            }
            uVar2 = uVar2 + 128;
            goto LAB_1003128e8;
        }
        if (cVar1 == '\0') {
            return 0;
        }
        uVar2 = uVar2 + 128;
        uVar6 = uVar6 + 128;
    LAB_1003128e8:
        uVar4 = Occluded(this, uVar2, iVar8, uVar6);
        return uVar4;
    }

    // 0x100312930, 288 bytes, placed by class name
    // world::SpriteOccluded(int, int, int, int)
    undefined8 world::SpriteOccluded(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        uint uVar6;

        cVar2 = GroundoOcluded(this, param_1, param_2, param_3);
        if (cVar2 != '\0') {
            iVar1 = param_2 * 128 + 1;
            iVar3 = GetGroundHeight(this, param_1, param_2, param_3);
            iVar4 = param_3 * 128 + 1;
            cVar2 = Occluded(this, iVar1, iVar3 - param_4, iVar4);
            if (cVar2 != '\0') {
                uVar6 = param_2 * 128 | 127;
                iVar3 = GetGroundHeight(this, param_1, param_2 + 1, param_3);
                cVar2 = Occluded(this, uVar6, iVar3 - param_4, iVar4);
                if (cVar2 != '\0') {
                    iVar3 = GetGroundHeight(this, param_1, param_2 + 1, param_3 + 1);
                    uVar5 = param_3 * 128 | 127;
                    cVar2 = Occluded(this, uVar6, iVar3 - param_4, uVar5);
                    if (cVar2 != '\0') {
                        iVar3 = GetGroundHeight(this, param_1, param_2, param_3 + 1);
                        cVar2 = Occluded(this, iVar1, iVar3 - param_4, uVar5);
                        if (cVar2 != '\0') {
                            return 1;
                        }
                    }
                }
            }
        }
        return 0;
    }

    // 0x100312c00, 768 bytes, placed by class name
    // world::SpriteOccluded(int, int, int, int, int, int)
    undefined8 world::SpriteOccluded(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        char cVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        ulong uVar6;
        int* piVar7;
        uint uVar8;
        uint uVar9;
        bool bVar10;

        if ((param_2 == param_3) && (param_4 == param_5)) {
            cVar1 = GroundoOcluded(this, param_1, param_2, param_4);
            if (cVar1 != '\0') {
                iVar4 = param_2 * 128 + 1;
                iVar2 = GetGroundHeight(this, param_1, param_2, param_4);
                iVar3 = param_4 * 128 + 1;
                cVar1 = Occluded(this, iVar4, iVar2 - param_6, iVar3);
                if (cVar1 != '\0') {
                    uVar8 = param_2 * 128 | 127;
                    iVar2 = GetGroundHeight(this, param_1, param_2 + 1, param_4);
                    cVar1 = Occluded(this, uVar8, iVar2 - param_6, iVar3);
                    if (cVar1 != '\0') {
                        iVar3 = GetGroundHeight(this, param_1, param_2 + 1, param_4 + 1);
                        uVar9 = param_4 * 128 | 127;
                        cVar1 = Occluded(this, uVar8, iVar3 - param_6, uVar9);
                        if (cVar1 != '\0') {
                            iVar3 = GetGroundHeight(this, param_1, param_2, param_4 + 1);
                            cVar1 = Occluded(this, iVar4, iVar3 - param_6, uVar9);
                            if (cVar1 != '\0') {
                                return 1;
                            }
                        }
                    }
                }
            }
        } else {
            if (param_2 <= param_3) {
                iVar4 = param_2;
                do {
                    iVar3 = 5;
                    bVar10 = param_5 < param_4;
                    if (param_4 <= param_5) {
                        uVar6 = GetSquareIndex(this, param_1, iVar4, param_4);
                        piVar7 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&field_190168, uVar6);
                        iVar2 = *piVar7 + m_cycleNo;
                        iVar3 = param_4;
                        while (iVar2 != 0) {
                            bVar10 = param_5 <= iVar3;
                            if (param_5 == iVar3) {
                                iVar3 = 5;
                                goto joined_r0x000100312eef;
                            }
                            iVar3 = iVar3 + 1;
                            uVar6 = GetSquareIndex(this, param_1, iVar4, iVar3);
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&field_190168, uVar6);
                            iVar2 = *piVar7 + m_cycleNo;
                        }
                        iVar3 = 1;
                    }
                joined_r0x000100312eef:
                    if (!bVar10)
                        goto LAB_100312d4f;
                    bVar10 = iVar4 != param_3;
                    iVar4 = iVar4 + 1;
                } while (bVar10);
            }
            iVar3 = 2;
        LAB_100312d4f:
            if (iVar3 == 2) {
                uVar8 = param_2 << 7 | 1;
                uVar9 = param_4 << 7 | 2;
                iVar4 = GetGroundHeight(this, param_1, param_2, param_4);
                iVar4 = iVar4 - param_6;
                cVar1 = Occluded(this, uVar8, iVar4, uVar9);
                if (cVar1 != '\0') {
                    iVar3 = param_3 * 128 + -1;
                    cVar1 = Occluded(this, iVar3, iVar4, uVar9);
                    if (cVar1 != '\0') {
                        iVar2 = param_5 * 128 + -1;
                        cVar1 = Occluded(this, uVar8, iVar4, iVar2);
                        if (cVar1 != '\0') {
                            return Occluded(this, iVar3, iVar4, iVar2);
                        }
                    }
                }
            }
        }
        return 0;
    }

    // 0x100312f00, 64 bytes, placed by class name
    // world::TextureLightCol(int, int)
    int world::TextureLightCol(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        int iVar3;

        iVar1 = (param_1 & 127U) * param_2;
        iVar2 = iVar1 >> 7;
        iVar3 = 126;
        if (iVar2 < 126) {
            iVar3 = iVar2;
        }
        iVar2 = 2;
        if (255 < iVar1) {
            iVar2 = iVar3;
        }
        return iVar2 + (param_1 & 65408U);
    }

    // 0x100312f40, 224 bytes, placed by class name
    // world::InsideTriangle(int, int, int, int, int, int, int, int)
    ulong world::InsideTriangle(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                int param_7, int param_8) {
        uint3 uVar1;
        bool bVar2;
        uint uVar3;
        uint uVar4;
        int iVar5;

        if (((((param_2 < param_3) && (param_2 < param_4)) && (param_2 < param_5)) ||
             ((((param_2 - param_3 != 0 && param_3 <= param_2 && (param_4 < param_2)) && (param_5 < param_2)) ||
               (((param_1 < param_6 && (param_1 < param_7)) && (param_1 < param_8)))))) ||
            (((param_1 - param_6 != 0 && param_6 <= param_1 && (param_7 < param_1)) && (param_8 < param_1)))) {
            return 0;
        }
        uVar3 = (param_4 - param_5) * (param_1 - param_7) + (param_8 - param_7) * (param_2 - param_4);
        uVar4 = (param_5 - param_3) * (param_1 - param_8) + (param_6 - param_8) * (param_2 - param_5);
        iVar5 = (param_1 - param_6) * (param_3 - param_4) + (param_7 - param_6) * (param_2 - param_3);
        uVar1 = (uint3)((uint)(param_1 - param_7) >> 8);
        if (iVar5 == 0) {
            if (uVar3 == 0) {
                return CONCAT71((uint7)uVar1, 1);
            }
            bVar2 = -1 < (int)uVar4;
            if ((int)uVar3 < 0) {
                bVar2 = (int)uVar4 < 1;
            }
            return (ulong)bVar2;
        }
        if (iVar5 < 0) {
            return (ulong)CONCAT31(uVar1, (int)uVar4 < 1 && (int)uVar3 < 1);
        }
        return (ulong)CONCAT31(uVar1, -1 < (int)(uVar3 | uVar4));
    }

    // 0x100313020, 144 bytes, placed by class name
    // world::TransformWorldToScreenCoord(int, int, int, int&, int&)
    void world::TransformWorldToScreenCoord(int param_1, int param_2, int param_3, int* param_4, int* param_5) {
        long lVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        int iVar5;

        lVar1 = m_pix3D;
        iVar3 = m_cameraCosY * param_3 - m_cameraSinY * param_1 >> 16;
        iVar2 = m_cameraCosX * param_2;
        iVar5 = iVar3 * m_cameraSinX;
        uVar4 = iVar3 * m_cameraCosX + m_cameraSinX * param_2 >> 16 | 1;
        *param_4 = ((m_cameraCosY * param_1 + m_cameraSinY * param_3 >> 16) * *(int*)(m_pix3D + 16)) / (int)uVar4 +
                   *(int*)(m_pix3D + 20) + *(int*)(m_pix3D + 96);
        *param_5 =
            ((iVar2 - iVar5 >> 16) * *(int*)(lVar1 + 16)) / (int)uVar4 + *(int*)(lVar1 + 24) + *(int*)(lVar1 + 88);
    }

    // 0x100313130, 464 bytes, placed by class name
    // world::Occluded(int, int, int)
    bool world::Occluded(int param_1, int param_2, int param_3) {
        long lVar1;
        long* plVar2;
        uint uVar3;
        int iVar4;
        ulong uVar5;

        if (0 < field_17736) {
            uVar5 = 0;
            do {
                plVar2 = (long*)eastl::vector<
                    Occlude*, eastl::fixed_vector_allocator<8ul, 500ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<Occlude*,
                            eastl::fixed_vector_allocator<8ul, 500ul, 8ul, 0ul, true, eastl::allocator>>*)&field_17744,
                    uVar5);
                lVar1 = *plVar2;
                uVar3 = 0;
                switch (*(undefined4*)(lVar1 + 44)) {
                case 1:
                    uVar3 = 4;
                    iVar4 = *(int*)(lVar1 + 20) - param_1;
                    if (iVar4 != 0 && param_1 <= *(int*)(lVar1 + 20)) {
                    LAB_1003131be:
                        if (((*(int*)(lVar1 + 56) * iVar4 >> 8) + *(int*)(lVar1 + 28) <= param_3) &&
                            (param_3 <= (*(int*)(lVar1 + 60) * iVar4 >> 8) + *(int*)(lVar1 + 32)))
                            goto LAB_100313227;
                    LAB_100313270:
                        uVar3 = 4;
                    }
                    break;
                case 2:
                    uVar3 = 4;
                    iVar4 = param_1 - *(int*)(lVar1 + 20);
                    if (iVar4 != 0 && *(int*)(lVar1 + 20) <= param_1)
                        goto LAB_1003131be;
                    break;
                case 3:
                    uVar3 = 4;
                    iVar4 = *(int*)(lVar1 + 28) - param_3;
                    if (iVar4 != 0 && param_3 <= *(int*)(lVar1 + 28)) {
                    LAB_100313205:
                        if ((param_1 < (*(int*)(lVar1 + 48) * iVar4 >> 8) + *(int*)(lVar1 + 20)) ||
                            ((*(int*)(lVar1 + 52) * iVar4 >> 8) + *(int*)(lVar1 + 24) < param_1))
                            goto LAB_100313270;
                    LAB_100313227:
                        if ((param_2 < (*(int*)(lVar1 + 64) * iVar4 >> 8) + *(int*)(lVar1 + 36)) ||
                            (uVar3 = 1, (iVar4 * *(int*)(lVar1 + 68) >> 8) + *(int*)(lVar1 + 40) < param_2))
                            goto LAB_100313270;
                    }
                    break;
                case 4:
                    uVar3 = 4;
                    iVar4 = param_3 - *(int*)(lVar1 + 28);
                    if (iVar4 != 0 && *(int*)(lVar1 + 28) <= param_3)
                        goto LAB_100313205;
                    break;
                case 5:
                    uVar3 = 4;
                    iVar4 = param_2 - *(int*)(lVar1 + 36);
                    if ((iVar4 != 0 && *(int*)(lVar1 + 36) <= param_2) &&
                        ((((param_1 < (*(int*)(lVar1 + 48) * iVar4 >> 8) + *(int*)(lVar1 + 20) ||
                            ((*(int*)(lVar1 + 52) * iVar4 >> 8) + *(int*)(lVar1 + 24) < param_1)) ||
                           (param_3 < (*(int*)(lVar1 + 56) * iVar4 >> 8) + *(int*)(lVar1 + 28))) ||
                          (uVar3 = 1, (iVar4 * *(int*)(lVar1 + 60) >> 8) + *(int*)(lVar1 + 32) < param_3))))
                        goto LAB_100313270;
                }
                if ((uVar3 & 3) != 0)
                    goto LAB_1003132cd;
                uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)field_17736);
        }
        uVar3 = 2;
    LAB_1003132cd:
        return uVar3 != 2;
    }

    // 0x100313300, 32 bytes, placed by class name
    // world::GetGroundHeightAtFinePos(int, int, int) const
    void world::GetGroundHeightAtFinePos(int param_1, int param_2, int param_3) {
        ClientBuild::GetGroundHeightAtFinePos(param_1, param_2, param_3);
    }

    // 0x100313320, 64 bytes, placed by class name
    // world::GetHighlightOnTile(int, int, int) const
    undefined8 world::GetHighlightOnTile(int param_1, int param_2, int param_3) {
        shared_ptr* this_00;
        Square* this_01;
        undefined8 uVar2;

        this_00 = (shared_ptr*)GetSquare(this, param_1, param_2, param_3);
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            this_01 = (Square*)shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            uVar2 = this_01->GetTileHighlightData();
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x100313360, 16 bytes, placed by class name
    // world::GetShowDebugPointLight()
    undefined1 world::GetShowDebugPointLight() {
        return this[1].field_16;
    }

    // 0x100313370, 16 bytes, placed by class name
    // world::SetShowDebugPointLight(bool)
    void world::SetShowDebugPointLight(bool param_1) {
        this[1].field_16 = param_1;
    }

    // 0x100327090, 32 bytes, base-object constructor, placed by class name
    // world::SubmitDebugPointLight(int)::DemoPointLightSource::DemoPointLightSource()
    /* DemoPointLightSource() */

    void world::SubmitDebugPointLight(int)::DemoPointLightSource::DemoPointLightSource() {
        new (this) PointLightSource();
        field_0 = &PTR_GetLight_100efb318;
    }

    // 0x1003270d0, 128 bytes, placed by class name
    // world::SubmitDebugPointLight(int)::DemoPointLightSource::GetLight(int)
    /* GetLight(int) */

    jag* world::SubmitDebugPointLight(int)::DemoPointLightSource::GetLight(int param_1) {
        undefined4 in_register_0000003c;
        ImVec4 local_38[16];
        float local_28;
        float local_24;
        float local_20;
        bool local_19;

        local_28 = 640.0;
        ImVec4::ImVec4(local_38, 0.7, 0.1, 0.1, 1.0);
        local_24 = 2.0;
        local_20 = 0.15;
        local_19 = true;
        make_shared<jag::graphics::PointLight, jag::math::Vector3T<float> const&, float, jag::math::Vector4T<float>,
                    float, float, bool>((jag*)CONCAT44(in_register_0000003c, param_1), (Vector3T*)PTR_ZERO_100ee66e8,
                                        &local_28, (Vector4T*)local_38, &local_24, &local_20, &local_19);
        return (jag*)CONCAT44(in_register_0000003c, param_1);
    }

    // 0x10033e020, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.85
    void ___cxx_global_var_init_85() {
        new (&world::m_visCalcParams) world::VisCalcParams();
        ___cxa_atexit(PTR__VisCalcParams_100ee6b30, &world::m_visCalcParams, 4294967296);
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100307700, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::Square>::type make_shared<oldscape::dash3d::Square, int&, int&, int&>(int&, int&, int&)
    jag* make_shared<oldscape::dash3d::Square, int&, int&, int&>(int* param_1, int* param_2, int* param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        Square* local_40[2];

        pvVar1 = (void*)aligned_alloc(440, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::dash3d::Square, int&, int&, int&>((void*)((long)pvVar1 + 32), param_1,
                                                                                    param_2, param_3);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::Square>, int, oldscape::dash3d::Square*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag

// 0x10030bbc0, 16 bytes, placed by neighbouring functions
// floor(float)
void floor(float param_1) {
    _floorf();
}
