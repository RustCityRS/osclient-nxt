// libs/game/runetek5/config/iftype/cutscenes/Cutscene2DResources.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class Cutscene2DResources {
    public:
        class ResourceInfo;
        void Load(float arg1, float arg2, Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider,
                  graphics::SpriteAtlasManager* spriteAtlasManager, SoundManager* soundManager);
        unsigned int Ready(float arg1) const;
        void Empty() const;
        void Reload();
        void NotifyPaused(bool arg1);
        void Clear();
        uint8_t* GetSprite(int arg1) const;
        uint64_t GetSound(int arg1, float arg2, float arg3) const;
        Cutscene2DResources();
        ~Cutscene2DResources();
        Cutscene2DResources* operator=(const Cutscene2DResources& cutscene2DResources);
        Cutscene2DResources(const Cutscene2DResources& cutscene2DResources);
        void RegisterSprite(int arg1, float arg2, float arg3);
        void RegisterSound(int arg1, float arg2, float arg3);
        shared_ptr GetSubtitleDataSource() const;
        void SetSubtitleDataSourceID(unsigned short arg1);
        static float m_preloadAdvanceSec;        // = 2.5f
        static int32_t m_disableResourceLoading; // = 0

    private:
        uint8_t _unknown_0[8];
        PlayerDataComparator<oldscape::social::FriendChatUser>* field_8;
        rbtree_node<eastl::pair<int const, ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>>>* field_16;
        uint8_t _unknown_24[8];
        long field_32;
        uint8_t _unknown_40[2048];
        shared_ptr m_subtitleDataSource;
        unsigned short m_subtitleDataSourceID;
        uint8_t field_2106;
        uint8_t field_2107[5];
        SoundManager* field_2112;
    };

    template <typename...> // 1 instantiations, e.g. <shared_ptr<graphics::SpriteAtlasReference> >
    class Cutscene2DResources::ResourceInfo {
    public:
        ResourceInfo(const ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>& resourceInfo);
    };

    class GlobalCutscene2DResources {
    public:
        uint8_t GetSubtitlesEnabled() const;
        GlobalCutscene2DResources();
        ~GlobalCutscene2DResources();
        uint64_t GetSubtitleFont(unsigned char arg1) const;

    private:
        uint8_t m_subtitlesEnabled;
        uint8_t _unknown_1[15];
    };

    // 0x100524090
    void Cutscene2DResources::Empty() const {
        empty();
    }

    // 0x100529820
    Cutscene2DResources::Cutscene2DResources()
        : eastl::fixed_multimap<int, Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>,
                                20ul, true>(),
          m_subtitleDataSourceID(65535), field_2106(0), field_2112(nullptr) {}

    // 0x100529cf0
    Cutscene2DResources::~Cutscene2DResources() {
        Clear();
        m_subtitleDataSource->~shared_ptr();
        field_1608.~fixed_multimap();
    }

    // 0x100531470
    Cutscene2DResources* Cutscene2DResources::operator=(const Cutscene2DResources& cutscene2DResources) {
        *this = cutscene2DResources;
        field_1608 = cutscene2DResources.field_1608;
        *m_subtitleDataSource = cutscene2DResources.m_subtitleDataSource;
        uint8_t uVar2 = cutscene2DResources.field_2106;
        uint64_t uVar3 = cutscene2DResources.field_2107;
        SoundManager* pSVar1 = cutscene2DResources.field_2112;
        m_subtitleDataSourceID = cutscene2DResources.m_subtitleDataSourceID;
        field_2106 = uVar2;
        field_2107 = uVar3;
        field_2112 = pSVar1;
        return this;
    }

    // 0x1005317e0
    Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>::ResourceInfo(
        const Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>& resourceInfo) {
        *(ResourceInfo<shared_ptr<graphics::SpriteAtlasReference> _>*)(this + 8) = resourceInfo[8];
        *(uint64_t*)this = *(uint64_t*)resourceInfo;
        new ((this + 16)) shared_ptr((resourceInfo + 16));
    }

    // 0x100532610
    Cutscene2DResources::Cutscene2DResources(const Cutscene2DResources& cutscene2DResources)
        : eastl::fixed_multimap<int, Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>,
                                20ul, true>(cutscene2DResources),
          field_1608(cutscene2DResources.field_1608), m_subtitleDataSource(cutscene2DResources.m_subtitleDataSource) {
        uint8_t uVar2 = cutscene2DResources.field_2106;
        uint64_t uVar3 = cutscene2DResources.field_2107;
        SoundManager* pSVar1 = cutscene2DResources.field_2112;
        m_subtitleDataSourceID = cutscene2DResources.m_subtitleDataSourceID;
        field_2106 = uVar2;
        field_2107 = uVar3;
        field_2112 = pSVar1;
    }

    // 0x10053a6d0
    void Cutscene2DResources::RegisterSprite(int arg1, float arg2, float arg3) {
        pair<int const, Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>> local_68;
        pair<int const, Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference> _> _> local_40;
        uint8_t local_38[8];

        uint8_t local_30 = 0;
        local_38._0_4_ = arg2;
        local_38._4_4_ = arg3;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        local_68.pair<int&, void>(arg1, *local_38);
        eastl::rbtree<
            int, eastl::pair<int const, Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>>,
            eastl::less<int>, eastl::fixed_node_allocator<72ul, 20ul, 8ul, 0ul, true>,
            eastl::use_first<
                eastl::pair<int const, Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>>>,
            true, false>::insert(local_40);
    }

    // 0x10053a760
    void Cutscene2DResources::RegisterSound(int arg1, float arg2, float arg3) {
        pair<int const, Cutscene2DResources::ResourceInfo<audio::SoundInstance*>> local_60[32];
        pair<int const, Cutscene2DResources::ResourceInfo<audio::SoundInstance*> _> local_40[8];

        uint8_t local_30 = 0;
        uint64_t local_28 = 0;
        float local_34 = arg3;
        local_60->pair<int&, void>(arg1, arg2);
        eastl::rbtree<
            int, eastl::pair<int const, Cutscene2DResources::ResourceInfo<audio::SoundInstance*>>, eastl::less<int>,
            eastl::fixed_node_allocator<64ul, 5ul, 8ul, 0ul, true>,
            eastl::use_first<eastl::pair<int const, Cutscene2DResources::ResourceInfo<audio::SoundInstance*>>>, true,
            false>::insert(*local_40);
    }

    // 0x10053b380
    shared_ptr Cutscene2DResources::GetSubtitleDataSource() const {
        return m_subtitleDataSource;
    }

    // 0x10053be80
    void Cutscene2DResources::SetSubtitleDataSourceID(unsigned short arg1) {
        m_subtitleDataSourceID = arg1;
    }

} // namespace jag::game
