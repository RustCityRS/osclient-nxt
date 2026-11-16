// libs/js5/Js5Preloader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.js5

namespace jag {
    class Js5Preloader {
    public:
        class ArchiveLoadProgress;
        Js5Preloader(Js5ResourceProvider& js5ResourceProvider, Js5ArchiveSetSettings& js5ArchiveSetSettings);
        uint32_t ValidateArchives();
        bool IsDiskCacheReadyForArchivePreload(int arg1) const;
        uint64_t NextArchive(bool& arg1);
        uint64_t NextGroup();
        void Service();
        void UpdateDownloadSpeedEstimate();
        float GetPreloadProgressPercentage() const;
        void Restart();
        uint64_t GetOverallPercentProgressPercentage();
        bool IsVerifyingFiles() const;
        long GetDownloadAmountDoneInBytes() const;
        long GetDownloadAmountLeftInMb() const;
        long GetDownloadAmountTotalInMb() const;

    private:
        Js5ResourceProvider* field_0;
        uint8_t _unknown_8[32];
        int field_40;
        int field_44;
        vector<oldscape::dash3d::EntityHighlight*>* field_48;
        int field_56;
        uint8_t _unknown_60[36];
        uint64_t field_96;
        uint64_t field_104;
        uint64_t field_112;
        uint8_t _unknown_120[4];
        uint64_t field_124;
        uint8_t _unknown_132[4];
        float field_136;
        uint8_t _unknown_140[36];
        int field_176;
        unsigned int field_180;
        unsigned int field_184;
        uint8_t field_188;
        uint8_t _unknown_189[3];
    };

    class Js5Preloader::ArchiveLoadProgress {
    public:
        void IncrementGroupsLoaded(bool arg1);
        void Restart();
        uint64_t GetPercentageLoaded() const;
        uint64_t GetDownloadPercentDone() const;
        uint64_t GetDownloadPercentTotal() const;
        float GetDownloadPercentPending() const;
        ArchiveLoadProgress();

    private:
        uint8_t field_0;
        uint8_t _unknown_1[7];
        uint64_t field_8;
        unsigned int field_16;
        unsigned int field_20;
        unsigned int field_24;
        unsigned int field_28;
        uint8_t _unknown_32[4];
    };

    // 0x1009e0be0
    Js5Preloader::Js5Preloader(Js5ResourceProvider& js5ResourceProvider, Js5ArchiveSetSettings& js5ArchiveSetSettings)
        : field_0(js5ResourceProvider) {
        uint8_t auVar3[16];
        int local_34;

        uint8_t* this_00 = &field_8;
        new (this_00) eastl::vector<Js5ArchiveSettings*>();
        field_40 = 0;
        field_44 = -1;
        field_48 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0;
        field_56 = -1;
        new (&field_64) eastl::vector<Js5Preloader::PreloadLoadingEntry>();
        vector<Js5Preloader::ArchiveLoadProgress>* local_40 = (vector<Js5Preloader::ArchiveLoadProgress>*)&field_144;
        field_124 = 0;
        *(uint64_t*)&field_132 = 0;
        field_112 = 0;
        *(uint64_t*)&field_120 = 0;
        field_96 = 0;
        field_104 = 0;
        uint8_t* local_48 = &field_64;
        new (local_40) eastl::vector<Js5Preloader::ArchiveLoadProgress>();
        field_176 = 0;
        field_180 = 0;
        field_184 = 0;
        field_188 = 1;
        int iVar1 = js5ArchiveSetSettings.GetX();
        this_00->reserve((unsigned long)(iVar1 + 1));
        auto local_50 = js5ArchiveSetSettings.GetStart(local_34);
        while (local_50 != nullptr) {
            if ((uint8_t*)local_50->GetPrefetchPriority() != Priority::NONE) {
                this_00->push_back(local_50);
            }
            local_50 = (Js5ArchiveSettings*)js5ArchiveSetSettings.GetNext(local_34);
        }
        auto arg1 = this_00->HeapBeginPtr();
        auVar3 = this_00->end();
        eastl::sort<Js5ArchiveSettings**,
                    Js5Preloader::Js5Preloader(Js5ResourceProvider&, Js5ArchiveSetSettings&)::__0>(arg1, auVar3._0_8_,
                                                                                                   auVar3._8_8_);
        local_40->resize(this_00->size());
    }

