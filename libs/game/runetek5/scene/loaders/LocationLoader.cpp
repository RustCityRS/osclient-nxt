// libs/game/runetek5/scene/loaders/LocationLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LocationLoader.h"

namespace jag::game {
    // 0x1003db9b0, 2992 bytes, placed by class name and debug map
    // LocationLoader::Load(eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>&, Js5ResourceProvider&, ConfigProvider&, LinkMap const&)
    ulong LocationLoader::Load(vector* param_1, Js5ResourceProvider* param_2, ConfigProvider* param_3,
                               LinkMap* param_4) {
        undefined1* puVar1;
        char cVar2;
        uint uVar3;
        char cVar4;
        bool bVar5;
        byte bVar6;
        undefined1 uVar7;
        char cVar8;
        undefined2 uVar9;
        undefined4 uVar10;
        int iVar11;
        undefined4 uVar12;
        int iVar13;
        ulong uVar14;
        long lVar15;
        vector* pvVar16;
        undefined* puVar17;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        Layout* pLVar18;
        shared_ptr<MapSquareLocation>* psVar19;
        shared_ptr<MapSquareLocation>* psVar20;
        int* piVar21;
        shared_ptr* psVar22;
        LocType* pLVar23;
        vector<eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>, eastl::allocator>* pvVar24;
        ConfigProvider* this_01;
        vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
               eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        vector<ClientCompositeZone, eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true, eastl::allocator>>*
            this_03;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_04;
        undefined8 uVar25;
        long lVar26;
        undefined4* puVar27;
        vector* pvVar28;
        uint uVar29;
        Js5ResourceProvider* pJVar30;
        ulong unaff_R12;
        ulong uVar31;
        int iVar32;
        LocationLoader* pLVar33;
        char* in_stack_fffffffffffffe28;
        bool* in_stack_fffffffffffffe30;
        bool* in_stack_fffffffffffffe38;
        undefined4 uVar34;
        signed* in_stack_fffffffffffffe40;
        undefined4 uVar35;
        int in_stack_fffffffffffffe58;
        undefined4 in_stack_fffffffffffffe5c;
        uint auStack_19c[5];
        undefined1 auStack_188[40];
        ulong local_160;
        Js5ResourceProvider* local_158;
        ulong local_150;
        ulong local_148;
        vector* local_140;
        int local_138;
        uint local_134;
        Js5ResourceProvider* local_130;
        bool* local_128;
        LinkMap* local_120;
        ulong local_118;
        Layout* local_110;
        LocData* local_108;
        bool* local_100;
        signed* local_f8;
        vector<eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>, eastl::allocator>* local_f0;
        ConfigProvider* local_e8;
        Layout* local_e0;
        LocationLoader* local_d8;
        MakeSharedPool<MapSquareLocation, 16384> local_cb;
        signed local_ca;
        signed local_c9;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar29 = 1;
        local_140 = param_1;
        local_120 = param_4;
        local_e8 = param_3;
        local_d8 = this;
        if (field_56 != '\0')
            goto LAB_1003dbba4;
        if (field_8 == (ClientCompositeData*)0) {
            uVar14 = 1;
        } else {
            uVar14 = (&field_8->field_9800)->size();
        }
        local_f0 = (vector<eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>, eastl::allocator>*)&field_24;
        cVar4 = local_f0->empty();
        if (cVar4 != '\0') {
            eastl::vector<eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>, eastl::allocator>::resize(
                local_f0, uVar14);
        }
        if (field_8 == (ClientCompositeData*)0) {
            pvVar16 = (vector*)eastl::vector<eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>,
                                             eastl::allocator>::operator[](local_f0, 0);
            puVar17 = (undefined*)LoadMapSquareLocations(this, pvVar16, param_2, field_0, field_4);
            uVar10 = (undefined4)CONCAT71((int7)((ulong)puVar17 >> 8), puVar17 != DataStatus::NOTLOADED);
        LAB_1003dbb8f:
            local_e0 = (Layout*)CONCAT44(local_e0._4_4_, uVar10);
        } else {
            lVar15 = (&field_8->field_9800)->size();
            if (lVar15 == 0) {
                uVar10 = 1;
                goto LAB_1003dbb8f;
            }
            local_e0 = (Layout*)CONCAT44(local_e0._4_4_, (int)CONCAT71((int7)((ulong)lVar15 >> 8), 1));
            uVar14 = 0;
            uVar31 = 1;
            pvVar24 = local_f0;
            local_130 = param_2;
            do {
                this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                    eastl::vector<eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>,
                                  eastl::allocator>::operator[](pvVar24, uVar14);
                cVar4 = eastl::vector<
                    int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_00);
                if (cVar4 != '\0') {
                    pvVar16 = (vector*)eastl::vector<eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>,
                                                     eastl::allocator>::operator[](pvVar24, uVar14);
                    piVar21 =
                        (int*)eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>::operator[](
                            (vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>*)&local_d8->field_8
                                ->field_9800,
                            uVar14);
                    iVar13 = *piVar21;
                    lVar15 = eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>::operator[](
                        (vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>*)&local_d8->field_8
                            ->field_9800,
                        uVar14);
                    this = local_d8;
                    pvVar24 = local_f0;
                    puVar17 =
                        (undefined*)LoadMapSquareLocations(local_d8, pvVar16, local_130, iVar13, *(int*)(lVar15 + 4));
                    uVar29 = (uint)local_e0 & 255;
                    if (puVar17 == DataStatus::NOTLOADED) {
                        uVar29 = 0;
                    }
                    local_e0 = (Layout*)CONCAT44(local_e0._4_4_, uVar29);
                }
                uVar14 = (&field_8->field_9800)->size();
                unaff_R12 = (ulong)((int)uVar31 + 1);
                bVar5 = uVar31 < uVar14;
                uVar14 = uVar31;
                uVar31 = unaff_R12;
            } while (bVar5);
        }
        uVar29 = (uint)local_e0;
        if (((ulong)local_e0 & 1) != 0) {
            field_56 = 1;
        }
    LAB_1003dbba4:
        if ((uVar29 & 1) == 0) {
            uVar14 = 0;
        } else {
            puVar1 = &field_24;
            pLVar18 = (Layout*)puVar1->HeapBeginPtr();
            local_110 = (Layout*)puVar1;
            local_e0 = (Layout*)puVar1->end();
            uVar14 = CONCAT71((int7)(unaff_R12 >> 8), 1);
            if (pLVar18 != local_e0) {
                do {
                    psVar19 = (shared_ptr<MapSquareLocation>*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(pLVar18);
                    psVar20 = (shared_ptr<MapSquareLocation>*)pLVar18->end();
                    for (; psVar19 != psVar20; psVar19 = psVar19 + 16) {
                        lVar15 = shared_ptr<MapSquareLocation>::operator->(psVar19);
                        bVar5 = ((lVar15 + 72))->operator_cast_to_bool();
                        if (!bVar5) {
                            piVar21 = (int*)shared_ptr<MapSquareLocation>::operator->(psVar19);
                            psVar22 = ConfigProvider::GetConfig<LocType>(local_e8, *piVar21, (DataStatus**)0);
                            lVar15 = shared_ptr<MapSquareLocation>::operator->(psVar19);
                            shared_ptr<LocType>::operator=((shared_ptr<LocType>*)(lVar15 + 72), psVar22);
                            lVar15 = shared_ptr<MapSquareLocation>::operator->(psVar19);
                            bVar5 = ((lVar15 + 72))->operator_cast_to_bool();
                            uVar14 = uVar14 & 255;
                            if (!bVar5) {
                                uVar14 = 0;
                            }
                        }
                    }
                    pLVar18 = pLVar18 + 32;
                } while (pLVar18 != local_e0);
            }
            pLVar33 = local_d8;
            if ((char)uVar14 != '\0') {
                local_134 = (uint)uVar14;
                puVar1 = &local_d8->field_112;
                psVar19 = (shared_ptr<MapSquareLocation>*)puVar1->HeapBeginPtr();
                local_e8 = (ConfigProvider*)puVar1;
                psVar20 = (shared_ptr<MapSquareLocation>*)puVar1->end();
                for (; psVar19 != psVar20; psVar19 = psVar19 + 16) {
                    lVar15 = shared_ptr<MapSquareLocation>::operator->(psVar19);
                    cVar4 = *(char*)(lVar15 + 4);
                    lVar15 = shared_ptr<MapSquareLocation>::operator->(psVar19);
                    cVar8 = *(char*)(lVar15 + 5);
                    lVar15 = shared_ptr<MapSquareLocation>::operator->(psVar19);
                    in_stack_fffffffffffffe58 = (int)*(char*)(lVar15 + 6) + cVar8 * 12800 + cVar4 * 163840000;
                    psVar22 = (shared_ptr*)
                        eastl::hash_map<unsigned int, shared_ptr<MapSquareLocation>, eastl::hash<unsigned int>,
                                        eastl::equal_to<unsigned int>, BucketAllocatorEASTL, false>::
                        operator[](
                            (hash_map<unsigned int, shared_ptr<MapSquareLocation>, eastl::hash<unsigned int>,
                                      eastl::equal_to<unsigned int>, BucketAllocatorEASTL, false>*)&pLVar33->field_64,
                            auStack_19c + -3);
                    bVar5 = shared_ptr::operator_cast_to_bool(psVar22);
                    if (bVar5) {
                        lVar15 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)psVar22);
                        pLVar23 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar15 + 72));
                        uVar9 = pLVar23->GetWallWidth();
                        lVar15 = shared_ptr<MapSquareLocation>::operator->(psVar19);
                        *(undefined2*)(lVar15 + 64) = uVar9;
                    }
                }
                (&pLVar33->field_64)->clear();
                local_e8->clear();
                pLVar18 = local_110;
                pvVar24 = (vector<eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>, eastl::allocator>*)
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::HeapBeginPtr(local_110);
                local_f0 = (vector<eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>, eastl::allocator>*)
                               pLVar18->end();
                pLVar33 = local_d8;
                if (pvVar24 != local_f0) {
                    do {
                        this_01 = (ConfigProvider*)pvVar24->HeapBeginPtr();
                        local_e0 = (Layout*)pvVar24;
                        local_e8 = (ConfigProvider*)pvVar24->end();
                        if (this_01 != local_e8) {
                            do {
                                iVar13 = pLVar33->field_0;
                                lVar15 =
                                    shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_01);
                                cVar4 = *(char*)(lVar15 + 5);
                                iVar11 = local_d8->field_4;
                                lVar15 =
                                    shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_01);
                                cVar8 = *(char*)(lVar15 + 6);
                                lVar15 =
                                    shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_01);
                                pLVar23 =
                                    (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar15 + 72));
                                lVar15 =
                                    shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_01);
                                cVar2 = *(char*)(lVar15 + 4);
                                lVar15 =
                                    shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_01);
                                uVar7 = ((lVar15 + 8))->GetRot();
                                pLVar33 = local_d8;
                                uVar7 = pLVar23->GetMaxRemoveRoofLevel(local_120, (int)cVar2, (int)cVar4 + iVar13 * 64,
                                                                       (int)cVar8 + iVar11 * 64, uVar7);
                                lVar15 =
                                    shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_01);
                                *(undefined1*)(lVar15 + 62) = uVar7;
                                this_01 = (ConfigProvider*)&this_01->field_16;
                            } while (this_01 != local_e8);
                        }
                        pvVar24 = (vector<eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>,
                                          eastl::allocator>*)(local_e0 + 32);
                    } while (pvVar24 != local_f0);
                }
                if (pLVar33->field_8 == (ClientCompositeData*)0) {
                    pvVar28 = (vector*)eastl::vector<eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>,
                                                     eastl::allocator>::
                    operator[](
                        (vector<eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>, eastl::allocator>*)
                            local_110,
                        0);
                    pvVar16 = local_140;
                    local_140->swap(pvVar28);
                    psVar19 = (shared_ptr<MapSquareLocation>*)pvVar16->HeapBeginPtr();
                    psVar20 = (shared_ptr<MapSquareLocation>*)pvVar16->end();
                    for (; psVar19 != psVar20; psVar19 = psVar19 + 16) {
                        iVar13 = pLVar33->field_0;
                        lVar15 = shared_ptr<MapSquareLocation>::operator->(psVar19);
                        cVar4 = *(char*)(lVar15 + 5);
                        iVar11 = pLVar33->field_4;
                        lVar15 = shared_ptr<MapSquareLocation>::operator->(psVar19);
                        cVar4 =
                            local_120->IsLinkBelow((int)cVar4 + iVar13 * 64, (int)*(char*)(lVar15 + 6) + iVar11 * 64);
                        if (cVar4 != '\0') {
                            lVar15 = shared_ptr<MapSquareLocation>::operator->(psVar19);
                            *(char*)(lVar15 + 4) = *(char*)(lVar15 + 4) + -1;
                        }
                    }
                } else {
                    local_118 = 0;
                    do {
                        local_148 = 0;
                        do {
                            pJVar30 = (Js5ResourceProvider*)0;
                            local_150 = local_148;
                            local_148 = local_148 + 1;
                            do {
                                this_02 =
                                    (vector<
                                        eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                        eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>*)
                                        eastl::vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul,
                                                                                              true, eastl::allocator>,
                                                                          10ul, true, eastl::allocator>,
                                                      eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true,
                                                                                    eastl::allocator>>::
                                        operator[](
                                            (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul,
                                                                                            true, eastl::allocator>,
                                                                        10ul, true, eastl::allocator>,
                                                    eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true,
                                                                                  eastl::allocator>>*)pLVar33->field_8,
                                            local_118);
                                this_03 =
                                    (vector<ClientCompositeZone, eastl::fixed_vector_allocator<
                                                                     20ul, 10ul, 4ul, 0ul, true, eastl::allocator>>*)
                                        eastl::vector<
                                            eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                            eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_02,
                                                                                                         local_148);
                                local_130 = (Js5ResourceProvider*)((long)&pJVar30->field_0 + 1);
                                local_158 = pJVar30;
                                local_e8 = (ConfigProvider*)eastl::vector<
                                    ClientCompositeZone,
                                    eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true, eastl::allocator>>::
                                operator[](this_03, (ulong)local_130);
                                cVar4 = local_e8->IsValid();
                                if (cVar4 != '\0') {
                                    uVar29 = *(int*)((long)&local_e8->field_0 + 4);
                                    uVar3 = *(uint*)&local_e8->field_8;
                                    this_04 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                                        eastl::vector<eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>,
                                                      eastl::allocator>::
                                        operator[](
                                            (vector<eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>,
                                                    eastl::allocator>*)local_110,
                                            (ulong) * (uint*)&local_e8->field_16);
                                    lVar15 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>,
                                                           BucketAllocatorEASTL>::size(this_04);
                                    if (lVar15 != 0) {
                                        uVar29 = (uVar29 & 7) * 8;
                                        local_e0 = (Layout*)(ulong)uVar29;
                                        local_f0 =
                                            (vector<eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>,
                                                    eastl::allocator>*)CONCAT44(local_f0._4_4_, uVar29 + 7);
                                        uVar29 = (uVar3 & 7) * 8;
                                        local_160 = (ulong)uVar29;
                                        local_138 = uVar29 + 7;
                                        uVar14 = 0;
                                        uVar31 = 1;
                                        do {
                                            psVar19 = (shared_ptr<MapSquareLocation>*)eastl::
                                                vector<shared_ptr<MapSquareLocation>, eastl::allocator>::operator[](
                                                    (vector<shared_ptr<MapSquareLocation>, eastl::allocator>*)this_04,
                                                    uVar14);
                                            lVar15 = shared_ptr<MapSquareLocation>::operator->(psVar19);
                                            if (*(int*)&local_e8->field_0 == (int)*(char*)(lVar15 + 4)) {
                                                lVar15 = shared_ptr<MapSquareLocation>::operator->(psVar19);
                                                if ((int)(uint)local_e0 <= (int)*(char*)(lVar15 + 5)) {
                                                    lVar15 = shared_ptr<MapSquareLocation>::operator->(psVar19);
                                                    if (*(char*)(lVar15 + 5) <= (int)local_f0) {
                                                        lVar15 = shared_ptr<MapSquareLocation>::operator->(psVar19);
                                                        if ((int)local_160 <= *(char*)(lVar15 + 6)) {
                                                            lVar15 = shared_ptr<MapSquareLocation>::operator->(psVar19);
                                                            uVar10 =
                                                                (undefined4)((ulong)in_stack_fffffffffffffe30 >> 32);
                                                            uVar34 =
                                                                (undefined4)((ulong)in_stack_fffffffffffffe38 >> 32);
                                                            uVar35 =
                                                                (undefined4)((ulong)in_stack_fffffffffffffe40 >> 32);
                                                            iVar13 = (int)in_stack_fffffffffffffe28;
                                                            if (*(char*)(lVar15 + 6) <= local_138) {
                                                                lVar15 =
                                                                    shared_ptr<MapSquareLocation>::operator->(psVar19);
                                                                uVar29 = (int)*(char*)(lVar15 + 5) % 8;
                                                                lVar15 =
                                                                    shared_ptr<MapSquareLocation>::operator->(psVar19);
                                                                iVar32 = (int)*(char*)(lVar15 + 6) % 8;
                                                                local_f8 = (signed*)CONCAT44(
                                                                    local_f8._4_4_,
                                                                    (uint) * (byte*)((long)&local_e8->field_8 + 4));
                                                                lVar15 =
                                                                    shared_ptr<MapSquareLocation>::operator->(psVar19);
                                                                pLVar23 = (LocType*)shared_ptr<LocType>::operator->(
                                                                    (shared_ptr<LocType>*)(lVar15 + 72));
                                                                iVar11 = pLVar23->GetGridWidth(0);
                                                                local_108._0_4_ = iVar11;
                                                                lVar15 =
                                                                    shared_ptr<MapSquareLocation>::operator->(psVar19);
                                                                pLVar23 = (LocType*)shared_ptr<LocType>::operator->(
                                                                    (shared_ptr<LocType>*)(lVar15 + 72));
                                                                iVar11 = pLVar23->GetGridLength(0);
                                                                local_100._0_4_ = iVar11;
                                                                lVar15 =
                                                                    shared_ptr<MapSquareLocation>::operator->(psVar19);
                                                                bVar6 = ((lVar15 + 8))->GetRot();
                                                                local_f8 =
                                                                    (signed*)((ulong)uVar29)
                                                                        ->RegionRotateLocationX(
                                                                            iVar32, (uint)local_f8, (int)local_108,
                                                                            (int)local_100, (uint)bVar6, iVar13);
                                                                local_108 = (LocData*)CONCAT44(
                                                                    local_108._4_4_,
                                                                    (uint) * (byte*)((long)&local_e8->field_8 + 4));
                                                                lVar15 =
                                                                    shared_ptr<MapSquareLocation>::operator->(psVar19);
                                                                pLVar23 = (LocType*)shared_ptr<LocType>::operator->(
                                                                    (shared_ptr<LocType>*)(lVar15 + 72));
                                                                uVar12 = pLVar23->GetGridWidth(0);
                                                                local_100 = (bool*)CONCAT44(local_100._4_4_, uVar12);
                                                                lVar15 =
                                                                    shared_ptr<MapSquareLocation>::operator->(psVar19);
                                                                pLVar23 = (LocType*)shared_ptr<LocType>::operator->(
                                                                    (shared_ptr<LocType>*)(lVar15 + 72));
                                                                uVar12 = pLVar23->GetGridLength(0);
                                                                local_128 = (bool*)CONCAT44(local_128._4_4_, uVar12);
                                                                lVar15 =
                                                                    shared_ptr<MapSquareLocation>::operator->(psVar19);
                                                                bVar6 = ((lVar15 + 8))->GetRot();
                                                                iVar13 = ((ulong)uVar29)
                                                                             ->RegionRotateLocationZ(
                                                                                 iVar32, (int)local_108, (int)local_100,
                                                                                 (int)local_128, (uint)bVar6, iVar13);
                                                                lVar15 =
                                                                    shared_ptr<MapSquareLocation>::operator->(psVar19);
                                                                cVar4 = ((lVar15 + 8))->GetShape();
                                                                if (cVar4 == '\n') {
                                                                LAB_1003dc233:
                                                                    iVar11 = (int)local_f8 + (int)local_150 * 8;
                                                                    iVar13 = iVar13 + (int)local_158 * 8;
                                                                    cVar4 = local_120->IsLinkBelow(
                                                                        local_d8->field_0 * 64 + iVar11,
                                                                        local_d8->field_4 * 64 + iVar13);
                                                                    local_cb = (MakeSharedPool<MapSquareLocation,
                                                                                               16384>)((char)local_118 -
                                                                                                       cVar4);
                                                                    local_ca = SUB41(iVar11, 0);
                                                                    local_c9 = SUB41(iVar13, 0);
                                                                    local_f8 =
                                                                        (signed*)
                                                                            shared_ptr<MapSquareLocation>::operator->(
                                                                                psVar19);
                                                                    lVar15 = shared_ptr<MapSquareLocation>::operator->(
                                                                        psVar19);
                                                                    uVar7 = ((lVar15 + 8))->GetShape();
                                                                    lVar15 = shared_ptr<MapSquareLocation>::operator->(
                                                                        psVar19);
                                                                    cVar8 = ((lVar15 + 8))->GetRot();
                                                                    cVar4 = *(char*)((long)&local_e8->field_8 + 4);
                                                                    lVar15 = shared_ptr<MapSquareLocation>::operator->(
                                                                        psVar19);
                                                                    uVar25 = ((lVar15 + 8))->y();
                                                                    new ((auStack_19c + -3))
                                                                        LocData(uVar7, cVar8 + cVar4 & 3, uVar25);
                                                                    lVar15 = shared_ptr<MapSquareLocation>::operator->(
                                                                        psVar19);
                                                                    local_108 = (LocData*)(lVar15 + 60);
                                                                    lVar15 = shared_ptr<MapSquareLocation>::operator->(
                                                                        psVar19);
                                                                    local_100 = (bool*)(lVar15 + 61);
                                                                    lVar15 = shared_ptr<MapSquareLocation>::operator->(
                                                                        psVar19);
                                                                    local_128 = (bool*)(lVar15 + 62);
                                                                    lVar15 = shared_ptr<MapSquareLocation>::operator->(
                                                                        psVar19);
                                                                    in_stack_fffffffffffffe40 = (signed*)(lVar15 + 72);
                                                                    lVar15 = shared_ptr<MapSquareLocation>::operator->(
                                                                        psVar19);
                                                                    lVar26 = shared_ptr<MapSquareLocation>::operator->(
                                                                        psVar19);
                                                                    psVar22 = (shared_ptr*)(auStack_188 + 24);
                                                                    in_stack_fffffffffffffe28 = (char*)local_108;
                                                                    in_stack_fffffffffffffe30 = local_100;
                                                                    in_stack_fffffffffffffe38 = local_128;
                                                                    MakeSharedPool<MapSquareLocation, 16384>::
                                                                        MakeShared<signed char, signed char,
                                                                                   signed char, int&, LocData, bool&,
                                                                                   bool&, signed char&,
                                                                                   shared_ptr<LocType>&,
                                                                                   unsigned short&, bool&>(
                                                                            psVar22, &local_cb, &local_ca, &local_c9,
                                                                            local_f8, (int*)(auStack_19c + -3),
                                                                            local_108, local_100, local_128,
                                                                            in_stack_fffffffffffffe40,
                                                                            (shared_ptr*)(lVar15 + 64),
                                                                            (ushort*)(lVar26 + 66),
                                                                            (bool*)CONCAT44(in_stack_fffffffffffffe5c,
                                                                                            in_stack_fffffffffffffe58));
                                                                    local_140->push_back(psVar22);
                                                                    psVar22->~shared_ptr();
                                                                } else {
                                                                    lVar15 = shared_ptr<MapSquareLocation>::operator->(
                                                                        psVar19);
                                                                    cVar4 = ((lVar15 + 8))->GetShape();
                                                                    if ((cVar4 == '\v') ||
                                                                        ((((uint)local_f8 < 8 && (-1 < iVar13)) &&
                                                                          (iVar13 < 8))))
                                                                        goto LAB_1003dc233;
                                                                    uVar25 = logger::default_logger();
                                                                    new (&local_c8)
                                                                        logger::LogStream((LogStream*)&LOGGER_SCENE);
                                                                    puVar27 =
                                                                        (undefined4*)
                                                                            shared_ptr<MapSquareLocation>::operator->(
                                                                                psVar19);
                                                                    in_stack_fffffffffffffe40 =
                                                                        (signed*)CONCAT44(uVar35, iVar13);
                                                                    in_stack_fffffffffffffe38 =
                                                                        (bool*)CONCAT44(uVar34, (int)local_f8);
                                                                    in_stack_fffffffffffffe30 =
                                                                        (bool*)CONCAT44(uVar10, *puVar27);
                                                                    in_stack_fffffffffffffe28 =
                                                                        "Location %i overflowed build area after "
                                                                        "rotation (%i, %i), but is not a centrepiece";
                                                                    logger::Logger::Log(
                                                                        uVar25, 0, &local_c8, 3,

                                                                        "/Users/bamboo/bamboo-home-01/xml-data/"
                                                                        "build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                                                        "scene/loaders/LocationLoader.cpp",
                                                                        214,
                                                                        "Location %i overflowed build area after "
                                                                        "rotation (%i, %i), but is not a centrepiece",
                                                                        in_stack_fffffffffffffe30,
                                                                        in_stack_fffffffffffffe38,
                                                                        in_stack_fffffffffffffe40);
                                                                    local_c8.~LogStream();
                                                                }
                                                                pLVar33 = local_d8;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            uVar14 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>,
                                                                   BucketAllocatorEASTL>::size(this_04);
                                            bVar5 = uVar31 < uVar14;
                                            uVar14 = uVar31;
                                            uVar31 = (ulong)((int)uVar31 + 1);
                                        } while (bVar5);
                                    }
                                }
                                pJVar30 = local_130;
                            } while (local_130 != (Js5ResourceProvider*)8);
                        } while (local_148 != 8);
                        local_118 = local_118 + 1;
                    } while (local_118 != 4);
                }
                pLVar33->field_16 = 1;
                local_110->clear();
                uVar14 = (ulong)local_134;
            }
            uVar14 = uVar14 & 18446744073709551361;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar14 & 4294967295;
    }

    // 0x1003dc5b0, 320 bytes, placed by class name and debug map
    // LocationLoader::LoadMapSquareLocations(eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>&, Js5ResourceProvider&, int, int)
    undefined* LocationLoader::LoadMapSquareLocations(vector* param_1, Js5ResourceProvider* param_2, int param_3,
                                                      int param_4) {
        undefined* puVar1;
        undefined* puVar2;
        undefined** ppuVar3;
        uint uVar4;
        bool bVar5;
        bool bVar6;

        uVar4 = param_4 << 7 | param_3;
        puVar1 = (undefined*)(*(code*)param_2->field_0[6])(param_2, Js5Archive::JS5_MAPS, uVar4, 0, Priority::HIGH, 1);
        bVar5 = puVar1 == DataStatus::READY;
        bVar6 = puVar1 == DataStatus::MISSING;
        puVar2 = (undefined*)(*(code*)param_2->field_0[6])(param_2, Js5Archive::JS5_MAPS, uVar4, 1);
        ppuVar3 = &DataStatus::NOTLOADED;
        if ((puVar2 == DataStatus::MISSING || puVar2 == DataStatus::READY) && (bVar5 || bVar6)) {
            param_1->clear();
            if (puVar1 == DataStatus::READY) {
                LoadLocationData(this, param_1, param_2, uVar4, 0, false);
            }
            if (puVar2 == DataStatus::READY) {
                LoadLocationData(this, param_1, param_2, uVar4, 1, true);
            }
            ppuVar3 = &DataStatus::READY;
        }
        return *ppuVar3;
    }

    // 0x1003dca50, 16 bytes, placed by class name and debug map
    // LocationLoader::Destruct()
    void LocationLoader::Destruct() {
        (&field_24)->clear();
    }

    // 0x1003dca60, 1088 bytes, placed by class name and debug map
    // LocationLoader::LoadLocationData(eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>&, Js5ResourceProvider&, int, int, bool)
    void LocationLoader::LoadLocationData(vector* param_1, Js5ResourceProvider* param_2, int param_3, int param_4,
                                          bool param_5) {
        LocData* pLVar1;
        byte bVar2;
        char cVar3;
        undefined1 uVar4;
        bool bVar5;
        ushort uVar6;
        undefined* puVar7;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_00;
        shared_ptr* this_01;
        long lVar8;
        undefined8 uVar9;
        int iVar10;
        undefined7 in_register_00000089;
        uint uVar11;
        bool* in_stack_ffffffffffffff00;
        Vector2T<int> aVStack_f6[22];
        undefined1 auStack_e0[24];
        LocData local_c8;
        shared_ptr local_90;
        vector<shared_ptr<MapSquareLocation>, BucketAllocatorEASTL>* local_80;
        hash_map<unsigned int, shared_ptr<MapSquareLocation>, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                 BucketAllocatorEASTL, false>* local_78;
        shared_ptr local_70;
        shared_ptr local_60;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* local_50;
        vector* local_48;
        int local_40;
        uint local_3c;
        bool local_36;
        bool local_35;
        byte local_34;
        signed local_33;
        MakeSharedPool<MapSquareLocation, 16384> local_32;
        bool local_31;

        local_3c = (uint)CONCAT71(in_register_00000089, param_5);
        local_48 = param_1;
        new (&local_90) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        puVar7 = (undefined*)param_2->GetFile(&local_90, Js5Archive::JS5_MAPS, param_3, param_4,
                                              (Priority*)Priority::HIGH, true, false, false);
        if (puVar7 == DataStatus::READY) {
            this_00 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_90);
            local_40 = -1;
            local_3c = local_3c ^ 1;
            local_78 = (hash_map<unsigned int, shared_ptr<MapSquareLocation>, eastl::hash<unsigned int>,
                                 eastl::equal_to<unsigned int>, BucketAllocatorEASTL, false>*)&field_64;
            local_80 = (vector<shared_ptr<MapSquareLocation>, BucketAllocatorEASTL>*)&field_112;
            local_50 = this_00;
            while (true) {
                uVar6 = this_00->gSmart1or2();
                iVar10 = 0;
                this_00 = local_50;
                while (local_50 = this_00, uVar6 == 32767) {
                    uVar6 = this_00->gSmart1or2();
                    iVar10 = iVar10 + 32767;
                    this_00 = local_50;
                }
                if ((uint)uVar6 + iVar10 == 0)
                    break;
                local_40 = local_40 + (uint)uVar6 + iVar10;
                uVar11 = 0;
                do {
                    uVar6 = this_00->gSmart1or2();
                    if (uVar6 != 0) {
                        uVar11 = (uVar11 + uVar6) - 1;
                        local_34 = (byte)uVar11 & 63;
                        local_33 = (signed)((byte)(uVar11 >> 6) & 63);
                        local_32 = SUB41(uVar11 >> 12, 0);
                        bVar2 = this_00->g1();
                        pLVar1 = (LocData*)(aVStack_f6 + -10);
                        LocData::LocData<PacketT<Array<unsigned char, eastl::allocator>>>(pLVar1, (uint)bVar2,
                                                                                          (PacketT*)this_00);
                        cVar3 = pLVar1->GetShape();
                        local_c8.m_shape = cVar3 == '\x02';
                        local_60._0_1_ = SUB41(local_3c, 0);
                        cVar3 = pLVar1->GetShape();
                        local_31 = cVar3 == '\b';
                        MakeSharedPool<MapSquareLocation, 16384>::MakeShared<
                            signed char&, unsigned char&, unsigned char&, int&, LocData&, bool, bool, bool>(
                            &local_70, &local_32, &local_33, &local_34, (uchar*)&local_40, (int*)pLVar1, &local_c8,
                            (bool*)&local_60, &local_31, in_stack_ffffffffffffff00);
                        local_48->push_back(&local_70);
                        uVar4 = ((aVStack_f6 + -10))->GetShape();
                        cVar3 = LocShapes::IsWallShape(uVar4);
                        if (cVar3 != '\0') {
                            local_c8._0_4_ = (uint)local_34 | (uint)(byte)local_33 * 12800 + (char)local_32 * 163840000;
                            this_01 =
                                (shared_ptr*)eastl::hash_map<unsigned int, shared_ptr<MapSquareLocation>,
                                                             eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                                             BucketAllocatorEASTL, false>::operator[](local_78,
                                                                                                      (uint*)&local_c8);
                            bVar5 = shared_ptr::operator_cast_to_bool(this_01);
                            if (!bVar5) {
                                shared_ptr<MapSquareLocation>::operator=((shared_ptr<MapSquareLocation>*)this_01,
                                                                         &local_70);
                            }
                        }
                        uVar4 = ((aVStack_f6 + -10))->GetShape();
                        cVar3 = LocShapes::IsWallDecorShapeWithOffset(uVar4);
                        if ((cVar3 != '\0') || (lVar8 = shared_ptr<MapSquareLocation>::operator->(
                                                    (shared_ptr<MapSquareLocation>*)&local_70),
                                                *(char*)(lVar8 + 66) != '\0')) {
                            eastl::vector<shared_ptr<MapSquareLocation>, BucketAllocatorEASTL>::push_back(local_80,
                                                                                                          &local_70);
                        }
                        pLVar1 = (LocData*)(aVStack_f6 + -10);
                        cVar3 = pLVar1->GetShape();
                        if (cVar3 == '\x02') {
                            uVar9 = pLVar1->y();
                            new (&local_c8) LocData(23, bVar2 + 1 & 3, uVar9);
                            local_31 = false;
                            local_36 = SUB41(local_3c, 0);
                            local_35 = false;
                            MakeSharedPool<MapSquareLocation, 16384>::MakeShared<
                                signed char&, unsigned char&, unsigned char&, int&, LocData, bool, bool, bool>(
                                &local_60, &local_32, &local_33, &local_34, (uchar*)&local_40, (int*)&local_c8,
                                (LocData*)&local_31, &local_36, &local_35, in_stack_ffffffffffffff00);
                            eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>::emplace_back<
                                shared_ptr<MapSquareLocation>>(
                                (vector<shared_ptr<MapSquareLocation>, eastl::allocator>*)local_48, &local_60);
                        LAB_1003dcb90:
                            local_60.~shared_ptr();
                        } else {
                            cVar3 = pLVar1->GetShape();
                            if (cVar3 == '\b') {
                                uVar9 = (aVStack_f6 + -10)->y();
                                new (&local_c8) LocData(24, bVar2 + 2 & 3, uVar9);
                                local_31 = false;
                                local_36 = SUB41(local_3c, 0);
                                local_35 = false;
                                MakeSharedPool<MapSquareLocation, 16384>::MakeShared<
                                    signed char&, unsigned char&, unsigned char&, int&, LocData, bool, bool, bool>(
                                    &local_60, &local_32, &local_33, &local_34, (uchar*)&local_40, (int*)&local_c8,
                                    (LocData*)&local_31, &local_36, &local_35, in_stack_ffffffffffffff00);
                                eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>::emplace_back<
                                    shared_ptr<MapSquareLocation>>(
                                    (vector<shared_ptr<MapSquareLocation>, eastl::allocator>*)local_48, &local_60);
                                goto LAB_1003dcb90;
                            }
                        }
                        local_70.~shared_ptr();
                        this_00 = local_50;
                    }
                } while (uVar6 != 0);
            }
        }
        local_90.~shared_ptr();
    }

} // namespace jag::game
