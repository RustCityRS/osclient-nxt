// libs/js5/Js5Preloader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.js5

namespace jag {
    class Js5Preloader {
    public:
        class ArchiveLoadProgress;
        Js5Preloader(Js5ResourceProvider&, Js5ArchiveSetSettings&);
        ValidateArchives();
        IsDiskCacheReadyForArchivePreload(int) const;
        NextArchive(bool&);
        NextGroup();
        void Service();
        void UpdateDownloadSpeedEstimate();
        float GetPreloadProgressPercentage() const;
        void Restart();
        GetOverallPercentProgressPercentage();
        bool IsVerifyingFiles() const;
        long GetDownloadAmountDoneInBytes() const;
        long GetDownloadAmountLeftInMb() const;
        long GetDownloadAmountTotalInMb() const;

        // data members, from how the methods use this: 192 bytes
        Js5ResourceProvider* field_0; // offset 0
        char _unknown_8[32];
        int field_40;                                                               // offset 40
        int field_44;                                                               // offset 44
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* field_48; // offset 48
        int field_56;                                                               // offset 56
        char _unknown_60[36];
        undefined8 field_96;  // offset 96
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        char _unknown_120[4];
        undefined8 field_124; // offset 124
        char _unknown_132[4];
        float field_136; // offset 136
        char _unknown_140[36];
        int field_176;        // offset 176
        uint field_180;       // offset 180
        uint field_184;       // offset 184
        undefined1 field_188; // offset 188
        char _unknown_189[3];
    };

    class Js5Preloader::ArchiveLoadProgress {
    public:
        void IncrementGroupsLoaded(bool);
        void Restart();
        GetPercentageLoaded() const;
        GetDownloadPercentDone() const;
        GetDownloadPercentTotal() const;
        float GetDownloadPercentPending() const;
        ArchiveLoadProgress();

        // data members, from how the methods use this: 36 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[7];
        undefined8 field_8; // offset 8
        uint field_16;      // offset 16
        uint field_20;      // offset 20
        uint field_24;      // offset 24
        uint field_28;      // offset 28
        char _unknown_32[4];
    };

    // 0x1009e0be0, 384 bytes, base-object constructor, placed by class name
    // Js5Preloader::Js5Preloader(Js5ResourceProvider&, Js5ArchiveSetSettings&)
    void Js5Preloader::Js5Preloader(Js5ResourceProvider* param_1, Js5ArchiveSetSettings* param_2) {
        undefined1* this_00;
        int iVar1;
        undefined8 uVar3;
        undefined8 uVar4;
        ulong uVar5;
        Js5ArchiveSettings* local_50;
        undefined1* local_48;
        vector<Js5Preloader::ArchiveLoadProgress, eastl::allocator>* local_40;
        int local_34;

        field_0 = param_1;
        this_00 = &field_8;
        new (this_00) eastl::vector<Js5ArchiveSettings*, eastl::allocator>();
        field_40 = 0;
        field_44 = -1;
        field_48 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0;
        field_56 = -1;
        new (&field_64) eastl::vector<Js5Preloader::PreloadLoadingEntry, eastl::allocator>();
        local_40 = (vector<Js5Preloader::ArchiveLoadProgress, eastl::allocator>*)&field_144;
        field_124 = 0;
        *(undefined8*)&field_132 = 0;
        field_112 = 0;
        *(undefined8*)&field_120 = 0;
        field_96 = 0;
        field_104 = 0;
        local_48 = &field_64;
        eastl::vector<Js5Preloader::ArchiveLoadProgress, eastl::allocator>::vector(local_40);
        field_176 = 0;
        field_180 = 0;
        field_184 = 0;
        field_188 = 1;
        iVar1 = param_2->GetX();
        this_00->reserve((ulong)(iVar1 + 1));
        local_50 = (Js5ArchiveSettings*)param_2->GetStart(&local_34);
        while (local_50 != (Js5ArchiveSettings*)0) {
            if ((undefined*)local_50->GetPrefetchPriority() != Priority::NONE) {
                this_00->push_back(&local_50);
            }
            local_50 = (Js5ArchiveSettings*)param_2->GetNext(&local_34);
        }
        uVar3 = this_00->HeapBeginPtr();
        uVar4 = this_00->end();
        eastl::sort<Js5ArchiveSettings**,
                    Js5Preloader::Js5Preloader(Js5ResourceProvider&, Js5ArchiveSetSettings&)::__0>(uVar3, uVar4);
        uVar5 = this_00->size();
        eastl::vector<Js5Preloader::ArchiveLoadProgress, eastl::allocator>::resize(local_40, uVar5);
    }

    // 0x1009e0ed0, 16 bytes, complete-object constructor, placed by class name
    // Js5Preloader::Js5Preloader(Js5ResourceProvider&, Js5ArchiveSetSettings&): jumps straight to the base-object constructor

