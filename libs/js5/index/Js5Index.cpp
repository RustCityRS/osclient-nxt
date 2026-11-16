// libs/js5/index/Js5Index.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.js5

#include "Js5Index.h"

namespace jag {
    // 0x103bc2178, set at startup by ___cxx_global_var_init.132
    int64_t Js5Index::HASH_MAIN = stringtools::hash32("main");

    // 0x100009d50: Js5Index::GetIndexWhirlpool() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x1000b9960: Js5Index::GetIndexCRC() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1000fa830: Js5Index::GetIndexVersion() const has the same machine code as oldscape::graphics::NXTPixScreen::GetWidth() const

    // 0x10017f5b0: Js5Index::GetTotalPackedGroupSize() const has the same machine code as oldscape::javapal::GameShell::GetPixToolkit()

    // 0x1001a3c10: Js5Index::GetGroupList() const has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x100293ee0: Js5Index::GetGroupCount() const has the same machine code as hal::audio::AudioRenderer::GetState() const

    // 0x1003cf280: Js5Index::GetMaximumGroupID() const has the same machine code as game::MapElementType::GetTextBackgroundFillRGBA() const

    // 0x1009e03c0
    void Js5Index::Init(unsigned int arg1, const Array<unsigned char>& arg2, PacketT<Array<unsigned char>>& arg3) {
        m_indexCRC = arg1;
        field_8 = arg2;
        m_maximumGroupID = 4294967295;
        LoadIndex(arg3, false);
    }

    // 0x1009e4950
    unsigned long Js5Index::DoesFileExist(unsigned int arg1, unsigned int arg2) const {
        unsigned int uVar2;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_00;
        long lVar3;
        long lVar4;
        unsigned long uVar5;

        bool cVar1 = DoesGroupExist(arg1);
        if (cVar1) {
            uVar2 = GetMaximumFileID(arg1);
            if (arg2 < uVar2) {
                cVar1 = field_248.empty();
                uVar5 = (((uint64_t)((uint64_t)(uint32_t)(arg2 >> 8)) << 8) | (uint8_t)1);
                if (!cVar1) {
                    this_00 = &field_248[(unsigned long)arg1];
                    cVar1 = this_00->empty();
                    if (!cVar1) {
                        lVar3 = eastl::vector_map<unsigned int, unsigned int>::find(*this_00);
                        lVar4 = this_00->end();
                        uVar5 = (((uint64_t)((int64_t)((unsigned long)lVar3 >> 8)) << 8) | (uint8_t)(lVar3 == lVar4));
                    }
                }
                goto LAB_1009e49d3;
            }
        }
        uVar5 = 0;
    LAB_1009e49d3:
        return uVar5 & 4294967295;
    }

