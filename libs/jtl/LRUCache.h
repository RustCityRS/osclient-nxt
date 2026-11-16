// libs/jtl/LRUCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    template <typename...> // 34 instantiations, e.g. <game::AchievementType>, <game::BASType>, <game::CursorType>
    class LRUCache {
    public:
        LRUCache(unsigned int, char const*);
        ~LRUCache();
        void Reset();
        void Clean(unsigned long long);
        void RemoveInner(LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*);
        void Resize(unsigned int);
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* Find(unsigned long long);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<oldscape::configdecoder::OldscapeVarType> const&,
                                                        unsigned int, unsigned long long);
        void Remove(unsigned long long);
        void RemoveInner(
            eastl::rbtree_iterator<
                eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>>,
                eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>>*,
                eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>>&>&);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<oldscape::graphics::Pix32> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<oldscape::graphics::Pix32>*);
        void RemoveInner(LRUCacheWrapper<game::VarType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::VarType> const&, unsigned int,
                                                        unsigned long long);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::QuickChatPhraseType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::QuickChatPhraseType>*);
        void RemoveInner(LRUCacheWrapper<game::SeqType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::SeqType> const&, unsigned int,
                                                        unsigned long long);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<graphics::Model> const&, unsigned int,
                                                        unsigned long long);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::QuickChatCatType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::ObjType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::ObjType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::QuickChatCatType>*);
        void RemoveInner(LRUCacheWrapper<game::NPCType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::NPCType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::LocType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::LocType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::ParamType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::ParamType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::DBRowType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::DBRowType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::DBTableType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::DBTableType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::InvType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::InvType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::VarBitType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::VarBitType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::BASType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::BASType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::FloorUnderlayType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::FloorUnderlayType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::FloorOverlayType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::FloorOverlayType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::HitmarkType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::HitmarkType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::HeadbarType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::HeadbarType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::IDKType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::IDKType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::MapElementType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::MapElementType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::MSIType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::MSIType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::QuestType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::QuestType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::SeqGroupType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::SeqGroupType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::LightType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::LightType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::SkyBoxType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::SkyBoxType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<graphics::Model>*);
        void RemoveInner(LRUCacheWrapper<game::WaterType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::WaterType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::CursorType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::CursorType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::WorldAreaType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::WorldAreaType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::EnumType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::EnumType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::EffectAnimType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::EffectAnimType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::StructType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::StructType> const&, unsigned int,
                                                        unsigned long long);
        void RemoveInner(LRUCacheWrapper<game::AchievementType>*);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(shared_ptr<game::AchievementType> const&, unsigned int,
                                                        unsigned long long);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullCacheObj;
    };

    template <typename...> // 1 instantiations, e.g. <oldscape::configdecoder::OldscapeVarType>
    class LRUCacheWrapper {
    public:
        LRUCacheWrapper(shared_ptr<oldscape::configdecoder::OldscapeVarType> const&, unsigned long long,
                        unsigned long long, unsigned int);
    };

    // 0x100f37090, 16 bytes, __data; set at startup by ___cxx_global_var_init.590
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUCache<oldscape::configdecoder::OldscapeVarType>::NullCacheObj;

    // 0x100f376a0, 16 bytes, __data; set at startup by ___cxx_global_var_init.165
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<oldscape::graphics::Pix32>::NullCacheObj;

    // 0x100f3c0e0, 16 bytes, __data; set at startup by ___cxx_global_var_init.113
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::WorldAreaType>::NullCacheObj;

    // 0x100f3c168, 16 bytes, __data; set at startup by ___cxx_global_var_init.37
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::VarBitType>::NullCacheObj;

    // 0x100f3c350, 16 bytes, __data; set at startup by ___cxx_global_var_init.21
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::QuestType>::NullCacheObj;

    // 0x100f3c3b8, 16 bytes, __data; set at startup by ___cxx_global_var_init.24
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::VarType>::NullCacheObj;

    // 0x100f3c430, 16 bytes, __data; set at startup by ___cxx_global_var_init.37
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::QuickChatPhraseType>::NullCacheObj;

    // 0x100f3c4a8, 16 bytes, __data; set at startup by ___cxx_global_var_init.55
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::SeqType>::NullCacheObj;

    // 0x100f3c548, 16 bytes, __data; set at startup by ___cxx_global_var_init.65
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<graphics::Model>::NullCacheObj;

    // 0x100f3c608, 16 bytes, __data; set at startup by ___cxx_global_var_init.38
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::ObjType>::NullCacheObj;

    // 0x100f3c640, 16 bytes, __data; set at startup by ___cxx_global_var_init.45
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::QuickChatCatType>::NullCacheObj;

    // 0x100f3c770, 16 bytes, __data; set at startup by ___cxx_global_var_init.52
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::NPCType>::NullCacheObj;

    // 0x100f3c880, 16 bytes, __data; set at startup by ___cxx_global_var_init.48
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::LocType>::NullCacheObj;

    // 0x100f3cd90, 16 bytes, __data; set at startup by ___cxx_global_var_init.39
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::BASType>::NullCacheObj;

    // 0x100f3cdf8, 16 bytes, __data; set at startup by ___cxx_global_var_init.42
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::CursorType>::NullCacheObj;

    // 0x100f3ce30, 16 bytes, __data; set at startup by ___cxx_global_var_init.45
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::DBRowType>::NullCacheObj;

    // 0x100f3ce68, 16 bytes, __data; set at startup by ___cxx_global_var_init.48
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::DBTableType>::NullCacheObj;

    // 0x100f3cee0, 16 bytes, __data; set at startup by ___cxx_global_var_init.36
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::EffectAnimType>::NullCacheObj;

    // 0x100f3cf18, 16 bytes, __data; set at startup by ___cxx_global_var_init.54
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::EnumType>::NullCacheObj;

    // 0x100f3cf50, 16 bytes, __data; set at startup by ___cxx_global_var_init.57
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::FloorOverlayType>::NullCacheObj;

    // 0x100f3cfb8, 16 bytes, __data; set at startup by ___cxx_global_var_init.60
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::FloorUnderlayType>::NullCacheObj;

    // 0x100f3cff0, 16 bytes, __data; set at startup by ___cxx_global_var_init.44
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::HeadbarType>::NullCacheObj;

    // 0x100f3d028, 16 bytes, __data; set at startup by ___cxx_global_var_init.57
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::HitmarkType>::NullCacheObj;

    // 0x100f3d0d8, 16 bytes, __data; set at startup by ___cxx_global_var_init.79
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::IDKType>::NullCacheObj;

    // 0x100f3d150, 16 bytes, __data; set at startup by ___cxx_global_var_init.82
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::InvType>::NullCacheObj;

    // 0x100f3d1e0, 16 bytes, __data; set at startup by ___cxx_global_var_init.62
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::AchievementType>::NullCacheObj;

    // 0x100f3d290, 16 bytes, __data; set at startup by ___cxx_global_var_init.94
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::LightType>::NullCacheObj;

    // 0x100f3d300, 16 bytes, __data; set at startup by ___cxx_global_var_init.54
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::MapElementType>::NullCacheObj;

    // 0x100f3d350, 16 bytes, __data; set at startup by ___cxx_global_var_init.59
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::MSIType>::NullCacheObj;

    // 0x100f3d388, 16 bytes, __data; set at startup by ___cxx_global_var_init.105
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::ParamType>::NullCacheObj;

    // 0x100f3d490, 16 bytes, __data; set at startup by ___cxx_global_var_init.45
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::SeqGroupType>::NullCacheObj;

    // 0x100f3d510, 16 bytes, __data; set at startup by ___cxx_global_var_init.62
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::SkyBoxType>::NullCacheObj;

    // 0x100f3d588, 16 bytes, __data; set at startup by ___cxx_global_var_init.117
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::StructType>::NullCacheObj;

    // 0x100f3d5c0, 16 bytes, __data; set at startup by ___cxx_global_var_init.124
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::WaterType>::NullCacheObj;

    // 0x10013f800, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // LRUCache<oldscape::configdecoder::OldscapeVarType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x10013f810, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // LRUCache<oldscape::configdecoder::OldscapeVarType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x10013fa70, 128 bytes, base-object constructor, inline, placed by class name and debug map
    // LRUCache<oldscape::configdecoder::OldscapeVarType>::LRUCache(unsigned int, char const*)
    void LRUCache<oldscape::configdecoder::OldscapeVarType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>,
                                          32ul, true, eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10013fc80, 80 bytes, base-object destructor, inline, placed by class name and debug map
    // LRUCache<oldscape::configdecoder::OldscapeVarType>::~LRUCache()
    void LRUCache<oldscape::configdecoder::OldscapeVarType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x10013fcd0, 64 bytes, inline, placed by class name and debug map
    // LRUCache<oldscape::configdecoder::OldscapeVarType>::Reset()
    /* LRUCache<oldscape::graphics::Pix32>::Reset() */

    void LRUCache<oldscape::graphics::Pix32>::Reset() {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUCache<oldscape::graphics::Pix32>**)(this + 3320) = this + 3272;
        *(LRUCache<oldscape::graphics::Pix32>**)(this + 3312) = this + 3272;
    }

    // 0x10013fd70, 144 bytes, inline, placed by class name and debug map
    // LRUCache<oldscape::configdecoder::OldscapeVarType>::Clean(unsigned long long)
    void LRUCache<oldscape::configdecoder::OldscapeVarType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x10013fe00, 64 bytes, inline, placed by class name and debug map
    // LRUCache<oldscape::configdecoder::OldscapeVarType>::RemoveInner(LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)
    void LRUCache<oldscape::configdecoder::OldscapeVarType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>,
                   eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x100140000, 144 bytes, inline, placed by class name and debug map
    // LRUCache<oldscape::configdecoder::OldscapeVarType>::Resize(unsigned int)
    void LRUCache<oldscape::configdecoder::OldscapeVarType>::Resize(uint param_1) {
        LRUCache<oldscape::configdecoder::OldscapeVarType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<oldscape::configdecoder::OldscapeVarType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x100140090, 160 bytes, inline, placed by class name and debug map
    // LRUCache<oldscape::configdecoder::OldscapeVarType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<oldscape::configdecoder::OldscapeVarType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>>,
            eastl::less<unsigned long long>, eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>>>,
            true, true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6980;
        }
        return this_00;
    }

    // 0x100140150, 256 bytes, inline, placed by class name
    // LRUCache<oldscape::configdecoder::OldscapeVarType>::Put(shared_ptr<oldscape::configdecoder::OldscapeVarType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<oldscape::configdecoder::OldscapeVarType>::Put(shared_ptr* param_1, uint param_2, ulonglong param_3) {
        LRUCache<oldscape::configdecoder::OldscapeVarType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<oldscape::configdecoder::OldscapeVarType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>,
                       eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>,
                            eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x100140450, 112 bytes, inline, placed by class name
    // LRUCache<oldscape::configdecoder::OldscapeVarType>::Remove(unsigned long long)
    void LRUCache<oldscape::configdecoder::OldscapeVarType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>>,
            eastl::less<unsigned long long>, eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>>>,
            true, true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x100140580, 96 bytes, inline, placed by class name
    // LRUCache<oldscape::configdecoder::OldscapeVarType>::RemoveInner(eastl::rbtree_iterator<eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType> >, eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType> >*, eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType> >&>&)
    /* LRUCache<oldscape::graphics::Pix32>::RemoveInner(eastl::rbtree_iterator<eastl::pair<unsigned
   long long const, LRUCacheWrapper<oldscape::graphics::Pix32> >, eastl::pair<unsigned
   long long const, LRUCacheWrapper<oldscape::graphics::Pix32> >*, eastl::pair<unsigned
   long long const, LRUCacheWrapper<oldscape::graphics::Pix32> >&>&) */

    void LRUCache<oldscape::graphics::Pix32>::RemoveInner(rbtree_iterator* param_1) {
        long lVar1;
        undefined1 local_28[8];
        undefined8 local_20;

        if (*(int*)this != 0) {
            lVar1 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    param_1);
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lVar1 + 32);
        }
        lVar1 = eastl::rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
        operator*((rbtree_iterator<
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                      param_1);
        ((lVar1 + 8))->Unlink();
        new (&local_20) eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(param_1);
        eastl::rbtree<
            unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::graphics::Pix32>>,
            eastl::less<unsigned long long>, eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::graphics::Pix32>>>, true,
            true>::erase(local_28, this + 8, local_20);
    }

    // 0x1001590f0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.590
    void ___cxx_global_var_init_590(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6980;
        puVar1 = PTR_NullCacheObj_100ee4930;
        if (*PTR_NullCacheObj_100ee4930 == '\0') {
            new (PTR_NullCacheObj_100ee6980) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5430, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100210ba0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<oldscape::graphics::Pix32>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100210bb0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<oldscape::graphics::Pix32>::~LRUCache(): jumps straight to the base-object destructor

    // 0x100210c00, 144 bytes, inline, placed by class name
    // LRUCache<oldscape::graphics::Pix32>::Clean(unsigned long long)
    void LRUCache<oldscape::graphics::Pix32>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x100212e80, 160 bytes, inline, placed by class name
    // LRUCache<oldscape::graphics::Pix32>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<oldscape::graphics::Pix32>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<
            unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::graphics::Pix32>>,
            eastl::less<unsigned long long>, eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::graphics::Pix32>>>, true,
            true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6988;
        }
        return this_00;
    }

    // 0x100212f20, 256 bytes, inline, placed by class name
    // LRUCache<oldscape::graphics::Pix32>::Put(shared_ptr<oldscape::graphics::Pix32> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<oldscape::graphics::Pix32>::Put(shared_ptr* param_1, uint param_2, ulonglong param_3) {
        LRUCache<oldscape::graphics::Pix32>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<oldscape::graphics::Pix32>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<oldscape::graphics::Pix32>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (map<unsigned long long, LRUCacheWrapper<oldscape::graphics::Pix32>, eastl::less<unsigned long long>,
                     eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x100224a60, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<oldscape::graphics::Pix32>::LRUCache(unsigned int, char const*)
    void LRUCache<oldscape::graphics::Pix32>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<oldscape::graphics::Pix32>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100224b50, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<oldscape::graphics::Pix32>::~LRUCache()
    void LRUCache<oldscape::graphics::Pix32>::~LRUCache() {
        Reset(this);
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x100224ba0, 64 bytes, inline, placed by class name
    // LRUCache<oldscape::graphics::Pix32>::RemoveInner(LRUCacheWrapper<oldscape::graphics::Pix32>*)
    void LRUCache<oldscape::graphics::Pix32>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<oldscape::graphics::Pix32>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x100225050, 112 bytes, inline, placed by class name
    // LRUCache<oldscape::graphics::Pix32>::Remove(unsigned long long)
    void LRUCache<oldscape::graphics::Pix32>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<
            unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::graphics::Pix32>>,
            eastl::less<unsigned long long>, eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::graphics::Pix32>>>, true,
            true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(this, (rbtree_iterator*)local_30);
        }
    }

    // 0x1002282c0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.165
    void ___cxx_global_var_init_165(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6988;
        puVar1 = PTR_NullCacheObj_100ee4938;
        if (*PTR_NullCacheObj_100ee4938 == '\0') {
            new (PTR_NullCacheObj_100ee6988) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5530, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003da640, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.113
    void ___cxx_global_var_init_113(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68c0;
        puVar1 = PTR_NullCacheObj_100ee4870;
        if (*PTR_NullCacheObj_100ee4870 == '\0') {
            new (PTR_NullCacheObj_100ee68c0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004c0200, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.37
    void ___cxx_global_var_init_37(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6898;
        puVar1 = PTR_NullCacheObj_100ee4848;
        if (*PTR_NullCacheObj_100ee4848 == '\0') {
            new (PTR_NullCacheObj_100ee6898) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51a8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004d8610, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::VarType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1004d8620, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::VarType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1004d8870, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::VarType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::VarType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::VarType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1004d89e0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::VarType>::~LRUCache()
    void LRUCache<game::VarType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1004d8a60, 144 bytes, inline, placed by class name
    // LRUCache<game::VarType>::Clean(unsigned long long)
    void LRUCache<game::VarType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1004d8af0, 64 bytes, inline, placed by class name
    // LRUCache<game::VarType>::RemoveInner(LRUCacheWrapper<game::VarType>*)
    void LRUCache<game::VarType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::VarType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1004d8cd0, 144 bytes, inline, placed by class name
    // LRUCache<game::VarType>::Resize(unsigned int)
    void LRUCache<game::VarType>::Resize(uint param_1) {
        LRUCache<game::VarType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::VarType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1004d8d60, 160 bytes, inline, placed by class name
    // LRUCache<game::VarType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::VarType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::VarType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::VarType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6940;
        }
        return this_00;
    }

    // 0x1004d8f10, 256 bytes, inline, placed by class name
    // LRUCache<game::VarType>::Put(shared_ptr<game::VarType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::VarType>::Put(shared_ptr* param_1, uint param_2,
                                                                             ulonglong param_3) {
        LRUCache<game::VarType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::VarType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::VarType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::VarType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1004d9560, 112 bytes, inline, placed by class name
    // LRUCache<game::VarType>::Remove(unsigned long long)
    void LRUCache<game::VarType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::VarType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::VarType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1004dce00, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.21
    void ___cxx_global_var_init_21(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6968;
        puVar1 = PTR_NullCacheObj_100ee4918;
        if (*PTR_NullCacheObj_100ee4918 == '\0') {
            new (PTR_NullCacheObj_100ee6968) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcec0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.24
    void ___cxx_global_var_init_24(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6940;
        puVar1 = PTR_NullCacheObj_100ee48f0;
        if (*PTR_NullCacheObj_100ee48f0 == '\0') {
            new (PTR_NullCacheObj_100ee6940) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52a8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcff0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::QuickChatPhraseType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1004dd440, 160 bytes, inline, placed by class name
    // LRUCache<game::QuickChatPhraseType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::QuickChatPhraseType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<
            unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuickChatPhraseType>>,
            eastl::less<unsigned long long>, eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuickChatPhraseType>>>, true,
            true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68f8;
        }
        return this_00;
    }

    // 0x1004dd590, 256 bytes, inline, placed by class name
    // LRUCache<game::QuickChatPhraseType>::Put(shared_ptr<game::QuickChatPhraseType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::QuickChatPhraseType>::Put(shared_ptr* param_1, uint param_2, ulonglong param_3) {
        LRUCache<game::QuickChatPhraseType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::QuickChatPhraseType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::QuickChatPhraseType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (map<unsigned long long, LRUCacheWrapper<game::QuickChatPhraseType>, eastl::less<unsigned long long>,
                     eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1004e1040, 160 bytes, inline, placed by class name
    // LRUCache<graphics::Model>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<graphics::Model>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<graphics::Model>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<graphics::Model>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6978;
        }
        return this_00;
    }

    // 0x1004e2490, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::QuickChatPhraseType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::QuickChatPhraseType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::QuickChatPhraseType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1004e4010, 112 bytes, inline, placed by class name
    // LRUCache<game::QuickChatPhraseType>::Remove(unsigned long long)
    void LRUCache<game::QuickChatPhraseType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<
            unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuickChatPhraseType>>,
            eastl::less<unsigned long long>, eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuickChatPhraseType>>>, true,
            true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1004e4080, 64 bytes, inline, placed by class name
    // LRUCache<game::QuickChatPhraseType>::RemoveInner(LRUCacheWrapper<game::QuickChatPhraseType>*)
    void LRUCache<game::QuickChatPhraseType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::QuickChatPhraseType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1004ea8b0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::SeqType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1004ea8c0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::SeqType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1004eab10, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::SeqType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::SeqType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::SeqType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1004eac00, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::SeqType>::~LRUCache()
    void LRUCache<game::SeqType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1004eac80, 144 bytes, inline, placed by class name
    // LRUCache<game::SeqType>::Clean(unsigned long long)
    void LRUCache<game::SeqType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1004ead10, 64 bytes, inline, placed by class name
    // LRUCache<game::SeqType>::RemoveInner(LRUCacheWrapper<game::SeqType>*)
    void LRUCache<game::SeqType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::SeqType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1004eaeb0, 144 bytes, inline, placed by class name
    // LRUCache<game::SeqType>::Resize(unsigned int)
    void LRUCache<game::SeqType>::Resize(uint param_1) {
        LRUCache<game::SeqType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::SeqType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1004eaf40, 160 bytes, inline, placed by class name
    // LRUCache<game::SeqType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::SeqType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::SeqType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::SeqType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6938;
        }
        return this_00;
    }

    // 0x1004eb0f0, 256 bytes, inline, placed by class name
    // LRUCache<game::SeqType>::Put(shared_ptr<game::SeqType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::SeqType>::Put(shared_ptr* param_1, uint param_2,
                                                                             ulonglong param_3) {
        LRUCache<game::SeqType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::SeqType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::SeqType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::SeqType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1004ecfb0, 112 bytes, inline, placed by class name
    // LRUCache<game::SeqType>::Remove(unsigned long long)
    void LRUCache<game::SeqType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::SeqType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::SeqType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1004f16e0, 256 bytes, inline, placed by class name
    // LRUCache<graphics::Model>::Put(shared_ptr<graphics::Model> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<graphics::Model>::Put(shared_ptr* param_1, uint param_2,
                                                                               ulonglong param_3) {
        LRUCache<graphics::Model>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<graphics::Model>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<graphics::Model>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<graphics::Model>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1004f17e0, 112 bytes, inline, placed by class name
    // LRUCache<graphics::Model>::Remove(unsigned long long)
    void LRUCache<graphics::Model>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<graphics::Model>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<graphics::Model>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1004f25e0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.37
    void ___cxx_global_var_init_37(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68f8;
        puVar1 = PTR_NullCacheObj_100ee48a8;
        if (*PTR_NullCacheObj_100ee48a8 == '\0') {
            new (PTR_NullCacheObj_100ee68f8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5230, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2800, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.45
    void ___cxx_global_var_init_45(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68b8;
        puVar1 = PTR_NullCacheObj_100ee4868;
        if (*PTR_NullCacheObj_100ee4868 == '\0') {
            new (PTR_NullCacheObj_100ee68b8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51d8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2aa0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.55
    void ___cxx_global_var_init_55(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6938;
        puVar1 = PTR_NullCacheObj_100ee48e8;
        if (*PTR_NullCacheObj_100ee48e8 == '\0') {
            new (PTR_NullCacheObj_100ee6938) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52a0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2c60, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.62
    void ___cxx_global_var_init_62(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6888;
        puVar1 = PTR_NullCacheObj_100ee4838;
        if (*PTR_NullCacheObj_100ee4838 == '\0') {
            new (PTR_NullCacheObj_100ee6888) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5198, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2d20, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.65
    void ___cxx_global_var_init_65(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6978;
        puVar1 = PTR_NullCacheObj_100ee4928;
        if (*PTR_NullCacheObj_100ee4928 == '\0') {
            new (PTR_NullCacheObj_100ee6978) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5398, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f5a40, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::QuickChatCatType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1004f5b80, 160 bytes, inline, placed by class name
    // LRUCache<game::QuickChatCatType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::QuickChatCatType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<
            unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuickChatCatType>>,
            eastl::less<unsigned long long>, eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuickChatCatType>>>, true,
            true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68e8;
        }
        return this_00;
    }

    // 0x1004f5d00, 256 bytes, inline, placed by class name
    // LRUCache<game::QuickChatCatType>::Put(shared_ptr<game::QuickChatCatType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::QuickChatCatType>::Put(shared_ptr* param_1, uint param_2,
                                                                                      ulonglong param_3) {
        LRUCache<game::QuickChatCatType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::QuickChatCatType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::QuickChatCatType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (map<unsigned long long, LRUCacheWrapper<game::QuickChatCatType>, eastl::less<unsigned long long>,
                     eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1004f7da0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::ObjType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1004f7db0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::ObjType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1004f8000, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::ObjType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::ObjType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::ObjType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1004f80f0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::ObjType>::~LRUCache()
    void LRUCache<game::ObjType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1004f8170, 144 bytes, inline, placed by class name
    // LRUCache<game::ObjType>::Clean(unsigned long long)
    void LRUCache<game::ObjType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1004f8200, 64 bytes, inline, placed by class name
    // LRUCache<game::ObjType>::RemoveInner(LRUCacheWrapper<game::ObjType>*)
    void LRUCache<game::ObjType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::ObjType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1004f83a0, 144 bytes, inline, placed by class name
    // LRUCache<game::ObjType>::Resize(unsigned int)
    void LRUCache<game::ObjType>::Resize(uint param_1) {
        LRUCache<game::ObjType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::ObjType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1004f8430, 160 bytes, inline, placed by class name
    // LRUCache<game::ObjType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::ObjType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::ObjType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::ObjType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6930;
        }
        return this_00;
    }

    // 0x1004f85e0, 256 bytes, inline, placed by class name
    // LRUCache<game::ObjType>::Put(shared_ptr<game::ObjType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::ObjType>::Put(shared_ptr* param_1, uint param_2,
                                                                             ulonglong param_3) {
        LRUCache<game::ObjType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::ObjType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::ObjType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::ObjType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1004f95a0, 112 bytes, inline, placed by class name
    // LRUCache<game::ObjType>::Remove(unsigned long long)
    void LRUCache<game::ObjType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::ObjType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::ObjType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1004febe0, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::QuickChatCatType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::QuickChatCatType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::QuickChatCatType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100500250, 112 bytes, inline, placed by class name
    // LRUCache<game::QuickChatCatType>::Remove(unsigned long long)
    void LRUCache<game::QuickChatCatType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<
            unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuickChatCatType>>,
            eastl::less<unsigned long long>, eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuickChatCatType>>>, true,
            true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005002c0, 64 bytes, inline, placed by class name
    // LRUCache<game::QuickChatCatType>::RemoveInner(LRUCacheWrapper<game::QuickChatCatType>*)
    void LRUCache<game::QuickChatCatType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::QuickChatCatType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005017f0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.38
    void ___cxx_global_var_init_38(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6930;
        puVar1 = PTR_NullCacheObj_100ee48e0;
        if (*PTR_NullCacheObj_100ee48e0 == '\0') {
            new (PTR_NullCacheObj_100ee6930) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5298, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005019b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.45
    void ___cxx_global_var_init_45(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68e8;
        puVar1 = PTR_NullCacheObj_100ee4898;
        if (*PTR_NullCacheObj_100ee4898 == '\0') {
            new (PTR_NullCacheObj_100ee68e8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5210, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10050f050, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::NPCType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x10050f060, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::NPCType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x10050f2b0, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::NPCType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::NPCType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::NPCType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10050f3a0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::NPCType>::~LRUCache()
    void LRUCache<game::NPCType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x10050f420, 144 bytes, inline, placed by class name
    // LRUCache<game::NPCType>::Clean(unsigned long long)
    void LRUCache<game::NPCType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x10050f4b0, 64 bytes, inline, placed by class name
    // LRUCache<game::NPCType>::RemoveInner(LRUCacheWrapper<game::NPCType>*)
    void LRUCache<game::NPCType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::NPCType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x10050f650, 144 bytes, inline, placed by class name
    // LRUCache<game::NPCType>::Resize(unsigned int)
    void LRUCache<game::NPCType>::Resize(uint param_1) {
        LRUCache<game::NPCType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::NPCType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x10050f6e0, 160 bytes, inline, placed by class name
    // LRUCache<game::NPCType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::NPCType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::NPCType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::NPCType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6928;
        }
        return this_00;
    }

    // 0x10050f890, 256 bytes, inline, placed by class name
    // LRUCache<game::NPCType>::Put(shared_ptr<game::NPCType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::NPCType>::Put(shared_ptr* param_1, uint param_2,
                                                                             ulonglong param_3) {
        LRUCache<game::NPCType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::NPCType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::NPCType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::NPCType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x10050fee0, 112 bytes, inline, placed by class name
    // LRUCache<game::NPCType>::Remove(unsigned long long)
    void LRUCache<game::NPCType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::NPCType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::NPCType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x100515750, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.52
    void ___cxx_global_var_init_52(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6928;
        puVar1 = PTR_NullCacheObj_100ee48d8;
        if (*PTR_NullCacheObj_100ee48d8 == '\0') {
            new (PTR_NullCacheObj_100ee6928) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5290, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100519f50, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::LocType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100519f60, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::LocType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x10051a1b0, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::LocType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::LocType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::LocType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10051a2a0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::LocType>::~LRUCache()
    void LRUCache<game::LocType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x10051a320, 144 bytes, inline, placed by class name
    // LRUCache<game::LocType>::Clean(unsigned long long)
    void LRUCache<game::LocType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x10051a3b0, 64 bytes, inline, placed by class name
    // LRUCache<game::LocType>::RemoveInner(LRUCacheWrapper<game::LocType>*)
    void LRUCache<game::LocType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::LocType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x10051a580, 144 bytes, inline, placed by class name
    // LRUCache<game::LocType>::Resize(unsigned int)
    void LRUCache<game::LocType>::Resize(uint param_1) {
        LRUCache<game::LocType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::LocType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x10051a610, 160 bytes, inline, placed by class name
    // LRUCache<game::LocType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::LocType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::LocType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::LocType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6918;
        }
        return this_00;
    }

    // 0x10051a7c0, 256 bytes, inline, placed by class name
    // LRUCache<game::LocType>::Put(shared_ptr<game::LocType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::LocType>::Put(shared_ptr* param_1, uint param_2,
                                                                             ulonglong param_3) {
        LRUCache<game::LocType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::LocType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::LocType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::LocType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x10051ba00, 112 bytes, inline, placed by class name
    // LRUCache<game::LocType>::Remove(unsigned long long)
    void LRUCache<game::LocType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::LocType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::LocType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x100522420, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.48
    void ___cxx_global_var_init_48(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6918;
        puVar1 = PTR_NullCacheObj_100ee48c8;
        if (*PTR_NullCacheObj_100ee48c8 == '\0') {
            new (PTR_NullCacheObj_100ee6918) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5278, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005225a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.54
    void ___cxx_global_var_init_54(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68d0;
        puVar1 = PTR_NullCacheObj_100ee4880;
        if (*PTR_NullCacheObj_100ee4880 == '\0') {
            new (PTR_NullCacheObj_100ee68d0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51f0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005226e0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.59
    void ___cxx_global_var_init_59(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6920;
        puVar1 = PTR_NullCacheObj_100ee48d0;
        if (*PTR_NullCacheObj_100ee48d0 == '\0') {
            new (PTR_NullCacheObj_100ee6920) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5280, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10054def0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.44
    void ___cxx_global_var_init_44(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68a8;
        puVar1 = PTR_NullCacheObj_100ee4858;
        if (*PTR_NullCacheObj_100ee4858 == '\0') {
            new (PTR_NullCacheObj_100ee68a8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51b8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10054e270, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.57
    void ___cxx_global_var_init_57(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68b0;
        puVar1 = PTR_NullCacheObj_100ee4860;
        if (*PTR_NullCacheObj_100ee4860 == '\0') {
            new (PTR_NullCacheObj_100ee68b0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51c0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100551200, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.36
    void ___cxx_global_var_init_36(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68c8;
        puVar1 = PTR_NullCacheObj_100ee4878;
        if (*PTR_NullCacheObj_100ee4878 == '\0') {
            new (PTR_NullCacheObj_100ee68c8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51e8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100560fa0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.62
    void ___cxx_global_var_init_62(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68d8;
        puVar1 = PTR_NullCacheObj_100ee4888;
        if (*PTR_NullCacheObj_100ee4888 == '\0') {
            new (PTR_NullCacheObj_100ee68d8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51f8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10056f460, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::QuickChatCatType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x10056f470, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::QuickChatCatType>::~LRUCache()
    void LRUCache<game::QuickChatCatType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x10056f5b0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::QuickChatPhraseType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x10056f620, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::QuickChatPhraseType>::~LRUCache()
    void LRUCache<game::QuickChatPhraseType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005719d0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::ParamType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005719e0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::ParamType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x100571c30, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::ParamType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::ParamType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::ParamType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100571d20, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::ParamType>::~LRUCache()
    void LRUCache<game::ParamType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x100571da0, 144 bytes, inline, placed by class name
    // LRUCache<game::ParamType>::Clean(unsigned long long)
    void LRUCache<game::ParamType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x100571e30, 64 bytes, inline, placed by class name
    // LRUCache<game::ParamType>::RemoveInner(LRUCacheWrapper<game::ParamType>*)
    void LRUCache<game::ParamType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::ParamType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x100572000, 144 bytes, inline, placed by class name
    // LRUCache<game::ParamType>::Resize(unsigned int)
    void LRUCache<game::ParamType>::Resize(uint param_1) {
        LRUCache<game::ParamType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::ParamType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x100572090, 160 bytes, inline, placed by class name
    // LRUCache<game::ParamType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::ParamType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::ParamType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::ParamType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6960;
        }
        return this_00;
    }

    // 0x100572290, 256 bytes, inline, placed by class name
    // LRUCache<game::ParamType>::Put(shared_ptr<game::ParamType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::ParamType>::Put(shared_ptr* param_1, uint param_2,
                                                                               ulonglong param_3) {
        LRUCache<game::ParamType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::ParamType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::ParamType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::ParamType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x100573d10, 112 bytes, inline, placed by class name
    // LRUCache<game::ParamType>::Remove(unsigned long long)
    void LRUCache<game::ParamType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::ParamType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::ParamType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005773b0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::DBRowType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005773c0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::DBRowType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x100577610, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::DBRowType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::DBRowType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::DBRowType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100577700, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::DBRowType>::~LRUCache()
    void LRUCache<game::DBRowType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x100577780, 144 bytes, inline, placed by class name
    // LRUCache<game::DBRowType>::Clean(unsigned long long)
    void LRUCache<game::DBRowType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x100577810, 64 bytes, inline, placed by class name
    // LRUCache<game::DBRowType>::RemoveInner(LRUCacheWrapper<game::DBRowType>*)
    void LRUCache<game::DBRowType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::DBRowType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005779b0, 144 bytes, inline, placed by class name
    // LRUCache<game::DBRowType>::Resize(unsigned int)
    void LRUCache<game::DBRowType>::Resize(uint param_1) {
        LRUCache<game::DBRowType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::DBRowType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x100577a40, 160 bytes, inline, placed by class name
    // LRUCache<game::DBRowType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::DBRowType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::DBRowType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::DBRowType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6950;
        }
        return this_00;
    }

    // 0x100577c40, 256 bytes, inline, placed by class name
    // LRUCache<game::DBRowType>::Put(shared_ptr<game::DBRowType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::DBRowType>::Put(shared_ptr* param_1, uint param_2,
                                                                               ulonglong param_3) {
        LRUCache<game::DBRowType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::DBRowType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::DBRowType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::DBRowType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x100579970, 112 bytes, inline, placed by class name
    // LRUCache<game::DBRowType>::Remove(unsigned long long)
    void LRUCache<game::DBRowType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::DBRowType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::DBRowType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x10057ce70, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::DBTableType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x10057ce80, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::DBTableType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x10057d0d0, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::DBTableType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::DBTableType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::DBTableType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10057d1c0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::DBTableType>::~LRUCache()
    void LRUCache<game::DBTableType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x10057d240, 144 bytes, inline, placed by class name
    // LRUCache<game::DBTableType>::Clean(unsigned long long)
    void LRUCache<game::DBTableType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x10057d2d0, 64 bytes, inline, placed by class name
    // LRUCache<game::DBTableType>::RemoveInner(LRUCacheWrapper<game::DBTableType>*)
    void LRUCache<game::DBTableType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::DBTableType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x10057d470, 144 bytes, inline, placed by class name
    // LRUCache<game::DBTableType>::Resize(unsigned int)
    void LRUCache<game::DBTableType>::Resize(uint param_1) {
        LRUCache<game::DBTableType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::DBTableType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x10057d500, 160 bytes, inline, placed by class name
    // LRUCache<game::DBTableType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::DBTableType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::DBTableType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::DBTableType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68a0;
        }
        return this_00;
    }

    // 0x10057d710, 256 bytes, inline, placed by class name
    // LRUCache<game::DBTableType>::Put(shared_ptr<game::DBTableType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::DBTableType>::Put(shared_ptr* param_1, uint param_2,
                                                                                 ulonglong param_3) {
        LRUCache<game::DBTableType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::DBTableType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::DBTableType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::DBTableType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x10057f050, 112 bytes, inline, placed by class name
    // LRUCache<game::DBTableType>::Remove(unsigned long long)
    void LRUCache<game::DBTableType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::DBTableType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::DBTableType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x100582560, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::InvType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100582570, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::InvType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005827c0, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::InvType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::InvType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::InvType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005828b0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::InvType>::~LRUCache()
    void LRUCache<game::InvType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x100582930, 144 bytes, inline, placed by class name
    // LRUCache<game::InvType>::Clean(unsigned long long)
    void LRUCache<game::InvType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005829c0, 64 bytes, inline, placed by class name
    // LRUCache<game::InvType>::RemoveInner(LRUCacheWrapper<game::InvType>*)
    void LRUCache<game::InvType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::InvType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x100582b60, 144 bytes, inline, placed by class name
    // LRUCache<game::InvType>::Resize(unsigned int)
    void LRUCache<game::InvType>::Resize(uint param_1) {
        LRUCache<game::InvType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::InvType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x100582bf0, 160 bytes, inline, placed by class name
    // LRUCache<game::InvType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::InvType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::InvType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::InvType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6910;
        }
        return this_00;
    }

    // 0x100582e00, 256 bytes, inline, placed by class name
    // LRUCache<game::InvType>::Put(shared_ptr<game::InvType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::InvType>::Put(shared_ptr* param_1, uint param_2,
                                                                             ulonglong param_3) {
        LRUCache<game::InvType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::InvType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::InvType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::InvType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x100584730, 112 bytes, inline, placed by class name
    // LRUCache<game::InvType>::Remove(unsigned long long)
    void LRUCache<game::InvType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::InvType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::InvType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x100587c30, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::VarBitType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100587c40, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::VarBitType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x100587e90, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::VarBitType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::VarBitType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::VarBitType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100587f80, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::VarBitType>::~LRUCache()
    void LRUCache<game::VarBitType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x100588000, 144 bytes, inline, placed by class name
    // LRUCache<game::VarBitType>::Clean(unsigned long long)
    void LRUCache<game::VarBitType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x100588090, 64 bytes, inline, placed by class name
    // LRUCache<game::VarBitType>::RemoveInner(LRUCacheWrapper<game::VarBitType>*)
    void LRUCache<game::VarBitType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::VarBitType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x100588230, 144 bytes, inline, placed by class name
    // LRUCache<game::VarBitType>::Resize(unsigned int)
    void LRUCache<game::VarBitType>::Resize(uint param_1) {
        LRUCache<game::VarBitType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::VarBitType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005882c0, 160 bytes, inline, placed by class name
    // LRUCache<game::VarBitType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::VarBitType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::VarBitType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::VarBitType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6898;
        }
        return this_00;
    }

    // 0x100588470, 256 bytes, inline, placed by class name
    // LRUCache<game::VarBitType>::Put(shared_ptr<game::VarBitType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::VarBitType>::Put(shared_ptr* param_1, uint param_2,
                                                                                ulonglong param_3) {
        LRUCache<game::VarBitType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::VarBitType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::VarBitType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::VarBitType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x100588ac0, 112 bytes, inline, placed by class name
    // LRUCache<game::VarBitType>::Remove(unsigned long long)
    void LRUCache<game::VarBitType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::VarBitType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::VarBitType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x10058c000, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::BASType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x10058c010, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::BASType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x10058c260, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::BASType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::BASType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::BASType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10058c350, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::BASType>::~LRUCache()
    void LRUCache<game::BASType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x10058c3d0, 144 bytes, inline, placed by class name
    // LRUCache<game::BASType>::Clean(unsigned long long)
    void LRUCache<game::BASType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x10058c460, 64 bytes, inline, placed by class name
    // LRUCache<game::BASType>::RemoveInner(LRUCacheWrapper<game::BASType>*)
    void LRUCache<game::BASType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::BASType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x10058c600, 144 bytes, inline, placed by class name
    // LRUCache<game::BASType>::Resize(unsigned int)
    void LRUCache<game::BASType>::Resize(uint param_1) {
        LRUCache<game::BASType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::BASType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x10058c690, 160 bytes, inline, placed by class name
    // LRUCache<game::BASType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::BASType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::BASType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::BASType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6900;
        }
        return this_00;
    }

    // 0x10058c880, 256 bytes, inline, placed by class name
    // LRUCache<game::BASType>::Put(shared_ptr<game::BASType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::BASType>::Put(shared_ptr* param_1, uint param_2,
                                                                             ulonglong param_3) {
        LRUCache<game::BASType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::BASType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::BASType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::BASType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x10058e270, 112 bytes, inline, placed by class name
    // LRUCache<game::BASType>::Remove(unsigned long long)
    void LRUCache<game::BASType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::BASType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::BASType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x100591760, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::FloorUnderlayType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100591770, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::FloorUnderlayType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005919c0, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::FloorUnderlayType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::FloorUnderlayType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::FloorUnderlayType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100591ab0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::FloorUnderlayType>::~LRUCache()
    void LRUCache<game::FloorUnderlayType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x100591b30, 144 bytes, inline, placed by class name
    // LRUCache<game::FloorUnderlayType>::Clean(unsigned long long)
    void LRUCache<game::FloorUnderlayType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x100591bc0, 64 bytes, inline, placed by class name
    // LRUCache<game::FloorUnderlayType>::RemoveInner(LRUCacheWrapper<game::FloorUnderlayType>*)
    void LRUCache<game::FloorUnderlayType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::FloorUnderlayType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x100591d60, 144 bytes, inline, placed by class name
    // LRUCache<game::FloorUnderlayType>::Resize(unsigned int)
    void LRUCache<game::FloorUnderlayType>::Resize(uint param_1) {
        LRUCache<game::FloorUnderlayType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::FloorUnderlayType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x100591df0, 160 bytes, inline, placed by class name
    // LRUCache<game::FloorUnderlayType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::FloorUnderlayType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<
            unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::FloorUnderlayType>>,
            eastl::less<unsigned long long>, eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::FloorUnderlayType>>>, true,
            true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68f0;
        }
        return this_00;
    }

    // 0x100591ff0, 256 bytes, inline, placed by class name
    // LRUCache<game::FloorUnderlayType>::Put(shared_ptr<game::FloorUnderlayType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::FloorUnderlayType>::Put(shared_ptr* param_1, uint param_2, ulonglong param_3) {
        LRUCache<game::FloorUnderlayType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::FloorUnderlayType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::FloorUnderlayType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (map<unsigned long long, LRUCacheWrapper<game::FloorUnderlayType>, eastl::less<unsigned long long>,
                     eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x100593910, 112 bytes, inline, placed by class name
    // LRUCache<game::FloorUnderlayType>::Remove(unsigned long long)
    void LRUCache<game::FloorUnderlayType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<
            unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::FloorUnderlayType>>,
            eastl::less<unsigned long long>, eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::FloorUnderlayType>>>, true,
            true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x100596e10, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::FloorOverlayType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100596e20, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::FloorOverlayType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x100597070, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::FloorOverlayType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::FloorOverlayType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::FloorOverlayType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100597160, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::FloorOverlayType>::~LRUCache()
    void LRUCache<game::FloorOverlayType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005971e0, 144 bytes, inline, placed by class name
    // LRUCache<game::FloorOverlayType>::Clean(unsigned long long)
    void LRUCache<game::FloorOverlayType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x100597270, 64 bytes, inline, placed by class name
    // LRUCache<game::FloorOverlayType>::RemoveInner(LRUCacheWrapper<game::FloorOverlayType>*)
    void LRUCache<game::FloorOverlayType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::FloorOverlayType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x100597410, 144 bytes, inline, placed by class name
    // LRUCache<game::FloorOverlayType>::Resize(unsigned int)
    void LRUCache<game::FloorOverlayType>::Resize(uint param_1) {
        LRUCache<game::FloorOverlayType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::FloorOverlayType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005974a0, 160 bytes, inline, placed by class name
    // LRUCache<game::FloorOverlayType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::FloorOverlayType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<
            unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::FloorOverlayType>>,
            eastl::less<unsigned long long>, eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::FloorOverlayType>>>, true,
            true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68e0;
        }
        return this_00;
    }

    // 0x1005976b0, 256 bytes, inline, placed by class name
    // LRUCache<game::FloorOverlayType>::Put(shared_ptr<game::FloorOverlayType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::FloorOverlayType>::Put(shared_ptr* param_1, uint param_2,
                                                                                      ulonglong param_3) {
        LRUCache<game::FloorOverlayType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::FloorOverlayType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::FloorOverlayType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (map<unsigned long long, LRUCacheWrapper<game::FloorOverlayType>, eastl::less<unsigned long long>,
                     eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x100598fc0, 112 bytes, inline, placed by class name
    // LRUCache<game::FloorOverlayType>::Remove(unsigned long long)
    void LRUCache<game::FloorOverlayType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<
            unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::FloorOverlayType>>,
            eastl::less<unsigned long long>, eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::FloorOverlayType>>>, true,
            true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x10059c5b0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::HitmarkType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x10059c5c0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::HitmarkType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x10059c810, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::HitmarkType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::HitmarkType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::HitmarkType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10059c900, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::HitmarkType>::~LRUCache()
    void LRUCache<game::HitmarkType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x10059c980, 144 bytes, inline, placed by class name
    // LRUCache<game::HitmarkType>::Clean(unsigned long long)
    void LRUCache<game::HitmarkType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x10059ca10, 64 bytes, inline, placed by class name
    // LRUCache<game::HitmarkType>::RemoveInner(LRUCacheWrapper<game::HitmarkType>*)
    void LRUCache<game::HitmarkType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::HitmarkType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x10059cbb0, 144 bytes, inline, placed by class name
    // LRUCache<game::HitmarkType>::Resize(unsigned int)
    void LRUCache<game::HitmarkType>::Resize(uint param_1) {
        LRUCache<game::HitmarkType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::HitmarkType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x10059cc40, 160 bytes, inline, placed by class name
    // LRUCache<game::HitmarkType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::HitmarkType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::HitmarkType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::HitmarkType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68b0;
        }
        return this_00;
    }

    // 0x10059ce30, 256 bytes, inline, placed by class name
    // LRUCache<game::HitmarkType>::Put(shared_ptr<game::HitmarkType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::HitmarkType>::Put(shared_ptr* param_1, uint param_2,
                                                                                 ulonglong param_3) {
        LRUCache<game::HitmarkType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::HitmarkType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::HitmarkType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::HitmarkType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x10059dc30, 112 bytes, inline, placed by class name
    // LRUCache<game::HitmarkType>::Remove(unsigned long long)
    void LRUCache<game::HitmarkType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::HitmarkType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::HitmarkType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005a1620, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::HeadbarType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005a1630, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::HeadbarType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005a1880, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::HeadbarType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::HeadbarType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::HeadbarType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005a1970, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::HeadbarType>::~LRUCache()
    void LRUCache<game::HeadbarType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005a19f0, 144 bytes, inline, placed by class name
    // LRUCache<game::HeadbarType>::Clean(unsigned long long)
    void LRUCache<game::HeadbarType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005a1a80, 64 bytes, inline, placed by class name
    // LRUCache<game::HeadbarType>::RemoveInner(LRUCacheWrapper<game::HeadbarType>*)
    void LRUCache<game::HeadbarType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::HeadbarType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005a1c20, 144 bytes, inline, placed by class name
    // LRUCache<game::HeadbarType>::Resize(unsigned int)
    void LRUCache<game::HeadbarType>::Resize(uint param_1) {
        LRUCache<game::HeadbarType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::HeadbarType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005a1cb0, 160 bytes, inline, placed by class name
    // LRUCache<game::HeadbarType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::HeadbarType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::HeadbarType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::HeadbarType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68a8;
        }
        return this_00;
    }

    // 0x1005a1e80, 256 bytes, inline, placed by class name
    // LRUCache<game::HeadbarType>::Put(shared_ptr<game::HeadbarType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::HeadbarType>::Put(shared_ptr* param_1, uint param_2,
                                                                                 ulonglong param_3) {
        LRUCache<game::HeadbarType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::HeadbarType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::HeadbarType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::HeadbarType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1005a37a0, 112 bytes, inline, placed by class name
    // LRUCache<game::HeadbarType>::Remove(unsigned long long)
    void LRUCache<game::HeadbarType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::HeadbarType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::HeadbarType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005a6bd0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::IDKType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005a6be0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::IDKType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005a6e30, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::IDKType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::IDKType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::IDKType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005a6f20, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::IDKType>::~LRUCache()
    void LRUCache<game::IDKType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005a6fa0, 144 bytes, inline, placed by class name
    // LRUCache<game::IDKType>::Clean(unsigned long long)
    void LRUCache<game::IDKType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005a7030, 64 bytes, inline, placed by class name
    // LRUCache<game::IDKType>::RemoveInner(LRUCacheWrapper<game::IDKType>*)
    void LRUCache<game::IDKType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::IDKType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005a71d0, 144 bytes, inline, placed by class name
    // LRUCache<game::IDKType>::Resize(unsigned int)
    void LRUCache<game::IDKType>::Resize(uint param_1) {
        LRUCache<game::IDKType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::IDKType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005a7260, 160 bytes, inline, placed by class name
    // LRUCache<game::IDKType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::IDKType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::IDKType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::IDKType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6908;
        }
        return this_00;
    }

    // 0x1005a7450, 256 bytes, inline, placed by class name
    // LRUCache<game::IDKType>::Put(shared_ptr<game::IDKType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::IDKType>::Put(shared_ptr* param_1, uint param_2,
                                                                             ulonglong param_3) {
        LRUCache<game::IDKType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::IDKType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::IDKType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::IDKType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1005a8fa0, 112 bytes, inline, placed by class name
    // LRUCache<game::IDKType>::Remove(unsigned long long)
    void LRUCache<game::IDKType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::IDKType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::IDKType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005ac560, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::MapElementType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005ac570, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::MapElementType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005ac7c0, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::MapElementType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::MapElementType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::MapElementType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005ac8b0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::MapElementType>::~LRUCache()
    void LRUCache<game::MapElementType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005ac930, 144 bytes, inline, placed by class name
    // LRUCache<game::MapElementType>::Clean(unsigned long long)
    void LRUCache<game::MapElementType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005ac9c0, 64 bytes, inline, placed by class name
    // LRUCache<game::MapElementType>::RemoveInner(LRUCacheWrapper<game::MapElementType>*)
    void LRUCache<game::MapElementType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::MapElementType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005acb60, 144 bytes, inline, placed by class name
    // LRUCache<game::MapElementType>::Resize(unsigned int)
    void LRUCache<game::MapElementType>::Resize(uint param_1) {
        LRUCache<game::MapElementType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::MapElementType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005acbf0, 160 bytes, inline, placed by class name
    // LRUCache<game::MapElementType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::MapElementType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::MapElementType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::MapElementType>>>,
                      true, true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68d0;
        }
        return this_00;
    }

    // 0x1005acde0, 256 bytes, inline, placed by class name
    // LRUCache<game::MapElementType>::Put(shared_ptr<game::MapElementType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::MapElementType>::Put(shared_ptr* param_1, uint param_2,
                                                                                    ulonglong param_3) {
        LRUCache<game::MapElementType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::MapElementType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::MapElementType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::MapElementType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1005af200, 112 bytes, inline, placed by class name
    // LRUCache<game::MapElementType>::Remove(unsigned long long)
    void LRUCache<game::MapElementType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::MapElementType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::MapElementType>>>,
                      true, true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005b2de0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::MSIType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005b2df0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::MSIType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005b3040, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::MSIType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::MSIType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::MSIType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005b3130, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::MSIType>::~LRUCache()
    void LRUCache<game::MSIType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005b31b0, 144 bytes, inline, placed by class name
    // LRUCache<game::MSIType>::Clean(unsigned long long)
    void LRUCache<game::MSIType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005b3240, 64 bytes, inline, placed by class name
    // LRUCache<game::MSIType>::RemoveInner(LRUCacheWrapper<game::MSIType>*)
    void LRUCache<game::MSIType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::MSIType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005b33e0, 144 bytes, inline, placed by class name
    // LRUCache<game::MSIType>::Resize(unsigned int)
    void LRUCache<game::MSIType>::Resize(uint param_1) {
        LRUCache<game::MSIType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::MSIType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005b3470, 160 bytes, inline, placed by class name
    // LRUCache<game::MSIType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::MSIType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::MSIType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::MSIType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6920;
        }
        return this_00;
    }

    // 0x1005b3670, 256 bytes, inline, placed by class name
    // LRUCache<game::MSIType>::Put(shared_ptr<game::MSIType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::MSIType>::Put(shared_ptr* param_1, uint param_2,
                                                                             ulonglong param_3) {
        LRUCache<game::MSIType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::MSIType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::MSIType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::MSIType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1005b4f50, 112 bytes, inline, placed by class name
    // LRUCache<game::MSIType>::Remove(unsigned long long)
    void LRUCache<game::MSIType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::MSIType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::MSIType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005b8860, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::QuestType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005b8870, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::QuestType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005b8ac0, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::QuestType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::QuestType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::QuestType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005b8bb0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::QuestType>::~LRUCache()
    void LRUCache<game::QuestType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005b8c30, 144 bytes, inline, placed by class name
    // LRUCache<game::QuestType>::Clean(unsigned long long)
    void LRUCache<game::QuestType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005b8cc0, 64 bytes, inline, placed by class name
    // LRUCache<game::QuestType>::RemoveInner(LRUCacheWrapper<game::QuestType>*)
    void LRUCache<game::QuestType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::QuestType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005b8e60, 144 bytes, inline, placed by class name
    // LRUCache<game::QuestType>::Resize(unsigned int)
    void LRUCache<game::QuestType>::Resize(uint param_1) {
        LRUCache<game::QuestType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::QuestType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005b8ef0, 160 bytes, inline, placed by class name
    // LRUCache<game::QuestType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::QuestType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuestType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuestType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6968;
        }
        return this_00;
    }

    // 0x1005b90a0, 256 bytes, inline, placed by class name
    // LRUCache<game::QuestType>::Put(shared_ptr<game::QuestType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::QuestType>::Put(shared_ptr* param_1, uint param_2,
                                                                               ulonglong param_3) {
        LRUCache<game::QuestType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::QuestType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::QuestType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::QuestType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1005baf00, 112 bytes, inline, placed by class name
    // LRUCache<game::QuestType>::Remove(unsigned long long)
    void LRUCache<game::QuestType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuestType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuestType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005be3f0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::SeqGroupType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005be400, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::SeqGroupType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005be650, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::SeqGroupType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::SeqGroupType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::SeqGroupType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005be740, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::SeqGroupType>::~LRUCache()
    void LRUCache<game::SeqGroupType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005be7c0, 144 bytes, inline, placed by class name
    // LRUCache<game::SeqGroupType>::Clean(unsigned long long)
    void LRUCache<game::SeqGroupType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005be850, 64 bytes, inline, placed by class name
    // LRUCache<game::SeqGroupType>::RemoveInner(LRUCacheWrapper<game::SeqGroupType>*)
    void LRUCache<game::SeqGroupType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::SeqGroupType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005be9f0, 144 bytes, inline, placed by class name
    // LRUCache<game::SeqGroupType>::Resize(unsigned int)
    void LRUCache<game::SeqGroupType>::Resize(uint param_1) {
        LRUCache<game::SeqGroupType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::SeqGroupType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005bea80, 160 bytes, inline, placed by class name
    // LRUCache<game::SeqGroupType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::SeqGroupType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::SeqGroupType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::SeqGroupType>>>,
                      true, true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68b8;
        }
        return this_00;
    }

    // 0x1005bec90, 256 bytes, inline, placed by class name
    // LRUCache<game::SeqGroupType>::Put(shared_ptr<game::SeqGroupType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::SeqGroupType>::Put(shared_ptr* param_1, uint param_2,
                                                                                  ulonglong param_3) {
        LRUCache<game::SeqGroupType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::SeqGroupType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::SeqGroupType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::SeqGroupType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1005c0620, 112 bytes, inline, placed by class name
    // LRUCache<game::SeqGroupType>::Remove(unsigned long long)
    void LRUCache<game::SeqGroupType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::SeqGroupType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::SeqGroupType>>>,
                      true, true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005c3b30, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::LightType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005c3b40, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::LightType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005c3d90, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::LightType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::LightType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::LightType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005c3e80, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::LightType>::~LRUCache()
    void LRUCache<game::LightType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005c3f00, 144 bytes, inline, placed by class name
    // LRUCache<game::LightType>::Clean(unsigned long long)
    void LRUCache<game::LightType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005c3f90, 64 bytes, inline, placed by class name
    // LRUCache<game::LightType>::RemoveInner(LRUCacheWrapper<game::LightType>*)
    void LRUCache<game::LightType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::LightType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005c4130, 144 bytes, inline, placed by class name
    // LRUCache<game::LightType>::Resize(unsigned int)
    void LRUCache<game::LightType>::Resize(uint param_1) {
        LRUCache<game::LightType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::LightType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005c41c0, 160 bytes, inline, placed by class name
    // LRUCache<game::LightType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::LightType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::LightType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::LightType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6958;
        }
        return this_00;
    }

    // 0x1005c43c0, 256 bytes, inline, placed by class name
    // LRUCache<game::LightType>::Put(shared_ptr<game::LightType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::LightType>::Put(shared_ptr* param_1, uint param_2,
                                                                               ulonglong param_3) {
        LRUCache<game::LightType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::LightType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::LightType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::LightType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1005c5cd0, 112 bytes, inline, placed by class name
    // LRUCache<game::LightType>::Remove(unsigned long long)
    void LRUCache<game::LightType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::LightType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::LightType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005c92b0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::SkyBoxType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005c92c0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::SkyBoxType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005c9510, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::SkyBoxType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::SkyBoxType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::SkyBoxType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005c9600, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::SkyBoxType>::~LRUCache()
    void LRUCache<game::SkyBoxType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005c9680, 144 bytes, inline, placed by class name
    // LRUCache<game::SkyBoxType>::Clean(unsigned long long)
    void LRUCache<game::SkyBoxType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005c9710, 64 bytes, inline, placed by class name
    // LRUCache<game::SkyBoxType>::RemoveInner(LRUCacheWrapper<game::SkyBoxType>*)
    void LRUCache<game::SkyBoxType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::SkyBoxType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005c98b0, 144 bytes, inline, placed by class name
    // LRUCache<game::SkyBoxType>::Resize(unsigned int)
    void LRUCache<game::SkyBoxType>::Resize(uint param_1) {
        LRUCache<game::SkyBoxType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::SkyBoxType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005c9940, 160 bytes, inline, placed by class name
    // LRUCache<game::SkyBoxType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::SkyBoxType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::SkyBoxType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::SkyBoxType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6888;
        }
        return this_00;
    }

    // 0x1005c9b50, 256 bytes, inline, placed by class name
    // LRUCache<game::SkyBoxType>::Put(shared_ptr<game::SkyBoxType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::SkyBoxType>::Put(shared_ptr* param_1, uint param_2,
                                                                                ulonglong param_3) {
        LRUCache<game::SkyBoxType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::SkyBoxType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::SkyBoxType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::SkyBoxType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1005cb470, 112 bytes, inline, placed by class name
    // LRUCache<game::SkyBoxType>::Remove(unsigned long long)
    void LRUCache<game::SkyBoxType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::SkyBoxType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::SkyBoxType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005ce2b0, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<graphics::Model>::LRUCache(unsigned int, char const*)
    void LRUCache<graphics::Model>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<graphics::Model>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005ce390, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<graphics::Model>::~LRUCache()
    void LRUCache<graphics::Model>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005ce710, 144 bytes, inline, placed by class name
    // LRUCache<graphics::Model>::Clean(unsigned long long)
    void LRUCache<graphics::Model>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005ce7a0, 64 bytes, inline, placed by class name
    // LRUCache<graphics::Model>::RemoveInner(LRUCacheWrapper<graphics::Model>*)
    void LRUCache<graphics::Model>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<graphics::Model>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005cf040, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::WaterType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005cf050, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::WaterType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005cf2a0, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::WaterType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::WaterType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::WaterType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005cf390, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::WaterType>::~LRUCache()
    void LRUCache<game::WaterType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005cf410, 144 bytes, inline, placed by class name
    // LRUCache<game::WaterType>::Clean(unsigned long long)
    void LRUCache<game::WaterType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005cf4a0, 64 bytes, inline, placed by class name
    // LRUCache<game::WaterType>::RemoveInner(LRUCacheWrapper<game::WaterType>*)
    void LRUCache<game::WaterType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::WaterType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005cf640, 144 bytes, inline, placed by class name
    // LRUCache<game::WaterType>::Resize(unsigned int)
    void LRUCache<game::WaterType>::Resize(uint param_1) {
        LRUCache<game::WaterType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::WaterType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005cf6d0, 160 bytes, inline, placed by class name
    // LRUCache<game::WaterType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::WaterType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::WaterType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::WaterType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6970;
        }
        return this_00;
    }

    // 0x1005cf8c0, 256 bytes, inline, placed by class name
    // LRUCache<game::WaterType>::Put(shared_ptr<game::WaterType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::WaterType>::Put(shared_ptr* param_1, uint param_2,
                                                                               ulonglong param_3) {
        LRUCache<game::WaterType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::WaterType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::WaterType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::WaterType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1005cff10, 112 bytes, inline, placed by class name
    // LRUCache<game::WaterType>::Remove(unsigned long long)
    void LRUCache<game::WaterType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::WaterType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::WaterType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005d3400, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::CursorType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005d3410, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::CursorType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005d3660, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::CursorType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::CursorType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::CursorType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005d3750, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::CursorType>::~LRUCache()
    void LRUCache<game::CursorType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005d37d0, 144 bytes, inline, placed by class name
    // LRUCache<game::CursorType>::Clean(unsigned long long)
    void LRUCache<game::CursorType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005d3860, 64 bytes, inline, placed by class name
    // LRUCache<game::CursorType>::RemoveInner(LRUCacheWrapper<game::CursorType>*)
    void LRUCache<game::CursorType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::CursorType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005d3a00, 144 bytes, inline, placed by class name
    // LRUCache<game::CursorType>::Resize(unsigned int)
    void LRUCache<game::CursorType>::Resize(uint param_1) {
        LRUCache<game::CursorType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::CursorType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005d3a90, 160 bytes, inline, placed by class name
    // LRUCache<game::CursorType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::CursorType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::CursorType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::CursorType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6880;
        }
        return this_00;
    }

    // 0x1005d3c80, 256 bytes, inline, placed by class name
    // LRUCache<game::CursorType>::Put(shared_ptr<game::CursorType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::CursorType>::Put(shared_ptr* param_1, uint param_2,
                                                                                ulonglong param_3) {
        LRUCache<game::CursorType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::CursorType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::CursorType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::CursorType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1005d5580, 112 bytes, inline, placed by class name
    // LRUCache<game::CursorType>::Remove(unsigned long long)
    void LRUCache<game::CursorType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::CursorType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::CursorType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005d89c0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::WorldAreaType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005d89d0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::WorldAreaType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005d8c20, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::WorldAreaType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::WorldAreaType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::WorldAreaType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005d8d10, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::WorldAreaType>::~LRUCache()
    void LRUCache<game::WorldAreaType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005d8d90, 144 bytes, inline, placed by class name
    // LRUCache<game::WorldAreaType>::Clean(unsigned long long)
    void LRUCache<game::WorldAreaType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005d8e20, 64 bytes, inline, placed by class name
    // LRUCache<game::WorldAreaType>::RemoveInner(LRUCacheWrapper<game::WorldAreaType>*)
    void LRUCache<game::WorldAreaType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::WorldAreaType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005d8fc0, 144 bytes, inline, placed by class name
    // LRUCache<game::WorldAreaType>::Resize(unsigned int)
    void LRUCache<game::WorldAreaType>::Resize(uint param_1) {
        LRUCache<game::WorldAreaType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::WorldAreaType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005d9050, 160 bytes, inline, placed by class name
    // LRUCache<game::WorldAreaType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::WorldAreaType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::WorldAreaType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::WorldAreaType>>>,
                      true, true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68c0;
        }
        return this_00;
    }

    // 0x1005d9240, 256 bytes, inline, placed by class name
    // LRUCache<game::WorldAreaType>::Put(shared_ptr<game::WorldAreaType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::WorldAreaType>::Put(shared_ptr* param_1, uint param_2,
                                                                                   ulonglong param_3) {
        LRUCache<game::WorldAreaType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::WorldAreaType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::WorldAreaType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::WorldAreaType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1005dab70, 112 bytes, inline, placed by class name
    // LRUCache<game::WorldAreaType>::Remove(unsigned long long)
    void LRUCache<game::WorldAreaType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::WorldAreaType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::WorldAreaType>>>,
                      true, true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005de2e0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::EnumType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005de2f0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::EnumType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005de540, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::EnumType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::EnumType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::EnumType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005de630, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::EnumType>::~LRUCache()
    void LRUCache<game::EnumType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005de6b0, 144 bytes, inline, placed by class name
    // LRUCache<game::EnumType>::Clean(unsigned long long)
    void LRUCache<game::EnumType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005de740, 64 bytes, inline, placed by class name
    // LRUCache<game::EnumType>::RemoveInner(LRUCacheWrapper<game::EnumType>*)
    void LRUCache<game::EnumType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::EnumType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005de8e0, 144 bytes, inline, placed by class name
    // LRUCache<game::EnumType>::Resize(unsigned int)
    void LRUCache<game::EnumType>::Resize(uint param_1) {
        LRUCache<game::EnumType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::EnumType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005de970, 160 bytes, inline, placed by class name
    // LRUCache<game::EnumType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::EnumType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::EnumType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::EnumType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6948;
        }
        return this_00;
    }

    // 0x1005deb60, 256 bytes, inline, placed by class name
    // LRUCache<game::EnumType>::Put(shared_ptr<game::EnumType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::EnumType>::Put(shared_ptr* param_1, uint param_2,
                                                                              ulonglong param_3) {
        LRUCache<game::EnumType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::EnumType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::EnumType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::EnumType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1005e0eb0, 112 bytes, inline, placed by class name
    // LRUCache<game::EnumType>::Remove(unsigned long long)
    void LRUCache<game::EnumType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::EnumType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::EnumType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005e4640, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::EffectAnimType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005e4650, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::EffectAnimType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005e48a0, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::EffectAnimType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::EffectAnimType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::EffectAnimType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005e4990, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::EffectAnimType>::~LRUCache()
    void LRUCache<game::EffectAnimType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005e4a10, 144 bytes, inline, placed by class name
    // LRUCache<game::EffectAnimType>::Clean(unsigned long long)
    void LRUCache<game::EffectAnimType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005e4aa0, 64 bytes, inline, placed by class name
    // LRUCache<game::EffectAnimType>::RemoveInner(LRUCacheWrapper<game::EffectAnimType>*)
    void LRUCache<game::EffectAnimType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::EffectAnimType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005e4c40, 144 bytes, inline, placed by class name
    // LRUCache<game::EffectAnimType>::Resize(unsigned int)
    void LRUCache<game::EffectAnimType>::Resize(uint param_1) {
        LRUCache<game::EffectAnimType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::EffectAnimType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005e4cd0, 160 bytes, inline, placed by class name
    // LRUCache<game::EffectAnimType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::EffectAnimType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::EffectAnimType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::EffectAnimType>>>,
                      true, true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68c8;
        }
        return this_00;
    }

    // 0x1005e4ef0, 256 bytes, inline, placed by class name
    // LRUCache<game::EffectAnimType>::Put(shared_ptr<game::EffectAnimType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::EffectAnimType>::Put(shared_ptr* param_1, uint param_2,
                                                                                    ulonglong param_3) {
        LRUCache<game::EffectAnimType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::EffectAnimType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::EffectAnimType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::EffectAnimType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1005e68d0, 112 bytes, inline, placed by class name
    // LRUCache<game::EffectAnimType>::Remove(unsigned long long)
    void LRUCache<game::EffectAnimType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::EffectAnimType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::EffectAnimType>>>,
                      true, true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005ea390, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::StructType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005ea3a0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::StructType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005ea5f0, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::StructType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::StructType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::StructType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005ea6e0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::StructType>::~LRUCache()
    void LRUCache<game::StructType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005ea760, 144 bytes, inline, placed by class name
    // LRUCache<game::StructType>::Clean(unsigned long long)
    void LRUCache<game::StructType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005ea7f0, 64 bytes, inline, placed by class name
    // LRUCache<game::StructType>::RemoveInner(LRUCacheWrapper<game::StructType>*)
    void LRUCache<game::StructType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::StructType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005ea990, 144 bytes, inline, placed by class name
    // LRUCache<game::StructType>::Resize(unsigned int)
    void LRUCache<game::StructType>::Resize(uint param_1) {
        LRUCache<game::StructType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::StructType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005eaa20, 160 bytes, inline, placed by class name
    // LRUCache<game::StructType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::StructType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::StructType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::StructType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6890;
        }
        return this_00;
    }

    // 0x1005eac20, 256 bytes, inline, placed by class name
    // LRUCache<game::StructType>::Put(shared_ptr<game::StructType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::StructType>::Put(shared_ptr* param_1, uint param_2,
                                                                                ulonglong param_3) {
        LRUCache<game::StructType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::StructType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::StructType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::StructType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1005ec520, 112 bytes, inline, placed by class name
    // LRUCache<game::StructType>::Remove(unsigned long long)
    void LRUCache<game::StructType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::StructType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::StructType>>>, true,
                      true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005efa30, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUCache<game::AchievementType>::LRUCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005efa40, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUCache<game::AchievementType>::~LRUCache(): jumps straight to the base-object destructor

    // 0x1005efc90, 128 bytes, base-object constructor, inline, placed by class name
    // LRUCache<game::AchievementType>::LRUCache(unsigned int, char const*)
    void LRUCache<game::AchievementType>::LRUCache(uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::AchievementType>, 32ul, true,
                                          eastl::less<unsigned long long>, eastl::allocator>();
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005efd80, 80 bytes, base-object destructor, inline, placed by class name
    // LRUCache<game::AchievementType>::~LRUCache()
    void LRUCache<game::AchievementType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005efe00, 144 bytes, inline, placed by class name
    // LRUCache<game::AchievementType>::Clean(unsigned long long)
    void LRUCache<game::AchievementType>::Clean(ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (param_1 <= (ulong)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005efe90, 64 bytes, inline, placed by class name
    // LRUCache<game::AchievementType>::RemoveInner(LRUCacheWrapper<game::AchievementType>*)
    void LRUCache<game::AchievementType>::RemoveInner(LRUCacheWrapper* param_1) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        eastl::map<unsigned long long, LRUCacheWrapper<game::AchievementType>, eastl::less<unsigned long long>,
                   eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::erase((ulonglong*)(this +
                                                                                                                  8));
    }

    // 0x1005f0030, 144 bytes, inline, placed by class name
    // LRUCache<game::AchievementType>::Resize(unsigned int)
    void LRUCache<game::AchievementType>::Resize(uint param_1) {
        LRUCache<game::AchievementType>* pLVar1;

        if (*(uint*)this != param_1) {
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 + (param_1 - *(uint*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::AchievementType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(uint*)this = param_1;
        }
    }

    // 0x1005f00c0, 160 bytes, inline, placed by class name
    // LRUCache<game::AchievementType>::Find(unsigned long long)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::AchievementType>::Find(ulonglong param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::AchievementType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::AchievementType>>>,
                      true, true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this_00);
            *(undefined8*)(lVar2 + 40) = *(undefined8*)(this + 3328);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this_00,
                                                                                   *(LRUCacheWrapper**)(this + 3312));
        } else {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68d8;
        }
        return this_00;
    }

    // 0x1005f02b0, 256 bytes, inline, placed by class name
    // LRUCache<game::AchievementType>::Put(shared_ptr<game::AchievementType> const&, unsigned int, unsigned long long)
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<game::AchievementType>::Put(shared_ptr* param_1, uint param_2,
                                                                                     ulonglong param_3) {
        LRUCache<game::AchievementType>* pLVar1;
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00;
        ulonglong local_38;

        local_38 = param_3;
        Remove(this, param_3);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::AchievementType>**)(this + 3320) == this + 3272) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUCacheWrapper<oldscape::graphics::Pix32>*)
            eastl::map<unsigned long long, LRUCacheWrapper<game::AchievementType>, eastl::less<unsigned long long>,
                       eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((map<unsigned long long, LRUCacheWrapper<game::AchievementType>, eastl::less<unsigned long long>,
                            eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)(this + 8),
                       &local_38);
        LRUCacheWrapper<oldscape::graphics::Pix32>::LRUCacheWrapper(this_00, param_1, local_38,
                                                                    *(ulonglong*)(this + 3328), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 3312));
        return this_00;
    }

    // 0x1005f2470, 112 bytes, inline, placed by class name
    // LRUCache<game::AchievementType>::Remove(unsigned long long)
    void LRUCache<game::AchievementType>::Remove(ulonglong param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[8];
        ulonglong local_38;
        eastl local_30[8];

        local_38 = param_1;
        eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, LRUCacheWrapper<game::AchievementType>>,
                      eastl::less<unsigned long long>,
                      eastl::fixed_node_allocator<96ul, 32ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned long long const, LRUCacheWrapper<game::AchievementType>>>,
                      true, true>::find((ulonglong*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_30, local_40, extraout_RDX)) {
            RemoveInner(local_30);
        }
    }

    // 0x1005f6550, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.39
    void ___cxx_global_var_init_39(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6900;
        puVar1 = PTR_NullCacheObj_100ee48b0;
        if (*PTR_NullCacheObj_100ee48b0 == '\0') {
            new (PTR_NullCacheObj_100ee6900) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5260, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6610, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.42
    void ___cxx_global_var_init_42(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6880;
        puVar1 = PTR_NullCacheObj_100ee4830;
        if (*PTR_NullCacheObj_100ee4830 == '\0') {
            new (PTR_NullCacheObj_100ee6880) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5190, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f66d0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.45
    void ___cxx_global_var_init_45(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6950;
        puVar1 = PTR_NullCacheObj_100ee4900;
        if (*PTR_NullCacheObj_100ee4900 == '\0') {
            new (PTR_NullCacheObj_100ee6950) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52c0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6790, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.48
    void ___cxx_global_var_init_48(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68a0;
        puVar1 = PTR_NullCacheObj_100ee4850;
        if (*PTR_NullCacheObj_100ee4850 == '\0') {
            new (PTR_NullCacheObj_100ee68a0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51b0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6910, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.54
    void ___cxx_global_var_init_54(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6948;
        puVar1 = PTR_NullCacheObj_100ee48f8;
        if (*PTR_NullCacheObj_100ee48f8 == '\0') {
            new (PTR_NullCacheObj_100ee6948) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52b0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f69d0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.57
    void ___cxx_global_var_init_57(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68e0;
        puVar1 = PTR_NullCacheObj_100ee4890;
        if (*PTR_NullCacheObj_100ee4890 == '\0') {
            new (PTR_NullCacheObj_100ee68e0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5208, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6a90, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.60
    void ___cxx_global_var_init_60(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee68f0;
        puVar1 = PTR_NullCacheObj_100ee48a0;
        if (*PTR_NullCacheObj_100ee48a0 == '\0') {
            new (PTR_NullCacheObj_100ee68f0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5220, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6f90, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.79
    void ___cxx_global_var_init_79(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6908;
        puVar1 = PTR_NullCacheObj_100ee48b8;
        if (*PTR_NullCacheObj_100ee48b8 == '\0') {
            new (PTR_NullCacheObj_100ee6908) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5268, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7050, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.82
    void ___cxx_global_var_init_82(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6910;
        puVar1 = PTR_NullCacheObj_100ee48c0;
        if (*PTR_NullCacheObj_100ee48c0 == '\0') {
            new (PTR_NullCacheObj_100ee6910) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5270, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7350, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.94
    void ___cxx_global_var_init_94(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6958;
        puVar1 = PTR_NullCacheObj_100ee4908;
        if (*PTR_NullCacheObj_100ee4908 == '\0') {
            new (PTR_NullCacheObj_100ee6958) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52c8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7610, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.105
    void ___cxx_global_var_init_105(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6960;
        puVar1 = PTR_NullCacheObj_100ee4910;
        if (*PTR_NullCacheObj_100ee4910 == '\0') {
            new (PTR_NullCacheObj_100ee6960) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52d8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7910, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.117
    void ___cxx_global_var_init_117(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6890;
        puVar1 = PTR_NullCacheObj_100ee4840;
        if (*PTR_NullCacheObj_100ee4840 == '\0') {
            new (PTR_NullCacheObj_100ee6890) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51a0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7ac0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.124
    void ___cxx_global_var_init_124(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6970;
        puVar1 = PTR_NullCacheObj_100ee4920;
        if (*PTR_NullCacheObj_100ee4920 == '\0') {
            new (PTR_NullCacheObj_100ee6970) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52e8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

} // namespace jag
