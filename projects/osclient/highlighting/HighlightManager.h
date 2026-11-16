// projects/osclient/highlighting/HighlightManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::highlight {
    class HighlightManager {
    public:
        HighlightManager();
        ~HighlightManager();
        void SaveToFiles();
        void ResetAll();
        void ResetRegionHighlights();
        void OnMapRebuild(int arg1, int arg2, int arg3, int arg4);
        void ForEachLoadedMapSquare(std::function<void(rs2lib::CoordMapSquare const&)> callback);
        bool ConfigureChannel(HighlightCategory highlightCategory, int arg2, unsigned short arg3, unsigned short arg4,
                              unsigned char arg5, dash3d::EntityHighlightBitFlags entityHighlightBitFlags);
        uint8_t EntityNeedsUpdateOnConfigureChannel(const unsigned int& arg1, HighlightCategory highlightCategory,
                                                    int arg3, bool arg4) const;
        void UpdateUniqueNPCHighlightOrRemoveIfReused(long long arg1);
        void UpdateUniquePlayerHighlight(const eastl::string& str);
        void UpdateCachedHighlights(HighlightedGroup& highlightedGroup);
        unsigned long ShouldRebuildRegionHighlightsForChannel(int arg1, HighlightCategory highlightCategory);
        void UpdateLocsOnConfigureChannel(eastl::hash_map<long long, unsigned int>& arg1, int arg2, bool arg3);
        void UpdateObjsOnConfigureChannel(eastl::hash_map<long long, unsigned int>& arg1, int arg2, bool arg3);
        void UpdateTilesOnConfigureChannel(eastl::hash_map<int, unsigned int>& arg1, int arg2, bool arg3);
        void ServiceRegionHighlights();
        void RebuildRegionHighlights(bool arg1, bool arg2, bool arg3);
        int GetActiveChannelFromBitmask(unsigned int arg1, HighlightCategory highlightCategory) const;
        void UpdateUniqueLocHighlight(long long arg1);
        void UpdateUniqueObjHighlight(long long arg1);
        void UpdateUniqueTileHighlight(int arg1);
        void ClearHighlights(HighlightCategory highlightCategory, int arg2);
        bool RemoveEntityHighlight<long long>(const long long& arg1, eastl::hash_map<long long, unsigned int>& arg2,
                                              unsigned int arg3, HighlightCategory highlightCategory);
        void RemoveLocHighlight(int arg1, const rs2lib::CoordGrid& coordGrid, unsigned int arg3, bool arg4);
        void RemoveObjHighlight(int arg1, const rs2lib::CoordGrid& coordGrid, unsigned int arg3, bool arg4);
        bool RemoveEntityHighlight<eastl::string>(const eastl::string& str,
                                                  eastl::hash_map<eastl::string, unsigned int>& arg2, unsigned int arg3,
                                                  HighlightCategory highlightCategory);
        void RemoveTileHighlight(const rs2lib::CoordGrid& coordGrid, unsigned int arg2, bool arg3);
        void RemoveNPCTypeHighlight(int arg1, unsigned int arg2);
        void RemoveLocTypeHighlight(int arg1, unsigned int arg2);
        void RemoveObjTypeHighlight(int arg1, unsigned int arg2);
        void RemoveOpGroupHighlight(const OpGroup& opGroup, unsigned int arg2);
        bool AddNewChannelToMask(int arg1, unsigned int* arg2, HighlightCategory highlightCategory);
        void AddNPCHighlight(int arg1, int arg2, unsigned int arg3);
        bool AddEntityHighlight<long long>(const long long& arg1, eastl::hash_map<long long, unsigned int>& arg2,
                                           unsigned int arg3, HighlightCategory highlightCategory);
        void AddLocHighlight(int arg1, const rs2lib::CoordGrid& coordGrid, unsigned int arg3, bool arg4, bool arg5);
        hash_map<long long, unsigned int>* GetLocHighlightMap(const rs2lib::CoordGrid& coordGrid);
        void UpdateSave(const rs2lib::CoordGrid& coordGrid, HighlightCategory highlightCategory, int arg3, bool arg4);
        void AddObjHighlight(int arg1, const rs2lib::CoordGrid& coordGrid, unsigned int arg3, bool arg4, bool arg5);
        hash_map<long long, unsigned int>* GetObjHighlightMap(const rs2lib::CoordGrid& coordGrid);
        void AddPlayerHighlight(const eastl::string& str, unsigned int arg2, bool arg3);
        bool AddEntityHighlight<eastl::string>(const eastl::string& str,
                                               eastl::hash_map<eastl::string, unsigned int>& arg2, unsigned int arg3,
                                               HighlightCategory highlightCategory);
        void UpdateSave(HighlightCategory highlightCategory, int arg2, bool arg3);
        void AddTileHighlight(const rs2lib::CoordGrid& coordGrid, unsigned int arg2, bool arg3, bool arg4);
        hash_map<int, unsigned int>* GetTileHighlightMap(const rs2lib::CoordGrid& coordGrid);
        bool AddEntityHighlight<int>(const int& arg1, eastl::hash_map<int, unsigned int>& arg2, unsigned int arg3,
                                     HighlightCategory highlightCategory);
        void AddNPCTypeHighlight(int arg1, unsigned int arg2, bool arg3);
        void AddLocTypeHighlight(int arg1, unsigned int arg2, bool arg3);
        void AddObjTypeHighlight(int arg1, unsigned int arg2, bool arg3);
        void AddOpGroupHighlight(const OpGroup& opGroup, unsigned int arg2, bool arg3);
        void RemoveNPCHighlight(int arg1, int arg2, unsigned int arg3);
        void RemovePlayerHighlight(const eastl::string& str, unsigned int arg2);
        bool RemoveEntityHighlight<int>(const int& arg1, eastl::hash_map<int, unsigned int>& arg2, unsigned int arg3,
                                        HighlightCategory highlightCategory);
        void RemoveGroupHighlight<int>(const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2, unsigned int arg3,
                                       HighlightCategory highlightCategory);
        void RemoveGroupHighlight<OpGroup>(const OpGroup& opGroup, eastl::hash_map<OpGroup, HighlightedGroup>& arg2,
                                           unsigned int arg3, HighlightCategory highlightCategory);
        void IsLocHighlighted(int arg1, int arg2, unsigned int arg3, bool arg4);
        void IsObjHighlighted(int arg1, int arg2, unsigned int arg3, bool arg4);
        void IsTileHighlighted(int arg1, unsigned int arg2, bool arg3);
        bool IsEntityHighlighted<int>(const int& arg1, eastl::hash_map<int, unsigned int>& arg2, unsigned int arg3);
        void IsNPCTypeHighlighted(int arg1, unsigned int arg2);
        bool IsGroupHighlighted<int>(const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2, unsigned int arg3);
        void IsLocTypeHighlighted(int arg1, unsigned int arg2);
        void IsObjTypeHighlighted(int arg1, unsigned int arg2);
        void IsOpGroupHighlighted(const OpGroup& opGroup, unsigned int arg2);
        bool IsGroupHighlighted<OpGroup>(const OpGroup& opGroup, eastl::hash_map<OpGroup, HighlightedGroup>& arg2,
                                         unsigned int arg3);
        HighlightChannelProperties const*
        GetHighlightProperties<long long>(const long long& arg1, eastl::hash_map<long long, unsigned int>& arg2,
                                          HighlightCategory highlightCategory) const;
        HighlightChannelProperties const* GetGroupHighlightProperties<int>(const int& arg1,
                                                                           eastl::hash_map<int, HighlightedGroup>& arg2,
                                                                           HighlightCategory highlightCategory) const;
        HighlightChannelProperties const*
        GetGroupHighlightProperties<OpGroup>(const OpGroup& opGroup, eastl::hash_map<OpGroup, HighlightedGroup>& arg2,
                                             HighlightCategory highlightCategory) const;
        int const GetActiveChannel<long long>(const long long& arg1, eastl::hash_map<long long, unsigned int>& arg2,
                                              HighlightCategory highlightCategory) const;
        uint64_t GetHighlightProperties(int arg1, HighlightCategory highlightCategory) const;
        HighlightChannelProperties const*
        GetHighlightProperties<eastl::string>(const eastl::string& str,
                                              eastl::hash_map<eastl::string, unsigned int>& arg2,
                                              HighlightCategory highlightCategory) const;
        int const GetActiveChannel<int>(const int& arg1, eastl::hash_map<int, unsigned int>& arg2,
                                        HighlightCategory highlightCategory) const;
        HighlightChannelProperties const* GetHighlightProperties<int>(const int& arg1,
                                                                      eastl::hash_map<int, unsigned int>& arg2,
                                                                      HighlightCategory highlightCategory) const;
        void OnNPCAdded(const shared_ptr<ClientNpc>& clientNpc);
        HighlightChannelProperties const*
        CacheAndGetGroupHighlightProperties<int, NpcUID>(const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2,
                                                         const NpcUID& npcUID,
                                                         HighlightCategory highlightCategory) const;
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<OpGroup, NpcUID>(
            const OpGroup& opGroup, eastl::hash_map<OpGroup, HighlightedGroup>& arg2, const NpcUID& npcUID,
            HighlightCategory highlightCategory) const;
        void OnWallLocAdded(const shared_ptr<dash3d::Wall>& wall, int arg2, int arg3, int arg4, int arg5);
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Wall>>(
            const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2,
            const EntityWithCoord<dash3d::Wall>& entityWithCoord, HighlightCategory highlightCategory) const;
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Wall>>(
            const OpGroup& opGroup, eastl::hash_map<OpGroup, HighlightedGroup>& arg2,
            const EntityWithCoord<dash3d::Wall>& entityWithCoord, HighlightCategory highlightCategory) const;
        void OnDecorLocAdded(const shared_ptr<dash3d::Decor>& decor, int arg2, int arg3, int arg4, int arg5);
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Decor>>(
            const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2,
            const EntityWithCoord<dash3d::Decor>& entityWithCoord, HighlightCategory highlightCategory) const;
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Decor>>(
            const OpGroup& opGroup, eastl::hash_map<OpGroup, HighlightedGroup>& arg2,
            const EntityWithCoord<dash3d::Decor>& entityWithCoord, HighlightCategory highlightCategory) const;
        void OnGroundDecorLocAdded(const shared_ptr<dash3d::GroundDecor>& groundDecor, int arg2, int arg3, int arg4,
                                   int arg5);
        HighlightChannelProperties const*
        CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::GroundDecor>>(
            const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2,
            const EntityWithCoord<dash3d::GroundDecor>& entityWithCoord, HighlightCategory highlightCategory) const;
        HighlightChannelProperties const*
        CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::GroundDecor>>(
            const OpGroup& opGroup, eastl::hash_map<OpGroup, HighlightedGroup>& arg2,
            const EntityWithCoord<dash3d::GroundDecor>& entityWithCoord, HighlightCategory highlightCategory) const;
        void OnSceneryLocAdded(const shared_ptr<dash3d::Sprite>& sprite, int arg2, int arg3, int arg4, int arg5);
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Sprite>>(
            const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2,
            const EntityWithCoord<dash3d::Sprite>& entityWithCoord, HighlightCategory highlightCategory) const;
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Sprite>>(
            const OpGroup& opGroup, eastl::hash_map<OpGroup, HighlightedGroup>& arg2,
            const EntityWithCoord<dash3d::Sprite>& entityWithCoord, HighlightCategory highlightCategory) const;
        void OnObjAdded(const shared_ptr<ClientObj>& clientObj, int arg2, int arg3, int arg4);
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<int, EntityWithCoord<ClientObj>>(
            const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2,
            const EntityWithCoord<ClientObj>& entityWithCoord, HighlightCategory highlightCategory) const;
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<ClientObj>>(
            const OpGroup& opGroup, eastl::hash_map<OpGroup, HighlightedGroup>& arg2,
            const EntityWithCoord<ClientObj>& entityWithCoord, HighlightCategory highlightCategory) const;
        void OnPlayerAdded(ClientPlayer& clientPlayer);
        void OnTileAdded(int arg1, int arg2, int arg3);
        void RebuildRegionHighlights();
        unsigned long AddEntityHighlight(unsigned int& arg1, unsigned int arg2,
                                         HighlightCategory highlightCategory) const;
        void GetHighlightProperties(const unsigned int& arg1, HighlightCategory highlightCategory) const;
        int const GetActiveChannel<eastl::string>(const eastl::string& str,
                                                  eastl::hash_map<eastl::string, unsigned int>& arg2,
                                                  HighlightCategory highlightCategory) const;
        void IsNPCHighlighted(int arg1, int arg2, unsigned int arg3);
        void IsPlayerHighlighted(const eastl::string& str, unsigned int arg2);
        void LoadFromFiles();
        bool IsEntityHighlighted<long long>(const long long& arg1, eastl::hash_map<long long, unsigned int>& arg2,
                                            unsigned int arg3);
        bool IsEntityHighlighted<eastl::string>(const eastl::string& str,
                                                eastl::hash_map<eastl::string, unsigned int>& arg2, unsigned int arg3);

    private:
        uint8_t _unknown_0[4096];
        int field_4096;
        int field_4100;
        int field_4104;
        int field_4108;
        uint8_t _unknown_4112[4301304];
        bool field_4305416;
        bool field_4305417;
        bool field_4305418;
        uint8_t _unknown_4305419[5];
    };

    // 0x10000ec60
    unsigned long HighlightManager::ShouldRebuildRegionHighlightsForChannel(int arg1,
                                                                            HighlightCategory highlightCategory) {
        auto this_00 = GetHighlightProperties(arg1, highlightCategory);
        if (this_00 == nullptr) {
            return 0;
        }
        return this_00->IgnoreRebuild() ^ 1;
    }

    // 0x100010910
    bool HighlightManager::RemoveEntityHighlight<long long>(const long long& arg1,
                                                            eastl::hash_map<long long, unsigned int>& arg2,
                                                            unsigned int arg3, HighlightCategory highlightCategory) {
        uint8_t bVar1;
        int iVar3;
        long lVar4;
        hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>* local_58[2];
        int local_34;

        if (31 < arg3) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            180, "Highlight channel ID %d is too large. Must be between 0 and %d", (unsigned long)arg3,
                            31);
        }
        auto local_48 = arg2.find(arg1);
        auto local_68 = arg2.end();
        bool cVar2 = local_48 != local_68;
        bool bVar5 = false;
        if (cVar2) {
            lVar4 = local_48.HeapBeginPtr();
            local_34 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 8), highlightCategory);
            lVar4 = local_48.HeapBeginPtr();
            if (*(unsigned int*)(lVar4 + 8) == arg3) {
                new (local_58) eastl::hashtable_iterator(&local_48);
                local_68 = arg2.erase(local_58[0]);
                bVar5 = local_34 == -1;
            } else {
                bVar1 = (uint8_t)arg3 & 31;
                lVar4 = local_48.HeapBeginPtr();
                *(unsigned int*)(lVar4 + 8) = *(unsigned int*)(lVar4 + 8) & (-2 << bVar1 | 4294967294U >> 32 - bVar1);
                lVar4 = local_48.HeapBeginPtr();
                iVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 8), highlightCategory);
                bVar5 = local_34 == iVar3;
            }
            bVar5 = !bVar5;
        }
        if (!cVar2) {
            bVar5 = false;
        }
        return bVar5;
    }

    // 0x100010c20
    bool HighlightManager::RemoveEntityHighlight<eastl::string>(const eastl::string& str,
                                                                eastl::hash_map<eastl::string, unsigned int>& arg2,
                                                                unsigned int arg3,
                                                                HighlightCategory highlightCategory) {
        uint8_t bVar1;
        int iVar3;
        long lVar4;
        hashtable_iterator<eastl::pair<eastl::string const, unsigned int>, true, false>* local_58[2];
        int local_34;

        if (31 < arg3) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            180, "Highlight channel ID %d is too large. Must be between 0 and %d", (unsigned long)arg3,
                            31);
        }
        auto local_48 = arg2.find(str);
        auto local_68 = arg2.end();
        bool cVar2 = local_48 != local_68;
        bool bVar5 = false;
        if (cVar2) {
            lVar4 = local_48.HeapBeginPtr();
            local_34 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 32), highlightCategory);
            lVar4 = local_48.HeapBeginPtr();
            if (*(unsigned int*)(lVar4 + 32) == arg3) {
                new (local_58) eastl::hashtable_iterator(&local_48);
                local_68 = arg2.erase(local_58[0]);
                bVar5 = local_34 == -1;
            } else {
                bVar1 = (uint8_t)arg3 & 31;
                lVar4 = local_48.HeapBeginPtr();
                *(unsigned int*)(lVar4 + 32) = *(unsigned int*)(lVar4 + 32) & (-2 << bVar1 | 4294967294U >> 32 - bVar1);
                lVar4 = local_48.HeapBeginPtr();
                iVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 32), highlightCategory);
                bVar5 = local_34 == iVar3;
            }
            bVar5 = !bVar5;
        }
        if (!cVar2) {
            bVar5 = false;
        }
        return bVar5;
    }

    // 0x100011050
    bool HighlightManager::AddEntityHighlight<long long>(const long long& arg1,
                                                         eastl::hash_map<long long, unsigned int>& arg2,
                                                         unsigned int arg3, HighlightCategory highlightCategory) {
        unsigned int* arg1_00 = &arg2[arg1];
        return (bool)AddEntityHighlight(*arg1_00, arg3, highlightCategory);
    }

    // 0x1000111c0
    hash_map<long long, unsigned int>* HighlightManager::GetLocHighlightMap(const rs2lib::CoordGrid& coordGrid) {
        int iVar2;
        hash_map<long long, unsigned int>* phVar3;

        if (coordGrid.InRegion() == '\0') {
            iVar2 = GetMapSquareIndex(coordGrid);
            phVar3 = &field_4448[(long)iVar2];
        } else {
            phVar3 = (hash_map<long long, unsigned int>*)&field_4305248;
        }
        return phVar3;
    }

    // 0x100011360
    hash_map<long long, unsigned int>* HighlightManager::GetObjHighlightMap(const rs2lib::CoordGrid& coordGrid) {
        int iVar2;
        hash_map<long long, unsigned int>* phVar3;

        if (coordGrid.InRegion() == '\0') {
            iVar2 = GetMapSquareIndex(coordGrid);
            phVar3 = &field_1438048[(long)iVar2];
        } else {
            phVar3 = (hash_map<long long, unsigned int>*)&field_4305304;
        }
        return phVar3;
    }

    // 0x100011410
    bool HighlightManager::AddEntityHighlight<eastl::string>(const eastl::string& str,
                                                             eastl::hash_map<eastl::string, unsigned int>& arg2,
                                                             unsigned int arg3, HighlightCategory highlightCategory) {
        unsigned int* arg1 = &arg2[str];
        return (bool)AddEntityHighlight(*arg1, arg3, highlightCategory);
    }

    // 0x100011560
    hash_map<int, unsigned int>* HighlightManager::GetTileHighlightMap(const rs2lib::CoordGrid& coordGrid) {
        int iVar2;
        hash_map<int, unsigned int>* phVar3;

        if (coordGrid.InRegion() == '\0') {
            iVar2 = GetMapSquareIndex(coordGrid);
            phVar3 = &field_2871648[(long)iVar2];
        } else {
            phVar3 = (hash_map<int, unsigned int>*)&field_4305360;
        }
        return phVar3;
    }

    // 0x1000115b0
    bool HighlightManager::AddEntityHighlight<int>(const int& arg1, eastl::hash_map<int, unsigned int>& arg2,
                                                   unsigned int arg3, HighlightCategory highlightCategory) {
        unsigned int* arg1_00 = &arg2[arg1];
        return (bool)AddEntityHighlight(*arg1_00, arg3, highlightCategory);
    }

    // 0x100012a20
    bool HighlightManager::RemoveEntityHighlight<int>(const int& arg1, eastl::hash_map<int, unsigned int>& arg2,
                                                      unsigned int arg3, HighlightCategory highlightCategory) {
        uint8_t bVar1;
        int iVar3;
        long lVar4;
        hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>* local_58[2];
        int local_34;

        if (31 < arg3) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            180, "Highlight channel ID %d is too large. Must be between 0 and %d", (unsigned long)arg3,
                            31);
        }
        auto local_48 = arg2.find(arg1);
        auto local_68 = arg2.end();
        bool cVar2 = local_48 != local_68;
        bool bVar5 = false;
        if (cVar2) {
            lVar4 = local_48.HeapBeginPtr();
            local_34 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 4), highlightCategory);
            lVar4 = local_48.HeapBeginPtr();
            if (*(unsigned int*)(lVar4 + 4) == arg3) {
                new (local_58) eastl::hashtable_iterator(&local_48);
                local_68 = arg2.erase(local_58[0]);
                bVar5 = local_34 == -1;
            } else {
                bVar1 = (uint8_t)arg3 & 31;
                lVar4 = local_48.HeapBeginPtr();
                *(unsigned int*)(lVar4 + 4) = *(unsigned int*)(lVar4 + 4) & (-2 << bVar1 | 4294967294U >> 32 - bVar1);
                lVar4 = local_48.HeapBeginPtr();
                iVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 4), highlightCategory);
                bVar5 = local_34 == iVar3;
            }
            bVar5 = !bVar5;
        }
        if (!cVar2) {
            bVar5 = false;
        }
        return bVar5;
    }

    // 0x100012b50
    void HighlightManager::RemoveGroupHighlight<int>(const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2,
                                                     unsigned int arg3, HighlightCategory highlightCategory) {
        HighlightedGroup* highlightedGroup;
        int iVar2;
        int iVar3;
        long lVar4;
        unsigned int uVar5;
        hashtable_iterator<eastl::pair<int const, HighlightedGroup>, true, false>* local_50[2];
        HighlightedGroup* local_40;

        if (31 < arg3) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            224, "Highlight channel ID %d is too large. Must be between 0 and %d", (unsigned long)arg3,
                            31);
        }
        auto local_60 = arg2.find(arg1);
        auto local_70 = arg2.end();
        if (local_60 != local_70 != '\0') {
            uVar5 = 1 << ((uint8_t)arg3 & 31);
            lVar4 = local_60.HeapBeginPtr();
            local_40 = (HighlightedGroup*)(lVar4 + 8);
            iVar2 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 8), highlightCategory);
            highlightedGroup = local_40;
            if (*(unsigned int*)(lVar4 + 8) == uVar5) {
                if (iVar2 != -1) {
                    *(uint32_t*)local_40 = 0;
                    UpdateCachedHighlights(*local_40);
                }
                new (local_50) eastl::hashtable_iterator(&local_60);
                local_70 = arg2.erase(local_50[0]);
            } else {
                uVar5 = *(unsigned int*)(lVar4 + 8) & ~uVar5;
                *(unsigned int*)local_40 = uVar5;
                iVar3 = GetActiveChannelFromBitmask(uVar5, highlightCategory);
                if (iVar2 != iVar3) {
                    UpdateCachedHighlights(*highlightedGroup);
                }
            }
        }
    }

    // 0x100012c80
    void HighlightManager::RemoveGroupHighlight<OpGroup>(const OpGroup& opGroup,
                                                         eastl::hash_map<OpGroup, HighlightedGroup>& arg2,
                                                         unsigned int arg3, HighlightCategory highlightCategory) {
        HighlightedGroup* highlightedGroup;
        int iVar2;
        int iVar3;
        long lVar4;
        unsigned int uVar5;
        hashtable_iterator<eastl::pair<OpGroup const, HighlightedGroup>, true, false>* local_50[2];
        HighlightedGroup* local_40;

        if (31 < arg3) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            224, "Highlight channel ID %d is too large. Must be between 0 and %d", (unsigned long)arg3,
                            31);
        }
        auto local_60 = arg2.find(opGroup);
        auto local_70 = arg2.end();
        if (local_60 != local_70 != '\0') {
            uVar5 = 1 << ((uint8_t)arg3 & 31);
            lVar4 = local_60.HeapBeginPtr();
            local_40 = (HighlightedGroup*)(lVar4 + 360);
            iVar2 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 360), highlightCategory);
            highlightedGroup = local_40;
            if (*(unsigned int*)(lVar4 + 360) == uVar5) {
                if (iVar2 != -1) {
                    *(uint32_t*)local_40 = 0;
                    UpdateCachedHighlights(*local_40);
                }
                new (local_50) eastl::hashtable_iterator(&local_60);
                local_70 = arg2.erase(local_50[0]);
            } else {
                uVar5 = *(unsigned int*)(lVar4 + 360) & ~uVar5;
                *(unsigned int*)local_40 = uVar5;
                iVar3 = GetActiveChannelFromBitmask(uVar5, highlightCategory);
                if (iVar2 != iVar3) {
                    UpdateCachedHighlights(*highlightedGroup);
                }
            }
        }
    }

    // 0x100012f90
    bool HighlightManager::IsEntityHighlighted<int>(const int& arg1, eastl::hash_map<int, unsigned int>& arg2,
                                                    unsigned int arg3) {
        long lVar2;
        bool bVar3;

        if (31 < arg3) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            245, "Highlight channel ID %d is too large. Must be between 0 and %d", (unsigned long)arg3,
                            31);
        }
        auto local_38 = arg2.find(arg1);
        auto local_48 = arg2.end();
        if (local_38 == local_48 == '\0') {
            lVar2 = local_38.HeapBeginPtr();
            bVar3 = (*(unsigned int*)(lVar2 + 4) >> (arg3 & 31) & 1) != 0;
        } else {
            bVar3 = false;
        }
        return bVar3;
    }

    // 0x100013060
    bool HighlightManager::IsGroupHighlighted<int>(const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2,
                                                   unsigned int arg3) {
        long lVar2;
        bool bVar3;

        if (31 < arg3) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            266, "Highlight channel ID %d is too large. Must be between 0 and %d", (unsigned long)arg3,
                            31);
        }
        auto local_38 = arg2.find(arg1);
        auto local_48 = arg2.end();
        if (local_38 == local_48 == '\0') {
            lVar2 = local_38.HeapBeginPtr();
            bVar3 = (*(unsigned int*)(lVar2 + 8) >> (arg3 & 31) & 1) != 0;
        } else {
            bVar3 = false;
        }
        return bVar3;
    }

    // 0x100013180
    bool HighlightManager::IsGroupHighlighted<OpGroup>(const OpGroup& opGroup,
                                                       eastl::hash_map<OpGroup, HighlightedGroup>& arg2,
                                                       unsigned int arg3) {
        long lVar2;
        bool bVar3;

        if (31 < arg3) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            266, "Highlight channel ID %d is too large. Must be between 0 and %d", (unsigned long)arg3,
                            31);
        }
        auto local_38 = arg2.find(opGroup);
        auto local_48 = arg2.end();
        if (local_38 == local_48 == '\0') {
            lVar2 = local_38.HeapBeginPtr();
            bVar3 = (*(unsigned int*)(lVar2 + 360) >> (arg3 & 31) & 1) != 0;
        } else {
            bVar3 = false;
        }
        return bVar3;
    }

    // 0x100013230
    HighlightChannelProperties const*
    HighlightManager::GetHighlightProperties<long long>(const long long& arg1,
                                                        eastl::hash_map<long long, unsigned int>& arg2,
                                                        HighlightCategory highlightCategory) const {
        int arg1_00 = GetActiveChannel<long long>(this, arg1, arg2, highlightCategory);
        return (HighlightChannelProperties*)GetHighlightProperties(arg1_00, highlightCategory);
    }

    // 0x100013260
    HighlightChannelProperties const*
    HighlightManager::GetGroupHighlightProperties<int>(const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2,
                                                       HighlightCategory highlightCategory) const {
        unsigned int uVar2;
        long lVar3;
        array<HighlightChannelProperties, 32ul>* this_00;

        auto local_40 = arg2.find(arg1);
        auto local_50 = arg2.end();
        if (local_40 != local_50 != '\0') {
            lVar3 = local_40.HeapBeginPtr();
            uVar2 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar3 + 8), highlightCategory);
            if (uVar2 < 32) {
                this_00 = &field_640[(long)(int)highlightCategory];
                return (HighlightChannelProperties*)(*this_00)[(long)(int)uVar2];
            }
        }
        return nullptr;
    }

    // 0x100013300
    HighlightChannelProperties const*
    HighlightManager::GetGroupHighlightProperties<OpGroup>(const OpGroup& opGroup,
                                                           eastl::hash_map<OpGroup, HighlightedGroup>& arg2,
                                                           HighlightCategory highlightCategory) const {
        unsigned int uVar2;
        long lVar3;
        array<HighlightChannelProperties, 32ul>* this_00;

        auto local_40 = arg2.find(opGroup);
        auto local_50 = arg2.end();
        if (local_40 != local_50 != '\0') {
            lVar3 = local_40.HeapBeginPtr();
            uVar2 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar3 + 360), highlightCategory);
            if (uVar2 < 32) {
                this_00 = &field_640[(long)(int)highlightCategory];
                return (HighlightChannelProperties*)(*this_00)[(long)(int)uVar2];
            }
        }
        return nullptr;
    }

    // 0x100013760
    int const HighlightManager::GetActiveChannel<long long>(const long long& arg1,
                                                            eastl::hash_map<long long, unsigned int>& arg2,
                                                            HighlightCategory highlightCategory) const {
        long lVar3;

        auto local_40 = arg2.find(arg1);
        auto local_50 = arg2.end();
        bool cVar1 = local_40 == local_50;
        int iVar2 = -1;
        if (!cVar1) {
            lVar3 = local_40.HeapBeginPtr();
            iVar2 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar3 + 8), highlightCategory);
        }
        return iVar2;
    }

    // 0x100013970
    HighlightChannelProperties const*
    HighlightManager::GetHighlightProperties<eastl::string>(const eastl::string& str,
                                                            eastl::hash_map<eastl::string, unsigned int>& arg2,
                                                            HighlightCategory highlightCategory) const {
        int arg1 = GetActiveChannel<eastl::string>(this, str, arg2, highlightCategory);
        return (HighlightChannelProperties*)GetHighlightProperties(arg1, highlightCategory);
    }

    // 0x1000139b0
    int const HighlightManager::GetActiveChannel<int>(const int& arg1, eastl::hash_map<int, unsigned int>& arg2,
                                                      HighlightCategory highlightCategory) const {
        long lVar3;

        auto local_40 = arg2.find(arg1);
        auto local_50 = arg2.end();
        bool cVar1 = local_40 == local_50;
        int iVar2 = -1;
        if (!cVar1) {
            lVar3 = local_40.HeapBeginPtr();
            iVar2 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar3 + 4), highlightCategory);
        }
        return iVar2;
    }

    // 0x100013a30
    HighlightChannelProperties const*
    HighlightManager::GetHighlightProperties<int>(const int& arg1, eastl::hash_map<int, unsigned int>& arg2,
                                                  HighlightCategory highlightCategory) const {
        int arg1_00 = GetActiveChannel<int>(this, arg1, arg2, highlightCategory);
        return (HighlightChannelProperties*)GetHighlightProperties(arg1_00, highlightCategory);
    }

    // 0x100014170
    HighlightChannelProperties const* HighlightManager::CacheAndGetGroupHighlightProperties<int, NpcUID>(
        const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2, const NpcUID& npcUID,
        HighlightCategory highlightCategory) const {
        unsigned int uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;

        auto local_48 = arg2.find(arg1);
        auto local_58 = arg2.end();
        if (local_48 != local_58 != '\0') {
            lVar4 = local_48.HeapBeginPtr();
            ((lVar4 + 8))->CacheEntity(npcUID);
            lVar4 = local_48.HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 8), highlightCategory);
            if (uVar3 < 32) {
                this_00 = &field_640[(long)(int)highlightCategory];
                return (HighlightChannelProperties*)(*this_00)[(long)(int)uVar3];
            }
        }
        return nullptr;
    }

    // 0x100014240
    HighlightChannelProperties const* HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, NpcUID>(
        const OpGroup& opGroup, eastl::hash_map<OpGroup, HighlightedGroup>& arg2, const NpcUID& npcUID,
        HighlightCategory highlightCategory) const {
        unsigned int uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;

        auto local_48 = arg2.find(opGroup);
        auto local_58 = arg2.end();
        if (local_48 != local_58 != '\0') {
            lVar4 = local_48.HeapBeginPtr();
            ((lVar4 + 360))->CacheEntity(npcUID);
            lVar4 = local_48.HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 360), highlightCategory);
            if (uVar3 < 32) {
                this_00 = &field_640[(long)(int)highlightCategory];
                return (HighlightChannelProperties*)(*this_00)[(long)(int)uVar3];
            }
        }
        return nullptr;
    }

    // 0x100014540
    HighlightChannelProperties const*
    HighlightManager::CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Wall>>(
        const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2,
        const EntityWithCoord<dash3d::Wall>& entityWithCoord, HighlightCategory highlightCategory) const {
        unsigned int uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;

        auto local_48 = arg2.find(arg1);
        auto local_58 = arg2.end();
        if (local_48 != local_58 != '\0') {
            lVar4 = local_48.HeapBeginPtr();
            ((lVar4 + 8))->CacheEntity(entityWithCoord);
            lVar4 = local_48.HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 8), highlightCategory);
            if (uVar3 < 32) {
                this_00 = &field_640[(long)(int)highlightCategory];
                return (HighlightChannelProperties*)(*this_00)[(long)(int)uVar3];
            }
        }
        return nullptr;
    }

    // 0x100014600
    HighlightChannelProperties const*
    HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Wall>>(
        const OpGroup& opGroup, eastl::hash_map<OpGroup, HighlightedGroup>& arg2,
        const EntityWithCoord<dash3d::Wall>& entityWithCoord, HighlightCategory highlightCategory) const {
        unsigned int uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;

        auto local_48 = arg2.find(opGroup);
        auto local_58 = arg2.end();
        if (local_48 != local_58 != '\0') {
            lVar4 = local_48.HeapBeginPtr();
            ((lVar4 + 360))->CacheEntity(entityWithCoord);
            lVar4 = local_48.HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 360), highlightCategory);
            if (uVar3 < 32) {
                this_00 = &field_640[(long)(int)highlightCategory];
                return (HighlightChannelProperties*)(*this_00)[(long)(int)uVar3];
            }
        }
        return nullptr;
    }

    // 0x100014900
    HighlightChannelProperties const*
    HighlightManager::CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Decor>>(
        const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2,
        const EntityWithCoord<dash3d::Decor>& entityWithCoord, HighlightCategory highlightCategory) const {
        unsigned int uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;

        auto local_48 = arg2.find(arg1);
        auto local_58 = arg2.end();
        if (local_48 != local_58 != '\0') {
            lVar4 = local_48.HeapBeginPtr();
            ((lVar4 + 8))->CacheEntity(entityWithCoord);
            lVar4 = local_48.HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 8), highlightCategory);
            if (uVar3 < 32) {
                this_00 = &field_640[(long)(int)highlightCategory];
                return (HighlightChannelProperties*)(*this_00)[(long)(int)uVar3];
            }
        }
        return nullptr;
    }

    // 0x1000149c0
    HighlightChannelProperties const*
    HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Decor>>(
        const OpGroup& opGroup, eastl::hash_map<OpGroup, HighlightedGroup>& arg2,
        const EntityWithCoord<dash3d::Decor>& entityWithCoord, HighlightCategory highlightCategory) const {
        unsigned int uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;

        auto local_48 = arg2.find(opGroup);
        auto local_58 = arg2.end();
        if (local_48 != local_58 != '\0') {
            lVar4 = local_48.HeapBeginPtr();
            ((lVar4 + 360))->CacheEntity(entityWithCoord);
            lVar4 = local_48.HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 360), highlightCategory);
            if (uVar3 < 32) {
                this_00 = &field_640[(long)(int)highlightCategory];
                return (HighlightChannelProperties*)(*this_00)[(long)(int)uVar3];
            }
        }
        return nullptr;
    }

    // 0x100014cc0
    HighlightChannelProperties const*
    HighlightManager::CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::GroundDecor>>(
        const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2,
        const EntityWithCoord<dash3d::GroundDecor>& entityWithCoord, HighlightCategory highlightCategory) const {
        unsigned int uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;

        auto local_48 = arg2.find(arg1);
        auto local_58 = arg2.end();
        if (local_48 != local_58 != '\0') {
            lVar4 = local_48.HeapBeginPtr();
            ((lVar4 + 8))->CacheEntity(entityWithCoord);
            lVar4 = local_48.HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 8), highlightCategory);
            if (uVar3 < 32) {
                this_00 = &field_640[(long)(int)highlightCategory];
                return (HighlightChannelProperties*)(*this_00)[(long)(int)uVar3];
            }
        }
        return nullptr;
    }

    // 0x100014d80
    HighlightChannelProperties const*
    HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::GroundDecor>>(
        const OpGroup& opGroup, eastl::hash_map<OpGroup, HighlightedGroup>& arg2,
        const EntityWithCoord<dash3d::GroundDecor>& entityWithCoord, HighlightCategory highlightCategory) const {
        unsigned int uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;

        auto local_48 = arg2.find(opGroup);
        auto local_58 = arg2.end();
        if (local_48 != local_58 != '\0') {
            lVar4 = local_48.HeapBeginPtr();
            ((lVar4 + 360))->CacheEntity(entityWithCoord);
            lVar4 = local_48.HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 360), highlightCategory);
            if (uVar3 < 32) {
                this_00 = &field_640[(long)(int)highlightCategory];
                return (HighlightChannelProperties*)(*this_00)[(long)(int)uVar3];
            }
        }
        return nullptr;
    }

    // 0x100015080
    HighlightChannelProperties const*
    HighlightManager::CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Sprite>>(
        const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2,
        const EntityWithCoord<dash3d::Sprite>& entityWithCoord, HighlightCategory highlightCategory) const {
        unsigned int uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;

        auto local_48 = arg2.find(arg1);
        auto local_58 = arg2.end();
        if (local_48 != local_58 != '\0') {
            lVar4 = local_48.HeapBeginPtr();
            ((lVar4 + 8))->CacheEntity(entityWithCoord);
            lVar4 = local_48.HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 8), highlightCategory);
            if (uVar3 < 32) {
                this_00 = &field_640[(long)(int)highlightCategory];
                return (HighlightChannelProperties*)(*this_00)[(long)(int)uVar3];
            }
        }
        return nullptr;
    }

    // 0x100015140
    HighlightChannelProperties const*
    HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Sprite>>(
        const OpGroup& opGroup, eastl::hash_map<OpGroup, HighlightedGroup>& arg2,
        const EntityWithCoord<dash3d::Sprite>& entityWithCoord, HighlightCategory highlightCategory) const {
        unsigned int uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;

        auto local_48 = arg2.find(opGroup);
        auto local_58 = arg2.end();
        if (local_48 != local_58 != '\0') {
            lVar4 = local_48.HeapBeginPtr();
            ((lVar4 + 360))->CacheEntity(entityWithCoord);
            lVar4 = local_48.HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 360), highlightCategory);
            if (uVar3 < 32) {
                this_00 = &field_640[(long)(int)highlightCategory];
                return (HighlightChannelProperties*)(*this_00)[(long)(int)uVar3];
            }
        }
        return nullptr;
    }

    // 0x100015430
    HighlightChannelProperties const*
    HighlightManager::CacheAndGetGroupHighlightProperties<int, EntityWithCoord<ClientObj>>(
        const int& arg1, eastl::hash_map<int, HighlightedGroup>& arg2,
        const EntityWithCoord<ClientObj>& entityWithCoord, HighlightCategory highlightCategory) const {
        unsigned int uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;

        auto local_48 = arg2.find(arg1);
        auto local_58 = arg2.end();
        if (local_48 != local_58 != '\0') {
            lVar4 = local_48.HeapBeginPtr();
            ((lVar4 + 8))->CacheEntity(entityWithCoord);
            lVar4 = local_48.HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 8), highlightCategory);
            if (uVar3 < 32) {
                this_00 = &field_640[(long)(int)highlightCategory];
                return (HighlightChannelProperties*)(*this_00)[(long)(int)uVar3];
            }
        }
        return nullptr;
    }

    // 0x1000154f0
    HighlightChannelProperties const*
    HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<ClientObj>>(
        const OpGroup& opGroup, eastl::hash_map<OpGroup, HighlightedGroup>& arg2,
        const EntityWithCoord<ClientObj>& entityWithCoord, HighlightCategory highlightCategory) const {
        unsigned int uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;

        auto local_48 = arg2.find(opGroup);
        auto local_58 = arg2.end();
        if (local_48 != local_58 != '\0') {
            lVar4 = local_48.HeapBeginPtr();
            ((lVar4 + 360))->CacheEntity(entityWithCoord);
            lVar4 = local_48.HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar4 + 360), highlightCategory);
            if (uVar3 < 32) {
                this_00 = &field_640[(long)(int)highlightCategory];
                return (HighlightChannelProperties*)(*this_00)[(long)(int)uVar3];
            }
        }
        return nullptr;
    }

    // 0x1000355b0
    int const HighlightManager::GetActiveChannel<eastl::string>(const eastl::string& str,
                                                                eastl::hash_map<eastl::string, unsigned int>& arg2,
                                                                HighlightCategory highlightCategory) const {
        long lVar3;

        auto local_40 = arg2.find(str);
        auto local_50 = arg2.end();
        bool cVar1 = local_40 == local_50;
        int iVar2 = -1;
        if (!cVar1) {
            lVar3 = local_40.HeapBeginPtr();
            iVar2 = GetActiveChannelFromBitmask(*(unsigned int*)(lVar3 + 32), highlightCategory);
        }
        return iVar2;
    }

    // 0x100036920
    void HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_4::operator()(
        EntityWithCoord<dash3d::Wall>& entityWithCoord) const {
        HighlightManager* this_00 = field_0;
        long long arg1 = UniqueStaticEntityKey(*(int*)(entityWithCoord + 4), *(int*)entityWithCoord);
        UpdateUniqueLocHighlight(this_00, arg1);
    }

    // 0x100037280
    void HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_5::operator()(
        EntityWithCoord<dash3d::Decor>& entityWithCoord) const {
        HighlightManager* this_00 = field_0;
        long long arg1 = UniqueStaticEntityKey(*(int*)(entityWithCoord + 4), *(int*)entityWithCoord);
        UpdateUniqueLocHighlight(this_00, arg1);
    }

    // 0x100037be0
    void HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_6::operator()(
        EntityWithCoord<dash3d::GroundDecor>& entityWithCoord) const {
        HighlightManager* this_00 = field_0;
        long long arg1 = UniqueStaticEntityKey(*(int*)(entityWithCoord + 4), *(int*)entityWithCoord);
        UpdateUniqueLocHighlight(this_00, arg1);
    }

    // 0x100038540
    void HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_7::operator()(
        EntityWithCoord<dash3d::Sprite>& entityWithCoord) const {
        HighlightManager* this_00 = field_0;
        long long arg1 = UniqueStaticEntityKey(*(int*)(entityWithCoord + 4), *(int*)entityWithCoord);
        UpdateUniqueLocHighlight(this_00, arg1);
    }

    // 0x100038ea0
    void HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_8::operator()(
        EntityWithCoord<ClientObj>& entityWithCoord) const {
        HighlightManager* this_00 = field_0;
        long long arg1 = UniqueStaticEntityKey(*(int*)(entityWithCoord + 4), *(int*)entityWithCoord);
        UpdateUniqueObjHighlight(this_00, arg1);
    }

    // 0x1000b56b0
    void HighlightManager::IsNPCHighlighted(int arg1, int arg2, unsigned int arg3) {
        long long local_20 = UniqueNPCKey(arg1, arg2);
        IsEntityHighlighted<long long>(this, &local_20, (hash_map<long long, unsigned int>*)&field_4112, arg3);
    }

    // 0x1000b5700
    void HighlightManager::IsPlayerHighlighted(const eastl::string& str, unsigned int arg2) {
        IsEntityHighlighted<eastl::string>(this, str, (hash_map<eastl::string, unsigned int>*)&field_4168, arg2);
    }

    // 0x1000f6f20
    void HighlightManager::LoadFromFiles() {
        LoadAllFromFiles(*this);
    }

    // 0x100124c00
    bool HighlightManager::IsEntityHighlighted<long long>(const long long& arg1,
                                                          eastl::hash_map<long long, unsigned int>& arg2,
                                                          unsigned int arg3) {
        long lVar2;
        bool bVar3;

        if (31 < arg3) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            245, "Highlight channel ID %d is too large. Must be between 0 and %d", (unsigned long)arg3,
                            31);
        }
        auto local_38 = arg2.find(arg1);
        auto local_48 = arg2.end();
        if (local_38 == local_48 == '\0') {
            lVar2 = local_38.HeapBeginPtr();
            bVar3 = (*(unsigned int*)(lVar2 + 8) >> (arg3 & 31) & 1) != 0;
        } else {
            bVar3 = false;
        }
        return bVar3;
    }

    // 0x100124d10
    bool HighlightManager::IsEntityHighlighted<eastl::string>(const eastl::string& str,
                                                              eastl::hash_map<eastl::string, unsigned int>& arg2,
                                                              unsigned int arg3) {
        long lVar2;
        bool bVar3;

        if (31 < arg3) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            245, "Highlight channel ID %d is too large. Must be between 0 and %d", (unsigned long)arg3,
                            31);
        }
        auto local_38 = arg2.find(str);
        auto local_48 = arg2.end();
        if (local_38 == local_48 == '\0') {
            lVar2 = local_38.HeapBeginPtr();
            bVar3 = (*(unsigned int*)(lVar2 + 32) >> (arg3 & 31) & 1) != 0;
        } else {
            bVar3 = false;
        }
        return bVar3;
    }

} // namespace jag::oldscape::highlight
