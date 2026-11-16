// libs/game/runetek5/config/iftype/cutscenes/Cutscene2DResources.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class Cutscene2DResources {
    public:
        class ResourceInfo;
        void Load(float, float, Js5ResourceProvider*, ConfigProvider*, graphics::SpriteAtlasManager*, SoundManager*);
        ulong Ready(float) const;
        void Empty() const;
        void Reload();
        void NotifyPaused(bool);
        void Clear();
        GetSprite(int) const;
        GetSound(int, float, float) const;
        Cutscene2DResources();
        ~Cutscene2DResources();
        Cutscene2DResources* operator=(Cutscene2DResources const&);
        Cutscene2DResources(Cutscene2DResources const&);
        void RegisterSprite(int, float, float);
        void RegisterSound(int, float, float);
        shared_ptr GetSubtitleDataSource() const;
        void SetSubtitleDataSourceID(unsigned short);
        static float /* 4 bytes */ m_preloadAdvanceSec; // = 2.5f
        static /* 4 bytes */ m_disableResourceLoading;  // = 0

        // data members, from how the methods use this: 2120 bytes
        char _unknown_0[16];
        rbtree_node* field_16; // offset 16
        char _unknown_24[8];
        long field_32; // offset 32
        char _unknown_40[2048];
        shared_ptr m_subtitleDataSource; // offset 2088
        ushort m_subtitleDataSourceID;   // offset 2104
        undefined1 field_2106;           // offset 2106
        undefined5 field_2107;           // offset 2107
        SoundManager* field_2112;        // offset 2112
    };

    template <typename...> // 1 instantiations, e.g. <shared_ptr<graphics::SpriteAtlasReference> >
    class Cutscene2DResources::ResourceInfo {
    public:
        ResourceInfo(ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>> const&);
    };

    class GlobalCutscene2DResources {
    public:
        GetSubtitlesEnabled() const;
        GlobalCutscene2DResources();
        ~GlobalCutscene2DResources();
        GetSubtitleFont(unsigned char) const;

        // data members, from how the methods use this: 16 bytes
        undefined1 m_subtitlesEnabled; // offset 0
        char _unknown_1[15];
    };

    // 0x100522f00, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // GlobalCutscene2DResources::GlobalCutscene2DResources(): jumps straight to the base-object constructor

    // 0x100522f20, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // GlobalCutscene2DResources::~GlobalCutscene2DResources(): jumps straight to the base-object destructor

    // 0x100524090, 16 bytes, inline, placed by class name
    // Cutscene2DResources::Empty() const
    void Cutscene2DResources::Empty() {
        empty();
    }

    // 0x1005297f0, 16 bytes, complete-object constructor, inline, placed by class name
    // Cutscene2DResources::Cutscene2DResources(): jumps straight to the base-object constructor

    // 0x100529810, 16 bytes, complete-object destructor, inline, placed by class name
    // Cutscene2DResources::~Cutscene2DResources(): jumps straight to the base-object destructor

    // 0x100529820, 128 bytes, base-object constructor, inline, placed by class name
    // Cutscene2DResources::Cutscene2DResources()
    void Cutscene2DResources::Cutscene2DResources() {
        _func_decltype_nullptr* in_RSI;

        new (this)
            eastl::fixed_multimap<int, Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>,
                                  20ul, true, eastl::less<int>, eastl::allocator>();
        new (&field_1608) eastl::fixed_multimap<int, Cutscene2DResources::ResourceInfo<audio::SoundInstance*>, 5ul,
                                                true, eastl::less<int>, eastl::allocator>();
        new (m_subtitleDataSource, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_subtitleDataSourceID = 65535;
        field_2106 = 0;
        field_2112 = (SoundManager*)0;
    }

    // 0x100529cf0, 96 bytes, base-object destructor, inline, placed by class name
    // Cutscene2DResources::~Cutscene2DResources()
    void Cutscene2DResources::~Cutscene2DResources() {
        Clear(this);
        m_subtitleDataSource->~shared_ptr();
        (&field_1608)->~fixed_multimap();
        ~fixed_multimap();
    }

    // 0x100531470, 80 bytes, inline, placed by class name
    // Cutscene2DResources::operator=(Cutscene2DResources const&)
    /* Cutscene2DResources::TEMPNAMEPLACEHOLDERVALUE(Cutscene2DResources const&)
    */

    Cutscene2DResources* Cutscene2DResources::operator=(Cutscene2DResources* param_1) {
        SoundManager* pSVar1;
        undefined1 uVar2;
        undefined5 uVar3;

        eastl::fixed_multimap<int, Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>, 20ul,
                              true, eastl::less<int>, eastl::allocator>::
        operator=((fixed_multimap<int, Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>,
                                  20ul, true, eastl::less<int>, eastl::allocator>*)this,
                  (fixed_multimap*)param_1);
        eastl::fixed_multimap<
            int, Cutscene2DResources::ResourceInfo<audio::SoundInstance*>, 5ul, true, eastl::less<int>,
            eastl::allocator>::operator=((fixed_multimap<int, Cutscene2DResources::ResourceInfo<audio::SoundInstance*>,
                                                         5ul, true, eastl::less<int>, eastl::allocator>*)&field_1608,
                                         (fixed_multimap*)&param_1->field_1608);
        shared_ptr<EnumType>::operator=((shared_ptr<EnumType>*)m_subtitleDataSource,
                                        (shared_ptr*)param_1->m_subtitleDataSource);
        uVar2 = param_1->field_2106;
        uVar3 = param_1->field_2107;
        pSVar1 = param_1->field_2112;
        m_subtitleDataSourceID = param_1->m_subtitleDataSourceID;
        field_2106 = uVar2;
        field_2107 = uVar3;
        field_2112 = pSVar1;
        return this;
    }

    // 0x1005317d0, 16 bytes, complete-object constructor, inline, placed by class name
    // Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference> >::ResourceInfo(Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference> > const&): jumps straight to the base-object constructor

    // 0x1005317e0, 32 bytes, base-object constructor, inline, placed by class name
    // Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference> >::ResourceInfo(Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference> > const&)
    void
    Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>::ResourceInfo(ResourceInfo* param_1) {
        *(ResourceInfo*)(this + 8) = param_1[8];
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 16)) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(param_1 + 16));
    }

    // 0x100532600, 16 bytes, complete-object constructor, inline, placed by class name
    // Cutscene2DResources::Cutscene2DResources(Cutscene2DResources const&): jumps straight to the base-object constructor

    // 0x100532610, 128 bytes, base-object constructor, inline, placed by class name
    // Cutscene2DResources::Cutscene2DResources(Cutscene2DResources const&)
    void Cutscene2DResources::Cutscene2DResources(Cutscene2DResources* param_1) {
        SoundManager* pSVar1;
        undefined1 uVar2;
        undefined5 uVar3;

        new (this)
            eastl::fixed_multimap<int, Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>,
                                  20ul, true, eastl::less<int>, eastl::allocator>(param_1);
        new (&field_1608, (fixed_multimap*)&param_1->field_1608)
            eastl::fixed_multimap<int, Cutscene2DResources::ResourceInfo<audio::SoundInstance*>, 5ul, true,
                                  eastl::less<int>, eastl::allocator>();
        new (m_subtitleDataSource, (shared_ptr*)param_1->m_subtitleDataSource) shared_ptr<oldscape::dash3d::Decor>();
        uVar2 = param_1->field_2106;
        uVar3 = param_1->field_2107;
        pSVar1 = param_1->field_2112;
        m_subtitleDataSourceID = param_1->m_subtitleDataSourceID;
        field_2106 = uVar2;
        field_2107 = uVar3;
        field_2112 = pSVar1;
    }

    // 0x10053a6d0, 144 bytes, inline, placed by class name
    // Cutscene2DResources::RegisterSprite(int, float, float)
    void Cutscene2DResources::RegisterSprite(int param_1, float param_2, float param_3) {
        pair<int const, Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>> local_68[40];
        pair local_40[8];
        undefined1 local_38[8];
        undefined1 local_30;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28[20];
        int local_14;

        local_30 = 0;
        local_38._0_4_ = param_2;
        local_38._4_4_ = param_3;
        local_14 = param_1;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_28, (_func_decltype_nullptr*)0);
        eastl::pair<int const, Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>>::pair<
            int&, void>(local_68, &local_14, (ResourceInfo*)local_38);
        eastl::rbtree<
            int, eastl::pair<int const, Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>>,
            eastl::less<int>, eastl::fixed_node_allocator<72ul, 20ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<
                eastl::pair<int const, Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>>>,
            true, false>::insert(local_40);
        eastl::pair<int const, Cutscene2DResources::ResourceInfo<shared_ptr<graphics::SpriteAtlasReference>>>::~pair(
            local_68);
        local_38->~InterfaceMouseEvent();
    }

    // 0x10053a760, 96 bytes, inline, placed by class name
    // Cutscene2DResources::RegisterSound(int, float, float)
    void Cutscene2DResources::RegisterSound(int param_1, float param_2, float param_3) {
        pair<int const, Cutscene2DResources::ResourceInfo<audio::SoundInstance*>> local_60[32];
        pair local_40[8];
        float local_38;
        float local_34;
        undefined1 local_30;
        undefined8 local_28;
        int local_1c;

        local_30 = 0;
        local_28 = 0;
        local_38 = param_2;
        local_34 = param_3;
        local_1c = param_1;
        eastl::pair<int const, Cutscene2DResources::ResourceInfo<audio::SoundInstance*>>::pair<int&, void>(
            local_60, &local_1c, (ResourceInfo*)&local_38);
        eastl::rbtree<
            int, eastl::pair<int const, Cutscene2DResources::ResourceInfo<audio::SoundInstance*>>, eastl::less<int>,
            eastl::fixed_node_allocator<64ul, 5ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<int const, Cutscene2DResources::ResourceInfo<audio::SoundInstance*>>>, true,
            false>::insert(local_40);
    }

    // 0x10053b380, 16 bytes, inline, placed by class name
    // Cutscene2DResources::GetSubtitleDataSource() const
    undefined1* Cutscene2DResources::GetSubtitleDataSource() {
        return m_subtitleDataSource;
    }

    // 0x10053be80, 16 bytes, inline, placed by class name
    // Cutscene2DResources::SetSubtitleDataSourceID(unsigned short)
    void Cutscene2DResources::SetSubtitleDataSourceID(ushort param_1) {
        m_subtitleDataSourceID = param_1;
    }

} // namespace jag::game

namespace jag::fixedfunction {
    // 0x100522f60, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // function<void (unsigned int, game::CutscenePlaybackEndReason), 64ul, 16ul, (Methods)0>::~function(): jumps straight to the base-object destructor

} // namespace jag::fixedfunction
