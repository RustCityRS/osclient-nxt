// projects/osclient/highlighting/HighlightManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "HighlightManager.h"
#include "libs/oldscape/jagex3/dash3d/AnimFrameSet.h"

namespace jag::oldscape::highlight {
    // 0x10000cbc0
    HighlightManager::HighlightManager() : HighlightSaveHandler() {
        long lVar1;
        char cVar2;

        uint8_t* this_00 = &field_640;
        new (this_00) std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>();
        field_4096 = 0;
        field_4100 = 0;
        field_4104 = 0;
        field_4108 = 0;
        new (&field_4112) eastl::hash_map<long long, unsigned int>(local_38);
        new (&field_4168) eastl::hash_map<eastl::string, unsigned int>(local_38);
        new (&field_4224) eastl::hash_map<int, HighlightedGroup>(local_38);
        new (&field_4280) eastl::hash_map<int, HighlightedGroup>(local_38);
        new (&field_4336) eastl::hash_map<int, HighlightedGroup>(local_38);
        new (&field_4392) eastl::hash_map<OpGroup, HighlightedGroup>(local_38);
        new (&field_4448) std::array<eastl::hash_map<long long, unsigned int>, 25600ul>();
        new (&field_1438048) std::array<eastl::hash_map<long long, unsigned int>, 25600ul>();
        new (&field_2871648) std::array<eastl::hash_map<int, unsigned int>, 25600ul>();
        new (&field_4305248) eastl::hash_map<long long, unsigned int>(local_38);
        new (&field_4305304) eastl::hash_map<long long, unsigned int>(local_38);
        new (&field_4305360) eastl::hash_map<int, unsigned int>(local_38);
        field_4305416 = false;
        field_4305417 = false;
        field_4305418 = false;
        unsigned long arg1 = 0;
        array<HighlightChannelProperties, 32ul>* this_01 = (array<HighlightChannelProperties, 32ul>*)(*this_00)[0];
        array<HighlightChannelProperties, 32ul>* this_02 = (array<HighlightChannelProperties, 32ul>*)(*this_00)[2];
        array<HighlightChannelProperties, 32ul>* this_03 = (array<HighlightChannelProperties, 32ul>*)(*this_00)[4];
        array<HighlightChannelProperties, 32ul>* this_04 = (array<HighlightChannelProperties, 32ul>*)(*this_00)[6];
        array<HighlightChannelProperties, 32ul>* this_05 = (array<HighlightChannelProperties, 32ul>*)(*this_00)[7];
        array<HighlightChannelProperties, 32ul>* this_06 = (array<HighlightChannelProperties, 32ul>*)(*this_00)[1];
        array<HighlightChannelProperties, 32ul>* this_07 = (array<HighlightChannelProperties, 32ul>*)(*this_00)[3];
        array<HighlightChannelProperties, 32ul>* this_08 = (array<HighlightChannelProperties, 32ul>*)(*this_00)[5];
        do {
            lVar1 = (*this_01)[arg1];
            cVar2 = (char)arg1;
            *(char*)(lVar1 + 10) = cVar2;
            lVar1 = (*this_02)[arg1];
            *(char*)(lVar1 + 10) = cVar2;
            lVar1 = (*this_03)[arg1];
            *(char*)(lVar1 + 10) = cVar2;
            lVar1 = (*this_04)[arg1];
            *(char*)(lVar1 + 10) = cVar2;
            lVar1 = (*this_05)[arg1];
            *(char*)(lVar1 + 10) = cVar2;
            lVar1 = (*this_06)[arg1];
            cVar2 = cVar2 + ' ';
            *(char*)(lVar1 + 10) = cVar2;
            lVar1 = (*this_07)[arg1];
            *(char*)(lVar1 + 10) = cVar2;
            lVar1 = (*this_08)[arg1];
            *(char*)(lVar1 + 10) = cVar2;
            arg1 = arg1 + 1;
        } while (arg1 != 32);
    }

    // 0x10000d0a0
    HighlightManager::~HighlightManager() {
        SaveToFiles();
        field_4305360.~hash_map();
        field_4305304.~hash_map();
        field_4305248.~hash_map();
        field_2871648.~array();
        field_1438048.~array();
        field_4448.~array();
        field_4392.~hash_map();
        field_4336.~hash_map();
        field_4280.~hash_map();
        field_4224.~hash_map();
        field_4168.~hash_map();
        field_4112.~hash_map();
    }

    // 0x10000d1f0
    void HighlightManager::SaveToFiles() {
        SaveChanges(field_4168, field_4224, field_4280, field_4336, field_4392, field_4448, field_1438048,
                    field_2871648, field_640);
    }

    // 0x10000dc40
    void HighlightManager::ResetAll() {
        hashtable<LoadingScreenScript::Keyframe*, eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>,
                  eastl::allocator, eastl::use_first<eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>>,
                  eastl::equal_to<LoadingScreenScript::Keyframe*>, eastl::hash<LoadingScreenScript::Keyframe*>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            phVar1;

        unsigned long uVar2 = 0;
        do {
            ((hashtable<int, eastl::pair<int const, minimenu::MinimenuOp>, eastl::allocator,
                        eastl::use_first<eastl::pair<int const, minimenu::MinimenuOp>>, eastl::equal_to<int>,
                        eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>*)field_2871648[uVar2])
                ->clear();
            uVar2 = uVar2 + 1;
        } while (uVar2 != 25600);
        uVar2 = 0;
        do {
            phVar1 = &field_4448[uVar2];
            phVar1->clear();
            uVar2 = uVar2 + 1;
        } while (uVar2 != 25600);
        uVar2 = 0;
        do {
            phVar1 = &field_1438048[uVar2];
            phVar1->clear();
            uVar2 = uVar2 + 1;
        } while (uVar2 != 25600);
        field_4112.clear();
        field_4224.clear();
        field_4280.clear();
        field_4336.clear();
        field_4168.clear();
        field_4392.clear();
        ResetRegionHighlights();
    }

    // 0x10000de50
    void HighlightManager::ResetRegionHighlights() {
        field_4305248.clear();
        field_4305304.clear();
        field_4305360.clear();
    }

    // 0x10000de90
    void HighlightManager::OnMapRebuild(int arg1, int arg2, int arg3, int arg4) {
        field_4096 = arg1 >> 6;
        field_4104 = arg2 >> 6;
        field_4100 = arg3 + arg1 - 1 >> 6;
        field_4108 = arg2 + arg4 - 1 >> 6;
        if (arg3 + arg1 < 6401) {
            ResetRegionHighlights();
        }
    }

    // 0x10000dee0
    void HighlightManager::ForEachLoadedMapSquare(std::function<void(rs2lib::CoordMapSquare const&)> callback) {
        bool bVar1;
        int arg2;
        uint8_t local_38[8];

        int arg1 = field_4096;
        if ((arg1 < 100) && (arg1 <= field_4100)) {
            do {
                arg2 = field_4104;
                if (field_4104 <= field_4108) {
                    do {
                        new (local_38) sidebars::SideBarData(arg1, arg2);
                        std::function<void(rs2lib::CoordMapSquare const&)>::operator()(
                            (function<void(rs2lib::CoordMapSquare const&)>*)callback, (CoordMapSquare*)local_38);
                        bVar1 = arg2 < field_4108;
                        arg2 = arg2 + 1;
                    } while (bVar1);
                }
                bVar1 = arg1 < field_4100;
                arg1 = arg1 + 1;
            } while (bVar1);
        }
    }

