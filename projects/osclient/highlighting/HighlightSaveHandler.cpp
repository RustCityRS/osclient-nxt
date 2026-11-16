// projects/osclient/highlighting/HighlightSaveHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "HighlightSaveHandler.h"

namespace jag::oldscape::highlight {
    // 0x10000d270
    void HighlightSaveHandler::SaveChanges(
        const eastl::hash_map<eastl::string, unsigned int>& arg1, const eastl::hash_map<int, HighlightedGroup>& arg2,
        const eastl::hash_map<int, HighlightedGroup>& arg3, const eastl::hash_map<int, HighlightedGroup>& arg4,
        const eastl::hash_map<OpGroup, HighlightedGroup>& arg5,
        const std::array<eastl::hash_map<long long, unsigned int>, 25600ul>& maps1,
        const std::array<eastl::hash_map<long long, unsigned int>, 25600ul>& maps2,
        const std::array<eastl::hash_map<int, unsigned int>, 25600ul>& maps3,
        const std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>& highlightChannelPropertiesss) {
        uint8_t* puVar1;
        hash_map<int, HighlightedGroup>* phVar2;
        hash_map<OpGroup, HighlightedGroup>* arg1_00;
        hash_map<eastl::string, unsigned int>* arg1_01;
        unsigned int uVar4;
        unsigned int uVar5;
        int iVar6;
        Logger* this_01;
        CoordMapSquare* pCVar8;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar9;
        void* pvVar10;
        unsigned long uVar11;
        long lVar12;
        uint64_t* puVar13;
        char** ppcVar14;
        char* local_11f8[48];
        uint64_t local_1078[48];
        uint64_t local_ef8[48];
        uint64_t local_d78[48];
        uint64_t local_bf8[48];
        uint64_t local_a78[48];
        uint64_t local_8f8[48];
        uint64_t local_778[48];
        uint64_t local_5f8[48];
        eastl::string local_450;
        unsigned long local_430;
        CoordMapSquare* local_428;
        function<void(File&, int)> local_418[48];
        function<void(File&, int)> local_3e8[48];
        function<void(File&, int)> local_3b8[48];
        function<void(File&, int)> local_388[48];
        function<void(File&, int)> local_358[48];
        function<void(File&, int)> local_328[48];
        function<void(File&, int)> local_2f8[48];
        function<void(File&, int)> local_2c8[48];
        long local_38;

        uint8_t bVar15 = 0;
        hash_map<int, HighlightedGroup>* local_478 = arg2;
        hash_map<int, HighlightedGroup>* local_470 = arg3;
        hash_map<int, HighlightedGroup>* local_468 = arg4;
        hash_map<OpGroup, HighlightedGroup>* local_460 = arg5;
        hash_map<eastl::string, unsigned int>* local_458 = arg1;
        HighlightSaveHandler* local_420 = this;
        Callstack local_298 = GameShell3Cache::GetAccountDirectory();
        Filename local_168 = local_298 / "Highlights";
        bool cVar3 = local_168.Exists();
        if (!cVar3) {
            local_298 = callstack::Callstack();
            local_168.CreateDirectories(&local_298);
            cVar3 = local_298.IsValid();
            if (cVar3) {
                this_01 = logger::default_logger();
                local_11f8[0] = local_168.GetName();
                this_01->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "highlighting/HighlightSaveHandler.cpp",
                             383, "Error creating highlight directory at %s");
                if (cVar3)
                    goto LAB_10000db2a;
            }
        }
        int* piVar7 = (int*)(*local_420)[7];
        if (0 < *piVar7) {
            puVar1 = &local_420->field_440;
            pCVar8 = (CoordMapSquare*)puVar1->HeapBeginPtr();
            local_428 = (CoordMapSquare*)puVar1->end();
            if (pCVar8 != local_428) {
                do {
                    local_450 = eastl::string();
                    uVar4 = pCVar8->GetX();
                    uVar5 = pCVar8->GetZ();
                    local_450.append_sprintf("%d_%d.thl", (unsigned long)uVar4, (unsigned long)uVar5);
                    iVar6 = GetMapSquareIndex(pCVar8);
                    phVar9 = &maps3[(long)iVar6];
                    local_298 = local_168 / &local_450;
                    local_430 = phVar9->size();
                    pvVar10 = &highlightChannelPropertiesss[7];
                    _memcpy(local_1078, pvVar10, 384);
                    std::function<void(File&, int)>::function<
                        HighlightSaveHandler::SaveChanges(
                            eastl::hash_map<eastl::string, unsigned int> const&,
                            eastl::hash_map<int, HighlightedGroup> const&,
                            eastl::hash_map<int, HighlightedGroup> const&,
                            eastl::hash_map<int, HighlightedGroup> const&,
                            eastl::hash_map<OpGroup, HighlightedGroup> const&,
                            std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
                            std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
                            std::array<eastl::hash_map<int, unsigned int>, 25600ul> const&,
                            std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::__17,
                        void>(local_2c8, (__17*)phVar9);
                    puVar13 = local_1078;
                    ppcVar14 = local_11f8;
                    for (lVar12 = 48; lVar12 != 0; lVar12 = lVar12 - 1) {
                        *ppcVar14 = (char*)*puVar13;
                        puVar13 = puVar13 + (unsigned long)bVar15 * -2 + 1;
                        ppcVar14 = ppcVar14 + (unsigned long)bVar15 * -2 + 1;
                    }
                    SaveMapToFile(&local_298, local_430, (array<HighlightChannelProperties, _32ul>*)local_2c8,
                                  (function<void_(File&, int)>*)0);
                    pCVar8 = (CoordMapSquare*)&pCVar8->field_8;
                } while (pCVar8 != local_428);
            }
        }
        piVar7 = (int*)(*local_420)[2];
        if (0 < *piVar7) {
            puVar1 = &local_420->field_40;
            pCVar8 = (CoordMapSquare*)puVar1->HeapBeginPtr();
            local_428 = (CoordMapSquare*)puVar1->end();
            if (pCVar8 != local_428) {
                do {
                    local_450 = eastl::string();
                    uVar4 = pCVar8->GetX();
                    uVar5 = pCVar8->GetZ();
                    local_450.append_sprintf("%d_%d.lhl", (unsigned long)uVar4, (unsigned long)uVar5);
                    iVar6 = GetMapSquareIndex(pCVar8);
                    phVar9 = &maps1[(long)iVar6];
                    local_298 = local_168 / &local_450;
                    local_430 = phVar9->size();
                    pvVar10 = &highlightChannelPropertiesss[2];
                    _memcpy(local_ef8, pvVar10, 384);
                    std::function<void(File&, int)>::function<
                        HighlightSaveHandler::SaveChanges(
                            eastl::hash_map<eastl::string, unsigned int> const&,
                            eastl::hash_map<int, HighlightedGroup> const&,
                            eastl::hash_map<int, HighlightedGroup> const&,
                            eastl::hash_map<int, HighlightedGroup> const&,
                            eastl::hash_map<OpGroup, HighlightedGroup> const&,
                            std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
                            std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
                            std::array<eastl::hash_map<int, unsigned int>, 25600ul> const&,
                            std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::__18,
                        void>(local_2f8, (__18*)phVar9);
                    puVar13 = local_ef8;
                    ppcVar14 = local_11f8;
                    for (lVar12 = 48; lVar12 != 0; lVar12 = lVar12 - 1) {
                        *ppcVar14 = (char*)*puVar13;
                        puVar13 = puVar13 + (unsigned long)bVar15 * -2 + 1;
                        ppcVar14 = ppcVar14 + (unsigned long)bVar15 * -2 + 1;
                    }
                    SaveMapToFile(&local_298, local_430, (array<HighlightChannelProperties, _32ul>*)local_2f8,
                                  (function<void_(File&, int)>*)0);
                    pCVar8 = (CoordMapSquare*)&pCVar8->field_8;
                } while (pCVar8 != local_428);
            }
        }
        piVar7 = (int*)(*local_420)[4];
        if (0 < *piVar7) {
            puVar1 = &local_420->field_240;
            pCVar8 = (CoordMapSquare*)puVar1->HeapBeginPtr();
            local_428 = (CoordMapSquare*)puVar1->end();
            if (pCVar8 != local_428) {
                do {
                    local_450 = eastl::string();
                    uVar4 = pCVar8->GetX();
                    uVar5 = pCVar8->GetZ();
                    local_450.append_sprintf("%d_%d.lhl", (unsigned long)uVar4, (unsigned long)uVar5);
                    iVar6 = GetMapSquareIndex(pCVar8);
                    phVar9 = &maps2[(long)iVar6];
                    local_298 = local_168 / &local_450;
                    local_430 = phVar9->size();
                    pvVar10 = &highlightChannelPropertiesss[4];
                    _memcpy(local_d78, pvVar10, 384);
                    std::function<void(File&, int)>::function<
                        HighlightSaveHandler::SaveChanges(
                            eastl::hash_map<eastl::string, unsigned int> const&,
                            eastl::hash_map<int, HighlightedGroup> const&,
                            eastl::hash_map<int, HighlightedGroup> const&,
                            eastl::hash_map<int, HighlightedGroup> const&,
                            eastl::hash_map<OpGroup, HighlightedGroup> const&,
                            std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
                            std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
                            std::array<eastl::hash_map<int, unsigned int>, 25600ul> const&,
                            std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::__19,
                        void>(local_328, (__19*)phVar9);
                    puVar13 = local_d78;
                    ppcVar14 = local_11f8;
                    for (lVar12 = 48; lVar12 != 0; lVar12 = lVar12 - 1) {
                        *ppcVar14 = (char*)*puVar13;
                        puVar13 = puVar13 + (unsigned long)bVar15 * -2 + 1;
                        ppcVar14 = ppcVar14 + (unsigned long)bVar15 * -2 + 1;
                    }
                    SaveMapToFile(&local_298, local_430, (array<HighlightChannelProperties, _32ul>*)local_328,
                                  (function<void_(File&, int)>*)0);
                    pCVar8 = (CoordMapSquare*)&pCVar8->field_8;
                } while (pCVar8 != local_428);
            }
        }
        piVar7 = (int*)(*local_420)[1];
        if (0 < *piVar7) {
            local_298 = local_168 / "npc.hl";
            phVar2 = local_478;
            uVar11 = local_478->size();
            pvVar10 = &highlightChannelPropertiesss[1];
            _memcpy(local_bf8, pvVar10, 384);
            std::function<void(File&, int)>::function<
                HighlightSaveHandler::SaveChanges(
                    eastl::hash_map<eastl::string, unsigned int> const&, eastl::hash_map<int, HighlightedGroup> const&,
                    eastl::hash_map<int, HighlightedGroup> const&, eastl::hash_map<int, HighlightedGroup> const&,
                    eastl::hash_map<OpGroup, HighlightedGroup> const&,
                    std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
                    std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
                    std::array<eastl::hash_map<int, unsigned int>, 25600ul> const&,
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::__20,
                void>(local_358, (__20*)phVar2);
            puVar13 = local_bf8;
            ppcVar14 = local_11f8;
            for (lVar12 = 48; lVar12 != 0; lVar12 = lVar12 - 1) {
                *ppcVar14 = (char*)*puVar13;
                puVar13 = puVar13 + (unsigned long)bVar15 * -2 + 1;
                ppcVar14 = ppcVar14 + (unsigned long)bVar15 * -2 + 1;
            }
            SaveMapToFile(&local_298, uVar11, (array<HighlightChannelProperties, _32ul>*)local_358,
                          (function<void_(File&, int)>*)0);
        }
        piVar7 = (int*)(*local_420)[3];
        if (0 < *piVar7) {
            local_298 = local_168 / "loc.hl";
            phVar2 = local_470;
            uVar11 = local_470->size();
            pvVar10 = &highlightChannelPropertiesss[3];
            _memcpy(local_a78, pvVar10, 384);
            std::function<void(File&, int)>::function<
                HighlightSaveHandler::SaveChanges(
                    eastl::hash_map<eastl::string, unsigned int> const&, eastl::hash_map<int, HighlightedGroup> const&,
                    eastl::hash_map<int, HighlightedGroup> const&, eastl::hash_map<int, HighlightedGroup> const&,
                    eastl::hash_map<OpGroup, HighlightedGroup> const&,
                    std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
                    std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
                    std::array<eastl::hash_map<int, unsigned int>, 25600ul> const&,
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::__21,
                void>(local_388, (__21*)phVar2);
            puVar13 = local_a78;
            ppcVar14 = local_11f8;
            for (lVar12 = 48; lVar12 != 0; lVar12 = lVar12 - 1) {
                *ppcVar14 = (char*)*puVar13;
                puVar13 = puVar13 + (unsigned long)bVar15 * -2 + 1;
                ppcVar14 = ppcVar14 + (unsigned long)bVar15 * -2 + 1;
            }
            SaveMapToFile(&local_298, uVar11, (array<HighlightChannelProperties, _32ul>*)local_388,
                          (function<void_(File&, int)>*)0);
        }
        piVar7 = (int*)(*local_420)[5];
        if (0 < *piVar7) {
            local_298 = local_168 / "obj.hl";
            phVar2 = local_468;
            uVar11 = local_468->size();
            pvVar10 = &highlightChannelPropertiesss[5];
            _memcpy(local_8f8, pvVar10, 384);
            std::function<void(File&, int)>::function<
                HighlightSaveHandler::SaveChanges(
                    eastl::hash_map<eastl::string, unsigned int> const&, eastl::hash_map<int, HighlightedGroup> const&,
                    eastl::hash_map<int, HighlightedGroup> const&, eastl::hash_map<int, HighlightedGroup> const&,
                    eastl::hash_map<OpGroup, HighlightedGroup> const&,
                    std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
                    std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
                    std::array<eastl::hash_map<int, unsigned int>, 25600ul> const&,
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::__22,
                void>(local_3b8, (__22*)phVar2);
            puVar13 = local_8f8;
            ppcVar14 = local_11f8;
            for (lVar12 = 48; lVar12 != 0; lVar12 = lVar12 - 1) {
                *ppcVar14 = (char*)*puVar13;
                puVar13 = puVar13 + (unsigned long)bVar15 * -2 + 1;
                ppcVar14 = ppcVar14 + (unsigned long)bVar15 * -2 + 1;
            }
            SaveMapToFile(&local_298, uVar11, (array<HighlightChannelProperties, _32ul>*)local_3b8,
                          (function<void_(File&, int)>*)0);
        }
        piVar7 = (int*)(*local_420)[8];
        if (0 < *piVar7) {
            local_298 = local_168 / "groups.hl";
            arg1_00 = local_460;
            uVar11 = local_460->size();
            pvVar10 = &highlightChannelPropertiesss[8];
            _memcpy(local_778, pvVar10, 384);
            std::function<void(File&, int)>::function<
                HighlightSaveHandler::SaveChanges(
                    eastl::hash_map<eastl::string, unsigned int> const&, eastl::hash_map<int, HighlightedGroup> const&,
                    eastl::hash_map<int, HighlightedGroup> const&, eastl::hash_map<int, HighlightedGroup> const&,
                    eastl::hash_map<OpGroup, HighlightedGroup> const&,
                    std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
                    std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
                    std::array<eastl::hash_map<int, unsigned int>, 25600ul> const&,
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::__23,
                void>(local_3e8, (__23*)arg1_00);
            puVar13 = local_778;
            ppcVar14 = local_11f8;
            for (lVar12 = 48; lVar12 != 0; lVar12 = lVar12 - 1) {
                *ppcVar14 = (char*)*puVar13;
                puVar13 = puVar13 + (unsigned long)bVar15 * -2 + 1;
                ppcVar14 = ppcVar14 + (unsigned long)bVar15 * -2 + 1;
            }
            SaveMapToFile(&local_298, uVar11, (array<HighlightChannelProperties, _32ul>*)local_3e8,
                          (function<void_(File&, int)>*)0);
        }
        piVar7 = (int*)(*local_420)[6];
        if (0 < *piVar7) {
            local_298 = local_168 / "player.hl";
            arg1_01 = local_458;
            uVar11 = local_458->size();
            pvVar10 = &highlightChannelPropertiesss[6];
            _memcpy(local_5f8, pvVar10, 384);
            std::function<void(File&, int)>::function<
                HighlightSaveHandler::SaveChanges(
                    eastl::hash_map<eastl::string, unsigned int> const&, eastl::hash_map<int, HighlightedGroup> const&,
                    eastl::hash_map<int, HighlightedGroup> const&, eastl::hash_map<int, HighlightedGroup> const&,
                    eastl::hash_map<OpGroup, HighlightedGroup> const&,
                    std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
                    std::array<eastl::hash_map<long long, unsigned int>, 25600ul> const&,
                    std::array<eastl::hash_map<int, unsigned int>, 25600ul> const&,
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul> const&)::__24,
                void>(local_418, (__24*)arg1_01);
            puVar13 = local_5f8;
            ppcVar14 = local_11f8;
            for (lVar12 = 48; lVar12 != 0; lVar12 = lVar12 - 1) {
                *ppcVar14 = (char*)*puVar13;
                puVar13 = puVar13 + (unsigned long)bVar15 * -2 + 1;
                ppcVar14 = ppcVar14 + (unsigned long)bVar15 * -2 + 1;
            }
            SaveMapToFile(&local_298, uVar11, (array<HighlightChannelProperties, _32ul>*)local_418,
                          (function<void_(File&, int)>*)0);
        }
        HighlightSaveHandler* this_00 = local_420;
        local_420->field_440.clear();
        this_00->field_40.clear();
        this_00->field_240.clear();
        local_298[0].m_stackFrames = 0;
        this_00->fill(local_298[0].m_stackFrames);
    LAB_10000db2a:
    }

    // 0x1000157f0
    void HighlightSaveHandler::OnHighlightUpdate(HighlightCategory highlightCategory) {
        if (highlightCategory == 9) {
            LogAssert("category != HighlightCategory::NUM_CATEGORIES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                      "HighlightSaveHandler.cpp",
                      23, nullptr);
        }
        int* piVar1 = (int*)(*this)[(long)(int)highlightCategory];
        *piVar1 = *piVar1 + 1;
    }

    // 0x100015840
    void HighlightSaveHandler::OnHighlightUpdate(HighlightCategory highlightCategory,
                                                 const rs2lib::CoordMapSquare& coordMapSquare) {
        fixed_vector<rs2lib::CoordMapSquare, 20ul>* this_00;

        if (coordMapSquare.IsSource() == '\0') {
            LogAssert("mapSq.IsSource()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                      "HighlightSaveHandler.cpp",
                      34, nullptr);
        }
        if (highlightCategory == 7) {
            this_00 = (fixed_vector<rs2lib::CoordMapSquare, 20ul>*)&field_440;
        } else if (highlightCategory == 4) {
            this_00 = (fixed_vector<rs2lib::CoordMapSquare, 20ul>*)&field_240;
        } else {
            if (highlightCategory != 2) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "highlighting/HighlightSaveHandler.cpp",
                                47, "Invalid category");
            }
            this_00 = (fixed_vector<rs2lib::CoordMapSquare, 20ul>*)&field_40;
        }
        this_00->push_back(coordMapSquare);
        int* piVar2 = (int*)(*this)[(long)(int)highlightCategory];
        *piVar2 = *piVar2 + 1;
    }

    // 0x1000158f0
    void HighlightSaveHandler::OnHighlightUpdate(HighlightCategory highlightCategory, unsigned char arg2,
                                                 unsigned char arg3) {
        uint32_t in_register_00000009;
        uint64_t in_register_00000011;
        uint8_t local_28[8];

        new (local_28) sidebars::SideBarData((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2),
                                             (((uint32_t)in_register_00000009 << 8) | (uint8_t)arg3));
        OnHighlightUpdate(highlightCategory, *local_28);
    }

    // 0x100015960
    void LoadHighlightsFromFile(const Filename& filename, std::function<void(eastl::string const&, int)> callback) {
        bool bVar2;
        unsigned int arg2;
        Logger* logger;
        char* pcVar3;
        uint64_t uVar4;
        long lVar5;
        long lVar6;
        uint64_t extraout_var;
        unsigned long arg1;
        uint64_t in_RCX;
        ReturnValue local_1d0;
        ReturnValue local_1b0;
        function<void_(eastl::string const&, int)>* local_190;
        long local_38;

        Callstack local_188;
        ClientCompositeZone local_170(filename, &local_188);
        bool cVar1 = local_188.IsValid();
        if (!cVar1) {
            cVar1 = local_170.IsValid();
            local_174 = (uint32_t)(((uint64_t)((int64_t)((unsigned long)in_RCX >> 8)) << 8) | (uint8_t)1);
            if (!cVar1)
                goto LAB_100015c1a;
            arg2 = 4294967295;
            local_188._8_8_ = 0;
            local_190 = callback;
            do {
                cVar1 = local_170.IsValid();
                if (!cVar1) {
                LAB_100015c0c:
                    local_170.close(nullptr);
                    goto LAB_100015c1a;
                }
                lVar5 = local_170.tell();
                lVar6 = local_170.length(nullptr);
                if (lVar6 <= lVar5)
                    goto LAB_100015c0c;
                local_1b0 = local_170.readline();
                local_1b0.trim();
                if (arg2 == 4294967295) {
                    bVar2 = IsNumber<eastl::string>(&local_1b0);
                    if (bVar2) {
                        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        std::string::string<decltype(nullptr)>(&local_1d0, pcVar3);
                        arg2 = std::stoi(&local_1d0, nullptr, 10);
                        std::string::~string(&local_1d0);
                        bVar2 = true;
                        if (31 < arg2) {
                            bVar2 = false;
                            local_170.close(nullptr);
                        }
                    } else {
                        bVar2 = false;
                        local_170.close(nullptr);
                        arg2 = 4294967295;
                    }
                } else if (((unsigned long)(uint8_t)local_188.field_8 & 1) == 0) {
                    bVar2 = local_1b0 != DAT_100e35828;
                    if (bVar2) {
                        bVar2 = false;
                        local_170.close(nullptr);
                    } else {
                        local_188._8_8_ = (((uint64_t)extraout_var << 8) | (uint8_t)1);
                    LAB_100015a7a:
                        bVar2 = true;
                    }
                } else {
                    cVar1 = local_1b0 == "}";
                    bVar2 = true;
                    if (cVar1) {
                        arg2 = 4294967295;
                        local_188._8_8_ = 0;
                        goto LAB_100015a7a;
                    }
                    arg1 = local_1b0.find_first_not_of(' ', 0);
                    local_1d0 = local_1b0.substr(arg1, 18446744073709551615);
                    local_1b0 = &local_1d0;
                    std::function<void(eastl::stringconst&, int)>::operator()(
                        (function<void(eastl::stringconst&, int)>*)local_190, &local_1b0, arg2);
                }
            } while (bVar2);
        } else {
            logger = logger::default_logger();
            pcVar3 = filename.GetName();
            local_1b0 = local_188.GetErrorString();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                        "highlighting/HighlightSaveHandler.cpp",
                        74, "Error reading highlight file %s: %s", pcVar3, uVar4);
        }
        return local_174 = 0;
    LAB_100015c1a:
        return local_174;
    }

    // 0x100015de0
    void ParseInt(std::basic_stringstream<char>& basic_stringstream) {
        string local_30;
        std::getline<char>(basic_stringstream, local_30, ',');
        bool bVar1 = IsNumber<std::string>(&local_30);
        uint32_t uVar2 = 4294967295;
        if (bVar1) {
            uVar2 = std::stoi(&local_30, nullptr, 10);
        }
        std::string::~string(&local_30);
        return uVar2;
    }

    // 0x100015ed0
    void ParseCoordinate(std::basic_stringstream<char>& basic_stringstream, int arg2, int arg3) {
        uint32_t uVar1;

        uint64_t local_40 = -1;
        long lVar3 = 0;
        do {
            uVar1 = ParseInt(basic_stringstream);
            *(uint32_t*)((long)&local_40 + lVar3 * 4) = uVar1;
            lVar3 = lVar3 + 1;
        } while (lVar3 != 3);
        uint64_t uVar2 = 4294967295;
        if ((((unsigned int)local_40 < 4) && (-1 < local_40)) && ((int)local_40._4_4_ < 64)) {
            if ((-1 < (int)4294967295) && ((int)4294967295 < 64)) {
                uVar2 = rs2lib::CoordGrid::BitPack((unsigned int)local_40, local_40._4_4_ | arg2 << 6,
                                                   4294967295 | arg3 << 6);
            }
        }
        return uVar2;
    }

    // 0x100015f80
    unsigned long ParseMapSquare(const eastl::basic_string<char, BucketAllocatorEASTL>& str, int& arg2, int& arg3) {
        int iVar2;
        char* pcVar5;
        string local_40;

        unsigned long uVar3 = str.find('_', 0);
        auto local_70 = str.substr(0, uVar3);
        auto local_58 = str.substr(local_70.size() + 1, 18446744073709551615);
        if (IsNumber<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_58)) {
            if (IsNumber<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_70)) {
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                std::string::string<decltype(nullptr)>(&local_40, pcVar5);
                iVar2 = std::stoi(&local_40, nullptr, 10);
                arg2 = iVar2;
                std::string::~string(&local_40);
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                std::string::string<decltype(nullptr)>(&local_40, pcVar5);
                iVar2 = std::stoi(&local_40, nullptr, 10);
                arg3 = iVar2;
                std::string::~string(&local_40);
                uVar3 = (((uint64_t)((int64_t)((unsigned long)str >> 8)) << 8) | (uint8_t)1);
                goto LAB_100016067;
            }
        }
        arg2 = -1;
        arg3 = -1;
        uVar3 = 0;
    LAB_100016067:
        return uVar3 & 4294967295;
    }

    // 0x100016280
    void HighlightSaveHandler::LoadAllFromFiles(HighlightManager& highlightManager) {
        __14 arg1;
        __15 arg1_00;
        __16 arg1_01;
        bool bVar2;
        Filename* this_00;
        unsigned long uVar3;
        function<void(eastl::stringconst&, int)>* pfVar4;
        __9 in_stack_fffffffffffffb28;
        ReturnValue local_4c0;
        ReturnValue local_4a8;
        __9 local_490;
        int* piStack_488;
        HighlightManager* local_480;
        __9 local_478;
        int* piStack_470;
        HighlightManager* local_468;
        __9 local_460;
        int* piStack_458;
        HighlightManager* local_450;
        Filename* local_448;
        ReturnValue local_440;
        int local_420;
        int local_41c;
        function<void(eastl::stringconst&, int)> local_418[48];
        function<void(eastl::stringconst&, int)> local_3e8[48];
        function<void(eastl::stringconst&, int)> local_3b8[48];
        function<void(eastl::stringconst&, int)> local_388[48];
        function<void(eastl::stringconst&, int)> local_358[48];
        function<void(eastl::stringconst&, int)> local_328[48];
        function<void(eastl::stringconst&, int)> local_2f8[48];
        function<void(eastl::stringconst&, int)> local_2c8[48];
        long local_38;

        HighlightManager* local_428 = highlightManager;
        auto local_298 = GameShell3Cache::GetAccountDirectory();
        Filename local_168 = local_298 / "Highlights";
        bool cVar1 = local_168.Exists();
        if ((cVar1) && (cVar1 = local_168.IsDirectoryEmpty(), !cVar1)) {
            local_298 = local_168.GetAllFiles();
            this_00 = (Filename*)local_298.HeapBeginPtr();
            local_448 = (Filename*)local_298.end();
            if (this_00 != local_448) {
                do {
                    pfVar4 = local_328;
                    local_4c0.GetFile(this_00);
                    uVar3 = local_4c0.find_last_of('.', 18446744073709551615);
                    local_4a8 = local_4c0.substr(0, uVar3);
                    uVar3 = local_4a8.size();
                    local_440 = local_4c0.substr(uVar3, 18446744073709551615);
                    bVar2 = local_440 == (*((value_type*)".hl"));
                    if (bVar2) {
                        bVar2 = local_4a8 == (*((value_type*)"npc"));
                        if (bVar2) {
                            std::function<void(eastl::stringconst&, int)>::function<
                                HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::__9, void>(
                                local_2c8, in_stack_fffffffffffffb28);
                            LoadHighlightsFromFile(this_00, (function<void_(eastl::string const&, int)>*)local_2c8);
                        } else {
                            bVar2 = local_4a8 == (*((value_type*)"loc"));
                            if (bVar2) {
                                std::function<void(eastl::stringconst&, int)>::function<
                                    HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::__10, void>(
                                    local_2f8, (__10)in_stack_fffffffffffffb28);
                                LoadHighlightsFromFile(this_00, (function<void_(eastl::string const&, int)>*)local_2f8);
                            } else {
                                bVar2 = local_4a8 == (*((value_type*)"obj"));
                                if (bVar2) {
                                    std::function<void(eastl::stringconst&, int)>::function<
                                        HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::__11, void>(
                                        pfVar4, (__11)in_stack_fffffffffffffb28);
                                    LoadHighlightsFromFile(this_00,
                                                           (function<void_(eastl::string const&, int)>*)pfVar4);
                                } else {
                                    bVar2 = local_4a8 == (*((value_type*)"groups"));
                                    if (bVar2) {
                                        pfVar4 = local_358;
                                        std::function<void(eastl::stringconst&, int)>::function<
                                            HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::__12, void>(
                                            pfVar4, (__12)in_stack_fffffffffffffb28);
                                        LoadHighlightsFromFile(this_00,
                                                               (function<void_(eastl::string const&, int)>*)pfVar4);
                                        goto LAB_1000164f7;
                                    }
                                    bVar2 = local_4a8 == (*((value_type*)"player"));
                                    if (!bVar2)
                                        goto LAB_100016360;
                                    std::function<void(eastl::stringconst&, int)>::function<
                                        HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::__13, void>(
                                        local_388, (__13)in_stack_fffffffffffffb28);
                                    LoadHighlightsFromFile(this_00,
                                                           (function<void_(eastl::string const&, int)>*)local_388);
                                    pfVar4 = local_388;
                                }
                            LAB_100016356:
                                pfVar4->~function();
                            }
                        }
                    } else {
                        bVar2 = local_440 == (*((value_type*)".thl"));
                        if (bVar2) {
                            cVar1 = ParseMapSquare(&local_4a8, &local_420, &local_41c);
                            if (cVar1) {
                                in_stack_fffffffffffffb28 = (__9)&local_420;
                                piStack_488 = &local_41c;
                                local_480 = local_428;
                                pfVar4 = local_3b8;
                                arg1.field_8 = piStack_488;
                                arg1.field_0 = (int*)in_stack_fffffffffffffb28;
                                arg1.field_16 = local_428;
                                local_490 = in_stack_fffffffffffffb28;
                                std::function<void(eastl::stringconst&, int)>::function<
                                    HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::__14, void>(pfVar4,
                                                                                                           arg1);
                                LoadHighlightsFromFile(this_00, (function<void_(eastl::string const&, int)>*)pfVar4);
                            LAB_1000164f7:
                                pfVar4->~function();
                            }
                        } else {
                            bVar2 = local_440 == (*((value_type*)".lhl"));
                            if (bVar2) {
                                cVar1 = ParseMapSquare(&local_4a8, &local_420, &local_41c);
                                if (cVar1) {
                                    in_stack_fffffffffffffb28 = (__9)&local_420;
                                    piStack_470 = &local_41c;
                                    local_468 = local_428;
                                    pfVar4 = local_3e8;
                                    arg1_00.field_8 = piStack_470;
                                    arg1_00.field_0 = (int*)in_stack_fffffffffffffb28;
                                    arg1_00.field_16 = local_428;
                                    local_478 = in_stack_fffffffffffffb28;
                                    std::function<void(eastl::stringconst&, int)>::function<
                                        HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::__15, void>(pfVar4,
                                                                                                               arg1_00);
                                    LoadHighlightsFromFile(this_00,
                                                           (function<void_(eastl::string const&, int)>*)pfVar4);
                                    goto LAB_100016356;
                                }
                            } else {
                                bVar2 = local_440 == (*((value_type*)".ohl"));
                                if ((bVar2) && (cVar1 = ParseMapSquare(&local_4a8, &local_420, &local_41c), cVar1)) {
                                    in_stack_fffffffffffffb28 = (__9)&local_420;
                                    piStack_458 = &local_41c;
                                    local_450 = local_428;
                                    pfVar4 = local_418;
                                    arg1_01.field_8 = piStack_458;
                                    arg1_01.field_0 = (int*)in_stack_fffffffffffffb28;
                                    arg1_01.field_16 = local_428;
                                    local_460 = in_stack_fffffffffffffb28;
                                    std::function<void(eastl::stringconst&, int)>::function<
                                        HighlightSaveHandler::LoadAllFromFiles(HighlightManager&)::__16, void>(pfVar4,
                                                                                                               arg1_01);
                                    LoadHighlightsFromFile(this_00,
                                                           (function<void_(eastl::string const&, int)>*)pfVar4);
                                    goto LAB_1000164f7;
                                }
                            }
                        }
                    }
                LAB_100016360:
                    this_00 = this_00 + 304;
                } while (this_00 != local_448);
            }
        }
    }

    // 0x1000169f0
    void SaveMapToFile(const Filename& filename, unsigned long arg2,
                       std::array<HighlightChannelProperties, 32ul> highlightChannelPropertiess,
                       std::function<void(File&, int)> callback) {
        File* file;
        Logger* pLVar2;
        char* pcVar3;
        uint64_t uVar4;
        unsigned long arg1;
        array<HighlightChannelProperties, 32ul> aStack0000000000000008;
        ReturnValue local_198;
        uint8_t local_178[8];

        new (local_178) callstack::Callstack();
        if (arg2 == 0) {
            if (filename.Exists()) {
                filename.RemoveFile(local_178);
                if (local_178->IsValid()) {
                    pLVar2 = logger::default_logger();
                    pcVar3 = filename.GetName();
                    *((local_178 + 8)) = local_178->GetErrorString();
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pLVar2->Log(false, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "highlighting/HighlightSaveHandler.cpp",
                                359, "Error deleting highlight file %s: %s", pcVar3, uVar4);
                    ((local_178 + 8))->~basic_string();
                }
            }
        } else {
            new ((local_178 + 8)) File(filename, 1538, local_178);
            if (!(local_178->IsValid())) {
                file = (File*)(local_178 + 8);
                arg1 = 0;
                do {
                    if (aStack0000000000000008[arg1]->SaveToFileEnable()) {
                        local_198 = eastl::string();
                        local_198.append_sprintf("%d\n{\n", arg1 & 4294967295);
                        file->write(&local_198, nullptr);
                        std::function<void(File&, int)>::operator()(
                            (function<void(File&, int)>*)highlightChannelPropertiess, file, (int)arg1);
                        file->write("}\n", nullptr);
                    }
                    arg1 = arg1 + 1;
                } while (arg1 != 32);
                ((local_178 + 8))->close(nullptr);
            } else {
                pLVar2 = logger::default_logger();
                pcVar3 = filename.GetName();
                local_198 = local_178->GetErrorString();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar2->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightSaveHandler.cpp",
                            331, "Error creating highlight file %s: %s", pcVar3, uVar4);
            }
            ((local_178 + 8))->~File();
        }
    }

} // namespace jag::oldscape::highlight
