// projects/osclient/highlighting/HighlightManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::highlight {
    class HighlightManager {
    public:
        HighlightManager();
        ~HighlightManager();
        void SaveToFiles();
        void ResetAll();
        void ResetRegionHighlights();
        void OnMapRebuild(int, int, int, int);
        void ForEachLoadedMapSquare(std::function<void(rs2lib::CoordMapSquare const&)>);
        bool ConfigureChannel(HighlightCategory, int, unsigned short, unsigned short, unsigned char,
                              dash3d::EntityHighlightBitFlags);
        byte EntityNeedsUpdateOnConfigureChannel(unsigned int const&, HighlightCategory, int, bool) const;
        void UpdateUniqueNPCHighlightOrRemoveIfReused(long long);
        void UpdateUniquePlayerHighlight(eastl::string const&);
        void UpdateCachedHighlights(HighlightedGroup&);
        ulong ShouldRebuildRegionHighlightsForChannel(int, HighlightCategory);
        void UpdateLocsOnConfigureChannel(eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                          eastl::equal_to<long long>, eastl::allocator, false>&,
                                          int, bool);
        void UpdateObjsOnConfigureChannel(eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                          eastl::equal_to<long long>, eastl::allocator, false>&,
                                          int, bool);
        void UpdateTilesOnConfigureChannel(
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, int,
            bool);
        void ServiceRegionHighlights();
        void RebuildRegionHighlights(bool, bool, bool);
        int GetActiveChannelFromBitmask(unsigned int, HighlightCategory) const;
        void UpdateUniqueLocHighlight(long long);
        void UpdateUniqueObjHighlight(long long);
        void UpdateUniqueTileHighlight(int);
        void ClearHighlights(HighlightCategory, int);
        bool RemoveEntityHighlight<long long>(long long const&,
                                              eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                              eastl::equal_to<long long>, eastl::allocator, false>&,
                                              unsigned int, HighlightCategory);
        void RemoveLocHighlight(int, rs2lib::CoordGrid const&, unsigned int, bool);
        void RemoveObjHighlight(int, rs2lib::CoordGrid const&, unsigned int, bool);
        bool
        RemoveEntityHighlight<eastl::string>(eastl::string const&,
                                             eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>,
                                                             eastl::equal_to<eastl::string>, eastl::allocator, false>&,
                                             unsigned int, HighlightCategory);
        void RemoveTileHighlight(rs2lib::CoordGrid const&, unsigned int, bool);
        void RemoveNPCTypeHighlight(int, unsigned int);
        void RemoveLocTypeHighlight(int, unsigned int);
        void RemoveObjTypeHighlight(int, unsigned int);
        void RemoveOpGroupHighlight(OpGroup const&, unsigned int);
        bool AddNewChannelToMask(int, unsigned int*, HighlightCategory);
        void AddNPCHighlight(int, int, unsigned int);
        bool AddEntityHighlight<long long>(long long const&,
                                           eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                           eastl::equal_to<long long>, eastl::allocator, false>&,
                                           unsigned int, HighlightCategory);
        void AddLocHighlight(int, rs2lib::CoordGrid const&, unsigned int, bool, bool);
        GetLocHighlightMap(rs2lib::CoordGrid const&);
        void UpdateSave(rs2lib::CoordGrid const&, HighlightCategory, int, bool);
        void AddObjHighlight(int, rs2lib::CoordGrid const&, unsigned int, bool, bool);
        GetObjHighlightMap(rs2lib::CoordGrid const&);
        void AddPlayerHighlight(eastl::string const&, unsigned int, bool);
        bool
        AddEntityHighlight<eastl::string>(eastl::string const&,
                                          eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>,
                                                          eastl::equal_to<eastl::string>, eastl::allocator, false>&,
                                          unsigned int, HighlightCategory);
        void UpdateSave(HighlightCategory, int, bool);
        void AddTileHighlight(rs2lib::CoordGrid const&, unsigned int, bool, bool);
        GetTileHighlightMap(rs2lib::CoordGrid const&);
        bool AddEntityHighlight<int>(
            int const&,
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
            unsigned int, HighlightCategory);
        void AddNPCTypeHighlight(int, unsigned int, bool);
        void AddLocTypeHighlight(int, unsigned int, bool);
        void AddObjTypeHighlight(int, unsigned int, bool);
        void AddOpGroupHighlight(OpGroup const&, unsigned int, bool);
        void RemoveNPCHighlight(int, int, unsigned int);
        void RemovePlayerHighlight(eastl::string const&, unsigned int);
        bool RemoveEntityHighlight<int>(
            int const&,
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
            unsigned int, HighlightCategory);
        void RemoveGroupHighlight<int>(
            int const&,
            eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
            unsigned int, HighlightCategory);
        void RemoveGroupHighlight<OpGroup>(OpGroup const&,
                                           eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>,
                                                           eastl::equal_to<OpGroup>, eastl::allocator, false>&,
                                           unsigned int, HighlightCategory);
        void IsLocHighlighted(int, int, unsigned int, bool);
        void IsObjHighlighted(int, int, unsigned int, bool);
        void IsTileHighlighted(int, unsigned int, bool);
        bool IsEntityHighlighted<int>(
            int const&,
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
            unsigned int);
        void IsNPCTypeHighlighted(int, unsigned int);
        bool IsGroupHighlighted<int>(
            int const&,
            eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
            unsigned int);
        void IsLocTypeHighlighted(int, unsigned int);
        void IsObjTypeHighlighted(int, unsigned int);
        void IsOpGroupHighlighted(OpGroup const&, unsigned int);
        bool IsGroupHighlighted<OpGroup>(OpGroup const&,
                                         eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>,
                                                         eastl::equal_to<OpGroup>, eastl::allocator, false>&,
                                         unsigned int);
        HighlightChannelProperties const*
        GetHighlightProperties<long long>(long long const&,
                                          eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                          eastl::equal_to<long long>, eastl::allocator, false>&,
                                          HighlightCategory) const;
        HighlightChannelProperties const* GetGroupHighlightProperties<int>(
            int const&,
            eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
            HighlightCategory) const;
        HighlightChannelProperties const*
        GetGroupHighlightProperties<OpGroup>(OpGroup const&,
                                             eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>,
                                                             eastl::equal_to<OpGroup>, eastl::allocator, false>&,
                                             HighlightCategory) const;
        int const GetActiveChannel<long long>(long long const&,
                                              eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                              eastl::equal_to<long long>, eastl::allocator, false>&,
                                              HighlightCategory) const;
        GetHighlightProperties(int, HighlightCategory) const;
        HighlightChannelProperties const*
        GetHighlightProperties<eastl::string>(eastl::string const&,
                                              eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>,
                                                              eastl::equal_to<eastl::string>, eastl::allocator, false>&,
                                              HighlightCategory) const;
        int const GetActiveChannel<int>(
            int const&,
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
            HighlightCategory) const;
        HighlightChannelProperties const* GetHighlightProperties<int>(
            int const&,
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
            HighlightCategory) const;
        void OnNPCAdded(shared_ptr<ClientNpc> const&);
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<int, NpcUID>(
            int const&,
            eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
            NpcUID const&, HighlightCategory) const;
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<OpGroup, NpcUID>(
            OpGroup const&,
            eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
                            false>&,
            NpcUID const&, HighlightCategory) const;
        void OnWallLocAdded(shared_ptr<dash3d::Wall> const&, int, int, int, int);
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Wall>>(
            int const&,
            eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
            EntityWithCoord<dash3d::Wall> const&, HighlightCategory) const;
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Wall>>(
            OpGroup const&,
            eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
                            false>&,
            EntityWithCoord<dash3d::Wall> const&, HighlightCategory) const;
        void OnDecorLocAdded(shared_ptr<dash3d::Decor> const&, int, int, int, int);
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Decor>>(
            int const&,
            eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
            EntityWithCoord<dash3d::Decor> const&, HighlightCategory) const;
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Decor>>(
            OpGroup const&,
            eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
                            false>&,
            EntityWithCoord<dash3d::Decor> const&, HighlightCategory) const;
        void OnGroundDecorLocAdded(shared_ptr<dash3d::GroundDecor> const&, int, int, int, int);
        HighlightChannelProperties const*
        CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::GroundDecor>>(
            int const&,
            eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
            EntityWithCoord<dash3d::GroundDecor> const&, HighlightCategory) const;
        HighlightChannelProperties const*
        CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::GroundDecor>>(
            OpGroup const&,
            eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
                            false>&,
            EntityWithCoord<dash3d::GroundDecor> const&, HighlightCategory) const;
        void OnSceneryLocAdded(shared_ptr<dash3d::Sprite> const&, int, int, int, int);
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Sprite>>(
            int const&,
            eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
            EntityWithCoord<dash3d::Sprite> const&, HighlightCategory) const;
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Sprite>>(
            OpGroup const&,
            eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
                            false>&,
            EntityWithCoord<dash3d::Sprite> const&, HighlightCategory) const;
        void OnObjAdded(shared_ptr<ClientObj> const&, int, int, int);
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<int, EntityWithCoord<ClientObj>>(
            int const&,
            eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
            EntityWithCoord<ClientObj> const&, HighlightCategory) const;
        HighlightChannelProperties const* CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<ClientObj>>(
            OpGroup const&,
            eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator,
                            false>&,
            EntityWithCoord<ClientObj> const&, HighlightCategory) const;
        void OnPlayerAdded(ClientPlayer&);
        void OnTileAdded(int, int, int);
        void RebuildRegionHighlights();
        ulong AddEntityHighlight(unsigned int&, unsigned int, HighlightCategory) const;
        void GetHighlightProperties(unsigned int const&, HighlightCategory) const;
        int const
        GetActiveChannel<eastl::string>(eastl::string const&,
                                        eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>,
                                                        eastl::equal_to<eastl::string>, eastl::allocator, false>&,
                                        HighlightCategory) const;
        void IsNPCHighlighted(int, int, unsigned int);
        void IsPlayerHighlighted(eastl::string const&, unsigned int);
        void LoadFromFiles();
        bool IsEntityHighlighted<long long>(long long const&,
                                            eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                            eastl::equal_to<long long>, eastl::allocator, false>&,
                                            unsigned int);
        bool
        IsEntityHighlighted<eastl::string>(eastl::string const&,
                                           eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>,
                                                           eastl::equal_to<eastl::string>, eastl::allocator, false>&,
                                           unsigned int);

        // data members, from how the methods use this: 4305424 bytes
        char _unknown_0[440];
        CoordMapSquare field_440; // offset 440
        char _unknown_452[3644];
        int field_4096;        // offset 4096
        int field_4100;        // offset 4100
        int field_4104;        // offset 4104
        int field_4108;        // offset 4108
        undefined1 field_4112; // offset 4112
        char _unknown_4113[55];
        undefined1 field_4168; // offset 4168
        char _unknown_4169[55];
        undefined1 field_4224; // offset 4224
        char _unknown_4225[55];
        undefined1 field_4280; // offset 4280
        char _unknown_4281[55];
        undefined1 field_4336; // offset 4336
        char _unknown_4337[55];
        undefined1 field_4392; // offset 4392
        char _unknown_4393[4301023];
        undefined1 field_4305416; // offset 4305416
        bool field_4305417;       // offset 4305417
        bool field_4305418;       // offset 4305418
        char _unknown_4305419[5];
    };

    // 0x10000ec60, 32 bytes, inline, placed by class name
    // HighlightManager::ShouldRebuildRegionHighlightsForChannel(int, HighlightCategory)
    ulong HighlightManager::ShouldRebuildRegionHighlightsForChannel() {
        EntityHighlight* this;

        this = (EntityHighlight*)GetHighlightProperties();
        if (this == (EntityHighlight*)0) {
            return 0;
        }
        return IgnoreRebuild() ^ 1;
    }

    // 0x100010910, 304 bytes, inline, placed by class name
    // bool HighlightManager::RemoveEntityHighlight<long long>(long long const&, eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>&, unsigned int, HighlightCategory)
    bool HighlightManager::RemoveEntityHighlight<long long>(undefined8 param_2_00, undefined8 param_2, uint param_3,
                                                            undefined4 param_5) {
        byte bVar1;
        bool bVar2;
        int iVar3;
        long lVar4;
        hashtable_iterator_base* extraout_RDX;
        bool bVar5;
        hashtable_iterator_base local_68[16];
        undefined8 local_58;
        undefined8 local_50;
        eastl local_48[16];
        int local_34;

        if (31 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            180, "Highlight channel ID %d is too large. Must be between 0 and %d", (ulong)param_3, 31);
        }
        eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                         eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((longlong*)local_48);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator!=(local_48, local_68, extraout_RDX);
        bVar5 = false;
        if (bVar2) {
            lVar4 = local_48->HeapBeginPtr();
            local_34 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 8), param_5);
            lVar4 = local_48->HeapBeginPtr();
            if (*(uint*)(lVar4 + 8) == param_3) {
                new (&local_58)
                    eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(local_48);
                eastl::hashtable<
                    LoadingScreenScript::Keyframe*, eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>,
                    eastl::allocator, eastl::use_first<eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>>,
                    eastl::equal_to<LoadingScreenScript::Keyframe*>, eastl::hash<LoadingScreenScript::Keyframe*>,
                    eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                    true>::erase(local_68, param_2, local_58, local_50);
                bVar5 = local_34 == -1;
            } else {
                bVar1 = (byte)param_3 & 31;
                lVar4 = local_48->HeapBeginPtr();
                *(uint*)(lVar4 + 8) = *(uint*)(lVar4 + 8) & (-2 << bVar1 | 4294967294U >> 32 - bVar1);
                lVar4 = local_48->HeapBeginPtr();
                iVar3 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 8), param_5);
                bVar5 = local_34 == iVar3;
            }
            bVar5 = !bVar5;
        }
        if (!bVar2) {
            bVar5 = false;
        }
        return bVar5;
    }

    // 0x100010c20, 304 bytes, inline, placed by class name
    // bool HighlightManager::RemoveEntityHighlight<eastl::string >(eastl::string const&, eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string >, eastl::equal_to<eastl::string >, eastl::allocator, false>&, unsigned int, HighlightCategory)
    bool HighlightManager::RemoveEntityHighlight<eastl::string>(undefined8 param_2_00, undefined8 param_2, uint param_3,
                                                                undefined4 param_5) {
        byte bVar1;
        bool bVar2;
        int iVar3;
        long lVar4;
        hashtable_iterator_base* extraout_RDX;
        bool bVar5;
        hashtable_iterator_base local_68[16];
        undefined8 local_58;
        undefined8 local_50;
        basic_string local_48[16];
        int local_34;

        if (31 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            180, "Highlight channel ID %d is too large. Must be between 0 and %d", (ulong)param_3, 31);
        }
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, int>>, eastl::equal_to<eastl::string>,
                         eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find(local_48);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator!=((eastl*)local_48, local_68, extraout_RDX);
        bVar5 = false;
        if (bVar2) {
            lVar4 = local_48->HeapBeginPtr();
            local_34 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 32), param_5);
            lVar4 = local_48->HeapBeginPtr();
            if (*(uint*)(lVar4 + 32) == param_3) {
                new (&local_58)
                    eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(local_48);
                eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                 eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>::erase(local_68, param_2, local_58, local_50);
                bVar5 = local_34 == -1;
            } else {
                bVar1 = (byte)param_3 & 31;
                lVar4 = local_48->HeapBeginPtr();
                *(uint*)(lVar4 + 32) = *(uint*)(lVar4 + 32) & (-2 << bVar1 | 4294967294U >> 32 - bVar1);
                lVar4 = local_48->HeapBeginPtr();
                iVar3 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 32), param_5);
                bVar5 = local_34 == iVar3;
            }
            bVar5 = !bVar5;
        }
        if (!bVar2) {
            bVar5 = false;
        }
        return bVar5;
    }

    // 0x100011050, 64 bytes, inline, placed by class name
    // bool HighlightManager::AddEntityHighlight<long long>(long long const&, eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>&, unsigned int, HighlightCategory)
    bool HighlightManager::AddEntityHighlight<long long>(
        longlong* param_1,
        hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>*
            param_2,
        undefined4 param_3, undefined4 param_5) {
        undefined8 uVar1;

        uVar1 = eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                eastl::allocator, false>::operator[](param_2, param_1);
        return (bool)AddEntityHighlight(this, uVar1, param_3, param_5);
    }

    // 0x1000111c0, 80 bytes, inline, placed by class name
    // HighlightManager::GetLocHighlightMap(rs2lib::CoordGrid const&)
    undefined1* HighlightManager::GetLocHighlightMap(CoordGrid* param_1) {
        int iVar2;
        undefined1* puVar3;

        if (param_1->InRegion() == '\0') {
            iVar2 = GetMapSquareIndex(param_1);
            puVar3 = (undefined1*)std::array<
                eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                eastl::allocator, false>,
                25600ul>::operator[]((array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                            eastl::equal_to<long long>, eastl::allocator, false>,
                                            25600ul>*)&field_4448,
                                     (long)iVar2);
        } else {
            puVar3 = &field_4305248;
        }
        return puVar3;
    }

    // 0x100011360, 80 bytes, inline, placed by class name
    // HighlightManager::GetObjHighlightMap(rs2lib::CoordGrid const&)
    undefined1* HighlightManager::GetObjHighlightMap(CoordGrid* param_1) {
        int iVar2;
        undefined1* puVar3;

        if (param_1->InRegion() == '\0') {
            iVar2 = GetMapSquareIndex(param_1);
            puVar3 = (undefined1*)std::array<
                eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>,
                                eastl::allocator, false>,
                25600ul>::operator[]((array<eastl::hash_map<long long, unsigned int, eastl::hash<long long>,
                                                            eastl::equal_to<long long>, eastl::allocator, false>,
                                            25600ul>*)&field_1438048,
                                     (long)iVar2);
        } else {
            puVar3 = &field_4305304;
        }
        return puVar3;
    }

    // 0x100011410, 64 bytes, inline, placed by class name
    // bool HighlightManager::AddEntityHighlight<eastl::string >(eastl::string const&, eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string >, eastl::equal_to<eastl::string >, eastl::allocator, false>&, unsigned int, HighlightCategory)
    bool HighlightManager::AddEntityHighlight<eastl::string>(
        basic_string* param_1,
        hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                 eastl::allocator, false>* param_2,
        undefined4 param_3, undefined4 param_5) {
        undefined8 uVar1;

        uVar1 = eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                                eastl::allocator, false>::operator[](param_2, param_1);
        return (bool)AddEntityHighlight(this, uVar1, param_3, param_5);
    }

    // 0x100011560, 80 bytes, inline, placed by class name
    // HighlightManager::GetTileHighlightMap(rs2lib::CoordGrid const&)
    undefined1* HighlightManager::GetTileHighlightMap(CoordGrid* param_1) {
        int iVar2;
        undefined1* puVar3;

        if (param_1->InRegion() == '\0') {
            iVar2 = GetMapSquareIndex(param_1);
            puVar3 = (undefined1*)std::array<
                eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                25600ul>::operator[]((array<eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                            eastl::allocator, false>,
                                            25600ul>*)&field_2871648,
                                     (long)iVar2);
        } else {
            puVar3 = &field_4305360;
        }
        return puVar3;
    }

    // 0x1000115b0, 64 bytes, inline, placed by class name
    // bool HighlightManager::AddEntityHighlight<int>(int const&, eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, unsigned int, HighlightCategory)
    bool HighlightManager::AddEntityHighlight<int>(
        int* param_1,
        hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>* param_2,
        undefined4 param_3, undefined4 param_5) {
        undefined8 uVar1;

        uVar1 = eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                false>::operator[](param_2, param_1);
        return (bool)AddEntityHighlight(this, uVar1, param_3, param_5);
    }

    // 0x100012a20, 304 bytes, inline, placed by class name
    // bool HighlightManager::RemoveEntityHighlight<int>(int const&, eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, unsigned int, HighlightCategory)
    bool HighlightManager::RemoveEntityHighlight<int>(undefined8 param_2_00, undefined8 param_2, uint param_3,
                                                      undefined4 param_5) {
        byte bVar1;
        bool bVar2;
        int iVar3;
        long lVar4;
        hashtable_iterator_base* extraout_RDX;
        bool bVar5;
        hashtable_iterator_base local_68[16];
        undefined8 local_58;
        undefined8 local_50;
        eastl local_48[16];
        int local_34;

        if (31 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            180, "Highlight channel ID %d is too large. Must be between 0 and %d", (ulong)param_3, 31);
        }
        eastl::hashtable<int, eastl::pair<int const, int>, BucketAllocatorEASTL,
                         eastl::use_first<eastl::pair<int const, int>>, eastl::equal_to<int>, eastl::hash<int>,
                         eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                         true>::find((int*)local_48);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator!=(local_48, local_68, extraout_RDX);
        bVar5 = false;
        if (bVar2) {
            lVar4 = local_48->HeapBeginPtr();
            local_34 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 4), param_5);
            lVar4 = local_48->HeapBeginPtr();
            if (*(uint*)(lVar4 + 4) == param_3) {
                new (&local_58)
                    eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(local_48);
                eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                 eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                 eastl::prime_rehash_policy, false, true, true>::erase(local_68, param_2, local_58,
                                                                                       local_50);
                bVar5 = local_34 == -1;
            } else {
                bVar1 = (byte)param_3 & 31;
                lVar4 = local_48->HeapBeginPtr();
                *(uint*)(lVar4 + 4) = *(uint*)(lVar4 + 4) & (-2 << bVar1 | 4294967294U >> 32 - bVar1);
                lVar4 = local_48->HeapBeginPtr();
                iVar3 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 4), param_5);
                bVar5 = local_34 == iVar3;
            }
            bVar5 = !bVar5;
        }
        if (!bVar2) {
            bVar5 = false;
        }
        return bVar5;
    }

    // 0x100012b50, 304 bytes, inline, placed by class name
    // void HighlightManager::RemoveGroupHighlight<int>(int const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, unsigned int, HighlightCategory)
    void HighlightManager::RemoveGroupHighlight<int>(undefined8 param_2_00, undefined8 param_2, uint param_3,
                                                     undefined4 param_5) {
        HighlightedGroup* pHVar1;
        int iVar4;
        int iVar5;
        long lVar6;
        hashtable_iterator_base* extraout_RDX;
        uint uVar7;
        hashtable_iterator_base local_70[16];
        eastl local_60[16];
        undefined8 local_50;
        undefined8 local_48;
        HighlightedGroup* local_40;

        if (31 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            224, "Highlight channel ID %d is too large. Must be between 0 and %d", (ulong)param_3, 31);
        }
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_60);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_60, local_70, extraout_RDX)) {
            uVar7 = 1 << ((byte)param_3 & 31);
            lVar6 = local_60->HeapBeginPtr();
            local_40 = (HighlightedGroup*)(lVar6 + 8);
            iVar4 = GetActiveChannelFromBitmask((HighlightManager*)this, *(undefined4*)(lVar6 + 8), param_5);
            pHVar1 = local_40;
            if (*(uint*)(lVar6 + 8) == uVar7) {
                if (iVar4 != -1) {
                    *(undefined4*)local_40 = 0;
                    UpdateCachedHighlights((HighlightManager*)this, local_40);
                }
                new (&local_50)
                    eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(local_60);
                eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                                 eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                 eastl::prime_rehash_policy, false, true, true>::erase(local_70, param_2, local_50,
                                                                                       local_48);
            } else {
                uVar7 = *(uint*)(lVar6 + 8) & ~uVar7;
                *(uint*)local_40 = uVar7;
                iVar5 = GetActiveChannelFromBitmask((HighlightManager*)this, uVar7, param_5);
                if (iVar4 != iVar5) {
                    UpdateCachedHighlights((HighlightManager*)this, pHVar1);
                }
            }
        }
    }

    // 0x100012c80, 320 bytes, inline, placed by class name
    // void HighlightManager::RemoveGroupHighlight<OpGroup>(OpGroup const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false>&, unsigned int, HighlightCategory)
    void HighlightManager::RemoveGroupHighlight<OpGroup>(undefined8 param_2_00, undefined8 param_2, uint param_3,
                                                         undefined4 param_5) {
        HighlightedGroup* pHVar1;
        HighlightManager* pHVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        long lVar6;
        hashtable_iterator_base* extraout_RDX;
        uint uVar7;
        hashtable_iterator_base local_70[16];
        Layout local_60[16];
        hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false> local_50[16];
        HighlightedGroup* local_40;
        HighlightManager* local_38;

        if (31 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            224, "Highlight channel ID %d is too large. Must be between 0 and %d", (ulong)param_3, 31);
        }
        local_38 = this;
        eastl::hashtable<OpGroup, eastl::pair<OpGroup_const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<OpGroup_const, HighlightedGroup>>, eastl::equal_to<OpGroup>,
                         eastl::hash<OpGroup>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((OpGroup*)local_60);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar3 = eastl::operator!=((eastl*)local_60, local_70, extraout_RDX);
        if (bVar3) {
            uVar7 = 1 << ((byte)param_3 & 31);
            lVar6 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_60);
            pHVar2 = local_38;
            local_40 = (HighlightedGroup*)(lVar6 + 360);
            iVar4 = GetActiveChannelFromBitmask(local_38, *(undefined4*)(lVar6 + 360), param_5);
            pHVar1 = local_40;
            if (*(uint*)(lVar6 + 360) == uVar7) {
                if (iVar4 != -1) {
                    *(undefined4*)local_40 = 0;
                    UpdateCachedHighlights(local_38, local_40);
                }
                eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false,
                                          false>::hashtable_iterator(local_50, (hashtable_iterator*)local_60);
                eastl::hashtable<OpGroup, eastl::pair<OpGroup_const, HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<OpGroup_const, HighlightedGroup>>,
                                 eastl::equal_to<OpGroup>, eastl::hash<OpGroup>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>::erase(local_70, param_2, local_50._0_8_, local_50._8_8_);
            } else {
                uVar7 = *(uint*)(lVar6 + 360) & ~uVar7;
                *(uint*)local_40 = uVar7;
                iVar5 = GetActiveChannelFromBitmask(pHVar2, uVar7, param_5);
                if (iVar4 != iVar5) {
                    UpdateCachedHighlights(local_38, pHVar1);
                }
            }
        }
    }

    // 0x100012f90, 160 bytes, inline, placed by class name
    // bool HighlightManager::IsEntityHighlighted<int>(int const&, eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, unsigned int)
    bool HighlightManager::IsEntityHighlighted<int>(int* param_1, hash_map* param_2, uint param_3) {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        if (31 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            245, "Highlight channel ID %d is too large. Must be between 0 and %d", (ulong)param_3, 31);
        }
        eastl::hashtable<int, eastl::pair<int const, int>, BucketAllocatorEASTL,
                         eastl::use_first<eastl::pair<int const, int>>, eastl::equal_to<int>, eastl::hash<int>,
                         eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                         true>::find((int*)local_38);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator==(local_38, local_48, extraout_RDX);
        if (bVar1) {
            bVar1 = false;
        } else {
            lVar2 = local_38->HeapBeginPtr();
            bVar1 = (*(uint*)(lVar2 + 4) >> (param_3 & 31) & 1) != 0;
        }
        return bVar1;
    }

    // 0x100013060, 160 bytes, inline, placed by class name
    // bool HighlightManager::IsGroupHighlighted<int>(int const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, unsigned int)
    bool HighlightManager::IsGroupHighlighted<int>(int* param_1, hash_map* param_2, uint param_3) {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        if (31 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            266, "Highlight channel ID %d is too large. Must be between 0 and %d", (ulong)param_3, 31);
        }
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_38);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator==(local_38, local_48, extraout_RDX);
        if (bVar1) {
            bVar1 = false;
        } else {
            lVar2 = local_38->HeapBeginPtr();
            bVar1 = (*(uint*)(lVar2 + 8) >> (param_3 & 31) & 1) != 0;
        }
        return bVar1;
    }

    // 0x100013180, 160 bytes, inline, placed by class name
    // bool HighlightManager::IsGroupHighlighted<OpGroup>(OpGroup const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false>&, unsigned int)
    bool HighlightManager::IsGroupHighlighted<OpGroup>(OpGroup* param_1, hash_map* param_2, uint param_3) {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        Layout local_38[16];

        if (31 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            266, "Highlight channel ID %d is too large. Must be between 0 and %d", (ulong)param_3, 31);
        }
        eastl::hashtable<OpGroup, eastl::pair<OpGroup_const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<OpGroup_const, HighlightedGroup>>, eastl::equal_to<OpGroup>,
                         eastl::hash<OpGroup>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((OpGroup*)local_38);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator==((eastl*)local_38, local_48, extraout_RDX);
        if (bVar1) {
            bVar1 = false;
        } else {
            lVar2 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_38);
            bVar1 = (*(uint*)(lVar2 + 360) >> (param_3 & 31) & 1) != 0;
        }
        return bVar1;
    }

    // 0x100013230, 48 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::GetHighlightProperties<long long>(long long const&, eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>&, HighlightCategory) const
    HighlightChannelProperties*
    HighlightManager::GetHighlightProperties<long long>(undefined8 param_2, undefined8 param_3, undefined4 param_4) {
        int iVar2;

        iVar2 = GetActiveChannel<long long>();
        return (HighlightChannelProperties*)GetHighlightProperties(this, iVar2, param_4);
    }

    // 0x100013260, 160 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::GetGroupHighlightProperties<int>(int const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, HighlightCategory) const
    HighlightChannelProperties* HighlightManager::GetGroupHighlightProperties<int>(undefined8 param_2,
                                                                                   undefined8 param_3, int param_4) {
        uint uVar2;
        long lVar3;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* pHVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_50[16];
        eastl local_40[16];

        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_40);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_40, local_50, extraout_RDX)) {
            lVar3 = local_40->HeapBeginPtr();
            uVar2 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar3 + 8), param_4);
            if (uVar2 < 32) {
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_4);
                pHVar4 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_00, (long)(int)uVar2);
                return pHVar4;
            }
        }
        return (HighlightChannelProperties*)0;
    }

    // 0x100013300, 160 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::GetGroupHighlightProperties<OpGroup>(OpGroup const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false>&, HighlightCategory) const
    HighlightChannelProperties*
    HighlightManager::GetGroupHighlightProperties<OpGroup>(undefined8 param_2, undefined8 param_3, int param_4) {
        uint uVar2;
        long lVar3;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* pHVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_50[16];
        Layout local_40[16];

        eastl::hashtable<OpGroup, eastl::pair<OpGroup_const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<OpGroup_const, HighlightedGroup>>, eastl::equal_to<OpGroup>,
                         eastl::hash<OpGroup>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((OpGroup*)local_40);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=((eastl*)local_40, local_50, extraout_RDX)) {
            lVar3 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_40);
            uVar2 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar3 + 360), param_4);
            if (uVar2 < 32) {
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_4);
                pHVar4 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_00, (long)(int)uVar2);
                return pHVar4;
            }
        }
        return (HighlightChannelProperties*)0;
    }

    // 0x100013760, 128 bytes, inline, placed by class name
    // int const HighlightManager::GetActiveChannel<long long>(long long const&, eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>&, HighlightCategory) const
    int HighlightManager::GetActiveChannel<long long>(undefined8 param_2, undefined8 param_3, undefined4 param_4) {
        bool bVar1;
        int iVar2;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_50[16];
        eastl local_40[16];

        eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                         eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((longlong*)local_40);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator==(local_40, local_50, extraout_RDX);
        iVar2 = -1;
        if (!bVar1) {
            lVar3 = local_40->HeapBeginPtr();
            iVar2 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar3 + 8), param_4);
        }
        return iVar2;
    }

    // 0x100013970, 48 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::GetHighlightProperties<eastl::string >(eastl::string const&, eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string >, eastl::equal_to<eastl::string >, eastl::allocator, false>&, HighlightCategory) const
    HighlightChannelProperties* HighlightManager::GetHighlightProperties<eastl::string>(undefined8 param_2,
                                                                                        undefined8 param_3,
                                                                                        undefined4 param_4) {
        int iVar2;

        iVar2 = GetActiveChannel<eastl::string>();
        return (HighlightChannelProperties*)GetHighlightProperties(this, iVar2, param_4);
    }

    // 0x1000139b0, 128 bytes, inline, placed by class name
    // int const HighlightManager::GetActiveChannel<int>(int const&, eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, HighlightCategory) const
    int HighlightManager::GetActiveChannel<int>(undefined8 param_2, undefined8 param_3, undefined4 param_4) {
        bool bVar1;
        int iVar2;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_50[16];
        eastl local_40[16];

        eastl::hashtable<int, eastl::pair<int const, int>, BucketAllocatorEASTL,
                         eastl::use_first<eastl::pair<int const, int>>, eastl::equal_to<int>, eastl::hash<int>,
                         eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                         true>::find((int*)local_40);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator==(local_40, local_50, extraout_RDX);
        iVar2 = -1;
        if (!bVar1) {
            lVar3 = local_40->HeapBeginPtr();
            iVar2 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar3 + 4), param_4);
        }
        return iVar2;
    }

    // 0x100013a30, 48 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::GetHighlightProperties<int>(int const&, eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, HighlightCategory) const
    HighlightChannelProperties* HighlightManager::GetHighlightProperties<int>(undefined8 param_2, undefined8 param_3,
                                                                              undefined4 param_4) {
        int iVar2;

        iVar2 = GetActiveChannel<int>();
        return (HighlightChannelProperties*)GetHighlightProperties(this, iVar2, param_4);
    }

    // 0x100014170, 192 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::CacheAndGetGroupHighlightProperties<int, NpcUID>(int const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, NpcUID const&, HighlightCategory) const
    HighlightChannelProperties*
    HighlightManager::CacheAndGetGroupHighlightProperties<int, NpcUID>(undefined8 param_2, undefined8 param_3_00,
                                                                       NpcUID* param_3, int param_5) {
        uint uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* pHVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_58[16];
        eastl local_48[20];

        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_48);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_48, local_58, extraout_RDX)) {
            lVar4 = local_48->HeapBeginPtr();
            ((lVar4 + 8))->CacheEntity(param_3);
            lVar4 = local_48->HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 8), param_5);
            if (uVar3 < 32) {
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_5);
                pHVar5 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_00, (long)(int)uVar3);
                return pHVar5;
            }
        }
        return (HighlightChannelProperties*)0;
    }

    // 0x100014240, 192 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, NpcUID>(OpGroup const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false>&, NpcUID const&, HighlightCategory) const
    HighlightChannelProperties*
    HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, NpcUID>(undefined8 param_2, undefined8 param_3_00,
                                                                           NpcUID* param_3, int param_5) {
        uint uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* pHVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_58[16];
        Layout local_48[20];

        eastl::hashtable<OpGroup, eastl::pair<OpGroup_const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<OpGroup_const, HighlightedGroup>>, eastl::equal_to<OpGroup>,
                         eastl::hash<OpGroup>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((OpGroup*)local_48);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=((eastl*)local_48, local_58, extraout_RDX)) {
            lVar4 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_48);
            ((lVar4 + 360))->CacheEntity(param_3);
            lVar4 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_48);
            uVar3 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 360), param_5);
            if (uVar3 < 32) {
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_5);
                pHVar5 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_00, (long)(int)uVar3);
                return pHVar5;
            }
        }
        return (HighlightChannelProperties*)0;
    }

    // 0x100014540, 192 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Wall> >(int const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, EntityWithCoord<dash3d::Wall> const&, HighlightCategory) const
    HighlightChannelProperties*
    HighlightManager::CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Wall>>(undefined8 param_2,
                                                                                              undefined8 param_3_00,
                                                                                              EntityWithCoord* param_3,
                                                                                              int param_5) {
        uint uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* pHVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_58[16];
        eastl local_48[20];

        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_48);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_48, local_58, extraout_RDX)) {
            lVar4 = local_48->HeapBeginPtr();
            ((lVar4 + 8))->CacheEntity(param_3);
            lVar4 = local_48->HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 8), param_5);
            if (uVar3 < 32) {
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_5);
                pHVar5 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_00, (long)(int)uVar3);
                return pHVar5;
            }
        }
        return (HighlightChannelProperties*)0;
    }

    // 0x100014600, 192 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Wall> >(OpGroup const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false>&, EntityWithCoord<dash3d::Wall> const&, HighlightCategory) const
    HighlightChannelProperties*
    HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Wall>>(
        undefined8 param_2, undefined8 param_3_00, EntityWithCoord* param_3, int param_5) {
        uint uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* pHVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_58[16];
        Layout local_48[20];

        eastl::hashtable<OpGroup, eastl::pair<OpGroup_const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<OpGroup_const, HighlightedGroup>>, eastl::equal_to<OpGroup>,
                         eastl::hash<OpGroup>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((OpGroup*)local_48);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=((eastl*)local_48, local_58, extraout_RDX)) {
            lVar4 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_48);
            ((lVar4 + 360))->CacheEntity(param_3);
            lVar4 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_48);
            uVar3 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 360), param_5);
            if (uVar3 < 32) {
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_5);
                pHVar5 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_00, (long)(int)uVar3);
                return pHVar5;
            }
        }
        return (HighlightChannelProperties*)0;
    }

    // 0x100014900, 192 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Decor> >(int const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, EntityWithCoord<dash3d::Decor> const&, HighlightCategory) const
    HighlightChannelProperties*
    HighlightManager::CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Decor>>(undefined8 param_2,
                                                                                               undefined8 param_3_00,
                                                                                               EntityWithCoord* param_3,
                                                                                               int param_5) {
        uint uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* pHVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_58[16];
        eastl local_48[20];

        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_48);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_48, local_58, extraout_RDX)) {
            lVar4 = local_48->HeapBeginPtr();
            ((lVar4 + 8))->CacheEntity(param_3);
            lVar4 = local_48->HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 8), param_5);
            if (uVar3 < 32) {
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_5);
                pHVar5 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_00, (long)(int)uVar3);
                return pHVar5;
            }
        }
        return (HighlightChannelProperties*)0;
    }

    // 0x1000149c0, 192 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Decor> >(OpGroup const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false>&, EntityWithCoord<dash3d::Decor> const&, HighlightCategory) const
    HighlightChannelProperties*
    HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Decor>>(
        undefined8 param_2, undefined8 param_3_00, EntityWithCoord* param_3, int param_5) {
        uint uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* pHVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_58[16];
        Layout local_48[20];

        eastl::hashtable<OpGroup, eastl::pair<OpGroup_const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<OpGroup_const, HighlightedGroup>>, eastl::equal_to<OpGroup>,
                         eastl::hash<OpGroup>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((OpGroup*)local_48);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=((eastl*)local_48, local_58, extraout_RDX)) {
            lVar4 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_48);
            ((lVar4 + 360))->CacheEntity(param_3);
            lVar4 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_48);
            uVar3 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 360), param_5);
            if (uVar3 < 32) {
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_5);
                pHVar5 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_00, (long)(int)uVar3);
                return pHVar5;
            }
        }
        return (HighlightChannelProperties*)0;
    }

    // 0x100014cc0, 192 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::GroundDecor> >(int const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, EntityWithCoord<dash3d::GroundDecor> const&, HighlightCategory) const
    HighlightChannelProperties*
    HighlightManager::CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::GroundDecor>>(
        undefined8 param_2, undefined8 param_3_00, EntityWithCoord* param_3, int param_5) {
        uint uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* pHVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_58[16];
        eastl local_48[20];

        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_48);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_48, local_58, extraout_RDX)) {
            lVar4 = local_48->HeapBeginPtr();
            ((lVar4 + 8))->CacheEntity(param_3);
            lVar4 = local_48->HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 8), param_5);
            if (uVar3 < 32) {
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_5);
                pHVar5 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_00, (long)(int)uVar3);
                return pHVar5;
            }
        }
        return (HighlightChannelProperties*)0;
    }

    // 0x100014d80, 192 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::GroundDecor> >(OpGroup const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false>&, EntityWithCoord<dash3d::GroundDecor> const&, HighlightCategory) const
    HighlightChannelProperties*
    HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::GroundDecor>>(
        undefined8 param_2, undefined8 param_3_00, EntityWithCoord* param_3, int param_5) {
        uint uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* pHVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_58[16];
        Layout local_48[20];

        eastl::hashtable<OpGroup, eastl::pair<OpGroup_const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<OpGroup_const, HighlightedGroup>>, eastl::equal_to<OpGroup>,
                         eastl::hash<OpGroup>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((OpGroup*)local_48);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=((eastl*)local_48, local_58, extraout_RDX)) {
            lVar4 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_48);
            ((lVar4 + 360))->CacheEntity(param_3);
            lVar4 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_48);
            uVar3 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 360), param_5);
            if (uVar3 < 32) {
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_5);
                pHVar5 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_00, (long)(int)uVar3);
                return pHVar5;
            }
        }
        return (HighlightChannelProperties*)0;
    }

    // 0x100015080, 192 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Sprite> >(int const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, EntityWithCoord<dash3d::Sprite> const&, HighlightCategory) const
    HighlightChannelProperties*
    HighlightManager::CacheAndGetGroupHighlightProperties<int, EntityWithCoord<dash3d::Sprite>>(
        undefined8 param_2, undefined8 param_3_00, EntityWithCoord* param_3, int param_5) {
        uint uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* pHVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_58[16];
        eastl local_48[20];

        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_48);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_48, local_58, extraout_RDX)) {
            lVar4 = local_48->HeapBeginPtr();
            ((lVar4 + 8))->CacheEntity(param_3);
            lVar4 = local_48->HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 8), param_5);
            if (uVar3 < 32) {
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_5);
                pHVar5 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_00, (long)(int)uVar3);
                return pHVar5;
            }
        }
        return (HighlightChannelProperties*)0;
    }

    // 0x100015140, 192 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Sprite> >(OpGroup const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false>&, EntityWithCoord<dash3d::Sprite> const&, HighlightCategory) const
    HighlightChannelProperties*
    HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<dash3d::Sprite>>(
        undefined8 param_2, undefined8 param_3_00, EntityWithCoord* param_3, int param_5) {
        uint uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* pHVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_58[16];
        Layout local_48[20];

        eastl::hashtable<OpGroup, eastl::pair<OpGroup_const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<OpGroup_const, HighlightedGroup>>, eastl::equal_to<OpGroup>,
                         eastl::hash<OpGroup>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((OpGroup*)local_48);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=((eastl*)local_48, local_58, extraout_RDX)) {
            lVar4 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_48);
            ((lVar4 + 360))->CacheEntity(param_3);
            lVar4 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_48);
            uVar3 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 360), param_5);
            if (uVar3 < 32) {
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_5);
                pHVar5 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_00, (long)(int)uVar3);
                return pHVar5;
            }
        }
        return (HighlightChannelProperties*)0;
    }

    // 0x100015430, 192 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::CacheAndGetGroupHighlightProperties<int, EntityWithCoord<ClientObj> >(int const&, eastl::hash_map<int, HighlightedGroup, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, EntityWithCoord<ClientObj> const&, HighlightCategory) const
    HighlightChannelProperties* HighlightManager::CacheAndGetGroupHighlightProperties<int, EntityWithCoord<ClientObj>>(
        undefined8 param_2, undefined8 param_3_00, EntityWithCoord* param_3, int param_5) {
        uint uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* pHVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_58[16];
        eastl local_48[20];

        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_48);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_48, local_58, extraout_RDX)) {
            lVar4 = local_48->HeapBeginPtr();
            ((lVar4 + 8))->CacheEntity(param_3);
            lVar4 = local_48->HeapBeginPtr();
            uVar3 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 8), param_5);
            if (uVar3 < 32) {
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_5);
                pHVar5 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_00, (long)(int)uVar3);
                return pHVar5;
            }
        }
        return (HighlightChannelProperties*)0;
    }

    // 0x1000154f0, 192 bytes, inline, placed by class name
    // HighlightChannelProperties const* HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<ClientObj> >(OpGroup const&, eastl::hash_map<OpGroup, HighlightedGroup, eastl::hash<OpGroup>, eastl::equal_to<OpGroup>, eastl::allocator, false>&, EntityWithCoord<ClientObj> const&, HighlightCategory) const
    HighlightChannelProperties*
    HighlightManager::CacheAndGetGroupHighlightProperties<OpGroup, EntityWithCoord<ClientObj>>(undefined8 param_2,
                                                                                               undefined8 param_3_00,
                                                                                               EntityWithCoord* param_3,
                                                                                               int param_5) {
        uint uVar3;
        long lVar4;
        array<HighlightChannelProperties, 32ul>* this_00;
        HighlightChannelProperties* pHVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_58[16];
        Layout local_48[20];

        eastl::hashtable<OpGroup, eastl::pair<OpGroup_const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<OpGroup_const, HighlightedGroup>>, eastl::equal_to<OpGroup>,
                         eastl::hash<OpGroup>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((OpGroup*)local_48);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=((eastl*)local_48, local_58, extraout_RDX)) {
            lVar4 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_48);
            ((lVar4 + 360))->CacheEntity(param_3);
            lVar4 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_48);
            uVar3 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar4 + 360), param_5);
            if (uVar3 < 32) {
                this_00 = (array<HighlightChannelProperties, 32ul>*)
                    std::array<std::array<HighlightChannelProperties, 32ul>, 9ul>::operator[](
                        (array<std::array<HighlightChannelProperties, 32ul>, 9ul>*)&field_640, (long)param_5);
                pHVar5 = (HighlightChannelProperties*)std::array<HighlightChannelProperties, 32ul>::operator[](
                    this_00, (long)(int)uVar3);
                return pHVar5;
            }
        }
        return (HighlightChannelProperties*)0;
    }

    // 0x1000355b0, 128 bytes, inline, placed by class name
    // int const HighlightManager::GetActiveChannel<eastl::string >(eastl::string const&, eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string >, eastl::equal_to<eastl::string >, eastl::allocator, false>&, HighlightCategory) const
    int HighlightManager::GetActiveChannel<eastl::string>(undefined8 param_2, undefined8 param_3, undefined4 param_4) {
        bool bVar1;
        int iVar2;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_50[16];
        basic_string local_40[16];

        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, int>>, eastl::equal_to<eastl::string>,
                         eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find(local_40);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator==((eastl*)local_40, local_50, extraout_RDX);
        iVar2 = -1;
        if (!bVar1) {
            lVar3 = local_40->HeapBeginPtr();
            iVar2 = GetActiveChannelFromBitmask(this, *(undefined4*)(lVar3 + 32), param_4);
        }
        return iVar2;
    }

    // 0x100036920, 48 bytes, inline, placed by class name
    // HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_4::operator()(EntityWithCoord<dash3d::Wall>&) const
    /* HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_4::TEMPNAMEPLACEHOLDERVALUE(EntityWithCoord<dash3d::Wall>&)
   const */

    void HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_4::operator()(EntityWithCoord* param_1) {
        HighlightManager* this_00;
        longlong lVar1;

        this_00 = *(HighlightManager**)this;
        lVar1 = UniqueStaticEntityKey(*(int*)(param_1 + 4), *(int*)param_1);
        UpdateUniqueLocHighlight(this_00, lVar1);
    }

    // 0x100037280, 48 bytes, inline, placed by class name
    // HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_5::operator()(EntityWithCoord<dash3d::Decor>&) const
    /* HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_5::TEMPNAMEPLACEHOLDERVALUE(EntityWithCoord<dash3d::Decor>&)
   const */

    void HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_5::operator()(EntityWithCoord* param_1) {
        HighlightManager* this_00;
        longlong lVar1;

        this_00 = *(HighlightManager**)this;
        lVar1 = UniqueStaticEntityKey(*(int*)(param_1 + 4), *(int*)param_1);
        UpdateUniqueLocHighlight(this_00, lVar1);
    }

    // 0x100037be0, 48 bytes, inline, placed by class name
    // HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_6::operator()(EntityWithCoord<dash3d::GroundDecor>&) const
    /* HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_6::TEMPNAMEPLACEHOLDERVALUE(EntityWithCoord<dash3d::GroundDecor>&)
   const */

    void HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_6::operator()(EntityWithCoord* param_1) {
        HighlightManager* this_00;
        longlong lVar1;

        this_00 = *(HighlightManager**)this;
        lVar1 = UniqueStaticEntityKey(*(int*)(param_1 + 4), *(int*)param_1);
        UpdateUniqueLocHighlight(this_00, lVar1);
    }

    // 0x100038540, 48 bytes, inline, placed by class name
    // HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_7::operator()(EntityWithCoord<dash3d::Sprite>&) const
    /* HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_7::TEMPNAMEPLACEHOLDERVALUE(EntityWithCoord<dash3d::Sprite>&)
   const */

    void HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_7::operator()(EntityWithCoord* param_1) {
        HighlightManager* this_00;
        longlong lVar1;

        this_00 = *(HighlightManager**)this;
        lVar1 = UniqueStaticEntityKey(*(int*)(param_1 + 4), *(int*)param_1);
        UpdateUniqueLocHighlight(this_00, lVar1);
    }

    // 0x100038ea0, 48 bytes, inline, placed by class name
    // HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_8::operator()(EntityWithCoord<ClientObj>&) const
    /* HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_8::TEMPNAMEPLACEHOLDERVALUE(EntityWithCoord<ClientObj>&)
   const */

    void HighlightManager::UpdateCachedHighlights(HighlightedGroup&)::$_8::operator()(EntityWithCoord* param_1) {
        HighlightManager* this_00;
        longlong lVar1;

        this_00 = *(HighlightManager**)this;
        lVar1 = UniqueStaticEntityKey(*(int*)(param_1 + 4), *(int*)param_1);
        UpdateUniqueObjHighlight(this_00, lVar1);
    }

    // 0x1000b56b0, 64 bytes, inline, placed by class name and debug map
    // HighlightManager::IsNPCHighlighted(int, int, unsigned int)
    void HighlightManager::IsNPCHighlighted(int param_1, int param_2, uint param_3) {
        longlong local_20;

        local_20 = UniqueNPCKey(param_1, param_2);
        IsEntityHighlighted<long long>(this, &local_20, (hash_map*)&field_4112, param_3);
    }

    // 0x1000b5700, 32 bytes, inline, placed by class name and debug map
    // HighlightManager::IsPlayerHighlighted(eastl::string const&, unsigned int)
    void HighlightManager::IsPlayerHighlighted(basic_string* param_1, uint param_2) {
        IsEntityHighlighted<eastl::string>(this, param_1, (hash_map*)&field_4168, param_2);
    }

    // 0x1000f6f20, 16 bytes, inline, placed by class name
    // HighlightManager::LoadFromFiles()
    void HighlightManager::LoadFromFiles() {
        LoadAllFromFiles(this);
    }

    // 0x100124c00, 160 bytes, inline, placed by class name
    // bool HighlightManager::IsEntityHighlighted<long long>(long long const&, eastl::hash_map<long long, unsigned int, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>&, unsigned int)
    bool HighlightManager::IsEntityHighlighted<long long>(longlong* param_1, hash_map* param_2, uint param_3) {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        if (31 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            245, "Highlight channel ID %d is too large. Must be between 0 and %d", (ulong)param_3, 31);
        }
        eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                         eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((longlong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator==(local_38, local_48, extraout_RDX);
        if (bVar1) {
            bVar1 = false;
        } else {
            lVar2 = local_38->HeapBeginPtr();
            bVar1 = (*(uint*)(lVar2 + 8) >> (param_3 & 31) & 1) != 0;
        }
        return bVar1;
    }

    // 0x100124d10, 160 bytes, inline, placed by class name
    // bool HighlightManager::IsEntityHighlighted<eastl::string >(eastl::string const&, eastl::hash_map<eastl::string, unsigned int, eastl::hash<eastl::string >, eastl::equal_to<eastl::string >, eastl::allocator, false>&, unsigned int)
    bool HighlightManager::IsEntityHighlighted<eastl::string>(basic_string* param_1, hash_map* param_2, uint param_3) {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        basic_string local_38[16];

        if (31 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/HighlightManager.h",
                            245, "Highlight channel ID %d is too large. Must be between 0 and %d", (ulong)param_3, 31);
        }
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, int>>, eastl::equal_to<eastl::string>,
                         eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find(local_38);
        eastl::hashtable<int, eastl::pair<int const, HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator==((eastl*)local_38, local_48, extraout_RDX);
        if (bVar1) {
            bVar1 = false;
        } else {
            lVar2 = local_38->HeapBeginPtr();
            bVar1 = (*(uint*)(lVar2 + 32) >> (param_3 & 31) & 1) != 0;
        }
        return bVar1;
    }

} // namespace jag::oldscape::highlight