    // 0x1009e0ee0, 368 bytes, placed by class name
    // Js5Preloader::ValidateArchives()
    undefined4 Js5Preloader::ValidateArchives() {
        undefined1* this_00;
        undefined1* this_01;
        Material* this_02;
        char cVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        uint uVar5;
        Js5DiskCache* this_03;
        undefined8* puVar6;
        long lVar7;
        undefined4 uVar8;
        ulong uVar9;
        bool bVar10;

        this_03 = (Js5DiskCache*)field_0->GetTransitionOutTime();
        this_00 = &field_8;
        iVar3 = field_44;
        iVar2 = this_00->size();
        bVar10 = iVar3 == iVar2 + -1;
        uVar8 = CONCAT31((int3)((uint)iVar3 >> 8), bVar10);
        if ((!bVar10) && (cVar1 = IsDiskCacheReadyForArchivePreload(this, field_44 + 1), cVar1 != '\0')) {
            this_01 = &field_144;
            do {
                uVar9 = (long)field_44 + 1;
                field_44 = (int)uVar9;
                puVar6 = (undefined8*)eastl::vector<Js5ArchiveSettings*, eastl::allocator>::operator[](
                    (vector<Js5ArchiveSettings*, eastl::allocator>*)this_00, uVar9);
                this_02 = (Material*)*puVar6;
                if ((this_02 != (Material*)0) && (iVar3 = this_02->GetSpriteID(), iVar3 != 0)) {
                    iVar3 = this_02->GetDiffuseAlphaMapSize();
                    if (iVar3 != 0) {
                        uVar4 = this_02->GetDiffuseAlphaMapSize();
                        uVar5 = this_02->GetSpriteID();
                        if (uVar4 < uVar5)
                            goto LAB_1009e1011;
                    }
                    iVar3 = this_02->GetX();
                    (field_0, (Js5ArchiveSettings*)this_02)->UpdateMissingGroupsCountForArchive();
                    uVar4 = this_03->GetMissingGroupCount(iVar3);
                    lVar7 = eastl::vector<Js5Preloader::ArchiveLoadProgress, eastl::allocator>::operator[](
                        (vector<Js5Preloader::ArchiveLoadProgress, eastl::allocator>*)this_01, (long)field_44);
                    iVar2 = eastl::min<unsigned int>(uVar4, *(uint*)(lVar7 + 20));
                    iVar3 = *(int*)(lVar7 + 20);
                    lVar7 = eastl::vector<Js5Preloader::ArchiveLoadProgress, eastl::allocator>::operator[](
                        (vector<Js5Preloader::ArchiveLoadProgress, eastl::allocator>*)this_01, (long)field_44);
                    *(int*)(lVar7 + 16) = iVar3 - iVar2;
                    lVar7 = eastl::vector<Js5Preloader::ArchiveLoadProgress, eastl::allocator>::operator[](
                        (vector<Js5Preloader::ArchiveLoadProgress, eastl::allocator>*)this_01, (long)field_44);
                    field_184 = field_184 + *(int*)(lVar7 + 16);
                    lVar7 = eastl::vector<Js5Preloader::ArchiveLoadProgress, eastl::allocator>::operator[](
                        (vector<Js5Preloader::ArchiveLoadProgress, eastl::allocator>*)this_01, (long)field_44);
                    *(int*)(lVar7 + 28) = iVar2;
                }
            LAB_1009e1011:
                iVar3 = field_44;
                iVar2 = this_00->size();
                bVar10 = iVar3 == iVar2 + -1;
                uVar8 = CONCAT31((int3)((uint)iVar3 >> 8), bVar10);
                if (bVar10) {
                    return uVar8;
                }
                cVar1 = IsDiskCacheReadyForArchivePreload(this, field_44 + 1);
            } while (cVar1 != '\0');
        }
        return uVar8;
    }

    // 0x1009e1050, 112 bytes, placed by class name
    // Js5Preloader::IsDiskCacheReadyForArchivePreload(int) const
    undefined8 Js5Preloader::IsDiskCacheReadyForArchivePreload(int param_1) {
        char cVar1;
        int iVar2;
        Js5DiskCache* this_00;
        undefined8* puVar3;

        this_00 = (Js5DiskCache*)field_0->GetTransitionOutTime();
        puVar3 = (undefined8*)eastl::vector<Js5ArchiveSettings*, eastl::allocator>::operator[](
            (vector<Js5ArchiveSettings*, eastl::allocator>*)&field_8, (long)param_1);
        iVar2 = (*puVar3)->GetX();
        if ((this_00 == (Js5DiskCache*)0) || (cVar1 = this_00->Ready(iVar2), cVar1 == '\0')) {
            return 0;
        }
        return this_00->IsValidated(iVar2);
    }

