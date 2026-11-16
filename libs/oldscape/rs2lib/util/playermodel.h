// libs/oldscape/rs2lib/util/playermodel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib {
    class PlayerModel {
    public:
        void SetBodytype(int);
        GetBodytype() const;
        ~PlayerModel();
        GetPronoun() const;
        void RefreshAppearance();
        void SetDefaultTypeForIdkSlot(int, eastl::fixed_vector<int, 12ul, true, eastl::allocator>&, int);
        GetHeadModel() const;
        PlayerModel();
        PlayerModel(PlayerModel&);
        void SetAppearance(eastl::fixed_vector<int, 12ul, true, eastl::allocator> const&,
                           eastl::fixed_vector<int, 12ul, true, eastl::allocator> const&,
                           eastl::fixed_vector<int, 5ul, true, eastl::allocator> const&, int, int);
        BuildDefaultAppearance(int);
        void CalcBaseId();
        void IdkChangePart(int, bool);
        void IdkChangeColour(int, bool);
        void IdkChangeBodytype(int);
        void IdkSaveDesign(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        GetTempModel(configdecoder::SeqType*, int, configdecoder::SeqType*, int);
        int GetHeadModelCacheId();
        void ResetCache();
        void SetAppearance(eastl::fixed_vector<int, 12ul, true, eastl::allocator> const&,
                           eastl::fixed_vector<int, 12ul, true, eastl::allocator> const&,
                           Array<shared_ptr<configdecoder::ObjTypeCustomisation>, eastl::allocator>, bool,
                           eastl::fixed_vector<int, 5ul, true, eastl::allocator> const&, int, int, int);
        static /* 28 bytes */ m_basePartMap; // = { 8, 11, 4, 6, 9, 7, 10 }
        static /* 16 bytes */ m_recol1s;
        static std::array<Array<short, eastl::allocator>, 5ul> /* 120 bytes */
            m_recol1d;                                         // = array<Array<short,eastl::allocator>,5ul>()
        static /* 16 bytes */ m_recol2s;
        static std::array<Array<short, eastl::allocator>, 5ul> /* 120 bytes */
            m_recol2d;                                         // = array<Array<short,eastl::allocator>,5ul>()
        static /* 21056 bytes */ m_modelCache;
        static LRUHashCache<int, 16ul, 17ul, false, unsigned long long> /* 1536 bytes */
            m_headModelHashToModelCacheID; // = LRUHashCache<int,16ul,17ul,false,unsigned long long>(16, "LRUHashCache")
        static /* 8 bytes */ m_nextHeadModelCacheID;

        // data members, from how the methods use this: 304 bytes
        long field_0; // offset 0
        long field_8; // offset 8
        char _unknown_16[224];
        uint field_240; // offset 240
        char _unknown_244[4];
        ulong field_248; // offset 248
        char _unknown_256[32];
        undefined1 field_288; // offset 288
        char _unknown_289[3];
        undefined4 field_292; // offset 292
        int m_bodytype;       // offset 296
        char _unknown_300[4];
    };

    // 0x10010c980, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PlayerModel::GetBodytype() const
    /* game::GraphicsDefaults::GetSpriteCompassID() const */

    undefined4 game::GraphicsDefaults::GetSpriteCompassID() {
        return m_spriteCompassID;
    }

    // 0x100133240, 16 bytes, complete-object destructor, inline, placed by class name
    // PlayerModel::~PlayerModel(): jumps straight to the base-object destructor

    // 0x100133250, 64 bytes, base-object destructor, inline, placed by class name
    // PlayerModel::~PlayerModel()
    void PlayerModel::~PlayerModel() {
        (&field_264)->~Array();
        (&field_176)->~fixed_vector();
        (&field_88)->~fixed_vector();
        ~fixed_vector();
    }

    // 0x100165a30, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PlayerModel::GetPronoun() const
    /* oldscape::worldmap::Worldmap::GetTileHeight() const */

    undefined4 oldscape::worldmap::Worldmap::GetTileHeight() {
        return m_tileHeight;
    }

} // namespace jag::oldscape::rs2lib

namespace jag::oldscape::helpers {
    // 0x10010c990, 192 bytes, inline, placed by debug map only (low confidence)
    // eastl::list<int, eastl::allocator> GetKeysIf<int, SubInterface, Client::CloseModal()::$_15>(eastl::hash_map<int, SubInterface, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, Client::CloseModal()::$_15)
    list<int, eastl::allocator>*
    helpers::GetKeysIf<int, SubInterface, Client::CloseModal()::__15>(list<int, eastl::allocator>* param_1) {
        bool bVar1;
        __15* this;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar3;
        eastl local_48[16];
        hashtable_iterator_base local_38[16];

        eastl::list<int, eastl::allocator>::list(param_1);
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        phVar3 = local_38;
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=(local_48, phVar3, extraout_RDX);
        if (bVar1) {
            do {
                this = (__15*)local_48->HeapBeginPtr();
                if (Client::CloseModal()::$_15::operator()(this, (pair*)phVar3) != '\0') {
                    eastl::list<int, eastl::allocator>::push_back(param_1, (int*)this);
                }
                eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)local_48);
                phVar3 = local_38;
                bVar1 = eastl::operator!=(local_48, local_38, extraout_RDX_00);
            } while (bVar1);
        }
        return param_1;
    }

    // 0x10010ce10, 192 bytes, inline, placed by debug map only (low confidence)
    // eastl::list<unsigned long long, eastl::allocator> GetKeysIf<unsigned long long, int, Client::PurgeServerActive(int)::$_16>(eastl::hash_map<unsigned long long, int, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, eastl::allocator, false>&, Client::PurgeServerActive(int)::$_16)
    helpers* helpers::GetKeysIf<unsigned long long, int, Client::PurgeServerActive(int)::__16>(undefined8 param_2,
                                                                                               undefined4 param_3) {
        bool bVar1;
        pair* ppVar3;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined4 uVar4;
        undefined4 extraout_var;
        undefined4 extraout_var_00;
        undefined4 uVar5;
        hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false> local_58[16];
        hashtable_iterator_base local_48[16];
        undefined4 local_38[2];

        local_38[0] = param_3;
        new (this) eastl::list<unsigned long long, eastl::allocator>();
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        uVar4 = extraout_EDX;
        uVar5 = extraout_var;
        while (true) {
            bVar1 = eastl::operator!=((eastl*)local_58, local_48, (hashtable_iterator_base*)CONCAT44(uVar5, uVar4));
            if (!bVar1)
                break;
            ppVar3 = (pair*)local_58->HeapBeginPtr();
            if (int->PurgeServerActive()::$_16::operator()((__16*)local_38, ppVar3) != '\0') {
                push_back(ppVar3);
            }
            eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(local_58);
            uVar4 = extraout_EDX_00;
            uVar5 = extraout_var_00;
        }
        return this;
    }

} // namespace jag::oldscape::helpers
