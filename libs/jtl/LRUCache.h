// libs/jtl/LRUCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    template <typename...> // 34 instantiations, e.g. <game::AchievementType>, <game::BASType>, <game::CursorType>
    class LRUCache {
    public:
        LRUCache(unsigned int arg1, const char* str);
        ~LRUCache();
        void Reset();
        void Clean(unsigned long long arg1);
        void RemoveInner(LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* lruCacheWrapper);
        void Resize(unsigned int arg1);
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* Find(unsigned long long arg1);
        LRUCacheWrapper<oldscape::graphics::Pix32>*
        Put(const shared_ptr<oldscape::configdecoder::OldscapeVarType>& oldscapeVarType, unsigned int arg2,
            unsigned long long arg3);
        void Remove(unsigned long long arg1);
        void
        RemoveInner(eastl::rbtree_iterator<
                    eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>>,
                    eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>>*,
                    eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>>&>&
                        rbtree_iterator);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<oldscape::graphics::Pix32>& pix32,
                                                        unsigned int arg2, unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<oldscape::graphics::Pix32>* lruCacheWrapper);
        void RemoveInner(LRUCacheWrapper<game::VarType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::VarType>& varType, unsigned int arg2,
                                                        unsigned long long arg3);
        LRUCacheWrapper<oldscape::graphics::Pix32>*
        Put(const shared_ptr<game::QuickChatPhraseType>& quickChatPhraseType, unsigned int arg2,
            unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::QuickChatPhraseType>* lruCacheWrapper);
        void RemoveInner(LRUCacheWrapper<game::SeqType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::SeqType>& seqType, unsigned int arg2,
                                                        unsigned long long arg3);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<graphics::Model>& model, unsigned int arg2,
                                                        unsigned long long arg3);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::QuickChatCatType>& quickChatCatType,
                                                        unsigned int arg2, unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::ObjType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::ObjType>& objType, unsigned int arg2,
                                                        unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::QuickChatCatType>* lruCacheWrapper);
        void RemoveInner(LRUCacheWrapper<game::NPCType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::NPCType>& npcType, unsigned int arg2,
                                                        unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::LocType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::LocType>& locType, unsigned int arg2,
                                                        unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::ParamType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::ParamType>& paramType, unsigned int arg2,
                                                        unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::DBRowType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::DBRowType>& dbRowType, unsigned int arg2,
                                                        unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::DBTableType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::DBTableType>& dbTableType,
                                                        unsigned int arg2, unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::InvType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::InvType>& invType, unsigned int arg2,
                                                        unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::VarBitType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::VarBitType>& varBitType,
                                                        unsigned int arg2, unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::BASType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::BASType>& basType, unsigned int arg2,
                                                        unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::FloorUnderlayType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::FloorUnderlayType>& floorUnderlayType,
                                                        unsigned int arg2, unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::FloorOverlayType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::FloorOverlayType>& floorOverlayType,
                                                        unsigned int arg2, unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::HitmarkType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::HitmarkType>& hitmarkType,
                                                        unsigned int arg2, unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::HeadbarType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::HeadbarType>& headbarType,
                                                        unsigned int arg2, unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::IDKType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::IDKType>& idkType, unsigned int arg2,
                                                        unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::MapElementType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::MapElementType>& mapElementType,
                                                        unsigned int arg2, unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::MSIType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::MSIType>& msiType, unsigned int arg2,
                                                        unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::QuestType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::QuestType>& questType, unsigned int arg2,
                                                        unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::SeqGroupType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::SeqGroupType>& seqGroupType,
                                                        unsigned int arg2, unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::LightType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::LightType>& lightType, unsigned int arg2,
                                                        unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::SkyBoxType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::SkyBoxType>& skyBoxType,
                                                        unsigned int arg2, unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<graphics::Model>* lruCacheWrapper);
        void RemoveInner(LRUCacheWrapper<game::WaterType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::WaterType>& waterType, unsigned int arg2,
                                                        unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::CursorType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::CursorType>& cursorType,
                                                        unsigned int arg2, unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::WorldAreaType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::WorldAreaType>& worldAreaType,
                                                        unsigned int arg2, unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::EnumType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::EnumType>& enumType, unsigned int arg2,
                                                        unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::EffectAnimType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::EffectAnimType>& effectAnimType,
                                                        unsigned int arg2, unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::StructType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::StructType>& structType,
                                                        unsigned int arg2, unsigned long long arg3);
        void RemoveInner(LRUCacheWrapper<game::AchievementType>* lruCacheWrapper);
        LRUCacheWrapper<oldscape::graphics::Pix32>* Put(const shared_ptr<game::AchievementType>& achievementType,
                                                        unsigned int arg2, unsigned long long arg3);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullCacheObj; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
    };

    template <typename...> // 1 instantiations, e.g. <oldscape::configdecoder::OldscapeVarType>
    class LRUCacheWrapper {
    public:
        LRUCacheWrapper(const shared_ptr<oldscape::configdecoder::OldscapeVarType>& quickChatPhraseType,
                        unsigned long long arg2, unsigned long long arg3, unsigned int arg4);
    };

    // 0x100f37090, set at startup by ___cxx_global_var_init.590
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUCache<oldscape::configdecoder::OldscapeVarType>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f376a0, set at startup by ___cxx_global_var_init.165
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<oldscape::graphics::Pix32>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c0e0, set at startup by ___cxx_global_var_init.113
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::WorldAreaType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c168, set at startup by ___cxx_global_var_init.37
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::VarBitType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c350, set at startup by ___cxx_global_var_init.21
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::QuestType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c3b8, set at startup by ___cxx_global_var_init.24
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::VarType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c430, set at startup by ___cxx_global_var_init.37
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::QuickChatPhraseType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c4a8, set at startup by ___cxx_global_var_init.55
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::SeqType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c548, set at startup by ___cxx_global_var_init.65
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<graphics::Model>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c608, set at startup by ___cxx_global_var_init.38
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::ObjType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c640, set at startup by ___cxx_global_var_init.45
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::QuickChatCatType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c770, set at startup by ___cxx_global_var_init.52
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::NPCType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c880, set at startup by ___cxx_global_var_init.48
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::LocType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3cd90, set at startup by ___cxx_global_var_init.39
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::BASType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3cdf8, set at startup by ___cxx_global_var_init.42
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::CursorType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3ce30, set at startup by ___cxx_global_var_init.45
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::DBRowType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3ce68, set at startup by ___cxx_global_var_init.48
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::DBTableType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3cee0, set at startup by ___cxx_global_var_init.36
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::EffectAnimType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3cf18, set at startup by ___cxx_global_var_init.54
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::EnumType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3cf50, set at startup by ___cxx_global_var_init.57
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::FloorOverlayType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3cfb8, set at startup by ___cxx_global_var_init.60
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::FloorUnderlayType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3cff0, set at startup by ___cxx_global_var_init.44
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::HeadbarType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d028, set at startup by ___cxx_global_var_init.57
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::HitmarkType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d0d8, set at startup by ___cxx_global_var_init.79
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::IDKType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d150, set at startup by ___cxx_global_var_init.82
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::InvType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d1e0, set at startup by ___cxx_global_var_init.62
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::AchievementType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d290, set at startup by ___cxx_global_var_init.94
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::LightType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d300, set at startup by ___cxx_global_var_init.54
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::MapElementType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d350, set at startup by ___cxx_global_var_init.59
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::MSIType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d388, set at startup by ___cxx_global_var_init.105
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::ParamType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d490, set at startup by ___cxx_global_var_init.45
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::SeqGroupType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d510, set at startup by ___cxx_global_var_init.62
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::SkyBoxType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d588, set at startup by ___cxx_global_var_init.117
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::StructType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d5c0, set at startup by ___cxx_global_var_init.124
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUCache<game::WaterType>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x10013fa70
    LRUCache<oldscape::configdecoder::OldscapeVarType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_map<unsigned long long, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x10013fc80
    LRUCache<oldscape::configdecoder::OldscapeVarType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x10013fcd0
    void LRUCache<oldscape::configdecoder::OldscapeVarType>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUCache<oldscape::graphics::Pix32>**)(this + 3320) = this + 3272;
        *(LRUCache<oldscape::graphics::Pix32>**)(this + 3312) = this + 3272;
    }

    // 0x10013fd70
    void LRUCache<oldscape::configdecoder::OldscapeVarType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)this_00);
            }
        }
    }

    // 0x10013fe00
    void LRUCache<oldscape::configdecoder::OldscapeVarType>::RemoveInner(
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x100140000
    void LRUCache<oldscape::configdecoder::OldscapeVarType>::Resize(unsigned int arg1) {
        LRUCache<oldscape::configdecoder::OldscapeVarType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<oldscape::configdecoder::OldscapeVarType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x100140090
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<oldscape::configdecoder::OldscapeVarType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6980;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x100140150
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<oldscape::configdecoder::OldscapeVarType>::Put(
        const shared_ptr<oldscape::configdecoder::OldscapeVarType>& oldscapeVarType, unsigned int arg2,
        unsigned long long arg3) {
        LRUCache<oldscape::configdecoder::OldscapeVarType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<oldscape::configdecoder::OldscapeVarType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(oldscapeVarType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x100140450
    void LRUCache<oldscape::configdecoder::OldscapeVarType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x100140580
    void LRUCache<oldscape::configdecoder::OldscapeVarType>::RemoveInner(
        eastl::rbtree_iterator<
            eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>>,
            eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>>*,
            eastl::pair<unsigned long long const, LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>>&>&
            rbtree_iterator) {
        long lVar1;
        rbtree_iterator<eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuickChatPhraseType> _>,
                        eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuickChatPhraseType> _> const*,
                        eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuickChatPhraseType> _> const&>*
            local_20;

        if (*(int*)this != 0) {
            lVar1 = rbtree_iterator;
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lVar1 + 32);
        }
        lVar1 = rbtree_iterator;
        ((lVar1 + 8))->Unlink();
        new (&local_20) eastl::ListIterator(rbtree_iterator);
        ReturnValue local_28 = ((this + 8))->erase(local_20);
    }

    // 0x100210c00
    void LRUCache<oldscape::graphics::Pix32>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<oldscape::graphics::Pix32>*)this_00);
            }
        }
    }

    // 0x100212e80
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<oldscape::graphics::Pix32>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6988;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x100212f20
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<oldscape::graphics::Pix32>::Put(const shared_ptr<oldscape::graphics::Pix32>& pix32, unsigned int arg2,
                                             unsigned long long arg3) {
        LRUCache<oldscape::graphics::Pix32>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<oldscape::graphics::Pix32>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<oldscape::graphics::Pix32>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(pix32, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x100224a60
    LRUCache<oldscape::graphics::Pix32>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<oldscape::graphics::Pix32>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x100224b50
    LRUCache<oldscape::graphics::Pix32>::~LRUCache() {
        Reset(this);
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x100224ba0
    void LRUCache<oldscape::graphics::Pix32>::RemoveInner(LRUCacheWrapper<oldscape::graphics::Pix32>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x100225050
    void LRUCache<oldscape::graphics::Pix32>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(
                this,
                (rbtree_iterator<
                    eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuickChatPhraseType> _>,
                    eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuickChatPhraseType> _>*,
                    eastl::pair<unsigned long long const, LRUCacheWrapper<game::QuickChatPhraseType> _>&>*)&local_30);
        }
    }

    // 0x1004d8870
    LRUCache<game::VarType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::VarType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1004d89e0
    LRUCache<game::VarType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1004d8a60
    void LRUCache<game::VarType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::VarType>*)this_00);
            }
        }
    }

    // 0x1004d8af0
    void LRUCache<game::VarType>::RemoveInner(LRUCacheWrapper<game::VarType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1004d8cd0
    void LRUCache<game::VarType>::Resize(unsigned int arg1) {
        LRUCache<game::VarType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::VarType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::VarType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1004d8d60
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::VarType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6940;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1004d8f10
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::VarType>::Put(const shared_ptr<game::VarType>& varType, unsigned int arg2, unsigned long long arg3) {
        LRUCache<game::VarType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::VarType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::VarType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(varType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1004d9560
    void LRUCache<game::VarType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1004dd440
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::QuickChatPhraseType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68f8;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1004dd590
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::QuickChatPhraseType>::Put(const shared_ptr<game::QuickChatPhraseType>& quickChatPhraseType,
                                             unsigned int arg2, unsigned long long arg3) {
        LRUCache<game::QuickChatPhraseType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::QuickChatPhraseType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::QuickChatPhraseType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(quickChatPhraseType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1004e1040
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<graphics::Model>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6978;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1004e2490
    LRUCache<game::QuickChatPhraseType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::QuickChatPhraseType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1004e4010
    void LRUCache<game::QuickChatPhraseType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1004e4080
    void LRUCache<game::QuickChatPhraseType>::RemoveInner(LRUCacheWrapper<game::QuickChatPhraseType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1004eab10
    LRUCache<game::SeqType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::SeqType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1004eac00
    LRUCache<game::SeqType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1004eac80
    void LRUCache<game::SeqType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::SeqType>*)this_00);
            }
        }
    }

    // 0x1004ead10
    void LRUCache<game::SeqType>::RemoveInner(LRUCacheWrapper<game::SeqType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1004eaeb0
    void LRUCache<game::SeqType>::Resize(unsigned int arg1) {
        LRUCache<game::SeqType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::SeqType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::SeqType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1004eaf40
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::SeqType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6938;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1004eb0f0
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::SeqType>::Put(const shared_ptr<game::SeqType>& seqType, unsigned int arg2, unsigned long long arg3) {
        LRUCache<game::SeqType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::SeqType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::SeqType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(seqType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1004ecfb0
    void LRUCache<game::SeqType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1004f16e0
    LRUCacheWrapper<oldscape::graphics::Pix32>* LRUCache<graphics::Model>::Put(const shared_ptr<graphics::Model>& model,
                                                                               unsigned int arg2,
                                                                               unsigned long long arg3) {
        LRUCache<graphics::Model>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<graphics::Model>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<graphics::Model>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(model, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1004f17e0
    void LRUCache<graphics::Model>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1004f5b80
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::QuickChatCatType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68e8;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1004f5d00
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::QuickChatCatType>::Put(const shared_ptr<game::QuickChatCatType>& quickChatCatType, unsigned int arg2,
                                          unsigned long long arg3) {
        LRUCache<game::QuickChatCatType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::QuickChatCatType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::QuickChatCatType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(quickChatCatType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1004f8000
    LRUCache<game::ObjType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::ObjType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1004f80f0
    LRUCache<game::ObjType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1004f8170
    void LRUCache<game::ObjType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::ObjType>*)this_00);
            }
        }
    }

    // 0x1004f8200
    void LRUCache<game::ObjType>::RemoveInner(LRUCacheWrapper<game::ObjType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1004f83a0
    void LRUCache<game::ObjType>::Resize(unsigned int arg1) {
        LRUCache<game::ObjType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::ObjType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::ObjType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1004f8430
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::ObjType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6930;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1004f85e0
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::ObjType>::Put(const shared_ptr<game::ObjType>& objType, unsigned int arg2, unsigned long long arg3) {
        LRUCache<game::ObjType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::ObjType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::ObjType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(objType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1004f95a0
    void LRUCache<game::ObjType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1004febe0
    LRUCache<game::QuickChatCatType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::QuickChatCatType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x100500250
    void LRUCache<game::QuickChatCatType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005002c0
    void LRUCache<game::QuickChatCatType>::RemoveInner(LRUCacheWrapper<game::QuickChatCatType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x10050f2b0
    LRUCache<game::NPCType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::NPCType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x10050f3a0
    LRUCache<game::NPCType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x10050f420
    void LRUCache<game::NPCType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::NPCType>*)this_00);
            }
        }
    }

    // 0x10050f4b0
    void LRUCache<game::NPCType>::RemoveInner(LRUCacheWrapper<game::NPCType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x10050f650
    void LRUCache<game::NPCType>::Resize(unsigned int arg1) {
        LRUCache<game::NPCType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::NPCType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::NPCType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x10050f6e0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::NPCType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6928;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x10050f890
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::NPCType>::Put(const shared_ptr<game::NPCType>& npcType, unsigned int arg2, unsigned long long arg3) {
        LRUCache<game::NPCType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::NPCType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::NPCType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(npcType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x10050fee0
    void LRUCache<game::NPCType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x10051a1b0
    LRUCache<game::LocType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::LocType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x10051a2a0
    LRUCache<game::LocType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x10051a320
    void LRUCache<game::LocType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::LocType>*)this_00);
            }
        }
    }

    // 0x10051a3b0
    void LRUCache<game::LocType>::RemoveInner(LRUCacheWrapper<game::LocType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x10051a580
    void LRUCache<game::LocType>::Resize(unsigned int arg1) {
        LRUCache<game::LocType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::LocType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::LocType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x10051a610
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::LocType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6918;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x10051a7c0
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::LocType>::Put(const shared_ptr<game::LocType>& locType, unsigned int arg2, unsigned long long arg3) {
        LRUCache<game::LocType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::LocType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::LocType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(locType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x10051ba00
    void LRUCache<game::LocType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x10056f470
    LRUCache<game::QuickChatCatType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x10056f620
    LRUCache<game::QuickChatPhraseType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x100571c30
    LRUCache<game::ParamType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::ParamType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x100571d20
    LRUCache<game::ParamType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x100571da0
    void LRUCache<game::ParamType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::ParamType>*)this_00);
            }
        }
    }

    // 0x100571e30
    void LRUCache<game::ParamType>::RemoveInner(LRUCacheWrapper<game::ParamType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x100572000
    void LRUCache<game::ParamType>::Resize(unsigned int arg1) {
        LRUCache<game::ParamType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::ParamType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::ParamType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x100572090
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::ParamType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6960;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x100572290
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::ParamType>::Put(const shared_ptr<game::ParamType>& paramType, unsigned int arg2,
                                   unsigned long long arg3) {
        LRUCache<game::ParamType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::ParamType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::ParamType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(paramType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x100573d10
    void LRUCache<game::ParamType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x100577610
    LRUCache<game::DBRowType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::DBRowType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x100577700
    LRUCache<game::DBRowType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x100577780
    void LRUCache<game::DBRowType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::DBRowType>*)this_00);
            }
        }
    }

    // 0x100577810
    void LRUCache<game::DBRowType>::RemoveInner(LRUCacheWrapper<game::DBRowType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005779b0
    void LRUCache<game::DBRowType>::Resize(unsigned int arg1) {
        LRUCache<game::DBRowType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::DBRowType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::DBRowType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x100577a40
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::DBRowType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6950;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x100577c40
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::DBRowType>::Put(const shared_ptr<game::DBRowType>& dbRowType, unsigned int arg2,
                                   unsigned long long arg3) {
        LRUCache<game::DBRowType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::DBRowType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::DBRowType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(dbRowType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x100579970
    void LRUCache<game::DBRowType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x10057d0d0
    LRUCache<game::DBTableType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::DBTableType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x10057d1c0
    LRUCache<game::DBTableType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x10057d240
    void LRUCache<game::DBTableType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::DBTableType>*)this_00);
            }
        }
    }

    // 0x10057d2d0
    void LRUCache<game::DBTableType>::RemoveInner(LRUCacheWrapper<game::DBTableType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x10057d470
    void LRUCache<game::DBTableType>::Resize(unsigned int arg1) {
        LRUCache<game::DBTableType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::DBTableType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::DBTableType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x10057d500
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::DBTableType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68a0;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x10057d710
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::DBTableType>::Put(const shared_ptr<game::DBTableType>& dbTableType, unsigned int arg2,
                                     unsigned long long arg3) {
        LRUCache<game::DBTableType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::DBTableType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::DBTableType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(dbTableType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x10057f050
    void LRUCache<game::DBTableType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005827c0
    LRUCache<game::InvType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::InvType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005828b0
    LRUCache<game::InvType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x100582930
    void LRUCache<game::InvType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::InvType>*)this_00);
            }
        }
    }

    // 0x1005829c0
    void LRUCache<game::InvType>::RemoveInner(LRUCacheWrapper<game::InvType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x100582b60
    void LRUCache<game::InvType>::Resize(unsigned int arg1) {
        LRUCache<game::InvType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::InvType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::InvType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x100582bf0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::InvType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6910;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x100582e00
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::InvType>::Put(const shared_ptr<game::InvType>& invType, unsigned int arg2, unsigned long long arg3) {
        LRUCache<game::InvType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::InvType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::InvType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(invType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x100584730
    void LRUCache<game::InvType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x100587e90
    LRUCache<game::VarBitType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::VarBitType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x100587f80
    LRUCache<game::VarBitType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x100588000
    void LRUCache<game::VarBitType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::VarBitType>*)this_00);
            }
        }
    }

    // 0x100588090
    void LRUCache<game::VarBitType>::RemoveInner(LRUCacheWrapper<game::VarBitType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x100588230
    void LRUCache<game::VarBitType>::Resize(unsigned int arg1) {
        LRUCache<game::VarBitType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::VarBitType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::VarBitType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005882c0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::VarBitType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6898;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x100588470
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::VarBitType>::Put(const shared_ptr<game::VarBitType>& varBitType, unsigned int arg2,
                                    unsigned long long arg3) {
        LRUCache<game::VarBitType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::VarBitType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::VarBitType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(varBitType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x100588ac0
    void LRUCache<game::VarBitType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x10058c260
    LRUCache<game::BASType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::BASType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x10058c350
    LRUCache<game::BASType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x10058c3d0
    void LRUCache<game::BASType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::BASType>*)this_00);
            }
        }
    }

    // 0x10058c460
    void LRUCache<game::BASType>::RemoveInner(LRUCacheWrapper<game::BASType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x10058c600
    void LRUCache<game::BASType>::Resize(unsigned int arg1) {
        LRUCache<game::BASType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::BASType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::BASType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x10058c690
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::BASType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6900;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x10058c880
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::BASType>::Put(const shared_ptr<game::BASType>& basType, unsigned int arg2, unsigned long long arg3) {
        LRUCache<game::BASType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::BASType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::BASType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(basType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x10058e270
    void LRUCache<game::BASType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005919c0
    LRUCache<game::FloorUnderlayType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::FloorUnderlayType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x100591ab0
    LRUCache<game::FloorUnderlayType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x100591b30
    void LRUCache<game::FloorUnderlayType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::FloorUnderlayType>*)this_00);
            }
        }
    }

    // 0x100591bc0
    void LRUCache<game::FloorUnderlayType>::RemoveInner(LRUCacheWrapper<game::FloorUnderlayType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x100591d60
    void LRUCache<game::FloorUnderlayType>::Resize(unsigned int arg1) {
        LRUCache<game::FloorUnderlayType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::FloorUnderlayType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::FloorUnderlayType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x100591df0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::FloorUnderlayType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68f0;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x100591ff0
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::FloorUnderlayType>::Put(const shared_ptr<game::FloorUnderlayType>& floorUnderlayType,
                                           unsigned int arg2, unsigned long long arg3) {
        LRUCache<game::FloorUnderlayType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::FloorUnderlayType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::FloorUnderlayType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(floorUnderlayType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x100593910
    void LRUCache<game::FloorUnderlayType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x100597070
    LRUCache<game::FloorOverlayType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::FloorOverlayType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x100597160
    LRUCache<game::FloorOverlayType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005971e0
    void LRUCache<game::FloorOverlayType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::FloorOverlayType>*)this_00);
            }
        }
    }

    // 0x100597270
    void LRUCache<game::FloorOverlayType>::RemoveInner(LRUCacheWrapper<game::FloorOverlayType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x100597410
    void LRUCache<game::FloorOverlayType>::Resize(unsigned int arg1) {
        LRUCache<game::FloorOverlayType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::FloorOverlayType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::FloorOverlayType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005974a0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::FloorOverlayType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68e0;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1005976b0
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::FloorOverlayType>::Put(const shared_ptr<game::FloorOverlayType>& floorOverlayType, unsigned int arg2,
                                          unsigned long long arg3) {
        LRUCache<game::FloorOverlayType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::FloorOverlayType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::FloorOverlayType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(floorOverlayType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x100598fc0
    void LRUCache<game::FloorOverlayType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x10059c810
    LRUCache<game::HitmarkType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::HitmarkType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x10059c900
    LRUCache<game::HitmarkType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x10059c980
    void LRUCache<game::HitmarkType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::HitmarkType>*)this_00);
            }
        }
    }

    // 0x10059ca10
    void LRUCache<game::HitmarkType>::RemoveInner(LRUCacheWrapper<game::HitmarkType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x10059cbb0
    void LRUCache<game::HitmarkType>::Resize(unsigned int arg1) {
        LRUCache<game::HitmarkType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::HitmarkType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::HitmarkType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x10059cc40
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::HitmarkType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68b0;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x10059ce30
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::HitmarkType>::Put(const shared_ptr<game::HitmarkType>& hitmarkType, unsigned int arg2,
                                     unsigned long long arg3) {
        LRUCache<game::HitmarkType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::HitmarkType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::HitmarkType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(hitmarkType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x10059dc30
    void LRUCache<game::HitmarkType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005a1880
    LRUCache<game::HeadbarType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::HeadbarType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005a1970
    LRUCache<game::HeadbarType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005a19f0
    void LRUCache<game::HeadbarType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::HeadbarType>*)this_00);
            }
        }
    }

    // 0x1005a1a80
    void LRUCache<game::HeadbarType>::RemoveInner(LRUCacheWrapper<game::HeadbarType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005a1c20
    void LRUCache<game::HeadbarType>::Resize(unsigned int arg1) {
        LRUCache<game::HeadbarType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::HeadbarType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::HeadbarType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005a1cb0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::HeadbarType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68a8;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1005a1e80
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::HeadbarType>::Put(const shared_ptr<game::HeadbarType>& headbarType, unsigned int arg2,
                                     unsigned long long arg3) {
        LRUCache<game::HeadbarType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::HeadbarType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::HeadbarType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(headbarType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1005a37a0
    void LRUCache<game::HeadbarType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005a6e30
    LRUCache<game::IDKType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::IDKType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005a6f20
    LRUCache<game::IDKType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005a6fa0
    void LRUCache<game::IDKType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::IDKType>*)this_00);
            }
        }
    }

    // 0x1005a7030
    void LRUCache<game::IDKType>::RemoveInner(LRUCacheWrapper<game::IDKType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005a71d0
    void LRUCache<game::IDKType>::Resize(unsigned int arg1) {
        LRUCache<game::IDKType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::IDKType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::IDKType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005a7260
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::IDKType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6908;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1005a7450
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::IDKType>::Put(const shared_ptr<game::IDKType>& idkType, unsigned int arg2, unsigned long long arg3) {
        LRUCache<game::IDKType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::IDKType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::IDKType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(idkType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1005a8fa0
    void LRUCache<game::IDKType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005ac7c0
    LRUCache<game::MapElementType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::MapElementType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005ac8b0
    LRUCache<game::MapElementType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005ac930
    void LRUCache<game::MapElementType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::MapElementType>*)this_00);
            }
        }
    }

    // 0x1005ac9c0
    void LRUCache<game::MapElementType>::RemoveInner(LRUCacheWrapper<game::MapElementType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005acb60
    void LRUCache<game::MapElementType>::Resize(unsigned int arg1) {
        LRUCache<game::MapElementType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::MapElementType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::MapElementType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005acbf0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::MapElementType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68d0;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1005acde0
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::MapElementType>::Put(const shared_ptr<game::MapElementType>& mapElementType, unsigned int arg2,
                                        unsigned long long arg3) {
        LRUCache<game::MapElementType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::MapElementType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::MapElementType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(mapElementType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1005af200
    void LRUCache<game::MapElementType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005b3040
    LRUCache<game::MSIType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::MSIType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005b3130
    LRUCache<game::MSIType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005b31b0
    void LRUCache<game::MSIType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::MSIType>*)this_00);
            }
        }
    }

    // 0x1005b3240
    void LRUCache<game::MSIType>::RemoveInner(LRUCacheWrapper<game::MSIType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005b33e0
    void LRUCache<game::MSIType>::Resize(unsigned int arg1) {
        LRUCache<game::MSIType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::MSIType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::MSIType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005b3470
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::MSIType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6920;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1005b3670
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::MSIType>::Put(const shared_ptr<game::MSIType>& msiType, unsigned int arg2, unsigned long long arg3) {
        LRUCache<game::MSIType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::MSIType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::MSIType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(msiType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1005b4f50
    void LRUCache<game::MSIType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005b8ac0
    LRUCache<game::QuestType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::QuestType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005b8bb0
    LRUCache<game::QuestType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005b8c30
    void LRUCache<game::QuestType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::QuestType>*)this_00);
            }
        }
    }

    // 0x1005b8cc0
    void LRUCache<game::QuestType>::RemoveInner(LRUCacheWrapper<game::QuestType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005b8e60
    void LRUCache<game::QuestType>::Resize(unsigned int arg1) {
        LRUCache<game::QuestType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::QuestType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::QuestType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005b8ef0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::QuestType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6968;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1005b90a0
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::QuestType>::Put(const shared_ptr<game::QuestType>& questType, unsigned int arg2,
                                   unsigned long long arg3) {
        LRUCache<game::QuestType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::QuestType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::QuestType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(questType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1005baf00
    void LRUCache<game::QuestType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005be650
    LRUCache<game::SeqGroupType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::SeqGroupType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005be740
    LRUCache<game::SeqGroupType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005be7c0
    void LRUCache<game::SeqGroupType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::SeqGroupType>*)this_00);
            }
        }
    }

    // 0x1005be850
    void LRUCache<game::SeqGroupType>::RemoveInner(LRUCacheWrapper<game::SeqGroupType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005be9f0
    void LRUCache<game::SeqGroupType>::Resize(unsigned int arg1) {
        LRUCache<game::SeqGroupType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::SeqGroupType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::SeqGroupType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005bea80
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::SeqGroupType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68b8;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1005bec90
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::SeqGroupType>::Put(const shared_ptr<game::SeqGroupType>& seqGroupType, unsigned int arg2,
                                      unsigned long long arg3) {
        LRUCache<game::SeqGroupType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::SeqGroupType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::SeqGroupType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(seqGroupType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1005c0620
    void LRUCache<game::SeqGroupType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005c3d90
    LRUCache<game::LightType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::LightType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005c3e80
    LRUCache<game::LightType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005c3f00
    void LRUCache<game::LightType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::LightType>*)this_00);
            }
        }
    }

    // 0x1005c3f90
    void LRUCache<game::LightType>::RemoveInner(LRUCacheWrapper<game::LightType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005c4130
    void LRUCache<game::LightType>::Resize(unsigned int arg1) {
        LRUCache<game::LightType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::LightType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::LightType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005c41c0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::LightType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6958;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1005c43c0
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::LightType>::Put(const shared_ptr<game::LightType>& lightType, unsigned int arg2,
                                   unsigned long long arg3) {
        LRUCache<game::LightType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::LightType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::LightType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(lightType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1005c5cd0
    void LRUCache<game::LightType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005c9510
    LRUCache<game::SkyBoxType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::SkyBoxType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005c9600
    LRUCache<game::SkyBoxType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005c9680
    void LRUCache<game::SkyBoxType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::SkyBoxType>*)this_00);
            }
        }
    }

    // 0x1005c9710
    void LRUCache<game::SkyBoxType>::RemoveInner(LRUCacheWrapper<game::SkyBoxType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005c98b0
    void LRUCache<game::SkyBoxType>::Resize(unsigned int arg1) {
        LRUCache<game::SkyBoxType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::SkyBoxType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::SkyBoxType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005c9940
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::SkyBoxType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6888;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1005c9b50
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::SkyBoxType>::Put(const shared_ptr<game::SkyBoxType>& skyBoxType, unsigned int arg2,
                                    unsigned long long arg3) {
        LRUCache<game::SkyBoxType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::SkyBoxType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::SkyBoxType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(skyBoxType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1005cb470
    void LRUCache<game::SkyBoxType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005ce2b0
    LRUCache<graphics::Model>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<graphics::Model>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005ce390
    LRUCache<graphics::Model>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005ce710
    void LRUCache<graphics::Model>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<graphics::Model>*)this_00);
            }
        }
    }

    // 0x1005ce7a0
    void LRUCache<graphics::Model>::RemoveInner(LRUCacheWrapper<graphics::Model>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005cf2a0
    LRUCache<game::WaterType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::WaterType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005cf390
    LRUCache<game::WaterType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005cf410
    void LRUCache<game::WaterType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::WaterType>*)this_00);
            }
        }
    }

    // 0x1005cf4a0
    void LRUCache<game::WaterType>::RemoveInner(LRUCacheWrapper<game::WaterType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005cf640
    void LRUCache<game::WaterType>::Resize(unsigned int arg1) {
        LRUCache<game::WaterType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::WaterType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::WaterType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005cf6d0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::WaterType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6970;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1005cf8c0
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::WaterType>::Put(const shared_ptr<game::WaterType>& waterType, unsigned int arg2,
                                   unsigned long long arg3) {
        LRUCache<game::WaterType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::WaterType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::WaterType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(waterType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1005cff10
    void LRUCache<game::WaterType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005d3660
    LRUCache<game::CursorType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::CursorType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005d3750
    LRUCache<game::CursorType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005d37d0
    void LRUCache<game::CursorType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::CursorType>*)this_00);
            }
        }
    }

    // 0x1005d3860
    void LRUCache<game::CursorType>::RemoveInner(LRUCacheWrapper<game::CursorType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005d3a00
    void LRUCache<game::CursorType>::Resize(unsigned int arg1) {
        LRUCache<game::CursorType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::CursorType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::CursorType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005d3a90
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::CursorType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6880;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1005d3c80
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::CursorType>::Put(const shared_ptr<game::CursorType>& cursorType, unsigned int arg2,
                                    unsigned long long arg3) {
        LRUCache<game::CursorType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::CursorType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::CursorType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(cursorType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1005d5580
    void LRUCache<game::CursorType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005d8c20
    LRUCache<game::WorldAreaType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::WorldAreaType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005d8d10
    LRUCache<game::WorldAreaType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005d8d90
    void LRUCache<game::WorldAreaType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::WorldAreaType>*)this_00);
            }
        }
    }

    // 0x1005d8e20
    void LRUCache<game::WorldAreaType>::RemoveInner(LRUCacheWrapper<game::WorldAreaType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005d8fc0
    void LRUCache<game::WorldAreaType>::Resize(unsigned int arg1) {
        LRUCache<game::WorldAreaType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::WorldAreaType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::WorldAreaType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005d9050
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::WorldAreaType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68c0;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1005d9240
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::WorldAreaType>::Put(const shared_ptr<game::WorldAreaType>& worldAreaType, unsigned int arg2,
                                       unsigned long long arg3) {
        LRUCache<game::WorldAreaType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::WorldAreaType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::WorldAreaType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(worldAreaType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1005dab70
    void LRUCache<game::WorldAreaType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005de540
    LRUCache<game::EnumType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::EnumType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005de630
    LRUCache<game::EnumType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005de6b0
    void LRUCache<game::EnumType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::EnumType>*)this_00);
            }
        }
    }

    // 0x1005de740
    void LRUCache<game::EnumType>::RemoveInner(LRUCacheWrapper<game::EnumType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005de8e0
    void LRUCache<game::EnumType>::Resize(unsigned int arg1) {
        LRUCache<game::EnumType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::EnumType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::EnumType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005de970
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* LRUCache<game::EnumType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6948;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1005deb60
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::EnumType>::Put(const shared_ptr<game::EnumType>& enumType, unsigned int arg2,
                                  unsigned long long arg3) {
        LRUCache<game::EnumType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::EnumType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::EnumType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(enumType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1005e0eb0
    void LRUCache<game::EnumType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005e48a0
    LRUCache<game::EffectAnimType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::EffectAnimType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005e4990
    LRUCache<game::EffectAnimType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005e4a10
    void LRUCache<game::EffectAnimType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::EffectAnimType>*)this_00);
            }
        }
    }

    // 0x1005e4aa0
    void LRUCache<game::EffectAnimType>::RemoveInner(LRUCacheWrapper<game::EffectAnimType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005e4c40
    void LRUCache<game::EffectAnimType>::Resize(unsigned int arg1) {
        LRUCache<game::EffectAnimType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::EffectAnimType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::EffectAnimType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005e4cd0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::EffectAnimType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68c8;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1005e4ef0
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::EffectAnimType>::Put(const shared_ptr<game::EffectAnimType>& effectAnimType, unsigned int arg2,
                                        unsigned long long arg3) {
        LRUCache<game::EffectAnimType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::EffectAnimType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::EffectAnimType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(effectAnimType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1005e68d0
    void LRUCache<game::EffectAnimType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005ea5f0
    LRUCache<game::StructType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::StructType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005ea6e0
    LRUCache<game::StructType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005ea760
    void LRUCache<game::StructType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::StructType>*)this_00);
            }
        }
    }

    // 0x1005ea7f0
    void LRUCache<game::StructType>::RemoveInner(LRUCacheWrapper<game::StructType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005ea990
    void LRUCache<game::StructType>::Resize(unsigned int arg1) {
        LRUCache<game::StructType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::StructType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::StructType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005eaa20
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::StructType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee6890;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1005eac20
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::StructType>::Put(const shared_ptr<game::StructType>& structType, unsigned int arg2,
                                    unsigned long long arg3) {
        LRUCache<game::StructType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::StructType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::StructType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(structType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1005ec520
    void LRUCache<game::StructType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

    // 0x1005efc90
    LRUCache<game::AchievementType>::LRUCache(unsigned int arg1, const char* str) {
        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_map<unsigned long long, LRUCacheWrapper<game::AchievementType>, 32ul>();
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 3272);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 3328) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3320) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 3312) = this_00;
        ~AutoSingleton();
    }

    // 0x1005efd80
    LRUCache<game::AchievementType>::~LRUCache() {
        Reset();
        ((this + 3272))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_map();
    }

    // 0x1005efe00
    void LRUCache<game::AchievementType>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 3328) = *(long*)(this + 3328) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 3320);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 3272) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 3328) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUCacheWrapper<game::AchievementType>*)this_00);
            }
        }
    }

    // 0x1005efe90
    void LRUCache<game::AchievementType>::RemoveInner(LRUCacheWrapper<game::AchievementType>* lruCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruCacheWrapper + 24);
        }
        lruCacheWrapper->Unlink();
        ((this + 8))->erase(*((lruCacheWrapper + 16)));
    }

    // 0x1005f0030
    void LRUCache<game::AchievementType>::Resize(unsigned int arg1) {
        LRUCache<game::AchievementType>* pLVar1;

        if (*(unsigned int*)this != arg1) {
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 + (arg1 - *(unsigned int*)this);
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::AchievementType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 277,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::AchievementType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
            *(unsigned int*)this = arg1;
        }
    }

    // 0x1005f00c0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUCache<game::AchievementType>::Find(unsigned long long arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee68d8;
        } else {
            lVar2 = *local_30;
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 3328);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        }
        return this_00;
    }

    // 0x1005f02b0
    LRUCacheWrapper<oldscape::graphics::Pix32>*
    LRUCache<game::AchievementType>::Put(const shared_ptr<game::AchievementType>& achievementType, unsigned int arg2,
                                         unsigned long long arg3) {
        LRUCache<game::AchievementType>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 193,
                          "LRUCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUCache<game::AchievementType>**)(this + 3320) == this + 3272) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUCache.h", 197,
                            "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUCacheWrapper<game::AchievementType>**)(this + 3320));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUCacheWrapper<oldscape::graphics::Pix32>* this_00 =
            (LRUCacheWrapper<oldscape::graphics::Pix32>*)(*((this + 8)))[arg3];
        new (this_00) LRUCacheWrapper(achievementType, arg3, *(unsigned long long*)(this + 3328), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 3312)));
        return this_00;
    }

    // 0x1005f2470
    void LRUCache<game::AchievementType>::Remove(unsigned long long arg1) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        ReturnValue local_30 = ((this + 8))->find(arg1);
        local_40.end();
        if (local_30 != local_40 != '\0') {
            RemoveInner(&local_30);
        }
    }

} // namespace jag