    // 0x1009e11d0, 288 bytes, placed by class name
    // Js5Preloader::NextArchive(bool&)
    undefined8 Js5Preloader::NextArchive(bool* param_1) {
        undefined1* this_00;
        Material* this_01;
        char cVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        undefined8* puVar6;
        ulong uVar7;

        this_00 = &field_8;
        iVar3 = field_44;
        iVar2 = this_00->size();
        if (iVar3 != iVar2 + -1) {
            do {
                cVar1 = IsDiskCacheReadyForArchivePreload(this, field_44 + 1);
                if (cVar1 == '\0') {
                    *param_1 = true;
                    return 0;
                }
                while (true) {
                    uVar7 = (long)field_44 + 1;
                    field_44 = (int)uVar7;
                    puVar6 = (undefined8*)eastl::vector<Js5ArchiveSettings*, eastl::allocator>::operator[](
                        (vector<Js5ArchiveSettings*, eastl::allocator>*)this_00, uVar7);
                    cVar1 = (*puVar6)->GetPreloadEnabled();
                    iVar3 = field_44;
                    if (cVar1 != '\0')
                        break;
                    iVar2 = this_00->size();
                    if (iVar3 == iVar2 + -1) {
                        return 0;
                    }
                }
                puVar6 = (undefined8*)eastl::vector<Js5ArchiveSettings*, eastl::allocator>::operator[](
                    (vector<Js5ArchiveSettings*, eastl::allocator>*)this_00, (long)iVar3);
                this_01 = (Material*)*puVar6;
                iVar3 = this_01->GetSpriteID();
                if (iVar3 != 0) {
                    iVar3 = this_01->GetDiffuseAlphaMapSize();
                    if (iVar3 == 0) {
                    LAB_1009e12d3:
                        field_48 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0;
                        return 1;
                    }
                    uVar4 = this_01->GetDiffuseAlphaMapSize();
                    if (this_01->GetSpriteID() <= uVar4)
                        goto LAB_1009e12d3;
                }
                iVar3 = field_44;
                iVar2 = this_00->size();
            } while (iVar3 != iVar2 + -1);
        }
        return 0;
    }

    // 0x1009e1300, 192 bytes, placed by class name
    // Js5Preloader::NextGroup()
    undefined8 Js5Preloader::NextGroup() {
        Js5ResourceProvider* pJVar1;
        int iVar3;
        undefined8* puVar4;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar6;
        int iVar8;
        GeometryBatchInstance* local_30;
        bool local_21;

        if (field_48 == (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0) {
            local_30 = (GeometryBatchInstance*)0;
            pJVar1 = field_0;
            puVar4 = (undefined8*)eastl::vector<Js5ArchiveSettings*, eastl::allocator>::operator[](
                (vector<Js5ArchiveSettings*, eastl::allocator>*)&field_8, (long)field_44);
            if ((undefined*)(*(code*)pJVar1->field_0[3])(pJVar1, &local_30, *puVar4) == DataStatus::NOTLOADED) {
                return 0;
            }
            pvVar6 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_30->GetMaterial();
            field_48 = pvVar6;
            field_56 = -1;
        }
        iVar8 = field_56 + 1;
        field_56 = iVar8;
        iVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_48);
        if (iVar8 < iVar3) {
            return 1;
        }
        local_21 = false;
        if (NextArchive(this, &local_21) != '\0') {
            return NextGroup(this);
        }
        if (local_21 == false) {
            field_176 = 4;
        }
        return 0;
    }