    // 0x1009e52f0
    uint64_t Js5Index::GetFirstFileID(unsigned int arg1, unsigned int& arg2) const {
        uint8_t* this_00;
        unsigned int uVar2;
        short* psVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        long lVar4;
        long lVar5;
        unsigned int local_34;

        if (DoesGroupExist(arg1)) {
            psVar3 = &field_224[(unsigned long)arg1];
            if (*psVar3 != 0) {
                this_00 = &field_248;
                if (!(this_00->empty())) {
                    if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*this_00)[(
                               unsigned long)arg1])
                              ->empty())) {
                        this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_00)[(
                            unsigned long)arg1];
                        uVar2 = GetMaximumFileID(arg1);
                        local_34 = 0;
                        if (uVar2 == 0) {
                            return 0;
                        }
                        do {
                            lVar4 = eastl::vector_map<unsigned int, unsigned int>::find(*this_02);
                            lVar5 = this_02->end();
                            if (lVar4 == lVar5) {
                                arg2 = local_34;
                                return 1;
                            }
                            local_34 = local_34 + 1;
                        } while (local_34 < uVar2);
                        return 0;
                    }
                }
                arg2 = 0;
                return 1;
            }
        }
        return 0;
    }

    // 0x1009ef760
    unsigned int Js5Index::GetFileIndex(unsigned int arg1, unsigned int arg2) const {
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_00;
        long lVar2;
        long lVar3;

        unsigned int local_24 = arg2;
        if (!(DoesGroupExist(arg1))) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/Js5Index.cpp", 318,
                nullptr);
        }
        if (!(field_248.empty())) {
            this_00 = &field_248[(unsigned long)arg1];
            if (!(this_00->empty())) {
                lVar2 = eastl::vector_map<unsigned int, unsigned int>::find(*this_00);
                lVar3 = this_00->end();
                if (lVar2 != lVar3) {
                    LogAssert(
                        "missingFiles.find(fileID) == missingFiles.end()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/Js5Index.cpp",
                        303, nullptr);
                }
                lVar2 = this_00->lower_bound(local_24);
                lVar3 = this_00->end();
                if (lVar2 == lVar3) {
                    lVar2 = (this_00->rbegin()).operator->();
                    arg2 = arg2 - (*(unsigned short*)(lVar2 + 4) + 1);
                } else {
                    arg2 = arg2 - *(unsigned short*)(lVar2 + 4);
                }
            }
        }
        return arg2;
    }

    // 0x1009ef9d0
    Js5Index::Js5Index(unsigned int arg1, unsigned int arg2, const Array<unsigned char>& arg3,
                       const Array<unsigned char>& arg4, unsigned int arg5, PacketT<Array<unsigned char>>& arg6)
        : m_indexCRC(arg2), field_8(arg4), m_indexVersion(arg5), field_36(0), m_groupCount(0), field_136(4294967295),
          m_maximumGroupID(4294967295), m_pTotalPackedGroupSize(0) {
        bool cVar1;
        Logger* pLVar2;

        if (arg1 == arg2) {
            cVar1 = arg4.empty();
            if ((!cVar1) && (cVar1 = arg3 == arg4, !cVar1)) {
                pLVar2 = logger::default_logger();
                pLVar2->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/Js5Index.cpp", 27,
                    "Js5Index: Invalid Js5 Index whirlpool");
                return;
            }
            LoadIndex(arg6, true);
        } else {
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/Js5Index.cpp",
                        21, "Js5Index: Invalid Js5 Index CRC: %u", arg1);
        }
    }

    // 0x1009efbe0
    void Js5Index::LoadIndex(PacketT<Array<unsigned char>>& arg1, bool arg2) {
        uint8_t* puVar1;
        uint8_t* this_00;
        unsigned short uVar2;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        Array<unsigned int>* pAVar3;
        Js5Index* pJVar4;
        PacketReaderMixin<PacketT<Array<unsigned char>>>* pPVar5;
        uint8_t uVar7;
        unsigned int uVar8;
        int iVar9;
        uint32_t uVar10;
        int iVar11;
        Logger* this_02;
        unsigned int* puVar12;
        int* piVar13;
        uint32_t* puVar14;
        Array<unsigned char>* this_03;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_04;
        uint16_t* puVar16;
        unsigned short* puVar17;
        vector_map<unsigned int, unsigned short>* this_05;
        int iVar18;
        unsigned long uVar19;
        unsigned long uVar20;
        char* str2;
        unsigned int uVar21;
        unsigned short uVar22;
        uint64_t local_98[3];
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_80;
        Array<unsigned short>* local_78;
        unsigned long local_70;
        Array<int>* local_68;
        Array<unsigned int>* local_60;
        Array<int>* local_58;
        Js5Index* local_50;
        unsigned short local_46;
        int local_44;
        unsigned long local_40;

        arg1.SetPos(0);
        uint8_t bVar6 = arg1.g1();
        if (bVar6 == 7) {
            uVar8 = arg1.g4();
            pPVar5 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)arg1;
            if (arg2) {
                if (uVar8 != m_indexVersion) {
                    this_02 = logger::default_logger();
                    str2 = "Js5Index: Mismatched js5 index version, got: %u";
                    iVar9 = 107;
                    goto LAB_1009efc7c;
                }
            } else {
                m_indexVersion = uVar8;
            }
            uVar7 = arg1.g1();
            local_40 = (((uint64_t)local_40._1_7_ << 8) | (uint8_t)uVar7);
            uVar8 = pPVar5->gSmart2or4();
            m_groupCount = uVar8;
            puVar1 = &field_48;
            uVar21 = 0;
            puVar1->set_max_size((unsigned long)uVar8, 0);
            if (m_groupCount != 0) {
                uVar19 = 0;
                do {
                    iVar9 = arg1.gSmart2or4();
                    uVar21 = iVar9 + uVar21;
                    puVar12 = (unsigned int*)(*puVar1)[uVar19];
                    *puVar12 = uVar21;
                    if ((int)m_maximumGroupID < (int)uVar21) {
                        m_maximumGroupID = uVar21;
                    }
                    uVar19 = uVar19 + 1;
                } while (uVar19 < m_groupCount);
            }
            uVar19 = (unsigned long)(m_maximumGroupID + 1);
            local_68 = (Array<int>*)&field_152;
            local_68->set_max_size(uVar19, 0);
            if ((local_40 & 2) != 0) {
                field_176.set_max_size(uVar19, 0);
            }
            local_58 = (Array<int>*)&field_200;
            local_58->set_max_size(uVar19, 0);
            local_78 = (Array<unsigned short>*)&field_224;
            local_78->set_max_size(uVar19, 0);
            local_50 = this;
            if ((local_40 & 1) != 0) {
                this_00 = &field_72;
                this_00->set_max_size(uVar19, 0);
                if (m_groupCount != 0) {
                    uVar20 = 0;
                    do {
                        iVar9 = arg1.g4s();
                        piVar13 = (int*)(*this_00)[uVar20];
                        this = local_50;
                        *piVar13 = iVar9;
                        if (iVar9 == HASH_MAIN) {
                            puVar12 = (unsigned int*)(*puVar1)[uVar20];
                            field_136 = *puVar12;
                        }
                        uVar20 = uVar20 + 1;
                    } while (uVar20 < m_groupCount);
                }
            }
            pPVar5 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)arg1;
            local_70 = uVar19;
            if (m_groupCount != 0) {
                uVar19 = 0;
                do {
                    uVar10 = pPVar5->g4s();
                    puVar12 = (unsigned int*)(*puVar1)[uVar19];
                    puVar14 = (uint32_t*)(*local_68)[(unsigned long)*puVar12];
                    *puVar14 = uVar10;
                    uVar19 = uVar19 + 1;
                } while (uVar19 < m_groupCount);
            }
            local_60 = (Array<unsigned int>*)puVar1;
            if (((local_40 & 8) != 0) && (m_groupCount != 0)) {
                uVar8 = 0;
                do {
                    pPVar5->g4s();
                    uVar8 = uVar8 + 1;
                } while (uVar8 < m_groupCount);
            }
            pAVar3 = local_60;
            if (((local_40 & 2) != 0) && (local_50->m_groupCount != 0)) {
                puVar1 = &local_50->field_176;
                uVar19 = 0;
                do {
                    new (local_98) Array<unsigned char>(64);
                    puVar12 = (unsigned int*)(*pAVar3)[uVar19];
                    this_03 = (Array<unsigned char>*)(*puVar1)[(unsigned long)*puVar12];
                    *this_03 = *local_98;
                    puVar12 = (unsigned int*)(*pAVar3)[uVar19];
                    this_04 =
                        (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(*puVar1)[(unsigned long)*puVar12];
                    arg1.gArrayBuffer((unsigned char*)this_04->data(), 0, 64);
                    uVar19 = uVar19 + 1;
                } while (uVar19 < local_50->m_groupCount);
            }
            pPVar5 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)arg1;
            pJVar4 = local_50;
            local_50->m_pTotalPackedGroupSize = 0;
            if (((local_40 & 4) != 0) && (local_50->m_groupCount != 0)) {
                uVar8 = 0;
                do {
                    iVar9 = pPVar5->g4s();
                    pJVar4->m_pTotalPackedGroupSize = pJVar4->m_pTotalPackedGroupSize + (long)iVar9;
                    pPVar5->g4s();
                    uVar8 = uVar8 + 1;
                } while (uVar8 < pJVar4->m_groupCount);
            }
            if (pJVar4->m_groupCount != 0) {
                _memset((void*)(*local_58)[0], 255, local_70 * 4);
            }
            pAVar3 = local_60;
            if (pJVar4->m_groupCount != 0) {
                uVar19 = 0;
                do {
                    uVar10 = pPVar5->g4();
                    puVar12 = (unsigned int*)(*pAVar3)[uVar19];
                    puVar14 = (uint32_t*)(*local_58)[(unsigned long)*puVar12];
                    *puVar14 = uVar10;
                    uVar19 = uVar19 + 1;
                } while (uVar19 < pJVar4->m_groupCount);
            }
            if (pJVar4->m_groupCount != 0) {
                uVar19 = 0;
                do {
                    uVar8 = arg1.gSmart2or4();
                    if (65535 < uVar8) {
                        LogAssert("fileCount <= std::numeric_limits<uint16>::max()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/"
                                  "Js5Index.cpp",
                                  207, nullptr);
                    }
                    puVar12 = (unsigned int*)(*local_60)[uVar19];
                    puVar16 = (uint16_t*)(*local_78)[(unsigned long)*puVar12];
                    *puVar16 = (short)uVar8;
                    uVar19 = uVar19 + 1;
                } while (uVar19 < pJVar4->m_groupCount);
            }
            if (pJVar4->m_groupCount != 0) {
                local_80 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&pJVar4->field_248;
                local_40 = 0;
                do {
                    puVar12 = (unsigned int*)(*local_60)[local_40];
                    local_58 = (Array<int>*)(unsigned long)*puVar12;
                    puVar17 = (unsigned short*)(*local_78)[(unsigned long)local_58];
                    pPVar5 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)arg1;
                    uVar2 = *puVar17;
                    uVar8 = (unsigned int)uVar2;
                    uVar19 = ((hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>*)(PacketReaderMixin<PacketT<Array<unsigned char>>>*)arg1)
                                 ->size();
                    local_68 = (Array<int>*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)((unsigned int)uVar2));
                    if (uVar2 == 0) {
                        iVar9 = -1;
                    } else {
                        iVar18 = 0;
                        iVar9 = -1;
                        do {
                            iVar11 = pPVar5->gSmart2or4();
                            iVar18 = iVar18 + iVar11;
                            if (iVar9 < iVar18) {
                                iVar9 = iVar18;
                            }
                            uVar8 = uVar8 - 1;
                        } while (uVar8 != 0);
                    }
                    this_01 = local_80;
                    iVar18 = (int)local_68;
                    uVar2 = local_46;
                    if (iVar9 + 1 != (int)local_68) {
                        uVar20 = local_80->end();
                        if (uVar20 != local_70) {
                            this_01->set_max_size(local_70, 0);
                        }
                        ((PacketT<Array<unsigned char>>*)(PacketReaderMixin<PacketT<Array<unsigned char>>>*)arg1)
                            ->SetPos(uVar19);
                        this_05 = (vector_map<unsigned int, unsigned short>*)(*this_01)[(unsigned long)local_58];
                        uVar2 = local_46;
                        if (iVar18 != 0) {
                            iVar18 = 0;
                            iVar9 = 0;
                            uVar22 = 0;
                            do {
                                local_46 = uVar2;
                                iVar11 = arg1.gSmart2or4();
                                local_58 = (Array<int>*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)iVar18);
                                uVar2 = local_46;
                                local_46 = uVar22;
                                for (local_44 = (iVar9 + 1) - (unsigned int)(iVar18 == 0); local_44 < iVar11 + iVar9;
                                     local_44 = local_44 + 1) {
                                    uVar22 = local_46 + 1;
                                    local_98[0] = eastl::make_pair<int&, unsigned short&>(local_44, local_46);
                                    this_05->insert<eastl::pair<int, unsigned short>, void>(*local_98);
                                    uVar2 = local_46;
                                    local_46 = uVar22;
                                }
                                iVar18 = (int)local_58 + 1;
                                iVar9 = iVar11 + iVar9;
                                uVar22 = local_46;
                            } while (iVar18 != (int)local_68);
                        }
                    }
                    local_46 = uVar2;
                    local_40 = local_40 + 1;
                } while (local_40 < local_50->m_groupCount);
            }
        } else {
            this_02 = logger::default_logger();
            uVar8 = (unsigned int)bVar6;
            str2 = "Js5Index: Invalid Js5 Index file version: %d";
            iVar9 = 98;
        LAB_1009efc7c:
            this_02->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/Js5Index.cpp",
                         iVar9, str2, uVar8);
        }
    }

    // 0x1009f01f0
    Js5Index::Js5Index(unsigned int arg1, const Array<unsigned char>& arg2, PacketT<Array<unsigned char>>& arg3)
        : m_indexCRC(0), m_indexVersion(0), field_36(0), m_groupCount(0), field_136(4294967295), m_maximumGroupID(0),
          m_pTotalPackedGroupSize(0) {
        Init(arg1, arg2, arg3);
    }

    // 0x1009f0370
    void Js5Index::InitHashes() {
        uint32_t uVar1;
        uint32_t* puVar4;
        int* arg1;
        unsigned long arg1_00;

        int* this_00 = &field_96;
        if (this_00->empty() != '\0') {
            if (field_72.end() != 0) {
                this_00->reserve((unsigned long)(m_maximumGroupID + 1));
                if (m_groupCount != 0) {
                    arg1_00 = 0;
                    do {
                        puVar4 = &field_48[arg1_00];
                        uVar1 = *puVar4;
                        arg1 = &field_72[arg1_00];
                        puVar4 = (uint32_t*)(*this_00)[*arg1];
                        *puVar4 = uVar1;
                        arg1_00 = arg1_00 + 1;
                    } while (arg1_00 < m_groupCount);
                }
            }
        }
    }

    // 0x1009f04f0
    uint8_t* Js5Index::GetGroupIDFromHash(unsigned int& arg1, int arg2) {
        long lVar2;
        long lVar3;
        uint8_t** ppuVar4;

        unsigned int uVar1 = field_136;
        if (((int)uVar1 < 0) || (HASH_MAIN != arg2)) {
            InitHashes();
            lVar2 = eastl::vector_map<int, int>::find(field_96);
            lVar3 = field_96.end();
            if (lVar2 == lVar3) {
                ppuVar4 = &DataStatus::MISSING;
                goto LAB_1009f0554;
            }
            uVar1 = *(unsigned int*)(lVar2 + 4);
        }
        arg1 = uVar1;
        ppuVar4 = &DataStatus::READY;
    LAB_1009f0554:
        return *ppuVar4;
    }

    // 0x1009f0780
    void Js5Index::GetFileList(eastl::vector<unsigned int, BucketAllocatorEASTL>& arg1, unsigned int arg2) const {
        unsigned int in_EAX;
        unsigned int uVar2;
        unsigned int uVar3;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_00;
        unsigned short* puVar4;
        long lVar5;
        long lVar6;
        uint64_t uStack_38;

        uStack_38._0_4_ = in_EAX;
        arg1.clear();
        if (DoesGroupExist(arg2)) {
            this_00 = &field_248[(unsigned long)arg2];
            if (this_00->empty()) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/Js5Index.cpp", 287,
                    "Js5Index: Fix caller to first check IsFileListContiguous() before trying to get a file list that "
                    "is just a sequential list.");
            }
            puVar4 = &field_224[(unsigned long)arg2];
            arg1.reserve((unsigned long)*puVar4);
            uVar2 = GetMaximumFileID(arg2);
            uStack_38 = (unsigned long)(unsigned int)uStack_38;
            if (uVar2 != 0) {
                do {
                    lVar5 = eastl::vector_map<unsigned int, unsigned int>::find(*this_00);
                    lVar6 = this_00->end();
                    if (lVar5 == lVar6) {
                        arg1.push_back(*((unsigned int*)((long)&uStack_38 + 4)));
                    }
                    uVar3 = uStack_38._4_4_ + 1;
                    uStack_38 = (((uint64_t)uVar3 << 32) | (uint32_t)((unsigned int)uStack_38));
                } while (uVar3 < uVar2);
            }
        }
    }

} // namespace jag