    // 0x1009e0ee0
    uint32_t Js5Preloader::ValidateArchives() {
        uint8_t* this_01;
        Material* this_02;
        bool cVar1;
        unsigned int uVar4;
        unsigned int uVar5;
        uint64_t* puVar6;
        long lVar7;
        unsigned long arg1;

        auto this_03 = field_0->GetTransitionOutTime();
        uint8_t* this_00 = &field_8;
        int iVar3 = field_44;
        int iVar2 = this_00->size();
        bool bVar9 = iVar3 == iVar2 - 1;
        uint32_t uVar8 = (((uint32_t)((int32_t)((unsigned int)iVar3 >> 8)) << 8) | (uint8_t)bVar9);
        if ((!bVar9) && (cVar1 = IsDiskCacheReadyForArchivePreload(field_44 + 1), cVar1)) {
            this_01 = &field_144;
            do {
                arg1 = (long)field_44 + 1;
                field_44 = (int)arg1;
                puVar6 = (uint64_t*)(*this_00)[arg1];
                this_02 = (Material*)*puVar6;
                if ((this_02 != nullptr) && (iVar3 = this_02->GetSpriteID(), iVar3 != 0)) {
                    iVar3 = this_02->GetDiffuseAlphaMapSize();
                    if (iVar3 != 0) {
                        uVar4 = this_02->GetDiffuseAlphaMapSize();
                        uVar5 = this_02->GetSpriteID();
                        if (uVar4 < uVar5)
                            goto LAB_1009e1011;
                    }
                    iVar3 = this_02->GetX();
                    field_0->UpdateMissingGroupsCountForArchive(*this_02);
                    uVar4 = this_03->GetMissingGroupCount(iVar3);
                    lVar7 = (*this_01)[(long)field_44];
                    iVar2 = eastl::min<unsigned int>(uVar4, *(unsigned int*)(lVar7 + 20));
                    iVar3 = *(int*)(lVar7 + 20);
                    lVar7 = (*this_01)[(long)field_44];
                    *(int*)(lVar7 + 16) = iVar3 - iVar2;
                    lVar7 = (*this_01)[(long)field_44];
                    field_184 = field_184 + *(int*)(lVar7 + 16);
                    lVar7 = (*this_01)[(long)field_44];
                    *(int*)(lVar7 + 28) = iVar2;
                }
            LAB_1009e1011:
                iVar3 = field_44;
                iVar2 = this_00->size();
                bVar9 = iVar3 == iVar2 - 1;
                uVar8 = (((uint32_t)((int32_t)((unsigned int)iVar3 >> 8)) << 8) | (uint8_t)bVar9);
                if (bVar9) {
                    return uVar8;
                }
                cVar1 = IsDiskCacheReadyForArchivePreload(field_44 + 1);
            } while (cVar1);
        }
        return uVar8;
    }

    // 0x1009e1050
    bool Js5Preloader::IsDiskCacheReadyForArchivePreload(int arg1) const {
        bool cVar1;

        auto this_00 = field_0->GetTransitionOutTime();
        uint64_t* puVar2 = &field_8[(long)arg1];
        int arg1_00 = (*puVar2)->GetX();
        if ((this_00 == nullptr) || (cVar1 = this_00->Ready(arg1_00), !cVar1)) {
            return 0;
        }
        return this_00->IsValidated(arg1_00);
    }