    // 0x1009e1440, 1600 bytes, placed by class name
    // Js5Preloader::Service()
    void Js5Preloader::Service() {
        undefined1* this_00;
        uint* puVar1;
        Js5ResourceProvider* pJVar2;
        Js5ArchiveSettings* this_01;
        vector<Js5Preloader::ArchiveLoadProgress, eastl::allocator>* this_02;
        char cVar3;
        bool bVar4;
        int iVar5;
        uint uVar6;
        undefined4 uVar7;
        long lVar8;
        ulong uVar9;
        undefined8* puVar10;
        undefined* puVar11;
        char* pcVar12;
        char* pcVar13;
        undefined* puVar14;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_03;
        longlong lVar15;
        undefined8 uVar16;
        undefined4* puVar17;
        byte bVar18;
        vector<eastl::pair<int, int>, eastl::allocator>* this_04;
        ulong uVar19;
        Js5Preloader* pJVar20;
        float fVar21;
        float fVar22;
        reverse_iterator local_98[8];
        undefined8 local_90;
        undefined4 local_88;
        undefined8 local_80;
        int local_78;
        reverse_iterator<Js5Preloader::ArchiveLoadProgress*> local_74;
        ulong local_70;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* local_68;
        reverse_iterator<Js5Preloader::ArchiveLoadProgress*> local_60;
        undefined7 uStack_5f;
        vector<Js5Preloader::ArchiveLoadProgress, eastl::allocator>* local_58;
        undefined* local_50;
        vector<eastl::pair<int, int>, eastl::allocator>* local_48;

        if ((((field_188 != '\0') || (field_176 < 2)) && (field_40 != 0)) && (field_176 != 5)) {
            this_00 = &field_64;
            lVar8 = this_00->size();
            pJVar20 = (Js5Preloader*)this;
            if (lVar8 != 0) {
                uVar19 = 0;
                do {
                    iVar5 = (int)uVar19;
                    puVar10 =
                        (undefined8*)eastl::vector<Js5Preloader::PreloadLoadingEntry, eastl::allocator>::operator[](
                            (vector<Js5Preloader::PreloadLoadingEntry, eastl::allocator>*)this_00, uVar19);
                    pJVar2 = pJVar20->field_0;
                    puVar11 = (undefined*)(*(code*)pJVar2->field_0[7])(pJVar2, *puVar10, *(undefined4*)(puVar10 + 1), 0,
                                                                       &local_90);
                    if (puVar11 == DataStatus::NOTLOADED) {
                        *(byte*)((long)puVar10 + 28) = *(byte*)((long)puVar10 + 28) | (byte)local_90._0_1_;
                    } else {
                        puVar10[2]->IncrementGroupsLoaded(*(bool*)((long)puVar10 + 28));
                        puVar1 = &pJVar20->field_184;
                        *puVar1 = *puVar1 + 1;
                        lVar8 = this_00->HeapBeginPtr();
                        this_00->erase((PreloadLoadingEntry*)(uVar19 * 32 + lVar8));
                        iVar5 = iVar5 + -1;
                    }
                    uVar19 = (ulong)(iVar5 + 1);
                    uVar9 = this_00->size();
                } while (uVar19 < uVar9);
            }
            pJVar20 = (Js5Preloader*)this;
            local_68 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this_00;
            UpdateDownloadSpeedEstimate((Js5Preloader*)this);
            if (pJVar20->field_176 == 4) {
                cVar3 = eastl::vector<
                    int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(local_68);
                if (cVar3 != '\0') {
                    pJVar20->field_184 = pJVar20->field_180;
                    pJVar20->field_104 = pJVar20->field_96;
                    pcVar12 = (char*)(&pJVar20->field_144)->HeapBeginPtr();
                    pcVar13 = (char*)(&pJVar20->field_144)->end();
                    for (; pcVar12 != pcVar13; pcVar12 = pcVar12 + 40) {
                        if (*pcVar12 != '\0') {
                            *(undefined4*)(pcVar12 + 16) = *(undefined4*)(pcVar12 + 20);
                            *(undefined4*)(pcVar12 + 24) = *(undefined4*)(pcVar12 + 28);
                        }
                    }
                    ((Js5Preloader*)this)->field_176 = 5;
                }
            } else {
                iVar5 = local_68->size();
                if (iVar5 < pJVar20->field_40) {
                    this_04 = (vector<eastl::pair<int, int>, eastl::allocator>*)&pJVar20->field_8;
                    local_58 = (vector<Js5Preloader::ArchiveLoadProgress, eastl::allocator>*)&pJVar20->field_144;
                    local_48 = this_04;
                    do {
                        if (pJVar20->field_176 == 0) {
                            local_90 = 0;
                            puVar11 = (undefined*)(*(code*)pJVar20->field_0->field_0[5])(pJVar20->field_0, &local_90);
                            if (puVar11 == DataStatus::NOTLOADED) {
                                return;
                            }
                            pJVar20->field_96 = 0;
                            pJVar20->field_180 = 0;
                            lVar8 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_04);
                            if (lVar8 == 0) {
                                local_70 = 0;
                                bVar18 = 0;
                            } else {
                                local_70 = 0;
                                uVar19 = 0;
                                do {
                                    puVar10 =
                                        (undefined8*)eastl::vector<Js5ArchiveSettings*, eastl::allocator>::operator[](
                                            (vector<Js5ArchiveSettings*, eastl::allocator>*)this_04, uVar19);
                                    this_01 = (Js5ArchiveSettings*)*puVar10;
                                    puVar14 = (undefined*)(*(code*)pJVar20->field_0->field_0[3])(pJVar20->field_0,
                                                                                                 &local_60, this_01);
                                    puVar11 = DataStatus::NOTLOADED;
                                    if (puVar14 != DataStatus::NOTLOADED) {
                                        local_50 = DataStatus::NOTLOADED;
                                        iVar5 = (CONCAT71(uStack_5f, local_60))->GetEndPosition();
                                        pJVar20->field_180 = pJVar20->field_180 + iVar5;
                                        uVar6 = this_01->GetPreloadSize();
                                        pJVar20->field_96 = pJVar20->field_96 + (ulong)uVar6;
                                        pcVar12 = (char*)eastl::vector<Js5Preloader::ArchiveLoadProgress,
                                                                       eastl::allocator>::operator[](local_58, uVar19);
                                        this_03 = (vector<oldscape::dash3d::EntityHighlight*,
                                                          BucketAllocatorEASTL>*)(CONCAT71(uStack_5f, local_60))
                                                      ->GetMaterial();
                                        uVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*,
                                                              BucketAllocatorEASTL>::end(this_03);
                                        *(undefined4*)(pcVar12 + 20) = uVar7;
                                        lVar15 = (CONCAT71(uStack_5f, local_60))->GetMemoryCache();
                                        uVar16 = eastl::max<long long>(lVar15, 0);
                                        *(undefined8*)(pcVar12 + 8) = uVar16;
                                        cVar3 = this_01->GetPreloadEnabled();
                                        *pcVar12 = cVar3;
                                        if (*(long*)(pcVar12 + 8) == 0) {
                                            uVar6 = this_01->GetPreloadSize();
                                            *(ulong*)(pcVar12 + 8) = (ulong)uVar6;
                                            if (cVar3 != '\0')
                                                goto LAB_1009e174c;
                                        LAB_1009e1773:
                                            lVar8 = 0;
                                        } else {
                                            if (cVar3 == '\0')
                                                goto LAB_1009e1773;
                                        LAB_1009e174c:
                                            lVar8 = *(long*)(pcVar12 + 8);
                                        }
                                        local_70 = local_70 + lVar8;
                                        puVar11 = local_50;
                                        this_04 = local_48;
                                        pJVar20 = (Js5Preloader*)this;
                                    }
                                    if (puVar14 == puVar11) {
                                        bVar18 = 1;
                                        goto LAB_1009e17af;
                                    }
                                    uVar19 = uVar19 + 1;
                                    uVar9 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_04);
                                } while (uVar19 < uVar9);
                                bVar18 = 0;
                            }
                        LAB_1009e17af:
                            this_02 = local_58;
                            if ((bVar18 & 1) != 0) {
                                return;
                            }
                            pcVar12 = (char*)local_58->HeapBeginPtr();
                            pcVar13 = (char*)this_02->end();
                            if (pcVar12 == pcVar13) {
                                fVar21 = 0.0;
                            } else {
                                fVar21 = 0.0;
                                do {
                                    if (*pcVar12 == '\0') {
                                        pcVar12[32] = '\0';
                                        pcVar12[33] = '\0';
                                        pcVar12[34] = '\0';
                                        pcVar12[35] = '\0';
                                    } else {
                                        fVar22 =
                                            (float)((double)(*(ulong*)(pcVar12 + 8) >> 10) / (double)(local_70 >> 10));
                                        *(float*)(pcVar12 + 32) = fVar22;
                                        fVar21 = fVar21 + fVar22;
                                    }
                                    pcVar12 = pcVar12 + 40;
                                } while (pcVar12 != pcVar13);
                            }
                            local_50 = (undefined*)CONCAT44(local_50._4_4_, fVar21);
                            cVar3 = local_58->empty();
                            if (cVar3 == '\0') {
                                eastl::vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true,
                                                                                           eastl::allocator>>::rbegin();
                                eastl::vector<ObjStackEntry, eastl::allocator>::rend();
                                while (bVar4 = eastl::operator!=((reverse_iterator*)&local_60, local_98), bVar4) {
                                    pcVar12 =
                                        (char*)eastl::reverse_iterator<Js5Preloader::ArchiveLoadProgress*>::operator->(
                                            &local_60);
                                    if (*pcVar12 != '\0') {
                                        local_50 = (undefined*)CONCAT44(local_50._4_4_, 1.0 - local_50._0_4_);
                                        lVar8 = eastl::reverse_iterator<Js5Preloader::ArchiveLoadProgress*>::operator->(
                                            &local_60);
                                        *(float*)(lVar8 + 32) = local_50._0_4_ + *(float*)(lVar8 + 32);
                                        break;
                                    }
                                    eastl::reverse_iterator<Js5Preloader::ArchiveLoadProgress*>::operator++(
                                        (reverse_iterator<Js5Preloader::ArchiveLoadProgress*>*)local_98,
                                        (int)&local_60);
                                    eastl::vector<ObjStackEntry, eastl::allocator>::rend();
                                }
                            }
                            pJVar20->field_136 = 0.0;
                            pJVar20->field_112 = 0;
                            *(undefined8*)((long)&pJVar20->field_124 + 4) = 18446744073709551615;
                            pJVar20->field_176 = 1;
                            iVar5 = pJVar20->field_176;
                            this_04 = local_48;
                        } else {
                            iVar5 = pJVar20->field_176;
                        }
                        if (iVar5 == 1) {
                            cVar3 = ValidateArchives(pJVar20);
                            if (cVar3 == '\0') {
                                return;
                            }
                            pJVar20->field_44 = -1;
                            NextArchive(pJVar20, (bool*)&local_90);
                            pJVar20->field_176 = 2;
                            fVar21 = (float)GetPreloadProgressPercentage(pJVar20);
                            if (fVar21 == 100.0) {
                                pJVar20->field_176 = 4;
                                return;
                            }
                            if (pJVar20->field_188 == '\0') {
                                return;
                            }
                        }
                        if (pJVar20->field_176 == 2) {
                            cVar3 = NextGroup(pJVar20);
                            if (cVar3 == '\0') {
                                return;
                            }
                            pJVar20->field_176 = 3;
                        }
                        if (pJVar20->field_176 == 3) {
                            pJVar2 = pJVar20->field_0;
                            puVar10 = (undefined8*)eastl::vector<Js5ArchiveSettings*, eastl::allocator>::operator[](
                                (vector<Js5ArchiveSettings*, eastl::allocator>*)local_48, (long)pJVar20->field_44);
                            uVar16 = *puVar10;
                            puVar17 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)((Js5Preloader*)this)->field_48,
                                (long)((Js5Preloader*)this)->field_56);
                            pJVar20 = (Js5Preloader*)this;
                            this_04 = local_48;
                            puVar11 = (undefined*)(*(code*)pJVar2->field_0[7])(pJVar2, uVar16, *puVar17, 0, &local_60);
                            if (puVar11 == DataStatus::NOTLOADED) {
                                puVar10 = (undefined8*)eastl::vector<Js5ArchiveSettings*, eastl::allocator>::operator[](
                                    (vector<Js5ArchiveSettings*, eastl::allocator>*)this_04, (long)pJVar20->field_44);
                                local_90 = *puVar10;
                                puVar17 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                                    (Array<unsigned int, eastl::allocator>*)pJVar20->field_48, (long)pJVar20->field_56);
                                local_88 = *puVar17;
                                local_80 =
                                    eastl::vector<Js5Preloader::ArchiveLoadProgress, eastl::allocator>::operator[](
                                        local_58, (long)pJVar20->field_44);
                                local_78 = pJVar20->field_44;
                                local_74 = local_60;
                                local_68->push_back((PreloadLoadingEntry*)&local_90);
                            }
                            pJVar20->field_176 = 2;
                        }
                        iVar5 = local_68->size();
                    } while (iVar5 < pJVar20->field_40);
                }
            }
        }
    }

    // 0x1009e1ac0, 32 bytes, inline, placed by class name
    // Js5Preloader::ArchiveLoadProgress::IncrementGroupsLoaded(bool)
    void Js5Preloader::ArchiveLoadProgress::IncrementGroupsLoaded(bool param_1) {
        undefined3 in_register_00000031;

        field_16 = field_16 + 1;
        if ((CONCAT31(in_register_00000031, param_1) != 0) && (field_28 != 0)) {
            field_24 = field_24 + 1;
        }
    }

    // 0x1009e1b30, 320 bytes, placed by class name
    // Js5Preloader::UpdateDownloadSpeedEstimate()
    void Js5Preloader::UpdateDownloadSpeedEstimate() {
        bool bVar1;
        ulonglong uVar2;
        shared_ptr* psVar3;
        RenderPipelineState* this_00;
        ClientStream* this_01;
        long lVar4;
        ulong uVar5;
        undefined1 auVar6[16];
        undefined1 auVar7[16];
        ulonglong local_48;
        ulonglong local_40;
        uint local_38;
        uint local_34;
        uint local_30;
        uint local_2c;
        uint local_28;
        uint local_24;

        uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
        uVar5 = 0;
        if (*(ulong*)&field_120 <= uVar2) {
            uVar5 = uVar2 - *(long*)&field_120;
        }
        if (2499 < uVar5) {
            field_136 = 0.0;
            *(ulonglong*)&field_120 = uVar2;
            psVar3 = (shared_ptr*)field_0->second();
            bVar1 = shared_ptr::operator_cast_to_bool(psVar3);
            if (bVar1) {
                this_00 =
                    (RenderPipelineState*)shared_ptr<Js5WorkerThread>::operator->((shared_ptr<Js5WorkerThread>*)psVar3);
                psVar3 = (shared_ptr*)this_00->GetPSStorageBuffers();
                bVar1 = shared_ptr::operator_cast_to_bool(psVar3);
                if (bVar1) {
                    this_01 = (ClientStream*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)psVar3);
                    this_01->GetProfiling(&local_38, &local_34, &local_30, &local_48, &local_40, &local_2c, &local_24,
                                          &local_28);
                    lVar4 = (ulong)local_24 - *(long*)((long)&field_124 + 4);
                    auVar6._8_4_ = (int)((ulong)lVar4 >> 32);
                    auVar6._0_8_ = lVar4;
                    auVar6._12_4_ = 1160773632;
                    auVar7._8_4_ = (int)(uVar5 >> 32);
                    auVar7._0_8_ = uVar5;
                    auVar7._12_4_ = 1160773632;
                    field_136 = (float)((((auVar6._8_8_ - 1.9342813113834067e+25) +
                                          ((double)CONCAT44(1127219200, (int)lVar4) - 4503599627370496.0)) *
                                         9.5367431640625e-07) /
                                        (((auVar7._8_8_ - 1.9342813113834067e+25) +
                                          ((double)CONCAT44(1127219200, (int)uVar5) - 4503599627370496.0)) *
                                         0.001));
                    *(ulong*)((long)&field_124 + 4) = (ulong)local_24;
                }
            }
        }
    }

    // 0x1009e1cb0, 272 bytes, placed by class name
    // Js5Preloader::GetPreloadProgressPercentage() const
    float Js5Preloader::GetPreloadProgressPercentage() {
        float fVar1;
        int iVar2;
        char cVar3;
        ArchiveLoadProgress* this_00;
        ArchiveLoadProgress* pAVar4;
        ulong uVar5;
        float fVar6;
        float fVar7;

        if (field_176 < 2) {
            cVar3 = (&field_8)->empty();
            if (cVar3 == '\0') {
                iVar2 = field_44;
                uVar5 = (&field_8)->size();
                return ((float)(iVar2 + 1) * 10.0) / (float)uVar5;
            }
        } else {
            this_00 = (ArchiveLoadProgress*)(&field_144)->HeapBeginPtr();
            pAVar4 = (ArchiveLoadProgress*)(&field_144)->end();
            if (this_00 != pAVar4) {
                fVar7 = 0.0;
                do {
                    fVar1 = *(float*)&this_00->field_32;
                    fVar6 = 1.0;
                    if (this_00->field_0 != '\0') {
                        fVar6 = (float)this_00->GetPercentageLoaded();
                    }
                    fVar7 = fVar7 + fVar6 * fVar1;
                    this_00 = (ArchiveLoadProgress*)&this_00[1].field_4;
                } while (this_00 != pAVar4);
                return fVar7 * 90.0 + 10.0;
            }
        }
        return 10.0;
    }

    // 0x1009e1e30, 128 bytes, placed by class name
    // Js5Preloader::Restart()
    void Js5Preloader::Restart() {
        ArchiveLoadProgress* this_00;
        ArchiveLoadProgress* pAVar1;

        field_176 = 0;
        field_56 = -1;
        field_44 = -1;
        field_104 = 0;
        field_184 = 0;
        this_00 = (ArchiveLoadProgress*)(&field_144)->HeapBeginPtr();
        pAVar1 = (ArchiveLoadProgress*)(&field_144)->end();
        for (; this_00 != pAVar1; this_00 = (ArchiveLoadProgress*)&this_00[1].field_4) {
            this_00->Restart();
        }
    }

    // 0x1009e1eb0, 16 bytes, inline, placed by class name
    // Js5Preloader::ArchiveLoadProgress::Restart()
    void Js5Preloader::ArchiveLoadProgress::Restart() {
        field_16 = 0;
    }

    // 0x1009e1ec0, 96 bytes, placed by class name
    // Js5Preloader::GetOverallPercentProgressPercentage()
    undefined8 Js5Preloader::GetOverallPercentProgressPercentage() {
        float fVar2;
        undefined4 extraout_XMM0_Db;
        undefined4 uVar3;

        if (GetInstanceNumber() < 1) {
            if (field_96 == 0) {
                fVar2 = 0.0;
                uVar3 = 0;
            } else {
                fVar2 = ((float)field_184 * 100.0) / (float)field_180;
                uVar3 = extraout_XMM0_Db;
            }
        } else {
            fVar2 = 100.0;
            uVar3 = 0;
        }
        return CONCAT44(uVar3, fVar2);
    }

    // 0x1009e1f20, 16 bytes, placed by class name
    // Js5Preloader::IsVerifyingFiles() const
    bool Js5Preloader::IsVerifyingFiles() {
        return field_176 < 2;
    }

    // 0x1009e1f30, 64 bytes, inline, placed by class name
    // Js5Preloader::ArchiveLoadProgress::GetPercentageLoaded() const
    undefined8 Js5Preloader::ArchiveLoadProgress::GetPercentageLoaded() {
        if (field_20 == 0) {
            return 0;
        }
        return eastl::min<float>(1.0, (float)field_16 / (float)field_20);
    }

    // 0x1009e1f70, 272 bytes, placed by class name
    // Js5Preloader::GetDownloadAmountDoneInBytes() const
    long Js5Preloader::GetDownloadAmountDoneInBytes() {
        ArchiveLoadProgress* this_00;
        ArchiveLoadProgress* pAVar2;
        ulong uVar3;
        long lVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        double dVar8;

        if (IsVerifyingFiles(this) == '\0') {
            this_00 = (ArchiveLoadProgress*)(&field_144)->HeapBeginPtr();
            pAVar2 = (ArchiveLoadProgress*)(&field_144)->end();
            if (this_00 != pAVar2) {
                lVar4 = 0;
                do {
                    if (this_00->field_0 != '\0') {
                        fVar5 = (float)this_00->GetDownloadPercentDone();
                        fVar6 = (float)this_00->GetDownloadPercentTotal();
                        fVar7 = (float)this_00->GetDownloadPercentTotal();
                        dVar8 = (((double)CONCAT44(1160773632, (int)((ulong)this_00->field_8 >> 32)) -
                                  1.9342813113834067e+25) +
                                 ((double)CONCAT44(1127219200, (int)this_00->field_8) - 4503599627370496.0)) *
                                ((double)(1.0 - fVar7) + (double)(fVar6 * fVar5));
                        uVar3 = (ulong)dVar8;
                        lVar4 = lVar4 + ((long)(dVar8 - 9.223372036854776e+18) & (long)uVar3 >> 63 | uVar3);
                    }
                    this_00 = (ArchiveLoadProgress*)&this_00[1].field_4;
                } while (this_00 != pAVar2);
                return lVar4;
            }
        }
        return 0;
    }

    // 0x1009e2080, 64 bytes, inline, placed by class name
    // Js5Preloader::ArchiveLoadProgress::GetDownloadPercentDone() const
    undefined8 Js5Preloader::ArchiveLoadProgress::GetDownloadPercentDone() {
        if (field_28 == 0) {
            return 1065353216;
        }
        return eastl::min<float>(1.0, (float)field_24 / (float)field_28);
    }

    // 0x1009e20c0, 64 bytes, inline, placed by class name
    // Js5Preloader::ArchiveLoadProgress::GetDownloadPercentTotal() const
    undefined8 Js5Preloader::ArchiveLoadProgress::GetDownloadPercentTotal() {
        if (field_20 == 0) {
            return 0;
        }
        return eastl::min<float>(1.0, (float)field_28 / (float)field_20);
    }

    // 0x1009e2100, 240 bytes, placed by class name
    // Js5Preloader::GetDownloadAmountLeftInMb() const
    long Js5Preloader::GetDownloadAmountLeftInMb() {
        ArchiveLoadProgress* this_00;
        ArchiveLoadProgress* pAVar1;
        ulong uVar2;
        long lVar3;
        float fVar4;
        float fVar5;
        undefined1 auVar6[16];
        double dVar7;

        this_00 = (ArchiveLoadProgress*)(&field_144)->HeapBeginPtr();
        pAVar1 = (ArchiveLoadProgress*)(&field_144)->end();
        if (this_00 == pAVar1) {
            lVar3 = 0;
        } else {
            lVar3 = 0;
            do {
                if (this_00->field_0 != '\0') {
                    fVar4 = (float)this_00->GetDownloadPercentPending();
                    fVar5 = (float)this_00->GetDownloadPercentTotal();
                    dVar7 =
                        (((double)CONCAT44(1160773632, (int)((ulong)this_00->field_8 >> 32)) - 1.9342813113834067e+25) +
                         ((double)CONCAT44(1127219200, (int)this_00->field_8) - 4503599627370496.0)) *
                        (double)(fVar5 * fVar4);
                    uVar2 = (ulong)dVar7;
                    lVar3 = lVar3 + ((long)(dVar7 - 9.223372036854776e+18) & (long)uVar2 >> 63 | uVar2);
                }
                this_00 = (ArchiveLoadProgress*)&this_00[1].field_4;
            } while (this_00 != pAVar1);
        }
        auVar6._8_4_ = (int)((ulong)lVar3 >> 32);
        auVar6._0_8_ = lVar3;
        auVar6._12_4_ = 1160773632;
        return (long)(((auVar6._8_8_ - 1.9342813113834067e+25) +
                       ((double)CONCAT44(1127219200, (int)lVar3) - 4503599627370496.0)) *
                      9.5367431640625e-07);
    }

    // 0x1009e21f0, 32 bytes, inline, placed by class name
    // Js5Preloader::ArchiveLoadProgress::GetDownloadPercentPending() const
    float Js5Preloader::ArchiveLoadProgress::GetDownloadPercentPending() {
        float fVar1;

        fVar1 = (float)GetDownloadPercentDone(this);
        return 1.0 - fVar1;
    }

    // 0x1009e2210, 128 bytes, placed by class name
    // Js5Preloader::GetDownloadAmountTotalInMb() const
    long Js5Preloader::GetDownloadAmountTotalInMb() {
        char* pcVar1;
        char* pcVar2;
        long lVar3;
        undefined1 auVar4[16];

        pcVar1 = (char*)(&field_144)->HeapBeginPtr();
        pcVar2 = (char*)(&field_144)->end();
        lVar3 = 0;
        for (; pcVar1 != pcVar2; pcVar1 = pcVar1 + 40) {
            if (*pcVar1 != '\0') {
                lVar3 = lVar3 + *(long*)(pcVar1 + 8);
            }
        }
        auVar4._8_4_ = (int)((ulong)lVar3 >> 32);
        auVar4._0_8_ = lVar3;
        auVar4._12_4_ = 1160773632;
        return (long)(((auVar4._8_8_ - 1.9342813113834067e+25) +
                       ((double)CONCAT44(1127219200, (int)lVar3) - 4503599627370496.0)) *
                      9.5367431640625e-07);
    }

    // 0x1009fd250, 48 bytes, placed by class name
    // Js5Preloader::Js5Preloader(Js5ResourceProvider&, Js5ArchiveSetSettings&)::$_0::operator()(Js5ArchiveSettings const*, Js5ArchiveSettings const*) const
    /* Js5Preloader::Js5Preloader(Js5ResourceProvider&,
   Js5ArchiveSetSettings&)::$_0::TEMPNAMEPLACEHOLDERVALUE(Js5ArchiveSettings const*,
   Js5ArchiveSettings const*) const */

    bool Js5Preloader::Js5Preloader(Js5ResourceProvider&,
                                    Js5ArchiveSetSettings&)::$_0::operator()(Js5ArchiveSettings* param_1,
                                                                             Js5ArchiveSettings* param_2) {
        ulong uVar1;
        ulong uVar2;

        uVar1 = param_1->GetPrefetchPriority();
        uVar2 = param_2->GetPrefetchPriority();
        return uVar1 < uVar2;
    }

    // 0x1009fd810, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5Preloader::ArchiveLoadProgress::ArchiveLoadProgress(): jumps straight to the base-object constructor

    // 0x1009fd820, 32 bytes, base-object constructor, inline, placed by class name
    // Js5Preloader::ArchiveLoadProgress::ArchiveLoadProgress()
    void Js5Preloader::ArchiveLoadProgress::ArchiveLoadProgress() {
        field_0 = 1;
        field_8 = 0;
        field_16 = 0;
        field_20 = 0;
        field_20 = 0;
        field_24 = 0;
        *(undefined8*)&field_28 = 0;
    }

} // namespace jag
