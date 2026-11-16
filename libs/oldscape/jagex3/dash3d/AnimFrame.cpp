// libs/oldscape/jagex3/dash3d/AnimFrame.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "AnimFrame.h"

namespace jag::oldscape::dash3d {
    // 0x100d425a5, 3 bytes, __const
    AnimFrame::debug = {1, 0, 0};

    // 0x103936098, 24 bytes, __common; set at startup by ___cxx_global_var_init.34
    Array<int, eastl::allocator> AnimFrame::m_tempTi = Array<int, eastl::allocator>(500);

    // 0x1039360b0, 24 bytes, __common; set at startup by ___cxx_global_var_init.35
    Array<int, eastl::allocator> AnimFrame::m_tempTx = Array<int, eastl::allocator>(500);

    // 0x1039360c8, 24 bytes, __common; set at startup by ___cxx_global_var_init.36
    Array<int, eastl::allocator> AnimFrame::m_tempTy = Array<int, eastl::allocator>(500);

    // 0x1039360e0, 24 bytes, __common; set at startup by ___cxx_global_var_init.37
    Array<int, eastl::allocator> AnimFrame::m_tempTz = Array<int, eastl::allocator>(500);

    // 0x100349b10, 1184 bytes, base-object constructor, placed by class name
    // AnimFrame::AnimFrame(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >, shared_ptr<AnimBase> const&)
    void AnimFrame::AnimFrame(shared_ptr param_1, shared_ptr* param_2) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        byte bVar1;
        byte bVar2;
        undefined4 uVar3;
        TextureAtlasReference* this_04;
        long lVar4;
        ulong uVar5;
        int* piVar6;
        undefined4* puVar7;
        shared_ptr* in_RDX;
        ulong uVar8;
        int iVar9;
        ulong uVar10;
        int iVar11;
        ulong uVar12;
        ulong local_70;
        uint local_34;

        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        field_16 = 4294967295;
        this_00 = &field_24;
        new (this_00) Array<int, eastl::allocator>();
        this_01 = &field_48;
        new (this_01) Array<int, eastl::allocator>();
        this_02 = &field_72;
        new (this_02) Array<int, eastl::allocator>();
        this_03 = &field_96;
        new (this_03) Array<int, eastl::allocator>();
        field_120 = 0;
        shared_ptr<AnimBase>::operator=((shared_ptr<AnimBase>*)this, in_RDX);
        this_04 = (TextureAtlasReference*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
            (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_2);
        this_04->SetPos(2);
        bVar1 = this_04->g1();
        lVar4 = this_04->size();
        uVar10 = lVar4 + (ulong)bVar1;
        if (bVar1 == 0) {
            local_34 = 0;
        } else {
            iVar11 = -1;
            uVar12 = 0;
            local_70 = 18446744073709551615;
            local_34 = 0;
            do {
                bVar2 = this_04->g1();
                uVar5 = this_04->size();
                this_04->SetPos(uVar10);
                if (bVar2 != 0) {
                    lVar4 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)this);
                    piVar6 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)(lVar4 + 8), uVar12);
                    if (*piVar6 != 0) {
                        uVar10 = local_70;
                        do {
                            if ((long)uVar10 <= (long)iVar11)
                                goto LAB_100349cc1;
                            lVar4 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)this);
                            piVar6 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)(lVar4 + 8), uVar10);
                            uVar10 = uVar10 - 1;
                        } while (*piVar6 != 0);
                        uVar8 = (ulong)(int)local_34;
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_tempTi, uVar8);
                        *piVar6 = (int)uVar10 + 1;
                        puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_tempTx, uVar8);
                        *puVar7 = 0;
                        puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_tempTy, uVar8);
                        *puVar7 = 0;
                        puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_tempTz, uVar8);
                        *puVar7 = 0;
                        local_34 = local_34 + 1;
                    }
                LAB_100349cc1:
                    uVar10 = (ulong)(int)local_34;
                    piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_tempTi,
                                                                            uVar10);
                    iVar11 = (int)uVar12;
                    *piVar6 = iVar11;
                    lVar4 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)this);
                    piVar6 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)(lVar4 + 8), uVar12);
                    iVar9 = (uint)(*piVar6 == 3) << 7;
                    if ((bVar2 & 1) == 0) {
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_tempTx, uVar10);
                        *piVar6 = iVar9;
                        if ((bVar2 & 2) == 0)
                            goto LAB_100349d1b;
                    LAB_100349d72:
                        uVar3 = this_04->gSmart();
                        puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_tempTy, uVar10);
                        *puVar7 = uVar3;
                        if ((bVar2 & 4) != 0)
                            goto LAB_100349d94;
                    LAB_100349d33:
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_tempTz, uVar10);
                        *piVar6 = iVar9;
                    } else {
                        uVar3 = this_04->gSmart();
                        puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_tempTx, uVar10);
                        *puVar7 = uVar3;
                        if ((bVar2 & 2) != 0)
                            goto LAB_100349d72;
                    LAB_100349d1b:
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_tempTy, uVar10);
                        *piVar6 = iVar9;
                        if ((bVar2 & 4) == 0)
                            goto LAB_100349d33;
                    LAB_100349d94:
                        uVar3 = this_04->gSmart();
                        puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_tempTz, uVar10);
                        *puVar7 = uVar3;
                    }
                    lVar4 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)this);
                    piVar6 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)(lVar4 + 8), uVar12);
                    local_34 = local_34 + 1;
                    if (*piVar6 == 5) {
                        field_120 = 1;
                    }
                }
                uVar10 = this_04->size();
                this_04->SetPos(uVar5);
                uVar12 = uVar12 + 1;
                local_70 = local_70 + 1;
            } while (uVar12 != bVar1);
        }
        uVar12 = this_04->GetTextureAtlas();
        if (uVar10 != uVar12) {
            /* WARNING: Subroutine does not return */
            LogAssert("pos2 == p.GetSize()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "AnimFrame.cpp",
                      108, (char*)0);
        }
        field_16 = local_34;
        uVar10 = (ulong)(int)local_34;
        this_00->set_max_size(uVar10, 5);
        this_01->set_max_size(uVar10, 5);
        this_02->set_max_size(uVar10, 5);
        this_03->set_max_size(uVar10, 5);
        if (0 < (int)local_34) {
            uVar10 = 0;
            do {
                puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_tempTi,
                                                                               uVar10);
                uVar3 = *puVar7;
                puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                               uVar10);
                *puVar7 = uVar3;
                puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_tempTx,
                                                                               uVar10);
                uVar3 = *puVar7;
                puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01,
                                                                               uVar10);
                *puVar7 = uVar3;
                puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_tempTy,
                                                                               uVar10);
                uVar3 = *puVar7;
                puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02,
                                                                               uVar10);
                *puVar7 = uVar3;
                puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_tempTz,
                                                                               uVar10);
                uVar3 = *puVar7;
                puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_03,
                                                                               uVar10);
                *puVar7 = uVar3;
                uVar10 = uVar10 + 1;
            } while (local_34 != uVar10);
        }
    }

    // 0x10034a000, 16 bytes, complete-object constructor, placed by class name
    // AnimFrame::AnimFrame(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >, shared_ptr<AnimBase> const&): jumps straight to the base-object constructor

    // 0x10034a010, 288 bytes, placed by class name
    // AnimFrame::ResizePrecise(int, int)
    void AnimFrame::ResizePrecise(int param_1, int param_2) {
        int iVar1;
        int* piVar2;
        long lVar3;
        ulong uVar4;
        int iVar5;

        iVar5 = param_1 / param_2;
        if (0 < (int)field_16) {
            uVar4 = 0;
            do {
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar4);
                iVar1 = *piVar2;
                lVar3 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)this);
                piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                    (vector<int, eastl::allocator>*)(lVar3 + 8), (long)iVar1);
                if (*piVar2 == 0) {
                LAB_10034a060:
                    piVar2 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48, uVar4);
                    iVar1 = *piVar2;
                    piVar2 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48, uVar4);
                    *piVar2 = iVar1 * iVar5;
                    piVar2 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar4);
                    iVar1 = *piVar2;
                    piVar2 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar4);
                    *piVar2 = iVar1 * iVar5;
                    piVar2 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_96, uVar4);
                    iVar1 = *piVar2;
                    piVar2 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_96, uVar4);
                    *piVar2 = iVar1 * iVar5;
                } else {
                    lVar3 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)this);
                    piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)(lVar3 + 8), (long)iVar1);
                    if (*piVar2 == 1)
                        goto LAB_10034a060;
                }
                uVar4 = uVar4 + 1;
            } while ((long)uVar4 < (long)(int)field_16);
        }
    }

    // 0x10038e9f0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.34
    void ___cxx_global_var_init_34() {
        new (&AnimFrame::m_tempTi) Array<int, eastl::allocator>(500);
        ___cxa_atexit(PTR__Array_100ee6800, &AnimFrame::m_tempTi, 4294967296);
    }

    // 0x10038ea30, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.35
    void ___cxx_global_var_init_35() {
        new (&AnimFrame::m_tempTx) Array<int, eastl::allocator>(500);
        ___cxa_atexit(PTR__Array_100ee6800, &AnimFrame::m_tempTx, 4294967296);
    }

    // 0x10038ea70, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.36
    void ___cxx_global_var_init_36() {
        new (&AnimFrame::m_tempTy) Array<int, eastl::allocator>(500);
        ___cxa_atexit(PTR__Array_100ee6800, &AnimFrame::m_tempTy, 4294967296);
    }

    // 0x10038eab0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.37
    void ___cxx_global_var_init_37() {
        new (&AnimFrame::m_tempTz) Array<int, eastl::allocator>(500);
        ___cxa_atexit(PTR__Array_100ee6800, &AnimFrame::m_tempTz, 4294967296);
    }

} // namespace jag::oldscape::dash3d