    // 0x1009e11d0
    uint64_t Js5Preloader::NextArchive(bool& arg1) {
        Material* this_01;
        bool cVar1;
        unsigned int uVar4;
        uint64_t* puVar6;
        unsigned long arg1_00;

        uint8_t* this_00 = &field_8;
        int iVar3 = field_44;
        int iVar2 = this_00->size();
        if (iVar3 != iVar2 - 1) {
            do {
                cVar1 = IsDiskCacheReadyForArchivePreload(field_44 + 1);
                if (!cVar1) {
                    arg1 = true;
                    return 0;
                }
                while (true) {
                    arg1_00 = (long)field_44 + 1;
                    field_44 = (int)arg1_00;
                    puVar6 = (uint64_t*)(*this_00)[arg1_00];
                    cVar1 = (*puVar6)->GetPreloadEnabled();
                    iVar3 = field_44;
                    if (cVar1)
                        break;
                    iVar2 = this_00->size();
                    if (iVar3 == iVar2 - 1) {
                        return 0;
                    }
                }
                puVar6 = (uint64_t*)(*this_00)[(long)iVar3];
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
            } while (iVar3 != iVar2 - 1);
        }
        return 0;
    }

    // 0x1009e1300
    uint64_t Js5Preloader::NextGroup() {
        Js5ResourceProvider* arg1;
        uint8_t uVar1;
        uint64_t extraout_var;
        GeometryBatchInstance* local_30;

        if (field_48 == (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0) {
            local_30 = nullptr;
            arg1 = field_0;
            field_8[(long)field_44];
            uVar1 = (**(void (**)(...)) & ((Js5Index*)arg1->_vptr)->field_24)((Js5Index**)arg1,
                                                                              (Js5ArchiveSettings*)&local_30);
            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) == DataStatus::NOTLOADED) {
                return 0;
            }
            field_48 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_30->GetMaterial();
            field_56 = -1;
        }
        int iVar6 = field_56 + 1;
        field_56 = iVar6;
        int iVar3 = field_48->end();
        if (iVar6 < iVar3) {
            return 1;
        }
        bool local_21 = false;
        if (NextArchive(local_21) != '\0') {
            return NextGroup();
        }
        if (local_21 == false) {
            field_176 = 4;
        }
        return 0;
    }

    // 0x1009e1440
    void Js5Preloader::Service() {
        uint8_t* this_00;
        unsigned int* puVar1;
        Js5ResourceProvider* pJVar2;
        Js5ArchiveSettings* this_01;
        vector<Js5Preloader::ArchiveLoadProgress>* pvVar3;
        uint8_t uVar4;
        char cVar5;
        bool bVar6;
        int iVar7;
        unsigned int uVar8;
        uint32_t uVar9;
        long lVar10;
        unsigned long uVar11;
        uint64_t* puVar12;
        uint64_t extraout_var;
        char* pcVar13;
        char* pcVar14;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        long long arg1;
        uint64_t uVar15;
        uint32_t* puVar16;
        uint64_t extraout_var_02;
        uint8_t bVar17;
        uint8_t* puVar18;
        vector<eastl::pair<int, int>>* this_03;
        unsigned long uVar19;
        Js5Preloader* pJVar20;
        float fVar21;
        float fVar22;
        ReturnValue local_98;
        uint64_t local_90;
        uint32_t local_88;
        uint64_t local_80;
        int local_78;
        uint8_t local_74[4];
        unsigned long local_70;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* local_68;
        ReturnValue local_60;
        vector<Js5Preloader::ArchiveLoadProgress>* local_58;
        uint8_t* local_50;
        vector<eastl::pair<int, int>>* local_48;

        if ((((field_188 != '\0') || (field_176 < 2)) && (field_40 != 0)) && (field_176 != 5)) {
            this_00 = &field_64;
            lVar10 = this_00->size();
            pJVar20 = this;
            if (lVar10 != 0) {
                uVar19 = 0;
                do {
                    iVar7 = (int)uVar19;
                    puVar12 = (uint64_t*)(*this_00)[uVar19];
                    pJVar2 = pJVar20->field_0;
                    uVar4 =
                        pJVar2->GroupPreloaded((unsigned int)*puVar12, (uint8_t)(*(uint32_t*)(puVar12 + 1)), nullptr);
                    if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar4) == DataStatus::NOTLOADED) {
                        *(uint8_t*)((long)puVar12 + 28) = *(uint8_t*)((long)puVar12 + 28) | (uint8_t)local_90._0_1_;
                    } else {
                        puVar12[2]->IncrementGroupsLoaded(*(bool*)((long)puVar12 + 28));
                        puVar1 = &pJVar20->field_184;
                        *puVar1 = *puVar1 + 1;
                        lVar10 = this_00->HeapBeginPtr();
                        this_00->erase((uVar19 * 32 + lVar10));
                        iVar7 = iVar7 - 1;
                    }
                    uVar19 = (unsigned long)(iVar7 + 1);
                    uVar11 = this_00->size();
                } while (uVar19 < uVar11);
            }
            pJVar20 = this;
            local_68 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_00;
            UpdateDownloadSpeedEstimate();
            if (pJVar20->field_176 == 4) {
                cVar5 = local_68->empty();
                if (cVar5) {
                    pJVar20->field_184 = pJVar20->field_180;
                    pJVar20->field_104 = pJVar20->field_96;
                    pcVar13 = (char*)pJVar20->field_144.HeapBeginPtr();
                    pcVar14 = (char*)pJVar20->field_144.end();
                    for (; pcVar13 != pcVar14; pcVar13 = pcVar13 + 40) {
                        if (*pcVar13 != '\0') {
                            *(uint32_t*)(pcVar13 + 16) = *(uint32_t*)(pcVar13 + 20);
                            *(uint32_t*)(pcVar13 + 24) = *(uint32_t*)(pcVar13 + 28);
                        }
                    }
                    field_176 = 5;
                }
            } else {
                iVar7 = local_68->size();
                if (iVar7 < pJVar20->field_40) {
                    this_03 = (vector<eastl::pair<int, int>>*)&pJVar20->field_8;
                    local_58 = (vector<Js5Preloader::ArchiveLoadProgress>*)&pJVar20->field_144;
                    local_48 = this_03;
                    do {
                        if (pJVar20->field_176 == 0) {
                            local_90 = 0;
                            uVar4 = pJVar20->field_0->GetMasterIndex();
                            if ((uint8_t*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar4) ==
                                DataStatus::NOTLOADED) {
                                return;
                            }
                            pJVar20->field_96 = 0;
                            pJVar20->field_180 = 0;
                            lVar10 = this_03->size();
                            if (lVar10 == 0) {
                                local_70 = 0;
                                bVar17 = 0;
                            } else {
                                local_70 = 0;
                                uVar19 = 0;
                                do {
                                    puVar12 = (uint64_t*)(*this_03)[uVar19];
                                    this_01 = (Js5ArchiveSettings*)*puVar12;
                                    uVar4 = (**(void (**)(...)) & ((Js5Index*)pJVar20->field_0->_vptr)->field_24)(
                                        (Js5Index**)pJVar20->field_0, (Js5ArchiveSettings*)&local_60);
                                    puVar18 = DataStatus::NOTLOADED;
                                    if ((uint8_t*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar4) !=
                                        DataStatus::NOTLOADED) {
                                        local_50 = DataStatus::NOTLOADED;
                                        iVar7 = ((TcpConnectionMessageBase*)(((uint64_t)local_60._1_7_ << 8) |
                                                                             (uint8_t)local_60._0_1_))
                                                    ->GetEndPosition();
                                        pJVar20->field_180 = pJVar20->field_180 + iVar7;
                                        uVar8 = this_01->GetPreloadSize();
                                        pJVar20->field_96 = pJVar20->field_96 + (unsigned long)uVar8;
                                        pcVar13 = (char*)(*local_58)[uVar19];
                                        uVar9 =
                                            ((vector<oldscape::dash3d::EntityHighlight*,
                                                     BucketAllocatorEASTL>*)((GeometryBatchInstance*)(((uint64_t)
                                                                                                           local_60
                                                                                                               ._1_7_
                                                                                                       << 8) |
                                                                                                      (uint8_t)local_60
                                                                                                          ._0_1_))
                                                 ->GetMaterial())
                                                ->end();
                                        *(uint32_t*)(pcVar13 + 20) = uVar9;
                                        arg1 = ((Js5ResourceProvider*)(((uint64_t)local_60._1_7_ << 8) |
                                                                       (uint8_t)local_60._0_1_))
                                                   ->GetMemoryCache();
                                        uVar15 = eastl::max<long long>(arg1, 0);
                                        *(uint64_t*)(pcVar13 + 8) = uVar15;
                                        cVar5 = this_01->GetPreloadEnabled();
                                        *pcVar13 = cVar5;
                                        if (*(long*)(pcVar13 + 8) == 0) {
                                            uVar8 = this_01->GetPreloadSize();
                                            *(unsigned long*)(pcVar13 + 8) = (unsigned long)uVar8;
                                            if (cVar5)
                                                goto LAB_1009e174c;
                                        LAB_1009e1773:
                                            lVar10 = 0;
                                        } else {
                                            if (!cVar5)
                                                goto LAB_1009e1773;
                                        LAB_1009e174c:
                                            lVar10 = *(long*)(pcVar13 + 8);
                                        }
                                        local_70 = local_70 + lVar10;
                                        puVar18 = local_50;
                                        this_03 = local_48;
                                        pJVar20 = this;
                                    }
                                    if ((uint8_t*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar4) == puVar18) {
                                        bVar17 = 1;
                                        goto LAB_1009e17af;
                                    }
                                    uVar19 = uVar19 + 1;
                                    uVar11 = this_03->size();
                                } while (uVar19 < uVar11);
                                bVar17 = 0;
                            }
                        LAB_1009e17af:
                            pvVar3 = local_58;
                            if ((bVar17 & 1) != 0) {
                                return;
                            }
                            pcVar13 = (char*)local_58->HeapBeginPtr();
                            pcVar14 = (char*)pvVar3->end();
                            if (pcVar13 == pcVar14) {
                                fVar21 = 0.0;
                            } else {
                                fVar21 = 0.0;
                                do {
                                    if (*pcVar13 == '\0') {
                                        pcVar13[32] = '\0';
                                        pcVar13[33] = '\0';
                                        pcVar13[34] = '\0';
                                        pcVar13[35] = '\0';
                                    } else {
                                        fVar22 = (float)((double)(*(unsigned long*)(pcVar13 + 8) >> 10) /
                                                         (double)(local_70 >> 10));
                                        *(float*)(pcVar13 + 32) = fVar22;
                                        fVar21 = fVar21 + fVar22;
                                    }
                                    pcVar13 = pcVar13 + 40;
                                } while (pcVar13 != pcVar14);
                            }
                            local_50 = (uint8_t*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)fVar21);
                            cVar5 = local_58->empty();
                            pvVar3 = local_58;
                            if (!cVar5) {
                                local_60 = local_58->rbegin();
                                local_98 = pvVar3->rend();
                                while (bVar6 = local_60 != local_98, bVar6) {
                                    pcVar13 = (char*)local_60.operator->();
                                    if (*pcVar13 != '\0') {
                                        local_50 = (uint8_t*)(((uint64_t)local_50._4_4_ << 32) |
                                                              (uint32_t)(1.0 - local_50._0_4_));
                                        lVar10 = local_60.operator->();
                                        *(float*)(lVar10 + 32) = local_50._0_4_ + *(float*)(lVar10 + 32);
                                        break;
                                    }
                                    local_98++;
                                    local_98 = local_58->rend();
                                }
                            }
                            pJVar20->field_136 = 0.0;
                            pJVar20->field_112 = 0;
                            *(uint64_t*)((long)&pJVar20->field_124 + 4) = 18446744073709551615;
                            pJVar20->field_176 = 1;
                            iVar7 = pJVar20->field_176;
                            this_03 = local_48;
                        } else {
                            iVar7 = pJVar20->field_176;
                        }
                        if (iVar7 == 1) {
                            cVar5 = ValidateArchives(pJVar20);
                            if (!cVar5) {
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
                            cVar5 = NextGroup(pJVar20);
                            if (!cVar5) {
                                return;
                            }
                            pJVar20->field_176 = 3;
                        }
                        if (pJVar20->field_176 == 3) {
                            pJVar2 = pJVar20->field_0;
                            puVar12 = (uint64_t*)(*local_48)[(long)pJVar20->field_44];
                            uVar15 = *puVar12;
                            puVar16 = (uint32_t*)(*field_48)[(long)field_56];
                            pJVar20 = this;
                            this_03 = local_48;
                            uVar4 = pJVar2->GroupPreloaded((unsigned int)uVar15, (uint8_t)(*puVar16), nullptr);
                            if ((uint8_t*)(((uint64_t)extraout_var_02 << 8) | (uint8_t)uVar4) ==
                                DataStatus::NOTLOADED) {
                                puVar12 = (uint64_t*)(*this_03)[(long)pJVar20->field_44];
                                local_90 = *puVar12;
                                puVar16 = (uint32_t*)(*pJVar20->field_48)[(long)pJVar20->field_56];
                                local_88 = *puVar16;
                                local_80 = (*local_58)[(long)pJVar20->field_44];
                                local_78 = pJVar20->field_44;
                                local_74[0] = local_60._0_1_;
                                local_68->push_back(local_90);
                            }
                            pJVar20->field_176 = 2;
                        }
                        iVar7 = local_68->size();
                    } while (iVar7 < pJVar20->field_40);
                }
            }
        }
    }

    // 0x1009e1ac0
    void Js5Preloader::ArchiveLoadProgress::IncrementGroupsLoaded(bool arg1) {
        uint32_t in_register_00000031;

        field_16 = field_16 + 1;
        if (((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) != 0) && (field_28 != 0)) {
            field_24 = field_24 + 1;
        }
    }

    // 0x1009e1b30
    void Js5Preloader::UpdateDownloadSpeedEstimate() {
        shared_ptr* psVar3;
        RenderPipelineState* this_00;
        long lVar4;
        uint8_t auVar6[16];
        uint8_t auVar7[16];
        unsigned long long local_48;
        unsigned long long local_40;
        unsigned int local_38;
        unsigned int local_34;
        unsigned int local_30;
        unsigned int local_2c;
        unsigned int local_28;
        unsigned int local_24;

        unsigned long long uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        unsigned long uVar5 = 0;
        if (*(unsigned long*)&field_120 <= uVar2) {
            uVar5 = uVar2 - *(long*)&field_120;
        }
        if (2499 < uVar5) {
            field_136 = 0.0;
            *(unsigned long long*)&field_120 = uVar2;
            psVar3 = (shared_ptr*)field_0->second();
            if (shared_ptr::operator_cast_to_bool(psVar3)) {
                this_00 = (RenderPipelineState*)(*psVar3).operator->();
                psVar3 = (shared_ptr*)this_00->GetPSStorageBuffers();
                if (shared_ptr::operator_cast_to_bool(psVar3)) {
                    ((ClientStream*)(*psVar3).operator->())
                        ->GetProfiling(&local_38, &local_34, &local_30, &local_48, &local_40, &local_2c, &local_24,
                                       &local_28);
                    lVar4 = (unsigned long)local_24 - *(long*)((long)&field_124 + 4);
                    auVar6._8_4_ = (int)((unsigned long)lVar4 >> 32);
                    auVar6._0_8_ = lVar4;
                    auVar6._12_4_ = 1160773632;
                    auVar7._8_4_ = (int)(uVar5 >> 32);
                    auVar7._0_8_ = uVar5;
                    auVar7._12_4_ = 1160773632;
                    field_136 = (float)((((auVar6._8_8_ - 1.9342813113834067e+25) +
                                          ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar4)) -
                                           4503599627370496.0)) *
                                         9.5367431640625e-07) /
                                        (((auVar7._8_8_ - 1.9342813113834067e+25) +
                                          ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)uVar5)) -
                                           4503599627370496.0)) *
                                         0.001));
                    *(unsigned long*)((long)&field_124 + 4) = (unsigned long)local_24;
                }
            }
        }
    }

    // 0x1009e1cb0
    float Js5Preloader::GetPreloadProgressPercentage() const {
        float fVar1;
        int iVar2;
        ArchiveLoadProgress* this_00;
        ArchiveLoadProgress* pAVar4;
        unsigned long uVar5;
        float fVar6;
        float fVar7;

        if (field_176 < 2) {
            if (field_8.empty() == '\0') {
                iVar2 = field_44;
                uVar5 = field_8.size();
                return ((float)(iVar2 + 1) * 10.0) / (float)uVar5;
            }
        } else {
            this_00 = (ArchiveLoadProgress*)field_144.HeapBeginPtr();
            pAVar4 = (ArchiveLoadProgress*)field_144.end();
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

    // 0x1009e1e30
    void Js5Preloader::Restart() {
        field_176 = 0;
        field_56 = -1;
        field_44 = -1;
        field_104 = 0;
        field_184 = 0;
        auto this_00 = field_144.HeapBeginPtr();
        auto pAVar1 = field_144.end();
        for (; this_00 != pAVar1; this_00 = (ArchiveLoadProgress*)&this_00[1].field_4) {
            this_00->Restart();
        }
    }

    // 0x1009e1eb0
    void Js5Preloader::ArchiveLoadProgress::Restart() {
        field_16 = 0;
    }

    // 0x1009e1ec0
    uint64_t Js5Preloader::GetOverallPercentProgressPercentage() {
        float fVar2;
        uint32_t extraout_XMM0_Db;
        uint32_t uVar3;

        if (SystemPaths::GetInstanceNumber() < 1) {
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
        return (((uint64_t)uVar3 << 32) | (uint32_t)fVar2);
    }

    // 0x1009e1f20
    bool Js5Preloader::IsVerifyingFiles() const {
        return field_176 < 2;
    }

    // 0x1009e1f30
    uint64_t Js5Preloader::ArchiveLoadProgress::GetPercentageLoaded() const {
        if (field_20 == 0) {
            return 0;
        }
        return eastl::min<float>(1.0, (float)field_16 / (float)field_20);
    }

    // 0x1009e1f70
    long Js5Preloader::GetDownloadAmountDoneInBytes() const {
        ArchiveLoadProgress* this_00;
        ArchiveLoadProgress* pAVar2;
        unsigned long uVar3;
        long lVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        double dVar8;

        if (IsVerifyingFiles() == '\0') {
            this_00 = (ArchiveLoadProgress*)field_144.HeapBeginPtr();
            pAVar2 = (ArchiveLoadProgress*)field_144.end();
            if (this_00 != pAVar2) {
                lVar4 = 0;
                do {
                    if (this_00->field_0 != '\0') {
                        fVar5 = (float)this_00->GetDownloadPercentDone();
                        fVar6 = (float)this_00->GetDownloadPercentTotal();
                        fVar7 = (float)this_00->GetDownloadPercentTotal();
                        dVar8 = (((double)(((uint64_t)1160773632 << 32) |
                                           (uint32_t)((int)((unsigned long)this_00->field_8 >> 32))) -
                                  1.9342813113834067e+25) +
                                 ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)this_00->field_8)) -
                                  4503599627370496.0)) *
                                ((double)(1.0 - fVar7) + (double)(fVar6 * fVar5));
                        uVar3 = (unsigned long)dVar8;
                        lVar4 = lVar4 + ((long)(dVar8 - 9.223372036854776e+18) & (long)uVar3 >> 63 | uVar3);
                    }
                    this_00 = (ArchiveLoadProgress*)&this_00[1].field_4;
                } while (this_00 != pAVar2);
                return lVar4;
            }
        }
        return 0;
    }

    // 0x1009e2080
    uint64_t Js5Preloader::ArchiveLoadProgress::GetDownloadPercentDone() const {
        if (field_28 == 0) {
            return 1065353216;
        }
        return eastl::min<float>(1.0, (float)field_24 / (float)field_28);
    }

    // 0x1009e20c0
    uint64_t Js5Preloader::ArchiveLoadProgress::GetDownloadPercentTotal() const {
        if (field_20 == 0) {
            return 0;
        }
        return eastl::min<float>(1.0, (float)field_28 / (float)field_20);
    }

    // 0x1009e2100
    long Js5Preloader::GetDownloadAmountLeftInMb() const {
        unsigned long uVar2;
        long lVar3;
        float fVar4;
        float fVar5;
        uint8_t auVar6[16];
        double dVar7;

        auto this_00 = field_144.HeapBeginPtr();
        auto pAVar1 = field_144.end();
        if (this_00 == pAVar1) {
            lVar3 = 0;
        } else {
            lVar3 = 0;
            do {
                if (this_00->field_0 != '\0') {
                    fVar4 = (float)this_00->GetDownloadPercentPending();
                    fVar5 = (float)this_00->GetDownloadPercentTotal();
                    dVar7 = (((double)(((uint64_t)1160773632 << 32) |
                                       (uint32_t)((int)((unsigned long)this_00->field_8 >> 32))) -
                              1.9342813113834067e+25) +
                             ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)this_00->field_8)) -
                              4503599627370496.0)) *
                            (double)(fVar5 * fVar4);
                    uVar2 = (unsigned long)dVar7;
                    lVar3 = lVar3 + ((long)(dVar7 - 9.223372036854776e+18) & (long)uVar2 >> 63 | uVar2);
                }
                this_00 = (ArchiveLoadProgress*)&this_00[1].field_4;
            } while (this_00 != pAVar1);
        }
        auVar6._8_4_ = (int)((unsigned long)lVar3 >> 32);
        auVar6._0_8_ = lVar3;
        auVar6._12_4_ = 1160773632;
        return (long)(((auVar6._8_8_ - 1.9342813113834067e+25) +
                       ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar3)) - 4503599627370496.0)) *
                      9.5367431640625e-07);
    }

    // 0x1009e21f0
    float Js5Preloader::ArchiveLoadProgress::GetDownloadPercentPending() const {
        float fVar1 = (float)GetDownloadPercentDone();
        return 1.0 - fVar1;
    }

    // 0x1009e2210
    long Js5Preloader::GetDownloadAmountTotalInMb() const {
        uint8_t auVar4[16];

        auto pcVar1 = field_144.HeapBeginPtr();
        auto pcVar2 = field_144.end();
        long lVar3 = 0;
        for (; pcVar1 != pcVar2; pcVar1 = pcVar1 + 40) {
            if (*pcVar1 != '\0') {
                lVar3 = lVar3 + *(long*)(pcVar1 + 8);
            }
        }
        auVar4._8_4_ = (int)((unsigned long)lVar3 >> 32);
        auVar4._0_8_ = lVar3;
        auVar4._12_4_ = 1160773632;
        return (long)(((auVar4._8_8_ - 1.9342813113834067e+25) +
                       ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar3)) - 4503599627370496.0)) *
                      9.5367431640625e-07);
    }

    // 0x1009fd250
    bool Js5Preloader::Js5Preloader(Js5ResourceProvider&, Js5ArchiveSetSettings&)::$_0::operator()(
        const Js5ArchiveSettings* js5ArchiveSettings1, const Js5ArchiveSettings* js5ArchiveSettings2) const {
        unsigned long uVar1 = GetPrefetchPriority();
        unsigned long uVar2 = js5ArchiveSettings1->GetPrefetchPriority();
        return uVar1 < uVar2;
    }

    // 0x1009fd820
    Js5Preloader::ArchiveLoadProgress::ArchiveLoadProgress()
        : field_0(1), field_8(0), field_16(0), field_20(0), field_20(0), field_24(0) {
        *(uint64_t*)&field_28 = 0;
    }

} // namespace jag