    // 0x10000df80
    bool HighlightManager::ConfigureChannel(HighlightCategory highlightCategory, int arg2, unsigned short arg3,
                                            unsigned short arg4, unsigned char arg5,
                                            dash3d::EntityHighlightBitFlags entityHighlightBitFlags) {
        bool result;
        uint8_t* uint8_t;
        bool cVar1;
        long long* plVar4;
        eastl::string* str;
        long lVar5;
        uint64_t in_register_00000012;
        ReturnValue result;
        uint32_t in_register_0000003c;
        function<void(rs2lib::CoordMapSquare const&)>* this_04;
        uint64_t in_register_00000081;
        unsigned short in_stack_00000008;
        ReturnValue local_158;
        HighlightManager* local_148;
        unsigned int* puStack_140;
        bool* local_138;
        HighlightManager* local_130;
        unsigned int* puStack_128;
        bool* local_120;
        HighlightManager* local_118;
        unsigned int* puStack_110;
        bool* local_108;
        ReturnValue local_f8;
        uint64_t uStack_f0;
        ReturnValue local_e8;
        uint64_t uStack_e0;
        function<void(rs2lib::CoordMapSquare const&)> local_c8[48];
        function<void(rs2lib::CoordMapSquare const&)> local_98[48];
        function<void(rs2lib::CoordMapSquare const&)> local_68[48];
        long local_38;

        HighlightManager* this_03 =
            (HighlightManager*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)highlightCategory);
        unsigned int local_fc = (unsigned int)(((uint64_t)in_register_00000012 << 16) | (uint16_t)arg3);
        unsigned int local_d0 = local_fc;
        if (31 < local_fc) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.cpp",
                            133, "Highlight channel ID must be between 0 and %d (inclusive) - Got %d", 31,
                            (((uint64_t)in_register_00000012 << 16) | (uint16_t)arg3) & 4294967295);
        }
        EntityHighlightBitFlags local_d4 = entityHighlightBitFlags;
        array<HighlightChannelProperties, 32ul>* this_00 = &this_03->field_640[(long)arg2];
        HighlightChannelProperties* this_01 = (HighlightChannelProperties*)(*this_00)[(long)(int)local_fc];
        bool local_c9 = (bool)this_01->IsEnabled();
        &result = (ReturnValue*)(long)(int)local_d0;
        unsigned short* puVar3 = (unsigned short*)(*this_00)[(unsigned long)&result];
        *puVar3 = arg4;
        puVar3[1] = (unsigned short)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg5);
        *(char*)(puVar3 + 2) = (char)local_d4;
        puVar3[4] = in_stack_00000008;
        switch (arg2) {
        case 0:
            uint8_t = &this_03->field_4112;
            local_d4 = arg2;
            local_f8 = uint8_t->begin();
            new (&local_e8) eastl::hashtable_iterator(nullptr, nullptr);
            &result = &local_158;
            result = uint8_t->end();
            cVar1 = local_f8 != result;
            if (cVar1) {
                do {
                    local_e8 = local_f8;
                    uStack_e0 = uStack_f0;
                    ++local_e8;
                    lVar5 = local_f8.HeapBeginPtr();
                    cVar1 =
                        EntityNeedsUpdateOnConfigureChannel(this_03, (unsigned int*)(lVar5 + 8), 0, local_d0, local_c9);
                    if (cVar1) {
                        plVar4 = (long long*)local_f8.HeapBeginPtr();
                        UpdateUniqueNPCHighlightOrRemoveIfReused(this_03, *plVar4);
                    }
                    local_f8 = local_e8;
                    uStack_f0 = uStack_e0;
                    local_158 = uint8_t->end();
                    &result = &local_158;
                    cVar1 = local_f8 != local_158;
                } while (cVar1);
            }
            arg2 = local_d4;
            break;
        case 1:
            local_f8 = this_03->field_4224.begin();
            &result = &local_e8;
            result = this_03->field_4224.end();
            cVar1 = local_f8 != result;
            if (cVar1) {
                do {
                    lVar5 = local_f8.HeapBeginPtr();
                    cVar1 =
                        EntityNeedsUpdateOnConfigureChannel(this_03, (unsigned int*)(lVar5 + 8), 1, local_d0, local_c9);
                    if (cVar1) {
                        UpdateCachedHighlights(this_03, (HighlightedGroup*)(lVar5 + 8));
                    }
                    ++local_f8;
                    &result = &local_e8;
                    cVar1 = local_f8 != local_e8;
                } while (cVar1);
            }
            break;
        case 3:
            local_f8 = this_03->field_4280.begin();
            &result = &local_e8;
            result = this_03->field_4280.end();
            cVar1 = local_f8 != result;
            if (cVar1) {
                do {
                    lVar5 = local_f8.HeapBeginPtr();
                    cVar1 =
                        EntityNeedsUpdateOnConfigureChannel(this_03, (unsigned int*)(lVar5 + 8), 3, local_d0, local_c9);
                    if (cVar1) {
                        UpdateCachedHighlights(this_03, (HighlightedGroup*)(lVar5 + 8));
                    }
                    ++local_f8;
                    &result = &local_e8;
                    cVar1 = local_f8 != local_e8;
                } while (cVar1);
            }
            break;
        case 5:
            local_f8 = this_03->field_4336.begin();
            &result = &local_e8;
            result = this_03->field_4336.end();
            cVar1 = local_f8 != result;
            if (cVar1) {
                do {
                    lVar5 = local_f8.HeapBeginPtr();
                    cVar1 =
                        EntityNeedsUpdateOnConfigureChannel(this_03, (unsigned int*)(lVar5 + 8), 5, local_d0, local_c9);
                    if (cVar1) {
                        UpdateCachedHighlights(this_03, (HighlightedGroup*)(lVar5 + 8));
                    }
                    ++local_f8;
                    &result = &local_e8;
                    cVar1 = local_f8 != local_e8;
                } while (cVar1);
            }
            break;
        case 6:
            local_f8 = this_03->field_4168.begin();
            &result = &local_e8;
            result = this_03->field_4168.end();
            cVar1 = local_f8 != result;
            if (cVar1) {
                do {
                    str = (eastl::string*)local_f8.HeapBeginPtr();
                    cVar1 =
                        EntityNeedsUpdateOnConfigureChannel(this_03, (unsigned int*)(str + 32), 6, local_d0, local_c9);
                    if (cVar1) {
                        UpdateUniquePlayerHighlight(this_03, str);
                    }
                    ++local_f8;
                    &result = &local_e8;
                    cVar1 = local_f8 != local_e8;
                } while (cVar1);
            }
            break;
        case 8:
            local_f8 = this_03->field_4392.begin();
            &result = &local_e8;
            result = this_03->field_4392.end();
            cVar1 = local_f8 != result;
            if (cVar1) {
                do {
                    lVar5 = local_f8.HeapBeginPtr();
                    cVar1 = EntityNeedsUpdateOnConfigureChannel(this_03, (unsigned int*)(lVar5 + 360), 8, local_d0,
                                                                local_c9);
                    if (cVar1) {
                        UpdateCachedHighlights(this_03, (HighlightedGroup*)(lVar5 + 360));
                    }
                    ++local_f8;
                    &result = &local_e8;
                    cVar1 = local_f8 != local_e8;
                } while (cVar1);
            }
        }
        auto this_02 = Client::Instance();
        int iVar2 = this_02->IsMapBuildRegionMode();
        if (iVar2 == 0) {
            if (arg2 == 7) {
                puStack_110 = &local_d0;
                local_108 = &local_c9;
                local_118 = this_03;
                std::function<void(rs2lib::CoordMapSquare const&)>::function<
                    HighlightManager::ConfigureChannel(HighlightCategory, int, unsigned short, unsigned short,
                                                       unsigned char, dash3d::EntityHighlightBitFlags)::__2,
                    void>(local_c8, &result);
                ForEachLoadedMapSquare(this_03, (function<void_(rs2lib::CoordMapSquare const&)>*)local_c8);
                this_04 = local_c8;
            } else if (arg2 == 4) {
                puStack_128 = &local_d0;
                local_120 = &local_c9;
                local_130 = this_03;
                std::function<void(rs2lib::CoordMapSquare const&)>::function<
                    HighlightManager::ConfigureChannel(HighlightCategory, int, unsigned short, unsigned short,
                                                       unsigned char, dash3d::EntityHighlightBitFlags)::__1,
                    void>(local_98, &result);
                ForEachLoadedMapSquare(this_03, (function<void_(rs2lib::CoordMapSquare const&)>*)local_98);
                this_04 = local_98;
            } else {
                if (arg2 != 2)
                    goto LAB_10000e6b9;
                puStack_140 = &local_d0;
                local_138 = &local_c9;
                local_148 = this_03;
                std::function<void(rs2lib::CoordMapSquare const&)>::function<
                    HighlightManager::ConfigureChannel(HighlightCategory, int, unsigned short, unsigned short,
                                                       unsigned char, dash3d::EntityHighlightBitFlags)::__0,
                    void>(local_68, &result);
                ForEachLoadedMapSquare(this_03, (function<void_(rs2lib::CoordMapSquare const&)>*)local_68);
                this_04 = local_68;
            }
            this_04->~function();
        } else {
            cVar1 = ShouldRebuildRegionHighlightsForChannel(this_03, local_d0, arg2);
            if (arg2 == 7) {
                UpdateTilesOnConfigureChannel(this_03, (hash_map<int, unsigned int>*)&this_03->field_4305360, local_d0,
                                              local_c9);
                if (cVar1) {
                    this_03->field_4305416 = true;
                }
            } else if (arg2 == 4) {
                UpdateObjsOnConfigureChannel(this_03, (hash_map<long long, unsigned int>*)&this_03->field_4305304,
                                             local_d0, local_c9);
                if (cVar1) {
                    this_03->field_4305418 = true;
                }
            } else if ((arg2 == 2) &&
                       (UpdateLocsOnConfigureChannel(
                            this_03, (hash_map<long long, unsigned int>*)&this_03->field_4305248, local_d0, local_c9),
                        cVar1)) {
                this_03->field_4305417 = true;
            }
        }
    LAB_10000e6b9:
        return local_fc < 32;
    }

    // 0x10000e7c0
    uint8_t HighlightManager::EntityNeedsUpdateOnConfigureChannel(const unsigned int& arg1,
                                                                  HighlightCategory highlightCategory, int arg3,
                                                                  bool arg4) const {
        int iVar1 = GetActiveChannelFromBitmask(arg1, highlightCategory);
        bool bVar2 = false;
        if (((arg1 >> (arg3 & 31U) & 1) != 0) && (arg4)) {
            bVar2 = iVar1 == -1 || arg3 < iVar1;
        }
        return iVar1 == arg3 | bVar2;
    }

    // 0x10000e810
    void HighlightManager::UpdateUniqueNPCHighlightOrRemoveIfReused(long long arg1) {
        int iVar2;
        HighlightChannelProperties* highlightChannelProperties;
        int* arg1_00;
        OpGroup local_198;

        long long local_30 = arg1;
        int iVar1 = ClientNpc::GetShortIDFromUID(arg1);
        auto this_00 = Client::Instance();
        auto this_01 = this_00->GetClientNpc(iVar1);
        if (this_01 != nullptr) {
            iVar1 = CreactionCycleFromNPCKey(local_30);
            iVar2 = this_01->GetCreationCycle();
            if (iVar1 == iVar2) {
                highlightChannelProperties = GetHighlightProperties<long long>(
                    this, &local_30, (hash_map<long long, unsigned int>*)&field_4112, 0);
                if (highlightChannelProperties == nullptr) {
                    arg1_00 = (int*)this_01->field_1024.operator->();
                    highlightChannelProperties = GetGroupHighlightProperties<int>(
                        this, arg1_00, (hash_map<int, HighlightedGroup>*)&field_4224, 1);
                    if (highlightChannelProperties == nullptr) {
                        local_198 = OpGroup::Create(*this_01);
                        highlightChannelProperties = GetGroupHighlightProperties<OpGroup>(
                            this, &local_198, (hash_map<OpGroup, HighlightedGroup>*)&field_4392, 8);
                    }
                }
                this_01->SetHighlight(highlightChannelProperties);
            } else {
                field_4112.erase(local_30);
            }
        }
    }

    // 0x10000e940
    void HighlightManager::UpdateUniquePlayerHighlight(const eastl::string& str) {
        long lVar4;
        eastl::string* str1;
        HighlightChannelProperties* highlightChannelProperties;

        Client::Instance();
        shared_ptr* this_00 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::begin();
        shared_ptr* psVar3 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::end();
        if (this_00 != psVar3) {
            do {
                if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                    lVar4 = (*this_00).operator->();
                    str1 = ((DisplayName*)(*((lVar4 + 992))).operator->())->GetDisplayName();
                    if (*str1 == str) {
                        highlightChannelProperties = GetHighlightProperties<eastl::string>(
                            this, str, (hash_map<eastl::string, unsigned int>*)&field_4168, 6);
                        ((ClientPlayer*)(*this_00).operator->())->SetHighlight(highlightChannelProperties);
                    }
                }
                this_00 = this_00 + 1;
            } while (this_00 != psVar3);
        }
    }

    // 0x10000ea30
    void HighlightManager::UpdateCachedHighlights(HighlightedGroup& highlightedGroup) {
        function<void(EntityWithCoord<ClientObj>&)> local_158[48];
        function<void(EntityWithCoord<dash3d::Sprite>&)> local_128[48];
        function<void(EntityWithCoord<dash3d::GroundDecor>&)> local_f8[48];
        function<void(EntityWithCoord<dash3d::Decor>&)> local_c8[48];
        function<void(EntityWithCoord<dash3d::Wall>&)> local_98[48];
        function<void(ClientNpc const&)> local_68[56];
        long local_30;

        auto this_00 = Client::Instance();
        std::function<void(ClientNpc const&)>::function<
            HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::__3, void>(local_68, (__3*)this);
        auto clientNpcs = this_00->GetNpcList();
        highlightedGroup.ForEachNPC(local_68, *clientNpcs);
        std::function<void(EntityWithCoord<dash3d::Wall>&)>::function<
            HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::__4, void>(local_98, (__4*)this);
        highlightedGroup.ForEachWall(local_98);
        std::function<void(EntityWithCoord<dash3d::Decor>&)>::function<
            HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::__5, void>(local_c8, (__5*)this);
        highlightedGroup.ForEachDecor(local_c8);
        std::function<void(EntityWithCoord<dash3d::GroundDecor>&)>::function<
            HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::__6, void>(local_f8, (__6*)this);
        highlightedGroup.ForEachGroundDecor(local_f8);
        std::function<void(EntityWithCoord<dash3d::Sprite>&)>::function<
            HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::__7, void>(local_128, (__7*)this);
        highlightedGroup.ForEachScenery(local_128);
        std::function<void(EntityWithCoord<ClientObj>&)>::function<
            HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::__8, void>(local_158, (__8*)this);
        highlightedGroup.ForEachObj(local_158);
    }

    // 0x10000ec80
    void HighlightManager::UpdateLocsOnConfigureChannel(eastl::hash_map<long long, unsigned int>& arg1, int arg2,
                                                        bool arg3) {
        bool arg4;
        long long* plVar2;
        uint64_t in_register_00000009;

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        auto local_58 = arg1.begin();
        auto local_48 = arg1.end();
        bool cVar1 = local_58 != local_48;
        if (cVar1) {
            arg4 = local_34._0_1_;
            do {
                plVar2 = (long long*)local_58.HeapBeginPtr();
                cVar1 = EntityNeedsUpdateOnConfigureChannel(*((plVar2 + 1)), 2, arg2, arg4);
                if (cVar1) {
                    UpdateUniqueLocHighlight(*plVar2);
                }
                ++local_58;
                cVar1 = local_58 != local_48;
            } while (cVar1);
        }
    }

    // 0x10000ed40
    void HighlightManager::UpdateObjsOnConfigureChannel(eastl::hash_map<long long, unsigned int>& arg1, int arg2,
                                                        bool arg3) {
        bool arg4;
        long long* plVar2;
        uint64_t in_register_00000009;

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        auto local_58 = arg1.begin();
        auto local_48 = arg1.end();
        bool cVar1 = local_58 != local_48;
        if (cVar1) {
            arg4 = local_34._0_1_;
            do {
                plVar2 = (long long*)local_58.HeapBeginPtr();
                cVar1 = EntityNeedsUpdateOnConfigureChannel(*((plVar2 + 1)), 4, arg2, arg4);
                if (cVar1) {
                    UpdateUniqueObjHighlight(*plVar2);
                }
                ++local_58;
                cVar1 = local_58 != local_48;
            } while (cVar1);
        }
    }

    // 0x10000ee00
    void HighlightManager::UpdateTilesOnConfigureChannel(eastl::hash_map<int, unsigned int>& arg1, int arg2,
                                                         bool arg3) {
        bool arg4;
        int* piVar2;
        uint64_t in_register_00000009;

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        auto local_58 = arg1.begin();
        auto local_48 = arg1.end();
        bool cVar1 = local_58 != local_48;
        if (cVar1) {
            arg4 = local_34._0_1_;
            do {
                piVar2 = (int*)local_58.HeapBeginPtr();
                cVar1 = EntityNeedsUpdateOnConfigureChannel(*((piVar2 + 1)), 7, arg2, arg4);
                if (cVar1) {
                    UpdateUniqueTileHighlight(*piVar2);
                }
                ++local_58;
                cVar1 = local_58 != local_48;
            } while (cVar1);
        }
    }

    // 0x10000ef60
    void HighlightManager::ServiceRegionHighlights() {
        if ((Client::Instance()->IsMapBuildRegionMode() != 0) &&
            (((field_4305416 != false || (field_4305417 != false)) || (field_4305418 != false)))) {
            RebuildRegionHighlights(field_4305416, field_4305417, field_4305418);
        }
        field_4305416 = false;
        field_4305417 = false;
        field_4305418 = false;
    }

    // 0x10000efd0
    void HighlightManager::RebuildRegionHighlights(bool arg1, bool arg2, bool arg3) {
        bool cVar1;
        int iVar3;
        uint64_t* puVar4;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>, eastl::equal_to<eastl::string>,
                  eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar5;
        int* piVar6;
        long long* plVar7;
        uint64_t in_register_00000009;
        uint64_t in_register_00000011;
        uint64_t in_register_00000031;
        ReturnValue local_a8;
        ReturnValue local_98;
        CoordZoneSource local_88;
        int local_4c;
        int local_3c;
        int local_38;

        uint32_t local_48 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        uint32_t local_44 = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        uint32_t local_40 = (uint32_t)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1);
        auto local_70 = Client::Instance();
        int iVar2 = local_70->IsMapBuildRegionMode();
        if (iVar2 == 0) {
            LogAssert("client->IsMapBuildRegionMode()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                      "HighlightManager.cpp",
                      1547, nullptr);
        }
        array<eastl::hash_map<int, unsigned int>, 25600ul>* local_68 =
            (array<eastl::hash_map<int, unsigned int>, 25600ul>*)&field_2871648;
        array<eastl::hash_map<long long, unsigned int>, 25600ul>* local_60 =
            (array<eastl::hash_map<long long, unsigned int>, 25600ul>*)&field_4448;
        array<eastl::hash_map<long long, unsigned int>, 25600ul>* local_58 =
            (array<eastl::hash_map<long long, unsigned int>, 25600ul>*)&field_1438048;
        int local_34 = 0;
        do {
            iVar2 = 0;
            do {
                iVar3 = 0;
                local_4c = iVar2;
                do {
                    puVar4 = (uint64_t*)local_70->GetMapBuildRegionZoneSource(local_34, iVar2, iVar3);
                    local_88._0_8_ = *puVar4;
                    local_88._8_8_ = puVar4[1];
                    cVar1 = local_88.IsSet();
                    if (cVar1) {
                        local_38 = iVar3;
                        iVar2 = local_88.GetMapSquareX();
                        iVar3 = local_88.GetMapSquareZ();
                        local_3c = GetMapSquareIndex(iVar2, iVar3);
                        if ((char)local_40 != '\0') {
                            phVar5 =
                                (hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>,
                                           eastl::allocator,
                                           eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                           eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                           eastl::mod_range_hashing, eastl::default_ranged_hash,
                                           eastl::prime_rehash_policy, false, true, true>*)(*local_68)[(long)local_3c];
                            local_a8 = phVar5->begin();
                            local_98 = phVar5->end();
                            while (cVar1 = local_a8 != local_98, cVar1) {
                                piVar6 = (int*)local_a8.HeapBeginPtr();
                                iVar2 = GetActiveChannelFromBitmask(piVar6[1], 7);
                                cVar1 = ShouldRebuildRegionHighlightsForChannel(iVar2, 7);
                                if (cVar1) {
                                    UpdateUniqueTileHighlight(*piVar6);
                                }
                                ++local_a8;
                            }
                        }
                        iVar2 = local_4c;
                        if ((char)local_44 != '\0') {
                            phVar5 =
                                (hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>,
                                           eastl::allocator,
                                           eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                           eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                           eastl::mod_range_hashing, eastl::default_ranged_hash,
                                           eastl::prime_rehash_policy, false, true, true>*)(*local_60)[(long)local_3c];
                            local_a8 = phVar5->begin();
                            local_98 = phVar5->end();
                            while (cVar1 = local_a8 != local_98, cVar1) {
                                plVar7 = (long long*)local_a8.HeapBeginPtr();
                                iVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(plVar7 + 1), 2);
                                cVar1 = ShouldRebuildRegionHighlightsForChannel(iVar3, 2);
                                if (cVar1) {
                                    UpdateUniqueLocHighlight(*plVar7);
                                }
                                ++local_a8;
                            }
                        }
                        iVar3 = local_38;
                        if ((char)local_48 != '\0') {
                            phVar5 =
                                (hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>,
                                           eastl::allocator,
                                           eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                           eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                           eastl::mod_range_hashing, eastl::default_ranged_hash,
                                           eastl::prime_rehash_policy, false, true, true>*)(*local_58)[(long)local_3c];
                            local_a8 = phVar5->begin();
                            local_98 = phVar5->end();
                            while (cVar1 = local_a8 != local_98, cVar1) {
                                plVar7 = (long long*)local_a8.HeapBeginPtr();
                                iVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(plVar7 + 1), 4);
                                cVar1 = ShouldRebuildRegionHighlightsForChannel(iVar3, 4);
                                if (cVar1) {
                                    UpdateUniqueObjHighlight(*plVar7);
                                }
                                ++local_a8;
                            }
                            iVar3 = local_38;
                        }
                    }
                    iVar3 = iVar3 + 1;
                } while (iVar3 != 13);
                iVar2 = iVar2 + 1;
            } while (iVar2 != 13);
            local_34 = local_34 + 1;
        } while (local_34 != 4);
    }

    // 0x10000f2f0
    int HighlightManager::GetActiveChannelFromBitmask(unsigned int arg1, HighlightCategory highlightCategory) const {
        bool cVar1;
        int iVar2;
        array<HighlightChannelProperties, 32ul>* this_00;

        unsigned int local_34 = arg1;
        do {
            if (local_34 == 0) {
                return -1;
            }
            iVar2 = jag::graphics::FindClearLSB(&local_34);
            this_00 = &field_640[(long)(int)highlightCategory];
            cVar1 = ((HighlightChannelProperties*)(*this_00)[(long)iVar2])->IsEnabled();
        } while (!cVar1);
        return iVar2;
    }

    // 0x10000f380
    void HighlightManager::UpdateUniqueLocHighlight(long long arg1) {
        HighlightManager* pHVar1;
        int iVar3;
        int iVar4;
        int iVar5;
        hash_map<long long, unsigned int>* phVar6;
        HighlightChannelProperties* pHVar7;
        shared_ptr<configdecoder::LocType>* this_01;
        LocType* locType;
        world* pwVar8;
        long lVar9;
        uint64_t* puVar10;
        uint64_t* puVar11;
        unkbyte10 Var12;
        CoordGrid local_f8;
        CoordGrid local_e8;
        shared_ptr local_d8;
        shared_ptr local_c8;
        HighlightChannelProperties* local_b0;
        Client* local_a8;
        hash_map<long long, unsigned int>* local_a0;
        array<eastl::hash_map<long long, unsigned int>, 25600ul>* local_98;
        hash_map<int, HighlightedGroup>* local_90;
        hash_map<OpGroup, HighlightedGroup>* local_88;
        shared_ptr local_80;
        shared_ptr local_70;
        CoordGrid local_60;
        unique_ptr<dash3d::world>* local_48;
        int local_34;

        long long local_50 = arg1;
        HighlightManager* local_40 = this;
        auto this_00 = Client::Instance();
        CoordFromStaticEntityKey((long long)&local_f8);
        CoordGrid local_260(0, 0, 0);
        FindNextOccurrenceOfStoredHighlight(&local_60, &local_f8, (uint8_t)&local_260);
        bool cVar2 = local_60.IsSet();
        if (cVar2) {
            local_a0 = (hash_map<long long, unsigned int>*)&local_40->field_4305248;
            local_98 = (array<eastl::hash_map<long long, unsigned int>, 25600ul>*)&local_40->field_4448;
            local_90 = (hash_map<int, HighlightedGroup>*)&local_40->field_4280;
            local_88 = (hash_map<OpGroup, HighlightedGroup>*)&local_40->field_4392;
            local_48 = (unique_ptr<dash3d::world>*)&this_00->field_19184;
            local_a8 = this_00;
            do {
                cVar2 = ClientConstants::IsCoordInBuildArea(local_60);
                if (cVar2) {
                    local_e8 = this_00->WorldCoordFromBuildCoord(local_60);
                    local_34 = CreactionCycleFromNPCKey(local_50);
                    cVar2 = local_e8.InRegion();
                    pHVar1 = local_40;
                    if (!cVar2) {
                        phVar6 = GetLocHighlightMap(local_40, &local_e8);
                        pHVar7 = GetHighlightProperties<long long>(pHVar1, &local_50, phVar6, 2);
                    } else {
                        local_260.WorldCoordToSourceCoord(this_00);
                        iVar4 = local_34;
                        iVar3 = local_260.ToBitPacked();
                        local_80._0_8_ = UniqueStaticEntityKey(iVar4, iVar3);
                        pHVar1 = local_40;
                        iVar4 = GetActiveChannel<long long>(local_40, &local_50, local_a0, 2);
                        iVar3 = GetMapSquareIndex(&local_260);
                        phVar6 = (hash_map<long long, unsigned int>*)(*local_98)[(long)iVar3];
                        iVar3 = GetActiveChannel<long long>(pHVar1, (long long*)&local_80, phVar6, 2);
                        iVar4 = LowestNonNegativeNumberOrMinusOne(iVar4, iVar3);
                        pHVar7 = (HighlightChannelProperties*)GetHighlightProperties(pHVar1, iVar4, 2);
                    }
                    if ((pHVar7 == nullptr) &&
                        (pHVar7 = GetGroupHighlightProperties<int>(local_40, &local_34, local_90, 3),
                         pHVar7 == nullptr)) {
                        this_01 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(local_34);
                        locType = (LocType*)**this_01;
                        local_260 = OpGroup::Create(*locType);
                        pHVar7 = GetGroupHighlightProperties<OpGroup>(local_40, &local_260, local_88, 8);
                    }
                    local_b0 = pHVar7;
                    local_260 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>();
                    pwVar8 = (world*)(*local_48).operator->();
                    iVar4 = local_60.GetX();
                    iVar3 = local_60.GetZ();
                    iVar5 = local_60.GetPos();
                    local_80 = pwVar8->GetWall(iVar4, iVar3, iVar5);
                    cVar2 = shared_ptr::operator_cast_to_bool(&local_80);
                    if (cVar2) {
                        lVar9 = local_80.operator->();
                        iVar4 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar9 + 56));
                        if (iVar4 == local_34) {
                            local_d8._0_8_ = local_80.operator->();
                            local_d8._0_8_ = local_d8._0_8_ + 64;
                            local_260.push_back(local_d8);
                        }
                    }
                    pwVar8 = (world*)(*local_48).operator->();
                    iVar4 = local_60.GetX();
                    iVar3 = local_60.GetZ();
                    iVar5 = local_60.GetPos();
                    local_d8 = pwVar8->GetDecor(iVar4, iVar3, iVar5);
                    cVar2 = shared_ptr::operator_cast_to_bool(&local_d8);
                    if (cVar2) {
                        lVar9 = local_d8.operator->();
                        iVar4 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar9 + 64));
                        if (iVar4 == local_34) {
                            local_70._0_8_ = local_d8.operator->();
                            local_70._0_8_ = local_70._0_8_ + 76;
                            local_260.push_back(local_70);
                        }
                    }
                    pwVar8 = (world*)(*local_48).operator->();
                    iVar4 = local_60.GetX();
                    iVar3 = local_60.GetZ();
                    iVar5 = local_60.GetPos();
                    local_70 = pwVar8->GetScene(iVar4, iVar3, iVar5);
                    cVar2 = shared_ptr::operator_cast_to_bool(&local_70);
                    if (cVar2) {
                        lVar9 = local_70.operator->();
                        iVar4 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar9 + 80));
                        if (iVar4 == local_34) {
                            local_c8._0_8_ = local_70.operator->();
                            local_c8._0_8_ = local_c8._0_8_ + 92;
                            local_260.push_back(local_c8);
                        }
                    }
                    pwVar8 = (world*)(*local_48).operator->();
                    iVar4 = local_60.GetX();
                    iVar3 = local_60.GetZ();
                    iVar5 = local_60.GetPos();
                    local_c8 = pwVar8->GetGd(iVar4, iVar3, iVar5);
                    cVar2 = shared_ptr::operator_cast_to_bool(&local_c8);
                    if (cVar2) {
                        lVar9 = local_c8.operator->();
                        iVar4 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar9 + 32));
                        if (iVar4 == local_34) {
                            lVar9 = local_c8.operator->();
                            local_260.push_back((EntityHighlight*)(lVar9 + 44));
                        }
                    }
                    cVar2 = local_260.empty();
                    if (!cVar2) {
                        Var12 = HighlightChannelProperties::CreateHighlightData(local_b0);
                        puVar10 = (uint64_t*)local_260.HeapBeginPtr();
                        puVar11 = (uint64_t*)local_260.end();
                        for (; puVar10 != puVar11; puVar10 = puVar10 + 1) {
                            *(unkbyte10*)*puVar10 = Var12;
                        }
                    }
                    this_00 = local_a8;
                }
                FindNextOccurrenceOfStoredHighlight(&local_260, &local_f8, (uint8_t)((CommandLine*)&local_60));
                local_60.m_z = local_260[0].m_z;
                local_60.m_level = local_260[0].m_level;
                local_60.m_x = local_260[0].m_x;
                cVar2 = local_60.IsSet();
            } while (cVar2);
        }
    }

    // 0x10000f970
    void HighlightManager::UpdateUniqueObjHighlight(long long arg1) {
        HighlightManager* pHVar1;
        int iVar3;
        int iVar4;
        Client* pCVar5;
        hash_map<long long, unsigned int>* phVar6;
        HighlightChannelProperties* arg1_00;
        ObjType* objType;
        list<console::Line>* this_00;
        shared_ptr* this_01;
        long lVar7;
        CoordGrid local_a8;
        CoordGrid local_98;
        hash_map<long long, unsigned int>* local_88;
        array<eastl::hash_map<long long, unsigned int>, 25600ul>* local_80;
        hash_map<int, HighlightedGroup>* local_78;
        hash_map<OpGroup, HighlightedGroup>* local_70;
        ReturnValue local_68;
        CoordGrid local_58;
        int local_34;

        long long local_48 = arg1;
        HighlightManager* local_40 = this;
        CoordFromStaticEntityKey((long long)&local_98);
        CoordGrid local_210(0, 0, 0);
        FindNextOccurrenceOfStoredHighlight(&local_58, &local_98, (uint8_t)&local_210);
        bool cVar2 = local_58.IsSet();
        if (cVar2) {
            local_88 = (hash_map<long long, unsigned int>*)&local_40->field_4305304;
            local_80 = (array<eastl::hash_map<long long, unsigned int>, 25600ul>*)&local_40->field_1438048;
            local_78 = (hash_map<int, HighlightedGroup>*)&local_40->field_4336;
            local_70 = (hash_map<OpGroup, HighlightedGroup>*)&local_40->field_4392;
            do {
                cVar2 = ClientConstants::IsCoordInBuildArea(local_58);
                if (cVar2) {
                    pCVar5 = Client::Instance();
                    local_a8 = pCVar5->WorldCoordFromBuildCoord(local_58);
                    local_34 = CreactionCycleFromNPCKey(local_48);
                    cVar2 = local_a8.InRegion();
                    pHVar1 = local_40;
                    if (!cVar2) {
                        phVar6 = GetObjHighlightMap(local_40, &local_a8);
                        arg1_00 = GetHighlightProperties<long long>(pHVar1, &local_48, phVar6, 4);
                    } else {
                        pCVar5 = Client::Instance();
                        local_210.WorldCoordToSourceCoord(pCVar5);
                        iVar4 = local_34;
                        iVar3 = local_210.ToBitPacked();
                        local_68[0] = (ReturnValue)UniqueStaticEntityKey(iVar4, iVar3);
                        pHVar1 = local_40;
                        iVar4 = GetActiveChannel<long long>(local_40, &local_48, local_88, 4);
                        iVar3 = GetMapSquareIndex(&local_210);
                        phVar6 = (hash_map<long long, unsigned int>*)(*local_80)[(long)iVar3];
                        iVar3 = GetActiveChannel<long long>(pHVar1, &local_68, phVar6, 4);
                        iVar4 = LowestNonNegativeNumberOrMinusOne(iVar4, iVar3);
                        arg1_00 = (HighlightChannelProperties*)GetHighlightProperties(pHVar1, iVar4, 4);
                    }
                    if (arg1_00 == nullptr) {
                        arg1_00 = GetGroupHighlightProperties<int>(local_40, &local_34, local_78, 5);
                        if (arg1_00 == nullptr) {
                            local_68 = configdecoder::ObjType::List(local_34);
                            objType = (ObjType*)*local_68;
                            local_210 = OpGroup::Create(*objType);
                            arg1_00 = GetGroupHighlightProperties<OpGroup>(local_40, &local_210, local_70, 8);
                        }
                    }
                    pCVar5 = Client::Instance();
                    this_00 = (list<console::Line>*)pCVar5->GetObjectsOnTile(local_58);
                    local_210 = this_00->begin();
                    local_68 = this_00->end();
                    while (cVar2 = local_210 != local_68, cVar2) {
                        this_01 = (shared_ptr*)*local_210;
                        cVar2 = shared_ptr::operator_cast_to_bool(this_01);
                        if ((cVar2) && (lVar7 = (*this_01).operator->(), *(int*)(lVar7 + 24) == local_34)) {
                            ((SystemSettings*)(*this_01).operator->())->SetLanguage(arg1_00);
                            pCVar5 = Client::Instance();
                            iVar4 = local_58.GetZ();
                            iVar3 = local_58.GetPos();
                            pCVar5->ShowObject(iVar4, iVar3);
                        }
                        ++local_210;
                    }
                }
                FindNextOccurrenceOfStoredHighlight(&local_210, &local_98, (uint8_t)((CommandLine*)&local_58));
                local_58.m_z = local_210[0].m_z;
                local_58.m_level = local_210[0].m_level;
                local_58.m_x = local_210[0].m_x;
                cVar2 = local_58.IsSet();
            } while (cVar2);
        }
    }

    // 0x10000fcf0
    void HighlightManager::UpdateUniqueTileHighlight(int arg1) {
        HighlightManager* pHVar1;
        unsigned int uVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        world* this_01;
        hash_map<int, unsigned int>* phVar7;
        Client* local_98;
        unique_ptr<dash3d::world>* local_90;
        hash_map<int, unsigned int>* local_88;
        array<eastl::hash_map<int, unsigned int>, 25600ul>* local_80;
        CoordGrid local_78;
        EntityHighlight local_68;
        HighlightChannelProperties* local_58;
        CommandLine_vtbl* local_50;
        EnumOptionToggle local_48;
        int local_34;

        HighlightManager* local_40 = this;
        int local_38 = arg1;
        auto this_00 = Client::Instance();
        CoordGrid local_a8(local_38);
        new (&local_50) rs2lib::CoordGrid(0, 0, 0);
        FindNextOccurrenceOfStoredHighlight(&local_78, &local_a8, (uint8_t)((CoordGrid*)&local_50));
        bool cVar2 = local_78.IsSet();
        if (cVar2) {
            local_88 = (hash_map<int, unsigned int>*)&local_40->field_4305360;
            local_80 = (array<eastl::hash_map<int, unsigned int>, 25600ul>*)&local_40->field_2871648;
            local_90 = (unique_ptr<dash3d::world>*)&this_00->field_19184;
            local_98 = this_00;
            do {
                cVar2 = ClientConstants::IsCoordInBuildArea(local_78);
                if (cVar2) {
                    local_50 = this_00->WorldCoordFromBuildCoord(local_78);
                    cVar2 = local_50.InRegion();
                    pHVar1 = local_40;
                    if (!cVar2) {
                        phVar7 = GetTileHighlightMap(local_40, (CoordGrid*)&local_50);
                        iVar5 = 7;
                        local_58 = GetHighlightProperties<int>(pHVar1, &local_38, phVar7, 7);
                    } else {
                        local_68.WorldCoordToSourceCoord(this_00);
                        local_34 = local_50.ToBitPacked();
                        pHVar1 = local_40;
                        iVar4 = GetActiveChannel<int>(local_40, &local_34, local_88, 7);
                        local_34 = local_68.ToBitPacked();
                        iVar5 = GetMapSquareIndex((CoordGrid*)&local_68);
                        phVar7 = (hash_map<int, unsigned int>*)(*local_80)[(long)iVar5];
                        iVar5 = 7;
                        iVar6 = GetActiveChannel<int>(pHVar1, &local_34, phVar7, 7);
                        iVar4 = LowestNonNegativeNumberOrMinusOne(iVar4, iVar6);
                        local_58 = (HighlightChannelProperties*)GetHighlightProperties(pHVar1, iVar4, 7);
                    }
                    uVar3 = local_78.GetX();
                    iVar4 = local_78.GetZ();
                    iVar6 = local_78.GetPos();
                    iVar5 = ((ClientBuild*)(unsigned long)uVar3)->GetLinkBelowLevel(iVar4, iVar6, iVar5);
                    this_01 = (world*)(*local_90).operator->();
                    iVar4 = local_78.GetZ();
                    iVar6 = local_78.GetPos();
                    local_68._0_10_ = HighlightChannelProperties::CreateHighlightData(local_58);
                    this_01->SetTileHighlight(iVar5, iVar4, iVar6, local_68);
                    this_00 = local_98;
                }
                FindNextOccurrenceOfStoredHighlight((CoordGrid*)&local_50, &local_a8,
                                                    (uint8_t)((CommandLine*)&local_78));
                local_78.m_z = local_48;
                local_78._0_8_ = local_50;
                cVar2 = local_78.IsSet();
            } while (cVar2);
        }
    }

    // 0x10000ff80
    void HighlightManager::ClearHighlights(HighlightCategory highlightCategory, int arg2) {
        uint8_t* puVar1;
        HighlightManager* this_00;
        unsigned int uVar2;
        bool cVar4;
        int iVar5;
        long long* plVar6;
        eastl::string* pbVar7;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>, eastl::equal_to<eastl::string>,
                  eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar8;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>, eastl::equal_to<eastl::string>,
                  eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar9;
        int* piVar10;
        OpGroup* opGroup;
        CoordGrid local_78;
        ReturnValue local_58;
        uint64_t uStack_50;
        ReturnValue local_48;
        uint64_t uStack_40;

        if (31 < (unsigned int)arg2) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.cpp",
                            327, "Highlight channel ID must be between 0 and %d (inclusive) - Got %d", 31,
                            (unsigned long)(unsigned int)arg2);
        }
        HighlightManager* local_68 = this;
        unsigned int local_5c = arg2;
        switch (highlightCategory) {
        case 0:
            puVar1 = &field_4112;
            local_48 = puVar1->begin();
            new (&local_58) eastl::hashtable_iterator(&local_48);
            local_78 = puVar1->end();
            cVar4 = local_48 != local_78;
            if (cVar4) {
                do {
                    ++local_58;
                    plVar6 = (long long*)local_48.HeapBeginPtr();
                    if (RemoveEntityHighlight<long long>(local_68, plVar6, (hash_map<long long, unsigned int>*)puVar1,
                                                         arg2, 0)) {
                        plVar6 = (long long*)local_48.HeapBeginPtr();
                        UpdateUniqueNPCHighlightOrRemoveIfReused(local_68, *plVar6);
                    }
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    local_78 = puVar1->end();
                    cVar4 = local_48 != local_78;
                } while (cVar4);
            }
            break;
        case 1:
            puVar1 = &field_4224;
            local_48 = puVar1->begin();
            new (&local_58) eastl::hashtable_iterator(&local_48);
            local_78 = puVar1->end();
            cVar4 = local_48 != local_78;
            if (cVar4) {
                do {
                    ++local_58;
                    piVar10 = (int*)local_48.HeapBeginPtr();
                    RemoveNPCTypeHighlight(*piVar10, arg2);
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    local_78 = puVar1->end();
                    cVar4 = local_48 != local_78;
                } while (cVar4);
            }
            break;
        case 2:
            phVar8 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                std::array<eastl::hash_map<long long, unsigned int>, 25600ul>::begin();
            phVar9 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                std::array<eastl::hash_map<long long, unsigned int>, 25600ul>::end();
            if (phVar8 != phVar9) {
                do {
                    local_48 = phVar8->begin();
                    new (&local_58) eastl::hashtable_iterator(&local_48);
                    while (true) {
                        local_78 = phVar8->end();
                        cVar4 = local_48 != local_78;
                        if (!cVar4)
                            break;
                        ++local_58;
                        plVar6 = (long long*)local_48.HeapBeginPtr();
                        iVar5 = CreactionCycleFromNPCKey(*plVar6);
                        arg2 = local_5c;
                        CoordFromStaticEntityKey((long long)&local_78);
                        RemoveLocHighlight(local_68, iVar5, &local_78, arg2, false);
                        local_48 = local_58;
                        uStack_40 = uStack_50;
                    }
                    phVar8 = phVar8 + 56;
                } while (phVar8 != phVar9);
            }
            puVar1 = &local_68->field_4305248;
            local_48 = puVar1->begin();
            new (&local_58) eastl::hashtable_iterator(&local_48);
            local_78 = puVar1->end();
            cVar4 = local_48 != local_78;
            if (cVar4) {
                do {
                    ++local_58;
                    plVar6 = (long long*)local_48.HeapBeginPtr();
                    iVar5 = CreactionCycleFromNPCKey(*plVar6);
                    CoordFromStaticEntityKey((long long)&local_78);
                    RemoveLocHighlight(local_68, iVar5, &local_78, arg2, false);
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    local_78 = puVar1->end();
                    cVar4 = local_48 != local_78;
                } while (cVar4);
            }
            break;
        case 3:
            puVar1 = &field_4280;
            local_48 = puVar1->begin();
            new (&local_58) eastl::hashtable_iterator(&local_48);
            local_78 = puVar1->end();
            cVar4 = local_48 != local_78;
            if (cVar4) {
                do {
                    ++local_58;
                    piVar10 = (int*)local_48.HeapBeginPtr();
                    RemoveLocTypeHighlight(*piVar10, arg2);
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    local_78 = puVar1->end();
                    cVar4 = local_48 != local_78;
                } while (cVar4);
            }
            break;
        case 4:
            phVar8 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                std::array<eastl::hash_map<long long, unsigned int>, 25600ul>::begin();
            phVar9 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                std::array<eastl::hash_map<long long, unsigned int>, 25600ul>::end();
            if (phVar8 != phVar9) {
                do {
                    local_48 = phVar8->begin();
                    new (&local_58) eastl::hashtable_iterator(&local_48);
                    local_78 = phVar8->end();
                    cVar4 = local_48 != local_78;
                    while (cVar4) {
                        ++local_58;
                        plVar6 = (long long*)local_48.HeapBeginPtr();
                        iVar5 = CreactionCycleFromNPCKey(*plVar6);
                        this = local_68;
                        CoordFromStaticEntityKey((long long)&local_78);
                        RemoveObjHighlight(iVar5, local_78, local_5c, false);
                        local_48 = local_58;
                        uStack_40 = uStack_50;
                        local_78 = phVar8->end();
                        cVar4 = local_48 != local_78;
                    }
                    phVar8 = phVar8 + 56;
                } while (phVar8 != phVar9);
            }
            puVar1 = &field_4305304;
            local_48 = puVar1->begin();
            new (&local_58) eastl::hashtable_iterator(&local_48);
            local_78 = puVar1->end();
            cVar4 = local_48 != local_78;
            uVar2 = local_5c;
            if (cVar4) {
                do {
                    ++local_58;
                    plVar6 = (long long*)local_48.HeapBeginPtr();
                    iVar5 = CreactionCycleFromNPCKey(*plVar6);
                    CoordFromStaticEntityKey((long long)&local_78);
                    RemoveObjHighlight(local_68, iVar5, &local_78, uVar2, false);
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    local_78 = puVar1->end();
                    cVar4 = local_48 != local_78;
                } while (cVar4);
            }
            break;
        case 5:
            puVar1 = &field_4336;
            local_48 = puVar1->begin();
            new (&local_58) eastl::hashtable_iterator(&local_48);
            local_78 = puVar1->end();
            cVar4 = local_48 != local_78;
            if (cVar4) {
                do {
                    ++local_58;
                    piVar10 = (int*)local_48.HeapBeginPtr();
                    RemoveObjTypeHighlight(*piVar10, arg2);
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    local_78 = puVar1->end();
                    cVar4 = local_48 != local_78;
                } while (cVar4);
            }
            break;
        case 6:
            puVar1 = &field_4168;
            local_48 = puVar1->begin();
            new (&local_58) eastl::hashtable_iterator(&local_48);
            local_78 = puVar1->end();
            uVar2 = local_5c;
            cVar4 = local_48 != local_78;
            if (cVar4) {
                do {
                    ++local_58;
                    pbVar7 = (eastl::string*)local_48.HeapBeginPtr();
                    if (RemoveEntityHighlight<eastl::string>(
                            local_68, pbVar7, (hash_map<eastl::string, unsigned int>*)puVar1, uVar2, 6)) {
                        pbVar7 = (eastl::string*)local_48.HeapBeginPtr();
                        UpdateUniquePlayerHighlight(local_68, pbVar7);
                    }
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    local_78 = puVar1->end();
                    cVar4 = local_48 != local_78;
                } while (cVar4);
            }
            break;
        case 7:
            phVar8 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                std::array<eastl::hash_map<int, unsigned int>, 25600ul>::begin();
            phVar9 = (hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                std::array<eastl::hash_map<int, unsigned int>, 25600ul>::end();
            uVar2 = local_5c;
            if (phVar8 != phVar9) {
                do {
                    local_48 = phVar8->begin();
                    new (&local_58) eastl::hashtable_iterator(&local_48);
                    while (true) {
                        local_78 = phVar8->end();
                        cVar4 = local_48 != local_78;
                        if (!cVar4)
                            break;
                        ++local_58;
                        piVar10 = (int*)local_48.HeapBeginPtr();
                        local_78 = rs2lib::CoordGrid(*piVar10);
                        RemoveTileHighlight(local_68, &local_78, uVar2, false);
                        local_48 = local_58;
                        uStack_40 = uStack_50;
                    }
                    phVar8 = phVar8 + 56;
                } while (phVar8 != phVar9);
            }
            this_00 = local_68;
            puVar1 = &local_68->field_4305360;
            local_48 = puVar1->begin();
            new (&local_58) eastl::hashtable_iterator(&local_48);
            local_78 = puVar1->end();
            cVar4 = local_48 != local_78;
            uVar2 = local_5c;
            if (cVar4) {
                do {
                    ++local_58;
                    piVar10 = (int*)local_48.HeapBeginPtr();
                    local_78 = rs2lib::CoordGrid(*piVar10);
                    RemoveTileHighlight(this_00, &local_78, uVar2, false);
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    local_78 = puVar1->end();
                    cVar4 = local_48 != local_78;
                } while (cVar4);
            }
            break;
        case 8:
            puVar1 = &field_4392;
            local_48 = puVar1->begin();
            new (&local_58) eastl::hashtable_iterator(&local_48);
            local_78 = puVar1->end();
            cVar4 = local_48 != local_78;
            if (cVar4) {
                do {
                    ++local_58;
                    opGroup = (OpGroup*)local_48.HeapBeginPtr();
                    RemoveOpGroupHighlight(*opGroup, arg2);
                    local_48 = local_58;
                    uStack_40 = uStack_50;
                    local_78 = puVar1->end();
                    cVar4 = local_48 != local_78;
                } while (cVar4);
            }
            break;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.cpp",
                            486, "Invalid highlight category");
        }
    }

    // 0x100010a70: CreactionCycleFromNPCKey(long long) has the same machine code as TypeIDFromStaticEntityKey(long long)

    // 0x100010aa0
    void HighlightManager::RemoveLocHighlight(int arg1, const rs2lib::CoordGrid& coordGrid, unsigned int arg3,
                                              bool arg4) {
        uint64_t in_register_00000081;
        CoordGrid local_48;

        if ((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) == 0) {
            local_48 = rs2lib::CoordGrid(coordGrid);
        } else {
            local_48.WorldCoordToSourceCoord(Client::Instance());
        }
        auto arg2_00 = GetLocHighlightMap(local_48);
        int arg2 = local_48.ToBitPacked();
        long long local_38 = UniqueStaticEntityKey(arg1, arg2);
        if (RemoveEntityHighlight<long long>(this, &local_38, arg2_00, arg3, 2)) {
            UpdateUniqueLocHighlight(local_38);
        }
        UpdateSave(local_48, 2, arg3, false);
    }

    // 0x100010b60
    void HighlightManager::RemoveObjHighlight(int arg1, const rs2lib::CoordGrid& coordGrid, unsigned int arg3,
                                              bool arg4) {
        uint64_t in_register_00000081;
        CoordGrid local_48;

        if ((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) == 0) {
            local_48 = rs2lib::CoordGrid(coordGrid);
        } else {
            local_48.WorldCoordToSourceCoord(Client::Instance());
        }
        auto arg2_00 = GetObjHighlightMap(local_48);
        int arg2 = local_48.ToBitPacked();
        long long local_38 = UniqueStaticEntityKey(arg1, arg2);
        if (RemoveEntityHighlight<long long>(this, &local_38, arg2_00, arg3, 4)) {
            UpdateUniqueObjHighlight(local_38);
        }
        UpdateSave(local_48, 4, arg3, false);
    }

    // 0x100010d80
    void HighlightManager::RemoveTileHighlight(const rs2lib::CoordGrid& coordGrid, unsigned int arg2, bool arg3) {
        uint64_t in_register_00000009;
        CoordGrid local_38;

        if ((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) == 0) {
            local_38 = rs2lib::CoordGrid(coordGrid);
        } else {
            local_38.WorldCoordToSourceCoord(Client::Instance());
        }
        auto arg2_00 = GetTileHighlightMap(local_38);
        local_38._12_4_ = local_38.ToBitPacked();
        if (RemoveEntityHighlight<int>(this, (int*)&local_38.field_12, arg2_00, arg2, 7)) {
            UpdateUniqueTileHighlight(local_38._12_4_);
        }
        UpdateSave(local_38, 7, arg2, false);
    }

    // 0x100010e30
    void HighlightManager::RemoveNPCTypeHighlight(int arg1, unsigned int arg2) {
        int local_1c = arg1;
        RemoveGroupHighlight<int>(this, &local_1c, (hash_map<int, HighlightedGroup>*)&field_4224, arg2, 1);
        UpdateSave(1, arg2, false);
    }

    // 0x100010e80
    void HighlightManager::RemoveLocTypeHighlight(int arg1, unsigned int arg2) {
        int local_1c = arg1;
        RemoveGroupHighlight<int>(this, &local_1c, (hash_map<int, HighlightedGroup>*)&field_4280, arg2, 3);
        UpdateSave(3, arg2, false);
    }

    // 0x100010ed0
    void HighlightManager::RemoveObjTypeHighlight(int arg1, unsigned int arg2) {
        int local_1c = arg1;
        RemoveGroupHighlight<int>(this, &local_1c, (hash_map<int, HighlightedGroup>*)&field_4336, arg2, 5);
        UpdateSave(5, arg2, false);
    }

    // 0x100010f20
    void HighlightManager::RemoveOpGroupHighlight(const OpGroup& opGroup, unsigned int arg2) {
        RemoveGroupHighlight<OpGroup>(this, opGroup, (hash_map<OpGroup, HighlightedGroup>*)&field_4392, arg2, 8);
        UpdateSave(8, arg2, false);
    }

    // 0x100010fb0
    bool HighlightManager::AddNewChannelToMask(int arg1, unsigned int* arg2, HighlightCategory highlightCategory) {
        int iVar1 = GetActiveChannelFromBitmask(*arg2, highlightCategory);
        unsigned int arg1_00 = *arg2 | 1 << (arg1 & 31U);
        *arg2 = arg1_00;
        int iVar2 = GetActiveChannelFromBitmask(arg1_00, highlightCategory);
        return iVar1 != iVar2;
    }

    // 0x100011000
    void HighlightManager::AddNPCHighlight(int arg1, int arg2, unsigned int arg3) {
        long long local_20 = UniqueNPCKey(arg1, arg2);
        if (AddEntityHighlight<long long>(this, &local_20, (hash_map<long long, unsigned int>*)&field_4112, arg3, 0)) {
            UpdateUniqueNPCHighlightOrRemoveIfReused(local_20);
        }
    }

    // 0x100011090
    rs2lib::CoordGrid UnpackCoord(int arg1, bool arg2, int* arg3) {
        uint64_t in_register_00000011;
        ReturnValue local_38;
        uint32_t local_30;

        rs2lib::CoordGrid result(arg1);
        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            if (result.InRegion() != '\0') {
                local_38.WorldCoordToSourceCoord(Client::Instance());
                *(uint32_t*)(&result + 1) = local_30;
                result = local_38;
                if (arg3 != nullptr) {
                    *arg3 = arg1;
                }
            }
        }
        return result;
    }

    // 0x100011100
    void HighlightManager::AddLocHighlight(int arg1, const rs2lib::CoordGrid& coordGrid, unsigned int arg3, bool arg4,
                                           bool arg5) {
        uint64_t in_register_00000081;
        uint32_t in_register_00000089;
        CoordGrid local_50;

        register0x00000089 = in_register_00000089;
        if ((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) == 0) {
            local_50 = rs2lib::CoordGrid(coordGrid);
        } else {
            local_50.WorldCoordToSourceCoord(Client::Instance());
        }
        auto arg2_00 = GetLocHighlightMap(local_50);
        int arg2 = local_50.ToBitPacked();
        long long local_40 = UniqueStaticEntityKey(arg1, arg2);
        if (AddEntityHighlight<long long>(this, &local_40, arg2_00, arg3, 2)) {
            UpdateUniqueLocHighlight(local_40);
        }
        UpdateSave(local_50, 2, arg3, arg5);
    }

    // 0x100011220
    void HighlightManager::UpdateSave(const rs2lib::CoordGrid& coordGrid, HighlightCategory highlightCategory, int arg3,
                                      bool arg4) {
        array<HighlightChannelProperties, 32ul>* this_00;
        uint32_t in_register_00000081;
        uint8_t local_30[8];

        if ((((uint32_t)in_register_00000081 << 8) | (uint8_t)arg4) == 0) {
            if (!(coordGrid.InRegion())) {
                this_00 = &field_640[(long)(int)highlightCategory];
                if (((EntityHighlight*)(*this_00)[(long)arg3])->SaveToFileEnable()) {
                    new (local_30) rs2lib::CoordMapSquare(coordGrid);
                    OnHighlightUpdate(highlightCategory, *local_30);
                }
            }
        }
    }

    // 0x1000112a0
    void HighlightManager::AddObjHighlight(int arg1, const rs2lib::CoordGrid& coordGrid, unsigned int arg3, bool arg4,
                                           bool arg5) {
        uint64_t in_register_00000081;
        uint32_t in_register_00000089;
        CoordGrid local_50;

        register0x00000089 = in_register_00000089;
        if ((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) == 0) {
            local_50 = rs2lib::CoordGrid(coordGrid);
        } else {
            local_50.WorldCoordToSourceCoord(Client::Instance());
        }
        auto arg2_00 = GetObjHighlightMap(local_50);
        int arg2 = local_50.ToBitPacked();
        long long local_40 = UniqueStaticEntityKey(arg1, arg2);
        if (AddEntityHighlight<long long>(this, &local_40, arg2_00, arg3, 4)) {
            UpdateUniqueObjHighlight(local_40);
        }
        UpdateSave(local_50, 4, arg3, arg5);
    }

    // 0x1000113b0
    void HighlightManager::AddPlayerHighlight(const eastl::string& str, unsigned int arg2, bool arg3) {
        if (AddEntityHighlight<eastl::string>(this, str, (hash_map<eastl::string, unsigned int>*)&field_4168, arg2,
                                              6)) {
            UpdateUniquePlayerHighlight(str);
        }
        UpdateSave(6, arg2, arg3);
    }

    // 0x100011450
    void HighlightManager::UpdateSave(HighlightCategory highlightCategory, int arg2, bool arg3) {
        array<HighlightChannelProperties, 32ul>* this_00;
        uint32_t in_register_00000009;

        if ((((uint32_t)in_register_00000009 << 8) | (uint8_t)arg3) == 0) {
            this_00 = &field_640[(long)(int)highlightCategory];
            if (((EntityHighlight*)(*this_00)[(long)arg2])->SaveToFileEnable() != '\0') {
                OnHighlightUpdate(highlightCategory);
            }
        }
    }

    // 0x1000114b0
    void HighlightManager::AddTileHighlight(const rs2lib::CoordGrid& coordGrid, unsigned int arg2, bool arg3,
                                            bool arg4) {
        uint64_t in_register_00000009;
        CoordGrid local_40;

        if ((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) == 0) {
            local_40 = rs2lib::CoordGrid(coordGrid);
        } else {
            local_40.WorldCoordToSourceCoord(Client::Instance());
        }
        auto arg2_00 = GetTileHighlightMap(local_40);
        local_40._12_4_ = local_40.ToBitPacked();
        if (AddEntityHighlight<int>(this, (int*)&local_40.field_12, arg2_00, arg2, 7)) {
            UpdateUniqueTileHighlight(local_40._12_4_);
        }
        UpdateSave(local_40, 7, arg2, arg4);
    }

    // 0x1000115f0
    void HighlightManager::AddNPCTypeHighlight(int arg1, unsigned int arg2, bool arg3) {
        bool cVar1;
        int iVar2;
        int arg1_00;
        HighlightedGroup* highlightedGroup;
        array<HighlightChannelProperties, 32ul>* this_00;
        Client* this_02;
        long lVar3;
        int* piVar4;
        uint64_t in_register_00000009;
        int arg1_01;
        SeparatedIndexCount local_60;
        unsigned int local_4c;
        HighlightedGroup* local_48;
        uint32_t local_38;
        char local_31;

        if (arg2 < 32) {
            highlightedGroup = (HighlightedGroup*)field_4224[arg1];
            if (*(int*)highlightedGroup == 0) {
                local_38 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
                *(int*)highlightedGroup = 1 << ((uint8_t)arg2 & 31);
                local_48 = highlightedGroup;
                this_00 = &field_640[1];
                local_31 = ((HighlightChannelProperties*)(*this_00)[(unsigned long)arg2])->IsEnabled();
                this_02 = Client::Instance();
                iVar2 = this_02->GetLastNpcNum();
                if (iVar2 < 1) {
                } else {
                    arg1_01 = 0;
                    local_4c = arg2;
                    do {
                        arg1_00 = this_02->GetLastNpcId(arg1_01);
                        lVar3 = this_02->GetClientNpc(arg1_00);
                        if (lVar3 != 0) {
                            cVar1 = ((lVar3 + 1024))->operator_cast_to_bool();
                            if ((cVar1) && (piVar4 = (int*)(*((lVar3 + 1024))).operator->(), *piVar4 == arg1)) {
                                local_60 = dash3d::AnimateBaseOperation::SeparatedIndexCount(arg1, arg1_00);
                                local_48->CacheEntity(local_60);
                            }
                        }
                        arg1_01 = arg1_01 + 1;
                    } while (iVar2 != arg1_01);
                    this = this;
                    arg2 = local_4c;
                }
                arg3 = (uint8_t)local_38;
                highlightedGroup = local_48;
                cVar1 = local_31;
            } else {
                cVar1 = AddNewChannelToMask(arg2, highlightedGroup, 1);
            }
            if (cVar1) {
                UpdateCachedHighlights(*highlightedGroup);
            }
            UpdateSave(1, arg2, arg3);
        }
    }

    // 0x1000117d0
    void HighlightManager::AddLocTypeHighlight(int arg1, unsigned int arg2, bool arg3) {
        int iVar1;
        bool cVar2;
        int iVar3;
        HighlightedGroup* highlightedGroup;
        array<HighlightChannelProperties, 32ul>* this_00;
        long lVar4;
        uint64_t in_register_00000009;
        int arg2_00;
        int arg3_00;
        shared_ptr<dash3d::Decor> local_100;
        shared_ptr<RSevenDebugPresetProvider> local_f0;
        shared_ptr<dash3d::Decor> local_e0;
        shared_ptr<dash3d::Decor> local_d0;
        shared_ptr local_c0;
        Client* local_b0;
        CoordGrid local_a0;
        shared_ptr local_90;
        shared_ptr local_80;
        CoordGrid local_70;
        unsigned int local_58;
        uint32_t local_54;
        world* local_50;
        HighlightedGroup* local_48;
        int local_40;
        int local_38;
        char local_31;

        if (arg2 < 32) {
            highlightedGroup = (HighlightedGroup*)field_4280[arg1];
            if (*(int*)highlightedGroup == 0) {
                local_54 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
                *(int*)highlightedGroup = 1 << ((uint8_t)arg2 & 31);
                local_48 = highlightedGroup;
                this_00 = &field_640[3];
                local_58 = arg2;
                local_31 = ((HighlightChannelProperties*)(*this_00)[(unsigned long)arg2])->IsEnabled();
                local_b0 = Client::Instance();
                local_50 = (world*)local_b0->field_19184.get();
                local_38 = 0;
                do {
                    arg2_00 = 0;
                    do {
                        arg3_00 = 0;
                        do {
                            iVar1 = local_38;
                            local_a0 = rs2lib::CoordGrid(local_38, arg2_00, arg3_00);
                            local_70 = local_b0->WorldCoordFromBuildCoord(local_a0);
                            local_40 = local_70.ToBitPacked();
                            local_a0 = local_50->GetWall(iVar1, arg2_00, arg3_00);
                            cVar2 = local_a0.operator_cast_to_bool();
                            if (cVar2) {
                                lVar4 = local_a0.operator->();
                                iVar3 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar4 + 56));
                                iVar1 = arg1;
                                if (iVar3 == arg1) {
                                    local_e0 = shared_ptr(&local_a0);
                                    local_70 = EntityWithCoord(local_40, iVar1, &local_e0);
                                    local_48->CacheEntity(local_70);
                                }
                            }
                            local_90 = local_50->GetDecor(local_38, arg2_00, arg3_00);
                            cVar2 = shared_ptr::operator_cast_to_bool(&local_90);
                            if (cVar2) {
                                lVar4 = local_90.operator->();
                                iVar3 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar4 + 64));
                                iVar1 = arg1;
                                if (iVar3 == arg1) {
                                    local_d0 = shared_ptr(&local_90);
                                    local_70 = EntityWithCoord(local_40, iVar1, &local_d0);
                                    local_48->CacheEntity(local_70);
                                }
                            }
                            local_80 = local_50->GetScene(local_38, arg2_00, arg3_00);
                            cVar2 = shared_ptr::operator_cast_to_bool(&local_80);
                            if (cVar2) {
                                lVar4 = local_80.operator->();
                                iVar3 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar4 + 80));
                                iVar1 = arg1;
                                if (iVar3 == arg1) {
                                    local_100 = shared_ptr(&local_80);
                                    local_70 = EntityWithCoord(local_40, iVar1, &local_100);
                                    local_48->CacheEntity(local_70);
                                }
                            }
                            local_c0 = local_50->GetGd(local_38, arg2_00, arg3_00);
                            cVar2 = shared_ptr::operator_cast_to_bool(&local_c0);
                            if (cVar2) {
                                lVar4 = local_c0.operator->();
                                iVar3 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar4 + 32));
                                iVar1 = arg1;
                                if (iVar3 == arg1) {
                                    local_f0 = shared_ptr(&local_c0);
                                    local_70 = EntityWithCoord(local_40, iVar1, &local_f0);
                                    local_48->CacheEntity(local_70);
                                }
                            }
                            arg3_00 = arg3_00 + 1;
                        } while (arg3_00 != 103);
                        arg2_00 = arg2_00 + 1;
                    } while (arg2_00 != 103);
                    local_38 = local_38 + 1;
                } while (local_38 != 4);
                arg3 = (uint8_t)local_54;
                local_38 = 4;
                this = this;
                arg2 = local_58;
                highlightedGroup = local_48;
                cVar2 = local_31;
            } else {
                cVar2 = AddNewChannelToMask(arg2, highlightedGroup, 3);
            }
            if (cVar2) {
                UpdateCachedHighlights(*highlightedGroup);
            }
            UpdateSave(3, arg2, arg3);
        }
    }

    // 0x100011d40
    void HighlightManager::AddObjTypeHighlight(int arg1, unsigned int arg2, bool arg3) {
        bool cVar1;
        HighlightedGroup* highlightedGroup;
        array<HighlightChannelProperties, 32ul>* this_00;
        list<console::Line>* this_02;
        shared_ptr* this_03;
        long lVar2;
        uint64_t in_register_00000009;
        int arg3_00;
        ReturnValue local_a0;
        ReturnValue local_98;
        CoordGrid local_90;
        shared_ptr<dash3d::Decor> local_78;
        Client* local_68;
        HighlightedGroup* local_58;
        int local_50;
        unsigned int local_48;
        uint32_t local_44;
        int local_3c;
        int local_38;
        char local_31;

        if (arg2 < 32) {
            highlightedGroup = (HighlightedGroup*)field_4336[arg1];
            if (*(int*)highlightedGroup == 0) {
                local_44 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
                *(int*)highlightedGroup = 1 << ((uint8_t)arg2 & 31);
                local_58 = highlightedGroup;
                this_00 = &field_640[5];
                local_48 = arg2;
                local_31 = ((HighlightChannelProperties*)(*this_00)[(unsigned long)arg2])->IsEnabled();
                local_38 = 0;
                local_68 = Client::Instance();
                do {
                    local_3c = 0;
                    do {
                        arg3_00 = 0;
                        do {
                            local_90 = rs2lib::CoordGrid(local_38, local_3c, arg3_00);
                            this_02 = (list<console::Line>*)local_68->GetObjectsOnTile(local_90);
                            local_a0 = this_02->begin();
                            local_98 = this_02->end();
                            while (cVar1 = local_a0 != local_98, cVar1) {
                                this_03 = (shared_ptr*)*local_a0;
                                cVar1 = shared_ptr::operator_cast_to_bool(this_03);
                                if ((cVar1) && (lVar2 = (*this_03).operator->(), *(int*)(lVar2 + 24) == arg1)) {
                                    local_50 = rs2lib::CoordGrid::BitPack(local_38, local_3c, arg3_00);
                                    local_78 = shared_ptr(this_03);
                                    local_90 = EntityWithCoord(local_50, arg1, &local_78);
                                    local_58->CacheEntity(local_90);
                                }
                                ++local_a0;
                            }
                            arg3_00 = arg3_00 + 1;
                        } while (arg3_00 != 103);
                        local_3c = local_3c + 1;
                    } while (local_3c != 103);
                    local_38 = local_38 + 1;
                } while (local_38 != 4);
                arg3 = (uint8_t)local_44;
                local_3c = 103;
                local_38 = 4;
                this = this;
                highlightedGroup = local_58;
                arg2 = local_48;
                cVar1 = local_31;
            } else {
                cVar1 = AddNewChannelToMask(arg2, highlightedGroup, 5);
            }
            if (cVar1) {
                UpdateCachedHighlights(*highlightedGroup);
            }
            UpdateSave(5, arg2, arg3);
        }
    }

    // 0x100011fd0
    void HighlightManager::AddOpGroupHighlight(const OpGroup& opGroup, unsigned int arg2, bool arg3) {
        unsigned int uVar1;
        Client* pCVar2;
        bool cVar3;
        char cVar4;
        int iVar5;
        int iVar6;
        HighlightedGroup* highlightedGroup;
        array<HighlightChannelProperties, 32ul>* this_00;
        list<console::Line>* this_02;
        shared_ptr* this_03;
        ClientObj* clientObj;
        long lVar7;
        ClientNpc* clientNpc;
        int* piVar8;
        shared_ptr<configdecoder::LocType>* psVar9;
        LocType* pLVar10;
        uint64_t in_register_00000009;
        uint32_t uVar11;
        int iVar12;
        OpGroup local_270;
        shared_ptr<dash3d::Decor> local_108;
        shared_ptr<RSevenDebugPresetProvider> local_f8;
        shared_ptr<dash3d::Decor> local_e8;
        shared_ptr<dash3d::Decor> local_d8;
        shared_ptr<dash3d::Decor> local_c8;
        shared_ptr local_b8;
        CoordGrid local_a8;
        shared_ptr local_98;
        CoordGrid local_88;
        Client* local_70;
        HighlightManager* local_68;
        world* local_60;
        OpGroup* local_58;
        unsigned int local_50;
        uint32_t local_4c;
        HighlightedGroup* local_48;
        int local_40;
        int local_3c;
        int local_38;
        char local_31;

        if (31 < arg2) {
            return;
        }
        highlightedGroup = (HighlightedGroup*)field_4392[opGroup];
        if (*(int*)highlightedGroup == 0) {
            *(int*)highlightedGroup = 1 << ((uint8_t)arg2 & 31);
            this_00 = &field_640[8];
            local_31 = ((HighlightChannelProperties*)(*this_00)[(unsigned long)arg2])->IsEnabled();
            local_70 = Client::Instance();
            uVar1 = opGroup.field_0;
            uVar11 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
            if (uVar1 == 2) {
                local_58 = opGroup;
                iVar12 = local_70->GetLastNpcNum();
                cVar3 = local_31;
                if (iVar12 < 1)
                    goto joined_r0x000100012757;
                iVar6 = 0;
                local_68 = this;
                local_50 = arg2;
                local_4c = uVar11;
                local_48 = highlightedGroup;
                do {
                    pCVar2 = local_70;
                    iVar5 = local_70->GetLastNpcId(iVar6);
                    clientNpc = (ClientNpc*)pCVar2->GetClientNpc(iVar5);
                    if (clientNpc != nullptr) {
                        local_270 = OpGroup::Create(*clientNpc);
                        cVar3 = local_270.MatchPattern(*local_58, true);
                        if (cVar3) {
                            piVar8 = (int*)clientNpc->field_1024.operator->();
                            local_88 = dash3d::AnimateBaseOperation::SeparatedIndexCount(*piVar8, iVar5);
                            local_48->CacheEntity(local_88);
                        }
                    }
                    iVar6 = iVar6 + 1;
                } while (iVar12 != iVar6);
            } else if (uVar1 == 3) {
                local_68 = this;
                local_58 = opGroup;
                local_50 = arg2;
                local_4c = uVar11;
                local_48 = highlightedGroup;
                local_60 = (world*)local_70->field_19184.get();
                local_38 = 0;
                do {
                    local_40 = 0;
                    do {
                        iVar12 = 0;
                        do {
                            iVar5 = local_38;
                            iVar6 = local_40;
                            local_88 = rs2lib::CoordGrid(local_38, local_40, iVar12);
                            local_270 = local_70->WorldCoordFromBuildCoord(local_88);
                            local_3c = local_270.ToBitPacked();
                            local_88 = local_60->GetWall(iVar5, iVar6, iVar12);
                            cVar3 = local_88.operator_cast_to_bool();
                            if (cVar3) {
                                lVar7 = local_88.operator->();
                                iVar6 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar7 + 56));
                                psVar9 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar6);
                                pLVar10 = (LocType*)**psVar9;
                                local_270 = OpGroup::Create(*pLVar10);
                                cVar3 = local_270.MatchPattern(*local_58, true);
                                if (cVar3) {
                                    local_108 = shared_ptr(&local_88);
                                    local_270 = EntityWithCoord(local_3c, iVar6, &local_108);
                                    local_48->CacheEntity(local_270);
                                }
                            }
                            local_a8 = local_60->GetDecor(local_38, local_40, iVar12);
                            cVar3 = local_a8.operator_cast_to_bool();
                            if (cVar3) {
                                lVar7 = local_a8.operator->();
                                iVar6 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar7 + 64));
                                psVar9 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar6);
                                pLVar10 = (LocType*)**psVar9;
                                local_270 = OpGroup::Create(*pLVar10);
                                cVar3 = local_270.MatchPattern(*local_58, true);
                                if (cVar3) {
                                    local_e8 = shared_ptr(&local_a8);
                                    local_270 = EntityWithCoord(local_3c, iVar6, &local_e8);
                                    local_48->CacheEntity(local_270);
                                }
                            }
                            local_98 = local_60->GetScene(local_38, local_40, iVar12);
                            cVar3 = shared_ptr::operator_cast_to_bool(&local_98);
                            if (cVar3) {
                                lVar7 = local_98.operator->();
                                iVar6 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar7 + 80));
                                psVar9 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar6);
                                pLVar10 = (LocType*)**psVar9;
                                local_270 = OpGroup::Create(*pLVar10);
                                cVar3 = local_270.MatchPattern(*local_58, true);
                                if (cVar3) {
                                    local_d8 = shared_ptr(&local_98);
                                    local_270 = EntityWithCoord(local_3c, iVar6, &local_d8);
                                    local_48->CacheEntity(local_270);
                                }
                            }
                            local_b8 = local_60->GetGd(local_38, local_40, iVar12);
                            cVar3 = shared_ptr::operator_cast_to_bool(&local_b8);
                            if (cVar3) {
                                lVar7 = local_b8.operator->();
                                iVar6 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(long long*)(lVar7 + 32));
                                psVar9 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(iVar6);
                                pLVar10 = (LocType*)**psVar9;
                                local_270 = OpGroup::Create(*pLVar10);
                                cVar3 = local_270.MatchPattern(*local_58, true);
                                if (cVar3) {
                                    local_f8 = shared_ptr(&local_b8);
                                    local_270 = EntityWithCoord(local_3c, iVar6, &local_f8);
                                    local_48->CacheEntity(local_270);
                                }
                            }
                            iVar12 = iVar12 + 1;
                        } while (iVar12 != 103);
                        local_40 = local_40 + 1;
                    } while (local_40 != 103);
                    local_38 = local_38 + 1;
                    local_40 = 103;
                } while (local_38 != 4);
            } else {
                cVar3 = local_31;
                if (uVar1 != 4)
                    goto joined_r0x000100012757;
                local_38 = 0;
                local_68 = this;
                local_58 = opGroup;
                local_50 = arg2;
                local_4c = uVar11;
                local_48 = highlightedGroup;
                do {
                    local_3c = 0;
                    do {
                        iVar12 = 0;
                        do {
                            iVar6 = local_3c;
                            local_a8 = rs2lib::CoordGrid(local_38, local_3c, iVar12);
                            pCVar2 = local_70;
                            local_88 = local_70->WorldCoordFromBuildCoord(local_a8);
                            local_40 = local_88.ToBitPacked();
                            local_60 = (world*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)iVar12);
                            local_88 = rs2lib::CoordGrid(local_38, iVar6, iVar12);
                            this_02 = (list<console::Line>*)pCVar2->GetObjectsOnTile(local_88);
                            local_a8 = this_02->begin();
                            local_98 = this_02->end();
                            while (cVar3 = local_a8 != local_98, cVar3) {
                                this_03 = (shared_ptr*)*local_a8;
                                cVar3 = shared_ptr::operator_cast_to_bool(this_03);
                                if (!cVar3) {
                                    cVar4 = '\0';
                                } else {
                                    clientObj = (ClientObj*)**this_03;
                                    local_270 = OpGroup::Create(*clientObj);
                                    cVar4 = local_270.MatchPattern(*local_58, true);
                                    if (cVar3) {
                                    }
                                }
                                if (cVar4) {
                                    lVar7 = (*this_03).operator->();
                                    iVar12 = *(int*)(lVar7 + 24);
                                    local_c8 = shared_ptr(this_03);
                                    local_88 = EntityWithCoord(local_40, iVar12, &local_c8);
                                    local_48->CacheEntity(local_88);
                                }
                                ++local_a8;
                            }
                            iVar12 = (int)local_60 + 1;
                        } while (iVar12 != 103);
                        local_3c = local_3c + 1;
                    } while (local_3c != 103);
                    local_38 = local_38 + 1;
                    local_3c = 103;
                } while (local_38 != 4);
            }
            arg3 = (uint8_t)local_4c;
            highlightedGroup = local_48;
            this = local_68;
            arg2 = local_50;
            cVar3 = local_31;
        } else {
            cVar3 = AddNewChannelToMask(arg2, highlightedGroup, 8);
        }
    joined_r0x000100012757:
        if (cVar3) {
            UpdateCachedHighlights(*highlightedGroup);
        }
        UpdateSave(8, arg2, arg3);
    }

    // 0x100012970
    void HighlightManager::RemoveNPCHighlight(int arg1, int arg2, unsigned int arg3) {
        long long local_20 = UniqueNPCKey(arg1, arg2);
        if (RemoveEntityHighlight<long long>(this, &local_20, (hash_map<long long, unsigned int>*)&field_4112, arg3,
                                             0)) {
            UpdateUniqueNPCHighlightOrRemoveIfReused(local_20);
        }
    }

    // 0x1000129c0
    void HighlightManager::RemovePlayerHighlight(const eastl::string& str, unsigned int arg2) {
        if (RemoveEntityHighlight<eastl::string>(this, str, (hash_map<eastl::string, unsigned int>*)&field_4168, arg2,
                                                 6)) {
            UpdateUniquePlayerHighlight(str);
        }
        UpdateSave(6, arg2, false);
    }

    // 0x100012dc0
    void HighlightManager::IsLocHighlighted(int arg1, int arg2, unsigned int arg3, bool arg4) {
        CoordGrid local_48;

        if ((ShouldRebuildRegionHighlightsForChannel(arg3, 2) != '\0') && (field_4305417 != false)) {
            ServiceRegionHighlights();
        }
        UnpackCoord((ReturnValue*)&local_48, arg2, arg4, nullptr);
        auto arg2_01 = GetLocHighlightMap(local_48);
        int arg2_00 = local_48.ToBitPacked();
        long long local_38 = UniqueStaticEntityKey(arg1, arg2_00);
        IsEntityHighlighted<long long>(this, &local_38, arg2_01, arg3);
    }

    // 0x100012e60
    void HighlightManager::IsObjHighlighted(int arg1, int arg2, unsigned int arg3, bool arg4) {
        CoordGrid local_48;

        if ((ShouldRebuildRegionHighlightsForChannel(arg3, 4) != '\0') && (field_4305418 != false)) {
            ServiceRegionHighlights();
        }
        UnpackCoord((ReturnValue*)&local_48, arg2, arg4, nullptr);
        auto arg2_01 = GetObjHighlightMap(local_48);
        int arg2_00 = local_48.ToBitPacked();
        long long local_38 = UniqueStaticEntityKey(arg1, arg2_00);
        IsEntityHighlighted<long long>(this, &local_38, arg2_01, arg3);
    }

    // 0x100012f00
    void HighlightManager::IsTileHighlighted(int arg1, unsigned int arg2, bool arg3) {
        CoordGrid local_38;

        if ((ShouldRebuildRegionHighlightsForChannel(arg2, 7) != '\0') && (field_4305416 != false)) {
            ServiceRegionHighlights();
        }
        UnpackCoord((ReturnValue*)&local_38, arg1, arg3, nullptr);
        auto arg2_00 = GetTileHighlightMap(local_38);
        local_38._12_4_ = local_38.ToBitPacked();
        IsEntityHighlighted<int>(this, (int*)&local_38.field_12, arg2_00, arg2);
    }

    // 0x100013030
    void HighlightManager::IsNPCTypeHighlighted(int arg1, unsigned int arg2) {
        int local_c = arg1;
        IsGroupHighlighted<int>(this, &local_c, (hash_map<int, HighlightedGroup>*)&field_4224, arg2);
    }

    // 0x100013100
    void HighlightManager::IsLocTypeHighlighted(int arg1, unsigned int arg2) {
        int local_c = arg1;
        IsGroupHighlighted<int>(this, &local_c, (hash_map<int, HighlightedGroup>*)&field_4280, arg2);
    }

    // 0x100013130
    void HighlightManager::IsObjTypeHighlighted(int arg1, unsigned int arg2) {
        int local_c = arg1;
        IsGroupHighlighted<int>(this, &local_c, (hash_map<int, HighlightedGroup>*)&field_4336, arg2);
    }

    // 0x100013160
    void HighlightManager::IsOpGroupHighlighted(const OpGroup& opGroup, unsigned int arg2) {
        IsGroupHighlighted<OpGroup>(this, opGroup, (hash_map<OpGroup, HighlightedGroup>*)&field_4392, arg2);
    }

    // 0x100013810
    uint64_t HighlightManager::GetHighlightProperties(int arg1, HighlightCategory highlightCategory) const {
        array<HighlightChannelProperties, 32ul>* this_00;

        if ((unsigned int)arg1 < 32) {
            this_00 = &field_640[(long)(int)highlightCategory];
            return (*this_00)[(long)arg1];
        }
        return 0;
    }

    // 0x100013e90
    void HighlightManager::OnNPCAdded(const shared_ptr<ClientNpc>& clientNpc) {
        int* piVar5;
        long long* plVar6;
        hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>* local_60[2];
        HighlightChannelProperties* local_38;

        auto pCVar4 = clientNpc.operator->();
        uint32_t uVar2 = pCVar4->GetCreationCycle();
        local_38 = (HighlightChannelProperties*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar2);
        pCVar4 = (ClientNpc*)clientNpc.operator->();
        int arg1 = pCVar4->GetUID();
        uint8_t* this_01 = &field_4112;
        OpGroup local_1c8 = this_01->begin();
        auto local_48 = this_01->end();
        bool cVar1 = local_1c8 != local_48;
        if (cVar1) {
            do {
                piVar5 = (int*)local_1c8.HeapBeginPtr();
                if (arg1 == *piVar5) {
                    plVar6 = (long long*)local_1c8.HeapBeginPtr();
                    if (CreactionCycleFromNPCKey(*plVar6) != (int)local_38) {
                        new (local_60) eastl::hashtable_iterator(&local_1c8);
                        local_48 = this_01->erase(local_60[0]);
                    }
                    break;
                }
                local_48++;
                local_48 = this_01->end();
                cVar1 = local_1c8 != local_48;
            } while (cVar1);
        }
        local_1c8._0_8_ = UniqueNPCKey(arg1, (int)local_38);
        HighlightManager* this_00 = this;
        local_38 = GetHighlightProperties<long long>(this, (long long*)&local_1c8,
                                                     (hash_map<long long, unsigned int>*)this_01, 0);
        long lVar7 = clientNpc.operator->();
        piVar5 = (int*)(*((lVar7 + 1024))).operator->();
        local_1c8 = NpcUID(arg1);
        auto pHVar8 = CacheAndGetGroupHighlightProperties<int, NpcUID>(
            this_00, piVar5, (hash_map<int, HighlightedGroup>*)&this_00->field_4224, (NpcUID*)&local_1c8, 1);
        if (local_38 != nullptr) {
            pHVar8 = local_38;
        }
        pCVar4 = (ClientNpc*)*clientNpc;
        local_1c8 = OpGroup::Create(*pCVar4);
        local_48 = NpcUID(arg1);
        auto highlightChannelProperties = CacheAndGetGroupHighlightProperties<OpGroup, NpcUID>(
            this_00, &local_1c8, (hash_map<OpGroup, HighlightedGroup>*)&this_00->field_4392, &local_48, 8);
        if (pHVar8 != nullptr) {
            highlightChannelProperties = pHVar8;
        }
        if (highlightChannelProperties != nullptr) {
            pCVar4 = (ClientNpc*)clientNpc.operator->();
            pCVar4->SetHighlight(highlightChannelProperties);
        }
    }

    // 0x100014300
    void HighlightManager::OnWallLocAdded(const shared_ptr<dash3d::Wall>& wall, int arg2, int arg3, int arg4,
                                          int arg5) {
        long lVar6;
        unkbyte10 Var7;
        uint8_t local_88[16];

        int local_34 = arg2;
        if (!wall != nullptr) {
            LogAssert("wall != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                      "HighlightManager.cpp",
                      1390, nullptr);
        }
        auto pCVar3 = Client::Instance();
        local_88->WorldCoordFromBuildCoord((int)pCVar3, arg3, arg4);
        int arg2_00 = local_88->ToBitPacked();
        auto arg2_01 = GetLocHighlightMap(*local_88);
        local_1f0._0_8_ = UniqueStaticEntityKey(local_34, arg2_00);
        auto pHVar4 = GetHighlightProperties<long long>(this, (long long*)&local_1f0, arg2_01, 2);
        int iVar1 = local_34;
        shared_ptr<dash3d::Decor> local_60(wall);
        OpGroup local_1f0(arg2_00, iVar1, &local_60);
        auto pHVar5 = CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Wall>>(
            this, &local_34, (hash_map<int, HighlightedGroup>*)&field_4280, (EntityWithCoord<dash3d::Wall>*)&local_1f0,
            3);
        if (pHVar4 != nullptr) {
            pHVar5 = pHVar4;
        }
        auto this_00 = configdecoder::LocType::List(local_34);
        LocType* locType = (LocType*)**this_00;
        local_1f0 = OpGroup::Create(*locType);
        iVar1 = local_34;
        shared_ptr<dash3d::Decor> local_50(wall);
        EntityWithCoord<dash3d::Decor> local_78(arg2_00, iVar1, &local_50);
        pHVar4 = CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Wall>>(
            this, &local_1f0, (hash_map<OpGroup, HighlightedGroup>*)&field_4392, &local_78, 8);
        if (pHVar5 != nullptr) {
            pHVar4 = pHVar5;
        }
        if (pHVar4 != nullptr) {
            Var7 = HighlightChannelProperties::CreateHighlightData(pHVar4);
            lVar6 = wall.operator->();
            *(unkbyte10*)(lVar6 + 64) = Var7;
        }
    }

    // 0x1000146c0
    void HighlightManager::OnDecorLocAdded(const shared_ptr<dash3d::Decor>& decor, int arg2, int arg3, int arg4,
                                           int arg5) {
        long lVar6;
        unkbyte10 Var7;
        uint8_t local_88[16];

        int local_34 = arg2;
        if (!decor != nullptr) {
            LogAssert("decor != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                      "HighlightManager.cpp",
                      1415, nullptr);
        }
        auto pCVar3 = Client::Instance();
        local_88->WorldCoordFromBuildCoord((int)pCVar3, arg3, arg4);
        int arg2_00 = local_88->ToBitPacked();
        auto arg2_01 = GetLocHighlightMap(*local_88);
        local_1f0._0_8_ = UniqueStaticEntityKey(local_34, arg2_00);
        auto pHVar4 = GetHighlightProperties<long long>(this, (long long*)&local_1f0, arg2_01, 2);
        int iVar1 = local_34;
        shared_ptr<dash3d::Decor> local_60(decor);
        OpGroup local_1f0(arg2_00, iVar1, &local_60);
        auto pHVar5 = CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Decor>>(
            this, &local_34, (hash_map<int, HighlightedGroup>*)&field_4280, (EntityWithCoord<dash3d::Decor>*)&local_1f0,
            3);
        if (pHVar4 != nullptr) {
            pHVar5 = pHVar4;
        }
        auto this_00 = configdecoder::LocType::List(local_34);
        LocType* locType = (LocType*)**this_00;
        local_1f0 = OpGroup::Create(*locType);
        iVar1 = local_34;
        shared_ptr<dash3d::Decor> local_50(decor);
        EntityWithCoord<dash3d::Decor> local_78(arg2_00, iVar1, &local_50);
        pHVar4 = CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Decor>>(
            this, &local_1f0, (hash_map<OpGroup, HighlightedGroup>*)&field_4392, &local_78, 8);
        if (pHVar5 != nullptr) {
            pHVar4 = pHVar5;
        }
        if (pHVar4 != nullptr) {
            Var7 = HighlightChannelProperties::CreateHighlightData(pHVar4);
            lVar6 = decor.operator->();
            *(unkbyte10*)(lVar6 + 76) = Var7;
        }
    }

    // 0x100014a80
    void HighlightManager::OnGroundDecorLocAdded(const shared_ptr<dash3d::GroundDecor>& groundDecor, int arg2, int arg3,
                                                 int arg4, int arg5) {
        long lVar6;
        unkbyte10 Var7;
        uint8_t local_88[16];

        int local_34 = arg2;
        if (!groundDecor != nullptr) {
            LogAssert("groundDecor != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                      "HighlightManager.cpp",
                      1440, nullptr);
        }
        auto pCVar3 = Client::Instance();
        local_88->WorldCoordFromBuildCoord((int)pCVar3, arg3, arg4);
        int arg2_00 = local_88->ToBitPacked();
        auto arg2_01 = GetLocHighlightMap(*local_88);
        local_1f0._0_8_ = UniqueStaticEntityKey(local_34, arg2_00);
        auto pHVar4 = GetHighlightProperties<long long>(this, (long long*)&local_1f0, arg2_01, 2);
        int iVar1 = local_34;
        shared_ptr<dash3d::Decor> local_60(groundDecor);
        OpGroup local_1f0(arg2_00, iVar1, &local_60);
        auto pHVar5 = CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::GroundDecor>>(
            this, &local_34, (hash_map<int, HighlightedGroup>*)&field_4280,
            (EntityWithCoord<dash3d::GroundDecor>*)&local_1f0, 3);
        if (pHVar4 != nullptr) {
            pHVar5 = pHVar4;
        }
        auto this_00 = configdecoder::LocType::List(local_34);
        LocType* locType = (LocType*)**this_00;
        local_1f0 = OpGroup::Create(*locType);
        iVar1 = local_34;
        shared_ptr<dash3d::Decor> local_50(groundDecor);
        EntityWithCoord<dash3d::Decor> local_78(arg2_00, iVar1, &local_50);
        pHVar4 = CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::GroundDecor>>(
            this, &local_1f0, (hash_map<OpGroup, HighlightedGroup>*)&field_4392, &local_78, 8);
        if (pHVar5 != nullptr) {
            pHVar4 = pHVar5;
        }
        if (pHVar4 != nullptr) {
            Var7 = HighlightChannelProperties::CreateHighlightData(pHVar4);
            lVar6 = groundDecor.operator->();
            *(unkbyte10*)(lVar6 + 44) = Var7;
        }
    }

    // 0x100014e40
    void HighlightManager::OnSceneryLocAdded(const shared_ptr<dash3d::Sprite>& sprite, int arg2, int arg3, int arg4,
                                             int arg5) {
        long lVar6;
        unkbyte10 Var7;
        uint8_t local_88[16];

        int local_34 = arg2;
        if (!sprite != nullptr) {
            LogAssert("scenery != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                      "HighlightManager.cpp",
                      1465, nullptr);
        }
        auto pCVar3 = Client::Instance();
        local_88->WorldCoordFromBuildCoord((int)pCVar3, arg3, arg4);
        int arg2_00 = local_88->ToBitPacked();
        auto arg2_01 = GetLocHighlightMap(*local_88);
        local_1f0._0_8_ = UniqueStaticEntityKey(local_34, arg2_00);
        auto pHVar4 = GetHighlightProperties<long long>(this, (long long*)&local_1f0, arg2_01, 2);
        int iVar1 = local_34;
        shared_ptr<dash3d::Decor> local_60(sprite);
        OpGroup local_1f0(arg2_00, iVar1, &local_60);
        auto pHVar5 = CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Sprite>>(
            this, &local_34, (hash_map<int, HighlightedGroup>*)&field_4280,
            (EntityWithCoord<dash3d::Sprite>*)&local_1f0, 3);
        if (pHVar4 != nullptr) {
            pHVar5 = pHVar4;
        }
        auto this_00 = configdecoder::LocType::List(local_34);
        LocType* locType = (LocType*)**this_00;
        local_1f0 = OpGroup::Create(*locType);
        iVar1 = local_34;
        shared_ptr<dash3d::Decor> local_50(sprite);
        EntityWithCoord<dash3d::Decor> local_78(arg2_00, iVar1, &local_50);
        pHVar4 = CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Sprite>>(
            this, &local_1f0, (hash_map<OpGroup, HighlightedGroup>*)&field_4392, &local_78, 8);
        if (pHVar5 != nullptr) {
            pHVar4 = pHVar5;
        }
        if (pHVar4 != nullptr) {
            Var7 = HighlightChannelProperties::CreateHighlightData(pHVar4);
            lVar6 = sprite.operator->();
            *(unkbyte10*)(lVar6 + 92) = Var7;
        }
    }

    // 0x100015200
    void HighlightManager::OnObjAdded(const shared_ptr<ClientObj>& clientObj, int arg2, int arg3, int arg4) {
        uint8_t local_90[16];
        shared_ptr<ClientObj>* local_38;

        local_38 = (shared_ptr<ClientObj>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)arg4);
        auto pCVar2 = Client::Instance();
        local_90->WorldCoordFromBuildCoord((int)pCVar2, arg2, arg3);
        int arg2_00 = local_90->ToBitPacked();
        auto arg2_01 = GetObjHighlightMap(*local_90);
        long lVar3 = clientObj.operator->();
        local_1f8._0_8_ = UniqueStaticEntityKey(*(int*)(lVar3 + 24), arg2_00);
        auto local_48 = GetHighlightProperties<long long>(this, (long long*)&local_1f8, arg2_01, 4);
        lVar3 = clientObj.operator->();
        long lVar4 = clientObj.operator->();
        int iVar1 = *(int*)(lVar4 + 24);
        local_38 = clientObj;
        shared_ptr<dash3d::Decor> local_68(clientObj);
        int local_3c = arg2_00;
        OpGroup local_1f8(arg2_00, iVar1, &local_68);
        auto pHVar5 = CacheAndGetGroupHighlightProperties<int, EntityWithCoord<ClientObj>>(
            this, (int*)(lVar3 + 24), (hash_map<int, HighlightedGroup>*)&field_4336,
            (EntityWithCoord<ClientObj>*)&local_1f8, 5);
        shared_ptr<ClientObj>* this_00 = local_38;
        if (local_48 != nullptr) {
            pHVar5 = local_48;
        }
        ClientObj* clientObj_00 = (ClientObj*)**local_38;
        local_1f8 = OpGroup::Create(*clientObj_00);
        lVar3 = (*this_00).operator->();
        iVar1 = *(int*)(lVar3 + 24);
        shared_ptr<dash3d::Decor> local_58(this_00);
        EntityWithCoord<dash3d::Decor> local_80(local_3c, iVar1, &local_58);
        auto arg1 = CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<ClientObj>>(
            this, &local_1f8, (hash_map<OpGroup, HighlightedGroup>*)&field_4392, &local_80, 8);
        if (pHVar5 != nullptr) {
            arg1 = pHVar5;
        }
        if (arg1 != nullptr) {
            ((SystemSettings*)(*this_00).operator->())->SetLanguage(arg1);
        }
    }

    // 0x1000155b0
    void HighlightManager::OnPlayerAdded(ClientPlayer& clientPlayer) {
        eastl::string* str = ((DisplayName*)clientPlayer.field_992.operator->())->GetDisplayName();
        auto highlightChannelProperties =
            GetHighlightProperties<eastl::string>(this, str, (hash_map<eastl::string, unsigned int>*)&field_4168, 6);
        if (highlightChannelProperties != nullptr) {
            clientPlayer.SetHighlight(highlightChannelProperties);
        }
    }

    // 0x100015600
    void HighlightManager::OnTileAdded(int arg1, int arg2, int arg3) {
        world* this_00;
        uint8_t local_50[16];
        EntityHighlight local_40;

        auto pCVar1 = Client::Instance();
        local_50->WorldCoordFromBuildCoord((int)pCVar1, arg1, arg2);
        local_40._12_4_ = local_50->ToBitPacked();
        auto arg2_00 = GetTileHighlightMap(*local_50);
        auto highlightChannelProperties = GetHighlightProperties<int>(this, (int*)&local_40.field_12, arg2_00, 7);
        if (highlightChannelProperties != nullptr) {
            pCVar1 = Client::Instance();
            this_00 = (world*)pCVar1->field_19184.operator->();
            local_40._0_10_ = HighlightChannelProperties::CreateHighlightData(highlightChannelProperties);
            this_00->SetTileHighlight(arg1, arg2, arg3, local_40);
        }
    }

    // 0x1000156c0
    void HighlightManager::RebuildRegionHighlights() {
        RebuildRegionHighlights(true, true, true);
    }

    // 0x1000156f0
    unsigned long HighlightManager::AddEntityHighlight(unsigned int& arg1, unsigned int arg2,
                                                       HighlightCategory highlightCategory) const {
        int iVar1;
        int iVar2;
        array<HighlightChannelProperties, 32ul>* this_00;
        unsigned long uVar3;
        unsigned int uVar4;

        if (31 < arg2) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.cpp",
                            1621, "Highlight channel ID %d is too large. Must be between 0 and %d", (unsigned long)arg2,
                            31);
        }
        if (arg1 == 0) {
            arg1 = 1 << ((uint8_t)arg2 & 31);
            this_00 = &field_640[(long)(int)highlightCategory];
            uVar4 = ((HighlightChannelProperties*)(*this_00)[(unsigned long)arg2])->IsEnabled();
            uVar3 = (unsigned long)uVar4;
        } else {
            iVar1 = GetActiveChannelFromBitmask(arg1, highlightCategory);
            uVar4 = arg1 | 1 << (arg2 & 31);
            arg1 = uVar4;
            iVar2 = GetActiveChannelFromBitmask(uVar4, highlightCategory);
            uVar3 = (((uint64_t)((int64_t)((unsigned long)arg1 >> 8)) << 8) | (uint8_t)(iVar1 != iVar2));
        }
        return uVar3 & 4294967295;
    }

    // 0x1000157b0
    void HighlightManager::GetHighlightProperties(const unsigned int& arg1, HighlightCategory highlightCategory) const {
        GetHighlightProperties(GetActiveChannelFromBitmask(arg1, highlightCategory), highlightCategory);
    }

    // 0x100032350
    void HighlightManager::ConfigureChannel(
        HighlightCategory, int, unsigned short, unsigned short, unsigned char,
        dash3d::EntityHighlightBitFlags)::$_0::operator()(const rs2lib::CoordMapSquare& coordMapSquare) const {
        HighlightManager* this_00 = *(HighlightManager**)this;
        int iVar1 = GetMapSquareIndex(coordMapSquare);
        hash_map<long long, unsigned int>* arg1 = &this_00->field_4448[(long)iVar1];
        UpdateLocsOnConfigureChannel(this_00, arg1, **(int**)(this + 8), *(bool*)*(uint64_t*)(this + 16));
    }

    // 0x100032cd0
    void HighlightManager::ConfigureChannel(
        HighlightCategory, int, unsigned short, unsigned short, unsigned char,
        dash3d::EntityHighlightBitFlags)::$_1::operator()(const rs2lib::CoordMapSquare& coordMapSquare) const {
        HighlightManager* this_00 = *(HighlightManager**)this;
        int iVar1 = GetMapSquareIndex(coordMapSquare);
        hash_map<long long, unsigned int>* arg1 = &this_00->field_1438048[(long)iVar1];
        UpdateObjsOnConfigureChannel(this_00, arg1, **(int**)(this + 8), *(bool*)*(uint64_t*)(this + 16));
    }

    // 0x100033600
    void HighlightManager::ConfigureChannel(
        HighlightCategory, int, unsigned short, unsigned short, unsigned char,
        dash3d::EntityHighlightBitFlags)::$_2::operator()(const rs2lib::CoordMapSquare& coordMapSquare) const {
        hash_map<int, unsigned int>* arg1;

        HighlightManager* this_00 = *(HighlightManager**)this;
        int iVar1 = GetMapSquareIndex(coordMapSquare);
        arg1 = &this_00->field_2871648[(long)iVar1];
        UpdateTilesOnConfigureChannel(this_00, arg1, **(int**)(this + 8), *(bool*)*(uint64_t*)(this + 16));
    }

    // 0x100035f50
    void
    HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_3::operator()(const ClientNpc& clientNpc) const {
        HighlightManager* this_00 = field_0;
        int arg1_00 = clientNpc.GetUID();
        int arg2 = clientNpc.GetCreationCycle();
        long long arg1 = UniqueNPCKey(arg1_00, arg2);
        UpdateUniqueNPCHighlightOrRemoveIfReused(this_00, arg1);
    }

} // namespace jag::oldscape::highlight

namespace jag::graphics {
    // 0x100010f60: FindClearLSB(unsigned int*) has the same machine code as jag::FindClearLSB(unsigned int*)

} // namespace jag::graphics

namespace jag::oldscape::dash3d {
    // 0x1000117c0: AnimateBaseOperation::SeparatedIndexCount::SeparatedIndexCount(unsigned long, unsigned long) has the same machine code as highlight::NpcUID::NpcUID(int, int)

} // namespace jag::oldscape::dash3d
